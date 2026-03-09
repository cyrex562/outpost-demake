# Module Mapping (Task 02)

This document defines deterministic mapping from themed split categories to active reconstruction destinations in `outpost_recompiled_c/`.

## Why this mapping exists

- The themed corpus is optimized for navigation and retrieval, not long-term project organization.
- We need stable `src/` + `include/` destinations before relocation/copy steps.
- This layout supports compile-first rewiring and later refactors without losing thematic traceability.

## Mapping table

| Theme | Source input | Destination source path | Destination include path | Rationale |
|---|---|---|---|---|
| `memory_heap` | `themed/outpost_c/memory_heap/*.c`, `themed/outpost_h/memory_heap/*.h` | `src/modules/memory/` | `include/modules/memory/` | Heap/allocator/free-list behaviors form a coherent memory module. |
| `ui_windows` | `themed/outpost_c/ui_windows/*.c`, `themed/outpost_h/ui_windows/*.h` | `src/modules/ui/` | `include/modules/ui/` | UI/dialog/window logic grouped for interface layer cleanup. |
| `simulator_world` | `themed/outpost_c/simulator_world/*.c`, `themed/outpost_h/simulator_world/*.h` | `src/modules/sim/` | `include/modules/sim/` | Core simulation/gameplay logic belongs in sim subsystem. |
| `graphics_media` | `themed/outpost_c/graphics_media/*.c`, `themed/outpost_h/graphics_media/*.h` | `src/modules/media/` | `include/modules/media/` | Rendering/palette/media assets are a natural media module. |
| `file_io` | `themed/outpost_c/file_io/*.c`, `themed/outpost_h/file_io/*.h` | `src/modules/io/` | `include/modules/io/` | File persistence/loading routes to dedicated I/O module. |
| `system_runtime` | `themed/outpost_c/system_runtime/*.c`, `themed/outpost_h/system_runtime/*.h` | `src/platform/win16/` | `include/platform/win16/` | OS/runtime shims and platform-specific behavior should stay in platform boundary. |
| `strings_text` | `themed/outpost_c/strings_text/*.c`, `themed/outpost_h/strings_text/*.h` | `src/core/text/` | `include/core/text/` | Text/format/string helpers are core infrastructure used by modules. |
| `misc` | `themed/outpost_c/misc/*.c`, `themed/outpost_h/misc/*.h` | `src/generated/misc/` | `include/generated/misc/` | Mixed items are staged for later redistribution while still keeping header parity. |
| `types_structs` (header-only) | `themed/outpost_h/types_structs/*.h` | _(n/a)_ | `include/modules/types/` | Struct/type-heavy header bucket staged under modules/types for include availability. |

## Notes for next task (Task 03)

- Relocation mode is **copy-first**.
- Keep `outpost_recompiled_c/themed/` immutable as reference input.
- Preserve original filenames in first relocation pass.
- Record old/new paths in `docs/FILE_RELOCATION_MAP.json`.
