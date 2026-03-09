#ifndef OUTPOST_MISSING_DEPS_H
#define OUTPOST_MISSING_DEPS_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Placeholder dependency layer for unresolved symbols/types encountered during rewiring.
// TODO(ghidra-verify): Replace each placeholder with real declarations once validated.

#ifndef OUTPOST_PLACEHOLDER_TYPE_DEFINED
#define OUTPOST_PLACEHOLDER_TYPE_DEFINED
typedef struct outpost_placeholder_type
{
    uint32_t reserved0;
    uint32_t reserved1;
} outpost_placeholder_type;
#endif

#ifndef OUTPOST_PLACEHOLDER_FN_PTR_DEFINED
#define OUTPOST_PLACEHOLDER_FN_PTR_DEFINED
typedef int (*outpost_placeholder_fn_t)(void *ctx, int code);
#endif

#ifndef OUTPOST_LEGACY_PRIMITIVE_ALIASES_DEFINED
#define OUTPOST_LEGACY_PRIMITIVE_ALIASES_DEFINED
// TODO(ghidra-verify): Replace legacy aliases with validated canonical types.
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int BOOL16;
typedef long (*code)();  /* K&R: variadic vtable dispatch helper */
#endif

#ifndef OUTPOST_WIN16_HANDLE_ALIASES_DEFINED
#define OUTPOST_WIN16_HANDLE_ALIASES_DEFINED
// TODO(ghidra-verify): Replace with verified Win16 ABI-accurate handle typedefs.
typedef void *HWND16;
typedef void *HDC16;
typedef void *HANDLE16;
typedef void *HINSTANCE16;
#endif

#ifndef OUTPOST_PLACEHOLDER_EXTERN_DEFINED
#define OUTPOST_PLACEHOLDER_EXTERN_DEFINED
extern int g_outpost_missing_dep_counter;
#endif

/* Win16/DOS critical-section stubs — no-op in flat Win32 smoke build */
#ifndef LOCK
#define LOCK()   ((void)0)
#endif
#ifndef UNLOCK
#define UNLOCK() ((void)0)
#endif

// Generic fallback function for temporarily wiring unresolved callsites.
int outpost_missing_dep_stub(const char *symbol_name);

#ifdef __cplusplus
}
#endif

#endif // OUTPOST_MISSING_DEPS_H
