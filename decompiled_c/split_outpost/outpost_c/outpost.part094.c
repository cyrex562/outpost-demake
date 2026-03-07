/*
 * Source: outpost.c
 * Chunk: 94/117
 * Original lines: 107133-108291
 * Boundaries: top-level declarations/definitions only
 */




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



void * __stdcall16far Simulator_Object_Constructor_Type_SCRoboMove(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x3a97);
  *(char **)param_1 = (char *)s_fem110_wav_1050_29fa + 0x4;
  *(undefined2 *)((int)(void *)param_1 + 0x2) = 0x1038;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)(void *)param_1 + 0x8)),
                   s_SCRoboMove_1050_59f8);
  return param_1;
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



void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_29d2(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI build item Type 0x309A. Initializes base with ID 10999 and stores
// 4 specialized command parameters. Sets vtable to 0x309A.

void * __stdcall16far
UI_Build_Item_Type309A_ctor_init_2a0e
          (void *this_ptr,u32 arg1,u32 arg2,u32 arg3,u32 arg4)
{
  void *pvVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x2af7);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar1 = (void *)this_ptr;
  *(u32 *)((int)pvVar1 + 0x108) = arg4;
  *(u32 *)((int)pvVar1 + 0x10c) = arg3;
  *(u32 *)((int)pvVar1 + 0x110) = arg2;
  *(u32 *)((int)pvVar1 + 0x114) = arg1;
  *(undefined2 *)this_ptr = 0x309a;
  *(undefined2 *)((int)pvVar1 + 0x2) = 0x1038;
  return this_ptr;
}



void __stdcall16far UI_Build_Item_Type309A_dtor_Internal_2a5c(u16 *this_ptr)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x309a;
  this_ptr[0x1] = 0x1038;
  if (this_ptr[0x8b] != 0x0 || (undefined4 *)this_ptr[0x8a] != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)this_ptr[0x8a];
    (*(code *)*puVar1)();
  }
  if (this_ptr[0x89] != 0x0 || (undefined4 *)this_ptr[0x88] != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)this_ptr[0x88];
    (*(code *)*puVar1)();
  }
  *_this_ptr = (u16)(char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles symmetric events between two colonies (or objects).

undefined2 __stdcall16far
Simulator_Colony_Handle_Symmetric_Event_2ac2(undefined4 param_1)
{
  u16 arg1;
  u16 arg2;
  void *colony_ptr;
  void *arg4;
  
  arg2 = (u16)((ulong)param_1 >> 0x10);
  arg1 = (u16)param_1;
  colony_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)(arg1 + 0x108));
  arg4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                   (_p_SimulatorWorldContext,(u8 *)(u8 *)*(undefined4 *)(arg1 + 0x10c));
  Colony_Handle_Internal_Event_Logic_2c82
            (arg1,arg2,*(u32 *)(arg1 + 0x110),arg4,colony_ptr);
  Colony_Handle_Internal_Event_Logic_2c82
            (arg1,arg2,*(u32 *)(arg1 + 0x114),colony_ptr,arg4);
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes symmetric turn events between two colonies.

undefined2 __stdcall16far
Simulator_Colony_Process_Symmetric_Turn_Event_2b2e(undefined4 param_1)
{
  u16 arg1;
  u16 arg2;
  void *colony_ptr;
  void *colony_ptr_00;
  
  arg2 = (u16)((ulong)param_1 >> 0x10);
  arg1 = (u16)param_1;
  colony_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)(arg1 + 0x108));
  colony_ptr_00 =
       Simulator_Get_Entity_Object_from_PackedID_e1ec
                 (_p_SimulatorWorldContext,(u8 *)(u8 *)*(undefined4 *)(arg1 + 0x10c));
  Simulator_Process_Turn_Event_Dispatcher_2f92
            (arg1,arg2,*(u32 *)(arg1 + 0x110),colony_ptr_00);
  Simulator_Process_Turn_Event_Dispatcher_2f92
            (arg1,arg2,*(u32 *)(arg1 + 0x114),colony_ptr);
  return 0x1;
}



// Clone logic for a complex build item or dialog state.

undefined2 * __stdcall16far Simulator_Object_Clone_Logic_2b9a(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x118));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  iVar6 = (int)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
                // Command handler for dialog Type 0x2E26. Manages state toggles for
                // specialized control IDs (0x158-0x15C) and updates corresponding
                // labels.
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
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
    *(undefined4 *)(puVar3 + 0x86) = *(undefined4 *)(iVar6 + 0x10c);
    *(undefined4 *)(puVar3 + 0x88) = *(undefined4 *)(iVar6 + 0x110);
    *(undefined4 *)(puVar3 + 0x8a) = *(undefined4 *)(iVar6 + 0x114);
    *local_a = 0x309a;
    puVar3[0x1] = 0x1038;
    local_6 = local_a;
  }
  *(undefined4 *)(iVar6 + 0x114) = 0x0;
  *(undefined4 *)(iVar6 + 0x110) = 0x0;
  return local_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Central dispatcher for internal colony events (IDs 1-7). Handles global resource
// consumption (1), entity commands (2), specialized departures/losses (4), and colony
// window synchronization (7).

void __stdcall16far
Colony_Handle_Internal_Event_Logic_2c82
          (u16 arg1,u16 arg2,u32 event_id,void *arg4,void *colony_ptr)
{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined *heap_ctx;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  u16 arg2_00;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 unaff_SS;
  void *pvVar15;
  long lVar16;
  undefined4 uStack_16;
  void *local_12;
  u32 uStack_e;
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  arg2_00 = (u16)((ulong)colony_ptr >> 0x10);
  pvVar10 = (void *)colony_ptr;
  uVar4 = *(ulong *)((int)pvVar10 + 0x200);
  uVar13 = (undefined2)((ulong)arg4 >> 0x10);
  uStack_a = *(undefined4 *)((int)(void *)arg4 + 0x200);
  uVar14 = (undefined2)(event_id >> 0x10);
  iVar11 = (int)event_id;
  iVar7 = *(int *)(iVar11 + 0xc);
  uStack_6 = uVar4;
  if (iVar7 == 0x1)
  {
    uStack_e = event_id;
    Colony_Consume_Resource_Globally_52b8
              (colony_ptr,*(ulong *)(iVar11 + 0x8),*(int *)(iVar11 + 0xe));
    return;
  }
  if (iVar7 == 0x2)
  {
    uStack_e = event_id;
    if (*(long *)(iVar11 + 0xe) != 0x0)
    {
      Colony_Trigger_Entity_Custom_Action_58_3efc
                ((u16)pvVar10,arg2_00,arg4,(void *)*(undefined4 *)(iVar11 + 0xe));
      return;
    }
    UI_Entity_Summary_Display_ctor_a43e((void **)CONCAT22(unaff_SS,&local_12));
    uStack_16 = *(long *)((int)uStack_e + 0x8);
    while (uStack_16._2_2_ != 0x0 || (int)uStack_16 != 0x0)
    {
      UI_Entity_Dispatch_Command_from_ID_a6ee
                ((u32)CONCAT22(unaff_SS,&local_12),*(u16 *)((int)uStack_e + 0x12));
      uStack_16 = uStack_16 + -0x1;
    }
  }
  else
  {
    if (iVar7 == 0x3)
    {
      Colony_Update_Entity_Construction_Manager_Link_3f38
                (colony_ptr,arg4,(void *)*(undefined4 *)(iVar11 + 0xe));
      return;
    }
    uStack_6._0_2_ = (int)uVar4;
    uStack_6._2_2_ = (uint)(uVar4 >> 0x10);
    if (iVar7 == 0x4)
    {
      puVar9 = (undefined *)(uStack_6._2_2_ & 0xff);
      if (((int)uStack_6 == 0x1) && ((uVar4 & 0xff0000) == 0x0))
      {
        local_12 = (void *)*(undefined4 *)((int)pvVar10 + 0x1f6);
        pvVar15 = Colony_Process_Special_Departure_Logic_3694
                            ((void *)local_12,(int)((ulong)local_12 >> 0x10),
                             *(undefined2 *)(iVar11 + 0xe),
                             (int)*(undefined4 *)(iVar11 + 0x8),
                             (int)((ulong)*(undefined4 *)(iVar11 + 0x8) >> 0x10));
        *(undefined2 *)(iVar11 + 0x10) = (void *)pvVar15;
        *(undefined2 *)(iVar11 + 0x12) = (int)((ulong)pvVar15 >> 0x10);
      }
      else
      {
        if (_g_AllocatedBlock_Offset == NULL)
        {
          heap_ctx = init_memory_allocator();
        }
        else
        {
          puVar9 = g_AllocatedBlock_Segment;
          heap_ctx = g_AllocatedBlock_Offset;
        }
        pvVar10 = alloc_with_hooks(0x16c,0x1,heap_ctx);
        *(undefined2 *)(iVar11 + 0x10) = pvVar10;
        *(undefined2 *)(iVar11 + 0x12) = puVar9;
        if (*(int *)(iVar11 + 0xe) != 0x3)
        {
          if (*(int *)(iVar11 + 0xe) != 0x4)
          {
            *(undefined4 *)((int)*(undefined4 *)(iVar11 + 0x10) + 0x28) =
                 *(undefined4 *)(iVar11 + 0x8);
            return;
          }
          *(undefined4 *)((int)*(undefined4 *)(iVar11 + 0x10) + 0xdc) =
               *(undefined4 *)(iVar11 + 0x8);
          return;
        }
        *(undefined4 *)((int)*(undefined4 *)(iVar11 + 0x10) + 0x64) =
             *(undefined4 *)(iVar11 + 0x8);
      }
    }
    else if (iVar7 == 0x5)
    {
      if (*(int *)(iVar11 + 0xe) == 0xc)
      {
        if (((int)uStack_6 == 0x1) && ((uVar4 & 0xff0000) == 0x0))
        {
          iVar7 = *(int *)(iVar11 + 0x8);
          iVar11 = *(int *)(iVar11 + 0xa);
          uVar6 = -iVar7;
          uVar13 = (undefined2)((ulong)*(undefined4 *)((int)pvVar10 + 0x1f6) >> 0x10);
          iVar12 = (int)*(undefined4 *)((int)pvVar10 + 0x1f6);
          puVar1 = (uint *)(iVar12 + 0x170);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + uVar6;
          piVar2 = (int *)(iVar12 + 0x172);
          *piVar2 = (*piVar2 - (iVar11 + (uint)(iVar7 != 0x0))) +
                    (uint)CARRY2(uVar3,uVar6);
        }
      }
      else
      {
        Colony_Decrement_Population_Category_at_14E_Logic
                  ((uint16_t)pvVar10,arg2_00,*(uint *)(iVar11 + 0x8),
                   *(int *)(iVar11 + 0xe));
      }
    }
    else if (iVar7 == 0x7)
    {
      pvVar15 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,
                           (u8 *)(u8 *)*(undefined4 *)(iVar11 + 0xe));
      UI_Colony_Window_Set_Active_Colony_and_Sync_349e
                ((u32)pvVar15,*(u32 *)((int)(void *)arg4 + 0x200));
      UI_Component_Shift_and_Set_Values_18_1A((u32)pvVar15,0x258);
      UI_Component_Shift_and_Set_Values_18_1A((u32)pvVar15,0x258);
      pvVar15 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x3b);
      UI_Relationship_Manager_Add_or_Update_Link_Logic
                ((void *)pvVar15,*(long *)(iVar11 + 0xe),0x4000001);
      lVar16 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
      local_12 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                           ((u16)_p_SimulatorGlobalState,
                            (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                            (void *)*(undefined4 *)((int)lVar16 + 0x20));
      iVar7 = UI_Production_Item_Get_ID_Logic_5b00(local_12);
      uStack_e = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,iVar7);
      uVar13 = (undefined2)(uStack_e >> 0x10);
      puVar8 = (undefined4 *)((int)uStack_e + 0x20);
      puVar5 = (undefined2 *)((int)*puVar8 + 0x4);
      (*(code *)*puVar5)(0x1010,puVar8,uVar13,0x6);
    }
  }
  return;
}



// Dispatches per-turn events for a colony. Depending on event ID (1, 4, 5), handles
// specialized building updates, bulk resource additions, or randomized population
// changes. Includes logic for incrementing specialized resource counters.

void __stdcall16far
Simulator_Process_Turn_Event_Dispatcher_2f92
          (u16 arg1,u16 arg2,u32 event_id,void *colony_ptr)
{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uStack_a;
  
  uVar8 = (undefined2)((ulong)colony_ptr >> 0x10);
  pvVar6 = (void *)colony_ptr;
  uVar9 = (undefined2)(event_id >> 0x10);
  iVar7 = (int)event_id;
  iVar4 = *(int *)(iVar7 + 0xc);
  if (iVar4 == 0x1)
  {
    Colony_Distribute_Resources_to_Builders_3cc0
              (colony_ptr,(uint16_t)*(undefined4 *)(iVar7 + 0x8),
               (uint16_t)((ulong)*(undefined4 *)(iVar7 + 0x8) >> 0x10),
               *(u16 *)(iVar7 + 0xe));
    return;
  }
  if (iVar4 == 0x4)
  {
    Colony_Resource_Batch_Add_355c(*(u32 *)((int)pvVar6 + 0x1f6),*(u32 *)(iVar7 + 0x10))
    ;
    return;
  }
  if (iVar4 == 0x5)
  {
    if (*(int *)(iVar7 + 0xe) != 0xc)
    {
      Colony_Add_to_Population_Tracker_5798
                ((u32)colony_ptr,*(long *)(iVar7 + 0x8),*(int *)(iVar7 + 0xe));
      return;
    }
    uStack_a = (int)*(ulong *)((int)pvVar6 + 0x200);
    if ((uStack_a == 0x1) && ((*(ulong *)((int)pvVar6 + 0x200) & 0xff0000) == 0x0))
    {
      uVar5 = *(uint *)(iVar7 + 0x8);
      iVar4 = *(int *)(iVar7 + 0xa);
      uVar9 = (undefined2)((ulong)*(undefined4 *)((int)pvVar6 + 0x1f6) >> 0x10);
      iVar7 = (int)*(undefined4 *)((int)pvVar6 + 0x1f6);
      puVar1 = (uint *)(iVar7 + 0x170);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + uVar5;
      piVar2 = (int *)(iVar7 + 0x172);
      *piVar2 = *piVar2 + iVar4 + (uint)CARRY2(uVar3,uVar5);
      return;
    }
  }
  return;
}



u16 * __stdcall16far
UI_Build_Item_Type309A_dtor_Scalar_Deleting_3074(u16 *param_1,u16 param_2,byte param_3)
{
  UI_Build_Item_Type309A_dtor_Internal_2a5c(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for the UI colony window. Initializes base window with list, sets vtable
// to 0x6504, and instantiates associated colony objects and view components. Zero-fills
// extensive state tracking arrays.

void * __stdcall16far UI_Colony_Window_ctor_init_30aa(void *this_ptr)
{
  void *pvVar1;
  uint uVar2;
  astruct_161 *uVar4;
  int value;
  void *pvVar3;
  void *puVar6;
  void *puVar7;
  undefined2 in_stack_0000fffa;
  
  pvVar3 = UI_Window_with_List_ctor_init_17ce(this_ptr,NULL,NULL);
  uVar2 = (uint)((ulong)pvVar3 >> 0x10);
  value = (int)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_161 *)this_ptr;
  uVar4->field10_0x10 = 0x0;
  uVar4->field11_0x14 = 0x0;
  uVar4->field12_0x18 = 0x258;
  uVar4->field13_0x1a = 0x258;
  uVar4->field14_0x1c = 0x0;
  uVar4->field15_0x1e = 0x0;
  uVar4->field16_0x22 = 0x0;
  uVar4->field17_0x24 = 0x32;
  (&uVar4->field482_0x1f6)[0x0] = NULL;
  (&uVar4->field482_0x1f6)[0x1] = NULL;
  uVar4->field484_0x1fa = 0x0;
  uVar4->field485_0x1fe = 0x0;
  uVar4->field486_0x200 = 0x8000001;
  uVar4->field487_0x204 = 0x0;
  uVar4->field488_0x206 = 0x0;
  uVar4->field489_0x208 = 0x1;
  uVar4->field490_0x20a = 0x0;
  uVar4->field491_0x20c = 0x0;
  uVar4->field492_0x20e = 0x0;
  uVar4->field493_0x210 = 0x0;
  uVar4->field494_0x214 = 0x0;
  uVar4->field495_0x216 = 0x0;
  uVar4->field496_0x21a = 0x0;
  *(undefined2 *)this_ptr = 0x6504;
  uVar4->field2_0x2 = 0x1038;
  memset_far(&uVar4->field_0x26,value,0x0);
  memset_far(&uVar4->field_0xba,value,0x0);
  memset_far(&uVar4->field_0x14e,value,0x0);
  memset_far(&uVar4->field_0x1a2,value,0x0);
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1b0));
  puVar6._2_2_ = uVar2 | (uint)pvVar1;
  if (puVar6._2_2_ == 0x0)
  {
    (&uVar4->field482_0x1f6)[0x0] = NULL;
    (&uVar4->field482_0x1f6)[0x1] = NULL;
  }
  else
  {
    puVar6._0_2_ = Colony_Object_ctor_init_314c
                             ((void *)CONCAT22(uVar2,pvVar1),(void *)uVar4->field3_0x4);
    uVar4->field482_0x1f6 = (void *)puVar6;
    uVar4->field483_0x1f8 = puVar6._2_2_;
  }
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1e));
  if (puVar6._2_2_ == 0x0 && pvVar1 == NULL)
  {
    puVar7 = NULL;
  }
  else
  {
    puVar7 = UI_Planet_View_Component_ctor_init_logic_c444
                       ((void *)CONCAT22(puVar6._2_2_,pvVar1),(void *)0x64,(void *)0xc8)
    ;
  }
  uVar4->field8_0xc = (u16 *)puVar7;
  uVar4->field9_0xe = (u16)((ulong)puVar7 >> 0x10);
  return this_ptr;
}



// Parameterized constructor for the UI colony window. Links the window to its simulator
// entity and initializes naming strings.

void * __stdcall16far
UI_Colony_Window_ctor_with_Params_3222(void *this_ptr,u32 arg1,void *arg2)
{
  void *pvVar1;
  u16 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  int value;
  void *pvVar7;
  undefined2 in_stack_0000ffda;
  undefined2 uVar8;
  char local_16 [0x14];
  
  pvVar7 = UI_Window_with_List_ctor_with_Params_183c
                     (this_ptr,NULL,NULL,(void *)0x4000000,arg2);
  uVar4 = (uint)((ulong)pvVar7 >> 0x10);
  value = (int)((ulong)this_ptr >> 0x10);
  pvVar6 = (void *)this_ptr;
  *(u32 *)((int)pvVar6 + 0x10) = arg1;
  *(undefined4 *)((int)pvVar6 + 0x14) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x18) = 0x258;
  *(undefined2 *)((int)pvVar6 + 0x1a) = 0x258;
  *(undefined2 *)((int)pvVar6 + 0x1c) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x1e) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x22) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x24) = 0x32;
  *(undefined4 *)((int)pvVar6 + 0x1f6) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x1fa) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x1fe) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x200) = 0x8000001;
  *(undefined2 *)((int)pvVar6 + 0x204) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x206) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x208) = 0x1;
  *(undefined2 *)((int)pvVar6 + 0x20a) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x20c) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x20e) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x210) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x214) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x216) = 0x0;
  *(undefined4 *)((int)pvVar6 + 0x21a) = 0x0;
  *(undefined2 *)this_ptr = 0x6504;
  *(undefined2 *)((int)pvVar6 + 0x2) = 0x1038;
  memset_far((void *)((int)pvVar6 + 0x26),value,0x0);
  memset_far((void *)((int)pvVar6 + 0xba),value,0x0);
  memset_far((void *)((int)pvVar6 + 0x14e),value,0x0);
  memset_far((void *)((int)pvVar6 + 0x1a2),value,0x0);
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffda,0x1b0));
  uVar5 = uVar4 | (uint)pvVar1;
  if (uVar5 == 0x0)
  {
    *(undefined4 *)((int)pvVar6 + 0x1f6) = 0x0;
  }
  else
  {
    puVar2 = Colony_Object_ctor_init_314c
                       ((void *)CONCAT22(uVar4,pvVar1),
                        (void *)*(undefined4 *)((int)pvVar6 + 0x4));
    *(undefined2 *)((int)pvVar6 + 0x1f6) = puVar2;
    *(uint *)((int)pvVar6 + 0x1f8) = uVar5;
  }
  uVar8 = (undefined2)*(undefined4 *)((int)pvVar6 + 0x4);
  uVar4 = *(uint *)((int)pvVar6 + 0x6) & 0xff;
  sprintf_wrapper(local_16);
  pcVar3 = strdup_allocate(local_16);
  *(undefined2 *)((int)pvVar6 + 0x1fa) = pcVar3;
  *(uint *)((int)pvVar6 + 0x1fc) = uVar4;
  pvVar1 = allocate_memory(CONCAT22(uVar8,0x1e));
  if (uVar4 == 0x0 && pvVar1 == NULL)
  {
    *(undefined4 *)((int)pvVar6 + 0xc) = 0x0;
  }
  else
  {
    pvVar7 = UI_Planet_View_Component_ctor_init_logic_c444
                       ((void *)CONCAT22(uVar4,pvVar1),(void *)0x64,(void *)0xc8);
    *(undefined2 *)((int)pvVar6 + 0xc) = (void *)pvVar7;
    *(undefined2 *)((int)pvVar6 + 0xe) = (int)((ulong)pvVar7 >> 0x10);
  }
  return this_ptr;
}



// Internal destructor for the colony window. Systematic teardown of internal list
// objects, colony components, and naming strings. Reverts vtables to 0x6504.

void __stdcall16far UI_Colony_Window_dtor_Internal_33f8(void *this_ptr)
{
  u32 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  astruct_160 *uVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_160 *)this_ptr;
  *(undefined2 *)this_ptr = 0x6504;
  uVar4->field2_0x2 = 0x1038;
  if (uVar4->field20_0x16 != 0x0 || uVar4->field19_0x14 != NULL)
  {
    puVar3 = (undefined2 *)(undefined2 *)*uVar4->field19_0x14;
    (*(code *)*puVar3)();
  }
  if (uVar4->field500_0x1f8 != 0x0 || uVar4->field499_0x1f6 != NULL)
  {
    puVar3 = (undefined2 *)(undefined2 *)*uVar4->field499_0x1f6;
    (*(code *)*puVar3)();
  }
  free_if_not_null((void *)uVar4->field501_0x1fa);
  puVar1 = uVar4->field520_0x210;
  iVar2 = uVar4->field521_0x212;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1000,puVar1,iVar2,0x1);
  }
  free_if_not_null((void *)uVar4->field528_0x21a);
  UI_Window_with_List_dtor_Internal_18b2(this_ptr);
  return;
}
