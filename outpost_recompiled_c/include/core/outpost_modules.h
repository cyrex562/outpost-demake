#ifndef OUTPOST_MODULES_H
#define OUTPOST_MODULES_H

#include "core/outpost_common.h"

#ifdef __cplusplus
extern "C" {
#endif

// Aggregated module-level lifecycle hooks.
// As modules are rewired, wire real implementations here.
int outpost_modules_init(void);
void outpost_modules_shutdown(void);

// Module-domain entry points (phase-1 stubs).
int outpost_module_memory_init(void);
int outpost_module_io_init(void);
int outpost_module_media_init(void);
int outpost_module_sim_init(void);
int outpost_module_ui_init(void);

void outpost_module_ui_shutdown(void);
void outpost_module_sim_shutdown(void);
void outpost_module_media_shutdown(void);
void outpost_module_io_shutdown(void);
void outpost_module_memory_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif // OUTPOST_MODULES_H
