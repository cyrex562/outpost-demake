/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 31/56
 * Original lines (combined): 79191-80622
 * Boundaries: top-level declarations/definitions only
 */




// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_8342(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the 'Fill Resources' simulator command. Initializes base class with
// ID 3999 and sets internal name to 'SCFillResources'. Sets vtable to 0x84BA.

void * __stdcall16far Simulator_Command_FillResources_ctor_init_837e(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0xf9f);
  *(undefined2 *)this_ptr = 0x84ba;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)this_ptr + 0x8)),
                   s_SCFillResources_1050_500c);
  return this_ptr;
}



undefined2 __stdcall16far Simulator_World_Reset_Entity_Flag_206(void)
{
  undefined2 unaff_SS;
  void *pvVar1;
  undefined1 local_14 [0x12];
  
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,0x0,0x400);
  while( true )
  {
    pvVar1 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((undefined1 *)CONCAT22(unaff_SS,local_14));
    if (pvVar1 == NULL) break;
    *(undefined2 *)((int)(void *)pvVar1 + 0x206) = 0x1;
  }
  return 0x1;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_848e(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the 'Force Morale' simulator command. Initializes base class with ID
// 999 and formats its internal name based on target colony parameters. Sets vtable to
// 0x8688.

void * __stdcall16far
Simulator_Command_ForceMorale_ctor_init_84ca
          (void *this_ptr,u32 colony_ptr,u16 arg1,u16 arg2,u16 arg3)
{
  undefined2 uVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  pvVar2 = (void *)this_ptr;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x3e7);
  *(u16 *)((int)pvVar2 + 0x108) = arg3;
  *(u16 *)((int)pvVar2 + 0x10a) = arg2;
  *(u16 *)((int)pvVar2 + 0x10c) = arg1;
  *(u32 *)((int)pvVar2 + 0x10e) = colony_ptr;
  *(undefined2 *)this_ptr = 0x8688;
  *(undefined2 *)((int)pvVar2 + 0x2) = 0x1028;
  if (*(int *)((int)pvVar2 + 0x108) == 0x1)
  {
    uVar1 = 0x501c;
  }
  else
  {
    uVar1 = 0x5020;
  }
  sprintf_wrapper(CONCAT22(uVar3,(int)pvVar2 + 0x8),0x5024,0x1050,uVar1,0x1050,
                  colony_ptr);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Entity_Set_Properties_18_1A_from_ID(undefined4 param_1)
{
  u16 value;
  int iVar1;
  undefined2 uVar2;
  void *this_ptr;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x108) == 0x0)
  {
    return 0x0;
  }
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,
                        (u8 *)(u8 *)*(undefined4 *)(iVar1 + 0x10e));
  if (*(int *)(iVar1 + 0x108) == 0x1)
  {
    value = 0x3e8;
  }
  else
  {
    value = 0x0;
  }
  UI_Component_Shift_and_Set_Values_18_1A((u32)this_ptr,value);
  return 0x1;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_865c(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Simulator-level command that updates planetary resource counters (code 0x1D) and
// submits an event to trigger neighbor notifications.

void __stdcall16far Simulator_Command_Update_Resources_and_Submit_86c2(void *this_ptr)
{
  void *pvVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int qty_delta;
  int arg4;
  undefined2 uVar4;
  undefined2 uVar5;
  int resource_id;
  
  uVar5 = 0x0;
  resource_id = 0x1d;
  arg4 = 0x1;
  uVar4 = 0x0;
  uVar3 = 0x0;
  qty_delta = 0x0;
  uVar2 = 0x0;
  pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
  Turn_Manager_Add_Resource_Change_Entry_Logic
            ((void *)pvVar1,CONCAT22(uVar3,uVar2),qty_delta,arg4,CONCAT22(uVar5,uVar4),
             resource_id);
  Simulator_OnEvent_Submit_Notify_and_Return_1_6b2c(this_ptr);
  return;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_87b4(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the 'InternalPutBldg' simulator command. Initializes base class with
// ID 1000, sets internal name 'SCInternalPutBldg', and maps coordinate and entity
// parameters. Sets vtable to 0x8D8E.

void * __stdcall16far
Simulator_Command_InternalPutBldg_ctor_init_87f0
          (astruct_323 *param_1,u16 param_2,u16 param_3,u16 param_4,u32 *param_5,
          undefined2 param_6,void *param_7,void *param_8)
{
  astruct_323 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x3e8);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_323 *)param_1;
  uVar1->field263_0x108 = param_8;
  uVar1->field264_0x10c = param_7;
  uVar1->field265_0x110 = 0x0;
  uVar1->field266_0x114 = *param_5;
  uVar1->field267_0x118 = (u16)param_5[0x1];
  uVar1->field268_0x11a = param_4;
  uVar1->field269_0x11c = param_3;
  uVar1->field270_0x11e = param_2;
  uVar1->field272_0x122 = 0x0;
  uVar1->field271_0x120 = 0x0;
  *(undefined2 *)param_1 = 0x8d8e;
  uVar1->field2_0x2 = 0x1028;
  sprintf_wrapper(&uVar1->field7_0x8,uVar2,0x5046,0x1050,(int)param_8,
                  (int)((ulong)param_8 >> 0x10),param_4);
  return param_1;
}



// Constructor for the 'InternalPutBldg2' simulator command. Similar to 87F0 but sets
// name to 'SCInternalPutBldg2'. Sets vtable to 0x8D8E.

void * __stdcall16far
Simulator_Command_InternalPutBldg2_ctor_init_8888
          (void *this_ptr,u16 arg1,u16 arg2,u16 coords_offset,u16 coords_segment,
          u16 arg5,u16 arg6,void *manager_ptr,void *entity_ptr)
{
  astruct_322 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x3e8);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_322 *)this_ptr;
  uVar1->field263_0x108 = entity_ptr;
  uVar1->field264_0x10c = manager_ptr;
  uVar1->field265_0x110 = _arg5;
  uVar1->field266_0x114 = *(u32 *)coords_offset;
  uVar1->field267_0x118 = *(u16 *)(coords_offset + 0x4);
  uVar1->field268_0x11a = arg2;
  uVar1->field269_0x11c = 0x0;
  uVar1->field270_0x11e = arg1;
  uVar1->field272_0x122 = 0x0;
  uVar1->field271_0x120 = 0x0;
  *(undefined2 *)this_ptr = 0x8d8e;
  uVar1->field2_0x2 = 0x1028;
  sprintf_wrapper(&uVar1->field7_0x8,uVar2,0x506f,0x1050,entity_ptr,arg2);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Handle_Entity_Interaction_and_State_Change_8920(undefined4 param_1)
{
  undefined2 *puVar1;
  u8 *puVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int *out1;
  undefined2 uVar6;
  int *unaff_SS;
  long *plVar7;
  void *this_ptr;
  u8 *puVar8;
  undefined4 *puVar9;
  undefined4 local_156 [0x43];
  undefined4 local_4a;
  int local_46;
  undefined4 *local_44;
  undefined4 local_38;
  undefined4 *local_34;
  undefined2 local_30;
  u8 *local_2e;
  void *local_2a;
  undefined1 local_26 [0x4];
  undefined4 local_22;
  u8 *local_1e;
  undefined2 uStack_1c;
  void *local_1a;
  void *local_16;
  undefined2 uStack_14;
  u8 *local_12;
  undefined2 uStack_10;
  uint local_e;
  int local_c [0x3];
  undefined4 local_6;
  
  out1 = (int *)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  plVar7 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,(void *)CONCAT22(out1,(void *)(iVar5 + 0x114)),
                      *(long *)(iVar5 + 0x108),(undefined1 *)CONCAT22(unaff_SS,local_26)
                     );
  local_6 = (u8 *)*plVar7;
  unpack_3word_struct((void *)(iVar5 + 0x114),out1,local_c,unaff_SS);
  local_2e = local_6;
  local_38 = local_6;
  puVar8 = local_38;
  local_38._3_1_ = (char)((ulong)local_6 >> 0x18);
  local_e = (uint)(local_38._3_1_ != '\0');
  local_38 = puVar8;
  if (local_e == 0x0)
  {
    uVar4 = local_6._2_2_;
    puVar2 = (u8 *)(iVar5 + 0x114);
    Simulator_Call_Virtual_Initializer_e2ac((u32)_p_SimulatorWorldContext);
    uVar6 = 0x1030;
    local_12 = puVar2;
    uStack_10 = uVar4;
    Simulator_Map_Update_Entity_at_Coords_61fe
              (_p_MapContext_5740,(u8 *)CONCAT22(uVar4,puVar2),
               (u8 *)CONCAT22(out1,(u8 *)(iVar5 + 0x114)),*(long *)(iVar5 + 0x108));
    local_38 = NULL;
    if ((*(int *)(iVar5 + 0x11a) == 0xa) || (*(int *)(iVar5 + 0x11a) == 0x37))
    {
      if (*(int *)(iVar5 + 0x11a) == 0x37)
      {
        local_38 = (u8 *)*(long *)(iVar5 + 0x10c);
      }
      iVar3 = iVar5 + 0x114;
      Simulator_Call_Virtual_Initializer_e2ac((u32)_p_SimulatorWorldContext);
      *(int *)(iVar5 + 0x10c) = iVar3;
      *(undefined2 *)(iVar5 + 0x10e) = uVar4;
      local_2e = (u8 *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x2f);
      uVar6 = 0x1018;
      UI_Component_Append_6Byte_Struct_to_Array_at_Offset_2C_Logic
                ((long)local_2e,*(long *)(iVar5 + 0x10c),*(long *)(iVar5 + 0x108));
      if (*(long *)(iVar5 + 0x110) != 0x0)
      {
        local_2a = Simulator_Get_Entity_Object_from_PackedID_e1ec
                             (_p_SimulatorWorldContext,
                              (u8 *)(u8 *)*(undefined4 *)(iVar5 + 0x10c));
        local_44 = (undefined4 *)*(undefined4 *)(iVar5 + 0x110);
        *(undefined4 *)((int)(void *)local_2a + 0x200) = local_44;
      }
    }
    local_34 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)(iVar5 + 0x10c));
    if (local_34 != NULL)
    {
      puVar1 = (undefined2 *)((int)*local_34 + 0x8);
      (*(code *)*puVar1)(uVar6,(undefined4 *)local_34,(int)((ulong)local_34 >> 0x10),0x0
                         ,local_12,uStack_10,0x0);
    }
  }
  else
  {
    local_12 = (u8 *)local_6;
    uStack_10 = local_6._2_2_;
  }
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,local_12);
  uStack_14 = (undefined2)((ulong)this_ptr >> 0x10);
  local_16 = (void *)this_ptr;
  UI_Component_Set_Entity_ID_and_Cache_Ptr_73ee
            (this_ptr,(void *)*(undefined4 *)(iVar5 + 0x10c));
  iVar3 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),
                     *(int *)(iVar5 + 0x11a));
  if ((iVar3 == 0x0) && (*(int *)(iVar5 + 0x11c) == 0x0))
  {
    local_4a = *(undefined4 *)((int)local_16 + 0xc);
    local_46 = *(int *)((int)local_16 + 0x10);
    local_44 = (undefined4 *)CONCAT22(local_44._2_2_,&local_4a);
    if (local_46 < 0x1)
    {
      local_30 = 0x5;
    }
    else
    {
      local_30 = 0x6;
    }
    *(undefined2 *)((int)local_16 + 0x14) = local_30;
  }
  local_1a = (void *)*(undefined4 *)((int)local_16 + 0x16);
  if (*(int *)((int)local_16 + 0x18) != 0x0 || (void *)local_1a != NULL)
  {
    Simulator_Command_KillBldg_ctor_init_e4fa
              ((undefined4 *)CONCAT22(unaff_SS,local_156),
               (void *)CONCAT22(*(int *)((int)local_16 + 0x18),(void *)local_1a));
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined4 *)CONCAT22(unaff_SS,local_156));
    local_156[0x0] = 0x1008389a;
  }
  puVar8 = Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
                     ((void *)_p_SimulatorWorldContext,
                      (int)((ulong)_p_SimulatorWorldContext >> 0x10),
                      *(undefined2 *)(iVar5 + 0x11e),(long)*(int *)(iVar5 + 0x11a),0x0,
                      0x700,local_12,uStack_10);
  uStack_1c = (undefined2)((ulong)puVar8 >> 0x10);
  local_1e = (u8 *)puVar8;
  if (puVar8 == NULL)
  {
    return 0x0;
  }
  UI_Component_Set_Active_Entity_and_Sync_Logic_7e5a
            ((void *)CONCAT22(uStack_14,local_16),puVar8);
  local_22 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,local_1e);
  uVar6 = (undefined2)((ulong)local_22 >> 0x10);
  puVar9 = (undefined4 *)local_22;
  iVar3 = (int)*local_22;
  puVar2 = local_12;
  uVar4 = uStack_10;
  (*(code *)*(undefined2 *)(iVar3 + 0x4))();
  (*(code *)*(undefined2 *)(iVar3 + 0x20))(0x1030,local_22,puVar9,uVar6,puVar2,uVar4);
  (*(code *)*(undefined2 *)(iVar3 + 0x18))
            (0x1030,(undefined4 *)local_22,(int)((ulong)local_22 >> 0x10),0x1);
  if (*(int *)(iVar5 + 0x11a) == 0x37)
  {
    ((undefined4 *)local_22)[0x8] = *(undefined4 *)(iVar5 + 0x10c);
  }
  *(undefined4 *)(iVar5 + 0x120) = local_22;
  return 0x1;
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
