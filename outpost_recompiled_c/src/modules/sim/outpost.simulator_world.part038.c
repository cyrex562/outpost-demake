/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 38/56
 * Original lines (combined): 93576-94850
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the simulator's global object library. Initializes its vtable and
// zero-fills its 36-byte state structure. Sets global 1050:5736 pointer.

u16 * __stdcall16far Simulator_Object_Library_ctor_init_5bec(u16 *this_ptr)
{
  int in_stack_00000006;
  
  _p_SimulatorObjectLibrary = _this_ptr;
  memset_far_optimized_aligned(this_ptr,in_stack_00000006,0x0);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for the simulator's object library. Clears the global 1050:5736
// pointer.

void __stdcall16far Simulator_Object_Library_dtor_Internal_5c0e(void)
{
  _p_SimulatorObjectLibrary = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Resolves a unique 32-bit entity ID. If the entity type supports list-based tracking
// (managed lists in global context), it finds the first free slot. Otherwise, it
// increments a global counter for that type category.

long __stdcall16far
Simulator_Resolve_Unique_Entity_ID_Logic_5c8a(void *this_ptr,void *arg2)
{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uStack_6;
  
  uStack_6 = NULL;
  uVar2 = (uint)arg2._3_1_;
  if (uVar2 == 0xff)
  {
    return -0xffffff;
  }
  uVar5 = (undefined2)((ulong)_p_SimulatorWorldContext >> 0x10);
  iVar4 = (int)_p_SimulatorWorldContext + 0xa;
  pvVar3 = (void *)*(undefined4 *)(iVar4 + uVar2 * 0x4);
  uVar5 = *(undefined2 *)(iVar4 + uVar2 * 0x4 + 0x2);
  if (*(int *)((int)(void *)pvVar3 + 0x4) != 0x0)
  {
    UI_Managed_List_Find_First_Null_Index_12ca((void *)CONCAT22(uVar5,(void *)pvVar3));
    uStack_6 = (void *)CONCAT22(uVar5,(void *)pvVar3);
  }
  if (uStack_6 == NULL)
  {
    uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
    plVar1 = (long *)(uVar2 * 0x4 + (int)(void *)this_ptr);
    *plVar1 = *plVar1 + 0x1;
    uStack_6 = (void *)*(undefined4 *)(uVar2 * 0x4 + (int)(void *)this_ptr);
  }
  return (long)uStack_6 + (long)arg2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_World_Populate_Entity_Metadata_and_Polygons(undefined4 param_1)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  int reg_dx;
  undefined2 uVar4;
  int iVar5;
  undefined2 unaff_SI;
  undefined2 uVar6;
  undefined2 uVar7;
  void *pvVar8;
  char local_6c [0x58];
  undefined4 local_14;
  void *local_10;
  void *local_c;
  void *local_8;
  uint local_4;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if (*(long *)(iVar5 + 0xc) == 0x0)
  {
    local_8 = allocate_memory(CONCAT22(unaff_SI,0x18));
    if (reg_dx == 0x0 && local_8 == NULL)
    {
      *(undefined4 *)(iVar5 + 0xc) = 0x0;
    }
    else
    {
      pvVar8 = UI_Production_Item_Base_ctor_init_1cd8
                         ((void *)CONCAT22(reg_dx,local_8),(void *)0x5,(void *)0x5);
      *(undefined2 *)(iVar5 + 0xc) = (void *)pvVar8;
      *(undefined2 *)(iVar5 + 0xe) = (int)((ulong)pvVar8 >> 0x10);
    }
  }
  for (local_4 = 0x0; local_4 < *(uint *)((int)*(undefined4 *)(iVar5 + 0x10) + 0xa);
      local_4 += 0x1)
  {
    uVar2 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x10) + 0xc);
    local_c = Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
                        (_p_SimulatorWorldContext,0x0,
                         (long)*(int *)((int)uVar2 + local_4 * 0x2),0x0,0x200,
                         (int)*(undefined4 *)(iVar5 + 0x4),
                         (int)((ulong)*(undefined4 *)(iVar5 + 0x4) >> 0x10));
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar5 + 0xc) + 0x8);
    (*(code *)*puVar1)(0x1028,*(undefined4 *)(iVar5 + 0xc),(void *)local_c,
                       (int)((ulong)local_c >> 0x10),local_4,0x0);
    local_10 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                         ((u16)_p_SimulatorGlobalState,
                          (u16)((ulong)_p_SimulatorGlobalState >> 0x10),local_c);
    uVar4 = (undefined2)((ulong)local_10 >> 0x10);
    local_14 = *(undefined4 *)((int)(void *)local_10 + 0x10);
    if (*(long *)((int)local_14 + 0x2) == 0x0)
    {
      sprintf_wrapper(local_6c);
      pcVar3 = strdup_allocate(local_6c);
      uVar7 = (undefined2)((ulong)local_14 >> 0x10);
      *(undefined2 *)((int)local_14 + 0x2) = pcVar3;
      *(undefined2 *)((int)local_14 + 0x4) = uVar4;
    }
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the global Simulator Map Context. Initializes its vtable and sets the
// global 1050:5740 pointer.

void __stdcall16far Simulator_Map_Context_ctor_init_615a(u32 *this_ptr)
{
  astruct_491 *this;
  void *pvVar1;
  uint reg_dx;
  uint uVar2;
  undefined2 in_stack_00000006;
  undefined4 in_stack_0000fff8;
  
  *_this_ptr = 0x0;
  this_ptr[0x1] = 0x0;
  this = allocate_memory(CONCAT22((int)((ulong)in_stack_0000fff8 >> 0x10),0xc));
  uVar2 = reg_dx | (uint)this;
  if (uVar2 == 0x0)
  {
    this_ptr[0x1] = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this,reg_dx);
    *(void **)(this_ptr + 0x1) = pvVar1;
    *(uint *)((int)this_ptr + 0x6) = uVar2;
  }
  _p_MapContext_5740 = _this_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for the Simulator Map Context. Cleans up its internal map objects
// and clears the global 1050:5740 pointer.

void __stdcall16far Simulator_Map_Context_dtor_Internal_61b0(void *this_ptr)
{
  undefined2 *puVar1;
  astruct_266 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_266 *)this_ptr;
  if (uVar2->field2_0x2 != 0x0 || *(undefined4 **)this_ptr != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)**(undefined4 **)this_ptr;
    (*(code *)*puVar1)();
  }
  if (uVar2->field4_0x6 != 0x0 || uVar2->field3_0x4 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field3_0x4;
    (*(code *)*puVar1)();
  }
  _p_MapContext_5740 = 0x0;
  return;
}



// Updates the entity data stored at a specific world coordinate within the simulator
// map.

void __stdcall16far
Simulator_Map_Update_Entity_at_Coords_61fe
          (void *this_ptr,void *arg2,void *arg3,long coords)
{
  void *this_ptr_00;
  
  this_ptr_00 = Simulator_Map_Find_SubList_by_Coords_677a(this_ptr,coords);
  Simulator_Map_SubList_Upsert_Entity_8aa0(this_ptr_00,arg2,arg3);
  return;
}



// Executes a map-based action at the specified coordinates. Involves virtual callbacks
// and potential state synchronization.

u16 __stdcall16far
Simulator_Map_Execute_Action_at_Coords_6222
          (undefined4 param_1,int param_2,void *param_3,void *param_4)
{
  undefined2 *puVar1;
  void *pvVar2;
  int reg_dx;
  void *pvVar3;
  undefined2 in_stack_0000fff6;
  
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x4c));
  if (reg_dx == 0x0 && pvVar2 == NULL)
  {
    pvVar3 = NULL;
  }
  else
  {
    pvVar3 = Simulator_Map_SubList_ctor_init_88ce
                       ((void *)CONCAT22(reg_dx,pvVar2),param_3,param_4);
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x4) + 0x4)
  ;
  (*(code *)*puVar1)();
  if (param_2 != 0x0)
  {
    Simulator_Batch_Process_Entities_vcall_14_8d08(pvVar3);
  }
  return 0x0;
}



// Retrieves the 4-byte entity data (type and ID) for a specific world coordinate from
// the simulator map.

void * __stdcall16far
Simulator_Map_Get_Entity_at_Coords_627e(void *this_ptr,void *coords,void *arg3)
{
  u16 *puVar1;
  uint uVar2;
  undefined2 unaff_SS;
  char cStack_19;
  undefined1 local_12 [0x8];
  void *pvStack_a;
  void *pvStack_6;
  u16 uStack_4;
  
  pvStack_6 = NULL;
  uStack_4 = 0x0;
  pvStack_a = Simulator_Map_Find_SubList_by_Coords_677a(this_ptr,(long)arg3);
  uVar2 = (uint)((ulong)pvStack_a >> 0x10) | (uint)(void *)pvStack_a;
  if (uVar2 != 0x0)
  {
    puVar1 = Simulator_Map_SubList_Get_Entity_at_Coords_Logic_8b00
                       (pvStack_a,coords,(undefined1 *)CONCAT22(unaff_SS,local_12));
    cStack_19 = (char)((ulong)*(void **)puVar1 >> 0x18);
    if (cStack_19 != '\0')
    {
      pvStack_6 = (void *)*(void **)puVar1;
      uStack_4 = puVar1[0x1];
    }
  }
  return (void *)CONCAT22(uStack_4,pvStack_6);
}



// Complex routine that iterates through a rectangular region of the simulator map and
// performs batch processing on each cell. Involves coordinate splitting, diff
// calculation, and virtual callback loops.

u32 __stdcall16far
Simulator_Map_Batch_Process_Cells_in_Rect_62e4(void *this_ptr,void *rect,long arg3)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  int extraout_DX;
  int iVar3;
  undefined2 uVar4;
  astruct_265 *uVar6;
  undefined2 uVar5;
  int *unaff_SS;
  void *puVar10;
  long lVar6;
  void *dest1;
  int iVar7;
  undefined2 in_stack_0000ff9c;
  undefined4 uStack_5e;
  char cStack_4b;
  undefined4 local_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *puStack_36;
  int iStack_34;
  undefined4 *puStack_32;
  int iStack_30;
  int iStack_2e;
  int iStack_2c;
  int local_2a;
  int local_28;
  int local_26;
  int local_24 [0x3];
  int local_1e;
  int local_1c;
  int local_1a;
  undefined1 local_18 [0x6];
  undefined1 local_12 [0x6];
  undefined1 local_c [0x6];
  void *pvStack_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar6 = (astruct_265 *)this_ptr;
  puStack_36 = *(undefined4 **)this_ptr;
  iVar3 = uVar6->field2_0x2;
  iStack_34 = iVar3;
  puStack_32 = puStack_36;
  iStack_30 = iVar3;
  if (iVar3 != 0x0 || puStack_36 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puStack_36)();
    iVar3 = extraout_DX;
  }
  puStack_36 = allocate_memory(CONCAT22(in_stack_0000ff9c,0x18));
  iStack_34 = iVar3;
  if (iVar3 == 0x0 && puStack_36 == NULL)
  {
    puVar10 = NULL;
  }
  else
  {
    puVar10 = UI_Production_Item_Base_ctor_init_1cd8
                        ((void *)CONCAT22(iVar3,puStack_36),(void *)0x5,(void *)0x5);
  }
  *(void **)this_ptr = (void *)puVar10;
  uVar6->field2_0x2 = (int)((ulong)puVar10 >> 0x10);
  pvStack_6 = Simulator_Map_Find_SubList_by_Coords_677a(this_ptr,arg3);
  if (pvStack_6 != NULL)
  {
    zero_init_struct_6bytes(local_c);
    zero_init_struct_6bytes(local_12);
    zero_init_struct_6bytes(local_18);
    dest1 = (void *)((ulong)rect >> 0x10);
    split_12byte_struct_to_two_6byte((void *)rect,dest1,local_12);
    unpack_3word_struct(local_c,unaff_SS,&local_1e,unaff_SS);
    unpack_3word_struct(local_12,unaff_SS,local_24,unaff_SS);
    calc_abs_diff_between_halves_of_12byte_struct
              ((void *)rect,dest1,(u16)local_18,(u16)unaff_SS);
    unpack_3word_struct(local_18,unaff_SS,&local_2a,unaff_SS);
    if (local_24[0x0] == local_1e)
    {
      iStack_2c = 0x0;
      for (iStack_2e = local_1c; iStack_2e < local_28 + local_1c; iStack_2e += 0x1)
      {
        for (iStack_38 = local_1a; iStack_38 < local_26 + local_1a; iStack_38 += 0x1)
        {
          pack_3words_alt(&stack0xff9c,(int)unaff_SS,local_1e,iStack_2e);
          Simulator_Map_SubList_Get_Entity_at_Coords_Logic_8b00
                    (pvStack_6,(undefined1 *)CONCAT22(unaff_SS,&stack0xff9c),
                     (undefined4 *)CONCAT22(unaff_SS,&local_40));
          iVar3 = iStack_2c;
          uStack_3c = local_40;
          uVar2 = uStack_3c;
          uStack_3c._0_2_ = (undefined2)local_40;
          cStack_4b = (char)((ulong)local_40 >> 0x18);
          uVar4 = local_40._2_2_;
          if (cStack_4b == '\0')
          {
            uStack_3c._0_2_ = 0x0;
            uVar4 = 0x0;
          }
          uStack_5e = CONCAT22(uVar4,(undefined2)uStack_3c);
          iVar7 = iStack_2c >> 0xf;
          puVar1 = (undefined2 *)((int)**(undefined4 **)this_ptr + 0x8);
          uStack_3c = uVar2;
          iStack_2c = iStack_2c + 0x1;
          (*(code *)*puVar1)(0x1008,*(undefined4 *)this_ptr,uStack_5e,iVar3,iVar7);
        }
      }
      puVar1 = (undefined2 *)((int)**(undefined4 **)this_ptr + 0x10);
      lVar6 = (*(code *)*puVar1)();
      if (lVar6 != 0x0)
      {
        return CONCAT22(uVar6->field2_0x2,*(undefined2 *)this_ptr);
      }
    }
  }
  return 0x0;
}



// Retrieves the 4-byte entity data for a specific coordinate by first finding the
// relevant world sub-list (using 677A) and then performing a coordinate-based search.

void * __stdcall16far
Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
          (void *this_ptr,void *coords,long arg3,void *out_entity)
{
  u16 *puVar1;
  uint uVar2;
  undefined2 unaff_SS;
  undefined1 local_e [0x4];
  void *pvStack_a;
  undefined4 uStack_6;
  
  uStack_6 = 0x0;
  pvStack_a = Simulator_Map_Find_SubList_by_Coords_677a(this_ptr,arg3);
  uVar2 = (uint)((ulong)pvStack_a >> 0x10) | (uint)pvStack_a;
  if (uVar2 != 0x0)
  {
    puVar1 = Simulator_Map_SubList_Get_Entity_at_Coords_Logic_8b00
                       (pvStack_a,coords,(undefined1 *)CONCAT22(unaff_SS,local_e));
    uStack_6 = *(undefined4 *)puVar1;
  }
  *(undefined4 *)out_entity = uStack_6;
  return out_entity;
}



// Complex routine that iterates through a rectangular map region, identifies entities,
// and creates corresponding UI production items. Calculates relative UI offsets and
// triggers virtual callbacks for each item.

void * __stdcall16far
Simulator_Map_Batch_Create_Production_Items_in_Rect_6522
          (void *this_ptr,void *rect,long arg3)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint16_t extraout_DX;
  uint16_t uVar5;
  int iVar6;
  astruct_264 *uVar4;
  undefined2 uVar7;
  int *unaff_SS;
  void *pvVar8;
  long lVar9;
  void *dest1;
  undefined2 in_stack_0000ff9c;
  undefined4 local_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *puStack_36;
  uint16_t uStack_34;
  undefined4 *puStack_32;
  uint16_t uStack_30;
  int iStack_2e;
  int iStack_2c;
  int local_2a;
  int local_28;
  int local_26;
  int local_24 [0x3];
  int local_1e;
  int local_1c;
  int local_1a;
  undefined1 local_18 [0x6];
  undefined1 local_12 [0x6];
  undefined1 local_c [0x6];
  void *pvStack_6;
  
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_264 *)this_ptr;
  puStack_36 = *(undefined4 **)this_ptr;
  uVar5 = uVar4->field2_0x2;
  uStack_34 = uVar5;
  puStack_32 = puStack_36;
  uStack_30 = uVar5;
  if (uVar5 != 0x0 || puStack_36 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puStack_36)();
    uVar5 = extraout_DX;
  }
  puStack_36 = allocate_memory(CONCAT22(in_stack_0000ff9c,0x18));
  uStack_34 = uVar5;
  if (uVar5 == 0x0 && puStack_36 == NULL)
  {
    uVar3 = 0x0;
    uVar5 = 0x0;
  }
  else
  {
    pvVar8 = UI_Production_Item_Base_ctor_init_1cd8
                       ((void *)CONCAT22(uVar5,puStack_36),(void *)0x5,(void *)0x5);
    uVar5 = (uint16_t)((ulong)pvVar8 >> 0x10);
    uVar3 = SUB42(pvVar8,0x0);
  }
  *(undefined2 *)this_ptr = uVar3;
  uVar4->field2_0x2 = uVar5;
  pvStack_6 = Simulator_Map_Find_SubList_by_Coords_677a(this_ptr,arg3);
  if (pvStack_6 != NULL)
  {
    zero_init_struct_6bytes(local_c);
    zero_init_struct_6bytes(local_12);
    zero_init_struct_6bytes(local_18);
    dest1 = (void *)((ulong)rect >> 0x10);
    split_12byte_struct_to_two_6byte((void *)rect,dest1,local_12);
    unpack_3word_struct(local_c,unaff_SS,&local_1e,unaff_SS);
    unpack_3word_struct(local_12,unaff_SS,local_24,unaff_SS);
    calc_abs_diff_between_halves_of_12byte_struct
              ((void *)rect,dest1,(u16)local_18,(u16)unaff_SS);
    unpack_3word_struct(local_18,unaff_SS,&local_2a,unaff_SS);
    if (local_24[0x0] == local_1e)
    {
      iStack_2c = 0x0;
      for (iStack_2e = local_1c; iStack_2e < local_28 + local_1c; iStack_2e += 0x1)
      {
        for (iStack_38 = local_1a; iStack_38 < local_26 + local_1a; iStack_38 += 0x1)
        {
          pack_3words_alt(&stack0xff9c,(int)unaff_SS,local_1e,iStack_2e);
          Simulator_Map_SubList_Get_Entity_at_Coords_Logic_8b00
                    (pvStack_6,(undefined1 *)CONCAT22(unaff_SS,&stack0xff9c),
                     (undefined4 *)CONCAT22(unaff_SS,&local_40));
          iVar2 = iStack_2c;
          uStack_3c = local_40;
          iVar6 = iStack_2c >> 0xf;
          puVar1 = (undefined2 *)((int)**(undefined4 **)this_ptr + 0x8);
          iStack_2c = iStack_2c + 0x1;
          (*(code *)*puVar1)(0x1008,*(undefined4 *)this_ptr,local_40,iVar2,iVar6);
        }
      }
      puVar1 = (undefined2 *)((int)**(undefined4 **)this_ptr + 0x10);
      lVar9 = (*(code *)*puVar1)();
      if (lVar9 != 0x0)
      {
        return (void *)CONCAT22(uVar4->field2_0x2,*(void **)this_ptr);
      }
    }
  }
  return NULL;
}



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
  uint reg_dx;
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
    uVar3 = reg_dx | (uint)this;
    if (uVar3 == 0x0)
    {
      uVar5->field62_0x3e = NULL;
    }
    else
    {
      pvVar2 = construct_object_with_vtable(this,reg_dx);
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
