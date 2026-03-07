/*
 * Source: outpost.c
 * Chunk: 112/117
 * Original lines: 127870-129044
 * Boundaries: top-level declarations/definitions only
 */




void __stdcall16far UI_Window_Draw_Bordered_Status_Panel_7bb2(char *param_1)
{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  BOOL16 BVar4;
  int x;
  HDC16 HVar5;
  HDC16 hdc;
  HPEN16 obj;
  HGDIOBJ16 obj_00;
  HGDIOBJ16 h_brush16;
  HANDLE16 obj_01;
  uint32_t uVar6;
  char *pcVar7;
  uint hdc_00;
  uint uVar8;
  char *this_ptr;
  char *str;
  undefined2 unaff_SS;
  char *pcVar9;
  undefined2 uVar11;
  char *pcVar10;
  u16 uVar12;
  HWND16 hwnd;
  u16 local_34;
  u16 local_32;
  u16 local_30;
  u16 local_2e;
  u16 local_2c;
  u16 local_2a;
  u16 local_28;
  u32 local_26;
  u16 local_22;
  u16 local_20;
  u16 local_1e;
  u16 local_1c;
  u16 local_1a;
  u16 local_18;
  u32 local_16;
  u16 local_12;
  u16 local_10;
  u16 local_e;
  u16 local_c;
  u16 local_a;
  u32 local_8;
  u16 local_4;
  
  str = (char *)((ulong)param_1 >> 0x10);
  this_ptr = (char *)param_1;
  BVar4 = IsIconic16(*(HWND16 *)(this_ptr + 0x6));
  if (BVar4 == 0x0)
  {
    local_4 = GetWindowDC16(*(HWND16 *)(this_ptr + 0x6));
    puVar3 = (undefined2 *)((int)*(undefined4 *)param_1 + 0x68);
    local_8 = (*(code *)*puVar3)(0x1538,param_1,*(undefined2 *)(this_ptr + 0x6e));
    hdc_00 = (uint)(local_8 >> 0x10);
    uVar8 = hdc_00 | (uint)(void *)local_8;
    if (uVar8 != 0x0)
    {
      local_a = Palette_Object_Select_And_Realize_Wrapper_Far((void *)local_8,hdc_00);
      GetWindowRect16((u16 *)CONCAT22(unaff_SS,&local_12),*(HWND16 *)(this_ptr + 0x6));
      x = (local_e - local_12) + -0x1;
      HVar5 = (local_c - local_10) - 0x1;
      hdc = (-(uint)(*(int *)(this_ptr + 0x60) == 0x0) & 0x1e) + 0x25;
      obj = CreatePen16(hdc,0x100,0x0);
      uVar12 = local_4;
      obj_00 = SelectObject16(0x1538,obj);
      MoveTo16(0x0,0x0,local_4);
      LineTo16(0x0,x,local_4);
      LineTo16(HVar5,x,local_4);
      LineTo16(HVar5,0x0,local_4);
      LineTo16(0x0,0x0,local_4);
      hwnd = *(HWND16 *)(this_ptr + 0x6);
      uVar11 = 0xfff0;
      pcVar9 = (char *)s_tile2_bmp_1050_1538;
      GetWindowLong16(-0x10,hwnd);
      pcVar10 = (char *)CONCAT22(uVar11,pcVar9);
      if (((uVar8 & 0x80) != 0x0) &&
         (pcVar10 = (char *)CONCAT22(uVar11,pcVar9), (uVar8 & 0x40) != 0x0))
      {
        iVar1 = *(int *)(this_ptr + 0x62);
        iVar2 = *(int *)(this_ptr + 0x66);
        MoveTo16(iVar1 - iVar2,0x0,local_4);
        LineTo16(iVar1 - iVar2,x,local_4);
        *(undefined2 *)(this_ptr + 0x7a) = *(undefined2 *)(this_ptr + 0x64);
        *(undefined2 *)(this_ptr + 0x7c) = *(undefined2 *)(this_ptr + 0x66);
        *(int *)(this_ptr + 0x7e) = x;
        *(int *)(this_ptr + 0x80) =
             *(int *)(this_ptr + 0x62) - *(int *)(this_ptr + 0x66);
        pcVar9 = this_ptr + 0x7a;
        pcVar7 = str;
        hwnd = local_4;
        h_brush16 = GetStockObject16(0x4);
        FillRect16(h_brush16,(char *)CONCAT22(hwnd,pcVar7),uVar12);
        pcVar10 = (char *)CONCAT22(pcVar7,pcVar9);
        if (*(int *)(this_ptr + 0x76) != 0x0)
        {
          hwnd = local_4;
          pcVar10 = param_1;
          UI_Window_Draw_Frames_82ee(this_ptr,(ushort)str);
        }
        pcVar9 = this_ptr + 0x10;
        if (*pcVar9 != '\0')
        {
          local_2a = 0x0;
          hwnd = *(HWND16 *)(this_ptr + 0x6);
          obj_01 = GetProp16(s_hfont_1050_5de9,hwnd);
          if (obj_01 != 0x0)
          {
            hwnd = local_4;
            local_2a = SelectObject16(0x1538,obj_01);
          }
          SetBkColor16(0x0,0x0);
          SetTextColor16(hdc,0x100);
          HVar5 = LStrLen16((char *)CONCAT22(str,pcVar9));
          uVar6 = GetTextExtent16(HVar5,pcVar9,(short)str);
          pcVar7 = (char *)(((*(int *)(this_ptr + 0x7e) - *(int *)(this_ptr + 0x7a)) /
                             0x2 - (int)uVar6 / 0x2) + *(int *)(this_ptr + 0x7a));
          uVar12 = local_4;
          TextOut16(0x1538,HVar5,(short)pcVar9,str,
                    (*(int *)(this_ptr + 0x80) - *(int *)(this_ptr + 0x7c)) / 0x2 -
                    (int)uVar8 / 0x2);
          pcVar10 = (char *)CONCAT22(uVar12,pcVar7);
          if (obj_01 != 0x0)
          {
            pcVar9 = (char *)local_4;
            SelectObject16(0x1538,local_2a);
            pcVar10 = (char *)CONCAT22(uVar12,pcVar9);
          }
        }
      }
      puVar3 = (undefined2 *)((int)*(undefined4 *)param_1 + 0x64);
      (*(code *)*puVar3)(0x1538,param_1,local_8,local_4,pcVar10,hwnd);
      local_a = SelectPalette16(0x0,local_a,local_4);
      DeleteObject16(local_a);
      SelectObject16(0x1538,obj_00);
      DeleteObject16(obj);
    }
    ReleaseDC16(local_4,*(HWND16 *)(this_ptr + 0x6));
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u32 __stdcall16far
UI_GDI_Set_Palette_Text_Colors_7e5e(u32 *param_1,u16 param_2,uint param_3,HDC16 param_4)
{
  undefined2 *puVar1;
  HGDIOBJ16 HVar2;
  void *pvVar3;
  int16_t iVar4;
  uint uVar5;
  HWND16 hwnd;
  void *pvVar6;
  HDC16 hdc;
  u32 local_c;
  u16 local_6;
  u16 local_4;
  
  hwnd = 0x1538;
  HVar2 = GetStockObject16(0x4);
  if (_PTR_DAT_1050_0000_1050_5df0 == 0x0)
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x68);
    pvVar6 = (void *)(*(code *)*puVar1)(0x1538,param_1,
                                        *(undefined2 *)((int)(u32 *)param_1 + 0x6e));
    uVar5 = (uint)((ulong)pvVar6 >> 0x10) | (uint)(void *)pvVar6;
    if (uVar5 == 0x0)
    {
      return 0x0;
    }
    hwnd = 0x1008;
    pvVar3 = Palette_Object_Get_Buffer_Ptr_maybe((void *)pvVar6);
    _PTR_DAT_1050_0000_1050_5df0 =
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
    iVar4 = GetDlgCtrlId(hwnd);
    if (iVar4 == 0x14c)
    {
      hdc = 0x0;
      goto LAB_1040_7f00;
    }
    if (iVar4 == 0x175)
    {
      hdc = 0x0;
      goto LAB_1040_7f00;
    }
  }
  hdc = (HDC16)_PTR_DAT_1050_0000_1050_5df0;
  param_4 = (HDC16)((ulong)_PTR_DAT_1050_0000_1050_5df0 >> 0x10);
LAB_1040_7f00:
  SetTextColor16(hdc,param_4);
  SetBkColor16(0x0,0x100);
  return CONCAT22(0x1050,HVar2);
}



// Updates a generic dialog metric (offset 0x60) and posts message 0x85 to refresh the
// UI, provided the dialog isn't locked (offset 0x78).

ushort __stdcall16far
UI_SubDialog_Base_Update_Metric_and_Notify_7f1c(void *this_ptr,int metric)
{
  astruct_39 *uVar1;
  int in_stack_00000008;
  undefined4 in_stack_0000fffa;
  
  if (*(int *)((int)this_ptr + 0x78) != 0x0)
  {
    return 0x0;
  }
  if (*(int *)((int)this_ptr + 0x60) != in_stack_00000008)
  {
    *(int *)((int)this_ptr + 0x60) = in_stack_00000008;
    PostMessage16(0x0,0x0,0x0,
                  CONCAT22((int)((ulong)in_stack_0000fffa >> 0x10),
                           *(undefined2 *)((int)this_ptr + 0x6)));
  }
  return 0x1;
}



// Updates the window's internal title string (offset 0x10) and posts message 0x85 to
// trigger a redraw.

void __stdcall16far UI_Window_Set_Title_and_Refresh_7f56(void *this_ptr,char *title)
{
  undefined2 unaff_BP;
  char *in_stack_00000008;
  
  strcpy_optimized((char *)CONCAT22(title,(char *)((int)this_ptr + 0x10)),
                   in_stack_00000008);
  PostMessage16(0x0,0x0,0x0,CONCAT22(unaff_BP,*(undefined2 *)((int)this_ptr + 0x6)));
  return;
}



// Loads a menu from resource (offset 0x6A), retrieves its first sub-menu, and displays
// it as a tracking popup menu at the specified coordinates.

void __stdcall16far UI_Window_Show_Popup_Menu_7f86(void *this_ptr,int x,int y)
{
  HMENU16 HVar1;
  astruct_38 *uVar2;
  undefined2 unaff_SS;
  int16_t in_stack_0000000a;
  int16_t local_6;
  int iStack_4;
  
  if ((*(long *)((int)this_ptr + 0x6a) != 0x0) &&
     (*(int *)((int)this_ptr + 0x68) == 0x0))
  {
    HVar1 = LoadMenu16((void *)*(undefined4 *)((int)this_ptr + 0x6a),
                       (HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
    *(HMENU16 *)((int)this_ptr + 0x68) = HVar1;
    if (HVar1 == 0x0)
    {
      return;
    }
    HVar1 = GetSubMenu16(0x0,*(HMENU16 *)((int)this_ptr + 0x68));
    *(HMENU16 *)((int)this_ptr + 0x68) = HVar1;
    if (HVar1 == 0x0)
    {
      return;
    }
  }
  local_6 = in_stack_0000000a;
  iStack_4 = y;
  ClientToScreen16((int16_t *)CONCAT22(unaff_SS,&local_6),
                   *(HWND16 *)((int)this_ptr + 0x6));
  TrackPopupMenu16(NULL,*(HWND16 *)((int)this_ptr + 0x6),0x0,iStack_4,local_6,0x0,
                   *(HMENU16 *)((int)this_ptr + 0x68));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Invokes WinHelp16 using the help filename from resource 0x1F8 and the context ID
// stored at offset 0x8A.

void __stdcall16far UI_Window_Show_Help_800c(void *this_ptr)
{
  void *pvVar1;
  HWND16 in_DX;
  undefined2 in_stack_00000006;
  uint32_t data;
  uint16_t w_command;
  void *pvVar2;
  
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  if (*(int *)((int)this_ptr + 0x8a) == 0x0)
  {
    w_command = 0x0;
    pvVar2 = (void *)((int)(undefined **)&p_CurrentHeapContext + 0x1);
    data = 0x0;
  }
  else
  {
    pvVar2 = (void *)0x1;
    data = *(uint32_t *)((int)this_ptr + 0x8a);
    w_command = (int)data >> 0xf;
  }
  WinHelp16(data,w_command,(void *)CONCAT22(pvVar1,pvVar2),in_DX);
  return;
}



u16 __stdcall16far const_0_stub_1040_8054(void)
{
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Ensures Resource 0x28 (Trade Manager) is loaded and returns its primary 4-byte object
// pointer.

void * __stdcall16far UI_Get_Global_Trade_Manager_Ptr_Logic_805a(void)
{
  if (_p_GlobalPaletteObject == 0x0)
  {
    Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x28);
  }
  return (void *)*(undefined2 *)((int)_p_GlobalPaletteObject + 0xe);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * __stdcall16far
UI_Main_View_Initialize_Palette_from_Resource_807e(u32 param_1,int param_2)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  void *pvVar4;
  void *pvVar5;
  int in_DX;
  uint extraout_DX;
  uint extraout_DX_00;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  u16 local_10;
  u32 local_a;
  u32 local_6;
  
  if (param_2 == 0x1)
  {
    pvVar4 = UI_Get_Global_Trade_Manager_Ptr_Logic_805a();
    return (void *)CONCAT22(in_DX,pvVar4);
  }
  pvVar4 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  local_6 = CONCAT22(in_DX,pvVar4);
  if (in_DX != 0x0 || pvVar4 != NULL)
  {
    puVar3 = (undefined2 *)((int)*(undefined4 *)local_6 + 0x14);
    pvVar5 = pvVar4;
    (*(code *)*puVar3)(0x1010,pvVar4,in_DX);
    uVar8 = (undefined2)(param_1 >> 0x10);
    iVar7 = (int)param_1;
    uVar6 = extraout_DX;
    if (*(long *)(iVar7 + 0x70) != 0x0)
    {
      puVar1 = (undefined4 *)*(int *)(iVar7 + 0x70);
      iVar2 = *(int *)(iVar7 + 0x72);
      uVar6 = 0x0;
      if (iVar2 != 0x0 || puVar1 != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1010,puVar1,iVar2,0x1);
        uVar6 = extraout_DX_00;
      }
    }
    pvVar5 = allocate_memory(CONCAT22(pvVar5,0x14));
    uVar6 |= (uint)pvVar5;
    if (uVar6 == 0x0)
    {
      pvVar5 = NULL;
      uVar6 = 0x0;
    }
    else
    {
      pvVar5 = Palette_Object_ctor_basic(pvVar5);
    }
    *(undefined2 *)(iVar7 + 0x70) = pvVar5;
    *(uint *)(iVar7 + 0x72) = uVar6;
    Palette_Object_Copy_From_Other_Logic
              ((void *)(void *)*(undefined4 *)(iVar7 + 0x70),
               (void *)((ulong)*(undefined4 *)(iVar7 + 0x70) >> 0x10));
    if (local_6 != 0x0)
    {
      (*(code *)*(undefined2 *)*(undefined2 **)local_6)(0x1008,pvVar4,in_DX,0x1);
    }
    return (void *)CONCAT22(*(undefined2 *)(iVar7 + 0x72),
                            (void *)*(undefined2 *)(iVar7 + 0x70));
  }
  return NULL;
}



// Performs a hit-test for right-click events (type 2). If the click is within the
// rectangle at offset 1, dispatches a virtual callback at offset 0x14.

ushort __stdcall16far
UI_Window_Handle_Right_Click_HitTest_8158(void *this_ptr,ulong pt,int msg_type)
{
  int16_t iVar1;
  BOOL16 BVar2;
  astruct_37 *uVar3;
  undefined2 unaff_SS;
  undefined2 in_stack_00000006;
  POINT16 local_6;
  void *puVar1;
  
  if (msg_type == 0x2)
  {
    if (*(int *)((int)this_ptr + 0x76) != 0x0)
    {
      local_6 = (POINT16)pt;
      ScreenToClient16((POINT16 *)CONCAT22(unaff_SS,&local_6),
                       *(HWND16 *)((int)this_ptr + 0x6));
      iVar1 = GetSystemMetrics16(0x4);
      local_6.y = local_6.y + iVar1;
      BVar2 = PtInRect(local_6,(void *)CONCAT22(in_stack_00000006,
                                                (void *)((int)this_ptr + 0x82)));
      if (BVar2 != 0x0)
      {
        puVar1 = (void *)((int)*_this_ptr + 0x14);
        (**(code **)puVar1)(0x1538,this_ptr,in_stack_00000006,0x0);
      }
    }
  }
  return 0x0;
}



// Enters a custom message loop for modeless sub-dialogs. Uses IsDialogMessage16 to
// handle keyboard navigation.

void __stdcall16far UI_SubDialog_Run_Modeless_Loop_81b6(void *this_ptr)
{
  BOOL16 BVar1;
  void *unaff_SS;
  undefined2 in_stack_00000006;
  HWND16 hwnd;
  
  *(undefined2 *)((int)this_ptr + 0x78) = 0x1;
  while( true )
  {
    hwnd = *(HWND16 *)((int)this_ptr + 0x6);
    BVar1 = IsWindow16(hwnd);
    if (BVar1 == 0x0)
    {
      return;
    }
    BVar1 = GetMessage16(0x0,0x0,0x0,(void *)CONCAT22(hwnd,unaff_SS));
    if (BVar1 == 0x0) break;
    IsDialogMessage16((undefined1 *)CONCAT22(unaff_SS,&stack0xffec),
                      *(HWND16 *)((int)this_ptr + 0x6));
  }
  return;
}



// Sets the window as system-modal using SetSysModalWindow16.

void __stdcall16far UI_Window_Set_System_Modal_81fe(undefined4 param_1)
{
  SetSysModalWindow16(*(HWND16 *)((int)param_1 + 0x6));
  return;
}



// Destroys the sub-window handle stored at offset 0x8C if it exists.

void __stdcall16far UI_Window_Destroy_SubWindow_at_8C_8212(void *this_ptr)
{
  BOOL16 BVar1;
  astruct_36 *uVar2;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this_ptr + 0x8c) != 0x0)
  {
    BVar1 = IsWindow16(*(HWND16 *)((int)this_ptr + 0x8c));
    if (BVar1 != 0x0)
    {
      DestroyWindow16(*(HWND16 *)((int)this_ptr + 0x8c));
      *(undefined2 *)((int)this_ptr + 0x8c) = 0x0;
    }
  }
  return;
}



u16 __stdcall16far UI_Window_Check_Handle_Mismatch_824a(u32 param_1,int param_2)
{
  if (*(int *)((int)param_1 + 0x6) != param_2)
  {
    return 0x1;
  }
  return 0x0;
}



u16 __stdcall16far const_0_stub_1040_8266(void)
{
  return 0x0;
}



// Moves the window to (x, y). If either coordinate is -1, centers the window on the
// screen using system metrics.

void __stdcall16far UI_Window_Move_or_Center_826c(void *this_ptr,int x,int y)
{
  int16_t iVar1;
  undefined2 unaff_SS;
  int in_stack_0000000a;
  int local_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int16_t iStack_6;
  int iStack_4;
  
  GetWindowRect16((int *)CONCAT22(unaff_SS,&local_e),*(HWND16 *)((int)this_ptr + 0x6));
  if ((in_stack_0000000a == -0x1) || (y == -0x1))
  {
    iVar1 = GetSystemMetrics16(0x0);
    iStack_4 = (iVar1 - (iStack_a - local_e)) / 0x2;
    iVar1 = GetSystemMetrics16(0x1);
    y = (iVar1 - (iStack_8 - iStack_c)) / 0x2;
  }
  else
  {
    iStack_4 = in_stack_0000000a;
  }
  iStack_6 = y;
  MoveWindow16(0x0,iStack_8 - iStack_c,iStack_a - local_e,y,iStack_4,
               *(HWND16 *)((int)this_ptr + 0x6));
  return;
}



// Draws two decorative frames using a solid brush. Colors are selected based on the
// flag at offset 0x60.

void __stdcall16far UI_Window_Draw_Frames_82ee(void *this_ptr,ushort hdc)
{
  int iVar1;
  HBRUSH16 hbrush;
  HDC16 unaff_SI;
  void *unaff_SS;
  undefined2 in_stack_00000008;
  undefined4 local_1a;
  undefined4 uStack_16;
  
  iVar1 = (*(int *)((int)this_ptr + 0x80) - *(int *)((int)this_ptr + 0x7c)) + -0x2;
  hbrush = CreateSolidBrush16((-(uint)(*(int *)((int)this_ptr + 0x60) == 0x0) & 0x1e) +
                              0x25);
  if (*(int *)((int)this_ptr + 0x86) == 0x0)
  {
    local_1a = CONCAT22(*(int *)((int)this_ptr + 0x66) + 0x2,
                        *(int *)((int)this_ptr + 0x64) + 0x2);
    uStack_16 = CONCAT22(iVar1,iVar1);
    *(undefined4 *)((int)this_ptr + 0x82) = local_1a;
    *(undefined4 *)((int)this_ptr + 0x86) = uStack_16;
  }
  FRAMERECT(hbrush,(void *)CONCAT22(in_stack_00000008,hdc),unaff_SI);
  FRAMERECT(hbrush,(void *)CONCAT22(in_stack_00000008,unaff_SS),unaff_SI);
  DeleteObject16(hbrush);
  *(int *)((int)this_ptr + 0x7a) = *(int *)((int)this_ptr + 0x86) + 0x2;
  return;
}



void * __stdcall16far
UI_SubDialog_Base_dtor_Scalar_Deleting_83e6(void *this_ptr,uchar flags)
{
  byte in_stack_00000008;
  
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}



// Constructor for sub-dialog Type 0x8DDC (vtable 0x8DDC). Used for specialized
// notifications or confirmations. Links to Resource 0xFC3 and duplicates two provided
// strings for display.

ushort __stdcall16far
UI_SubDialog_Type8DDC_ctor_init_8478
          (astruct_35 *param_1,u16 param_2,char *param_3,undefined2 param_4,
          char *param_5,undefined2 param_6,undefined2 param_7)
{
  char *pcVar1;
  u16 in_DX;
  astruct_35 *uVar2;
  ushort uVar3;
  
  UI_SubDialog_Base_ctor_init_7728(param_1,0x1,0x0,0xfc3,param_7);
  uVar3 = (ushort)((ulong)param_1 >> 0x10);
  uVar2 = (astruct_35 *)param_1;
  uVar2->field141_0x8e = 0x0;
  uVar2->field146_0x98 = param_2;
  uVar2->field147_0x9a = 0x0;
  uVar2->field164_0xb2 = 0x0;
  *(undefined2 *)param_1 = 0x8ddc;
  uVar2->field2_0x2 = 0x1040;
  uVar2->field150_0x9e = 0x0;
  uVar2->field151_0xa2 = 0x12c;
  pcVar1 = strdup_allocate(param_5);
  uVar2->field142_0x90 = pcVar1;
  uVar2->field143_0x92 = in_DX;
  pcVar1 = strdup_allocate(param_3);
  uVar2->field144_0x94 = pcVar1;
  uVar2->field145_0x96 = in_DX;
  UI_Dialog_Load_Icon_by_Bitmask_8b92(uVar2);
  PTR_DAT_1050_0000_1050_5df8 = NULL;
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Alternative constructor for Type 0x8DDC dialogs. Accepts a variable number of string
// resource IDs and concatenates them into a single display buffer. Supports complex
// multi-part messages.

ushort __cdecl16far
UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,int param_4,
          int param_5,int param_6)
{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  void *pvVar5;
  undefined2 in_DX;
  undefined2 unaff_SI;
  undefined2 unaff_SS;
  undefined2 *this_ptr;
  undefined2 uVar6;
  int iStack_16;
  int iStack_10;
  int *piStack_e;
  undefined2 uVar8;
  astruct_34 *uVar7;
  
  this_ptr = (undefined2 *)param_1;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_ctor_init_7728(this_ptr,uVar6,0x1,0x0,0x0,0xfc3,param_2);
  this_ptr[0x47] = 0x0;
  this_ptr[0x4c] = param_3;
  this_ptr[0x4d] = 0x0;
  this_ptr[0x59] = 0x0;
  *param_1 = 0x8ddc;
  this_ptr[0x1] = 0x1040;
  *(undefined4 *)(this_ptr + 0x4f) = 0x0;
  *(undefined4 *)(this_ptr + 0x51) = 0x12c;
  piVar1 = &param_5;
  iStack_10 = param_4;
  if (param_4 != 0x0)
  {
    piVar1 = &param_6;
    pcVar3 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),param_5);
    this_ptr[0x4a] = pcVar3;
    this_ptr[0x4b] = in_DX;
    iStack_10 = param_4 + -0x1;
  }
  _piStack_e = (int *)CONCAT22(unaff_SS,piVar1);
  iStack_16 = 0x0;
  while (piVar2 = _piStack_e, iStack_10 != 0x0)
  {
    uVar8 = (undefined2)((ulong)_piStack_e >> 0x10);
    _piStack_e = (int *)CONCAT22(uVar8,piStack_e + 0x1);
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),*piVar2);
    uVar4 = strlen_get_length((char *)CONCAT22(in_DX,pcVar3));
    iStack_16 += uVar4;
    iStack_10 = iStack_10 + -0x1;
  }
  pvVar5 = allocate_memory(CONCAT22(unaff_SI,iStack_16 + 0x1));
  this_ptr[0x48] = pvVar5;
  this_ptr[0x49] = in_DX;
  _piStack_e = (int *)CONCAT22(unaff_SS,&param_6);
  iStack_10 = param_4 + -0x1;
  if (param_4 + -0x1 != 0x0)
  {
    _piStack_e = (int *)CONCAT22(unaff_SS,&stack0x0012);
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),
               CONCAT22((int)*(undefined4 *)(this_ptr + 0x48),0x3ff),
               CONCAT22(param_6,(int)((ulong)*(undefined4 *)(this_ptr + 0x48) >> 0x10)))
    ;
    iStack_10 = param_4 + -0x2;
  }
  while (piVar2 = _piStack_e, iStack_10 != 0x0)
  {
    uVar8 = (undefined2)((ulong)_piStack_e >> 0x10);
    _piStack_e = (int *)CONCAT22(uVar8,piStack_e + 0x1);
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),*piVar2);
    strcat_append(*(char **)(this_ptr + 0x48),(char *)CONCAT22(in_DX,pcVar3));
    iStack_10 = iStack_10 + -0x1;
  }
  UI_Dialog_Load_Icon_by_Bitmask_8b92(this_ptr);
  PTR_DAT_1050_0000_1050_5df8 = NULL;
  return (ushort)this_ptr;
}



// Internal destructor for dialog Type 0x8DDC. Frees the duplicated message buffers and
// reverts vtable.

void __stdcall16far UI_SubDialog_Type8DDC_dtor_Internal_869a(void *this_ptr)
{
  astruct_32 *uVar1;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x8ddc;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ptr + 0x90));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ptr + 0x94));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// Utility to enable the 'OK' (ID 1) and 'Cancel' (ID 2) buttons within a dialog.

void __stdcall16far UI_Dialog_Enable_Standard_Buttons_86dc(undefined4 param_1)
{
  HWND16 HVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  HVar1 = GetDlgItem16(0x1,*(short *)((int)param_1 + 0x6));
  if (HVar1 != 0x0)
  {
    EnableWindow16(0x1,HVar1);
    HVar1 = GetDlgItem16(0x2,*(short *)((int)param_1 + 0x6));
    if (HVar1 != 0x0)
    {
      EnableWindow16(0x1,HVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A generic modal dialog executor. Initializes layout based on a 'Type' (1 for
// OK/Cancel, 4 for Yes/No), creates appropriate OPButton controls, centers the window
// on the screen, and runs a local message loop until completion. Returns the result
// from the global data segment.

undefined * __stdcall16far
UI_Custom_Message_Dialog_Initialize_and_Execute_8718(void *param_1)
{
  void *pvVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  long lVar4;
  void *pvVar5;
  ushort hmenu;
  int x;
  int y;
  char *window_name;
  int local_104 [0x80];
  uint local_4;
  
  win16_conditional_message_loop((int *)(dword *)&DWORD_1050_5df4);
  pvVar1 = (void *)param_1;
  iVar2 = (int)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(pvVar1);
  DWORD_1050_5df4._2_2_ = *(undefined2 *)((int)pvVar1 + 0x6);
  if (*(long *)((int)pvVar1 + 0x94) != 0x0)
  {
    strcpy_optimized((char *)CONCAT22(iVar2,(char *)((int)pvVar1 + 0x10)),
                     (char *)*(undefined4 *)((int)pvVar1 + 0x94));
  }
  UI_SubDialog_Calculate_Layout_Metrics_8c66(pvVar1);
  local_4 = *(byte *)((int)pvVar1 + 0x98) & 0xf;
  if (local_4 == 0x1)
  {
    *(int *)((int)pvVar1 + 0xae) = (*(int *)((int)pvVar1 + 0xaa) + -0xc4) / 0x2;
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0xff),
               CONCAT22(0x592,unaff_SS));
    UI_Dialog_Create_OPButton_Control_8bea
              (pvVar1,iVar2,0x1,0x1,(int)*(undefined4 *)((int)pvVar1 + 0xae),
               (char *)((ulong)*(undefined4 *)((int)pvVar1 + 0xae) >> 0x10));
    *(int *)((int)pvVar1 + 0xae) = *(int *)((int)pvVar1 + 0xae) + 0x6c;
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0xff),
               CONCAT22(0x7d8,unaff_SS));
    y = (int)*(undefined4 *)((int)pvVar1 + 0xae);
    window_name = (char *)((ulong)*(undefined4 *)((int)pvVar1 + 0xae) >> 0x10);
    x = 0x2;
  }
  else
  {
    if (local_4 != 0x4)
    {
      *(int *)((int)pvVar1 + 0xae) = (*(int *)((int)pvVar1 + 0xaa) + -0x58) / 0x2;
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0xff)
                 ,CONCAT22(0x592,unaff_SS));
      y = (int)*(undefined4 *)((int)pvVar1 + 0xae);
      window_name = (char *)((ulong)*(undefined4 *)((int)pvVar1 + 0xae) >> 0x10);
      hmenu = 0x1;
      x = 0x1;
      goto LAB_1040_88a5;
    }
    *(int *)((int)pvVar1 + 0xae) = (*(int *)((int)pvVar1 + 0xaa) + -0xc4) / 0x2;
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0xff),
               CONCAT22(0x650,unaff_SS));
    UI_Dialog_Create_OPButton_Control_8bea
              (pvVar1,iVar2,0x1,0x6,(int)*(undefined4 *)((int)pvVar1 + 0xae),
               (char *)((ulong)*(undefined4 *)((int)pvVar1 + 0xae) >> 0x10));
    *(int *)((int)pvVar1 + 0xae) = *(int *)((int)pvVar1 + 0xae) + 0x6c;
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0xff),
               CONCAT22(0x651,unaff_SS));
    y = (int)*(undefined4 *)((int)pvVar1 + 0xae);
    window_name = (char *)((ulong)*(undefined4 *)((int)pvVar1 + 0xae) >> 0x10);
    x = 0x7;
  }
  hmenu = 0x0;
LAB_1040_88a5:
  UI_Dialog_Create_OPButton_Control_8bea(pvVar1,iVar2,hmenu,x,y,window_name);
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
  local_104[0x0] = *(int *)((int)lVar4 + 0xa);
  local_4 = *(int *)((int)lVar4 + 0xc);
  SetWindowPos16(0x40,*(int16_t *)((int)pvVar1 + 0xac),*(int16_t *)((int)pvVar1 + 0xaa),
                 (int)(local_4 - *(int *)((int)pvVar1 + 0xac)) / 0x2,
                 (local_104[0x0] - *(int *)((int)pvVar1 + 0xaa)) / 0x2,0x0,
                 *(HWND16 *)((int)pvVar1 + 0x6));
  DWORD_1050_5df4._0_2_ = 0x1;
  win16_conditional_message_loop((int *)(dword *)&DWORD_1050_5df4);
  UI_Dialog_Close_Window_8b7e(param_1);
  DWORD_1050_5df4._2_2_ = 0x0;
  if (*(int *)((int)pvVar1 + 0xb2) != 0x0)
  {
    pvVar5 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
    pvVar1 = (void *)pvVar5;
    iVar2 = Turn_Manager_Has_Active_Sequence_maybe_Logic(pvVar1);
    if (iVar2 != 0x0)
    {
      PostMessage16(0x0,0x0,0xfc,(long)CONCAT22(pvVar1,g_ParentHWND));
    }
  }
  return PTR_DAT_1050_0000_1050_5df8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Plays a shorthand media ID and then triggers the dialog's virtual completion callback
// at offset 0x74.

void __stdcall16far UI_Dialog_Play_Media_and_Notify_8978(void *this_ptr,int media_id)
{
  void *puVar1;
  
  win16_conditional_message_loop((int *)(dword *)&DWORD_1050_5df4);
  media_play_from_resource_id_shorthand
            ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
  puVar1 = (void *)((int)*_this_ptr + 0x74);
  (**(code **)puVar1)(0x1008,this_ptr,media_id);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Dialog_Play_Media_Resource_and_Notify_89a4(void *this_ptr,void *res_ptr)
{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  undefined2 *in_stack_00000008;
  
  win16_conditional_message_loop((int *)(dword *)&DWORD_1050_5df4);
  uVar1 = ((undefined2 *)in_stack_00000008)[0x1];
  uVar2 = *in_stack_00000008;
  uVar5 = 0x1010;
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  iVar4 = (int)lVar6;
  if (*(int *)(iVar4 + 0x72) != 0x0)
  {
    uVar5 = 0x1008;
    media_play_from_full_resource_ptr_logic
              ((void *)_p_UIPanelContainer,CONCAT22(uVar1,uVar2));
    *(int *)((int)this_ptr + 0x8c) = iVar4;
  }
  puVar3 = (undefined2 *)((int)*_this_ptr + 0x74);
  (*(code *)*puVar3)(uVar5,this_ptr,res_ptr);
  return;
}



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
  COLORREF in_DX;
  COLORREF color;
  int iVar7;
  void *pvVar8;
  undefined2 unaff_SS;
  HDC16 in_stack_0000ffbc;
  HGDIOBJ16 local_3e;
  undefined1 local_22 [0x20];
  
  pvVar8 = (void *)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  hdc = (void *)BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
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
  color = in_DX;
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
  SetBkColor16(hdc_00,in_DX);
  SetTextColor16(hdc_01,color);
  HVar5 = SelectPalette16(0x0,HVar5,(BOOL16)hdc);
  DeleteObject16(HVar5);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar7 + 0x6));
  return 0x1;
}



void __stdcall16far
UI_SubDialog_On_Command_Specialized_Dispatcher_8b3c
          (void *param_1,u32 param_2,u32 param_3)
{
  undefined2 unaff_BP;
  
  if ((param_3._2_2_ != NULL) &&
     ((param_3._2_2_ == (undefined **)0x1 ||
       param_3._2_2_ == (undefined **)&p_CurrentHeapContext ||
      (((undefined **)((int)(undefined **)&p_CurrentHeapContext + 0x1) <
        param_3._2_2_ + -0x1 &&
       (param_3._2_2_ + -0x3 < (undefined **)&p_CurrentHeapContext))))))
  {
    DWORD_1050_5df4._0_2_ = 0x0;
    PTR_DAT_1050_0000_1050_5df8 = (undefined *)param_3._2_2_;
    return;
  }
  UI_SubDialog_Base_On_Command_Logic_7b3c
            (param_1,(ushort)param_2,(ushort)(param_2 >> 0x10),(ushort)param_3,
             (ulong)CONCAT22(unaff_BP,param_3._2_2_));
  return;
}



void __stdcall16far UI_Dialog_Close_Window_8b7e(undefined4 param_1)
{
  DestroyWindow16(*(HWND16 *)((int)param_1 + 0x6));
  return;
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



// Creates a custom 'OPButton' control within a dialog. Sets styles, window name, and
// synchronizes the button font from the dialog's properties.

void __stdcall16far
UI_Dialog_Create_OPButton_Control_8bea
          (void *this_ptr,int flags,ushort hmenu,int x,int y,char *window_name)
{
  HANDLE16 w_param;
  undefined4 in_stack_00000010;
  HWND16 hwnd;
  uint style;
  undefined1 uStack_3;
  
  uStack_3 = 0x50;
  style = (uint)(hmenu != 0x0);
  if (*(int *)((int)this_ptr + 0x74) != 0x0)
  {
    uStack_3 = 0x58;
  }
  CreateWindow16(NULL,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c,x,
                 *(HWND16 *)((int)this_ptr + 0x6),0x17,0x58,(int16_t)window_name,y,style
                 ,(void *)CONCAT22((int)in_stack_00000010,
                                   (void *)(CONCAT13(uStack_3,CONCAT12(0x1,style)) >>
                                           0x10)),
                 (void *)CONCAT22(0x5e00,(void *)((ulong)in_stack_00000010 >> 0x10)));
  hwnd = *(HWND16 *)((int)this_ptr + 0x6);
  w_param = GetProp16(s_hfont_1050_5e09,hwnd);
  if (w_param != 0x0)
  {
    SendMessage16(0x1,0x0,w_param,CONCAT22(style,hwnd));
  }
  return;
}



// Calculates the total width and height required for a sub-dialog. Considers caption
// height, text dimensions (8D14), and internal padding. Stores results in the structure
// at offsets 0xA6-0xB0.

void __stdcall16far UI_SubDialog_Calculate_Layout_Metrics_8c66(void *this_ptr)
{
  byte bVar1;
  HDC16 hdc;
  int16_t iVar2;
  astruct_31 *uVar3;
  undefined2 in_stack_00000006;
  
  hdc = GetDC16(*(HWND16 *)((int)this_ptr + 0x6));
  UI_Dialog_Calculate_Text_Rect_8d14(_this_ptr,hdc);
  *(undefined4 *)((int)this_ptr + 0xa6) = *(undefined4 *)((int)this_ptr + 0x9e);
  *(undefined4 *)((int)this_ptr + 0xaa) = *(undefined4 *)((int)this_ptr + 0xa2);
  iVar2 = GetSystemMetrics16(0x4);
  *(int *)((int)this_ptr + 0xac) = *(int *)((int)this_ptr + 0xac) + iVar2;
  bVar1 = *(byte *)((int)this_ptr + 0x98) & 0xf0;
  if ((((bVar1 == 0x30) || (bVar1 == 0x10)) || (bVar1 == 0x40)) || (bVar1 == 0x20))
  {
    iVar2 = GetSystemMetrics16(0xc);
    if (*(int *)((int)this_ptr + 0xac) < iVar2)
    {
      iVar2 = GetSystemMetrics16(0xc);
      *(int16_t *)((int)this_ptr + 0xac) = iVar2;
    }
  }
  *(int *)((int)this_ptr + 0xaa) = *(int *)((int)this_ptr + 0xaa) + 0x14;
  *(int *)((int)this_ptr + 0xac) = *(int *)((int)this_ptr + 0xac) + 0xa;
  *(undefined2 *)((int)this_ptr + 0xb0) = *(undefined2 *)((int)this_ptr + 0xac);
  *(int *)((int)this_ptr + 0xac) = *(int *)((int)this_ptr + 0xac) + 0x30;
  ReleaseDC16(hdc,*(HWND16 *)((int)this_ptr + 0x6));
  return;
}
