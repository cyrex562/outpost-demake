# Project Structure Reference (Copilot)

## Purpose

This repository reconstructs Outpost from reverse-engineered artifacts (DOS/Windows era), using decompiler exports plus iterative cleanup/refactoring.

## High-value locations

- `decompiled_c/`
  - Raw exported C/H and generated chunk/index outputs.
- `reversing/`
  - Reverse-engineering workspace, including Ghidra project data.
- `resources/`
  - Original binaries + all known CD-ROM assets.
- `scripts/`
  - Automation utilities (including split/index generation).

## `decompiled_c/` quick map

- `outpost.c` — monolithic decompiled implementation.
- `outpost.h` — monolithic decompiled header/types/prototypes.
- `ghidra.h` — compatibility macros/types.
- `CMakeLists.txt` — C build scaffolding.
- `split_outpost/`
  - `MANIFEST.md`
  - `outpost_c/`, `outpost_h/`
  - `themed/`
    - `THEMED_MANIFEST.md`
    - `THEMED_INDEX.json`, `THEMED_INDEX.md`
    - `THEMED_FUNCTION_INDEX.json`, `THEMED_FUNCTION_INDEX.md`

## Ghidra project location and usage

- Ghidra project path: `reversing/ghidra_projects/`
- Recommendation: use **Ghidra MCP** to cross-check:
  - function intent/signatures,
  - call relationships,
  - data structures,
  - thunk/import resolution.

## Resources provenance

- `resources/assets/binaries/` contains original binaries.
- `resources/assets/` contains asset files from the original CD-ROM (audio, video, maps, UI, etc.).
- Use these files as canonical reference for behavior/data validation.
