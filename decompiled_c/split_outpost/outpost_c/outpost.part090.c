/*
 * Source: outpost.c
 * Chunk: 90/117
 * Original lines: 102545-103740
 * Boundaries: top-level declarations/definitions only
 */




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



// Core state machine for Build Item Type D88E. Transitions the value at offset 0x98
// between various operational modes (1-12).

int __stdcall16far UI_Build_Item_TypeD88E_State_Machine_Transition_d56a(void *this_ptr)
{
  astruct_170 *paVar1;
  astruct_170 *paVar2;
  astruct_170 *uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_170 *)this_ptr;
  paVar2 = (astruct_170 *)(uVar3->field152_0x98 + -0x1);
  paVar1 = paVar2;
  if (false)
  {
switchD_1030_d5fb_caseD_4:
    uVar3->field152_0x98 = 0x1;
    return (int)paVar1;
  }
  paVar1 = uVar3;
  switch(paVar2)
  {
  case NULL:
    uVar3->field152_0x98 = 0x2;
    break;
  case (astruct_170 *)0x1:
    uVar3->field152_0x98 = 0x3;
    break;
  case (astruct_170 *)0x2:
    uVar3->field152_0x98 = 0x4;
    break;
  case (astruct_170 *)0x3:
    uVar3->field152_0x98 = 0xc;
    break;
  default:
    goto switchD_1030_d5fb_caseD_4;
  case (astruct_170 *)0x7:
    uVar3->field152_0x98 = 0x9;
    return (int)uVar3;
  case (astruct_170 *)0x8:
    uVar3->field152_0x98 = 0xb;
    return (int)uVar3;
  case (astruct_170 *)0xa:
    uVar3->field152_0x98 = 0x5;
    return (int)uVar3;
  case (astruct_170 *)0xb:
    uVar3->field152_0x98 = 0x8;
    return (int)uVar3;
  }
  return (int)uVar3;
}



// Serializes UI build item Type 0xD88E to a save file. Exhaustively saves the
// 10-element sub-item array (offsets 0x20, 0x24, 0x26, 0x28 for each slot).

u16 __stdcall16far
UI_Build_Item_TypeD88E_Save_to_File_Logic_d61c(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  void *unaff_SS;
  undefined4 local_1a;
  undefined *local_16;
  undefined2 local_14;
  undefined4 local_12 [0x3];
  int iStack_4;
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(this_ptr,file_ctx);
  if (uVar1 != 0x0)
  {
    for (iStack_4 = 0x0; iStack_4 < 0xa; iStack_4 += 0x1)
    {
      uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
      iVar3 = (int)this_ptr;
      local_12[0x0] = *(undefined4 *)(iVar3 + iStack_4 * 0xc + 0x20);
      iVar2 = file_write_check((long)file_ctx,local_12,unaff_SS);
      if (iVar2 == 0x0) goto LAB_1030_d701;
      local_14 = *(undefined2 *)(iVar3 + iStack_4 * 0xc + 0x24);
      iVar2 = file_write_check((long)file_ctx,&local_14,unaff_SS);
      if (iVar2 == 0x0) goto LAB_1030_d701;
      local_16 = (undefined *)*(undefined2 *)(iVar3 + iStack_4 * 0xc + 0x26);
      iVar2 = file_write_check((long)file_ctx,&local_16,unaff_SS);
      if (iVar2 == 0x0) goto LAB_1030_d701;
      local_1a = *(undefined4 *)(iVar3 + iStack_4 * 0xc + 0x28);
      iVar2 = file_write_check((long)file_ctx,&local_1a,unaff_SS);
      if (iVar2 == 0x0) goto LAB_1030_d701;
    }
    local_16 = PTR_DAT_1050_0000_1050_5812;
    iVar2 = file_write_check((long)file_ctx,&local_16,unaff_SS);
    if (iVar2 != 0x0)
    {
      return 0x1;
    }
LAB_1030_d701:
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



undefined2 __stdcall16far
UI_Build_Item_MultiSlot_Deserialize_from_File_d72e(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  int iVar3;
  void *unaff_SS;
  int local_a;
  undefined4 local_8;
  int local_4;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  if (uVar1 == 0x0)
  {
    return 0x0;
  }
  local_a = 0x0;
  while( true )
  {
    if (0x9 < local_a)
    {
      if ((0x3 < (int)PTR_DAT_1050_0000_1050_0312) &&
         (iVar2 = file_read_check((long)param_2,
                                  (undefined **)&PTR_DAT_1050_0000_1050_5812,
                                  (dword *)&g_HeapContext), iVar2 == 0x0))
      {
        g_LastFileErrorMsgID = (undefined *)0x6d2;
        return 0x0;
      }
      return 0x1;
    }
    iVar2 = file_read_check((long)param_2,&local_8,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar2 == 0x0) break;
    iVar3 = local_a * 0xc + (int)param_1;
    *(undefined2 *)(iVar3 + 0x20) = (undefined2)local_8;
    *(undefined2 *)(iVar3 + 0x22) = local_8._2_2_;
    iVar2 = file_context_remap_id_by_version_logic
                      ((int)(void *)param_2,(int)((ulong)param_2 >> 0x10),local_4);
    *(int *)(iVar3 + 0x24) = iVar2;
    if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
    {
      iVar2 = local_a * 0xc + (int)param_1;
      *(undefined2 *)(iVar2 + 0x26) = 0x3;
      *(undefined4 *)(iVar2 + 0x28) = 0x0;
    }
    else
    {
      iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
      if (iVar2 == 0x0)
      {
        g_LastFileErrorMsgID = (undefined *)0x6d2;
        return 0x0;
      }
      iVar2 = file_read_check((long)param_2,&local_8,unaff_SS);
      if (iVar2 == 0x0)
      {
        g_LastFileErrorMsgID = (undefined *)0x6d2;
        return 0x0;
      }
      iVar2 = local_a * 0xc + (int)param_1;
      *(int *)(iVar2 + 0x26) = local_4;
      *(undefined4 *)(iVar2 + 0x28) = local_8;
    }
    local_a += 0x1;
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
}



void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_d868(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI build item Type 0xDC2E. Maps Type IDs 0x4C and 0x4D to specific
// internal flags (0x43, 0x44). Sets vtable to 0xDC2E.

void * __stdcall16far UI_Build_Item_TypeDC2E_ctor_init_d8f6(void *this_ptr)
{
  astruct_169 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_169 *)this_ptr;
  *(undefined2 *)this_ptr = 0xdc2e;
  uVar1->field2_0x2 = 0x1030;
  if (uVar1->field11_0xc == 0x4c)
  {
    uVar1->field12_0xe = 0x43;
  }
  else if (uVar1->field11_0xc == 0x4d)
  {
    uVar1->field12_0xe = 0x44;
  }
  else
  {
    uVar1->field12_0xe = 0x45;
  }
  return this_ptr;
}



void * __stdcall16far
UI_Build_Item_TypeDC2E_ctor_with_Params_d942
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xdc2e;
  param_1[0x1] = 0x1030;
  if (param_1[0x6] == 0x4c)
  {
    param_1[0x7] = 0x43;
  }
  else if (param_1[0x6] == 0x4d)
  {
    param_1[0x7] = 0x44;
  }
  else
  {
    param_1[0x7] = 0x45;
  }
  return (void *)CONCAT22(param_2,param_1);
}



// Core per-turn logic for buildings in the construction state (4). Validates resource
// availability (Power/Materials), decrements the construction progress counter (0x94),
// and transitions the building to state 5 (Complete) when finished.

void __stdcall16far UI_Build_Item_OnTick_Under_Construction_Logic_d994(void *this_ptr)
{
  int *piVar1;
  u16 uVar2;
  void *pvVar3;
  undefined2 uVar4;
  void *pvVar5;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = (void *)this_ptr;
  if (*(int *)((int)pvVar3 + 0x12) != 0x4)
  {
    return;
  }
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
    uVar2 = UI_Build_Item_Check_Construction_Resource_Available_dace(this_ptr);
    if (uVar2 == 0x0)
    {
      return;
    }
    piVar1 = (int *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0x94);
    *piVar1 = *piVar1 + -0x1;
    UI_Build_Item_Process_Turn_Consumption_Logic_c952(this_ptr);
    UI_Build_Item_Consume_Construction_Resource_Logic_da22(this_ptr);
  }
  if (*(int *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0x94) < 0x1)
  {
    UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Locates the first active building in the construction manager's list and consumes
// construction-related resources (ID 0xD) to advance progress.

void __stdcall16far
UI_Build_Item_Consume_Construction_Resource_Logic_da22(void *this_ptr)
{
  undefined4 *this_ptr_00;
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  ulong uStack_12;
  ulong uStack_e;
  
  pvVar7 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
  this_ptr_00 = (undefined4 *)*(undefined4 *)((int)pvVar7 + 0xc);
  puVar1 = (undefined2 *)((int)*this_ptr_00 + 0x10);
  uStack_e = (*(code *)*puVar1)(0x1028,(undefined4 *)this_ptr_00,
                                *(undefined2 *)((int)pvVar7 + 0xe));
  uStack_12 = 0x0;
  while( true )
  {
    if (uStack_e <= uStack_12)
    {
      return;
    }
    pvVar7 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(this_ptr_00);
    uVar5 = (uint)((ulong)pvVar7 >> 0x10);
    uVar6 = uVar5 | (uint)pvVar7;
    if (((uVar6 != 0x0) &&
        (iVar2 = search_array_for_value
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10),
                            *(int *)((uint)pvVar7 + 0xc)), iVar2 != 0x0)) &&
       (uVar3 = UI_Item_List_Get_Value_by_ID_Offset6_6744(pvVar7,0xd),
       uVar6 != 0x0 || uVar3 != 0x0)) break;
    uStack_12 += 0x1;
  }
  UI_Build_Item_Consume_Resources_by_Type_Logic(pvVar7,0x1,0x0,0xd);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates that the required construction resources (ID 0xD) are available in at least
// one managed active building.

u16 __stdcall16far
UI_Build_Item_Check_Construction_Resource_Available_dace(void *this_ptr)
{
  undefined4 *this_ptr_00;
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  ulong uStack_14;
  ulong uStack_10;
  
  pvVar7 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
  this_ptr_00 = (undefined4 *)*(undefined4 *)((int)pvVar7 + 0xc);
  puVar1 = (undefined2 *)((int)*this_ptr_00 + 0x10);
  uStack_10 = (*(code *)*puVar1)(0x1028,(undefined4 *)this_ptr_00,
                                 *(undefined2 *)((int)pvVar7 + 0xe));
  uStack_14 = 0x0;
  while( true )
  {
    if (uStack_10 <= uStack_14)
    {
      return 0x0;
    }
    pvVar7 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(this_ptr_00);
    uVar5 = (uint)((ulong)pvVar7 >> 0x10);
    uVar6 = uVar5 | (uint)pvVar7;
    if (((uVar6 != 0x0) &&
        (iVar2 = search_array_for_value
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10),
                            *(int *)((uint)pvVar7 + 0xc)), iVar2 != 0x0)) &&
       (uVar3 = UI_Item_List_Get_Value_by_ID_Offset6_6744(pvVar7,0xd),
       uVar6 != 0x0 || uVar3 != 0x0)) break;
    uStack_14 += 0x1;
  }
  return 0x1;
}



undefined2 __stdcall16far const_1_stub_1030_db72(void)
{
  return 0x1;
}



// Transitions a building from the Paused state (6) back to the Active state (5).

void __stdcall16far UI_Build_Item_Resume_from_Pause_Logic_db78(void *this_ptr)
{
  if (*(int *)((int)(void *)this_ptr + 0x12) == 0x6)
  {
    UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x5);
  }
  return;
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



undefined2 __stdcall16far const_1_stub_1030_dc02(void)
{
  return 0x1;
}



void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_dc08(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI build item Type 0xE036. This type represents a building sub-entity
// (like a wall or road segment) that must register with a parent hub. Sets vtable to
// 0xE036.

void * __stdcall16far UI_Build_Item_TypeE036_ctor_init_dc96(void *this_ptr)
{
  undefined2 uVar1;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined4 *)((int)(void *)this_ptr + 0x20) = 0x0;
  *(undefined2 *)this_ptr = 0xe036;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1030;
  return this_ptr;
}



void * __stdcall16far
UI_Build_Item_TypeE036_ctor_with_Params_dcc2
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined4 *)(param_1 + 0x10) = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xe036;
  param_1[0x1] = 0x1030;
  return (undefined2 *)CONCAT22(param_2,param_1);
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



// Serializes Type 0xE036 build item state, including the 4-byte parent ID at offset
// 0x20.

int __stdcall16far
UI_Build_Item_TypeE036_Save_to_File_Logic_de7c(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  void *unaff_SS;
  undefined4 local_10 [0x3];
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(this_ptr,file_ctx);
  iVar2 = 0x0;
  if (uVar1 != 0x0)
  {
    local_10[0x0] = *(undefined4 *)((int)(void *)this_ptr + 0x20);
    iVar2 = file_write_check((long)file_ctx,local_10,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    iVar2 = 0x1;
  }
  return iVar2;
}



int __stdcall16far
UI_Build_Item_TypeE036_Load_from_File_Logic_dec4(u32 this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  undefined2 in_stack_0000000a;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(this_ptr,file_ctx);
  iVar2 = 0x0;
  if (uVar1 != 0x0)
  {
    if (0x1 < (int)PTR_DAT_1050_0000_1050_0312)
    {
      iVar2 = file_read_check((long)_file_ctx,(void *)((int)this_ptr + 0x20),
                              (void *)(this_ptr >> 0x10));
      if (iVar2 == 0x0)
      {
        g_LastFileErrorMsgID = (undefined *)0x6d2;
        return 0x0;
      }
    }
    iVar2 = 0x1;
  }
  return iVar2;
}



// Initialization routine for Type 0xE036. Scans the colony's managed entity list to
// find a parent hub (Type D88E) and registers itself in the first available sub-item
// slot.

void __stdcall16far UI_Build_Item_TypeE036_Register_with_Parent_Hub_df0c(void *this_ptr)
{
  ulong index;
  astruct_165 *paVar1;
  astruct_166 *this_ptr_00;
  ulong uVar2;
  u16 uVar3;
  int index_00;
  u16 segment;
  undefined2 uVar4;
  void *obj_ptr;
  void *this_ptr_01;
  u16 sub_id;
  astruct_166 *iStack_e;
  astruct_165 *iStack_a;
  
  obj_ptr = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar4 = (undefined2)((ulong)obj_ptr >> 0x10);
  paVar1 = (astruct_165 *)*(undefined4 *)((int)obj_ptr + 0x2e);
  iStack_a = (astruct_165 *)paVar1;
  if (*(int *)((int)obj_ptr + 0x30) != 0x0 || iStack_a != NULL)
  {
    uVar4 = (undefined2)((ulong)paVar1 >> 0x10);
    this_ptr_00 = *(astruct_166 **)&iStack_a->field_0x210;
    iStack_e = (astruct_166 *)this_ptr_00;
    if (iStack_a->field530_0x212 != 0x0 || iStack_e != NULL)
    {
      uVar2 = iStack_e->field10_0xa;
      uVar3 = UI_Build_Item_Get_SubItem_Category_ID_dfcc(this_ptr);
      if (uVar3 != 0x0)
      {
        for (index = 0x1; index < uVar2; index += 0x1)
        {
          sub_id = uVar3;
          this_ptr_01 = UI_Managed_List_Get_Item_at_Index_1312(this_ptr_00,index);
          segment = (u16)((ulong)this_ptr_01 >> 0x10);
          index_00 = UI_Build_Item_TypeD88E_Find_Free_Slot_by_ID_cde8
                               ((int)this_ptr_01,segment,sub_id);
          if (-0x1 < index_00)
          {
            UI_Build_Item_TypeD88E_Set_SubItem_State_and_Object_cef8
                      (this_ptr_01,obj_ptr,0x1,index_00);
            *(undefined4 *)((int)this_ptr + 0x20) =
                 *(undefined4 *)((int)this_ptr_01 + 0x4);
            return;
          }
        }
      }
    }
  }
  return;
}



// Maps building type IDs (0x73, 0x74, 0x75, 0x77, 0x78) to their internal sub-item
// category indices (1, 2, or 3).

u16 __stdcall16far UI_Build_Item_Get_SubItem_Category_ID_dfcc(void *this_ptr)
{
  int iVar1;
  u16 uStack_4;
  
  iVar1 = *(int *)((int)(void *)this_ptr + 0xc);
  if (iVar1 == 0x73)
  {
LAB_1030_dfde:
    uStack_4 = 0x1;
  }
  else
  {
    if (iVar1 != 0x74)
    {
      if (iVar1 == 0x75)
      {
        return 0x3;
      }
      if (iVar1 == 0x77) goto LAB_1030_dfde;
      if (iVar1 != 0x78)
      {
        return 0x0;
      }
    }
    uStack_4 = 0x2;
  }
  return uStack_4;
}



void * __stdcall16far
UI_Build_Item_TypeE036_dtor_Scalar_Deleting_e010(void *param_1,byte param_2)
{
  UI_Build_Item_TypeE036_dtor_Internal_dcf4(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
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



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_e1f4(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *local_a = 0xe2ae;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
}



void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_Alternative_e282(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI build item Type 0xE4EA. Initializes base with ID 10999 and stores
// specialized command parameters at 0x108-0x110. Sets vtable to 0xE4EA.

void * __stdcall16far
UI_Build_Item_TypeE4EA_ctor_init_e2be
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x2af7);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  *(undefined4 *)(puVar1 + 0x84) = param_4;
  *(undefined4 *)(puVar1 + 0x86) = param_3;
  puVar1[0x88] = param_2;
  *param_1 = 0xe4ea;
  puVar1[0x1] = 0x1030;
  return param_1;
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



// Virtual event processor for Type 0xE4EA. Dispatches to command execution routines
// based on internal flag state.

u16 __stdcall16far UI_Build_Item_TypeE4EA_Process_Event_e328(void *this_ptr)
{
  if (*(int *)((int)this_ptr + 0x110) == 0x0)
  {
    Helper_NoOp_Stub_e4ba();
  }
  else
  {
    Simulator_Command_TypeE4EA_Execute_Summary_and_Dispatch_e410(this_ptr);
  }
  return 0x1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_e34e(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x112));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar8 = (undefined2)((ulong)param_1 >> 0x10);
    iVar6 = (int)param_1;
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar6 + 0x108);
    *(undefined4 *)(puVar3 + 0x86) = *(undefined4 *)(iVar6 + 0x10c);
    puVar3[0x88] = *(undefined2 *)(iVar6 + 0x110);
    *local_a = 0xe4ea;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
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
