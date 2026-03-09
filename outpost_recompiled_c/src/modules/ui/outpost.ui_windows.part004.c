/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 4/54
 * Original lines (combined): 16086-19942
 * Boundaries: top-level declarations/definitions only
 */

/* Win16 accelerator table handle, set by UI_Lab_View_ctor_init_logic (1050:0398) */
HACCEL16 g_hAccel;


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_DanBrotherton_Window vtable to 1008:6378.
// References string literal "DanBrotherton" (1050:0302).
// References global resource manager in segment 1050 (offset 0ed0) to retrieve theme
// resource 0x48.

void * __stdcall16far
UI_DanBrotherton_Window_ctor(void *this,int arg2,int arg3,void *parent)
{
  HGDIOBJ16 HVar1;
  HCURSOR16 HVar2;
  undefined2 uVar3;
  long lVar4;
  undefined4 in_stack_0000000c;
  
  UI_Base_Window_ctor(this,(void *)arg2);
  *(int *)((int)this + 0xde) = arg3;
  *(undefined2 *)((int)this + 0xe0) = 0x0;
  *_this = 0x6378;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  strcpy_optimized((char *)CONCAT22(arg2,(char *)((int)this + 0x5b)),
                   s_DanBrotherton_1050_0302);
  HVar1 = GetStockObject16(0x4);
  *(HGDIOBJ16 *)((int)this + 0xc6) = HVar1;
  HVar2 = LoadCursor16((void *)0x7f00,0x0);
  *(HCURSOR16 *)((int)this + 0xc4) = HVar2;
  *(undefined2 *)((int)this + 0xc8) = (char *)s_572_bmp_1050_2007 + 0x4;
  *(undefined4 *)((int)this + 0xac) = 0x45000000;
  *(undefined2 *)((int)this + 0xbc) = *(undefined2 *)((int)in_stack_0000000c + 0x8);
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
  *(undefined2 *)((int)this + 0xb4) = 0x0;
  *(undefined2 *)((int)this + 0xb6) = 0x0;
  *(undefined2 *)((int)this + 0xb8) = *(undefined2 *)((int)lVar4 + 0xa);
  *(undefined2 *)((int)this + 0xba) = *(undefined2 *)((int)lVar4 + 0xc);
  *(undefined2 *)((int)this + 0xca) = parent;
  UI_Container_Register_Class_Logic(this);
  return this;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [this + 0xd2] at offset 0x14, likely a child tracker
// cleanup method.

void __stdcall16far UI_Window_Destroy_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)((int)this + 0xd2) + 0x14);
  (*(code *)*puVar1)();
  DestroyWindow16(*(HWND16 *)((int)this + 0x8));
  *(undefined2 *)((int)this + 0x8) = 0x0;
  return;
}



void __stdcall16far UI_Window_OnPaint_Fill_Background(u32 param_1)
{
  int iVar1;
  undefined2 uVar2;
  void *unaff_SS;
  HDC16 in_stack_0000ffc8;
  undefined1 local_2e [0x8];
  u16 local_26;
  u16 local_24;
  undefined1 local_22 [0x20];
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  iVar1 = (int)param_1;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)(iVar1 + 0x8));
  local_26 = CreateSolidBrush16(0x70b);
  GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_2e),*(HWND16 *)(iVar1 + 0x8));
  FillRect16(local_26,(void *)CONCAT22(local_24,unaff_SS),in_stack_0000ffc8);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar1 + 0x8));
  DeleteObject16(local_26);
  return;
}



u16 * __stdcall16far
UI_Window_With_Control_dtor_Scalar_Deleting(u16 *param_1,byte param_2)
{
  u16 *ptr;
  undefined2 uVar1;
  
  ptr = (u16 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (u16)(char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes child tracker at offset 0xd2 via construct_object_with_vtable (sets
// 1008:5BC4).
// Sets main window vtable to 1008:6BFC.

void * __stdcall16far UI_Base_Window_ctor(void *this,void *parent)
{
  UI_Element_ctor(this,parent);
  *(undefined2 *)((int)this + 0xcc) = 0x0;
  *(undefined4 *)((int)this + 0xce) = 0x0;
  construct_object_with_vtable((astruct_491 *)((int)this + 0xd2),(u16)parent);
  *_this = 0x6bfc;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0xdc) = 0x0;
  return this;
}



// Updates the window's screen position or dimensions and triggers a refresh/update
// cycle for all registered child components.

int __stdcall16far UI_Window_Set_Position_and_Refresh_Children(void *this,int show_cmd)
{
  int iVar1;
  
  iVar1 = UI_Element_ShowWindow_Wrapper(this,show_cmd);
  UI_Window_Refresh_All_Child_Handlers(this);
  return iVar1;
}



// Targeted Scan Finding: Vtable
// Performs multiple indirect calls through child vtables at offsets 0x10
// (Activation/Deactivation) and 0xC (Refresh).

void __stdcall16far UI_Window_Set_Active_Child_Logic(void *this,void *child,int flags)
{
  undefined2 *puVar1;
  undefined2 in_stack_0000000a;
  int in_stack_0000000e;
  
  if (in_stack_0000000e == 0x0)
  {
    if (*(long *)((int)this + 0xce) != CONCAT22(in_stack_0000000a,flags))
    {
      if (*(long *)((int)this + 0xce) != 0x0)
      {
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xce) + 0x10);
        (*(code *)*puVar1)();
      }
      *(long *)((int)this + 0xce) = CONCAT22(in_stack_0000000a,flags);
      puVar1 = (undefined2 *)((int)*(undefined4 *)flags + 0x10);
      (*(code *)*puVar1)();
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xce) + 0xc);
      (*(code *)*puVar1)();
      return;
    }
  }
  else
  {
    UI_Call_Virtual_Refresh_maybe(this);
  }
  return;
}



// Targeted Scan Finding: Vtable
// Initializes a child event tracker with vtable 1008:6C8C (base 1008:389A).
// Performs an indirect call through [param_1 + 0xd2] at offset 4, likely adding the
// tracker to a managed list.

void __stdcall16far
UI_Window_Register_Child_Event_Handler
          (undefined4 param_1,int param_2,undefined4 param_3)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int reg_dx;
  undefined2 in_stack_0000ffe0;
  undefined4 uStack_a;
  undefined2 *puStack_6;
  
  puVar2 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xa));
  uStack_a = (undefined2 *)CONCAT22(reg_dx,puVar2);
  if (reg_dx == 0x0 && puVar2 == NULL)
  {
    puStack_6 = NULL;
  }
  else
  {
    if (param_2 == 0x0)
    {
      param_2 = *(int *)((int)param_1 + 0xcc);
    }
    *uStack_a = (char *)s_1_1050_389a;
    puVar2[0x1] = 0x1008;
    *(undefined4 *)(puVar2 + 0x2) = param_3;
    puVar2[0x4] = param_2;
    *uStack_a = 0x6c8c;
    puVar2[0x1] = 0x1008;
    puStack_6 = uStack_a;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)((int)param_1 + 0xd2) + 0x4);
  (*(code *)*puVar1)(0x1000,(undefined4 *)((int)param_1 + 0xd2),param_1._2_2_,
                     (undefined2 *)puStack_6,(int)((ulong)puStack_6 >> 0x10));
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect calls through vtable offset 0xC of all tracked child objects in a
// loop.

void __stdcall16far UI_Window_Refresh_All_Child_Handlers(void *this)
{
  undefined2 *puVar1;
  int iVar2;
  long lVar3;
  undefined2 in_stack_00000006;
  undefined1 local_a [0x8];
  
  init_8byte_pair_with_long_and_zero
            (local_a,CONCAT22(in_stack_00000006,(int)this + 0xd2));
  while( true )
  {
    lVar3 = get_next_list_item(local_a);
    iVar2 = (int)((ulong)lVar3 >> 0x10);
    if (iVar2 == 0x0 && (int)lVar3 == 0x0) break;
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)lVar3 + 0x4) + 0xc)
    ;
    (*(code *)*puVar1)();
  }
  return;
}



// Targeted Scan Finding: Vtable
// Performs multiple indirect calls through vtable offsets:
// - [this + 0xd2] offset 0xC (Refresh)
// - [uStack_6 + 4] offset 0x10 (Activation)
// Manages window focus and sub-object activation.

void __stdcall16far
UI_Window_Handle_Child_Command_and_Switch_Focus
          (void *this,int command_id,int arg3,int flags)
{
  undefined2 *puVar1;
  int iVar2;
  long lVar3;
  int in_stack_0000000c;
  undefined1 local_e [0x4];
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  if (in_stack_0000000c == 0x2)
  {
    init_8byte_pair_with_long_and_zero(local_e,CONCAT22(command_id,(int)this + 0xd2));
    do
    {
      uStack_6 = get_next_list_item(local_e);
      iVar2 = (int)((ulong)uStack_6 >> 0x10);
      if (iVar2 == 0x0 && (int)uStack_6 == 0x0) break;
    } while (*(int *)((int)uStack_6 + 0x8) != arg3);
    if (uStack_6 != 0x0)
    {
      puVar1 = (undefined2 *)((int)*(undefined4 *)((int)this + 0xd2) + 0xc);
      (*(code *)*puVar1)();
      uStack_a = 0x0;
      lVar3 = get_next_list_item(local_e);
      uStack_6._2_2_ = (int)((ulong)lVar3 >> 0x10);
      uStack_6._0_2_ = (int)lVar3;
      if (uStack_6._2_2_ != 0x0 || (int)uStack_6 != 0x0)
      {
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)uStack_6 + 0x4) + 0x10);
        (*(code *)*puVar1)();
        *(undefined4 *)((int)this + 0xce) = *(undefined4 *)((int)uStack_6 + 0x4);
        return;
      }
      *(undefined4 *)((int)this + 0xce) = 0x0;
    }
  }
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [this + 0xce] vtable offset 0x68.

void __stdcall16far UI_Window_Call_Active_Child_Method_0x68(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0xd0) != 0x0 || *(int *)((int)this + 0xce) != 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xce) + 0x68);
    (*(code *)*puVar1)();
  }
  return;
}



// Targeted Scan Finding: Vtable
// Resets UI_Event_Handler_Tracker vtable to 1008:6C8C and then 1008:389A during
// destruction.
// Performs indirect call through [this + 4] during cleanup.

void * __stdcall16far UI_Event_Handler_Tracker_scalar_dtor(void *this,byte flags)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  uVar2 = (undefined2)((ulong)_this >> 0x10);
  *_this = 0x6c8c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0x6) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x4);
    (*(code *)*puVar1)();
  }
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Resets UI_Base_Window vtable to 1008:380A and then 1008:389A during destruction.

void * __stdcall16far UI_Base_Window_scalar_dtor(void *this,byte flags)
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
  undefined4 reg_eax;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  uint reg_dx;
  HWND16 hwnd;
  undefined4 uStack_6;
  
  uVar4 = (undefined2)((ulong)reg_eax >> 0x10);
  if (param_2 == 0x81)
  {
    hwnd = 0x0;
    pvVar1 = allocate_memory(0x6);
    reg_dx |= (uint)pvVar1;
    if (reg_dx == 0x0)
    {
      pvVar1 = NULL;
      reg_dx = 0x0;
    }
    else
    {
      pvVar1 = zero_init_6bytes_logic(pvVar1);
    }
    SetWindowLong16((int32_t)pvVar1,reg_dx,hwnd);
    uVar4 = extraout_var;
  }
  if (param_2 == 0x1)
  {
    puVar2 = (undefined2 *)GetWindowLong16(0x0,param_1);
    uStack_6 = (undefined2 *)CONCAT22(reg_dx,puVar2);
    *uStack_6 = *(undefined2 *)((int)param_4 + 0x8);
    iVar3 = GetDlgCtrlId(0x1538);
    puVar2[0x1] = iVar3;
    uVar4 = extraout_var_00;
  }
  return CONCAT22(uVar4,0x1);
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
  undefined2 reg_dx;
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
  local_16 = CONCAT22(reg_dx,ptr);
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
        return (LRESULT)CONCAT22(reg_dx,(void *)pvVar4);
      }
      if (cVar2 == '\x02')
      {
        free_if_not_null(ptr);
      }
      else if (cVar2 != '\f')
      {
        if (cVar2 != '\x0f') goto LAB_1008_8771;
        UI_SpinControl_PaintHandler(param_4._2_2_,ptr,reg_dx);
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
      UI_SpinControl_SendScrollMessage(param_4._2_2_,ptr,reg_dx);
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
    UI_SpinControl_SendScrollMessage(param_4._2_2_,ptr,reg_dx);
    SetTimer16(NULL,0x12c,0xfa6,param_4._2_2_);
    InvalidateRect16(0x1,(void *)((ulong)param_4._2_2_ << 0x10),0x1050);
    UpdateWindow16(param_4._2_2_);
    SetCapture16(param_4._2_2_);
  }
  return NULL;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Initializes Simulator_Timer_Object vtable to 1008:9416 (base 1008:389A).
// Registers global instance pointer at 1050:0388.
// Initializes a Windows 16-bit timer using HWND from 1050:0396.

void * __stdcall16far Simulator_Timer_Object_ctor(void *this)
{
  uint16_t uVar1;
  undefined *in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x4) = 0x0;
  construct_object_with_vtable((astruct_491 *)((int)this + 0x6),(u16)in_stack_00000006);
  *_this = 0x9416;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  PTR_DAT_1050_0000_1050_0388 = this;
  PTR_DAT_1050_0000_1050_038a = in_stack_00000006;
  uVar1 = SetTimer16(NULL,0x1,0x1,(HWND16)g_ParentHWND);
  if (uVar1 == 0x0)
  {
    win16_app_exit_wrapper();
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Reverts vtable sequence during destruction: 1008:9416 -> 1008:389A.
// Clears global instance pointer at 1050:0388 and kills timer linked to 1050:0396.

void __stdcall16far Simulator_Timer_Object_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x9416;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  KillTimer16(0x1,(HWND16)g_ParentHWND);
  _PTR_DAT_1050_0000_1050_0388 = 0x0;
  UI_Control_Sub_dtor_logic((void *)((int)this + 0x6));
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global window and accelerator handles in segment 1050:
// - PTR_DAT_1050_5bc8 (Main Window context)
// - PTR_DAT_1050_0398 (Accelerators)
// - PTR_DAT_1050_0396 (Main HWND).

int __cdecl16far win16_main_message_loop_logic(void)
{
  HWND16 hwnd;
  BOOL16 BVar1;
  int16_t iVar2;
  /* local_16 + iStack_12 form the Win16 MSG struct on the stack (MSG = ~18 bytes) */
  undefined1 local_16 [0x4];
  int iStack_12;
  
LAB_1008_949c:
  /* GetMessage: pass MSG ptr — flat: SS:local_16 far ptr collapses to &local_16 */
  BVar1 = GetMessage16(0x0,0x0,0x0,(undefined *)local_16);
  if (BVar1 == 0x0)
  {
    return iStack_12; /* WM_QUIT: wParam holds the exit code */
  }
  hwnd = *(HWND16 *)((int)_p_UIMainWindow + 0x8);
  if (hwnd != 0x0) goto code_r0x100894cd;
  goto LAB_1008_94dc;
code_r0x100894cd:
  BVar1 = IsDialogMessage16((undefined1 *)local_16,hwnd);
  if (BVar1 == 0x0)
  {
LAB_1008_94dc:
    if (g_hAccel != (HACCEL16)NULL)
    {
      iVar2 = TranslateAccelerator16
                        ((undefined1 *)local_16,
                         g_hAccel,(HWND16)g_ParentHWND);
      if (iVar2 != 0x0) goto LAB_1008_949c;
    }
    TranslateMessage16((undefined1 *)local_16);
    DispatchMessage16((undefined *)local_16);
  }
  goto LAB_1008_949c;
}
