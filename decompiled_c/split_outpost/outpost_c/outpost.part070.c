/*
 * Source: outpost.c
 * Chunk: 70/117
 * Original lines: 79800-80976
 * Boundaries: top-level declarations/definitions only
 */




undefined2 * __stdcall16far Simulator_Object_Clone_Logic_8c46(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x124));
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
    *(undefined4 *)(puVar3 + 0x8a) = *(undefined4 *)(iVar6 + 0x114);
    puVar3[0x8c] = *(undefined2 *)(iVar6 + 0x118);
    puVar3[0x8d] = *(undefined2 *)(iVar6 + 0x11a);
    puVar3[0x8e] = *(undefined2 *)(iVar6 + 0x11c);
    puVar3[0x8f] = *(undefined2 *)(iVar6 + 0x11e);
    *(undefined4 *)(puVar3 + 0x90) = *(undefined4 *)(iVar6 + 0x120);
    *local_a = 0x8d8e;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_8d62(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 0x8FB0. Initializes base class with ID 1000 and
// sets four internal 4-byte fields (0x108, 0x10C, 0x110, 0x114). Sets vtable to 0x8FB0.

void * __stdcall16far
UI_Build_Item_Type_8FB0_ctor_init_8d9e(void *this_ptr,u32 arg1,u32 arg2,u32 arg3)
{
  void *pvVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x3e8);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar1 = (void *)this_ptr;
  *(u32 *)((int)pvVar1 + 0x108) = arg3;
  *(u32 *)((int)pvVar1 + 0x10c) = arg2;
  *(u32 *)((int)pvVar1 + 0x110) = arg1;
  *(undefined4 *)((int)pvVar1 + 0x114) = 0x0;
  *(undefined2 *)this_ptr = 0x8fb0;
  *(undefined2 *)((int)pvVar1 + 0x2) = 0x1028;
  return this_ptr;
}



// Internal destructor for build item 0x8FB0. Frees an internal far pointer at offset
// 0x8A and reverts vtables.

void __stdcall16far UI_Build_Item_Type_8FB0_dtor_Internal_8dec(u16 *this_ptr)
{
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x8fb0;
  this_ptr[0x1] = 0x1028;
  free_if_not_null((void *)*(void **)(this_ptr + 0x8a));
  *_this_ptr = (u16)(char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Colony_Resource_Batch_Add_from_ID(undefined4 param_1)
{
  undefined2 uVar1;
  void *pvVar2;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)param_1 + 0x10c));
  Colony_Resource_Batch_Add_355c
            (*(u32 *)((int)(void *)pvVar2 + 0x1f6),*(u32 *)((int)param_1 + 0x114));
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Colony_Process_Population_Departure_from_ID(undefined4 param_1)
{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  void *pvVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  pvVar5 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)(iVar3 + 0x108));
  uVar2 = (undefined2)((ulong)pvVar5 >> 0x10);
  puVar1 = Colony_Process_Population_Departure_Logic_35a4
                     ((void *)*(undefined4 *)((int)pvVar5 + 0x1f6),
                      *(long *)(iVar3 + 0x110));
  *(undefined2 *)(iVar3 + 0x114) = puVar1;
  *(undefined2 *)(iVar3 + 0x116) = uVar2;
  return 0x1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_8ea6(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x118));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  iVar6 = (int)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
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
    *(undefined4 *)(puVar3 + 0x8a) = *(undefined4 *)(iVar6 + 0x114);
    *local_a = 0x8fb0;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  *(undefined4 *)(iVar6 + 0x114) = 0x0;
  return local_6;
}



u16 * __stdcall16far
UI_Build_Item_Type8FB0_dtor_Scalar_Deleting_8f8a(u16 *param_1,u16 param_2,byte param_3)
{
  UI_Build_Item_Type_8FB0_dtor_Internal_8dec(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x90D6. Inherits from Type 0x6E50 and sets its own
// vtable.

void * __stdcall16far
UI_Build_Item_Type_90D6_ctor_init_8fc0(void *this_ptr,u32 arg1,u32 arg2)
{
  UI_Build_Item_Type_6E50_ctor_init_6af2(this_ptr,arg1,arg2);
  *(undefined2 *)this_ptr = 0x90d6;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_8fea(undefined4 param_1)
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
    *local_a = 0x90d6;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Standard scalar deleting destructor for specific UI build items. Reverts vtable to
// 0x389A.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_90aa(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 0x932C. Initializes base class with ID 4999 and
// sets primary identifier at 0x108. Sets vtable to 0x932C.

void * __stdcall16far UI_Build_Item_Type_932C_ctor_init_90e6(void *this_ptr,u16 arg1)
{
  undefined2 uVar1;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x1387);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(u16 *)((int)this_ptr + 0x108) = arg1;
  *(undefined2 *)this_ptr = 0x932c;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Dispatch_Random_Simulation_Event_9114(undefined4 param_1)
{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_a;
  int iStack_8;
  
  pvVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
  local_a = (uint)*_p_SimulatorWorldContext;
  iStack_8 = (int)((ulong)*_p_SimulatorWorldContext >> 0x10);
  switch(*(undefined2 *)((int)param_1 + 0x108))
  {
  case 0x1:
    iVar7 = 0x16;
    break;
  case 0x2:
    iVar7 = 0x17;
    break;
  case 0x3:
    iVar7 = 0x18;
    break;
  case 0x4:
    iVar7 = 0x1b;
    break;
  case 0x5:
    iVar7 = 0x1f;
    break;
  case 0x6:
    iVar7 = 0x24;
    break;
  case 0x7:
    uVar1 = random_int_range(0x0,0x14);
    iVar7 = local_a + uVar1 + 0x6e;
    iVar5 = iStack_8 + ((int)uVar1 >> 0xf) + (uint)(0xff91 < uVar1) +
            (uint)CARRY2(local_a,uVar1 + 0x6e);
    iVar6 = 0x7;
    lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    Simulator_Object_Set_Indexed_Value_Logic_0558(lVar3,iVar7,iVar5,iVar6);
    iVar7 = random_int_range(0x1,0x64);
    if (0x32 < iVar7)
    {
      return 0x1;
    }
    pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)0x1);
    Simulator_Entity_Decrement_SubCounter_20E_4900(pvVar4);
    iVar7 = 0x2c;
    break;
  case 0x8:
    uVar1 = random_int_range(0x0,0x14);
    iVar7 = local_a + uVar1 + 0x64;
    iVar5 = iStack_8 + ((int)uVar1 >> 0xf) + (uint)(0xff9b < uVar1) +
            (uint)CARRY2(local_a,uVar1 + 0x64);
    iVar6 = 0x8;
    lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    Simulator_Object_Set_Indexed_Value_Logic_0558(lVar3,iVar7,iVar5,iVar6);
    if (0x19 < (int)uVar1)
    {
      return 0x1;
    }
    uVar1 = 0x1;
    iVar7 = 0x2;
    pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)0x1);
    Colony_Decrement_Population_Category_at_14E_Logic
              ((uint16_t)(void *)pvVar4,(uint16_t)((ulong)pvVar4 >> 0x10),uVar1,iVar7);
    iVar7 = 0x2d;
    break;
  default:
    goto switchD_1028_9247_default;
  }
  Turn_Manager_Add_Resource_Change_Entry_Logic((void *)pvVar2,0x0,0x0,0x1,0x0,iVar7);
switchD_1028_9247_default:
  return 0x1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_9264(undefined4 param_1)
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
    *local_a = 0x932c;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Standard scalar deleting destructor for specific UI build items. Reverts vtable to
// 0x389A.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_9300(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the 'PutBldg' simulator command. Initializes base class with ID 1000,
// sets internal name 'SCPutBldg', and maps entity/coordinate parameters including a
// building-specific field at 0x122. Sets vtable to 0x9934.

void * __stdcall16far
Simulator_Command_PutBldg_ctor_init_933c
          (astruct_321 *param_1,u16 param_2,u16 param_3,u16 param_4,u32 *param_5,
          undefined2 param_6,void *param_7,void *param_8)
{
  astruct_321 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x3e8);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_321 *)param_1;
  uVar1->field263_0x108 = param_8;
  uVar1->field264_0x10c = param_7;
  uVar1->field265_0x110 = 0x0;
  uVar1->field266_0x114 = *param_5;
  uVar1->field267_0x118 = (u16)param_5[0x1];
  uVar1->field268_0x11a = param_4;
  uVar1->field269_0x11c = param_2;
  uVar1->field271_0x120 = 0x0;
  uVar1->field270_0x11e = 0x0;
  uVar1->field272_0x122 = param_3;
  *(undefined2 *)param_1 = 0x9934;
  uVar1->field2_0x2 = 0x1028;
  sprintf_wrapper(&uVar1->field7_0x8,uVar2,0x50ce,0x1050,(void *)param_8,
                  (int)((ulong)param_8 >> 0x10),param_4);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Execute_Interactive_Building_Placement_93d4(void *param_1)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  u8 *puVar5;
  void *pvVar6;
  undefined1 local_112 [0x10c];
  u8 *local_6;
  undefined2 uStack_4;
  
  PTR_DAT_1050_0000_1050_50ca = NULL;
  PTR_DAT_1050_0000_1050_50cc = NULL;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  puVar5 = Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
                     ((int)_p_SimulatorWorldContext,
                      (int)((ulong)_p_SimulatorWorldContext >> 0x10),
                      *(undefined2 *)(iVar3 + 0x11c),(long)*(int *)(iVar3 + 0x11a),0x0,
                      0x700,0x0,0x500);
  uStack_4 = (undefined2)((ulong)puVar5 >> 0x10);
  local_6 = (u8 *)puVar5;
  pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,local_6);
  *(undefined2 *)(iVar3 + 0x11e) = (int)pvVar6;
  *(undefined2 *)(iVar3 + 0x120) = (int)((ulong)pvVar6 >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x11e) + 0x1c);
  iVar2 = (*(code *)*puVar1)();
  if (iVar2 != 0x0)
  {
    Simulator_Execute_Building_Placement_Logic_9624((u32)param_1);
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x11e) + 0x20);
    (*(code *)*puVar1)();
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x11e) + 0x18);
    (*(code *)*puVar1)();
    UI_Build_Item_Show_Specialized_Event_10_9600(param_1);
    return 0x1;
  }
  *(undefined4 *)(iVar3 + 0x11e) = 0x0;
  Simulator_Command_KillBldg_ctor_init_e4fa
            ((undefined1 *)CONCAT22(unaff_SS,local_112),(u8 *)CONCAT22(uStack_4,local_6)
            );
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_112));
  if (PTR_DAT_1050_0000_1050_50ca == NULL)
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6ad;
  }
  return 0x0;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_94e4(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x124));
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
    *(undefined4 *)(puVar3 + 0x8a) = *(undefined4 *)(iVar6 + 0x114);
    puVar3[0x8c] = *(undefined2 *)(iVar6 + 0x118);
    puVar3[0x8d] = *(undefined2 *)(iVar6 + 0x11a);
    puVar3[0x8e] = *(undefined2 *)(iVar6 + 0x11c);
    *(undefined4 *)(puVar3 + 0x8f) = *(undefined4 *)(iVar6 + 0x11e);
    puVar3[0x91] = *(undefined2 *)(iVar6 + 0x122);
    *local_a = 0x9934;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Spawns an entity summary display and triggers event 10 for the build item's target
// type (offset 0x11A).

void __stdcall16far UI_Build_Item_Show_Specialized_Event_10_9600(void *this_ptr)
{
  u16 unaff_SS;
  undefined1 local_6 [0x4];
  
  UI_Entity_Summary_Display_ctor_a43e((undefined1 *)CONCAT22(unaff_SS,local_6));
  UI_Entity_Handle_Specialized_Event_10_or_Default_a80e
            ((u16)local_6,unaff_SS,*(int *)((int)this_ptr + 0x11a));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// The core simulator logic for executing building placement. Handles world coordinate
// mapping, creating new simulator objects (1030:61FE), updating UI components (Resource
// 0x2F), neighbor entity notification, and status updates for the newly placed
// building.

void __stdcall16far Simulator_Execute_Building_Placement_Logic_9624(u32 arg1)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  u8 *puVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  int *out1;
  undefined2 uVar7;
  int *unaff_SS;
  void *pvVar8;
  undefined4 *puVar9;
  undefined2 local_14c;
  undefined2 uStack_14a;
  undefined2 uStack_40;
  undefined4 local_3e;
  int iStack_3a;
  undefined4 uStack_38;
  u8 *puStack_2e;
  undefined4 uStack_2a;
  undefined1 local_26 [0x4];
  void *pvStack_22;
  undefined2 uStack_20;
  u8 *puStack_1e;
  void *pvStack_1a;
  undefined2 uStack_18;
  undefined4 uStack_16;
  int local_12 [0x3];
  uint uStack_c;
  undefined4 uStack_a;
  long lStack_6;
  
  out1 = (int *)(arg1 >> 0x10);
  iVar6 = (int)arg1;
  pvVar8 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)(iVar6 + 0x10c));
  *(undefined2 *)(iVar6 + 0x110) = (void *)pvVar8;
  *(undefined2 *)(iVar6 + 0x112) = (int)((ulong)pvVar8 >> 0x10);
  lStack_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  puVar9 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,(void *)CONCAT22(out1,(void *)(iVar6 + 0x114)),
                      *(long *)(iVar6 + 0x108),(undefined1 *)CONCAT22(unaff_SS,local_26)
                     );
  uVar5 = (undefined2)((ulong)puVar9 >> 0x10);
  puStack_2e = (u8 *)*puVar9;
  uStack_38._3_1_ = (char)((ulong)puStack_2e >> 0x18);
  uStack_c = (uint)(uStack_38._3_1_ != '\0');
  uVar7 = 0x1008;
  uStack_38 = puStack_2e;
  uStack_a = puStack_2e;
  unpack_3word_struct((void *)(iVar6 + 0x114),out1,local_12,unaff_SS);
  if (uStack_c == 0x0)
  {
    puVar3 = (u8 *)(iVar6 + 0x114);
    Simulator_Call_Virtual_Initializer_e2ac((u32)_p_SimulatorWorldContext);
    uStack_16 = (u8 *)CONCAT22(uVar5,puVar3);
    uVar7 = 0x1030;
    Simulator_Map_Update_Entity_at_Coords_61fe
              (_p_MapContext_5740,(u8 *)CONCAT22(uVar5,puVar3),
               (u8 *)CONCAT22(out1,(u8 *)(iVar6 + 0x114)),*(long *)(iVar6 + 0x108));
    if ((*(int *)(iVar6 + 0x11a) == 0xa) || (*(int *)(iVar6 + 0x11a) == 0x37))
    {
      if (*(int *)(iVar6 + 0x11a) == 0x37)
      {
        uStack_38 = (u8 *)*(undefined4 *)(iVar6 + 0x11e);
        uVar5 = *(undefined2 *)(iVar6 + 0x120);
        uStack_2a = *(undefined4 *)(iVar6 + 0x10c);
        ((undefined4 *)uStack_38)[0x8] = uStack_2a;
      }
      iVar4 = iVar6 + 0x114;
      Simulator_Call_Virtual_Initializer_e2ac((u32)_p_SimulatorWorldContext);
      *(int *)(iVar6 + 0x10c) = iVar4;
      *(undefined2 *)(iVar6 + 0x10e) = uVar5;
      uVar7 = 0x1018;
      UI_Component_Append_6Byte_Struct_to_Array_at_Offset_2C_Logic
                (lStack_6,CONCAT22(uVar5,*(undefined2 *)(iVar6 + 0x10c)),
                 *(long *)(iVar6 + 0x108));
      if (*(int *)(iVar6 + 0x11a) == 0xa)
      {
        uVar7 = 0x1010;
        UI_Component_Set_FarPtr_at_Offset_24_and_Notify_Logic
                  (lStack_6,*(long *)(iVar6 + 0x10c));
      }
    }
    pvVar8 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,
                        (u8 *)(u8 *)*(undefined4 *)(iVar6 + 0x10c));
    iVar4 = (int)((ulong)pvVar8 >> 0x10);
    *(undefined2 *)(iVar6 + 0x110) = (void *)pvVar8;
    *(int *)(iVar6 + 0x112) = iVar4;
    if (iVar4 == 0x0 && *(int *)(iVar6 + 0x110) == 0x0) goto LAB_1028_9807;
    puVar2 = (undefined4 *)uStack_16;
    uVar5 = (undefined2)((ulong)uStack_16 >> 0x10);
  }
  else
  {
    uStack_16 = uStack_a;
    if (*(int *)(iVar6 + 0x11a) != 0x75) goto LAB_1028_9807;
    puVar2 = (undefined4 *)uStack_a;
    iVar4 = *(int *)(iVar6 + 0x112);
    uVar5 = uStack_a._2_2_;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar6 + 0x110) + 0x8);
  (*(code *)*puVar1)(uVar7,*(undefined2 *)(iVar6 + 0x110),iVar4,0x0,puVar2,uVar5,0x0);
LAB_1028_9807:
  pvVar8 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)uStack_16);
  uStack_18 = (undefined2)((ulong)pvVar8 >> 0x10);
  pvStack_1a = (void *)pvVar8;
  UI_Component_Set_Entity_ID_and_Cache_Ptr_73ee
            (pvVar8,(void *)*(undefined4 *)(iVar6 + 0x10c));
  iVar4 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),
                     *(int *)(iVar6 + 0x11a));
  if ((iVar4 == 0x0) && (*(int *)(iVar6 + 0x122) == 0x0))
  {
    local_3e = *(undefined4 *)((int)pvStack_1a + 0xc);
    iStack_3a = *(int *)((int)pvStack_1a + 0x10);
    uStack_38 = (u8 *)CONCAT22(uStack_38._2_2_,&local_3e);
    if (iStack_3a < 0x1)
    {
      uStack_40 = 0x5;
    }
    else
    {
      uStack_40 = 0x6;
    }
    *(undefined2 *)((int)pvStack_1a + 0x14) = uStack_40;
  }
  puStack_1e = (u8 *)*(undefined4 *)((int)pvStack_1a + 0x16);
  pvVar8 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puStack_1e);
  uStack_20 = (undefined2)((ulong)pvVar8 >> 0x10);
  pvStack_22 = (void *)pvVar8;
  if (puStack_1e != NULL)
  {
    Simulator_Command_KillBldg_ctor_init_e4fa
              ((undefined2 *)CONCAT22(unaff_SS,&local_14c),puStack_1e);
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_14c));
    local_14c = 0x389a;
    uStack_14a = 0x1008;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar6 + 0x11e) + 0x4);
  (*(code *)*puVar1)();
  UI_Component_Set_Active_Entity_and_Sync_Logic_7e5a
            ((void *)CONCAT22(uStack_18,pvStack_1a),
             (void *)*(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x11e) + 0x4));
  return;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_9908(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 0x9C52. Initializes base class with ID 4999 and
// sets three internal 4-byte fields (0x108, 0x10C, 0x110). Sets vtable to 0x9C52.

void * __stdcall16far
UI_Build_Item_Type_9C52_ctor_init_9944(void *this_ptr,u32 arg1,u32 arg2,u32 arg3)
{
  int iVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x1387);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  *(u32 *)(iVar1 + 0x108) = arg3;
  *(u32 *)(iVar1 + 0x10c) = arg2;
  *(u32 *)(iVar1 + 0x110) = arg1;
  *(undefined4 *)(iVar1 + 0x114) = 0x0;
  *(undefined2 *)this_ptr = 0x9c52;
  *(undefined2 *)(iVar1 + 0x2) = 0x1028;
  return this_ptr;
}



// Internal destructor for build item 0x9C52. Frees an internal far pointer at offset
// 0x8A and reverts vtables.

void __stdcall16far UI_Build_Item_Type_9C52_dtor_Internal_9992(u16 *this_ptr)
{
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x9c52;
  this_ptr[0x1] = 0x1028;
  free_if_not_null((void *)*(void **)(this_ptr + 0x8a));
  *_this_ptr = (u16)(char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Colony_Resource_Batch_Add_from_ID_99c4(undefined4 param_1)
{
  undefined2 uVar1;
  void *pvVar2;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)param_1 + 0x10c));
  Colony_Resource_Batch_Add_355c
            (*(u32 *)((int)pvVar2 + 0x1f6),*(u32 *)((int)param_1 + 0x114));
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Colony_Process_Major_Population_Departure_9a02(undefined4 param_1)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  long lVar4;
  undefined2 uVar5;
  int arg4;
  undefined2 uVar6;
  undefined2 uVar7;
  int resource_id;
  undefined1 local_30 [0x12];
  int local_1e;
  undefined2 local_1a;
  void *local_16;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_a;
  void *local_6;
  int iStack_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)(iVar1 + 0x108));
  iStack_4 = (int)((ulong)pvVar3 >> 0x10);
  local_6 = (void *)pvVar3;
  local_a = *(undefined4 *)((int)local_6 + 0x1f6);
  pvVar3 = Colony_Process_Special_Departure_Logic_3694
                     ((int)local_a,(int)((ulong)local_a >> 0x10),0x0,
                      (int)*(undefined4 *)(iVar1 + 0x110),
                      (int)((ulong)*(undefined4 *)(iVar1 + 0x110) >> 0x10));
  *(undefined2 *)(iVar1 + 0x114) = (void *)pvVar3;
  *(undefined2 *)(iVar1 + 0x116) = (int)((ulong)pvVar3 >> 0x10);
  lVar4 = Colony_Calculate_Sum_All_Resources_38b8
                    ((int)local_a,(u16)((ulong)local_a >> 0x10));
  if ((int)((ulong)lVar4 >> 0x10) == 0x0 && (int)lVar4 == 0x0)
  {
    local_12 = *(long *)((int)local_6 + 0x200);
    pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    local_14 = (undefined2)((ulong)pvVar3 >> 0x10);
    local_16 = (void *)pvVar3;
    if (local_12 == 0x8000002)
    {
      iVar1 = 0x1f;
    }
    else
    {
      iVar1 = 0xb;
    }
    Turn_Manager_Push_Resource_Event_Logic(local_16,*(long *)((int)local_6 + 0x4),iVar1)
    ;
    if (local_12 == 0x8000001)
    {
      uVar2 = 0x2;
    }
    else
    {
      uVar2 = 0x1;
    }
    local_12 = CONCAT22(0x800,uVar2);
    UI_Colony_Window_Set_Active_Colony_and_Sync_349e
              ((u32)CONCAT22(iStack_4,local_6),CONCAT22(0x800,uVar2));
    local_1e = 0x0;
    local_1a = 0x0;
    Simulator_World_Iterator_ctor_init_dc52
              ((undefined1 *)CONCAT22(unaff_SS,local_30),0x1,0x0,0x400);
    while( true )
    {
      pvVar3 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                         ((undefined1 *)CONCAT22(unaff_SS,local_30));
      iStack_4 = (int)((ulong)pvVar3 >> 0x10);
      local_6 = (void *)pvVar3;
      if (iStack_4 == 0x0 && local_6 == NULL) break;
      if (*(long *)((int)local_6 + 0x200) == 0x8000002)
      {
        local_1a = 0x1;
      }
      else
      {
        local_1e = 0x1;
      }
    }
    if (local_1e == 0x0)
    {
      uVar7 = 0x0;
      resource_id = 0x3c;
      arg4 = 0x1;
      uVar6 = 0x0;
      uVar5 = 0x0;
      iVar1 = 0x0;
      uVar2 = 0x0;
      pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x37);
      Turn_Manager_Add_Resource_Change_Entry_Logic
                ((void *)pvVar3,CONCAT22(uVar5,uVar2),iVar1,arg4,CONCAT22(uVar7,uVar6),
                 resource_id);
    }
  }
  return 0x1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_9b48(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x118));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  iVar6 = (int)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
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
    *(undefined4 *)(puVar3 + 0x8a) = *(undefined4 *)(iVar6 + 0x114);
    *local_a = 0x9c52;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  *(undefined4 *)(iVar6 + 0x114) = 0x0;
  return local_6;
}



u16 * __stdcall16far
UI_Build_Item_Type9C52_dtor_Scalar_Deleting_9c2c(u16 *param_1,u16 param_2,byte param_3)
{
  UI_Build_Item_Type_9C52_dtor_Internal_9992(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x9EB6. Initializes base class and sets field
// 0x108 to the provided ID. Sets vtable to 0x9EB6.

void * __stdcall16far UI_Build_Item_Type_9EB6_ctor_init_9c62(void *this_ptr,u16 id)
{
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,id);
  *(u16 *)((int)(void *)this_ptr + 0x108) = id;
  *(undefined2 *)this_ptr = 0x9eb6;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



u16 __stdcall16far Simulator_Object_JumpTable_Dispatcher_9c90(u32 param_1)
{
  uint uVar1;
  u16 uVar2;
  
  uVar1 = *(int *)((int)param_1 + 0x108) - 0x3e8;
  if ((uVar1 < 0x3a99) && (uVar1 % 0x3e8 == 0x0))
  {
                // WARNING: Could not recover jumptable at 0x10289dc0. Too many branches
                // WARNING: Treating indirect jump as call
    uVar2 = (*(code *)*(undefined2 *)((uVar1 / 0x3e8) * 0x2 + -0x623a))();
    return uVar2;
  }
  return 0x1;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_9dee(u32 param_1)
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
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x10a));
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
    *(undefined2 *)((int)pvVar3 + 0x108) = *(undefined2 *)(iVar6 + 0x108);
    *(undefined2 *)local_a = 0x9eb6;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_9e8a(u16 *this_ptr,byte flags)
{
  undefined2 uVar1;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this_ptr = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this_ptr));
  uVar1 = (undefined2)((ulong)_this_ptr >> 0x10);
  *_this_ptr = (char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return (void *)CONCAT22(uVar1,this_ptr);
}



void * __stdcall16far Simulator_Object_Constructor_Type_SCPop(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x2327);
  *(undefined2 *)param_1 = 0xa6f6;
  *(undefined2 *)((int)(void *)param_1 + 0x2) = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)(void *)param_1 + 0x8)),
                   s_SCPop_1050_50f0);
  return param_1;
}
