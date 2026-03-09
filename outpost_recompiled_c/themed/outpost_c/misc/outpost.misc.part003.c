/*
 * Source: outpost.c
 * Theme: misc
 * Chunk: 3/3
 * Original lines (combined): 48090-132804
 * Boundaries: top-level declarations/definitions only
 */




// Internal destructor for Build Site list item. Calls virtual destructor of internal
// object if it exists.

void __stdcall16far Build_Site_List_Item_dtor_Internal(long this_ref)
{
  undefined2 *puVar1;
  astruct_434 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ref >> 0x10);
  uVar2 = (astruct_434 *)this_ref;
  *(undefined2 *)this_ref = 0x56d2;
  uVar2->field2_0x2 = 0x1018;
  if (uVar2->field14_0x10 != 0x0 || uVar2->field13_0xe != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field13_0xe;
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(uVar2);
  return;
}



void __stdcall16far void_noop_stub_1018_60ea(void)
{
  return;
}



u16 __stdcall16far const_0_stub_1018_60ee(void)
{
  return 0x0;
}



u16 __stdcall16far const_0_stub_1018_60f4(void)
{
  return 0x0;
}



void __stdcall16far void_noop_stub_1018_60fa(void)
{
  return;
}



void __stdcall16far void_noop_stub_1018_60fe(void)
{
  return;
}



// Calculates (100 - X) / 2. Useful for centering elements within a 100-pixel or
// 100-unit UI container.

void __stdcall16far Math_Center_Value_in_100_Range_Helper(int *out,int value)
{
  int *in_stack_00000008;
  int in_stack_0000000c;
  
  *in_stack_00000008 = 0x64 - in_stack_0000000c >> 0x1;
  return;
}



void __stdcall16far void_noop_stub_1018_6a76(void)
{
  return;
}



// Calculates (100 - X) / 2 and stores the result. Useful for centering elements in a
// 100-unit UI container.

void __stdcall16far
Math_Center_Value_in_100_Range_Alternative_2286
          (u16 unused1,u16 unused2,int *out_result,int value)
{
  int in_stack_0000000c;
  
  *_out_result = 0x64 - in_stack_0000000c >> 0x1;
  return;
}



// An alternative wrapper for the Win16 Polygon16 API.

void __stdcall16far
GDI_Polygon_Wrapper_Alternative_2474
          (u16 unused1,u16 unused2,void *count_and_points,HDC16 hdc)
{
  HDC16 unaff_CS;
  
  Polygon16(unaff_CS,(void *)count_and_points,(short)((ulong)count_and_points >> 0x10));
  return;
}



void __stdcall16far void_noop_stub_1020_3cb4(void)
{
  return;
}



void __stdcall16far void_noop_stub_1020_8438(void)
{
  return;
}



void __stdcall16far void_noop_stub_1020_8780(void)
{
  return;
}



// A simple helper that always returns 1.

u16 __cdecl16far Helper_Returns_1_Stub_c3ae(void)
{
  return 0x1;
}



undefined2 __stdcall16far const_0_stub_1020_c5ae(void)
{
  return 0x0;
}



void __stdcall16far void_noop_stub_1020_c640(void)
{
  return;
}



void __stdcall16far void_noop_stub_1020_d8b2(void)
{
  return;
}



void __stdcall16far void_noop_stub_1020_d8b6(void)
{
  return;
}



void __stdcall16far void_noop_stub_1020_d8ba(void)
{
  return;
}



void __stdcall16far void_noop_stub_1020_d8be(void)
{
  return;
}



void __stdcall16far void_noop_stub_1020_d8c2(void)
{
  return;
}



void __stdcall16far void_noop_stub_1020_e864(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_0b8e(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_0b92(void)
{
  return;
}



// A simple stub function that always returns 0.

u16 __stdcall16far Helper_Returns_0_Stub_1c1c(void)
{
  return 0x0;
}



// A simple stub function that always returns 0.

u16 __stdcall16far Helper_Returns_0_Stub_20b0(void)
{
  return 0x0;
}



void __stdcall16far void_noop_stub_1028_2b46(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_2b4a(void)
{
  return;
}



undefined2 __stdcall16far const_1_stub_1028_35aa(void)
{
  return 0x1;
}



void __stdcall16far void_noop_stub_1028_42c2(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_490c(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_4910(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_4914(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_4918(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_5124(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_5334(void)
{
  return;
}



undefined2 __stdcall16far const_0_stub_1028_567c(void)
{
  return 0x0;
}



void __stdcall16far void_noop_stub_1028_5682(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_5714(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_57f2(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_58d0(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_58d4(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_59b2(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_59b6(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_5e42(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_5e46(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_b27e(void)
{
  return;
}



u16 __stdcall16far const_0_stub_1028_b4e6(void)
{
  return 0x0;
}



u16 __stdcall16far const_0_stub_1028_b4ec(void)
{
  return 0x0;
}



void __stdcall16far set_ulong_to_0_1028_bbf0(u16 param_1,u16 param_2,u32 *param_3)
{
  *param_3 = 0x0;
  return;
}



void __stdcall16far void_noop_stub_1028_bf16(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_bf1a(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_bf1e(void)
{
  return;
}



// Initializes a Data History Object node with a head pointer and clears the next link.

u32 * __stdcall16far
Data_History_Object_Set_Head_Pointer_cfd2(u32 *this_ptr,u32 head_ptr)
{
  undefined2 in_stack_00000006;
  
  *_this_ptr = head_ptr;
  this_ptr[0x1] = 0x0;
  return this_ptr;
}



// Invokes the virtual destructor for the object stored within a Data History node.

void __stdcall16far Data_History_Object_Node_Virtual_Dtor_cff2(void *this_ptr)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  puVar1 = (undefined4 *)*(int *)((int)(void *)this_ptr + 0x4);
  iVar2 = *(int *)((int)(void *)this_ptr + 0x6);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    puVar3 = (undefined2 *)(undefined2 *)*puVar1;
    (*(code *)*puVar3)();
  }
  return;
}



undefined2 __stdcall16far const_1_stub_1028_d222(void)
{
  return 0x1;
}



u16 __stdcall16far const_1_stub_1028_d228(void)
{
  return 0x1;
}



// A simple no-op stub function.

void __stdcall16far Helper_NoOp_Stub_154c(void)
{
  return;
}



void __stdcall16far Helper_NoOp_Stub_178e(void)
{
  return;
}



undefined2 __stdcall16far const_1_stub_1030_1972(void)
{
  return 0x1;
}



void __stdcall16far void_noop_stub_1030_1f6c(void)
{
  return;
}



void __stdcall16far Helper_NoOp_Stub_b13c(void)
{
  return;
}



void __stdcall16far void_noop_stub_1030_bc6c(void)
{
  return;
}



undefined2 __stdcall16far const_1_stub_1030_db72(void)
{
  return 0x1;
}



undefined2 __stdcall16far const_1_stub_1030_dc02(void)
{
  return 0x1;
}



void __stdcall16far Helper_NoOp_Stub_e4ba(void)
{
  return;
}



undefined2 __stdcall16far const_1_stub_1030_e540(void)
{
  return 0x1;
}



undefined2 __stdcall16far const_1_stub_1030_e7d0(void)
{
  return 0x1;
}



u16 __stdcall16far const_0_stub_1038_8842(void)
{
  return 0x0;
}



void __stdcall16far void_noop_stub_1038_8848(void)
{
  return;
}



void __stdcall16far void_noop_stub_1038_884c(void)
{
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1038_a08c(void)
{
  return;
}



// A stub function returning constant 0.

undefined2 __stdcall16far const_0_stub_1038_a2a4(void)
{
  return 0x0;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1038_ca42(void)
{
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1038_ced6(void)
{
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1038_e23a(void)
{
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1038_e904(void)
{
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1038_eb08(void)
{
  return;
}



// A stub function returning constant 1.

undefined2 __stdcall16far const_1_stub_1040_0d80(void)
{
  return 0x1;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1040_0d86(void)
{
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1040_1786(void)
{
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1040_1c1e(void)
{
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1040_1ec4(void)
{
  return;
}



void __stdcall16far Helper_NoOp_Stub_78de(void)
{
  return;
}



u16 __stdcall16far const_0_stub_1040_8054(void)
{
  return 0x0;
}



u16 __stdcall16far const_0_stub_1040_8266(void)
{
  return 0x0;
}



void * __stdcall16far Helper_ZeroFill_24Bytes_a598(void *param_1)
{
  astruct_22 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_22 *)param_1;
  *(undefined2 *)param_1 = 0x0;
  uVar1->field2_0x2 = 0x0;
  uVar1->field3_0x6 = 0x0;
  uVar1->field4_0xa = 0x0;
  uVar1->field5_0xc = 0x0;
  uVar1->field6_0x10 = 0x0;
  uVar1->field7_0x12 = 0x0;
  uVar1->field8_0x14 = 0x0;
  uVar1->field9_0x16 = 0x0;
  return param_1;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1040_c882(void)
{
  return;
}
