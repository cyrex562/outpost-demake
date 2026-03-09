# Win16 API Strategy (Task 13)

## Current decision

Use a **stub-first shim layer** in `outpost_recompiled_c` to unblock compilation,
while deferring strict Win16 ABI typing to later cleanup (Task 26).

Wine is explicitly **out of scope** for shim/runtime integration in this project
path. We will maintain an in-house compatibility layer only.

Implemented artifacts:

- `include/platform/win16_api.h`
- `src/platform/win16_api_stubs.c`
- `CMakeLists.txt` option: `OUTPOST_WIN16_USE_STUBS` (default `ON`)

## Scope

The shim surface is derived from the canonical Win16 API prototype block in
`decompiled_c/outpost.h` (around lines `65619..65790`).

- Canonical block symbols: **172**
- Effective shim symbols in `OUTPOST_WIN16_API_LIST`: **168**
  - Excluded 4 Win32-colliding names without `16` suffix:
    `OutputDebugString`, `PtInRect`, `SetDlgItemInt`, `SetDlgItemText`.

Why 168/172 and not 180:

- The previously measured "180 unique `*16` calls" includes project-local symbols
  with `16` suffixes (e.g., decompiled game functions), not just OS/API calls.
- Task 13 focuses on central platform shim symbols rather than internal game methods.

## Shim implementation policy (no Wine)

### Summary

Wine is not used for shims. Keep stubs as the default baseline, then replace
high-traffic APIs with in-house wrappers.

### Rationale

- Avoid heavyweight external runtime coupling during decompiler artifact cleanup.
- Keep control over calling/typing transitions while signatures are still being
  normalized.
- Implement wrapper behavior incrementally where semantics are understood.

### Recommended path

1. Keep `OUTPOST_WIN16_USE_STUBS=ON` for phase-2 artifact cleanup.
2. Replace top-used APIs with in-house wrappers to Win32 or equivalent APIs.
3. Track per-API wrapper readiness and known semantic gaps in this document.

## Follow-up tasks

- **Task 26**: Replace generic unprototyped shim declarations with strict
  Win16-compatible typed prototypes.
- **Task 28**: Implement prioritized real wrappers for high-traffic APIs.
