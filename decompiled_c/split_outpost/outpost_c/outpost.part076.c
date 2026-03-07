/*
 * Source: outpost.c
 * Chunk: 76/117
 * Original lines: 86394-87367
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Instruction at (ram,0x10287af1) overlaps instruction at (ram,0x10287af0)
// 
// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram
// Highly complex routine for deserializing entity collections from a save file.
// Reconstructs objects based on type tags (0x100-0x800), validates coordinates, and
// reintegrates them into the simulator map and UI components.

char * __stdcall16far
Simulator_Context_Load_Entity_Collection_from_File_e628
          (u32 param_1,int param_2,int param_3,int param_4,char *param_5)
{
  char cVar1;
  undefined2 *puVar2;
  u16 uVar3;
  undefined2 uVar4;
  int iVar5;
  u16 *puVar6;
  char *pcVar7;
  char *extraout_DX;
  char *extraout_DX_00;
  char *in_DX;
  u8 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  u16 unaff_SI;
  u16 unaff_DI;
  char *unaff_ES;
  undefined2 uVar11;
  u16 uVar12;
  int *unaff_SS;
  bool bVar13;
  bool bVar14;
  void *pvVar15;
  char *pcVar16;
  u32 uVar17;
  undefined4 *puVar18;
  u16 *puVar19;
  undefined4 uVar20;
  undefined2 uStackY_154;
  undefined2 uStackY_152;
  undefined2 uStackY_14c;
  undefined2 uStackY_14a;
  undefined2 uStackY_50;
  undefined2 uStackY_4e;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  u16 x;
  u16 y;
  void *in_stack_0000ffca;
  undefined2 in_stack_0000ffcc;
  u16 *puVar25;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  u8 *puStack_1e;
  undefined4 uStack_1c;
  void **ppvStack_18;
  u8 *local_16;
  char *local_14;
  int local_12;
  void *local_10;
  void *pvStack_e;
  code *pcStack_c;
  ulong uStack_a;
  u16 *local_6;
  
  uVar11 = 0x1050;
  uVar3 = unaff_SI;
  iVar5 = file_read_check(CONCAT22(param_3,param_2),&local_6,unaff_SS);
  if (iVar5 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d2;
    return in_DX;
  }
  uStack_a = 0x0;
  if (param_4 != 0x0)
  {
    return param_5;
  }
  param_5 = param_5 + -0x100;
  if ((char)param_5 != '\0')
  {
    return param_5;
  }
  param_5 = (char *)((uint)param_5 >> 0x7);
  x = (u16)param_1;
  y = (u16)(param_1 >> 0x10);
  switch(param_5)
  {
  case NULL:
    UI_Managed_List_Reset_and_Update_Max_Logic_145a
              ((void *)*(undefined4 *)(x + 0xe),local_6);
    uStack_1c = NULL;
    while( true )
    {
      if (local_6 <= uStack_1c) break;
      pvStack_20 = allocate_memory(CONCAT22(uVar3,0x14));
      puVar8 = (u8 *)((uint)param_5 | (uint)pvStack_20);
      puStack_1e = (u8 *)param_5;
      if (puVar8 == NULL)
      {
        ppvStack_18 = NULL;
        puVar8 = NULL;
      }
      else
      {
        ppvStack_18 = (void **)UI_Production_Item_Type_613E_ctor_613E_Alternative_5d0a
                                         ((void *)CONCAT22(param_5,pvStack_20));
      }
      puVar2 = (undefined2 *)((int)*(undefined4 *)CONCAT22(puVar8,ppvStack_18) + 0x10);
      local_16 = puVar8;
      uVar20 = (*(code *)*puVar2)();
      if ((int)uVar20 == 0x0)
      {
        return (char *)((ulong)uVar20 >> 0x10);
      }
                // WARNING: Load size is inaccurate
      pvStack_e = (void *)ppvStack_18[0x2];
      pcStack_c = (code *)((ulong)ppvStack_18[0x2] >> 0x10);
      param_5 = (char *)((uint)ppvStack_18[0x3] & 0xff);
      UI_Managed_List_Set_Item_FarPtr_Logic_14b4
                ((void *)*(undefined4 *)(x + 0xe),(u16)ppvStack_18,(u16)local_16,
                 (void *)((ulong)CONCAT22(ppvStack_18[0x3],pvStack_e) & 0xffffff));
      uStack_1c = (u16 *)((long)uStack_1c + 0x1);
    }
    break;
  case (char *)0x1:
                // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case (char *)0x2:
    UI_Managed_List_Reset_and_Update_Max_Logic_145a
              ((void *)*(undefined4 *)(x + 0x12),local_6);
    uStack_28 = NULL;
    while( true )
    {
      if (local_6 <= uStack_28) break;
      pvStack_20 = allocate_memory(CONCAT22(uVar3,0x1c));
      uVar9 = (uint)param_5 | (uint)pvStack_20;
      puStack_1e = (u8 *)param_5;
      if (uVar9 == 0x0)
      {
        puVar6 = NULL;
        uVar9 = 0x0;
      }
      else
      {
        puVar6 = UI_Colony_Component_ctor_init_2958
                           ((void *)CONCAT22(param_5,pvStack_20));
      }
      uStack_24 = (u16 *)CONCAT22(uVar9,puVar6);
      puVar2 = (undefined2 *)((int)*(undefined4 *)uStack_24 + 0x10);
      uVar20 = (*(code *)*puVar2)();
      if ((int)uVar20 == 0x0)
      {
        return (char *)((ulong)uVar20 >> 0x10);
      }
      uVar12 = (u16)((ulong)uStack_24 >> 0x10);
      puVar10 = (undefined4 *)uStack_24;
      pvStack_e = (void *)(void *)puVar10[0x1];
      pcStack_c = (code *)((ulong)puVar10[0x1] >> 0x10);
      param_5 = (char *)(*(uint *)((int)puVar10 + 0x6) & 0xff);
      UI_Managed_List_Set_Item_FarPtr_Logic_14b4
                ((void *)*(undefined4 *)(x + 0x12),(u16)puVar10,uVar12,
                 (void *)((ulong)CONCAT22(*(uint *)((int)puVar10 + 0x6),pvStack_e) &
                         0xffffff));
      uStack_28 = (u16 *)((long)uStack_28 + 0x1);
    }
    break;
  case (char *)0x3:
    uStackY_4e = 0x1028;
    uStackY_50 = 0x970b;
    puVar8 = (u8 *)(x + 0x114);
    Simulator_Call_Virtual_Initializer_e2ac((u32)_p_SimulatorWorldContext);
    uStackY_4e = 0x9728;
    local_16 = puVar8;
    local_14 = param_5;
    Simulator_Map_Update_Entity_at_Coords_61fe
              (_p_MapContext_5740,(u8 *)CONCAT22(param_5,puVar8),
               (u8 *)CONCAT22(y,(u8 *)(x + 0x114)),*(long *)(x + 0x108));
    if ((*(int *)(x + 0x11a) == 0xa) || (*(int *)(x + 0x11a) == 0x37))
    {
      if (*(int *)(x + 0x11a) == 0x37)
      {
        param_5 = (char *)*(undefined2 *)(x + 0x120);
        uVar20 = *(undefined4 *)(x + 0x10c);
        uStack_2c._2_2_ = (u16)uVar20;
        uStack_28._0_2_ = (u16 *)((ulong)uVar20 >> 0x10);
        *(undefined4 *)((int)*(undefined4 *)(x + 0x11e) + 0x20) = uVar20;
      }
      iVar5 = x + 0x114;
      uStackY_4e = 0x1030;
      uStackY_50 = 0x9788;
      Simulator_Call_Virtual_Initializer_e2ac((u32)_p_SimulatorWorldContext);
      *(int *)(x + 0x10c) = iVar5;
      *(undefined2 *)(x + 0x10e) = param_5;
      UI_Component_Append_6Byte_Struct_to_Array_at_Offset_2C_Logic
                ((long)local_6,CONCAT22(param_5,*(undefined2 *)(x + 0x10c)),
                 *(long *)(x + 0x108));
      if (*(int *)(x + 0x11a) == 0xa)
      {
        UI_Component_Set_FarPtr_at_Offset_24_and_Notify_Logic
                  ((long)local_6,*(long *)(x + 0x10c));
      }
    }
    pvVar15 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,(u8 *)(u8 *)*(undefined4 *)(x + 0x10c)
                        );
    iVar5 = (int)((ulong)pvVar15 >> 0x10);
    *(undefined2 *)(x + 0x110) = (void *)pvVar15;
    *(int *)(x + 0x112) = iVar5;
    if (iVar5 != 0x0 || *(int *)(x + 0x110) != 0x0)
    {
      puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(x + 0x110) + 0x8);
      (*(code *)*puVar2)();
    }
    pvVar15 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,local_16);
    ppvStack_18 = (void **)((ulong)pvVar15 >> 0x10);
    uStack_1c._2_2_ = (void *)pvVar15;
    UI_Component_Set_Entity_ID_and_Cache_Ptr_73ee
              (pvVar15,(void *)*(undefined4 *)(x + 0x10c));
    iVar5 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),*(int *)(x + 0x11a))
    ;
    if ((iVar5 == 0x0) && (*(int *)(x + 0x122) == 0x0))
    {
      uVar11 = (undefined2)((ulong)*(undefined4 *)((int)uStack_1c._2_2_ + 0xc) >> 0x10);
      if (*(int *)((int)uStack_1c._2_2_ + 0x10) < 0x1)
      {
        uVar4 = 0x5;
      }
      else
      {
        uVar4 = 0x6;
      }
      *(undefined2 *)((int)uStack_1c._2_2_ + 0x14) = uVar4;
    }
    puStack_1e = (u8 *)(u8 *)*(undefined4 *)((int)uStack_1c._2_2_ + 0x16);
    uStack_1c._0_2_ =
         (u16 *)((ulong)*(undefined4 *)((int)uStack_1c._2_2_ + 0x16) >> 0x10);
                // WARNING: Load size is inaccurate
    pvVar15 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (*(undefined **)&p_SimulatorWorldContext,puStack_1e);
    pvStack_20 = (void *)((ulong)pvVar15 >> 0x10);
    uStack_24 = (u16 *)CONCAT22((void *)pvVar15,(undefined4 *)uStack_24);
    if ((u8 *)CONCAT22((u16 *)uStack_1c,puStack_1e) != NULL)
    {
      Simulator_Command_KillBldg_ctor_init_e4fa
                ((undefined2 *)CONCAT22(unaff_SS,&uStackY_14c),
                 (u8 *)CONCAT22((u16 *)uStack_1c,puStack_1e));
                // WARNING: Load size is inaccurate
      Simulator_Global_Process_Build_Event_Type4_835a
                (*(undefined **)&p_SimulatorGlobalState,
                 (undefined2 *)CONCAT22(unaff_SS,&uStackY_14c));
      uStackY_14c = 0x389a;
      uStackY_14a = 0x1008;
    }
    puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(x + 0x11e) + 0x4);
    (*(code *)*puVar2)();
    uStackY_4e = 0x9902;
    pcVar7 = extraout_DX;
    UI_Component_Set_Active_Entity_and_Sync_Logic_7e5a
              ((void *)CONCAT22(ppvStack_18,uStack_1c._2_2_),
               (void *)*(undefined4 *)((int)*(undefined4 *)(x + 0x11e) + 0x4));
    return pcVar7;
  case (char *)0x4:
    UI_Managed_List_Reset_and_Update_Max_Logic_145a
              ((void *)*(undefined4 *)(x + 0x16),local_6);
    uStack_28 = NULL;
    while( true )
    {
      if (local_6 <= uStack_28) break;
      pvStack_20 = allocate_memory(CONCAT22(uVar3,0x1e));
      uVar9 = (uint)param_5 | (uint)pvStack_20;
      puStack_1e = (u8 *)param_5;
      if (uVar9 == 0x0)
      {
        puVar6 = NULL;
        uVar9 = 0x0;
      }
      else
      {
        puVar6 = UI_Production_Item_ctor_init_560e((void *)CONCAT22(param_5,pvStack_20))
        ;
      }
      uStack_24 = (u16 *)CONCAT22(uVar9,puVar6);
      puVar2 = (undefined2 *)((int)*(undefined4 *)uStack_24 + 0x10);
      uVar20 = (*(code *)*puVar2)();
      if ((int)uVar20 == 0x0)
      {
        return (char *)((ulong)uVar20 >> 0x10);
      }
      uVar11 = (undefined2)((ulong)uStack_24 >> 0x10);
      pvVar15 = (void *)((undefined4 *)uStack_24)[0x1];
      pvStack_e = (void *)pvVar15;
      pcStack_c = (code *)((ulong)pvVar15 >> 0x10);
      puVar25 = (u16 *)((undefined4 *)uStack_24)[0x4];
      uStack_1c._0_2_ = (u16 *)puVar25;
      uStack_1c._2_2_ = (void *)((ulong)puVar25 >> 0x10);
      Simulator_Map_Execute_Action_at_Coords_6222();
      param_5 = (char *)((uint)pcStack_c & 0xff);
      UI_Managed_List_Set_Item_FarPtr_Logic_14b4
                ((void *)*(undefined4 *)(x + 0x16),(u16)(undefined4 *)uStack_24,
                 (u16)((ulong)uStack_24 >> 0x10),
                 (void *)((ulong)CONCAT22(pcStack_c,pvStack_e) & 0xffffff));
      uStack_28 = (u16 *)((long)uStack_28 + 0x1);
    }
    break;
  case (char *)0x5:
    param_5[0x0] = -0x80;
    param_5[0x1] = 'R';
    (param_5 + 0x2)[0x0] = '(';
    (param_5 + 0x2)[0x1] = '\x10';
    return unaff_ES;
  case (char *)0x6:
    UI_Managed_List_Reset_and_Update_Max_Logic_145a
              ((void *)*(undefined4 *)(x + 0x1a),local_6);
    local_30 = NULL;
    while( true )
    {
      if (local_6 <= local_30) break;
      pvStack_20 = allocate_memory(CONCAT22(uVar3,0x21e));
      puStack_1e = (u8 *)param_5;
      if (param_5 == NULL && pvStack_20 == NULL)
      {
        puVar18 = NULL;
      }
      else
      {
        puVar18 = UI_Colony_Window_ctor_init_30aa((void *)CONCAT22(param_5,pvStack_20));
      }
      puVar2 = (undefined2 *)((int)*puVar18 + 0x10);
      uStack_2c = puVar18;
      uVar20 = (*(code *)*puVar2)();
      if ((int)uVar20 == 0x0)
      {
        return (char *)((ulong)uVar20 >> 0x10);
      }
      pvStack_e = (void *)(void *)((undefined4 *)uStack_2c)[0x1];
      pcStack_c = (code *)((ulong)((undefined4 *)uStack_2c)[0x1] >> 0x10);
      param_5 = (char *)(*(uint *)((int)(undefined4 *)uStack_2c + 0x6) & 0xff);
      UI_Managed_List_Set_Item_FarPtr_Logic_14b4
                ((void *)*(undefined4 *)(x + 0x1a),(u16)(undefined4 *)uStack_2c,
                 uStack_2c._2_2_,
                 (void *)((ulong)CONCAT22(*(uint *)((int)(undefined4 *)uStack_2c + 0x6),
                                          pvStack_e) & 0xffffff));
      local_30 = (u16 *)((long)local_30 + 0x1);
    }
    break;
  case (char *)0x7:
  case (char *)0x8:
    UI_Managed_List_Reset_and_Update_Max_Logic_145a
              ((void *)*(undefined4 *)(x + 0x1e),local_6);
    Simulator_Map_Batch_Update_Entities_vcall_8_66de
              (_p_MapContext_5740,(u16)(undefined4 *)local_6);
    local_30 = NULL;
    while( true )
    {
      if (local_6 <= local_30)
      {
        Helper_NoOp_Stub_154c();
        Simulator_Map_Batch_Execute_Entities_vcall_C_6740(_p_MapContext_5740);
        return param_5;
      }
      local_14 = (char *)_p_Pool_Type5_Entity;
      local_12 = (int)((ulong)_p_Pool_Type5_Entity >> 0x10);
      pvStack_20 = validate_and_get_block(local_14);
      puStack_1e = (u8 *)param_5;
      if (param_5 == NULL && pvStack_20 == NULL)
      {
        puVar18 = NULL;
      }
      else
      {
        puVar18 = UI_SubComponent_Type8114_ctor_init_67cc
                            ((void *)CONCAT22(param_5,pvStack_20));
      }
      puVar2 = (undefined2 *)((int)*puVar18 + 0x10);
      uStack_2c = puVar18;
      uVar20 = (*(code *)*puVar2)();
      if ((int)uVar20 == 0x0) break;
      pvVar15 = (void *)((undefined4 *)uStack_2c)[0x1];
      pvStack_e = (void *)pvVar15;
      pcStack_c = (code *)((ulong)pvVar15 >> 0x10);
      puVar25 = (u16 *)((undefined4 *)uStack_2c)[0x2];
      uStack_28._0_2_ = (u16 *)puVar25;
      uStack_28._2_2_ = (u16)((ulong)puVar25 >> 0x10);
      uStack_24 = (u16 *)CONCAT22(uStack_24._2_2_,&stack0xffca);
      uStackY_4e = 0xe977;
      Simulator_Map_Batch_Sync_Entities_by_Rect_671c
                (_p_MapContext_5740,pvVar15,(u16 *)CONCAT22(unaff_SS,&stack0xffca),
                 (long)puVar25);
      param_5 = (char *)((uint)pcStack_c & 0xff);
      UI_Managed_List_Set_Item_FarPtr_Logic_14b4
                ((void *)*(undefined4 *)(x + 0x1e),(u16)(undefined4 *)uStack_2c,
                 uStack_2c._2_2_,
                 (void *)((ulong)CONCAT22(pcStack_c,pvStack_e) & 0xffffff));
      local_30 = (u16 *)((long)local_30 + 0x1);
    }
    return (char *)((ulong)uVar20 >> 0x10);
  case (char *)0x9:
    local_6 = (u16 *)((ulong)local_6 & 0xffff);
    if (false)
    {
      uVar17 = Simulator_Get_Active_Context_Pointer_ebee(param_1);
      return (char *)(uVar17 >> 0x10);
    }
    pcStack_c = (code *)*(undefined2 *)(x + 0x2e);
    uStack_a = (ulong)*(uint *)(x + 0x30);
    (*pcStack_c)();
    return extraout_DX_00;
  case (char *)0xa:
    UI_Managed_List_Reset_and_Update_Max_Logic_145a
              ((void *)*(undefined4 *)(x + 0x22),local_6);
    puVar25 = NULL;
    while( true )
    {
      if (local_6 <= puVar25) break;
      pvStack_20 = allocate_memory(CONCAT22(uVar3,0xe));
      puStack_1e = (u8 *)param_5;
      if (param_5 == NULL && pvStack_20 == NULL)
      {
        local_30 = NULL;
      }
      else
      {
        local_30 = UI_Item_Base_ctor_init_b204((void *)CONCAT22(param_5,pvStack_20));
      }
      puVar2 = (undefined2 *)((int)*(undefined4 *)local_30 + 0x10);
      uVar20 = (*(code *)*puVar2)();
      if ((int)uVar20 == 0x0)
      {
        return (char *)((ulong)uVar20 >> 0x10);
      }
      uVar12 = (u16)((ulong)local_30 >> 0x10);
      puVar10 = (undefined4 *)local_30;
      pvStack_e = (void *)(void *)puVar10[0x1];
      pcStack_c = (code *)((ulong)puVar10[0x1] >> 0x10);
      param_5 = (char *)(*(uint *)((int)puVar10 + 0x6) & 0xff);
      UI_Managed_List_Set_Item_FarPtr_Logic_14b4
                ((void *)*(undefined4 *)(x + 0x22),(u16)puVar10,uVar12,
                 (void *)((ulong)CONCAT22(*(uint *)((int)puVar10 + 0x6),pvStack_e) &
                         0xffffff));
      puVar25 = (u16 *)((long)puVar25 + 0x1);
    }
    break;
  case (char *)0xb:
    if (param_5 < (char *)((int)(undefined **)&p_SmallBlockFreeList + 0x1))
    {
      pcVar16 = (char *)(unaff_SI + 0x23);
      cVar1 = *pcVar16;
      *pcVar16 = *pcVar16 << 0x6;
      *(uint *)(param_5 + unaff_SI) =
           *(int *)(param_5 + unaff_SI) +
           (-0x6600 - (uint)((char)(cVar1 << 0x5) < '\0'));
    }
    else
    {
      uVar3 = Simulator_Process_Batch_Entity_Callbacks_780c
                        (uVar3,unaff_DI,
                         (void *)CONCAT22(in_stack_0000ffcc,in_stack_0000ffca));
      if (uVar3 == 0x0) goto code_r0x10287b17;
    }
    uVar11 = 0x400;
    iVar5 = 0x1d;
    uStackY_4e = 0x7b0a;
    pvVar15 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b)
    ;
    Turn_Manager_Push_Resource_Event_Logic
              ((void *)pvVar15,CONCAT22(uVar11,(int)((ulong)pvVar15 >> 0x10)),iVar5);
code_r0x10287b17:
    pvVar15 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,
                         (u8 *)(undefined **)&p_CurrentHeapContext);
    Simulator_Process_Batch_Entity_Callbacks_780c(x,y,pvVar15);
    uStack_a = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    pcVar7 = (char *)(uStack_a >> 0x10);
    pcStack_c = (code *)g_ModeVersion_13AE;
    if (0x2 < (int)g_ModeVersion_13AE)
    {
      pcVar16 = (char *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x2f);
      pcVar7 = (char *)((ulong)pcVar16 >> 0x10);
      pcVar22 = (char *)pcVar16;
      pcVar23 = pcVar7;
      for (pcVar24 = (char *)0x1; (int)pcVar24 < 0x9; pcVar24 = pcVar24 + 0x1)
      {
        pcVar21 = pcVar22;
        if (*(u16 **)(pcVar22 + (int)pcVar24 * 0x4 + 0x34) == local_6)
        {
          local_30 = (u16 *)CONCAT22(local_30._2_2_,(u16 *)0x1);
          uVar3 = 0x7bd7;
          puStack_1e = (u8 *)random_int_range(0x1,0x64);
          if (uVar3 == 0x7)
          {
            bVar14 = SBORROW2((int)puStack_1e,0x32);
            pcVar24 = (char *)puStack_1e + -0x32;
            bVar13 = puStack_1e == (u8 *)((char *)s_NewFailedMsg + 0x12);
LAB_1028_7b74:
            if (!bVar13 && bVar14 == (int)pcVar24 < 0x0)
            {
              local_30 = (u16 *)((ulong)local_30 & 0xffff0000);
            }
          }
          else if (uVar3 == 0x8)
          {
            bVar14 = SBORROW2((int)puStack_1e,0x19);
            pcVar24 = (char *)puStack_1e + -0x19;
            bVar13 = pcVar24 == NULL;
            goto LAB_1028_7b74;
          }
          if ((undefined4 *)local_30 != NULL)
          {
            pvVar15 = UI_Build_Item_Type_932C_ctor_init_90e6
                                ((undefined2 *)CONCAT22(unaff_SS,&uStackY_154),uVar3);
            pcVar7 = (char *)((ulong)pvVar15 >> 0x10);
            pcVar23 = (char *)0x1008;
            pcVar22 = (char *)0x7c0c;
            Simulator_Global_Process_Build_Event_Type4_835a
                      (_p_SimulatorGlobalState,
                       (undefined2 *)CONCAT22(unaff_SS,&uStackY_154));
            uStackY_154 = 0x389a;
            uStackY_152 = 0x1008;
          }
          uVar9 = 0x0;
          pcVar24 = (char *)0x7c23;
          ppvStack_18 = (void **)random_int_range(0x0,0xa);
          if (pcVar24 == (char *)0x7)
          {
            iVar5 = 0x7;
            puVar6 = (u16 *)(ppvStack_18 + 0x37);
            pcVar7 = (char *)((int)puVar6 >> 0xf);
          }
          else
          {
            pcVar21 = pcVar22;
            if (pcVar24 != (char *)0x8) goto LAB_1028_7ba0;
            iVar5 = 0x8;
            puVar6 = (u16 *)(ppvStack_18 + 0x32);
            pcVar7 = (char *)(((int)ppvStack_18 >> 0xf) +
                             (uint)((u16 *)0xff9b < ppvStack_18));
          }
          pcVar21 = (char *)0x1008;
          pcVar24 = pcVar23;
          Simulator_Object_Set_Indexed_Value_Logic_0558
                    ((long)CONCAT22(pcVar23,pcVar22),uVar9 + (int)puVar6,
                     (int)(pcVar7 + (uint)CARRY2(uVar9,(uint)puVar6) + iVar5),
                     (int)(pcVar7 + (uint)CARRY2(uVar9,(uint)puVar6) + iVar5));
          pcVar23 = pcVar22;
        }
LAB_1028_7ba0:
        pcVar22 = pcVar21;
      }
    }
    return pcVar7;
  case (char *)0xc:
    UI_Managed_List_Reset_and_Update_Max_Logic_145a
              ((void *)*(undefined4 *)(x + 0x26),local_6);
    puVar25 = NULL;
    while( true )
    {
      if (local_6 <= puVar25) break;
      iVar5 = file_read_check(CONCAT22(param_3,param_2),&local_30,unaff_SS);
      if (iVar5 == 0x0)
      {
        g_LastFileErrorMsgID = (undefined *)0x6d2;
        return param_5;
      }
      uStack_2c._0_2_ =
           (undefined4 *)
           file_context_remap_sequence_id_by_version_logic
                     (param_2,param_3,(int)(undefined4 *)local_30);
      puVar19 = UI_Build_Item_Factory_Create_Wrapper_0016();
      uStack_28._2_2_ = (u16)((ulong)puVar19 >> 0x10);
      uStack_28._0_2_ = (u16 *)puVar19;
      puVar2 = (undefined2 *)((int)*(undefined4 *)puVar19 + 0x10);
      uVar20 = (*(code *)*puVar2)();
      if ((int)uVar20 == 0x0)
      {
        return (char *)((ulong)uVar20 >> 0x10);
      }
      pvStack_e = (void *)*(void **)((u16 *)uStack_28 + 0x2);
      pcStack_c = (code *)((ulong)*(void **)((u16 *)uStack_28 + 0x2) >> 0x10);
      param_5 = (char *)(((u16 *)uStack_28)[0x3] & 0xff);
      UI_Managed_List_Set_Item_FarPtr_Logic_14b4
                ((void *)*(undefined4 *)(x + 0x26),(u16)(u16 *)uStack_28,uStack_28._2_2_
                 ,(void *)((ulong)CONCAT22(((u16 *)uStack_28)[0x3],pvStack_e) & 0xffffff
                          ));
      puVar25 = (u16 *)((long)puVar25 + 0x1);
    }
    break;
  case (char *)0xd:
    uStack_a = ZEXT24(param_5) << 0x10;
                // WARNING: Load size is inaccurate
    local_10 = (void *)*(undefined **)&p_AllocStrategyCode;
    pvStack_e = (void *)((ulong)*(undefined **)&p_AllocStrategyCode >> 0x10);
    pcStack_c = (code *)*(undefined **)&p_FreeBlockListHead;
    ppvStack_18 = &local_10;
    uStackY_4e = 0x211d;
    unpack_3word_struct(&local_10,unaff_SS,(int *)&local_16,unaff_SS);
    ppvStack_18 = (void **)((int)local_14 + -0x1);
    pvStack_e = ppvStack_18;
    uVar3 = Simulator_Is_Entity_Type_Type64_at_Coords_21ba
                      (x,y,(void **)CONCAT22(unaff_SS,&local_10),local_6);
    if (uVar3 == 0x0)
    {
      ppvStack_18 = (void **)((int)local_14 + 0x1);
      pvStack_e = ppvStack_18;
      uVar3 = Simulator_Is_Entity_Type_Type64_at_Coords_21ba
                        (x,y,(void **)CONCAT22(unaff_SS,&local_10),local_6);
      if (uVar3 == 0x0)
      {
        pvStack_e = local_14;
        ppvStack_18 = (void **)(local_12 + -0x1);
        local_10 = ppvStack_18;
        uVar3 = Simulator_Is_Entity_Type_Type64_at_Coords_21ba
                          (x,y,(void **)CONCAT22(unaff_SS,&local_10),local_6);
        if (uVar3 == 0x0)
        {
          ppvStack_18 = (void **)(local_12 + 0x1);
          local_10 = ppvStack_18;
          uVar3 = Simulator_Is_Entity_Type_Type64_at_Coords_21ba
                            (x,y,(void **)CONCAT22(unaff_SS,&local_10),local_6);
          if (uVar3 == 0x0)
          {
            return param_5;
          }
        }
      }
    }
    UI_Component_Add_B932_to_Manager_79b2();
    return param_5;
  case (char *)0xe:
    UI_Managed_List_Reset_and_Update_Max_Logic_145a
              ((void *)*(undefined4 *)(x + 0x2a),local_6);
    puVar25 = NULL;
    while( true )
    {
      if (local_6 <= puVar25) break;
      pvStack_20 = allocate_memory(CONCAT22(uVar3,0x3b2));
      uVar9 = (uint)param_5 | (uint)pvStack_20;
      puStack_1e = (u8 *)param_5;
      if (uVar9 == 0x0)
      {
        puVar6 = NULL;
        uVar9 = 0x0;
      }
      else
      {
        puVar6 = UI_Colony_Production_Manager_ctor_init_2068
                           ((void *)CONCAT22(param_5,pvStack_20));
      }
      local_30 = (u16 *)CONCAT22(uVar9,puVar6);
      puVar2 = (undefined2 *)((int)*(undefined4 *)local_30 + 0x10);
      uVar20 = (*(code *)*puVar2)();
      if ((int)uVar20 == 0x0)
      {
        return (char *)((ulong)uVar20 >> 0x10);
      }
      uVar12 = (u16)((ulong)local_30 >> 0x10);
      puVar10 = (undefined4 *)local_30;
      pvStack_e = (void *)(void *)puVar10[0x1];
      pcStack_c = (code *)((ulong)puVar10[0x1] >> 0x10);
      param_5 = (char *)(*(uint *)((int)puVar10 + 0x6) & 0xff);
      UI_Managed_List_Set_Item_FarPtr_Logic_14b4
                ((void *)*(undefined4 *)(x + 0x2a),(u16)puVar10,uVar12,
                 (void *)((ulong)CONCAT22(*(uint *)((int)puVar10 + 0x6),pvStack_e) &
                         0xffffff));
      puVar25 = (u16 *)((long)puVar25 + 0x1);
    }
    break;
  default:
    goto LAB_1028_ebe7;
  }
  Helper_NoOp_Stub_154c();
LAB_1028_ebe7:
  return param_5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the active simulator context pointer and ensures memory is allocated for
// it. Returns the global 1050:5166 pointer.

u32 __stdcall16far Simulator_Get_Active_Context_Pointer_ebee(u32 this_ptr)
{
  void *pvVar1;
  int in_DX;
  int iVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 in_stack_0000ffe6;
  
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffe6,0x14));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    UI_Global_Window_Manager_ctor_init_1a32((void *)CONCAT22(in_DX,pvVar1));
  }
  pvVar4 = Simulator_Get_Active_Coordinate_Ptr_4574
                     ((void *)*(undefined4 *)((int)this_ptr + 0x52));
  uVar3 = (undefined2)((ulong)_PTR_DAT_1050_0000_1050_5166 >> 0x10);
  iVar2 = (int)_PTR_DAT_1050_0000_1050_5166;
  *(undefined2 *)(iVar2 + 0x10) = (int)pvVar4;
  *(undefined2 *)(iVar2 + 0x12) = (int)((ulong)pvVar4 >> 0x10);
  uVar3 = (undefined2)((ulong)_PTR_DAT_1050_0000_1050_5166 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)_PTR_DAT_1050_0000_1050_5166 + 0x6),
                  *(undefined2 *)((int)_PTR_DAT_1050_0000_1050_5166 + 0x4));
}



undefined4 __stdcall16far
UI_Production_Item_Factory_and_List_Add_ec36
          (undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          void *param_5)
{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  int in_DX;
  undefined2 uVar4;
  u16 *puVar5;
  undefined2 uVar6;
  void *pvVar7;
  void *in_stack_0000ffe2;
  undefined2 in_stack_0000ffe4;
  
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffe2,0x14));
  if (in_DX == 0x0 && pvVar2 == NULL)
  {
    pvVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    pvVar7 = UI_Production_Item_Type_613E_ctor_init_5d3c
                       ((void *)CONCAT22(in_DX,pvVar2),param_5);
    uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
    pvVar2 = (void *)pvVar7;
  }
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x52);
  pvVar3 = pvVar2;
  puVar5 = Simulator_Factory_Create_Resource_Entry_4594
                     ((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_3);
  UI_Component_Set_Internal_Object_Ptr_5fe2
            ((u32)CONCAT22(uVar4,pvVar2),(u32)CONCAT22(puVar5,pvVar3));
  uVar1 = *(undefined4 *)((int)pvVar2 + 0x4);
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)param_1 + 0xe),(void *)CONCAT22(uVar4,pvVar2),
             (uint)uVar1,(void *)CONCAT22(in_stack_0000ffe4,in_stack_0000ffe2));
  return uVar1;
}



undefined4 __stdcall16far
UI_Colony_Component_Factory_and_List_Add_ecac
          (undefined4 param_1,undefined2 param_2,undefined2 *param_3,undefined2 param_4,
          void *param_5)
{
  undefined4 uVar1;
  void *pvVar2;
  undefined2 *puVar3;
  int in_DX;
  undefined2 uVar4;
  int *piVar5;
  undefined2 uVar6;
  void *pvVar7;
  void *in_stack_0000ffe2;
  undefined2 in_stack_0000ffe4;
  
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffe2,0x1c));
  if (in_DX == 0x0 && pvVar2 == NULL)
  {
    pvVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    pvVar7 = UI_Colony_Component_ctor_with_Params_299a
                       ((void *)CONCAT22(in_DX,pvVar2),param_5);
    uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
    pvVar2 = (void *)pvVar7;
  }
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x52);
  puVar3 = param_3;
  piVar5 = Simulator_Factory_Create_Specialized_Entity_Entry_4628
                     ((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_3);
  *puVar3 = param_3;
  UI_Component_Set_Internal_Object_Ptr_Alternative_3006
            ((u32)CONCAT22(uVar4,pvVar2),(u32)CONCAT22(piVar5,puVar3));
  uVar1 = *(undefined4 *)((int)pvVar2 + 0x4);
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)param_1 + 0x12),(void *)CONCAT22(uVar4,pvVar2)
             ,(uint)uVar1,(void *)CONCAT22(in_stack_0000ffe4,in_stack_0000ffe2));
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Orchestrates a production-based interaction. Creates a UI Production Item, updates
// its layout, executes a map-based action (6222), and notifies the simulator.

ulong __stdcall16far
Simulator_Process_Production_Interaction_ed2c
          (undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          void *param_5)
{
  undefined4 uVar1;
  ulong uVar2;
  void *pvVar3;
  u16 *puVar4;
  u16 *puVar5;
  uint in_DX;
  uint uVar6;
  int *piVar7;
  undefined2 uVar8;
  void *in_stack_0000ffe2;
  undefined2 in_stack_0000ffe4;
  
  pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffe2,0x1e));
  uVar6 = in_DX | (uint)pvVar3;
  if (uVar6 == 0x0)
  {
    puVar4 = NULL;
    uVar6 = 0x0;
  }
  else
  {
    puVar4 = UI_Production_Item_ctor_with_Params_565a
                       ((void *)CONCAT22(in_DX,pvVar3),param_5);
  }
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x52);
  puVar5 = puVar4;
  piVar7 = Simulator_Factory_Create_Building_Entry_Logic_4782
                     ((int)uVar1,(int)((ulong)uVar1 >> 0x10),0x1,0x1,param_3);
  UI_Production_Item_Update_Layout_Logic_5a80
            ((u16 *)CONCAT22(uVar6,puVar4),(u16 *)CONCAT22(piVar7,puVar5));
  uVar2 = *(ulong *)(puVar4 + 0x2);
  Simulator_Map_Execute_Action_at_Coords_6222
            ((int)_p_MapContext_5740,(int)((ulong)_p_MapContext_5740 >> 0x10),0x1,puVar5
             ,piVar7,(uint)uVar2,(int)(uVar2 >> 0x10));
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)param_1 + 0x16),(u16 *)CONCAT22(uVar6,puVar4),
             (uint)uVar2,(void *)CONCAT22(in_stack_0000ffe4,in_stack_0000ffe2));
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __stdcall16far
UI_Colony_Window_Factory_and_List_Add_edc4
          (undefined4 param_1,undefined2 param_2,void *param_3,void *param_4)
{
  void *pvVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  u32 *puVar4;
  void *pvVar5;
  void *in_stack_0000ffd6;
  undefined2 in_stack_0000ffd8;
  undefined1 local_1a [0x4];
  undefined4 local_16;
  void *local_12;
  undefined2 uStack_10;
  u32 local_e;
  u32 local_a;
  void *local_6;
  
  local_6 = param_3;
  puVar4 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,param_3,(long)param_4,
                      (undefined1 *)CONCAT22(unaff_SS,local_1a));
  iVar2 = (int)((ulong)puVar4 >> 0x10);
  local_e = *puVar4;
  local_a = local_e;
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffd6,0x21e));
  if (iVar2 == 0x0 && pvVar1 == NULL)
  {
    pvVar1 = NULL;
    uVar3 = 0x0;
  }
  else
  {
    pvVar5 = UI_Colony_Window_ctor_with_Params_3222
                       ((void *)CONCAT22(iVar2,pvVar1),local_e,param_4);
    uVar3 = (undefined2)((ulong)pvVar5 >> 0x10);
    pvVar1 = (void *)pvVar5;
  }
  _local_12 = (void *)CONCAT22(uVar3,pvVar1);
  local_16 = *(undefined4 *)((int)pvVar1 + 0x4);
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)param_1 + 0x1a),(void *)CONCAT22(uVar3,pvVar1)
             ,(uint)local_16,(void *)CONCAT22(in_stack_0000ffd8,in_stack_0000ffd6));
  return local_16;
}



// Dispatches a base-level interaction for different item types (4, 0xC, or generic).
// Instantiates specialized UI items and notifies the simulator.

void * __stdcall16far
Simulator_Process_Item_Base_Interaction_ef00
          (undefined4 param_1,undefined2 param_2,int param_3)
{
  void *pvVar1;
  int in_DX;
  undefined2 uVar2;
  void *pvVar3;
  void *in_stack_0000ffe4;
  undefined2 in_stack_0000ffe6;
  
  if (param_3 == 0x4)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffe4,0x16));
    if (in_DX != 0x0 || pvVar1 != NULL)
    {
      pvVar3 = UI_Item_Type4_ctor_with_Params_b936();
      uVar2 = (undefined2)((ulong)pvVar3 >> 0x10);
      pvVar1 = (void *)pvVar3;
      goto LAB_1028_ef8b;
    }
  }
  else if (param_3 == 0xc)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffe4,0xe));
    if (in_DX != 0x0 || pvVar1 != NULL)
    {
      pvVar3 = UI_Item_Type12_ctor_with_Params_bc24();
      uVar2 = (undefined2)((ulong)pvVar3 >> 0x10);
      pvVar1 = (void *)pvVar3;
      goto LAB_1028_ef8b;
    }
  }
  else
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffe4,0xe));
    if (in_DX != 0x0 || pvVar1 != NULL)
    {
      pvVar3 = UI_Item_Base_ctor_with_Params_b22c();
      uVar2 = (undefined2)((ulong)pvVar3 >> 0x10);
      pvVar1 = (void *)pvVar3;
      goto LAB_1028_ef8b;
    }
  }
  pvVar1 = NULL;
  uVar2 = 0x0;
LAB_1028_ef8b:
  pvVar3 = (void *)*(undefined4 *)((int)pvVar1 + 0x4);
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)param_1 + 0x22),(void *)CONCAT22(uVar2,pvVar1)
             ,(uint)(void *)pvVar3,(void *)CONCAT22(in_stack_0000ffe6,in_stack_0000ffe4)
            );
  return pvVar3;
}
