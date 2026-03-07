#ifndef GHIDRA_H
#define GHIDRA_H

#include <stdint.h>

/**
 * GHIDRA DECOMPILER COMPATIBILITY HEADER
 * This file defines macros and types used by the Ghidra decompiler
 * to represent 16-bit Win16 artifacts in modern C.
 */

// --- Standard Types ---
typedef uint8_t  byte;
typedef uint16_t word;
typedef uint32_t dword;
typedef uint64_t qword;

typedef uint8_t  undefined;
typedef uint8_t  undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined4;
typedef uint64_t undefined8;

typedef char*    string;
typedef void*    pointer;

// --- Win16 Keyword Compatibility ---
// These are defined to nothing so modern compilers (Clang/LLVM) can parse the code.
#ifndef __far
#define __far
#endif
#ifndef __near
#define __near
#endif
#ifndef __pascal
#define __pascal
#endif
#define __stdcall16far
#define __cdecl16near
#define __fastcall16far
#define _far
#define _near
#define _pascal

// --- Ghidra Bit Concatenation Macros ---
// Used to represent register pairing (e.g. DX:AX)
#define CONCAT11(a,b) ((((uint16_t)(uint8_t)(a)) << 8)  | ((uint16_t)(uint8_t)(b)))
#define CONCAT22(a,b) ((((uint32_t)(uint16_t)(a)) << 16) | ((uint32_t)(uint16_t)(b)))
#define CONCAT44(a,b) ((((uint64_t)(uint32_t)(a)) << 32) | ((uint64_t)(uint32_t)(b)))

// --- Ghidra Bit Extraction Macros ---
#define SUB42(a,b) ((uint16_t)((uint32_t)(a) >> ((b) * 8)))
#define SUB41(a,b) ((uint8_t)((uint32_t)(a) >> ((b) * 8)))
#define SUB21(a,b) ((uint8_t)((uint16_t)(a) >> ((b) * 8)))

// --- Ghidra Status Flag Macros ---
#define CARRY2(a,b) ((uint16_t)((uint32_t)(a) + (uint32_t)(b) > 0xFFFF))
#define CARRY4(a,b) ((uint16_t)((uint64_t)(a) + (uint64_t)(b) > 0xFFFFFFFF))
#define SCARRY2(a,b) CARRY2(a,b) // Simplified for initial build
#define SBORROW2(a,b) ((uint16_t)((int32_t)(a) - (int32_t)(b) < 0))

// --- Helper Macros ---
#define ZEXT24(a) ((uint32_t)(uint16_t)(a))

#endif // GHIDRA_H
