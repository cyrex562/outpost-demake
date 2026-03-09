#ifndef OUTPOST_MAIN_H
#define OUTPOST_MAIN_H

#include "core/outpost_common.h"
#include "core/outpost_platform.h"
#include "core/outpost_modules.h"

/* Set to 1 once the blocking Win16 artifact fixups are done and the
 * platform/module sources are linked into the smoke executable target.
 * Until then the real win16_call_app_main path is compiled out. */
#ifndef OUTPOST_WIRE_WIN16_ENTRY
#  define OUTPOST_WIRE_WIN16_ENTRY 0
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Flat-model WinMain equivalent.
 *   hInstance    <- original g_TaskDI (Win16 InitTask16's DI register)
 *   hPrevInstance <- original g_TaskSI (Win16 InitTask16's SI register)
 *   lpCmdLine    <- original g_TaskBX  (Win16 near command-line pointer)
 *   nCmdShow     <- not used by the original game; included for Win32 parity
 */
int outpost_main_entry(void *hInstance, void *hPrevInstance,
                       char *lpCmdLine, int nCmdShow);

#ifdef __cplusplus
}
#endif

#endif // OUTPOST_MAIN_H
