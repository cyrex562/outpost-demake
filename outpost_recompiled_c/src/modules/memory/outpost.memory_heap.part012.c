/*
 * Source: outpost.c
 * Theme: memory_heap
 * Chunk: 12/13
 * Original lines (combined): 91245-103856
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles specialized population departures (param_2 1-4). Either decrements counts
// sequentially from a range (using 39DC) or picks random categories from the full range
// (0-90) until the target is met.

void * __stdcall16far
Colony_Process_Special_Departure_Logic_3694(void *param_1,int param_2,long param_3)
{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined *heap_ctx;
  void *pvVar4;
  int index;
  undefined *reg_dx;
  undefined2 unaff_SS;
  u32 uVar5;
  
  Simulator_Log_Debug_Message_to_File_840a
            (0x517a,0x1050,(int)param_3,(int)((ulong)param_3 >> 0x10));
  if (_g_AllocatedBlock_Offset == NULL)
  {
    heap_ctx = init_memory_allocator();
  }
  else
  {
    reg_dx = g_AllocatedBlock_Segment;
    heap_ctx = g_AllocatedBlock_Offset;
  }
  pvVar4 = alloc_with_hooks(0x16c,0x1,heap_ctx);
  if (((param_2 < 0x1) || (SBORROW2(param_2,0x1))) || (0x4 < param_2 + -0x1))
  {
    while (0x0 < param_3)
    {
      index = random_int_range(0x0,0x5a);
      uVar5 = Simulator_Process_Turn_Decrement_Resource_Group_3a3a
                        (param_1,(undefined4 *)CONCAT22(unaff_SS,&param_3),index);
      puVar1 = (uint *)(index * 0x4 + (int)pvVar4);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + (uint)uVar5;
      piVar2 = (int *)((int)pvVar4 + index * 0x4 + 0x2);
      *piVar2 = *piVar2 + (int)(uVar5 >> 0x10) + (uint)CARRY2(uVar3,(uint)uVar5);
    }
  }
  else
  {
    Colony_Decrement_Range_Sequentially_39dc
              (param_1,(undefined4 *)CONCAT22(unaff_SS,&param_3),
               (void *)CONCAT22(reg_dx,pvVar4),param_2);
  }
  memset_far((void *)((int)(void *)param_1 + 0x18c),(int)((ulong)param_1 >> 0x10),0x0);
  return (void *)CONCAT22(reg_dx,pvVar4);
}



undefined2 * __stdcall16far
Base_Object_dtor_Scalar_Deleting_3ac6(undefined2 *param_1,byte param_2)
{
  *param_1 = (char *)s_1_1050_389a;
  ((undefined2 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((undefined2 *)param_1);
  }
  return param_1;
}



// Frees multiple internal data buffers managed by the Simulator Map Context.

void __stdcall16far Simulator_Map_Context_Free_Internal_Buffers_4538(void *this_ptr)
{
  undefined2 uVar1;
  
  free_if_not_null((void *)*(void **)this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  free_if_not_null((void *)(void *)*(undefined4 *)((int)(void *)this_ptr + 0x12));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)(void *)this_ptr + 0x15c));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Loads the 'bldgbld.dat' configuration file, parses its contents, and populates the
// simulator's internal building layout templates.

void __stdcall16far Simulator_Context_Load_bldgbld_dat_Logic_4f5a(void *this_ptr)
{
  char *pcVar1;
  u16 uVar2;
  uint uVar3;
  undefined *heap_ctx;
  void *pvVar4;
  undefined *reg_dx;
  char *unaff_SS;
  long lVar5;
  void *arg1;
  char *buffer;
  uint uStack_16;
  int iStack_c;
  long local_a;
  char *local_6;
  astruct_276 *uVar7;
  
  uVar2 = FileSystem_Read_File_to_Allocated_Buffer_4e70
                    (this_ptr,(long *)CONCAT22(unaff_SS,&local_a),(int *)&local_6,
                     unaff_SS);
  pcVar1 = local_6;
  if (uVar2 != 0x0)
  {
    arg1 = (void *)this_ptr;
    uVar2 = (u16)((ulong)this_ptr >> 0x10);
    buffer = (char *)local_6;
    uVar3 = Parser_Replace_Newlines_with_Nulls_4e34((u16)arg1,uVar2,local_a,buffer);
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      reg_dx = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar4 = alloc_with_hooks((ulong)(uVar3 * 0x98),0x1,heap_ctx);
    *(undefined2 *)((int)arg1 + 0x12) = pvVar4;
    *(undefined2 *)((int)arg1 + 0x14) = reg_dx;
    lVar5 = Parser_Get_Next_CSV_Line_Pointer_4dbc(this_ptr,local_6,(ulong)uVar3);
    for (uStack_16 = 0x0; uStack_16 < uVar3; uStack_16 += 0x1)
    {
      Parser_Parse_CSV_Line_to_Short_Array_4d3a
                (this_ptr,*(int *)((int)arg1 + 0x12) + uStack_16 * 0x98,
                 *(undefined2 *)((int)arg1 + 0x14),lVar5);
      lVar5 = Parser_Get_Next_CSV_Line_Pointer_4dbc(this_ptr,NULL,0x0);
    }
    iStack_c = (int)((ulong)pcVar1 >> 0x10);
    if (iStack_c != 0x0 || buffer != NULL)
    {
      heap_free_core(buffer);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Loads the 'bldgops.dat' configuration file, parses its contents, and populates the
// simulator's internal building operational templates.

void __stdcall16far Simulator_Context_Load_bldgops_dat_Logic_5044(void *this_ptr)
{
  char *pcVar1;
  u16 uVar2;
  uint uVar3;
  undefined *heap_ctx;
  void *pvVar4;
  undefined *reg_dx;
  char *unaff_SS;
  long lVar5;
  void *arg1;
  char *buffer;
  undefined4 uStack_1c;
  uint uStack_18;
  int iStack_c;
  long local_a;
  char *local_6;
  
  uVar2 = FileSystem_Read_File_to_Allocated_Buffer_4e70
                    (this_ptr,(long *)CONCAT22(unaff_SS,&local_a),(int *)&local_6,
                     unaff_SS);
  pcVar1 = local_6;
  if (uVar2 != 0x0)
  {
    arg1 = (void *)this_ptr;
    uVar2 = (u16)((ulong)this_ptr >> 0x10);
    buffer = (char *)local_6;
    uVar3 = Parser_Replace_Newlines_with_Nulls_4e34((u16)arg1,uVar2,local_a,buffer);
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      reg_dx = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar4 = alloc_with_hooks((ulong)(uVar3 * 0xae),0x1,heap_ctx);
    uStack_1c = (void *)CONCAT22(reg_dx,pvVar4);
    if (reg_dx == NULL && pvVar4 == NULL)
    {
      *(undefined4 *)((int)arg1 + 0x15c) = 0x0;
    }
    else
    {
      call_function_n_times((void *)0x51f0,0x1030,uVar3);
      *(undefined4 *)((int)arg1 + 0x15c) = uStack_1c;
    }
    lVar5 = Parser_Get_Next_CSV_Line_Pointer_4dbc(this_ptr,local_6,(ulong)uVar3);
    for (uStack_18 = 0x0; uStack_18 < uVar3; uStack_18 += 0x1)
    {
      Parser_Parse_CSV_Line_to_Int_Array_4c52
                (this_ptr,*(int *)((int)arg1 + 0x15c) + uStack_18 * 0xae,
                 *(undefined2 *)((int)arg1 + 0x15e),lVar5);
      lVar5 = Parser_Get_Next_CSV_Line_Pointer_4dbc(this_ptr,NULL,0x0);
    }
    iStack_c = (int)((ulong)pcVar1 >> 0x10);
    if (iStack_c != 0x0 || buffer != NULL)
    {
      heap_free_core(buffer);
    }
  }
  return;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_5290(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x10c));
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
    *local_a = 0x55fe;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_54f8(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x10c));
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
    *local_a = 0x55ee;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
}



undefined2 * __stdcall16far
UI_Base_Object_dtor_Scalar_Deleting_1030_55c2(undefined2 *param_1,byte param_2)
{
  *param_1 = (char *)s_1_1050_389a;
  ((undefined2 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((undefined2 *)param_1);
  }
  return param_1;
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
  undefined *reg_dx;
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
      reg_dx = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar4 = alloc_with_hooks(0x10,0x1,heap_ctx);
    local_40a = (void *)CONCAT22(reg_dx,pvVar4);
    if (reg_dx == NULL && pvVar4 == NULL)
    {
      *(undefined4 *)(iVar8 + 0x10) = 0x0;
      reg_dx = NULL;
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
      ((undefined2 *)puVar2)[0x1] = reg_dx;
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
          *(undefined2 *)(iVar3 + 0xe) = reg_dx;
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



void * __stdcall16far
UI_SubComponent_Type8114_dtor_Scalar_Deleting_80ee(void *param_1,byte param_2)
{
  UI_SubComponent_Type8114_dtor_Internal_68dc(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    heap_free_descriptor((void *)param_1,(int)((ulong)param_1 >> 0x10));
  }
  return param_1;
}



void __stdcall16far Helper_Free_Pointer_at_Offset0_8480(void *this_ptr)
{
  free_if_not_null((void *)*(void **)this_ptr);
  return;
}



void __stdcall16far Helper_Free_Pointer_at_Offset2_8496(void *this_ptr)
{
  free_if_not_null((void *)(void *)*(undefined4 *)((int)(void *)this_ptr + 0x2));
  return;
}



// Frees the internal pointer buffer used by the entity collection.

void __stdcall16far Simulator_Entity_Collection_Free_Buffer_8604(void *this_ptr)
{
  free_if_not_null((void *)*(void **)this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Manages the allocation or expansion of the internal buffer for the entity collection.
// Triggers a sort after allocation.

void __stdcall16far
Simulator_Entity_Collection_Realloc_Buffer_Logic_878c(void *this_ptr)
{
  uint uVar1;
  void *pvVar2;
  undefined *heap_ctx;
  undefined *puVar3;
  astruct_222 *uVar5;
  undefined2 uVar4;
  void *in_stack_0000ffe6;
  undefined4 uStack_c;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_222 *)this_ptr;
  if (uVar5->field4_0x4 == 0x0)
  {
    puVar3 = NULL;
    uVar1 = uVar5->field5_0x6;
  }
  else
  {
    uVar1 = uVar5->field4_0x4 + uVar5->field6_0x8;
    puVar3 = (undefined *)(uint)CARRY2(uVar5->field4_0x4,uVar5->field6_0x8);
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
      pvVar2 = alloc_with_hooks((ulong)(uVar1 * 0x6),0x1,heap_ctx);
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
      uVar5->field4_0x4 = uVar1;
      *(void **)this_ptr = uStack_c;
      Simulator_Entity_Collection_Sort_Internal_8834(this_ptr);
    }
  }
  return;
}



void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_Alternative_9e9c(void *this_ptr,byte flags)
{
  int bucket_index;
  
  bucket_index = (int)((ulong)this_ptr >> 0x10);
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    heap_free_descriptor((void *)this_ptr,bucket_index);
  }
  return this_ptr;
}



// Internal destructor for UI Item Type 4. Frees its managed item list and reverts
// vtables.

void __stdcall16far UI_Item_Type4_dtor_Internal_b96c(void *this_ptr)
{
  void *ptr;
  astruct_186 *uVar3;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_186 *)this_ptr;
  *(undefined2 *)this_ptr = 0xbc0c;
  uVar3->field2_0x2 = 0x1030;
  ptr = (void *)*(void **)&uVar3->field_0xe;
  if (uVar3->field15_0x10 != 0x0 || ptr != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic((void *)CONCAT22(uVar3->field15_0x10,ptr));
    free_if_not_null(ptr);
  }
  UI_Item_Base_dtor_Internal_b260(this_ptr);
  return;
}



// Finds the index of the first sub-item with the specified ID that is currently in
// state 0 (free). Returns -1 if not found.

int __stdcall16far
UI_Build_Item_TypeD88E_Find_Free_Slot_by_ID_cde8(int offset,u16 segment,int sub_id)
{
  int iVar1;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  while( true )
  {
    if (0x9 < uStack_4)
    {
      return -0x1;
    }
    iVar1 = uStack_4 * 0xc + offset;
    if ((*(int *)(iVar1 + 0x24) == sub_id) && (*(int *)(iVar1 + 0x26) == 0x0)) break;
    uStack_4 += 0x1;
  }
  return uStack_4;
}



// Counts the number of sub-items with the specified ID that are currently in state 0.

int __stdcall16far
UI_Build_Item_TypeD88E_Count_Free_Slots_by_ID_ce2e(int offset,u16 segment,int sub_id)
{
  int iVar1;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  for (uStack_6 = 0x0; uStack_6 < 0xa; uStack_6 += 0x1)
  {
    iVar1 = uStack_6 * 0xc + offset;
    if ((*(int *)(iVar1 + 0x24) == sub_id) && (*(int *)(iVar1 + 0x26) == 0x0))
    {
      uStack_4 += 0x1;
    }
  }
  return uStack_4;
}



// Allocates a specified quantity of slots for a sub-item ID. Sets state to 1 (or 2 if
// ID is 4) and links the provided object ID. Stops when quantity is reached or array is
// full.

int __stdcall16far
UI_Build_Item_TypeD88E_Allocate_SubItem_Slots_ce72
          (undefined4 param_1,int param_2,undefined4 param_3,int param_4)
{
  long lVar1;
  astruct_175 *iVar2;
  int iStack_a;
  int iStack_4;
  
  iStack_4 = 0x0;
  lVar1 = *(long *)((int)param_3 + 0x4);
  iStack_a = 0x0;
  do
  {
    if (0x9 < iStack_a)
    {
      return iStack_4;
    }
    iVar2 = (astruct_175 *)(iStack_a * 0xc + (int)param_1);
    if ((iVar2->field36_0x24 == param_4) && (iVar2->field38_0x28 == 0x0))
    {
      iVar2->field38_0x28 = lVar1;
      if (param_4 == 0x4)
      {
        iVar2->field37_0x26 = 0x2;
      }
      else
      {
        *(undefined2 *)((int)param_1 + iStack_a * 0xc + 0x26) = 0x1;
      }
      iStack_4 += 0x1;
      param_2 += -0x1;
      if (param_2 == 0x0)
      {
        return iStack_4;
      }
    }
    iStack_a += 0x1;
  } while( true );
}



// Counts the number of sub-item slots that are currently free (offset 0x20 == 0).

int __stdcall16far UI_Build_Item_TypeD88E_Count_Empty_Slots_d144(void *this_ptr)
{
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  for (uStack_6 = 0x0; uStack_6 < 0xa; uStack_6 += 0x1)
  {
    if (*(long *)((int)this_ptr + uStack_6 * 0xc + 0x20) == 0x0)
    {
      uStack_4 += 0x1;
    }
  }
  return uStack_4;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_e1f4(undefined4 param_1)
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
    *local_a = 0xe2ae;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_e34e(undefined4 param_1)
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
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar6 + 0x108);
    *(undefined4 *)(puVar3 + 0x86) = *(undefined4 *)(iVar6 + 0x10c);
    puVar3[0x88] = *(undefined2 *)(iVar6 + 0x110);
    *local_a = 0xe4ea;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
}



undefined2 * __stdcall16far
Base_Object_dtor_Scalar_Deleting_e4be(undefined2 *param_1,byte param_2)
{
  *param_1 = (char *)s_1_1050_389a;
  ((undefined2 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((undefined2 *)param_1);
  }
  return param_1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_e564(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x10c));
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
    *local_a = 0xe62e;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
}
