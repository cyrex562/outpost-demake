/*
 * Source: outpost.c
 * Chunk: 83/117
 * Original lines: 94415-95583
 * Boundaries: top-level declarations/definitions only
 */




// Iterates through all entities in the simulator map's linked list and triggers their
// virtual update callback at offset +8.

void __stdcall16far
Simulator_Map_Batch_Update_Entities_vcall_8_66de(void *this_ptr,u16 arg2)
{
  void *this_ptr_00;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)(void *)this_ptr + 0x4));
  while( true )
  {
    this_ptr_00 = (void *)get_next_list_item(local_a);
    if (this_ptr_00 == NULL) break;
    Simulator_Map_SubList_Reset_All_Collections_8bac(this_ptr_00,arg2);
  }
  return;
}



// Finds the sub-list covering specific coordinates and triggers a batch sync/update on
// its entities. Involves coordinate mapping and virtual dispatch.

void __stdcall16far
Simulator_Map_Batch_Sync_Entities_by_Rect_671c
          (void *this_ptr,void *arg2,void *arg3,long coords)
{
  void *this_ptr_00;
  
  this_ptr_00 = Simulator_Map_Find_SubList_by_Coords_677a(this_ptr,coords);
  Simulator_Map_SubList_Append_Entity_8bdc(this_ptr_00,arg2,arg3);
  return;
}



// Iterates through all entities in the simulator map's linked list and triggers their
// virtual action callback at offset +0xC.

void __stdcall16far Simulator_Map_Batch_Execute_Entities_vcall_C_6740(void *this_ptr)
{
  void *this_ptr_00;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this_ptr + 0x4));
  while( true )
  {
    this_ptr_00 = (void *)get_next_list_item(local_a);
    if (this_ptr_00 == NULL) break;
    Simulator_Map_SubList_Sort_All_Collections_8c38(this_ptr_00);
  }
  return;
}



// Searches the map's collection of sub-lists to find the one whose bounding coordinates
// (offset 0x24) contain the target world coordinate.

void * __stdcall16far
Simulator_Map_Find_SubList_by_Coords_677a(void *this_ptr,long coords)
{
  int iVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined1 local_a [0x8];
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + 0x4) == 0x0)
  {
    return NULL;
  }
  init_long_pair(local_a,*(long *)((int)(void *)this_ptr + 0x4));
  do
  {
    pvVar3 = (void *)get_next_list_item(local_a);
    iVar1 = (int)((ulong)pvVar3 >> 0x10);
    if (iVar1 == 0x0 && (void *)pvVar3 == NULL)
    {
      return pvVar3;
    }
  } while (*(long *)((int)(void *)pvVar3 + 0x24) != coords);
  return pvVar3;
}



// Constructor for a UI sub-component using vtable 0x8114. Initializes base window and
// zero-fills a large internal state structure (offset 0xC).

void * __stdcall16far UI_SubComponent_Type8114_ctor_init_67cc(void *this_ptr)
{
  astruct_263 *uVar1;
  undefined2 uVar2;
  
  UI_Window_Base_ctor_init_1628(this_ptr);
  uVar1 = (astruct_263 *)this_ptr;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_263 *)&uVar1->field_0xc;
  zero_init_struct_6bytes(uVar1);
  uVar1->field17_0x12 = 0x0;
  uVar1->field18_0x14 = 0x0;
  uVar1->field19_0x16 = 0x0;
  uVar1->field20_0x1a = 0x0;
  uVar1->field21_0x1e = 0x0;
  uVar1->field22_0x22 = 0x0;
  uVar1->field23_0x26 = 0x0;
  uVar1->field24_0x2a = 0x0;
  uVar1->field25_0x2e = 0x0;
  uVar1->field26_0x32 = 0x0;
  uVar1->field27_0x34 = 0x0;
  uVar1->field29_0x38 = 0x0;
  uVar1->field28_0x36 = 0x0;
  uVar1->field31_0x3c = 0x0;
  uVar1->field30_0x3a = 0x0;
  uVar1->field33_0x40 = 0x0;
  uVar1->field32_0x3e = 0x0;
  *(undefined2 *)this_ptr = 0x8114;
  uVar1->field2_0x2 = 0x1030;
  return this_ptr;
}



// Parameterized constructor for UI sub-component 0x8114. Sets up initial object links
// and state flags.

void * __stdcall16far
UI_SubComponent_Type8114_ctor_with_Params_684c
          (void *this_ptr,u16 arg1,u16 arg2,u16 arg3,u16 arg4,void *arg5)
{
  astruct_262 *uVar1;
  undefined2 uVar2;
  
  UI_Window_Base_ctor_with_Params_165e(this_ptr,0x5000000,arg5);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_262 *)this_ptr;
  uVar1->field11_0xc = *(u32 *)arg1;
  uVar1->field12_0x10 = *(u16 *)(arg1 + 0x4);
  uVar1->field13_0x12 = arg3;
  uVar1->field14_0x14 = arg3;
  uVar1->field15_0x16 = 0x0;
  uVar1->field16_0x1a = 0x0;
  uVar1->field17_0x1e = 0x0;
  uVar1->field18_0x22 = 0x0;
  uVar1->field19_0x26 = 0x0;
  uVar1->field20_0x2a = 0x0;
  uVar1->field21_0x2e = 0x0;
  uVar1->field22_0x32 = 0x0;
  uVar1->field23_0x34 = 0x0;
  uVar1->field24_0x36 = 0x0;
  uVar1->field25_0x3a = 0x0;
  uVar1->field26_0x3e = 0x0;
  *(undefined2 *)this_ptr = 0x8114;
  uVar1->field2_0x2 = 0x1030;
  return this_ptr;
}



// Internal destructor for UI sub-component 0x8114. Exhausitively cleans up multiple
// managed item lists, internal bitmap objects, and reverts vtables.

void __stdcall16far UI_SubComponent_Type8114_dtor_Internal_68dc(void *this_ptr)
{
  u32 *puVar1;
  int iVar2;
  void *pvVar3;
  astruct_261 *uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_261 *)this_ptr;
  *(undefined2 *)this_ptr = 0x8114;
  uVar4->field2_0x2 = 0x1030;
  pvVar3 = (void *)*(void **)&uVar4->field_0x22;
  if (uVar4->field33_0x24 != 0x0 || pvVar3 != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic((void *)CONCAT22(uVar4->field33_0x24,pvVar3));
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  pvVar3 = (void *)uVar4->field34_0x26;
  if (uVar4->field35_0x28 != 0x0 || pvVar3 != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic((void *)CONCAT22(uVar4->field35_0x28,pvVar3));
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  puVar1 = uVar4->field29_0x1e;
  iVar2 = uVar4->field30_0x20;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar4->field48_0x36;
  iVar2 = uVar4->field49_0x38;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar4->field50_0x3a;
  iVar2 = uVar4->field51_0x3c;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar4->field52_0x3e;
  iVar2 = uVar4->field53_0x40;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  UI_Window_Base_dtor_Internal_16b2(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if the component has any active resources or sub-items. Validates internal
// list sums (offset 0x22, 0x1A) and entity type groupings. Returns 1 if non-zero
// resources exist.

u16 __stdcall16far UI_Component_Check_Has_Active_Resources_69cc(u32 this_ptr)
{
  u16 category;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  void *pvVar4;
  
  uVar3 = (undefined2)(this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  if (*(long *)(iVar2 + 0x3e) != 0x0)
  {
    return 0x1;
  }
  if ((*(long *)(iVar2 + 0x22) != 0x0) &&
     (pvVar4 = UI_Item_List_Sum_Values_Logic((void *)*(undefined4 *)(iVar2 + 0x22)),
     (int)((ulong)pvVar4 >> 0x10) != 0x0 || (void *)pvVar4 != NULL))
  {
    return 0x1;
  }
  category = UI_Component_Get_Entity_Type_ID_6fa0((void *)this_ptr);
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),category);
  if ((iVar1 != 0x0) &&
     (pvVar4 = UI_Item_List_Sum_All_Values_Offset12_Logic_67d4
                         ((void *)*(undefined4 *)(iVar2 + 0x1a)), pvVar4 != NULL))
  {
    return 0x1;
  }
  return 0x0;
}



// Finds or creates an internal resource tracking object (offset 0x3E) and updates its
// list with new values. Merges matching resource items based on three criteria (0x4,
// 0x6, 0x8).

void __stdcall16far
UI_Component_Upsert_Resource_SubObject_6a2c(astruct_258 *param_1,astruct_259 *param_2)
{
  undefined2 *puVar1;
  astruct_491 *this;
  void *pvVar2;
  uint in_DX;
  uint uVar3;
  undefined2 uVar4;
  astruct_258 *uVar5;
  astruct_259 *iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  astruct_260 *paVar8;
  undefined2 in_stack_0000ffee;
  undefined1 local_a [0x8];
  astruct_260 *iVar1;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar5 = (astruct_258 *)param_1;
  if (uVar5->field62_0x3e == NULL)
  {
    this = allocate_memory(CONCAT22(in_stack_0000ffee,0xc));
    uVar3 = in_DX | (uint)this;
    if (uVar3 == 0x0)
    {
      uVar5->field62_0x3e = NULL;
    }
    else
    {
      pvVar2 = construct_object_with_vtable(this,in_DX);
      *(void **)&uVar5->field62_0x3e = pvVar2;
      *(uint *)((int)&uVar5->field62_0x3e + 0x2) = uVar3;
    }
  }
  init_long_pair(local_a,(long)uVar5->field62_0x3e);
  do
  {
    do
    {
      paVar8 = (astruct_260 *)get_next_list_item(local_a);
      uVar4 = (undefined2)((ulong)paVar8 >> 0x10);
      iVar1 = (astruct_260 *)paVar8;
      if (paVar8 == NULL) goto LAB_1030_6af4;
      uVar7 = (undefined2)((ulong)param_2 >> 0x10);
      iVar5 = (astruct_259 *)param_2;
    } while ((iVar1->field5_0x6 != iVar5->field5_0x6) ||
            (iVar1->field4_0x4 != iVar5->field4_0x4));
  } while (iVar1->field6_0x8 != iVar5->field6_0x8);
  iVar1->field7_0xa = iVar1->field7_0xa + iVar5->field7_0xa;
  iVar1->field8_0xc = iVar1->field8_0xc + iVar5->field8_0xc;
  param_2 = NULL;
LAB_1030_6af4:
  if (param_2 != NULL)
  {
    puVar1 = (undefined2 *)((int)*uVar5->field62_0x3e + 0x8);
    (*(code *)*puVar1)(0x1008,uVar5->field62_0x3e,(int)param_2,
                       (int)((ulong)param_2 >> 0x10));
  }
  return;
}



// Pops the head object from an internal resource list (offset 0x3A) via a virtual call
// (0x10) and conditionally destroys the list manager if it becomes empty.

void * __stdcall16far UI_Component_Pop_Resource_SubObject_Logic_6b16(void *this_ptr)
{
  undefined2 *puVar1;
  astruct_257 *uVar2;
  undefined2 uVar3;
  void *pvVar4;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_257 *)this_ptr;
  if (*(long *)&uVar2->field_0x3a == 0x0)
  {
    return NULL;
  }
  puVar1 = (undefined2 *)((int)**(undefined4 **)&uVar2->field_0x3a + 0x10);
  pvVar4 = (void *)(*(code *)*puVar1)();
  if (*(int *)((int)*(undefined4 *)&uVar2->field_0x3a + 0x8) == 0x0)
  {
    if (uVar2->field60_0x3c != 0x0 || *(undefined4 **)&uVar2->field_0x3a != NULL)
    {
      puVar1 = (undefined2 *)(undefined2 *)**(undefined4 **)&uVar2->field_0x3a;
      (*(code *)*puVar1)();
    }
    *(undefined4 *)&uVar2->field_0x3a = 0x0;
  }
  return pvVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through the component's internal entity list (offset 0x1E) and counts those
// matching the provided type ID.

int __stdcall16far
UI_Component_Count_SubEntities_of_Type_6b86(void *this_ptr,int type_id)
{
  undefined2 *puVar1;
  astruct_256 *uVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  ulong uVar4;
  u8 *puVar5;
  void *pvVar6;
  ulong uStack_c;
  int iStack_4;
  
  iStack_4 = 0x0;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_256 *)this_ptr;
  if (uVar2->field30_0x1e == NULL)
  {
    uVar4 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*uVar2->field30_0x1e + 0x10);
    uVar4 = (*(code *)*puVar1)();
  }
  for (uStack_c = 0x0; uStack_c < uVar4; uStack_c += 0x1)
  {
    puVar1 = (undefined2 *)((int)*uVar2->field30_0x1e + 0x4);
    puVar5 = (u8 *)(*(code *)*puVar1)(unaff_CS,uVar2->field30_0x1e,uStack_c);
    if (puVar5 != NULL)
    {
      unaff_CS = 0x1028;
      pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)puVar5);
      if (*(int *)((int)pvVar6 + 0xc) == type_id)
      {
        iStack_4 += 0x1;
      }
    }
  }
  return iStack_4;
}



// Updates an internal resource value (offset 0x32) and applies the delta to a secondary
// limit or total field (offset 0x34).

void __stdcall16far
UI_Component_Adjust_Resource_Value_and_Limit_6c1a(void *this_ptr,int value)
{
  int iVar1;
  astruct_255 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_255 *)this_ptr;
  iVar1 = uVar2->field50_0x32;
  uVar2->field50_0x32 = value;
  uVar2->field51_0x34 = uVar2->field51_0x34 + (value - iVar1);
  iVar1 = uVar2->field50_0x32;
  if (iVar1 < 0x0)
  {
    iVar1 = 0x0;
  }
  uVar2->field50_0x32 = iVar1;
  return;
}



// Caps an internal value (offset 0x34) based on a primary limit (offset 0x32).

void __stdcall16far UI_Component_Set_Cap_Value_Logic_6c4c(void *this_ptr,int value)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = *(int *)((int)(void *)this_ptr + 0x32);
  if (value < iVar1)
  {
    iVar1 = value;
  }
  *(int *)((int)(void *)this_ptr + 0x34) = iVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Executes a resource-related action (type 0x3A). Depending on sub-parameters, can
// trigger entity removal, value distribution (using 7DDC), or resource list consumption
// (using 6356).

void __stdcall16far
UI_Component_Execute_Resource_Action_and_Notify_6c66
          (astruct_254 *param_1,int param_2,undefined4 param_3)
{
  undefined2 *puVar1;
  astruct_491 *this;
  void *pvVar2;
  u16 category;
  int iVar3;
  uint in_DX;
  uint uVar5;
  astruct_254 *uVar4;
  undefined2 uVar6;
  undefined2 unaff_CS;
  int iVar7;
  undefined2 uVar8;
  undefined2 in_stack_0000fff2;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (astruct_254 *)param_1;
  if (uVar4->field55_0x3a == NULL)
  {
    unaff_CS = 0x1000;
    this = allocate_memory(CONCAT22(in_stack_0000fff2,0xc));
    uVar5 = in_DX | (uint)this;
    if (uVar5 == 0x0)
    {
      uVar4->field55_0x3a = NULL;
    }
    else
    {
      unaff_CS = 0x1008;
      pvVar2 = construct_object_with_vtable(this,in_DX);
      *(void **)&uVar4->field55_0x3a = pvVar2;
      *(uint *)((int)&uVar4->field55_0x3a + 0x2) = uVar5;
    }
  }
  iVar7 = (int)param_3;
  uVar8 = (undefined2)((ulong)param_3 >> 0x10);
  puVar1 = (undefined2 *)((int)*uVar4->field55_0x3a + 0x8);
  (*(code *)*puVar1)(unaff_CS,uVar4->field55_0x3a,iVar7,uVar8);
  if (param_2 != 0x0)
  {
    if (*(int *)(iVar7 + 0x6) != 0x0)
    {
      UI_Component_Remove_Entities_of_Type_Logic_6e9c
                (param_1,(ulong)*(uint *)(iVar7 + 0xa),*(int *)(iVar7 + 0x6));
      return;
    }
    if (*(int *)(iVar7 + 0x4) != 0x0)
    {
      UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                (uVar4,uVar6,-*(int *)(iVar7 + 0xa),
                 -(uint)(*(int *)(iVar7 + 0xa) != 0x0),*(undefined2 *)(iVar7 + 0x4));
      return;
    }
    if (*(int *)(iVar7 + 0x8) != 0x0)
    {
      category = UI_Component_Get_Entity_Type_ID_6fa0(param_1);
      iVar3 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),category);
      if (iVar3 != 0x0)
      {
        UI_Item_List_Consume_Resources_by_Type_Logic_6356
                  ((void *)uVar4->field26_0x1a,0x0,*(uint *)(iVar7 + 0xa),0x0);
      }
    }
  }
  return;
}



// Retrieves a pointer to a vector tracker or collection object stored at offset 0x36.

void * __stdcall16far UI_Component_Get_Vector_Tracker_Ptr_6d4e(void *this_ptr)
{
  void *pvVar1;
  undefined2 in_DX;
  undefined2 uVar2;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_6 = NULL;
  uStack_4 = 0x0;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + 0x36) != 0x0)
  {
    pvVar1 = (void *)*(undefined4 *)((int)(void *)this_ptr + 0x36);
    uStack_6 = Collection_Build_Vector_Tracker_Logic
                         ((void *)pvVar1,(u16)((ulong)pvVar1 >> 0x10));
    uStack_4 = in_DX;
  }
  return (void *)CONCAT22(uStack_4,uStack_6);
}



// Updates the internal vector tracker pointer (offset 0x36), ensuring the previous
// object is virtually destroyed first.

void __stdcall16far
UI_Component_Set_Vector_Tracker_Ptr_6d80(void *this_ptr,void *new_ptr)
{
  int iVar1;
  undefined2 *puVar2;
  astruct_253 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_253 *)this_ptr;
                // WARNING: Load size is inaccurate
  iVar1 = *(int *)((int)&uVar2->field54_0x36 + 0x2);
  if (iVar1 != 0x0 || uVar2->field54_0x36 != NULL)
  {
    puVar2 = (undefined2 *)(undefined2 *)*uVar2->field54_0x36;
    (*(code *)*puVar2)();
  }
  uVar2->field54_0x36 = new_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a global planetary resource metric (offset 0x18 in Resource 0x2F data).

u16 __stdcall16far Simulator_Get_Planet_Resource_Metric_6db4(void)
{
  long lVar1;
  
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  lVar1 = UI_Get_Entity_Resource_Data_at_Offset_16_Logic(lVar1);
  return *(u16 *)((int)lVar1 + 0x18);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a specialized value (likely health or production) from the entity's
// internal object at offset 0x1A, provided it belongs to grouping 0x1E.

int __stdcall16far UI_Component_Get_Entity_Value_at_1A_Logic_6ddc(void *this_ptr)
{
  u16 category;
  int iVar1;
  
  category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),category);
  if (iVar1 != 0x0)
  {
    iVar1 = UI_Build_Item_TypeD88E_Count_Occupied_Slots_d0c6
                      ((void *)*(undefined4 *)((int)(void *)this_ptr + 0x1a));
    return iVar1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a specialized status or health value for certain entity types (group 0x1E)
// by calling 1030:D102 on the internal object.

int __stdcall16far UI_Component_Get_Entity_Special_Status_Logic_6e14(void *this_ptr)
{
  undefined4 uVar1;
  u16 category;
  int iVar2;
  
  category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
  iVar2 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),category);
  if (iVar2 != 0x0)
  {
    uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x1a);
    iVar2 = UI_Build_Item_TypeD88E_Count_Active_SubItems_d102
                      ((int)uVar1,(u16)((ulong)uVar1 >> 0x10));
    return iVar2;
  }
  return 0x0;
}



// Retrieves the construction progress value (offset 0x94) from the simulator object if
// the entity is currently in the construction state (4).

u16 __stdcall16far UI_Component_Get_Entity_Construction_Progress_6e4c(void *this_ptr)
{
  undefined4 uVar1;
  astruct_252 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_252 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  if ((uVar2->field26_0x1a != 0x0) && (*(int *)((int)uVar2->field26_0x1a + 0x12) == 0x4)
     )
  {
    uVar1 = *(undefined4 *)
             CONCAT22((int)((ulong)uVar2->field26_0x1a >> 0x10),
                      (undefined4 *)((int)uVar2->field26_0x1a + 0x14));
    return *(u16 *)((int)uVar1 + 0x94);
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through the component's internal entity list and removes all entities
// matching the specified type from the simulator.

void __stdcall16far
UI_Component_Remove_Entities_of_Type_Logic_6e9c(void *this_ptr,long count,int type_id)
{
  undefined2 *puVar1;
  astruct_251 *uVar3;
  undefined2 uVar2;
  void *lVar5;
  void *pvVar3;
  ulong uStack_a;
  ulong uStack_6;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_251 *)this_ptr;
  if (*(int *)((int)&uVar3->field30_0x1e + 0x2) != 0x0 ||
      *(int *)&uVar3->field30_0x1e != 0x0)
  {
    puVar1 = (undefined2 *)((int)*uVar3->field30_0x1e + 0x10);
    uStack_6 = (*(code *)*puVar1)();
    for (uStack_a = 0x0; uStack_a < uStack_6; uStack_a += 0x1)
    {
      puVar1 = (undefined2 *)((int)*uVar3->field30_0x1e + 0x4);
      lVar5 = (void *)(*(code *)*puVar1)();
      if (lVar5 != NULL)
      {
        pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)lVar5);
        if (*(int *)((int)pvVar3 + 0xc) == type_id)
        {
          count += -0x1;
          Simulator_Get_Entity_at_Coords_Wrapper_e332
                    ((u32)_p_SimulatorWorldContext,(u16)(u8 *)lVar5,
                     (u16)((ulong)lVar5 >> 0x10));
          puVar1 = (undefined2 *)((int)*uVar3->field30_0x1e + 0x8);
          (*(code *)*puVar1)(0x1028,uVar3->field30_0x1e,0x0,uStack_a);
        }
        if (count._2_2_ == 0x0 && (int)count == 0x0)
        {
          return;
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Sums the active sub-values from the entity's internal list if it belongs to grouping
// category 4.

void * __stdcall16far UI_Component_Sum_Active_SubValues_Group4_6f5a(void *this_ptr)
{
  u16 category;
  int iVar1;
  void *uVar3;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_6 = NULL;
  uVar3._2_2_ = 0x0;
  category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),category);
  if (iVar1 != 0x0)
  {
    uVar3 = UI_Item_List_Sum_Active_Values_Logic_6302
                      ((void *)*(undefined4 *)((int)(void *)this_ptr + 0x1a));
    uVar3._2_2_ = (undefined2)((ulong)uVar3 >> 0x10);
    uStack_6 = (void *)uVar3;
  }
  return (void *)CONCAT22(uVar3._2_2_,uStack_6);
}



// Retrieves the core entity type ID (offset 0xC) from the component's linked simulator
// object. Handles lazy-initialization of the object.

u16 __stdcall16far UI_Component_Get_Entity_Type_ID_6fa0(void *this_ptr)
{
  astruct_250 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_250 *)this_ptr;
  if (uVar1->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  if (uVar1->field26_0x1a != 0x0)
  {
    return *(u16 *)((int)uVar1->field26_0x1a + 0xc);
  }
  return 0x0;
}



// Retrieves the 'A' resource output value (offset 0xA2 in simulator object) if the
// entity is active (state 5). Likely represents Food or basic production.

u16 __stdcall16far UI_Component_Get_Entity_Resource_A_Output_6fd4(void *this_ptr)
{
  undefined4 uVar1;
  astruct_249 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_249 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  if (*(int *)((int)uVar2->field26_0x1a + 0x12) == 0x5)
  {
    uVar1 = *(undefined4 *)
             CONCAT22((int)((ulong)uVar2->field26_0x1a >> 0x10),
                      (undefined4 *)((int)uVar2->field26_0x1a + 0x14));
    return *(u16 *)((int)uVar1 + 0xa2);
  }
  return 0x0;
}



// Retrieves the 'B' resource output value (offset 0xA0 in simulator object) if the
// entity is active. Likely represents Power production.

u16 __stdcall16far UI_Component_Get_Entity_Resource_B_Output_701c(void *this_ptr)
{
  undefined4 uVar1;
  astruct_248 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_248 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  if (*(int *)((int)uVar2->field26_0x1a + 0x12) == 0x5)
  {
    uVar1 = *(undefined4 *)
             CONCAT22((int)((ulong)uVar2->field26_0x1a >> 0x10),
                      (undefined4 *)((int)uVar2->field26_0x1a + 0x14));
    return *(u16 *)((int)uVar1 + 0xa0);
  }
  return 0x0;
}



// Retrieves the 'C' resource output value (offset 0xAA in simulator object) if the
// entity is active.

u16 __stdcall16far UI_Component_Get_Entity_Resource_C_Output_7064(void *this_ptr)
{
  undefined4 uVar1;
  astruct_247 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_247 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  if (*(int *)((int)uVar2->field26_0x1a + 0x12) == 0x5)
  {
    uVar1 = *(undefined4 *)
             CONCAT22((int)((ulong)uVar2->field26_0x1a >> 0x10),
                      (undefined4 *)((int)uVar2->field26_0x1a + 0x14));
    return *(u16 *)((int)uVar1 + 0xaa);
  }
  return 0x0;
}



// Retrieves the 'D' resource output value (offset 0xAC in simulator object) if the
// entity is active.

u16 __stdcall16far UI_Component_Get_Entity_Resource_D_Output_70ac(void *this_ptr)
{
  undefined4 uVar1;
  astruct_246 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_246 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  if (*(int *)((int)uVar2->field26_0x1a + 0x12) == 0x5)
  {
    uVar1 = *(undefined4 *)
             CONCAT22((int)((ulong)uVar2->field26_0x1a >> 0x10),
                      (undefined4 *)((int)uVar2->field26_0x1a + 0x14));
    return *(u16 *)((int)uVar1 + 0xac);
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Sums the resource capacity values from the entity's associated lists if it belongs to
// grouping category 1 or 2.

long __stdcall16far UI_Component_Sum_Entity_Resource_Capacity_70f4(void *this_ptr)
{
  int iVar1;
  int iVar2;
  astruct_245 *uVar3;
  undefined2 uVar4;
  void *pvVar5;
  long *this_ptr_00;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_245 *)this_ptr;
  if (uVar3->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  iVar2 = *(int *)((int)uVar3->field26_0x1a + 0xc);
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),iVar2);
  if (iVar1 == 0x0)
  {
    iVar2 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),iVar2);
    if ((iVar2 == 0x0) || (uVar3->field31_0x22 == NULL))
    {
      return 0x0;
    }
    this_ptr_00 = uVar3->field31_0x22;
  }
  else
  {
    this_ptr_00 = (long *)*(undefined4 *)((int)uVar3->field26_0x1a + 0x28);
  }
  pvVar5 = UI_Item_List_Sum_Values_Logic(this_ptr_00);
  return (long)pvVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates the aggregate sum of 32-bit values from the managed list stored at offset
// 0x22, specifically for entities in group 3 and active state 5.

long __stdcall16far UI_Component_Sum_Entity_Values_from_List_22_7176(void *this_ptr)
{
  astruct_244 *uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  long local_1a;
  int local_16 [0x2];
  uint uStack_12;
  uint uStack_e;
  int iStack_a;
  int iStack_8;
  long lStack_6;
  
  lStack_6 = 0x0;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_244 *)this_ptr;
  if (uVar1->field31_0x22 == NULL)
  {
    return 0x0;
  }
  if (uVar1->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  iStack_8 = *(int *)((int)uVar1->field26_0x1a + 0xc);
  iStack_a = search_array_for_value
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_8);
  if ((iStack_a != 0x0) && (*(int *)((int)uVar1->field26_0x1a + 0x12) == 0x5))
  {
    uStack_e = (uint)((u32 *)uVar1->field31_0x22)[0x1];
    for (uStack_12 = 0x0; uStack_12 < uStack_e; uStack_12 += 0x1)
    {
      UI_Item_List_Get_Item_at_Index_Logic
                (uVar1->field31_0x22,(long *)CONCAT22(unaff_SS,&local_1a),
                 (int *)CONCAT22(unaff_SS,local_16),uStack_12);
      if (0x0 < local_16[0x0])
      {
        lStack_6 += local_1a;
      }
    }
  }
  return lStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a specialized 16-bit property (offset 0xAA) from the simulator object if
// the entity belongs to group 0x10 and is active.

u16 __stdcall16far UI_Component_Get_Entity_Property_v10_AA_Logic_7226(void *this_ptr)
{
  astruct_243 *paVar1;
  int iVar3;
  astruct_242 *uVar3;
  astruct_243 *iVar2;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_242 *)this_ptr;
  if (uVar3->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  iVar3 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),
                     *(int *)((int)uVar3->field26_0x1a + 0xc));
  if ((iVar3 != 0x0) && (*(int *)((int)uVar3->field26_0x1a + 0x12) == 0x5))
  {
    paVar1 = *(astruct_243 **)
              CONCAT22((int)((ulong)uVar3->field26_0x1a >> 0x10),
                       (undefined4 *)((int)uVar3->field26_0x1a + 0x14));
    uVar4 = (undefined2)((ulong)paVar1 >> 0x10);
    iVar2 = (astruct_243 *)paVar1;
    if (iVar2->field164_0xa4 == 0x1e)
    {
      return iVar2->field169_0xaa;
    }
  }
  return 0x0;
}



// Cleans up and frees the managed list and its internal pointer stored at offset 0x22.

void __stdcall16far UI_Component_Free_List_22_Logic_7296(void *this_ptr)
{
  u32 *ptr;
  astruct_241 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_241 *)this_ptr;
  ptr = uVar1->field34_0x22;
  if (uVar1->field35_0x24 != 0x0 || ptr != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic((u32 *)CONCAT22(uVar1->field35_0x24,ptr));
    free_if_not_null(ptr);
  }
  (&uVar1->field34_0x22)[0x0] = NULL;
  (&uVar1->field34_0x22)[0x1] = NULL;
  return;
}



// Cleans up and frees the managed list and its internal pointer stored at offset 0x26.

void __stdcall16far UI_Component_Free_List_26_Logic_72d0(void *this_ptr)
{
  u32 *ptr;
  astruct_240 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_240 *)this_ptr;
  ptr = uVar1->field38_0x26;
  if (uVar1->field39_0x28 != 0x0 || ptr != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic((u32 *)CONCAT22(uVar1->field39_0x28,ptr));
    free_if_not_null(ptr);
  }
  (&uVar1->field38_0x26)[0x0] = NULL;
  (&uVar1->field38_0x26)[0x1] = NULL;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through and destroys the internal component list stored at offset 0x1E,
// including virtual destructor calls for all items.

void __stdcall16far UI_Component_Destroy_Internal_List_1E_Logic_730a(void *this_ptr)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  astruct_239 *uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  long lVar6;
  u32 *puVar7;
  ulong uStack_a;
  ulong uStack_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_239 *)this_ptr;
  if (uVar4->field30_0x1e != NULL)
  {
    puVar7 = uVar4->field30_0x1e;
    puVar3 = (undefined2 *)((int)*uVar4->field30_0x1e + 0x10);
    uStack_6 = (*(code *)*puVar3)();
    for (uStack_a = 0x0; uStack_a < uStack_6; uStack_a += 0x1)
    {
      puVar3 = (undefined2 *)((int)*uVar4->field30_0x1e + 0x4);
      lVar6 = (*(code *)*puVar3)(unaff_CS);
      if (lVar6 != 0x0)
      {
        unaff_CS = 0x1028;
        Simulator_Get_Entity_at_Coords_Wrapper_e332
                  (_p_SimulatorWorldContext,(u16)lVar6,(u16)((ulong)lVar6 >> 0x10));
      }
    }
                // WARNING: Load size is inaccurate
    puVar1 = uVar4->field30_0x1e;
    iVar2 = *(int *)((int)&uVar4->field30_0x1e + 0x2);
    if (iVar2 != 0x0 || puVar1 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1,puVar7);
    }
    uVar4->field30_0x1e = NULL;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Lazy-initializes and caches the simulator object pointer (offset 0x1A) for the entity
// packed ID at offset 0x16.

void * __stdcall16far UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(void *this_ptr)
{
  astruct_238 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_238 *)this_ptr;
  if (uVar1->field22_0x16 == 0x0)
  {
    return NULL;
  }
  if (*(long *)&uVar1->field23_0x1a == 0x0)
  {
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)(u8 *)uVar1->field22_0x16);
    uVar1->field23_0x1a = (uint16_t)pvVar3;
    uVar1->field24_0x1c = (uint16_t)((ulong)pvVar3 >> 0x10);
  }
  return (void *)CONCAT22(uVar1->field24_0x1c,(void *)uVar1->field23_0x1a);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Directly sets the entity packed ID (offset 0x2A) and resolves its simulator object
// pointer (offset 0x2E).

void __stdcall16far
UI_Component_Set_Entity_ID_and_Cache_Ptr_73ee(void *this_ptr,void *entity_id)
{
  astruct_237 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_237 *)this_ptr;
  uVar1->field42_0x2a = entity_id;
  pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)entity_id);
  uVar1->field43_0x2e = (int)pvVar3;
  uVar1->field44_0x30 = (int)((ulong)pvVar3 >> 0x10);
  return;
}
