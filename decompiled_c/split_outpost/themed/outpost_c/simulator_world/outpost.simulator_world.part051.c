/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 51/56
 * Original lines (combined): 109918-110894
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through a managed entity list and sums the production value (offset 0x8C)
// for all active or under-construction buildings.

long __stdcall16far Simulator_Sum_Entity_List_Production_4b40(void *this_ptr)
{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  astruct_156 *uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  ulong uVar6;
  u8 *puVar7;
  void *this_ptr_00;
  void *uVar9;
  long lStack_1e;
  ulong uStack_e;
  long lStack_6;
  
  lStack_6 = 0x0;
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_156 *)this_ptr;
  if (uVar4->field12_0xc == NULL)
  {
    uVar6 = 0x0;
  }
  else
  {
    puVar2 = (undefined2 *)((int)*uVar4->field12_0xc + 0x10);
    uVar6 = (*(code *)*puVar2)();
  }
  for (uStack_e = 0x0; uStack_e < uVar6; uStack_e += 0x1)
  {
    puVar2 = (undefined2 *)((int)*uVar4->field12_0xc + 0x4);
    puVar7 = (u8 *)(*(code *)*puVar2)(unaff_CS,uVar4->field12_0xc,uStack_e);
    if (puVar7 != NULL)
    {
      this_ptr_00 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                              (_p_SimulatorWorldContext,(u8 *)puVar7);
      unaff_CS = 0x1030;
      uVar9 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr_00);
      uVar9._2_2_ = (undefined2)((ulong)uVar9 >> 0x10);
      iVar1 = *(int *)((int)(void *)uVar9 + 0x12);
      if ((iVar1 == 0x4) || (iVar1 == 0x5))
      {
        uVar3 = *(undefined4 *)((int)(void *)uVar9 + 0x14);
        lStack_1e = *(long *)((int)uVar3 + 0x8c);
      }
      else
      {
        lStack_1e = 0x0;
      }
      lStack_6 += lStack_1e;
    }
  }
  return lStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through the colony's entities and counts those belonging to the medical
// category (group 0xE). Returns the total medical capacity (count * 25).

int __stdcall16far Simulator_Calculate_Total_Medical_Capacity_4c1a(astruct_155 *param_1)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  u8 *packed_id;
  u16 category;
  int iVar4;
  uint uVar5;
  ulong in_EDX;
  astruct_155 *uVar7;
  undefined2 uVar6;
  undefined2 unaff_CS;
  void *this_ptr;
  u32 *puVar7;
  ulong uStack_e;
  undefined4 uStack_a;
  
  iVar2 = 0x0;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar7 = (astruct_155 *)param_1;
  puVar7 = uVar7->field12_0xc;
  puVar1 = (undefined2 *)((int)*uVar7->field12_0xc + 0x10);
  uVar3 = (*(code *)*puVar1)();
  uStack_a = CONCAT22((int)in_EDX,uVar3);
  for (uStack_e = 0x0; uVar5 = (uint)in_EDX, uStack_e < uStack_a; uStack_e += 0x1)
  {
    puVar1 = (undefined2 *)((int)*uVar7->field12_0xc + 0x4);
    packed_id = (u8 *)(*(code *)*puVar1)(unaff_CS,uVar7->field12_0xc,uStack_e,puVar7);
    in_EDX = (ulong)(uVar5 | (uint)packed_id);
    if ((uVar5 | (uint)packed_id) != 0x0)
    {
      this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,packed_id);
      in_EDX = (ulong)this_ptr >> 0x10;
      category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
      unaff_CS = 0x1008;
      iVar4 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),category);
      if (iVar4 != 0x0)
      {
        iVar2 += 0x1;
      }
    }
  }
  return iVar2 * 0x19;
}



// Wrapper that retrieves the current total resource sum for the specified colony.

long __stdcall16far Simulator_Get_Colony_Total_Resource_Sum_4cba(void *colony_ptr)
{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = *(undefined4 *)((int)(void *)colony_ptr + 0x1f6);
  lVar2 = Colony_Calculate_Sum_All_Resources_38b8
                    ((int)uVar1,(u16)((ulong)uVar1 >> 0x10));
  return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Instantiates a UI Production Item and populates it by scanning the colony's world
// entities. Triggers virtual calls (offset 0xC) for entities whose type matches the
// provided list (param_2) and are active (state 5).

u32 * __stdcall16far
Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
          (astruct_153 *param_1,undefined4 *param_2)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  u16 uVar4;
  int in_DX;
  u32 *puVar5;
  astruct_153 *uVar5;
  undefined2 unaff_SI;
  undefined2 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  u8 *puVar9;
  void *pvVar10;
  int iStack_1e;
  ulong uStack_e;
  undefined4 uStack_6;
  
  pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x18));
  if (in_DX == 0x0 && pvVar2 == NULL)
  {
    puVar3 = NULL;
    puVar5 = NULL;
  }
  else
  {
    puVar7 = UI_Production_Item_Base_ctor_init_1cd8
                       ((void *)CONCAT22(in_DX,pvVar2),(void *)0x5,(void *)0x5);
    puVar5 = (u32 *)((ulong)puVar7 >> 0x10);
    puVar3 = (undefined4 *)puVar7;
  }
  uStack_6 = (undefined4 *)CONCAT22(puVar5,puVar3);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar5 = (astruct_153 *)param_1;
  if (uVar5->field12_0xc == NULL)
  {
    uVar8 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*uVar5->field12_0xc + 0x10);
    uVar8 = (*(code *)*puVar1)();
  }
  uStack_e = 0x0;
  do
  {
    if (uVar8 <= uStack_e)
    {
      return puVar5;
    }
    puVar1 = (undefined2 *)((int)*uVar5->field12_0xc + 0x4);
    puVar9 = (u8 *)(*(code *)*puVar1)();
    if (puVar9 != NULL)
    {
      pvVar10 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,(u8 *)puVar9);
      uVar4 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar10);
      iStack_1e = 0x0;
      while( true )
      {
        if (*(int *)((undefined4 *)param_2 + 0x1) <= iStack_1e) break;
        if (*(u16 *)((int)*param_2 + iStack_1e * 0x2) == uVar4)
        {
          pvVar10 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar10);
          if (*(int *)((int)(void *)pvVar10 + 0x12) == 0x5)
          {
            puVar1 = (undefined2 *)((int)*uStack_6 + 0xc);
            (*(code *)*puVar1)();
          }
          break;
        }
        iStack_1e += 0x1;
      }
    }
    uStack_e += 0x1;
  } while( true );
}



// Instantiates a UI Production Item and populates it by scanning the colony's world
// entities. Triggers virtual calls (offset 0xC) for all entities whose type matches the
// provided list.

u32 * __stdcall16far
Colony_Batch_Init_Production_Items_General_Logic_4e78
          (astruct_152 *param_1,undefined4 *param_2)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  u16 uVar4;
  int in_DX;
  u32 *puVar5;
  astruct_152 *uVar5;
  undefined2 unaff_SI;
  undefined2 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  void *this_ptr;
  int iStack_1a;
  ulong uStack_e;
  undefined4 uStack_6;
  
  pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x18));
  if (in_DX == 0x0 && pvVar2 == NULL)
  {
    puVar3 = NULL;
    puVar5 = NULL;
  }
  else
  {
    puVar7 = UI_Production_Item_Base_ctor_init_1cd8
                       ((void *)CONCAT22(in_DX,pvVar2),(void *)0x5,(void *)0x5);
    puVar5 = (u32 *)((ulong)puVar7 >> 0x10);
    puVar3 = (undefined4 *)puVar7;
  }
  uStack_6 = (undefined4 *)CONCAT22(puVar5,puVar3);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar5 = (astruct_152 *)param_1;
  if (uVar5->field12_0xc == NULL)
  {
    uVar8 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*uVar5->field12_0xc + 0x10);
    uVar8 = (*(code *)*puVar1)();
  }
  uStack_e = 0x0;
  do
  {
    if (uVar8 <= uStack_e)
    {
      return puVar5;
    }
    this_ptr = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uVar5->field12_0xc);
    if (this_ptr != NULL)
    {
      uVar4 = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
      iStack_1a = 0x0;
      while( true )
      {
        if (*(int *)((undefined4 *)param_2 + 0x1) <= iStack_1a) break;
        if (*(u16 *)((int)*param_2 + iStack_1a * 0x2) == uVar4)
        {
          puVar1 = (undefined2 *)((int)*uStack_6 + 0xc);
          (*(code *)*puVar1)();
          break;
        }
        iStack_1a += 0x1;
      }
    }
    uStack_e += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through the colony's world entities and returns 1 if any entity belongs to
// the specified type group (param_2).

u16 __stdcall16far
Colony_Check_Any_Entity_in_Group_Logic_4f54(u32 colony_ptr,int group_id)
{
  undefined2 *puVar1;
  u16 category;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *this_ptr;
  ulong uStack_a;
  
  uVar4 = (undefined2)(colony_ptr >> 0x10);
  iVar3 = (int)colony_ptr;
  if (*(long *)(iVar3 + 0xc) == 0x0)
  {
    uVar5 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0xc) + 0x10);
    uVar5 = (*(code *)*puVar1)();
  }
  uStack_a = 0x0;
  do
  {
    if (uVar5 <= uStack_a)
    {
      return 0x0;
    }
    this_ptr = UI_Component_Get_Simulator_Object_via_PackedID_1d58
                         ((void *)*(undefined4 *)(iVar3 + 0xc));
    if ((int)((ulong)this_ptr >> 0x10) != 0x0 || (void *)this_ptr != NULL)
    {
      category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),category);
      if (iVar2 != 0x0)
      {
        return 0x1;
      }
    }
    uStack_a += 0x1;
  } while( true );
}



// Iterates through the colony's world entities and returns 1 if any entity's type
// matches the provided ID.

u16 __stdcall16far
Colony_Check_Any_Entity_Matches_Type_Logic_4fd8(void *colony_ptr,int type_id)
{
  undefined2 *puVar1;
  u16 uVar2;
  astruct_151 *uVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *this_ptr;
  ulong uStack_a;
  
  uVar4 = (undefined2)((ulong)colony_ptr >> 0x10);
  uVar3 = (astruct_151 *)colony_ptr;
  if (uVar3->field12_0xc == NULL)
  {
    uVar5 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*uVar3->field12_0xc + 0x10);
    uVar5 = (*(code *)*puVar1)();
  }
  uStack_a = 0x0;
  do
  {
    if (uVar5 <= uStack_a)
    {
      return 0x0;
    }
    this_ptr = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uVar3->field12_0xc);
    if ((int)((ulong)this_ptr >> 0x10) != 0x0 || (void *)this_ptr != NULL)
    {
      uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
      if (uVar2 == type_id)
      {
        return 0x1;
      }
    }
    uStack_a += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Returns the total count of world entities in the colony that belong to the specified
// type group.

long __stdcall16far
Colony_Count_Entities_in_Group_Logic_5050(void *colony_ptr,int group_id)
{
  undefined2 *puVar1;
  u16 category;
  int iVar2;
  astruct_150 *uVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *this_ptr;
  ulong uStack_e;
  long lStack_6;
  
  lStack_6 = 0x0;
  uVar4 = (undefined2)((ulong)colony_ptr >> 0x10);
  uVar3 = (astruct_150 *)colony_ptr;
  if (uVar3->field12_0xc == NULL)
  {
    uVar5 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*uVar3->field12_0xc + 0x10);
    uVar5 = (*(code *)*puVar1)();
  }
  for (uStack_e = 0x0; uStack_e < uVar5; uStack_e += 0x1)
  {
    this_ptr = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uVar3->field12_0xc);
    if ((int)((ulong)this_ptr >> 0x10) != 0x0 || (void *)this_ptr != NULL)
    {
      category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),category);
      if (iVar2 != 0x0)
      {
        lStack_6 += 0x1;
      }
    }
  }
  return lStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through the colony's managed entity IDs and returns the count of entities
// that match the specified type group and are in the Active state (5).

long __stdcall16far
Colony_Count_Active_Entities_of_Type_Group_50e0(void *colony_ptr,int group_id)
{
  undefined2 *puVar1;
  u16 category;
  int iVar2;
  astruct_149 *uVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uStack_e;
  long lStack_6;
  
  lStack_6 = 0x0;
  uVar4 = (undefined2)((ulong)colony_ptr >> 0x10);
  uVar3 = (astruct_149 *)colony_ptr;
  if (uVar3->field12_0xc == NULL)
  {
    uVar5 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*uVar3->field12_0xc + 0x10);
    uVar5 = (*(code *)*puVar1)();
  }
  for (uStack_e = 0x0; uStack_e < uVar5; uStack_e += 0x1)
  {
    pvVar6 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uVar3->field12_0xc);
    if (pvVar6 != NULL)
    {
      category = UI_Component_Get_Entity_Type_ID_6fa0(pvVar6);
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),category);
      if (iVar2 != 0x0)
      {
        pvVar6 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar6);
        if (*(int *)((int)(void *)pvVar6 + 0x12) == 0x5)
        {
          lStack_6 += 0x1;
        }
      }
    }
  }
  return lStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Per-turn routine that distributes available colony resources to entities with pending
// requirements. Iterates through entities and matches their capacities against
// colony-wide deficits (calculated via 540A).

void __stdcall16far Colony_Process_Resource_Distribution_Tick_518c(void *colony_ptr)
{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_CS;
  ulong uVar9;
  u8 *puVar10;
  void *pvVar11;
  int iStack_22;
  long lStack_20;
  undefined4 uStack_1c;
  ulong uStack_a;
  
  uVar7 = (undefined2)((ulong)colony_ptr >> 0x10);
  iVar4 = (int)colony_ptr;
  if (*(int *)(iVar4 + 0x206) == 0x0)
  {
    if (*(long *)(iVar4 + 0xc) == 0x0)
    {
      uVar9 = 0x0;
    }
    else
    {
      puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar4 + 0xc) + 0x10);
      uVar9 = (*(code *)*puVar2)();
    }
    for (uStack_a = 0x0; uStack_a < uVar9; uStack_a += 0x1)
    {
      puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar4 + 0xc) + 0x4);
      puVar10 = (u8 *)(*(code *)*puVar2)(unaff_CS,(int)*(undefined4 *)(iVar4 + 0xc),
                                         (int)((ulong)*(undefined4 *)(iVar4 + 0xc) >>
                                              0x10),(int)uStack_a,
                                         (int)(uStack_a >> 0x10));
      if (puVar10 != NULL)
      {
        pvVar11 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,(u8 *)puVar10);
        unaff_CS = 0x1030;
        pvVar11 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar11);
        uVar8 = (undefined2)((ulong)pvVar11 >> 0x10);
        iVar5 = *(int *)((int)pvVar11 + 0x12);
        uStack_1c = (long *)CONCAT22(uVar8,(long *)((int)pvVar11 + 0x14));
        lStack_20 = 0x0;
        if ((iVar5 == 0x4) || (iVar5 == 0x5))
        {
          lStack_20 = *uStack_1c;
        }
        if (lStack_20 != 0x0)
        {
          for (iStack_22 = 0x11; iStack_22 < 0x25; iStack_22 += 0x1)
          {
            if (((*(int *)(iVar4 + 0x204) == 0x0) || (iStack_22 == 0x23)) ||
               (iStack_22 == 0x24))
            {
              pvVar11 = Colony_Calc_Resource_Deficit_at_26_540a(colony_ptr,iStack_22);
              uVar3 = (uint)((ulong)pvVar11 >> 0x10);
              iVar5 = iStack_22 * 0x4;
              uVar8 = (undefined2)((ulong)lStack_20 >> 0x10);
              iVar6 = (int)lStack_20;
              uVar1 = *(uint *)(iVar5 + iVar6 + 0x2);
              if ((uVar1 <= uVar3) &&
                 ((uVar1 < uVar3 || (*(uint *)(iVar5 + iVar6) <= (uint)pvVar11))))
              {
                Colony_Add_to_Secondary_Resource_Tracker_5770
                          (colony_ptr,*(long *)(iVar5 + iVar6),iStack_22);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Deducts a resource amount from the colony's global trackers and then propagates the
// consumption to individual entities' internal lists to maintain synchronization.

void __stdcall16far
Colony_Consume_Resource_Globally_52b8(void *colony_ptr,ulong amount,int type_id)
{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined2 unaff_CS;
  ulong uVar4;
  u8 *puVar5;
  void *this_ptr;
  void *pvVar6;
  void *pvVar7;
  undefined2 uVar8;
  u16 key;
  int iStack_1a;
  int iStack_18;
  ulong uStack_e;
  
  pvVar7 = (void *)colony_ptr;
  uVar8 = (undefined2)((ulong)colony_ptr >> 0x10);
  Colony_Add_to_Resource_Tracker_5694
            (colony_ptr,
             CONCAT22(-(amount._2_2_ + (uint)((int)amount != 0x0)),-(int)amount),type_id
            );
  if (type_id != 0x24)
  {
    if (*(long *)((int)pvVar7 + 0xc) == 0x0)
    {
      uVar4 = 0x0;
    }
    else
    {
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)pvVar7 + 0xc) + 0x10);
      uVar4 = (*(code *)*puVar1)();
    }
    for (uStack_e = 0x0; uStack_e < uVar4; uStack_e += 0x1)
    {
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)pvVar7 + 0xc) + 0x4);
      puVar5 = (u8 *)(*(code *)*puVar1)(unaff_CS,(int)*(undefined4 *)((int)pvVar7 + 0xc)
                                        ,(int)((ulong)*(undefined4 *)((int)pvVar7 + 0xc)
                                              >> 0x10),(int)uStack_e,
                                        (int)(uStack_e >> 0x10));
      if (puVar5 != NULL)
      {
        key = type_id;
        this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                             (_p_SimulatorWorldContext,(u8 *)puVar5);
        unaff_CS = 0x1030;
        pvVar6 = UI_Component_Find_Item_in_List_22_Logic_7c28(this_ptr,key);
        iVar3 = (int)((ulong)pvVar6 >> 0x10);
        pvVar2 = (void *)pvVar6;
        if (iVar3 != 0x0 || pvVar2 != NULL)
        {
          if (pvVar6 < amount)
          {
            amount -= (long)pvVar6;
            iStack_1a = 0x0;
            iStack_18 = 0x0;
          }
          else
          {
            iStack_1a = (int)pvVar2 - (int)(void *)amount;
            iStack_18 = (iVar3 - amount._2_2_) - (uint)(pvVar2 < (void *)amount);
            amount = 0x0;
          }
          unaff_CS = 0x1030;
          UI_Component_Set_List_Value_at_22_Logic_7d1c
                    ((void *)this_ptr,(int)((ulong)this_ptr >> 0x10),iStack_1a,iStack_18
                     ,type_id);
          if (amount == 0x0)
          {
            return;
          }
        }
      }
    }
  }
  return;
}



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
