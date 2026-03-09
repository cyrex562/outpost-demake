/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 26/56
 * Original lines (combined): 70046-71619
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_World_Demolish_Building_Handler_ea20
          (undefined4 param_1,void *param_2,u8 *param_3,u8 *param_4)
{
  uint uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  char cVar4;
  u16 uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined4 *puVar10;
  void *pvVar11;
  long context;
  u16 x;
  u16 y;
  undefined2 in_stack_0000feba;
  char cStack_23;
  char cStack_1f;
  undefined1 local_12 [0x4];
  int local_e;
  undefined4 local_c;
  u8 *local_8;
  u16 local_4;
  
  x = (u16)param_1;
  y = (u16)((ulong)param_1 >> 0x10);
  uVar5 = Simulator_Validate_Proximity_Interaction_Rules_c3aa
                    (x,y,param_2,(u8 *)param_3,(long)param_4);
  if (uVar5 == 0x0)
  {
    return 0x0;
  }
  uVar5 = Simulator_Handle_Entity_ID_Change_at_Coords_c23e
                    (x,y,param_2,(long)param_3,(long)param_4);
  if (uVar5 == 0x0)
  {
    return 0x0;
  }
  uVar5 = Simulator_Is_Coordinate_Within_Client_Margins_c314
                    (x,y,param_2,(u16)(u8 *)param_3,(u16)((ulong)param_3 >> 0x10),
                     (u8 *)param_4);
  if (uVar5 == 0x0)
  {
    return 0x0;
  }
  local_4 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                      (x,y,param_2,(long)param_4);
  if ((((local_4 == 0x5) || (local_4 == 0x4)) || (local_4 == 0x6)) || (local_4 == 0x9))
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6a8;
    return 0x0;
  }
  if (local_4 != 0x0)
  {
    return 0x1;
  }
  puVar10 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                      (_p_MapContext_5740,param_2,(long)param_4,
                       (undefined1 *)CONCAT22(unaff_SS,local_12));
  local_8 = (u8 *)*puVar10;
  uVar8 = *(uint *)((int)(undefined4 *)puVar10 + 0x2);
  cStack_23 = (char)((ulong)local_8 >> 0x18);
  if (cStack_23 == '\0') goto LAB_1020_eb4e;
  pvVar11 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                      (_p_SimulatorWorldContext,(u8 *)local_8);
  uVar2 = *(undefined4 *)((int)(void *)pvVar11 + 0x2e);
  if ((u8 *)*(long *)((int)uVar2 + 0x4) != param_3)
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b7;
    return 0x0;
  }
  pvVar11 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar11);
  uVar8 = (uint)((ulong)pvVar11 >> 0x10);
  uVar1 = *(uint *)((int)(void *)pvVar11 + 0xc);
  if (uVar1 != 0x41)
  {
    if (0x41 < (int)uVar1)
    {
      if (uVar1 == 0x6b)
      {
        PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b1;
        return 0x0;
      }
      if ((int)uVar1 < 0x6c)
      {
        if (uVar1 == 0x42)
        {
          PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b1;
          return 0x0;
        }
        if (uVar1 == 0x4b)
        {
          PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b1;
          return 0x0;
        }
      }
      else
      {
        if (uVar1 == 0x6e)
        {
          return 0x0;
        }
        if ((0x4 < (int)(uVar1 - 0x6e)) && ((int)(uVar1 - 0x73) < 0x7))
        {
          PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b0;
          return 0x0;
        }
      }
      goto LAB_1020_eb4e;
    }
    if (uVar1 != 0x3e)
    {
      if (uVar1 < 0x3f)
      {
        cVar4 = (char)uVar1;
        if (cVar4 != '\v')
        {
          if (cVar4 == '\x10')
          {
            return 0x0;
          }
          if (cVar4 != '7') goto LAB_1020_eb4e;
        }
        PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b4;
        return 0x0;
      }
      goto LAB_1020_eb4e;
    }
  }
  if (*(int *)((int)(void *)pvVar11 + 0x12) == 0x4)
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b1;
    return 0x0;
  }
LAB_1020_eb4e:
  uVar9 = 0x1000;
  pvVar6 = allocate_memory(CONCAT22(in_stack_0000feba,0xb4));
  uVar8 |= (uint)pvVar6;
  if (uVar8 == 0x0)
  {
    puVar7 = NULL;
    uVar8 = 0x0;
  }
  else
  {
    uVar9 = 0x1040;
    puVar7 = (undefined4 *)UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520();
  }
  local_c = (undefined4 *)CONCAT22(uVar8,puVar7);
  puVar3 = (undefined2 *)((int)*local_c + 0x74);
  local_e = (*(code *)*puVar3)(uVar9,puVar7,uVar8);
  if (local_e != 0x7)
  {
    cStack_1f = (char)((ulong)local_8 >> 0x18);
    if (cStack_1f != '\0')
    {
      pvVar11 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,(u8 *)local_8);
      UI_Component_Free_List_22_Logic_7296(pvVar11);
      UI_Component_Destroy_Internal_List_1E_Logic_730a(pvVar11);
      context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
      UI_Component_Set_FarPtr_at_Offset_28_and_Notify_Logic(context,(long)pvVar11);
      puVar10 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar11);
      uVar9 = (undefined2)((ulong)puVar10 >> 0x10);
      puVar3 = (undefined2 *)((int)*puVar10 + 0x24);
      (*(code *)*puVar3)(0x1030,(undefined4 *)puVar10,uVar9);
      uVar5 = UI_Build_Item_Get_Entity_Property_v96_bc4a((undefined4 *)puVar10,uVar9);
      *(u16 *)(x + 0x24) = uVar5;
      Simulator_Command_KillBldg_ctor_init_e4fa
                ((undefined1 *)CONCAT22(unaff_SS,&stack0xfeba),
                 (void *)*(undefined4 *)((int)(void *)pvVar11 + 0x16));
      Simulator_Global_Process_Build_Event_Type4_835a
                (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,&stack0xfeba));
    }
    return 0x1;
  }
  PTR_DAT_1050_0000_1050_50ca = (undefined *)0x1;
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Syncs a UI build item's display state with its underlying simulator object. Maps
// simulator types to UI state layers.

void __stdcall16far UI_Build_Item_Update_Display_State_Logic_ecb0(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 uStack_8;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)pvVar2 + 0x8));
  uVar1 = (undefined2)((ulong)pvVar4 >> 0x10);
  if (*(int *)((int)pvVar2 + 0x12) != 0x1)
  {
    UI_Build_Item_Map_Simulator_Object_Logic_bf22(this_ptr);
    return;
  }
  if (false)
  {
switchD_1020_ed0e_caseD_4:
    uStack_8 = *(undefined2 *)((int)(void *)pvVar4 + 0x14);
  }
  else
  {
    switch(*(undefined2 *)((int)(void *)pvVar4 + 0x14))
    {
    case 0x2:
    case 0x7:
      uStack_8 = 0x2;
      break;
    case 0x3:
    case 0x8:
      uStack_8 = 0x3;
      break;
    default:
      goto switchD_1020_ed0e_caseD_4;
    case 0x5:
    case 0x6:
      uStack_8 = 0x1;
    }
  }
  *(undefined2 *)((int)pvVar2 + 0x14) = uStack_8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far Simulator_Build_Item_Process_Turn_Finalize_ed3c(void *param_1)
{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int *unaff_SS;
  void *pvVar4;
  undefined1 local_138 [0x112];
  undefined4 local_26;
  undefined4 *local_1e;
  u32 local_1c;
  void *local_18;
  u16 local_14;
  int local_12 [0x3];
  undefined4 local_c;
  undefined2 uStack_8;
  int local_6;
  undefined2 uStack_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  piVar1 = (int *)(iVar2 + 0x14);
  *piVar1 = *piVar1 + -0x1;
  if (*piVar1 == 0x0)
  {
    *(undefined2 *)(iVar2 + 0x12) = 0x0;
    pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    uStack_4 = (undefined2)((ulong)pvVar4 >> 0x10);
    local_6 = (int)pvVar4;
    local_c = *(undefined4 *)(local_6 + 0xc);
    uStack_8 = *(undefined2 *)(local_6 + 0x10);
    local_1e = &local_c;
    unpack_3word_struct(&local_c,unaff_SS,local_12,unaff_SS);
    if (local_12[0x0] < 0x1)
    {
      local_1e = (undefined4 *)0x5;
    }
    else
    {
      local_1e = (undefined4 *)0x6;
    }
    *(undefined2 *)(local_6 + 0x14) = local_1e;
    if (local_12[0x0] < 0x1)
    {
      local_14 = 0x5;
    }
    else
    {
      local_14 = 0x9;
    }
    UI_Build_Item_Submit_Event_Wrapper_ee3a(param_1,local_14);
    local_18 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    local_1c = *(u32 *)((int)local_18 + 0x2e);
    Colony_Subtract_from_Current_Population_at_1A2_5804(local_1c,0x1,0x1);
    if (0x0 < *(int *)(iVar2 + 0x24))
    {
      local_26 = *(undefined4 *)((int)local_1c + 0x4);
      Simulator_Command_AddSpew_ctor_init_68de
                (local_138,unaff_SS,*(undefined2 *)(iVar2 + 0x24),(int)local_26,
                 (int)((ulong)local_26 >> 0x10));
      Simulator_Global_Process_Build_Event_Type4_835a
                (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_138));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Wraps the logic for submitting a confirmed event from a UI build item to the
// simulator.

void __stdcall16far UI_Build_Item_Submit_Event_Wrapper_ee3a(void *this_ptr,u16 event_id)
{
  undefined2 unaff_SS;
  void *pvVar1;
  undefined1 local_13c [0x124];
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined4 local_c;
  undefined2 uStack_8;
  int iStack_6;
  undefined2 uStack_4;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uStack_4 = (undefined2)((ulong)pvVar1 >> 0x10);
  iStack_6 = (int)pvVar1;
  local_c = *(undefined4 *)(iStack_6 + 0xc);
  uStack_8 = *(undefined2 *)(iStack_6 + 0x10);
  pvStack_10 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(this_ptr);
  uStack_14 = *(undefined4 *)(iStack_6 + 0x2e);
  uStack_18 = *(undefined4 *)((int)uStack_14 + 0x4);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_13c,unaff_SS,0x10000,event_id,&local_c,unaff_SS,uStack_18,pvStack_10)
  ;
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_13c));
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
