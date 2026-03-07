/*
 * Source: outpost.c
 * Chunk: 53/117
 * Original lines: 59948-61058
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ** __stdcall16far
UI_Lab_View_Execute_Command_Dispatcher_493c(undefined4 *param_1,void **param_2)
{
  undefined2 *puVar1;
  void **entity_id;
  void *pvVar2;
  HCURSOR16 HVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  void *pvVar6;
  u16 uVar7;
  HWND16 in_DX;
  uint uVar8;
  char *pcVar9;
  void **in_BX;
  u16 arg2;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined *puVar11;
  void *pvVar12;
  void **ppvVar13;
  long lVar14;
  undefined2 uVar15;
  int iVar16;
  void *in_stack_0000fcaa;
  undefined4 local_24e;
  undefined4 local_144;
  undefined4 local_140;
  void *local_13c [0x44];
  u16 local_2a;
  undefined4 *local_26;
  uint uStack_24;
  void *local_22;
  uint local_20;
  undefined4 *local_1e;
  uint uStack_1c;
  undefined4 local_1a;
  undefined *local_16;
  undefined4 local_12;
  undefined *local_e;
  undefined *local_c;
  u16 local_a;
  undefined4 local_6;
  
  if (param_2 == (void **)((char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0xa))
  {
    return param_2;
  }
  puVar5 = (undefined4 *)param_1;
  arg2 = (u16)((ulong)param_1 >> 0x10);
  if (param_2 < (char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0xb)
  {
    if (false)
    {
      return (void **)((int)param_2 + -0x69);
    }
    switch((void **)((int)param_2 + -0x69))
    {
    case NULL:
      iVar16 = 0x0;
      break;
    case (void **)0x1:
      iVar16 = 0x1;
      break;
    case (void **)0x2:
      iVar16 = 0x2;
      break;
    case (void **)0x3:
      iVar16 = 0x3;
      break;
    case (void **)0x4:
      iVar16 = 0x4;
      break;
    default:
      return in_BX;
    case (void **)0xe:
      if (*(int *)((int)puVar5 + 0x10a) == 0x0 && *(int *)(puVar5 + 0x42) == 0x0)
      {
        return NULL;
      }
      iVar16 = *(int *)(*(int *)((int)puVar5[0x42] + 0x2e) * 0x2 + 0x42d2);
      local_1a = (void *)CONCAT22(local_1a._2_2_,iVar16);
      if (iVar16 == 0x0)
      {
        return NULL;
      }
      pvVar6 = Resource_Manager_Load_Resource_Object_Logic
                         ((void *)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10));
      local_12 = (void *)CONCAT22(in_DX,pvVar6);
      ppvVar4 = (void **)WinHelp16((uint32_t)(void *)local_1a,
                                   (int)(void *)local_1a >> 0xf,
                                   (void *)CONCAT22(pvVar6,(void *)0x1),in_DX);
      return ppvVar4;
    case (void **)0xf:
      local_24e = (void **)Resource_Manager_Get_Resource_by_ID_Logic
                                     (_p_ResourceManager,0x45);
      ppvVar4 = (void **)local_24e;
      win16_EnumChildWindows_Wrapper((HWND16)ppvVar4);
      return ppvVar4;
    }
    UI_Lab_View_Handle_Planet_Selection_Logic_5764(param_1,iVar16);
    return in_BX;
  }
  if (param_2 == (void **)((char *)s_New_failed_in_Op__Op_>Simulator_1050_0130 + 0x2))
  {
    in_BX = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (in_BX == NULL)
    {
      return NULL;
    }
    uVar10 = 0xffff;
    goto LAB_1020_4ef8;
  }
  if (param_2 < (char *)s_New_failed_in_Op__Op_>Simulator_1050_0130 + 0x3)
  {
    if (param_2 ==
        (void **)((char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x23))
    {
      uVar10 = 0x1000;
      local_22 = allocate_memory(CONCAT22(in_stack_0000fcaa,0xb4));
      uVar8 = in_DX | (uint)local_22;
      if (uVar8 == 0x0)
      {
        ppvVar4 = NULL;
        uVar8 = 0x0;
      }
      else
      {
        uVar10 = 0x1040;
        ppvVar4 = (void **)UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                                     (local_22,in_DX,g_ParentHWND,0x31,0x2,0x57b,0x62b);
      }
      local_144 = (void **)CONCAT22(uVar8,ppvVar4);
      puVar1 = (undefined2 *)((int)(void *)*local_144 + 0x74);
      ppvVar4 = (void **)(*(code *)*puVar1)(uVar10,ppvVar4,uVar8);
      local_140 = (void **)CONCAT22(local_140._2_2_,ppvVar4);
      if ((void **)((int)ppvVar4 + -0x1) != NULL)
      {
        return (void **)((int)ppvVar4 + -0x1);
      }
      Simulator_Command_FillResources_ctor_init_837e
                ((void **)CONCAT22(unaff_SS,local_13c));
LAB_1020_4b6c:
      ppvVar4 = local_13c;
      Simulator_Global_Process_Build_Event_Type4_835a
                (_p_SimulatorGlobalState,(void **)CONCAT22(unaff_SS,ppvVar4));
      return ppvVar4;
    }
    if ((char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x23 < param_2)
    {
      if (param_2 !=
          (void **)((char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x27))
      {
        if (param_2 <= (char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x27)
        {
          if (param_2 ==
              (void **)((char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x24))
          {
            local_144 = (void **)Resource_Manager_Get_Resource_by_ID_Logic
                                           (_p_ResourceManager,0x2f);
            uVar10 = (undefined2)((ulong)local_144 >> 0x10);
            local_140 = ((void **)local_144)[0x9];
            local_20 = *(uint *)((int)(void **)local_144 + 0x26);
            if (local_20 != 0x0 || (void **)local_140 != NULL)
            {
              UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                        (_p_UISubDialogTable,*(uint16_t *)(puVar5 + 0x2),0xf);
              local_13c[0x0] =
                   (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                     (_p_ResourceManager,0x42);
              local_2a = *(u16 *)((int)(void *)local_13c[0x0] + 0xa);
              if (local_2a == 0x0)
              {
                return NULL;
              }
              Simulator_Command_KillColony_ctor_init_e63e
                        ((undefined4 *)CONCAT22(unaff_SS,&local_24e),local_2a);
              ppvVar4 = (void **)&local_24e;
              Simulator_Global_Process_Build_Event_Type4_835a
                        (_p_SimulatorGlobalState,(void **)CONCAT22(unaff_SS,ppvVar4));
              return ppvVar4;
            }
            uVar10 = 0x1000;
            local_22 = allocate_memory(CONCAT22(in_stack_0000fcaa,0xb4));
            uVar8 = local_20 | (uint)local_22;
            if (uVar8 == 0x0)
            {
              puVar5 = NULL;
              uVar8 = 0x0;
            }
            else
            {
              uVar10 = 0x1040;
              puVar5 = (undefined4 *)
                       UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                                 (local_22,local_20,g_ParentHWND,0x30,0x2,0x57b,0x730);
            }
            _local_26 = (undefined4 *)CONCAT22(uVar8,puVar5);
          }
          else
          {
            if (param_2 + -0x41 != NULL)
            {
              return param_2 + -0x41;
            }
            iVar16 = 0x22;
            pvVar12 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                        (_p_ResourceManager,0x3);
            local_24e._2_2_ = (undefined2)((ulong)pvVar12 >> 0x10);
            local_24e._0_2_ = (void **)pvVar12;
            ppvVar13 = (void **)UI_Get_Nested_Collection_Value_Logic
                                          ((long)pvVar12,iVar16);
            local_20 = (uint)((ulong)ppvVar13 >> 0x10);
            local_144 = (void **)CONCAT22(local_144._2_2_,(void **)ppvVar13);
            if ((void **)ppvVar13 != NULL)
            {
              uVar10 = 0x1000;
              local_22 = allocate_memory(CONCAT22(in_stack_0000fcaa,0xb4));
              uVar8 = local_20 | (uint)local_22;
              if (uVar8 == 0x0)
              {
                puVar5 = NULL;
                uVar8 = 0x0;
              }
              else
              {
                uVar10 = 0x1040;
                puVar5 = (undefined4 *)
                         UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                                   (local_22,local_20,g_ParentHWND,0x31,0x2,0x57b,0x62c)
                ;
              }
              local_140 = (void **)CONCAT22(uVar8,puVar5);
              puVar1 = (undefined2 *)((int)*local_140 + 0x74);
              pvVar6 = (void *)(*(code *)*puVar1)(uVar10,puVar5,uVar8);
              local_13c[0x0] = (void *)CONCAT22(local_13c[0x0]._2_2_,pvVar6);
              if ((void **)((int)pvVar6 + -0x1) != NULL)
              {
                return (void **)((int)pvVar6 + -0x1);
              }
              Simulator_Command_KillRebelColony_ctor_init_e79a
                        ((undefined1 *)CONCAT22(unaff_SS,&stack0xfcaa));
              ppvVar4 = (void **)&stack0xfcaa;
              Simulator_Global_Process_Build_Event_Type4_835a
                        (_p_SimulatorGlobalState,(void **)CONCAT22(unaff_SS,ppvVar4));
              media_play_from_resource_id_shorthand
                        ((void *)_p_UIPanelContainer,
                         (int)((ulong)_p_UIPanelContainer >> 0x10));
              return ppvVar4;
            }
            uVar10 = 0x1000;
            local_22 = allocate_memory(CONCAT22(in_stack_0000fcaa,0xb4));
            uVar8 = local_20 | (uint)local_22;
            if (uVar8 == 0x0)
            {
              puVar5 = NULL;
              uVar8 = 0x0;
            }
            else
            {
              uVar10 = 0x1040;
              puVar5 = (undefined4 *)
                       UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                                 (local_22,local_20,g_ParentHWND,0x30,0x2,0x57b,0x731);
            }
          }
          goto LAB_1020_4c5f;
        }
        if (param_2 ==
            (void **)((char *)s_New_failed_in_Op__Op_>Simulator_1050_0110 + 0x1f))
        {
          UI_View_Get_Planet_Resource_State_Wrapper_61c4
                    ((u16)puVar5,arg2,(undefined4 *)CONCAT22(unaff_SS,&local_144),
                     (undefined4 *)CONCAT22(unaff_SS,&local_24e));
          local_24e._0_2_ = (void **)((int)(void **)local_24e + 0x6a);
        }
        else
        {
          if (param_2 != (void **)s_New_failed_in_Op__Op_>Simulator_1050_0130)
          {
            if ((void **)((int)param_2 + -0x131) != NULL)
            {
              return (void **)((int)param_2 + -0x131);
            }
            uVar7 = UI_View_Get_Child_State_Property_64d4
                              ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x2);
            if (uVar7 == 0x0)
            {
              return NULL;
            }
            iVar16 = 0x7;
            goto LAB_1020_49b7;
          }
          UI_View_Get_Planet_Resource_State_Wrapper_61c4
                    ((u16)puVar5,arg2,(undefined4 *)CONCAT22(unaff_SS,&local_144),
                     (undefined4 *)CONCAT22(unaff_SS,&local_24e));
          local_24e._0_2_ = (void **)((int)(void **)local_24e + 0x68);
        }
        local_140 = (void **)CONCAT22(local_140._2_2_,(void **)local_24e);
        if (0x6d < (int)(void **)local_24e)
        {
          return (void **)local_24e;
        }
        if ((int)(void **)local_24e < 0x69)
        {
          return (void **)local_24e;
        }
        puVar1 = (undefined2 *)((int)*param_1 + 0x40);
        ppvVar4 = (void **)(*(code *)*puVar1)();
        return ppvVar4;
      }
      iVar16 = 0x13;
    }
    else
    {
      if (false)
      {
        return param_2 + -0x3c;
      }
      switch(param_2 + -0x3c)
      {
      case NULL:
        UI_Lab_View_Spawn_Child_Window_Logic_536e(param_1,NULL,-0x1,0x1);
        return in_BX;
      default:
        return in_BX;
      case (void **)0x6:
        if (*(int *)((int)puVar5 + 0x116) != 0x0)
        {
          if (param_1 == NULL)
          {
            iVar16 = 0x0;
            uVar7 = 0x0;
          }
          else
          {
            iVar16 = (int)puVar5 + 0xe2;
            uVar7 = arg2;
          }
          UI_Container_Remove_Item_at_Offset_4_Logic
                    ((void *)_p_UIPanelContainer,CONCAT22(uVar7,iVar16));
          *(undefined2 *)((int)puVar5 + 0x116) = 0x0;
        }
        iVar16 = 0x12;
        break;
      case (void **)0x7:
        UI_Specialized_Dialog_Factory_Logic
                  ((int)*(undefined4 *)((int)puVar5 + 0x10e),
                   (int)((ulong)*(undefined4 *)((int)puVar5 + 0x10e) >> 0x10),0x0,0x0,
                   0x9,0x0,0x0);
        return in_BX;
      case (void **)0xb:
        lVar14 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
        local_144._2_2_ = (undefined2)((ulong)lVar14 >> 0x10);
        local_144._0_2_ = (undefined2)lVar14;
        local_140 = (void **)Resource_Manager_Get_Resource_by_ID_Logic
                                       (_p_ResourceManager,0x30);
        uVar10 = (undefined2)((ulong)local_140 >> 0x10);
        ppvVar4 = (void **)String_Wrapper_Object_Get_String_Logic((void *)local_140);
        Resource_Manager_Set_String_with_Context_Validation
                  ((undefined2)local_144,local_144._2_2_,ppvVar4,uVar10);
        return ppvVar4;
      case (void **)0xc:
        ppvVar13 = UI_Lab_View_Process_Turn_and_Events_Logic_55b0(param_1);
        return (void **)ppvVar13;
      case (void **)0x11:
        local_1a = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                     (_p_ResourceManager,0x2f);
        uVar10 = (undefined2)((ulong)local_1a >> 0x10);
        local_16 = (undefined *)*(undefined4 *)((int)(void *)local_1a + 0x24);
        local_20 = *(uint *)((int)(void *)local_1a + 0x26);
        if (local_20 == 0x0 && (int)local_16 == 0x0)
        {
          uVar10 = 0x1000;
          local_22 = allocate_memory(CONCAT22(in_stack_0000fcaa,0xb4));
          uVar8 = local_20 | (uint)local_22;
          if (uVar8 == 0x0)
          {
            puVar5 = NULL;
            uVar8 = 0x0;
          }
          else
          {
            uVar10 = 0x1040;
            puVar5 = (undefined4 *)
                     UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                               (local_22,local_20,g_ParentHWND,0x30,0x2,0x57b,0x730);
          }
          _local_1e = (undefined4 *)CONCAT22(uVar8,puVar5);
LAB_1020_4c5f:
          puVar1 = (undefined2 *)((int)*puVar5 + 0x74);
          ppvVar4 = (void **)(*(code *)*puVar1)(uVar10,puVar5,uVar8);
          return ppvVar4;
        }
        UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                  (_p_UISubDialogTable,*(uint16_t *)(puVar5 + 0x2),0xe);
        local_12 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                     (_p_ResourceManager,0x43);
        uVar10 = (undefined2)((ulong)local_12 >> 0x10);
        iVar16 = (int)local_12;
        local_e = (undefined *)*(u16 *)(iVar16 + 0xa);
        local_a = *(u16 *)(iVar16 + 0xc);
        ppvVar4 = (void **)*(u16 *)(iVar16 + 0xe);
        local_6 = (void **)CONCAT22(local_6._2_2_,ppvVar4);
        if (*(int *)(iVar16 + 0x10) != 0x0)
        {
          return ppvVar4;
        }
        Simulator_Command_ForceMorale_ctor_init_84ca
                  ((void **)CONCAT22(unaff_SS,local_13c),(u32)local_16,(u16)ppvVar4,
                   local_a,(u16)local_e);
        goto LAB_1020_4b6c;
      }
    }
LAB_1020_49b7:
    ppvVar13 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                         (_p_UISubDialogTable,*(uint16_t *)(puVar5 + 0x2),iVar16);
    return (void **)ppvVar13;
  }
  if (param_2 == (void **)((char *)s_OpWnd__getKid_>Unknown_target_mo_1050_01a3 + 0x25))
  {
    ppvVar13 = SendMessage16(0x0,0x0,0x72,
                             CONCAT22(in_stack_0000fcaa,
                                      *(undefined2 *)
                                       ((int)*(undefined4 *)((int)puVar5 + 0x102) + 0x8)
                                     ));
    return (void **)ppvVar13;
  }
  if ((char *)s_OpWnd__getKid_>Unknown_target_mo_1050_01a3 + 0x25 < param_2)
  {
    if (param_2 == (void **)s_Unsupported_FileStructType_in_Op_1050_01ca)
    {
      local_144 = (void **)Resource_Manager_Get_Resource_by_ID_Logic
                                     (_p_ResourceManager,0x3);
      ppvVar4 = (void **)local_144;
      pcVar9 = Resource_Manager_Get_String_with_Context_Validation(local_144);
      local_140 = (void **)CONCAT22(pcVar9,ppvVar4);
      if (pcVar9 == NULL && ppvVar4 == NULL)
      {
        return ppvVar4;
      }
      local_13c[0x0] =
           (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x30);
      String_Wrapper_Object_Set_String_Logic
                ((void *)local_13c[0x0],(char *)((ulong)local_13c[0x0] >> 0x10));
      iVar16 = 0x3;
    }
    else
    {
      pvVar6 = (void *)_p_SimulatorGlobalState;
      uVar7 = (u16)((ulong)_p_SimulatorGlobalState >> 0x10);
      if (param_2 == (void **)((char *)s_SOLDefaultWindowClass_1050_01fe + 0x2))
      {
        uVar10 = (undefined2)((ulong)puVar5[0x42] >> 0x10);
        iVar16 = (int)puVar5[0x42];
        pvVar12 = (void *)*(undefined4 *)(iVar16 + 0x42);
        local_1a._3_1_ = (byte)((ulong)pvVar12 >> 0x18);
        if (local_1a._3_1_ != 0x5)
        {
          return (void **)(uint)local_1a._3_1_;
        }
        local_1a._0_2_ = (void *)pvVar12;
        pvVar2 = (void *)CONCAT22(*(undefined2 *)(iVar16 + 0x44),(void *)local_1a);
        local_1a = pvVar12;
        puVar11 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                            ((u16)pvVar6,uVar7,pvVar2);
        PTR_DAT_1050_0000_1050_5f0e = (undefined *)((ulong)puVar11 >> 0x10);
        PTR_DAT_1050_0000_1050_5f0c = (undefined *)puVar11;
        iVar16 = 0x25;
        local_e = PTR_DAT_1050_0000_1050_5f0c;
        local_c = PTR_DAT_1050_0000_1050_5f0e;
      }
      else if (param_2 == (void **)((char *)s_SOLDefaultWindowClass_1050_01fe + 0x3))
      {
        uVar10 = (undefined2)((ulong)puVar5[0x42] >> 0x10);
        iVar16 = (int)puVar5[0x42];
        pvVar12 = (void *)*(undefined4 *)(iVar16 + 0x42);
        local_1a._3_1_ = (byte)((ulong)pvVar12 >> 0x18);
        if (local_1a._3_1_ != 0x5)
        {
          return (void **)(uint)local_1a._3_1_;
        }
        local_1a._0_2_ = (void *)pvVar12;
        pvVar2 = (void *)CONCAT22(*(undefined2 *)(iVar16 + 0x44),(void *)local_1a);
        local_1a = pvVar12;
        puVar11 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                            ((u16)pvVar6,uVar7,pvVar2);
        PTR_DAT_1050_0000_1050_5f18 = (undefined *)((ulong)puVar11 >> 0x10);
        PTR_DAT_1050_0000_1050_5f16 = (undefined *)puVar11;
        iVar16 = 0x26;
        local_e = PTR_DAT_1050_0000_1050_5f16;
        local_c = PTR_DAT_1050_0000_1050_5f18;
      }
      else
      {
        if (param_2 != (void **)((char *)s_SOLDefaultWindowClass_1050_01fe + 0x4))
        {
          if ((void **)((int)param_2 + -0x203) != NULL)
          {
            return (void **)((int)param_2 + -0x203);
          }
          if (*(int *)(puVar5 + 0x3d) != 0x1)
          {
            return NULL;
          }
          HVar3 = SetCursor16(*(HCURSOR16 *)((int)puVar5 + 0xf2));
          *(HCURSOR16 *)((int)puVar5 + 0xee) = HVar3;
          *(undefined2 *)(puVar5 + 0x3d) = 0x3;
          ppvVar4 = (void **)SetCapture16(*(HWND16 *)(puVar5 + 0x2));
          return ppvVar4;
        }
        uVar10 = (undefined2)((ulong)puVar5[0x42] >> 0x10);
        iVar16 = (int)puVar5[0x42];
        ppvVar13 = (void **)*(undefined4 *)(iVar16 + 0x42);
        local_6._3_1_ = (byte)((ulong)ppvVar13 >> 0x18);
        if (local_6._3_1_ != 0x5)
        {
          return (void **)(uint)local_6._3_1_;
        }
        local_6._0_2_ = (void **)ppvVar13;
        entity_id = (void **)CONCAT22(*(undefined2 *)(iVar16 + 0x44),(void **)local_6);
        local_6 = ppvVar13;
        local_16 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                             ((u16)pvVar6,uVar7,entity_id);
        PTR_DAT_1050_0000_1050_5a6a = (undefined *)((ulong)local_16 >> 0x10);
        PTR_DAT_1050_0000_1050_5a68 = (undefined *)local_16;
        iVar16 = 0x27;
      }
    }
    goto LAB_1020_49b7;
  }
  if (false)
  {
    return (void **)((int)param_2 + -0x133);
  }
  switch((void **)((int)param_2 + -0x133))
  {
  case NULL:
    in_BX = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (in_BX == NULL)
    {
      return NULL;
    }
    uVar15 = 0xffff;
    uVar10 = 0x0;
    break;
  case (void **)0x1:
    in_BX = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (in_BX == NULL)
    {
      return NULL;
    }
    uVar10 = 0x1;
    goto LAB_1020_4ef8;
  case (void **)0x2:
    in_BX = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (in_BX == NULL)
    {
      return NULL;
    }
    uVar15 = 0x1;
    uVar10 = 0x0;
    break;
  case (void **)0x3:
    in_BX = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (in_BX == NULL)
    {
      return NULL;
    }
    uVar10 = 0xfffb;
    goto LAB_1020_4ef8;
  case (void **)0x4:
    in_BX = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (in_BX == NULL)
    {
      return NULL;
    }
    uVar15 = 0xfffb;
    uVar10 = 0x0;
    break;
  case (void **)0x5:
    in_BX = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (in_BX == NULL)
    {
      return NULL;
    }
    uVar10 = 0x5;
LAB_1020_4ef8:
    uVar15 = 0x0;
    break;
  case (void **)0x6:
    in_BX = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (in_BX == NULL)
    {
      return NULL;
    }
    uVar15 = 0x5;
    uVar10 = 0x0;
    break;
  default:
    goto switchD_1020_50dc_caseD_5;
  case (void **)0x9:
    uVar7 = UI_View_Get_Child_State_Property_64d4
                      ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x2);
    in_BX = NULL;
    if (uVar7 != 0x0)
    {
      iVar16 = 0x1a;
      goto LAB_1020_49b7;
    }
    goto switchD_1020_50dc_caseD_5;
  }
  UI_VrMode_PopupMenu_Update_Viewport_Offset_2a94
            ((void *)*(undefined4 *)((int)puVar5 + 0xce),CONCAT22(uVar10,uVar15));
switchD_1020_50dc_caseD_5:
  return in_BX;
}



void __stdcall16far
UI_View_Handle_MouseDown_Dispatcher_51c6(void *param_1,u16 param_2,u32 param_3)
{
  int iVar1;
  undefined2 *puVar2;
  u16 uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = *(int *)((int)param_1 + 0xf4);
  uVar3 = (u16)param_3;
  if (iVar1 == 0x2)
  {
    UI_View_Handle_Complex_MouseDown_Interaction_5e76(param_1,param_2,uVar3);
    return;
  }
  if (iVar1 != 0x3)
  {
    uVar3 = UI_View_Dispatch_MouseDown_Actions_58ce
                      (param_1,param_2,uVar3,(byte)(param_3 >> 0x10));
    if (uVar3 == 0x0)
    {
      puVar2 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x4) + 0x5c);
      (*(code *)*puVar2)();
    }
    return;
  }
  UI_View_Handle_MouseUp_Reset_State_5de8(param_1,param_2,uVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes MouseUp or capture release events for the Lab View. Restores cursors and
// releases GDI capture. Conditional logic handles building manager object release.

void __stdcall16far
UI_Lab_View_Handle_MouseUp_or_Release_Capture_522e(void *this_ptr,u16 x,u16 y)
{
  undefined2 *puVar1;
  u16 uVar2;
  astruct_367 *uVar3;
  undefined2 uVar4;
  long context;
  long selection_ref;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_367 *)this_ptr;
  if (uVar3->field240_0xf4 == 0x2)
  {
    SetCursor16(uVar3->field235_0xee);
    uVar3->field235_0xee = 0x0;
    uVar3->field240_0xf4 = 0x1;
    uVar3->field263_0x10c = 0x0;
    ReleaseCapture16();
    return;
  }
  if (uVar3->field240_0xf4 == 0x3)
  {
    SetCursor16(uVar3->field235_0xee);
    uVar3->field235_0xee = 0x0;
    uVar3->field240_0xf4 = 0x1;
    uVar3->field263_0x10c = 0x0;
    ReleaseCapture16();
    selection_ref = 0x0;
    context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x47);
    UI_Building_Manager_Release_Active_Object(context,selection_ref);
    return;
  }
  uVar2 = UI_View_Handle_RightClick_PopupMenu_5bf2(this_ptr,x,y);
  if (uVar2 == 0x0)
  {
    puVar1 = (undefined2 *)((int)*uVar3->field4_0x4 + 0x60);
    (*(code *)*puVar1)();
  }
  return;
}



// Internal destructor for the Lab View component. Recursively cleans up internal bitmap
// objects and removes the component from UI containers.

void __stdcall16far UI_Lab_View_dtor_Cleanup_SubComponents_52de(void *this_ptr)
{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  astruct_366 *iVar4;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar4 = (astruct_366 *)this_ptr;
  if (iVar4->field247_0xf8 != 0x0 || iVar4->field246_0xf6 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*iVar4->field246_0xf6;
    (*(code *)*puVar1)();
  }
  (&iVar4->field246_0xf6)[0x0] = NULL;
  (&iVar4->field246_0xf6)[0x1] = NULL;
  if (iVar4->field248_0xfa != 0x0)
  {
    if (this_ptr == NULL)
    {
      puVar2 = NULL;
      uVar3 = 0x0;
    }
    else
    {
      puVar2 = &iVar4->field_0xe2;
      uVar3 = uVar4;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)iVar4->field248_0xfa,(long)CONCAT22(uVar3,puVar2));
  }
  UI_Window_Destroy_Logic(iVar4);
  if (iVar4->field248_0xfa != 0x0)
  {
    Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)iVar4->field248_0xfa);
  }
  iVar4->field248_0xfa = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Spawns specialized child windows or popup menus (like VrMode or child types 1/2)
// within the Lab View context. Registers event handlers and brings windows to top.

void __stdcall16far
UI_Lab_View_Spawn_Child_Window_Logic_536e
          (void *this_ptr,void *parent_ptr,int arg1,int type)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int in_DX;
  u32 *puVar6;
  int iVar7;
  undefined2 uVar8;
  undefined4 *puVar9;
  void *pvVar10;
  undefined2 unaff_SI;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined4 *this_ptr_00;
  void *pvVar13;
  long lVar14;
  undefined2 uVar15;
  
  pvVar10 = (void *)this_ptr;
  uVar12 = (undefined2)((ulong)this_ptr >> 0x10);
  if (type == 0x1)
  {
    if (*(long *)((int)pvVar10 + 0xfe) == 0x0)
    {
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0xfc));
      if (in_DX == 0x0 && pvVar5 == NULL)
      {
        *(undefined4 *)((int)pvVar10 + 0xfe) = 0x0;
      }
      else
      {
        *(int *)((int)pvVar10 + 0xcc) = *(int *)((int)pvVar10 + 0xcc) + 0x1;
        puVar6 = UI_TP_PopupMenu_ctor_init_logic_67ce
                           (pvVar5,in_DX,*(undefined2 *)((int)pvVar10 + 0xcc),this_ptr);
        *(undefined2 *)((int)pvVar10 + 0xfe) = pvVar5;
        *(undefined2 *)((int)pvVar10 + 0x100) = puVar6;
      }
      UI_Window_Register_Child_Event_Handler
                (this_ptr,0x0,(int)*(undefined4 *)((int)pvVar10 + 0xfe),
                 (int)((ulong)*(undefined4 *)((int)pvVar10 + 0xfe) >> 0x10));
      uVar8 = (undefined2)*(undefined4 *)((int)pvVar10 + 0xfe);
      uVar15 = (undefined2)((ulong)*(undefined4 *)((int)pvVar10 + 0xfe) >> 0x10);
      uVar11 = (undefined2)((ulong)*(undefined4 *)((int)pvVar10 + 0xfe) >> 0x10);
      puVar9 = (undefined4 *)(undefined4 *)*(undefined4 *)((int)pvVar10 + 0xfe);
      goto LAB_1020_53f3;
    }
  }
  else
  {
    if (type == 0x2)
    {
      iVar3 = arg1 + 0xc;
      lVar14 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,iVar3);
      iVar7 = (int)((ulong)lVar14 >> 0x10);
      iVar4 = UI_Main_View_Controller_Get_Value_at_Offset_5E_Logic(lVar14);
      if (iVar4 == 0x0)
      {
        *(int *)((int)pvVar10 + 0xcc) = *(int *)((int)pvVar10 + 0xcc) + 0x1;
        uVar11 = *(undefined2 *)((int)pvVar10 + 0xcc);
        pvVar5 = allocate_memory(CONCAT22((void *)parent_ptr,0xfe));
        if (iVar7 == 0x0 && pvVar5 == NULL)
        {
          this_ptr_00 = NULL;
        }
        else
        {
          this_ptr_00 = UI_VrMode_PopupMenu_ctor_init_logic_289a
                                  (pvVar5,iVar7,uVar11,this_ptr);
        }
        uVar8 = (undefined2)((ulong)this_ptr_00 >> 0x10);
        puVar9 = (undefined4 *)this_ptr_00;
        UI_VrMode_PopupMenu_Set_Active_Entity_Logic_294a(this_ptr_00,parent_ptr,iVar3);
        uVar2 = *this_ptr_00;
        puVar1 = (undefined2 *)((int)uVar2 + 0x8);
        (*(code *)*puVar1)(0x1000,puVar9,uVar8);
        UI_Call_Virtual_Refresh_maybe(puVar9);
        UI_Window_Register_Child_Event_Handler(this_ptr,uVar11,puVar9,uVar8);
        puVar1 = (undefined2 *)((int)uVar2 + 0xc);
        (*(code *)*puVar1)(0x1008,puVar9,uVar8,0x1);
      }
      else
      {
        pvVar13 = (void *)UI_Main_View_Controller_Get_FarPtr_at_Offset_80_Logic(lVar14);
        UI_Call_Virtual_Refresh_maybe((void *)pvVar13);
      }
      UI_Main_View_Controller_Update_Viewport_Offset_Wrapper_1(lVar14,0x0,0x0);
      BringWindowToTop16(*(HWND16 *)((int)*(undefined4 *)((int)pvVar10 + 0xce) + 0x8));
      iVar4 = 0x1;
      pvVar13 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x2b);
      iVar3 = (int)((ulong)pvVar13 >> 0x10);
      UI_System_Set_State_Flag_and_Notify((void *)pvVar13,iVar3,iVar4);
      UI_System_Set_State_Flag_and_Notify((void *)pvVar13,iVar3,0x1);
      return;
    }
    if ((type == 0x3) && (*(long *)((int)pvVar10 + 0x102) == 0x0))
    {
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0xfc));
      if (in_DX == 0x0 && pvVar5 == NULL)
      {
        *(undefined4 *)((int)pvVar10 + 0x102) = 0x0;
      }
      else
      {
        *(int *)((int)pvVar10 + 0xcc) = *(int *)((int)pvVar10 + 0xcc) + 0x1;
        lVar14 = UI_PC_PopupMenu_ctor_init
                           (pvVar5,in_DX,*(undefined2 *)((int)pvVar10 + 0xcc),this_ptr);
        *(undefined2 *)((int)pvVar10 + 0x102) = (int)lVar14;
        *(undefined2 *)((int)pvVar10 + 0x104) = (int)((ulong)lVar14 >> 0x10);
      }
      UI_Window_Register_Child_Event_Handler
                (this_ptr,0x0,(int)*(undefined4 *)((int)pvVar10 + 0x102),
                 (int)((ulong)*(undefined4 *)((int)pvVar10 + 0x102) >> 0x10));
      uVar8 = (undefined2)*(undefined4 *)((int)pvVar10 + 0x102);
      uVar15 = (undefined2)((ulong)*(undefined4 *)((int)pvVar10 + 0x102) >> 0x10);
      uVar11 = (undefined2)((ulong)*(undefined4 *)((int)pvVar10 + 0x102) >> 0x10);
      puVar9 = (undefined4 *)(undefined4 *)*(undefined4 *)((int)pvVar10 + 0x102);
LAB_1020_53f3:
      puVar1 = (undefined2 *)((int)*puVar9 + 0xc);
      (*(code *)*puVar1)(0x1008,uVar8,uVar15,0x5);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles game turn processing and event messaging within the Lab View. Polls the Turn
// Manager, displays event dialogs, and posts notification messages (0xFC, 0xB0, 0x97)
// to the main UI.

LRESULT __stdcall16far UI_Lab_View_Process_Turn_and_Events_Logic_55b0(void *this_ptr)
{
  undefined2 *puVar1;
  char *pcVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int *unaff_SS;
  char *pcVar10;
  LRESULT pvVar11;
  undefined2 in_stack_0000fed8;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  ushort local_114;
  undefined1 local_112 [0x2];
  int iStack_110;
  int local_10e;
  undefined4 local_10c [0x40];
  void *pvStack_c;
  int iStack_8;
  long lStack_6;
  
  lStack_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  iStack_8 = *(int *)((int)lStack_6 + 0x20);
  pvStack_c = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37)
  ;
  uVar5 = (uint)((ulong)pvStack_c >> 0x10);
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_10c,0x100),
             (long)CONCAT22(0x59c,unaff_SS));
  zero_init_u32_ptr(local_112);
  pcVar2 = Turn_Manager_Process_Next_Event_Message_with_Lazy_Ptr_Update
                     ((void *)pvStack_c,(int *)((ulong)pvStack_c >> 0x10),
                      (long *)&local_114,unaff_SS);
  uStack_118 = (char *)CONCAT22(uVar5,pcVar2);
  uVar6 = uVar5 | (uint)pcVar2;
  uVar8 = (undefined2)((ulong)this_ptr >> 0x10);
  pcVar10 = (char *)CONCAT22(uVar6,pcVar2);
  if ((uVar6 != 0x0) && (pcVar10 = (char *)CONCAT22(uVar6,pcVar2), *uStack_118 != '\0'))
  {
    uVar9 = 0x1000;
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000fed8,0xb4));
    uStack_120 = (void *)CONCAT22(uVar6,pvVar3);
    if (uVar6 == 0x0 && pvVar3 == NULL)
    {
      puVar4 = NULL;
      uVar7 = 0x0;
    }
    else
    {
      puVar4 = local_10c;
      uVar9 = 0x1040;
      uVar7 = UI_SubDialog_Type8DDC_ctor_init_8478
                        (uStack_120,0x0,puVar4,unaff_SS,pcVar2,uVar5,
                         *(undefined2 *)((int)(void *)this_ptr + 0x8));
    }
    uStack_11c = (undefined4 *)CONCAT22(uVar7,puVar4);
    if (iStack_110 == 0x0)
    {
      puVar1 = (undefined2 *)((int)*uStack_11c + 0x74);
      pcVar10 = (char *)(*(code *)*puVar1)(uVar9,puVar4,uVar7);
    }
    else
    {
      puVar1 = (undefined2 *)((int)*uStack_11c + 0x6c);
      pcVar10 = (char *)(*(code *)*puVar1)(uVar9,puVar4,uVar7,local_112);
    }
    uVar9 = (undefined2)((ulong)pcVar10 >> 0x10);
    if ((iStack_8 == 0x0) || (local_114 == 0x0))
    {
      pcVar2 = (char *)PostMessage16(0x0,0x0,0xfc,
                                     (long)CONCAT22(in_stack_0000fed8,g_ParentHWND));
      pcVar10 = (char *)CONCAT22(uVar9,pcVar2);
    }
  }
  if ((iStack_8 != 0x0) && (local_114 != 0x0))
  {
    pvVar11 = SendMessage16(0x0,0x0,local_114,
                            (long)CONCAT22(in_stack_0000fed8,g_ParentHWND));
    *(undefined2 *)((int)(void *)this_ptr + 0x112) = 0x1;
    return pvVar11;
  }
  if (local_10e == 0x6)
  {
    PostMessage16(0x0,0x0,0xb0,(long)CONCAT22(in_stack_0000fed8,g_ParentHWND));
    pcVar10 = (char *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    ((char *)pcVar10 + 0x20)[0x0] = '\x01';
    ((char *)pcVar10 + 0x20)[0x1] = '\0';
  }
  if (local_10e == 0x15)
  {
    PostMessage16(0x0,0x0,0x97,(long)CONCAT22(in_stack_0000fed8,g_ParentHWND));
    pcVar10 = (char *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    ((char *)pcVar10 + 0x20)[0x0] = '\x01';
    ((char *)pcVar10 + 0x20)[0x1] = '\0';
  }
  return pcVar10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles planet selection logic within the Lab View. Updates component state, changes
// cursors, and notifies child windows of selection changes.

void __stdcall16far
UI_Lab_View_Handle_Planet_Selection_Logic_5764(void *this_ptr,int planet_index)
{
  HCURSOR16 HVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 in_stack_0000ffe6;
  int local_e;
  undefined1 local_c [0x2];
  void *pvStack_a;
  long lStack_6;
  
  lStack_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  uVar3 = (undefined2)((ulong)lStack_6 >> 0x10);
  pvStack_a = (void *)*(undefined4 *)((int)lStack_6 + 0x20);
  iVar2 = *(int *)((int)lStack_6 + 0x22);
  if (iVar2 != 0x0 || (void *)pvStack_a != NULL)
  {
    Simulator_Global_Get_Entity_Coords_Wrapper_8308
              ((u16)_p_SimulatorGlobalState,
               (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
               (int *)CONCAT22(unaff_SS,&local_e),
               (undefined1 *)CONCAT22(unaff_SS,local_c),
               (void *)CONCAT22(iVar2,(void *)pvStack_a));
    if (planet_index <= local_e)
    {
      uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
      iVar2 = (int)this_ptr;
      if (*(int *)(iVar2 + 0xf4) != 0x1)
      {
        SetCursor16(*(HCURSOR16 *)(iVar2 + 0xee));
        *(undefined2 *)(iVar2 + 0xee) = 0x0;
        *(undefined2 *)(iVar2 + 0xf4) = 0x1;
        *(undefined2 *)(iVar2 + 0x10c) = 0x0;
        ReleaseCapture16();
      }
      HVar1 = LoadCursor16((void *)0x7f02,0x0);
      HVar1 = SetCursor16(HVar1);
      UI_Component_Set_Value_at_Offset_1E_and_Notify_Logic
                (lStack_6,CONCAT22(in_stack_0000ffe6,planet_index));
      *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0xf6) + 0x10) = 0x1;
      if (*(long *)(iVar2 + 0xfe) != 0x0)
      {
        UI_View_Trigger_SubComponent_Update_v1_68de
                  ((void *)*(undefined4 *)(iVar2 + 0xfe));
        PostMessage16(0x0,0x0,0xeb,
                      CONCAT22(in_stack_0000ffe6,
                               *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0xfe) + 0x8)
                              ));
      }
      SetCursor16(HVar1);
    }
  }
  return;
}



// Performs a hit test against points defined within the currently selected construction
// bitmap. Iterates through the data history object to find a match for the provided
// point.

long __stdcall16far
UI_HitTest_Entities_in_Selected_Construction_Bitmap_5856
          (void *this_ptr,void *mouse_coords)
{
  BOOL16 BVar1;
  void *pvVar2;
  long lVar3;
  undefined4 uStack_a;
  
  pvVar2 = (void *)UI_Construction_Manager_Get_Selected_Structure_Bitmap_Logic
                             (*(long *)((int)this_ptr + 0xfa));
  if (pvVar2 != NULL)
  {
    uStack_a = 0x0;
    while( true )
    {
      if (*(ulong *)((int)(void *)pvVar2 + 0xa) <= uStack_a) break;
      lVar3 = Data_History_Object_Get_Point_At_Index((void *)pvVar2,uStack_a);
      if (lVar3 != 0x0)
      {
        BVar1 = PtInRect(*(POINT16 *)mouse_coords,
                         (void *)CONCAT22((int)((ulong)lVar3 >> 0x10),
                                          (void *)((int)lVar3 + 0x14)));
        if (BVar1 != 0x0)
        {
          return lVar3;
        }
      }
      uStack_a += 0x1;
    }
  }
  return 0x0;
}
