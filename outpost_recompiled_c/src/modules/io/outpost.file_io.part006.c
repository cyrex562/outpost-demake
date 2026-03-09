/*
 * Source: outpost.c
 * Theme: file_io
 * Chunk: 6/9
 * Original lines (combined): 75233-85910
 * Boundaries: top-level declarations/definitions only
 */




u16 __stdcall16far
UI_Build_Item_Serialize_and_Update_20_4a1a(void *param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  u16 uVar3;
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(param_1,param_2);
  uVar3 = 0x0;
  if (uVar1 != 0x0)
  {
    iVar2 = file_write_check((long)param_2,(void *)((int)(void *)param_1 + 0x20),
                             (void *)((ulong)param_1 >> 0x10));
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    uVar3 = 0x1;
  }
  return uVar3;
}



u16 __stdcall16far
UI_Build_Item_Deserialize_and_Update_20_4a5a(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  u16 uVar3;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  uVar3 = 0x0;
  if (uVar1 != 0x0)
  {
    iVar2 = file_read_check((long)param_2,(void *)((int)param_1 + 0x20),
                            (void *)(param_1 >> 0x10));
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    uVar3 = 0x1;
  }
  return uVar3;
}



// Serialization logic for saving Type 0x6054 build item state to a file context. Writes
// field 0x20.

int __stdcall16far
UI_Build_Item_Type_6054_Save_to_File_Logic(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  void *unaff_SS;
  undefined2 local_c [0x5];
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(this_ptr,file_ctx);
  iVar2 = 0x0;
  if (uVar1 != 0x0)
  {
    local_c[0x0] = *(undefined2 *)((int)this_ptr + 0x20);
    iVar2 = file_write_check((long)file_ctx,local_c,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    iVar2 = 0x1;
  }
  return iVar2;
}



undefined2 __stdcall16far
UI_Build_Item_Deserialize_and_Update_20_5fc8(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  uVar3 = 0x0;
  if (uVar1 != 0x0)
  {
    iVar2 = file_read_check((long)param_2,(void *)((int)param_1 + 0x20),
                            (void *)(param_1 >> 0x10));
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    uVar3 = 0x1;
  }
  return uVar3;
}



undefined2 __stdcall16far
UI_Build_Item_Complex_Resource_Serialize_to_File_64d6(void *param_1,void *param_2)
{
  undefined4 uVar1;
  u16 uVar2;
  undefined2 *buffer;
  int iVar3;
  undefined2 uVar4;
  void *unaff_SS;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c [0x6];
  undefined2 local_10;
  long local_e;
  undefined1 local_a [0x8];
  
  uVar2 = UI_Build_Item_Save_to_File_Logic_b5ec(param_1,param_2);
  if (uVar2 != 0x0)
  {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    init_long_pair(local_a,*(long *)((int)(void *)param_1 + 0x20));
    uVar1 = *(undefined4 *)((int)(void *)param_1 + 0x20);
    local_1c[0x0] = *(undefined2 *)((int)uVar1 + 0x8);
    buffer = local_1c;
    local_10 = local_1c[0x0];
    while( true )
    {
      iVar3 = file_write_check((long)param_2,buffer,unaff_SS);
      if (iVar3 == 0x0) break;
      local_e = get_next_list_item(local_a);
      if (local_e == 0x0)
      {
        return 0x1;
      }
      local_1e = *(undefined2 *)((int)local_e + 0x4);
      iVar3 = file_write_check((long)param_2,&local_1e,unaff_SS);
      if (iVar3 == 0x0) break;
      local_20 = *(undefined2 *)((int)local_e + 0x6);
      iVar3 = file_write_check((long)param_2,&local_20,unaff_SS);
      if (iVar3 == 0x0) break;
      local_22 = *(undefined2 *)((int)local_e + 0x8);
      iVar3 = file_write_check((long)param_2,&local_22,unaff_SS);
      if (iVar3 == 0x0) break;
      local_24 = *(undefined2 *)((int)local_e + 0xa);
      iVar3 = file_write_check((long)param_2,&local_24,unaff_SS);
      if (iVar3 == 0x0) break;
      local_26 = *(undefined2 *)((int)local_e + 0xc);
      buffer = &local_26;
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
UI_Build_Item_Complex_Resource_Deserialize_from_File_65e2(u32 param_1,void *param_2)
{
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int alloc_seg;
  int extraout_DX;
  undefined2 uVar5;
  void *unaff_SS;
  undefined4 local_1a;
  undefined2 local_16;
  undefined2 *local_14;
  undefined2 local_10 [0x2];
  int local_c [0x3];
  uint local_6;
  uint local_4;
  
  uVar2 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  if (uVar2 != 0x0)
  {
    iVar3 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar3 != 0x0)
    {
      local_6 = 0x0;
      while( true )
      {
        if (local_4 <= local_6)
        {
          return 0x1;
        }
        puVar4 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
        local_1a = (undefined2 *)CONCAT22(alloc_seg,puVar4);
        if (alloc_seg == 0x0 && puVar4 == NULL)
        {
          local_14 = NULL;
        }
        else
        {
          *local_1a = (char *)s_1_1050_389a;
          puVar4[0x1] = 0x1008;
          puVar4[0x2] = 0x0;
          puVar4[0x3] = 0x0;
          puVar4[0x4] = 0x0;
          puVar4[0x5] = 0x0;
          puVar4[0x6] = 0x0;
          *local_1a = 0x56ce;
          puVar4[0x1] = 0x1018;
          local_14 = local_1a;
        }
        iVar3 = file_read_check((long)param_2,local_10,unaff_SS);
        if (iVar3 == 0x0) break;
        iVar3 = file_read_check((long)param_2,local_c,unaff_SS);
        if (iVar3 == 0x0) break;
        iVar3 = file_read_check((long)param_2,&local_16,unaff_SS);
        if (iVar3 == 0x0) break;
        iVar3 = file_read_check((long)param_2,(undefined2 *)local_14 + 0x5,
                                (void *)((ulong)local_14 >> 0x10));
        if (iVar3 == 0x0) break;
        iVar3 = file_read_check((long)param_2,(undefined2 *)local_14 + 0x6,
                                (void *)((ulong)local_14 >> 0x10));
        if (iVar3 == 0x0) break;
        ((undefined2 *)local_14)[0x2] = local_10[0x0];
        iVar3 = file_context_remap_id_by_version_logic
                          ((int)(void *)param_2,(int)((ulong)param_2 >> 0x10),
                           local_c[0x0]);
        uVar5 = (undefined2)((ulong)local_14 >> 0x10);
        ((undefined2 *)local_14)[0x3] = iVar3;
        ((undefined2 *)local_14)[0x4] = local_16;
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x20) + 0x8);
        (*(code *)*puVar1)();
        local_6 += 0x1;
        alloc_seg = extraout_DX;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



undefined2 __stdcall16far
UI_Window_Deserialize_and_Update_0C_b2c8(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  int local_4;
  
  uVar1 = UI_Window_Load_from_File_Logic_1730(param_1,(void *)param_2);
  uVar3 = 0x0;
  if (uVar1 != 0x0)
  {
    iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    iVar2 = file_context_remap_id_by_version_logic
                      ((int)(void *)param_2,(int)((ulong)param_2 >> 0x10),local_4);
    *(int *)((int)param_1 + 0xc) = iVar2;
    uVar3 = 0x1;
  }
  return uVar3;
}



// Serializes build item state to a file. Handles base fields (0xC-0x1A) and
// state-specific fields (0x94, 0xA4-0xAC) for construction progress and resource
// management. Sets global error 0x6D0 on failure.

u16 __stdcall16far UI_Build_Item_Save_to_File_Logic_b5ec(void *this_ptr,void *file_ctx)
{
  int iVar1;
  u16 uVar2;
  void *pvVar3;
  undefined2 uVar4;
  void *unaff_SS;
  undefined2 local_e [0x3];
  undefined2 local_8 [0x2];
  int iStack_4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = (void *)this_ptr;
  local_e[0x0] = *(undefined2 *)((int)pvVar3 + 0xc);
  iVar1 = file_write_check((long)file_ctx,local_e,unaff_SS);
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  uVar2 = UI_Window_Save_to_File_Logic_16d6(this_ptr,file_ctx);
  if (uVar2 == 0x0)
  {
    return 0x0;
  }
  local_8[0x0] = *(undefined2 *)((int)pvVar3 + 0xc);
  iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  local_8[0x0] = *(undefined2 *)((int)pvVar3 + 0xe);
  iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  local_8[0x0] = *(undefined2 *)((int)pvVar3 + 0x10);
  iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  local_8[0x0] = *(undefined2 *)((int)pvVar3 + 0x12);
  iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  local_8[0x0] = *(undefined2 *)((int)pvVar3 + 0x18);
  iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  local_8[0x0] = *(undefined2 *)((int)pvVar3 + 0x1a);
  iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  iStack_4 = *(int *)((int)pvVar3 + 0x12);
  if (iStack_4 == 0x6)
  {
    iStack_4 = *(int *)((int)pvVar3 + 0x18);
  }
  if (iStack_4 < 0x1)
  {
    return 0x1;
  }
  if (SBORROW2(iStack_4,0x1))
  {
    return 0x1;
  }
  if (iStack_4 == 0x3 || iStack_4 + -0x2 < 0x1)
  {
    local_8[0x0] = *(undefined2 *)((int)pvVar3 + 0x14);
  }
  else if (iStack_4 == 0x4)
  {
    if (*(long *)((int)pvVar3 + 0x14) == 0x0)
    {
      local_8[0x0] = 0x0;
      iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
      goto joined_r0x1028b766;
    }
    local_8[0x0] = *(undefined2 *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0x94);
  }
  else
  {
    if (iStack_4 != 0x5)
    {
      return 0x1;
    }
    local_8[0x0] = *(undefined2 *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0xa4);
    iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    local_8[0x0] = *(undefined2 *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0xa6);
    iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    local_8[0x0] = *(undefined2 *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0xa8);
    iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    local_8[0x0] = *(undefined2 *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0xaa);
    iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    local_8[0x0] = *(undefined2 *)((int)*(undefined4 *)((int)pvVar3 + 0x14) + 0xac);
  }
  iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
joined_r0x1028b766:
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Deserializes build item state from a file. Handles ID remapping, state transitions,
// and initializes internal pointers for active (4, 5, 9) items. Sets global error 0x6D2
// on failure.

u16 __stdcall16far UI_Build_Item_Load_from_File_Logic_b81a(u32 this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  void *buffer;
  int iVar3;
  void *handle_wrapper;
  void *unaff_SS;
  void *pvVar4;
  int in_stack_0000000a;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_2a [0x2];
  undefined1 local_26 [0x16];
  void *pvStack_10;
  void *pvStack_e;
  int iStack_a;
  int local_8;
  int local_6;
  int local_4;
  
  iVar3 = (int)this_ptr;
  handle_wrapper = (void *)(this_ptr >> 0x10);
  uVar1 = UI_Window_Load_from_File_Logic_1730(this_ptr,file_ctx);
  if (uVar1 == 0x0)
  {
    return 0x0;
  }
  iVar2 = file_read_check((long)_file_ctx,&local_4,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d2;
    return 0x0;
  }
  iVar2 = file_read_check((long)_file_ctx,&local_6,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d2;
    return 0x0;
  }
  iVar2 = file_read_check((long)_file_ctx,&local_8,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d2;
    return 0x0;
  }
  iVar2 = file_context_remap_sequence_id_by_version_logic
                    ((int)file_ctx,in_stack_0000000a,local_4);
  *(int *)(iVar3 + 0xc) = iVar2;
  iVar2 = file_context_remap_sequence_id_by_version_logic
                    ((int)file_ctx,in_stack_0000000a,local_6);
  *(int *)(iVar3 + 0xe) = iVar2;
  iVar2 = file_context_remap_sequence_id_by_version_logic
                    ((int)file_ctx,in_stack_0000000a,local_8);
  *(int *)(iVar3 + 0x10) = iVar2;
  iVar2 = file_read_check((long)_file_ctx,&local_4,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d2;
    return 0x0;
  }
  iVar2 = file_read_check((long)_file_ctx,&local_6,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d2;
    return 0x0;
  }
  iVar2 = file_read_check((long)_file_ctx,(void *)(iVar3 + 0x1a),handle_wrapper);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d2;
    return 0x0;
  }
  *(int *)(iVar3 + 0x12) = local_4;
  *(int *)(iVar3 + 0x18) = local_6;
  iStack_a = *(int *)(iVar3 + 0x12);
  if (iStack_a == 0x6)
  {
    iStack_a = *(int *)(iVar3 + 0x18);
  }
  if (false)
  {
    return 0x1;
  }
  uVar5 = (undefined2)_p_SimulatorWorldContext;
  uVar6 = (undefined2)((ulong)_p_SimulatorWorldContext >> 0x10);
  switch(iStack_a)
  {
  case 0x1:
  case 0x2:
  case 0x3:
    buffer = (void *)(iVar3 + 0x14);
LAB_1028_b968:
    iVar3 = file_read_check((long)_file_ctx,buffer,handle_wrapper);
    break;
  case 0x4:
    pvVar4 = Simulator_Object_Clone_from_Manager_e0bc
                       (uVar5,uVar6,*(undefined2 *)(iVar3 + 0xc));
    pvStack_e = (void *)((ulong)pvVar4 >> 0x10);
    *(undefined2 *)(iVar3 + 0x14) = (void *)pvVar4;
    *(int *)(iVar3 + 0x16) = (int)pvStack_e;
    if (pvStack_e != NULL || *(int *)(iVar3 + 0x14) != 0x0)
    {
      buffer = (void *)(*(int *)(iVar3 + 0x14) + 0x94);
      handle_wrapper = pvStack_e;
      pvStack_10 = buffer;
      goto LAB_1028_b968;
    }
    iVar3 = file_read_check((long)_file_ctx,local_26,unaff_SS);
    break;
  case 0x5:
    pvVar4 = Simulator_Object_Alloc_and_Init_from_Manager_e100
                       (uVar5,uVar6,*(undefined2 *)(iVar3 + 0xc));
    pvStack_e = (void *)((ulong)pvVar4 >> 0x10);
    *(undefined2 *)(iVar3 + 0x14) = (void *)pvVar4;
    *(undefined2 *)(iVar3 + 0x16) = pvStack_e;
    pvStack_10 = (void *)(*(int *)(iVar3 + 0x14) + 0xa4);
    iVar2 = file_read_check((long)_file_ctx,pvStack_10,pvStack_e);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    iVar2 = file_read_check((long)_file_ctx,local_2a,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    iVar2 = file_read_check((long)_file_ctx,
                            (void *)((int)*(undefined4 *)(iVar3 + 0x14) + 0xa8),
                            (void *)((ulong)*(undefined4 *)(iVar3 + 0x14) >> 0x10));
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    iVar2 = file_read_check((long)_file_ctx,
                            (void *)((int)*(undefined4 *)(iVar3 + 0x14) + 0xaa),
                            (void *)((ulong)*(undefined4 *)(iVar3 + 0x14) >> 0x10));
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    iVar2 = file_read_check((long)_file_ctx,
                            (void *)((int)*(undefined4 *)(iVar3 + 0x14) + 0xac),
                            (void *)((ulong)*(undefined4 *)(iVar3 + 0x14) >> 0x10));
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    iVar2 = file_context_remap_id_by_version_logic
                      ((int)file_ctx,in_stack_0000000a,local_2a[0x0]);
    *(int *)((int)*(undefined4 *)(iVar3 + 0x14) + 0xa6) = iVar2;
    return 0x1;
  default:
    goto switchD_1028_ba97_caseD_6;
  case 0x9:
    pvVar4 = Simulator_Object_Alloc_and_Init_from_Manager_e100
                       (uVar5,uVar6,*(undefined2 *)(iVar3 + 0xc));
    *(undefined2 *)(iVar3 + 0x14) = (void *)pvVar4;
    *(undefined2 *)(iVar3 + 0x16) = (int)((ulong)pvVar4 >> 0x10);
    goto switchD_1028_ba97_caseD_6;
  }
  if (iVar3 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d2;
    return 0x0;
  }
switchD_1028_ba97_caseD_6:
  return 0x1;
}



// An alternative routine to write a termination footer to a save game file.

int __stdcall16far
Save_File_Write_Footer_Marker_Alternative_d7a0(u16 arg1,u16 arg2,void *file_ctx)
{
  int iVar1;
  
  iVar1 = file_context_write_footer_marker_logic((void *)file_ctx);
  return (uint)(iVar1 != 0x0);
}



// Validates that the current file context contains a valid footer marker. Sets global
// error 0x6D4 on failure.

int __stdcall16far Save_File_Validate_Footer_Logic_d7ba(void)
{
  int iVar1;
  
  iVar1 = file_context_find_footer_marker_logic();
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d4;
    return 0x0;
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// The primary routine for serializing the entire global simulator state to a file.
// Writes headers, footers, internal resource managers, and all 8 specialized
// world-tracking entity lists in sequence.

u16 __stdcall16far
Simulator_Context_Save_to_File_Comprehensive_dce2(u32 *this_ptr,void *file_ctx)
{
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  void *unaff_SS;
  u16 in_stack_00000006;
  void *this;
  u32 local_26 [0x2];
  undefined2 local_1e [0x3];
  void *pvStack_18;
  undefined1 local_14 [0x12];
  
  this = (void *)file_ctx;
  iVar2 = file_context_write_footer_marker_logic(this);
  if (iVar2 != 0x0)
  {
    local_26[0x0] = *_this_ptr;
    iVar2 = file_write_check((long)file_ctx,local_26,unaff_SS);
    if (iVar2 != 0x0)
    {
      local_1e[0x0] = (undefined2)this_ptr[0x2];
      iVar2 = file_write_check((long)file_ctx,local_1e,unaff_SS);
      if (iVar2 != 0x0)
      {
        puVar1 = (undefined2 *)((int)*_PTR_DAT_1050_0000_1050_5166 + 0xc);
        iVar2 = (*(code *)*puVar1)(0x1008,(undefined4 *)_PTR_DAT_1050_0000_1050_5166,
                                   (int)((ulong)_PTR_DAT_1050_0000_1050_5166 >> 0x10),
                                   file_ctx);
        if (iVar2 != 0x0)
        {
          iVar2 = file_context_write_footer_marker_logic(this);
          if (iVar2 != 0x0)
          {
            uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                              ((u16)this_ptr,in_stack_00000006,file_ctx,
                               (void *)0x1000000);
            if (uVar3 != 0x0)
            {
              iVar2 = file_context_write_footer_marker_logic(this);
              if (iVar2 != 0x0)
              {
                uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                                  ((u16)this_ptr,in_stack_00000006,file_ctx,
                                   (void *)0x2000000);
                if (uVar3 != 0x0)
                {
                  iVar2 = file_context_write_footer_marker_logic(this);
                  if (iVar2 != 0x0)
                  {
                    uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                                      ((u16)this_ptr,in_stack_00000006,file_ctx,
                                       (void *)0x3000000);
                    if (uVar3 != 0x0)
                    {
                      iVar2 = file_context_write_footer_marker_logic(this);
                      if (iVar2 != 0x0)
                      {
                        uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                                          ((u16)this_ptr,in_stack_00000006,file_ctx,
                                           (void *)0x4000000);
                        if (uVar3 != 0x0)
                        {
                          iVar2 = file_context_write_footer_marker_logic(this);
                          if (iVar2 != 0x0)
                          {
                            uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                                              ((u16)this_ptr,in_stack_00000006,file_ctx,
                                               (void *)0x5000000);
                            if (uVar3 != 0x0)
                            {
                              iVar2 = file_context_write_footer_marker_logic(this);
                              if (iVar2 != 0x0)
                              {
                                uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                                                  ((u16)this_ptr,in_stack_00000006,
                                                   file_ctx,(void *)0x6000000);
                                if (uVar3 != 0x0)
                                {
                                  iVar2 = file_context_write_footer_marker_logic(this);
                                  if (iVar2 != 0x0)
                                  {
                                    uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                                                      ((u16)this_ptr,in_stack_00000006,
                                                       file_ctx,(void *)0x7000000);
                                    if (uVar3 != 0x0)
                                    {
                                      iVar2 = file_context_write_footer_marker_logic
                                                        (this);
                                      if (iVar2 != 0x0)
                                      {
                                        uVar3 = 
                                            Simulator_Save_Entity_Collection_to_File_e56c
                                                      ((u16)this_ptr,in_stack_00000006,
                                                       file_ctx,(void *)0x8000000);
                                        if (uVar3 != 0x0)
                                        {
                                          Simulator_World_Iterator_ctor_init_dc52
                                                    ((undefined1 *)
                                                     CONCAT22(unaff_SS,local_14),0x1,0x0
                                                     ,0x400);
                                          while( true )
                                          {
                                            pvStack_18 = 
                                            Simulator_World_Iterator_Get_Next_Entity_e4ec
                                                      ((undefined1 *)
                                                       CONCAT22(unaff_SS,local_14));
                                            if (pvStack_18 == NULL) break;
                                            if (*(long *)((int)pvStack_18 + 0x200) !=
                                                0x8000002)
                                            {
                                              Colony_Rebuild_SubItem_Manager_List_3ba0
                                                        (pvStack_18);
                                            }
                                          }
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
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// The primary routine for deserializing the entire global simulator state from a file.
// Reconstructs all internal managers and entity lists in the correct sequence,
// validating integrity at each step.

long __stdcall16far
Simulator_Context_Load_from_File_Comprehensive_def2(void *param_1,long param_2)
{
  undefined2 *puVar1;
  int iVar2;
  char *result_dx;
  undefined4 uVar3;
  void *buffer;
  void *handle_wrapper;
  
  iVar2 = file_context_find_footer_marker_logic();
  if (iVar2 != 0x0)
  {
    buffer = (void *)param_1;
    handle_wrapper = (void *)((ulong)param_1 >> 0x10);
    iVar2 = file_read_check(param_2,buffer,handle_wrapper);
    if (iVar2 != 0x0)
    {
      iVar2 = file_read_check(param_2,(void *)((int)buffer + 0x8),handle_wrapper);
      if (iVar2 != 0x0)
      {
        puVar1 = (undefined2 *)((int)*_PTR_DAT_1050_0000_1050_5166 + 0x10);
        uVar3 = (*(code *)*puVar1)(0x1008,(undefined4 *)_PTR_DAT_1050_0000_1050_5166,
                                   (int)((ulong)_PTR_DAT_1050_0000_1050_5166 >> 0x10),
                                   (int)param_2,(int)((ulong)param_2 >> 0x10));
        result_dx = (char *)((ulong)uVar3 >> 0x10);
        if ((int)uVar3 != 0x0)
        {
          iVar2 = file_context_find_footer_marker_logic();
          if (iVar2 != 0x0)
          {
            result_dx = Simulator_Context_Load_Entity_Collection_from_File_e628
                              (buffer,handle_wrapper);
            if (iVar2 != 0x0)
            {
              iVar2 = file_context_find_footer_marker_logic();
              if (iVar2 != 0x0)
              {
                result_dx = Simulator_Context_Load_Entity_Collection_from_File_e628
                                  (buffer,handle_wrapper);
                if (iVar2 != 0x0)
                {
                  iVar2 = file_context_find_footer_marker_logic();
                  if (iVar2 != 0x0)
                  {
                    result_dx = Simulator_Context_Load_Entity_Collection_from_File_e628
                                      (buffer,handle_wrapper);
                    if (iVar2 != 0x0)
                    {
                      iVar2 = file_context_find_footer_marker_logic();
                      if (iVar2 != 0x0)
                      {
                        result_dx = Simulator_Context_Load_Entity_Collection_from_File_e628
                                          (buffer,handle_wrapper);
                        if (iVar2 != 0x0)
                        {
                          iVar2 = file_context_find_footer_marker_logic();
                          if (iVar2 != 0x0)
                          {
                            result_dx = Simulator_Context_Load_Entity_Collection_from_File_e628
                                              (buffer,handle_wrapper);
                            if (iVar2 != 0x0)
                            {
                              iVar2 = file_context_find_footer_marker_logic();
                              if (iVar2 != 0x0)
                              {
                                result_dx = Simulator_Context_Load_Entity_Collection_from_File_e628
                                                  (buffer,handle_wrapper);
                                if (iVar2 != 0x0)
                                {
                                  iVar2 = file_context_find_footer_marker_logic();
                                  if (iVar2 != 0x0)
                                  {
                                    result_dx = Simulator_Context_Load_Entity_Collection_from_File_e628
                                                      (buffer,handle_wrapper);
                                    if (iVar2 != 0x0)
                                    {
                                      iVar2 = file_context_find_footer_marker_logic();
                                      if (iVar2 != 0x0)
                                      {
                                        result_dx = 
                                            Simulator_Context_Load_Entity_Collection_from_File_e628
                                                      (param_1);
                                        if (iVar2 != 0x0)
                                        {
                                          return CONCAT22(result_dx,0x1);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return ZEXT24(result_dx) << 0x10;
}
