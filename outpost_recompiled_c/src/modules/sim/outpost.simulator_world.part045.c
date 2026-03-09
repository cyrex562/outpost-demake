/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 45/56
 * Original lines (combined): 104090-104999
 * Boundaries: top-level declarations/definitions only
 */




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
  undefined2 reg_dx;
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
                     (manager_ptr,puVar3,reg_dx);
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates population growth quotas based on turn count and current resource sums.
// Spawns interaction item Type 0x9C52 to apply the growth to the colony.

void __stdcall16far
Simulator_Process_Population_Growth_Quota_0340
          (u16 arg1,u16 arg2,int factor,void *colony_ptr)
{
  undefined2 unaff_SS;
  void *in_stack_0000000a;
  u16 local_13a [0x8e];
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  u32 uStack_1a;
  undefined4 uStack_16;
  uint local_12;
  undefined2 uStack_10;
  int local_e;
  u16 uStack_c;
  undefined4 uStack_a;
  ulong uStack_6;
  
  uStack_6 = *_p_SimulatorWorldContext;
  uStack_a = 0x0;
  uStack_c = 0x0;
  UI_Component_Get_Internal_Data_1C_1E
            ((void *)CONCAT22(colony_ptr._0_2_,in_stack_0000000a),
             (uint *)CONCAT22(unaff_SS,&local_12),(int *)CONCAT22(unaff_SS,&local_e));
  uStack_16 = *(undefined4 *)((int)in_stack_0000000a + 0x1f6);
  uStack_1a = Colony_Calculate_Sum_All_Resources_38b8
                        ((int)uStack_16,(u16)((ulong)uStack_16 >> 0x10));
  if (factor == 0x0)
  {
    if (local_e != 0x8)
    {
      uStack_a = (long)uStack_1a / 0x4;
      uStack_c = 0x8;
      goto LAB_1038_054b;
    }
  }
  else if (factor < 0xb)
  {
    if (local_e != 0x7)
    {
      uStack_a = (long)uStack_1a / 0xa;
      uStack_c = 0x7;
      goto LAB_1038_054b;
    }
  }
  else if (factor < 0x1a)
  {
    if (local_e != 0x6)
    {
      uStack_a = (long)uStack_1a / 0x14;
      uStack_c = 0x6;
      goto LAB_1038_054b;
    }
  }
  else if (factor < 0x33)
  {
    if (local_e != 0x5)
    {
      uStack_a = (long)uStack_1a / 0x64;
      uStack_c = 0x5;
      goto LAB_1038_054b;
    }
  }
  else if (factor < 0x4c)
  {
    if (uStack_6 % 0x3 != 0x0) goto LAB_1038_054b;
    if (local_e != 0x4)
    {
      uStack_a = (long)uStack_1a / 0x64;
      uStack_c = 0x4;
      goto LAB_1038_054b;
    }
  }
  else if (factor < 0x65)
  {
    if (uStack_6 % 0x5 != 0x0) goto LAB_1038_054b;
    if (local_e != 0x3)
    {
      uStack_a = (long)uStack_1a / 0x64;
      uStack_c = 0x3;
      goto LAB_1038_054b;
    }
  }
  else if (factor < 0x97)
  {
    if (uStack_6 % 0xa != 0x0) goto LAB_1038_054b;
    if (local_e != 0x2)
    {
      uStack_a = (long)uStack_1a / 0x64;
      uStack_c = 0x2;
      goto LAB_1038_054b;
    }
  }
  else
  {
    if ((0xc8 < factor) || (uStack_6 % 0x14 != 0x0)) goto LAB_1038_054b;
    if (local_e != 0x1)
    {
      uStack_a = (long)uStack_1a / 0x64;
      uStack_c = 0x1;
      goto LAB_1038_054b;
    }
  }
  uStack_a = uStack_1a;
  if ((CONCAT22(uStack_10,local_12) < (long)uStack_1a) &&
     ((true || (local_12 < (uint)uStack_1a))))
  {
    uStack_a = CONCAT22(uStack_10,local_12);
  }
LAB_1038_054b:
  if (uStack_c != 0x0)
  {
    if ((uStack_1a != 0x0) && (uStack_a == 0x0))
    {
      uStack_a = 0x1;
    }
    UI_Component_Set_Internal_Data_1C_1E
              ((u32)CONCAT22(colony_ptr._0_2_,in_stack_0000000a),uStack_a,uStack_c);
  }
  if (uStack_a._2_2_ != 0x0 || (int)uStack_a != 0x0)
  {
    if (*(long *)((int)in_stack_0000000a + 0x200) == 0x8000001)
    {
      uStack_1e = 0x2;
    }
    else
    {
      uStack_1e = 0x1;
    }
    _uStack_1e = CONCAT22(0x400,uStack_1e);
    UI_Build_Item_Type_9C52_ctor_init_9944
              ((u16 *)CONCAT22(unaff_SS,local_13a),uStack_a,CONCAT22(0x400,uStack_1e),
               *(u32 *)((int)in_stack_0000000a + 0x4));
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(u16 *)CONCAT22(unaff_SS,local_13a));
    UI_Build_Item_Type_9C52_dtor_Internal_9992(local_13a);
  }
  return;
}
