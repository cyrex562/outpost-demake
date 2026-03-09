/*
 * outpost_main.c
 *
 * Application-level entry hook.  Mirrors the original game's WinMain/task-init
 * sequence in flat-model terms.
 *
 * Blocking items before OUTPOST_WIRE_WIN16_ENTRY can be enabled:
 *   - win16_main_init_and_run_loop: vtable dispatch artifacts still present
 *     (raw `(*(code *)*puVar1)(...)` calls, two CONCAT22 segment-half args)
 *   - win16_app_main_loop_init_internal: reg_si/reg_di/in_stack_00000000
 *     register artifacts not yet promoted
 *   - outpost_main_smoke CMake target does not yet link
 *     src/platform/win16/ or src/modules/ object files
 *
 * Once those are cleared, flip OUTPOST_WIRE_WIN16_ENTRY to 1 in CMakeLists
 * and the whole chain calls through.
 */
#include "core/outpost_main.h"
#include "core/outpost_common.h"
#include "core/outpost_platform.h"

/* Forward declarations of the real Win16 init functions AND task globals.
 * All defined in src/platform/win16/ and src/modules/memory/ — not linked
 * into outpost_main_smoke yet.  Kept inside the wire guard so the smoke
 * build never generates unresolved-external references. */
#if OUTPOST_WIRE_WIN16_ENTRY
extern void __cdecl16far win16_init_env_and_interrupts(void);
extern void __cdecl16far win16_init_env_vars_from_dos(void);
extern void __cdecl16far win16_call_app_main(void);
extern void __cdecl16far win16_app_exit_wrapper(void);

/* Win16 task-register globals populated by InitTask16; re-used as WinMain
 * parameter equivalents in the flat model. */
extern pointer g_TaskDI;    /* hInstance  */
extern pointer g_TaskSI;    /* hPrevInstance */
extern pointer g_TaskDX;    /* task DX (segment context) */
extern pointer g_TaskBX;    /* task BX (command-line near ptr) */
extern pointer g_TaskES;    /* task ES (PSP segment cache) */
#endif /* OUTPOST_WIRE_WIN16_ENTRY */

int outpost_main_entry(void *hInstance, void *hPrevInstance,
                       char *lpCmdLine, int nCmdShow)
{
    (void)nCmdShow;    /* not used by the original game */
#if !OUTPOST_WIRE_WIN16_ENTRY
    (void)hInstance;
    (void)hPrevInstance;
    (void)lpCmdLine;
#endif

    /*
     * Step 1 — populate the Win16 task-register globals.
     * Original source: win16_app_main_loop_init_internal(), after InitTask16().
     * In the real boot InitTask16 fills DI=hInst, SI=hPrev, DX=seg_context.
     * Gated: symbols live in platform sources not yet in the smoke link.
     */
#if OUTPOST_WIRE_WIN16_ENTRY
    g_TaskDI = (pointer)hInstance;
    g_TaskSI = (pointer)hPrevInstance;
    g_TaskDX = NULL;   /* flat: no meaningful segment context */
    g_TaskBX = (pointer)lpCmdLine;
    g_TaskES = NULL;   /* flat: no PSP */
#endif /* OUTPOST_WIRE_WIN16_ENTRY */

    /*
     * Step 2 — initialise module subsystems.
     * (Stubs for now; wire real implementations module-by-module.)
     */
    int status = outpost_modules_init();
    if (status != 0)
    {
        return status;
    }

#if OUTPOST_WIRE_WIN16_ENTRY
    /*
     * Step 3 — run the original Win16 environment init sequence, then the
     * main application loop.  Mirrors:
     *   win16_init_env_and_interrupts();
     *   win16_init_env_vars_from_dos();
     *   win16_call_app_main();  // -> win16_main_init_and_run_loop -> message loop
     *   win16_app_exit_wrapper();
     *
     * Gated until blocking items above are resolved:
     *   cmake -DOUTPOST_WIRE_WIN16_ENTRY=1 ..
     */
    win16_init_env_and_interrupts();
    win16_init_env_vars_from_dos();
    win16_call_app_main();
    win16_app_exit_wrapper();
#endif /* OUTPOST_WIRE_WIN16_ENTRY */

    outpost_modules_shutdown();
    return 0;
}
