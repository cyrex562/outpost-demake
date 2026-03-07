/*
 * Source: outpost.c
 * Chunk: 63/117
 * Original lines: 71620-72786
 * Boundaries: top-level declarations/definitions only
 */




// Checks if the associated simulator object's type ID (at offset 0x10) is 0.

bool __stdcall16far UI_Build_Item_Check_If_Type_Is_0_11de(void *this_ptr)
{
  void *pvVar1;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  return *(int *)((int)pvVar1 + 0x10) == 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the first non-zero entity located at the build item's current world
// coordinates.

void * __stdcall16far UI_Build_Item_Get_Neighbor_Entity_121e(void *this_ptr)
{
  bool bVar1;
  undefined1 extraout_AH;
  undefined2 unaff_SS;
  void *pvVar2;
  u8 *puVar3;
  undefined4 local_c;
  undefined2 uStack_8;
  void *pvStack_6;
  
  bVar1 = UI_Build_Item_Check_If_Type_Is_0_11de(this_ptr);
  if (CONCAT11(extraout_AH,bVar1) != 0x0)
  {
    return this_ptr;
  }
  pvStack_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  local_c = *(undefined4 *)((int)pvStack_6 + 0xc);
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



// Serializes UI Build Item Type 0x1724 state to a file. Writes two 2-byte state fields
// and a global data pointer (0x4FBC).

u16 __stdcall16far
UI_Build_Item_Type_1724_Save_to_File_Logic_1452(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  undefined2 local_c [0x3];
  undefined *local_6 [0x2];
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(this_ptr,file_ctx);
  if (uVar1 != 0x0)
  {
    uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
    local_c[0x0] = *(undefined2 *)((int)(void *)this_ptr + 0x22);
    iVar2 = file_write_check((long)file_ctx,local_c,unaff_SS);
    if (iVar2 != 0x0)
    {
      local_6[0x0] = (undefined *)*(undefined2 *)((int)(void *)this_ptr + 0x20);
      iVar2 = file_write_check((long)file_ctx,local_6,unaff_SS);
      if (iVar2 != 0x0)
      {
        local_6[0x0] = PTR_DAT_1050_0000_1050_4fbc;
        iVar2 = file_write_check((long)file_ctx,local_6,unaff_SS);
        if (iVar2 != 0x0)
        {
          return 0x1;
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



undefined2 __stdcall16far
UI_Build_Item_Deserialize_and_Update_22_20_14d8(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  void *handle_wrapper;
  void *unaff_SS;
  undefined2 local_4;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  if (uVar1 != 0x0)
  {
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar2 = file_read_check((long)param_2,(void *)((int)param_1 + 0x22),handle_wrapper);
    if ((iVar2 != 0x0) &&
       (iVar2 = file_read_check((long)param_2,&local_4,unaff_SS), iVar2 != 0x0))
    {
      *(undefined2 *)((int)param_1 + 0x20) = local_4;
      if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
      {
        return 0x1;
      }
      iVar2 = file_read_check((long)param_2,(undefined **)&PTR_DAT_1050_0000_1050_4fbc,
                              (dword *)&g_HeapContext);
      if (iVar2 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through neighboring buildings and returns 1 if any building of a specific
// type (Resource 0x13 or type 0x75) is currently in an offline state (9).

u16 __stdcall16far UI_Build_Item_Check_If_Any_Neighbor_Is_Offline_1556(void *this_ptr)
{
  int category;
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  u8 *puVar3;
  void *pvVar4;
  int iStack_1a;
  undefined4 local_16;
  int iStack_12;
  void *pvStack_10;
  void *pvStack_c;
  u16 uStack_8;
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_World_Context_Entity_bab6(this_ptr);
  uStack_8 = Simulator_Get_Entity_Resource_Category_ID_2fac(pvStack_6);
  pvStack_c = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(this_ptr);
  pvStack_10 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  local_16 = *(undefined4 *)((int)(void *)pvStack_10 + 0xc);
  iStack_1a = 0x1;
  while( true )
  {
    if ((int)uStack_8 < iStack_1a)
    {
      return 0x0;
    }
    iStack_12 = iStack_1a;
    puVar3 = Simulator_Map_Get_Entity_at_Coords_627e
                       (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_16),
                        pvStack_c);
    pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puVar3);
    if (pvVar4 == NULL)
    {
      return 0x0;
    }
    pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar4);
    uVar2 = (undefined2)((ulong)pvVar4 >> 0x10);
    if (pvVar4 == NULL)
    {
      return 0x0;
    }
    category = *(int *)((int)(void *)pvVar4 + 0xc);
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),category);
    if ((iVar1 == 0x0) && (category != 0x75)) break;
    if (*(int *)((int)(void *)pvVar4 + 0x12) != 0x9)
    {
      return 0x1;
    }
    iStack_1a += 0x1;
  }
  return 0x0;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Validate_Road_and_Tube_Placement_Rules_1824
          (undefined4 param_1,undefined4 *param_2,u8 *param_3,u8 *param_4)
{
  undefined2 uVar1;
  u16 uVar2;
  undefined2 unaff_SS;
  undefined4 *puVar3;
  void *pvVar4;
  long context;
  u8 *puVar5;
  u16 x;
  u16 y;
  undefined4 local_2a;
  int local_26;
  void *local_24;
  undefined2 local_22;
  u8 *local_20;
  undefined2 local_1e;
  u16 local_1c;
  int local_18;
  undefined4 local_16;
  u8 *local_10;
  undefined2 local_e;
  undefined1 local_c [0x4];
  int local_8;
  u8 *local_6;
  
  x = (u16)param_1;
  y = (u16)((ulong)param_1 >> 0x10);
  uVar2 = Simulator_Validate_Proximity_Interaction_Rules_c3aa
                    (x,y,param_2,(u8 *)param_3,(long)param_4);
  if (uVar2 == 0x0)
  {
    return 0x0;
  }
  uVar2 = Simulator_Is_Coordinate_Within_Client_Margins_c314
                    (x,y,param_2,(u16)(u8 *)param_3,(u16)((ulong)param_3 >> 0x10),
                     (u8 *)param_4);
  if (uVar2 == 0x0)
  {
    return 0x0;
  }
  puVar3 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,param_2,(long)param_4,
                      (undefined1 *)CONCAT22(unaff_SS,local_c));
  local_6 = (u8 *)*puVar3;
  uVar1 = *(undefined2 *)((int)(undefined4 *)puVar3 + 0x2);
  local_8 = *(int *)((undefined4 *)param_2 + 0x1);
  local_16 = (u8 *)CONCAT22(uVar1,(u8 *)local_6);
  local_20 = (u8 *)local_6;
  local_1e._1_1_ = (char)((uint)uVar1 >> 0x8);
  if (local_1e._1_1_ != '\0')
  {
    local_1e = uVar1;
    pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)local_6);
    local_1e = (undefined2)((ulong)pvVar4 >> 0x10);
    local_20 = (u8 *)pvVar4;
    local_1c = UI_Component_Get_Entity_Type_ID_6fa0(pvVar4);
    if (local_1c == 0x10)
    {
      if (local_8 != 0x0)
      {
        PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6ab;
        return 0x0;
      }
      return 0x1;
    }
    if ((local_1c == 0x60) || (local_1c == 0x61))
    {
      context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
      local_16._2_2_ = (undefined2)((ulong)context >> 0x10);
      local_16._0_2_ = (int)context;
      puVar5 = (u8 *)UI_Component_Get_FarPtr_at_Offset_16_Logic(context);
      local_e = (undefined2)((ulong)puVar5 >> 0x10);
      local_10 = (u8 *)puVar5;
      local_18 = *(int *)((int)local_16 + 0x1e);
      pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,local_10);
      local_22 = (undefined2)((ulong)pvVar4 >> 0x10);
      local_24 = (void *)pvVar4;
      uVar2 = Simulator_Get_Entity_Resource_Category_ID_2fac(pvVar4);
      if ((int)uVar2 <= local_18)
      {
        PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6ac;
        return 0x0;
      }
      local_2a = *param_2;
      local_26 = local_8 + 0x1;
      uVar2 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                        (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_2a),(long)param_4);
      if (uVar2 == 0x0)
      {
        return 0x0;
      }
      if (uVar2 == 0x6)
      {
        return 0x0;
      }
      return 0x1;
    }
  }
  PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6aa;
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far Simulator_Build_Item_Process_Turn_Complex_199a(void *param_1)
{
  int *piVar1;
  undefined2 uVar2;
  int *unaff_SS;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  u16 *puVar6;
  int *piVar7;
  undefined2 local_15e;
  undefined2 local_15c;
  undefined4 *local_32;
  undefined4 local_2a;
  void *local_26;
  undefined2 uStack_24;
  int local_22;
  u16 local_20;
  u8 *local_1e;
  long local_1a;
  int local_16;
  int local_14;
  undefined4 local_10;
  undefined2 uStack_c;
  u32 local_a;
  void *local_6;
  undefined2 uStack_4;
  
  piVar1 = (int *)((int)(void *)param_1 + 0x14);
  *piVar1 = *piVar1 + -0x1;
  if (*piVar1 == 0x0)
  {
    pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    uStack_4 = (undefined2)((ulong)pvVar3 >> 0x10);
    local_6 = (void *)pvVar3;
    local_a = *(u32 *)((int)local_6 + 0x2e);
    Colony_Subtract_from_Current_Population_at_1A2_5804(local_a,0x1,0x3);
    local_10 = *(undefined4 *)((int)local_6 + 0xc);
    uStack_c = *(undefined2 *)((int)local_6 + 0x10);
    local_32 = &local_10;
    unpack_3word_struct(&local_10,unaff_SS,&local_16,unaff_SS);
    local_1a = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    local_1e = (u8 *)*(undefined4 *)((int)local_1a + 0x20);
    puVar6 = &local_20;
    piVar4 = &local_22;
    piVar5 = unaff_SS;
    piVar7 = unaff_SS;
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)local_1e);
    uStack_24 = (undefined2)((ulong)pvVar3 >> 0x10);
    local_26 = (void *)pvVar3;
    UI_Production_Item_Get_Coords_Logic_5b1c
              (pvVar3,(int *)CONCAT22(piVar5,piVar4),(u16 *)CONCAT22(piVar7,puVar6));
    if (local_22 < local_16 + 0x1)
    {
      Simulator_Update_Entity_Production_Metrics_5b3e
                ((u32)CONCAT22(uStack_24,local_26),local_16 + 0x1,local_20);
      UI_Production_Item_Get_Coords_Logic_5b1c
                ((void *)CONCAT22(uStack_24,local_26),
                 (int *)CONCAT22(unaff_SS,&local_22),(u16 *)CONCAT22(unaff_SS,&local_20)
                );
    }
    uVar2 = (undefined2)(local_a >> 0x10);
    local_2a = *(undefined4 *)((int)local_a + 0x4);
    Simulator_Command_InternalPutBldg_ctor_init_87f0
              (&local_15e,unaff_SS,0x0,0x0,(-(uint)(local_16 == 0x0) & 0xffd3) + 0x60,
               &local_10,unaff_SS,(int)local_2a,*(undefined2 *)((int)local_a + 0x6),
               (int)local_1e,(int)((ulong)local_1e >> 0x10));
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_15e));
    local_15e = 0x389a;
    local_15c = 0x1008;
    pack_3words_reverse(&local_10,(int)unaff_SS,local_16 + 0x1,local_14);
    Simulator_Command_InternalPutBldg_ctor_init_87f0
              (&local_15e,unaff_SS,0x0,0x0,0x60,&local_10,unaff_SS,(int)local_2a,
               (int)((ulong)local_2a >> 0x10),(int)local_1e,
               (int)((ulong)local_1e >> 0x10));
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_15e));
  }
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



// A simple stub function that always returns 0.

u16 __stdcall16far Helper_Returns_0_Stub_1c1c(void)
{
  return 0x0;
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



// Checks the 4 directly adjacent tiles (N, S, E, W) around a specific coordinate to see
// if any contain a matching road or connection entity type.

int __stdcall16far
Simulator_Check_Road_Adjacency_Logic
          (void *arg1,void *coords,u16 arg3,u16 arg4,u16 arg5,long arg6)
{
  u16 uVar1;
  int *unaff_SS;
  undefined2 in_stack_00000012;
  int local_e;
  int local_c;
  int local_a;
  undefined4 local_8;
  undefined2 uStack_4;
  
  local_8 = *(undefined4 *)coords;
  uStack_4 = *(undefined2 *)((int)(void *)coords + 0x4);
  unpack_3word_struct(&local_8,unaff_SS,&local_e,unaff_SS);
  local_8 = CONCAT22(local_c + -0x1,(int)local_8);
  uVar1 = Simulator_Is_Entity_Type_Road_or_Param_1e14(arg1,0x16,&local_8,unaff_SS,_arg5)
  ;
  if (uVar1 == 0x0)
  {
    local_8 = CONCAT22(local_c + 0x1,(int)local_8);
    uVar1 = Simulator_Is_Entity_Type_Road_or_Param_1e14
                      (arg1,0x16,&local_8,unaff_SS,_arg5);
    if (uVar1 == 0x0)
    {
      local_8._0_2_ = local_a + -0x1;
      local_8._2_2_ = local_c;
      uVar1 = Simulator_Is_Entity_Type_Road_or_Param_1e14
                        (arg1,0x17,&local_8,unaff_SS,_arg5);
      if (uVar1 == 0x0)
      {
        local_8 = CONCAT22(local_8._2_2_,local_a + 0x1);
        uVar1 = Simulator_Is_Entity_Type_Road_or_Param_1e14
                          (arg1,0x17,&local_8,unaff_SS,_arg5);
        if (uVar1 == 0x0)
        {
          return 0x0;
        }
      }
    }
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Validate_Entity_Manhattan_Distance_1da4
          (undefined2 param_1,undefined2 param_2,void *param_3,u8 *param_4,
          undefined2 param_5,long param_6)
{
  int iVar1;
  u16 unaff_SS;
  void *pvVar2;
  undefined1 local_4 [0x2];
  
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_4));
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,param_4);
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)pvVar2 + 0x10));
  iVar1 = Simulator_Calc_Manhattan_Distance_to_Coord_bcde
                    ((u16)local_4,unaff_SS,pvVar2,param_3,param_6);
  if (iVar1 < 0x0)
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6af;
    return 0x0;
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if the entity at the given coordinates matches the specified parameter type or
// is one of the generic road/tube types (0x18, 0x3F).

u16 __stdcall16far
Simulator_Is_Entity_Type_Road_or_Param_1e14
          (undefined2 param_1,undefined2 param_2,int param_3,void *param_4,void *param_5
          )
{
  int iVar1;
  u8 *puVar2;
  void *pvVar3;
  
  puVar2 = Simulator_Map_Get_Entity_at_Coords_627e(_p_MapContext_5740,param_4,param_5);
  if (puVar2 != NULL)
  {
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puVar2);
    if (pvVar3 != NULL)
    {
      pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
      if (pvVar3 != NULL)
      {
        iVar1 = *(int *)((int)pvVar3 + 0xc);
        if (((iVar1 == 0x18) || (iVar1 == 0x3f)) || (iVar1 == param_3))
        {
          return 0x1;
        }
      }
    }
  }
  return 0x0;
}



undefined2 __stdcall16far UI_Build_Item_Handle_Transition_to_State6_1e8a(void *param_1)
{
  void *pvVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if ((*(byte *)((int)param_1 + 0x1a) & 0x2) == 0x0)
  {
    uVar3 = 0x0;
    uVar4 = 0x23;
    uVar2 = 0x1;
    pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    UI_Component_Set_List_Value_at_26_Logic_7d7c
              ((int)pvVar1,(int)((ulong)pvVar1 >> 0x10),uVar2,uVar3,uVar4);
    UI_Build_Item_Transition_State_Logic_bdac(param_1,0x6);
    return 0x0;
  }
  return 0x1;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_1ec8(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 6D (0x6D). Initializes base class, creates an
// internal object, and sets vtable to 0x2572.

void * __stdcall16far UI_Build_Item_Type6D_ctor_init(void *this_ptr)
{
  astruct_491 *this;
  void *pvVar1;
  uint uVar2;
  uint uVar4;
  astruct_332 *uVar3;
  void *pvVar5;
  void *pvVar6;
  undefined2 uVar7;
  undefined2 in_stack_0000fff2;
  
  pvVar6 = (void *)this_ptr;
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar5 = UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar2 = (uint)((ulong)pvVar5 >> 0x10);
  *(undefined4 *)((int)pvVar6 + 0x20) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x24) = 0x0;
  *(undefined2 *)this_ptr = 0x2572;
  *(undefined2 *)((int)pvVar6 + 0x2) = 0x1028;
  this = allocate_memory(CONCAT22(in_stack_0000fff2,0xc));
  uVar4 = uVar2 | (uint)this;
  if (uVar4 == 0x0)
  {
    *(undefined4 *)((int)pvVar6 + 0x20) = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this,uVar2);
    *(undefined2 *)((int)pvVar6 + 0x20) = pvVar1;
    *(uint *)((int)pvVar6 + 0x22) = uVar4;
  }
  *(undefined2 *)((int)*(undefined4 *)((int)pvVar6 + 0x20) + 0xa) = 0x0;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x2572. Initializes base class and
// an internal sub-object via construct-with-vtable.

void * __stdcall16far
UI_Build_Item_Type_2572_ctor_with_Params_1fc8
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  astruct_491 *this;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined2 in_stack_0000fff2;
  
  pvVar4 = UI_Build_Item_Base_ctor_with_Params_b39e
                     (param_1,CONCAT22(param_3,param_2),(int)param_4,
                      (int)((ulong)param_4 >> 0x10));
  uVar2 = (uint)((ulong)pvVar4 >> 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0x0;
  param_1[0x12] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x2572;
  param_1[0x1] = 0x1028;
  this = allocate_memory(CONCAT22(in_stack_0000fff2,0xc));
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
  *(undefined2 *)((int)*(undefined4 *)(param_1 + 0x10) + 0xa) = 0x0;
  return (void *)CONCAT22(param_2,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for build item 0x2572. Cleans up its internal sub-object,
// notifies the entity manager (1038:79F2) if appropriate, and reverts vtables.

void __stdcall16far UI_Build_Item_Type_2572_dtor_Internal_2042(void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  void *item_id;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  *(undefined2 *)this_ptr = 0x2572;
  *(undefined2 *)((int)pvVar2 + 0x2) = 0x1028;
  *(undefined2 *)((int)*(undefined4 *)((int)pvVar2 + 0x20) + 0xa) = 0x1;
  if (*(int *)((int)pvVar2 + 0x22) != 0x0 ||
      (undefined4 *)*(int *)((int)pvVar2 + 0x20) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)pvVar2 + 0x20);
    (*(code *)*puVar1)();
  }
  if ((_p_SimulatorWorldContext != 0x0) && (_p_SimulatorTurnManager != NULL))
  {
    item_id = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    Simulator_Turn_Manager_Remove_Item_by_ID_79f2(_p_SimulatorTurnManager,item_id);
  }
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  return;
}



// A simple stub function that always returns 0.

u16 __stdcall16far Helper_Returns_0_Stub_20b0(void)
{
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_State4_Check_Neighbors_Type64_20b6(void *param_1)
{
  u16 uVar1;
  undefined2 uVar2;
  u16 uVar3;
  u16 y;
  int *unaff_SS;
  int local_16;
  int local_14;
  int local_12;
  undefined4 local_10;
  undefined2 uStack_c;
  void *local_a;
  void *local_6;
  
  UI_Build_Item_OnTick_State4_Update_be9e(param_1);
  y = (u16)((ulong)param_1 >> 0x10);
  uVar3 = (u16)param_1;
  if (*(int *)(uVar3 + 0x12) == 0x5)
  {
    local_6 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(param_1);
    local_a = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    uVar2 = (undefined2)((ulong)local_a >> 0x10);
    local_10 = *(undefined4 *)((int)local_a + 0xc);
    uStack_c = *(undefined2 *)((int)local_a + 0x10);
    unpack_3word_struct(&local_10,unaff_SS,&local_16,unaff_SS);
    local_10._2_2_ = local_14 + -0x1;
    uVar1 = Simulator_Is_Entity_Type_Type64_at_Coords_21ba
                      (uVar3,y,(undefined4 *)CONCAT22(unaff_SS,&local_10),local_6);
    if (uVar1 == 0x0)
    {
      local_10._2_2_ = local_14 + 0x1;
      uVar1 = Simulator_Is_Entity_Type_Type64_at_Coords_21ba
                        (uVar3,y,(undefined4 *)CONCAT22(unaff_SS,&local_10),local_6);
      if (uVar1 == 0x0)
      {
        local_10._0_2_ = local_12 + -0x1;
        local_10._2_2_ = local_14;
        uVar1 = Simulator_Is_Entity_Type_Type64_at_Coords_21ba
                          (uVar3,y,(undefined4 *)CONCAT22(unaff_SS,&local_10),local_6);
        if (uVar1 == 0x0)
        {
          local_10._0_2_ = local_12 + 0x1;
          uVar3 = Simulator_Is_Entity_Type_Type64_at_Coords_21ba
                            (uVar3,y,(undefined4 *)CONCAT22(unaff_SS,&local_10),local_6)
          ;
          if (uVar3 == 0x0)
          {
            return;
          }
        }
      }
    }
    UI_Component_Add_B932_to_Manager_79b2(_p_SimulatorTurnManager,local_a);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if the entity at the given coordinates is of type 0x40 (Type 64).

u16 __stdcall16far
Simulator_Is_Entity_Type_Type64_at_Coords_21ba(u16 x,u16 y,void *coords,void *arg4)
{
  u8 *puVar1;
  void *pvVar2;
  
  puVar1 = Simulator_Map_Get_Entity_at_Coords_627e(_p_MapContext_5740,coords,arg4);
  if (puVar1 != NULL)
  {
    pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puVar1);
    if (pvVar2 != NULL)
    {
      pvVar2 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar2);
      if ((pvVar2 != NULL) && (*(int *)((int)pvVar2 + 0xc) == 0x40))
      {
        return 0x1;
      }
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if the entity at the given coordinates matches the specified parameter type or
// is type 0x40. Equivalent to 1028:1E14 but specifically for type 0x40.

u16 __stdcall16far
Simulator_Is_Entity_Type_Type64_or_Param_at_Coords_2220
          (undefined2 param_1,undefined2 param_2,int param_3,void *param_4,void *param_5
          )
{
  int iVar1;
  u8 *puVar2;
  void *pvVar3;
  
  puVar2 = Simulator_Map_Get_Entity_at_Coords_627e(_p_MapContext_5740,param_4,param_5);
  if (puVar2 != NULL)
  {
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puVar2);
    if (pvVar3 != NULL)
    {
      pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
      if ((pvVar3 != NULL) &&
         ((iVar1 = *(int *)((int)pvVar3 + 0xc), iVar1 == 0x40 || (iVar1 == param_3))))
      {
        return 0x1;
      }
    }
  }
  return 0x0;
}
