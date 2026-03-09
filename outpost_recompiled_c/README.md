# outpost_recompiled_c

Self-contained C/C++ workspace for restructuring and editing the split decompiled Outpost sources.

## Contents

- `CMakeLists.txt` - standalone CMake project configuration.
- `ghidra.h` - compatibility header for decompiler-generated macros/types.
- `themed/` - copied themed split outputs and indexes:
  - `outpost_c/`
  - `outpost_h/`
  - `THEMED_MANIFEST.md`
  - `THEMED_INDEX.json` / `THEMED_INDEX.md`
  - `THEMED_FUNCTION_INDEX.json` / `THEMED_FUNCTION_INDEX.md`

## Notes

- This folder is intentionally decoupled from `decompiled_c/` so edits can be staged independently.
- By default, CMake exposes all files for IDE navigation; compilation of themed chunks is optional via:
  - `OUTPOST_BUILD_THEMED=ON`
