/*
 * Source: outpost.c
 * Chunk: 17/117
 * Original lines: 18281-19474
 * Boundaries: top-level declarations/definitions only
 */




// Searches for the standard footer marker in the save file. It reads the file in 1KB
// chunks and looks for a specific character sequence. If found, it validates the marker
// via `FUN_1008_7e4a` and seeks to the position just after it. Returns 1 if found, 0
// otherwise.

int __stdcall16far file_context_find_footer_marker_logic(void)
{
  bool bVar1;
  int32_t iVar2;
  int iVar3;
  long lVar4;
  int in_DX;
  undefined2 unaff_SS;
  bool bVar5;
  HFILE16 *in_stack_00000004;
  undefined2 in_stack_00000006;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  char local_406 [0x400];
  undefined4 uStack_6;
  
  uStack_6 = 0x0;
  bVar1 = false;
  do
  {
    _llseek16(0x0,(int32_t)uStack_6,(HFILE16)((ulong)uStack_6 >> 0x10));
    iVar2 = _hread16(0x400,(char *)CONCAT22(unaff_SS,local_406),
                     *(HFILE16 *)CONCAT22(in_stack_00000006,in_stack_00000004));
    uStack_40c = CONCAT22(in_DX,iVar2);
    for (uStack_410 = 0x0; uStack_410 < uStack_40c; uStack_410 += 0x1)
    {
      if (local_406[(uint)uStack_410] == *(char *)PTR_s_dcbSC_1050_0336_1050_033c)
      {
        if (!bVar1)
        {
          bVar1 = true;
          uStack_6 = CONCAT22(uStack_6._2_2_ + uStack_410._2_2_ +
                              (uint)CARRY2((uint)uStack_6,(uint)uStack_410),
                              (uint)uStack_6 + (uint)uStack_410);
          in_DX = uStack_410._2_2_;
          break;
        }
        bVar1 = false;
        iVar3 = file_context_verify_marker_string_logic();
        if (iVar3 != 0x0)
        {
          lVar4 = uStack_410 + uStack_6 + 0x7;
          _llseek16(0x0,(int32_t)lVar4,(HFILE16)((ulong)lVar4 >> 0x10));
          return 0x1;
        }
      }
    }
    if (!bVar1)
    {
      if (uStack_40c < 0x400)
      {
        return 0x0;
      }
      bVar5 = 0xfb < uStack_6._1_1_;
      uStack_6._0_2_ = CONCAT11(uStack_6._1_1_ + 0x4,(undefined1)uStack_6);
      uStack_6 = CONCAT22(uStack_6._2_2_ + (uint)bVar5,(uint)uStack_6);
    }
  } while( true );
}



int __stdcall16far file_read_check(long size,void *buffer,void *handle_wrapper)
{
  int32_t iVar1;
  int in_DX;
  undefined4 in_stack_0000000c;
  
                // File read with success check - calls _hread16, returns 1 if all bytes
                // read, 0 on failure.
  iVar1 = _hread16((int32_t)in_stack_0000000c,_buffer,*(HFILE16 *)size);
  if ((iVar1 == (int32_t)in_stack_0000000c) && (in_DX == in_stack_0000000c._2_2_))
  {
    return 0x1;
  }
  return 0x0;
}



int __stdcall16far file_write_check(long size,void *buffer,void *handle_wrapper)
{
  uint16_t uVar1;
  int in_DX;
  undefined4 in_stack_0000000c;
  
                // File write with success check - calls _hwrite16, returns 1 if all
                // bytes written, 0 on failure.
  uVar1 = _hwrite16((uint16_t)in_stack_0000000c,_buffer,*(HFILE16 *)size);
  if ((uVar1 == (uint16_t)in_stack_0000000c) && (in_DX == in_stack_0000000c._2_2_))
  {
    return 0x1;
  }
  return 0x0;
}



// Verifies a marker string in the file buffer against a generated template. Returns 1
// if the strings match, 0 otherwise. Used internally by
// `file_context_find_footer_marker_logic`.

int __stdcall16far file_context_verify_marker_string_logic(void)
{
  int iVar1;
  undefined2 unaff_SS;
  char *in_stack_0000000a;
  char local_c [0xa];
  
  sprintf_wrapper(local_c);
  strlen_get_length((char *)CONCAT22(unaff_SS,local_c));
  iVar1 = strncmp_fixed_optimized
                    ((char *)in_stack_0000000a,
                     (char *)((ulong)in_stack_0000000a >> 0x10),(int)local_c);
  if (iVar1 == 0x0)
  {
    return 0x1;
  }
  return 0x0;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1008:380A and then 1008:389A during object destruction.

void * __stdcall16far UI_Event_Handler_scalar_dtor_logic_2(void *this,byte flags)
{
  undefined2 uVar1;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  uVar1 = (undefined2)((ulong)_this >> 0x10);
  *_this = 0x380a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable / Resource
// Initializes UI_Child_Parent_Window vtable to 1008:8042.
// References string literal "SOLChildPar" (1050:0358).

void * __stdcall16far
UI_Child_Parent_Window_ctor(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  HGDIOBJ16 HVar1;
  HCURSOR16 HVar2;
  undefined2 *this;
  void *parent;
  
  this = (undefined2 *)param_1;
  parent = (void *)((ulong)param_1 >> 0x10);
  UI_Base_Window_ctor(this,parent);
  this[0x6f] = param_2;
  *param_1 = 0x8042;
  this[0x1] = 0x1008;
  strcpy_optimized((char *)CONCAT22(parent,(char *)((int)this + 0x5b)),
                   s_SOLChildPar_1050_0358);
  HVar1 = GetStockObject16(0x5);
  this[0x63] = HVar1;
  HVar2 = LoadCursor16((void *)0x7f00,0x0);
  this[0x62] = HVar2;
  this[0x64] = (char *)s_572_bmp_1050_2007 + 0x1;
  *(undefined4 *)(this + 0x56) = 0x44000000;
  this[0x5e] = *(undefined2 *)((int)param_3 + 0x8);
  this[0x65] = this[0x6f];
  UI_Container_Register_Class_Logic(this);
  return parent;
}



// Targeted Scan Finding: Vtable
// Resets vtable sequence during destruction: 1008:380A -> 1008:389A.

void * __stdcall16far UI_Child_Parent_Window_scalar_dtor(void *this,byte flags)
{
  undefined2 uVar1;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  uVar1 = (undefined2)((ulong)_this >> 0x10);
  UI_Control_Sub_dtor_logic((void *)((int)this + 0xd2));
  *_this = 0x380a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Zero-initializes a 6-byte structure.

void * __stdcall16far zero_init_6bytes_logic(void *ptr)
{
  undefined2 in_stack_00000006;
  
  *_ptr = 0x0;
  *(undefined2 *)((int)ptr + 0x4) = 0x0;
  return ptr;
}



// Targeted Scan Finding: Vtable / Resource
// Initializes MicroSpinControl vtable to 1008:87C8 (base 1008:389A).
// References string literal "MicroSpinControl" (1050:0370).

void * __stdcall16far MicroSpinControl_ctor(void *this)
{
  HCURSOR16 HVar1;
  HGDIOBJ16 HVar2;
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x54) = 0x0;
  *(undefined2 *)((int)this + 0x56) = 0x0;
  *(undefined2 *)((int)this + 0x58) = 0x0;
  *_this = 0x87c8;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  strcpy_optimized((char *)CONCAT22(in_stack_00000006,(char *)((int)this + 0x4)),
                   s_MicroSpinControl_1050_0370);
  *(undefined2 *)((int)this + 0x54) = 0x3;
  HVar1 = LoadCursor16((void *)0x7f00,0x0);
  *(HCURSOR16 *)((int)this + 0x58) = HVar1;
  HVar2 = GetStockObject16(0x4);
  *(HGDIOBJ16 *)((int)this + 0x56) = HVar2;
  UI_Control_Register_Class_Logic(this);
  return this;
}



// Targeted Scan Finding: Vtable
// Reverts vtable sequence during destruction: 1008:87C8 -> 1008:389A.

void __stdcall16far MicroSpinControl_dtor_internal_logic(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x87c8;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Targeted Scan Finding: Far Pointer / Resource
// Registers custom window class with procedure at far address 1008:84F2.
// References global instance handle at 1050:038C.

void __stdcall16far UI_Control_Register_Class_Logic(void *control_obj)
{
  BOOL16 BVar1;
  uint16_t uVar2;
  undefined2 unaff_SS;
  undefined2 in_stack_00000006;
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
  
  BVar1 = GetClassInfo16((undefined2 *)CONCAT22(unaff_SS,&local_1c),
                         (void *)CONCAT22(in_stack_00000006,
                                          (void *)((int)control_obj + 0x4)),
                         (HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  if (BVar1 == 0x0)
  {
    local_1c = *(undefined2 *)((int)control_obj + 0x54);
    uStack_1a = 0x84f2;
    uStack_18 = 0x1008;
    uStack_16 = 0x40000;
    puStack_12 = PTR_DAT_1050_0000_1050_038c;
    uStack_10 = 0x0;
    uStack_e = *(undefined2 *)((int)control_obj + 0x58);
    uStack_c = *(undefined2 *)((int)control_obj + 0x56);
    uStack_a = 0x0;
    pvStack_6 = (void *)((int)control_obj + 0x4);
    uVar2 = RegisterClass16((undefined2 *)CONCAT22(unaff_SS,&local_1c));
    if (uVar2 == 0x0)
    {
      win16_app_exit_wrapper();
    }
  }
  return;
}



// Handles WM_NCCREATE and WM_CREATE messages for a custom UI control. It allocates and
// initializes a 6-byte instance data structure, storing it in the window's extra bytes
// (GWL_USERDATA equivalent in Win16).

long __cdecl16far
UI_Control_Instance_Data_MessageHandler
          (HWND16 param_1,int param_2,undefined2 param_3,undefined4 param_4)
{
  void *pvVar1;
  undefined2 *puVar2;
  int16_t iVar3;
  undefined4 in_EAX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  uint in_DX;
  HWND16 hwnd;
  undefined4 uStack_6;
  
  uVar4 = (undefined2)((ulong)in_EAX >> 0x10);
  if (param_2 == 0x81)
  {
    hwnd = 0x0;
    pvVar1 = allocate_memory(0x6);
    in_DX |= (uint)pvVar1;
    if (in_DX == 0x0)
    {
      pvVar1 = NULL;
      in_DX = 0x0;
    }
    else
    {
      pvVar1 = zero_init_6bytes_logic(pvVar1);
    }
    SetWindowLong16((int32_t)pvVar1,in_DX,hwnd);
    uVar4 = extraout_var;
  }
  if (param_2 == 0x1)
  {
    puVar2 = (undefined2 *)GetWindowLong16(0x0,param_1);
    uStack_6 = (undefined2 *)CONCAT22(in_DX,puVar2);
    *uStack_6 = *(undefined2 *)((int)param_4 + 0x8);
    iVar3 = GetDlgCtrlId(0x1538);
    puVar2[0x1] = iVar3;
    uVar4 = extraout_var_00;
  }
  return CONCAT22(uVar4,0x1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global UI color/pen pointers in segment 1050:
// - PTR_PTR_1050_0368
// - DAT_1050_0364.

void __cdecl16far UI_SpinControl_PaintHandler(HWND16 param_1,undefined4 param_2)
{
  HGDIOBJ16 HVar1;
  HGDIOBJ16 HVar2;
  HDC16 hdc;
  undefined2 uVar3;
  undefined2 unaff_SS;
  short local_58;
  short sStack_56;
  uint uStack_54;
  uint uStack_52;
  HBRUSH16 HStack_50;
  HPEN16 HStack_4e;
  HPEN16 HStack_4c;
  HDC16 HStack_4a;
  uint uStack_48;
  uint uStack_46;
  uint uStack_44;
  uint uStack_42;
  uint uStack_40;
  uint uStack_3e;
  undefined1 local_3c [0x20];
  int local_1c;
  int iStack_1a;
  int iStack_18;
  int iStack_16;
  int iStack_14;
  int iStack_12;
  int local_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  uint uStack_4;
  
  HStack_4a = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_3c),param_1);
  uStack_4 = 0x0;
  HStack_4c = CreatePen16((short)_PTR_p_CurrentHeapContext_1050_0368,
                          (short)((ulong)_PTR_p_CurrentHeapContext_1050_0368 >> 0x10),
                          0x1);
  HStack_4e = CreatePen16((short)u32_1050_0364,(short)(u32_1050_0364 >> 0x10),0x1);
  HStack_50 = CreateSolidBrush16((COLORREF)u32_1050_0364);
  GetClientRect16((short *)CONCAT22(unaff_SS,&local_58),param_1);
  uStack_3e = uStack_54;
  uStack_40 = uStack_52;
  uStack_42 = uStack_54 >> 0x1;
  uStack_44 = uStack_52 >> 0x1;
  uStack_46 = uStack_54 >> 0x2;
  uStack_48 = uStack_52 >> 0x2;
  HVar1 = GetStockObject16(0x7);
  HVar1 = SelectObject16(0x1538,HVar1);
  HVar2 = GetStockObject16(0x4);
  HVar2 = SelectObject16(0x1538,HVar2);
  Rectangle16(uStack_52,uStack_54,sStack_56,local_58,HStack_4a);
  MoveTo16(uStack_44,0x0,HStack_4a);
  LineTo16(uStack_44,uStack_3e,HStack_4a);
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  if ((*(byte *)((int)param_2 + 0x4) & 0x4) != 0x0)
  {
    uStack_4 = 0x1;
  }
  local_10 = uStack_42 + uStack_4;
  iStack_e = uStack_48 + uStack_4 + -0x2;
  iStack_c = local_10 + -0x3;
  iStack_a = uStack_48 + uStack_4 + 0x1;
  iStack_8 = local_10 + 0x3;
  iStack_6 = iStack_a;
  SelectObject16(0x1538,HStack_4c);
  if (uStack_4 == 0x0)
  {
    MoveTo16(uStack_44 - 0x2,0x1,HStack_4a);
    LineTo16(0x1,0x1,HStack_4a);
    LineTo16(0x1,uStack_3e - 0x1,HStack_4a);
  }
  uStack_4 = (uint)((*(byte *)((int)param_2 + 0x4) & 0x8) != 0x0);
  local_1c = uStack_42 + uStack_4;
  iStack_16 = (uStack_40 - uStack_48) + uStack_4;
  iStack_1a = iStack_16 + 0x1;
  iStack_18 = local_1c + -0x3;
  iStack_16 += -0x2;
  iStack_14 = local_1c + 0x3;
  iStack_12 = iStack_16;
  if (uStack_4 == 0x0)
  {
    MoveTo16(uStack_52 - 0x2,0x1,HStack_4a);
    hdc = uStack_44 + 0x1;
    LineTo16(hdc,0x1,HStack_4a);
    LineTo16(hdc,uStack_3e - 0x1,HStack_4a);
  }
  SelectObject16(0x1538,HStack_4e);
  SelectObject16(0x1538,HStack_50);
  Polygon16(0x1538,(void *)((int)(undefined **)&p_CurrentHeapContext + 0x1),
            (short)&local_10);
  Polygon16(0x1538,(void *)((int)(undefined **)&p_CurrentHeapContext + 0x1),
            (short)&local_1c);
  SelectObject16(0x1538,HVar2);
  SelectObject16(0x1538,HVar1);
  DeleteObject16(HStack_4c);
  DeleteObject16(HStack_4e);
  DeleteObject16(HStack_50);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_3c),param_1);
  return;
}



// Sends a WM_VSCROLL message from the spin control to its target window based on the
// current button state (increment vs decrement). It translates internal state flags
// into standard scroll codes (SB_LINEUP/SB_LINEDOWN).

void __cdecl16far
UI_SpinControl_SendScrollMessage(undefined2 param_1,undefined2 *param_2)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  ushort w_param;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  puVar1 = (undefined2 *)param_2;
  if ((*(byte *)(puVar1 + 0x2) & 0x4) == 0x0)
  {
    if ((*(byte *)(puVar1 + 0x2) & 0x8) == 0x0)
    {
      return;
    }
    w_param = 0x1;
  }
  else
  {
    w_param = 0x0;
  }
  SendMessage16(puVar1[0x1],0x0,w_param,CONCAT22(w_param,*param_2));
  return;
}



// WARNING: Variable defined which should be unmapped: local_1e

LRESULT __stdcall16far
UI_SpinControl_WindowProc_1008_84f4
          (uint16_t param_1,uint param_2,WPARAM16 param_3,u32 param_4)
{
  int iVar1;
  POINT16 pt;
  char cVar2;
  void *ptr;
  BOOL16 BVar3;
  void *pvVar4;
  undefined2 in_DX;
  undefined2 unaff_SS;
  LRESULT pvVar5;
  HWND16 hwnd;
  long lStack_20;
  u16 local_1e;
  u16 local_1c;
  u16 local_1a;
  u16 local_18;
  u32 local_16;
  u32 local_12;
  u16 local_e;
  u16 local_c;
  undefined1 local_a [0x6];
  u16 local_4;
  
  hwnd = 0x1050;
  ptr = (void *)GetWindowLong16(0x0,param_4._2_2_);
  local_16 = CONCAT22(in_DX,ptr);
  if ((uint)param_4 == 0x1f)
  {
    *(undefined2 *)((int)ptr + 0x4) = 0x0;
    KillTimer16(0xfa6,param_4._2_2_);
    KillTimer16(0xfa7,param_4._2_2_);
    ReleaseCapture16();
  }
  else if ((uint)param_4 < 0x20)
  {
    if ((uint)param_4 != 0x14)
    {
      if (0x14 < (uint)param_4) goto LAB_1008_8771;
      cVar2 = (char)param_4;
      if (cVar2 == '\x01')
      {
LAB_1008_8560:
        pvVar4 = (void *)UI_Control_Instance_Data_MessageHandler
                                   (param_4._2_2_,(uint)param_4,param_3,param_1,param_2)
        ;
        return (LRESULT)CONCAT22(in_DX,(void *)pvVar4);
      }
      if (cVar2 == '\x02')
      {
        free_if_not_null(ptr);
      }
      else if (cVar2 != '\f')
      {
        if (cVar2 != '\x0f') goto LAB_1008_8771;
        UI_SpinControl_PaintHandler(param_4._2_2_,ptr,in_DX);
      }
    }
  }
  else if ((uint)param_4 == 0x200)
  {
    if ((*(byte *)((int)ptr + 0x4) & 0x1) != 0x0)
    {
      GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_a),param_4._2_2_);
      iVar1 = *(int *)((int)ptr + 0x4);
      *(byte *)((int)ptr + 0x4) = *(byte *)((int)ptr + 0x4) & 0xf3;
      pt.y = param_2;
      pt.x = param_1;
      BVar3 = PtInRect(pt,(undefined1 *)CONCAT22(unaff_SS,local_a));
      if (BVar3 == 0x0)
      {
        *(byte *)((int)ptr + 0x4) = *(byte *)((int)ptr + 0x4) | 0x2;
      }
      else
      {
        if ((int)param_2 < (int)local_4 >> 0x1)
        {
          *(byte *)((int)ptr + 0x4) = *(byte *)((int)ptr + 0x4) | 0x4;
        }
        else
        {
          *(byte *)((int)ptr + 0x4) = *(byte *)((int)ptr + 0x4) | 0x8;
        }
        *(byte *)((int)ptr + 0x4) = *(byte *)((int)ptr + 0x4) & 0xfd;
      }
      if (*(int *)((int)ptr + 0x4) != iVar1)
      {
        InvalidateRect16(0x1,(void *)((ulong)param_4._2_2_ << 0x10),hwnd);
        UpdateWindow16(param_4._2_2_);
      }
    }
  }
  else if ((uint)param_4 < 0x201)
  {
    if ((uint)param_4 == 0x81) goto LAB_1008_8560;
    if ((uint)param_4 != 0x113)
    {
LAB_1008_8771:
      pvVar5 = DefWindowProc16((LPARAM)CONCAT22(param_2,param_1),param_3,(uint)param_4,
                               param_4._2_2_);
      return pvVar5;
    }
    if (param_3 == 0xfa6)
    {
      KillTimer16(0xfa6,param_4._2_2_);
      SetTimer16(NULL,0x1,0xfa7,param_4._2_2_);
    }
    if ((*(byte *)((int)ptr + 0x4) & 0x2) == 0x0)
    {
      UI_SpinControl_SendScrollMessage(param_4._2_2_,ptr,in_DX);
    }
  }
  else
  {
    if ((uint)param_4 != 0x201)
    {
      if ((uint)param_4 == 0x202)
      {
        KillTimer16(0xfa6,param_4._2_2_);
        KillTimer16(0xfa7,param_4._2_2_);
        ReleaseCapture16();
        if (((*(uint *)((int)ptr + 0x4) & 0x1) != 0x0) &&
           ((*(uint *)((int)ptr + 0x4) & 0xfffd) != 0x0))
        {
          *(byte *)((int)ptr + 0x4) = *(byte *)((int)ptr + 0x4) & 0xf2;
          InvalidateRect16(0x1,(void *)((ulong)param_4._2_2_ << 0x10),0x1050);
          UpdateWindow16(param_4._2_2_);
        }
        lStack_20 = CONCAT22(local_1e,*(undefined2 *)local_16);
        SendMessage16(*(HWND16 *)((int)ptr + 0x2),0x0,0xf9,lStack_20);
        return NULL;
      }
      if ((uint)param_4 != 0x203) goto LAB_1008_8771;
    }
    *(byte *)((int)ptr + 0x4) = *(byte *)((int)ptr + 0x4) | 0x1;
    GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_a),param_4._2_2_);
    if (param_2 < (uint)((int)local_4 >> 0x1))
    {
      *(byte *)((int)ptr + 0x4) = *(byte *)((int)ptr + 0x4) | 0x4;
    }
    else
    {
      *(byte *)((int)ptr + 0x4) = *(byte *)((int)ptr + 0x4) | 0x8;
    }
    UI_SpinControl_SendScrollMessage(param_4._2_2_,ptr,in_DX);
    SetTimer16(NULL,0x12c,0xfa6,param_4._2_2_);
    InvalidateRect16(0x1,(void *)((ulong)param_4._2_2_ << 0x10),0x1050);
    UpdateWindow16(param_4._2_2_);
    SetCapture16(param_4._2_2_);
  }
  return NULL;
}



// Scalar deleting destructor for the MicroSpinControl class.

void * __stdcall16far MicroSpinControl_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  MicroSpinControl_dtor_internal_logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes Gameplay_Object vtable to 1008:8E9A.
// References global resource object in segment 1050 (offset 0382).
// Performs multiple vector initializations (zero_init_struct_6bytes).

void * __stdcall16far
Gameplay_Object_ctor
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          undefined4 param_5,undefined4 param_6)
{
  long lVar1;
  void *pvVar2;
  undefined2 in_DX;
  uint type_index;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 unaff_SI;
  void *w1;
  undefined2 uVar6;
  int *unaff_SS;
  void *pvVar7;
  undefined4 uStack_30;
  undefined4 local_24;
  undefined2 uStack_20;
  void *pvStack_1e;
  undefined2 uStack_1c;
  undefined4 uStack_1a;
  undefined4 uStack_12;
  int iStack_e;
  undefined2 uStack_c;
  int iStack_a;
  undefined2 uStack_8;
  void *pvStack_6;
  undefined2 uStack_4;
  
  w1 = (void *)((ulong)param_1 >> 0x10);
  puVar4 = (undefined2 *)param_1;
  *param_1 = (char *)s_1_1050_389a;
  puVar4[0x1] = 0x1008;
  *(undefined4 *)(puVar4 + 0x2) = param_5;
  *(undefined4 *)(puVar4 + 0x4) = 0x0;
  puVar4[0x6] = param_3;
  puVar4[0x7] = param_2;
  puVar4[0x8] = 0x0;
  puVar4[0x9] = 0x0;
  zero_init_struct_6bytes(puVar4 + 0xe);
  zero_init_struct_6bytes(puVar4 + 0x11);
  zero_init_struct_6bytes(puVar4 + 0x14);
  puVar4[0x17] = param_4;
  puVar4[0x18] = 0xffff;
  *(undefined4 *)(puVar4 + 0x1d) = 0x0;
  puVar4[0x1f] = 0x1;
  puVar4[0x20] = 0x1;
  *(undefined4 *)(puVar4 + 0x21) = param_6;
  *param_1 = 0x8e9a;
  puVar4[0x1] = 0x1008;
  if (_PTR_DAT_1050_0000_1050_0382 == 0x0)
  {
    _PTR_DAT_1050_0000_1050_0382 =
         Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2e);
    in_DX = (undefined2)((ulong)_PTR_DAT_1050_0000_1050_0382 >> 0x10);
  }
  pvStack_6 = get_with_lazy_init((void *)*(void **)(puVar4 + 0x2));
  puVar4[0x9] = 0x2f - *(int *)((int)pvStack_6 + 0x8);
  uVar6 = (undefined2)((ulong)_PTR_DAT_1050_0000_1050_0382 >> 0x10);
  iVar5 = (int)_PTR_DAT_1050_0000_1050_0382;
  uStack_8 = *(undefined2 *)(iVar5 + 0xa);
  iStack_a = *(int *)(iVar5 + 0xc);
  uStack_c = *(undefined2 *)(iVar5 + 0xe);
  iStack_e = *(int *)(iVar5 + 0x10);
  lVar1 = (long)(int)(puVar4[0x6] + puVar4[0x7]) * (long)iStack_e;
  type_index = (uint)((ulong)lVar1 >> 0x10);
  uStack_4 = in_DX;
  pack_3words_reverse(puVar4 + 0xe,(int)w1,0x0,(int)lVar1 + puVar4[0x9] + iStack_a);
  puVar4[0xa] = puVar4[0xe] + 0x20;
  puVar4[0xb] = *(int *)((int)pvStack_6 + 0x8) + puVar4[0xf] + -0x25;
  puVar4[0xc] = puVar4[0xa] + 0x32;
  puVar4[0xd] = puVar4[0xb] + 0x19;
  pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x6));
  uStack_1a = (void *)CONCAT22(type_index,pvVar2);
  uVar3 = type_index | (uint)pvVar2;
  if (uVar3 == 0x0)
  {
    *(undefined4 *)(puVar4 + 0x4) = 0x0;
  }
  else
  {
    pvVar2 = Gameplay_SubObject_init_logic(pvVar2,type_index);
    puVar4[0x4] = pvVar2;
    puVar4[0x5] = uVar3;
  }
  iVar5 = Gameplay_SubObject_Check_Field1_NonZero_Logic
                    ((void *)*(void **)(puVar4 + 0x4));
  if (iVar5 == 0x0)
  {
    uStack_1a = *(void **)(puVar4 + 0x4);
    uStack_12 = uStack_1a;
    free_if_not_null((void *)uStack_1a);
    *(undefined4 *)(puVar4 + 0x4) = 0x0;
  }
  else
  {
    pvVar7 = (void *)UI_Report_Grid_Get_Item_Bitmap_Logic
                               (_PTR_DAT_1050_0000_1050_0382,
                                (int *)*(int **)(puVar4 + 0x4));
    uVar6 = (undefined2)((ulong)pvVar7 >> 0x10);
    uStack_12._0_2_ = (void *)pvVar7;
    uStack_12._2_2_ = uVar6;
    Gameplay_SubObject_refresh_from_table_logic((void *)*(void **)(puVar4 + 0x4));
    pvStack_1e = get_with_lazy_init((void *)uStack_12);
    uStack_1c = uVar6;
    UI_Pack_Words_from_Table_3E8E_Logic
              (_PTR_DAT_1050_0000_1050_0382,(int)(puVar4 + 0x14));
    local_24 = *(undefined4 *)(puVar4 + 0xe);
    uStack_20 = puVar4[0x10];
    add_3int_vectors((int *)&local_24,unaff_SS);
    uStack_30 = (int *)CONCAT22(w1,puVar4 + 0x19);
    unpack_word_pair(&local_24,unaff_SS,puVar4 + 0x1a);
    puVar4[0x1b] = *(int *)((int)pvStack_1e + 0x4) + *uStack_30;
    puVar4[0x1c] = *(int *)((int)pvStack_1e + 0x8) + puVar4[0x1a];
    iVar5 = random_int_range(0x2,0x5);
    puVar4[0x1f] = iVar5;
  }
  return w1;
}



// Targeted Scan Finding: Vtable
// Reverts Gameplay_Object vtable sequence during destruction: 1008:8E9A -> 1008:389A.
// Performs indirect call through [this + 4] during cleanup.

void __stdcall16far Gameplay_Object_dtor(void *this)
{
  void *this_00;
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0x8e9a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)*(undefined4 *)((int)this + 0x4) + 0x1c) != 0x0)
  {
    if (*(int *)((int)this + 0x6) != 0x0 ||
        (undefined4 *)*(int *)((int)this + 0x4) != NULL)
    {
      puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x4);
      (*(code *)*puVar1)();
    }
  }
  this_00 = (void *)*(undefined2 *)((int)this + 0x3a);
  if (*(int *)((int)this + 0x3c) != 0x0 || this_00 != NULL)
  {
    Sprite_Object_free_internal_buffer(this_00);
    free_if_not_null(this_00);
  }
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References animation resource via segment 1050 (offset 0382).
// Performs transparent blit of animation frames.

long __stdcall16far Gameplay_Object_Update_Animation_Logic(void *this)
{
  int iVar1;
  int *in_stack_00000006;
  int local_a [0x2];
  void *pvStack_6;
  
  if (*(long *)((int)this + 0x8) != 0x0)
  {
    iVar1 = *(int *)((int)this + 0x40);
    *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 0x1;
    if (iVar1 % *(int *)((int)this + 0x3e) == 0x0)
    {
      *(undefined2 *)((int)this + 0x40) = 0x1;
      pvStack_6 = (void *)UI_Report_Grid_Get_Item_Bitmap_Logic
                                    (_PTR_DAT_1050_0000_1050_0382,
                                     (int *)(int *)*(undefined4 *)((int)this + 0x8));
      unpack_word_pair((void *)((int)this + 0x28),in_stack_00000006,local_a);
      Gameplay_Object_Manage_Background_Cache_Logic
                (this,in_stack_00000006,(void *)pvStack_6);
      Bitmap_Object_Blit_Transparent_Logic
                ((void *)(void *)*(undefined4 *)((int)this + 0x4),
                 (void *)((ulong)*(undefined4 *)((int)this + 0x4) >> 0x10),
                 (void *)((int)this + 0x28));
      return CONCAT22(in_stack_00000006,(int)this + 0x32);
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References graphical resource via segment 1050 (offset 0382).

long __stdcall16far Gameplay_Object_Refresh_Graphic_Logic(void *this)
{
  int *in_stack_00000006;
  int local_a [0x2];
  void *pvStack_6;
  
  if (*(long *)((int)this + 0x8) == 0x0)
  {
    return 0x0;
  }
  pvStack_6 = (void *)UI_Report_Grid_Get_Item_Bitmap_Logic
                                (_PTR_DAT_1050_0000_1050_0382,
                                 (int *)(int *)*(undefined4 *)((int)this + 0x8));
  unpack_word_pair((void *)((int)this + 0x28),in_stack_00000006,local_a);
  Gameplay_Object_Manage_Background_Cache_Logic
            (this,in_stack_00000006,(void *)pvStack_6);
  Bitmap_Object_Blit_Transparent_Logic
            ((void *)(void *)*(undefined4 *)((int)this + 0x4),
             (void *)((ulong)*(undefined4 *)((int)this + 0x4) >> 0x10),
             (void *)((int)this + 0x28));
  return CONCAT22(in_stack_00000006,(int)this + 0x32);
}



// Draws the gameplay object onto a destination bitmap. If the background buffer is not
// yet initialized, it captures the underlying pixels into a sprite object before
// performing a transparent blit of the object's own graphic. This allows for clean
// restoration of the background during animation.

void * __stdcall16far Gameplay_Object_Draw_Logic(void *this,void *dest_bitmap)
{
  void *pvVar1;
  void *pvVar2;
  int in_DX;
  int y;
  void *in_stack_00000008;
  undefined2 in_stack_0000fff2;
  
  pvVar1 = get_with_lazy_init((void *)(void *)*(undefined4 *)((int)this + 0x4));
  pvVar2 = NULL;
  if ((*(int *)((int)this + 0xc) == 0x0) || (*(int *)((int)this + 0xe) == 0x0))
  {
    y = in_DX;
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff2,0x14));
    if (y == 0x0 && pvVar2 == NULL)
    {
      pvVar2 = NULL;
    }
    else
    {
      pvVar2 = Sprite_Object_init_logic
                         (pvVar2,y,(int)*(undefined4 *)((int)pvVar1 + 0x8),
                          (void *)((ulong)*(undefined4 *)((int)pvVar1 + 0x8) >> 0x10),
                          (int)*(undefined4 *)((int)pvVar1 + 0x4));
    }
    Sprite_Object_Capture_From_Bitmap(pvVar2);
  }
  Bitmap_Object_Blit_Transparent_Logic
            ((void *)in_stack_00000008,(void *)((ulong)in_stack_00000008 >> 0x10),
             (void *)((int)this + 0x1c));
  return pvVar2;
}



// Draws the gameplay object onto a destination bitmap at an offset from the provided
// coordinates. It captures the background into a new sprite object before blitting,
// allowing for later restoration. This is typically used for transient or offset-based
// rendering within the simulation.

void * __stdcall16far
Gameplay_Object_Draw_With_Offset_Logic(void *this,void *pos,void *dest_bitmap)
{
  void *pvVar1;
  uint in_DX;
  uint uVar2;
  int unaff_SS;
  int *in_stack_0000000a;
  void *in_stack_0000000c;
  undefined2 in_stack_0000ffec;
  undefined1 local_10 [0x6];
  undefined4 uStack_a;
  void *pvStack_6;
  uint uStack_4;
  
  pvStack_6 = get_with_lazy_init((void *)(void *)*(undefined4 *)((int)this + 0x4));
  uStack_a = NULL;
  uStack_4 = in_DX;
  pack_3words_alt(local_10,unaff_SS,0x0,*(int *)((int)this + 0x12));
  add_3int_vectors(dest_bitmap,in_stack_0000000a);
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffec,0x14));
  uVar2 = in_DX | (uint)pvVar1;
  if (uVar2 == 0x0)
  {
    pvVar1 = NULL;
    uVar2 = 0x0;
  }
  else
  {
    pvVar1 = Sprite_Object_init_logic
                       (pvVar1,in_DX,(int)*(undefined4 *)((int)pvStack_6 + 0x8),
                        (void *)((ulong)*(undefined4 *)((int)pvStack_6 + 0x8) >> 0x10),
                        (int)*(undefined4 *)((int)pvStack_6 + 0x4));
  }
  uStack_a = (void *)CONCAT22(uVar2,pvVar1);
  Sprite_Object_Capture_From_Bitmap(pvVar1);
  Bitmap_Object_Blit_Transparent_Logic
            ((void *)in_stack_0000000c,(void *)((ulong)in_stack_0000000c >> 0x10),
             dest_bitmap);
  return (void *)uStack_a;
}



// Manages the background pixel cache for specific gameplay object types. Based on the
// object's type ID, it either captures the current background into a sprite object or
// restores the previously captured background. This mechanism is used to facilitate
// flicker-free animation for certain simulated entities.

void __stdcall16far
Gameplay_Object_Manage_Background_Cache_Logic(void *this,void *bitmap_ptr,void *arg3)
{
  char cVar1;
  void *pvVar2;
  void *this_00;
  uint in_DX;
  uint uVar3;
  uint uVar4;
  undefined2 in_stack_0000fff6;
  
  uVar3 = *(uint *)((int)this + 0x2e);
  if ((int)uVar3 < 0x28)
  {
    if (((int)uVar3 < 0x25) && (uVar3 != 0x23))
    {
      if (0x23 < uVar3)
      {
        return;
      }
      cVar1 = (char)uVar3;
      if (((cVar1 != '\v') && (cVar1 != '\x0f')) && (cVar1 != '!'))
      {
        return;
      }
    }
  }
  else if ((int)uVar3 < 0x46)
  {
    if ((int)uVar3 < 0x43)
    {
      if ((int)uVar3 < 0x33)
      {
        return;
      }
      if ((uVar3 != 0x34 && 0x0 < (int)(uVar3 - 0x33)) && (uVar3 != 0x37))
      {
        return;
      }
    }
  }
  else if (uVar3 != 0x49)
  {
    if ((int)(uVar3 - 0x49) < 0x2a)
    {
      return;
    }
    if (0x5 < (int)(uVar3 - 0x73))
    {
      return;
    }
  }
  if (*(long *)((int)this + 0x3a) == 0x0)
  {
    pvVar2 = get_with_lazy_init(arg3);
    uVar3 = in_DX;
    this_00 = allocate_memory(CONCAT22(in_stack_0000fff6,0x14));
    uVar4 = uVar3 | (uint)this_00;
    if (uVar4 == 0x0)
    {
      *(undefined4 *)((int)this + 0x3a) = 0x0;
    }
    else
    {
      pvVar2 = Sprite_Object_init_logic
                         (this_00,uVar3,(int)*(undefined4 *)((int)pvVar2 + 0x8),
                          (void *)((ulong)*(undefined4 *)((int)pvVar2 + 0x8) >> 0x10),
                          (int)*(undefined4 *)((int)pvVar2 + 0x4));
      *(undefined2 *)((int)this + 0x3a) = pvVar2;
      *(uint *)((int)this + 0x3c) = uVar4;
    }
    Sprite_Object_Capture_From_Bitmap((void *)(void *)*(undefined4 *)((int)this + 0x3a))
    ;
    return;
  }
  Sprite_Object_Restore_To_Bitmap((void *)(void *)*(undefined4 *)((int)this + 0x3a));
  return;
}



void * __stdcall16far
Gameplay_Object_dtor_Scalar_Deleting_8e74(void *param_1,u16 param_2,byte param_3)
{
  Gameplay_Object_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes Data_History_Object vtable to 1008:9170 (base 1008:389A).
// Allocates internal 4-byte element buffer.

void * __stdcall16far
Data_History_Object_ctor(void *this,long initial_count,long max_count)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x4) = 0x0;
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(long *)((int)this + 0xe) = max_count;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(long *)((int)this + 0x16) = initial_count;
  *(undefined2 *)((int)this + 0x1a) = 0x1;
  *_this = 0x9170;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(ulong *)((int)this + 0xe) < 0x7)
  {
    *(undefined4 *)((int)this + 0xe) = 0x6;
  }
  Data_History_Object_Allocate_Buffer_Logic(this);
  *(undefined4 *)*(undefined4 *)((int)this + 0x6) = 0x0;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets Data_History_Object vtable to 1008:9170 and then 1008:389A during destruction.
// Iteratively invokes virtual destructors for contained objects in the buffer.

void __stdcall16far Data_History_Object_dtor(void *this)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 in_stack_00000006;
  ulong uStack_6;
  
  *_this = 0x9170;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0x1a) != 0x0)
  {
    uStack_6 = 0x0;
    while( true )
    {
      if (*(ulong *)((int)this + 0xa) <= uStack_6) break;
      iVar4 = (int)uStack_6 * 0x4;
      uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x6) >> 0x10);
      iVar3 = (int)*(undefined4 *)((int)this + 0x6);
      puVar1 = (undefined4 *)*(int *)(iVar3 + iVar4);
      iVar3 = *(int *)(iVar3 + iVar4 + 0x2);
      if (iVar3 != 0x0 || puVar1 != NULL)
      {
        puVar2 = (undefined2 *)(undefined2 *)*puVar1;
        (*(code *)*puVar2)();
      }
      uStack_6 += 0x1;
    }
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x6));
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Appends a new 32-bit data point to the end of the history buffer. It automatically
// handles buffer expansion if necessary.

void __stdcall16far Data_History_Object_Append_Point(void *this,long value)
{
  undefined2 in_stack_00000006;
  
  Data_History_Object_Set_Point_At_Index(this,value,*(long *)((int)this + 0xa));
  return;
}
