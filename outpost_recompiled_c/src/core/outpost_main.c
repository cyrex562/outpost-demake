/*
 * outpost_main.c
 *
 * Flat-model Win32 entry shim.  Bypasses the two Win16 loader stubs that are
 * unsuitable for direct reconstruction:
 *
 *   'entry'
 *       Cannot be decompiled at all (Ghidra: "Symbol $$undef extends beyond
 *       the end of the address space").  It is the raw DOS/Win16 loader thunk
 *       whose sole purpose was to hand control to win16_app_main_loop_init_internal.
 *
 *   win16_app_main_loop_init_internal  (the "taskinit")
 *       Calls InitTask16() / InitApp16() / LockSegment16() and scrapes the
 *       Win16 register-argument ABI (in_AX, in_CX, unaff_SI, unaff_DI, …)
 *       to populate the g_Task* globals.  In Win32 those same values come
 *       directly from WinMain parameters (hInstance, hPrevInstance, lpCmdLine).
 *
 * Shim design:
 *   Win32 main()
 *     -> outpost_main_entry(hInstance, NULL, lpCmdLine, 0)
 *         -> sets g_Task* from Win32 params  [replaces InitTask16 output]
 *         -> calls win16_call_app_main()
 *              -> win16_main_init_and_run_loop(g_TaskDX, g_TaskBX, ...)
 *
 * OUTPOST_WIRE_WIN16_ENTRY=1 enables the call chain above once the
 * platform/memory source files are linked in.
 *
 * OUTPOST_WIRE_DIRECT_LOOP=1 (future) will call win16_main_init_and_run_loop
 * directly with Win32-mapped args, removing the g_Task* globals entirely.
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
