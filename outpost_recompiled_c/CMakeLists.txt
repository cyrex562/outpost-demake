cmake_minimum_required(VERSION 3.16)
project(outpost_recompiled_c C)

# Phase-1 target language is C only.
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Task 06 required options
option(OUTPOST_ENABLE_PLACEHOLDERS "Compile placeholder dependency layer" ON)
if(WIN32)
    option(OUTPOST_ENABLE_WINDOWS_PLATFORM "Enable Windows platform include/defines" ON)
else()
    option(OUTPOST_ENABLE_WINDOWS_PLATFORM "Enable Windows platform include/defines" OFF)
endif()
option(OUTPOST_STRICT_WARNINGS "Enable stricter warning levels" OFF)
option(OUTPOST_ENFORCE_BASELINE_INCLUDES "Force core baseline includes for rewired C sources" ON)
option(OUTPOST_WIN16_USE_STUBS "Build/link Win16 API stub implementations" ON)

# Utility options
option(OUTPOST_BUILD_CORE_SMOKE "Compile minimal core entry files" ON)
option(OUTPOST_BUILD_MAIN_SMOKE "Link minimal executable through outpost_main_entry" ON)
option(OUTPOST_BUILD_WORKING_SET "Enable object target for rewired src tree" ON)
option(OUTPOST_BUILD_THEMED_REFERENCE "Enable reference build target for themed corpus" OFF)
option(OUTPOST_WIRE_WIN16_ENTRY "Wire Win16 init chain from outpost_main_entry (requires system_runtime.part001 graduated)" ON)

# Location-aware source/include layout for active rewiring workspace.
file(GLOB_RECURSE OUTPOST_PROJECT_HEADERS CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h
)
file(GLOB_RECURSE OUTPOST_CORE_C CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/src/core/*.c
)
file(GLOB_RECURSE OUTPOST_MODULE_C CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/src/modules/*.c
)
file(GLOB_RECURSE OUTPOST_PLATFORM_C CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/src/platform/*.c
)
file(GLOB_RECURSE OUTPOST_GENERATED_C CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/src/generated/*.c
)
file(GLOB_RECURSE OUTPOST_PLACEHOLDER_C CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/src/placeholders/*.c
)

# Themed reference corpus (non-primary, optional compile target).
file(GLOB_RECURSE OUTPOST_THEMED_C CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/themed/outpost_c/*.c
)
file(GLOB_RECURSE OUTPOST_THEMED_H CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/themed/outpost_h/*.h
)

add_custom_target(outpost_source_index ALL
    SOURCES
    ${OUTPOST_PROJECT_HEADERS}
    ${OUTPOST_CORE_C}
    ${OUTPOST_MODULE_C}
    ${OUTPOST_PLATFORM_C}
    ${OUTPOST_GENERATED_C}
    ${OUTPOST_PLACEHOLDER_C}
    ${OUTPOST_THEMED_H}
    ${CMAKE_CURRENT_SOURCE_DIR}/ghidra.h
)

# Interface target for shared compile definitions/options.
add_library(outpost_compile_config INTERFACE)
target_include_directories(outpost_compile_config INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include/core
    ${CMAKE_CURRENT_SOURCE_DIR}/include/modules/types
    ${CMAKE_CURRENT_SOURCE_DIR}/include/platform
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

if(OUTPOST_ENABLE_WINDOWS_PLATFORM)
    target_compile_definitions(outpost_compile_config INTERFACE OUTPOST_ENABLE_WINDOWS_PLATFORM=1)
else()
    target_compile_definitions(outpost_compile_config INTERFACE OUTPOST_DISABLE_WINDOWS_PLATFORM=1)
endif()

if(OUTPOST_WIN16_USE_STUBS)
    target_compile_definitions(outpost_compile_config INTERFACE OUTPOST_WIN16_USE_STUBS=1)
else()
    target_compile_definitions(outpost_compile_config INTERFACE OUTPOST_WIN16_USE_STUBS=0)
endif()

if(OUTPOST_WIRE_WIN16_ENTRY)
    target_compile_definitions(outpost_compile_config INTERFACE OUTPOST_WIRE_WIN16_ENTRY=1)
else()
    target_compile_definitions(outpost_compile_config INTERFACE OUTPOST_WIRE_WIN16_ENTRY=0)
endif()

if(OUTPOST_STRICT_WARNINGS)
    if(CMAKE_C_COMPILER_ID STREQUAL "MSVC")
        target_compile_options(outpost_compile_config INTERFACE /W4)
    else()
        target_compile_options(outpost_compile_config INTERFACE -Wall -Wextra -Wpedantic)
    endif()
endif()

if(OUTPOST_ENFORCE_BASELINE_INCLUDES)
    if(CMAKE_C_COMPILER_ID STREQUAL "MSVC")
        target_compile_options(outpost_compile_config INTERFACE
            /FIcore/outpost_common.h
            /FIcore/outpost_platform.h
        )
    else()
        target_compile_options(outpost_compile_config INTERFACE
            -include core/outpost_common.h
            -include core/outpost_platform.h
        )
    endif()
endif()

# /FS: Serialize PDB writes when multiple cl.exe instances run in parallel
# (prevents C1041 "cannot open program database" errors in parallel builds).
if(CMAKE_C_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(outpost_compile_config INTERFACE /FS)
endif()

set(OUTPOST_WORKING_C
    ${OUTPOST_CORE_C}
    ${OUTPOST_MODULE_C}
    ${OUTPOST_PLATFORM_C}
    ${OUTPOST_GENERATED_C}
)
if(NOT OUTPOST_WIN16_USE_STUBS)
    list(REMOVE_ITEM OUTPOST_WORKING_C
        ${CMAKE_CURRENT_SOURCE_DIR}/src/platform/win16_api_stubs.c
    )
endif()
if(OUTPOST_ENABLE_PLACEHOLDERS)
    list(APPEND OUTPOST_WORKING_C ${OUTPOST_PLACEHOLDER_C})
endif()

# ── Graduated source files ────────────────────────────────────────────────────
# Working-set files verified to produce zero MSVC code errors; eligible to link
# into the smoke executable as they accumulate toward full working-set coverage.
#
# Workflow to graduate a new file:
#   1. Run the working-set build; capture errors for just that file:
#      cmake --build build_task06 --target outpost_working_set 2>&1 |
#        Out-File "$env:TEMP\b.log"
#      (Select-String "error C\d" "$env:TEMP\b.log" |
#        Where-Object { $_.Line -match "<stem>" -and $_.Line -notmatch "C1041" }).Count
#   2. Confirm the count == 0 (C1041 PDB-contention is a build-infra issue, not code).
#   3. Add the file path below and reconfigure: cmake -B build_task06
#
# Graduated files are removed from OUTPOST_WORKING_C so that when the Object
# library and the smoke exe are eventually merged, symbols are not duplicated.
set(OUTPOST_GRADUATED_FILES
    # ── core ── confirmed clean
    ${CMAKE_CURRENT_SOURCE_DIR}/src/core/ui_vtable.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/core/text/outpost.strings_text.part004.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/core/text/outpost.strings_text.part001.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/core/text/outpost.strings_text.part002.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/core/text/outpost.strings_text.part003.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/core/text/outpost.strings_text.part005.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/core/text/outpost.strings_text.part006.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/core/text/outpost.strings_text.part007.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/core/text/outpost.strings_text.part008.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/core/text/outpost.strings_text.part009.c
    # ── memory_heap ──
    ${CMAKE_CURRENT_SOURCE_DIR}/src/modules/memory/outpost.memory_heap.part003.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/modules/memory/outpost.memory_heap.part004.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/modules/memory/outpost.memory_heap.part005.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/modules/memory/outpost.memory_heap.part007.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/modules/memory/outpost.memory_heap.part009.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/modules/memory/outpost.memory_heap.part013.c
    # ── platform ── (win16_api_stubs guarded by OUTPOST_WIN16_USE_STUBS)
    ${CMAKE_CURRENT_SOURCE_DIR}/src/platform/win16/outpost.system_runtime.part001.c
    # ── generated / modules / sim / ui ── add files here as they are cleaned
)
if(OUTPOST_WIN16_USE_STUBS)
    list(APPEND OUTPOST_GRADUATED_FILES
        ${CMAKE_CURRENT_SOURCE_DIR}/src/platform/win16_api_stubs.c
    )
endif()
if(OUTPOST_ENABLE_PLACEHOLDERS)
    list(APPEND OUTPOST_GRADUATED_FILES
        ${CMAKE_CURRENT_SOURCE_DIR}/src/placeholders/missing_deps.c
    )
endif()

# Remove graduated files from working set to prevent future duplicate-symbol
# errors once outpost_working_set and outpost_main_smoke are linked together.
list(REMOVE_ITEM OUTPOST_WORKING_C ${OUTPOST_GRADUATED_FILES})

if(OUTPOST_BUILD_WORKING_SET)
    add_library(outpost_working_set OBJECT EXCLUDE_FROM_ALL
        ${OUTPOST_WORKING_C}
        ${OUTPOST_PROJECT_HEADERS}
    )
    target_link_libraries(outpost_working_set PRIVATE outpost_compile_config)
endif()

# Minimal standalone compile target used by Task 04/05 validation.
if(OUTPOST_BUILD_CORE_SMOKE)
    # Note: ui_vtable.c and missing_deps.c are also in OUTPOST_GRADUATED_FILES;
    # listed here explicitly so outpost_core_smoke compiles independently of
    # graduation state.
    set(OUTPOST_CORE_SMOKE_C
        ${CMAKE_CURRENT_SOURCE_DIR}/src/core/outpost_main.c
        ${CMAKE_CURRENT_SOURCE_DIR}/src/core/outpost_modules.c
        ${CMAKE_CURRENT_SOURCE_DIR}/src/core/ui_vtable.c
    )
    if(OUTPOST_ENABLE_PLACEHOLDERS)
        list(APPEND OUTPOST_CORE_SMOKE_C ${CMAKE_CURRENT_SOURCE_DIR}/src/placeholders/missing_deps.c)
    endif()

    add_library(outpost_core_smoke OBJECT
        ${OUTPOST_CORE_SMOKE_C}
        ${CMAKE_CURRENT_SOURCE_DIR}/include/core/outpost_common.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/core/outpost_platform.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/core/outpost_modules.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/core/outpost_main.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/core/missing_deps.h
    )
    target_link_libraries(outpost_core_smoke PRIVATE outpost_compile_config)
endif()

if(OUTPOST_BUILD_MAIN_SMOKE)
    # Smoke executable: core entry stubs + all graduated clean working-set files.
    # Add files to OUTPOST_GRADUATED_FILES (above) as they reach zero compile errors.
    # When OUTPOST_GRADUATED_FILES == full working set, flip OUTPOST_WIRE_WIN16_ENTRY=1
    # to wire the real Win16 init chain.
    set(OUTPOST_MAIN_SMOKE_C
        ${CMAKE_CURRENT_SOURCE_DIR}/src/core/outpost_main_runtime.c
        ${CMAKE_CURRENT_SOURCE_DIR}/src/core/outpost_main.c
        ${CMAKE_CURRENT_SOURCE_DIR}/src/core/outpost_modules.c
    )
    # Append all clean graduated files (includes platform stubs + placeholders when enabled).
    list(APPEND OUTPOST_MAIN_SMOKE_C ${OUTPOST_GRADUATED_FILES})

    add_executable(outpost_main_smoke ${OUTPOST_MAIN_SMOKE_C})
    target_link_libraries(outpost_main_smoke PRIVATE outpost_compile_config)
endif()

# Optional themed reference compile target (non-primary path).
if(OUTPOST_BUILD_THEMED_REFERENCE)
    add_library(outpost_themed_reference OBJECT EXCLUDE_FROM_ALL ${OUTPOST_THEMED_C})
    target_include_directories(outpost_themed_reference PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/themed/outpost_h
    )
    target_link_libraries(outpost_themed_reference PRIVATE outpost_compile_config)
endif()
