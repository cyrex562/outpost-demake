/*
 * Source: outpost.c
 * Theme: file_io
 * Chunk: 5/9
 * Original lines (combined): 37331-74395
 * Boundaries: top-level declarations/definitions only
 */




u16 __stdcall16far
UI_MultiList_Collection_Deserialize_from_File_9b72(u32 param_1,void *param_2)
{
  undefined2 *puVar1;
  int iVar2;
  astruct_491 *paVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  uint in_DX;
  uint uVar7;
  uint extraout_DX;
  uint extraout_DX_00;
  uint extraout_DX_01;
  undefined4 *puVar8;
  void *handle_wrapper;
  undefined2 uVar9;
  void *unaff_SS;
  void *arg1;
  undefined2 in_stack_0000ffc4;
  u16 local_36;
  u32 local_2e;
  u16 local_2a;
  u32 local_26;
  u16 local_22;
  u32 local_1e;
  u16 local_1a;
  u32 local_16;
  u16 local_12;
  u32 local_e;
  u16 local_a;
  u16 local_4;
  
  iVar2 = file_context_find_footer_marker_logic();
  if (iVar2 != 0x0)
  {
    iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar2 != 0x0)
    {
      iVar2 = (int)param_1;
      handle_wrapper = (void *)(param_1 >> 0x10);
      arg1 = (void *)param_2;
      iVar6 = (int)((ulong)param_2 >> 0x10);
      if (local_4 != 0x0)
      {
        if (*(long *)(iVar2 + 0xa) == 0x0)
        {
          paVar3 = allocate_memory(CONCAT22(in_stack_0000ffc4,0xc));
          local_16 = CONCAT22(in_DX,paVar3);
          uVar7 = in_DX | (uint)paVar3;
          if (uVar7 == 0x0)
          {
            *(undefined4 *)(iVar2 + 0xa) = 0x0;
            in_DX = uVar7;
          }
          else
          {
            pvVar4 = construct_object_with_vtable(paVar3,in_DX);
            *(undefined2 *)(iVar2 + 0xa) = pvVar4;
            *(uint *)(iVar2 + 0xc) = uVar7;
            in_DX = uVar7;
          }
        }
        for (local_12 = 0x0; local_12 < local_4; local_12 += 0x1)
        {
          pvVar4 = allocate_memory(CONCAT22(in_stack_0000ffc4,0x8));
          local_16 = CONCAT22(in_DX,pvVar4);
          if (in_DX == 0x0 && pvVar4 == NULL)
          {
            local_e = 0x0;
          }
          else
          {
            *(char **)local_16 = (char *)s_1_1050_389a;
            *(undefined2 *)((int)pvVar4 + 0x2) = 0x1008;
            *(undefined2 *)local_16 = 0xa1c4;
            *(undefined2 *)((int)pvVar4 + 0x2) = 0x1010;
            local_e = local_16;
          }
          iVar5 = file_read_check((long)param_2,&local_a,unaff_SS);
          if (iVar5 == 0x0)
          {
LAB_1010_9c32:
            local_16 = local_e;
            if (local_e == 0x0) goto LAB_1010_9ba1;
            uVar9 = (undefined2)(local_e >> 0x10);
            puVar8 = (undefined4 *)local_e;
            goto LAB_1010_9e9e;
          }
          iVar5 = file_read_check((long)param_2,(void *)((int)local_e + 0x6),
                                  (void *)(local_e >> 0x10));
          if (iVar5 == 0x0) goto LAB_1010_9c32;
          iVar5 = file_context_remap_sequence_id_by_version_logic
                            ((int)arg1,iVar6,local_a);
          *(int *)((int)local_e + 0x4) = iVar5;
          puVar1 = (undefined2 *)
                   ((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xa) + 0x4);
          (*(code *)*puVar1)();
          in_DX = extraout_DX;
        }
      }
      iVar5 = file_read_check((long)param_2,&local_2a,unaff_SS);
      if (iVar5 != 0x0)
      {
        if (local_2a != 0x0)
        {
          if (*(long *)(iVar2 + 0xe) == 0x0)
          {
            paVar3 = allocate_memory(CONCAT22(in_stack_0000ffc4,0xc));
            local_2e = CONCAT22(in_DX,paVar3);
            uVar7 = in_DX | (uint)paVar3;
            if (uVar7 == 0x0)
            {
              *(undefined4 *)(iVar2 + 0xe) = 0x0;
              in_DX = uVar7;
            }
            else
            {
              pvVar4 = construct_object_with_vtable(paVar3,in_DX);
              *(undefined2 *)(iVar2 + 0xe) = pvVar4;
              *(uint *)(iVar2 + 0x10) = uVar7;
              in_DX = uVar7;
            }
          }
          for (local_22 = 0x0; local_22 < local_2a; local_22 += 0x1)
          {
            pvVar4 = allocate_memory(CONCAT22(in_stack_0000ffc4,0x8));
            local_16 = CONCAT22(in_DX,pvVar4);
            if (in_DX == 0x0 && pvVar4 == NULL)
            {
              local_1e = 0x0;
            }
            else
            {
              *(char **)local_16 = (char *)s_1_1050_389a;
              *(undefined2 *)((int)pvVar4 + 0x2) = 0x1008;
              *(undefined2 *)local_16 = 0xa1c4;
              *(undefined2 *)((int)pvVar4 + 0x2) = 0x1010;
              local_1e = local_16;
            }
            iVar5 = file_read_check((long)param_2,&local_1a,unaff_SS);
            if (iVar5 == 0x0)
            {
LAB_1010_9d5c:
              local_16 = local_1e;
              if (local_1e == 0x0) goto LAB_1010_9ba1;
              uVar9 = (undefined2)(local_1e >> 0x10);
              puVar8 = (undefined4 *)local_1e;
              goto LAB_1010_9e9e;
            }
            iVar5 = file_read_check((long)param_2,(void *)((int)local_1e + 0x6),
                                    (void *)(local_1e >> 0x10));
            if (iVar5 == 0x0) goto LAB_1010_9d5c;
            iVar5 = file_context_remap_sequence_id_by_version_logic
                              ((int)arg1,iVar6,local_1a);
            *(int *)((int)local_1e + 0x4) = iVar5;
            puVar1 = (undefined2 *)
                     ((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xe) + 0x4);
            (*(code *)*puVar1)();
            in_DX = extraout_DX_00;
          }
        }
        iVar5 = file_read_check((long)param_2,&local_36,unaff_SS);
        if (iVar5 != 0x0)
        {
          if (local_36 != 0x0)
          {
            uVar7 = in_DX;
            if (*(long *)(iVar2 + 0x12) == 0x0)
            {
              paVar3 = allocate_memory(CONCAT22(in_stack_0000ffc4,0xc));
              local_16 = CONCAT22(in_DX,paVar3);
              uVar7 = in_DX | (uint)paVar3;
              if (uVar7 == 0x0)
              {
                *(undefined4 *)(iVar2 + 0x12) = 0x0;
              }
              else
              {
                pvVar4 = construct_object_with_vtable(paVar3,in_DX);
                *(undefined2 *)(iVar2 + 0x12) = pvVar4;
                *(uint *)(iVar2 + 0x14) = uVar7;
              }
            }
            for (local_2a = 0x0; local_2a < local_36; local_2a += 0x1)
            {
              pvVar4 = allocate_memory(CONCAT22(in_stack_0000ffc4,0x8));
              local_2e = CONCAT22(uVar7,pvVar4);
              if (uVar7 == 0x0 && pvVar4 == NULL)
              {
                local_26 = 0x0;
              }
              else
              {
                *(char **)local_2e = (char *)s_1_1050_389a;
                *(undefined2 *)((int)pvVar4 + 0x2) = 0x1008;
                *(undefined2 *)local_2e = 0xa1c4;
                *(undefined2 *)((int)pvVar4 + 0x2) = 0x1010;
                local_26 = local_2e;
              }
              iVar5 = file_read_check((long)param_2,&local_22,unaff_SS);
              if (iVar5 == 0x0)
              {
LAB_1010_9e86:
                local_16 = local_26;
                if (local_26 != 0x0)
                {
                  uVar9 = (undefined2)(local_26 >> 0x10);
                  puVar8 = (undefined4 *)local_26;
LAB_1010_9e9e:
                  local_2e = local_16;
                  (*(code *)*(undefined2 *)(undefined2 *)*puVar8)
                            (0x1008,(int)local_16,uVar9,0x1);
                }
                goto LAB_1010_9ba1;
              }
              iVar5 = file_read_check((long)param_2,(void *)((int)local_26 + 0x6),
                                      (void *)(local_26 >> 0x10));
              if (iVar5 == 0x0) goto LAB_1010_9e86;
              iVar5 = file_context_remap_sequence_id_by_version_logic
                                ((int)arg1,iVar6,local_22);
              *(int *)((int)local_26 + 0x4) = iVar5;
              puVar1 = (undefined2 *)
                       ((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x12) + 0x4);
              (*(code *)*puVar1)();
              uVar7 = extraout_DX_01;
            }
          }
          iVar6 = file_read_check((long)param_2,(void *)(iVar2 + 0x1a),handle_wrapper);
          if (iVar6 != 0x0)
          {
            iVar6 = file_read_check((long)param_2,(void *)(iVar2 + 0x1c),handle_wrapper)
            ;
            if (iVar6 != 0x0)
            {
              iVar2 = file_read_check((long)param_2,(void *)(iVar2 + 0x1e),
                                      handle_wrapper);
              if (iVar2 != 0x0)
              {
                return 0x1;
              }
            }
          }
        }
      }
    }
LAB_1010_9ba1:
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



// Writes a standard termination marker/footer to a save game file context.

int __stdcall16far Save_File_Write_Footer_Marker_a644(u16 arg1,u16 arg2,void *file_ctx)
{
  int iVar1;
  
  iVar1 = file_context_write_footer_marker_logic((void *)file_ctx);
  return (uint)(iVar1 != 0x0);
}



// Validates the integrity of a save file by searching for the footer marker and reading
// header metadata blocks.

u16 __stdcall16far Save_File_Validate_Footer_and_Header_a65e(void *arg1,void *file_ctx)
{
  int iVar1;
  void *unaff_SS;
  undefined1 local_a [0x2];
  undefined1 local_8 [0x2];
  undefined1 local_6 [0x2];
  undefined1 local_4 [0x2];
  
  iVar1 = file_context_find_footer_marker_logic();
  if (iVar1 != 0x0)
  {
    if (0x1 < (int)PTR_DAT_1050_0000_1050_0312)
    {
LAB_1020_a6dc:
      Simulator_Initialize_Global_Entity_Position_Structs_Logic
                ((u16)(void *)arg1,(u16)((ulong)arg1 >> 0x10),0x0);
      return 0x1;
    }
    iVar1 = file_read_check((long)file_ctx,local_4,unaff_SS);
    if (iVar1 != 0x0)
    {
      iVar1 = file_read_check((long)file_ctx,local_8,unaff_SS);
      if (iVar1 != 0x0)
      {
        iVar1 = file_read_check((long)file_ctx,local_6,unaff_SS);
        if (iVar1 != 0x0)
        {
          iVar1 = file_read_check((long)file_ctx,local_a,unaff_SS);
          if (iVar1 != 0x0) goto LAB_1020_a6dc;
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



// Serializes UI Build Item Type 56 state to a file context. Writes the value at offset
// 0x20.

int __stdcall16far
UI_Build_Item_Type56_Save_to_File_Logic_d3d4(void *this_ptr,void *file_ctx)
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
UI_Build_Item_Deserialize_and_Update_20_d41a(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  undefined2 local_4;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  uVar3 = 0x0;
  if (uVar1 != 0x0)
  {
    iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    *(undefined2 *)((int)param_1 + 0x20) = local_4;
    uVar3 = 0x1;
  }
  return uVar3;
}



// Serializes construction item state to a file, specifically writing two 2-byte fields
// at offsets 0x24 and 0x26. Sets global error code 0x6D0 on failure.

u16 __stdcall16far
UI_Construction_Item_Save_to_File_Logic_e6a4(void *this_ptr,void *file_ctx)
{
  int iVar1;
  undefined2 uVar2;
  void *unaff_SS;
  undefined2 local_c [0x3];
  undefined2 local_6 [0x2];
  
  iVar1 = UI_Build_Item_TypeE036_Save_to_File_Logic_de7c(this_ptr,file_ctx);
  if (iVar1 != 0x0)
  {
    uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
    local_c[0x0] = *(undefined2 *)((int)this_ptr + 0x24);
    iVar1 = file_write_check((long)file_ctx,local_c,unaff_SS);
    if (iVar1 != 0x0)
    {
      local_6[0x0] = *(undefined2 *)((int)this_ptr + 0x26);
      iVar1 = file_write_check((long)file_ctx,local_6,unaff_SS);
      if (iVar1 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



undefined2 __stdcall16far
UI_Build_Item_TypeE036_Deserialize_and_Update_e70e(u32 param_1,void *param_2)
{
  int iVar1;
  void *handle_wrapper;
  
  iVar1 = UI_Build_Item_TypeE036_Load_from_File_Logic_dec4(param_1,(void *)param_2);
  if (iVar1 != 0x0)
  {
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar1 = file_read_check((long)param_2,(void *)((int)param_1 + 0x24),handle_wrapper);
    if (iVar1 != 0x0)
    {
      iVar1 = file_read_check((long)param_2,(void *)((int)param_1 + 0x26),handle_wrapper
                             );
      if (iVar1 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



undefined2 __stdcall16far
UI_Build_Item_TypeE036_Serialize_and_Update_e94e(void *param_1,void *param_2)
{
  int iVar1;
  undefined2 uVar2;
  void *unaff_SS;
  undefined2 local_c [0x5];
  
  iVar1 = UI_Build_Item_TypeE036_Save_to_File_Logic_de7c(param_1,param_2);
  uVar2 = 0x0;
  if (iVar1 != 0x0)
  {
    local_c[0x0] = *(undefined2 *)((int)(void *)param_1 + 0x24);
    iVar1 = file_write_check((long)param_2,local_c,unaff_SS);
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    uVar2 = 0x1;
  }
  return uVar2;
}



undefined2 __stdcall16far
UI_Build_Item_TypeE036_Deserialize_and_Update_e994(u32 param_1,void *param_2)
{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = UI_Build_Item_TypeE036_Load_from_File_Logic_dec4(param_1,(void *)param_2);
  uVar2 = 0x0;
  if (iVar1 != 0x0)
  {
    iVar1 = file_read_check((long)param_2,(void *)((int)param_1 + 0x24),
                            (void *)(param_1 >> 0x10));
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    uVar2 = 0x1;
  }
  return uVar2;
}



undefined2 __stdcall16far
UI_Build_Item_Complex_Serialize_to_File_0234(void *param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  void *unaff_SS;
  undefined2 local_1a [0x3];
  undefined2 local_14 [0x2];
  undefined2 local_10;
  long local_e;
  undefined1 local_a [0x8];
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(param_1,param_2);
  if (uVar1 != 0x0)
  {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    iVar3 = (int)param_1;
    local_1a[0x0] = *(undefined2 *)(iVar3 + 0x20);
    iVar2 = file_write_check((long)param_2,local_1a,unaff_SS);
    if (iVar2 != 0x0)
    {
      init_long_pair(local_a,*(long *)(iVar3 + 0x22));
      local_14[0x0] = *(undefined2 *)((int)*(undefined4 *)(iVar3 + 0x22) + 0x8);
      local_10 = local_14[0x0];
      iVar2 = file_write_check((long)param_2,local_14,unaff_SS);
      while (iVar2 != 0x0)
      {
        local_e = get_next_list_item(local_a);
        if (local_e == 0x0)
        {
          return 0x1;
        }
        local_14[0x0] = *(undefined2 *)((int)local_e + 0x4);
        iVar2 = file_write_check((long)param_2,local_14,unaff_SS);
        if (iVar2 == 0x0) break;
        local_14[0x0] = *(undefined2 *)((int)local_e + 0x6);
        iVar2 = file_write_check((long)param_2,local_14,unaff_SS);
        if (iVar2 == 0x0) break;
        local_14[0x0] = *(undefined2 *)((int)local_e + 0x8);
        iVar2 = file_write_check((long)param_2,local_14,unaff_SS);
        if (iVar2 == 0x0) break;
        local_14[0x0] = *(undefined2 *)((int)local_e + 0xa);
        iVar2 = file_write_check((long)param_2,local_14,unaff_SS);
        if (iVar2 == 0x0) break;
        local_14[0x0] = *(undefined2 *)((int)local_e + 0xc);
        iVar2 = file_write_check((long)param_2,local_14,unaff_SS);
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
UI_Build_Item_Complex_Deserialize_from_File_0374(u32 param_1,void *param_2)
{
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  undefined2 *puVar4;
  void *handle_wrapper;
  int in_DX;
  int extraout_DX;
  undefined2 uVar5;
  void *unaff_SS;
  undefined4 local_1c;
  undefined2 local_18 [0x2];
  undefined2 *local_14;
  undefined2 local_10 [0x2];
  int local_c [0x3];
  uint local_6;
  uint local_4;
  
  uVar2 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  if (uVar2 != 0x0)
  {
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar3 = file_read_check((long)param_2,(void *)((int)param_1 + 0x20),handle_wrapper);
    if (iVar3 != 0x0)
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
          local_1c = (undefined2 *)CONCAT22(in_DX,puVar4);
          if (in_DX == 0x0 && puVar4 == NULL)
          {
            local_14 = NULL;
          }
          else
          {
            *local_1c = (char *)s_1_1050_389a;
            puVar4[0x1] = 0x1008;
            puVar4[0x2] = 0x0;
            puVar4[0x3] = 0x0;
            puVar4[0x4] = 0x0;
            puVar4[0x5] = 0x0;
            puVar4[0x6] = 0x0;
            *local_1c = 0x56ce;
            puVar4[0x1] = 0x1018;
            local_14 = local_1c;
          }
          iVar3 = file_read_check((long)param_2,local_10,unaff_SS);
          if (iVar3 == 0x0) break;
          iVar3 = file_read_check((long)param_2,local_c,unaff_SS);
          if (iVar3 == 0x0) break;
          iVar3 = file_read_check((long)param_2,local_18,unaff_SS);
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
          ((undefined2 *)local_14)[0x4] = local_18[0x0];
          puVar1 = (undefined2 *)
                   ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x22) + 0x8);
          (*(code *)*puVar1)();
          local_6 += 0x1;
          in_DX = extraout_DX;
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



// Serializes UI Build Item Type 0x1724 state to a file. Writes two 2-byte state fields
// and a global data pointer (0x4FBC).

u16 __stdcall16far
UI_Build_Item_Type_1724_Save_to_File_Logic_1452(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  undefined2 local_c [0x3];
  undefined *local_6 [0x2];
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(this_ptr,file_ctx);
  if (uVar1 != 0x0)
  {
    uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
    local_c[0x0] = *(undefined2 *)((int)(void *)this_ptr + 0x22);
    iVar2 = file_write_check((long)file_ctx,local_c,unaff_SS);
    if (iVar2 != 0x0)
    {
      local_6[0x0] = (undefined *)*(undefined2 *)((int)(void *)this_ptr + 0x20);
      iVar2 = file_write_check((long)file_ctx,local_6,unaff_SS);
      if (iVar2 != 0x0)
      {
        local_6[0x0] = PTR_DAT_1050_0000_1050_4fbc;
        iVar2 = file_write_check((long)file_ctx,local_6,unaff_SS);
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
UI_Build_Item_Deserialize_and_Update_22_20_14d8(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  void *handle_wrapper;
  void *unaff_SS;
  undefined2 local_4;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  if (uVar1 != 0x0)
  {
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar2 = file_read_check((long)param_2,(void *)((int)param_1 + 0x22),handle_wrapper);
    if ((iVar2 != 0x0) &&
       (iVar2 = file_read_check((long)param_2,&local_4,unaff_SS), iVar2 != 0x0))
    {
      *(undefined2 *)((int)param_1 + 0x20) = local_4;
      if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
      {
        return 0x1;
      }
      iVar2 = file_read_check((long)param_2,(undefined **)&PTR_DAT_1050_0000_1050_4fbc,
                              (dword *)&g_HeapContext);
      if (iVar2 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



undefined2 __stdcall16far
UI_Build_Item_Complex_Resource_Serialize_to_File_2418(void *param_1,void *param_2)
{
  undefined4 uVar1;
  u16 uVar2;
  int iVar3;
  undefined2 uVar4;
  void *unaff_SS;
  long lVar5;
  undefined2 local_1c [0x6];
  undefined2 local_10;
  undefined4 local_e;
  undefined1 local_a [0x8];
  
  uVar2 = UI_Build_Item_Save_to_File_Logic_b5ec(param_1,param_2);
  uVar4 = 0x0;
  if (uVar2 != 0x0)
  {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    init_long_pair(local_a,*(long *)((int)(void *)param_1 + 0x20));
    uVar1 = *(undefined4 *)((int)(void *)param_1 + 0x20);
    local_1c[0x0] = *(undefined2 *)((int)uVar1 + 0x8);
    local_10 = local_1c[0x0];
    iVar3 = file_write_check((long)param_2,local_1c,unaff_SS);
    if (iVar3 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    while( true )
    {
      lVar5 = get_next_list_item(local_a);
      if (lVar5 == 0x0) break;
      local_e = lVar5;
      uVar2 = Simulator_Resource_List_Save_to_File_Logic_75ca
                        ((int)lVar5,(int)((ulong)lVar5 >> 0x10),param_2);
      if (uVar2 == 0x0)
      {
        return 0x0;
      }
    }
    uVar4 = 0x1;
  }
  return uVar4;
}



undefined2 __stdcall16far
UI_Build_Item_Complex_Resource_Deserialize_from_File_24a2(u32 param_1,void *param_2)
{
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  void *pvVar4;
  int in_DX;
  int extraout_DX;
  void *unaff_SS;
  void *arg1;
  void *file_ctx;
  uint local_6;
  uint local_4;
  
  uVar2 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  if (uVar2 == 0x0)
  {
    return 0x0;
  }
  if (0x1 < (int)PTR_DAT_1050_0000_1050_0312)
  {
    iVar3 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar3 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    for (local_6 = 0x0; local_6 < local_4; local_6 += 0x1)
    {
      file_ctx = param_2;
      pvVar4 = allocate_memory(CONCAT22((void *)param_2,0x2a));
      if (in_DX == 0x0 && pvVar4 == NULL)
      {
        arg1 = NULL;
      }
      else
      {
        arg1 = Simulator_Resource_Change_Item_ctor_init_6520
                         ((void *)CONCAT22(in_DX,pvVar4));
      }
      uVar2 = Simulator_Resource_List_Load_from_File_Logic_774e(arg1,file_ctx);
      if (uVar2 == 0x0)
      {
        return 0x0;
      }
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x20) + 0x8);
      (*(code *)*puVar1)();
      in_DX = extraout_DX;
    }
  }
  return 0x1;
}



// Serializes Construction Item 0x3E2C state to a file. Writes two 4-byte fields and
// then serializes the internal UI Item List.

u16 __stdcall16far
UI_Construction_Item_Type_3E2C_Save_to_File_Logic_3d0e(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  undefined4 local_10 [0x2];
  undefined4 local_8;
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(this_ptr,file_ctx);
  if (uVar1 != 0x0)
  {
    uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
    local_10[0x0] = *(undefined4 *)((int)(void *)this_ptr + 0x20);
    iVar2 = file_write_check((long)file_ctx,local_10,unaff_SS);
    if (iVar2 != 0x0)
    {
      local_8 = *(undefined4 *)((int)(void *)this_ptr + 0x24);
      iVar2 = file_write_check((long)file_ctx,&local_8,unaff_SS);
      if (iVar2 != 0x0)
      {
        iVar2 = file_context_serialize_map_logic
                          ((void *)file_ctx,(void *)((ulong)file_ctx >> 0x10));
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
UI_Build_Item_Deserialize_and_Update_Map_3d92(u32 param_1,void *param_2)
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
        iVar2 = file_context_deserialize_map_to_existing_logic
                          ((void *)param_2,(void *)((ulong)param_2 >> 0x10));
        if (iVar2 != 0x0)
        {
          return 0x1;
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}
