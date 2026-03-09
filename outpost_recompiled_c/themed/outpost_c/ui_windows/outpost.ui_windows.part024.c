/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 24/54
 * Original lines (combined): 66360-70430
 * Boundaries: top-level declarations/definitions only
 */




// Retrieves the 4-byte and 2-byte fields from a specific element in the UI Item List by
// its zero-based index.

void __stdcall16far
UI_Item_List_Get_Item_at_Index_Logic
          (void *this_ptr,void *out_field1,void *out_field2,uint index)
{
  if (*(uint *)((int)this_ptr + 0x4) < index)
  {
    *(undefined2 *)out_field2 = 0x0;
    *(undefined4 *)out_field1 = 0x0;
    return;
  }
  *(undefined2 *)out_field2 =
       *(undefined2 *)(index * 0x6 + (int)*(undefined4 *)this_ptr + 0x4);
  *(undefined4 *)out_field1 =
       *(undefined4 *)((int)*(undefined4 *)this_ptr + index * 0x6);
  return;
}



// Finds an item in the UI Item List and adds the provided 32-bit value to its existing
// 32-bit field.

void __stdcall16far
UI_Item_List_Add_Value_to_Item_Logic
          (undefined4 param_1,undefined2 param_2,undefined4 param_3)
{
  UI_Item_List_Upsert_Item_Logic(param_1,0x1,param_2,param_3);
  return;
}



// Finds an item in the UI Item List and sets its 32-bit field to the provided value.

void __stdcall16far
UI_Item_List_Set_Item_Value_Logic
          (undefined4 param_1,undefined2 param_2,undefined4 param_3)
{
  UI_Item_List_Upsert_Item_Logic(param_1,0x0,param_2,param_3);
  return;
}



// Updates an existing item in the UI Item List or inserts a new one if not found.
// Supports adding to the existing value or overwriting it.

u16 __stdcall16far
UI_Item_List_Upsert_Item_Logic
          (void *param_1,int param_2,uint param_3,uint param_4,u16 param_5)
{
  uint *in_AX;
  uint in_DX;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uStack_6;
  
  UI_Item_List_Binary_Search_Logic(param_1,param_5);
  uStack_6 = (uint *)CONCAT22(in_DX,in_AX);
  uVar1 = in_DX | (uint)in_AX;
  if (uVar1 == 0x0)
  {
    UI_Item_List_Binary_Search_Logic(param_1,0x0);
    uVar2 = uVar1 | (uint)in_AX;
    if (uVar2 == 0x0)
    {
      UI_Item_List_Expand_Capacity_Logic(param_1);
      UI_Item_List_Binary_Search_Logic(param_1,0x0);
      if (uVar2 == 0x0 && in_AX == NULL)
      {
        return 0x0;
      }
      in_AX[0x2] = param_5;
      uVar1 = uVar2;
    }
    else
    {
      in_AX[0x2] = param_5;
    }
    if (param_2 != 0x0)
    {
      bVar3 = CARRY2(*in_AX,param_3);
      param_3 = *in_AX + param_3;
      param_4 = in_AX[0x1] + param_4 + (uint)bVar3;
    }
    *in_AX = param_3;
    in_AX[0x1] = param_4;
    UI_Item_List_Sort_Logic(param_1);
  }
  else
  {
    if (param_2 != 0x0)
    {
      bVar3 = CARRY2(*uStack_6,param_3);
      param_3 = *uStack_6 + param_3;
      param_4 = in_AX[0x1] + param_4 + (uint)bVar3;
    }
    *in_AX = param_3;
    in_AX[0x1] = param_4;
  }
  return 0x1;
}



// Sorts the UI Item List using the qsort algorithm and a specialized 6-byte element
// comparison callback.

void __stdcall16far UI_Item_List_Sort_Logic(void *this_ptr)
{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x2);
  qsort_far_array_with_callback_internal
            (*(void **)this_ptr,(int)uVar1,(int)((ulong)uVar1 >> 0x10),(void *)0x6);
  return;
}



// Performs a binary search on the UI Item List to find an element matching the provided
// key.

void __stdcall16far UI_Item_List_Binary_Search_Logic(void *this_ptr,u16 key)
{
  undefined4 uVar1;
  void *unaff_SS;
  undefined1 local_c [0x4];
  u16 uStack_8;
  
  uStack_8 = key;
  uVar1 = *(undefined4 *)((int)this_ptr + 0x2);
  bsearch_far_array_with_callback
            (local_c,unaff_SS,*(int *)this_ptr,(int)uVar1,(void *)((ulong)uVar1 >> 0x10)
             ,0x6,0xbd6c);
  return;
}



int __cdecl16far UI_Object_Compare_U16_at_4_bd6c(undefined4 param_1,undefined4 param_2)
{
  return *(int *)((int)param_1 + 0x4) - *(int *)((int)param_2 + 0x4);
}



// Constructor for a UI component specifically used in the Planet View. Initializes base
// object and sets vtable to 0xC834.

void * __stdcall16far
UI_Planet_View_Component_ctor_init_logic_c444(void *this_ptr,void *arg1,void *arg2)
{
  void *pvVar1;
  undefined2 uVar2;
  
  UI_Production_Item_Base_ctor_init_1cd8(this_ptr,arg1,arg2);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar1 = (void *)this_ptr;
  *(undefined4 *)((int)pvVar1 + 0x18) = 0x0;
  *(undefined2 *)((int)pvVar1 + 0x1c) = 0x0;
  *(undefined2 *)this_ptr = 0xc834;
  *(undefined2 *)((int)pvVar1 + 0x2) = 0x1020;
  return this_ptr;
}



u32 __stdcall16far UI_Object_Get_Dword_10_c538(u32 param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(param_1 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)param_1 + 0x12),
                  *(undefined2 *)((int)param_1 + 0x10));
}



void __stdcall16far
UI_Managed_List_Append_Item_c644
          (undefined4 *param_1,undefined2 param_2,undefined4 param_3)
{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined4 local_6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  if (puVar4[0x6] == 0x0)
  {
    puVar2 = (undefined2 *)((int)*param_1 + 0x20);
    (*(code *)*puVar2)();
  }
  puVar3 = (undefined4 *)(*(int *)(puVar4 + 0x2) * 0x6 + *(int *)(puVar4 + 0x6));
  uVar1 = *(undefined2 *)((int)puVar4 + 0x1a);
  local_6 = (undefined4 *)CONCAT22(uVar1,puVar3);
  puVar4[0x2] = puVar4[0x2] + 0x1;
  *local_6 = param_3;
  *(undefined2 *)(puVar3 + 0x1) = param_2;
  return;
}



int __cdecl16far UI_Object_Compare_U16_at_4_c7fa(undefined4 param_1,undefined4 param_2)
{
  return *(int *)((int)param_1 + 0x4) - *(int *)((int)param_2 + 0x4);
}



// Accessor for a far pointer stored within a UI list node structure (offsets 4 and 6).

void * __stdcall16far UI_List_Node_Get_Target_FarPtr_c860(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  return (void *)CONCAT22(*(undefined2 *)((int)(void *)this_ptr + 0x6),
                          (void *)*(undefined2 *)((int)(void *)this_ptr + 0x4));
}



// Constructor for a UI component using vtable 0xCC7C. Initializes base object state.

void * __stdcall16far UI_Component_Type_CC7C_ctor(void *this_ptr)
{
  UI_Build_Item_Type_0ADA_ctor_init_0954(this_ptr);
  *(undefined2 *)this_ptr = 0xcc7c;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Parameterized constructor for a UI component using vtable 0xCC7C. Passes arguments to
// base class constructor.

void * __stdcall16far
UI_Component_Type_CC7C_ctor_with_Params
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Type_0ADA_ctor_with_Params_0982
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xcc7c;
  param_1[0x1] = 0x1020;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_Finalize_and_Decrement_Resource_8_ca36(void *param_1,undefined2 param_2)
{
  void *pvVar1;
  
  UI_Build_Item_Set_Flag_at_14_Logic_09b8((void *)CONCAT22(param_2,param_1));
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2
                     ((void *)CONCAT22(param_2,param_1));
  if (*(long *)((int)(void *)pvVar1 + 0x200) != 0x8000002)
  {
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
    UI_Object_Decrement_Item_Count_in_Collection_E_Logic_maybe
              ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10));
  }
  return;
}



// Update logic for UI component CC7C. Triggers specialized state updates if certain
// conditions (state 5 and object type) are met.

void __stdcall16far UI_Component_Type_CC7C_Update_Logic(void *this_ptr)
{
  void *pvVar1;
  
  UI_Build_Item_OnTick_State4_Update_be9e(this_ptr);
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  if (*(long *)((int)(void *)pvVar1 + 0x200) != 0x8000002)
  {
    if (*(int *)((int)(void *)this_ptr + 0x12) == 0x5)
    {
      Simulator_Process_Entity_Turn_Updates_Logic(this_ptr);
    }
  }
  return;
}



// Scalar deleting destructor for UI component CC7C.

void * __stdcall16far
UI_Component_Type_CC7C_dtor_Scalar_Deleting(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for a UI component using vtable 0xCD7E.

void * __stdcall16far UI_Component_Type_CD7E_ctor(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0xcd7e;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Parameterized constructor for a UI component using vtable 0xCD7E.

void * __stdcall16far
UI_Component_Type_CD7E_ctor_with_Params
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xcd7e;
  param_1[0x1] = 0x1020;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



u16 __stdcall16far UI_Build_Item_Check_State_and_Flag_1A_cd30(u32 param_1)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (((*(int *)(iVar1 + 0x12) == 0x6) || (*(int *)(iVar1 + 0x12) == 0x5)) &&
     ((*(byte *)(iVar1 + 0x1a) & 0x2) != 0x0))
  {
    return 0x1;
  }
  return 0x0;
}



// Scalar deleting destructor for UI component CD7E.

void * __stdcall16far
UI_Component_Type_CD7E_dtor_Scalar_Deleting(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for a UI component using vtable 0xD004.

void * __stdcall16far UI_Component_Type_D004_ctor(void *this_ptr)
{
  UI_Build_Item_Type_0ADA_ctor_init_0954(this_ptr);
  *(undefined2 *)this_ptr = 0xd004;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Constructor for UI Build Item Type 53. Initializes base class and sets vtable to
// 0xD004.

void * __stdcall16far
UI_Build_Item_Type53_ctor_init_ce08
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Type_0ADA_ctor_with_Params_0982
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xd004;
  param_1[0x1] = 0x1020;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Scalar deleting destructor for UI Build Item base class.

void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_cfde(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 54. Initializes base class and sets vtable to
// 0xD314.

void * __stdcall16far UI_Build_Item_Type54_ctor_init_d06c(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0xd314;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Constructor for UI Build Item Type 55. Initializes base class and sets vtable to
// 0xD314.

void * __stdcall16far
UI_Build_Item_Type55_ctor_init_d08e
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xd314;
  param_1[0x1] = 0x1020;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far UI_Build_Item_State6_Transition_Check_d0b8(void *param_1)
{
  u16 uVar1;
  void *pvVar2;
  int new_state;
  
  if (*(int *)((int)(void *)param_1 + 0x12) != 0x6)
  {
    return;
  }
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(param_1);
  if (*(long *)((int)(void *)pvVar2 + 0x200) != 0x8000002)
  {
    uVar1 = UI_Build_Item_Check_Consumption_Availability_cb04(param_1);
    if ((uVar1 == 0x0) ||
       (uVar1 = Simulator_Coordinate_Interaction_Trigger_d194(param_1), uVar1 == 0x0))
    {
      new_state = 0x6;
      goto LAB_1020_d10b;
    }
    UI_Build_Item_Process_Turn_Consumption_Logic_c952(param_1);
  }
  new_state = 0x5;
LAB_1020_d10b:
  UI_Build_Item_Transition_State_Logic_bdac(param_1,new_state);
  return;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_d2ee(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 56. Initializes base class and sets vtable to
// 0xD53E.

void * __stdcall16far UI_Build_Item_Type56_ctor_init_d37c(void *this_ptr)
{
  undefined2 uVar1;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)((int)(void *)this_ptr + 0x20) = 0x0;
  *(undefined2 *)this_ptr = 0xd53e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 56. Initializes base class and sets
// field 0x20. Sets vtable to 0xD53E.

void * __stdcall16far
UI_Build_Item_Type56_ctor_with_Params_d3a4(void *this_ptr,u16 arg1,u16 arg2,void *arg3)
{
  undefined2 uVar1;
  
  UI_Build_Item_Base_ctor_with_Params_b39e(this_ptr,arg2,arg3);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(u16 *)((int)(void *)this_ptr + 0x20) = arg1;
  *(undefined2 *)this_ptr = 0xd53e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool __stdcall16far
UI_Build_Item_Placement_Validate_and_Loop_d460
          (void *param_1,void *param_2,long param_3,long param_4)
{
  u16 uVar1;
  long lVar2;
  
  uVar1 = UI_Build_Item_Complex_Placement_Validator_bc90
                    (param_1,param_2,param_3,param_4);
  if (uVar1 != 0x0)
  {
    UI_SubDialog_Factory_Create_and_Show_by_ID_af40
              (_p_UISubDialogTable,*(uint16_t *)((int)_p_GlobalPaletteObject + 0x16),
               0x11);
    PTR_DAT_1050_0000_1050_5b80 = (undefined *)0x1;
    win16_conditional_message_loop((int *)(undefined **)&PTR_DAT_1050_0000_1050_5b80);
    lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3a);
    *(undefined2 *)((int)param_1 + 0x20) = *(undefined2 *)((int)lVar2 + 0xa);
  }
  return uVar1 != 0x0;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_d518(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 57. Initializes base class and sets vtable to
// 0xD7FE.

void * __stdcall16far UI_Build_Item_Type57_ctor_init_d5a6(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0xd7fe;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 57. Initializes base class and sets
// vtable to 0xD7FE.

void * __stdcall16far
UI_Build_Item_Type57_ctor_with_Params_d5c8
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xd7fe;
  param_1[0x1] = 0x1020;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Scalar deleting destructor for UI Build Item Type 57.

void * __stdcall16far
UI_Build_Item_Type57_dtor_Scalar_Deleting_d7d8(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 58. Initializes base class and sets vtable to
// 0xD8EC.

void * __stdcall16far UI_Build_Item_Type58_ctor_init_d866(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0xd8ec;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 58. Initializes base class and sets
// vtable to 0xD8EC.

void * __stdcall16far
UI_Build_Item_Type58_ctor_with_Params_d888
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xd8ec;
  param_1[0x1] = 0x1020;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_d8c6(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Handles construction submission events. Triggers neighbor notification and cycles
// through related object state (using 1038:57DC) unless the event is type 0x79.

void __stdcall16far
Simulator_OnConstruction_Submit_Notify_and_Cycle_d9fa(void *this_ptr)
{
  void *pvVar1;
  
  if (*(int *)((int)(void *)this_ptr + 0xc) != 0x79)
  {
    UI_Build_Item_TypeE036_Register_with_Parent_Hub_df0c(this_ptr);
    pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    Colony_Add_to_Current_Population_at_1A2_57dc
              ((void *)*(undefined4 *)((int)(void *)pvVar1 + 0x2e),0x1,0x2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Enters a modal message loop after triggering a sound/event (using 1038:af40). Updates
// internal state based on event results upon exit.

void __stdcall16far Simulator_Enter_Modal_Event_Loop_de32(u32 arg1,u16 event_id)
{
  u16 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  long lVar4;
  
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x5);
  uVar2 = (undefined2)((ulong)lVar4 >> 0x10);
  *(u16 *)((int)lVar4 + 0x12) = event_id;
  uVar1 = UI_Global_Focus_and_Bring_to_Top_by_Index_b72e(_p_UISubDialogTable,0x4);
  if (uVar1 == 0x0)
  {
    UI_SubDialog_Factory_Create_and_Show_by_ID_af40
              (_p_UISubDialogTable,*(uint16_t *)((int)_p_GlobalPaletteObject + 0x16),0x4
              );
  }
  PTR_DAT_1050_0000_1050_5b80 = (undefined *)0x1;
  win16_conditional_message_loop((int *)(undefined **)&PTR_DAT_1050_0000_1050_5b80);
  uVar3 = (undefined2)(arg1 >> 0x10);
  *(undefined2 *)((int)arg1 + 0x24) = *(undefined2 *)((int)lVar4 + 0xa);
  if (*(int *)((int)arg1 + 0x24) == 0x0)
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b2;
  }
  return;
}



void * __stdcall16far
UI_Build_Item_TypeE036_dtor_Scalar_Deleting_e76c(void *param_1,byte param_2)
{
  UI_Build_Item_TypeE036_dtor_Internal_dcf4(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 59. Initializes base class and sets vtable to
// 0xE88E.

void * __stdcall16far UI_Build_Item_Type59_ctor_init_e7fa(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0xe88e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 59. Initializes base class and sets
// vtable to 0xE88E.

void * __stdcall16far
UI_Build_Item_Type59_ctor_with_Params_e81c
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xe88e;
  param_1[0x1] = 0x1020;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Internal destructor for UI Build Item Type 59. Reverts vtable and calls base cleanup.

void __stdcall16far UI_Build_Item_Type59_dtor_Internal_e846(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0xe88e;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1020;
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  return;
}



void * __stdcall16far
UI_Build_Item_Type59_dtor_Scalar_Deleting_e868(void *param_1,byte param_2)
{
  UI_Build_Item_Type59_dtor_Internal_e846(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Construction Item Type 60. Initializes base class, sets field 0x24
// to 0, and sets vtable to 0xEEF6.

void * __stdcall16far UI_Construction_Item_Type60_ctor_init_e8f6(void *this_ptr)
{
  undefined2 uVar1;
  
  UI_Build_Item_TypeE036_ctor_init_dc96(this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x24) = 0x0;
  *(undefined2 *)this_ptr = 0xeef6;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Parameterized constructor for UI Construction Item Type 60. Initializes base class
// and sets vtable to 0xEEF6.

void * __stdcall16far
UI_Construction_Item_Type60_ctor_with_Params_e91e
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_TypeE036_ctor_with_Params_dcc2
            (param_1,CONCAT22(param_3,param_2),param_4);
  param_1[0x12] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xeef6;
  param_1[0x1] = 0x1020;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far
UI_Build_Item_TypeE036_Register_and_Inc_Population_e9d4
          (void *param_1,undefined2 param_2)
{
  void *pvVar1;
  
  UI_Build_Item_TypeE036_Register_with_Parent_Hub_df0c
            ((void *)CONCAT22(param_2,param_1));
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e
                     ((void *)CONCAT22(param_2,param_1));
  Colony_Add_to_Current_Population_at_1A2_57dc
            ((void *)*(undefined4 *)((int)(void *)pvVar1 + 0x2e),0x1,0x1);
  return;
}



// Processes a type 1 event for a UI build item, likely related to selection or state
// confirmation.

void __stdcall16far UI_Build_Item_Process_Event_Type1_Logic_ea0e(void *this_ptr)
{
  UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x1);
  return;
}



void * __stdcall16far
UI_Build_Item_TypeE036_dtor_Scalar_Deleting_eed0(void *param_1,byte param_2)
{
  UI_Build_Item_TypeE036_dtor_Internal_dcf4(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Alternative internal destructor for UI Build Items that resets vtable to 0x1028:0000.

void __stdcall16far UI_Build_Item_Base_dtor_Internal_Alternative_ef5e(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0x0;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  return;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_ef94(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_Alternative_ef5e(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}
