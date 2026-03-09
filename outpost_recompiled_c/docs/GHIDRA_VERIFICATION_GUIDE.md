# Ghidra/ReVa Verification Guide

This guide defines the required verification loop before changing decompiled code in
`outpost_recompiled_c/src/**`.

## Goal

Use Ghidra (and MCP tooling when available) to confirm:

- true function signatures/calling conventions,
- whether `in_XX` values are real parameters or decompiler artifacts,
- whether `CONCAT` results are pointers vs integers,
- caller/callee consistency before and after signature edits.

Behavior fidelity comes first; cleanup comes second.

## Repository-specific context

- Active source workspace: `outpost_recompiled_c/`
- Immutable reference corpus: `decompiled_c/split_outpost/themed/`
- Ghidra project root: `reversing/ghidra_projects/`
- Project file observed in repo: `reversing/ghidra_projects/outpost.gpr`

Binary profile notes (from source headers/comments and project context):

- Target family: x86 (Win16-era New Executable)
- Runtime era: Windows 3.1 protected mode
- Frequent decompiler artifacts: register args (`in_DX`, `in_AX`), segment regs
  (`unaff_SS`), far-pointer combines (`CONCAT22`).

## Function/address mapping rules

### Rule A: suffix-address mapping

If function name ends with `_<hex4>`, treat that as the function offset in the
module segment shown by neighboring metadata.

Examples:

- `win16_Copy_Struct_6Bytes_Wrapper_4216` → offset `0x4216`
- `Collection_Object_Subclass_ctor_958E` → offset `0x958e`

### Rule B: no-suffix functions

If no suffix exists (e.g., `validate_ptr_range_access`), use one of:

1. symbol search by exact name, then
2. caller/callee chain from known suffixed functions, then
3. constant/string/xref anchors from the function body.

## Standard verification workflow

### 1) Select candidate function

Pick one function from Task 14 reports:

- `docs/artifacts/register_args_report.json`
- `docs/artifacts/concat_usage_report.json`
- `docs/artifacts/ghidra_globals_report.json`
- `docs/artifacts/hex_constants_report.json`

Selection priority:

1. has `in_XX`,
2. also has `CONCAT22`,
3. high call fan-in (many callers).

### 2) Confirm symbol + address in Ghidra

- Locate symbol by name or offset suffix.
- Confirm entry point and function boundaries.
- Ensure decompiler function boundary matches disassembly.

### 3) Resolve register-arg truth (`in_XX`)

Inspect callsites and prologue/epilogue:

- If caller loads a value into register immediately before call and callee consumes
  without local initialization, promote to real parameter.
- If value is transient scratch/register allocator noise, keep local and refactor
  expression only.

### 4) Resolve `CONCAT` usage type

Classify each `CONCAT` output by use:

- dereferenced / passed to pointer-typed API → pointer combine,
- arithmetic/compare only → integer combine.

### 5) Verify all callers

Before editing signature:

- collect callers,
- record argument sources per caller,
- ensure parameter order and width consistency.

After editing signature:

- update every caller in `outpost_recompiled_c/src/**`,
- rebuild target, confirm no new call mismatch diagnostics.

### 6) Document decision

For each modified function, record:

- original signature snippet,
- verified signature,
- reason/evidence (call pattern + xrefs),
- any unresolved assumptions.

## MCP query patterns

Use these in order when MCP tooling is available.

### Core sequence (register args)

1. `get-functions` (name/address lookup)
2. `get-decompilation` (current decompiled function)
3. disassembly/call-convention check (tool/UI)
4. `find-cross-references` (all callers)
5. `set-function-prototype` (only after evidence is consistent)

### Constant/pointer disambiguation

- `find-constant-uses`
- `find-constants-in-range`
- `trace-data-flow-forward`
- `trace-data-flow-backward`

### Practical fallback

If MCP server is unavailable, do the exact same sequence directly in Ghidra UI
(Symbol Tree, Listing, Decompiler, References, Data Type Manager) and record
results in the same format.

## Batch processing method (recommended)

Process in small verified batches:

1. choose 5-10 functions from one bucket,
2. verify signatures first,
3. apply source edits,
4. build,
5. move to next batch.

Avoid mixing buckets during a batch.

## Worked examples (Task 15 validation set)

These examples are from the smallest practical bucket requested by the plan:
`src/generated/misc/`.

### Example A — `validate_ptr_range_access`

- File: `src/generated/misc/outpost.misc.part001.c`
- Line: ~275
- Artifact pattern:
  - `undefined2 in_AX;`
  - `undefined2 in_DX;`
  - `CONCAT22(in_DX,in_AX)` passed into `iterate_memory_callback_far(...)`

Verification target:

- Determine whether `in_DX:in_AX` is a true far-pointer parameter or synthetic
  decompiler register carry.

Expected outcome when verified:

- either add explicit far-pointer parameter (preferred if caller evidence supports),
- or rewrite local pointer assembly with validated stack/local source.

### Example B — `search_array_for_value`

- File: `src/generated/misc/outpost.misc.part002.c`
- Line: ~460
- Artifact pattern:
  - `undefined2 in_DX;`
  - `uStack_6 = (undefined4 *)CONCAT22(in_DX,puVar1);`

Verification target:

- confirm whether `in_DX` is segment half of far pointer from caller,
- confirm type of `uStack_6` usage (`pointer` vs packed integer).

Expected outcome when verified:

- promote verified register input to parameter,
- replace `CONCAT22` with explicit pointer expression in flat-model form.

### Example C — `win16_Copy_Struct_6Bytes_Wrapper_4216`

- File: `src/generated/misc/outpost.misc.part002.c`
- Line: ~600
- Name suffix: `_4216` (direct offset cue)

Verification target:

- validate that suffix-to-offset mapping is correct in the program,
- confirm wrapper signature consistency with sibling wrappers
  (`_4210`, `_421c`, `_4222`).

Expected outcome when verified:

- stable, shared prototype for all wrapper variants,
- reduced duplicate ambiguity for future function-family edits.

## Per-function verification checklist

Use this checklist before any source patch:

- [ ] Function symbol and entry point confirmed
- [ ] Address/suffix mapping confirmed (or justified fallback)
- [ ] `in_XX` classified as parameter vs artifact
- [ ] `CONCAT` classified pointer vs integer
- [ ] Caller list reviewed
- [ ] Candidate new prototype drafted
- [ ] Source edits applied
- [ ] Build target recompiled
- [ ] Notes logged for unresolved assumptions

## Agent handoff template

For each verified function, include:

- Function name:
- File + line:
- Ghidra address:
- Current signature:
- Verified signature:
- Evidence summary:
- Caller updates required:
- Source patch status:
- Build result:
- Remaining risks:
