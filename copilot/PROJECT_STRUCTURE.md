# Project Structure Reference (Copilot)

## Purpose

This repository reconstructs Outpost from reverse-engineered artifacts (DOS/Windows era), using decompiler exports plus iterative cleanup/refactoring.

## High-value locations

- `decompiled_c/`
  - Raw exported C/H and generated chunk/index outputs.
- `outpost_recompiled_c/`
  - Active self-contained reconstruction workspace used for structural rewiring and compile recovery.
  - Contains standalone `CMakeLists.txt`, copied themed inputs, and `LLM_REWIRE_PLAN.md`.
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

## `outpost_recompiled_c/` quick map

- `CMakeLists.txt` — standalone scaffold for iterative compile attempts.
- `ghidra.h` — local compatibility header copy.
- `themed/` — working copy of themed split inputs and indexes.
- `LLM_REWIRE_PLAN.md` — task-by-task plan for scaffolding, file relocation, include rewiring, placeholder handling, and compile stabilization.

Primary near-term objective:

- resolve structural/include bugs until code paths are compile-capable,
- and when unresolved dependencies remain, capture them via placeholders and Ghidra follow-up notes.

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
