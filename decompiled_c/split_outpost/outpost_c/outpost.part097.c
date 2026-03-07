/*
 * Source: outpost.c
 * Chunk: 97/117
 * Original lines: 110675-111847
 * Boundaries: top-level declarations/definitions only
 */




// Calculates the 32-bit difference between target and current population/resource
// values stored at offsets 0x14E and 0x1A2.

u32 __stdcall16far
Colony_Calc_Resource_Difference_at_14E_53ba(void *colony_ptr,int index)
{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  uint uStack_a;
  int iStack_8;
  int iStack_4;
  
  uVar3 = (undefined2)((ulong)colony_ptr >> 0x10);
  uVar1 = *(ulong *)((int)(void *)colony_ptr + index * 0x4 + 0x14e);
  uVar2 = *(ulong *)((int)(void *)colony_ptr + index * 0x4 + 0x1a2);
  iStack_4 = (int)(uVar1 >> 0x10);
  if (uVar2 < uVar1)
  {
    uStack_a = (uint)uVar2;
    iStack_8 = (int)(uVar2 >> 0x10);
    return CONCAT22((iStack_4 - iStack_8) - (uint)((uint)uVar1 < uStack_a),
                    (uint)uVar1 - uStack_a);
  }
  return 0x0;
}



// Calculates the 32-bit deficit/difference between values stored at offsets 0x26 and
// 0xBA. Used for resource distribution logic.

void * __stdcall16far
Colony_Calc_Resource_Deficit_at_26_540a(void *colony_ptr,int index)
{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_4;
  
  uVar3 = (undefined2)((ulong)colony_ptr >> 0x10);
  uVar1 = *(ulong *)((int)colony_ptr + 0x26 + index * 0x4);
  uVar2 = *(ulong *)((int)colony_ptr + 0xba + index * 0x4);
  uStack_e = NULL;
  uStack_c = 0x0;
  uStack_4 = (int)(uVar1 >> 0x10);
  if (uVar2 < uVar1)
  {
    uStack_a = (uint)uVar2;
    uStack_e = (void *)((uint)uVar1 - uStack_a);
    uStack_8 = (int)(uVar2 >> 0x10);
    uStack_c = (uStack_4 - uStack_8) - (uint)((uint)uVar1 < uStack_a);
  }
  return (void *)CONCAT22(uStack_c,uStack_e);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Exhaustively refreshes global colony resource and population trackers by aggregating
// data from all linked world entities and their sub-items. Re-syncs morale and primary
// resource categories.

void __stdcall16far Colony_Refresh_Global_Resource_Trackers_5464(void *colony_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  u8 *puVar6;
  void *pvVar7;
  u8 *puVar8;
  long lVar9;
  undefined2 local_2e;
  undefined2 uStack_2c;
  undefined4 local_2a;
  undefined4 *puStack_22;
  uint uStack_1e;
  uint uStack_1c;
  void *pvStack_1a;
  void *pvStack_16;
  undefined4 uStack_12;
  ulong uStack_e;
  ulong uStack_a;
  undefined4 uStack_6;
  
  Colony_Reset_Resource_Trackers_56ba(colony_ptr);
  Colony_Reset_Population_Trackers_57c0((u32)colony_ptr);
  uVar4 = (undefined2)((ulong)colony_ptr >> 0x10);
  pvVar2 = (void *)colony_ptr;
  if (*(long *)((int)pvVar2 + 0xc) == 0x0)
  {
    uStack_a = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)pvVar2 + 0xc) + 0x10);
    uStack_a = (*(code *)*puVar1)();
  }
  puVar8 = (u8 *)CONCAT22(uStack_12._2_2_,(u8 *)uStack_12);
  for (uStack_e = 0x0; uStack_12 = puVar8, uStack_e < uStack_a; uStack_e += 0x1)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)pvVar2 + 0xc) + 0x4);
    puVar8 = (u8 *)(*(code *)*puVar1)(unaff_CS,(int)*(undefined4 *)((int)pvVar2 + 0xc),
                                      (int)((ulong)*(undefined4 *)((int)pvVar2 + 0xc) >>
                                           0x10),(int)uStack_e,(int)(uStack_e >> 0x10));
    if (puVar8 != NULL)
    {
      unaff_CS = 0x1028;
      uStack_12 = puVar8;
      pvStack_16 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                             (_p_SimulatorWorldContext,(u8 *)puVar8);
      uVar5 = (undefined2)((ulong)pvStack_16 >> 0x10);
      pvStack_1a = (void *)*(undefined4 *)((int)(void *)pvStack_16 + 0x22);
      if (*(int *)((int)(void *)pvStack_16 + 0x24) == 0x0 && (void *)pvStack_1a == NULL)
      {
        uStack_1c = 0x0;
      }
      else
      {
        uStack_1c = *(uint *)((int)(void *)pvStack_1a + 0x4);
      }
      for (uStack_1e = 0x0; uStack_1e < uStack_1c; uStack_1e += 0x1)
      {
        unaff_CS = 0x1020;
        UI_Item_List_Get_Item_at_Index_Logic
                  (pvStack_1a,(undefined2 *)CONCAT22(unaff_SS,&local_2e),
                   (undefined4 *)CONCAT22(unaff_SS,&local_2a),uStack_1e);
        if (CONCAT22(uStack_2c,local_2e) != 0x0)
        {
          Colony_Add_to_Resource_Tracker_5694
                    (colony_ptr,CONCAT22(uStack_2c,local_2e),(int)(u8 *)local_2a);
        }
      }
      uVar5 = (undefined2)((ulong)pvStack_16 >> 0x10);
      puStack_22 = (undefined4 *)*(undefined4 *)((int)(void *)pvStack_16 + 0x1e);
      iVar3 = *(int *)((int)(void *)pvStack_16 + 0x20);
      if (iVar3 == 0x0 && (undefined4 *)puStack_22 == NULL)
      {
        uStack_1c = 0x0;
      }
      else
      {
        puVar1 = (undefined2 *)((int)*puStack_22 + 0x10);
        uStack_1c = (*(code *)*puVar1)(unaff_CS,(undefined4 *)puStack_22,iVar3);
      }
      puVar8 = uStack_12;
      for (uStack_1e = 0x0; uStack_1e < uStack_1c; uStack_1e += 0x1)
      {
        puVar1 = (undefined2 *)((int)*puStack_22 + 0x4);
        uStack_12 = puVar8;
        puVar6 = (u8 *)(*(code *)*puVar1)(unaff_CS,(undefined4 *)puStack_22,
                                          (int)((ulong)puStack_22 >> 0x10),uStack_1e,0x0
                                         );
        local_2a = puVar6;
        puVar8 = uStack_12;
        if (puVar6 != NULL)
        {
          unaff_CS = 0x1028;
          pvVar7 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                             (_p_SimulatorWorldContext,(u8 *)puVar6);
          iVar3 = *(int *)((int)(void *)pvVar7 + 0xc) * 0x4;
          *(long *)((int)pvVar2 + iVar3 + 0x14e) =
               *(long *)((int)pvVar2 + iVar3 + 0x14e) + 0x1;
          puVar8 = uStack_12;
        }
      }
    }
  }
  lVar9 = Colony_Calculate_Sum_Resource_Group_38f2
                    ((void *)*(undefined4 *)((int)pvVar2 + 0x1f6),0x3);
  uStack_6._2_2_ = (int)((ulong)lVar9 >> 0x10);
  uStack_6._0_2_ = (uint)lVar9;
  lVar9 = Colony_Calculate_Sum_Resource_Group_38f2
                    ((void *)*(undefined4 *)((int)pvVar2 + 0x1f6),0x4);
  uStack_6 = CONCAT22(uStack_6._2_2_ + (int)((ulong)lVar9 >> 0x10) +
                      (uint)CARRY2((uint)uStack_6,(uint)lVar9),
                      (uint)uStack_6 + (uint)lVar9);
  if (uStack_6 == 0x0)
  {
    uStack_6 = Colony_Calculate_Sum_Resource_Group_38f2
                         ((void *)*(undefined4 *)((int)pvVar2 + 0x1f6),0x2);
  }
  uStack_6 += *(long *)((int)*(undefined4 *)((int)pvVar2 + 0x1f6) + 0x170);
  Colony_Add_to_Resource_Tracker_5694(colony_ptr,uStack_6,0x24);
  return;
}



// Factory wrapper that spawns a simulator entity and immediately registers it within
// the colony's management structures.

u32 __stdcall16far Colony_Spawn_and_Register_Entity_565e(void *this_ptr)
{
  astruct_148 *uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  void *new_ptr;
  undefined1 local_4 [0x2];
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_148 *)this_ptr;
  new_ptr = Simulator_Factory_Spawn_Entity_and_Process_Logic_8e3c
                      (local_4,unaff_SS,uVar1->field4_0x4);
  UI_Component_Set_Internal_Object_and_Cleanup_582c(this_ptr,new_ptr);
  return CONCAT22(uVar1->field18_0x16,uVar1->field17_0x14);
}



// Directly adds a 32-bit value to a specific colony resource slot at offset 0x26.

void __stdcall16far
Colony_Add_to_Resource_Tracker_5694(void *colony_ptr,long amount,int index)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)colony_ptr >> 0x10);
  *(long *)((int)colony_ptr + index * 0x4 + 0x26) =
       *(long *)((int)colony_ptr + 0x26 + index * 0x4) + amount;
  return;
}



// Zero-fills the primary 148-byte resource tracking array (offset 0x26).

void __stdcall16far Colony_Reset_Resource_Trackers_56ba(void *colony_ptr)
{
  memset_far((void *)((int)(void *)colony_ptr + 0x26),(int)((ulong)colony_ptr >> 0x10),
             0x0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Zero-fills the secondary tracking array (offset 0xBA) and optionally triggers
// per-entity list cleanup for the entire colony.

void __stdcall16far
Colony_Reset_Secondary_Trackers_and_Cleanup_56d6(u32 colony_ptr,int do_cleanup)
{
  undefined2 *puVar1;
  int iVar2;
  int value;
  undefined2 uVar3;
  ulong uVar4;
  u8 *puVar5;
  void *this_ptr;
  ulong uStack_a;
  
  iVar2 = (int)colony_ptr;
  value = (int)(colony_ptr >> 0x10);
  uVar3 = 0x1000;
  memset_far((void *)(iVar2 + 0xba),value,0x0);
  if (do_cleanup != 0x0)
  {
    if (*(long *)(iVar2 + 0xc) == 0x0)
    {
      uVar4 = 0x0;
    }
    else
    {
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0x10);
      uVar4 = (*(code *)*puVar1)();
    }
    for (uStack_a = 0x0; uStack_a < uVar4; uStack_a += 0x1)
    {
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0x4);
      puVar5 = (u8 *)(*(code *)*puVar1)(uVar3,*(undefined4 *)(iVar2 + 0xc),uStack_a);
      if (puVar5 != NULL)
      {
        this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                             (_p_SimulatorWorldContext,(u8 *)puVar5);
        uVar3 = 0x1030;
        UI_Component_Free_List_26_Logic_72d0(this_ptr);
      }
    }
  }
  return;
}



// Directly adds a 32-bit value to a specific colony resource slot in the secondary
// tracker at offset 0xBA.

void __stdcall16far
Colony_Add_to_Secondary_Resource_Tracker_5770(void *colony_ptr,long amount,int index)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)colony_ptr >> 0x10);
  *(long *)((int)colony_ptr + index * 0x4 + 0xba) =
       *(long *)((int)colony_ptr + 0xba + index * 0x4) + amount;
  return;
}



// Adds a 32-bit value to a population tracking slot at offset 0x14E.

void __stdcall16far
Colony_Add_to_Population_Tracker_5798(u32 colony_ptr,long amount,int index)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(colony_ptr >> 0x10);
  *(long *)((int)colony_ptr + index * 0x4 + 0x14e) =
       *(long *)((int)colony_ptr + 0x14e + index * 0x4) + amount;
  return;
}



// Zero-fills the population tracking array at offset 0x14E.

void __stdcall16far Colony_Reset_Population_Trackers_57c0(u32 colony_ptr)
{
  memset_far((void *)((int)colony_ptr + 0x14e),(int)(colony_ptr >> 0x10),0x0);
  return;
}



// Adds a 32-bit value to the current population tracker at offset 0x1A2.

void __stdcall16far
Colony_Add_to_Current_Population_at_1A2_57dc(void *colony_ptr,long amount,int index)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)colony_ptr >> 0x10);
  *(long *)((int)(void *)colony_ptr + index * 0x4 + 0x1a2) =
       *(long *)((int)(void *)colony_ptr + index * 0x4 + 0x1a2) + amount;
  return;
}



// Subtracts a 32-bit value from the current population tracker at offset 0x1A2.

void __stdcall16far
Colony_Subtract_from_Current_Population_at_1A2_5804
          (u32 colony_ptr,long amount,int index)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(colony_ptr >> 0x10);
  *(long *)((int)colony_ptr + index * 0x4 + 0x1a2) =
       *(long *)((int)colony_ptr + 0x1a2 + index * 0x4) - amount;
  return;
}



// Updates the internal object pointer at offset 0x14, ensuring the previous object is
// virtually destroyed.

void __stdcall16far
UI_Component_Set_Internal_Object_and_Cleanup_582c(void *this_ptr,void *new_ptr)
{
  int iVar1;
  undefined2 *puVar2;
  astruct_147 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_147 *)this_ptr;
                // WARNING: Load size is inaccurate
  iVar1 = *(int *)((int)&uVar2->field20_0x14 + 0x2);
  if (iVar1 != 0x0 || uVar2->field20_0x14 != NULL)
  {
    puVar2 = (undefined2 *)(undefined2 *)*uVar2->field20_0x14;
    (*(code *)*puVar2)();
  }
  uVar2->field20_0x14 = new_ptr;
  return;
}



// Appends an item to a managed list only if it's not already present by checking for
// existing IDs.

void __stdcall16far
UI_Managed_List_Append_Unique_Item_5860
          (undefined4 param_1,undefined2 param_2,undefined4 param_3,int param_4)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  ulong local_e;
  ulong local_a;
  int local_6;
  int iStack_4;
  
  if (param_4 == 0x0)
  {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0x10);
    local_a = (*(code *)*puVar1)();
    for (local_e = 0x0; local_e < local_a; local_e += 0x1)
    {
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0x4);
      uVar4 = (*(code *)*puVar1)();
      local_6 = (int)param_3;
      if (((int)uVar4 == local_6) &&
         (iStack_4 = (int)((ulong)param_3 >> 0x10),
         (int)((ulong)uVar4 >> 0x10) == iStack_4))
      {
        return;
      }
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0xc);
    (*(code *)*puVar1)();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Propagates status flags for Group 0x2E entities. Checks connectivity and neighbor
// status, sets flag 3, and triggers virtual callback 0x28.

void __stdcall16far
Colony_Process_Entity_Flag_Propagation_Step1_58e6
          (u16 arg1,u16 arg2,ulong count,u32 list1,u32 list2,int step)
{
  uint uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  void *pvVar8;
  u8 *puVar9;
  undefined4 local_12;
  int iStack_e;
  int iStack_c;
  ulong uStack_6;
  
  for (uStack_6 = 0x0; uStack_6 < count; uStack_6 += 0x1)
  {
    uVar7 = (undefined2)(list1 >> 0x10);
    iVar5 = (int)list1;
    if ((*(long *)((int)uStack_6 * 0x4 + iVar5) != 0x0) &&
       (uVar3 = *(undefined4 *)((int)uStack_6 * 0x4 + iVar5),
       iVar4 = search_array_for_value
                         ((int *)_p_StringPropertyTable,
                          (int)((ulong)_p_StringPropertyTable >> 0x10),
                          *(int *)((int)uVar3 + 0xc)), iVar4 != 0x0))
    {
      uVar6 = (undefined2)(list2 >> 0x10);
      iVar4 = *(int *)((int)uStack_6 * 0x4 + (int)list2);
      uVar6 = *(undefined2 *)((int)uStack_6 * 0x4 + (int)list2 + 0x2);
      local_12 = *(undefined4 *)(iVar4 + 0xc);
      iStack_c = *(int *)(iVar4 + 0x10);
      iStack_e = iStack_c;
      if (iStack_c == step)
      {
        iStack_e = iStack_c + -0x1;
        pvVar8 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24
                           ((void *)*(undefined4 *)((int)uStack_6 * 0x4 + iVar5));
        puVar9 = Simulator_Map_Get_Entity_at_Coords_627e
                           (_p_MapContext_5740,
                            (undefined4 *)CONCAT22(unaff_SS,&local_12),pvVar8);
        pvVar8 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)puVar9);
        if (pvVar8 != NULL)
        {
          pvVar8 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar8);
          uVar1 = *(uint *)((int)(void *)pvVar8 + 0x1a);
          if (((uVar1 & 0x2) != 0x0) && ((uVar1 & 0x1) != 0x0))
          {
            uVar3 = *(undefined4 *)((int)uStack_6 * 0x4 + iVar5);
            *(undefined2 *)((int)uVar3 + 0x1a) = 0x3;
            puVar2 = (undefined2 *)
                     ((int)*(undefined4 *)*(undefined4 *)((int)uStack_6 * 0x4 + iVar5) +
                     0x28);
            (*(code *)*puVar2)();
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Propagates status flags for Group 0x2F entities. Sets flag 3 and triggers virtual
// callback 0x28.

void __stdcall16far
Colony_Process_Entity_Flag_Propagation_Step2_5a16
          (u16 arg1,u16 arg2,ulong count,void *list_ptr)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  ulong uStack_6;
  
  for (uStack_6 = 0x0; uStack_6 < count; uStack_6 += 0x1)
  {
    uVar5 = (undefined2)((ulong)list_ptr >> 0x10);
    iVar4 = (int)list_ptr;
    if ((*(long *)((int)uStack_6 * 0x4 + iVar4) != 0x0) &&
       (uVar2 = *(undefined4 *)((int)uStack_6 * 0x4 + iVar4),
       iVar3 = search_array_for_value
                         ((int *)_p_StringPropertyTable,
                          (int)((ulong)_p_StringPropertyTable >> 0x10),
                          *(int *)((int)uVar2 + 0xc)), iVar3 != 0x0))
    {
      uVar2 = *(undefined4 *)((int)uStack_6 * 0x4 + iVar4);
      *(undefined2 *)((int)uVar2 + 0x1a) = 0x3;
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)uStack_6 * 0x4 + iVar4) + 0x28)
      ;
      (*(code *)*puVar1)();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Propagates status flags for Group 0x2C entities. Triggers virtual call 0x54 and
// manages transitions between flags 3 and 2.

void __stdcall16far
Colony_Process_Entity_Flag_Propagation_Step3_5a96
          (u16 arg1,u16 arg2,ulong count,u32 list_ptr)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  ulong uStack_6;
  
  for (uStack_6 = 0x0; uStack_6 < count; uStack_6 += 0x1)
  {
    uVar5 = (undefined2)(list_ptr >> 0x10);
    iVar4 = (int)list_ptr;
    if ((*(long *)((int)uStack_6 * 0x4 + iVar4) != 0x0) &&
       (uVar2 = *(undefined4 *)((int)uStack_6 * 0x4 + iVar4),
       iVar3 = search_array_for_value
                         ((int *)_p_StringPropertyTable,
                          (int)((ulong)_p_StringPropertyTable >> 0x10),
                          *(int *)((int)uVar2 + 0xc)), iVar3 != 0x0))
    {
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)uStack_6 * 0x4 + iVar4) + 0x54)
      ;
      iVar3 = (*(code *)*puVar1)();
      if (iVar3 != 0x0)
      {
        uVar2 = *(undefined4 *)(iVar4 + (int)uStack_6 * 0x4);
        *(undefined2 *)((int)uVar2 + 0x1a) = 0x3;
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)uStack_6 * 0x4 + iVar4) +
                 0x28);
        (*(code *)*puVar1)();
        uVar2 = *(undefined4 *)(iVar4 + (int)uStack_6 * 0x4);
        *(undefined2 *)((int)uVar2 + 0x1a) = 0x2;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Propagates status flags for Group 0x2D entities. Triggers virtual call 0x50 and sets
// bitmask flags (OR 1) at offset 0x1A.

void __stdcall16far
Colony_Process_Entity_Flag_Propagation_Step4_5b3c
          (u16 arg1,u16 arg2,ulong count,void *list_ptr)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  ulong uStack_6;
  
  for (uStack_6 = 0x0; uStack_6 < count; uStack_6 += 0x1)
  {
    uVar6 = (undefined2)((ulong)list_ptr >> 0x10);
    iVar5 = (int)list_ptr;
    if (((*(long *)((int)uStack_6 * 0x4 + iVar5) != 0x0) &&
        (uVar2 = *(undefined4 *)((int)uStack_6 * 0x4 + iVar5),
        iVar4 = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),
                           *(int *)((int)uVar2 + 0xc)), iVar4 != 0x0)) &&
       (puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)uStack_6 * 0x4 + iVar5) +
                 0x50), iVar4 = (*(code *)*puVar1)(), iVar4 != 0x0))
    {
      uVar2 = *(undefined4 *)((int)uStack_6 * 0x4 + iVar5);
      uVar3 = *(undefined4 *)((int)uStack_6 * 0x4 + iVar5);
      *(uint *)((int)uVar3 + 0x1a) = *(uint *)((int)uVar2 + 0x1a) | 0x1;
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)uStack_6 * 0x4 + iVar5) + 0x28)
      ;
      (*(code *)*puVar1)();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Attempts to set a bitmask flag (param_2) on an entity at specific coordinates if it
// matches type constraints. Used for connectivity and search algorithms.

u16 __stdcall16far
Simulator_Map_Try_Flag_Entity_at_Coords_Logic_5be8
          (u32 this_ptr,uint flag,int type,void *coords)
{
  void *pvVar1;
  int iVar2;
  undefined2 uVar3;
  u8 *puVar4;
  void *pvVar5;
  int iStack_e;
  
  puVar4 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,coords,
                      (void *)*(undefined4 *)((int)this_ptr + 0x8));
  if (puVar4 != NULL)
  {
    pvVar5 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puVar4);
    iStack_e = 0x7a;
    if (0x0 < *(int *)((int)(void *)coords + 0x4))
    {
      if (type == 0x7b)
      {
        type = 0x7e;
      }
      else if (type == 0x7c)
      {
        type = 0x7d;
      }
      iStack_e = 0x7f;
    }
    pvVar5 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar5);
    uVar3 = (undefined2)((ulong)pvVar5 >> 0x10);
    pvVar1 = (void *)pvVar5;
    if ((((*(uint *)((int)pvVar1 + 0x1a) & flag) == 0x0) &&
        (((iVar2 = *(int *)((int)pvVar1 + 0xc), iVar2 == iStack_e || (iVar2 == type)) ||
         (iVar2 = search_array_for_value
                            ((int *)_p_StringPropertyTable,
                             (int)((ulong)_p_StringPropertyTable >> 0x10),iVar2),
         iVar2 != 0x0)))) && (*(int *)((int)pvVar1 + 0x12) != 0x7))
    {
      *(uint *)((int)pvVar1 + 0x1a) = *(uint *)((int)pvVar1 + 0x1a) | flag;
      return 0x1;
    }
  }
  return 0x0;
}



// Recursive-style propagation routine that spreads a bitmask flag through connected
// entities (like roads/tubes) by scanning neighbors.

void __stdcall16far
Simulator_Map_Propagate_Entity_Flag_Logic_5cc6
          (u32 arg1,ulong count,u32 list1,u32 list2,int step,uint flag)
{
  undefined4 uVar1;
  u16 uVar2;
  undefined2 uVar3;
  int *unaff_SS;
  int local_14;
  int local_12;
  int local_10;
  ulong uStack_e;
  int local_a;
  int iStack_8;
  int iStack_4;
  
  zero_init_struct_6bytes(&local_a);
  do
  {
    iStack_4 = 0x0;
    for (uStack_e = 0x0; uStack_e < count; uStack_e += 0x1)
    {
      if (*(long *)((int)uStack_e * 0x4 + (int)list2) != 0x0)
      {
        copy_struct_6bytes(&local_a,unaff_SS);
        unpack_3word_struct(&local_a,unaff_SS,&local_14,unaff_SS);
        if (local_14 == step)
        {
          uVar3 = (undefined2)(list1 >> 0x10);
          if ((*(long *)((int)uStack_e * 0x4 + (int)list1) != 0x0) &&
             (uVar1 = *(undefined4 *)((int)uStack_e * 0x4 + (int)list1),
             (*(uint *)((int)uVar1 + 0x1a) & flag) != 0x0))
          {
            iStack_8 = local_12 + -0x1;
            uVar2 = Simulator_Map_Try_Flag_Entity_at_Coords_Logic_5be8
                              (arg1,flag,0x7b,(int *)CONCAT22(unaff_SS,&local_a));
            if (uVar2 != 0x0)
            {
              iStack_4 = 0x1;
            }
            iStack_8 = local_12 + 0x1;
            uVar2 = Simulator_Map_Try_Flag_Entity_at_Coords_Logic_5be8
                              (arg1,flag,0x7b,(int *)CONCAT22(unaff_SS,&local_a));
            if (uVar2 != 0x0)
            {
              iStack_4 = 0x1;
            }
            iStack_8 = local_12;
            local_a = local_10 + -0x1;
            uVar2 = Simulator_Map_Try_Flag_Entity_at_Coords_Logic_5be8
                              (arg1,flag,0x7c,(int *)CONCAT22(unaff_SS,&local_a));
            if (uVar2 != 0x0)
            {
              iStack_4 = 0x1;
            }
            local_a = local_10 + 0x1;
            uVar2 = Simulator_Map_Try_Flag_Entity_at_Coords_Logic_5be8
                              (arg1,flag,0x7c,(int *)CONCAT22(unaff_SS,&local_a));
            if (uVar2 != 0x0)
            {
              iStack_4 = 0x1;
            }
          }
        }
      }
    }
  } while (iStack_4 != 0x0);
  return;
}



// A complex serialization function for a specialized sub-dialog, handling colony
// objects and many state variables.

undefined2 __stdcall16far
UI_SubDialog_Type5E16_Serialize_to_File(void *param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  int iVar3;
  void *handle_wrapper;
  void *unaff_SS;
  char *str;
  undefined4 local_14 [0x2];
  undefined4 local_c;
  undefined4 local_6;
  
  uVar1 = UI_Window_Save_to_File_Logic_16d6(param_1,param_2);
  if (uVar1 != 0x0)
  {
    handle_wrapper = (void *)((ulong)param_1 >> 0x10);
    iVar3 = (int)param_1;
    local_6 = *(undefined4 *)(iVar3 + 0xc);
    str = (char *)((ulong)param_2 >> 0x10);
    iVar2 = file_context_serialize_collection_logic((void *)param_2,str);
    if (iVar2 != 0x0)
    {
      local_14[0x0] = *(undefined4 *)(iVar3 + 0x10);
      iVar2 = file_write_check((long)param_2,local_14,unaff_SS);
      if (iVar2 != 0x0)
      {
        local_c._0_2_ = *(undefined2 *)(iVar3 + 0x18);
        iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
        if (iVar2 != 0x0)
        {
          local_c._0_2_ = *(undefined2 *)(iVar3 + 0x1a);
          iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
          if (iVar2 != 0x0)
          {
            local_c = CONCAT22(local_c._2_2_,*(undefined2 *)(iVar3 + 0x1c));
            iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
            if (iVar2 != 0x0)
            {
              local_c = *(undefined4 *)(iVar3 + 0x1e);
              iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
              if (iVar2 != 0x0)
              {
                local_c._0_2_ = *(undefined2 *)(iVar3 + 0x22);
                iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
                if (iVar2 != 0x0)
                {
                  local_c._0_2_ = *(undefined2 *)(iVar3 + 0x24);
                  iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
                  if (iVar2 != 0x0)
                  {
                    iVar2 = file_write_check((long)param_2,(void *)(iVar3 + 0x26),
                                             handle_wrapper);
                    if (iVar2 != 0x0)
                    {
                      iVar2 = file_write_check((long)param_2,(void *)(iVar3 + 0x14e),
                                               handle_wrapper);
                      if (iVar2 != 0x0)
                      {
                        iVar2 = file_write_check((long)param_2,(void *)(iVar3 + 0x1a2),
                                                 handle_wrapper);
                        if (iVar2 != 0x0)
                        {
                          Colony_Object_Save_to_File_Logic_32e4
                                    ((void *)(void *)*(undefined4 *)(iVar3 + 0x1f6),
                                     (void *)((ulong)*(undefined4 *)(iVar3 + 0x1f6) >>
                                             0x10));
                          iVar2 = file_context_write_string_with_terminator_logic
                                            ((void *)param_2,str);
                          if (iVar2 != 0x0)
                          {
                            local_c = CONCAT22(local_c._2_2_,
                                               *(undefined2 *)(iVar3 + 0x1fe));
                            iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
                            if (iVar2 != 0x0)
                            {
                              local_c = *(undefined4 *)(iVar3 + 0x200);
                              iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
                              if (iVar2 != 0x0)
                              {
                                local_c._0_2_ = *(undefined2 *)(iVar3 + 0x204);
                                iVar2 = file_write_check((long)param_2,&local_c,unaff_SS
                                                        );
                                if (iVar2 != 0x0)
                                {
                                  local_c._0_2_ = *(undefined2 *)(iVar3 + 0x206);
                                  iVar2 = file_write_check((long)param_2,&local_c,
                                                           unaff_SS);
                                  if (iVar2 != 0x0)
                                  {
                                    local_c._0_2_ = *(undefined2 *)(iVar3 + 0x208);
                                    iVar2 = file_write_check((long)param_2,&local_c,
                                                             unaff_SS);
                                    if (iVar2 != 0x0)
                                    {
                                      local_c._0_2_ = *(undefined2 *)(iVar3 + 0x20a);
                                      iVar2 = file_write_check((long)param_2,&local_c,
                                                               unaff_SS);
                                      if (iVar2 != 0x0)
                                      {
                                        local_c._0_2_ = *(undefined2 *)(iVar3 + 0x20c);
                                        iVar2 = file_write_check((long)param_2,&local_c,
                                                                 unaff_SS);
                                        if (iVar2 != 0x0)
                                        {
                                          local_c._0_2_ = *(undefined2 *)(iVar3 + 0x20e)
                                          ;
                                          iVar2 = file_write_check((long)param_2,
                                                                   &local_c,unaff_SS);
                                          if (iVar2 != 0x0)
                                          {
                                            local_c = CONCAT22(local_c._2_2_,
                                                               *(undefined2 *)
                                                                (iVar3 + 0x214));
                                            iVar2 = file_write_check((long)param_2,
                                                                     &local_c,unaff_SS);
                                            if (iVar2 != 0x0)
                                            {
                                              local_c = *(undefined4 *)(iVar3 + 0x216);
                                              iVar2 = file_write_check((long)param_2,
                                                                       &local_c,unaff_SS
                                                                      );
                                              if (iVar2 != 0x0)
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
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// The corresponding deserialization function for the specialized sub-dialog type 5E16.

undefined2 __stdcall16far
UI_SubDialog_Type5E16_Deserialize_from_File(u32 param_1,void *param_2)
{
  undefined2 uVar1;
  u16 uVar2;
  int iVar3;
  void *buffer;
  char *pcVar4;
  char *pcVar5;
  void *in_DX;
  void *pvVar6;
  int iVar7;
  void *handle_wrapper;
  void *unaff_SS;
  void *file_ctx;
  int local_412;
  char local_408 [0x400];
  undefined2 local_8;
  undefined4 local_6;
  
  file_ctx = (void *)param_2;
  pcVar5 = (char *)((ulong)param_2 >> 0x10);
  uVar2 = UI_Window_Load_from_File_Logic_1730(param_1,file_ctx);
  if (uVar2 == 0x0)
  {
    return 0x0;
  }
  local_6 = 0x0;
  iVar3 = file_context_deserialize_collection_logic(file_ctx,pcVar5);
  if (iVar3 != 0x0)
  {
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar7 = (int)param_1;
    *(undefined4 *)(iVar7 + 0xc) = local_6;
    iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x10),handle_wrapper);
    if (((((iVar3 != 0x0) &&
          (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x18),handle_wrapper),
          iVar3 != 0x0)) &&
         (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x1a),handle_wrapper),
         iVar3 != 0x0)) &&
        ((iVar3 = file_read_check((long)param_2,&local_8,unaff_SS), iVar3 != 0x0 &&
         (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x1e),handle_wrapper),
         iVar3 != 0x0)))) &&
       (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x22),handle_wrapper),
       iVar3 != 0x0))
    {
      *(undefined2 *)(iVar7 + 0x1c) = local_8;
      iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x24),handle_wrapper);
      if ((iVar3 != 0x0) &&
         (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x26),handle_wrapper),
         iVar3 != 0x0))
      {
        if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
        {
          buffer = allocate_memory(0x540054);
          iVar3 = file_read_check((long)param_2,buffer,in_DX);
          if (iVar3 == 0x0)
          {
LAB_1038_626a:
            g_LastFileErrorMsgID = (undefined *)0x6d2;
            free_if_not_null(buffer);
            return 0x0;
          }
          local_412 = 0x0;
          do
          {
            iVar3 = file_context_remap_id_by_version_logic
                              ((int)file_ctx,(int)pcVar5,local_412);
            uVar1 = *(undefined2 *)((int)buffer + local_412 * 0x4 + 0x2);
            *(undefined2 *)(iVar7 + iVar3 * 0x4 + 0x14e) =
                 *(undefined2 *)(local_412 * 0x4 + (int)buffer);
            *(undefined2 *)(iVar7 + iVar3 * 0x4 + 0x150) = uVar1;
            local_412 += 0x1;
          } while (local_412 < 0x15);
          iVar3 = file_read_check((long)param_2,buffer,in_DX);
          if (iVar3 == 0x0) goto LAB_1038_626a;
          local_412 = 0x0;
          do
          {
            iVar3 = file_context_remap_id_by_version_logic
                              ((int)file_ctx,(int)pcVar5,local_412);
            pvVar6 = (void *)*(undefined2 *)((int)buffer + local_412 * 0x4 + 0x2);
            *(undefined2 *)(iVar7 + iVar3 * 0x4 + 0x1a2) =
                 *(undefined2 *)(local_412 * 0x4 + (int)buffer);
            *(undefined2 *)(iVar7 + iVar3 * 0x4 + 0x1a4) = pvVar6;
            local_412 += 0x1;
          } while (local_412 < 0x15);
          free_if_not_null(buffer);
          in_DX = pvVar6;
        }
        else
        {
          iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x14e),handle_wrapper);
          if (iVar3 == 0x0)
          {
            g_LastFileErrorMsgID = (undefined *)0x6d2;
            return 0x0;
          }
          iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x1a2),handle_wrapper);
          if (iVar3 == 0x0)
          {
            g_LastFileErrorMsgID = (undefined *)0x6d2;
            return 0x0;
          }
        }
        Colony_Object_Load_from_File_Logic_33f0(*(u32 *)(iVar7 + 0x1f6),file_ctx);
        pcVar4 = local_408;
        file_context_read_null_terminated_string_logic(file_ctx,pcVar5);
        if (pcVar4 != NULL)
        {
          pcVar5 = strdup_allocate(local_408);
          *(undefined2 *)(iVar7 + 0x1fa) = pcVar5;
          *(undefined2 *)(iVar7 + 0x1fc) = in_DX;
          iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x1fe),handle_wrapper);
          if (((((iVar3 != 0x0) &&
                (iVar3 = file_read_check((long)param_2,
                                         (void *)CONCAT11((char)(param_1 >> 0x8) +
                                                          '\x02',(char)param_1),
                                         handle_wrapper), iVar3 != 0x0)) &&
               (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x204),
                                        handle_wrapper), iVar3 != 0x0)) &&
              (((iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x206),
                                         handle_wrapper), iVar3 != 0x0 &&
                (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x208),
                                         handle_wrapper), iVar3 != 0x0)) &&
               ((iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x20a),
                                         handle_wrapper), iVar3 != 0x0 &&
                ((iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x20c),
                                          handle_wrapper), iVar3 != 0x0 &&
                 (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x20e),
                                          handle_wrapper), iVar3 != 0x0)))))))) &&
             (((int)PTR_DAT_1050_0000_1050_0312 < 0x2 ||
              ((iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x214),
                                        handle_wrapper), iVar3 != 0x0 &&
               (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x216),
                                        handle_wrapper), iVar3 != 0x0))))))
          {
            return 0x1;
          }
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
      }
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
}



void * __stdcall16far
UI_Colony_Window_dtor_Scalar_Deleting_64de(void *param_1,byte param_2)
{
  UI_Colony_Window_dtor_Internal_33f8(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for a Resource Change Item (vtable 0x78DE). Initializes internal state
// fields used for tracking deltas between simulator ticks.

void * __stdcall16far Simulator_Resource_Change_Item_ctor_init_6520(void *this_ptr)
{
  astruct_146 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_146 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = 0x0;
  uVar1->field4_0x8 = 0x0;
  uVar1->field5_0xc = 0x0;
  uVar1->field6_0xe = 0x0;
  uVar1->field7_0x12 = 0x0;
  uVar1->field8_0x14 = 0x0;
  uVar1->field9_0x16 = 0x0;
  zero_init_struct_6bytes(&uVar1->field_0x1a);
  uVar1->field16_0x20 = 0x0;
  uVar1->field17_0x24 = 0x0;
  uVar1->field18_0x26 = 0x0;
  uVar1->field19_0x28 = 0x0;
  *(undefined2 *)this_ptr = 0x78de;
  uVar1->field2_0x2 = 0x1038;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Parameterized constructor for a Resource Change Item. Links to a source entity and
// initializes value tracking fields.

u16 * __stdcall16far
Simulator_Resource_Change_Item_ctor_Flavor1_6590
          (void *this_ptr,u16 val_lo,u16 val_hi,u16 type_id,u16 arg5,void *entity_id)
{
  astruct_145 *uVar1;
  void *src;
  void *this_ptr_00;
  void *puVar4;
  void *lVar4;
  
  src = (void *)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_145 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  (&uVar1->field3_0x4)[0x0] = NULL;
  (&uVar1->field3_0x4)[0x1] = NULL;
  uVar1->field5_0x8 = entity_id;
  uVar1->field6_0xc = type_id;
  uVar1->field7_0xe = 0x0;
  uVar1->field8_0x12 = 0x0;
  uVar1->field9_0x14 = 0x0;
  uVar1->field10_0x16 = val_lo;
  uVar1->field11_0x18 = val_hi;
  zero_init_struct_6bytes(&uVar1->field_0x1a);
  (&uVar1->field18_0x20)[0x0] = 0x0;
  (&uVar1->field18_0x20)[0x1] = 0x0;
  uVar1->field20_0x24 = 0x0;
  uVar1->field21_0x26 = arg5;
  uVar1->field22_0x28 = 0x0;
  *(undefined2 *)this_ptr = 0x78de;
  uVar1->field2_0x2 = 0x1038;
  this_ptr_00 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,(u8 *)entity_id);
  puVar4 = UI_Component_Get_Vector_Tracker_Ptr_6d4e(this_ptr_00);
  uVar1->field3_0x4 = (u16 *)puVar4;
  uVar1->field4_0x6 = (int)((ulong)puVar4 >> 0x10);
  copy_struct_6bytes(&uVar1->field_0x1a,src);
                // WARNING: Load size is inaccurate
  lVar4 = (void *)Collection_Find_First_NonZero_Item_Logic
                            ((void *)uVar1->field3_0x4,
                             (u16)((ulong)uVar1->field3_0x4 >> 0x10));
  uVar1->field18_0x20 = (int)(void *)lVar4;
  uVar1->field19_0x22 = (int)((ulong)lVar4 >> 0x10);
  return (u16 *)uVar1;
}
