/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 2/19
 * Original lines (combined): 5583-7169
 * Boundaries: top-level declarations/definitions only
 */




// Targeted Scan Finding: Far Pointer
// Updates low-level file handle metadata in data segment 1050 starting at offset
// 0x5F90.

void dos_close_file_handle_internal(u16 param_1,uint param_2)
{
  code *pcVar1;
  int unaff_BP;
  undefined1 uVar2;
  int in_stack_00000000;
  dword *CONTEXT_ptr_context;
  
  CONTEXT_ptr_context = (dword *)CONCAT22(unaff_BP + 0x1,(dword *)&g_HeapContext);
  if (param_2 < g_MaxFileHandles)
  {
    uVar2 = 0x0;
    if (true)
    {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    else
    {
      Dos3Call(CONTEXT_ptr_context);
    }
    if (!(bool)uVar2)
    {
      ((byte *)&g_LowLevelHandleTable)[param_2] = 0x0;
    }
  }
  else
  {
    uVar2 = true;
  }
  check_error_flag_and_set_internal_err_u16
            ((u16)(dword *)CONTEXT_ptr_context,in_stack_00000000,(bool)uVar2);
  return;
}



// Targeted Scan Finding: Far Pointer
// References global control pointers in segment 1050 (offsets 61ec, 6064).
// Updates file handle metadata in segment 1050 at offset 0x5F90.

void dos_seek_file_handle_internal
               (u16 param_1,uint param_2,uint param_3,uint param_4,uint param_5)
{
  code *pcVar1;
  ulong uVar2;
  void *pvVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  void *CONTEXT_ptr_context;
  undefined4 uVar9;
  void *in_stack_0000fff8;
  
  if (((param_2 < g_MaxFileHandles) || (p_SystemIO_Active == NULL)) || (0x2 < param_2))
  {
    CONTEXT_ptr_context = in_stack_0000fff8;
    if ((PTR_DAT_1050_0000_1050_6064 == NULL) || ((param_4 & 0x8000) == 0x0))
    goto LAB_1000_36e3;
    if (param_5 != 0x0)
    {
      uVar5 = 0x0;
      uVar6 = 0x0;
      pvVar3 = (void *)0x4201;
      uVar7 = 0x0;
      if (true)
      {
        pcVar1 = (code *)swi(0x21);
        CONTEXT_ptr_context = (void *)(*pcVar1)();
      }
      else
      {
        Dos3Call(in_stack_0000fff8);
        CONTEXT_ptr_context = (void *)CONCAT22(uVar6,pvVar3);
      }
      uVar2 = (ulong)CONTEXT_ptr_context >> 0x10;
      uVar4 = (uint)CONTEXT_ptr_context;
      uVar8 = true;
      if ((bool)uVar7) goto LAB_1000_3707;
      if ((param_5 & 0x2) == 0x0)
      {
        CONTEXT_ptr_context = in_stack_0000fff8;
        if (-0x1 < (int)((int)uVar2 + param_4 + (uint)CARRY2(uVar4,param_3)))
        {
LAB_1000_36e3:
          uVar8 = 0x0;
          if (true)
          {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
            in_stack_0000fff8 = CONTEXT_ptr_context;
          }
          else
          {
            Dos3Call(CONTEXT_ptr_context);
            in_stack_0000fff8 = CONTEXT_ptr_context;
          }
          if (!(bool)uVar8)
          {
            uVar8 = false;
            ((byte *)&g_LowLevelHandleTable)[param_2] =
                 ((byte *)&g_LowLevelHandleTable)[param_2] & 0xfd;
          }
          goto LAB_1000_3707;
        }
      }
      else
      {
        uVar6 = 0x4202;
        if (true)
        {
          pcVar1 = (code *)swi(0x21);
          uVar9 = (*pcVar1)();
        }
        else
        {
          Dos3Call(CONTEXT_ptr_context);
          uVar9 = CONCAT22(uVar5,uVar6);
        }
        if (-0x1 < (int)((int)((ulong)uVar9 >> 0x10) + param_4 +
                        (uint)CARRY2((uint)uVar9,param_3))) goto LAB_1000_36e3;
        if (true)
        {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          in_stack_0000fff8 = CONTEXT_ptr_context;
        }
        else
        {
          Dos3Call(CONTEXT_ptr_context);
          in_stack_0000fff8 = CONTEXT_ptr_context;
        }
      }
    }
  }
  uVar8 = true;
LAB_1000_3707:
  check_error_flag_and_set_internal_err_void((u16)in_stack_0000fff8,(bool)uVar8);
  return;
}



// WARNING: Unable to track spacebase fully for stack
// Targeted Scan Finding: Far Pointer
// References several global control pointers in segment 1050:
// - PTR_DAT_1050_61ec
// - PTR_s_ed_in_Op_Op_1050_0028_1050_5f8e
// - PTR_DAT_1050_0002
// Handles DOS buffered write logic with metadata updates at 1050:5F90.

undefined *
handle_buffered_write_internal_logic
          (u16 param_1,undefined *param_2,char *param_3,int param_4)
{
  char *pcVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined *puVar4;
  uint uVar5;
  u16 uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined2 unaff_SS;
  undefined1 uVar11;
  byte bVar12;
  char cVar13;
  char in_AF;
  bool bVar14;
  char cVar15;
  char cVar16;
  char *pcVar17;
  undefined *puVar18;
  undefined4 in_stack_0000fff2;
  undefined *CONTEXT_ptr_context;
  undefined1 *puVar19;
  char *pcStack_6;
  
  CONTEXT_ptr_context =
       (undefined *)CONCAT22((int)((ulong)in_stack_0000fff2 >> 0x10),g_MaxFileHandles);
  pbVar3 = (byte *)g_MaxFileHandles;
  if ((p_SystemIO_Active != NULL) &&
     (pbVar3 = PTR_s_ed_in_Op_Op_1050_0028_1050_5f8e,
     param_2 < (undefined *)((int)(undefined **)&p_CurrentHeapContext + 0x1U)))
  {
    param_2 = (undefined *)g_MaxFileHandles;
  }
  if (pbVar3 <= param_2)
  {
    pbVar3 = (byte *)0x900;
LAB_1000_3a26:
    check_error_flag_and_set_internal_err_void((u16)CONTEXT_ptr_context,true);
    return pbVar3;
  }
  puVar4 = param_2;
  if ((param_2[0x5f90] & 0x20) != 0x0)
  {
    pbVar3 = (byte *)s_A_1050_4202;
    uVar11 = 0x0;
    if (true)
    {
      pcVar2 = (code *)swi(0x21);
      pbVar3 = (byte *)(*pcVar2)();
    }
    else
    {
      Dos3Call(CONTEXT_ptr_context);
    }
    if ((bool)uVar11) goto LAB_1000_3a26;
  }
  if ((puVar4[0x5f90] & 0x80) == 0x0)
  {
LAB_1000_3acf:
    handle_low_level_write_dispatch_internal();
    return pbVar3;
  }
  pcVar10 = (char *)param_3;
  puVar4 = NULL;
  bVar14 = true;
  pcStack_6 = NULL;
  puVar19 = &stack0xffee;
  puVar18 = (undefined *)CONTEXT_ptr_context;
  if (param_4 != 0x0)
  {
    pbVar3 = (byte *)&g_AllocFlags;
    iVar8 = param_4;
    pcVar9 = pcVar10;
    do
    {
      if (iVar8 == 0x0) break;
      iVar8 += -0x1;
      pcVar17 = pcVar9;
      pcVar9 = pcVar9 + 0x1;
      bVar14 = *pcVar17 == '\n';
    } while (!bVar14);
    if (!bVar14) goto LAB_1000_3acf;
    pcVar17 = param_3;
    uVar5 = get_stack_space_available_bytes();
    if (uVar5 < 0xa9)
    {
      pcVar10 = (char *)0xfffc;
      runtime_stack_check_fail_handler();
      pcVar9 = pcVar9 + -(int)(char *)pcVar17;
      if (pcVar9 == NULL)
      {
        return pcVar10;
      }
      pcVar17 = (char *)CONCAT22(0x1050,pcVar9);
      bVar12 = param_2 < puVar18;
      uVar5 = (int)param_2 - (int)puVar18;
      cVar16 = (int)uVar5 < 0x0;
      cVar15 = uVar5 == 0x0;
      cVar13 = (POPCOUNT(uVar5 & 0xff) & 0x1U) == 0x0;
      if ((bool)bVar12)
      {
        pcVar7 = (char *)CONCAT11(0x40,(char)pcVar10);
        bVar12 = 0x0;
        cVar16 = '\0';
        cVar15 = '\x01';
        cVar13 = '\x01';
        if (true)
        {
          pcVar2 = (code *)swi(0x21);
          pcVar7 = (char *)(*pcVar2)();
          pcVar9 = (char *)pcVar17;
        }
        else
        {
          Dos3Call(pcVar17);
          pcVar9 = (char *)pcVar17;
        }
      }
      else
      {
        pcVar7 = pcVar10;
        fatal_exit_shorthand((int)pcVar9);
        pcVar9 = (char *)pcVar17;
      }
      if (!(bool)bVar12)
      {
        bVar12 = pcVar9 < pcVar7;
        uVar5 = (int)pcVar9 - (int)pcVar7;
        cVar16 = (int)uVar5 < 0x0;
        cVar15 = uVar5 == 0x0;
        cVar13 = (POPCOUNT(uVar5 & 0xff) & 0x1U) == 0x0;
        pcStack_6 = pcVar7;
        if ((bool)bVar12 || (bool)cVar15)
        {
          return pcVar10;
        }
      }
      pcVar10 = (char *)CONCAT11(cVar16 << 0x7 | cVar15 << 0x6 | in_AF << 0x4 |
                                 cVar13 << 0x2 | 0x2U | bVar12,(char)pcVar7);
      if (pcStack_6 == NULL)
      {
        bVar14 = (bVar12 & 0x1) != 0x0;
        if (bVar14)
        {
          pcVar10 = (char *)CONCAT11(0x9,(char)pcVar7);
        }
        else if (((param_2[0x5f90] & 0x40) == 0x0) || (*param_3 != '\x1a'))
        {
          bVar14 = true;
          pcVar10 = (char *)s_180_flc_1050_1bfe + 0x2;
        }
        else
        {
          bVar14 = false;
        }
        check_error_flag_and_set_internal_err_void(*(u16 *)(puVar19 + 0x4),bVar14);
        return pcVar10;
      }
      handle_update_error_state_wrapper_void();
      return pcVar10;
    }
    pcVar7 = &stack0xffec;
    pcVar9 = &stack0xffee;
    do
    {
      pcVar1 = pcVar10;
      pcVar10 = pcVar10 + 0x1;
      cVar13 = *pcVar1;
      if (cVar13 == '\n')
      {
        cVar13 = '\r';
        if (pcVar9 == pcVar7)
        {
          uVar6 = handle_buffered_write_chunk_internal();
          cVar13 = (char)uVar6;
        }
        pcVar1 = pcVar9;
        pcVar9 = pcVar9 + 0x1;
        *pcVar1 = cVar13;
        cVar13 = '\n';
      }
      if (pcVar9 == pcVar7)
      {
        uVar6 = handle_buffered_write_chunk_internal();
        cVar13 = (char)uVar6;
      }
      pcVar1 = pcVar9;
      pcVar9 = pcVar9 + 0x1;
      *pcVar1 = cVar13;
      param_4 += -0x1;
    } while (param_4 != 0x0);
    puVar4 = (undefined *)handle_buffered_write_chunk_internal();
  }
  handle_update_error_state_wrapper_void();
  return puVar4;
}



// WARNING: Unable to track spacebase fully for stack
// Targeted Scan Finding: Far Pointer
// Updates file handle metadata in data segment 1050 at offset 0x5F90.

u16 __cdecl16near handle_buffered_write_chunk_internal(void)
{
  code *pcVar1;
  uint in_AX;
  uint uVar2;
  u16 uVar3;
  void *error_code;
  int in_DX;
  uint uVar4;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  byte bVar5;
  bool bVar6;
  char cVar7;
  char in_AF;
  char cVar8;
  char cVar9;
  uint uVar10;
  void *CONTEXT_ptr_context;
  
  error_code = (void *)(unaff_DI - in_DX);
  if (error_code == NULL)
  {
    return in_AX;
  }
  CONTEXT_ptr_context = (void *)CONCAT22(0x1050,error_code);
  uVar4 = *(uint *)(unaff_BP + 0x6);
  bVar5 = uVar4 < *(uint *)(unaff_BP + -0xc);
  uVar2 = uVar4 - *(uint *)(unaff_BP + -0xc);
  cVar9 = (int)uVar2 < 0x0;
  cVar8 = uVar2 == 0x0;
  cVar7 = (POPCOUNT(uVar2 & 0xff) & 0x1U) == 0x0;
  if ((bool)bVar5)
  {
    uVar2 = CONCAT11(0x40,(char)in_AX);
    bVar5 = 0x0;
    cVar9 = '\0';
    cVar8 = '\x01';
    cVar7 = '\x01';
    if (true)
    {
      pcVar1 = (code *)swi(0x21);
      uVar2 = (*pcVar1)();
      uVar10 = (uint)CONTEXT_ptr_context;
    }
    else
    {
      Dos3Call(CONTEXT_ptr_context);
      uVar10 = (uint)CONTEXT_ptr_context;
    }
  }
  else
  {
    uVar2 = in_AX;
    fatal_exit_shorthand((int)error_code);
    uVar10 = (uint)CONTEXT_ptr_context;
  }
  if (!(bool)bVar5)
  {
    *(int *)(unaff_BP + -0x4) = *(int *)(unaff_BP + -0x4) + uVar2;
    bVar5 = uVar10 < uVar2;
    uVar10 -= uVar2;
    cVar9 = (int)uVar10 < 0x0;
    cVar8 = uVar10 == 0x0;
    cVar7 = (POPCOUNT(uVar10 & 0xff) & 0x1U) == 0x0;
    if ((bool)bVar5 || (bool)cVar8)
    {
      return in_AX;
    }
  }
  uVar3 = CONCAT11(cVar9 << 0x7 | cVar8 << 0x6 | in_AF << 0x4 | cVar7 << 0x2 | 0x2U |
                   bVar5,(char)uVar2);
  if (*(int *)(unaff_BP + -0x4) == 0x0)
  {
    bVar6 = (bVar5 & 0x1) != 0x0;
    if (bVar6)
    {
      uVar3 = CONCAT11(0x9,(char)uVar2);
    }
    else if (((((byte *)&g_LowLevelHandleTable)[uVar4] & 0x40) == 0x0) ||
            (*(char *)*(undefined2 *)(unaff_BP + 0x8) != '\x1a'))
    {
      bVar6 = true;
      uVar3 = 0x1c00;
    }
    else
    {
      bVar6 = false;
    }
    check_error_flag_and_set_internal_err_void
              (*(u16 *)(*(int *)(unaff_BP + -0xa) + 0x4),bVar6);
    return uVar3;
  }
  handle_update_error_state_wrapper_void();
  return uVar3;
}



char * __cdecl16far strcat_append(char *param_1,char *param_2)
{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  bool bVar11;
  
                // String concatenation - finds end of param_1, appends param_2. Returns
                // param_1.
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  bVar11 = true;
  iVar3 = -0x1;
  pcVar6 = (char *)param_1;
  do
  {
    if (iVar3 == 0x0) break;
    iVar3 += -0x1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 0x1;
    bVar11 = *pcVar1 == '\0';
  } while (!bVar11);
  pcVar8 = pcVar6 + -0x1;
  uVar10 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar7 = (char *)param_2;
  uVar4 = 0xffff;
  do
  {
    if (uVar4 == 0x0) break;
    uVar4 -= 0x1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 0x1;
    bVar11 = *pcVar1 == '\0';
  } while (!bVar11);
  uVar4 = ~uVar4;
  if (!bVar11)
  {
    pcVar7 = pcVar7 + -uVar4;
    uVar4 += 0x1;
  }
  pcVar7 = pcVar7 + -uVar4;
  if (uVar4 == 0x0)
  {
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 0x2;
    *(undefined2 *)pcVar8 = *(undefined2 *)pcVar1;
    uVar4 = 0xfffe;
    pcVar8 = pcVar6 + 0x1;
  }
  else if (((uint)pcVar7 & 0x1) != 0x0)
  {
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 0x1;
    *pcVar8 = *pcVar1;
    uVar4 -= 0x1;
    pcVar8 = pcVar6;
  }
  for (uVar5 = uVar4 >> 0x1; uVar5 != 0x0; uVar5 -= 0x1)
  {
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 0x2;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 0x2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar4 = (uint)((uVar4 & 0x1) != 0x0); uVar4 != 0x0; uVar4 -= 0x1)
  {
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 0x1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 0x1;
    *pcVar2 = *pcVar1;
  }
  return (char *)param_1;
}



void __cdecl16far strcpy_optimized(char *param_1,char *param_2)
{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  bool bVar9;
  
                // Optimized strcpy - calculates length, then copies using word
                // operations for efficiency.
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar5 = (char *)param_2;
  bVar9 = true;
  uVar3 = 0xffff;
  pcVar6 = pcVar5;
  do
  {
    if (uVar3 == 0x0) break;
    uVar3 -= 0x1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 0x1;
    bVar9 = *pcVar1 == '\0';
  } while (!bVar9);
  uVar3 = ~uVar3;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar6 = (char *)param_1;
  if (bVar9)
  {
    if (((ulong)param_1 & 0x1) != 0x0)
    {
      pcVar6 = pcVar6 + 0x1;
      pcVar5 = pcVar5 + 0x1;
      *param_1 = *param_2;
      uVar3 -= 0x1;
    }
  }
  else
  {
    pcVar6 = pcVar6 + 0x2;
    pcVar5 = pcVar5 + 0x2;
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    uVar3 -= 0x1;
  }
  for (uVar4 = uVar3 >> 0x1; uVar4 != 0x0; uVar4 -= 0x1)
  {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 0x2;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 0x2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 0x1) != 0x0); uVar3 != 0x0; uVar3 -= 0x1)
  {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 0x1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 0x1;
    *pcVar2 = *pcVar1;
  }
  return;
}



int __cdecl16far strcmp_case_sensitive(byte *param_1,char *param_2)
{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined2 uVar10;
  bool bVar11;
  bool bVar12;
  
                // Case-sensitive string comparison. Returns 0 if equal, non-zero if
                // different.
  pbVar7 = (byte *)param_1;
  uVar10 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar8 = (char *)param_2;
  iVar4 = 0x0;
  uVar5 = 0xffff;
  do
  {
    if (uVar5 == 0x0) break;
    uVar5 -= 0x1;
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 0x1;
  } while (*pcVar2 != '\0');
  pcVar6 = (char *)~uVar5;
  bVar11 = pcVar8 < pcVar6;
  pbVar9 = (byte *)(pcVar8 + -(int)pcVar6);
  bVar12 = pbVar9 == NULL;
  do
  {
    if (pcVar6 == NULL) break;
    pcVar6 = pcVar6 + -0x1;
    pbVar3 = pbVar9;
    pbVar9 = pbVar9 + 0x1;
    pbVar1 = pbVar7;
    pbVar7 = pbVar7 + 0x1;
    bVar11 = *pbVar1 < *pbVar3;
    bVar12 = *pbVar1 == *pbVar3;
  } while (bVar12);
  if (!bVar12)
  {
    iVar4 = (0x1 - (uint)bVar11) - (uint)(bVar11 != 0x0);
  }
  return iVar4;
}



uint __cdecl16far strlen_get_length(char *param_1)
{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  
                // String length - returns number of characters before null terminator.
  pcVar3 = (char *)param_1;
  bVar4 = true;
  uVar2 = 0xffff;
  do
  {
    if (uVar2 == 0x0) break;
    uVar2 -= 0x1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 0x1;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  uVar2 = ~uVar2;
  if (bVar4)
  {
    uVar2 -= 0x1;
  }
  return uVar2;
}



// Copies up to `param_3` characters from string `param_2` to `param_1`. If `param_2` is
// shorter than `param_3`, the remainder of `param_1` is filled with null characters.
// Optimized for 16-bit far pointer access.

char * __cdecl16far strncpy_fixed_optimized(char *param_1,char *param_2,int param_3)
{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar3 = (char *)param_2;
  pcVar4 = (char *)param_1;
  if (param_3 != 0x0)
  {
    do
    {
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 0x1;
      if (*pcVar1 == '\0') break;
      pcVar2 = pcVar4;
      pcVar4 = pcVar4 + 0x1;
      *pcVar2 = *pcVar1;
      param_3 += -0x1;
    } while (param_3 != 0x0);
    for (; param_3 != 0x0; param_3 += -0x1)
    {
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + 0x1;
      *pcVar1 = '\0';
    }
  }
  return (char *)param_1;
}



// Compares up to `param_3` characters of string `param_1` and `param_2`. Returns 0 if
// equal, or the difference between the first non-matching characters. Optimized for
// 16-bit far pointers.

int __cdecl16far strncmp_fixed_optimized(char *str1,char *str2,int count)
{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 in_stack_0000000a;
  int in_stack_0000000c;
  
  uVar4 = 0x0;
  iVar3 = in_stack_0000000c;
  pcVar5 = str1;
  if (in_stack_0000000c != 0x0)
  {
    do
    {
      if (iVar3 == 0x0) break;
      iVar3 += -0x1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 0x1;
    } while (*pcVar1 != '\0');
    iVar3 = in_stack_0000000c - iVar3;
    do
    {
      if (iVar3 == 0x0) break;
      iVar3 += -0x1;
      pcVar2 = str1;
      str1 = str1 + 0x1;
      pcVar1 = (char *)count;
      count += 0x1;
    } while (*pcVar1 == *pcVar2);
    uVar4 = 0x0;
    if (*(byte *)(count + -0x1) <= (byte)str1[-0x1])
    {
      if (*(byte *)(count + -0x1) == str1[-0x1])
      {
        return 0x0;
      }
      uVar4 = 0xfffe;
    }
    uVar4 = ~uVar4;
  }
  return uVar4;
}



int __cdecl16far atoi_wrapper_far(char *str)
{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined2 in_stack_00000006;
  
  iVar4 = 0x0;
  do
  {
    do
    {
      pbVar1 = (byte *)str;
      str = (char *)((byte *)str + 0x1);
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 0x9);
  if ((bVar2 != 0x2d) && (bVar3 = bVar2, bVar2 != 0x2b)) goto LAB_1000_3e4d;
  while( true )
  {
    pbVar1 = (byte *)str;
    str = (char *)((byte *)str + 0x1);
    bVar3 = *pbVar1;
LAB_1000_3e4d:
    if ((0x39 < bVar3) || (bVar3 < 0x30)) break;
    iVar4 = iVar4 * 0xa + (uint)(byte)(bVar3 - 0x30);
  }
  if (bVar2 == 0x2d)
  {
    iVar4 = -iVar4;
  }
  return iVar4;
}



int __cdecl16far atoi_wrapper_far(char *str)
{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined2 in_stack_00000006;
  
  iVar4 = 0x0;
  do
  {
    do
    {
      pbVar1 = (byte *)str;
      str = (char *)((byte *)str + 0x1);
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 0x9);
  if ((bVar2 != 0x2d) && (bVar3 = bVar2, bVar2 != 0x2b)) goto LAB_1000_3e4d;
  while( true )
  {
    pbVar1 = (byte *)str;
    str = (char *)((byte *)str + 0x1);
    bVar3 = *pbVar1;
LAB_1000_3e4d:
    if ((0x39 < bVar3) || (bVar3 < 0x30)) break;
    iVar4 = iVar4 * 0xa + (uint)(byte)(bVar3 - 0x30);
  }
  if (bVar2 == 0x2d)
  {
    iVar4 = -iVar4;
  }
  return iVar4;
}
