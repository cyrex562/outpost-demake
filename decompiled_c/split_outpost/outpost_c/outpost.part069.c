/*
 * Source: outpost.c
 * Chunk: 69/117
 * Original lines: 78648-79799
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Every 20 ticks, iterates through entities and randomly spawns Type 0x90D6 build items
// near specific structure types (from array 0x2A). Chance depends on difficulty/state.

void __stdcall16far Simulator_Spawn_Random_Type90D6_Events_7c4e(u32 arg1)
{
  ulong uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  uint uVar6;
  u32 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  long lVar9;
  undefined4 *in_stack_0000fe8a;
  undefined2 local_156;
  undefined2 uStack_154;
  int iStack_46;
  int iStack_44;
  u16 uStack_42;
  void *pvStack_40;
  ulong uStack_38;
  int iStack_34;
  undefined4 uStack_32;
  undefined4 uStack_2e;
  undefined4 *puStack_2a;
  uint uStack_28;
  void *pvStack_26;
  undefined1 local_22 [0x12];
  int iStack_10;
  int iStack_e;
  undefined4 uStack_c;
  undefined *puStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  uStack_4 = (undefined2)((ulong)lVar9 >> 0x10);
  uStack_6 = (undefined2)lVar9;
  puStack_8 = g_ModeVersion_13AE;
  if (0x2 < (int)g_ModeVersion_13AE)
  {
    uVar1 = *_p_SimulatorWorldContext;
    uStack_c._2_2_ = (int)(uVar1 >> 0x10);
    if (0x2 < uVar1)
    {
      iStack_10 = (uint)uVar1 - 0x2;
      iStack_e = uStack_c._2_2_ - (uint)((uint)uVar1 < 0x2);
      if (CONCAT22(iStack_e,iStack_10) % 0x14 == 0x0)
      {
        uStack_c = uVar1;
        Simulator_World_Iterator_ctor_init_dc52
                  ((undefined1 *)CONCAT22(unaff_SS,local_22),0x1,0x0,0x400);
        while( true )
        {
          pvStack_26 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                                 ((undefined1 *)CONCAT22(unaff_SS,local_22));
          uVar3 = (uint)((ulong)pvStack_26 >> 0x10);
          uVar6 = uVar3 | (uint)pvStack_26;
          if (uVar6 == 0x0) break;
          if (*(long *)((uint)pvStack_26 + 0x200) != 0x8000002)
          {
            puVar4 = get_array_element_6bytes
                               ((int *)_p_StringPropertyTable,
                                (int)((ulong)_p_StringPropertyTable >> 0x10));
            uVar8 = 0x1038;
            puStack_2a = puVar4;
            uStack_28 = uVar6;
            puVar7 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                               ((int)pvStack_26,(int)((ulong)pvStack_26 >> 0x10),puVar4,
                                uVar6);
            uStack_2e = (undefined4 *)CONCAT22(puVar7,puVar4);
            puVar2 = (undefined2 *)((int)*uStack_2e + 0x10);
            uVar5 = (*(code *)*puVar2)(0x1038,puVar4,puVar7);
            uStack_32 = CONCAT22(puVar7,uVar5);
            if (puStack_8 ==
                (undefined *)((int)(undefined **)&p_CurrentHeapContext + 0x1))
            {
              iStack_34 = 0x6;
            }
            else
            {
              iStack_34 = 0xc;
            }
            for (uStack_38 = 0x0; uStack_38 < uStack_32; uStack_38 += 0x1)
            {
              pvStack_40 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c
                                     (uStack_2e);
              uStack_42 = Simulator_Check_Neighbor_Proximity_Status_7742
                                    ((u16)arg1,(u16)(arg1 >> 0x10),0x4,
                                     (void *)CONCAT22(in_stack_0000fe8a,
                                                      (void *)((ulong)pvStack_40 >> 0x10
                                                              )));
              iStack_44 = iStack_34;
              if (uStack_42 == 0x0)
              {
                iStack_44 = 0x19;
              }
              uVar8 = 0x1008;
              iStack_46 = random_int_range(0x1,0x64);
              if (iStack_46 <= iStack_44)
              {
                UI_Build_Item_Type_90D6_ctor_init_8fc0
                          ((undefined2 *)CONCAT22(unaff_SS,&local_156),
                           *(u32 *)((int)pvStack_40 + 0x4),
                           *(u32 *)((int)pvStack_26 + 0x4));
                uVar8 = 0x1030;
                Simulator_Global_Process_Build_Event_Type4_835a
                          (_p_SimulatorGlobalState,
                           (undefined2 *)CONCAT22(unaff_SS,&local_156));
                local_156 = 0x389a;
                uStack_154 = 0x1008;
              }
            }
            in_stack_0000fe8a = (undefined4 *)uStack_2e;
            uVar5 = (undefined2)((ulong)uStack_2e >> 0x10);
            if (uStack_2e != NULL)
            {
              (*(code *)*(undefined2 *)(undefined2 *)*uStack_2e)
                        (uVar8,in_stack_0000fe8a,uVar5,0x1,in_stack_0000fe8a,uVar5,
                         uStack_2e);
            }
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Every 20 ticks, randomly spawns Type 0xB1F4 build items near structures from array
// 0x29. Proximity and difficulty checks apply.

void __stdcall16far Simulator_Spawn_Random_TypeB1F4_Events_7dfc(u32 arg1)
{
  ulong uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  uint uVar6;
  u32 *puVar7;
  undefined2 unaff_SS;
  long lVar8;
  undefined4 *in_stack_0000fe88;
  undefined2 uVar9;
  undefined2 local_158;
  undefined2 uStack_156;
  u16 uStack_48;
  int iStack_46;
  void *pvStack_44;
  ulong uStack_3c;
  undefined2 uStack_38;
  undefined2 uStack_36;
  int iStack_34;
  undefined4 uStack_32;
  undefined4 uStack_2e;
  undefined4 *puStack_2a;
  uint uStack_28;
  void *pvStack_26;
  undefined1 local_22 [0x12];
  int iStack_10;
  int iStack_e;
  undefined4 uStack_c;
  undefined *puStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  lVar8 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  uStack_4 = (undefined2)((ulong)lVar8 >> 0x10);
  uStack_6 = (undefined2)lVar8;
  puStack_8 = g_ModeVersion_13AE;
  if (0x2 < (int)g_ModeVersion_13AE)
  {
    uVar1 = *_p_SimulatorWorldContext;
    uStack_c._2_2_ = (int)(uVar1 >> 0x10);
    if (0x3 < uVar1)
    {
      iStack_10 = (uint)uVar1 - 0x3;
      iStack_e = uStack_c._2_2_ - (uint)((uint)uVar1 < 0x3);
      if (uVar1 % 0x14 == 0x0)
      {
        uStack_c = uVar1;
        Simulator_World_Iterator_ctor_init_dc52
                  ((undefined1 *)CONCAT22(unaff_SS,local_22),0x1,0x0,0x400);
        while( true )
        {
          pvStack_26 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                                 ((undefined1 *)CONCAT22(unaff_SS,local_22));
          uVar3 = (uint)((ulong)pvStack_26 >> 0x10);
          uVar6 = uVar3 | (uint)(void *)pvStack_26;
          if (uVar6 == 0x0) break;
          if (*(long *)((int)(void *)pvStack_26 + 0x200) != 0x8000002)
          {
            puVar4 = get_array_element_6bytes
                               ((int *)_p_StringPropertyTable,
                                (int)((ulong)_p_StringPropertyTable >> 0x10));
            puStack_2a = puVar4;
            uStack_28 = uVar6;
            puVar7 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                               ((void *)pvStack_26,(int)((ulong)pvStack_26 >> 0x10),
                                puVar4,uVar6);
            uStack_2e = (undefined4 *)CONCAT22(puVar7,puVar4);
            puVar2 = (undefined2 *)((int)*uStack_2e + 0x10);
            uVar5 = (*(code *)*puVar2)(0x1038,puVar4,puVar7);
            uStack_32 = CONCAT22(puVar7,uVar5);
            uVar5 = 0x1010;
            lVar8 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
            uStack_36 = (undefined2)((ulong)lVar8 >> 0x10);
            uStack_38 = (undefined2)lVar8;
            if (puStack_8 ==
                (undefined *)((int)(undefined **)&p_CurrentHeapContext + 0x1))
            {
              iStack_34 = 0x5;
            }
            else
            {
              iStack_34 = 0x1e;
            }
            for (uStack_3c = 0x0; uStack_3c < uStack_32; uStack_3c += 0x1)
            {
              pvStack_44 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c
                                     (uStack_2e);
              uVar5 = 0x1008;
              iStack_46 = random_int_range(0x1,0x64);
              if ((iStack_46 <= iStack_34) &&
                 (uStack_48 = Simulator_Check_Neighbor_Proximity_Status_7742
                                        ((u16)arg1,(u16)(arg1 >> 0x10),0x4,
                                         (void *)CONCAT22(in_stack_0000fe88,
                                                          (void *)((ulong)pvStack_44 >>
                                                                  0x10))),
                 uStack_48 == 0x0))
              {
                UI_Build_Item_Type_B1F4_ctor_init
                          ((undefined2 *)CONCAT22(unaff_SS,&local_158),
                           *(u32 *)((int)(void *)pvStack_44 + 0x4),
                           *(u32 *)((int)(void *)pvStack_26 + 0x4));
                uVar5 = 0x1030;
                Simulator_Global_Process_Build_Event_Type4_835a
                          (_p_SimulatorGlobalState,
                           (undefined2 *)CONCAT22(unaff_SS,&local_158));
                local_158 = 0x389a;
                uStack_156 = 0x1008;
              }
            }
            in_stack_0000fe88 = (undefined4 *)uStack_2e;
            uVar9 = (undefined2)((ulong)uStack_2e >> 0x10);
            if (uStack_2e != NULL)
            {
              (*(code *)*(undefined2 *)(undefined2 *)*uStack_2e)
                        (uVar5,in_stack_0000fe88,uVar9,0x1,in_stack_0000fe88,uVar9,
                         uStack_2e);
            }
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Every 50 ticks, randomly spawns Type 0x87E0 build items near structures from array
// 0x11. Only spawns if the neighbor isn't already a specific type (0x70, 0x71).

void __stdcall16far Simulator_Spawn_Random_Type87E0_Events_7fb6(u32 arg1)
{
  ulong uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  uint uVar6;
  u32 *puVar7;
  undefined2 unaff_SS;
  long lVar8;
  undefined4 *in_stack_0000fe88;
  undefined2 uVar9;
  undefined2 local_158;
  undefined2 uStack_156;
  u16 uStack_48;
  int iStack_44;
  int iStack_42;
  void *pvStack_40;
  ulong uStack_38;
  int iStack_34;
  undefined *puStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  uint uStack_22;
  void *pvStack_20;
  undefined1 local_1c [0x12];
  int iStack_a;
  int iStack_8;
  undefined4 uStack_6;
  
  uVar1 = *_p_SimulatorWorldContext;
  uStack_6._2_2_ = (int)(uVar1 >> 0x10);
  if (0xb < uVar1)
  {
    iStack_a = (uint)uVar1 - 0xb;
    iStack_8 = uStack_6._2_2_ - (uint)((uint)uVar1 < 0xb);
    if (uVar1 % 0x32 == 0x0)
    {
      uStack_6 = uVar1;
      Simulator_World_Iterator_ctor_init_dc52
                ((undefined1 *)CONCAT22(unaff_SS,local_1c),0x1,0x0,0x400);
      while( true )
      {
        pvStack_20 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                               ((undefined1 *)CONCAT22(unaff_SS,local_1c));
        uVar3 = (uint)((ulong)pvStack_20 >> 0x10);
        uVar6 = uVar3 | (uint)pvStack_20;
        if (uVar6 == 0x0) break;
        if (*(long *)((uint)pvStack_20 + 0x200) != 0x8000002)
        {
          puVar4 = get_array_element_6bytes
                             ((int *)_p_StringPropertyTable,
                              (int)((ulong)_p_StringPropertyTable >> 0x10));
          puStack_24 = puVar4;
          uStack_22 = uVar6;
          puVar7 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                             ((int)pvStack_20,(int)((ulong)pvStack_20 >> 0x10),puVar4,
                              uVar6);
          uStack_28 = (undefined4 *)CONCAT22(puVar7,puVar4);
          puVar2 = (undefined2 *)((int)*uStack_28 + 0x10);
          uVar5 = (*(code *)*puVar2)(0x1038,puVar4,puVar7);
          uStack_2c = CONCAT22(puVar7,uVar5);
          uVar5 = 0x1010;
          lVar8 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
          uStack_2e = (undefined2)((ulong)lVar8 >> 0x10);
          uStack_30 = (undefined2)lVar8;
          puStack_32 = g_ModeVersion_13AE;
          if ((int)g_ModeVersion_13AE < 0x3)
          {
            iStack_34 = 0x5;
          }
          else
          {
            iStack_34 = 0x14;
          }
          for (uStack_38 = 0x0; uStack_38 < uStack_2c; uStack_38 += 0x1)
          {
            uVar5 = 0x1030;
            pvStack_40 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c
                                   (uStack_28);
            iStack_42 = *(int *)((int)pvStack_40 + 0x20);
            if (((iStack_42 != 0x0) && (iStack_42 != 0x70)) && (iStack_42 != 0x71))
            {
              uVar5 = 0x1008;
              iStack_44 = random_int_range(0x1,0x64);
              if ((iStack_44 <= iStack_34) &&
                 (uStack_48 = Simulator_Check_Neighbor_Proximity_Status_7742
                                        ((u16)arg1,(u16)(arg1 >> 0x10),0x4,
                                         (void *)CONCAT22(in_stack_0000fe88,
                                                          (void *)((ulong)pvStack_40 >>
                                                                  0x10))),
                 uStack_48 == 0x0))
              {
                UI_Build_Item_Type_87E0_ctor_init_8698
                          ((undefined2 *)CONCAT22(unaff_SS,&local_158),
                           *(u32 *)((int)pvStack_40 + 0x4),
                           *(u32 *)((int)pvStack_20 + 0x4));
                uVar5 = 0x1030;
                Simulator_Global_Process_Build_Event_Type4_835a
                          (_p_SimulatorGlobalState,
                           (undefined2 *)CONCAT22(unaff_SS,&local_158));
                local_158 = 0x389a;
                uStack_156 = 0x1008;
              }
            }
          }
          in_stack_0000fe88 = (undefined4 *)uStack_28;
          uVar9 = (undefined2)((ulong)uStack_28 >> 0x10);
          if (uStack_28 != NULL)
          {
            (*(code *)*(undefined2 *)(undefined2 *)*uStack_28)
                      (uVar5,in_stack_0000fe88,uVar9,0x1,in_stack_0000fe88,uVar9,
                       uStack_28);
          }
        }
      }
    }
  }
  return;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_816e(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



void * __stdcall16far Simulator_Object_Constructor_Type_SCFactory(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x1b57);
  *(undefined2 *)param_1 = 0x836e;
  *(undefined2 *)((int)(void *)param_1 + 0x2) = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)(void *)param_1 + 0x8)),
                   s_SCFactory_1050_5002);
  return param_1;
}



undefined2 __stdcall16far Simulator_World_Process_Entities_VCall_30_81e0(void)
{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 *puVar5;
  undefined1 local_14 [0x12];
  
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,0x0,0x700);
switchD_1028_8225_caseD_0:
  do
  {
    while( true )
    {
      puVar5 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                         ((undefined1 *)CONCAT22(unaff_SS,local_14));
      uVar4 = (undefined2)((ulong)puVar5 >> 0x10);
      puVar3 = (undefined4 *)puVar5;
      if (puVar5 == NULL)
      {
        return 0x1;
      }
      iVar1 = *(int *)(puVar3 + 0x3);
      if (iVar1 < 0x35) goto code_r0x10288218;
      if (0x61 < iVar1) break;
      if ((iVar1 < 0x5d) && ((iVar1 != 0x37 && (iVar1 != 0x47))))
      goto switchD_1028_8225_caseD_1;
    }
  } while ((iVar1 == 0x6a) ||
          ((0x8 < iVar1 + -0x6a &&
           ((iVar1 == 0x75 || iVar1 + -0x74 < 0x1 ||
            ((0x0 < iVar1 + -0x76 && (iVar1 + -0x78 < 0x2))))))));
  goto switchD_1028_8225_caseD_1;
code_r0x10288218:
  if (0x32 < iVar1) goto switchD_1028_8225_caseD_0;
  if (true)
  {
    unaff_CS = 0x1028;
    switch(iVar1)
    {
    case 0x0:
    case 0x5:
    case 0x9:
    case 0x10:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
      goto switchD_1028_8225_caseD_0;
    }
  }
switchD_1028_8225_caseD_1:
  if (*(int *)((int)puVar3 + 0x12) == 0x5)
  {
    puVar2 = (undefined2 *)((int)*puVar5 + 0x30);
    (*(code *)*puVar2)(unaff_CS,puVar3);
  }
  goto switchD_1028_8225_caseD_0;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_82b4(undefined4 param_1)
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
    *local_a = 0x836e;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_8342(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the 'Fill Resources' simulator command. Initializes base class with
// ID 3999 and sets internal name to 'SCFillResources'. Sets vtable to 0x84BA.

void * __stdcall16far Simulator_Command_FillResources_ctor_init_837e(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0xf9f);
  *(undefined2 *)this_ptr = 0x84ba;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)this_ptr + 0x8)),
                   s_SCFillResources_1050_500c);
  return this_ptr;
}



undefined2 __stdcall16far Simulator_World_Reset_Entity_Flag_206(void)
{
  undefined2 unaff_SS;
  void *pvVar1;
  undefined1 local_14 [0x12];
  
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,0x0,0x400);
  while( true )
  {
    pvVar1 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((undefined1 *)CONCAT22(unaff_SS,local_14));
    if (pvVar1 == NULL) break;
    *(undefined2 *)((int)(void *)pvVar1 + 0x206) = 0x1;
  }
  return 0x1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_8400(undefined4 param_1)
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
    *local_a = 0x84ba;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_848e(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the 'Force Morale' simulator command. Initializes base class with ID
// 999 and formats its internal name based on target colony parameters. Sets vtable to
// 0x8688.

void * __stdcall16far
Simulator_Command_ForceMorale_ctor_init_84ca
          (void *this_ptr,u32 colony_ptr,u16 arg1,u16 arg2,u16 arg3)
{
  undefined2 uVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  pvVar2 = (void *)this_ptr;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x3e7);
  *(u16 *)((int)pvVar2 + 0x108) = arg3;
  *(u16 *)((int)pvVar2 + 0x10a) = arg2;
  *(u16 *)((int)pvVar2 + 0x10c) = arg1;
  *(u32 *)((int)pvVar2 + 0x10e) = colony_ptr;
  *(undefined2 *)this_ptr = 0x8688;
  *(undefined2 *)((int)pvVar2 + 0x2) = 0x1028;
  if (*(int *)((int)pvVar2 + 0x108) == 0x1)
  {
    uVar1 = 0x501c;
  }
  else
  {
    uVar1 = 0x5020;
  }
  sprintf_wrapper(CONCAT22(uVar3,(int)pvVar2 + 0x8),0x5024,0x1050,uVar1,0x1050,
                  colony_ptr);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Entity_Set_Properties_18_1A_from_ID(undefined4 param_1)
{
  u16 value;
  int iVar1;
  undefined2 uVar2;
  void *this_ptr;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x108) == 0x0)
  {
    return 0x0;
  }
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,
                        (u8 *)(u8 *)*(undefined4 *)(iVar1 + 0x10e));
  if (*(int *)(iVar1 + 0x108) == 0x1)
  {
    value = 0x3e8;
  }
  else
  {
    value = 0x0;
  }
  UI_Component_Shift_and_Set_Values_18_1A((u32)this_ptr,value);
  return 0x1;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_858c(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x112));
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
    puVar3[0x84] = *(undefined2 *)(iVar6 + 0x108);
    puVar3[0x85] = *(undefined2 *)(iVar6 + 0x10a);
    puVar3[0x86] = *(undefined2 *)(iVar6 + 0x10c);
    *(undefined4 *)(puVar3 + 0x87) = *(undefined4 *)(iVar6 + 0x10e);
    *local_a = 0x8688;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_865c(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 0x87E0. Inherits from Type 0x6E50 and sets its own
// vtable.

void * __stdcall16far
UI_Build_Item_Type_87E0_ctor_init_8698(void *this_ptr,u32 arg1,u32 arg2)
{
  UI_Build_Item_Type_6E50_ctor_init_6af2(this_ptr,arg1,arg2);
  *(undefined2 *)this_ptr = 0x87e0;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Simulator-level command that updates planetary resource counters (code 0x1D) and
// submits an event to trigger neighbor notifications.

void __stdcall16far Simulator_Command_Update_Resources_and_Submit_86c2(void *this_ptr)
{
  void *pvVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int qty_delta;
  int arg4;
  undefined2 uVar4;
  undefined2 uVar5;
  int resource_id;
  
  uVar5 = 0x0;
  resource_id = 0x1d;
  arg4 = 0x1;
  uVar4 = 0x0;
  uVar3 = 0x0;
  qty_delta = 0x0;
  uVar2 = 0x0;
  pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
  Turn_Manager_Add_Resource_Change_Entry_Logic
            ((void *)pvVar1,CONCAT22(uVar3,uVar2),qty_delta,arg4,CONCAT22(uVar5,uVar4),
             resource_id);
  Simulator_OnEvent_Submit_Notify_and_Return_1_6b2c(this_ptr);
  return;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_86f4(undefined4 param_1)
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
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x110));
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
    *(undefined4 *)(puVar3 + 0x86) = *(undefined4 *)(iVar6 + 0x10c);
    *local_a = 0x6e50;
    puVar3[0x1] = 0x1028;
    *local_a = 0x87e0;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_87b4(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the 'InternalPutBldg' simulator command. Initializes base class with
// ID 1000, sets internal name 'SCInternalPutBldg', and maps coordinate and entity
// parameters. Sets vtable to 0x8D8E.

void * __stdcall16far
Simulator_Command_InternalPutBldg_ctor_init_87f0
          (astruct_323 *param_1,u16 param_2,u16 param_3,u16 param_4,u32 *param_5,
          undefined2 param_6,void *param_7,void *param_8)
{
  astruct_323 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x3e8);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_323 *)param_1;
  uVar1->field263_0x108 = param_8;
  uVar1->field264_0x10c = param_7;
  uVar1->field265_0x110 = 0x0;
  uVar1->field266_0x114 = *param_5;
  uVar1->field267_0x118 = (u16)param_5[0x1];
  uVar1->field268_0x11a = param_4;
  uVar1->field269_0x11c = param_3;
  uVar1->field270_0x11e = param_2;
  uVar1->field272_0x122 = 0x0;
  uVar1->field271_0x120 = 0x0;
  *(undefined2 *)param_1 = 0x8d8e;
  uVar1->field2_0x2 = 0x1028;
  sprintf_wrapper(&uVar1->field7_0x8,uVar2,0x5046,0x1050,(int)param_8,
                  (int)((ulong)param_8 >> 0x10),param_4);
  return param_1;
}



// Constructor for the 'InternalPutBldg2' simulator command. Similar to 87F0 but sets
// name to 'SCInternalPutBldg2'. Sets vtable to 0x8D8E.

void * __stdcall16far
Simulator_Command_InternalPutBldg2_ctor_init_8888
          (void *this_ptr,u16 arg1,u16 arg2,u16 coords_offset,u16 coords_segment,
          u16 arg5,u16 arg6,void *manager_ptr,void *entity_ptr)
{
  astruct_322 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x3e8);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_322 *)this_ptr;
  uVar1->field263_0x108 = entity_ptr;
  uVar1->field264_0x10c = manager_ptr;
  uVar1->field265_0x110 = _arg5;
  uVar1->field266_0x114 = *(u32 *)coords_offset;
  uVar1->field267_0x118 = *(u16 *)(coords_offset + 0x4);
  uVar1->field268_0x11a = arg2;
  uVar1->field269_0x11c = 0x0;
  uVar1->field270_0x11e = arg1;
  uVar1->field272_0x122 = 0x0;
  uVar1->field271_0x120 = 0x0;
  *(undefined2 *)this_ptr = 0x8d8e;
  uVar1->field2_0x2 = 0x1028;
  sprintf_wrapper(&uVar1->field7_0x8,uVar2,0x506f,0x1050,entity_ptr,arg2);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Handle_Entity_Interaction_and_State_Change_8920(undefined4 param_1)
{
  undefined2 *puVar1;
  u8 *puVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int *out1;
  undefined2 uVar6;
  int *unaff_SS;
  long *plVar7;
  void *this_ptr;
  u8 *puVar8;
  undefined4 *puVar9;
  undefined4 local_156 [0x43];
  undefined4 local_4a;
  int local_46;
  undefined4 *local_44;
  undefined4 local_38;
  undefined4 *local_34;
  undefined2 local_30;
  u8 *local_2e;
  void *local_2a;
  undefined1 local_26 [0x4];
  undefined4 local_22;
  u8 *local_1e;
  undefined2 uStack_1c;
  void *local_1a;
  void *local_16;
  undefined2 uStack_14;
  u8 *local_12;
  undefined2 uStack_10;
  uint local_e;
  int local_c [0x3];
  undefined4 local_6;
  
  out1 = (int *)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  plVar7 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,(void *)CONCAT22(out1,(void *)(iVar5 + 0x114)),
                      *(long *)(iVar5 + 0x108),(undefined1 *)CONCAT22(unaff_SS,local_26)
                     );
  local_6 = (u8 *)*plVar7;
  unpack_3word_struct((void *)(iVar5 + 0x114),out1,local_c,unaff_SS);
  local_2e = local_6;
  local_38 = local_6;
  puVar8 = local_38;
  local_38._3_1_ = (char)((ulong)local_6 >> 0x18);
  local_e = (uint)(local_38._3_1_ != '\0');
  local_38 = puVar8;
  if (local_e == 0x0)
  {
    uVar4 = local_6._2_2_;
    puVar2 = (u8 *)(iVar5 + 0x114);
    Simulator_Call_Virtual_Initializer_e2ac((u32)_p_SimulatorWorldContext);
    uVar6 = 0x1030;
    local_12 = puVar2;
    uStack_10 = uVar4;
    Simulator_Map_Update_Entity_at_Coords_61fe
              (_p_MapContext_5740,(u8 *)CONCAT22(uVar4,puVar2),
               (u8 *)CONCAT22(out1,(u8 *)(iVar5 + 0x114)),*(long *)(iVar5 + 0x108));
    local_38 = NULL;
    if ((*(int *)(iVar5 + 0x11a) == 0xa) || (*(int *)(iVar5 + 0x11a) == 0x37))
    {
      if (*(int *)(iVar5 + 0x11a) == 0x37)
      {
        local_38 = (u8 *)*(long *)(iVar5 + 0x10c);
      }
      iVar3 = iVar5 + 0x114;
      Simulator_Call_Virtual_Initializer_e2ac((u32)_p_SimulatorWorldContext);
      *(int *)(iVar5 + 0x10c) = iVar3;
      *(undefined2 *)(iVar5 + 0x10e) = uVar4;
      local_2e = (u8 *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x2f);
      uVar6 = 0x1018;
      UI_Component_Append_6Byte_Struct_to_Array_at_Offset_2C_Logic
                ((long)local_2e,*(long *)(iVar5 + 0x10c),*(long *)(iVar5 + 0x108));
      if (*(long *)(iVar5 + 0x110) != 0x0)
      {
        local_2a = Simulator_Get_Entity_Object_from_PackedID_e1ec
                             (_p_SimulatorWorldContext,
                              (u8 *)(u8 *)*(undefined4 *)(iVar5 + 0x10c));
        local_44 = (undefined4 *)*(undefined4 *)(iVar5 + 0x110);
        *(undefined4 *)((int)(void *)local_2a + 0x200) = local_44;
      }
    }
    local_34 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)(iVar5 + 0x10c));
    if (local_34 != NULL)
    {
      puVar1 = (undefined2 *)((int)*local_34 + 0x8);
      (*(code *)*puVar1)(uVar6,(undefined4 *)local_34,(int)((ulong)local_34 >> 0x10),0x0
                         ,local_12,uStack_10,0x0);
    }
  }
  else
  {
    local_12 = (u8 *)local_6;
    uStack_10 = local_6._2_2_;
  }
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,local_12);
  uStack_14 = (undefined2)((ulong)this_ptr >> 0x10);
  local_16 = (void *)this_ptr;
  UI_Component_Set_Entity_ID_and_Cache_Ptr_73ee
            (this_ptr,(void *)*(undefined4 *)(iVar5 + 0x10c));
  iVar3 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),
                     *(int *)(iVar5 + 0x11a));
  if ((iVar3 == 0x0) && (*(int *)(iVar5 + 0x11c) == 0x0))
  {
    local_4a = *(undefined4 *)((int)local_16 + 0xc);
    local_46 = *(int *)((int)local_16 + 0x10);
    local_44 = (undefined4 *)CONCAT22(local_44._2_2_,&local_4a);
    if (local_46 < 0x1)
    {
      local_30 = 0x5;
    }
    else
    {
      local_30 = 0x6;
    }
    *(undefined2 *)((int)local_16 + 0x14) = local_30;
  }
  local_1a = (void *)*(undefined4 *)((int)local_16 + 0x16);
  if (*(int *)((int)local_16 + 0x18) != 0x0 || (void *)local_1a != NULL)
  {
    Simulator_Command_KillBldg_ctor_init_e4fa
              ((undefined4 *)CONCAT22(unaff_SS,local_156),
               (void *)CONCAT22(*(int *)((int)local_16 + 0x18),(void *)local_1a));
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined4 *)CONCAT22(unaff_SS,local_156));
    local_156[0x0] = 0x1008389a;
  }
  puVar8 = Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
                     ((void *)_p_SimulatorWorldContext,
                      (int)((ulong)_p_SimulatorWorldContext >> 0x10),
                      *(undefined2 *)(iVar5 + 0x11e),(long)*(int *)(iVar5 + 0x11a),0x0,
                      0x700,local_12,uStack_10);
  uStack_1c = (undefined2)((ulong)puVar8 >> 0x10);
  local_1e = (u8 *)puVar8;
  if (puVar8 == NULL)
  {
    return 0x0;
  }
  UI_Component_Set_Active_Entity_and_Sync_Logic_7e5a
            ((void *)CONCAT22(uStack_14,local_16),puVar8);
  local_22 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,local_1e);
  uVar6 = (undefined2)((ulong)local_22 >> 0x10);
  puVar9 = (undefined4 *)local_22;
  iVar3 = (int)*local_22;
  puVar2 = local_12;
  uVar4 = uStack_10;
  (*(code *)*(undefined2 *)(iVar3 + 0x4))();
  (*(code *)*(undefined2 *)(iVar3 + 0x20))(0x1030,local_22,puVar9,uVar6,puVar2,uVar4);
  (*(code *)*(undefined2 *)(iVar3 + 0x18))
            (0x1030,(undefined4 *)local_22,(int)((ulong)local_22 >> 0x10),0x1);
  if (*(int *)(iVar5 + 0x11a) == 0x37)
  {
    ((undefined4 *)local_22)[0x8] = *(undefined4 *)(iVar5 + 0x10c);
  }
  *(undefined4 *)(iVar5 + 0x120) = local_22;
  return 0x1;
}
