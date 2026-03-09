/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 20/56
 * Original lines (combined): 59948-62718
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
  HWND16 reg_dx;
  uint uVar8;
  char *pcVar9;
  void **reg_bx;
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
      return reg_bx;
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
      local_12 = (void *)CONCAT22(reg_dx,pvVar6);
      ppvVar4 = (void **)WinHelp16((uint32_t)(void *)local_1a,
                                   (int)(void *)local_1a >> 0xf,
                                   (void *)CONCAT22(pvVar6,(void *)0x1),reg_dx);
      return ppvVar4;
    case (void **)0xf:
      local_24e = (void **)Resource_Manager_Get_Resource_by_ID_Logic
                                     (_p_ResourceManager,0x45);
      ppvVar4 = (void **)local_24e;
      win16_EnumChildWindows_Wrapper((HWND16)ppvVar4);
      return ppvVar4;
    }
    UI_Lab_View_Handle_Planet_Selection_Logic_5764(param_1,iVar16);
    return reg_bx;
  }
  if (param_2 == (void **)((char *)s_New_failed_in_Op__Op_>Simulator_1050_0130 + 0x2))
  {
    reg_bx = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (reg_bx == NULL)
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
      uVar8 = reg_dx | (uint)local_22;
      if (uVar8 == 0x0)
      {
        ppvVar4 = NULL;
        uVar8 = 0x0;
      }
      else
      {
        uVar10 = 0x1040;
        ppvVar4 = (void **)UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                                     (local_22,reg_dx,g_ParentHWND,0x31,0x2,0x57b,0x62b);
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
        return reg_bx;
      default:
        return reg_bx;
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
        return reg_bx;
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
    reg_bx = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (reg_bx == NULL)
    {
      return NULL;
    }
    uVar15 = 0xffff;
    uVar10 = 0x0;
    break;
  case (void **)0x1:
    reg_bx = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (reg_bx == NULL)
    {
      return NULL;
    }
    uVar10 = 0x1;
    goto LAB_1020_4ef8;
  case (void **)0x2:
    reg_bx = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (reg_bx == NULL)
    {
      return NULL;
    }
    uVar15 = 0x1;
    uVar10 = 0x0;
    break;
  case (void **)0x3:
    reg_bx = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (reg_bx == NULL)
    {
      return NULL;
    }
    uVar10 = 0xfffb;
    goto LAB_1020_4ef8;
  case (void **)0x4:
    reg_bx = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (reg_bx == NULL)
    {
      return NULL;
    }
    uVar15 = 0xfffb;
    uVar10 = 0x0;
    break;
  case (void **)0x5:
    reg_bx = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (reg_bx == NULL)
    {
      return NULL;
    }
    uVar10 = 0x5;
LAB_1020_4ef8:
    uVar15 = 0x0;
    break;
  case (void **)0x6:
    reg_bx = (void **)UI_View_Get_Child_State_Property_64d4
                               ((void *)*(undefined4 *)((int)puVar5 + 0xf6),0x3);
    if (reg_bx == NULL)
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
    reg_bx = NULL;
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
  return reg_bx;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Dispatches an action or notification for a specific entity type (0x47, 0x6A). Checks
// if planetary state allows the action before triggering virtual functions.

u16 __stdcall16far
UI_Dispatch_Entity_Action_or_Notify_5d56(void *this_ptr,void *entity_ptr)
{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  void *arg1;
  u16 arg2;
  int local_12 [0x2];
  int local_e;
  int local_c;
  int local_a [0x2];
  int iStack_6;
  
  iStack_6 = *(int *)((int)(void *)entity_ptr + 0x2e);
  arg1 = (void *)this_ptr;
  arg2 = (u16)((ulong)this_ptr >> 0x10);
  if (iStack_6 == 0x47)
  {
    UI_View_Get_Planet_Resource_State_Wrapper_61c4
              ((u16)arg1,arg2,(int *)CONCAT22(unaff_SS,&local_c),
               (int *)CONCAT22(unaff_SS,local_a));
    if (local_a[0x0] == 0x0) goto LAB_1020_5d8b;
    if (local_c <= local_a[0x0])
    {
      return 0x1;
    }
  }
  else
  {
    if (iStack_6 != 0x6a)
    {
      return 0x0;
    }
    UI_View_Get_Planet_Resource_State_Wrapper_61c4
              ((u16)arg1,arg2,(int *)CONCAT22(unaff_SS,&local_e),
               (int *)CONCAT22(unaff_SS,local_12));
    if (local_e <= local_12[0x0])
    {
LAB_1020_5d8b:
      puVar1 = (undefined2 *)((int)*(undefined4 *)this_ptr + 0x40);
      (*(code *)*puVar1)();
      return 0x1;
    }
  }
  UI_SubDialog_Factory_Create_and_Show_by_ID_af40
            (_p_UISubDialogTable,*(uint16_t *)((int)arg1 + 0x8),0x9);
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Helper wrapper that retrieves planetary resource state from the main resource manager
// (Resource ID 0x2F).

void __stdcall16far
UI_View_Get_Planet_Resource_State_Wrapper_61c4
          (u16 arg1,u16 arg2,void *out_coords,void *out_state)
{
  undefined2 uVar1;
  long lVar2;
  
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  uVar1 = (undefined2)((ulong)lVar2 >> 0x10);
  Simulator_Global_Get_Entity_Coords_Wrapper_8308
            ((u16)_p_SimulatorGlobalState,(u16)((ulong)_p_SimulatorGlobalState >> 0x10),
             out_coords,out_state,(void *)*(undefined4 *)((int)lVar2 + 0x20));
  *(undefined2 *)out_state = *(undefined2 *)((int)lVar2 + 0x1e);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates the entity name display within the TP popup menu by retrieving the current
// selection from the Ship View.

void __stdcall16far
UI_TP_PopupMenu_Update_Entity_Name_Display_6e52
          (int this_offset,uint16_t segment,int child_id)
{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)UI_Ship_View_Get_Active_Entity_Object_Logic
                             (*(long *)(this_offset + 0xf2));
  pcVar1 = (char *)pcVar3;
  uVar2 = (uint)((ulong)pcVar3 >> 0x10) | (uint)pcVar1;
  if (uVar2 == 0x0)
  {
    pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x5a1);
  }
  else
  {
    UI_Ship_View_Retrieve_Entity_Name_Logic(*(long *)(this_offset + 0xf2));
  }
  UI_Component_Set_Name_and_Notify_Logic_79b4(this_offset,segment,child_id,pcVar1,uVar2)
  ;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for an internal sub-component of the TP popup menu. Manages GDI contexts
// and realizes palettes for Resource ID 4. Sets vtable to 0x754C.

void * __stdcall16far
UI_TP_PopupMenu_Internal_SubComponent_ctor_717e(void *this_ptr,void *parent_ptr)
{
  undefined4 *puVar1;
  void *pvVar2;
  undefined2 *puVar3;
  HDC16 HVar4;
  HPALETTE16 HVar5;
  astruct_359 *uVar5;
  u32 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  long lVar9;
  void *pvVar10;
  
  UI_SubComponent_Base_ctor_init_metrics_7c1a(this_ptr,parent_ptr);
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_359 *)this_ptr;
  uVar5->field18_0x14 = 0x0;
  uVar5->field19_0x18 = parent_ptr;
  uVar5->field20_0x1c = NULL;
  uVar5->field21_0x20 = 0x0;
  *(undefined2 *)this_ptr = 0x754c;
  uVar5->field2_0x2 = 0x1020;
  lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x4);
  uVar8 = (undefined2)((ulong)lVar9 >> 0x10);
  *(int *)&uVar5->field20_0x1c = (int)lVar9;
  *(undefined2 *)((int)&uVar5->field20_0x1c + 0x2) = uVar8;
  puVar3 = (undefined2 *)((int)*uVar5->field20_0x1c + 0x4);
  (*(code *)*puVar3)(0x1010,*(undefined2 *)&uVar5->field20_0x1c,uVar8,0x0,this_ptr);
  HVar4 = GetDC16(uVar5->field3_0x4);
  *(HDC16 *)((u32 *)uVar5->field20_0x1c + 0x5e) = HVar4;
  uVar8 = (undefined2)((ulong)uVar5->field20_0x1c >> 0x10);
  puVar6 = (u32 *)uVar5->field20_0x1c;
  puVar1 = (undefined4 *)puVar6[0x9];
  puVar3 = (undefined2 *)((int)*puVar1 + 0x14);
  pvVar10 = (void *)(*(code *)*puVar3)(0x1538,(undefined4 *)puVar1,
                                       *(undefined2 *)((int)puVar6 + 0x26));
  lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  pvVar2 = (void *)*(undefined4 *)((int)lVar9 + 0xe);
  Palette_Object_Copy_From_Other_Logic((void *)pvVar10,(void *)((ulong)pvVar10 >> 0x10))
  ;
  HVar5 = Palette_Object_Select_And_Realize_Wrapper_Far
                    ((void *)pvVar2,(HDC16)((ulong)pvVar2 >> 0x10));
  uVar5->field21_0x20 = HVar5;
  return this_ptr;
}
