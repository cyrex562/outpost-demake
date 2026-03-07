/*
 * Source: outpost.c
 * Theme: file_io
 * Chunk: 3/9
 * Original lines (combined): 22771-33232
 * Boundaries: top-level declarations/definitions only
 */




u16 __stdcall16far
UI_Object_Collection_Serialize_to_File_ba38(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  u32 local_2a;
  u16 local_1e;
  undefined1 local_14 [0x8];
  u16 local_c;
  u32 local_a;
  u16 local_6;
  
  iVar1 = file_context_write_footer_marker_logic((void *)param_2);
  if (iVar1 != 0x0)
  {
    uVar3 = (undefined2)(param_1 >> 0x10);
    iVar2 = (int)param_1;
    local_c = *(u16 *)(iVar2 + 0x22);
    iVar1 = file_write_check((long)param_2,&local_c,unaff_SS);
    if (iVar1 != 0x0)
    {
      if (*(long *)(iVar2 + 0xa) == 0x0)
      {
        local_c = 0x0;
      }
      else
      {
        local_c = *(u16 *)((int)*(undefined4 *)(iVar2 + 0xa) + 0x8);
      }
      local_1e = local_c;
      iVar1 = file_write_check((long)param_2,&local_1e,unaff_SS);
      if (iVar1 != 0x0)
      {
        init_long_pair(local_14,*(long *)(iVar2 + 0xa));
        do
        {
          local_a = get_next_list_item(local_14);
          if ((int)(local_a >> 0x10) == 0x0 && (int)local_a == 0x0)
          {
            return 0x1;
          }
          iVar1 = file_context_write_string_with_terminator_logic
                            ((void *)param_2,(char *)((ulong)param_2 >> 0x10));
          if (iVar1 == 0x0) break;
          local_6 = *(u16 *)((int)local_a + 0x8);
          iVar1 = file_write_check((long)param_2,&local_6,unaff_SS);
          if (iVar1 == 0x0) break;
          local_2a = *(u32 *)((int)local_a + 0xa);
          iVar1 = file_write_check((long)param_2,&local_2a,unaff_SS);
          if (iVar1 == 0x0) break;
          local_6 = *(u16 *)((int)local_a + 0xe);
          iVar1 = file_write_check((long)param_2,&local_6,unaff_SS);
        } while (iVar1 != 0x0);
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// WARNING: Variable defined which should be unmapped: local_13c

u16 __stdcall16far
UI_Object_Collection_Deserialize_from_File_bb5e(u32 param_1,void *param_2)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  astruct_491 *this;
  void *pvVar4;
  char *pcVar5;
  void *handle_wrapper;
  uint in_DX;
  uint uVar6;
  uint uVar7;
  uint extraout_DX;
  void *unaff_SS;
  u32 local_13c;
  u32 local_122;
  u16 local_11e;
  u32 local_11c;
  char local_118 [0x100];
  u16 local_18;
  u16 local_14;
  u16 local_10;
  u32 local_8;
  
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
    return 0x1;
  }
  iVar2 = file_context_find_footer_marker_logic();
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d4;
  }
  else
  {
    iVar2 = (int)param_1;
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar3 = file_read_check((long)param_2,(void *)(iVar2 + 0x22),handle_wrapper);
    if ((iVar3 != 0x0) &&
       (iVar3 = file_read_check((long)param_2,&local_10,unaff_SS), iVar3 != 0x0))
    {
      if (local_10 == 0x0)
      {
        return 0x1;
      }
      this = allocate_memory(CONCAT22((undefined2)local_13c,0xc));
      uVar6 = in_DX | (uint)this;
      if (uVar6 == 0x0)
      {
        pvVar4 = NULL;
        uVar6 = 0x0;
      }
      else
      {
        pvVar4 = construct_object_with_vtable(this,in_DX);
      }
      *(undefined2 *)(iVar2 + 0xa) = pvVar4;
      *(uint *)(iVar2 + 0xc) = uVar6;
      local_11e = 0x0;
      while( true )
      {
        if (local_10 <= local_11e)
        {
          return 0x1;
        }
        pvVar4 = allocate_memory(CONCAT22((undefined2)local_13c,0x12));
        uVar6 |= (uint)pvVar4;
        if (uVar6 == 0x0)
        {
          pvVar4 = NULL;
          uVar6 = 0x0;
        }
        else
        {
          pvVar4 = UI_Element_Subclass_ctor_BDC4(pvVar4);
        }
        local_11c = CONCAT22(uVar6,pvVar4);
        pcVar5 = local_118;
        uVar7 = uVar6;
        file_context_read_null_terminated_string_logic
                  ((void *)param_2,(char *)((ulong)param_2 >> 0x10));
        if ((((pcVar5 == NULL) ||
             (iVar3 = file_read_check((long)param_2,&local_14,unaff_SS), iVar3 == 0x0))
            || (iVar3 = file_read_check((long)param_2,&local_8,unaff_SS), iVar3 == 0x0))
           || (iVar3 = file_read_check((long)param_2,&local_18,unaff_SS), iVar3 == 0x0))
        break;
        pcVar5 = strdup_allocate(local_118);
        *(undefined2 *)((int)pvVar4 + 0x4) = pcVar5;
        *(uint *)((int)pvVar4 + 0x6) = uVar7;
        *(u16 *)((int)pvVar4 + 0x8) = local_14;
        *(u32 *)((int)pvVar4 + 0xa) = local_8;
        *(u16 *)((int)pvVar4 + 0xe) = local_18;
        puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xa) + 0x8);
        (*(code *)*puVar1)();
        local_11e += 0x1;
        uVar6 = extraout_DX;
      }
      if (local_11c != 0x0)
      {
        (*(code *)*(undefined2 *)*(undefined2 **)local_11c)
                  (0x1000,pvVar4,uVar6,0x1,pvVar4,uVar6);
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



u16 __stdcall16far UI_Object_Field_E_Serialize_to_File_c98e(u32 param_1,void *param_2)
{
  int iVar1;
  u16 uVar2;
  void *unaff_SS;
  u32 local_10;
  
  iVar1 = file_context_write_footer_marker_logic((void *)param_2);
  uVar2 = 0x0;
  if (iVar1 != 0x0)
  {
    local_10 = *(u32 *)((int)param_1 + 0xe);
    iVar1 = file_write_check((long)param_2,&local_10,unaff_SS);
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    uVar2 = 0x1;
  }
  return uVar2;
}



u16 __stdcall16far
UI_Object_Field_E_Deserialize_from_File_c9d4(u32 param_1,void *param_2)
{
  int iVar1;
  
  if (0x1 < (int)PTR_DAT_1050_0000_1050_0312)
  {
    iVar1 = file_context_find_footer_marker_logic();
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d4;
      return 0x0;
    }
    iVar1 = file_read_check((long)param_2,(void *)((int)param_1 + 0xe),
                            (void *)(param_1 >> 0x10));
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
  }
  return 0x1;
}



u16 __stdcall16far
UI_Object_Collection_TypeE5DA_Serialize_to_File(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  u32 local_30;
  u32 local_28;
  u32 local_24;
  u16 local_1c;
  u16 local_16;
  u32 local_10;
  undefined1 local_c [0x8];
  u16 local_4;
  
  iVar1 = file_context_write_footer_marker_logic((void *)param_2);
  if (iVar1 != 0x0)
  {
    uVar3 = (undefined2)(param_1 >> 0x10);
    iVar1 = (int)param_1;
    if (*(long *)(iVar1 + 0xa) == 0x0)
    {
      local_4 = 0x0;
    }
    else
    {
      local_4 = *(u16 *)((int)*(undefined4 *)(iVar1 + 0xa) + 0x8);
    }
    local_1c = local_4;
    iVar2 = file_write_check((long)param_2,&local_1c,unaff_SS);
    if (iVar2 != 0x0)
    {
      init_long_pair(local_c,*(long *)(iVar1 + 0xa));
      do
      {
        local_10 = get_next_list_item(local_c);
        iVar1 = (int)(local_10 >> 0x10);
        if (iVar1 == 0x0 && (int)local_10 == 0x0)
        {
          return 0x1;
        }
        local_24 = *(u32 *)((int)local_10 + 0x4);
        iVar1 = file_write_check((long)param_2,&local_24,unaff_SS);
        if (iVar1 == 0x0) break;
        local_28 = *(u32 *)((int)local_10 + 0x8);
        iVar1 = file_write_check((long)param_2,&local_28,unaff_SS);
        if (iVar1 == 0x0) break;
        local_16 = *(u16 *)((int)local_10 + 0xc);
        iVar1 = file_write_check((long)param_2,&local_16,unaff_SS);
        if (iVar1 == 0x0) break;
        local_30 = *(u32 *)((int)local_10 + 0xe);
        iVar1 = file_write_check((long)param_2,&local_30,unaff_SS);
        if (iVar1 == 0x0) break;
        local_16 = *(u16 *)((int)local_10 + 0x12);
        iVar1 = file_write_check((long)param_2,&local_16,unaff_SS);
      } while (iVar1 != 0x0);
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// WARNING: Variable defined which should be unmapped: local_38

u16 __stdcall16far
UI_Component_Collection_Deserialize_from_File_e70e(u32 param_1,void *param_2)
{
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  uint in_DX;
  uint extraout_DX;
  void *handle_wrapper;
  void *unaff_SS;
  u32 local_38;
  u32 local_16;
  u16 local_12;
  u32 local_e;
  u16 local_a;
  u16 local_4;
  
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
    return 0x1;
  }
  iVar2 = file_context_find_footer_marker_logic();
  if (iVar2 != 0x0)
  {
    iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar2 != 0x0)
    {
      if (local_4 == 0x0)
      {
        return 0x1;
      }
      local_a = 0x0;
      while( true )
      {
        if (local_4 <= local_a)
        {
          return 0x1;
        }
        pvVar3 = allocate_memory(CONCAT22((undefined2)local_38,0x14));
        handle_wrapper = (void *)(in_DX | (uint)pvVar3);
        if (handle_wrapper == NULL)
        {
          pvVar3 = NULL;
          handle_wrapper = NULL;
        }
        else
        {
          pvVar3 = UI_Component_ctor_DD4A_zero(pvVar3);
        }
        local_e = CONCAT22(handle_wrapper,pvVar3);
        iVar2 = file_read_check((long)param_2,(void *)((int)pvVar3 + 0x4),handle_wrapper
                               );
        if ((((iVar2 == 0x0) ||
             (iVar2 = file_read_check((long)param_2,(void *)((int)local_e + 0x8),
                                      (void *)(local_e >> 0x10)), iVar2 == 0x0)) ||
            (iVar2 = file_read_check((long)param_2,&local_12,unaff_SS), iVar2 == 0x0))
           || ((iVar2 = file_read_check((long)param_2,(void *)((int)local_e + 0xe),
                                        (void *)(local_e >> 0x10)), iVar2 == 0x0 ||
               (iVar2 = file_read_check((long)param_2,(void *)((int)local_e + 0x12),
                                        (void *)(local_e >> 0x10)), iVar2 == 0x0))))
        break;
        *(u16 *)((int)local_e + 0xc) = local_12;
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xa) + 0x4);
        (*(code *)*puVar1)();
        local_a += 0x1;
        in_DX = extraout_DX;
      }
      local_38._0_2_ = (undefined2)local_e;
      local_38._2_2_ = (undefined2)(local_e >> 0x10);
      if (local_e != 0x0)
      {
        (*(code *)*(undefined2 *)*(undefined2 **)local_e)
                  (0x1000,(undefined2)local_38,local_38._2_2_,0x1,(undefined2)local_38,
                   local_38._2_2_);
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



u16 __stdcall16far UI_Report_List_Serialize_to_File_Logic(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  u32 local_2a;
  u16 local_22;
  u16 local_1e;
  u16 local_18;
  u32 local_12;
  undefined1 local_e [0x8];
  u16 local_6;
  u16 local_4;
  
  iVar1 = file_context_write_footer_marker_logic((void *)param_2);
  if (iVar1 == 0x0)
  {
    return 0x0;
  }
  uVar3 = (undefined2)(param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(long *)(iVar1 + 0xa) == 0x0)
  {
    local_6 = 0x0;
  }
  else
  {
    local_6 = *(u16 *)((int)*(undefined4 *)(iVar1 + 0xa) + 0x8);
  }
  local_1e = local_6;
  iVar2 = file_write_check((long)param_2,&local_1e,unaff_SS);
  if (iVar2 != 0x0)
  {
    init_long_pair(local_e,*(long *)(iVar1 + 0xa));
    do
    {
      local_12 = get_next_list_item(local_e);
      iVar2 = (int)(local_12 >> 0x10);
      if (iVar2 == 0x0 && (int)local_12 == 0x0)
      {
        local_22 = *(u16 *)(iVar1 + 0xe);
        iVar2 = file_write_check((long)param_2,&local_22,unaff_SS);
        if (iVar2 == 0x0)
        {
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
        local_22 = *(u16 *)(iVar1 + 0x10);
        iVar2 = file_write_check((long)param_2,&local_22,unaff_SS);
        if (iVar2 == 0x0)
        {
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
        if (*(int *)(iVar1 + 0x18) != 0x0)
        {
          u16_1050_0e28 = *(u16 *)(iVar1 + 0x12);
          PTR_DAT_1050_0000_1050_0e30 = (undefined *)*(undefined2 *)(iVar1 + 0x14);
          PTR_DAT_1050_0000_1050_0ea8 = (undefined *)*(undefined2 *)(iVar1 + 0x16);
        }
        local_4 = 0x0;
        while( true )
        {
          if (0x9 < (int)local_4)
          {
            local_4 = 0x0;
            while( true )
            {
              if (0x2 < (int)local_4)
              {
                if (*(int *)(iVar1 + 0x18) != 0x0)
                {
                  u16_1050_0e28 = 0x0;
                  PTR_DAT_1050_0000_1050_0e30 = NULL;
                  PTR_DAT_1050_0000_1050_0ea8 = NULL;
                }
                return 0x1;
              }
              local_1e = *(u16 *)(local_4 * 0x8 + 0xea8);
              iVar2 = file_write_check((long)param_2,&local_1e,unaff_SS);
              if (iVar2 == 0x0) break;
              local_4 += 0x1;
            }
            g_LastFileErrorMsgID = (undefined *)0x6d0;
            return 0x0;
          }
          local_1e = *(u16 *)(local_4 * 0x8 + 0xe28);
          iVar2 = file_write_check((long)param_2,&local_1e,unaff_SS);
          if (iVar2 == 0x0) break;
          local_4 += 0x1;
        }
        g_LastFileErrorMsgID = (undefined *)0x6d0;
        return 0x0;
      }
      local_18 = *(u16 *)((int)local_12 + 0x4);
      iVar2 = file_write_check((long)param_2,&local_18,unaff_SS);
      if (iVar2 == 0x0)
      {
        g_LastFileErrorMsgID = (undefined *)0x6d0;
        return 0x0;
      }
      local_2a = *(u32 *)((int)local_12 + 0x6);
      iVar2 = file_write_check((long)param_2,&local_2a,unaff_SS);
    } while (iVar2 != 0x0);
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



u16 __stdcall16far UI_Report_List_Deserialize_from_File_Logic(u32 param_1,void *param_2)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  u16 uVar5;
  int in_DX;
  int extraout_DX;
  void *handle_wrapper;
  void *unaff_SS;
  undefined2 in_stack_0000ffce;
  u32 local_2e;
  u16 local_2a;
  u16 local_26;
  u32 local_1a;
  u32 local_16;
  u16 local_12;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  iVar2 = file_context_find_footer_marker_logic();
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d4;
  }
  else
  {
    iVar2 = file_read_check((long)param_2,&local_6,unaff_SS);
    if (iVar2 != 0x0)
    {
      local_8 = 0x0;
      while( true )
      {
        iVar2 = (int)param_1;
        handle_wrapper = (void *)(param_1 >> 0x10);
        if (local_6 <= local_8) break;
        pvVar4 = allocate_memory(CONCAT22(in_stack_0000ffce,0xa));
        local_1a = CONCAT22(in_DX,pvVar4);
        if (in_DX == 0x0 && pvVar4 == NULL)
        {
          local_16 = 0x0;
        }
        else
        {
          *(char **)local_1a = (char *)s_1_1050_389a;
          *(undefined2 *)((int)pvVar4 + 0x2) = 0x1008;
          *(undefined2 *)local_1a = 0xea8;
          *(undefined2 *)((int)pvVar4 + 0x2) = 0x1010;
          local_16 = local_1a;
        }
        iVar3 = file_read_check((long)param_2,&local_12,unaff_SS);
        if ((iVar3 == 0x0) ||
           (iVar3 = file_read_check((long)param_2,(void *)((int)local_16 + 0x6),
                                    (void *)(local_16 >> 0x10)), iVar3 == 0x0))
        {
          local_1a = local_16;
          if (local_16 != 0x0)
          {
            (*(code *)*(undefined2 *)*(undefined2 **)local_16)
                      (0x1008,(int)local_16,(int)(local_16 >> 0x10),0x1);
          }
          goto LAB_1010_0cb1;
        }
        *(u16 *)((int)local_16 + 0x4) = local_12;
        puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xa) + 0x8);
        (*(code *)*puVar1)();
        local_8 += 0x1;
        in_DX = extraout_DX;
      }
      iVar3 = file_read_check((long)param_2,(void *)(iVar2 + 0xe),handle_wrapper);
      if ((iVar3 != 0x0) &&
         (iVar2 = file_read_check((long)param_2,(void *)(iVar2 + 0x10),handle_wrapper),
         iVar2 != 0x0))
      {
        for (local_4 = 0x0; (int)local_4 < 0xa; local_4 += 0x1)
        {
          iVar2 = file_read_check((long)param_2,&local_2a,unaff_SS);
          if (iVar2 == 0x0) goto LAB_1010_0cb1;
          uVar5 = local_4;
          if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
          {
            uVar5 = remap_id_type_A_to_type_B_logic
                              ((int)(void *)param_2,(int)((ulong)param_2 >> 0x10),
                               local_4);
          }
          *(u16 *)(uVar5 * 0x8 + 0xe28) = local_2a;
          local_26 = uVar5;
        }
        if (0x2 < (int)PTR_DAT_1050_0000_1050_0312)
        {
          local_4 = 0x0;
          do
          {
            iVar2 = file_read_check((long)param_2,&local_2a,unaff_SS);
            if (iVar2 == 0x0) goto LAB_1010_0cb1;
            *(u16 *)(local_4 * 0x8 + 0xea8) = local_2a;
            local_4 += 0x1;
          } while ((int)local_4 < 0x3);
        }
        return 0x1;
      }
    }
LAB_1010_0cb1:
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



// Traverses a hierarchical UI tree structure using a 32-bit bitmask as a path. It
// starts from a base node (offset 0x56) and follows child pointers (offset 8) to find a
// specific leaf or sub-node.

void * __stdcall16far
UI_Element_Find_Node_by_Bitmask_Logic(void *this,long path_bitmask)
{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 in_stack_00000006;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*(int *)((int)this + 0x5a) == 0x0)
  {
    pvVar2 = (void *)*(undefined2 *)((int)this + 0x56);
    uVar5 = *(undefined2 *)((int)this + 0x58);
  }
  else
  {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)this + 0x56) + 0x8);
    uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar3 = (int)uVar1;
    iVar4 = *(int *)((int)this + 0x5a) * 0x4;
    pvVar2 = (void *)*(undefined2 *)(iVar3 + iVar4);
    uVar5 = *(undefined2 *)(iVar3 + iVar4 + 0x2);
  }
  uStack_8 = (void *)CONCAT22(uVar5,pvVar2);
  uStack_c = path_bitmask;
  if (path_bitmask == 0x0)
  {
    return NULL;
  }
  for (; (uStack_c & 0xf) != 0x0; uStack_c >>= 0x4)
  {
    uStack_8 = (void *)*(undefined4 *)
                        ((((byte)uStack_c & 0xf) - 0x1) * 0x4 +
                        (int)*(undefined4 *)((int)(void *)uStack_8 + 0x8));
  }
  return (void *)uStack_8;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Traverses hierarchical UI tree using 32-bit bitmask as path.
// Instantiates UI_TreeNode_Control with vtable at 1040:C54A.
// Performs indirect calls through [this] vtable offset 0x18 to add nodes.

void __stdcall16far
UI_Component_Build_Hierarchy_Path_Elements_Logic(void *this,long path_bitmask)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  int in_DX;
  ushort uVar4;
  int extraout_DX;
  int iVar5;
  int extraout_DX_00;
  undefined2 unaff_SI;
  undefined2 uVar6;
  undefined2 in_stack_00000006;
  undefined4 uVar7;
  long size;
  undefined2 uVar8;
  ulong uStack_c;
  undefined4 uStack_8;
  
  uVar7 = *(undefined4 *)((int)*(undefined4 *)((int)this + 0x56) + 0x8);
  uStack_8 = *(undefined4 *)((int)uVar7 + *(int *)((int)this + 0x5a) * 0x4);
  uStack_c = path_bitmask;
  if (path_bitmask != 0x0)
  {
    uVar6 = 0x1000;
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x4a));
    if (in_DX == 0x0 && pvVar3 == NULL)
    {
      pvVar3 = NULL;
      uVar4 = 0x0;
    }
    else
    {
      uVar6 = 0x1040;
      uVar4 = UI_TreeNode_Control_ctor_init_c54a
                        (pvVar3,in_DX,0x1,uStack_8,*(undefined2 *)((int)this + 0x22));
    }
    puVar1 = (undefined2 *)((int)*_this + 0x18);
    uVar7 = CONCAT22(this,uVar6);
    (*(code *)*puVar1)(uVar6,this,in_stack_00000006,0x1,pvVar3,uVar4);
    iVar5 = extraout_DX;
    for (; (uStack_c & 0xf) != 0x0; uStack_c >>= 0x4)
    {
      uVar2 = *(undefined4 *)((int)uStack_8 + 0x8);
      uStack_8 = *(undefined4 *)((((byte)uStack_c & 0xf) - 0x1) * 0x4 + (int)uVar2);
      size = CONCAT22((int)((ulong)uVar7 >> 0x10),0x4a);
      uVar6 = 0x1000;
      pvVar3 = allocate_memory(size);
      uVar8 = (undefined2)((ulong)size >> 0x10);
      if (iVar5 == 0x0 && pvVar3 == NULL)
      {
        pvVar3 = NULL;
        uVar4 = 0x0;
      }
      else
      {
        uVar6 = 0x1040;
        uVar4 = UI_TreeNode_Control_ctor_init_c54a
                          (pvVar3,iVar5,0x1,uStack_8,*(undefined2 *)((int)this + 0x22));
      }
      uVar7 = CONCAT22(uVar8,uVar4);
      puVar1 = (undefined2 *)((int)*_this + 0x18);
      (*(code *)*puVar1)(uVar6,this,in_stack_00000006,0x1,pvVar3,uVar4);
      iVar5 = extraout_DX_00;
    }
  }
  return;
}



u16 __stdcall16far
UI_Object_Fields_24_6A_7E_Serialize_to_File_3fc2(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  u16 local_c;
  u16 local_6;
  
  iVar1 = file_context_write_footer_marker_logic((void *)param_2);
  if (iVar1 != 0x0)
  {
    uVar3 = (undefined2)(param_1 >> 0x10);
    iVar2 = (int)param_1;
    local_c = *(u16 *)(iVar2 + 0x24);
    iVar1 = file_write_check((long)param_2,&local_c,unaff_SS);
    if (iVar1 != 0x0)
    {
      local_6 = *(u16 *)(iVar2 + 0x6a);
      iVar1 = file_write_check((long)param_2,&local_6,unaff_SS);
      if (iVar1 != 0x0)
      {
        local_6 = *(u16 *)(iVar2 + 0x7e);
        iVar1 = file_write_check((long)param_2,&local_6,unaff_SS);
        if (iVar1 != 0x0)
        {
          return 0x1;
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



u16 __stdcall16far
UI_Object_Fields_24_6A_7E_Deserialize_from_File_404a(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  void *handle_wrapper;
  void *unaff_SS;
  u16 local_4;
  
  iVar1 = file_context_find_footer_marker_logic();
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d4;
  }
  else
  {
    iVar1 = (int)param_1;
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x24),handle_wrapper);
    if (iVar2 != 0x0)
    {
      iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
      if (iVar2 != 0x0)
      {
        iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x7e),handle_wrapper);
        if (iVar2 != 0x0)
        {
          *(u16 *)(iVar1 + 0x6a) = local_4;
          return 0x1;
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



u16 __stdcall16far
UI_Global_Version_and_Field_82_Serialize_to_File_5dc6(u32 param_1,void *param_2)
{
  int iVar1;
  void *unaff_SS;
  void *this;
  char *pcStack_12;
  u16 local_c;
  u16 local_6;
  
  this = (void *)param_2;
  pcStack_12 = (char *)((ulong)param_2 >> 0x10);
  iVar1 = file_context_write_footer_marker_logic(this);
  if (iVar1 != 0x0)
  {
    iVar1 = file_context_write_string_with_terminator_logic(this,pcStack_12);
    if (iVar1 != 0x0)
    {
      iVar1 = file_context_write_string_with_terminator_logic(this,pcStack_12);
      if (iVar1 != 0x0)
      {
        local_c = (u16)g_ModeVersion_13AE;
        iVar1 = file_write_check((long)param_2,&local_c,unaff_SS);
        if (iVar1 != 0x0)
        {
          local_6 = *(u16 *)((int)param_1 + 0x82);
          iVar1 = file_write_check((long)param_2,&local_6,unaff_SS);
          if (iVar1 != 0x0)
          {
            return 0x1;
          }
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}
