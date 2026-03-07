/*
 * Source: outpost.c
 * Chunk: 91/117
 * Original lines: 103741-104853
 * Boundaries: top-level declarations/definitions only
 */




void __stdcall16far Helper_NoOp_Stub_e4ba(void)
{
  return;
}



undefined2 * __stdcall16far
Base_Object_dtor_Scalar_Deleting_e4be(undefined2 *param_1,byte param_2)
{
  *param_1 = (char *)s_1_1050_389a;
  ((undefined2 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((undefined2 *)param_1);
  }
  return param_1;
}



// Constructor for the 'KillBldg' debug command. Initializes base class with ID 16000
// and sets internal name 'SCKillBldg'. Sets vtable to 0xE62E.

void * __stdcall16far
Simulator_Command_KillBldg_ctor_init_e4fa(void *this_ptr,void *coords)
{
  undefined2 uVar1;
  astruct_164 *uVar2;
  
  uVar2 = (astruct_164 *)this_ptr;
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x3e80);
  uVar2->field263_0x108 = coords;
  *(undefined2 *)this_ptr = 0xe62e;
  uVar2->field2_0x2 = 0x1030;
  sprintf_wrapper(&uVar2->field7_0x8,uVar1,0x597c,0x1050,(void *)uVar2->field263_0x108,
                  (int)((ulong)uVar2->field263_0x108 >> 0x10));
  return this_ptr;
}



undefined2 __stdcall16far const_1_stub_1030_e540(void)
{
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Core logic for the 'KillBldg' command. Resolves an entity at the target coordinates
// for potential removal or validation.

u16 __stdcall16far Simulator_Command_KillBldg_Process_Logic_e546(void *this_ptr)
{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this_ptr + 0x108);
  Simulator_Get_Entity_at_Coords_Wrapper_e332
            (_p_SimulatorWorldContext,(u16)uVar1,(u16)((ulong)uVar1 >> 0x10));
  return 0x1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_e564(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x10c));
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
    *local_a = 0xe62e;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
}



void * __stdcall16far
Simulator_Command_KillBldg_dtor_Scalar_Deleting_e602(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the 'KillColony' debug command. Initializes base class with ID 3999
// and sets internal name 'SCKillColony'. Sets vtable to 0xE78A.

void * __stdcall16far
Simulator_Command_KillColony_ctor_init_e63e(void *this_ptr,u16 arg1)
{
  void *pvVar1;
  undefined2 uVar2;
  
  pvVar1 = (void *)this_ptr;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0xf9f);
  *(u16 *)((int)pvVar1 + 0x108) = arg1;
  *(undefined2 *)this_ptr = 0xe78a;
  *(undefined2 *)((int)pvVar1 + 0x2) = 0x1030;
  strcpy_optimized((char *)CONCAT22(uVar2,(char *)((int)pvVar1 + 0x8)),
                   s_SCKillColony_1050_5990);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Process_Object_Type_Resource_Change_e67c(undefined4 param_1)
{
  int resource_id;
  void *pvVar1;
  
  pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
  resource_id = Turn_Manager_Remap_Object_Type_ID_Logic_2
                          ((int)(void *)pvVar1,(int)((ulong)pvVar1 >> 0x10),
                           *(int *)((int)param_1 + 0x108));
  if (resource_id != 0x0)
  {
    Turn_Manager_Add_Resource_Change_Entry_Logic
              ((void *)pvVar1,0x0,0x0,0x1,0x0,resource_id);
  }
  return 0x1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_e6c2(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x10a));
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
    puVar3[0x84] = *(undefined2 *)(iVar6 + 0x108);
    *local_a = 0xe78a;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
}



void * __stdcall16far
Simulator_Command_KillColony_dtor_Scalar_Deleting_e75e(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the 'KillRebelColony' debug command. Initializes base class with ID
// 3999 and sets internal name 'SCKillRebelColony'. Sets vtable to 0xE890.

void * __stdcall16far Simulator_Command_KillRebelColony_ctor_init_e79a(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0xf9f);
  *(undefined2 *)this_ptr = 0xe890;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1030;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)(void *)this_ptr + 0x8)),
                   s_SCKillRebelColony_1050_599e);
  return this_ptr;
}



undefined2 __stdcall16far const_1_stub_1030_e7d0(void)
{
  return 0x1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_e7d6(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *local_a = 0xe890;
    puVar3[0x1] = 0x1030;
    local_6 = local_a;
  }
  return local_6;
}



void * __stdcall16far
Simulator_Command_KillRebelColony_dtor_Scalar_Deleting_e864(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the 'MoveBas' (Move Base/Unit) debug command. Initializes base class
// with ID 10000 and stores coordinate parameters. Sets vtable to 0xEB40.

void * __stdcall16far
Simulator_Command_MoveBas_ctor_init_e8a0
          (astruct_163 *param_1,void *param_2,u16 param_3,void *param_4)
{
  undefined2 uVar1;
  astruct_163 *uVar2;
  
  uVar2 = (astruct_163 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x2710);
  uVar2->field263_0x108 = param_2;
  uVar2->field264_0x10c = param_4;
  uVar2->field265_0x110 = param_3;
  *(undefined2 *)param_1 = 0xeb40;
  uVar2->field2_0x2 = 0x1030;
  sprintf_wrapper(&uVar2->field7_0x8,uVar1,0x59b0,0x1050,(void *)uVar2->field264_0x10c,
                  (int)((ulong)uVar2->field264_0x10c >> 0x10));
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far UI_Build_Item_Execute_Resource_Distribution_e8f8(void *param_1)
{
  void *ptr;
  int iVar1;
  undefined2 uVar2;
  void *this_ptr;
  void *pvVar3;
  u32 local_14;
  u32 local_a;
  u32 local_6;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(long *)(iVar1 + 0x108) != 0x0)
  {
    this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)(iVar1 + 0x10c));
    pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
    if (*(int *)((int)pvVar3 + 0xc) == *(int *)(iVar1 + 0x110))
    {
      UI_Build_Item_Distribute_Resources_to_Entity_ea50(param_1,this_ptr);
    }
    ptr = (void *)*(undefined2 *)(iVar1 + 0x108);
    if (*(int *)(iVar1 + 0x10a) != 0x0 || ptr != NULL)
    {
      UI_Item_List_Free_Data_Pointer_Logic
                ((void *)CONCAT22(*(int *)(iVar1 + 0x10a),ptr));
      free_if_not_null(ptr);
    }
    *(undefined4 *)(iVar1 + 0x108) = 0x0;
  }
  return 0x1;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_e98e(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x112));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar8 = (undefined2)(param_1 >> 0x10);
    iVar6 = (int)param_1;
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined4 *)((int)pvVar3 + 0x108) = *(undefined4 *)(iVar6 + 0x108);
    *(undefined4 *)((int)pvVar3 + 0x10c) = *(undefined4 *)(iVar6 + 0x10c);
    *(undefined2 *)((int)pvVar3 + 0x110) = *(undefined2 *)(iVar6 + 0x110);
    *(undefined2 *)local_a = 0xeb40;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1030;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates the remaining resource capacity of a target entity and transfers
// maintenance-related resources from the build item's internal list. Used for
// auto-supply logic.

void __stdcall16far
UI_Build_Item_Distribute_Resources_to_Entity_ea50(void *this_ptr,void *entity_ptr)
{
  int iVar1;
  astruct_162 *uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  void *this_ptr_00;
  void *local_12;
  void *local_e;
  undefined2 uStack_c;
  uint uStack_a;
  uint uStack_8;
  undefined4 uStack_6;
  
  uStack_6 = (void *)0x1869f;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_162 *)this_ptr;
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),uVar2->field269_0x110)
  ;
  if (iVar1 != 0x0)
  {
    this_ptr_00 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(entity_ptr);
    uStack_c = (undefined2)((ulong)this_ptr_00 >> 0x10);
    local_e = (void *)this_ptr_00;
    uStack_6 = UI_Construction_Item_Calculate_Capacity_Remaining_45e2(this_ptr_00);
  }
  uStack_8 = (uint)((u32 *)uVar2->field264_0x108)[0x1];
  uStack_a = 0x0;
  while( true )
  {
    if (uStack_8 <= uStack_a)
    {
      return;
    }
    UI_Item_List_Get_Item_at_Index_Logic
              (uVar2->field264_0x108,(void **)CONCAT22(unaff_SS,&local_12),
               (void **)CONCAT22(unaff_SS,&local_e),uStack_a);
    if (uStack_6 < local_12)
    {
      UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                (entity_ptr,(void *)uStack_6,uStack_6._2_2_,local_e);
      uStack_6 = NULL;
    }
    else
    {
      uStack_6 = (void *)((long)uStack_6 - (long)local_12);
      UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                (entity_ptr,(void *)local_12,(int)((ulong)local_12 >> 0x10),local_e);
    }
    if (uStack_6._2_2_ == 0x0 && (void *)uStack_6 == NULL) break;
    uStack_a += 0x1;
  }
  return;
}



void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_eb14(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



void * __stdcall16far Simulator_Object_Constructor_Type_SCMines(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x1f3f);
  *(undefined2 *)param_1 = 0xecb2;
  *(undefined2 *)((int)param_1 + 0x2) = 0x1030;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)param_1 + 0x8)),
                   s_SCMines_1050_59c6);
  return param_1;
}



u16 __stdcall16far Simulator_World_Process_Infrastructure_VCall_2C(void)
{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 *puVar5;
  u16 local_22;
  u16 local_1a;
  u32 local_18;
  u16 local_14;
  u16 local_12;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x700);
  while( true )
  {
    puVar5 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((u16 *)CONCAT22(unaff_SS,&local_14));
    uVar4 = (undefined2)((ulong)puVar5 >> 0x10);
    puVar3 = (undefined4 *)puVar5;
    if (puVar5 == NULL) break;
    if (*(int *)((int)puVar3 + 0x12) == 0x5)
    {
      iVar1 = *(int *)(puVar3 + 0x3);
      if (((0x32 < iVar1) && (!SBORROW2(iVar1,0x33))) &&
         ((iVar1 == 0x34 || iVar1 + -0x33 < 0x1 ||
          ((0x2b < iVar1 + -0x34 && (iVar1 + -0x60 < 0x2))))))
      {
        puVar2 = (undefined2 *)((int)*puVar5 + 0x2c);
        (*(code *)*puVar2)(0x1028,puVar3);
      }
    }
  }
  return 0x1;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_ebf8(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0xecb2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1030;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_ec86(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



void * __stdcall16far Simulator_Object_Constructor_Type_SCMorale(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0xf9f);
  *(undefined2 *)param_1 = 0xb96;
  *(undefined2 *)((int)(void *)param_1 + 0x2) = 0x1038;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)(void *)param_1 + 0x8)),
                   s_SCMorale_1050_59ce);
  return param_1;
}



// WARNING: Variable defined which should be unmapped: local_68
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far Simulator_Colony_Process_Global_Morale_and_Growth_Tick(u32 param_1)
{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  u16 uVar8;
  void *pvVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  bool bVar11;
  long lVar12;
  void *pvVar13;
  u8 *puVar14;
  void *this_ptr;
  undefined4 *puVar15;
  u16 arg1;
  u16 arg2;
  u16 local_68;
  u16 local_66;
  u32 local_60;
  u16 local_5c;
  u16 local_5a;
  u16 local_58;
  u16 local_56;
  u16 local_44;
  u16 local_42;
  u32 local_40;
  u16 local_3c;
  u16 local_3a;
  u16 local_38;
  u16 local_36;
  u32 local_34;
  u32 local_30;
  u32 local_2c;
  u32 local_26;
  u16 local_22;
  u16 local_20;
  u16 local_10;
  u16 local_e;
  u16 local_c;
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  local_c = 0x0;
  lVar12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  local_4 = (u16)((ulong)lVar12 >> 0x10);
  local_6 = (u16)lVar12;
  pvVar13 = (void *)UI_Get_Entity_Resource_Data_at_Offset_16_Logic(lVar12);
  local_8 = (u16)((ulong)pvVar13 >> 0x10);
  local_a = (u16)pvVar13;
  uVar5 = 0x0;
  if (pvVar13 != NULL)
  {
    local_c = UI_Component_Get_Entity_Type_ID_Alternative_2aaa(pvVar13);
    uVar5 = CONCAT22(local_8,local_a);
  }
  local_8 = (u16)((ulong)uVar5 >> 0x10);
  local_a = (u16)uVar5;
  if ((int)local_c < 0x2)
  {
    local_c = 0x0;
  }
  lVar12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  local_e = (u16)((ulong)lVar12 >> 0x10);
  local_10 = (u16)lVar12;
  if ((0x0 < (int)g_ModeVersion_13AE) && (!SBORROW2((int)g_ModeVersion_13AE,0x1)))
  {
    if ((undefined **)g_ModeVersion_13AE == (undefined **)&p_CurrentHeapContext ||
        (int)(g_ModeVersion_13AE + -0x1) < 0x1)
    {
      if (0x6 < (int)local_c)
      {
        local_c -= 0x2;
        goto LAB_1030_ed5b;
      }
      bVar11 = SBORROW2(local_c,0x4);
      iVar6 = local_c - 0x4;
    }
    else
    {
      if (g_ModeVersion_13AE !=
          (undefined *)((int)(undefined **)&p_CurrentHeapContext + 0x1))
      goto LAB_1030_ed5b;
      bVar11 = SBORROW2(local_c,0x7);
      iVar6 = local_c - 0x7;
    }
    if (bVar11 == iVar6 < 0x0)
    {
      local_c -= 0x1;
    }
  }
LAB_1030_ed5b:
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_22),0x1,0x0,0x400);
  while( true )
  {
    pvVar13 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                        ((u16 *)CONCAT22(unaff_SS,&local_22));
    pvVar9 = (void *)((ulong)pvVar13 >> 0x10);
    pvVar4 = (void *)pvVar13;
    if (pvVar9 == NULL && pvVar4 == NULL) break;
    if (((*(int *)((int)pvVar4 + 0x1fe) != 0x0) &&
        (*(long *)((int)pvVar4 + 0x200) != 0x8000002)) &&
       (lVar12 = Colony_Calculate_Sum_All_Resources_38b8
                           ((int)*(undefined4 *)((int)pvVar4 + 0x1f6),
                            *(u16 *)((int)pvVar4 + 0x1f8)),
       (int)((ulong)lVar12 >> 0x10) != 0x0 || (int)lVar12 != 0x0))
    {
      puVar2 = (undefined4 *)*(undefined4 *)((int)pvVar4 + 0xc);
      puVar3 = (undefined2 *)((int)*puVar2 + 0x10);
      local_34 = (*(code *)*puVar3)(0x1028,(undefined4 *)puVar2,
                                    *(undefined2 *)((int)pvVar4 + 0xe));
      local_36 = *(u16 *)((int)pvVar4 + 0x18);
      uVar10 = 0x1038;
      Simulator_Calculate_Colony_Safety_Rating_4760(pvVar13);
      local_38 = *(int *)((int)pvVar4 + 0x22) / 0xa;
      if (*(int *)((int)pvVar4 + 0x24) < 0x33)
      {
        if (*(int *)((int)pvVar4 + 0x24) < 0x32)
        {
          local_38 -= 0x1;
        }
      }
      else
      {
        local_36 += 0x1;
      }
      for (local_40 = 0x0; local_40 < local_34; local_40 += 0x1)
      {
        puVar3 = (undefined2 *)((int)*puVar2 + 0x4);
        puVar14 = (u8 *)(*(code *)*puVar3)(uVar10,(undefined4 *)puVar2,
                                           (int)((ulong)puVar2 >> 0x10),(int)local_40,
                                           (int)(local_40 >> 0x10));
        if (puVar14 != NULL)
        {
          uVar10 = 0x1028;
          this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                               (_p_SimulatorWorldContext,(u8 *)puVar14);
          puVar15 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
          if ((puVar15 != NULL) && (*(int *)((int)(undefined4 *)puVar15 + 0x12) == 0x5))
          {
            puVar3 = (undefined2 *)((int)*puVar15 + 0x48);
            iVar6 = (*(code *)*puVar3)(0x1028,puVar15);
            if (iVar6 < 0x0)
            {
              local_38 += iVar6;
            }
            else
            {
              local_36 += iVar6;
            }
          }
        }
      }
      iVar6 = local_38 - local_c;
      iVar1 = *(int *)((int)pvVar4 + 0x20a);
      arg1 = (u16)param_1;
      arg2 = (u16)(param_1 >> 0x10);
      iVar7 = Simulator_Count_Nearby_Entities_in_Collections_01c0(arg1,arg2,pvVar13);
      local_38 = iVar6 - (iVar7 - iVar1);
      uVar8 = Simulator_Planetary_Hub_OnTick_Event_Logic_008e(arg1,arg2,(u32)pvVar13);
      if ((int)uVar8 < 0x0)
      {
        local_38 += uVar8;
      }
      else
      {
        local_36 += uVar8;
      }
      if (0x3e8 < (int)local_36)
      {
        local_36 = 0x3e8;
      }
      if ((int)local_36 < 0x0)
      {
        local_36 = 0x0;
      }
      local_36 += local_38;
      if (0x3e8 < (int)local_36)
      {
        local_36 = 0x3e8;
      }
      if ((int)local_36 < 0x0)
      {
        local_36 = 0x0;
      }
      UI_Component_Shift_and_Set_Values_18_1A((u32)pvVar13,local_36);
      if (*(long *)((int)pvVar4 + 0x4) == 0x4000001)
      {
        Simulator_Colony_Process_Population_Growth_Turn_Logic_08d4
                  (param_1,local_36,pvVar4,pvVar9);
      }
      Simulator_Colony_Process_Turn_Events_and_Building_Placement_095e
                (arg1,arg2,local_36,(void *)CONCAT22(local_68,pvVar9));
    }
  }
  return 0x1;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_0000(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
                // Segment:    8
                // Offset:     000606c0
                // Length:     ef91
                // Min Alloc:  ef91
                // Flags:      0d50
                //     Code
                //     Moveable
                //     Preload
                //     Impure (Non-shareable)
                // 
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0xb96;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1038;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Performs per-turn processing for the colony hub. Dispatches randomized resource
// events (IDs 0x15-0x19) and updates global randomized state tables for the simulator.

u16 __stdcall16far
Simulator_Planetary_Hub_OnTick_Event_Logic_008e(u16 arg1,u16 arg2,u32 this_ptr)
{
  int iVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  uint uVar4;
  int index;
  int iVar5;
  undefined2 uVar6;
  void *pvVar7;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_c;
  undefined2 uStack_8;
  
  uVar6 = (undefined2)(this_ptr >> 0x10);
  iVar5 = (int)this_ptr;
  if (*(long *)(iVar5 + 0x4) != 0x4000001)
  {
    return 0x0;
  }
  pvVar7 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2c);
  index = (int)((ulong)pvVar7 >> 0x10);
  this = (void *)pvVar7;
  iVar3 = random_int_range(0x1,0x64);
  uStack_c = 0x0;
  iVar1 = *(int *)((int)this + 0xa);
  if (iVar1 == 0x1)
  {
    uStack_c = 0x15;
  }
  else if (iVar1 != 0x2)
  {
    if (iVar1 == 0x3)
    {
      uStack_c = 0x16;
      uStack_8 = 0x1;
    }
    else if (iVar1 == 0x4)
    {
      if (iVar3 < 0x32)
      {
        uStack_8 = 0x2;
        uStack_c = 0x17;
      }
      else
      {
        uStack_8 = 0xfffe;
        uStack_c = 0x18;
      }
    }
    else if (iVar1 == 0x5)
    {
      if (iVar3 < 0x32)
      {
        uStack_8 = 0x2;
      }
      else
      {
        uStack_8 = 0xfffe;
      }
      uStack_c = 0x19;
    }
    else
    {
      uStack_8 = 0x0;
    }
    goto LAB_1038_013b;
  }
  uStack_8 = 0xffff;
LAB_1038_013b:
  if (uStack_c != 0x0)
  {
    pvVar7 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    Turn_Manager_Push_Resource_Event_Logic
              ((void *)pvVar7,*(long *)(iVar5 + 0x4),uStack_c);
  }
  res_manager_get_randomized_table_value_logic(this,index);
  if ((*(int *)((int)this + 0xe) == 0x0 && *(int *)((int)this + 0xc) == 0x0) &&
     (*(int *)(iVar5 + 0x18) < 0xc9))
  {
    uVar2 = *_p_SimulatorWorldContext;
    uVar4 = random_int_range(0x0,0x8);
    uStack_22 = (uint)uVar2;
    uStack_20 = (int)((ulong)uVar2 >> 0x10);
    *(int *)((int)this + 0xc) = uVar4 + uStack_22 + 0x1e;
    *(int *)((int)this + 0xe) =
         ((int)uVar4 >> 0xf) + uStack_20 + (uint)CARRY2(uVar4,uStack_22) +
         (uint)(0xffe1 < uVar4 + uStack_22);
  }
  return uStack_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Counts how many entities from two different collections are within Manhattan distance
// 6 of each other. Used for proximity-based bonuses or penalties.

int __stdcall16far
Simulator_Count_Nearby_Entities_in_Collections_01c0(u16 arg1,u16 arg2,void *manager_ptr)
{
  int iVar1;
  undefined4 *this_ptr;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 in_DX;
  u32 *puVar5;
  undefined2 uVar6;
  u16 unaff_SS;
  void *this_ptr_00;
  void *pvVar7;
  void *obj2;
  undefined2 uVar8;
  ulong uStack_32;
  ulong uStack_1e;
  ulong uStack_1a;
  ulong uStack_12;
  undefined1 local_e [0x2];
  undefined4 uStack_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0x0;
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uVar8 = (undefined2)((ulong)manager_ptr >> 0x10);
  puStack_8 = puVar3;
  puVar5 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                     (manager_ptr,puVar3,in_DX);
  uStack_c = (undefined4 *)CONCAT22(puVar5,puVar3);
  uVar6 = 0x1030;
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_e));
  puVar2 = (undefined2 *)((int)*uStack_c + 0x10);
  uStack_12 = (*(code *)*puVar2)(0x1030,(undefined4 *)uStack_c,
                                 (int)((ulong)uStack_c >> 0x10));
  this_ptr = (undefined4 *)*(undefined4 *)((int)manager_ptr + 0xc);
  uVar8 = *(undefined2 *)((int)manager_ptr + 0xe);
  puVar3 = (undefined4 *)this_ptr;
  puVar2 = (undefined2 *)((int)*this_ptr + 0x10);
  uStack_1a = (*(code *)*puVar2)();
  uStack_1e = 0x0;
  do
  {
    if (uStack_12 <= uStack_1e)
    {
      if (uStack_c != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*uStack_c)
                  (uVar6,(undefined4 *)uStack_c,(int)((ulong)uStack_c >> 0x10),0x1,
                   puVar3,uVar8);
      }
      return iStack_4;
    }
    uVar6 = 0x1030;
    obj2 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_c);
    iVar1 = *(int *)((int)obj2 + 0x10);
    for (uStack_32 = 0x0; uStack_32 < uStack_1a; uStack_32 += 0x1)
    {
      uVar6 = 0x1030;
      this_ptr_00 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(this_ptr);
      if ((this_ptr_00 != NULL) && (*(int *)((int)this_ptr_00 + 0x10) == iVar1))
      {
        pvVar7 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr_00);
        uVar6 = 0x1008;
        iVar4 = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),
                           *(int *)((int)pvVar7 + 0xc));
        if (iVar4 == 0x0)
        {
          uVar6 = 0x1030;
          iVar4 = Simulator_Calc_Manhattan_Distance_between_Objects_bd74
                            ((u16)local_e,unaff_SS,(u32)this_ptr_00,(u32)obj2);
          if (iVar4 < 0x6)
          {
            iStack_4 += 0x1;
            break;
          }
        }
      }
    }
    uStack_1e += 0x1;
  } while( true );
}
