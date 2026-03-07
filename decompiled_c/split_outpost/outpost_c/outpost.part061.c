/*
 * Source: outpost.c
 * Chunk: 61/117
 * Original lines: 69238-70430
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Dispatches complex interactions. Handles specialized coordinate checks, modal event
// loops for action types 6-9, and coordinate validation for types 2-5. Sets error code
// 0x6AC on failure.

u16 __stdcall16far
Simulator_Complex_Interaction_Dispatcher_df10(u32 arg1,void *coords,long arg3)
{
  u16 uVar1;
  u16 uVar2;
  undefined2 unaff_SS;
  undefined4 *puVar3;
  void *pvVar4;
  u16 y;
  char cStack_1f;
  undefined1 local_e [0x4];
  u8 *puStack_a;
  u16 uStack_6;
  u16 uStack_4;
  
  uStack_4 = 0x0;
  uVar2 = (u16)arg1;
  y = (u16)(arg1 >> 0x10);
  uStack_6 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6(uVar2,y,coords,arg3)
  ;
  if (uStack_6 == 0x0)
  {
    puVar3 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                       (_p_MapContext_5740,coords,arg3,
                        (undefined1 *)CONCAT22(unaff_SS,local_e));
    puStack_a = (u8 *)*puVar3;
    cStack_1f = (char)((ulong)puStack_a >> 0x18);
    if (cStack_1f == '\0')
    {
      return uStack_4;
    }
    pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puStack_a);
    pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar4);
    if (*(int *)((int)pvVar4 + 0xc) != 0x6a)
    {
      return uStack_4;
    }
    uVar1 = UI_Construction_Item_Check_Cost_Against_Resources_e044(arg1);
    if (uVar1 == 0x0)
    {
      *(undefined2 *)(uVar2 + 0x24) = 0x1;
      return 0x1;
    }
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6ac;
switchD_1020_e028_caseD_0:
    uStack_4 = 0x0;
  }
  else
  {
    if ((int)uStack_6 < 0x6)
    {
      return uStack_4;
    }
    if (SBORROW2(uStack_6,0x6))
    {
      return uStack_4;
    }
    if (0x3 < (int)(uStack_6 - 0x6))
    {
      return uStack_4;
    }
    Simulator_Enter_Modal_Event_Loop_de32(arg1,uStack_6);
    switch(*(undefined2 *)(uVar2 + 0x24))
    {
    case 0x0:
      goto switchD_1020_e028_caseD_0;
    case 0x1:
      uVar2 = UI_Construction_Item_Check_Cost_Against_Resources_e044(arg1);
      if (uVar2 != 0x0)
      {
        PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6ac;
      }
      break;
    case 0x2:
    case 0x3:
    case 0x4:
    case 0x5:
      uVar2 = Simulator_Validate_Placement_at_Coordinates_e652
                        (arg1,(u32 *)coords,(u16)((ulong)coords >> 0x10),arg3);
      if (uVar2 == 0x0)
      {
        return uStack_4;
      }
    case 0x6:
      uStack_4 = 0x1;
    }
  }
  return uStack_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if the resource cost of a construction item (retrieved from its linked
// resource) is within the current available planetary resources.

u16 __stdcall16far UI_Construction_Item_Check_Cost_Against_Resources_e044(u32 this_ptr)
{
  undefined4 uVar1;
  u16 uVar2;
  undefined2 uVar3;
  u8 *puVar4;
  void *entity_ptr;
  
  uVar3 = (undefined2)(this_ptr >> 0x10);
  puVar4 = (u8 *)UI_Component_Get_FarPtr_at_Offset_16_Logic
                           (*(long *)((int)this_ptr + 0x28));
  entity_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)puVar4);
  uVar2 = Simulator_Get_Entity_Resource_Category_ID_2fac(entity_ptr);
  uVar1 = *(undefined4 *)((int)this_ptr + 0x28);
  if ((int)uVar2 <= *(int *)((int)uVar1 + 0x1e))
  {
    return 0x1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Executes the final steps of a construction operation. Handles type cycling, neighbor
// notification (dca8), resource consumption, and simulator event submission (e39c).
// Involves special handling for type 0x6A.

void __stdcall16far Simulator_Process_Final_Construction_Steps_e08e(void *this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined2 uVar4;
  int *unaff_SS;
  void *this_ptr_00;
  int *piVar5;
  int *piVar6;
  u16 *puVar7;
  u16 type;
  int *piVar8;
  undefined2 local_158;
  undefined2 uStack_156;
  undefined4 uStack_32;
  undefined4 *puStack_2a;
  int local_22 [0x3];
  void *pvStack_1c;
  undefined2 uStack_1a;
  int local_18;
  u16 local_16;
  u8 *puStack_14;
  undefined4 local_10;
  int iStack_c;
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = (void *)this_ptr;
  iVar1 = *(int *)((int)pvVar3 + 0xc);
  if (iVar1 == 0x74)
  {
    if (*(int *)((int)pvVar3 + 0x24) == 0x1) goto LAB_1020_e0ae;
    if (*(int *)((int)pvVar3 + 0x24) != 0x6) goto LAB_1020_e0b9;
    type = 0x1;
  }
  else if (iVar1 == 0x78)
  {
    iVar1 = *(int *)((int)pvVar3 + 0x24);
    if (iVar1 != 0x1)
    {
      if ((0x0 < iVar1 + -0x1) && (!SBORROW2(iVar1 + -0x1,0x1)))
      {
        if (iVar1 == 0x5 || iVar1 + -0x2 < 0x3)
        {
          Simulator_Cycle_Construction_Event_Type_e49a(this_ptr);
        }
        else if (iVar1 == 0x6)
        {
          Simulator_Submit_Construction_Event_with_AutoType_e39c(this_ptr,0x6);
          Simulator_Scan_All_Neighbors_and_Notify_dca8(this_ptr);
        }
      }
      goto LAB_1020_e0b9;
    }
    type = 0x6a;
  }
  else
  {
    if (iVar1 == 0x79)
    {
      Simulator_Cycle_Construction_Event_Type_e49a(this_ptr);
      return;
    }
LAB_1020_e0ae:
    type = 0x47;
  }
  Simulator_Submit_Construction_Event_with_AutoType_e39c(this_ptr,type);
LAB_1020_e0b9:
  uStack_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar2 = (undefined2)((ulong)uStack_6 >> 0x10);
  uStack_a = *(undefined4 *)((int)(void *)uStack_6 + 0x2e);
  if (*(int *)((int)pvVar3 + 0xc) != 0x79)
  {
    Colony_Subtract_from_Current_Population_at_1A2_5804
              (CONCAT22(*(undefined2 *)((int)(void *)uStack_6 + 0x30),(int)uStack_a),0x1
               ,0x2);
  }
  if (*(int *)((int)pvVar3 + 0x24) == 0x6)
  {
    Colony_Decrement_Population_Category_at_14E_Logic
              ((uint16_t)uStack_a,(uint16_t)((ulong)uStack_a >> 0x10),0x1,0x2);
  }
  local_10 = *(undefined4 *)((int)(void *)uStack_6 + 0xc);
  iStack_c = *(int *)((int)(void *)uStack_6 + 0x10);
  puStack_2a = &local_10;
  if ((*(int *)((int)pvVar3 + 0x24) == 0x6) && (iStack_c == 0x0))
  {
    return;
  }
  puStack_14 = (u8 *)*(undefined4 *)((int)*(undefined4 *)((int)pvVar3 + 0x28) + 0x20);
  puVar7 = &local_16;
  piVar5 = &local_18;
  piVar6 = unaff_SS;
  piVar8 = unaff_SS;
  this_ptr_00 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,(u8 *)puStack_14);
  uStack_1a = (undefined2)((ulong)this_ptr_00 >> 0x10);
  pvStack_1c = (void *)this_ptr_00;
  UI_Production_Item_Get_Coords_Logic_5b1c
            (this_ptr_00,(int *)CONCAT22(piVar6,piVar5),(u16 *)CONCAT22(piVar8,puVar7));
  UI_Build_Item_Move_Coordinate_by_Direction_c8ee
            (this_ptr,*(undefined2 *)((int)pvVar3 + 0x24),&local_10,unaff_SS);
  unpack_3word_struct(&local_10,unaff_SS,local_22,unaff_SS);
  if (*(int *)((int)pvVar3 + 0x24) == 0x1)
  {
    if (local_18 < local_22[0x0])
    {
      Simulator_Update_Entity_Production_Metrics_5b3e
                ((u32)CONCAT22(uStack_1a,pvStack_1c),local_22[0x0],local_16);
      UI_Production_Item_Get_Coords_Logic_5b1c
                ((void *)CONCAT22(uStack_1a,pvStack_1c),
                 (int *)CONCAT22(unaff_SS,&local_18),(u16 *)CONCAT22(unaff_SS,&local_16)
                );
    }
    uStack_32 = *(undefined4 *)((int)uStack_a + 0x4);
    Simulator_Command_InternalPutBldg_ctor_init_87f0
              (&local_158,unaff_SS,0x0,0x6a0000,&local_10,unaff_SS,(int)uStack_32,
               (int)((ulong)uStack_32 >> 0x10),(int)puStack_14,
               (int)((ulong)puStack_14 >> 0x10));
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_158));
    local_158 = 0x389a;
    uStack_156 = 0x1008;
  }
  UI_Build_Item_Auto_Place_Neighbor_Buildings_ccd0(this_ptr,(u16 *)&local_10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Specialized interaction handler for types 2-5. Resolves entity name, submits
// interaction event 0x79, and updates internal state flags.

void __stdcall16far Simulator_Handle_Type_2_5_Interaction_Cycle_e294(void *this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined4 *puVar4;
  char cStack_15b;
  undefined1 local_150 [0xc];
  undefined4 *puStack_144;
  undefined1 local_140 [0x124];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined2 uStack_c;
  int iStack_a;
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  if ((0x1 < *(int *)(iVar1 + 0x24)) && (*(int *)(iVar1 + 0x24) < 0x6))
  {
    uStack_6 = *(undefined4 *)((int)*(undefined4 *)(iVar1 + 0x28) + 0x20);
    pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    uStack_8 = (undefined2)((ulong)pvVar3 >> 0x10);
    iStack_a = (int)pvVar3;
    local_10 = *(undefined4 *)(iStack_a + 0xc);
    uStack_c = *(undefined2 *)(iStack_a + 0x10);
    puStack_144 = &local_10;
    UI_Build_Item_Move_Coordinate_by_Direction_c8ee();
    puVar4 = Simulator_Get_Map_Cell_Data_c89c
                       (this_ptr,(undefined4 *)CONCAT22(unaff_SS,&local_10),
                        (undefined1 *)CONCAT22(unaff_SS,local_150));
    uStack_14 = *puVar4;
    cStack_15b = (char)((ulong)uStack_14 >> 0x18);
    if ((cStack_15b == '\0') && ((int)uStack_14 == 0x9))
    {
      *(undefined2 *)(iVar1 + 0x14) = 0x1;
    }
    uStack_18 = *(undefined4 *)(iStack_a + 0x2e);
    uStack_1c = *(undefined4 *)((int)uStack_18 + 0x4);
    Simulator_Command_InternalPutBldg_ctor_init_87f0
              (local_140,unaff_SS,0x0,*(int *)(iVar1 + 0x14) + 0x1,0x79,&local_10,
               unaff_SS,uStack_1c,uStack_6);
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_140));
  }
  *(undefined2 *)(iVar1 + 0x26) = 0x1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Submits a construction event to the simulator. Automatically determines the internal
// sub-type (5 or 6) based on whether the object count at offset 0x10 is less than 1.

void __stdcall16far
Simulator_Submit_Construction_Event_with_AutoType_e39c(void *this_ptr,u16 type)
{
  undefined4 uVar1;
  void *pvVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined1 local_13c [0x124];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  int iStack_8;
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar4 = (undefined2)((ulong)pvStack_6 >> 0x10);
  pvVar2 = (void *)pvStack_6;
  local_c = *(undefined4 *)((int)pvVar2 + 0xc);
  iStack_8 = *(int *)((int)pvVar2 + 0x10);
  if (iStack_8 < 0x1)
  {
    uVar3 = 0x5;
  }
  else
  {
    uVar3 = 0x6;
  }
  *(undefined2 *)((int)pvVar2 + 0x14) = uVar3;
  uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x28);
  uStack_10 = *(undefined4 *)((int)uVar1 + 0x20);
  uStack_14 = *(undefined4 *)((int)pvVar2 + 0x2e);
  uStack_18 = *(undefined4 *)((int)uStack_14 + 0x4);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_13c,unaff_SS,0x10000,type,&local_c,unaff_SS,uStack_18,uStack_10);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_13c));
  return;
}



void __stdcall16far Simulator_Build_Item_Process_Cycle_e44c(void *param_1)
{
  void *pvVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar1 = (void *)param_1;
  if (*(int *)((int)pvVar1 + 0x12) == 0x2)
  {
    *(int *)((int)pvVar1 + 0x14) = *(int *)((int)pvVar1 + 0x14) + -0x1;
    if ((*(int *)((int)pvVar1 + 0x26) == 0x0) && (*(int *)((int)pvVar1 + 0xc) == 0x78))
    {
      Simulator_Handle_Type_2_5_Interaction_Cycle_e294(param_1);
    }
    if (*(int *)((int)pvVar1 + 0x14) == 0x0)
    {
      Simulator_Process_Final_Construction_Steps_e08e(param_1);
      return;
    }
    if (*(int *)((int)pvVar1 + 0x24) == 0x6)
    {
      *(undefined2 *)((int)pvVar1 + 0xe) = 0x49;
    }
  }
  return;
}



// Cycles the current construction event through its available sub-types (mapping 6->9,
// 7->6, 8->7, 9->8) and re-submits the event.

void __stdcall16far Simulator_Cycle_Construction_Event_Type_e49a(void *this_ptr)
{
  int iVar1;
  void *pvVar2;
  undefined2 uStack_a;
  
  pvVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  iVar1 = *(int *)((int)pvVar2 + 0x14);
  uStack_a = 0x0;
  if (iVar1 == 0x6)
  {
    uStack_a = 0x9;
  }
  else if (iVar1 == 0x7)
  {
    uStack_a = 0x6;
  }
  else if (iVar1 == 0x8)
  {
    uStack_a = 0x7;
  }
  else if (iVar1 == 0x9)
  {
    uStack_a = 0x8;
  }
  Simulator_Submit_Construction_Event_with_AutoType_e39c(this_ptr,uStack_a);
  return;
}



// Maps an entity type ID to a specific display layer or priority value (e.g. 4 for
// types 2, 5, 6, 7; 5 for types 3, 8).

int __stdcall16far
Simulator_Get_Display_Layer_from_Type_e4fa(void *this_ptr,u16 entity_type)
{
  void *pvVar1;
  undefined2 uStack_4;
  
  if (false)
  {
switchD_1020_e53c_caseD_4:
    pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    uStack_4 = *(int *)((int)(void *)pvVar1 + 0x14) + 0x2;
  }
  else
  {
    switch(entity_type)
    {
    case 0x2:
    case 0x5:
    case 0x6:
    case 0x7:
      uStack_4 = 0x4;
      break;
    case 0x3:
    case 0x8:
      uStack_4 = 0x5;
      break;
    default:
      goto switchD_1020_e53c_caseD_4;
    }
  }
  return uStack_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far Simulator_Build_Item_Calculate_Display_Layer_e558(void *param_1)
{
  u8 *puVar1;
  u8 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  void *pvVar6;
  undefined4 *puVar7;
  char cStack_2d;
  undefined1 local_24 [0xc];
  u8 *local_18;
  u8 *local_14;
  undefined4 local_10;
  undefined2 uStack_c;
  int local_a;
  u8 *local_8;
  void *local_6;
  undefined2 uStack_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar4 = (void *)param_1;
  if (*(int *)((int)pvVar4 + 0xc) == 0x79)
  {
    *(undefined2 *)((int)pvVar4 + 0x14) = *(undefined2 *)((int)pvVar4 + 0x24);
    *(undefined2 *)((int)pvVar4 + 0x24) = 0x0;
  }
  if (*(int *)((int)pvVar4 + 0x24) != 0x6)
  {
    pvVar6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    uStack_4 = (undefined2)((ulong)pvVar6 >> 0x10);
    local_6 = (void *)pvVar6;
    local_8 = (u8 *)*(u16 *)((int)local_6 + 0x14);
    local_a = Simulator_Get_Display_Layer_from_Type_e4fa(param_1,(u16)local_8);
    local_10 = *(undefined4 *)((int)local_6 + 0xc);
    uStack_c = *(undefined2 *)((int)local_6 + 0x10);
    local_18 = (u8 *)CONCAT22(local_18._2_2_,&local_10);
    UI_Build_Item_Move_Coordinate_by_Direction_c8ee();
    puVar7 = Simulator_Get_Map_Cell_Data_c89c
                       (param_1,(undefined4 *)CONCAT22(unaff_SS,&local_10),
                        (undefined1 *)CONCAT22(unaff_SS,local_24));
    local_18 = (u8 *)*puVar7;
    cStack_2d = (char)((ulong)local_18 >> 0x18);
    local_14._0_2_ = (u8 *)local_18;
    puVar2 = (u8 *)local_14;
    puVar1 = local_18;
    if (cStack_2d != '\0')
    {
      local_14 = local_18;
      pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,puVar2);
      puVar2 = (u8 *)*(u16 *)((int)(void *)pvVar6 + 0x14);
      puVar1 = local_14;
    }
    local_14 = puVar1;
    local_8 = puVar2;
    iVar3 = Simulator_Get_Display_Layer_from_Type_e4fa(param_1,(u16)puVar2);
    *(int *)((int)pvVar4 + 0x14) = local_a + iVar3;
    return;
  }
  *(undefined2 *)((int)pvVar4 + 0x14) = 0x1;
  return;
}



// Validates if a placement interaction is valid at the specified coordinates by
// performing multi-stage proximity and state checks.

u16 __stdcall16far
Simulator_Validate_Placement_at_Coordinates_e652
          (u32 arg1,u32 *coords,u16 arg3,long arg4)
{
  u16 uVar1;
  undefined2 unaff_SS;
  u32 local_8;
  undefined2 uStack_4;
  
  local_8 = *coords;
  uStack_4 = (undefined2)coords[0x1];
  UI_Build_Item_Move_Coordinate_by_Direction_c8ee();
  uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                    ((u16)arg1,(u16)(arg1 >> 0x10),(u32 *)CONCAT22(unaff_SS,&local_8),
                     arg4);
  return (uint)(uVar1 != 0x0);
}



// Serializes construction item state to a file, specifically writing two 2-byte fields
// at offsets 0x24 and 0x26. Sets global error code 0x6D0 on failure.

u16 __stdcall16far
UI_Construction_Item_Save_to_File_Logic_e6a4(void *this_ptr,void *file_ctx)
{
  int iVar1;
  undefined2 uVar2;
  void *unaff_SS;
  undefined2 local_c [0x3];
  undefined2 local_6 [0x2];
  
  iVar1 = UI_Build_Item_TypeE036_Save_to_File_Logic_de7c(this_ptr,file_ctx);
  if (iVar1 != 0x0)
  {
    uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
    local_c[0x0] = *(undefined2 *)((int)this_ptr + 0x24);
    iVar1 = file_write_check((long)file_ctx,local_c,unaff_SS);
    if (iVar1 != 0x0)
    {
      local_6[0x0] = *(undefined2 *)((int)this_ptr + 0x26);
      iVar1 = file_write_check((long)file_ctx,local_6,unaff_SS);
      if (iVar1 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



undefined2 __stdcall16far
UI_Build_Item_TypeE036_Deserialize_and_Update_e70e(u32 param_1,void *param_2)
{
  int iVar1;
  void *handle_wrapper;
  
  iVar1 = UI_Build_Item_TypeE036_Load_from_File_Logic_dec4(param_1,(void *)param_2);
  if (iVar1 != 0x0)
  {
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar1 = file_read_check((long)param_2,(void *)((int)param_1 + 0x24),handle_wrapper);
    if (iVar1 != 0x0)
    {
      iVar1 = file_read_check((long)param_2,(void *)((int)param_1 + 0x26),handle_wrapper
                             );
      if (iVar1 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



void * __stdcall16far
UI_Build_Item_TypeE036_dtor_Scalar_Deleting_e76c(void *param_1,byte param_2)
{
  UI_Build_Item_TypeE036_dtor_Internal_dcf4(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 59. Initializes base class and sets vtable to
// 0xE88E.

void * __stdcall16far UI_Build_Item_Type59_ctor_init_e7fa(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0xe88e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 59. Initializes base class and sets
// vtable to 0xE88E.

void * __stdcall16far
UI_Build_Item_Type59_ctor_with_Params_e81c
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xe88e;
  param_1[0x1] = 0x1020;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Internal destructor for UI Build Item Type 59. Reverts vtable and calls base cleanup.

void __stdcall16far UI_Build_Item_Type59_dtor_Internal_e846(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0xe88e;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1020;
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  return;
}



void __stdcall16far void_noop_stub_1020_e864(void)
{
  return;
}



void * __stdcall16far
UI_Build_Item_Type59_dtor_Scalar_Deleting_e868(void *param_1,byte param_2)
{
  UI_Build_Item_Type59_dtor_Internal_e846(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Construction Item Type 60. Initializes base class, sets field 0x24
// to 0, and sets vtable to 0xEEF6.

void * __stdcall16far UI_Construction_Item_Type60_ctor_init_e8f6(void *this_ptr)
{
  undefined2 uVar1;
  
  UI_Build_Item_TypeE036_ctor_init_dc96(this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x24) = 0x0;
  *(undefined2 *)this_ptr = 0xeef6;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1020;
  return this_ptr;
}



// Parameterized constructor for UI Construction Item Type 60. Initializes base class
// and sets vtable to 0xEEF6.

void * __stdcall16far
UI_Construction_Item_Type60_ctor_with_Params_e91e
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_TypeE036_ctor_with_Params_dcc2
            (param_1,CONCAT22(param_3,param_2),param_4);
  param_1[0x12] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xeef6;
  param_1[0x1] = 0x1020;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



undefined2 __stdcall16far
UI_Build_Item_TypeE036_Serialize_and_Update_e94e(void *param_1,void *param_2)
{
  int iVar1;
  undefined2 uVar2;
  void *unaff_SS;
  undefined2 local_c [0x5];
  
  iVar1 = UI_Build_Item_TypeE036_Save_to_File_Logic_de7c(param_1,param_2);
  uVar2 = 0x0;
  if (iVar1 != 0x0)
  {
    local_c[0x0] = *(undefined2 *)((int)(void *)param_1 + 0x24);
    iVar1 = file_write_check((long)param_2,local_c,unaff_SS);
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    uVar2 = 0x1;
  }
  return uVar2;
}



undefined2 __stdcall16far
UI_Build_Item_TypeE036_Deserialize_and_Update_e994(u32 param_1,void *param_2)
{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = UI_Build_Item_TypeE036_Load_from_File_Logic_dec4(param_1,(void *)param_2);
  uVar2 = 0x0;
  if (iVar1 != 0x0)
  {
    iVar1 = file_read_check((long)param_2,(void *)((int)param_1 + 0x24),
                            (void *)(param_1 >> 0x10));
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    uVar2 = 0x1;
  }
  return uVar2;
}



void __stdcall16far
UI_Build_Item_TypeE036_Register_and_Inc_Population_e9d4
          (void *param_1,undefined2 param_2)
{
  void *pvVar1;
  
  UI_Build_Item_TypeE036_Register_with_Parent_Hub_df0c
            ((void *)CONCAT22(param_2,param_1));
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e
                     ((void *)CONCAT22(param_2,param_1));
  Colony_Add_to_Current_Population_at_1A2_57dc
            ((void *)*(undefined4 *)((int)(void *)pvVar1 + 0x2e),0x1,0x1);
  return;
}



// Processes a type 1 event for a UI build item, likely related to selection or state
// confirmation.

void __stdcall16far UI_Build_Item_Process_Event_Type1_Logic_ea0e(void *this_ptr)
{
  UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x1);
  return;
}



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



void * __stdcall16far
UI_Build_Item_TypeE036_dtor_Scalar_Deleting_eed0(void *param_1,byte param_2)
{
  UI_Build_Item_TypeE036_dtor_Internal_dcf4(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Alternative internal destructor for UI Build Items that resets vtable to 0x1028:0000.

void __stdcall16far UI_Build_Item_Base_dtor_Internal_Alternative_ef5e(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0x0;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  return;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_ef94(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_Alternative_ef5e(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}
