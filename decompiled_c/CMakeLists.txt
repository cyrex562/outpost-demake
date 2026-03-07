cmake_minimum_required(VERSION 3.10)
project(OutpostDecompiled C)

# Set C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Configure for Clang if requested (usually done via command line, but we can add flags)
if(CMAKE_C_COMPILER_ID STREQUAL "Clang")
    add_compile_options(-Wall -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-microsoft-anon-tag)
endif()

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Source files
set(SOURCES
    outpost.c
)

# Headers (for IDE visibility)
set(HEADERS
    outpost.h
)

# Executable
add_executable(outpost ${SOURCES} ${HEADERS})

# Note: Since this is 16-bit decompiled code, it will likely require 
# a custom "ghidra_builtins.h" or similar to define macros like CONCAT22,
# __pascal, __far, etc., if they aren't already in outpost.h.
