# Copilot Project Context

This folder contains guidance files for AI-assisted development in this repository.

Primary project objective:

- **Decompile and rebuild Outpost (DOS/Windows)** with behavior parity.

Start here:

- `copilot/PROJECT_STRUCTURE.md` for practical navigation.
- `decompiled_c/split_outpost/themed/THEMED_FUNCTION_INDEX.json` for function lookup.
- `outpost_recompiled_c/LLM_REWIRE_PLAN.md` for iterative rewiring and compile recovery tasks.

Active workspace for modifications:

- `outpost_recompiled_c/`
  - self-contained C/C++ restructuring folder,
  - includes copied themed split files,
  - includes standalone `CMakeLists.txt`,
  - used to fix structural/include bugs toward successful compilation.

Current success target:

- ensure includes are present across source files,
- or route unresolved dependencies to placeholders and track Ghidra follow-up.

Required active/reference workflow:

- Treat `decompiled_c/split_outpost/themed/` as immutable reference input.
- Make structural and compile-oriented edits in `outpost_recompiled_c/` only.
- Route unknowns through `include/core/missing_deps.h` and record them in
  `outpost_recompiled_c/docs/MISSING_DEPENDENCIES.md`.
- Close placeholders through a Ghidra validation loop (`reversing/ghidra_projects/` + MCP checks).

Related docs:

- `CLAUDE.md`
- `GEMINI.md`
