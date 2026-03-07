/*
 * Source: outpost.c
 * Theme: system_runtime
 * Chunk: 3/4
 * Original lines (combined): 6658-8493
 * Boundaries: top-level declarations/definitions only
 */




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



// Compares `param_3` bytes of memory at far pointers `param_1` and `param_2`. Handles
// segment boundaries by adjusting segment registers every 64KB (0x6C segment
// increment). Returns 0 if equal, or the difference between the first non-matching
// bytes.

int __cdecl16far memcmp_far_optimized_with_segments(void *ptr1,void *ptr2,int count)
{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int in_stack_0000000a;
  uint in_stack_0000000c;
  
  if (in_stack_0000000c == 0x0)
  {
    return 0x0;
  }
  do
  {
    uVar3 = ~count;
    uVar3 = ((in_stack_0000000c - 0x1) - uVar3 &
            -(uint)(in_stack_0000000c - 0x1 < uVar3)) + uVar3;
    uVar4 = ~(uint)ptr1;
    uVar3 = (uVar3 - uVar4 & -(uint)(uVar3 < uVar4)) + uVar4 + 0x1;
    bVar5 = in_stack_0000000c < uVar3;
    in_stack_0000000c -= uVar3;
    bVar6 = in_stack_0000000c == 0x0;
    do
    {
      if (uVar3 == 0x0) break;
      uVar3 -= 0x1;
      pbVar2 = (byte *)count;
      count += 0x1;
      pbVar1 = ptr1;
      ptr1 = (void *)((int)ptr1 + 0x1);
      bVar5 = *pbVar1 < *pbVar2;
      bVar6 = *pbVar1 == *pbVar2;
    } while (bVar6);
    if (!bVar6)
    {
      return (0x1 - (uint)bVar5) - (uint)(bVar5 != 0x0);
    }
    if (in_stack_0000000c == 0x0)
    {
      return uVar3;
    }
    if (ptr1 == NULL)
    {
      ptr2 = (void *)((int)ptr2 + 0x6c);
    }
    if ((byte *)count == NULL)
    {
      in_stack_0000000a += 0x6c;
    }
  } while( true );
}



void * __cdecl16far memset_far(void *dest,int value,int count)
{
  undefined2 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint in_stack_0000000a;
  
                // Far pointer memset - fills param_3 bytes at far pointer param_1 with
                // byte value param_2. Handles segment boundaries.
  if (in_stack_0000000a != 0x0)
  {
    uVar3 = -(int)dest;
    uVar5 = 0x0;
    uVar4 = in_stack_0000000a;
    if (uVar3 != 0x0)
    {
      uVar4 = (uVar3 - in_stack_0000000a & -(uint)(uVar3 < in_stack_0000000a)) +
              in_stack_0000000a;
      uVar5 = in_stack_0000000a - uVar4;
    }
    uVar2 = (undefined1)count;
    puVar6 = dest;
    for (uVar3 = uVar4 >> 0x1; uVar3 != 0x0; uVar3 -= 0x1)
    {
      puVar1 = puVar6;
      puVar6 = puVar6 + 0x1;
      *puVar1 = CONCAT11(uVar2,uVar2);
    }
    for (uVar4 = (uint)((uVar4 & 0x1) != 0x0); uVar4 != 0x0; uVar4 -= 0x1)
    {
      puVar1 = puVar6;
      puVar6 = (undefined2 *)((int)puVar6 + 0x1);
      *(undefined1 *)puVar1 = uVar2;
    }
    if (uVar5 != 0x0)
    {
      for (uVar4 = uVar5 >> 0x1; uVar4 != 0x0; uVar4 -= 0x1)
      {
        puVar1 = puVar6;
        puVar6 = puVar6 + 0x1;
        *puVar1 = CONCAT11(uVar2,uVar2);
      }
      for (uVar5 = (uint)((uVar5 & 0x1) != 0x0); uVar5 != 0x0; uVar5 -= 0x1)
      {
        puVar1 = puVar6;
        puVar6 = (undefined2 *)((int)puVar6 + 0x1);
        *(undefined1 *)puVar1 = uVar2;
      }
    }
  }
  return dest;
}



// Targeted Scan Finding: Far Pointer / Vtable
// Performs indirect call through in_stack_00000010 (comparison callback).
// Handles 16-bit MS-DOS segment increments (offset 0x6C) during array traversal.

void * __cdecl16far
bsearch_far_array_with_callback
          (void *key,void *base,int num_elements,int element_size,void *compare_func,
          u16 param_6,u16 param_7)
{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  void *pvStack_14;
  uint uStack_12;
  void *pvStack_8;
  uint uStack_6;
  
  pvStack_14 = (void *)num_elements;
  uStack_12 = element_size;
  lVar7 = mul_u32_u32_standard
                    (CONCAT22(-(uint)(compare_func == NULL),(int)compare_func + -0x1),
                     (ulong)param_6);
  pvStack_8 = (void *)(void *)(lVar7 + (ulong)(uint)num_elements);
  uStack_6 = (int)(lVar7 + (ulong)(uint)num_elements >> 0x10) * 0x100 + element_size;
  while( true )
  {
    if (uStack_6 < uStack_12)
    {
      return NULL;
    }
    if ((uStack_6 <= uStack_12) && (pvStack_8 < pvStack_14))
    {
      return NULL;
    }
    pvVar3 = (void *)((uint)compare_func >> 0x1);
    if (pvVar3 == NULL)
    {
      if ((compare_func != NULL) && (iVar5 = (*(code *)param_7)(), iVar5 == 0x0))
      {
        return pvStack_14;
      }
      return NULL;
    }
    pvVar4 = pvVar3;
    if (((uint)compare_func & 0x1) == 0x0)
    {
      pvVar4 = (void *)((int)pvVar3 - 0x1);
    }
    pvVar2 = (void *)(ZEXT24(pvVar4) * (ulong)param_6 + ZEXT24(pvStack_14));
    pvVar4 = (void *)pvVar2;
    iVar6 = (int)((ulong)pvVar2 >> 0x10) * 0x100 + uStack_12;
    iVar5 = (*(code *)param_7)();
    if (iVar5 == 0x0) break;
    if (iVar5 < 0x0)
    {
      pvStack_8 = (void *)(-param_6 + (int)pvVar4);
      uStack_6 = ((uint)CARRY2(-param_6,(uint)pvVar4) - (uint)(param_6 != 0x0)) * 0x100
                 + iVar6;
      uVar1 = (uint)compare_func & 0x1;
      compare_func = pvVar3;
      if (uVar1 == 0x0)
      {
        compare_func = (void *)((int)pvVar3 - 0x1);
      }
    }
    else
    {
      pvStack_14 = (void *)(param_6 + (int)pvVar4);
      uStack_12 = (uint)CARRY2(param_6,(uint)pvVar4) * 0x100 + iVar6;
      compare_func = pvVar3;
    }
  }
  return pvVar4;
}
