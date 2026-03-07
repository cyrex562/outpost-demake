/*
 * Source: outpost.c
 * Chunk: 84/117
 * Original lines: 95584-96769
 * Boundaries: top-level declarations/definitions only
 */




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
  uint in_DX;
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
            in_DX = (uint)((ulong)pvVar11 >> 0x10);
            *(undefined2 *)(iVar3 + 0x2e) = (void *)pvVar11;
            *(uint *)(iVar3 + 0x30) = in_DX;
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
              local_32 = (astruct_491 *)CONCAT22(in_DX,paVar6);
              uVar9 = in_DX | (uint)paVar6;
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
              in_DX = extraout_DX;
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
                local_32 = (astruct_491 *)CONCAT22(in_DX,paVar6);
                uVar9 = in_DX | (uint)paVar6;
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
                in_DX = extraout_DX_00;
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



// Invokes a virtual function at offset 0x44 on the component's linked simulator entity.

u16 __stdcall16far UI_Component_Invoke_Entity_vcall_44_Logic_7bee(void *this_ptr)
{
  undefined2 *puVar1;
  u16 uVar2;
  void *pvVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = (void *)this_ptr;
  if (*(long *)((int)pvVar3 + 0x16) == 0x0)
  {
    return 0x0;
  }
  if (*(long *)((int)pvVar3 + 0x1a) == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)pvVar3 + 0x1a) + 0x44);
  uVar2 = (*(code *)*puVar1)();
  return uVar2;
}



// Performs a search within the managed list at offset 0x22 to find a specific item.

void * __stdcall16far
UI_Component_Find_Item_in_List_22_Logic_7c28(void *this_ptr,u16 key)
{
  undefined2 uVar1;
  void *pvVar2;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + 0x22) == 0x0)
  {
    return NULL;
  }
  pvVar2 = UI_Item_List_Find_Item_FarPtr_Logic
                     (*(undefined4 *)((int)(void *)this_ptr + 0x22),key);
  return pvVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Spawns a batch of sub-entities (type '\x06', likely workers or units) for a UI
// component. Iteratively invokes simulator creation, links the new entities to the
// production UI, and increments local tracking counters.

void __stdcall16far
UI_Component_Batch_Spawn_SubEntities_Logic_7c50
          (astruct_236 *param_1,long param_2,int param_3)
{
  undefined2 *puVar1;
  void *pvVar2;
  int in_DX;
  undefined2 uVar4;
  astruct_236 *uVar3;
  undefined2 uVar5;
  void *pvVar6;
  u8 *puVar7;
  undefined4 *puVar8;
  u32 *puVar9;
  u8 *puVar10;
  undefined2 in_stack_0000ffee;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (astruct_236 *)param_1;
  if (uVar3->field30_0x1e == NULL)
  {
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffee,0x18));
    if (in_DX == 0x0 && pvVar2 == NULL)
    {
      uVar3->field30_0x1e = NULL;
    }
    else
    {
      pvVar6 = UI_Production_Item_Base_ctor_init_1cd8
                         ((void *)CONCAT22(in_DX,pvVar2),(void *)0x5,(void *)0x5);
      *(int *)&uVar3->field30_0x1e = (int)pvVar6;
      *(undefined2 *)((int)&uVar3->field30_0x1e + 0x2) = (int)((ulong)pvVar6 >> 0x10);
    }
  }
  if (param_3 == 0x4)
  {
    uVar3->field49_0x34 = uVar3->field49_0x34 + (int)param_2;
  }
  while (param_2 != 0x0)
  {
    puVar7 = Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
                       ((int)_p_SimulatorWorldContext,
                        (int)((ulong)_p_SimulatorWorldContext >> 0x10),0x0,(long)param_3
                        ,0x6000000,(int)*(undefined4 *)&uVar3->field_0x4,
                        (int)((ulong)*(undefined4 *)&uVar3->field_0x4 >> 0x10));
    uVar4 = (undefined2)((ulong)puVar7 >> 0x10);
    puVar9 = uVar3->field30_0x1e;
    puVar1 = (undefined2 *)((int)*uVar3->field30_0x1e + 0xc);
    puVar10 = (u8 *)puVar7;
    (*(code *)*puVar1)();
    puVar8 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puVar7);
    puVar1 = (undefined2 *)((int)*puVar8 + 0x14);
    (*(code *)*puVar1)(0x1028,(undefined4 *)puVar8,(int)((ulong)puVar8 >> 0x10),param_1,
                       puVar9,puVar10,uVar4);
    param_2 = param_2 + -0x1;
  }
  return;
}



// Sets a 32-bit value in the managed list stored at offset 0x22. Initializes the list
// if it hasn't been created yet.

void __stdcall16far
UI_Component_Set_List_Value_at_22_Logic_7d1c
          (astruct_235 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  int in_DX;
  astruct_235 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined2 in_stack_0000fffa;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_235 *)param_1;
  if (uVar1->field34_0x22 == NULL)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
    if (in_DX == 0x0 && pvVar1 == NULL)
    {
      uVar1->field34_0x22 = NULL;
    }
    else
    {
      pvVar3 = UI_Item_List_ctor_init_logic((void *)CONCAT22(in_DX,pvVar1),0xa,0x2);
      *(int *)&uVar1->field34_0x22 = (int)pvVar3;
      *(undefined2 *)((int)&uVar1->field34_0x22 + 0x2) = (int)((ulong)pvVar3 >> 0x10);
    }
  }
  UI_Item_List_Set_Item_Value_Logic
            ((uint *)uVar1->field34_0x22,(int)((ulong)uVar1->field34_0x22 >> 0x10),
             param_2,(int)param_3,(int)((ulong)param_3 >> 0x10));
  return;
}



// Sets a 32-bit value in the managed list stored at offset 0x26. Initializes the list
// if it hasn't been created yet.

void __stdcall16far
UI_Component_Set_List_Value_at_26_Logic_7d7c
          (astruct_234 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  int in_DX;
  astruct_234 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined2 in_stack_0000fffa;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_234 *)param_1;
  if (uVar1->field38_0x26 == NULL)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
    if (in_DX == 0x0 && pvVar1 == NULL)
    {
      uVar1->field38_0x26 = NULL;
    }
    else
    {
      pvVar3 = UI_Item_List_ctor_init_logic((void *)CONCAT22(in_DX,pvVar1),0xa,0x2);
      *(void **)&uVar1->field38_0x26 = (void *)pvVar3;
      *(undefined2 *)((int)&uVar1->field38_0x26 + 0x2) = (int)((ulong)pvVar3 >> 0x10);
    }
  }
  UI_Item_List_Set_Item_Value_Logic
            ((uint *)uVar1->field38_0x26,(int)((ulong)uVar1->field38_0x26 >> 0x10),
             param_2,(int)param_3,(int)((ulong)param_3 >> 0x10));
  return;
}



// Adds a delta to a value within the managed list at offset 0x22. Automatically handles
// list initialization and search for the target item.

void __stdcall16far
UI_Component_Add_Value_to_List_at_22_Logic_7ddc
          (astruct_233 *param_1,long param_2,undefined2 param_3)
{
  void *pvVar1;
  int in_DX;
  astruct_233 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined2 in_stack_0000fff6;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_233 *)param_1;
  if (uVar1->field34_0x22 == NULL)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff6,0xa));
    if (in_DX == 0x0 && pvVar1 == NULL)
    {
      uVar1->field34_0x22 = NULL;
    }
    else
    {
      pvVar3 = UI_Item_List_ctor_init_logic((void *)CONCAT22(in_DX,pvVar1),0xa,0x2);
      *(void **)&uVar1->field34_0x22 = (void *)pvVar3;
      *(undefined2 *)((int)&uVar1->field34_0x22 + 0x2) = (int)((ulong)pvVar3 >> 0x10);
    }
  }
  pvVar3 = UI_Item_List_Find_Item_FarPtr_Logic
                     ((uint *)uVar1->field34_0x22,
                      (int)((ulong)uVar1->field34_0x22 >> 0x10),param_3);
  UI_Item_List_Set_Item_Value_Logic
            ((uint *)uVar1->field34_0x22,(int)((ulong)uVar1->field34_0x22 >> 0x10),
             (long)pvVar3 + param_2,param_3);
  return;
}



// Updates the component's reference to the currently active simulator entity (offset
// 0x16) and triggers a refresh/sync if a sub-component (0x2E) is present.

u16 __stdcall16far
UI_Component_Set_Active_Entity_and_Sync_Logic_7e5a(void *this_ptr,void *entity_id)
{
  astruct_232 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_232 *)this_ptr;
  uVar1->field19_0x16 = entity_id;
  uVar1->field20_0x1a = 0x0;
  UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
  if (uVar1->field37_0x2e != NULL)
  {
    UI_Planet_View_List_Update_State_Wrapper_4b20
              (uVar1->field37_0x2e,uVar1->field19_0x16,uVar1->field4_0x4);
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Returns 1 if the linked entity belongs to type group 0xB and is currently in active
// state 5.

int __stdcall16far UI_Component_Check_Entity_GroupB_and_Active_7ea0(void *this_ptr)
{
  undefined4 uVar1;
  u16 category;
  int iVar2;
  
  category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
  iVar2 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),category);
  if ((iVar2 != 0x0) &&
     (uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x1a),
     *(int *)((int)uVar1 + 0x12) == 0x5))
  {
    return 0x1;
  }
  return 0x0;
}



// Updates the 4th 16-bit word of the linked entity's internal resource data block.

void __stdcall16far
UI_Component_Update_Entity_Resource_Field4_7eda(void *this_ptr,u16 value)
{
  undefined2 uVar1;
  u16 unaff_SS;
  undefined2 local_c;
  undefined2 uStack_a;
  u16 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  local_c = 0x0;
  uStack_a = 0x0;
  uStack_6 = 0x0;
  uStack_4 = 0x0;
  uStack_8 = value;
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)this_ptr + 0x1a) == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  UI_Build_Item_Update_Resource_Data_Logic_bb96
            ((void *)*(undefined4 *)((int)this_ptr + 0x1a),(u16)&local_c,unaff_SS);
  return;
}



// Updates the 2nd 16-bit word of the linked entity's internal resource data block.

void __stdcall16far
UI_Component_Update_Entity_Resource_Field2_7f1a(void *this_ptr,u16 value)
{
  undefined2 uVar1;
  u16 unaff_SS;
  undefined2 local_c;
  u16 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  local_c = 0x0;
  uStack_8 = 0x0;
  uStack_6 = 0x0;
  uStack_4 = 0x0;
  uStack_a = value;
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + 0x1a) == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  UI_Build_Item_Update_Resource_Data_Logic_bb96
            ((void *)*(undefined4 *)((int)(void *)this_ptr + 0x1a),(u16)&local_c,
             unaff_SS);
  return;
}



// Retrieves the 4th 16-bit word from the linked entity's resource data block.

u16 __stdcall16far UI_Component_Get_Entity_Resource_Field4_7f5a(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + 0x1a) == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  pvVar2 = UI_Build_Item_Get_Resource_Data_Ptr_bb6a
                     ((void *)*(undefined4 *)((int)(void *)this_ptr + 0x1a));
  if (pvVar2 != NULL)
  {
    return *(u16 *)((int)(void *)pvVar2 + 0x4);
  }
  return 0x0;
}



// Retrieves the 2nd 16-bit word from the linked entity's resource data block.

u16 __stdcall16far UI_Component_Get_Entity_Resource_Field2_7f98(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + 0x1a) == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  pvVar2 = UI_Build_Item_Get_Resource_Data_Ptr_bb6a
                     ((void *)*(undefined4 *)((int)(void *)this_ptr + 0x1a));
  if (pvVar2 != NULL)
  {
    return *(u16 *)((int)(void *)pvVar2 + 0x2);
  }
  return 0x0;
}



// Resolves the entity pointer and, if it belongs to specific building categories
// (0x33-0x34, 0x60-0x61), calculates its total resource output capacity.

void * __stdcall16far
UI_Component_Calculate_Entity_Resource_Output_Logic_7fd6(void *this_ptr)
{
  int iVar1;
  undefined2 in_DX;
  astruct_231 *uVar2;
  undefined2 uVar3;
  void *pvVar4;
  void *pvStack_6;
  undefined2 uStack_4;
  
  pvStack_6 = NULL;
  uStack_4 = 0x0;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_231 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
    in_DX = (undefined2)((ulong)pvVar4 >> 0x10);
  }
  iVar1 = *(int *)((int)uVar2->field26_0x1a + 0xc);
  if (((0x32 < iVar1) && (!SBORROW2(iVar1,0x33))) &&
     ((iVar1 == 0x34 || iVar1 + -0x33 < 0x1 ||
      ((0x2b < iVar1 + -0x34 && (iVar1 + -0x60 < 0x2))))))
  {
    pvStack_6 = (void *)UI_Build_Item_Calculate_Total_Resource_Output_1416
                                  ((void *)uVar2->field26_0x1a);
    uStack_4 = in_DX;
  }
  return (void *)CONCAT22(uStack_4,pvStack_6);
}



// Resolves the entity pointer and, for specific building categories, returns the count
// of similar buildings within its effective search range.

int __stdcall16far UI_Component_Count_Nearby_Buildings_Logic_8030(void *this_ptr)
{
  int iVar1;
  astruct_230 *uVar2;
  undefined2 uVar3;
  int iStack_4;
  
  iStack_4 = 0x0;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_230 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  iVar1 = *(int *)((int)uVar2->field26_0x1a + 0xc);
  if (((0x32 < iVar1) && (!SBORROW2(iVar1,0x33))) &&
     ((iVar1 == 0x34 || iVar1 + -0x33 < 0x1 ||
      ((0x2b < iVar1 + -0x34 && (iVar1 + -0x60 < 0x2))))))
  {
    iStack_4 = UI_Build_Item_Count_Total_Buildings_in_Range_1106
                         ((void *)uVar2->field26_0x1a);
  }
  return iStack_4;
}



// Retrieves the 2D world coordinates (X, Y) from the component's internal fields at
// offsets 0x16 and 0x18.

void * __stdcall16far UI_Component_Get_Coordinates_Logic_8086(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  return (void *)(CONCAT22(*(undefined2 *)((int)(void *)this_ptr + 0x18),
                           *(undefined2 *)((int)(void *)this_ptr + 0x16)) & 0xffffff);
}



// Retrieves a 16-bit state value from offset 0x20 of the simulator object if the entity
// is type 0x3E or 0x41.

u16 __stdcall16far UI_Component_Get_Special_State_Value_809c(void *this_ptr)
{
  int iVar1;
  astruct_229 *uVar2;
  undefined2 uVar3;
  u16 uStack_4;
  
  uStack_4 = 0x0;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_229 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  iVar1 = *(int *)((int)uVar2->field26_0x1a + 0xc);
  if ((iVar1 == 0x3e) || (iVar1 == 0x41))
  {
    uStack_4 = *(u16 *)((int)uVar2->field26_0x1a + 0x20);
  }
  return uStack_4;
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



// High-level initializer for the global simulator state. Instantiates the global
// Simulator Context (d81c), the Build Item Manager (d22e), and the global History
// Object. Sets the primary 1050:5748 pointer.

void * __stdcall16far Simulator_Global_State_ctor_init_8128(void *this_ptr)
{
  u32 *puVar1;
  void *pvVar2;
  u16 *this_ptr_00;
  u32 *in_DX;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  undefined2 in_stack_0000fffa;
  
  puVar5 = (undefined *)((ulong)this_ptr >> 0x10);
  puVar4 = (undefined *)this_ptr;
  *(undefined4 *)this_ptr = 0x0;
  *(undefined4 *)(puVar4 + 0x4) = 0x0;
  *(undefined2 *)(puVar4 + 0x8) = 0x0;
  p_SimulatorGlobalState = puVar4;
  PTR_DAT_1050_0000_1050_574a = puVar5;
  puVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x56));
  uVar3 = (uint)in_DX | (uint)puVar1;
  if (uVar3 != 0x0)
  {
    Simulator_Context_ctor_init_Global_d81c(puVar1,in_DX);
  }
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x8));
  if (uVar3 == 0x0 && pvVar2 == NULL)
  {
    *(undefined4 *)this_ptr = 0x0;
    uVar3 = 0x0;
  }
  else
  {
    pvVar6 = UI_Build_Item_List_Manager_ctor_init_d22e(pvVar2,uVar3,this_ptr);
    uVar3 = (uint)((ulong)pvVar6 >> 0x10);
    *(int *)this_ptr = (int)pvVar6;
    *(uint *)(puVar4 + 0x2) = uVar3;
  }
  puVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x8));
  uVar3 |= (uint)puVar1;
  if (uVar3 == 0x0)
  {
    *(undefined4 *)(puVar4 + 0x4) = 0x0;
  }
  else
  {
    puVar1 = Data_History_Object_Set_Head_Pointer_cfd2(puVar1,(u32)this_ptr);
    *(u32 **)(puVar4 + 0x4) = puVar1;
    *(uint *)(puVar4 + 0x6) = uVar3;
  }
  this_ptr_00 = allocate_memory(CONCAT22(in_stack_0000fffa,0x24));
  uVar3 |= (uint)this_ptr_00;
  if (uVar3 != 0x0)
  {
    Simulator_Object_Library_ctor_init_5bec(this_ptr_00);
  }
  puVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x8));
  if (uVar3 != 0x0 || puVar1 != NULL)
  {
    Simulator_Turn_Manager_ctor_init_78e2(puVar1);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// High-level destructor for the entire global simulator state. Systematically tears
// down the Simulator Context, Build Item Manager, History Object, and Object Library.
// Clears global state pointers.

void __stdcall16far Simulator_Global_State_dtor_Internal_8210(int *this_ptr)
{
  void *pvVar1;
  undefined2 in_stack_00000006;
  
  if (_p_SimulatorWorldContext != NULL)
  {
    pvVar1 = (void *)_p_SimulatorWorldContext;
    Simulator_Context_dtor_Internal_daba(_p_SimulatorWorldContext);
    free_if_not_null(pvVar1);
  }
  pvVar1 = (void *)*_this_ptr;
  if (this_ptr[0x1] != 0x0 || pvVar1 != NULL)
  {
    UI_Build_Item_List_Manager_dtor_Internal_d282
              ((void *)CONCAT22(this_ptr[0x1],pvVar1));
    free_if_not_null(pvVar1);
  }
  pvVar1 = (void *)this_ptr[0x2];
  if (this_ptr[0x3] != 0x0 || pvVar1 != NULL)
  {
    Data_History_Object_Node_Virtual_Dtor_cff2((void *)CONCAT22(this_ptr[0x3],pvVar1));
    free_if_not_null(pvVar1);
  }
  if (_p_SimulatorObjectLibrary != NULL)
  {
    pvVar1 = (void *)_p_SimulatorObjectLibrary;
    Simulator_Object_Library_dtor_Internal_5c0e();
    free_if_not_null(pvVar1);
  }
  pvVar1 = (void *)_p_SimulatorTurnManager;
  if (PTR_DAT_1050_0000_1050_5a66 != NULL || pvVar1 != NULL)
  {
    Simulator_Turn_Manager_dtor_Internal_7964(_p_SimulatorTurnManager);
    free_if_not_null(pvVar1);
  }
  _p_SimulatorGlobalState = 0x0;
  return;
}



// Wrapper that initializes the global history object from a specific simulator entity's
// point collection.

void * __stdcall16far
Simulator_Global_History_Init_from_Entity_Wrapper_82f0(void *this_ptr,void *entity_id)
{
  void *pvVar1;
  
  pvVar1 = Data_History_Object_Initialize_from_Simulator_Entity_d078
                     ((void *)*(undefined4 *)((int)(void *)this_ptr + 0x4),
                      (u8 *)entity_id);
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A global wrapper to retrieve entity coordinates using the active simulator context.

void __stdcall16far
Simulator_Global_Get_Entity_Coords_Wrapper_8308
          (u16 arg1,u16 arg2,void *out_x,void *out_y,void *entity_id)
{
  Simulator_Get_Entity_Coords_from_TypeID_e198
            (_p_SimulatorWorldContext,out_x,out_y,(u8 *)entity_id);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the current 32-bit simulator tick/turn count from the global context.

u32 __stdcall16far Simulator_Global_Get_Current_Tick_8326(void)
{
  return CONCAT22(((undefined2 *)_p_SimulatorWorldContext)[0x1],
                  *_p_SimulatorWorldContext);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Resets the global simulator tick counter to 0.

void __stdcall16far Simulator_Global_Reset_Tick_Counter_8334(void)
{
  *_p_SimulatorWorldContext = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A global wrapper to retrieve an entity object from its packed ID using the active
// simulator context.

void * __stdcall16far
Simulator_Global_Get_Entity_Object_Wrapper_8344(u16 arg1,u16 arg2,void *entity_id)
{
  void *pvVar1;
  
  pvVar1 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)entity_id);
  return pvVar1;
}



// A global wrapper that triggers type 4 build event logic (primary list insertion) for
// the build item manager.

void __stdcall16far
Simulator_Global_Process_Build_Event_Type4_835a(void *manager_ptr,void *item_ptr)
{
  UI_Build_Item_Process_Event_Type4_Logic_d566(*(void **)manager_ptr,item_ptr);
  return;
}



// A global wrapper that triggers type 3 build event logic (secondary list insertion)
// for the build item manager.

void __stdcall16far
Simulator_Global_Process_Build_Event_Type3_8372
          (void **manager_ptr,ulong arg2,void *item_ptr)
{
  undefined2 in_stack_00000006;
  
  UI_Build_Item_Process_Event_Type3_Logic_d52c(*_manager_ptr,arg2,item_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Executes a single simulator tick. Refreshes the build item manager, clears processed
// data history, and increments the global turn counter.

void __stdcall16far Simulator_Global_Execute_Single_Tick_Logic_838e(void **this_ptr)
{
  undefined2 in_stack_00000006;
  
  UI_Build_Item_Manager_Initialize_Standard_Items_d2b0(*_this_ptr);
  Data_History_Object_Clear_All_Nodes_Logic_d01a
            ((int)this_ptr[0x1],(int)((ulong)this_ptr[0x1] >> 0x10));
  Simulator_Main_Tick_Counter_Update_e242(_p_SimulatorWorldContext,0x1);
  return;
}
