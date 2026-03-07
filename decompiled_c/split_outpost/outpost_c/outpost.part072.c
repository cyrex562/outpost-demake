/*
 * Source: outpost.c
 * Chunk: 72/117
 * Original lines: 82144-83328
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Process_Random_Resource_Event_af08(undefined4 param_1)
{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  void *pvVar5;
  void *pvVar6;
  int local_c;
  int iStack_a;
  
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  if (((int)g_ModeVersion_13AE < 0x1) || (SBORROW2((int)g_ModeVersion_13AE,0x1)))
  {
LAB_1028_af27:
    iStack_a = 0x1;
  }
  else
  {
    if ((undefined **)g_ModeVersion_13AE == (undefined **)&p_CurrentHeapContext ||
        (int)(g_ModeVersion_13AE + -0x1) < 0x1)
    {
      local_c = 0x1;
      iStack_a = 0x1;
      goto LAB_1028_af42;
    }
    if ((u16 *)g_ModeVersion_13AE != (u16 *)&p_LastAllocatedBlock) goto LAB_1028_af27;
    iStack_a = 0x2;
  }
  local_c = 0x3;
LAB_1028_af42:
  iVar1 = random_int_range(iStack_a,local_c);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *(int *)(iVar3 + 0x114) = iVar1;
  pvVar5 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
  pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)(iVar3 + 0x108));
  uVar2 = (undefined2)((ulong)pvVar6 >> 0x10);
  Turn_Manager_Add_Resource_Change_Entry_Logic
            ((void *)pvVar5,0x0,*(int *)(iVar3 + 0x114),
             *(int *)((int)(void *)pvVar6 + 0x208),*(long *)(iVar3 + 0x108),0x2);
  pvVar5 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  Turn_Manager_Push_Resource_Event_Logic
            ((void *)pvVar5,*(long *)((int)(void *)pvVar6 + 0x4),0xd);
  return 0x1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_afce(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x116));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar8 = (undefined2)((ulong)param_1 >> 0x10);
    iVar6 = (int)param_1;
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar6 + 0x108);
    *(undefined4 *)(puVar3 + 0x86) = *(undefined4 *)(iVar6 + 0x10c);
    *(undefined4 *)(puVar3 + 0x88) = *(undefined4 *)(iVar6 + 0x110);
    puVar3[0x8a] = *(undefined2 *)(iVar6 + 0x114);
    *local_a = 0xb0ce;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Scalar deleting destructor for UI objects. Reverts vtable to base and conditionally
// frees memory.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_b0a2(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 0xB1F4. Inherits from Type 0x6E50 and sets its own
// vtable.

void * __stdcall16far
UI_Build_Item_Type_B1F4_ctor_init(void *this_ptr,u32 arg1,u32 arg2)
{
  UI_Build_Item_Type_6E50_ctor_init_6af2(this_ptr,arg1,arg2);
  *(undefined2 *)this_ptr = 0xb1f4;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_b108(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x110));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar8 = (undefined2)((ulong)param_1 >> 0x10);
    iVar6 = (int)param_1;
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar6 + 0x108);
    *(undefined4 *)(puVar3 + 0x86) = *(undefined4 *)(iVar6 + 0x10c);
    *local_a = 0x6e50;
    puVar3[0x1] = 0x1028;
    *local_a = 0xb1f4;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Scalar deleting destructor for UI objects. Reverts vtable to base and conditionally
// frees memory.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_b1c8(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Base constructor for UI items. Initializes core window state and sets vtable to
// 0xB33C.

void * __stdcall16far UI_Item_Base_ctor_init_b204(void *this_ptr)
{
  undefined2 uVar1;
  
  UI_Window_Base_ctor_init_1628(this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)((int)this_ptr + 0xc) = 0x0;
  *(undefined2 *)this_ptr = 0xb33c;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized base constructor for UI items. Sets vtable to 0xB33C.

void * __stdcall16far
UI_Item_Base_ctor_with_Params_b22c(undefined2 *param_1,undefined2 param_2,void *param_3)
{
  undefined2 uVar1;
  
  UI_Window_Base_ctor_with_Params_165e(param_1,0x6000000,param_3);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  ((undefined2 *)param_1)[0x6] = param_2;
  *param_1 = 0xb33c;
  ((undefined2 *)param_1)[0x1] = 0x1028;
  return param_1;
}



// Internal destructor for base UI items. Reverts vtable and cleans up window context.

void __stdcall16far UI_Item_Base_dtor_Internal_b260(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0xb33c;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  UI_Window_Base_dtor_Internal_16b2(this_ptr);
  return;
}



void __stdcall16far void_noop_stub_1028_b27e(void)
{
  return;
}



undefined2 __stdcall16far
UI_Window_Serialize_and_Update_0C_b282(void *param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  undefined2 local_c [0x5];
  
  uVar1 = UI_Window_Save_to_File_Logic_16d6(param_1,param_2);
  uVar3 = 0x0;
  if (uVar1 != 0x0)
  {
    local_c[0x0] = *(undefined2 *)((int)(void *)param_1 + 0xc);
    iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    uVar3 = 0x1;
  }
  return uVar3;
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



// Scalar deleting destructor for base UI items.

void * __stdcall16far UI_Item_Base_dtor_Scalar_Deleting_b316(void *this_ptr,byte flags)
{
  UI_Item_Base_dtor_Internal_b260(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Base constructor for UI Build Items. Initializes multiple internal fields (0xC-0x1C)
// and sets vtable to 0xCF6A.

void * __stdcall16far UI_Build_Item_Base_ctor_init_b354(void *this_ptr)
{
  astruct_320 *uVar1;
  undefined2 uVar2;
  
  UI_Window_Base_ctor_init_1628(this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_320 *)this_ptr;
  uVar1->field11_0xc = 0x0;
  uVar1->field12_0xe = 0x0;
  uVar1->field13_0x10 = 0x0;
  uVar1->field14_0x12 = 0x0;
  uVar1->field17_0x18 = 0x0;
  uVar1->field18_0x1a = 0x0;
  uVar1->field19_0x1c = 0x0;
  *(undefined2 *)this_ptr = 0xcf6a;
  uVar1->field2_0x2 = 0x1028;
  uVar1->field16_0x16 = 0x0;
  uVar1->field15_0x14 = 0x0;
  return this_ptr;
}



// Parameterized base constructor for UI Build Items. Sets up initial type ID and
// default display layer (0x42 or 0x6B).

void * __stdcall16far
UI_Build_Item_Base_ctor_with_Params_b39e(astruct_319 *param_1,u16 param_2,void *param_3)
{
  astruct_319 *uVar1;
  undefined2 uVar2;
  
  UI_Window_Base_ctor_with_Params_165e(param_1,0x7000000,param_3);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_319 *)param_1;
  uVar1->field11_0xc = param_2;
  uVar1->field12_0xe = 0x42;
  uVar1->field13_0x10 = 0x0;
  uVar1->field14_0x12 = 0x0;
  uVar1->field16_0x18 = 0x0;
  uVar1->field17_0x1a = 0x0;
  uVar1->field18_0x1c = 0x0;
  *(undefined2 *)param_1 = 0xcf6a;
  uVar1->field2_0x2 = 0x1028;
  UI_Build_Item_Initialize_Random_Subtype_bf76(param_1);
  uVar1->field15_0x14 = 0x0;
  if ((0x4e < (int)uVar1->field11_0xc) && ((int)uVar1->field11_0xc < 0x70))
  {
    uVar1->field12_0xe = 0x6b;
  }
  return param_1;
}



// Internal destructor for UI Build Items. Frees an internal data pointer (offset 0x14)
// if the item is in specific active states (4, 5, 6). Reverts vtables.

void __stdcall16far UI_Build_Item_Base_dtor_Internal_b418(void *this_ptr)
{
  int iVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  *(undefined2 *)this_ptr = 0xcf6a;
  *(undefined2 *)((int)pvVar2 + 0x2) = 0x1028;
  iVar1 = *(int *)((int)pvVar2 + 0x12);
  if (((iVar1 == 0x4) || (iVar1 == 0x5)) ||
     ((iVar1 == 0x6 &&
      ((*(int *)((int)pvVar2 + 0x18) == 0x4 || (*(int *)((int)pvVar2 + 0x18) == 0x5)))))
     )
  {
    free_if_not_null((void *)(void *)*(undefined4 *)((int)pvVar2 + 0x14));
  }
  UI_Window_Base_dtor_Internal_16b2(this_ptr);
  return;
}



// Links a build item to an active simulator object. Syncs coordinates and notifies the
// construction manager of the new selection.

void __stdcall16far
UI_Build_Item_Set_Active_Object_Logic_b46e(void *this_ptr,void *entity_ptr)
{
  int new_pop;
  void *this_ptr_00;
  void *this_ptr_01;
  void *pvVar1;
  undefined2 uVar2;
  
  this_ptr_00 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(this_ptr);
  pvVar1 = NULL;
  uVar2 = 0x0;
  this_ptr_01 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  UI_Component_Set_Vector_Tracker_Ptr_6d80(this_ptr_01,(void *)CONCAT22(uVar2,pvVar1));
  new_pop = *(int *)((int)(void *)this_ptr_01 + 0x32);
  if (new_pop != 0x0)
  {
    UI_Component_Set_Cap_Value_Logic_6c4c(this_ptr_01,0x0);
    Colony_Adjust_SubEntity_Population_Logic_387e(this_ptr_00,0x0,new_pop,this_ptr_01);
  }
  UI_Component_Free_List_22_Logic_7296(this_ptr_01);
  *(undefined4 *)((int)(void *)this_ptr + 0x1c) =
       *(undefined4 *)((int)(void *)entity_ptr + 0x200);
  return;
}



u16 __stdcall16far const_0_stub_1028_b4e6(void)
{
  return 0x0;
}



u16 __stdcall16far const_0_stub_1028_b4ec(void)
{
  return 0x0;
}



// Retrieves the construction manager associated with the build item by traversing its
// object hierarchy.

void * __stdcall16far UI_Build_Item_Get_Construction_Manager_Logic_b4f2(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  return (void *)CONCAT22(*(undefined2 *)((int)(void *)pvVar2 + 0x30),
                          (void *)*(undefined2 *)((int)(void *)pvVar2 + 0x2e));
}



// Transitions a build item to state 7, performing intermediate resource cleanup and
// triggering UI refreshes.

void __stdcall16far UI_Build_Item_Set_State_7_and_Cleanup_b514(void *this_ptr)
{
  int iVar1;
  void *pvVar2;
  undefined2 uVar3;
  void *this_ptr_00;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  iVar1 = *(int *)((int)pvVar2 + 0x12);
  if (((iVar1 == 0x4) || (iVar1 == 0x5)) ||
     ((iVar1 == 0x6 &&
      ((*(int *)((int)pvVar2 + 0x18) == 0x4 || (*(int *)((int)pvVar2 + 0x18) == 0x5)))))
     )
  {
    free_if_not_null((void *)(void *)*(undefined4 *)((int)pvVar2 + 0x14));
  }
  *(undefined4 *)((int)pvVar2 + 0x14) = 0x0;
  *(undefined2 *)((int)pvVar2 + 0x12) = 0x7;
  this_ptr_00 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  UI_Component_Free_List_22_Logic_7296(this_ptr_00);
  UI_Component_Free_List_26_Logic_72d0(this_ptr_00);
  UI_Component_Destroy_Internal_List_1E_Logic_730a(this_ptr_00);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the construction manager associated with the build item by traversing its
// object hierarchy. Equivalent to 1028:B4F2.

void * __stdcall16far UI_Build_Item_Get_Construction_Manager_Logic_b58e(void *this_ptr)
{
  void *pvVar1;
  
  pvVar1 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)(void *)this_ptr + 0x8));
  return pvVar1;
}



u16 __stdcall16far UI_Build_Item_Get_U16_94_if_State5_b5a8(u32 param_1)
{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  if (*(int *)((int)param_1 + 0x12) != 0x5)
  {
    return 0x0;
  }
  uVar1 = *(undefined4 *)((int)param_1 + 0x14);
  return *(u16 *)((int)uVar1 + 0x94);
}



u16 __stdcall16far UI_Build_Item_Get_U16_9C_if_State5_b5ca(u32 param_1)
{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  if (*(int *)((int)param_1 + 0x12) != 0x5)
  {
    return 0x0;
  }
  uVar1 = *(undefined4 *)((int)param_1 + 0x14);
  return *(u16 *)((int)uVar1 + 0x9c);
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Traverses the build item's hierarchy to retrieve the primary world entity associated
// with its construction manager.

void * __stdcall16far UI_Build_Item_Get_World_Context_Entity_bab6(void *this_ptr)
{
  u8 *puVar1;
  void *pvVar2;
  
  puVar1 = UI_Build_Item_Get_World_Coordinates_bad4(this_ptr);
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puVar1);
  return pvVar2;
}



// Retrieves the 2D world coordinates (X, Y) from the build item's parent construction
// context.

void * __stdcall16far UI_Build_Item_Get_World_Coordinates_bad4(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  
  pvVar2 = UI_Build_Item_Get_Parent_World_Entity_baf6(this_ptr);
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  return (void *)CONCAT22(*(undefined2 *)((int)pvVar2 + 0xa),
                          (void *)*(undefined2 *)((int)pvVar2 + 0x8));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the world entity pointer for the build item's parent container.

void * __stdcall16far UI_Build_Item_Get_Parent_World_Entity_baf6(void *this_ptr)
{
  u8 *puVar1;
  void *pvVar2;
  
  puVar1 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(this_ptr);
  if (puVar1 == NULL)
  {
    return NULL;
  }
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puVar1);
  return pvVar2;
}



// Alternative routine to retrieve world coordinates from the build item's construction
// manager. Returns (0,0) if no manager is linked.

void * __stdcall16far
UI_Build_Item_Get_World_Coordinates_Alternative_bb24(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  
  if (*(long *)((int)this_ptr + 0x8) == 0x0)
  {
    return NULL;
  }
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  return (void *)CONCAT22(*(undefined2 *)((int)pvVar2 + 0xa),
                          (void *)*(undefined2 *)((int)pvVar2 + 0x8));
}



// Simple wrapper to set the build item's UI position and refresh its children.

void __stdcall16far UI_Build_Item_Set_Position_Wrapper_bb56(void *this_ptr,void *pos)
{
  UI_Window_Set_Parent_Wrapper_177a(this_ptr,pos);
  return;
}



// Returns a pointer to the internal resource state data (offset 0xA4) if the build item
// is in an active state (5, 6).

void * __stdcall16far UI_Build_Item_Get_Resource_Data_Ptr_bb6a(void *this_ptr)
{
  astruct_318 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_318 *)this_ptr;
  if ((uVar1->field18_0x12 != 0x5) && (uVar1->field18_0x12 != 0x6))
  {
    return NULL;
  }
  return (void *)CONCAT22(uVar1->field20_0x16,(void *)(uVar1->field19_0x14 + 0xa4));
}



// Bulk updates internal resource state data (10 bytes) for active build items. Triggers
// entity status flag updates and ensures field 0xAA is initialized to 1.

void __stdcall16far
UI_Build_Item_Update_Resource_Data_Logic_bb96
          (void *this_ptr,u16 data_offset,u16 data_segment)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  astruct_317 *uVar4;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_317 *)this_ptr;
  if ((uVar4->field18_0x12 == 0x5) || (uVar4->field18_0x12 == 0x6))
  {
    uVar6 = (undefined2)(uVar4->field19_0x14 >> 0x10);
    puVar4 = (undefined4 *)((int)uVar4->field19_0x14 + 0xa4);
    for (iVar3 = 0x2; iVar3 != 0x0; iVar3 += -0x1)
    {
      puVar2 = puVar4;
      puVar4 = puVar4 + 0x1;
      puVar1 = (undefined4 *)data_offset;
      data_offset += 0x4;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)data_offset;
    Simulator_Update_Entity_Status_Flag_at_AC_c724(this_ptr);
    uVar6 = (undefined2)(uVar4->field19_0x14 >> 0x10);
    iVar3 = (int)uVar4->field19_0x14;
    if (*(int *)(iVar3 + 0xaa) == 0x0)
    {
      *(undefined2 *)(iVar3 + 0xaa) = 0x1;
    }
  }
  return;
}



void __stdcall16far set_ulong_to_0_1028_bbf0(u16 param_1,u16 param_2,u32 *param_3)
{
  *param_3 = 0x0;
  return;
}



void __stdcall16far Simulator_Object_VCall_40_bc02(u32 *param_1)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x40);
  (*(code *)*puVar1)();
  return;
}



// Retrieves the appropriate ID for the build item based on its current state (normal,
// state 4, or state 7).

u16 __stdcall16far UI_Build_Item_Get_ID_for_Current_State_bc1c(u32 this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  if (*(int *)(iVar1 + 0x12) == 0x4)
  {
    return *(u16 *)(iVar1 + 0xe);
  }
  if (*(int *)(iVar1 + 0x12) == 0x7)
  {
    return *(u16 *)(iVar1 + 0x10);
  }
  return *(u16 *)(iVar1 + 0xc);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a specific property (offset 0x96) from the simulator entity associated with
// the build item.

u16 __stdcall16far UI_Build_Item_Get_Entity_Property_v96_bc4a(undefined4 param_1)
{
  u16 uVar1;
  void *pvVar2;
  
  pvVar2 = Simulator_Object_Clone_from_Manager_e0bc
                     (_p_SimulatorWorldContext,*(undefined2 *)((int)param_1 + 0xc));
  uVar1 = *(u16 *)((int)(void *)pvVar2 + 0x96);
  free_if_not_null((void *)pvVar2);
  return uVar1;
}



// Transitions the build item to state 4.

void __stdcall16far UI_Build_Item_Transition_to_State_4_bc7e(void *this_ptr)
{
  UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x4);
  return;
}



// A complex validator for build item placement. Checks simulator context, virtual state
// flags (0x60, 0x5C), and coordinate-based safety rules.

u16 __stdcall16far
UI_Build_Item_Complex_Placement_Validator_bc90
          (void *this_ptr,void *coords,long arg3,long arg4)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  u16 uVar3;
  int iVar4;
  u16 x;
  u16 y;
  
  x = (u16)this_ptr;
  y = (u16)((ulong)this_ptr >> 0x10);
  uVar3 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6(x,y,coords,arg4);
  if ((uVar3 == 0x5) || (uVar3 == 0x6))
  {
    uVar2 = *(undefined4 *)this_ptr;
    puVar1 = (undefined2 *)((int)uVar2 + 0x60);
    iVar4 = (*(code *)*puVar1)();
    if (iVar4 != 0x0)
    {
      puVar1 = (undefined2 *)((int)uVar2 + 0x5c);
      iVar4 = (*(code *)*puVar1)();
      if (iVar4 != 0x0)
      {
        uVar3 = Simulator_Handle_Entity_ID_Change_at_Coords_c23e(x,y,coords,arg3,arg4);
        if (uVar3 != 0x0)
        {
          uVar3 = Simulator_Is_Coordinate_Within_Client_Margins_c314
                            (x,y,coords,(u16)arg3,(u16)((ulong)arg3 >> 0x10),(u8 *)arg4)
          ;
          if (uVar3 != 0x0)
          {
            return 0x1;
          }
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
// Synchronizes simulator-level resource events with the build item. Iterates through
// resource list 0x52 and updates internal object states.

void __stdcall16far UI_Build_Item_Sync_Simulator_Resource_Event_bd38(void *this_ptr)
{
  int iVar1;
  int iVar2;
  void *this_ptr_00;
  undefined2 in_DX;
  void *pvVar3;
  int iStack_14;
  
  this_ptr_00 = (void *)*(undefined4 *)((int)_p_SimulatorWorldContext + 0x52);
  Simulator_Map_Context_Load_Object_Template_4bbe
            (this_ptr_00,*(int *)((int)(void *)this_ptr + 0xc));
  pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  pvVar3 = (void *)*(undefined4 *)((int)(void *)pvVar3 + 0x2e);
  iStack_14 = 0x11;
  do
  {
    iVar1 = *(int *)(iStack_14 * 0x4 + (int)(void *)this_ptr_00);
    iVar2 = *(int *)((int)(void *)this_ptr_00 + iStack_14 * 0x4 + 0x2);
    if (iVar2 != 0x0 || iVar1 != 0x0)
    {
      Colony_Add_to_Secondary_Resource_Tracker_5770
                (pvVar3,CONCAT22(iVar2,iVar1),iStack_14);
    }
    iStack_14 += 0x1;
  } while (iStack_14 < 0x25);
  return;
}
