/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 34/54
 * Original lines (combined): 103421-111764
 * Boundaries: top-level declarations/definitions only
 */




void * __stdcall16far
UI_Build_Item_TypeE036_dtor_Scalar_Deleting_e010(void *param_1,byte param_2)
{
  UI_Build_Item_TypeE036_dtor_Internal_dcf4(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI build item Type 0xE4EA. Initializes base with ID 10999 and stores
// specialized command parameters at 0x108-0x110. Sets vtable to 0xE4EA.

void * __stdcall16far
UI_Build_Item_TypeE4EA_ctor_init_e2be
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x2af7);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  *(undefined4 *)(puVar1 + 0x84) = param_4;
  *(undefined4 *)(puVar1 + 0x86) = param_3;
  puVar1[0x88] = param_2;
  *param_1 = 0xe4ea;
  puVar1[0x1] = 0x1030;
  return param_1;
}



// Virtual event processor for Type 0xE4EA. Dispatches to command execution routines
// based on internal flag state.

u16 __stdcall16far UI_Build_Item_TypeE4EA_Process_Event_e328(void *this_ptr)
{
  if (*(int *)((int)this_ptr + 0x110) == 0x0)
  {
    Helper_NoOp_Stub_e4ba();
  }
  else
  {
    Simulator_Command_TypeE4EA_Execute_Summary_and_Dispatch_e410(this_ptr);
  }
  return 0x1;
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



// Iterates through a build item's required resources and schedules sub-item spawns
// (using d180) for each available resource type until all slots in the TypeD88E manager
// are filled. Consumes resources from the source list.

void __stdcall16far
UI_Build_Item_Schedule_SubItems_from_List_0d8e
          (u16 arg1,u16 arg2,void *src_list,void *manager_ptr)
{
  u16 uVar1;
  uint uVar2;
  u16 uVar3;
  undefined4 uStack_a;
  undefined2 uStack_4;
  
  uVar1 = UI_Build_Item_TypeD88E_Get_98_and_Transition_State_d0a8(manager_ptr);
  uVar2 = UI_Build_Item_TypeD88E_Count_Empty_Slots_d144(manager_ptr);
  uStack_a = (long)(int)uVar2;
  uVar2 = (int)uVar2 >> 0xf | uVar2;
  uStack_4 = uVar1;
  if (uVar2 != 0x0)
  {
    do
    {
      uVar3 = UI_Item_List_Get_Value_by_ID_Offset6_6744(src_list,uStack_4);
      uVar2 |= uVar3;
      if (uVar2 != 0x0)
      {
        UI_Build_Item_Consume_Resources_by_Type_Logic(src_list,0x1,0x0,uStack_4);
        uStack_a += -0x1;
        UI_Build_Item_TypeD88E_Schedule_SubItem_Spawn_d180(manager_ptr,uStack_4);
      }
      if (uStack_a == 0x0)
      {
        return;
      }
      uStack_4 = UI_Build_Item_TypeD88E_Get_98_and_Transition_State_d0a8(manager_ptr);
    } while (uStack_4 != uVar1);
  }
  return;
}



// Transfers resource values from a source list to a construction manager's target list
// (group 0x22), considering remaining capacity.

void __stdcall16far
Simulator_Transfer_Resources_to_Construction_Manager_1b3a
          (u16 arg1,u16 arg2,void *manager_ptr,void *src_list)
{
  undefined2 unaff_SS;
  void *local_1a;
  undefined2 local_16 [0x2];
  uint uStack_12;
  uint uStack_10;
  undefined4 uStack_e;
  void *pvStack_a;
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(manager_ptr);
  pvStack_a = manager_ptr;
  uStack_e = UI_Construction_Item_Calculate_Capacity_Remaining_45e2(manager_ptr);
  uStack_10 = *(uint *)((int)(void *)src_list + 0x4);
  for (uStack_12 = 0x0; uStack_12 < uStack_10; uStack_12 += 0x1)
  {
    UI_Item_List_Get_Item_at_Index_Logic
              (src_list,(void **)CONCAT22(unaff_SS,&local_1a),
               (undefined2 *)CONCAT22(unaff_SS,local_16),uStack_12);
    if (uStack_e < local_1a)
    {
      UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                (pvStack_6,(void *)uStack_e,uStack_e._2_2_,local_16[0x0]);
      uStack_e = NULL;
    }
    else
    {
      uStack_e = (void *)((long)uStack_e - (long)local_1a);
      UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                (pvStack_6,(void *)local_1a,(int)((ulong)local_1a >> 0x10),local_16[0x0]
                );
    }
    if (uStack_e == NULL) break;
  }
  if (src_list != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic(src_list);
    free_if_not_null((void *)src_list);
  }
  return;
}



// Constructor for UI build item Type 0x309A. Initializes base with ID 10999 and stores
// 4 specialized command parameters. Sets vtable to 0x309A.

void * __stdcall16far
UI_Build_Item_Type309A_ctor_init_2a0e
          (void *this_ptr,u32 arg1,u32 arg2,u32 arg3,u32 arg4)
{
  void *pvVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x2af7);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar1 = (void *)this_ptr;
  *(u32 *)((int)pvVar1 + 0x108) = arg4;
  *(u32 *)((int)pvVar1 + 0x10c) = arg3;
  *(u32 *)((int)pvVar1 + 0x110) = arg2;
  *(u32 *)((int)pvVar1 + 0x114) = arg1;
  *(undefined2 *)this_ptr = 0x309a;
  *(undefined2 *)((int)pvVar1 + 0x2) = 0x1038;
  return this_ptr;
}



void __stdcall16far UI_Build_Item_Type309A_dtor_Internal_2a5c(u16 *this_ptr)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x309a;
  this_ptr[0x1] = 0x1038;
  if (this_ptr[0x8b] != 0x0 || (undefined4 *)this_ptr[0x8a] != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)this_ptr[0x8a];
    (*(code *)*puVar1)();
  }
  if (this_ptr[0x89] != 0x0 || (undefined4 *)this_ptr[0x88] != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)this_ptr[0x88];
    (*(code *)*puVar1)();
  }
  *_this_ptr = (u16)(char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  return;
}



// Clone logic for a complex build item or dialog state.

undefined2 * __stdcall16far Simulator_Object_Clone_Logic_2b9a(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int reg_dx;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x118));
  local_a = (undefined2 *)CONCAT22(reg_dx,puVar3);
  iVar6 = (int)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
                // Command handler for dialog Type 0x2E26. Manages state toggles for
                // specialized control IDs (0x158-0x15C) and updates corresponding
                // labels.
  if (reg_dx == 0x0 && puVar3 == NULL)
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
    *local_a = 0x309a;
    puVar3[0x1] = 0x1038;
    local_6 = local_a;
  }
  *(undefined4 *)(iVar6 + 0x114) = 0x0;
  *(undefined4 *)(iVar6 + 0x110) = 0x0;
  return local_6;
}



u16 * __stdcall16far
UI_Build_Item_Type309A_dtor_Scalar_Deleting_3074(u16 *param_1,u16 param_2,byte param_3)
{
  UI_Build_Item_Type309A_dtor_Internal_2a5c(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for the UI colony window. Initializes base window with list, sets vtable
// to 0x6504, and instantiates associated colony objects and view components. Zero-fills
// extensive state tracking arrays.

void * __stdcall16far UI_Colony_Window_ctor_init_30aa(void *this_ptr)
{
  void *pvVar1;
  uint uVar2;
  astruct_161 *uVar4;
  int value;
  void *pvVar3;
  void *puVar6;
  void *puVar7;
  undefined2 in_stack_0000fffa;
  
  pvVar3 = UI_Window_with_List_ctor_init_17ce(this_ptr,NULL,NULL);
  uVar2 = (uint)((ulong)pvVar3 >> 0x10);
  value = (int)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_161 *)this_ptr;
  uVar4->field10_0x10 = 0x0;
  uVar4->field11_0x14 = 0x0;
  uVar4->field12_0x18 = 0x258;
  uVar4->field13_0x1a = 0x258;
  uVar4->field14_0x1c = 0x0;
  uVar4->field15_0x1e = 0x0;
  uVar4->field16_0x22 = 0x0;
  uVar4->field17_0x24 = 0x32;
  (&uVar4->field482_0x1f6)[0x0] = NULL;
  (&uVar4->field482_0x1f6)[0x1] = NULL;
  uVar4->field484_0x1fa = 0x0;
  uVar4->field485_0x1fe = 0x0;
  uVar4->field486_0x200 = 0x8000001;
  uVar4->field487_0x204 = 0x0;
  uVar4->field488_0x206 = 0x0;
  uVar4->field489_0x208 = 0x1;
  uVar4->field490_0x20a = 0x0;
  uVar4->field491_0x20c = 0x0;
  uVar4->field492_0x20e = 0x0;
  uVar4->field493_0x210 = 0x0;
  uVar4->field494_0x214 = 0x0;
  uVar4->field495_0x216 = 0x0;
  uVar4->field496_0x21a = 0x0;
  *(undefined2 *)this_ptr = 0x6504;
  uVar4->field2_0x2 = 0x1038;
  memset_far(&uVar4->field_0x26,value,0x0);
  memset_far(&uVar4->field_0xba,value,0x0);
  memset_far(&uVar4->field_0x14e,value,0x0);
  memset_far(&uVar4->field_0x1a2,value,0x0);
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1b0));
  puVar6._2_2_ = uVar2 | (uint)pvVar1;
  if (puVar6._2_2_ == 0x0)
  {
    (&uVar4->field482_0x1f6)[0x0] = NULL;
    (&uVar4->field482_0x1f6)[0x1] = NULL;
  }
  else
  {
    puVar6._0_2_ = Colony_Object_ctor_init_314c
                             ((void *)CONCAT22(uVar2,pvVar1),(void *)uVar4->field3_0x4);
    uVar4->field482_0x1f6 = (void *)puVar6;
    uVar4->field483_0x1f8 = puVar6._2_2_;
  }
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1e));
  if (puVar6._2_2_ == 0x0 && pvVar1 == NULL)
  {
    puVar7 = NULL;
  }
  else
  {
    puVar7 = UI_Planet_View_Component_ctor_init_logic_c444
                       ((void *)CONCAT22(puVar6._2_2_,pvVar1),(void *)0x64,(void *)0xc8)
    ;
  }
  uVar4->field8_0xc = (u16 *)puVar7;
  uVar4->field9_0xe = (u16)((ulong)puVar7 >> 0x10);
  return this_ptr;
}



// Parameterized constructor for the UI colony window. Links the window to its simulator
// entity and initializes naming strings.

void * __stdcall16far
UI_Colony_Window_ctor_with_Params_3222(void *this_ptr,u32 arg1,void *arg2)
{
  void *pvVar1;
  u16 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  int value;
  void *pvVar7;
  undefined2 in_stack_0000ffda;
  undefined2 uVar8;
  char local_16 [0x14];
  
  pvVar7 = UI_Window_with_List_ctor_with_Params_183c
                     (this_ptr,NULL,NULL,(void *)0x4000000,arg2);
  uVar4 = (uint)((ulong)pvVar7 >> 0x10);
  value = (int)((ulong)this_ptr >> 0x10);
  pvVar6 = (void *)this_ptr;
  *(u32 *)((int)pvVar6 + 0x10) = arg1;
  *(undefined4 *)((int)pvVar6 + 0x14) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x18) = 0x258;
  *(undefined2 *)((int)pvVar6 + 0x1a) = 0x258;
  *(undefined2 *)((int)pvVar6 + 0x1c) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x1e) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x22) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x24) = 0x32;
  *(undefined4 *)((int)pvVar6 + 0x1f6) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x1fa) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x1fe) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x200) = 0x8000001;
  *(undefined2 *)((int)pvVar6 + 0x204) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x206) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x208) = 0x1;
  *(undefined2 *)((int)pvVar6 + 0x20a) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x20c) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x20e) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x210) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x214) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x216) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x21a) = 0x0;
  *(undefined2 *)this_ptr = 0x6504;
  *(undefined2 *)((int)pvVar6 + 0x2) = 0x1038;
  memset_far((void *)((int)pvVar6 + 0x26),value,0x0);
  memset_far((void *)((int)pvVar6 + 0xba),value,0x0);
  memset_far((void *)((int)pvVar6 + 0x14e),value,0x0);
  memset_far((void *)((int)pvVar6 + 0x1a2),value,0x0);
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffda,0x1b0));
  uVar5 = uVar4 | (uint)pvVar1;
  if (uVar5 == 0x0)
  {
    *(undefined4 *)((int)pvVar6 + 0x1f6) = 0x0;
  }
  else
  {
    puVar2 = Colony_Object_ctor_init_314c
                       ((void *)CONCAT22(uVar4,pvVar1),
                        (void *)*(undefined4 *)((int)pvVar6 + 0x4));
    *(undefined2 *)((int)pvVar6 + 0x1f6) = puVar2;
    *(uint *)((int)pvVar6 + 0x1f8) = uVar5;
  }
  uVar8 = (undefined2)*(undefined4 *)((int)pvVar6 + 0x4);
  uVar4 = *(uint *)((int)pvVar6 + 0x6) & 0xff;
  sprintf_wrapper(local_16);
  pcVar3 = strdup_allocate(local_16);
  *(undefined2 *)((int)pvVar6 + 0x1fa) = pcVar3;
  *(uint *)((int)pvVar6 + 0x1fc) = uVar4;
  pvVar1 = allocate_memory(CONCAT22(uVar8,0x1e));
  if (uVar4 == 0x0 && pvVar1 == NULL)
  {
    *(undefined4 *)((int)pvVar6 + 0xc) = 0x0;
  }
  else
  {
    pvVar7 = UI_Planet_View_Component_ctor_init_logic_c444
                       ((void *)CONCAT22(uVar4,pvVar1),(void *)0x64,(void *)0xc8);
    *(undefined2 *)((int)pvVar6 + 0xc) = (void *)pvVar7;
    *(undefined2 *)((int)pvVar6 + 0xe) = (int)((ulong)pvVar7 >> 0x10);
  }
  return this_ptr;
}



// Internal destructor for the colony window. Systematic teardown of internal list
// objects, colony components, and naming strings. Reverts vtables to 0x6504.

void __stdcall16far UI_Colony_Window_dtor_Internal_33f8(void *this_ptr)
{
  u32 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  astruct_160 *uVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_160 *)this_ptr;
  *(undefined2 *)this_ptr = 0x6504;
  uVar4->field2_0x2 = 0x1038;
  if (uVar4->field20_0x16 != 0x0 || uVar4->field19_0x14 != NULL)
  {
    puVar3 = (undefined2 *)(undefined2 *)*uVar4->field19_0x14;
    (*(code *)*puVar3)();
  }
  if (uVar4->field500_0x1f8 != 0x0 || uVar4->field499_0x1f6 != NULL)
  {
    puVar3 = (undefined2 *)(undefined2 *)*uVar4->field499_0x1f6;
    (*(code *)*puVar3)();
  }
  free_if_not_null((void *)uVar4->field501_0x1fa);
  puVar1 = uVar4->field520_0x210;
  iVar2 = uVar4->field521_0x212;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1000,puVar1,iVar2,0x1);
  }
  free_if_not_null((void *)uVar4->field528_0x21a);
  UI_Window_with_List_dtor_Internal_18b2(this_ptr);
  return;
}



// Initializes a sub-item list node for the colony window and checks if the linked
// building is currently active.

void __stdcall16far
UI_Colony_Window_Init_SubItem_and_Check_Active_354a(astruct_159 *param_1)
{
  void *pvVar1;
  int reg_dx;
  astruct_159 *uVar1;
  undefined2 uVar2;
  void *puVar3;
  undefined2 in_stack_0000fffa;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_159 *)param_1;
  if (uVar1->field538_0x21a == NULL)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
    if (reg_dx == 0x0 && pvVar1 == NULL)
    {
      uVar1->field538_0x21a = NULL;
    }
    else
    {
      puVar3 = UI_Build_Item_List_Node_Set_Building_9ecc
                         ((void *)CONCAT22(reg_dx,pvVar1),param_1);
      *(void **)&uVar1->field538_0x21a = (void *)puVar3;
      *(undefined2 *)((int)&uVar1->field538_0x21a + 0x2) = (int)((ulong)puVar3 >> 0x10);
    }
  }
  UI_Build_Item_Check_Building_Active_9ef2(uVar1->field538_0x21a);
  return;
}



// Initializes a sub-item list node and triggers the search/initialization of its
// display string.

void __stdcall16far
UI_Colony_Window_Init_SubItem_and_Resolve_String_35a8(void *this_ptr,u16 type_id)
{
  void *pvVar1;
  int reg_dx;
  int iVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 in_stack_0000fffa;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  if (*(long *)(iVar2 + 0x21a) == 0x0)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
    if (reg_dx == 0x0 && pvVar1 == NULL)
    {
      *(undefined4 *)(iVar2 + 0x21a) = 0x0;
    }
    else
    {
      pvVar4 = UI_Build_Item_List_Node_Set_Building_9ecc
                         ((void *)CONCAT22(reg_dx,pvVar1),this_ptr);
      *(undefined2 *)(iVar2 + 0x21a) = (int)pvVar4;
      *(undefined2 *)(iVar2 + 0x21c) = (int)((ulong)pvVar4 >> 0x10);
    }
  }
  UI_Build_Item_Find_String_and_Init_9f40
            ((void *)*(undefined4 *)(iVar2 + 0x21a),type_id);
  return;
}



// Increments or decrements population for a colony by either spawning new sub-entities
// (via 7C50 or CC44) or removing existing ones (via 6E9C or CE72). Interfaces with
// TypeD88E construction managers.

void __stdcall16far
Colony_Adjust_SubEntity_Population_Logic_387e
          (void *this_ptr,int old_pop,int new_pop,void *arg4)
{
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  astruct_158 *uVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *pvVar6;
  int iStack_16;
  int iStack_c;
  ulong uStack_a;
  
  if (old_pop != new_pop)
  {
    uVar3 = (astruct_158 *)this_ptr;
    uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
    if (old_pop < new_pop)
    {
      iStack_c = new_pop - old_pop;
      if ((uVar3->field525_0x210 == 0x0) ||
         (*(long *)((int)uVar3->field525_0x210 + 0xa) == 0x0))
      {
        if (uVar3->field12_0xc == NULL)
        {
          uVar5 = 0x0;
        }
        else
        {
          puVar1 = (undefined2 *)((int)*uVar3->field12_0xc + 0x10);
          uVar5 = (*(code *)*puVar1)();
        }
        for (uStack_a = 0x0; uStack_a < uVar5; uStack_a += 0x1)
        {
          pvVar6 = UI_Component_Get_Simulator_Object_via_PackedID_1d58
                             (uVar3->field12_0xc);
          if ((pvVar6 != NULL) &&
             (uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar6), uVar2 == 0xb))
          {
            UI_Component_Batch_Spawn_SubEntities_Logic_7c50
                      ((void *)pvVar6,(int)((ulong)pvVar6 >> 0x10),iStack_c,
                       iStack_c >> 0xf,0x4);
            return;
          }
        }
      }
      else
      {
        uVar5 = *(ulong *)((int)uVar3->field525_0x210 + 0xa);
        for (uStack_a = 0x0; uStack_a < uVar5; uStack_a += 0x1)
        {
          pvVar6 = UI_Managed_List_Get_Item_at_Index_1312
                             ((void *)uVar3->field525_0x210,uStack_a);
          iVar3 = (int)((ulong)pvVar6 >> 0x10);
          if (((iVar3 != 0x0 || (void *)pvVar6 != NULL) &&
              (iVar3 = UI_Build_Item_TypeD88E_Remove_and_Reinit_SubItem_cc44
                                 ((void *)pvVar6,iVar3,iStack_c,arg4,0x4), iVar3 != 0x0)
              ) && (iStack_c -= iVar3, iStack_c == 0x0))
          {
            return;
          }
        }
      }
    }
    else
    {
      iStack_16 = old_pop - new_pop;
      if ((uVar3->field525_0x210 == 0x0) ||
         (*(long *)((int)uVar3->field525_0x210 + 0xa) == 0x0))
      {
        if (uVar3->field12_0xc == NULL)
        {
          uVar5 = 0x0;
        }
        else
        {
          puVar1 = (undefined2 *)((int)*uVar3->field12_0xc + 0x10);
          uVar5 = (*(code *)*puVar1)();
        }
        for (uStack_a = 0x0; uStack_a < uVar5; uStack_a += 0x1)
        {
          pvVar6 = UI_Component_Get_Simulator_Object_via_PackedID_1d58
                             (uVar3->field12_0xc);
          if ((pvVar6 != NULL) &&
             (uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar6), uVar2 == 0xb))
          {
            UI_Component_Remove_Entities_of_Type_Logic_6e9c(pvVar6,(long)iStack_16,0x4);
            return;
          }
        }
      }
      else
      {
        uVar5 = *(ulong *)((int)uVar3->field525_0x210 + 0xa);
        for (uStack_a = 0x0; uStack_a < uVar5; uStack_a += 0x1)
        {
          pvVar6 = UI_Managed_List_Get_Item_at_Index_1312
                             ((void *)uVar3->field525_0x210,uStack_a);
          iVar3 = (int)((ulong)pvVar6 >> 0x10);
          if (iVar3 != 0x0 || (void *)pvVar6 != NULL)
          {
            iVar3 = UI_Build_Item_TypeD88E_Allocate_SubItem_Slots_ce72
                              ((void *)pvVar6,iVar3,iStack_16,arg4,0x4);
            iStack_16 -= iVar3;
            if (iStack_16 == 0x0)
            {
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// Aggregates the count of free sub-item slots across all managed construction hub
// entities (Group 0x1E) in the colony.

int __stdcall16far Colony_Count_Total_Free_SubItem_Slots_3aa6(void *this_ptr)
{
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  astruct_157 *uVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uStack_c;
  int iStack_4;
  
  iStack_4 = 0x0;
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_157 *)this_ptr;
  if ((uVar3->field525_0x210 == 0x0) ||
     (*(long *)((int)uVar3->field525_0x210 + 0xa) == 0x0))
  {
    if (uVar3->field12_0xc == NULL)
    {
      uVar5 = 0x0;
    }
    else
    {
      puVar1 = (undefined2 *)((int)*uVar3->field12_0xc + 0x10);
      uVar5 = (*(code *)*puVar1)();
    }
    for (uStack_c = 0x0; uStack_c < uVar5; uStack_c += 0x1)
    {
      pvVar6 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uVar3->field12_0xc);
      if ((pvVar6 != NULL) &&
         (uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar6), uVar2 == 0xb))
      {
        iVar3 = UI_Component_Count_SubEntities_of_Type_6b86(pvVar6,0x4);
        return iVar3;
      }
    }
  }
  else
  {
    uVar5 = *(ulong *)((int)uVar3->field525_0x210 + 0xa);
    for (uStack_c = 0x0; uStack_c < uVar5; uStack_c += 0x1)
    {
      pvVar6 = UI_Managed_List_Get_Item_at_Index_1312
                         ((void *)uVar3->field525_0x210,uStack_c);
      uVar2 = (u16)((ulong)pvVar6 >> 0x10);
      if (uVar2 != 0x0 || (int)pvVar6 != 0x0)
      {
        iVar3 = UI_Build_Item_TypeD88E_Count_Free_Slots_by_ID_ce2e
                          ((int)pvVar6,uVar2,0x4);
        iStack_4 += iVar3;
      }
    }
  }
  return iStack_4;
}



// Sets a 4-byte pointer (0x1E) and a 2-byte value (0x1C) in the UI component structure.

void __stdcall16far
UI_Component_Set_Internal_Data_1C_1E(u32 this_ptr,u32 ptr_val,u16 val)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(this_ptr >> 0x10);
  *(u16 *)((int)this_ptr + 0x1c) = val;
  *(u32 *)((int)this_ptr + 0x1e) = ptr_val;
  return;
}



// Retrieves the 4-byte pointer (0x1E) and 2-byte value (0x1C) from the UI component
// structure.

void __stdcall16far
UI_Component_Get_Internal_Data_1C_1E(void *this_ptr,void *out_ptr,void *out_val)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)out_val = *(undefined2 *)((int)(void *)this_ptr + 0x1c);
  *(undefined4 *)out_ptr = *(undefined4 *)((int)(void *)this_ptr + 0x1e);
  return;
}



// Shifts the value at offset 0x18 to 0x1A and stores the new provided value at 0x18.

void __stdcall16far UI_Component_Shift_and_Set_Values_18_1A(u32 this_ptr,u16 value)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  *(undefined2 *)(iVar1 + 0x1a) = *(undefined2 *)(iVar1 + 0x18);
  *(u16 *)(iVar1 + 0x18) = value;
  return;
}



// Retrieves a far pointer stored across offsets 0x1FA and 0x1FC.

void * __stdcall16far UI_Component_Get_FarPtr_at_1FA(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  return (void *)CONCAT22(*(undefined2 *)((int)this_ptr + 0x1fc),
                          (void *)*(undefined2 *)((int)this_ptr + 0x1fa));
}



// Updates the internal object pointer at offset 0x14, ensuring the previous object is
// virtually destroyed.

void __stdcall16far
UI_Component_Set_Internal_Object_and_Cleanup_582c(void *this_ptr,void *new_ptr)
{
  int iVar1;
  undefined2 *puVar2;
  astruct_147 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_147 *)this_ptr;
                // WARNING: Load size is inaccurate
  iVar1 = *(int *)((int)&uVar2->field20_0x14 + 0x2);
  if (iVar1 != 0x0 || uVar2->field20_0x14 != NULL)
  {
    puVar2 = (undefined2 *)(undefined2 *)*uVar2->field20_0x14;
    (*(code *)*puVar2)();
  }
  uVar2->field20_0x14 = new_ptr;
  return;
}



// Appends an item to a managed list only if it's not already present by checking for
// existing IDs.

void __stdcall16far
UI_Managed_List_Append_Unique_Item_5860
          (undefined4 param_1,undefined2 param_2,undefined4 param_3,int param_4)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  ulong local_e;
  ulong local_a;
  int local_6;
  int iStack_4;
  
  if (param_4 == 0x0)
  {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0x10);
    local_a = (*(code *)*puVar1)();
    for (local_e = 0x0; local_e < local_a; local_e += 0x1)
    {
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0x4);
      uVar4 = (*(code *)*puVar1)();
      local_6 = (int)param_3;
      if (((int)uVar4 == local_6) &&
         (iStack_4 = (int)((ulong)param_3 >> 0x10),
         (int)((ulong)uVar4 >> 0x10) == iStack_4))
      {
        return;
      }
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0xc);
    (*(code *)*puVar1)();
  }
  return;
}



void * __stdcall16far
UI_Colony_Window_dtor_Scalar_Deleting_64de(void *param_1,byte param_2)
{
  UI_Colony_Window_dtor_Internal_33f8(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}
