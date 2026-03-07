/*
 * Source: outpost.c
 * Chunk: 113/117
 * Original lines: 129045-130093
 * Boundaries: top-level declarations/definitions only
 */




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



void * __stdcall16far
UI_SubDialog_Type8DDC_dtor_Scalar_Deleting_8db6(void *this_ptr,uchar flags)
{
  byte in_stack_00000008;
  
  UI_SubDialog_Type8DDC_dtor_Internal_869a(this_ptr);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}



// Constructor for sub-dialog Type 0x8F3C (vtable 0x8F3C). Initializes base dialog
// state.

ushort __stdcall16far
UI_SubDialog_Type8F3C_ctor_init_8e58(undefined2 *param_1,void *param_2,ushort param_3)
{
  UI_SubDialog_TypeB772_ctor_init_b040(param_1,param_2,param_3);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x8f3c;
  param_1[0x1] = 0x1040;
  return (ushort)param_2;
}



void __stdcall16far UI_SubDialog_Type8F3C_dtor_Internal_8e82(void *this_ptr)
{
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x8f3c;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(this_ptr);
  return;
}



// Virtual event handler for dialog Type 0x8F3C. Manages specialized control
// interactions for items 0xF8 and 0x17D8, including window positioning.

ulong __stdcall16far
UI_SubDialog_Type8F3C_On_Event_Logic_8ea0
          (int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  HWND16 enable;
  ulong uVar1;
  HWND16 hwnd;
  
  if (param_4._2_2_ == 0xf8)
  {
    enable = GetDlgItem16(0x17d8,*(short *)(param_1 + 0x6));
    hwnd = 0x1;
  }
  else
  {
    if (param_4._2_2_ != 0x17d8)
    {
      uVar1 = UI_SubDialog_Complex_Command_Handler_b54a
                        (param_1,param_2,param_3,(int)param_4,param_4._2_2_);
      return uVar1;
    }
    SetWindowPos16(0x6,0xf6,0x269,0x0,0x0,0x0,*(HWND16 *)(param_1 + 0x6));
    enable = GetDlgItem16(0x17d8,*(short *)(param_1 + 0x6));
    hwnd = 0x0;
  }
  EnableWindow16(hwnd,enable);
  return 0x1;
}



void * __stdcall16far
UI_SubDialog_Type8F3C_dtor_Scalar_Deleting_8f16(void *this_ptr,uchar flags)
{
  byte in_stack_00000008;
  
  UI_SubDialog_Type8F3C_dtor_Internal_8e82(this_ptr);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI 'Complex Control' (vtable 0x9800). Initializes state, loads
// multiple bitmap resources, and creates a procedure instance for its custom window
// procedure (1040:9684). Increments a global reference counter (1050:5E16).

ushort __stdcall16far
UI_Complex_Control_ctor_9fb8
          (undefined2 *param_1,undefined2 param_2,char *param_3,int param_4,int param_5,
          int param_6,undefined2 param_7,undefined2 param_8)
{
  undefined2 uVar1;
  void *pvVar2;
  char *pcVar3;
  undefined2 in_DX;
  undefined2 *puVar4;
  ushort uVar5;
  undefined2 in_stack_0000fffa;
  
  uVar5 = (ushort)((ulong)param_1 >> 0x10);
  puVar4 = (undefined2 *)param_1;
  *param_1 = (char *)s_1_1050_389a;
  puVar4[0x1] = 0x1008;
  *(undefined4 *)(puVar4 + 0x2) = 0x0;
  *(undefined4 *)(puVar4 + 0x4) = 0x0;
  *(undefined4 *)(puVar4 + 0x6) = 0x0;
  *(undefined4 *)(puVar4 + 0x8) = 0x0;
  *(undefined4 *)(puVar4 + 0xa) = 0x0;
  puVar4[0xc] = 0x0;
  puVar4[0xd] = param_8;
  puVar4[0xe] = param_7;
  puVar4[0x1b] = 0x5;
  puVar4[0x1c] = 0x0;
  puVar4[0x1d] = 0x0;
  puVar4[0x1e] = 0x2;
  puVar4[0x1f] = 0x0;
  puVar4[0x20] = param_2;
  *param_1 = 0x9800;
  puVar4[0x1] = 0x1040;
  uVar1 = puVar4[0x1b];
  puVar4[0x14] = uVar1;
  puVar4[0x13] = uVar1;
  puVar4[0x16] = 0x0;
  puVar4[0x15] = 0x0;
  if ((param_6 != 0x0) && (param_5 != 0x0))
  {
    puVar4[0x1c] = 0x1;
    pvVar2 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    puVar4[0x4] = pvVar2;
    puVar4[0x5] = in_DX;
    pvVar2 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    puVar4[0x6] = pvVar2;
    puVar4[0x7] = in_DX;
    if (param_4 == 0x0)
    {
      *(undefined4 *)(puVar4 + 0x8) = 0x0;
    }
    else
    {
      pvVar2 = Resource_Manager_Load_Resource_Object_Logic
                         ((void *)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10));
      puVar4[0x8] = pvVar2;
      puVar4[0x9] = in_DX;
    }
  }
  uVar1 = puVar4[0x1b];
  puVar4[0x18] = uVar1;
  puVar4[0x17] = uVar1;
  *(undefined4 *)(puVar4 + 0x19) = 0x0;
  if (param_3 != NULL)
  {
    pcVar3 = strdup_allocate((char *)param_3);
    puVar4[0x2] = pcVar3;
    puVar4[0x3] = in_DX;
  }
  *(undefined4 *)(puVar4 + 0x11) = 0x0;
  puVar4[0xf] = 0x0;
  puVar4[0x10] = 0x0;
  if (_PTR_DAT_1050_0000_1050_5e18 == NULL)
  {
    _PTR_DAT_1050_0000_1050_5e18 =
         MakeProcInstance16((HANDLE16)PTR_DAT_1050_0000_1050_038c,
                            (void *)CONCAT22(in_stack_0000fffa,(void *)0x1040));
  }
  PTR_DAT_1050_0000_1050_5e16 = PTR_DAT_1050_0000_1050_5e16 + 0x1;
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for UI Complex Controls. Systematic cleanup of bitmaps, removal
// of window properties, and decrements the global reference counter. Frees proc
// instances when count reaches zero.

void __stdcall16far UI_Complex_Control_dtor_Internal_911e(void *this_ptr)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x9800;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  if (*(int *)((int)this_ptr + 0x38) != 0x0)
  {
    if (*(int *)((int)this_ptr + 0xa) != 0x0 ||
        (undefined4 *)*(int *)((int)this_ptr + 0x8) != NULL)
    {
      puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this_ptr + 0x8);
      (*(code *)*puVar1)();
    }
    if (*(int *)((int)this_ptr + 0xe) != 0x0 ||
        (undefined4 *)*(int *)((int)this_ptr + 0xc) != NULL)
    {
      puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this_ptr + 0xc);
      (*(code *)*puVar1)();
    }
    if (*(int *)((int)this_ptr + 0x12) != 0x0 ||
        (undefined4 *)*(int *)((int)this_ptr + 0x10) != NULL)
    {
      puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this_ptr + 0x10)
      ;
      (*(code *)*puVar1)();
    }
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ptr + 0x4));
  SetWindowLong16((int32_t)*(undefined4 *)((int)this_ptr + 0x14),
                  (int16_t)((ulong)*(undefined4 *)((int)this_ptr + 0x14) >> 0x10),0xfffc
                 );
  RemoveProp16(s_thisLo_1050_5e1c,*(HWND16 *)((int)this_ptr + 0x18));
  RemoveProp16(s_thisHi_1050_5e23,*(HWND16 *)((int)this_ptr + 0x18));
  RemoveProp16(s_procLo_1050_5e2a,*(HWND16 *)((int)this_ptr + 0x18));
  RemoveProp16(s_procHi_1050_5e31,*(HWND16 *)((int)this_ptr + 0x18));
  RemoveProp16(s_IsDlg_1050_5e38,*(HWND16 *)((int)this_ptr + 0x18));
  PTR_DAT_1050_0000_1050_5e16 = PTR_DAT_1050_0000_1050_5e16 + -0x1;
  if (PTR_DAT_1050_0000_1050_5e16 == NULL)
  {
    FreeProcInstance16(_PTR_DAT_1050_0000_1050_5e18);
    _PTR_DAT_1050_0000_1050_5e18 = NULL;
  }
  *_this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1008;
  return;
}



// Enables or disables the window handle associated with a UI Complex Control (offset
// 0x18).

void __stdcall16far UI_Complex_Control_Enable_Window_9234(void *this_ptr,ushort enable)
{
  HWND16 in_stack_00000008;
  
  if (*(int *)((int)this_ptr + 0x18) != 0x0)
  {
    EnableWindow16(in_stack_00000008,*(BOOL16 *)((int)this_ptr + 0x18));
  }
  return;
}



// Calculates the total width and height required for a dialog or UI component.
// Considers text dimensions (9650), linked object dimensions (9618), and internal
// padding/margins. Stores results at offsets 0x22 and 0x24.

void __stdcall16far UI_Dialog_Calculate_Layout_Metrics_9252(void *this_ptr)
{
  int iVar1;
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this_ptr + 0x4) != 0x0)
  {
    UI_Dialog_Calculate_Text_Rect_9650((void *)CONCAT22(in_stack_00000006,this_ptr));
  }
  if (*(long *)((int)this_ptr + 0x8) != 0x0)
  {
    UI_Dialog_Sync_Object_Dimensions_9618((void *)CONCAT22(in_stack_00000006,this_ptr));
  }
  if (*(int *)((int)this_ptr + 0x22) < *(int *)((int)this_ptr + 0x32))
  {
    *(int *)((int)this_ptr + 0x22) = *(int *)((int)this_ptr + 0x32);
  }
  if (*(int *)((int)this_ptr + 0x24) < *(int *)((int)this_ptr + 0x34))
  {
    *(int *)((int)this_ptr + 0x24) = *(int *)((int)this_ptr + 0x34);
  }
  iVar1 = *(int *)((int)this_ptr + 0x26) + *(int *)((int)this_ptr + 0x2a);
  if (*(int *)((int)this_ptr + 0x22) < iVar1)
  {
    *(int *)((int)this_ptr + 0x22) = iVar1;
  }
  iVar1 = *(int *)((int)this_ptr + 0x28) + *(int *)((int)this_ptr + 0x2c);
  if (*(int *)((int)this_ptr + 0x24) < iVar1)
  {
    *(int *)((int)this_ptr + 0x24) = iVar1;
  }
  *(int *)((int)this_ptr + 0x22) =
       *(int *)((int)this_ptr + 0x22) + *(int *)((int)this_ptr + 0x36);
  *(int *)((int)this_ptr + 0x24) =
       *(int *)((int)this_ptr + 0x24) + *(int *)((int)this_ptr + 0x36);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Creates a Windows window using CreateWindow16 and immediately subclasses it with a
// specialized procedure (1050:5E18). Registers the 'this' pointer and other metadata
// via window properties.

void __stdcall16far UI_Window_Create_and_Subclass_92dc(void *this_ptr)
{
  HWND16 HVar1;
  int32_t iVar2;
  HANDLE16 in_DX;
  astruct_29 *handle;
  HWND16 in_stack_00000000;
  HANDLE16 in_stack_00000006;
  
  if (*(int *)((int)this_ptr + 0x18) == 0x0)
  {
    HVar1 = CreateWindow16(NULL,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c,
                           *(HMENU16 *)((int)this_ptr + 0x1c),
                           *(HWND16 *)((int)this_ptr + 0x1a),0x0,0x0,
                           *(int16_t *)((int)this_ptr + 0x20),
                           *(int16_t *)((int)this_ptr + 0x1e),0xb,(void *)0x5e3e4000,
                           (void *)0x5e3f1050);
    *(HWND16 *)((int)this_ptr + 0x18) = HVar1;
    iVar2 = SetWindowLong16((int32_t)_PTR_DAT_1050_0000_1050_5e18,
                            (int16_t)((ulong)_PTR_DAT_1050_0000_1050_5e18 >> 0x10),
                            0xfffc);
    *(int32_t *)((int)this_ptr + 0x14) = iVar2;
    *(HANDLE16 *)((int)this_ptr + 0x16) = in_DX;
    SetProp16(in_DX,(dword *)CONCAT22(*(undefined2 *)((int)this_ptr + 0x18),
                                      (dword *)&g_HeapContext),in_stack_00000000);
    SetProp16(*(HANDLE16 *)((int)this_ptr + 0x14),
              (dword *)CONCAT22(*(undefined2 *)((int)this_ptr + 0x18),
                                (dword *)&g_HeapContext),in_stack_00000000);
    SetProp16(in_stack_00000006,
              (dword *)CONCAT22(*(undefined2 *)((int)this_ptr + 0x18),
                                (dword *)&g_HeapContext),in_stack_00000000);
    SetProp16((HANDLE16)this_ptr,
              (dword *)CONCAT22(*(undefined2 *)((int)this_ptr + 0x18),
                                (dword *)&g_HeapContext),in_stack_00000000);
    if (*(int *)((int)this_ptr + 0x40) != 0x0)
    {
      SetProp16(0x1,(dword *)CONCAT22(*(undefined2 *)((int)this_ptr + 0x18),
                                      (dword *)&g_HeapContext),in_stack_00000000);
    }
    ShowWindow16(0x5,*(short *)((int)this_ptr + 0x18));
  }
  return;
}



// Wraps MoveWindow16 and UpdateWindow16 to reposition a UI component and force an
// immediate redraw.

void __stdcall16far UI_Window_Move_and_Update_93aa(void *this_ptr,int x,int y)
{
  astruct_28 *struct_a;
  undefined2 in_stack_0000000a;
  
  *(undefined2 *)((int)this_ptr + 0x1e) = in_stack_0000000a;
  *(int *)((int)this_ptr + 0x20) = y;
  MoveWindow16(0x1,*(int16_t *)((int)this_ptr + 0x24),*(int16_t *)((int)this_ptr + 0x22)
               ,y,*(int16_t *)((int)this_ptr + 0x1e),*(HWND16 *)((int)this_ptr + 0x18));
  UpdateWindow16(*(HWND16 *)((int)this_ptr + 0x18));
  return;
}



// Sends a WM_COMMAND notification (0x111) to the parent window, using parameters stored
// in the dialog structure (offsets 0x1A, 0x1C).

void __stdcall16far UI_Dialog_Send_Command_Notification_93e6(void *this_ptr)
{
  undefined2 unaff_BP;
  undefined2 in_stack_00000006;
  
  SendMessage16(0x0,0x0,*(ushort *)((int)this_ptr + 0x1c),
                CONCAT22(unaff_BP,*(undefined2 *)((int)this_ptr + 0x1a)));
  return;
}



LRESULT __stdcall16far UI_Global_Send_Custom_Message_9404(u32 param_1)
{
  undefined2 unaff_BP;
  undefined2 uVar1;
  LRESULT pvVar2;
  
  uVar1 = (undefined2)(param_1 >> 0x10);
  pvVar2 = SendMessage16(0x0,0x0,*(ushort *)((int)param_1 + 0x1c),
                         CONCAT22(unaff_BP,*(undefined2 *)((int)param_1 + 0x1a)));
  return pvVar2;
}



void __stdcall16far Simulator_Object_Conditional_VCall_10_14_9422(u32 *param_1)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (((u32 *)param_1)[0x2] != 0x0)
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x10);
    (*(code *)*puVar1)();
  }
  if (((u32 *)param_1)[0x1] != 0x0)
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x14);
    (*(code *)*puVar1)();
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



// Sets the text and background colors for an HDC and renders a string using DrawText16
// within a pre-defined rectangle. Restores previous colors on completion.

void __stdcall16far
UI_Dialog_Draw_Text_Colored_94fc(void *param_1,HDC16 param_2,HDC16 param_3)
{
  COLORREF hdc;
  COLORREF hdc_00;
  COLORREF hdc_01;
  astruct_27 *struct_a;
  u16 segment;
  
  segment = (u16)((ulong)param_1 >> 0x10);
  struct_a = (astruct_27 *)param_1;
  hdc = SetBkColor16(struct_a->field55_0x3a,0x100);
  hdc_01 = param_3;
  hdc_00 = SetTextColor16(struct_a->field56_0x3c,0x100);
  DrawText16(0x10,(void *)CONCAT22(0xffff,segment),(int16_t)(void *)struct_a->field4_0x4
             ,(void *)CONCAT22(hdc_00,param_2),hdc_01);
  SetBkColor16(hdc,param_3);
  SetTextColor16(hdc_00,hdc_01);
  return;
}



// Retrieves the 'this' pointer from a window handle and dispatches a virtual event call
// (offset 0xC, 0x10, or 0x18) to the control's implementation based on the event type
// (param_1 offset 6).

void __cdecl16far UI_Control_Dispatch_Virtual_Event_9566(void *event_data)
{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  HANDLE16 HVar4;
  undefined4 *puVar5;
  astruct_26 *uVar6;
  undefined2 in_stack_00000006;
  undefined4 uStack_c;
  
  if (*_event_data == 0x4)
  {
    uVar1 = *(undefined2 *)((int)event_data + 0xc);
    HVar4 = GetProp16(str_1050_5e6f,*(HWND16 *)((int)event_data + 0xa));
    puVar5 = (undefined4 *)
             GetProp16(s_thisLo_1050_5e68,*(HWND16 *)((int)event_data + 0xa));
    uStack_c = (undefined4 *)CONCAT22(HVar4,puVar5);
    if (HVar4 != 0x0 || puVar5 != NULL)
    {
      iVar2 = *(int *)((int)event_data + 0x6);
      if (iVar2 == 0x1)
      {
        puVar3 = (undefined2 *)((int)*uStack_c + 0xc);
        (*(code *)*puVar3)(0x1538,puVar5,HVar4,*(undefined2 *)((int)event_data + 0x8),
                           uVar1);
        return;
      }
      if (iVar2 == 0x2)
      {
        puVar3 = (undefined2 *)((int)*uStack_c + 0x10);
        (*(code *)*puVar3)(0x1538,puVar5,HVar4,*(undefined2 *)((int)event_data + 0x8),
                           uVar1);
        return;
      }
      if (iVar2 == 0x4)
      {
        puVar3 = (undefined2 *)((int)*uStack_c + 0x18);
        (*(code *)*puVar3)(0x1538,puVar5,HVar4,*(byte *)((int)event_data + 0x8) & 0x10,
                           uVar1);
        return;
      }
    }
  }
  return;
}



// Retrieves the 16-bit width and height (offsets 4 and 8) from a lazy-initialized
// simulator object and caches them in the UI structure.

void __stdcall16far UI_Dialog_Sync_Object_Dimensions_9618(void *param_1)
{
  void *pvVar1;
  undefined2 in_DX;
  astruct_25 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (astruct_25 *)param_1;
  pvVar1 = get_with_lazy_init((void *)(void *)uVar2->field8_0x8);
  uVar2->field39_0x2a = *(u16 *)((int)pvVar1 + 0x4);
  uVar2->field40_0x2c = *(u16 *)((int)pvVar1 + 0x8);
  return;
}



// Uses a temporary screen DC and DT_CALCRECT to determine the bounding box required to
// render the provided text string.

void __stdcall16far UI_Dialog_Calculate_Text_Rect_9650(void *param_1)
{
  void *pvVar1;
  HDC16 unaff_BP;
  void *LPCSTR_str;
  
  pvVar1 = (void *)GetDC16(0x0);
  LPCSTR_str = (void *)CONCAT22(pvVar1,pvVar1);
  pvVar1 = (void *)((ulong)param_1 >> 0x10);
  DrawText16(0x410,(void *)CONCAT22(0xffff,pvVar1),
             (int16_t)*(undefined4 *)((int)(void *)param_1 + 0x4),LPCSTR_str,unaff_BP);
  ReleaseDC16((HDC16)((ulong)LPCSTR_str >> 0x10),0x0);
  return;
}



// Window procedure redirector using window properties (proc, this) to route mouse
// events (WM_LBUTTONDOWN, WM_RBUTTONDOWN) to the appropriate object-oriented handlers.
// Supports logging of mouse down events.

void * __stdcall16far
UI_Window_Subclass_Redirector_WindowProc
          (void *param_1,int16_t param_2,uint16_t param_3,undefined4 param_4)
{
  undefined2 *puVar1;
  POINT16 pt;
  POINT16 pt_00;
  undefined2 in_AX;
  HANDLE16 HVar2;
  HANDLE16 HVar3;
  undefined4 *puVar4;
  BOOL16 BVar5;
  void *pvVar6;
  undefined2 unaff_SS;
  LRESULT pvVar7;
  undefined2 uVar8;
  undefined1 local_1a [0x8];
  undefined4 *local_12;
  undefined4 *local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  uVar8 = 0x1050;
  HVar2 = GetProp16((char *)CONCAT22(in_AX,(char *)s_procHi_1050_5e7d),param_4._2_2_);
  HVar3 = GetProp16((char *)CONCAT22(in_AX,(char *)s_procLo_1050_5e76),param_4._2_2_);
  local_6 = CONCAT22(HVar2,HVar3);
  HVar2 = GetProp16((char *)CONCAT22(in_AX,(char *)s_thisHi_1050_5e8b),param_4._2_2_);
  puVar4 = (undefined4 *)
           GetProp16((char *)CONCAT22(in_AX,(char *)s_thisLo_1050_5e84),param_4._2_2_);
  local_a = (undefined4 *)CONCAT22(HVar2,puVar4);
  if (HVar2 == 0x0 && puVar4 == NULL)
  {
LAB_1040_970c:
    if (local_6 != 0x0)
    {
      pvVar7 = CallWindowProc16((void *)CONCAT22(param_2,param_1),param_3,
                                (uint16_t)param_4,param_4._2_2_,
                                (void *)CONCAT22(uVar8,(void *)((ulong)local_6 >> 0x10))
                               );
      uVar8 = (undefined2)((ulong)pvVar7 >> 0x10);
      pvVar6 = (void *)((ulong)pvVar7 & 0xffff);
      goto LAB_1040_97d2;
    }
  }
  else
  {
    if ((uint16_t)param_4 == 0x2)
    {
      local_12 = local_a;
      local_e = local_a;
      if (local_a != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*local_a)(0x1538,puVar4,HVar2,0x1);
      }
      goto LAB_1040_970c;
    }
    if ((uint16_t)param_4 == 0x201)
    {
      HVar2 = GetProp16((char *)CONCAT22(in_AX,(char *)s_IsDlg_1050_5e92),param_4._2_2_)
      ;
      if (HVar2 != 0x0) goto LAB_1040_970c;
      GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_1a),
                      *(HWND16 *)((undefined4 *)local_a + 0x6));
      pt.y = param_2;
      pt.x = (int16_t)param_1;
      BVar5 = PtInRect(pt,(undefined1 *)CONCAT22(unaff_SS,local_1a));
      if (BVar5 != 0x0)
      {
        log_debug_message_v(0x5e98);
        puVar1 = (undefined2 *)((int)*local_a + 0x1c);
        (*(code *)*puVar1)(0x1008,(undefined4 *)local_a,(int)((ulong)local_a >> 0x10),
                           param_2,param_1,param_3);
      }
    }
    else
    {
      if ((uint16_t)param_4 != 0x204) goto LAB_1040_970c;
      GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_1a),
                      *(HWND16 *)(puVar4 + 0x6));
      pt_00.y = param_2;
      pt_00.x = (int16_t)param_1;
      BVar5 = PtInRect(pt_00,(undefined1 *)CONCAT22(unaff_SS,local_1a));
      if (BVar5 != 0x0)
      {
        log_debug_message_v(0x5eab);
        puVar1 = (undefined2 *)((int)*local_a + 0x20);
        (*(code *)*puVar1)(0x1008,(undefined4 *)local_a,(int)((ulong)local_a >> 0x10),
                           param_2,param_1,param_3);
      }
    }
  }
  pvVar6 = NULL;
  uVar8 = 0x0;
LAB_1040_97d2:
  return (void *)CONCAT22(uVar8,(void *)pvVar6);
}



void * __stdcall16far
UI_Complex_Control_dtor_Scalar_Deleting_97da(void *param_1,u16 param_2,byte param_3)
{
  UI_Complex_Control_dtor_Internal_911e(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Zero-fills various state fields within a UI view or control structure.

u32 * __stdcall16far UI_View_Reset_Fields_Logic_9824(u32 *param_1)
{
  u32 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (u32 *)param_1;
  *param_1 = 0x0;
  *(undefined2 *)(puVar1 + 0x1) = 0x0;
  *(undefined4 *)((int)puVar1 + 0x56) = 0x0;
  *(undefined2 *)((int)puVar1 + 0x5a) = 0x0;
  *(undefined2 *)(puVar1 + 0x17) = 0x0;
  *(undefined1 *)((int)puVar1 + 0x6) = 0x0;
  return param_1;
}



// Constructor for the custom 'OPButton' control. Initializes base object, sets class
// name to 'OPButton', loads a default cursor, and registers the window class. Vtable
// 0xA230.

void * __stdcall16far UI_OPButton_ctor_9854(void *param_1)
{
  HCURSOR16 HVar1;
  HGDIOBJ16 HVar2;
  astruct_24 *uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (astruct_24 *)param_1;
  *(char **)param_1 = (char *)s_1_1050_389a;
  uVar3->field2_0x2 = 0x1008;
  *(undefined2 *)param_1 = 0xa230;
  uVar3->field2_0x2 = 0x1040;
  strcpy_optimized((char *)CONCAT22(uVar4,&uVar3->field_0x4),s_OPButton_1050_5ece);
  uVar3->field83_0x54 = 0x3;
  HVar1 = LoadCursor16((void *)0x7f00,0x0);
  uVar3->field85_0x58 = HVar1;
  HVar2 = GetStockObject16(0x4);
  uVar3->field84_0x56 = HVar2;
  UI_OPButton_RegisterClass_98c0(param_1);
  return param_1;
}



// Registers the 'OPButton' Windows class if it hasn't been registered yet. Sets the
// window procedure to 1040:9948.

void __stdcall16far UI_OPButton_RegisterClass_98c0(void *param_1)
{
  BOOL16 BVar1;
  uint16_t uVar2;
  undefined2 unaff_SS;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined4 uStack_16;
  undefined *puStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 uStack_a;
  void *pvStack_6;
  undefined2 uStack_4;
  
  BVar1 = GetClassInfo16((undefined2 *)CONCAT22(unaff_SS,&local_1c),
                         (void *)CONCAT22(param_1._2_2_,(void *)((int)param_1 + 0x4)),
                         (HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  if (BVar1 == 0x0)
  {
    local_1c = *(undefined2 *)((int)param_1 + 0x54);
    uStack_1a = 0x9cde;
    uStack_18 = 0x1040;
    uStack_16 = 0x40000;
    puStack_12 = PTR_DAT_1050_0000_1050_038c;
    uStack_10 = 0x0;
    uStack_e = *(undefined2 *)((int)param_1 + 0x58);
    uStack_c = *(undefined2 *)((int)param_1 + 0x56);
    uStack_a = 0x0;
    uStack_4 = param_1._2_2_;
    pvStack_6 = (void *)((int)param_1 + 0x4);
    uVar2 = RegisterClass16((undefined2 *)CONCAT22(unaff_SS,&local_1c));
    if (uVar2 == 0x0)
    {
      win16_app_exit_wrapper();
    }
  }
  return;
}



// Custom window procedure for 'OPButton' controls. Handles WM_PAINT by rendering a 3D
// bevelled button with centered text. Supports both enabled and grayed-out states.

void __cdecl16far UI_OPButton_WndProc_9948(HWND16 param_1,u32 param_2)
{
  int iVar1;
  HDC16 HVar2;
  int iVar3;
  HDC16 HVar4;
  void *mode;
  HDC16 hdc;
  char *pcVar5;
  uint uVar6;
  HPEN16 obj;
  HPEN16 obj_00;
  HGDIOBJ16 obj_01;
  HGDIOBJ16 HVar7;
  COLORREF hdc_00;
  COLORREF hdc_01;
  undefined *color;
  undefined *puVar8;
  int iVar9;
  void *pvVar10;
  void *unaff_SS;
  undefined2 uVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  HDC16 in_stack_0000ffa2;
  int iStack_58;
  int iStack_56;
  HDC16 HStack_54;
  int iStack_52;
  HDC16 HStack_50;
  int iStack_4e;
  undefined1 local_42 [0x20];
  uint uStack_22;
  uint uStack_20;
  HGDIOBJ16 HStack_1e;
  int iStack_1c;
  int iStack_1a;
  HDC16 HStack_18;
  int iStack_16;
  HDC16 HStack_14;
  int local_12;
  HDC16 HStack_10;
  int iStack_e;
  HDC16 HStack_c;
  int local_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  iStack_6 = 0x1;
  iStack_4 = 0x1;
  local_a = 0x0;
  iStack_8 = 0x0;
  iStack_1c = 0x0;
  HStack_1e = 0x0;
  pvVar10 = (void *)(param_2 >> 0x10);
  iVar9 = (int)param_2;
  uStack_20 = *(byte *)(iVar9 + 0x4) & 0x8;
  uStack_22 = *(byte *)(iVar9 + 0x56) & 0x1;
  mode = (void *)BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_42),param_1);
  hdc = SetMapMode16(0x1,(short)mode);
  pvVar14 = (void *)param_1;
  GetClientRect16((int *)CONCAT22(unaff_SS,&local_12),param_1);
  iVar3 = iStack_e;
  iVar1 = iStack_e + -0x1;
  HVar4 = HStack_c;
  HVar2 = HStack_c - 0x1;
  _iStack_e = CONCAT22(HVar2,iVar1);
  if (uStack_22 != 0x0)
  {
    iStack_1a = (int)_local_12;
    HStack_18 = (HDC16)((ulong)_local_12 >> 0x10);
    _local_12 = CONCAT22(HStack_18 + 0x2,iStack_1a + 0x2);
    _iStack_e = CONCAT22(HVar4 + -0x3,iVar3 + -0x3);
    iStack_16 = iVar1;
    HStack_14 = HVar2;
  }
  if (*(char *)(iVar9 + 0x6) != '\0')
  {
    iStack_1c = 0x1;
    if (*(int *)(iVar9 + 0x5a) != 0x0)
    {
      pvVar14 = mode;
      HStack_1e = SelectObject16(0x1538,*(HGDIOBJ16 *)(iVar9 + 0x5a));
    }
    pcVar5 = (char *)(iVar9 + 0x6);
    pvVar13 = mode;
    uVar6 = strlen_get_length((char *)CONCAT22(pvVar10,pcVar5));
    DrawText16(0x400,(void *)CONCAT22(uVar6,unaff_SS),(int16_t)pcVar5,
               (void *)CONCAT22(pvVar14,pvVar13),in_stack_0000ffa2);
    iStack_8 = (int)((HStack_c - iStack_4) + iStack_8) / 0x2 + HStack_10;
    iStack_4 += iStack_8;
    local_a = ((iStack_e - iStack_6) + local_a) / 0x2 + local_12;
    iStack_6 += local_a;
  }
  obj = CreatePen16((short)u32_1050_5ec2,(short)(u32_1050_5ec2 >> 0x10),0x1);
  obj_00 = CreatePen16((short)u32_1050_5ebe,(short)(u32_1050_5ebe >> 0x10),0x1);
  pvVar14 = mode;
  obj_01 = SelectObject16(0x1538,obj);
  if (uStack_22 != 0x0)
  {
    iStack_4e = 0x0;
    do
    {
      MoveTo16(HStack_14,iStack_1a,(short)mode);
      LineTo16(HStack_14,iStack_16,(short)mode);
      LineTo16(HStack_18,iStack_16,(short)mode);
      LineTo16(HStack_18,iStack_1a,(short)mode);
      LineTo16(HStack_14,iStack_1a,(short)mode);
      HStack_18 += 0x1;
      iStack_1a += 0x1;
      iStack_16 += -0x1;
      HStack_14 -= 0x1;
      iStack_4e += 0x1;
    } while (iStack_4e < 0x1);
  }
  if ((*(byte *)(iVar9 + 0x4) & 0x2) == 0x0)
  {
    HStack_54 = (HDC16)((ulong)_local_12 >> 0x10);
    iStack_52 = (int)_iStack_e;
    iStack_4e = 0x0;
    iStack_56 = local_12;
    HStack_50 = HStack_c;
    do
    {
      SelectObject16(0x1538,obj);
      MoveTo16(HStack_50,iStack_56,(short)mode);
      LineTo16(HStack_50,iStack_52,(short)mode);
      LineTo16(HStack_54,iStack_52,(short)mode);
      iStack_58 = 0x0;
      do
      {
        pvVar14 = mode;
        SelectObject16(0x1538,obj_00);
        LineTo16(HStack_54,iStack_56,(short)mode);
        LineTo16(HStack_50,iStack_56,(short)mode);
        iStack_58 += 0x1;
      } while (iStack_58 < 0x2);
      HStack_54 += 0x1;
      iStack_56 += 0x1;
      iStack_52 += -0x1;
      HStack_50 -= 0x1;
      iStack_4e += 0x1;
    } while (iStack_4e < 0x2);
  }
  else
  {
    MoveTo16(HStack_c,local_12,(short)mode);
    LineTo16(HStack_10,local_12,(short)mode);
    LineTo16(HStack_10,iStack_e + 0x1,(short)mode);
    if (iStack_1c != 0x0)
    {
      iStack_8 += 0x2;
      local_a += 0x2;
      iStack_6 += 0x2;
      iStack_4 += 0x2;
    }
  }
  MoveTo16(0x0,0x0,(short)mode);
  if (iStack_1c != 0x0)
  {
    if ((*(byte *)(iVar9 + 0x4) & 0x4) == 0x0)
    {
      color = (undefined *)u16_1050_5ec8;
      puVar8 = PTR_p_CurrentHeapContext_1050_5ec6;
      if (uStack_20 != 0x0)
      {
        color = PTR_DAT_1050_0000_1050_5ecc;
        puVar8 = (undefined *)u16_1050_5eca;
      }
      hdc_00 = SetTextColor16((HDC16)puVar8,(COLORREF)color);
      puVar8 = color;
      hdc_01 = SetBkColor16(0x0,0x100);
      pcVar5 = (char *)(iVar9 + 0x6);
      pvVar13 = mode;
      uVar6 = strlen_get_length((char *)CONCAT22(pvVar10,pcVar5));
      DrawText16(0x1,(void *)CONCAT22(uVar6,unaff_SS),(int16_t)pcVar5,
                 (void *)CONCAT22(pvVar14,pvVar13),hdc_01);
      SetTextColor16(hdc_00,(COLORREF)color);
      SetBkColor16(hdc_01,(COLORREF)puVar8);
    }
    else
    {
      HVar7 = GetStockObject16(0x1);
      uVar11 = 0x0;
      pvVar12 = NULL;
      pvVar13 = mode;
      uVar6 = strlen_get_length((char *)CONCAT22(pvVar10,(char *)(iVar9 + 0x6)));
      GrayString16(iStack_4 - iStack_8,iStack_6 - local_a,iStack_8,local_a,uVar6,
                   (LPARAM)CONCAT22(uVar11,pvVar10),(void *)CONCAT22(HVar7,pvVar12),
                   (HBRUSH16)pvVar13,(HDC16)pvVar14);
    }
    if (HStack_1e != 0x0)
    {
      SelectObject16(0x1538,HStack_1e);
    }
  }
  SelectObject16(0x1538,obj_01);
  SetMapMode16(hdc,(short)mode);
  DeleteObject16(obj);
  DeleteObject16(obj_00);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_42),param_1);
  return;
}
