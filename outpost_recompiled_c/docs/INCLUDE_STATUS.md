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

