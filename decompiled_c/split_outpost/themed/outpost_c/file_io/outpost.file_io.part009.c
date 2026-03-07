/*
 * Source: outpost.c
 * Theme: file_io
 * Chunk: 9/9
 * Original lines (combined): 101682-113406
 * Boundaries: top-level declarations/definitions only
 */




// Serializes UI build item Type 0xC940 to a save file, including base state and the
// field at offset 0x20.

int __stdcall16far
UI_Build_Item_TypeC940_Save_to_File_Logic_c84e(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  void *unaff_SS;
  undefined2 local_c [0x5];
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(this_ptr,file_ctx);
  iVar2 = 0x0;
  if (uVar1 != 0x0)
  {
    local_c[0x0] = *(undefined2 *)((int)(void *)this_ptr + 0x20);
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
UI_Build_Item_Deserialize_and_Update_20_c894(u32 param_1,void *param_2)
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



// Serializes UI build item Type 0xD88E to a save file. Exhaustively saves the
// 10-element sub-item array (offsets 0x20, 0x24, 0x26, 0x28 for each slot).

u16 __stdcall16far
UI_Build_Item_TypeD88E_Save_to_File_Logic_d61c(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  void *unaff_SS;
  undefined4 local_1a;
  undefined *local_16;
  undefined2 local_14;
  undefined4 local_12 [0x3];
  int iStack_4;
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(this_ptr,file_ctx);
  if (uVar1 != 0x0)
  {
    for (iStack_4 = 0x0; iStack_4 < 0xa; iStack_4 += 0x1)
    {
      uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
      iVar3 = (int)this_ptr;
      local_12[0x0] = *(undefined4 *)(iVar3 + iStack_4 * 0xc + 0x20);
      iVar2 = file_write_check((long)file_ctx,local_12,unaff_SS);
      if (iVar2 == 0x0) goto LAB_1030_d701;
      local_14 = *(undefined2 *)(iVar3 + iStack_4 * 0xc + 0x24);
      iVar2 = file_write_check((long)file_ctx,&local_14,unaff_SS);
      if (iVar2 == 0x0) goto LAB_1030_d701;
      local_16 = (undefined *)*(undefined2 *)(iVar3 + iStack_4 * 0xc + 0x26);
      iVar2 = file_write_check((long)file_ctx,&local_16,unaff_SS);
      if (iVar2 == 0x0) goto LAB_1030_d701;
      local_1a = *(undefined4 *)(iVar3 + iStack_4 * 0xc + 0x28);
      iVar2 = file_write_check((long)file_ctx,&local_1a,unaff_SS);
      if (iVar2 == 0x0) goto LAB_1030_d701;
    }
    local_16 = PTR_DAT_1050_0000_1050_5812;
    iVar2 = file_write_check((long)file_ctx,&local_16,unaff_SS);
    if (iVar2 != 0x0)
    {
      return 0x1;
    }
LAB_1030_d701:
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



undefined2 __stdcall16far
UI_Build_Item_MultiSlot_Deserialize_from_File_d72e(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  int iVar3;
  void *unaff_SS;
  int local_a;
  undefined4 local_8;
  int local_4;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  if (uVar1 == 0x0)
  {
    return 0x0;
  }
  local_a = 0x0;
  while( true )
  {
    if (0x9 < local_a)
    {
      if ((0x3 < (int)PTR_DAT_1050_0000_1050_0312) &&
         (iVar2 = file_read_check((long)param_2,
                                  (undefined **)&PTR_DAT_1050_0000_1050_5812,
                                  (dword *)&g_HeapContext), iVar2 == 0x0))
      {
        g_LastFileErrorMsgID = (undefined *)0x6d2;
        return 0x0;
      }
      return 0x1;
    }
    iVar2 = file_read_check((long)param_2,&local_8,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar2 == 0x0) break;
    iVar3 = local_a * 0xc + (int)param_1;
    *(undefined2 *)(iVar3 + 0x20) = (undefined2)local_8;
    *(undefined2 *)(iVar3 + 0x22) = local_8._2_2_;
    iVar2 = file_context_remap_id_by_version_logic
                      ((int)(void *)param_2,(int)((ulong)param_2 >> 0x10),local_4);
    *(int *)(iVar3 + 0x24) = iVar2;
    if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
    {
      iVar2 = local_a * 0xc + (int)param_1;
      *(undefined2 *)(iVar2 + 0x26) = 0x3;
      *(undefined4 *)(iVar2 + 0x28) = 0x0;
    }
    else
    {
      iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
      if (iVar2 == 0x0)
      {
        g_LastFileErrorMsgID = (undefined *)0x6d2;
        return 0x0;
      }
      iVar2 = file_read_check((long)param_2,&local_8,unaff_SS);
      if (iVar2 == 0x0)
      {
        g_LastFileErrorMsgID = (undefined *)0x6d2;
        return 0x0;
      }
      iVar2 = local_a * 0xc + (int)param_1;
      *(int *)(iVar2 + 0x26) = local_4;
      *(undefined4 *)(iVar2 + 0x28) = local_8;
    }
    local_a += 0x1;
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
}



// Serializes Type 0xE036 build item state, including the 4-byte parent ID at offset
// 0x20.

int __stdcall16far
UI_Build_Item_TypeE036_Save_to_File_Logic_de7c(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  void *unaff_SS;
  undefined4 local_10 [0x3];
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(this_ptr,file_ctx);
  iVar2 = 0x0;
  if (uVar1 != 0x0)
  {
    local_10[0x0] = *(undefined4 *)((int)(void *)this_ptr + 0x20);
    iVar2 = file_write_check((long)file_ctx,local_10,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    iVar2 = 0x1;
  }
  return iVar2;
}



int __stdcall16far
UI_Build_Item_TypeE036_Load_from_File_Logic_dec4(u32 this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  undefined2 in_stack_0000000a;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(this_ptr,file_ctx);
  iVar2 = 0x0;
  if (uVar1 != 0x0)
  {
    if (0x1 < (int)PTR_DAT_1050_0000_1050_0312)
    {
      iVar2 = file_read_check((long)_file_ctx,(void *)((int)this_ptr + 0x20),
                              (void *)(this_ptr >> 0x10));
      if (iVar2 == 0x0)
      {
        g_LastFileErrorMsgID = (undefined *)0x6d2;
        return 0x0;
      }
    }
    iVar2 = 0x1;
  }
  return iVar2;
}



// A complex serialization function for a specialized sub-dialog, handling colony
// objects and many state variables.

undefined2 __stdcall16far
UI_SubDialog_Type5E16_Serialize_to_File(void *param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  int iVar3;
  void *handle_wrapper;
  void *unaff_SS;
  char *str;
  undefined4 local_14 [0x2];
  undefined4 local_c;
  undefined4 local_6;
  
  uVar1 = UI_Window_Save_to_File_Logic_16d6(param_1,param_2);
  if (uVar1 != 0x0)
  {
    handle_wrapper = (void *)((ulong)param_1 >> 0x10);
    iVar3 = (int)param_1;
    local_6 = *(undefined4 *)(iVar3 + 0xc);
    str = (char *)((ulong)param_2 >> 0x10);
    iVar2 = file_context_serialize_collection_logic((void *)param_2,str);
    if (iVar2 != 0x0)
    {
      local_14[0x0] = *(undefined4 *)(iVar3 + 0x10);
      iVar2 = file_write_check((long)param_2,local_14,unaff_SS);
      if (iVar2 != 0x0)
      {
        local_c._0_2_ = *(undefined2 *)(iVar3 + 0x18);
        iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
        if (iVar2 != 0x0)
        {
          local_c._0_2_ = *(undefined2 *)(iVar3 + 0x1a);
          iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
          if (iVar2 != 0x0)
          {
            local_c = CONCAT22(local_c._2_2_,*(undefined2 *)(iVar3 + 0x1c));
            iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
            if (iVar2 != 0x0)
            {
              local_c = *(undefined4 *)(iVar3 + 0x1e);
              iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
              if (iVar2 != 0x0)
              {
                local_c._0_2_ = *(undefined2 *)(iVar3 + 0x22);
                iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
                if (iVar2 != 0x0)
                {
                  local_c._0_2_ = *(undefined2 *)(iVar3 + 0x24);
                  iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
                  if (iVar2 != 0x0)
                  {
                    iVar2 = file_write_check((long)param_2,(void *)(iVar3 + 0x26),
                                             handle_wrapper);
                    if (iVar2 != 0x0)
                    {
                      iVar2 = file_write_check((long)param_2,(void *)(iVar3 + 0x14e),
                                               handle_wrapper);
                      if (iVar2 != 0x0)
                      {
                        iVar2 = file_write_check((long)param_2,(void *)(iVar3 + 0x1a2),
                                                 handle_wrapper);
                        if (iVar2 != 0x0)
                        {
                          Colony_Object_Save_to_File_Logic_32e4
                                    ((void *)(void *)*(undefined4 *)(iVar3 + 0x1f6),
                                     (void *)((ulong)*(undefined4 *)(iVar3 + 0x1f6) >>
                                             0x10));
                          iVar2 = file_context_write_string_with_terminator_logic
                                            ((void *)param_2,str);
                          if (iVar2 != 0x0)
                          {
                            local_c = CONCAT22(local_c._2_2_,
                                               *(undefined2 *)(iVar3 + 0x1fe));
                            iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
                            if (iVar2 != 0x0)
                            {
                              local_c = *(undefined4 *)(iVar3 + 0x200);
                              iVar2 = file_write_check((long)param_2,&local_c,unaff_SS);
                              if (iVar2 != 0x0)
                              {
                                local_c._0_2_ = *(undefined2 *)(iVar3 + 0x204);
                                iVar2 = file_write_check((long)param_2,&local_c,unaff_SS
                                                        );
                                if (iVar2 != 0x0)
                                {
                                  local_c._0_2_ = *(undefined2 *)(iVar3 + 0x206);
                                  iVar2 = file_write_check((long)param_2,&local_c,
                                                           unaff_SS);
                                  if (iVar2 != 0x0)
                                  {
                                    local_c._0_2_ = *(undefined2 *)(iVar3 + 0x208);
                                    iVar2 = file_write_check((long)param_2,&local_c,
                                                             unaff_SS);
                                    if (iVar2 != 0x0)
                                    {
                                      local_c._0_2_ = *(undefined2 *)(iVar3 + 0x20a);
                                      iVar2 = file_write_check((long)param_2,&local_c,
                                                               unaff_SS);
                                      if (iVar2 != 0x0)
                                      {
                                        local_c._0_2_ = *(undefined2 *)(iVar3 + 0x20c);
                                        iVar2 = file_write_check((long)param_2,&local_c,
                                                                 unaff_SS);
                                        if (iVar2 != 0x0)
                                        {
                                          local_c._0_2_ = *(undefined2 *)(iVar3 + 0x20e)
                                          ;
                                          iVar2 = file_write_check((long)param_2,
                                                                   &local_c,unaff_SS);
                                          if (iVar2 != 0x0)
                                          {
                                            local_c = CONCAT22(local_c._2_2_,
                                                               *(undefined2 *)
                                                                (iVar3 + 0x214));
                                            iVar2 = file_write_check((long)param_2,
                                                                     &local_c,unaff_SS);
                                            if (iVar2 != 0x0)
                                            {
                                              local_c = *(undefined4 *)(iVar3 + 0x216);
                                              iVar2 = file_write_check((long)param_2,
                                                                       &local_c,unaff_SS
                                                                      );
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
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// The corresponding deserialization function for the specialized sub-dialog type 5E16.

undefined2 __stdcall16far
UI_SubDialog_Type5E16_Deserialize_from_File(u32 param_1,void *param_2)
{
  undefined2 uVar1;
  u16 uVar2;
  int iVar3;
  void *buffer;
  char *pcVar4;
  char *pcVar5;
  void *in_DX;
  void *pvVar6;
  int iVar7;
  void *handle_wrapper;
  void *unaff_SS;
  void *file_ctx;
  int local_412;
  char local_408 [0x400];
  undefined2 local_8;
  undefined4 local_6;
  
  file_ctx = (void *)param_2;
  pcVar5 = (char *)((ulong)param_2 >> 0x10);
  uVar2 = UI_Window_Load_from_File_Logic_1730(param_1,file_ctx);
  if (uVar2 == 0x0)
  {
    return 0x0;
  }
  local_6 = 0x0;
  iVar3 = file_context_deserialize_collection_logic(file_ctx,pcVar5);
  if (iVar3 != 0x0)
  {
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar7 = (int)param_1;
    *(undefined4 *)(iVar7 + 0xc) = local_6;
    iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x10),handle_wrapper);
    if (((((iVar3 != 0x0) &&
          (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x18),handle_wrapper),
          iVar3 != 0x0)) &&
         (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x1a),handle_wrapper),
         iVar3 != 0x0)) &&
        ((iVar3 = file_read_check((long)param_2,&local_8,unaff_SS), iVar3 != 0x0 &&
         (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x1e),handle_wrapper),
         iVar3 != 0x0)))) &&
       (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x22),handle_wrapper),
       iVar3 != 0x0))
    {
      *(undefined2 *)(iVar7 + 0x1c) = local_8;
      iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x24),handle_wrapper);
      if ((iVar3 != 0x0) &&
         (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x26),handle_wrapper),
         iVar3 != 0x0))
      {
        if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
        {
          buffer = allocate_memory(0x540054);
          iVar3 = file_read_check((long)param_2,buffer,in_DX);
          if (iVar3 == 0x0)
          {
LAB_1038_626a:
            g_LastFileErrorMsgID = (undefined *)0x6d2;
            free_if_not_null(buffer);
            return 0x0;
          }
          local_412 = 0x0;
          do
          {
            iVar3 = file_context_remap_id_by_version_logic
                              ((int)file_ctx,(int)pcVar5,local_412);
            uVar1 = *(undefined2 *)((int)buffer + local_412 * 0x4 + 0x2);
            *(undefined2 *)(iVar7 + iVar3 * 0x4 + 0x14e) =
                 *(undefined2 *)(local_412 * 0x4 + (int)buffer);
            *(undefined2 *)(iVar7 + iVar3 * 0x4 + 0x150) = uVar1;
            local_412 += 0x1;
          } while (local_412 < 0x15);
          iVar3 = file_read_check((long)param_2,buffer,in_DX);
          if (iVar3 == 0x0) goto LAB_1038_626a;
          local_412 = 0x0;
          do
          {
            iVar3 = file_context_remap_id_by_version_logic
                              ((int)file_ctx,(int)pcVar5,local_412);
            pvVar6 = (void *)*(undefined2 *)((int)buffer + local_412 * 0x4 + 0x2);
            *(undefined2 *)(iVar7 + iVar3 * 0x4 + 0x1a2) =
                 *(undefined2 *)(local_412 * 0x4 + (int)buffer);
            *(undefined2 *)(iVar7 + iVar3 * 0x4 + 0x1a4) = pvVar6;
            local_412 += 0x1;
          } while (local_412 < 0x15);
          free_if_not_null(buffer);
          in_DX = pvVar6;
        }
        else
        {
          iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x14e),handle_wrapper);
          if (iVar3 == 0x0)
          {
            g_LastFileErrorMsgID = (undefined *)0x6d2;
            return 0x0;
          }
          iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x1a2),handle_wrapper);
          if (iVar3 == 0x0)
          {
            g_LastFileErrorMsgID = (undefined *)0x6d2;
            return 0x0;
          }
        }
        Colony_Object_Load_from_File_Logic_33f0(*(u32 *)(iVar7 + 0x1f6),file_ctx);
        pcVar4 = local_408;
        file_context_read_null_terminated_string_logic(file_ctx,pcVar5);
        if (pcVar4 != NULL)
        {
          pcVar5 = strdup_allocate(local_408);
          *(undefined2 *)(iVar7 + 0x1fa) = pcVar5;
          *(undefined2 *)(iVar7 + 0x1fc) = in_DX;
          iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x1fe),handle_wrapper);
          if (((((iVar3 != 0x0) &&
                (iVar3 = file_read_check((long)param_2,
                                         (void *)CONCAT11((char)(param_1 >> 0x8) +
                                                          '\x02',(char)param_1),
                                         handle_wrapper), iVar3 != 0x0)) &&
               (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x204),
                                        handle_wrapper), iVar3 != 0x0)) &&
              (((iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x206),
                                         handle_wrapper), iVar3 != 0x0 &&
                (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x208),
                                         handle_wrapper), iVar3 != 0x0)) &&
               ((iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x20a),
                                         handle_wrapper), iVar3 != 0x0 &&
                ((iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x20c),
                                          handle_wrapper), iVar3 != 0x0 &&
                 (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x20e),
                                          handle_wrapper), iVar3 != 0x0)))))))) &&
             (((int)PTR_DAT_1050_0000_1050_0312 < 0x2 ||
              ((iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x214),
                                        handle_wrapper), iVar3 != 0x0 &&
               (iVar3 = file_read_check((long)param_2,(void *)(iVar7 + 0x216),
                                        handle_wrapper), iVar3 != 0x0))))))
          {
            return 0x1;
          }
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
      }
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
}



// Serializes a specialized resource list and its associated metadata (ID, counts, map
// pointers) to a save file. Used for complex turn-state tracking.

u16 __stdcall16far
Simulator_Resource_List_Save_to_File_Logic_75ca(astruct_125 *param_1,void *param_2)
{
  int in_AX;
  int iVar1;
  astruct_125 *uVar2;
  undefined2 uVar3;
  void *unaff_SS;
  void *this;
  void *container_obj;
  u32 local_10 [0x2];
  u32 local_8;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (astruct_125 *)param_1;
  this = (void *)param_2;
  container_obj = (void *)((ulong)param_2 >> 0x10);
  file_context_serialize_contained_list_logic(this,container_obj);
  if (in_AX != 0x0)
  {
    local_10[0x0] = uVar2->field5_0x8;
    iVar1 = file_write_check((long)param_2,local_10,unaff_SS);
    if (iVar1 != 0x0)
    {
      iVar1 = file_context_serialize_map_logic(this,container_obj);
      if (iVar1 != 0x0)
      {
        local_8._0_2_ = uVar2->field6_0xc;
        iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
        if (iVar1 != 0x0)
        {
          local_8._0_2_ = uVar2->field8_0x12;
          iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
          if (iVar1 != 0x0)
          {
            local_8 = CONCAT22(local_8._2_2_,uVar2->field9_0x14);
            iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
            if (iVar1 != 0x0)
            {
              local_8 = uVar2->field10_0x16;
              iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
              if (iVar1 != 0x0)
              {
                iVar1 = file_context_serialize_3word_struct_logic(this,container_obj);
                if (iVar1 != 0x0)
                {
                  local_8 = uVar2->field17_0x20;
                  iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
                  if (iVar1 != 0x0)
                  {
                    local_8._0_2_ = uVar2->field18_0x24;
                    iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
                    if (iVar1 != 0x0)
                    {
                      local_8._0_2_ = uVar2->field19_0x26;
                      iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
                      if (iVar1 != 0x0)
                      {
                        local_8 = CONCAT22(local_8._2_2_,uVar2->field20_0x28);
                        iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
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
        }
      }
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



// Deserializes a specialized resource list and restores its state from a save file.
// Handles ID re-mapping for cross-version compatibility.

u16 __stdcall16far
Simulator_Resource_List_Load_from_File_Logic_774e(void *arg1,void *file_ctx)
{
  void *pvVar1;
  int iVar2;
  void *handle_wrapper;
  void *unaff_SS;
  void *this;
  long *map_ptr;
  undefined2 local_8;
  int local_6;
  undefined2 local_4;
  
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
    return 0x1;
  }
  pvVar1 = (void *)arg1;
  handle_wrapper = (void *)((ulong)arg1 >> 0x10);
  this = (void *)file_ctx;
  map_ptr = (long *)((ulong)file_ctx >> 0x10);
  iVar2 = file_context_deserialize_resource_object_logic(this,map_ptr);
  if (((((iVar2 != 0x0) &&
        (iVar2 = file_read_check((long)file_ctx,(void *)((int)pvVar1 + 0x8),
                                 handle_wrapper), iVar2 != 0x0)) &&
       (iVar2 = file_context_deserialize_map_logic(this,map_ptr), iVar2 != 0x0)) &&
      ((((iVar2 = file_read_check((long)file_ctx,&local_4,unaff_SS), iVar2 != 0x0 &&
         (iVar2 = file_read_check((long)file_ctx,&local_6,unaff_SS), iVar2 != 0x0)) &&
        ((iVar2 = file_read_check((long)file_ctx,&local_8,unaff_SS), iVar2 != 0x0 &&
         ((iVar2 = file_read_check((long)file_ctx,(void *)((int)pvVar1 + 0x16),
                                   handle_wrapper), iVar2 != 0x0 &&
          (iVar2 = file_context_deserialize_3word_struct_logic(this,map_ptr),
          iVar2 != 0x0)))))) &&
       (iVar2 = file_read_check((long)file_ctx,(void *)((int)pvVar1 + 0x20),
                                handle_wrapper), iVar2 != 0x0)))) &&
     (((iVar2 = file_read_check((long)file_ctx,(void *)((int)pvVar1 + 0x24),
                                handle_wrapper), iVar2 != 0x0 &&
       (iVar2 = file_read_check((long)file_ctx,(void *)((int)pvVar1 + 0x26),
                                handle_wrapper), iVar2 != 0x0)) &&
      (iVar2 = file_read_check((long)file_ctx,(void *)((int)pvVar1 + 0x28),
                               handle_wrapper), iVar2 != 0x0))))
  {
    *(undefined2 *)((int)pvVar1 + 0xc) = local_4;
    iVar2 = file_context_remap_id_by_version_logic((int)this,(int)map_ptr,local_6);
    *(int *)((int)pvVar1 + 0x12) = iVar2;
    *(undefined2 *)((int)pvVar1 + 0x14) = local_8;
    return 0x1;
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
}



// Serializes the entire Turn Manager state to a save file, including the counts and
// data for both of its managed linked lists.

u16 __stdcall16far
Simulator_Turn_Manager_Save_to_File_Logic_7b20(void *this_ptr,void *file_ctx)
{
  undefined4 uVar1;
  int iVar2;
  u16 uVar3;
  undefined2 uVar4;
  void *unaff_SS;
  long lVar5;
  void *this_ptr_00;
  undefined2 local_1c;
  undefined4 uStack_1a;
  undefined4 uStack_10;
  undefined1 local_c [0x8];
  undefined2 local_4;
  
  iVar2 = file_context_write_footer_marker_logic((void *)file_ctx);
  if (iVar2 != 0x0)
  {
    local_1c = *(undefined2 *)((int)*(undefined4 *)this_ptr + 0x8);
    local_4 = local_1c;
    iVar2 = file_write_check((long)file_ctx,&local_1c,unaff_SS);
    if (iVar2 != 0x0)
    {
      init_long_pair(local_c,*(long *)this_ptr);
      do
      {
        lVar5 = get_next_list_item(local_c);
        uStack_10 = lVar5;
        if (lVar5 == 0x0)
        {
          uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
          uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x4);
          local_1c = *(undefined2 *)((int)uVar1 + 0x8);
          local_4 = local_1c;
          iVar2 = file_write_check((long)file_ctx,&local_4,unaff_SS);
          if (iVar2 == 0x0)
          {
            return 0x0;
          }
          init_long_pair(local_c,*(long *)((int)(void *)this_ptr + 0x4));
          do
          {
            this_ptr_00 = (void *)get_next_list_item(local_c);
            if (this_ptr_00 == NULL)
            {
              return 0x1;
            }
            uStack_1a = this_ptr_00;
            uVar3 = Simulator_Complex_List_Save_to_File_Logic_b768(this_ptr_00,file_ctx)
            ;
          } while (uVar3 != 0x0);
          return 0x0;
        }
        uVar3 = Simulator_Resource_List_Save_to_File_Logic_75ca(lVar5,file_ctx);
      } while (uVar3 != 0x0);
    }
  }
  return 0x0;
}



// Deserialization routine for a complex collection of objects. Reads a footer marker,
// then iteratively instantiates and loads 'Resource Change Items' and 'B932' UI
// components from a save file.

void * __stdcall16far
Simulator_Complex_Collection_Load_from_File_7c02(undefined4 *param_1,void *param_2)
{
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  u16 uVar5;
  void *in_DX;
  void *extraout_DX;
  void *extraout_DX_00;
  void *unaff_SS;
  void *this_ptr;
  void *pvVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int local_12 [0x2];
  void *pvStack_e;
  int local_4;
  
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
LAB_1038_7c0d:
    return (void *)CONCAT22(0x1,in_DX);
  }
  iVar2 = file_context_find_footer_marker_logic();
  if ((iVar2 != 0x0) &&
     (iVar2 = file_read_check((long)param_2,&local_4,unaff_SS), iVar2 != 0x0))
  {
    while( true )
    {
      pvVar6 = (void *)param_2;
      uVar7 = (undefined2)((ulong)param_2 >> 0x10);
      if (local_4 == 0x0) break;
      local_4 = local_4 + -0x1;
      pvVar3 = allocate_memory(CONCAT22(pvVar6,0x2a));
      if (in_DX == NULL && pvVar3 == NULL)
      {
        pvStack_e = NULL;
      }
      else
      {
        pvStack_e = Simulator_Resource_Change_Item_ctor_init_6520
                              ((void *)CONCAT22(in_DX,pvVar3));
      }
      in_DX = (void *)((ulong)pvStack_e >> 0x10);
      uVar5 = Simulator_Resource_List_Load_from_File_Logic_774e
                        (pvStack_e,(void *)CONCAT22(uVar7,pvVar6));
      if (uVar5 == 0x0) goto LAB_1038_7c23;
      puVar1 = (undefined2 *)((int)*(undefined4 *)*param_1 + 0x4);
      (*(code *)*puVar1)();
      in_DX = extraout_DX;
    }
    local_4 = local_4 + -0x1;
    iVar2 = file_read_check((long)param_2,local_12,unaff_SS);
    if (iVar2 != 0x0)
    {
      while (local_12[0x0] != 0x0)
      {
        pvVar3 = pvVar6;
        uVar8 = uVar7;
        local_12[0x0] = local_12[0x0] + -0x1;
        pvVar4 = allocate_memory(CONCAT22(pvVar6,0x14));
        if (in_DX == NULL && pvVar4 == NULL)
        {
          this_ptr = NULL;
        }
        else
        {
          this_ptr = UI_Component_Type_B932_ctor_ae6c((void *)CONCAT22(in_DX,pvVar4));
        }
        in_DX = (void *)((ulong)this_ptr >> 0x10);
        uVar5 = Simulator_Complex_List_Load_from_File_Logic_b836
                          (this_ptr,(void *)CONCAT22(uVar8,pvVar3));
        if (uVar5 == 0x0) goto LAB_1038_7c23;
        puVar1 = (undefined2 *)((int)*(undefined4 *)((undefined4 *)param_1)[0x1] + 0x4);
        (*(code *)*puVar1)();
        in_DX = extraout_DX_00;
      }
      goto LAB_1038_7c0d;
    }
  }
LAB_1038_7c23:
  return (void *)ZEXT24(in_DX);
}
