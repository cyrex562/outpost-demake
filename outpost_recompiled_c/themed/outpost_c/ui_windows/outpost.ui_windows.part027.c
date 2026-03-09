/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 27/54
 * Original lines (combined): 74264-75874
 * Boundaries: top-level declarations/definitions only
 */




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



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_491c(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x4B1C. Initializes base class, sets vtable to
// 0x4B1C, and zero-fills its state array (offset 0x20).

void * __stdcall16far UI_Build_Item_Type_4B1C_ctor_init_49aa(void *this_ptr)
{
  int value;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  value = (int)((ulong)this_ptr >> 0x10);
  *(undefined2 *)this_ptr = 0x4b1c;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  memset_far((void *)((int)(void *)this_ptr + 0x20),value,0x0);
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x4B1C.

void * __stdcall16far
UI_Build_Item_Type_4B1C_ctor_with_Params_49de
          (undefined2 *param_1,int param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x4b1c;
  param_1[0x1] = 0x1028;
  memset_far(param_1 + 0x10,param_2,0x0);
  return (void *)CONCAT22(param_2,param_1);
}



// Retrieves a 2-byte value from the build item's internal state array (offset 0x20) by
// index.

u16 __stdcall16far UI_Build_Item_Get_State_Array_Value_4a9a(void *this_ptr,int index)
{
  return *(u16 *)((int)this_ptr + 0x20 + index * 0x2);
}



// Sets a 2-byte value in the build item's internal state array (offset 0x20) by index.

void __stdcall16far
UI_Build_Item_Set_State_Array_Value_4ab2(u32 this_ptr,u16 value,int index)
{
  *(u16 *)((int)this_ptr + index * 0x2 + 0x20) = value;
  return;
}



// Scalar deleting destructor for certain UI build items.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_4af6(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 4BB4.

void * __stdcall16far
UI_Build_Item_Type_4BB4_ctor_with_Params_4ba6
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) =
       (char *)s_SCInternalPutBldg2_site_0x_08lx__1050_506f + 0x1;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



u16 __stdcall16far UI_Build_Item_Check_Active_States_5_6_4bd0(u32 param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(param_1 >> 0x10);
  if ((*(int *)((int)param_1 + 0x12) != 0x6) && (*(int *)((int)param_1 + 0x12) != 0x5))
  {
    return 0x0;
  }
  return 0x1;
}



void __stdcall16far
UI_Construction_Manager_Set_Resource_Quota_0_1000(void *param_1,int param_2)
{
  void *pvVar1;
  undefined2 uVar2;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
  if (param_2 == 0x0)
  {
    uVar2 = 0x0;
  }
  else
  {
    uVar2 = 0x3e8;
  }
  UI_Component_Set_List_Value_at_22_Logic_7d1c(pvVar1,uVar2,0x230000);
  return;
}



// Checks if the associated simulator object's field at offset 0x10 is zero. Equivalent
// to 1028:11DE.

u16 __stdcall16far UI_Build_Item_Check_Object_Offset_10_is_Zero_4f62(void *this_ptr)
{
  void *pvVar1;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  if (*(int *)((int)(void *)pvVar1 + 0x10) == 0x0)
  {
    return 0x1;
  }
  return 0x0;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_504a(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x5280. Initializes base class and sets vtable to
// 0x5280.

void * __stdcall16far UI_Build_Item_Type_5280_ctor_init_50d8(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0x5280;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x5280.

void * __stdcall16far
UI_Build_Item_Type_5280_ctor_with_Params_50fa
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x5280;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Scalar deleting destructor for UI build items using the B418 internal cleanup logic.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_525a(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 0x535E. Initializes base class and sets vtable to
// 0x535E.

void * __stdcall16far UI_Build_Item_Type_535E_ctor_init_52e8(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0x535e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x535E.

void * __stdcall16far
UI_Build_Item_Type_535E_ctor_with_Params_530a
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x535e;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_5338(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x54BC. Initializes base class and sets vtable to
// 0x54BC.

void * __stdcall16far UI_Build_Item_Type_54BC_ctor_init_53c6(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0x54bc;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x54BC.

void * __stdcall16far
UI_Build_Item_Type_54BC_ctor_with_Params_53e8
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x54bc;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}
