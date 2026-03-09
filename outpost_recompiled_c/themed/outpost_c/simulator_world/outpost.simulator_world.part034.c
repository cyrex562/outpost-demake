/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 34/56
 * Original lines (combined): 84031-86061
 * Boundaries: top-level declarations/definitions only
 */




u16 __stdcall16far
Simulator_Validate_Adjacency_MultiCoord_Logic_c64a
          (u32 param_1,u32 *param_2,u16 param_3,u16 param_4,u16 param_5,u32 param_6)
{
  u16 uVar1;
  int *unaff_SS;
  u16 local_18;
  u16 local_12;
  u16 local_10;
  int local_e;
  u16 local_c;
  u16 local_a;
  u16 local_8;
  u16 local_6;
  undefined2 uStack_4;
  
  _local_8 = *param_2;
  uStack_4 = (undefined2)param_2[0x1];
  unpack_3word_struct(&local_8,unaff_SS,&local_e,unaff_SS);
  _local_8 = CONCAT22(local_c - 0x1,local_8);
  uVar1 = Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
                    (param_1,0x7b,&local_8,unaff_SS,param_6);
  if (uVar1 == 0x0)
  {
    _local_8 = CONCAT22(local_c + 0x1,local_8);
    uVar1 = Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
                      (param_1,0x7b,&local_8,unaff_SS,param_6);
    if (uVar1 == 0x0)
    {
      local_8 = local_a - 0x1;
      local_6 = local_c;
      uVar1 = Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
                        (param_1,0x7c,&local_8,unaff_SS,param_6);
      if (uVar1 == 0x0)
      {
        _local_8 = CONCAT22(local_6,local_a + 0x1);
        uVar1 = Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
                          (param_1,0x7c,&local_8,unaff_SS,param_6);
        if (uVar1 == 0x0)
        {
          return 0x0;
        }
      }
    }
  }
  return 0x1;
}



// Updates an internal status flag (offset 0xAC) on a simulator entity based on its
// primary type (0xA6). Maps types to status values 1, 5, or 10.

void __stdcall16far Simulator_Update_Entity_Status_Flag_at_AC_c724(void *this_ptr)
{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  if (*(int *)((int)*(undefined4 *)(iVar2 + 0x14) + 0xac) != 0x0)
  {
    return;
  }
  uVar1 = *(uint *)((int)*(undefined4 *)(iVar2 + 0x14) + 0xa6);
  if (uVar1 == 0xd)
  {
    *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x14) + 0xac) = 0x1;
    goto LAB_1028_c770;
  }
  if (uVar1 < 0xe)
  {
    if ((char)uVar1 == '\0') goto LAB_1028_c770;
    if ((char)uVar1 == '\a')
    {
      *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x14) + 0xac) = 0xa;
      goto LAB_1028_c770;
    }
  }
  *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x14) + 0xac) = 0x5;
LAB_1028_c770:
  if (*(int *)((int)*(undefined4 *)(iVar2 + 0x14) + 0xac) == 0x0)
  {
    if (*(int *)((int)*(undefined4 *)(iVar2 + 0x14) + 0xa8) != 0x0)
    {
      *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x14) + 0xac) = 0x1;
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A comprehensive routine to resolve the entity type ID at world coordinates. Checks
// the simulator map, retrieves the object, and maps its internal state to a standard UI
// type ID. Equivalent to 1020:AFC4 but includes map lookup.

u16 __stdcall16far
Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
          (u16 x,u16 y,void *coords,long arg4)
{
  u16 uVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined4 *puVar3;
  void *this_ptr;
  void *pvVar4;
  char cStack_1b;
  undefined1 local_a [0x4];
  u8 *puStack_6;
  
  puVar3 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,coords,arg4,
                      (undefined1 *)CONCAT22(unaff_SS,local_a));
  puStack_6 = (u8 *)*puVar3;
  cStack_1b = (char)((ulong)puStack_6 >> 0x18);
  if (cStack_1b == '\0')
  {
    return (u16)(u8 *)puStack_6;
  }
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puStack_6);
  pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  iVar2 = (int)((ulong)pvVar4 >> 0x10);
  if (iVar2 == 0x0 && (int)pvVar4 == 0x0)
  {
    return *(u16 *)((int)this_ptr + 0x14);
  }
  switch(*(undefined2 *)((int)pvVar4 + 0xc))
  {
  case 0x1:
    uVar1 = 0x1;
    break;
  case 0x2:
    uVar1 = 0x2;
    break;
  case 0x3:
    uVar1 = 0x3;
    break;
  case 0x4:
    uVar1 = 0x4;
    break;
  case 0x5:
    uVar1 = 0x5;
    break;
  case 0x6:
    uVar1 = 0x7;
    break;
  case 0x7:
    return 0x8;
  case 0x8:
    return 0x9;
  case 0x9:
    return 0x6;
  default:
    uVar1 = 0x0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the raw 4-byte map cell data from the simulator map at the specified
// coordinates.

void * __stdcall16far
Simulator_Get_Map_Cell_Data_c89c(void *this_ptr,void *coords,void *out_data)
{
  undefined2 unaff_SS;
  undefined4 *puVar1;
  undefined1 local_16 [0xc];
  long lStack_a;
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  lStack_a = *(long *)((int)pvStack_6 + 0x8);
  puVar1 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,coords,lStack_a,
                      (undefined1 *)CONCAT22(unaff_SS,local_16));
  *(undefined4 *)out_data = *puVar1;
  return out_data;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles per-turn resource consumption for a build item. Iterates through resource
// lists (0x11-0x25) and decrements colony resources. Skips processing every 5-10 turns
// based on building type (0x32, 0x33).

void __stdcall16far UI_Build_Item_Process_Turn_Consumption_Logic_c952(void *this_ptr)
{
  undefined4 uVar1;
  void *colony_ptr;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  void *pvVar9;
  void *pvVar10;
  undefined4 uStack_1e;
  int iStack_10;
  int iStack_e;
  
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar6 = (int)this_ptr;
  uVar1 = *(undefined4 *)(iVar6 + 0x14);
  iVar2 = (int)uVar1;
  if (*(int *)(iVar6 + 0x16) != 0x0 || iVar2 != 0x0)
  {
    pvVar9 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    uVar8 = (undefined2)((ulong)pvVar9 >> 0x10);
    colony_ptr = (void *)*(undefined4 *)((int)pvVar9 + 0x2e);
    iStack_e = (int)colony_ptr;
    if ((*(int *)((int)pvVar9 + 0x30) != 0x0 || iStack_e != 0x0) &&
       (uVar8 = (undefined2)((ulong)colony_ptr >> 0x10),
       *(int *)(iStack_e + 0x206) == 0x0))
    {
      iVar3 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),
                         *(int *)(iVar6 + 0xc));
      if (iVar3 == 0x0)
      {
        iVar6 = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),
                           *(int *)(iVar6 + 0xc));
        if ((iVar6 != 0x0) && ((int)((qword)*_p_SimulatorWorldContext % 0x5) == 0x0))
        {
          return;
        }
      }
      else if ((int)((qword)*_p_SimulatorWorldContext % 0xa) == 0x0)
      {
        return;
      }
      uVar7 = (undefined2)((ulong)uVar1 >> 0x10);
      if (*(int *)(iStack_e + 0x204) == 0x0)
      {
        for (iStack_10 = 0x0; iStack_10 < 0x25; iStack_10 += 0x1)
        {
          pvVar9 = (void *)*(ulong *)(iStack_10 * 0x4 + iVar2);
          uVar5 = (uint)pvVar9;
          if (*(int *)(iStack_10 * 0x4 + iVar2 + 0x2) != 0x0 || uVar5 != 0x0)
          {
            pvVar10 = Colony_Calc_Resource_Deficit_at_26_540a(colony_ptr,iStack_10);
            uStack_1e._2_2_ = (int)((ulong)pvVar9 >> 0x10);
            if (pvVar10 < pvVar9)
            {
              uVar4 = uVar5 - (uint)pvVar10;
              iVar6 = (uStack_1e._2_2_ - (int)((ulong)pvVar10 >> 0x10)) -
                      (uint)(uVar5 < (uint)pvVar10);
              Colony_Consume_Resource_Globally_52b8
                        (colony_ptr,CONCAT22(iVar6,uVar4),0x21);
              uStack_1e = (void *)CONCAT22((uStack_1e._2_2_ - iVar6) -
                                           (uint)(uVar5 < uVar4),(void *)(uVar5 - uVar4)
                                          );
              pvVar9 = uStack_1e;
            }
            uStack_1e = pvVar9;
            if (uStack_1e._2_2_ != 0x0 || (int)uStack_1e != 0x0)
            {
              Colony_Consume_Resource_Globally_52b8
                        (colony_ptr,(ulong)uStack_1e,iStack_10);
            }
          }
        }
      }
      else
      {
        if (*(int *)(iVar2 + 0x8e) != 0x0 || *(int *)(iVar2 + 0x8c) != 0x0)
        {
          Colony_Consume_Resource_Globally_52b8
                    (colony_ptr,CONCAT22(*(int *)(iVar2 + 0x8e),*(int *)(iVar2 + 0x8c)),
                     0x23);
        }
        if (*(int *)(iVar2 + 0x92) != 0x0 || *(int *)(iVar2 + 0x90) != 0x0)
        {
          Colony_Consume_Resource_Globally_52b8
                    (colony_ptr,CONCAT22(*(int *)(iVar2 + 0x92),*(int *)(iVar2 + 0x90)),
                     0x24);
          return;
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates if all required resources for a build item's turn-based consumption are
// available in the colony storage. Returns 1 if all conditions are met.

u16 __stdcall16far UI_Build_Item_Check_Consumption_Availability_cb04(void *this_ptr)
{
  int iVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  bool bVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  undefined2 uStack_34;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_1e;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  
  lVar2 = *(long *)((int)(void *)this_ptr + 0x14);
  if (lVar2 != 0x0)
  {
    pvVar9 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    uVar6 = (undefined2)((ulong)pvVar9 >> 0x10);
    pvVar12 = (void *)*(undefined4 *)((int)(void *)pvVar9 + 0x2e);
    iVar1 = *(int *)((int)(void *)pvVar9 + 0x30);
    uStack_e = (void *)pvVar12;
    if (iVar1 != 0x0 || uStack_e != NULL)
    {
      uVar6 = (undefined2)((ulong)pvVar12 >> 0x10);
      if (*(int *)((int)uStack_e + 0x206) != 0x0)
      {
        return 0x1;
      }
      iVar5 = (int)lVar2;
      uVar7 = (undefined2)((ulong)lVar2 >> 0x10);
      if (*(int *)((int)uStack_e + 0x204) != 0x0)
      {
        uStack_1e = 0x1;
        pvVar11 = (void *)*(undefined4 *)(iVar5 + 0x8c);
        pvVar10 = Colony_Calc_Resource_Deficit_at_26_540a(pvVar12,0x23);
        uVar4 = (uint)((ulong)pvVar10 >> 0x10);
        pvVar3 = (void *)pvVar10;
        uStack_24 = (uint)((ulong)pvVar11 >> 0x10);
        if ((uVar4 <= uStack_24) &&
           ((uStack_26 = (void *)pvVar11, uVar4 < uStack_24 || (pvVar3 < uStack_26))))
        {
          UI_Component_Set_List_Value_at_26_Logic_7d7c
                    (pvVar9,(int)uStack_26 - (int)pvVar3,
                     (uStack_24 - uVar4) - (uint)(uStack_26 < pvVar3),0x23);
          uStack_1e = 0x0;
          pvVar11 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                      (_p_ResourceManager,0x2b);
          Turn_Manager_Push_Resource_Event_Logic
                    ((void *)pvVar11,*(long *)((int)uStack_e + 0x4),0x12);
        }
        pvVar11 = (void *)*(undefined4 *)(iVar5 + 0x90);
        pvVar12 = Colony_Calc_Resource_Deficit_at_26_540a(pvVar12,0x24);
        uVar4 = (uint)((ulong)pvVar12 >> 0x10);
        pvVar3 = (void *)pvVar12;
        uStack_24 = (uint)((ulong)pvVar11 >> 0x10);
        if ((uVar4 <= uStack_24) &&
           ((uStack_26 = (void *)pvVar11, uVar4 < uStack_24 || (pvVar3 < uStack_26))))
        {
          UI_Component_Set_List_Value_at_26_Logic_7d7c
                    (pvVar9,(int)uStack_26 - (int)pvVar3,
                     (uStack_24 - uVar4) - (uint)(uStack_26 < pvVar3),0x24);
          uStack_1e = 0x0;
        }
        return uStack_1e;
      }
      pvVar11 = Colony_Calc_Resource_Deficit_at_26_540a
                          ((void *)CONCAT22(iVar1,uStack_e),0x21);
      uStack_10 = (uint)((ulong)pvVar11 >> 0x10);
      uStack_12 = (void *)pvVar11;
      uStack_14 = 0x1;
      for (uStack_16 = 0x11; uStack_16 < 0x25; uStack_16 += 0x1)
      {
        pvVar11 = (void *)*(ulong *)(uStack_16 * 0x4 + iVar5);
        pvVar10 = Colony_Calc_Resource_Deficit_at_26_540a(pvVar12,uStack_16);
        uStack_34 = (uint)((ulong)pvVar11 >> 0x10);
        if (pvVar10 < pvVar11)
        {
          if ((((uStack_16 == 0x23) || (uStack_16 == 0x24)) || (uStack_10 < uStack_34))
             || ((pvVar3 = (void *)pvVar11, uStack_10 <= uStack_34 &&
                 (uStack_12 < pvVar3))))
          {
            UI_Component_Set_List_Value_at_26_Logic_7d7c
                      (pvVar9,(long)pvVar11 - (long)pvVar10,uStack_16);
            uStack_14 = 0x0;
            if (uStack_16 == 0x23)
            {
              pvVar11 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                          (_p_ResourceManager,0x2b);
              Turn_Manager_Push_Resource_Event_Logic
                        ((void *)pvVar11,*(long *)((int)uStack_e + 0x4),0x12);
            }
          }
          else
          {
            bVar8 = uStack_12 < pvVar3;
            uStack_12 = (void *)((int)uStack_12 - (int)pvVar3);
            uStack_10 = (uStack_10 - uStack_34) - (uint)bVar8;
          }
        }
      }
      return uStack_14;
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Automatically identifies and places missing neighbor buildings (types 7, 8, 9) in the
// 8 adjacent tiles around a newly placed building. Submits InternalPutBldg commands for
// each.

void __stdcall16far
UI_Build_Item_Auto_Place_Neighbor_Buildings_ccd0(void *this_ptr,u16 *coords_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  u16 *unaff_SS;
  bool bVar4;
  undefined4 uVar5;
  int *in_stack_0000000a;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 local_178;
  undefined2 uStack_176;
  int iStack_54;
  int iStack_48;
  int iStack_40;
  int iStack_3e;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  long lStack_34;
  long lStack_30;
  undefined1 local_2c [0xc];
  u16 local_20;
  int local_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int local_8;
  int local_6;
  int local_4;
  
  unpack_3word_struct(coords_ptr,in_stack_0000000a,&local_8,(int *)unaff_SS);
  pvStack_14 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uStack_18 = *(undefined4 *)((int)pvStack_14 + 0x2e);
  uStack_1c = *(undefined4 *)((int)uStack_18 + 0x4);
  Simulator_Get_World_Dimensions_Pair_c1f8(this_ptr,&local_20,unaff_SS);
  iStack_a = local_4 + -0x1;
  iStack_e = local_4 + 0x1;
  iStack_c = local_6 + -0x1;
  iStack_10 = local_6 + 0x1;
  if (iStack_a < 0x0)
  {
    iStack_a = 0x0;
  }
  if (local_1e <= iStack_e)
  {
    iStack_e = local_1e + -0x1;
  }
  if (iStack_c < 0x0)
  {
    iStack_c = 0x0;
  }
  if ((int)local_20 <= iStack_10)
  {
    iStack_10 = local_20 - 0x1;
  }
  zero_init_12bytes_struct(local_2c);
  pack_two_3word_structs
            (local_2c,unaff_SS,local_8,iStack_10,iStack_e,local_8,iStack_c,iStack_a);
  lStack_30 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  lStack_34 = *(long *)((int)lStack_30 + 0x20);
  puStack_38 = Simulator_Map_Batch_Create_Production_Items_in_Rect_6522
                         (_p_MapContext_5740,(undefined1 *)CONCAT22(unaff_SS,local_2c),
                          lStack_34);
  if (puStack_38 != NULL)
  {
    uStack_3c = 0x0;
    iStack_3e = 0x0;
    for (iStack_40 = iStack_c; iStack_40 <= iStack_10; iStack_40 += 0x1)
    {
      for (iStack_48 = iStack_a; iVar2 = iStack_3e, iStack_48 <= iStack_e;
          iStack_48 += 0x1)
      {
        iVar3 = iStack_3e >> 0xf;
        puVar1 = (undefined2 *)((int)*puStack_38 + 0x4);
        iStack_3e = iStack_3e + 0x1;
        uVar5 = (*(code *)*puVar1)(0x1030,(undefined4 *)puStack_38,
                                   (int)((ulong)puStack_38 >> 0x10),iVar2,iVar3);
        iVar2 = (int)uVar5;
        uStack_3c._3_1_ = (char)((ulong)uVar5 >> 0x18);
        bVar4 = uStack_3c._3_1_ == '\0';
        uStack_3c = uVar5;
        if (bVar4)
        {
          iStack_54 = iVar2;
          if (iVar2 == 0x7)
          {
            pack_3words_reverse(coords_ptr,(int)in_stack_0000000a,local_8,iStack_40);
            uVar9 = (undefined2)lStack_34;
            uVar10 = (undefined2)((ulong)lStack_34 >> 0x10);
            uVar7 = (undefined2)uStack_1c;
            uVar8 = (undefined2)((ulong)uStack_1c >> 0x10);
            uVar6 = 0x6;
          }
          else if (iVar2 == 0x8)
          {
            pack_3words_reverse(coords_ptr,(int)in_stack_0000000a,local_8,iStack_40);
            uVar9 = (undefined2)lStack_34;
            uVar10 = (undefined2)((ulong)lStack_34 >> 0x10);
            uVar7 = (undefined2)uStack_1c;
            uVar8 = (undefined2)((ulong)uStack_1c >> 0x10);
            uVar6 = 0x7;
          }
          else
          {
            if (iVar2 != 0x9) goto LAB_1028_ce2c;
            pack_3words_reverse(coords_ptr,(int)in_stack_0000000a,local_8,iStack_40);
            uVar9 = (undefined2)lStack_34;
            uVar10 = (undefined2)((ulong)lStack_34 >> 0x10);
            uVar7 = (undefined2)uStack_1c;
            uVar8 = (undefined2)((ulong)uStack_1c >> 0x10);
            uVar6 = 0x8;
          }
          Simulator_Command_InternalPutBldg_ctor_init_87f0
                    (&local_178,unaff_SS,0x0,0x0,uVar6,coords_ptr,in_stack_0000000a,
                     uVar7,uVar8,uVar9,uVar10);
          Simulator_Global_Process_Build_Event_Type4_835a
                    (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_178)
                    );
          local_178 = 0x389a;
          uStack_176 = 0x1008;
        }
LAB_1028_ce2c:
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes a Data History Object by querying the simulator for an entity and cloning
// its related point history into the new object.

void * __stdcall16far
Data_History_Object_Initialize_from_Simulator_Entity_d078(void *this_ptr,u8 *packed_id)
{
  void *pvVar1;
  uint extraout_DX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  long value;
  undefined2 in_stack_0000ffde;
  undefined1 local_16 [0x4];
  undefined4 *puStack_12;
  uint uStack_10;
  undefined4 *puStack_e;
  uint uStack_c;
  void *pvStack_a;
  void *pvStack_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar4 = (int)this_ptr;
  puStack_12 = (undefined4 *)*(int *)(iVar4 + 0x4);
  uVar2 = *(uint *)(iVar4 + 0x6);
  _puStack_e = (undefined4 *)CONCAT22(uVar2,puStack_12);
  uStack_10 = uVar2;
  if (uVar2 != 0x0 || puStack_12 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puStack_12)();
    uVar2 = extraout_DX;
  }
  puStack_12 = allocate_memory(CONCAT22(in_stack_0000ffde,0x1c));
  uVar3 = uVar2 | (uint)puStack_12;
  uStack_10 = uVar2;
  if (uVar3 == 0x0)
  {
    pvVar1 = NULL;
    uVar3 = 0x0;
  }
  else
  {
    pvVar1 = Data_History_Object_ctor(puStack_12,0x6,0x24);
  }
  *(undefined2 *)(iVar4 + 0x4) = pvVar1;
  *(uint *)(iVar4 + 0x6) = uVar3;
  pvStack_6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,packed_id);
  if (pvStack_6 == NULL)
  {
    Gameplay_Object_Base_vtable_init_Helper((long)CONCAT22(unaff_SS,local_16));
    value = Gameplay_Object_Factory_Create_From_Type_ID(local_16,unaff_SS,0x0,0x0,0xa);
    Data_History_Object_Append_Point((void *)(void *)*(undefined4 *)(iVar4 + 0x4),value)
    ;
    return (void *)CONCAT22(*(undefined2 *)(iVar4 + 0x6),
                            (void *)(void *)*(undefined4 *)(iVar4 + 0x4));
  }
  pvStack_a = (void *)Colony_Spawn_and_Register_Entity_565e(pvStack_6);
  if (pvStack_a != NULL)
  {
    Data_History_Object_Batch_Clone_Points_d172(this_ptr,pvStack_a);
  }
  return (void *)CONCAT22(*(undefined2 *)(iVar4 + 0x6),
                          (void *)*(undefined2 *)(iVar4 + 0x4));
}



// Iterates through a list of simulator points and appends clones of each to the Data
// History object.

void __stdcall16far
Data_History_Object_Batch_Clone_Points_d172(void *this_ptr,void *list_ptr)
{
  undefined2 unaff_SS;
  long lVar1;
  undefined1 local_e [0x8];
  undefined1 local_6 [0x4];
  
  Gameplay_Object_Base_vtable_init_Helper((long)CONCAT22(unaff_SS,local_6));
  init_long_pair(local_e,(long)list_ptr);
  while( true )
  {
    lVar1 = get_next_list_item(local_e);
    if (lVar1 == 0x0) break;
    lVar1 = Gameplay_Object_Factory_Create_From_Type_ID
                      (local_6,unaff_SS,0x0,0x0,*(undefined2 *)((int)lVar1 + 0x4));
    Data_History_Object_Append_Point
              ((void *)(void *)*(undefined4 *)((int)(void *)this_ptr + 0x4),lVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for the global Simulator Context. Performs exhaustive cleanup of
// all internal resource managers, the main simulator map (1050:5740), and the 8
// specialized world-tracking UI Item Lists.

void __stdcall16far Simulator_Context_dtor_Internal_daba(void *this_ptr)
{
  u32 *puVar1;
  int iVar2;
  void *pvVar3;
  void **table_ptr;
  astruct_312 *uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  
  if (_p_MapContext_5740 != NULL)
  {
    pvVar3 = (void *)_p_MapContext_5740;
    Simulator_Map_Context_dtor_Internal_61b0(_p_MapContext_5740);
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_312 *)this_ptr;
  pvVar3 = (void *)uVar3->field66_0x52;
  if (uVar3->field67_0x54 != 0x0 || pvVar3 != NULL)
  {
    Simulator_Map_Context_Free_Internal_Buffers_4538
              ((void *)CONCAT22(uVar3->field67_0x54,pvVar3));
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  if (_PTR_DAT_1050_0000_1050_5166 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*_PTR_DAT_1050_0000_1050_5166)
              (unaff_CS,(undefined4 *)_PTR_DAT_1050_0000_1050_5166,
               (int)((ulong)_PTR_DAT_1050_0000_1050_5166 >> 0x10));
  }
  _p_SimulatorWorldContext = 0x0;
  if (_p_StringPropertyTable != NULL)
  {
    table_ptr = (void **)_p_StringPropertyTable;
    res_cleanup_string_property_table_logic(table_ptr);
    unaff_CS = 0x1000;
    free_if_not_null(table_ptr);
  }
  puVar1 = uVar3->field14_0xe;
  iVar2 = uVar3->field15_0x10;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field16_0x12;
  iVar2 = uVar3->field17_0x14;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field18_0x16;
  iVar2 = uVar3->field19_0x18;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field20_0x1a;
  iVar2 = uVar3->field21_0x1c;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field22_0x1e;
  iVar2 = uVar3->field23_0x20;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field24_0x22;
  iVar2 = uVar3->field25_0x24;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field26_0x26;
  iVar2 = uVar3->field27_0x28;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field28_0x2a;
  iVar2 = uVar3->field29_0x2c;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a world entity iterator. Configures the iterator to scan one of the
// simulator's 8 specialized world-tracking lists based on the provided type index. Sets
// vtable to 0x11A6.

void * __stdcall16far
Simulator_World_Iterator_ctor_init_dc52
          (void *this_ptr,int arg2,u16 arg3,uint type_index)
{
  astruct_311 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_311 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 =
       *(u32 *)((int)_p_SimulatorWorldContext + (type_index >> 0x8) * 0x4 + 0xa);
  uVar1->field4_0x8 = 0x1;
  uVar1->field6_0x10 = arg2;
  *(undefined2 *)this_ptr = 0x11a6;
  uVar1->field2_0x2 = 0x1030;
  uVar1->field5_0xc = *(u32 *)((int)uVar1->field3_0x4 + 0xa);
  if (arg2 == 0x0)
  {
    uVar1->field4_0x8 = uVar1->field5_0xc;
  }
  else
  {
    uVar1->field4_0x8 = 0x1;
  }
  return this_ptr;
}



// A wrapper that retrieves map cell data from the simulator map using the primary
// sub-manager (offset 0x52). Equivalent to 1028:C89C but uses a different manager
// offset.

void * __stdcall16far
Simulator_Get_Map_Cell_Data_Wrapper_e0a0(undefined4 param_1,undefined4 param_2)
{
  void *in_AX;
  int *piVar1;
  void *uVar1;
  
  piVar1 = Simulator_Factory_Create_Building_Entry_Logic_4782
                     (*(undefined4 *)((int)param_1 + 0x52),0x1,param_2);
  return (void *)CONCAT22(piVar1,in_AX);
}



// Allocates 152 bytes and clones an internal object from the simulator's resource
// manager (offset 0x52). Bulk copies 152 bytes (0x26 dwords) from the manager's source.

void * __stdcall16far
Simulator_Object_Clone_from_Manager_e0bc(undefined4 param_1,int param_2)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 in_DX;
  undefined2 uVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x98));
  puVar4 = puVar3;
  uVar6 = in_DX;
  Simulator_Map_Context_Load_Object_Template_4bbe
            ((void *)*(undefined4 *)((int)param_1 + 0x52),param_2);
  puVar7 = puVar3;
  for (iVar5 = 0x26; iVar5 != 0x0; iVar5 += -0x1)
  {
    puVar2 = puVar7;
    puVar7 = puVar7 + 0x1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 0x1;
    *puVar2 = *puVar1;
  }
  return (void *)CONCAT22(in_DX,puVar3);
}



// Resolves a 4-byte packed entity ID into its (X, Y) world coordinates by retrieving
// the object and calling its coordinate accessor.

void __stdcall16far
Simulator_Get_Entity_Coords_from_TypeID_e198
          (void *this_ptr,void *out_x,void *out_y,u8 *packed_id)
{
  void *this_ptr_00;
  
  this_ptr_00 = Simulator_Get_Entity_Object_from_PackedID_e1ec(this_ptr,packed_id);
  UI_Production_Item_Get_Coords_Logic_5b1c(this_ptr_00,out_x,out_y);
  return;
}



// Retrieves the head pointer of one of the simulator's 8 specialized world-tracking
// entity lists.

void * __stdcall16far
Simulator_Get_World_List_Head_e1bc(void *this_ptr,u16 arg2,uint list_index)
{
  astruct_310 *paVar1;
  astruct_310 *iVar2;
  undefined2 uVar2;
  
  paVar1 = (astruct_310 *)
           *(undefined4 *)((int)(void *)this_ptr + (list_index >> 0x8) * 0x4 + 0xa);
  uVar2 = (undefined2)((ulong)paVar1 >> 0x10);
  iVar2 = (astruct_310 *)paVar1;
  return (void *)CONCAT22(iVar2->field11_0xc,(void *)iVar2->field10_0xa);
}
