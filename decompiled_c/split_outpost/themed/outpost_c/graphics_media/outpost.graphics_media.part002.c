/*
 * Source: outpost.c
 * Theme: graphics_media
 * Chunk: 2/3
 * Original lines (combined): 54212-123023
 * Boundaries: top-level declarations/definitions only
 */




// WM_PAINT handler for a UI component that renders an internal bitmap (offset 5).
// Handles palette realization and GDI painting sequence.

void __stdcall16far UI_Component_OnPaint_Render_Internal_Bitmap_logic_e16c(long context)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  HPALETTE16 HVar4;
  astruct_411 *uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  HDC16 local_24;
  undefined1 local_22 [0x20];
  
  uVar6 = (undefined2)((ulong)context >> 0x10);
  uVar5 = (astruct_411 *)context;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),uVar5->field4_0x4);
  puVar1 = (undefined4 *)*(undefined4 *)((int)uVar5->field5_0x6 + 0xa);
  uVar3 = *puVar1;
  puVar2 = (undefined2 *)((int)uVar3 + 0x8);
  HVar4 = (*(code *)*puVar2)(0x1538,(undefined4 *)puVar1,(int)((ulong)puVar1 >> 0x10),
                             &local_24);
  puVar2 = (undefined2 *)((int)uVar3 + 0x4);
  (*(code *)*puVar2)(0x1538,puVar1,0x0,&local_24);
  HVar4 = SelectPalette16(0x0,HVar4,local_24);
  DeleteObject16(HVar4);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),uVar5->field4_0x4);
  return;
}



// Default WM_PAINT handler for UI components. Renders the component's internal
// bitmap/palette using GDI BeginPaint/EndPaint. Uses "tile2.bmp" as a background
// placeholder.

void __stdcall16far UI_Component_Default_OnPaint_Handler_0c3e(long context)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  HPALETTE16 HVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined4 *puStack_28;
  HDC16 local_24;
  undefined1 local_22 [0x20];
  
  uVar7 = (undefined2)((ulong)context >> 0x10);
  iVar5 = (int)context;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)(iVar5 + 0x4));
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x6) >> 0x10);
  iVar6 = (int)*(undefined4 *)(iVar5 + 0x6);
  puVar1 = (undefined4 *)*(undefined4 *)(iVar6 + 0xa);
  puStack_28 = (undefined4 *)puVar1;
  if (*(int *)(iVar6 + 0xc) != 0x0 || puStack_28 != NULL)
  {
    uVar3 = *puVar1;
    puVar2 = (undefined2 *)((int)uVar3 + 0x8);
    HVar4 = (*(code *)*puVar2)(0x1538,puStack_28,(int)((ulong)puVar1 >> 0x10),&local_24)
    ;
    puVar2 = (undefined2 *)((int)uVar3 + 0x4);
    (*(code *)*puVar2)(0x1538,puVar1,*(undefined2 *)(iVar5 + 0xc),
                       *(undefined2 *)(iVar5 + 0xa),&local_24);
    HVar4 = SelectPalette16(0x0,HVar4,local_24);
    DeleteObject16(HVar4);
  }
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar5 + 0x4));
  return;
}



// Processes palette changes for a UI component. Realizes the new palette and
// invalidates the window if colors have shifted.

int __stdcall16far UI_Component_Handle_Palette_Change_and_Invalidate_0cd2(long context)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  HDC16 hdc;
  HDC16 hpal;
  HPALETTE16 hpal_00;
  uint16_t uVar3;
  astruct_388 *iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  void *pvVar8;
  HDC16 force_background;
  undefined4 *puStack_6;
  
  uVar6 = (undefined2)((ulong)context >> 0x10);
  iVar4 = (astruct_388 *)context;
  uVar7 = (undefined2)(iVar4->field5_0x6 >> 0x10);
  iVar5 = (int)iVar4->field5_0x6;
  puVar1 = (undefined4 *)*(undefined4 *)(iVar5 + 0xa);
  puStack_6 = (undefined4 *)puVar1;
  if (*(int *)(iVar5 + 0xc) != 0x0 || puStack_6 != NULL)
  {
    puVar2 = (undefined2 *)((int)*puVar1 + 0x14);
    pvVar8 = (void *)(*(code *)*puVar2)();
    if (pvVar8 != NULL)
    {
      hdc = GetDC16(iVar4->field4_0x4);
      hpal = hdc;
      force_background = hdc;
      Palette_Object_Create_HPALETTE_Logic((void *)pvVar8);
      hpal_00 = SelectPalette16(0x0,hpal,force_background);
      uVar3 = RealizePalette16(hdc);
      SelectPalette16(0x1,hpal_00,hdc);
      DeleteObject16(hpal);
      if (0x0 < (int)uVar3)
      {
        InvalidateRect16(0x1,(void *)((ulong)iVar4->field4_0x4 << 0x10),
                         (HWND16)puStack_6);
      }
      ReleaseDC16(hdc,iVar4->field4_0x4);
      return uVar3;
    }
  }
  return 0x0;
}



void __stdcall16far UI_GDI_Unrealize_and_Realize_Palette_0e46(u32 param_1,int param_2)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  HGDIOBJ16 obj;
  undefined2 uVar3;
  u32 local_6;
  
  if (param_2 != 0x0)
  {
    uVar3 = (undefined2)(param_1 >> 0x10);
    uVar2 = *(undefined4 *)((int)param_1 + 0xf2);
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)uVar2 + 0x66) + 0x18);
    obj = (*(code *)*puVar1)();
    UnrealizeObject16(obj);
    uVar2 = *(undefined4 *)((int)param_1 + 0xf2);
    RealizePalette16(*(HDC16 *)((int)uVar2 + 0x7c));
  }
  return;
}



// Drawing logic for a status icon in the UI. Fills a rectangle and draws an icon
// retrieved from an internal component.

void __stdcall16far UI_Status_Icon_Draw_Logic(long context)
{
  HDC16 hdc;
  undefined2 *puVar1;
  astruct_384 *uVar2;
  undefined2 uVar3;
  void *unaff_SS;
  u32 *hdc_00;
  undefined1 local_e [0x8];
  HBRUSH16 HStack_6;
  HICON16 HStack_4;
  
  if (p_FreeBlockListHead == NULL)
  {
    uVar3 = (undefined2)((ulong)context >> 0x10);
    uVar2 = (astruct_384 *)context;
    hdc_00 = (u32 *)uVar2->field19_0x14;
    puVar1 = (undefined2 *)((int)*uVar2->field19_0x14 + 0x2c);
    HStack_4 = (*(code *)*puVar1)();
    if (HStack_4 != 0x0)
    {
      HStack_6 = GetStockObject16(0x4);
      GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_e),uVar2->field4_0x4);
      hdc = (HDC16)((u32 *)uVar2->field19_0x14)[0x1f];
      FillRect16(HStack_6,(void *)CONCAT22(hdc,unaff_SS),(HDC16)hdc_00);
      DrawIcon16(HStack_4,0x2,0x2,hdc);
    }
  }
  return;
}



// An alternative routine for drawing a triangular indicator at the midpoint of a range.

void __stdcall16far
UI_Draw_Centering_Indicator_Triangle_Alternative_239c(void *hdc_state,int *rect_coords)
{
  undefined1 *puVar1;
  int *hdc;
  int unaff_SS;
  undefined2 in_stack_0000000a;
  undefined1 local_a [0x6];
  int iStack_4;
  
  if (_rect_coords != NULL)
  {
    iStack_4 = (rect_coords[0x2] - *_rect_coords >> 0x1) + *_rect_coords;
    pack_3words_alt(local_a,unaff_SS,0x0,0x57);
    puVar1 = local_a;
    hdc = UI_Build_3Point_Triangle_Coordinate_Array_Alternative_23f2
                    (hdc_state,puVar1,unaff_SS);
    GDI_Polygon_Wrapper_Alternative_2474
              ((u16)hdc_state,(u16)((ulong)hdc_state >> 0x10),
               (void *)CONCAT22(puVar1,(void *)((int)(undefined **)&p_CurrentHeapContext
                                               + 0x1)),(HDC16)hdc);
  }
  return;
}



// Draws a stylized selection rectangle using GDI primitives (CreatePen, GetStockObject,
// Rectangle16). Used for highlighting selected objects in the view.

void __stdcall16far
UI_Draw_Selection_Rectangle_GDI_3488
          (void *this_ptr,HDC16 hdc,u8 *params,void *rect_info)
{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *src;
  HPEN16 obj;
  HGDIOBJ16 obj_00;
  HGDIOBJ16 HVar4;
  int *out1;
  undefined2 uVar5;
  undefined4 local_a;
  void *pvStack_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = *(undefined4 *)((int)this_ptr + 0x14);
  out1 = (int *)((ulong)uVar2 >> 0x10);
  src = (void *)((int)uVar2 + 0x36);
  pvStack_6 = (void *)CONCAT22(out1,src);
  unpack_word_pair(src,out1,(int *)&local_a);
  uVar3 = local_a;
  iVar1 = local_a._2_2_ + -0x3;
  local_a = CONCAT22(iVar1,(int)local_a);
  if (iVar1 < 0x0)
  {
    local_a = uVar3 & 0xffff;
  }
  iVar1 = (int)local_a + -0x3;
  local_a._0_2_ = iVar1;
  if (iVar1 < 0x0)
  {
    local_a._0_2_ = 0x0;
  }
  uVar2 = *(undefined4 *)((int)this_ptr + 0x14);
  uVar2 = *(undefined4 *)((int)uVar2 + 0x64);
  obj = CreatePen16((short)uVar2,(short)((ulong)uVar2 >> 0x10),0x1);
  obj_00 = SelectObject16(0x1538,obj);
  HVar4 = GetStockObject16(0x5);
  HVar4 = SelectObject16(0x1538,HVar4);
  Rectangle16((int)local_a + 0x6,local_a._2_2_ + 0x6,(int)local_a,local_a._2_2_,hdc);
  SelectObject16(0x1538,obj_00);
  SelectObject16(0x1538,HVar4);
  DeleteObject16(obj);
  return;
}



// A thin wrapper around the Win16 Polygon16 API for drawing closed polygons.

void __stdcall16far
GDI_Polygon_Wrapper_3602(u16 unused1,u16 unused2,void *count_and_points,HDC16 hdc)
{
  HDC16 unaff_CS;
  
  Polygon16(unaff_CS,(void *)count_and_points,(short)((ulong)count_and_points >> 0x10));
  return;
}



void __stdcall16far
UI_GDI_Unrealize_and_Realize_Palette_6896(undefined4 param_1,int param_2)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  HGDIOBJ16 obj;
  undefined2 uVar3;
  
  if (param_2 != 0x0)
  {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    uVar2 = *(undefined4 *)((int)param_1 + 0xf2);
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)uVar2 + 0x24) + 0x18);
    obj = (*(code *)*puVar1)();
    UnrealizeObject16(obj);
    uVar2 = *(undefined4 *)((int)param_1 + 0xf2);
    RealizePalette16(*(HDC16 *)((int)uVar2 + 0x178));
  }
  return;
}



// Internal destructor for the TP popup menu's sub-component. Frees internal sprite
// buffers and cleans up palettes.

void __stdcall16far UI_TP_PopupMenu_Internal_SubComponent_dtor_7270(u16 *this_ptr)
{
  void *this;
  HPALETTE16 obj;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x754c;
  this_ptr[0x1] = 0x1020;
  if (*(long *)(this_ptr + 0xe) != 0x0)
  {
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)*(void **)(this_ptr + 0xe),
               (long)CONCAT22(in_stack_00000006,this_ptr));
  }
  this = (void *)this_ptr[0xa];
  if (this_ptr[0xb] != 0x0 || this != NULL)
  {
    Sprite_Object_free_internal_buffer(this);
    free_if_not_null(this);
  }
  obj = SelectPalette16(0x0,this_ptr[0x10],
                        *(BOOL16 *)((int)*(undefined4 *)(this_ptr + 0xe) + 0x178));
  this_ptr[0x10] = obj;
  DeleteObject16(obj);
  *_this_ptr = (u16)(char *)s_0_020_1050_3ab0;
  this_ptr[0x1] = 0x1008;
  *_this_ptr = (u16)(char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  return;
}



void __stdcall16far
UI_GDI_Update_Palette_and_Notify_List_at_D2_8128(u32 param_1,int param_2)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  u32 local_22;
  u32 local_16;
  undefined1 local_12 [0x8];
  u16 local_a;
  u16 local_8;
  u32 local_6;
  
  if (param_2 != 0x0)
  {
    uVar5 = (undefined2)(param_1 >> 0x10);
    iVar4 = (int)param_1;
    local_6 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0xe6) + 0xa);
    puVar1 = (undefined2 *)((int)*(undefined4 *)local_6 + 0x18);
    local_8 = (*(code *)*puVar1)();
    UnrealizeObject16(local_8);
    local_a = *(HDC16 *)((int)*(undefined4 *)(iVar4 + 0xe6) + 0x14);
    RealizePalette16(local_a);
    init_8byte_pair_with_long_and_zero(local_12,CONCAT22(uVar5,iVar4 + 0xd2));
    while( true )
    {
      lVar6 = get_next_list_item(local_12);
      iVar3 = (int)((ulong)lVar6 >> 0x10);
      iVar4 = (int)lVar6;
      if (iVar3 == 0x0 && iVar4 == 0x0) break;
      puVar2 = (undefined4 *)(undefined4 *)*(undefined4 *)(iVar4 + 0x4);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x90);
      (*(code *)*puVar1)(0x1008,puVar2,*(undefined2 *)(iVar4 + 0x6));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes palette changes specifically for panel components. Realizes the system
// palette and invalidates the panel's window if colors have changed.

int __stdcall16far UI_Panel_Handle_Palette_Change_and_Invalidate_81c0(void *this_ptr)
{
  HDC16 hdc;
  HDC16 hpal;
  HPALETTE16 hpal_00;
  uint16_t uVar1;
  undefined2 uVar2;
  HDC16 force_background;
  HWND16 in_stack_0000ffea;
  undefined2 uStack_6;
  
  uVar2 = (undefined2)((ulong)_p_GlobalPaletteObject >> 0x10);
  uStack_6 = (void *)(void *)*(undefined4 *)((int)_p_GlobalPaletteObject + 0xe);
  if (*(int *)((int)_p_GlobalPaletteObject + 0x10) == 0x0 && uStack_6 == NULL)
  {
    return 0x0;
  }
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  hdc = GetDC16(*(HWND16 *)((int)(void *)this_ptr + 0x8));
  hpal = hdc;
  force_background = hdc;
  Palette_Object_Create_HPALETTE_Logic(uStack_6);
  hpal_00 = SelectPalette16(0x0,hpal,force_background);
  uVar1 = RealizePalette16(hdc);
  SelectPalette16(0x1,hpal_00,hdc);
  RealizePalette16(hdc);
  DeleteObject16(hpal);
  if (0x0 < (int)uVar1)
  {
    InvalidateRect16(0x1,(void *)((ulong)*(uint *)((int)(void *)this_ptr + 0x8) << 0x10)
                     ,in_stack_0000ffea);
  }
  return uVar1;
}



// Clears all sprites currently managed by the item list without destroying the list
// object itself.

void __stdcall16far UI_Lab_Item_List_Clear_Sprites_Logic_85f6(void *this_ptr)
{
  void *this;
  int iVar1;
  astruct_346 *uVar4;
  undefined2 uVar2;
  undefined2 uVar3;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
    uVar4 = (astruct_346 *)this_ptr;
    if (uVar4->field6_0x6 <= iStack_4) break;
    uVar2 = (undefined2)(uVar4->field11_0xc >> 0x10);
    iVar1 = (int)uVar4->field11_0xc;
    this = (void *)(void *)*(undefined4 *)(iVar1 + iStack_4 * 0x4);
    if (*(int *)(iVar1 + iStack_4 * 0x4 + 0x2) != 0x0 || this != NULL)
    {
      Sprite_Object_free_internal_buffer(this);
      free_if_not_null(this);
    }
    *(undefined4 *)((int)uVar4->field11_0xc + iStack_4 * 0x4) = 0x0;
    iStack_4 += 0x1;
  }
  return;
}



void __stdcall16far UI_Sprite_Collection_Restore_All_86d8(undefined4 param_1)
{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  local_4 = 0x0;
  while( true )
  {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    if (*(int *)((int)param_1 + 0x6) <= local_4) break;
    uVar1 = *(undefined4 *)((int)param_1 + 0xc);
    uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar2 = (int)uVar1;
    if (*(long *)(iVar2 + local_4 * 0x4) != 0x0)
    {
      Sprite_Object_Restore_To_Bitmap
                ((void *)(void *)*(undefined4 *)(iVar2 + local_4 * 0x4));
    }
    local_4 += 0x1;
  }
  return;
}



// Core drawing logic for the grid UI. Uses complex GDI pen/brush sequences to render
// multi-colored grid lines and background tiles based on resolution-specific scaling
// data.

void __stdcall16far UI_SubComponent_Grid_Draw_Logic_9364(void *this_ptr)
{
  int *piVar1;
  undefined4 uVar2;
  HBRUSH16 HVar3;
  void *pvVar4;
  astruct_342 *uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  void *unaff_SS;
  HDC16 hdc;
  int iStack_3e;
  uint uStack_3a;
  undefined1 local_38 [0x4];
  HGDIOBJ16 HStack_34;
  HPEN16 HStack_32;
  HDC16 HStack_30;
  void *pvStack_2e;
  void *pvStack_2a;
  void *pvStack_26;
  void *pvStack_22;
  undefined4 *puStack_1e;
  undefined2 *puStack_1a;
  u16 uStack_16;
  u16 uStack_14;
  undefined4 local_12;
  undefined4 uStack_e;
  undefined4 local_a;
  undefined4 uStack_6;
  
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_342 *)this_ptr;
  GetClientRect16((undefined4 *)CONCAT22(unaff_SS,&local_a),uVar4->field4_0x4);
  local_12 = local_a;
  uStack_e = uStack_6;
  uStack_14 = u16_1050_4216;
  uStack_16 = u16_1050_422c;
  puStack_1a = PTR_DAT_1050_4172_1050_4212;
  puStack_1e = PTR_s_O_1050_41b2_1050_4218;
  pvStack_22 = PTR_s___1050_41da_1050_421c;
  pvStack_26 = PTR_s_A_1050_4202_1050_4220;
  pvStack_2a = PTR_DAT_1050_419a_1050_4224;
  pvStack_2e = PTR_DAT_1050_41aa_1050_4228;
  HStack_30 = *(HDC16 *)((int)uVar4->field5_0x6 + 0x12);
  uStack_3a = 0x9;
  do
  {
    uVar2 = *(undefined4 *)(uStack_3a * 0x4 + (int)(void *)pvStack_22);
    HStack_32 = CreatePen16((short)uVar2,(short)((ulong)uVar2 >> 0x10),0x0);
    HStack_34 = SelectObject16(0x1538,HStack_32);
    MoveToEx16((HDC16)local_38,(short)unaff_SS,((undefined2 *)puStack_1a)[uStack_3a],
               (void *)local_a);
    LineTo16(((undefined2 *)puStack_1a)[uStack_3a],(short)uStack_6,HStack_30);
    iVar5 = uStack_14 - uStack_3a;
    MoveToEx16((HDC16)local_38,(short)unaff_SS,((undefined2 *)puStack_1a)[iVar5],
               (void *)local_a);
    LineTo16(((undefined2 *)puStack_1a)[iVar5],(short)uStack_6,HStack_30);
    hdc = HStack_30;
    SelectObject16(0x1538,HStack_34);
    DeleteObject16(HStack_32);
    uStack_3a -= 0x1;
  } while (uStack_3a < 0x8000);
  HVar3 = CreateSolidBrush16(0x0);
  uVar7 = (undefined2)((ulong)puStack_1a >> 0x10);
  local_a = (void *)CONCAT22(((undefined2 *)puStack_1a)[0x9] + 0x1,(void *)local_a);
  uVar7 = ((undefined2 *)puStack_1a)[0xa];
  uStack_e = CONCAT22(uVar7,(undefined2)uStack_e);
  uStack_6 = CONCAT22(uVar7,(short)uStack_6);
  FillRect16(HVar3,(void *)CONCAT22(HStack_30,unaff_SS),hdc);
  DeleteObject16(HVar3);
  iStack_3e = 0x8;
  for (uStack_3a = 0x1; (int)uStack_3a < 0xa; uStack_3a += 0x1)
  {
    HVar3 = CreateSolidBrush16((COLORREF)((undefined4 *)puStack_1e)[iStack_3e + 0x1]);
    uStack_6 = CONCAT22(local_a._2_2_ + -0x1,(short)uStack_6);
    local_12 = (void *)CONCAT22(uStack_e._2_2_ + 0x1,(void *)local_12);
    uVar7 = (undefined2)((ulong)puStack_1a >> 0x10);
    local_a = (void *)CONCAT22(((undefined2 *)puStack_1a)[iStack_3e] + 0x1,
                               (void *)local_a);
    uStack_e = CONCAT22(((undefined2 *)puStack_1a)[uStack_3a + 0xa],(undefined2)uStack_e
                       );
    FillRect16(HVar3,(void *)CONCAT22(HStack_30,unaff_SS),hdc);
    FillRect16(HVar3,(void *)CONCAT22(HStack_30,unaff_SS),hdc);
    DeleteObject16(HVar3);
    iStack_3e += -0x1;
  }
  HVar3 = CreateSolidBrush16((COLORREF)*puStack_1e);
  local_a = (void *)((ulong)local_a & 0xffff);
  uStack_6 = CONCAT22(*puStack_1a,(short)uStack_6);
  local_12 = (void *)CONCAT22(((undefined2 *)puStack_1a)[uStack_14] + 0x1,
                              (void *)local_12);
  uStack_e = CONCAT22(uVar4->field10_0xe,(undefined2)uStack_e);
  FillRect16(HVar3,(void *)CONCAT22(HStack_30,unaff_SS),hdc);
  FillRect16(HVar3,(void *)CONCAT22(HStack_30,unaff_SS),hdc);
  DeleteObject16(HVar3);
  uStack_3a = 0x3;
  do
  {
    uVar2 = *(undefined4 *)(uStack_3a * 0x4 + (int)(void *)pvStack_26);
    HStack_32 = CreatePen16((short)uVar2,(short)((ulong)uVar2 >> 0x10),0x0);
    HStack_34 = SelectObject16(0x1538,HStack_32);
    iVar5 = uStack_3a * 0x2;
    pvVar4 = (void *)(*(int *)(iVar5 + (int)(void *)pvStack_2a) + (int)(void *)local_a);
    uVar7 = (undefined2)((ulong)pvStack_2e >> 0x10);
    piVar1 = (int *)(iVar5 + (int)(void *)pvStack_2e);
    MoveToEx16((HDC16)local_38,(short)unaff_SS,
               ((undefined2 *)puStack_1a)[*(int *)(iVar5 + (int)(void *)pvStack_2e)],
               pvVar4);
    LineTo16(((undefined2 *)puStack_1a)[uStack_14 - *piVar1],(short)pvVar4,HStack_30);
    pvVar4 = (void *)(*(int *)((uStack_16 - uStack_3a) * 0x2 + (int)(void *)pvStack_2a)
                     + (int)(void *)local_a);
    MoveToEx16((HDC16)local_38,(short)unaff_SS,((undefined2 *)puStack_1a)[*piVar1],
               pvVar4);
    LineTo16(((undefined2 *)puStack_1a)[uStack_14 - *piVar1],(short)pvVar4,HStack_30);
    SelectObject16(0x1538,HStack_34);
    DeleteObject16(HStack_32);
    uStack_3a -= 0x1;
  } while (uStack_3a < 0x8000);
  uVar4->field11_0x10 = 0x0;
  return;
}



// Retrieves palette metadata from a resource linked to the dialog and synchronizes an
// internal Palette Object (offset 0x70) with the updated color data.

u16 * __stdcall16far UI_Dialog_Sync_Palette_from_Resource_bca8(void *this_ptr)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  void *this;
  u16 *puVar4;
  uint extraout_DX;
  uint extraout_DX_00;
  uint uVar6;
  astruct_104 *uVar5;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_104 *)this_ptr;
  puVar1 = (undefined4 *)*(undefined4 *)((int)uVar5->field140_0x8e + 0xa);
  puVar3 = (undefined4 *)puVar1;
  puVar2 = (undefined2 *)((int)*puVar1 + 0x14);
  (*(code *)*puVar2)();
  uVar6 = extraout_DX;
  if (*(long *)&uVar5->field112_0x70 != 0x0)
  {
    uVar6 = 0x0;
    if (uVar5->field113_0x72 != 0x0 || uVar5->field112_0x70 != NULL)
    {
      puVar2 = (undefined2 *)*(undefined2 **)uVar5->field112_0x70;
      (*(code *)*puVar2)();
      uVar6 = extraout_DX_00;
    }
  }
  this = allocate_memory(CONCAT22(puVar3,0x14));
  uVar6 |= (uint)this;
  if (uVar6 == 0x0)
  {
    puVar4 = NULL;
    uVar6 = 0x0;
  }
  else
  {
    puVar4 = Palette_Object_ctor_basic(this);
  }
  uVar5->field112_0x70 = puVar4;
  uVar5->field113_0x72 = uVar6;
                // WARNING: Load size is inaccurate
  Palette_Object_Copy_From_Other_Logic
            ((void *)uVar5->field112_0x70,(void *)((ulong)uVar5->field112_0x70 >> 0x10))
  ;
  return uVar5->field112_0x70;
}



// Refreshes the UI palette from a component's internal state, performing necessary
// allocations and copying the palette data.

undefined4 __stdcall16far
UI_Main_View_Refresh_Palette_from_Component_0a1a(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  void *pvVar3;
  uint extraout_DX;
  uint extraout_DX_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 *local_6;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x8e) >> 0x10);
  iVar6 = (int)*(undefined4 *)(iVar5 + 0x8e);
  puVar1 = (undefined4 *)*(undefined4 *)(iVar6 + 0xa);
  local_6 = (undefined4 *)puVar1;
  if (*(int *)(iVar6 + 0xc) == 0x0 && local_6 == NULL)
  {
    return 0x0;
  }
  puVar2 = (undefined2 *)((int)*puVar1 + 0x14);
  (*(code *)*puVar2)();
  uVar4 = extraout_DX;
  if (*(long *)(iVar5 + 0x70) != 0x0)
  {
    uVar4 = 0x0;
    if (*(int *)(iVar5 + 0x72) != 0x0 || (undefined4 *)*(int *)(iVar5 + 0x70) != NULL)
    {
      puVar2 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)(iVar5 + 0x70);
      (*(code *)*puVar2)();
      uVar4 = extraout_DX_00;
    }
  }
  pvVar3 = allocate_memory(CONCAT22(local_6,0x14));
  uVar4 |= (uint)pvVar3;
  if (uVar4 == 0x0)
  {
    pvVar3 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    pvVar3 = Palette_Object_ctor_basic(pvVar3);
  }
  *(undefined2 *)(iVar5 + 0x70) = pvVar3;
  *(uint *)(iVar5 + 0x72) = uVar4;
  Palette_Object_Copy_From_Other_Logic
            ((void *)(void *)*(undefined4 *)(iVar5 + 0x70),
             (void *)((ulong)*(undefined4 *)(iVar5 + 0x70) >> 0x10));
  return CONCAT22(*(undefined2 *)(iVar5 + 0x72),*(undefined2 *)(iVar5 + 0x70));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// OnPaint handler for sub-dialog type 20D4. Selects and realizes the global palette,
// draws specialized text using an object-defined font, and manages GDI object
// selection/deletion.

undefined2 __stdcall16far UI_SubDialog_Type20D4_OnPaint_Logic_21d6(undefined4 param_1)
{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  HPALETTE16 HVar6;
  void *pvVar7;
  COLORREF hdc;
  COLORREF hdc_00;
  HANDLE16 obj;
  COLORREF extraout_DX;
  COLORREF CVar8;
  COLORREF color;
  COLORREF color_00;
  int iVar9;
  void *pvVar10;
  undefined2 unaff_SS;
  undefined2 uVar11;
  HDC16 hdc_01;
  HGDIOBJ16 local_3e;
  void *local_24;
  undefined1 local_22 [0x20];
  
  pvVar10 = (void *)((ulong)param_1 >> 0x10);
  iVar9 = (int)param_1;
  local_24 = (void *)BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                                  *(HWND16 *)(iVar9 + 0x6));
  pvVar4 = (void *)*(undefined4 *)((int)_p_GlobalPaletteObject + 0xe);
  pvVar7 = (void *)pvVar4;
  HVar6 = Palette_Object_Select_And_Realize_Wrapper_Far
                    (pvVar7,(HDC16)((ulong)pvVar4 >> 0x10));
  uVar11 = (undefined2)*(undefined4 *)(iVar9 + 0x8e);
  hdc_01 = (HDC16)((ulong)*(undefined4 *)(iVar9 + 0x8e) >> 0x10);
  puVar5 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar9 + 0x8e) + 0x4);
  (*(code *)*puVar5)(0x1008,uVar11,hdc_01,0xffffffff,&local_24);
  CVar8 = extraout_DX;
  pvVar7 = Palette_Object_Get_Buffer_Ptr_maybe(pvVar7);
  uVar1 = *(undefined1 *)((int)pvVar7 + 0x3e5);
  uVar2 = *(undefined1 *)((int)pvVar7 + 0x3e6);
  uVar3 = *(undefined1 *)((int)pvVar7 + 0x3e4);
  color = CVar8;
  hdc = SetBkColor16(0x0,0x0);
  color_00 = color;
  hdc_00 = SetTextColor16(CONCAT11(uVar1,uVar2),CONCAT11(0x2,uVar3));
  local_3e = 0x0;
  obj = GetProp16(s_hfont_1050_5ced,*(HWND16 *)(iVar9 + 0x6));
  if (obj != 0x0)
  {
    local_3e = SelectObject16(0x1538,obj);
  }
  DrawText16(0x10,(void *)CONCAT22(0xffff,pvVar10),
             (int16_t)*(undefined4 *)(iVar9 + 0xa2),(void *)CONCAT22(uVar11,local_24),
             hdc_01);
  SetTextColor16(CONCAT11(*(undefined1 *)((int)pvVar7 + 0x95),
                          *(undefined1 *)((int)pvVar7 + 0x96)),
                 CONCAT11(0x2,*(undefined1 *)((int)pvVar7 + 0x94)));
  DrawText16(0x10,(void *)CONCAT22(0xffff,pvVar10),
             (int16_t)*(undefined4 *)(iVar9 + 0xa6),(void *)CONCAT22(uVar11,local_24),
             hdc_01);
  if (obj != 0x0)
  {
    SelectObject16(0x1538,local_3e);
  }
  SetBkColor16(hdc,color);
  SetTextColor16(hdc_00,color_00);
  HVar6 = SelectPalette16(0x0,HVar6,(BOOL16)local_24);
  DeleteObject16(HVar6);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar9 + 0x6));
  return 0x1;
}



// Synchronizes an internal palette object (offset 0x70) with data from the linked
// resource manager. Equivalent to 1038:BCA8.

ulong __stdcall16far UI_Dialog_Sync_Palette_from_Object_288e(void *this_ptr)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint extraout_DX;
  uint extraout_DX_00;
  uint uVar6;
  astruct_66 *uVar5;
  undefined2 in_stack_00000006;
  
  puVar1 = (undefined4 *)
           *(undefined4 *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x24);
  puVar3 = (undefined4 *)puVar1;
  puVar2 = (undefined2 *)((int)*puVar1 + 0x14);
  (*(code *)*puVar2)();
  uVar6 = extraout_DX;
  if (*(long *)((int)this_ptr + 0x70) != 0x0)
  {
    uVar6 = 0x0;
    if (*(int *)((int)this_ptr + 0x72) != 0x0 ||
        (undefined4 *)*(int *)((int)this_ptr + 0x70) != NULL)
    {
      puVar2 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this_ptr + 0x70)
      ;
      (*(code *)*puVar2)();
      uVar6 = extraout_DX_00;
    }
  }
  pvVar4 = allocate_memory(CONCAT22(puVar3,0x14));
  uVar6 |= (uint)pvVar4;
  if (uVar6 == 0x0)
  {
    pvVar4 = NULL;
    uVar6 = 0x0;
  }
  else
  {
    pvVar4 = Palette_Object_ctor_basic(pvVar4);
  }
  *(undefined2 *)((int)this_ptr + 0x70) = pvVar4;
  *(uint *)((int)this_ptr + 0x72) = uVar6;
  Palette_Object_Copy_From_Other_Logic
            ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x70),
             (void *)((ulong)*(undefined4 *)((int)this_ptr + 0x70) >> 0x10));
  return CONCAT22(*(undefined2 *)((int)this_ptr + 0x72),
                  *(undefined2 *)((int)this_ptr + 0x70));
}
