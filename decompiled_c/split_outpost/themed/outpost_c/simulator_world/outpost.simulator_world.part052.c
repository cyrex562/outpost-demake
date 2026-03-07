/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 52/56
 * Original lines (combined): 110895-112228
 * Boundaries: top-level declarations/definitions only
 */




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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Parameterized constructor for a Resource Change Item that initializes its value based
// on the sum of an item list.

u16 * __stdcall16far
Simulator_Resource_Change_Item_ctor_Flavor2_SumList_666e
          (astruct_144 *param_1,long *param_2,u16 param_3,u8 *param_4)
{
  astruct_144 *uVar1;
  u16 *src;
  void *this_ptr;
  void *puVar4;
  void *lVar5;
  void *lVar4;
  
  src = (u16 *)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_144 *)param_1;
  *(char **)param_1 = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  (&uVar1->field3_0x4)[0x0] = NULL;
  (&uVar1->field3_0x4)[0x1] = NULL;
  uVar1->field5_0x8 = param_4;
  uVar1->field6_0xc = 0x0;
  uVar1->field7_0xe = param_2;
  uVar1->field8_0x12 = 0x0;
  uVar1->field9_0x14 = 0x0;
  uVar1->field11_0x18 = 0x0;
  uVar1->field10_0x16 = 0x0;
  zero_init_struct_6bytes(&uVar1->field_0x1a);
  (&uVar1->field18_0x20)[0x0] = 0x0;
  (&uVar1->field18_0x20)[0x1] = 0x0;
  uVar1->field20_0x24 = 0x0;
  uVar1->field21_0x26 = param_3;
  uVar1->field22_0x28 = 0x0;
  *(undefined2 *)param_1 = 0x78de;
  uVar1->field2_0x2 = 0x1038;
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)param_4);
  puVar4 = UI_Component_Get_Vector_Tracker_Ptr_6d4e(this_ptr);
  uVar1->field3_0x4 = (u16 *)puVar4;
  uVar1->field4_0x6 = (int)((ulong)puVar4 >> 0x10);
  copy_struct_6bytes(&uVar1->field_0x1a,src);
                // WARNING: Load size is inaccurate
  lVar5 = (void *)Collection_Find_First_NonZero_Item_Logic
                            ((void *)uVar1->field3_0x4,
                             (u16)((ulong)uVar1->field3_0x4 >> 0x10));
  uVar1->field18_0x20 = (int)lVar5;
  uVar1->field19_0x22 = (int)((ulong)lVar5 >> 0x10);
  lVar4 = UI_Item_List_Sum_Values_Logic(param_2);
  uVar1->field10_0x16 = (int)lVar4;
  uVar1->field11_0x18 = (int)((ulong)lVar4 >> 0x10);
  return src;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 * __stdcall16far
Simulator_Resource_Change_Item_ctor_Flavor3_675c
          (void *this_ptr,void *amount,u16 type_id,u16 arg4,void *entity_id)
{
  astruct_143 *uVar1;
  void *src;
  void *this_ptr_00;
  void *puVar4;
  void *lVar4;
  
  src = (void *)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_143 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  (&uVar1->field3_0x4)[0x0] = NULL;
  (&uVar1->field3_0x4)[0x1] = NULL;
  uVar1->field5_0x8 = entity_id;
  uVar1->field6_0xc = 0x0;
  uVar1->field7_0xe = 0x0;
  uVar1->field8_0x12 = type_id;
  uVar1->field9_0x14 = 0x0;
  uVar1->field10_0x16 = amount;
  zero_init_struct_6bytes(&uVar1->field_0x1a);
  (&uVar1->field17_0x20)[0x0] = 0x0;
  (&uVar1->field17_0x20)[0x1] = 0x0;
  uVar1->field19_0x24 = 0x0;
  uVar1->field20_0x26 = arg4;
  uVar1->field21_0x28 = 0x0;
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
  uVar1->field17_0x20 = (int)lVar4;
  uVar1->field18_0x22 = (int)((ulong)lVar4 >> 0x10);
  return (u16 *)uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * __stdcall16far
Simulator_Resource_Change_Item_ctor_Flavor4_6838
          (void *this_ptr,void *amount,u16 type_id,u16 arg4,void *entity_id)
{
  astruct_142 *uVar1;
  void *src;
  void *this_ptr_00;
  void *puVar4;
  void *lVar4;
  
  src = (void *)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_142 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  (&uVar1->field3_0x4)[0x0] = NULL;
  (&uVar1->field3_0x4)[0x1] = NULL;
  uVar1->field5_0x8 = entity_id;
  uVar1->field6_0xc = 0x0;
  uVar1->field7_0xe = 0x0;
  uVar1->field8_0x12 = 0x0;
  uVar1->field9_0x14 = type_id;
  uVar1->field10_0x16 = amount;
  zero_init_struct_6bytes(&uVar1->field_0x1a);
  (&uVar1->field17_0x20)[0x0] = 0x0;
  (&uVar1->field17_0x20)[0x1] = 0x0;
  uVar1->field19_0x24 = 0x0;
  uVar1->field20_0x26 = arg4;
  uVar1->field21_0x28 = 0x0;
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
  uVar1->field17_0x20 = (int)(void *)lVar4;
  uVar1->field18_0x22 = (int)((ulong)lVar4 >> 0x10);
  return this_ptr;
}



// Calculates the numeric impact or value of a change item, either by summing sub-lists
// or applying type-specific multipliers.

int __stdcall16far
Simulator_Resource_Change_Item_Calculate_Value_Logic_6984(void *this_ptr)
{
  u16 uVar1;
  astruct_141 *uVar2;
  undefined2 uVar3;
  void *pvVar4;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_141 *)this_ptr;
  if (uVar2->field12_0xc != 0x0)
  {
    uVar1 = Helper_Returns_1_Stub_c3ae();
    return uVar1;
  }
  if (uVar2->field13_0xe != NULL)
  {
    pvVar4 = UI_Item_List_Sum_Values_Logic(uVar2->field13_0xe);
    return (int)(void *)pvVar4;
  }
  if (uVar2->field14_0x12 == 0x0)
  {
    if (uVar2->field15_0x14 == 0x0)
    {
      return 0x0;
    }
    uVar1 = Map_Entity_Type_to_Specific_ID_Helper_c42e(uVar2->field15_0x14);
  }
  else
  {
    uVar1 = Map_Entity_Type_to_Grouping_ID_Logic_c3b4(uVar2->field14_0x12);
  }
  return (int)uVar2->field16_0x16 * uVar1;
}



void __stdcall16far
Simulator_Resource_Change_Item_Clear_Status_Flag_69fe(void *this_ptr)
{
  *(undefined2 *)((int)(void *)this_ptr + 0x28) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes the scheduling of sub-items for a TypeD88E construction manager. Iterates
// through its managed entities, consumes resources from the construction manager's
// list, and schedules future spawns (d180). Manages a turn-based budget at offset 0x24.

void __stdcall16far
UI_Build_Item_TypeD88E_Process_SubItem_Scheduling_6a0e(void *this_ptr)
{
  int iVar1;
  u16 uVar2;
  astruct_140 *uVar4;
  void *src;
  undefined2 unaff_SS;
  long lVar3;
  void *pvVar4;
  long local_10;
  undefined1 local_c [0x6];
  void *pvStack_6;
  
  src = (void *)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_140 *)this_ptr;
  if (uVar4->field33_0x28 == 0x0)
  {
    pvStack_6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,(u8 *)(u8 *)uVar4->field29_0x20);
    uVar4->field30_0x24 = uVar4->field30_0x24 + 0x3c;
    zero_init_struct_6bytes(local_c);
    while( true )
    {
      iVar1 = Simulator_Map_Find_Neighbor_Entity_Logic_6d24
                        (this_ptr,(long *)CONCAT22(unaff_SS,&local_10),
                         (undefined1 *)CONCAT22(unaff_SS,local_c),(int)pvStack_6,
                         (u16)((ulong)pvStack_6 >> 0x10));
      if (iVar1 == 0x0)
      {
        lVar3 = Collection_Find_First_NonZero_Item_Logic
                          ((void *)(void *)uVar4->field4_0x4,
                           (u16)((ulong)uVar4->field4_0x4 >> 0x10));
        if ((int)((ulong)lVar3 >> 0x10) == 0x0 && (int)lVar3 == 0x0)
        {
          pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                             (_p_SimulatorWorldContext,(u8 *)(u8 *)uVar4->field29_0x20);
          Simulator_Process_Resource_Delivery_to_Site_7356(this_ptr,pvVar4);
          return;
        }
        pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvStack_6);
        iVar1 = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),
                           *(int *)((int)pvVar4 + 0xc));
        if (iVar1 != 0x0)
        {
          uVar4->field33_0x28 = 0x1;
          uVar4->field29_0x20 = lVar3;
          return;
        }
        uVar4->field29_0x20 = lVar3;
        pvStack_6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                              (_p_SimulatorWorldContext,*(u8 **)&uVar4->field29_0x20);
      }
      uVar2 = Simulator_Get_Entity_Turn_Cost_by_Type_6e1a((u16)uVar4,(u16)src,&local_10)
      ;
      if ((int)uVar4->field30_0x24 < (int)uVar2) break;
      uVar4->field30_0x24 = uVar4->field30_0x24 - uVar2;
      copy_struct_6bytes(&uVar4->field_0x1a,src);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Wrapper that retrieves entity data from the map using the coordinate sub-list
// associated with global resource 0x2F. Equivalent to 1030:B718.

void __stdcall16far
Simulator_Map_Get_Entity_via_Resource2F_SubList_6b88
          (u16 arg1,u16 arg2,void *coords,void *out_data)
{
  undefined2 unaff_SS;
  undefined4 *puVar1;
  undefined1 local_12 [0x8];
  long lStack_a;
  long lStack_6;
  
  lStack_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  lStack_a = *(long *)((int)lStack_6 + 0x20);
  puVar1 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,coords,lStack_a,
                      (undefined1 *)CONCAT22(unaff_SS,local_12));
  *(undefined4 *)out_data = *puVar1;
  return;
}



// Increments or decrements the X coordinate (offset 0x1A), then fetches the entity at
// the new world location.

void __stdcall16far
Simulator_Map_Shift_Coord_and_Fetch_Entity_X_6bd4
          (void *this_ptr,void *coords,void *out_data,int delta)
{
  u16 uStack_4;
  
  copy_struct_6bytes((void *)coords,(void *)((ulong)coords >> 0x10));
  if (delta < 0x0)
  {
    uStack_4 = *(int *)coords - 0x1;
  }
  else
  {
    uStack_4 = *(int *)coords + 0x1;
  }
  *(u16 *)coords = uStack_4;
  Simulator_Map_Get_Entity_via_Resource2F_SubList_6b88
            ((u16)this_ptr,(u16)((ulong)this_ptr >> 0x10),coords,out_data);
  return;
}
