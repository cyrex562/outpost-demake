/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 1/19
 * Original lines (combined): 1-5546
 * Boundaries: top-level declarations/definitions only
 */

#include "core/outpost_common.h"
#include "core/outpost_platform.h"
#include "outpost.h"

/* --- Task and Environment Globals --- */
dword g_HeapContext;
pointer p_CurrentHeapContext;
pointer g_PSPSegment;           // Segment of the Program Segment Prefix (PSP)
uint16_t g_Argc;                // Process argument count
char** g_Argv;                  // Process argument vector
char* g_ModulePath;             // Full path to the executable module
pointer g_WinMain_Callback;     // Return address/callback for task initialization
uint8_t g_CleanupHandlesOnExit; // Flag to trigger handle cleanup (1050:5fc9)

/* --- Heap Error Message Table --- */
typedef struct {
    uint16_t id;
    char message[21];
} HeapErrorEntry;

static const char* s_OutOfMemory_1000_1c3c = "Out of memory.  Please free some memory and try again.";

static const HeapErrorEntry g_HeapErrorTable[] = {
    { 0, "" },
    { 1, "MEM_INTERNAL_ERROR" },
    { 2, "" }, // Handled by special case s_OutOfMemory_1000_1c3c
    { 3, "MEM_BLOCK_TOO_BIG" },
    { 4, "MEM_ALLOC_ZERO" },
    { 5, "MEM_RESIZE_FAILED" },
    { 6, "MEM_LOCK_ERROR" },
    { 7, "MEM_EXCEEDED_CEILING" },
    { 8, "MEM_TOO_MANY_PAGES" },
    { 9, "MEM_TOO_MANY_TASKS" },
    { 10, "MEM_BAD_MEM_POOL" },
    { 11, "MEM_BAD_BLOCK" },
    { 12, "MEM_BAD_FREE_BLOCK" },
    { 13, "MEM_BAD_HANDLE" },
    { 14, "MEM_BAD_POINTER" }
};

/* --- String Constants (Placeholders for segment 1050 data) --- */
char* s_554_bmp_1050_1f77;
char* s_199_flc_1050_1c36;
char* s_242_flc_1050_1c76;
char* s_1034a_bmp_1050_1de7;
pointer g_OldInt0_Offset;
pointer g_OldInt0_Segment;
string s_You_may_not_run_a_turn__The_game_1050_00df;
char* s_fem15_wav_1050_263a;
char* s_fem37_wav_1050_2716;
char* s_fem54_wav_1050_27c0;
char* s__NMSG__1050_63f6;
char* s___1050_5fea;
char* s___1050_5fec;
char* s_180_flc_1050_1bfe;
char* s_A_1050_4202;
string s_ABNORMAL_PROGRAM_TERMINATION_1050_6544;
dword p_StrtokNextToken;

/* --- Externs from other translation units --- */
extern pointer p_RuntimeInit_Callback;   /* runtime initializer callback, 1050:6200 */
extern byte    g_LowLevelHandleTable[];  /* low-level file handle table, populated from _C_FILE_INFO env var */
extern pointer g_TaskDI;                 /* Win16 hInstance (InitTask16 DI register) */
extern pointer p_EnvOffset_Base;         /* environment variable pointer table base offset */
extern pointer p_EnvSegment_Base;        /* environment variable string data segment */

/* --- Functions --- */

/**
 * Returns a pointer to a heap-related error message string.
 * Error code 2 is handled as a special case for "Out of Memory".
 */
char * __cdecl16near heap_get_error_message(int error_code)
{
    if (error_code == 2)
    {
        return (char *)s_OutOfMemory_1000_1c3c;
    }

    if (error_code >= 0 && error_code < (int)OUTPOST_ARRAY_COUNT(g_HeapErrorTable))
    {
        return (char *)g_HeapErrorTable[error_code].message;
    }

    return "UNKNOWN_MEMORY_ERROR";
}

/**
 * Initializes the environment and interrupt handlers.
 * Specifically handles saving/setting the Divide-by-Zero (INT 0) handler
 * and decoding MSC file handle info from the DOS environment.
 */
void __cdecl16far win16_init_env_and_interrupts(void)
{
    byte *src;
    byte *dest;
    uint16_t env_seg;
    byte char1, char2;
    bool match;

#if 0
    /* Win16/DOS only: AH=35h — Get Interrupt Vector 0 (Divide-by-Zero); result in BX:ES */
    Dos3Call();
    g_OldInt0_Offset = (pointer)_BX;
    g_OldInt0_Segment = (pointer)_ES;
    /* Win16/DOS only: AH=25h — Set Interrupt Vector 0 to internal handler */
    Dos3Call();
#else
    /* Flat model: no DOS interrupt vector management; leave saved offsets zeroed */
    g_OldInt0_Offset = 0;
    g_OldInt0_Segment = 0;
    (void)0; /* placeholder for AH=25h Set INT 0 */
#endif

    check_exported_stub_patch_state();

    // Call runtime initializer callback if registered at 1050:6200
    if (p_RuntimeInit_Callback != NULL)
    {
        ((void (*)(uint16_t))p_RuntimeInit_Callback)(0x1000);
        ((void (*)(uint16_t))p_RuntimeInit_Callback)(0x1000);
    }

    // Get Environment Segment from PSP (offset 0x2c)
    env_seg = *(uint16_t*)((uint8_t*)g_PSPSegment + 0x2c);

    if (env_seg != 0)
    {
        // Search environment for "_C_FILE_INFO="
        src = (byte*)((uint32_t)env_seg << 16); // Far pointer env_seg:0000
        
        while (*src != '\0')
        {
            match = true;
            const char *key = "_C_FILE_INFO=";
            for (int i = 0; i < 13; i++) {
                if (src[i] != (byte)key[i]) {
                    match = false;
                    break;
                }
            }

            if (match)
            {
                // Decode file handle info from the string.
                // Pairs of chars 'A'-'P' representing 4-bit nibbles.
                src += 13; 
                dest = (byte*)&g_LowLevelHandleTable;
                
                while (true) {
                    char1 = *src++;
                    if (char1 < 'A') break;
                    char2 = *src++;
                    if (char2 < 'A') break;
                    
                    *dest++ = (byte)((char1 - 'A') << 4 | (char2 - 'A'));
                }
                break;
            }
            
            while (*src != '\0') src++;
            src++; 
        }
    }

    // Execute runtime initializers from internal lists
    call_runtime_initializers_backward((void *)0x620c, (void *)0x620c);
    call_runtime_initializers_backward((void *)0x620c, (void *)0x620c);
    call_runtime_initializers_backward((void *)0x61ee, (void *)0x61fe);
}

/**
 * Signals termination cleanup and invokes final DOS process termination.
 */
void app_terminate_with_dos(void)
{
    // Set exit status flag to trigger handle cleanup in handle_system_exit_cleanup
    g_CleanupHandlesOnExit = 1;

    // Perform final DOS termination via internal shim
    win16_terminate_process_dos();

    // Fallback directly to DOS terminate if shim returns
    Dos3Call(); 
}

/**
 * Startup command-line parser and task initializer.
 * Populates g_Argc/g_Argv from the Program Segment Prefix (PSP).
 */
void win16_parse_command_line_and_init_task(void)
{
    char *src;
    char *dst;
    int i;
    int16_t path_len;
    bool in_quotes;

    // Allocate and retrieve executable module path (argv[0])
    g_ModulePath = (char *)heap_alloc_safe(0x104);
    path_len = GetModuleFilename16(0x104, g_ModulePath, (HINSTANCE16)g_TaskDI);
    g_ModulePath[path_len] = '\0';

    // Access command line tail from Program Segment Prefix (PSP) offset 0x81
    src = (char *)((uint32_t)g_PSPSegment << 16 | 0x81);

    // Initial pass to count arguments (argc)
    g_Argc = 1; 
    char *p = src;
    while (*p == ' ' || *p == '\t') p++; // Skip whitespace
    
    if (*p != '\r' && *p != '\0') {
        g_Argc++;
        while (*p != '\r' && *p != '\0') {
            if (*p == '\"') {
                p++;
                while (*p != '\"' && *p != '\r' && *p != '\0') p++;
                if (*p == '\"') p++;
            } else if (*p == ' ' || *p == '\t') {
                g_Argc++;
                while (*p == ' ' || *p == '\t') p++;
            } else {
                p++;
            }
        }
    }

    // Allocate argv array and populate
    g_Argv = (char **)heap_alloc_safe((long)(g_Argc + 1) * sizeof(char *));
    g_Argv[0] = g_ModulePath;

    dst = (char *)heap_alloc_safe(256); // Buffer for argument strings
    src = (char *)((uint32_t)g_PSPSegment << 16 | 0x81);
    while (*src == ' ' || *src == '\t') src++;

    for (i = 1; i < g_Argc; i++) {
        g_Argv[i] = dst;
        in_quotes = false;
        while (*src != '\r' && *src != '\0') {
            if (*src == '\"') {
                in_quotes = !in_quotes;
                src++;
            } else if (!in_quotes && (*src == ' ' || *src == '\t')) {
                while (*src == ' ' || *src == '\t') src++;
                break;
            } else {
                *dst++ = *src++;
            }
        }
        *dst++ = '\0';
    }
    g_Argv[g_Argc] = NULL;
}

/**
 * Retrieves the DOS environment segment, parses all environment variables, 
 * and stores them in a format accessible by the application.
 */
void __cdecl16far win16_init_env_vars_from_dos(void)
{
    char *dos_env;
    char *p;
    uint16_t num_vars = 0;
    uint16_t total_size = 0;
    char *env_copy;
    char **ptr_table;
    char *src;
    char *dst;
    int i;

    // Get DOS environment segment
    dos_env = (char far *)GetDosEnvironment16();
    if (dos_env == NULL) return;

    // Scan environment to count variables and determine total size
    p = dos_env;
    if (*p != '\0') {
        do {
            while (*p != '\0') {
                p++;
                total_size++;
            }
            num_vars++;
            p++; 
            total_size++;
        } while (*p != '\0');
    }
    total_size++; 
    num_vars++;

    // Allocate storage for environment copy and pointer table
    env_copy = (char far *)heap_alloc_safe((long)total_size);
    ptr_table = (char far **)heap_alloc_safe((long)num_vars * 4);

    p_EnvOffset_Base = (pointer)ptr_table;
    p_EnvSegment_Base = (pointer)((uint32_t)env_copy >> 16);

    src = dos_env;
    dst = env_copy;
    i = 0;

    // Copy strings, filtering out _C_FILE_INFO (handled separately)
    while (num_vars > 1) {
        bool skip = true;
        const char *info_key = "_C_FILE_INFO=";
        for (int k = 0; k < 13; k++) {
            if (src[k] != info_key[k]) {
                skip = false;
                break;
            }
        }

        if (!skip) {
            ptr_table[i++] = dst;
        }

        while (*src != '\0') {
            *dst++ = *src++;
        }
        *dst++ = *src++; 
        num_vars--;
    }

    ptr_table[i] = NULL;
}
