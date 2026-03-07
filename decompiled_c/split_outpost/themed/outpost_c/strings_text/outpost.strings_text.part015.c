/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 15/19
 * Original lines (combined): 76228-84891
 * Boundaries: top-level declarations/definitions only
 */




// Constructor for UI Build Item Type 5BEC. Initializes base class and sets its internal
// 'thisLo' metadata string. Sets vtable to 0x5BEC.

void * __stdcall16far UI_Build_Item_Type_5BEC_ctor_init_5a48(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)s_thisLo_1050_5bec;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Constructor for UI Build Item Type 5D8B. Initializes base class and sets its internal
// 'static' metadata string. Sets vtable to 0x5D8B.

void * __stdcall16far UI_Build_Item_Type_5D8B_ctor_init_5c54(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)s_static_1050_5d8b + 0x3;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Constructor for UI Build Item Type 0x5E70. Initializes base class and sets its
// internal site identifier string.

u16 * __stdcall16far UI_Build_Item_Type_5E70_ctor_init(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)str_1050_5e6f + 0x1;
  ((u16 *)this_ptr)[0x1] = 0x1028;
  return (u16 *)this_ptr;
}



// Calculates the efficiency-based 'remaining' value (100 - current) for a build item in
// state 5.

void * __stdcall16far UI_Build_Item_Calculate_Efficiency_Remaining_Logic(void *this_ptr)
{
  char *pcVar1;
  char *pcVar2;
  
  if (*(int *)((int)(void *)this_ptr + 0x12) == 0x5)
  {
    pcVar2 = UI_Item_List_Sum_All_Values_Offset12_Logic_67d4(this_ptr);
    pcVar1 = (char *)pcVar2;
    if (((int)((ulong)pcVar2 >> 0x10) == 0x0) &&
       (pcVar1 < (char *)s_New_failed_in_Op__Op_>DialogCtr_1050_0053 + 0x11))
    {
      return (void *)CONCAT22(-(uint)((char *)
                                      s_New_failed_in_Op__Op_>DialogCtr_1050_0053 + 0x11
                                     < pcVar1),(void *)(0x64 - (int)pcVar1));
    }
  }
  return NULL;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_6ef6(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0x6fb0;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_737e(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0x749e;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_752e(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0x819a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_9dee(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x10a));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar8 = (undefined2)(param_1 >> 0x10);
    iVar6 = (int)param_1;
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)((int)pvVar3 + 0x108) = *(undefined2 *)(iVar6 + 0x108);
    *(undefined2 *)local_a = 0x9eb6;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_a0fa(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0xa6f6;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_a79c(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0xa856;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_a8f4(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0xa9ae;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_aa68(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0xab22;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_abec(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0xaca6;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes a randomized subtype ID (offset 0x10) for the build item, selecting from
// two sets of ranges based on its primary type ID.

void __stdcall16far UI_Build_Item_Initialize_Random_Subtype_bf76(void *this_ptr)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  iVar1 = random_int_range(0x1,0x3);
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar3 = (int)this_ptr;
  iVar2 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),*(int *)(iVar3 + 0xc))
  ;
  if (iVar2 == 0x0)
  {
    if (iVar1 == 0x1)
    {
      *(undefined2 *)(iVar3 + 0x10) = 0x48;
      return;
    }
    if (iVar1 != 0x2)
    {
      *(undefined2 *)(iVar3 + 0x10) = 0x4a;
      return;
    }
    *(undefined2 *)(iVar3 + 0x10) = 0x49;
    return;
  }
  if (iVar1 == 0x1)
  {
    *(undefined2 *)(iVar3 + 0x10) = 0x70;
    return;
  }
  if (iVar1 != 0x2)
  {
    *(undefined2 *)(iVar3 + 0x10) = 0x72;
    return;
  }
  *(undefined2 *)(iVar3 + 0x10) = 0x71;
  return;
}



// Constructor for UI Build Item Type 0x6AD2. Initializes base class with the provided
// ID and sets vtable to 0x6AD2. Default display layer 0x4B.

void * __stdcall16far UI_Build_Item_Type_6AD2_ctor_init_d1dc(void *this_ptr,u16 id)
{
  astruct_315 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_315 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = id;
  uVar1->field4_0x6 = 0x0;
  *(undefined2 *)this_ptr = 0x6ad2;
  uVar1->field2_0x2 = 0x1028;
  sprintf_wrapper(&uVar1->field5_0x8,uVar2,0x5160,0x1050);
  return this_ptr;
}
