/*
 * Source: outpost.c
 * Chunk: 86/117
 * Original lines: 97900-99096
 * Boundaries: top-level declarations/definitions only
 */




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
// Extremely complex routine that scans for valid adjacent sites and spawns sub-entities
// (roads, connectors) to bridge new buildings to the infrastructure. Handles multiple
// building type groups (0x7A-0x7D, 0x4C-0x4E).

void __stdcall16far
Simulator_Process_Site_Adjacency_Spawning_951a(void *arg1,void *arg2,void *arg3)
{
  undefined2 *puVar1;
  u16 uVar2;
  astruct_210 *paVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  u32 *puVar10;
  int extraout_DX_02;
  int extraout_DX_03;
  int extraout_DX_04;
  int extraout_DX_05;
  uint uVar11;
  int extraout_DX_06;
  int iVar12;
  astruct_210 *puVar9;
  undefined2 uVar13;
  ulong uVar14;
  u8 *puVar15;
  void *pvVar16;
  undefined2 uVar17;
  void *pvVar18;
  int iVar19;
  undefined4 uStack_5e;
  undefined4 uStack_4c;
  ulong uStack_3e;
  undefined4 uStack_3a;
  undefined4 local_36;
  void *uStack_2e;
  void *pvStack_2a;
  uint uStack_28;
  u16 uStack_26;
  void *pvStack_24;
  void *pvStack_20;
  int iStack_1c;
  u16 uStack_14;
  undefined4 uStack_12;
  int iStack_e;
  int iStack_c;
  long lStack_a;
  astruct_210 *paStack_6;
  astruct_206 *uVar15;
  astruct_207 *puVar7;
  astruct_208 *iVar3;
  astruct_209 *puVar8;
  astruct_211 *puVar17;
  astruct_212 *puVar18;
  astruct_213 *iVar4;
  astruct_214 *iVar5;
  
  lStack_a = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x35);
  iVar19 = (int)((ulong)lStack_a >> 0x10);
  _iStack_e = CONCAT22(iVar19,(int)lStack_a + 0xa);
  uVar2 = Simulator_Process_Site_Adjacency_Validation_9048(arg1,0x0,arg3);
  if (uVar2 != 0x0)
  {
    iStack_1c = 0x0;
    pvStack_20 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                   (_p_ResourceManager,0x8);
    uVar13 = (undefined2)((ulong)pvStack_20 >> 0x10);
    pvStack_24 = (void *)*(long *)((int)(void *)pvStack_20 + 0xe);
    iVar19 = *(int *)((int)(void *)pvStack_20 + 0x10);
    if (iVar19 != 0x0 || (void *)pvStack_24 != NULL)
    {
      init_long_pair(&local_36,(long)CONCAT22(iVar19,(void *)pvStack_24));
      while( true )
      {
        uStack_2e = (void *)get_next_list_item(&local_36);
        uVar11 = (uint)((ulong)uStack_2e >> 0x10);
        pvVar18 = (void *)uStack_2e;
        uVar6 = uVar11 | (uint)pvVar18;
        iVar19 = 0x0;
        if (uVar6 == 0x0) break;
        if ((*(int *)((int)pvVar18 + 0x4) != 0x3e) &&
           (*(int *)((int)pvVar18 + 0x4) != 0x41))
        {
          paVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
          uStack_3a = (astruct_210 *)CONCAT22(uVar6,paVar3);
          if (uVar6 == 0x0 && paVar3 == NULL)
          {
            paStack_6 = NULL;
          }
          else
          {
            uVar2 = *(u16 *)((int)(void *)uStack_2e + 0x4);
            uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
            paVar3->field1_0x2 = 0x1008;
            paVar3->field2_0x4 = uVar2;
            uStack_3a->field0_0x0 = 0x9ec8;
            paVar3->field1_0x2 = 0x1030;
            paStack_6 = uStack_3a;
          }
          puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
          (*(code *)*puVar1)(0x1000,arg2,(void *)paStack_6,
                             (int)((ulong)paStack_6 >> 0x10));
          if (*(int *)((int)(void *)uStack_2e + 0x4) == 0x13)
          {
            iStack_1c = 0x1;
          }
        }
      }
    }
    for (uStack_26 = 0xa; (int)uStack_26 < 0x41; uStack_26 += 0x1)
    {
      if ((((((uStack_26 != 0x37) && (uStack_26 != 0x35)) && (uStack_26 != 0x36)) &&
           ((uStack_26 != 0x25 && (uStack_26 != 0x26)))) &&
          ((uStack_26 != 0x27 &&
           ((*(int *)(uStack_26 * 0x2 + (int)_iStack_e) != 0x0 && (uStack_26 != 0x13))))
          )) && ((uStack_26 != 0x14 || (iStack_1c == 0x0))))
      {
        paVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
        uStack_3a = (astruct_210 *)CONCAT22(iVar19,paVar3);
        if (iVar19 == 0x0 && paVar3 == NULL)
        {
          paStack_6 = NULL;
        }
        else
        {
          uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
          paVar3->field1_0x2 = 0x1008;
          paVar3->field2_0x4 = uStack_26;
          uStack_3a->field0_0x0 = 0x9ec8;
          paVar3->field1_0x2 = 0x1030;
          paStack_6 = uStack_3a;
        }
        puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
        (*(code *)*puVar1)(0x1000,arg2,(void *)paStack_6,(int)((ulong)paStack_6 >> 0x10)
                          );
        iVar19 = extraout_DX;
      }
    }
  }
  uVar13 = (undefined2)((ulong)_iStack_e >> 0x10);
  if (*(int *)((int)_iStack_e + 0x6a) == 0x0)
  {
    if (*(int *)((int)_iStack_e + 0x6c) != 0x0)
    {
      paVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
      uStack_3a = (astruct_210 *)CONCAT22(iVar19,paVar3);
      if (iVar19 == 0x0 && paVar3 == NULL) goto LAB_1030_973e;
      uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
      paVar3->field1_0x2 = 0x1008;
      paVar3->field2_0x4 = 0x36;
      goto LAB_1030_9728;
    }
  }
  else
  {
    paVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
    uStack_3a = (astruct_210 *)CONCAT22(iVar19,paVar3);
    if (iVar19 == 0x0 && paVar3 == NULL)
    {
LAB_1030_973e:
      paStack_6 = NULL;
    }
    else
    {
      uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
      paVar3->field1_0x2 = 0x1008;
      paVar3->field2_0x4 = 0x35;
LAB_1030_9728:
      paVar3->field0_0x0 = 0x9ec8;
      paVar3->field1_0x2 = 0x1030;
      paStack_6 = uStack_3a;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
    (*(code *)*puVar1)(0x1000,arg2,(void *)paStack_6,(int)((ulong)paStack_6 >> 0x10));
    iVar19 = extraout_DX_00;
  }
  uVar13 = (undefined2)((ulong)_iStack_e >> 0x10);
  iVar12 = (int)_iStack_e;
  pvVar18 = (void *)_p_Pool_Type6_Node;
  if (*(int *)(iVar12 + 0x4a) == 0x0)
  {
    if (*(int *)(iVar12 + 0x4c) == 0x0)
    {
      if (*(int *)(iVar12 + 0x4e) == 0x0) goto LAB_1030_97e8;
      puVar9 = validate_and_get_block(pvVar18);
      uStack_3a = (astruct_210 *)CONCAT22(iVar19,puVar9);
      if (iVar19 != 0x0 || puVar9 != NULL)
      {
        uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
        puVar9->field1_0x2 = 0x1008;
        puVar9->field2_0x4 = 0x27;
        goto LAB_1030_9879;
      }
    }
    else
    {
      puVar9 = validate_and_get_block(pvVar18);
      uStack_3a = (astruct_210 *)CONCAT22(iVar19,puVar9);
      if (iVar19 != 0x0 || puVar9 != NULL)
      {
        uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
        puVar9->field1_0x2 = 0x1008;
        puVar9->field2_0x4 = 0x26;
        goto LAB_1030_9879;
      }
    }
LAB_1030_97d0:
    paStack_6 = NULL;
  }
  else
  {
    puVar9 = validate_and_get_block(pvVar18);
    uStack_3a = (astruct_210 *)CONCAT22(iVar19,puVar9);
    if (iVar19 == 0x0 && puVar9 == NULL) goto LAB_1030_97d0;
    uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
    puVar9->field1_0x2 = 0x1008;
    puVar9->field2_0x4 = 0x25;
LAB_1030_9879:
    puVar9->field0_0x0 = 0x9ec8;
    puVar9->field1_0x2 = 0x1030;
    paStack_6 = uStack_3a;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
  (*(code *)*puVar1)(0x1000,arg2,(void *)paStack_6,(int)((ulong)paStack_6 >> 0x10));
  iVar19 = extraout_DX_01;
LAB_1030_97e8:
  uVar13 = (undefined2)((ulong)lStack_a >> 0x10);
  uStack_12 = CONCAT22(uVar13,(int)lStack_a + 0x11e);
  if (*(int *)((int)lStack_a + 0x138) != 0x0)
  {
    puVar4 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    uVar13 = 0x1038;
    puVar10 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e(arg3,puVar4,iVar19);
    uStack_4c = (undefined4 *)CONCAT22(puVar10,puVar4);
    puVar1 = (undefined2 *)((int)*uStack_4c + 0x10);
    uVar14 = (*(code *)*puVar1)(0x1038,puVar4,puVar10);
    iVar19 = (int)(uVar14 >> 0x10);
    for (uStack_3e = 0x0; uStack_3e < uVar14; uStack_3e += 0x1)
    {
      puVar1 = (undefined2 *)((int)*uStack_4c + 0x4);
      puVar15 = (u8 *)(*(code *)*puVar1)(uVar13,puVar4,puVar10,(int)uStack_3e,
                                         (int)(uStack_3e >> 0x10));
      iVar19 = 0xd;
      local_36 = puVar15;
      uStack_2e = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,(u8 *)puVar15);
      pvVar16 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(uStack_2e);
      uVar11 = (uint)((ulong)pvVar16 >> 0x10);
      pvStack_2a = (void *)pvVar16;
      uVar13 = 0x1028;
      uStack_28 = uVar11;
      uVar2 = UI_Item_List_Get_Value_by_ID_Offset6_6744(pvVar16,iVar19);
      uVar11 |= uVar2;
      if (uVar11 != 0x0)
      {
        pvStack_20 = _p_Pool_Type6_Node;
        puVar5 = validate_and_get_block((void *)_p_Pool_Type6_Node);
        uStack_3a = (astruct_210 *)CONCAT22(uVar11,puVar5);
        if (uVar11 == 0x0 && puVar5 == NULL)
        {
          paStack_6 = NULL;
        }
        else
        {
          *(char **)uStack_3a = (char *)s_1_1050_389a;
          puVar5[0x1] = 0x1008;
          puVar5[0x2] = 0x4c;
          *(undefined2 *)uStack_3a = 0x9ec8;
          puVar5[0x1] = 0x1030;
          paStack_6 = uStack_3a;
        }
        puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
        (*(code *)*puVar1)(0x1000,arg2,(undefined2 *)paStack_6,
                           (int)((ulong)paStack_6 >> 0x10));
        pvStack_24 = _p_Pool_Type6_Node;
        iVar19 = extraout_DX_02;
        puVar5 = validate_and_get_block((void *)_p_Pool_Type6_Node);
        uStack_3a = (astruct_210 *)CONCAT22(iVar19,puVar5);
        if (iVar19 == 0x0 && puVar5 == NULL)
        {
          paStack_6 = NULL;
        }
        else
        {
          *(char **)uStack_3a = (char *)s_1_1050_389a;
          puVar5[0x1] = 0x1008;
          puVar5[0x2] = 0x4d;
          *(undefined2 *)uStack_3a = 0x9ec8;
          puVar5[0x1] = 0x1030;
          paStack_6 = uStack_3a;
        }
        puVar5 = (undefined2 *)paStack_6;
        uVar17 = (undefined2)((ulong)paStack_6 >> 0x10);
        puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
        pvVar16 = arg2;
        (*(code *)*puVar1)();
        pvStack_24 = _p_Pool_Type6_Node;
        uVar13 = 0x1000;
        iVar19 = extraout_DX_03;
        paVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
        uStack_3a = (astruct_210 *)CONCAT22(iVar19,paVar3);
        if (iVar19 == 0x0 && paVar3 == NULL)
        {
          paStack_6 = NULL;
        }
        else
        {
          uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
          paVar3->field1_0x2 = 0x1008;
          paVar3->field2_0x4 = 0x4e;
          uStack_3a->field0_0x0 = 0x9ec8;
          paVar3->field1_0x2 = 0x1030;
          paStack_6 = uStack_3a;
        }
        puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
        (*(code *)*puVar1)(0x1000,arg2,paStack_6,pvVar16,puVar5,uVar17);
        iVar19 = extraout_DX_04;
        break;
      }
      iVar19 = 0x0;
    }
    if (uStack_4c != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_4c)(uVar13,puVar4,puVar10,0x1);
      iVar19 = extraout_DX_05;
    }
  }
  for (uStack_14 = 0x7a; (int)uStack_14 < 0x7d; uStack_14 += 0x1)
  {
    if (*(int *)(uStack_14 * 0x2 + (int)_iStack_e) != 0x0)
    {
      paVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
      uStack_5e = (astruct_210 *)CONCAT22(iVar19,paVar3);
      if (iVar19 == 0x0 && paVar3 == NULL)
      {
        paStack_6 = NULL;
      }
      else
      {
        uStack_5e->field0_0x0 = (u16)(char *)s_1_1050_389a;
        paVar3->field1_0x2 = 0x1008;
        paVar3->field2_0x4 = uStack_14;
        uStack_5e->field0_0x0 = 0x9ec8;
        paVar3->field1_0x2 = 0x1030;
        paStack_6 = uStack_5e;
      }
      puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
      (*(code *)*puVar1)(0x1000,arg2,(void *)paStack_6,(int)((ulong)paStack_6 >> 0x10));
      iVar19 = extraout_DX_06;
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



void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_Alternative_9e9c(void *this_ptr,byte flags)
{
  int bucket_index;
  
  bucket_index = (int)((ulong)this_ptr >> 0x10);
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    heap_free_descriptor((void *)this_ptr,bucket_index);
  }
  return this_ptr;
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



// Checks if the building linked to the UI item is active (state 5 or 9) or still under
// construction. Returns 1 if active or null.

u16 __stdcall16far UI_Build_Item_Check_Building_Active_9ef2(void *this_ptr)
{
  int iVar1;
  void *uVar3;
  
  if (*(long *)this_ptr != 0x0)
  {
    uVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(*(void **)this_ptr);
    uVar3._2_2_ = (undefined2)((ulong)uVar3 >> 0x10);
    iVar1 = *(int *)((int)(void *)uVar3 + 0xc);
    if (((iVar1 != 0x5) && (iVar1 != 0x9)) &&
       (*(int *)((int)(void *)uVar3 + 0x12) < 0x5))
    {
      return 0x0;
    }
    UI_Build_Item_Reset_Pointers_9f64(this_ptr);
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Finds the first available building name string index and triggers placement
// initialization (9f7a).

void __stdcall16far UI_Build_Item_Find_String_and_Init_9f40(void *this_ptr,u16 type_id)
{
  int type_id_00;
  
  type_id_00 = res_find_first_available_string_index_logic
                         (_p_StringPropertyTable,type_id);
  *(int *)((int)(void *)this_ptr + 0x8) = type_id_00;
  UI_Build_Item_Execute_Placement_Logic_9f7a(this_ptr,type_id_00);
  return;
}



void __stdcall16far UI_Build_Item_Reset_Pointers_9f64(void *this_ptr)
{
  *(undefined2 *)((int)this_ptr + 0x8) = 0x0;
  *(undefined4 *)this_ptr = 0x0;
  return;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Complex routine that processes the 'footprint' of a building site. Iterates through a
// rectangular region, checks metadata tags (7, 8, 9), and spawns corresponding
// sub-entities (road/tube segments) to integrate the building into the infrastructure.

void __stdcall16far
Simulator_Process_Building_Site_SubEntities_a044
          (u16 offset,u16 segment,void *coords,long entity_id)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  int *unaff_SS;
  bool bVar4;
  u8 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  void *src;
  int *out1;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 local_17e;
  undefined2 uStack_17c;
  int iStack_5a;
  undefined4 *puStack_4e;
  int iStack_46;
  int iStack_44;
  undefined4 uStack_42;
  undefined4 *puStack_3e;
  undefined1 local_3a [0xc];
  undefined4 local_2e;
  undefined2 uStack_2a;
  void *pvStack_28;
  uint16_t uStack_26;
  int local_24;
  int local_22;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_18;
  u8 *puStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  undefined4 uStack_c;
  int local_8;
  int local_6;
  int local_4;
  
  src = (void *)coords;
  out1 = (int *)((ulong)coords >> 0x10);
  unpack_3word_struct(src,out1,&local_8,unaff_SS);
  puVar5 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,coords,(void *)entity_id);
  uStack_12 = (undefined2)((ulong)puVar5 >> 0x10);
  puStack_14 = (u8 *)puVar5;
  pvStack_18 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,puStack_14);
  uStack_1c = *(undefined4 *)((int)(void *)pvStack_18 + 0x2e);
  uStack_20 = *(undefined4 *)((int)uStack_1c + 0x4);
  pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)entity_id);
  uStack_26 = (uint16_t)((ulong)pvVar6 >> 0x10);
  pvStack_28 = (void *)pvVar6;
  puVar7 = Simulator_Get_Entity_Coords_Ptr_5b5c((int)pvStack_28,uStack_26);
  local_2e = *puVar7;
  uStack_2a = *(undefined2 *)((undefined4 *)puVar7 + 0x1);
  puStack_4e = &local_2e;
  unpack_word_pair(&local_2e,unaff_SS,&local_24);
  iStack_e = local_4 + 0x1;
  uStack_c = CONCAT22(local_4 + -0x1,local_6 - 0x1U);
  iStack_10 = local_6 + 0x1;
  if (local_4 + -0x1 < 0x0)
  {
    uStack_c = (ulong)(local_6 - 0x1U);
  }
  if (local_22 <= iStack_e)
  {
    iStack_e = local_22 + -0x1;
  }
  if ((int)uStack_c < 0x0)
  {
    uStack_c &= 0xffff0000;
  }
  if (local_24 <= iStack_10)
  {
    iStack_10 = local_24 + -0x1;
  }
  zero_init_12bytes_struct(local_3a);
  uVar3 = 0x1008;
  pack_two_3word_structs(local_3a,unaff_SS,local_8,iStack_10,iStack_e,local_8,uStack_c);
  puStack_3e = Simulator_Map_Batch_Create_Production_Items_in_Rect_6522
                         (_p_MapContext_5740,(undefined1 *)CONCAT22(unaff_SS,local_3a),
                          entity_id);
  if (puStack_3e != NULL)
  {
    uStack_42 = 0x0;
    iStack_44 = 0x0;
    for (iStack_46 = (int)uStack_c; iStack_46 <= iStack_10; iStack_46 += 0x1)
    {
      for (puStack_4e = (undefined4 *)uStack_c._2_2_; iVar2 = iStack_44,
          (int)puStack_4e <= iStack_e;
          puStack_4e = (undefined4 *)((int)puStack_4e + 0x1))
      {
        iStack_44 += 0x1;
        puVar1 = (undefined2 *)((int)*puStack_3e + 0x4);
        uVar8 = (*(code *)*puVar1)(uVar3,(undefined4 *)puStack_3e,
                                   (int)((ulong)puStack_3e >> 0x10),iVar2);
        iVar2 = (int)uVar8;
        uStack_42._3_1_ = (char)((ulong)uVar8 >> 0x18);
        bVar4 = uStack_42._3_1_ == '\0';
        uStack_42 = uVar8;
        if (bVar4)
        {
          iStack_5a = iVar2;
          if (iVar2 == 0x7)
          {
            pack_3words_reverse(src,(int)out1,local_8,iStack_46);
            uVar10 = (undefined2)uStack_20;
            uVar11 = (undefined2)((ulong)uStack_20 >> 0x10);
            uVar9 = 0x6;
          }
          else if (iVar2 == 0x8)
          {
            pack_3words_reverse(src,(int)out1,local_8,iStack_46);
            uVar10 = (undefined2)uStack_20;
            uVar11 = (undefined2)((ulong)uStack_20 >> 0x10);
            uVar9 = 0x7;
          }
          else
          {
            if (iVar2 != 0x9) goto LAB_1030_a1d0;
            pack_3words_reverse(src,(int)out1,local_8,iStack_46);
            uVar10 = (undefined2)uStack_20;
            uVar11 = (undefined2)((ulong)uStack_20 >> 0x10);
            uVar9 = 0x8;
          }
          uVar3 = 0x1028;
          Simulator_Command_InternalPutBldg_ctor_init_87f0
                    (&local_17e,unaff_SS,0x0,0x0,uVar9,coords,uVar10,uVar11,entity_id);
          Simulator_Global_Process_Build_Event_Type4_835a
                    (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_17e)
                    );
          local_17e = 0x389a;
          uStack_17c = 0x1008;
        }
LAB_1030_a1d0:
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Analyzes the surroundings of a placement site and automatically selects the correct
// building or connector type (IDs 0x73, 0x77, 0x7A, 0x7F) based on neighboring
// infrastructure. Triggers the internal put-building command.

u16 __stdcall16far
UI_Build_Item_Execute_Complex_Adjacency_Placement_Logic_a278
          (astruct_201 *param_1,astruct_200 *param_2)
{
  int in_AX;
  u16 uVar1;
  int iVar2;
  astruct_200 *puVar3;
  astruct_201 *uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  void *pvVar5;
  undefined1 local_134 [0x120];
  void *pvStack_14;
  long lStack_10;
  void *pvStack_c;
  int iStack_6;
  u16 uStack_4;
  
  uStack_4 = 0x1;
  UI_Build_Item_Find_Adjacent_Building_Coord_Wrapper_a39a(param_1,param_2);
  if (in_AX != 0x0)
  {
    return uStack_4;
  }
  iStack_6 = in_AX;
  uVar1 = UI_Build_Item_Find_Adjacent_Group46_Coord_a3ae(param_1,param_2);
  puVar3 = (astruct_200 *)param_2;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  if (uVar1 == 0x0)
  {
    iVar2 = UI_Build_Item_Find_Adjacent_Infrastructure_Coord_a57e(param_1,param_2);
    if (iVar2 == 0x0)
    {
      iVar2 = UI_Build_Item_Find_Adjacent_Group46_Infrastructure_Coord_a844
                        (param_1,param_2);
      if (iVar2 == 0x0)
      {
        uStack_4 = 0x0;
        goto LAB_1030_a305;
      }
      iVar2 = puVar3->field1_0x4;
    }
    else
    {
      iVar2 = puVar3->field1_0x4;
    }
    if (iVar2 < 0x1)
    {
      iStack_6 = 0x73;
    }
    else
    {
      iStack_6 = 0x77;
    }
  }
  else if (puVar3->field1_0x4 < 0x1)
  {
    iStack_6 = 0x7a;
  }
  else
  {
    iStack_6 = 0x7f;
  }
LAB_1030_a305:
  if (iStack_6 != 0x0)
  {
    uVar1 = (u16)((ulong)param_1 >> 0x10);
    uVar3 = (astruct_201 *)param_1;
    lStack_10 = *(long *)((int)uVar3->field3_0x4 + 0x8);
    Simulator_Command_InternalPutBldg_ctor_init_87f0
              (local_134,unaff_SS,0x0,iStack_6,param_2,
               *(undefined4 *)((int)uVar3->field3_0x4 + 0x4),lStack_10);
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_134));
    pvStack_c = pvStack_14;
    pvVar5 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(pvStack_14);
    *(void **)param_1 = (void *)pvVar5;
    uVar3->field2_0x2 = (int)((ulong)pvVar5 >> 0x10);
    if (0x0 < puVar3->field1_0x4)
    {
      Simulator_Process_Building_Site_SubEntities_a044
                ((u16)uVar3,uVar1,param_2,lStack_10);
    }
    uStack_4 = 0x0;
  }
  return uStack_4;
}



// A wrapper that triggers the search for an adjacent coordinate containing a valid
// building.

void __stdcall16far
UI_Build_Item_Find_Adjacent_Building_Coord_Wrapper_a39a(void *this_ptr,void *out_coords)
{
  UI_Build_Item_Find_Adjacent_Building_Coord_aa18(this_ptr,out_coords);
  return;
}
