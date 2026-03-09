/*
 * outpost_main_runtime.c
 *
 * Flat-model host entry point for the reconstructed Outpost build.
 *
 * Original Win16 startup sequence (for reference):
 *   1. DOS loader → 'entry' stub (undecompilable, Ghidra error)
 *   2. entry → win16_app_main_loop_init_internal()
 *   3.   InitTask16()       — captures ES/CX/BX/DX/SI/DI into g_Task* globals
 *   4.   InitApp16()        — registers the application (Win16 hPrevInstance check)
 *   5.   win16_init_env_and_interrupts()
 *   6.   win16_parse_command_line_and_init_task()
 *   7.   win16_init_env_vars_from_dos()
 *   8.   win16_call_app_main()     → win16_main_init_and_run_loop(g_Task*)
 *   9.     pools + Simulator ctor + win16_main_message_loop_logic()
 *  10.   win16_app_exit_wrapper()
 *
 * Flat Win32 mapping:
 *   WinMain(hInst, hPrev, lpCmd, nShow)
 *     → outpost_main_entry(hInst, hPrev, lpCmd, nShow)
 *
 * Current state: outpost_main_smoke links only the core/ sources, so
 * win16_call_app_main and friends are not yet reachable.  The real call is
 * guarded by OUTPOST_WIRE_WIN16_ENTRY (off by default).  Set it once the
 * platform/module sources are added to the smoke link target.
 */
#include "core/outpost_main.h"

/*
 * We always use main() so the CMake CONSOLE subsystem link is satisfied.
 * On Win32 we recover hInstance via GetModuleHandleA(NULL) to populate
 * g_TaskDI exactly as InitTask16 would have done.  hPrevInstance is
 * always NULL on Win32 (Win16 multi-launch guard: never applicable here).
 */
#if defined(_WIN32)
#  include <windows.h>
#  define OUTPOST_HINSTANCE   ((void *)GetModuleHandleA(NULL))
#  define OUTPOST_CMDLINE     GetCommandLineA()
#else
#  define OUTPOST_HINSTANCE   NULL
#  define OUTPOST_CMDLINE     ((argc > 1) ? argv[1] : "")
#endif

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;
    return outpost_main_entry(OUTPOST_HINSTANCE, /*hPrev=*/NULL,
                              OUTPOST_CMDLINE,   /*nCmdShow=*/0);
}
