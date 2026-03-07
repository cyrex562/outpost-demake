/*
 * Source: outpost.c
 * Chunk: 65/117
 * Original lines: 73963-75159
 * Boundaries: top-level declarations/definitions only
 */




// Parameterized constructor for UI Construction Item Type 0x3E2C. Initializes base
// class and creates an internal UI Item List.

void * __stdcall16far
UI_Construction_Item_Type_3E2C_ctor_with_Params_3816
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined2 in_stack_0000fffa;
  
  pvVar3 = UI_Build_Item_Base_ctor_with_Params_b39e
                     (param_1,CONCAT22(param_3,param_2),(int)param_4,
                      (int)((ulong)param_4 >> 0x10));
  iVar2 = (int)((ulong)pvVar3 >> 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0x0;
  *(undefined4 *)(param_1 + 0x12) = 0x0;
  *(undefined4 *)(param_1 + 0x14) = 0x0;
  *(void ***)CONCAT22(param_2,param_1) = (void **)&PTR_s_0_000_1050_3bbb_1050_3e2c;
  param_1[0x1] = 0x1028;
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
  if (iVar2 == 0x0 && pvVar1 == NULL)
  {
    *(undefined4 *)(param_1 + 0x14) = 0x0;
  }
  else
  {
    pvVar3 = UI_Item_List_ctor_init_logic((void *)CONCAT22(iVar2,pvVar1),0x5,0x5);
    param_1[0x14] = (void *)pvVar3;
    param_1[0x15] = (int)((ulong)pvVar3 >> 0x10);
  }
  return (void *)CONCAT22(param_2,param_1);
}



// Internal destructor for UI Construction Item 0x3E2C. Frees its internal UI Item List
// and reverts vtables.

void __stdcall16far UI_Construction_Item_Type_3E2C_dtor_Internal_388e(void *this_ptr)
{
  void *ptr;
  astruct_330 *uVar3;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_330 *)this_ptr;
  *(void ***)this_ptr = (void **)&PTR_s_0_000_1050_3bbb_1050_3e2c;
  uVar3->field2_0x2 = 0x1028;
  ptr = (void *)*(void **)&uVar3->field_0x28;
  if (uVar3->field41_0x2a != 0x0 || ptr != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic((void *)CONCAT22(uVar3->field41_0x2a,ptr));
    free_if_not_null(ptr);
  }
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  return;
}



undefined2 __stdcall16far
Simulator_World_Interaction_Simple_Validator_38d4
          (undefined4 *param_1,void *param_2,long param_3,u8 *param_4)
{
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  undefined4 *x;
  u16 y;
  
  x = (undefined4 *)param_1;
  y = (u16)((ulong)param_1 >> 0x10);
  uVar2 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                    ((u16)x,y,param_2,(long)param_4);
  if ((uVar2 == 0x5) || (uVar2 == 0x6))
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x60);
    iVar3 = (*(code *)*puVar1)();
    if (iVar3 != 0x0)
    {
      uVar2 = Simulator_Handle_Entity_ID_Change_at_Coords_c23e
                        ((u16)x,y,param_2,param_3,(long)param_4);
      if (uVar2 != 0x0)
      {
        uVar2 = Simulator_Is_Coordinate_Within_Client_Margins_c314
                          ((u16)x,y,param_2,(u16)param_3,(u16)((ulong)param_3 >> 0x10),
                           (u8 *)param_4);
        if (uVar2 != 0x0)
        {
          return 0x1;
        }
      }
    }
  }
  else
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6a8;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_Redistribute_Resource_List_22_to_28_3958(void *param_1)
{
  uint uVar1;
  int iVar2;
  qword qVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  void *pvVar9;
  undefined2 uVar10;
  undefined4 local_34;
  int local_2c [0x2];
  undefined4 local_28;
  int local_24;
  undefined4 local_22;
  undefined4 local_1e;
  int local_16;
  uint local_14;
  undefined4 local_12;
  void *local_e;
  void *local_a;
  int local_6;
  undefined2 uStack_4;
  
  pvVar9 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  uStack_4 = (undefined2)((ulong)pvVar9 >> 0x10);
  local_6 = (int)pvVar9;
  local_a = (void *)*(undefined4 *)(local_6 + 0x22);
  if (*(int *)(local_6 + 0x24) != 0x0 || (int)local_a != 0x0)
  {
    if (PTR_DAT_1050_0000_1050_574c != NULL)
    {
      local_1e = (void *)(ulong)*(uint *)((int)local_a + 0x4);
      for (local_22 = NULL; local_22 < local_1e;
          local_22 = (void *)((long)local_22 + 0x1))
      {
        UI_Item_List_Get_Item_at_Index_Logic
                  (local_a,(int *)CONCAT22(unaff_SS,local_2c),
                   (undefined4 *)CONCAT22(unaff_SS,&local_28),(uint)local_22);
      }
    }
    local_e = (void *)*(undefined4 *)(local_6 + 0x2e);
    local_12 = *_p_SimulatorWorldContext;
    local_14 = (uint)local_12 & 0x1;
    for (local_16 = 0x4; local_16 < 0xe; local_16 += 0x1)
    {
      local_2c[0x0] = local_16;
      local_28 = UI_Item_List_Find_Item_FarPtr_Logic
                           ((int)local_a,(int)((ulong)local_a >> 0x10),local_16);
      if (local_28 != NULL)
      {
        UI_Item_List_Set_Item_Value_Logic(local_a,0x0,0x0,local_2c[0x0]);
        iVar7 = -(local_28._2_2_ + (uint)((int)local_28 != 0x0));
        local_22 = (void *)CONCAT22(iVar7,(void *)-(int)local_28);
        Colony_Add_to_Resource_Tracker_5694
                  (local_e,(long)CONCAT22(iVar7,(void *)-(int)local_28),local_2c[0x0]);
        local_1e = NULL;
        local_24 = 0x0;
        iVar7 = (int)param_1;
        uVar8 = (undefined2)((ulong)param_1 >> 0x10);
        switch(local_16)
        {
        case 0x4:
          local_1e = (void *)((ulong)local_28 >> 0x1);
          if ((local_1e == NULL) && (local_14 != 0x0))
          {
            local_1e = (void *)0x1;
          }
          local_24 = 0x11;
          break;
        case 0x5:
          local_1e = (void *)((ulong)local_28 >> 0x1);
          if ((local_1e == NULL) && (local_14 != 0x0))
          {
            local_1e = (void *)0x1;
          }
          local_24 = 0x12;
          break;
        case 0x6:
          local_1e = (void *)((ulong)local_28 >> 0x1);
          if ((local_1e == NULL) && (local_14 != 0x0))
          {
            local_1e = (void *)0x1;
          }
          local_24 = 0x13;
          break;
        case 0x7:
          local_1e = (void *)((ulong)local_28 >> 0x1);
          if ((local_1e == NULL) && (local_14 != 0x0))
          {
            local_1e = (void *)0x1;
          }
          local_24 = 0x14;
          break;
        case 0x8:
          local_1e = local_28;
          local_24 = 0x1a;
          break;
        case 0x9:
          local_1e = local_28;
          local_24 = 0x1b;
          break;
        case 0xa:
          local_1e = local_28;
          local_24 = 0x1c;
          break;
        case 0xb:
          local_1e = local_28;
          local_24 = 0x17;
          break;
        case 0xc:
          local_24 = 0x18;
          local_1e = local_28;
          *(long *)(iVar7 + 0x20) = *(long *)(iVar7 + 0x20) + (long)local_28;
          uVar1 = *(uint *)(iVar7 + 0x20);
          uVar6 = *(uint *)(iVar7 + 0x22);
          uVar4 = uVar1 >> 0x1;
          uVar5 = uVar4 | (uint)((uVar6 & 0x1) != 0x0) << 0xf;
          local_34 = CONCAT22(uVar6 >> 0x1,uVar5);
          *(int *)(iVar7 + 0x20) = uVar1 + uVar4 * -0x2;
          *(int *)(iVar7 + 0x22) =
               (uVar6 - ((uVar6 >> 0x1) * 0x2 + (uint)CARRY2(uVar5,uVar5))) -
               (uint)(uVar1 < uVar4 * 0x2);
          if (local_34 != 0x0)
          {
            uVar10 = 0x15;
LAB_1028_3b14:
            local_1e = local_28;
            UI_Item_List_Set_Item_Value_Logic
                      (*(undefined4 *)(iVar7 + 0x28),(int)local_34,
                       (int)((ulong)local_34 >> 0x10),uVar10);
          }
          break;
        case 0xd:
          local_24 = 0x19;
          local_1e = local_28;
          *(long *)(iVar7 + 0x24) = *(long *)(iVar7 + 0x24) + (long)local_28;
          uVar1 = *(uint *)(iVar7 + 0x24);
          iVar2 = *(int *)(iVar7 + 0x26);
          qVar3 = (qword)CONCAT22((int)((ulong)local_28 >> 0x10),uVar1) / 0x3;
          local_34._2_2_ = (int)(qVar3 >> 0x10);
          uVar6 = (uint)qVar3;
          *(int *)(iVar7 + 0x24) = uVar1 + uVar6 * -0x3;
          *(int *)(iVar7 + 0x26) =
               (iVar2 - (local_34._2_2_ * 0x3 + (uint)CARRY2(uVar6,uVar6) +
                        (uint)CARRY2(uVar6 * 0x2,uVar6))) - (uint)(uVar1 < uVar6 * 0x3);
          if ((long)qVar3 != 0x0)
          {
            uVar10 = 0x16;
            local_34 = (long)qVar3;
            goto LAB_1028_3b14;
          }
        }
        if ((local_1e._2_2_ != 0x0 || (int)local_1e != 0x0) && (local_24 != 0x0))
        {
          UI_Item_List_Add_Value_to_Item_Logic
                    (*(undefined4 *)(iVar7 + 0x28),(int)local_1e,local_1e._2_2_,local_24
                    );
        }
      }
    }
  }
  return;
}



// Calculates the 'remaining' value for a construction item by subtracting its current
// total (retrieved via virtual call 0x40) from 1000.

void * __stdcall16far
UI_Construction_Item_Calculate_Remaining_Value_3c32(void *this_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  uint local_6;
  int iStack_4;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)this_ptr + 0x40);
  iVar2 = (*(code *)*puVar1)();
  if (iVar2 != 0x0)
  {
    return NULL;
  }
  return (void *)CONCAT22(-(uint)(0x3e8 < local_6) - iStack_4,(void *)(0x3e8 - local_6))
  ;
}



// Calculates the total value across all sub-items in the construction item's list.
// Returns 1 if the total exceeds 999, otherwise 0.

u16 __stdcall16far
UI_Construction_Item_Check_If_Total_Exceeds_999_3c60(void *this_ptr,void *out_total)
{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  void *pvVar5;
  long local_10;
  undefined1 local_c [0x4];
  int iStack_8;
  uint uStack_6;
  uint uStack_4;
  
  *(undefined4 *)out_total = 0x0;
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar3 = (int)this_ptr;
  if (*(long *)(iVar3 + 0x28) != 0x0)
  {
    for (iStack_8 = 0x4; iStack_8 < 0x1d; iStack_8 += 0x1)
    {
      pvVar5 = UI_Item_List_Find_Item_FarPtr_Logic
                         (*(undefined4 *)(iVar3 + 0x28),iStack_8);
      uVar2 = *(uint *)out_total;
      *(uint *)out_total = *(int *)out_total + (uint)pvVar5;
      piVar1 = (int *)((int)out_total + 0x2);
      *piVar1 = *piVar1 + (int)((ulong)pvVar5 >> 0x10) +
                (uint)CARRY2(uVar2,(uint)pvVar5);
      if (0x3e7 < *(ulong *)out_total)
      {
        return 0x1;
      }
    }
  }
  uStack_4 = *(uint *)((int)*(undefined4 *)(iVar3 + 0x28) + 0x4);
  uStack_6 = 0x0;
  while( true )
  {
    if (uStack_4 <= uStack_6)
    {
      return 0x0;
    }
    UI_Item_List_Get_Item_at_Index_Logic
              ((void *)*(undefined4 *)(iVar3 + 0x28),
               (long *)CONCAT22(unaff_SS,&local_10),
               (undefined1 *)CONCAT22(unaff_SS,local_c),uStack_6);
    *(long *)out_total = *(long *)out_total + local_10;
    if (0x3e7 < *(ulong *)out_total) break;
    uStack_6 += 0x1;
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



void * __stdcall16far
UI_Construction_Item_Type3E2C_dtor_Scalar_Deleting_3e06(void *param_1,byte param_2)
{
  UI_Construction_Item_Type_3E2C_dtor_Internal_388e(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x4004. Initializes base class and sets vtable to
// 0x4004. Triggers randomized state initialization.

void * __stdcall16far UI_Build_Item_Type_4004_ctor_init_3e94(void *this_ptr)
{
  undefined2 uVar1;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined4 *)((int)(void *)this_ptr + 0x20) = 0x0;
  *(undefined2 *)this_ptr = 0x4004;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  UI_Build_Item_Initialize_Randomized_State_3fa2(this_ptr);
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x4004.

void * __stdcall16far
UI_Build_Item_Type_4004_ctor_with_Params_3ec8
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined4 *)(param_1 + 0x10) = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x4004;
  param_1[0x1] = 0x1028;
  UI_Build_Item_Initialize_Randomized_State_3fa2
            ((undefined2 *)CONCAT22(param_2,param_1));
  return (void *)CONCAT22(param_2,param_1);
}



void __stdcall16far UI_Build_Item_Process_Resource_Update_3F04(void *param_1)
{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  undefined2 uVar4;
  void *this_ptr;
  u16 key;
  undefined4 local_e;
  undefined4 local_a;
  
  key = 0x1f;
  this_ptr = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_a = UI_Component_Find_Item_in_List_22_Logic_7c28(this_ptr,key);
  UI_Component_Set_List_Value_at_22_Logic_7d1c(this_ptr,0x0,0x0,0x1f);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar3 = (void *)param_1;
  if (*(int *)((int)pvVar3 + 0xc) != 0x22)
  {
    if (*(int *)((int)pvVar3 + 0xc) == 0x23)
    {
      uVar2 = 0xa;
    }
    else
    {
      uVar2 = 0x5;
    }
    local_e = (ulong)uVar2;
    uVar1 = (long)local_a + *(long *)((int)pvVar3 + 0x20);
    *(ulong *)((int)pvVar3 + 0x20) = uVar1 % (ulong)uVar2;
    local_a = (void *)(uVar1 + uVar1 / local_e);
  }
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc
            (this_ptr,(void *)local_a,(int)((ulong)local_a >> 0x10),0x21);
  return;
}



// Initializes randomized internal state (offset 0x20) for specific build item types
// (0x22, 0x23). Used during construction item setup.

void __stdcall16far UI_Build_Item_Initialize_Randomized_State_3fa2(void *this_ptr)
{
  uint uVar1;
  int iVar2;
  astruct_329 *uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_329 *)this_ptr;
  if (uVar3->field12_0xc != 0x22)
  {
    if (uVar3->field12_0xc == 0x23)
    {
      uVar1 = 0xa;
    }
    else
    {
      uVar1 = 0x5;
    }
    iVar2 = random_int_range(0x0,uVar1 >> 0x1);
    uVar3->field31_0x20 = iVar2;
    uVar3->field32_0x22 = iVar2 >> 0xf;
  }
  return;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_3fde(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x42EC. Initializes base class and sets vtable to
// 0x42EC.

u16 * __stdcall16far UI_Build_Item_Type_42EC_ctor_init_406c(u16 *this_ptr)
{
  undefined2 in_stack_00000006;
  
  UI_Build_Item_Base_ctor_init_b354(_this_ptr);
  *_this_ptr = 0x42ec;
  this_ptr[0x1] = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x42EC.

void * __stdcall16far
UI_Build_Item_Type_42EC_ctor_with_Params_408e
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x42ec;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_VCall_58_on_Neighbor_Type100_and_State7_40b8(void *param_1)
{
  undefined2 *puVar1;
  u8 *packed_id;
  u16 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 *out_entity;
  char cStack_33;
  undefined1 local_2c [0x6];
  undefined4 *local_26;
  u8 *local_22;
  undefined4 *local_1a;
  u8 *local_18;
  undefined4 local_14;
  int local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  void *local_6;
  undefined2 local_4;
  
  pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_4 = (undefined2)((ulong)pvVar3 >> 0x10);
  local_6 = (void *)pvVar3;
  local_14 = *(undefined4 *)((int)local_6 + 0xc);
  local_8 = *(int *)((int)local_6 + 0x10);
  local_1a = &local_c;
  local_22 = (u8 *)CONCAT22(local_22._2_2_,&local_14);
  local_10 = local_8 + 0x1;
  out_entity = (undefined1 *)CONCAT22(unaff_SS,local_2c);
  local_e = local_10;
  local_c = local_14;
  pvVar3 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(param_1);
  puVar4 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_14),
                      (long)pvVar3,out_entity);
  local_22 = (u8 *)*puVar4;
  cStack_33 = (char)((ulong)local_22 >> 0x18);
  local_18 = local_22;
  if (cStack_33 != '\0')
  {
    local_18._0_2_ = (u8 *)local_22;
    packed_id = (u8 *)local_18;
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar3);
    if (uVar2 == 0x64)
    {
      local_26 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
      puVar1 = (undefined2 *)((int)*local_26 + 0x58);
      (*(code *)*puVar1)();
    }
  }
  UI_Build_Item_Set_State_7_and_Cleanup_b514(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_State4_Push_Resource_Event_4194(void *param_1)
{
  undefined2 uVar1;
  void *pvVar2;
  void *pvVar3;
  
  UI_Build_Item_OnTick_State4_Update_be9e(param_1);
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(param_1);
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  if ((*(long *)((int)(void *)pvVar2 + 0x200) != 0x8000002) &&
     (*(int *)((int)(void *)param_1 + 0x12) == 0x5))
  {
    pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    Turn_Manager_Push_Resource_Event_Logic
              ((void *)pvVar3,*(long *)((int)(void *)pvVar2 + 0x4),0xe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_VCall_24_on_Neighbor_Type100_and_State7_41ea(void *param_1)
{
  undefined2 *puVar1;
  u8 *packed_id;
  u16 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 *out_entity;
  char cStack_33;
  undefined1 local_2c [0x6];
  undefined4 *local_26;
  u8 *local_22;
  undefined4 *local_1a;
  u8 *local_18;
  undefined4 local_14;
  int local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  void *local_6;
  undefined2 local_4;
  
  UI_Build_Item_Set_State_7_and_Cleanup_b514(param_1);
  pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  local_4 = (undefined2)((ulong)pvVar3 >> 0x10);
  local_6 = (void *)pvVar3;
  local_14 = *(undefined4 *)((int)local_6 + 0xc);
  local_8 = *(int *)((int)local_6 + 0x10);
  local_1a = &local_c;
  local_22 = (u8 *)CONCAT22(local_22._2_2_,&local_14);
  local_10 = local_8 + 0x1;
  out_entity = (undefined1 *)CONCAT22(unaff_SS,local_2c);
  local_e = local_10;
  local_c = local_14;
  pvVar3 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(param_1);
  puVar4 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_14),
                      (long)pvVar3,out_entity);
  local_22 = (u8 *)*puVar4;
  cStack_33 = (char)((ulong)local_22 >> 0x18);
  if (cStack_33 != '\0')
  {
    local_18._0_2_ = (u8 *)local_22;
    packed_id = (u8 *)local_18;
    local_18 = local_22;
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar3);
    if (uVar2 == 0x64)
    {
      local_26 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
      puVar1 = (undefined2 *)((int)*local_26 + 0x24);
      (*(code *)*puVar1)();
    }
  }
  return;
}



void __stdcall16far void_noop_stub_1028_42c2(void)
{
  return;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_42c6(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x446A. Initializes base class and sets vtable to
// 0x446A.

void * __stdcall16far UI_Build_Item_Type_446A_ctor_init_4354(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)s___1050_446a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x446A.

void * __stdcall16far
UI_Build_Item_Type_446A_ctor_with_Params_4376
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s___1050_446a;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



u16 __stdcall16far UI_Build_Item_Check_Active_States_5_6_43a0(u32 param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(param_1 >> 0x10);
  if ((*(int *)((int)param_1 + 0x12) != 0x6) && (*(int *)((int)param_1 + 0x12) != 0x5))
  {
    return 0x0;
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Build_Item_Sync_and_Decrement_Resource_8_43c2
          (void *param_1,undefined2 param_2,int param_3)
{
  void *pvVar1;
  
  UI_Build_Item_Sync_Simulator_Resource_Event_bd38((void *)CONCAT22(param_2,param_1));
  if (param_3 == 0x0)
  {
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
    UI_Object_Decrement_Item_Count_in_Collection_E_Logic_maybe
              ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Toggles an internal resource property (0x35) between 0 and 1000 based on param_2,
// provided the resource category 0x83 is valid.

void __stdcall16far UI_Build_Item_Handle_Resource_Toggle_43f6(void *this_ptr,int toggle)
{
  int iVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  pvVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
  iVar1 = Resource_Category_Get_Mapped_Offset_Value_Logic
                    ((void *)pvVar2,(int)((ulong)pvVar2 >> 0x10));
  if (0x0 < iVar1)
  {
    pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    if (toggle == 0x0)
    {
      uVar3 = 0x0;
    }
    else
    {
      uVar3 = 0x3e8;
    }
    UI_Component_Set_List_Value_at_22_Logic_7d1c(pvVar2,uVar3,0x230000);
  }
  return;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_4444(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x4836. Initializes base class, sets field 0x20 to
// 0, and sets vtable to 0x4836.

void * __stdcall16far UI_Build_Item_Type_4836_ctor_init_44d2(void *this_ptr)
{
  undefined2 uVar1;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined4 *)((int)(void *)this_ptr + 0x20) = 0x0;
  *(undefined2 *)this_ptr = 0x4836;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x4836.

void * __stdcall16far
UI_Build_Item_Type_4836_ctor_with_Params_44fe
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined4 *)(param_1 + 0x10) = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x4836;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Internal destructor for build item 0x4836. Cleans up its internal sub-object and
// reverts vtables.

void __stdcall16far UI_Build_Item_Type_4836_dtor_Internal_4530(void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  *(undefined2 *)this_ptr = 0x4836;
  *(undefined2 *)((int)pvVar2 + 0x2) = 0x1028;
  if (*(int *)((int)pvVar2 + 0x22) != 0x0 ||
      (undefined4 *)*(int *)((int)pvVar2 + 0x20) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)pvVar2 + 0x20);
    (*(code *)*puVar1)();
  }
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  return;
}



void __stdcall16far
UI_Build_Item_Transition_and_Destroy_SubObject_20_456e(void *param_1,void *param_2)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  UI_Build_Item_Set_Active_Object_Logic_b46e(param_1,param_2);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar2 = (void *)param_1;
  if (*(int *)((int)pvVar2 + 0x22) != 0x0 ||
      (undefined4 *)*(int *)((int)pvVar2 + 0x20) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)pvVar2 + 0x20);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)pvVar2 + 0x20) = 0x0;
  return;
}



// Per-tick update for build item 0x4836. Manages state 4 progress and pushes event 2 to
// the Turn Manager upon completion (state 5).

void __stdcall16far UI_Build_Item_Type_4836_OnTick_Update_45b0(void *this_ptr)
{
  void *pvVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  UI_Build_Item_OnTick_State4_Update_be9e(this_ptr);
  if (*(int *)((int)(void *)this_ptr + 0x12) == 0x5)
  {
    uVar3 = 0x40000;
    uVar2 = 0x2;
    pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    UI_Component_Batch_Spawn_SubEntities_Logic_7c50
              ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10),uVar2,uVar3);
  }
  return;
}



// Calculates the capacity-based 'remaining' value (1000 - current sum) for a
// construction item. Equivalent to 1028:3C32 but uses a direct sum call.

void * __stdcall16far
UI_Construction_Item_Calculate_Capacity_Remaining_45e2(void *this_ptr)
{
  long lVar1;
  
  lVar1 = UI_Construction_Item_Sum_List_Values_478a(this_ptr);
  return (void *)CONCAT22(-(uint)(0x3e8 < (uint)lVar1) - (int)((ulong)lVar1 >> 0x10),
                          (void *)(0x3e8 - (uint)lVar1));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Highly complex routine that clones sub-items from a construction list into an active
// state. Creates new UI Building objects (vtable 0x56CE) for each valid entry and adds
// them to the internal list of the target building manager.

u32 __stdcall16far
UI_Construction_Item_Batch_Clone_SubItems_to_Active_45fe(void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint extraout_DX;
  uint uVar4;
  uint uVar5;
  uint extraout_DX_00;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 in_stack_0000ffc0;
  undefined4 *puStack_2c;
  long local_28;
  astruct_491 *paStack_22;
  uint uStack_20;
  undefined4 uStack_1e;
  int local_1a [0x4];
  ulong uStack_12;
  ulong uStack_e;
  void *pvStack_a;
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  pvStack_a = (void *)*(long *)((int)pvStack_6 + 0x22);
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar6 = (int)this_ptr;
  paStack_22 = (astruct_491 *)*(undefined2 *)(iVar6 + 0x20);
  uVar4 = *(uint *)(iVar6 + 0x22);
  uStack_1e = (undefined4 *)CONCAT22(uVar4,paStack_22);
  uStack_20 = uVar4;
  if (uVar4 != 0x0 || paStack_22 != NULL)
  {
    (*(code *)*(undefined2 *)paStack_22->field0_0x0)();
    uVar4 = extraout_DX;
  }
  paStack_22 = allocate_memory(CONCAT22(in_stack_0000ffc0,0xc));
  uVar5 = uVar4 | (uint)paStack_22;
  uStack_20 = uVar4;
  if (uVar5 == 0x0)
  {
    pvVar2 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(paStack_22,uVar4);
  }
  *(undefined2 *)(iVar6 + 0x20) = pvVar2;
  *(uint *)(iVar6 + 0x22) = uVar5;
  if (pvStack_a != NULL)
  {
    uStack_e = (ulong)*(uint *)((int)pvStack_a + 0x4);
    for (uStack_12 = 0x0; uStack_12 < uStack_e; uStack_12 += 0x1)
    {
      UI_Item_List_Get_Item_at_Index_Logic
                (pvStack_a,(long *)CONCAT22(unaff_SS,&local_28),
                 (int *)CONCAT22(unaff_SS,local_1a),(uint)uStack_12);
      if ((local_28 != 0x0) && (local_1a[0x0] != 0x0))
      {
        puVar3 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
        uStack_1e = (undefined4 *)CONCAT22(uVar5,puVar3);
        if (uVar5 == 0x0 && puVar3 == NULL)
        {
          puStack_2c = NULL;
        }
        else
        {
          *(char **)uStack_1e = (char *)s_1_1050_389a;
          *(undefined2 *)((int)puVar3 + 0x2) = 0x1008;
          *(undefined2 *)(puVar3 + 0x1) = 0x0;
          *(undefined2 *)((int)puVar3 + 0x6) = 0x0;
          *(undefined2 *)(puVar3 + 0x2) = 0x0;
          *(undefined2 *)((int)puVar3 + 0xa) = 0x0;
          *(undefined2 *)(puVar3 + 0x3) = 0x0;
          *(undefined2 *)uStack_1e = 0x56ce;
          *(undefined2 *)((int)puVar3 + 0x2) = 0x1018;
          puStack_2c = uStack_1e;
        }
        uVar8 = (undefined2)((ulong)puStack_2c >> 0x10);
        puVar3 = (undefined4 *)puStack_2c;
        *(int *)(puVar3 + 0x1) = local_1a[0x0];
        *(undefined2 *)((int)puVar3 + 0xa) = (undefined2)local_28;
        *(undefined2 *)(puVar3 + 0x3) = (undefined2)local_28;
        puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar6 + 0x20) + 0x8)
        ;
        (*(code *)*puVar1)(0x1000,(int)*(undefined4 *)(iVar6 + 0x20),
                           (int)((ulong)*(undefined4 *)(iVar6 + 0x20) >> 0x10),puVar3,
                           uVar8);
        uVar5 = extraout_DX_00;
      }
    }
  }
  return CONCAT22(*(undefined2 *)(iVar6 + 0x22),*(undefined2 *)(iVar6 + 0x20));
}



u16 __stdcall16far UI_Construction_Item_Check_Sum_1000(void *param_1)
{
  long lVar1;
  
  lVar1 = UI_Construction_Item_Sum_List_Values_478a(param_1);
  if (((int)((ulong)lVar1 >> 0x10) == 0x0) && ((uint)lVar1 < 0x3e8))
  {
    return 0x0;
  }
  return 0x1;
}



// Calculates the sum of values across all items in the construction item's associated
// UI Item List (offset 0x22).

long __stdcall16far UI_Construction_Item_Sum_List_Values_478a(void *this_ptr)
{
  undefined2 uVar1;
  undefined2 unaff_SS;
  long local_1e;
  int local_1a [0x4];
  uint uStack_12;
  uint uStack_10;
  long lStack_e;
  void *pvStack_a;
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar1 = (undefined2)((ulong)pvStack_6 >> 0x10);
  pvStack_a = (void *)*(undefined4 *)((int)pvStack_6 + 0x22);
  lStack_e = 0x0;
  if (*(int *)((int)pvStack_6 + 0x24) == 0x0 && (int)pvStack_a == 0x0)
  {
    return 0x0;
  }
  uStack_10 = *(uint *)((int)pvStack_a + 0x4);
  for (uStack_12 = 0x0; uStack_12 < uStack_10; uStack_12 += 0x1)
  {
    UI_Item_List_Get_Item_at_Index_Logic
              (pvStack_a,(long *)CONCAT22(unaff_SS,&local_1e),
               (int *)CONCAT22(unaff_SS,local_1a),uStack_12);
    if (0x0 < local_1a[0x0])
    {
      lStack_e += local_1e;
    }
  }
  return lStack_e;
}



void * __stdcall16far
UI_Build_Item_Type4836_dtor_Scalar_Deleting_4810(void *param_1,byte param_2)
{
  UI_Build_Item_Type_4836_dtor_Internal_4530(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x4942. Initializes base class and sets vtable to
// 0x4942.

void * __stdcall16far UI_Build_Item_Type_4942_ctor_init_489e(u16 *this_ptr)
{
  undefined2 in_stack_00000006;
  
  UI_Build_Item_Base_ctor_init_b354(_this_ptr);
  *_this_ptr = 0x4942;
  this_ptr[0x1] = 0x1028;
  return _this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x4942.

void * __stdcall16far
UI_Build_Item_Type_4942_ctor_with_Params_48c0
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x4942;
  param_1[0x1] = 0x1028;
  param_1[0x7] = param_1[0x6];
  param_1[0x8] = param_1[0x6];
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far UI_Build_Item_Transition_to_State_0_48fa(void *param_1)
{
  UI_Build_Item_Transition_State_Logic_bdac(param_1,0x0);
  return;
}
