/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 26/54
 * Original lines (combined): 72505-74263
 * Boundaries: top-level declarations/definitions only
 */




undefined2 __stdcall16far UI_Build_Item_Handle_Transition_to_State6_1e8a(void *param_1)
{
  void *pvVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if ((*(byte *)((int)param_1 + 0x1a) & 0x2) == 0x0)
  {
    uVar3 = 0x0;
    uVar4 = 0x23;
    uVar2 = 0x1;
    pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    UI_Component_Set_List_Value_at_26_Logic_7d7c
              ((int)pvVar1,(int)((ulong)pvVar1 >> 0x10),uVar2,uVar3,uVar4);
    UI_Build_Item_Transition_State_Logic_bdac(param_1,0x6);
    return 0x0;
  }
  return 0x1;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_1ec8(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 6D (0x6D). Initializes base class, creates an
// internal object, and sets vtable to 0x2572.

void * __stdcall16far UI_Build_Item_Type6D_ctor_init(void *this_ptr)
{
  astruct_491 *this;
  void *pvVar1;
  uint uVar2;
  uint uVar4;
  astruct_332 *uVar3;
  void *pvVar5;
  void *pvVar6;
  undefined2 uVar7;
  undefined2 in_stack_0000fff2;
  
  pvVar6 = (void *)this_ptr;
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar5 = UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar2 = (uint)((ulong)pvVar5 >> 0x10);
  *(undefined4 *)((int)pvVar6 + 0x20) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x24) = 0x0;
  *(undefined2 *)this_ptr = 0x2572;
  *(undefined2 *)((int)pvVar6 + 0x2) = 0x1028;
  this = allocate_memory(CONCAT22(in_stack_0000fff2,0xc));
  uVar4 = uVar2 | (uint)this;
  if (uVar4 == 0x0)
  {
    *(undefined4 *)((int)pvVar6 + 0x20) = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this,uVar2);
    *(undefined2 *)((int)pvVar6 + 0x20) = pvVar1;
    *(uint *)((int)pvVar6 + 0x22) = uVar4;
  }
  *(undefined2 *)((int)*(undefined4 *)((int)pvVar6 + 0x20) + 0xa) = 0x0;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x2572. Initializes base class and
// an internal sub-object via construct-with-vtable.

void * __stdcall16far
UI_Build_Item_Type_2572_ctor_with_Params_1fc8
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  astruct_491 *this;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined2 in_stack_0000fff2;
  
  pvVar4 = UI_Build_Item_Base_ctor_with_Params_b39e
                     (param_1,CONCAT22(param_3,param_2),(int)param_4,
                      (int)((ulong)param_4 >> 0x10));
  uVar2 = (uint)((ulong)pvVar4 >> 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0x0;
  param_1[0x12] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x2572;
  param_1[0x1] = 0x1028;
  this = allocate_memory(CONCAT22(in_stack_0000fff2,0xc));
  uVar3 = uVar2 | (uint)this;
  if (uVar3 == 0x0)
  {
    *(undefined4 *)(param_1 + 0x10) = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this,uVar2);
    param_1[0x10] = pvVar1;
    param_1[0x11] = uVar3;
  }
  *(undefined2 *)((int)*(undefined4 *)(param_1 + 0x10) + 0xa) = 0x0;
  return (void *)CONCAT22(param_2,param_1);
}



undefined2 __stdcall16far UI_Build_Item_Handle_Transition_to_State6_236a(void *param_1)
{
  void *pvVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if ((*(byte *)((int)(void *)param_1 + 0x1a) & 0x2) == 0x0)
  {
    uVar3 = 0x0;
    uVar4 = 0x23;
    uVar2 = 0x1;
    pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    UI_Component_Set_List_Value_at_26_Logic_7d7c
              ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10),uVar2,uVar3,uVar4);
    UI_Build_Item_Transition_State_Logic_bdac(param_1,0x6);
    return 0x0;
  }
  return 0x1;
}



void * __stdcall16far
UI_Build_Item_Type2572_dtor_Scalar_Deleting_254c(void *param_1,byte param_2)
{
  UI_Build_Item_Type_2572_dtor_Internal_2042(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Parameterized constructor for UI Build Item Type 264C.

void * __stdcall16far
UI_Build_Item_Type_264C_ctor_with_Params_25fc
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_fem16_wav_1050_2644 + 0x8;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_2626(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x2788. Initializes base class and sets vtable to
// 0x2788.

void * __stdcall16far UI_Build_Item_Type_2788_ctor_init_26b4(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)s_fem48_wav_1050_2784 + 0x4;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x2788.

void * __stdcall16far
UI_Build_Item_Type_2788_ctor_with_Params_26d6
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_fem48_wav_1050_2784 + 0x4;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far UI_Build_Item_OnTick_State6_Update_and_Notify_2700(void *param_1)
{
  void *pvVar1;
  
  UI_Build_Item_OnTick_State6_Update_be2a(param_1);
  if (*(int *)((int)(void *)param_1 + 0x12) == 0x5)
  {
    pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(param_1);
    *(undefined2 *)((int)(void *)pvVar1 + 0x204) = 0x1;
  }
  return;
}



void __stdcall16far UI_Build_Item_OnTick_State4_Update_and_Notify_272e(void *param_1)
{
  void *pvVar1;
  
  UI_Build_Item_OnTick_State4_Update_be9e(param_1);
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(param_1);
  if (*(int *)((int)param_1 + 0x12) == 0x5)
  {
    *(undefined2 *)((int)pvVar1 + 0x204) = 0x1;
  }
  return;
}



// Constructor for UI Build Item Type 6E (0x6E). Initializes base class and sets vtable
// to 0x2A92.

void * __stdcall16far UI_Build_Item_Type6E_ctor_init_27f0(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)s_fem123_wav_1050_2a89 + 0x9;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 6E. Initializes base class and sets
// vtable to 0x2A92.

void * __stdcall16far
UI_Build_Item_Type6E_ctor_with_Params_2812
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_fem123_wav_1050_2a89 + 0x9;
  param_1[0x1] = 0x1028;
  param_1[0x7] = param_1[0x6];
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_2a6c(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Construction Item Type 6F (0x6F). Initializes base class and sets
// vtable to 0x2B74.

void * __stdcall16far UI_Construction_Item_Type6F_ctor_init_2afa(void *this_ptr)
{
  UI_Build_Item_TypeE036_ctor_init_dc96(this_ptr);
  *(char **)this_ptr = (char *)s_add5_wav_1050_2b73 + 0x1;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Construction Item Type 6F. Initializes base class
// and sets vtable to 0x2B74.

void * __stdcall16far
UI_Construction_Item_Type6F_ctor_with_Params_2b1c
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_TypeE036_ctor_with_Params_dcc2
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_add5_wav_1050_2b73 + 0x1;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_TypeE036_dtor_Scalar_Deleting_2b4e(void *param_1,byte param_2)
{
  UI_Build_Item_TypeE036_dtor_Internal_dcf4(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for a UI component using vtable 0x341C.

void * __stdcall16far UI_Component_Type341C_ctor_2bdc(void *this_ptr)
{
  UI_Build_Item_Type_0ADA_ctor_init_0954(this_ptr);
  *(undefined2 *)this_ptr = 0x341c;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for a UI component using vtable 0x341C.

void * __stdcall16far
UI_Component_Type341C_ctor_with_Params_2bfe
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Type_0ADA_ctor_with_Params_0982
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x341c;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes default resource quotas (power, food, medicine, etc.) for a newly created
// build item. Involves complex state checks and triggers batch sub-object processing if
// the item is a player-controlled entity.

void __stdcall16far
UI_Build_Item_Initialize_Default_Resource_Quotas_3246(void *this_ptr)
{
  undefined2 unaff_SS;
  void *pvVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_20 [0x6];
  long lStack_1a;
  void *pvStack_12;
  undefined2 uStack_10;
  u8 *puStack_e;
  undefined4 uStack_a;
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uStack_a = *(undefined4 *)((int)(void *)pvStack_6 + 0x2e);
  puStack_e = (u8 *)*(undefined4 *)((int)uStack_a + 0x10);
  uVar3 = 0x0;
  uVar4 = 0x1;
  uVar2 = 0x1;
  pvVar1 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puStack_e);
  uStack_10 = (undefined2)((ulong)pvVar1 >> 0x10);
  pvStack_12 = (void *)pvVar1;
  UI_Component_Batch_Spawn_SubEntities_Logic_7c50
            (pvStack_12,uStack_10,uVar2,uVar3,uVar4);
  UI_Component_Batch_Spawn_SubEntities_Logic_7c50(pvStack_12,uStack_10,0x1,0x0,0x2);
  UI_Component_Batch_Spawn_SubEntities_Logic_7c50(pvStack_12,uStack_10,0x1,0x0,0x3);
  UI_Component_Batch_Spawn_SubEntities_Logic_7c50(pvStack_12,uStack_10,0x1,0x0,0x5);
  lStack_1a = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  if (*(int *)((int)lStack_1a + 0x82) == 0x0)
  {
    UI_Component_Batch_Spawn_SubEntities_Logic_7c50(pvStack_12,uStack_10,0x4,0x0,0x4);
  }
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x11);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x12);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x13);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x14);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0x14,0x0,0x15);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0x14,0x0,0x16);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x17);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x18);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x19);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0x14,0x0,0x1a);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0x14,0x0,0x1b);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0x14,0x0,0x1c);
  if (*(long *)((int)uStack_a + 0x200) == 0x8000002)
  {
    UI_Entity_Summary_Display_ctor_a43e((undefined1 *)CONCAT22(unaff_SS,local_20));
    UI_Entity_Batch_Process_SubObjects_Logic_a89e
              ((u32)CONCAT22(unaff_SS,local_20),(u32 *)((int)(void *)pvStack_6 + 0xc),
               (u16)((ulong)pvStack_6 >> 0x10));
  }
  return;
}



// Scalar deleting destructor for UI build items using the B418 internal cleanup logic.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_33f6(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 0x34F6. Inherits from Type 0x08EC and sets its own
// vtable.

void * __stdcall16far UI_Build_Item_Type_34F6_ctor_init_3484(void *this_ptr)
{
  UI_Build_Item_Type_08EC_ctor_0068(this_ptr);
  *(undefined2 *)this_ptr = 0x34f6;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x34F6.

void * __stdcall16far
UI_Build_Item_Type_34F6_ctor_with_Params_34a6
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Type_08EC_ctor_with_Params_00cc
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x34f6;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_Type08EC_dtor_Scalar_Deleting_34d0(void *param_1,byte param_2)
{
  UI_Build_Item_Type_08EC_dtor_Internal_0138(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x3608. Initializes base class and sets vtable to
// 0x3608.

void * __stdcall16far UI_Build_Item_Type_3608_ctor_init_355e(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0x3608;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x3608.

void * __stdcall16far
UI_Build_Item_Type_3608_ctor_with_Params_3580
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x3608;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Updates an internal property (code 0x35) of the build item's simulator object. Sets
// the value to 0x32 if param_2 is non-zero, otherwise 0.

void __stdcall16far
UI_Build_Item_Update_Internal_Property_35_Logic_35b0(void *this_ptr,int state)
{
  void *pvVar1;
  undefined2 uVar2;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  if (state == 0x0)
  {
    uVar2 = 0x0;
  }
  else
  {
    uVar2 = 0x32;
  }
  UI_Component_Set_List_Value_at_22_Logic_7d1c(pvVar1,uVar2,0x230000);
  return;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_35e2(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Construction Item Type 0x373E. Inherits from Type 0x3E2C and sets
// its own vtable.

void * __stdcall16far UI_Construction_Item_Type_373E_ctor_init_3670(void *this_ptr)
{
  UI_Construction_Item_Type_3E2C_ctor_init_37a6(this_ptr);
  *(undefined2 *)this_ptr = 0x373e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Construction Item Type 0x373E.

void * __stdcall16far
UI_Construction_Item_Type_373E_ctor_with_Params_3692
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Construction_Item_Type_3E2C_ctor_with_Params_3816
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x373e;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



undefined2 __stdcall16far
UI_Build_Item_Sum_Resource_List_28_Check_249(undefined4 param_1,ulong *param_2)
{
  int *piVar1;
  ulong uVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 local_4;
  
  *param_2 = 0x0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(long *)((int)param_1 + 0x28) != 0x0)
  {
    for (local_4 = 0x4; local_4 < 0x1d; local_4 += 0x1)
    {
      pvVar4 = UI_Item_List_Find_Item_FarPtr_Logic
                         (*(undefined4 *)((int)param_1 + 0x28),local_4);
      uVar2 = *param_2;
      *(int *)param_2 = (int)*param_2 + (int)(void *)pvVar4;
      piVar1 = (int *)((int)(ulong *)param_2 + 0x2);
      *piVar1 = *piVar1 + (int)((ulong)pvVar4 >> 0x10) +
                (uint)CARRY2((uint)uVar2,(uint)(void *)pvVar4);
      if (0xf9 < *param_2)
      {
        return 0x1;
      }
    }
  }
  return 0x0;
}



// Scalar deleting destructor for UI Construction Item Type 0x373E.

void * __stdcall16far
UI_Construction_Item_Type_373E_dtor_Scalar_Deleting_3718(void *this_ptr,byte flags)
{
  UI_Construction_Item_Type_3E2C_dtor_Internal_388e(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Construction Item Type 0x3E2C. Initializes base class and creates
// an internal UI Item List. Sets vtable to 0x3E2C.

void * __stdcall16far UI_Construction_Item_Type_3E2C_ctor_init_37a6(void *this_ptr)
{
  void *pvVar1;
  int iVar2;
  astruct_331 *uVar3;
  void *pvVar3;
  void *pvVar4;
  undefined2 uVar5;
  undefined2 in_stack_0000fffa;
  
  pvVar4 = (void *)this_ptr;
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = UI_Build_Item_Base_ctor_init_b354(this_ptr);
  iVar2 = (int)((ulong)pvVar3 >> 0x10);
  *(undefined4 *)((int)pvVar4 + 0x20) = 0x0;
  *(undefined4 *)((int)pvVar4 + 0x24) = 0x0;
  *(undefined4 *)((int)pvVar4 + 0x28) = 0x0;
  *(void ***)this_ptr = (void **)&PTR_s_0_000_1050_3bbb_1050_3e2c;
  *(undefined2 *)((int)pvVar4 + 0x2) = 0x1028;
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
  if (iVar2 == 0x0 && pvVar1 == NULL)
  {
    *(undefined4 *)((int)pvVar4 + 0x28) = 0x0;
  }
  else
  {
    pvVar3 = UI_Item_List_ctor_init_logic((void *)CONCAT22(iVar2,pvVar1),0x5,0x5);
    *(undefined2 *)((int)pvVar4 + 0x28) = (void *)pvVar3;
    *(undefined2 *)((int)pvVar4 + 0x2a) = (int)((ulong)pvVar3 >> 0x10);
  }
  return this_ptr;
}



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
