# GEMINI.md

## What this repository is

This project is an effort to **decompile and rebuild Outpost (DOS/Windows)** from reverse-engineered artifacts.

Core intent:

- preserve original behavior,
- improve readability and structure,
- progressively migrate from raw decompiler output to maintainable code.

---

## Important folders

- `decompiled_c/` — primary exported C code and generated split/index artifacts.
- `reversing/` — reverse engineering data, including the Ghidra project.
- `resources/` — original binaries and full CD-ROM asset set.
- `scripts/` — helper automation, including the split/index pipeline.

---

## Detailed map: `decompiled_c/`

- `outpost.c`: giant decompiled implementation unit.
- `outpost.h`: giant decompiled type/prototype unit.
- `ghidra.h`: compatibility shim for decompiler idioms/macros.
- `CMakeLists.txt`: compile experiment entrypoint for C reconstruction.
- `split_outpost/`: generated navigation-friendly breakdown:
  - `MANIFEST.md`
  - `outpost_c/` and `outpost_h/` (size-based chunks)
  - `themed/` (topic-based chunks + symbol indexes)
    - `THEMED_MANIFEST.md`
    - `THEMED_INDEX.json` / `THEMED_INDEX.md`
    - `THEMED_FUNCTION_INDEX.json` / `THEMED_FUNCTION_INDEX.md`

Use themed and function indexes first for low-token navigation.

---

## Ghidra reference guidance

The Ghidra project lives at:

- `reversing/ghidra_projects/`

Use **Ghidra MCP** when you need authoritative confirmation (symbol intent, callers/callees, structure layout, thunk targets, etc.).

---

## Assets and binaries

`resources/` contains:

- original game binaries,
- asset content from the original CD-ROM under `resources/assets/` (audio, maps, images, fonts, music, videos, UI, and more),
- helper metadata files (`data_addresses.csv`, `ui_control_ids.json`).

Treat `resources/` as canonical for runtime/reference validation.

---

## Working principles

- Prefer chunked/themed sources over monolithic files for analysis.
- Validate ambiguous decompilation details in Ghidra before refactors.
- Keep translation steps reversible and documented.
- Preserve behavior parity first; style cleanup second.
