/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 23/54
 * Original lines (combined): 62968-66359
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Triggers sound 0x91 and spawns the VrMode UI view as a child of the current panel
// (likely Navigation).

void __stdcall16far UI_Navigation_Panel_Open_VrMode_View_Logic(void *this_ptr)
{
  undefined2 *puVar1;
  u32 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int reg_dx;
  int extraout_DX;
  astruct_355 *uVar3;
  undefined2 uVar5;
  int unaff_SS;
  undefined2 in_stack_0000fff2;
  undefined4 uStack_a;
  u32 local_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_355 *)this_ptr;
  if (uVar3->field235_0xee != NULL)
  {
    puVar1 = (undefined2 *)((int)*uVar3->field235_0xee + 0x8);
    (*(code *)*puVar1)();
    reg_dx = extraout_DX;
  }
  if (uVar3->field233_0xea == 0x0)
  {
    uVar3->field233_0xea = 0x1;
    init_word_pair(&local_6,unaff_SS,0x1);
    puVar2 = &local_6;
    media_play_from_resource_ptr_wrapper
              ((void *)_p_UIPanelContainer,(void *)((ulong)_p_UIPanelContainer >> 0x10))
    ;
    uVar3->field234_0xec = puVar2;
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000fff2,0x112));
    if (reg_dx == 0x0 && pvVar3 == NULL)
    {
      puVar4 = NULL;
      uStack_a = NULL;
    }
    else
    {
      uVar3->field204_0xcc = uVar3->field204_0xcc + 0x1;
      uStack_a = UI_VrMode_View_ctor_init_logic_3644
                           (pvVar3,reg_dx,uVar3->field204_0xcc,this_ptr);
      puVar4 = (undefined4 *)uStack_a;
    }
    UI_Window_Register_Child_Event_Handler(this_ptr,0x0,puVar4,uStack_a._2_2_);
    puVar1 = (undefined2 *)((int)*uStack_a + 0xc);
    (*(code *)*puVar1)(0x1008,(undefined4 *)uStack_a,uStack_a._2_2_,0x5);
  }
  return;
}



// Constructor for the Navigation View UI. Creates window, sets DC, and initializes its
// navigation-specific internal component.

void __stdcall16far
UI_Navigation_View_ctor_init_Window_and_Child_Component(void *param_1)
{
  void *pvVar1;
  int reg_dx;
  astruct_354 *uVar3;
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
  if (reg_dx != 0x0 || pvVar1 != NULL)
  {
    pvVar2 = UI_Navigation_Child_Component_ctor_init_logic_Res25
                       ((void *)CONCAT22(reg_dx,pvVar1),*(u16 *)((int)this + 0x8));
    *(undefined2 *)((int)this + 0xee) = (void *)pvVar2;
    *(undefined2 *)((int)this + 0xf0) = (int)((ulong)pvVar2 >> 0x10);
    return;
  }
  *(undefined4 *)((int)this + 0xee) = 0x0;
  return;
}



void __stdcall16far UI_Window_Cleanup_SubObject_EE_and_Destroy_770e(void *param_1)
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
  *(undefined4 *)((int)this + 0xee) = 0x0;
  UI_Window_Destroy_Logic(this);
  return;
}



void * UI_Navigation_Panel_dtor_Wrapper_774c
                 (undefined2 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)param_2 + -0xe2));
  pvVar1 = UI_Navigation_Panel_dtor_Scalar_Deleting_775a(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Navigation_Panel_dtor_Scalar_Deleting_775a(void *param_1,byte param_2)
{
  UI_Navigation_Panel_Initialize_Vtable_and_Globals(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Internal destructor for the Navigation child component. Releases internal resource
// IDs.

void __stdcall16far
UI_Navigation_Child_Component_dtor_Internal_Cleanup_logic(void *this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  *(undefined2 *)this_ptr = 0x7902;
  *(undefined2 *)(iVar1 + 0x2) = 0x1020;
  if (*(long *)(iVar1 + 0x14) != 0x0)
  {
    Resource_Manager_Check_ID_Wrapper_Logic
              ((void *)(void *)*(undefined4 *)(iVar1 + 0x14));
  }
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4(this_ptr);
  return;
}



// Scalar deleting destructor for the Navigation child component.

void * __stdcall16far
UI_Navigation_Child_Component_dtor_Scalar_Deleting(void *this_ptr,byte flags)
{
  UI_Navigation_Child_Component_dtor_Internal_Cleanup_logic(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Base constructor for UI popup/floating views. Initializes vtable to 0x7B86 and stores
// the menu resource name.

void * __stdcall16far
UI_Popup_View_Base_ctor_init_logic
          (astruct_353 *param_1,void *param_2,undefined2 param_3,undefined4 param_4)
{
  astruct_353 *uVar1;
  undefined2 uVar2;
  
  UI_Child_Parent_Window_ctor(param_1,param_3,param_4);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_353 *)param_1;
  uVar1->field223_0xe0 = 0x0;
  uVar1->field224_0xe4 = 0x0;
  uVar1->field225_0xe8 = 0x0;
  uVar1->field226_0xec = 0x0;
  uVar1->field227_0xee = param_2;
  *(undefined2 *)param_1 = 0x7b86;
  uVar1->field2_0x2 = 0x1020;
  return param_1;
}



// Internal destructor for base popup views. Destroys the associated menu and reverts
// vtable pointers.

void __stdcall16far UI_Popup_View_Base_dtor_Internal_Cleanup_logic(u16 *this_ptr)
{
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x7b86;
  this_ptr[0x1] = 0x1020;
  if (this_ptr[0x76] != 0x0)
  {
    DestroyMenu16(this_ptr[0x76]);
  }
  UI_Control_Sub_dtor_logic(this_ptr + 0x69);
  *_this_ptr = 0x380a;
  this_ptr[0x1] = 0x1008;
  *_this_ptr = (u16)(char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  return;
}



// A simple stub function that returns 1. Likely part of a global initialization
// sequence or a default boolean check.

u16 __stdcall16far UI_Global_Initialize_Stub_Returning_1_79ae(void)
{
  return 0x1;
}



void __stdcall16far UI_Component_Draw_Labeled_Rect_VCall_79e4(u32 param_1)
{
  UI_Component_Draw_Labeled_Rectangle_Logic_7cc8
            ((void *)*(undefined4 *)((int)param_1 + 0xe8));
  return;
}



// Updates the component's internal layout rectangle (at offset 0xE0) by calculating the
// client area from the current window bounds and system metrics.

void __stdcall16far
UI_Component_Update_Internal_Rect_from_Window_Bounds_7a50(void *this_ptr)
{
  undefined2 *puVar1;
  BOOL16 BVar2;
  int16_t iVar3;
  int16_t iVar4;
  astruct_351 *uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  int local_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  local_a = 0x0;
  iStack_8 = 0x0;
  iStack_6 = 0x0;
  iStack_4 = 0x0;
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_351 *)this_ptr;
  BVar2 = IsIconic16(uVar5->field8_0x8);
  if (BVar2 == 0x0)
  {
    GetWindowRect16((int *)CONCAT22(unaff_SS,&local_a),uVar5->field8_0x8);
    iStack_6 -= local_a;
    iStack_4 -= iStack_8;
    iVar3 = GetSystemMetrics16(0x5);
    iVar4 = GetSystemMetrics16(0x6);
    local_a += iVar3 * 0x2;
    iStack_8 += iVar4 * 0x2;
  }
  puVar1 = (undefined2 *)((int)*uVar5->field223_0xe0 + 0x14);
  (*(code *)*puVar1)(0x1538,uVar5->field223_0xe0,&local_a);
  return;
}



void __stdcall16far
UI_Component_Show_Popup_Menu_7ad2(u32 param_1,int16_t param_2,int16_t param_3)
{
  HMENU16 HVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  u16 local_6;
  u16 local_4;
  
  uVar3 = (undefined2)(param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(long *)(iVar2 + 0xee) != 0x0) && (*(int *)(iVar2 + 0xec) == 0x0))
  {
    HVar1 = LoadMenu16((void *)*(undefined4 *)(iVar2 + 0xee),
                       (HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
    *(HMENU16 *)(iVar2 + 0xec) = HVar1;
    if (HVar1 == 0x0)
    {
      return;
    }
    HVar1 = GetSubMenu16(0x0,*(HMENU16 *)(iVar2 + 0xec));
    *(HMENU16 *)(iVar2 + 0xec) = HVar1;
    if (HVar1 == 0x0)
    {
      return;
    }
  }
  local_6 = param_3;
  local_4 = param_2;
  ClientToScreen16((u16 *)CONCAT22(unaff_SS,&local_6),*(HWND16 *)(iVar2 + 0x8));
  TrackPopupMenu16(NULL,*(HWND16 *)(iVar2 + 0x8),0x0,local_4,local_6,0x0,
                   *(HMENU16 *)(iVar2 + 0xec));
  return;
}



u16 * __stdcall16far
UI_Popup_View_Base_dtor_Scalar_Deleting_7b60(u16 *param_1,u16 param_2,byte param_3)
{
  UI_Popup_View_Base_dtor_Internal_Cleanup_logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Renders a styled labeled rectangle with a border and centered text. Handles both
// normal and iconic states, and includes logic for an internal separator line.

void __stdcall16far UI_Component_Draw_Labeled_Rectangle_Logic_7cc8(void *this_ptr)
{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  int x;
  HDC16 HVar4;
  HGDIOBJ16 HVar5;
  undefined4 *color;
  HDC16 HVar6;
  HPEN16 obj;
  HDC16 hdc;
  HDC16 hdc_00;
  char *str;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  void *unaff_SS;
  char *LPCSTR_str;
  HWND16 hwnd;
  short sStack_42;
  int local_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  HPALETTE16 HStack_c;
  void *pvStack_a;
  HDC16 local_6;
  BOOL16 BStack_4;
  
  uVar10 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar8 = (int)this_ptr;
  hwnd = *(HWND16 *)(iVar8 + 0x4);
  BStack_4 = IsIconic16(hwnd);
  if ((BStack_4 == 0x0) || (p_FreeBlockListHead != NULL))
  {
    local_6 = GetWindowDC16(*(HWND16 *)(iVar8 + 0x4));
    pvStack_a = (void *)*(undefined4 *)((int)_p_GlobalPaletteObject + 0xe);
    HStack_c = Palette_Object_Select_And_Realize_Wrapper_Far
                         ((void *)pvStack_a,(HDC16)((ulong)pvStack_a >> 0x10));
    GetWindowRect16((int *)CONCAT22(unaff_SS,&local_14),*(HWND16 *)(iVar8 + 0x4));
    x = (iStack_10 - local_14) + -0x1;
    hdc_00 = (iStack_e - iStack_12) - 0x1;
    iVar1 = *(int *)(iVar8 + 0x12);
    HVar4 = hdc_00;
    if (BStack_4 == 0x0)
    {
      HVar4 = *(int *)(iVar8 + 0xe) - *(int *)(iVar8 + 0x12);
    }
    HVar6 = local_6;
    HVar5 = GetStockObject16(0x4);
    FillRect16(HVar5,(void *)CONCAT22(HVar6,unaff_SS),hwnd);
    uVar11 = (undefined2)((ulong)*(undefined4 *)(iVar8 + 0x6) >> 0x10);
    iVar9 = (int)*(undefined4 *)(iVar8 + 0x6);
    puVar2 = (undefined4 *)*(undefined4 *)(iVar9 + 0xe0);
    color = (undefined4 *)puVar2;
    puVar3 = (undefined2 *)((int)*puVar2 + 0x24);
    iVar9 = (*(code *)*puVar3)(0x1538,color,*(undefined2 *)(iVar9 + 0xe2),0x0,0x0);
    HVar6 = (-(uint)(iVar9 == 0x0) & 0x1e) + 0x25;
    obj = CreatePen16(HVar6,0x100,(COLORREF)color);
    HVar5 = SelectObject16(0x1538,obj);
    MoveTo16(0x0,0x0,local_6);
    LineTo16(0x0,x,local_6);
    LineTo16(hdc_00,x,local_6);
    LineTo16(hdc_00,0x0,local_6);
    LineTo16(0x0,0x0,local_6);
    if (BStack_4 == 0x0)
    {
      hdc = *(int *)(iVar8 + 0xe) - *(int *)(iVar8 + 0x12);
      MoveTo16(hdc,0x0,local_6);
      LineTo16(hdc,x,local_6);
    }
    puVar3 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar8 + 0x6) + 0x18);
    LPCSTR_str = (char *)(*(code *)*puVar3)(0x1538,(int)*(undefined4 *)(iVar8 + 0x6),
                                            (int)((ulong)*(undefined4 *)(iVar8 + 0x6) >>
                                                 0x10));
    str = (char *)((ulong)LPCSTR_str >> 0x10);
    if (*LPCSTR_str != '\0')
    {
      pcVar7 = str;
      SetBkColor16(0x0,0x0);
      SetTextColor16(HVar6,0x100);
      HVar6 = LStrLen16(LPCSTR_str);
      GetTextExtent16(HVar6,(char *)LPCSTR_str,(short)str);
      if (BStack_4 == 0x0)
      {
        sStack_42 = (int)(HVar4 - iVar1) / 0x2 - (int)pcVar7 / 0x2;
      }
      else
      {
        sStack_42 = (int)hdc_00 / 0x2 - (int)pcVar7 / 0x2;
      }
      TextOut16(0x1538,HVar6,(short)(char *)LPCSTR_str,str,sStack_42);
    }
    HStack_c = SelectPalette16(0x0,HStack_c,local_6);
    DeleteObject16(HStack_c);
    SelectObject16(0x1538,HVar5);
    DeleteObject16(obj);
    ReleaseDC16(local_6,*(HWND16 *)(iVar8 + 0x4));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Base constructor for panel-style UI components. Initializes vtable to 0x82BC, sets up
// standard GDI objects, and loads viewport dimensions from Resource 0x48.

void * __stdcall16far
UI_Panel_Base_ctor_init_logic_7f7a(void *this_ptr,void *arg1,void *parent_ptr)
{
  HGDIOBJ16 HVar1;
  HCURSOR16 HVar2;
  undefined2 uVar4;
  astruct_349 *uVar3;
  long lVar5;
  void *this;
  int arg2;
  void *parent;
  
  parent = (void *)((ulong)arg1 >> 0x10);
  this = (void *)this_ptr;
  arg2 = (int)((ulong)this_ptr >> 0x10);
  UI_DanBrotherton_Window_ctor(this,arg2,(int)(void *)arg1,parent);
  *(undefined2 *)((int)this + 0xe2) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0xe4) = 0x1008;
  *(undefined2 *)((int)this + 0xe2) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0xe4) = 0x1008;
  *(undefined4 *)((int)this + 0xe6) = 0x0;
  *(undefined2 *)((int)this + 0xea) = 0x0;
  *(undefined2 *)((int)this + 0xec) = 0x0;
  *(undefined2 *)this_ptr = 0x82bc;
  *(undefined2 *)((int)this + 0x2) = 0x1020;
  *(undefined2 *)((int)this + 0xe2) = 0x8358;
  *(undefined2 *)((int)this + 0xe4) = 0x1020;
  strcpy_optimized((char *)CONCAT22(arg2,(char *)((int)this + 0x5b)),s_VrMode_1050_4422)
  ;
  HVar1 = GetStockObject16(0x5);
  *(HGDIOBJ16 *)((int)this + 0xc6) = HVar1;
  HVar2 = LoadCursor16((void *)0x7f00,0x0);
  *(HCURSOR16 *)((int)this + 0xc4) = HVar2;
  *(undefined2 *)((int)this + 0xc8) = (char *)s_576_bmp_1050_2027 + 0x1;
  *(undefined4 *)((int)this + 0xac) = 0x47000000;
  *(undefined2 *)((int)this + 0xbc) = *(undefined2 *)((int)(void *)parent_ptr + 0x8);
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar4 = (undefined2)((ulong)lVar5 >> 0x10);
  *(undefined2 *)((int)this + 0xb4) = 0x0;
  *(undefined2 *)((int)this + 0xb6) = 0x0;
  *(undefined2 *)((int)this + 0xb8) = *(undefined2 *)((int)lVar5 + 0xa);
  *(undefined2 *)((int)this + 0xba) = *(undefined2 *)((int)lVar5 + 0xc);
  *(undefined2 *)((int)this + 0xca) = parent;
  UI_Container_Register_Class_Logic(this);
  return this_ptr;
}



// Internal destructor for base panel UI components. Reverts vtable pointers and cleans
// up the inherited UI control sub-logic.

void __stdcall16far UI_Panel_Base_dtor_Internal_Cleanup_logic_808e(void *this_ptr)
{
  u16 *puVar1;
  undefined2 uVar2;
  astruct_348 *uVar3;
  undefined2 uVar4;
  u16 *puStack_6;
  undefined2 uStack_4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_348 *)this_ptr;
  *(undefined2 *)this_ptr = 0x82bc;
  uVar3->field2_0x2 = 0x1020;
  uVar3->field225_0xe2 = 0x8358;
  uVar3->field226_0xe4 = 0x1020;
  if (this_ptr == NULL)
  {
    puVar1 = NULL;
    uVar2 = 0x0;
  }
  else
  {
    puVar1 = &uVar3->field225_0xe2;
    uVar2 = uVar4;
  }
  _puStack_6 = (u16 *)CONCAT22(uVar2,puVar1);
  *_puStack_6 = (u16)(char *)s_1_1050_389a;
  puVar1[0x1] = 0x1008;
  UI_Control_Sub_dtor_logic(&uVar3->field_0xd2);
  *(undefined2 *)this_ptr = 0x380a;
  uVar3->field2_0x2 = 0x1008;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar3->field2_0x2 = 0x1008;
  return;
}



void __stdcall16far UI_Object_VCall_60_at_4_8106(u32 param_1,u16 param_2,u32 param_3)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x4) + 0x60);
  (*(code *)*puVar1)();
  return;
}



void __stdcall16far UI_Window_Conditional_Destroy_EC_8250(u32 param_1)
{
  BOOL16 BVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)(param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0xec) != 0x0)
  {
    BVar1 = IsWindow16(*(HWND16 *)(iVar2 + 0xec));
    if (BVar1 != 0x0)
    {
      DestroyWindow16(*(HWND16 *)(iVar2 + 0xec));
      *(undefined2 *)(iVar2 + 0xec) = 0x0;
    }
  }
  return;
}



void * UI_Panel_Base_dtor_Wrapper_8288(undefined2 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)param_2 + -0xe2));
  pvVar1 = UI_Panel_Base_dtor_Scalar_Deleting_8296(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Panel_Base_dtor_Scalar_Deleting_8296(void *param_1,byte param_2)
{
  UI_Panel_Base_dtor_Internal_Cleanup_logic_808e(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



void __stdcall16far UI_Icon_Component_OnPaint_Logic_83f8(undefined4 param_1)
{
  void *pvVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x4) != 0x0)
  {
    pvVar1 = (void *)*(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x1c) + 0xa);
    Bitmap_Object_Blit_Transparent_Logic
              ((void *)pvVar1,(void *)((ulong)pvVar1 >> 0x10),(void *)(iVar2 + 0x16));
  }
  return;
}



void * __stdcall16far
UI_Lab_Item_List_Base_dtor_Scalar_Deleting_843c(void *param_1,byte param_2)
{
  UI_Lab_Item_List_Base_dtor_Internal_Cleanup_logic(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_Lab_Item_List_Base_dtor_Scalar_Deleting_8784(void *param_1,byte param_2)
{
  UI_Lab_Item_List_Base_dtor_Internal_Cleanup_logic(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Scalar deleting destructor for the Lab Item List base component.

void * __stdcall16far
UI_Lab_Item_List_Base_dtor_Scalar_Deleting_logic_8a5e(void *this_ptr,byte flags)
{
  UI_Lab_Item_List_Base_dtor_Internal_Cleanup_logic(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Internal destructor for the dual-item Lab component. Reverts vtable and calls base
// cleanup.

void __stdcall16far UI_Lab_Item_Dual_dtor_Internal_Cleanup_logic_8bae(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0x8e92;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1020;
  UI_Lab_Item_List_Base_dtor_Internal_Cleanup_logic(this_ptr);
  return;
}



void * __stdcall16far
UI_Lab_Item_Dual_dtor_Scalar_Deleting_8e6c(void *param_1,byte param_2)
{
  UI_Lab_Item_Dual_dtor_Internal_Cleanup_logic_8bae(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Internal destructor for the Lab research category list. Cleans up category-specific
// objects and calls base list cleanup.

void __stdcall16far
UI_Lab_Item_Category_List_dtor_Internal_Cleanup_logic_8f74(void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  *(undefined2 *)this_ptr = 0x9204;
  *(undefined2 *)((int)pvVar2 + 0x2) = 0x1020;
  if (*(int *)((int)pvVar2 + 0xb6) != 0x0 ||
      (undefined4 *)*(int *)((int)pvVar2 + 0xb4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)pvVar2 + 0xb4);
    (*(code *)*puVar1)();
  }
  UI_Lab_Item_List_Base_dtor_Internal_Cleanup_logic(this_ptr);
  return;
}



void __stdcall16far
UI_Animation_Update_Selected_Structure_Points_8fb4(undefined4 param_1)
{
  undefined2 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  void *pvVar7;
  HWND16 in_stack_0000ffe2;
  int local_8;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)((int)*(undefined4 *)(iVar4 + 0xba) + 0x1e) != 0x0)
  {
    lVar6 = UI_Construction_Manager_Get_Selected_Structure_Bitmap_Logic
                      (*(long *)(iVar4 + 0x16));
    iVar2 = (int)((ulong)lVar6 >> 0x10);
    *(undefined2 *)(iVar4 + 0xaa) = (int)lVar6;
    *(int *)(iVar4 + 0xac) = iVar2;
    if (iVar2 != 0x0 || *(int *)(iVar4 + 0xaa) != 0x0)
    {
      uVar1 = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x16) + 0x16);
      iVar2 = *(int *)((int)*(undefined4 *)(iVar4 + 0xaa) + 0xa);
      for (local_8 = 0x0; local_8 < iVar2; local_8 += 0x1)
      {
        pvVar7 = (void *)Data_History_Object_Get_Point_At_Index
                                   ((void *)(void *)*(undefined4 *)(iVar4 + 0xaa),
                                    (long)local_8);
        if ((pvVar7 != NULL) && (0x9 < *(int *)((int)(void *)pvVar7 + 0x2e)))
        {
          lVar6 = Gameplay_Object_Update_Animation_Logic((void *)pvVar7);
          pvVar3 = (void *)((ulong)lVar6 >> 0x10);
          if (pvVar3 != NULL || (int)lVar6 != 0x0)
          {
            InvalidateRect16(0x0,(void *)CONCAT22(uVar1,pvVar3),in_stack_0000ffe2);
          }
        }
      }
    }
  }
  return;
}



// Scalar deleting destructor for the Lab Category List.

void * __stdcall16far
UI_Lab_Item_Category_List_dtor_Scalar_Deleting_logic_91de(void *this_ptr,byte flags)
{
  UI_Lab_Item_Category_List_dtor_Internal_Cleanup_logic_8f74(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



void __stdcall16far UI_Simple_Bitmap_Component_OnPaint_Logic_9312(u32 param_1)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  u32 local_26;
  undefined1 local_22 [0x20];
  
  uVar4 = (undefined2)(param_1 >> 0x10);
  iVar3 = (int)param_1;
  BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar3 + 0x4));
  puVar1 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x6) + 0xa);
  puVar2 = (undefined2 *)((int)*puVar1 + 0x4);
  (*(code *)*puVar2)(0x1538,(undefined4 *)puVar1,(int)((ulong)puVar1 >> 0x10),0x0,
                     CONCAT22(uVar4,iVar3 + 0xa));
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar3 + 0x4));
  return;
}



// Scalar deleting destructor for the Grid sub-component.

void * __stdcall16far
UI_SubComponent_Grid_dtor_Scalar_Deleting_96a2(void *this_ptr,byte flags)
{
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



void __cdecl16far UI_Planet_View_Batch_Function_ba2b(void)
{
  func_0x102096d4();
  func_0x1020a426();
  return;
}



// Constructor for a UI list component. Initializes dimensions and internal state,
// defaulting the item height to 5 if not specified. Calls secondary initialization
// logic.

void * __stdcall16far
UI_Item_List_ctor_init_logic(void *this_ptr,uint width,uint height)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  *(undefined4 *)this_ptr = 0x0;
  *(undefined2 *)(iVar1 + 0x4) = 0x0;
  *(uint *)(iVar1 + 0x6) = height;
  *(uint *)(iVar1 + 0x8) = width;
  if (*(int *)(iVar1 + 0x6) == 0x0)
  {
    *(undefined2 *)(iVar1 + 0x6) = 0x5;
  }
  UI_Item_List_Expand_Capacity_Logic(this_ptr);
  return this_ptr;
}



// Iterates through the UI Item List and returns the sum of the 32-bit values stored at
// the beginning of each 6-byte element.

void * __stdcall16far UI_Item_List_Sum_Values_Logic(void *this_ptr)
{
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  if (*(long *)this_ptr == 0x0)
  {
    return NULL;
  }
  uStack_6 = NULL;
  uStack_8 = 0x0;
  while( true )
  {
    if (*(uint *)((int)this_ptr + 0x4) <= uStack_8) break;
    uStack_6 = (void *)((long)uStack_6 +
                       *(long *)((int)*(undefined4 *)this_ptr + uStack_8 * 0x6));
    uStack_8 += 0x1;
  }
  return uStack_6;
}



// Wraps the binary search logic to find an item in the list and returns its associated
// far pointer if found.

void * __stdcall16far
UI_Item_List_Find_Item_FarPtr_Logic(void *param_1,undefined4 param_2)
{
  undefined2 *reg_ax;
  int reg_dx;
  undefined4 uStack_6;
  
  UI_Item_List_Binary_Search_Logic
            ((void *)CONCAT22((int)param_2,param_1),(u16)((ulong)param_2 >> 0x10));
  uStack_6 = (undefined2 *)CONCAT22(reg_dx,reg_ax);
  if (reg_dx != 0x0 || reg_ax != NULL)
  {
    return (void *)CONCAT22(reg_ax[0x1],(void *)*uStack_6);
  }
  return NULL;
}
