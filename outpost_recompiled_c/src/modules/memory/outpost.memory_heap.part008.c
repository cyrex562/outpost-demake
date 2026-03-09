/*
 * Source: outpost.c
 * Theme: memory_heap
 * Chunk: 8/13
 * Original lines (combined): 58545-79857
 * Boundaries: top-level declarations/definitions only
 */




// Renders a list of objects as a series of polygons using a consistent pen and brush
// style. Loops through the object collection and calculates coordinates for each.

void __stdcall16far
UI_Draw_Object_List_as_Polygons_33c0
          (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
          int param_5)
{
  HPEN16 obj;
  HGDIOBJ16 obj_00;
  HBRUSH16 obj_01;
  HGDIOBJ16 HVar1;
  u16 *puVar2;
  HDC16 hdc;
  void *pvVar3;
  undefined2 uVar4;
  int iStack_14;
  undefined4 uStack_e;
  
  if (param_3 != 0x0)
  {
    obj = CreatePen16((COLORREF)param_2,(short)((ulong)param_2 >> 0x10),0x1);
    obj_00 = SelectObject16(0x1538,obj);
    obj_01 = CreateSolidBrush16((COLORREF)param_2);
    hdc = 0x1538;
    HVar1 = SelectObject16(0x1538,obj_01);
    uStack_e = param_4;
    for (iStack_14 = 0x0; iStack_14 < param_3; iStack_14 += 0x1)
    {
      uVar4 = (undefined2)((ulong)uStack_e >> 0x10);
      pvVar3 = UI_Calculate_Object_Polygon_Coordinates_3540
                         (param_1,param_5,(int)uStack_e,uVar4);
      if (param_5 < 0x1)
      {
        puVar2 = (u16 *)((int)(undefined **)&p_CurrentHeapContext + 0x1);
      }
      else
      {
        puVar2 = (u16 *)&p_LastAllocatedBlock;
      }
      GDI_Polygon_Wrapper_3602
                ((u16)param_1,(u16)((ulong)param_1 >> 0x10),
                 (u16 *)CONCAT22((void *)pvVar3,puVar2),(HDC16)((ulong)pvVar3 >> 0x10));
      hdc = 0x1000;
      free_if_not_null((void *)pvVar3);
      uStack_e = CONCAT22(uVar4,(int)uStack_e + 0x6);
    }
    HVar1 = SelectObject16(hdc,HVar1);
    DeleteObject16(HVar1);
    SelectObject16(0x1538,obj_00);
    DeleteObject16(obj);
  }
  return;
}



// Calculates the individual point coordinates for an object's polygon representation
// based on its type and current state.

void * __stdcall16far
UI_Calculate_Object_Polygon_Coordinates_3540
          (undefined2 param_1,undefined2 param_2,int param_3,void *param_4)
{
  void *pvVar1;
  undefined2 reg_dx;
  int iVar2;
  undefined2 unaff_SI;
  int iStack_12;
  int iStack_c;
  int iStack_a;
  int local_6;
  int local_4;
  
  unpack_word_pair((void *)param_4,(int *)((ulong)param_4 >> 0x10),&local_6);
  if (param_3 == 0x0)
  {
    iStack_c = 0x3;
    iStack_a = 0x42a6;
  }
  else if (param_3 == 0x1)
  {
    iStack_c = 0x4;
    iStack_a = 0x4296;
  }
  else
  {
    if (param_3 != 0x2)
    {
      return NULL;
    }
    iStack_c = 0x4;
    iStack_a = 0x42b2;
  }
  pvVar1 = allocate_memory(CONCAT22(unaff_SI,iStack_c << 0x2));
  for (iStack_12 = 0x0; iStack_12 < iStack_c; iStack_12 += 0x1)
  {
    iVar2 = iStack_12 * 0x4;
    *(int *)(iVar2 + (int)pvVar1) = *(int *)(iVar2 + iStack_a) + local_4;
    *(int *)((int)pvVar1 + iVar2 + 0x2) = *(int *)(iVar2 + iStack_a + 0x2) + local_6;
  }
  return (void *)CONCAT22(reg_dx,pvVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Base constructor for components managing a list of UI items (like research
// categories). Allocates memory for a sprite list and coordinate list. Sets vtable to
// 0x87AA.

u16 * __stdcall16far UI_Lab_Item_List_Base_ctor_init(u16 *this_ptr,u16 count)
{
  void *pvVar1;
  u16 uVar2;
  undefined2 unaff_SI;
  long lVar3;
  u16 in_stack_00000008;
  
  *_this_ptr = (u16)(char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  this_ptr[0x2] = 0x0;
  this_ptr[0x3] = in_stack_00000008;
  (this_ptr + 0x4)[0x0] = 0x0;
  (this_ptr + 0x4)[0x1] = 0x0;
  (this_ptr + 0x6)[0x0] = 0x0;
  (this_ptr + 0x6)[0x1] = 0x0;
  zero_init_struct_6bytes(this_ptr + 0x8);
  *_this_ptr = 0x87aa;
  this_ptr[0x1] = 0x1020;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar2 = (u16)((ulong)lVar3 >> 0x10);
  copy_struct_6bytes(this_ptr + 0x8,(void *)count);
  lVar3 = CONCAT22(unaff_SI,this_ptr[0x3] << 0x3);
  pvVar1 = allocate_memory(lVar3);
  this_ptr[0x4] = (u16)pvVar1;
  this_ptr[0x5] = uVar2;
  pvVar1 = allocate_memory(CONCAT22((int)((ulong)lVar3 >> 0x10),this_ptr[0x3] << 0x2));
  this_ptr[0x6] = (u16)pvVar1;
  this_ptr[0x7] = uVar2;
  memset_far((void *)*(void **)(this_ptr + 0x4),
             (int)((ulong)*(void **)(this_ptr + 0x4) >> 0x10),0x0);
  memset_far((void *)*(void **)(this_ptr + 0x6),
             (int)((ulong)*(void **)(this_ptr + 0x6) >> 0x10),0x0);
  return this_ptr;
}



// Internal destructor for the Lab Item List base. Iterates through and frees all
// allocated sprites and internal list buffers.

void __stdcall16far UI_Lab_Item_List_Base_dtor_Internal_Cleanup_logic(void *this_ptr)
{
  void *this;
  astruct_347 *uVar3;
  int iVar1;
  int iVar2;
  undefined2 uVar4;
  undefined2 uVar5;
  int iStack_c;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_347 *)this_ptr;
  *(undefined2 *)this_ptr = 0x87aa;
  uVar3->field2_0x2 = 0x1020;
  free_if_not_null((void *)uVar3->field6_0x8);
  if (*(int *)((int)&uVar3->field7_0xc + 0x2) != 0x0 ||
      *(int *)&uVar3->field7_0xc != 0x0)
  {
    iStack_c = 0x0;
    while( true )
    {
      if (uVar3->field5_0x6 <= iStack_c) break;
      iVar2 = iStack_c * 0x4;
      uVar5 = (undefined2)((ulong)uVar3->field7_0xc >> 0x10);
      iVar1 = (int)uVar3->field7_0xc;
      if (*(long *)(iVar1 + iVar2) != 0x0)
      {
        this = (void *)(void *)*(undefined4 *)(iVar1 + iVar2);
        if (*(int *)(iVar1 + iVar2 + 0x2) != 0x0 || this != NULL)
        {
          Sprite_Object_free_internal_buffer(this);
          free_if_not_null(this);
        }
      }
      iStack_c += 0x1;
    }
    free_if_not_null((void *)uVar3->field7_0xc);
  }
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar3->field2_0x2 = 0x1008;
  return;
}



void __stdcall16far UI_Sprite_Collection_Cleanup_and_Free_865a(undefined4 param_1)
{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_4;
  
  local_4 = 0x0;
  while( true )
  {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    iVar1 = (int)param_1;
    if (*(int *)(iVar1 + 0x6) <= local_4) break;
    iVar3 = local_4 * 0x4;
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xc) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0xc);
    if (*(long *)(iVar2 + iVar3) != 0x0)
    {
      Sprite_Object_Restore_To_Bitmap((void *)(void *)*(undefined4 *)(iVar2 + iVar3));
      uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xc) >> 0x10);
      iVar2 = (int)*(undefined4 *)(iVar1 + 0xc);
      this = (void *)(void *)*(undefined4 *)(iVar2 + iVar3);
      if (*(int *)(iVar2 + iVar3 + 0x2) != 0x0 || this != NULL)
      {
        Sprite_Object_free_internal_buffer(this);
        free_if_not_null(this);
      }
      *(undefined4 *)((int)*(undefined4 *)(iVar1 + 0xc) + local_4 * 0x4) = 0x0;
    }
    local_4 += 0x1;
  }
  return;
}



// Frees the far pointer stored at the beginning of the UI Item List structure if it is
// not null.

void __stdcall16far UI_Item_List_Free_Data_Pointer_Logic(void *this_ptr)
{
  free_if_not_null((void *)*(void **)this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Allocates or reallocates the internal buffer for the UI Item List to accommodate more
// elements, using an increment step defined in the list structure.

void __stdcall16far UI_Item_List_Expand_Capacity_Logic(void *this_ptr)
{
  int iVar1;
  void *pvVar2;
  undefined *heap_ctx;
  undefined *puVar3;
  void *pvVar4;
  undefined2 uVar5;
  void *in_stack_0000ffe6;
  undefined4 uStack_c;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar4 = (void *)this_ptr;
  if (*(int *)((int)pvVar4 + 0x4) == 0x0)
  {
    puVar3 = NULL;
    iVar1 = *(int *)((int)pvVar4 + 0x6);
  }
  else
  {
    iVar1 = *(uint *)((int)pvVar4 + 0x4) + *(uint *)((int)pvVar4 + 0x8);
    puVar3 = (undefined *)
             (uint)CARRY2(*(uint *)((int)pvVar4 + 0x4),*(uint *)((int)pvVar4 + 0x8));
  }
  if ((false) || (puVar3 == NULL))
  {
    if (*(long *)this_ptr == 0x0)
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
      pvVar2 = alloc_with_hooks((ulong)(uint)(iVar1 * 0x6),0x1,heap_ctx);
    }
    else
    {
      puVar3 = NULL;
      pvVar2 = heap_realloc(0x1,*(long *)this_ptr << 0x10,
                            (void *)((ulong)*(long *)this_ptr >> 0x10),in_stack_0000ffe6
                           );
    }
    uStack_c = (void *)CONCAT22(puVar3,pvVar2);
    if (puVar3 != NULL || pvVar2 != NULL)
    {
      *(int *)((int)pvVar4 + 0x4) = iVar1;
      *(void **)this_ptr = uStack_c;
      UI_Item_List_Sort_Logic(this_ptr);
    }
  }
  return;
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
  int reg_dx;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uStack_12;
  long lStack_e;
  long lStack_a;
  undefined2 *puStack_6;
  
  puVar3 = validate_and_get_block((void *)_p_Pool_Type3_Sprite);
  uStack_12 = (undefined2 *)CONCAT22(reg_dx,puVar3);
  if (reg_dx == 0x0 && puVar3 == NULL)
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



// Scalar deleting destructor for a UI build item. Reverts vtables and optionally frees
// memory.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_2762(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Internal destructor for UI Construction Item 0x3E2C. Frees its internal UI Item List
// and reverts vtables.

void __stdcall16far UI_Construction_Item_Type_3E2C_dtor_Internal_388e(void *this_ptr)
{
  void *ptr;
  astruct_330 *uVar3;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_330 *)this_ptr;
  *(void ***)this_ptr = (void **)&PTR_s_0_000_1050_3bbb_1050_3e2c;
  uVar3->field2_0x2 = 0x1028;
  ptr = (void *)*(void **)&uVar3->field_0x28;
  if (uVar3->field41_0x2a != 0x0 || ptr != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic((void *)CONCAT22(uVar3->field41_0x2a,ptr));
    free_if_not_null(ptr);
  }
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  return;
}



// Scalar deleting destructor for certain UI build items. Reverts vtables and optionally
// frees memory.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_5496(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_69cc(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int reg_dx;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x10e));
  local_a = (undefined2 *)CONCAT22(reg_dx,puVar3);
  if (reg_dx == 0x0 && puVar3 == NULL)
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
    puVar3[0x86] = *(undefined2 *)(iVar6 + 0x10c);
    *local_a = 0x6ae2;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



undefined2 * __stdcall16far
Base_Object_dtor_Scalar_Deleting_6aa6(undefined2 *param_1,byte param_2)
{
  *param_1 = (char *)s_1_1050_389a;
  ((undefined2 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((undefined2 *)param_1);
  }
  return param_1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_82b4(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int reg_dx;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = (undefined2 *)CONCAT22(reg_dx,puVar3);
  if (reg_dx == 0x0 && puVar3 == NULL)
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
    *local_a = 0x836e;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_8400(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int reg_dx;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = (undefined2 *)CONCAT22(reg_dx,puVar3);
  if (reg_dx == 0x0 && puVar3 == NULL)
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
    *local_a = 0x84ba;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_858c(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int reg_dx;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x112));
  local_a = (undefined2 *)CONCAT22(reg_dx,puVar3);
  if (reg_dx == 0x0 && puVar3 == NULL)
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
    puVar3[0x84] = *(undefined2 *)(iVar6 + 0x108);
    puVar3[0x85] = *(undefined2 *)(iVar6 + 0x10a);
    puVar3[0x86] = *(undefined2 *)(iVar6 + 0x10c);
    *(undefined4 *)(puVar3 + 0x87) = *(undefined4 *)(iVar6 + 0x10e);
    *local_a = 0x8688;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_86f4(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int reg_dx;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x110));
  local_a = (undefined2 *)CONCAT22(reg_dx,puVar3);
  if (reg_dx == 0x0 && puVar3 == NULL)
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
    *local_a = 0x6e50;
    puVar3[0x1] = 0x1028;
    *local_a = 0x87e0;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_8c46(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int reg_dx;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x124));
  local_a = (undefined2 *)CONCAT22(reg_dx,puVar3);
  if (reg_dx == 0x0 && puVar3 == NULL)
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
    *(undefined4 *)(puVar3 + 0x88) = *(undefined4 *)(iVar6 + 0x110);
    *(undefined4 *)(puVar3 + 0x8a) = *(undefined4 *)(iVar6 + 0x114);
    puVar3[0x8c] = *(undefined2 *)(iVar6 + 0x118);
    puVar3[0x8d] = *(undefined2 *)(iVar6 + 0x11a);
    puVar3[0x8e] = *(undefined2 *)(iVar6 + 0x11c);
    puVar3[0x8f] = *(undefined2 *)(iVar6 + 0x11e);
    *(undefined4 *)(puVar3 + 0x90) = *(undefined4 *)(iVar6 + 0x120);
    *local_a = 0x8d8e;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}
