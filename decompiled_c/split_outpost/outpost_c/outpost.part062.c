/*
 * Source: outpost.c
 * Chunk: 62/117
 * Original lines: 70431-71619
 * Boundaries: top-level declarations/definitions only
 */




// Constructor for a UI build item using vtable 0x08EC. Initializes an internal
// sub-object via a construct-with-vtable call.

void * __stdcall16far UI_Build_Item_Type_08EC_ctor_0068(void *this_ptr)
{
  astruct_491 *this;
  void *pvVar1;
  uint uVar2;
  uint uVar4;
  astruct_336 *uVar3;
  void *pvVar5;
  void *pvVar6;
  undefined2 uVar7;
  undefined2 in_stack_0000fffa;
  
  pvVar6 = (void *)this_ptr;
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar5 = UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar2 = (uint)((ulong)pvVar5 >> 0x10);
  *(undefined2 *)((int)pvVar6 + 0x20) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x22) = 0x0;
  *(undefined2 *)this_ptr = 0x8ec;
  *(undefined2 *)((int)pvVar6 + 0x2) = 0x1028;
  this = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar4 = uVar2 | (uint)this;
  if (uVar4 == 0x0)
  {
    *(undefined4 *)((int)pvVar6 + 0x22) = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this,uVar2);
    *(undefined2 *)((int)pvVar6 + 0x22) = pvVar1;
    *(uint *)((int)pvVar6 + 0x24) = uVar4;
  }
  return this_ptr;
}



// Parameterized constructor for a UI build item using vtable 0x08EC.

void * __stdcall16far
UI_Build_Item_Type_08EC_ctor_with_Params_00cc
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  astruct_491 *this;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined2 in_stack_0000fffa;
  
  pvVar4 = UI_Build_Item_Base_ctor_with_Params_b39e
                     (param_1,CONCAT22(param_3,param_2),(int)param_4,
                      (int)((ulong)param_4 >> 0x10));
  uVar2 = (uint)((ulong)pvVar4 >> 0x10);
  param_1[0x10] = 0x0;
  *(undefined4 *)(param_1 + 0x11) = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x8ec;
  param_1[0x1] = 0x1028;
  this = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar3 = uVar2 | (uint)this;
  if (uVar3 == 0x0)
  {
    *(undefined4 *)(param_1 + 0x11) = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this,uVar2);
    param_1[0x11] = pvVar1;
    param_1[0x12] = uVar3;
  }
  return (void *)CONCAT22(param_2,param_1);
}



// Internal destructor for build item 0x08EC. Cleans up its internal sub-object and
// reverts vtables.

void __stdcall16far UI_Build_Item_Type_08EC_dtor_Internal_0138(void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  *(undefined2 *)this_ptr = 0x8ec;
  *(undefined2 *)((int)pvVar2 + 0x2) = 0x1028;
  if (*(int *)((int)pvVar2 + 0x24) != 0x0 ||
      (undefined4 *)*(int *)((int)pvVar2 + 0x22) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)pvVar2 + 0x22);
    (*(code *)*puVar1)();
  }
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  return;
}



void __stdcall16far
UI_Build_Item_Transition_and_Create_SubObject_0176(void *param_1,void *param_2)
{
  undefined2 *puVar1;
  astruct_491 *this;
  void *pvVar2;
  uint extraout_DX;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_SI;
  void *this_ptr;
  void *pvVar5;
  undefined2 uVar6;
  u16 value;
  
  pvVar5 = (void *)param_1;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Set_Active_Object_Logic_b46e(param_1,param_2);
  uVar3 = 0x0;
  if (*(int *)((int)pvVar5 + 0x24) != 0x0 ||
      (undefined4 *)*(int *)((int)pvVar5 + 0x22) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)pvVar5 + 0x22);
    (*(code *)*puVar1)();
    uVar3 = extraout_DX;
  }
  this = allocate_memory(CONCAT22(unaff_SI,0xc));
  uVar4 = uVar3 | (uint)this;
  if (uVar4 == 0x0)
  {
    pvVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(this,uVar3);
  }
  *(undefined2 *)((int)pvVar5 + 0x22) = pvVar2;
  *(uint *)((int)pvVar5 + 0x24) = uVar4;
  value = 0x14;
  this_ptr = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  UI_Component_Update_Entity_Resource_Field2_7f1a(this_ptr,value);
  return;
}



void __stdcall16far UI_Build_Item_Conditional_OnTick_Update_01ec(void *param_1)
{
  void *pvVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar1 = (void *)param_1;
  if ((*(int *)((int)pvVar1 + 0x12) == 0x6) || (*(int *)((int)pvVar1 + 0x12) == 0x5))
  {
    uVar4 = (undefined2)((ulong)*(undefined4 *)((int)pvVar1 + 0x14) >> 0x10);
    iVar2 = (int)*(undefined4 *)((int)pvVar1 + 0x14);
    if ((*(int *)(iVar2 + 0xa6) == 0x14) || (*(int *)(iVar2 + 0xa8) == 0x10))
    {
      UI_Build_Item_Transition_State_Logic_bdac(param_1,0x6);
      return;
    }
    UI_Build_Item_OnTick_State6_Update_be2a(param_1);
  }
  return;
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



undefined2 __stdcall16far
UI_Build_Item_Sum_List_Values_at_0C_Limit_30(undefined4 param_1,uint *param_2)
{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined1 local_a [0x8];
  
  param_2[0x0] = 0x0;
  param_2[0x1] = 0x0;
  init_long_pair(local_a,*(long *)((int)param_1 + 0x22));
  do
  {
    lVar5 = get_next_list_item(local_a);
    if (lVar5 == 0x0)
    {
      return 0x0;
    }
    uVar3 = *(uint *)((int)lVar5 + 0xc);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    uVar2 = *param_2;
    *param_2 = *param_2 + uVar3;
    puVar1 = (uint *)param_2 + 0x1;
    *puVar1 = *puVar1 + (uint)CARRY2(uVar2,uVar3);
  } while ((((uint *)param_2)[0x1] == 0x0) && (*param_2 < 0x1e));
  return 0x1;
}



// Performs a turn update for a build item. If in state 5, pushes a specific event (code
// 4, val 1) to the Turn Manager.

void __stdcall16far UI_Build_Item_Turn_Update_Push_Event_0550(void *this_ptr)
{
  void *pvVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  UI_Build_Item_OnTick_State4_Update_be9e(this_ptr);
  if (*(int *)((int)this_ptr + 0x12) == 0x5)
  {
    uVar3 = 0x40000;
    uVar2 = 0x1;
    pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    UI_Component_Batch_Spawn_SubEntities_Logic_7c50
              ((int)pvVar1,(int)((ulong)pvVar1 >> 0x10),uVar2,uVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
Simulator_Build_Item_Process_Production_and_Expansion_0582(undefined4 *param_1)
{
  long *plVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  u16 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar9;
  undefined1 local_138 [0x10e];
  void *local_2a;
  undefined4 local_26;
  undefined2 *local_22;
  undefined4 local_1e;
  void *local_12;
  void *local_e;
  int local_6;
  undefined2 uStack_4;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined4 *)param_1;
  uStack_4 = (undefined2)((ulong)puVar5[0x5] >> 0x10);
  iVar6 = (int)puVar5[0x5];
  local_6 = iVar6 + 0xa4;
  if ((*(int *)(iVar6 + 0xa6) != 0x0) && (*(int *)(iVar6 + 0xac) != 0x0))
  {
    UI_Build_Item_Update_Counter_Logic_081e(param_1);
    if (*(uint *)(local_6 + 0x8) <= *(uint *)(puVar5 + 0x8))
    {
      puVar2 = (undefined2 *)((int)*param_1 + 0x40);
      uVar9 = (*(code *)*puVar2)();
      iVar6 = (int)((ulong)uVar9 >> 0x10);
      if ((int)uVar9 == 0x0)
      {
        if (*(int *)(local_6 + 0x2) == 0xc)
        {
          local_e = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(param_1);
          local_12 = (void *)*(undefined4 *)((int)(void *)local_e + 0x1f6);
          plVar1 = (long *)((int)(void *)local_12 + 0x170);
          *plVar1 = *plVar1 + 0x1;
        }
        else
        {
          local_12 = _p_Pool_Type4_Timer;
          puVar3 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
          local_26 = (undefined2 *)CONCAT22(iVar6,puVar3);
          if (iVar6 == 0x0 && puVar3 == NULL)
          {
            local_22 = NULL;
          }
          else
          {
            *local_26 = (char *)s_1_1050_389a;
            puVar3[0x1] = 0x1008;
            puVar3[0x2] = 0x0;
            puVar3[0x3] = 0x0;
            puVar3[0x4] = 0x0;
            puVar3[0x5] = 0x0;
            puVar3[0x6] = 0x0;
            *local_26 = 0x56ce;
            puVar3[0x1] = 0x1018;
            local_22 = local_26;
          }
          uVar8 = (undefined2)((ulong)local_22 >> 0x10);
          ((undefined2 *)local_22)[0x3] = *(undefined2 *)(local_6 + 0x2);
          ((undefined2 *)local_22)[0x5] = *(undefined2 *)(local_6 + 0x6);
          unaff_CS = 0x1020;
          uVar4 = Map_Entity_Type_to_Grouping_ID_Logic_c3b4(*(u16 *)(local_6 + 0x2));
          ((undefined2 *)local_22)[0x6] = uVar4 * *(int *)(local_6 + 0x6);
          puVar2 = (undefined2 *)
                   ((int)*(undefined4 *)*(undefined4 *)((int)puVar5 + 0x22) + 0x4);
          (*(code *)*puVar2)(0x1020,*(undefined4 *)((int)puVar5 + 0x22),
                             (undefined2 *)local_22);
        }
      }
      *(undefined2 *)(puVar5 + 0x8) = 0x0;
    }
  }
  if ((*(int *)(local_6 + 0x4) != 0x0) && (*(int *)(local_6 + 0x8) != 0x0))
  {
    UI_Build_Item_Update_Counter_Logic_081e(param_1);
    if (*(uint *)(local_6 + 0x8) <= *(uint *)(puVar5 + 0x8))
    {
      puVar2 = (undefined2 *)((int)*param_1 + 0x40);
      uVar9 = (*(code *)*puVar2)(unaff_CS,param_1,&local_2a);
      iVar6 = (int)((ulong)uVar9 >> 0x10);
      if ((int)uVar9 == 0x0)
      {
        local_12 = _p_Pool_Type4_Timer;
        puVar3 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
        local_26 = (undefined2 *)CONCAT22(iVar6,puVar3);
        if (iVar6 == 0x0 && puVar3 == NULL)
        {
          local_22 = NULL;
        }
        else
        {
          *local_26 = (char *)s_1_1050_389a;
          puVar3[0x1] = 0x1008;
          puVar3[0x2] = 0x0;
          puVar3[0x3] = 0x0;
          puVar3[0x4] = 0x0;
          puVar3[0x5] = 0x0;
          puVar3[0x6] = 0x0;
          *local_26 = 0x56ce;
          puVar3[0x1] = 0x1018;
          local_22 = local_26;
        }
        uVar8 = (undefined2)((ulong)local_22 >> 0x10);
        ((undefined2 *)local_22)[0x4] = *(undefined2 *)(local_6 + 0x4);
        ((undefined2 *)local_22)[0x5] = *(undefined2 *)(local_6 + 0x6);
        uVar4 = Map_Entity_Type_to_Specific_ID_Helper_c42e(*(int *)(local_6 + 0x4));
        ((undefined2 *)local_22)[0x6] = uVar4 * *(int *)(local_6 + 0x6);
        puVar2 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)puVar5 + 0x22) + 0x4);
        (*(code *)*puVar2)(0x1020,*(undefined4 *)((int)puVar5 + 0x22),
                           (undefined2 *)local_22);
      }
      *(undefined2 *)(puVar5 + 0x8) = 0x0;
    }
  }
  if (*(int *)(puVar5 + 0x3) != 0xe)
  {
    local_2a = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    local_22 = (undefined2 *)*(undefined4 *)((int)(void *)local_2a + 0x2e);
    local_1e = *(undefined4 *)((int)local_22 + 0x4);
    Simulator_Command_AddSpew_ctor_init_68de(local_138,unaff_SS,0x1,local_1e);
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_138));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates an internal counter (offset 0x20) based on complex simulator state and timing
// thresholds. Includes modulo-3 math for specific frame or tick intervals.

void __stdcall16far UI_Build_Item_Update_Counter_Logic_081e(void *this_ptr)
{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  undefined2 uVar5;
  void *pvVar6;
  uint uStackY_20;
  
  pvVar6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar2 = *(undefined4 *)((int)(void *)pvVar6 + 0x2e);
  iVar1 = *(int *)((int)uVar2 + 0x18);
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar4 = (void *)this_ptr;
  *(int *)((int)pvVar4 + 0x20) = *(int *)((int)pvVar4 + 0x20) + 0x1;
  uVar3 = *_p_SimulatorWorldContext;
  if (iVar1 < 0xfa)
  {
    uVar3 &= 0x1;
  }
  else
  {
    if (0x1c1 < iVar1)
    {
      if (iVar1 < 0x226)
      {
        return;
      }
      if ((iVar1 < 0x2ee) &&
         (_uStackY_20 = CONCAT22(((uint *)_p_SimulatorWorldContext)[0x1],uVar3),
         _uStackY_20 % 0x3 != 0x0))
      {
        return;
      }
      *(int *)((int)pvVar4 + 0x20) = *(int *)((int)pvVar4 + 0x20) + 0x1;
      return;
    }
    _uStackY_20 = CONCAT22(((uint *)_p_SimulatorWorldContext)[0x1],uVar3);
    uVar3 = (uint)((qword)_uStackY_20 % 0x3);
  }
  if (uVar3 != 0x0)
  {
    return;
  }
  *(int *)((int)pvVar4 + 0x20) = *(int *)((int)pvVar4 + 0x20) + -0x1;
  return;
}



// Scalar deleting destructor for UI build item Type 0x08EC.

void * __stdcall16far
UI_Build_Item_Type_08EC_dtor_Scalar_Deleting_08c6(void *this_ptr,byte flags)
{
  UI_Build_Item_Type_08EC_dtor_Internal_0138(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 0x0ADA. Initializes base class, sets field 0x20 to
// 0, and sets vtable to 0x0ADA. Default display layer 0x4B.

void * __stdcall16far UI_Build_Item_Type_0ADA_ctor_init_0954(void *this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  *(undefined2 *)(iVar1 + 0x20) = 0x0;
  *(undefined2 *)this_ptr = 0xada;
  *(undefined2 *)(iVar1 + 0x2) = 0x1028;
  *(undefined2 *)(iVar1 + 0xe) = 0x4b;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x0ADA.

void * __stdcall16far
UI_Build_Item_Type_0ADA_ctor_with_Params_0982
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  param_1[0x10] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xada;
  param_1[0x1] = 0x1028;
  param_1[0x7] = 0x4b;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Retrieves the associated simulator object and sets a flag at its offset 0x14.

void __stdcall16far UI_Build_Item_Set_Flag_at_14_Logic_09b8(void *this_ptr)
{
  void *pvVar1;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  *(undefined2 *)((int)(void *)pvVar1 + 0x14) = 0x1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Performs exhaustive multi-stage validation for build item placement. Checks simulator
// context, state (5, 6, 9), and proximity-based safety rules (using 1030:BCDE). Sets
// global error 0x6A8 on generic failure.

u16 __stdcall16far
UI_Build_Item_Validate_Placement_MultiStage_Logic_09d4
          (u32 arg1,void *coords,u8 *packed_id,long arg4)
{
  u16 uVar1;
  int iVar2;
  u16 unaff_SS;
  void *pvVar3;
  u16 in_stack_0000000e;
  u16 arg1_00;
  u16 arg2;
  undefined1 local_6 [0x2];
  u16 uStack_4;
  
  arg1_00 = (u16)arg1;
  arg2 = (u16)(arg1 >> 0x10);
  uVar1 = Simulator_Is_Coordinate_Within_Client_Margins_c314
                    (arg1_00,arg2,coords,(u16)packed_id,in_stack_0000000e,(u8 *)arg4);
  if (uVar1 == 0x0)
  {
    return 0x0;
  }
  uStack_4 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                       (arg1_00,arg2,coords,arg4);
  if ((uStack_4 != 0x0) && (uStack_4 != 0x4))
  {
    if (((int)(uStack_4 - 0x5) < 0x1) ||
       ((SBORROW2(uStack_4 - 0x5,0x1) ||
        (uStack_4 != 0x9 && 0x2 < (int)(uStack_4 - 0x6)))))
    {
      if ((*(int *)(arg1_00 + 0xc) != 0x3e) && (*(int *)(arg1_00 + 0xc) != 0x41))
      {
        return 0x1;
      }
      Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_6));
      pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,packed_id);
      pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)((int)pvVar3 + 0x10));
      iVar2 = Simulator_Calc_Manhattan_Distance_to_Coord_bcde
                        ((u16)local_6,unaff_SS,pvVar3,coords,arg4);
      if (iVar2 < 0x0)
      {
        PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6af;
        return 0x0;
      }
      if (0x5 < iVar2)
      {
        PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b5;
        return 0x0;
      }
      return 0x1;
    }
  }
  PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6a8;
  return 0x0;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_0ab4(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x0BBC. Initializes base class and sets vtable to
// 0x0BBC.

void * __stdcall16far UI_Build_Item_Type_0BBC_ctor_init_0b42(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0xbbc;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x0BBC.

void * __stdcall16far
UI_Build_Item_Type_0BBC_ctor_with_Params_0b64
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xbbc;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far void_noop_stub_1028_0b8e(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_0b92(void)
{
  return;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_0b96(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x1724. Initializes base class and sets vtable to
// 0x1724. Includes two 2-byte state fields at 0x20/0x22.

void * __stdcall16far UI_Build_Item_Type_1724_ctor_init_0c24(void *this_ptr)
{
  astruct_335 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_335 *)this_ptr;
  uVar1->field31_0x20 = 0x0;
  uVar1->field32_0x22 = 0x0;
  *(char **)this_ptr = (char *)s_480_bmp_1050_1721 + 0x3;
  uVar1->field2_0x2 = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x1724.

void * __stdcall16far
UI_Build_Item_Type_1724_ctor_with_Params_0c50
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  param_1[0x10] = 0x0;
  param_1[0x11] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_480_bmp_1050_1721 + 0x3;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_Sync_World_Entity_and_Free_List_22_0c84(void *param_1,void *param_2)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 *out_entity;
  char cStack_37;
  undefined1 local_32 [0xa];
  u8 *local_28;
  u8 *local_24;
  undefined4 *local_1c;
  undefined4 local_1a;
  int local_16;
  u16 local_14;
  void *local_12;
  undefined2 local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  void *local_6;
  
  local_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  uVar2 = (undefined2)((ulong)local_6 >> 0x10);
  local_c = *(undefined4 *)((int)(void *)local_6 + 0xc);
  local_e = *(int *)((int)(void *)local_6 + 0x10);
  local_1c = &local_c;
  local_8 = local_e;
  pvVar3 = UI_Build_Item_Get_World_Context_Entity_bab6(param_1);
  local_10 = (undefined2)((ulong)pvVar3 >> 0x10);
  local_12 = (void *)pvVar3;
  local_14 = Simulator_Get_Entity_Resource_Category_ID_2fac(pvVar3);
  local_1a = local_c;
  local_16 = local_8;
  local_24 = (u8 *)CONCAT22(local_24._2_2_,&local_1a);
  local_e += 0x1;
  if (local_e <= (int)local_14)
  {
    out_entity = (undefined1 *)CONCAT22(unaff_SS,local_32);
    local_16 = local_e;
    pvVar3 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(param_1);
    puVar4 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                       (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_1a),
                        (long)pvVar3,out_entity);
    local_28 = (u8 *)*puVar4;
    cStack_37 = (char)((ulong)local_28 >> 0x18);
    local_24 = local_28;
    if (cStack_37 != '\0')
    {
      pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)local_28);
      puVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
      puVar1 = (undefined2 *)((int)*puVar4 + 0x58);
      (*(code *)*puVar1)();
    }
  }
  UI_Build_Item_Set_Active_Object_Logic_b46e(param_1,param_2);
  UI_Component_Free_List_22_Logic_7296(local_6);
  return;
}



// Retrieves the 2-byte state at offset 0x20 and triggers a virtual refresh callback
// (1028:1646).

u16 __stdcall16far UI_Build_Item_Get_and_Refresh_State_20_Logic_0d80(void *this_ptr)
{
  u16 uVar1;
  
  uVar1 = *(u16 *)((int)(void *)this_ptr + 0x20);
  UI_Build_Item_Cycle_Internal_State_20_Logic_1646(this_ptr);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_State7_Cleanup_and_VCall_24_with_Property_Check_0d9c(void *param_1)
{
  undefined2 *puVar1;
  u16 category;
  int iVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 *out_entity;
  char cStack_37;
  undefined1 local_32 [0x6];
  undefined4 *local_2c;
  u8 *local_28;
  u8 *local_24;
  undefined4 *local_1c;
  undefined4 local_1a;
  int local_16;
  u16 local_14;
  undefined2 local_12;
  undefined2 local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  int local_6;
  undefined2 local_4;
  
  UI_Build_Item_Set_State_7_and_Cleanup_b514(param_1);
  pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_4 = (undefined2)((ulong)pvVar3 >> 0x10);
  local_6 = (int)pvVar3;
  local_c = *(undefined4 *)(local_6 + 0xc);
  local_e = *(int *)(local_6 + 0x10);
  local_1c = &local_c;
  local_8 = local_e;
  pvVar3 = UI_Build_Item_Get_World_Context_Entity_bab6(param_1);
  local_10 = (undefined2)((ulong)pvVar3 >> 0x10);
  local_12 = SUB42(pvVar3,0x0);
  local_14 = Simulator_Get_Entity_Resource_Category_ID_2fac(pvVar3);
  local_1a = local_c;
  local_24 = (u8 *)CONCAT22(local_24._2_2_,&local_1a);
  local_16 = local_e + 0x1;
  if (local_16 <= (int)local_14)
  {
    out_entity = (undefined1 *)CONCAT22(unaff_SS,local_32);
    local_e = local_16;
    pvVar3 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(param_1);
    puVar4 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                       (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_1a),
                        (long)pvVar3,out_entity);
    local_28 = (u8 *)*puVar4;
    cStack_37 = (char)((ulong)local_28 >> 0x18);
    if (cStack_37 != '\0')
    {
      local_24 = local_28;
      pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)local_28);
      category = UI_Component_Get_Entity_Type_ID_6fa0(pvVar3);
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),category);
      if (iVar2 != 0x0)
      {
        local_2c = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
        puVar1 = (undefined2 *)((int)*local_2c + 0x24);
        (*(code *)*puVar1)();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Per-tick maintenance for specific build items (Resource 0x13, 2). Handles state
// transitions to 9 (offline/depleted) and decrements counters at offset 0x22 while in
// state 5.

void __stdcall16far UI_Build_Item_OnTick_State_Maintenance_0ea6(void *this_ptr)
{
  int iVar1;
  u16 uVar2;
  void *pvVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = (void *)this_ptr;
  if (*(int *)((int)pvVar3 + 0xc) != 0x10)
  {
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),
                       *(int *)((int)pvVar3 + 0xc));
    if (iVar1 == 0x0)
    {
      iVar1 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),
                         *(int *)((int)pvVar3 + 0xc));
      if (((iVar1 != 0x0) && (*(int *)((int)pvVar3 + 0x12) != 0x7)) &&
         (*(int *)((int)pvVar3 + 0x12) != 0x4))
      {
        uVar2 = UI_Build_Item_Check_If_Any_Neighbor_Is_Offline_1556(this_ptr);
        if (uVar2 == 0x0) goto LAB_1028_0f0a;
        if (*(int *)((int)pvVar3 + 0x12) == 0x9)
        {
          *(undefined2 *)((int)pvVar3 + 0x12) = 0x5;
        }
      }
    }
    else if (*(int *)((int)pvVar3 + 0x22) < 0x1)
    {
      if ((*(int *)((int)pvVar3 + 0x12) != 0x5) && (*(int *)((int)pvVar3 + 0x12) != 0x6)
         )
      {
        return;
      }
      free_if_not_null((void *)(void *)*(undefined4 *)((int)pvVar3 + 0x14));
      *(undefined4 *)((int)pvVar3 + 0x14) = 0x0;
LAB_1028_0f0a:
      *(undefined2 *)((int)pvVar3 + 0x12) = 0x9;
      return;
    }
    UI_Build_Item_OnTick_State6_Update_be2a(this_ptr);
    if (*(int *)((int)pvVar3 + 0x12) == 0x5)
    {
      *(int *)((int)pvVar3 + 0x22) = *(int *)((int)pvVar3 + 0x22) + -0x1;
      UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_State4_Finalize_and_Batch_Spawn_0fa4(void *param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  void *pvVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  UI_Build_Item_OnTick_State4_Update_be9e(param_1);
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  iVar1 = *(int *)((int)lVar5 + 0x82);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x12) == 0x5)
  {
    iVar2 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),
                       *(int *)(iVar3 + 0xc));
    if ((iVar2 != 0x0) && ((PTR_DAT_1050_0000_1050_4fbc == NULL || (iVar1 != 0x0))))
    {
      PTR_DAT_1050_0000_1050_4fbc = (undefined *)0x1;
      uVar8 = 0x0;
      uVar9 = 0x4;
      uVar7 = 0x1;
      pvVar6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
      UI_Component_Batch_Spawn_SubEntities_Logic_7c50(pvVar6,uVar7,uVar8,uVar9);
    }
    *(undefined2 *)(iVar3 + 0x22) = 0x64;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Counts the number of active buildings (state 5) of a specific type (Resource 0x13)
// within the build item's search radius.

int __stdcall16far UI_Build_Item_Count_Active_Buildings_in_Range_1024(void *this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  u8 *puVar3;
  void *pvVar4;
  int iStack_1a;
  int iStack_18;
  undefined4 local_16;
  int iStack_12;
  void *pvStack_10;
  void *pvStack_c;
  u16 uStack_8;
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_World_Context_Entity_bab6(this_ptr);
  uStack_8 = Simulator_Get_Entity_Resource_Category_ID_2fac(pvStack_6);
  pvStack_c = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(this_ptr);
  pvStack_10 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  local_16 = *(undefined4 *)((int)(void *)pvStack_10 + 0xc);
  iStack_1a = 0x0;
  iStack_18 = 0x0;
  while( true )
  {
    if ((int)uStack_8 < iStack_1a)
    {
      return iStack_18;
    }
    iStack_12 = iStack_1a;
    puVar3 = Simulator_Map_Get_Entity_at_Coords_627e
                       (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_16),
                        pvStack_c);
    pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puVar3);
    if (pvVar4 == NULL) break;
    pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar4);
    uVar2 = (undefined2)((ulong)pvVar4 >> 0x10);
    if (pvVar4 == NULL)
    {
      return iStack_18;
    }
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),
                       *(int *)((int)(void *)pvVar4 + 0xc));
    if ((iVar1 != 0x0) && (*(int *)((int)(void *)pvVar4 + 0x12) == 0x5))
    {
      iStack_18 += 0x1;
    }
    iStack_1a += 0x1;
  }
  return iStack_18;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Counts the total number of buildings of a specific type (Resource 0x13) within the
// build item's search radius, regardless of active state.

int __stdcall16far UI_Build_Item_Count_Total_Buildings_in_Range_1106(void *this_ptr)
{
  int iVar1;
  undefined2 unaff_SS;
  u8 *puVar2;
  void *pvVar3;
  int iStack_1a;
  int iStack_18;
  undefined4 local_16;
  int iStack_12;
  void *pvStack_10;
  void *pvStack_c;
  u16 uStack_8;
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_World_Context_Entity_bab6(this_ptr);
  uStack_8 = Simulator_Get_Entity_Resource_Category_ID_2fac(pvStack_6);
  pvStack_c = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(this_ptr);
  pvStack_10 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  local_16 = *(undefined4 *)((int)(void *)pvStack_10 + 0xc);
  iStack_1a = 0x0;
  iStack_18 = 0x0;
  while( true )
  {
    if ((int)uStack_8 < iStack_1a)
    {
      return iStack_18;
    }
    iStack_12 = iStack_1a;
    puVar2 = Simulator_Map_Get_Entity_at_Coords_627e
                       (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_16),
                        pvStack_c);
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puVar2);
    if (pvVar3 == NULL) break;
    pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
    if (pvVar3 == NULL)
    {
      return iStack_18;
    }
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),
                       *(int *)((int)(void *)pvVar3 + 0xc));
    if (iVar1 != 0x0)
    {
      iStack_18 += 0x1;
    }
    iStack_1a += 0x1;
  }
  return iStack_18;
}
