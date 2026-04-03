/*
 * Source: outpost.c
 * Theme: memory_heap
 * Chunk: 7/13
 * Original lines (combined): 37063-57496
 * Boundaries: top-level declarations/definitions only
 */

/* ── part007 fixup ── */
/* Struct types needed by this file */
#include "core/outpost_common.h"
#include "outpost.types_structs.part021.h"   /* astruct_444 */
#include "outpost.types_structs.part045.h"   /* astruct_454 typedef */
#include "outpost.types_structs.part046.h"   /* astruct_454 definition */
#include "outpost.types_structs.part064.h"   /* astruct_481 */
#include "outpost.types_structs.part077.h"   /* astruct_491 */

/* _puStack_e: Ghidra '_'-prefixed global alias for a local far-pointer composite
 * (uVar4 << 16 | puVar2). Declared file-scope so '_puStack_e = CONCAT22(...)' compiles.
 * TODO(ghidra-verify): Replace with local variable + explicit cast once calling
 * convention is confirmed. */
static u16 *_puStack_e = NULL;

/* _g_AllocatedBlock_Offset: Ghidra '_'-prefixed alias overlapping g_AllocatedBlock_Offset
 * at the same address.  In flat Win32 model they are the same global. */
#define _g_AllocatedBlock_Offset  g_AllocatedBlock_Offset

/* _p_SimulatorGlobalState: Ghidra '_'-prefixed alias */
#define _p_SimulatorGlobalState  p_SimulatorGlobalState

/* _p_GlobalResourceManager: Ghidra '_'-prefixed alias */
#define _p_GlobalResourceManager  p_GlobalResourceManager

/* _PTR_DAT_1050_0000_1050_3962: Ghidra '_'-prefixed alias */
#define _PTR_DAT_1050_0000_1050_3962  PTR_DAT_1050_0000_1050_3962

/* Globals defined in missing_deps.c, referenced in this file */
extern void       *g_AllocatedBlock_Offset;
extern void       *g_AllocatedBlock_Segment;
extern const char  s_1_1050_389a[];
extern void       *p_SimulatorGlobalState;
extern int         PTR_DAT_1050_0000_1050_3960;
extern void       *PTR_DAT_1050_0000_1050_3962;
extern const char  s_582_bmp_1050_1871[];
extern const char  s_589_bmp_1050_18a9[];
extern pointer     p_GlobalResourceManager;
/* ── end part007 fixup ── */




// Migrates items (types 0x3E, 0x41) from primary collection (offset 10) to a newly
// instantiated sub-collection at offset 0xE. Uses virtual methods for collection
// management.

void __stdcall16far UI_Object_Migrate_Items_to_Collection_at_Offset_E_Logic(void *this)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  astruct_491 *this_00;
  void *pvVar3;
  uint extraout_DX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 unaff_SI;
  long lVar7;
  undefined2 in_stack_00000006;
  undefined4 uVar8;
  int iVar9;
  undefined1 local_a [0x4];
  undefined4 uStack_6;
  
  if (*(int *)((int)this + 0x18) == 0x0)
  {
    *(undefined2 *)((int)this + 0x18) = 0x1;
    puVar2 = (undefined4 *)(undefined4 *)*(undefined4 *)((int)this + 0xe);
    uVar4 = 0x0;
    if (*(int *)((int)this + 0x10) != 0x0 || puVar2 != NULL)
    {
      puVar1 = (undefined2 *)(undefined2 *)*puVar2;
      (*(code *)*puVar1)();
      uVar4 = extraout_DX;
    }
    this_00 = allocate_memory(CONCAT22(unaff_SI,0xc));
    uVar5 = uVar4 | (uint)this_00;
    if (uVar5 == 0x0)
    {
      pvVar3 = NULL;
      uVar5 = 0x0;
    }
    else
    {
      pvVar3 = construct_object_with_vtable(this_00,uVar4);
    }
    *(undefined2 *)((int)this + 0xe) = pvVar3;
    *(uint *)((int)this + 0x10) = uVar5;
    init_long_pair(local_a,*(long *)((int)this + 0xa));
    while( true )
    {
      lVar7 = get_next_list_item(local_a);
      iVar6 = (int)((ulong)lVar7 >> 0x10);
      iVar9 = (int)lVar7;
      if (iVar6 == 0x0 && iVar9 == 0x0) break;
      if ((*(int *)(iVar9 + 0x4) == 0x3e) || (*(int *)(iVar9 + 0x4) == 0x41))
      {
        *(undefined2 *)((int)*(undefined4 *)((int)this + 0xa) + 0xa) = 0x0;
        uVar8 = *(undefined4 *)((int)this + 0xa);
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0xc);
        (*(code *)*puVar1)();
        *(undefined2 *)((int)*(undefined4 *)((int)this + 0xa) + 0xa) = 0x1;
        uStack_6 = 0x0;
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe) + 0x4);
        (*(code *)*puVar1)(0x1008,*(undefined4 *)((int)this + 0xe),lVar7,uVar8,iVar9,
                           iVar6);
      }
    }
  }
  return;
}



// Adds a type-value pair object (vtable 1010:A1C4) to a lazily initialized collection
// at offset 0x12. Uses virtual methods for list insertion.

void __stdcall16far
UI_Object_Add_Type_Value_Pair_to_Collection_at_Offset_12_Logic
          (void *this,int value,int type_id)
{
  undefined2 *puVar1;
  astruct_491 *this_00;
  void *pvVar2;
  undefined2 *puVar3;
  uint reg_dx;
  uint uVar4;
  undefined2 uVar5;
  undefined2 in_stack_0000000a;
  undefined4 in_stack_0000ffec;
  long size;
  u32 uStack_a;
  undefined2 *puStack_6;
  
  uVar5 = (undefined2)((ulong)in_stack_0000ffec >> 0x10);
  uVar4 = reg_dx;
  if (*(long *)((int)this + 0x12) == 0x0)
  {
    size = CONCAT22(uVar5,0xc);
    this_00 = allocate_memory(size);
    uVar5 = (undefined2)((ulong)size >> 0x10);
    uVar4 = reg_dx | (uint)this_00;
    if (uVar4 == 0x0)
    {
      *(undefined4 *)((int)this + 0x12) = 0x0;
    }
    else
    {
      pvVar2 = construct_object_with_vtable(this_00,reg_dx);
      *(undefined2 *)((int)this + 0x12) = pvVar2;
      *(uint *)((int)this + 0x14) = uVar4;
    }
  }
  puVar3 = allocate_memory(CONCAT22(uVar5,0x8));
  uStack_a = (u32)CONCAT22(uVar4,(u32)puVar3);
  if (uVar4 == 0x0 && puVar3 == NULL)
  {
    puStack_6 = NULL;
  }
  else
  {
    *(u16 *)uStack_a = (u16)(uintptr_t)(char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    *(u16 *)uStack_a = 0xa1c4;
    puVar3[0x1] = 0x1010;
    puStack_6 = (undefined2 *)uStack_a;
  }
  uVar5 = (undefined2)((ulong)puStack_6 >> 0x10);
  puVar3 = (undefined2 *)puStack_6;
  puVar3[0x2] = in_stack_0000000a;
  puVar3[0x3] = type_id;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x12) + 0x4);
  (*(code *)*puVar1)(0x1000,*(undefined4 *)((int)this + 0x12),puVar3,uVar5);
  return;
}



u16 * __stdcall16far Base_Object_dtor_Scalar_Deleting_a198(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



// Destructor for the simulator object subclass 0x558. Safely destroys nested
// sub-objects and deallocates internal buffers.

void __stdcall16far Simulator_Object_Subclass_dtor_0558(long this_ref)
{
  undefined2 *puVar1;
  u16 *puVar2;
  astruct_481 *uVar3;
  undefined2 uVar4;
  u16 *puStack_e;
  undefined2 uStack_c;
  
  uVar4 = (undefined2)((ulong)this_ref >> 0x10);
  uVar3 = (astruct_481 *)this_ref;
  *(undefined2 *)this_ref = 0x558; // vtable at 1018:558
  uVar3->field2_0x2 = 0x1018;
  uVar3->field9_0xa = 0x568; // vtable at 1018:568
  uVar3->field10_0xc = 0x1018;
  if (uVar3->field12_0x10 != 0x0 || uVar3->field11_0xe != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar3->field11_0xe;
    (*(code *)*puVar1)();
  }
  UI_Object_Destroy_SubObject_at_Offset_12_Logic_Duplicate(this_ref);
  free_if_not_null((void *)uVar3->field39_0x2c);
  if (this_ref == 0x0)
  {
    puVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar2 = &uVar3->field9_0xa;
  }
  _puStack_e = (u16 *)CONCAT22(uVar4,puVar2);
  *_puStack_e = (u16)(char *)s_1_1050_389a;
  puVar2[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(uVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Manages a dynamically growing array of 6-byte structures at offset 0x2C. If the array
// is full (based on count at 0x30 and capacity at 0x32), it reallocates memory in
// increments of 5. It then copies a 6-byte struct from a resource into the next
// available slot.

void __stdcall16far
UI_Component_Append_6Byte_Struct_to_Array_at_Offset_2C_Logic
          (long this_ref,long id1,long id2)
{
  int iVar1;
  undefined *heap_ctx;
  void *pvVar2;
  undefined *puVar3;
  int iVar4;
  undefined2 uVar5;
  void *pvVar6;
  void *in_stack_0000ffce;
  
  pvVar6 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)id2);
  puVar3 = (undefined *)((ulong)pvVar6 >> 0x10);
  uVar5 = (undefined2)((ulong)this_ref >> 0x10);
  iVar4 = (int)this_ref;
  if (*(long *)(iVar4 + 0x2c) == 0x0)
  {
    *(undefined2 *)(iVar4 + 0x32) = 0x5;
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      puVar3 = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar2 = alloc_with_hooks(0x1e,0x1,heap_ctx);
  }
  else
  {
    if (*(int *)(iVar4 + 0x30) + 0x1 < *(int *)(iVar4 + 0x32)) goto LAB_1018_022a;
    *(int *)(iVar4 + 0x32) = *(int *)(iVar4 + 0x32) + 0x5;
    pvVar2 = heap_realloc(0x1,*(long *)(iVar4 + 0x2c) << 0x10,
                          (void *)((ulong)*(long *)(iVar4 + 0x2c) >> 0x10),
                          in_stack_0000ffce);
  }
  *(undefined2 *)(iVar4 + 0x2c) = pvVar2;
  *(undefined2 *)(iVar4 + 0x2e) = puVar3;
LAB_1018_022a:
  pvVar6 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)id1);
  Simulator_Global_Get_Entity_Object_Wrapper_8344
            ((u16)_p_SimulatorGlobalState,(u16)((ulong)_p_SimulatorGlobalState >> 0x10),
             (void *)*(undefined4 *)((int)pvVar6 + 0x10));
  iVar1 = *(int *)(iVar4 + 0x30);
  *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 0x1;
  copy_struct_6bytes((void *)((int)*(undefined4 *)(iVar4 + 0x2c) + iVar1 * 0x6),
                     (void *)((ulong)*(undefined4 *)(iVar4 + 0x2c) >> 0x10));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Destructor for the Main View Controller. It decrements the global reference count,
// frees four string buffers and a Sprite sub-object, and unregisters itself from two
// different UI containers before calling the base destructor.

void __stdcall16far UI_Main_View_Controller_dtor_1874_Logic(long this_ref)
{
  void *this;
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  void *this_00;
  undefined2 uVar4;
  u32 uStack_1a;
  
  uVar4 = (undefined2)((ulong)this_ref >> 0x10);
  this_00 = (void *)this_ref;
  *(char **)this_ref = (char *)s_582_bmp_1050_1871 + 0x3; // vtable at 1018:1874
  *(undefined2 *)((int)this_00 + 0x2) = 0x1018;
  *(undefined2 *)((int)this_00 + 0x20) = (char *)s_589_bmp_1050_18a9 + 0x7;
  *(undefined2 *)((int)this_00 + 0x22) = 0x1018;
  PTR_DAT_1050_0000_1050_3960 = PTR_DAT_1050_0000_1050_3960 + -0x1;
  *(undefined2 *)
   ((int)_PTR_DAT_1050_0000_1050_3962 + *(int *)((int)this_00 + 0x12) * 0x2 + -0x4) =
       0x0;
  if (PTR_DAT_1050_0000_1050_3960 == NULL)
  {
    free_if_not_null((void *)_PTR_DAT_1050_0000_1050_3962);
    _PTR_DAT_1050_0000_1050_3962 = NULL;
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_00 + 0x94));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_00 + 0x9a));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_00 + 0x88));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_00 + 0x8e));
  if (*(long *)((int)this_00 + 0x2c) != 0x0)
  {
    if (this_ref == 0x0)
    {
      iVar1 = 0x0;
      uVar3 = 0x0;
    }
    else
    {
      iVar1 = (int)this_00 + 0x20;
      uVar3 = uVar4;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this_00 + 0x2c),
               CONCAT22(uVar3,iVar1));
  }
  if (*(long *)((int)this_00 + 0x9e) != 0x0)
  {
    if (this_ref == 0x0)
    {
      iVar1 = 0x0;
      uVar3 = 0x0;
    }
    else
    {
      iVar1 = (int)this_00 + 0x20;
      uVar3 = uVar4;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this_00 + 0x9e),
               CONCAT22(uVar3,iVar1));
  }
  this = (void *)*(undefined2 *)((int)this_00 + 0x60);
  if (*(int *)((int)this_00 + 0x62) != 0x0 || this != NULL)
  {
    Sprite_Object_free_internal_buffer(this);
    free_if_not_null(this);
  }
  *(undefined4 *)((int)this_00 + 0x4c) = 0x0;
  if (this_ref == 0x0)
  {
    puVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar2 = (undefined2 *)((int)this_00 + 0x20);
  }
  uStack_1a = (u32)CONCAT22(uVar4,(u32)puVar2);
  *(u16 *)uStack_1a = (u16)(uintptr_t)(char *)s_1_1050_389a; // vtable at 1008:389a
  puVar2[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(this_00);
  return;
}



void __stdcall16far mem_free_indirect_logic(long ptr_to_ptr_ref)
{
  free_if_not_null((void *)*(void **)ptr_to_ptr_ref);
  return;
}



// Extracts a raw list of entity IDs from the internal Data_History_Object and stores
// them in a newly allocated 16-bit array.

void __stdcall16far
UI_Ship_View_Extract_ID_List_from_History_Logic(undefined4 param_1,undefined4 *param_2)
{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint reg_dx;
  uint uVar6;
  undefined2 unaff_SI;
  undefined2 uVar7;
  long lVar8;
  u32 uStack_12;
  int iStack_6;
  
  *param_2 = 0x0;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = *(undefined4 *)((int)param_1 + 0x17e);
  iVar1 = *(int *)((int)uVar2 + 0xa);
  if (iVar1 != 0x0)
  {
    puVar4 = allocate_memory(CONCAT22(unaff_SI,0x6));
    uStack_12 = (u32)CONCAT22(reg_dx,(u32)puVar4);
    uVar6 = reg_dx | (uint)puVar4;
    if (uVar6 == 0x0)
    {
      *param_2 = 0x0;
    }
    else
    {
      *(undefined4 *)uStack_12 = 0x0;
      *(undefined2 *)(puVar4 + 0x1) = 0x0;
      *param_2 = (undefined4)uStack_12;
    }
    pvVar5 = allocate_memory(CONCAT22(unaff_SI,iVar1 * 0x2));
    puVar3 = (undefined2 *)*param_2;
    *puVar3 = pvVar5;
    ((undefined2 *)puVar3)[0x1] = uVar6;
    *(int *)((int)*param_2 + 0x4) = iVar1;
    for (iStack_6 = 0x0; iStack_6 < iVar1; iStack_6 += 0x1)
    {
      lVar8 = Data_History_Object_Get_Point_At_Index
                        ((void *)(void *)*(undefined4 *)((int)param_1 + 0x17e),
                         (long)iStack_6);
      *(undefined2 *)((int)*(undefined4 *)*param_2 + iStack_6 * 0x2) =
           *(undefined2 *)((int)lVar8 + 0x2e);
    }
  }
  return;
}



// Destructor for the Trade Manager. Frees allocated transaction strings and calls the
// base destructor.

void __stdcall16far UI_Trade_Manager_dtor_470C_Logic(long this_ref)
{
  undefined2 *puVar1;
  astruct_454 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ref >> 0x10);
  uVar2 = (astruct_454 *)this_ref;
  *(undefined2 *)this_ref = 0x470c; // vtable at 0x1018:470c
  uVar2->field2_0x2 = 0x1018;
  if (uVar2->field304_0x138 != 0x0 || uVar2->field303_0x136 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field303_0x136;
    (*(code *)*puVar1)();
  }
  (&uVar2->field303_0x136)[0x0] = NULL;
  (&uVar2->field303_0x136)[0x1] = NULL;
  free_if_not_null((void *)uVar2->field293_0x126);
  free_if_not_null((void *)uVar2->field294_0x12a);
  UI_Element_Subclass_dtor_D71A_Wrapper(uVar2);
  return;
}



// Destructor for the transaction UI item base class. Frees the data buffer at offset 4.

void __stdcall16far UI_Transaction_Item_Base_dtor_4AA6_Logic(long this_ref)
{
  astruct_444 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_444 *)this_ref;
  *(undefined2 *)this_ref = 0x4aa6; // vtable at 1018:4aa6
  uVar1->field2_0x2 = 0x1018;
  free_if_not_null((void *)uVar1->field3_0x4);
  *(char **)this_ref = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  return;
}



// Destructor for UI Transaction Item Type 4. Frees resource at offset 0x10 and calls
// base destructor.

void __stdcall16far UI_Transaction_Item_Type4_dtor(long this_ref)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ref >> 0x10);
  *(undefined2 *)this_ref = 0x4a8e; // vtable at 1018:4a8e
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ref + 0x10));
  UI_Transaction_Item_Base_dtor_4AA6_Logic(this_ref);
  return;
}



// Scalar deleting destructor for UI Transaction Item. Calls base destructor and
// optionally frees object memory.

long __stdcall16far UI_Transaction_Item_Scalar_Deleting_Dtor(long this_ref,byte flags)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Transaction Item Type 2. Calls base destructor and
// optionally frees memory.

long __stdcall16far
UI_Transaction_Item_Type2_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Transaction Item Type 4. Calls Type 4 specific
// destructor and optionally frees memory.

long __stdcall16far
UI_Transaction_Item_Type4_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Transaction_Item_Type4_dtor(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Transaction Item Type 5. Calls base destructor and
// optionally frees memory.

long __stdcall16far
UI_Transaction_Item_Type5_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Transaction Item Type 6. Calls base destructor and
// optionally frees memory.

long __stdcall16far
UI_Transaction_Item_Type6_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for Build Site internal object. Calls specific destructor
// and optionally frees memory.

/* NOTE: Build_Site_Object_dtor_Scalar_Deleting already defined in
 * memory_heap.part005.c (graduated). Suppress duplicate here. */
#if 0
long __stdcall16far Build_Site_Object_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  Build_Site_Object_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}
#endif



void * __stdcall16far
Base_Object_2014_dtor_Scalar_Deleting_4c78
          (void *param_1,undefined2 param_2,byte param_3)
{
  Base_Object_dtor_2014_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



void * __stdcall16far
Build_Site_Object_dtor_Scalar_Deleting_5032(void *param_1,byte param_2)
{
  Build_Site_Object_dtor_Internal(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// An alternative scalar deleting destructor for base objects that uses
// heap_free_descriptor instead of free_if_not_null.

long __stdcall16far
Base_Object_dtor_Scalar_Deleting_Alternative(void *this_ref,byte flags)
{
  int bucket_index;
  
  bucket_index = (int)((ulong)this_ref >> 0x10);
  *(char **)this_ref = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    heap_free_descriptor((void *)this_ref,bucket_index);
  }
  return (long)this_ref;
}



void * __stdcall16far
Build_Site_List_Item_dtor_Scalar_Deleting_56a8(void *param_1,byte param_2)
{
  Build_Site_List_Item_dtor_Internal((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// A thin wrapper that invokes a virtual function at offset 0x6C on the Allocation Tab
// Manager object. Likely an update or event trigger.

void __stdcall16far UI_Allocation_Tab_Manager_vcall_6C_Logic_Wrapper(long this_ref)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)this_ref + 0x6c);
  (*(code *)*puVar1)();
  return;
}



void * __stdcall16far
UI_Allocation_Tab_Manager_dtor_Scalar_Deleting_6102(void *param_1,byte param_2)
{
  UI_Allocation_Tab_Manager_dtor_Internal_Cleanup_logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructs an array of 3 points (coordinates) for a triangle by applying constant
// offsets to a base coordinate. Used for indicator graphics.

POINT16 * __stdcall16far
UI_Build_3Point_Triangle_Coordinate_Array_from_Offset
          (undefined2 param_1,undefined2 param_2,void *param_3)
{
  void *pvVar1;
  POINT16 *reg_dx;
  int iVar2;
  undefined2 unaff_SI;
  int iStack_12;
  int local_6;
  int local_4;
  
  unpack_word_pair((void *)param_3,(int *)((ulong)param_3 >> 0x10),&local_6);
  pvVar1 = allocate_memory(CONCAT22(unaff_SI,0xc));
  for (iStack_12 = 0x0; iStack_12 < 0x3; iStack_12 += 0x1)
  {
    iVar2 = iStack_12 * 0x4;
    *(int *)(iVar2 + (int)pvVar1) = *(int *)(iVar2 + 0x4248) + local_4;
    *(int *)((int)pvVar1 + iVar2 + 0x2) = *(int *)(iVar2 + 0x424a) + local_6;
  }
  return reg_dx;
}



// Scalar deleting destructor for the UI Slider component. Calls the internal destructor
// logic and optionally frees the object memory.

long __stdcall16far UI_Slider_Component_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Slider_Component_dtor_Internal_vtable_revert(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Destructor for a UI Control subclass. Reverts vtables and optionally frees object
// memory.

long __stdcall16far
UI_Control_Subclass_dtor_Scalar_Deleting_Logic(long this_ref,byte flags)
{
  void *ptr;
  undefined2 uVar1;
  
  ptr = (void *)this_ref;
  uVar1 = (undefined2)((ulong)this_ref >> 0x10);
  UI_Control_Sub_dtor_logic((void *)((int)ptr + 0xd2));
  *(undefined2 *)this_ref = 0x380a;
  *(undefined2 *)((int)ptr + 0x2) = 0x1008;
  *(char **)this_ref = (char *)s_1_1050_389a;
  *(undefined2 *)((int)ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 42. Calls internal destructor and
// optionally frees memory.

long __stdcall16far UI_Build_Item_Type42_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 43. Calls internal destructor and
// optionally frees memory.

long __stdcall16far UI_Build_Item_Type43_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 45. Calls internal destructor and
// optionally frees memory.

long __stdcall16far UI_Build_Item_Type45_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 47. Calls internal destructor and
// optionally frees memory.

long __stdcall16far UI_Build_Item_Type47_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 48. Calls internal destructor and
// optionally frees memory.

long __stdcall16far UI_Build_Item_Type48_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Factory function that creates a Gameplay Object based on a type ID, allocates memory,
// and initializes it using the Gameplay_Object_ctor.

long __stdcall16far
Gameplay_Object_Factory_Create_From_Type_ID
          (undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  void *pvVar1;
  void *this;
  int reg_dx;
  int iVar2;
  undefined2 in_stack_0000fff2;
  
  pvVar1 = Resource_Manager_Get_or_Create_Entry_Logic
                     ((void *)_p_GlobalResourceManager,0x0,(undefined2)((ulong)(param_4) >> 0x10));
  iVar2 = reg_dx;
  this = allocate_memory(CONCAT22(in_stack_0000fff2,0x46));
  if (iVar2 == 0x0 && this == NULL)
  {
    this = NULL;
    pvVar1 = NULL;
  }
  else
  {
    pvVar1 = Gameplay_Object_ctor
                       (this,iVar2,param_3,(int)param_4,(undefined2)((ulong)(param_4) >> 0x10),pvVar1,reg_dx,0x0,
                        0x0);
  }
  Gameplay_Object_Refresh_Graphic_Logic(this);
  return CONCAT22(pvVar1,this);
}



// An alternative routine for constructing a 3-point triangle coordinate array based on
// constant offsets (0x4270, 0x4272).

int * __stdcall16far
UI_Build_3Point_Triangle_Coordinate_Array_Alternative_23f2
          (undefined2 param_1,undefined2 param_2,void *param_3)
{
  void *pvVar1;
  int *reg_dx;
  int iVar2;
  undefined2 unaff_SI;
  int iStack_12;
  int local_6;
  int local_4;
  
  unpack_word_pair((void *)param_3,(int *)((ulong)param_3 >> 0x10),&local_6);
  pvVar1 = allocate_memory(CONCAT22(unaff_SI,0xc));
  for (iStack_12 = 0x0; iStack_12 < 0x3; iStack_12 += 0x1)
  {
    iVar2 = iStack_12 * 0x4;
    *(int *)(iVar2 + (int)pvVar1) = *(int *)(iVar2 + 0x4270) + local_4;
    *(int *)((int)pvVar1 + iVar2 + 0x2) = *(int *)(iVar2 + 0x4272) + local_6;
  }
  return reg_dx;
}
