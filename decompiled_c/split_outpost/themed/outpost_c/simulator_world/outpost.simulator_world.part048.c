/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 48/56
 * Original lines (combined): 106760-107649
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Batch processes efficiency loss for entities in a collection. Calculates remaining
// efficiency and spawns resource-loss items (vtable 0x56CE) to reflect the impact on
// colony stockpiles.

u16 __stdcall16far
Simulator_Process_Entity_Batch_Efficiency_Loss_1d68
          (u16 arg1,u16 arg2,u32 *src_list,u32 dest_list)
{
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  qword qVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong in_EDX;
  undefined2 uVar15;
  undefined2 unaff_CS;
  long lVar16;
  void *pvVar17;
  undefined2 in_stack_0000000a;
  u32 *puVar18;
  undefined2 uVar19;
  undefined4 uStack_5a;
  undefined2 *puStack_52;
  uint uStack_4e;
  undefined1 local_30 [0x4];
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined1 local_20 [0x4];
  undefined4 *puStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  u8 *puStack_14;
  uint uStack_12;
  ulong uStack_10;
  undefined4 uStack_c;
  u16 uStack_8;
  undefined4 uStack_6;
  
  uStack_6 = (void *)0x64;
  uStack_8 = 0x0;
  puVar3 = (undefined2 *)((int)*_src_list + 0x10);
  puVar18 = src_list;
  uVar19 = in_stack_0000000a;
  uVar8 = (*(code *)*puVar3)();
  uStack_c = CONCAT22((int)in_EDX,uVar8);
  uStack_10 = 0x0;
  do
  {
    if (uStack_c <= uStack_10)
    {
      return uStack_8;
    }
    puVar3 = (undefined2 *)((int)*_src_list + 0x4);
    uVar13 = (uint)in_EDX;
    puStack_14 = (u8 *)(*(code *)*puVar3)(unaff_CS,src_list,in_stack_0000000a,uStack_10,
                                          puVar18,uVar19);
    uStack_12 = uVar13;
    in_EDX = (ulong)(uStack_12 | (uint)puStack_14);
    if ((uStack_12 | (uint)puStack_14) != 0x0)
    {
      pvVar17 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,puStack_14);
      uStack_16 = (undefined2)((ulong)pvVar17 >> 0x10);
      uStack_18 = SUB42(pvVar17,0x0);
      unaff_CS = 0x1030;
      puStack_1c = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar17);
      uVar13 = (uint)((ulong)puStack_1c >> 0x10);
      in_EDX = (ulong)uVar13;
      puVar3 = (undefined2 *)((int)*puStack_1c + 0x40);
      iVar10 = (*(code *)*puVar3)(0x1030,(undefined4 *)puStack_1c,uVar13,local_20);
      if (iVar10 == 0x0)
      {
        uStack_24 = UI_Build_Item_Calculate_Efficiency_Remaining_Logic(puStack_1c);
        uStack_8 = 0x1;
        puStack_28 = (undefined4 *)*(long *)((int)dest_list + 0x22);
        init_long_pair(local_30,(long)puStack_28);
        while( true )
        {
          unaff_CS = 0x1008;
          lVar16 = get_next_list_item(local_30);
          uVar12 = (uint)((ulong)lVar16 >> 0x10);
          uVar13 = (uint)lVar16;
          in_EDX = (ulong)(uVar12 | uVar13);
          if ((uVar12 | uVar13) == 0x0) break;
          uVar8 = *(undefined2 *)(uVar13 + 0x4);
          iVar10 = *(int *)(uVar13 + 0x6);
          uVar1 = *(undefined2 *)(uVar13 + 0x8);
          uVar2 = *(uint *)(uVar13 + 0xa);
          uVar5 = *(uint *)(uVar13 + 0xc) / uVar2;
          bVar7 = false;
          if (((0x0 < iVar10) && (!SBORROW2(iVar10,0x1))) &&
             ((iVar10 == 0x5 || iVar10 + -0x1 < 0x4 || (iVar10 == 0x8))))
          {
            bVar7 = true;
          }
          if (bVar7)
          {
            pvVar17 = uStack_24;
            uVar6 = uStack_24._2_2_;
            if (uStack_6 < uStack_24)
            {
              pvVar17 = (void *)((ulong)uStack_6 & 0xffff);
              uVar6 = uStack_6._2_2_;
            }
            uVar9 = (uint)pvVar17;
            in_EDX = (ulong)(uVar6 | uVar9);
            if ((uVar6 | uVar9) == 0x0) break;
            qVar4 = (qword)CONCAT22(uVar6,uVar9) / (qword)uVar5;
            iVar14 = (int)(qVar4 >> 0x10);
            uStack_4e = (uint)qVar4;
            if (uStack_4e < uVar2)
            {
              *(int *)(uVar13 + 0xc) = *(int *)(uVar13 + 0xc) - uVar9;
              *(int *)(uVar13 + 0xa) = *(int *)(uVar13 + 0xa) - uStack_4e;
            }
            else
            {
              puVar3 = (undefined2 *)((int)*puStack_28 + 0xc);
              (*(code *)*puVar3)(0x1008,(undefined4 *)puStack_28,
                                 (int)((ulong)puStack_28 >> 0x10),lVar16);
              uStack_2c = 0x0;
              uStack_4e = uVar2;
            }
            puVar11 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
            uStack_5a = (undefined2 *)CONCAT22(iVar14,puVar11);
            if (iVar14 == 0x0 && puVar11 == NULL)
            {
              puStack_52 = NULL;
            }
            else
            {
              *uStack_5a = (char *)s_1_1050_389a;
              puVar11[0x1] = 0x1008;
              puVar11[0x2] = 0x0;
              puVar11[0x3] = 0x0;
              puVar11[0x4] = 0x0;
              puVar11[0x5] = 0x0;
              puVar11[0x6] = 0x0;
              *uStack_5a = 0x56ce;
              puVar11[0x1] = 0x1018;
              puStack_52 = uStack_5a;
            }
            uVar15 = (undefined2)((ulong)puStack_52 >> 0x10);
            puVar11 = (undefined2 *)puStack_52;
            puVar11[0x5] = uStack_4e;
            puVar11[0x6] = uStack_4e * uVar5;
            puVar11[0x2] = uVar8;
            puVar11[0x3] = iVar10;
            puVar11[0x4] = uVar1;
            UI_Item_List_Upsert_Item_by_Metadata_Logic_6408(puStack_1c,puStack_52);
          }
        }
      }
      else
      {
        puVar3 = (undefined2 *)((int)*_src_list + 0x8);
        (*(code *)*puVar3)(0x1030,src_list,in_stack_0000000a,0x0,uStack_10);
      }
    }
    uStack_10 += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes efficiency loss for a batch of entities by iterating through a collection.

undefined2 __stdcall16far
Simulator_Process_Batch_Efficiency_Loss_1faa
          (undefined4 param_1,u32 *param_2,undefined2 param_3,undefined4 *param_4)
{
  undefined2 *puVar1;
  u8 *packed_id;
  u16 uVar2;
  void *pvVar3;
  ulong local_a;
  ulong local_6;
  
  puVar1 = (undefined2 *)((int)*param_4 + 0x10);
  local_6 = (*(code *)*puVar1)();
  local_a = 0x0;
  while( true )
  {
    if (local_6 <= local_a)
    {
      return 0x1;
    }
    puVar1 = (undefined2 *)((int)*param_4 + 0x4);
    packed_id = (u8 *)(*(code *)*puVar1)();
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
    uVar2 = Simulator_Process_Entity_Batch_Efficiency_Loss_1d68
                      ((u16)param_1,(u16)((ulong)param_1 >> 0x10),param_2,(u32)pvVar3);
    if (uVar2 == 0x0) break;
    local_a += 0x1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates and processes per-turn resource consumption for a population category.
// Pops resource items from the entity's list, deducts amounts from stockpiles, and
// spawns consumption records.

bool __stdcall16far
Simulator_Process_Population_Category_Consumption_201a(u16 arg1,u16 arg2,void *this_ptr)
{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  u16 *puVar7;
  u16 uVar8;
  ulong uVar9;
  void *pvVar10;
  uint uVar11;
  long lVar12;
  void *pvVar13;
  undefined2 unaff_SI;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined4 *puVar16;
  u16 *puVar17;
  undefined4 uStack_14;
  u16 uStack_a;
  
  uVar15 = 0x1030;
  puVar16 = UI_Component_Pop_Resource_SubObject_Logic_6b16(this_ptr);
  iVar3 = (int)((ulong)puVar16 >> 0x10);
  puVar5 = (undefined4 *)puVar16;
  if (iVar3 == 0x0 && puVar5 == NULL)
  {
    return false;
  }
  uVar14 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar13 = (void *)this_ptr;
  iVar1 = *(int *)((int)pvVar13 + 0x34);
  lVar12 = (long)iVar1;
  uVar2 = lVar12 * 0x64;
  uVar4 = (undefined2)(uVar2 >> 0x10);
  uStack_a = 0x0;
  uStack_14 = NULL;
  if (*(int *)(puVar5 + 0x1) == 0x0)
  {
    if (*(int *)((int)puVar5 + 0x6) == 0x0)
    {
      if (*(int *)(puVar5 + 0x2) == 0x0) goto LAB_1038_2102;
      uVar8 = Map_Entity_Type_to_Specific_ID_Helper_c42e(*(int *)(puVar5 + 0x2));
      uVar9 = (ulong)*(uint *)((int)puVar5 + 0xa) * (ulong)uVar8;
      uVar15 = (int)(uVar9 >> 0x10);
      if (uVar9 + lVar12 * -0x64 != 0x0 && (long)uVar2 <= (long)uVar9)
      {
        uVar9 = uVar2 & 0xffff;
        uVar15 = uVar4;
      }
      lVar12 = CONCAT22(uVar15,(int)uVar9);
      pvVar10 = (void *)(CONCAT22(uVar15,(int)uVar9) / (long)(ulong)uVar8);
      *(int *)((int)puVar5 + 0xa) = *(int *)((int)puVar5 + 0xa) - (int)(void *)pvVar10;
      uStack_a = (u16)(lVar12 / 0x64);
      lVar12 %= 0x64;
      if (lVar12 != 0x0)
      {
        uStack_a += 0x1;
      }
      pvVar6 = allocate_memory(CONCAT22(unaff_SI,0x2a));
      if ((int)lVar12 == 0x0 && pvVar6 == NULL) goto LAB_1038_20fa;
      puVar17 = Simulator_Resource_Change_Item_ctor_Flavor4_6838
                          ((void *)CONCAT22((int)lVar12,pvVar6),pvVar10,
                           *(u16 *)(puVar5 + 0x2),uStack_a,
                           (void *)*(undefined4 *)((int)pvVar13 + 0x4));
      uVar11 = (uint)((ulong)puVar17 >> 0x10);
      puVar7 = (u16 *)puVar17;
    }
    else
    {
      uVar8 = Map_Entity_Type_to_Grouping_ID_Logic_c3b4(*(u16 *)((int)puVar5 + 0x6));
      uVar9 = (ulong)*(uint *)((int)puVar5 + 0xa) * (ulong)uVar8;
      uVar15 = (int)(uVar9 >> 0x10);
      if (uVar9 + lVar12 * -0x64 != 0x0 && (long)uVar2 <= (long)uVar9)
      {
        uVar9 = uVar2 & 0xffff;
        uVar15 = uVar4;
      }
      lVar12 = CONCAT22(uVar15,(int)uVar9);
      pvVar10 = (void *)(CONCAT22(uVar15,(int)uVar9) / (long)(ulong)uVar8);
      *(int *)((int)puVar5 + 0xa) = *(int *)((int)puVar5 + 0xa) - (int)(void *)pvVar10;
      uStack_a = (u16)(lVar12 / 0x64);
      lVar12 %= 0x64;
      if (lVar12 != 0x0)
      {
        uStack_a += 0x1;
      }
      pvVar6 = allocate_memory(CONCAT22(unaff_SI,0x2a));
      uVar11 = (uint)lVar12 | (uint)pvVar6;
      if (uVar11 == 0x0) goto LAB_1038_20fa;
      puVar7 = Simulator_Resource_Change_Item_ctor_Flavor3_675c
                         ((void *)CONCAT22((uint)lVar12,pvVar6),pvVar10,
                          *(u16 *)((int)puVar5 + 0x6),uStack_a,
                          (void *)*(undefined4 *)((int)pvVar13 + 0x4));
    }
  }
  else
  {
    uVar11 = *(uint *)((int)puVar5 + 0xa);
    uVar9 = (ulong)uVar11;
    if (((long)uVar2 < 0x10000) &&
       ((0x7fffffff < uVar2 || (uVar9 = (ulong)uVar11, (uint)uVar2 < uVar11))))
    {
      uVar9 = uVar2;
    }
    *(int *)((int)puVar5 + 0xa) = *(int *)((int)puVar5 + 0xa) - (u16)uVar9;
    uStack_a = (u16)((long)uVar9 / 0x64);
    lVar12 = (long)uVar9 % 0x64;
    if (lVar12 != 0x0)
    {
      uStack_a += 0x1;
    }
    pvVar6 = allocate_memory(CONCAT22(unaff_SI,0x2a));
    uVar11 = (uint)lVar12 | (uint)pvVar6;
    if (uVar11 == 0x0)
    {
LAB_1038_20fa:
      uVar15 = 0x1000;
      uStack_14 = NULL;
      goto LAB_1038_2102;
    }
    puVar7 = Simulator_Resource_Change_Item_ctor_Flavor1_6590
                       ((void *)CONCAT22((uint)lVar12,pvVar6),(u16)uVar9,
                        (u16)(uVar9 >> 0x10),*(u16 *)(puVar5 + 0x1),uStack_a,
                        (void *)*(undefined4 *)((int)pvVar13 + 0x4));
  }
  uVar15 = 0x1000;
  uStack_14 = (u16 *)CONCAT22(uVar11,puVar7);
LAB_1038_2102:
  if (uStack_14 != NULL)
  {
    Simulator_Turn_Manager_Process_Tick_vcall_4_7a5a((u32 *)_p_SimulatorTurnManager);
    uVar15 = 0x1030;
    UI_Component_Set_Cap_Value_Logic_6c4c(this_ptr,iVar1 - uStack_a);
  }
  if (*(int *)((int)puVar5 + 0xa) == 0x0)
  {
    if (iVar3 != 0x0 || puVar5 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar16)(uVar15,puVar5,iVar3,0x1);
    }
  }
  else
  {
    UI_Component_Execute_Resource_Action_and_Notify_6c66(this_ptr,0x0,puVar5,iVar3);
  }
  return uStack_14 != NULL;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates and processes per-turn resource consumption for maintenance-heavy
// entities. Iterates through the entity's maintenance requirements and deducts from
// colony stockpiles.

void __stdcall16far
Simulator_Process_Maintenance_Category_Consumption_2306
          (u16 arg1,u16 arg2,void *this_ptr)
{
  int *piVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  qword qVar4;
  undefined4 *puVar5;
  void *pvVar6;
  u16 *puVar7;
  uint uVar8;
  undefined2 uVar9;
  uint uVar10;
  ulong uVar11;
  void *pvVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  void *pvVar15;
  u16 *puVar16;
  undefined2 in_stack_0000ffc6;
  undefined4 uStack_2a;
  undefined4 uStack_22;
  uint uStack_1e;
  ulong uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  int iStack_8;
  
  uVar14 = 0x1030;
  pvVar15 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  uVar8 = (uint)((ulong)pvVar15 >> 0x10);
  uVar11 = (ulong)uVar8;
  uVar13 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar12 = (void *)this_ptr;
  iStack_8 = *(int *)((int)pvVar12 + 0x34);
  uStack_c = 0x64;
  puVar2 = (undefined4 *)*(undefined4 *)((int)(void *)pvVar15 + 0x22);
  while( true )
  {
    uVar8 = (uint)uVar11;
    puVar3 = (undefined2 *)((int)*puVar2 + 0x10);
    puVar5 = (undefined4 *)
             (*(code *)*puVar3)(uVar14,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10)
                               );
    uStack_14 = (undefined4 *)CONCAT22(uVar8,puVar5);
    if (uVar8 == 0x0 && puVar5 == NULL) break;
    if (*(int *)((int)puVar5 + 0xa) == 0x0)
    {
      uVar11 = (ulong)(uVar8 | (uint)puVar5);
      if ((uVar8 | (uint)puVar5) != 0x0)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*uStack_14)(uVar14,puVar5,uVar8,0x1);
      }
    }
    else
    {
      uStack_18 = 0x0;
      uStack_1e = 0x0;
      if (*(int *)((int)puVar5 + 0x6) == 0x0)
      {
        if (*(int *)(puVar5 + 0x2) != 0x0)
        {
          uStack_1e = Map_Entity_Type_to_Specific_ID_Helper_c42e(*(int *)(puVar5 + 0x2))
          ;
          goto LAB_1038_2385;
        }
      }
      else
      {
        uStack_1e = Map_Entity_Type_to_Grouping_ID_Logic_c3b4
                              (*(u16 *)((int)puVar5 + 0x6));
LAB_1038_2385:
        uVar14 = 0x1020;
        uStack_18 = (ulong)(*(int *)((int)puVar5 + 0xa) * uStack_1e);
      }
      uVar9 = 0x0;
      if (uStack_c < uStack_18)
      {
        uStack_18 = uStack_c & 0xffff;
        uVar9 = uStack_c._2_2_;
      }
      uStack_22 = CONCAT22(uVar9,(int)uStack_18);
      uVar11 = CONCAT22(uVar9,(int)uStack_18);
      qVar4 = (qword)uVar11 / (qword)(ulong)uStack_1e;
      pvVar15 = (void *)qVar4;
      uVar11 %= (ulong)uStack_1e;
      piVar1 = (int *)((int)puVar5 + 0xa);
      *piVar1 = *piVar1 - (int)qVar4;
      if (*piVar1 == 0x0)
      {
        uVar11 = (ulong)(uVar8 | (uint)puVar5);
        if ((uVar8 | (uint)puVar5) != 0x0)
        {
          (*(code *)*(undefined2 *)(undefined2 *)*uStack_14)(uVar14,puVar5,uVar8,0x1);
        }
      }
      else
      {
        puVar3 = (undefined2 *)((int)*puVar2 + 0x8);
        (*(code *)*puVar3)();
      }
      uVar10 = (uint)uVar11;
      uStack_c -= uStack_22;
      uStack_2a = NULL;
      if (*(int *)((int)puVar5 + 0x6) == 0x0)
      {
        if (*(int *)(puVar5 + 0x2) != 0x0)
        {
          pvVar6 = allocate_memory(CONCAT22(in_stack_0000ffc6,0x2a));
          uVar11 = (ulong)(uVar10 | (uint)pvVar6);
          if ((uVar10 | (uint)pvVar6) == 0x0) goto LAB_1038_244e;
          puVar16 = Simulator_Resource_Change_Item_ctor_Flavor4_6838
                              ((void *)CONCAT22(uVar10,pvVar6),pvVar15,
                               *(u16 *)(puVar5 + 0x2),0x1,
                               (void *)*(undefined4 *)((int)pvVar12 + 0x4));
          uVar11 = (ulong)puVar16 >> 0x10;
          puVar7 = (u16 *)puVar16;
          goto LAB_1038_24b3;
        }
      }
      else
      {
        pvVar6 = allocate_memory(CONCAT22(in_stack_0000ffc6,0x2a));
        uVar11 = (ulong)(uVar10 | (uint)pvVar6);
        if ((uVar10 | (uint)pvVar6) == 0x0)
        {
LAB_1038_244e:
          uVar14 = 0x1000;
          uStack_2a = NULL;
        }
        else
        {
          puVar7 = Simulator_Resource_Change_Item_ctor_Flavor3_675c
                             ((void *)CONCAT22(uVar10,pvVar6),pvVar15,
                              *(u16 *)((int)puVar5 + 0x6),0x1,
                              (void *)*(undefined4 *)((int)pvVar12 + 0x4));
LAB_1038_24b3:
          uVar14 = 0x1000;
          uStack_2a = (u16 *)CONCAT22((int)uVar11,puVar7);
        }
      }
      if (uStack_2a != NULL)
      {
        Simulator_Turn_Manager_Process_Tick_vcall_4_7a5a((u32 *)_p_SimulatorTurnManager)
        ;
        iStack_8 += -0x1;
        if (iStack_8 == 0x0) break;
        uStack_c = 0x64;
      }
    }
  }
  UI_Component_Set_Cap_Value_Logic_6c4c(this_ptr,iStack_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes a specialized resource drain event for entities. Transfers values from the
// entity's internal list to a temporary collection and spawns drain records (using
// 666E) until the target amount is met.

void __stdcall16far
Simulator_Process_Entity_Resource_Drain_Logic_24e8(u16 arg1,u16 arg2,void *this_ptr)
{
  int iVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  u16 *puVar8;
  uint uVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  void *pvVar12;
  undefined2 in_stack_0000ffc2;
  uint uStack_1e;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined2 local_14;
  uint uStack_12;
  undefined4 uStack_10;
  void *pvStack_c;
  int iStack_8;
  void *pvStack_6;
  
  pvStack_6 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  iVar5 = (int)((ulong)pvStack_6 >> 0x10);
  uVar11 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar10 = (int)this_ptr;
  iStack_8 = *(int *)(iVar10 + 0x34);
  pvStack_c = (void *)*(undefined4 *)((int)pvStack_6 + 0x28);
  uStack_10 = 0x64;
  uStack_12 = *(uint *)((int)pvStack_c + 0x4);
  pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffc2,0xa));
  if (iVar5 == 0x0 && pvVar3 == NULL)
  {
    pvVar3 = NULL;
    uVar6 = 0x0;
  }
  else
  {
    pvVar12 = UI_Item_List_ctor_init_logic((void *)CONCAT22(iVar5,pvVar3),0x5,0x5);
    uVar6 = (undefined2)((ulong)pvVar12 >> 0x10);
    pvVar3 = (void *)pvVar12;
  }
  uStack_1c = (void *)CONCAT22(uVar6,pvVar3);
  for (uStack_1e = 0x0; uStack_1e < uStack_12; uStack_1e += 0x1)
  {
    UI_Item_List_Get_Item_at_Index_Logic
              (pvStack_c,(undefined4 *)CONCAT22(unaff_SS,&local_18),
               (undefined2 *)CONCAT22(unaff_SS,&local_14),uStack_1e);
    if (local_18 != 0x0)
    {
      uVar4 = local_18;
      iVar5 = local_18._2_2_;
      if (uStack_10 < local_18)
      {
        uVar4 = uStack_10 & 0xffff;
        iVar5 = uStack_10._2_2_;
      }
      uVar9 = (uint)uVar4;
      iVar1 = (uint)local_18 - uVar9;
      iVar2 = (local_18._2_2_ - iVar5) - (uint)((uint)local_18 < uVar9);
      local_18 = CONCAT22(iVar2,iVar1);
      iVar7 = iVar5;
      UI_Item_List_Set_Item_Value_Logic
                ((int)pvStack_c,(int)((ulong)pvStack_c >> 0x10),iVar1,iVar2,local_14);
      uVar6 = (undefined2)((ulong)uStack_1c >> 0x10);
      UI_Item_List_Add_Value_to_Item_Logic((int)uStack_1c,uVar6,uVar9,iVar5,local_14);
      uStack_10 -= CONCAT22(iVar5,uVar9);
      if (uStack_10 == 0x0)
      {
        pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffc2,0x2a));
        if (iVar7 == 0x0 && pvVar3 == NULL)
        {
          puVar8 = NULL;
        }
        else
        {
          puVar8 = Simulator_Resource_Change_Item_ctor_Flavor2_SumList_666e
                             (pvVar3,iVar7,(int)uStack_1c,uVar6,0x1,
                              (int)*(undefined4 *)(iVar10 + 0x4),
                              (int)((ulong)*(undefined4 *)(iVar10 + 0x4) >> 0x10));
        }
        Simulator_Turn_Manager_Process_Tick_vcall_4_7a5a((u32 *)_p_SimulatorTurnManager)
        ;
        pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffc2,0xa));
        if (puVar8 == NULL && pvVar3 == NULL)
        {
          pvVar3 = NULL;
          uVar6 = 0x0;
        }
        else
        {
          pvVar12 = UI_Item_List_ctor_init_logic
                              ((void *)CONCAT22(puVar8,pvVar3),0x5,0x5);
          uVar6 = (undefined2)((ulong)pvVar12 >> 0x10);
          pvVar3 = (void *)pvVar12;
        }
        uStack_1c = (void *)CONCAT22(uVar6,pvVar3);
        iStack_8 += -0x1;
        if (iStack_8 == 0x0) break;
        uStack_10 = 0x64;
      }
    }
  }
  pvVar12 = UI_Item_List_Sum_Values_Logic(uStack_1c);
  uVar9 = (uint)((ulong)pvVar12 >> 0x10) | (uint)pvVar12;
  if (uVar9 == 0x0)
  {
    if (uStack_1c != NULL)
    {
      UI_Item_List_Free_Data_Pointer_Logic(uStack_1c);
      free_if_not_null((void *)uStack_1c);
    }
  }
  else
  {
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffc2,0x2a));
    if (uVar9 != 0x0 || pvVar3 != NULL)
    {
      Simulator_Resource_Change_Item_ctor_Flavor2_SumList_666e
                (pvVar3,uVar9,(void *)uStack_1c,(int)((ulong)uStack_1c >> 0x10),0x1,
                 (int)*(undefined4 *)(iVar10 + 0x4),
                 (int)((ulong)*(undefined4 *)(iVar10 + 0x4) >> 0x10));
    }
    Simulator_Turn_Manager_Process_Tick_vcall_4_7a5a((u32 *)_p_SimulatorTurnManager);
  }
  UI_Component_Set_Cap_Value_Logic_6c4c(this_ptr,iStack_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Highly complex per-turn routine for colony components. Aggregates production values
// into managed lists, spawns resource change tracking items, and notifies the Turn
// Manager. Manages capacity scaling and caps.

void __stdcall16far
Colony_Process_Component_Turn_Production_Logic_26ee(u16 arg1,u16 arg2,void *this_ptr)
{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  u16 *puVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  void *pvVar8;
  void *pvVar9;
  undefined2 in_stack_0000ffcc;
  void *pvStack_14;
  int iStack_12;
  undefined4 uStack_10;
  u16 uStack_c;
  u16 uStack_a;
  int iStack_8;
  
  pvVar8 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  iVar3 = (int)((ulong)pvVar8 >> 0x10);
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar6 = (int)this_ptr;
  iStack_8 = *(int *)(iVar6 + 0x34);
  uStack_c = UI_Build_Item_Get_and_Refresh_State_20_Logic_0d80(pvVar8);
  uStack_10 = (void *)0x64;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffcc,0xa));
  uStack_a = uStack_c;
  if (iVar3 == 0x0 && pvVar2 == NULL)
  {
    pvStack_14 = NULL;
    iStack_12 = 0x0;
  }
  else
  {
    pvVar9 = UI_Item_List_ctor_init_logic((void *)CONCAT22(iVar3,pvVar2),0x5,0x5);
    iStack_12 = (int)((ulong)pvVar9 >> 0x10);
    pvStack_14 = (void *)pvVar9;
  }
  do
  {
    pvVar9 = UI_Component_Find_Item_in_List_22_Logic_7c28(this_ptr,uStack_a);
    uVar5 = (uint)((ulong)pvVar9 >> 0x10);
    if (pvVar9 != NULL)
    {
      pvVar1 = pvVar9;
      if ((uStack_10._2_2_ <= uVar5) &&
         ((uVar5 != uStack_10._2_2_ || ((uint)uStack_10 < (uint)pvVar9))))
      {
        pvVar1 = uStack_10;
      }
      iVar3 = (int)((ulong)pvVar1 >> 0x10);
      UI_Component_Set_List_Value_at_22_Logic_7d1c
                (this_ptr,(long)pvVar9 - (long)pvVar1,uStack_a);
      UI_Item_List_Add_Value_to_Item_Logic(pvStack_14,iStack_12,pvVar1,uStack_a);
      uStack_10 = (void *)((long)uStack_10 - (long)pvVar1);
      if (uStack_10 == NULL)
      {
        pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffcc,0x2a));
        if (iVar3 == 0x0 && pvVar2 == NULL)
        {
          puVar4 = NULL;
        }
        else
        {
          puVar4 = Simulator_Resource_Change_Item_ctor_Flavor2_SumList_666e
                             (pvVar2,iVar3,pvStack_14,iStack_12,0x1,
                              (int)*(undefined4 *)(iVar6 + 0x4),
                              (int)((ulong)*(undefined4 *)(iVar6 + 0x4) >> 0x10));
        }
        Simulator_Turn_Manager_Process_Tick_vcall_4_7a5a((u32 *)_p_SimulatorTurnManager)
        ;
        pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffcc,0xa));
        if (puVar4 == NULL && pvVar2 == NULL)
        {
          pvStack_14 = NULL;
          iStack_12 = 0x0;
        }
        else
        {
          pvVar9 = UI_Item_List_ctor_init_logic((void *)CONCAT22(puVar4,pvVar2),0x5,0x5)
          ;
          iStack_12 = (int)((ulong)pvVar9 >> 0x10);
          pvStack_14 = (void *)pvVar9;
        }
        iStack_8 += -0x1;
        if (iStack_8 == 0x0) break;
        uStack_10 = (void *)0x64;
      }
    }
    uStack_a = UI_Build_Item_Get_and_Refresh_State_20_Logic_0d80(pvVar8);
    if (uStack_c == 0x0)
    {
      uStack_c = uStack_a;
    }
  } while (uStack_c != uStack_a);
  pvVar8 = UI_Item_List_Sum_Values_Logic((void *)CONCAT22(iStack_12,pvStack_14));
  uVar5 = (uint)((ulong)pvVar8 >> 0x10) | (uint)pvVar8;
  if (uVar5 == 0x0)
  {
    if (iStack_12 != 0x0 || pvStack_14 != NULL)
    {
      UI_Item_List_Free_Data_Pointer_Logic((void *)CONCAT22(iStack_12,pvStack_14));
      free_if_not_null(pvStack_14);
    }
  }
  else
  {
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffcc,0x2a));
    if (uVar5 != 0x0 || pvVar2 != NULL)
    {
      Simulator_Resource_Change_Item_ctor_Flavor2_SumList_666e
                (pvVar2,uVar5,pvStack_14,iStack_12,0x1,(int)*(undefined4 *)(iVar6 + 0x4)
                 ,(int)((ulong)*(undefined4 *)(iVar6 + 0x4) >> 0x10));
    }
    Simulator_Turn_Manager_Process_Tick_vcall_4_7a5a((u32 *)_p_SimulatorTurnManager);
  }
  UI_Component_Set_Cap_Value_Logic_6c4c(this_ptr,iStack_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Main turn maintenance function, handles periodic building expansion and turn manager
// updates.

undefined2 __stdcall16far Simulator_Global_Turn_Maintenance_and_Update_290e(void)
{
  void *colony_ptr;
  
  colony_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)0x1);
  if (colony_ptr != NULL)
  {
    Simulator_Process_Periodic_Building_Expansion_4918((u32)colony_ptr);
  }
  Simulator_Turn_Manager_Batch_Update_Logic_7a76(_p_SimulatorTurnManager);
  return 0x1;
}



// Another clone logic function (likely for SCRoboMove).

undefined2 * __stdcall16far Simulator_Object_Clone_Logic_2944(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *local_a = (char *)s_fem110_wav_1050_29fa + 0x4;
    puVar3[0x1] = 0x1038;
    local_6 = local_a;
  }
  return local_6;
}
