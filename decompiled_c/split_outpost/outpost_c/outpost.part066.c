/*
 * Source: outpost.c
 * Chunk: 66/117
 * Original lines: 75160-76356
 * Boundaries: top-level declarations/definitions only
 */




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



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_491c(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x4B1C. Initializes base class, sets vtable to
// 0x4B1C, and zero-fills its state array (offset 0x20).

void * __stdcall16far UI_Build_Item_Type_4B1C_ctor_init_49aa(void *this_ptr)
{
  int value;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  value = (int)((ulong)this_ptr >> 0x10);
  *(undefined2 *)this_ptr = 0x4b1c;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  memset_far((void *)((int)(void *)this_ptr + 0x20),value,0x0);
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x4B1C.

void * __stdcall16far
UI_Build_Item_Type_4B1C_ctor_with_Params_49de
          (undefined2 *param_1,int param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x4b1c;
  param_1[0x1] = 0x1028;
  memset_far(param_1 + 0x10,param_2,0x0);
  return (void *)CONCAT22(param_2,param_1);
}



u16 __stdcall16far
UI_Build_Item_Serialize_and_Update_20_4a1a(void *param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  u16 uVar3;
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(param_1,param_2);
  uVar3 = 0x0;
  if (uVar1 != 0x0)
  {
    iVar2 = file_write_check((long)param_2,(void *)((int)(void *)param_1 + 0x20),
                             (void *)((ulong)param_1 >> 0x10));
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    uVar3 = 0x1;
  }
  return uVar3;
}



u16 __stdcall16far
UI_Build_Item_Deserialize_and_Update_20_4a5a(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  u16 uVar3;
  
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



// Retrieves a 2-byte value from the build item's internal state array (offset 0x20) by
// index.

u16 __stdcall16far UI_Build_Item_Get_State_Array_Value_4a9a(void *this_ptr,int index)
{
  return *(u16 *)((int)this_ptr + 0x20 + index * 0x2);
}



// Sets a 2-byte value in the build item's internal state array (offset 0x20) by index.

void __stdcall16far
UI_Build_Item_Set_State_Array_Value_4ab2(u32 this_ptr,u16 value,int index)
{
  *(u16 *)((int)this_ptr + index * 0x2 + 0x20) = value;
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



// Scalar deleting destructor for certain UI build items.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_4af6(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
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



// Parameterized constructor for UI Build Item Type 4BB4.

void * __stdcall16far
UI_Build_Item_Type_4BB4_ctor_with_Params_4ba6
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) =
       (char *)s_SCInternalPutBldg2_site_0x_08lx__1050_506f + 0x1;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



u16 __stdcall16far UI_Build_Item_Check_Active_States_5_6_4bd0(u32 param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(param_1 >> 0x10);
  if ((*(int *)((int)param_1 + 0x12) != 0x6) && (*(int *)((int)param_1 + 0x12) != 0x5))
  {
    return 0x0;
  }
  return 0x1;
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



void __stdcall16far
UI_Construction_Manager_Set_Resource_Quota_0_1000(void *param_1,int param_2)
{
  void *pvVar1;
  undefined2 uVar2;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  if (param_2 == 0x0)
  {
    uVar2 = 0x0;
  }
  else
  {
    uVar2 = 0x3e8;
  }
  UI_Component_Set_List_Value_at_22_Logic_7d1c(pvVar1,uVar2,0x230000);
  return;
}



// Checks if the associated simulator object's field at offset 0x10 is zero. Equivalent
// to 1028:11DE.

u16 __stdcall16far UI_Build_Item_Check_Object_Offset_10_is_Zero_4f62(void *this_ptr)
{
  void *pvVar1;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  if (*(int *)((int)(void *)pvVar1 + 0x10) == 0x0)
  {
    return 0x1;
  }
  return 0x0;
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



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_504a(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x5280. Initializes base class and sets vtable to
// 0x5280.

void * __stdcall16far UI_Build_Item_Type_5280_ctor_init_50d8(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0x5280;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x5280.

void * __stdcall16far
UI_Build_Item_Type_5280_ctor_with_Params_50fa
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x5280;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far void_noop_stub_1028_5124(void)
{
  return;
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



// Scalar deleting destructor for UI build items using the B418 internal cleanup logic.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_525a(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 0x535E. Initializes base class and sets vtable to
// 0x535E.

void * __stdcall16far UI_Build_Item_Type_535E_ctor_init_52e8(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0x535e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x535E.

void * __stdcall16far
UI_Build_Item_Type_535E_ctor_with_Params_530a
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x535e;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far void_noop_stub_1028_5334(void)
{
  return;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_5338(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x54BC. Initializes base class and sets vtable to
// 0x54BC.

void * __stdcall16far UI_Build_Item_Type_54BC_ctor_init_53c6(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0x54bc;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x54BC.

void * __stdcall16far
UI_Build_Item_Type_54BC_ctor_with_Params_53e8
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x54bc;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



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



// Scalar deleting destructor for certain UI build items. Reverts vtables and optionally
// frees memory.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_5496(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
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



undefined2 __stdcall16far const_0_stub_1028_567c(void)
{
  return 0x0;
}



void __stdcall16far void_noop_stub_1028_5682(void)
{
  return;
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



void __stdcall16far void_noop_stub_1028_5714(void)
{
  return;
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



void __stdcall16far void_noop_stub_1028_57f2(void)
{
  return;
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



void __stdcall16far void_noop_stub_1028_58d0(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_58d4(void)
{
  return;
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



void __stdcall16far void_noop_stub_1028_59b2(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_59b6(void)
{
  return;
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



// Constructor for UI Build Item Type 5BEC. Initializes base class and sets its internal
// 'thisLo' metadata string. Sets vtable to 0x5BEC.

void * __stdcall16far UI_Build_Item_Type_5BEC_ctor_init_5a48(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)s_thisLo_1050_5bec;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
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
