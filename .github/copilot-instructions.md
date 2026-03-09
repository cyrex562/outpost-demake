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
- `outpost_recompiled_c/`
  - Active self-contained workspace for structural rewiring and code modifications.
  - `CMakeLists.txt`: standalone build scaffold.
  - `themed/`: copied themed split files used as working inputs.
  - `LLM_REWIRE_PLAN.md`: iterative task plan for scaffolding, relocation, include rewiring, and compile stabilization.

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
- Perform structural and bug/include fixes in `outpost_recompiled_c/` to avoid mutating source reference exports.
- Treat `decompiled_c/split_outpost/themed/` as immutable reference input.
- Route unknown dependencies through `include/core/missing_deps.h` and track each item in `outpost_recompiled_c/docs/MISSING_DEPENDENCIES.md`.
- Resolve placeholders via a Ghidra validation loop (`reversing/ghidra_projects/` + MCP verification) before replacing temporary declarations.
- Keep behavior fidelity first; refactor readability second.
- Cross-check uncertain details in Ghidra before making structural changes.
- Document assumptions when translating decompiler output into cleaner code.

## Phase 2: Decompiler artifact fixup guidance

The codebase contains Ghidra decompiler artifacts that need systematic resolution.
Follow `outpost_recompiled_c/LLM_REWIRE_PLAN.md` Phase 2 tasks.

### Register arguments (`in_XX`)

Ghidra emits `in_BX`, `in_DX`, `in_AX`, etc., for register-passed parameters.
These must be promoted to proper function parameters:

1. Find the function's address (Ghidra naming suffix, e.g., `_8128`).
2. Use **Ghidra MCP** or **ReVa MCP** (`get-decompilation`, `find-cross-references`) to verify the true calling convention.
3. Replace the `in_XX` local variable declaration with a function parameter.
4. Update callers if they exist in the codebase.

### Segment registers (`unaff_SS`, `unaff_CS`)

In flat-model 32-bit compilation, segment registers are implicit:

- `CONCAT22(unaff_SS, x)` → `(void *)&x` or `&x`
- `CONCAT22(unaff_CS, addr)` → function pointer / code address
- `unaff_SI`, `unaff_DI`, `unaff_BP` → callee-saved regs, verify via Ghidra whether they are parameters or locals.

### CONCAT macros

- `CONCAT22(seg, off)` → flat pointer or `((uint32_t)hi << 16) | lo`
- `CONCAT11(hi, lo)` → `((uint16_t)hi << 8) | lo`
- Use Ghidra data-flow analysis to determine pointer vs. integer usage.

### Hex constants

Ghidra often emits raw hex for Win16 message codes, resource IDs, and control IDs.
Cross-reference against `resources/ui_control_ids.json` and Win16 SDK constants.

### Win16 API functions

180 unique Win16 APIs are called across ~1,938 sites. Declarations live in
`include/platform/win16_api.h`; stubs in `src/platform/win16_api_stubs.c`.
Verify parameter types against Win16 SDK documentation.

### MCP verification tools

- **Ghidra MCP**: symbol lookup, cross-references, structure inspection.
- **ReVa MCP**: `get-decompilation`, `get-functions`, `find-cross-references`, `find-constant-uses`, `trace-data-flow-forward/backward`, `search-decompilation`, `set-function-prototype`.
- Workflow details: `outpost_recompiled_c/docs/GHIDRA_VERIFICATION_GUIDE.md`.
