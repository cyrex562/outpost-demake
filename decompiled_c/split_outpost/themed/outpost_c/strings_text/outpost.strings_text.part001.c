/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 1/19
 * Original lines (combined): 1-5546
 * Boundaries: top-level declarations/definitions only
 */

#include "outpost.h"


dword g_HeapContext;
pointer p_CurrentHeapContext;
TerminatedCString s_554.bmp_1050_1f77;
TerminatedCString s_199.flc_1050_1c36;
TerminatedCString s_242.flc_1050_1c76;
TerminatedCString s_1034a.bmp_1050_1de7;
pointer g_EnvString_Offset;
pointer g_EnvString_Segment;
string s_You_may_not_run_a_turn._The_game_1050_00df;
TerminatedCString s_fem15.wav_1050_263a;
TerminatedCString s_fem37.wav_1050_2716;
TerminatedCString s_fem54.wav_1050_27c0;
TerminatedCString s_<<NMSG>>_1050_63f6;
TerminatedCString s_\_1050_5fea;
TerminatedCString s_\_1050_5fec;
TerminatedCString s_180.flc_1050_1bfe;
TerminatedCString s_A_1050_4202;
string s_ABNORMAL_PROGRAM_TERMINATION_1050_6544;
dword p_StrtokNextToken;
TerminatedCString s_572.bmp_1050_2007;
TerminatedCString s_0_1050_389e;
TerminatedCString s_Op_1050_00d4;
string s_Outpost_1050_00d7;
TerminatedCString s_1_1050_389a;
TerminatedCString s_0.76_1050_3aa0;
TerminatedCString s_18.2_1050_3aa5;
TerminatedCString s_0.020_1050_3ab0;
TerminatedCString s_0.000_1050_3b46;
string s_%s_%d_1050_573a;
TerminatedCString s_%s_%s!_1050_5bc0;
TerminatedCString s_MONO2_1050_02f4;
TerminatedCString s__1050_02fa;
string s_DanBrotherton_1050_0302;
string s_SOLChildPar_1050_0358;
string s_MicroSpinControl_1050_0370;
undefined PTR_p_CurrentHeapContext_1050_0368;
pointer p_StringPropertyTable;
TerminatedCString s_%s_#%02ld_1050_0cea;
TerminatedCString s_%s_#%02ld_1050_0cf4;
TerminatedCString s_648.bmp_1050_1919;
TerminatedCString s_35.flc_1050_1b2a;
TerminatedCString s_330.flc_1050_1cfe;
TerminatedCString s_573.bmp_1050_200f;
TerminatedCString s_add39.wav_1050_2cc2;
TerminatedCString s_6.0_1050_3b3d;
TerminatedCString s_40.33_1050_3b5c;
TerminatedCString s_on_1050_13c4;
TerminatedCString s_off_1050_13c8;
string s_general_1050_13b0;
TerminatedCString s_rez_1050_13c0;
TerminatedCString s_anims_1050_13cc;
string s_music_1050_13d2;
string s_sound_1050_13d8;
string s_movies_1050_13e8;
string s_turns_1050_1466;
string s_turnsDlgStatus_1050_146c;
string s_aiName_1050_1486;
string s_playerName_1050_148e;
TerminatedCString s_559.bmp_1050_1f9f;
TerminatedCString s_560.bmp_1050_1fa7;
TerminatedCString s_.wav_1050_14ba;
TerminatedCString s_.mid_1050_14c0;
TerminatedCString s_male_1050_14c6;
TerminatedCString s_%lu_1050_381f;
TerminatedCString s__1050_3941;
TerminatedCString s_582.bmp_1050_1871;
TerminatedCString s_589.bmp_1050_18a9;
TerminatedCString s_561.bmp_1050_1faf;
TerminatedCString s_568.bmp_1050_1fe7;
TerminatedCString s_556a.bmp_1050_21e5;
TerminatedCString s_fem130.wav_1050_2ad6;
string s_%ld_%s_1050_4150;
string s_%ld_%s_1050_4157;
string s_%ld_%s_1050_415e;
string s_%ld_%s_1050_4165;
TerminatedCString s_%d_1050_4242;
TerminatedCString s_%d_1050_4245;
string s_VrMode_1050_4260;
TerminatedCString s_512.bmp_1050_1e77;
TerminatedCString s_218.bmp_1050_2516;
TerminatedCString s_fem36.wav_1050_270c;
TerminatedCString s_fem51.wav_1050_27a2;
TerminatedCString s_fem74.wav_1050_2888;
string s_VrMode_1050_4286;
string s_VrMode_1050_42ca;
string s_OpAccel_1050_43e8;
TerminatedCString s_575.bmp_1050_201f;
TerminatedCString s_VrMode2_1050_4404;
TerminatedCString s_576.bmp_1050_2027;
string s_VrMode_1050_4422;
TerminatedCString s_dib_1050_4234;
string s_bidLRoadConst_1050_4e7a;
string s_bidRRoadConst_1050_4e88;
string s_bidXRoadConst_1050_4e96;
TerminatedCString s_480.bmp_1050_1721;
TerminatedCString s_42.flc_1050_1b54;
TerminatedCString s_526.bmp_1050_1ee7;
TerminatedCString s_fem48.wav_1050_2784;
TerminatedCString s_fem123.wav_1050_2a89;
TerminatedCString s_add5.wav_1050_2b73;
TerminatedCString s_%_1050_446a;
string s_thisLo_1050_5bec;
string s_static_1050_5d8b;
TerminatedCString str_1050_5e6f;
TerminatedCString s_SCPop_1050_50f0;
TerminatedCString s_462.bmp_1050_1620;
TerminatedCString s_638.bmp_1050_1a11;
TerminatedCString s_288.flc_1050_1cb6;
TerminatedCString s_579.bmp_1050_203f;
TerminatedCString s_fem92.wav_1050_293c;
TerminatedCString s_G1_1050_3af2;
string s_procLo_1050_5bd0;
string s_simres.out_1050_5758;
TerminatedCString s_198.flc_1050_1c2e;
TerminatedCString s_fem110.wav_1050_29fa;
TerminatedCString s_%s_1050_5a6c;
string s_procHi_1050_5bd7;
string s_thisLo_1050_5bde;
string s_thisHi_1050_5be5;
string s_thisHi_1050_5bf3;
TerminatedCString s_hfont_1050_5bfa;
TerminatedCString s_hfont_1050_5c00;
string s_overflow_on_node_%d_1050_11ca;
TerminatedCString s_202.flc_1050_1c46;
TerminatedCString s_%s%s_1050_5cda;
TerminatedCString s_%s%s_1050_5cdf;
TerminatedCString s_alarm-m_1050_2377;
string s_Rebel_1050_4ffc;
TerminatedCString s_hfont_1050_5ced;
TerminatedCString s_fem94.wav_1050_2950;
TerminatedCString s_add74.wav_1050_2e20;
string s_Null_Ptr_1050_38f3;
TerminatedCString s_%ld_1050_5d3c;
string s_thisLo_1050_5db1;
string s_thisHi_1050_5db8;
string s_procLo_1050_5dbf;
string s_procHi_1050_5dc6;
TerminatedCString s_hfont_1050_5de9;
TerminatedCString s_hfont_1050_5dfa;
TerminatedCString s_hfont_1050_5e09;
TerminatedCString s_hfont_1050_5e0f;
string s_thisLo_1050_5e1c;
string s_thisHi_1050_5e23;
string s_procLo_1050_5e2a;
string s_procHi_1050_5e31;
TerminatedCString s_IsDlg_1050_5e38;
string s_thisLo_1050_5e68;
string s_procLo_1050_5e76;
string s_procHi_1050_5e7d;
string s_thisLo_1050_5e84;
string s_thisHi_1050_5e8b;
TerminatedCString s_IsDlg_1050_5e92;
undefined *PTR_p_CurrentHeapContext_1050_5ec6;
TerminatedCString s_%ld_1050_5ef4;
TerminatedCString string_1050_5f12;



// Targeted Scan Finding: Resource
// Returns a pointer to an error message string from a predefined table starting at
// 1000:1C7A.

char * __cdecl16near heap_get_error_message(int error_code)
{
  int in_AX;
  
  if (in_AX == 0x2)
  {
    return (char *)s_199_flc_1050_1c36 + 0x6;
  }
  return (char *)s_242_flc_1050_1c76 + 0x4 + in_AX * 0x17;
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
// References far pointer 1050:1050 during formatted string dispatch.

int __cdecl16far
handle_open_resource_locked
          (void *param_1,undefined2 param_2,char *param_3,undefined2 param_4)
{
  int status;
  undefined1 *puVar1;
  
  status = handle_init_standard_stream_internal(param_1);
  puVar1 = &stack0x000c;
  format_string_dispatcher_internal
            ((u16)param_1,0x1050,(char *)CONCAT22(param_4,param_3));
  handle_finalize_access(status,param_1);
  return (int)puVar1;
}



// WARNING: Variable defined which should be unmapped: local_6
// Targeted Scan Finding: Far Pointer / Vtable
// Uses context pointer 1050:1050.
// Performs a complex indirect jump/call through a table at 1000:30A4, indexed by
// formatted character mapping.

void __cdecl16far
format_string_dispatcher_internal(u16 param_1,u16 param_2,char *param_3)
{
  char cVar1;
  byte bVar2;
  int unaff_BP;
  int iVar3;
  u16 local_c;
  u8 local_9;
  u8 local_6;
  undefined2 uVar4;
  
  iVar3 = unaff_BP + 0x1;
  uVar4 = 0x1050;
  runtime_stack_check_fail_handler();
  cVar1 = *param_3;
  if ((cVar1 != '\0') && (true))
  {
    if ((byte)(cVar1 - 0x20U) < 0x59)
    {
      bVar2 = *(byte *)(ulong)((byte)(cVar1 - 0x20U) + 0x5ffe) & 0xf;
    }
    else
    {
      bVar2 = 0x0;
    }
                // WARNING: Could not emulate address calculation at 0x10003101
                // WARNING: Treating indirect jump as call
    (*(code *)*(undefined2 *)
               ((int)(void **)&PTR_s_add16_wav_1050_2bdc_1050_30a4 +
               (char)(*(byte *)(ulong)((byte)(bVar2 * '\b') + 0x5ffe) >> 0x4) * 0x2))
              (cVar1,uVar4,iVar3);
    return;
  }
  far_noop_stub();
  return;
}



void __cdecl16near fmt_itoa_internal(u16 param_1,u16 param_2,u16 param_3)
{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  u16 in_CH;
  u16 in_DH;
  int unaff_BP;
  int unaff_SI;
  byte *unaff_DI;
  u16 unaff_ES;
  u16 unaff_SS;
  
  while (((0x0 < unaff_SI || (param_1 != 0x0)) || (in_DH != 0x0)))
  {
    uVar2 = (ulong)in_DH;
    in_DH /= in_CH;
    uVar2 = uVar2 % (ulong)in_CH << 0x10 | (ulong)param_1;
    param_1 = (u16)(uVar2 / in_CH);
    bVar3 = (char)(uVar2 % (ulong)in_CH) + 0x30;
    if (0x39 < bVar3)
    {
      bVar3 += *(char *)(unaff_BP + -0x3);
    }
    pbVar1 = unaff_DI;
    unaff_DI = unaff_DI + -0x1;
    *pbVar1 = bVar3;
    unaff_SI += -0x1;
  }
  return;
}
