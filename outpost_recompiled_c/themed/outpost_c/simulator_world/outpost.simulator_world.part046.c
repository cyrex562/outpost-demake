/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 46/56
 * Original lines (combined): 105000-105901
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Alternative routine for calculating population growth quotas, typically used for
// larger turn ranges or different environmental conditions. Spawns Type 0x9C52 items.

void __stdcall16far
Simulator_Process_Population_Growth_Quota_Alternative_05d8
          (u16 arg1,u16 arg2,int factor,void *colony_ptr)
{
  ulong uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  void *in_stack_0000000a;
  u16 local_158 [0x8c];
  u32 uStack_40;
  undefined2 local_34;
  undefined2 uStack_32;
  void *pvStack_22;
  undefined4 uStack_1e;
  undefined4 uStack_1a;
  undefined4 uStack_16;
  undefined4 local_12;
  int local_e;
  u16 uStack_c;
  undefined4 uStack_a;
  ulong uStack_6;
  
  uStack_6 = *_p_SimulatorWorldContext;
  uStack_a = 0x0;
  uStack_c = 0x0;
  UI_Component_Get_Internal_Data_1C_1E
            ((void *)CONCAT22((void *)colony_ptr,in_stack_0000000a),
             (undefined4 *)CONCAT22(unaff_SS,&local_12),
             (int *)CONCAT22(unaff_SS,&local_e));
  uStack_16 = NULL;
  uStack_1a = 0x0;
  uStack_1e = 0x0;
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined2 *)CONCAT22(unaff_SS,&local_34),0x1,0x0,0x400);
  do
  {
    do
    {
      pvStack_22 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                             ((undefined2 *)CONCAT22(unaff_SS,&local_34));
      uVar2 = (undefined2)((ulong)pvStack_22 >> 0x10);
      if (pvStack_22 == NULL) goto LAB_1038_0668;
    } while (*(long *)((int)(void *)pvStack_22 + 0x200) != 0x8000002);
    uStack_1a = *(undefined4 *)((int)(void *)pvStack_22 + 0x1f6);
    uStack_16 = pvStack_22;
    uStack_1e = Colony_Calculate_Sum_All_Resources_38b8
                          ((int)uStack_1a,(u16)((ulong)uStack_1a >> 0x10));
  } while ((int)(uStack_1e >> 0x10) == 0x0 && (int)uStack_1e == 0x0);
LAB_1038_0668:
  local_34 = 0x389a;
  uStack_32 = 0x1008;
  if (uStack_16._2_2_ == 0x0 && (void *)uStack_16 == NULL)
  {
    return;
  }
  if (factor == 0x3e8)
  {
    if (local_e != 0x10)
    {
      uStack_a = (long)uStack_1e / 0x4;
      uStack_c = 0x10;
      goto LAB_1038_0841;
    }
  }
  else if (factor < 0x3de)
  {
    if (factor < 0x3cf)
    {
      if (factor < 0x3b6)
      {
        if (factor < 0x39d)
        {
          if (factor < 0x384)
          {
            if (factor < 0x352)
            {
              if ((factor < 0x320) || (uStack_6 % 0x14 != 0x0)) goto LAB_1038_0841;
              if (local_e != 0x9)
              {
                uStack_a = (long)uStack_1e / 0x64;
                uStack_c = 0x9;
                goto LAB_1038_0841;
              }
            }
            else
            {
              if (uStack_6 % 0xa != 0x0) goto LAB_1038_0841;
              if (local_e != 0xa)
              {
                uStack_a = (long)uStack_1e / 0x64;
                uStack_c = 0xa;
                goto LAB_1038_0841;
              }
            }
          }
          else
          {
            if (uStack_6 % 0x5 != 0x0) goto LAB_1038_0841;
            if (local_e != 0xb)
            {
              uStack_a = (long)uStack_1e / 0x64;
              uStack_c = 0xb;
              goto LAB_1038_0841;
            }
          }
        }
        else
        {
          if (uStack_6 % 0x3 != 0x0) goto LAB_1038_0841;
          if (local_e != 0xc)
          {
            uStack_a = (long)uStack_1e / 0x64;
            uStack_c = 0xc;
            goto LAB_1038_0841;
          }
        }
      }
      else if (local_e != 0xd)
      {
        uStack_a = (long)uStack_1e / 0x64;
        uStack_c = 0xd;
        goto LAB_1038_0841;
      }
    }
    else if (local_e != 0xe)
    {
      uStack_a = (long)uStack_1e / 0x14;
      uStack_c = 0xe;
      goto LAB_1038_0841;
    }
  }
  else if (local_e != 0xf)
  {
    uStack_a = (long)uStack_1e / 0xa;
    uStack_c = 0xf;
    goto LAB_1038_0841;
  }
  uVar1 = uStack_1e;
  uVar2 = uStack_1e._2_2_;
  if ((long)local_12 < (long)uStack_1e)
  {
    uVar1 = local_12 & 0xffff;
    uVar2 = local_12._2_2_;
  }
  uStack_a = CONCAT22(uVar2,(int)uVar1);
LAB_1038_0841:
  if (uStack_c != 0x0)
  {
    if ((uStack_1e != 0x0) && (uStack_a == 0x0))
    {
      uStack_a = 0x1;
    }
    UI_Component_Set_Internal_Data_1C_1E
              ((u32)CONCAT22((void *)colony_ptr,in_stack_0000000a),uStack_a,uStack_c);
  }
  if (uStack_a._2_2_ != 0x0 || (int)uStack_a != 0x0)
  {
    if (*(long *)((int)in_stack_0000000a + 0x200) == 0x8000001)
    {
      uStack_40 = *(u32 *)((int)(void *)uStack_16 + 0x4);
    }
    else
    {
      uStack_40 = 0x4000001;
    }
    UI_Build_Item_Type_9C52_ctor_init_9944
              ((u16 *)CONCAT22(unaff_SS,local_158),uStack_a,
               *(u32 *)((int)in_stack_0000000a + 0x4),uStack_40);
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(u16 *)CONCAT22(unaff_SS,local_158));
    UI_Build_Item_Type_9C52_dtor_Internal_9992(local_158);
  }
  return;
}



// Orchestrates population growth for a colony by finding the colony hub and dispatching
// to the appropriate quota calculation routine based on the current turn.

void __stdcall16far
Simulator_Colony_Process_Population_Growth_Turn_Logic_08d4
          (u16 param_1,undefined4 param_2,undefined4 param_3)
{
  undefined2 unaff_SS;
  void *pvVar1;
  void *pvVar2;
  undefined2 in_stack_0000ffde;
  undefined2 local_16;
  undefined2 uStack_14;
  int iStack_4;
  
  iStack_4 = 0x0;
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined2 *)CONCAT22(unaff_SS,&local_16),0x1,0x0,0x400);
  do
  {
    pvVar1 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((undefined2 *)CONCAT22(unaff_SS,&local_16));
    if (pvVar1 == NULL) goto LAB_1038_0917;
  } while (*(long *)((int)(void *)pvVar1 + 0x200) != 0x8000002);
  iStack_4 = 0x1;
LAB_1038_0917:
  local_16 = 0x389a;
  uStack_14 = 0x1008;
  if (iStack_4 != 0x0)
  {
    pvVar2 = (void *)((ulong)param_3 >> 0x10);
    if (param_2._2_2_ < 0xc9)
    {
      Simulator_Process_Population_Growth_Quota_0340
                (param_1,(u16)param_2,param_2._2_2_,
                 (void *)CONCAT22(in_stack_0000ffde,pvVar2));
      return;
    }
    if (0x31f < param_2._2_2_)
    {
      Simulator_Process_Population_Growth_Quota_Alternative_05d8
                (param_1,(u16)param_2,param_2._2_2_,
                 (void *)CONCAT22(in_stack_0000ffde,pvVar2));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Complex per-turn routine for colonies. Manages periodic resource change entries every
// 10 turns and handles automated building placement based on morale levels and entity
// proximity checks.

void __stdcall16far
Simulator_Colony_Process_Turn_Events_and_Building_Placement_095e
          (u16 arg1,u16 arg2,int arg3,void *colony_ptr)
{
  undefined2 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  u32 *puVar5;
  ulong uVar6;
  u16 unaff_SS;
  void *obj2;
  void *pvVar7;
  int in_stack_0000000a;
  uint uVar8;
  int iVar9;
  ulong uStack_3a;
  ulong uStack_36;
  undefined1 local_28 [0x2];
  undefined4 uStack_26;
  undefined4 uStack_22;
  undefined4 uStack_1e;
  undefined4 *puStack_1a;
  u32 *puStack_18;
  undefined4 uStack_16;
  ulong uStack_12;
  int iStack_e;
  int iStack_c;
  ulong uStack_a;
  void *pvStack_6;
  
  pvStack_6 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37)
  ;
  uStack_a = *_p_SimulatorWorldContext;
  if (uStack_a % 0xa == 0x0)
  {
    if (arg3 < 0xc9)
    {
      iVar9 = 0x3f;
    }
    else
    {
      if (arg3 < 0x320) goto LAB_1038_09c3;
      iVar9 = 0x3e;
    }
    Turn_Manager_Add_Resource_Change_Entry_Logic
              ((void *)pvStack_6,0x0,0x0,0x1,*(long *)(in_stack_0000000a + 0x4),iVar9);
  }
LAB_1038_09c3:
  iStack_c = *(int *)(in_stack_0000000a + 0x22);
  iStack_e = 0x0;
  uStack_12 = *_p_SimulatorWorldContext;
  uVar4 = *(undefined2 *)((int)(ulong *)_p_SimulatorWorldContext + 0x2);
  if (iStack_c < 0x4b)
  {
    if (iStack_c < 0x3c)
    {
      if (iStack_c < 0x32) goto LAB_1038_0a1c;
      uVar8 = 0x1e;
    }
    else
    {
      uVar8 = 0xf;
    }
  }
  else
  {
    uVar8 = 0x5;
  }
  uVar6 = CONCAT22(uVar4,(int)uStack_12) % (ulong)uVar8;
  uVar4 = (undefined2)uVar6;
  if (uVar6 == 0x0)
  {
    iStack_e = 0x1;
  }
LAB_1038_0a1c:
  if (iStack_e != 0x0)
  {
    puVar3 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    puVar5 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                       (in_stack_0000000a,colony_ptr._0_2_,puVar3,uVar4);
    uStack_16 = (undefined4 *)CONCAT22(puVar5,puVar3);
    puVar3 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    puStack_1a = puVar3;
    puStack_18 = puVar5;
    puVar5 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                       (in_stack_0000000a,colony_ptr._0_2_,puVar3,puVar5);
    uStack_1e = (undefined4 *)CONCAT22(puVar5,puVar3);
    puVar1 = (undefined2 *)((int)*uStack_16 + 0x10);
    uVar4 = (*(code *)*puVar1)(0x1008,(undefined4 *)uStack_16,
                               (int)((ulong)uStack_16 >> 0x10));
    uStack_22 = CONCAT22(puVar5,uVar4);
    puVar1 = (undefined2 *)((int)*uStack_1e + 0x10);
    uVar4 = (*(code *)*puVar1)(0x1008,(undefined4 *)uStack_1e,
                               (int)((ulong)uStack_1e >> 0x10));
    uStack_26 = CONCAT22(puVar5,uVar4);
    Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_28));
    for (uStack_36 = 0x0; uVar4 = 0x1030, uStack_36 < uStack_22; uStack_36 += 0x1)
    {
      pvVar7 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_16);
      bVar2 = false;
      for (uStack_3a = 0x0; uStack_3a < uStack_26; uStack_3a += 0x1)
      {
        obj2 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_1e);
        iVar9 = Simulator_Calc_Manhattan_Distance_between_Objects_bd74
                          ((u16)local_28,unaff_SS,(u32)pvVar7,(u32)obj2);
        if (iVar9 < 0x6)
        {
          bVar2 = true;
          break;
        }
      }
      pvVar7 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar7);
      if (!bVar2)
      {
        uVar4 = 0x1028;
        Simulator_Submit_InternalPutBldg_Event_5ca0(pvVar7);
        break;
      }
    }
    if (uStack_16 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_16)
                (uVar4,(undefined4 *)uStack_16,(int)((ulong)uStack_16 >> 0x10),0x1);
    }
    if (uStack_1e != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_1e)
                (uVar4,(undefined4 *)uStack_1e,(int)((ulong)uStack_1e >> 0x10),0x1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * __stdcall16far Simulator_Object_Constructor_Type_SCMove(void *param_1)
{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x270f);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x108) = 0x0;
  *(char **)param_1 = (char *)s_198_flc_1050_1c2e;
  *(undefined2 *)(iVar1 + 0x2) = 0x1038;
  strcpy_optimized((char *)CONCAT22(uVar2,(char *)(iVar1 + 0x8)),s_SCMove_1050_59d8);
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  *(undefined2 *)(iVar1 + 0x108) = (int)lVar3;
  *(undefined2 *)(iVar1 + 0x10a) = (int)((ulong)lVar3 >> 0x10);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_World_Execute_Major_Turn_Processing_Dispatcher(void *param_1)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  u32 *puVar5;
  undefined2 unaff_SS;
  void *colony_ptr;
  long lVar6;
  undefined4 local_20;
  undefined1 local_14 [0x12];
  
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,0x0,0x400);
  while( true )
  {
    colony_ptr = Simulator_World_Iterator_Get_Next_Entity_e4ec
                           ((undefined1 *)CONCAT22(unaff_SS,local_14));
    uVar4 = (uint)((ulong)colony_ptr >> 0x10) | (uint)(void *)colony_ptr;
    if (uVar4 == 0x0) break;
    Simulator_Process_Turn_Construction_Batch_Dispatcher_0e78(param_1,colony_ptr);
    Simulator_Process_Turn_Resource_Migration_Logic_1220((u32)param_1,colony_ptr);
    puVar3 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    puVar5 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                       (colony_ptr,puVar3,uVar4);
    local_20 = (undefined4 *)CONCAT22(puVar5,puVar3);
    puVar1 = (undefined2 *)((int)*local_20 + 0x10);
    lVar6 = (*(code *)*puVar1)(0x1008,puVar3,puVar5);
    if (lVar6 != 0x0)
    {
      uVar2 = *(undefined4 *)((int)(void *)param_1 + 0x108);
      if (*(int *)((int)uVar2 + 0x82) != 0x0)
      {
        Simulator_Process_Mine_to_Smelter_Maintenance_Logic_19a0
                  (param_1,(undefined4 *)CONCAT22(puVar5,puVar3),colony_ptr);
      }
      Simulator_Process_Mining_Supply_Chain_Logic_1940
                (param_1,(undefined4 *)CONCAT22(puVar5,puVar3),colony_ptr);
    }
    if (local_20 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*local_20)(0x1008,puVar3,puVar5,0x1);
    }
    Simulator_Process_Turn_Consumption_Dispatcher_1c3e((u32)param_1,(u32)colony_ptr);
  }
  return 0x1;
}



// A clone logic function that creates a copy of a simulator object (likely associated
// with the SCMove or similar).

undefined2 * __stdcall16far Simulator_Object_Clone_Logic_0cf0(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x10c));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar8 = (undefined2)((ulong)param_1 >> 0x10);
    iVar6 = (int)param_1;
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
    *local_a = (char *)s_198_flc_1050_1c2e;
    puVar3[0x1] = 0x1038;
    local_6 = local_a;
  }
  return local_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through all entities in a collection and triggers the sub-item scheduling
// logic (0d8e) for each, linking them to a target construction manager.

void __stdcall16far
UI_Build_Item_Batch_Schedule_Construction_SubItems_0e00
          (void *arg1,void *collection_ptr,void *manager_ptr)
{
  undefined2 *puVar1;
  u8 *puVar2;
  void *pvVar3;
  ulong uStack_a;
  ulong uStack_6;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)collection_ptr + 0x10);
  uStack_6 = (*(code *)*puVar1)();
  for (uStack_a = 0x0; uStack_a < uStack_6; uStack_a += 0x1)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)collection_ptr + 0x4);
    puVar2 = (u8 *)(*(code *)*puVar1)();
    if (puVar2 != NULL)
    {
      pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)puVar2);
      pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
      if ((int)((ulong)pvVar3 >> 0x10) != 0x0 || (void *)pvVar3 != NULL)
      {
        UI_Build_Item_Schedule_SubItems_from_List_0d8e
                  ((u16)(void *)arg1,(u16)((ulong)arg1 >> 0x10),pvVar3,manager_ptr);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// High-level per-turn dispatcher for construction activities. Coordinates resource
// scheduling between construction managers (Group 4) and building sites (Group 0x1E).
// Triggers sub-item scheduling (0e00) and virtual updates.

void __stdcall16far
Simulator_Process_Turn_Construction_Batch_Dispatcher_0e78
          (void *manager_ptr,void *colony_ptr)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 in_DX;
  u32 *puVar5;
  uint uVar6;
  u32 *puVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  u8 *puVar10;
  void *pvVar11;
  ulong uStack_16;
  ulong uStack_12;
  undefined4 uStack_e;
  undefined4 uStack_a;
  
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar5 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     (colony_ptr,puVar3,in_DX);
  uStack_a = (undefined4 *)CONCAT22(puVar5,puVar3);
  puVar2 = (undefined2 *)*uStack_a;
  puVar1 = (undefined2 *)puVar2 + 0x8;
  uVar9 = (*(code *)*puVar1)(0x1008,puVar3,puVar5);
  uVar6 = (uint)((ulong)uVar9 >> 0x10) | (uint)uVar9;
  if (uVar6 == 0x0)
  {
    if (uStack_a != NULL)
    {
      puVar1 = (undefined2 *)puVar2;
      (*(code *)*puVar1)(0x1008,puVar3,puVar5,0x1);
      return;
    }
  }
  else
  {
    uVar8 = 0x1008;
    puVar4 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    puVar7 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                       (colony_ptr,puVar4,uVar6);
    uStack_e = (undefined4 *)CONCAT22(puVar7,puVar4);
    puVar1 = (undefined2 *)((int)*uStack_e + 0x10);
    uStack_12 = (*(code *)*puVar1)(0x1008,puVar4,puVar7);
    for (uStack_16 = 0x0; uStack_16 < uStack_12; uStack_16 += 0x1)
    {
      puVar1 = (undefined2 *)((int)*uStack_e + 0x4);
      puVar10 = (u8 *)(*(code *)*puVar1)();
      if (puVar10 != NULL)
      {
        pvVar11 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,(u8 *)puVar10);
        uVar8 = 0x1030;
        pvVar11 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar11);
        if ((int)((ulong)pvVar11 >> 0x10) != 0x0 || (void *)pvVar11 != NULL)
        {
          UI_Build_Item_Batch_Schedule_Construction_SubItems_0e00
                    (manager_ptr,uStack_a,pvVar11);
        }
      }
    }
    if (uStack_a != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_a)(uVar8,puVar3,puVar5,0x1);
    }
    if (uStack_e != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_e)(uVar8,puVar4,puVar7,0x1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Complex routine that transfers resources between two entity collections. Iterates
// through source entities, calculates efficient transfer amounts based on target
// capacity, and spawns resource-transfer records (vtable 0x56CE) to reflect the shift.

u16 __stdcall16far
Simulator_Transfer_Resources_between_Entity_Lists_0f8c
          (u16 arg1,u16 arg2,u32 *src_list,u32 dest_list)
{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  qword qVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  ulong in_EDX;
  undefined2 uVar14;
  undefined2 unaff_CS;
  long lVar15;
  void *pvVar16;
  undefined2 in_stack_0000000a;
  u32 *puVar17;
  undefined2 uVar18;
  undefined4 uStack_58;
  undefined2 *puStack_50;
  uint uStack_4c;
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
  puVar4 = (undefined2 *)((int)*_src_list + 0x10);
  puVar17 = src_list;
  uVar18 = in_stack_0000000a;
  uVar8 = (*(code *)*puVar4)();
  uStack_c = CONCAT22((int)in_EDX,uVar8);
  uStack_10 = 0x0;
  do
  {
    if (uStack_c <= uStack_10)
    {
      return uStack_8;
    }
    puVar4 = (undefined2 *)((int)*_src_list + 0x4);
    uVar13 = (uint)in_EDX;
    puStack_14 = (u8 *)(*(code *)*puVar4)(unaff_CS,src_list,in_stack_0000000a,
                                          (int)uStack_10,(int)(uStack_10 >> 0x10),
                                          puVar17,uVar18);
    uStack_12 = uVar13;
    in_EDX = (ulong)(uStack_12 | (uint)puStack_14);
    if ((uStack_12 | (uint)puStack_14) != 0x0)
    {
      pvVar16 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,puStack_14);
      uStack_16 = (undefined2)((ulong)pvVar16 >> 0x10);
      uStack_18 = SUB42(pvVar16,0x0);
      unaff_CS = 0x1030;
      puStack_1c = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar16);
      uVar13 = (uint)((ulong)puStack_1c >> 0x10);
      in_EDX = (ulong)uVar13;
      puVar4 = (undefined2 *)((int)*puStack_1c + 0x40);
      iVar10 = (*(code *)*puVar4)(0x1030,(undefined4 *)puStack_1c,uVar13,local_20);
      if (iVar10 == 0x0)
      {
        uStack_24 = UI_Build_Item_Calculate_Efficiency_Remaining_Logic(puStack_1c);
        uStack_8 = 0x1;
        puStack_28 = (undefined4 *)*(long *)((int)dest_list + 0x22);
        init_long_pair(local_30,(long)puStack_28);
        while( true )
        {
          unaff_CS = 0x1008;
          lVar15 = get_next_list_item(local_30);
          uVar12 = (uint)((ulong)lVar15 >> 0x10);
          uVar13 = (uint)lVar15;
          in_EDX = (ulong)(uVar12 | uVar13);
          if ((uVar12 | uVar13) == 0x0) break;
          uVar8 = *(undefined2 *)(uVar13 + 0x4);
          uVar1 = *(undefined2 *)(uVar13 + 0x6);
          uVar2 = *(undefined2 *)(uVar13 + 0x8);
          uVar3 = *(uint *)(uVar13 + 0xa);
          uVar6 = *(uint *)(uVar13 + 0xc) / uVar3;
          pvVar16 = uStack_24;
          uVar7 = uStack_24._2_2_;
          if (uStack_6 < uStack_24)
          {
            pvVar16 = (void *)((ulong)uStack_6 & 0xffff);
            uVar7 = uStack_6._2_2_;
          }
          uVar9 = (uint)pvVar16;
          in_EDX = (ulong)(uVar7 | uVar9);
          if ((uVar7 | uVar9) == 0x0) break;
          qVar5 = (qword)CONCAT22(uVar7,uVar9) / (qword)uVar6;
          in_EDX = (ulong)qVar5 >> 0x10;
          iVar10 = (int)(qVar5 >> 0x10);
          uStack_4c = (uint)qVar5;
          if (uStack_4c == 0x0) break;
          if (uStack_4c < uVar3)
          {
            *(int *)(uVar13 + 0xc) = *(int *)(uVar13 + 0xc) - uVar9;
            *(int *)(uVar13 + 0xa) = *(int *)(uVar13 + 0xa) - uStack_4c;
          }
          else
          {
            puVar4 = (undefined2 *)((int)*puStack_28 + 0xc);
            (*(code *)*puVar4)(0x1008,(undefined4 *)puStack_28,
                               (int)((ulong)puStack_28 >> 0x10),uVar13,uVar12);
            uStack_2c = 0x0;
            uStack_4c = uVar3;
          }
          puVar11 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
          uStack_58 = (undefined2 *)CONCAT22(iVar10,puVar11);
          if (iVar10 == 0x0 && puVar11 == NULL)
          {
            puStack_50 = NULL;
          }
          else
          {
            *uStack_58 = (char *)s_1_1050_389a;
            puVar11[0x1] = 0x1008;
            puVar11[0x2] = 0x0;
            puVar11[0x3] = 0x0;
            puVar11[0x4] = 0x0;
            puVar11[0x5] = 0x0;
            puVar11[0x6] = 0x0;
            *uStack_58 = 0x56ce;
            puVar11[0x1] = 0x1018;
            puStack_50 = uStack_58;
          }
          uVar14 = (undefined2)((ulong)puStack_50 >> 0x10);
          puVar11 = (undefined2 *)puStack_50;
          puVar11[0x5] = uStack_4c;
          puVar11[0x6] = uStack_4c * uVar6;
          puVar11[0x2] = uVar8;
          puVar11[0x3] = uVar1;
          puVar11[0x4] = uVar2;
          UI_Item_List_Upsert_Item_by_Metadata_Logic_6408(puStack_1c,puStack_50);
        }
      }
      else
      {
        puVar4 = (undefined2 *)((int)*_src_list + 0x8);
        (*(code *)*puVar4)(0x1030,src_list,in_stack_0000000a,0x0,0x0,(int)uStack_10,
                           (int)(uStack_10 >> 0x10));
      }
    }
    uStack_10 += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Orchestrates mass resource transfer between all entities in two collections by
// iteratively calling the core transfer logic (0f8c).

int __stdcall16far
Simulator_Batch_Process_List_to_List_Transfer_11b0
          (u32 arg1,u32 *src_list,u32 *dest_list)
{
  undefined2 *puVar1;
  u8 *packed_id;
  u16 uVar2;
  void *pvVar3;
  undefined4 *in_stack_0000000c;
  ulong uStack_a;
  ulong uStack_6;
  
  puVar1 = (undefined2 *)((int)*in_stack_0000000c + 0x10);
  uStack_6 = (*(code *)*puVar1)();
  uStack_a = 0x0;
  while( true )
  {
    if (uStack_6 <= uStack_a)
    {
      return 0x1;
    }
    puVar1 = (undefined2 *)((int)*in_stack_0000000c + 0x4);
    packed_id = (u8 *)(*(code *)*puVar1)();
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
    uVar2 = Simulator_Transfer_Resources_between_Entity_Lists_0f8c
                      ((u16)arg1,(u16)(arg1 >> 0x10),src_list,(u32)pvVar3);
    if (uVar2 == 0x0) break;
    uStack_a += 0x1;
  }
  return 0x0;
}
