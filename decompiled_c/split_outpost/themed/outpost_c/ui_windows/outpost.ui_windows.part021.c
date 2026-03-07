/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 21/54
 * Original lines (combined): 61059-61949
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Core dispatch logic for MouseDown events in a UI view. Checks child components (1-4)
// for hit matches and triggers corresponding actions like viewport offsets, entity
// selection, or building management calls.

u16 __stdcall16far
UI_View_Dispatch_MouseDown_Actions_58ce(void *this_ptr,int16_t x,int16_t y,byte flags)
{
  long context;
  undefined2 *puVar1;
  POINT16 pt;
  POINT16 pt_00;
  POINT16 pt_01;
  void *pvVar2;
  u16 uVar3;
  BOOL16 BVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int unaff_SS;
  void *pvVar10;
  long context_00;
  ushort w_param;
  undefined2 in_stack_0000ffcc;
  int iStack_2e;
  void *pvStack_1e;
  undefined2 uStack_1c;
  int iStack_1a;
  int local_18 [0x2];
  int iStack_14;
  long lStack_12;
  void *pvStack_e;
  undefined2 uStack_c;
  uint uStack_a;
  uint uStack_8;
  int16_t local_6;
  int16_t iStack_4;
  
  local_6 = y;
  iStack_4 = x;
  uStack_8 = flags & 0x8;
  uStack_a = flags & 0x4;
  uVar8 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar7 = (void *)this_ptr;
  uVar3 = UI_View_Get_Child_State_Property_64d4
                    ((void *)*(undefined4 *)((int)pvVar7 + 0xf6),0x2);
  if (uVar3 != 0x0)
  {
    pvVar10 = UI_View_Get_Child_Target_Logic_FarPtr_6498
                        ((void *)*(undefined4 *)((int)pvVar7 + 0xf6),0x2);
    uStack_c = (undefined2)((ulong)pvVar10 >> 0x10);
    pvStack_e = (void *)pvVar10;
    pt.y = iStack_4;
    pt.x = local_6;
    BVar4 = PtInRect(pt,pvVar10);
    if (BVar4 != 0x0)
    {
      w_param = 0x68;
      goto LAB_1020_5936;
    }
  }
  uVar3 = UI_View_Get_Child_State_Property_64d4
                    ((void *)*(undefined4 *)((int)pvVar7 + 0xf6),0x4);
  if (uVar3 != 0x0)
  {
    pvVar10 = UI_View_Get_Child_Target_Logic_FarPtr_6498
                        ((void *)*(undefined4 *)((int)pvVar7 + 0xf6),0x4);
    uStack_c = (undefined2)((ulong)pvVar10 >> 0x10);
    pvStack_e = (void *)pvVar10;
    pt_00.y = iStack_4;
    pt_00.x = local_6;
    BVar4 = PtInRect(pt_00,pvVar10);
    if (BVar4 != 0x0)
    {
      lStack_12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
      if (*(int *)((int)lStack_12 + 0x72) == 0x0)
      {
        w_param = 0xf6;
      }
      else
      {
        *(undefined2 *)((int)pvVar7 + 0x116) = 0x1;
        if (this_ptr == NULL)
        {
          iVar5 = 0x0;
          uVar8 = 0x0;
        }
        else
        {
          iVar5 = (int)pvVar7 + 0xe2;
        }
        puVar1 = (undefined2 *)((int)*_p_UIPanelContainer + 0x4);
        (*(code *)*puVar1)(0x1010,(undefined4 *)_p_UIPanelContainer,
                           (int)((ulong)_p_UIPanelContainer >> 0x10),0x10,iVar5,uVar8);
        init_word_pair(local_18,unaff_SS,0x1);
        piVar6 = local_18;
        media_play_from_resource_ptr_wrapper
                  ((undefined4 *)_p_UIPanelContainer,
                   (void *)((ulong)_p_UIPanelContainer >> 0x10));
        if (piVar6 != NULL)
        {
          return 0x1;
        }
        w_param = 0xf6;
      }
LAB_1020_5936:
      PostMessage16(0x0,0x0,w_param,(long)CONCAT22(in_stack_0000ffcc,g_ParentHWND));
      return 0x1;
    }
  }
  uVar3 = UI_View_Get_Child_State_Property_64d4
                    ((void *)*(undefined4 *)((int)pvVar7 + 0xf6),0x1);
  if (uVar3 != 0x0)
  {
    pvVar10 = UI_View_Get_Child_Target_Logic_FarPtr_6498
                        ((void *)*(undefined4 *)((int)pvVar7 + 0xf6),0x1);
    for (iStack_1a = 0x0; iStack_1a < 0x4; iStack_1a += 0x1)
    {
      pvStack_1e = (void *)pvVar10;
      uStack_1c = (undefined2)((ulong)pvVar10 >> 0x10);
      pt_01.y = iStack_4;
      pt_01.x = local_6;
      BVar4 = PtInRect(pt_01,(void *)CONCAT22(uStack_1c,
                                              (void *)(iStack_1a * 0x8 + (int)pvStack_1e
                                                      )));
      if (BVar4 != 0x0)
      {
        local_18[0x0] = 0x0;
        iStack_14 = 0x0;
        if (iStack_1a == 0x0)
        {
          iStack_14 = (-(uint)(uStack_a == 0x0) & 0x4) - 0x5;
        }
        else if (iStack_1a == 0x1)
        {
          iStack_14 = (-(uint)(uStack_a == 0x0) & 0xfffc) + 0x5;
        }
        else if (iStack_1a == 0x2)
        {
          local_18[0x0] = (-(uint)(uStack_a == 0x0) & 0x4) - 0x5;
        }
        else if (iStack_1a == 0x3)
        {
          local_18[0x0] = (-(uint)(uStack_a == 0x0) & 0xfffc) + 0x5;
        }
        UI_VrMode_PopupMenu_Update_Viewport_Offset_2a94
                  ((void *)*(undefined4 *)((int)pvVar7 + 0xce),
                   CONCAT22(local_18[0x0],iStack_14));
        return 0x1;
      }
    }
  }
  uVar3 = UI_View_Get_Child_State_Property_64d4
                    ((void *)*(undefined4 *)((int)pvVar7 + 0xf6),0x3);
  if (uVar3 != 0x0)
  {
    pvVar10 = (void *)UI_HitTest_Entities_in_Selected_Construction_Bitmap_5856
                                (this_ptr,(int16_t *)CONCAT22(unaff_SS,&local_6));
    uVar9 = (undefined2)((ulong)pvVar10 >> 0x10);
    pvVar2 = (void *)pvVar10;
    if (pvVar10 != NULL)
    {
      if (((uStack_8 == 0x0) || (uStack_a == 0x0)) && (uStack_a == 0x0))
      {
        local_18[0x0] = 0x1;
      }
      else
      {
        local_18[0x0] = 0x2;
      }
      iStack_14 = *(int *)((int)pvVar2 + 0xc);
      lStack_12 = CONCAT22(lStack_12._2_2_,*(undefined2 *)((int)pvVar2 + 0xe));
      if ((*(int *)((int)pvVar2 + 0x2e) == 0xb) ||
         (*(int *)((int)pvVar2 + 0x2e) == 0x37))
      {
        uVar9 = (undefined2)((ulong)*(undefined4 *)((int)pvVar7 + 0xfa) >> 0x10);
        iVar5 = (int)*(undefined4 *)((int)pvVar7 + 0xfa);
        context = *(long *)(iVar5 + 0x20);
        iStack_2e = (int)context;
        if (*(int *)(iVar5 + 0x22) != 0x0 || iStack_2e != 0x0)
        {
          zero_init_struct_6bytes(&stack0xffcc);
          UI_Main_View_Controller_Offset_and_Pack_3Word_Logic
                    (context,(long)CONCAT22(unaff_SS,&stack0xffcc),(int)lStack_12,
                     iStack_14);
          context_00 = Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x2f);
          UI_Dispatch_Fleet_Update_by_Entity_ID_Logic
                    (context_00,(long)CONCAT22(unaff_SS,&stack0xffcc),
                     *(long *)(iStack_2e + 0x3c));
        }
      }
      iVar5 = UI_Construction_Manager_Dispatch_Action_at_Coords_Logic
                        ((int)*(undefined4 *)((int)pvVar7 + 0xfa),
                         (int)((ulong)*(undefined4 *)((int)pvVar7 + 0xfa) >> 0x10),
                         local_18[0x0],(int)lStack_12,iStack_14);
      if (iVar5 != 0x0)
      {
        return 0x1;
      }
      uVar3 = UI_Dispatch_Entity_Action_or_Notify_5d56(this_ptr,pvVar10);
      if (uVar3 != 0x0)
      {
        return 0x1;
      }
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles right-click events for a UI view by performing hit testing and spawning a
// context-sensitive popup menu. Plays associated media resources based on selection.

u16 __stdcall16far
UI_View_Handle_RightClick_PopupMenu_5bf2(void *this_ptr,int16_t x,int16_t y)
{
  POINT16 pt;
  u16 uVar1;
  BOOL16 BVar2;
  HMENU16 HVar3;
  int iVar4;
  astruct_365 *uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  long lVar7;
  undefined2 in_stack_0000ffec;
  int16_t local_10;
  int16_t iStack_e;
  int iStack_c;
  undefined4 uStack_a;
  int16_t local_6;
  int16_t iStack_4;
  
  local_6 = y;
  iStack_4 = x;
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_365 *)this_ptr;
  uVar1 = UI_View_Get_Child_State_Property_64d4(uVar5->field245_0xf6,0x2);
  if (uVar1 != 0x0)
  {
    uStack_a = UI_View_Get_Child_Target_Logic_FarPtr_6498(uVar5->field245_0xf6,0x2);
    pt.y = iStack_4;
    pt.x = local_6;
    BVar2 = PtInRect(pt,uStack_a);
    if (BVar2 != 0x0)
    {
      PostMessage16(0x0,0x0,0x131,(long)CONCAT22(in_stack_0000ffec,g_ParentHWND));
      return 0x1;
    }
  }
  uVar1 = UI_View_Get_Child_State_Property_64d4(uVar5->field245_0xf6,0x3);
  if (uVar1 == 0x0)
  {
    return 0x0;
  }
  lVar7 = UI_HitTest_Entities_in_Selected_Construction_Bitmap_5856
                    (this_ptr,(int16_t *)CONCAT22(unaff_SS,&local_6));
  iVar4 = (int)((ulong)lVar7 >> 0x10);
  uVar5->field259_0x108 = (int)lVar7;
  uVar5->field260_0x10a = iVar4;
  if (iVar4 == 0x0 && uVar5->field259_0x108 == 0x0)
  {
    return 0x0;
  }
  if (uVar5->field258_0x106 == 0x0)
  {
    HVar3 = LoadMenu16(s_TILEMENU_1050_43f0,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
    uVar5->field258_0x106 = HVar3;
    if (HVar3 == 0x0)
    {
      return 0x1;
    }
    HVar3 = GetSubMenu16(0x0,uVar5->field258_0x106);
    uVar5->field258_0x106 = HVar3;
    if (HVar3 == 0x0)
    {
      return 0x1;
    }
  }
  uStack_a._0_2_ = (void *)*(int *)((int)*(undefined4 *)&uVar5->field259_0x108 + 0x2e);
  iStack_c = 0x0;
  if ((void *)uStack_a == (void *)0x42)
  {
    iStack_c = 0xc9;
  }
  else if (*(int *)((int)(void *)uStack_a * 0x2 + 0x42d2) == 0x0)
  {
    iStack_c = 0xc8;
  }
  if (iStack_c != 0x0)
  {
    media_play_from_full_resource_ptr_logic
              ((void *)_p_UIPanelContainer,CONCAT22(iStack_c,0x1));
  }
  local_10 = y;
  iStack_e = x;
  ClientToScreen16((int16_t *)CONCAT22(unaff_SS,&local_10),uVar5->field8_0x8);
  TrackPopupMenu16(NULL,uVar5->field8_0x8,0x0,iStack_e,local_10,0x0,
                   uVar5->field258_0x106);
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes MouseUp events by releasing GDI capture, restoring the cursor, and
// notifying the building manager to release the active object if necessary.

void __stdcall16far UI_View_Handle_MouseUp_Reset_State_5de8(void *this_ptr,u16 x,u16 y)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  long context;
  long lVar4;
  undefined2 uStack_12;
  char cStack_f;
  u16 local_6;
  u16 uStack_4;
  
  ReleaseCapture16();
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  SetCursor16(*(HCURSOR16 *)(iVar2 + 0xee));
  *(undefined2 *)(iVar2 + 0xee) = 0x0;
  *(undefined2 *)(iVar2 + 0xf4) = 0x1;
  local_6 = y;
  uStack_4 = x;
  context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x47);
  lVar4 = UI_HitTest_Entities_in_Selected_Construction_Bitmap_5856
                    (this_ptr,(u16 *)CONCAT22(unaff_SS,&local_6));
  iVar1 = (int)((ulong)lVar4 >> 0x10);
  iVar2 = (int)lVar4;
  if (iVar1 != 0x0 || iVar2 != 0x0)
  {
    uVar3 = *(undefined2 *)(iVar2 + 0x44);
    cStack_f = (char)((ulong)*(undefined4 *)(iVar2 + 0x42) >> 0x18);
    if (cStack_f == '\x05')
    {
      uStack_12 = (undefined2)*(undefined4 *)(iVar2 + 0x42);
      goto LAB_1020_5e62;
    }
  }
  uStack_12 = 0x0;
  uVar3 = 0x0;
LAB_1020_5e62:
  UI_Building_Manager_Release_Active_Object(context,CONCAT22(uVar3,uStack_12));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes complex MouseDown interactions, particularly for construction commands.
// Handles error states (like lack of resources) by displaying specialized dialogs or
// messages. Initiates entity commands in the construction manager.

void __stdcall16far
UI_View_Handle_Complex_MouseDown_Interaction_5e76(void *this_ptr,u16 x,u16 y)
{
  undefined2 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int unaff_SS;
  long lVar11;
  undefined2 in_stack_0000fd56;
  int local_1aa [0x80];
  undefined4 local_aa [0x20];
  undefined4 uStack_2a;
  undefined4 *puStack_26;
  uint uStack_24;
  undefined1 local_22 [0x10];
  uint uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  long lStack_a;
  u16 local_6;
  u16 uStack_4;
  
  ReleaseCapture16();
  uVar9 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar8 = (int)this_ptr;
  SetCursor16(*(HCURSOR16 *)(iVar8 + 0xee));
  *(undefined2 *)(iVar8 + 0xee) = 0x0;
  *(undefined2 *)(iVar8 + 0xf4) = 0x1;
  local_6 = y;
  uStack_4 = x;
  lStack_a = UI_HitTest_Entities_in_Selected_Construction_Bitmap_5856
                       (this_ptr,(u16 *)CONCAT22(unaff_SS,&local_6));
  uVar5 = (uint)((ulong)lStack_a >> 0x10);
  uVar2 = (uint)lStack_a;
  uVar6 = uVar5 | uVar2;
  if (uVar6 == 0x0) goto LAB_1020_6176;
  uStack_c = *(undefined2 *)(uVar2 + 0xc);
  uStack_e = *(undefined2 *)(uVar2 + 0xe);
  uStack_10 = 0x0;
  uStack_12 = UI_Construction_Manager_Submit_Entity_Command_Logic
                        (*(undefined4 *)(iVar8 + 0xfa),0x0,uStack_e,uStack_c,
                         *(undefined2 *)(iVar8 + 0x10c));
  if (uStack_12 == 0x6b2) goto LAB_1020_6176;
  if (uStack_12 == 0x6b8)
  {
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000fd56,0xb4));
    uStack_2a = (void *)CONCAT22(uVar6,pvVar3);
    uVar6 |= (uint)pvVar3;
    if (uVar6 == 0x0)
    {
      puVar4 = NULL;
      uVar6 = 0x0;
    }
    else
    {
      puVar4 = (undefined4 *)UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520();
    }
    _puStack_26 = (undefined4 *)CONCAT22(uVar6,puVar4);
LAB_1020_5f84:
    init_word_pair(local_22,unaff_SS,0x1);
    uVar6 = (uint)((ulong)_puStack_26 >> 0x10);
    puVar4 = (undefined4 *)_puStack_26;
  }
  else
  {
    if (uStack_12 == 0x6b4)
    {
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000fd56,0xb4));
      uStack_2a = (void *)CONCAT22(uVar6,pvVar3);
      uVar6 |= (uint)pvVar3;
      if (uVar6 == 0x0)
      {
        puVar4 = NULL;
        uVar6 = 0x0;
      }
      else
      {
        puVar4 = (undefined4 *)UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520();
      }
      _puStack_26 = (undefined4 *)CONCAT22(uVar6,puVar4);
      goto LAB_1020_5f84;
    }
    if (uStack_12 == 0x6b6)
    {
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_aa,0x3ff)
                 ,CONCAT22(0x57b,unaff_SS));
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),
                 CONCAT22(local_1aa,0x3ff),CONCAT22(0x6b6,unaff_SS));
      sprintf_wrapper();
      uVar10 = 0x1000;
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000fd56,0xb4));
      uStack_2a = (void *)CONCAT22(uVar6,pvVar3);
      if (uVar6 == 0x0 && pvVar3 == NULL)
      {
        puVar4 = NULL;
        uVar7 = 0x0;
      }
      else
      {
        puVar4 = local_aa;
        uVar10 = 0x1040;
        uVar7 = UI_SubDialog_Type8DDC_ctor_init_8478
                          (uStack_2a,0x40,puVar4,unaff_SS,&stack0xfd56,unaff_SS,
                           g_ParentHWND);
      }
      _puStack_26 = (undefined4 *)CONCAT22(uVar7,puVar4);
LAB_1020_6027:
      puVar1 = (undefined2 *)((int)*puVar4 + 0x74);
      (*(code *)*puVar1)(uVar10,puVar4,uVar7);
      goto LAB_1020_6176;
    }
    if (uStack_12 < 0x6a7)
    {
      if (((*(int *)(iVar8 + 0x10c) == 0x78) || (*(int *)(iVar8 + 0x10c) == 0x74)) &&
         (lVar11 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x5),
         *(int *)((int)lVar11 + 0xa) == 0x0))
      {
        return;
      }
      if ((((*(int *)(iVar8 + 0x10c) == 0x6c) || (*(int *)(iVar8 + 0x10c) == 0x6d)) ||
          ((*(int *)(iVar8 + 0x10c) == 0x31 || (*(int *)(iVar8 + 0x10c) == 0x32)))) &&
         (lVar11 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3a),
         *(int *)((int)lVar11 + 0xa) == 0x0))
      {
        return;
      }
      UI_View_Trigger_SubComponent_Update_v1_68de((void *)*(undefined4 *)(iVar8 + 0xfe))
      ;
      goto LAB_1020_6176;
    }
    if (0x6b1 < uStack_12)
    {
      uVar10 = 0x1000;
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000fd56,0xb4));
      uStack_2a = (void *)CONCAT22(uVar6,pvVar3);
      uVar7 = uVar6 | (uint)pvVar3;
      if (uVar7 == 0x0)
      {
        puVar4 = NULL;
        uVar7 = 0x0;
      }
      else
      {
        uVar10 = 0x1040;
        puVar4 = (undefined4 *)UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520();
      }
      goto LAB_1020_6027;
    }
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000fd56,0xb4));
    uStack_2a = (void *)CONCAT22(uVar6,pvVar3);
    uVar6 |= (uint)pvVar3;
    if (uVar6 == 0x0)
    {
      puVar4 = NULL;
      uVar6 = 0x0;
    }
    else
    {
      puVar4 = (undefined4 *)UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520();
    }
    local_1aa[0x0] = uStack_12 - 0x608;
    init_word_pair(local_aa,unaff_SS,0x1);
  }
  puVar1 = (undefined2 *)((int)*puVar4 + 0x6c);
  (*(code *)*puVar1)();
LAB_1020_6176:
  *(undefined2 *)(iVar8 + 0x10c) = 0x0;
  return;
}



// Initiates mouse capture for a UI component, saving the previous cursor and updating
// internal state to track the drag operation.

void __stdcall16far UI_View_Initiate_Mouse_Capture_6184(void *this_ptr,u16 capture_type)
{
  HCURSOR16 HVar1;
  astruct_364 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_364 *)this_ptr;
  if (uVar2->field241_0xf4 == 0x1)
  {
    HVar1 = SetCursor16(uVar2->field238_0xf0);
    uVar2->field237_0xee = HVar1;
    uVar2->field264_0x10c = capture_type;
    SetCapture16(uVar2->field8_0x8);
    uVar2->field241_0xf4 = 0x2;
  }
  return;
}



void * UI_Lab_View_dtor_Wrapper_6208(undefined2 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)(void *)param_2 + -0xe2));
  pvVar1 = UI_Lab_View_dtor_Scalar_Deleting_6216(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far UI_Lab_View_dtor_Scalar_Deleting_6216(void *param_1,byte param_2)
{
  UI_Lab_View_dtor_Internal_Cleanup_logic_42f4(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Main initialization routine for the Research Lab view. Spawns its child item list
// components (Quad, Dual, Single) and sets up the primary vtable and resource links.

u16 * __stdcall16far
UI_Lab_View_Initialize_Items_and_Vtable_62e0(u16 *this_ptr,uint16_t segment,u16 res_id)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  u16 *puVar3;
  u16 uVar4;
  uint uVar5;
  u16 uVar6;
  void *pvVar7;
  long lVar8;
  undefined2 uVar9;
  uint16_t uVar10;
  undefined2 in_stack_0000ffee;
  
  pvVar7 = UI_SubComponent_Grid_ctor_init_921c((u16 *)CONCAT22(segment,this_ptr),res_id)
  ;
  uVar5 = (uint)((ulong)pvVar7 >> 0x10);
  (this_ptr + 0xa)[0x0] = 0x0;
  (this_ptr + 0xa)[0x1] = 0x0;
  (this_ptr + 0x16)[0x0] = 0x0;
  (this_ptr + 0x16)[0x1] = 0x0;
  *(u16 *)CONCAT22(segment,this_ptr) = 0x67c2;
  this_ptr[0x1] = 0x1020;
  memset_far(this_ptr + 0xc,segment,0x0);
  puVar3 = allocate_memory(CONCAT22(in_stack_0000ffee,0x3c));
  uVar5 |= (uint)puVar3;
  if (uVar5 == 0x0)
  {
    (this_ptr + 0xe)[0x0] = 0x0;
    (this_ptr + 0xe)[0x1] = 0x0;
  }
  else
  {
    puVar3 = UI_Lab_Item_Quad_ctor_init_87c2(puVar3);
    this_ptr[0xe] = (u16)puVar3;
    this_ptr[0xf] = uVar5;
  }
  puVar3 = allocate_memory(CONCAT22(in_stack_0000ffee,0x26));
  uVar5 |= (uint)puVar3;
  if (uVar5 == 0x0)
  {
    puVar3 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    puVar3 = UI_Lab_Item_Dual_ctor_init_8a9c(puVar3);
  }
  this_ptr[0x10] = (u16)puVar3;
  this_ptr[0x11] = uVar5;
  puVar3 = allocate_memory(CONCAT22(in_stack_0000ffee,0xbe));
  uVar5 |= (uint)puVar3;
  if (uVar5 == 0x0)
  {
    puVar3 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    puVar3 = UI_Lab_Item_Category_List_ctor_init_8eaa(puVar3);
  }
  this_ptr[0x12] = (u16)puVar3;
  this_ptr[0x13] = uVar5;
  puVar3 = allocate_memory(CONCAT22(in_stack_0000ffee,0x20));
  uVar5 |= (uint)puVar3;
  if (uVar5 == 0x0)
  {
    puVar3 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    puVar3 = UI_Lab_Item_Single_ctor_init(puVar3);
  }
  this_ptr[0x14] = (u16)puVar3;
  this_ptr[0x15] = uVar5;
  UI_View_Set_Child_State_and_Dirty_Logic_6746
            ((u16 *)CONCAT22(segment,this_ptr),0x1,0x4);
  lVar8 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  uVar6 = (u16)((ulong)lVar8 >> 0x10);
  this_ptr[0xa] = (u16)lVar8;
  this_ptr[0xb] = uVar6;
  uVar9 = 0x0;
  uVar4 = this_ptr[0xa];
  puVar2 = (undefined2 *)((int)**(undefined4 **)(this_ptr + 0xa) + 0x4);
  puVar3 = this_ptr;
  uVar10 = segment;
  (*(code *)*puVar2)();
  *(undefined4 *)(this_ptr + 0x3) = *(undefined4 *)(this_ptr + 0xa);
  puVar1 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(this_ptr + 0xa) + 0xa);
  puVar2 = (undefined2 *)((int)*puVar1 + 0x8);
  uVar4 = (*(code *)*puVar2)(0x1010,(undefined4 *)puVar1,(int)((ulong)puVar1 >> 0x10),
                             (u16 *)CONCAT22(segment,this_ptr + 0x5),uVar4,uVar6,uVar9,
                             puVar3,uVar10);
  this_ptr[0x9] = uVar4;
  this_ptr[0x8] = 0x1;
  lVar8 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  this_ptr[0x16] = (u16)lVar8;
  this_ptr[0x17] = (u16)((ulong)lVar8 >> 0x10);
  return this_ptr;
}



// Internal destructor for UI View components. Removes the item from its parent
// container and reverts vtable pointers.

void __stdcall16far UI_View_Internal_Cleanup_logic_6466(void *this_ptr)
{
  astruct_363 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_363 *)this_ptr;
  *(undefined2 *)this_ptr = 0x67c2;
  uVar1->field2_0x2 = 0x1020;
  if (uVar1->field19_0x14 != 0x0)
  {
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)uVar1->field19_0x14,(long)this_ptr);
  }
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4(this_ptr);
  return;
}



// Retrieves a target far pointer from a child component's internal structure (offset
// 8/10). Used to access specific data linked to a UI element.

void * __stdcall16far
UI_View_Get_Child_Target_Logic_FarPtr_6498(void *this_ptr,int child_index)
{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + child_index * 0x4 + 0x18) != 0x0)
  {
    uVar1 = *(undefined4 *)((int)(void *)this_ptr + child_index * 0x4 + 0x18);
    uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar2 = (int)uVar1;
    return (void *)CONCAT22(*(undefined2 *)(iVar2 + 0xa),
                            (void *)*(undefined2 *)(iVar2 + 0x8));
  }
  return NULL;
}



// Retrieves a state property (word at offset 4) from a child component's internal
// structure.

u16 __stdcall16far UI_View_Get_Child_State_Property_64d4(void *this_ptr,int child_index)
{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + child_index * 0x4 + 0x18) != 0x0)
  {
    uVar1 = *(undefined4 *)((int)(void *)this_ptr + child_index * 0x4 + 0x18);
    return *(u16 *)((int)uVar1 + 0x4);
  }
  return 0x0;
}



void __stdcall16far UI_Grid_Component_OnPaint_Logic_650c(void *param_1)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined1 local_28 [0x20];
  int local_8;
  undefined4 *local_6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  local_6 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x14) + 0xa);
  if ((*(int *)(iVar2 + 0x10) != 0x0) ||
     (*(int *)((int)*(undefined4 *)(iVar2 + 0x14) + 0x24) != 0x0))
  {
    UI_SubComponent_Grid_Draw_Logic_9364(param_1);
    if (*(long *)(iVar2 + 0x24) != 0x0)
    {
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x24) + 0x14);
      (*(code *)*puVar1)();
    }
  }
  local_8 = 0x0;
  do
  {
    if (*(long *)(iVar2 + 0x18 + local_8 * 0x4) != 0x0)
    {
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x18 + local_8 * 0x4) + 0x8)
      ;
      (*(code *)*puVar1)();
    }
    local_8 += 0x1;
  } while (local_8 < 0x5);
  BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_28),*(HWND16 *)(iVar2 + 0x4));
  puVar1 = (undefined2 *)((int)*local_6 + 0x4);
  (*(code *)*puVar1)(0x1538,(undefined4 *)local_6,(int)((ulong)local_6 >> 0x10),0x0,0x0,
                     iVar2 + 0xa,uVar3);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_28),*(HWND16 *)(iVar2 + 0x4));
  return;
}
