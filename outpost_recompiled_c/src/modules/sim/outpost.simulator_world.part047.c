/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 47/56
 * Original lines (combined): 105902-106759
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Coordinates per-turn resource migration between specialized colony groups (Groups 4,
// 5, 6). Performs batch transfers (11b0) and triggers virtual cleanup for processed
// entity collections.

void __stdcall16far
Simulator_Process_Turn_Resource_Migration_Logic_1220(u32 arg1,void *colony_ptr)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  u32 *src_list;
  undefined4 *puVar3;
  int iVar4;
  undefined2 reg_dx;
  u32 *dest_list;
  undefined2 uVar5;
  u32 *puVar6;
  undefined2 extraout_DX;
  long lVar7;
  undefined4 uStack_e;
  undefined4 uStack_a;
  
  src_list = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
  dest_list = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                        (colony_ptr,src_list,reg_dx);
  uStack_a = (u32 *)CONCAT22(dest_list,src_list);
  puVar1 = (undefined2 *)((int)*uStack_a + 0x10);
  lVar7 = (*(code *)*puVar1)(0x1008,src_list,dest_list);
  uVar5 = (undefined2)((ulong)lVar7 >> 0x10);
  if ((lVar7 != 0x0) || (false))
  {
    puVar3 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    puVar6 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                       (colony_ptr,puVar3,uVar5);
    uStack_e = (undefined4 *)CONCAT22(puVar6,puVar3);
    puVar2 = (undefined2 *)*uStack_e;
    puVar1 = (undefined2 *)puVar2 + 0x8;
    lVar7 = (*(code *)*puVar1)(0x1008,puVar3,puVar6);
    uVar5 = (undefined2)((ulong)lVar7 >> 0x10);
    if (((lVar7 != 0x0) || (false)) &&
       (iVar4 = Simulator_Batch_Process_List_to_List_Transfer_11b0
                          (arg1,src_list,dest_list), iVar4 == 0x0))
    {
      if (uStack_e == NULL)
      {
        return;
      }
      puVar1 = (undefined2 *)puVar2;
      (*(code *)*puVar1)(0x1008,puVar3,puVar6,0x1);
      return;
    }
    if (uStack_e != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_e)(0x1008,puVar3,puVar6,0x1);
      uVar5 = extraout_DX;
    }
    puVar3 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    puVar6 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                       (colony_ptr,puVar3,uVar5);
    uStack_e = (undefined4 *)CONCAT22(puVar6,puVar3);
    puVar1 = (undefined2 *)((int)*uStack_e + 0x10);
    lVar7 = (*(code *)*puVar1)(0x1008,puVar3,puVar6);
    if ((lVar7 != 0x0) || (false))
    {
      Simulator_Batch_Process_List_to_List_Transfer_11b0(arg1,src_list,dest_list);
    }
    if (uStack_e != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_e)(0x1008,puVar3,puVar6,0x1);
    }
  }
  if (uStack_a != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_a)(0x1008,src_list,dest_list,0x1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through the simulator's entity list to find the next active construction
// site with remaining capacity. Returns the entity object and its current deficit.

void * __stdcall16far
Simulator_World_Iterator_Find_Next_Active_Site_134a
          (u16 arg1,u16 arg2,void *out_deficit,void *out_index,void *iterator_ptr)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  u8 *packed_id;
  int iVar3;
  undefined2 unaff_CS;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uStack_6;
  
  puVar2 = (undefined2 *)((int)*(undefined4 *)iterator_ptr + 0x10);
  pvVar6 = iterator_ptr;
  uStack_6 = (*(code *)*puVar2)();
  *(undefined4 *)out_deficit = 0x0;
  do
  {
    if (uStack_6 <= *(ulong *)out_index)
    {
      return NULL;
    }
    uVar1 = *(undefined4 *)out_index;
    *(long *)out_index = *(long *)out_index + 0x1;
    puVar2 = (undefined2 *)((int)*(undefined4 *)iterator_ptr + 0x4);
    packed_id = (u8 *)(*(code *)*puVar2)(unaff_CS,iterator_ptr,uVar1,pvVar6);
    pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar4);
    unaff_CS = 0x1028;
    pvVar5 = UI_Construction_Item_Calculate_Capacity_Remaining_45e2(pvVar4);
    iVar3 = (int)((ulong)pvVar5 >> 0x10);
    *(void **)out_deficit = (void *)pvVar5;
    *(int *)((int)(void *)out_deficit + 0x2) = iVar3;
  } while (iVar3 == 0x0 && *(int *)out_deficit == 0x0);
  return pvVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through the simulator's entity list to find the next site with a pending
// resource requirement. Returns the entity and its deficit.

void * __stdcall16far
Simulator_World_Iterator_Find_Next_Pending_Site_13da
          (u16 arg1,u16 arg2,void *out_deficit,void *out_index,void *iterator_ptr)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  u8 *packed_id;
  int iVar3;
  undefined2 unaff_CS;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uStack_6;
  
  puVar2 = (undefined2 *)((int)*(undefined4 *)iterator_ptr + 0x10);
  pvVar6 = iterator_ptr;
  uStack_6 = (*(code *)*puVar2)();
  *(undefined4 *)out_deficit = 0x0;
  while( true )
  {
    if (uStack_6 <= *(ulong *)out_index)
    {
      return NULL;
    }
    uVar1 = *(undefined4 *)out_index;
    *(long *)out_index = *(long *)out_index + 0x1;
    puVar2 = (undefined2 *)((int)*(undefined4 *)iterator_ptr + 0x4);
    packed_id = (u8 *)(*(code *)*puVar2)(unaff_CS,iterator_ptr,uVar1,pvVar6);
    pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    if ((pvVar4 == NULL) ||
       (pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar4), pvVar4 == NULL)
       ) break;
    unaff_CS = 0x1028;
    pvVar5 = UI_Construction_Item_Calculate_Remaining_Value_3c32(pvVar4);
    iVar3 = (int)((ulong)pvVar5 >> 0x10);
    *(void **)out_deficit = (void *)pvVar5;
    *(int *)((int)(void *)out_deficit + 0x2) = iVar3;
    if (iVar3 != 0x0 || *(int *)out_deficit != 0x0)
    {
      return pvVar4;
    }
  }
  return NULL;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Extremely complex routine managing the construction supply chain. Identifies sites in
// need (134a), finds supply sources (Group 3), calculates affordable transfers, and
// spawns new resource-tracking items to fulfill construction demands across the colony.

void __stdcall16far
Simulator_Process_Construction_Supply_Chain_Logic_1482
          (void *arg1,void *arg2,void *iterator_ptr)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  void *pvVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 unaff_SS;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  u16 arg1_00;
  u16 arg2_00;
  void *pvVar11;
  undefined4 uStack_4a;
  undefined4 local_46;
  int local_42 [0x4];
  uint uStack_3a;
  uint uStack_38;
  undefined4 uStack_36;
  void *pvStack_32;
  void *pvStack_2e;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  u8 *puStack_26;
  undefined2 uStack_24;
  undefined4 uStack_22;
  int iStack_1e;
  int iStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  ulong uStack_16;
  undefined4 uStack_12;
  undefined4 uStack_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_6 = 0x0;
  local_a = 0x0;
  arg1_00 = (u16)arg1;
  arg2_00 = (u16)((ulong)arg1 >> 0x10);
  uStack_e = Simulator_World_Iterator_Find_Next_Active_Site_134a
                       (arg1_00,arg2_00,(undefined4 *)CONCAT22(unaff_SS,&local_a),
                        (undefined4 *)CONCAT22(unaff_SS,&local_6),iterator_ptr);
  uVar5 = (undefined2)((ulong)uStack_e >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x10);
  pvVar11 = arg2;
  uVar2 = (*(code *)*puVar1)();
  uStack_12 = CONCAT22(uVar5,uVar2);
  uStack_16 = 0x0;
  do
  {
    if (uStack_12 <= uStack_16)
    {
      return;
    }
    if (uStack_e._2_2_ == 0x0 && (int)uStack_e == 0x0)
    {
      return;
    }
    pvVar9 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(uStack_e);
    uStack_18 = (undefined2)((ulong)pvVar9 >> 0x10);
    uStack_1a = SUB42(pvVar9,0x0);
    uVar10 = Colony_Count_Under_Construction_Entities_1a30(arg1_00,arg2_00,pvVar9);
    iStack_1c = (int)(uVar10 >> 0x10);
    iStack_1e = (int)uVar10;
    if (iStack_1c != 0x0 || iStack_1e != 0x0)
    {
      uVar2 = (undefined2)((qword)uVar10 * 0x64 >> 0x20);
      uStack_22 = (ulong)((qword)uVar10 * 0x64) >> 0x1;
      puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x4);
      puStack_26 = (u8 *)(*(code *)*puVar1)(0x1028,arg2,(int)uStack_16,
                                            (int)(uStack_16 >> 0x10),pvVar11);
      uStack_24 = uVar2;
      pvVar9 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,puStack_26);
      uStack_28 = (undefined2)((ulong)pvVar9 >> 0x10);
      uStack_2a = SUB42(pvVar9,0x0);
      pvStack_2e = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar9);
      pvStack_32 = (void *)*(undefined4 *)((int)pvStack_2e + 0x28);
      uStack_36 = NULL;
      uStack_38 = *(uint *)((int)pvStack_32 + 0x4);
      for (uStack_3a = 0x0; uStack_3a < uStack_38; uStack_3a += 0x1)
      {
        UI_Item_List_Get_Item_at_Index_Logic
                  (pvStack_32,(undefined4 *)CONCAT22(unaff_SS,&local_46),
                   (int *)CONCAT22(unaff_SS,local_42),uStack_3a);
        if (((local_46 != 0x0) && (0xd < local_42[0x0])) && (local_42[0x0] < 0x1d))
        {
          uVar10 = local_46;
          uVar6 = local_46._2_2_;
          if (uStack_22 < local_46)
          {
            uVar10 = uStack_22 & 0xffff;
            uVar6 = uStack_22._2_2_;
          }
          uVar3 = (uint)uVar10;
          if ((local_a._2_2_ <= uVar6) &&
             ((local_a._2_2_ < uVar6 || ((uint)local_a < uVar3))))
          {
            uVar3 = (uint)local_a;
            uVar6 = local_a._2_2_;
          }
          uStack_4a = CONCAT22(uVar6,uVar3);
          uStack_22 = CONCAT22((uStack_22._2_2_ - uVar6) -
                               (uint)((uint)uStack_22 < uVar3),(uint)uStack_22 - uVar3);
          local_a = CONCAT22((local_a._2_2_ - uVar6) - (uint)((uint)local_a < uVar3),
                             (uint)local_a - uVar3);
          if (uStack_36 == NULL)
          {
            uVar7 = uVar6;
            pvVar4 = allocate_memory(CONCAT22((int)pvVar11,0xa));
            if (uVar7 == 0x0 && pvVar4 == NULL)
            {
              pvVar4 = NULL;
              uVar2 = 0x0;
            }
            else
            {
              pvVar9 = UI_Item_List_ctor_init_logic
                                 ((void *)CONCAT22(uVar7,pvVar4),0x5,0x5);
              uVar2 = (undefined2)((ulong)pvVar9 >> 0x10);
              pvVar4 = (void *)pvVar9;
            }
            uStack_36 = (void *)CONCAT22(uVar2,pvVar4);
          }
          UI_Item_List_Set_Item_Value_Logic
                    ((int)uStack_36,(int)((ulong)uStack_36 >> 0x10),uVar3,uVar6,
                     local_42[0x0]);
          UI_Item_List_Set_Item_Value_Logic
                    ((int)pvStack_32,(int)((ulong)pvStack_32 >> 0x10),
                     local_46 - uStack_4a,local_42[0x0]);
          if (local_a == 0x0)
          {
            Simulator_Transfer_Resources_to_Construction_Manager_1b3a
                      (arg1_00,arg2_00,uStack_e,uStack_36);
            uStack_36 = NULL;
            uStack_e = Simulator_World_Iterator_Find_Next_Active_Site_134a
                                 (arg1_00,arg2_00,
                                  (undefined4 *)CONCAT22(unaff_SS,&local_a),
                                  (undefined4 *)CONCAT22(unaff_SS,&local_6),iterator_ptr
                                 );
            if ((int)((ulong)uStack_e >> 0x10) != 0x0 || (int)uStack_e != 0x0)
            {
              uVar2 = 0x64;
              uVar5 = 0x0;
              pvVar9 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(uStack_e);
              uStack_18 = (undefined2)((ulong)pvVar9 >> 0x10);
              uStack_1a = SUB42(pvVar9,0x0);
              lVar8 = Colony_Count_Under_Construction_Entities_1a30
                                (arg1_00,arg2_00,pvVar9);
              iStack_1c = (int)((ulong)lVar8 >> 0x10);
              iStack_1e = (int)lVar8;
              uStack_22 = (ulong)(lVar8 * CONCAT22(uVar5,uVar2)) >> 0x1;
            }
          }
          if ((uStack_22 == 0x0) || (local_a == 0x0)) break;
        }
      }
      if (uStack_36 != NULL)
      {
        Simulator_Transfer_Resources_to_Construction_Manager_1b3a
                  (arg1_00,arg2_00,uStack_e,uStack_36);
        uStack_36 = NULL;
      }
    }
    uStack_16 += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Complex routine managing colony-wide maintenance. Identifies buildings with pending
// maintenance (13da), finds sources, calculates transfers, and updates internal
// resource lists to ensure buildings remain operational.

void __stdcall16far
Simulator_Process_Colony_Maintenance_Supply_Logic_16f2
          (void *arg1,void *arg2,void *iterator_ptr)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  u8 *packed_id;
  u16 uVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  void *pvVar9;
  void *this_ptr;
  long lVar10;
  void *arg1_00;
  u16 arg2_00;
  void *pvVar11;
  undefined4 uStack_44;
  u16 uStack_38;
  u16 uStack_34;
  void *pvStack_32;
  int iStack_2e;
  undefined4 uStack_2a;
  ulong uStack_16;
  undefined4 uStack_12;
  void *pvStack_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_6 = 0x0;
  local_a = NULL;
  arg1_00 = (void *)arg1;
  arg2_00 = (u16)((ulong)arg1 >> 0x10);
  pvStack_e = Simulator_World_Iterator_Find_Next_Pending_Site_13da
                        ((u16)arg1_00,arg2_00,(undefined4 *)CONCAT22(unaff_SS,&local_a),
                         (undefined4 *)CONCAT22(unaff_SS,&local_6),iterator_ptr);
  uVar7 = (uint)((ulong)pvStack_e >> 0x10) | (uint)(void *)pvStack_e;
  if (uVar7 != 0x0)
  {
    puVar2 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x10);
    pvVar11 = arg2;
    uVar3 = (*(code *)*puVar2)();
    uStack_12 = CONCAT22(uVar7,uVar3);
    for (uStack_16 = 0x0; uStack_16 < uStack_12; uStack_16 += 0x1)
    {
      puVar2 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x4);
      packed_id = (u8 *)(*(code *)*puVar2)(unaff_CS,arg2,(int)uStack_16,
                                           (int)(uStack_16 >> 0x10),pvVar11);
      pvVar9 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,packed_id);
      uVar3 = (undefined2)((ulong)pvVar9 >> 0x10);
      unaff_CS = 0x1030;
      this_ptr = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar9);
      lVar10 = Colony_Count_Under_Construction_Entities_1a30
                         ((u16)arg1_00,arg2_00,pvVar9);
      if ((int)((ulong)lVar10 >> 0x10) != 0x0 || (int)lVar10 != 0x0)
      {
        uStack_2a = (void *)((ulong)(lVar10 * 0x64) >> 0x1);
        uVar1 = *(undefined4 *)((int)(void *)pvVar9 + 0x22);
        iStack_2e = (int)uVar1;
        if (*(int *)((int)(void *)pvVar9 + 0x24) != 0x0 || iStack_2e != 0x0)
        {
          pvStack_32 = NULL;
          uVar4 = UI_Build_Item_Get_and_Refresh_State_20_Logic_0d80(this_ptr);
          uStack_38 = 0x0;
          uStack_34 = uVar4;
          while( true )
          {
            uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
            pvVar9 = UI_Item_List_Find_Item_FarPtr_Logic(iStack_2e,uVar3,uStack_34);
            uVar7 = (uint)((ulong)pvVar9 >> 0x10);
            pvVar5 = (void *)pvVar9;
            if (uVar7 != 0x0 || pvVar5 != NULL)
            {
              if ((uStack_2a._2_2_ <= uVar7) &&
                 ((uStack_2a._2_2_ < uVar7 || ((void *)uStack_2a < pvVar5))))
              {
                pvVar5 = (void *)uStack_2a;
                uVar7 = uStack_2a._2_2_;
              }
              if ((local_a._2_2_ <= uVar7) &&
                 ((local_a._2_2_ < uVar7 || ((void *)local_a < pvVar5))))
              {
                pvVar5 = (void *)local_a;
                uVar7 = local_a._2_2_;
              }
              uStack_44 = (void *)CONCAT22(uVar7,pvVar5);
              uStack_2a = (void *)CONCAT22((uStack_2a._2_2_ - uVar7) -
                                           (uint)((void *)uStack_2a < pvVar5),
                                           (void *)((int)(void *)uStack_2a - (int)pvVar5
                                                   ));
              local_a = (void *)CONCAT22((local_a._2_2_ - uVar7) -
                                         (uint)((void *)local_a < pvVar5),
                                         (void *)((int)(void *)local_a - (int)pvVar5));
              if (pvStack_32 == NULL)
              {
                uVar8 = uVar7;
                pvVar6 = allocate_memory(CONCAT22((void *)pvVar11,0xa));
                if (uVar8 == 0x0 && pvVar6 == NULL)
                {
                  pvStack_32 = NULL;
                }
                else
                {
                  pvStack_32 = UI_Item_List_ctor_init_logic
                                         ((void *)CONCAT22(uVar8,pvVar6),0x5,0x5);
                }
              }
              UI_Item_List_Set_Item_Value_Logic
                        ((void *)pvStack_32,(int)((ulong)pvStack_32 >> 0x10),pvVar5,
                         uVar7,uStack_34);
              UI_Item_List_Set_Item_Value_Logic
                        (iStack_2e,uVar3,(long)pvVar9 - (long)uStack_44,uStack_34);
              uStack_38 = uStack_34;
              if (local_a == NULL)
              {
                Simulator_Execute_Move_Base_Command_Logic_1ac6
                          ((u16)arg1_00,arg2_00,pvStack_e,pvStack_32);
                pvStack_32 = NULL;
                pvStack_e = Simulator_World_Iterator_Find_Next_Pending_Site_13da
                                      ((u16)arg1_00,arg2_00,
                                       (undefined4 *)CONCAT22(unaff_SS,&local_a),
                                       (undefined4 *)CONCAT22(unaff_SS,&local_6),
                                       iterator_ptr);
                if ((int)((ulong)pvStack_e >> 0x10) == 0x0 && (void *)pvStack_e == NULL)
                {
                  return;
                }
              }
            }
            unaff_CS = 0x1020;
            if ((uStack_2a == NULL) || (local_a == NULL)) break;
            unaff_CS = 0x1028;
            uStack_34 = UI_Build_Item_Get_and_Refresh_State_20_Logic_0d80(this_ptr);
            if ((uStack_34 == uStack_38) || ((uStack_38 == 0x0 && (uStack_34 == uVar4)))
               ) break;
          }
          if (pvStack_32 != NULL)
          {
            Simulator_Execute_Move_Base_Command_Logic_1ac6
                      ((u16)arg1_00,arg2_00,pvStack_e,pvStack_32);
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Orchestrates the construction supply chain for mining operations (Group 3). Resolves
// mining entities and triggers the primary supply chain logic (1482).

void __stdcall16far
Simulator_Process_Mining_Supply_Chain_Logic_1940(void *arg1,void *arg2,void *colony_ptr)
{
  undefined2 reg_dx;
  void *puVar4;
  long lVar1;
  undefined4 uStack_a;
  void *puVar1;
  
  puVar4._0_2_ = get_array_element_6bytes
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar4._2_2_ = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                           (colony_ptr,(void *)puVar4,reg_dx);
  uStack_a = (undefined4 *)CONCAT22(puVar4._2_2_,(void *)puVar4);
  puVar1 = (void *)((int)*uStack_a + 0x10);
  lVar1 = (**(code **)puVar1)(0x1008,(void *)puVar4,puVar4._2_2_);
  if (lVar1 != 0x0)
  {
    Simulator_Process_Construction_Supply_Chain_Logic_1482(arg1,arg2,uStack_a);
  }
  if (uStack_a != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_a)
              (0x1008,(void *)puVar4,puVar4._2_2_,0x1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Manages maintenance logistics between mines (Group 2) and smelters. Logs debug
// warnings if no mines are found. Triggers the maintenance supply logic (16f2).

void __stdcall16far
Simulator_Process_Mine_to_Smelter_Maintenance_Logic_19a0
          (void *arg1,void *arg2,void *colony_ptr)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined2 reg_dx;
  u32 *puVar4;
  long lVar5;
  undefined4 uStack_a;
  
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar4 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     (colony_ptr,puVar3,reg_dx);
  uStack_a = (undefined4 *)CONCAT22(puVar4,puVar3);
  puVar2 = (undefined2 *)*uStack_a;
  puVar1 = (undefined2 *)puVar2 + 0x8;
  lVar5 = (*(code *)*puVar1)(0x1008,puVar3,puVar4);
  if (lVar5 == 0x0)
  {
    Simulator_Log_Debug_Message_to_File_840a(0x59df,0x1050);
    if (uStack_a != NULL)
    {
      puVar1 = (undefined2 *)puVar2;
      (*(code *)*puVar1)(0x1030,puVar3,puVar4,0x1);
      return;
    }
  }
  else
  {
    Simulator_Process_Colony_Maintenance_Supply_Logic_16f2(arg1,uStack_a,arg2);
    if (uStack_a != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_a)(0x1008,puVar3,puVar4,0x1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through a managed collection and returns the count of entities currently in
// the 'Under Construction' state (type 4).

long __stdcall16far
Colony_Count_Under_Construction_Entities_1a30(u16 arg1,u16 arg2,void *collection_ptr)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  u8 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uStack_12;
  long lStack_e;
  ulong uStack_a;
  undefined4 *puStack_6;
  
  uVar3 = (undefined2)((ulong)collection_ptr >> 0x10);
  puVar1 = (undefined4 *)*(undefined4 *)((int)collection_ptr + 0x1e);
  iVar7 = *(int *)((int)collection_ptr + 0x20);
  puStack_6 = (undefined4 *)puVar1;
  if (iVar7 == 0x0 && puStack_6 == NULL)
  {
    return 0x0;
  }
  puVar2 = (undefined2 *)((int)*puVar1 + 0x10);
  puVar6 = puStack_6;
  uStack_a = (*(code *)*puVar2)();
  lStack_e = 0x0;
  for (uStack_12 = 0x0; uStack_12 < uStack_a; uStack_12 += 0x1)
  {
    puVar2 = (undefined2 *)((int)*puVar1 + 0x4);
    puVar4 = (u8 *)(*(code *)*puVar2)(unaff_CS,puStack_6,(int)((ulong)puVar1 >> 0x10),
                                      uStack_12,puVar6,iVar7);
    if (puVar4 != NULL)
    {
      unaff_CS = 0x1028;
      pvVar5 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)puVar4);
      if (*(int *)((int)pvVar5 + 0xc) == 0x4)
      {
        lStack_e += 0x1;
      }
    }
  }
  return lStack_e;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Orchestrates the movement of a base unit. Instantiates a MoveBas command and
// processes it as a Type 3 build event.

void __stdcall16far
Simulator_Execute_Move_Base_Command_Logic_1ac6
          (u16 arg1,u16 arg2,void *this_ptr,void *arg4)
{
  undefined2 unaff_SS;
  undefined1 local_118 [0x112];
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  Simulator_Command_MoveBas_ctor_init_e8a0
            (local_118,unaff_SS,arg4,*(undefined2 *)((int)(void *)this_ptr + 0xc),
             *(undefined4 *)((int)(void *)pvStack_6 + 0x4));
  UI_Build_Item_Process_Event_Type3_Logic_d52c
            ((void *)*_p_SimulatorGlobalState,*_p_SimulatorWorldContext + 0x1,
             (undefined1 *)CONCAT22(unaff_SS,local_118));
  return;
}



// A scalar deleting destructor for a base object.

undefined2 * __stdcall16far
Base_Object_dtor_Scalar_Deleting_1c02(undefined2 *param_1,byte param_2)
{
  *param_1 = (char *)s_1_1050_389a;
  ((undefined2 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((undefined2 *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through entities in a collection and dispatches per-turn resource
// consumption logic. Depending on entity type (Workers, Scientists, etc.), calls
// specialized consumption routines (201A, 2306, 24E8, 26EE).

void __stdcall16far
Simulator_Process_Turn_Consumption_Dispatcher_1c3e(u32 arg1,u32 collection_ptr)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_CS;
  u8 *puVar8;
  void *this_ptr;
  void *pvVar9;
  u16 arg1_00;
  u16 arg2;
  undefined4 *puVar10;
  ulong uStack_e;
  ulong uStack_a;
  
  uVar7 = (undefined2)(collection_ptr >> 0x10);
  puVar1 = (undefined4 *)*(undefined4 *)((int)collection_ptr + 0xc);
  uVar7 = *(undefined2 *)((int)collection_ptr + 0xe);
  puVar2 = (undefined2 *)((int)*puVar1 + 0x10);
  puVar10 = (undefined4 *)puVar1;
  uStack_a = (*(code *)*puVar2)();
  uStack_e = 0x0;
  do
  {
    if (uStack_a <= uStack_e)
    {
      return;
    }
    puVar2 = (undefined2 *)((int)*puVar1 + 0x4);
    puVar8 = (u8 *)(*(code *)*puVar2)(unaff_CS,(undefined4 *)puVar1,
                                      (int)((ulong)puVar1 >> 0x10),uStack_e,puVar10,
                                      uVar7);
    if (puVar8 != NULL)
    {
      unaff_CS = 0x1028;
      this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)puVar8);
      uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
      if ((*(int *)((int)(void *)this_ptr + 0x34) != 0x0) &&
         (*(long *)((int)(void *)this_ptr + 0x36) != 0x0))
      {
        arg1_00 = (u16)arg1;
        arg2 = (u16)(arg1 >> 0x10);
        bVar3 = Simulator_Process_Population_Category_Consumption_201a
                          (arg1_00,arg2,this_ptr);
        if ((int)CONCAT31(extraout_var,bVar3) == 0x0)
        {
          pvVar9 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
          iVar5 = *(int *)((int)(void *)pvVar9 + 0xc);
          unaff_CS = 0x1008;
          iVar4 = search_array_for_value
                            ((int *)_p_StringPropertyTable,
                             (int)((ulong)_p_StringPropertyTable >> 0x10),iVar5);
          if (iVar4 == 0x0)
          {
            unaff_CS = 0x1008;
            iVar4 = search_array_for_value
                              ((int *)_p_StringPropertyTable,
                               (int)((ulong)_p_StringPropertyTable >> 0x10),iVar5);
            if (iVar4 == 0x0)
            {
              iVar4 = search_array_for_value
                                ((int *)_p_StringPropertyTable,
                                 (int)((ulong)_p_StringPropertyTable >> 0x10),iVar5);
              if (iVar4 == 0x0)
              {
                unaff_CS = 0x1008;
                iVar5 = search_array_for_value
                                  ((int *)_p_StringPropertyTable,
                                   (int)((ulong)_p_StringPropertyTable >> 0x10),iVar5);
                if (iVar5 == 0x0) goto LAB_1038_1c76;
              }
              unaff_CS = 0x1008;
              Simulator_Process_Maintenance_Category_Consumption_2306
                        (arg1_00,arg2,this_ptr);
            }
            else
            {
              Colony_Process_Component_Turn_Production_Logic_26ee(arg1_00,arg2,this_ptr)
              ;
            }
          }
          else
          {
            Simulator_Process_Entity_Resource_Drain_Logic_24e8(arg1_00,arg2,this_ptr);
          }
        }
      }
    }
LAB_1038_1c76:
    uStack_e += 0x1;
  } while( true );
}
