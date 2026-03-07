import subprocess
import json
import time
import os
import sys
from typing import List, Dict, Any, Optional

# --- REQUIRED SDK ---
# Install via: pip install google-genai
try:
    from google import genai
    from google.genai import types
except ImportError:
    print(
        "Error: 'google-genai' SDK not found. Please install it with: pip install google-genai"
    )
    sys.exit(1)

# --- CONFIGURATION ---
# It is recommended to set this as an environment variable
GEMINI_API_KEY = os.environ.get("GEMINI_API_KEY", "YOUR_API_KEY_HERE")
MODEL_NAME = "gemini-2.5-pro"  # Using 2.0-flash for speed; swap to "gemini-1.5-pro" or "gemini-2.5-pro" if available
PROGRESS_FILE = "analysis_progress.json"
PACING_INTERVAL = 2.0  # Seconds to wait between AI calls to avoid rate limits
GHIDRA_LIMIT = 5000  # Maximum functions to fetch for analysis


class GhidraBridge:
    """Encapsulates communication with Ghidra via the ghydra CLI tool."""

    def _execute(self, namespace: str, command: str, **kwargs) -> Any:
        """Helper to run 'ghydra --json' commands and parse output."""
        args = ["ghydra", "--json", namespace, command]
        for key, value in kwargs.items():
            # Convert python_style_keys to CLI --kebab-case
            cli_arg = "--" + key.replace("_", "-")
            args.extend([cli_arg, str(value)])

        try:
            result = subprocess.run(args, capture_output=True, text=True, check=False)
            if result.returncode != 0:
                print(f"[!] Ghidra Error: {result.stderr.strip()}")
                return None
            return json.loads(result.stdout) if result.stdout.strip() else None
        except Exception as e:
            print(f"[!] Execution failure: {e}")
            return None

    def get_functions(self) -> List[Dict]:
        """Fetches function list from the current Ghidra instance."""
        res = self._execute("functions", "list", limit=GHIDRA_LIMIT)
        return res.get("functions", []) if res else []

    def decompile(self, address: str) -> Optional[str]:
        """Retrieves decompiled C code for a specific address."""
        res = self._execute("functions", "decompile", address=address)
        return res.get("decompiled_code") if res else None

    def rename(self, address: str, name: str):
        """Renames data/symbols at a target address."""
        return self._execute("data", "rename", address=address, name=name)

    def set_comment(self, address: str, comment: str):
        """Sets a function/pre-comment for documentation."""
        return self._execute(
            "functions", "set-comment", address=address, comment=comment
        )


class StateManager:
    """Tracks analysis progress to allow for resumeable sessions."""

    def __init__(self, file_path: str):
        self.file_path = file_path
        self.state = self._load()

    def _load(self) -> Dict:
        if os.path.exists(self.file_path):
            with open(self.file_path, "r") as f:
                return json.load(f)
        return {"completed_functions": [], "discovered_targets": {}}

    def save(self):
        with open(self.file_path, "w") as f:
            json.dump(self.state, f, indent=4)

    def is_processed(self, addr: str) -> bool:
        return addr in self.state["completed_functions"]

    def mark_processed(self, addr: str):
        if addr not in self.state["completed_functions"]:
            self.state["completed_functions"].append(addr)
            self.save()

    def track_target(self, addr: str, info: Dict):
        self.state["discovered_targets"][addr] = info
        self.save()


class AIAnalyst:
    """Handles prompt engineering and interaction with the Gemini API."""

    def __init__(self, api_key: str, model_id: str):
        self.client = genai.Client(api_key=api_key)
        self.model_id = model_id

    def analyze_function(self, code: str) -> List[Dict]:
        """Requests structured analysis of 16-bit C code."""
        prompt = (
            "Analyze the following 16-bit MS-DOS NE decompiled C code. Identify:\n"
            "1. 16-bit far pointer initializations (segment:offset logic).\n"
            "2. Virtual function table (vtable) arrays and their addresses.\n"
            "3. Resource loading calls (e.g., .VOC, .WAV, .PCX) and DOS file I/O.\n\n"
            "Return a JSON list of objects. Each object must contain: "
            "'target_address' (hex), 'suggested_name', 'description', and 'is_vtable' (boolean)."
        )

        try:
            response = self.client.models.generate_content(
                model=self.model_id,
                contents=[prompt, f"CODE:\n{code}"],
                config=types.GenerateContentConfig(
                    response_mime_type="application/json"
                ),
            )
            return json.loads(response.text)
        except Exception as e:
            print(f"[!] AI API Error: {e}")
            return []


def main():
    # Initialize components
    ghidra = GhidraBridge()
    state = StateManager(PROGRESS_FILE)
    ai = AIAnalyst(GEMINI_API_KEY, MODEL_NAME)

    print("[*] Fetching binary metadata from Ghidra...")
    functions = ghidra.get_functions()

    if not functions:
        print(
            "[!] No functions found. Ensure Ghidra is open and GhydraMCP is connected."
        )
        return

    print(f"[*] Found {len(functions)} total functions. Starting analysis...")

    for func in functions:
        addr = func.get("address")
        name = func.get("name")

        if not addr or state.is_processed(addr):
            continue

        print(f"\n[>] Analyzing: {name} ({addr})")

        # 1. Fetch Code
        decompiled_code = ghidra.decompile(addr)
        if not decompiled_code:
            print(f"  [-] Decompilation failed for {addr}")
            state.mark_processed(addr)
            continue

        # 2. AI Analysis
        findings = ai.analyze_function(decompiled_code)

        if findings:
            print(f"  [!] AI found {len(findings)} potential targets.")
            for item in findings:
                t_addr = item.get("target_address")
                t_name = item.get("suggested_name")
                t_desc = item.get("description", "")

                if t_addr and t_name:
                    print(f"    [+] Applying: {t_name} at {t_addr}")

                    # 3. Apply to Ghidra
                    ghidra.rename(t_addr, t_name)
                    if t_desc:
                        ghidra.set_comment(t_addr, f"AI-Generated: {t_desc}")

                    # 4. Save to master list
                    state.track_target(t_addr, item)

        # Mark function as done to prevent re-analysis
        state.mark_processed(addr)

        # Pacing mechanism to respect rate limits
        time.sleep(PACING_INTERVAL)

    print("\n[*] Analysis run complete.")


if __name__ == "__main__":
    main()
