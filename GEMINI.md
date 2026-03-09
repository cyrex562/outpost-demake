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
- `outpost_recompiled_c/` — active self-contained workspace for structural rewiring and compile recovery.
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

## Active reconstruction workspace: `outpost_recompiled_c/`

- `CMakeLists.txt` — standalone build scaffold for recompiled work.
- `ghidra.h` — local compatibility header copy.
- `themed/` — copied themed split files and index artifacts.
- `LLM_REWIRE_PLAN.md` — iterative execution plan for:
  - folder scaffolding,
  - file relocation strategy,
  - CMake location rewrites,
  - include rewiring,
  - placeholder dependency tracking,
  - and compile-first stabilization.

Current practical goal:

- work through structural + bug/include issues until project units are compile-capable,
- if missing dependencies are unknown, create/route through placeholders and mark for Ghidra validation.

### Active workspace policy (required)

- `decompiled_c/split_outpost/themed/` is the **immutable reference source** for analysis.
- `outpost_recompiled_c/` is the **active modification workspace** for rewiring and compilation recovery.
- Unknown dependencies must be staged through `include/core/missing_deps.h` and tracked in
  `outpost_recompiled_c/docs/MISSING_DEPENDENCIES.md`.
- Placeholder removal follows a **Ghidra-first verification loop** (symbols/structures/call flow confirmed in `reversing/ghidra_projects/` via MCP).

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
- Perform active code restructuring in `outpost_recompiled_c/`, keeping `decompiled_c/` split outputs as reference inputs.
- Validate ambiguous decompilation details in Ghidra before refactors.
- Keep translation steps reversible and documented.
- Preserve behavior parity first; style cleanup second.

---

## Phase 2: Decompiler artifact fixup

Phase 2 tasks in `outpost_recompiled_c/LLM_REWIRE_PLAN.md` resolve Ghidra artifacts:

### Artifact fixup patterns

- **Register args** (`in_BX`, `in_DX`, `in_AX`): Promote to function parameters after verifying calling convention via Ghidra/ReVa MCP.
- **Segment registers** (`unaff_SS`, `unaff_CS`): Remove or flatten — these are meaningless in flat-model compilation. `CONCAT22(unaff_SS, x)` → `&x`.
- **CONCAT macros**: `CONCAT22(seg, off)` → flat pointer; `CONCAT11(hi, lo)` → byte combine. Use Ghidra data-flow to classify.
- **Hex constants**: Cross-reference against `resources/ui_control_ids.json` and Win16 SDK headers. Replace with symbolic `#define` names.
- **Win16 APIs**: 180 unique functions, shim declarations in `include/platform/win16_api.h`.
- **Ghidra globals** (`_PTR_DAT_`): Look up address in Ghidra, assign descriptive names.

### MCP verification tools

- **Ghidra MCP**: symbols, cross-references, structures, memory views.
- **ReVa MCP**: `get-decompilation`, `get-functions`, `find-cross-references`, `find-constant-uses`, `trace-data-flow-forward/backward`, `search-decompilation`, `set-function-prototype`, `rename-variables`.
- Full workflow: `outpost_recompiled_c/docs/GHIDRA_VERIFICATION_GUIDE.md`.
