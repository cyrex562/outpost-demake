/*
 * Source: outpost.c
 * Chunk: 78/117
 * Original lines: 88529-89719
 * Boundaries: top-level declarations/definitions only
 */




// Internal destructor for managed UI lists. Iterates through all non-null items, calls
// their virtual destructors, and frees the internal pointer buffer. Reverts vtables.

void __stdcall16far UI_Managed_List_Base_dtor_Internal_1244(void *this_ptr)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  astruct_307 *uVar3;
  void *pvVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ulong uStack_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_307 *)this_ptr;
  *(char **)this_ptr = (char *)s_462_bmp_1050_1620 + 0x4;
  uVar3->field2_0x2 = 0x1030;
  if (uVar3->field19_0x1a != 0x0)
  {
    uStack_6 = 0x1;
    while( true )
    {
      if (uVar3->field6_0xa <= uStack_6) break;
      iVar4 = (int)uStack_6 * 0x4;
      uVar6 = (undefined2)((ulong)uVar3->field5_0x6 >> 0x10);
      pvVar3 = (void *)uVar3->field5_0x6;
      puVar1 = (undefined4 *)*(int *)((int)pvVar3 + iVar4);
      iVar4 = *(int *)((int)pvVar3 + iVar4 + 0x2);
      if (iVar4 != 0x0 || puVar1 != NULL)
      {
        puVar2 = (undefined2 *)(undefined2 *)*puVar1;
        (*(code *)*puVar2)();
      }
      uStack_6 += 0x1;
    }
  }
  free_if_not_null((void *)uVar3->field5_0x6);
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar3->field2_0x2 = 0x1008;
  return;
}



// Scans the managed list for the first null (zero) entry and updates the internal
// 'first free' index tracker.

void __stdcall16far UI_Managed_List_Find_First_Null_Index_12ca(void *this_ptr)
{
  astruct_306 *uVar1;
  undefined2 uVar2;
  ulong uStack_6;
  
  uStack_6 = 0x1;
  while( true )
  {
    uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
    uVar1 = (astruct_306 *)this_ptr;
    if (uVar1->field6_0xa <= uStack_6)
    {
      uVar1->field4_0x4 = 0x0;
      return;
    }
    if (*(long *)((int)uVar1->field5_0x6 + (int)uStack_6 * 0x4) == 0x0) break;
    uStack_6 += 0x1;
  }
  return;
}



// Retrieves the 4-byte object pointer at the specified index from the managed list.

void * __stdcall16far UI_Managed_List_Get_Item_at_Index_1312(void *this_ptr,ulong index)
{
  astruct_305 *uVar1;
  undefined2 uVar2;
  void *uStack_6;
  
  uStack_6 = NULL;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_305 *)this_ptr;
  if (((uVar1->field6_0x6 != 0x0) && (index != 0x0)) && (index < uVar1->field7_0xa))
  {
    uStack_6 = (void *)*(undefined4 *)((int)uVar1->field6_0x6 + (int)index * 0x4);
  }
  return uStack_6;
}



// Inserts an object pointer at a specific index. Automatically handles buffer expansion
// if the index is beyond the current capacity. Marks the list as dirty.

u16 __stdcall16far
UI_Managed_List_Set_Item_at_Index_1358
          (void *this_ptr,void *item_ptr,uint index_lo,void *index)
{
  uint uVar2;
  astruct_304 *uVar1;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint in_stack_0000000e;
  
  if (_index_lo == 0x0)
  {
    return 0x0;
  }
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_304 *)this_ptr;
  if ((*(ulong *)&uVar1->field7_0xa <= _index_lo) || (uVar1->field6_0x6 == 0x0))
  {
    uVar2 = *(uint *)((int)&uVar1->field13_0x12 + 0x2);
    if ((uVar2 <= in_stack_0000000e) &&
       ((uVar2 < in_stack_0000000e || ((uint)uVar1->field13_0x12 <= index_lo))))
    {
      UI_Managed_List_Realloc_Buffer_Logic_1550(this_ptr);
    }
    if (uVar1->field13_0x12 <= _index_lo)
    {
      return 0x0;
    }
    if (uVar1->field6_0x6 == 0x0)
    {
      return 0x0;
    }
    if ((uVar1->field8_0xc <= in_stack_0000000e) &&
       ((uVar1->field8_0xc < in_stack_0000000e || (uVar1->field7_0xa <= index_lo))))
    {
      uVar1->field7_0xa = index_lo + 0x1;
      uVar1->field8_0xc = in_stack_0000000e + (0xfffe < index_lo);
    }
  }
  uVar5 = (undefined2)((ulong)uVar1->field6_0x6 >> 0x10);
  iVar3 = (int)uVar1->field6_0x6;
  *(undefined2 *)(iVar3 + index_lo * 0x4) = (void *)item_ptr;
  *(undefined2 *)(iVar3 + index_lo * 0x4 + 0x2) = item_ptr._2_2_;
  return 0x1;
}



// Removes the object at the specified index, invokes its virtual destructor, and clears
// the pointer in the list. Marks the list as requiring a recount/re-sort.

u16 __stdcall16far UI_Managed_List_Remove_Item_at_Index_13f6(void *this_ptr,void *index)
{
  undefined2 uVar1;
  undefined4 *puVar2;
  void *in_stack_0000fff0;
  u16 uStack_4;
  
  uStack_4 = 0x0;
  puVar2 = UI_Managed_List_Get_Item_at_Index_1312(this_ptr,(ulong)index);
  if (puVar2 != NULL)
  {
    uStack_4 = 0x1;
    uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
    if ((*(int *)((int)this_ptr + 0x1a) != 0x0) && (puVar2 != NULL))
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar2)();
    }
    UI_Managed_List_Set_Item_at_Index_1358(this_ptr,NULL,(uint)index,in_stack_0000fff0);
    *(undefined2 *)((int)this_ptr + 0x4) = 0x1;
  }
  return uStack_4;
}



// Resets a managed UI list by freeing its internal buffer, clearing its item count, and
// updating its maximum capacity logic based on the provided parameter.

void __stdcall16far
UI_Managed_List_Reset_and_Update_Max_Logic_145a(void *this_ptr,void *max_count)
{
  ulong uVar1;
  undefined2 uVar2;
  astruct_303 *uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_303 *)this_ptr;
  free_if_not_null((void *)uVar3->field6_0x6);
  uVar3->field6_0x6 = NULL;
  uVar3->field7_0xa = 0x0;
  uVar1 = uVar3->field10_0x16 + (long)max_count;
  uVar2 = (undefined2)(uVar1 >> 0x10);
  if (uVar1 < uVar3->field8_0xe)
  {
    uVar1 = (ulong)(uint)uVar3->field8_0xe;
    uVar2 = *(undefined2 *)((int)&uVar3->field8_0xe + 0x2);
  }
  *(int *)&uVar3->field8_0xe = (int)uVar1;
  *(undefined2 *)((int)&uVar3->field8_0xe + 0x2) = uVar2;
  uVar3->field9_0x12 = 0x0;
  return;
}



// Sets a 4-byte far pointer into the managed list at the specified index. Automatically
// triggers a buffer expansion if the index is beyond current capacity.

u16 __stdcall16far
UI_Managed_List_Set_Item_FarPtr_Logic_14b4
          (void *this_ptr,u16 item_offset,u16 item_segment,void *index)
{
  uint uVar2;
  astruct_302 *uVar1;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_302 *)this_ptr;
  if ((*(void **)&uVar1->field7_0xa <= index) || (uVar1->field6_0x6 == 0x0))
  {
    uVar2 = *(uint *)((int)&uVar1->field13_0x12 + 0x2);
    if ((uVar2 <= index._2_2_) &&
       ((uVar2 < index._2_2_ || ((uint)uVar1->field13_0x12 <= (uint)index))))
    {
      UI_Managed_List_Realloc_Buffer_Logic_1550(this_ptr);
    }
    if (((void *)uVar1->field13_0x12 <= index) || (uVar1->field6_0x6 == 0x0))
    {
      return 0x0;
    }
    if ((uVar1->field8_0xc <= index._2_2_) &&
       ((uVar1->field8_0xc < index._2_2_ || (uVar1->field7_0xa <= (uint)index))))
    {
      uVar1->field7_0xa = (uint)((long)index + 0x1);
      uVar1->field8_0xc = (uint)((ulong)((long)index + 0x1) >> 0x10);
    }
  }
  uVar5 = (undefined2)((ulong)uVar1->field6_0x6 >> 0x10);
  iVar3 = (int)uVar1->field6_0x6;
  *(u16 *)(iVar3 + (uint)index * 0x4) = item_offset;
  *(u16 *)(iVar3 + (uint)index * 0x4 + 0x2) = item_segment;
  return 0x1;
}



// A simple no-op stub function.

void __stdcall16far Helper_NoOp_Stub_154c(void)
{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Manages the allocation and reallocation of the internal pointer buffer for a managed
// UI list. Increases capacity based on the defined increment step.

void __stdcall16far UI_Managed_List_Realloc_Buffer_Logic_1550(void *this_ptr)
{
  void *pvVar1;
  undefined *heap_ctx;
  astruct_301 *uVar5;
  undefined2 uVar2;
  void *puVar5;
  void *in_stack_0000ffe8;
  undefined4 uStack_a;
  void *uStack_6;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_301 *)this_ptr;
  if (*(long *)&uVar5->field_0x12 == 0x0)
  {
    pvVar1 = (void *)uVar5->field11_0xe;
    puVar5._2_2_ = uVar5->field12_0x10;
  }
  else
  {
    pvVar1 = (void *)(*(uint *)&uVar5->field_0x12 + uVar5->field16_0x16);
    puVar5._2_2_ = (undefined *)
                   (uVar5->field15_0x14 + uVar5->field17_0x18 +
                   (uint)CARRY2(*(uint *)&uVar5->field_0x12,uVar5->field16_0x16));
  }
  uStack_6 = (void *)CONCAT22(puVar5._2_2_,pvVar1);
  if (uVar5->field6_0x6 == NULL)
  {
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      puVar5._2_2_ = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    puVar5._0_2_ = alloc_with_hooks((ulong)(uint)((int)pvVar1 << 0x2),0x1,heap_ctx);
  }
  else
  {
    puVar5._2_2_ = (undefined *)
                   (((int)puVar5._2_2_ * 0x2 + (uint)CARRY2((uint)pvVar1,(uint)pvVar1))
                    * 0x2 + (uint)CARRY2((int)pvVar1 * 0x2,(int)pvVar1 * 0x2));
    puVar5._0_2_ = heap_realloc(0x1,(long)CONCAT22((uint *)uVar5->field6_0x6,
                                                   puVar5._2_2_),
                                (void *)((ulong)uVar5->field6_0x6 >> 0x10),
                                in_stack_0000ffe8);
  }
  uStack_a = (uint *)CONCAT22(puVar5._2_2_,(void *)puVar5);
  if (puVar5._2_2_ != NULL || (void *)puVar5 != NULL)
  {
    *(void **)&uVar5->field_0x12 = uStack_6;
    uVar5->field6_0x6 = uStack_a;
  }
  return;
}



// Scalar deleting destructor for the managed UI list component.

void * __stdcall16far
UI_Managed_List_Scalar_Deleting_Dtor_15fe(void *this_ptr,byte flags)
{
  UI_Managed_List_Base_dtor_Internal_1244(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Base constructor for UI window components. Initializes core fields and sets vtable to
// 0x17BA.

void * __stdcall16far UI_Window_Base_ctor_init_1628(void *this_ptr)
{
  astruct_300 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_300 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = 0x0;
  uVar1->field4_0x8 = 0x0;
  *(void ***)this_ptr = (void **)&PTR_s_463_bmp_1050_1628_1050_17ba;
  uVar1->field2_0x2 = 0x1030;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Parameterized base constructor for UI window components. Links the window to a
// simulator-level context and initializes its internal ID.

void * __stdcall16far
UI_Window_Base_ctor_with_Params_165e(void *this_ptr,long arg1,void *arg2)
{
  astruct_299 *uVar1;
  undefined2 uVar2;
  long lVar3;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_299 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  (&uVar1->field3_0x4)[0x0] = 0x0;
  (&uVar1->field3_0x4)[0x1] = 0x0;
  uVar1->field5_0x8 = arg2;
  *(void ***)this_ptr = (void **)&PTR_s_463_bmp_1050_1628_1050_17ba;
  uVar1->field2_0x2 = 0x1030;
  lVar3 = Simulator_Resolve_Unique_Entity_ID_Logic_5c8a
                    (_p_SimulatorObjectLibrary,(void *)arg1);
  uVar1->field3_0x4 = (int)lVar3;
  uVar1->field4_0x6 = (int)((ulong)lVar3 >> 0x10);
  return this_ptr;
}



// Internal destructor for base UI window components. Reverts vtable pointers to base
// object state.

void __stdcall16far UI_Window_Base_dtor_Internal_16b2(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(void ***)this_ptr = (void **)&PTR_s_463_bmp_1050_1628_1050_17ba;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1030;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1008;
  return;
}



// Serializes the core window state (two 4-byte fields at offsets 4 and 8) to a save
// game file.

u16 __stdcall16far UI_Window_Save_to_File_Logic_16d6(void *this_ptr,void *file_ctx)
{
  int iVar1;
  undefined2 uVar2;
  void *unaff_SS;
  undefined4 local_10 [0x2];
  undefined4 local_8;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  local_10[0x0] = *(undefined4 *)((int)this_ptr + 0x4);
  iVar1 = file_write_check((long)file_ctx,local_10,unaff_SS);
  if (iVar1 != 0x0)
  {
    local_8 = *(undefined4 *)((int)this_ptr + 0x8);
    iVar1 = file_write_check((long)file_ctx,&local_8,unaff_SS);
    if (iVar1 != 0x0)
    {
      return 0x1;
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



// Deserializes the core window state (two 4-byte fields at offsets 4 and 8) from a save
// game file.

u16 __stdcall16far UI_Window_Load_from_File_Logic_1730(u32 this_ptr,void *file_ctx)
{
  int iVar1;
  void *handle_wrapper;
  undefined2 in_stack_0000000a;
  
  handle_wrapper = (void *)(this_ptr >> 0x10);
  iVar1 = file_read_check((long)_file_ctx,(void *)((int)this_ptr + 0x4),handle_wrapper);
  if (iVar1 != 0x0)
  {
    iVar1 = file_read_check((long)_file_ctx,(void *)((int)this_ptr + 0x8),handle_wrapper
                           );
    if (iVar1 != 0x0)
    {
      return 0x1;
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
}



// Sets the parent far pointer (offset 8) for a UI window.

void __stdcall16far UI_Window_Set_Parent_Wrapper_177a(void *this_ptr,void *parent_ptr)
{
  *(undefined4 *)((int)this_ptr + 0x8) = parent_ptr;
  return;
}



void __stdcall16far Helper_NoOp_Stub_178e(void)
{
  return;
}



// Scalar deleting destructor for base UI windows.

void * __stdcall16far
UI_Window_Base_dtor_Scalar_Deleting_1794(void *this_ptr,byte flags)
{
  UI_Window_Base_dtor_Internal_16b2(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for a UI window that includes an internal managed list (offset 0xC).
// Initializes base window and sets vtable to 0x1A16.

void * __stdcall16far
UI_Window_with_List_ctor_init_17ce(void *this_ptr,void *arg1,void *arg2)
{
  void *pvVar1;
  int iVar2;
  astruct_298 *uVar1;
  void *pvVar3;
  void *pvVar4;
  undefined2 uVar5;
  undefined2 in_stack_0000fffa;
  
  pvVar4 = (void *)this_ptr;
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = UI_Window_Base_ctor_init_1628(this_ptr);
  iVar2 = (int)((ulong)pvVar3 >> 0x10);
  *(undefined4 *)((int)pvVar4 + 0xc) = 0x0;
  *(char **)this_ptr = (char *)s_638_bmp_1050_1a11 + 0x5;
  *(undefined2 *)((int)pvVar4 + 0x2) = 0x1030;
  if ((arg2 != NULL) || (arg1 != NULL))
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x18));
    if (iVar2 == 0x0 && pvVar1 == NULL)
    {
      pvVar3 = NULL;
    }
    else
    {
      pvVar3 = UI_Production_Item_Base_ctor_init_1cd8
                         ((void *)CONCAT22(iVar2,pvVar1),arg1,arg2);
    }
    *(undefined2 *)((int)pvVar4 + 0xc) = (void *)pvVar3;
    *(undefined2 *)((int)pvVar4 + 0xe) = (int)((ulong)pvVar3 >> 0x10);
  }
  return this_ptr;
}



// Parameterized constructor for a UI window with an internal managed list.

void * __stdcall16far
UI_Window_with_List_ctor_with_Params_183c
          (void *this_ptr,void *arg1,void *arg2,void *arg3,void *arg4)
{
  void *pvVar1;
  int iVar2;
  astruct_297 *uVar1;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 in_stack_0000fffa;
  
  pvVar4 = UI_Window_Base_ctor_with_Params_165e(this_ptr,(long)arg3,arg4);
  iVar2 = (int)((ulong)pvVar4 >> 0x10);
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_297 *)this_ptr;
  (&uVar1->field11_0xc)[0x0] = 0x0;
  (&uVar1->field11_0xc)[0x1] = 0x0;
  *(char **)this_ptr = (char *)s_638_bmp_1050_1a11 + 0x5;
  uVar1->field2_0x2 = 0x1030;
  if ((arg2 != NULL) || (arg1 != NULL))
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x18));
    if (iVar2 == 0x0 && pvVar1 == NULL)
    {
      pvVar4 = NULL;
    }
    else
    {
      pvVar4 = UI_Production_Item_Base_ctor_init_1cd8
                         ((void *)CONCAT22(iVar2,pvVar1),arg1,arg2);
    }
    uVar1->field11_0xc = (uint16_t)pvVar4;
    uVar1->field12_0xe = (uint16_t)((ulong)pvVar4 >> 0x10);
  }
  return this_ptr;
}



// Internal destructor for UI windows with managed lists. Cleans up the list and its
// items before calling the base window destructor. Reverts vtable to 0x1A16.

void __stdcall16far UI_Window_with_List_dtor_Internal_18b2(void *this_ptr)
{
  undefined2 *puVar1;
  astruct_296 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_296 *)this_ptr;
  *(char **)this_ptr = (char *)s_638_bmp_1050_1a11 + 0x5;
  uVar2->field2_0x2 = 0x1030;
  if (uVar2->field12_0xe != 0x0 || uVar2->field11_0xc != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field11_0xc;
    (*(code *)*puVar1)();
  }
  UI_Window_Base_dtor_Internal_16b2(this_ptr);
  return;
}



undefined2 __stdcall16far
Simulator_Object_List_Find_ID_and_VCall_8_18f0
          (undefined4 param_1,undefined2 param_2,undefined2 param_3)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  ulong local_a;
  ulong local_6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(long *)(iVar2 + 0xc) != 0x0)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0x10);
    local_6 = (*(code *)*puVar1)();
    for (local_a = 0x0; local_a < local_6; local_a += 0x1)
    {
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0x4);
      lVar4 = (*(code *)*puVar1)();
      if ((lVar4 == CONCAT22(param_3,param_2)) && (true))
      {
        puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0x8);
        (*(code *)*puVar1)();
      }
    }
  }
  return 0x1;
}



undefined2 __stdcall16far const_1_stub_1030_1972(void)
{
  return 0x1;
}



// Serializes a UI window and its associated managed list (offset 0xC) to a save game
// file.

int __stdcall16far
UI_Window_with_List_Save_to_File_Logic_1978(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  
  uVar1 = UI_Window_Save_to_File_Logic_16d6(this_ptr,file_ctx);
  iVar2 = 0x0;
  if (uVar1 != 0x0)
  {
    iVar2 = file_context_serialize_list_logic
                      ((void *)file_ctx,(void *)((ulong)file_ctx >> 0x10));
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    iVar2 = 0x1;
  }
  return iVar2;
}



// Deserializes a UI window and its associated managed list (offset 0xC) from a save
// game file.

int __stdcall16far
UI_Window_with_List_Load_from_File_Logic_19b4(u32 this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  long *in_stack_0000000a;
  
  uVar1 = UI_Window_Load_from_File_Logic_1730(this_ptr,file_ctx);
  iVar2 = 0x0;
  if (uVar1 != 0x0)
  {
    iVar2 = file_context_deserialize_list_logic(file_ctx,in_stack_0000000a);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    iVar2 = 0x1;
  }
  return iVar2;
}



void * __stdcall16far
UI_Window_with_List_dtor_Scalar_Deleting_19f0(void *param_1,byte param_2)
{
  UI_Window_with_List_dtor_Internal_18b2(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for the global UI window manager. Initializes as a window with list, sets
// global 1050:5166 pointer, and sets vtable to 0x1CBC.

void * __stdcall16far UI_Global_Window_Manager_ctor_init_1a32(void *this_ptr)
{
  UI_Window_with_List_ctor_with_Params_183c
            (this_ptr,(void *)0x1,(void *)0x16,(void *)0xff000000,NULL);
  PTR_DAT_1050_0000_1050_5168 = (undefined *)((ulong)this_ptr >> 0x10);
  PTR_DAT_1050_0000_1050_5166 = (undefined *)this_ptr;
  *(undefined4 *)(PTR_DAT_1050_0000_1050_5166 + 0x10) = 0x0;
  *(char **)this_ptr = (char *)s_288_flc_1050_1cb6 + 0x6;
  *(undefined2 *)(PTR_DAT_1050_0000_1050_5166 + 0x2) = 0x1030;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for the global UI window manager. Clears the global 1050:5166
// pointer and calls the internal list-window destructor.

void __stdcall16far UI_Global_Window_Manager_dtor_Internal_1a74(void *this_ptr)
{
  *(char **)this_ptr = (char *)s_288_flc_1050_1cb6 + 0x6;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1030;
  _PTR_DAT_1050_0000_1050_5166 = 0x0;
  UI_Window_with_List_dtor_Internal_18b2(this_ptr);
  return;
}



undefined2 __stdcall16far
UI_Window_Simple_List_Serialize_to_File_1a9c(void *param_1,void *param_2)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined2 uVar4;
  void *unaff_SS;
  undefined2 local_c [0x5];
  
  iVar2 = UI_Window_with_List_Save_to_File_Logic_1978(param_1,param_2);
  if (iVar2 != 0x0)
  {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    pvVar3 = (void *)param_1;
    local_c[0x0] = *(undefined2 *)*(undefined4 *)((int)pvVar3 + 0x10);
    iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
    if (iVar2 != 0x0)
    {
      if (*(int *)*(undefined4 *)((int)pvVar3 + 0x10) == 0x0)
      {
        return 0x1;
      }
      pvVar1 = (void *)*(undefined4 *)((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0x2);
      iVar2 = file_write_check((long)param_2,(void *)pvVar1,
                               (void *)((ulong)pvVar1 >> 0x10));
      if (iVar2 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
UI_Window_Simple_List_Deserialize_from_File_1b18(u32 param_1,void *param_2)
{
  void *pvVar1;
  int iVar2;
  undefined *heap_ctx;
  void *pvVar3;
  void *pvVar4;
  undefined *in_DX;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  
  iVar6 = (int)param_1;
  uVar7 = (undefined2)(param_1 >> 0x10);
  iVar2 = UI_Window_with_List_Load_from_File_Logic_19b4(param_1,(void *)param_2);
  if (iVar2 != 0x0)
  {
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      heap_ctx = g_AllocatedBlock_Offset;
      in_DX = g_AllocatedBlock_Segment;
    }
    pvVar3 = alloc_with_hooks(0x6,0x1,heap_ctx);
    *(undefined2 *)(iVar6 + 0x10) = pvVar3;
    *(undefined2 *)(iVar6 + 0x12) = in_DX;
    pvVar3 = (void *)*(undefined2 *)(iVar6 + 0x12);
    iVar2 = file_read_check((long)param_2,(void *)*(undefined2 *)(iVar6 + 0x10),pvVar3);
    if (iVar2 != 0x0)
    {
      if (*(int *)*(undefined4 *)(iVar6 + 0x10) == 0x0)
      {
        return 0x1;
      }
      iVar2 = *(int *)*(undefined4 *)(iVar6 + 0x10) * 0x2;
      pvVar4 = allocate_memory(CONCAT22(iVar2,iVar2));
      uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x10) >> 0x10);
      iVar2 = (int)*(undefined4 *)(iVar6 + 0x10);
      *(undefined2 *)(iVar2 + 0x2) = pvVar4;
      *(undefined2 *)(iVar2 + 0x4) = pvVar3;
      pvVar1 = (void *)*(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x10) + 0x2);
      iVar2 = file_read_check((long)param_2,(void *)pvVar1,
                              (void *)((ulong)pvVar1 >> 0x10));
      if (iVar2 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates the production item's internal managed list (offset 0xC) by iterating through
// simulator objects and syncing state. Involves virtual calls to specific entity types
// (ID 1).

u16 __stdcall16far
UI_Production_Item_Update_Internal_List_Logic_1be2(astruct_295 *param_1)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  int in_DX;
  astruct_295 *uVar4;
  undefined2 unaff_SI;
  undefined2 uVar5;
  void *pvVar6;
  uint uStack_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (astruct_295 *)param_1;
  if (uVar4->field12_0xc == NULL)
  {
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x18));
    if (in_DX == 0x0 && pvVar3 == NULL)
    {
      uVar4->field12_0xc = NULL;
    }
    else
    {
      pvVar6 = UI_Production_Item_Base_ctor_init_1cd8
                         ((void *)CONCAT22(in_DX,pvVar3),(void *)0x5,(void *)0x5);
      *(void **)&uVar4->field12_0xc = (void *)pvVar6;
      *(undefined2 *)((int)&uVar4->field12_0xc + 0x2) = (int)((ulong)pvVar6 >> 0x10);
    }
  }
  for (uStack_4 = 0x0; uStack_4 < *uVar4->field13_0x10; uStack_4 += 0x1)
  {
    uVar2 = *(undefined4 *)((uint *)uVar4->field13_0x10 + 0x1);
    pvVar6 = Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
                       (_p_SimulatorWorldContext,0x0,
                        (long)*(int *)((int)uVar2 + uStack_4 * 0x2),0x1000000,
                        (int)*(undefined4 *)&uVar4->field_0x4,
                        (int)((ulong)*(undefined4 *)&uVar4->field_0x4 >> 0x10));
    puVar1 = (undefined2 *)((int)*uVar4->field12_0xc + 0x8);
    (*(code *)*puVar1)(0x1028,uVar4->field12_0xc,(void *)pvVar6,
                       (int)((ulong)pvVar6 >> 0x10),uStack_4,0x0);
  }
  return 0x1;
}



void * __stdcall16far
UI_Global_Window_Manager_dtor_Scalar_Deleting_1c96(void *param_1,byte param_2)
{
  UI_Global_Window_Manager_dtor_Internal_1a74(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Base constructor for UI production items. Initializes core window state and sets
// vtable to 0x2044.

void * __stdcall16far
UI_Production_Item_Base_ctor_init_1cd8(void *this_ptr,void *increment,void *initial_cap)
{
  astruct_294 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_294 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = 0x0;
  uVar1->field4_0x8 = 0x0;
  uVar1->field5_0xc = initial_cap;
  uVar1->field6_0x10 = 0x0;
  uVar1->field7_0x14 = increment;
  *(char **)this_ptr = (char *)s_579_bmp_1050_203f + 0x5;
  uVar1->field2_0x2 = 0x1030;
  return this_ptr;
}



// Internal destructor for base UI production items. Frees its primary internal object
// and reverts vtables.

void __stdcall16far UI_Production_Item_Base_dtor_Internal_1d28(void *this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  *(char **)this_ptr = (char *)s_579_bmp_1050_203f + 0x5;
  *(undefined2 *)(iVar1 + 0x2) = 0x1030;
  free_if_not_null((void *)(void *)*(undefined4 *)(iVar1 + 0x4));
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)(iVar1 + 0x2) = 0x1008;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a packed entity ID via a virtual call (offset 4) and resolves it into a
// simulator object pointer.

void * __stdcall16far
UI_Component_Get_Simulator_Object_via_PackedID_1d58(void *this_ptr)
{
  undefined2 *puVar1;
  u8 *packed_id;
  void *pvVar2;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)this_ptr + 0x4);
  packed_id = (u8 *)(*(code *)*puVar1)();
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,packed_id);
  return pvVar2;
}



// Retrieves a simulator object via packed ID and then triggers a secondary virtual
// update/refresh (using 1030:73A8).

void * __stdcall16far
UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(void *this_ptr)
{
  void *pvVar1;
  
  pvVar1 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(this_ptr);
  if (pvVar1 != NULL)
  {
    pvVar1 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar1);
    return pvVar1;
  }
  return NULL;
}



u32 __stdcall16far Simulator_Object_Get_Dword_8_1daa(u32 param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(param_1 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)param_1 + 0xa),
                  *(undefined2 *)((int)param_1 + 0x8));
}



// Retrieves a 4-byte item from the window's associated managed list by its index.

u32 __stdcall16far
UI_Window_Get_List_Item_by_Index_Logic_1dbc(void *this_ptr,ulong index)
{
  int iVar1;
  undefined2 uVar2;
  undefined4 uStack_6;
  
  uStack_6 = 0x0;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  if ((*(long *)(iVar1 + 0x4) != 0x0) && (index < *(ulong *)(iVar1 + 0x8)))
  {
    uStack_6 = *(u32 *)((int)*(undefined4 *)(iVar1 + 0x4) + (int)index * 0x4);
  }
  return uStack_6;
}



u16 __stdcall16far
Simulator_Object_Set_Indexed_Word_Pair_1dfc
          (u32 *param_1,u16 param_2,u16 param_3,ulong param_4)
{
  undefined2 *puVar1;
  u32 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (u32 *)param_1;
  if ((puVar2[0x2] <= param_4) || (puVar2[0x1] == 0x0))
  {
    if ((*(uint *)((int)puVar2 + 0x12) <= param_4._2_2_) &&
       ((*(uint *)((int)puVar2 + 0x12) < param_4._2_2_ ||
        ((uint)puVar2[0x4] <= (uint)param_4))))
    {
      puVar1 = (undefined2 *)((int)*param_1 + 0x20);
      (*(code *)*puVar1)();
    }
    if ((puVar2[0x4] <= param_4) || (puVar2[0x1] == 0x0))
    {
      return 0x0;
    }
    if ((*(uint *)((int)puVar2 + 0xa) <= param_4._2_2_) &&
       ((*(uint *)((int)puVar2 + 0xa) < param_4._2_2_ ||
        ((uint)puVar2[0x2] <= (uint)param_4))))
    {
      *(int *)(puVar2 + 0x2) = (int)(param_4 + 0x1);
      *(undefined2 *)((int)puVar2 + 0xa) = (int)(param_4 + 0x1 >> 0x10);
    }
  }
  uVar5 = (undefined2)(puVar2[0x1] >> 0x10);
  iVar3 = (int)puVar2[0x1];
  *(u16 *)(iVar3 + (uint)param_4 * 0x4) = param_2;
  *(u16 *)(iVar3 + (uint)param_4 * 0x4 + 0x2) = param_3;
  return 0x1;
}



void __stdcall16far
Simulator_Object_Process_First_Null_Entry_VCall_8_1e96(undefined4 *param_1)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong local_6;
  
  local_6 = 0x0;
  while( true )
  {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    if (((ulong)((undefined4 *)param_1)[0x2] <= local_6) ||
       (uVar2 = ((undefined4 *)param_1)[0x1],
       *(long *)((int)uVar2 + (int)local_6 * 0x4) == 0x0)) break;
    local_6 += 0x1;
  }
  puVar1 = (undefined2 *)((int)*param_1 + 0x8);
  (*(code *)*puVar1)();
  return;
}



void __stdcall16far Simulator_Object_Update_Max_Ulong_C_1eee(u32 param_1,ulong param_2)
{
  ulong uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)(param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar1 = *(ulong *)(iVar3 + 0xc);
  uVar2 = *(undefined2 *)(iVar3 + 0xe);
  if (uVar1 < param_2)
  {
    uVar1 = param_2 & 0xffff;
    uVar2 = param_2._2_2_;
  }
  *(undefined2 *)(iVar3 + 0xc) = (int)uVar1;
  *(undefined2 *)(iVar3 + 0xe) = uVar2;
  return;
}



u16 __stdcall16far Simulator_Object_Append_Ulong_to_List_1f16(u32 *param_1,u32 param_2)
{
  undefined2 *puVar1;
  u32 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (u32 *)param_1;
  if ((puVar2[0x1] == 0x0) || (puVar2[0x4] <= puVar2[0x2]))
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x20);
    (*(code *)*puVar1)();
  }
  *(u32 *)((int)puVar2[0x2] * 0x4 + (int)puVar2[0x1]) = param_2;
  puVar2[0x2] = puVar2[0x2] + 0x1;
  return 0x1;
}



void __stdcall16far void_noop_stub_1030_1f6c(void)
{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far Simulator_Object_Realloc_Internal_Buffer_1f70(undefined4 param_1)
{
  uint uVar1;
  void *pvVar2;
  undefined *heap_ctx;
  undefined *puVar3;
  int iVar4;
  undefined2 uVar5;
  void *in_stack_0000ffe8;
  undefined4 local_a;
  undefined4 local_6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(long *)(iVar4 + 0x10) == 0x0)
  {
    uVar1 = *(uint *)(iVar4 + 0xc);
    puVar3 = (undefined *)*(undefined2 *)(iVar4 + 0xe);
  }
  else
  {
    uVar1 = *(uint *)(iVar4 + 0x10) + *(uint *)(iVar4 + 0x14);
    puVar3 = (undefined *)
             (*(int *)(iVar4 + 0x12) + *(int *)(iVar4 + 0x16) +
             (uint)CARRY2(*(uint *)(iVar4 + 0x10),*(uint *)(iVar4 + 0x14)));
  }
  local_6 = CONCAT22(puVar3,uVar1);
  if (*(long *)(iVar4 + 0x4) == 0x0)
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
    pvVar2 = alloc_with_hooks((ulong)(uVar1 << 0x2),0x1,heap_ctx);
  }
  else
  {
    puVar3 = (undefined *)
             (((int)puVar3 * 0x2 + (uint)CARRY2(uVar1,uVar1)) * 0x2 +
             (uint)CARRY2(uVar1 * 0x2,uVar1 * 0x2));
    pvVar2 = heap_realloc(0x1,(long)CONCAT22((int)*(undefined4 *)(iVar4 + 0x4),puVar3),
                          (void *)((ulong)*(undefined4 *)(iVar4 + 0x4) >> 0x10),
                          in_stack_0000ffe8);
  }
  local_a = (void *)CONCAT22(puVar3,pvVar2);
  if (puVar3 != NULL || pvVar2 != NULL)
  {
    *(undefined4 *)(iVar4 + 0x10) = local_6;
    *(undefined4 *)(iVar4 + 0x4) = local_a;
  }
  return;
}
