/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 50/56
 * Original lines (combined): 109072-109917
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Highly complex per-turn routine. Propagates power and life-support status flags
// through the world map by scanning connected building sub-entities and triggering
// state transitions (BDAC) for buildings losing or gaining essential services.

void __stdcall16far
Colony_Process_Turn_Power_and_LifeSupport_Propagation_3fca(u32 param_1)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  u16 arg1;
  int iVar7;
  u16 arg2;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  u8 *puVar10;
  void *pvVar11;
  long lVar12;
  int *piVar13;
  undefined1 *puVar14;
  int iStack_26;
  int local_24;
  undefined1 local_22 [0x2];
  void *pvStack_20;
  undefined2 uStack_1e;
  undefined *puStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  ulong uStack_16;
  undefined4 uStack_12;
  void *pvStack_e;
  undefined *puStack_c;
  undefined4 uStack_a;
  ulong uStack_6;
  
  arg2 = (u16)(param_1 >> 0x10);
  arg1 = (u16)param_1;
  if (*(long *)(arg1 + 0xc) == 0x0)
  {
    uStack_6 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(arg1 + 0xc) + 0x10);
    uStack_6 = (*(code *)*puVar1)();
  }
  puVar5 = (undefined *)((uint)(uStack_6 >> 0x10) | (uint)uStack_6);
  if (puVar5 != NULL)
  {
    if (_g_AllocatedBlock_Offset == NULL)
    {
      puVar4 = init_memory_allocator();
    }
    else
    {
      puVar5 = g_AllocatedBlock_Segment;
      puVar4 = g_AllocatedBlock_Offset;
    }
    pvVar3 = alloc_with_hooks((ulong)(uint)((int)uStack_6 << 0x2),0x1,puVar4);
    uStack_a = (void *)CONCAT22(puVar5,pvVar3);
    if (_g_AllocatedBlock_Offset == NULL)
    {
      puVar4 = init_memory_allocator();
    }
    else
    {
      puVar5 = g_AllocatedBlock_Segment;
      puVar4 = g_AllocatedBlock_Offset;
    }
    uVar9 = 0x1000;
    pvStack_e = alloc_with_hooks((ulong)(uint)((int)uStack_6 << 0x2),0x1,puVar4);
    puStack_c = puVar5;
    for (uStack_16 = 0x0; uStack_16 < uStack_6; uStack_16 += 0x1)
    {
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(arg1 + 0xc) + 0x4);
      puVar10 = (u8 *)(*(code *)*puVar1)(uVar9,(int)*(undefined4 *)(arg1 + 0xc),
                                         (int)((ulong)*(undefined4 *)(arg1 + 0xc) >>
                                              0x10),(int)uStack_16,
                                         (int)(uStack_16 >> 0x10));
      uStack_12 = puVar10;
      if (puVar10 != NULL)
      {
        pvVar11 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,(u8 *)puVar10);
        uVar6 = (undefined2)((ulong)pvVar11 >> 0x10);
        iVar7 = (int)uStack_16 * 0x4;
        uVar8 = (undefined2)((ulong)uStack_a >> 0x10);
        pvVar3 = (void *)uStack_a;
        *(undefined2 *)(iVar7 + (int)pvVar3) = (void *)pvVar11;
        *(undefined2 *)((int)pvVar3 + iVar7 + 0x2) = uVar6;
        uVar9 = 0x1030;
        pvVar11 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8
                            ((void *)CONCAT22(uVar6,(void *)*(undefined2 *)
                                                             (iVar7 + (int)pvVar3)));
        *(undefined2 *)((int)pvStack_e + iVar7) = (void *)pvVar11;
        *(undefined2 *)((int)pvStack_e + iVar7 + 0x2) = (int)((ulong)pvVar11 >> 0x10);
      }
    }
    for (uStack_16 = 0x0; uStack_16 < uStack_6; uStack_16 += 0x1)
    {
      if ((*(long *)((int)uStack_16 * 0x4 + (int)pvStack_e) != 0x0) &&
         (uVar2 = *(undefined4 *)((int)uStack_16 * 0x4 + (int)pvStack_e),
         *(undefined2 *)((int)uVar2 + 0x1a) = 0x0,
         uVar2 = *(undefined4 *)((int)uStack_16 * 0x4 + (int)pvStack_e),
         *(int *)((int)uVar2 + 0x12) == 0x5))
      {
        UI_Build_Item_Transition_State_Logic_bdac
                  ((void *)*(undefined4 *)((int)uStack_16 * 0x4 + (int)pvStack_e),0x6);
      }
    }
    *(undefined2 *)(arg1 + 0x204) = 0x0;
    lVar12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    uStack_18 = (undefined2)((ulong)lVar12 >> 0x10);
    uStack_1a = (undefined2)lVar12;
    puStack_1c = g_ModeVersion_13AE;
    if (g_ModeVersion_13AE == (undefined *)0x1)
    {
      *(undefined2 *)(arg1 + 0x204) = 0x1;
    }
    Colony_Process_Entity_Flag_Propagation_Step3_5a96
              (arg1,arg2,uStack_6,(u32)CONCAT22(puStack_c,pvStack_e));
    Simulator_Map_Propagate_Entity_Flag_Logic_5cc6
              (param_1,uStack_6,(u32)CONCAT22(puStack_c,pvStack_e),(u32)uStack_a,0x0,0x2
              );
    Colony_Process_Entity_Flag_Propagation_Step4_5b3c
              (arg1,arg2,uStack_6,(void *)CONCAT22(puStack_c,pvStack_e));
    Simulator_Map_Propagate_Entity_Flag_Logic_5cc6
              (param_1,uStack_6,(u32)CONCAT22(puStack_c,pvStack_e),(u32)uStack_a,0x0,0x1
              );
    puVar14 = local_22;
    piVar13 = &local_24;
    uVar9 = unaff_SS;
    pvVar11 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,
                         (u8 *)(u8 *)*(undefined4 *)(arg1 + 0x8));
    uStack_1e = (undefined2)((ulong)pvVar11 >> 0x10);
    pvStack_20 = (void *)pvVar11;
    UI_Production_Item_Get_Coords_Logic_5b1c
              (pvVar11,(int *)CONCAT22(unaff_SS,piVar13),
               (undefined1 *)CONCAT22(uVar9,puVar14));
    for (iStack_26 = 0x1; iStack_26 <= local_24; iStack_26 += 0x1)
    {
      Colony_Process_Entity_Flag_Propagation_Step1_58e6
                (arg1,arg2,uStack_6,(u32)CONCAT22(puStack_c,pvStack_e),(u32)uStack_a,
                 iStack_26);
      Simulator_Map_Propagate_Entity_Flag_Logic_5cc6
                (param_1,uStack_6,(u32)CONCAT22(puStack_c,pvStack_e),(u32)uStack_a,
                 iStack_26,0x3);
    }
    Colony_Process_Entity_Flag_Propagation_Step2_5a16
              (arg1,arg2,uStack_6,(void *)CONCAT22(puStack_c,pvStack_e));
    for (uStack_16 = 0x0; uStack_16 < uStack_6; uStack_16 += 0x1)
    {
      if ((*(long *)((int)uStack_16 * 0x4 + (int)pvStack_e) != 0x0) &&
         (uVar2 = *(undefined4 *)((int)uStack_16 * 0x4 + (int)pvStack_e),
         *(int *)((int)uVar2 + 0x12) != 0x5))
      {
        uVar2 = *(undefined4 *)((int)uStack_16 * 0x4 + (int)pvStack_e);
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)
                        *(undefined4 *)((int)uStack_16 * 0x4 + (int)pvStack_e) + 0x28);
        (*(code *)*puVar1)(0x1030,(int)uVar2,(int)((ulong)uVar2 >> 0x10));
      }
    }
    free_if_not_null((void *)uStack_a);
    free_if_not_null(pvStack_e);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes a turn-step for population growth. Checks for presence of specialized
// research/growth buildings (Group 0x2D), and either resets growth factors or doubles
// them (326A) based on colony resource availability.

u32 __stdcall16far Colony_Process_Population_Growth_Turn_Step_42cc(void *this_ptr)
{
  undefined2 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 in_DX;
  u32 *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 *puVar9;
  long lVar10;
  void *pvVar11;
  ulong uStack_18;
  ulong uStack_12;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 uStack_a;
  
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar6 = (int)this_ptr;
  if (*(long *)(iVar6 + 0x1f6) == 0x0)
  {
    return 0x0;
  }
  uVar8 = 0x1008;
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar5 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e(this_ptr,puVar3,in_DX);
  uStack_a = (undefined4 *)CONCAT22(puVar5,puVar3);
  uStack_e = 0x0;
  uStack_c = 0x0;
  puVar1 = (undefined2 *)((int)*uStack_a + 0x10);
  uStack_12 = (*(code *)*puVar1)(0x1008,puVar3,puVar5);
  bVar2 = false;
  for (uStack_18 = 0x0; uStack_18 < uStack_12; uStack_18 += 0x1)
  {
    uVar8 = 0x1030;
    puVar9 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_a);
    if (puVar9 != NULL)
    {
      puVar1 = (undefined2 *)((int)*puVar9 + 0x50);
      iVar4 = (*(code *)*puVar1)();
      if (iVar4 != 0x0)
      {
        bVar2 = true;
      }
    }
  }
  if (bVar2)
  {
    *(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x1f6) + 0x1aa) = 0x0;
  }
  else
  {
    uVar8 = 0x1030;
    lVar10 = Colony_Calculate_Sum_All_Resources_38b8
                       ((int)*(undefined4 *)(iVar6 + 0x1f6),
                        (u16)((ulong)*(undefined4 *)(iVar6 + 0x1f6) >> 0x10));
    if ((int)((ulong)lVar10 >> 0x10) != 0x0 || (int)lVar10 != 0x0)
    {
      uVar8 = 0x1030;
      pvVar11 = Colony_Double_Growth_Factor_Logic_326a
                          ((void *)*(undefined4 *)(iVar6 + 0x1f6));
      uStack_c = (undefined2)((ulong)pvVar11 >> 0x10);
      uStack_e = SUB42(pvVar11,0x0);
    }
  }
  if (uStack_a != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_a)(uVar8,puVar3,puVar5,0x1);
  }
  return CONCAT22(uStack_c,uStack_e);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Decrements a specific population category count at offset 0x14E and removes the
// corresponding number of associated world entities from the simulator.

void __stdcall16far
Colony_Decrement_Population_Category_at_14E_Logic
          (uint16_t offset,uint16_t segment,uint amount,int category)
{
  uint uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  u16 uVar4;
  int iVar5;
  u32 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  u32 uVar10;
  void *this_ptr;
  ulong uStack_16;
  ulong uStack_12;
  undefined4 uStack_e;
  
  if (category == 0x5)
  {
    Simulator_Entity_Decrement_SubCounter_20E_4900((void *)CONCAT22(segment,offset));
    return;
  }
  uVar10 = Colony_Calc_Resource_Difference_at_14E_53ba
                     ((void *)CONCAT22(segment,offset),category);
  if (((int)(uVar10 >> 0x10) != 0x0) || ((int)uVar10 != 0x0))
  {
    iVar7 = category * 0x4;
    uVar1 = *(uint *)(offset + iVar7 + 0x14e);
    iVar5 = (int)amount >> 0xf;
    iVar8 = (*(int *)(offset + iVar7 + 0x150) - iVar5) - (uint)(uVar1 < amount);
    *(int *)(offset + iVar7 + 0x14e) = uVar1 - amount;
    *(int *)(offset + iVar7 + 0x150) = iVar8;
    if (iVar8 < 0x0)
    {
      *(undefined4 *)(offset + iVar7 + 0x14e) = 0x0;
    }
    uVar9 = 0x1008;
    puVar3 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    puVar6 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                       (offset,segment,puVar3,iVar5);
    uStack_e = (undefined4 *)CONCAT22(puVar6,puVar3);
    puVar2 = (undefined2 *)((int)*uStack_e + 0x10);
    uStack_12 = (*(code *)*puVar2)(0x1008,puVar3,puVar6);
    for (uStack_16 = 0x0; uStack_16 < uStack_12; uStack_16 += 0x1)
    {
      this_ptr = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_e);
      for (; amount != 0x0; amount -= 0x1)
      {
        uVar4 = UI_Build_Item_TypeD88E_Remove_SubItem_by_ID_cf78(this_ptr,category);
        if (uVar4 == 0x0) break;
      }
      uVar9 = 0x1030;
      if (amount == 0x0) break;
    }
    if (uStack_e != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_e)(uVar9,puVar3,puVar6,0x1);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Decrements a specific population category (param_4) by a specified amount (param_3).
// Updates internal colony tracking arrays and iteratively removes the corresponding
// sub-entities from the simulator map using TypeD88E management. Triggers exhaustive
// cleanup (4900) if ID is 5.

void __stdcall16far
Simulator_Process_Population_Decrement_and_Cleanup_44d8
          (uint16_t offset,uint16_t segment,uint amount,int category)
{
  uint uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  u16 uVar4;
  int iVar5;
  u32 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  u32 uVar10;
  void *pvVar11;
  ulong uStack_16;
  ulong uStack_12;
  undefined4 uStack_e;
  
  if (category == 0x5)
  {
    Simulator_Entity_Decrement_SubCounter_20E_4900((void *)CONCAT22(segment,offset));
    return;
  }
  uVar10 = Colony_Calc_Resource_Difference_at_14E_53ba
                     ((void *)CONCAT22(segment,offset),category);
  if (((int)(uVar10 >> 0x10) != 0x0) || ((int)uVar10 != 0x0))
  {
    iVar7 = category * 0x4;
    uVar1 = *(uint *)(offset + iVar7 + 0x14e);
    iVar5 = (int)amount >> 0xf;
    iVar8 = (*(int *)(offset + iVar7 + 0x150) - iVar5) - (uint)(uVar1 < amount);
    *(int *)(offset + iVar7 + 0x14e) = uVar1 - amount;
    *(int *)(offset + iVar7 + 0x150) = iVar8;
    if (iVar8 < 0x0)
    {
      *(undefined4 *)(offset + iVar7 + 0x14e) = 0x0;
    }
    uVar9 = 0x1008;
    puVar3 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    puVar6 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                       (offset,segment,puVar3,iVar5);
    uStack_e = (undefined4 *)CONCAT22(puVar6,puVar3);
    puVar2 = (undefined2 *)((int)*uStack_e + 0x10);
    uStack_12 = (*(code *)*puVar2)(0x1008,puVar3,puVar6);
    for (uStack_16 = 0x0; uStack_16 < uStack_12; uStack_16 += 0x1)
    {
      pvVar11 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_e);
      for (; amount != 0x0; amount -= 0x1)
      {
        uVar4 = UI_Build_Item_TypeD88E_Remove_SubItem_by_ID_and_State0_d00c
                          ((uint16_t)pvVar11,(uint16_t)((ulong)pvVar11 >> 0x10),category
                          );
        if (uVar4 == 0x0) break;
      }
      uVar9 = 0x1030;
      if (amount == 0x0) break;
    }
    if (uStack_e != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_e)(uVar9,puVar3,puVar6,0x1);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Recalculates colony morale based on resource group balances (Groups 1-4). Adjusts the
// morale counter at offset 0x24 and maps it to a discrete morale level (0xC-0x14) which
// is then set in the colony object. Considers specific building presence (group 0x16)
// as a bonus.

void __stdcall16far
Simulator_Calculate_Colony_Morale_Shift_45e4(void *colony_window_ptr)
{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  u32 *puVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  u16 uStack_1c;
  undefined4 uStack_16;
  
  uVar12 = (undefined2)((ulong)colony_window_ptr >> 0x10);
  pvVar9 = (void *)colony_window_ptr;
  lVar13 = Colony_Calculate_Sum_Resource_Group_38f2
                     ((void *)*(undefined4 *)((int)pvVar9 + 0x1f6),0x2);
  lVar14 = Colony_Calculate_Sum_Resource_Group_38f2
                     ((void *)*(undefined4 *)((int)pvVar9 + 0x1f6),0x1);
  uVar10 = (uint)lVar13 - (uint)lVar14;
  lVar15 = Colony_Calculate_Sum_Resource_Group_38f2
                     ((void *)*(undefined4 *)((int)pvVar9 + 0x1f6),0x4);
  lVar16 = Colony_Calculate_Sum_Resource_Group_38f2
                     ((void *)*(undefined4 *)((int)pvVar9 + 0x1f6),0x3);
  uVar11 = (uint)lVar15 - (uint)lVar16;
  uVar1 = *(uint *)((int)pvVar9 + 0x24);
  uVar4 = uVar1 + uVar11;
  iVar7 = ((int)uVar1 >> 0xf) +
          (((int)((ulong)lVar15 >> 0x10) - (int)((ulong)lVar16 >> 0x10)) -
          (uint)((uint)lVar15 < (uint)lVar16)) + (uint)CARRY2(uVar1,uVar11) +
          (((int)((ulong)lVar13 >> 0x10) - (int)((ulong)lVar14 >> 0x10)) -
          (uint)((uint)lVar13 < (uint)lVar14)) + (uint)CARRY2(uVar4,uVar10);
  if ((iVar7 < 0x0) || ((iVar7 < 0x1 && (uVar4 + uVar10 == 0x0))))
  {
    iVar5 = -0x1;
  }
  else
  {
    iVar5 = 0x1;
  }
  *(int *)((int)pvVar9 + 0x24) = *(int *)((int)pvVar9 + 0x24) + iVar5;
  puVar6 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar8 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     (colony_window_ptr,puVar6,iVar7);
  uStack_16 = (undefined4 *)CONCAT22(puVar8,puVar6);
  puVar3 = (undefined2 *)*uStack_16;
  puVar2 = (undefined2 *)puVar3 + 0x8;
  iVar7 = (*(code *)*puVar2)(0x1008,puVar6,puVar8);
  if (uStack_16 != NULL)
  {
    puVar2 = (undefined2 *)puVar3;
    (*(code *)*puVar2)(0x1008,puVar6,puVar8,0x1);
  }
  *(int *)((int)pvVar9 + 0x24) = *(int *)((int)pvVar9 + 0x24) + iVar7 * 0x2;
  iVar7 = *(int *)((int)pvVar9 + 0x24);
  if (0x64 < iVar7)
  {
    iVar7 = 0x64;
  }
  *(int *)((int)pvVar9 + 0x24) = iVar7;
  if (iVar7 < 0x0)
  {
    iVar7 = 0x0;
  }
  *(int *)((int)pvVar9 + 0x24) = iVar7;
  iVar7 /= 0xa;
  uStack_1c = 0x10;
  if (iVar7 < 0xb)
  {
    uStack_1c = 0x14;
  }
  else if (iVar7 < 0x15)
  {
    uStack_1c = 0x13;
  }
  else if (iVar7 < 0x1f)
  {
    uStack_1c = 0x12;
  }
  else if (iVar7 < 0x29)
  {
    uStack_1c = 0x11;
  }
  else if (iVar7 < 0x33)
  {
    uStack_1c = 0x10;
  }
  else if (iVar7 < 0x3d)
  {
    uStack_1c = 0xf;
  }
  else if (iVar7 < 0x47)
  {
    uStack_1c = 0xe;
  }
  else if (iVar7 < 0x51)
  {
    uStack_1c = 0xd;
  }
  else if (iVar7 < 0x5b)
  {
    uStack_1c = 0xc;
  }
  Colony_Set_Metric_Offset_1AE((void *)*(undefined4 *)((int)pvVar9 + 0x1f6),uStack_1c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates the colony's safety or security rating (offset 0x22). Considers
// police/military building presence (group 0x26), neighbor entity status, and current
// population levels. Morale (45E4) acts as a secondary factor. Caps rating at 100.

void __stdcall16far
Simulator_Calculate_Colony_Safety_Rating_4760(void *colony_window_ptr)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  u16 uVar5;
  undefined2 in_DX;
  u32 *puVar6;
  u32 *puVar7;
  u32 *puVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  long lVar12;
  void *this_ptr;
  undefined4 *entity_id;
  undefined4 *puVar13;
  ulong uStack_1a;
  ulong uStack_16;
  undefined4 uStack_e;
  undefined4 uStack_a;
  
  uVar10 = (undefined2)((ulong)colony_window_ptr >> 0x10);
  iVar9 = (int)colony_window_ptr;
  *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + *(int *)(iVar9 + 0x20c);
  puVar2 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar6 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     (colony_window_ptr,puVar2,in_DX);
  uStack_a = (undefined4 *)CONCAT22(puVar6,puVar2);
  uVar11 = 0x1008;
  puVar7 = puVar6;
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar8 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     (colony_window_ptr,puVar3,puVar7);
  uStack_e = (undefined4 *)CONCAT22(puVar8,puVar3);
  puVar1 = (undefined2 *)((int)*uStack_e + 0x10);
  lVar12 = (*(code *)*puVar1)(0x1008,puVar3,puVar8);
  puVar13 = puVar2;
  puVar7 = puVar6;
  if (lVar12 == 0x0)
  {
    puVar1 = (undefined2 *)((int)*uStack_a + 0x10);
    iVar4 = (*(code *)*puVar1)();
    *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + iVar4;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*uStack_a + 0x10);
    uStack_16 = (*(code *)*puVar1)();
    for (uStack_1a = 0x0; uStack_1a < uStack_16; uStack_1a += 0x1)
    {
      entity_id = uStack_e;
      this_ptr = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_a);
      uVar11 = 0x1028;
      uVar5 = UI_Build_Item_Get_Neighbor_Entity_Status_5a94(this_ptr,entity_id);
      if (uVar5 == 0x2)
      {
        if ((*_p_SimulatorWorldContext & 0x1) == 0x0) goto LAB_1038_485e;
      }
      else if (uVar5 != 0x3)
      {
LAB_1038_485e:
        *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + 0x1;
      }
    }
  }
  if (uStack_a != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_a)
              (uVar11,puVar2,puVar6,0x1,puVar13,puVar7);
  }
  if (uStack_e != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_e)(uVar11,puVar3,puVar8,0x1);
  }
  Simulator_Calculate_Colony_Morale_Shift_45e4(colony_window_ptr);
  if (0x32 < *(int *)(iVar9 + 0x24))
  {
    *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + -0x1;
  }
  if (*(int *)(iVar9 + 0x24) < 0x32)
  {
    *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + 0x1;
  }
  if (*(int *)(iVar9 + 0x18) < 0xfa)
  {
    *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + 0x2;
  }
  else if (*(int *)(iVar9 + 0x18) < 0x1c2)
  {
    *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + 0x1;
  }
  else if (0x225 < *(int *)(iVar9 + 0x18))
  {
    if (*(int *)(iVar9 + 0x18) < 0x2ee)
    {
      *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + -0x1;
    }
    else
    {
      *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + -0x2;
    }
  }
  iVar4 = *(int *)(iVar9 + 0x22);
  if (0x64 < iVar4)
  {
    iVar4 = 0x64;
  }
  *(int *)(iVar9 + 0x22) = iVar4;
  if (iVar4 < 0x0)
  {
    iVar4 = 0x0;
  }
  *(int *)(iVar9 + 0x22) = iVar4;
  return;
}



void __stdcall16far
Simulator_Entity_Increment_SubCounter_20E_48e0(void *this_ptr,int amount)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = *(int *)((int)(void *)this_ptr + 0x20e) + amount;
  if (0xa < iVar1)
  {
    iVar1 = 0xa;
  }
  *(int *)((int)(void *)this_ptr + 0x20e) = iVar1;
  return;
}



void __stdcall16far Simulator_Entity_Decrement_SubCounter_20E_4900(void *this_ptr)
{
  int *piVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  piVar1 = (int *)((int)this_ptr + 0x20e);
  *piVar1 = *piVar1 + -0x1;
  if (*piVar1 < 0x0)
  {
    *(undefined2 *)((int)this_ptr + 0x20e) = 0x0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles periodic automated building expansion for the planetary hub. Based on a timer
// (offset 0x20E) and current tick, selects coordinates from the hub's internal list and
// triggers building placement (Type 0x10). Validates that the target site is not
// already occupied.

void __stdcall16far Simulator_Process_Periodic_Building_Expansion_4918(u32 colony_ptr)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 *puVar6;
  void *pvVar7;
  char cStack_15b;
  undefined1 local_14a [0x4];
  undefined4 *puStack_146;
  undefined1 local_144 [0x124];
  undefined4 local_20;
  undefined2 uStack_1c;
  u8 *puStack_1a;
  undefined4 uStack_12;
  ulong uStack_e;
  undefined4 uStack_a;
  void *pvStack_6;
  
  uVar4 = (undefined2)(colony_ptr >> 0x10);
  iVar2 = (int)colony_ptr;
  if (*(long *)(iVar2 + 0x4) != 0x4000001)
  {
    return;
  }
  pvStack_6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,
                         (u8 *)(u8 *)*(undefined4 *)(iVar2 + 0x8));
  uStack_a = *(undefined4 *)((int)pvStack_6 + 0x10);
  uVar5 = (undefined2)((ulong)uStack_a >> 0x10);
  iVar3 = (int)uStack_a;
  if (*(int *)(iVar3 + 0x1c) == 0x0)
  {
    return;
  }
  uStack_e = 0x0;
  switch(*(undefined2 *)(iVar2 + 0x20e))
  {
  case 0x1:
    uStack_e._0_2_ = 0x1e;
    break;
  case 0x2:
    uStack_e._0_2_ = 0x1c;
    break;
  case 0x3:
    uStack_e._0_2_ = 0x1a;
    break;
  case 0x4:
    uStack_e._0_2_ = 0x18;
    break;
  case 0x5:
    uStack_e._0_2_ = 0x16;
    break;
  case 0x6:
    uStack_e._0_2_ = 0x14;
    break;
  case 0x7:
    uStack_e._0_2_ = 0x12;
    break;
  case 0x8:
    uStack_e._0_2_ = 0x10;
    break;
  case 0x9:
    uStack_e._0_2_ = 0xe;
    break;
  case 0xa:
    uStack_e._0_2_ = 0xc;
    break;
  default:
    goto switchD_1038_49cf_default;
  }
  uStack_e = (ulong)(uint)uStack_e;
switchD_1038_49cf_default:
  uStack_12 = *_p_SimulatorWorldContext;
  if (((uint)uStack_e != 0x0) &&
     ((int)(CONCAT22(*(undefined2 *)((int)(undefined4 *)_p_SimulatorWorldContext + 0x2),
                     (undefined2)uStack_12) % uStack_e) == 0x0))
  {
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + -0x1;
    *(int *)(iVar3 + 0x1a) = *(int *)(iVar3 + 0x1a) + 0x1;
    iVar1 = *(int *)(iVar3 + 0x1a) * 0x6 + *(int *)(iVar3 + 0x16);
    local_20 = *(undefined4 *)(iVar1 + -0x6);
    uStack_1c = *(undefined2 *)(iVar1 + -0x2);
    puStack_146 = &local_20;
    puVar6 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                       (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_20),
                        *(long *)(iVar2 + 0x8),
                        (undefined1 *)CONCAT22(unaff_SS,local_14a));
    puStack_1a = (u8 *)*puVar6;
    cStack_15b = (char)((ulong)puStack_1a >> 0x18);
    if (cStack_15b != '\0')
    {
      pvVar7 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)puStack_1a);
      pvVar7 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar7);
      iVar3 = (int)((ulong)pvVar7 >> 0x10);
      if (iVar3 != 0x0 || (int)pvVar7 != 0x0)
      {
        iVar3 = *(int *)((int)pvVar7 + 0xc);
        if (iVar3 < 0x1)
        {
          return;
        }
        if (SBORROW2(iVar3,0x1))
        {
          return;
        }
        if (0x8 < iVar3 + -0x1)
        {
          return;
        }
      }
    }
    Simulator_Command_InternalPutBldg_ctor_init_87f0
              (local_144,unaff_SS,0x0,0x100000,&local_20,unaff_SS,
               *(undefined4 *)(iVar2 + 0x4),*(undefined4 *)(iVar2 + 0x8));
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_144));
  }
  return;
}



void __stdcall16far
UI_Planet_View_List_Update_State_Wrapper_4b20(void *this_ptr,void *arg2,long entity_id)
{
  UI_Planet_View_List_Update_Item_State_from_Resource_c4f4
            ((void *)*(undefined4 *)((int)(void *)this_ptr + 0xc),(u16)(void *)arg2,
             (u16)((ulong)arg2 >> 0x10),entity_id);
  return;
}
