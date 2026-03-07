/*
 * Source: outpost.c
 * Chunk: 67/117
 * Original lines: 76357-77478
 * Boundaries: top-level declarations/definitions only
 */




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



// Constructor for UI Build Item Type 5D8B. Initializes base class and sets its internal
// 'static' metadata string. Sets vtable to 0x5D8B.

void * __stdcall16far UI_Build_Item_Type_5D8B_ctor_init_5c54(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)s_static_1050_5d8b + 0x3;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Submits an 'InternalPutBldg' (type 0x65) event to the simulator for the build item's
// current position and parent construction manager.

void __stdcall16far Simulator_Submit_InternalPutBldg_Event_5ca0(void *this_ptr)
{
  undefined2 unaff_SS;
  void *pvVar1;
  undefined1 local_12e [0x124];
  undefined4 uStack_a;
  void *pvStack_6;
  undefined2 uStack_4;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uStack_4 = (undefined2)((ulong)pvVar1 >> 0x10);
  pvStack_6 = (void *)pvVar1;
  uStack_a = *(undefined4 *)((int)pvStack_6 + 0x2e);
  pvVar1 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(this_ptr);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_12e,unaff_SS,0x0,0x650000,CONCAT22(uStack_4,(int)pvStack_6 + 0xc),
             *(undefined4 *)((int)uStack_a + 0x4),(void *)pvVar1,
             (int)((ulong)pvVar1 >> 0x10));
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_12e));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_Trigger_AddSpew_Event_5d0e(void *param_1)
{
  undefined2 unaff_SS;
  undefined1 local_11c [0x10e];
  undefined4 local_e;
  undefined4 local_a;
  void *local_6;
  
  local_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_a = *(undefined4 *)((int)local_6 + 0x2e);
  local_e = *(undefined4 *)((int)local_a + 0x4);
  Simulator_Command_AddSpew_ctor_init_68de(local_11c,unaff_SS,0x1,local_e);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_11c));
  return;
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



// Constructor for UI Build Item Type 0x5E70. Initializes base class and sets its
// internal site identifier string.

u16 * __stdcall16far UI_Build_Item_Type_5E70_ctor_init(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)str_1050_5e6f + 0x1;
  ((u16 *)this_ptr)[0x1] = 0x1028;
  return (u16 *)this_ptr;
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



void __stdcall16far void_noop_stub_1028_5e42(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_5e46(void)
{
  return;
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



void __stdcall16far UI_Build_Item_State4_Check_Entity_61_Update_20_5f30(void *param_1)
{
  u16 uVar1;
  void *pvVar2;
  undefined2 uVar3;
  void *pvVar4;
  int index;
  
  UI_Build_Item_OnTick_State4_Update_be9e(param_1);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar2 = (void *)param_1;
  if (*(int *)((int)pvVar2 + 0x12) == 0x5)
  {
    *(undefined2 *)((int)pvVar2 + 0x20) = 0x64;
    pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    index = 0x61;
    pvVar4 = (void *)Colony_Get_Entity_Object_by_PackedID_200_Logic
                               ((void *)*(undefined4 *)((int)(void *)pvVar4 + 0x2e));
    uVar1 = Colony_Check_Value_at_Index_is_Zero_25b2(pvVar4,index);
    if (uVar1 != 0x0)
    {
      *(int *)((int)pvVar2 + 0x20) = *(int *)((int)pvVar2 + 0x20) + 0x64;
    }
  }
  return;
}



// Serialization logic for saving Type 0x6054 build item state to a file context. Writes
// field 0x20.

int __stdcall16far
UI_Build_Item_Type_6054_Save_to_File_Logic(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  void *unaff_SS;
  undefined2 local_c [0x5];
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(this_ptr,file_ctx);
  iVar2 = 0x0;
  if (uVar1 != 0x0)
  {
    local_c[0x0] = *(undefined2 *)((int)this_ptr + 0x20);
    iVar2 = file_write_check((long)file_ctx,local_c,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    iVar2 = 0x1;
  }
  return iVar2;
}



undefined2 __stdcall16far
UI_Build_Item_Deserialize_and_Update_20_5fc8(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  uVar3 = 0x0;
  if (uVar1 != 0x0)
  {
    iVar2 = file_read_check((long)param_2,(void *)((int)param_1 + 0x20),
                            (void *)(param_1 >> 0x10));
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    uVar3 = 0x1;
  }
  return uVar3;
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



// Iterates through internal resource lists and subtracts consumption values from
// specific item types. Triggers virtual updates on the resource managers.

void __stdcall16far
UI_Build_Item_Consume_Resources_by_Type_Logic
          (void *this_ptr,uint amount_lo,int amount_hi,int type)
{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  astruct_326 *uVar5;
  undefined2 uVar6;
  bool bVar7;
  astruct_325 *paVar8;
  undefined1 local_a [0x4];
  undefined4 uStack_6;
  astruct_325 *iVar4;
  
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_326 *)this_ptr;
  init_long_pair(local_a,(long)uVar5->field32_0x20);
  while( true )
  {
    do
    {
      paVar8 = (astruct_325 *)get_next_list_item(local_a);
      uVar4 = (undefined2)((ulong)paVar8 >> 0x10);
      iVar4 = (astruct_325 *)paVar8;
      if (paVar8 == NULL)
      {
        return;
      }
    } while (iVar4->field6_0x6 != type);
    uVar1 = iVar4->field9_0xa;
    if ((amount_hi == 0x0) && ((false || (amount_lo < uVar1)))) break;
    bVar7 = amount_lo < uVar1;
    amount_lo -= uVar1;
    amount_hi -= (uint)bVar7;
    puVar3 = (undefined2 *)((int)*uVar5->field32_0x20 + 0xc);
    (*(code *)*puVar3)(0x1008,uVar5->field32_0x20,iVar4);
    uStack_6 = 0x0;
  }
  uVar2 = iVar4->field10_0xc;
  iVar4->field9_0xa = uVar1 - amount_lo;
  iVar4->field10_0xc = -(amount_lo * (uVar2 / uVar1) - iVar4->field10_0xc);
  return;
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



// Decrements resource values from linked list items matching a specific type ID.
// Triggers vtable-based updates on the list owner.

void __stdcall16far
UI_Item_List_Consume_Resources_by_Type_Logic_6356
          (void *this_ptr,int type,uint amount_lo,int amount_hi)
{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  bool bVar8;
  long lVar9;
  undefined1 local_a [0x4];
  undefined4 uStack_6;
  
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar6 = (int)this_ptr;
  init_long_pair(local_a,*(long *)(iVar6 + 0x20));
  while( true )
  {
    do
    {
      lVar9 = get_next_list_item(local_a);
      uVar5 = (undefined2)((ulong)lVar9 >> 0x10);
      iVar4 = (int)lVar9;
      if (lVar9 == 0x0)
      {
        return;
      }
    } while (((*(int *)(iVar4 + 0x8) == 0x0) ||
             ((type != 0x0 && (*(int *)(iVar4 + 0x8) != type)))) ||
            ((*(int *)(iVar4 + 0x8) == 0xf && (type != 0xf))));
    uVar1 = *(uint *)(iVar4 + 0xa);
    if ((amount_hi == 0x0) && ((false || (amount_lo < uVar1)))) break;
    bVar8 = amount_lo < uVar1;
    amount_lo -= uVar1;
    amount_hi -= (uint)bVar8;
    puVar3 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar6 + 0x20) + 0xc);
    (*(code *)*puVar3)(0x1008,*(undefined4 *)(iVar6 + 0x20),iVar4);
    uStack_6 = 0x0;
  }
  uVar2 = *(uint *)(iVar4 + 0xc);
  *(int *)(iVar4 + 0xa) = *(int *)(iVar4 + 0xa) - amount_lo;
  *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) - amount_lo * (uVar2 / uVar1);
  return;
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



undefined2 __stdcall16far
UI_Build_Item_Complex_Resource_Serialize_to_File_64d6(void *param_1,void *param_2)
{
  undefined4 uVar1;
  u16 uVar2;
  undefined2 *buffer;
  int iVar3;
  undefined2 uVar4;
  void *unaff_SS;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c [0x6];
  undefined2 local_10;
  long local_e;
  undefined1 local_a [0x8];
  
  uVar2 = UI_Build_Item_Save_to_File_Logic_b5ec(param_1,param_2);
  if (uVar2 != 0x0)
  {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    init_long_pair(local_a,*(long *)((int)(void *)param_1 + 0x20));
    uVar1 = *(undefined4 *)((int)(void *)param_1 + 0x20);
    local_1c[0x0] = *(undefined2 *)((int)uVar1 + 0x8);
    buffer = local_1c;
    local_10 = local_1c[0x0];
    while( true )
    {
      iVar3 = file_write_check((long)param_2,buffer,unaff_SS);
      if (iVar3 == 0x0) break;
      local_e = get_next_list_item(local_a);
      if (local_e == 0x0)
      {
        return 0x1;
      }
      local_1e = *(undefined2 *)((int)local_e + 0x4);
      iVar3 = file_write_check((long)param_2,&local_1e,unaff_SS);
      if (iVar3 == 0x0) break;
      local_20 = *(undefined2 *)((int)local_e + 0x6);
      iVar3 = file_write_check((long)param_2,&local_20,unaff_SS);
      if (iVar3 == 0x0) break;
      local_22 = *(undefined2 *)((int)local_e + 0x8);
      iVar3 = file_write_check((long)param_2,&local_22,unaff_SS);
      if (iVar3 == 0x0) break;
      local_24 = *(undefined2 *)((int)local_e + 0xa);
      iVar3 = file_write_check((long)param_2,&local_24,unaff_SS);
      if (iVar3 == 0x0) break;
      local_26 = *(undefined2 *)((int)local_e + 0xc);
      buffer = &local_26;
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
UI_Build_Item_Complex_Resource_Deserialize_from_File_65e2(u32 param_1,void *param_2)
{
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int in_DX;
  int extraout_DX;
  undefined2 uVar5;
  void *unaff_SS;
  undefined4 local_1a;
  undefined2 local_16;
  undefined2 *local_14;
  undefined2 local_10 [0x2];
  int local_c [0x3];
  uint local_6;
  uint local_4;
  
  uVar2 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  if (uVar2 != 0x0)
  {
    iVar3 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar3 != 0x0)
    {
      local_6 = 0x0;
      while( true )
      {
        if (local_4 <= local_6)
        {
          return 0x1;
        }
        puVar4 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
        local_1a = (undefined2 *)CONCAT22(in_DX,puVar4);
        if (in_DX == 0x0 && puVar4 == NULL)
        {
          local_14 = NULL;
        }
        else
        {
          *local_1a = (char *)s_1_1050_389a;
          puVar4[0x1] = 0x1008;
          puVar4[0x2] = 0x0;
          puVar4[0x3] = 0x0;
          puVar4[0x4] = 0x0;
          puVar4[0x5] = 0x0;
          puVar4[0x6] = 0x0;
          *local_1a = 0x56ce;
          puVar4[0x1] = 0x1018;
          local_14 = local_1a;
        }
        iVar3 = file_read_check((long)param_2,local_10,unaff_SS);
        if (iVar3 == 0x0) break;
        iVar3 = file_read_check((long)param_2,local_c,unaff_SS);
        if (iVar3 == 0x0) break;
        iVar3 = file_read_check((long)param_2,&local_16,unaff_SS);
        if (iVar3 == 0x0) break;
        iVar3 = file_read_check((long)param_2,(undefined2 *)local_14 + 0x5,
                                (void *)((ulong)local_14 >> 0x10));
        if (iVar3 == 0x0) break;
        iVar3 = file_read_check((long)param_2,(undefined2 *)local_14 + 0x6,
                                (void *)((ulong)local_14 >> 0x10));
        if (iVar3 == 0x0) break;
        ((undefined2 *)local_14)[0x2] = local_10[0x0];
        iVar3 = file_context_remap_id_by_version_logic
                          ((int)(void *)param_2,(int)((ulong)param_2 >> 0x10),
                           local_c[0x0]);
        uVar5 = (undefined2)((ulong)local_14 >> 0x10);
        ((undefined2 *)local_14)[0x3] = iVar3;
        ((undefined2 *)local_14)[0x4] = local_16;
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x20) + 0x8);
        (*(code *)*puVar1)();
        local_6 += 0x1;
        in_DX = extraout_DX;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
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



// Constructor for the 'Add Spew' simulator command. Initializes base class with ID 1000
// and sets internal name to 'SCAddSpew'. Sets vtable to 0x6AE2.

void * __stdcall16far
Simulator_Command_AddSpew_ctor_init_68de
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined2 *)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x3e8);
  *(undefined4 *)(puVar1 + 0x84) = param_3;
  puVar1[0x86] = param_2;
  *param_1 = 0x6ae2;
  puVar1[0x1] = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar2,puVar1 + 0x4),s_SCAddSpew_1050_4fd2);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Colony_Sync_and_Add_SubEntity_6926(undefined4 param_1)
{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  u8 *packed_id;
  undefined2 uVar5;
  undefined2 uVar6;
  u32 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  void *pvVar10;
  long lVar11;
  undefined4 local_e;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar10 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                      (_p_SimulatorWorldContext,
                       (u8 *)(u8 *)*(undefined4 *)((int)param_1 + 0x108));
  uVar5 = (undefined2)((ulong)pvVar10 >> 0x10);
  uVar6 = uVar5;
  puVar4 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uVar9 = 0x1038;
  puVar7 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     ((int)pvVar10,uVar5,puVar4,uVar6);
  local_e = (undefined4 *)CONCAT22(puVar7,puVar4);
  uVar3 = *local_e;
  puVar2 = (undefined2 *)((int)uVar3 + 0x10);
  lVar11 = (*(code *)*puVar2)(0x1038,puVar4,puVar7);
  if (lVar11 != 0x0)
  {
    puVar2 = (undefined2 *)((int)uVar3 + 0x4);
    packed_id = (u8 *)(*(code *)*puVar2)(0x1038,puVar4,puVar7,0x0,0x0);
    pvVar10 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,packed_id);
    iVar1 = *(int *)((int)param_1 + 0x10c);
    uVar9 = 0x1030;
    UI_Component_Add_Value_to_List_at_22_Logic_7ddc
              ((int)pvVar10,(int)((ulong)pvVar10 >> 0x10),iVar1,iVar1 >> 0xf,0x1f);
  }
  if (local_e != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*local_e)(uVar9,puVar4,puVar7,0x1);
  }
  return 0x1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_69cc(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x10e));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar8 = (undefined2)((ulong)param_1 >> 0x10);
    iVar6 = (int)param_1;
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar6 + 0x108);
    puVar3[0x86] = *(undefined2 *)(iVar6 + 0x10c);
    *local_a = 0x6ae2;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_6a7a(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



undefined2 * __stdcall16far
Base_Object_dtor_Scalar_Deleting_6aa6(undefined2 *param_1,byte param_2)
{
  *param_1 = (char *)s_1_1050_389a;
  ((undefined2 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((undefined2 *)param_1);
  }
  return param_1;
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



// Submits a simulator event, triggers cardinal neighbor notifications (6b40), and
// returns 1.

u16 __stdcall16far Simulator_OnEvent_Submit_Notify_and_Return_1_6b2c(void *arg1)
{
  Simulator_Scan_All_Neighbors_and_Notify_Logic_6b40(arg1);
  return 0x1;
}
