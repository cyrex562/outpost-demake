/*
 * Source: outpost.c
 * Theme: memory_heap
 * Chunk: 13/13
 * Original lines (combined): 103915-130704
 * Boundaries: top-level declarations/definitions only
 */




undefined2 * __stdcall16far Simulator_Object_Clone_Logic_e6c2(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x10a));
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
    puVar3[0x84] = *(undefined2 *)(iVar6 + 0x108);
    *local_a = 0xe78a;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_e7d6(undefined4 param_1)
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
    *local_a = 0xe890;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_0000(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
                // Segment:    8
                // Offset:     000606c0
                // Length:     ef91
                // Min Alloc:  ef91
                // Flags:      0d50
                //     Code
                //     Moveable
                //     Preload
                //     Impure (Non-shareable)
                // 
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0xb96;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1038;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



void __stdcall16far UI_Colony_Window_Free_SubItem_Logic_3608(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ptr + 0x21a));
  *(undefined4 *)((int)this_ptr + 0x21a) = 0x0;
  return;
}



// Internal destructor for Resource Change Items. Systematically frees associated list
// buffers and reverts vtables.

void __stdcall16far Simulator_Resource_Change_Item_dtor_Internal_6912(u16 *this_ptr)
{
  void *ptr;
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x78de;
  this_ptr[0x1] = 0x1038;
  if (this_ptr[0x3] != 0x0 || (undefined4 *)*(undefined4 **)(this_ptr + 0x2) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(undefined4 **)(this_ptr + 0x2)
    ;
    (*(code *)*puVar1)();
  }
  ptr = (void *)this_ptr[0x7];
  if (this_ptr[0x8] != 0x0 || ptr != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic((void *)CONCAT22(this_ptr[0x8],ptr));
    free_if_not_null(ptr);
  }
  *_this_ptr = (u16)(char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  return;
}



// Constructor for the global Turn Manager. Initializes two internal linked
// lists/trackers and sets the primary 1050:5A64 pointer.

u32 * __stdcall16far Simulator_Turn_Manager_ctor_init_78e2(u32 *this_ptr)
{
  astruct_491 *paVar1;
  void *pvVar2;
  uint in_DX;
  uint uVar3;
  uint uVar4;
  undefined *in_stack_00000006;
  undefined4 in_stack_0000fff8;
  long size;
  undefined2 uVar5;
  
  *_this_ptr = 0x0;
  this_ptr[0x1] = 0x0;
  p_SimulatorTurnManager = (undefined *)this_ptr;
  PTR_DAT_1050_0000_1050_5a66 = in_stack_00000006;
  size = CONCAT22((int)((ulong)in_stack_0000fff8 >> 0x10),0xc);
  paVar1 = allocate_memory(size);
  uVar5 = (undefined2)((ulong)size >> 0x10);
  uVar3 = in_DX | (uint)paVar1;
  if (uVar3 == 0x0)
  {
    *_this_ptr = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(paVar1,in_DX);
    *(void **)_this_ptr = pvVar2;
    *(uint *)((int)this_ptr + 0x2) = uVar3;
  }
  paVar1 = allocate_memory(CONCAT22(uVar5,0xc));
  uVar4 = uVar3 | (uint)paVar1;
  if (uVar4 == 0x0)
  {
    pvVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(paVar1,uVar3);
  }
  *(void **)(this_ptr + 0x1) = pvVar2;
  *(uint *)((int)this_ptr + 0x6) = uVar4;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for sub-dialog component type 0xD23E. Frees specialized procedure
// instances (thunks) used for subclassing or callbacks.

void __stdcall16far UI_SubDialog_TypeD23E_dtor_Internal_cfda(void *this_ptr)
{
  astruct_93 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_93 *)this_ptr;
  *(undefined2 *)this_ptr = 0xd23e;
  uVar1->field2_0x2 = 0x1038;
  FreeProcInstance16(uVar1->field3_0x4);
  FreeProcInstance16(_PTR_DAT_1050_0000_1050_5bcc);
  uVar1->field3_0x4 = NULL;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  return;
}



void __stdcall16far Helper_Free_Pointer_Offset0_a582(void *param_1)
{
  free_if_not_null((void *)*(void **)param_1);
  return;
}



// Internal destructor for managed object collections. Iteratively calls the scalar
// destructor (A582) for all items in the buffer before freeing the buffer itself.

void __stdcall16far UI_Managed_Collection_dtor_Internal_a5d0(void *param_1)
{
  int iVar1;
  astruct_21 *uVar4;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (astruct_21 *)param_1;
  iVar1 = uVar4->field2_0x2;
  if (uVar4->field3_0x4 != 0x0 || iVar1 != 0x0)
  {
    call_function_ptr_n_times_simple((void *)0xa582,0x1040,*(u16 *)(iVar1 + -0x2));
    free_if_not_null((void *)(iVar1 + -0x2));
  }
  free_if_not_null((void *)uVar4->field10_0xc);
  return;
}
