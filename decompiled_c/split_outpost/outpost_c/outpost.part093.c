/*
 * Source: outpost.c
 * Chunk: 93/117
 * Original lines: 106034-107132
 * Boundaries: top-level declarations/definitions only
 */




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
  undefined2 in_DX;
  void *puVar4;
  long lVar1;
  undefined4 uStack_a;
  void *puVar1;
  
  puVar4._0_2_ = get_array_element_6bytes
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar4._2_2_ = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                           (colony_ptr,(void *)puVar4,in_DX);
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
  undefined2 in_DX;
  u32 *puVar4;
  long lVar5;
  undefined4 uStack_a;
  
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar4 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     (colony_ptr,puVar3,in_DX);
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



// Transfers resource values from a source list to a construction manager's target list
// (group 0x22), considering remaining capacity.

void __stdcall16far
Simulator_Transfer_Resources_to_Construction_Manager_1b3a
          (u16 arg1,u16 arg2,void *manager_ptr,void *src_list)
{
  undefined2 unaff_SS;
  void *local_1a;
  undefined2 local_16 [0x2];
  uint uStack_12;
  uint uStack_10;
  undefined4 uStack_e;
  void *pvStack_a;
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(manager_ptr);
  pvStack_a = manager_ptr;
  uStack_e = UI_Construction_Item_Calculate_Capacity_Remaining_45e2(manager_ptr);
  uStack_10 = *(uint *)((int)(void *)src_list + 0x4);
  for (uStack_12 = 0x0; uStack_12 < uStack_10; uStack_12 += 0x1)
  {
    UI_Item_List_Get_Item_at_Index_Logic
              (src_list,(void **)CONCAT22(unaff_SS,&local_1a),
               (undefined2 *)CONCAT22(unaff_SS,local_16),uStack_12);
    if (uStack_e < local_1a)
    {
      UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                (pvStack_6,(void *)uStack_e,uStack_e._2_2_,local_16[0x0]);
      uStack_e = NULL;
    }
    else
    {
      uStack_e = (void *)((long)uStack_e - (long)local_1a);
      UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                (pvStack_6,(void *)local_1a,(int)((ulong)local_1a >> 0x10),local_16[0x0]
                );
    }
    if (uStack_e == NULL) break;
  }
  if (src_list != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic(src_list);
    free_if_not_null((void *)src_list);
  }
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Batch processes efficiency loss for entities in a collection. Calculates remaining
// efficiency and spawns resource-loss items (vtable 0x56CE) to reflect the impact on
// colony stockpiles.

u16 __stdcall16far
Simulator_Process_Entity_Batch_Efficiency_Loss_1d68
          (u16 arg1,u16 arg2,u32 *src_list,u32 dest_list)
{
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  qword qVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong in_EDX;
  undefined2 uVar15;
  undefined2 unaff_CS;
  long lVar16;
  void *pvVar17;
  undefined2 in_stack_0000000a;
  u32 *puVar18;
  undefined2 uVar19;
  undefined4 uStack_5a;
  undefined2 *puStack_52;
  uint uStack_4e;
  undefined1 local_30 [0x4];
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined1 local_20 [0x4];
  undefined4 *puStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  u8 *puStack_14;
  uint uStack_12;
  ulong uStack_10;
  undefined4 uStack_c;
  u16 uStack_8;
  undefined4 uStack_6;
  
  uStack_6 = (void *)0x64;
  uStack_8 = 0x0;
  puVar3 = (undefined2 *)((int)*_src_list + 0x10);
  puVar18 = src_list;
  uVar19 = in_stack_0000000a;
  uVar8 = (*(code *)*puVar3)();
  uStack_c = CONCAT22((int)in_EDX,uVar8);
  uStack_10 = 0x0;
  do
  {
    if (uStack_c <= uStack_10)
    {
      return uStack_8;
    }
    puVar3 = (undefined2 *)((int)*_src_list + 0x4);
    uVar13 = (uint)in_EDX;
    puStack_14 = (u8 *)(*(code *)*puVar3)(unaff_CS,src_list,in_stack_0000000a,uStack_10,
                                          puVar18,uVar19);
    uStack_12 = uVar13;
    in_EDX = (ulong)(uStack_12 | (uint)puStack_14);
    if ((uStack_12 | (uint)puStack_14) != 0x0)
    {
      pvVar17 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,puStack_14);
      uStack_16 = (undefined2)((ulong)pvVar17 >> 0x10);
      uStack_18 = SUB42(pvVar17,0x0);
      unaff_CS = 0x1030;
      puStack_1c = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar17);
      uVar13 = (uint)((ulong)puStack_1c >> 0x10);
      in_EDX = (ulong)uVar13;
      puVar3 = (undefined2 *)((int)*puStack_1c + 0x40);
      iVar10 = (*(code *)*puVar3)(0x1030,(undefined4 *)puStack_1c,uVar13,local_20);
      if (iVar10 == 0x0)
      {
        uStack_24 = UI_Build_Item_Calculate_Efficiency_Remaining_Logic(puStack_1c);
        uStack_8 = 0x1;
        puStack_28 = (undefined4 *)*(long *)((int)dest_list + 0x22);
        init_long_pair(local_30,(long)puStack_28);
        while( true )
        {
          unaff_CS = 0x1008;
          lVar16 = get_next_list_item(local_30);
          uVar12 = (uint)((ulong)lVar16 >> 0x10);
          uVar13 = (uint)lVar16;
          in_EDX = (ulong)(uVar12 | uVar13);
          if ((uVar12 | uVar13) == 0x0) break;
          uVar8 = *(undefined2 *)(uVar13 + 0x4);
          iVar10 = *(int *)(uVar13 + 0x6);
          uVar1 = *(undefined2 *)(uVar13 + 0x8);
          uVar2 = *(uint *)(uVar13 + 0xa);
          uVar5 = *(uint *)(uVar13 + 0xc) / uVar2;
          bVar7 = false;
          if (((0x0 < iVar10) && (!SBORROW2(iVar10,0x1))) &&
             ((iVar10 == 0x5 || iVar10 + -0x1 < 0x4 || (iVar10 == 0x8))))
          {
            bVar7 = true;
          }
          if (bVar7)
          {
            pvVar17 = uStack_24;
            uVar6 = uStack_24._2_2_;
            if (uStack_6 < uStack_24)
            {
              pvVar17 = (void *)((ulong)uStack_6 & 0xffff);
              uVar6 = uStack_6._2_2_;
            }
            uVar9 = (uint)pvVar17;
            in_EDX = (ulong)(uVar6 | uVar9);
            if ((uVar6 | uVar9) == 0x0) break;
            qVar4 = (qword)CONCAT22(uVar6,uVar9) / (qword)uVar5;
            iVar14 = (int)(qVar4 >> 0x10);
            uStack_4e = (uint)qVar4;
            if (uStack_4e < uVar2)
            {
              *(int *)(uVar13 + 0xc) = *(int *)(uVar13 + 0xc) - uVar9;
              *(int *)(uVar13 + 0xa) = *(int *)(uVar13 + 0xa) - uStack_4e;
            }
            else
            {
              puVar3 = (undefined2 *)((int)*puStack_28 + 0xc);
              (*(code *)*puVar3)(0x1008,(undefined4 *)puStack_28,
                                 (int)((ulong)puStack_28 >> 0x10),lVar16);
              uStack_2c = 0x0;
              uStack_4e = uVar2;
            }
            puVar11 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
            uStack_5a = (undefined2 *)CONCAT22(iVar14,puVar11);
            if (iVar14 == 0x0 && puVar11 == NULL)
            {
              puStack_52 = NULL;
            }
            else
            {
              *uStack_5a = (char *)s_1_1050_389a;
              puVar11[0x1] = 0x1008;
              puVar11[0x2] = 0x0;
              puVar11[0x3] = 0x0;
              puVar11[0x4] = 0x0;
              puVar11[0x5] = 0x0;
              puVar11[0x6] = 0x0;
              *uStack_5a = 0x56ce;
              puVar11[0x1] = 0x1018;
              puStack_52 = uStack_5a;
            }
            uVar15 = (undefined2)((ulong)puStack_52 >> 0x10);
            puVar11 = (undefined2 *)puStack_52;
            puVar11[0x5] = uStack_4e;
            puVar11[0x6] = uStack_4e * uVar5;
            puVar11[0x2] = uVar8;
            puVar11[0x3] = iVar10;
            puVar11[0x4] = uVar1;
            UI_Item_List_Upsert_Item_by_Metadata_Logic_6408(puStack_1c,puStack_52);
          }
        }
      }
      else
      {
        puVar3 = (undefined2 *)((int)*_src_list + 0x8);
        (*(code *)*puVar3)(0x1030,src_list,in_stack_0000000a,0x0,uStack_10);
      }
    }
    uStack_10 += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes efficiency loss for a batch of entities by iterating through a collection.

undefined2 __stdcall16far
Simulator_Process_Batch_Efficiency_Loss_1faa
          (undefined4 param_1,u32 *param_2,undefined2 param_3,undefined4 *param_4)
{
  undefined2 *puVar1;
  u8 *packed_id;
  u16 uVar2;
  void *pvVar3;
  ulong local_a;
  ulong local_6;
  
  puVar1 = (undefined2 *)((int)*param_4 + 0x10);
  local_6 = (*(code *)*puVar1)();
  local_a = 0x0;
  while( true )
  {
    if (local_6 <= local_a)
    {
      return 0x1;
    }
    puVar1 = (undefined2 *)((int)*param_4 + 0x4);
    packed_id = (u8 *)(*(code *)*puVar1)();
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
    uVar2 = Simulator_Process_Entity_Batch_Efficiency_Loss_1d68
                      ((u16)param_1,(u16)((ulong)param_1 >> 0x10),param_2,(u32)pvVar3);
    if (uVar2 == 0x0) break;
    local_a += 0x1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates and processes per-turn resource consumption for a population category.
// Pops resource items from the entity's list, deducts amounts from stockpiles, and
// spawns consumption records.

bool __stdcall16far
Simulator_Process_Population_Category_Consumption_201a(u16 arg1,u16 arg2,void *this_ptr)
{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  u16 *puVar7;
  u16 uVar8;
  ulong uVar9;
  void *pvVar10;
  uint uVar11;
  long lVar12;
  void *pvVar13;
  undefined2 unaff_SI;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined4 *puVar16;
  u16 *puVar17;
  undefined4 uStack_14;
  u16 uStack_a;
  
  uVar15 = 0x1030;
  puVar16 = UI_Component_Pop_Resource_SubObject_Logic_6b16(this_ptr);
  iVar3 = (int)((ulong)puVar16 >> 0x10);
  puVar5 = (undefined4 *)puVar16;
  if (iVar3 == 0x0 && puVar5 == NULL)
  {
    return false;
  }
  uVar14 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar13 = (void *)this_ptr;
  iVar1 = *(int *)((int)pvVar13 + 0x34);
  lVar12 = (long)iVar1;
  uVar2 = lVar12 * 0x64;
  uVar4 = (undefined2)(uVar2 >> 0x10);
  uStack_a = 0x0;
  uStack_14 = NULL;
  if (*(int *)(puVar5 + 0x1) == 0x0)
  {
    if (*(int *)((int)puVar5 + 0x6) == 0x0)
    {
      if (*(int *)(puVar5 + 0x2) == 0x0) goto LAB_1038_2102;
      uVar8 = Map_Entity_Type_to_Specific_ID_Helper_c42e(*(int *)(puVar5 + 0x2));
      uVar9 = (ulong)*(uint *)((int)puVar5 + 0xa) * (ulong)uVar8;
      uVar15 = (int)(uVar9 >> 0x10);
      if (uVar9 + lVar12 * -0x64 != 0x0 && (long)uVar2 <= (long)uVar9)
      {
        uVar9 = uVar2 & 0xffff;
        uVar15 = uVar4;
      }
      lVar12 = CONCAT22(uVar15,(int)uVar9);
      pvVar10 = (void *)(CONCAT22(uVar15,(int)uVar9) / (long)(ulong)uVar8);
      *(int *)((int)puVar5 + 0xa) = *(int *)((int)puVar5 + 0xa) - (int)(void *)pvVar10;
      uStack_a = (u16)(lVar12 / 0x64);
      lVar12 %= 0x64;
      if (lVar12 != 0x0)
      {
        uStack_a += 0x1;
      }
      pvVar6 = allocate_memory(CONCAT22(unaff_SI,0x2a));
      if ((int)lVar12 == 0x0 && pvVar6 == NULL) goto LAB_1038_20fa;
      puVar17 = Simulator_Resource_Change_Item_ctor_Flavor4_6838
                          ((void *)CONCAT22((int)lVar12,pvVar6),pvVar10,
                           *(u16 *)(puVar5 + 0x2),uStack_a,
                           (void *)*(undefined4 *)((int)pvVar13 + 0x4));
      uVar11 = (uint)((ulong)puVar17 >> 0x10);
      puVar7 = (u16 *)puVar17;
    }
    else
    {
      uVar8 = Map_Entity_Type_to_Grouping_ID_Logic_c3b4(*(u16 *)((int)puVar5 + 0x6));
      uVar9 = (ulong)*(uint *)((int)puVar5 + 0xa) * (ulong)uVar8;
      uVar15 = (int)(uVar9 >> 0x10);
      if (uVar9 + lVar12 * -0x64 != 0x0 && (long)uVar2 <= (long)uVar9)
      {
        uVar9 = uVar2 & 0xffff;
        uVar15 = uVar4;
      }
      lVar12 = CONCAT22(uVar15,(int)uVar9);
      pvVar10 = (void *)(CONCAT22(uVar15,(int)uVar9) / (long)(ulong)uVar8);
      *(int *)((int)puVar5 + 0xa) = *(int *)((int)puVar5 + 0xa) - (int)(void *)pvVar10;
      uStack_a = (u16)(lVar12 / 0x64);
      lVar12 %= 0x64;
      if (lVar12 != 0x0)
      {
        uStack_a += 0x1;
      }
      pvVar6 = allocate_memory(CONCAT22(unaff_SI,0x2a));
      uVar11 = (uint)lVar12 | (uint)pvVar6;
      if (uVar11 == 0x0) goto LAB_1038_20fa;
      puVar7 = Simulator_Resource_Change_Item_ctor_Flavor3_675c
                         ((void *)CONCAT22((uint)lVar12,pvVar6),pvVar10,
                          *(u16 *)((int)puVar5 + 0x6),uStack_a,
                          (void *)*(undefined4 *)((int)pvVar13 + 0x4));
    }
  }
  else
  {
    uVar11 = *(uint *)((int)puVar5 + 0xa);
    uVar9 = (ulong)uVar11;
    if (((long)uVar2 < 0x10000) &&
       ((0x7fffffff < uVar2 || (uVar9 = (ulong)uVar11, (uint)uVar2 < uVar11))))
    {
      uVar9 = uVar2;
    }
    *(int *)((int)puVar5 + 0xa) = *(int *)((int)puVar5 + 0xa) - (u16)uVar9;
    uStack_a = (u16)((long)uVar9 / 0x64);
    lVar12 = (long)uVar9 % 0x64;
    if (lVar12 != 0x0)
    {
      uStack_a += 0x1;
    }
    pvVar6 = allocate_memory(CONCAT22(unaff_SI,0x2a));
    uVar11 = (uint)lVar12 | (uint)pvVar6;
    if (uVar11 == 0x0)
    {
LAB_1038_20fa:
      uVar15 = 0x1000;
      uStack_14 = NULL;
      goto LAB_1038_2102;
    }
    puVar7 = Simulator_Resource_Change_Item_ctor_Flavor1_6590
                       ((void *)CONCAT22((uint)lVar12,pvVar6),(u16)uVar9,
                        (u16)(uVar9 >> 0x10),*(u16 *)(puVar5 + 0x1),uStack_a,
                        (void *)*(undefined4 *)((int)pvVar13 + 0x4));
  }
  uVar15 = 0x1000;
  uStack_14 = (u16 *)CONCAT22(uVar11,puVar7);
LAB_1038_2102:
  if (uStack_14 != NULL)
  {
    Simulator_Turn_Manager_Process_Tick_vcall_4_7a5a((u32 *)_p_SimulatorTurnManager);
    uVar15 = 0x1030;
    UI_Component_Set_Cap_Value_Logic_6c4c(this_ptr,iVar1 - uStack_a);
  }
  if (*(int *)((int)puVar5 + 0xa) == 0x0)
  {
    if (iVar3 != 0x0 || puVar5 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar16)(uVar15,puVar5,iVar3,0x1);
    }
  }
  else
  {
    UI_Component_Execute_Resource_Action_and_Notify_6c66(this_ptr,0x0,puVar5,iVar3);
  }
  return uStack_14 != NULL;
}
