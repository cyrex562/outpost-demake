/*
 * Source: outpost.c
 * Chunk: 7/117
 * Original lines: 6923-8090
 * Boundaries: top-level declarations/definitions only
 */




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



// Converts a string pointed to by far pointer `param_1` to an integer. Handles leading
// whitespace and optional plus/minus signs.

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



void win16_app_pre_init_wrapper_3_entry_point_maybe(void)
{
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  char *in_stack_00000000;
  int in_stack_00000002;
  
  ltoa_integer_to_string_optimized
            (CONCAT22(unaff_BP,unaff_SI),in_stack_00000000,in_stack_00000002);
  return;
}



// Targeted Scan Finding: Resource
// References string literal "Abnormal program termination" (1050:6544) during fatal
// exit.

void __cdecl16far win16_abnormal_termination_exit_handler(void)
{
  FatalAppExit16(s_ABNORMAL_PROGRAM_TERMINATION_1050_6544,0x0);
  return;
}



// Targeted Scan Finding: Far Pointer
// References environment tracking pointers in segment 1050:
// - PTR_DAT_1050_5fc0
// - PTR_DAT_1050_5fbe.

char * __cdecl16far getenv_wrapper_far_ptr_search(char *var_name)
{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  int in_stack_00000006;
  undefined4 uStack_8;
  
  uStack_8 = (int *)CONCAT22(p_EnvSegment_Base,p_EnvOffset_Base);
  if ((p_EnvSegment_Base != NULL || p_EnvOffset_Base != NULL) &&
     (in_stack_00000006 != 0x0 || var_name != NULL))
  {
    uVar1 = strlen_get_length((char *)CONCAT22(in_stack_00000006,var_name));
    while( true )
    {
      uVar5 = (undefined2)((ulong)uStack_8 >> 0x10);
      piVar4 = (int *)uStack_8;
      if (piVar4[0x1] == 0x0 && *uStack_8 == 0x0) break;
      uVar2 = strlen_get_length((char *)CONCAT22(piVar4[0x1],(char *)*uStack_8));
      if (((uVar1 < uVar2) && (*(char *)((int)*(undefined4 *)uStack_8 + uVar1) == '='))
         && (iVar3 = strncmp_fixed_optimized
                               ((char *)*uStack_8,(char *)piVar4[0x1],(int)var_name),
            iVar3 == 0x0))
      {
        return (char *)(*uStack_8 + uVar1 + 0x1);
      }
      uStack_8 = (int *)CONCAT22(uVar5,piVar4 + 0x2);
    }
  }
  return NULL;
}



// Targeted Scan Finding: Far Pointer
// Iterates through global handle table in data segment 1050 starting at offset 0x6210
// (or 0x6234) up to pointer at 1050:5ff0.

int __cdecl16far handle_system_close_all_active_handles_wrapper_far(void)
{
  int iVar1;
  undefined *handle_ptr;
  int iVar2;
  
  iVar2 = 0x0;
  if (p_SystemIO_Active == NULL)
  {
    handle_ptr = (undefined *)0x6210;
  }
  else
  {
    handle_ptr = (undefined *)0x6234;
  }
  for (; handle_ptr <= p_GlobalHandleTable_End; handle_ptr = handle_ptr + 0xc)
  {
    iVar1 = process_handle_flags_and_path_logic(handle_ptr);
    if (iVar1 != -0x1)
    {
      iVar2 += 0x1;
    }
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable Initializations
// Performs extensive far pointer initialization in data segment 1050 for formatting
// buffer management:
// - PTR_DAT_1050_68b2
// - PTR_DAT_1050_68ae
// - PTR_DAT_1050_68b0
// - _PTR_DAT_1050_68a8
// - PTR_DAT_1050_68ac
// References far pointer 1050:1050 during formatted string dispatch.

int __cdecl16far
sprintf_wrapper(undefined1 *param_1,undefined *param_2,char *param_3,undefined2 param_4)
{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
                // Format string into buffer - sets up global formatting buffer, calls
                // formatter, null-terminates result.
  PTR_DAT_1050_0000_1050_68b2._0_1_ = 0x42;
  PTR_DAT_1050_0000_1050_68ae = param_1;
  PTR_DAT_1050_0000_1050_68b0 = param_2;
  _PTR_DAT_1050_0000_1050_68a8 = (undefined1 *)CONCAT22(param_2,param_1);
  PTR_DAT_1050_0000_1050_68ac = (undefined *)0x7fff;
  puVar2 = &stack0x000c;
  format_string_dispatcher_internal(0x68a8,0x1050,(char *)CONCAT22(param_4,param_3));
  puVar1 = _PTR_DAT_1050_0000_1050_68a8;
  PTR_DAT_1050_0000_1050_68ac = PTR_DAT_1050_0000_1050_68ac + -0x1;
  if ((int)PTR_DAT_1050_0000_1050_68ac < 0x0)
  {
    handle_buffered_write_char(0x0,(undefined **)&PTR_DAT_1050_0000_1050_68a8);
  }
  else
  {
    _PTR_DAT_1050_0000_1050_68a8 =
         (undefined1 *)
         CONCAT22(PTR_DAT_1050_0000_1050_68aa,PTR_DAT_1050_0000_1050_68a8 + 0x1);
    *puVar1 = 0x0;
  }
  return (int)puVar2;
}



// Targeted Scan Finding: Far Pointer
// References multiple global management pointers in segment 1050:
// - PTR_s_ed_in_Op_Op_1050_0028_1050_5f8e
// - PTR_DAT_1050_5f78
// - PTR_DAT_1050_61ec
// - DAT_1050_5f82
// - PTR_DAT_1050_5f88
// Updates file handle metadata in segment 1050 at offset 0x5F90.

int __cdecl16far
handle_get_underlying_os_handle_far_ptr_lookup_routine(int handle_index)
{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_AH;
  
  if ((handle_index < 0x0) ||
     ((int)PTR_s_ed_in_Op_Op_1050_0028_1050_5f8e <= handle_index))
  {
    PTR_DAT_1050_0000_1050_5f78 = (undefined *)0x9;
    iVar3 = -0x1;
  }
  else if (((p_SystemIO_Active == NULL) ||
           ((handle_index < (int)g_MaxFileHandles && (0x2 < handle_index)))) &&
          (0x31d < CONCAT11(u16_1050_5f82._1_1_,(undefined1)u16_1050_5f82)))
  {
    puVar1 = PTR_DAT_1050_0000_1050_5f88;
    if ((((byte *)&g_LowLevelHandleTable)[handle_index] & 0x1) != 0x0)
    {
      bVar2 = dos_interrupt_call_u8_wrapper();
      puVar1 = (undefined *)CONCAT11(extraout_AH,bVar2);
      if ((undefined *)CONCAT11(extraout_AH,bVar2) == NULL)
      {
        return 0x0;
      }
    }
    PTR_DAT_1050_0000_1050_5f88 = puVar1;
    PTR_DAT_1050_0000_1050_5f78 = (undefined *)0x9;
    iVar3 = -0x1;
  }
  else
  {
    iVar3 = 0x0;
  }
  return iVar3;
}



// A far wrapper around GlobalFree16. Releases the specified global memory block.

void __cdecl16far global_free_wrapper_far(void *ptr)
{
  HGLOBAL16 in_stack_00000006;
  
  if (false)
  {
    in_stack_00000006 = handle_table_remove_entry_internal(in_stack_00000006);
    if (in_stack_00000006 == 0x0)
    {
      return;
    }
    GlobalUnlock16(in_stack_00000006);
  }
  GlobalFree16(in_stack_00000006);
  return;
}



// Targeted Scan Finding: Far Pointer / Vtable
// References allocation fail hook pointers in segment 1050:
// - PTR_DAT_1050_618e
// - PTR_DAT_1050_618c
// Performs indirect call through [1050:618c].
// References bitmap resource: tile2.bmp (offset 1050:1538).

void * __cdecl16far global_alloc_zero_init_safe(uint param_1,int param_2,uint param_3)
{
  undefined2 *puVar1;
  uint size;
  uint16_t flags;
  HGLOBAL16 handle;
  int iVar2;
  void *unaff_SI;
  void *pvVar3;
  undefined2 *puVar4;
  undefined2 unaff_CS;
  bool bVar5;
  void *fVar6;
  uint uVar6;
  HGLOBAL16 handle_00;
  
  do
  {
    size = (uint)((ulong)param_1 * (ulong)param_3);
    flags = param_2 * param_3 + (int)((ulong)param_1 * (ulong)param_3 >> 0x10);
    if (flags != 0x0 || size != 0x0)
    {
      pvVar3 = NULL;
      if ((flags < 0x3) && ((flags < 0x2 || (size == 0x0))))
      {
        if (flags == 0x0)
        {
          size = size + 0xfff & 0xf000;
          if (size == 0x0)
          {
            flags = 0x1;
          }
        }
        else if ((param_3 - 0x1 & param_3) != 0x0)
        {
          pvVar3 = (void *)(void *)(((ulong)flags << 0x10) % (ulong)param_3);
          bVar5 = CARRY2(size,(uint)pvVar3);
          size += (int)pvVar3;
          if (bVar5) goto LAB_1000_41aa;
          flags = 0x1;
        }
      }
      else if ((param_3 - 0x1 & param_3) != 0x0) goto LAB_1000_41aa;
      uVar6 = 0x0;
      handle = GlobalAlloc16(size,flags);
      if ((handle != 0x0) && ((uVar6 & 0x1) != 0x0))
      {
        handle_00 = handle;
        fVar6 = GlobalLock16(handle);
        if (((int)fVar6 != 0x0) || (fVar6 == NULL))
        {
          fatal_app_exit_with_message_lookup_and_terminate(handle_00);
          return pvVar3;
        }
        handle = handle_table_add_entry_internal((int)((ulong)fVar6 >> 0x10),handle);
        if (handle == 0x0)
        {
          GlobalUnlock16(handle_00);
          GlobalFree16(handle_00);
          handle = 0x0;
        }
      }
      unaff_CS = 0x1538;
      if (handle != 0x0)
      {
        puVar4 = NULL;
        for (; flags != 0x0; flags -= 0x1)
        {
          for (iVar2 = -0x8000; iVar2 != 0x0; iVar2 += -0x1)
          {
            puVar1 = puVar4;
            puVar4 = puVar4 + 0x1;
            *puVar1 = 0x0;
          }
          handle += 0x100;
        }
        if (size != 0x0)
        {
          for (; size != 0x0; size -= 0x1)
          {
            puVar1 = puVar4;
            puVar4 = (undefined2 *)((int)puVar4 + 0x1);
            *(undefined1 *)puVar1 = 0x0;
          }
        }
        return unaff_SI;
      }
    }
LAB_1000_41aa:
    if (p_GlobalAllocHook_Segment == NULL && p_GlobalAllocHook_Callback == NULL)
    {
      return unaff_SI;
    }
    iVar2 = (*(code *)p_GlobalAllocHook_Callback)(unaff_CS,param_3,param_1,param_2);
    if (iVar2 == 0x0)
    {
      return unaff_SI;
    }
  } while( true );
}



// Targeted Scan Finding: Far Pointer
// References global handle table tracking pointers in segment 1050:
// - PTR_DAT_1050_6192
// - PTR_DAT_1050_6190
// - PTR_DAT_1050_6194.

int __cdecl16near handle_table_remove_entry_internal(int handle_id)
{
  undefined2 uVar1;
  undefined4 uStack_6;
  
  uStack_6 = (int *)CONCAT22(p_GlobalHandleTable_Segment,p_GlobalHandleTable_Base);
  while( true )
  {
    if (p_GlobalHandleTable_Base + ((uint)g_GlobalHandleTable_Size & 0xfffc) <=
        (int *)uStack_6)
    {
      return 0x0;
    }
    uVar1 = (undefined2)((ulong)uStack_6 >> 0x10);
    if (*uStack_6 == handle_id) break;
    uStack_6 = (int *)CONCAT22(uVar1,(int *)uStack_6 + 0x2);
  }
  *uStack_6 = 0x0;
  return ((int *)uStack_6)[0x1];
}



// Targeted Scan Finding: Far Pointer
// Updates global handle table tracking pointers in segment 1050:
// - PTR_DAT_1050_6192
// - PTR_DAT_1050_6190
// - PTR_DAT_1050_6194.

int __cdecl16near handle_table_add_entry_internal(int handle_id,int os_handle)
{
  int *piVar1;
  undefined *puVar2;
  undefined *value;
  undefined2 uVar3;
  long new_size;
  undefined4 uStack_6;
  
  uStack_6 = (int *)CONCAT22(p_GlobalHandleTable_Segment,p_GlobalHandleTable_Base);
  while( true )
  {
    if (p_GlobalHandleTable_Base + ((uint)g_GlobalHandleTable_Size & 0xfffc) <=
        (int *)uStack_6)
    {
      new_size = CONCAT22(g_GlobalHandleTable_Size + 0x28,
                          g_GlobalHandleTable_Size + 0x28);
      value = p_GlobalHandleTable_Segment;
      puVar2 = heap_realloc_or_free(p_GlobalHandleTable_Base,new_size);
      if (value == NULL && puVar2 == NULL)
      {
        handle_id = 0x0;
      }
      else
      {
        piVar1 = (int *)(puVar2 + ((uint)g_GlobalHandleTable_Size & 0xfffc));
        uStack_6 = (int *)CONCAT22(value,piVar1);
        p_GlobalHandleTable_Base = puVar2;
        p_GlobalHandleTable_Segment = value;
        *uStack_6 = handle_id;
        piVar1[0x1] = os_handle;
        g_GlobalHandleTable_Size = (undefined *)((ulong)new_size >> 0x10);
        memset_far(piVar1 + 0x2,(int)value,0x0);
      }
      return handle_id;
    }
    uVar3 = (undefined2)((ulong)uStack_6 >> 0x10);
    if (*uStack_6 == 0x0) break;
    uStack_6 = (int *)CONCAT22(uVar3,(int *)uStack_6 + 0x2);
  }
  ((int *)uStack_6)[0x1] = os_handle;
  *uStack_6 = handle_id;
  return handle_id;
}



// Low-level DOS routine to get or set file attributes (Interrupt 0x21, function 0x43).
// It saves and restores certain state around the call and handles internal error flags.

int __cdecl16far dos_get_set_file_attributes_internal_far(void *regs_in,void *regs_out)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  undefined2 unaff_DI;
  int *piVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  int *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  
  uVar12 = *_regs_in;
  iVar9 = *(int *)((int)regs_in + 0x2);
  iVar7 = *(int *)((int)regs_in + 0x4);
  uVar8 = *(undefined2 *)((int)regs_in + 0x6);
  iVar1 = *(int *)((int)regs_in + 0x8);
  iVar2 = *(int *)((int)regs_in + 0xa);
  uVar11 = (undefined2)((ulong)in_stack_0000000c >> 0x10);
  uVar3 = *in_stack_0000000c;
  uVar4 = ((undefined2 *)in_stack_0000000c)[0x3];
  uVar13 = 0x0;
  if (true)
  {
    pcVar5 = (code *)swi(0x21);
    uVar14 = (*pcVar5)();
  }
  else
  {
    Dos3Call((dword *)CONCAT22(unaff_DI,(dword *)&g_HeapContext));
    uVar14 = CONCAT22(uVar8,uVar12);
  }
  iVar6 = (int)uVar14;
  *in_stack_0000000c = uVar3;
  ((undefined2 *)in_stack_0000000c)[0x3] = uVar4;
  uVar12 = (undefined2)((ulong)in_stack_00000008 >> 0x10);
  piVar10 = (int *)in_stack_00000008;
  *in_stack_00000008 = iVar6;
  piVar10[0x1] = iVar9;
  piVar10[0x2] = iVar7;
  piVar10[0x3] = (int)((ulong)uVar14 >> 0x10);
  piVar10[0x4] = iVar1;
  piVar10[0x5] = iVar2;
  if ((bool)uVar13)
  {
    set_internal_error_code_wrapper_far();
    iVar6 = *in_stack_00000008;
  }
  piVar10[0x6] = (uint)(byte)uVar13;
  return iVar6;
}



// Retrieves the current DOS system time and date (Interrupt 0x21, functions 0x2A/0x2C),
// converts it to a normalized internal representation using `FUN_1000_462e`, and stores
// it in the provided structure.

void __cdecl16far dos_get_system_time_to_internal_struct_far(void *time_struct)
{
  code *pcVar1;
  uint min;
  int iVar2;
  uint in_CX;
  uint uVar3;
  uint in_DX;
  uint extraout_DX;
  uint extraout_DX_00;
  uint extraout_DX_01;
  uint uVar4;
  void *unaff_SI;
  int in_stack_00000006;
  void *pvVar5;
  ulong uVar6;
  uint sec;
  
  pvVar5 = (void *)CONCAT22(0x1050,unaff_SI);
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    in_DX = extraout_DX;
  }
  else
  {
    Dos3Call(pvVar5);
  }
  uVar3 = in_CX;
  uVar4 = in_DX;
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    in_DX = extraout_DX_00;
  }
  else
  {
    Dos3Call(pvVar5);
  }
  sec = in_DX >> 0x8;
  min = uVar3 & 0xff;
  pvVar5 = (void *)CONCAT22((void *)(uVar3 >> 0x8),(void *)(uVar3 >> 0x8));
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    in_DX = extraout_DX_01;
  }
  else
  {
    Dos3Call(pvVar5);
  }
  if ((uVar4 != in_DX) && ((char)pvVar5 == '\x17'))
  {
    uVar3 = in_CX;
    in_DX = uVar4;
  }
  uVar6 = CONCAT22((int)((ulong)pvVar5 >> 0x10),in_DX) & 0xffff00ff;
  iVar2 = convert_datetime_to_unix_timestamp_internal_far_maybe
                    (uVar3 - 0x7bc,in_DX >> 0x8,(int)uVar6,(int)(uVar6 >> 0x10),min,sec)
  ;
  if (in_stack_00000006 != 0x0)
  {
    *(uint *)((int)time_struct + 0x2) = in_DX;
    *_time_struct = iVar2;
  }
  return;
}



// Targeted Scan Finding: Far Pointer
// References global timezone initialization flag at 1050:68b4.

void __cdecl16far init_timezone_environment_vars_wrapper_far(void)
{
  if (g_TimezoneInitialized == NULL)
  {
    parse_tz_environment_variable_internal_far();
    g_TimezoneInitialized = g_TimezoneInitialized + 0x1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References string resource at offset 0x61ca (likely "TZ" environment name).
// Extensive updates to global timezone data in segment 1050:
// - PTR_DAT_1050_61de
// - PTR_DAT_1050_61dc
// - PTR_DAT_1050_61d0
// - DAT_1050_61ce
// - DAT_1050_61d2
// - PTR_DAT_1050_61e0.

void __cdecl16far parse_tz_environment_variable_internal_far(void)
{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int in_DX;
  undefined2 uVar5;
  long lVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 uStack_8;
  
  pcVar2 = getenv_wrapper_far_ptr_search((char *)0x61ca);
  uStack_8 = (char *)CONCAT22(in_DX,pcVar2);
  if ((in_DX != 0x0 || pcVar2 != NULL) && (*uStack_8 != '\0'))
  {
    strncpy_fixed_optimized
              ((char *)CONCAT22(g_TimezoneName_Segment,g_TimezoneName_Offset),
               (char *)CONCAT22(in_DX,pcVar2),0x3);
    uStack_8 = (char *)CONCAT22(in_DX,pcVar2 + 0x3);
    cVar1 = *uStack_8;
    if (cVar1 == '-')
    {
      uStack_8 = (char *)CONCAT22(in_DX,pcVar2 + 0x4);
    }
    uVar5 = 0x0;
    uVar8 = 0x0;
    uVar7 = 0xe10;
    iVar3 = atoi_wrapper_far((char *)uStack_8);
    lVar6 = mul_u32_u32_standard(CONCAT22(uVar5,iVar3),CONCAT22(uVar8,uVar7));
    g_TimezoneOffset_High = (undefined *)((ulong)lVar6 >> 0x10);
    g_TimezoneOffset_Low = (u16)lVar6;
    while( true )
    {
      uVar5 = (undefined2)((ulong)uStack_8 >> 0x10);
      if ((*uStack_8 != '+') && ((*uStack_8 < '0' || ('9' < *uStack_8)))) break;
      uStack_8 = (char *)CONCAT22(uVar5,(char *)uStack_8 + 0x1);
    }
    if (*uStack_8 == ':')
    {
      uVar7 = 0x0;
      uVar9 = 0x0;
      uVar8 = 0x3c;
      uStack_8._0_2_ = (char *)uStack_8 + 0x1;
      uStack_8 = (char *)CONCAT22(uVar5,(char *)uStack_8);
      iVar3 = atoi_wrapper_far((char *)uStack_8);
      lVar6 = mul_u32_u32_standard(CONCAT22(uVar7,iVar3),CONCAT22(uVar9,uVar8));
      iVar3 = (int)((ulong)lVar6 >> 0x10);
      lVar6 += CONCAT22(g_TimezoneOffset_High,g_TimezoneOffset_Low);
      g_TimezoneOffset_Low = (u16)lVar6;
      g_TimezoneOffset_High = (undefined *)((ulong)lVar6 >> 0x10);
      while( true )
      {
        uVar5 = (undefined2)((ulong)uStack_8 >> 0x10);
        if ((*uStack_8 < '0') || ('9' < *uStack_8)) break;
        uStack_8 = (char *)CONCAT22(uVar5,(char *)uStack_8 + 0x1);
      }
      if (*uStack_8 == ':')
      {
        uStack_8._0_2_ = (char *)uStack_8 + 0x1;
        uStack_8 = (char *)CONCAT22(uVar5,(char *)uStack_8);
        uVar4 = atoi_wrapper_far((char *)uStack_8);
        while ((lVar6 = CONCAT22(g_TimezoneOffset_High +
                                 (uint)CARRY2(g_TimezoneOffset_Low,uVar4) + iVar3,
                                 g_TimezoneOffset_Low + uVar4), '/' < *uStack_8 &&
               (lVar6 = CONCAT22(g_TimezoneOffset_High +
                                 (uint)CARRY2(g_TimezoneOffset_Low,uVar4) + iVar3,
                                 g_TimezoneOffset_Low + uVar4), *uStack_8 < ':')))
        {
          uStack_8 = (char *)CONCAT22(uStack_8._2_2_,(char *)uStack_8 + 0x1);
        }
      }
    }
    g_TimezoneOffset_High = (undefined *)((ulong)lVar6 >> 0x10);
    g_TimezoneOffset_Low = (u16)lVar6;
    if (cVar1 == '-')
    {
      lVar6 = CONCAT22(-(int)(g_TimezoneOffset_High + (g_TimezoneOffset_Low != 0x0)),
                       -g_TimezoneOffset_Low);
    }
    g_TimezoneOffset_High = (undefined *)((ulong)lVar6 >> 0x10);
    g_TimezoneOffset_Low = (u16)lVar6;
    u16_1050_61d2 = (u16)*uStack_8;
    if (u16_1050_61d2 == 0x0)
    {
      *_g_DSTName_Offset = '\0';
    }
    else
    {
      strncpy_fixed_optimized(_g_DSTName_Offset,uStack_8,0x3);
    }
  }
  return;
}



// Internal routine to determine if a given date/time falls within daylight savings time
// based on the parsed "TZ" rules. Returns 1 if active, 0 otherwise.

int __cdecl16far is_daylight_savings_active_internal_far(void *date_struct)
{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined2 in_stack_00000006;
  int iStack_6;
  
  if (((*(int *)((int)date_struct + 0xa) < 0x43) ||
      (*(int *)((int)date_struct + 0x8) < 0x3)) ||
     (0x9 < *(int *)((int)date_struct + 0x8))) goto LAB_1000_4623;
  if ((*(int *)((int)date_struct + 0x8) < 0x4) ||
     (0x8 < *(int *)((int)date_struct + 0x8)))
  {
    uVar1 = *(uint *)((int)date_struct + 0xa);
    if (((int)uVar1 < 0x57) || (*(int *)((int)date_struct + 0x8) != 0x3))
    {
      iStack_6 = *(int *)(*(int *)((int)date_struct + 0x8) * 0x2 + 0x61b2);
    }
    else
    {
      iStack_6 = *(int *)((int)(dword *)&g_MonthDaysLookupTable +
                         *(int *)((int)date_struct + 0x8) * 0x2 + 0x2) + 0x7;
    }
    if ((uVar1 & 0x3) == 0x0)
    {
      iStack_6 += 0x1;
    }
    uVar1 = (uVar1 - 0x46) * 0x16d + ((int)(uVar1 - 0x1) >> 0x2) + iStack_6;
    lVar3 = div_i32_i32_standard
                      (CONCAT22(((int)uVar1 >> 0xf) - (uint)(uVar1 < 0xd),uVar1 - 0xd),
                       0x7);
    iStack_6 = (int)lVar3 - iStack_6;
    iVar2 = -iStack_6;
    if (*(int *)((int)date_struct + 0x8) == 0x3)
    {
      if ((iVar2 < *(int *)((int)date_struct + 0xe)) ||
         ((-*(int *)((int)date_struct + 0xe) == iStack_6 &&
          (0x1 < *(int *)((int)date_struct + 0x4))))) goto LAB_1000_460e;
    }
    else if ((*(int *)((int)date_struct + 0xe) < iVar2) ||
            ((*(int *)((int)date_struct + 0xe) == iVar2 &&
             (*(int *)((int)date_struct + 0x4) < 0x1)))) goto LAB_1000_460e;
LAB_1000_4623:
    iVar2 = 0x0;
  }
  else
  {
LAB_1000_460e:
    iVar2 = 0x1;
  }
  return iVar2;
}



// Targeted Scan Finding: Far Pointer
// References date lookup table at offset 0x61ae.
// References global timezone offset data in segment 1050:
// - PTR_DAT_1050_61d0
// - DAT_1050_61ce
// - DAT_1050_61d2.

int __cdecl16far
convert_datetime_to_unix_timestamp_internal_far_maybe
          (int year,int month,int day,int hour,int min,int sec)
{
  uint uVar1;
  int unaff_BP;
  int iVar2;
  long lVar3;
  long factor2;
  long factor2_00;
  int iStack_1a;
  undefined1 local_16 [0x4];
  int iStack_12;
  int iStack_e;
  int iStack_c;
  int iStack_8;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 0x1;
  local_4 = 0x1050;
  iVar2 = *(int *)((int)(dword *)&g_MonthDaysLookupTable + month * 0x2);
  if (((year & 0x3U) == 0x0) && (0x2 < month))
  {
    iVar2 += 0x1;
  }
  init_timezone_environment_vars_wrapper_far();
  factor2_00 = 0x3c;
  factor2 = 0x3c;
  uVar1 = year + 0x3 >> 0x2;
  lVar3 = mul_u32_u32_standard
                    ((long)year * 0x16d +
                     CONCAT22((year + 0x3 >> 0xf) + (day >> 0xf) +
                              (uint)CARRY2(uVar1,day),uVar1 + day) + (long)iVar2 + 0xe44
                     ,0x18);
  lVar3 = mul_u32_u32_standard(lVar3 + hour,factor2);
  lVar3 = mul_u32_u32_standard(lVar3 + min,factor2_00);
  iStack_1a = (int)(lVar3 + sec + CONCAT22(g_TimezoneOffset_High,g_TimezoneOffset_Low));
  iStack_8 = day + iVar2;
  iStack_c = year + 0x50;
  iStack_e = month + -0x1;
  iStack_12 = hour;
  if (u16_1050_61d2 != 0x0)
  {
    iVar2 = is_daylight_savings_active_internal_far(local_16);
    if (iVar2 != 0x0)
    {
      iStack_1a += -0xe10;
    }
  }
  return iStack_1a;
}



// Searches for the first occurrence of a character `param_2` in the string `param_1`.
// Optimized for far pointers, it first finds the string length and then performs the
// search. Returns a pointer to the character or NULL if not found.

char * __cdecl16far strchr_far_optimized(char *str,char character)
{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined1 in_stack_00000007;
  char in_stack_00000008;
  
  _str = CONCAT13(in_stack_00000007,CONCAT12(character,str));
  uVar4 = (undefined2)((ulong)_str >> 0x10);
  bVar5 = true;
  uVar2 = 0xffff;
  pcVar3 = str;
  do
  {
    if (uVar2 == 0x0) break;
    uVar2 -= 0x1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 0x1;
    bVar5 = *pcVar1 == '\0';
  } while (!bVar5);
  uVar2 = ~uVar2;
  do
  {
    if (uVar2 == 0x0) break;
    uVar2 -= 0x1;
    pcVar1 = str;
    str = str + 0x1;
    bVar5 = in_stack_00000008 == *pcVar1;
  } while (!bVar5);
  if (!bVar5)
  {
    if (in_stack_00000008 != '\0')
    {
      return NULL;
    }
    str = str + 0x1;
  }
  return str + -0x1;
}



// Compares two far-pointer strings `param_1` and `param_2` without regard to case.
// Converts both to uppercase before comparing each character. Returns 0 if equal, -1 if
// `param_1` < `param_2`, or 1 if `param_1` > `param_2`.

int __cdecl16far stricmp_case_insensitive_far(char *str1,char *str2)
{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  byte *in_stack_00000008;
  
  pbVar5 = (byte *)in_stack_00000008;
  bVar3 = 0xff;
  do
  {
    do
    {
      cVar4 = '\0';
      if (bVar3 == 0x0) goto LAB_1000_479d;
      pbVar1 = pbVar5;
      pbVar5 = pbVar5 + 0x1;
      bVar3 = *pbVar1;
      pbVar1 = (byte *)str1;
      str1 = (char *)((byte *)str1 + 0x1);
    } while (*pbVar1 == bVar3);
    bVar2 = bVar3 + 0xbf + (-((byte)(bVar3 + 0xbf) < 0x1a) & 0x20U) + 0x41;
    bVar3 = *pbVar1 + 0xbf;
    bVar3 = bVar3 + (-(bVar3 < 0x1a) & 0x20U) + 0x41;
  } while (bVar3 == bVar2);
  cVar4 = (bVar3 < bVar2) * -0x2 + '\x01';
LAB_1000_479d:
  return (int)cVar4;
}
