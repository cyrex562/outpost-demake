/*
 * Source: outpost.c
 * Chunk: 95/117
 * Original lines: 108292-109482
 * Boundaries: top-level declarations/definitions only
 */




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



// Initializes a sub-item list node for the colony window and checks if the linked
// building is currently active.

void __stdcall16far
UI_Colony_Window_Init_SubItem_and_Check_Active_354a(astruct_159 *param_1)
{
  void *pvVar1;
  int in_DX;
  astruct_159 *uVar1;
  undefined2 uVar2;
  void *puVar3;
  undefined2 in_stack_0000fffa;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_159 *)param_1;
  if (uVar1->field538_0x21a == NULL)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
    if (in_DX == 0x0 && pvVar1 == NULL)
    {
      uVar1->field538_0x21a = NULL;
    }
    else
    {
      puVar3 = UI_Build_Item_List_Node_Set_Building_9ecc
                         ((void *)CONCAT22(in_DX,pvVar1),param_1);
      *(void **)&uVar1->field538_0x21a = (void *)puVar3;
      *(undefined2 *)((int)&uVar1->field538_0x21a + 0x2) = (int)((ulong)puVar3 >> 0x10);
    }
  }
  UI_Build_Item_Check_Building_Active_9ef2(uVar1->field538_0x21a);
  return;
}



// Initializes a sub-item list node and triggers the search/initialization of its
// display string.

void __stdcall16far
UI_Colony_Window_Init_SubItem_and_Resolve_String_35a8(void *this_ptr,u16 type_id)
{
  void *pvVar1;
  int in_DX;
  int iVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 in_stack_0000fffa;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  if (*(long *)(iVar2 + 0x21a) == 0x0)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
    if (in_DX == 0x0 && pvVar1 == NULL)
    {
      *(undefined4 *)(iVar2 + 0x21a) = 0x0;
    }
    else
    {
      pvVar4 = UI_Build_Item_List_Node_Set_Building_9ecc
                         ((void *)CONCAT22(in_DX,pvVar1),this_ptr);
      *(undefined2 *)(iVar2 + 0x21a) = (int)pvVar4;
      *(undefined2 *)(iVar2 + 0x21c) = (int)((ulong)pvVar4 >> 0x10);
    }
  }
  UI_Build_Item_Find_String_and_Init_9f40
            ((void *)*(undefined4 *)(iVar2 + 0x21a),type_id);
  return;
}



void __stdcall16far UI_Colony_Window_Free_SubItem_Logic_3608(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ptr + 0x21a));
  *(undefined4 *)((int)this_ptr + 0x21a) = 0x0;
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



// Increments or decrements population for a colony by either spawning new sub-entities
// (via 7C50 or CC44) or removing existing ones (via 6E9C or CE72). Interfaces with
// TypeD88E construction managers.

void __stdcall16far
Colony_Adjust_SubEntity_Population_Logic_387e
          (void *this_ptr,int old_pop,int new_pop,void *arg4)
{
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  astruct_158 *uVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *pvVar6;
  int iStack_16;
  int iStack_c;
  ulong uStack_a;
  
  if (old_pop != new_pop)
  {
    uVar3 = (astruct_158 *)this_ptr;
    uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
    if (old_pop < new_pop)
    {
      iStack_c = new_pop - old_pop;
      if ((uVar3->field525_0x210 == 0x0) ||
         (*(long *)((int)uVar3->field525_0x210 + 0xa) == 0x0))
      {
        if (uVar3->field12_0xc == NULL)
        {
          uVar5 = 0x0;
        }
        else
        {
          puVar1 = (undefined2 *)((int)*uVar3->field12_0xc + 0x10);
          uVar5 = (*(code *)*puVar1)();
        }
        for (uStack_a = 0x0; uStack_a < uVar5; uStack_a += 0x1)
        {
          pvVar6 = UI_Component_Get_Simulator_Object_via_PackedID_1d58
                             (uVar3->field12_0xc);
          if ((pvVar6 != NULL) &&
             (uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar6), uVar2 == 0xb))
          {
            UI_Component_Batch_Spawn_SubEntities_Logic_7c50
                      ((void *)pvVar6,(int)((ulong)pvVar6 >> 0x10),iStack_c,
                       iStack_c >> 0xf,0x4);
            return;
          }
        }
      }
      else
      {
        uVar5 = *(ulong *)((int)uVar3->field525_0x210 + 0xa);
        for (uStack_a = 0x0; uStack_a < uVar5; uStack_a += 0x1)
        {
          pvVar6 = UI_Managed_List_Get_Item_at_Index_1312
                             ((void *)uVar3->field525_0x210,uStack_a);
          iVar3 = (int)((ulong)pvVar6 >> 0x10);
          if (((iVar3 != 0x0 || (void *)pvVar6 != NULL) &&
              (iVar3 = UI_Build_Item_TypeD88E_Remove_and_Reinit_SubItem_cc44
                                 ((void *)pvVar6,iVar3,iStack_c,arg4,0x4), iVar3 != 0x0)
              ) && (iStack_c -= iVar3, iStack_c == 0x0))
          {
            return;
          }
        }
      }
    }
    else
    {
      iStack_16 = old_pop - new_pop;
      if ((uVar3->field525_0x210 == 0x0) ||
         (*(long *)((int)uVar3->field525_0x210 + 0xa) == 0x0))
      {
        if (uVar3->field12_0xc == NULL)
        {
          uVar5 = 0x0;
        }
        else
        {
          puVar1 = (undefined2 *)((int)*uVar3->field12_0xc + 0x10);
          uVar5 = (*(code *)*puVar1)();
        }
        for (uStack_a = 0x0; uStack_a < uVar5; uStack_a += 0x1)
        {
          pvVar6 = UI_Component_Get_Simulator_Object_via_PackedID_1d58
                             (uVar3->field12_0xc);
          if ((pvVar6 != NULL) &&
             (uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar6), uVar2 == 0xb))
          {
            UI_Component_Remove_Entities_of_Type_Logic_6e9c(pvVar6,(long)iStack_16,0x4);
            return;
          }
        }
      }
      else
      {
        uVar5 = *(ulong *)((int)uVar3->field525_0x210 + 0xa);
        for (uStack_a = 0x0; uStack_a < uVar5; uStack_a += 0x1)
        {
          pvVar6 = UI_Managed_List_Get_Item_at_Index_1312
                             ((void *)uVar3->field525_0x210,uStack_a);
          iVar3 = (int)((ulong)pvVar6 >> 0x10);
          if (iVar3 != 0x0 || (void *)pvVar6 != NULL)
          {
            iVar3 = UI_Build_Item_TypeD88E_Allocate_SubItem_Slots_ce72
                              ((void *)pvVar6,iVar3,iStack_16,arg4,0x4);
            iStack_16 -= iVar3;
            if (iStack_16 == 0x0)
            {
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// Aggregates the count of free sub-item slots across all managed construction hub
// entities (Group 0x1E) in the colony.

int __stdcall16far Colony_Count_Total_Free_SubItem_Slots_3aa6(void *this_ptr)
{
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  astruct_157 *uVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uStack_c;
  int iStack_4;
  
  iStack_4 = 0x0;
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_157 *)this_ptr;
  if ((uVar3->field525_0x210 == 0x0) ||
     (*(long *)((int)uVar3->field525_0x210 + 0xa) == 0x0))
  {
    if (uVar3->field12_0xc == NULL)
    {
      uVar5 = 0x0;
    }
    else
    {
      puVar1 = (undefined2 *)((int)*uVar3->field12_0xc + 0x10);
      uVar5 = (*(code *)*puVar1)();
    }
    for (uStack_c = 0x0; uStack_c < uVar5; uStack_c += 0x1)
    {
      pvVar6 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uVar3->field12_0xc);
      if ((pvVar6 != NULL) &&
         (uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar6), uVar2 == 0xb))
      {
        iVar3 = UI_Component_Count_SubEntities_of_Type_6b86(pvVar6,0x4);
        return iVar3;
      }
    }
  }
  else
  {
    uVar5 = *(ulong *)((int)uVar3->field525_0x210 + 0xa);
    for (uStack_c = 0x0; uStack_c < uVar5; uStack_c += 0x1)
    {
      pvVar6 = UI_Managed_List_Get_Item_at_Index_1312
                         ((void *)uVar3->field525_0x210,uStack_c);
      uVar2 = (u16)((ulong)pvVar6 >> 0x10);
      if (uVar2 != 0x0 || (int)pvVar6 != 0x0)
      {
        iVar3 = UI_Build_Item_TypeD88E_Count_Free_Slots_by_ID_ce2e
                          ((int)pvVar6,uVar2,0x4);
        iStack_4 += iVar3;
      }
    }
  }
  return iStack_4;
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
