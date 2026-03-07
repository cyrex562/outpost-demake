/*
 * Source: outpost.c
 * Chunk: 82/117
 * Original lines: 93234-94414
 * Boundaries: top-level declarations/definitions only
 */




undefined2 __stdcall16far
UI_Window_with_List_Serialize_to_File_56f6(void *param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  void *this;
  char *str;
  undefined2 local_e [0x3];
  undefined2 local_8 [0x2];
  int local_4;
  
  iVar1 = UI_Window_with_List_Save_to_File_Logic_1978(param_1,param_2);
  if (iVar1 != 0x0)
  {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    local_e[0x0] = *(undefined2 *)*(undefined4 *)(iVar2 + 0x10);
    iVar1 = file_write_check((long)param_2,local_e,unaff_SS);
    if (iVar1 != 0x0)
    {
      local_8[0x0] = *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x10) + 0x2);
      iVar1 = file_write_check((long)param_2,local_8,unaff_SS);
      if (iVar1 != 0x0)
      {
        this = (void *)param_2;
        str = (char *)((ulong)param_2 >> 0x10);
        iVar1 = file_context_write_string_with_terminator_logic(this,str);
        if (iVar1 != 0x0)
        {
          local_8[0x0] = *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x10) + 0x1a);
          iVar1 = file_write_check((long)param_2,local_8,unaff_SS);
          if (iVar1 != 0x0)
          {
            for (local_4 = 0x0;
                local_4 < *(int *)((int)*(undefined4 *)(iVar2 + 0x10) + 0x1a);
                local_4 += 0x1)
            {
              iVar1 = file_context_serialize_3word_struct_logic(this,str);
              if (iVar1 == 0x0) goto LAB_1030_5734;
            }
            iVar1 = file_context_serialize_3word_struct_logic(this,str);
            if (iVar1 != 0x0)
            {
              local_8[0x0] = *(undefined2 *)(iVar2 + 0x1c);
              iVar1 = file_write_check((long)param_2,local_8,unaff_SS);
              if (iVar1 != 0x0)
              {
                return 0x1;
              }
            }
          }
        }
      }
    }
LAB_1030_5734:
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
UI_Window_Complex_Building_Deserialize_from_File_581e(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  undefined *heap_ctx;
  void *pvVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined *in_DX;
  undefined2 uVar6;
  int *handle_wrapper;
  undefined2 uVar7;
  void *unaff_SS;
  void *pvVar8;
  char *buffer;
  int iVar9;
  void *handle_wrapper_00;
  void *file_ctx;
  undefined2 in_stack_0000fbcc;
  undefined4 local_410;
  int local_40c;
  char local_408 [0x400];
  undefined4 local_8;
  undefined2 local_4;
  
  file_ctx = (void *)param_2;
  iVar9 = (int)param_1;
  handle_wrapper_00 = (void *)(param_1 >> 0x10);
  iVar2 = UI_Window_with_List_Load_from_File_Logic_19b4(param_1,file_ctx);
  if (iVar2 != 0x0)
  {
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      in_DX = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar3 = alloc_with_hooks(0x20,0x1,heap_ctx);
    if (in_DX == NULL && pvVar3 == NULL)
    {
      uVar7 = 0x0;
      uVar6 = 0x0;
    }
    else
    {
      pvVar8 = Simulator_Entity_Init_State_84ae((void *)CONCAT22(in_DX,pvVar3));
      uVar6 = (undefined2)((ulong)pvVar8 >> 0x10);
      uVar7 = SUB42(pvVar8,0x0);
    }
    *(undefined2 *)(iVar9 + 0x10) = uVar7;
    *(undefined2 *)(iVar9 + 0x12) = uVar6;
    iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar2 != 0x0)
    {
      uVar5 = *(undefined4 *)((int)_p_SimulatorWorldContext + 0x52);
      local_8 = uVar5;
      handle_wrapper =
           Simulator_Factory_Create_Building_Entry_Logic_4782
                     ((int)uVar5,(int)((ulong)uVar5 >> 0x10),0x0,0x1,local_4);
      *(undefined2 *)(iVar9 + 0x10) = (int)uVar5;
      *(undefined2 *)(iVar9 + 0x12) = handle_wrapper;
      buffer = (char *)((ulong)param_2 >> 0x10);
      iVar2 = file_read_check((long)param_2,(void *)(*(int *)(iVar9 + 0x10) + 0x2),
                              handle_wrapper);
      if (iVar2 != 0x0)
      {
        pcVar4 = local_408;
        file_context_read_null_terminated_string_logic(file_ctx,buffer);
        if (pcVar4 != NULL)
        {
          free_if_not_null((void *)(void *)*(undefined4 *)
                                            ((int)*(undefined4 *)(iVar9 + 0x10) + 0x4));
          pcVar4 = strdup_allocate(local_408);
          uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar9 + 0x10) >> 0x10);
          iVar2 = (int)*(undefined4 *)(iVar9 + 0x10);
          *(undefined2 *)(iVar2 + 0x4) = pcVar4;
          *(undefined2 *)(iVar2 + 0x6) = handle_wrapper;
          iVar2 = file_read_check((long)param_2,
                                  (void *)((int)*(undefined4 *)(iVar9 + 0x10) + 0x1a),
                                  (void *)((ulong)*(undefined4 *)(iVar9 + 0x10) >> 0x10)
                                 );
          if (iVar2 != 0x0)
          {
            uVar1 = *(u16 *)((int)*(undefined4 *)(iVar9 + 0x10) + 0x1a);
            pvVar3 = allocate_memory(CONCAT22(in_stack_0000fbcc,uVar1 * 0x6));
            local_410 = (void *)CONCAT22(handle_wrapper,pvVar3);
            if (handle_wrapper == NULL && pvVar3 == NULL)
            {
              *(undefined4 *)((int)*(undefined4 *)(iVar9 + 0x10) + 0x16) = 0x0;
            }
            else
            {
              call_function_n_times
                        ((void *)((int)(void **)&PTR_s_M3_1050_3bc1_1050_3e36 + 0x2),
                         0x1008,uVar1);
              *(undefined4 *)((int)*(undefined4 *)(iVar9 + 0x10) + 0x16) = local_410;
            }
            for (local_40c = 0x0;
                local_40c < *(int *)((int)*(undefined4 *)(iVar9 + 0x10) + 0x1a);
                local_40c += 0x1)
            {
              iVar2 = file_context_deserialize_3word_struct_logic(file_ctx,buffer);
              if (iVar2 == 0x0) goto LAB_1030_58a7;
            }
            iVar2 = file_context_deserialize_3word_struct_logic(file_ctx,buffer);
            if ((iVar2 != 0x0) &&
               (iVar2 = file_read_check((long)param_2,(void *)(iVar9 + 0x1c),
                                        handle_wrapper_00), iVar2 != 0x0))
            {
              return 0x1;
            }
          }
        }
      }
    }
LAB_1030_58a7:
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



// Retrieves two 4-byte fields (0xE, 0x12) from the production item's linked internal
// object.

void __stdcall16far
UI_Production_Item_Get_Object_Fields_5a52
          (void *this_ptr,void *out_field2,void *out_field1)
{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x10);
  *(undefined4 *)out_field1 = *(undefined4 *)((int)uVar1 + 0xe);
  uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x10);
  *(undefined4 *)out_field2 = *(undefined4 *)((int)uVar1 + 0x12);
  return;
}



// Updates the production item's layout based on its linked object's dimensions.
// Calculates coordinate differences for UI positioning.

void __stdcall16far
UI_Production_Item_Update_Layout_Logic_5a80(void *this_ptr,void *entity_ptr)
{
  u16 uVar1;
  void *unaff_SS;
  undefined1 local_20 [0xc];
  undefined1 local_14 [0x6];
  u32 uStack_e;
  u32 uStack_a;
  astruct_270 *iStack_6;
  undefined2 uStack_4;
  
  uVar1 = (u16)((ulong)this_ptr >> 0x10);
  *(undefined4 *)((int)this_ptr + 0x10) = entity_ptr;
  iStack_6 = get_with_lazy_init((void *)(void *)*(undefined4 *)((int)entity_ptr + 0xe));
  uStack_a = iStack_6->field4_0x4;
  uStack_e = iStack_6->field5_0x8;
  uStack_4 = entity_ptr._2_2_;
  pack_3words_alt(local_14,(int)unaff_SS,0x0,(int)uStack_e + -0x1);
  copy_two_6byte_structs_to_12byte(local_20,unaff_SS,local_14);
  calc_abs_diff_between_halves_of_12byte_struct
            (local_20,unaff_SS,(int)this_ptr + 0x14,uVar1);
  return;
}



// Retrieves an internal identifier (field at offset 4 + 0xB) for the production item.

int __stdcall16far UI_Production_Item_Get_ID_Logic_5b00(void *this_ptr)
{
  return *(int *)((int)(void *)this_ptr + 0x4) + 0xb;
}



// Retrieves the 2D coordinates (offsets 0x1A, 0x1C) for the production item.

void __stdcall16far
UI_Production_Item_Get_Coords_Logic_5b1c(void *this_ptr,void *out_y,void *out_x)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)out_x = *(undefined2 *)((int)(void *)this_ptr + 0x1a);
  *(undefined2 *)out_y = *(undefined2 *)((int)(void *)this_ptr + 0x1c);
  return;
}



// Updates per-turn production metrics (offsets 0x1A, 0x1C) for a simulator entity.
// Ensuring the secondary counter meets or exceeds param_2.

void __stdcall16far
Simulator_Update_Entity_Production_Metrics_5b3e(u32 entity_ptr,int min_val,u16 value)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(entity_ptr >> 0x10);
  iVar1 = (int)entity_ptr;
  *(u16 *)(iVar1 + 0x1a) = value;
  if (*(int *)(iVar1 + 0x1c) < min_val)
  {
    *(int *)(iVar1 + 0x1c) = min_val;
  }
  return;
}



// Returns a pointer to the 2D world coordinates (offset 0x14) within a simulator entity
// structure.

void * __stdcall16far Simulator_Get_Entity_Coords_Ptr_5b5c(int offset,uint16_t segment)
{
  return (void *)CONCAT22(segment,(void *)(offset + 0x14));
}



// Sets the name string for the internal object linked to a production item. Similar to
// 1030:301A but uses production item offsets.

void __stdcall16far
UI_Production_Item_Set_Object_Name_Logic_5b6c(astruct_268 *param_1,char *param_2)
{
  char *pcVar1;
  u16 in_DX;
  astruct_268 *uVar2;
  astruct_269 *iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (astruct_268 *)param_1;
  if (uVar2->field16_0x10 != 0x0)
  {
    free_if_not_null((void *)(void *)*(undefined4 *)((int)uVar2->field16_0x10 + 0x4));
    pcVar1 = strdup_allocate(param_2);
    uVar4 = (undefined2)((ulong)uVar2->field16_0x10 >> 0x10);
    iVar2 = (astruct_269 *)(astruct_269 *)uVar2->field16_0x10;
    iVar2->field4_0x4 = pcVar1;
    iVar2->field5_0x6 = in_DX;
  }
  return;
}



// Scalar deleting destructor for UI production items.

void * __stdcall16far
UI_Production_Item_dtor_Scalar_Deleting_5baa(void *this_ptr,byte flags)
{
  UI_Production_Item_dtor_Internal_56b0(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



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



// Serializes the simulator's object library state (36 bytes) to a save game file.

int __stdcall16far
Simulator_Object_Library_Save_to_File_Logic_5c1a(void *this_ptr,void *file_ctx)
{
  int iVar1;
  int iVar2;
  
  iVar1 = file_context_write_footer_marker_logic((void *)file_ctx);
  iVar2 = 0x0;
  if (iVar1 != 0x0)
  {
    iVar2 = file_write_check((long)file_ctx,(void *)this_ptr,
                             (void *)((ulong)this_ptr >> 0x10));
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    iVar2 = 0x1;
  }
  return iVar2;
}



// Deserializes the simulator's object library state (36 bytes) from a save game file.

int __stdcall16far
Simulator_Object_Library_Load_from_File_Logic_5c52(void *this_ptr,void *file_ctx)
{
  int iVar1;
  int iVar2;
  
  iVar1 = file_context_find_footer_marker_logic();
  iVar2 = 0x0;
  if (iVar1 != 0x0)
  {
    iVar2 = file_read_check((long)file_ctx,(void *)this_ptr,
                            (void *)((ulong)this_ptr >> 0x10));
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    iVar2 = 0x1;
  }
  return iVar2;
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



// An alternative constructor for UI production item Type 0x613E. Equivalent to
// 1030:5D3C.

u16 * __stdcall16far
UI_Production_Item_Type_613E_ctor_613E_Alternative_5d0a(void *this_ptr)
{
  u16 *puVar1;
  undefined2 uVar2;
  
  UI_Window_with_List_ctor_init_17ce(this_ptr,(void *)0x1,(void *)0x4);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  puVar1 = (u16 *)this_ptr;
  (puVar1 + 0x8)[0x0] = 0x0;
  (puVar1 + 0x8)[0x1] = 0x0;
  *(undefined2 *)this_ptr = 0x613e;
  puVar1[0x1] = 0x1030;
  return puVar1;
}



// Constructor for UI production item Type 0x613E. Inherits from Type 0x183C and sets
// vtable to 0x613E.

void * __stdcall16far
UI_Production_Item_Type_613E_ctor_init_5d3c(void *this_ptr,void *arg2)
{
  undefined2 uVar1;
  
  UI_Window_with_List_ctor_with_Params_183c
            (this_ptr,(void *)0x1,(void *)0x4,(void *)0x1000000,arg2);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined4 *)((int)(void *)this_ptr + 0x10) = 0x0;
  *(undefined2 *)this_ptr = 0x613e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1030;
  return this_ptr;
}



// Internal destructor for UI production item 0x613E. Cleans up its internal sub-object
// and reverts vtables.

void __stdcall16far UI_Production_Item_Type_613E_dtor_Internal_5d78(void *this_ptr)
{
  void *ptr;
  astruct_267 *uVar3;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_267 *)this_ptr;
  *(undefined2 *)this_ptr = 0x613e;
  uVar3->field2_0x2 = 0x1030;
  ptr = (void *)*(void **)&uVar3->field_0x10;
  if (uVar3->field17_0x12 != 0x0 || ptr != NULL)
  {
    Helper_Free_Pointer_at_Offset0_8480((void *)CONCAT22(uVar3->field17_0x12,ptr));
    free_if_not_null(ptr);
  }
  UI_Window_with_List_dtor_Internal_18b2(this_ptr);
  return;
}



undefined2 __stdcall16far
UI_Window_Complex_Resource_Serialize_to_File_5dbe(void *param_1,void *param_2)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined2 uVar4;
  void *unaff_SS;
  char *str;
  undefined2 local_c [0x5];
  
  iVar2 = UI_Window_with_List_Save_to_File_Logic_1978(param_1,param_2);
  if (iVar2 != 0x0)
  {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    pvVar3 = (void *)param_1;
    str = (char *)((ulong)param_2 >> 0x10);
    iVar2 = file_context_write_string_with_terminator_logic((void *)param_2,str);
    if ((iVar2 != 0x0) &&
       (iVar2 = file_context_serialize_3word_struct_logic((void *)param_2,str),
       iVar2 != 0x0))
    {
      local_c[0x0] = *(undefined2 *)((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0xa);
      iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
      if (iVar2 != 0x0)
      {
        if (*(int *)((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0xa) == 0x0)
        {
          return 0x1;
        }
        pvVar1 = (void *)*(undefined4 *)((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0xc)
        ;
        iVar2 = file_write_check((long)param_2,(void *)pvVar1,
                                 (void *)((ulong)pvVar1 >> 0x10));
        if (iVar2 != 0x0)
        {
          return 0x1;
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
UI_Window_Complex_Resource_Deserialize_from_File_5e70(u32 param_1,void *param_2)
{
  void *pvVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined *heap_ctx;
  void *pvVar4;
  char *pcVar5;
  void *pvVar6;
  undefined *in_DX;
  undefined2 uVar7;
  long context;
  int iVar8;
  undefined2 uVar9;
  char *buffer;
  undefined4 local_40a;
  char local_402 [0x400];
  
  pvVar6 = (void *)param_2;
  buffer = (char *)((ulong)param_2 >> 0x10);
  iVar8 = (int)param_1;
  uVar9 = (undefined2)(param_1 >> 0x10);
  iVar3 = UI_Window_with_List_Load_from_File_Logic_19b4(param_1,pvVar6);
  if (iVar3 != 0x0)
  {
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      in_DX = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar4 = alloc_with_hooks(0x10,0x1,heap_ctx);
    local_40a = (void *)CONCAT22(in_DX,pvVar4);
    if (in_DX == NULL && pvVar4 == NULL)
    {
      *(undefined4 *)(iVar8 + 0x10) = 0x0;
      in_DX = NULL;
    }
    else
    {
      zero_init_struct_6bytes((void *)((int)pvVar4 + 0x4));
      *(undefined4 *)(iVar8 + 0x10) = local_40a;
    }
    pcVar5 = local_402;
    file_context_read_null_terminated_string_logic(pvVar6,buffer);
    if (pcVar5 != NULL)
    {
      pcVar5 = strdup_allocate(local_402);
      puVar2 = (undefined2 *)*(undefined4 *)(iVar8 + 0x10);
      *puVar2 = pcVar5;
      ((undefined2 *)puVar2)[0x1] = in_DX;
      iVar3 = file_context_deserialize_3word_struct_logic(pvVar6,buffer);
      if (iVar3 != 0x0)
      {
        iVar3 = file_read_check((long)param_2,
                                (void *)((int)*(undefined4 *)(iVar8 + 0x10) + 0xa),
                                (void *)((ulong)*(undefined4 *)(iVar8 + 0x10) >> 0x10));
        if (iVar3 != 0x0)
        {
          uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar8 + 0x10) >> 0x10);
          iVar3 = (int)*(undefined4 *)(iVar8 + 0x10);
          if (*(int *)(iVar3 + 0xa) == 0x0)
          {
LAB_1030_5fb7:
            context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f)
            ;
            UI_Component_Set_FarPtr_at_Offset_1A_Logic_2(context,*(long *)(iVar8 + 0x4))
            ;
            return 0x1;
          }
          iVar3 = *(int *)(iVar3 + 0xa) * 0x2;
          pvVar6 = allocate_memory(CONCAT22(iVar3,iVar3));
          uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar8 + 0x10) >> 0x10);
          iVar3 = (int)*(undefined4 *)(iVar8 + 0x10);
          *(undefined2 *)(iVar3 + 0xc) = pvVar6;
          *(undefined2 *)(iVar3 + 0xe) = in_DX;
          pvVar1 = (void *)*(undefined4 *)((int)*(undefined4 *)(iVar8 + 0x10) + 0xc);
          iVar3 = file_read_check((long)param_2,(void *)pvVar1,
                                  (void *)((ulong)pvVar1 >> 0x10));
          if (iVar3 != 0x0) goto LAB_1030_5fb7;
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



// Sets a far pointer to an internal object (offset 0x10) for the UI component.

void __stdcall16far UI_Component_Set_Internal_Object_Ptr_5fe2(u32 this_ptr,u32 obj_ptr)
{
  *(u32 *)((int)this_ptr + 0x10) = obj_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_World_Populate_Entity_Metadata_and_Polygons(undefined4 param_1)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_DX;
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
    if (in_DX == 0x0 && local_8 == NULL)
    {
      *(undefined4 *)(iVar5 + 0xc) = 0x0;
    }
    else
    {
      pvVar8 = UI_Production_Item_Base_ctor_init_1cd8
                         ((void *)CONCAT22(in_DX,local_8),(void *)0x5,(void *)0x5);
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



// Scalar deleting destructor for UI production items.

u16 * __stdcall16far
UI_Production_Item_dtor_Scalar_Deleting_6118(void *this_ptr,byte flags)
{
  UI_Production_Item_Type_613E_dtor_Internal_5d78(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)this_ptr);
  }
  return (u16 *)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the global Simulator Map Context. Initializes its vtable and sets the
// global 1050:5740 pointer.

void __stdcall16far Simulator_Map_Context_ctor_init_615a(u32 *this_ptr)
{
  astruct_491 *this;
  void *pvVar1;
  uint in_DX;
  uint uVar2;
  undefined2 in_stack_00000006;
  undefined4 in_stack_0000fff8;
  
  *_this_ptr = 0x0;
  this_ptr[0x1] = 0x0;
  this = allocate_memory(CONCAT22((int)((ulong)in_stack_0000fff8 >> 0x10),0xc));
  uVar2 = in_DX | (uint)this;
  if (uVar2 == 0x0)
  {
    this_ptr[0x1] = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this,in_DX);
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
  int in_DX;
  void *pvVar3;
  undefined2 in_stack_0000fff6;
  
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x4c));
  if (in_DX == 0x0 && pvVar2 == NULL)
  {
    pvVar3 = NULL;
  }
  else
  {
    pvVar3 = Simulator_Map_SubList_ctor_init_88ce
                       ((void *)CONCAT22(in_DX,pvVar2),param_3,param_4);
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
