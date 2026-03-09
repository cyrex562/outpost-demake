/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 41/56
 * Original lines (combined): 97650-98832
 * Boundaries: top-level declarations/definitions only
 */




// Validates that the colony has sufficient stockpiles of all required resources
// (categories 1-4) to cover construction costs. Returns 1 if requirements are met.

u16 __stdcall16far
Simulator_Validate_Stockpiles_Against_Costs_8f04(u16 arg1,u16 arg2,void *this_ptr)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar5;
  void *uVar4;
  u32 uVar6;
  void *pvVar7;
  int iStack_8;
  undefined4 uStack_6;
  
  uVar4 = (void *)Colony_Calc_Resource_Difference_at_14E_53ba(this_ptr,0x1);
  if (((int)((ulong)uVar4 >> 0x10) != 0x0) || (0x1 < (uint)uVar4))
  {
    uVar6 = Colony_Calc_Resource_Difference_at_14E_53ba(this_ptr,0x2);
    if (((int)(uVar6 >> 0x10) != 0x0) || (0x1 < (uint)uVar6))
    {
      uVar6 = Colony_Calc_Resource_Difference_at_14E_53ba(this_ptr,0x3);
      if (((int)(uVar6 >> 0x10) != 0x0) || (0x1 < (uint)uVar6))
      {
        uVar6 = Colony_Calc_Resource_Difference_at_14E_53ba(this_ptr,0x4);
        if (((int)(uVar6 >> 0x10) != 0x0) || (0x1 < (uint)uVar6))
        {
          uStack_6 = Colony_Calc_Resource_Deficit_at_26_540a(this_ptr,0x21);
          iStack_8 = 0x0;
          do
          {
            if (0x0 < *(int *)(iStack_8 * 0x2 + (int)PTR_DAT_1050_57c4_1050_580e))
            {
              pvVar7 = Colony_Calc_Resource_Deficit_at_26_540a(this_ptr,iStack_8);
              uVar2 = (uint)((ulong)pvVar7 >> 0x10);
              uVar5 = (undefined2)((ulong)PTR_DAT_1050_57c4_1050_580e >> 0x10);
              uVar1 = *(uint *)(iStack_8 * 0x2 + (int)PTR_DAT_1050_57c4_1050_580e);
              uVar3 = (int)uVar1 >> 0xf;
              if ((uVar2 <= uVar3) && ((uVar3 != uVar2 || ((uint)pvVar7 < uVar1))))
              {
                if (0x1c < iStack_8)
                {
                  return 0x0;
                }
                uVar1 = *(uint *)(iStack_8 * 0x2 + (int)PTR_DAT_1050_57c4_1050_580e);
                if ((long)uStack_6 < (long)(int)uVar1)
                {
                  return 0x0;
                }
                uStack_6 = (void *)CONCAT22((uStack_6._2_2_ - ((int)uVar1 >> 0xf)) -
                                            (uint)((uint)uStack_6 < uVar1),
                                            (void *)((uint)uStack_6 - uVar1));
              }
            }
            iStack_8 += 0x1;
            if (0x24 < iStack_8)
            {
              return 0x1;
            }
          } while( true );
        }
      }
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Returns 1 if the entity at the specified coordinates is active or offline (types 5 or
// 9). Used for placement validation.

u16 __stdcall16far
Simulator_Check_If_Entity_at_Coords_Active_8fe4(u16 x,u16 y,void *coords,long arg4)
{
  int iVar1;
  void *lVar2;
  void *uVar2;
  void *lVar3;
  
  lVar2 = Simulator_Map_Get_Entity_at_Coords_627e
                    (_p_MapContext_5740,coords,(void *)arg4);
  if (lVar2 != NULL)
  {
    uVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                      (_p_SimulatorWorldContext,(void *)lVar2);
    if (uVar2 != NULL)
    {
      lVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(uVar2);
      if ((lVar3 != NULL) &&
         ((iVar1 = *(int *)((int)(void *)lVar3 + 0xc), iVar1 == 0x5 || (iVar1 == 0x9))))
      {
        return 0x1;
      }
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Complex routine that validates the adjacency of a construction site to existing
// infrastructure or buildings. Iterates through proximity lists and performs
// coordinate-based validation.

u16 __stdcall16far
Simulator_Process_Site_Adjacency_Validation_9048
          (undefined4 param_1,int param_2,undefined4 param_3)
{
  long arg4;
  undefined2 *puVar1;
  undefined4 *puVar2;
  u16 uVar3;
  u16 uVar4;
  u8 *packed_id;
  undefined2 in_DX;
  u32 *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int *unaff_SS;
  void *pvVar9;
  u16 y;
  ulong uStack_24;
  ulong uStack_20;
  int local_18;
  int local_16;
  int local_14;
  int local_12;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0x8 - (uint)(param_2 == 0x0);
  puVar2 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uVar7 = (undefined2)((ulong)param_3 >> 0x10);
  puStack_8 = puVar2;
  puVar5 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                     ((int)param_3,uVar7,puVar2,in_DX);
  uStack_c = (undefined4 *)CONCAT22(puVar5,puVar2);
  uVar8 = 0x1008;
  zero_init_struct_6bytes(&local_12);
  arg4 = *(long *)((int)param_3 + 0x8);
  uVar7 = (undefined2)((ulong)uStack_c >> 0x10);
  puVar2 = (undefined4 *)uStack_c;
  puVar1 = (undefined2 *)((int)*uStack_c + 0x10);
  uStack_20 = (*(code *)*puVar1)(0x1008,puVar2,uVar7);
  uStack_24 = 0x0;
LAB_1030_91fe:
  if (uStack_20 <= uStack_24)
  {
    if (uStack_c != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_c)
                (uVar8,(undefined4 *)uStack_c,(int)((ulong)uStack_c >> 0x10),0x1,puVar2,
                 uVar7,uStack_c,uStack_c);
    }
    return 0x0;
  }
  puVar1 = (undefined2 *)((int)*uStack_c + 0x4);
  packed_id = (u8 *)(*(code *)*puVar1)();
  pvVar9 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,packed_id);
  copy_struct_6bytes(&local_12,unaff_SS);
  unpack_3word_struct(&local_12,unaff_SS,&local_18,unaff_SS);
  pvVar9 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar9);
  uVar3 = (u16)param_1;
  y = (u16)((ulong)param_1 >> 0x10);
  uVar8 = 0x1008;
  switch(*(undefined2 *)((int)pvVar9 + 0xc))
  {
  case 0x7a:
  case 0x7f:
    iStack_10 = local_16 + -0x1;
    uVar4 = Simulator_Check_If_Entity_at_Coords_Active_8fe4
                      (uVar3,y,(int *)CONCAT22(unaff_SS,&local_12),arg4);
    if (uVar4 != 0x0) goto LAB_1030_91cb;
    iStack_10 = local_16 + 0x1;
    uVar4 = Simulator_Check_If_Entity_at_Coords_Active_8fe4
                      (uVar3,y,(int *)CONCAT22(unaff_SS,&local_12),arg4);
    if (uVar4 == 0x0)
    {
      iStack_10 = local_16;
      local_12 = local_14 + -0x1;
      uVar4 = Simulator_Check_If_Entity_at_Coords_Active_8fe4
                        (uVar3,y,(int *)CONCAT22(unaff_SS,&local_12),arg4);
      goto joined_r0x1030911e;
    }
LAB_1030_9144:
    break;
  case 0x7b:
  case 0x7e:
    iStack_10 = local_16 + -0x1;
    uVar4 = Simulator_Check_If_Entity_at_Coords_Active_8fe4
                      (uVar3,y,(int *)CONCAT22(unaff_SS,&local_12),arg4);
    if (uVar4 == 0x0)
    {
      iStack_10 = local_16 + 0x1;
      goto LAB_1030_912c;
    }
    if (uStack_c == NULL)
    {
      return 0x1;
    }
    uVar8 = (undefined2)((ulong)uStack_c >> 0x10);
    puVar6 = (undefined4 *)uStack_c;
    goto LAB_1030_90e6;
  case 0x7c:
  case 0x7d:
    local_12 = local_14 + -0x1;
    uVar4 = Simulator_Check_If_Entity_at_Coords_Active_8fe4
                      (uVar3,y,(int *)CONCAT22(unaff_SS,&local_12),arg4);
joined_r0x1030911e:
    if (uVar4 == 0x0)
    {
      local_12 = local_14 + 0x1;
LAB_1030_912c:
      uVar3 = Simulator_Check_If_Entity_at_Coords_Active_8fe4
                        (uVar3,y,(int *)CONCAT22(unaff_SS,&local_12),arg4);
      uVar8 = 0x1030;
      if (uVar3 != 0x0) goto LAB_1030_9144;
      goto switchD_1030_91e9_default;
    }
LAB_1030_91cb:
    break;
  default:
    goto switchD_1030_91e9_default;
  }
  puVar6 = (undefined4 *)uStack_c;
  if (uStack_c._2_2_ != 0x0 || puVar6 != NULL)
  {
    uVar8 = (undefined2)((ulong)uStack_c >> 0x10);
LAB_1030_90e6:
    (*(code *)*(undefined2 *)(undefined2 *)*puVar6)
              (0x1030,puVar6,uVar8,0x1,puVar2,uVar7,uStack_c,uStack_c);
  }
  return 0x1;
switchD_1030_91e9_default:
  uStack_24 += 0x1;
  goto LAB_1030_91fe;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A specialized spawning routine for buildings (IDs 0x73, 0x74, 0x75, 0x37). Triggers
// site validation and resource checking before appending the new entity to the
// simulator.

void __stdcall16far
Simulator_Process_Specialized_Spawn_Routine_9296(void *arg1,void *arg2,void *arg3)
{
  undefined2 *puVar1;
  undefined2 *puVar3;
  u16 uVar4;
  uint uVar5;
  int extraout_DX;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  u32 uVar10;
  undefined1 local_3a [0xc];
  long lStack_2e;
  void *pvStack_24;
  void *pvStack_1e;
  undefined2 uStack_1a;
  undefined4 uStack_12;
  undefined4 uStack_e;
  long lStack_a;
  undefined2 *puStack_6;
  astruct_215 *puVar2;
  astruct_216 *iVar2;
  astruct_217 *iVar3;
  astruct_218 *iVar4;
  astruct_219 *iVar5;
  
  uVar10 = Colony_Calc_Resource_Difference_at_14E_53ba(arg3,0x1);
  uVar5 = (uint)(uVar10 >> 0x10) | (uint)uVar10;
  if (uVar5 != 0x0)
  {
    pvStack_1e = _p_Pool_Type6_Node;
    puVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
    uStack_12 = (undefined2 *)CONCAT22(uVar5,puVar3);
    if (uVar5 == 0x0 && puVar3 == NULL)
    {
      puStack_6 = NULL;
    }
    else
    {
      *uStack_12 = (char *)s_1_1050_389a;
      puVar3[0x1] = 0x1008;
      puVar3[0x2] = 0x73;
      *uStack_12 = 0x9ec8;
      puVar3[0x1] = 0x1030;
      puStack_6 = uStack_12;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x4);
    (*(code *)*puVar1)(0x1000,arg2,(undefined2 *)puStack_6,
                       (int)((ulong)puStack_6 >> 0x10));
  }
  uVar10 = Colony_Calc_Resource_Difference_at_14E_53ba(arg3,0x2);
  uVar5 = (uint)(uVar10 >> 0x10) | (uint)uVar10;
  if (uVar5 != 0x0)
  {
    pvStack_1e = _p_Pool_Type6_Node;
    puVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
    uStack_12 = (undefined2 *)CONCAT22(uVar5,puVar3);
    if (uVar5 == 0x0 && puVar3 == NULL)
    {
      puStack_6 = NULL;
    }
    else
    {
      *uStack_12 = (char *)s_1_1050_389a;
      puVar3[0x1] = 0x1008;
      puVar3[0x2] = 0x74;
      *uStack_12 = 0x9ec8;
      puVar3[0x1] = 0x1030;
      puStack_6 = uStack_12;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
    (*(code *)*puVar1)(0x1000,arg2,(undefined2 *)puStack_6,
                       (int)((ulong)puStack_6 >> 0x10));
  }
  uVar10 = Colony_Calc_Resource_Difference_at_14E_53ba(arg3,0x3);
  uVar5 = (uint)(uVar10 >> 0x10) | (uint)uVar10;
  iVar6 = 0x0;
  if (uVar5 != 0x0)
  {
    pvStack_24 = _p_Pool_Type6_Node;
    puVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
    uStack_12 = (undefined2 *)CONCAT22(uVar5,puVar3);
    if (uVar5 == 0x0 && puVar3 == NULL)
    {
      puStack_6 = NULL;
    }
    else
    {
      *uStack_12 = (char *)s_1_1050_389a;
      puVar3[0x1] = 0x1008;
      puVar3[0x2] = 0x75;
      *uStack_12 = 0x9ec8;
      puVar3[0x1] = 0x1030;
      puStack_6 = uStack_12;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
    (*(code *)*puVar1)(0x1000,arg2,(undefined2 *)puStack_6,
                       (int)((ulong)puStack_6 >> 0x10));
    iVar6 = extraout_DX;
  }
  uVar4 = Simulator_Validate_Stockpiles_Against_Costs_8f04
                    ((u16)arg1,(u16)((ulong)arg1 >> 0x10),arg3);
  if (uVar4 != 0x0)
  {
    pvStack_24 = _p_Pool_Type6_Node;
    puVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
    uStack_12 = (undefined2 *)CONCAT22(iVar6,puVar3);
    if (iVar6 == 0x0 && puVar3 == NULL)
    {
      puStack_6 = NULL;
    }
    else
    {
      *uStack_12 = (char *)s_1_1050_389a;
      puVar3[0x1] = 0x1008;
      puVar3[0x2] = 0x37;
      *uStack_12 = 0x9ec8;
      puVar3[0x1] = 0x1030;
      puStack_6 = uStack_12;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
    (*(code *)*puVar1)(0x1000,arg2,(undefined2 *)puStack_6,
                       (int)((ulong)puStack_6 >> 0x10));
  }
  lStack_a = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
  uVar7 = (undefined2)((ulong)lStack_a >> 0x10);
  uStack_e = *(undefined4 *)((int)lStack_a + 0xe);
  iVar6 = *(int *)((int)lStack_a + 0x10);
  if (iVar6 != 0x0 || (int)uStack_e != 0x0)
  {
    init_long_pair(local_3a,CONCAT22(iVar6,(int)uStack_e));
    while( true )
    {
      lStack_2e = get_next_list_item(local_3a);
      uVar8 = (uint)((ulong)lStack_2e >> 0x10);
      uVar5 = (uint)lStack_2e;
      uVar9 = uVar8 | uVar5;
      if (uVar9 == 0x0) break;
      if ((*(int *)(uVar5 + 0x4) == 0x3e) || (*(int *)(uVar5 + 0x4) == 0x41))
      {
        pvStack_1e = _p_Pool_Type6_Node;
        puVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
        uStack_12 = (undefined2 *)CONCAT22(uVar9,puVar3);
        if (uVar9 == 0x0 && puVar3 == NULL)
        {
          puStack_6 = NULL;
        }
        else
        {
          uStack_1a = *(undefined2 *)((int)lStack_2e + 0x4);
          *uStack_12 = (char *)s_1_1050_389a;
          puVar3[0x1] = 0x1008;
          puVar3[0x2] = uStack_1a;
          *uStack_12 = 0x9ec8;
          puVar3[0x1] = 0x1030;
          puStack_6 = uStack_12;
        }
        puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
        (*(code *)*puVar1)(0x1000,arg2,(undefined2 *)puStack_6,
                           (int)((ulong)puStack_6 >> 0x10));
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Orchestrates building placement logic for three specialized building types (IDs 0x77,
// 0x78, 0x75). Validates site availability and triggers virtual placement callbacks
// (offset 4 or 8) on the building object.

void __stdcall16far
Simulator_Process_Building_Placement_Action_9adc
          (u16 offset,u16 segment,void *arg3,void *arg4)
{
  undefined2 *puVar1;
  undefined2 *puVar5;
  uint uVar6;
  u32 uVar7;
  undefined4 uStack_a;
  undefined2 *puStack_6;
  astruct_203 *puVar2;
  astruct_204 *puVar3;
  astruct_205 *puVar4;
  
  uVar7 = Colony_Calc_Resource_Difference_at_14E_53ba(arg4,0x1);
  uVar6 = (uint)(uVar7 >> 0x10) | (uint)uVar7;
  if (uVar6 != 0x0)
  {
    puVar5 = validate_and_get_block((void *)_p_Pool_Type6_Node);
    uStack_a = (undefined2 *)CONCAT22(uVar6,puVar5);
    if (uVar6 == 0x0 && puVar5 == NULL)
    {
      puStack_6 = NULL;
    }
    else
    {
      *uStack_a = (char *)s_1_1050_389a;
      puVar5[0x1] = 0x1008;
      puVar5[0x2] = 0x77;
      *uStack_a = 0x9ec8;
      puVar5[0x1] = 0x1030;
      puStack_6 = uStack_a;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)arg3 + 0x4);
    (*(code *)*puVar1)(0x1000,arg3,(undefined2 *)puStack_6,
                       (int)((ulong)puStack_6 >> 0x10));
  }
  uVar7 = Colony_Calc_Resource_Difference_at_14E_53ba(arg4,0x2);
  uVar6 = (uint)(uVar7 >> 0x10) | (uint)uVar7;
  if (uVar6 != 0x0)
  {
    puVar5 = validate_and_get_block((void *)_p_Pool_Type6_Node);
    uStack_a = (undefined2 *)CONCAT22(uVar6,puVar5);
    if (uVar6 == 0x0 && puVar5 == NULL)
    {
      puStack_6 = NULL;
    }
    else
    {
      *uStack_a = (char *)s_1_1050_389a;
      puVar5[0x1] = 0x1008;
      puVar5[0x2] = 0x78;
      *uStack_a = 0x9ec8;
      puVar5[0x1] = 0x1030;
      puStack_6 = uStack_a;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)arg3 + 0x8);
    (*(code *)*puVar1)(0x1000,arg3,(undefined2 *)puStack_6,
                       (int)((ulong)puStack_6 >> 0x10));
  }
  uVar7 = Colony_Calc_Resource_Difference_at_14E_53ba(arg4,0x3);
  uVar6 = (uint)(uVar7 >> 0x10) | (uint)uVar7;
  if (uVar6 != 0x0)
  {
    puVar5 = validate_and_get_block((void *)_p_Pool_Type6_Node);
    uStack_a = (undefined2 *)CONCAT22(uVar6,puVar5);
    if (uVar6 == 0x0 && puVar5 == NULL)
    {
      puStack_6 = NULL;
    }
    else
    {
      *uStack_a = (char *)s_1_1050_389a;
      puVar5[0x1] = 0x1008;
      puVar5[0x2] = 0x75;
      *uStack_a = 0x9ec8;
      puVar5[0x1] = 0x1030;
      puStack_6 = uStack_a;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)arg3 + 0x8);
    (*(code *)*puVar1)(0x1000,arg3,(undefined2 *)puStack_6,
                       (int)((ulong)puStack_6 >> 0x10));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Scans planetary resource tables (ID 0x35) and spawns specialized sub-entities (using
// vtable 0x9EC8) for resource tiles in specific ID ranges (0x4F-0x6F and 0x7D-0x7F).

void __stdcall16far
Simulator_Process_Resource_Site_Spawning_9c1c(void *arg1,void *arg2,void *arg3)
{
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int extraout_DX;
  int extraout_DX_00;
  long lVar7;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_10;
  undefined2 *puStack_6;
  astruct_202 *puVar2;
  
  lVar7 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x35);
  iVar5 = (int)((ulong)lVar7 >> 0x10);
  iVar2 = (int)lVar7 + 0xa;
  iVar6 = iVar5;
  uVar3 = Simulator_Process_Site_Adjacency_Validation_9048(arg1,0x1,arg3);
  if (uVar3 != 0x0)
  {
    for (iStack_18 = 0x4f; iStack_18 < 0x70; iStack_18 += 0x1)
    {
      if (*(int *)(iStack_18 * 0x2 + iVar2) != 0x0)
      {
        puVar4 = validate_and_get_block((void *)_p_Pool_Type6_Node);
        uStack_1c = (undefined2 *)CONCAT22(iVar6,puVar4);
        if (iVar6 == 0x0 && puVar4 == NULL)
        {
          puStack_6 = NULL;
        }
        else
        {
          *uStack_1c = (char *)s_1_1050_389a;
          puVar4[0x1] = 0x1008;
          puVar4[0x2] = iStack_18;
          *uStack_1c = 0x9ec8;
          puVar4[0x1] = 0x1030;
          puStack_6 = uStack_1c;
        }
        puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
        (*(code *)*puVar1)(0x1000,arg2,(undefined2 *)puStack_6,
                           (int)((ulong)puStack_6 >> 0x10));
        iVar6 = extraout_DX;
      }
    }
  }
  for (iStack_10 = 0x7d; iStack_10 < 0x80; iStack_10 += 0x1)
  {
    if (*(int *)(iStack_10 * 0x2 + iVar2) != 0x0)
    {
      puVar4 = validate_and_get_block((void *)_p_Pool_Type6_Node);
      uStack_1c = (undefined2 *)CONCAT22(iVar6,puVar4);
      if (iVar6 == 0x0 && puVar4 == NULL)
      {
        puStack_6 = NULL;
      }
      else
      {
        *uStack_1c = (char *)s_1_1050_389a;
        puVar4[0x1] = 0x1008;
        puVar4[0x2] = iStack_10;
        *uStack_1c = 0x9ec8;
        puVar4[0x1] = 0x1030;
        puStack_6 = uStack_1c;
      }
      puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
      (*(code *)*puVar1)(0x1000,arg2,(undefined2 *)puStack_6,
                         (int)((ulong)puStack_6 >> 0x10));
      iVar6 = extraout_DX_00;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates if a building's resource requirements (from 'bldgops.dat') are met by the
// colony's current stockpiles. Triggers resource consumption or placement failure if
// resources are insufficient.

void __stdcall16far
Simulator_Validate_Building_Resource_Requirements_9d42
          (u16 offset,u16 segment,void *arg3,void *arg4)
{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  int unaff_SS;
  void *pvVar7;
  long lVar8;
  undefined1 local_a6 [0x4];
  undefined4 uStack_a2;
  void *pvStack_9e;
  int iStack_9a;
  undefined4 local_98;
  ulong uStack_c;
  ulong uStack_8;
  int iStack_4;
  
  uVar6 = (undefined2)((ulong)arg4 >> 0x10);
  if (*(int *)((int)arg4 + 0x206) == 0x0)
  {
    iStack_4 = *(int *)((int)arg4 + 0x204);
    memset_far(&local_98,unaff_SS,0x0);
    iStack_9a = 0x11;
    do
    {
      pvVar7 = Colony_Calc_Resource_Deficit_at_26_540a(arg4,iStack_9a);
      *(int *)(&local_98 + iStack_9a) = (int)pvVar7;
      *(undefined2 *)((int)&local_98 + iStack_9a * 0x4 + 0x2) =
           (int)((ulong)pvVar7 >> 0x10);
      iStack_9a += 0x1;
    } while (iStack_9a < 0x25);
    pvStack_9e = Colony_Calc_Resource_Deficit_at_26_540a(arg4,0x21);
    init_long_pair(local_a6,(long)arg3);
    pvVar7 = (void *)*(undefined4 *)((int)_p_SimulatorWorldContext + 0x52);
    while( true )
    {
      lVar8 = get_next_list_item(local_a6);
      uVar3 = (uint)((ulong)lVar8 >> 0x10);
      uVar2 = (uint)lVar8;
      uVar4 = uVar3 | uVar2;
      if (uVar4 == 0x0) break;
      Simulator_Map_Context_Load_Object_Template_4bbe(pvVar7,*(int *)(uVar2 + 0x4));
      if (iStack_4 == 0x0)
      {
        for (iStack_9a = 0x11; iStack_9a < 0x25; iStack_9a += 0x1)
        {
          iVar5 = iStack_9a * 0x4;
          if ((*(long *)(iVar5 + uVar2) != 0x0) &&
             ((ulong)(&local_98)[iStack_9a] < *(ulong *)(iVar5 + uVar2)))
          {
            if (pvStack_9e < (void *)*(ulong *)(iVar5 + uVar2)) goto LAB_1030_9e17;
            pvStack_9e = (void *)((long)pvStack_9e - *(long *)(iVar5 + uVar2));
          }
        }
      }
      else if ((uStack_c < *(ulong *)(uVar2 + 0x8c)) ||
              (uStack_8 < *(ulong *)(uVar2 + 0x90)))
      {
LAB_1030_9e17:
        puVar1 = (undefined2 *)((int)*(undefined4 *)arg3 + 0xc);
        (*(code *)*puVar1)(0x1008,arg3,lVar8);
        uStack_a2 = 0x0;
      }
    }
  }
  return;
}



// Links a UI building item list node to a specific simulator entity (offset 4).

void * __stdcall16far
UI_Build_Item_List_Node_Set_Building_9ecc(void *node_ptr,void *entity_id)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)node_ptr >> 0x10);
  *(undefined4 *)node_ptr = 0x0;
  *(undefined4 *)((int)(void *)node_ptr + 0x4) = entity_id;
  *(undefined2 *)((int)(void *)node_ptr + 0x8) = 0x0;
  return node_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Core logic for executing building placement. Instantiates a 'PutBldg' command (87f0),
// processes the build event, and optionally triggers specialized site processing
// (a044).

int __stdcall16far
UI_Build_Item_Execute_Placement_Logic_9f7a(void *this_ptr,int type_id)
{
  int iVar1;
  u16 uVar2;
  u16 segment;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined1 local_130 [0x120];
  void *pvStack_10;
  long lStack_c;
  undefined1 local_8 [0x4];
  int iStack_4;
  
  zero_init_struct_6bytes(local_8);
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),type_id);
  if (iVar1 != 0x0)
  {
    iStack_4 = 0x1;
  }
  uVar2 = UI_Build_Item_Execute_Complex_Adjacency_Placement_Logic_a278
                    (this_ptr,local_8,unaff_SS);
  iVar1 = 0x0;
  if (uVar2 != 0x0)
  {
    segment = (u16)((ulong)this_ptr >> 0x10);
    uVar2 = (u16)this_ptr;
    lStack_c = *(long *)((int)*(undefined4 *)(uVar2 + 0x4) + 0x8);
    Simulator_Command_InternalPutBldg_ctor_init_87f0
              (local_130,unaff_SS,0x0,type_id,local_8,unaff_SS,
               *(undefined4 *)((int)*(undefined4 *)(uVar2 + 0x4) + 0x4),lStack_c);
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_130));
    pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(pvStack_10);
    *(int *)this_ptr = (int)pvVar3;
    *(undefined2 *)(uVar2 + 0x2) = (int)((ulong)pvVar3 >> 0x10);
    if (0x0 < iStack_4)
    {
      Simulator_Process_Building_Site_SubEntities_a044
                (uVar2,segment,(undefined1 *)CONCAT22(unaff_SS,local_8),lStack_c);
    }
    iVar1 = 0x1;
  }
  return iVar1;
}
