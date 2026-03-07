/*
 * Source: outpost.c
 * Chunk: 9/117
 * Original lines: 9240-10405
 * Boundaries: top-level declarations/definitions only
 */




// Executes a sequence of four DOS interrupt 0x21 calls. This is likely used for
// operations that require multiple step handshakes or flushes in DOS.

void dos_multiple_interrupt_call_wrapper(void)
{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  byte bVar4;
  char cVar5;
  char in_AF;
  char cVar6;
  char cVar7;
  byte in_stack_00000000;
  void *CONTEXT_ptr_context;
  dword *CONTEXT_ptr_context_00;
  
  CONTEXT_ptr_context_00 = &g_HeapContext;
  uVar2 = 0x4e;
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
  }
  else
  {
    Dos3Call(&g_HeapContext);
  }
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
  }
  else
  {
    Dos3Call(CONTEXT_ptr_context_00);
  }
  uVar3 = CONCAT11(uVar2,uVar2);
  bVar4 = 0x0;
  cVar7 = '\0';
  cVar6 = '\x01';
  cVar5 = '\x01';
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
  }
  else
  {
    Dos3Call(CONTEXT_ptr_context_00);
  }
  CONTEXT_ptr_context =
       (void *)CONCAT22(uVar3,(void *)CONCAT11(cVar7 << 0x7 | cVar6 << 0x6 |
                                               in_AF << 0x4 | cVar5 << 0x2 | 0x2U |
                                               bVar4,(char)uVar3));
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else
  {
    Dos3Call(CONTEXT_ptr_context);
  }
  check_error_flag_and_set_internal_err_u8_2
            (in_stack_00000000,(u16)((ulong)CONTEXT_ptr_context >> 0x10),
             ((ulong)CONTEXT_ptr_context & 0x100) != 0x0);
  return;
}



u32 __stdcall16far div_32bit_signed(uint param_1,uint param_2,uint param_3,uint param_4)
{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0x0;
  if ((bool)cVar11)
  {
    bVar10 = param_1 != 0x0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0x0)
  {
    cVar11 += '\x01';
    bVar10 = param_3 != 0x0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0x0)
  {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) /
                 (ulong)param_3);
  }
  else
  {
    do
    {
      uVar8 = uVar9 >> 0x1;
      uVar5 = uVar5 >> 0x1 | (uint)((uVar9 & 0x1) != 0x0) << 0xf;
      uVar7 = uVar6 >> 0x1;
      uVar3 = uVar3 >> 0x1 | (uint)((uVar6 & 0x1) != 0x0) << 0xf;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0x0);
    uVar1 = CONCAT22(uVar7,uVar3) / (ulong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar3 = (uint)((ulong)lVar2 >> 0x10);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY2(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2))))
    {
      iVar4 += -0x1;
    }
    uVar3 = 0x0;
  }
  if (cVar11 == '\x01')
  {
    bVar10 = iVar4 != 0x0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT22(uVar3,iVar4);
}



// Standard 32-bit unsigned multiplication routine for 16-bit environments. Returns the
// result in `DX:AX`.

long __stdcall16far mul_u32_u32_standard(long factor1,long factor2)
{
  if (factor2._2_2_ == 0x0 && factor1._2_2_ == 0x0)
  {
    return (factor1 & 0xffffU) * (factor2 & 0xffffU);
  }
  return factor2 * factor1;
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



// Standard 32-bit unsigned division/modulo routine. Returns the quotient in `DX:AX`.

long __stdcall16far div_u32_u32_standard(long dividend,long divisor)
{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = dividend;
  uVar3 = divisor;
  if (divisor._2_2_ == 0x0)
  {
    uVar4 = dividend._2_2_ / (uint)divisor;
    iVar5 = (int)(((ulong)dividend._2_2_ % (divisor & 0xffffU) << 0x10 |
                  dividend & 0xffffU) / (divisor & 0xffffU));
  }
  else
  {
    do
    {
      uVar6 = (uint)(uVar3 >> 0x11);
      uVar8 = (uint)uVar3 >> 0x1 | (uint)((uVar3 & 0x10000) != 0x0) << 0xf;
      uVar7 = (uint)(uVar1 >> 0x11);
      uVar4 = (uint)uVar1 >> 0x1 | (uint)((uVar1 & 0x10000) != 0x0) << 0xf;
      uVar1 = CONCAT22(uVar7,uVar4);
      uVar3 = CONCAT22(uVar6,uVar8);
    } while (uVar6 != 0x0);
    uVar1 = CONCAT22(uVar7,uVar4) / (ulong)uVar8;
    iVar5 = (int)uVar1;
    lVar2 = (divisor & 0xffffU) * (uVar1 & 0xffff);
    uVar6 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2;
    if (((CARRY2(uVar6,iVar5 * divisor._2_2_)) ||
        ((ulong)dividend < CONCAT22(uVar6 + iVar5 * divisor._2_2_,uVar4))) ||
       ((false && ((uint)dividend < uVar4))))
    {
      iVar5 += -0x1;
    }
    uVar4 = 0x0;
  }
  return CONCAT22(uVar4,iVar5);
}



u32 __stdcall16far mod_32bit(uint param_1,uint param_2,uint param_3,uint param_4)
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
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0x0)
  {
    iVar6 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) %
                 (ulong)param_3);
    iVar7 = 0x0;
  }
  else
  {
    do
    {
      uVar5 = uVar4 >> 0x1;
      uVar10 = uVar10 >> 0x1 | (uint)((uVar4 & 0x1) != 0x0) << 0xf;
      uVar8 = uVar9 >> 0x1;
      uVar3 = uVar3 >> 0x1 | (uint)((uVar9 & 0x1) != 0x0) << 0xf;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0x0);
    uVar1 = CONCAT22(uVar8,uVar3) / (ulong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffff) * (ulong)param_3;
    uVar9 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY2(uVar9,uVar3)) || (param_2 < uVar10)) ||
       ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 -= param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0x0) -
            ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT22(iVar7,iVar6);
}



int __cdecl16far stricmp_case_insensitive_far_duplicate(char *str1,char *str2)
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
      if (bVar3 == 0x0) goto LAB_1000_5499;
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
LAB_1000_5499:
  return (int)cVar4;
}



// Optimized `memset` for far pointers. It attempts word-aligned writes for speed and
// handles 64KB segment boundaries by splitting the fill operation.

void * __cdecl16far memset_far_optimized_aligned(void *dest,int value,int count)
{
  undefined2 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint in_stack_0000000a;
  
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



// Targeted Scan Finding: Vtable
// Performs indirect call through [func_ptr] in a loop. Used for batch operations.

void __stdcall16far
call_function_ptr_n_times_simple(void *func_ptr,int count,u16 param_3)
{
  u16 uVar1;
  
  uVar1 = param_3;
  while (uVar1 -= 0x1, -0x1 < (int)uVar1)
  {
    (*func_ptr)();
  }
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [func_ptr] in a loop after 32-bit multiplication of
// loop bounds.

void __stdcall16far
call_function_ptr_with_multiplication_n_times_2
          (void *func_ptr,int count,u16 param_3,u16 param_4,u16 param_5)
{
  bool bVar1;
  int iStack_4;
  
  mul_u32_u32_standard(CONCAT22(param_4,param_3),(ulong)param_5);
  while( true )
  {
    bVar1 = param_3 == 0x0;
    param_3 -= 0x1;
    param_4 -= bVar1;
    if ((int)param_4 < 0x0) break;
    iStack_4 = count;
    (*func_ptr)();
  }
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [func_ptr] in a loop. Used for batch operations.

void __stdcall16far call_function_n_times(void *func_ptr,int count,u16 param_3)
{
  u16 uVar1;
  
  uVar1 = param_3;
                // Calls function pointer param_1 repeatedly param_3 times. Used for
                // batch operations.
  while (uVar1 -= 0x1, -0x1 < (int)uVar1)
  {
    (*func_ptr)();
  }
  return;
}



void __cdecl16near nop_near_stub_3(void)
{
  return;
}



// A short wrapper for the fatal application exit routine.

void fatal_exit_shorthand(int error_code)
{
  fatal_app_exit_with_message_lookup_and_terminate(error_code);
  return;
}



// Targeted Scan Finding: Vtable
// Initializes Simulator vtable to 1008:051E (after initially setting it to 1008:052A).
// Structures internal state pointers at offsets 0x4 and 0x8.

void * __stdcall16far Simulator_ctor(void *this)
{
  undefined2 in_stack_00000006;
  
                // Segment:    2
                // Offset:     000060e0
                // Length:     efe0
                // Min Alloc:  efe0
                // Flags:      0d50
                //     Code
                //     Moveable
                //     Preload
                //     Impure (Non-shareable)
                // 
  *_this = 0x52a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = 0x0;
  *(undefined4 *)((int)this + 0x8) = 0x0;
  *_this = 0x51e;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References multiple global subsystem pointers in segment 1050:
// - PTR_DAT_1050_5748 (Global State)
// - PTR_DAT_1050_0ed0 (Resource Manager)
// - PTR_DAT_1050_14cc (Global Resource Manager)
// - PTR_DAT_1050_5b7c (UI SubDialog Table)
// - PTR_DAT_1050_5bc8, PTR_DAT_1050_02a0
// Performs indirect calls through vtable methods at offset 0x0 of these objects.

void __stdcall16far Simulator_dtor(void *this)
{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int *this_ptr;
  undefined2 unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this = 0x51e;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  pvVar3 = (void *)(void *)*(undefined4 *)((int)this + 0x8);
  if (*(int *)((int)this + 0xa) != 0x0 || pvVar3 != NULL)
  {
    far_noop_stub_3();
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  _PTR_DAT_1050_0000_1050_0298 = 0x0;
  if (_p_SimulatorGlobalState != NULL)
  {
    this_ptr = (int *)_p_SimulatorGlobalState;
    Simulator_Global_State_dtor_Internal_8210(this_ptr);
    unaff_CS = 0x1000;
    free_if_not_null(this_ptr);
  }
  if (_p_ResourceManager != NULL)
  {
    pvVar3 = (void *)_p_ResourceManager;
    Resource_Manager_dtor_logic((long)_p_ResourceManager);
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  if (_p_GlobalResourceManager != NULL)
  {
    pvVar3 = (void *)_p_GlobalResourceManager;
    Global_Resource_Manager_dtor_logic_7EFC(pvVar3);
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  if (_p_UISubDialogTable != NULL)
  {
    pvVar3 = (void *)_p_UISubDialogTable;
    UI_Global_SubDialog_Table_Clear_Pointer_af34();
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  if (_p_UIMainWindow != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*_p_UIMainWindow)
              (unaff_CS,(undefined4 *)_p_UIMainWindow,
               (int)((ulong)_p_UIMainWindow >> 0x10),0x1);
  }
  if (_p_UIPanelContainer != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*_p_UIPanelContainer)
              (unaff_CS,(undefined4 *)_p_UIPanelContainer,
               (int)((ulong)_p_UIPanelContainer >> 0x10),0x1);
  }
  puVar1 = (undefined4 *)*(int *)((int)this + 0x4);
  iVar2 = *(int *)((int)this + 0x6);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  Simulator_Destructor_Internal_Logic(this);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far main_engine_initialization(u32 param_1,u16 param_2)
{
  undefined2 *puVar5;
  u32 *puVar1;
  u8 *puVar2;
  u16 pvVar5;
  u16 *puVar3;
  u8 bVar6;
  u16 uVar9;
  u16 extraout_DX;
  uint uVar6;
  u16 uVar7;
  u16 extraout_DX_00;
  u16 uVar11;
  u16 iVar12;
  u16 uVar13;
  u16 uVar8;
  u16 unaff_SS;
  u8 *puVar10;
  u32 *puVar11;
  u32 pvVar14;
  u16 *puVar12;
  u32 puVar15;
  u16 uVar10;
  char local_13e [0xac];
  u8 local_92 [0x80];
  u32 *local_12;
  u16 local_10;
  u32 local_e;
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  u16 in_stack_0000fe42;
  u16 instance;
  u16 in_stack_0000fe40;
  u32 puVar4;
  char *LPSTR_buffer;
  char *LPSTR_buffer_00;
  char *LPSTR_buffer_01;
  
  local_6 = GetVersion16((void *)CONCAT22(in_stack_0000fe42,in_stack_0000fe40));
  local_8 = local_6 & 0xff;
  bVar6 = (u8)(local_6 >> 0x8);
  local_a = (u16)bVar6;
  local_4 = param_2;
  if ((local_8 < 0x3) || ((local_8 == 0x3 && (bVar6 < 0xa))))
  {
    uVar8 = 0x1000;
    local_12 = allocate_memory(CONCAT22(in_stack_0000fe40,0xb4));
    uVar9 = param_2 | (uint)local_12;
    local_10 = param_2;
    if (uVar9 == 0x0)
    {
      puVar1 = NULL;
      uVar9 = 0x0;
    }
    else
    {
      uVar8 = 0x1040;
      puVar1 = (u32 *)UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                                (local_12,param_2,0x0,0x10,0x2,0x5de,0x5dd);
    }
    local_e = CONCAT22(uVar9,puVar1);
    puVar4 = (u32)((int)*(undefined4 *)local_e + 0x74);
    (**(code **)puVar4)(uVar8,puVar1,uVar9);
    param_2 = extraout_DX;
    win16_app_exit_wrapper();
  }
  log_debug_message_v(0x12,0x1050,local_8,local_a);
  if ((local_8 == 0x3) && (0xb < (int)local_a))
  {
    p_FreeBlockListHead = (undefined *)0x1;
  }
  LoadString16(0x80,(ushort)local_92,(char *)unaff_SS,0x578);
  puVar2 = local_92;
  uVar10 = unaff_SS;
  dos_multiple_interrupt_call_wrapper();
  if (puVar2 != NULL)
  {
    LoadString16(0x80,(ushort)local_13e,(char *)unaff_SS,0x57b);
    LoadString16(0x80,(ushort)&stack0xfe42,(char *)unaff_SS,0x62e);
    MessageBox16(0x10,local_13e,(char *)unaff_SS,(ushort)&stack0xfe42);
    win16_app_exit_wrapper();
  }
  local_12 = allocate_memory(CONCAT22(uVar10,0x4));
  uVar6 = param_2 | (uint)local_12;
  if (uVar6 == 0x0)
  {
    pvVar5 = 0x0;
    uVar6 = 0x0;
    local_10 = param_2;
  }
  else
  {
    local_10 = param_2;
    pvVar5 = (u16)null_far_ptr_logic(local_12);
  }
  uVar13 = (u16)(param_1 >> 0x10);
  iVar12 = (u16)param_1;
  *(u16 *)(iVar12 + 0x8) = pvVar5;
  *(uint *)(iVar12 + 0xa) = uVar6;
  _PTR_DAT_1050_0000_1050_0298 = *(undefined4 *)(iVar12 + 0x8);
  puVar5 = (undefined2 *)*(undefined4 *)(iVar12 + 0x8);
  *puVar5 = 0x70;
  ((undefined2 *)puVar5)[0x1] = (char *)s_tile2_bmp_1050_1538;
  local_12 = allocate_memory(CONCAT22(uVar10,0x126));
  puVar10._2_2_ = 0x0;
  local_10 = uVar6;
  if (uVar6 != 0x0 || local_12 != NULL)
  {
    puVar10 = Resource_Manager_Initialize_Global_Ptr_2024
                        ((undefined *)CONCAT22(uVar6,local_12));
    puVar10._2_2_ = (u16)((ulong)puVar10 >> 0x10);
  }
  if (_p_ResourceManager == 0x0)
  {
    log_debug_message_v(0x20,0x1050);
    win16_app_exit_wrapper();
  }
  local_12 = allocate_memory(CONCAT22(uVar10,0xe8c));
  puVar11._2_2_ = 0x0;
  local_10 = puVar10._2_2_;
  if (puVar10._2_2_ != 0x0 || local_12 != NULL)
  {
    puVar11 = Global_Resource_Manager_ctor_init_1010_7e40
                        ((u32 *)CONCAT22(puVar10._2_2_,local_12));
    puVar11._2_2_ = (u16)((ulong)puVar11 >> 0x10);
  }
  if (_p_GlobalResourceManager == 0x0)
  {
    log_debug_message_v(0x35,0x1050);
    win16_app_exit_wrapper();
  }
  local_12 = allocate_memory(CONCAT22(uVar10,0xb0));
  pvVar14._2_2_ = 0x0;
  local_10 = puVar11._2_2_;
  if (puVar11._2_2_ != 0x0 || local_12 != NULL)
  {
    pvVar14 = (u32)UI_SubDialog_Manager_ctor_init_aeca
                             ((u32 *)CONCAT22(puVar11._2_2_,local_12));
    pvVar14._2_2_ = (u16)(pvVar14 >> 0x10);
  }
  if (_p_UISubDialogTable == 0x0)
  {
    log_debug_message_v(0x53,0x1050);
    win16_app_exit_wrapper();
  }
  local_12 = allocate_memory(CONCAT22(uVar10,0xa));
  puVar12._2_2_ = 0x0;
  local_10 = pvVar14._2_2_;
  if (pvVar14._2_2_ != 0x0 || local_12 != NULL)
  {
    puVar12 = UI_Main_Window_ctor_init_cf6c((u16 *)CONCAT22(pvVar14._2_2_,local_12));
    puVar12._2_2_ = (uint)((ulong)puVar12 >> 0x10);
  }
  if (_p_UIMainWindow == 0x0)
  {
    log_debug_message_v(0x73,0x1050);
    win16_app_exit_wrapper();
  }
  local_12 = allocate_memory(CONCAT22(uVar10,0x14));
  uVar6 = puVar12._2_2_ | (uint)local_12;
  local_10 = puVar12._2_2_;
  if (uVar6 != 0x0)
  {
    UI_Event_Manager_ctor(local_12);
  }
  if (_p_UIPanelContainer == 0x0)
  {
    log_debug_message_v(0x97,0x1050);
    win16_app_exit_wrapper();
  }
  local_12 = allocate_memory(CONCAT22(uVar10,0xfc));
  local_10 = uVar6;
  if (uVar6 == 0x0 && local_12 == NULL)
  {
    puVar15 = 0x0;
  }
  else
  {
    puVar15 = (u32)UI_MainWindow_ctor((u16 *)CONCAT22(uVar6,local_12));
  }
  *(undefined2 *)(iVar12 + 0x4) = (int)puVar15;
  *(undefined2 *)(iVar12 + 0x6) = (int)(puVar15 >> 0x10);
  if (*(long *)(iVar12 + 0x4) == 0x0)
  {
    log_debug_message_v(0xb7,0x1050);
    win16_app_exit_wrapper();
  }
  UI_Container_Register_Class_Logic((void *)(void *)*(undefined4 *)(iVar12 + 0x4));
  puVar5 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar12 + 0x4) + 0x8);
  (*(code *)*puVar5)(0x1000,(int)*(undefined4 *)(iVar12 + 0x4),
                     (int)((ulong)*(undefined4 *)(iVar12 + 0x4) >> 0x10));
  g_ParentHWND = (undefined *)*(undefined2 *)((int)*(undefined4 *)(iVar12 + 0x4) + 0x8);
  puVar5 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar12 + 0x4) + 0xc);
  (*(code *)*puVar5)(0x1000,*(undefined4 *)(iVar12 + 0x4),0x3);
  uVar11 = extraout_DX_00;
  UpdateWindow16(*(HWND16 *)((int)*(undefined4 *)(iVar12 + 0x4) + 0x8));
  return uVar11;
}



// Checks if the provided string matches a specific internal name (case-insensitive) and
// nulls a global pointer if it does.

void __stdcall16far stricmp_check_and_null_global_ptr(char *name)
{
  uint uVar1;
  int iVar2;
  char *in_stack_00000008;
  
  if (in_stack_00000008 != NULL)
  {
    uVar1 = strlen_get_length(in_stack_00000008);
    if (uVar1 != 0x0)
    {
      iVar2 = stricmp_case_insensitive_far_duplicate
                        ((char *)in_stack_00000008 + 0x1,
                         (char *)((ulong)in_stack_00000008 >> 0x10));
      if (iVar2 == 0x0)
      {
        PTR_DAT_1050_0000_1050_02ec = NULL;
      }
    }
  }
  return;
}



// Scalar deleting destructor for the Simulator class. Calls the destructor and
// optionally frees the memory.

void * __stdcall16far Simulator_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Simulator_Destructor_Internal_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



void * __stdcall16far
Simulator_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  Simulator_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 * __stdcall16far UI_MainWindow_ctor(u16 *param_1)
{
  HICON16 HVar1;
  HCURSOR16 HVar2;
  HGDIOBJ16 HVar3;
  long lVar4;
  u16 *this;
  int mode;
  
  this = (u16 *)param_1;
  mode = (int)((ulong)param_1 >> 0x10);
  UI_SOLWindow_ctor(this);
  (this + 0x70)[0x0] = 0x0;
  (this + 0x70)[0x1] = 0x0;
  (this + 0x72)[0x0] = 0x0;
  (this + 0x72)[0x1] = 0x0;
  (this + 0x74)[0x0] = 0x0;
  (this + 0x74)[0x1] = 0x0;
  this[0x76] = 0x0;
  (this + 0x77)[0x0] = 0x0;
  (this + 0x77)[0x1] = 0x0;
  this[0x79] = 0x0;
  (this + 0x7a)[0x0] = 0x0;
  (this + 0x7a)[0x1] = 0x0;
  (this + 0x7c)[0x0] = 0x0;
  (this + 0x7c)[0x1] = 0x0;
  *param_1 = (u16)(char *)s_0_1050_389e;
  this[0x1] = 0x1008;
  this[0x64] = (u16)((char *)s_572_bmp_1050_2007 + 0x1);
  this[0x56] = 0x0;
  this[0x57] = 0x8700;
  HVar1 = LoadIcon16(s_Op_1050_00d4,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  this[0x61] = HVar1;
  HVar2 = LoadCursor16((void *)0x7f00,0x0);
  this[0x62] = HVar2;
  HVar3 = GetStockObject16(0x4);
  this[0x63] = HVar3;
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  strcpy_optimized((char *)CONCAT22(mode,this + 0x5),s_Outpost_1050_00d7);
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
  this[0x7a] = (u16)lVar4;
  this[0x7b] = (u16)((ulong)lVar4 >> 0x10);
  UI_Manage_System_Colors_Logic(this,mode);
  return param_1;
}



// Targeted Scan Finding: Vtable / Resource
// Initializes UI_Window vtable to 1008:389A (with intermediate states 1008:389E,
// 1008:380A).
// Performs indirect call through [this + 0xe0], likely a child control or renderer.
// References bitmap resource: tile2.bmp (offset 1050:1538).

void __stdcall16far UI_Window_dtor(void *this)
{
  undefined4 *puVar1;
  int iVar2;
  int in_stack_00000006;
  
  *_this = (char *)s_0_1050_389e;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  UI_Manage_System_Colors_Logic(this,in_stack_00000006);
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0xf8));
  if (*(int *)((int)this + 0xec) != 0x0)
  {
    DestroyMenu16(*(HMENU16 *)((int)this + 0xec));
  }
  DestroyIcon16(*(HICON16 *)((int)this + 0xc2));
  *(undefined2 *)((int)this + 0xc2) = 0x0;
  puVar1 = (undefined4 *)*(int *)((int)this + 0xe0);
  iVar2 = *(int *)((int)this + 0xe2);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1538,puVar1,iVar2,0x1);
  }
  UI_Control_Sub_dtor_logic((void *)((int)this + 0xd2));
  *_this = 0x380a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Handle_Run_Turn_Command(u32 *param_1,long param_2,u16 param_3,int param_4)
{
  undefined2 *puVar1;
  ulong uVar2;
  char *text;
  char *title;
  u32 *puVar3;
  void *pvVar4;
  long context;
  u32 *puVar5;
  u16 local_62;
  u16 local_60;
  u16 local_5e;
  u16 local_5c;
  undefined1 local_5a [0x50];
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  if (param_4 == 0x400)
  {
    pvVar4 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)(void *)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x4000001)
    ;
    title = (char *)((uint)((ulong)pvVar4 >> 0x10) | (uint)(void *)pvVar4);
    if (title != NULL)
    {
      puVar3 = (u32 *)param_1;
      uVar2 = (ulong)param_1 >> 0x10;
      if (PTR_DAT_1050_0000_1050_4fe8 != NULL)
      {
        text = Resource_Manager_LoadString_to_Internal_Buffer
                         ((int)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
        MessageBox16(0x10,text,title,0xdf);
        return;
      }
      local_4 = LoadCursor16((void *)0x7f02,0x0);
      local_6 = SetCursor16(local_4);
      Simulator_Global_Execute_Multiple_Ticks_Logic_83ba
                (_p_SimulatorGlobalState,param_2);
      *(undefined2 *)((int)(void *)_p_SimulatorGlobalState + 0x8) = 0x1;
      context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
      local_8 = (u16)((ulong)context >> 0x10);
      local_a = (u16)context;
      UI_Construction_Manager_Reset_Selection_State_Logic(context);
      Simulator_Global_Get_Current_Tick_8326();
      Resource_Manager_LoadString_to_Internal_Buffer
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),0x5dc);
      sprintf_wrapper(local_5a);
      puVar1 = (undefined2 *)((int)*param_1 + 0x14);
      (*(code *)*puVar1)(0x1000,param_1,0x0,local_5a);
      pvVar4 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x37);
      puVar5 = (u32 *)param_1;
      Turn_Manager_Trigger_Next_Sequence_Event_Logic_maybe((void *)pvVar4);
      SetCursor16(local_6);
      PostMessage16(0x0,0x0,0xfc,CONCAT22(puVar5,(int)puVar3[0x2]));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global simulator state pointer in segment 1050:
// - PTR_DAT_1050_5748
// - PTR_DAT_1050_65e2.

void __stdcall16far Simulator_init_or_exit_on_fail(void)
{
  void *pvVar1;
  int in_DX;
  undefined2 in_stack_0000fffa;
  
  if (_p_SimulatorGlobalState == NULL)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
    if (in_DX != 0x0 || pvVar1 != NULL)
    {
      Simulator_Global_State_ctor_init_8128((void *)CONCAT22(in_DX,pvVar1));
    }
    if (_p_SimulatorGlobalState == NULL)
    {
      log_debug_message_v(0x110,0x1050);
      win16_app_exit_wrapper();
    }
    Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
              (_p_SimulatorWorldContext,0x0,0x0,0x8000000,0x0,0x0);
    Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
              (_p_SimulatorWorldContext,0x0,0x0,0x8000000,0x0,0x0);
    Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
              (_p_SimulatorWorldContext,0x0,0x0,0xff000000,0x0,0x0);
    Simulator_Global_Execute_Single_Tick_Logic_838e((void **)_p_SimulatorGlobalState);
    Simulator_Global_Reset_Tick_Counter_8334();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable Initializations
// References global pointers in segment 1050:
// - PTR_DAT_1050_5748
// - PTR_DAT_1050_65e2
// Initializes a local command object with vtable 1008:389A.

void __stdcall16far Simulator_allocate_and_init_internal(void)
{
  int in_DX;
  undefined2 unaff_SS;
  undefined2 in_stack_0000fee2;
  undefined2 local_112;
  undefined2 uStack_110;
  void *pvStack_6;
  
  pvStack_6 = allocate_memory(CONCAT22(in_stack_0000fee2,0xa));
  if (in_DX != 0x0 || pvStack_6 != NULL)
  {
    Simulator_Global_State_ctor_init_8128((void *)CONCAT22(in_DX,pvStack_6));
  }
  if (_p_SimulatorGlobalState == NULL)
  {
    log_debug_message_v(0x130,0x1050);
    win16_app_exit_wrapper();
  }
  Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
            (_p_SimulatorWorldContext,0x0,0x0,0x8000000,0x0,0x0);
  Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
            (_p_SimulatorWorldContext,0x0,0x0,0x8000000,0x0,0x0);
  Simulator_Command_Select_ctor_init_532e
            ((undefined2 *)CONCAT22(unaff_SS,&local_112),(void *)0xff000000);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_112));
  Simulator_Global_Execute_Single_Tick_Logic_838e((void **)_p_SimulatorGlobalState);
  local_112 = 0x389a;
  uStack_110 = 0x1008;
  Simulator_Global_Reset_Tick_Counter_8334();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long __stdcall16far heap_global_sweep_all_pools(void)
{
  long lVar1;
  
  if (_p_GlobalResourceManager != 0x0)
  {
    Global_Resource_Manager_Release_Object_67C_7fd6(_p_GlobalResourceManager);
  }
  heap_validate_and_sweep(_p_Pool_Type1_Event);
  heap_validate_and_sweep(_p_Pool_Type2_Component);
  heap_validate_and_sweep(_p_Pool_Type3_Sprite);
  heap_validate_and_sweep(_p_Pool_Type4_Timer);
  heap_validate_and_sweep(_p_Pool_Type5_Entity);
  lVar1 = heap_validate_and_sweep(_g_AllocatedBlock_Offset);
  return lVar1;
}



void __stdcall16far UI_Refresh_Colors_and_Components(void *param_1,int param_2)
{
  undefined2 *puVar1;
  
  UI_Manage_System_Colors_Logic(param_1,param_2);
  if (*(long *)((int)param_1 + 0xe8) != 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xe8) + 0x98);
    (*(code *)*puVar1)();
  }
  return;
}
