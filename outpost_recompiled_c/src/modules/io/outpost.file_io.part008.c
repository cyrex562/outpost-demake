/*
 * Source: outpost.c
 * Theme: file_io
 * Chunk: 8/9
 * Original lines (combined): 93298-101365
 * Boundaries: top-level declarations/definitions only
 */




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
  undefined *alloc_seg;
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
      alloc_seg = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar3 = alloc_with_hooks(0x20,0x1,heap_ctx);
    if (alloc_seg == NULL && pvVar3 == NULL)
    {
      uVar7 = 0x0;
      uVar6 = 0x0;
    }
    else
    {
      pvVar8 = Simulator_Entity_Init_State_84ae((void *)CONCAT22(alloc_seg,pvVar3));
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



undefined2 __stdcall16far
UI_Window_Massive_Object_State_Serialize_to_File_7418(void *param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  void *unaff_SS;
  long lVar6;
  void *this;
  void *struct_ptr;
  undefined2 local_3e;
  undefined2 local_2a [0x2];
  undefined1 local_26 [0xe];
  undefined4 local_18;
  long local_14 [0x2];
  undefined2 local_c;
  undefined4 local_a;
  undefined2 local_6 [0x2];
  
  uVar1 = UI_Window_Save_to_File_Logic_16d6(param_1,param_2);
  if (uVar1 == 0x0)
  {
    return 0x0;
  }
  iVar4 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  this = (void *)param_2;
  struct_ptr = (void *)((ulong)param_2 >> 0x10);
  iVar2 = file_context_serialize_3word_struct_logic(this,struct_ptr);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  local_c = *(undefined2 *)(iVar4 + 0x12);
  iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  local_6[0x0] = *(undefined2 *)(iVar4 + 0x14);
  iVar2 = file_write_check((long)param_2,local_6,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  local_18 = *(undefined4 *)(iVar4 + 0x16);
  iVar2 = file_write_check((long)param_2,&local_18,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  iVar2 = file_context_serialize_list_logic(this,struct_ptr);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  iVar2 = file_context_serialize_map_logic(this,struct_ptr);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  iVar2 = file_context_serialize_map_logic(this,struct_ptr);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  local_a = *(undefined4 *)(iVar4 + 0x2a);
  iVar2 = file_write_check((long)param_2,&local_a,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  local_c = *(undefined2 *)(iVar4 + 0x32);
  iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  local_c = *(undefined2 *)(iVar4 + 0x34);
  iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  file_context_serialize_contained_list_logic(this,struct_ptr);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  if (*(long *)(iVar4 + 0x3a) == 0x0)
  {
    local_18 = (ulong)local_18._2_2_ << 0x10;
  }
  else
  {
    local_18 = CONCAT22(local_18._2_2_,
                        *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x3a) + 0x8));
  }
  local_6[0x0] = (undefined2)local_18;
  iVar2 = file_write_check((long)param_2,local_6,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  init_long_pair(local_26,*(long *)(iVar4 + 0x3a));
  while( true )
  {
    local_14[0x0] = get_next_list_item(local_26);
    iVar2 = (int)((ulong)local_14[0x0] >> 0x10);
    if (iVar2 == 0x0 && (int)local_14[0x0] == 0x0)
    {
      if (*(long *)(iVar4 + 0x3e) == 0x0)
      {
        local_3e = 0x0;
      }
      else
      {
        local_3e = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x3e) + 0x8);
      }
      local_2a[0x0] = local_3e;
      iVar2 = file_write_check((long)param_2,local_2a,unaff_SS);
      if (iVar2 == 0x0)
      {
        g_LastFileErrorMsgID = (undefined *)0x6d0;
        return 0x0;
      }
      init_long_pair(local_26,*(long *)(iVar4 + 0x3e));
      while( true )
      {
        lVar6 = get_next_list_item(local_26);
        iVar2 = (int)((ulong)lVar6 >> 0x10);
        iVar4 = (int)lVar6;
        if (iVar2 == 0x0 && iVar4 == 0x0)
        {
          return 0x1;
        }
        local_18 = CONCAT22(local_18._2_2_,*(undefined2 *)(iVar4 + 0x4));
        iVar3 = file_write_check((long)param_2,&local_18,unaff_SS);
        if (iVar3 == 0x0)
        {
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
        local_14[0x0] = CONCAT22(local_14[0x0]._2_2_,*(undefined2 *)(iVar4 + 0x6));
        iVar3 = file_write_check((long)param_2,local_14,unaff_SS);
        if (iVar3 == 0x0)
        {
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
        local_c = *(undefined2 *)(iVar4 + 0x8);
        iVar3 = file_write_check((long)param_2,&local_c,unaff_SS);
        if (iVar3 == 0x0) break;
        local_c = *(undefined2 *)(iVar4 + 0xa);
        iVar3 = file_write_check((long)param_2,&local_c,unaff_SS);
        if (iVar3 == 0x0)
        {
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
        local_6[0x0] = *(undefined2 *)(iVar4 + 0xc);
        iVar4 = file_write_check((long)param_2,local_6,unaff_SS);
        if (iVar4 == 0x0)
        {
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
      }
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    local_6[0x0] = *(undefined2 *)((int)local_14[0x0] + 0x4);
    iVar2 = file_write_check((long)param_2,local_6,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    local_6[0x0] = *(undefined2 *)((int)local_14[0x0] + 0x6);
    iVar2 = file_write_check((long)param_2,local_6,unaff_SS);
    if (iVar2 == 0x0) break;
    local_6[0x0] = *(undefined2 *)((int)local_14[0x0] + 0x8);
    iVar2 = file_write_check((long)param_2,local_6,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    local_6[0x0] = *(undefined2 *)((int)local_14[0x0] + 0xa);
    iVar2 = file_write_check((long)param_2,local_6,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    local_6[0x0] = *(undefined2 *)((int)local_14[0x0] + 0xc);
    iVar2 = file_write_check((long)param_2,local_6,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
UI_Window_Massive_Object_State_Deserialize_from_File_778c(u32 param_1,void *param_2)
{
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  astruct_491 *paVar6;
  int iVar7;
  void *handle_wrapper;
  uint alloc_seg;
  uint uVar8;
  uint extraout_DX;
  uint uVar9;
  uint extraout_DX_00;
  undefined2 uVar10;
  void *unaff_SS;
  void *pvVar11;
  long *list_ptr;
  uint in_stack_0000ffaa;
  uint local_52;
  astruct_491 *local_4a;
  undefined2 local_46 [0x2];
  undefined2 local_42 [0x2];
  void *local_3e [0x3];
  undefined4 local_32;
  undefined2 local_2e;
  astruct_491 *local_2c;
  undefined2 local_28 [0x2];
  undefined2 local_24 [0x2];
  uint local_20 [0x9];
  uint local_e;
  undefined2 local_4;
  
  pvVar5 = (void *)param_2;
  list_ptr = (long *)((ulong)param_2 >> 0x10);
  uVar2 = UI_Window_Load_from_File_Logic_1730(param_1,pvVar5);
  if (uVar2 != 0x0)
  {
    iVar3 = (int)param_1;
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar4 = file_context_deserialize_3word_struct_logic(pvVar5,list_ptr);
    if ((iVar4 != 0x0) &&
       (iVar4 = file_read_check((long)param_2,&local_4,unaff_SS), iVar4 != 0x0))
    {
      *(undefined2 *)(iVar3 + 0x12) = local_4;
      iVar4 = file_read_check((long)param_2,&local_4,unaff_SS);
      if (iVar4 != 0x0)
      {
        *(undefined2 *)(iVar3 + 0x14) = local_4;
        iVar4 = file_read_check((long)param_2,(void *)(iVar3 + 0x16),handle_wrapper);
        if ((((iVar4 != 0x0) &&
             (iVar4 = file_context_deserialize_list_logic(pvVar5,list_ptr), iVar4 != 0x0
             )) && (iVar4 = file_context_deserialize_map_logic(pvVar5,list_ptr),
                   iVar4 != 0x0)) &&
           ((iVar4 = file_context_deserialize_map_logic(pvVar5,list_ptr), iVar4 != 0x0
            && (iVar4 = file_read_check((long)param_2,(void *)(iVar3 + 0x2a),
                                        handle_wrapper), iVar4 != 0x0))))
        {
          if (*(long *)(iVar3 + 0x2a) != 0x0)
          {
            pvVar11 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                                (_p_SimulatorWorldContext,
                                 (u8 *)(u8 *)*(undefined4 *)(iVar3 + 0x2a));
            alloc_seg = (uint)((ulong)pvVar11 >> 0x10);
            *(undefined2 *)(iVar3 + 0x2e) = (void *)pvVar11;
            *(uint *)(iVar3 + 0x30) = alloc_seg;
          }
          if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
          {
            return 0x1;
          }
          iVar4 = file_read_check((long)param_2,(void *)(iVar3 + 0x32),handle_wrapper);
          if (((iVar4 != 0x0) &&
              (iVar4 = file_read_check((long)param_2,(void *)(iVar3 + 0x34),
                                       handle_wrapper), iVar4 != 0x0)) &&
             ((iVar4 = file_context_deserialize_resource_object_logic(pvVar5,list_ptr),
              iVar4 != 0x0 &&
              (iVar4 = file_read_check((long)param_2,local_20,unaff_SS), iVar4 != 0x0)))
             )
          {
            for (local_e = 0x0; local_e < local_20[0x0]; local_e += 0x1)
            {
              local_3e[0x0] = _p_Pool_Type4_Timer;
              paVar6 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
              local_32 = (astruct_491 *)CONCAT22(alloc_seg,paVar6);
              uVar9 = alloc_seg | (uint)paVar6;
              if (uVar9 == 0x0)
              {
                local_2c = NULL;
              }
              else
              {
                *(char **)&local_32->field0_0x0 = (char *)s_1_1050_389a;
                *(undefined2 *)((int)&paVar6->field0_0x0 + 0x2) = 0x1008;
                *(undefined2 *)&paVar6->field1_0x4 = 0x0;
                *(undefined2 *)((int)&paVar6->field1_0x4 + 0x2) = 0x0;
                paVar6->field2_0x8 = 0x0;
                paVar6->field3_0xa = 0x0;
                *(undefined2 *)&(paVar6 + 0x1)->field0_0x0 = 0x0;
                *(undefined2 *)&local_32->field0_0x0 = 0x56ce;
                *(undefined2 *)((int)&paVar6->field0_0x0 + 0x2) = 0x1018;
                local_2c = local_32;
              }
              iVar4 = file_read_check((long)param_2,local_28,unaff_SS);
              if ((((iVar4 == 0x0) ||
                   (iVar4 = file_read_check((long)param_2,local_24,unaff_SS),
                   iVar4 == 0x0)) ||
                  (iVar4 = file_read_check((long)param_2,&local_2e,unaff_SS),
                  iVar4 == 0x0)) ||
                 ((iVar4 = file_read_check((long)param_2,(void *)((int)local_2c + 0xa),
                                           (void *)((ulong)local_2c >> 0x10)),
                  iVar4 == 0x0 ||
                  (iVar4 = file_read_check((long)param_2,(void *)((int)local_2c + 0xc),
                                           (void *)((ulong)local_2c >> 0x10)),
                  iVar4 == 0x0)))) goto LAB_1030_77be;
              uVar10 = (undefined2)((ulong)local_2c >> 0x10);
              iVar4 = (int)local_2c;
              *(undefined2 *)(iVar4 + 0x4) = local_28[0x0];
              *(undefined2 *)(iVar4 + 0x6) = local_24[0x0];
              *(undefined2 *)(iVar4 + 0x8) = local_2e;
              if (*(long *)(iVar3 + 0x3a) == 0x0)
              {
                paVar6 = allocate_memory(CONCAT22(in_stack_0000ffaa,0xc));
                local_32 = (astruct_491 *)CONCAT22(uVar9,paVar6);
                uVar8 = uVar9 | (uint)paVar6;
                if (uVar8 == 0x0)
                {
                  *(undefined4 *)(iVar3 + 0x3a) = 0x0;
                }
                else
                {
                  pvVar5 = construct_object_with_vtable(paVar6,uVar9);
                  *(undefined2 *)(iVar3 + 0x3a) = pvVar5;
                  *(uint *)(iVar3 + 0x3c) = uVar8;
                }
              }
              puVar1 = (undefined2 *)
                       ((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x3a) + 0x8);
              (*(code *)*puVar1)();
              alloc_seg = extraout_DX;
            }
            iVar4 = file_read_check((long)param_2,&stack0xffaa,unaff_SS);
            if (iVar4 != 0x0)
            {
              local_52 = 0x0;
              while( true )
              {
                if (in_stack_0000ffaa <= local_52)
                {
                  return 0x1;
                }
                local_2c = _p_Pool_Type4_Timer;
                paVar6 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
                local_32 = (astruct_491 *)CONCAT22(alloc_seg,paVar6);
                uVar9 = alloc_seg | (uint)paVar6;
                if (uVar9 == 0x0)
                {
                  local_4a = NULL;
                }
                else
                {
                  *(char **)&local_32->field0_0x0 = (char *)s_1_1050_389a;
                  *(undefined2 *)((int)&paVar6->field0_0x0 + 0x2) = 0x1008;
                  *(undefined2 *)&paVar6->field1_0x4 = 0x0;
                  *(undefined2 *)((int)&paVar6->field1_0x4 + 0x2) = 0x0;
                  paVar6->field2_0x8 = 0x0;
                  paVar6->field3_0xa = 0x0;
                  *(undefined2 *)&(paVar6 + 0x1)->field0_0x0 = 0x0;
                  *(undefined2 *)&local_32->field0_0x0 = 0x56ce;
                  *(undefined2 *)((int)&paVar6->field0_0x0 + 0x2) = 0x1018;
                  local_4a = local_32;
                }
                iVar4 = file_read_check((long)param_2,local_46,unaff_SS);
                if (((iVar4 == 0x0) ||
                    (iVar4 = file_read_check((long)param_2,local_42,unaff_SS),
                    iVar4 == 0x0)) ||
                   (iVar4 = file_read_check((long)param_2,local_3e,unaff_SS),
                   iVar4 == 0x0)) break;
                iVar4 = (int)local_4a;
                pvVar5 = (void *)((ulong)local_4a >> 0x10);
                iVar7 = file_read_check((long)param_2,(void *)(iVar4 + 0xa),pvVar5);
                if ((iVar7 == 0x0) ||
                   (iVar7 = file_read_check((long)param_2,(void *)(iVar4 + 0xc),pvVar5),
                   iVar7 == 0x0)) break;
                *(undefined2 *)(iVar4 + 0x4) = local_46[0x0];
                *(undefined2 *)(iVar4 + 0x6) = local_42[0x0];
                *(undefined2 *)(iVar4 + 0x8) = (void *)local_3e[0x0];
                if (*(long *)(iVar3 + 0x3e) == 0x0)
                {
                  paVar6 = allocate_memory(CONCAT22(in_stack_0000ffaa,0xc));
                  local_32 = (astruct_491 *)CONCAT22(uVar9,paVar6);
                  uVar8 = uVar9 | (uint)paVar6;
                  if (uVar8 == 0x0)
                  {
                    *(undefined4 *)(iVar3 + 0x3e) = 0x0;
                  }
                  else
                  {
                    pvVar5 = construct_object_with_vtable(paVar6,uVar9);
                    *(undefined2 *)(iVar3 + 0x3e) = pvVar5;
                    *(uint *)(iVar3 + 0x40) = uVar8;
                  }
                }
                puVar1 = (undefined2 *)
                         ((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x3e) + 0x8);
                (*(code *)*puVar1)();
                local_52 += 0x1;
                alloc_seg = extraout_DX_00;
              }
            }
          }
        }
      }
    }
LAB_1030_77be:
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



// Serializes a complex list structure and its linked items to a save file. Iterates
// through the list and triggers per-item serialization.

u16 __stdcall16far
Simulator_Complex_List_Save_to_File_Logic_b768(void *this_ptr,void *file_ctx)
{
  int iVar1;
  u16 uVar2;
  astruct_187 *uVar3;
  undefined2 uVar4;
  void *unaff_SS;
  long lVar5;
  undefined2 local_22 [0x4];
  undefined1 local_1a [0xa];
  u32 local_10;
  undefined4 uStack_c;
  u16 local_8 [0x3];
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_187 *)this_ptr;
  local_10 = uVar3->field4_0x4;
  iVar1 = file_write_check((long)file_ctx,&local_10,unaff_SS);
  if ((iVar1 != 0x0) &&
     (iVar1 = file_context_serialize_3word_struct_logic
                        ((void *)file_ctx,(void *)((ulong)file_ctx >> 0x10)),
     iVar1 != 0x0))
  {
    local_8[0x0] = uVar3->field11_0xe;
    iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
    if (iVar1 != 0x0)
    {
      local_22[0x0] = *(undefined2 *)((int)uVar3->field12_0x10 + 0x8);
      local_10 = CONCAT22(local_10._2_2_,local_22[0x0]);
      iVar1 = file_write_check((long)file_ctx,local_22,unaff_SS);
      if (iVar1 == 0x0)
      {
        return 0x0;
      }
      init_long_pair(local_1a,uVar3->field12_0x10);
      do
      {
        lVar5 = get_next_list_item(local_1a);
        if (lVar5 == 0x0)
        {
          return 0x1;
        }
        uStack_c = lVar5;
        uVar2 = Simulator_Resource_List_Save_to_File_Logic_75ca
                          ((int)lVar5,(int)((ulong)lVar5 >> 0x10),file_ctx);
      } while (uVar2 != 0x0);
      return 0x0;
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



// Deserializes a complex list structure and its linked items from a save file.
// Reconstructs the list hierarchy and performs object re-mapping.

u16 __stdcall16far
Simulator_Complex_List_Load_from_File_Logic_b836(void *this_ptr,void *file_ctx)
{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  u16 uVar5;
  void *handle_wrapper;
  int alloc_seg;
  undefined2 uVar6;
  int extraout_DX;
  void *unaff_SS;
  void *pvVar7;
  void *file_ctx_00;
  int local_12 [0x7];
  undefined2 local_4;
  
  pvVar2 = (void *)this_ptr;
  handle_wrapper = (void *)((ulong)this_ptr >> 0x10);
  iVar3 = file_read_check((long)file_ctx,(void *)((int)pvVar2 + 0x4),handle_wrapper);
  if (iVar3 != 0x0)
  {
    iVar3 = file_context_deserialize_3word_struct_logic
                      ((void *)file_ctx,(void *)((ulong)file_ctx >> 0x10));
    if ((iVar3 != 0x0) &&
       (iVar3 = file_read_check((long)file_ctx,&local_4,unaff_SS), iVar3 != 0x0))
    {
      *(undefined2 *)((int)pvVar2 + 0xe) = local_4;
      iVar3 = file_read_check((long)file_ctx,local_12,unaff_SS);
      if (iVar3 == 0x0)
      {
        return 0x0;
      }
      while( true )
      {
        if (local_12[0x0] == 0x0)
        {
          return 0x1;
        }
        local_12[0x0] = local_12[0x0] + -0x1;
        file_ctx_00 = file_ctx;
        pvVar4 = allocate_memory(CONCAT22((void *)file_ctx,0x2a));
        if (alloc_seg == 0x0 && pvVar4 == NULL)
        {
          pvVar4 = NULL;
          uVar6 = 0x0;
        }
        else
        {
          pvVar7 = Simulator_Resource_Change_Item_ctor_init_6520
                             ((void *)CONCAT22(alloc_seg,pvVar4));
          uVar6 = (undefined2)((ulong)pvVar7 >> 0x10);
          pvVar4 = (void *)pvVar7;
        }
        uVar5 = Simulator_Resource_List_Load_from_File_Logic_774e
                          ((void *)CONCAT22(uVar6,pvVar4),file_ctx_00);
        if (uVar5 == 0x0) break;
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)pvVar2 + 0x10) + 0x4);
        (*(code *)*puVar1)();
        alloc_seg = extraout_DX;
      }
      return 0x0;
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
}



// Serializes UI build item Type 0xC68E to a save file, including base state and
// specialized counters at offsets 0x20 and 0x24.

u16 __stdcall16far
UI_Build_Item_TypeC68E_Save_to_File_Logic_c230(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  undefined4 local_10 [0x2];
  undefined2 local_8 [0x3];
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(this_ptr,file_ctx);
  if (uVar1 != 0x0)
  {
    uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
    local_10[0x0] = *(undefined4 *)((int)(void *)this_ptr + 0x20);
    iVar2 = file_write_check((long)file_ctx,local_10,unaff_SS);
    if (iVar2 != 0x0)
    {
      local_8[0x0] = *(undefined2 *)((int)(void *)this_ptr + 0x24);
      iVar2 = file_write_check((long)file_ctx,local_8,unaff_SS);
      if (iVar2 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



undefined2 __stdcall16far
UI_Build_Item_Deserialize_and_Update_20_24_c29c(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  void *handle_wrapper;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  if (uVar1 != 0x0)
  {
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar2 = file_read_check((long)param_2,(void *)((int)param_1 + 0x20),handle_wrapper);
    if (iVar2 != 0x0)
    {
      iVar2 = file_read_check((long)param_2,(void *)((int)param_1 + 0x24),handle_wrapper
                             );
      if (iVar2 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}
