/*
 * Source: outpost.c
 * Theme: file_io
 * Chunk: 7/9
 * Original lines (combined): 86331-93297
 * Boundaries: top-level declarations/definitions only
 */




// Serializes a collection of world entities to a file. Writes the count, then iterates
// through each entity using its virtual serialization callback (offset 0xC).

u16 __stdcall16far
Simulator_Save_Entity_Collection_to_File_e56c
          (u16 arg1,u16 arg2,void *file_ctx,void *collection_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  void *unaff_SS;
  long local_2a [0x3];
  undefined4 *puStack_1c;
  long lStack_18;
  undefined1 local_14 [0x8];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  int iStack_4;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,(u16)collection_ptr,
             (uint)((ulong)collection_ptr >> 0x10));
  lStack_18 = 0x0;
  while (puStack_1c = Simulator_World_Iterator_Get_Next_Entity_e4ec
                                ((undefined1 *)CONCAT22(unaff_SS,local_14)),
        (int)((ulong)puStack_1c >> 0x10) != 0x0 || (undefined4 *)puStack_1c != NULL)
  {
    lStack_18 += 0x1;
  }
  local_2a[0x0] = lStack_18;
  iVar2 = file_write_check((long)file_ctx,local_2a,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  else
  {
    uStack_c = uStack_8;
    uStack_a = uStack_6;
    if (iStack_4 != 0x0)
    {
      uStack_c = 0x1;
      uStack_a = 0x0;
    }
    do
    {
      puStack_1c = Simulator_World_Iterator_Get_Next_Entity_e4ec
                             ((undefined1 *)CONCAT22(unaff_SS,local_14));
      if (puStack_1c == NULL)
      {
        return 0x1;
      }
      puVar1 = (undefined2 *)((int)*puStack_1c + 0xc);
      iVar2 = (*(code *)*puVar1)(0x1008,puStack_1c,file_ctx);
      local_2a[0x0] = CONCAT22(local_2a[0x0]._2_2_,iVar2);
    } while (iVar2 != 0x0);
  }
  return 0x0;
}



// Serializes the core window state (two 4-byte fields at offsets 4 and 8) to a save
// game file.

u16 __stdcall16far UI_Window_Save_to_File_Logic_16d6(void *this_ptr,void *file_ctx)
{
  int iVar1;
  undefined2 uVar2;
  void *unaff_SS;
  undefined4 local_10 [0x2];
  undefined4 local_8;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  local_10[0x0] = *(undefined4 *)((int)this_ptr + 0x4);
  iVar1 = file_write_check((long)file_ctx,local_10,unaff_SS);
  if (iVar1 != 0x0)
  {
    local_8 = *(undefined4 *)((int)this_ptr + 0x8);
    iVar1 = file_write_check((long)file_ctx,&local_8,unaff_SS);
    if (iVar1 != 0x0)
    {
      return 0x1;
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



// Deserializes the core window state (two 4-byte fields at offsets 4 and 8) from a save
// game file.

u16 __stdcall16far UI_Window_Load_from_File_Logic_1730(u32 this_ptr,void *file_ctx)
{
  int iVar1;
  void *handle_wrapper;
  undefined2 in_stack_0000000a;
  
  handle_wrapper = (void *)(this_ptr >> 0x10);
  iVar1 = file_read_check((long)_file_ctx,(void *)((int)this_ptr + 0x4),handle_wrapper);
  if (iVar1 != 0x0)
  {
    iVar1 = file_read_check((long)_file_ctx,(void *)((int)this_ptr + 0x8),handle_wrapper
                           );
    if (iVar1 != 0x0)
    {
      return 0x1;
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
}



// Serializes a UI window and its associated managed list (offset 0xC) to a save game
// file.

int __stdcall16far
UI_Window_with_List_Save_to_File_Logic_1978(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  
  uVar1 = UI_Window_Save_to_File_Logic_16d6(this_ptr,file_ctx);
  iVar2 = 0x0;
  if (uVar1 != 0x0)
  {
    iVar2 = file_context_serialize_list_logic
                      ((void *)file_ctx,(void *)((ulong)file_ctx >> 0x10));
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    iVar2 = 0x1;
  }
  return iVar2;
}



// Deserializes a UI window and its associated managed list (offset 0xC) from a save
// game file.

int __stdcall16far
UI_Window_with_List_Load_from_File_Logic_19b4(u32 this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  long *in_stack_0000000a;
  
  uVar1 = UI_Window_Load_from_File_Logic_1730(this_ptr,file_ctx);
  iVar2 = 0x0;
  if (uVar1 != 0x0)
  {
    iVar2 = file_context_deserialize_list_logic(file_ctx,in_stack_0000000a);
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
UI_Window_Simple_List_Serialize_to_File_1a9c(void *param_1,void *param_2)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined2 uVar4;
  void *unaff_SS;
  undefined2 local_c [0x5];
  
  iVar2 = UI_Window_with_List_Save_to_File_Logic_1978(param_1,param_2);
  if (iVar2 != 0x0)
  {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    pvVar3 = (void *)param_1;
    local_c[0x0] = *(undefined2 *)*(undefined4 *)((int)pvVar3 + 0x10);
    iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
    if (iVar2 != 0x0)
    {
      if (*(int *)*(undefined4 *)((int)pvVar3 + 0x10) == 0x0)
      {
        return 0x1;
      }
      pvVar1 = (void *)*(undefined4 *)((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0x2);
      iVar2 = file_write_check((long)param_2,(void *)pvVar1,
                               (void *)((ulong)pvVar1 >> 0x10));
      if (iVar2 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



u16 __stdcall16far UI_Window_Type227A_Save_to_File_Logic(void *param_1,void *param_2)
{
  int iVar1;
  void *pvVar2;
  void *handle_wrapper;
  
  iVar1 = UI_Window_with_List_Save_to_File_Logic_1978(param_1,param_2);
  if (iVar1 != 0x0)
  {
    pvVar2 = (void *)param_1;
    handle_wrapper = (void *)((ulong)param_1 >> 0x10);
    iVar1 = file_write_check((long)param_2,(void *)((int)pvVar2 + 0x10),handle_wrapper);
    if (iVar1 != 0x0)
    {
      iVar1 = file_write_check((long)param_2,(void *)((int)pvVar2 + 0x116),
                               handle_wrapper);
      if (iVar1 != 0x0)
      {
        iVar1 = file_write_check((long)param_2,(void *)((int)pvVar2 + 0x19c),
                                 handle_wrapper);
        if (iVar1 != 0x0)
        {
          iVar1 = file_write_check((long)param_2,(void *)((int)pvVar2 + 0x1a6),
                                   handle_wrapper);
          if (iVar1 != 0x0)
          {
            iVar1 = file_write_check((long)param_2,(void *)((int)pvVar2 + 0x2ac),
                                     handle_wrapper);
            if (iVar1 != 0x0)
            {
              return 0x1;
            }
          }
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



u16 __stdcall16far UI_Window_Type232E_Load_from_File_Logic(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  void *handle_wrapper;
  
  iVar1 = UI_Window_with_List_Load_from_File_Logic_19b4(param_1,(void *)param_2);
  if (iVar1 != 0x0)
  {
    iVar1 = (int)param_1;
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x10),handle_wrapper);
    if (iVar2 != 0x0)
    {
      iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x116),handle_wrapper);
      if (iVar2 != 0x0)
      {
        iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x19c),handle_wrapper);
        if (iVar2 != 0x0)
        {
          iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x1a6),handle_wrapper);
          if (iVar2 != 0x0)
          {
            iVar1 = file_read_check((long)param_2,(void *)(iVar1 + 0x2ac),handle_wrapper
                                   );
            if (iVar1 != 0x0)
            {
              return 0x1;
            }
          }
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



undefined2 __stdcall16far
UI_Window_Complex_Serialize_to_File_2aca(void *param_1,void *param_2)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined2 uVar4;
  void *unaff_SS;
  char *str;
  undefined4 local_18 [0x3];
  undefined2 local_c [0x3];
  undefined2 local_6 [0x2];
  
  iVar2 = UI_Window_with_List_Save_to_File_Logic_1978(param_1,param_2);
  if (iVar2 == 0x0)
  {
    return 0x0;
  }
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar3 = (void *)param_1;
  local_c[0x0] = *(undefined2 *)*(undefined4 *)((int)pvVar3 + 0x10);
  iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
  if (iVar2 != 0x0)
  {
    str = (char *)((ulong)param_2 >> 0x10);
    iVar2 = file_context_write_string_with_terminator_logic((void *)param_2,str);
    if ((iVar2 != 0x0) &&
       (iVar2 = file_context_serialize_3word_struct_logic((void *)param_2,str),
       iVar2 != 0x0))
    {
      local_6[0x0] = *(undefined2 *)((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0xc);
      iVar2 = file_write_check((long)param_2,local_6,unaff_SS);
      if (iVar2 != 0x0)
      {
        local_18[0x0] = *(undefined4 *)((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0xe);
        iVar2 = file_write_check((long)param_2,local_18,unaff_SS);
        if ((iVar2 != 0x0) &&
           (iVar2 = file_write_check((long)param_2,
                                     (void *)((int)*(undefined4 *)((int)pvVar3 + 0x10) +
                                             0x12),
                                     (void *)((ulong)*(undefined4 *)((int)pvVar3 + 0x10)
                                             >> 0x10)), iVar2 != 0x0))
        {
          local_c[0x0] = *(undefined2 *)
                          ((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0x22);
          iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
          if ((iVar2 != 0x0) &&
             ((*(int *)((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0x22) == 0x0 ||
              (pvVar1 = (void *)*(undefined4 *)
                                 ((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0x24),
              iVar2 = file_write_check((long)param_2,(void *)pvVar1,
                                       (void *)((ulong)pvVar1 >> 0x10)), iVar2 != 0x0)))
             )
          {
            local_c[0x0] = *(undefined2 *)((int)pvVar3 + 0x14);
            iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
            if (iVar2 != 0x0)
            {
              local_c[0x0] = *(undefined2 *)((int)pvVar3 + 0x16);
              iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
              if (iVar2 != 0x0)
              {
                local_c[0x0] = *(undefined2 *)((int)pvVar3 + 0x18);
                iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
                if (iVar2 != 0x0)
                {
                  local_c[0x0] = *(undefined2 *)((int)pvVar3 + 0x1a);
                  iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
                  if (iVar2 != 0x0)
                  {
                    return 0x1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
UI_Window_Complex_List_Deserialize_from_File_2c8a(u32 param_1,void *param_2)
{
  void *pvVar1;
  int iVar2;
  undefined *heap_ctx;
  void *pvVar3;
  char *pcVar4;
  void *pvVar5;
  undefined *alloc_seg;
  undefined2 unaff_SI;
  undefined2 uVar6;
  void *unaff_SS;
  long context;
  int iVar7;
  void *handle_wrapper;
  char *buffer;
  undefined4 local_40e;
  undefined2 local_406;
  undefined2 local_404;
  char local_402 [0x400];
  
  pvVar5 = (void *)param_2;
  iVar7 = (int)param_1;
  handle_wrapper = (void *)(param_1 >> 0x10);
  iVar2 = UI_Window_with_List_Load_from_File_Logic_19b4(param_1,pvVar5);
  if (iVar2 == 0x0)
  {
    return 0x0;
  }
  if (_g_AllocatedBlock_Offset == NULL)
  {
    heap_ctx = init_memory_allocator();
  }
  else
  {
    alloc_seg = g_AllocatedBlock_Segment;
    heap_ctx = g_AllocatedBlock_Offset;
  }
  pvVar3 = alloc_with_hooks(0x28,0x1,heap_ctx);
  local_40e = (void *)CONCAT22(alloc_seg,pvVar3);
  if (alloc_seg == NULL && pvVar3 == NULL)
  {
    *(undefined4 *)(iVar7 + 0x10) = 0x0;
    alloc_seg = NULL;
  }
  else
  {
    zero_init_struct_6bytes((void *)((int)pvVar3 + 0x6));
    *(undefined4 *)(iVar7 + 0x10) = local_40e;
  }
  iVar2 = file_read_check((long)param_2,(void *)(void *)*(undefined4 *)(iVar7 + 0x10),
                          (void *)((ulong)*(undefined4 *)(iVar7 + 0x10) >> 0x10));
  if (iVar2 != 0x0)
  {
    pcVar4 = local_402;
    buffer = (char *)((ulong)param_2 >> 0x10);
    file_context_read_null_terminated_string_logic(pvVar5,buffer);
    if (pcVar4 != NULL)
    {
      pcVar4 = strdup_allocate(local_402);
      uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x10) >> 0x10);
      iVar2 = (int)*(undefined4 *)(iVar7 + 0x10);
      *(undefined2 *)(iVar2 + 0x2) = pcVar4;
      *(undefined2 *)(iVar2 + 0x4) = alloc_seg;
      iVar2 = file_context_deserialize_3word_struct_logic(pvVar5,buffer);
      if ((((iVar2 != 0x0) &&
           (iVar2 = file_read_check((long)param_2,
                                    (void *)((int)*(undefined4 *)(iVar7 + 0x10) + 0xc),
                                    (void *)((ulong)*(undefined4 *)(iVar7 + 0x10) >>
                                            0x10)), iVar2 != 0x0)) &&
          (iVar2 = file_read_check((long)param_2,
                                   (void *)((int)*(undefined4 *)(iVar7 + 0x10) + 0xe),
                                   (void *)((ulong)*(undefined4 *)(iVar7 + 0x10) >> 0x10
                                           )), iVar2 != 0x0)) &&
         ((iVar2 = file_read_check((long)param_2,
                                   (void *)((int)*(undefined4 *)(iVar7 + 0x10) + 0x12),
                                   (void *)((ulong)*(undefined4 *)(iVar7 + 0x10) >> 0x10
                                           )), iVar2 != 0x0 &&
          (iVar2 = file_read_check((long)param_2,
                                   (void *)((int)*(undefined4 *)(iVar7 + 0x10) + 0x22),
                                   (void *)((ulong)*(undefined4 *)(iVar7 + 0x10) >> 0x10
                                           )), iVar2 != 0x0))))
      {
        if (*(int *)((int)*(undefined4 *)(iVar7 + 0x10) + 0x22) != 0x0)
        {
          uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x10) >> 0x10);
          iVar2 = (int)*(undefined4 *)(iVar7 + 0x10);
          pvVar5 = allocate_memory(CONCAT22(unaff_SI,*(int *)(iVar2 + 0x22) * 0x2));
          *(undefined2 *)(iVar2 + 0x24) = pvVar5;
          *(undefined2 *)(iVar2 + 0x26) = alloc_seg;
          pvVar1 = (void *)*(undefined4 *)((int)*(undefined4 *)(iVar7 + 0x10) + 0x24);
          iVar2 = file_read_check((long)param_2,(void *)pvVar1,
                                  (void *)((ulong)pvVar1 >> 0x10));
          if (iVar2 == 0x0)
          {
            g_LastFileErrorMsgID = (undefined *)0x6d2;
            return 0x0;
          }
        }
        iVar2 = file_read_check((long)param_2,(void *)(iVar7 + 0x14),handle_wrapper);
        if (((iVar2 != 0x0) &&
            (iVar2 = file_read_check((long)param_2,&local_404,unaff_SS), iVar2 != 0x0))
           && ((iVar2 = file_read_check((long)param_2,(void *)(iVar7 + 0x18),
                                        handle_wrapper), iVar2 != 0x0 &&
               (iVar2 = file_read_check((long)param_2,&local_406,unaff_SS), iVar2 != 0x0
               ))))
        {
          *(undefined2 *)(iVar7 + 0x16) = local_404;
          *(undefined2 *)(iVar7 + 0x1a) = local_406;
          context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
          UI_Component_Set_FarPtr_at_Offset_16_Logic(context,*(long *)(iVar7 + 0x4));
          Resource_Manager_Set_Offset_E82_Logic
                    ((void *)_p_GlobalResourceManager,
                     (int)((ulong)_p_GlobalResourceManager >> 0x10));
          return 0x1;
        }
      }
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
}



// Serializes the entire Colony object state to a save file, including all internal
// resource and population buffers.

short __stdcall16far
Colony_Object_Save_to_File_Logic_32e4(void *this_ptr,void *file_ctx)
{
  int iVar1;
  void *unaff_SS;
  long in_stack_00000008;
  undefined4 local_16 [0x2];
  undefined2 local_c;
  undefined4 local_a [0x2];
  
  iVar1 = file_write_check(in_stack_00000008,(void *)((int)this_ptr + 0x4),file_ctx);
  if (iVar1 != 0x0)
  {
    iVar1 = file_write_check(in_stack_00000008,(void *)((int)this_ptr + 0x174),file_ctx)
    ;
    if (iVar1 != 0x0)
    {
      iVar1 = file_write_check(in_stack_00000008,(void *)((int)this_ptr + 0x180),
                               file_ctx);
      if (iVar1 != 0x0)
      {
        iVar1 = file_write_check(in_stack_00000008,(void *)((int)this_ptr + 0x18c),
                                 file_ctx);
        if (iVar1 != 0x0)
        {
          local_c = *(undefined2 *)((int)this_ptr + 0x1a8);
          iVar1 = file_write_check(in_stack_00000008,&local_c,unaff_SS);
          if (iVar1 != 0x0)
          {
            local_16[0x0] = *(undefined4 *)((int)this_ptr + 0x1aa);
            iVar1 = file_write_check(in_stack_00000008,local_16,unaff_SS);
            if (iVar1 != 0x0)
            {
              local_a[0x0] = *(undefined4 *)((int)this_ptr + 0x170);
              iVar1 = file_write_check(in_stack_00000008,local_a,unaff_SS);
              if (iVar1 != 0x0)
              {
                local_c = *(undefined2 *)((int)this_ptr + 0x1ae);
                iVar1 = file_write_check(in_stack_00000008,&local_c,unaff_SS);
                if (iVar1 != 0x0)
                {
                  return 0x1;
                }
              }
            }
          }
        }
      }
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



// Deserializes the Colony object state from a save file, restoring all internal metrics
// and arrays.

u16 __stdcall16far Colony_Object_Load_from_File_Logic_33f0(u32 this_ptr,void *file_ctx)
{
  int iVar1;
  int iVar2;
  void *handle_wrapper;
  undefined2 in_stack_0000000a;
  
  iVar2 = (int)this_ptr;
  handle_wrapper = (void *)(this_ptr >> 0x10);
  iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x4),handle_wrapper);
  if (((((iVar1 != 0x0) &&
        (iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x174),handle_wrapper)
        , iVar1 != 0x0)) &&
       (iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x180),handle_wrapper),
       iVar1 != 0x0)) &&
      ((iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x18c),handle_wrapper),
       iVar1 != 0x0 &&
       (iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x1a8),handle_wrapper),
       iVar1 != 0x0)))) &&
     (iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x1aa),handle_wrapper),
     iVar1 != 0x0))
  {
    if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
    {
      return 0x1;
    }
    iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x170),handle_wrapper);
    if ((iVar1 != 0x0) &&
       (iVar2 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x1ae),handle_wrapper),
       iVar2 != 0x0))
    {
      return 0x1;
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
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
