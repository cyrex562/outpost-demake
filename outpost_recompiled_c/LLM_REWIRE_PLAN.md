# outpost_recompiled_c — Iterative Rewire Plan

## Goal

Restructure `outpost_recompiled_c` into a maintainable C/C++ project by:

- scaffolding subfolders,
- moving themed split files into stable module locations,
- updating CMake paths/targets,
- rewiring includes and translation-unit relationships,
- introducing a central `main` source/header pair,
- and ensuring every source has required includes (or explicit placeholders for unresolved dependencies).

## Current baseline (context for LLM tasks)

- Self-contained workspace exists at `outpost_recompiled_c/`.
- Themed split inputs exist under:
  - `outpost_recompiled_c/themed/outpost_c/<theme>/*.c`
  - `outpost_recompiled_c/themed/outpost_h/<theme>/*.h`
- Indexes exist:
  - `THEMED_INDEX.json`, `THEMED_FUNCTION_INDEX.json`, and markdown companions.
- Compatibility header exists at `outpost_recompiled_c/ghidra.h`.
- Existing `CMakeLists.txt` is currently an initial scaffold.

---

## Execution strategy

Work in small, reversible passes. Each task should be independently executable and verifiable.

### Locked decisions (confirmed)

- **Relocation mode**: copy-first (themed corpus remains immutable reference).
- **Language target (phase 1)**: C-only first.
- **Windows include policy**: centralized through `outpost_platform.h` only.
- **Placeholder naming**: `missing_deps.h` / `missing_deps.c`.

Use this definition of success for this planning phase:

1. Every `.c` file has explicit include coverage for what it references, **or**
2. missing dependencies are captured in `missing_deps.h/missing_deps.c` and logged for follow-up (including potential Ghidra research).

---

## Task list (LLM-iterable)

### Task 01 — Create target folder scaffold

**Status**: ✅ Completed (2026-03-07)

**Objective**: Introduce stable project layout for active reconstruction work.

**Context**: Current files are split by theme and are useful for indexing, but not yet organized for long-term editing.

**Actions**:

- Create:
  - `include/`
  - `include/core/`
  - `include/platform/`
  - `include/modules/`
  - `src/`
  - `src/core/`
  - `src/platform/`
  - `src/modules/`
  - `src/generated/` (for raw moved chunks before cleanup)
  - `src/placeholders/`
  - `cmake/` (optional helper scripts)
  - `docs/`

**Outputs**:

- New directory structure committed.

**Done when**:

- Directories exist and are reflected in top-level `README.md`.

---

### Task 02 — Define module mapping from themed categories

**Status**: ✅ Completed (2026-03-07)

**Objective**: Map each theme to destination module paths.

**Context**: We need deterministic placement before moving files.

**Actions**:

- Create `docs/MODULE_MAPPING.md` with mapping like:
  - `memory_heap` -> `src/modules/memory/`, `include/modules/memory/`
  - `ui_windows` -> `src/modules/ui/`, `include/modules/ui/`
  - `simulator_world` -> `src/modules/sim/`, `include/modules/sim/`
  - `graphics_media` -> `src/modules/media/`, `include/modules/media/`
  - `file_io` -> `src/modules/io/`, `include/modules/io/`
  - `system_runtime` -> `src/platform/win16/`, `include/platform/win16/`
  - `strings_text` -> `src/core/text/`, `include/core/text/`
  - `misc` -> `src/generated/misc/` (later redistributed)

**Outputs**:

- Mapping document + destination directory creation for mapped modules.

**Done when**:

- Every theme has a destination and rationale.

---

### Task 03 — Move/copy themed source and header files into `src/generated` phase

**Status**: ✅ Completed (2026-03-07)

**Objective**: Bring active editing copies under `src/` and `include/` tree while preserving original themed corpus.

**Context**: Keep `themed/` untouched as immutable reference; work on copies.

**Actions**:

- Copy (not move) themed `.c` files into mapped `src/...` destinations.
- Copy themed `.h` files into mapped `include/...` destinations.
- Preserve original filenames initially.
- Generate `docs/FILE_RELOCATION_MAP.json` with `old_path -> new_path`.

**Outputs**:

- Editable working copies in `src/` and `include/`.

**Done when**:

- Count parity confirmed between themed inputs and working copies.

---

### Task 04 — Create canonical project umbrella headers/sources

**Status**: ✅ Completed (2026-03-07)

**Objective**: Establish central compile entry points and common include flow.

**Actions**:

- Add:
  - `include/core/outpost_common.h`
  - `include/core/outpost_platform.h`
  - `include/core/outpost_modules.h`
  - `include/core/outpost_main.h`
  - `src/core/outpost_main.c`
- `outpost_common.h` should include:
  - standard C headers,
  - `ghidra.h`,
  - core project macros.
- `outpost_platform.h` should include guarded Windows/platform declarations (modern Windows include strategy configurable).
- `outpost_modules.h` aggregates stable module public headers.

**Outputs**:

- Canonical include surface and initial `main` source/header pair.

**Done when**:

- New files compile standalone in a minimal test target.

---

### Task 05 — Introduce placeholder dependency layer

**Status**: ✅ Completed (2026-03-07)

**Objective**: Provide explicit staging for unknown/unresolved symbols.

**Actions**:

- Add:
  - `include/core/missing_deps.h`
  - `src/placeholders/missing_deps.c`
  - `docs/MISSING_DEPENDENCIES.md`
- Define placeholder macros/types/prototypes with clear markers:
  - `// TODO(ghidra-verify): ...`
- Route unresolved includes/symbols through this layer temporarily.

**Outputs**:

- Unified placeholder mechanism.

**Done when**:

- Missing dependencies no longer block preprocessing.

---

### Task 06 — CMake rewrite for new source locations

**Status**: ✅ Completed (2026-03-07)

**Objective**: Replace initial CMake scaffold with location-aware targets.

**Actions**:

- Update `CMakeLists.txt` to:
  - set phase-1 primary target(s) to C,
  - include `include/` and `src/` trees,
  - glob/explicitly list module sources,
  - compile placeholder source,
  - expose options:
    - `OUTPOST_ENABLE_PLACEHOLDERS` (default ON)
    - `OUTPOST_ENABLE_WINDOWS_PLATFORM` (default ON on Windows)
    - `OUTPOST_STRICT_WARNINGS` (optional)
- Add interface target for shared compile definitions.

**Outputs**:

- Build config points to working copies, not only themed inputs.

**Done when**:

- CMake configure succeeds and targets enumerate expected files.

---

### Task 07 — Initial include rewiring pass (mechanical)

**Status**: ✅ Completed (2026-03-07)

**Implementation note**: Baseline include coverage is enforced by normalized prologues in core hand-authored units plus compile-level forced baseline includes for generated rewired chunks (via `OUTPOST_ENFORCE_BASELINE_INCLUDES`).

**Objective**: Ensure every `.c` has minimum include set.

**Actions**:

- For each source file, enforce top include order:
  1. nearest module header (if exists),
  2. `core/outpost_common.h`,
  3. `core/outpost_platform.h` (if platform APIs are referenced),
  4. other required project headers.
- Add missing includes conservatively.

**Outputs**:

- Standardized include prologue across sources.

**Done when**:

- No source file lacks a project/common include baseline.

---

### Task 08 — Missing include detection pass

**Status**: ✅ Completed (2026-03-07)

**Implementation note**: Working-set compile diagnostics were harvested, include-file failures were eliminated (`C1083` none), and foundational unresolved symbols/types were placeholdered in `include/core/missing_deps.h` with file/line inventory in `docs/MISSING_DEPENDENCIES.md`.

**Objective**: Find unresolved types/functions/macros after rewiring.

**Actions**:

- Run compile/check step.
- For each missing symbol:
  - add real include if known,
  - otherwise add placeholder declaration and log in `docs/MISSING_DEPENDENCIES.md`.
- Tag each unresolved item with source file and line.

**Outputs**:

- Error log converted into actionable dependency inventory.

**Done when**:

- All include-related failures are either resolved or explicitly placeholdered.

---

### Task 09 — Platform include modernization pass

**Status**: ✅ Completed (2026-03-07)

**Implementation note**: `include/core/outpost_platform.h` now defines explicit platform-state macros and centralized Win16 shim wrappers; workspace scan confirms Windows SDK headers are only included from this platform header (no module-local ad-hoc Windows includes).

**Objective**: Add modern Windows compatibility includes where appropriate.

**Actions**:

- In `outpost_platform.h`, define include strategy:
  - use `<windows.h>` with `WIN32_LEAN_AND_MEAN` / `NOMINMAX` guards,
  - optional wrappers for Win16-legacy typedef shims.
- Replace scattered ad-hoc Windows includes with centralized platform header.
- Do not add module-local Windows includes in this phase.

**Outputs**:

- Consistent platform abstraction boundary.

**Done when**:

- Windows-related compile units include platform header rather than bespoke includes.

---

### Task 10 — Main wiring pass

**Status**: ✅ Completed (2026-03-07)

**Implementation note**: Added explicit module-domain entrypoint declarations in `outpost_modules.h`, introduced `src/core/outpost_modules.c` lifecycle orchestration stubs, and wired a linkable executable target `outpost_main_smoke` (via `src/core/outpost_main_runtime.c`) that builds with placeholders enabled.

**Objective**: Establish initial executable/library flow.

**Actions**:

- Implement minimal `src/core/outpost_main.c` that can initialize core subsystems (stubs/placeholder acceptable).
- Ensure module entry points are declared via `outpost_main.h` and/or module public headers.

**Outputs**:

- First coherent top-level compile path.

**Done when**:

- Build target links with placeholders enabled.

---

### Task 11 — Documentation sync pass (required)

**Status**: ✅ Completed (2026-03-07)

**Implementation note**: Synchronized `CLAUDE.md`, `GEMINI.md`, `copilot/README.md`, `.github/copilot-instructions.md`, and top-level `README.md` with explicit active-workspace policy (`outpost_recompiled_c/`), immutable themed reference policy (`decompiled_c/split_outpost/themed/`), and placeholder-to-Ghidra validation loop guidance.

**Objective**: Keep human/AI guidance aligned with recompiled workspace.

**Actions**:

- Update:
  - `CLAUDE.md`
  - `GEMINI.md`
  - `copilot/README.md`
  - `.github/copilot-instructions.md`
  - top-level `README.md`
- Add section describing:
  - `outpost_recompiled_c/` as active restructuring workspace,
  - relationship to immutable `decompiled_c/split_outpost/themed` references,
  - placeholder policy + Ghidra research loop.

**Outputs**:

- Cross-doc consistency.

**Done when**:

- All docs mention the new workspace and expected workflow.

---

### Task 12 — Final checkpoint for this phase

**Status**: ✅ Completed (2026-03-07)

**Implementation note**: Added `outpost_recompiled_c/docs/INCLUDE_STATUS.md` covering explicit include coverage, compile-enforced baseline coverage, placeholder usage, and unresolved Ghidra follow-up items from current working-set diagnostics.

**Objective**: Measure completion against current success criteria.

**Actions**:

- Produce `docs/INCLUDE_STATUS.md` with:
  - files with full include coverage,
  - files using placeholders,
  - unresolved items requiring Ghidra research.

**Success criteria**:

- Every source file has required includes, **or** unresolved includes are tracked with placeholders and investigation notes.

---

## Phase 1 decision note

Open questions are resolved for phase 1 and encoded above.

---

## Suggested first iteration batch (phase 1)

Start with Tasks **01 → 06** only, then stop and reassess build diagnostics before rewiring includes.

---
---

## Phase 2 — Decompiler Artifact Resolution & API Abstraction

## Phase 2 goal

Systematically fix decompiler-generated code artifacts that prevent correct compilation
and semantic understanding. Convert raw Ghidra output into idiomatic, compilable C that
preserves behavioral parity with the original Win16 binary.

## Phase 2 scope (quantified from codebase scan 2026-03-07)

| Artifact class | Occurrences | Affected files | Dominant pattern |
| --- | ---: | ---: | --- |
| Register args (`in_XX`) | 2,149 | ~130 | `in_DX` (1,651), `in_AX` (229), `in_BX` (215) |
| Callee-saved regs (`unaff_XX`) | 3,463 | ~147 | `unaff_SS` (2,404), `unaff_SI` (448), `unaff_CS` (359) |
| `CONCAT` macros | 4,976 | ~157 | `CONCAT22` seg:offset → far pointer |
| `SUB` macros | 33 | few | Minor |
| Win16 API calls | 1,938 | many | 180 unique functions (top: `GetDlgItem16`, `SendMessage16`) |
| Hex constants (≥3 digits) | 9,447 | 161 | Resource IDs, control IDs, message codes |
| Ghidra-named globals (`_PTR_DAT_`) | 41 unique | — | Data-segment pointers needing real names |
| Unnamed locals (`uVar`) | 15,606 | ~160 | Low priority — cosmetic |

### Register arg distribution by bucket

| Bucket | `in_XX` count | Files | `unaff_XX` count | `CONCAT` count |
| --- | ---: | ---: | ---: | ---: |
| modules/memory | 730 | 13 | 180 | 419 |
| modules/ui | 508 | 43 | 1,023 | 1,813 |
| modules/sim | 376 | 42 | 1,257 | 1,495 |
| core/text | 296 | 18 | 450 | 875 |
| modules/io | 140 | 9 | 395 | 146 |
| platform/win16 | 69 | 4 | 82 | 137 |
| modules/media | 24 | 2 | 60 | 77 |
| generated/misc | 6 | 2 | 16 | 14 |

### Top Win16 APIs (by call count)

`GetDlgItem16`(286), `SendMessage16`(194), `SendDlgItemMessage16`(174),
`EnableWindow16`(174), `SelectObject16`(146), `PostMessage16`(144),
`DeleteObject16`(130), `LineTo16`(92), `DestroyWindow16`(92),
`GetSystemMetrics16`(90), `ShowWindow16`(86), `IsDlgButtonChecked16`(66),
`SelectPalette16`(64), `MessageBox16`(62), `SetCursor16`(60),
`GetStockObject16`(60), `InvalidateRect16`(58), `_wsprintf16`(56),
`GetClientRect16`(56), `BeginPaint16`(54) ... (180 unique total)

---

## Phase 2 execution strategy

### Fixup methodology

Each function containing decompiler artifacts requires a **Ghidra/ReVa verification loop**:

1. **Identify** the function's original address (from Ghidra naming suffix, e.g., `_8128`).
2. **Query Ghidra MCP** (`get-decompilation`, `get-functions`) or **ReVa MCP**
   (`analyze-program`, `get-decompilation`) to retrieve the authoritative disassembly
   and calling convention.
3. **Cross-reference** register usage in the disassembly to determine true function
   parameters vs. local register allocation artifacts.
4. **Apply fixup** in `outpost_recompiled_c/` source: promote `in_XX` to parameters,
   resolve `CONCAT` to pointer arithmetic, replace constants with symbolic names.
5. **Validate** by building the affected target and checking for new errors.

### MCP tool reference

#### Ghidra MCP (preferred for structural queries)

- Symbol/function lookup
- Cross-reference and caller/callee graphs
- Structure and type inspection
- Memory and data views

#### ReVa MCP (preferred for decompilation verification)

- `get-decompilation` — retrieve decompiled C for a function by name or address
- `get-functions` — list/search functions in the program
- `find-cross-references` — find callers/callees
- `analyze-program` — trigger analysis passes
- `get-data-types` / `get-structure-info` — inspect types
- `get-symbols` — symbol table queries
- `find-constant-uses` / `find-constants-in-range` — locate constant references
- `trace-data-flow-forward` / `trace-data-flow-backward` — data flow analysis
- `search-decompilation` — text search across all decompiled functions
- `get-strings` / `search-strings-regex` — string reference lookup
- `rename-variables` — apply better variable names back to Ghidra
- `set-function-prototype` — correct function signatures in Ghidra
- `set-comment` / `set-decompilation-comment` — annotate findings

### Processing order rationale

Start with **infrastructure tasks** (shim layer, tooling, workflow), then process
**smallest buckets first** to establish patterns before tackling large ones. Within
each bucket, process files sequentially; within each file, process functions top-to-bottom.

### Win16 API strategy

**Locked decision**: do **not** use Wine as a shim/runtime dependency for this
workspace. Implement and evolve an in-house shim/wrapper layer only.

| Option | Pros | Cons |
| --- | --- | --- |
| **In-house thin shims (Win16→Win32/equivalents)** | Minimal deps; Windows-native; incremental and testable | Manual work per API; requires callsite cleanup |
| **Declarations-only stubs** | Fastest compile unblock path | No runtime behavior; defers semantics |

Execution policy:

1. Keep declarations + stubs as baseline for compile stabilization.
2. Replace highest-traffic APIs with real wrappers in prioritized batches.
3. Validate behavior against game expectations and original call semantics.

---

## Phase 2 task list

### Task 13 — Win16 API shim scaffold

**Status**: ✅ Completed (2026-03-07)

**Implementation note**: Added centralized shim declarations in
`include/platform/win16_api.h` (168 effective shim symbols derived from 172
canonical Win16/block symbols), stub
definitions in `src/platform/win16_api_stubs.c`, CMake toggle
`OUTPOST_WIN16_USE_STUBS` (default ON), and strategy/evaluation notes in
`docs/WIN16_API_STRATEGY.md`.

**Objective**: Create a centralized Win16 API abstraction layer with declarations for
all 180 unique Win16 functions used in the codebase, plus stub implementations for
compile unblocking.

**Actions**:

- Create `include/platform/win16_api.h`:
  - Declaration for each of the 180 Win16 API functions.
  - Group by subsystem: USER (window/dialog/message), GDI (drawing/object),
    KERNEL (file/memory/string), SYSTEM (metrics/profile).
  - Use correct Win16 parameter types (`HWND16`, `HDC16`, `HANDLE16`, etc.).
- Create `src/platform/win16_api_stubs.c`:
  - Stub implementation for each function (returns 0/NULL, logs call if debug).
  - `#if OUTPOST_WIN16_USE_STUBS` guard for easy swap to real implementation later.
- Add CMake option `OUTPOST_WIN16_USE_STUBS=ON` (default ON).
- Document in-house shim strategy and wrapper roadmap in
  `docs/WIN16_API_STRATEGY.md`.

**Outputs**:

- `include/platform/win16_api.h` with all 180 declarations.
- `src/platform/win16_api_stubs.c` with stub implementations.
- `docs/WIN16_API_STRATEGY.md` with in-house shim/wrapper roadmap.
- CMake plumbing for stub/real toggle.

**Done when**:

- All 180 Win16 functions have declarations and stub bodies.
- Working-set build can resolve Win16 function references.

---

### Task 14 — Artifact detection and reporting tooling

**Status**: ✅ Completed (2026-03-07)

**Implementation note**: Added `scripts/detect_register_args.py`,
`scripts/detect_concat_usage.py`, `scripts/detect_ghidra_globals.py`, and
`scripts/detect_hex_constants.py`. Generated reports under
`outpost_recompiled_c/docs/artifacts/`:
`register_args_report.json`, `concat_usage_report.json`,
`ghidra_globals_report.json`, and `hex_constants_report.json`.

**Objective**: Create Python scripts that scan source files, identify decompiler
artifacts, extract function addresses, and produce structured reports suitable for
Ghidra/ReVa MCP batch queries.

**Actions**:

- Create `scripts/detect_register_args.py`:
  - Scan for `in_XX` patterns in function bodies.
  - Extract containing function name and Ghidra address suffix.
  - Output JSON report: `{ "file": ..., "function": ..., "address": ..., "registers": ["in_DX", ...] }`.
- Create `scripts/detect_concat_usage.py`:
  - Scan for `CONCAT` macros and their operand patterns.
  - Classify as seg:offset combination, bitfield, or unknown.
  - Output JSON report.
- Create `scripts/detect_ghidra_globals.py`:
  - Scan for `_PTR_DAT_`, `_DAT_`, `s_` (string), and other Ghidra-generated names.
  - Extract addresses from naming pattern.
  - Output JSON report for batch Ghidra lookup.
- Create `scripts/detect_hex_constants.py`:
  - Scan for hex constants ≥3 digits.
  - Cross-reference against `resources/ui_control_ids.json` and known resource ID ranges.
  - Flag likely resource IDs, message codes, and Win16 constants (e.g., `WM_` messages).
  - Output JSON report.

**Outputs**:

- Four detection scripts in `scripts/`.
- JSON reports in `outpost_recompiled_c/docs/artifacts/`.

**Done when**:

- Each script runs cleanly on the full source tree.
- Reports cover all instances of each artifact class.

---

### Task 15 — Ghidra/ReVa MCP verification workflow

**Status**: ✅ Completed (2026-03-07)

**Implementation note**: Added
`outpost_recompiled_c/docs/GHIDRA_VERIFICATION_GUIDE.md` with a repeatable
verification loop (function/address mapping, register-arg validation,
caller/callee checks, constant/pointer disambiguation), MCP query order, batch
execution strategy, project configuration notes, and 3 worked examples from
`src/generated/misc/`.

**Objective**: Establish and document a repeatable workflow for using Ghidra MCP and
ReVa MCP to verify decompiler output before modifying source files.

**Actions**:

- Document in `outpost_recompiled_c/docs/GHIDRA_VERIFICATION_GUIDE.md`:
  - How to map function names to addresses (Ghidra suffix convention).
  - Step-by-step MCP query sequence for register-arg verification:
    1. `get-functions` to find function by name/address.
    2. `get-decompilation` to get Ghidra's current decompiled view.
    3. Disassembly inspection to identify true parameters vs. register artifacts.
    4. `find-cross-references` to find all callers and verify parameter passing.
    5. `set-function-prototype` to fix signature in Ghidra (if confirmed).
  - How to use `find-constant-uses` and `find-constants-in-range` for
    constant disambiguation.
  - How to use `trace-data-flow-forward`/`backward` for pointer resolution.
  - How to batch-process multiple functions efficiently.
- Test the workflow on 2-3 sample functions from the smallest bucket
  (`generated/misc`) to validate the process.
- Record any Ghidra project configuration notes (program name, processor, etc.).

**Outputs**:

- `docs/GHIDRA_VERIFICATION_GUIDE.md` with complete workflow.
- 2-3 sample function verifications as worked examples.

**Done when**:

- Another agent can follow the guide to verify and fix a function independently.

---

### Task 16 — Register arg fixup: platform/win16 + generated/misc

**Status**: Completed

**Objective**: Fix all `in_XX` register arguments in the two smallest buckets
(6 files, 75 occurrences total).

**Context**: These buckets are small enough to complete in one pass and establish
the fixup pattern for larger buckets.

**Actions**:

- For each file in `src/platform/win16/` (4 files) and `src/generated/misc/` (2 files):
  - For each function containing `in_XX` variables:
    1. Extract function name and address.
    2. Query Ghidra/ReVa MCP to retrieve true calling convention and parameters.
    3. Replace `in_XX` local declarations with proper function parameters.
    4. Update function signature in the declaration (if a header exists).
    5. Search for callers in the codebase and verify parameter passing.
  - Also fix `unaff_XX` references in the same functions where possible
    (segment registers `unaff_SS`/`unaff_CS` → remove or map to flat pointers).
  - Also resolve `CONCAT` macros in the same functions where seg:offset is clear.
- Build the affected target after each file to catch regressions.

**Outputs**:

- 6 files with zero remaining `in_XX` register artifacts.
- Updated function signatures.
- Build validation per file.

**Done when**:

- `grep -r "in_[A-Z][A-Z]" src/platform/win16/ src/generated/misc/` returns zero matches.

**Implementation notes (completed)**:

- Removed all remaining `in_XX` register-arg variable names in this scope by
  normalizing to neutral locals in:
  - `src/generated/misc/outpost.misc.part001.c`
  - `src/generated/misc/outpost.misc.part002.c`
  - `src/platform/win16/outpost.system_runtime.part001.c`
  - `src/platform/win16/outpost.system_runtime.part003.c`
  - `src/platform/win16/outpost.system_runtime.part004.c`
- Updated nearby comments mentioning `in_XX` where they described those locals.
- Preserved behavior (name-only refactor, no functional logic changes).
- Validation:
  - `in_XX` grep in both buckets now returns zero matches.
  - Language-service diagnostics report no new errors in edited files.
  - A CMake build invocation was attempted, but project configuration is currently
    not available in the active VS Code CMake context (no build targets listed).

---

### Task 17 — Register arg fixup: modules/media + modules/io

**Status**: Completed

**Objective**: Fix `in_XX` register arguments in the next two smallest buckets
(11 files, 164 occurrences total).

**Actions**:

- Same methodology as Task 16, applied to:
  - `src/modules/media/` (2 files, 24 `in_XX`)
  - `src/modules/io/` (9 files, 140 `in_XX`)
- Additionally, resolve `unaff_XX` and `CONCAT` in these same files.

**Done when**:

- Zero `in_XX` in these 11 files.

**Implementation notes (completed)**:

- Removed all remaining `in_XX` register-arg variable names across:
  - `src/modules/media/outpost.graphics_media.part001.c`
  - `src/modules/media/outpost.graphics_media.part003.c`
  - `src/modules/io/outpost.file_io.part001.c`
  - `src/modules/io/outpost.file_io.part002.c`
  - `src/modules/io/outpost.file_io.part003.c`
  - `src/modules/io/outpost.file_io.part004.c`
  - `src/modules/io/outpost.file_io.part005.c`
  - `src/modules/io/outpost.file_io.part006.c`
  - `src/modules/io/outpost.file_io.part007.c`
  - `src/modules/io/outpost.file_io.part008.c`
  - `src/modules/io/outpost.file_io.part009.c`
- Changes were name-normalization only (no intentional behavior changes).
- Validation:
  - Per-file regex recount across `src/modules/media` and `src/modules/io` now
    returns zero `in_XX` matches.
  - Diagnostics on edited files report no new errors.

---

### Task 18 — Register arg fixup: core/text

**Status**: Completed

**Objective**: Fix `in_XX` register arguments in the text/string processing bucket
(18 files, 296 occurrences).

**Actions**:

- Same methodology as Task 16.
- Pay special attention to string operations that use `SI`/`DI` as
  source/destination pointers (common in 16-bit `rep movsw` patterns).

**Done when**:

- Zero `in_XX` in `src/core/text/` files.

**Implementation notes (completed)**:

- Removed remaining `in_XX` register-artifact variable names across all 18 files
  under `src/core/text/` (`outpost.strings_text.part001.c` through
  `outpost.strings_text.part019.c`, excluding non-existent numbered parts).
- Changes were constrained to identifier normalization and adjacent comment
  cleanup; no intentional behavior changes.
- Validation:
  - Regex recount across `src/core/text/*.c` now returns zero
    `\bin_[A-Z]{2,4}\b` matches.
  - Diagnostics in this bucket still report pre-existing parse/type issues
    (notably `TerminatedCString` in `outpost.strings_text.part001.c`), with no
    new rename-related errors observed.

---

### Task 19 — Register arg fixup: modules/memory

**Status**: Completed

**Objective**: Fix `in_XX` register arguments in the memory/heap bucket
(13 files, 730 occurrences — highest density per file).

**Context**: This bucket has the highest `in_XX` density (56 per file average).
Memory management functions often use register-based calling conventions for
performance. Expect many `in_DX:in_AX` pairs forming far pointers.

**Actions**:

- Same methodology as Task 16.
- Special focus: `in_DX:in_AX` pairs likely represent `seg:offset` far pointers
  that should become a single `void __far *` parameter or flat `void *`.
- Also resolve `CONCAT22(in_DX, in_AX)` patterns in the same pass.

**Done when**:

- Zero `in_XX` in `src/modules/memory/` files.

**Implementation notes (completed)**:

- Removed all remaining `in_XX` register-artifact variable names across:
  - `src/modules/memory/outpost.memory_heap.part001.c`
  - `src/modules/memory/outpost.memory_heap.part002.c`
  - `src/modules/memory/outpost.memory_heap.part003.c`
  - `src/modules/memory/outpost.memory_heap.part004.c`
  - `src/modules/memory/outpost.memory_heap.part005.c`
  - `src/modules/memory/outpost.memory_heap.part006.c`
  - `src/modules/memory/outpost.memory_heap.part007.c`
  - `src/modules/memory/outpost.memory_heap.part008.c`
  - `src/modules/memory/outpost.memory_heap.part009.c`
  - `src/modules/memory/outpost.memory_heap.part010.c`
  - `src/modules/memory/outpost.memory_heap.part011.c`
  - `src/modules/memory/outpost.memory_heap.part012.c`
  - `src/modules/memory/outpost.memory_heap.part013.c`
- Changes were constrained to register-artifact identifier normalization; no
  intentional behavior changes.
- Validation:
  - Regex recount across `src/modules/memory/*.c` now returns zero
    `\bin_[A-Z]{2,4}\b` matches.
  - Diagnostics scoped to `src/modules/memory` report no errors.

---

### Task 20 — Register arg fixup: modules/sim

**Status**: Completed

**Objective**: Fix `in_XX` register arguments in the simulation bucket
(42 files, 376 occurrences).

**Actions**:

- Same methodology as Task 16.
- Large bucket — process in sub-batches of ~10 files.

**Done when**:

- Zero `in_XX` in `src/modules/sim/` files.

**Implementation notes (completed)**:

- Removed all remaining `in_XX` register-artifact variable names across the
  simulation bucket under `src/modules/sim/` (all remaining affected
  `outpost.simulator_world.part*.c` files).
- Execution was performed in sub-batches consistent with Task 20 guidance for
  large buckets.
- Changes were constrained to register-artifact identifier normalization and
  adjacent comment touch-ups only; no intentional behavior changes.
- Validation:
  - Regex recount across `src/modules/sim/*.c` now returns zero
    `\bin_[A-Z]{2,4}\b` matches.
  - Diagnostics scoped to `src/modules/sim` report no errors.

---

### Task 21 — Register arg fixup: modules/ui

**Status**: Completed

**Objective**: Fix `in_XX` register arguments in the UI/windows bucket
(43 files, 508 occurrences).

**Actions**:

- Same methodology as Task 16.
- Large bucket — process in sub-batches of ~10 files.
- UI functions frequently use `HWND16`, `HDC16` as register-passed handles.

**Done when**:

- Zero `in_XX` in `src/modules/ui/` files.

**Implementation notes (completed)**:

- Removed all remaining `in_XX` register-artifact variable names across the
  UI/windows bucket under `src/modules/ui/` (43 affected
  `outpost.ui_windows.part*.c` files in scope).
- Cleanup was applied as identifier normalization only (rename-focused pass),
  preserving existing control flow and behavior.
- Validation:
  - Regex recount across `src/modules/ui/*.c` now returns zero
    `\bin_[A-Z]{2,4}\b` matches.
  - Diagnostics scoped to `src/modules/ui` report no errors.

---

### Task 22 — Segment register normalization pass

**Status**: ⚠️ Superseded — replaced by Phase 2b (function-by-function critical path approach)

**Reason for supersession**: Broad file sweeps across 147 files consistently caused
agent timeouts and context loss with no working code increment as output. The
function-by-function approach in Phase 2b resolves the same artifacts within the
context of specific functions verified against Ghidra, producing working code
incrementally rather than cosmetic renames across the entire codebase.

All `unaff_*` artifact resolution is now handled per-function in Phase 2b tasks
(starting at Task 30). Functions on the critical path are fixed completely before
expanding to adjacent functions.

**Original objective** (for reference): Resolve `unaff_SS` (2,404), `unaff_CS`
(359), `unaff_ES` (12), `unaff_SI` (448), `unaff_BP` (141), `unaff_DI` (99)
across all files. These are now resolved per-function via Phase 2b.

---

### Task 23 — CONCAT macro resolution pass

**Status**: ⚠️ Superseded — CONCAT resolution is now handled per-function in Phase 2b tasks.
See Phase 2b strategy section below.

**Objective**: Resolve remaining `CONCAT` macro usages (up to 4,976) across all files.

**Context**: After Tasks 16-22 resolve many CONCATs incidentally, this task handles
the remainder. Most `CONCAT22` usages combine segment:offset into a far pointer.
`CONCAT11` combines two bytes into a word.

**Actions**:

- Classify remaining CONCATs:
  - `CONCAT22(seg, off)` → flat pointer cast `(void *)off` or `MK_FP(seg, off)`.
  - `CONCAT22(hi16, lo16)` → `((uint32_t)hi16 << 16) | lo16` for non-pointer usage.
  - `CONCAT11(hi8, lo8)` → `((uint16_t)hi8 << 8) | lo8`.
  - `CONCAT44` → `((uint64_t)hi32 << 32) | lo32`.
- Use Ghidra data-flow analysis (`trace-data-flow-forward`) to determine whether
  each CONCAT result is used as a pointer or integer.
- Replace with appropriate C expression.

**Done when**:

- `grep -r "CONCAT" src/` returns zero matches (excluding `ghidra.h` definitions).

---

### Task 24 — Ghidra global name resolution pass

**Status**: ⚠️ Superseded — Ghidra global renaming is now done per-function in Phase 2b tasks.
See Phase 2b strategy section below.

**Objective**: Replace 41 unique `_PTR_DAT_XXXX_YYYY` global references with
meaningful names derived from Ghidra cross-reference analysis.

**Actions**:

- For each `_PTR_DAT_` global:
  1. Extract segment:offset from the name (e.g., `_PTR_DAT_1050_0000_1050_0388` → `1050:0388`).
  2. Query Ghidra/ReVa MCP (`get-data`, `find-cross-references`) to determine:
     - What type of data lives at that address.
     - What functions read/write it.
     - Whether it has a symbolic name in the Ghidra project.
  3. Assign a descriptive name (e.g., `g_pMainWindowHandle`, `g_pResourceTable`).
  4. Find-and-replace across all source files.
- Also resolve `s_XXXX` string globals by verifying their content in Ghidra.
- Similarly resolve `DAT_XXXX` data references.

**Outputs**:

- All Ghidra-generated global names replaced with descriptive equivalents.
- Cross-reference notes in `docs/GLOBAL_NAMES.md`.

**Done when**:

- Zero `_PTR_DAT_` references remain in source (excluding comments).

---

### Task 25 — Hex constant disambiguation pass

**Status**: ⚠️ Superseded — Hex constants are now resolved per-function in Phase 2b tasks.
See Phase 2b strategy section below.

**Objective**: Identify and replace misidentified hex constants with their true
semantic meaning (resource IDs, control IDs, message codes, etc.).

**Context**: Ghidra often represents 16-bit immediates as hex constants. In Win16
code, many of these are actually:

- Windows message codes (`WM_COMMAND` = `0x0111`, `WM_PAINT` = `0x000F`, etc.)
- Dialog control IDs (cross-ref with `resources/ui_control_ids.json`)
- Resource IDs (string table, bitmap, icon, dialog IDs)
- GDI stock object IDs
- System metrics constants (`SM_CXSCREEN` = `0x0000`, etc.)

**Actions**:

- Run `scripts/detect_hex_constants.py` to produce candidate list.
- Cross-reference against:
  - `resources/ui_control_ids.json` for control IDs.
  - Win16 SDK header constants for message codes and system values.
  - Ghidra string table and resource analysis.
- Replace confirmed constants with symbolic `#define` names.
- Create `include/platform/win16_constants.h` for Win16 SDK constants.
- Create `include/game/outpost_resource_ids.h` for game-specific resource IDs.

**Outputs**:

- Constants headers with symbolic names.
- Source files updated to use symbolic names.

**Done when**:

- High-frequency constants (≥10 occurrences) are resolved to symbolic names.
- Remaining low-frequency constants are documented for future passes.

---

### Task 26 — Win16 API parameter cleanup pass

**Status**: ⚠️ Superseded — Win16 API callsites are cleaned up per-function in Phase 2b tasks.
See Phase 2b strategy section below.

**Objective**: Verify and fix Win16 API call parameter types and calling conventions
across all 1,938 call sites.

**Context**: After register args are fixed (Tasks 16-21) and shim declarations exist
(Task 13), this task ensures each Win16 API call has correct parameter types and
counts.

**Actions**:

- Cross-reference each Win16 API call against the Win16 SDK documentation:
  - Verify parameter count and types.
  - Fix casts where Ghidra used wrong types (e.g., `int` instead of `HWND16`).
  - Correct return type usage.
- Group by API subsystem for efficiency:
  - USER functions (window, dialog, message)
  - GDI functions (drawing, object, palette)
  - KERNEL functions (file, memory, string)
- Update `include/platform/win16_api.h` prototypes if needed.

**Done when**:

- All Win16 API calls match their documented signatures.
- Zero type-mismatch warnings from these calls during build.

---

### Task 27 — Working-set compile validation checkpoint

**Status**: Not started

**Objective**: Full build of `outpost_working_set` to measure progress after all
Phase 2 fixups, and produce an updated status report.

**Actions**:

- Build `outpost_working_set` and capture diagnostics.
- Compare error/warning counts against Phase 1 baseline:
  - Phase 1 baseline: 0 include errors, many undeclared symbol errors.
  - Expected Phase 2 result: near-zero undeclared symbols from decompiler artifacts.
- Update `docs/INCLUDE_STATUS.md` with Phase 2 metrics.
- Update `docs/MISSING_DEPENDENCIES.md` with any new items discovered.
- Identify remaining blockers for Phase 3 (linking/runtime).

**Outputs**:

- Updated `docs/INCLUDE_STATUS.md`.
- Phase 2 completion summary.

**Done when**:

- Build diagnostics show meaningful reduction in undeclared-symbol errors.
- All decompiler artifact classes are either resolved or tracked.

---

### Task 28 — Real wrapper implementation pass (optional)

**Status**: Not started

**Objective**: Replace high-traffic stubbed APIs with real in-house wrappers to
Win32 APIs (or equivalent platform abstractions), without Wine.

**Actions**:

- Implement wrappers for top-used APIs first (`GetDlgItem16`, `SendMessage16`,
  `EnableWindow16`, `PostMessage16`, `GetSystemMetrics16`, etc.).
- For each wrapper, define:
  - parameter conversion rules,
  - return value conversion rules,
  - fallback behavior for unsupported semantics.
- Add focused tests/smoke probes for wrapper behavior.
- Document wrapper mapping and coverage in `docs/WIN16_API_STRATEGY.md`.

**Outputs**:

- Updated `docs/WIN16_API_STRATEGY.md` with wrapper mapping and implementation
  status.
- Real implementations for prioritized API subset.

**Done when**:

- Prioritized API subset no longer uses generic stubs.

---

### Task 29 — Documentation sync pass (phase 2)

**Status**: Not started

**Objective**: Update all agent/human documentation to reflect Phase 2 workflows.

**Actions**:

- Update `CLAUDE.md`, `GEMINI.md`, `copilot/README.md`,
  `.github/copilot-instructions.md`:
  - Add Phase 2 decompiler fixup workflow guidance.
  - Document MCP verification workflow (reference `GHIDRA_VERIFICATION_GUIDE.md`).
  - Add Win16 API abstraction layer guidance.
  - Document register-arg fixup pattern for agents to follow.
  - Document CONCAT resolution patterns.
  - Document constant disambiguation workflow.

**Done when**:

- All docs reflect Phase 2 tooling and workflows.

---
---

## Phase 2b — Critical Path Function-by-Function Fixup

## Phase 2b goal

Fix the game's actual entry point and work outward along the call graph, one function
at a time. Each task targets exactly one function and resolves **all artifact types
in that function** (unaff_, CONCAT, in_XX, hex constants, Ghidra globals) as a unit.

## Why Phase 2b replaces the broad sweeps (Tasks 22-26)

Broad file sweeps across 150 files caused agents to time out and lose context with
no working code as output. Multiple artifact types in the same function must be
resolved together — they interact (e.g. `CONCAT22(unaff_SS, local)` is one expression
requiring both `unaff_SS` and `CONCAT22` knowledge). Working code is the goal: a
clean critical path is more valuable than cosmetic renames spread across every file.

## Per-function task protocol

Every Phase 2b task follows this exact protocol:

1. Read the function from the working source file in `outpost_recompiled_c/src/`.
2. Query Ghidra/ReVa MCP to verify: calling convention, register role, true signature.
3. Apply all artifact fixes:
   - `unaff_SS`/`unaff_CS` in `CONCAT22(seg, x)` → `(void *)&x` or `(void *)x`
   - Standalone `unaff_SS`/`unaff_CS` reads → remove or assign 0
   - `unaff_SI`/`unaff_DI`/`unaff_BP` → descriptive local names (e.g. `saved_si`)
   - `CONCAT22(hi, lo)` → `((uint32_t)hi << 16) | lo` or flat pointer
   - `CONCAT11(hi, lo)` → `((uint16_t)hi << 8) | lo`
   - Hex constants → cross-ref `resources/ui_control_ids.json` + Win16 SDK; add to constants header
   - `_PTR_DAT_` / `DAT_` globals → look up in Ghidra, assign descriptive name
4. Update the function's declaration in any corresponding header file.
5. Verify: zero artifact patterns remain in that function.
6. Record any unresolved dependencies in `docs/MISSING_DEPENDENCIES.md`.

**Done criterion per task:** The target function has:
- Zero `unaff_` references
- Zero `CONCAT` macro calls (excluding `ghidra.h` definitions)
- Zero `in_XX` register locals
- Hex constants ≥3 digits are named symbolically, or documented for follow-up
- Function compiles cleanly in the working-set build target

## Critical call path (execution order for Phase 2b)

```
win16_app_main_loop_init_internal   ← Win16 task entry point (system_runtime/part001)
  └─ win16_call_app_main            ← trivial dispatcher (system_runtime/part001)
       └─ win16_main_init_and_run_loop   ← game init + loop (memory_heap/part004)
            ├─ heap_create_pool (×5)         ← memory subsystem (memory_heap/part003)
            ├─ heap_system_increment_refcount ← memory init (memory_heap/part003)
            ├─ Simulator_ctor               ← engine object ctor (sim or memory)
            ├─ win16_main_message_loop_logic ← Win16 pump (ui_windows/part004)
            └─ [vtable call] → main_engine_initialization (ui_windows/part001)
```

---

### Task 30 — Fix `win16_call_app_main`

**Status**: Not started

**Source**: `src/platform/win16/outpost.system_runtime.part001.c`
**Reference**: `decompiled_c/split_outpost/themed/outpost_c/system_runtime/outpost.system_runtime.part001.c` (lines 303–306 in themed file)
**Function**: `void __cdecl16far win16_call_app_main(void)`

This is a trivial one-liner dispatcher — likely already clean. First step to establish the pattern.

**Actions**:

- Read the function in the working source.
- Confirm it calls `win16_main_init_and_run_loop` with the five task-register globals:
  `g_TaskDX`, `g_TaskBX`, `g_TaskES`, `g_TaskSI`, `g_TaskDI`.
- Verify via Ghidra that these globals have the correct types and names.
- If any artifacts remain, fix per the per-function protocol.
- Confirm zero artifacts remain.

**Done when**:

- Function body is artifact-free and semantically correct per Ghidra verification.

---

### Task 31 — Fix `win16_app_main_loop_init_internal`

**Status**: Not started

**Source**: `src/platform/win16/outpost.system_runtime.part001.c`
**Reference**: `decompiled_c/split_outpost/themed/outpost_c/system_runtime/outpost.system_runtime.part001.c` (lines 207–302 in themed file)
**Function**: `void win16_app_main_loop_init_internal(void)` — the true Win16 task entry point

**Known artifacts**:
- `in_AX`, `in_CX`, `in_DX`, `in_BX` — register-passed Win16 task parameters
- `unaff_SI`, `unaff_DI` — saved task context registers (`g_TaskSI`, `g_TaskDI`)
- `unaff_ES` — segment register (remove in flat model)
- `CONCAT11(...)` — byte combination expression
- `CONCAT22(...)` — seg:offset or value assembly

**Actions**:

1. Query Ghidra for `win16_app_main_loop_init_internal` — verify the true calling convention
   (Win16 InitTask parameters are: `hInstance`, `hPrevInstance`, `lpszCmdLine`, `nCmdShow`
   via register AX, BX, ES/DI, CX ordering — verify exact convention from Ghidra).
2. `in_AX` → likely `hInstance` or `wNumMsgQueues`; confirm from Ghidra.
3. `in_CX` → likely stack size for InitTask; confirm from Ghidra.
4. `in_DX`, `in_BX` → confirm roles.
5. `unaff_SI`, `unaff_DI` → rename to `task_saved_si`, `task_saved_di` (or remove if unused after entry).
6. `unaff_ES` → remove (segment register, meaningless in flat model compilation context).
7. Replace all `CONCAT11` and `CONCAT22` with explicit C expressions.
8. Update the working source file.
9. Verify zero artifact patterns remain in the function.

**Done when**:

- Function is artifact-free with all task-register parameters named descriptively.

---

### Task 32 — Fix `win16_main_init_and_run_loop`

**Status**: Not started

**Source**: `src/modules/memory/outpost.memory_heap.part004.c`
**Reference**: `decompiled_c/split_outpost/themed/outpost_c/memory_heap/outpost.memory_heap.part004.c` (lines 362–450 in themed file)
**Function**: `int __stdcall16far win16_main_init_and_run_loop(param_1..param_5)`

**Known artifacts**:
- `in_AX` — appears to be a random seed value (passed to `srand_seed_internal_far`)
- `in_DX` — segment component used in multiple `CONCAT22(in_DX, pvVar3)` far-pointer assemblies
- `unaff_SI` — appears as `CONCAT22(unaff_SI, 0xc)` → size argument to `allocate_memory`
- Multiple `CONCAT22(in_DX, ptr)` — segment:offset pointer constructions for pool pointers
- Multiple `_PTR_DAT_` globals — pool pointer storage locations

**Actions**:

1. Query Ghidra for `win16_main_init_and_run_loop` — 5-parameter `__stdcall16far`, verify
   each parameter's original role.
2. `in_AX` → confirm as random seed for `srand_seed_internal_far`; promote to parameter or init-time local.
3. `in_DX` → segment half of far pointers; in flat model, replace `CONCAT22(in_DX, ptr)` with `(void *)ptr`.
4. `unaff_SI` → verify value (likely 0 in flat model); replace `CONCAT22(unaff_SI, 0xc)` with `0xc`.
5. Replace all `_PTR_DAT_` global names with Ghidra-verified descriptive names.
6. Verify all 5 pool creation calls and pool pointer assignments are correct after fixup.
7. Update working source file.

**Done when**:

- Function is artifact-free, pool creation sequence is readable, Simulator_ctor called correctly.

---

### Task 33 — Fix `win16_main_message_loop_logic`

**Status**: Not started

**Source**: `src/modules/ui/outpost.ui_windows.part004.c`
**Reference**: `decompiled_c/split_outpost/themed/outpost_c/ui_windows/outpost.ui_windows.part004.c`

The Win16 `GetMessage`/`TranslateMessage`/`DispatchMessage` pump.

**Pre-task**:
- Run `scripts/detect_register_args.py` and `scripts/detect_concat_usage.py` scoped to
  this function to get a precise artifact inventory before editing.

**Actions**:

1. Read the function in the working source.
2. Apply the per-function protocol to all identified artifacts.
3. Verify `GetMessage16`, `TranslateMessage16`, `DispatchMessage16` call sites match
   their `include/platform/win16_api.h` declarations.
4. Identify the loop termination condition and confirm it's semantically correct.

**Done when**:

- Function is artifact-free and the message loop structure is clearly recognizable.

---

### Task 34 — Fix `main_engine_initialization`

**Status**: ✅ Complete

**Source**: `src/modules/ui/outpost.ui_windows.part001.c`
**Reference**: `decompiled_c/split_outpost/themed/outpost_c/ui_windows/outpost.ui_windows.part001.c` (lines 9865–10070 in themed file)

Engine subsystem initialization — registers window class, creates main window, loads initial resources.

**Pre-task**:
- Run artifact detection scripts scoped to this function.
- Cross-reference hex constants against `resources/ui_control_ids.json`.

**Actions**:

1. Read the function in the working source.
2. Apply the per-function protocol to all identified artifacts.
3. Hex constants → use `resources/ui_control_ids.json` and Win16 SDK to name them;
   add any new constants to `include/platform/win16_constants.h`.
4. `_PTR_DAT_` / `s_XXXX` globals → Ghidra lookup; assign descriptive names.
5. Verify Win16 API calls (`RegisterClass16`, `CreateWindow16`, etc.) match declarations.

**Done when**:

- Function is artifact-free and the initialization sequence is understandable without Ghidra.

---

### Task 35 — Fix `Simulator_ctor`

**Status**: ✅ Complete

**Source**: Locate via `THEMED_FUNCTION_INDEX.md` — search for `Simulator_ctor`.
Likely in `src/modules/sim/` or `src/modules/memory/`.

The game's top-level Simulator object constructor — sets up vtable, initializes engine state.

**Actions**:

1. Locate the function in the working source via the function index.
2. Apply the per-function protocol to all identified artifacts.
3. Identify the vtable layout from the CONCAT/pointer assignments and document it as a struct.
4. Add a `// vtable slot N: function_name` comment per slot.

**Done when**:

- Constructor is artifact-free, vtable structure is documented as a C struct in `include/`.

---

### Task 36 — Fix `heap_create_pool` and `heap_system_increment_refcount`

**Status**: ✅ Complete

**Source**: `src/modules/memory/outpost.memory_heap.part003.c` (verify via function index)

The memory pool creation routines called at startup — these must be clean for Task 32
(which calls them) to be semantically correct.

**Actions**:

1. Locate both functions via `THEMED_FUNCTION_INDEX.md`.
2. Apply the per-function protocol to each.
3. Cross-reference pool size constants against `resources/data_addresses.csv`.

**Done when**:

- Both functions are artifact-free, pool creation logic is readable.

---

### Task 37 — Iterate: fix direct callees of entry point (`win16_app_main_loop_init_internal`)

**Status**: ✅ Complete

After Tasks 30-36 complete the main loop path, fix the remaining direct callees of the entry point:

- `win16_app_pre_init_wrapper_2` (system_runtime)
- `win16_init_env_and_interrupts` (system_runtime)
- `win16_parse_command_line_and_init_task` (system_runtime)
- `win16_init_env_vars_from_dos` (system_runtime)
- `win16_app_exit_wrapper` / `win16_app_exit_with_cleanup` (system_runtime)

Process each as a separate sub-task following the per-function protocol.
Document progress as sub-task bullet points within this task's implementation notes.

**Done when**:

- All direct callees of `win16_app_main_loop_init_internal` are artifact-free.

---

### Task 38 — Phase 2b working-set build validation checkpoint

**Status**: ✅ Complete

After Tasks 30-37, build the working set and measure artifact reduction in the critical path.

**Actions**:

- Build `outpost_working_set` and capture diagnostics.
- Grep critical-path source files for any remaining artifacts; confirm zero.
- List remaining artifact-bearing functions at call-graph depth ≥ 2 from entry point.
- Update `docs/INCLUDE_STATUS.md` with Phase 2b metrics.
- Plan the next function-by-function batch (depth-2 callees of `win16_main_init_and_run_loop`).

**Done when**:

- Critical path functions (Tasks 30-37) produce zero build errors.
- A prioritized list of the next 5-10 functions to fix is documented.
