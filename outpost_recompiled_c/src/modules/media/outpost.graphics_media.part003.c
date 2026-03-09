/*
 * Source: outpost.c
 * Theme: graphics_media
 * Chunk: 3/3
 * Original lines (combined): 128834-132861
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// OnPaint handler for the custom message dialog. Selects and realizes the global
// palette, draws a specified icon, and renders formatted text using an object-defined
// font.

undefined2 __stdcall16far UI_Custom_Dialog_OnPaint_Logic_8a06(undefined4 param_1)
{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  void *pvVar4;
  void *hdc;
  HPALETTE16 HVar5;
  void *pvVar6;
  COLORREF hdc_00;
  COLORREF hdc_01;
  HANDLE16 obj;
  COLORREF prev_bk_color;
  COLORREF color;
  int iVar7;
  void *pvVar8;
  undefined2 reg_ss;
  HDC16 in_stack_0000ffbc;
  HGDIOBJ16 local_3e;
  undefined1 local_22 [0x20];
  
  pvVar8 = (void *)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  hdc = (void *)BeginPaint16((undefined1 *)CONCAT22(reg_ss,local_22),
                             *(HWND16 *)(iVar7 + 0x6));
  pvVar4 = (void *)*(undefined4 *)((int)_p_GlobalPaletteObject + 0xe);
  pvVar6 = (void *)pvVar4;
  HVar5 = Palette_Object_Select_And_Realize_Wrapper_Far
                    (pvVar6,(HDC16)((ulong)pvVar4 >> 0x10));
  pvVar6 = Palette_Object_Get_Buffer_Ptr_maybe(pvVar6);
  uVar1 = *(undefined1 *)((int)pvVar6 + 0x95);
  uVar2 = *(undefined1 *)((int)pvVar6 + 0x96);
  uVar3 = *(undefined1 *)((int)pvVar6 + 0x94);
  DrawIcon16(*(HICON16 *)(iVar7 + 0x8e),0xa,0x14,(HDC16)hdc);
  hdc_00 = SetBkColor16(0x0,0x0);
  color = prev_bk_color;
  hdc_01 = SetTextColor16(CONCAT11(uVar1,uVar2),CONCAT11(0x2,uVar3));
  local_3e = 0x0;
  pvVar6 = (void *)*(HWND16 *)(iVar7 + 0x6);
  obj = GetProp16(s_hfont_1050_5dfa,(HWND16)pvVar6);
  if (obj != 0x0)
  {
    pvVar6 = hdc;
    local_3e = SelectObject16(0x1538,obj);
  }
  DrawText16(0x10,(void *)CONCAT22(0xffff,pvVar8),(int16_t)*(undefined4 *)(iVar7 + 0x90)
             ,(void *)CONCAT22(pvVar6,hdc),in_stack_0000ffbc);
  if (obj != 0x0)
  {
    SelectObject16(0x1538,local_3e);
  }
  SetBkColor16(hdc_00,prev_bk_color);
  SetTextColor16(hdc_01,color);
  HVar5 = SelectPalette16(0x0,HVar5,(BOOL16)hdc);
  DeleteObject16(HVar5);
  EndPaint16((undefined1 *)CONCAT22(reg_ss,local_22),*(HWND16 *)(iVar7 + 0x6));
  return 0x1;
}



// Maps a bitmask value (offset 0x98) to a standard Windows icon (Question, Warning,
// Stop, Info) and stores the handle in the dialog structure.

void __stdcall16far UI_Dialog_Load_Icon_by_Bitmask_8b92(void *this_ptr)
{
  byte bVar1;
  HICON16 HVar2;
  undefined2 in_stack_00000006;
  uint uVar3;
  
  bVar1 = *(byte *)((int)this_ptr + 0x98) & 0xf0;
  if (bVar1 == 0x30)
  {
    uVar3 = 0x7f03;
  }
  else if ((bVar1 == 0x10) || (false))
  {
    uVar3 = 0x7f01;
  }
  else if ((bVar1 == 0x40) || (false))
  {
    uVar3 = 0x7f04;
  }
  else
  {
    if (bVar1 != 0x20)
    {
      return;
    }
    uVar3 = 0x7f02;
  }
  HVar2 = LoadIcon16((void *)(ulong)uVar3,0x0);
  *(HICON16 *)((int)this_ptr + 0x8e) = HVar2;
  return;
}



// Uses a screen DC and DT_CALCRECT to determine the bounding box for rendering a
// specific string. Supports custom fonts and considers icon width if applicable.

void __stdcall16far
UI_Dialog_Calculate_Text_Rect_8d14(astruct_30 *param_1,void *param_2)
{
  byte bVar1;
  int16_t iVar2;
  HANDLE16 obj;
  astruct_30 *uVar3;
  void *pvVar3;
  undefined4 in_stack_0000fff4;
  undefined2 uVar4;
  HGDIOBJ16 hdc;
  
  uVar4 = (undefined2)((ulong)in_stack_0000fff4 >> 0x10);
  pvVar3 = (void *)((ulong)param_1 >> 0x10);
  uVar3 = (astruct_30 *)param_1;
  bVar1 = uVar3->field148_0x98 & 0xf0;
  if ((((bVar1 == 0x30) || (bVar1 == 0x10)) || (bVar1 == 0x40)) || (bVar1 == 0x20))
  {
    uVar3->field155_0xa0 = 0xa;
    uVar4 = 0xb;
    iVar2 = GetSystemMetrics16(0xb);
    uVar3->field154_0x9e = iVar2 + 0x28;
  }
  else
  {
    uVar3->field155_0xa0 = 0xa;
    uVar3->field154_0x9e = 0x14;
  }
  hdc = 0x0;
  obj = GetProp16(s_hfont_1050_5e0f,uVar3->field6_0x6);
  if (obj != 0x0)
  {
    hdc = SelectObject16(0x1538,obj);
  }
  DrawText16(0x410,(void *)CONCAT22(0xffff,pvVar3),(int16_t)(void *)uVar3->field143_0x90
             ,(void *)CONCAT22(uVar4,param_2),hdc);
  if (hdc != 0x0)
  {
    SelectObject16(0x1538,hdc);
  }
  return;
}



// Synchronizes the specified Device Context (HDC) with the component's palette. Handles
// primary, alternative, and secondary palettes based on state flags.

void __stdcall16far
UI_DC_Sync_Palette_Logic_9458(void *param_1,byte param_2,u16 param_3)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  HPALETTE16 HVar3;
  void *pvVar4;
  undefined2 uVar5;
  undefined4 *puStack_6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar4 = (void *)param_1;
  if (*(long *)((int)pvVar4 + 0x8) != 0x0)
  {
    puStack_6 = (undefined4 *)*(undefined4 *)((int)pvVar4 + 0x8);
    if ((*(int *)((int)pvVar4 + 0xe) != 0x0 || *(int *)((int)pvVar4 + 0xc) != 0x0) &&
       ((param_2 & 0x1) != 0x0))
    {
      puStack_6 = (undefined4 *)*(undefined4 *)((int)pvVar4 + 0xc);
    }
    if ((*(long *)((int)pvVar4 + 0x10) != 0x0) && ((param_2 & 0x4) != 0x0))
    {
      puStack_6 = (undefined4 *)*(undefined4 *)((int)pvVar4 + 0x10);
    }
    uVar2 = *puStack_6;
    puVar1 = (undefined2 *)((int)uVar2 + 0x8);
    HVar3 = (*(code *)*puVar1)();
    puVar1 = (undefined2 *)((int)uVar2 + 0x4);
    (*(code *)*puVar1)();
    HVar3 = SelectPalette16(0x0,HVar3,param_3);
    DeleteObject16(HVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u32 __stdcall16far
UI_GDI_Set_Brush_and_Palette_Colors_b372(u32 param_1,u16 param_2,uint param_3)
{
  HBRUSH16 HVar1;
  void *pvVar2;
  int16_t iVar3;
  undefined2 reg_dx;
  int iVar4;
  undefined2 uVar5;
  HWND16 reg_cs;
  ulong uVar6;
  u32 local_a;
  
  uVar5 = (undefined2)(param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x8e) == 0x0)
  {
    reg_cs = 0x1538;
    HVar1 = CreateSolidBrush16(0x0);
    *(HBRUSH16 *)(iVar4 + 0x8e) = HVar1;
  }
  if (_PTR_DAT_1050_0000_1050_5efa == 0x0)
  {
    reg_cs = 0x1008;
    pvVar2 = Palette_Object_Get_Buffer_Ptr_maybe
                       ((void *)(void *)*(undefined4 *)
                                         ((int)_p_GlobalPaletteObject + 0xe));
    _PTR_DAT_1050_0000_1050_5efa =
         (ulong)CONCAT12(*(undefined1 *)((int)pvVar2 + 0x94),
                         CONCAT11(*(undefined1 *)((int)pvVar2 + 0x95),
                                  *(undefined1 *)((int)pvVar2 + 0x96)));
  }
  if (0x3 < param_3)
  {
    uVar6 = _PTR_DAT_1050_0000_1050_5efa;
    if (param_3 == 0x4) goto LAB_1040_b41a;
    if ((param_3 == 0x4) || (param_3 != 0x5 && param_3 != 0x6))
    {
      return 0x0;
    }
  }
  iVar3 = GetDlgCtrlId(reg_cs);
  if (iVar3 == 0x14c)
  {
    uVar6 = 0xffff;
  }
  else
  {
    uVar6 = _PTR_DAT_1050_0000_1050_5efa;
    if (iVar3 == 0x175)
    {
      uVar6 = 0xff;
    }
  }
LAB_1040_b41a:
  SetTextColor16((HDC16)uVar6,(COLORREF)(uVar6 >> 0x10));
  SetBkColor16(0x0,0x100);
  return CONCAT22(0x1050,*(undefined2 *)(iVar4 + 0x8e));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Base layer OnPaint handler for view components. Draws a bordered background using GDI
// primitives and dispatches virtual calls for individual content layers.

void __stdcall16far
UI_View_OnPaint_Base_Layer_c74c(undefined4 *param_1,undefined4 param_2)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  HPALETTE16 HVar3;
  HGDIOBJ16 HVar4;
  HPEN16 obj;
  HGDIOBJ16 obj_00;
  undefined4 *puVar5;
  undefined2 uVar6;
  BOOL16 BVar7;
  BOOL16 BVar8;
  
  uVar6 = (undefined2)((ulong)_p_GlobalPaletteObject >> 0x10);
  HVar3 = Palette_Object_Select_And_Realize_Wrapper_Far
                    ((void *)*(undefined2 *)((int)_p_GlobalPaletteObject + 0xe),
                     *(HDC16 *)((int)_p_GlobalPaletteObject + 0x10));
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined4 *)param_1;
  *(undefined2 *)((int)puVar5 + 0x46) = 0x1;
  HVar4 = GetStockObject16(0x4);
  obj = CreatePen16(0x2,0x100,0x1);
  HVar4 = SelectObject16(0x1538,HVar4);
  obj_00 = SelectObject16(0x1538,obj);
  Rectangle16(*(HDC16 *)(puVar5 + 0x9),*(short *)((int)puVar5 + 0x22),0x0,0x0,
              param_2._2_2_);
  MoveTo16(0x0,*(int *)((int)puVar5 + 0x36) * 0x2 + *(int *)((int)puVar5 + 0x2a),
           param_2._2_2_);
  LineTo16(*(HDC16 *)(puVar5 + 0x9),
           *(int *)((int)puVar5 + 0x36) * 0x2 + *(int *)((int)puVar5 + 0x2a),
           param_2._2_2_);
  BVar8 = param_2._2_2_;
  SelectObject16(0x1538,HVar4);
  BVar7 = param_2._2_2_;
  HVar4 = SelectObject16(0x1538,obj_00);
  DeleteObject16(HVar4);
  uVar2 = *param_1;
  puVar1 = (undefined2 *)((int)uVar2 + 0x10);
  (*(code *)*puVar1)(0x1538,param_1,param_2,BVar7,BVar8);
  puVar1 = (undefined2 *)((int)uVar2 + 0x14);
  (*(code *)*puVar1)(0x1538,param_1,param_2._2_2_);
  *(undefined2 *)((int)puVar5 + 0x46) = 0x0;
  HVar3 = SelectPalette16(0x0,HVar3,param_2._2_2_);
  DeleteObject16(HVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Dispatches drawing logic for multiple layers (Primary, Secondary, Special) of a view
// component. Manages the selection and realization of the global palette.

void __stdcall16far
UI_View_Dispatch_Layer_Drawing_c886(undefined4 param_1,byte param_2,BOOL16 param_3)
{
  undefined2 *puVar1;
  HPALETTE16 obj;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 reg_cs;
  undefined4 *local_8;
  HPALETTE16 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0xa) != 0x0 || *(int *)(iVar2 + 0x8) != 0x0)
  {
    local_4 = 0x0;
    if (*(int *)(iVar2 + 0x46) == 0x0)
    {
      uVar4 = (undefined2)((ulong)_p_GlobalPaletteObject >> 0x10);
      reg_cs = 0x1008;
      local_4 = Palette_Object_Select_And_Realize_Wrapper_Far
                          ((void *)*(undefined2 *)((int)_p_GlobalPaletteObject + 0xe),
                           *(HDC16 *)((int)_p_GlobalPaletteObject + 0x10));
    }
    local_8 = (undefined4 *)*(undefined4 *)(iVar2 + 0x8);
    uVar4 = *(undefined2 *)(iVar2 + 0xa);
    if ((*(int *)(iVar2 + 0xe) != 0x0 || *(int *)(iVar2 + 0xc) != 0x0) &&
       ((param_2 & 0x1) != 0x0))
    {
      local_8 = (undefined4 *)*(undefined4 *)(iVar2 + 0xc);
      uVar4 = *(undefined2 *)(iVar2 + 0xe);
    }
    if ((*(long *)(iVar2 + 0x10) != 0x0) && ((param_2 & 0x4) != 0x0))
    {
      local_8 = (undefined4 *)*(undefined4 *)(iVar2 + 0x10);
      uVar4 = *(undefined2 *)(iVar2 + 0x12);
    }
    puVar1 = (undefined2 *)((int)*local_8 + 0x4);
    (*(code *)*puVar1)(reg_cs,(undefined4 *)local_8,uVar4,
                       *(undefined2 *)(iVar2 + 0x28),*(undefined2 *)(iVar2 + 0x26),
                       &param_3);
    if (*(int *)(iVar2 + 0x46) == 0x0)
    {
      obj = SelectPalette16(0x0,local_4,param_3);
      DeleteObject16(obj);
    }
  }
  return;
}
