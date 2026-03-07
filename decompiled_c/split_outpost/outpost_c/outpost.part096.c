/*
 * Source: outpost.c
 * Chunk: 96/117
 * Original lines: 109483-110674
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Recalculates colony morale based on resource group balances (Groups 1-4). Adjusts the
// morale counter at offset 0x24 and maps it to a discrete morale level (0xC-0x14) which
// is then set in the colony object. Considers specific building presence (group 0x16)
// as a bonus.

void __stdcall16far
Simulator_Calculate_Colony_Morale_Shift_45e4(void *colony_window_ptr)
{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  u32 *puVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  u16 uStack_1c;
  undefined4 uStack_16;
  
  uVar12 = (undefined2)((ulong)colony_window_ptr >> 0x10);
  pvVar9 = (void *)colony_window_ptr;
  lVar13 = Colony_Calculate_Sum_Resource_Group_38f2
                     ((void *)*(undefined4 *)((int)pvVar9 + 0x1f6),0x2);
  lVar14 = Colony_Calculate_Sum_Resource_Group_38f2
                     ((void *)*(undefined4 *)((int)pvVar9 + 0x1f6),0x1);
  uVar10 = (uint)lVar13 - (uint)lVar14;
  lVar15 = Colony_Calculate_Sum_Resource_Group_38f2
                     ((void *)*(undefined4 *)((int)pvVar9 + 0x1f6),0x4);
  lVar16 = Colony_Calculate_Sum_Resource_Group_38f2
                     ((void *)*(undefined4 *)((int)pvVar9 + 0x1f6),0x3);
  uVar11 = (uint)lVar15 - (uint)lVar16;
  uVar1 = *(uint *)((int)pvVar9 + 0x24);
  uVar4 = uVar1 + uVar11;
  iVar7 = ((int)uVar1 >> 0xf) +
          (((int)((ulong)lVar15 >> 0x10) - (int)((ulong)lVar16 >> 0x10)) -
          (uint)((uint)lVar15 < (uint)lVar16)) + (uint)CARRY2(uVar1,uVar11) +
          (((int)((ulong)lVar13 >> 0x10) - (int)((ulong)lVar14 >> 0x10)) -
          (uint)((uint)lVar13 < (uint)lVar14)) + (uint)CARRY2(uVar4,uVar10);
  if ((iVar7 < 0x0) || ((iVar7 < 0x1 && (uVar4 + uVar10 == 0x0))))
  {
    iVar5 = -0x1;
  }
  else
  {
    iVar5 = 0x1;
  }
  *(int *)((int)pvVar9 + 0x24) = *(int *)((int)pvVar9 + 0x24) + iVar5;
  puVar6 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar8 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     (colony_window_ptr,puVar6,iVar7);
  uStack_16 = (undefined4 *)CONCAT22(puVar8,puVar6);
  puVar3 = (undefined2 *)*uStack_16;
  puVar2 = (undefined2 *)puVar3 + 0x8;
  iVar7 = (*(code *)*puVar2)(0x1008,puVar6,puVar8);
  if (uStack_16 != NULL)
  {
    puVar2 = (undefined2 *)puVar3;
    (*(code *)*puVar2)(0x1008,puVar6,puVar8,0x1);
  }
  *(int *)((int)pvVar9 + 0x24) = *(int *)((int)pvVar9 + 0x24) + iVar7 * 0x2;
  iVar7 = *(int *)((int)pvVar9 + 0x24);
  if (0x64 < iVar7)
  {
    iVar7 = 0x64;
  }
  *(int *)((int)pvVar9 + 0x24) = iVar7;
  if (iVar7 < 0x0)
  {
    iVar7 = 0x0;
  }
  *(int *)((int)pvVar9 + 0x24) = iVar7;
  iVar7 /= 0xa;
  uStack_1c = 0x10;
  if (iVar7 < 0xb)
  {
    uStack_1c = 0x14;
  }
  else if (iVar7 < 0x15)
  {
    uStack_1c = 0x13;
  }
  else if (iVar7 < 0x1f)
  {
    uStack_1c = 0x12;
  }
  else if (iVar7 < 0x29)
  {
    uStack_1c = 0x11;
  }
  else if (iVar7 < 0x33)
  {
    uStack_1c = 0x10;
  }
  else if (iVar7 < 0x3d)
  {
    uStack_1c = 0xf;
  }
  else if (iVar7 < 0x47)
  {
    uStack_1c = 0xe;
  }
  else if (iVar7 < 0x51)
  {
    uStack_1c = 0xd;
  }
  else if (iVar7 < 0x5b)
  {
    uStack_1c = 0xc;
  }
  Colony_Set_Metric_Offset_1AE((void *)*(undefined4 *)((int)pvVar9 + 0x1f6),uStack_1c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates the colony's safety or security rating (offset 0x22). Considers
// police/military building presence (group 0x26), neighbor entity status, and current
// population levels. Morale (45E4) acts as a secondary factor. Caps rating at 100.

void __stdcall16far
Simulator_Calculate_Colony_Safety_Rating_4760(void *colony_window_ptr)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  u16 uVar5;
  undefined2 in_DX;
  u32 *puVar6;
  u32 *puVar7;
  u32 *puVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  long lVar12;
  void *this_ptr;
  undefined4 *entity_id;
  undefined4 *puVar13;
  ulong uStack_1a;
  ulong uStack_16;
  undefined4 uStack_e;
  undefined4 uStack_a;
  
  uVar10 = (undefined2)((ulong)colony_window_ptr >> 0x10);
  iVar9 = (int)colony_window_ptr;
  *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + *(int *)(iVar9 + 0x20c);
  puVar2 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar6 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     (colony_window_ptr,puVar2,in_DX);
  uStack_a = (undefined4 *)CONCAT22(puVar6,puVar2);
  uVar11 = 0x1008;
  puVar7 = puVar6;
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar8 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     (colony_window_ptr,puVar3,puVar7);
  uStack_e = (undefined4 *)CONCAT22(puVar8,puVar3);
  puVar1 = (undefined2 *)((int)*uStack_e + 0x10);
  lVar12 = (*(code *)*puVar1)(0x1008,puVar3,puVar8);
  puVar13 = puVar2;
  puVar7 = puVar6;
  if (lVar12 == 0x0)
  {
    puVar1 = (undefined2 *)((int)*uStack_a + 0x10);
    iVar4 = (*(code *)*puVar1)();
    *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + iVar4;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*uStack_a + 0x10);
    uStack_16 = (*(code *)*puVar1)();
    for (uStack_1a = 0x0; uStack_1a < uStack_16; uStack_1a += 0x1)
    {
      entity_id = uStack_e;
      this_ptr = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_a);
      uVar11 = 0x1028;
      uVar5 = UI_Build_Item_Get_Neighbor_Entity_Status_5a94(this_ptr,entity_id);
      if (uVar5 == 0x2)
      {
        if ((*_p_SimulatorWorldContext & 0x1) == 0x0) goto LAB_1038_485e;
      }
      else if (uVar5 != 0x3)
      {
LAB_1038_485e:
        *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + 0x1;
      }
    }
  }
  if (uStack_a != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_a)
              (uVar11,puVar2,puVar6,0x1,puVar13,puVar7);
  }
  if (uStack_e != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_e)(uVar11,puVar3,puVar8,0x1);
  }
  Simulator_Calculate_Colony_Morale_Shift_45e4(colony_window_ptr);
  if (0x32 < *(int *)(iVar9 + 0x24))
  {
    *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + -0x1;
  }
  if (*(int *)(iVar9 + 0x24) < 0x32)
  {
    *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + 0x1;
  }
  if (*(int *)(iVar9 + 0x18) < 0xfa)
  {
    *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + 0x2;
  }
  else if (*(int *)(iVar9 + 0x18) < 0x1c2)
  {
    *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + 0x1;
  }
  else if (0x225 < *(int *)(iVar9 + 0x18))
  {
    if (*(int *)(iVar9 + 0x18) < 0x2ee)
    {
      *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + -0x1;
    }
    else
    {
      *(int *)(iVar9 + 0x22) = *(int *)(iVar9 + 0x22) + -0x2;
    }
  }
  iVar4 = *(int *)(iVar9 + 0x22);
  if (0x64 < iVar4)
  {
    iVar4 = 0x64;
  }
  *(int *)(iVar9 + 0x22) = iVar4;
  if (iVar4 < 0x0)
  {
    iVar4 = 0x0;
  }
  *(int *)(iVar9 + 0x22) = iVar4;
  return;
}



void __stdcall16far
Simulator_Entity_Increment_SubCounter_20E_48e0(void *this_ptr,int amount)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = *(int *)((int)(void *)this_ptr + 0x20e) + amount;
  if (0xa < iVar1)
  {
    iVar1 = 0xa;
  }
  *(int *)((int)(void *)this_ptr + 0x20e) = iVar1;
  return;
}



void __stdcall16far Simulator_Entity_Decrement_SubCounter_20E_4900(void *this_ptr)
{
  int *piVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  piVar1 = (int *)((int)this_ptr + 0x20e);
  *piVar1 = *piVar1 + -0x1;
  if (*piVar1 < 0x0)
  {
    *(undefined2 *)((int)this_ptr + 0x20e) = 0x0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles periodic automated building expansion for the planetary hub. Based on a timer
// (offset 0x20E) and current tick, selects coordinates from the hub's internal list and
// triggers building placement (Type 0x10). Validates that the target site is not
// already occupied.

void __stdcall16far Simulator_Process_Periodic_Building_Expansion_4918(u32 colony_ptr)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 *puVar6;
  void *pvVar7;
  char cStack_15b;
  undefined1 local_14a [0x4];
  undefined4 *puStack_146;
  undefined1 local_144 [0x124];
  undefined4 local_20;
  undefined2 uStack_1c;
  u8 *puStack_1a;
  undefined4 uStack_12;
  ulong uStack_e;
  undefined4 uStack_a;
  void *pvStack_6;
  
  uVar4 = (undefined2)(colony_ptr >> 0x10);
  iVar2 = (int)colony_ptr;
  if (*(long *)(iVar2 + 0x4) != 0x4000001)
  {
    return;
  }
  pvStack_6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,
                         (u8 *)(u8 *)*(undefined4 *)(iVar2 + 0x8));
  uStack_a = *(undefined4 *)((int)pvStack_6 + 0x10);
  uVar5 = (undefined2)((ulong)uStack_a >> 0x10);
  iVar3 = (int)uStack_a;
  if (*(int *)(iVar3 + 0x1c) == 0x0)
  {
    return;
  }
  uStack_e = 0x0;
  switch(*(undefined2 *)(iVar2 + 0x20e))
  {
  case 0x1:
    uStack_e._0_2_ = 0x1e;
    break;
  case 0x2:
    uStack_e._0_2_ = 0x1c;
    break;
  case 0x3:
    uStack_e._0_2_ = 0x1a;
    break;
  case 0x4:
    uStack_e._0_2_ = 0x18;
    break;
  case 0x5:
    uStack_e._0_2_ = 0x16;
    break;
  case 0x6:
    uStack_e._0_2_ = 0x14;
    break;
  case 0x7:
    uStack_e._0_2_ = 0x12;
    break;
  case 0x8:
    uStack_e._0_2_ = 0x10;
    break;
  case 0x9:
    uStack_e._0_2_ = 0xe;
    break;
  case 0xa:
    uStack_e._0_2_ = 0xc;
    break;
  default:
    goto switchD_1038_49cf_default;
  }
  uStack_e = (ulong)(uint)uStack_e;
switchD_1038_49cf_default:
  uStack_12 = *_p_SimulatorWorldContext;
  if (((uint)uStack_e != 0x0) &&
     ((int)(CONCAT22(*(undefined2 *)((int)(undefined4 *)_p_SimulatorWorldContext + 0x2),
                     (undefined2)uStack_12) % uStack_e) == 0x0))
  {
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + -0x1;
    *(int *)(iVar3 + 0x1a) = *(int *)(iVar3 + 0x1a) + 0x1;
    iVar1 = *(int *)(iVar3 + 0x1a) * 0x6 + *(int *)(iVar3 + 0x16);
    local_20 = *(undefined4 *)(iVar1 + -0x6);
    uStack_1c = *(undefined2 *)(iVar1 + -0x2);
    puStack_146 = &local_20;
    puVar6 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                       (_p_MapContext_5740,(undefined4 *)CONCAT22(unaff_SS,&local_20),
                        *(long *)(iVar2 + 0x8),
                        (undefined1 *)CONCAT22(unaff_SS,local_14a));
    puStack_1a = (u8 *)*puVar6;
    cStack_15b = (char)((ulong)puStack_1a >> 0x18);
    if (cStack_15b != '\0')
    {
      pvVar7 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)puStack_1a);
      pvVar7 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar7);
      iVar3 = (int)((ulong)pvVar7 >> 0x10);
      if (iVar3 != 0x0 || (int)pvVar7 != 0x0)
      {
        iVar3 = *(int *)((int)pvVar7 + 0xc);
        if (iVar3 < 0x1)
        {
          return;
        }
        if (SBORROW2(iVar3,0x1))
        {
          return;
        }
        if (0x8 < iVar3 + -0x1)
        {
          return;
        }
      }
    }
    Simulator_Command_InternalPutBldg_ctor_init_87f0
              (local_144,unaff_SS,0x0,0x100000,&local_20,unaff_SS,
               *(undefined4 *)(iVar2 + 0x4),*(undefined4 *)(iVar2 + 0x8));
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_144));
  }
  return;
}



void __stdcall16far
UI_Planet_View_List_Update_State_Wrapper_4b20(void *this_ptr,void *arg2,long entity_id)
{
  UI_Planet_View_List_Update_Item_State_from_Resource_c4f4
            ((void *)*(undefined4 *)((int)(void *)this_ptr + 0xc),(u16)(void *)arg2,
             (u16)((ulong)arg2 >> 0x10),entity_id);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through a managed entity list and sums the production value (offset 0x8C)
// for all active or under-construction buildings.

long __stdcall16far Simulator_Sum_Entity_List_Production_4b40(void *this_ptr)
{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  astruct_156 *uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  ulong uVar6;
  u8 *puVar7;
  void *this_ptr_00;
  void *uVar9;
  long lStack_1e;
  ulong uStack_e;
  long lStack_6;
  
  lStack_6 = 0x0;
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_156 *)this_ptr;
  if (uVar4->field12_0xc == NULL)
  {
    uVar6 = 0x0;
  }
  else
  {
    puVar2 = (undefined2 *)((int)*uVar4->field12_0xc + 0x10);
    uVar6 = (*(code *)*puVar2)();
  }
  for (uStack_e = 0x0; uStack_e < uVar6; uStack_e += 0x1)
  {
    puVar2 = (undefined2 *)((int)*uVar4->field12_0xc + 0x4);
    puVar7 = (u8 *)(*(code *)*puVar2)(unaff_CS,uVar4->field12_0xc,uStack_e);
    if (puVar7 != NULL)
    {
      this_ptr_00 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                              (_p_SimulatorWorldContext,(u8 *)puVar7);
      unaff_CS = 0x1030;
      uVar9 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr_00);
      uVar9._2_2_ = (undefined2)((ulong)uVar9 >> 0x10);
      iVar1 = *(int *)((int)(void *)uVar9 + 0x12);
      if ((iVar1 == 0x4) || (iVar1 == 0x5))
      {
        uVar3 = *(undefined4 *)((int)(void *)uVar9 + 0x14);
        lStack_1e = *(long *)((int)uVar3 + 0x8c);
      }
      else
      {
        lStack_1e = 0x0;
      }
      lStack_6 += lStack_1e;
    }
  }
  return lStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through the colony's entities and counts those belonging to the medical
// category (group 0xE). Returns the total medical capacity (count * 25).

int __stdcall16far Simulator_Calculate_Total_Medical_Capacity_4c1a(astruct_155 *param_1)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  u8 *packed_id;
  u16 category;
  int iVar4;
  uint uVar5;
  ulong in_EDX;
  astruct_155 *uVar7;
  undefined2 uVar6;
  undefined2 unaff_CS;
  void *this_ptr;
  u32 *puVar7;
  ulong uStack_e;
  undefined4 uStack_a;
  
  iVar2 = 0x0;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar7 = (astruct_155 *)param_1;
  puVar7 = uVar7->field12_0xc;
  puVar1 = (undefined2 *)((int)*uVar7->field12_0xc + 0x10);
  uVar3 = (*(code *)*puVar1)();
  uStack_a = CONCAT22((int)in_EDX,uVar3);
  for (uStack_e = 0x0; uVar5 = (uint)in_EDX, uStack_e < uStack_a; uStack_e += 0x1)
  {
    puVar1 = (undefined2 *)((int)*uVar7->field12_0xc + 0x4);
    packed_id = (u8 *)(*(code *)*puVar1)(unaff_CS,uVar7->field12_0xc,uStack_e,puVar7);
    in_EDX = (ulong)(uVar5 | (uint)packed_id);
    if ((uVar5 | (uint)packed_id) != 0x0)
    {
      this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,packed_id);
      in_EDX = (ulong)this_ptr >> 0x10;
      category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
      unaff_CS = 0x1008;
      iVar4 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),category);
      if (iVar4 != 0x0)
      {
        iVar2 += 0x1;
      }
    }
  }
  return iVar2 * 0x19;
}



// Wrapper that retrieves the current total resource sum for the specified colony.

long __stdcall16far Simulator_Get_Colony_Total_Resource_Sum_4cba(void *colony_ptr)
{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = *(undefined4 *)((int)(void *)colony_ptr + 0x1f6);
  lVar2 = Colony_Calculate_Sum_All_Resources_38b8
                    ((int)uVar1,(u16)((ulong)uVar1 >> 0x10));
  return lVar2;
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



// Frees the existing pointer at 0x1FA, duplicates the provided string, and stores the
// new pointer.

void __stdcall16far UI_Component_Set_String_at_1FA(astruct_154 *param_1,char *param_2)
{
  char *pcVar1;
  undefined2 in_DX;
  astruct_154 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (astruct_154 *)param_1;
  free_if_not_null((void *)uVar2->field506_0x1fa);
  pcVar1 = strdup_allocate(param_2);
  *(char **)&uVar2->field506_0x1fa = pcVar1;
  *(undefined2 *)((int)&uVar2->field506_0x1fa + 0x2) = in_DX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Instantiates a UI Production Item and populates it by scanning the colony's world
// entities. Triggers virtual calls (offset 0xC) for entities whose type matches the
// provided list (param_2) and are active (state 5).

u32 * __stdcall16far
Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
          (astruct_153 *param_1,undefined4 *param_2)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  u16 uVar4;
  int in_DX;
  u32 *puVar5;
  astruct_153 *uVar5;
  undefined2 unaff_SI;
  undefined2 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  u8 *puVar9;
  void *pvVar10;
  int iStack_1e;
  ulong uStack_e;
  undefined4 uStack_6;
  
  pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x18));
  if (in_DX == 0x0 && pvVar2 == NULL)
  {
    puVar3 = NULL;
    puVar5 = NULL;
  }
  else
  {
    puVar7 = UI_Production_Item_Base_ctor_init_1cd8
                       ((void *)CONCAT22(in_DX,pvVar2),(void *)0x5,(void *)0x5);
    puVar5 = (u32 *)((ulong)puVar7 >> 0x10);
    puVar3 = (undefined4 *)puVar7;
  }
  uStack_6 = (undefined4 *)CONCAT22(puVar5,puVar3);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar5 = (astruct_153 *)param_1;
  if (uVar5->field12_0xc == NULL)
  {
    uVar8 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*uVar5->field12_0xc + 0x10);
    uVar8 = (*(code *)*puVar1)();
  }
  uStack_e = 0x0;
  do
  {
    if (uVar8 <= uStack_e)
    {
      return puVar5;
    }
    puVar1 = (undefined2 *)((int)*uVar5->field12_0xc + 0x4);
    puVar9 = (u8 *)(*(code *)*puVar1)();
    if (puVar9 != NULL)
    {
      pvVar10 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,(u8 *)puVar9);
      uVar4 = UI_Component_Get_Entity_Type_ID_6fa0(pvVar10);
      iStack_1e = 0x0;
      while( true )
      {
        if (*(int *)((undefined4 *)param_2 + 0x1) <= iStack_1e) break;
        if (*(u16 *)((int)*param_2 + iStack_1e * 0x2) == uVar4)
        {
          pvVar10 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar10);
          if (*(int *)((int)(void *)pvVar10 + 0x12) == 0x5)
          {
            puVar1 = (undefined2 *)((int)*uStack_6 + 0xc);
            (*(code *)*puVar1)();
          }
          break;
        }
        iStack_1e += 0x1;
      }
    }
    uStack_e += 0x1;
  } while( true );
}



// Instantiates a UI Production Item and populates it by scanning the colony's world
// entities. Triggers virtual calls (offset 0xC) for all entities whose type matches the
// provided list.

u32 * __stdcall16far
Colony_Batch_Init_Production_Items_General_Logic_4e78
          (astruct_152 *param_1,undefined4 *param_2)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  u16 uVar4;
  int in_DX;
  u32 *puVar5;
  astruct_152 *uVar5;
  undefined2 unaff_SI;
  undefined2 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  void *this_ptr;
  int iStack_1a;
  ulong uStack_e;
  undefined4 uStack_6;
  
  pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x18));
  if (in_DX == 0x0 && pvVar2 == NULL)
  {
    puVar3 = NULL;
    puVar5 = NULL;
  }
  else
  {
    puVar7 = UI_Production_Item_Base_ctor_init_1cd8
                       ((void *)CONCAT22(in_DX,pvVar2),(void *)0x5,(void *)0x5);
    puVar5 = (u32 *)((ulong)puVar7 >> 0x10);
    puVar3 = (undefined4 *)puVar7;
  }
  uStack_6 = (undefined4 *)CONCAT22(puVar5,puVar3);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar5 = (astruct_152 *)param_1;
  if (uVar5->field12_0xc == NULL)
  {
    uVar8 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*uVar5->field12_0xc + 0x10);
    uVar8 = (*(code *)*puVar1)();
  }
  uStack_e = 0x0;
  do
  {
    if (uVar8 <= uStack_e)
    {
      return puVar5;
    }
    this_ptr = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uVar5->field12_0xc);
    if (this_ptr != NULL)
    {
      uVar4 = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
      iStack_1a = 0x0;
      while( true )
      {
        if (*(int *)((undefined4 *)param_2 + 0x1) <= iStack_1a) break;
        if (*(u16 *)((int)*param_2 + iStack_1a * 0x2) == uVar4)
        {
          puVar1 = (undefined2 *)((int)*uStack_6 + 0xc);
          (*(code *)*puVar1)();
          break;
        }
        iStack_1a += 0x1;
      }
    }
    uStack_e += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through the colony's world entities and returns 1 if any entity belongs to
// the specified type group (param_2).

u16 __stdcall16far
Colony_Check_Any_Entity_in_Group_Logic_4f54(u32 colony_ptr,int group_id)
{
  undefined2 *puVar1;
  u16 category;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *this_ptr;
  ulong uStack_a;
  
  uVar4 = (undefined2)(colony_ptr >> 0x10);
  iVar3 = (int)colony_ptr;
  if (*(long *)(iVar3 + 0xc) == 0x0)
  {
    uVar5 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0xc) + 0x10);
    uVar5 = (*(code *)*puVar1)();
  }
  uStack_a = 0x0;
  do
  {
    if (uVar5 <= uStack_a)
    {
      return 0x0;
    }
    this_ptr = UI_Component_Get_Simulator_Object_via_PackedID_1d58
                         ((void *)*(undefined4 *)(iVar3 + 0xc));
    if ((int)((ulong)this_ptr >> 0x10) != 0x0 || (void *)this_ptr != NULL)
    {
      category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),category);
      if (iVar2 != 0x0)
      {
        return 0x1;
      }
    }
    uStack_a += 0x1;
  } while( true );
}



// Iterates through the colony's world entities and returns 1 if any entity's type
// matches the provided ID.

u16 __stdcall16far
Colony_Check_Any_Entity_Matches_Type_Logic_4fd8(void *colony_ptr,int type_id)
{
  undefined2 *puVar1;
  u16 uVar2;
  astruct_151 *uVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *this_ptr;
  ulong uStack_a;
  
  uVar4 = (undefined2)((ulong)colony_ptr >> 0x10);
  uVar3 = (astruct_151 *)colony_ptr;
  if (uVar3->field12_0xc == NULL)
  {
    uVar5 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*uVar3->field12_0xc + 0x10);
    uVar5 = (*(code *)*puVar1)();
  }
  uStack_a = 0x0;
  do
  {
    if (uVar5 <= uStack_a)
    {
      return 0x0;
    }
    this_ptr = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uVar3->field12_0xc);
    if ((int)((ulong)this_ptr >> 0x10) != 0x0 || (void *)this_ptr != NULL)
    {
      uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
      if (uVar2 == type_id)
      {
        return 0x1;
      }
    }
    uStack_a += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Returns the total count of world entities in the colony that belong to the specified
// type group.

long __stdcall16far
Colony_Count_Entities_in_Group_Logic_5050(void *colony_ptr,int group_id)
{
  undefined2 *puVar1;
  u16 category;
  int iVar2;
  astruct_150 *uVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *this_ptr;
  ulong uStack_e;
  long lStack_6;
  
  lStack_6 = 0x0;
  uVar4 = (undefined2)((ulong)colony_ptr >> 0x10);
  uVar3 = (astruct_150 *)colony_ptr;
  if (uVar3->field12_0xc == NULL)
  {
    uVar5 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*uVar3->field12_0xc + 0x10);
    uVar5 = (*(code *)*puVar1)();
  }
  for (uStack_e = 0x0; uStack_e < uVar5; uStack_e += 0x1)
  {
    this_ptr = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uVar3->field12_0xc);
    if ((int)((ulong)this_ptr >> 0x10) != 0x0 || (void *)this_ptr != NULL)
    {
      category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),category);
      if (iVar2 != 0x0)
      {
        lStack_6 += 0x1;
      }
    }
  }
  return lStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through the colony's managed entity IDs and returns the count of entities
// that match the specified type group and are in the Active state (5).

long __stdcall16far
Colony_Count_Active_Entities_of_Type_Group_50e0(void *colony_ptr,int group_id)
{
  undefined2 *puVar1;
  u16 category;
  int iVar2;
  astruct_149 *uVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uStack_e;
  long lStack_6;
  
  lStack_6 = 0x0;
  uVar4 = (undefined2)((ulong)colony_ptr >> 0x10);
  uVar3 = (astruct_149 *)colony_ptr;
  if (uVar3->field12_0xc == NULL)
  {
    uVar5 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*uVar3->field12_0xc + 0x10);
    uVar5 = (*(code *)*puVar1)();
  }
  for (uStack_e = 0x0; uStack_e < uVar5; uStack_e += 0x1)
  {
    pvVar6 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uVar3->field12_0xc);
    if (pvVar6 != NULL)
    {
      category = UI_Component_Get_Entity_Type_ID_6fa0(pvVar6);
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),category);
      if (iVar2 != 0x0)
      {
        pvVar6 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar6);
        if (*(int *)((int)(void *)pvVar6 + 0x12) == 0x5)
        {
          lStack_6 += 0x1;
        }
      }
    }
  }
  return lStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Per-turn routine that distributes available colony resources to entities with pending
// requirements. Iterates through entities and matches their capacities against
// colony-wide deficits (calculated via 540A).

void __stdcall16far Colony_Process_Resource_Distribution_Tick_518c(void *colony_ptr)
{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_CS;
  ulong uVar9;
  u8 *puVar10;
  void *pvVar11;
  int iStack_22;
  long lStack_20;
  undefined4 uStack_1c;
  ulong uStack_a;
  
  uVar7 = (undefined2)((ulong)colony_ptr >> 0x10);
  iVar4 = (int)colony_ptr;
  if (*(int *)(iVar4 + 0x206) == 0x0)
  {
    if (*(long *)(iVar4 + 0xc) == 0x0)
    {
      uVar9 = 0x0;
    }
    else
    {
      puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar4 + 0xc) + 0x10);
      uVar9 = (*(code *)*puVar2)();
    }
    for (uStack_a = 0x0; uStack_a < uVar9; uStack_a += 0x1)
    {
      puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar4 + 0xc) + 0x4);
      puVar10 = (u8 *)(*(code *)*puVar2)(unaff_CS,(int)*(undefined4 *)(iVar4 + 0xc),
                                         (int)((ulong)*(undefined4 *)(iVar4 + 0xc) >>
                                              0x10),(int)uStack_a,
                                         (int)(uStack_a >> 0x10));
      if (puVar10 != NULL)
      {
        pvVar11 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,(u8 *)puVar10);
        unaff_CS = 0x1030;
        pvVar11 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar11);
        uVar8 = (undefined2)((ulong)pvVar11 >> 0x10);
        iVar5 = *(int *)((int)pvVar11 + 0x12);
        uStack_1c = (long *)CONCAT22(uVar8,(long *)((int)pvVar11 + 0x14));
        lStack_20 = 0x0;
        if ((iVar5 == 0x4) || (iVar5 == 0x5))
        {
          lStack_20 = *uStack_1c;
        }
        if (lStack_20 != 0x0)
        {
          for (iStack_22 = 0x11; iStack_22 < 0x25; iStack_22 += 0x1)
          {
            if (((*(int *)(iVar4 + 0x204) == 0x0) || (iStack_22 == 0x23)) ||
               (iStack_22 == 0x24))
            {
              pvVar11 = Colony_Calc_Resource_Deficit_at_26_540a(colony_ptr,iStack_22);
              uVar3 = (uint)((ulong)pvVar11 >> 0x10);
              iVar5 = iStack_22 * 0x4;
              uVar8 = (undefined2)((ulong)lStack_20 >> 0x10);
              iVar6 = (int)lStack_20;
              uVar1 = *(uint *)(iVar5 + iVar6 + 0x2);
              if ((uVar1 <= uVar3) &&
                 ((uVar1 < uVar3 || (*(uint *)(iVar5 + iVar6) <= (uint)pvVar11))))
              {
                Colony_Add_to_Secondary_Resource_Tracker_5770
                          (colony_ptr,*(long *)(iVar5 + iVar6),iStack_22);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Deducts a resource amount from the colony's global trackers and then propagates the
// consumption to individual entities' internal lists to maintain synchronization.

void __stdcall16far
Colony_Consume_Resource_Globally_52b8(void *colony_ptr,ulong amount,int type_id)
{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined2 unaff_CS;
  ulong uVar4;
  u8 *puVar5;
  void *this_ptr;
  void *pvVar6;
  void *pvVar7;
  undefined2 uVar8;
  u16 key;
  int iStack_1a;
  int iStack_18;
  ulong uStack_e;
  
  pvVar7 = (void *)colony_ptr;
  uVar8 = (undefined2)((ulong)colony_ptr >> 0x10);
  Colony_Add_to_Resource_Tracker_5694
            (colony_ptr,
             CONCAT22(-(amount._2_2_ + (uint)((int)amount != 0x0)),-(int)amount),type_id
            );
  if (type_id != 0x24)
  {
    if (*(long *)((int)pvVar7 + 0xc) == 0x0)
    {
      uVar4 = 0x0;
    }
    else
    {
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)pvVar7 + 0xc) + 0x10);
      uVar4 = (*(code *)*puVar1)();
    }
    for (uStack_e = 0x0; uStack_e < uVar4; uStack_e += 0x1)
    {
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)pvVar7 + 0xc) + 0x4);
      puVar5 = (u8 *)(*(code *)*puVar1)(unaff_CS,(int)*(undefined4 *)((int)pvVar7 + 0xc)
                                        ,(int)((ulong)*(undefined4 *)((int)pvVar7 + 0xc)
                                              >> 0x10),(int)uStack_e,
                                        (int)(uStack_e >> 0x10));
      if (puVar5 != NULL)
      {
        key = type_id;
        this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                             (_p_SimulatorWorldContext,(u8 *)puVar5);
        unaff_CS = 0x1030;
        pvVar6 = UI_Component_Find_Item_in_List_22_Logic_7c28(this_ptr,key);
        iVar3 = (int)((ulong)pvVar6 >> 0x10);
        pvVar2 = (void *)pvVar6;
        if (iVar3 != 0x0 || pvVar2 != NULL)
        {
          if (pvVar6 < amount)
          {
            amount -= (long)pvVar6;
            iStack_1a = 0x0;
            iStack_18 = 0x0;
          }
          else
          {
            iStack_1a = (int)pvVar2 - (int)(void *)amount;
            iStack_18 = (iVar3 - amount._2_2_) - (uint)(pvVar2 < (void *)amount);
            amount = 0x0;
          }
          unaff_CS = 0x1030;
          UI_Component_Set_List_Value_at_22_Logic_7d1c
                    ((void *)this_ptr,(int)((ulong)this_ptr >> 0x10),iStack_1a,iStack_18
                     ,type_id);
          if (amount == 0x0)
          {
            return;
          }
        }
      }
    }
  }
  return;
}
