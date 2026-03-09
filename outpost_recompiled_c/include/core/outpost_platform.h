#ifndef OUTPOST_PLATFORM_H
#define OUTPOST_PLATFORM_H

#include "core/outpost_common.h"

#ifdef __cplusplus
extern "C" {
#endif

// Centralized platform include policy (Task 09).
// This header is the single approved location for Windows SDK includes.

#if defined(_WIN32) && !defined(OUTPOST_DISABLE_WINDOWS_PLATFORM)
#define OUTPOST_PLATFORM_WINDOWS_ENABLED 1

// Keep SDK surface narrow and avoid C++ macro collisions.
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif

#include <windows.h>

#else

#define OUTPOST_PLATFORM_WINDOWS_ENABLED 0

#endif

// Optional Win16-legacy shim aliases routed through a centralized boundary.
// TODO(ghidra-verify): Replace these shims with validated, ABI-accurate types.
#ifndef OUTPOST_WIN16_SHIMS_DEFINED
#define OUTPOST_WIN16_SHIMS_DEFINED

#ifndef FAR
#define FAR
#endif
#ifndef NEAR
#define NEAR
#endif

typedef void *HWND16_FAR;
typedef void *HDC16_FAR;
typedef void *HINSTANCE16_FAR;

#endif

// Central Win16 API declaration surface.
#include "platform/win16_api.h"

#ifdef __cplusplus
}
#endif

#endif // OUTPOST_PLATFORM_H
