import json
import time
import os
import sys
import requests

# --- REQUIRED SDKs ---
# pip install google-genai requests
try:
    from google import genai
    from google.genai import types
except ImportError:
    print("Error: 'google-genai' SDK not found. Install it with: pip install google-genai")
    sys.exit(1)

# --- CONFIGURATION ---
# Set your API key as an environment variable or paste it here
GEMINI_API_KEY = os.environ.get("GEMINI_API_KEY", "YOUR_API_KEY_HERE")
MODEL_NAME = "gemini-2.0-flash" 
GHIDRA_PORT = 8192
BASE_URL = f"http://127.0.0.1:{GHIDRA_PORT}"
PROGRESS_FILE = "analysis_progress.json"
PACING_INTERVAL = 2.0 

class GhidraBridge:
    """Communicates with the GhydraMCP REST API using v2.2.0 naming conventions."""
    def __init__(self, base_url, port):
        self.base_url = base_url
        self.port = port

    def test_connection(self):
        """Verified connection using instances_current (per v2.2.0 docs)."""
        try:
            resp = self._request("GET", "instances_current")
            if resp:
                print(f"  [+] Connection verified: {resp.get('program', 'Unknown Program')} (Project: {resp.get('project', 'N/A')})")
                return True
            return False
        except Exception as e:
            print(f"  [!] Connection failed to {self.base_url}: {e}")
            return False

    def _request(self, method, tool_name, params=None, json_data=None):
        """Internal helper to call GhydraMCP tools with the correct port."""
        url = f"{self.base_url}/{tool_name}"
        if params is None: params = {}
        if json_data is None: json_data = {}
        
        # Always include the port
        params["port"] = self.port
        if json_data: json_data["port"] = self.port

        try:
            if method == "GET":
                resp = requests.get(url, params=params, timeout=30)
            else:
                resp = requests.post(url, json=json_data, timeout=30)
            
            if resp.status_code == 404 and "_" in tool_name:
                alt_url = f"{self.base_url}/{tool_name.replace('_', '/')}"
                if method == "GET":
                    resp = requests.get(alt_url, params=params, timeout=30)
                else:
                    resp = requests.post(alt_url, json=json_data, timeout=30)

            resp.raise_for_status()
            return resp.json()
        except Exception as e:
            print(f"  [!] API Error ({tool_name}): {e}")
            return None

    def get_functions(self, limit=5000):
        res = self._request("GET", "functions_list", params={"limit": limit})
        if not res: return []
        
        # Robustly handle different response formats
        if isinstance(res, list): return res
        if isinstance(res, dict):
            return res.get("functions", res.get("items", []))
        return []

    def decompile(self, address):
        res = self._request("GET", "functions_decompile", params={"address": address})
        if not res: return None
        return res.get("decompiled_code", res.get("code"))

    def rename_data(self, address, name):
        return self._request("POST", "data_rename", json_data={"address": address, "name": name})

    def set_function_comment(self, address, comment):
        return self._request("POST", "functions_set_comment", json_data={"address": address, "comment": comment})

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
            "You are an expert reverse engineer analyzing a 16-bit MS-DOS NE binary.\n"
            "Identify:\n"
            "1. 16-bit far pointer initializations (segment:offset logic).\n"
            "2. Virtual function table (vtable) arrays and their locations.\n"
            "3. Resource loading calls (e.g., .VOC, .WAV, .PCX) or DOS interrupt patterns.\n\n"
            "Constraints:\n"
            "- Return ONLY a JSON list of objects.\n"
            "- Each object must have: 'target_address' (hex), 'suggested_name', 'description', and 'is_vtable' (bool).\n"
            "- Use descriptive names (e.g., vtable_SoundManager, ptr_VideoBuffer)."
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
    bridge = GhidraBridge(BASE_URL, GHIDRA_PORT)
    state = StateManager(PROGRESS_FILE)
    ai = AIAnalyst(GEMINI_API_KEY, MODEL_NAME)

    print(f"[*] Connecting to GhydraMCP at {BASE_URL}...")
    if not bridge.test_connection():
        print("[!] Could not connect to Ghidra. Check if the extension is active in Ghidra.")
        return

    functions = bridge.get_functions()
    
    if not functions:
        print("[!] No functions found. Ensure a program is open in Ghidra.")
        return

    print(f"[*] Found {len(functions)} functions. Filtering for unprocessed...")
    unprocessed = [f for f in functions if not state.is_processed(f['address'])]
    print(f"[*] {len(unprocessed)} functions remaining to analyze.")

    for func in unprocessed:
        addr = func['address']
        name = func['name']
        
        print(f"\n[>] Analyzing: {name} ({addr})")
        code = bridge.decompile(addr)
        
        if not code:
            state.mark_processed(addr)
            continue

        findings = ai.analyze(code)
        
        if findings:
            print(f"  [+] AI identified {len(findings)} targets.")
            for item in findings:
                t_addr = item.get('target_address')
                t_name = item.get('suggested_name')
                t_desc = item.get('description', '')

                if t_addr and t_name:
                    print(f"    - Applying {t_name} at {t_addr}")
                    bridge.rename_data(t_addr, t_name)
                    if t_desc:
                        bridge.set_function_comment(t_addr, f"AI Note: {t_desc}")
                    state.track_target(t_addr, item)

        state.mark_processed(addr)
        time.sleep(PACING_INTERVAL)

if __name__ == "__main__":
    main()
