/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 30/56
 * Original lines (combined): 78256-79143
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if the current simulator tick matches a critical turn event ID (from Resource
// 0x2C). If so, posts message 0x106 to the main UI and clears the event.

void __stdcall16far Simulator_Check_Critical_Turn_Event_76da(void)
{
  long lVar1;
  undefined2 uVar2;
  long lVar3;
  undefined4 in_stack_0000ffe4;
  undefined2 uVar4;
  undefined2 uStack_a;
  undefined2 uStack_8;
  
  uVar4 = (undefined2)((ulong)in_stack_0000ffe4 >> 0x10);
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2c);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  lVar1 = *(long *)((int)lVar3 + 0xc);
  uStack_8 = (int)((ulong)lVar1 >> 0x10);
  uStack_a = (int)lVar1;
  if ((uStack_8 != 0x0 || uStack_a != 0x0) && (*_p_SimulatorWorldContext == lVar1))
  {
    PostMessage16(0x0,0x0,0x106,(long)CONCAT22(uVar4,g_ParentHWND));
    *(undefined4 *)((int)lVar3 + 0xc) = 0x0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if any neighbor of a specific type (from array 0x18) is within a target
// distance (param_3) of the build item. Returns 1 if proximity condition is met.

u16 __stdcall16far
Simulator_Check_Neighbor_Proximity_Status_7742
          (u16 arg1,u16 arg2,int distance,void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 in_DX;
  u32 *puVar5;
  undefined2 uVar6;
  u16 unaff_SS;
  void *pvVar7;
  void *in_stack_0000000a;
  undefined2 uVar8;
  ulong uStack_1a;
  undefined1 local_16 [0x2];
  ulong uStack_14;
  u16 uStack_10;
  undefined4 uStack_e;
  undefined4 *puStack_a;
  void *pvStack_6;
  
  pvVar2 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  pvStack_6 = pvVar2;
  puStack_a = UI_Build_Item_Get_Construction_Manager_Logic_b4f2
                        ((void *)CONCAT22(this_ptr._0_2_,in_stack_0000000a));
  puVar3 = (undefined4 *)puStack_a;
  puVar5 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e(puStack_a,pvVar2,in_DX)
  ;
  uStack_e = (undefined4 *)CONCAT22(puVar5,puVar3);
  uStack_10 = 0x0;
  puVar1 = (undefined2 *)((int)*uStack_e + 0x10);
  uStack_14 = (*(code *)*puVar1)(0x1038,puVar3,puVar5);
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_16));
  uStack_1a = 0x0;
  do
  {
    if (uStack_14 <= uStack_1a)
    {
LAB_1028_77e7:
      if (uStack_e != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*uStack_e)
                  (0x1030,(undefined4 *)uStack_e,(int)((ulong)uStack_e >> 0x10),0x1,
                   puVar3,puVar5,uStack_e,uStack_e);
      }
      return uStack_10;
    }
    pvVar7 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_e);
    uVar6 = (undefined2)((ulong)pvVar7 >> 0x10);
    uVar8 = SUB42(pvVar7,0x0);
    pvVar7 = UI_Build_Item_Get_Construction_Manager_Logic_b58e
                       ((void *)CONCAT22(this_ptr._0_2_,in_stack_0000000a));
    iVar4 = Simulator_Calc_Manhattan_Distance_between_Objects_bd74
                      ((u16)local_16,unaff_SS,(u32)pvVar7,CONCAT22(uVar6,uVar8));
    if (iVar4 <= distance)
    {
      uStack_10 = 0x1;
      goto LAB_1028_77e7;
    }
    uStack_1a += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through a batch of entities (from array 0x25) and triggers their virtual
// activation callbacks (offset 0x24).

u16 __stdcall16far
Simulator_Process_Batch_Entity_Callbacks_780c(u16 x,u16 y,void *entity_ptr)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  u8 *packed_id;
  undefined2 in_DX;
  u32 *puVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *this_ptr;
  undefined4 *puVar6;
  ulong uStack_12;
  undefined4 uStack_a;
  
  puVar2 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uVar4 = 0x1038;
  puVar3 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                     (entity_ptr,puVar2,in_DX);
  uStack_a = (undefined4 *)CONCAT22(puVar3,puVar2);
  puVar1 = (undefined2 *)((int)*uStack_a + 0x10);
  uVar5 = (*(code *)*puVar1)(0x1038,puVar2,puVar3);
  if (uVar5 == 0x0)
  {
    return 0x0;
  }
  for (uStack_12 = 0x0; uStack_12 < uVar5; uStack_12 += 0x1)
  {
    puVar1 = (undefined2 *)((int)*uStack_a + 0x4);
    packed_id = (u8 *)(*(code *)*puVar1)();
    this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,packed_id);
    uVar4 = 0x1030;
    puVar6 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
    puVar1 = (undefined2 *)((int)*puVar6 + 0x24);
    (*(code *)*puVar1)();
  }
  if (uStack_a != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_a)(uVar4,puVar2,puVar3,0x1);
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Highly complex main event dispatcher for simulator ticks. Handles rebellion events
// (tick 5), resource depletion, population shifts, random entity spawning (Type
// 0x932C), and critical turn logic (tick 300, 0x3D, 0x96, 0x98).

void __stdcall16far Simulator_Main_Event_Dispatcher_Tick_78b8(u32 arg1)
{
  int low;
  char *pcVar1;
  uint16_t segment;
  u16 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  u16 unaff_SS;
  bool bVar6;
  bool bVar7;
  char *pcVar8;
  void *pvVar9;
  long lVar10;
  u16 y;
  undefined2 uVar11;
  undefined2 uVar12;
  int index;
  undefined2 local_154;
  undefined2 uStack_152;
  void *pvStack_4a;
  void *pvStack_46;
  undefined2 uStack_44;
  undefined4 local_42;
  char *local_30;
  undefined2 uStack_2e;
  char *local_1e [0x3];
  void *local_18;
  void *pvStack_14;
  undefined2 uStack_12;
  void *pvStack_10;
  undefined *puStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  ulong uStack_6;
  
  uStack_6 = *_p_SimulatorWorldContext;
  if (uStack_6 == 0x98)
  {
    pvStack_10 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,
                            (u8 *)(undefined **)&p_CurrentHeapContext);
    if (*(long *)((int)(void *)pvStack_10 + 0x200) == 0x8000002)
    {
      UI_Entity_Summary_Display_ctor_a43e((void **)CONCAT22(unaff_SS,&local_18));
      zero_init_struct_6bytes(local_1e);
      UI_Entity_Handle_Interaction_Dispatch_a49a
                ((void **)CONCAT22(unaff_SS,&local_18),
                 (char **)CONCAT22(unaff_SS,local_1e),0x7a);
      uVar2 = Colony_Check_Any_Entity_in_Group_Logic_4f54((u32)pvStack_10,0x1);
      if (uVar2 == 0x0)
      {
        UI_Entity_Handle_Interaction_Dispatch_a49a
                  ((void **)CONCAT22(unaff_SS,&local_18),NULL,0x35);
      }
    }
  }
  if ((0xe < uStack_6) && (uStack_6 < 0x16))
  {
    UI_Entity_Summary_Display_ctor_a43e((char **)CONCAT22(unaff_SS,local_1e));
    local_18 = (void *)(uStack_6 - 0xf);
    UI_Entity_Handle_Range_Interaction_Logic_a54c
              ((u16)local_1e,unaff_SS,(int)(void *)local_18);
  }
  if (uStack_6 % 0x7d == 0x0)
  {
    local_1e[0x0] = (char *)random_int_range(0x1,0x64);
    if ((int)local_1e[0x0] < 0x1a)
    {
      Simulator_World_Iterator_ctor_init_dc52
                ((char **)CONCAT22(unaff_SS,&local_30),0x1,0x0,0x400);
      do
      {
        local_18 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                             ((char **)CONCAT22(unaff_SS,&local_30));
        segment = (uint16_t)((ulong)local_18 >> 0x10);
        pvVar3 = (void *)local_18;
        if (segment == 0x0 && pvVar3 == NULL) goto LAB_1028_79d6;
      } while (*(long *)((int)pvVar3 + 0x200) == 0x8000002);
      Colony_Decrement_Population_Category_at_14E_Logic
                ((uint16_t)pvVar3,segment,0x1,0x4);
LAB_1028_79d6:
      local_30 = (char *)s_1_1050_389a;
      uStack_2e = 0x1008;
    }
  }
  if (uStack_6 == 0x5)
  {
    uVar12 = 0x1050;
    uVar11 = 0x4ffc;
    pcVar8 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,
                        (u8 *)(undefined **)&p_CurrentHeapContext);
    uStack_2e = (undefined2)((ulong)pcVar8 >> 0x10);
    local_30 = (char *)pcVar8;
    UI_Component_Set_String_at_1FA(local_30,uStack_2e,uVar11,uVar12);
  }
  if (uStack_6 == 0x12c)
  {
    uVar12 = 0x400;
    iVar5 = 0xf;
    uVar11 = 0x1;
    pcVar8 = (char *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    uStack_2e = (undefined2)((ulong)pcVar8 >> 0x10);
    local_30 = (char *)pcVar8;
    Turn_Manager_Push_Resource_Event_Logic(local_30,CONCAT22(uVar12,uVar11),iVar5);
  }
  if (uStack_6 == 0x3d)
  {
    pcVar8 = (char *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    uStack_2e = (undefined2)((ulong)pcVar8 >> 0x10);
    local_30 = (char *)pcVar8;
    local_1e[0x0] = g_ModeVersion_13AE;
    if (g_ModeVersion_13AE != (undefined *)0x1)
    {
      Simulator_World_Iterator_ctor_init_dc52
                ((undefined4 *)CONCAT22(unaff_SS,&local_42),0x1,0x0,0x400);
      while( true )
      {
        local_18 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                             ((undefined4 *)CONCAT22(unaff_SS,&local_42));
        iVar5 = (int)((ulong)local_18 >> 0x10);
        if (iVar5 == 0x0 && (void *)local_18 == NULL) break;
        pvStack_10 = (void *)*(undefined4 *)((int)(void *)local_18 + 0x1f6);
        Colony_Initialize_Default_Metrics_Logic_34da(pvStack_10);
      }
      uVar12 = 0x400;
      iVar5 = 0x10;
      uVar11 = 0x1;
      pvVar9 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x2b);
      uStack_12 = (undefined2)((ulong)pvVar9 >> 0x10);
      pvStack_14 = (void *)pvVar9;
      Turn_Manager_Push_Resource_Event_Logic(pvStack_14,CONCAT22(uVar12,uVar11),iVar5);
      local_42 = 0x1008389a;
    }
  }
  if (uStack_6 == 0x96)
  {
    pvStack_4a = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)0x1);
    y = (u16)(arg1 >> 0x10);
    uVar2 = Simulator_Process_Batch_Entity_Callbacks_780c((u16)arg1,y,pvStack_4a);
    if (uVar2 != 0x0)
    {
      uVar12 = 0x400;
      iVar5 = 0x1d;
      uVar11 = 0x1;
      pvVar9 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x2b);
      uStack_44 = (undefined2)((ulong)pvVar9 >> 0x10);
      pvStack_46 = (void *)pvVar9;
      Turn_Manager_Push_Resource_Event_Logic(pvStack_46,CONCAT22(uVar12,uVar11),iVar5);
    }
    pvStack_4a = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,
                            (u8 *)(undefined **)&p_CurrentHeapContext);
    Simulator_Process_Batch_Entity_Callbacks_780c((u16)arg1,y,pvStack_4a);
  }
  lVar10 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  uStack_8 = (undefined2)((ulong)lVar10 >> 0x10);
  uStack_a = (undefined2)lVar10;
  puStack_c = g_ModeVersion_13AE;
  if (0x2 < (int)g_ModeVersion_13AE)
  {
    pvStack_4a = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                   (_p_ResourceManager,0x2f);
    for (pvStack_46 = (void *)0x1; (int)pvStack_46 < 0x9;
        pvStack_46 = (void *)((int)pvStack_46 + 0x1))
    {
      local_42 = *(ulong *)((int)pvStack_4a + 0x34 + (int)pvStack_46 * 0x4);
      if (local_42 == uStack_6)
      {
        local_30 = (char *)0x1;
        local_1e[0x0] = (char *)random_int_range(0x1,0x64);
        if (pvStack_46 == (void *)0x7)
        {
          bVar7 = SBORROW2((int)local_1e[0x0],0x32);
          pcVar1 = local_1e[0x0] + -0x32;
          bVar6 = local_1e[0x0] == (char *)s_NewFailedMsg + 0x12;
LAB_1028_7b74:
          if (!bVar6 && bVar7 == (int)pcVar1 < 0x0)
          {
            local_30 = NULL;
          }
        }
        else if (pvStack_46 == (void *)0x8)
        {
          bVar7 = SBORROW2((int)local_1e[0x0],0x19);
          pcVar1 = local_1e[0x0] + -0x19;
          bVar6 = pcVar1 == NULL;
          goto LAB_1028_7b74;
        }
        if (local_30 != NULL)
        {
          UI_Build_Item_Type_932C_ctor_init_90e6
                    ((undefined2 *)CONCAT22(unaff_SS,&local_154),(u16)pvStack_46);
          Simulator_Global_Process_Build_Event_Type4_835a
                    (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_154)
                    );
          local_154 = 0x389a;
          uStack_152 = 0x1008;
        }
        pvVar3 = (void *)random_int_range(0x0,0xa);
        local_18 = (void *)CONCAT22(local_18._2_2_,pvVar3);
        if (pvStack_46 == (void *)0x7)
        {
          index = 0x7;
          uVar4 = (int)pvVar3 + 0x6e;
          iVar5 = (int)uVar4 >> 0xf;
        }
        else
        {
          if (pvStack_46 != (void *)0x8) goto LAB_1028_7ba0;
          index = 0x8;
          uVar4 = (int)pvVar3 + 0x64;
          iVar5 = ((int)pvVar3 >> 0xf) + (uint)((void *)0xff9b < pvVar3);
        }
        low = (uint)local_42 + uVar4;
        iVar5 = local_42._2_2_ + iVar5 + (uint)CARRY2((uint)local_42,uVar4);
        local_42 = CONCAT22(iVar5,low);
        Simulator_Object_Set_Indexed_Value_Logic_0558((long)pvStack_4a,low,iVar5,index);
      }
LAB_1028_7ba0:
    }
  }
  return;
}



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
