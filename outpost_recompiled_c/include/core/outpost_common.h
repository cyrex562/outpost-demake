#ifndef OUTPOST_COMMON_H
#define OUTPOST_COMMON_H

// Standard C headers used broadly across reconstructed units.
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Outpost specific types
#include "modules/types/outpost_types.h"

// Ghidra compatibility macros/types.
#include "ghidra.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef OUTPOST_ARRAY_COUNT
#define OUTPOST_ARRAY_COUNT(x) (sizeof(x) / sizeof((x)[0]))
#endif

#ifndef OUTPOST_UNUSED
#define OUTPOST_UNUSED(x) ((void)(x))
#endif

// Unified placeholder dependency layer for unresolved symbols during rewiring.
#include "core/missing_deps.h"

#ifdef __cplusplus
}
#endif

#endif // OUTPOST_COMMON_H
