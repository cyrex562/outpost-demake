/*
 * Source: outpost.c
 * Theme: memory_heap
 * Chunk: 5/13
 * Original lines (combined): 21933-28993
 * Boundaries: top-level declarations/definitions only
 */




// Targeted Scan Finding: Vtable
// Resets vtable to 1008:BDC8 and then 1008:389A during destruction.

void __stdcall16far UI_Element_Subclass_dtor_BDC8(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0xbdc8;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x4));
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



void * __stdcall16far
Base_Object_2014_dtor_Scalar_Deleting_d75a(void *param_1,u16 param_2,byte param_3)
{
  Base_Object_dtor_2014_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes Display_Adapter_Object vtable to 1008:DC80.
// Queries system metrics (GETDEVICECAPS) and allocates palette buffers via global heap
// context at 1050:5F2C.
// Performs sector-based palette extraction (GetSystemPaletteEntries16).

void * __stdcall16far Display_Adapter_Object_ctor(void *this,int segment,int id)
{
  byte bVar1;
  undefined2 *puVar2;
  HDC16 hdc;
  int16_t iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  void *ptr;
  undefined *heap_ctx;
  void *pvVar7;
  ushort count;
  undefined *start;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined4 uStack_20;
  int iStack_10;
  undefined4 uStack_8;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  zero_init_struct_6bytes((void *)((int)this + 0xe));
  *(undefined2 *)((int)this + 0x14) = 0x0;
  *(undefined2 *)((int)this + 0x16) = 0x0;
  *(undefined4 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xdc80;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  hdc = GetDC16(0x0);
  iVar3 = GETDEVICECAPS(0x8,hdc);
  *(int16_t *)((int)this + 0xa) = iVar3;
  iVar3 = GETDEVICECAPS(0xa,hdc);
  *(int16_t *)((int)this + 0xc) = iVar3;
  iVar4 = *(int *)((int)this + 0xc) + -0x1e0;
  start = (undefined *)(iVar4 >> 0xf);
  pack_3words_reverse((void *)((int)this + 0xe),segment,0x0,iVar4 / 0x2);
  uVar5 = GETDEVICECAPS(0x26,hdc);
  if ((uVar5 & 0x100) != 0x0)
  {
    iVar3 = GETDEVICECAPS(0x68,hdc);
    *(int16_t *)((int)this + 0x14) = iVar3;
    iVar3 = GETDEVICECAPS(0x6a,hdc);
    *(int16_t *)((int)this + 0x16) = iVar3;
    if (_g_AllocatedBlock_Offset == NULL)
    {
      puVar6 = init_memory_allocator();
    }
    else
    {
      start = g_AllocatedBlock_Segment;
      puVar6 = g_AllocatedBlock_Offset;
    }
    ptr = alloc_with_hooks((ulong)(uint)((iVar3 + 0x1) * 0x4),0x1,puVar6);
    uStack_8 = (void *)CONCAT22(start,ptr);
    iVar4 = *(int *)((int)this + 0x16);
    if (_g_AllocatedBlock_Offset == NULL)
    {
      puVar6 = start;
      heap_ctx = init_memory_allocator();
    }
    else
    {
      puVar6 = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar7 = alloc_with_hooks((ulong)(uint)((iVar4 + 0x1) * 0x4),0x1,heap_ctx);
    *(undefined2 *)((int)this + 0x18) = pvVar7;
    *(undefined2 *)((int)this + 0x1a) = puVar6;
    if (uStack_8 != NULL)
    {
      if (*(long *)((int)this + 0x18) != 0x0)
      {
        count = *(int *)((int)this + 0x16) / 0x2;
        GetSystemPaletteEtnries16((HDC16)ptr,(ushort)start,count,NULL);
        GetSystemPaletteEtnries16
                  ((HDC16)(count * 0x4 + (int)ptr),(ushort)start,count,
                   (void *)(*(int *)((int)this + 0x14) - count));
        uStack_20 = (undefined2 *)*(undefined4 *)((int)this + 0x18);
        for (iStack_10 = 0x0; puVar2 = uStack_20, iStack_10 < *(int *)((int)this + 0x16)
            ; iStack_10 += 0x1)
        {
          iVar4 = iStack_10 * 0x4;
          bVar1 = *(byte *)(iVar4 + (int)ptr);
          uVar9 = (undefined2)((ulong)uStack_20 >> 0x10);
          puVar8 = (undefined2 *)uStack_20;
          uStack_20 = (undefined2 *)CONCAT22(uVar9,puVar8 + 0x2);
          *puVar2 = CONCAT11(*(undefined1 *)((int)ptr + iVar4 + 0x1),
                             *(undefined1 *)((int)ptr + iVar4 + 0x2));
          puVar8[0x1] = (uint)bVar1;
        }
      }
    }
    free_if_not_null(ptr);
  }
  ReleaseDC16(hdc,0x0);
  return this;
}



// Targeted Scan Finding: Vtable
// Resets Display_Adapter_Object vtable to 1008:DC80 during destruction.

void __stdcall16far Display_Adapter_Object_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0xdc80;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x18));
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Scalar deleting destructor for the Display_Adapter_Object class. Invokes the object's
// destructor and optionally deallocates the instance memory.

void * __stdcall16far Display_Adapter_Object_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Display_Adapter_Object_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Scalar deleting destructor for the UI component with vtable 0xDD4A. Resets the vtable
// to the base object and optionally deallocates memory.

void * __stdcall16far UI_Component_scalar_dtor_DD4A(void *this,byte flags)
{
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Relationship_Manager vtable to 1008:EAAC.
// Allocates and constructs a nested list tracker at offset 10 using
// construct_object_with_vtable (vtable 1008:5BC4).

void * __stdcall16far UI_Relationship_Manager_ctor(void *this,int segment,int id)
{
  astruct_491 *this_00;
  void *pvVar1;
  uint reg_dx;
  uint uVar2;
  undefined2 in_stack_0000fffa;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined4 *)((int)this + 0x16) = 0x0;
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xeaac;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  this_00 = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar2 = reg_dx | (uint)this_00;
  if (uVar2 == 0x0)
  {
    *(undefined4 *)((int)this + 0xa) = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this_00,reg_dx);
    *(undefined2 *)((int)this + 0xa) = pvVar1;
    *(uint *)((int)this + 0xc) = uVar2;
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1008:EAAC during destruction.
// Invokes virtual destructors (vtable index 0) for sub-objects at offsets 0xE, 0x12,
// and 10.

void __stdcall16far UI_Component_dtor_EAAC(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xeaac;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0x10) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar1)();
  }
  if (*(int *)((int)this + 0x14) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x12) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x12);
    (*(code *)*puVar1)();
  }
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x1e));
  Base_Object_dtor_2014_Logic(this);
  return;
}



void * __stdcall16far
Base_Object_2014_dtor_Scalar_Deleting_ec3c(void *param_1,u16 param_2,byte param_3)
{
  Base_Object_dtor_2014_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Factory function for UI_Subclass_EFC4. If param_3 is non-zero, it performs a raw
// allocation of (param_3 * 4) bytes. If param_3 is zero, it allocates 0x1A bytes and
// invokes the UI_Subclass_EFC4 constructor.

void * __stdcall16far UI_Subclass_EFC4_factory(int mode)
{
  void *pvVar1;
  int reg_dx;
  int in_stack_00000008;
  undefined4 in_stack_0000fff8;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)in_stack_0000fff8 >> 0x10);
  if (in_stack_00000008 != 0x0)
  {
    pvVar1 = allocate_memory(CONCAT22(uVar2,in_stack_00000008 << 0x2));
    return pvVar1;
  }
  pvVar1 = allocate_memory(CONCAT22(uVar2,0x1a));
  if (reg_dx != 0x0 || pvVar1 != NULL)
  {
    pvVar1 = UI_Subclass_EFC4_ctor(pvVar1);
    return pvVar1;
  }
  return NULL;
}



void * __stdcall16far
Game_Settings_Manager_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  Game_Settings_Manager_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Event_List_Manager vtable to 1010:0E98.
// Allocates and constructs an internal tracker object using
// construct_object_with_vtable (sets vtable to 1008:5BC4).

void * __stdcall16far UI_Event_List_Manager_ctor(void *this,int segment,int id)
{
  astruct_491 *this_00;
  void *pvVar1;
  uint reg_dx;
  uint uVar2;
  undefined2 in_stack_0000fffa;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *(undefined2 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xe98;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  this_00 = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar2 = reg_dx | (uint)this_00;
  if (uVar2 == 0x0)
  {
    *(undefined4 *)((int)this + 0xa) = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this_00,reg_dx);
    *(undefined2 *)((int)this + 0xa) = pvVar1;
    *(uint *)((int)this + 0xc) = uVar2;
  }
  return this;
}



u16 * __stdcall16far
UI_Base_Object_dtor_Scalar_Deleting_1010_0e6c(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



void * __stdcall16far Build_Site_Object_dtor_Scalar_Deleting(void *param_1,byte param_2)
{
  Build_Site_Object_dtor_Internal(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Sorts the items in a report-style UI list based on a specific column index
// (`param_2`). It uses the `qsort` routine with a far-pointer callback.

void __stdcall16far UI_Report_List_Sort_Items_by_Column_Logic(void *this,int column_idx)
{
  u16 in_stack_00000008;
  
  g_ReportFilter_0ECC = in_stack_00000008;
  qsort_far_array_with_callback_internal
            ((void *)*(undefined2 *)((int)this + 0x64),
             (int)*(undefined4 *)((int)this + 0x66),
             (int)((ulong)*(undefined4 *)((int)this + 0x66) >> 0x10),
             (u16 *)&p_LastAllocatedBlock);
  return;
}



// Allocates memory for a UI element and initializes it with provided custom data using
// a specialized constructor (at 0x1040:C54A).

void * __stdcall16far UI_Element_Create_with_Custom_Data_Logic_maybe(void *data)
{
  void *pvVar1;
  int reg_dx;
  undefined2 in_stack_00000008;
  undefined4 in_stack_0000000a;
  undefined2 in_stack_0000fffa;
  
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x4a));
  if (reg_dx != 0x0 || pvVar1 != NULL)
  {
    UI_TreeNode_Control_ctor_init_c54a
              (pvVar1,reg_dx,0x0,in_stack_00000008,(int)in_stack_0000000a,
               (int)((ulong)in_stack_0000000a >> 0x10));
    return pvVar1;
  }
  return NULL;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Container_Item vtable to 1010:2010 (base 1008:389A).
// Performs indirect call through [container] vtable offset 4 to add item.

void __stdcall16far
UI_Container_Add_Item_at_Offset_4_Logic
          (undefined4 param_1,undefined2 param_2,undefined4 param_3)
{
  undefined2 *puVar1;
  astruct_491 *this;
  void *pvVar2;
  undefined2 *puVar3;
  uint reg_dx;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 in_stack_0000ffe2;
  undefined4 uStack_a;
  undefined2 *puStack_6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  uVar4 = reg_dx;
  if (*(long *)(iVar5 + 0x4) == 0x0)
  {
    this = allocate_memory(CONCAT22(in_stack_0000ffe2,0xc));
    uVar4 = reg_dx | (uint)this;
    if (uVar4 == 0x0)
    {
      *(undefined4 *)(iVar5 + 0x4) = 0x0;
    }
    else
    {
      pvVar2 = construct_object_with_vtable(this,reg_dx);
      *(undefined2 *)(iVar5 + 0x4) = pvVar2;
      *(uint *)(iVar5 + 0x6) = uVar4;
    }
  }
  puVar3 = allocate_memory(CONCAT22(in_stack_0000ffe2,0xa));
  uStack_a = (undefined2 *)CONCAT22(uVar4,puVar3);
  if (uVar4 == 0x0 && puVar3 == NULL)
  {
    puStack_6 = NULL;
  }
  else
  {
    *uStack_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    *(undefined4 *)(puVar3 + 0x2) = param_3;
    puVar3[0x4] = param_2;
    *uStack_a = (char *)s_573_bmp_1050_200f + 0x1;
    puVar3[0x1] = 0x1010;
    puStack_6 = uStack_a;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x4) + 0x4);
  (*(code *)*puVar1)(0x1000,*(undefined4 *)(iVar5 + 0x4),(undefined2 *)puStack_6,
                     (int)((ulong)puStack_6 >> 0x10));
  return;
}



void * __stdcall16far
Base_Object_2014_dtor_Scalar_Deleting_1fea(void *param_1,u16 param_2,byte param_3)
{
  Base_Object_dtor_2014_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}
