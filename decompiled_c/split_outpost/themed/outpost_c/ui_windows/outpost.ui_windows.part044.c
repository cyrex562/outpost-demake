/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 44/54
 * Original lines (combined): 122198-123327
 * Boundaries: top-level declarations/definitions only
 */




// Resets all checkboxes in the A832 dialog to their default 'checked' state (1).

void __stdcall16far UI_SubDialog_TypeA832_Reset_to_Defaults_1b8a(undefined4 param_1)
{
  uint16_t check;
  uint16_t check_00;
  uint16_t check_01;
  uint16_t check_02;
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  check = get_const_1_stub_1010_60b4();
  check_00 = get_const_1_stub_1010_60c6();
  check_01 = get_const_1_stub_1010_60c0();
  check_02 = get_const_1_stub_1010_60ba();
  CheckDlgButton16(check,0xfdb,*(HWND16 *)(iVar1 + 0x6));
  CheckDlgButton16(check_01,0xfdd,*(HWND16 *)(iVar1 + 0x6));
  CheckDlgButton16(check_02,0xfde,*(HWND16 *)(iVar1 + 0x6));
  CheckDlgButton16(check_00,0xfdc,*(HWND16 *)(iVar1 + 0x6));
  return;
}



void * __stdcall16far
UI_SubDialog_Type1C48_dtor_Scalar_Deleting_1c22(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_Type1C48_dtor_Internal_1876(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x1EEE (vtable 0x1EEE). Links to Resource 2 and
// Resource 0x37. Base dialog ID 0xE8. Used for sequence/timed event configuration.

ushort __stdcall16far
UI_SubDialog_Type1EEE_ctor_init_1cb4
          (void *this_ptr,ulong dlg_template_id,ushort arg3,ushort arg4,
          ushort parent_hwnd)
{
  astruct_72 *uVar1;
  long lVar1;
  undefined2 in_stack_00000006;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,dlg_template_id,0xe8,parent_hwnd);
  *(undefined4 *)((int)this_ptr + 0x8e) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x92) = 0x0;
  *_this_ptr = (char *)s_526_bmp_1050_1ee7 + 0x7;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  *(undefined2 *)((int)this_ptr + 0x8e) = (int)lVar1;
  *(undefined2 *)((int)this_ptr + 0x90) = (int)((ulong)lVar1 >> 0x10);
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
  *(undefined2 *)((int)this_ptr + 0x92) = (int)lVar1;
  *(undefined2 *)((int)this_ptr + 0x94) = (int)((ulong)lVar1 >> 0x10);
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type1EEE_dtor_Internal_1d24(void *this_ptr)
{
  void *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = (char *)s_526_bmp_1050_1ee7 + 0x7;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



void __stdcall16far UI_SubDialog_Type1EEE_Show_Logic_1d50(void *this_ptr)
{
  int in_stack_00000006;
  
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  UI_Window_Move_or_Center_826c(this_ptr,in_stack_00000006,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  return;
}



// Commit logic for the 1EEE sub-dialog. If accepted, reads checkboxes 0xE1-0xE7 and
// registers corresponding timed resource IDs (0x1D5-0x1E2) in the Turn Manager.

void __stdcall16far
UI_SubDialog_Type1EEE_On_Commit_Logic_1d7a(void *this_ptr,int commit)
{
  uint16_t uVar1;
  astruct_71 *uVar2;
  int in_stack_00000008;
  
  if ((in_stack_00000008 != 0x0) &&
     (*(int *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x72) != 0x0))
  {
    uVar1 = IsDlgButtonChecked16(0xe1,*(HWND16 *)((int)this_ptr + 0x6));
    if (uVar1 != 0x0)
    {
      Turn_Manager_Register_New_Timed_Resource_Logic
                ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x92),
                 (int)((ulong)*(undefined4 *)((int)this_ptr + 0x92) >> 0x10));
    }
    uVar1 = IsDlgButtonChecked16(0xe2,*(HWND16 *)((int)this_ptr + 0x6));
    if (uVar1 != 0x0)
    {
      Turn_Manager_Register_New_Timed_Resource_Logic
                ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x92),
                 (int)((ulong)*(undefined4 *)((int)this_ptr + 0x92) >> 0x10));
    }
    uVar1 = IsDlgButtonChecked16(0xe3,*(HWND16 *)((int)this_ptr + 0x6));
    if (uVar1 != 0x0)
    {
      Turn_Manager_Register_New_Timed_Resource_Logic
                ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x92),
                 (int)((ulong)*(undefined4 *)((int)this_ptr + 0x92) >> 0x10));
    }
    uVar1 = IsDlgButtonChecked16(0xe5,*(HWND16 *)((int)this_ptr + 0x6));
    if (uVar1 != 0x0)
    {
      Turn_Manager_Register_New_Timed_Resource_Logic
                ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x92),
                 (int)((ulong)*(undefined4 *)((int)this_ptr + 0x92) >> 0x10));
    }
    uVar1 = IsDlgButtonChecked16(0xe6,*(HWND16 *)((int)this_ptr + 0x6));
    if (uVar1 != 0x0)
    {
      Turn_Manager_Register_New_Timed_Resource_Logic
                ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x92),
                 (int)((ulong)*(undefined4 *)((int)this_ptr + 0x92) >> 0x10));
    }
    uVar1 = IsDlgButtonChecked16(0xe7,*(HWND16 *)((int)this_ptr + 0x6));
    if (uVar1 != 0x0)
    {
      Turn_Manager_Register_New_Timed_Resource_Logic
                ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x92),
                 (int)((ulong)*(undefined4 *)((int)this_ptr + 0x92) >> 0x10));
    }
    return;
  }
  DestroyWindow16(*(HWND16 *)((int)this_ptr + 0x6));
  return;
}



// WARNING: Variable defined which should be unmapped: uStack_6
// Command handler for dialog Type 0x1EEE. On command 0xE4, triggers the next sequence
// event in the Turn Manager.

ulong __stdcall16far
UI_SubDialog_Type1EEE_On_Command_1e80
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  u16 in_DX;
  u16 uStack_6;
  u16 uStack_4;
  
  uStack_6 = 0x0;
  uStack_4 = 0x0;
  if (param_4._2_2_ == 0xe4)
  {
    Turn_Manager_Trigger_Next_Sequence_Event_Logic_maybe
              ((void *)(void *)*(undefined4 *)((int)param_1 + 0x92));
  }
  else
  {
    uStack_6 = UI_SubDialog_Base_On_Command_Logic_7b3c
                         (param_1,param_2,param_3,(ushort)param_4,(ulong)param_4._2_2_);
    uStack_4 = in_DX;
  }
  return CONCAT22(uStack_4,uStack_6);
}



void * __stdcall16far
UI_SubDialog_Type1EEE_dtor_Scalar_Deleting_1ec8(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_Type1EEE_dtor_Internal_1d24(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type237E_dtor_Internal_205e(void *this_ptr)
{
  astruct_69 *uVar2;
  undefined2 in_stack_00000006;
  void *puVar1;
  
  *_this_ptr = (char *)s_alarm_m_1050_2377 + 0x7;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  if (*(int *)((int)this_ptr + 0x90) != 0x0 ||
      (undefined4 *)*(int *)((int)this_ptr + 0x8e) != NULL)
  {
    puVar1 = (void *)(void *)*(undefined4 *)*(int *)((int)this_ptr + 0x8e);
    (**(code **)puVar1)();
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ptr + 0xa2));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ptr + 0xa6));
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((undefined *)CONCAT22((int)_p_UISubDialogTable,(undefined *)&DAT_1050_1000)
             ,(ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes a specialized sub-dialog, creates a custom OPButton control, and
// positions the window based on system resource metrics.

void __stdcall16far
UI_SubDialog_Type20D4_Initialize_and_Create_Button_20d4(void *param_1)
{
  char *pcVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined2 unaff_SS;
  long lVar4;
  void *this_ptr;
  undefined2 uVar5;
  undefined1 local_1e [0x4];
  int local_1a;
  int local_18;
  undefined4 local_16;
  void *local_12;
  undefined2 uStack_10;
  int local_e;
  undefined2 local_c;
  int local_a;
  int local_8;
  undefined2 local_6;
  int local_4;
  
  this_ptr = (void *)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar2 = (undefined2)((ulong)lVar4 >> 0x10);
  local_e = (int)lVar4;
  local_8 = *(int *)(local_e + 0xa);
  local_a = *(int *)(local_e + 0xc);
  local_c = uVar2;
  local_12 = get_with_lazy_init((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e));
  local_4 = local_8 - *(int *)((int)local_12 + 0x4);
  pvVar3 = (void *)(local_4 >> 0xf);
  local_4 /= 0x2;
  local_6 = 0x5;
  uStack_10 = uVar2;
  SetWindowPos16(0x6,0x1d6,*(int *)((int)local_12 + 0x4),0x5,local_4,0x0,
                 *(HWND16 *)((int)this_ptr + 0x6));
  GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_1e),
                  *(HWND16 *)((int)this_ptr + 0x6));
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x592);
  local_16 = 0x50010001;
  CreateWindow16(NULL,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c,0x1,
                 *(HWND16 *)((int)this_ptr + 0x6),0x19,0x58,local_18 + -0x28,
                 (local_1a + -0x58) / 0x2,0x1,
                 (char *)CONCAT22(pcVar1,(char *)s_Rebel_1050_4ffc + 0x5),
                 (void *)CONCAT22(0x5ce4,pvVar3));
  SetWindowPos16(0x45,local_a + -0xa,*(int16_t *)((int)local_12 + 0x4),0x5,local_4,0x0,
                 *(HWND16 *)((int)this_ptr + 0x6));
  return;
}



void * __stdcall16far
UI_SubDialog_Type237E_dtor_Scalar_Deleting_2358(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_Type237E_dtor_Internal_205e(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x2956 (vtable 0x2956). Links to Resource 6
// (Navigation). Base dialog ID 0xFBD.

ushort __stdcall16far
UI_SubDialog_Type2956_ctor_init_23ea
          (void *this_ptr,ulong dlg_template_id,ulong arg3,ulong arg4,ushort parent_hwnd
          )
{
  astruct_68 *uVar1;
  long lVar1;
  undefined2 in_stack_00000006;
  
  UI_SubDialog_Base_ctor_init_7728
            (_this_ptr,0x9a,dlg_template_id,0xfbd,(undefined2)arg4);
  *(undefined4 *)((int)this_ptr + 0x8e) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x92) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x94) = 0x0;
  *_this_ptr = (char *)s_fem94_wav_1050_2950 + 0x6;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  *(undefined2 *)((int)this_ptr + 0x8a) = 0x26;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x6);
  *(undefined2 *)((int)this_ptr + 0x8e) = (int)lVar1;
  *(undefined2 *)((int)this_ptr + 0x90) = (int)((ulong)lVar1 >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x92) =
       *(undefined2 *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x28);
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type2956_dtor_Internal_2464(void *this_ptr)
{
  void *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = (char *)s_fem94_wav_1050_2950 + 0x6;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// Initialization and display logic for sub-dialog Type 0x2956. Positions the window
// relative to the current navigation selection and centers it.

void __stdcall16far UI_SubDialog_Type2956_Show_Logic_2490(void *this_ptr)
{
  undefined2 *puVar1;
  HWND16 enable;
  astruct_67 *uVar3;
  undefined4 uVar2;
  int in_stack_00000006;
  
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  enable = GetDlgItem16(0xfb1,*(short *)((int)this_ptr + 0x6));
  EnableWindow16(0x0,enable);
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ptr + 0x8e) + 0x10);
  uVar2 = (*(code *)*puVar1)(0x1538,*(undefined4 *)((int)this_ptr + 0x8e));
  UI_Window_Move_or_Center_826c
            (this_ptr,in_stack_00000006,*(int *)((int)uVar2 + 0x2) + -0x2);
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  UI_Navigation_Manager_Find_and_Select_Entity_Logic
            (*(long *)((int)this_ptr + 0x8e),0x1a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the navigation search dialog. Manages check box states, updates
// selection counts, dispatches sound events, and spawns confirmation sub-dialogs for
// actions like 'Execute Selection'.

undefined4 __stdcall16far
UI_Navigation_Search_Dialog_On_Command_2512
          (void *param_1,undefined4 param_2,uint16_t param_3)
{
  undefined2 *puVar1;
  HWND16 HVar2;
  BOOL16 BVar3;
  undefined4 *puVar4;
  int iVar5;
  uint16_t uVar6;
  uint in_DX;
  uint uVar7;
  void *this_ptr;
  undefined2 unaff_SI;
  ushort hwnd;
  undefined2 uVar8;
  int unaff_SS;
  undefined1 local_1e [0x4];
  void *local_1a;
  long local_16 [0x2];
  uint16_t local_c;
  undefined4 local_a;
  ushort local_6;
  uint uStack_4;
  
  local_6 = 0x0;
  uStack_4 = 0x0;
  if (param_3 == 0x2)
  {
LAB_1040_266d:
    local_6 = 0x1;
    uStack_4 = 0x0;
  }
  else
  {
    this_ptr = (void *)param_1;
    hwnd = (ushort)((ulong)param_1 >> 0x10);
    if (0x19d < param_3 - 0x2)
    {
      if (param_3 - 0x1a0 < 0x14 || param_3 == 0x1b4)
      {
        uVar6 = IsDlgButtonChecked16(param_3,*(HWND16 *)((int)this_ptr + 0x6));
        if (uVar6 == 0x0)
        {
          *(int *)((int)this_ptr + 0x92) = *(int *)((int)this_ptr + 0x92) + 0x1;
          if (0x0 < *(int *)((int)this_ptr + 0x92))
          {
            *(undefined2 *)((int)this_ptr + 0x94) = 0x0;
          }
          if (*(int *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x28) ==
              *(int *)((int)this_ptr + 0x92))
          {
            HVar2 = GetDlgItem16(0xfb1,*(short *)((int)this_ptr + 0x6));
            EnableWindow16(0x0,HVar2);
          }
        }
        else
        {
          *(int *)((int)this_ptr + 0x92) = *(int *)((int)this_ptr + 0x92) + -0x1;
          HVar2 = GetDlgItem16(0xfb1,*(short *)((int)this_ptr + 0x6));
          BVar3 = IsWindowEnabled16(HVar2);
          if (BVar3 == 0x0)
          {
            HVar2 = GetDlgItem16(0xfb1,*(short *)((int)this_ptr + 0x6));
            EnableWindow16(0x1,HVar2);
          }
          if (*(int *)((int)this_ptr + 0x92) < 0x1)
          {
            *(undefined2 *)((int)this_ptr + 0x94) = 0x1;
          }
          UI_Navigation_Manager_Find_and_Select_Entity_Logic
                    (*(long *)((int)this_ptr + 0x8e),param_3);
          local_a = (undefined4 *)
                    UI_Navigation_Manager_Get_Metadata_Ptr_Logic
                              (*(long *)((int)this_ptr + 0x8e),-0x1);
          if (local_a == NULL)
          {
            local_c = 0x0;
          }
          else
          {
            local_c = *(uint16_t *)((undefined4 *)local_a + 0x7);
          }
          media_play_from_full_resource_ptr_logic
                    ((void *)_p_UIPanelContainer,CONCAT22(local_c,0x1));
        }
        if ((-0x1 < *(int *)((int)this_ptr + 0x92)) &&
           (*(int *)((int)this_ptr + 0x92) <=
            *(int *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x28)))
        {
          sprintf_wrapper(local_16);
          SetDlgItemText((long *)CONCAT22(unaff_SS,local_16),0xfb2,
                         *(HWND16 *)((int)this_ptr + 0x6));
        }
        goto LAB_1040_266d;
      }
      if (param_3 - 0x1a0 == 0xe11)
      {
        if (*(int *)((int)this_ptr + 0x92) < 0x0)
        {
          local_1a = allocate_memory(CONCAT22(unaff_SI,0xb4));
          uVar7 = in_DX | (uint)local_1a;
          if (uVar7 == 0x0)
          {
            puVar4 = NULL;
            uVar7 = 0x0;
          }
          else
          {
            puVar4 = (undefined4 *)
                     UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                               (local_1a,in_DX,g_ParentHWND,0x30,0x2,0x57b,0x57c);
          }
          local_a = (undefined4 *)CONCAT22(uVar7,puVar4);
          puVar1 = (undefined2 *)((int)*local_a + 0x74);
          (*(code *)*puVar1)(0x1000,puVar4,uVar7);
          goto LAB_1040_27c0;
        }
        if (0x0 < *(int *)((int)this_ptr + 0x92))
        {
          local_1a = allocate_memory(CONCAT22(unaff_SI,0xb4));
          uVar7 = in_DX | (uint)local_1a;
          if (uVar7 == 0x0)
          {
            puVar4 = NULL;
            uVar7 = 0x0;
          }
          else
          {
            puVar4 = (undefined4 *)
                     UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                               (local_1a,in_DX,g_ParentHWND,0x21,0x2,0x57b,0x57d);
          }
          local_a = (undefined4 *)CONCAT22(uVar7,puVar4);
          init_word_pair(local_1e,unaff_SS,0x1);
          puVar1 = (undefined2 *)((int)*local_a + 0x6c);
          iVar5 = (*(code *)*puVar1)(0x1008,(undefined4 *)local_a,
                                     (int)((ulong)local_a >> 0x10),local_1e);
          if (iVar5 == 0x2) goto LAB_1040_27c0;
        }
        local_16[0x0] =
             Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x6);
        in_DX = (uint)((ulong)local_16[0x0] >> 0x10);
        local_c = 0x1a0;
        do
        {
          uVar6 = IsDlgButtonChecked16(local_c,*(HWND16 *)((int)this_ptr + 0x6));
          if (uVar6 == 0x1)
          {
            uVar8 = (undefined2)((ulong)local_16[0x0] >> 0x10);
            iVar5 = (int)local_16[0x0];
            *(uint16_t *)(iVar5 + *(int *)(iVar5 + 0x56) * 0x2 + 0x4e) = local_c;
            *(int *)(iVar5 + 0x56) = *(int *)(iVar5 + 0x56) + 0x1;
          }
          local_c += 0x1;
        } while ((int)local_c < 0x1b5);
        local_a = (undefined4 *)
                  CONCAT22(local_a._2_2_,
                           (undefined4 *)*(undefined2 *)((int)this_ptr + 0x92));
        *(undefined2 *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x28) =
             (undefined4 *)*(undefined2 *)((int)this_ptr + 0x92);
        PostMessage16(0x0,0x0,0xc8,(long)CONCAT22(unaff_SI,g_ParentHWND));
        param_3 = 0x1;
      }
    }
    local_6 = UI_SubDialog_Base_On_Command_Logic_7b3c
                        (this_ptr,hwnd,(ushort)param_2,(ushort)((ulong)param_2 >> 0x10),
                         CONCAT22(unaff_SI,param_3));
    uStack_4 = in_DX;
  }
LAB_1040_27c0:
  return CONCAT22(uStack_4,local_6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WM_CTLCOLOR handler for sub-dialog type 2512. Sets text and background colors, and
// provides a solid brush for painting controls (specifically handling
// IDC_SELECTION_COUNT).

undefined4 __stdcall16far
UI_SubDialog_Type2512_CtlColor_Logic_27cc
          (undefined4 *param_1,undefined2 param_2,uint param_3,COLORREF param_4)
{
  undefined2 *puVar1;
  HBRUSH16 HVar2;
  void *pvVar3;
  int16_t iVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  HWND16 unaff_CS;
  void *pvVar8;
  HDC16 hdc;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (undefined4 *)param_1;
  if (*(int *)(puVar6 + 0x1) == 0x0)
  {
    unaff_CS = 0x1538;
    HVar2 = CreateSolidBrush16(0x0);
    *(HBRUSH16 *)(puVar6 + 0x1) = HVar2;
  }
  if (_PTR_DAT_1050_0000_1050_5cf8 == 0x0)
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x68);
    pvVar8 = (void *)(*(code *)*puVar1)(unaff_CS,param_1,
                                        *(undefined2 *)((int)puVar6 + 0x6e));
    uVar5 = (undefined2)((ulong)pvVar8 >> 0x10);
    unaff_CS = 0x1008;
    pvVar3 = Palette_Object_Get_Buffer_Ptr_maybe((void *)pvVar8);
    _PTR_DAT_1050_0000_1050_5cf8 =
         CONCAT22(CONCAT11(0x2,*(undefined1 *)((int)pvVar3 + 0x94)),
                  CONCAT11(*(undefined1 *)((int)pvVar3 + 0x95),
                           *(undefined1 *)((int)pvVar3 + 0x96)));
  }
  if (0x5 < param_3)
  {
    if (param_3 != 0x6)
    {
      return 0x0;
    }
    iVar4 = GetDlgCtrlId(unaff_CS);
    if ((*(int *)(puVar6 + 0x25) != 0x0) && (iVar4 == 0xfb2))
    {
      hdc = 0x0;
      goto LAB_1040_286e;
    }
  }
  hdc = (HDC16)_PTR_DAT_1050_0000_1050_5cf8;
  param_4 = (COLORREF)((ulong)_PTR_DAT_1050_0000_1050_5cf8 >> 0x10);
LAB_1040_286e:
  SetTextColor16(hdc,param_4);
  SetBkColor16(0x0,0x100);
  return CONCAT22(0x1050,*(undefined2 *)(puVar6 + 0x1));
}



void * __stdcall16far
UI_SubDialog_Type2956_dtor_Scalar_Deleting_2930(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_Type2956_dtor_Internal_2464(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



void __stdcall16far UI_SubDialog_Type2E26_dtor_Internal_2a22(void *this_ptr)
{
  astruct_64 *uVar1;
  undefined2 in_stack_00000006;
  
  *_this_ptr = (char *)s_add74_wav_1050_2e20 + 0x6;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ptr + 0x94));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ptr + 0x98));
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(this_ptr);
  return;
}



// Initialization logic for dialog Type 0x2E26. Dynamically instantiates 5 complex
// controls based on the current entity's state array (from 4A9A) and updates UI text.

void __stdcall16far UI_SubDialog_Type2E26_Init_Controls_2a64(void *this_ptr)
{
  u16 uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined2 unaff_SI;
  undefined2 unaff_SS;
  undefined2 in_stack_00000006;
  int iVar4;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  void *pvStack_c;
  void *pvStack_8;
  void *pvStack_6;
  int iStack_4;
  
  UI_SubDialog_Base_AutoPosition_and_Register_b230(this_ptr);
  iStack_4 = 0x5;
  iVar4 = 0x0;
  pvStack_c = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8
                        ((void *)*(undefined4 *)
                                  ((int)*(undefined4 *)((int)this_ptr + 0x90) + 0x6));
  pvVar3 = (void *)((ulong)pvStack_c >> 0x10);
  PTR_DAT_1050_0000_1050_5d04 =
       (undefined *)UI_Build_Item_Get_State_Array_Value_4a9a(pvStack_c,iVar4);
  for (iStack_e = 0x0; iStack_e < iStack_4; iStack_e += 0x1)
  {
    if (iStack_e != 0x0)
    {
      ((undefined **)&PTR_DAT_1050_0000_1050_5d04)[iStack_e * 0x6] = NULL;
    }
    iVar4 = iStack_e * 0xc;
    local_16 = *(undefined2 *)(iVar4 + 0x5cfc);
    uStack_14 = *(undefined2 *)(iVar4 + 0x5cfe);
    uStack_12 = 0x1;
    uStack_10 = 0x1;
    MapDialogRect16((undefined2 *)CONCAT22(unaff_SS,&local_16),
                    *(HWND16 *)((int)this_ptr + 0x6));
    pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x42));
    if (pvVar3 == NULL && pvVar2 == NULL)
    {
      pvVar2 = NULL;
      pvVar3 = NULL;
    }
    else
    {
      pvVar3 = UI_Complex_Control_ctor
                         (pvVar2,pvVar3,0x1,uStack_14,local_16,0x101,0x100,0xff,
                          *(undefined2 *)(iVar4 + 0x5d00),
                          *(undefined2 *)((int)this_ptr + 0x6));
    }
    iVar4 = iStack_e;
    _pvStack_8 = (void *)CONCAT22(pvVar3,pvVar2);
    if (PTR_DAT_1050_0000_1050_5d04 == NULL)
    {
      if ((iStack_e != 0x0) && (pvVar3 != NULL || pvVar2 != NULL))
      {
        EnableWindow16(0x0,*(BOOL16 *)((int)pvVar2 + 0x18));
      }
    }
    else
    {
      uVar1 = UI_Build_Item_Get_State_Array_Value_4a9a
                        (pvStack_c,*(int *)(iStack_e * 0xc + 0x5d02));
      if (uVar1 != 0x0)
      {
        ((undefined **)&PTR_DAT_1050_0000_1050_5d04)[iVar4 * 0x6] = (undefined *)0x1;
        SetDlgItemText((void *)*(undefined4 *)((int)this_ptr + 0x98),
                       ((u16 *)&u16_1050_5d06)[iVar4 * 0x6],
                       *(HWND16 *)((int)this_ptr + 0x6));
      }
    }
  }
  return;
}



// Command handler for dialog Type 0x2E26. Manages state toggles for specialized control
// IDs (0x158-0x15C) and updates corresponding labels.

ulong __stdcall16far
UI_SubDialog_Type2E26_On_Command_2bb2
          (int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  undefined *puVar1;
  HWND16 HVar2;
  ulong uVar3;
  void *lp_string;
  u16 id;
  int iStack_8;
  int iStack_4;
  
  if (param_4._2_2_ == 0x158)
  {
    PTR_DAT_1050_0000_1050_5d04 =
         (undefined *)(uint)(PTR_DAT_1050_0000_1050_5d04 == NULL);
    if (PTR_DAT_1050_0000_1050_5d04 == NULL)
    {
      for (iStack_8 = 0x1; iStack_8 < 0x5; iStack_8 += 0x1)
      {
        HVar2 = GetDlgItem16(*(HWND16 *)(iStack_8 * 0xc + 0x5d00),
                             *(short *)(param_1 + 0x6));
        EnableWindow16(0x0,HVar2);
        ((undefined **)&PTR_DAT_1050_0000_1050_5d04)[iStack_8 * 0x6] = NULL;
        SetDlgItemText((void *)*(undefined4 *)(param_1 + 0x94),
                       ((u16 *)&u16_1050_5d06)[iStack_8 * 0x6],
                       *(HWND16 *)(param_1 + 0x6));
      }
      HVar2 = *(HWND16 *)(param_1 + 0x6);
      lp_string = (void *)*(undefined4 *)(param_1 + 0x94);
      id = u16_1050_5d06;
      goto LAB_1040_2ccc;
    }
    for (iStack_8 = 0x1; iStack_8 < 0x5; iStack_8 += 0x1)
    {
      HVar2 = GetDlgItem16(*(HWND16 *)(iStack_8 * 0xc + 0x5d00),
                           *(short *)(param_1 + 0x6));
      EnableWindow16(0x1,HVar2);
      ((undefined **)&PTR_DAT_1050_0000_1050_5d04)[iStack_8 * 0x6] = NULL;
      SetDlgItemText((void *)*(undefined4 *)(param_1 + 0x94),
                     ((u16 *)&u16_1050_5d06)[iStack_8 * 0x6],*(HWND16 *)(param_1 + 0x6))
      ;
    }
    HVar2 = *(HWND16 *)(param_1 + 0x6);
    id = u16_1050_5d06;
  }
  else
  {
    if (param_4._2_2_ == 0x159)
    {
      iStack_4 = 0x1;
    }
    else if (param_4._2_2_ == 0x15a)
    {
      iStack_4 = 0x2;
    }
    else if (param_4._2_2_ == 0x15b)
    {
      iStack_4 = 0x3;
    }
    else
    {
      if (param_4._2_2_ != 0x15c)
      {
        uVar3 = UI_SubDialog_Complex_Command_Handler_b54a
                          (param_1,CONCAT22(param_3,param_2),param_4);
        return uVar3;
      }
      iStack_4 = 0x4;
    }
    if (iStack_4 == 0x0)
    {
      return 0x1;
    }
    puVar1 = (undefined *)
             (uint)(((undefined **)&PTR_DAT_1050_0000_1050_5d04)[iStack_4 * 0x6] == NULL
                   );
    ((undefined **)&PTR_DAT_1050_0000_1050_5d04)[iStack_4 * 0x6] = puVar1;
    if (puVar1 == NULL)
    {
      HVar2 = *(HWND16 *)(param_1 + 0x6);
      lp_string = (void *)*(undefined4 *)(param_1 + 0x94);
      id = ((u16 *)&u16_1050_5d06)[iStack_4 * 0x6];
      goto LAB_1040_2ccc;
    }
    HVar2 = *(HWND16 *)(param_1 + 0x6);
    id = ((u16 *)&u16_1050_5d06)[iStack_4 * 0x6];
  }
  lp_string = (void *)*(undefined4 *)(param_1 + 0x98);
LAB_1040_2ccc:
  SetDlgItemText(lp_string,id,HVar2);
  return 0x1;
}



// Refreshes dialog labels from entity metadata and calculates a simple ratio (likely
// resource efficiency) between two dialog item integers.

void __stdcall16far UI_SubDialog_Refresh_and_Calculate_Ratio_2d48(u32 param_1)
{
  uint16_t uVar1;
  uint16_t value;
  int16_t unaff_SS;
  undefined1 local_4 [0x2];
  
  UI_SubDialog_Refresh_Labels_from_Metadata_b45e(param_1);
  uVar1 = GetDlgItemInt16(0x1,(uint16_t)local_4,unaff_SS,0x163);
  value = GetDlgItemInt16(0x1,(uint16_t)local_4,unaff_SS,0x165);
  if (uVar1 != 0x0)
  {
    value /= uVar1;
  }
  SetDlgItemInt(0x1,value,0x165,*(HWND16 *)((int)param_1 + 0x6));
  return;
}



// Batch updates a simulation entity's internal state array using values retrieved from
// a global constant table.

void __stdcall16far UI_Build_Item_Batch_Set_State_Values_2dac(undefined4 param_1)
{
  undefined4 uVar1;
  void *this_ptr;
  int local_a;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x90);
  this_ptr = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8
                       ((void *)*(undefined4 *)((int)uVar1 + 0x6));
  for (local_a = 0x0; local_a < 0x5; local_a += 0x1)
  {
    UI_Build_Item_Set_State_Array_Value_4ab2
              ((u32)this_ptr,
               (u16)((undefined **)&PTR_DAT_1050_0000_1050_5d04)[local_a * 0x6],
               *(int *)(local_a * 0xc + 0x5d02));
  }
  return;
}



void * __stdcall16far
UI_SubDialog_Type2E26_dtor_Scalar_Deleting_2e00(void *this_ptr,uchar flags)
{
  byte in_stack_00000008;
  
  UI_SubDialog_Type2E26_dtor_Internal_2a22(this_ptr);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}
