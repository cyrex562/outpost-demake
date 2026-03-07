/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 32/56
 * Original lines (combined): 80663-81917
 * Boundaries: top-level declarations/definitions only
 */




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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far Simulator_World_Execute_All_Colony_Step_Logic(u32 param_1)
{
  undefined4 uVar1;
  u16 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  u32 uVar7;
  void *pvVar8;
  long lVar9;
  u32 local_3a;
  u16 local_36;
  u16 local_34;
  u32 local_30;
  u16 local_2c;
  u16 local_2a;
  u16 local_28;
  u16 local_26;
  u16 local_20;
  u16 local_1e;
  u32 local_1c;
  u16 local_18;
  u16 local_16;
  u32 local_6;
  
  local_6 = (u32)Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)0x1);
  if ((int)(local_6 >> 0x10) != 0x0 || (int)local_6 != 0x0)
  {
    Simulator_World_Iterator_ctor_init_dc52
              ((u16 *)CONCAT22(unaff_SS,&local_18),0x1,0x0,0x400);
    while( true )
    {
      local_6 = (u32)Simulator_World_Iterator_Get_Next_Entity_e4ec
                               ((u16 *)CONCAT22(unaff_SS,&local_18));
      iVar4 = (int)(local_6 >> 0x10);
      iVar3 = (int)local_6;
      if (iVar4 == 0x0 && iVar3 == 0x0) break;
      lVar9 = *(long *)(iVar3 + 0x200);
      iVar5 = *(int *)(iVar3 + 0x202);
      if (*(int *)(iVar3 + 0x1fe) != 0x0)
      {
        uVar2 = (u16)(param_1 >> 0x10);
        if (((int)lVar9 != 0x2) || (iVar5 != 0x800))
        {
          Colony_Process_Turn_Consumption_and_Events_a3ae
                    ((u16)param_1,uVar2,(void *)local_6);
        }
        uVar2 = Colony_Update_Tax_and_Efficiency_a28a
                          ((u16)param_1,uVar2,(void *)local_6);
        if ((iVar5 < 0x1) && ((iVar5 < 0x0 || (uVar2 < 0x64))))
        {
          Colony_Process_Turn_Maintenance_and_Growth_a4ee(param_1,(void *)local_6);
        }
        if (lVar9 != 0x8000002)
        {
          uVar7 = Colony_Process_Population_Growth_Turn_Step_42cc((void *)local_6);
          if ((int)(uVar7 >> 0x10) != 0x0 || (int)uVar7 != 0x0)
          {
            pvVar8 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                       (_p_ResourceManager,0x37);
            uVar6 = (undefined2)(local_6 >> 0x10);
            Turn_Manager_Add_Resource_Change_Entry_Logic
                      ((void *)pvVar8,0x0,(int)uVar7,*(int *)((int)local_6 + 0x208),
                       *(long *)((int)local_6 + 0x4),0x2);
          }
        }
      }
    }
    local_18 = 0x389a;
    local_16 = 0x1008;
    pvVar8 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
    local_6 = (u32)Simulator_Get_Entity_Object_from_PackedID_e1ec
                             (_p_SimulatorWorldContext,(u8 *)0x1);
    iVar3 = (int)local_6;
    UI_Object_Process_Item_Action_on_Collection_E_Wrapper
              ((void *)pvVar8,(int)((ulong)pvVar8 >> 0x10));
    if (iVar3 != 0x0)
    {
      iVar3 = UI_Object_Process_Randomized_Quantity_Decrement_Logic((void *)pvVar8);
      if (iVar3 < 0x1)
      {
        if (iVar3 < 0x0)
        {
          uVar1 = *(undefined4 *)((int)local_6 + 0x1f6);
          lVar9 = Colony_Calculate_Sum_All_Resources_38b8
                            ((int)uVar1,(u16)((ulong)uVar1 >> 0x10));
          if (((int)((ulong)lVar9 >> 0x10) == 0x0 || lVar9 < 0x0) &&
             ((lVar9 < 0x0 || ((int)lVar9 == 0x0))))
          {
            pvVar8 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                       (_p_ResourceManager,0x37);
            Turn_Manager_Add_Resource_Change_Entry_Logic
                      ((void *)pvVar8,0x0,0x0,0x1,*(long *)((int)local_6 + 0x4),0x6);
          }
        }
      }
      else
      {
        pvVar8 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                   (_p_ResourceManager,0x37);
        Turn_Manager_Add_Resource_Change_Entry_Logic
                  ((void *)pvVar8,0x0,iVar3,*(int *)((int)local_6 + 0x208),0x4000001,0x2
                  );
        pvVar8 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                   (_p_ResourceManager,0x2b);
        Turn_Manager_Push_Resource_Event_Logic
                  ((void *)pvVar8,*(long *)((int)local_6 + 0x4),0x14);
      }
    }
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates and applies per-turn production or resource generation for a colony
// entity. Includes logic for remainder tracking and pushing resource events to the Turn
// Manager.

void __stdcall16far
Colony_Process_Turn_Production_Update_a188
          (u16 arg1,u16 arg2,int factor,int type,u32 colony_ptr)
{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar6;
  long lVar4;
  long lVar5;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  long lVar10;
  void *pvVar11;
  int iStack_12;
  uint uStack_e;
  int iStack_c;
  
  uVar9 = (undefined2)(colony_ptr >> 0x10);
  iVar7 = (int)colony_ptr;
  pvVar1 = (void *)(void *)*(undefined4 *)(iVar7 + 0x1f6);
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x1f6) >> 0x10);
  lVar10 = Colony_Calculate_Sum_Resource_Group_38f2
                     ((void *)CONCAT22(*(undefined2 *)(iVar7 + 0x1f8),pvVar1),type);
  iVar2 = (int)(0x64 / (long)factor);
  iVar8 = type * 0x4;
  lVar10 += *(long *)((int)pvVar1 + iVar8 + 0x18c);
  lVar4 = lVar10 / (long)iVar2;
  lVar5 = lVar4 * iVar2;
  uStack_e = (uint)lVar10;
  iStack_c = (int)((ulong)lVar10 >> 0x10);
  uVar3 = (uint)lVar5;
  *(int *)((int)pvVar1 + iVar8 + 0x18c) = uStack_e - uVar3;
  *(int *)((int)pvVar1 + iVar8 + 0x18e) =
       (iStack_c - (int)((ulong)lVar5 >> 0x10)) - (uint)(uStack_e < uVar3);
  iStack_12 = (int)lVar4;
  if (lVar4 != 0x0)
  {
    Colony_Distribute_Value_Decrement_across_Group_375a(pvVar1,uVar6,type,lVar4);
    if (*(long *)(iVar7 + 0x200) != 0x8000002)
    {
      pvVar11 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x37);
      Turn_Manager_Add_Resource_Change_Entry_Logic
                ((void *)pvVar11,0x0,iStack_12,*(int *)(iVar7 + 0x208),
                 *(long *)(iVar7 + 0x4),0x2);
      pvVar11 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x2b);
      Turn_Manager_Push_Resource_Event_Logic((void *)pvVar11,*(long *)(iVar7 + 0x4),0xd)
      ;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates colony tax revenue and production efficiency based on current population
// levels. Sets state flags at 0x20A and 0x20C.

u16 __stdcall16far
Colony_Update_Tax_and_Efficiency_a28a(u16 arg1,u16 arg2,void *colony_ptr)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  u16 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 in_DX;
  u32 *puVar6;
  u32 *puVar7;
  long lVar8;
  void *pvVar9;
  undefined2 uVar10;
  undefined4 uStack_12;
  undefined4 uStack_a;
  
  puVar4 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  pvVar9 = (void *)colony_ptr;
  uVar10 = (undefined2)((ulong)colony_ptr >> 0x10);
  puVar6 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     (colony_ptr,puVar4,in_DX);
  uStack_a = (undefined4 *)CONCAT22(puVar6,puVar4);
  uVar1 = *(undefined4 *)((int)pvVar9 + 0x1f6);
  puVar2 = (undefined2 *)((int)*uStack_a + 0x10);
  puVar7 = puVar6;
  uVar5 = (*(code *)*puVar2)(0x1038,puVar4,puVar6);
  uStack_12 = CONCAT22(puVar7,uVar5);
  lVar8 = Colony_Calculate_Sum_All_Resources_38b8
                    ((int)uVar1,(u16)((ulong)uVar1 >> 0x10));
  if (uStack_12 == 0x0)
  {
    lVar8 = 0x64;
    uVar5 = 0x0;
  }
  else
  {
    lVar8 /= CONCAT22(puVar7,uVar5);
    uVar5 = (undefined2)((ulong)lVar8 >> 0x10);
  }
  uVar3 = (u16)lVar8;
  lVar8 = CONCAT22(uVar5,uVar3);
  if (uStack_a != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_a)(0x1030,puVar4,puVar6,0x1);
  }
  if (lVar8 < 0x64)
  {
    if (lVar8 < 0x55)
    {
      if (lVar8 < 0x4b)
      {
        if (lVar8 < 0x32)
        {
          if (lVar8 < 0x19)
          {
            *(undefined2 *)((int)pvVar9 + 0x20a) = 0x1;
            *(undefined2 *)((int)pvVar9 + 0x20c) = 0xffff;
            return uVar3;
          }
          *(undefined2 *)((int)pvVar9 + 0x20a) = 0x0;
          *(undefined2 *)((int)pvVar9 + 0x20c) = 0x0;
          return uVar3;
        }
        *(undefined2 *)((int)pvVar9 + 0x20a) = 0xfffb;
      }
      else
      {
        *(undefined2 *)((int)pvVar9 + 0x20a) = 0xfff6;
      }
    }
    else
    {
      *(undefined2 *)((int)pvVar9 + 0x20a) = 0xfff1;
    }
  }
  else
  {
    *(undefined2 *)((int)pvVar9 + 0x20a) = 0xffec;
  }
  *(undefined2 *)((int)pvVar9 + 0x20c) = 0x1;
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles per-turn resource consumption for a colony. Pushes event 0x11 to the Turn
// Manager if resources are depleted. Triggers event 0x835A if specific thresholds are
// met.

void __stdcall16far
Colony_Process_Turn_Consumption_and_Events_a3ae(u16 arg1,u16 arg2,void *colony_ptr)
{
  uint uVar1;
  u16 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  void *pvVar6;
  long lVar7;
  undefined2 local_146;
  undefined2 uStack_144;
  void *pvStack_20;
  undefined2 uStack_1e;
  u32 uStack_1a;
  undefined4 uStack_16;
  uint uStack_12;
  int iStack_10;
  undefined4 uStack_e;
  undefined4 uStack_a;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  pvVar6 = (void *)Colony_Get_Entity_Object_by_PackedID_200_Logic(colony_ptr);
  uStack_4 = (undefined2)((ulong)pvVar6 >> 0x10);
  uStack_6 = SUB42(pvVar6,0x0);
  uVar5 = (undefined2)((ulong)colony_ptr >> 0x10);
  iVar3 = (int)colony_ptr;
  if ((*(int *)(iVar3 + 0x204) != 0x0) &&
     (uVar2 = Colony_Check_Value_at_Index_is_Zero_25b2(pvVar6,0x82), uVar2 != 0x0))
  {
    return;
  }
  uStack_a = *(undefined4 *)(iVar3 + 0x1f6);
  uStack_e = Colony_Calculate_Sum_All_Resources_38b8
                       ((int)uStack_a,(u16)((ulong)uStack_a >> 0x10));
  pvVar6 = Colony_Calc_Resource_Deficit_at_26_540a(colony_ptr,0x1e);
  iStack_10 = (int)((ulong)pvVar6 >> 0x10);
  uStack_12 = (uint)pvVar6;
  if ((iStack_10 == 0x0 && uStack_12 == 0x0) && (*(long *)(iVar3 + 0x200) != 0x8000002))
  {
    lVar7 = Colony_Calculate_Sum_All_Resources_38b8
                      ((int)uStack_a,(u16)((ulong)uStack_a >> 0x10));
    if ((-0x1 < lVar7) && ((0x0 < (int)((ulong)lVar7 >> 0x10) || ((int)lVar7 != 0x0))))
    {
      pvVar6 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x2b);
      uStack_1e = (undefined2)((ulong)pvVar6 >> 0x10);
      pvStack_20 = (void *)pvVar6;
      Turn_Manager_Push_Resource_Event_Logic(pvStack_20,*(long *)(iVar3 + 0x4),0x11);
    }
  }
  uStack_1a = uStack_e;
  uVar1 = uStack_12 * 0xa;
  uVar4 = (iStack_10 * 0x5 + (uint)CARRY2(uStack_12,uStack_12) * 0x2 +
           (uint)CARRY2(uStack_12 * 0x2,uStack_12 * 0x2) +
          (uint)CARRY2(uStack_12 * 0x4,uStack_12)) * 0x2 +
          (uint)CARRY2(uStack_12 * 0x5,uStack_12 * 0x5);
  uStack_16 = CONCAT22(uVar4,uVar1);
  if ((uVar4 <= uStack_e._2_2_) &&
     ((uVar4 < uStack_e._2_2_ || (uVar1 < (uint)uStack_e))))
  {
    Simulator_Command_Starve_ctor_init
              ((undefined2 *)CONCAT22(unaff_SS,&local_146),uStack_e,
               CONCAT22(uVar4,uVar1),*(u32 *)(iVar3 + 0x4));
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_146));
    uStack_1a = uStack_16;
    local_146 = 0x389a;
    uStack_144 = 0x1008;
  }
  uStack_1a += 0x9;
  Colony_Consume_Resource_Globally_52b8(colony_ptr,uStack_1a / 0xa,0x1e);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Main turn update dispatcher for a colony. Handles resource maintenance, population
// growth calculation, and random state triggers for internal sub-systems.

void __stdcall16far
Colony_Process_Turn_Maintenance_and_Growth_a4ee(u32 arg1,void *colony_ptr)
{
  void *this_ptr;
  ulong uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  u16 uVar5;
  int iVar6;
  undefined2 in_DX;
  u32 *puVar7;
  u32 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  void *this_ptr_00;
  u16 arg2;
  int iStack_32;
  undefined4 uStack_12;
  
  uVar9 = (undefined2)((ulong)colony_ptr >> 0x10);
  this_ptr = (void *)*(undefined4 *)((int)colony_ptr + 0x1f6);
  uVar1 = *_p_SimulatorWorldContext;
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uVar10 = 0x1038;
  puVar7 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     (colony_ptr,puVar3,in_DX);
  uStack_12 = (undefined4 *)CONCAT22(puVar7,puVar3);
  puVar2 = (undefined2 *)((int)*uStack_12 + 0x10);
  puVar8 = puVar7;
  iVar4 = (*(code *)*puVar2)(0x1038,puVar3,puVar7);
  if (puVar8 != NULL || iVar4 != 0x0)
  {
    uVar10 = 0x1030;
    Colony_Resource_Add_to_Total_3548((u32)this_ptr,CONCAT22(puVar8,iVar4));
  }
  if (uStack_12 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_12)(uVar10,puVar3,puVar7,0x1);
  }
  arg2 = (u16)(arg1 >> 0x10);
  if (uVar1 % 0xc == 0x0)
  {
    Colony_Resource_Shift_Left_Logic_387c(this_ptr);
    Colony_Update_Population_Growth_Logic_a61e
              ((u16)arg1,arg2,(u32)this_ptr,(u32)colony_ptr);
  }
  this_ptr_00 = (void *)Colony_Get_Entity_Object_by_PackedID_200_Logic(colony_ptr);
  if ((*(int *)((int)colony_ptr + 0x204) != 0x0) &&
     (uVar5 = Colony_Check_Value_at_Index_is_Zero_25b2(this_ptr_00,0x80), uVar5 != 0x0))
  {
    return;
  }
  uVar9 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar4 = (int)this_ptr + 0x180;
  iStack_32 = 0x1;
  do
  {
    if (*(int *)(iStack_32 * 0x2 + iVar4) != 0x0)
    {
      iVar6 = random_int_range(0x1,0x64);
      if (iVar6 <= *(int *)(iStack_32 * 0x2 + iVar4))
      {
        Colony_Process_Turn_Production_Update_a188
                  ((u16)arg1,arg2,*(int *)(iStack_32 * 0x2 + (int)this_ptr + 0x174),
                   iStack_32,(u32)colony_ptr);
      }
    }
    iStack_32 += 0x1;
  } while (iStack_32 < 0x6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates population growth or decline for a colony based on health and food levels.
// Pushes event 0xC to the Turn Manager on significant shifts.

void __stdcall16far
Colony_Update_Population_Growth_Logic_a61e
          (u16 arg1,u16 arg2,u32 metrics_ptr,u32 colony_ptr)
{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  u16 segment;
  undefined2 uStack_10;
  undefined4 uStack_e;
  
  segment = (u16)(metrics_ptr >> 0x10);
  lVar3 = Colony_Calculate_Sum_All_Resources_38b8((int)metrics_ptr,segment);
  iVar1 = (int)((ulong)lVar3 >> 0x10);
  if ((iVar1 < 0x3fff) || ((iVar1 < 0x4000 && ((int)lVar3 != -0x1))))
  {
    lVar3 = Colony_Calculate_Sum_Resource_Group_38f2((void *)metrics_ptr,0x3);
    lVar4 = Colony_Calculate_Sum_Resource_Group_38f2((void *)metrics_ptr,0x4);
    uStack_e = CONCAT22((int)((ulong)lVar3 >> 0x10) + (int)((ulong)lVar4 >> 0x10) +
                        (uint)CARRY2((uint)lVar3,(uint)lVar4),(uint)lVar3 + (uint)lVar4)
    ;
    uStack_10 = *(uint *)((int)metrics_ptr + 0x1a8);
    if (uStack_10 == 0x0)
    {
      uStack_10 = 0x5;
    }
    if ((uStack_e / (long)(ulong)uStack_10 != 0x0) &&
       (uVar2 = (undefined2)(colony_ptr >> 0x10),
       *(long *)((int)colony_ptr + 0x200) != 0x8000002))
    {
      pvVar5 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x2b);
      Turn_Manager_Push_Resource_Event_Logic
                ((void *)pvVar5,*(long *)((int)colony_ptr + 0x4),0xc);
      Colony_Set_Population_Total_Logic_3534
                (metrics_ptr,uStack_e / (long)(ulong)uStack_10);
    }
  }
  return;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_a6ca(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



void * __stdcall16far Simulator_Object_Constructor_Type_SCPrelimAlloc(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0xbb7);
  *(undefined2 *)param_1 = 0xa856;
  *(undefined2 *)((int)(void *)param_1 + 0x2) = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)(void *)param_1 + 0x8)),
                   s_SCPrelimAlloc_1050_50f6);
  return param_1;
}



u16 __stdcall16far Simulator_World_Process_Colony_Resource_Ticks(void)
{
  undefined2 unaff_SS;
  void *colony_ptr;
  u16 local_1a;
  u32 local_18;
  u16 local_14;
  u16 local_12;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x400);
  while( true )
  {
    colony_ptr = Simulator_World_Iterator_Get_Next_Entity_e4ec
                           ((u16 *)CONCAT22(unaff_SS,&local_14));
    if (colony_ptr == NULL) break;
    Colony_Refresh_Global_Resource_Trackers_5464(colony_ptr);
    Colony_Reset_Secondary_Trackers_and_Cleanup_56d6((u32)colony_ptr,0x0);
    Colony_Process_Resource_Distribution_Tick_518c(colony_ptr);
  }
  return 0x1;
}



void * __stdcall16far Simulator_Object_Constructor_Type_SCProdSched(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x36af);
  *(undefined2 *)param_1 = 0xa9ae;
  *(undefined2 *)((int)param_1 + 0x2) = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)param_1 + 0x8)),
                   s_SCProdSched_1050_5104);
  return param_1;
}



u16 __stdcall16far Simulator_World_Process_Power_and_LifeSupport_Ticks(void)
{
  undefined2 unaff_SS;
  void *pvVar1;
  u16 local_22;
  u32 local_18;
  u16 local_14;
  u16 local_12;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x400);
  while( true )
  {
    pvVar1 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((u16 *)CONCAT22(unaff_SS,&local_14));
    if (pvVar1 == NULL) break;
    if (*(long *)((int)(void *)pvVar1 + 0x200) != 0x8000002)
    {
      Colony_Process_Turn_Power_and_LifeSupport_Propagation_3fca((u32)pvVar1);
    }
  }
  return 0x1;
}



void * __stdcall16far Simulator_Object_Constructor_Type_SCPower(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x176f);
  *(undefined2 *)param_1 = 0xab22;
  *(undefined2 *)((int)(void *)param_1 + 0x2) = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)(void *)param_1 + 0x8)),
                   s_SCPower_1050_5110);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far Simulator_World_Process_Entities_VCall_34(void)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 *puVar4;
  u16 local_24;
  u32 local_18;
  u16 local_14;
  u16 local_12;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x700);
  while( true )
  {
    puVar4 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((u16 *)CONCAT22(unaff_SS,&local_14));
    uVar3 = (undefined2)((ulong)puVar4 >> 0x10);
    if (puVar4 == NULL) break;
    iVar2 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),
                       *(int *)((undefined4 *)puVar4 + 0x3));
    if (iVar2 != 0x0)
    {
      puVar1 = (undefined2 *)((int)*puVar4 + 0x34);
      (*(code *)*puVar1)(0x1008,(undefined4 *)puVar4,uVar3);
    }
  }
  return 0x1;
}



void * __stdcall16far Simulator_Object_Constructor_Type_SCRchSched(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x2edf);
  *(undefined2 *)param_1 = 0xaca6;
  *(undefined2 *)((int)(void *)param_1 + 0x2) = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)(void *)param_1 + 0x8)),
                   s_SCRchSched_1050_5118);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far Simulator_World_Process_Active_Entities_VCall_30(void)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 *puVar6;
  u16 local_24;
  u16 local_1a;
  u32 local_18;
  u16 local_14;
  u16 local_12;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x700);
LAB_1028_ab7e:
  puVar6 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                     ((u16 *)CONCAT22(unaff_SS,&local_14));
  uVar5 = (undefined2)((ulong)puVar6 >> 0x10);
  puVar2 = (undefined4 *)puVar6;
  if (puVar6 == NULL)
  {
    return 0x1;
  }
  iVar4 = *(int *)(puVar2 + 0x3);
  iVar3 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),iVar4);
  if (iVar3 == 0x0) goto code_r0x1028abad;
  goto LAB_1028_abc0;
code_r0x1028abad:
  iVar4 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),iVar4);
  if (iVar4 != 0x0)
  {
LAB_1028_abc0:
    if (*(int *)((int)puVar2 + 0x12) == 0x5)
    {
      puVar1 = (undefined2 *)((int)*puVar6 + 0x30);
      (*(code *)*puVar1)(0x1008,puVar2);
    }
  }
  goto LAB_1028_ab7e;
}
