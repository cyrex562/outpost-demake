/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 29/54
 * Original lines (combined): 80110-85198
 * Boundaries: top-level declarations/definitions only
 */




// Constructor for UI Build Item Type 0x932C. Initializes base class with ID 4999 and
// sets primary identifier at 0x108. Sets vtable to 0x932C.

void * __stdcall16far UI_Build_Item_Type_932C_ctor_init_90e6(void *this_ptr,u16 arg1)
{
  undefined2 uVar1;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x1387);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(u16 *)((int)this_ptr + 0x108) = arg1;
  *(undefined2 *)this_ptr = 0x932c;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Spawns an entity summary display and triggers event 10 for the build item's target
// type (offset 0x11A).

void __stdcall16far UI_Build_Item_Show_Specialized_Event_10_9600(void *this_ptr)
{
  u16 unaff_SS;
  undefined1 local_6 [0x4];
  
  UI_Entity_Summary_Display_ctor_a43e((undefined1 *)CONCAT22(unaff_SS,local_6));
  UI_Entity_Handle_Specialized_Event_10_or_Default_a80e
            ((u16)local_6,unaff_SS,*(int *)((int)this_ptr + 0x11a));
  return;
}



// Constructor for UI Build Item Type 0x9C52. Initializes base class with ID 4999 and
// sets three internal 4-byte fields (0x108, 0x10C, 0x110). Sets vtable to 0x9C52.

void * __stdcall16far
UI_Build_Item_Type_9C52_ctor_init_9944(void *this_ptr,u32 arg1,u32 arg2,u32 arg3)
{
  int iVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x1387);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  *(u32 *)(iVar1 + 0x108) = arg3;
  *(u32 *)(iVar1 + 0x10c) = arg2;
  *(u32 *)(iVar1 + 0x110) = arg1;
  *(undefined4 *)(iVar1 + 0x114) = 0x0;
  *(undefined2 *)this_ptr = 0x9c52;
  *(undefined2 *)(iVar1 + 0x2) = 0x1028;
  return this_ptr;
}



u16 * __stdcall16far
UI_Build_Item_Type9C52_dtor_Scalar_Deleting_9c2c(u16 *param_1,u16 param_2,byte param_3)
{
  UI_Build_Item_Type_9C52_dtor_Internal_9992(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x9EB6. Initializes base class and sets field
// 0x108 to the provided ID. Sets vtable to 0x9EB6.

void * __stdcall16far UI_Build_Item_Type_9EB6_ctor_init_9c62(void *this_ptr,u16 id)
{
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,id);
  *(u16 *)((int)(void *)this_ptr + 0x108) = id;
  *(undefined2 *)this_ptr = 0x9eb6;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Constructor for UI Build Item Type 0xB1F4. Inherits from Type 0x6E50 and sets its own
// vtable.

void * __stdcall16far
UI_Build_Item_Type_B1F4_ctor_init(void *this_ptr,u32 arg1,u32 arg2)
{
  UI_Build_Item_Type_6E50_ctor_init_6af2(this_ptr,arg1,arg2);
  *(undefined2 *)this_ptr = 0xb1f4;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Base constructor for UI items. Initializes core window state and sets vtable to
// 0xB33C.

void * __stdcall16far UI_Item_Base_ctor_init_b204(void *this_ptr)
{
  undefined2 uVar1;
  
  UI_Window_Base_ctor_init_1628(this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)((int)this_ptr + 0xc) = 0x0;
  *(undefined2 *)this_ptr = 0xb33c;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized base constructor for UI items. Sets vtable to 0xB33C.

void * __stdcall16far
UI_Item_Base_ctor_with_Params_b22c(undefined2 *param_1,undefined2 param_2,void *param_3)
{
  undefined2 uVar1;
  
  UI_Window_Base_ctor_with_Params_165e(param_1,0x6000000,param_3);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  ((undefined2 *)param_1)[0x6] = param_2;
  *param_1 = 0xb33c;
  ((undefined2 *)param_1)[0x1] = 0x1028;
  return param_1;
}



// Internal destructor for base UI items. Reverts vtable and cleans up window context.

void __stdcall16far UI_Item_Base_dtor_Internal_b260(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0xb33c;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  UI_Window_Base_dtor_Internal_16b2(this_ptr);
  return;
}



undefined2 __stdcall16far
UI_Window_Serialize_and_Update_0C_b282(void *param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  undefined2 local_c [0x5];
  
  uVar1 = UI_Window_Save_to_File_Logic_16d6(param_1,param_2);
  uVar3 = 0x0;
  if (uVar1 != 0x0)
  {
    local_c[0x0] = *(undefined2 *)((int)(void *)param_1 + 0xc);
    iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    uVar3 = 0x1;
  }
  return uVar3;
}



// Scalar deleting destructor for base UI items.

void * __stdcall16far UI_Item_Base_dtor_Scalar_Deleting_b316(void *this_ptr,byte flags)
{
  UI_Item_Base_dtor_Internal_b260(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Base constructor for UI Build Items. Initializes multiple internal fields (0xC-0x1C)
// and sets vtable to 0xCF6A.

void * __stdcall16far UI_Build_Item_Base_ctor_init_b354(void *this_ptr)
{
  astruct_320 *uVar1;
  undefined2 uVar2;
  
  UI_Window_Base_ctor_init_1628(this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_320 *)this_ptr;
  uVar1->field11_0xc = 0x0;
  uVar1->field12_0xe = 0x0;
  uVar1->field13_0x10 = 0x0;
  uVar1->field14_0x12 = 0x0;
  uVar1->field17_0x18 = 0x0;
  uVar1->field18_0x1a = 0x0;
  uVar1->field19_0x1c = 0x0;
  *(undefined2 *)this_ptr = 0xcf6a;
  uVar1->field2_0x2 = 0x1028;
  uVar1->field16_0x16 = 0x0;
  uVar1->field15_0x14 = 0x0;
  return this_ptr;
}



// Parameterized base constructor for UI Build Items. Sets up initial type ID and
// default display layer (0x42 or 0x6B).

void * __stdcall16far
UI_Build_Item_Base_ctor_with_Params_b39e(astruct_319 *param_1,u16 param_2,void *param_3)
{
  astruct_319 *uVar1;
  undefined2 uVar2;
  
  UI_Window_Base_ctor_with_Params_165e(param_1,0x7000000,param_3);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_319 *)param_1;
  uVar1->field11_0xc = param_2;
  uVar1->field12_0xe = 0x42;
  uVar1->field13_0x10 = 0x0;
  uVar1->field14_0x12 = 0x0;
  uVar1->field16_0x18 = 0x0;
  uVar1->field17_0x1a = 0x0;
  uVar1->field18_0x1c = 0x0;
  *(undefined2 *)param_1 = 0xcf6a;
  uVar1->field2_0x2 = 0x1028;
  UI_Build_Item_Initialize_Random_Subtype_bf76(param_1);
  uVar1->field15_0x14 = 0x0;
  if ((0x4e < (int)uVar1->field11_0xc) && ((int)uVar1->field11_0xc < 0x70))
  {
    uVar1->field12_0xe = 0x6b;
  }
  return param_1;
}



// Internal destructor for UI Build Items. Frees an internal data pointer (offset 0x14)
// if the item is in specific active states (4, 5, 6). Reverts vtables.

void __stdcall16far UI_Build_Item_Base_dtor_Internal_b418(void *this_ptr)
{
  int iVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  *(undefined2 *)this_ptr = 0xcf6a;
  *(undefined2 *)((int)pvVar2 + 0x2) = 0x1028;
  iVar1 = *(int *)((int)pvVar2 + 0x12);
  if (((iVar1 == 0x4) || (iVar1 == 0x5)) ||
     ((iVar1 == 0x6 &&
      ((*(int *)((int)pvVar2 + 0x18) == 0x4 || (*(int *)((int)pvVar2 + 0x18) == 0x5)))))
     )
  {
    free_if_not_null((void *)(void *)*(undefined4 *)((int)pvVar2 + 0x14));
  }
  UI_Window_Base_dtor_Internal_16b2(this_ptr);
  return;
}



// Links a build item to an active simulator object. Syncs coordinates and notifies the
// construction manager of the new selection.

void __stdcall16far
UI_Build_Item_Set_Active_Object_Logic_b46e(void *this_ptr,void *entity_ptr)
{
  int new_pop;
  void *this_ptr_00;
  void *this_ptr_01;
  void *pvVar1;
  undefined2 uVar2;
  
  this_ptr_00 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  pvVar1 = NULL;
  uVar2 = 0x0;
  this_ptr_01 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  UI_Component_Set_Vector_Tracker_Ptr_6d80(this_ptr_01,(void *)CONCAT22(uVar2,pvVar1));
  new_pop = *(int *)((int)(void *)this_ptr_01 + 0x32);
  if (new_pop != 0x0)
  {
    UI_Component_Set_Cap_Value_Logic_6c4c(this_ptr_01,0x0);
    Colony_Adjust_SubEntity_Population_Logic_387e(this_ptr_00,0x0,new_pop,this_ptr_01);
  }
  UI_Component_Free_List_22_Logic_7296(this_ptr_01);
  *(undefined4 *)((int)(void *)this_ptr + 0x1c) =
       *(undefined4 *)((int)(void *)entity_ptr + 0x200);
  return;
}



// Retrieves the construction manager associated with the build item by traversing its
// object hierarchy.

void * __stdcall16far UI_Build_Item_Get_Construction_Manager_Logic_b4f2(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  return (void *)CONCAT22(*(undefined2 *)((int)(void *)pvVar2 + 0x30),
                          (void *)*(undefined2 *)((int)(void *)pvVar2 + 0x2e));
}



// Transitions a build item to state 7, performing intermediate resource cleanup and
// triggering UI refreshes.

void __stdcall16far UI_Build_Item_Set_State_7_and_Cleanup_b514(void *this_ptr)
{
  int iVar1;
  void *pvVar2;
  undefined2 uVar3;
  void *this_ptr_00;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  iVar1 = *(int *)((int)pvVar2 + 0x12);
  if (((iVar1 == 0x4) || (iVar1 == 0x5)) ||
     ((iVar1 == 0x6 &&
      ((*(int *)((int)pvVar2 + 0x18) == 0x4 || (*(int *)((int)pvVar2 + 0x18) == 0x5)))))
     )
  {
    free_if_not_null((void *)(void *)*(undefined4 *)((int)pvVar2 + 0x14));
  }
  *(undefined4 *)((int)pvVar2 + 0x14) = 0x0;
  *(undefined2 *)((int)pvVar2 + 0x12) = 0x7;
  this_ptr_00 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  UI_Component_Free_List_22_Logic_7296(this_ptr_00);
  UI_Component_Free_List_26_Logic_72d0(this_ptr_00);
  UI_Component_Destroy_Internal_List_1E_Logic_730a(this_ptr_00);
  return;
}



u16 __stdcall16far UI_Build_Item_Get_U16_94_if_State5_b5a8(u32 param_1)
{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  if (*(int *)((int)param_1 + 0x12) != 0x5)
  {
    return 0x0;
  }
  uVar1 = *(undefined4 *)((int)param_1 + 0x14);
  return *(u16 *)((int)uVar1 + 0x94);
}



u16 __stdcall16far UI_Build_Item_Get_U16_9C_if_State5_b5ca(u32 param_1)
{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  if (*(int *)((int)param_1 + 0x12) != 0x5)
  {
    return 0x0;
  }
  uVar1 = *(undefined4 *)((int)param_1 + 0x14);
  return *(u16 *)((int)uVar1 + 0x9c);
}



// Retrieves the 2D world coordinates (X, Y) from the build item's parent construction
// context.

void * __stdcall16far UI_Build_Item_Get_World_Coordinates_bad4(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  
  pvVar2 = UI_Build_Item_Get_Parent_World_Entity_baf6(this_ptr);
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  return (void *)CONCAT22(*(undefined2 *)((int)pvVar2 + 0xa),
                          (void *)*(undefined2 *)((int)pvVar2 + 0x8));
}



// Alternative routine to retrieve world coordinates from the build item's construction
// manager. Returns (0,0) if no manager is linked.

void * __stdcall16far
UI_Build_Item_Get_World_Coordinates_Alternative_bb24(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  
  if (*(long *)((int)this_ptr + 0x8) == 0x0)
  {
    return NULL;
  }
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  return (void *)CONCAT22(*(undefined2 *)((int)pvVar2 + 0xa),
                          (void *)*(undefined2 *)((int)pvVar2 + 0x8));
}



// Simple wrapper to set the build item's UI position and refresh its children.

void __stdcall16far UI_Build_Item_Set_Position_Wrapper_bb56(void *this_ptr,void *pos)
{
  UI_Window_Set_Parent_Wrapper_177a(this_ptr,pos);
  return;
}



// Retrieves the appropriate ID for the build item based on its current state (normal,
// state 4, or state 7).

u16 __stdcall16far UI_Build_Item_Get_ID_for_Current_State_bc1c(u32 this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  if (*(int *)(iVar1 + 0x12) == 0x4)
  {
    return *(u16 *)(iVar1 + 0xe);
  }
  if (*(int *)(iVar1 + 0x12) == 0x7)
  {
    return *(u16 *)(iVar1 + 0x10);
  }
  return *(u16 *)(iVar1 + 0xc);
}



// Transitions the build item to state 4.

void __stdcall16far UI_Build_Item_Transition_to_State_4_bc7e(void *this_ptr)
{
  UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x4);
  return;
}



// Per-tick update for build items in state 6. If construction conditions are met,
// transitions to state 5.

void __stdcall16far UI_Build_Item_OnTick_State6_Update_be2a(void *this_ptr)
{
  undefined2 *puVar1;
  u16 uVar2;
  undefined2 uVar3;
  void *pvVar4;
  int iVar5;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(int *)((int)this_ptr + 0x12) != 0x6)
  {
    return;
  }
  pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  if (*(long *)((int)pvVar4 + 0x200) != 0x8000002)
  {
    if (*(long *)((int)this_ptr + 0x1c) == 0x8000002)
    {
      iVar5 = 0x6;
      goto code_r0x1028be96;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)this_ptr + 0x64);
    iVar5 = (*(code *)*puVar1)();
    if (iVar5 == 0x0)
    {
      return;
    }
    uVar2 = UI_Build_Item_Check_Consumption_Availability_cb04(this_ptr);
    if (uVar2 == 0x0)
    {
      iVar5 = 0x6;
      goto code_r0x1028be96;
    }
    UI_Build_Item_Process_Turn_Consumption_Logic_c952(this_ptr);
  }
  iVar5 = 0x5;
code_r0x1028be96:
  UI_Build_Item_Transition_State_Logic_bdac(this_ptr,iVar5);
  return;
}



// Per-tick update for build items in state 4. Increments progress and transitions to
// state 5 upon completion.

void __stdcall16far UI_Build_Item_OnTick_State4_Update_be9e(void *this_ptr)
{
  int *piVar1;
  u16 uVar2;
  void *pvVar3;
  undefined2 uVar4;
  void *pvVar5;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = (void *)this_ptr;
  if (*(int *)((int)pvVar3 + 0x12) == 0x4)
  {
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
      piVar1 = (int *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0x94);
      *piVar1 = *piVar1 + -0x1;
      UI_Build_Item_Process_Turn_Consumption_Logic_c952(this_ptr);
    }
    if (*(int *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0x94) < 0x1)
    {
      UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x5);
    }
  }
  return;
}



// Modifies a 3D coordinate (X, Y, Z) based on a direction index (1-5). Returns the
// updated coordinate packed into the original structure.

void __stdcall16far
UI_Build_Item_Move_Coordinate_by_Direction_c8ee
          (undefined2 param_1,undefined2 param_2,int param_3,void *param_4)
{
  int *unaff_SS;
  int *out1;
  int local_8;
  int local_6;
  int local_4;
  
  out1 = (int *)((ulong)param_4 >> 0x10);
  unpack_3word_struct((void *)param_4,out1,&local_8,unaff_SS);
  if (param_3 == 0x1)
  {
    local_8 += 0x1;
  }
  else if (param_3 == 0x2)
  {
    _local_6 = CONCAT22(local_4,local_6 + -0x1);
  }
  else if (param_3 == 0x3)
  {
    _local_6 = CONCAT22(local_4,local_6 + 0x1);
  }
  else if (param_3 == 0x4)
  {
    _local_6 = CONCAT22(local_4 + 0x1,local_6);
  }
  else if (param_3 == 0x5)
  {
    _local_6 = CONCAT22(local_4 + -0x1,local_6);
  }
  pack_3words_reverse((void *)param_4,(int)out1,local_8,(int)_local_6);
  return;
}



// Updates build item state based on resource flags (0x1A). Transitions to state 6 if
// resources are insufficient.

u16 __stdcall16far UI_Build_Item_Update_State_and_Resources_ced2(void *this_ptr)
{
  undefined2 uVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  bVar2 = (*(byte *)((int)(void *)this_ptr + 0x1a) & 0x2) == 0x0;
  if (bVar2)
  {
    uVar6 = 0x0;
    uVar7 = 0x23;
    uVar5 = 0x1;
    pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    UI_Component_Set_List_Value_at_26_Logic_7d7c
              ((void *)pvVar4,(int)((ulong)pvVar4 >> 0x10),uVar5,uVar6,uVar7);
  }
  bVar3 = (*(byte *)((int)(void *)this_ptr + 0x1a) & 0x1) == 0x0;
  if (bVar3)
  {
    uVar5 = 0x0;
    uVar6 = 0xe;
    uVar1 = 0x1;
    pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    UI_Component_Set_List_Value_at_26_Logic_7d7c
              ((void *)pvVar4,(int)((ulong)pvVar4 >> 0x10),uVar1,uVar5,uVar6);
  }
  if (bVar3 || bVar2)
  {
    UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x6);
    return 0x0;
  }
  return 0x1;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_cf44(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for a manager that coordinates multiple UI Build Item lists. Initializes
// two internal sorted linked lists (offset 0 and 4).

void * __stdcall16far
UI_Build_Item_List_Manager_ctor_init_d22e(undefined4 *param_1,undefined4 param_2)
{
  void *pvVar1;
  int in_DX;
  undefined2 uVar2;
  void *pvVar3;
  undefined4 in_stack_0000fff8;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  *param_1 = 0x0;
  ((undefined4 *)param_1)[0x1] = param_2;
  pvVar1 = allocate_memory(CONCAT22((int)((ulong)in_stack_0000fff8 >> 0x10),0xc));
  if (in_DX == 0x0 && pvVar1 == NULL)
  {
    *param_1 = 0x0;
  }
  else
  {
    pvVar3 = UI_Sorted_Linked_List_Manager_ctor_init_d59c(pvVar1,in_DX);
    *(void **)param_1 = (void *)pvVar3;
    *(undefined2 *)((int)(undefined4 *)param_1 + 0x2) = (int)((ulong)pvVar3 >> 0x10);
  }
  return param_1;
}



// Internal destructor for the Build Item List Manager. Cleans up its internal sorted
// linked lists.

void __stdcall16far UI_Build_Item_List_Manager_dtor_Internal_d282(void *this_ptr)
{
  void *ptr;
  int iVar1;
  
  ptr = *(void **)this_ptr;
  iVar1 = *(int *)((int)(void *)this_ptr + 0x2);
  if (iVar1 != 0x0 || ptr != NULL)
  {
    UI_Sorted_Linked_List_Manager_dtor_Internal_d658((void *)CONCAT22(iVar1,ptr));
    free_if_not_null(ptr);
  }
  return;
}



// Initializes the Build Item Manager with a standard set of building items (Types
// 1000-16000) and triggers initial list processing.

void __stdcall16far UI_Build_Item_Manager_Initialize_Standard_Items_d2b0(void *this_ptr)
{
  undefined2 unaff_SS;
  undefined2 local_10c;
  undefined2 uStack_10a;
  
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x3e80);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x3a98);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x36b0);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x32c8);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x2ee0);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x2af8);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x2710);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x2328);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x1f40);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x1b58);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x1770);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x1388);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0xfa0);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0xbb8);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x3e8);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Manager_Process_Active_List_d6b2(*(void **)this_ptr);
  return;
}



// Wrapper that triggers event processing logic of type 3 for a UI build item,
// specifically for secondary list insertion.

u16 __stdcall16far
UI_Build_Item_Process_Event_Type3_Logic_d52c
          (void *manager_ptr,ulong arg2,void *item_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)item_ptr + 0x8);
  iVar2 = (*(code *)*puVar1)();
  if (iVar2 != 0x0)
  {
    uVar3 = UI_Build_Item_Add_to_Secondary_Sorted_List_d776
                      (*(void **)manager_ptr,(void *)arg2,item_ptr);
    if (uVar3 != 0x0)
    {
      return 0x1;
    }
  }
  return 0x0;
}



// Wrapper that triggers event processing logic of type 4 for a UI build item,
// specifically for primary list insertion.

u16 __stdcall16far
UI_Build_Item_Process_Event_Type4_Logic_d566(void *manager_ptr,void *item_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)item_ptr + 0x8);
  iVar2 = (*(code *)*puVar1)();
  if (iVar2 != 0x0)
  {
    uVar3 = UI_Build_Item_Add_to_Sorted_List_d742(*(void **)manager_ptr,item_ptr);
    if (uVar3 != 0x0)
    {
      return 0x1;
    }
  }
  return 0x0;
}



// Internal destructor for the Sorted Linked List Manager. Cleans up its internal lists.

void __stdcall16far UI_Sorted_Linked_List_Manager_dtor_Internal_d658(void *this_ptr)
{
  undefined2 *puVar1;
  astruct_313 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_313 *)this_ptr;
  if (uVar2->field5_0x6 != 0x0 || uVar2->field4_0x4 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field4_0x4;
    (*(code *)*puVar1)();
  }
  if (uVar2->field7_0xa != 0x0 || uVar2->field6_0x8 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field6_0x8;
    (*(code *)*puVar1)();
  }
  return;
}



// Retrieves the sequence ID (offset 8) from the target entity of a list node.

u16 __stdcall16far UI_List_Node_Get_Sequence_ID_d69e(void *node_ptr)
{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)(void *)node_ptr + 0x4);
  return *(u16 *)((int)uVar1 + 0x8);
}
