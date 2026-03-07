/*
 * Source: outpost.c
 * Chunk: 81/117
 * Original lines: 92095-93233
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Extremely complex factory for creating building entries in the simulator. Handles
// resource allocation, naming (via string resources), vtable assignment (0x6AD2), and
// complex coordinate-based footprint generation for the building site.

int * __stdcall16far
Simulator_Factory_Create_Building_Entry_Logic_4782
          (undefined2 param_1,undefined2 param_2,int param_3,int param_4,
          undefined2 param_5)
{
  void *pvVar1;
  u16 uVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined *in_DX;
  uint uVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_SI;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 *puVar11;
  long context;
  void *pvVar12;
  undefined *puVar13;
  int iStack_dc;
  undefined *local_c4;
  undefined *puStack_c2;
  undefined *local_c0;
  int iStack_be;
  int iStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  void *pvStack_b2;
  undefined *puStack_b0;
  void *pvStack_ae;
  undefined *puStack_ac;
  uint uStack_aa;
  int iStack_a8;
  int iStack_a6;
  u16 uStack_a4;
  u16 uStack_a2;
  int iStack_a0;
  int iStack_9e;
  int iStack_9c;
  void *pvStack_9a;
  undefined2 uStack_98;
  char *pcStack_96;
  undefined2 uStack_94;
  char local_92 [0x80];
  void *pvStack_12;
  undefined2 uStack_10;
  u8 *puStack_e;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  if (_g_AllocatedBlock_Offset == NULL)
  {
    local_c4 = init_memory_allocator();
  }
  else
  {
    in_DX = g_AllocatedBlock_Segment;
    local_c4 = g_AllocatedBlock_Offset;
  }
  puStack_c2 = in_DX;
  pvVar1 = alloc_with_hooks(0x20,0x1,local_c4);
  uStack_b8 = (void *)CONCAT22(in_DX,pvVar1);
  if (in_DX == NULL && pvVar1 == NULL)
  {
    puVar8 = NULL;
    pvVar1 = NULL;
  }
  else
  {
    puVar11 = Simulator_Entity_Init_State_84ae((void *)CONCAT22(in_DX,pvVar1));
    pvVar1 = (void *)((ulong)puVar11 >> 0x10);
    puVar8 = (undefined2 *)puVar11;
  }
  uStack_6 = (undefined2 *)CONCAT22(pvVar1,puVar8);
  *uStack_6 = param_5;
  copy_struct_6bytes(puVar8 + 0x4,pvVar1);
  if (param_4 != 0x0)
  {
    context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    uStack_8 = (undefined2)((ulong)context >> 0x10);
    uStack_a = (undefined2)context;
    puStack_e = (u8 *)UI_Component_Get_FarPtr_at_Offset_16_Logic(context);
    pvVar12 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,(u8 *)puStack_e);
    uVar10 = (undefined2)((ulong)pvVar12 >> 0x10);
    pvStack_12 = (void *)pvVar12;
    uStack_10 = uVar10;
    pcStack_96 = Resource_Manager_LoadString_to_Internal_Buffer
                           ((int)(void *)_p_GlobalResourceManager,
                            (int)((ulong)_p_GlobalResourceManager >> 0x10),0x62d);
    uStack_94 = uVar10;
    uVar2 = Simulator_Entity_Increment_Sequence_ID_2a98
                      ((void *)CONCAT22(uStack_10,pvStack_12));
    ((undefined2 *)uStack_6)[0x1] = uVar2;
    sprintf_wrapper(local_92);
    pcVar3 = strdup_allocate(local_92);
    uVar9 = (undefined2)((ulong)uStack_6 >> 0x10);
    ((undefined2 *)uStack_6)[0x2] = pcVar3;
    ((undefined2 *)uStack_6)[0x3] = uVar10;
    pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    uVar9 = (undefined2)((ulong)uStack_6 >> 0x10);
    ((undefined2 *)uStack_6)[0x7] = pvVar1;
    ((undefined2 *)uStack_6)[0x8] = uVar10;
    pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    uVar9 = (undefined2)((ulong)uStack_6 >> 0x10);
    puVar8 = (undefined2 *)uStack_6;
    puVar8[0x9] = pvVar1;
    puVar8[0xa] = uVar10;
    pvStack_9a = get_with_lazy_init((void *)*(void **)(puVar8 + 0x7));
    iStack_9c = *(int *)((int)pvStack_9a + 0x4) + -0x1;
    iStack_9e = *(int *)((int)pvStack_9a + 0x8) + -0x1;
    if (param_3 != 0x0)
    {
      iStack_a0 = 0xf;
      uStack_98 = uVar10;
      if (puStack_e == NULL)
      {
        log_debug_message_v(0x56de,0x1050);
      }
      else
      {
        Simulator_Get_Site_Bounds_by_Entity_Type_2f1a
                  ((void *)CONCAT22(uStack_10,pvStack_12),
                   (undefined **)CONCAT22(unaff_SS,&local_c0),
                   (undefined **)CONCAT22(unaff_SS,&local_c4));
        iStack_a0 = random_int_range((int)local_c4,(int)local_c0);
      }
      uVar10 = (undefined2)((ulong)uStack_6 >> 0x10);
      ((undefined2 *)uStack_6)[0xe] = iStack_a0 * 0xa;
      ((undefined2 *)uStack_6)[0xe] = (iStack_a0 * 0xa) / 0x64;
      puVar13 = (undefined *)
                Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
      puStack_c2 = (undefined *)((ulong)puVar13 >> 0x10);
      local_c4 = (undefined *)puVar13;
      local_c0 = g_ModeVersion_13AE;
      pvVar12 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x9);
      iStack_be = Resource_Category_Get_Mapped_Offset_Value_Logic
                            ((void *)pvVar12,(int)((ulong)pvVar12 >> 0x10));
      iStack_bc = 0x3c;
      if ((int)local_c0 < 0x3)
      {
        if (0x0 < iStack_be)
        {
          iStack_bc = 0x5a;
        }
      }
      else if (iStack_be == 0x1)
      {
        iStack_bc = 0x44;
      }
      else if (iStack_be == 0x2)
      {
        iStack_bc = 0x4b;
      }
      else if (iStack_be == 0x3)
      {
        iStack_bc = 0x53;
      }
      else if (iStack_be == 0x4)
      {
        iStack_bc = 0x5a;
      }
      iVar4 = iStack_bc * iStack_a0;
      iStack_a0 = iVar4 / 0x64;
      uVar6 = iVar4 % 0x64;
      uVar10 = (undefined2)((ulong)uStack_6 >> 0x10);
      ((undefined2 *)uStack_6)[0xd] = iStack_a0;
      uStack_a4 = iStack_a0 + ((undefined2 *)uStack_6)[0xe];
      uStack_a2 = uStack_a4;
      pvVar1 = allocate_memory(CONCAT22(unaff_SI,uStack_a4 * 0x6));
      uStack_b8 = (void *)CONCAT22(uVar6,pvVar1);
      puVar7 = (undefined *)(uVar6 | (uint)pvVar1);
      if (puVar7 == NULL)
      {
        *(undefined4 *)((undefined2 *)uStack_6 + 0xb) = 0x0;
      }
      else
      {
        call_function_n_times
                  ((void *)((int)(void **)&PTR_s_M3_1050_3bc1_1050_3e36 + 0x2),0x1008,
                   uStack_a4);
        *(void **)((undefined2 *)uStack_6 + 0xb) = uStack_b8;
      }
      uStack_aa = uStack_a2 * 0x2;
      if (_g_AllocatedBlock_Offset == NULL)
      {
        puVar5 = init_memory_allocator();
      }
      else
      {
        puVar7 = g_AllocatedBlock_Segment;
        puVar5 = g_AllocatedBlock_Offset;
      }
      pvVar1 = alloc_with_hooks((ulong)uStack_aa,0x1,puVar5);
      _pvStack_ae = (void *)CONCAT22(puVar7,pvVar1);
      if (_g_AllocatedBlock_Offset == NULL)
      {
        puVar5 = init_memory_allocator();
      }
      else
      {
        puVar7 = g_AllocatedBlock_Segment;
        puVar5 = g_AllocatedBlock_Offset;
      }
      pvStack_b2 = alloc_with_hooks((ulong)uStack_aa,0x1,puVar5);
      iStack_b4 = 0x0;
      puStack_b0 = puVar7;
LAB_1030_4b57:
      if (iStack_b4 < (int)uStack_a2)
      {
        do
        {
          iStack_a6 = random_int_range(0x0,iStack_9c);
          iStack_a8 = random_int_range(0x0,iStack_9e);
          iStack_dc = 0x0;
          while( true )
          {
            uVar10 = (undefined2)((ulong)_pvStack_ae >> 0x10);
            if (iStack_b4 <= iStack_dc)
            {
              *(int *)(iStack_b4 * 0x2 + (int)(void *)_pvStack_ae) = iStack_a6;
              *(int *)(iStack_b4 * 0x2 + (int)pvStack_b2) = iStack_a8;
              pack_3words_reverse((void *)((int)*(undefined4 *)
                                                 ((undefined2 *)uStack_6 + 0xb) +
                                          iStack_b4 * 0x6),
                                  (int)((ulong)*(undefined4 *)
                                                ((undefined2 *)uStack_6 + 0xb) >> 0x10),
                                  0x0,iStack_a8);
              iStack_b4 += 0x1;
              goto LAB_1030_4b57;
            }
            if ((*(int *)(iStack_dc * 0x2 + (int)(void *)_pvStack_ae) == iStack_a6) &&
               (*(int *)(iStack_dc * 0x2 + (int)pvStack_b2) == iStack_a8)) break;
            iStack_dc += 0x1;
          }
        } while( true );
      }
      free_if_not_null((void *)_pvStack_ae);
      uStack_b8._0_2_ = pvStack_b2;
      uStack_b8._2_2_ = puStack_b0;
      free_if_not_null(pvStack_b2);
    }
  }
  return uStack_6._2_2_;
}



// Loads a 152-byte (0x26 dwords) object template from the context's internal resource
// list (offset 0x12) into an active object slot.

void __stdcall16far
Simulator_Map_Context_Load_Object_Template_4bbe(void *this_ptr,int index)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  
  uVar8 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar6 = (void *)this_ptr;
  if (*(long *)((int)pvVar6 + 0x12) == 0x0)
  {
    Simulator_Context_Load_bldgbld_dat_Logic_4f5a(this_ptr);
  }
  puVar4 = (undefined4 *)((int)pvVar6 + 0x16);
  uVar3 = *(undefined2 *)((int)pvVar6 + 0x14);
  puVar7 = (undefined4 *)(*(int *)((int)pvVar6 + 0x12) + index * 0x98);
  for (iVar5 = 0x26; iVar5 != 0x0; iVar5 += -0x1)
  {
    puVar2 = puVar4;
    puVar4 = puVar4 + 0x1;
    puVar1 = puVar7;
    puVar7 = puVar7 + 0x1;
    *puVar2 = *puVar1;
  }
  return;
}



// Loads a 174-byte (0xAE) building operational template from the context's internal
// library (offset 0x15C).

void __stdcall16far
Simulator_Context_Load_Building_Op_Template_4c06(void *this_ptr,int index)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  
  uVar8 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar6 = (void *)this_ptr;
  if (*(long *)((int)pvVar6 + 0x15c) == 0x0)
  {
    Simulator_Context_Load_bldgops_dat_Logic_5044(this_ptr);
  }
  puVar4 = (undefined4 *)((int)pvVar6 + 0xae);
  uVar3 = *(undefined2 *)((int)pvVar6 + 0x15e);
  puVar7 = (undefined4 *)(*(int *)((int)pvVar6 + 0x15c) + index * 0xae);
  for (iVar5 = 0x2b; iVar5 != 0x0; iVar5 += -0x1)
  {
    puVar2 = puVar4;
    puVar4 = puVar4 + 0x1;
    puVar1 = puVar7;
    puVar7 = puVar7 + 0x1;
    *puVar2 = *puVar1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar7;
  return;
}



// Parses a comma-separated string line into an array of integers. Specifically designed
// for building operational data structures.

void __stdcall16far
Parser_Parse_CSV_Line_to_Int_Array_4c52
          (undefined2 param_1,undefined2 param_2,undefined4 param_3,char *param_4)
{
  char *str;
  int iVar1;
  int in_DX;
  int iVar2;
  undefined2 uVar3;
  void *uStack_8;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  while( true )
  {
    str = strtok_far_optimized_with_state
                    ((char *)param_4,(char *)((ulong)param_4 >> 0x10));
    uStack_8 = (void *)CONCAT22(in_DX,str);
    if (in_DX == 0x0 && str == NULL) break;
    if (*(char *)uStack_8 != '\"')
    {
      iVar1 = atoi_wrapper_far(str);
      iVar2 = (int)param_3;
      uVar3 = (undefined2)((ulong)param_3 >> 0x10);
      if (uStack_4 < 0x25)
      {
        *(int *)(uStack_4 * 0x4 + iVar2) = iVar1;
        *(int *)(uStack_4 * 0x4 + iVar2 + 0x2) = in_DX;
      }
      else if (uStack_4 == 0x25)
      {
        *(int *)(iVar2 + 0x94) = iVar1;
      }
      else if (uStack_4 == 0x26)
      {
        *(int *)(iVar2 + 0x96) = iVar1;
      }
      else if (uStack_4 == 0x27)
      {
        *(int *)(iVar2 + 0x98) = iVar1;
      }
      else if (uStack_4 == 0x28)
      {
        *(int *)(iVar2 + 0x9a) = iVar1;
      }
      else if (uStack_4 == 0x29)
      {
        *(int *)(iVar2 + 0x9c) = iVar1;
      }
      else if (uStack_4 == 0x2a)
      {
        *(int *)(iVar2 + 0x9e) = iVar1;
      }
      else if (uStack_4 == 0x2b)
      {
        *(int *)(iVar2 + 0xa0) = iVar1;
      }
      else if (uStack_4 == 0x2c)
      {
        *(int *)(iVar2 + 0xa2) = iVar1;
      }
      uStack_4 += 0x1;
    }
    param_4 = NULL;
  }
  return;
}



// Parses a comma-separated string line into an array of shorts. Specifically designed
// for building layout data structures.

void __stdcall16far
Parser_Parse_CSV_Line_to_Short_Array_4d3a
          (undefined2 param_1,undefined2 param_2,astruct_278 *param_3,char *param_4)
{
  char *str;
  int iVar1;
  int in_DX;
  astruct_278 *iVar3;
  astruct_279 *uVar3;
  void *uStack_8;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    str = strtok_far_optimized_with_state
                    ((char *)param_4,(char *)((ulong)param_4 >> 0x10));
    uStack_8 = (void *)CONCAT22(in_DX,str);
    if (in_DX == 0x0 && str == NULL) break;
    if (*(char *)uStack_8 != '\"')
    {
      iVar1 = atoi_wrapper_far(str);
      iVar3 = (astruct_278 *)param_3;
      uVar3 = (astruct_279 *)((ulong)param_3 >> 0x10);
      if (iStack_4 < 0x25)
      {
        *(int *)(&iVar3->field_0x0 + iStack_4 * 0x4) = iVar1;
        *(int *)(&iVar3->field_0x2 + iStack_4 * 0x4) = in_DX;
      }
      else if (iStack_4 == 0x25)
      {
        iVar3->field148_0x94 = iVar1;
      }
      else if (iStack_4 == 0x26)
      {
        iVar3->field149_0x96 = iVar1;
      }
      iStack_4 += 0x1;
    }
    param_4 = NULL;
  }
  return;
}



// Iterates through a multi-line string buffer and returns a pointer to the start of
// each null-terminated line.

long __stdcall16far
Parser_Get_Next_CSV_Line_Pointer_4dbc(void *this_ptr,void *buffer,long line_count)
{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  astruct_277 *uVar4;
  undefined2 uVar5;
  
  uVar4 = (astruct_277 *)this_ptr;
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  if (0x0 < line_count)
  {
    uVar4->field352_0x160 = buffer;
    uVar4->field353_0x164 = line_count;
  }
  pvVar1 = uVar4->field352_0x160;
  if ((pvVar1 == NULL) ||
     (lVar2 = uVar4->field353_0x164,
     uVar4->field353_0x164 = uVar4->field353_0x164 + -0x1, lVar2 == 0x0))
  {
    uVar4->field352_0x160 = NULL;
  }
  else
  {
    uVar3 = strlen_get_length(uVar4->field352_0x160);
    *(uint *)&uVar4->field352_0x160 = *(int *)&uVar4->field352_0x160 + uVar3 + 0x2;
  }
  return (long)pvVar1;
}



// Pre-processes a text buffer by replacing all newline and carriage return characters
// with null terminators. Returns the line count.

int __stdcall16far
Parser_Replace_Newlines_with_Nulls_4e34(u16 arg1,u16 arg2,long size,char *buffer)
{
  undefined2 in_stack_0000000e;
  int iStack_4;
  
  iStack_4 = 0x0;
  do
  {
    if (size == 0x0)
    {
      return iStack_4;
    }
    if (*_buffer == '\r')
    {
      iStack_4 += 0x1;
LAB_1030_4e5e:
      *_buffer = '\0';
    }
    else if (*_buffer == '\n') goto LAB_1030_4e5e;
    _buffer = (char *)CONCAT22(in_stack_0000000e,buffer + 0x1);
    size = size + -0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Opens a file via Win16 _lopen, allocates a buffer, reads the entire file content
// using _hread, and closes the file. Performs simple post-processing on the data.

u16 __stdcall16far
FileSystem_Read_File_to_Allocated_Buffer_4e70
          (void *arg1,void *out_size,int *out_handle_ptr,char *filename)
{
  HFILE16 h_file;
  int iVar1;
  int32_t iVar2;
  void *pvVar3;
  undefined2 unaff_SS;
  void *pvVar4;
  void *in_stack_00000010;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_14;
  
  _out_handle_ptr[0x0] = 0x0;
  _out_handle_ptr[0x1] = 0x0;
  *(undefined4 *)out_size = 0x0;
  if (in_stack_00000010 != NULL)
  {
    pvVar4 = FileSystem_Search_Resource_Path_Logic_5164(arg1,in_stack_00000010);
    iVar1 = (int)pvVar4;
    dos_multiple_interrupt_call_wrapper();
    if (iVar1 == 0x0)
    {
      *(undefined4 *)out_size = uStack_14;
      h_file = _lopen16(0x0,(char *)CONCAT22(unaff_SS,(char *)((ulong)pvVar4 >> 0x10)));
      iVar1 = h_file + 0x1;
      if (iVar1 != 0x0)
      {
        pvVar3 = heap_alloc_with_flags
                           (0x1,(int)*(undefined4 *)out_size,
                            (int)((ulong)*(undefined4 *)out_size >> 0x10),
                            (int)_g_AllocatedBlock_Offset,
                            (int)((ulong)_g_AllocatedBlock_Offset >> 0x10));
        *_out_handle_ptr = iVar1;
        out_handle_ptr[0x1] = (int)pvVar3;
        if (pvVar3 != NULL || *_out_handle_ptr != 0x0)
        {
          iVar2 = _hread16((int32_t)*(undefined4 *)out_size,*(void **)_out_handle_ptr,
                           h_file);
          uStack_38 = CONCAT22(pvVar3,iVar2);
          _lclose16(h_file);
          uStack_3c = *(byte **)_out_handle_ptr;
          while (uStack_38 != 0x0)
          {
            if ((*(byte *)(*uStack_3c + 0x608b) & 0x20) == 0x0)
            {
              *uStack_3c = *uStack_3c + 0x80;
            }
            uStack_3c = (byte *)CONCAT22((int)((ulong)uStack_3c >> 0x10),
                                         (byte *)uStack_3c + 0x1);
            uStack_38 = uStack_38 + -0x1;
          }
          return 0x1;
        }
      }
    }
  }
  return 0x0;
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
  undefined *in_DX;
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
      in_DX = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar4 = alloc_with_hooks((ulong)(uVar3 * 0x98),0x1,heap_ctx);
    *(undefined2 *)((int)arg1 + 0x12) = pvVar4;
    *(undefined2 *)((int)arg1 + 0x14) = in_DX;
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
  undefined *in_DX;
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
      in_DX = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar4 = alloc_with_hooks((ulong)(uVar3 * 0xae),0x1,heap_ctx);
    uStack_1c = (void *)CONCAT22(in_DX,pvVar4);
    if (in_DX == NULL && pvVar4 == NULL)
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



// Searches through a list of directory paths to find the specified filename. Returns
// the full concatenated path if the file exists.

void * __stdcall16far
FileSystem_Search_Resource_Path_Logic_5164(void *this_ptr,void *filename)
{
  char *pcVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 local_3a [0x2c];
  long lStack_e;
  undefined1 local_a [0x8];
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  init_long_pair(local_a,*(long *)((int)(void *)this_ptr + 0x568));
  do
  {
    lStack_e = get_next_list_item(local_a);
    if (lStack_e == 0x0)
    {
      return filename;
    }
    pcVar1 = (char *)((int)(void *)this_ptr + 0x168);
    strcpy_optimized((char *)CONCAT22(uVar3,pcVar1),
                     (char *)*(undefined4 *)((int)lStack_e + 0x4));
    strcat_append((char *)CONCAT22(uVar3,pcVar1),filename);
    puVar2 = local_3a;
    dos_multiple_interrupt_call_wrapper();
  } while (puVar2 != NULL);
  return (void *)CONCAT22(uVar3,pcVar1);
}



void __cdecl16far Simulator_Context_Initialize_Coordinate_Offsets_51eb(void)
{
  Simulator_Context_Initialize_Coordinate_Offsets_3b28();
  return;
}



undefined4 __stdcall16far UI_Struct_Zero_Init_A4_51f0(undefined4 param_1)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0xa4) = 0x0;
  *(undefined2 *)(iVar1 + 0xa6) = 0x0;
  *(undefined2 *)(iVar1 + 0xa8) = 0x0;
  *(undefined2 *)(iVar1 + 0xaa) = 0x0;
  *(undefined2 *)(iVar1 + 0xac) = 0x0;
  return param_1;
}



// Constructor for the 'GenKids' simulator command. Initializes base class with ID 12999
// and sets internal name 'SCGenKids'. Sets vtable to 0x55FE.

void * __stdcall16far
Simulator_Command_GenKids_ctor_init_521c(void *this_ptr,void *arg2)
{
  astruct_275 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x32c7);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_275 *)this_ptr;
  uVar1->field263_0x108 = arg2;
  *(undefined2 *)this_ptr = 0x55fe;
  uVar1->field2_0x2 = 0x1030;
  sprintf_wrapper(&uVar1->field7_0x8,uVar2,0x5714,0x1050,arg2);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves an entity from the simulator and triggers its virtual update callback at
// offset 0x14.

u16 __stdcall16far Simulator_Command_Update_Entity_vcall_14_Logic_5260(void *this_ptr)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)(void *)this_ptr + 0x108));
  puVar1 = (undefined2 *)((int)*puVar2 + 0x14);
  (*(code *)*puVar1)();
  return 0x1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_5290(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x10c));
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
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar6 + 0x108);
    *local_a = 0x55fe;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
}



// Constructor for the 'Select' simulator command. Initializes base class with ID 12999
// and sets internal name 'SCSelect'. Sets vtable to 0x55EE.

void * __stdcall16far Simulator_Command_Select_ctor_init_532e(void *this_ptr,void *arg2)
{
  astruct_274 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x32c7);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_274 *)this_ptr;
  uVar1->field260_0x108 = arg2;
  *(undefined2 *)this_ptr = 0x55ee;
  uVar1->field2_0x2 = 0x1030;
  sprintf_wrapper(&uVar1->field4_0x8,uVar2,0x5726,0x1050,uVar1->field3_0x4,
                  *(uint *)((int)&uVar1->field260_0x108 + 0x2) >> 0x8);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Resource_Manager_Dispatch_Set_Ptr_538a(undefined4 param_1)
{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  long context;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar1 = *(uint *)(iVar2 + 0x10a) >> 0x8;
  context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  if (uVar1 == 0x1)
  {
    UI_Component_Set_FarPtr_at_Offset_1A_Logic_2(context,*(long *)(iVar2 + 0x108));
  }
  else if (uVar1 == 0x2)
  {
    UI_Component_Set_FarPtr_at_Offset_16_Logic(context,*(long *)(iVar2 + 0x108));
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far Simulator_Dispatch_Entity_Event_53f4(undefined4 param_1)
{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  char cStack_123;
  undefined1 local_11e [0x10e];
  undefined4 local_10;
  undefined4 local_c;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar1 = *(undefined4 *)(iVar2 + 0x108);
  local_c._3_1_ = (char)((ulong)uVar1 >> 0x18);
  local_c = uVar1;
  if (local_c._3_1_ == -0x1)
  {
    Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
              (_p_SimulatorWorldContext,0x0,0x0,(int)*(undefined4 *)(iVar2 + 0x108),
               (int)((ulong)*(undefined4 *)(iVar2 + 0x108) >> 0x10),0x0,0x0);
  }
  else
  {
    uVar1 = *(undefined4 *)(iVar2 + 0x108);
    local_10._3_1_ = (char)((ulong)uVar1 >> 0x18);
    local_10 = (void *)uVar1;
    if (local_10._3_1_ == '\x03')
    {
      Simulator_Validate_and_Cleanup_Neighbor_Entities_e44a
                (_p_SimulatorWorldContext,*(long *)(iVar2 + 0x108));
    }
    else
    {
      Simulator_Batch_Process_Entities_in_Proximity_e372
                (_p_SimulatorWorldContext,(u8 *)(u8 *)*(undefined4 *)(iVar2 + 0x108),
                 (uint)((ulong)*(undefined4 *)(iVar2 + 0x108) >> 0x10));
    }
  }
  local_c._3_1_ = (char)((ulong)*(undefined4 *)(iVar2 + 0x108) >> 0x18);
  if (local_c._3_1_ != '\x03')
  {
    local_c = *(undefined4 *)(iVar2 + 0x108);
    Simulator_Command_GenKids_ctor_init_521c
              ((undefined1 *)CONCAT22(unaff_SS,local_11e),
               (void *)*(undefined4 *)(iVar2 + 0x108));
    local_10 = (void *)*_p_SimulatorGlobalState;
    UI_Build_Item_Process_Event_Type4_Logic_d566
              (local_10,(undefined1 *)CONCAT22(unaff_SS,local_11e));
    cStack_123 = (char)((ulong)*(undefined4 *)(iVar2 + 0x108) >> 0x18);
    if (cStack_123 == '\x02')
    {
      Simulator_Get_Entity_Object_from_PackedID_e1ec
                (_p_SimulatorWorldContext,(u8 *)(u8 *)*(undefined4 *)(iVar2 + 0x108));
      Resource_Manager_Set_Offset_E82_Logic
                ((void *)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10));
    }
  }
  return 0x1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_54f8(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x10c));
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
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar6 + 0x108);
    *local_a = 0x55ee;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_5596(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
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



// Constructor for a UI production item. Initializes base class, sets vtable to 0x5BD0,
// and zero-fills its internal metadata structure.

u16 * __stdcall16far UI_Production_Item_ctor_init_560e(void *this_ptr)
{
  astruct_273 *uVar1;
  undefined2 uVar2;
  
  UI_Window_with_List_ctor_init_17ce(this_ptr,(void *)0x64,(void *)0x1f4);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_273 *)this_ptr;
  uVar1->field15_0x10 = 0x0;
  zero_init_struct_6bytes(&uVar1->field_0x14);
  uVar1->field22_0x1a = 0x0;
  uVar1->field23_0x1c = 0x0;
  *(char **)this_ptr = (char *)s_procLo_1050_5bd0;
  uVar1->field2_0x2 = 0x1030;
  return (u16 *)uVar1;
}



// Parameterized constructor for a UI production item.

u16 * __stdcall16far UI_Production_Item_ctor_with_Params_565a(void *this_ptr,void *arg2)
{
  astruct_272 *uVar1;
  undefined2 uVar2;
  
  UI_Window_with_List_ctor_with_Params_183c
            (this_ptr,(void *)0x64,(void *)0x1f4,(void *)0x3000000,arg2);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_272 *)this_ptr;
  uVar1->field15_0x10 = 0x0;
  zero_init_struct_6bytes(&uVar1->field_0x14);
  uVar1->field22_0x1a = 0x0;
  uVar1->field23_0x1c = 0x0;
  *(char **)this_ptr = (char *)s_procLo_1050_5bd0;
  uVar1->field2_0x2 = 0x1030;
  return (u16 *)uVar1;
}



// Internal destructor for UI production items. Cleans up its internal sub-object and
// reverts vtables.

void __stdcall16far UI_Production_Item_dtor_Internal_56b0(void *this_ptr)
{
  void *ptr;
  astruct_271 *uVar3;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_271 *)this_ptr;
  *(char **)this_ptr = (char *)s_procLo_1050_5bd0;
  uVar3->field2_0x2 = 0x1030;
  ptr = (void *)*(void **)&uVar3->field_0x10;
  if (uVar3->field17_0x12 != 0x0 || ptr != NULL)
  {
    Simulator_Entity_Cleanup_Internal_84d0((void *)CONCAT22(uVar3->field17_0x12,ptr));
    free_if_not_null(ptr);
  }
  UI_Window_with_List_dtor_Internal_18b2(this_ptr);
  return;
}
