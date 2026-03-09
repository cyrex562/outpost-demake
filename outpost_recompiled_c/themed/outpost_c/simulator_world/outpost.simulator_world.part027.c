/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 27/56
 * Original lines (combined): 71632-73486
 * Boundaries: top-level declarations/definitions only
 */




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



// Performs a cardinal adjacency check (N, S, E, W) specifically validating against type
// 0x40 and other infrastructure. Used for complex road/connection validation.

int __stdcall16far
Simulator_Check_Complex_Road_Adjacency_Logic_2290
          (void *arg1,u16 x,u16 y,u16 arg4,u16 arg5,void *arg6)
{
  u16 uVar1;
  int *unaff_SS;
  u16 local_e;
  u16 local_c;
  int local_a;
  void *local_8;
  u16 uStack_4;
  
  local_8 = *(void **)x;
  uStack_4 = *(u16 *)(x + 0x4);
  unpack_3word_struct(&local_8,unaff_SS,(int *)&local_e,unaff_SS);
  local_8 = (void *)CONCAT22(local_c - 0x1,(void *)local_8);
  uVar1 = Simulator_Is_Entity_Type_Type64_or_Param_at_Coords_2220
                    (arg1,0x16,&local_8,unaff_SS,arg6);
  if (uVar1 == 0x0)
  {
    local_8 = (void *)CONCAT22(local_c + 0x1,(void *)local_8);
    uVar1 = Simulator_Is_Entity_Type_Type64_or_Param_at_Coords_2220
                      (arg1,0x16,&local_8,unaff_SS,arg6);
    if (uVar1 == 0x0)
    {
      local_8 = (void *)CONCAT22(local_c,(void *)(local_a + -0x1));
      uVar1 = Simulator_Is_Entity_Type_Type64_or_Param_at_Coords_2220
                        (arg1,0x17,&local_8,unaff_SS,arg6);
      if (uVar1 == 0x0)
      {
        local_8 = (void *)CONCAT22(local_8._2_2_,(void *)(local_a + 0x1));
        uVar1 = Simulator_Is_Entity_Type_Type64_or_Param_at_Coords_2220
                          (arg1,0x17,&local_8,unaff_SS,arg6);
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
Simulator_Validate_Entity_Proximity_23a8
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
                      (u8 *)(u8 *)*(undefined4 *)((int)(void *)pvVar2 + 0x10));
  iVar1 = Simulator_Calc_Manhattan_Distance_to_Coord_bcde
                    ((u16)local_4,unaff_SS,pvVar2,param_3,param_6);
  if (iVar1 < 0x0)
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6af;
    return 0x0;
  }
  return 0x1;
}



undefined2 __stdcall16far
Simulator_Validate_Adjacency_MultiCoord_Logic_2844
          (u32 param_1,undefined4 *param_2,undefined2 param_3,undefined2 param_4,
          undefined2 param_5,long param_6)
{
  u16 uVar1;
  int *unaff_SS;
  int local_e;
  int local_c;
  int local_a;
  undefined4 local_8;
  undefined2 uStack_4;
  
  local_8 = *param_2;
  uStack_4 = *(undefined2 *)(param_2 + 0x1);
  unpack_3word_struct(&local_8,unaff_SS,&local_e,unaff_SS);
  local_8 = CONCAT22(local_c + -0x1,(int)local_8);
  uVar1 = Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
                    (param_1,0x7b,&local_8,unaff_SS,param_6);
  if (uVar1 == 0x0)
  {
    uVar1 = Simulator_Validate_Adjacency_Placement_Rules_297c
                      (param_1,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_6);
    if (uVar1 == 0x0)
    {
      local_8 = CONCAT22(local_c + 0x1,(int)local_8);
      uVar1 = Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
                        (param_1,0x7b,&local_8,unaff_SS,param_6);
      if (uVar1 == 0x0)
      {
        uVar1 = Simulator_Validate_Adjacency_Placement_Rules_297c
                          (param_1,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_6);
        if (uVar1 == 0x0)
        {
          local_8._0_2_ = local_a + -0x1;
          local_8._2_2_ = local_c;
          uVar1 = Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
                            (param_1,0x7c,&local_8,unaff_SS,param_6);
          if (uVar1 == 0x0)
          {
            uVar1 = Simulator_Validate_Adjacency_Placement_Rules_297c
                              (param_1,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_6
                              );
            if (uVar1 == 0x0)
            {
              local_8 = CONCAT22(local_8._2_2_,local_a + 0x1);
              uVar1 = Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
                                (param_1,0x7c,&local_8,unaff_SS,param_6);
              if (uVar1 == 0x0)
              {
                uVar1 = Simulator_Validate_Adjacency_Placement_Rules_297c
                                  (param_1,(undefined4 *)CONCAT22(unaff_SS,&local_8),
                                   param_6);
                if (uVar1 == 0x0)
                {
                  return 0x0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates if an entity can be placed at coordinates based on its adjacency to
// existing structures. Specific rules for roads, tubes (0x18, 0x3F), and other
// infrastructure types.

u16 __stdcall16far
Simulator_Validate_Adjacency_Placement_Rules_297c(u32 arg1,void *coords,long arg3)
{
  uint uVar1;
  char cVar2;
  u16 uVar3;
  u8 *puVar4;
  void *pvVar5;
  
  uVar3 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                    ((u16)arg1,(u16)(arg1 >> 0x10),coords,arg3);
  if (uVar3 == 0x0)
  {
    puVar4 = Simulator_Map_Get_Entity_at_Coords_627e
                       (_p_MapContext_5740,coords,(void *)arg3);
    if (puVar4 != NULL)
    {
      pvVar5 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)puVar4);
      pvVar5 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar5);
      uVar1 = *(uint *)((int)(void *)pvVar5 + 0xc);
      if ((int)uVar1 < 0x4b)
      {
        if (0x47 < (int)uVar1)
        {
          return 0x0;
        }
        if (uVar1 == 0x41)
        {
          return 0x0;
        }
        if (uVar1 < 0x42)
        {
          cVar2 = (char)uVar1;
          if (cVar2 < '5')
          {
            if ('2' < cVar2)
            {
              return 0x0;
            }
            cVar2 += -0x10;
          }
          else
          {
            cVar2 += -0x3e;
          }
          if (cVar2 == '\0')
          {
            return 0x0;
          }
        }
      }
      else if (true)
      {
        switch(uVar1)
        {
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x60:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x6e:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
          goto switchD_1028_2a0b_caseD_4c;
        }
      }
      return 0x1;
    }
  }
switchD_1028_2a0b_caseD_4c:
  return 0x0;
}



undefined2 __stdcall16far
UI_Build_Item_Comprehensive_Placement_Validator_2c28
          (u32 param_1,undefined4 *param_2,u8 *param_3,undefined2 param_4,long param_5)
{
  u16 uVar1;
  int *unaff_SS;
  u16 x;
  u16 y;
  int local_e;
  int iStack_c;
  undefined4 local_8;
  undefined2 uStack_4;
  
  uVar1 = UI_Build_Item_Validate_Placement_MultiStage_Logic_09d4
                    (param_1,param_2,param_3,param_5);
  if (uVar1 != 0x0)
  {
    local_8 = *param_2;
    uStack_4 = *(undefined2 *)((undefined4 *)param_2 + 0x1);
    unpack_3word_struct(&local_8,unaff_SS,&local_e,unaff_SS);
    pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c + -0x1);
    x = (u16)param_1;
    y = (u16)(param_1 >> 0x10);
    uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                      (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5);
    if (uVar1 != 0x0)
    {
      pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c + -0x1);
      uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                        (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5);
      if (uVar1 != 0x0)
      {
        pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c + -0x1);
        uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                          (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5);
        if (uVar1 != 0x0)
        {
          pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c);
          uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                            (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5);
          if (uVar1 != 0x0)
          {
            pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c);
            uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                              (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5);
            if (uVar1 != 0x0)
            {
              pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c);
              uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                                (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5);
              if (uVar1 != 0x0)
              {
                pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c + 0x1);
                uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                                  (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5
                                  );
                if (uVar1 != 0x0)
                {
                  pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c + 0x1);
                  uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                                    (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),
                                     param_5);
                  if (uVar1 != 0x0)
                  {
                    pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c + 0x1);
                    uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                                      (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),
                                       param_5);
                    if (uVar1 != 0x0)
                    {
                      return 0x1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6a8;
  }
  return 0x0;
}
