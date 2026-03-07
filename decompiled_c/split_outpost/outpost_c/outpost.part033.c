/*
 * Source: outpost.c
 * Chunk: 33/117
 * Original lines: 36964-38040
 * Boundaries: top-level declarations/definitions only
 */




// Subtracts an input value from the 16-bit field at offset 0x1E, ensuring it does not
// go below zero.

void __stdcall16far UI_Object_Decrement_Value_at_Offset_1E_Logic(void *this,int amount)
{
  int *piVar1;
  int in_stack_00000008;
  
  piVar1 = (int *)((int)this + 0x1e);
  *piVar1 = *piVar1 - in_stack_00000008;
  if (*piVar1 < 0x0)
  {
    *(undefined2 *)((int)this + 0x1e) = 0x0;
  }
  return;
}



int __stdcall16far UI_Object_Get_Value_at_Offset_1E_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(int *)((int)this + 0x1e);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles randomized quantity reduction at offset 0x1E. Decrements timer at 0x1C; rolls
// random value (1, 5, or 10) for subtraction based on simulator tick count via
// 1008:8326.

int __stdcall16far UI_Object_Process_Randomized_Quantity_Decrement_Logic(void *this)
{
  int *piVar1;
  int iVar2;
  u32 uVar3;
  undefined2 in_stack_00000006;
  undefined2 uStack_8;
  
  if (*(int *)((int)this + 0x1a) != 0x0)
  {
    if (0x0 < *(int *)((int)this + 0x1c))
    {
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -0x1;
    }
    if ((*(int *)((int)this + 0x1c) == 0x0) && (*(int *)((int)this + 0x1e) != 0x0))
    {
      uStack_8 = 0x1;
      uVar3 = Simulator_Global_Get_Current_Tick_8326();
      iVar2 = (int)(uVar3 >> 0x10);
      if ((iVar2 != 0x0) || (0x32 < (uint)uVar3))
      {
        uStack_8 = 0x5;
      }
      if ((iVar2 != 0x0) || (0x3c < (uint)uVar3))
      {
        uStack_8 = 0xa;
      }
      if (*(int *)((int)this + 0x1e) < uStack_8)
      {
        uStack_8 = *(int *)((int)this + 0x1e);
      }
      piVar1 = (int *)((int)this + 0x1e);
      *piVar1 = *piVar1 - uStack_8;
      if (*piVar1 < 0x0)
      {
        *(undefined2 *)((int)this + 0x1e) = 0x0;
      }
      if (0x0 < *(int *)((int)this + 0x1e))
      {
        return uStack_8;
      }
      return -0x1;
    }
  }
  return 0x0;
}



// Initializes the state flag at offset 0x1A and populates the quantity at 0x1E based on
// a scaled input value.

void __stdcall16far UI_Object_Init_State_at_Offset_1A_Logic(void *this)
{
  int in_AX;
  int in_stack_00000006;
  
  *(undefined2 *)((int)this + 0x1a) = 0x1;
  UI_Object_Process_Quantity_Reduction_and_Migration_Logic(this);
  UI_Object_Process_Item_Action_on_Collection_10_Wrapper(this,in_stack_00000006);
  *(int *)((int)this + 0x1e) = in_AX * 0x32;
  return;
}



// Migrates items (types 0x3E, 0x41) from primary collection (offset 10) to a newly
// instantiated sub-collection at offset 0xE. Uses virtual methods for collection
// management.

void __stdcall16far UI_Object_Migrate_Items_to_Collection_at_Offset_E_Logic(void *this)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  astruct_491 *this_00;
  void *pvVar3;
  uint extraout_DX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 unaff_SI;
  long lVar7;
  undefined2 in_stack_00000006;
  undefined4 uVar8;
  int iVar9;
  undefined1 local_a [0x4];
  undefined4 uStack_6;
  
  if (*(int *)((int)this + 0x18) == 0x0)
  {
    *(undefined2 *)((int)this + 0x18) = 0x1;
    puVar2 = (undefined4 *)(undefined4 *)*(undefined4 *)((int)this + 0xe);
    uVar4 = 0x0;
    if (*(int *)((int)this + 0x10) != 0x0 || puVar2 != NULL)
    {
      puVar1 = (undefined2 *)(undefined2 *)*puVar2;
      (*(code *)*puVar1)();
      uVar4 = extraout_DX;
    }
    this_00 = allocate_memory(CONCAT22(unaff_SI,0xc));
    uVar5 = uVar4 | (uint)this_00;
    if (uVar5 == 0x0)
    {
      pvVar3 = NULL;
      uVar5 = 0x0;
    }
    else
    {
      pvVar3 = construct_object_with_vtable(this_00,uVar4);
    }
    *(undefined2 *)((int)this + 0xe) = pvVar3;
    *(uint *)((int)this + 0x10) = uVar5;
    init_long_pair(local_a,*(long *)((int)this + 0xa));
    while( true )
    {
      lVar7 = get_next_list_item(local_a);
      iVar6 = (int)((ulong)lVar7 >> 0x10);
      iVar9 = (int)lVar7;
      if (iVar6 == 0x0 && iVar9 == 0x0) break;
      if ((*(int *)(iVar9 + 0x4) == 0x3e) || (*(int *)(iVar9 + 0x4) == 0x41))
      {
        *(undefined2 *)((int)*(undefined4 *)((int)this + 0xa) + 0xa) = 0x0;
        uVar8 = *(undefined4 *)((int)this + 0xa);
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0xc);
        (*(code *)*puVar1)();
        *(undefined2 *)((int)*(undefined4 *)((int)this + 0xa) + 0xa) = 0x1;
        uStack_6 = 0x0;
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe) + 0x4);
        (*(code *)*puVar1)(0x1008,*(undefined4 *)((int)this + 0xe),lVar7,uVar8,iVar9,
                           iVar6);
      }
    }
  }
  return;
}



// Searches for an item by type in collection 0xE, decrements its count, and removes it
// from the collection if the count hits zero.

void __stdcall16far
UI_Object_Decrement_Item_Count_in_Collection_E_Logic_maybe(void *this,int item_type)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  int in_stack_00000008;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xe));
  do
  {
    lVar5 = get_next_list_item(local_a);
    uVar4 = (undefined2)((ulong)lVar5 >> 0x10);
    iVar2 = (int)lVar5;
    if (lVar5 == 0x0)
    {
      return;
    }
  } while (*(int *)(iVar2 + 0x4) != in_stack_00000008);
  iVar3 = *(int *)(iVar2 + 0x6) + -0x1;
  *(int *)(iVar2 + 0x6) = iVar3;
  if ((iVar3 < 0x1) &&
     (puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe) + 0xc),
     (*(code *)*puVar1)(0x1008,*(undefined4 *)((int)this + 0xe),iVar2,uVar4),
     *(int *)((int)*(undefined4 *)((int)this + 0xe) + 0x8) == 0x0))
  {
    *(undefined2 *)((int)this + 0x16) = 0x1;
  }
  return;
}



u16 __stdcall16far
UI_MultiList_Collection_Serialize_to_File_9900(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  void *unaff_SS;
  long lVar5;
  u16 local_24;
  u32 local_20;
  u16 local_1c;
  u16 local_16;
  u32 local_10;
  undefined1 local_c [0x8];
  u16 local_4;
  
  iVar1 = file_context_write_footer_marker_logic((void *)param_2);
  if (iVar1 == 0x0)
  {
    return 0x0;
  }
  uVar4 = (undefined2)(param_1 >> 0x10);
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
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  init_long_pair(local_c,*(long *)(iVar1 + 0xa));
  do
  {
    local_10 = get_next_list_item(local_c);
    if (local_10 == 0x0)
    {
      if (*(long *)(iVar1 + 0xe) == 0x0)
      {
        local_24 = 0x0;
      }
      else
      {
        local_24 = *(u16 *)((int)*(undefined4 *)(iVar1 + 0xe) + 0x8);
      }
      local_16 = local_24;
      iVar2 = file_write_check((long)param_2,&local_16,unaff_SS);
      if (iVar2 == 0x0)
      {
        g_LastFileErrorMsgID = (undefined *)0x6d0;
        return 0x0;
      }
      init_long_pair(local_c,*(long *)(iVar1 + 0xe));
      do
      {
        lVar5 = get_next_list_item(local_c);
        uVar3 = (undefined2)((ulong)lVar5 >> 0x10);
        if (lVar5 == 0x0)
        {
          if (*(long *)(iVar1 + 0x12) == 0x0)
          {
            local_24 = 0x0;
          }
          else
          {
            local_24 = *(u16 *)((int)*(undefined4 *)(iVar1 + 0x12) + 0x8);
          }
          local_16 = local_24;
          iVar2 = file_write_check((long)param_2,&local_16,unaff_SS);
          if (iVar2 == 0x0)
          {
            g_LastFileErrorMsgID = (undefined *)0x6d0;
            return 0x0;
          }
          init_long_pair(local_c,*(long *)(iVar1 + 0x12));
          do
          {
            lVar5 = get_next_list_item(local_c);
            uVar3 = (undefined2)((ulong)lVar5 >> 0x10);
            if (lVar5 == 0x0)
            {
              local_1c = *(u16 *)(iVar1 + 0x1a);
              iVar2 = file_write_check((long)param_2,&local_1c,unaff_SS);
              if (iVar2 == 0x0)
              {
                g_LastFileErrorMsgID = (undefined *)0x6d0;
                return 0x0;
              }
              local_1c = *(u16 *)(iVar1 + 0x1c);
              iVar2 = file_write_check((long)param_2,&local_1c,unaff_SS);
              if (iVar2 == 0x0)
              {
                g_LastFileErrorMsgID = (undefined *)0x6d0;
                return 0x0;
              }
              local_1c = *(u16 *)(iVar1 + 0x1e);
              iVar1 = file_write_check((long)param_2,&local_1c,unaff_SS);
              if (iVar1 == 0x0)
              {
                g_LastFileErrorMsgID = (undefined *)0x6d0;
                return 0x0;
              }
              return 0x1;
            }
            local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)((int)lVar5 + 0x4));
            iVar2 = file_write_check((long)param_2,&local_10,unaff_SS);
            if (iVar2 == 0x0)
            {
              g_LastFileErrorMsgID = (undefined *)0x6d0;
              return 0x0;
            }
            local_4 = *(u16 *)((int)lVar5 + 0x6);
            iVar2 = file_write_check((long)param_2,&local_4,unaff_SS);
          } while (iVar2 != 0x0);
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
        local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)((int)lVar5 + 0x4));
        iVar2 = file_write_check((long)param_2,&local_10,unaff_SS);
        if (iVar2 == 0x0)
        {
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
        local_4 = *(u16 *)((int)lVar5 + 0x6);
        iVar2 = file_write_check((long)param_2,&local_4,unaff_SS);
      } while (iVar2 != 0x0);
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    local_16 = *(u16 *)((int)local_10 + 0x4);
    iVar2 = file_write_check((long)param_2,&local_16,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    local_16 = *(u16 *)((int)local_10 + 0x6);
    iVar2 = file_write_check((long)param_2,&local_16,unaff_SS);
  } while (iVar2 != 0x0);
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



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



void __stdcall16far
UI_Object_Process_Item_Action_on_Collection_E_Wrapper(void *this,int item_type)
{
  int in_stack_00000008;
  
  Collection_Find_Value_by_Type_Logic
            ((int)this,item_type,*(long *)((int)this + 0xe),in_stack_00000008);
  return;
}



void __stdcall16far
UI_Object_Process_Item_Action_on_Collection_10_Wrapper(void *this,int item_type)
{
  int in_stack_00000008;
  
  Collection_Find_Value_by_Type_Logic
            ((int)this,item_type,*(long *)((int)this + 0xa),in_stack_00000008);
  return;
}



// Searches a collection for an item with a matching 16-bit type ID and returns its
// associated value.

int __stdcall16far
Collection_Find_Value_by_Type_Logic
          (int arg1,int arg2,long collection_head,int search_type)
{
  u16 uVar1;
  long lVar1;
  u8 local_a [0x8];
  
  if (collection_head != 0x0)
  {
    init_long_pair(local_a,collection_head);
    while( true )
    {
      lVar1 = get_next_list_item(local_a);
      uVar1 = (u16)((ulong)lVar1 >> 0x10);
      if (lVar1 == 0x0) break;
      if (*(int *)((int)lVar1 + 0x4) == search_type)
      {
        return *(int *)((int)lVar1 + 0x6);
      }
    }
  }
  return 0x0;
}



// Adds a type-value pair object (vtable 1010:A1C4) to a lazily initialized collection
// at offset 0x12. Uses virtual methods for list insertion.

void __stdcall16far
UI_Object_Add_Type_Value_Pair_to_Collection_at_Offset_12_Logic
          (void *this,int value,int type_id)
{
  undefined2 *puVar1;
  astruct_491 *this_00;
  void *pvVar2;
  undefined2 *puVar3;
  uint in_DX;
  uint uVar4;
  undefined2 uVar5;
  undefined2 in_stack_0000000a;
  undefined4 in_stack_0000ffec;
  long size;
  undefined4 uStack_a;
  undefined2 *puStack_6;
  
  uVar5 = (undefined2)((ulong)in_stack_0000ffec >> 0x10);
  uVar4 = in_DX;
  if (*(long *)((int)this + 0x12) == 0x0)
  {
    size = CONCAT22(uVar5,0xc);
    this_00 = allocate_memory(size);
    uVar5 = (undefined2)((ulong)size >> 0x10);
    uVar4 = in_DX | (uint)this_00;
    if (uVar4 == 0x0)
    {
      *(undefined4 *)((int)this + 0x12) = 0x0;
    }
    else
    {
      pvVar2 = construct_object_with_vtable(this_00,in_DX);
      *(undefined2 *)((int)this + 0x12) = pvVar2;
      *(uint *)((int)this + 0x14) = uVar4;
    }
  }
  puVar3 = allocate_memory(CONCAT22(uVar5,0x8));
  uStack_a = (undefined2 *)CONCAT22(uVar4,puVar3);
  if (uVar4 == 0x0 && puVar3 == NULL)
  {
    puStack_6 = NULL;
  }
  else
  {
    *uStack_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    *uStack_a = 0xa1c4;
    puVar3[0x1] = 0x1010;
    puStack_6 = uStack_a;
  }
  uVar5 = (undefined2)((ulong)puStack_6 >> 0x10);
  puVar3 = (undefined2 *)puStack_6;
  puVar3[0x2] = in_stack_0000000a;
  puVar3[0x3] = type_id;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x12) + 0x4);
  (*(code *)*puVar1)(0x1000,*(undefined4 *)((int)this + 0x12),puVar3,uVar5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Reduces quantities based on entity type. For types 0x3E, 0x41, 0x80, it halves the
// value and migrates it to a secondary collection via 1010:9FEE. Rate adjusted by
// global difficulty at 1050:13AE.

void __stdcall16far UI_Object_Process_Quantity_Reduction_and_Migration_Logic(void *this)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  int in_stack_00000006;
  int iStack_c;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  iStack_c = 0x4;
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  if (((undefined **)g_ModeVersion_13AE != (undefined **)&p_CurrentHeapContext) &&
     (g_ModeVersion_13AE != (undefined *)0x1))
  {
    iStack_c = 0x2;
  }
  do
  {
    while( true )
    {
      lVar7 = get_next_list_item(local_a);
      uVar4 = (undefined2)((ulong)lVar7 >> 0x10);
      iVar2 = (int)lVar7;
      if (lVar7 == 0x0)
      {
        return;
      }
      iVar3 = *(int *)(iVar2 + 0x4);
      if (iVar3 != 0x12) break;
      bVar6 = SBORROW2(*(int *)(iVar2 + 0x6),0x2);
      iVar1 = *(int *)(iVar2 + 0x6) + -0x2;
      bVar5 = iVar1 == 0x0;
LAB_1010_a151:
      if (!bVar5 && bVar6 == iVar1 < 0x0)
      {
LAB_1010_a153:
        *(int *)(iVar2 + 0x6) = *(int *)(iVar2 + 0x6) - *(int *)(iVar2 + 0x6) / iStack_c
        ;
      }
    }
    if (((iVar3 != 0x3e) && (iVar3 != 0x41)) && (iVar3 != 0x80))
    {
      if (iVar3 == 0x83)
      {
        iVar3 = *(int *)(iVar2 + 0x6);
        bVar6 = SBORROW2(iVar3,0x1);
        iVar1 = iVar3 + -0x1;
        bVar5 = iVar3 == 0x1;
        goto LAB_1010_a151;
      }
      goto LAB_1010_a153;
    }
    iVar3 = *(int *)(iVar2 + 0x6) / 0x2;
    *(int *)(iVar2 + 0x6) = *(int *)(iVar2 + 0x6) - iVar3;
    if (iVar3 == 0x0)
    {
      iVar3 = 0x1;
    }
    UI_Object_Add_Type_Value_Pair_to_Collection_at_Offset_12_Logic
              (this,in_stack_00000006,iVar3);
  } while( true );
}



void * __stdcall16far UI_Object_Subclass_scalar_dtor_A1C8(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Object_Subclass_dtor_A1C8(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



u16 * __stdcall16far Base_Object_dtor_Scalar_Deleting_a198(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for Simulator_Event_Dispatch_Table. Initializes vtable to 1010:E9CC.
// Populates 25 function pointer slots with defaults (1010:C7E2) and specific overrides
// for game events (e.g., 1010:C864, 1010:CC56).

void * __stdcall16far
Simulator_Event_Dispatch_Table_Object_ctor(void *this,int segment,int id)
{
  undefined2 *puVar1;
  long lVar2;
  uint uStack_4;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0xc) = 0x1008;
  *(undefined2 *)((int)this + 0xa) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0xc) = 0x1008;
  *(undefined4 *)((int)this + 0x138) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xe9cc;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0xa) = 0xe9dc;
  *(undefined2 *)((int)this + 0xc) = 0x1010;
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  *(undefined2 *)((int)this + 0x138) = (int)lVar2;
  *(undefined2 *)((int)this + 0x13a) = (int)((ulong)lVar2 >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x138) + 0x4);
  (*(code *)*puVar1)();
  memset_far((void *)((int)this + 0xa4),segment,0x0);
  memset_far((void *)((int)this + 0xe),segment,0x0);
  uStack_4 = 0x0;
  do
  {
    *(undefined4 *)((int)this + uStack_4 * 0x6 + 0xe) = 0x1010c7e2;
    *(undefined2 *)((int)this + uStack_4 * 0x6 + 0x12) = 0x0;
    uStack_4 += 0x1;
  } while (uStack_4 < 0x19);
  *(undefined4 *)((int)this + 0x4a) = 0x1010c864;
  *(undefined2 *)((int)this + 0x4e) = 0x0;
  *(undefined4 *)((int)this + 0x50) = 0x1010cc56;
  *(undefined2 *)((int)this + 0x54) = 0x0;
  *(undefined4 *)((int)this + 0x56) = 0x1010cf36;
  *(undefined2 *)((int)this + 0x5a) = 0x0;
  *(undefined4 *)((int)this + 0x2c) = 0x1010d24a;
  *(undefined2 *)((int)this + 0x30) = 0x0;
  *(undefined4 *)((int)this + 0x6e) = 0x1010d448;
  *(undefined2 *)((int)this + 0x72) = 0x0;
  *(undefined4 *)((int)this + 0x74) = 0x1010d5ae;
  *(undefined2 *)((int)this + 0x78) = 0x0;
  *(undefined4 *)((int)this + 0x98) = 0x1010d710;
  *(undefined2 *)((int)this + 0x9c) = 0x0;
  return this;
}



// Destructor for the Simulator Event Dispatch Table object. Unregisters from the
// resource tracker at offset 0x9C.

void __stdcall16far Simulator_Event_Dispatch_Table_Object_dtor(void *this)
{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int in_stack_00000006;
  undefined4 uStack_6;
  
  *_this = 0xe9cc;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0xa) = 0xe9dc;
  *(undefined2 *)((int)this + 0xc) = 0x1010;
  if (*(long *)((int)this + 0x138) != 0x0)
  {
    if (in_stack_00000006 == 0x0 && this == NULL)
    {
      iVar1 = 0x0;
      iVar3 = 0x0;
    }
    else
    {
      iVar1 = (int)this + 0xa;
      iVar3 = in_stack_00000006;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this + 0x138),CONCAT22(iVar3,iVar1))
    ;
  }
  *(undefined4 *)((int)this + 0x138) = 0x0;
  if (_this == NULL)
  {
    puVar2 = NULL;
    in_stack_00000006 = 0x0;
  }
  else
  {
    puVar2 = (undefined2 *)((int)this + 0xa);
  }
  uStack_6 = (undefined2 *)CONCAT22(in_stack_00000006,puVar2);
  *uStack_6 = (char *)s_1_1050_389a;
  puVar2[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Dispatches game events by looking up and invoking function pointers from the internal
// table at offset 0xE based on event IDs.

void __stdcall16far
Simulator_Event_Dispatch_Table_Dispatch_Logic(void *this,long context,long event_data)
{
  int iVar1;
  int in_stack_00000006;
  undefined4 local_8;
  int iStack_4;
  
  memset_far((void *)((int)this + 0xa4),in_stack_00000006,0x0);
  iVar1 = *(int *)((int)event_data + 0xa);
  local_8 = (code *)*(undefined4 *)((int)this + iVar1 * 0x6 + 0xe);
  iStack_4 = *(int *)((int)this + iVar1 * 0x6 + 0x12);
  (*(code *)local_8)(0x1000,(int)this + iStack_4,in_stack_00000006,context,event_data);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far Simulator_Update_Resource_8000001_Wrapper_1(int value)
{
  void *this_ptr;
  int in_stack_00000008;
  
  this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x8000001)
  ;
  Colony_Try_Append_to_State_Array_2622(this_ptr,in_stack_00000008);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far Simulator_Update_Resource_8000001_Wrapper_2(int value)
{
  void *pvVar1;
  undefined2 in_stack_00000008;
  
  pvVar1 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x8000001);
  Colony_Check_If_Value_in_State_Array_266c
            ((int)pvVar1,(int)((ulong)pvVar1 >> 0x10),in_stack_00000008);
  return;
}



int __stdcall16far Simulator_Get_Entity_Value_at_Offset_20_Logic(long entity_ref)
{
  void *pvVar1;
  void *in_stack_00000008;
  
  pvVar1 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(in_stack_00000008);
  return *(int *)((int)(void *)pvVar1 + 0x20);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates an ID against the 0x8000001 resource tracker in the simulator.

void __stdcall16far Simulator_Validate_ID_8000001_Logic(int id)
{
  void *this_ptr;
  int in_stack_00000008;
  
  this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x8000001)
  ;
  UI_Colony_Get_Active_Metric_by_Index_2242(this_ptr,in_stack_00000008);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates the current action or state for an entity. Handles state transitions and
// signals the simulator settings object if flags change.

void __stdcall16far
UI_Update_Entity_Action_Logic(int param_1,undefined2 param_2,u16 param_3,void *param_4)
{
  u16 index;
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  void *this_ptr;
  undefined4 *puVar4;
  
  if (param_4._2_2_ != 0x0 || (int)param_4 != 0x0)
  {
    this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                         ((u16)_p_SimulatorGlobalState,
                          (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                          (void *)0x8000001);
    puVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(param_4);
    index = *(u16 *)((undefined4 *)puVar4 + 0x8);
    if (index != param_3)
    {
      uVar2 = param_3;
      Simulator_Validate_ID_8000001_Logic(param_1);
      if ((index != 0x70) && ((int)uVar2 < 0x0))
      {
        Colony_Set_Value_at_Index_25d8(this_ptr,uVar2 + 0x1,index);
      }
      puVar1 = (undefined2 *)((int)*puVar4 + 0x8);
      iVar3 = (*(code *)*puVar1)();
      if (param_3 != 0x70)
      {
        Simulator_Validate_ID_8000001_Logic(param_1);
        if (iVar3 < 0x0)
        {
          Colony_Set_Value_at_Index_25d8(this_ptr,iVar3 - 0x1,param_3);
        }
      }
    }
  }
  return;
}
