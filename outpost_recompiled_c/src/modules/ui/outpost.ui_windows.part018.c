/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 18/54
 * Original lines (combined): 55694-57275
 * Boundaries: top-level declarations/definitions only
 */




// Internal destructor for the 'DanBrotherton' window. Ensures any child dialogs are
// closed by sending a WM_COMMAND(1) message. Reverts vtable pointers.

void __stdcall16far UI_DanBrotherton_Window_dtor_Internal_Cleanup_logic_08fe(void *this)
{
  HWND16 hwnd;
  BOOL16 BVar1;
  astruct_390 *puVar2;
  undefined2 in_stack_00000006;
  HWND16 HVar2;
  
  *_this = 0xb0e;
  *(undefined2 *)((int)this + 0x2) = 0x1020;
  if (*(long *)((int)this + 0xe8) != 0x0)
  {
    hwnd = *(HWND16 *)((int)*(undefined4 *)((int)this + 0xe8) + 0x6);
    HVar2 = hwnd;
    BVar1 = IsWindow16(hwnd);
    if (BVar1 != 0x0)
    {
      SendMessage16(0x0,0x0,0x1,CONCAT22(HVar2,hwnd));
    }
    *(undefined4 *)((int)this + 0xe8) = 0x0;
  }
  UI_Control_Sub_dtor_logic((void *)((int)this + 0xd2));
  *_this = 0x380a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Helper logic to close the active child dialog associated with the 'DanBrotherton'
// window.

void __stdcall16far UI_DanBrotherton_Window_Close_Child_Dialog_Logic_097e(void *this)
{
  astruct_389 *iVar1;
  undefined2 in_stack_00000006;
  undefined4 in_stack_0000fff4;
  
  if (*(int *)((int)this + 0xea) != 0x0 || *(int *)((int)this + 0xe8) != 0x0)
  {
    SendMessage16(0x0,0x0,0x1,
                  CONCAT22((int)((ulong)in_stack_0000fff4 >> 0x10),
                           *(undefined2 *)((int)*(undefined4 *)((int)this + 0xe8) + 0x6)
                          ));
    *(undefined4 *)((int)this + 0xe8) = 0x0;
  }
  return;
}



void __stdcall16far UI_Window_Initialize_and_Create_Control_Type7_09ba(void *param_1)
{
  void *pvVar1;
  uint reg_dx;
  uint uVar2;
  void *this;
  undefined2 uVar3;
  undefined2 in_stack_0000fffa;
  
  this = (void *)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xe));
  uVar2 = reg_dx | (uint)pvVar1;
  if (uVar2 != 0x0)
  {
    pvVar1 = UI_Control_Type7_ctor_init_Res7_logic_0baa(pvVar1,reg_dx);
    *(undefined2 *)((int)this + 0xe2) = pvVar1;
    *(uint *)((int)this + 0xe4) = uVar2;
    return;
  }
  *(undefined4 *)((int)this + 0xe2) = 0x0;
  return;
}



void __stdcall16far UI_Window_Cleanup_and_Destroy_SubObject_E2_0a0c(void *param_1)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 uVar3;
  void *this;
  
  this = (void *)param_1;
  UI_Window_Destroy_Logic(this);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined4 *)*(int *)((int)this + 0xe2);
  iVar2 = *(int *)((int)this + 0xe4);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1008,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)this + 0xe2) = 0x0;
  *(undefined2 *)((int)this + 0xe6) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Complex_Control_OnPaint_and_Spawn_SubDialog_6_0a52(undefined4 param_1)
{
  int iVar1;
  undefined2 uVar2;
  void *pvVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  UI_Component_Default_OnPaint_Handler_0c3e(*(long *)(iVar1 + 0xe2));
  if (*(int *)(iVar1 + 0xe6) == 0x0)
  {
    *(undefined2 *)(iVar1 + 0xe6) = 0x1;
    *(undefined2 *)((int)(void *)_p_UISubDialogTable + 0xae) = 0x99;
    pvVar3 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                       (_p_UISubDialogTable,*(uint16_t *)(iVar1 + 0x8),0x6);
    *(undefined2 *)(iVar1 + 0xe8) = (void *)pvVar3;
    *(undefined2 *)(iVar1 + 0xea) = (int)((ulong)pvVar3 >> 0x10);
  }
  return;
}



void __stdcall16far UI_Complex_Control_Handle_Palette_Change_0aa6(u32 param_1)
{
  UI_Component_Handle_Palette_Change_and_Invalidate_0cd2(*(long *)((int)param_1 + 0xe2))
  ;
  return;
}



void __stdcall16far
UI_Complex_Control_Conditional_VCall_10_at_E8_abc(undefined4 param_1,undefined2 param_2)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((int)param_1 + 0xe6) != 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xe8) + 0x10);
    (*(code *)*puVar1)();
  }
  return;
}



void * __stdcall16far
UI_DanBrotherton_Window_dtor_Scalar_Deleting_0ae8
          (void *param_1,u16 param_2,byte param_3)
{
  UI_DanBrotherton_Window_dtor_Internal_Cleanup_logic_08fe(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for the 'PC' popup menu. Initializes vtable 0x1384, loads 'PCPOPMENU'
// resource, and initializes children.

long __stdcall16far
UI_PC_PopupMenu_ctor_init(astruct_387 *param_1,undefined2 param_2,undefined4 param_3)
{
  astruct_387 *uVar3;
  undefined2 uVar1;
  
  UI_Popup_View_Base_ctor_init_logic(param_1,0x4256,0x1050,param_2,param_3);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (astruct_387 *)param_1;
  *(undefined4 *)((int)&uVar3->field234_0xef + 0x3) = 0x0;
  *(undefined4 *)((int)&uVar3->field235_0xf3 + 0x3) = 0x0;
  *(undefined2 *)((int)&uVar3[0x1].field0_0x0 + 0x1) = 0x0;
  param_1->field0_0x0 = 0x1384;
  uVar3->field1_0x2 = 0x1020;
  strcpy_optimized((char *)CONCAT22(uVar1,&uVar3->field_0x5b),s_VrMode_1050_4260);
  *(undefined4 *)((int)&uVar3->field167_0xa9 + 0x3) = 0x44c00000;
  UI_PC_PopupMenu_Initialize_Children_and_State(uVar3,uVar1);
  return (long)param_1;
}



// Wrapper that performs internal cleanup for the PC popup menu component.

void __stdcall16far UI_PC_PopupMenu_Internal_Cleanup_Wrapper(long context)
{
  UI_Component_Update_Internal_Rect_from_Window_Bounds_7a50((void *)context);
  UI_Component_Internal_Resource_Cleanup_logic(context);
  return;
}



void __stdcall16far
UI_PC_PopupMenu_Handle_MouseDown_and_Dispatch_0e8e
          (void *param_1,int param_2,int param_3)
{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = UI_PC_PopupMenu_Handle_MouseDown_Interaction(param_1,param_2,param_3);
  if (iVar2 == 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x4) + 0x5c);
    (*(code *)*puVar1)();
  }
  return;
}



// Simple helper to enable/disable menu item index 3 in a Win16 menu.

void __stdcall16far UI_Menu_Enable_Item_3_Helper(void)
{
  int in_stack_0000000a;
  HMENU16 in_stack_0000000c;
  
  if (in_stack_0000000a != 0x0)
  {
    return;
  }
  EnableMenuItem16(0x400,0x3,in_stack_0000000c);
  return;
}



// Wrapper that triggers an update on an internal sub-component of the PC popup menu.

void __stdcall16far UI_PC_PopupMenu_Trigger_SubComponent_Update_Wrapper(long context)
{
  UI_Component_OnPaint_Render_Internal_Bitmap_v3_15de(*(long *)((int)context + 0xf6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes children controls (IDs 0xF1, 0xF2, 0xF3) and internal state for the PC
// popup menu. Sets window position and triggers an update.

void __stdcall16far UI_PC_PopupMenu_Initialize_Children_and_State(undefined4 *param_1)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  HICON16 HVar5;
  int16_t *piVar6;
  int reg_dx;
  void *pvVar7;
  int extraout_DX;
  int iVar8;
  undefined2 unaff_SI;
  long lVar9;
  int16_t *piVar10;
  undefined2 uVar11;
  undefined4 *this;
  undefined2 uVar12;
  
  this = (undefined4 *)param_1;
  uVar12 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x42));
  pvVar7 = NULL;
  if (reg_dx != 0x0 || pvVar3 != NULL)
  {
    pvVar7 = UI_Complex_Control_ctor();
  }
  pvVar4 = allocate_memory(CONCAT22(unaff_SI,0x42));
  pvVar3 = NULL;
  if (pvVar7 != NULL || pvVar4 != NULL)
  {
    pvVar3 = UI_Complex_Control_ctor();
  }
  pvVar7 = allocate_memory(CONCAT22(unaff_SI,0x42));
  if (pvVar3 != NULL || pvVar7 != NULL)
  {
    UI_Complex_Control_ctor();
  }
  lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2d);
  uVar11 = (undefined2)((ulong)lVar9 >> 0x10);
  *(undefined2 *)((int)this + 0xf2) = (int)lVar9;
  *(undefined2 *)(this + 0x3d) = uVar11;
  *(undefined2 *)(this + 0x38) = *(undefined2 *)((int)this + 0xf2);
  *(undefined2 *)((int)this + 0xe2) = uVar11;
  HVar5 = LoadIcon16(s_PLNTICON_1050_4267,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  *(HICON16 *)((int)this + 0xc2) = HVar5;
  uVar11 = (undefined2)*(undefined4 *)((int)this + 0xf2);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xf2) + 0x30);
  (*(code *)*puVar1)(0x1538,uVar11,
                     (int)((ulong)*(undefined4 *)((int)this + 0xf2) >> 0x10),HVar5);
  iVar8 = extraout_DX;
  pvVar7 = allocate_memory(CONCAT22(uVar11,0x24));
  if (iVar8 == 0x0 && pvVar7 == NULL)
  {
    *(undefined4 *)((int)this + 0xf6) = 0x0;
  }
  else
  {
    lVar9 = UI_PC_PopupMenu_Internal_SubComponent_ctor
                      ((long)CONCAT22(iVar8,pvVar7),(long)param_1);
    *(undefined2 *)((int)this + 0xf6) = (int)lVar9;
    *(int *)(this + 0x3e) = (int)((ulong)lVar9 >> 0x10);
  }
  this[0x3a] = *(undefined4 *)((int)this + 0xf6);
  lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  lVar9 = UI_Component_Get_FarPtr_at_Offset_16_Logic(lVar9);
  UI_Element_Generate_HitTest_Rects_Logic
            ((void *)(void *)*(undefined4 *)((int)this + 0xf2),lVar9);
  lVar9 = UI_Element_Get_Resource_Data_at_Offset_6C_Logic
                    ((void *)(void *)*(undefined4 *)((int)this + 0xf2));
  uVar2 = *param_1;
  puVar1 = (undefined2 *)((int)uVar2 + 0x14);
  (*(code *)*puVar1)(0x1010,this,uVar12,0x0,(int)lVar9,(int)((ulong)lVar9 >> 0x10));
  uVar11 = 0x1;
  puVar1 = (undefined2 *)((int)uVar2 + 0x10);
  (*(code *)*puVar1)();
  Simulator_Register_Resource_500_Tracker_Logic(*(long *)((int)this + 0xf2));
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xf2) + 0x10);
  piVar10 = (int16_t *)
            (*(code *)*puVar1)(0x1010,*(undefined4 *)((int)this + 0xf2),param_1,uVar11);
  uVar11 = (undefined2)((ulong)piVar10 >> 0x10);
  piVar6 = (int16_t *)piVar10;
  MoveWindow16(0x1,piVar6[0x3],piVar6[0x2],piVar6[0x1],*piVar10,*(HWND16 *)(this + 0x2))
  ;
  UpdateWindow16(*(HWND16 *)(this + 0x2));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles MouseDown events for the PC popup menu. Performs hit testing against its
// child controls and triggers associated virtual actions.

int __stdcall16far
UI_PC_PopupMenu_Handle_MouseDown_Interaction(void *context,int x,int y)
{
  undefined2 *puVar1;
  void *src;
  int iVar2;
  HCURSOR16 h_cursor;
  HCURSOR16 h_cursor_00;
  int *out1;
  void *pvVar3;
  int in_stack_0000000a;
  int local_12;
  int local_10;
  void *pvStack_e;
  undefined4 *puStack_a;
  int local_6;
  int iStack_4;
  
  pvVar3 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x4000001);
  if ((int)((ulong)pvVar3 >> 0x10) == 0x0 && (void *)pvVar3 == NULL)
  {
    local_6 = in_stack_0000000a;
    iStack_4 = y;
    puStack_a = (undefined4 *)
                Resource_Tracker_Get_Data_Logic
                          ((void *)(void *)*(undefined4 *)((int)context + 0xf2));
    out1 = (int *)((ulong)*(undefined4 *)((int)context + 0xf2) >> 0x10);
    src = (void *)((int)*(undefined4 *)((int)context + 0xf2) + 0x76);
    pvStack_e = (void *)CONCAT22(out1,src);
    unpack_word_pair(src,out1,&local_12);
    local_6 -= local_10;
    iStack_4 -= local_12;
    iVar2 = UI_HitTest_Rect_Collection_Logic
                      ((void *)(void *)*(undefined4 *)((int)context + 0xf2),
                       (POINT16 *)((ulong)*(undefined4 *)((int)context + 0xf2) >> 0x10))
    ;
    if (iVar2 != -0x1)
    {
      h_cursor = LoadCursor16((void *)0x7f02,0x0);
      h_cursor_00 = SetCursor16(h_cursor);
      puVar1 = (undefined2 *)((int)*puStack_a + 0x4);
      (*(code *)*puVar1)(0x1538,(undefined4 *)puStack_a,(int)((ulong)puStack_a >> 0x10),
                         iVar2,iVar2 >> 0xf,iVar2,0x2,h_cursor_00,h_cursor);
      UI_Call_Virtual_Refresh_maybe(context);
      SetCursor16(h_cursor_00);
    }
  }
  return 0x1;
}



u16 * __stdcall16far
UI_Popup_View_Base_dtor_Scalar_Deleting_135e(u16 *param_1,u16 param_2,byte param_3)
{
  UI_Popup_View_Base_dtor_Internal_Cleanup_logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Internal destructor for the PC popup menu's sub-component. Cleans up GDI palettes and
// removes item from container.

void __stdcall16far UI_PC_PopupMenu_Internal_SubComponent_dtor(long this_ref)
{
  HPALETTE16 obj;
  astruct_385 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_385 *)this_ref;
  *(undefined2 *)this_ref = 0x1730;
  uVar1->field2_0x2 = 0x1020;
  if (uVar1->field19_0x14 != 0x0)
  {
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)uVar1->field19_0x14,this_ref);
  }
  obj = SelectPalette16(0x0,uVar1->field24_0x1c,
                        *(BOOL16 *)((int)uVar1->field19_0x14 + 0x7c));
  uVar1->field24_0x1c = obj;
  DeleteObject16(obj);
  *(char **)this_ref = (char *)s_0_020_1050_3ab0;
  uVar1->field2_0x2 = 0x1008;
  *(char **)this_ref = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  return;
}



void __stdcall16far
UI_Component_Handle_State_Change_and_Invalidate_157c(u32 param_1,int param_2)
{
  BOOL16 BVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  HWND16 hwnd;
  undefined1 local_a [0x6];
  u16 local_4;
  
  iVar2 = (int)param_1;
  uVar3 = (undefined2)(param_1 >> 0x10);
  if (param_2 == 0x1)
  {
    *(undefined4 *)(iVar2 + 0x14) = 0x0;
    return;
  }
  if (param_2 == 0x2)
  {
    hwnd = *(HWND16 *)(iVar2 + 0x4);
    BVar1 = IsIconic16(hwnd);
    if (BVar1 == 0x0)
    {
      GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_a),*(HWND16 *)(iVar2 + 0x4))
      ;
      local_4 = 0x9a;
      InvalidateRect16(0x0,(void *)CONCAT22(*(undefined2 *)(iVar2 + 0x4),unaff_SS),hwnd)
      ;
      return;
    }
  }
  return;
}



// WM_PAINT handler for a UI component. Renders its internal bitmap with transparency
// and handles iconic status icon drawing.

void __stdcall16far UI_Component_OnPaint_Render_Internal_Bitmap_v3_15de(long context)
{
  undefined2 *puVar1;
  BOOL16 BVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  long lVar6;
  HDC16 local_24;
  undefined1 local_22 [0x20];
  
  uVar4 = (undefined2)((ulong)context >> 0x10);
  iVar3 = (int)context;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)(iVar3 + 0x4));
  BVar2 = IsIconic16(*(HWND16 *)(iVar3 + 0x4));
  if (BVar2 == 0x0)
  {
    uVar5 = 0x1010;
    lVar6 = UI_Element_Get_Indexed_Data_at_Offset_26_Logic
                      ((void *)(void *)*(undefined4 *)(iVar3 + 0x14));
    if (lVar6 != 0x0)
    {
      uVar5 = 0x1008;
      Bitmap_Object_Blit_Transparent_Logic
                ((void *)(void *)*(undefined4 *)(iVar3 + 0x18),
                 (void *)((ulong)*(undefined4 *)(iVar3 + 0x18) >> 0x10),
                 (void *)((int)*(undefined4 *)(iVar3 + 0x14) + 0x76));
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x18) + 0x4);
    (*(code *)*puVar1)(uVar5,*(undefined4 *)(iVar3 + 0x18),0x0,0x0,&local_24);
  }
  else
  {
    UI_Status_Icon_Draw_Logic(context);
  }
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar3 + 0x4));
  return;
}



void * __stdcall16far
UI_PC_PopupMenu_Internal_SubComponent_dtor_Scalar_Deleting_170a
          (void *param_1,byte param_2)
{
  UI_PC_PopupMenu_Internal_SubComponent_dtor((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for the Colony Morale Dialog component. Initializes internal state and
// sets vtable to 0x1E7A.

long __stdcall16far
UI_Colony_Morale_Dialog_ctor(astruct_383 *param_1,undefined2 param_2,undefined4 param_3)
{
  astruct_383 *uVar1;
  undefined2 uVar2;
  
  UI_SubDialog_Base_ctor_init_7728
            (param_1,0x1,0xfcd0000,*(undefined2 *)((int)param_3 + 0x8));
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_383 *)param_1;
  uVar1->field141_0x8e = 0x0;
  uVar1->field142_0x92 = 0x0;
  uVar1->field143_0x96 = 0x0;
  *(char **)param_1 = (char *)s_512_bmp_1050_1e77 + 0x3;
  uVar1->field2_0x2 = 0x1020;
  return (long)param_1;
}



void __stdcall16far UI_Window_Cleanup_SubWindow_at_8C_and_Destroy_1780(u32 *param_1)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x6c);
  (*(code *)*puVar1)();
  UI_Window_Destroy_SubWindow_at_8C_8212((u32 *)param_1);
  return;
}



// Invokes a virtual function to retrieve the palette from the dialog's internal bitmap
// component.

int __stdcall16far UI_Colony_Morale_Dialog_Get_Internal_Palette_vcall(long this_ref)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ref + 0x92) + 0x8);
  (*(code *)*puVar1)();
  return 0x0;
}



// Processes user interactions (like clicks) for the Colony Morale Dialog. Performs hit
// testing and conditionally opens sub-dialogs.

void __stdcall16far
UI_Colony_Morale_Dialog_Handle_Interaction(int offset,int segment,int x,int y)
{
  undefined2 *puVar1;
  bool bVar2;
  int reg_ax;
  HWND16 enable;
  BOOL16 BVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint reg_dx;
  uint uVar6;
  undefined2 uVar7;
  undefined2 in_stack_0000fff0;
  undefined4 uStack_c;
  
  bVar2 = false;
  UI_Component_HitTest_Wrapper(CONCAT22(segment,offset),CONCAT22(y,x));
  if (reg_ax != 0x0)
  {
    if (reg_ax < 0x2)
    {
      bVar2 = true;
    }
    else
    {
      enable = GetDlgItem16(0x1,*(short *)(offset + 0x6));
      UI_Component_Notify_Listeners_Type_D_Logic
                ((void *)(void *)*(undefined4 *)(offset + 0x8e));
      BVar3 = EnableWindow16(0x1,enable);
      UI_Component_Invoke_Callback_at_Offset_26_Logic
                ((void *)(void *)*(undefined4 *)(offset + 0x8e));
      if ((BVar3 == 0x0) && (bVar2 = true, *(int *)(offset + 0x96) == 0x0))
      {
        EnableWindow16(0x0,enable);
      }
    }
  }
  if (bVar2)
  {
    uVar7 = 0x1000;
    pvVar4 = allocate_memory(CONCAT22(in_stack_0000fff0,0xb4));
    uVar6 = reg_dx | (uint)pvVar4;
    if (uVar6 == 0x0)
    {
      puVar5 = NULL;
      uVar6 = 0x0;
    }
    else
    {
      uVar7 = 0x1040;
      puVar5 = (undefined4 *)
               UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                         (pvVar4,reg_dx,*(undefined2 *)(offset + 0x6),0x30,0x2,0x57b,
                          0x62a);
    }
    uStack_c = (undefined4 *)CONCAT22(uVar6,puVar5);
    puVar1 = (undefined2 *)((int)*uStack_c + 0x74);
    (*(code *)*puVar1)(uVar7,puVar5,uVar6);
  }
  return;
}



// Executes a specific command within the Morale Dialog, potentially triggering
// sub-dialogs or posting UI messages.

int __stdcall16far UI_Colony_Morale_Dialog_Execute_Command(undefined4 param_1)
{
  undefined2 *puVar1;
  int reg_ax;
  void *pvVar2;
  undefined4 *puVar3;
  uint reg_dx;
  uint uVar4;
  undefined2 uVar5;
  undefined2 in_stack_0000fff2;
  undefined4 uStack_a;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((int)param_1 + 0x96) == 0x0)
  {
    UI_Component_Invoke_Callback_at_Offset_26_Logic
              ((void *)(void *)*(undefined4 *)((int)param_1 + 0x8e));
    if (reg_ax == 0x0)
    {
      uVar5 = 0x1000;
      pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff2,0xb4));
      uVar4 = reg_dx | (uint)pvVar2;
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
                           (pvVar2,reg_dx,g_ParentHWND,0x30,0x2,0x57b,0x62a);
      }
      uStack_a = (undefined4 *)CONCAT22(uVar4,puVar3);
      puVar1 = (undefined2 *)((int)*uStack_a + 0x74);
      (*(code *)*puVar1)(uVar5,puVar3,uVar4);
      return 0x0;
    }
    PostMessage16(0x0,0x0,0xde,(long)CONCAT22(in_stack_0000fff2,g_ParentHWND));
  }
  return 0x1;
}



// Utility wrapper to set the text of a dialog control based on an ID stored in a
// component struct.

void __stdcall16far
UI_Dialog_Set_Control_Text_Wrapper(long context,char *text,HWND16 parent_hwnd)
{
  HWND16 hwnd;
  HWND16 in_stack_0000000c;
  
  hwnd = GetDlgItem16(in_stack_0000000c,*(short *)((int)context + 0x6));
  SetWindowText16(_text,hwnd);
  return;
}



// Handles the closing of the Morale Dialog, ensuring internal state is processed and
// the window is destroyed.

void __stdcall16far UI_Colony_Morale_Dialog_Handle_Close(long context,int arg2)
{
  int iVar1;
  undefined2 unaff_BP;
  undefined2 uVar2;
  
  if (arg2 != 0x0)
  {
    uVar2 = (undefined2)((ulong)context >> 0x10);
    iVar1 = UI_Colony_Morale_Dialog_Execute_Command(context);
    if (iVar1 != 0x0)
    {
      if (*(int *)((int)context + 0x96) != 0x0)
      {
        PostMessage16(0x0,0x0,0xee,(long)CONCAT22(unaff_BP,g_ParentHWND));
      }
      DestroyWindow16(*(HWND16 *)((int)context + 0x6));
    }
  }
  return;
}



// Thin wrapper for the component's rect-array hit testing logic.

void __stdcall16far UI_Component_HitTest_Wrapper(long context,long coords)
{
  void *pvVar1;
  
  pvVar1 = (void *)*(undefined4 *)((int)context + 0x8e);
  UI_Component_HitTest_Rect_Array_Logic
            ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10),(int)coords);
  return;
}



// Checks the internal state or type count for the Morale Dialog to determine if certain
// actions are valid.

int __stdcall16far UI_Colony_Morale_Dialog_Check_State_Logic(void *context)
{
  int reg_ax;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)*(undefined4 *)((int)context + 0x8e) + 0x30) == 0x1)
  {
    return 0x1;
  }
  if ((*(int *)((int)*(undefined4 *)((int)context + 0x8e) + 0x30) < 0x3) &&
     (UI_Component_Invoke_Callback_at_Offset_26_Logic
                ((void *)(void *)*(undefined4 *)((int)context + 0x8e)), reg_ax == 0x0))
  {
    return 0x1;
  }
  return 0x0;
}



u16 __stdcall16far
UI_Window_Destroy_if_ID_175_1dea(u16 param_1,u16 param_2,HWND16 param_3)
{
  BOOL16 BVar1;
  uint16_t uVar2;
  
  BVar1 = IsWindow16(param_3);
  if (BVar1 != 0x0)
  {
    uVar2 = GetWindowWord16(-0xc,param_3);
    if (uVar2 == 0x175)
    {
      DestroyWindow16(param_3);
      return 0x0;
    }
  }
  return 0x1;
}



undefined2 __stdcall16far
UI_Window_Destroy_if_Not_ID_1_or_175_1e1e
          (undefined2 param_1,undefined2 param_2,HWND16 param_3)
{
  BOOL16 BVar1;
  uint16_t uVar2;
  
  BVar1 = IsWindow16(param_3);
  if (BVar1 != 0x0)
  {
    uVar2 = GetWindowWord16(-0xc,param_3);
    if ((uVar2 != 0x1) && (uVar2 != 0x175))
    {
      DestroyWindow16(param_3);
    }
  }
  return 0x1;
}



// An alternative scalar deleting destructor for UI views.

long __stdcall16far
UI_View_dtor_Scalar_Deleting_Alternative_1e54(long this_ref,byte flags)
{
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Handles specific state change events (1, 0xD) for a UI component, triggering
// invalidation of its window rectangle.

void __stdcall16far
UI_Component_Handle_State_Change_Invalidate_Rect_1fb2(long context,int event_id)
{
  int iVar1;
  undefined2 uVar2;
  void *unaff_SS;
  undefined1 local_e [0x8];
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  iVar1 = (int)context;
  uVar2 = (undefined2)((ulong)context >> 0x10);
  if (event_id == 0x1)
  {
    *(undefined4 *)(iVar1 + 0x6) = 0x0;
    return;
  }
  if (event_id != 0xd)
  {
    return;
  }
  GetWindowRect16((undefined1 *)CONCAT22(unaff_SS,local_e),*(HWND16 *)(iVar1 + 0x4));
  uStack_6 = 0x46;
  uStack_4 = 0x5f;
  InvalidateRect16(0x0,(void *)CONCAT22(*(undefined2 *)(iVar1 + 0x4),unaff_SS),0x0);
  return;
}
