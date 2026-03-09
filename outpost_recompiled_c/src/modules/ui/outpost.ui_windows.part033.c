/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 33/54
 * Original lines (combined): 101212-103420
 * Boundaries: top-level declarations/definitions only
 */




// Synchronizes construction resource requirements with the construction manager.
// Updates values in the managed list based on the remaining turn counter at offset
// 0x24.

void __stdcall16far
UI_Build_Item_Sync_Construction_Resources_Logic_c12e(void *this_ptr,int arg2)
{
  undefined4 uVar1;
  astruct_182 *uVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 uVar5;
  
  pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar1 = *(undefined4 *)((int)pvVar4 + 0x2e);
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_182 *)this_ptr;
  if (uVar2->field36_0x24 < 0x1)
  {
    UI_Component_Set_List_Value_at_22_Logic_7d1c(pvVar4,0x0,0x230000);
  }
  else
  {
    if (arg2 == 0x0)
    {
      uVar5 = 0x0;
    }
    else
    {
      uVar5 = 0x32;
    }
    UI_Component_Set_List_Value_at_22_Logic_7d1c(pvVar4,uVar5,0x230000);
    uVar2->field36_0x24 = uVar2->field36_0x24 + -0x1;
  }
  if ((0x0 < uVar2->field36_0x24) && (uVar2->field36_0x24 < 0x19))
  {
    *(undefined2 *)((int)uVar1 + 0x1fe) = 0x1;
  }
  return;
}



// Standard scalar deleting destructor for UI build item objects.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_c668(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI build item Type 0xC940. Initializes base state and sets vtable.

void * __stdcall16far UI_Build_Item_TypeC940_ctor_init_c6f6(void *this_ptr)
{
  undefined2 uVar1;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)((int)(void *)this_ptr + 0x20) = 0x0;
  *(undefined2 *)this_ptr = 0xc940;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1030;
  return this_ptr;
}



// Parameterized constructor for UI build item Type 0xC940.

void * __stdcall16far
UI_Build_Item_TypeC940_ctor_with_Params_c71e
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  param_1[0x10] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xc940;
  param_1[0x1] = 0x1030;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far
UI_Build_Item_Set_Active_Object_and_Timer_c74e(void *param_1,void *param_2)
{
  UI_Build_Item_Set_Active_Object_Logic_b46e(param_1,param_2);
  *(undefined2 *)((int)param_1 + 0x20) = 0x70;
  return;
}



void __stdcall16far UI_Build_Item_OnTick_State6_Check_and_Update_c76c(void *param_1)
{
  int iVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar2 = (void *)param_1;
  if ((*(int *)((int)pvVar2 + 0x12) != 0x6) && (*(int *)((int)pvVar2 + 0x12) != 0x5))
  {
    return;
  }
  iVar1 = *(int *)((int)pvVar2 + 0x20);
  if (iVar1 != 0x0)
  {
    if (((iVar1 < 0x70) || (SBORROW2(iVar1,0x70))) || (0x1 < iVar1 + -0x70))
    {
      UI_Build_Item_OnTick_State6_Update_be2a(param_1);
      return;
    }
  }
  UI_Build_Item_Transition_State_Logic_bdac(param_1,0x6);
  return;
}



undefined4 __stdcall16far
UI_Build_Item_Conditional_Set_20_c8da
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)
{
  undefined2 reg_ax;
  undefined2 reg_dx;
  undefined2 local_6;
  undefined2 uStack_4;
  
  local_6 = 0x0;
  uStack_4 = 0x0;
  if (param_3._2_2_ == 0x1)
  {
    *(undefined2 *)((int)param_1 + 0x20) = param_2._2_2_;
  }
  else
  {
    Helper_NoOp_Stub_178e();
    local_6 = reg_ax;
    uStack_4 = reg_dx;
  }
  return CONCAT22(uStack_4,local_6);
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_c91a(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI build item Type 0xD88E. Initializes base state and zero-fills a
// large 120-byte internal buffer (offset 0x20).

void * __stdcall16far UI_Build_Item_TypeD88E_ctor_init_c9a8(void *this_ptr)
{
  astruct_180 *uVar1;
  int value;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  value = (int)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_180 *)this_ptr;
  uVar1->field151_0x98 = 0x1;
  *(undefined2 *)this_ptr = 0xd88e;
  uVar1->field2_0x2 = 0x1030;
  memset_far(&uVar1->field_0x20,value,0x0);
  return this_ptr;
}



// Parameterized constructor for UI build item Type 0xD88E. Initializes base state and
// zero-fills the 10-element sub-item array starting at offset 0x20.

void * __stdcall16far
UI_Build_Item_TypeD88E_ctor_with_Params_c9e4
          (undefined2 *param_1,int param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  param_1[0x4c] = 0x1;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xd88e;
  param_1[0x1] = 0x1030;
  memset_far(param_1 + 0x10,param_2,0x0);
  return (void *)CONCAT22(param_2,param_1);
}



// Synchronizes states for all 10 sub-items. Transitions states 1/2 to 4. For other
// non-zero states, removes the associated entity from the simulator and clears the
// slot. Sets the active object at the end.

void __stdcall16far
UI_Build_Item_TypeD88E_Sync_SubItem_States_ca26(void *this_ptr,void *arg2)
{
  astruct_179 *iVar1;
  void *pvVar1;
  undefined2 uVar2;
  void *this_ptr_00;
  int iStack_4;
  
  for (iStack_4 = 0x0; pvVar1 = (void *)this_ptr,
      uVar2 = (undefined2)((ulong)this_ptr >> 0x10), iStack_4 < 0xa; iStack_4 += 0x1)
  {
    if ((*(int *)((int)pvVar1 + iStack_4 * 0xc + 0x26) == 0x2) ||
       (*(int *)((int)pvVar1 + iStack_4 * 0xc + 0x26) == 0x1))
    {
      *(undefined2 *)((int)pvVar1 + iStack_4 * 0xc + 0x26) = 0x4;
    }
    else
    {
      this_ptr_00 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
      UI_Component_Remove_Entities_of_Type_Logic_6e9c
                (this_ptr_00,0x1,*(int *)((int)pvVar1 + iStack_4 * 0xc + 0x24));
      *(undefined4 *)((int)pvVar1 + iStack_4 * 0xc + 0x20) = 0x0;
      *(undefined2 *)((int)pvVar1 + iStack_4 * 0xc + 0x24) = 0x0;
      *(undefined2 *)((int)pvVar1 + iStack_4 * 0xc + 0x26) = 0x0;
    }
  }
  UI_Build_Item_Set_Active_Object_Logic_b46e(this_ptr,arg2);
  return;
}



// Searches for a sub-item with the specified ID and state 3, then resets its state and
// linked object fields to zero.

u16 __stdcall16far
UI_Build_Item_TypeD88E_Clear_SubItem_State3_Logic_cbf0
          (int offset,u16 segment,int sub_id)
{
  astruct_178 *iVar1;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    if (0x9 < iStack_4)
    {
      return 0x0;
    }
    iVar1 = (astruct_178 *)(iStack_4 * 0xc + offset);
    if ((iVar1->field36_0x24 == sub_id) && (iVar1->field37_0x26 == 0x3)) break;
    iStack_4 += 0x1;
  }
  iVar1->field37_0x26 = 0x0;
  iVar1->field38_0x28 = 0x0;
  return 0x1;
}



// Directly sets the state and 32-bit linked object ID for a specific sub-item slot
// index (0-9).

void __stdcall16far
UI_Build_Item_TypeD88E_Set_SubItem_State_and_Object_cef8
          (void *this_ptr,void *obj_ptr,u16 state,int index)
{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  *(u16 *)(iVar2 + index * 0xc + 0x26) = state;
  uVar4 = (undefined2)((ulong)obj_ptr >> 0x10);
  uVar1 = *(undefined2 *)((int)obj_ptr + 0x6);
  *(undefined2 *)(iVar2 + index * 0xc + 0x28) = *(undefined2 *)((int)obj_ptr + 0x4);
  *(undefined2 *)(iVar2 + index * 0xc + 0x2a) = uVar1;
  return;
}



// Returns 1 if at least one sub-item with the specified ID exists in the array.

u16 __stdcall16far
UI_Build_Item_TypeD88E_Check_SubItem_Exists_cf3a(void *this_ptr,int sub_id)
{
  u16 uStack_4;
  
  uStack_4 = 0x0;
  while( true )
  {
    if (0x9 < (int)uStack_4)
    {
      return 0x0;
    }
    if (*(int *)((int)this_ptr + uStack_4 * 0xc + 0x24) == sub_id) break;
    uStack_4 += 0x1;
  }
  return 0x1;
}



// Finds and removes a sub-item by its ID. Triggers specialized cleanup if the ID is 5
// (likely research-related). Clears the array slot.

u16 __stdcall16far
UI_Build_Item_TypeD88E_Remove_SubItem_by_ID_cf78(void *this_ptr,int sub_id)
{
  void *pvVar1;
  undefined2 uVar2;
  void *this_ptr_00;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    if (0x9 < iStack_4)
    {
      return 0x0;
    }
    uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
    pvVar1 = (void *)this_ptr;
    if (*(int *)((int)pvVar1 + iStack_4 * 0xc + 0x24) == sub_id) break;
    iStack_4 += 0x1;
  }
  this_ptr_00 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  if (sub_id == 0x5)
  {
    Simulator_Entity_Decrement_SubCounter_20E_4900
              ((void *)*(undefined4 *)((int)(void *)this_ptr_00 + 0x2e));
  }
  else
  {
    UI_Component_Remove_Entities_of_Type_Logic_6e9c(this_ptr_00,0x1,sub_id);
  }
  *(undefined4 *)((int)pvVar1 + iStack_4 * 0xc + 0x20) = 0x0;
  *(undefined2 *)((int)pvVar1 + iStack_4 * 0xc + 0x24) = 0x0;
  *(undefined2 *)((int)pvVar1 + iStack_4 * 0xc + 0x26) = 0x0;
  return 0x1;
}



// Retrieves the current state/mode from offset 0x98 and triggers a state transition via
// 1030:D56A.

u16 __stdcall16far
UI_Build_Item_TypeD88E_Get_98_and_Transition_State_d0a8(void *this_ptr)
{
  u16 uVar1;
  
  uVar1 = *(u16 *)((int)this_ptr + 0x98);
  UI_Build_Item_TypeD88E_State_Machine_Transition_d56a(this_ptr);
  return uVar1;
}



// Counts the number of sub-item slots that have a non-zero tick/timestamp value at
// offset 0x20.

int __stdcall16far UI_Build_Item_TypeD88E_Count_Occupied_Slots_d0c6(void *this_ptr)
{
  int iStack_6;
  int iStack_4;
  
  iStack_4 = 0x0;
  for (iStack_6 = 0x0; iStack_6 < 0xa; iStack_6 += 0x1)
  {
    if (*(long *)((int)(void *)this_ptr + iStack_6 * 0xc + 0x20) != 0x0)
    {
      iStack_4 += 0x1;
    }
  }
  return iStack_4;
}



// Counts sub-items that are both occupied (offset 0x20 != 0) and have a non-zero state
// flag at offset 0x26.

int __stdcall16far
UI_Build_Item_TypeD88E_Count_Active_SubItems_d102(int offset,u16 segment)
{
  int iVar1;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  for (uStack_6 = 0x0; uStack_6 < 0xa; uStack_6 += 0x1)
  {
    iVar1 = uStack_6 * 0xc + offset;
    if ((*(long *)(iVar1 + 0x20) != 0x0) && (*(int *)(iVar1 + 0x26) != 0x0))
    {
      uStack_4 += 0x1;
    }
  }
  return uStack_4;
}



undefined2 __stdcall16far UI_Build_Item_All_Slots_Full_Check_d230(undefined4 param_1)
{
  undefined2 local_4;
  
  local_4 = 0x0;
  while( true )
  {
    if (0x9 < local_4)
    {
      return 0x1;
    }
    if (*(long *)((int)param_1 + local_4 * 0xc + 0x20) == 0x0) break;
    local_4 += 0x1;
  }
  return 0x0;
}



// Initializes an internal state flag (offset 6) for a sub-item based on its type ID.
// Maps specific types (4, 1-3, 0xC) to flag 0, others to 1.

void __stdcall16far
UI_Build_Item_TypeD88E_Init_SubItem_Flags_d340(u16 arg1,u16 arg2,void *subitem_ptr)
{
  int iVar1;
  astruct_171 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)subitem_ptr >> 0x10);
  uVar2 = (astruct_171 *)subitem_ptr;
  iVar1 = uVar2->field4_0x4;
  if (((0x0 < iVar1) && (!SBORROW2(iVar1,0x1))) &&
     ((iVar1 == 0x4 || iVar1 + -0x1 < 0x3 || (iVar1 == 0xc))))
  {
    uVar2->field5_0x6 = 0x0;
    return;
  }
  uVar2->field5_0x6 = 0x1;
  return;
}



// Checks if any sub-item other than the one at the specified index has a type ID of 8.
// Returns 1 if found.

u16 __stdcall16far
UI_Build_Item_TypeD88E_Check_Other_SubItem_ID8_d36e(void *this_ptr,int index)
{
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  while( true )
  {
    if (0x9 < uStack_4)
    {
      return 0x0;
    }
    if ((uStack_4 != index) && (*(int *)((int)this_ptr + uStack_4 * 0xc + 0x24) == 0x8))
    break;
    uStack_4 += 0x1;
  }
  return 0x1;
}



// Core state machine for Build Item Type D88E. Transitions the value at offset 0x98
// between various operational modes (1-12).

int __stdcall16far UI_Build_Item_TypeD88E_State_Machine_Transition_d56a(void *this_ptr)
{
  astruct_170 *paVar1;
  astruct_170 *paVar2;
  astruct_170 *uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_170 *)this_ptr;
  paVar2 = (astruct_170 *)(uVar3->field152_0x98 + -0x1);
  paVar1 = paVar2;
  if (false)
  {
switchD_1030_d5fb_caseD_4:
    uVar3->field152_0x98 = 0x1;
    return (int)paVar1;
  }
  paVar1 = uVar3;
  switch(paVar2)
  {
  case NULL:
    uVar3->field152_0x98 = 0x2;
    break;
  case (astruct_170 *)0x1:
    uVar3->field152_0x98 = 0x3;
    break;
  case (astruct_170 *)0x2:
    uVar3->field152_0x98 = 0x4;
    break;
  case (astruct_170 *)0x3:
    uVar3->field152_0x98 = 0xc;
    break;
  default:
    goto switchD_1030_d5fb_caseD_4;
  case (astruct_170 *)0x7:
    uVar3->field152_0x98 = 0x9;
    return (int)uVar3;
  case (astruct_170 *)0x8:
    uVar3->field152_0x98 = 0xb;
    return (int)uVar3;
  case (astruct_170 *)0xa:
    uVar3->field152_0x98 = 0x5;
    return (int)uVar3;
  case (astruct_170 *)0xb:
    uVar3->field152_0x98 = 0x8;
    return (int)uVar3;
  }
  return (int)uVar3;
}



void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_d868(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI build item Type 0xDC2E. Maps Type IDs 0x4C and 0x4D to specific
// internal flags (0x43, 0x44). Sets vtable to 0xDC2E.

void * __stdcall16far UI_Build_Item_TypeDC2E_ctor_init_d8f6(void *this_ptr)
{
  astruct_169 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_169 *)this_ptr;
  *(undefined2 *)this_ptr = 0xdc2e;
  uVar1->field2_0x2 = 0x1030;
  if (uVar1->field11_0xc == 0x4c)
  {
    uVar1->field12_0xe = 0x43;
  }
  else if (uVar1->field11_0xc == 0x4d)
  {
    uVar1->field12_0xe = 0x44;
  }
  else
  {
    uVar1->field12_0xe = 0x45;
  }
  return this_ptr;
}



void * __stdcall16far
UI_Build_Item_TypeDC2E_ctor_with_Params_d942
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xdc2e;
  param_1[0x1] = 0x1030;
  if (param_1[0x6] == 0x4c)
  {
    param_1[0x7] = 0x43;
  }
  else if (param_1[0x6] == 0x4d)
  {
    param_1[0x7] = 0x44;
  }
  else
  {
    param_1[0x7] = 0x45;
  }
  return (void *)CONCAT22(param_2,param_1);
}



// Core per-turn logic for buildings in the construction state (4). Validates resource
// availability (Power/Materials), decrements the construction progress counter (0x94),
// and transitions the building to state 5 (Complete) when finished.

void __stdcall16far UI_Build_Item_OnTick_Under_Construction_Logic_d994(void *this_ptr)
{
  int *piVar1;
  u16 uVar2;
  void *pvVar3;
  undefined2 uVar4;
  void *pvVar5;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = (void *)this_ptr;
  if (*(int *)((int)pvVar3 + 0x12) != 0x4)
  {
    return;
  }
  pvVar5 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  if (*(long *)((int)(void *)pvVar5 + 0x200) == 0x8000002)
  {
    piVar1 = (int *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0x94);
    *piVar1 = *piVar1 + -0x1;
  }
  else
  {
    uVar2 = UI_Build_Item_Check_Consumption_Availability_cb04(this_ptr);
    if (uVar2 == 0x0)
    {
      return;
    }
    uVar2 = UI_Build_Item_Check_Construction_Resource_Available_dace(this_ptr);
    if (uVar2 == 0x0)
    {
      return;
    }
    piVar1 = (int *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0x94);
    *piVar1 = *piVar1 + -0x1;
    UI_Build_Item_Process_Turn_Consumption_Logic_c952(this_ptr);
    UI_Build_Item_Consume_Construction_Resource_Logic_da22(this_ptr);
  }
  if (*(int *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0x94) < 0x1)
  {
    UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Locates the first active building in the construction manager's list and consumes
// construction-related resources (ID 0xD) to advance progress.

void __stdcall16far
UI_Build_Item_Consume_Construction_Resource_Logic_da22(void *this_ptr)
{
  undefined4 *this_ptr_00;
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  ulong uStack_12;
  ulong uStack_e;
  
  pvVar7 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
  this_ptr_00 = (undefined4 *)*(undefined4 *)((int)pvVar7 + 0xc);
  puVar1 = (undefined2 *)((int)*this_ptr_00 + 0x10);
  uStack_e = (*(code *)*puVar1)(0x1028,(undefined4 *)this_ptr_00,
                                *(undefined2 *)((int)pvVar7 + 0xe));
  uStack_12 = 0x0;
  while( true )
  {
    if (uStack_e <= uStack_12)
    {
      return;
    }
    pvVar7 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(this_ptr_00);
    uVar5 = (uint)((ulong)pvVar7 >> 0x10);
    uVar6 = uVar5 | (uint)pvVar7;
    if (((uVar6 != 0x0) &&
        (iVar2 = search_array_for_value
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10),
                            *(int *)((uint)pvVar7 + 0xc)), iVar2 != 0x0)) &&
       (uVar3 = UI_Item_List_Get_Value_by_ID_Offset6_6744(pvVar7,0xd),
       uVar6 != 0x0 || uVar3 != 0x0)) break;
    uStack_12 += 0x1;
  }
  UI_Build_Item_Consume_Resources_by_Type_Logic(pvVar7,0x1,0x0,0xd);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates that the required construction resources (ID 0xD) are available in at least
// one managed active building.

u16 __stdcall16far
UI_Build_Item_Check_Construction_Resource_Available_dace(void *this_ptr)
{
  undefined4 *this_ptr_00;
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  ulong uStack_14;
  ulong uStack_10;
  
  pvVar7 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
  this_ptr_00 = (undefined4 *)*(undefined4 *)((int)pvVar7 + 0xc);
  puVar1 = (undefined2 *)((int)*this_ptr_00 + 0x10);
  uStack_10 = (*(code *)*puVar1)(0x1028,(undefined4 *)this_ptr_00,
                                 *(undefined2 *)((int)pvVar7 + 0xe));
  uStack_14 = 0x0;
  while( true )
  {
    if (uStack_10 <= uStack_14)
    {
      return 0x0;
    }
    pvVar7 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(this_ptr_00);
    uVar5 = (uint)((ulong)pvVar7 >> 0x10);
    uVar6 = uVar5 | (uint)pvVar7;
    if (((uVar6 != 0x0) &&
        (iVar2 = search_array_for_value
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10),
                            *(int *)((uint)pvVar7 + 0xc)), iVar2 != 0x0)) &&
       (uVar3 = UI_Item_List_Get_Value_by_ID_Offset6_6744(pvVar7,0xd),
       uVar6 != 0x0 || uVar3 != 0x0)) break;
    uStack_14 += 0x1;
  }
  return 0x1;
}



// Transitions a building from the Paused state (6) back to the Active state (5).

void __stdcall16far UI_Build_Item_Resume_from_Pause_Logic_db78(void *this_ptr)
{
  if (*(int *)((int)(void *)this_ptr + 0x12) == 0x6)
  {
    UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x5);
  }
  return;
}



void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_dc08(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI build item Type 0xE036. This type represents a building sub-entity
// (like a wall or road segment) that must register with a parent hub. Sets vtable to
// 0xE036.

void * __stdcall16far UI_Build_Item_TypeE036_ctor_init_dc96(void *this_ptr)
{
  undefined2 uVar1;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined4 *)((int)(void *)this_ptr + 0x20) = 0x0;
  *(undefined2 *)this_ptr = 0xe036;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1030;
  return this_ptr;
}



void * __stdcall16far
UI_Build_Item_TypeE036_ctor_with_Params_dcc2
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined4 *)(param_1 + 0x10) = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xe036;
  param_1[0x1] = 0x1030;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Initialization routine for Type 0xE036. Scans the colony's managed entity list to
// find a parent hub (Type D88E) and registers itself in the first available sub-item
// slot.

void __stdcall16far UI_Build_Item_TypeE036_Register_with_Parent_Hub_df0c(void *this_ptr)
{
  ulong index;
  astruct_165 *paVar1;
  astruct_166 *this_ptr_00;
  ulong uVar2;
  u16 uVar3;
  int index_00;
  u16 segment;
  undefined2 uVar4;
  void *obj_ptr;
  void *this_ptr_01;
  u16 sub_id;
  astruct_166 *iStack_e;
  astruct_165 *iStack_a;
  
  obj_ptr = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar4 = (undefined2)((ulong)obj_ptr >> 0x10);
  paVar1 = (astruct_165 *)*(undefined4 *)((int)obj_ptr + 0x2e);
  iStack_a = (astruct_165 *)paVar1;
  if (*(int *)((int)obj_ptr + 0x30) != 0x0 || iStack_a != NULL)
  {
    uVar4 = (undefined2)((ulong)paVar1 >> 0x10);
    this_ptr_00 = *(astruct_166 **)&iStack_a->field_0x210;
    iStack_e = (astruct_166 *)this_ptr_00;
    if (iStack_a->field530_0x212 != 0x0 || iStack_e != NULL)
    {
      uVar2 = iStack_e->field10_0xa;
      uVar3 = UI_Build_Item_Get_SubItem_Category_ID_dfcc(this_ptr);
      if (uVar3 != 0x0)
      {
        for (index = 0x1; index < uVar2; index += 0x1)
        {
          sub_id = uVar3;
          this_ptr_01 = UI_Managed_List_Get_Item_at_Index_1312(this_ptr_00,index);
          segment = (u16)((ulong)this_ptr_01 >> 0x10);
          index_00 = UI_Build_Item_TypeD88E_Find_Free_Slot_by_ID_cde8
                               ((int)this_ptr_01,segment,sub_id);
          if (-0x1 < index_00)
          {
            UI_Build_Item_TypeD88E_Set_SubItem_State_and_Object_cef8
                      (this_ptr_01,obj_ptr,0x1,index_00);
            *(undefined4 *)((int)this_ptr + 0x20) =
                 *(undefined4 *)((int)this_ptr_01 + 0x4);
            return;
          }
        }
      }
    }
  }
  return;
}



// Maps building type IDs (0x73, 0x74, 0x75, 0x77, 0x78) to their internal sub-item
// category indices (1, 2, or 3).

u16 __stdcall16far UI_Build_Item_Get_SubItem_Category_ID_dfcc(void *this_ptr)
{
  int iVar1;
  u16 uStack_4;
  
  iVar1 = *(int *)((int)(void *)this_ptr + 0xc);
  if (iVar1 == 0x73)
  {
LAB_1030_dfde:
    uStack_4 = 0x1;
  }
  else
  {
    if (iVar1 != 0x74)
    {
      if (iVar1 == 0x75)
      {
        return 0x3;
      }
      if (iVar1 == 0x77) goto LAB_1030_dfde;
      if (iVar1 != 0x78)
      {
        return 0x0;
      }
    }
    uStack_4 = 0x2;
  }
  return uStack_4;
}
