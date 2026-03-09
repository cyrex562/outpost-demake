/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 16/19
 * Original lines (combined): 86394-90839
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
  char *reg_dx;
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
    return reg_dx;
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



// Base constructor for a managed UI list. Initializes capacity, increment step, and
// sets vtable to 0x1624. Pre-allocates the internal buffer for pointers.

u16 * __stdcall16far
UI_Managed_List_Base_ctor_init_11aa(void *this_ptr,void *increment,void *initial_cap)
{
  astruct_308 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_308 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = 0x0;
  uVar1->field4_0x6 = NULL;
  uVar1->field5_0xa = 0x0;
  uVar1->field6_0xe = initial_cap;
  uVar1->field7_0x12 = 0x0;
  uVar1->field8_0x16 = increment;
  uVar1->field9_0x1a = 0x1;
  *(char **)this_ptr = (char *)s_462_bmp_1050_1620 + 0x4;
  uVar1->field2_0x2 = 0x1030;
  if (uVar1->field6_0xe == NULL)
  {
    uVar1->field6_0xe = (void *)0x5;
  }
  if (uVar1->field8_0x16 == NULL)
  {
    uVar1->field8_0x16 = (void *)0x5;
  }
  UI_Managed_List_Realloc_Buffer_Logic_1550(this_ptr);
  *uVar1->field4_0x6 = 0x0;
  return (u16 *)uVar1;
}



// Internal destructor for managed UI lists. Iterates through all non-null items, calls
// their virtual destructors, and frees the internal pointer buffer. Reverts vtables.

void __stdcall16far UI_Managed_List_Base_dtor_Internal_1244(void *this_ptr)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  astruct_307 *uVar3;
  void *pvVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ulong uStack_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_307 *)this_ptr;
  *(char **)this_ptr = (char *)s_462_bmp_1050_1620 + 0x4;
  uVar3->field2_0x2 = 0x1030;
  if (uVar3->field19_0x1a != 0x0)
  {
    uStack_6 = 0x1;
    while( true )
    {
      if (uVar3->field6_0xa <= uStack_6) break;
      iVar4 = (int)uStack_6 * 0x4;
      uVar6 = (undefined2)((ulong)uVar3->field5_0x6 >> 0x10);
      pvVar3 = (void *)uVar3->field5_0x6;
      puVar1 = (undefined4 *)*(int *)((int)pvVar3 + iVar4);
      iVar4 = *(int *)((int)pvVar3 + iVar4 + 0x2);
      if (iVar4 != 0x0 || puVar1 != NULL)
      {
        puVar2 = (undefined2 *)(undefined2 *)*puVar1;
        (*(code *)*puVar2)();
      }
      uStack_6 += 0x1;
    }
  }
  free_if_not_null((void *)uVar3->field5_0x6);
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar3->field2_0x2 = 0x1008;
  return;
}



// Base constructor for UI production items. Initializes core window state and sets
// vtable to 0x2044.

void * __stdcall16far
UI_Production_Item_Base_ctor_init_1cd8(void *this_ptr,void *increment,void *initial_cap)
{
  astruct_294 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_294 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = 0x0;
  uVar1->field4_0x8 = 0x0;
  uVar1->field5_0xc = initial_cap;
  uVar1->field6_0x10 = 0x0;
  uVar1->field7_0x14 = increment;
  *(char **)this_ptr = (char *)s_579_bmp_1050_203f + 0x5;
  uVar1->field2_0x2 = 0x1030;
  return this_ptr;
}



// Internal destructor for base UI production items. Frees its primary internal object
// and reverts vtables.

void __stdcall16far UI_Production_Item_Base_dtor_Internal_1d28(void *this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  *(char **)this_ptr = (char *)s_579_bmp_1050_203f + 0x5;
  *(undefined2 *)(iVar1 + 0x2) = 0x1030;
  free_if_not_null((void *)(void *)*(undefined4 *)(iVar1 + 0x4));
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)(iVar1 + 0x2) = 0x1008;
  return;
}



// Sets the name string for an internal colony object (offset 0x10) by freeing the old
// string and duplicating the new one.

void __stdcall16far Colony_Set_Internal_Object_Name_Logic(u32 this_ptr,char *name)
{
  char *pcVar1;
  undefined2 reg_dx;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)(this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  if (*(long *)(iVar2 + 0x10) != 0x0)
  {
    free_if_not_null((void *)(void *)*(undefined4 *)
                                      ((int)*(undefined4 *)(iVar2 + 0x10) + 0x2));
    pcVar1 = strdup_allocate(name);
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x10) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar2 + 0x10);
    *(undefined2 *)(iVar2 + 0x2) = pcVar1;
    *(undefined2 *)(iVar2 + 0x4) = reg_dx;
  }
  return;
}
