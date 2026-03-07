/*
 * Source: outpost.c
 * Chunk: 60/117
 * Original lines: 68112-69237
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Decrements a specific resource (likely power or maintenance) from the colony's global
// pool and distributes the allocation across internal fields.

void __stdcall16far Colony_Consume_Resource_from_Global_Pool_cefc(void *this_ptr)
{
  void *pvVar1;
  void *pvVar2;
  undefined2 uStack_c;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  if (*(long *)((int)(void *)pvVar1 + 0x200) == 0x8000002)
  {
    uStack_c = 0x32;
  }
  else
  {
    pvVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
    uStack_c = UI_Object_Get_Value_at_Offset_1E_Logic((void *)pvVar2);
    if (0x32 < uStack_c)
    {
      uStack_c = 0x32;
    }
    UI_Object_Decrement_Value_at_Offset_1E_Logic
              ((void *)pvVar2,(int)((ulong)pvVar2 >> 0x10));
  }
  Colony_Distribute_Resource_Allocation_cf6c(this_ptr,uStack_c,pvVar1);
  return;
}



// Distributes a resource value across five internal allocation fields (0x50, 0x78,
// 0xA0, 0xC8, 0xF0) by dividing the value and applying remainders to the primary field.

void __stdcall16far
Colony_Distribute_Resource_Allocation_cf6c
          (undefined2 param_1,undefined2 param_2,int param_3,undefined4 param_4)
{
  uint *puVar1;
  uint uVar2;
  astruct_338 *paVar3;
  astruct_338 *iVar4;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 uVar8;
  
  uVar8 = (undefined2)((ulong)param_4 >> 0x10);
  paVar3 = (astruct_338 *)*(undefined4 *)((int)param_4 + 0x1f6);
  iVar4 = (astruct_338 *)paVar3;
  uVar6 = (undefined2)((ulong)paVar3 >> 0x10);
  uVar4 = param_3 / 0x5;
  uVar5 = uVar4 * -0x4 + param_3;
  puVar1 = &iVar4->field80_0x50;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  iVar4->field81_0x52 =
       iVar4->field81_0x52 + ((int)uVar5 >> 0xf) + (uint)CARRY2(uVar2,uVar5);
  iVar7 = (int)uVar4 >> 0xf;
  puVar1 = &iVar4->field118_0x78;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  iVar4->field119_0x7a = iVar4->field119_0x7a + iVar7 + (uint)CARRY2(uVar2,uVar4);
  puVar1 = &iVar4->field156_0xa0;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  iVar4->field157_0xa2 = iVar4->field157_0xa2 + iVar7 + (uint)CARRY2(uVar2,uVar4);
  puVar1 = &iVar4->field194_0xc8;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  iVar4->field195_0xca = iVar4->field195_0xca + iVar7 + (uint)CARRY2(uVar2,uVar4);
  puVar1 = &iVar4->field232_0xf0;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  iVar4->field233_0xf2 = iVar4->field233_0xf2 + iVar7 + (uint)CARRY2(uVar2,uVar4);
  *(undefined2 *)((int)param_4 + 0x1fe) = 0x1;
  return;
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



// Performs a multi-stage validation check for complex simulator interactions or entity
// placements.

u16 __stdcall16far
Simulator_Complex_Interaction_Validator_d118
          (void *arg1,void *coords,long arg3,long entity_id)
{
  u16 uVar1;
  void *x;
  u16 y;
  
  x = (void *)arg1;
  y = (u16)((ulong)arg1 >> 0x10);
  uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                    ((u16)x,y,coords,entity_id);
  if (uVar1 == 0x5)
  {
    uVar1 = Simulator_Handle_Entity_ID_Change_at_Coords_c23e
                      ((u16)x,y,coords,arg3,entity_id);
    if (uVar1 != 0x0)
    {
      uVar1 = Simulator_Validate_Proximity_Interaction_Rules_c3aa
                        ((u16)x,y,coords,(u8 *)arg3,entity_id);
      if (uVar1 != 0x0)
      {
        uVar1 = Simulator_Is_Coordinate_Within_Client_Margins_c314
                          ((u16)x,y,coords,(u16)(u8 *)arg3,(u16)((ulong)arg3 >> 0x10),
                           (u8 *)entity_id);
        if (uVar1 != 0x0)
        {
          return 0x1;
        }
      }
    }
  }
  else
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6a8;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks world coordinates for specific proximity conditions and triggers virtual
// entity interactions if a match is found. Involves resource-mapped offset checks.

u16 __stdcall16far Simulator_Coordinate_Interaction_Trigger_d194(void *arg1)
{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  int map_id;
  u32 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  u16 unaff_SS;
  void *pvVar8;
  void *pvVar9;
  void *obj2;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined4 *puVar12;
  u32 *puVar13;
  ulong uStack_2a;
  ulong uStack_26;
  undefined4 uStack_22;
  undefined1 local_4 [0x2];
  
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_4));
  pvVar8 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(arg1);
  uVar4 = (undefined2)((ulong)pvVar8 >> 0x10);
  pvVar9 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)pvVar8 + 0x10));
  obj2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(arg1);
  iVar2 = Simulator_Calc_Manhattan_Distance_between_Objects_bd74
                    ((u16)local_4,unaff_SS,(u32)pvVar9,(u32)obj2);
  if (iVar2 < 0x0)
  {
    return 0x0;
  }
  if (0x1e < iVar2)
  {
    pvVar9 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
    map_id = (int)((ulong)pvVar9 >> 0x10);
    iVar2 = Resource_Category_Get_Mapped_Offset_Value_Logic((void *)pvVar9,map_id);
    if (iVar2 == 0x0)
    {
      puVar3 = get_array_element_6bytes
                         ((int *)_p_StringPropertyTable,
                          (int)((ulong)_p_StringPropertyTable >> 0x10));
      uVar7 = 0x1038;
      puVar5 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                         ((int)pvVar8,uVar4,puVar3,map_id);
      uStack_22 = (undefined4 *)CONCAT22(puVar5,puVar3);
      puVar1 = (undefined2 *)((int)*uStack_22 + 0x10);
      puVar12 = puVar3;
      puVar13 = puVar5;
      uStack_26 = (*(code *)*puVar1)(0x1038,puVar3,puVar5);
      uStack_2a = 0x0;
      while( true )
      {
        if (uStack_26 <= uStack_2a)
        {
          if (uStack_22 == NULL)
          {
            return 0x0;
          }
          (*(code *)*(undefined2 *)(undefined2 *)*uStack_22)
                    (uVar7,puVar3,puVar5,0x1,puVar12,puVar13,uStack_22,uStack_22);
          return 0x0;
        }
        uVar10 = (int)obj2;
        uVar11 = (int)((ulong)obj2 >> 0x10);
        pvVar8 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_22);
        uVar6 = (undefined2)((ulong)pvVar8 >> 0x10);
        uVar4 = SUB42(pvVar8,0x0);
        uVar7 = 0x1030;
        iVar2 = Simulator_Calc_Manhattan_Distance_between_Objects_bd74
                          ((u16)local_4,unaff_SS,(u32)pvVar8,CONCAT22(uVar11,uVar10));
        if ((0x0 < iVar2) && (iVar2 < 0x1f)) break;
        uStack_2a += 0x1;
      }
      if (uStack_22 == NULL)
      {
        return 0x1;
      }
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_22)
                (0x1030,puVar3,puVar5,0x1,puVar12,puVar13,uStack_22,uStack_22,uVar4,
                 uVar6);
      return 0x1;
    }
  }
  return 0x1;
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



// Serializes UI Build Item Type 56 state to a file context. Writes the value at offset
// 0x20.

int __stdcall16far
UI_Build_Item_Type56_Save_to_File_Logic_d3d4(void *this_ptr,void *file_ctx)
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
UI_Build_Item_Deserialize_and_Update_20_d41a(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  undefined2 local_4;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  uVar3 = 0x0;
  if (uVar1 != 0x0)
  {
    iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    *(undefined2 *)((int)param_1 + 0x20) = local_4;
    uVar3 = 0x1;
  }
  return uVar3;
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



// Validates if Type 56 build item can be placed. Checks if field 0x20 is 2, or performs
// complex history-based mapping checks.

u16 __stdcall16far UI_Build_Item_Type56_Validate_Placement_Logic_d4ca(void *this_ptr)
{
  u16 uVar1;
  void *pvVar2;
  int index;
  
  if (*(int *)((int)(void *)this_ptr + 0x20) == 0x2)
  {
    return 0x1;
  }
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  index = 0x63;
  pvVar2 = (void *)Colony_Get_Entity_Object_by_PackedID_200_Logic
                             ((void *)*(undefined4 *)((int)(void *)pvVar2 + 0x2e));
  uVar1 = Colony_Check_Value_at_Index_is_Zero_25b2(pvVar2,index);
  if (uVar1 != 0x0)
  {
    return 0x0;
  }
  return 0xffff;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_Sync_World_Entity_and_VCall_58_d5f2(void *param_1,void *param_2)
{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  void *pvVar2;
  undefined4 *puVar3;
  undefined1 *out_entity;
  char cStack_37;
  undefined1 local_32 [0xa];
  u8 *local_28;
  u8 *local_24;
  undefined4 *local_1c;
  undefined4 local_1a;
  int local_16;
  u16 local_14;
  void *local_12;
  undefined2 local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  void *local_6;
  undefined2 local_4;
  
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_4 = (undefined2)((ulong)pvVar2 >> 0x10);
  local_6 = (void *)pvVar2;
  local_c = *(undefined4 *)((int)local_6 + 0xc);
  local_e = *(int *)((int)local_6 + 0x10);
  local_1c = &local_c;
  local_8 = local_e;
  pvVar2 = UI_Build_Item_Get_World_Context_Entity_bab6(param_1);
  local_10 = (undefined2)((ulong)pvVar2 >> 0x10);
  local_12 = (void *)pvVar2;
  local_14 = Simulator_Get_Entity_Resource_Category_ID_2fac(pvVar2);
  local_1a = local_c;
  local_16 = local_8;
  local_24 = (u8 *)CONCAT22(local_24._2_2_,&local_1a);
  local_e += 0x1;
  if (local_e < (int)local_14)
  {
    out_entity = (undefined1 *)CONCAT22(unaff_SS,local_32);
    local_16 = local_e;
    pvVar2 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(param_1);
    puVar3 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                       (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_1a),
                        (long)pvVar2,out_entity);
    local_28 = (u8 *)*puVar3;
    cStack_37 = (char)((ulong)local_28 >> 0x18);
    local_24 = local_28;
    if (cStack_37 != '\0')
    {
      pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)local_28);
      puVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar2);
      puVar1 = (undefined2 *)((int)*puVar3 + 0x58);
      (*(code *)*puVar1)();
    }
  }
  UI_Build_Item_Set_Active_Object_Logic_b46e(param_1,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_State7_Cleanup_and_VCall_24_d6e6(void *param_1)
{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  void *pvVar2;
  undefined4 *puVar3;
  undefined1 *out_entity;
  char cStack_37;
  undefined1 local_32 [0xa];
  u8 *local_28;
  u8 *local_24;
  undefined4 *local_1c;
  undefined4 local_1a;
  int local_16;
  u16 local_14;
  undefined2 local_12;
  undefined2 local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  int local_6;
  undefined2 local_4;
  
  UI_Build_Item_Set_State_7_and_Cleanup_b514(param_1);
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_4 = (undefined2)((ulong)pvVar2 >> 0x10);
  local_6 = (int)pvVar2;
  local_c = *(undefined4 *)(local_6 + 0xc);
  local_e = *(int *)(local_6 + 0x10);
  local_1c = &local_c;
  local_8 = local_e;
  pvVar2 = UI_Build_Item_Get_World_Context_Entity_bab6(param_1);
  local_10 = (undefined2)((ulong)pvVar2 >> 0x10);
  local_12 = SUB42(pvVar2,0x0);
  local_14 = Simulator_Get_Entity_Resource_Category_ID_2fac(pvVar2);
  local_1a = local_c;
  local_24 = (u8 *)CONCAT22(local_24._2_2_,&local_1a);
  local_16 = local_e + 0x1;
  if (local_16 < (int)local_14)
  {
    out_entity = (undefined1 *)CONCAT22(unaff_SS,local_32);
    local_e = local_16;
    pvVar2 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(param_1);
    puVar3 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                       (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_1a),
                        (long)pvVar2,out_entity);
    local_28 = (u8 *)*puVar3;
    cStack_37 = (char)((ulong)local_28 >> 0x18);
    if (cStack_37 != '\0')
    {
      local_24 = local_28;
      pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)local_28);
      puVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar2);
      if (*(int *)((undefined4 *)puVar3 + 0x3) == 0x6a)
      {
        puVar1 = (undefined2 *)((int)*puVar3 + 0x24);
        (*(code *)*puVar1)();
      }
    }
  }
  return;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a Construction UI Item. Initializes base construction object and
// links to the global planetary resource state (Resource 0x2F). Sets vtable to 0xE792.

void * __stdcall16far UI_Construction_Item_ctor_init_d954(void *this_ptr)
{
  void *pvVar1;
  undefined2 uVar2;
  long lVar3;
  
  UI_Build_Item_TypeE036_ctor_init_dc96(this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar1 = (void *)this_ptr;
  *(undefined2 *)((int)pvVar1 + 0x24) = 0x0;
  *(undefined2 *)((int)pvVar1 + 0x26) = 0x0;
  *(undefined4 *)((int)pvVar1 + 0x28) = 0x0;
  *(undefined2 *)this_ptr = 0xe792;
  *(undefined2 *)((int)pvVar1 + 0x2) = 0x1020;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  *(undefined2 *)((int)pvVar1 + 0x28) = (int)lVar3;
  *(undefined2 *)((int)pvVar1 + 0x2a) = (int)((ulong)lVar3 >> 0x10);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Parameterized constructor for Construction UI items. Sets type ID 0x49 and
// initializes links to planetary resource state.

void * __stdcall16far
UI_Construction_Item_ctor_with_Params_d99e
          (void *this_ptr,u16 type_id,u16 arg2,void *arg3)
{
  astruct_337 *uVar1;
  undefined2 uVar2;
  long lVar3;
  
  UI_Build_Item_TypeE036_ctor_with_Params_dcc2(this_ptr,arg2,arg3);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_337 *)this_ptr;
  uVar1->field34_0x24 = type_id;
  uVar1->field35_0x26 = 0x0;
  (&uVar1->field36_0x28)[0x0] = 0x0;
  (&uVar1->field36_0x28)[0x1] = 0x0;
  *(undefined2 *)this_ptr = 0xe792;
  uVar1->field2_0x2 = 0x1020;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  uVar1->field36_0x28 = (uint16_t)lVar3;
  uVar1->field37_0x2a = (uint16_t)((ulong)lVar3 >> 0x10);
  uVar1->field15_0x10 = 0x49;
  return this_ptr;
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



// Processes the entity command queue for the current context (ID 2).

void __stdcall16far Simulator_Process_Entity_Command_Queue_da3c(void *this_ptr)
{
  UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far
Simulator_World_Interaction_Comprehensive_Validator_da4e
          (undefined4 *param_1,void *param_2,long param_3,u8 *param_4)
{
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  u16 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *x;
  long lVar8;
  u8 *puVar9;
  char cStack_1f;
  undefined1 local_e [0x4];
  int local_a;
  u16 local_8;
  u8 *local_6;
  
  puVar6 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,param_2,(long)param_4,
                      (undefined1 *)CONCAT22(unaff_SS,local_e));
  local_6 = (u8 *)*puVar6;
  cStack_1f = (char)((ulong)local_6 >> 0x18);
  if (cStack_1f != '\0')
  {
    pvVar7 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)local_6);
    pvVar7 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar7);
    if (*(int *)((int)(void *)pvVar7 + 0xc) == 0x10)
    {
      PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6a9;
      return 0x0;
    }
  }
  x = (undefined4 *)param_1;
  uVar4 = (u16)((ulong)param_1 >> 0x10);
  local_8 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                      ((u16)x,uVar4,param_2,(long)param_4);
  puVar1 = (undefined2 *)((int)*param_1 + 0x60);
  puVar6 = param_1;
  pvVar7 = param_2;
  lVar8 = param_3;
  puVar9 = param_4;
  iVar2 = (*(code *)*puVar1)();
  if (((iVar2 != 0x0) &&
      (uVar3 = Simulator_Handle_Entity_ID_Change_at_Coords_c23e
                         ((u16)x,uVar4,param_2,param_3,(long)param_4), uVar3 != 0x0)) &&
     (uVar4 = Simulator_Is_Coordinate_Within_Client_Margins_c314
                        ((u16)x,uVar4,param_2,(u16)param_3,(u16)((ulong)param_3 >> 0x10)
                         ,(u8 *)param_4), uVar4 != 0x0))
  {
    uVar5 = (undefined2)((ulong)param_2 >> 0x10);
    if (((*(int *)((int)(void *)param_2 + 0x4) == 0x0) && (local_8 != 0x4)) &&
       (puVar1 = (undefined2 *)((int)*param_1 + 0x5c),
       iVar2 = (*(code *)*puVar1)(0x1028,param_1,param_2,param_3,param_4,puVar6,pvVar7,
                                  lVar8,puVar9), iVar2 == 0x0))
    {
      return 0x0;
    }
    local_a = *(int *)((int)(void *)param_2 + 0x4);
    if (local_a != 0x0)
    {
      uVar4 = Simulator_Complex_Interaction_Dispatcher_df10
                        ((u32)param_1,param_2,(long)param_4);
      return uVar4;
    }
    uVar4 = Simulator_Validate_Action_Type_4_5_deac((u32)param_1,param_2,(long)param_4);
    return uVar4;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Validate_Entity_Proximity_db86
          (undefined2 param_1,undefined2 param_2,void *param_3,u8 *param_4,
          undefined2 param_5,long param_6)
{
  int iVar1;
  u16 unaff_SS;
  void *pvVar2;
  void *coords;
  undefined1 local_4 [0x2];
  
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_4));
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,param_4);
  coords = param_3;
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)(void *)pvVar2 + 0x10));
  iVar1 = Simulator_Calc_Manhattan_Distance_to_Coord_bcde
                    ((u16)local_4,unaff_SS,pvVar2,coords,param_6);
  if (iVar1 < 0x0)
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6af;
  }
  else
  {
    if ((iVar1 < 0x1f) || (*(int *)((int)(void *)param_3 + 0x4) < 0x1))
    {
      return 0x1;
    }
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b6;
    PTR_DAT_1050_0000_1050_50cc = (undefined *)(iVar1 + -0x1e);
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the entity at the specified coordinates and, if its type is valid (within
// ranges 1-9 or 0x6A-0x73), triggers its virtual activation callback (offset 0x24).

void __stdcall16far
Simulator_Notify_Entity_at_Coords_if_Active_dc1c(void *arg1,void *coords)
{
  int iVar1;
  undefined2 *puVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 *out_entity;
  char cStack_1b;
  undefined1 local_a [0x4];
  u8 *puStack_6;
  
  out_entity = (undefined1 *)CONCAT22(unaff_SS,local_a);
  pvVar3 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(arg1);
  puVar4 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,coords,(long)pvVar3,out_entity);
  puStack_6 = (u8 *)*puVar4;
  cStack_1b = (char)((ulong)puStack_6 >> 0x18);
  if (cStack_1b != '\0')
  {
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puStack_6);
    puVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
    iVar1 = *(int *)((undefined4 *)puVar4 + 0x3);
    if (((iVar1 < 0x1) || (SBORROW2(iVar1,0x1))) ||
       ((iVar1 != 0x9 && 0x7 < iVar1 + -0x1 &&
        ((iVar1 + -0x9 < 0x6a || (0x6 < iVar1 + -0x73))))))
    {
      puVar2 = (undefined2 *)((int)*puVar4 + 0x24);
      (*(code *)*puVar2)();
    }
  }
  return;
}



// Scans all 8 adjacent neighbor tiles around an entity's current position and triggers
// notification logic (using dc1c) for each tile.

void __stdcall16far Simulator_Scan_All_Neighbors_and_Notify_dca8(void *this_ptr)
{
  undefined2 uVar1;
  u16 *unaff_SS;
  undefined1 local_2e [0xe];
  undefined4 *puStack_20;
  int iStack_1e;
  int iStack_1c;
  int iStack_1a;
  int iStack_18;
  int iStack_16;
  int iStack_14;
  int iStack_12;
  undefined4 local_10;
  int iStack_c;
  void *pvStack_a;
  u16 local_6;
  int local_4;
  
  Simulator_Get_World_Dimensions_Pair_c1f8(this_ptr,&local_6,unaff_SS);
  pvStack_a = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar1 = (undefined2)((ulong)pvStack_a >> 0x10);
  local_10 = *(undefined4 *)((int)(void *)pvStack_a + 0xc);
  iStack_c = *(int *)((int)(void *)pvStack_a + 0x10);
  puStack_20 = &local_10;
  iStack_12 = (int)local_10;
  iStack_14 = (int)((ulong)local_10 >> 0x10);
  iStack_18 = (int)local_10 + -0x1;
  if (iStack_18 < 0x0)
  {
    iStack_18 = 0x0;
  }
  local_4 += -0x1;
  iStack_1a = (int)local_10 + 0x1;
  if (local_4 < (int)local_10 + 0x1)
  {
    iStack_1a = local_4;
  }
  iStack_1c = iStack_14 + -0x1;
  if (iStack_1c < 0x0)
  {
    iStack_1c = 0x0;
  }
  iStack_1e = iStack_14 + 0x1;
  if (local_4 < iStack_14 + 0x1)
  {
    iStack_1e = local_4;
  }
  iStack_16 = iStack_c;
  pack_3words_alt(local_2e,(int)unaff_SS,iStack_c,iStack_1c);
  Simulator_Notify_Entity_at_Coords_if_Active_dc1c
            (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_2e));
  pack_3words_alt(local_2e,(int)unaff_SS,iStack_16,iStack_1c);
  Simulator_Notify_Entity_at_Coords_if_Active_dc1c
            (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_2e));
  pack_3words_alt(local_2e,(int)unaff_SS,iStack_16,iStack_1c);
  Simulator_Notify_Entity_at_Coords_if_Active_dc1c
            (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_2e));
  pack_3words_alt(local_2e,(int)unaff_SS,iStack_16,iStack_14);
  Simulator_Notify_Entity_at_Coords_if_Active_dc1c
            (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_2e));
  pack_3words_alt(local_2e,(int)unaff_SS,iStack_16,iStack_14);
  Simulator_Notify_Entity_at_Coords_if_Active_dc1c
            (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_2e));
  pack_3words_alt(local_2e,(int)unaff_SS,iStack_16,iStack_1e);
  Simulator_Notify_Entity_at_Coords_if_Active_dc1c
            (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_2e));
  pack_3words_alt(local_2e,(int)unaff_SS,iStack_16,iStack_1e);
  Simulator_Notify_Entity_at_Coords_if_Active_dc1c
            (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_2e));
  pack_3words_alt(local_2e,(int)unaff_SS,iStack_16,iStack_1e);
  Simulator_Notify_Entity_at_Coords_if_Active_dc1c
            (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_2e));
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



// Validates action types 4 and 5. If type is 4, enters a modal loop and checks if the
// resulting state is 6. Sets field 0x24 to 1 on success.

u16 __stdcall16far
Simulator_Validate_Action_Type_4_5_deac(u32 arg1,void *coords,long arg3)
{
  u16 uVar1;
  u16 x;
  u16 y;
  
  x = (u16)arg1;
  y = (u16)(arg1 >> 0x10);
  uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6(x,y,coords,arg3);
  if ((int)uVar1 < 0x1)
  {
    return 0x0;
  }
  if (SBORROW2(uVar1,0x1))
  {
    return 0x0;
  }
  if (uVar1 != 0x3 && 0x0 < (int)(uVar1 - 0x2))
  {
    if (uVar1 == 0x4)
    {
      Simulator_Enter_Modal_Event_Loop_de32(arg1,0x4);
      if (*(int *)(x + 0x24) == 0x6)
      {
        return 0x1;
      }
      return 0x0;
    }
    if (uVar1 != 0x5)
    {
      return 0x0;
    }
  }
  *(undefined2 *)(x + 0x24) = 0x1;
  return 0x1;
}
