/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 25/54
 * Original lines (combined): 70431-72388
 * Boundaries: top-level declarations/definitions only
 */




// Constructor for a UI build item using vtable 0x08EC. Initializes an internal
// sub-object via a construct-with-vtable call.

void * __stdcall16far UI_Build_Item_Type_08EC_ctor_0068(void *this_ptr)
{
  astruct_491 *this;
  void *pvVar1;
  uint uVar2;
  uint uVar4;
  astruct_336 *uVar3;
  void *pvVar5;
  void *pvVar6;
  undefined2 uVar7;
  undefined2 in_stack_0000fffa;
  
  pvVar6 = (void *)this_ptr;
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar5 = UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar2 = (uint)((ulong)pvVar5 >> 0x10);
  *(undefined2 *)((int)pvVar6 + 0x20) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x22) = 0x0;
  *(undefined2 *)this_ptr = 0x8ec;
  *(undefined2 *)((int)pvVar6 + 0x2) = 0x1028;
  this = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar4 = uVar2 | (uint)this;
  if (uVar4 == 0x0)
  {
    *(undefined4 *)((int)pvVar6 + 0x22) = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this,uVar2);
    *(undefined2 *)((int)pvVar6 + 0x22) = pvVar1;
    *(uint *)((int)pvVar6 + 0x24) = uVar4;
  }
  return this_ptr;
}



// Parameterized constructor for a UI build item using vtable 0x08EC.

void * __stdcall16far
UI_Build_Item_Type_08EC_ctor_with_Params_00cc
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
  param_1[0x10] = 0x0;
  *(undefined4 *)(param_1 + 0x11) = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x8ec;
  param_1[0x1] = 0x1028;
  this = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar3 = uVar2 | (uint)this;
  if (uVar3 == 0x0)
  {
    *(undefined4 *)(param_1 + 0x11) = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this,uVar2);
    param_1[0x11] = pvVar1;
    param_1[0x12] = uVar3;
  }
  return (void *)CONCAT22(param_2,param_1);
}



// Internal destructor for build item 0x08EC. Cleans up its internal sub-object and
// reverts vtables.

void __stdcall16far UI_Build_Item_Type_08EC_dtor_Internal_0138(void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  *(undefined2 *)this_ptr = 0x8ec;
  *(undefined2 *)((int)pvVar2 + 0x2) = 0x1028;
  if (*(int *)((int)pvVar2 + 0x24) != 0x0 ||
      (undefined4 *)*(int *)((int)pvVar2 + 0x22) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)pvVar2 + 0x22);
    (*(code *)*puVar1)();
  }
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  return;
}



void __stdcall16far
UI_Build_Item_Transition_and_Create_SubObject_0176(void *param_1,void *param_2)
{
  undefined2 *puVar1;
  astruct_491 *this;
  void *pvVar2;
  uint extraout_DX;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_SI;
  void *this_ptr;
  void *pvVar5;
  undefined2 uVar6;
  u16 value;
  
  pvVar5 = (void *)param_1;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Set_Active_Object_Logic_b46e(param_1,param_2);
  uVar3 = 0x0;
  if (*(int *)((int)pvVar5 + 0x24) != 0x0 ||
      (undefined4 *)*(int *)((int)pvVar5 + 0x22) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)pvVar5 + 0x22);
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
  *(undefined2 *)((int)pvVar5 + 0x22) = pvVar2;
  *(uint *)((int)pvVar5 + 0x24) = uVar4;
  value = 0x14;
  this_ptr = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  UI_Component_Update_Entity_Resource_Field2_7f1a(this_ptr,value);
  return;
}



void __stdcall16far UI_Build_Item_Conditional_OnTick_Update_01ec(void *param_1)
{
  void *pvVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar1 = (void *)param_1;
  if ((*(int *)((int)pvVar1 + 0x12) == 0x6) || (*(int *)((int)pvVar1 + 0x12) == 0x5))
  {
    uVar4 = (undefined2)((ulong)*(undefined4 *)((int)pvVar1 + 0x14) >> 0x10);
    iVar2 = (int)*(undefined4 *)((int)pvVar1 + 0x14);
    if ((*(int *)(iVar2 + 0xa6) == 0x14) || (*(int *)(iVar2 + 0xa8) == 0x10))
    {
      UI_Build_Item_Transition_State_Logic_bdac(param_1,0x6);
      return;
    }
    UI_Build_Item_OnTick_State6_Update_be2a(param_1);
  }
  return;
}



undefined2 __stdcall16far
UI_Build_Item_Sum_List_Values_at_0C_Limit_30(undefined4 param_1,uint *param_2)
{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined1 local_a [0x8];
  
  param_2[0x0] = 0x0;
  param_2[0x1] = 0x0;
  init_long_pair(local_a,*(long *)((int)param_1 + 0x22));
  do
  {
    lVar5 = get_next_list_item(local_a);
    if (lVar5 == 0x0)
    {
      return 0x0;
    }
    uVar3 = *(uint *)((int)lVar5 + 0xc);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    uVar2 = *param_2;
    *param_2 = *param_2 + uVar3;
    puVar1 = (uint *)param_2 + 0x1;
    *puVar1 = *puVar1 + (uint)CARRY2(uVar2,uVar3);
  } while ((((uint *)param_2)[0x1] == 0x0) && (*param_2 < 0x1e));
  return 0x1;
}



// Performs a turn update for a build item. If in state 5, pushes a specific event (code
// 4, val 1) to the Turn Manager.

void __stdcall16far UI_Build_Item_Turn_Update_Push_Event_0550(void *this_ptr)
{
  void *pvVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  UI_Build_Item_OnTick_State4_Update_be9e(this_ptr);
  if (*(int *)((int)this_ptr + 0x12) == 0x5)
  {
    uVar3 = 0x40000;
    uVar2 = 0x1;
    pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    UI_Component_Batch_Spawn_SubEntities_Logic_7c50
              ((int)pvVar1,(int)((ulong)pvVar1 >> 0x10),uVar2,uVar3);
  }
  return;
}



// Scalar deleting destructor for UI build item Type 0x08EC.

void * __stdcall16far
UI_Build_Item_Type_08EC_dtor_Scalar_Deleting_08c6(void *this_ptr,byte flags)
{
  UI_Build_Item_Type_08EC_dtor_Internal_0138(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 0x0ADA. Initializes base class, sets field 0x20 to
// 0, and sets vtable to 0x0ADA. Default display layer 0x4B.

void * __stdcall16far UI_Build_Item_Type_0ADA_ctor_init_0954(void *this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  *(undefined2 *)(iVar1 + 0x20) = 0x0;
  *(undefined2 *)this_ptr = 0xada;
  *(undefined2 *)(iVar1 + 0x2) = 0x1028;
  *(undefined2 *)(iVar1 + 0xe) = 0x4b;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x0ADA.

void * __stdcall16far
UI_Build_Item_Type_0ADA_ctor_with_Params_0982
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  param_1[0x10] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xada;
  param_1[0x1] = 0x1028;
  param_1[0x7] = 0x4b;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Retrieves the associated simulator object and sets a flag at its offset 0x14.

void __stdcall16far UI_Build_Item_Set_Flag_at_14_Logic_09b8(void *this_ptr)
{
  void *pvVar1;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  *(undefined2 *)((int)(void *)pvVar1 + 0x14) = 0x1;
  return;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_0ab4(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x0BBC. Initializes base class and sets vtable to
// 0x0BBC.

void * __stdcall16far UI_Build_Item_Type_0BBC_ctor_init_0b42(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0xbbc;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x0BBC.

void * __stdcall16far
UI_Build_Item_Type_0BBC_ctor_with_Params_0b64
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xbbc;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_0b96(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x1724. Initializes base class and sets vtable to
// 0x1724. Includes two 2-byte state fields at 0x20/0x22.

void * __stdcall16far UI_Build_Item_Type_1724_ctor_init_0c24(void *this_ptr)
{
  astruct_335 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_335 *)this_ptr;
  uVar1->field31_0x20 = 0x0;
  uVar1->field32_0x22 = 0x0;
  *(char **)this_ptr = (char *)s_480_bmp_1050_1721 + 0x3;
  uVar1->field2_0x2 = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x1724.

void * __stdcall16far
UI_Build_Item_Type_1724_ctor_with_Params_0c50
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  param_1[0x10] = 0x0;
  param_1[0x11] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_480_bmp_1050_1721 + 0x3;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Retrieves the 2-byte state at offset 0x20 and triggers a virtual refresh callback
// (1028:1646).

u16 __stdcall16far UI_Build_Item_Get_and_Refresh_State_20_Logic_0d80(void *this_ptr)
{
  u16 uVar1;
  
  uVar1 = *(u16 *)((int)(void *)this_ptr + 0x20);
  UI_Build_Item_Cycle_Internal_State_20_Logic_1646(this_ptr);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Per-tick maintenance for specific build items (Resource 0x13, 2). Handles state
// transitions to 9 (offline/depleted) and decrements counters at offset 0x22 while in
// state 5.

void __stdcall16far UI_Build_Item_OnTick_State_Maintenance_0ea6(void *this_ptr)
{
  int iVar1;
  u16 uVar2;
  void *pvVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = (void *)this_ptr;
  if (*(int *)((int)pvVar3 + 0xc) != 0x10)
  {
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),
                       *(int *)((int)pvVar3 + 0xc));
    if (iVar1 == 0x0)
    {
      iVar1 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),
                         *(int *)((int)pvVar3 + 0xc));
      if (((iVar1 != 0x0) && (*(int *)((int)pvVar3 + 0x12) != 0x7)) &&
         (*(int *)((int)pvVar3 + 0x12) != 0x4))
      {
        uVar2 = UI_Build_Item_Check_If_Any_Neighbor_Is_Offline_1556(this_ptr);
        if (uVar2 == 0x0) goto LAB_1028_0f0a;
        if (*(int *)((int)pvVar3 + 0x12) == 0x9)
        {
          *(undefined2 *)((int)pvVar3 + 0x12) = 0x5;
        }
      }
    }
    else if (*(int *)((int)pvVar3 + 0x22) < 0x1)
    {
      if ((*(int *)((int)pvVar3 + 0x12) != 0x5) && (*(int *)((int)pvVar3 + 0x12) != 0x6)
         )
      {
        return;
      }
      free_if_not_null((void *)(void *)*(undefined4 *)((int)pvVar3 + 0x14));
      *(undefined4 *)((int)pvVar3 + 0x14) = 0x0;
LAB_1028_0f0a:
      *(undefined2 *)((int)pvVar3 + 0x12) = 0x9;
      return;
    }
    UI_Build_Item_OnTick_State6_Update_be2a(this_ptr);
    if (*(int *)((int)pvVar3 + 0x12) == 0x5)
    {
      *(int *)((int)pvVar3 + 0x22) = *(int *)((int)pvVar3 + 0x22) + -0x1;
      UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_State4_Finalize_and_Batch_Spawn_0fa4(void *param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  void *pvVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  UI_Build_Item_OnTick_State4_Update_be9e(param_1);
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  iVar1 = *(int *)((int)lVar5 + 0x82);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x12) == 0x5)
  {
    iVar2 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),
                       *(int *)(iVar3 + 0xc));
    if ((iVar2 != 0x0) && ((PTR_DAT_1050_0000_1050_4fbc == NULL || (iVar1 != 0x0))))
    {
      PTR_DAT_1050_0000_1050_4fbc = (undefined *)0x1;
      uVar8 = 0x0;
      uVar9 = 0x4;
      uVar7 = 0x1;
      pvVar6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
      UI_Component_Batch_Spawn_SubEntities_Logic_7c50(pvVar6,uVar7,uVar8,uVar9);
    }
    *(undefined2 *)(iVar3 + 0x22) = 0x64;
  }
  return;
}



// Checks if the associated simulator object's type ID (at offset 0x10) is 0.

bool __stdcall16far UI_Build_Item_Check_If_Type_Is_0_11de(void *this_ptr)
{
  void *pvVar1;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  return *(int *)((int)pvVar1 + 0x10) == 0x0;
}



undefined2 __stdcall16far
UI_Build_Item_Sum_Resource_List_4_13_Check_500(void *param_1,ulong *param_2)
{
  int *piVar1;
  undefined2 *puVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 extraout_AH;
  undefined2 uVar5;
  undefined4 *puVar6;
  void *this_ptr;
  void *pvVar7;
  u16 local_8;
  
  bVar4 = UI_Build_Item_Check_If_Type_Is_0_11de(param_1);
  if (CONCAT11(extraout_AH,bVar4) == 0x0)
  {
    puVar6 = UI_Build_Item_Get_Neighbor_Entity_121e(param_1);
    puVar2 = (undefined2 *)((int)*puVar6 + 0x40);
    uVar5 = (*(code *)*puVar2)();
    return uVar5;
  }
  *param_2 = 0x0;
  this_ptr = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_8 = 0x4;
  do
  {
    pvVar7 = UI_Component_Find_Item_in_List_22_Logic_7c28(this_ptr,local_8);
    uVar3 = *param_2;
    *(uint *)param_2 = (int)*param_2 + (uint)pvVar7;
    piVar1 = (int *)((int)(ulong *)param_2 + 0x2);
    *piVar1 = *piVar1 + (int)((ulong)pvVar7 >> 0x10) +
              (uint)CARRY2((uint)uVar3,(uint)pvVar7);
    local_8 += 0x1;
  } while ((int)local_8 < 0xe);
  if (0x1f4 < *param_2)
  {
    return 0x1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes per-turn energy production for specific building types. Calculates produced
// energy from internal state and distributes it to the colony's energy pool. Increments
// state 0x22 on success.

void __stdcall16far UI_Build_Item_Process_Turn_Energy_Production_134a(void *this_ptr)
{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  void *pvVar6;
  undefined4 uStack_1a;
  int iStack_16;
  undefined4 uStack_a;
  long local_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar3 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),
                     *(int *)((int)this_ptr + 0xc));
  if (iVar3 != 0x0)
  {
    puVar2 = (undefined2 *)((int)*(undefined4 *)this_ptr + 0x40);
    iVar3 = (*(code *)*puVar2)();
    if (iVar3 != 0x0)
    {
      piVar1 = (int *)((int)this_ptr + 0x22);
      *piVar1 = *piVar1 + 0x1;
      return;
    }
    uStack_a = 0x1f4 - local_6;
    pvVar6 = UI_Build_Item_Get_Neighbor_Entity_121e(this_ptr);
    pvVar6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(pvVar6);
    for (iStack_16 = 0x0; iStack_16 < 0xa; iStack_16 += 0x1)
    {
      iVar3 = *(int *)(iStack_16 * 0x2 + 0x4fbe);
      iVar4 = iVar3 >> 0xf;
      if (uStack_a < iVar3)
      {
        iVar3 = (int)uStack_a;
        iVar4 = uStack_a._2_2_;
      }
      uStack_1a = CONCAT22(iVar4,iVar3);
      UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                (pvVar6,iVar3,iVar4,iStack_16 + 0x4);
      uStack_a -= uStack_1a;
      if (uStack_a < 0x1)
      {
        return;
      }
    }
  }
  return;
}



// Recursively calculates the total resource output for a building and its linked
// sub-entities. Final result is multiplied by 15.

int __stdcall16far UI_Build_Item_Calculate_Total_Resource_Output_1416(void *this_ptr)
{
  bool bVar1;
  undefined1 extraout_AH;
  int iVar2;
  void *this_ptr_00;
  
  bVar1 = UI_Build_Item_Check_If_Type_Is_0_11de(this_ptr);
  if (CONCAT11(extraout_AH,bVar1) == 0x0)
  {
    this_ptr_00 = UI_Build_Item_Get_Neighbor_Entity_121e(this_ptr);
    iVar2 = UI_Build_Item_Calculate_Total_Resource_Output_1416(this_ptr_00);
    return iVar2;
  }
  iVar2 = UI_Build_Item_Count_Active_Buildings_in_Range_1024(this_ptr);
  return iVar2 * 0xf;
}



// Cycles an internal state variable (offset 0x20) through a sequence of values (4-13).
// Returns the updated object pointer.

int __stdcall16far UI_Build_Item_Cycle_Internal_State_20_Logic_1646(void *this_ptr)
{
  int iVar1;
  astruct_334 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_334 *)this_ptr;
  iVar1 = uVar2->field32_0x20 + -0x4;
  switch(iVar1)
  {
  case 0x0:
    uVar2->field32_0x20 = 0x5;
    break;
  case 0x1:
    uVar2->field32_0x20 = 0x6;
    break;
  case 0x2:
    uVar2->field32_0x20 = 0x7;
    break;
  case 0x3:
    uVar2->field32_0x20 = 0x8;
    break;
  case 0x4:
    uVar2->field32_0x20 = 0x9;
    break;
  case 0x5:
    uVar2->field32_0x20 = 0xa;
    return (int)uVar2;
  case 0x6:
    uVar2->field32_0x20 = 0xb;
    return (int)uVar2;
  case 0x7:
    uVar2->field32_0x20 = 0xc;
    return (int)uVar2;
  case 0x8:
    uVar2->field32_0x20 = 0xd;
    return (int)uVar2;
  default:
    uVar2->field32_0x20 = 0x4;
    return iVar1;
  }
  return (int)uVar2;
}



// Standard scalar deleting destructor for generic UI build items.

void * __stdcall16far
UI_Build_Item_Scalar_Deleting_Dtor_Wrapper_16fe(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Construction Item Type 6B (0x6B). Initializes base class and sets
// vtable to 0x1B54.

void * __stdcall16far UI_Construction_Item_Type6B_ctor_init(void *this_ptr)
{
  UI_Build_Item_TypeE036_ctor_init_dc96(this_ptr);
  *(char **)this_ptr = (char *)s_42_flc_1050_1b54;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Construction Item Type 6B. Initializes base class
// and sets vtable to 0x1B54.

void * __stdcall16far
UI_Construction_Item_Type6B_ctor_with_Params
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_TypeE036_ctor_with_Params_dcc2
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_42_flc_1050_1b54;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far
UI_Build_Item_TypeE036_Register_and_Inc_Population_Cat3
          (void *param_1,undefined2 param_2)
{
  void *pvVar1;
  
  UI_Build_Item_TypeE036_Register_with_Parent_Hub_df0c
            ((void *)CONCAT22(param_2,param_1));
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e
                     ((void *)CONCAT22(param_2,param_1));
  Colony_Add_to_Current_Population_at_1A2_57dc
            ((void *)*(undefined4 *)((int)pvVar1 + 0x2e),0x1,0x3);
  return;
}



// Wrapper that triggers event processing logic of type 2 for a UI build item.

void __stdcall16far UI_Build_Item_Process_Event_Type2_Logic_1812(void *this_ptr)
{
  UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x2);
  return;
}



void __stdcall16far UI_Build_Item_Set_State_7_1b1e(u32 param_1)
{
  *(undefined2 *)((int)param_1 + 0x14) = 0x7;
  return;
}



// Scalar deleting destructor for UI Construction Item Type 6B.

void * __stdcall16far
UI_Construction_Item_Type6B_dtor_Scalar_Deleting(void *this_ptr,byte flags)
{
  UI_Build_Item_TypeE036_dtor_Internal_dcf4(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 6C (0x6C). Initializes base class and sets vtable
// to 0x1EEE.

void * __stdcall16far UI_Build_Item_Type6C_ctor_init(void *this_ptr)
{
  astruct_333 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_333 *)this_ptr;
  uVar1->field31_0x20 = 0x0;
  uVar1->field32_0x22 = 0x0;
  *(char **)this_ptr = (char *)s_526_bmp_1050_1ee7 + 0x7;
  uVar1->field2_0x2 = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 6C. Initializes base class and sets
// vtable to 0x1EEE.

void * __stdcall16far
UI_Build_Item_Type6C_ctor_with_Params
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  param_1[0x10] = 0x0;
  param_1[0x11] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_526_bmp_1050_1ee7 + 0x7;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



u16 __stdcall16far UI_Build_Item_Get_Specialized_State_ID_1c22(u32 param_1)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)(param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0x20) != 0x0) &&
     ((*(int *)(iVar2 + 0x12) == 0x5 || (*(int *)(iVar2 + 0x12) == 0x6))))
  {
    if (*(int *)(iVar2 + 0xc) == 0x16)
    {
      return 0x19;
    }
    if (*(int *)(iVar2 + 0xc) == 0x17)
    {
      return 0x1a;
    }
  }
  uVar1 = UI_Build_Item_Get_ID_for_Current_State_bc1c(param_1);
  return uVar1;
}



void __stdcall16far
UI_Build_Item_State6_Transition_Check_with_VCall_1c66(undefined4 *param_1)
{
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  void *pvVar4;
  
  if (*(int *)((int)(undefined4 *)param_1 + 0x12) != 0x6)
  {
    return;
  }
  pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(param_1);
  if (*(long *)((int)(void *)pvVar4 + 0x200) != 0x8000002)
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x64);
    iVar2 = (*(code *)*puVar1)();
    if (iVar2 == 0x0)
    {
      return;
    }
    uVar3 = UI_Build_Item_Check_Consumption_Availability_cb04(param_1);
    if (uVar3 == 0x0)
    {
      iVar2 = 0x6;
      goto LAB_1028_1cbd;
    }
    UI_Build_Item_Process_Turn_Consumption_Logic_c952(param_1);
  }
  iVar2 = 0x5;
LAB_1028_1cbd:
  UI_Build_Item_Transition_State_Logic_bdac(param_1,iVar2);
  return;
}
