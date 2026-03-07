/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 44/56
 * Original lines (combined): 101851-104064
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_Schedule_SubEntity_Spawns_cac2(void *param_1)
{
  int type_id;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  void *pvVar5;
  u8 *puVar6;
  void *pvVar7;
  ulong local_22;
  int local_1e;
  int local_1c;
  ulong local_1a;
  
  UI_Build_Item_OnTick_State4_Update_be9e(param_1);
  if ((*(int *)((int)(void *)param_1 + 0x12) == 0x5) &&
     (PTR_DAT_1050_0000_1050_5812 == NULL))
  {
    PTR_DAT_1050_0000_1050_5812 = (undefined *)0x1;
    pvVar5 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    uVar1 = *(undefined4 *)((int)(void *)pvVar5 + 0x2e);
    pvVar5 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,
                        (u8 *)(u8 *)*(undefined4 *)((int)uVar1 + 0x10));
    uVar4 = (undefined2)((ulong)pvVar5 >> 0x10);
    puVar2 = (undefined4 *)*(undefined4 *)((int)(void *)pvVar5 + 0x1e);
    puVar3 = (undefined2 *)((int)*puVar2 + 0x10);
    local_1a = (*(code *)*puVar3)(0x1028,(undefined4 *)puVar2,
                                  *(undefined2 *)((int)(void *)pvVar5 + 0x20));
    local_1c = 0x0;
    local_1e = UI_Build_Item_TypeD88E_Count_Empty_Slots_d144(param_1);
    local_22 = 0x0;
    while ((local_22 < local_1a && (local_1e != 0x0)))
    {
      puVar3 = (undefined2 *)((int)*puVar2 + 0x4);
      puVar6 = (u8 *)(*(code *)*puVar3)(0x1028,(undefined4 *)puVar2,
                                        (int)((ulong)puVar2 >> 0x10),(int)local_22,
                                        (int)(local_22 >> 0x10));
      if (puVar6 != NULL)
      {
        pvVar7 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)puVar6);
        type_id = *(int *)((int)(void *)pvVar7 + 0xc);
        if ((0x0 < type_id) && (!SBORROW2(type_id,0x1)))
        {
          if (type_id != 0x3 && 0x0 < type_id + -0x2)
          {
            if (type_id != 0x4) goto LAB_1030_cbbc;
            local_1c += 0x1;
          }
          UI_Component_Remove_Entities_of_Type_Logic_6e9c(pvVar5,0x1,type_id);
          UI_Build_Item_TypeD88E_Schedule_SubItem_Spawn_d180(param_1,type_id);
          local_1e += -0x1;
        }
      }
LAB_1030_cbbc:
      local_22 += 0x1;
    }
    while (local_1c < 0x4)
    {
      UI_Build_Item_TypeD88E_Schedule_SubItem_Spawn_d180(param_1,0x4);
      local_1c = local_1c + 0x1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Extremely complex routine that removes a sub-item matching an ID and linked object.
// If in state 4, performs a deep cleanup and triggers a re-initialization sequence with
// the planetary hub (Type 0x4000001).

int __stdcall16far
UI_Build_Item_TypeD88E_Remove_and_Reinit_SubItem_cc44
          (void *param_1,undefined2 param_2,int param_3,undefined4 param_4,u16 param_5)
{
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  u32 *puVar7;
  astruct_176 *iVar5;
  astruct_177 *iVar6;
  undefined2 uVar8;
  void *this_ptr;
  undefined4 *puVar9;
  undefined1 local_32 [0x8];
  undefined4 *puStack_2a;
  ulong uStack_26;
  ulong uStack_22;
  undefined4 uStack_1e;
  undefined4 uStack_1a;
  void *pvStack_16;
  undefined2 uStack_14;
  void *pvStack_12;
  undefined4 uStack_e;
  int iStack_a;
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 0x0;
  uStack_8 = *(undefined4 *)((int)param_4 + 0x4);
  iStack_a = 0x0;
  do
  {
    iVar2 = iStack_a;
    if (0x9 < iStack_a)
    {
      return iStack_4;
    }
    if (((*(int *)((int)param_1 + iStack_a * 0xc + 0x28) == (int)uStack_8) &&
        (*(int *)((int)param_1 + iStack_a * 0xc + 0x2a) == uStack_8._2_2_)) &&
       (*(u16 *)((int)param_1 + iStack_a * 0xc + 0x24) == param_5))
    {
      if (*(int *)((int)param_1 + iStack_a * 0xc + 0x26) == 0x4)
      {
        this_ptr = UI_Build_Item_Get_Construction_Manager_Logic_b58e
                             ((void *)CONCAT22(param_2,param_1));
        uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
        uStack_e = this_ptr;
        UI_Component_Remove_Entities_of_Type_Logic_6e9c
                  (this_ptr,0x1,*(int *)((int)param_1 + iVar2 * 0xc + 0x24));
        *(undefined4 *)((int)param_1 + iVar2 * 0xc + 0x20) = 0x0;
        *(undefined2 *)((int)param_1 + iVar2 * 0xc + 0x24) = 0x0;
        *(undefined2 *)((int)param_1 + iVar2 * 0xc + 0x26) = 0x0;
        puStack_2a = NULL;
        pvStack_12 = NULL;
        uRam00000006 = param_5;
        uRam0000000a = 0x1;
        uVar3 = Map_Entity_Type_to_Grouping_ID_Logic_c3b4(param_5);
        *(u16 *)((int)(void *)pvStack_12 + 0xc) = uVar3;
        pvVar4 = get_array_element_6bytes
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10));
        pvStack_16 = pvVar4;
        uStack_14 = uVar6;
        puVar9 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)0x1);
        puVar5 = (undefined4 *)puVar9;
        uVar8 = 0x1038;
        uStack_1a = puVar9;
        puVar7 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                           (puVar9,pvVar4,uVar6);
        uStack_1e = (undefined4 *)CONCAT22(puVar7,puVar5);
        puVar1 = (undefined2 *)((int)*uStack_1e + 0x10);
        uStack_22 = (*(code *)*puVar1)(0x1038,puVar5,puVar7);
        for (uStack_26 = 0x0; uStack_26 < uStack_22; uStack_26 += 0x1)
        {
          puVar9 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_1e);
          iVar2 = (int)((ulong)puVar9 >> 0x10);
          if (iVar2 != 0x0 || (undefined4 *)puVar9 != NULL)
          {
            puVar1 = (undefined2 *)((int)*puVar9 + 0x40);
            iVar2 = (*(code *)*puVar1)(0x1038,(undefined4 *)puVar9,iVar2,local_32);
            if (iVar2 == 0x0)
            {
              uVar8 = 0x1028;
              UI_Item_List_Upsert_Item_by_Metadata_Logic_6408(puVar9,pvStack_12);
              break;
            }
          }
        }
        puStack_2a = uStack_1e;
        if (uStack_1e != NULL)
        {
          (*(code *)*(undefined2 *)(undefined2 *)*uStack_1e)
                    (uVar8,(undefined4 *)uStack_1e,(int)((ulong)uStack_1e >> 0x10),0x1);
        }
      }
      else
      {
        *(undefined2 *)((int)param_1 + iStack_a * 0xc + 0x26) = 0x0;
        *(undefined4 *)((int)param_1 + iStack_a * 0xc + 0x28) = 0x0;
      }
      iStack_4 += 0x1;
      param_3 += -0x1;
      if (param_3 == 0x0)
      {
        return iStack_4;
      }
    }
    iStack_a += 0x1;
  } while( true );
}



// Finds and removes a sub-item with the specified ID if it is currently in state 0
// (inactive/idle). Triggers simulator entity removal and clears the array slot.

u16 __stdcall16far
UI_Build_Item_TypeD88E_Remove_SubItem_by_ID_and_State0_d00c
          (uint16_t offset,uint16_t segment,int sub_id)
{
  int iVar1;
  void *this_ptr;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  while( true )
  {
    if (0x9 < uStack_4)
    {
      return 0x0;
    }
    iVar1 = uStack_4 * 0xc + offset;
    if ((*(int *)(iVar1 + 0x26) == 0x0) && (*(int *)(iVar1 + 0x24) == sub_id)) break;
    uStack_4 += 0x1;
  }
  this_ptr = UI_Build_Item_Get_Construction_Manager_Logic_b58e
                       ((void *)CONCAT22(segment,offset));
  if (sub_id == 0x5)
  {
    Simulator_Entity_Decrement_SubCounter_20E_4900
              ((void *)*(undefined4 *)((int)this_ptr + 0x2e));
  }
  else
  {
    UI_Component_Remove_Entities_of_Type_Logic_6e9c(this_ptr,0x1,sub_id);
  }
  iVar1 = uStack_4 * 0xc + offset;
  *(undefined4 *)(iVar1 + 0x20) = 0x0;
  *(undefined2 *)(iVar1 + 0x24) = 0x0;
  *(undefined2 *)(iVar1 + 0x26) = 0x0;
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Finds a free slot and schedules a sub-entity spawn for 200 ticks in the future.
// Triggers immediate spawning of simulator entities (workers/units) or updates research
// flags.

void __stdcall16far
UI_Build_Item_TypeD88E_Schedule_SubItem_Spawn_d180(void *this_ptr,int sub_id)
{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  void *arg1;
  astruct_174 *iVar5;
  u16 arg2;
  void *pvVar4;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    if (0x9 < iStack_4)
    {
      return;
    }
    arg2 = (u16)((ulong)this_ptr >> 0x10);
    arg1 = (void *)this_ptr;
    if (*(int *)((int)arg1 + iStack_4 * 0xc + 0x22) == 0x0 &&
        *(int *)((int)arg1 + iStack_4 * 0xc + 0x20) == 0x0) break;
    iStack_4 += 0x1;
  }
  uVar1 = *_p_SimulatorWorldContext;
  uVar2 = ((uint *)_p_SimulatorWorldContext)[0x1];
  *(int *)((int)arg1 + iStack_4 * 0xc + 0x20) = uVar1 + 0xc8;
  *(int *)((int)arg1 + iStack_4 * 0xc + 0x22) = uVar2 + (0xff37 < uVar1);
  *(int *)((int)arg1 + iStack_4 * 0xc + 0x24) = sub_id;
  UI_Build_Item_TypeD88E_Init_SubItem_Flags_d340
            ((u16)arg1,arg2,
             (void *)CONCAT22(arg2,(void *)((int)arg1 + iStack_4 * 0xc + 0x20)));
  pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar3 = (undefined2)((ulong)pvVar4 >> 0x10);
  if (sub_id == 0x5)
  {
    Simulator_Entity_Increment_SubCounter_20E_48e0
              ((void *)*(undefined4 *)((int)(void *)pvVar4 + 0x2e),0x1);
    return;
  }
  UI_Component_Batch_Spawn_SubEntities_Logic_7c50((void *)pvVar4,uVar3,0x1,0x0,sub_id);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through all 10 sub-items and checks if their scheduled "ready tick" (offset
// 0x20) has passed. If so, triggers resource validation (D3B2) and completion/removal
// logic.

void __stdcall16far UI_Build_Item_TypeD88E_Process_Scheduled_Ticks_d26c(void *this_ptr)
{
  ulong uVar1;
  u16 uVar2;
  astruct_172 *iVar3;
  astruct_173 *iVar4;
  void *this_ptr_00;
  int iStack_8;
  
  uVar1 = *_p_SimulatorWorldContext;
  for (iStack_8 = 0x0; iStack_8 < 0xa; iStack_8 += 0x1)
  {
    iVar4 = (astruct_173 *)(iStack_8 * 0xc + (int)this_ptr);
    if ((*(int *)((int)&iVar4->field32_0x20 + 0x2) != 0x0 ||
         (int)iVar4->field32_0x20 != 0x0) && (iVar4->field32_0x20 <= uVar1))
    {
      uVar2 = UI_Build_Item_TypeD88E_Validate_or_Consume_Resources_d3b2
                        (this_ptr,iStack_8);
      if (uVar2 == 0x0)
      {
        this_ptr_00 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
        if (iVar4->field33_0x24 == 0x5)
        {
          Simulator_Entity_Decrement_SubCounter_20E_4900
                    ((void *)*(undefined4 *)((int)this_ptr_00 + 0x2e));
        }
        else
        {
          UI_Component_Remove_Entities_of_Type_Logic_6e9c
                    (this_ptr_00,0x1,*(int *)((int)this_ptr + iStack_8 * 0xc + 0x24));
        }
        iVar3 = (astruct_172 *)(iStack_8 * 0xc + (int)this_ptr);
        iVar3->field32_0x20 = 0x0;
        iVar3->field33_0x24 = 0x0;
        iVar3->field34_0x26 = 0x0;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Complex routine that validates resource availability for sub-item state transitions.
// Checks neighbors for specific types (ID 8) or consumes 'Resource 7' to reset the tick
// counter if valid.

u16 __stdcall16far
UI_Build_Item_TypeD88E_Validate_or_Consume_Resources_d3b2(void *this_ptr,int index)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  bool bVar3;
  u16 uVar4;
  undefined4 *puVar5;
  u32 *puVar6;
  uint extraout_DX;
  uint uVar7;
  uint uVar9;
  u16 uVar8;
  void *pvVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined4 uStack_1a;
  ulong uStack_12;
  undefined4 uStack_e;
  
  pvVar10 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar9 = (uint)((ulong)pvVar10 >> 0x10);
  uVar1 = *(undefined4 *)((int)(void *)pvVar10 + 0x2e);
  uVar4 = UI_Build_Item_TypeD88E_Check_Other_SubItem_ID8_d36e(this_ptr,index);
  uVar11 = (undefined2)uVar1;
  uVar12 = (undefined2)((ulong)uVar1 >> 0x10);
  if (uVar4 == 0x0)
  {
    puVar5 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    puVar6 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                       (uVar11,uVar12,puVar5,uVar9);
    uStack_1a = (undefined4 *)CONCAT22(puVar6,puVar5);
    puVar2 = (undefined2 *)((int)*uStack_1a + 0x10);
    uStack_12 = (*(code *)*puVar2)(0x1038,puVar5,puVar6);
    bVar3 = false;
    for (uStack_e = 0x0; uVar9 = uStack_e._2_2_, uStack_e < uStack_12; uStack_e += 0x1)
    {
      pvVar10 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_1a);
      uVar7 = (uint)((ulong)pvVar10 >> 0x10);
      uVar9 = uVar7 | (uint)(void *)pvVar10;
      if (((uVar9 != 0x0) &&
          (*(long *)((int)(void *)pvVar10 + 0x4) !=
           *(long *)((int)(void *)this_ptr + 0x4))) &&
         (uVar4 = UI_Build_Item_TypeD88E_Check_SubItem_Exists_cf3a(pvVar10,0x8),
         uVar4 != 0x0))
      {
        bVar3 = true;
        break;
      }
    }
    if (uStack_1a != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_1a)(0x1038,puVar5,puVar6,0x1);
      uVar9 = extraout_DX;
    }
    if (!bVar3)
    {
      return 0x0;
    }
  }
  puVar5 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uVar8 = 0x1038;
  puVar6 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     (uVar11,uVar12,puVar5,uVar9);
  uStack_1a = (undefined4 *)CONCAT22(puVar6,puVar5);
  puVar2 = (undefined2 *)((int)*uStack_1a + 0x10);
  uStack_12 = (*(code *)*puVar2)(0x1038,puVar5,puVar6);
  bVar3 = false;
  uStack_e = 0x0;
  do
  {
    if (uStack_12 <= uStack_e)
    {
LAB_1030_d51b:
      if (uStack_1a != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*uStack_1a)(uVar8,puVar5,puVar6,0x1);
      }
      if (!bVar3)
      {
        return 0x0;
      }
      uVar9 = *_p_SimulatorWorldContext;
      uVar7 = ((uint *)_p_SimulatorWorldContext)[0x1];
      *(int *)((int)(void *)this_ptr + index * 0xc + 0x20) = uVar9 + 0xc8;
      *(int *)((int)(void *)this_ptr + index * 0xc + 0x22) = uVar7 + (0xff37 < uVar9);
      return 0x1;
    }
    pvVar10 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_1a);
    uVar9 = (uint)((ulong)pvVar10 >> 0x10) | (uint)(void *)pvVar10;
    if (uVar9 != 0x0)
    {
      uVar8 = 0x1028;
      uVar4 = UI_Item_List_Get_Value_by_ID_Offset6_6744(pvVar10,0x7);
      if (uVar9 != 0x0 || uVar4 != 0x0)
      {
        uVar8 = 0x1028;
        UI_Build_Item_Consume_Resources_by_Type_Logic(pvVar10,0x1,0x0,0x7);
        bVar3 = true;
        goto LAB_1030_d51b;
      }
    }
    uStack_e += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates the distance between an entity and a world coordinate. Sets error 0x6AF if
// the distance calculation fails or is invalid.

u16 __stdcall16far
Simulator_Validate_Entity_Distance_Logic_db92
          (u16 arg1,u16 arg2,void *coords,void *entity_id,long arg5)
{
  int iVar1;
  u16 unaff_SS;
  void *pvVar2;
  undefined1 local_4 [0x2];
  
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_4));
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)entity_id);
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)(void *)pvVar2 + 0x10));
  iVar1 = Simulator_Calc_Manhattan_Distance_to_Coord_bcde
                    ((u16)local_4,unaff_SS,pvVar2,coords,arg5);
  if (iVar1 < 0x0)
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6af;
    return 0x0;
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for Type 0xE036. Performs a complex unregistration process,
// either clearing a sub-item slot in a D88E manager or triggering a full
// remove-and-reinit sequence for its parent hub.

void __stdcall16far UI_Build_Item_TypeE036_dtor_Internal_dcf4(void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  u16 sub_id;
  u16 uVar3;
  int iVar4;
  undefined2 uVar5;
  astruct_167 *uVar6;
  undefined2 uVar7;
  void *pvVar8;
  void *puVar12;
  ulong uStack_1c;
  ulong uStack_18;
  undefined4 uStack_14;
  int iStack_c;
  astruct_168 *iVar3;
  
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar6 = (astruct_167 *)this_ptr;
  *(undefined2 *)this_ptr = 0xe036;
  uVar6->field2_0x2 = 0x1030;
  if (_p_SimulatorWorldContext != NULL)
  {
    pvVar8 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    iVar4 = (int)((ulong)pvVar8 >> 0x10);
    pvVar2 = (void *)pvVar8;
    if (uVar6->field30_0x20 == 0x0)
    {
      if (iVar4 == 0x0 && pvVar2 == NULL)
      {
        pvVar8 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)0x1);
      }
      else
      {
        pvVar8 = (void *)CONCAT22(*(undefined2 *)((int)pvVar2 + 0x30),
                                  (void *)*(undefined2 *)((int)pvVar2 + 0x2e));
      }
      uVar5 = (undefined2)((ulong)pvVar8 >> 0x10);
      uVar7 = uVar5;
      puVar12._0_2_ =
           get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
      puVar12._2_2_ =
           Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     ((void *)pvVar8,uVar5,(void *)puVar12,uVar7);
      uStack_14 = (undefined4 *)CONCAT22(puVar12._2_2_,(void *)puVar12);
      puVar1 = (undefined2 *)((int)*uStack_14 + 0x10);
      uStack_18 = (*(code *)*puVar1)(0x1038,(void *)puVar12,puVar12._2_2_);
      for (uStack_1c = 0x0; uStack_1c < uStack_18; uStack_1c += 0x1)
      {
        pvVar8 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_14);
        uVar3 = (u16)((ulong)pvVar8 >> 0x10);
        if (uVar3 != 0x0 || (void *)pvVar8 != NULL)
        {
          sub_id = UI_Build_Item_Get_SubItem_Category_ID_dfcc(this_ptr);
          uVar3 = UI_Build_Item_TypeD88E_Clear_SubItem_State3_Logic_cbf0
                            ((int)(void *)pvVar8,uVar3,sub_id);
          if (uVar3 != 0x0) break;
        }
      }
      if (uStack_14 != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*uStack_14)
                  (0x1038,(void *)puVar12,puVar12._2_2_,0x1);
      }
    }
    else
    {
      pvVar8 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)(u8 *)uVar6->field30_0x20);
      if ((int)((ulong)pvVar8 >> 0x10) != 0x0 || (void *)pvVar8 != NULL)
      {
        iStack_c = 0x0;
        switch(uVar6->field11_0xc)
        {
        case 0x73:
        case 0x77:
          iStack_c = 0x1;
          break;
        case 0x74:
        case 0x78:
          iStack_c = 0x2;
          break;
        case 0x75:
          iStack_c = 0x3;
          break;
        case 0x76:
          iStack_c = 0x5;
        }
        if (iStack_c != 0x0)
        {
          UI_Build_Item_TypeD88E_Remove_and_Reinit_SubItem_cc44
                    (pvVar8,0x1,pvVar2,iVar4,iStack_c);
        }
      }
    }
  }
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  return;
}



void * __stdcall16far Simulator_Object_Constructor_Type_SCAiInput(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x2af7);
  *(undefined2 *)param_1 = 0xe2ae;
  *(undefined2 *)((int)param_1 + 0x2) = 0x1030;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)param_1 + 0x8)),
                   s_SCAiInput_1050_5972);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far UI_Colony_Window_Update_All_SubItem_Strings_e0d4(void)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined4 local_2a;
  undefined1 local_1c [0x8];
  long local_14;
  uint local_10;
  void *local_e;
  void *local_a;
  int iStack_8;
  void *local_6;
  int local_4;
  
  pvVar4 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x40);
  iVar1 = (int)((ulong)pvVar4 >> 0x10);
  local_6 = (void *)pvVar4;
  local_4 = iVar1;
  local_a = UI_Get_Numbered_Slot_List_Head_maybe(local_6);
  if (iVar1 != 0x0 || local_a != NULL)
  {
    iStack_8 = iVar1;
    local_e = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,(u8 *)0x1);
    local_10 = (uint)(*(int *)((int)local_e + 0x154) != 0x0);
    init_long_pair(local_1c,(long)CONCAT22(iStack_8,local_a));
    while( true )
    {
      local_14 = get_next_list_item(local_1c);
      iVar2 = (int)((ulong)local_14 >> 0x10);
      iVar1 = (int)local_14;
      if (iVar2 == 0x0 && iVar1 == 0x0) break;
      if (*(int *)(iVar1 + 0x8) != 0x0)
      {
        pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,
                            (u8 *)(u8 *)*(undefined4 *)(iVar1 + 0xa));
        iVar1 = (int)pvVar4;
        UI_Colony_Window_Init_SubItem_and_Check_Active_354a(pvVar4);
        if (iVar1 != 0x0)
        {
          uVar3 = (undefined2)((ulong)local_14 >> 0x10);
          if (local_10 == 0x0)
          {
            iVar1 = *(int *)((int)local_14 + 0xe) * 0xc;
            local_2a = *(undefined4 *)(iVar1 + 0x58c4);
            iVar1 = *(int *)(iVar1 + 0x58c8);
          }
          else
          {
            iVar1 = *(int *)((int)local_14 + 0xe) * 0xc;
            local_2a = *(undefined4 *)(iVar1 + 0x58be);
            iVar1 = *(int *)(iVar1 + 0x58c2);
          }
          iVar2 = iVar1;
          UI_Colony_Window_Init_SubItem_and_Resolve_String_35a8
                    (pvVar4,*(u16 *)(*(int *)((int)local_14 + 0x10) * 0x2 +
                                    (int)local_2a));
          if (iVar2 != 0x0)
          {
            uVar3 = (undefined2)((ulong)local_14 >> 0x10);
            iVar2 = (int)local_14;
            *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 0x1;
            if (iVar1 <= *(int *)(iVar2 + 0x10))
            {
              *(undefined2 *)(iVar2 + 0x10) = 0x0;
            }
          }
        }
      }
    }
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far UI_System_Update_State_Flag_from_110_e300(undefined4 param_1)
{
  void *pvVar1;
  
  pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  UI_System_Set_State_Flag_and_Notify
            ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10),*(int *)((int)param_1 + 0x110))
  ;
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Specialized execution logic for Type E4EA commands. Retrieves a target entity,
// displays a summary dialog, and dispatches multiple interaction events (Type 0x7A and
// 0x21).

void __stdcall16far
Simulator_Command_TypeE4EA_Execute_Summary_and_Dispatch_e410(void *this_ptr)
{
  u16 uVar1;
  int unaff_SS;
  undefined1 local_10 [0x6];
  undefined1 local_a [0x4];
  void *pvStack_6;
  
  pvStack_6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,
                         (u8 *)(u8 *)*(undefined4 *)((int)this_ptr + 0x10c));
  if (pvStack_6 != NULL)
  {
    uVar1 = Colony_Check_Any_Entity_Matches_Type_Logic_4fd8(pvStack_6,0x21);
    if (uVar1 == 0x0)
    {
      UI_Entity_Summary_Display_ctor_a43e((undefined1 *)CONCAT22(unaff_SS,local_a));
      pack_3words_alt(local_10,unaff_SS,0x0,0x2);
      UI_Entity_Handle_Interaction_Dispatch_a49a
                ((undefined1 *)CONCAT22(unaff_SS,local_a),
                 (undefined1 *)CONCAT22(unaff_SS,local_10),0x7a);
      pack_3words_reverse(local_10,unaff_SS,0x0,0x3);
      UI_Entity_Handle_Interaction_Dispatch_a49a
                ((undefined1 *)CONCAT22(unaff_SS,local_a),
                 (undefined1 *)CONCAT22(unaff_SS,local_10),0x7a);
      pack_3words_reverse(local_10,unaff_SS,0x0,0x3);
      UI_Entity_Handle_Interaction_Dispatch_a49a
                ((undefined1 *)CONCAT22(unaff_SS,local_a),
                 (undefined1 *)CONCAT22(unaff_SS,local_10),0x21);
    }
  }
  return;
}



// Constructor for the 'KillBldg' debug command. Initializes base class with ID 16000
// and sets internal name 'SCKillBldg'. Sets vtable to 0xE62E.

void * __stdcall16far
Simulator_Command_KillBldg_ctor_init_e4fa(void *this_ptr,void *coords)
{
  undefined2 uVar1;
  astruct_164 *uVar2;
  
  uVar2 = (astruct_164 *)this_ptr;
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x3e80);
  uVar2->field263_0x108 = coords;
  *(undefined2 *)this_ptr = 0xe62e;
  uVar2->field2_0x2 = 0x1030;
  sprintf_wrapper(&uVar2->field7_0x8,uVar1,0x597c,0x1050,(void *)uVar2->field263_0x108,
                  (int)((ulong)uVar2->field263_0x108 >> 0x10));
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Core logic for the 'KillBldg' command. Resolves an entity at the target coordinates
// for potential removal or validation.

u16 __stdcall16far Simulator_Command_KillBldg_Process_Logic_e546(void *this_ptr)
{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this_ptr + 0x108);
  Simulator_Get_Entity_at_Coords_Wrapper_e332
            (_p_SimulatorWorldContext,(u16)uVar1,(u16)((ulong)uVar1 >> 0x10));
  return 0x1;
}



void * __stdcall16far
Simulator_Command_KillBldg_dtor_Scalar_Deleting_e602(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the 'KillColony' debug command. Initializes base class with ID 3999
// and sets internal name 'SCKillColony'. Sets vtable to 0xE78A.

void * __stdcall16far
Simulator_Command_KillColony_ctor_init_e63e(void *this_ptr,u16 arg1)
{
  void *pvVar1;
  undefined2 uVar2;
  
  pvVar1 = (void *)this_ptr;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0xf9f);
  *(u16 *)((int)pvVar1 + 0x108) = arg1;
  *(undefined2 *)this_ptr = 0xe78a;
  *(undefined2 *)((int)pvVar1 + 0x2) = 0x1030;
  strcpy_optimized((char *)CONCAT22(uVar2,(char *)((int)pvVar1 + 0x8)),
                   s_SCKillColony_1050_5990);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Process_Object_Type_Resource_Change_e67c(undefined4 param_1)
{
  int resource_id;
  void *pvVar1;
  
  pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
  resource_id = Turn_Manager_Remap_Object_Type_ID_Logic_2
                          ((int)(void *)pvVar1,(int)((ulong)pvVar1 >> 0x10),
                           *(int *)((int)param_1 + 0x108));
  if (resource_id != 0x0)
  {
    Turn_Manager_Add_Resource_Change_Entry_Logic
              ((void *)pvVar1,0x0,0x0,0x1,0x0,resource_id);
  }
  return 0x1;
}



void * __stdcall16far
Simulator_Command_KillColony_dtor_Scalar_Deleting_e75e(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the 'KillRebelColony' debug command. Initializes base class with ID
// 3999 and sets internal name 'SCKillRebelColony'. Sets vtable to 0xE890.

void * __stdcall16far Simulator_Command_KillRebelColony_ctor_init_e79a(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0xf9f);
  *(undefined2 *)this_ptr = 0xe890;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1030;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)(void *)this_ptr + 0x8)),
                   s_SCKillRebelColony_1050_599e);
  return this_ptr;
}



void * __stdcall16far
Simulator_Command_KillRebelColony_dtor_Scalar_Deleting_e864(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}
