/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 24/56
 * Original lines (combined): 67203-68918
 * Boundaries: top-level declarations/definitions only
 */




// Maps a specific entity type ID to a broader grouping ID (1, 2, 3, 6, 10). Used for UI
// layout and categorization.

u16 __cdecl16far Map_Entity_Type_to_Grouping_ID_Logic_c3b4(u16 entity_type)
{
  u16 uStack_6;
  
  uStack_6 = 0x1;
  switch(entity_type)
  {
  case 0x1:
  case 0x2:
  case 0x3:
  case 0x5:
  case 0x8:
  case 0x9:
  case 0xa:
  case 0xb:
  case 0xc:
    uStack_6 = 0x3;
    break;
  case 0x4:
    uStack_6 = 0x6;
    break;
  case 0x6:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    uStack_6 = 0xa;
    break;
  case 0x7:
    uStack_6 = 0x2;
    break;
  case 0xd:
  case 0xe:
    uStack_6 = 0x1;
  }
  return uStack_6;
}



// Maps entity type 0xF to ID 1, otherwise returns 3. Likely a specialized UI filter.

u16 __cdecl16far Map_Entity_Type_to_Specific_ID_Helper_c42e(int entity_type)
{
  u16 uVar1;
  
  if (entity_type == 0xf)
  {
    uVar1 = 0x1;
  }
  else
  {
    uVar1 = 0x3;
  }
  return uVar1;
}



// Retrieves a 6-byte item from the Planet View's internal array by index. Triggers a
// sort if the list is marked as dirty.

void __stdcall16far
UI_Planet_View_List_Get_Item_at_Index_c4a8
          (void *this_ptr,void *out_field2,void *out_field1,int index)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(int *)((int)(void *)this_ptr + 0x1c) != 0x0)
  {
    UI_Planet_View_List_Sort_Logic_c6a4(this_ptr);
  }
  uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x18);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  puVar2 = (undefined4 *)((int)uVar1 + index * 0x6);
  *(undefined4 *)out_field1 = *puVar2;
  *(undefined2 *)out_field2 = *(undefined2 *)(puVar2 + 0x1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Finds an item in the Planet View list by its target pointer and updates its state
// field (offset 4) using data from the simulator resource manager.

void __stdcall16far
UI_Planet_View_List_Update_Item_State_from_Resource_c4f4
          (void *this_ptr,u16 arg2,u16 arg3,long entity_id)
{
  u16 uVar1;
  void *pvVar2;
  void *this_ptr_00;
  
  pvVar2 = UI_Planet_View_List_Find_Item_by_Target_c6de(this_ptr,entity_id);
  if (pvVar2 != NULL)
  {
    this_ptr_00 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,(u8 *)entity_id);
    uVar1 = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr_00);
    *(undefined2 *)((int)(void *)pvVar2 + 0x4) = *(undefined2 *)(uVar1 * 0x2 + 0x4ea4);
  }
  return;
}



// Retrieves the target far pointer associated with a specific index in the Planet View
// list.

void * __stdcall16far
UI_Planet_View_List_Get_Item_FarPtr_c54a(void *this_ptr,ulong index)
{
  undefined4 *puVar1;
  astruct_341 *uVar2;
  undefined2 uVar3;
  void *pvStack_6;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_341 *)this_ptr;
  if (uVar2->field24_0x1c != 0x0)
  {
    UI_Planet_View_List_Sort_Logic_c6a4(this_ptr);
  }
  pvStack_6 = NULL;
  if ((*(long *)&uVar2->field_0x18 != 0x0) && (index < uVar2->field16_0x10))
  {
    puVar1 = (undefined4 *)(*(int *)&uVar2->field_0x18 + (int)index * 0x6);
    if (uVar2->field23_0x1a != 0x0 || puVar1 != NULL)
    {
      pvStack_6 = (void *)*puVar1;
    }
  }
  return pvStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
UI_Planet_View_List_Add_Entity_c5b4(undefined4 *param_1,u8 *param_2)
{
  long *plVar1;
  undefined2 *puVar2;
  u16 uVar3;
  undefined2 uVar4;
  void *this_ptr;
  undefined4 *puVar5;
  
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)param_2);
  uVar3 = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
  puVar5 = UI_Planet_View_List_Find_Item_by_Target_c6de(param_1,0x0);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if ((int)((ulong)puVar5 >> 0x10) == 0x0 && (undefined4 *)puVar5 == NULL)
  {
    puVar2 = (undefined2 *)((int)*param_1 + 0x20);
    (*(code *)*puVar2)();
    puVar5 = UI_Planet_View_List_Find_Item_by_Target_c6de(param_1,0x0);
    if (puVar5 == NULL)
    {
      return 0x0;
    }
  }
  *(undefined2 *)((undefined4 *)param_1 + 0x7) = 0x1;
  plVar1 = (undefined4 *)param_1 + 0x2;
  *plVar1 = *plVar1 + 0x1;
  *puVar5 = param_2;
  *(undefined2 *)((undefined4 *)puVar5 + 0x1) = *(undefined2 *)(uVar3 * 0x2 + 0x4ea4);
  return 0x1;
}



// A simple wrapper that triggers the internal sort logic for the Planet View list.

void __stdcall16far UI_Planet_View_List_Sort_Wrapper_c694(void *this_ptr)
{
  UI_Planet_View_List_Sort_Logic_c6a4(this_ptr);
  return;
}



// Sorts the Planet View's internal item array using qsort and a 6-byte element
// comparison callback.

void __stdcall16far UI_Planet_View_List_Sort_Logic_c6a4(void *this_ptr)
{
  astruct_340 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_340 *)this_ptr;
  if ((uVar1->field20_0x18 != 0x0) && (uVar1->field8_0x8 != 0x0))
  {
    qsort_far_array_with_callback_internal
              ((void *)(void *)uVar1->field20_0x18,
               (int)((ulong)uVar1->field20_0x18 >> 0x10),uVar1->field13_0x10,(void *)0x6
              );
    uVar1->field21_0x1c = 0x0;
  }
  return;
}



// Performs a linear search through the Planet View list to find an item whose target
// pointer matches the provided value.

void * __stdcall16far
UI_Planet_View_List_Find_Item_by_Target_c6de(void *this_ptr,long target_ptr)
{
  int iVar1;
  astruct_339 *uVar2;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ulong uStack_6;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_339 *)this_ptr;
  if (uVar2->field22_0x1c != 0x0)
  {
    UI_Planet_View_List_Sort_Logic_c6a4(this_ptr);
  }
  uStack_6 = 0x0;
  while( true )
  {
    if (uVar2->field16_0x10 <= uStack_6)
    {
      return NULL;
    }
    iVar1 = (int)uStack_6 * 0x6;
    uVar4 = (undefined2)(uVar2->field21_0x18 >> 0x10);
    iVar2 = (int)uVar2->field21_0x18;
    if (*(long *)(iVar2 + iVar1) == target_ptr) break;
    uStack_6 += 0x1;
  }
  return (void *)CONCAT22(uVar4,(void *)(iVar2 + iVar1));
}



// Scalar deleting destructor for the Planet View UI component.

void * __stdcall16far
UI_Planet_View_Component_dtor_Scalar_Deleting_c80e(void *this_ptr,byte flags)
{
  UI_Planet_View_Component_dtor_Internal_Cleanup_logic_c47a(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through entities and performs per-turn state updates for specific types
// (0x12, 0x13, 0x81). Handles value adjustments and event triggers based on global
// state.

void __stdcall16far Simulator_Process_Entity_Turn_Updates_Logic(void *arg1)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  void *pvVar7;
  int iStack_34;
  int iStack_24;
  undefined1 local_1c [0x4];
  undefined4 uStack_18;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  long lStack_c;
  undefined **ppuStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  uStack_4 = (undefined2)((ulong)lVar6 >> 0x10);
  uStack_6 = (undefined2)lVar6;
  ppuStack_8 = (undefined **)g_ModeVersion_13AE;
  if (g_ModeVersion_13AE == (undefined *)0x1)
  {
    ppuStack_8 = (undefined **)&p_CurrentHeapContext;
  }
  lStack_c = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
  uVar5 = (undefined2)((ulong)lStack_c >> 0x10);
  puStack_10 = (undefined4 *)*(long *)((int)lStack_c + 0xa);
  puStack_14 = (undefined4 *)*(undefined4 *)((int)lStack_c + 0xe);
  init_long_pair(local_1c,(long)puStack_10);
  do
  {
    do
    {
      while( true )
      {
        do
        {
          lVar6 = get_next_list_item(local_1c);
          iVar4 = (int)((ulong)lVar6 >> 0x10);
          iVar2 = (int)lVar6;
          if (iVar4 == 0x0 && iVar2 == 0x0)
          {
            return;
          }
          iVar3 = *(int *)(iVar2 + 0x4);
        } while ((iVar3 < 0x12) || (SBORROW2(iVar3,0x12)));
        if (iVar3 != 0x13 && 0x0 < iVar3 + -0x12) break;
        iStack_34 = 0x0;
        if (ppuStack_8 == (undefined **)((int)(undefined **)&p_CurrentHeapContext + 0x1)
           )
        {
          iStack_34 = *(int *)(iVar2 + 0x6) / 0x2;
        }
        else if (ppuStack_8 == (undefined **)&p_LastAllocatedBlock)
        {
          iVar3 = *(int *)(iVar2 + 0x6) * 0x3;
          iStack_34 = (int)(iVar3 + (iVar3 >> 0xf & 0x3U)) >> 0x2;
        }
        *(int *)(iVar2 + 0x6) = *(int *)(iVar2 + 0x6) - iStack_34;
        uVar5 = (undefined2)((ulong)puStack_10 >> 0x10);
        *(undefined2 *)((int)(undefined4 *)puStack_10 + 0xa) = 0x0;
        puVar1 = (undefined2 *)((int)*puStack_10 + 0xc);
        (*(code *)*puVar1)(0x1008,(undefined4 *)puStack_10,uVar5,iVar2,iVar4);
        *(undefined2 *)((int)(undefined4 *)puStack_10 + 0xa) = 0x1;
        uStack_18 = 0x0;
        puVar1 = (undefined2 *)((int)*puStack_14 + 0x4);
        (*(code *)*puVar1)(0x1008,(undefined4 *)puStack_14,
                           (int)((ulong)puStack_14 >> 0x10),iVar2,iVar4);
      }
    } while (iVar3 != 0x81);
    iStack_24 = 0x0;
    if (ppuStack_8 == (undefined **)&p_CurrentHeapContext)
    {
      iVar3 = *(int *)(iVar2 + 0x6);
LAB_1020_cba7:
      iStack_24 = (int)(iVar3 + (iVar3 >> 0xf & 0x3U)) >> 0x2;
    }
    else if (ppuStack_8 ==
             (undefined **)((int)(undefined **)&p_CurrentHeapContext + 0x1))
    {
      iStack_24 = *(int *)(iVar2 + 0x6) / 0x2;
    }
    else if (ppuStack_8 == (undefined **)&p_LastAllocatedBlock)
    {
      iVar3 = *(int *)(iVar2 + 0x6) * 0x3;
      goto LAB_1020_cba7;
    }
    pvVar7 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(arg1);
    iStack_24 = *(int *)(iVar2 + 0x6) - iStack_24;
    UI_Component_Add_Value_to_List_at_22_Logic_7ddc
              ((void *)pvVar7,(int)((ulong)pvVar7 >> 0x10),iStack_24,iStack_24 >> 0xf,
               0x1e);
    puVar1 = (undefined2 *)((int)*puStack_10 + 0xc);
    (*(code *)*puVar1)(0x1030,(undefined4 *)puStack_10,(int)((ulong)puStack_10 >> 0x10),
                       iVar2,iVar4);
    uStack_18 = 0x0;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_Finalize_and_Notify_Morale_ce32(void *param_1,undefined2 param_2)
{
  void *pvVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int qty_delta;
  int arg4;
  undefined2 uVar4;
  undefined2 uVar5;
  int resource_id;
  
  UI_Build_Item_Set_Flag_at_14_Logic_09b8((void *)CONCAT22(param_2,param_1));
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2
                     ((void *)CONCAT22(param_2,param_1));
  if (*(long *)((int)(void *)pvVar1 + 0x200) != 0x8000002)
  {
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
    UI_Object_Decrement_Item_Count_in_Collection_E_Logic_maybe
              ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10));
    uVar5 = 0x0;
    resource_id = 0x9;
    arg4 = 0x1;
    uVar4 = 0x0;
    uVar3 = 0x0;
    qty_delta = 0x0;
    uVar2 = 0x0;
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
    Turn_Manager_Add_Resource_Change_Entry_Logic
              ((void *)pvVar1,CONCAT22(uVar3,uVar2),qty_delta,arg4,CONCAT22(uVar5,uVar4)
               ,resource_id);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles per-turn resource updates for a colony component. If specific conditions are
// met, triggers resource consumption and pushes events to the Turn Manager.

void __stdcall16far Colony_Resource_Update_Logic_ce9e(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  void *pvVar3;
  
  UI_Build_Item_OnTick_State4_Update_be9e(this_ptr);
  if (*(int *)((int)(void *)this_ptr + 0x12) == 0x5)
  {
    Colony_Consume_Resource_from_Global_Pool_cefc(this_ptr);
    pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
    uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
    if (*(long *)((int)(void *)pvVar2 + 0x200) != 0x8000002)
    {
      pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x2b);
      Turn_Manager_Push_Resource_Event_Logic
                ((void *)pvVar3,*(long *)((int)(void *)pvVar2 + 0x4),0x5);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Decrements a specific resource (likely power or maintenance) from the colony's global
// pool and distributes the allocation across internal fields.

void __stdcall16far Colony_Consume_Resource_from_Global_Pool_cefc(void *this_ptr)
{
  void *pvVar1;
  void *pvVar2;
  undefined2 uStack_c;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  if (*(long *)((int)(void *)pvVar1 + 0x200) == 0x8000002)
  {
    uStack_c = 0x32;
  }
  else
  {
    pvVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
    uStack_c = UI_Object_Get_Value_at_Offset_1E_Logic((void *)pvVar2);
    if (0x32 < uStack_c)
    {
      uStack_c = 0x32;
    }
    UI_Object_Decrement_Value_at_Offset_1E_Logic
              ((void *)pvVar2,(int)((ulong)pvVar2 >> 0x10));
  }
  Colony_Distribute_Resource_Allocation_cf6c(this_ptr,uStack_c,pvVar1);
  return;
}



// Distributes a resource value across five internal allocation fields (0x50, 0x78,
// 0xA0, 0xC8, 0xF0) by dividing the value and applying remainders to the primary field.

void __stdcall16far
Colony_Distribute_Resource_Allocation_cf6c
          (undefined2 param_1,undefined2 param_2,int param_3,undefined4 param_4)
{
  uint *puVar1;
  uint uVar2;
  astruct_338 *paVar3;
  astruct_338 *iVar4;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 uVar8;
  
  uVar8 = (undefined2)((ulong)param_4 >> 0x10);
  paVar3 = (astruct_338 *)*(undefined4 *)((int)param_4 + 0x1f6);
  iVar4 = (astruct_338 *)paVar3;
  uVar6 = (undefined2)((ulong)paVar3 >> 0x10);
  uVar4 = param_3 / 0x5;
  uVar5 = uVar4 * -0x4 + param_3;
  puVar1 = &iVar4->field80_0x50;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  iVar4->field81_0x52 =
       iVar4->field81_0x52 + ((int)uVar5 >> 0xf) + (uint)CARRY2(uVar2,uVar5);
  iVar7 = (int)uVar4 >> 0xf;
  puVar1 = &iVar4->field118_0x78;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  iVar4->field119_0x7a = iVar4->field119_0x7a + iVar7 + (uint)CARRY2(uVar2,uVar4);
  puVar1 = &iVar4->field156_0xa0;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  iVar4->field157_0xa2 = iVar4->field157_0xa2 + iVar7 + (uint)CARRY2(uVar2,uVar4);
  puVar1 = &iVar4->field194_0xc8;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  iVar4->field195_0xca = iVar4->field195_0xca + iVar7 + (uint)CARRY2(uVar2,uVar4);
  puVar1 = &iVar4->field232_0xf0;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  iVar4->field233_0xf2 = iVar4->field233_0xf2 + iVar7 + (uint)CARRY2(uVar2,uVar4);
  *(undefined2 *)((int)param_4 + 0x1fe) = 0x1;
  return;
}



// Performs a multi-stage validation check for complex simulator interactions or entity
// placements.

u16 __stdcall16far
Simulator_Complex_Interaction_Validator_d118
          (void *arg1,void *coords,long arg3,long entity_id)
{
  u16 uVar1;
  void *x;
  u16 y;
  
  x = (void *)arg1;
  y = (u16)((ulong)arg1 >> 0x10);
  uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                    ((u16)x,y,coords,entity_id);
  if (uVar1 == 0x5)
  {
    uVar1 = Simulator_Handle_Entity_ID_Change_at_Coords_c23e
                      ((u16)x,y,coords,arg3,entity_id);
    if (uVar1 != 0x0)
    {
      uVar1 = Simulator_Validate_Proximity_Interaction_Rules_c3aa
                        ((u16)x,y,coords,(u8 *)arg3,entity_id);
      if (uVar1 != 0x0)
      {
        uVar1 = Simulator_Is_Coordinate_Within_Client_Margins_c314
                          ((u16)x,y,coords,(u16)(u8 *)arg3,(u16)((ulong)arg3 >> 0x10),
                           (u8 *)entity_id);
        if (uVar1 != 0x0)
        {
          return 0x1;
        }
      }
    }
  }
  else
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6a8;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks world coordinates for specific proximity conditions and triggers virtual
// entity interactions if a match is found. Involves resource-mapped offset checks.

u16 __stdcall16far Simulator_Coordinate_Interaction_Trigger_d194(void *arg1)
{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  int map_id;
  u32 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  u16 unaff_SS;
  void *pvVar8;
  void *pvVar9;
  void *obj2;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined4 *puVar12;
  u32 *puVar13;
  ulong uStack_2a;
  ulong uStack_26;
  undefined4 uStack_22;
  undefined1 local_4 [0x2];
  
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_4));
  pvVar8 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(arg1);
  uVar4 = (undefined2)((ulong)pvVar8 >> 0x10);
  pvVar9 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)pvVar8 + 0x10));
  obj2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(arg1);
  iVar2 = Simulator_Calc_Manhattan_Distance_between_Objects_bd74
                    ((u16)local_4,unaff_SS,(u32)pvVar9,(u32)obj2);
  if (iVar2 < 0x0)
  {
    return 0x0;
  }
  if (0x1e < iVar2)
  {
    pvVar9 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
    map_id = (int)((ulong)pvVar9 >> 0x10);
    iVar2 = Resource_Category_Get_Mapped_Offset_Value_Logic((void *)pvVar9,map_id);
    if (iVar2 == 0x0)
    {
      puVar3 = get_array_element_6bytes
                         ((int *)_p_StringPropertyTable,
                          (int)((ulong)_p_StringPropertyTable >> 0x10));
      uVar7 = 0x1038;
      puVar5 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                         ((int)pvVar8,uVar4,puVar3,map_id);
      uStack_22 = (undefined4 *)CONCAT22(puVar5,puVar3);
      puVar1 = (undefined2 *)((int)*uStack_22 + 0x10);
      puVar12 = puVar3;
      puVar13 = puVar5;
      uStack_26 = (*(code *)*puVar1)(0x1038,puVar3,puVar5);
      uStack_2a = 0x0;
      while( true )
      {
        if (uStack_26 <= uStack_2a)
        {
          if (uStack_22 == NULL)
          {
            return 0x0;
          }
          (*(code *)*(undefined2 *)(undefined2 *)*uStack_22)
                    (uVar7,puVar3,puVar5,0x1,puVar12,puVar13,uStack_22,uStack_22);
          return 0x0;
        }
        uVar10 = (int)obj2;
        uVar11 = (int)((ulong)obj2 >> 0x10);
        pvVar8 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_22);
        uVar6 = (undefined2)((ulong)pvVar8 >> 0x10);
        uVar4 = SUB42(pvVar8,0x0);
        uVar7 = 0x1030;
        iVar2 = Simulator_Calc_Manhattan_Distance_between_Objects_bd74
                          ((u16)local_4,unaff_SS,(u32)pvVar8,CONCAT22(uVar11,uVar10));
        if ((0x0 < iVar2) && (iVar2 < 0x1f)) break;
        uStack_2a += 0x1;
      }
      if (uStack_22 == NULL)
      {
        return 0x1;
      }
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_22)
                (0x1030,puVar3,puVar5,0x1,puVar12,puVar13,uStack_22,uStack_22,uVar4,
                 uVar6);
      return 0x1;
    }
  }
  return 0x1;
}



// Validates if Type 56 build item can be placed. Checks if field 0x20 is 2, or performs
// complex history-based mapping checks.

u16 __stdcall16far UI_Build_Item_Type56_Validate_Placement_Logic_d4ca(void *this_ptr)
{
  u16 uVar1;
  void *pvVar2;
  int index;
  
  if (*(int *)((int)(void *)this_ptr + 0x20) == 0x2)
  {
    return 0x1;
  }
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  index = 0x63;
  pvVar2 = (void *)Colony_Get_Entity_Object_by_PackedID_200_Logic
                             ((void *)*(undefined4 *)((int)(void *)pvVar2 + 0x2e));
  uVar1 = Colony_Check_Value_at_Index_is_Zero_25b2(pvVar2,index);
  if (uVar1 != 0x0)
  {
    return 0x0;
  }
  return 0xffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_Sync_World_Entity_and_VCall_58_d5f2(void *param_1,void *param_2)
{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  void *pvVar2;
  undefined4 *puVar3;
  undefined1 *out_entity;
  char cStack_37;
  undefined1 local_32 [0xa];
  u8 *local_28;
  u8 *local_24;
  undefined4 *local_1c;
  undefined4 local_1a;
  int local_16;
  u16 local_14;
  void *local_12;
  undefined2 local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  void *local_6;
  undefined2 local_4;
  
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_4 = (undefined2)((ulong)pvVar2 >> 0x10);
  local_6 = (void *)pvVar2;
  local_c = *(undefined4 *)((int)local_6 + 0xc);
  local_e = *(int *)((int)local_6 + 0x10);
  local_1c = &local_c;
  local_8 = local_e;
  pvVar2 = UI_Build_Item_Get_World_Context_Entity_bab6(param_1);
  local_10 = (undefined2)((ulong)pvVar2 >> 0x10);
  local_12 = (void *)pvVar2;
  local_14 = Simulator_Get_Entity_Resource_Category_ID_2fac(pvVar2);
  local_1a = local_c;
  local_16 = local_8;
  local_24 = (u8 *)CONCAT22(local_24._2_2_,&local_1a);
  local_e += 0x1;
  if (local_e < (int)local_14)
  {
    out_entity = (undefined1 *)CONCAT22(unaff_SS,local_32);
    local_16 = local_e;
    pvVar2 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(param_1);
    puVar3 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                       (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_1a),
                        (long)pvVar2,out_entity);
    local_28 = (u8 *)*puVar3;
    cStack_37 = (char)((ulong)local_28 >> 0x18);
    local_24 = local_28;
    if (cStack_37 != '\0')
    {
      pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)local_28);
      puVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar2);
      puVar1 = (undefined2 *)((int)*puVar3 + 0x58);
      (*(code *)*puVar1)();
    }
  }
  UI_Build_Item_Set_Active_Object_Logic_b46e(param_1,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_State7_Cleanup_and_VCall_24_d6e6(void *param_1)
{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  void *pvVar2;
  undefined4 *puVar3;
  undefined1 *out_entity;
  char cStack_37;
  undefined1 local_32 [0xa];
  u8 *local_28;
  u8 *local_24;
  undefined4 *local_1c;
  undefined4 local_1a;
  int local_16;
  u16 local_14;
  undefined2 local_12;
  undefined2 local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  int local_6;
  undefined2 local_4;
  
  UI_Build_Item_Set_State_7_and_Cleanup_b514(param_1);
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_4 = (undefined2)((ulong)pvVar2 >> 0x10);
  local_6 = (int)pvVar2;
  local_c = *(undefined4 *)(local_6 + 0xc);
  local_e = *(int *)(local_6 + 0x10);
  local_1c = &local_c;
  local_8 = local_e;
  pvVar2 = UI_Build_Item_Get_World_Context_Entity_bab6(param_1);
  local_10 = (undefined2)((ulong)pvVar2 >> 0x10);
  local_12 = SUB42(pvVar2,0x0);
  local_14 = Simulator_Get_Entity_Resource_Category_ID_2fac(pvVar2);
  local_1a = local_c;
  local_24 = (u8 *)CONCAT22(local_24._2_2_,&local_1a);
  local_16 = local_e + 0x1;
  if (local_16 < (int)local_14)
  {
    out_entity = (undefined1 *)CONCAT22(unaff_SS,local_32);
    local_e = local_16;
    pvVar2 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(param_1);
    puVar3 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                       (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_1a),
                        (long)pvVar2,out_entity);
    local_28 = (u8 *)*puVar3;
    cStack_37 = (char)((ulong)local_28 >> 0x18);
    if (cStack_37 != '\0')
    {
      local_24 = local_28;
      pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)local_28);
      puVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar2);
      if (*(int *)((undefined4 *)puVar3 + 0x3) == 0x6a)
      {
        puVar1 = (undefined2 *)((int)*puVar3 + 0x24);
        (*(code *)*puVar1)();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a Construction UI Item. Initializes base construction object and
// links to the global planetary resource state (Resource 0x2F). Sets vtable to 0xE792.

void * __stdcall16far UI_Construction_Item_ctor_init_d954(void *this_ptr)
{
  void *pvVar1;
  undefined2 uVar2;
  long lVar3;
  
  UI_Build_Item_TypeE036_ctor_init_dc96(this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar1 = (void *)this_ptr;
  *(undefined2 *)((int)pvVar1 + 0x24) = 0x0;
  *(undefined2 *)((int)pvVar1 + 0x26) = 0x0;
  *(undefined4 *)((int)pvVar1 + 0x28) = 0x0;
  *(undefined2 *)this_ptr = 0xe792;
  *(undefined2 *)((int)pvVar1 + 0x2) = 0x1020;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  *(undefined2 *)((int)pvVar1 + 0x28) = (int)lVar3;
  *(undefined2 *)((int)pvVar1 + 0x2a) = (int)((ulong)lVar3 >> 0x10);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Parameterized constructor for Construction UI items. Sets type ID 0x49 and
// initializes links to planetary resource state.

void * __stdcall16far
UI_Construction_Item_ctor_with_Params_d99e
          (void *this_ptr,u16 type_id,u16 arg2,void *arg3)
{
  astruct_337 *uVar1;
  undefined2 uVar2;
  long lVar3;
  
  UI_Build_Item_TypeE036_ctor_with_Params_dcc2(this_ptr,arg2,arg3);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_337 *)this_ptr;
  uVar1->field34_0x24 = type_id;
  uVar1->field35_0x26 = 0x0;
  (&uVar1->field36_0x28)[0x0] = 0x0;
  (&uVar1->field36_0x28)[0x1] = 0x0;
  *(undefined2 *)this_ptr = 0xe792;
  uVar1->field2_0x2 = 0x1020;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  uVar1->field36_0x28 = (uint16_t)lVar3;
  uVar1->field37_0x2a = (uint16_t)((ulong)lVar3 >> 0x10);
  uVar1->field15_0x10 = 0x49;
  return this_ptr;
}



// Processes the entity command queue for the current context (ID 2).

void __stdcall16far Simulator_Process_Entity_Command_Queue_da3c(void *this_ptr)
{
  UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x2);
  return;
}
