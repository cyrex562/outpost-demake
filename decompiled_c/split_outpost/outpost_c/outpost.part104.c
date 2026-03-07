/*
 * Source: outpost.c
 * Chunk: 104/117
 * Original lines: 118714-119849
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Complex command handler for dialog Type 0xD6EA. Manages a sequential interaction flow
// (0x145-0x14B), playing sounds, updating labels, and potentially triggering main UI
// notifications (0xAF, 0xB8).

void __stdcall16far
UI_SubDialog_TypeD6EA_On_Command_d400
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  HWND16 HVar1;
  undefined **enable;
  int iVar2;
  BOOL16 BVar3;
  char *pcVar4;
  short in_DX;
  int map_id;
  short id;
  int unaff_SS;
  LRESULT pvVar5;
  void *pvVar6;
  long lVar7;
  ushort uVar8;
  ushort uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 in_stack_0000ffe6;
  undefined1 local_c [0x4];
  ushort uStack_8;
  undefined4 uStack_6;
  
  uStack_6 = 0x0;
  uStack_8 = 0x0;
  switch(param_4._2_2_)
  {
  case 0x145:
    HVar1 = GetDlgItem16(0x146,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,HVar1);
    uStack_6 = 0x13f0647;
    enable = (undefined **)((char *)s_Unsupported_FileStructType_in_Op_1050_01ca + 0x27)
    ;
    goto LAB_1038_d490;
  case 0x146:
    uStack_6 = 0x1400648;
    init_word_pair(local_c,unaff_SS,0x1);
    media_play_from_resource_ptr_wrapper
              ((void *)_p_UIPanelContainer,(void *)((ulong)_p_UIPanelContainer >> 0x10))
    ;
    pvVar6 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
    map_id = (int)((ulong)pvVar6 >> 0x10);
    iVar2 = map_id;
    Resource_Category_Increment_Mapped_Offset_Value_Logic((void *)pvVar6,map_id);
    HVar1 = GetDlgItem16(0x145,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x0,HVar1);
    uVar10 = *(undefined2 *)((int)param_1 + 0x6);
    uVar9 = 0xc;
    uVar11 = 0x13f;
    uVar8 = 0x0;
    pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x649);
    pvVar5 = SendDlgItemMessage16
                       ((HWND16)pcVar4,iVar2,uVar8,uVar9,CONCAT22(uVar10,uVar11));
    id = (short)((ulong)pvVar5 >> 0x10);
    HVar1 = GetDlgItem16(0x146,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x0,HVar1);
    iVar2 = UI_Component_Get_Dynamic_Offset_Difference_Logic((void *)pvVar6,map_id);
    if (iVar2 == 0x0)
    {
      HVar1 = GetDlgItem16(0x14a,*(short *)((int)param_1 + 0x6));
      EnableWindow16(0x0,HVar1);
      uVar10 = *(undefined2 *)((int)param_1 + 0x6);
      uVar9 = 0xc;
      uVar11 = 0x144;
      uVar8 = 0x0;
      pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                         ((int)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
      SendDlgItemMessage16((HWND16)pcVar4,id,uVar8,uVar9,CONCAT22(uVar10,uVar11));
    }
    enable = (undefined **)&p_CurrentHeapContext;
    lVar7 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    in_DX = (short)((ulong)lVar7 >> 0x10);
    if (*(int *)((int)lVar7 + 0x20) != 0x0)
    {
      enable = (undefined **)g_ParentHWND;
      PostMessage16(0x0,0x0,0xaf,(long)CONCAT22(in_stack_0000ffe6,g_ParentHWND));
    }
    break;
  case 0x147:
    HVar1 = GetDlgItem16(0x148,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,HVar1);
    uStack_6 = 0x1410647;
    enable = (undefined **)((char *)s_Unsupported_FileStructType_in_Op_1050_01ca + 0x2b)
    ;
    goto LAB_1038_d490;
  case 0x148:
    HVar1 = GetDlgItem16(0x149,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,HVar1);
    uStack_6 = 0x1420647;
    enable = (undefined **)((char *)s_Unsupported_FileStructType_in_Op_1050_01ca + 0x28)
    ;
LAB_1038_d490:
    media_play_from_resource_id_shorthand
              ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
    break;
  case 0x149:
    uStack_6 = 0x1430648;
    PostMessage16(0x0,0x0,0xb8,(long)CONCAT22(in_stack_0000ffe6,g_ParentHWND));
    enable = (undefined **)*(HWND16 *)((int)param_1 + 0x6);
    DestroyWindow16((HWND16)enable);
    break;
  case 0x14a:
    HVar1 = GetDlgItem16(0x145,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,HVar1);
    enable = (undefined **)*(HWND16 *)((int)param_1 + 0x6);
    uVar9 = 0xc;
    uVar10 = 0x140;
    uVar8 = 0x0;
    pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x649);
    pvVar5 = SendDlgItemMessage16
                       ((HWND16)pcVar4,in_DX,uVar8,uVar9,CONCAT22(enable,uVar10));
    in_DX = (short)((ulong)pvVar5 >> 0x10);
    break;
  case 0x14b:
    enable = (undefined **)GetDlgItem16(0x147,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,(BOOL16)enable);
    break;
  default:
    UI_SubDialog_Base_On_Command_Logic_7b3c
              (param_1,param_2,param_3,(ushort)param_4,
               CONCAT22(in_stack_0000ffe6,param_4._2_2_));
    return;
  }
  if ((uStack_6._2_2_ != 0x0) && ((int)uStack_6 != 0x0))
  {
    enable = (undefined **)*(HWND16 *)((int)param_1 + 0x6);
    BVar3 = IsWindow16((HWND16)enable);
    if (BVar3 != 0x0)
    {
      uVar10 = *(undefined2 *)((int)param_1 + 0x6);
      uVar8 = 0x0;
      uVar9 = 0xc;
      uVar11 = uStack_6._2_2_;
      pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                         ((int)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10),(int)uStack_6);
      SendDlgItemMessage16((HWND16)pcVar4,in_DX,uVar8,uVar9,CONCAT22(uVar10,uVar11));
    }
  }
  if (uStack_8 != 0x0)
  {
    PostMessage16(0x0,0x0,uStack_8,(long)CONCAT22(enable,g_ParentHWND));
  }
  return;
}



void * __stdcall16far
UI_SubDialog_TypeD6EA_dtor_Scalar_Deleting_d6c4(void *param_1,byte param_2)
{
  UI_SubDialog_TypeD6EA_dtor_Internal_d276(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xE0D4 (vtable 0xE0D4). Links to Resource 0x2B and
// triggers a virtual update. Base ID 0x11B.

void * __stdcall16far
UI_SubDialog_TypeE0D4_ctor_init_d756(void *this_ptr,u16 parent_hwnd)
{
  undefined2 *puVar1;
  astruct_92 *uVar2;
  undefined2 uVar3;
  long lVar4;
  
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,0x11b0000,parent_hwnd);
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_92 *)this_ptr;
  uVar2->field141_0x8e = 0x0;
  uVar2->field142_0x90 = 0x0;
  uVar2->field143_0x92 = NULL;
  uVar2->field144_0x96 = 0x0;
  *(undefined2 *)this_ptr = 0xe0d4;
  uVar2->field2_0x2 = 0x1038;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  *(int *)&uVar2->field143_0x92 = (int)lVar4;
  *(undefined2 *)((int)&uVar2->field143_0x92 + 0x2) = (int)((ulong)lVar4 >> 0x10);
  puVar1 = (undefined2 *)((int)*uVar2->field143_0x92 + 0x4);
  (*(code *)*puVar1)();
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeE0D4_dtor_Internal_d7d0(void *this_ptr)
{
  astruct_91 *uVar1;
  undefined2 uVar2;
  void *unaff_CS;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_91 *)this_ptr;
  *(undefined2 *)this_ptr = 0xe0d4;
  uVar1->field2_0x2 = 0x1038;
  if (uVar1->field142_0x90 != 0x0)
  {
    unaff_CS = (void *)0x1010;
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)_p_UIPanelContainer,(long)this_ptr);
  }
  if (uVar1->field143_0x92 != 0x0)
  {
    unaff_CS = (void *)0x1010;
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)uVar1->field143_0x92,(long)this_ptr);
  }
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  free_if_not_null((void *)uVar1->field144_0x96);
  UI_SubDialog_Base_dtor_Internal_782c(uVar1);
  return;
}



// Virtual event handler for dialog Type 0xE0D4. Handles command forwarding (0x10), flag
// resets (0x01), and batch colony component refreshes (0x03).

void __stdcall16far
UI_SubDialog_TypeE0D4_On_Event_Logic_d840(void *this_ptr,u16 event_id)
{
  int iVar1;
  undefined2 unaff_BP;
  undefined2 uVar2;
  
  iVar1 = (int)this_ptr;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  if (event_id == 0x10)
  {
    if (*(int *)(iVar1 + 0x8e) != 0x0)
    {
      PostMessage16(0x0,0x0,*(ushort *)(iVar1 + 0x8e),
                    CONCAT22(unaff_BP,*(undefined2 *)(iVar1 + 0x6)));
      *(undefined2 *)(iVar1 + 0x8e) = 0x0;
      return;
    }
  }
  else if (event_id < 0x11)
  {
    if ((char)event_id == '\x01')
    {
      *(undefined2 *)(iVar1 + 0x90) = 0x0;
      *(undefined4 *)(iVar1 + 0x92) = 0x0;
      return;
    }
    if ((char)event_id == '\x03')
    {
      UI_Colony_Batch_Reset_Component_Flags_e03e(this_ptr);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes and positions the colony summary dialog, creating and enabling multiple
// complex controls based on a dynamic count.

void __stdcall16far UI_Colony_Summary_Dialog_Initialize_and_Layout_d8ae(void *param_1)
{
  void *pvVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined *in_DX;
  int iVar4;
  undefined2 unaff_SI;
  undefined2 uVar5;
  undefined2 unaff_SS;
  void *this_ptr;
  undefined2 uVar6;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 *local_1e;
  undefined *puStack_1c;
  long local_e;
  int local_a;
  int local_8;
  HCURSOR16 local_6;
  HCURSOR16 local_4;
  
  local_4 = LoadCursor16((void *)0x7f02,0x0);
  local_6 = SetCursor16(local_4);
  this_ptr = (void *)param_1;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  local_8 = get_const_10_stub();
  if (_g_AllocatedBlock_Offset == NULL)
  {
    local_1e = init_memory_allocator();
  }
  else
  {
    local_1e = (undefined2 *)g_AllocatedBlock_Offset;
    in_DX = g_AllocatedBlock_Segment;
  }
  puStack_1c = in_DX;
  pvVar3 = alloc_with_hooks((ulong)(uint)((local_8 + 0x2) * 0x4),0x1,local_1e);
  *(undefined2 *)((int)this_ptr + 0x96) = pvVar3;
  *(undefined2 *)((int)this_ptr + 0x98) = in_DX;
  for (local_a = 0x1; local_a <= local_8; local_a += 0x1)
  {
    local_1e = UI_System_Reset_Flags_and_Get_Entry_Ptr
                         ((int)*(undefined4 *)((int)this_ptr + 0x92));
    local_26 = *local_1e;
    local_24 = local_1e[0x1];
    local_22 = 0x1;
    local_20 = 0x1;
    puStack_1c = in_DX;
    MapDialogRect16((undefined2 *)CONCAT22(unaff_SS,&local_26),
                    *(HWND16 *)((int)this_ptr + 0x6));
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x42));
    if (in_DX == NULL && pvVar3 == NULL)
    {
      *(undefined4 *)((int)*(undefined4 *)((int)this_ptr + 0x96) + local_a * 0x4) = 0x0;
      in_DX = NULL;
    }
    else
    {
      in_DX = UI_Complex_Control_ctor
                        (pvVar3,in_DX,0x0,local_24,local_26,0x101,0x100,0xff,
                         local_1e[0x2],*(undefined2 *)((int)this_ptr + 0x6));
      uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x96) >> 0x10);
      iVar4 = (int)*(undefined4 *)((int)this_ptr + 0x96);
      *(undefined2 *)(iVar4 + local_a * 0x4) = pvVar3;
      *(undefined2 *)(iVar4 + local_a * 0x4 + 0x2) = in_DX;
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x96) >> 0x10);
    iVar4 = (int)*(undefined4 *)((int)this_ptr + 0x96);
    if (*(long *)(iVar4 + local_a * 0x4) != 0x0)
    {
      uVar2 = *(undefined4 *)(iVar4 + local_a * 0x4);
      *(undefined2 *)((int)uVar2 + 0x3e) = 0x1;
      pvVar1 = (void *)*(undefined4 *)
                        ((int)*(undefined4 *)((int)this_ptr + 0x96) + local_a * 0x4);
      UI_Complex_Control_Enable_Window_9234
                ((void *)pvVar1,(ushort)((ulong)pvVar1 >> 0x10));
    }
  }
  local_e = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  SetWindowText16((void *)*(undefined4 *)((int)local_e + 0x68),
                  *(HWND16 *)((int)this_ptr + 0x6));
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  SetCursor16(local_6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the colony dialog, managing various colony-related actions like
// abandonment, settings, help, and spawning sub-dialogs.

void __stdcall16far
UI_Colony_Dialog_On_Command_da68
          (void *param_1,ushort param_2,ushort param_3,ulong param_4)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint in_DX;
  uint uVar4;
  uint extraout_DX;
  undefined2 uVar5;
  int unaff_SS;
  void *pvVar6;
  int dialog_id;
  undefined2 in_stack_0000ffea;
  undefined4 local_e;
  int local_8;
  int iStack_4;
  
  if (param_3 == 0x204)
  {
    UI_Colony_Dispatch_Building_Event_Dialog_de20(param_1,param_2,0x204,param_4);
    return;
  }
  iStack_4 = 0x0;
  local_8 = 0x0;
  if (param_4._2_2_ == 0x121)
  {
    iStack_4 = 0x6ec;
    local_8 = 0x15;
  }
  else if (param_4 < 0x1220000)
  {
    if (param_4._2_2_ == 0x100)
    {
      if (*(int *)((int)param_1 + 0x8e) == 0x0)
      {
        UI_Container_Remove_Item_at_Offset_4_Logic
                  ((undefined4 *)_p_UIPanelContainer,(long)CONCAT22(param_2,param_1));
        *(undefined2 *)((int)param_1 + 0x90) = 0x0;
      }
      iStack_4 = 0x72c;
      local_8 = 0x48;
    }
    else if (param_4._2_2_ == 0x11c)
    {
      UI_Colony_Confirm_Abandonment_Logic_df86((void *)CONCAT22(param_2,param_1));
    }
    else
    {
      if (param_4._2_2_ != 0x11d)
      {
        if (param_4._2_2_ == 0x11e)
        {
          dialog_id = 0x1d;
        }
        else
        {
          if (param_4._2_2_ != 0x120)
          {
LAB_1038_dc20:
            UI_SubDialog_Base_On_Command_Logic_7b3c
                      (param_1,param_2,param_3,(ushort)param_4,
                       CONCAT22(in_stack_0000ffea,param_4._2_2_));
            return;
          }
          dialog_id = 0x1c;
        }
        goto LAB_1038_db1c;
      }
      pvVar6 = UI_Colony_Apply_Settings_and_Swap_Context_df5c
                         ((void *)CONCAT22(param_2,param_1));
      in_DX = (uint)((ulong)pvVar6 >> 0x10);
    }
  }
  else
  {
    if (param_4._2_2_ == 0x122)
    {
      dialog_id = 0x14;
    }
    else
    {
      if (param_4._2_2_ != 0x123)
      {
        if (param_4._2_2_ == 0x125)
        {
          puVar1 = (undefined2 *)((int)*_p_UIPanelContainer + 0x4);
          (*(code *)*puVar1)();
          *(undefined2 *)((int)param_1 + 0x90) = 0x1;
          in_DX = extraout_DX;
          media_play_from_resource_id_shorthand
                    ((undefined4 *)_p_UIPanelContainer,
                     (int)((ulong)_p_UIPanelContainer >> 0x10));
          *(undefined2 *)((int)param_1 + 0x8e) = 0x100;
        }
        else if (param_4._2_2_ == 0x126)
        {
          *(undefined2 *)((int)param_1 + 0x8e) = 0x0;
          media_play_from_full_resource_ptr_logic
                    ((undefined4 *)_p_UIPanelContainer,0xcb0001);
          pvVar2 = Resource_Manager_Load_Resource_Object_Logic
                             ((void *)_p_GlobalResourceManager,
                              (int)((ulong)_p_GlobalResourceManager >> 0x10));
          WinHelp16(0x0,0x0,(void *)CONCAT22(pvVar2,(void *)((int)(undefined **)
                                                                  &p_CurrentHeapContext
                                                            + 0x1)),in_DX);
        }
        else
        {
          if (param_4._2_2_ != 0x127) goto LAB_1038_dc20;
          UI_Colony_Handle_Event_Outcome_Notification_dcb0(param_1,param_2);
        }
        goto LAB_1038_dac3;
      }
      dialog_id = 0x28;
    }
LAB_1038_db1c:
    pvVar6 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                       (_p_UISubDialogTable,*(uint16_t *)((int)param_1 + 0x8),dialog_id)
    ;
    in_DX = (uint)((ulong)pvVar6 >> 0x10);
  }
LAB_1038_dac3:
  if (iStack_4 == 0x0)
  {
    return;
  }
  if (true)
  {
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffea,0xb4));
    uVar4 = in_DX | (uint)pvVar2;
    if (uVar4 != 0x0)
    {
      uVar5 = 0x1040;
      puVar3 = (undefined4 *)
               UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                         (pvVar2,in_DX,*(undefined2 *)((int)param_1 + 0x6),0x0,0x2,0x634
                          ,iStack_4);
      goto LAB_1038_dc37;
    }
  }
  else
  {
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffea,0xb4));
    uVar4 = in_DX | (uint)pvVar2;
    if (uVar4 != 0x0)
    {
      uVar5 = 0x1040;
      puVar3 = (undefined4 *)
               UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                         (pvVar2,in_DX,*(undefined2 *)((int)param_1 + 0x6),0x0,0x3,0x634
                          ,iStack_4,0x0);
      goto LAB_1038_dc37;
    }
  }
  uVar5 = 0x1000;
  puVar3 = NULL;
  uVar4 = 0x0;
LAB_1038_dc37:
  local_e = (undefined4 *)CONCAT22(uVar4,puVar3);
  if (local_8 == 0x0)
  {
    puVar1 = (undefined2 *)((int)*local_e + 0x74);
    (*(code *)*puVar1)(uVar5,puVar3,uVar4);
  }
  else
  {
    init_word_pair(&stack0xffea,unaff_SS,0x1);
    puVar1 = (undefined2 *)((int)*local_e + 0x6c);
    (*(code *)*puVar1)(0x1008,puVar3,uVar4,&stack0xffea);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes the outcome of a colony event (building completion or failure). Shows
// outcome-specific dialogs (Type 0x634 with sub-IDs 0x726-0x729), updates the turn
// manager, and notifies the main UI.

void __stdcall16far
UI_Colony_Handle_Event_Outcome_Notification_dcb0(astruct_90 *param_1)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  uint in_DX;
  uint uVar3;
  uint uVar4;
  astruct_90 *uVar5;
  int unaff_SS;
  undefined4 uVar6;
  void *pvVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int qty_delta;
  int arg4;
  undefined2 uVar10;
  undefined2 uVar11;
  int resource_id;
  undefined2 in_stack_0000ffe8;
  undefined1 local_14 [0x4];
  void *pvStack_10;
  uint uStack_e;
  int iStack_c;
  undefined1 local_a [0x4];
  undefined4 uStack_6;
  
  pvStack_10 = allocate_memory(CONCAT22(in_stack_0000ffe8,0xb4));
  uVar3 = in_DX | (uint)pvStack_10;
  uVar5 = (astruct_90 *)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  if (uVar3 == 0x0)
  {
    puVar2 = NULL;
    uVar3 = 0x0;
  }
  else
  {
    puVar2 = (undefined4 *)
             UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                       (pvStack_10,in_DX,uVar5->field6_0x6,0x4,0x3,0x634,0x726,0x727);
  }
  uStack_6 = (undefined4 *)CONCAT22(uVar3,puVar2);
  init_word_pair(local_a,unaff_SS,0x1);
  puVar2 = (undefined4 *)uStack_6;
  puVar1 = (undefined2 *)((int)*uStack_6 + 0x6c);
  uVar6 = (*(code *)*puVar1)(0x1008,puVar2,(int)((ulong)uStack_6 >> 0x10),local_a);
  uVar3 = (uint)((ulong)uVar6 >> 0x10);
  iStack_c = (int)uVar6;
  if (iStack_c == 0x6)
  {
    pvStack_10 = allocate_memory(CONCAT22(puVar2,0xb4));
    uVar4 = uVar3 | (uint)pvStack_10;
    uStack_e = uVar3;
    if (uVar4 == 0x0)
    {
      puVar2 = NULL;
      uVar4 = 0x0;
    }
    else
    {
      puVar2 = (undefined4 *)
               UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                         (pvStack_10,uVar3,uVar5->field6_0x6,0x0,0x2,0x634,0x728);
    }
    uStack_6 = (undefined4 *)CONCAT22(uVar4,puVar2);
    init_word_pair(local_14,unaff_SS,0x1);
    puVar2 = (undefined4 *)uStack_6;
    puVar1 = (undefined2 *)((int)*uStack_6 + 0x6c);
    (*(code *)*puVar1)(0x1008,puVar2,(int)((ulong)uStack_6 >> 0x10),local_14);
    uVar11 = 0x0;
    resource_id = 0x15;
    arg4 = 0x1;
    uVar10 = 0x0;
    uVar9 = 0x0;
    qty_delta = 0x0;
    uVar8 = 0x0;
    pvVar7 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
    Turn_Manager_Add_Resource_Change_Entry_Logic
              ((void *)pvVar7,CONCAT22(uVar9,uVar8),qty_delta,arg4,
               CONCAT22(uVar11,uVar10),resource_id);
    PostMessage16(0x0,0x0,0xfc,(long)CONCAT22(puVar2,g_ParentHWND));
    return;
  }
  pvStack_10 = allocate_memory(CONCAT22(puVar2,0xb4));
  uVar4 = uVar3 | (uint)pvStack_10;
  uStack_e = uVar3;
  if (uVar4 == 0x0)
  {
    puVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar2 = (undefined4 *)
             UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                       (pvStack_10,uVar3,uVar5->field6_0x6,0x0,0x2,0x634,0x729);
  }
  uStack_6 = (undefined4 *)CONCAT22(uVar4,puVar2);
  init_word_pair(&stack0xffe8,unaff_SS,0x1);
  puVar1 = (undefined2 *)((int)*uStack_6 + 0x6c);
  (*(code *)*puVar1)(0x1008,(undefined4 *)uStack_6,(int)((ulong)uStack_6 >> 0x10),
                     &stack0xffe8);
  return;
}



// Maps specific building events (IDs 0x11C+) to their corresponding notification
// dialogs and turn-manager resource entries. Handles 10 distinct event categories.

void __stdcall16far
UI_Colony_Dispatch_Building_Event_Dialog_de20
          (undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint in_DX;
  uint uVar4;
  undefined2 uVar5;
  int unaff_SS;
  undefined4 in_stack_0000ffec;
  undefined4 uStack_a;
  int iStack_6;
  int iStack_4;
  
  iStack_4 = 0x644;
  iStack_6 = 0x0;
  if (true)
  {
    switch(param_4)
    {
    case 0x11c:
      iStack_4 = 0x635;
      iStack_6 = 0x3a;
      break;
    case 0x11d:
      iStack_4 = 0x636;
      iStack_6 = 0x3b;
      break;
    case 0x11e:
      iStack_4 = 0x637;
      iStack_6 = 0x3c;
      break;
    case 0x120:
      iStack_4 = 0x639;
      iStack_6 = 0x3e;
      break;
    case 0x121:
      iStack_4 = 0x63a;
      iStack_6 = 0x3f;
      break;
    case 0x122:
      iStack_4 = 0x63b;
      iStack_6 = 0x40;
      break;
    case 0x123:
      iStack_4 = 0x640;
      iStack_6 = 0x45;
      break;
    case 0x125:
      iStack_4 = 0x642;
      iStack_6 = 0x47;
      break;
    case 0x126:
      iStack_4 = 0x641;
      iStack_6 = 0x46;
      break;
    case 0x127:
      iStack_4 = 0x63f;
      iStack_6 = 0x44;
    }
  }
  if (iStack_4 != 0x0)
  {
    uVar5 = 0x1000;
    pvVar2 = allocate_memory(CONCAT22((int)((ulong)in_stack_0000ffec >> 0x10),0xb4));
    uVar4 = in_DX | (uint)pvVar2;
    if (uVar4 == 0x0)
    {
      puVar3 = NULL;
      uVar4 = 0x0;
    }
    else
    {
      uVar5 = 0x1040;
      puVar3 = (undefined4 *)
               UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                         (pvVar2,in_DX,*(undefined2 *)((int)param_1 + 0x6),0x0,0x6340002
                          ,iStack_4);
    }
    uStack_a = (undefined4 *)CONCAT22(uVar4,puVar3);
    if (iStack_6 == 0x0)
    {
      puVar1 = (undefined2 *)((int)*uStack_a + 0x74);
      (*(code *)*puVar1)(uVar5,puVar3,uVar4);
    }
    else
    {
      init_word_pair(&stack0xffee,unaff_SS,0x1);
      puVar1 = (undefined2 *)((int)*uStack_a + 0x6c);
      (*(code *)*puVar1)(0x1008,puVar3,uVar4,&stack0xffee);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Applies colony-wide settings and performs a primary system context swap. Equivalent
// to 1038:AF40 but with a different flag (0x20).

void * __stdcall16far UI_Colony_Apply_Settings_and_Swap_Context_df5c(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)*(undefined4 *)((int)this_ptr + 0x92);
  UI_System_Context_Swap_Logic((void *)pvVar2,(int)((ulong)pvVar2 >> 0x10));
  pvVar2 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                     (_p_UISubDialogTable,*(uint16_t *)((int)this_ptr + 0x8),0x20);
  return pvVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Orchestrates the confirmation flow for abandoning a colony. Checks runtime
// constraints, shows a confirmation dialog (string 0x7D5), and triggers abandonment via
// a virtual call.

u16 __stdcall16far UI_Colony_Confirm_Abandonment_Logic_df86(void *this_ptr)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  u16 uVar6;
  int iVar7;
  ushort uVar8;
  void *pvVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  long lVar12;
  void *pvVar13;
  undefined2 in_stack_0000ffe6;
  undefined4 uStack_16;
  
  lVar12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  iVar7 = (int)((ulong)lVar12 >> 0x10);
  uVar1 = *(undefined4 *)((int)lVar12 + 0x68);
  uVar10 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar9 = (void *)this_ptr;
  iVar3 = win16_Check_Min_Runtime_Ticks_Logic();
  if (iVar3 != 0x0)
  {
    UI_System_Context_Swap_Logic
              ((void *)(void *)*(undefined4 *)((int)pvVar9 + 0x92),
               (int)((ulong)*(undefined4 *)((int)pvVar9 + 0x92) >> 0x10));
    pvVar13 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                        (_p_UISubDialogTable,*(uint16_t *)((int)pvVar9 + 0x8),0x1e);
    return (u16)(void *)pvVar13;
  }
  pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x7d5);
  uVar11 = 0x1000;
  iVar3 = iVar7;
  puVar5 = allocate_memory(CONCAT22(in_stack_0000ffe6,0xb4));
  if (iVar3 == 0x0 && puVar5 == NULL)
  {
    puVar5 = NULL;
    uVar8 = 0x0;
  }
  else
  {
    uVar11 = 0x1040;
    uVar8 = UI_SubDialog_Type8DDC_ctor_init_8478
                      (puVar5,iVar3,0x20,(int)uVar1,(int)((ulong)uVar1 >> 0x10),pcVar4,
                       iVar7,*(undefined2 *)((int)pvVar9 + 0x6));
  }
  uStack_16 = (undefined4 *)CONCAT22(uVar8,puVar5);
  puVar2 = (undefined2 *)((int)*uStack_16 + 0x74);
  uVar6 = (*(code *)*puVar2)(uVar11,puVar5,uVar8);
  return uVar6;
}



// Batch resets internal state flags for 10 primary colony components and synchronizes
// their underlying simulator entities.

void __stdcall16far UI_Colony_Batch_Reset_Component_Flags_e03e(void *this_ptr)
{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uStack_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar3 = get_const_10_stub();
  for (uStack_6 = 0x1; uStack_6 <= iVar3; uStack_6 += 0x1)
  {
    UI_System_Reset_Flags_and_Get_Entry_Ptr((int)*(undefined4 *)((int)this_ptr + 0x92));
    uVar2 = *(undefined4 *)((int)this_ptr + 0x96);
    uVar6 = (undefined2)((ulong)uVar2 >> 0x10);
    iVar4 = (int)uVar2;
    if (*(long *)(iVar4 + uStack_6 * 0x4) != 0x0)
    {
      pvVar1 = (void *)*(undefined4 *)(iVar4 + uStack_6 * 0x4);
      UI_Complex_Control_Enable_Window_9234
                ((void *)pvVar1,(ushort)((ulong)pvVar1 >> 0x10));
    }
  }
  return;
}



void * __stdcall16far
UI_SubDialog_TypeE0D4_dtor_Scalar_Deleting_e0ae(void *param_1,byte param_2)
{
  UI_SubDialog_TypeE0D4_dtor_Internal_d7d0(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for sub-dialog Type 0xE264 (vtable 0xE264). Base dialog ID 0xFC2.

void * __stdcall16far
UI_SubDialog_TypeE264_ctor_init_e140
          (void *this_ptr,u32 dlg_template_id,u16 arg3,u16 arg4,u16 parent_hwnd)
{
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,dlg_template_id,0xfc2,parent_hwnd);
  *(undefined2 *)this_ptr = 0xe264;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1038;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeE264_dtor_Internal_e16e(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xe264;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



// Show logic for dialog Type 0xE264. Configures a default selection (radio button
// 0x1807) and centers the window. Likely a speed or difficulty selector.

void __stdcall16far UI_SubDialog_TypeE264_Show_Logic_e19a(void *this_ptr)
{
  void *this_ptr_00;
  int x;
  
  this_ptr_00 = (void *)this_ptr;
  x = (int)((ulong)this_ptr >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  CheckRadioButton16(0x1807,0x1807,0x1807,*(HWND16 *)((int)this_ptr_00 + 0x6));
  UI_Window_Move_or_Center_826c(this_ptr_00,x,0xc8);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  return;
}



// Selection handler for dialog Type 0xE264. Maps radio buttons 0x1806/0x1807 to main UI
// messages 0x12F/0x130 and closes the dialog.

void __stdcall16far
UI_SubDialog_TypeE264_On_Select_Logic_e1dc(void *this_ptr,int selected)
{
  uint16_t uVar1;
  void *pvVar2;
  undefined2 unaff_BP;
  undefined2 uVar3;
  ushort w_param;
  undefined *l_param;
  
  pvVar2 = (void *)this_ptr;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  if (selected != 0x0)
  {
    uVar1 = IsDlgButtonChecked16(0x1807,*(HWND16 *)((int)pvVar2 + 0x6));
    if (uVar1 == 0x0)
    {
      uVar1 = IsDlgButtonChecked16(0x1806,*(HWND16 *)((int)pvVar2 + 0x6));
      if (uVar1 == 0x0) goto LAB_1038_e229;
      l_param = (undefined *)CONCAT22(unaff_BP,g_ParentHWND);
      w_param = 0x130;
    }
    else
    {
      l_param = (undefined *)CONCAT22(unaff_BP,g_ParentHWND);
      w_param = 0x12f;
    }
    SendMessage16(0x0,0x0,w_param,(long)l_param);
  }
LAB_1038_e229:
  DestroyWindow16(*(HWND16 *)((int)pvVar2 + 0x6));
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1038_e23a(void)
{
  return;
}



void * __stdcall16far
UI_SubDialog_TypeE264_dtor_Scalar_Deleting_e23e(void *param_1,byte param_2)
{
  UI_SubDialog_TypeE264_dtor_Internal_e16e(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for sub-dialog Type 0xE62E (vtable 0xE62E). Base ID 0x1C3.

void * __stdcall16far
UI_SubDialog_TypeE62E_ctor_init_e2d0(void *this_ptr,u16 parent_hwnd)
{
  undefined2 uVar1;
  
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,0x1c30000,parent_hwnd);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined4 *)((int)(void *)this_ptr + 0x8e) = 0x0;
  *(undefined2 *)this_ptr = 0xe62e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeE62E_dtor_Internal_e308(void *this_ptr)
{
  astruct_89 *uVar1;
  undefined2 uVar2;
  void *unaff_CS;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_89 *)this_ptr;
  *(undefined2 *)this_ptr = 0xe62e;
  uVar1->field2_0x2 = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  free_if_not_null((void *)uVar1->field140_0x8e);
  UI_SubDialog_Base_dtor_Internal_782c(uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes and positions the system summary dialog, creating multiple complex
// controls and enabling them.

void __stdcall16far UI_System_Summary_Dialog_Initialize_and_Layout_e348(void *param_1)
{
  void *pvVar1;
  void *pvVar2;
  undefined *puVar3;
  int iVar4;
  undefined2 unaff_SI;
  undefined2 uVar5;
  undefined2 unaff_SS;
  void *this_ptr;
  int x;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 *local_1a;
  undefined *puStack_18;
  int local_a;
  int local_8;
  long local_6;
  
  this_ptr = (void *)param_1;
  x = (int)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  local_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  puVar3 = (undefined *)((ulong)local_6 >> 0x10);
  local_8 = get_const_3_stub();
  if (_g_AllocatedBlock_Offset == NULL)
  {
    local_1a = init_memory_allocator();
  }
  else
  {
    local_1a = (undefined2 *)g_AllocatedBlock_Offset;
    puVar3 = g_AllocatedBlock_Segment;
  }
  puStack_18 = puVar3;
  pvVar2 = alloc_with_hooks((ulong)(uint)((local_8 + 0x2) * 0x4),0x1,local_1a);
  *(undefined2 *)((int)this_ptr + 0x8e) = pvVar2;
  *(undefined2 *)((int)this_ptr + 0x90) = puVar3;
  for (local_a = 0x1; local_a <= local_8; local_a += 0x1)
  {
    local_1a = UI_System_Get_Flag_Entry_Category2_Ptr((int)local_6);
    local_22 = *local_1a;
    local_20 = local_1a[0x1];
    local_1e = 0x1;
    local_1c = 0x1;
    puStack_18 = puVar3;
    MapDialogRect16((undefined2 *)CONCAT22(unaff_SS,&local_22),
                    *(HWND16 *)((int)this_ptr + 0x6));
    pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x42));
    if (puVar3 == NULL && pvVar2 == NULL)
    {
      *(undefined4 *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + local_a * 0x4) = 0x0;
      puVar3 = NULL;
    }
    else
    {
      puVar3 = UI_Complex_Control_ctor
                         (pvVar2,puVar3,0x0,local_20,local_22,0x101,0x100,0xff,
                          local_1a[0x2],*(undefined2 *)((int)this_ptr + 0x6));
      uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10);
      iVar4 = (int)*(undefined4 *)((int)this_ptr + 0x8e);
      *(undefined2 *)(iVar4 + local_a * 0x4) = pvVar2;
      *(undefined2 *)(iVar4 + local_a * 0x4 + 0x2) = puVar3;
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10);
    iVar4 = (int)*(undefined4 *)((int)this_ptr + 0x8e);
    if (*(long *)(iVar4 + local_a * 0x4) != 0x0)
    {
      pvVar1 = (void *)*(undefined4 *)(iVar4 + local_a * 0x4);
      UI_Complex_Control_Enable_Window_9234
                ((void *)pvVar1,(ushort)((ulong)pvVar1 >> 0x10));
    }
  }
  UI_Window_Move_or_Center_826c(this_ptr,x,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  return;
}
