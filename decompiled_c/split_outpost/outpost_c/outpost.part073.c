/*
 * Source: outpost.c
 * Chunk: 73/117
 * Original lines: 83329-84493
 * Boundaries: top-level declarations/definitions only
 */




// Core state transition logic for UI build items. Handles state 6
// (intermediate/paused), memory cleanup for states 4/5, and triggers virtual
// state-change callbacks (offset 0x3C).

void __stdcall16far
UI_Build_Item_Transition_State_Logic_bdac(void *this_ptr,int new_state)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  if (*(int *)((int)pvVar2 + 0x12) != new_state)
  {
    if (*(int *)((int)pvVar2 + 0x12) == 0x6)
    {
      if (*(int *)((int)pvVar2 + 0x18) == new_state)
      {
        *(undefined2 *)((int)pvVar2 + 0x12) = *(undefined2 *)((int)pvVar2 + 0x18);
        *(undefined2 *)((int)pvVar2 + 0x18) = 0x0;
        return;
      }
    }
    else
    {
      if (new_state != 0x6)
      {
        if ((*(int *)((int)pvVar2 + 0x12) == 0x4) ||
           (*(int *)((int)pvVar2 + 0x12) == 0x5))
        {
          unaff_CS = 0x1000;
          free_if_not_null((void *)(void *)*(undefined4 *)((int)pvVar2 + 0x14));
        }
        *(int *)((int)pvVar2 + 0x12) = new_state;
        puVar1 = (undefined2 *)((int)*(undefined4 *)this_ptr + 0x3c);
        (*(code *)*puVar1)(unaff_CS,this_ptr);
        return;
      }
      *(undefined2 *)((int)pvVar2 + 0x18) = *(undefined2 *)((int)pvVar2 + 0x12);
      *(undefined2 *)((int)pvVar2 + 0x12) = 0x6;
    }
  }
  return;
}



// Per-tick update for build items in state 6. If construction conditions are met,
// transitions to state 5.

void __stdcall16far UI_Build_Item_OnTick_State6_Update_be2a(void *this_ptr)
{
  undefined2 *puVar1;
  u16 uVar2;
  undefined2 uVar3;
  void *pvVar4;
  int iVar5;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(int *)((int)this_ptr + 0x12) != 0x6)
  {
    return;
  }
  pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  if (*(long *)((int)pvVar4 + 0x200) != 0x8000002)
  {
    if (*(long *)((int)this_ptr + 0x1c) == 0x8000002)
    {
      iVar5 = 0x6;
      goto code_r0x1028be96;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)this_ptr + 0x64);
    iVar5 = (*(code *)*puVar1)();
    if (iVar5 == 0x0)
    {
      return;
    }
    uVar2 = UI_Build_Item_Check_Consumption_Availability_cb04(this_ptr);
    if (uVar2 == 0x0)
    {
      iVar5 = 0x6;
      goto code_r0x1028be96;
    }
    UI_Build_Item_Process_Turn_Consumption_Logic_c952(this_ptr);
  }
  iVar5 = 0x5;
code_r0x1028be96:
  UI_Build_Item_Transition_State_Logic_bdac(this_ptr,iVar5);
  return;
}



// Per-tick update for build items in state 4. Increments progress and transitions to
// state 5 upon completion.

void __stdcall16far UI_Build_Item_OnTick_State4_Update_be9e(void *this_ptr)
{
  int *piVar1;
  u16 uVar2;
  void *pvVar3;
  undefined2 uVar4;
  void *pvVar5;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = (void *)this_ptr;
  if (*(int *)((int)pvVar3 + 0x12) == 0x4)
  {
    pvVar5 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
    if (*(long *)((int)(void *)pvVar5 + 0x200) == 0x8000002)
    {
      piVar1 = (int *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0x94);
      *piVar1 = *piVar1 + -0x1;
    }
    else
    {
      uVar2 = UI_Build_Item_Check_Consumption_Availability_cb04(this_ptr);
      if (uVar2 == 0x0)
      {
        return;
      }
      piVar1 = (int *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0x94);
      *piVar1 = *piVar1 + -0x1;
      UI_Build_Item_Process_Turn_Consumption_Logic_c952(this_ptr);
    }
    if (*(int *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0x94) < 0x1)
    {
      UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x5);
    }
  }
  return;
}



void __stdcall16far void_noop_stub_1028_bf16(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_bf1a(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_bf1e(void)
{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Maps the build item to a simulator object based on its current state (4 or 5) and
// type. Stores the resulting pointer at offset 0x14.

void __stdcall16far UI_Build_Item_Map_Simulator_Object_Logic_bf22(astruct_316 *param_1)
{
  int iVar1;
  astruct_316 *uVar2;
  undefined2 uVar3;
  void *pvVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (astruct_316 *)param_1;
  iVar1 = uVar2->field17_0x12;
  if (iVar1 == 0x4)
  {
    pvVar4 = Simulator_Object_Clone_from_Manager_e0bc
                       (_p_SimulatorWorldContext,uVar2->field12_0xc);
  }
  else
  {
    if (iVar1 != 0x5)
    {
      if (iVar1 != 0x6)
      {
        (&uVar2->field18_0x14)[0x0] = 0x0;
        (&uVar2->field18_0x14)[0x1] = 0x0;
      }
      return;
    }
    pvVar4 = Simulator_Object_Alloc_and_Init_from_Manager_e100
                       (_p_SimulatorWorldContext,uVar2->field12_0xc);
  }
  uVar2->field18_0x14 = (uint16_t)(void *)pvVar4;
  uVar2->field19_0x16 = (uint16_t)((ulong)pvVar4 >> 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes a randomized subtype ID (offset 0x10) for the build item, selecting from
// two sets of ranges based on its primary type ID.

void __stdcall16far UI_Build_Item_Initialize_Random_Subtype_bf76(void *this_ptr)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  iVar1 = random_int_range(0x1,0x3);
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar3 = (int)this_ptr;
  iVar2 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),*(int *)(iVar3 + 0xc))
  ;
  if (iVar2 == 0x0)
  {
    if (iVar1 == 0x1)
    {
      *(undefined2 *)(iVar3 + 0x10) = 0x48;
      return;
    }
    if (iVar1 != 0x2)
    {
      *(undefined2 *)(iVar3 + 0x10) = 0x4a;
      return;
    }
    *(undefined2 *)(iVar3 + 0x10) = 0x49;
    return;
  }
  if (iVar1 == 0x1)
  {
    *(undefined2 *)(iVar3 + 0x10) = 0x70;
    return;
  }
  if (iVar1 != 0x2)
  {
    *(undefined2 *)(iVar3 + 0x10) = 0x72;
    return;
  }
  *(undefined2 *)(iVar3 + 0x10) = 0x71;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Consumes a batch of resources from the colony's storage. Iterates through resource
// list 4 and decrements values until the target amount (param_2) is met.

void __stdcall16far Simulator_Consume_Resources_Batch_c00a(void *this_ptr,long amount)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  u8 *packed_id;
  undefined2 uVar4;
  u32 *puVar5;
  uint amount_hi;
  undefined2 uVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uStack_1a;
  ulong uStack_16;
  undefined4 uStack_12;
  
  pvVar7 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
  uVar1 = *(undefined4 *)((int)pvVar7 + 0x2e);
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uVar6 = 0x1038;
  puVar5 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     ((int)uVar1,(int)((ulong)uVar1 >> 0x10),puVar3,uVar4);
  uStack_12 = (undefined4 *)CONCAT22(puVar5,puVar3);
  puVar2 = (undefined2 *)((int)*uStack_12 + 0x10);
  uStack_16 = (*(code *)*puVar2)(0x1038,puVar3,puVar5);
  uStack_1a = 0x0;
  do
  {
    if (uStack_16 <= uStack_1a)
    {
LAB_1028_c0d6:
      if (uStack_12 != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*uStack_12)(uVar6,puVar3,puVar5,0x1);
      }
      return;
    }
    puVar2 = (undefined2 *)((int)*uStack_12 + 0x4);
    packed_id = (u8 *)(*(code *)*puVar2)(uVar6,puVar3,puVar5,(int)uStack_1a,
                                         (int)(uStack_1a >> 0x10));
    pvVar7 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    uVar6 = 0x1030;
    pvVar7 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar7);
    pvVar8 = UI_Item_List_Sum_Active_Values_Logic_6302(pvVar7);
    amount_hi = (uint)((ulong)pvVar8 >> 0x10);
    if ((amount._2_2_ <= amount_hi) &&
       ((amount._2_2_ < amount_hi || ((uint)amount <= (uint)pvVar8))))
    {
      UI_Item_List_Consume_Resources_by_Type_Logic_6356
                (pvVar7,0x0,(uint)amount,amount._2_2_);
      goto LAB_1028_c0d6;
    }
    UI_Item_List_Consume_Resources_by_Type_Logic_6356(pvVar7,0x0,(uint)pvVar8,amount_hi)
    ;
    amount -= (long)pvVar8;
    uStack_1a += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates if a batch of resources is available in the colony's storage. Returns
// non-zero on success, or 0 and sets error 0x6D0 if insufficient.

u16 __stdcall16far Simulator_Validate_Resource_Batch_c0f0(void *this_ptr,long amount)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  u8 *packed_id;
  undefined2 uVar5;
  undefined2 uVar6;
  u32 *puVar7;
  uint uVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  void *pvVar12;
  void *pvVar13;
  ulong uStack_1c;
  ulong uStack_18;
  undefined4 uStack_14;
  u16 uStack_c;
  
  pvVar12 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar5 = (undefined2)((ulong)pvVar12 >> 0x10);
  uVar1 = *(undefined4 *)((int)(void *)pvVar12 + 0x2e);
  uVar6 = uVar5;
  uStack_c = UI_Build_Item_Check_Consumption_Availability_cb04(this_ptr);
  uVar10 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar9 = (int)uVar1;
  if ((*(int *)(iVar9 + 0x204) == 0x0) && (*(int *)(iVar9 + 0x206) == 0x0))
  {
    puVar4 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    uVar11 = 0x1038;
    puVar7 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                       (iVar9,uVar10,puVar4,uVar6);
    uStack_14 = (undefined4 *)CONCAT22(puVar7,puVar4);
    puVar2 = (undefined2 *)((int)*uStack_14 + 0x10);
    uStack_18 = (*(code *)*puVar2)(0x1038,puVar4,puVar7);
    for (uStack_1c = 0x0; uStack_1c < uStack_18; uStack_1c += 0x1)
    {
      puVar2 = (undefined2 *)((int)*uStack_14 + 0x4);
      packed_id = (u8 *)(*(code *)*puVar2)(uVar11,puVar4,puVar7,(int)uStack_1c,
                                           (int)(uStack_1c >> 0x10));
      pvVar13 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,packed_id);
      uVar11 = 0x1030;
      pvVar13 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar13);
      pvVar13 = UI_Item_List_Sum_Active_Values_Logic_6302(pvVar13);
      uVar8 = (uint)((ulong)pvVar13 >> 0x10);
      pvVar3 = (void *)pvVar13;
      if ((amount._2_2_ <= uVar8) &&
         ((amount._2_2_ < uVar8 || ((void *)amount <= pvVar3))))
      {
        amount = 0x0;
        break;
      }
      amount = CONCAT22((amount._2_2_ - uVar8) - (uint)((void *)amount < pvVar3),
                        (int)(void *)amount - (int)pvVar3);
    }
    if (uStack_14 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_14)(uVar11,puVar4,puVar7,0x1);
    }
    if (amount != 0x0)
    {
      UI_Component_Set_List_Value_at_26_Logic_7d7c
                ((void *)pvVar12,uVar5,(int)amount,(int)((ulong)amount >> 0x10),0x1d);
      uStack_c = 0x0;
    }
  }
  return uStack_c;
}



// Retrieves the world width/height pair from the current simulator context.

void __stdcall16far
Simulator_Get_World_Dimensions_Pair_c1f8(void *this_ptr,u16 *out_width,u16 *out_height)
{
  int *unaff_SS;
  undefined4 *puVar1;
  undefined4 local_c;
  undefined2 uStack_8;
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_Parent_World_Entity_baf6(this_ptr);
  puVar1 = Simulator_Get_Entity_Coords_Ptr_5b5c
                     ((int)(void *)pvStack_6,(uint16_t)((ulong)pvStack_6 >> 0x10));
  local_c = *puVar1;
  uStack_8 = *(undefined2 *)((undefined4 *)puVar1 + 0x1);
  unpack_word_pair(&local_c,unaff_SS,(int *)out_width);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if an entity ID has changed at a specific coordinate and, if so, triggers
// virtual updates and notifies the simulator of the change. Involves Type 0x200 checks.

u16 __stdcall16far
Simulator_Handle_Entity_ID_Change_at_Coords_c23e
          (u16 x,u16 y,void *coords,long new_id,long arg5)
{
  u8 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  u8 *puVar5;
  void *this_ptr;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar5 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,coords,(void *)arg5);
  if (puVar5 != NULL)
  {
    this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)puVar5);
    puVar1 = (u8 *)*(long *)((int)(void *)this_ptr + 0x2a);
    if (puVar1 != (u8 *)new_id)
    {
      puVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)puVar1);
      uVar3 = (undefined2)((ulong)puVar6 >> 0x10);
      puVar7 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)new_id);
      iVar4 = (int)((ulong)puVar7 >> 0x10);
      if (((puVar6 == NULL) || (iVar4 == 0x0 && (undefined4 *)puVar7 == NULL)) ||
         (((undefined4 *)puVar7)[0x80] != ((undefined4 *)puVar6)[0x80]))
      {
        return 0x0;
      }
      puVar2 = (undefined2 *)((int)*puVar6 + 0x18);
      (*(code *)*puVar2)(0x1030,(undefined4 *)puVar6,uVar3,puVar5);
      puVar2 = (undefined2 *)((int)*puVar7 + 0x8);
      (*(code *)*puVar2)();
      UI_Component_Set_Entity_ID_and_Cache_Ptr_73ee(this_ptr,(void *)new_id);
    }
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if world coordinates are within the safe client margins (1 unit from edges).
// Returns 1 if safe, otherwise 0 and sets error 0x6B8.

u16 __stdcall16far
Simulator_Is_Coordinate_Within_Client_Margins_c314
          (u16 arg1,u16 arg2,void *coords,u16 arg4,u16 arg5,u8 *packed_id)
{
  int *unaff_SS;
  undefined4 *puVar1;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  undefined4 local_c;
  undefined2 uStack_8;
  void *pvStack_6;
  
  pvStack_6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,packed_id);
  puVar1 = Simulator_Get_Entity_Coords_Ptr_5b5c
                     ((int)pvStack_6,(uint16_t)((ulong)pvStack_6 >> 0x10));
  local_c = *puVar1;
  uStack_8 = *(undefined2 *)((undefined4 *)puVar1 + 0x1);
  unpack_word_pair((void *)coords,(int *)((ulong)coords >> 0x10),&local_10);
  unpack_word_pair(&local_c,unaff_SS,&local_14);
  if ((((0x1 < local_e) && (0x1 < local_10)) && (local_e < local_12 + -0x1)) &&
     (local_10 < local_14 + -0x1))
  {
    return 0x1;
  }
  PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b8;
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Extensive validation of entity placement rules based on proximity to other structures
// (using 1030:BCDE). Handles specialized checks for resource category 0x87 and triggers
// virtual interaction loops. Sets error 0x6B6 if too close.

u16 __stdcall16far
Simulator_Validate_Proximity_Interaction_Rules_c3aa
          (u16 x,u16 y,void *coords,u8 *packed_id,long arg5)
{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  int map_id;
  u32 *puVar5;
  undefined2 uVar6;
  u16 unaff_SS;
  void *pvVar7;
  void *obj_ptr;
  void *pvVar8;
  undefined4 *puVar9;
  long lVar10;
  u32 *puVar11;
  void *pvVar12;
  ulong uStack_28;
  ulong uStack_24;
  undefined4 uStack_20;
  int iStack_18;
  undefined1 local_4 [0x2];
  
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_4));
  pvVar7 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,packed_id);
  uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
  lVar10 = arg5;
  pvVar8 = coords;
  obj_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                      (_p_SimulatorWorldContext,
                       (u8 *)(u8 *)*(undefined4 *)((int)(void *)pvVar7 + 0x10));
  iStack_18 = Simulator_Calc_Manhattan_Distance_to_Coord_bcde
                        ((u16)local_4,unaff_SS,obj_ptr,pvVar8,lVar10);
  if (iStack_18 < 0x0)
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6af;
    return 0x0;
  }
  if (0x1e < iStack_18)
  {
    pvVar8 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
    map_id = (int)((ulong)pvVar8 >> 0x10);
    iVar2 = Resource_Category_Get_Mapped_Offset_Value_Logic((void *)pvVar8,map_id);
    if (iVar2 == 0x0)
    {
      puVar3 = get_array_element_6bytes
                         ((int *)_p_StringPropertyTable,
                          (int)((ulong)_p_StringPropertyTable >> 0x10));
      uVar6 = 0x1038;
      puVar5 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                         ((void *)pvVar7,uVar4,puVar3,map_id);
      uStack_20 = (undefined4 *)CONCAT22(puVar5,puVar3);
      puVar1 = (undefined2 *)((int)*uStack_20 + 0x10);
      puVar9 = puVar3;
      puVar11 = puVar5;
      uStack_24 = (*(code *)*puVar1)(0x1038,puVar3,puVar5);
      uStack_28 = 0x0;
      while( true )
      {
        if (uStack_24 <= uStack_28)
        {
          if (uStack_20 != NULL)
          {
            (*(code *)*(undefined2 *)(undefined2 *)*uStack_20)
                      (uVar6,puVar3,puVar5,0x1,puVar9,puVar11,uStack_20,uStack_20);
          }
          PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b6;
          PTR_DAT_1050_0000_1050_50cc = (undefined *)(iStack_18 + -0x1e);
          return 0x0;
        }
        pvVar8 = coords;
        lVar10 = arg5;
        pvVar7 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_20);
        uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
        pvVar12 = (void *)pvVar7;
        uVar6 = 0x1030;
        iVar2 = Simulator_Calc_Manhattan_Distance_to_Coord_bcde
                          ((u16)local_4,unaff_SS,pvVar7,pvVar8,lVar10);
        if ((0x0 < iVar2) && (iVar2 < 0x1f)) break;
        if (iVar2 < iStack_18)
        {
          iStack_18 = iVar2;
        }
        uStack_28 += 0x1;
      }
      if (uStack_20 == NULL)
      {
        return 0x1;
      }
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_20)
                (0x1030,puVar3,puVar5,0x1,puVar9,puVar11,uStack_20,uStack_20,pvVar12,
                 uVar4);
      return 0x1;
    }
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far
Simulator_Validate_Proximity_to_Entity_c522
          (u16 param_1,u16 param_2,void *param_3,u8 *param_4,u16 param_5,long param_6)
{
  int iVar1;
  u16 unaff_SS;
  void *pvVar2;
  u16 local_12;
  u16 local_10;
  u16 local_e;
  u32 local_c;
  u32 local_8;
  undefined1 local_4 [0x2];
  
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_4));
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,param_4);
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)pvVar2 + 0x10));
  iVar1 = Simulator_Calc_Manhattan_Distance_to_Coord_bcde
                    ((u16)local_4,unaff_SS,pvVar2,param_3,param_6);
  if (iVar1 < 0x0)
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6af;
  }
  else
  {
    if (iVar1 < 0x1f)
    {
      return 0x1;
    }
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b6;
    PTR_DAT_1050_0000_1050_50cc = (undefined *)(iVar1 + -0x1e);
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if the entity at specified coordinates matches the parameter type or is type
// 0x7A (Type 122). Handles specialized mapping for types 0x7B-0x7F.

u16 __stdcall16far
Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
          (undefined2 param_1,undefined2 param_2,int param_3,void *param_4,void *param_5
          )
{
  int iVar1;
  u8 *puVar2;
  void *pvVar3;
  undefined2 uStack_e;
  
  puVar2 = Simulator_Map_Get_Entity_at_Coords_627e(_p_MapContext_5740,param_4,param_5);
  if (puVar2 != NULL)
  {
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puVar2);
    uStack_e = 0x7a;
    if (0x0 < *(int *)((int)param_4 + 0x4))
    {
      if (param_3 == 0x7b)
      {
        param_3 = 0x7e;
      }
      else if (param_3 == 0x7c)
      {
        param_3 = 0x7d;
      }
      uStack_e = 0x7f;
    }
    if (pvVar3 != NULL)
    {
      pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
      if ((pvVar3 != NULL) &&
         ((iVar1 = *(int *)((int)pvVar3 + 0xc), iVar1 == uStack_e || (iVar1 == param_3))
         ))
      {
        return 0x1;
      }
    }
  }
  return 0x0;
}



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



// Modifies a 3D coordinate (X, Y, Z) based on a direction index (1-5). Returns the
// updated coordinate packed into the original structure.

void __stdcall16far
UI_Build_Item_Move_Coordinate_by_Direction_c8ee
          (undefined2 param_1,undefined2 param_2,int param_3,void *param_4)
{
  int *unaff_SS;
  int *out1;
  int local_8;
  int local_6;
  int local_4;
  
  out1 = (int *)((ulong)param_4 >> 0x10);
  unpack_3word_struct((void *)param_4,out1,&local_8,unaff_SS);
  if (param_3 == 0x1)
  {
    local_8 += 0x1;
  }
  else if (param_3 == 0x2)
  {
    _local_6 = CONCAT22(local_4,local_6 + -0x1);
  }
  else if (param_3 == 0x3)
  {
    _local_6 = CONCAT22(local_4,local_6 + 0x1);
  }
  else if (param_3 == 0x4)
  {
    _local_6 = CONCAT22(local_4 + 0x1,local_6);
  }
  else if (param_3 == 0x5)
  {
    _local_6 = CONCAT22(local_4 + -0x1,local_6);
  }
  pack_3words_reverse((void *)param_4,(int)out1,local_8,(int)_local_6);
  return;
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
