/*
 * Source: outpost.c
 * Chunk: 59/117
 * Original lines: 66912-68111
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Maps a research category ID to a string resource ID and loads the category name from
// the string table.

char * __cdecl16far Lookup_Research_Category_Name_by_ID_Logic_c0d8(u16 category_id)
{
  char *pcVar1;
  int res_id;
  
  if (false)
  {
switchD_1020_c1cd_caseD_20:
    res_id = 0x5d9;
  }
  else
  {
    switch(category_id)
    {
    case 0x1:
      res_id = 0x5b7;
      break;
    case 0x2:
      res_id = 0x5b8;
      break;
    case 0x3:
      res_id = 0x5b9;
      break;
    case 0x4:
      res_id = 0x5ba;
      break;
    case 0x5:
      res_id = 0x5bb;
      break;
    case 0x6:
      res_id = 0x5bc;
      break;
    case 0x7:
      res_id = 0x5bd;
      break;
    case 0x8:
      res_id = 0x5be;
      break;
    case 0x9:
      res_id = 0x5bf;
      break;
    case 0xa:
      res_id = 0x5c0;
      break;
    case 0xb:
      res_id = 0x5c1;
      break;
    case 0xc:
      res_id = 0x5c2;
      break;
    case 0xd:
      res_id = 0x5c3;
      break;
    case 0xe:
      res_id = 0x5c4;
      break;
    case 0xf:
      res_id = 0x5c5;
      break;
    case 0x10:
      res_id = 0x5c6;
      break;
    case 0x11:
      res_id = 0x5c7;
      break;
    case 0x12:
      res_id = 0x5c8;
      break;
    case 0x13:
      res_id = 0x5c9;
      break;
    case 0x14:
      res_id = 0x5ca;
      break;
    case 0x15:
      res_id = 0x5cb;
      break;
    case 0x16:
      res_id = 0x5cc;
      break;
    case 0x17:
      res_id = 0x5cd;
      break;
    case 0x18:
      res_id = 0x5ce;
      break;
    case 0x19:
      res_id = 0x5cf;
      break;
    case 0x1a:
      res_id = 0x5d0;
      break;
    case 0x1b:
      res_id = 0x5d1;
      break;
    case 0x1c:
      res_id = 0x5d2;
      break;
    case 0x1d:
      res_id = 0x5d3;
      break;
    case 0x1e:
      res_id = 0x5d4;
      break;
    case 0x1f:
      res_id = 0x5d5;
      break;
    default:
      goto switchD_1020_c1cd_caseD_20;
    case 0x21:
      res_id = 0x5d6;
      break;
    case 0x23:
      res_id = 0x5d7;
      break;
    case 0x24:
      res_id = 0x5e5;
    }
  }
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),res_id);
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Maps an entity ID to its broad category name string resource (e.g. 'Structure',
// 'Robot').

char * __cdecl16far Lookup_Entity_Category_Name_by_ID_Logic_c222(u16 entity_id)
{
  char *pcVar1;
  int res_id;
  
  switch(entity_id)
  {
  case 0x1:
    res_id = 0x57f;
    break;
  case 0x2:
    res_id = 0x580;
    break;
  case 0x3:
    res_id = 0x581;
    break;
  case 0x4:
    res_id = 0x5e7;
    break;
  case 0x5:
    res_id = 0x57e;
    break;
  case 0x6:
    res_id = 0x582;
    break;
  case 0x7:
    res_id = 0x3e8;
    break;
  case 0x8:
    res_id = 0x3e9;
    break;
  case 0x9:
    res_id = 0x3ea;
    break;
  case 0xa:
    res_id = 0x3eb;
    break;
  case 0xb:
    res_id = 0x3ec;
    break;
  case 0xc:
    res_id = 0x3ed;
    break;
  case 0xd:
    res_id = 0x3ee;
    break;
  case 0xe:
    res_id = 0x3ef;
    break;
  case 0xf:
    res_id = 0x3f0;
    break;
  case 0x10:
    res_id = 0x3f1;
    break;
  case 0x11:
    res_id = 0x3f2;
    break;
  case 0x12:
    res_id = 0x3f4;
    break;
  case 0x13:
    res_id = 0x3f5;
    break;
  case 0x14:
    res_id = 0x532;
    break;
  default:
    res_id = 0x5d9;
  }
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),res_id);
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Maps an entity ID to its specific sub-category name string resource.

char * __cdecl16far Lookup_Entity_SubCategory_Name_by_ID_Logic_c2f8(u16 entity_id)
{
  char *pcVar1;
  int res_id;
  
  switch(entity_id)
  {
  case 0x1:
    res_id = 0x583;
    break;
  case 0x2:
    res_id = 0x584;
    break;
  case 0x3:
    res_id = 0x585;
    break;
  case 0x4:
    res_id = 0x586;
    break;
  case 0x5:
    res_id = 0x587;
    break;
  case 0x6:
    res_id = 0x588;
    break;
  case 0x7:
    res_id = 0x589;
    break;
  case 0x8:
    res_id = 0x58a;
    break;
  case 0x9:
    res_id = 0x58b;
    break;
  case 0xa:
    res_id = 0x58c;
    break;
  case 0xb:
    res_id = 0x58d;
    break;
  case 0xc:
    res_id = 0x58e;
    break;
  case 0xd:
    res_id = 0x58f;
    break;
  case 0xe:
    res_id = 0x3f8;
    break;
  case 0xf:
    res_id = 0x3f9;
    break;
  case 0x10:
    res_id = 0x532;
    break;
  default:
    res_id = 0x5d9;
  }
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),res_id);
  return pcVar1;
}



// A simple helper that always returns 1.

u16 __cdecl16far Helper_Returns_1_Stub_c3ae(void)
{
  return 0x1;
}



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



// Constructor for a UI component specifically used in the Planet View. Initializes base
// object and sets vtable to 0xC834.

void * __stdcall16far
UI_Planet_View_Component_ctor_init_logic_c444(void *this_ptr,void *arg1,void *arg2)
{
  void *pvVar1;
  undefined2 uVar2;
  
  UI_Production_Item_Base_ctor_init_1cd8(this_ptr,arg1,arg2);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar1 = (void *)this_ptr;
  *(undefined4 *)((int)pvVar1 + 0x18) = 0x0;
  *(undefined2 *)((int)pvVar1 + 0x1c) = 0x0;
  *(undefined2 *)this_ptr = 0xc834;
  *(undefined2 *)((int)pvVar1 + 0x2) = 0x1020;
  return this_ptr;
}



// Internal destructor for the Planet View UI component. Frees internal data pointers
// and calls base destructor.

void __stdcall16far
UI_Planet_View_Component_dtor_Internal_Cleanup_logic_c47a(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)this_ptr = 0xc834;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1020;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ptr + 0x18));
  UI_Production_Item_Base_dtor_Internal_1d28(this_ptr);
  return;
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



u32 __stdcall16far UI_Object_Get_Dword_10_c538(u32 param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(param_1 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)param_1 + 0x12),
                  *(undefined2 *)((int)param_1 + 0x10));
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



undefined2 __stdcall16far const_0_stub_1020_c5ae(void)
{
  return 0x0;
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



void __stdcall16far void_noop_stub_1020_c640(void)
{
  return;
}



void __stdcall16far
UI_Managed_List_Append_Item_c644
          (undefined4 *param_1,undefined2 param_2,undefined4 param_3)
{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined4 local_6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  if (puVar4[0x6] == 0x0)
  {
    puVar2 = (undefined2 *)((int)*param_1 + 0x20);
    (*(code *)*puVar2)();
  }
  puVar3 = (undefined4 *)(*(int *)(puVar4 + 0x2) * 0x6 + *(int *)(puVar4 + 0x6));
  uVar1 = *(undefined2 *)((int)puVar4 + 0x1a);
  local_6 = (undefined4 *)CONCAT22(uVar1,puVar3);
  puVar4[0x2] = puVar4[0x2] + 0x1;
  *local_6 = param_3;
  *(undefined2 *)(puVar3 + 0x1) = param_2;
  return;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Reallocates the internal buffer for the Planet View list to accommodate more items.

void __stdcall16far UI_Planet_View_List_Expand_Capacity_c73a(void *this_ptr)
{
  uint uVar1;
  void *pvVar2;
  undefined *heap_ctx;
  undefined *puVar3;
  void *pvVar4;
  undefined2 uVar5;
  void *in_stack_0000ffe8;
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar4 = (void *)this_ptr;
  if (*(long *)((int)pvVar4 + 0x10) == 0x0)
  {
    uVar1 = *(uint *)((int)pvVar4 + 0xc);
    puVar3 = (undefined *)*(undefined2 *)((int)pvVar4 + 0xe);
  }
  else
  {
    uVar1 = *(uint *)((int)pvVar4 + 0x10) + *(uint *)((int)pvVar4 + 0x14);
    puVar3 = (undefined *)
             (*(int *)((int)pvVar4 + 0x12) + *(int *)((int)pvVar4 + 0x16) +
             (uint)CARRY2(*(uint *)((int)pvVar4 + 0x10),*(uint *)((int)pvVar4 + 0x14)));
  }
  uStack_6 = CONCAT22(puVar3,uVar1);
  if (*(long *)((int)pvVar4 + 0x18) == 0x0)
  {
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      puVar3 = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar2 = alloc_with_hooks((ulong)(uVar1 * 0x6),0x1,heap_ctx);
  }
  else
  {
    puVar3 = (undefined *)
             (((int)puVar3 * 0x3 + (uint)CARRY2(uVar1,uVar1) +
              (uint)CARRY2(uVar1 * 0x2,uVar1)) * 0x2 +
             (uint)CARRY2(uVar1 * 0x3,uVar1 * 0x3));
    pvVar2 = heap_realloc(0x1,(long)CONCAT22((int)*(undefined4 *)((int)pvVar4 + 0x18),
                                             puVar3),
                          (void *)((ulong)*(undefined4 *)((int)pvVar4 + 0x18) >> 0x10),
                          in_stack_0000ffe8);
  }
  uStack_a = (void *)CONCAT22(puVar3,pvVar2);
  if (puVar3 != NULL || pvVar2 != NULL)
  {
    *(undefined4 *)((int)pvVar4 + 0x10) = uStack_6;
    *(undefined4 *)((int)pvVar4 + 0x18) = uStack_a;
  }
  *(undefined2 *)((int)pvVar4 + 0x1c) = 0x1;
  return;
}



int __cdecl16far UI_Object_Compare_U16_at_4_c7fa(undefined4 param_1,undefined4 param_2)
{
  return *(int *)((int)param_1 + 0x4) - *(int *)((int)param_2 + 0x4);
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



// Accessor for a far pointer stored within a UI list node structure (offsets 4 and 6).

void * __stdcall16far UI_List_Node_Get_Target_FarPtr_c860(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  return (void *)CONCAT22(*(undefined2 *)((int)(void *)this_ptr + 0x6),
                          (void *)*(undefined2 *)((int)(void *)this_ptr + 0x4));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Inserts an item into a sorted linked list. Allocates a new node, initializes it with
// vtable 0xC9E6, and traverses the list to find the correct insertion point based on
// the provided 32-bit value.

u16 __stdcall16far
UI_Sorted_Linked_List_Insert_Item_c872(long list_ptr,ulong sort_key,void *target_ptr)
{
  uint uVar1;
  bool bVar2;
  undefined2 *puVar3;
  int in_DX;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uStack_12;
  long lStack_e;
  long lStack_a;
  undefined2 *puStack_6;
  
  puVar3 = validate_and_get_block((void *)_p_Pool_Type3_Sprite);
  uStack_12 = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    puStack_6 = NULL;
  }
  else
  {
    *uStack_12 = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    *(undefined4 *)(puVar3 + 0x2) = 0x0;
    *(undefined4 *)(puVar3 + 0x4) = 0x0;
    *uStack_12 = (char *)s__s__s__1050_5bc0;
    puVar3[0x1] = 0x1008;
    puVar3[0x7] = 0x0;
    puVar3[0x6] = 0x0;
    *uStack_12 = 0xc9e6;
    puVar3[0x1] = 0x1020;
    puStack_6 = uStack_12;
  }
  if (puStack_6 == NULL)
  {
    return 0x0;
  }
  uVar5 = (undefined2)((ulong)puStack_6 >> 0x10);
  puVar3 = (undefined2 *)puStack_6;
  *(void **)(puVar3 + 0x4) = target_ptr;
  *(ulong *)(puVar3 + 0x6) = sort_key;
  uVar6 = (undefined2)((ulong)list_ptr >> 0x10);
  iVar4 = (int)list_ptr;
  lStack_e = *(long *)(iVar4 + 0x4);
  if (*(int *)(iVar4 + 0x8) == 0x0)
  {
LAB_1020_c92d:
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)(iVar4 + 0x4);
  }
  else
  {
    uVar1 = *(uint *)((int)lStack_e + 0xe);
    if ((uVar1 <= sort_key._2_2_) &&
       ((uVar1 < sort_key._2_2_ || (*(uint *)((int)lStack_e + 0xc) <= (uint)sort_key))))
    goto LAB_1020_c92d;
    bVar2 = false;
    while( true )
    {
      if (lStack_e == 0x0) break;
      uVar7 = (undefined2)((ulong)lStack_e >> 0x10);
      if (*(ulong *)((int)lStack_e + 0xc) <= sort_key)
      {
        bVar2 = true;
        *(long *)(puVar3 + 0x2) = lStack_e;
        *(undefined4 *)((int)lStack_a + 0x4) = puStack_6;
        break;
      }
      lStack_a = lStack_e;
      lStack_e = *(long *)((int)lStack_e + 0x4);
    }
    list_ptr = lStack_a;
    if (bVar2) goto LAB_1020_c9ab;
  }
  uVar7 = (undefined2)((ulong)list_ptr >> 0x10);
  *(undefined2 *)((int)list_ptr + 0x4) = puVar3;
  *(undefined2 *)((int)list_ptr + 0x6) = uVar5;
LAB_1020_c9ab:
  *(int *)(iVar4 + 0x8) = *(int *)(iVar4 + 0x8) + 0x1;
  return 0x1;
}



// Scalar deleting destructor for base objects using vtable 0x389A. Uses
// heap_free_descriptor for memory release.

int * __stdcall16far
Base_Object_dtor_Scalar_Deleting_Descriptor_v389a(int *this_ptr,byte flags)
{
  int bucket_index;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this_ptr = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this_ptr));
  bucket_index = (int)((ulong)_this_ptr >> 0x10);
  *_this_ptr = (char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    heap_free_descriptor(this_ptr,bucket_index);
  }
  return this_ptr;
}



// Constructor for a UI component using vtable 0xCC7C. Initializes base object state.

void * __stdcall16far UI_Component_Type_CC7C_ctor(void *this_ptr)
{
  UI_Build_Item_Type_0ADA_ctor_init_0954(this_ptr);
  *(undefined2 *)this_ptr = 0xcc7c;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Parameterized constructor for a UI component using vtable 0xCC7C. Passes arguments to
// base class constructor.

void * __stdcall16far
UI_Component_Type_CC7C_ctor_with_Params
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Type_0ADA_ctor_with_Params_0982
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xcc7c;
  param_1[0x1] = 0x1020;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_Finalize_and_Decrement_Resource_8_ca36(void *param_1,undefined2 param_2)
{
  void *pvVar1;
  
  UI_Build_Item_Set_Flag_at_14_Logic_09b8((void *)CONCAT22(param_2,param_1));
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2
                     ((void *)CONCAT22(param_2,param_1));
  if (*(long *)((int)(void *)pvVar1 + 0x200) != 0x8000002)
  {
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
    UI_Object_Decrement_Item_Count_in_Collection_E_Logic_maybe
              ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10));
  }
  return;
}



// Update logic for UI component CC7C. Triggers specialized state updates if certain
// conditions (state 5 and object type) are met.

void __stdcall16far UI_Component_Type_CC7C_Update_Logic(void *this_ptr)
{
  void *pvVar1;
  
  UI_Build_Item_OnTick_State4_Update_be9e(this_ptr);
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  if (*(long *)((int)(void *)pvVar1 + 0x200) != 0x8000002)
  {
    if (*(int *)((int)(void *)this_ptr + 0x12) == 0x5)
    {
      Simulator_Process_Entity_Turn_Updates_Logic(this_ptr);
    }
  }
  return;
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



// Scalar deleting destructor for UI component CC7C.

void * __stdcall16far
UI_Component_Type_CC7C_dtor_Scalar_Deleting(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for a UI component using vtable 0xCD7E.

void * __stdcall16far UI_Component_Type_CD7E_ctor(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0xcd7e;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Parameterized constructor for a UI component using vtable 0xCD7E.

void * __stdcall16far
UI_Component_Type_CD7E_ctor_with_Params
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xcd7e;
  param_1[0x1] = 0x1020;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



u16 __stdcall16far UI_Build_Item_Check_State_and_Flag_1A_cd30(u32 param_1)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (((*(int *)(iVar1 + 0x12) == 0x6) || (*(int *)(iVar1 + 0x12) == 0x5)) &&
     ((*(byte *)(iVar1 + 0x1a) & 0x2) != 0x0))
  {
    return 0x1;
  }
  return 0x0;
}



// Scalar deleting destructor for UI component CD7E.

void * __stdcall16far
UI_Component_Type_CD7E_dtor_Scalar_Deleting(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for a UI component using vtable 0xD004.

void * __stdcall16far UI_Component_Type_D004_ctor(void *this_ptr)
{
  UI_Build_Item_Type_0ADA_ctor_init_0954(this_ptr);
  *(undefined2 *)this_ptr = 0xd004;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Constructor for UI Build Item Type 53. Initializes base class and sets vtable to
// 0xD004.

void * __stdcall16far
UI_Build_Item_Type53_ctor_init_ce08
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Type_0ADA_ctor_with_Params_0982
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xd004;
  param_1[0x1] = 0x1020;
  return (undefined2 *)CONCAT22(param_2,param_1);
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
