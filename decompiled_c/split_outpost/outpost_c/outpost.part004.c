/*
 * Source: outpost.c
 * Chunk: 4/117
 * Original lines: 3486-4647
 * Boundaries: top-level declarations/definitions only
 */




// Targeted Scan Finding: Far Pointer / Resource
// Performs extensive far pointer assignments to segment 1050:
// - 1050:5f48 through 1050:5f52 (Task context)
// - 1050:5f7e, 1050:5f80, 1050:5f84
// References bitmap resource: tile2.bmp (offset 1050:1538).

void win16_app_main_loop_init_internal(void)
{
  code *pcVar1;
  undefined2 in_AX;
  uint uVar2;
  BOOL16 BVar3;
  undefined1 uVar6;
  undefined *puVar4;
  int16_t iVar5;
  uint in_CX;
  undefined *in_DX;
  u16 uVar7;
  undefined *in_BX;
  undefined *unaff_SI;
  undefined *unaff_DI;
  undefined *unaff_ES;
  undefined *puVar8;
  int in_stack_00000000;
  uint uVar9;
  void *CONTEXT_ptr_context;
  
  uVar2 = CONCAT11((char)((uint)in_AX >> 0x8),0xff);
  uVar9 = uVar2;
  win16_app_pre_init_wrapper_2();
  CONTEXT_ptr_context = (void *)((ulong)uVar9 << 0x10);
  InitTask16(CONTEXT_ptr_context);
  if (uVar2 == 0x0)
  {
    win16_app_main_loop_init_internal();
    return;
  }
  PTR_DAT_1050_0000_1050_5f7e = unaff_ES;
  if (0xfeff < in_CX)
  {
    win16_app_main_loop_init_internal();
    return;
  }
  g_TaskStackPointer = (undefined *)(in_CX + 0x100);
  g_TaskSI = unaff_SI;
  g_TaskDI = unaff_DI;
  g_TaskBX = in_BX;
  g_TaskES = unaff_ES;
  g_TaskDX = in_DX;
  LockSegment16(0xffff);
  BVar3 = GetVersion16(CONTEXT_ptr_context);
  uVar6 = (undefined1)(BVar3 >> 0x8);
  g_WinVersion = (undefined *)CONCAT11((char)BVar3,uVar6);
  puVar4 = (undefined *)CONCAT11(0x30,uVar6);
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    puVar8 = (undefined *)(*pcVar1)();
  }
  else
  {
    Dos3Call(CONTEXT_ptr_context);
    puVar8 = (undefined *)CONCAT22(in_DX,puVar4);
  }
  uVar7 = (u16)((ulong)puVar8 >> 0x10);
  g_DosVersion = (undefined *)puVar8;
  u16_1050_5f82 = CONCAT11((char)puVar8,(char)((ulong)puVar8 >> 0x8));
  if (true)
  {
    u8_1050_5f87 = '\0';
  }
  WaitEvent16(0x0);
  iVar5 = InitApp16((HINSTANCE16)g_TaskDI);
  if (iVar5 == 0x0)
  {
    win16_app_main_loop_init_internal();
    return;
  }
  win16_init_env_and_interrupts();
  win16_parse_command_line_and_init_task
            ((char *)s_tile2_bmp_1050_1538,uVar7,0x238d,(u32)CONTEXT_ptr_context);
  win16_init_env_vars_from_dos();
  nop_near_stub_3();
  win16_call_app_main();
  win16_app_exit_wrapper();
  fatal_app_exit_with_message_lookup_and_terminate(in_stack_00000000);
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



// Targeted Scan Finding: Far Pointer / Vtable
// Initializes environment trackers in segment 1050 (offsets 5f6a, 5f6c).
// Performs an indirect call through a function pointer stored in segment 1050 (offset
// 6200).
// References environment string: _C_FILE_INFO (offset 1050:5f5c).

void __cdecl16far win16_init_env_and_interrupts(void)
{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined *in_BX;
  int unaff_BP;
  byte *pbVar8;
  byte *pbVar9;
  undefined *unaff_ES;
  undefined2 uVar10;
  bool bVar11;
  dword *CONTEXT_ptr_context;
  
  CONTEXT_ptr_context = (dword *)CONCAT22(unaff_BP + 0x1,(dword *)&g_HeapContext);
  if (true)
  {
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
  }
  else
  {
    Dos3Call(CONTEXT_ptr_context);
  }
  uVar10 = 0x1000;
  g_EnvString_Offset = in_BX;
  g_EnvString_Segment = unaff_ES;
  if (true)
  {
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
  }
  else
  {
    uVar10 = 0x1538;
    Dos3Call(CONTEXT_ptr_context);
  }
  iVar6 = check_exported_stub_patch_state();
  if (*(undefined **)&PTR_DAT_1050_0000_1050_6202 != NULL)
  {
    bVar11 = false;
    (*(code *)*(undefined **)&p_RuntimeInit_Callback)(uVar10);
    if (bVar11)
    {
      fatal_exit_wrapper_2();
      return;
    }
    (*(code *)*(undefined **)&p_RuntimeInit_Callback)(uVar10);
  }
  iVar4 = *(int *)((char *)s_NewFailedMsg + 0xc);
  if (iVar4 != 0x0)
  {
    pbVar9 = NULL;
    do
    {
      if (*pbVar9 == 0x0) break;
      iVar7 = 0xd;
      pbVar8 = (byte *)s__C_FILE_INFO__1050_5f5c;
      bVar11 = false;
      do
      {
        if (iVar7 == 0x0) break;
        iVar7 += -0x1;
        pbVar3 = pbVar9;
        pbVar9 = pbVar9 + 0x1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 0x1;
        bVar11 = *pbVar1 == *pbVar3;
      } while (bVar11);
      if (bVar11)
      {
        pbVar8 = (byte *)&g_LowLevelHandleTable;
        goto LAB_1000_2495;
      }
      iVar7 = 0x7fff;
      bVar11 = true;
      do
      {
        if (iVar7 == 0x0) break;
        iVar7 += -0x1;
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 0x1;
        bVar11 = *pbVar1 == 0x0;
      } while (!bVar11);
    } while (bVar11);
  }
LAB_1000_24a9:
  call_runtime_initializers_backward
            ((dword *)CONTEXT_ptr_context,(void *)((ulong)CONTEXT_ptr_context >> 0x10));
  call_runtime_initializers_backward
            ((dword *)CONTEXT_ptr_context,(void *)((ulong)CONTEXT_ptr_context >> 0x10));
  call_runtime_initializers_backward
            ((dword *)CONTEXT_ptr_context,(void *)((ulong)CONTEXT_ptr_context >> 0x10));
  return;
LAB_1000_2495:
  pbVar1 = pbVar9;
  pbVar2 = pbVar9 + 0x1;
  if (*pbVar1 < 0x41) goto LAB_1000_24a9;
  pbVar9 = pbVar9 + 0x2;
  if (*pbVar2 < 0x41) goto LAB_1000_24a9;
  pbVar3 = pbVar8;
  pbVar8 = pbVar8 + 0x1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_2495;
}



void win16_app_exit_wrapper(void)
{
  win16_app_exit_with_cleanup();
  return;
}



void win16_app_pre_init_wrapper_2(void)
{
  win16_app_exit_with_cleanup();
  return;
}



void app_exit_wrapper(void)
{
  win16_app_exit_with_cleanup();
  return;
}



void app_terminate_with_dos(void)
{
  code *pcVar1;
  u16 unaff_SI;
  void *unaff_DI;
  char *start;
  char cVar2;
  void *CONTEXT_ptr_context;
  
  CONTEXT_ptr_context = (void *)CONCAT22(unaff_SI,unaff_DI);
  PTR_DAT_1050_0000_1050_5fc9._0_1_ = 0x1;
  start = (char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x22;
  if (false)
  {
    call_runtime_initializers_backward
              ((char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x22,unaff_DI);
    call_runtime_initializers_backward(start,(void *)CONTEXT_ptr_context);
    nop_near_stub_3();
  }
  call_runtime_initializers_backward(start,(void *)CONTEXT_ptr_context);
  call_runtime_initializers_backward(start,(void *)CONTEXT_ptr_context);
  cVar2 = (char)((uint)start >> 0x8);
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
      Dos3Call(CONTEXT_ptr_context);
    }
  }
  return;
}



// Orchestrates application exit. It calls several cleanup routines (represented by
// `FUN_1000_2594`), releases audio/timer resources (`FUN_1000_55ac`), and finally exits
// via DOS interrupt if necessary.

void __cdecl16far win16_app_exit_with_cleanup(void)
{
  code *pcVar1;
  void *in_CX;
  void *in_stack_00000000;
  char cVar2;
  
  PTR_DAT_1050_0000_1050_5fc9._0_1_ = (undefined1)((uint)in_CX >> 0x8);
  if ((char)in_CX == '\0')
  {
    call_runtime_initializers_backward(in_CX,(void *)in_stack_00000000);
    call_runtime_initializers_backward(in_CX,(void *)in_stack_00000000);
    nop_near_stub_3();
  }
  call_runtime_initializers_backward(in_CX,(void *)in_stack_00000000);
  call_runtime_initializers_backward(in_CX,(void *)in_stack_00000000);
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
      Dos3Call(in_stack_00000000);
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
  int *unaff_SI;
  int *unaff_DI;
  int *piVar2;
  
  while (unaff_SI < unaff_DI)
  {
    piVar2 = unaff_DI + -0x2;
    piVar1 = unaff_DI + -0x1;
    unaff_DI = piVar2;
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



void fatal_exit_wrapper_2(void)
{
  int in_stack_00000002;
  
  fatal_app_exit_with_message_lookup_and_terminate(in_stack_00000002);
  return;
}



void stack_guarded_indirect_call(void *param_1,u16 param_2,int param_3)
{
  int in_AX;
  undefined1 *puVar1;
  undefined *puVar2;
  undefined2 unaff_SS;
  
  puVar1 = (undefined1 *)(in_AX + 0x1U & 0xfffe);
  if ((puVar1 < &stack0x0002) &&
     (puVar2 = (undefined *)-((int)puVar1 - (int)&stack0x0002),
     (undefined *)*(uint *)&g_AllocFlags <= puVar2))
  {
    if (puVar2 < *(undefined **)&p_AllocStrategyCode)
    {
      *(undefined **)&p_AllocStrategyCode = puVar2;
    }
                // WARNING: Could not recover jumptable at 0x100025f0. Too many branches
                // WARNING: Treating indirect jump as call
    (*param_1)();
    return;
  }
  fatal_app_exit_with_message_lookup_and_terminate(param_2);
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack
// Handles stack overflow or stack corruption detected during runtime. It attempts to
// log the error and then terminates the application via a fatal exit.

void __cdecl16far runtime_stack_check_fail_handler(void)
{
  int in_AX;
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  int in_stack_00000006;
  
  puVar1 = (undefined1 *)(in_AX + 0x1U & 0xfffe);
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



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram
// Targeted Scan Finding: Resource
// References string literal "tile2.bmp" (1050:1538), likely loading a bitmap resource
// for the main window background.

void win16_parse_command_line_and_init_task
               (char *cmd_line,u16 param_2,u16 param_3,u32 param_4)
{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  int16_t iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined2 uVar13;
  undefined *unaff_SS;
  char *LPSTR_filename;
  
  PTR_DAT_1050_0000_1050_5fd2 = (undefined *)param_3;
  PTR_DAT_1050_0000_1050_5fd4 = cmd_line;
  cmd_line = (char *)s_fem15_wav_1050_263a + 0x3;
  param_3 = (u16)heap_alloc_safe(param_4);
  cmd_line = (char *)param_2;
  PTR_DAT_1050_5fc6_1050_5fc2 = (undefined *)param_3;
  PTR_DAT_1050_0000_1050_5fc4 = (undefined *)param_2;
  iVar4 = GetModuleFilename16(0x104,(char *)CONCAT22(g_TaskDI,param_2),param_3);
  *(undefined1 *)(param_3 + iVar4) = 0x0;
  iVar8 = 0x1;
  PTR_DAT_1050_0000_1050_5fb8 = (undefined *)0x1;
  pcVar10 = (char *)s_New_failed_in_Op__Op_>DialogHand_1050_0073 + 0xe;
LAB_1000_266c:
  do
  {
    do
    {
      pcVar1 = pcVar10;
      pcVar10 = pcVar10 + 0x1;
      cVar2 = *pcVar1;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 != '\r') && (cVar2 != '\0'))
  {
    PTR_DAT_1050_0000_1050_5fb8 = PTR_DAT_1050_0000_1050_5fb8 + 0x1;
    do
    {
      pcVar10 = pcVar10 + -0x1;
LAB_1000_267f:
      pcVar1 = pcVar10;
      pcVar10 = pcVar10 + 0x1;
      cVar2 = *pcVar1;
      if ((cVar2 == ' ') || (cVar2 == '\t')) goto LAB_1000_266c;
      if ((cVar2 == '\r') || (cVar2 == '\0')) break;
      if (cVar2 == '\"')
      {
LAB_1000_26b8:
        do
        {
          while( true )
          {
            while( true )
            {
              pcVar1 = pcVar10;
              pcVar10 = pcVar10 + 0x1;
              cVar2 = *pcVar1;
              if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_1000_26e8;
              if (cVar2 == '\"') goto LAB_1000_267f;
              if (cVar2 == '\\') break;
              iVar8 += 0x1;
            }
            uVar6 = 0x0;
            do
            {
              pcVar12 = pcVar10;
              uVar6 += 0x1;
              pcVar10 = pcVar12 + 0x1;
            } while (*pcVar12 == '\\');
            if (*pcVar12 == '\"') break;
            iVar8 += uVar6;
            pcVar10 = pcVar12;
          }
          iVar8 = iVar8 + (uVar6 >> 0x1) + (uint)((uVar6 & 0x1) != 0x0);
        } while ((uVar6 & 0x1) != 0x0);
        goto LAB_1000_267f;
      }
      if (cVar2 != '\\')
      {
        iVar8 += 0x1;
        goto LAB_1000_267f;
      }
      uVar6 = 0x0;
      do
      {
        uVar6 += 0x1;
        pcVar1 = pcVar10;
        pcVar10 = pcVar10 + 0x1;
      } while (*pcVar1 == '\\');
      if (*pcVar1 == '\"')
      {
        iVar8 = iVar8 + (uVar6 >> 0x1) + (uint)((uVar6 & 0x1) != 0x0);
        if ((uVar6 & 0x1) == 0x0) goto LAB_1000_26b8;
        goto LAB_1000_267f;
      }
      iVar8 += uVar6;
    } while( true );
  }
LAB_1000_26e8:
  cmd_line = (char *)&g_HeapContext;
  iVar8 = -((uint)(PTR_DAT_1050_0000_1050_5fb8 +
                  (int)(PTR_DAT_1050_0000_1050_5fb8 + 0x1) * 0x4 + iVar8 + 0x1) & 0xfffe
           );
  PTR_DAT_1050_0000_1050_5fba = (undefined *)((int)&param_4 + iVar8);
  pcVar12 = (char *)((int)&param_4 +
                    (int)(PTR_DAT_1050_0000_1050_5fb8 + 0x1) * 0x4 + iVar8);
  *(undefined2 *)((int)&cmd_line + iVar8) = unaff_SS;
  uVar13 = *(undefined2 *)((int)&cmd_line + iVar8);
  *(undefined2 *)((int)&param_4 + iVar8) = PTR_DAT_1050_5fc6_1050_5fc2;
  *(undefined2 *)((int)&param_4 + iVar8 + 0x2) = PTR_DAT_1050_0000_1050_5fc4;
  puVar9 = (undefined2 *)(&stack0x0008 + iVar8);
  *(int *)((int)&cmd_line + iVar8) = (int)&param_4 + iVar8;
  *(undefined2 *)((int)&param_3 + iVar8) = (char *)s_tile2_bmp_1050_1538;
  *(char **)(&stack0xfffe + iVar8) = (char *)s_fem37_wav_1050_2716 + 0x9;
  PTR_DAT_1050_0000_1050_5fbc = unaff_SS;
  iVar5 = check_exported_stub_patch_state();
  puVar3 = *(undefined **)&PTR_DAT_1050_0000_1050_5f7e;
  pcVar10 = (char *)s_New_failed_in_Op__Op_>DialogHand_1050_0073 + 0xe;
LAB_1000_272e:
  do
  {
    do
    {
      pcVar1 = pcVar10;
      pcVar10 = pcVar10 + 0x1;
      cVar2 = *pcVar1;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 == '\r') || (cVar2 == '\0'))
  {
LAB_1000_27c1:
    *(undefined2 *)((int)&cmd_line + iVar8) = (char *)s_tile2_bmp_1050_1538;
    *(undefined2 *)((int)&param_3 + iVar8) = (char *)s_fem54_wav_1050_27c0 + 0x5;
    iVar8 = check_exported_stub_patch_state();
    *puVar9 = 0x0;
    puVar9[0x1] = 0x0;
                // WARNING: Could not recover jumptable at 0x100027d2. Too many branches
                // WARNING: Treating indirect jump as call
    (*(code *)ZEXT24(*(undefined **)&PTR_DAT_1050_0000_1050_5fd2))();
    return;
  }
  *puVar9 = pcVar12;
  puVar9[0x1] = unaff_SS;
  puVar9 = puVar9 + 0x2;
  do
  {
    pcVar10 = pcVar10 + -0x1;
LAB_1000_274f:
    pcVar1 = pcVar10;
    pcVar10 = pcVar10 + 0x1;
    cVar2 = *pcVar1;
    if ((cVar2 == ' ') || (cVar2 == '\t'))
    {
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 0x1;
      *pcVar1 = '\0';
      goto LAB_1000_272e;
    }
    if ((cVar2 == '\r') || (cVar2 == '\0'))
    {
LAB_1000_27be:
      *pcVar12 = '\0';
      goto LAB_1000_27c1;
    }
    pcVar11 = pcVar10;
    if (cVar2 == '\"')
    {
LAB_1000_278b:
      while( true )
      {
        pcVar10 = pcVar11 + 0x1;
        cVar2 = *pcVar11;
        if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_1000_27be;
        if (cVar2 == '\"') break;
        if (cVar2 == '\\')
        {
          uVar6 = 0x0;
          do
          {
            pcVar11 = pcVar10;
            uVar6 += 0x1;
            pcVar10 = pcVar11 + 0x1;
          } while (*pcVar11 == '\\');
          if (*pcVar11 == '\"')
          {
            for (uVar7 = uVar6 >> 0x1; uVar7 != 0x0; uVar7 -= 0x1)
            {
              pcVar1 = pcVar12;
              pcVar12 = pcVar12 + 0x1;
              *pcVar1 = '\\';
            }
            if ((uVar6 & 0x1) == 0x0) break;
            pcVar1 = pcVar12;
            pcVar12 = pcVar12 + 0x1;
            *pcVar1 = '\"';
            pcVar11 = pcVar10;
          }
          else
          {
            for (; uVar6 != 0x0; uVar6 -= 0x1)
            {
              pcVar1 = pcVar12;
              pcVar12 = pcVar12 + 0x1;
              *pcVar1 = '\\';
            }
          }
        }
        else
        {
          pcVar1 = pcVar12;
          pcVar12 = pcVar12 + 0x1;
          *pcVar1 = cVar2;
          pcVar11 = pcVar10;
        }
      }
      goto LAB_1000_274f;
    }
    if (cVar2 != '\\')
    {
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 0x1;
      *pcVar1 = cVar2;
      goto LAB_1000_274f;
    }
    uVar6 = 0x0;
    do
    {
      uVar6 += 0x1;
      pcVar1 = pcVar10;
      pcVar10 = pcVar10 + 0x1;
    } while (*pcVar1 == '\\');
    if (*pcVar1 == '\"')
    {
      for (uVar7 = uVar6 >> 0x1; uVar7 != 0x0; uVar7 -= 0x1)
      {
        pcVar1 = pcVar12;
        pcVar12 = pcVar12 + 0x1;
        *pcVar1 = '\\';
      }
      pcVar11 = pcVar10;
      if ((uVar6 & 0x1) == 0x0) goto LAB_1000_278b;
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 0x1;
      *pcVar1 = '\"';
      goto LAB_1000_274f;
    }
    for (; uVar6 != 0x0; uVar6 -= 0x1)
    {
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 0x1;
      *pcVar1 = '\\';
    }
  } while( true );
}



// Retrieves the DOS environment segment, parses all environment variables, and stores
// them in a format accessible by the application. It specifically skips or handles
// `_C_FILE_INFO` variables.

void __cdecl16far win16_init_env_vars_from_dos(void)
{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  bool bVar12;
  void *fVar14;
  char *pcVar13;
  undefined2 uVar14;
  long size;
  undefined2 uVar15;
  
  uVar14 = 0x1050;
  fVar14 = GetDosEnvironment16();
  fVar14._2_2_ = (undefined *)((ulong)fVar14 >> 0x10);
  if ((void *)fVar14 != NULL)
  {
    fVar14._2_2_ = NULL;
  }
  size = CONCAT22(0x1050,uVar14);
  iVar7 = 0x0;
  pcVar10 = NULL;
  iVar5 = -0x1;
  if (fVar14._2_2_ != NULL)
  {
    cVar3 = *NULL;
    while (cVar3 != '\0')
    {
      do
      {
        if (iVar5 == 0x0) break;
        iVar5 += -0x1;
        pcVar13 = pcVar10;
        pcVar10 = pcVar10 + 0x1;
      } while (*pcVar13 != '\0');
      iVar7 += 0x1;
      pcVar13 = pcVar10;
      pcVar10 = pcVar10 + 0x1;
      cVar3 = *pcVar13;
    }
  }
  puVar6 = fVar14._2_2_;
  pcVar10 = heap_alloc_safe(size);
  uVar15 = (undefined2)((ulong)size >> 0x10);
  pcVar13 = (char *)CONCAT22(puVar6,pcVar10);
  puVar4 = heap_alloc_safe((long)pcVar13);
  piVar8 = NULL;
  pcVar10 = (char *)pcVar13;
  uVar14 = (undefined2)((ulong)pcVar13 >> 0x10);
  p_EnvOffset_Base = (undefined *)puVar4;
  p_EnvSegment_Base = puVar6;
  do
  {
    if (iVar7 == 0x0)
    {
      *puVar4 = 0x0;
      puVar4[0x1] = 0x0;
      return;
    }
    bVar12 = *piVar8 == *(int *)s__C_FILE_INFO__1050_5f5c;
    if (bVar12)
    {
      piVar11 = (int *)s__C_FILE_INFO__1050_5f5c;
      iVar5 = 0x6;
      piVar9 = piVar8;
      do
      {
        if (iVar5 == 0x0) break;
        iVar5 += -0x1;
        piVar2 = piVar11;
        piVar11 = piVar11 + 0x1;
        piVar1 = piVar9;
        piVar9 = piVar9 + 0x1;
        bVar12 = *piVar1 == *piVar2;
      } while (bVar12);
      if (!bVar12) goto LAB_1000_2867;
    }
    else
    {
LAB_1000_2867:
      *puVar4 = pcVar10;
      puVar4[0x1] = uVar14;
      puVar4 = puVar4 + 0x2;
    }
    do
    {
      piVar1 = piVar8;
      piVar8 = (int *)((int)piVar8 + 0x1);
      iVar5 = *piVar1;
      pcVar13 = pcVar10;
      pcVar10 = pcVar10 + 0x1;
      *pcVar13 = (char)iVar5;
    } while ((char)iVar5 != '\0');
    iVar7 += -0x1;
  } while( true );
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
  ppuVar6 = (u8 **)((char *)s_<<NMSG>>_1050_63f6 + 0x8);
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
// References string table at far pointer 1050:63FE for fatal error messages.

void fatal_app_exit_with_message_lookup_and_terminate(int error_code)
{
  int *piVar1;
  char *pcVar2;
  int in_AX;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int in_stack_00000004;
  
  iVar4 = in_AX;
  display_invalid_turn_error_stub();
  log_runtime_error_string(iVar4);
  pcVar3 = lookup_runtime_error_string_ptr(in_AX);
  if (pcVar3 != NULL)
  {
    iVar4 = 0x9;
    if (*pcVar3 == 'M')
    {
      iVar4 = 0xf;
    }
    pcVar3 = pcVar3 + iVar4;
    iVar4 = 0x22;
    pcVar6 = pcVar3;
    do
    {
      if (iVar4 == 0x0) break;
      iVar4 += -0x1;
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 0x1;
    } while (*pcVar2 != '\r');
    pcVar6[-0x1] = '\0';
  }
  FatalAppExit16((char *)CONCAT22(0x1050,pcVar3),0x0);
  FatalExit16(0xff);
  piVar5 = (int *)((char *)s_<<NMSG>>_1050_63f6 + 0x8);
  do
  {
    piVar1 = piVar5;
    piVar5 = piVar5 + 0x1;
    if ((*piVar1 == in_stack_00000004) || (*piVar1 == -0x1))
    {
      return;
    }
    iVar4 = -0x1;
    do
    {
      if (iVar4 == 0x0) break;
      iVar4 += -0x1;
      piVar1 = piVar5;
      piVar5 = (int *)((int)piVar5 + 0x1);
    } while ((char)*piVar1 != '\0');
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
  
  piVar3 = (int *)((char *)s_<<NMSG>>_1050_63f6 + 0x8);
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
  int unaff_DI;
  undefined2 unaff_ES;
  
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
      fatal_exit_shorthand(unaff_DI);
    }
  }
  return;
}



// Targeted Scan Finding: Far Pointer
// Updates global control pointer PTR_DAT_1050_1000_1050_6066 to 1050:1000.

void * __cdecl16near heap_alloc_safe(long size)
{
  undefined *puVar1;
  undefined2 in_AX;
  void *pvVar2;
  void *in_CX;
  int in_DX;
  int in_BX;
  long size_00;
  
  puVar1 = PTR_DAT_1050_1000_1050_6066;
  LOCK();
  PTR_DAT_1050_1000_1050_6066 = (undefined *)&DAT_1050_1000;
  UNLOCK();
  size_00 = CONCAT22(puVar1,in_AX);
  pvVar2 = heap_alloc_bytes(size_00);
  PTR_DAT_1050_1000_1050_6066 = (undefined *)((ulong)size_00 >> 0x10);
  if (in_DX != 0x0 || pvVar2 != NULL)
  {
    return pvVar2;
  }
  fatal_app_exit_with_message_lookup_and_terminate(in_BX);
  return in_CX;
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
  param_2._0_1_ = 0x0;
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
  uint in_AX;
  
  PTR_DAT_1050_0000_1050_5f88._0_1_ = (byte)in_AX;
  cVar1 = (char)(in_AX >> 0x8);
  if (cVar1 != '\0') goto LAB_1000_29d2;
  if ((byte)PTR_DAT_1050_0000_1050_5f88 < 0x22)
  {
    if ((byte)PTR_DAT_1050_0000_1050_5f88 < 0x20)
    {
      if (0x13 < (byte)PTR_DAT_1050_0000_1050_5f88) goto LAB_1000_29cc;
    }
    else
    {
      in_AX = 0x5;
    }
  }
  else
  {
LAB_1000_29cc:
    in_AX = 0x13;
  }
  cVar1 = *(char *)(ulong)((in_AX & 0xff) + 0x5fd6);
LAB_1000_29d2:
  PTR_DAT_1050_0000_1050_5f78 = (undefined *)(int)cVar1;
  return;
}



// Checks if the `___EXPORTEDSTUB` has been patched or initialized with a `MOV AX`
// instruction (opcode 0xB8). Used for determining the initialization state of certain
// exported library stubs.

int __cdecl16far check_exported_stub_patch_state(void)
{
  int unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8)
  {
    return unaff_SS;
  }
  return iRam100029ed;
}



int __cdecl16far ___EXPORTEDSTUB(void)
{
  return 0x0;
}
