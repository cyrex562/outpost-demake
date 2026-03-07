/*
 * Source: outpost.c
 * Chunk: 5/117
 * Original lines: 4648-5731
 * Boundaries: top-level declarations/definitions only
 */




// Analyzes and updates the state of a resource handle (provided in `param_1`). It
// checks for internal error flags, processes path strings (ensuring correct
// delimiters), and performs runtime validation of the handle's associated data.

int __cdecl16far process_handle_flags_and_path_logic(void *handle_ptr)
{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int unaff_BP;
  u16 uVar4;
  char *unaff_CS;
  undefined2 unaff_SS;
  char local_10 [0xa];
  int iStack_6;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 0x1;
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
    fatal_exit_shorthand((int)unaff_CS);
    if (iVar2 < 0x0) goto LAB_1000_2a6a;
LAB_1000_2a82:
    bVar1 = false;
  }
  else
  {
    uVar3 = (uint)*(byte *)((int)handle_ptr + 0xb);
    dos_close_file_handle_internal((u16)unaff_CS,uVar3);
    if (-0x1 < (int)uVar3) goto LAB_1000_2a82;
LAB_1000_2a6a:
    bVar1 = true;
  }
  if (!bVar1)
  {
    if (iStack_6 == 0x0) goto LAB_1000_2af2;
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_10),s___1050_5fea);
    if (local_10[0x0] != '\\')
    {
      strcat_append((char *)CONCAT22(unaff_SS,local_10),s___1050_5fec);
    }
    win16_app_pre_init_wrapper_3_entry_point_maybe();
    iVar2 = dos_remove_directory_internal_far(unaff_CS);
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
  int in_DX;
  void *in_stack_0000000a;
  
  puVar1 = handle_get_available_slot();
  if (in_DX == 0x0 && puVar1 == NULL)
  {
    pvVar2 = NULL;
  }
  else
  {
    pvVar2 = handle_init_from_mode_string(filename,mode,flags,in_stack_0000000a);
  }
  return pvVar2;
}



void * __cdecl16far handle_open_file_wrapper(char *filename,char *mode)
{
  void *pvVar1;
  byte in_stack_00000008;
  
  pvVar1 = handle_open_file_internal(filename,mode,in_stack_00000008);
  return pvVar1;
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



// Global cleanup routine for the handle management system, called during application
// exit. It flushes buffers and closes all active internal handles.

void __cdecl16far handle_system_exit_cleanup(void)
{
  handle_flush_all_on_exit();
  if ((char)PTR_DAT_1050_0000_1050_5fc9 != '\0')
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
  int unaff_BP;
  undefined *puVar6;
  u16 unaff_CS;
  undefined2 unaff_SS;
  
  pvVar1 = handle_ptr;
  puVar6 = (undefined *)(unaff_BP + 0x1);
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
                         (unaff_CS,puVar5,(char *)CONCAT22(unaff_SS,&character),0x1);
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
          dos_seek_file_handle_internal(unaff_CS,(uint)puVar5,0x0,0x0,0x2);
          puVar3 = NULL;
          puVar6 = NULL;
        }
      }
      else
      {
        puVar3 = handle_buffered_write_internal_logic
                           (unaff_CS,puVar5,
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
  int in_DX;
  undefined2 unaff_SI;
  
  pvVar1 = heap_alloc_bytes(CONCAT22(unaff_SI,0x200));
  if (in_DX == 0x0)
  {
    *(byte *)((int)handle_ptr + 0xa) = *(byte *)((int)handle_ptr + 0xa) | 0x4;
    *(undefined2 *)((int)handle_ptr + 0xf2) = 0x1;
    in_DX = 0x1050;
    pvVar1 = (void *)((int)handle_ptr + 0xf1);
  }
  else
  {
    *(byte *)((int)handle_ptr + 0xa) = *(byte *)((int)handle_ptr + 0xa) | 0x8;
    *(undefined2 *)((int)handle_ptr + 0xf2) = 0x200;
  }
  *(int *)((int)handle_ptr + 0x2) = in_DX;
  *(void **)handle_ptr = pvVar1;
  *(int *)((int)handle_ptr + 0x8) = in_DX;
  *(int *)((int)handle_ptr + 0x6) = (int)pvVar1;
  *(undefined2 *)((int)handle_ptr + 0x4) = 0x0;
  return;
}



// Targeted Scan Finding: Far Pointer
// References global file management pointers in segment 1050:
// - PTR_DAT_1050_6062
// - PTR_DAT_1050_5fee (global file count).

void * __cdecl16far
handle_init_from_mode_string(char *filename,char *mode,byte flags,void *handle_ptr)
{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined1 in_stack_00000009;
  byte in_stack_0000000c;
  undefined2 *in_stack_0000000e;
  undefined1 uStack_e;
  byte bStack_8;
  undefined1 uStack_6;
  
  _flags = (byte *)CONCAT22(handle_ptr,(byte *)CONCAT11(in_stack_00000009,flags));
  bStack_8 = (byte)g_FileModeDefault;
  bVar3 = false;
  bVar1 = *_flags;
  if (bVar1 == 0x77)
  {
    uVar4 = 0x301;
  }
  else
  {
    if (0x77 < bVar1)
    {
      return NULL;
    }
    if (bVar1 != 0x61)
    {
      if (bVar1 != 0x72)
      {
        return NULL;
      }
      uVar4 = 0x0;
      uStack_6 = 0x1;
      goto LAB_1000_2d6c;
    }
    uVar4 = 0x109;
  }
  uStack_6 = 0x2;
LAB_1000_2d6c:
  bVar2 = true;
LAB_1000_2d71:
  _flags = (byte *)CONCAT22(handle_ptr,_flags + 0x1);
  if ((*_flags == 0x0) || (!bVar2))
  {
    uVar4 = dos_open_create_file_internal_lowlevel_routine
                      ((u16)filename,(u16)mode,uVar4,in_stack_0000000c,0x1a4);
    if ((int)uVar4 < 0x0)
    {
      return NULL;
    }
    g_ActiveFileCount = g_ActiveFileCount + 0x1;
    *(undefined1 *)(in_stack_0000000e + 0x5) = uStack_6;
    in_stack_0000000e[0x1] = 0x0;
    *in_stack_0000000e = 0x0;
    in_stack_0000000e[0x4] = 0x0;
    in_stack_0000000e[0x3] = 0x0;
    uStack_e = (undefined1)uVar4;
    *(undefined1 *)((int)in_stack_0000000e + 0xb) = uStack_e;
    *(byte *)(in_stack_0000000e + 0x78) = bStack_8;
    in_stack_0000000e[0x2] = 0x0;
    in_stack_0000000e[0x7a] = 0x0;
    return in_stack_0000000e;
  }
  bVar1 = *_flags;
  if (bVar1 == 0x74)
  {
    if ((uVar4 & 0xc000) == 0x0)
    {
      uVar4 |= 0x4000;
      goto LAB_1000_2d71;
    }
  }
  else
  {
    if (0x74 < bVar1) goto LAB_1000_2da4;
    if (bVar1 == 0x2b)
    {
      if ((uVar4 & 0x2) != 0x0) goto LAB_1000_2da4;
      uVar4 = uVar4 & 0xfffe | 0x2;
      uStack_6 = 0x80;
      goto LAB_1000_2d71;
    }
    if (bVar1 == 0x62)
    {
      if ((uVar4 & 0xc000) == 0x0)
      {
        uVar4 |= 0x8000;
        goto LAB_1000_2d71;
      }
    }
    else
    {
      if (bVar1 != 0x63)
      {
        if ((bVar1 != 0x6e) || (bVar3)) goto LAB_1000_2da4;
        bVar3 = true;
        bStack_8 &= 0xbf;
        goto LAB_1000_2d71;
      }
      if (!bVar3)
      {
        bVar3 = true;
        bStack_8 |= 0x40;
        goto LAB_1000_2d71;
      }
    }
  }
LAB_1000_2da4:
  bVar2 = false;
  goto LAB_1000_2d71;
}



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



void fmt_print_dispatch_logic(char *param_1)
{
  char cVar1;
  byte bVar2;
  u16 *puVar3;
  u16 *unaff_BP;
  u16 unaff_SS;
  u16 uStack_20c4;
  u16 uStack_20c2;
  u16 local_14;
  int iStack_c;
  char cStack_9;
  u8 local_8;
  
  puVar3 = (u16 *)&stack0xfffe;
  cVar1 = '\a';
  do
  {
    unaff_BP = unaff_BP + -0x1;
    puVar3 = puVar3 + -0x1;
    *puVar3 = *unaff_BP;
    cVar1 += -0x1;
  } while ('\0' < cVar1);
  fmt_write_buffered_string(local_14);
  if (((local_8 & 0x8) != 0x0) && ((local_8 & 0x4) == 0x0))
  {
    fmt_write_padding_chars(uStack_20c4,'0');
  }
  fmt_write_buffered_string(uStack_20c2);
  if ((local_8 & 0x4) != 0x0)
  {
    fmt_write_padding_chars(uStack_20c4,' ');
  }
  if ((*param_1 != '\0') && (-0x1 < iStack_c))
  {
    bVar2 = *param_1 - 0x20;
    if (bVar2 < 0x59)
    {
      bVar2 = *(byte *)(ulong)(bVar2 + 0x5ffe) & 0xf;
    }
    else
    {
      bVar2 = 0x0;
    }
                // WARNING: Could not recover jumptable at 0x1000310e. Too many branches
                // WARNING: Treating indirect jump as call
    (*(code *)*(undefined2 *)
               ((int)(void **)&PTR_s_add16_wav_1050_2bdc_1050_30a4 +
               (char)(*(byte *)(ulong)((byte)(bVar2 * '\b' + cStack_9) + 0x5ffe) >> 0x4)
               * 0x2))();
    return;
  }
  far_noop_stub();
  return;
}



u16 __cdecl16near fmt_get_next_word_arg(void)
{
  u16 uVar1;
  int unaff_BP;
  u16 unaff_SS;
  
  uVar1 = *(u16 *)*(undefined4 *)(unaff_BP + 0xe);
  *(int *)(unaff_BP + 0xe) = (int)((u16 *)(u16 *)*(undefined4 *)(unaff_BP + 0xe) + 0x1);
  return uVar1;
}



u32 __cdecl16near fmt_get_next_dword_arg(void)
{
  u16 uVar2;
  u16 *puVar3;
  int unaff_BP;
  u16 unaff_SS;
  u16 uVar1;
  
  puVar3 = (u16 *)*(undefined4 *)(unaff_BP + 0xe);
  uVar1 = *puVar3;
  uVar2 = ((u16 *)puVar3)[0x1];
  *(int *)(unaff_BP + 0xe) = (int)((u16 *)puVar3 + 0x2);
  return CONCAT22(uVar2,uVar1);
}



long __cdecl16near fmt_get_arg_by_size_flag(u16 param_1)
{
  u16 uVar1;
  int unaff_BP;
  u16 unaff_SS;
  u32 uVar2;
  
  if ((*(byte *)(unaff_BP + -0x6) & 0x20) != 0x0)
  {
    uVar2 = fmt_get_next_dword_arg();
    return uVar2;
  }
  uVar1 = fmt_get_next_word_arg();
  if (uVar1 == 0x0)
  {
    return (ulong)param_1 << 0x10;
  }
  return CONCAT22(param_1,uVar1);
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



void __cdecl16near fmt_write_buffered_string(u16 param_1)
{
  u8 *puVar1;
  u16 uVar2;
  int unaff_BP;
  u8 *unaff_DI;
  uint uVar3;
  u16 unaff_ES;
  u16 unaff_SS;
  
  if (param_1 != 0x0)
  {
    *(int *)(unaff_BP + -0xa) = *(int *)(unaff_BP + -0xa) + param_1;
    uVar3 = 0x0;
    do
    {
      puVar1 = unaff_DI;
      unaff_DI = unaff_DI + 0x1;
      uVar2 = fmt_write_buffered_char(*puVar1);
      uVar3 |= uVar2;
      param_1 -= 0x1;
    } while (param_1 != 0x0);
    if (uVar3 != 0x0)
    {
      *(undefined2 *)(unaff_BP + -0xa) = 0xffff;
    }
  }
  return;
}



void __cdecl16near fmt_write_padding_chars(u16 param_1,u8 param_2)
{
  u16 uVar1;
  int unaff_BP;
  uint uVar2;
  u16 unaff_SS;
  
  if (param_1 != 0x0)
  {
    *(int *)(unaff_BP + -0xa) = *(int *)(unaff_BP + -0xa) + param_1;
    uVar2 = 0x0;
    do
    {
      uVar1 = fmt_write_buffered_char(param_2);
      uVar2 |= uVar1;
      param_1 -= 0x1;
    } while (param_1 != 0x0);
    if (uVar2 != 0x0)
    {
      *(undefined2 *)(unaff_BP + -0xa) = 0xffff;
    }
  }
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



void __cdecl16far far_noop_stub(void)
{
  return;
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
