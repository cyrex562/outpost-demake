# Missing Dependencies Tracker

This file tracks unresolved symbols/types/includes discovered during rewiring.

Policy:

- Prefer real include/declaration when known.
- If unknown, add a temporary declaration in `include/core/missing_deps.h`.
- Add a `// TODO(ghidra-verify): ...` marker and record it below.

## Open items

| Status | File | Line | Missing symbol/include | Placeholder added | Ghidra follow-up |
| --- | --- | ---: | --- | --- | --- |
| Open | `src/modules/ui/outpost.ui_windows.part042.c` | 480 | `ulong` | `typedef unsigned long ulong;` in `include/core/missing_deps.h` | Validate original decompiler integer width assumptions (16-bit/32-bit split). |
| Open | `src/modules/ui/outpost.ui_windows.part045.c` | 262 | `uint` | `typedef unsigned int uint;` in `include/core/missing_deps.h` | Confirm whether this should be `unsigned int` or fixed-width type in each callsite. |
| Open | `src/modules/ui/outpost.ui_windows.part042.c` | 471 | `ushort` | `typedef unsigned short ushort;` in `include/core/missing_deps.h` | Verify calling convention/ABI-sensitive parameter sizes. |
| Open | `src/modules/ui/outpost.ui_windows.part047.c` | 171 | `u16` | `typedef uint16_t u16;` in `include/core/missing_deps.h` | Confirm canonical alias usage versus `word`/`undefined2`. |
| Open | `src/modules/ui/outpost.ui_windows.part044.c` | 230 | `code` | `typedef void (*code)(void);` in `include/core/missing_deps.h` | Validate function-pointer calling signatures from Ghidra thunk/calltable analysis. |
| Open | `src/modules/ui/outpost.ui_windows.part042.c` | 476 | `HWND16` | `typedef void *HWND16;` in `include/core/missing_deps.h` | Confirm true Win16 handle model and any strict typedef requirements. |
| Open | `src/modules/ui/outpost.ui_windows.part048.c` | 42 | `HDC16` | `typedef void *HDC16;` in `include/core/missing_deps.h` | Validate Win16 GDI handle mapping. |
| Open | `src/modules/ui/outpost.ui_windows.part049.c` | 182 | `HANDLE16` | `typedef void *HANDLE16;` in `include/core/missing_deps.h` | Validate handle semantics and conversions around far pointers. |
| Open | `src/modules/ui/outpost.ui_windows.part044.c` | 293 | `HINSTANCE16` | `typedef void *HINSTANCE16;` in `include/core/missing_deps.h` | Confirm module-instance handle size/layout in original binary. |
| Open | `src/modules/ui/outpost.ui_windows.part049.c` | 202 | `u32` | `typedef uint32_t u32;` in `include/core/missing_deps.h` | Confirm whether usage maps to canonical `dword`/`uint32_t` in reconstructed headers. |
| Open | `src/modules/ui/outpost.ui_windows.part049.c` | 175 | `BOOL16` | `typedef int BOOL16;` in `include/core/missing_deps.h` | Validate original Win16 boolean width/ABI assumptions. |
| Open | `src/core/text/outpost.strings_text.part001.c` | 11 | `#include "outpost.h"` | Added temporary umbrella header `include/outpost.h` | Replace umbrella with validated per-module includes during later rewiring. |

## Notes

- `src/placeholders/missing_deps.c` contains shared fallback stubs used during early rewiring.
- Remove placeholder declarations once validated in `reversing/ghidra_projects/`.
