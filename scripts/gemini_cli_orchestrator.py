import subprocess
import json
import time
import os
import sys

# --- REQUIRED SDK ---
# pip install google-genai
try:
    from google import genai
    from google.genai import types
except ImportError:
    print("Error: 'google-genai' SDK not found. Install it with: pip install google-genai")
    sys.exit(1)

# --- CONFIGURATION ---
GEMINI_API_KEY = os.environ.get("GEMINI_API_KEY", "YOUR_API_KEY_HERE")
MODEL_NAME = "gemini-2.0-flash" 
PROGRESS_FILE = "analysis_progress.json"
PACING_INTERVAL = 2.0 

class GeminiCLIBridge:
    """Uses the gemini-cli tool command to bridge to GhidraMCP."""
    
    def _call_tool(self, tool_name, params=None):
        """Executes a gemini-cli tool call and returns parsed JSON."""
        # Command: gemini-cli tool ghydra <tool_name> --arg1 val1 ...
        cmd = ["gemini-cli", "tool", "ghydra", tool_name]
        
        if params:
            for key, value in params.items():
                cmd.append(f"--{key}")
                cmd.append(str(value))
        
        try:
            # We use capture_output to get the JSON result from the CLI
            result = subprocess.run(cmd, capture_output=True, text=True, check=True)
            return json.loads(result.stdout)
        except subprocess.CalledProcessError as e:
            print(f"  [!] CLI Tool Error ({tool_name}): {e.stderr}")
            return None
        except Exception as e:
            print(f"  [!] Unexpected Error: {e}")
            return None

    def get_functions(self, limit=5000):
        # We assume the MCP returns a 'functions' list or similar
        res = self._call_tool("functions_list", {"limit": limit})
        if not res: return []
        return res.get("functions", res.get("items", []))

    def decompile(self, address):
        res = self._call_tool("functions_decompile", {"address": address})
        if not res: return None
        return res.get("decompiled_code", res.get("code"))

    def rename_data(self, address, name):
        return self._call_tool("data_rename", {"address": address, "name": name})

    def set_comment(self, address, comment):
        return self._call_tool("functions_set_comment", {"address": address, "comment": comment})

class StateManager:
    """Handles persistence of analysis progress."""
    def __init__(self, file_path):
        self.file_path = file_path
        self.state = self._load()

    def _load(self):
        if os.path.exists(self.file_path):
            with open(self.file_path, "r") as f:
                return json.load(f)
        return {"completed_functions": [], "discovered_targets": {}}

    def save(self):
        with open(self.file_path, "w") as f:
            json.dump(self.state, f, indent=4)

    def is_processed(self, addr):
        return addr in self.state["completed_functions"]

    def mark_processed(self, addr):
        if addr not in self.state["completed_functions"]:
            self.state["completed_functions"].append(addr)
            self.save()

    def track_target(self, addr, info):
        self.state["discovered_targets"][addr] = info
        self.save()

class AIAnalyst:
    """Manages communication with Google Gemini."""
    def __init__(self, api_key, model_id):
        self.client = genai.Client(api_key=api_key)
        self.model_id = model_id

    def analyze(self, code):
        prompt = (
            "Analyze this 16-bit MS-DOS NE decompiled C code.\n"
            "Identify:\n"
            "1. 16-bit far pointer initializations (segment:offset logic).\n"
            "2. Virtual function table (vtable) arrays.\n"
            "3. Resource loading (.VOC, .WAV, .PCX) or DOS interrupts.\n\n"
            "Return ONLY a JSON list of objects with: 'target_address' (hex), 'suggested_name', 'description'."
        )

        try:
            response = self.client.models.generate_content(
                model=self.model_id,
                contents=[prompt, f"CODE:\n{code}"],
                config=types.GenerateContentConfig(response_mime_type="application/json")
            )
            return json.loads(response.text)
        except Exception as e:
            print(f"  [!] AI Error: {e}")
            return []

def main():
    bridge = GeminiCLIBridge()
    state = StateManager(PROGRESS_FILE)
    ai = AIAnalyst(GEMINI_API_KEY, MODEL_NAME)

    print("[*] Fetching functions via Gemini CLI...")
    functions = bridge.get_functions()
    
    if not functions:
        print("[!] No functions found. Ensure gemini-cli is installed and configured.")
        return

    print(f"[*] Found {len(functions)} functions. Filtering...")
    unprocessed = [f for f in functions if not state.is_processed(f['address'])]
    
    for func in unprocessed:
        addr = func['address']
        print(f"\n[>] Analyzing: {func['name']} ({addr})")
        
        code = bridge.decompile(addr)
        if not code:
            state.mark_processed(addr)
            continue

        findings = ai.analyze(code)
        
        if findings:
            for item in findings:
                t_addr = item.get('target_address')
                t_name = item.get('suggested_name')
                if t_addr and t_name:
                    print(f"    - Applying {t_name} at {t_addr}")
                    bridge.rename_data(t_addr, t_name)
                    desc = item.get('description')
                    if desc:
                        bridge.set_comment(t_addr, f"AI: {desc}")
                    state.track_target(t_addr, item)

        state.mark_processed(addr)
        time.sleep(PACING_INTERVAL)

if __name__ == "__main__":
    main()
