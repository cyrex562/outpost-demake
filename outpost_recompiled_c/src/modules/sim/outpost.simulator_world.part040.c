/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 40/56
 * Original lines (combined): 96611-97649
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// High-level destructor for the entire global simulator state. Systematically tears
// down the Simulator Context, Build Item Manager, History Object, and Object Library.
// Clears global state pointers.

void __stdcall16far Simulator_Global_State_dtor_Internal_8210(int *this_ptr)
{
  void *pvVar1;
  undefined2 in_stack_00000006;
  
  if (_p_SimulatorWorldContext != NULL)
  {
    pvVar1 = (void *)_p_SimulatorWorldContext;
    Simulator_Context_dtor_Internal_daba(_p_SimulatorWorldContext);
    free_if_not_null(pvVar1);
  }
  pvVar1 = (void *)*_this_ptr;
  if (this_ptr[0x1] != 0x0 || pvVar1 != NULL)
  {
    UI_Build_Item_List_Manager_dtor_Internal_d282
              ((void *)CONCAT22(this_ptr[0x1],pvVar1));
    free_if_not_null(pvVar1);
  }
  pvVar1 = (void *)this_ptr[0x2];
  if (this_ptr[0x3] != 0x0 || pvVar1 != NULL)
  {
    Data_History_Object_Node_Virtual_Dtor_cff2((void *)CONCAT22(this_ptr[0x3],pvVar1));
    free_if_not_null(pvVar1);
  }
  if (_p_SimulatorObjectLibrary != NULL)
  {
    pvVar1 = (void *)_p_SimulatorObjectLibrary;
    Simulator_Object_Library_dtor_Internal_5c0e();
    free_if_not_null(pvVar1);
  }
  pvVar1 = (void *)_p_SimulatorTurnManager;
  if (PTR_DAT_1050_0000_1050_5a66 != NULL || pvVar1 != NULL)
  {
    Simulator_Turn_Manager_dtor_Internal_7964(_p_SimulatorTurnManager);
    free_if_not_null(pvVar1);
  }
  _p_SimulatorGlobalState = 0x0;
  return;
}



// Wrapper that initializes the global history object from a specific simulator entity's
// point collection.

void * __stdcall16far
Simulator_Global_History_Init_from_Entity_Wrapper_82f0(void *this_ptr,void *entity_id)
{
  void *pvVar1;
  
  pvVar1 = Data_History_Object_Initialize_from_Simulator_Entity_d078
                     ((void *)*(undefined4 *)((int)(void *)this_ptr + 0x4),
                      (u8 *)entity_id);
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A global wrapper to retrieve entity coordinates using the active simulator context.

void __stdcall16far
Simulator_Global_Get_Entity_Coords_Wrapper_8308
          (u16 arg1,u16 arg2,void *out_x,void *out_y,void *entity_id)
{
  Simulator_Get_Entity_Coords_from_TypeID_e198
            (_p_SimulatorWorldContext,out_x,out_y,(u8 *)entity_id);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the current 32-bit simulator tick/turn count from the global context.

u32 __stdcall16far Simulator_Global_Get_Current_Tick_8326(void)
{
  return CONCAT22(((undefined2 *)_p_SimulatorWorldContext)[0x1],
                  *_p_SimulatorWorldContext);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Resets the global simulator tick counter to 0.

void __stdcall16far Simulator_Global_Reset_Tick_Counter_8334(void)
{
  *_p_SimulatorWorldContext = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A global wrapper to retrieve an entity object from its packed ID using the active
// simulator context.

void * __stdcall16far
Simulator_Global_Get_Entity_Object_Wrapper_8344(u16 arg1,u16 arg2,void *entity_id)
{
  void *pvVar1;
  
  pvVar1 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)entity_id);
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Executes a single simulator tick. Refreshes the build item manager, clears processed
// data history, and increments the global turn counter.

void __stdcall16far Simulator_Global_Execute_Single_Tick_Logic_838e(void **this_ptr)
{
  undefined2 in_stack_00000006;
  
  UI_Build_Item_Manager_Initialize_Standard_Items_d2b0(*_this_ptr);
  Data_History_Object_Clear_All_Nodes_Logic_d01a
            ((int)this_ptr[0x1],(int)((ulong)this_ptr[0x1] >> 0x10));
  Simulator_Main_Tick_Counter_Update_e242(_p_SimulatorWorldContext,0x1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Executes a specified number of simulator ticks in a loop. Synchronizes build items
// and history each turn.

void __stdcall16far
Simulator_Global_Execute_Multiple_Ticks_Logic_83ba(void *this_ptr,long count)
{
  long lVar1;
  undefined4 uVar2;
  
  while (lVar1 = count + -0x1, count != 0x0)
  {
    UI_Build_Item_Manager_Initialize_Standard_Items_d2b0(*(void **)this_ptr);
    uVar2 = *(undefined4 *)((int)(void *)this_ptr + 0x4);
    Data_History_Object_Clear_All_Nodes_Logic_d01a
              ((int)uVar2,(int)((ulong)uVar2 >> 0x10));
    count = lVar1;
    if (lVar1 != 0x0)
    {
      Simulator_Main_Tick_Counter_Update_e242(_p_SimulatorWorldContext,0x0);
    }
  }
  Simulator_Main_Tick_Counter_Update_e242(_p_SimulatorWorldContext,0x1);
  return;
}



// Initializes the internal state of a simulator entity. Zeroes out 6 bytes of metadata
// and sets the activation flag at 0x1E.

void * __stdcall16far Simulator_Entity_Init_State_84ae(void *this_ptr)
{
  zero_init_struct_6bytes((void *)((int)this_ptr + 0x8));
  *(undefined2 *)((int)this_ptr + 0x1e) = 0x1;
  return this_ptr;
}



// Performs exhaustive internal cleanup for a simulator entity, including virtual
// destructor calls for its sub-objects and freeing associated memory buffers.

void __stdcall16far Simulator_Entity_Cleanup_Internal_84d0(void *this_ptr)
{
  undefined2 *puVar1;
  astruct_228 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_228 *)this_ptr;
  if (uVar2->field20_0x1e != 0x0)
  {
    if (uVar2->field12_0x10 != 0x0 || uVar2->field11_0xe != NULL)
    {
      puVar1 = (undefined2 *)(undefined2 *)*uVar2->field11_0xe;
      (*(code *)*puVar1)();
    }
    if (uVar2->field14_0x14 != 0x0 || uVar2->field13_0x12 != NULL)
    {
      puVar1 = (undefined2 *)(undefined2 *)*uVar2->field13_0x12;
      (*(code *)*puVar1)();
    }
    free_if_not_null((void *)uVar2->field4_0x4);
    free_if_not_null((void *)uVar2->field15_0x16);
  }
  return;
}



// Copies state data from one simulator entity to another, including its 6-byte
// ID/coordinate header and associated production fields.

void __stdcall16far Simulator_Entity_Data_Copy_Logic_8544(void *dest_ptr,void *src_ptr)
{
  astruct_227 *uVar1;
  astruct_226 *uVar2;
  undefined2 uVar3;
  void *src;
  
  *(undefined2 *)dest_ptr = *(undefined2 *)src_ptr;
  uVar3 = (undefined2)((ulong)src_ptr >> 0x10);
  uVar1 = (astruct_227 *)src_ptr;
  src = (void *)((ulong)dest_ptr >> 0x10);
  uVar2 = (astruct_226 *)dest_ptr;
  uVar2->field4_0x4 = uVar1->field4_0x4;
  copy_struct_6bytes(&uVar2->field_0x8,src);
  uVar2->field11_0xe = uVar1->field11_0xe;
  uVar2->field12_0x12 = uVar1->field12_0x12;
  uVar2->field13_0x16 = uVar1->field13_0x16;
  uVar2->field14_0x1a = uVar1->field14_0x1a;
  uVar2->field17_0x1e = 0x0;
  return;
}



// Constructor for a dynamic collection of 6-byte simulator entity descriptors.
// Initializes capacity, increment step, and pre-allocates the buffer.

void * __stdcall16far
Simulator_Entity_Collection_ctor_init_85be
          (void *this_ptr,uint initial_cap,uint increment)
{
  astruct_225 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_225 *)this_ptr;
  *(undefined4 *)this_ptr = 0x0;
  uVar1->field4_0x4 = 0x0;
  uVar1->field5_0x6 = increment;
  uVar1->field6_0x8 = initial_cap;
  uVar1->field11_0xe = 0x0;
  if (uVar1->field5_0x6 == 0x0)
  {
    uVar1->field5_0x6 = 0x5;
  }
  Simulator_Entity_Collection_Realloc_Buffer_Logic_878c(this_ptr);
  return this_ptr;
}



// Searches for an item in the collection and updates its associated 32-bit field if
// found.

void * __stdcall16far
Simulator_Entity_Collection_Find_and_Set_Item_Logic_861a
          (void *param_1,undefined2 param_2,u16 param_3)
{
  void *reg_ax;
  int reg_dx;
  void *uStack_6;
  
  Simulator_Entity_Collection_Find_Item_Wrapper_8854
            ((void *)CONCAT22(param_2,param_1),param_3);
  uStack_6 = (void *)CONCAT22(reg_dx,reg_ax);
  if (reg_dx == 0x0 && reg_ax == NULL)
  {
    *(undefined4 *)((int)param_1 + 0xa) = 0x0;
  }
  else
  {
    *(undefined4 *)((int)param_1 + 0xa) = *(undefined4 *)uStack_6;
  }
  return (void *)CONCAT22(param_2,(void *)((int)param_1 + 0xa));
}



// Inserts or updates a 6-byte descriptor in the collection. Automatically reallocates
// the buffer and re-sorts if a new entry is added.

u16 __stdcall16far
Simulator_Entity_Collection_Upsert_Item_Logic_8660
          (void *param_1,undefined4 *param_2,u16 param_3)
{
  undefined4 *reg_ax;
  uint reg_dx;
  undefined4 uStack_6;
  
  Simulator_Entity_Collection_Find_Item_Wrapper_8854(param_1,param_3);
  uStack_6 = (undefined4 *)CONCAT22(reg_dx,reg_ax);
  reg_dx |= (uint)reg_ax;
  if (reg_dx == 0x0)
  {
    Simulator_Entity_Collection_Find_Item_Wrapper_8854(param_1,0x0);
    uStack_6 = (undefined4 *)CONCAT22(reg_dx,reg_ax);
    reg_dx |= (uint)reg_ax;
    if (reg_dx == 0x0)
    {
      Simulator_Entity_Collection_Realloc_Buffer_Logic_878c(param_1);
      Simulator_Entity_Collection_Find_Item_Wrapper_8854(param_1,0x0);
      uStack_6 = (undefined4 *)CONCAT22(reg_dx,reg_ax);
      if (reg_dx == 0x0 && reg_ax == NULL)
      {
        return 0x0;
      }
    }
    *(u16 *)((undefined4 *)uStack_6 + 0x1) = param_3;
    *uStack_6 = *param_2;
    Simulator_Entity_Collection_Sort_Internal_8834(param_1);
  }
  else
  {
    *uStack_6 = *param_2;
  }
  return 0x1;
}



// Resets the entity collection by freeing the buffer and zeroing all tracking fields.

void __stdcall16far
Simulator_Entity_Collection_Reset_Logic_86ec(void *this_ptr,u16 new_increment)
{
  astruct_224 *uVar1;
  undefined2 uVar2;
  
  free_if_not_null((void *)*(void **)this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_224 *)this_ptr;
  *(undefined4 *)this_ptr = 0x0;
  uVar1->field4_0x4 = 0x0;
  uVar1->field5_0x6 = new_increment;
  uVar1->field12_0xe = 0x0;
  return;
}



// Appends a new 6-byte descriptor to the end of the collection's buffer and increments
// the count. Does not automatically trigger a sort.

void __stdcall16far
Simulator_Entity_Collection_Append_Item_Logic_871e(void *this_ptr,void *data,u16 key)
{
  astruct_223 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_223 *)this_ptr;
  if (*(long *)this_ptr == 0x0)
  {
    Simulator_Entity_Collection_Realloc_Buffer_Logic_878c(this_ptr);
  }
  uVar1->field14_0xe = uVar1->field14_0xe + 0x1;
  *(u16 *)((int)*(undefined4 *)this_ptr + uVar1->field14_0xe * 0x6 + 0x4) = key;
  *(undefined4 *)(uVar1->field14_0xe * 0x6 + (int)*(undefined4 *)this_ptr) =
       *(undefined4 *)data;
  return;
}



// Simple wrapper to trigger a quicksort on the entity collection.

void __stdcall16far Simulator_Entity_Collection_Sort_Wrapper_877c(void *this_ptr)
{
  Simulator_Entity_Collection_Sort_Internal_8834(this_ptr);
  return;
}



// Performs a quicksort on the collection buffer using the 16-bit word at offset 4 as
// the sort key.

void __stdcall16far Simulator_Entity_Collection_Sort_Internal_8834(void *this_ptr)
{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x2);
  qsort_far_array_with_callback_internal
            (*(void **)this_ptr,(int)uVar1,(int)((ulong)uVar1 >> 0x10),(void *)0x6);
  return;
}



// Performs a binary search on the entity collection using the comparison logic in
// 1030:888E.

void __stdcall16far
Simulator_Entity_Collection_Find_Item_Wrapper_8854(void *this_ptr,u16 key)
{
  undefined4 uVar1;
  void *unaff_SS;
  undefined4 local_c;
  u16 uStack_8;
  
  uStack_8 = key;
  local_c = 0x0;
  uVar1 = *(undefined4 *)((int)this_ptr + 0x2);
  bsearch_far_array_with_callback
            (&local_c,unaff_SS,*(int *)this_ptr,(int)uVar1,
             (void *)((ulong)uVar1 >> 0x10),0x6,0x888e);
  return;
}



// Comparison callback for entity sorting/searching. Compares the 16-bit word at offset
// 4.

u16 __cdecl16far Simulator_Entity_Compare_by_ID_Offset4_888e(u32 item1,u32 item2)
{
  undefined2 uVar1;
  undefined2 uVar2;
  u32 local_a;
  u32 local_6;
  
  uVar1 = (undefined2)(item1 >> 0x10);
  uVar2 = (undefined2)(item2 >> 0x10);
  if (*(int *)((int)item1 + 0x4) < *(int *)((int)item2 + 0x4))
  {
    return 0xffff;
  }
  if (*(int *)((int)item2 + 0x4) < *(int *)((int)item1 + 0x4))
  {
    return 0x1;
  }
  return 0x0;
}



// Constructor for a map sub-list. Initializes bounding coordinates, calculates world
// area, and instantiates 5 dynamic entity collections. Sets vtable to 0x8E38.

void * __stdcall16far
Simulator_Map_SubList_ctor_init_88ce(void *this_ptr,void *arg2,void *coords)
{
  undefined1 *ptr;
  void *pvVar1;
  astruct_220 *uVar5;
  undefined2 unaff_SI;
  void *src1;
  int *unaff_SS;
  void *pvVar2;
  void *uVar7;
  void *puVar5;
  int iStack_22;
  int local_20;
  int local_1e;
  int local_1c;
  undefined1 local_1a [0x6];
  undefined1 local_14 [0x6];
  undefined4 uStack_e;
  undefined4 uStack_a;
  astruct_221 *uStack_6;
  undefined2 uStack_4;
  void *uVar2;
  
  src1 = (void *)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_220 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar5->field2_0x2 = 0x1008;
  pvVar2 = Simulator_Entity_Init_State_84ae
                     ((undefined1 *)CONCAT22(src1,&uVar5->field_0x4));
  uVar7._2_2_ = (undefined2)((ulong)pvVar2 >> 0x10);
  uVar5->field32_0x24 = coords;
  ptr = &uVar5->field_0x28;
  zero_init_12bytes_struct(ptr);
  (&uVar5->field45_0x34)[0x0] = 0x0;
  (&uVar5->field45_0x34)[0x1] = 0x0;
  *(undefined2 *)this_ptr = 0x8e38;
  uVar5->field2_0x2 = 0x1030;
  Simulator_Entity_Data_Copy_Logic_8544
            ((undefined1 *)CONCAT22(src1,&uVar5->field_0x4),arg2);
  uVar7._0_2_ = get_with_lazy_init((void *)(void *)uVar5->field17_0x12);
  uStack_a = *(undefined4 *)((int)(void *)uVar7 + 0x4);
  uStack_e = *(undefined4 *)((int)(void *)uVar7 + 0x8);
  uStack_6 = (void *)uVar7;
  uStack_4 = uVar7._2_2_;
  pack_3words_alt(local_14,(int)unaff_SS,0x0,(int)uStack_e + -0x1);
  pack_3words_alt(local_1a,(int)unaff_SS,0x0,0x0);
  copy_two_6byte_structs_to_12byte_v2(ptr,src1,local_14);
  calc_abs_diff_between_halves_of_12byte_struct(ptr,src1,(u16)local_1a,(u16)unaff_SS);
  unpack_3word_struct(local_1a,unaff_SS,&local_20,unaff_SS);
  puVar5._2_2_ = (u16)((ulong)((long)local_1e * (long)local_1c) >> 0x10);
  uVar5->field45_0x34 = (int)((long)local_1e * (long)local_1c);
  uVar5->field46_0x36 = puVar5._2_2_;
  for (iStack_22 = 0x0; iStack_22 < 0x5; iStack_22 += 0x1)
  {
    pvVar1 = allocate_memory(CONCAT22(unaff_SI,0x10));
    if (puVar5._2_2_ == 0x0 && pvVar1 == NULL)
    {
      *(undefined4 *)(&uVar5[0x1].field_0x0 + iStack_22 * 0x4) = 0x0;
      puVar5._2_2_ = 0x0;
    }
    else
    {
      puVar5 = Simulator_Entity_Collection_ctor_init_85be
                         ((void *)CONCAT22(puVar5._2_2_,pvVar1),0x19,0x64);
      puVar5._2_2_ = (u16)((ulong)puVar5 >> 0x10);
      *(void **)(&uVar5[0x1].field_0x0 + iStack_22 * 0x4) = (void *)puVar5;
      (&uVar5[0x1].field2_0x2)[iStack_22 * 0x2] = puVar5._2_2_;
    }
  }
  return this_ptr;
}



// Internal destructor for map sub-lists. Cleans up its 5 entity collections and reverts
// vtables.

void __stdcall16far Simulator_Map_SubList_dtor_Internal_8a2c(void *this_ptr)
{
  int iVar1;
  void *ptr;
  int iVar2;
  undefined2 uVar3;
  int iStack_4;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  *(undefined2 *)this_ptr = 0x8e38;
  *(undefined2 *)(iVar2 + 0x2) = 0x1030;
  iStack_4 = 0x0;
  do
  {
    iVar1 = *(int *)(iVar2 + 0x38 + iStack_4 * 0x4 + 0x2);
    ptr = (void *)(void *)*(undefined4 *)(iVar2 + 0x38 + iStack_4 * 0x4);
    if (iVar1 != 0x0 || ptr != NULL)
    {
      Simulator_Entity_Collection_Free_Buffer_8604((void *)CONCAT22(iVar1,ptr));
      free_if_not_null(ptr);
    }
    iStack_4 += 0x1;
  } while (iStack_4 < 0x5);
  Simulator_Entity_Cleanup_Internal_84d0((void *)CONCAT22(uVar3,(void *)(iVar2 + 0x4)));
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)(iVar2 + 0x2) = 0x1008;
  return;
}



// Upserts an entity into one of the sub-list's collections based on coordinate hashing
// (using 8CD2).

void __stdcall16far
Simulator_Map_SubList_Upsert_Entity_8aa0(void *this_ptr,void *data,void *coords)
{
  int *unaff_SS;
  void *pvVar1;
  void *local_12;
  void *pvStack_e;
  void *pvStack_c;
  undefined2 uStack_a;
  int local_8 [0x3];
  
  unpack_3word_struct((void *)coords,(int *)((ulong)coords >> 0x10),local_8,unaff_SS);
  pvVar1 = Simulator_Map_SubList_Get_Entity_at_Index_Logic_8cd2(this_ptr,local_8[0x0]);
  uStack_a = (undefined2)((ulong)pvVar1 >> 0x10);
  pvStack_e = (void *)pvVar1;
  if (pvVar1 != NULL)
  {
    pvStack_c = pvStack_e;
    Simulator_Map_SubList_Calc_Coordinate_Diff_8d9e(this_ptr);
    local_12 = data;
    Simulator_Entity_Collection_Upsert_Item_Logic_8660
              (pvStack_c,uStack_a,&local_12,unaff_SS,pvStack_e);
  }
  return;
}



// Retrieves or lazy-initializes entity data for a specific coordinate within the
// sub-list. Involves coordinate mapping and bitmap-based metadata lookup (8C66).

u16 * __stdcall16far
Simulator_Map_SubList_Get_Entity_at_Coords_Logic_8b00
          (void *this_ptr,void *coords,void *out_data)
{
  undefined2 uVar1;
  u16 uVar2;
  int *unaff_SS;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 local_2a [0x4];
  undefined4 uStack_26;
  undefined4 uStack_1c;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c [0x3];
  undefined4 uStack_6;
  
  uStack_6 = 0x0;
  unpack_3word_struct((void *)coords,(int *)((ulong)coords >> 0x10),local_c,unaff_SS);
  pvVar3 = Simulator_Map_SubList_Get_Entity_at_Index_Logic_8cd2(this_ptr,local_c[0x0]);
  uStack_e = (undefined2)((ulong)pvVar3 >> 0x10);
  uVar1 = SUB42(pvVar3,0x0);
  uStack_10 = uVar1;
  Simulator_Map_SubList_Calc_Coordinate_Diff_8d9e(this_ptr);
  uStack_12 = uVar1;
  puVar4 = Simulator_Entity_Collection_Find_and_Set_Item_Logic_861a
                     (uStack_10,uStack_e,uVar1);
  uStack_1c = *puVar4;
  uVar2 = *(u16 *)((int)(undefined4 *)puVar4 + 0x2);
  uStack_26._3_1_ = (char)((ulong)uStack_1c >> 0x18);
  uStack_6 = uStack_1c;
  if (uStack_26._3_1_ == '\0')
  {
    uStack_26 = uStack_1c;
    puVar4 = Simulator_Map_Get_Metadata_from_Bitmap_8c66
                       (this_ptr,local_c[0x0],(int)local_c._2_4_,
                        SUB42(local_c._2_4_,0x2),local_2a,unaff_SS);
    uStack_6 = *puVar4;
    uVar2 = *(u16 *)((int)(undefined4 *)puVar4 + 0x2);
  }
  *(undefined2 *)out_data = (undefined2)uStack_6;
  ((u16 *)out_data)[0x1] = uVar2;
  return (u16 *)out_data;
}



// Resets all 5 entity collections managed by the map sub-list.

void __stdcall16far
Simulator_Map_SubList_Reset_All_Collections_8bac(void *this_ptr,u16 arg2)
{
  int iStack_4;
  
  iStack_4 = 0x0;
  do
  {
    Simulator_Entity_Collection_Reset_Logic_86ec
              ((void *)*(undefined4 *)((int)(void *)this_ptr + iStack_4 * 0x4 + 0x38),
               arg2);
    iStack_4 += 0x1;
  } while (iStack_4 < 0x5);
  return;
}



// Directly appends an entity to one of the sub-list's collections.

void __stdcall16far
Simulator_Map_SubList_Append_Entity_8bdc(void *this_ptr,void *data,void *coords)
{
  void *key;
  int *unaff_SS;
  void *pvVar1;
  void *local_12;
  void *pvStack_e;
  void *pvStack_c;
  undefined2 uStack_a;
  int local_8 [0x3];
  
  unpack_3word_struct((void *)coords,(int *)((ulong)coords >> 0x10),local_8,unaff_SS);
  pvVar1 = Simulator_Map_SubList_Get_Entity_at_Index_Logic_8cd2(this_ptr,local_8[0x0]);
  uStack_a = (undefined2)((ulong)pvVar1 >> 0x10);
  key = (void *)pvVar1;
  pvStack_c = key;
  Simulator_Map_SubList_Calc_Coordinate_Diff_8d9e(this_ptr);
  local_12 = data;
  pvStack_e = key;
  Simulator_Entity_Collection_Append_Item_Logic_871e
            ((void *)CONCAT22(uStack_a,pvStack_c),(void **)CONCAT22(unaff_SS,&local_12),
             (u16)key);
  return;
}



// Triggers sorting for all 5 entity collections in the map sub-list.

void __stdcall16far Simulator_Map_SubList_Sort_All_Collections_8c38(void *this_ptr)
{
  int iStack_4;
  
  iStack_4 = 0x0;
  do
  {
    Simulator_Entity_Collection_Sort_Wrapper_877c
              ((void *)*(undefined4 *)((int)(void *)this_ptr + iStack_4 * 0x4 + 0x38));
    iStack_4 += 0x1;
  } while (iStack_4 < 0x5);
  return;
}



// Retrieves terrain or entity metadata from a bitmap object based on world coordinates.
// Returns specific numeric tags (7, 8, 9) representing surface or underground states.

void * __stdcall16far
Simulator_Map_Get_Metadata_from_Bitmap_8c66
          (undefined4 param_1,int param_2,int param_3,undefined2 param_4,ulong *param_5)
{
  void *pvVar1;
  byte *pbVar2;
  uint uVar3;
  undefined2 reg_dx;
  ulong uStack_6;
  
  pvVar1 = (void *)*(undefined4 *)((int)param_1 + 0x12);
  pbVar2 = Bitmap_Object_Get_Pixel_Address
                     ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10),param_3);
  uVar3 = (uint)*pbVar2;
  uStack_6 = (ulong)(uVar3 + 0x1);
  if (0x0 < param_2)
  {
    if (uVar3 == 0x0)
    {
      uStack_6 = 0x7;
    }
    else if (((*pbVar2 == 0x0) || (SBORROW2(uVar3,0x1))) || (0x1 < (int)(uVar3 - 0x1)))
    {
      uStack_6 = 0x9;
    }
    else
    {
      uStack_6 = 0x8;
    }
  }
  *param_5 = uStack_6;
  return param_5;
}



// Retrieves the 4-byte pointer to an entity collection from the map sub-list based on
// an index (0-5).

void * __stdcall16far
Simulator_Map_SubList_Get_Entity_at_Index_Logic_8cd2(void *this_ptr,int index)
{
  undefined4 uStack_6;
  
  uStack_6 = NULL;
  if ((-0x1 < index) && (index < 0x6))
  {
    uStack_6 = (void *)*(undefined4 *)((int)this_ptr + 0x38 + index * 0x4);
  }
  return uStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through a collection of entities and triggers their virtual update callback
// at offset 0x14. Used for state synchronization between components and simulator.

void __stdcall16far Simulator_Batch_Process_Entities_vcall_14_8d08(undefined4 param_1)
{
  undefined4 uVar1;
  u8 *packed_id;
  undefined2 reg_dx;
  undefined2 uVar2;
  void *this_ptr;
  void *entity_id;
  undefined4 uStack_c;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    if (*(int *)((int)param_1 + 0x1e) <= iStack_4) break;
    packed_id = (u8 *)(iStack_4 * 0x6);
    uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
    (packed_id + (int)uVar1 + 0x4)[0x0] = '\0';
    (packed_id + (int)uVar1 + 0x4)[0x1] = '\0';
    Simulator_Call_Virtual_Initializer_e2ac((u32)_p_SimulatorWorldContext);
    uStack_c = (u8 *)CONCAT22(reg_dx,packed_id);
    this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,packed_id);
    entity_id = Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
                          (_p_SimulatorWorldContext,0x0,0x10,0x7000000,uStack_c);
    reg_dx = (undefined2)((ulong)entity_id >> 0x10);
    UI_Component_Set_Active_Entity_and_Sync_Logic_7e5a(this_ptr,entity_id);
    iStack_4 += 0x1;
  }
  return;
}



// Calculates the absolute coordinate differences between the sub-list's internal region
// boundaries.

void __stdcall16far Simulator_Map_SubList_Calc_Coordinate_Diff_8d9e(void *this_ptr)
{
  int *unaff_SS;
  int local_c [0x2];
  undefined1 local_8 [0x6];
  
  zero_init_struct_6bytes(local_8);
  calc_abs_diff_between_halves_of_12byte_struct
            ((void *)((int)this_ptr + 0x28),(void *)((ulong)this_ptr >> 0x10),
             (u16)local_8,(u16)unaff_SS);
  unpack_word_pair(local_8,unaff_SS,local_c);
  return;
}



void * __stdcall16far
Simulator_Map_SubList_dtor_Scalar_Deleting_8e12(void *this_ptr,byte flags)
{
  Simulator_Map_SubList_dtor_Internal_8a2c(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Factory routine that instantiates a simulator entity and immediately triggers its
// placement and resource validation logic. Dispatches to specialized spawn routines
// (9296, 9ADC).

void * __stdcall16far
Simulator_Factory_Spawn_Entity_and_Process_Logic_8e3c(void *param_1,u8 *param_2)
{
  int iVar1;
  astruct_491 *this;
  void *pvVar2;
  uint reg_dx;
  uint uVar3;
  long lVar4;
  void *arg3;
  u16 segment;
  undefined2 in_stack_0000ffe2;
  
  this = allocate_memory(CONCAT22(in_stack_0000ffe2,0xc));
  uVar3 = reg_dx | (uint)this;
  if (uVar3 == 0x0)
  {
    pvVar2 = NULL;
    uVar3 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(this,reg_dx);
  }
  if (param_2._3_1_ == '\x04')
  {
    lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    iVar1 = *(int *)((int)lVar4 + 0x1e);
    arg3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)param_2);
    segment = (u16)((ulong)param_1 >> 0x10);
    if (iVar1 < 0x1)
    {
      Simulator_Process_Specialized_Spawn_Routine_9296
                (param_1,(void *)CONCAT22(uVar3,pvVar2),arg3);
      Simulator_Process_Site_Adjacency_Spawning_951a
                (param_1,(void *)CONCAT22(uVar3,pvVar2),arg3);
    }
    else
    {
      Simulator_Process_Building_Placement_Action_9adc
                ((u16)(void *)param_1,segment,(void *)CONCAT22(uVar3,pvVar2),arg3);
      Simulator_Process_Resource_Site_Spawning_9c1c
                (param_1,(void *)CONCAT22(uVar3,pvVar2),arg3);
    }
    Simulator_Validate_Building_Resource_Requirements_9d42
              ((u16)(void *)param_1,segment,(void *)CONCAT22(uVar3,pvVar2),arg3);
  }
  return (void *)CONCAT22(uVar3,pvVar2);
}
