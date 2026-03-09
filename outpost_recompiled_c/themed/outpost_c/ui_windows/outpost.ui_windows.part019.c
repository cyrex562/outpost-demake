/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 19/54
 * Original lines (combined): 57545-59016
 * Boundaries: top-level declarations/definitions only
 */




// Scalar deleting destructor for the UI Report Panel.

void * __stdcall16far
UI_Report_Panel_dtor_Scalar_Deleting_logic_24f2(void *this_ptr,byte flags)
{
  UI_Control_Type7_dtor_Internal_Cleanup_logic_1f74((long)this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the UI Report Panel. Initializes base object and loads Resource ID
// 0x2A. Sets vtable to 0x270C.

void * __stdcall16far
UI_Report_Panel_ctor_init_logic_Res2A_2524
          (astruct_381 *param_1,undefined2 param_2,void *param_3)
{
  uint16_t uVar2;
  astruct_381 *uVar1;
  undefined2 uVar3;
  long lVar4;
  
  UI_Panel_Base_ctor_init_logic_7f7a
            (param_1,(void *)CONCAT22(param_2,(void *)0x7),param_3);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_381 *)param_1;
  uVar1->field233_0xee = 0x0;
  (&uVar1->field234_0xf2)[0x0] = 0x0;
  (&uVar1->field234_0xf2)[0x1] = 0x0;
  *(char **)param_1 = (char *)s_fem36_wav_1050_270c;
  uVar1->field2_0x2 = 0x1020;
  uVar1->field225_0xe2 = (u16)((char *)s_fem51_wav_1050_27a2 + 0x6);
  uVar1->field226_0xe4 = 0x1020;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2a);
  uVar2 = (uint16_t)((ulong)lVar4 >> 0x10);
  uVar1->field234_0xf2 = (uint16_t)lVar4;
  uVar1->field235_0xf4 = uVar2;
  uVar1->field227_0xe6 = uVar1->field234_0xf2;
  uVar1->field228_0xe8 = uVar2;
  return param_1;
}



// Sets the UI Report Panel's vtable and performs its specialized initialization.

void __stdcall16far UI_Report_Panel_Initialize_Vtable_and_Globals_2594(void *this_ptr)
{
  astruct_380 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_380 *)this_ptr;
  *(char **)this_ptr = (char *)s_fem36_wav_1050_270c;
  uVar1->field2_0x2 = 0x1020;
  uVar1->field225_0xe2 = (u16)((char *)s_fem51_wav_1050_27a2 + 0x6);
  uVar1->field226_0xe4 = 0x1020;
  UI_Panel_Base_dtor_Internal_Cleanup_logic_808e(this_ptr);
  return;
}



// Constructor for the Report View UI. Creates window, sets DC, and initializes its
// report-specific internal component.

void __stdcall16far
UI_Report_View_ctor_init_Window_and_Child_Component_2642(void *param_1)
{
  void *pvVar1;
  int in_DX;
  astruct_378 *uVar3;
  void *pvVar2;
  void *this;
  undefined2 uVar4;
  undefined2 in_stack_0000fffa;
  
  this = (void *)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  Build_Site_Object_Set_Window_and_DC
            (*(long *)((int)this + 0xf2),*(HWND16 *)((int)this + 0x8));
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x18));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    pvVar2 = UI_Report_Child_Component_ctor_init_logic_Res2A_27b0
                       ((void *)CONCAT22(in_DX,pvVar1),*(u16 *)((int)this + 0x8));
    *(undefined2 *)((int)this + 0xee) = (int)pvVar2;
    *(undefined2 *)((int)this + 0xf0) = (int)((ulong)pvVar2 >> 0x10);
    return;
  }
  *(undefined4 *)((int)this + 0xee) = 0x0;
  return;
}



void __stdcall16far UI_Window_Cleanup_SubObject_EE_and_Destroy_26a6(void *param_1)
{
  undefined2 *puVar1;
  void *this;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  this = (void *)param_1;
  if (*(int *)((int)this + 0xf0) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xee) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xee);
    (*(code *)*puVar1)();
  }
  UI_Window_Destroy_Logic(this);
  return;
}



void * __stdcall16far
UI_Report_Panel_dtor_Scalar_Deleting_26e6(void *param_1,byte param_2)
{
  UI_Report_Panel_Initialize_Vtable_and_Globals_2594(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Internal destructor for the Report child component. Releases internal resource IDs.

void __stdcall16far
UI_Report_Child_Component_dtor_Internal_Cleanup_logic_2838(void *this_ptr)
{
  astruct_377 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_377 *)this_ptr;
  *(char **)this_ptr = (char *)s_fem74_wav_1050_2888 + 0x6;
  uVar1->field2_0x2 = 0x1020;
  if (uVar1->field19_0x14 != 0x0)
  {
    Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)uVar1->field19_0x14);
  }
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4(this_ptr);
  return;
}



// Scalar deleting destructor for the Report child component.

void * __stdcall16far
UI_Report_Child_Component_dtor_Scalar_Deleting_logic_2868(void *this_ptr,byte flags)
{
  UI_Report_Child_Component_dtor_Internal_Cleanup_logic_2838(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the "VrMode" popup menu. Sets vtable to 0x2E4A and initializes with
// menu resource "SCPOPMENU".

void * __stdcall16far
UI_VrMode_PopupMenu_ctor_init_logic_289a
          (astruct_376 *param_1,undefined2 param_2,undefined4 param_3)
{
  astruct_376 *uVar1;
  undefined2 uVar2;
  
  UI_Popup_View_Base_ctor_init_logic(param_1,0x427c,0x1050,param_2,param_3);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_376 *)param_1;
  uVar1->field238_0xf2 = 0x0;
  uVar1->field239_0xf6 = 0x0;
  uVar1->field240_0xfa = 0x0;
  uVar1->field241_0xfc = 0x0;
  *(undefined2 *)param_1 = 0x2e4a;
  uVar1->field2_0x2 = 0x1020;
  strcpy_optimized((char *)CONCAT22(uVar2,&uVar1->field_0x5b),s_VrMode_1050_4286);
  uVar1->field171_0xac = 0x44c00000;
  return param_1;
}



// Internal destructor for the VrMode popup menu. Reverts vtable and performs cleanup.

void __stdcall16far UI_VrMode_PopupMenu_dtor_Internal_Cleanup_logic_28fc(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0x2e4a;
  ((u16 *)this_ptr)[0x1] = 0x1020;
  UI_Popup_View_Base_dtor_Internal_Cleanup_logic((u16 *)this_ptr);
  return;
}



// Posts a WM_CLOSE (0x10) message to the window handle associated with the UI
// component.

void __stdcall16far UI_Window_Post_Close_Message_291a(void *this_ptr)
{
  undefined2 unaff_BP;
  
  PostMessage16(0x0,0x0,0x0,
                CONCAT22(unaff_BP,*(undefined2 *)((int)(void *)this_ptr + 0x8)));
  return;
}



// Thin wrapper that calls a global UI initialization helper (1020:79AE).

void __stdcall16far UI_PC_PopupMenu_Call_Global_Init_Helper_2936(void)
{
  UI_Global_Initialize_Stub_Returning_1_79ae();
  return;
}



// Retrieves the active palette from the main view controller and realizes it for the
// popup menu's window.

void __stdcall16far
UI_VrMode_PopupMenu_Realize_Palette_Logic_2992(void *this_ptr,int should_realize)
{
  undefined2 *puVar1;
  HGDIOBJ16 obj;
  HDC16 hdc;
  undefined2 uVar2;
  undefined4 *puVar3;
  
  if (should_realize != 0x0)
  {
    uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
    puVar3 = (undefined4 *)
             UI_Main_View_Controller_Get_Active_Buffer_Ptr_Logic
                       (*(long *)((int)(void *)this_ptr + 0xf2));
    puVar1 = (undefined2 *)((int)*puVar3 + 0x18);
    obj = (*(code *)*puVar1)(0x1018,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
    UnrealizeObject16(obj);
    hdc = GetDC16(*(HWND16 *)((int)(void *)this_ptr + 0x8));
    RealizePalette16(hdc);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Switches the currently selected structure in the construction manager based on popup
// menu selection. Notifies the main view via message 0x69 if necessary.

void * __stdcall16far
UI_VrMode_PopupMenu_Switch_Selected_Structure_29d8
          (void *param_1,undefined2 param_2,u16 param_3,undefined4 param_4)
{
  void *in_AX;
  undefined2 in_DX;
  long context;
  int selection;
  undefined2 in_stack_0000fff6;
  
  selection = (int)((ulong)param_4 >> 0x10);
  UI_Component_Update_Selected_Entity_Logic_79fc
            ((void *)CONCAT22(param_2,param_1),param_3,(u16)param_4,selection);
  context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  if (selection == 0x0)
  {
    UI_Construction_Manager_Switch_Selected_Structure_Logic
              (context,0x1,*(int *)((int)param_1 + 0xfc));
  }
  else
  {
    UI_Construction_Manager_Switch_Selected_Structure_Logic
              (context,0x0,*(int *)((int)param_1 + 0xfc));
    SendMessage16(0x0,0x0,0x69,(long)CONCAT22(in_stack_0000fff6,g_ParentHWND));
  }
  return (void *)CONCAT22(in_DX,in_AX);
}



void __stdcall16far
UI_Main_View_Controller_Set_5E_and_MoveWindow_2a46(void *param_1,int param_2)
{
  UI_Main_View_Controller_Set_Value_at_Offset_5E_Logic
            (*(long *)((int)param_1 + 0xf2),0x1);
  UI_Window_Set_Position_and_Refresh_Children(param_1,param_2);
  return;
}



void __stdcall16far UI_Main_View_Cleanup_Menu_and_Update_Rect_2a6a(void *param_1)
{
  UI_Component_Update_Internal_Rect_from_Window_Bounds_7a50(param_1);
  UI_Main_View_Controller_Set_Value_at_Offset_5E_Logic
            (*(long *)((int)(void *)param_1 + 0xf2),0x0);
  UI_VrMode_PopupMenu_Cleanup_Resources_2c88(param_1);
  return;
}



// Updates the main view viewport offset based on parameters passed from the popup menu.

void __stdcall16far
UI_VrMode_PopupMenu_Update_Viewport_Offset_2a94(void *this_ptr,long packed_offset)
{
  UI_Main_View_Controller_Update_Viewport_Offset_Wrapper_1
            (*(long *)((int)this_ptr + 0xf2),(int)packed_offset,
             (int)((ulong)packed_offset >> 0x10));
  return;
}



void __stdcall16far
UI_Main_View_BringToTop_and_Update_Viewport_2aae(void *param_1,long param_2)
{
  undefined2 uVar1;
  void *this;
  
  this = (void *)param_1;
  UI_Call_Virtual_Refresh_maybe(this);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  BringWindowToTop16(*(HWND16 *)((int)this + 0x8));
  UI_Main_View_Controller_Update_Viewport_Offset_Wrapper_2
            (*(long *)((int)this + 0xf2),param_2);
  return;
}



BOOL16 __stdcall16far
UI_Main_Window_Update_Menu_Enabled_State_2c2a(int param_1,HMENU16 param_2)
{
  BOOL16 BVar1;
  undefined4 uVar2;
  
  if (param_1 != 0x0)
  {
    return param_1 - 0x1;
  }
  EnableMenuItem16(0x400,0x3,param_2);
  if ((int)PTR_DAT_1050_0000_1050_3960 < 0x2)
  {
    uVar2 = 0x50401;
  }
  else
  {
    uVar2 = 0x50400;
  }
  BVar1 = EnableMenuItem16((uint16_t)uVar2,(uint16_t)((ulong)uVar2 >> 0x10),param_2);
  return BVar1;
}



void __stdcall16far UI_Main_View_OnPaint_Wrapper_2c72(u32 param_1)
{
  UI_Main_View_OnPaint_Handler_30be((void *)*(undefined4 *)((int)param_1 + 0xf6));
  return;
}



// Cleans up GDI icons, internal components, and resource-managed IDs specific to the
// VrMode popup menu.

void __stdcall16far UI_VrMode_PopupMenu_Cleanup_Resources_2c88(void *this_ptr)
{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = (void *)this_ptr;
  DestroyIcon16(*(HICON16 *)((int)pvVar3 + 0xc2));
  *(undefined2 *)((int)pvVar3 + 0xc2) = 0x0;
  *(undefined2 *)((int)pvVar3 + 0x8) = 0x0;
  puVar1 = (undefined4 *)*(int *)((int)pvVar3 + 0xf6);
  iVar2 = *(int *)((int)pvVar3 + 0xf8);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1538,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)pvVar3 + 0xf6) = 0x0;
  Resource_Manager_Check_ID_Wrapper_Logic
            ((void *)(void *)*(undefined4 *)((int)pvVar3 + 0xf2));
  *(undefined4 *)((int)pvVar3 + 0xf2) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Main_View_Initialize_and_Setup_Context_2cf0(undefined4 *param_1)
{
  undefined2 *puVar1;
  HICON16 HVar2;
  void *pvVar3;
  int16_t *piVar4;
  undefined2 uVar5;
  int extraout_DX;
  int iVar6;
  long lVar7;
  void *pvVar8;
  int16_t *piVar9;
  undefined4 *this;
  undefined2 uVar10;
  
  this = (undefined4 *)param_1;
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  lVar7 = Resource_Manager_Get_Resource_by_ID_Logic
                    (_p_ResourceManager,*(int *)(this + 0x3f));
  uVar5 = (undefined2)((ulong)lVar7 >> 0x10);
  *(undefined2 *)((int)this + 0xf2) = (int)lVar7;
  *(undefined2 *)(this + 0x3d) = uVar5;
  *(undefined2 *)(this + 0x38) = *(undefined2 *)((int)this + 0xf2);
  *(undefined2 *)((int)this + 0xe2) = uVar5;
  HVar2 = LoadIcon16(s_SITEICON_1050_428d,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  *(HICON16 *)((int)this + 0xc2) = HVar2;
  uVar5 = (undefined2)*(undefined4 *)((int)this + 0xf2);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xf2) + 0x30);
  (*(code *)*puVar1)(0x1538,uVar5,
                     (int)((ulong)*(undefined4 *)((int)this + 0xf2) >> 0x10),HVar2);
  iVar6 = extraout_DX;
  pvVar3 = allocate_memory(CONCAT22(uVar5,0x22));
  if (iVar6 == 0x0 && pvVar3 == NULL)
  {
    *(undefined4 *)((int)this + 0xf6) = 0x0;
  }
  else
  {
    pvVar8 = UI_Main_View_Rendering_Context_ctor((void *)CONCAT22(iVar6,pvVar3),param_1)
    ;
    *(undefined2 *)((int)this + 0xf6) = (int)pvVar8;
    *(int *)(this + 0x3e) = (int)((ulong)pvVar8 >> 0x10);
  }
  this[0x3a] = *(undefined4 *)((int)this + 0xf6);
  UI_Main_View_Controller_Set_FarPtr_at_Offset_80_Logic
            (*(long *)((int)this + 0xf2),(long)param_1);
  UI_Main_View_Controller_Get_Indirect_FarPtr_from_Offset_7C_Logic
            (*(long *)((int)this + 0xf2));
  puVar1 = (undefined2 *)((int)*param_1 + 0x14);
  (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xf2) + 0x10);
  piVar9 = (int16_t *)(*(code *)*puVar1)();
  uVar5 = (undefined2)((ulong)piVar9 >> 0x10);
  piVar4 = (int16_t *)piVar9;
  MoveWindow16(0x1,piVar4[0x3],piVar4[0x2],piVar4[0x1],*piVar9,*(HWND16 *)(this + 0x2));
  UI_Call_Virtual_Refresh_maybe(this);
  UpdateWindow16(*(HWND16 *)(this + 0x2));
  return;
}



// Scalar deleting destructor for the VrMode popup menu component.

void * __stdcall16far
UI_VrMode_PopupMenu_dtor_Scalar_Deleting_2e24(void *this_ptr,byte flags)
{
  UI_VrMode_PopupMenu_dtor_Internal_Cleanup_logic_28fc(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Handles specific window state change events (1, 4, 6) by either clearing internal
// buffer references or invalidating the window rectangle.

void __stdcall16far
UI_Window_Handle_State_Change_Events_3080(void *this_ptr,int event_type)
{
  HWND16 unaff_BP;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (event_type == 0x1)
  {
    *(undefined4 *)((int)(void *)this_ptr + 0x14) = 0x0;
    return;
  }
  if ((event_type != 0x4) && (event_type != 0x6))
  {
    return;
  }
  InvalidateRect16(0x0,(void *)((ulong)*(uint *)((int)(void *)this_ptr + 0x4) << 0x10),
                   unaff_BP);
  return;
}



// Primary WM_PAINT handler for the main game view. Manages BeginPaint/EndPaint, handles
// iconic drawing, and triggers the rendering of game object collections and selection
// boxes.

void __stdcall16far UI_Main_View_OnPaint_Handler_30be(void *this_ptr)
{
  undefined2 *puVar1;
  u8 *puVar2;
  BOOL16 BVar3;
  void *pvVar4;
  void *pvVar5;
  undefined2 uVar6;
  void *unaff_SS;
  u8 *puVar7;
  u8 *params;
  void *pvVar8;
  undefined2 uVar9;
  undefined1 local_30 [0x8];
  HBRUSH16 HStack_28;
  HICON16 HStack_26;
  HDC16 local_24;
  undefined1 local_22 [0x20];
  
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar5 = (void *)this_ptr;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)((int)pvVar5 + 0x4));
  BVar3 = IsIconic16(*(HWND16 *)((int)pvVar5 + 0x4));
  if (BVar3 == 0x0)
  {
    puVar7 = (u8 *)UI_Main_View_Controller_Get_Active_Buffer_Ptr_Logic
                             (*(long *)((int)pvVar5 + 0x14));
    pvVar4 = (void *)((ulong)puVar7 >> 0x10);
    puVar2 = (u8 *)puVar7;
    puVar1 = (undefined2 *)((int)*(undefined4 *)puVar7 + 0x8);
    (*(code *)*puVar1)(0x1018,puVar2,pvVar4,&local_24);
    if (*(int *)((int)*(undefined4 *)((int)pvVar5 + 0x14) + 0x84) == 0x1)
    {
      UI_Main_View_Draw_All_Object_Collections_320e(this_ptr,local_24);
    }
    uVar9 = 0x0;
    puVar1 = (undefined2 *)((int)*(undefined4 *)puVar7 + 0x4);
    params = puVar2;
    pvVar8 = pvVar4;
    (*(code *)*puVar1)(0x1018);
    if (*(int *)((int)*(undefined4 *)((int)pvVar5 + 0x14) + 0x84) != 0x1)
    {
      UI_Main_View_Draw_All_Object_Collections_320e(this_ptr,local_24);
    }
    UI_Draw_Selection_Rectangle_GDI_3488
              (this_ptr,local_24,params,(void *)CONCAT22(uVar9,pvVar8));
    puVar1 = (undefined2 *)((int)*(undefined4 *)puVar7 + 0xc);
    (*(code *)*puVar1)(0x1018,puVar2,pvVar4,&local_24);
  }
  else if (p_FreeBlockListHead == NULL)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)pvVar5 + 0x14) + 0x2c);
    HStack_26 = (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)pvVar5 + 0x14),
                                   (int)((ulong)*(undefined4 *)((int)pvVar5 + 0x14) >>
                                        0x10));
    if (HStack_26 != 0x0)
    {
      HStack_28 = GetStockObject16(0x4);
      GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_30),
                      *(HWND16 *)((int)pvVar5 + 0x4));
      FillRect16(HStack_28,(void *)CONCAT22(local_24,unaff_SS),0x0);
      DrawIcon16(HStack_26,0x2,0x2,local_24);
    }
  }
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)pvVar5 + 0x4));
  return;
}



// Iterates through and renders all game object collections (fleets, links, etc.)
// visible in the main view. Conditionally creates a secondary DC if required.

void __stdcall16far
UI_Main_View_Draw_All_Object_Collections_320e(void *this_ptr,HDC16 hdc)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  char *driver;
  HPALETTE16 obj;
  char *device;
  void *pvVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  long *unaff_SS;
  char *output;
  void *init_data;
  int local_c;
  undefined4 local_a;
  HPALETTE16 HStack_6;
  HDC16 local_4;
  
  local_4 = hdc;
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar4 = (void *)this_ptr;
  if (*(int *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x84) == 0x1)
  {
    uVar7 = (undefined2)((ulong)*(undefined4 *)((int)pvVar4 + 0x14) >> 0x10);
    iVar5 = (int)*(undefined4 *)((int)pvVar4 + 0x14);
    puVar1 = (undefined4 *)*(undefined4 *)(iVar5 + 0x24);
    device = (char *)*(undefined2 *)(iVar5 + 0x26);
    output = NULL;
    init_data = NULL;
    driver = get_with_lazy_init((undefined4 *)puVar1);
    local_4 = CreateDC16(driver,device,output,init_data);
    puVar3 = (undefined2 *)((int)*puVar1 + 0x8);
    HStack_6 = (*(code *)*puVar3)(0x1538,(undefined4 *)puVar1,
                                  (int)((ulong)puVar1 >> 0x10),&local_4);
  }
  UI_Main_View_Controller_Get_Indirect_Refs_from_Offset_7C_Logic
            (*(long *)((int)pvVar4 + 0x14),&local_c,unaff_SS);
  uVar2 = *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x6c);
  UI_Draw_Object_List_as_Polygons_33c0
            (this_ptr,(int)uVar2,(int)((ulong)uVar2 >> 0x10),local_c,local_a,0x1,local_4
            );
  UI_Main_View_Controller_Get_Fleet_List_Logic
            (*(long *)((int)pvVar4 + 0x14),&local_c,unaff_SS);
  uVar2 = *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x74);
  UI_Draw_Object_List_as_Polygons_33c0
            (this_ptr,(int)uVar2,(int)((ulong)uVar2 >> 0x10),local_c,local_a,0x2,local_4
            );
  UI_Main_View_Controller_Get_Collection_88_Logic
            (*(long *)((int)pvVar4 + 0x14),&local_c,unaff_SS);
  uVar2 = *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x68);
  UI_Draw_Object_List_as_Polygons_33c0
            (this_ptr,(int)uVar2,(int)((ulong)uVar2 >> 0x10),local_c,local_a,0x1,local_4
            );
  UI_Main_View_Controller_Get_Collection_8E_Logic
            (*(long *)((int)pvVar4 + 0x14),&local_c,unaff_SS);
  if (local_c != 0x0)
  {
    uVar2 = *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x70);
    UI_Draw_Object_List_as_Polygons_33c0
              (this_ptr,(int)uVar2,(int)((ulong)uVar2 >> 0x10),local_c,local_a,0x1,
               local_4);
  }
  UI_Main_View_Controller_Get_Link_List_Logic_maybe
            (*(long *)((int)pvVar4 + 0x14),&local_c,unaff_SS);
  if (local_c != 0x0)
  {
    uVar2 = *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x78);
    UI_Draw_Object_List_as_Polygons_33c0
              (this_ptr,(int)uVar2,(int)((ulong)uVar2 >> 0x10),local_c,local_a,0x0,
               local_4);
  }
  if (*(int *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x84) == 0x1)
  {
    obj = SelectPalette16(0x0,HStack_6,local_4);
    DeleteObject16(obj);
    DeleteDC16(local_4);
  }
  return;
}



// Scalar deleting destructor for the UI component cleaned up by the 2FEA logic.

void * __stdcall16far
UI_Component_dtor_Scalar_Deleting_logic_3616(void *this_ptr,byte flags)
{
  UI_Component_dtor_GDI_Cleanup_logic_2fea(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// A simple wrapper around the internal cleanup logic for the Summary View.

void __stdcall16far UI_Summary_View_dtor_Internal_Wrapper_3898(void *this_ptr)
{
  UI_Summary_View_Internal_Cleanup_logic_3b3e(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Main initialization routine for the Summary View. Spawns child controls (IDs 0xF4,
// 0xF5), creates the main child component (using 3DA4), and handles window positioning
// and viewport updates. Linked to Resource ID 6.

void __stdcall16far UI_Summary_View_Initialize_Children_and_Layout_38aa(void *this_ptr)
{
  HWND16 hwnd;
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  int16_t *piVar4;
  ushort uVar5;
  int extraout_DX;
  void *pvVar6;
  uint y;
  uint uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  long lVar9;
  void *pvVar10;
  int16_t *piVar11;
  undefined2 uVar13;
  void *this;
  undefined2 uVar14;
  int local_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int local_a [0x2];
  int iStack_6;
  int iStack_4;
  astruct_372 *uVar12;
  
  this = (void *)this_ptr;
  uVar14 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Element_Create_Window_Logic(this);
  lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x6);
  uVar8 = (undefined2)((ulong)lVar9 >> 0x10);
  *(undefined2 *)((int)this + 0xfa) = (int)lVar9;
  *(undefined2 *)((int)this + 0xfc) = uVar8;
  *(undefined2 *)((int)this + 0xe0) = *(undefined2 *)((int)this + 0xfa);
  *(undefined2 *)((int)this + 0xe2) = uVar8;
  if (this_ptr == NULL)
  {
    iVar2 = 0x0;
    uVar8 = 0x0;
  }
  else
  {
    iVar2 = (int)this + 0xf2;
    uVar8 = uVar14;
  }
  uVar13 = (undefined2)*(undefined4 *)((int)this + 0xfa);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xfa) + 0x4);
  (*(code *)*puVar1)(0x1010,uVar13,
                     (int)((ulong)*(undefined4 *)((int)this + 0xfa) >> 0x10),0x0,iVar2,
                     uVar8);
  iVar2 = extraout_DX;
  UI_Navigation_Manager_Populate_Summary_Logic(*(long *)((int)this + 0xfa));
  pvVar3 = allocate_memory(CONCAT22(uVar13,0x20));
  if (iVar2 == 0x0 && pvVar3 == NULL)
  {
    *(undefined4 *)((int)this + 0xf6) = 0x0;
    iVar2 = 0x0;
  }
  else
  {
    pvVar10 = UI_Summary_Child_Component_ctor_3da4
                        ((void *)CONCAT22(iVar2,pvVar3),this_ptr);
    iVar2 = (int)((ulong)pvVar10 >> 0x10);
    *(undefined2 *)((int)this + 0xf6) = (int)pvVar10;
    *(int *)((int)this + 0xf8) = iVar2;
  }
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)((int)this + 0xf6);
  pvVar3 = allocate_memory(CONCAT22(uVar13,0x42));
  if (iVar2 == 0x0 && pvVar3 == NULL)
  {
    *(undefined4 *)((int)this + 0x102) = 0x0;
    pvVar6 = NULL;
  }
  else
  {
    pvVar6 = UI_Complex_Control_ctor
                       (pvVar3,iVar2,0x0,0xf1,0x0,0x1ad,0x1ac,0xf4,
                        *(undefined2 *)((int)this + 0x8));
    *(undefined2 *)((int)this + 0x102) = pvVar3;
    *(undefined2 *)((int)this + 0x104) = pvVar6;
  }
  uVar8 = 0x1000;
  pvVar3 = allocate_memory(CONCAT22(uVar13,0x42));
  if (pvVar6 == NULL && pvVar3 == NULL)
  {
    *(undefined4 *)((int)this + 0x106) = 0x0;
  }
  else
  {
    uVar8 = 0x1008;
    pvVar6 = UI_Complex_Control_ctor
                       (pvVar3,pvVar6,0x0,0xf500f1,0x0,0x1af,0x1ae,0xf5,
                        *(undefined2 *)((int)this + 0x8));
    *(undefined2 *)((int)this + 0x106) = pvVar3;
    *(undefined2 *)((int)this + 0x108) = pvVar6;
  }
  uVar13 = (undefined2)*(undefined4 *)((int)this + 0xfa);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xfa) + 0x10);
  piVar11 = (int16_t *)
            (*(code *)*puVar1)(uVar8,uVar13,
                               (int)((ulong)*(undefined4 *)((int)this + 0xfa) >> 0x10));
  uVar8 = (undefined2)((ulong)piVar11 >> 0x10);
  piVar4 = (int16_t *)piVar11;
  y = piVar4[0x1];
  MoveWindow16(0x1,piVar4[0x3],piVar4[0x2],y,*piVar11,*(HWND16 *)((int)this + 0x8));
  uVar8 = 0x1000;
  pvVar3 = allocate_memory(CONCAT22(uVar13,0x8e));
  uVar7 = y | (uint)pvVar3;
  if (uVar7 == 0x0)
  {
    *(undefined4 *)((int)this + 0x10a) = 0x0;
  }
  else
  {
    uVar8 = 0x1040;
    uVar5 = UI_SubDialog_Base_ctor_init_7728
                      (pvVar3,y,0x1,0x0,0xfc0,*(undefined2 *)((int)this + 0x8));
    *(ushort *)((int)this + 0x10a) = uVar5;
    *(uint *)((int)this + 0x10c) = uVar7;
  }
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0x10a) + 0x74) = 0x1;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x10a) + 0x8);
  (*(code *)*puVar1)(uVar8,(int)*(undefined4 *)((int)this + 0x10a),
                     (int)((ulong)*(undefined4 *)((int)this + 0x10a) >> 0x10));
  if (*(int *)((int)this + 0x10c) != 0x0 || *(int *)((int)this + 0x10a) != 0x0)
  {
    hwnd = *(HWND16 *)((int)*(undefined4 *)((int)this + 0x10a) + 0x6);
    GetWindowRect16((int *)CONCAT22(unaff_SS,local_a),*(HWND16 *)((int)this + 0x8));
    GetWindowRect16((int *)CONCAT22(unaff_SS,&local_12),hwnd);
    iStack_c -= iStack_10;
    iStack_e = iStack_6 - local_a[0x0];
    local_12 = local_a[0x0];
    iStack_10 = iStack_4 + 0x3;
    SetWindowPos16(0x44,iStack_c,iStack_e,iStack_10,local_a[0x0],0x0,hwnd);
  }
  return;
}
