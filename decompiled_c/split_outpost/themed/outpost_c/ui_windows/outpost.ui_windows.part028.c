/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 28/54
 * Original lines (combined): 75875-80040
 * Boundaries: top-level declarations/definitions only
 */




void __stdcall16far
UI_Build_Item_State6_Transition_Check_with_Batch_Consume_5412(undefined4 *param_1)
{
  undefined2 *puVar1;
  u16 uVar2;
  undefined2 uVar3;
  void *pvVar4;
  int iVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((int)(undefined4 *)param_1 + 0x12) != 0x6)
  {
    return;
  }
  pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(param_1);
  if (*(long *)((int)(void *)pvVar4 + 0x200) != 0x8000002)
  {
    if (((undefined4 *)param_1)[0x7] == 0x8000002)
    {
      iVar5 = 0x6;
      goto code_r0x1028548e;
    }
    puVar1 = (undefined2 *)((int)*param_1 + 0x64);
    iVar5 = (*(code *)*puVar1)();
    if (iVar5 == 0x0)
    {
      return;
    }
    uVar2 = Simulator_Validate_Resource_Batch_c0f0(param_1,0x1);
    if (uVar2 == 0x0)
    {
      iVar5 = 0x6;
      goto code_r0x1028548e;
    }
    UI_Build_Item_Process_Turn_Consumption_Logic_c952(param_1);
    Simulator_Consume_Resources_Batch_c00a(param_1,0x1);
  }
  iVar5 = 0x5;
code_r0x1028548e:
  UI_Build_Item_Transition_State_Logic_bdac(param_1,iVar5);
  return;
}



// Constructor for UI Build Item Type 0x55C8. Inherits from Type 0x08EC and sets its own
// vtable.

void * __stdcall16far UI_Build_Item_Type_55C8_ctor_init_5524(void *this_ptr)
{
  UI_Build_Item_Type_08EC_ctor_0068(this_ptr);
  *(undefined2 *)this_ptr = 0x55c8;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x55C8.

void * __stdcall16far
UI_Build_Item_Type_55C8_ctor_with_Params_5546
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Type_08EC_ctor_with_Params_00cc
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x55c8;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far UI_Build_Item_Turn_Update_and_Batch_Spawn_5570(void *param_1)
{
  void *pvVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  UI_Build_Item_Turn_Update_Push_Event_0550(param_1);
  if (*(int *)((int)param_1 + 0x12) == 0x5)
  {
    uVar3 = 0x40000;
    uVar2 = 0x1;
    pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    UI_Component_Batch_Spawn_SubEntities_Logic_7c50
              ((int)pvVar1,(int)((ulong)pvVar1 >> 0x10),uVar2,uVar3);
  }
  return;
}



void * __stdcall16far
UI_Build_Item_Type08EC_dtor_Scalar_Deleting_55a2(void *param_1,byte param_2)
{
  UI_Build_Item_Type_08EC_dtor_Internal_0138(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x56AC. Initializes base class and sets vtable to
// 0x56AC.

void * __stdcall16far UI_Build_Item_Type_56AC_ctor_init_5630(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0x56ac;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x56AC.

void * __stdcall16far
UI_Build_Item_Type_56AC_ctor_with_Params_5652
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x56ac;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_5686(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_5718(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x581C. Initializes base class and sets vtable to
// 0x581C.

void * __stdcall16far UI_Build_Item_Type_581C_ctor_init_57a6(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined **)this_ptr = (undefined *)&DAT_1050_581c;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x581C.

void * __stdcall16far
UI_Build_Item_Type_581C_ctor_with_Params_57c8
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (undefined *)&DAT_1050_581c;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_57f6(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x58FE. Initializes base class and sets vtable to
// 0x58FE.

void * __stdcall16far UI_Build_Item_Type_58FE_ctor_init_5884(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0x58fe;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x58FE.

void * __stdcall16far
UI_Build_Item_Type_58FE_ctor_with_Params_58a6
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x58fe;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_58d8(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Parameterized constructor for UI Build Item Type 0x59E0.

void * __stdcall16far
UI_Build_Item_Type_59E0_ctor_with_Params_5988
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) =
       (char *)s_mineToSmelter_>no_mines_1050_59df + 0x1;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_59ba(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Parameterized constructor for UI Build Item Type 5BEC.

void * __stdcall16far
UI_Build_Item_Type_5BEC_ctor_with_Params_5a6a
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_thisLo_1050_5bec;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Alternative per-tick update for build items in state 6. Validates construction
// progress and transitions to state 5. Involves specialized state check 0xC0F0.

void __stdcall16far UI_Build_Item_OnTick_State6_Update_Alternative_5b42(void *this_ptr)
{
  undefined2 *puVar1;
  u16 uVar2;
  undefined2 uVar3;
  void *pvVar4;
  int iVar5;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(int *)((int)(void *)this_ptr + 0x12) != 0x6)
  {
    return;
  }
  pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  if (*(long *)((int)(void *)pvVar4 + 0x200) != 0x8000002)
  {
    if (*(long *)((int)(void *)this_ptr + 0x1c) == 0x8000002)
    {
      iVar5 = 0x6;
      goto code_r0x10285bbe;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)this_ptr + 0x64);
    iVar5 = (*(code *)*puVar1)();
    if (iVar5 == 0x0)
    {
      return;
    }
    uVar2 = Simulator_Validate_Resource_Batch_c0f0(this_ptr,0x2);
    if (uVar2 == 0x0)
    {
      iVar5 = 0x6;
      goto code_r0x10285bbe;
    }
    UI_Build_Item_Process_Turn_Consumption_Logic_c952(this_ptr);
    Simulator_Consume_Resources_Batch_c00a(this_ptr,0x2);
  }
  iVar5 = 0x5;
code_r0x10285bbe:
  UI_Build_Item_Transition_State_Logic_bdac(this_ptr,iVar5);
  return;
}



// Scalar deleting destructor for UI build items using the B418 internal cleanup logic.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_5bc6(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 5D8B.

void * __stdcall16far
UI_Build_Item_Type_5D8B_ctor_with_Params_5c76
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_static_1050_5d8b + 0x3;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Scalar deleting destructor for UI build items using the B418 internal cleanup logic.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_5d68(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x5E70.

void * __stdcall16far
UI_Build_Item_Type_5E70_ctor_with_Params
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)str_1050_5e6f + 0x1;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_5e4a(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x6054. Initializes base class and sets field 0x20
// to 0.

void * __stdcall16far UI_Build_Item_Type_6054_ctor_init(void *this_ptr)
{
  undefined2 uVar1;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x20) = 0x0;
  *(undefined2 *)this_ptr = 0x6054;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x6054.

void * __stdcall16far
UI_Build_Item_Type_6054_ctor_with_Params
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  param_1[0x10] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x6054;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far UI_Build_Item_OnTick_State6_Update_Wrapper_6008(void *param_1)
{
  void *pvVar1;
  undefined2 uVar2;
  
  UI_Build_Item_OnTick_State6_Update_be2a(param_1);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar1 = (void *)param_1;
  if ((*(int *)((int)pvVar1 + 0x12) == 0x5) && (0x0 < *(int *)((int)pvVar1 + 0x20)))
  {
    *(int *)((int)pvVar1 + 0x20) = *(int *)((int)pvVar1 + 0x20) + -0x1;
  }
  return;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_602e(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x6876. Initializes base class and creates an
// internal sub-object via construct-with-vtable.

void * __stdcall16far UI_Build_Item_Type_6876_ctor_init(void *this_ptr)
{
  astruct_491 *this;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  astruct_327 *uVar1;
  void *pvVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 in_stack_0000fffa;
  
  iVar5 = (int)this_ptr;
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar4 = UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar2 = (uint)((ulong)pvVar4 >> 0x10);
  *(undefined4 *)(iVar5 + 0x20) = 0x0;
  *(undefined2 *)this_ptr = 0x6876;
  *(undefined2 *)(iVar5 + 0x2) = 0x1028;
  this = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar3 = uVar2 | (uint)this;
  if (uVar3 == 0x0)
  {
    *(undefined4 *)(iVar5 + 0x20) = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this,uVar2);
    *(undefined2 *)(iVar5 + 0x20) = pvVar1;
    *(uint *)(iVar5 + 0x22) = uVar3;
  }
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x6876.

void * __stdcall16far
UI_Build_Item_Type_6876_ctor_with_Params
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  astruct_491 *this;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined2 in_stack_0000fffa;
  
  pvVar4 = UI_Build_Item_Base_ctor_with_Params_b39e
                     (param_1,CONCAT22(param_3,param_2),(int)param_4,
                      (int)((ulong)param_4 >> 0x10));
  uVar2 = (uint)((ulong)pvVar4 >> 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x6876;
  param_1[0x1] = 0x1028;
  this = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar3 = uVar2 | (uint)this;
  if (uVar3 == 0x0)
  {
    *(undefined4 *)(param_1 + 0x10) = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this,uVar2);
    param_1[0x10] = pvVar1;
    param_1[0x11] = uVar3;
  }
  return (void *)CONCAT22(param_2,param_1);
}



// Internal destructor for build item 0x6876. Cleans up its internal sub-object and
// reverts vtables.

void __stdcall16far UI_Build_Item_Type_6876_dtor_Internal(void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  *(undefined2 *)this_ptr = 0x6876;
  *(undefined2 *)((int)pvVar2 + 0x2) = 0x1028;
  if (*(int *)((int)pvVar2 + 0x22) != 0x0 ||
      (undefined4 *)*(int *)((int)pvVar2 + 0x20) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)pvVar2 + 0x20);
    (*(code *)*puVar1)();
  }
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  return;
}



void __stdcall16far
UI_Build_Item_Transition_and_Create_SubObject_20_61c4(void *param_1,void *param_2)
{
  undefined2 *puVar1;
  astruct_491 *this;
  void *pvVar2;
  uint extraout_DX;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  undefined2 unaff_SI;
  undefined2 uVar6;
  
  UI_Build_Item_Set_Active_Object_Logic_b46e(param_1,param_2);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar5 = (void *)param_1;
  uVar3 = 0x0;
  if (*(int *)((int)pvVar5 + 0x22) != 0x0 ||
      (undefined4 *)*(int *)((int)pvVar5 + 0x20) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)pvVar5 + 0x20);
    (*(code *)*puVar1)();
    uVar3 = extraout_DX;
  }
  this = allocate_memory(CONCAT22(unaff_SI,0xc));
  uVar4 = uVar3 | (uint)this;
  if (uVar4 == 0x0)
  {
    pvVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(this,uVar3);
  }
  *(undefined2 *)((int)pvVar5 + 0x20) = pvVar2;
  *(uint *)((int)pvVar5 + 0x22) = uVar4;
  return;
}



// Iterates through the linked list and returns the sum of 32-bit values (at offset 10)
// for all items where the field at offset 8 is non-zero.

void * __stdcall16far UI_Item_List_Sum_Active_Values_Logic_6302(void *this_ptr)
{
  uint uVar1;
  undefined2 uVar2;
  bool bVar3;
  long lVar4;
  void *pvStack_12;
  int iStack_10;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this_ptr + 0x20));
  pvStack_12 = NULL;
  iStack_10 = 0x0;
  while( true )
  {
    lVar4 = get_next_list_item(local_a);
    uVar2 = (undefined2)((ulong)lVar4 >> 0x10);
    if (lVar4 == 0x0) break;
    if (*(int *)((int)lVar4 + 0x8) != 0x0)
    {
      uVar1 = *(uint *)((int)lVar4 + 0xa);
      bVar3 = CARRY2((uint)pvStack_12,uVar1);
      pvStack_12 = (void *)((int)pvStack_12 + uVar1);
      iStack_10 += (uint)bVar3;
    }
  }
  return (void *)CONCAT22(iStack_10,pvStack_12);
}



// Searches for an item in the linked list with matching coordinates and type. Updates
// values if found, or inserts a new item via a virtual constructor call.

void __stdcall16far
UI_Item_List_Upsert_Item_by_Metadata_Logic_6408(void *this_ptr,void *item_ptr)
{
  undefined2 *puVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  astruct_324 *paVar8;
  undefined1 local_a [0x8];
  astruct_324 *iVar2;
  
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar4 = (void *)this_ptr;
  init_long_pair(local_a,*(long *)((int)pvVar4 + 0x20));
  bVar2 = false;
  while( true )
  {
    paVar8 = (astruct_324 *)get_next_list_item(local_a);
    iVar3 = (int)((ulong)paVar8 >> 0x10);
    iVar2 = (astruct_324 *)paVar8;
    pvVar5 = (void *)item_ptr;
    uVar7 = (undefined2)((ulong)item_ptr >> 0x10);
    if (iVar3 == 0x0 && iVar2 == NULL) break;
    if ((iVar2->field4_0x4 == *(int *)((int)pvVar5 + 0x4)) &&
       (iVar2->field5_0x6 == *(int *)((int)pvVar5 + 0x6)))
    {
      if (iVar2->field6_0x8 == *(int *)((int)pvVar5 + 0x8))
      {
        bVar2 = true;
        iVar2->field7_0xa = iVar2->field7_0xa + *(int *)((int)pvVar5 + 0xa);
        iVar2->field8_0xc = iVar2->field8_0xc + *(int *)((int)pvVar5 + 0xc);
      }
    }
  }
  if (bVar2)
  {
    if (item_ptr != NULL)
    {
      (*(code *)*(undefined2 *)*(undefined2 **)item_ptr)
                (0x1008,item_ptr,0x1,item_ptr,item_ptr);
      return;
    }
  }
  else
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)pvVar4 + 0x20) + 0x4);
    (*(code *)*puVar1)(0x1008,*(undefined4 *)((int)pvVar4 + 0x20),item_ptr);
  }
  return;
}



// Searches the linked list for an item matching the ID at offset 6 and returns its
// associated 16-bit value at offset 10.

u16 __stdcall16far
UI_Item_List_Get_Value_by_ID_Offset6_6744(void *this_ptr,int search_id)
{
  undefined2 uVar1;
  long lVar2;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)(void *)this_ptr + 0x20));
  do
  {
    lVar2 = get_next_list_item(local_a);
    uVar1 = (undefined2)((ulong)lVar2 >> 0x10);
    if (lVar2 == 0x0)
    {
      return 0x0;
    }
  } while (*(int *)((int)lVar2 + 0x6) != search_id);
  return *(u16 *)((int)lVar2 + 0xa);
}



// Searches the linked list for an item matching the ID at offset 8 and returns its
// associated 16-bit value at offset 10.

u16 __stdcall16far UI_Item_List_Get_Value_by_ID_Offset8_678c(u32 this_ptr,int search_id)
{
  undefined2 uVar1;
  long lVar2;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this_ptr + 0x20));
  do
  {
    lVar2 = get_next_list_item(local_a);
    uVar1 = (undefined2)((ulong)lVar2 >> 0x10);
    if (lVar2 == 0x0)
    {
      return 0x0;
    }
  } while (*(int *)((int)lVar2 + 0x8) != search_id);
  return *(u16 *)((int)lVar2 + 0xa);
}



// Iterates through the linked list and returns the aggregate sum of all 32-bit values
// stored at offset 12.

void * __stdcall16far UI_Item_List_Sum_All_Values_Offset12_Logic_67d4(void *this_ptr)
{
  uint uVar1;
  bool bVar2;
  long lVar3;
  void *pvStack_12;
  int iStack_10;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this_ptr + 0x20));
  pvStack_12 = NULL;
  iStack_10 = 0x0;
  while( true )
  {
    lVar3 = get_next_list_item(local_a);
    if (lVar3 == 0x0) break;
    uVar1 = *(uint *)((int)lVar3 + 0xc);
    bVar2 = CARRY2((uint)pvStack_12,uVar1);
    pvStack_12 = (void *)((int)pvStack_12 + uVar1);
    iStack_10 += (uint)bVar2;
  }
  return (void *)CONCAT22(iStack_10,pvStack_12);
}



// Calculates the total value of items in the list and returns 1 if it meets or exceeds
// the threshold of 100, otherwise returns 0.

u16 __stdcall16far
UI_Item_List_Check_Efficiency_Threshold_Logic_6822(void *this_ptr,uint *out_sum)
{
  uint uVar1;
  void *pvVar2;
  undefined2 in_stack_0000000a;
  
  pvVar2 = UI_Item_List_Sum_All_Values_Offset12_Logic_67d4(this_ptr);
  uVar1 = (uint)((ulong)pvVar2 >> 0x10);
  *_out_sum = (uint)pvVar2;
  out_sum[0x1] = uVar1;
  if ((uVar1 == 0x0) && (*_out_sum < 0x64))
  {
    return 0x0;
  }
  return 0x1;
}



// Scalar deleting destructor for UI build item Type 0x6876.

void * __stdcall16far
UI_Build_Item_Type_6876_dtor_Scalar_Deleting_6850(void *this_ptr,byte flags)
{
  UI_Build_Item_Type_6876_dtor_Internal(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 0x6E50. Initializes base class with ID 4999 and
// sets internal object pointers at 0x108 and 0x10C. Sets vtable to 0x6E50.

void * __stdcall16far
UI_Build_Item_Type_6E50_ctor_init_6af2(void *this_ptr,u32 arg1,u32 arg2)
{
  void *pvVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x1387);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar1 = (void *)this_ptr;
  *(u32 *)((int)pvVar1 + 0x108) = arg2;
  *(u32 *)((int)pvVar1 + 0x10c) = arg1;
  *(undefined2 *)this_ptr = 0x6e50;
  *(undefined2 *)((int)pvVar1 + 0x2) = 0x1028;
  return this_ptr;
}



// Constructor for UI Build Item Type 0x87E0. Inherits from Type 0x6E50 and sets its own
// vtable.

void * __stdcall16far
UI_Build_Item_Type_87E0_ctor_init_8698(void *this_ptr,u32 arg1,u32 arg2)
{
  UI_Build_Item_Type_6E50_ctor_init_6af2(this_ptr,arg1,arg2);
  *(undefined2 *)this_ptr = 0x87e0;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Constructor for UI Build Item Type 0x8FB0. Initializes base class with ID 1000 and
// sets four internal 4-byte fields (0x108, 0x10C, 0x110, 0x114). Sets vtable to 0x8FB0.

void * __stdcall16far
UI_Build_Item_Type_8FB0_ctor_init_8d9e(void *this_ptr,u32 arg1,u32 arg2,u32 arg3)
{
  void *pvVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x3e8);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar1 = (void *)this_ptr;
  *(u32 *)((int)pvVar1 + 0x108) = arg3;
  *(u32 *)((int)pvVar1 + 0x10c) = arg2;
  *(u32 *)((int)pvVar1 + 0x110) = arg1;
  *(undefined4 *)((int)pvVar1 + 0x114) = 0x0;
  *(undefined2 *)this_ptr = 0x8fb0;
  *(undefined2 *)((int)pvVar1 + 0x2) = 0x1028;
  return this_ptr;
}



u16 * __stdcall16far
UI_Build_Item_Type8FB0_dtor_Scalar_Deleting_8f8a(u16 *param_1,u16 param_2,byte param_3)
{
  UI_Build_Item_Type_8FB0_dtor_Internal_8dec(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x90D6. Inherits from Type 0x6E50 and sets its own
// vtable.

void * __stdcall16far
UI_Build_Item_Type_90D6_ctor_init_8fc0(void *this_ptr,u32 arg1,u32 arg2)
{
  UI_Build_Item_Type_6E50_ctor_init_6af2(this_ptr,arg1,arg2);
  *(undefined2 *)this_ptr = 0x90d6;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}
