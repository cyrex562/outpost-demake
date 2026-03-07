/*
 * Source: outpost.c
 * Theme: system_runtime
 * Chunk: 2/4
 * Original lines (combined): 5044-6334
 * Boundaries: top-level declarations/definitions only
 */




// Targeted Scan Finding: Far Pointer
// Extensive references to global handle tracking pointers in segment 1050:
// - PTR_DAT_1050_61ec
// - PTR_DAT_1050_5ff2
// - PTR_DAT_1050_5ff6
// - PTR_DAT_1050_621c
// - handle_ptr constant 0x6228.

int __cdecl16near handle_init_standard_stream_internal(void *handle_ptr)
{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  byte *pbVar4;
  long size;
  undefined2 *puVar5;
  
  if (p_SystemIO_Active != NULL)
  {
    pbVar4 = (byte *)((int)handle_ptr + 0xf0);
    ppuVar3 = (undefined **)&p_StdOut_Buffer;
    if ((handle_ptr == (undefined **)&p_StdOut_Handle) ||
       (ppuVar3 = (undefined **)&p_StdErr_Buffer,
       handle_ptr == (dword *)&p_StdErr_Handle))
    {
      if (((*(byte *)((int)handle_ptr + 0xa) & 0xc) == 0x0) && ((*pbVar4 & 0x1) == 0x0))
      {
        puVar1 = *ppuVar3;
        puVar2 = ppuVar3[0x1];
        if (puVar1 == NULL && puVar2 == NULL)
        {
          size = CONCAT22(ppuVar3,0x200);
          puVar1 = heap_alloc_bytes(size);
          puVar5 = (undefined2 *)((ulong)size >> 0x10);
          if (puVar2 == NULL)
          {
            return 0x0;
          }
          *puVar5 = puVar1;
          puVar5[0x1] = puVar2;
        }
        *(int *)((int)handle_ptr + 0x6) = (int)puVar1;
        *(int *)((int)handle_ptr + 0x8) = (int)puVar2;
        *(undefined **)handle_ptr = puVar1;
        *(int *)((int)handle_ptr + 0x2) = (int)puVar2;
        *(undefined2 *)((int)handle_ptr + 0x4) = 0x200;
        *(undefined2 *)((int)handle_ptr + 0xf2) = 0x200;
        *(byte *)((int)handle_ptr + 0xa) = *(byte *)((int)handle_ptr + 0xa) | 0x2;
        *pbVar4 = 0x11;
        return 0x1;
      }
    }
    else if ((byte)g_MaxFileHandles <= *(byte *)((int)handle_ptr + 0xb))
    {
      *pbVar4 = *pbVar4 | 0x10;
    }
  }
  return 0x0;
}



// Finalizes an access operation on a handle, releasing any internal locks and
// performing cleanup if the access was part of a temporary or special operation.

void __cdecl16near handle_finalize_access(int status,void *handle_ptr)
{
  if (((*(byte *)((int)handle_ptr + 0xf0) & 0x10) != 0x0) &&
     ((((byte *)&g_LowLevelHandleTable)[*(byte *)((int)handle_ptr + 0xb)] & 0x40) != 0x0
     ))
  {
    handle_flush_internal_buffer(handle_ptr);
    if (status != 0x0)
    {
      *(byte *)((int)handle_ptr + 0xf0) = 0x0;
      *(undefined2 *)((int)handle_ptr + 0xf2) = 0x0;
      *(undefined2 *)handle_ptr = 0x0;
      *(undefined2 *)((int)handle_ptr + 0x2) = 0x0;
      *(undefined2 *)((int)handle_ptr + 0x6) = 0x0;
      *(undefined2 *)((int)handle_ptr + 0x8) = 0x0;
    }
  }
  return;
}



// Flushes the buffer of a specific file handle. If NULL is passed as the handle
// pointer, it triggers a flush of all currently open handles in the system. Returns 0
// on success or -1 on error.

int __cdecl16far handle_flush_specific(int *param_1)
{
  int iVar1;
  u16 uVar2;
  
  if (param_1 == NULL)
  {
    iVar1 = handle_flush_all_system_handles(0x0);
  }
  else
  {
    uVar2 = handle_flush_internal_buffer((int *)param_1);
    if (uVar2 == 0x0)
    {
      iVar1 = 0x0;
      if ((*(byte *)((int *)param_1 + 0x78) & 0x40) != 0x0)
      {
        iVar1 = handle_get_underlying_os_handle_far_ptr_lookup_routine
                          ((uint)*(byte *)((int)(int *)param_1 + 0xb));
        iVar1 = -(uint)(iVar1 != 0x0);
      }
    }
    else
    {
      iVar1 = -0x1;
    }
  }
  return iVar1;
}



// Internal routine that performs the actual flush of a buffered handle. It writes any
// pending data in the handle's buffer to the underlying device and resets the buffer
// pointers. Returns 0 on success.

u16 __cdecl16near handle_flush_internal_buffer(int *param_1)
{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  u16 uVar4;
  u16 unaff_CS;
  
  uVar4 = 0x0;
  if (((*(byte *)(param_1 + 0x5) & 0x3) == 0x2) &&
     (((*(byte *)(param_1 + 0x5) & 0x8) != 0x0 ||
      ((*(byte *)(param_1 + 0x78) & 0x1) != 0x0))))
  {
    puVar2 = (undefined *)(*param_1 - param_1[0x3]);
    if (0x0 < (int)puVar2)
    {
      puVar3 = handle_buffered_write_internal_logic
                         (unaff_CS,(undefined *)(uint)*(byte *)((int)param_1 + 0xb),
                          (char *)CONCAT22(param_1[0x4],(char *)param_1[0x3]),
                          (int)puVar2);
      if (puVar3 == puVar2)
      {
        if ((*(byte *)(param_1 + 0x5) & 0x80) != 0x0)
        {
          *(byte *)(param_1 + 0x5) = *(byte *)(param_1 + 0x5) & 0xfd;
        }
      }
      else
      {
        *(byte *)(param_1 + 0x5) = *(byte *)(param_1 + 0x5) | 0x20;
        uVar4 = 0xffff;
      }
    }
  }
  iVar1 = param_1[0x4];
  *param_1 = param_1[0x3];
  param_1[0x1] = iVar1;
  param_1[0x2] = 0x0;
  return uVar4;
}



void __cdecl16far handle_flush_all_on_exit(void)
{
  handle_flush_all_system_handles(0x1);
  return;
}



// Targeted Scan Finding: Far Pointer
// Iterates through global handle table starting at offset 0x6210 up to pointer at
// 1050:5ff0.
// Passes context 1050:1050 to handle_flush_specific.

int handle_flush_all_system_handles(int param_1)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iStack_4;
  
  iVar3 = 0x0;
  iStack_4 = 0x0;
  for (piVar2 = (int *)0x6210; piVar2 <= p_GlobalHandleTable_End; piVar2 = piVar2 + 0x6)
  {
    if ((param_1 == 0x1) && ((*(byte *)(piVar2 + 0x5) & 0x83) != 0x0))
    {
      iVar1 = handle_flush_specific((int *)CONCAT22(0x1050,piVar2));
      if (iVar1 != -0x1)
      {
        iVar3 += 0x1;
      }
    }
    else if ((param_1 == 0x0) &&
            (((*(byte *)(piVar2 + 0x5) & 0x2) != 0x0 &&
             (iVar1 = handle_flush_specific((int *)CONCAT22(0x1050,piVar2)),
             iVar1 == -0x1))))
    {
      iStack_4 = -0x1;
    }
  }
  if (param_1 == 0x1)
  {
    iStack_4 = iVar3;
  }
  return iStack_4;
}



u16 __cdecl16near fmt_write_buffered_char(u8 param_1)
{
  int *piVar1;
  u8 *puVar2;
  int *piVar3;
  int iVar4;
  int *handle_ptr;
  int unaff_BP;
  u16 uVar5;
  u16 unaff_SS;
  
  piVar3 = (int *)*(undefined4 *)(unaff_BP + 0x6);
  uVar5 = (u16)((ulong)piVar3 >> 0x10);
  handle_ptr = (int *)piVar3;
  piVar1 = handle_ptr + 0x2;
  *piVar1 = *piVar1 + -0x1;
  if (*piVar1 < 0x0)
  {
    iVar4 = handle_buffered_write_char((int)(char)param_1,handle_ptr);
    if (iVar4 == -0x1)
    {
      return 0xffff;
    }
  }
  else
  {
    puVar2 = (u8 *)*piVar3;
    *piVar3 = *piVar3 + 0x1;
    *puVar2 = param_1;
  }
  return 0x0;
}



// Targeted Scan Finding: Far Pointer
// Searches global handle table starting at offset 0x6210 up to pointer at 1050:5ff0.

u16 * __cdecl16far handle_get_available_slot(void)
{
  u16 *puVar1;
  
  puVar1 = (u16 *)0x6210;
  while( true )
  {
    if (p_GlobalHandleTable_End < puVar1)
    {
      return NULL;
    }
    if ((puVar1[0x5] & 0x83) == 0x0) break;
    puVar1 = puVar1 + 0x6;
  }
  *(undefined1 *)(puVar1 + 0x5) = 0x0;
  puVar1[0x2] = 0x0;
  puVar1[0x4] = 0x0;
  puVar1[0x3] = 0x0;
  puVar1[0x1] = 0x0;
  *puVar1 = 0x0;
  *(undefined1 *)((int)puVar1 + 0xb) = 0xff;
  return puVar1;
}



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
