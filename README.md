# outpost-rs

This repository is focused on **decompiling, understanding, and rebuilding Outpost (DOS/Windows era)** while preserving behavior parity with the original game.

## What this project is doing

- Recover readable and maintainable source from decompiler output.
- Reconstruct buildable C/Rust paths from reverse-engineered artifacts.
- Validate behavior against original binaries and assets.

## Repository layout

- `decompiled_c/`
 	- Main exported C/H source from Ghidra.
 	- `outpost.c`, `outpost.h`, `ghidra.h`, and CMake scaffold.
 	- `split_outpost/` contains LLM-friendly chunked outputs and indexes.
- `reversing/`
 	- Reverse engineering source material.
 	- Ghidra project lives under `reversing/ghidra_projects/`.
- `resources/`
 	- Canonical reference data from the original game.
 	- Includes original binaries (`resources/assets/binaries/`) and CD-ROM assets (`resources/assets/**`).
- `scripts/`
 	- Automation for splitting/indexing and analysis orchestration.
- `archive/`
 	- Historical/intermediate reconstruction artifacts.

## `decompiled_c/` navigation guide

- `decompiled_c/outpost.c`
 	- Monolithic Ghidra-exported implementation.
- `decompiled_c/outpost.h`
 	- Monolithic Ghidra-exported types/prototypes.
- `decompiled_c/ghidra.h`
 	- Compatibility macros/types for decompiler output.
- `decompiled_c/CMakeLists.txt`
 	- Build experiment entry for decompiled C.
- `decompiled_c/split_outpost/`
 	- `MANIFEST.md` (size-based chunk inventory)
 	- `outpost_c/`, `outpost_h/` (first pass chunks)
 	- `themed/` (second/third pass outputs):
  		- `THEMED_MANIFEST.md`
  		- `THEMED_INDEX.json` / `THEMED_INDEX.md`
  		- `THEMED_FUNCTION_INDEX.json` / `THEMED_FUNCTION_INDEX.md`
  		- `outpost_c/<theme>/...`
  		- `outpost_h/<theme>/...`

## Recommended workflow

1. Start from `decompiled_c/split_outpost/themed/THEMED_FUNCTION_INDEX.json` to locate relevant functions quickly.
2. Open the corresponding themed chunk instead of the monolithic files.
3. When intent is unclear, refer back to the Ghidra project in `reversing/ghidra_projects/`.
4. Use **Ghidra MCP** to validate symbols, callers/callees, structures, and control flow before major refactors.
5. Preserve behavior first; improve readability second.

## Guidance docs for AI workflows

- `CLAUDE.md`
- `GEMINI.md`
- `.github/copilot-instructions.md`
- `copilot/PROJECT_STRUCTURE.md`

## External references

- INT 21h reference: <https://stanislavs.org/helppc/int_21.html>
- Dispatcher reference: <http://bbc.nvg.org/doc/Master%20512%20Technical%20Guide/m512techb_int21.htm>
