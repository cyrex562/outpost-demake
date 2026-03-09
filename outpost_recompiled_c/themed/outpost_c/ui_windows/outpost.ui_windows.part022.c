/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 22/54
 * Original lines (combined): 61950-62967
 * Boundaries: top-level declarations/definitions only
 */




// Coordinates state transitions for a UI view and its 5 primary children. Handles
// invalidation, property checks, and triggers child updates. Processes special window
// messages like 0x69 and 0xF0.

void __stdcall16far
UI_View_Handle_State_Change_Events_65cc(void *this_ptr,int event_type)
{
  undefined2 *puVar1;
  BOOL16 BVar2;
  u16 uVar3;
  int iVar4;
  void *pvVar5;
  undefined2 uVar6;
  HWND16 hwnd;
  undefined *puVar7;
  int iStack_4;
  
  pvVar5 = (void *)this_ptr;
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  if (event_type == 0x1)
  {
    *(undefined4 *)((int)pvVar5 + 0x14) = 0x0;
    return;
  }
  if (event_type == 0x2)
  {
    for (iStack_4 = 0x0; iStack_4 < 0x5; iStack_4 += 0x1)
    {
      iVar4 = iStack_4 * 0x4;
      if (*(int *)((int)pvVar5 + iVar4 + 0x1a) != 0x0 ||
          *(int *)((int)pvVar5 + iVar4 + 0x18) != 0x0)
      {
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)pvVar5 + iVar4 + 0x18) + 0x4)
        ;
        (*(code *)*puVar1)();
      }
    }
  }
  else if (((0x0 < event_type + -0x3) && (!SBORROW2(event_type + -0x3,0x1))) &&
          (event_type + -0x4 < 0x4))
  {
    puVar7 = g_ParentHWND;
    BVar2 = IsIconic16((HWND16)g_ParentHWND);
    if (BVar2 == 0x0)
    {
      hwnd = *(HWND16 *)((int)pvVar5 + 0x4);
      BVar2 = IsIconic16(hwnd);
      if ((BVar2 == 0x0) &&
         (*(int *)((int)*(undefined4 *)((int)pvVar5 + 0x14) + 0x24) != 0x0))
      {
        InvalidateRect16(0x0,(void *)((ulong)*(uint *)((int)pvVar5 + 0x4) << 0x10),hwnd)
        ;
        uVar3 = UI_View_Get_Child_State_Property_64d4(this_ptr,0x2);
        if (uVar3 == 0x0)
        {
          UI_View_Set_Child_State_and_Dirty_Logic_6746(this_ptr,0x1,0x2);
        }
        uVar3 = UI_View_Get_Child_State_Property_64d4(this_ptr,0x3);
        if (uVar3 == 0x0)
        {
          UI_View_Set_Child_State_and_Dirty_Logic_6746(this_ptr,0x1,0x3);
        }
        iVar4 = UI_Component_Get_Value_at_Offset_26_plus_10_Logic_maybe
                          (*(long *)((int)pvVar5 + 0x14));
        if (iVar4 == 0x0)
        {
          SendMessage16(0x0,0x0,0x69,CONCAT22(puVar7,*(undefined2 *)((int)pvVar5 + 0x4))
                       );
        }
        else
        {
          uVar3 = UI_View_Get_Child_State_Property_64d4(this_ptr,0x1);
          if (uVar3 == 0x0)
          {
            UI_View_Set_Child_State_and_Dirty_Logic_6746(this_ptr,0x1,0x1);
          }
        }
        SendMessage16(0x0,0x0,0xf0,CONCAT22(puVar7,*(undefined2 *)((int)pvVar5 + 0x4)));
        if (*(int *)((int)*(undefined4 *)((int)pvVar5 + 0x2c) + 0x7a) != 0x0)
        {
          *(undefined2 *)((int)*(undefined4 *)((int)pvVar5 + 0x2c) + 0x7a) = 0x0;
          SendMessage16(0x0,0x0,0x131,
                        CONCAT22(puVar7,*(undefined2 *)((int)pvVar5 + 0x4)));
          return;
        }
      }
    }
  }
  return;
}



// Sets the state of a child component and marks the view as dirty (offset 0x10).
// Optionally triggers a virtual update call if state is zeroed.

void __stdcall16far
UI_View_Set_Child_State_and_Dirty_Logic_6746
          (void *this_ptr,int new_state,int child_index)
{
  undefined2 *puVar1;
  astruct_362 *uVar3;
  undefined2 uVar2;
  
  if (child_index != 0x0)
  {
    uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
    uVar3 = (astruct_362 *)this_ptr;
    if (*(long *)(&uVar3[0x1].field_0x0 + child_index * 0x4) != 0x0)
    {
      *(int *)((int)*(undefined4 *)(&uVar3[0x1].field_0x0 + child_index * 0x4) + 0x4) =
           new_state;
      uVar3->field16_0x10 = 0x1;
      if (new_state == 0x0)
      {
        puVar1 = (undefined2 *)
                 ((int)**(undefined4 **)(&uVar3[0x1].field_0x0 + child_index * 0x4) +
                 0x14);
        (*(code *)*puVar1)();
      }
    }
  }
  return;
}



// Scalar deleting destructor for the UI view component.

void * __stdcall16far UI_View_dtor_Scalar_Deleting_679c(void *this_ptr,byte flags)
{
  UI_View_Internal_Cleanup_logic_6466(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the 'TP' popup menu. Initializes vtable 0x70E6, loads standard
// cursors, sets background brush, and registers the component class. Linked to
// 'TPPOPMENU' resource.

u32 * __stdcall16far
UI_TP_PopupMenu_ctor_init_logic_67ce
          (astruct_361 *param_1,u16 param_2,undefined4 param_3)
{
  HGDIOBJ16 HVar1;
  HCURSOR16 HVar2;
  astruct_361 *uVar3;
  u32 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  UI_Popup_View_Base_ctor_init_logic(param_1,0x43fa,0x1050,param_2,(int)param_3,uVar4);
  puVar3 = (u32 *)((ulong)param_1 >> 0x10);
  uVar3 = (astruct_361 *)param_1;
  uVar3->field233_0xf2 = 0x0;
  uVar3->field234_0xf6 = 0x0;
  *(undefined2 *)param_1 = 0x70e6;
  uVar3->field2_0x2 = 0x1020;
  strcpy_optimized((char *)CONCAT22(puVar3,&uVar3->field_0x5b),s_VrMode2_1050_4404);
  HVar1 = GetStockObject16(0x5);
  uVar3->field192_0xc6 = HVar1;
  HVar2 = LoadCursor16((void *)0x7f00,0x0);
  uVar3->field191_0xc4 = HVar2;
  uVar3->field171_0xac = 0x44c00000;
  uVar3->field193_0xc8 = (u16)((char *)s_575_bmp_1050_201f + 0x1);
  uVar3->field184_0xbc = *(u16 *)((int)param_3 + 0x8);
  uVar3->field194_0xca = param_2;
  UI_Container_Register_Class_Logic(uVar3);
  UI_TP_PopupMenu_Initialize_Children_and_State_6c3a(param_1);
  return puVar3;
}



void __stdcall16far UI_TP_PopupMenu_Cleanup_and_Update_Rect_687c(void *param_1)
{
  UI_Component_Update_Internal_Rect_from_Window_Bounds_7a50(param_1);
  UI_TP_PopupMenu_Cleanup_Resources_6bd2(param_1);
  return;
}



// Helper that triggers an update/refresh on a sub-component stored at offset 0xF6.

void __stdcall16far UI_View_Trigger_SubComponent_Update_v1_68de(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + 0xf6) != 0x0)
  {
    UI_Component_Invalidate_History_Rect_Logic_735a
              ((void *)*(undefined4 *)((int)(void *)this_ptr + 0xf6));
  }
  return;
}



// Performs a hit test against a sub-component's history rectangle (offset 0x16C) and
// triggers a virtual action (code 0xEF) if the point is within bounds. Involves Ship
// View logic.

void __stdcall16far
UI_View_Handle_Point_HitTest_and_Action_logic_68fc(void *this_ptr,int16_t y,int16_t x)
{
  int iVar1;
  BOOL16 BVar2;
  astruct_360 *uVar3;
  undefined2 uVar4;
  POINT16 PStack_6;
  void *puVar1;
  
  PStack_6.y = y;
  PStack_6.x = x;
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_360 *)this_ptr;
  iVar1 = UI_Ship_View_Is_History_NonEmpty_Logic(uVar3->field242_0xf2);
  if (iVar1 != 0x0)
  {
    BVar2 = PtInRect(PStack_6,(void *)CONCAT22((int)(uVar3->field242_0xf2 >> 0x10),
                                               (void *)((int)uVar3->field242_0xf2 +
                                                       0x16c)));
    if (BVar2 != 0x0)
    {
      puVar1 = (void *)((int)*(undefined4 *)this_ptr + 0x40);
      (**(code **)puVar1)(0x1538,this_ptr,0xef);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Main command processor for the view. Dispatches Help (0x6F), selection changes
// (0xEF), window messages (0x12A, 0x129, 300), and entity navigation (Next/Prev
// history). Navigates entity lists in the Ship View.

void __stdcall16far UI_View_Process_Command_Logic_694c(void *this_ptr,uint command_id)
{
  void *pvVar1;
  int iVar2;
  HWND16 HVar3;
  HWND16 in_DX;
  ushort w_param;
  undefined2 uVar4;
  undefined2 in_stack_0000fffa;
  
  if (command_id != 0x12b)
  {
    pvVar1 = (void *)this_ptr;
    uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
    if (command_id < 0x12c)
    {
      if (command_id == 0x6f)
      {
        pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                           ((void *)_p_GlobalResourceManager,
                            (int)((ulong)_p_GlobalResourceManager >> 0x10));
        WinHelp16(0x29,0x0,(void *)CONCAT22(pvVar1,(void *)0x1),in_DX);
        return;
      }
      if (command_id == 0xeb)
      {
        HVar3 = GetDlgItem16(0x1797,*(short *)((int)pvVar1 + 0x8));
        if (HVar3 != 0x0)
        {
LAB_1020_6a6f:
          UI_TP_PopupMenu_Refresh_Entity_History_Listbox_6e98(this_ptr);
          return;
        }
      }
      else if (command_id == 0xef)
      {
        UI_Ship_View_Get_Selected_Entity_ID_Logic(*(long *)((int)pvVar1 + 0xf2));
        UI_Call_Virtual_Refresh_maybe(pvVar1);
      }
      else if ((command_id != 0x129) && (command_id == 0x12a))
      {
        uVar4 = *(undefined2 *)((int)pvVar1 + 0x8);
        w_param = 0xf012;
LAB_1020_69c3:
        PostMessage16(0x0,0x0,w_param,CONCAT22(in_stack_0000fffa,uVar4));
        return;
      }
    }
    else if (command_id == 0xbb8)
    {
      HVar3 = GetDlgItem16(0x1797,*(short *)((int)pvVar1 + 0x8));
      if (HVar3 != 0x0)
      {
        DestroyWindow16(HVar3);
      }
      iVar2 = UI_Ship_View_Is_History_NonEmpty_Logic(*(long *)((int)pvVar1 + 0xf2));
      if (iVar2 != 0x0)
      {
        UI_Ship_View_Select_Previous_Entity_Logic(*(long *)((int)pvVar1 + 0xf2));
LAB_1020_6a0b:
        UI_Component_Invalidate_History_Rect_Logic_735a
                  ((void *)*(undefined4 *)((int)pvVar1 + 0xf6));
        return;
      }
    }
    else if (command_id < 0xbb9)
    {
      if (command_id == 0x12c)
      {
        uVar4 = *(undefined2 *)((int)pvVar1 + 0x8);
        w_param = 0xf020;
        goto LAB_1020_69c3;
      }
    }
    else if (command_id == 0xbb9)
    {
      HVar3 = GetDlgItem16(0x1797,*(short *)((int)pvVar1 + 0x8));
      if (HVar3 != 0x0)
      {
        DestroyWindow16(HVar3);
      }
      iVar2 = UI_Ship_View_Is_History_NonEmpty_Logic(*(long *)((int)pvVar1 + 0xf2));
      if (iVar2 != 0x0)
      {
        UI_Ship_View_Select_Next_Entity_Logic(*(long *)((int)pvVar1 + 0xf2));
        goto LAB_1020_6a0b;
      }
    }
    else if (command_id == 0xbba)
    {
      HVar3 = GetDlgItem16(0x1797,*(short *)((int)pvVar1 + 0x8));
      if (HVar3 != 0x0)
      {
        DestroyWindow16(HVar3);
        return;
      }
      goto LAB_1020_6a6f;
    }
  }
  return;
}



void __stdcall16far UI_Menu_Enable_Item_Logic_6b9a(u16 param_1,u16 param_2)
{
  if (param_1 != 0x0)
  {
    return;
  }
  EnableMenuItem16(0x400,0x0,param_2);
  return;
}



// Alternative update trigger for the sub-component at offset 0xF6, using a different
// internal refresh routine.

void __stdcall16far UI_View_Trigger_SubComponent_Update_v2_6bbc(void *this_ptr)
{
  UI_Ship_View_Entity_Display_OnPaint_Handler
            ((void *)*(undefined4 *)((int)this_ptr + 0xf6));
  return;
}



// Cleans up GDI icons, internal components, and resource-managed IDs specific to the TP
// popup menu.

void __stdcall16far UI_TP_PopupMenu_Cleanup_Resources_6bd2(void *this_ptr)
{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar3 = (int)this_ptr;
  DestroyIcon16(*(HICON16 *)(iVar3 + 0xc2));
  *(undefined2 *)(iVar3 + 0xc2) = 0x0;
  *(undefined2 *)(iVar3 + 0x8) = 0x0;
  puVar1 = (undefined4 *)*(int *)(iVar3 + 0xf6);
  iVar2 = *(int *)(iVar3 + 0xf8);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1538,puVar1,iVar2,0x1);
  }
  *(undefined4 *)(iVar3 + 0xf6) = 0x0;
  Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)*(undefined4 *)(iVar3 + 0xf2))
  ;
  *(undefined4 *)(iVar3 + 0xf2) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes child controls and internal state for the TP popup menu. Sets window
// position and triggers an update. Linked to Resource ID 4.

void __stdcall16far UI_TP_PopupMenu_Initialize_Children_and_State_6c3a(void *this_ptr)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  HICON16 HVar3;
  void *pvVar4;
  void *pvVar5;
  int16_t *piVar6;
  undefined2 uVar7;
  int extraout_DX;
  int iVar8;
  void *pvVar9;
  int *unaff_SS;
  long lVar10;
  void *pvVar11;
  int16_t *piVar12;
  void *this;
  undefined2 uVar13;
  int local_6;
  undefined1 local_4 [0x2];
  
  this = (void *)this_ptr;
  uVar13 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Element_Create_Window_Logic(this);
  lVar10 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x4);
  uVar7 = (undefined2)((ulong)lVar10 >> 0x10);
  *(undefined2 *)((int)this + 0xf2) = (int)lVar10;
  *(undefined2 *)((int)this + 0xf4) = uVar7;
  *(undefined2 *)((int)this + 0xe0) = *(undefined2 *)((int)this + 0xf2);
  *(undefined2 *)((int)this + 0xe2) = uVar7;
  HVar3 = LoadIcon16(s_TILEICON_1050_440c,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  *(HICON16 *)((int)this + 0xc2) = HVar3;
  uVar7 = (undefined2)*(undefined4 *)((int)this + 0xf2);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xf2) + 0x30);
  (*(code *)*puVar1)(0x1538,uVar7,
                     (int)((ulong)*(undefined4 *)((int)this + 0xf2) >> 0x10),HVar3);
  iVar8 = extraout_DX;
  UI_Ship_View_Get_Mapping_Logic
            (*(long *)((int)this + 0xf2),&local_6,unaff_SS,(int)local_4);
  pvVar4 = allocate_memory(CONCAT22(uVar7,0x42));
  pvVar9 = NULL;
  if (iVar8 != 0x0 || pvVar4 != NULL)
  {
    pvVar9 = UI_Complex_Control_ctor
                       (pvVar4,iVar8,0x0,(int)_local_6,(int)((ulong)_local_6 >> 0x10),
                        0x0,0x7d,0x7c,0xbb8,*(undefined2 *)((int)this + 0x8));
  }
  UI_Ship_View_Get_Mapping_Logic
            (*(long *)((int)this + 0xf2),&local_6,unaff_SS,(int)local_4);
  pvVar5 = allocate_memory(CONCAT22(uVar7,0x42));
  pvVar4 = NULL;
  if (pvVar9 != NULL || pvVar5 != NULL)
  {
    pvVar4 = UI_Complex_Control_ctor
                       (pvVar5,pvVar9,0x0,(int)_local_6,(int)((ulong)_local_6 >> 0x10),
                        0x0,0x7f,0x7e,0xbb9,*(undefined2 *)((int)this + 0x8));
  }
  UI_Ship_View_Get_Mapping_Logic
            (*(long *)((int)this + 0xf2),&local_6,unaff_SS,(int)local_4);
  pvVar5 = allocate_memory(CONCAT22(uVar7,0x42));
  pvVar9 = NULL;
  if (pvVar4 != NULL || pvVar5 != NULL)
  {
    pvVar9 = UI_Complex_Control_ctor
                       (pvVar5,pvVar4,0x0,(int)_local_6,(int)((ulong)_local_6 >> 0x10),
                        0x1b2,0x1b1,0x1b0,0xbba,*(undefined2 *)((int)this + 0x8));
  }
  pvVar4 = allocate_memory(CONCAT22(uVar7,0x22));
  if (pvVar9 == NULL && pvVar4 == NULL)
  {
    *(undefined4 *)((int)this + 0xf6) = 0x0;
  }
  else
  {
    pvVar11 = UI_TP_PopupMenu_Internal_SubComponent_ctor_717e
                        ((void *)CONCAT22(pvVar9,pvVar4),this_ptr);
    *(undefined2 *)((int)this + 0xf6) = (void *)pvVar11;
    *(undefined2 *)((int)this + 0xf8) = (int)((ulong)pvVar11 >> 0x10);
  }
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)((int)this + 0xf6);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xf2) + 0x10);
  piVar12 = (int16_t *)
            (*(code *)*puVar1)(0x1000,(int)*(undefined4 *)((int)this + 0xf2),
                               (int)((ulong)*(undefined4 *)((int)this + 0xf2) >> 0x10));
  uVar7 = (undefined2)((ulong)piVar12 >> 0x10);
  piVar6 = (int16_t *)piVar12;
  MoveWindow16(0x1,piVar6[0x3],piVar6[0x2],piVar6[0x1],*piVar12,
               *(HWND16 *)((int)this + 0x8));
  uVar2 = *(undefined4 *)this_ptr;
  puVar1 = (undefined2 *)((int)uVar2 + 0x94);
  (*(code *)*puVar1)(0x1538,this_ptr,0x0);
  puVar1 = (undefined2 *)((int)uVar2 + 0x10);
  (*(code *)*puVar1)(0x1538,this_ptr,0x1);
  UpdateWindow16(*(HWND16 *)((int)this + 0x8));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Rebuilds and populates the history/selection listbox (ID 0x1797) in the TP popup menu
// based on the Ship View entity history.

void __stdcall16far UI_TP_PopupMenu_Refresh_Entity_History_Listbox_6e98(void *this_ptr)
{
  HWND16 HVar1;
  undefined4 *puVar2;
  char *pcVar3;
  void *hwnd;
  ushort uVar4;
  void *pvVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  LRESULT pvVar7;
  ushort uVar8;
  int iVar9;
  HWND16 HVar10;
  undefined2 in_stack_0000ffde;
  undefined4 local_e;
  undefined1 local_a [0x4];
  int16_t iStack_6;
  int iStack_4;
  
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar5 = (void *)this_ptr;
  GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_a),
                  *(HWND16 *)((int)pvVar5 + 0x8));
  local_e = NULL;
  HVar1 = GetDlgItem16(0x1797,*(short *)((int)pvVar5 + 0x8));
  if (HVar1 != 0x0)
  {
    DestroyWindow16(HVar1);
  }
  UI_Ship_View_Extract_ID_List_from_History_Logic
            ((int)*(undefined4 *)((int)pvVar5 + 0xf2),
             (int)((ulong)*(undefined4 *)((int)pvVar5 + 0xf2) >> 0x10),&local_e,unaff_SS
            );
  if (local_e._2_2_ != 0x0 || (undefined4 *)local_e != NULL)
  {
    HVar1 = CreateWindow16(local_e,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c,0x1797,
                           *(HWND16 *)((int)pvVar5 + 0x8),iStack_4 + -0x19,iStack_6,0x0,
                           0x0,0x103,(void *)0x441540a0,(void *)0x44161050);
    if (HVar1 == 0x0)
    {
      puVar2 = (undefined4 *)local_e;
      if (local_e._2_2_ != 0x0 || puVar2 != NULL)
      {
        mem_free_indirect_logic((long)local_e);
        free_if_not_null(puVar2);
        return;
      }
    }
    else
    {
      pvVar7 = SendMessage16(0x0,0x0,0x0,CONCAT22(in_stack_0000ffde,HVar1));
      uVar4 = (ushort)((ulong)pvVar7 >> 0x10);
      if (*(int *)((undefined4 *)local_e + 0x1) == 0x0)
      {
        uVar8 = 0x0;
        HVar10 = HVar1;
        pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                           ((int)_p_GlobalResourceManager,
                            (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
        SendMessage16((HWND16)pcVar3,uVar4,uVar8,CONCAT22(in_stack_0000ffde,HVar10));
      }
      else
      {
        iVar9 = 0x0;
        while( true )
        {
          if (*(int *)((undefined4 *)local_e + 0x1) <= iVar9) break;
          uVar8 = 0x0;
          HVar10 = HVar1;
          pcVar3 = Lookup_Entity_Name_by_ID_Logic_bd80
                             (*(u16 *)((int)*local_e + iVar9 * 0x2));
          pvVar7 = SendMessage16((HWND16)pcVar3,uVar4,uVar8,
                                 CONCAT22(in_stack_0000ffde,HVar10));
          uVar4 = (ushort)((ulong)pvVar7 >> 0x10);
          iVar9 = HVar10 + 0x1;
        }
      }
      pvVar7 = SendMessage16(0x0,0x0,0x1,CONCAT22(in_stack_0000ffde,HVar1));
      uVar4 = (ushort)((ulong)pvVar7 >> 0x10);
      hwnd = (void *)pvVar7;
      uVar8 = 0xffff;
      HVar10 = HVar1;
      UI_Ship_View_Retrieve_Entity_Name_Logic(*(long *)((int)pvVar5 + 0xf2));
      pvVar7 = SendMessage16((HWND16)hwnd,uVar4,uVar8,CONCAT22(in_stack_0000ffde,HVar10)
                            );
      if ((pvVar7 != (LRESULT)0xffffffff) || (false))
      {
        SendMessage16(0x0,0x0,(ushort)(void *)pvVar7,CONCAT22(in_stack_0000ffde,HVar1));
        SendMessage16(0x0,0x0,(ushort)(void *)pvVar7,CONCAT22(in_stack_0000ffde,HVar1));
      }
      if (local_e != NULL)
      {
        puVar2 = (undefined4 *)local_e;
        mem_free_indirect_logic((long)local_e);
        free_if_not_null(puVar2);
      }
      ShowWindow16(0x1,HVar1);
      SetFocus16(HVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Provides text and background color settings for child controls in the TP popup menu,
// likely handled during WM_CTLCOLOR messages.

u16 __stdcall16far UI_TP_PopupMenu_Get_CtlColor_Logic_7070(void)
{
  HGDIOBJ16 HVar1;
  uint in_stack_0000000a;
  
  HVar1 = GetStockObject16(0x4);
  if (_PTR_DAT_1050_0000_1050_441e == 0x0)
  {
    _PTR_DAT_1050_0000_1050_441e = 0x1000002;
  }
  if (0x6 < in_stack_0000000a)
  {
    return 0x0;
  }
  SetTextColor16((HDC16)_PTR_DAT_1050_0000_1050_441e,
                 (COLORREF)((ulong)_PTR_DAT_1050_0000_1050_441e >> 0x10));
  SetBkColor16(0x0,0x100);
  return HVar1;
}



// Scalar deleting destructor for the TP popup menu component.

void * __stdcall16far
UI_TP_PopupMenu_dtor_Scalar_Deleting_70c0(void *this_ptr,byte flags)
{
  UI_Popup_View_Base_dtor_Internal_Cleanup_logic((u16 *)this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)this_ptr);
  }
  return this_ptr;
}



// Handles window state change events for the TP popup menu, triggering refresh signals
// via message 0xEB.

void __stdcall16far
UI_TP_PopupMenu_Handle_State_Change_Events_7308(void *this_ptr,uint event_type)
{
  char cVar1;
  undefined2 unaff_BP;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  if (event_type != 0x12)
  {
    if (event_type < 0x13)
    {
      cVar1 = (char)event_type;
      if (cVar1 == '\x01')
      {
        *(undefined4 *)((int)this_ptr + 0x1c) = 0x0;
        return;
      }
      if (('\x03' < (char)(cVar1 + -0x1)) && ((char)(cVar1 + -0x5) < '\x02'))
      goto LAB_1020_7310;
    }
    return;
  }
LAB_1020_7310:
  PostMessage16(0x0,0x0,0xeb,CONCAT22(unaff_BP,*(undefined2 *)((int)this_ptr + 0x4)));
  UI_Component_Invalidate_History_Rect_Logic_735a(this_ptr);
  return;
}



// Invalidates the history display rectangle (offset 0x16C from the internal object at
// 0x1C) for the component's window.

void __stdcall16far UI_Component_Invalidate_History_Rect_Logic_735a(void *this_ptr)
{
  undefined2 uVar1;
  HWND16 in_stack_0000fff6;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  InvalidateRect16(0x0,(void *)CONCAT22(*(undefined2 *)((int)(void *)this_ptr + 0x4),
                                        (void *)((ulong)*(undefined4 *)
                                                         ((int)(void *)this_ptr + 0x1c)
                                                >> 0x10)),in_stack_0000fff6);
  return;
}



// WM_PAINT handler for the ship view's entity display component. Manages the lifecycle
// of the entity sprite, captures/restores its background, and handles iconic rendering.

void __stdcall16far UI_Ship_View_Entity_Display_OnPaint_Handler(void *this_ptr)
{
  undefined2 *puVar1;
  BOOL16 BVar2;
  uint *puVar3;
  uint16_t uVar4;
  astruct_358 *uVar6;
  undefined2 uVar5;
  void *unaff_SS;
  HWND16 hwnd;
  undefined1 local_42 [0x6];
  undefined4 *local_3c;
  int iStack_38;
  HWND16 HStack_36;
  HWND16 HStack_34;
  int iStack_32;
  undefined4 local_30;
  int iStack_2c;
  int iStack_2a;
  HBRUSH16 HStack_28;
  HICON16 HStack_26;
  HDC16 local_24;
  undefined1 local_22 [0x20];
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar6 = (astruct_358 *)this_ptr;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),uVar6->field4_0x4);
  hwnd = uVar6->field4_0x4;
  BVar2 = IsIconic16(hwnd);
  if (BVar2 == 0x0)
  {
    local_3c = (undefined4 *)((u32 *)uVar6->field22_0x1c)[0x9];
    local_30 = (void *)UI_Ship_View_Get_Active_Entity_Object_Logic
                                 ((long)uVar6->field22_0x1c);
    pack_3words_alt(local_42,(int)unaff_SS,0x0,0x35);
    if (*(long *)&uVar6->field19_0x14 != 0x0)
    {
                // WARNING: Load size is inaccurate
      Sprite_Object_Restore_To_Bitmap((void *)uVar6->field19_0x14);
    }
    if (local_30 != NULL)
    {
      puVar3 = uVar6->field19_0x14;
      uVar4 = uVar6->field20_0x16;
      if (uVar4 != 0x0 || puVar3 != NULL)
      {
        Sprite_Object_free_internal_buffer(puVar3);
        free_if_not_null(puVar3);
      }
      puVar3 = Gameplay_Object_Draw_With_Offset_Logic
                         ((void *)local_30,(void *)((ulong)local_30 >> 0x10),local_42);
      uVar6->field19_0x14 = puVar3;
      uVar6->field20_0x16 = uVar4;
    }
    puVar1 = (undefined2 *)((int)*local_3c + 0x4);
    (*(code *)*puVar1)(0x1008,(undefined4 *)local_3c,(int)((ulong)local_3c >> 0x10),0x0,
                       0x0,&local_24);
    puVar1 = (undefined2 *)((int)*uVar6->field21_0x18 + 0x94);
    (*(code *)*puVar1)(0x1008,uVar6->field21_0x18,0x1);
    HStack_34 = GetDlgItem16(0x1797,uVar6->field4_0x4);
    if (HStack_34 != 0x0)
    {
      ShowWindow16(0x1,HStack_34);
    }
  }
  else if (p_FreeBlockListHead == NULL)
  {
    puVar1 = (undefined2 *)((int)*uVar6->field22_0x1c + 0x2c);
    HStack_26 = (*(code *)*puVar1)(0x1538,(u32 *)uVar6->field22_0x1c,
                                   (int)((ulong)uVar6->field22_0x1c >> 0x10));
    if (HStack_26 != 0x0)
    {
      HStack_28 = GetStockObject16(0x4);
      GetClientRect16((undefined4 *)CONCAT22(unaff_SS,&local_30),uVar6->field4_0x4);
      local_3c = NULL;
      iStack_38 = (iStack_2c - (int)(void *)local_30) + -0x1;
      HStack_36 = (iStack_2a - local_30._2_2_) - 0x1;
      HStack_34 = HStack_36;
      iStack_32 = iStack_38;
      FillRect16(HStack_28,(void *)CONCAT22(local_24,unaff_SS),hwnd);
      DrawIcon16(HStack_26,0x2,0x2,local_24);
    }
  }
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),uVar6->field4_0x4);
  return;
}



u16 * __stdcall16far
UI_TP_PopupMenu_Internal_SubComponent_dtor_Scalar_Deleting_7526
          (u16 *param_1,u16 param_2,byte param_3)
{
  UI_TP_PopupMenu_Internal_SubComponent_dtor_7270(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the UI Navigation Panel. Initializes base UI object, sets vtable to
// 0x7780, and loads Resource ID 0x25.

void * __stdcall16far
UI_Navigation_Panel_ctor_init_logic_Res25
          (astruct_357 *param_1,undefined2 param_2,void *param_3)
{
  uint16_t uVar2;
  astruct_357 *uVar1;
  undefined2 uVar3;
  long lVar4;
  
  UI_Panel_Base_ctor_init_logic_7f7a
            (param_1,(void *)CONCAT22(param_2,(void *)((int)(u16 *)&p_LastAllocatedBlock
                                                      + 0x1)),param_3);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_357 *)param_1;
  uVar1->field233_0xee = 0x0;
  (&uVar1->field234_0xf2)[0x0] = 0x0;
  (&uVar1->field234_0xf2)[0x1] = 0x0;
  *(undefined2 *)param_1 = 0x7780;
  uVar1->field2_0x2 = 0x1020;
  uVar1->field225_0xe2 = 0x781c;
  uVar1->field226_0xe4 = 0x1020;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x25);
  uVar2 = (uint16_t)((ulong)lVar4 >> 0x10);
  uVar1->field234_0xf2 = (uint16_t)lVar4;
  uVar1->field235_0xf4 = uVar2;
  uVar1->field227_0xe6 = uVar1->field234_0xf2;
  uVar1->field228_0xe8 = uVar2;
  return param_1;
}



// Sets the UI Navigation Panel's vtable and performs its specialized initialization.

void __stdcall16far UI_Navigation_Panel_Initialize_Vtable_and_Globals(void *this_ptr)
{
  astruct_356 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_356 *)this_ptr;
  *(undefined2 *)this_ptr = 0x7780;
  uVar1->field2_0x2 = 0x1020;
  uVar1->field225_0xe2 = 0x781c;
  uVar1->field226_0xe4 = 0x1020;
  UI_Panel_Base_dtor_Internal_Cleanup_logic_808e(this_ptr);
  return;
}
