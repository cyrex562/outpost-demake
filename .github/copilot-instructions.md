# Copilot Instructions for outpost-rs

## Project objective

This repository focuses on **decompiling, understanding, and rebuilding Outpost (DOS/Windows era)** while preserving behavior parity.

## Where to look first

- `decompiled_c/`
  - `outpost.c` and `outpost.h`: monolithic Ghidra exports.
  - `ghidra.h`: compatibility macros/types for decompiler output.
  - `split_outpost/`: LLM-friendly split outputs and indexes.
    - `MANIFEST.md`
    - `themed/THEMED_MANIFEST.md`
    - `themed/THEMED_INDEX.json` / `THEMED_INDEX.md`
    - `themed/THEMED_FUNCTION_INDEX.json` / `THEMED_FUNCTION_INDEX.md`

## Reverse engineering source of truth

The Ghidra project is under:

- `reversing/ghidra_projects/`

When decompiled output is ambiguous, refer back to Ghidra and use **Ghidra MCP** tooling to validate symbols, structures, callers/callees, and control flow.

## Original game data

`resources/` contains canonical reference data:

- `resources/assets/binaries/` (original binaries)
- `resources/assets/` subfolders (asset files from the original CD-ROM)
- metadata files like `data_addresses.csv` and `ui_control_ids.json`

## Working guidance

- Prefer chunked/themed files over monolithic files for context-efficient analysis.
- Keep behavior fidelity first; refactor readability second.
- Cross-check uncertain details in Ghidra before making structural changes.
- Document assumptions when translating decompiler output into cleaner code.
