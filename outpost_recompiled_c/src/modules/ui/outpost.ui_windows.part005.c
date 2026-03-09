/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 5/54
 * Original lines (combined): 19943-22405
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Executes a nested or modal Windows message loop that continues as long as the integer
// pointed to by `param_1` is non-zero. It handles standard message processing,
// including dialog messages and accelerator translation.

void __cdecl16far win16_conditional_message_loop(int *condition_ptr)
{
  HWND16 hwnd;
  BOOL16 BVar1;
  int16_t iVar2;
  undefined *unaff_SS;
  undefined2 in_stack_00000006;
  undefined *in_stack_0000ffe4;
  undefined1 local_14 [0x12];
  
LAB_1008_9578:
  if (*_condition_ptr != 0x0)
  {
    BVar1 = GetMessage16(0x0,0x0,0x0,(undefined *)CONCAT22(in_stack_0000ffe4,unaff_SS));
    if (BVar1 != 0x0)
    {
      hwnd = *(HWND16 *)((int)_p_UIMainWindow + 0x8);
      if (hwnd != 0x0) goto code_r0x10089538;
      goto LAB_1008_9547;
    }
  }
  return;
code_r0x10089538:
  in_stack_0000ffe4 = unaff_SS;
  BVar1 = IsDialogMessage16((undefined1 *)CONCAT22(unaff_SS,local_14),hwnd);
  if (BVar1 == 0x0)
  {
LAB_1008_9547:
    if (PTR_DAT_1050_0000_1050_0398 != NULL)
    {
      in_stack_0000ffe4 = PTR_DAT_1050_0000_1050_0398;
      iVar2 = TranslateAccelerator16
                        ((undefined1 *)CONCAT22(unaff_SS,local_14),
                         (HACCEL16)PTR_DAT_1050_0000_1050_0398,(HWND16)g_ParentHWND);
      if (iVar2 != 0x0) goto LAB_1008_9578;
    }
    TranslateMessage16((undefined1 *)CONCAT22(unaff_SS,local_14));
    in_stack_0000ffe4 = local_14;
    DispatchMessage16((undefined *)CONCAT22(unaff_SS,in_stack_0000ffe4));
  }
  goto LAB_1008_9578;
}



// Targeted Scan Finding: Vtable
// Initializes base UI_Element vtable to 1008:9D2E and then 1008:380A.
// Configures default graphical styles and dimensions.

void * __stdcall16far UI_Element_ctor(void *this,void *parent)
{
  undefined4 in_stack_00000008;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = in_stack_00000008;
  *_this = 0x9d2e;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x8) = 0x0;
  *(undefined4 *)((int)this + 0xac) = 0x2000000;
  *(undefined4 *)((int)this + 0xb0) = 0x0;
  *(undefined2 *)((int)this + 0xb4) = 0x8000;
  *(undefined2 *)((int)this + 0xb6) = 0x8000;
  *(undefined2 *)((int)this + 0xb8) = 0x8000;
  *(undefined2 *)((int)this + 0xba) = 0x8000;
  *(undefined2 *)((int)this + 0xbc) = 0x0;
  *(undefined4 *)((int)this + 0xbe) = 0x0;
  *(undefined2 *)((int)this + 0xc2) = 0x0;
  *(undefined2 *)((int)this + 0xc4) = 0x0;
  *(undefined2 *)((int)this + 0xc6) = 0x0;
  *(undefined2 *)((int)this + 0xc8) = (char *)s_572_bmp_1050_2007 + 0x1;
  *(undefined2 *)((int)this + 0xca) = 0x0;
  *_this = 0x380a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined1 *)((int)this + 0x5b) = 0x0;
  *(undefined1 *)((int)this + 0xa) = 0x0;
  return this;
}



// Sets the window handle (HWND) for a UI element, but only if it hasn't been set
// already (is currently zero).

void __stdcall16far UI_Element_Set_HWND_If_Null(void *this,HWND16 hwnd)
{
  undefined2 in_stack_00000008;
  
  if (*(int *)((int)this + 0x8) == 0x0)
  {
    *(undefined2 *)((int)this + 0x8) = in_stack_00000008;
  }
  return;
}



// Sends a WM_NCACTIVATE message to the UI element's window handle to indicate a change
// in its active state.

void __stdcall16far UI_Element_Send_WM_NCACTIVATE(void *this,int active)
{
  undefined2 unaff_BP;
  ushort in_stack_00000008;
  
  if (*(int *)((int)this + 0x8) != 0x0)
  {
    SendMessage16(0x0,0x0,in_stack_00000008,
                  CONCAT22(unaff_BP,*(undefined2 *)((int)this + 0x8)));
  }
  return;
}



// A wrapper that destroys the Windows window handle associated with the UI element.

void __stdcall16far UI_Element_DestroyWindow_Wrapper(void *this)
{
  undefined2 in_stack_00000006;
  
  DestroyWindow16(*(HWND16 *)((int)this + 0x8));
  return;
}



// A wrapper around the Windows `ShowWindow16` API for UI elements. It ensures the
// window handle is valid before attempting to change its visibility.

int __stdcall16far UI_Element_ShowWindow_Wrapper(void *this,int show_cmd)
{
  BOOL16 BVar1;
  HWND16 in_stack_00000008;
  
  if (*(int *)((int)this + 0x8) != 0x0)
  {
    BVar1 = ShowWindow16(in_stack_00000008,*(short *)((int)this + 0x8));
    return BVar1;
  }
  return 0x0;
}



// Targeted Scan Finding: Far Pointer / Resource
// Registers window class with specialized procedure at 1008:5632.
// References global application instance at 1050:038C.

void __stdcall16far UI_Container_Register_Class_Logic(void *this)
{
  BOOL16 BVar1;
  uint16_t uVar2;
  /* unaff_SS, in_stack_00000006 -- Win16 far-ptr segments, removed in flat model */
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
  
  BVar1 = GetClassInfo16((undefined2 *)&local_1c,
                         (void *)((int)this + 0x5b), /* CONCAT22(in_stack,*) -> flat offset */
                         (HINSTANCE16)g_hInstance);
  if (BVar1 == 0x0)
  {
    local_1c = *(undefined2 *)((int)this + 0xc8);
    uStack_1a = 0x5632;
    uStack_18 = 0x1008;
    uStack_16 = 0x40000;
    puStack_12 = (undefined *)g_hInstance; /* PTR_DAT_1050_0000_1050_038c */
    uStack_10 = *(undefined2 *)((int)this + 0xc2);
    uStack_e = *(undefined2 *)((int)this + 0xc4);
    uStack_c = *(undefined2 *)((int)this + 0xc6);
    uStack_a = 0x0;
    pvStack_6 = (void *)((int)this + 0x5b);
    uVar2 = RegisterClass16((undefined2 *)&local_1c); /* CONCAT22(unaff_SS,&local_1c) -> flat */
    if (uVar2 == 0x0)
    {
      win16_app_exit_wrapper();
    }
  }
  return;
}



// Targeted Scan Finding: Far Pointer
// Invokes CreateWindowEx16 using:
// - HINSTANCE from 1050:038C
// - Resource data from 1050:1050.

void __stdcall16far UI_Element_Create_Window_Logic(void *this)
{
  HWND16 HVar1;
  uint32_t in_stack_00000006;
  
  if (*(int *)((int)this + 0x8) == 0x0)
  {
    HVar1 = CreateWindowEx16((void *)CONCAT22(in_stack_00000006,this),
                             (HINSTANCE16)PTR_DAT_1050_0000_1050_038c,
                             *(HMENU16 *)((int)this + 0xca),
                             *(HWND16 *)((int)this + 0xbc),
                             *(int16_t *)((int)this + 0xba),
                             *(int16_t *)((int)this + 0xb8),
                             *(int16_t *)((int)this + 0xb6),
                             *(int16_t *)((int)this + 0xb4),
                             (uint32_t)*(undefined4 *)((int)this + 0xac),
                             (void *)CONCAT22(0x39e,(void *)((ulong)*(undefined4 *)
                                                                     ((int)this + 0xac)
                                                            >> 0x10)),
                             (dword *)CONCAT22((int)this + 0x5b,(dword *)&g_HeapContext)
                             ,in_stack_00000006);
    *(HWND16 *)((int)this + 0x8) = HVar1;
  }
  if (*(int *)((int)this + 0x8) == 0x0)
  {
    win16_app_exit_wrapper();
  }
  return;
}



void __stdcall16far UI_Control_Stub_PaintHandler_1008_97c8(u32 param_1)
{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = (undefined2)(param_1 >> 0x10);
  BeginPaint16((undefined1 *)CONCAT22(unaff_SS,&stack0xffde),
               *(HWND16 *)((int)param_1 + 0x8));
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,&stack0xffde),
             *(HWND16 *)((int)param_1 + 0x8));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// A massive virtual message dispatcher mapping 30+ Windows/Custom message IDs to vtable
// offsets (0x10 to 0x8C).
// References multiple global management pointers in segment 1050:
// - PTR_DAT_1050_039a, 039c
// - PTR_DAT_1050_0388 (Simulator Timer)
// - PTR_DAT_1050_5bc8.

long __stdcall16far
UI_Element_Message_Dispatcher_Logic
          (void *this,int *wParam_ptr,int arg3,void *lParam,int msg)
{
  undefined2 *puVar1;
  char cVar2;
  BOOL16 BVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined2 reg_dx;
  uint reg_bx;
  undefined2 unaff_CS;
  long lVar7;
  uint in_stack_0000000e;
  HWND16 hwnd;
  
  if (in_stack_0000000e == 0x2b)
  {
    if (*(int *)arg3 == 0x4)
    {
      UI_Control_Dispatch_Virtual_Event_9566((void *)arg3);
    }
    else
    {
      puVar1 = (undefined2 *)((int)*_this + 0x70);
      (*(code *)*puVar1)();
    }
    uVar6 = 0x1;
    goto LAB_1008_9a95;
  }
  if (0x2b < in_stack_0000000e)
  {
    if (in_stack_0000000e == 0x112)
    {
      if ((PTR_DAT_1050_0000_1050_039a == NULL) &&
         (puVar1 = (undefined2 *)((int)*_this + 0x48), iVar5 = (*(code *)*puVar1)(),
         iVar5 != 0x0))
      {
        UI_Element_DefWindowProc_Wrapper
                  (this,(int)wParam_ptr,CONCAT22(lParam,arg3),CONCAT22(0x112,msg));
      }
    }
    else if (in_stack_0000000e < 0x113)
    {
      if (in_stack_0000000e == 0x86)
      {
        puVar1 = (undefined2 *)((int)*_this + 0x80);
        lVar7 = (*(code *)*puVar1)();
        return lVar7;
      }
      if (in_stack_0000000e < 0x87)
      {
        if (in_stack_0000000e == 0x85)
        {
          puVar1 = (undefined2 *)((int)*_this + 0x7c);
          lVar7 = (*(code *)*puVar1)();
          return lVar7;
        }
        uVar6 = in_stack_0000000e;
        if (in_stack_0000000e < 0x86)
        {
          if ((char)in_stack_0000000e == '7')
          {
            return (long)*(uint *)((int)this + 0xc2);
          }
          cVar2 = (char)in_stack_0000000e + -0x41;
          uVar6 = CONCAT11((char)(in_stack_0000000e >> 0x8),cVar2);
          if (cVar2 == '\0')
          {
            puVar1 = (undefined2 *)((int)*_this + 0x2c);
            (*(code *)*puVar1)();
            goto switchD_1008_9b30_caseD_1;
          }
        }
        goto switchD_1008_9b30_caseD_4;
      }
      if (in_stack_0000000e == 0x100)
      {
        if (PTR_DAT_1050_0000_1050_039a == NULL)
        {
          puVar1 = (undefined2 *)((int)*_this + 0x6c);
          (*(code *)*puVar1)();
        }
      }
      else if (in_stack_0000000e == 0x102)
      {
        if (PTR_DAT_1050_0000_1050_039a == NULL)
        {
          puVar1 = (undefined2 *)((int)*_this + 0x68);
          (*(code *)*puVar1)();
        }
      }
      else
      {
        uVar6 = in_stack_0000000e - 0x111;
        if (uVar6 != 0x0) goto switchD_1008_9b30_caseD_4;
        if (((undefined *)msg != PTR_DAT_1050_0000_1050_039c) &&
           (PTR_DAT_1050_0000_1050_039a == NULL))
        {
          if (arg3 == 0x0)
          {
            puVar1 = (undefined2 *)((int)*_this + 0x40);
            (*(code *)*puVar1)();
          }
          else
          {
            puVar1 = (undefined2 *)((int)*_this + 0x44);
            (*(code *)*puVar1)();
          }
        }
      }
    }
    else if (in_stack_0000000e == 0x204)
    {
      if (PTR_DAT_1050_0000_1050_039a == NULL)
      {
        puVar1 = (undefined2 *)((int)*_this + 0x60);
        (*(code *)*puVar1)();
      }
    }
    else if (in_stack_0000000e < 0x205)
    {
      if (in_stack_0000000e == 0x113)
      {
        if (_PTR_DAT_1050_0000_1050_0388 != NULL)
        {
          Simulator_Process_Update_Tick((void *)_PTR_DAT_1050_0000_1050_0388);
        }
      }
      else if (in_stack_0000000e == 0x117)
      {
        if (lParam == NULL)
        {
          puVar1 = (undefined2 *)((int)*_this + 0x4c);
          (*(code *)*puVar1)();
        }
        else
        {
          puVar1 = (undefined2 *)((int)*_this + 0x20);
          (*(code *)*puVar1)();
        }
      }
      else
      {
        uVar6 = in_stack_0000000e - 0x201;
        if (uVar6 != 0x0) goto switchD_1008_9b30_caseD_4;
        if (PTR_DAT_1050_0000_1050_039a == NULL)
        {
          puVar1 = (undefined2 *)((int)*_this + 0x5c);
          (*(code *)*puVar1)();
        }
      }
    }
    else if (in_stack_0000000e == 0x210)
    {
      puVar1 = (undefined2 *)((int)*_this + 0x64);
      (*(code *)*puVar1)();
    }
    else
    {
      if (in_stack_0000000e == 0x30f)
      {
LAB_1008_9af8:
        puVar1 = (undefined2 *)((int)*_this + 0x8c);
        iVar5 = (*(code *)*puVar1)();
LAB_1008_9ada:
        return (long)iVar5;
      }
      if (in_stack_0000000e == 0x311)
      {
        puVar1 = (undefined2 *)((int)*_this + 0x88);
        iVar5 = (*(code *)*puVar1)();
        if (iVar5 != 0x0) goto LAB_1008_9af8;
      }
      else
      {
        uVar6 = in_stack_0000000e - 0x3b9;
        if (uVar6 != 0x0) goto switchD_1008_9b30_caseD_4;
        puVar1 = (undefined2 *)((int)*_this + 0x24);
        (*(code *)*puVar1)();
      }
    }
    goto switchD_1008_9b30_caseD_1;
  }
  uVar6 = in_stack_0000000e - 0x1;
  if (false)
  {
switchD_1008_9b30_caseD_4:
    if ((in_stack_0000000e < 0x400) || (0x7ffe < in_stack_0000000e))
    {
      UI_Element_DefWindowProc_Wrapper
                (this,(int)wParam_ptr,CONCAT22(lParam,arg3),
                 CONCAT22(in_stack_0000000e,msg));
      return CONCAT22(reg_dx,uVar6);
    }
    puVar1 = (undefined2 *)((int)*_this + 0x28);
    (*(code *)*puVar1)(unaff_CS,this,wParam_ptr,arg3,lParam,
                       CONCAT22(in_stack_0000000e,msg));
  }
  else
  {
    unaff_CS = 0x1008;
    uVar6 = reg_bx;
    switch(in_stack_0000000e - 0x1)
    {
    case 0x0:
      break;
    case 0x1:
      puVar1 = (undefined2 *)((int)*_this + 0x3c);
      (*(code *)*puVar1)(0x1008,this,wParam_ptr);
      SetWindowLong16(0x0,0x0,0x0);
      hwnd = *(HWND16 *)((int)this + 0xbc);
      BVar3 = IsWindow16(hwnd);
      if (BVar3 != 0x0)
      {
        PostMessage16((HWND16)this,(ushort)wParam_ptr,0xc7,
                      CONCAT22(hwnd,*(undefined2 *)((int)this + 0xbc)));
      }
      break;
    case 0x2:
      puVar1 = (undefined2 *)((int)*_this + 0x54);
      (*(code *)*puVar1)(0x1008,this,wParam_ptr,lParam,arg3);
      break;
    default:
      goto switchD_1008_9b30_caseD_4;
    case 0x4:
      puVar1 = (undefined2 *)((int)*_this + 0x58);
      (*(code *)*puVar1)(0x1008,this,wParam_ptr,lParam,arg3,msg);
      break;
    case 0x6:
      puVar1 = (undefined2 *)((int)*_this + 0x50);
      (*(code *)*puVar1)(0x1008,this,wParam_ptr,msg);
      break;
    case 0x7:
      puVar1 = (undefined2 *)((int)*_this + 0x74);
      (*(code *)*puVar1)(0x1008,this,wParam_ptr,msg);
      break;
    case 0xc:
      puVar1 = (undefined2 *)((int)*_this + 0x84);
      iVar5 = (*(code *)*puVar1)(0x1008,this,wParam_ptr,arg3,
                                 CONCAT12((undefined1)msg,lParam));
      goto LAB_1008_9ada;
    case 0xe:
      puVar1 = (undefined2 *)((int)*_this + 0x34);
      (*(code *)*puVar1)(0x1008,this,wParam_ptr);
      break;
    case 0xf:
      puVar1 = (undefined2 *)((int)*_this + 0x38);
      lVar7 = (*(code *)*puVar1)(0x1008,this,wParam_ptr);
      return lVar7;
    case 0x18:
      puVar1 = (undefined2 *)((int)*_this + 0x78);
      uVar4 = (*(code *)*puVar1)(0x1008,this,wParam_ptr,arg3,
                                 CONCAT12((undefined1)msg,lParam));
      return CONCAT22(0x1050,uVar4);
    case 0x1b:
      puVar1 = (undefined2 *)((int)*_this + 0x30);
      (*(code *)*puVar1)(0x1008,this,wParam_ptr,msg);
    }
  }
switchD_1008_9b30_caseD_1:
  uVar6 = 0x0;
LAB_1008_9a95:
  return (long)uVar6;
}



// A specialized wrapper that triggers a WM_NCPAINT message dispatch for a UI element.

void __stdcall16far
UI_Element_Send_WM_NCPAINT_Logic(void *param_1,undefined4 param_2,undefined4 param_3)
{
  UI_Element_DefWindowProc_Wrapper
            (param_1,(int)param_2,CONCAT22((int)param_3,(int)((ulong)param_2 >> 0x10)),
             CONCAT22(0x85,(int)((ulong)param_3 >> 0x10)));
  return;
}



// A specialized far wrapper that triggers a WM_NCACTIVATE message dispatch for a UI
// element.

void __stdcall16far
UI_Element_Send_WM_NCACTIVATE_Logic_Far
          (void *param_1,undefined4 param_2,undefined4 param_3)
{
  UI_Element_DefWindowProc_Wrapper
            (param_1,(int)param_2,CONCAT22((int)param_3,(int)((ulong)param_2 >> 0x10)),
             CONCAT22(0x86,(int)((ulong)param_3 >> 0x10)));
  return;
}



// Targeted Scan Finding: Vtable
// Invokes the object's primary virtual destructor (vtable index 0) upon receiving
// custom message 199.

void __stdcall16far
UI_Element_Handle_Custom_Message_199_Logic(void *arg1,void *arg2,void *obj_ptr,int msg)
{
  int in_stack_0000000c;
  
  if ((in_stack_0000000c == 0xc7) && (_obj_ptr != NULL))
  {
    (*(code *)*(undefined2 *)(undefined2 *)*_obj_ptr)();
  }
  return;
}



// Compares the UI element's window handle (HWND) with the provided handle (`param_2`).
// Returns 0 if they match, 1 otherwise.

int __stdcall16far UI_Element_Compare_HWND_Logic(void *this,HWND16 hwnd)
{
  int in_stack_00000008;
  
  if (*(int *)((int)this + 0x8) != in_stack_00000008)
  {
    return 0x1;
  }
  return 0x0;
}



// A wrapper around the standard Windows `DefWindowProc16` API for UI elements. It uses
// the window handle stored within the element's structure.

void __stdcall16far
UI_Element_DefWindowProc_Wrapper(void *this,int arg2,long lParam,long wParam_msg)
{
  DefWindowProc16((LPARAM)lParam,(WPARAM16)wParam_msg,
                  (uint16_t)((ulong)wParam_msg >> 0x10),*(HWND16 *)((int)this + 0x8));
  return;
}



void __stdcall16far
UI_Manager_Handle_Resource_Notification_Type2(int param_1,int param_2,int param_3)
{
  if (param_3 == 0x2)
  {
    UI_Manager_Increment_Resource_Index((void *)(param_1 + -0x1c));
    UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)(param_1 + -0x1c),param_2);
  }
  return;
}



void UI_Manager_dtor_Wrapper_1008_9f80(u16 param_1,int param_2,u16 param_3,byte param_4)
{
  UI_Manager_dtor_Scalar_Deleting_9f8c((void *)(param_2 + -0x1c),param_3,param_4);
  return;
}



void * __stdcall16far
UI_Manager_dtor_Scalar_Deleting_9f8c(void *param_1,u16 param_2,byte param_3)
{
  UI_Manager_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// References global media context pointer at 1050:02A0.
// Performs indirect call through [this + 0x410] vtable offset 0x10 to pop a signal
// event.
// Invokes virtual destructor (index 0) of the signal object.

void * __stdcall16far Turn_Manager_Perform_MCI_Signal_Update_Logic(void *this)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x414) != 0x0)
  {
    if (*(int *)((int)*(undefined4 *)((int)this + 0x410) + 0x8) == 0x0)
    {
      *(undefined2 *)((int)this + 0x414) = 0x0;
      return NULL;
    }
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x410) + 0x10);
    puVar3 = (undefined4 *)(*(code *)*puVar1)();
    puVar2 = (undefined4 *)puVar3;
    if (puVar3 != NULL)
    {
      media_play_from_resource_id_shorthand
                ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
      if (puVar3 != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*puVar3)();
      }
      return puVar2;
    }
  }
  return NULL;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Special_Dialog vtable to 1008:AF7C.
// Registers global special dialog instance at 1050:4230.
// Loads resources with ID 0x1B3 via Build_Site_Object_Initialize_Vtable_and_Resource.

void * __stdcall16far UI_Special_Dialog_ctor_init(void *this,int arg2,int res_id)
{
  Build_Site_Object_Base_ctor((long)CONCAT22(arg2,this),res_id);
  *(undefined2 *)CONCAT22(arg2,this) = 0xaf7c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  p_GlobalPaletteObject = this;
  PTR_DAT_1050_0000_1050_4232 = (undefined *)arg2;
  Build_Site_Object_Initialize_Vtable_and_Resource((long)CONCAT22(arg2,this),0x1b3);
  return this;
}



// Targeted Scan Finding: Vtable
// Resets UI_Special_Dialog vtable to 1008:AF7C during destruction.

void __stdcall16far UI_Special_Dialog_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0xaf7c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  Build_Site_Object_dtor_Internal(this);
  return;
}



// Scalar deleting destructor for the UI_Special_Dialog class.

void * __stdcall16far UI_Special_Dialog_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Special_Dialog_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:BDCC.

void * __stdcall16far UI_Element_Subclass_ctor_BDCC(void *this,int arg2,int arg3)
{
  Base_Object_ctor_init_2014_Logic(this,arg2);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined4 *)((int)this + 0x16) = 0x0;
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  *(undefined2 *)((int)this + 0x22) = 0x0;
  *(undefined2 *)CONCAT22(arg2,this) = 0xbdcc;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets UI_Element_Subclass vtable to 1008:BDCC during destruction.
// Iteratively invokes virtual destructors for sub-objects at offsets 10, 14, and 18.

void __stdcall16far UI_Element_Subclass_dtor_BDCC(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xbdcc;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  if (*(int *)((int)this + 0x10) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar1)();
  }
  if (*(int *)((int)this + 0x14) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x12) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x12);
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:BDC8.

void * __stdcall16far UI_Element_Subclass_ctor_BDC8(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = 0x0;
  *_this = 0xbdc8;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:BDC4.

void * __stdcall16far UI_Element_Subclass_ctor_BDC4(void *this)
{
  undefined2 in_stack_00000006;
  
  UI_Element_Subclass_ctor_BDC8(this);
  *(undefined2 *)((int)this + 0x8) = 0x0;
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *_this = 0xbdc4;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:BDC0.

void * __stdcall16far UI_Element_Subclass_ctor_BDC0(void *this)
{
  undefined2 in_stack_00000006;
  
  UI_Element_Subclass_ctor_BDC8(this);
  *(undefined4 *)((int)this + 0x8) = 0x0;
  *_this = 0xbdc0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:BDDC.

void * __stdcall16far UI_Element_Subclass_ctor_BDDC(void *this)
{
  undefined2 in_stack_00000006;
  
  UI_Element_Subclass_ctor_BDC8(this);
  *(undefined2 *)((int)this + 0x8) = 0x0;
  *_this = 0xbddc;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Retrieves a 32-bit data or string pointer from the UI element's sub-component at
// offset 0x1A.

void * __stdcall16far UI_Element_Get_SubComponent_Data_at_Offset_1A_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0x1a) != 0x0)
  {
    return (void *)*(undefined2 *)((int)*(undefined4 *)((int)this + 0x1a) + 0x4);
  }
  return NULL;
}



// Retrieves a 32-bit data or string pointer from the UI element's sub-component at
// offset 0x1E.

void * __stdcall16far UI_Element_Get_SubComponent_Data_at_Offset_1E_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0x1e) != 0x0)
  {
    return (void *)*(undefined2 *)((int)*(undefined4 *)((int)this + 0x1e) + 0x4);
  }
  return NULL;
}



// Sets the UI sub-component at offset 0x1A using a newly created object.

void __stdcall16far
UI_Component_Set_SubComponent_at_Offset_1A_Logic(void *this,char *str)
{
  void *pvVar1;
  undefined2 reg_dx;
  
  pvVar1 = UI_Find_Item_In_List_Offset_0E_by_String_Logic(this,str);
  *(undefined2 *)((int)this + 0x1a) = pvVar1;
  *(undefined2 *)((int)this + 0x1c) = reg_dx;
  return;
}
