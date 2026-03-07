/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 49/56
 * Original lines (combined): 107712-109071
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles symmetric events between two colonies (or objects).

undefined2 __stdcall16far
Simulator_Colony_Handle_Symmetric_Event_2ac2(undefined4 param_1)
{
  u16 arg1;
  u16 arg2;
  void *colony_ptr;
  void *arg4;
  
  arg2 = (u16)((ulong)param_1 >> 0x10);
  arg1 = (u16)param_1;
  colony_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)(arg1 + 0x108));
  arg4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                   (_p_SimulatorWorldContext,(u8 *)(u8 *)*(undefined4 *)(arg1 + 0x10c));
  Colony_Handle_Internal_Event_Logic_2c82
            (arg1,arg2,*(u32 *)(arg1 + 0x110),arg4,colony_ptr);
  Colony_Handle_Internal_Event_Logic_2c82
            (arg1,arg2,*(u32 *)(arg1 + 0x114),colony_ptr,arg4);
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes symmetric turn events between two colonies.

undefined2 __stdcall16far
Simulator_Colony_Process_Symmetric_Turn_Event_2b2e(undefined4 param_1)
{
  u16 arg1;
  u16 arg2;
  void *colony_ptr;
  void *colony_ptr_00;
  
  arg2 = (u16)((ulong)param_1 >> 0x10);
  arg1 = (u16)param_1;
  colony_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)(arg1 + 0x108));
  colony_ptr_00 =
       Simulator_Get_Entity_Object_from_PackedID_e1ec
                 (_p_SimulatorWorldContext,(u8 *)(u8 *)*(undefined4 *)(arg1 + 0x10c));
  Simulator_Process_Turn_Event_Dispatcher_2f92
            (arg1,arg2,*(u32 *)(arg1 + 0x110),colony_ptr_00);
  Simulator_Process_Turn_Event_Dispatcher_2f92
            (arg1,arg2,*(u32 *)(arg1 + 0x114),colony_ptr);
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Central dispatcher for internal colony events (IDs 1-7). Handles global resource
// consumption (1), entity commands (2), specialized departures/losses (4), and colony
// window synchronization (7).

void __stdcall16far
Colony_Handle_Internal_Event_Logic_2c82
          (u16 arg1,u16 arg2,u32 event_id,void *arg4,void *colony_ptr)
{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined *heap_ctx;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  u16 arg2_00;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 unaff_SS;
  void *pvVar15;
  long lVar16;
  undefined4 uStack_16;
  void *local_12;
  u32 uStack_e;
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  arg2_00 = (u16)((ulong)colony_ptr >> 0x10);
  pvVar10 = (void *)colony_ptr;
  uVar4 = *(ulong *)((int)pvVar10 + 0x200);
  uVar13 = (undefined2)((ulong)arg4 >> 0x10);
  uStack_a = *(undefined4 *)((int)(void *)arg4 + 0x200);
  uVar14 = (undefined2)(event_id >> 0x10);
  iVar11 = (int)event_id;
  iVar7 = *(int *)(iVar11 + 0xc);
  uStack_6 = uVar4;
  if (iVar7 == 0x1)
  {
    uStack_e = event_id;
    Colony_Consume_Resource_Globally_52b8
              (colony_ptr,*(ulong *)(iVar11 + 0x8),*(int *)(iVar11 + 0xe));
    return;
  }
  if (iVar7 == 0x2)
  {
    uStack_e = event_id;
    if (*(long *)(iVar11 + 0xe) != 0x0)
    {
      Colony_Trigger_Entity_Custom_Action_58_3efc
                ((u16)pvVar10,arg2_00,arg4,(void *)*(undefined4 *)(iVar11 + 0xe));
      return;
    }
    UI_Entity_Summary_Display_ctor_a43e((void **)CONCAT22(unaff_SS,&local_12));
    uStack_16 = *(long *)((int)uStack_e + 0x8);
    while (uStack_16._2_2_ != 0x0 || (int)uStack_16 != 0x0)
    {
      UI_Entity_Dispatch_Command_from_ID_a6ee
                ((u32)CONCAT22(unaff_SS,&local_12),*(u16 *)((int)uStack_e + 0x12));
      uStack_16 = uStack_16 + -0x1;
    }
  }
  else
  {
    if (iVar7 == 0x3)
    {
      Colony_Update_Entity_Construction_Manager_Link_3f38
                (colony_ptr,arg4,(void *)*(undefined4 *)(iVar11 + 0xe));
      return;
    }
    uStack_6._0_2_ = (int)uVar4;
    uStack_6._2_2_ = (uint)(uVar4 >> 0x10);
    if (iVar7 == 0x4)
    {
      puVar9 = (undefined *)(uStack_6._2_2_ & 0xff);
      if (((int)uStack_6 == 0x1) && ((uVar4 & 0xff0000) == 0x0))
      {
        local_12 = (void *)*(undefined4 *)((int)pvVar10 + 0x1f6);
        pvVar15 = Colony_Process_Special_Departure_Logic_3694
                            ((void *)local_12,(int)((ulong)local_12 >> 0x10),
                             *(undefined2 *)(iVar11 + 0xe),
                             (int)*(undefined4 *)(iVar11 + 0x8),
                             (int)((ulong)*(undefined4 *)(iVar11 + 0x8) >> 0x10));
        *(undefined2 *)(iVar11 + 0x10) = (void *)pvVar15;
        *(undefined2 *)(iVar11 + 0x12) = (int)((ulong)pvVar15 >> 0x10);
      }
      else
      {
        if (_g_AllocatedBlock_Offset == NULL)
        {
          heap_ctx = init_memory_allocator();
        }
        else
        {
          puVar9 = g_AllocatedBlock_Segment;
          heap_ctx = g_AllocatedBlock_Offset;
        }
        pvVar10 = alloc_with_hooks(0x16c,0x1,heap_ctx);
        *(undefined2 *)(iVar11 + 0x10) = pvVar10;
        *(undefined2 *)(iVar11 + 0x12) = puVar9;
        if (*(int *)(iVar11 + 0xe) != 0x3)
        {
          if (*(int *)(iVar11 + 0xe) != 0x4)
          {
            *(undefined4 *)((int)*(undefined4 *)(iVar11 + 0x10) + 0x28) =
                 *(undefined4 *)(iVar11 + 0x8);
            return;
          }
          *(undefined4 *)((int)*(undefined4 *)(iVar11 + 0x10) + 0xdc) =
               *(undefined4 *)(iVar11 + 0x8);
          return;
        }
        *(undefined4 *)((int)*(undefined4 *)(iVar11 + 0x10) + 0x64) =
             *(undefined4 *)(iVar11 + 0x8);
      }
    }
    else if (iVar7 == 0x5)
    {
      if (*(int *)(iVar11 + 0xe) == 0xc)
      {
        if (((int)uStack_6 == 0x1) && ((uVar4 & 0xff0000) == 0x0))
        {
          iVar7 = *(int *)(iVar11 + 0x8);
          iVar11 = *(int *)(iVar11 + 0xa);
          uVar6 = -iVar7;
          uVar13 = (undefined2)((ulong)*(undefined4 *)((int)pvVar10 + 0x1f6) >> 0x10);
          iVar12 = (int)*(undefined4 *)((int)pvVar10 + 0x1f6);
          puVar1 = (uint *)(iVar12 + 0x170);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + uVar6;
          piVar2 = (int *)(iVar12 + 0x172);
          *piVar2 = (*piVar2 - (iVar11 + (uint)(iVar7 != 0x0))) +
                    (uint)CARRY2(uVar3,uVar6);
        }
      }
      else
      {
        Colony_Decrement_Population_Category_at_14E_Logic
                  ((uint16_t)pvVar10,arg2_00,*(uint *)(iVar11 + 0x8),
                   *(int *)(iVar11 + 0xe));
      }
    }
    else if (iVar7 == 0x7)
    {
      pvVar15 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,
                           (u8 *)(u8 *)*(undefined4 *)(iVar11 + 0xe));
      UI_Colony_Window_Set_Active_Colony_and_Sync_349e
                ((u32)pvVar15,*(u32 *)((int)(void *)arg4 + 0x200));
      UI_Component_Shift_and_Set_Values_18_1A((u32)pvVar15,0x258);
      UI_Component_Shift_and_Set_Values_18_1A((u32)pvVar15,0x258);
      pvVar15 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x3b);
      UI_Relationship_Manager_Add_or_Update_Link_Logic
                ((void *)pvVar15,*(long *)(iVar11 + 0xe),0x4000001);
      lVar16 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
      local_12 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                           ((u16)_p_SimulatorGlobalState,
                            (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                            (void *)*(undefined4 *)((int)lVar16 + 0x20));
      iVar7 = UI_Production_Item_Get_ID_Logic_5b00(local_12);
      uStack_e = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,iVar7);
      uVar13 = (undefined2)(uStack_e >> 0x10);
      puVar8 = (undefined4 *)((int)uStack_e + 0x20);
      puVar5 = (undefined2 *)((int)*puVar8 + 0x4);
      (*(code *)*puVar5)(0x1010,puVar8,uVar13,0x6);
    }
  }
  return;
}



// Dispatches per-turn events for a colony. Depending on event ID (1, 4, 5), handles
// specialized building updates, bulk resource additions, or randomized population
// changes. Includes logic for incrementing specialized resource counters.

void __stdcall16far
Simulator_Process_Turn_Event_Dispatcher_2f92
          (u16 arg1,u16 arg2,u32 event_id,void *colony_ptr)
{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uStack_a;
  
  uVar8 = (undefined2)((ulong)colony_ptr >> 0x10);
  pvVar6 = (void *)colony_ptr;
  uVar9 = (undefined2)(event_id >> 0x10);
  iVar7 = (int)event_id;
  iVar4 = *(int *)(iVar7 + 0xc);
  if (iVar4 == 0x1)
  {
    Colony_Distribute_Resources_to_Builders_3cc0
              (colony_ptr,(uint16_t)*(undefined4 *)(iVar7 + 0x8),
               (uint16_t)((ulong)*(undefined4 *)(iVar7 + 0x8) >> 0x10),
               *(u16 *)(iVar7 + 0xe));
    return;
  }
  if (iVar4 == 0x4)
  {
    Colony_Resource_Batch_Add_355c(*(u32 *)((int)pvVar6 + 0x1f6),*(u32 *)(iVar7 + 0x10))
    ;
    return;
  }
  if (iVar4 == 0x5)
  {
    if (*(int *)(iVar7 + 0xe) != 0xc)
    {
      Colony_Add_to_Population_Tracker_5798
                ((u32)colony_ptr,*(long *)(iVar7 + 0x8),*(int *)(iVar7 + 0xe));
      return;
    }
    uStack_a = (int)*(ulong *)((int)pvVar6 + 0x200);
    if ((uStack_a == 0x1) && ((*(ulong *)((int)pvVar6 + 0x200) & 0xff0000) == 0x0))
    {
      uVar5 = *(uint *)(iVar7 + 0x8);
      iVar4 = *(int *)(iVar7 + 0xa);
      uVar9 = (undefined2)((ulong)*(undefined4 *)((int)pvVar6 + 0x1f6) >> 0x10);
      iVar7 = (int)*(undefined4 *)((int)pvVar6 + 0x1f6);
      puVar1 = (uint *)(iVar7 + 0x170);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + uVar5;
      piVar2 = (int *)(iVar7 + 0x172);
      *piVar2 = *piVar2 + iVar4 + (uint)CARRY2(uVar3,uVar5);
      return;
    }
  }
  return;
}



// Sets the active colony for the window and triggers a full state synchronization.
// Iterates through colony entities and updates their internal window references.

void __stdcall16far
UI_Colony_Window_Set_Active_Colony_and_Sync_349e(u32 this_ptr,u32 colony_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ulong uStack_a;
  ulong uStack_6;
  
  uVar3 = (undefined2)(this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  *(u32 *)(iVar2 + 0x200) = colony_ptr;
  UI_Component_Shift_and_Set_Values_18_1A(this_ptr,0x258);
  UI_Component_Shift_and_Set_Values_18_1A(this_ptr,0x258);
  *(undefined2 *)(iVar2 + 0x204) = 0x0;
  *(undefined2 *)(iVar2 + 0x206) = 0x0;
  uVar5 = (undefined2)*(undefined4 *)(iVar2 + 0xc);
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0xc) >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0x10);
  uStack_6 = (*(code *)*puVar1)();
  for (uStack_a = 0x0; uStack_a < uStack_6; uStack_a += 0x1)
  {
    puVar4 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c
                       ((void *)*(undefined4 *)(iVar2 + 0xc));
    if (puVar4 != NULL)
    {
      puVar1 = (undefined2 *)((int)*puVar4 + 0x58);
      (*(code *)*puVar1)(0x1030,puVar4,this_ptr,uVar5,uVar6);
      ((undefined4 *)puVar4)[0x7] = 0x0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initiates a multi-turn resource reduction or consumption event for the colony. Sets
// the duration (20 or 40 turns) and logs the start of the event.

void __stdcall16far UI_Colony_Process_Turn_Resource_Reduction_Start_362e(u32 this_ptr)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  void *pvVar4;
  
  uVar3 = (undefined2)(this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  if (*(int *)(iVar2 + 0x214) == 0x0)
  {
    uVar1 = Colony_Check_Any_Entity_in_Group_Logic_4f54(this_ptr,0x1f);
    if (uVar1 == 0x0)
    {
      *(undefined2 *)(iVar2 + 0x214) = 0x14;
    }
    else
    {
      *(undefined2 *)(iVar2 + 0x214) = 0x28;
    }
    pvVar4 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
    Turn_Manager_Add_Resource_Change_Entry_Logic
              ((void *)pvVar4,0x0,0x0,0x1,*(long *)(iVar2 + 0x4),0x38);
    *(undefined4 *)(iVar2 + 0x216) = 0x0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Per-turn logic for active resource reduction events. Consumes Resource 0xF from
// entities, updates running totals, and distributes the remaining population loss
// across the colony. Decrements the event duration counter.

void __stdcall16far UI_Colony_Process_Turn_Resource_Reduction_Tick_3698(u32 this_ptr)
{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  u16 amount_lo;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  long lVar10;
  void *this_ptr_00;
  undefined4 uStack_20;
  ulong uStack_12;
  undefined4 uStack_e;
  undefined4 uStack_a;
  
  uVar9 = (undefined2)(this_ptr >> 0x10);
  iVar8 = (int)this_ptr;
  if (*(int *)(iVar8 + 0x214) == 0x0)
  {
    return;
  }
  lVar10 = Colony_Calculate_Sum_All_Resources_38b8
                     ((int)*(undefined4 *)(iVar8 + 0x1f6),
                      (u16)((ulong)*(undefined4 *)(iVar8 + 0x1f6) >> 0x10));
  lVar10 -= *(long *)(iVar8 + 0x216);
  if (0x0 < lVar10)
  {
    lVar10 += 0x3;
    uStack_a = lVar10 / 0x5;
    uVar6 = (undefined2)(lVar10 % 0x5);
    if (*(long *)(iVar8 + 0xc) == 0x0)
    {
      uVar4 = 0x0;
      uVar6 = 0x0;
    }
    else
    {
      puVar3 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar8 + 0xc) + 0x10);
      uVar4 = (*(code *)*puVar3)(0x1030,(int)*(undefined4 *)(iVar8 + 0xc),
                                 (int)((ulong)*(undefined4 *)(iVar8 + 0xc) >> 0x10));
    }
    uStack_e = CONCAT22(uVar6,uVar4);
    for (uStack_12 = 0x0; uStack_12 < uStack_e; uStack_12 += 0x1)
    {
      this_ptr_00 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c
                              ((void *)*(undefined4 *)(iVar8 + 0xc));
      uVar2 = (uint)((ulong)this_ptr_00 >> 0x10);
      uVar7 = uVar2 | (uint)this_ptr_00;
      if (uVar7 != 0x0)
      {
        iVar5 = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),
                           *(int *)((uint)this_ptr_00 + 0xc));
        if (iVar5 != 0x0)
        {
          amount_lo = UI_Item_List_Get_Value_by_ID_Offset8_678c((u32)this_ptr_00,0xf);
          uStack_20 = CONCAT22(uVar7,amount_lo);
          if (uVar7 != 0x0 || amount_lo != 0x0)
          {
            if (uStack_a < uStack_20)
            {
              uVar7 = (uint)uStack_a;
              UI_Item_List_Consume_Resources_by_Type_Logic_6356
                        (this_ptr_00,0xf,uVar7,uStack_a._2_2_);
              puVar1 = (uint *)(iVar8 + 0x216);
              uVar2 = *puVar1;
              *puVar1 = *puVar1 + uVar7 * 0x5;
              *(int *)(iVar8 + 0x218) =
                   *(int *)(iVar8 + 0x218) +
                   uStack_a._2_2_ * 0x5 + (uint)CARRY2(uVar7,uVar7) * 0x2 +
                   (uint)CARRY2(uVar7 * 0x2,uVar7 * 0x2) +
                   (uint)CARRY2(uVar7 * 0x4,uVar7) + (uint)CARRY2(uVar2,uVar7 * 0x5);
              uStack_a = 0x0;
            }
            else
            {
              UI_Item_List_Consume_Resources_by_Type_Logic_6356
                        (this_ptr_00,0xf,amount_lo,uVar7);
              puVar1 = (uint *)(iVar8 + 0x216);
              uVar2 = *puVar1;
              *puVar1 = *puVar1 + amount_lo * 0x5;
              *(int *)(iVar8 + 0x218) =
                   *(int *)(iVar8 + 0x218) +
                   uVar7 * 0x5 + (uint)CARRY2(amount_lo,amount_lo) * 0x2 +
                   (uint)CARRY2(amount_lo * 0x2,amount_lo * 0x2) +
                   (uint)CARRY2(amount_lo * 0x4,amount_lo) +
                   (uint)CARRY2(uVar2,amount_lo * 0x5);
              uStack_a -= uStack_20;
            }
          }
        }
        if (uStack_a == 0x0) break;
      }
    }
    uStack_20 = Colony_Calculate_Sum_All_Resources_38b8
                          ((int)*(undefined4 *)(iVar8 + 0x1f6),
                           (u16)((ulong)*(undefined4 *)(iVar8 + 0x1f6) >> 0x10));
    uStack_20 -= *(long *)(iVar8 + 0x216);
    if (uStack_20 != 0x0)
    {
      uStack_20 /= (long)*(int *)(iVar8 + 0x214);
      if (uStack_20 < 0x1)
      {
        uStack_20 = 0x1;
      }
      Colony_Distribute_Value_Decrement_across_Group_375a
                ((int)*(undefined4 *)(iVar8 + 0x1f6),
                 (int)((ulong)*(undefined4 *)(iVar8 + 0x1f6) >> 0x10),0x0,(int)uStack_20
                 ,(int)((ulong)uStack_20 >> 0x10));
    }
  }
  *(int *)(iVar8 + 0x214) = *(int *)(iVar8 + 0x214) + -0x1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Tears down and reconstructs the colony's internal managed list of construction hubs.
// Scans Group 0x1E entities and populates a new UI_Managed_List at offset 0x210.

void __stdcall16far Colony_Rebuild_SubItem_Manager_List_3ba0(void *this_ptr)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  u16 *puVar5;
  int extraout_DX;
  u32 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  ulong uVar11;
  void *item_ptr;
  undefined4 *puVar12;
  u32 *puVar13;
  undefined4 uStack_1c;
  ulong uStack_14;
  undefined4 uStack_a;
  
  uVar9 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar8 = (int)this_ptr;
  iVar7 = *(int *)(iVar8 + 0x212);
  if (iVar7 != 0x0 || (undefined4 *)*(int *)(iVar8 + 0x210) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)(iVar8 + 0x210);
    (*(code *)*puVar1)();
    iVar7 = extraout_DX;
  }
  puVar2 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar6 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e(this_ptr,puVar2,iVar7);
  uStack_a = (undefined4 *)CONCAT22(puVar6,puVar2);
  puVar1 = (undefined2 *)((int)*uStack_a + 0x10);
  puVar12 = puVar2;
  puVar13 = puVar6;
  uVar11 = (*(code *)*puVar1)(0x1008);
  iVar7 = (int)(uVar11 >> 0x10);
  uVar3 = (uint)uVar11;
  if ((iVar7 == 0x0) && ((false || (uVar3 < 0x5))))
  {
    uVar3 = 0x5;
  }
  uVar10 = 0x1000;
  pvVar4 = allocate_memory(CONCAT22(puVar12,0x1c));
  uStack_1c = (void *)CONCAT22(iVar7,pvVar4);
  if (iVar7 == 0x0 && pvVar4 == NULL)
  {
    *(undefined4 *)(iVar8 + 0x210) = 0x0;
  }
  else
  {
    iVar7 = (int)(uVar3 + 0x1) >> 0xf;
    uVar10 = 0x1030;
    puVar5 = UI_Managed_List_Base_ctor_init_11aa
                       (uStack_1c,(void *)0x5,(void *)(long)(int)(uVar3 + 0x1));
    *(undefined2 *)(iVar8 + 0x210) = puVar5;
    *(int *)(iVar8 + 0x212) = iVar7;
  }
  *(undefined2 *)((int)*(undefined4 *)(iVar8 + 0x210) + 0x1a) = 0x0;
  for (uStack_14 = 0x0; uStack_14 < uVar11; uStack_14 += 0x1)
  {
    item_ptr = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_a);
    if ((int)((ulong)item_ptr >> 0x10) != 0x0 || (int)item_ptr != 0x0)
    {
      UI_Managed_List_Set_Item_at_Index_1358
                ((void *)*(undefined4 *)(iVar8 + 0x210),item_ptr,(uint)(uStack_14 + 0x1)
                 ,(undefined4 *)CONCAT22(puVar13,puVar12));
    }
    uVar10 = 0x1030;
  }
  if (uStack_a != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_a)(uVar10,puVar2,puVar6,0x1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Distributes resources (Power, Materials, or specific Type IDs) from the colony supply
// to entities requiring construction or maintenance. Scans entity groups 0x27, 10, or 3
// based on the provided parameter.

void __stdcall16far
Colony_Distribute_Resources_to_Builders_3cc0
          (void *this_ptr,uint16_t amount_lo,uint16_t amount_hi,u16 type_id)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 in_DX;
  u32 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  int *array_desc;
  undefined4 uStack_1a;
  ulong uStack_16;
  ulong uStack_12;
  ulong uStack_e;
  undefined4 uStack_a;
  
  pvVar7 = (void *)CONCAT22(amount_hi,amount_lo);
  array_desc = (int *)_p_StringPropertyTable;
  iVar4 = (int)((ulong)_p_StringPropertyTable >> 0x10);
  if (type_id == 0x1e)
  {
    uVar6 = 0x1008;
    puVar2 = get_array_element_6bytes(array_desc,iVar4);
    puVar3 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                       (this_ptr,puVar2,in_DX);
    uStack_a = (undefined4 *)CONCAT22(puVar3,puVar2);
    puVar1 = (undefined2 *)((int)*uStack_a + 0x10);
    uStack_e = (*(code *)*puVar1)(0x1008,puVar2,puVar3);
    for (uStack_12 = 0x0; uStack_12 < uStack_e; uStack_12 += 0x1)
    {
      pvVar8 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_a);
      if (pvVar8 != NULL)
      {
        pvVar9 = UI_Build_Item_Get_Resource_Cap_Difference_bfb8(pvVar8);
        iVar4 = (int)((ulong)pvVar9 >> 0x10);
        if (iVar4 != 0x0 || (void *)pvVar9 != NULL)
        {
          pvVar8 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(pvVar8);
          uVar5 = (undefined2)((ulong)pvVar8 >> 0x10);
          if (pvVar7 <= pvVar9)
          {
            uVar6 = 0x1030;
            UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                      ((void *)pvVar8,uVar5,pvVar7,0x1e);
            break;
          }
          UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                    ((void *)pvVar8,uVar5,(void *)pvVar9,iVar4,0x1e);
          pvVar7 = (void *)((long)pvVar7 - (long)pvVar9);
        }
      }
      uVar6 = 0x1030;
    }
    uStack_1a = uStack_a;
    if (uStack_a == NULL)
    {
      return;
    }
    goto LAB_1038_3dde;
  }
  if (type_id == 0x21)
  {
    uVar6 = 0x1008;
    puVar2 = get_array_element_6bytes(array_desc,iVar4);
    puVar3 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                       (this_ptr,puVar2,in_DX);
    uStack_1a = (undefined4 *)CONCAT22(puVar3,puVar2);
    puVar1 = (undefined2 *)((int)*uStack_1a + 0x10);
    uStack_16 = (*(code *)*puVar1)(0x1008,puVar2,puVar3);
    for (uStack_12 = 0x0; uStack_12 < uStack_16; uStack_12 += 0x1)
    {
      uVar6 = 0x1030;
      pvVar7 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_1a);
      if (pvVar7 != NULL)
      {
        pvVar8 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(pvVar7);
        pvVar7 = (void *)CONCAT22(amount_hi,amount_lo);
        uVar5 = (undefined2)((ulong)pvVar8 >> 0x10);
        pvVar10 = (void *)pvVar8;
        goto LAB_1038_3e67;
      }
    }
  }
  else
  {
    uVar6 = 0x1008;
    puVar2 = get_array_element_6bytes(array_desc,iVar4);
    puVar3 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                       (this_ptr,puVar2,in_DX);
    uStack_1a = (undefined4 *)CONCAT22(puVar3,puVar2);
    puVar1 = (undefined2 *)((int)*uStack_1a + 0x10);
    uStack_16 = (*(code *)*puVar1)(0x1008,puVar2,puVar3);
    for (uStack_12 = 0x0; uStack_12 < uStack_16; uStack_12 += 0x1)
    {
      uVar6 = 0x1030;
      pvVar8 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_1a);
      if (pvVar8 != NULL)
      {
        uVar6 = 0x1028;
        pvVar9 = UI_Construction_Item_Calculate_Capacity_Remaining_45e2(pvVar8);
        iVar4 = (int)((ulong)pvVar9 >> 0x10);
        if (iVar4 != 0x0 || (void *)pvVar9 != NULL)
        {
          pvVar8 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(pvVar8);
          uVar5 = (undefined2)((ulong)pvVar8 >> 0x10);
          pvVar10 = (void *)pvVar8;
          if (pvVar7 <= pvVar9) goto LAB_1038_3e67;
          uVar6 = 0x1030;
          UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                    (pvVar10,uVar5,(void *)pvVar9,iVar4,type_id);
          pvVar7 = (void *)((long)pvVar7 - (long)pvVar9);
        }
      }
    }
  }
  goto LAB_1038_3e6c;
LAB_1038_3e67:
  uVar6 = 0x1030;
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvVar10,uVar5,pvVar7,type_id);
LAB_1038_3e6c:
  if (uStack_1a == NULL)
  {
    return;
  }
  puVar3 = (u32 *)((ulong)uStack_1a >> 0x10);
  puVar2 = (undefined4 *)uStack_1a;
LAB_1038_3dde:
  (*(code *)*(undefined2 *)(undefined2 *)*puVar2)
            (uVar6,(undefined4 *)uStack_1a,puVar3,0x1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Resolves a simulator entity and dispatches a virtual action call at offset 0x58,
// passing the provided UI component as a parameter.

void __stdcall16far
Colony_Trigger_Entity_Custom_Action_58_3efc
          (u16 arg1,u16 arg2,void *this_ptr,void *entity_id)
{
  void *puVar3;
  void *puVar1;
  
  puVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)entity_id);
  puVar3._2_2_ = (undefined2)((ulong)puVar3 >> 0x10);
  *(undefined4 *)((int)puVar3 + 0x1c) = *(undefined4 *)((int)this_ptr + 0x4);
  puVar1 = (void *)((int)*(undefined4 *)puVar3 + 0x58);
  (**(code **)puVar1)(0x1028,(int)puVar3,puVar3._2_2_,this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Links an entity to a construction manager, updates its cached ID (73EE), and triggers
// its setup via virtual call 0x58.

void __stdcall16far
Colony_Update_Entity_Construction_Manager_Link_3f38
          (void *arg1,void *arg2,void *entity_id)
{
  undefined2 *puVar1;
  undefined4 *this_ptr;
  void *this_ptr_00;
  void *pvVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)entity_id);
  this_ptr_00 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar4 = *(undefined4 *)((int)(void *)this_ptr_00 + 0x4);
  puVar1 = (undefined2 *)((int)*(undefined4 *)arg1 + 0x18);
  (*(code *)*puVar1)(0x1028,arg1,uVar4);
  uVar5 = 0x0;
  uVar3 = 0x0;
  puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
  pvVar2 = arg2;
  (*(code *)*puVar1)();
  UI_Component_Set_Entity_ID_and_Cache_Ptr_73ee
            (this_ptr_00,(void *)*(undefined4 *)((int)(void *)arg2 + 0x4));
  puVar1 = (undefined2 *)((int)*this_ptr + 0x58);
  (*(code *)*puVar1)(0x1030,(undefined4 *)this_ptr,(int)((ulong)this_ptr >> 0x10),arg2,
                     pvVar2,uVar3,uVar4,uVar5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Accessor that resolves and returns the simulator object for the packed ID stored at
// offset 0x200 of the colony structure.

ulong __stdcall16far Colony_Get_Entity_Object_by_PackedID_200_Logic(void *this_ptr)
{
  void *pvVar1;
  
  pvVar1 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)(void *)this_ptr + 0x200));
  return (ulong)pvVar1;
}
