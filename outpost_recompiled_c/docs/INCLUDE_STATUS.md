# Include Status (Task 12 Final Checkpoint)

## Date

2026-03-07

## Scope

This report summarizes include coverage and dependency status for:

- `outpost_recompiled_c/src/**/*.c`
- placeholder/dependency tracking in `docs/MISSING_DEPENDENCIES.md`
- current working-set compile diagnostics

## Coverage summary

| Metric | Value |
| --- | ---: |
| Total C source files | 165 |
| Files with any explicit `#include` | 6 |
| Files with explicit baseline (`core/outpost_common.h` + `core/outpost_platform.h`) | 5 |
| Files without explicit `#include` lines | 159 |
| CMake baseline include enforcement enabled | Yes (`OUTPOST_ENFORCE_BASELINE_INCLUDES=ON`) |
| Include-file compile errors (`C1083` / cannot open include file) | 0 |

## Files with explicit baseline coverage

- `src/core/outpost_main.c`
- `src/core/outpost_modules.c`
- `src/core/text/outpost.strings_text.part001.c`
- `src/core/text/outpost.strings_text.part002.c`
- `src/placeholders/missing_deps.c`

## Files relying on enforced baseline coverage

These files currently rely on compile-level forced includes rather than explicit source prologues.

Breakdown by source bucket:

| Bucket | Files without explicit `#include` |
| --- | ---: |
| `modules/sim` | 56 |
| `modules/ui` | 54 |
| `core/text` | 17 |
| `modules/memory` | 13 |
| `modules/io` | 9 |
| `platform/win16` | 4 |
| `modules/media` | 3 |
| `generated/misc` | 3 |

## Placeholder usage status

| Metric | Value |
| --- | ---: |
| Files directly including `core/missing_deps.h` | 1 |
| Files including legacy umbrella `outpost.h` | 1 |
| Files calling `outpost_missing_dep_stub` | 1 |

Direct usage locations:

- Direct placeholder include: `src/placeholders/missing_deps.c`
- Legacy umbrella include: `src/core/text/outpost.strings_text.part001.c`
- Fallback stub callsite(s): currently within `src/placeholders/missing_deps.c`

## Unresolved items requiring Ghidra research

Primary unresolved dependency inventory is tracked in:

- `outpost_recompiled_c/docs/MISSING_DEPENDENCIES.md`

Current open tracked items: **12** (Win16 type aliases, legacy integral aliases, and temporary umbrella include migration).

Current top undeclared symbols from `outpost_working_set` compile diagnostics (non-include blockers):

- `uVar1` (521)
- `_p_GlobalResourceManager` (393)
- `_p_ResourceManager` (318)
- `u8` (282)
- `uVar2` (272)
- `uVar3` (259)
- `s_1_1050_389a` (251)
- `_p_StringPropertyTable` (224)
- `_this` (216)
- `_p_SimulatorWorldContext` (191)
- `uVar4` (183)
- `g_LastFileErrorMsgID` (162)

These are expected phase-1 decompiler stabilization gaps and should be resolved through the placeholder + Ghidra verification loop before hardening headers.

## Success criteria check (Task 12)

Task 12 success criterion:

> Every source file has required includes, **or** unresolved includes are tracked with placeholders and investigation notes.

Status: **Met (phase 1)**

- Include-file failures are eliminated (`C1083` count = 0).
- Baseline include coverage is guaranteed for all build targets via `OUTPOST_ENFORCE_BASELINE_INCLUDES=ON`.
- Unresolved dependency items are tracked in `MISSING_DEPENDENCIES.md` with file/line and Ghidra follow-up notes.

## Next follow-up

- Convert high-volume buckets (starting with `modules/ui` and `modules/sim`) from enforced include baseline to explicit per-file include prologues.
- Resolve top undeclared symbols through verified module headers and Ghidra-backed declarations.

---

# Phase 2b Decompiler Artifact Cleanup — Checkpoint (Tasks 30–38)

## Date

2026-10-01

## Scope

This section captures Phase 2b progress: function-granular decompiler artifact cleanup along the main entry-point call chain.

## Critical-path functions cleaned (Tasks 30–37)

| Function | File | Status |
| --- | --- | --- |
| `win16_call_app_main` | `outpost.system_runtime.part001.c` | ✅ Clean (was already clean) |
| `win16_app_main_loop_init_internal` | `outpost.system_runtime.part001.c` | ✅ Clean |
| `win16_main_init_and_run_loop` | `outpost.memory_heap.part004.c` | ✅ Clean |
| `win16_main_message_loop_logic` | `outpost.ui_windows.part004.c` | ✅ Clean |
| `main_engine_initialization` | `outpost.ui_windows.part001.c` | ✅ Clean |
| `Simulator_ctor` | `outpost.simulator_world.part001.c` | ✅ Clean |
| `Simulator_dtor` | `outpost.simulator_world.part001.c` | ✅ Clean |
| `heap_create_pool` | `outpost.memory_heap.part003.c` | ✅ Clean |
| `heap_system_increment_refcount` | `outpost.memory_heap.part003.c` | ✅ Clean |
| `win16_app_exit_wrapper` | `outpost.misc.part001.c` | ✅ Clean (trivial) |
| `win16_app_pre_init_wrapper_2` | `outpost.misc.part001.c` | ✅ Clean (trivial) |
| `win16_app_exit_with_cleanup` | `outpost.system_runtime.part001.c` | ✅ Clean |
| `win16_init_env_and_interrupts` | `outpost.strings_text.part001.c` | ✅ Clean (file had 0 artifacts) |
| `win16_init_env_vars_from_dos` | `outpost.strings_text.part001.c` | ✅ Clean (file had 0 artifacts) |
| `win16_parse_command_line_and_init_task` | `outpost.strings_text.part001.c` | ✅ Clean (file had 0 artifacts) |

## Artifact types resolved

| Type | Resolution |
| --- | --- |
| `unaff_SS` / `unaff_CS` | Removed (Win16 segment register reloads — flat model omits these) |
| `in_stack_0000XXXX` | Removed or annotated (Win16 stack-resident register spills) |
| `CONCAT22(seg, local)` | Replaced with `local` (dropped segment half) |
| `_PTR_DAT_1050_0000_1050_XXXX` | Renamed via Ghidra lookup: `g_SimulatorContext`, `g_hAccel`, `g_hInstance`, etc. |
| Vtable far calls with `unaff_CS` | Segment arg dropped from vtable dispatch |

## New globals declared (from Ghidra lookup)

| Global | Address | Description |
| --- | --- | --- |
| `g_TaskPSP` | 1050:5f7e | PSP segment from InitTask16 |
| `g_DosVersionPacked` | 1050:5f82 | Packed DOS version bytes |
| `g_DosEnvInitFlag` | 1050:5f87 | DOS env init flag |
| `g_hInstance` | 1050:038c | Win16 hInstance from WinMain |
| `g_hPrevInstance` | 1050:038e | Win16 hPrevInstance |
| `g_TaskDX_Param` | 1050:0390 | Win16 task DX parameter |
| `g_CmdLineDup` | 1050:0392 | Duplicated command line string |
| `g_hAccel` | 1050:0398 | Accelerator table handle |
| `g_SimulatorContext` | 1050:0298 | Simulator context pointer |
| `g_ExitModeFlag` | 1050:5fc9 | Application exit mode flag (high byte of CX exit code) |

## Build status (Task 38)

- **Build target**: `outpost_main_smoke` (build_task06)
- **Build result**: ✅ Exit 0 — no compile errors
- **Remaining whole-file artifact counts** (other functions not yet cleaned):

| File | Total artifact lines (whole file) |
| --- | ---: |
| `outpost.system_runtime.part001.c` | ~23 |
| `outpost.memory_heap.part004.c` | ~37 |
| `outpost.ui_windows.part004.c` | ~50 |
| `outpost.ui_windows.part001.c` | ~31 |
| `outpost.simulator_world.part001.c` | ~22 |
| `outpost.memory_heap.part003.c` | ~25 |

These counts are for **whole files** — the critical-path functions within them are already clean.

## Next batch (depth-2 callees)

Key call-tree depth-2 functions from `win16_main_init_and_run_loop` that still need cleanup:

- `Resource_Manager_Initialize_Global_Ptr_2024` (simulator_world)
- `Global_Resource_Manager_ctor_init_1010_7e40` (simulator_world)
- `UI_SubDialog_Manager_ctor_init_aeca` (ui_windows)
- `UI_Main_Window_ctor_init_cf6c` (ui_windows)
- `UI_MainWindow_ctor` (ui_windows)
- `Simulator_Global_State_ctor_init_8128` (simulator_world)

---

# Task 27 — Working-Set Compile Validation Checkpoint

## Date

2025-07-11

## Scope

Full build of `outpost_working_set` after Phase 2b (Tasks 30–38) completion.

## outpost_main_smoke status (critical path)

| Metric | Value |
| --- | ---: |
| Build result | ✅ Exit 0 |
| Exe size | 253,952 bytes |
| Compile errors | 0 |
| Critical-path functions clean | 15 (Tasks 30–37) |

## outpost_working_set diagnostics

| Metric | Value |
| --- | ---: |
| Total .c source files | 167 |
| Files with compile errors | 146 |
| Files compiling cleanly | ~21 |
| Total error lines (`error C*`) | 10,286 |

### Top undeclared identifiers

| Identifier | Error count | Category |
| --- | ---: | --- |
| `uVar1` | 595 | Local var (type cascade from undeclared struct) |
| `_p_GlobalResourceManager` | 449 | Global pointer — needs declaration |
| `_p_ResourceManager` | 373 | Global pointer — needs declaration |
| `uVar2` | 297 | Local var cascade |
| `uVar3` | 286 | Local var cascade |
| `_p_SimulatorWorldContext` | 275 | Global pointer — needs declaration |
| `_p_StringPropertyTable` | 250 | Global pointer — needs declaration |
| `s_1_1050_389a` | 235 | String literal global (already in missing_deps.c) |
| `uVar4` | 215 | Local var cascade |
| `_this` | 187 | Overlap alias — needs declaration |
| `g_LastFileErrorMsgID` | 166 | Named global — needs declaration |
| `_p_SimulatorGlobalState` | 146 | Global pointer — needs declaration |
| `_this_ptr` | 120 | Overlap alias — needs declaration |
| `_p_UISubDialogTable` | 100 | Global pointer — needs declaration |

### Files with errors by bucket

| Bucket | Files |
| --- | ---: |
| `core/text` (parts 10–19) | 10 |
| `generated/misc` | 3 |
| `modules/io` (parts 1–9) | 9 |
| `modules/media` | 3 |
| `modules/memory` (non-graduated parts) | 7 |
| `modules/sim` | 8+ |
| `modules/ui` | 50+ |

## Phase 2 success criteria check (Task 27)

| Criterion | Status |
| --- | --- |
| `outpost_main_smoke` builds to exe | ✅ Met |
| Critical-path functions (Tasks 30–37) artifact-free | ✅ Met |
| Include-file failures (`C1083`) | ✅ 0 |
| Baseline include coverage via CMake enforcement | ✅ On |
| Decompiler artifact classes tracked in MISSING_DEPENDENCIES.md | ✅ Met |
| Meaningful reduction in critical-path errors | ✅ Met (critical path: 0 errors) |

## Phase 3 blockers identified

The highest-impact issues for Phase 3 (working-set compile hardening) are:

1. **8 high-frequency global pointers** (`_p_GlobalResourceManager`, `_p_ResourceManager`,
   `_p_SimulatorWorldContext`, `_p_StringPropertyTable`, `_p_SimulatorGlobalState`,
   `_p_UISubDialogTable`, `_this`, `_this_ptr`) — each block hundreds of non-graduated files.
   Fix: forward-declare in `missing_deps.h` or add to `missing_deps.c`.

2. **Undeclared struct types** (`astruct_22`, `astruct_486/487/488`, etc.) cascading into
   `uVarN` local-variable failures. Fix: add minimal forward typedef stubs.

3. **`s_1_1050_389a`** (235 occurrences) — string literal global already partially handled
   in graduated files; needs `extern` exposed in a shared header.

4. **`g_LastFileErrorMsgID`** (166 occurrences) — named global; add to `missing_deps.c`.
