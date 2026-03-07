/*
 * Source: outpost.c
 * Chunk: 6/117
 * Original lines: 5732-6922
 * Boundaries: top-level declarations/definitions only
 */




// Targeted Scan Finding: Far Pointer
// Uses context pointer 1050:1050 for low-level DOS file operations.
// Updates file handle metadata in segment 1050 at offset 0x5F90.

uint __cdecl16far
dos_open_create_file_internal_lowlevel_routine
          (u16 param_1,u16 param_2,uint param_3,byte param_4,uint param_5)
{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined2 extraout_DX;
  int unaff_BP;
  undefined1 uVar8;
  ulong uVar9;
  undefined2 uVar10;
  byte bVar11;
  byte in_stack_0000fff9;
  byte bVar12;
  char in_stack_0000fffb;
  
  bVar12 = param_4;
  _param_4 = param_5;
  bVar11 = 0x0;
  if (((param_3 & 0x8000) == 0x0) &&
     (((param_3 & 0x4000) != 0x0 || ((u8_1050_6061 & 0x80) == 0x0))))
  {
    bVar11 = 0x80;
  }
  uVar10 = 0x1050;
  uVar2 = CONCAT11(0x3d,(byte)param_3 & 0x3 | bVar12);
  uVar8 = 0x0;
  uVar7 = param_3;
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    uVar9 = (*pcVar1)(bVar11,bVar12,0x1050,unaff_BP + 0x1);
  }
  else
  {
    Dos3Call((void *)CONCAT13(in_stack_0000fff9,CONCAT12(bVar11,0x1050)));
    uVar9 = CONCAT22(param_1,uVar2);
  }
  uVar5 = (uint)uVar9;
  if ((bool)uVar8)
  {
    if ((uVar5 != 0x2) || ((uVar7 & 0x100) == 0x0)) goto LAB_1000_377f;
    in_stack_0000fff9 = 0x0;
    near_noop_stub_2();
    uVar8 = (undefined1)uVar5;
    _param_4 = param_5;
    if ((bVar12 != 0x0) || (uVar7 = param_5, (param_3 & 0x2) == 0x0))
    {
      uVar7 = 0x0;
    }
LAB_1000_38e3:
    uVar5 = CONCAT11(0x3c,uVar8);
    uVar8 = 0x0;
    if (true)
    {
      pcVar1 = (code *)swi(0x21);
      uVar5 = (*pcVar1)();
    }
    else
    {
      Dos3Call((void *)CONCAT13(in_stack_0000fff9,CONCAT12(bVar11,uVar10)));
    }
    uVar4 = uVar5;
    if ((bool)uVar8)
    {
LAB_1000_38fe:
      check_error_flag_and_set_internal_err_void
                (CONCAT11(in_stack_0000fff9,bVar11),true);
      return uVar4;
    }
    if ((bVar12 != 0x0) || ((param_3 & 0x2) == 0x0))
    {
      if (true)
      {
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
      }
      else
      {
        Dos3Call((void *)CONCAT13(in_stack_0000fffb,
                                  CONCAT12(bVar12,CONCAT11(in_stack_0000fff9,bVar11))));
      }
      uVar5 = CONCAT11(0x3d,(byte)param_3 & 0x3 | bVar12);
      uVar8 = 0x0;
      if (true)
      {
        pcVar1 = (code *)swi(0x21);
        uVar5 = (*pcVar1)();
      }
      else
      {
        Dos3Call((void *)CONCAT13(in_stack_0000fff9,CONCAT12(bVar11,uVar10)));
      }
      uVar4 = uVar5;
      if ((bool)uVar8) goto LAB_1000_38fe;
      if (((in_stack_0000fff9 & 0x1) == 0x0) && ((_param_4 & 0x1) != 0x0))
      {
        uVar7 = (uint)(byte)((byte)uVar7 | 0x1);
        uVar4 = 0x4301;
        uVar8 = 0x0;
        if (true)
        {
          pcVar1 = (code *)swi(0x21);
          uVar4 = (*pcVar1)();
        }
        else
        {
          Dos3Call((void *)CONCAT13(in_stack_0000fff9,CONCAT12(bVar11,uVar10)));
        }
        if ((bool)uVar8) goto LAB_1000_38fe;
      }
    }
  }
  else
  {
    if ((uVar7 & 0x500) == 0x500)
    {
      if (true)
      {
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
      }
      else
      {
        Dos3Call((void *)CONCAT13(in_stack_0000fffb,
                                  CONCAT12(bVar12,CONCAT11(in_stack_0000fff9,bVar11))));
      }
      uVar5 = 0x1100;
      goto LAB_1000_377f;
    }
    in_stack_0000fff9 = 0x1;
    if (true)
    {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      uVar9 = CONCAT22(extraout_DX,uVar5);
    }
    else
    {
      Dos3Call((void *)CONCAT13(in_stack_0000fffb,CONCAT12(bVar12,CONCAT11(0x1,bVar11)))
              );
    }
    uVar5 = (uint)uVar9;
    if ((uVar9 & 0x800000) != 0x0)
    {
      bVar11 |= 0x40;
    }
    if ((bVar11 & 0x40) == 0x0)
    {
      if ((param_3 & 0x200) == 0x0)
      {
        if (((bVar11 & 0x80) != 0x0) && ((param_3 & 0x2) != 0x0))
        {
          uVar8 = 0x2;
          if (true)
          {
            pcVar1 = (code *)swi(0x21);
            uVar8 = (*pcVar1)();
          }
          else
          {
            Dos3Call((void *)CONCAT13(in_stack_0000fffb,
                                      CONCAT12(bVar12,CONCAT11(in_stack_0000fff9,bVar11)
                                              )));
          }
          iVar3 = CONCAT11(0x3f,uVar8);
          if (true)
          {
            pcVar1 = (code *)swi(0x21);
            iVar3 = (*pcVar1)();
          }
          else
          {
            Dos3Call((void *)CONCAT13(in_stack_0000fff9,CONCAT12(bVar11,uVar10)));
          }
          if ((iVar3 != 0x0) && (in_stack_0000fffb == '\x1a'))
          {
            if (true)
            {
              pcVar1 = (code *)swi(0x21);
              (*pcVar1)();
            }
            else
            {
              Dos3Call((void *)CONCAT13(0x1a,CONCAT12(bVar12,CONCAT11(in_stack_0000fff9,
                                                                      bVar11))));
            }
            if (true)
            {
              pcVar1 = (code *)swi(0x21);
              (*pcVar1)();
            }
            else
            {
              Dos3Call((void *)CONCAT13(in_stack_0000fffb,
                                        CONCAT12(bVar12,CONCAT11(in_stack_0000fff9,
                                                                 bVar11))));
            }
          }
          uVar7 = 0x0;
          if (true)
          {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
          }
          else
          {
            Dos3Call((void *)CONCAT13(in_stack_0000fffb,
                                      CONCAT12(bVar12,CONCAT11(in_stack_0000fff9,bVar11)
                                              )));
          }
        }
      }
      else
      {
        if ((param_3 & 0x3) == 0x0)
        {
          if (true)
          {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
          }
          else
          {
            Dos3Call((void *)CONCAT13(in_stack_0000fffb,
                                      CONCAT12(bVar12,CONCAT11(in_stack_0000fff9,bVar11)
                                              )));
          }
          uVar8 = 0x0;
          if (true)
          {
            pcVar1 = (code *)swi(0x21);
            uVar8 = (*pcVar1)();
          }
          else
          {
            Dos3Call((void *)CONCAT13(in_stack_0000fff9,CONCAT12(bVar11,uVar10)));
          }
          goto LAB_1000_38e3;
        }
        uVar7 = 0x0;
        if (true)
        {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
        }
        else
        {
          Dos3Call((void *)CONCAT13(in_stack_0000fffb,
                                    CONCAT12(bVar12,CONCAT11(in_stack_0000fff9,bVar11)))
                  );
        }
      }
    }
  }
  if ((bVar11 & 0x40) == 0x0)
  {
    if (true)
    {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    else
    {
      Dos3Call((void *)CONCAT13(in_stack_0000fff9,CONCAT12(bVar11,uVar10)));
    }
    bVar6 = 0x0;
    if ((uVar7 & 0x1) != 0x0)
    {
      bVar6 = 0x10;
    }
    if ((param_3 & 0x8) != 0x0)
    {
      bVar6 |= 0x20;
    }
  }
  else
  {
    bVar6 = 0x0;
  }
  if (uVar5 < *(uint *)&g_MaxFileHandles)
  {
    ((byte *)&g_LowLevelHandleTable)[uVar5] = bVar6 | bVar11 | 0x1;
    return uVar5;
  }
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else
  {
    Dos3Call((void *)CONCAT13(in_stack_0000fffb,
                              CONCAT12(bVar12,CONCAT11(in_stack_0000fff9,bVar11))));
  }
  uVar5 = 0x1800;
LAB_1000_377f:
  check_error_flag_and_set_internal_err_void(CONCAT11(in_stack_0000fff9,bVar11),true);
  return uVar5;
}



// WARNING: Variable defined which should be unmapped: local_8
// WARNING: Variable defined which should be unmapped: local_6

uint __cdecl16far
dos_file_open_create_logic(u16 param_1,u16 param_2,uint param_3,uint param_4)
{
  code *pcVar1;
  u16 uVar2;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  u16 extraout_DX;
  int unaff_BP;
  u8 uVar7;
  u8 uVar8;
  undefined1 uVar9;
  ulong uVar10;
  u8 local_8;
  u8 local_7;
  u8 local_6;
  char local_5;
  
  local_8 = '\0';
  if (((param_3 & 0x8000) == 0x0) &&
     (((param_3 & 0x4000) != 0x0 || ((u8_1050_6061 & 0x80) == 0x0))))
  {
    local_8 = 0x80;
  }
  uVar2 = CONCAT11(0x3d,(byte)param_3 & 0x3);
  uVar7 = '\0';
  uVar6 = param_3;
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    uVar10 = (*pcVar1)(local_8,0x0,0x1050,unaff_BP + 0x1);
  }
  else
  {
    Dos3Call((void *)CONCAT13(local_7,CONCAT12(local_8,0x1050)));
    uVar10 = CONCAT22(param_1,uVar2);
  }
  uVar4 = (uint)uVar10;
  if ((bool)uVar7)
  {
    if ((uVar4 != 0x2) || ((uVar6 & 0x100) == 0x0)) goto LAB_1000_377f;
    local_7 = '\0';
    near_noop_stub_2();
    uVar9 = (undefined1)uVar4;
    if ((false) || (uVar6 = param_4, (param_3 & 0x2) == 0x0))
    {
      uVar6 = 0x0;
    }
LAB_1000_38e3:
    uVar4 = CONCAT11(0x3c,uVar9);
    uVar8 = '\0';
    if (true)
    {
      pcVar1 = (code *)swi(0x21);
      uVar4 = (*pcVar1)();
    }
    else
    {
      Dos3Call((void *)CONCAT13(local_7,CONCAT12(local_8,0x1050)));
    }
    uVar3 = uVar4;
    if ((bool)uVar8)
    {
LAB_1000_38fe:
      check_error_flag_and_set_internal_err_void(CONCAT11(local_7,local_8),true);
      return uVar3;
    }
    if ((false) || ((param_3 & 0x2) == 0x0))
    {
      if (true)
      {
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
      }
      else
      {
        Dos3Call((void *)CONCAT13(local_5,(uint3)CONCAT11(local_7,local_8)));
      }
      uVar4 = CONCAT11(0x3d,(byte)param_3 & 0x3);
      uVar9 = 0x0;
      if (true)
      {
        pcVar1 = (code *)swi(0x21);
        uVar4 = (*pcVar1)();
      }
      else
      {
        Dos3Call((void *)CONCAT13(local_7,CONCAT12(local_8,0x1050)));
      }
      uVar3 = uVar4;
      if ((bool)uVar9) goto LAB_1000_38fe;
      if ((local_7 == '\0') && ((param_4 & 0x1) != 0x0))
      {
        uVar6 = (uint)(byte)((byte)uVar6 | 0x1);
        uVar3 = 0x4301;
        uVar9 = 0x0;
        if (true)
        {
          pcVar1 = (code *)swi(0x21);
          uVar3 = (*pcVar1)();
        }
        else
        {
          Dos3Call((void *)(ulong)CONCAT12(local_8,0x1050));
        }
        if ((bool)uVar9) goto LAB_1000_38fe;
      }
    }
  }
  else
  {
    if ((uVar6 & 0x500) == 0x500)
    {
      if (true)
      {
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
      }
      else
      {
        Dos3Call((void *)CONCAT13(local_5,(uint3)CONCAT11(local_7,local_8)));
      }
      uVar4 = 0x1100;
      goto LAB_1000_377f;
    }
    local_7 = '\x01';
    if (true)
    {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      uVar10 = CONCAT22(extraout_DX,uVar4);
    }
    else
    {
      Dos3Call((void *)CONCAT13(local_5,(uint3)CONCAT11(0x1,local_8)));
    }
    uVar4 = (uint)uVar10;
    if ((uVar10 & 0x800000) != 0x0)
    {
      local_8 |= 0x40;
    }
    if ((local_8 & 0x40) == 0x0)
    {
      if ((param_3 & 0x200) == 0x0)
      {
        if (((local_8 & 0x80) != 0x0) && ((param_3 & 0x2) != 0x0))
        {
          uVar9 = 0x2;
          if (true)
          {
            pcVar1 = (code *)swi(0x21);
            uVar9 = (*pcVar1)();
          }
          else
          {
            Dos3Call((void *)CONCAT13(local_5,(uint3)CONCAT11(0x1,local_8)));
          }
          iVar2 = CONCAT11(0x3f,uVar9);
          if (true)
          {
            pcVar1 = (code *)swi(0x21);
            iVar2 = (*pcVar1)();
          }
          else
          {
            Dos3Call((void *)CONCAT13(0x1,CONCAT12(local_8,0x1050)));
          }
          if ((iVar2 != 0x0) && (local_5 == '\x1a'))
          {
            if (true)
            {
              pcVar1 = (code *)swi(0x21);
              (*pcVar1)();
            }
            else
            {
              Dos3Call((void *)CONCAT13(0x1a,(uint3)CONCAT11(0x1,local_8)));
            }
            if (true)
            {
              pcVar1 = (code *)swi(0x21);
              (*pcVar1)();
            }
            else
            {
              Dos3Call((void *)CONCAT13(0x1a,(uint3)CONCAT11(0x1,local_8)));
            }
          }
          uVar6 = 0x0;
          if (true)
          {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
          }
          else
          {
            Dos3Call((void *)CONCAT13(local_5,(uint3)CONCAT11(0x1,local_8)));
          }
        }
      }
      else
      {
        if ((param_3 & 0x3) == 0x0)
        {
          if (true)
          {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
          }
          else
          {
            Dos3Call((void *)CONCAT13(local_5,(uint3)CONCAT11(0x1,local_8)));
          }
          uVar9 = 0x0;
          if (true)
          {
            pcVar1 = (code *)swi(0x21);
            uVar9 = (*pcVar1)();
          }
          else
          {
            Dos3Call((void *)CONCAT13(0x1,CONCAT12(local_8,0x1050)));
          }
          goto LAB_1000_38e3;
        }
        uVar6 = 0x0;
        if (true)
        {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
        }
        else
        {
          Dos3Call((void *)CONCAT13(local_5,(uint3)CONCAT11(0x1,local_8)));
        }
      }
    }
  }
  if ((local_8 & 0x40) == 0x0)
  {
    if (true)
    {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    else
    {
      Dos3Call((void *)CONCAT13(local_7,CONCAT12(local_8,0x1050)));
    }
    bVar5 = 0x0;
    if ((uVar6 & 0x1) != 0x0)
    {
      bVar5 = 0x10;
    }
    if ((param_3 & 0x8) != 0x0)
    {
      bVar5 |= 0x20;
    }
  }
  else
  {
    bVar5 = 0x0;
  }
  if (uVar4 < g_MaxFileHandles)
  {
    ((byte *)&g_LowLevelHandleTable)[uVar4] = bVar5 | local_8 | 0x1;
    return uVar4;
  }
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else
  {
    Dos3Call((void *)CONCAT13(local_5,(uint3)CONCAT11(local_7,local_8)));
  }
  uVar4 = 0x1800;
LAB_1000_377f:
  check_error_flag_and_set_internal_err_void(CONCAT11(local_7,local_8),true);
  return uVar4;
}



void __cdecl16near near_noop_stub_2(void)
{
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



// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used

void handle_update_error_state_wrapper_void(void)
{
  int unaff_BP;
  undefined2 unaff_SS;
  
  check_error_flag_and_set_internal_err_void
            (*(u16 *)(*(int *)(unaff_BP + -0xa) + 0x4),
             *(uint *)(unaff_BP + -0x4) < *(uint *)(unaff_BP + -0x6));
  return;
}


/*
Unable to decompile 'handle_low_level_write_dispatch_internal'
Cause: 
Low-level Error: Symbol $$undef0000000c extends beyond the end of the address space
*/


// Targeted Scan Finding: Far Pointer
// References the application's stack limit pointer stored at 1050:5f48.

int __cdecl16far get_stack_space_available_bytes(void)
{
  int iVar1;
  
  if (g_TaskStackPointer < &stack0x0004)
  {
    iVar1 = -((int)g_TaskStackPointer - (int)&stack0x0004);
  }
  else
  {
    iVar1 = 0x0;
  }
  return iVar1;
}



void __cdecl16near global_realloc_guarded(int err_code,u16 alloc_size,u16 param_3)
{
  HGLOBAL16 handle;
  uint16_t flags;
  uint32_t uVar1;
  HGLOBAL16 mem_handle;
  u16 uVar2;
  
  if ((*(byte *)(param_3 + 0x2) & 0x4) != 0x0)
  {
LAB_1000_3cac:
    fatal_app_exit_with_message_lookup_and_terminate(err_code);
    return;
  }
  handle = *(HGLOBAL16 *)(param_3 + 0x6);
  mem_handle = 0x0;
  if (alloc_size == 0x0)
  {
    if (false)
    {
      return;
    }
    mem_handle = 0x1;
  }
  flags = 0x2;
  if (true)
  {
    flags = 0x20;
  }
  uVar2 = alloc_size;
  mem_handle = GlobalRealloc16(flags,alloc_size,mem_handle);
  if (mem_handle != 0x0)
  {
    if ((mem_handle != handle) ||
       (uVar1 = GlobalSize16(handle), uVar2 == 0x0 && uVar1 == 0x0)) goto LAB_1000_3cac;
    if ((*(byte *)(param_3 + 0x2) & 0x4) != 0x0)
    {
      *(int *)(param_3 - 0x2) = alloc_size - 0x1;
    }
  }
  return;
}



void __cdecl16near resource_find_terminator_3cb7(u16 param_1)
{
  uint *puVar1;
  
  puVar1 = (uint *)*(undefined2 *)(param_1 + 0xa);
  if (puVar1 == (uint *)*(undefined2 *)(param_1 + 0xc))
  {
    puVar1 = (uint *)*(undefined2 *)(param_1 + 0x8);
  }
  while( true )
  {
    if (*puVar1 == 0xfffe) break;
    puVar1 = (uint *)((int)puVar1 + (*puVar1 & 0xfffe) + 0x2);
  }
  return;
}



void __cdecl16far global_free_wrapper_far_3cd8(void *param_1)
{
  global_free_wrapper_far(param_1);
  return;
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
