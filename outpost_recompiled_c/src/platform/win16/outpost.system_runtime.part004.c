/*
 * Source: outpost.c
 * Theme: system_runtime
 * Chunk: 4/4
 * Original lines (combined): 8494-46762
 * Boundaries: top-level declarations/definitions only
 */




// Targeted Scan Finding: Far Pointer / Vtable
// Initializes far pointer ptr2 to 1050:1050.
// Performs multiple indirect calls through function pointers on the stack
// (in_stack_0000000c, offset 0x16).
// Handles 16-bit segment increments (0x6C) when traversing far-pointer arrays.

void __cdecl16far
qsort_far_array_with_callback_internal
          (void *base,int num_elements,int element_size,void *compare_func)
{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  void *ptr1;
  int iVar12;
  undefined2 reg_ss;
  dword *ptr2;
  bool bVar13;
  code *in_stack_0000000c;
  void *pvStack_16;
  uint uVar14;
  void *pvStack_12;
  uint uStack_10;
  void *pvStack_e;
  uint uStack_c;
  
  ptr2 = (dword *)&g_HeapContext;
  if ((compare_func != NULL) &&
     (pvVar11 = base, uStack_c = num_elements, iVar5 = element_size, element_size != 0x0
     ))
  {
    do
    {
      pvStack_e = pvVar11;
      iVar5 += -0x1;
      if (iVar5 == 0x0)
      {
        return;
      }
      pvVar11 = (void *)((int)pvStack_e + (int)compare_func);
      iVar12 = uStack_c + (-(uint)CARRY2((uint)pvStack_e,(uint)compare_func) & 0x6c);
      pvStack_12 = pvVar11;
      uStack_10 = iVar12;
      iVar3 = (*in_stack_0000000c)();
      uStack_c = iVar12;
    } while (-0x1 < iVar3);
    uVar4 = element_size - 0x1;
    iVar5 = 0x0;
    do
    {
      uVar4 >>= 0x1;
      iVar5 += -0x1;
    } while (iVar5 != 0x0 && uVar4 != 0x0);
    if ((int)((ulong)(uint)-iVar5 * 0x8 >> 0x10) == 0x0)
    {
      uStack_c = 0x4b4b;
      uVar4 = get_stack_space_available_bytes();
      if ((uint)((ulong)(uint)-iVar5 * 0x8) <= uVar4)
      {
        puVar8 = &stack0xfff6;
        pvVar1 = (void *)((ulong)(element_size - 0x1) * ZEXT24(compare_func) +
                         ZEXT24(base));
        pvStack_e = (void *)pvVar1;
        uStack_c = (int)((ulong)pvVar1 >> 0x10) * 0x100 + num_elements;
        uStack_10 = num_elements;
        pvStack_12 = base;
LAB_1000_4b7d:
        pvVar11 = pvStack_e;
        uVar4 = uStack_c;
        if (puVar8 <= &pvStack_12)
        {
          return;
        }
LAB_1000_4b81:
        uStack_c = uVar4;
        pvStack_e = pvVar11;
        if ((uStack_10 < uStack_c) ||
           ((uStack_10 == uStack_c && (pvStack_12 < pvStack_e))))
        {
          pvStack_16 = pvStack_e;
          pvVar7 = (void *)((int)pvStack_e + *(uint *)(puVar8 + 0x14));
          uVar6 = uStack_c +
                  (-(uint)CARRY2((uint)pvStack_e,*(uint *)(puVar8 + 0x14)) & 0x6c);
          uVar9 = uStack_10;
          ptr1 = pvStack_12;
          pvVar11 = pvStack_12;
          uVar4 = uStack_10;
          uVar10 = uStack_c;
          do
          {
            while( true )
            {
              bVar13 = CARRY2((uint)ptr1,*(uint *)(puVar8 + 0x14));
              ptr1 = (void *)((int)ptr1 + *(uint *)(puVar8 + 0x14));
              uVar9 += -(uint)bVar13 & 0x6c;
              pvVar2 = pvStack_16;
              if ((ptr1 == pvStack_e) && (uVar9 == uStack_c)) break;
              iVar5 = (**(code **)(puVar8 + 0x16))();
              if (0x0 < iVar5) break;
              if (iVar5 != 0x0)
              {
                pvVar11 = ptr1;
                uVar4 = uVar9;
              }
            }
            do
            {
              uVar14 = uVar10;
              pvStack_16 = pvVar2;
              bVar13 = pvVar7 < *(void **)(puVar8 + 0x14);
              pvVar7 = (void *)((int)pvVar7 - *(uint *)(puVar8 + 0x14));
              uVar6 -= -(uint)bVar13 & 0x6c;
              iVar5 = (**(code **)(puVar8 + 0x16))();
              if (0x0 < iVar5) break;
              pvVar2 = pvVar7;
              uVar10 = uVar6;
            } while (((iVar5 != 0x0) ||
                     (pvVar2 = pvStack_16, uVar10 = uVar14, pvVar7 != pvStack_12)) ||
                    (uVar6 != uStack_10));
            if ((uVar6 < uVar9) || ((uVar6 == uVar9 && (pvVar7 <= ptr1))))
            goto LAB_1000_4c58;
            mem_swap_bytes_internal(ptr2,pvVar11,uVar4);
            pvVar11 = ptr1;
            uVar4 = uVar9;
            uVar10 = uVar6;
            pvStack_16 = pvVar7;
          } while( true );
        }
        goto LAB_1000_4b7d;
      }
    }
    uStack_c = 0x4b7b;
    runtime_stack_check_fail_handler();
  }
  return;
LAB_1000_4c58:
  mem_swap_bytes_internal(ptr1,ptr2,(int)pvVar11);
  uVar10 = ((uStack_c - (-(uint)(pvStack_e < pvStack_16) & 0x6c)) - uVar14) +
           (-(uint)CARRY2((int)pvStack_e - (int)pvStack_16,(uint)pvStack_12) & 0x6c) +
           uStack_10;
  uVar9 = -(uint)((void *)(((int)pvStack_e - (int)pvStack_16) + (int)pvStack_12) <
                 pvVar11) & 0x6c;
  if ((uVar9 <= uVar10) && (uVar4 <= uVar10 - uVar9))
  {
    pvStack_12 = pvStack_16;
    uStack_10 = uVar14;
    pvVar11 = pvStack_e;
    uVar4 = uStack_c;
  }
  goto LAB_1000_4b81;
}



// Swaps two memory blocks of length `swap_len` pointed to by `SI` and `DI`. Used
// internally by sorting algorithms like quicksort. Handles both byte and word-aligned
// swaps.

void __cdecl16near mem_swap_bytes_internal(void *ptr1,void *ptr2,int size)
{
  undefined1 uVar1;
  undefined2 uVar2;
  uint swap_len;
  int reg_si;
  int reg_di;
  undefined2 reg_es;
  
  if ((swap_len & 0x1) != 0x0)
  {
    swap_len -= 0x1;
    LOCK();
    uVar1 = *(undefined1 *)(swap_len + reg_di);
    *(undefined1 *)(swap_len + reg_di) = *(undefined1 *)(swap_len + reg_si);
    UNLOCK();
    *(undefined1 *)(swap_len + reg_si) = uVar1;
    if (swap_len == 0x0)
    {
      return;
    }
  }
  do
  {
    swap_len -= 0x2;
    LOCK();
    uVar2 = *(undefined2 *)(swap_len + reg_di);
    *(undefined2 *)(swap_len + reg_di) = *(undefined2 *)(swap_len + reg_si);
    UNLOCK();
    *(undefined2 *)(swap_len + reg_si) = uVar2;
  } while (swap_len != 0x0);
  return;
}



void error_sync_with_dos(int err_code)
{
  code *pcVar1;
  undefined1 uVar2;
  u16 uVar3;
  
  uVar3 = 0x1050;
  uVar2 = 0x0;
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else
  {
    Dos3Call(&g_HeapContext);
  }
  check_error_flag_and_set_internal_err_u16(uVar3,err_code,(bool)uVar2);
  return;
}



// Deletes a file using DOS interrupt 0x21, function 0x41. Updates internal error flags
// on failure.

int dos_delete_file_internal_far(char *filename)
{
  code *pcVar1;
  int iVar2;
  u8 uVar3;
  int in_stack_00000000;
  u16 uVar4;
  
  uVar4 = 0x1050;
  uVar3 = '\0';
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else
  {
    Dos3Call(&g_HeapContext);
  }
  iVar2 = check_error_flag_and_set_internal_err_u16(uVar4,in_stack_00000000,(bool)uVar3)
  ;
  return iVar2;
}



void file_error_sync_with_dos(u16 param_1,u32 param_2,int param_3)
{
  char cVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined4 uVar8;
  u16 uVar9;
  
  uVar3 = 0x3a50;
  uVar9 = 0x1050;
  uVar4 = (undefined2)param_2;
  uVar6 = 0x0;
  if (true)
  {
    pcVar2 = (code *)swi(0x21);
    uVar8 = (*pcVar2)();
  }
  else
  {
    Dos3Call(&g_HeapContext);
    uVar8 = CONCAT22(uVar4,uVar3);
  }
  pcVar5 = (char *)((ulong)uVar8 >> 0x10);
  bVar7 = false;
  if (((bool)uVar6) && (bVar7 = (uint)uVar8 < 0x10, (uint)uVar8 == 0x10))
  {
    while( true )
    {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 0x1;
      if (cVar1 == '\0') break;
      if ((cVar1 == '?') || (cVar1 == '*')) break;
    }
    bVar7 = true;
  }
  check_error_flag_and_set_internal_err_u16(uVar9,param_3,bVar7);
  return;
}



// Retrieves the current DOS drive number (0=A, 1=B, etc.) using Interrupt 0x21,
// function 0x19. Returns the drive number plus 1.

int __cdecl16far dos_get_current_drive_number_internal_far(void)
{
  code *pcVar1;
  byte bVar2;
  int reg_bp;
  
  bVar2 = 0x50;
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    bVar2 = (*pcVar1)();
  }
  else
  {
    Dos3Call((dword *)CONCAT22(reg_bp + 0x1,(dword *)&g_HeapContext));
  }
  return bVar2 + 0x1;
}



void __cdecl16far dos_get_cwd_on_current_drive_wrapper_far(char *buffer,int max_len)
{
  dos_get_cwd_internal_far_with_alloc_logic(0x0,buffer,max_len);
  return;
}



// Removes a directory using DOS interrupt 0x21, function 0x3A. Updates internal error
// flags on failure.

int dos_remove_directory_internal_far(char *dir_path)
{
  code *pcVar1;
  int iVar2;
  undefined1 uVar3;
  int in_stack_00000000;
  u16 uVar4;
  
  uVar4 = 0x1050;
  uVar3 = 0x0;
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else
  {
    Dos3Call(&g_HeapContext);
  }
  iVar2 = check_error_flag_and_set_internal_err_u16(uVar4,in_stack_00000000,(bool)uVar3)
  ;
  return iVar2;
}



// A generic wrapper for a DOS interrupt 0x21 call. It executes the interrupt and then
// updates internal error flags based on the Carry bit, returning the result in `AL`.

byte dos_interrupt_call_u8_wrapper(void)
{
  code *pcVar1;
  byte bVar2;
  u16 uVar3;
  int reg_bp;
  undefined1 uVar4;
  byte in_stack_00000000;
  
  uVar3 = 0x6850;
  uVar4 = 0x0;
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
  }
  else
  {
    Dos3Call((dword *)CONCAT22(reg_bp + 0x1,(dword *)&g_HeapContext));
  }
  bVar2 = check_error_flag_and_set_internal_err_u8_2
                    (in_stack_00000000,uVar3,(bool)uVar4);
  return bVar2;
}



// Standard 32-bit signed division/modulo routine. It handles signs before and after the
// calculation.

long __stdcall16far div_i32_i32_standard(long dividend,long divisor)
{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  bVar11 = dividend < 0x0;
  if (bVar11)
  {
    dividend = CONCAT22(-(uint)((uint)dividend != 0x0) - dividend._2_2_,-(uint)dividend)
    ;
  }
  uVar10 = (uint)bVar11;
  uVar3 = divisor._2_2_;
  if (divisor < 0x0)
  {
    uVar3 = -(uint)((uint)divisor != 0x0) - divisor._2_2_;
    divisor = CONCAT22(uVar3,-(uint)divisor);
  }
  uVar4 = (uint)dividend;
  uVar5 = (uint)divisor;
  uVar9 = dividend._2_2_;
  if (uVar3 == 0x0)
  {
    iVar6 = (int)(((ulong)dividend._2_2_ % (divisor & 0xffffU) << 0x10 |
                  dividend & 0xffffU) % (divisor & 0xffffU));
    iVar7 = 0x0;
    if ((int)(uVar10 - 0x1) < 0x0) goto LAB_1000_538a;
  }
  else
  {
    do
    {
      uVar8 = uVar3 & 0x1;
      uVar3 >>= 0x1;
      uVar5 = uVar5 >> 0x1 | (uint)(uVar8 != 0x0) << 0xf;
      uVar8 = uVar9 >> 0x1;
      uVar4 = uVar4 >> 0x1 | (uint)((uVar9 & 0x1) != 0x0) << 0xf;
      uVar9 = uVar8;
    } while (uVar3 != 0x0);
    uVar1 = CONCAT22(uVar8,uVar4) / (ulong)uVar5;
    uVar3 = (int)uVar1 * divisor._2_2_;
    lVar2 = (uVar1 & 0xffff) * (divisor & 0xffffU);
    uVar5 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2;
    uVar9 = uVar5 + uVar3;
    if (((CARRY2(uVar5,uVar3)) || (dividend._2_2_ < uVar9)) ||
       ((dividend._2_2_ <= uVar9 && ((uint)dividend < uVar4))))
    {
      bVar11 = uVar4 < (uint)divisor;
      uVar4 -= (uint)divisor;
      uVar9 = (uVar9 - divisor._2_2_) - (uint)bVar11;
    }
    iVar6 = uVar4 - (uint)dividend;
    iVar7 = (uVar9 - dividend._2_2_) - (uint)(uVar4 < (uint)dividend);
    if (-0x1 < (int)(uVar10 - 0x1)) goto LAB_1000_538a;
  }
  bVar11 = iVar6 != 0x0;
  iVar6 = -iVar6;
  iVar7 = -(uint)bVar11 - iVar7;
LAB_1000_538a:
  return CONCAT22(iVar7,iVar6);
}



// A short wrapper for the fatal application exit routine.

void fatal_exit_shorthand(int error_code)
{
  fatal_app_exit_with_message_lookup_and_terminate(error_code);
  return;
}



// Appends a new 32-bit data point to the end of the history buffer. It automatically
// handles buffer expansion if necessary.

void __stdcall16far Data_History_Object_Append_Point(void *this,long value)
{
  undefined2 in_stack_00000006;
  
  Data_History_Object_Set_Point_At_Index(this,value,*(long *)((int)this + 0xa));
  return;
}



// Returns the major version number of the game (currently 3).

int __stdcall16far Get_Outpost_Version_Number(void)
{
  return 0x3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A complex routine that simulates market fluctuations. It adjusts an internal value
// (likely price or demand) at offset 0x142 based on current difficulty, randomized tick
// intervals, and game state. Handles both upward and downward trends.

void __stdcall16far UI_Trade_Manager_Randomized_Market_Fluctuation_Logic(long context)
{
  byte bVar1;
  uint uVar2;
  int iVar3;
  astruct_447 *uVar4;
  undefined2 uVar5;
  u32 uVar6;
  ulong uVar7;
  
  uVar5 = (undefined2)((ulong)context >> 0x10);
  uVar4 = (astruct_447 *)context;
  uVar2 = uVar4->field322_0x142 + 0x1e;
  if (uVar4->field323_0x144 + 0x1U == (uint)(uVar4->field322_0x142 < 0xffe2))
  {
    if (uVar2 != 0x3c)
    {
      if (0x3c < uVar2)
      {
        return;
      }
      bVar1 = (byte)uVar2;
      if (bVar1 == 0x14)
      {
        uVar4->field322_0x142 = 0xffec;
LAB_1018_3e3d:
        uVar4->field323_0x144 = -0x1;
        return;
      }
      if (0x14 < bVar1)
      {
        if (bVar1 == 0x1e)
        {
          if ((int)g_ModeVersion_13AE < 0x1)
          {
            return;
          }
          if (SBORROW2((int)g_ModeVersion_13AE,0x1))
          {
            return;
          }
          if ((undefined **)g_ModeVersion_13AE != (undefined **)&p_CurrentHeapContext &&
              0x0 < (int)(g_ModeVersion_13AE + -0x1))
          {
            if (g_ModeVersion_13AE ==
                (undefined *)((int)(undefined **)&p_CurrentHeapContext + 0x1))
            {
              iVar3 = random_int_range(0x1,0x64);
              if (iVar3 < 0x32)
              {
                uVar2 = 0xa;
              }
              else
              {
                uVar2 = 0xfff6;
              }
              uVar4->field322_0x142 = uVar2;
              uVar4->field323_0x144 = (int)uVar2 >> 0xf;
              return;
            }
            if ((u16 *)g_ModeVersion_13AE != (u16 *)&p_LastAllocatedBlock)
            {
              return;
            }
            uVar4->field322_0x142 = 0xfff6;
            goto LAB_1018_3e3d;
          }
          uVar4->field322_0x142 = 0xa;
        }
        else if (bVar1 == 0x28)
        {
          uVar4->field322_0x142 = 0x14;
        }
        else
        {
          if (bVar1 != 0x32)
          {
            return;
          }
          uVar4->field322_0x142 = 0x1e;
        }
        uVar4->field323_0x144 = 0x0;
        return;
      }
      if (bVar1 != 0x0)
      {
        if (bVar1 != 0xa)
        {
          return;
        }
        uVar4->field322_0x142 = 0xffe2;
        goto LAB_1018_3e3d;
      }
    }
    uVar7 = 0x5;
    uVar6 = Simulator_Global_Get_Current_Tick_8326();
    if (uVar6 % uVar7 == 0x0)
    {
      (&uVar4->field322_0x142)[0x0] = 0x0;
      (&uVar4->field322_0x142)[0x1] = 0x0;
      return;
    }
  }
  return;
}
