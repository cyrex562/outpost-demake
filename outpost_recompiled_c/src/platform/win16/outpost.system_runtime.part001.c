/*
 * Source: outpost.c
 * Theme: system_runtime
 * Chunk: 1/4
 * Original lines (combined): 6-4921
 * Boundaries: top-level declarations/definitions only
 */

#include "core/outpost_common.h"
#include "core/outpost_platform.h"
#include "outpost.h"
/* NOTE: not including outpost.system_runtime.part001.h to avoid HANDLE16/Win16 API redefinition
 * conflicts with missing_deps.h and win16_api.h.  Forward-declare only the functions called
 * before their definitions within this translation unit instead. */

/* Forward declarations: functions called before their definition in this file */
void invoke_error_handler(void);
void __cdecl16far win16_call_app_main(void);
void __cdecl16near call_runtime_initializers_backward(void *start, void *end);
char * __stdcall16far lookup_runtime_error_string_ptr(int error_code);
void __stdcall16far log_runtime_error_string(int error_code);
void __cdecl16near set_internal_error_code_from_ax(int error_code);
void __cdecl16near handle_free_buffer(void *handle_ptr);
void __cdecl16near handle_allocate_buffer(void *handle_ptr);

string s_HeapVersion;
/* _SHI_INVOKEERRORHANDLER1 is a function declared in the header; removed variable decl */
undefined2 _SHI_INVOKEERRORHANDLER1_1; /* Ghidra +1 offset artefact — renamed */
pointer p_ErrorHandlerCallback_Segment;
pointer g_TaskDI;
pointer g_TaskBX;
pointer g_TaskES;
pointer g_TaskDX;
pointer g_WinVersion;
pointer g_DosVersion;
pointer g_TaskStackPointer;
pointer g_TaskSI;
byte g_LowLevelHandleTable;
pointer p_RuntimeInit_Callback;
pointer p_StdOut_Handle;
dword p_StdErr_Handle;
pointer p_GlobalHandleTable_End;
pointer p_GlobalHandleTable_Base;
pointer p_GlobalHandleTable_Segment;
pointer g_GlobalHandleTable_Size;
pointer g_TimezoneInitialized;
u16 g_TimezoneOffset_Low;
pointer g_TimezoneOffset_High;
pointer g_TimezoneName_Offset;
pointer g_TimezoneName_Segment;
pointer g_ModeVersion_13AE;
pointer g_TaskPSP;              /* Task PSP segment (ES at task startup, 1050:5f7e) */
u16 g_DosVersionPacked;         /* DOS version bytes packed for handle check (1050:5f82) */
u8 g_DosEnvInitFlag;            /* DOS env init flag, set 0 at start (1050:5f87) */
u8 g_ExitModeFlag;              /* Exit mode flag (1050:5fc9); high byte of CX exit code; checked by handle_system_exit_cleanup */



// AI Note: Retrieves the size of a global memory block using Windows 16-bit APIs. Calls
// GlobalHandle16 and GlobalSize16. Used across the heap manager to validate block
// boundaries and descriptor metadata.

long __stdcall16far query_global_memory_block(void *ptr)
{
  uint32_t uVar1;
  undefined2 result_seg;
  uint16_t in_stack_00000006;
  
                // Queries Windows 16-bit global memory block information.
                // param_2: Memory selector/segment
                // Calls GlobalHandle16() to get handle, then GlobalSize16() to query
                // size.
                // Used for validating global memory blocks allocated via Windows API
  uVar1 = GlobalHandle16(in_stack_00000006);
  if (uVar1 != 0x0)
  {
    uVar1 = GlobalSize16(uVar1);
    return CONCAT22(result_seg,uVar1);
  }
  return 0x0;
}



int __stdcall16far heap_set_pool_hook(uint param_1,undefined4 param_2)
{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  if (param_1 == 0x0)
  {
    uVar1 = 0x0;
  }
  else
  {
    uVar1 = param_1 + 0x1 & 0xfffe;
  }
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  if (*(int *)(iVar2 + 0x14) == -0x4153)
  {
    if ((uVar1 < param_1) || (*(int *)(iVar2 + 0x1a) - 0x14U < uVar1))
    {
      invoke_error_handler();
    }
    else if (*(int *)(iVar2 + 0x2) == 0x0)
    {
      *(uint *)(iVar2 + 0x18) = uVar1;
      return 0x1;
    }
    return 0x0;
  }
  invoke_error_handler();
  return 0x0;
}



void invoke_error_handler(void)
{
                // Invokes error handler when allocation fails or invalid memory
                // operation detected.
  _SHI_INVOKEERRORHANDLER1();
  return;
}



int __stdcall16far heap_default_error_dialog_handler(uint *param_1)
{
  uint uVar1;
  char cVar2;
  char *title;
  char *message;
  int reg_si;
  int iVar3;
  
  uVar1 = *param_1;
  message = (char *)0x5f5a;
  if (false)
  {
    return 0x0;
  }
  if (uVar1 == 0xf)
  {
LAB_1000_1fb6:
    iVar3 = 0x1;
  }
  else
  {
    if (uVar1 < 0x10)
    {
      cVar2 = (char)uVar1;
      if (cVar2 == '\x02') goto LAB_1000_1fb6;
      if (('\0' < (char)(cVar2 + -0x2)) && ((char)(cVar2 + -0x3) < '\f'))
      {
        iVar3 = 0x0;
        goto LAB_1000_1fbe;
      }
    }
    iVar3 = 0x0;
  }
LAB_1000_1fbe:
  title = heap_get_error_message(reg_si);
  iVar3 = display_error_dialog(0x0,iVar3,title,message);
  return iVar3;
}


/*
Unable to decompile 'validate_mem_access_ext'
Cause: 
Low-level Error: Symbol $$undef00000007 extends beyond the end of the address space
*/


// Iterates over a range of memory in chunks, calling a callback function (`callback_fn`) for
// each chunk. Handles segment wrapping and large sizes across 16-bit boundaries.
// Returns the last callback result or 0.

long iterate_memory_callback_far(long size,void *ptr,void *callback)
{
  uint uVar1;
  int iVar2;
  undefined2 callback_ctx;
  uint uVar3;
  code *callback_fn;
  uint uVar4;
  bool bVar5;
  
  if (size != 0x0)
  {
    do
    {
      uVar4 = (uint)size;
      if ((u16)((u32)size >> 16) != 0x0) /* ._2_2_: high 16 bits of 32-bit far size */
      {
        uVar4 = 0xffff;
      }
      if (CARRY2((uint)ptr,uVar4))
      {
        uVar4 = -(int)ptr;
      }
      uVar1 = (uint)size - uVar4;
      iVar2 = (int)(u16)((u32)size >> 16) - (uint)((u16)size < uVar4);
      size = CONCAT22(iVar2,uVar1);
      uVar3 = (*callback_fn)(uVar4,callback_ctx,ptr,callback);
      if (uVar3 != 0x0)
      {
        return CONCAT22(iVar2 + (uint)CARRY2(uVar3,uVar1),uVar3 + uVar1);
      }
      bVar5 = CARRY2((uint)ptr,uVar4);
      ptr = (void *)((int)ptr + uVar4);
      callback = (void *)((int)callback + (uint)bVar5 * 0x100);
    } while (iVar2 != 0x0 || uVar1 != 0x0);
  }
  return 0x0;
}



// Targeted Scan Finding: Far Pointer / Resource
// Performs extensive far pointer assignments to segment 1050:
// - 1050:5f48 through 1050:5f52 (Task context)
// - 1050:5f7e, 1050:5f80, 1050:5f84
// References bitmap resource: tile2.bmp (offset 1050:1538).

// Targeted Scan Finding: Far Pointer / Resource
// Performs extensive far pointer assignments to segment 1050:
// - 1050:5f48 through 1050:5f52 (Task context)
// - 1050:5f7e, 1050:5f80, 1050:5f84
// References bitmap resource: tile2.bmp (offset 1050:1538).
//
// This function is the Win16 task startup dispatcher, called by the 'entry' stub
// (undecompilable, Ghidra error) via InitTask16.  In flat model this boot path is
// bypassed entirely: outpost_main.c sets the g_Task* globals directly and calls
// win16_call_app_main() without going through this function.
// The Win16-only preamble (InitTask16 register capture) is gated by a comment
// block; the remaining logic calls the same downstream functions.

void win16_app_main_loop_init_internal(void)
{
  BOOL16 BVar3;
  undefined1 uVar6;
  int16_t iVar5;
  undefined *puVar8;

#if 0 /* Win16-only task-init preamble — see outpost_main.c for flat model equivalent */
  /*
   * Win16: InitTask16 returns task context into registers:
   *   AX (init_flags_ax)   -> hModule high byte + flags
   *   CX (task_stack_cx)   -> initial stack pointer
   *   DX (task_dx)         -> DOS segment context
   *   BX (task_bx)         -> near command-line ptr
   *   ES (reg_es)          -> PSP segment
   *   SI (reg_si)          -> hPrevInstance
   *   DI (reg_di)          -> hInstance
   * Captured to g_Task* below; flat model: set earlier by outpost_main_entry().
   */
  uint uVar2, uVar9, task_stack_cx;
  undefined *task_dx, *task_bx, *reg_si, *reg_di, *reg_es;
  undefined2 init_flags_ax;

  uVar2 = (u16)(((uint8_t)((uint)init_flags_ax >> 8)) << 8 | 0xFF);
  uVar9 = uVar2;
  win16_app_pre_init_wrapper_2();
  void *CONTEXT_ptr_context = (void *)((ulong)uVar9 << 0x10);
  InitTask16(CONTEXT_ptr_context);
  if (uVar2 == 0x0)
  {
    win16_app_main_loop_init_internal();
    return;
  }
  g_TaskPSP = reg_es;
  if (0xfeff < task_stack_cx)
  {
    win16_app_main_loop_init_internal();
    return;
  }
  g_TaskStackPointer = (undefined *)(task_stack_cx + 0x100);
  g_TaskSI = reg_si;
  g_TaskDI = reg_di;
  g_TaskBX = task_bx;
  g_TaskES = reg_es;
  g_TaskDX = task_dx;
#else
  /*
   * Flat model: g_Task* globals are already populated by outpost_main_entry().
   * Skip InitTask16 / LockSegment16 / register capture entirely.
   */
  void *CONTEXT_ptr_context = NULL;
#endif /* Win16-only task-init preamble */

  LockSegment16(0xffff);
  BVar3 = GetVersion16(CONTEXT_ptr_context);
  uVar6 = (undefined1)(BVar3 >> 0x8);
  /* CONCAT11: pack Win version major (low byte of BVar3) into high byte */
  g_WinVersion = (undefined *)(uintptr_t)(u16)((((uint8_t)BVar3) << 8) | (uint8_t)uVar6);
  /* DOS INT 21h version query (always-taken path in Win16) — flat model: not available.
   * g_DosVersion is unused in the rebuild; set to NULL. */
  puVar8 = NULL;
  /* uVar7 was segment half (Win16 far-ptr) of puVar8 — drop in flat model */
  g_DosVersion = (undefined *)puVar8;
  /* CONCAT11: pack low two bytes of DOS version result into g_DosVersionPacked */
  g_DosVersionPacked = (u16)((((uint8_t)(uintptr_t)puVar8) << 8) | ((uint8_t)((uintptr_t)puVar8 >> 8)));
  g_DosEnvInitFlag = '\0';

  WaitEvent16(0x0);
  iVar5 = InitApp16((HINSTANCE16)g_TaskDI);
  if (iVar5 == 0x0)
  {
    win16_app_main_loop_init_internal();
    return;
  }
  win16_init_env_and_interrupts();
  /* flat model: Win16 register args (tile2.bmp in CS, etc.) not used in rewritten (void) version */
  win16_parse_command_line_and_init_task();
  win16_init_env_vars_from_dos();
  nop_near_stub_3();
  win16_call_app_main();
  win16_app_exit_wrapper();
  /* in_stack_00000000: Win16 return-address slot used as error code — unreachable
   * in practice (win16_app_exit_wrapper terminates via DOS INT 21h AH=4Ch). */
  fatal_app_exit_with_message_lookup_and_terminate(0);
  return;
}


/*
Unable to decompile 'entry'
Cause: 
Low-level Error: Symbol $$undef0000000f extends beyond the end of the address space
*/


// Targeted Scan Finding: Far Pointer
// Passes five far pointers from segment 1050 (offsets 5f52, 5f4e, 5f50, 5f4a, 5f4c) to
// the main application loop.

void __cdecl16far win16_call_app_main(void)
{
  win16_main_init_and_run_loop(g_TaskDX,g_TaskBX,g_TaskES,g_TaskSI,g_TaskDI);
  return;
}



// Orchestrates application exit. It calls several cleanup routines (represented by
// `FUN_1000_2594`), releases audio/timer resources (`FUN_1000_55ac`), and finally exits
// via DOS interrupt if necessary.

void __cdecl16far win16_app_exit_with_cleanup(void)
{
  code *pcVar1;
  void *in_CX;           /* Win16 implicit CX register: exit status code */
  void *in_stack_return; /* Win16 stack[0]: return address, used as terminator ptr for initializer walk */
  char cVar2;
  
  g_ExitModeFlag = (u8)((uint)in_CX >> 0x8); /* PTR_DAT_1050_0000_1050_5fc9: high byte of exit code */
  if ((char)in_CX == '\0')
  {
    call_runtime_initializers_backward(in_CX,(void *)in_stack_return);
    call_runtime_initializers_backward(in_CX,(void *)in_stack_return);
    nop_near_stub_3();
  }
  call_runtime_initializers_backward(in_CX,(void *)in_stack_return);
  call_runtime_initializers_backward(in_CX,(void *)in_stack_return);
  cVar2 = (char)((uint)in_CX >> 0x8);
  win16_terminate_process_dos();
  if (cVar2 == '\0')
  {
    if (true)
    {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    else
    {
      Dos3Call(in_stack_return);
    }
  }
  return;
}


/*
Unable to decompile 'win16_terminate_process_dos'
Cause: 
Low-level Error: Symbol $$undef00000001 extends beyond the end of the address space
*/


// Iterates backwards through a table of function pointers (initializers/terminators)
// between `SI` and `DI` and calls each one. Used for C++ global
// constructors/destructors or general cleanup lists.

void __cdecl16near call_runtime_initializers_backward(void *start,void *end)
{
  int *piVar1;
  int *reg_si;
  int *reg_di;
  int *piVar2;
  
  while (reg_si < reg_di)
  {
    piVar2 = reg_di + -0x2;
    piVar1 = reg_di + -0x1;
    reg_di = piVar2;
    if (*piVar2 != 0x0 || *piVar1 != 0x0)
    {
      (*(code *)*piVar2)();
    }
  }
  return;
}



void __cdecl16far display_invalid_turn_error_stub(void)
{
  log_runtime_error_string(0xfc);
  log_runtime_error_string(0xff);
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack
// Handles stack overflow or stack corruption detected during runtime. It attempts to
// log the error and then terminates the application via a fatal exit.

void __cdecl16far runtime_stack_check_fail_handler(void)
{
  int stack_probe_ax;
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 reg_ss;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  int in_stack_00000006;
  undefined2 stack0x0004;   /* Win16 stack frame reference point (BP+4 in original) */
  
  puVar1 = (undefined1 *)(stack_probe_ax + 0x1U & 0xfffe);
  if ((puVar1 < &stack0x0004) &&
     (puVar2 = (undefined *)-((int)puVar1 - (int)&stack0x0004),
     (undefined *)*(uint *)&g_AllocFlags <= puVar2))
  {
    if (puVar2 < *(undefined **)&p_AllocStrategyCode)
    {
      *(undefined **)&p_AllocStrategyCode = puVar2;
    }
    *(undefined2 *)(puVar2 + -0x2) = in_stack_00000002;
    *(undefined2 *)(puVar2 + -0x4) = in_stack_00000000;
    return;
  }
  iVar3 = check_exported_stub_patch_state();
  if (*(int *)0x5fce != -0x1)
  {
                // WARNING: Could not recover jumptable at 0x10002622. Too many branches
                // WARNING: Treating indirect jump as call
    (*(code *)(ulong)*(uint *)0x5fce)();
    return;
  }
  fatal_app_exit_with_message_lookup_and_terminate(in_stack_00000006);
  return;
}



undefined ** fatal_runtime_error_handler(u16 param_1,u8 *param_2)
{
  char *pcVar1;
  u8 **ppuVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  u8 **ppuVar6;
  u8 **ppuVar7;
  char *pcVar8;
  int error_code;
  u8 **ppuVar1;
  
  iVar3 = check_exported_stub_patch_state();
  error_code = 0x3;
  iVar5 = 0x3;
  display_invalid_turn_error_stub();
  log_runtime_error_string(iVar5);
  pcVar4 = lookup_runtime_error_string_ptr(error_code);
  if (pcVar4 != NULL)
  {
    iVar5 = 0x9;
    if (*pcVar4 == 'M')
    {
      iVar5 = 0xf;
    }
    pcVar4 = pcVar4 + iVar5;
    iVar5 = 0x22;
    pcVar8 = pcVar4;
    do
    {
      if (iVar5 == 0x0) break;
      iVar5 += -0x1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 0x1;
    } while (*pcVar1 != '\r');
    pcVar8[-0x1] = '\0';
  }
  FatalAppExit16((char *)CONCAT22(iVar3,pcVar4),0x0);
  FatalExit16(0xff);
  ppuVar6 = (u8 **)((char *)s_NMSG_1050_63f6 + 0x8);
  do
  {
    ppuVar1 = ppuVar6;
    ppuVar6 = ppuVar6 + 0x1;
    ppuVar7 = ppuVar6;
    if ((*ppuVar1 == param_2) || (ppuVar7 = NULL, *ppuVar1 == (u8 *)0xffff))
    {
      return ppuVar7;
    }
    iVar5 = -0x1;
    do
    {
      if (iVar5 == 0x0) break;
      iVar5 += -0x1;
      ppuVar2 = ppuVar6;
      ppuVar6 = (u8 **)((int)ppuVar6 + 0x1);
    } while (*(char *)ppuVar2 != '\0');
  } while( true );
}



// Targeted Scan Finding: Far Pointer
// References string table at far pointer 1050:63FE to look up runtime error messages.

char * __stdcall16far lookup_runtime_error_string_ptr(int error_code)
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)((char *)s_NMSG_1050_63f6 + 0x8);
  do
  {
    piVar1 = piVar3;
    piVar3 = piVar3 + 0x1;
    piVar4 = piVar3;
    if ((*piVar1 == error_code) || (piVar4 = NULL, *piVar1 == -0x1))
    {
      return (char *)piVar4;
    }
    iVar2 = -0x1;
    do
    {
      if (iVar2 == 0x0) break;
      iVar2 += -0x1;
      piVar1 = piVar3;
      piVar3 = (int *)((int)piVar3 + 0x1);
    } while ((char)*piVar1 != '\0');
  } while( true );
}



// Looks up a runtime error string and logs it to the internal logging system. It
// calculates the length of the string and then triggers a log update.

void __stdcall16far log_runtime_error_string(int error_code)
{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int reg_di;
  undefined2 reg_es;
  
  if (p_SystemIO_Active != NULL)
  {
    pcVar2 = lookup_runtime_error_string_ptr(error_code);
    if (pcVar2 != NULL)
    {
      iVar3 = -0x1;
      do
      {
        if (iVar3 == 0x0) break;
        iVar3 += -0x1;
        pcVar1 = pcVar2;
        pcVar2 = pcVar2 + 0x1;
      } while (*pcVar1 != '\0');
      fatal_exit_shorthand(reg_di);
    }
  }
  return;
}



int __cdecl16far
check_error_flag_and_set_internal_err_u16(u16 param_1,int error_code,bool param_3)
{
  if (!param_3)
  {
    return 0x0;
  }
  set_internal_error_code_from_ax(param_1);
  return -0x1;
}



byte __cdecl16far
check_error_flag_and_set_internal_err_u8_2(byte result,u16 param_2,bool param_3)
{
  if (param_3)
  {
    set_internal_error_code_from_ax(param_2);
    return (byte)param_2;
  }
  param_2 = param_2 & 0xFF00u; /* ._0_1_: clear low byte */
  return (byte)param_2;
}



void __cdecl16far check_error_flag_and_set_internal_err_void(u16 param_1,bool param_2)
{
  if (param_2)
  {
    set_internal_error_code_from_ax(param_1);
  }
  return;
}



void __cdecl16far set_internal_error_code_wrapper_far(void)
{
  int in_stack_00000000;
  
  set_internal_error_code_from_ax(in_stack_00000000);
  return;
}



// Maps a processor-level or API error code (in `AX`) to an internal application error
// state. It uses a range-based lookup table to normalize external errors into internal
// flags.

void __cdecl16near set_internal_error_code_from_ax(int error_code)
{
  char cVar1;
  uint reg_ax;
  
  PTR_DAT_1050_0000_1050_5f88 = (undefined *)(uintptr_t)(uint8_t)reg_ax; /* ._0_1_: store error byte in ptr-sized var */
  cVar1 = (char)(reg_ax >> 0x8);
  if (cVar1 != '\0') goto LAB_1000_29d2;
  if ((uint8_t)(uintptr_t)PTR_DAT_1050_0000_1050_5f88 < 0x22)
  {
    if ((uint8_t)(uintptr_t)PTR_DAT_1050_0000_1050_5f88 < 0x20)
    {
      if (0x13 < (uint8_t)PTR_DAT_1050_0000_1050_5f88) goto LAB_1000_29cc;
    }
    else
    {
      reg_ax = 0x5;
    }
  }
  else
  {
LAB_1000_29cc:
    reg_ax = 0x13;
  }
  cVar1 = *(char *)(ulong)((reg_ax & 0xff) + 0x5fd6);
LAB_1000_29d2:
  PTR_DAT_1050_0000_1050_5f78 = (undefined *)(int)cVar1;
  return;
}



// Analyzes and updates the state of a resource handle (provided in `param_1`). It
// checks for internal error flags, processes path strings (ensuring correct
// delimiters), and performs runtime validation of the handle's associated data.

int __cdecl16far process_handle_flags_and_path_logic(void *handle_ptr)
{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int reg_bp;
  u16 uVar4;
  char *reg_cs;
  undefined2 reg_ss;
  char local_10 [0xa];
  int iStack_6;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = reg_bp + 0x1;
  local_4 = 0x1050;
  uVar4 = 0xffff;
  if ((*(byte *)((int)handle_ptr + 0xa) & 0x40) != 0x0)
  {
    *(undefined1 *)((int)handle_ptr + 0xa) = 0x0;
    return -0x1;
  }
  if ((*(byte *)((int)handle_ptr + 0xa) & 0x83) == 0x0) goto LAB_1000_2af2;
  uVar4 = handle_flush_internal_buffer(handle_ptr);
  iStack_6 = *(int *)((int)handle_ptr + 0xf4);
  handle_free_buffer(handle_ptr);
  if ((int)g_MaxFileHandles < (int)(uint)*(byte *)((int)handle_ptr + 0xb))
  {
    iVar2 = 0x0;
    fatal_exit_shorthand((int)reg_cs);
    if (iVar2 < 0x0) goto LAB_1000_2a6a;
LAB_1000_2a82:
    bVar1 = false;
  }
  else
  {
    uVar3 = (uint)*(byte *)((int)handle_ptr + 0xb);
    dos_close_file_handle_internal((u16)reg_cs,uVar3);
    if (-0x1 < (int)uVar3) goto LAB_1000_2a82;
LAB_1000_2a6a:
    bVar1 = true;
  }
  if (!bVar1)
  {
    if (iStack_6 == 0x0) goto LAB_1000_2af2;
    strcpy_optimized((char *)CONCAT22(reg_ss,local_10),s___1050_5fea);
    if (local_10[0x0] != '\\')
    {
      strcat_append((char *)CONCAT22(reg_ss,local_10),s___1050_5fec);
    }
    win16_app_pre_init_wrapper_3_entry_point_maybe();
    iVar2 = dos_remove_directory_internal_far(reg_cs);
    if (iVar2 == 0x0) goto LAB_1000_2af2;
  }
  uVar4 = 0xffff;
LAB_1000_2af2:
  *(undefined1 *)((int)handle_ptr + 0xa) = 0x0;
  return uVar4;
}



// Internal fopen-like function that allocates a handle descriptor and initializes it
// using the provided filename and mode string. Calls `handle_init_from_mode` to parse
// the mode.

void * __cdecl16far handle_open_file_internal(char *filename,char *mode,byte flags)
{
  u16 *puVar1;
  void *pvVar2;
  int result_dx;
  void *in_stack_0000000a;
  
  puVar1 = handle_get_available_slot();
  if (result_dx == 0x0 && puVar1 == NULL)
  {
    pvVar2 = NULL;
  }
  else
  {
    pvVar2 = handle_init_from_mode_string(filename,mode,flags,in_stack_0000000a);
  }
  return pvVar2;
}



// Global cleanup routine for the handle management system, called during application
// exit. It flushes buffers and closes all active internal handles.

void __cdecl16far handle_system_exit_cleanup(void)
{
  handle_flush_all_on_exit();
  if ((char)g_ExitModeFlag != '\0')
  {
    handle_system_close_all_active_handles_wrapper_far();
  }
  return;
}



// Targeted Scan Finding: Far Pointer
// References several global control pointers in segment 1050:
// - PTR_DAT_1050_61ec
// - PTR_DAT_1050_621c
// - handle_ptr constant 0x6228 (likely offset in segment 1050).

int __cdecl16far handle_buffered_write_char(int character,void *handle_ptr)
{
  void *pvVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  int reg_bp;
  undefined *puVar6;
  u16 reg_cs;
  undefined2 reg_ss;
  
  pvVar1 = handle_ptr;
  puVar6 = (undefined *)(reg_bp + 0x1);
  bVar2 = *(byte *)((int)handle_ptr + 0xa);
  if (((bVar2 & 0x82) != 0x0) && ((bVar2 & 0x40) == 0x0))
  {
    *(undefined2 *)((int)handle_ptr + 0x4) = 0x0;
    if ((bVar2 & 0x1) != 0x0)
    {
      if ((bVar2 & 0x10) == 0x0) goto LAB_1000_2c37;
      *(undefined2 *)handle_ptr = *(undefined2 *)((int)handle_ptr + 0x6);
      bVar2 &= 0xfe;
    }
    *(byte *)((int)handle_ptr + 0xa) = bVar2 & 0xef | 0x2;
    puVar5 = (undefined *)(uint)*(byte *)((int)handle_ptr + 0xb);
    if (((bVar2 & 0x8) == 0x0) &&
       (((bVar2 & 0x4) != 0x0 ||
        (((*(byte *)((int)handle_ptr + 0xf0) & 0x1) == 0x0 &&
         (((p_SystemIO_Active != NULL &&
           (((handle_ptr == (undefined **)&p_StdOut_Handle ||
             (handle_ptr == (dword *)&p_StdErr_Handle)) &&
            ((puVar5[0x5f90] & 0x40) != 0x0)))) ||
          (handle_allocate_buffer(handle_ptr),
          (*(byte *)((int)pvVar1 + 0xa) & 0x8) == 0x0))))))))
    {
      puVar3 = handle_buffered_write_internal_logic
             (reg_cs,puVar5,(char *)CONCAT22(reg_ss,&character),0x1);
      puVar6 = (undefined *)0x1;
    }
    else
    {
      iVar4 = *(int *)pvVar1 - *(int *)((int)pvVar1 + 0x6);
      *(int *)pvVar1 = *(int *)((int)pvVar1 + 0x6) + 0x1;
      *(int *)((int)pvVar1 + 0x4) = *(int *)((int)pvVar1 + 0xf2) + -0x1;
      if (iVar4 == 0x0)
      {
        puVar3 = NULL;
        puVar6 = NULL;
        if ((puVar5[0x5f90] & 0x20) != 0x0)
        {
          dos_seek_file_handle_internal(reg_cs,(uint)puVar5,0x0,0x0,0x2);
          puVar3 = NULL;
          puVar6 = NULL;
        }
      }
      else
      {
        puVar3 = handle_buffered_write_internal_logic
               (reg_cs,puVar5,
                            (char *)CONCAT22(*(undefined2 *)((int)pvVar1 + 0x8),
                                             (char *)*(undefined2 *)((int)pvVar1 + 0x6))
                            ,iVar4);
      }
      *(char *)*(undefined4 *)((int)pvVar1 + 0x6) = (char)character;
    }
    if (puVar3 == puVar6)
    {
      return character & 0xff;
    }
  }
LAB_1000_2c37:
  *(byte *)((int)pvVar1 + 0xa) = *(byte *)((int)pvVar1 + 0xa) | 0x20;
  return -0x1;
}



// Frees the memory buffer associated with a handle if it was dynamically allocated
// (indicated by flag bit 3). Resets buffer pointers and flags.

void __cdecl16near handle_free_buffer(void *handle_ptr)
{
  if (((*(byte *)((int)handle_ptr + 0xa) & 0x83) != 0x0) &&
     ((*(byte *)((int)handle_ptr + 0xa) & 0x8) != 0x0))
  {
    heap_free_bytes((void *)*(undefined2 *)((int)handle_ptr + 0x6));
    *(byte *)((int)handle_ptr + 0xa) = *(byte *)((int)handle_ptr + 0xa) & 0xf7;
    *(undefined2 *)((int)handle_ptr + 0x6) = 0x0;
    *(undefined2 *)((int)handle_ptr + 0x8) = 0x0;
    *(undefined2 *)handle_ptr = 0x0;
    *(undefined2 *)((int)handle_ptr + 0x2) = 0x0;
    *(undefined2 *)((int)handle_ptr + 0x4) = 0x0;
  }
  return;
}



// Targeted Scan Finding: Far Pointer
// References heap context far pointer at 1050:1050 if allocation fails.

void __cdecl16near handle_allocate_buffer(void *handle_ptr)
{
  void *pvVar1;
  int alloc_seg_dx;
  undefined2 reg_si;
  
  pvVar1 = heap_alloc_bytes(CONCAT22(reg_si,0x200));
  if (alloc_seg_dx == 0x0)
  {
    *(byte *)((int)handle_ptr + 0xa) = *(byte *)((int)handle_ptr + 0xa) | 0x4;
    *(undefined2 *)((int)handle_ptr + 0xf2) = 0x1;
    alloc_seg_dx = 0x1050;
    pvVar1 = (void *)((int)handle_ptr + 0xf1);
  }
  else
  {
    *(byte *)((int)handle_ptr + 0xa) = *(byte *)((int)handle_ptr + 0xa) | 0x8;
    *(undefined2 *)((int)handle_ptr + 0xf2) = 0x200;
  }
  *(int *)((int)handle_ptr + 0x2) = alloc_seg_dx;
  *(void **)handle_ptr = pvVar1;
  *(int *)((int)handle_ptr + 0x8) = alloc_seg_dx;
  *(int *)((int)handle_ptr + 0x6) = (int)pvVar1;
  *(undefined2 *)((int)handle_ptr + 0x4) = 0x0;
  return;
}
