/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 28/56
 * Original lines (combined): 73487-76447
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_OnTick_State4_Finalize_and_Notify_2e40(void *param_1)
{
  void *pvVar1;
  int index;
  
  UI_Build_Item_OnTick_State4_Update_be9e(param_1);
  if (*(int *)((int)(void *)param_1 + 0x12) == 0x5)
  {
    Simulator_Notify_All_Cardinal_Neighbors_2f18(param_1);
    UI_Build_Item_Initialize_Default_Resource_Quotas_3246(param_1);
    index = 0x1;
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    UI_System_Set_State_Flag_and_Notify
              ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10),index);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Finalizes road/infrastructure placement. Updates planetary resource tracking (Turn
// Manager) and triggers UI state refreshes.

void __stdcall16far
Simulator_Finalize_Road_Placement_and_Update_Resources_2e84
          (void *param_1,undefined4 param_2)
{
  void *pvVar1;
  long context;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int arg4;
  undefined2 uVar5;
  undefined2 uVar6;
  int resource_id;
  
  UI_Build_Item_Set_Flag_at_14_Logic_09b8((void *)CONCAT22((int)param_2,param_1));
  if ((int)((ulong)param_2 >> 0x10) == 0x0)
  {
    uVar6 = 0x0;
    resource_id = 0x8;
    arg4 = 0x1;
    uVar5 = 0x0;
    uVar3 = 0x0;
    iVar4 = 0x0;
    uVar2 = 0x0;
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
    Turn_Manager_Add_Resource_Change_Entry_Logic
              ((void *)pvVar1,CONCAT22(uVar3,uVar2),iVar4,arg4,CONCAT22(uVar6,uVar5),
               resource_id);
    uVar3 = 0x400;
    iVar4 = 0x3;
    uVar2 = 0x1;
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    Turn_Manager_Push_Resource_Event_Logic((void *)pvVar1,CONCAT22(uVar3,uVar2),iVar4);
    Turn_Manager_Push_Resource_Event_Logic((void *)pvVar1,0x4000001,0x4);
    context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    UI_Component_On_Event_14_Update_Global_5748_Logic(context);
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
    UI_Object_Init_State_at_Offset_1A_Logic((void *)pvVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Notifies all 8 surrounding neighbor tiles of an entity's placement or change.
// Specifically uses cardinal direction-based notification codes (0xB, 0xC, 0xD, 0xE).

void __stdcall16far Simulator_Notify_All_Cardinal_Neighbors_2f18(void *this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  int *unaff_SS;
  void *pvVar3;
  undefined1 local_944 [0x124];
  undefined1 local_820 [0x124];
  undefined1 local_6fc [0x124];
  undefined1 local_5d8 [0x124];
  undefined1 local_4b4 [0x124];
  undefined1 local_390 [0x6];
  undefined1 local_38a [0x124];
  undefined1 local_266 [0x124];
  undefined1 local_142 [0x124];
  int local_1e;
  int local_1c;
  undefined4 local_18;
  undefined2 uStack_14;
  undefined4 uStack_12;
  undefined4 uStack_e;
  void *pvStack_a;
  void *pvStack_6;
  undefined2 uStack_4;
  
  pvVar3 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(this_ptr);
  uStack_4 = (undefined2)((ulong)pvVar3 >> 0x10);
  pvStack_6 = (void *)pvVar3;
  pvStack_a = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar2 = (undefined2)((ulong)pvStack_a >> 0x10);
  iVar1 = (int)pvStack_a;
  uStack_e = *(undefined4 *)(iVar1 + 0x2e);
  uStack_12 = *(undefined4 *)((int)uStack_e + 0x4);
  local_18 = *(undefined4 *)(iVar1 + 0xc);
  uStack_14 = *(undefined2 *)(iVar1 + 0x10);
  unpack_3word_struct(&local_18,unaff_SS,&local_1e,unaff_SS);
  pack_3words_reverse(&local_18,(int)unaff_SS,local_1e,local_1c + -0x1);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_142,unaff_SS,0x0,0xd0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_142));
  pack_3words_reverse(&local_18,(int)unaff_SS,local_1e,local_1c + 0x1);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_266,unaff_SS,0x0,0xc0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_266));
  pack_3words_reverse(&local_18,(int)unaff_SS,local_1e,local_1c + 0x1);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_38a,unaff_SS,0x0,0xe0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_38a));
  pack_3words_alt(local_390,(int)unaff_SS,local_1e,local_1c + -0x1);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_4b4,unaff_SS,0x0,0xb0000,local_390,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_4b4));
  pack_3words_reverse(&local_18,(int)unaff_SS,local_1e,local_1c + -0x1);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_5d8,unaff_SS,0x0,0x7a0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_5d8));
  pack_3words_reverse(&local_18,(int)unaff_SS,(int)_local_1e,
                      (int)((ulong)_local_1e >> 0x10));
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_6fc,unaff_SS,0x0,0x7a0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_6fc));
  pack_3words_reverse(&local_18,(int)unaff_SS,local_1e,local_1c + 0x1);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_820,unaff_SS,0x0,0x7a0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_820));
  pack_3words_reverse(&local_18,(int)unaff_SS,(int)_local_1e,
                      (int)((ulong)_local_1e >> 0x10));
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_944,unaff_SS,0x0,0x7a0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_944));
  pvVar3 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,(undefined1 *)CONCAT22(unaff_SS,local_390),
                      (void *)CONCAT22(uStack_4,pvStack_6));
  uVar2 = (undefined2)((ulong)uStack_e >> 0x10);
  *(undefined2 *)((int)uStack_e + 0x10) = (int)pvVar3;
  *(undefined2 *)((int)uStack_e + 0x12) = (int)((ulong)pvVar3 >> 0x10);
  return;
}



undefined2 __stdcall16far
Simulator_World_Interaction_Simple_Validator_38d4
          (undefined4 *param_1,void *param_2,long param_3,u8 *param_4)
{
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  undefined4 *x;
  u16 y;
  
  x = (undefined4 *)param_1;
  y = (u16)((ulong)param_1 >> 0x10);
  uVar2 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                    ((u16)x,y,param_2,(long)param_4);
  if ((uVar2 == 0x5) || (uVar2 == 0x6))
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x60);
    iVar3 = (*(code *)*puVar1)();
    if (iVar3 != 0x0)
    {
      uVar2 = Simulator_Handle_Entity_ID_Change_at_Coords_c23e
                        ((u16)x,y,param_2,param_3,(long)param_4);
      if (uVar2 != 0x0)
      {
        uVar2 = Simulator_Is_Coordinate_Within_Client_Margins_c314
                          ((u16)x,y,param_2,(u16)param_3,(u16)((ulong)param_3 >> 0x10),
                           (u8 *)param_4);
        if (uVar2 != 0x0)
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

void __stdcall16far
UI_Build_Item_VCall_58_on_Neighbor_Type100_and_State7_40b8(void *param_1)
{
  undefined2 *puVar1;
  u8 *packed_id;
  u16 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 *out_entity;
  char cStack_33;
  undefined1 local_2c [0x6];
  undefined4 *local_26;
  u8 *local_22;
  undefined4 *local_1a;
  u8 *local_18;
  undefined4 local_14;
  int local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  void *local_6;
  undefined2 local_4;
  
  pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_4 = (undefined2)((ulong)pvVar3 >> 0x10);
  local_6 = (void *)pvVar3;
  local_14 = *(undefined4 *)((int)local_6 + 0xc);
  local_8 = *(int *)((int)local_6 + 0x10);
  local_1a = &local_c;
  local_22 = (u8 *)CONCAT22(local_22._2_2_,&local_14);
  local_10 = local_8 + 0x1;
  out_entity = (undefined1 *)CONCAT22(unaff_SS,local_2c);
  local_e = local_10;
  local_c = local_14;
  pvVar3 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(param_1);
  puVar4 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_14),
                      (long)pvVar3,out_entity);
  local_22 = (u8 *)*puVar4;
  cStack_33 = (char)((ulong)local_22 >> 0x18);
  local_18 = local_22;
  if (cStack_33 != '\0')
  {
    local_18._0_2_ = (u8 *)local_22;
    packed_id = (u8 *)local_18;
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar3);
    if (uVar2 == 0x64)
    {
      local_26 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
      puVar1 = (undefined2 *)((int)*local_26 + 0x58);
      (*(code *)*puVar1)();
    }
  }
  UI_Build_Item_Set_State_7_and_Cleanup_b514(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_State4_Push_Resource_Event_4194(void *param_1)
{
  undefined2 uVar1;
  void *pvVar2;
  void *pvVar3;
  
  UI_Build_Item_OnTick_State4_Update_be9e(param_1);
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(param_1);
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  if ((*(long *)((int)(void *)pvVar2 + 0x200) != 0x8000002) &&
     (*(int *)((int)(void *)param_1 + 0x12) == 0x5))
  {
    pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    Turn_Manager_Push_Resource_Event_Logic
              ((void *)pvVar3,*(long *)((int)(void *)pvVar2 + 0x4),0xe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_VCall_24_on_Neighbor_Type100_and_State7_41ea(void *param_1)
{
  undefined2 *puVar1;
  u8 *packed_id;
  u16 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 *out_entity;
  char cStack_33;
  undefined1 local_2c [0x6];
  undefined4 *local_26;
  u8 *local_22;
  undefined4 *local_1a;
  u8 *local_18;
  undefined4 local_14;
  int local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  void *local_6;
  undefined2 local_4;
  
  UI_Build_Item_Set_State_7_and_Cleanup_b514(param_1);
  pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_4 = (undefined2)((ulong)pvVar3 >> 0x10);
  local_6 = (void *)pvVar3;
  local_14 = *(undefined4 *)((int)local_6 + 0xc);
  local_8 = *(int *)((int)local_6 + 0x10);
  local_1a = &local_c;
  local_22 = (u8 *)CONCAT22(local_22._2_2_,&local_14);
  local_10 = local_8 + 0x1;
  out_entity = (undefined1 *)CONCAT22(unaff_SS,local_2c);
  local_e = local_10;
  local_c = local_14;
  pvVar3 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(param_1);
  puVar4 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_14),
                      (long)pvVar3,out_entity);
  local_22 = (u8 *)*puVar4;
  cStack_33 = (char)((ulong)local_22 >> 0x18);
  if (cStack_33 != '\0')
  {
    local_18._0_2_ = (u8 *)local_22;
    packed_id = (u8 *)local_18;
    local_18 = local_22;
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar3);
    if (uVar2 == 0x64)
    {
      local_26 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
      puVar1 = (undefined2 *)((int)*local_26 + 0x24);
      (*(code *)*puVar1)();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_Sync_and_Decrement_Resource_8_43c2
          (void *param_1,undefined2 param_2,int param_3)
{
  void *pvVar1;
  
  UI_Build_Item_Sync_Simulator_Resource_Event_bd38((void *)CONCAT22(param_2,param_1));
  if (param_3 == 0x0)
  {
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
    UI_Object_Decrement_Item_Count_in_Collection_E_Logic_maybe
              ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Toggles an internal resource property (0x35) between 0 and 1000 based on param_2,
// provided the resource category 0x83 is valid.

void __stdcall16far UI_Build_Item_Handle_Resource_Toggle_43f6(void *this_ptr,int toggle)
{
  int iVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  pvVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
  iVar1 = Resource_Category_Get_Mapped_Offset_Value_Logic
                    ((void *)pvVar2,(int)((ulong)pvVar2 >> 0x10));
  if (0x0 < iVar1)
  {
    pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    if (toggle == 0x0)
    {
      uVar3 = 0x0;
    }
    else
    {
      uVar3 = 0x3e8;
    }
    UI_Component_Set_List_Value_at_22_Logic_7d1c(pvVar2,uVar3,0x230000);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// If the value at offset 0x20 is non-zero, retrieves the current entity resource data
// and triggers an update logic call (1030:2A2C).

void __stdcall16far UI_Build_Item_Trigger_Resource_Update_Logic_4aca(void *this_ptr)
{
  long context;
  void *entity_ptr;
  
  if (*(int *)((int)(void *)this_ptr + 0x20) != 0x0)
  {
    context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    entity_ptr = (void *)UI_Get_Entity_Resource_Data_at_Offset_16_Logic(context);
    Simulator_Entity_OnTick_Update_2a2c(entity_ptr);
  }
  return;
}



// Constructor for UI Build Item Type 4BB4. Sets its internal name string to
// 'SCInternalPutBldg2 site' and sets vtable to 0x4BB4.

void * __stdcall16far UI_Build_Item_Type_4BB4_ctor_init_4b84(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)s_SCInternalPutBldg2_site_0x_08lx__1050_506f + 0x1;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_VCall_58_on_Neighbor_Mining_Robot_and_Activate_4bf2
          (void *param_1,void *param_2)
{
  undefined2 *puVar1;
  u8 *packed_id;
  u16 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 *out_entity;
  char cStack_33;
  undefined1 local_2c [0x6];
  undefined4 *local_26;
  u8 *local_22;
  undefined4 *local_1a;
  u8 *local_18;
  undefined4 local_14;
  int local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  void *local_6;
  undefined2 local_4;
  
  pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_4 = (undefined2)((ulong)pvVar3 >> 0x10);
  local_6 = (void *)pvVar3;
  local_14 = *(undefined4 *)((int)local_6 + 0xc);
  local_8 = *(int *)((int)local_6 + 0x10);
  local_1a = &local_c;
  local_22 = (u8 *)CONCAT22(local_22._2_2_,&local_14);
  local_10 = local_8 + 0x1;
  out_entity = (undefined1 *)CONCAT22(unaff_SS,local_2c);
  local_e = local_10;
  local_c = local_14;
  pvVar3 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(param_1);
  puVar4 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_14),
                      (long)pvVar3,out_entity);
  local_22 = (u8 *)*puVar4;
  cStack_33 = (char)((ulong)local_22 >> 0x18);
  local_18 = local_22;
  if (cStack_33 != '\0')
  {
    local_18._0_2_ = (u8 *)local_22;
    packed_id = (u8 *)local_18;
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar3);
    if ((uVar2 == 0x62) || (uVar2 == 0x63))
    {
      local_26 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
      puVar1 = (undefined2 *)((int)*local_26 + 0x58);
      (*(code *)*puVar1)();
    }
  }
  UI_Build_Item_Set_Active_Object_Logic_b46e(param_1,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_VCall_24_on_Neighbor_Mining_Robot_and_State7_4cd6(void *param_1)
{
  undefined2 *puVar1;
  u8 *packed_id;
  u16 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 *out_entity;
  char cStack_33;
  undefined1 local_2c [0x6];
  undefined4 *local_26;
  u8 *local_22;
  undefined4 *local_1a;
  u8 *local_18;
  undefined4 local_14;
  int local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  void *local_6;
  undefined2 local_4;
  
  UI_Build_Item_Set_State_7_and_Cleanup_b514(param_1);
  pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_4 = (undefined2)((ulong)pvVar3 >> 0x10);
  local_6 = (void *)pvVar3;
  local_14 = *(undefined4 *)((int)local_6 + 0xc);
  local_8 = *(int *)((int)local_6 + 0x10);
  local_1a = &local_c;
  local_22 = (u8 *)CONCAT22(local_22._2_2_,&local_14);
  local_10 = local_8 + 0x1;
  out_entity = (undefined1 *)CONCAT22(unaff_SS,local_2c);
  local_e = local_10;
  local_c = local_14;
  pvVar3 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(param_1);
  puVar4 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_14),
                      (long)pvVar3,out_entity);
  local_22 = (u8 *)*puVar4;
  cStack_33 = (char)((ulong)local_22 >> 0x18);
  if (cStack_33 != '\0')
  {
    local_18._0_2_ = (u8 *)local_22;
    packed_id = (u8 *)local_18;
    local_18 = local_22;
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar3);
    if ((uVar2 == 0x62) || (uVar2 == 0x63))
    {
      local_26 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
      puVar1 = (undefined2 *)((int)*local_26 + 0x24);
      (*(code *)*puVar1)();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_Complex_Sync_and_AutoPlace_4db2
          (void *param_1,undefined2 param_2,int param_3)
{
  int iVar1;
  undefined2 uVar2;
  int *unaff_SS;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  u16 *puVar6;
  int *piVar7;
  undefined1 local_14e [0x124];
  undefined4 local_2a;
  undefined4 local_26;
  int local_22 [0x3];
  undefined4 local_1c;
  undefined2 uStack_18;
  void *local_16;
  void *local_12;
  undefined2 uStack_10;
  int local_e;
  u16 local_c;
  u8 *local_a;
  long local_6;
  
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),
                     *(int *)((int)param_1 + 0xc));
  if (iVar1 != 0x0)
  {
    UI_Build_Item_Sync_Simulator_Resource_Event_bd38((void *)CONCAT22(param_2,param_1));
    if ((param_3 == 0x0) && (*(int *)((int)param_1 + 0xc) == 0x13))
    {
      pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8)
      ;
      UI_Object_Decrement_Item_Count_in_Collection_E_Logic_maybe
                ((void *)pvVar3,(int)((ulong)pvVar3 >> 0x10));
    }
    local_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    local_a = (u8 *)*(undefined4 *)((int)local_6 + 0x20);
    puVar6 = &local_c;
    piVar4 = &local_e;
    piVar5 = unaff_SS;
    piVar7 = unaff_SS;
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)local_a);
    uStack_10 = (undefined2)((ulong)pvVar3 >> 0x10);
    local_12 = (void *)pvVar3;
    UI_Production_Item_Get_Coords_Logic_5b1c
              (pvVar3,(int *)CONCAT22(piVar5,piVar4),(u16 *)CONCAT22(piVar7,puVar6));
    local_16 = UI_Build_Item_Get_Construction_Manager_Logic_b58e
                         ((void *)CONCAT22(param_2,param_1));
    uVar2 = (undefined2)((ulong)local_16 >> 0x10);
    local_1c = *(undefined4 *)((int)local_16 + 0xc);
    uStack_18 = *(undefined2 *)((int)local_16 + 0x10);
    UI_Build_Item_Move_Coordinate_by_Direction_c8ee
              (param_1,param_2,0x1,&local_1c,unaff_SS);
    unpack_3word_struct(&local_1c,unaff_SS,local_22,unaff_SS);
    if (local_e < local_22[0x0])
    {
      Simulator_Update_Entity_Production_Metrics_5b3e
                ((u32)CONCAT22(uStack_10,local_12),local_22[0x0],local_c);
      UI_Production_Item_Get_Coords_Logic_5b1c
                ((void *)CONCAT22(uStack_10,local_12),(int *)CONCAT22(unaff_SS,&local_e)
                 ,(u16 *)CONCAT22(unaff_SS,&local_c));
    }
    local_26 = *(undefined4 *)((int)local_16 + 0x2e);
    local_2a = *(undefined4 *)((int)local_26 + 0x4);
    Simulator_Command_InternalPutBldg_ctor_init_87f0
              (local_14e,unaff_SS,0x0,0x620000,&local_1c,unaff_SS,(int)local_2a,
               (int)((ulong)local_2a >> 0x10),(int)local_a,(int)((ulong)local_a >> 0x10)
              );
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_14e));
    UI_Build_Item_Auto_Place_Neighbor_Buildings_ccd0
              ((void *)CONCAT22(param_2,param_1),(u16 *)&local_1c);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the first non-zero entity located at the build item's current world
// coordinates. Equivalent to 1028:121E.

void * __stdcall16far UI_Build_Item_Get_Neighbor_Entity_Alternative_4faa(void *this_ptr)
{
  u16 uVar1;
  undefined2 unaff_SS;
  void *pvVar2;
  u8 *puVar3;
  undefined4 local_c;
  undefined2 uStack_8;
  void *pvStack_6;
  
  uVar1 = UI_Build_Item_Check_Object_Offset_10_is_Zero_4f62(this_ptr);
  if (uVar1 != 0x0)
  {
    return this_ptr;
  }
  pvStack_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  local_c = *(undefined4 *)((int)(void *)pvStack_6 + 0xc);
  uStack_8 = 0x0;
  pvVar2 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(this_ptr);
  puVar3 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_c),
                      pvVar2);
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puVar3);
  if (pvVar2 == NULL)
  {
    return NULL;
  }
  pvVar2 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar2);
  return pvVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_Complex_Sync_and_AutoPlace_Type6F_5128(void *param_1,undefined2 param_2)
{
  undefined2 uVar1;
  int *unaff_SS;
  void *this_ptr;
  int *piVar2;
  int *piVar3;
  u16 *puVar4;
  int *piVar5;
  undefined1 local_14e [0x124];
  undefined4 local_2a;
  undefined4 local_26;
  int local_22 [0x3];
  undefined4 local_1c;
  undefined2 uStack_18;
  void *local_16;
  void *local_12;
  undefined2 uStack_10;
  int local_e;
  u16 local_c;
  u8 *local_a;
  long local_6;
  
  UI_Build_Item_Sync_Simulator_Resource_Event_bd38((void *)CONCAT22(param_2,param_1));
  local_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  local_a = (u8 *)*(undefined4 *)((int)local_6 + 0x20);
  puVar4 = &local_c;
  piVar2 = &local_e;
  piVar3 = unaff_SS;
  piVar5 = unaff_SS;
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)local_a);
  uStack_10 = (undefined2)((ulong)this_ptr >> 0x10);
  local_12 = (void *)this_ptr;
  UI_Production_Item_Get_Coords_Logic_5b1c
            (this_ptr,(int *)CONCAT22(piVar3,piVar2),(u16 *)CONCAT22(piVar5,puVar4));
  local_16 = UI_Build_Item_Get_Construction_Manager_Logic_b58e
                       ((void *)CONCAT22(param_2,param_1));
  uVar1 = (undefined2)((ulong)local_16 >> 0x10);
  local_1c = *(undefined4 *)((int)local_16 + 0xc);
  uStack_18 = *(undefined2 *)((int)local_16 + 0x10);
  UI_Build_Item_Move_Coordinate_by_Direction_c8ee
            (param_1,param_2,0x1,&local_1c,unaff_SS);
  unpack_3word_struct(&local_1c,unaff_SS,local_22,unaff_SS);
  if (local_e < local_22[0x0])
  {
    Simulator_Update_Entity_Production_Metrics_5b3e
              ((u32)CONCAT22(uStack_10,local_12),local_22[0x0],local_c);
    UI_Production_Item_Get_Coords_Logic_5b1c
              ((void *)CONCAT22(uStack_10,local_12),(int *)CONCAT22(unaff_SS,&local_e),
               (u16 *)CONCAT22(unaff_SS,&local_c));
  }
  local_26 = *(undefined4 *)((int)local_16 + 0x2e);
  local_2a = *(undefined4 *)((int)local_26 + 0x4);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_14e,unaff_SS,0x0,0x6f0000,&local_1c,unaff_SS,(int)local_2a,
             (int)((ulong)local_2a >> 0x10),(int)local_a,(int)((ulong)local_a >> 0x10));
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_14e));
  UI_Build_Item_Auto_Place_Neighbor_Buildings_ccd0
            ((void *)CONCAT22(param_2,param_1),(u16 *)&local_1c);
  return;
}



// Constructor for UI Build Item Type 0x59E0. Sets its internal identifier string to a
// pointer containing 'mineToSmelter' related metadata. Sets vtable to 0x59E0.

void * __stdcall16far UI_Build_Item_Type_59E0_ctor_init_5966(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
                // this is actually just assigning the value 0f 0x59e0 to the first
                // field of the structure
  *(char **)this_ptr = (char *)s_mineToSmelter_>no_mines_1050_59df + 0x1;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Checks neighbors within a 5-unit radius and returns a status code (1, 2, or 3) based
// on the first encountered neighbor's internal state field (offset 0x20).

u16 __stdcall16far
UI_Build_Item_Get_Neighbor_Entity_Status_5a94(void *this_ptr,void *entity_id)
{
  undefined2 *puVar1;
  int iVar2;
  u16 unaff_SS;
  void *this_ptr_00;
  void *obj1;
  void *pvVar3;
  ulong uStack_e;
  undefined1 local_a [0x2];
  u16 uStack_8;
  ulong uStack_6;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)entity_id + 0x10);
  uStack_6 = (*(code *)*puVar1)();
  if (uStack_6 == 0x0)
  {
    return 0x1;
  }
  uStack_8 = 0x1;
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_a));
  uStack_e = 0x0;
  while( true )
  {
    if (uStack_6 <= uStack_e)
    {
      return uStack_8;
    }
    this_ptr_00 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(entity_id);
    pvVar3 = this_ptr_00;
    obj1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    iVar2 = Simulator_Calc_Manhattan_Distance_between_Objects_bd74
                      ((u16)local_a,unaff_SS,(u32)obj1,(u32)pvVar3);
    if (iVar2 < 0x5) break;
    uStack_e += 0x1;
  }
  pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr_00);
  iVar2 = *(int *)((int)(void *)pvVar3 + 0x20);
  if (iVar2 == 0x2)
  {
    uStack_8 = 0x2;
  }
  if (iVar2 != 0x1)
  {
    return uStack_8;
  }
  return 0x3;
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
