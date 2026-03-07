/*
 * Source: outpost.c
 * Chunk: 18/117
 * Original lines: 19475-20655
 * Boundaries: top-level declarations/definitions only
 */




// Retrieves a 32-bit data point from the history buffer at the specified index.
// Performs bounds checking and returns 0 if the index is invalid.

long __stdcall16far Data_History_Object_Get_Point_At_Index(void *this,long index)
{
  undefined2 in_stack_00000006;
  undefined4 uStack_6;
  
  uStack_6 = 0x0;
  if ((*(long *)((int)this + 0x6) != 0x0) &&
     ((ulong)index < *(ulong *)((int)this + 0xa)))
  {
    uStack_6 = *(long *)((int)*(undefined4 *)((int)this + 0x6) + (int)index * 0x4);
  }
  return uStack_6;
}



// Sets a 32-bit data point at a specific index in the history buffer. It performs
// bounds checking and triggers a buffer resize if the index exceeds the current
// capacity.

int __stdcall16far
Data_History_Object_Set_Point_At_Index(void *this,long value,long index)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 in_stack_00000006;
  
  if ((*(ulong *)((int)this + 0xa) <= (ulong)index) ||
     (*(long *)((int)this + 0x6) == 0x0))
  {
    if ((*(uint *)((int)this + 0x14) <= index._2_2_) &&
       ((*(uint *)((int)this + 0x14) < index._2_2_ ||
        (*(uint *)((int)this + 0x12) <= (uint)index))))
    {
      Data_History_Object_Allocate_Buffer_Logic(this);
    }
    if ((*(ulong *)((int)this + 0x12) <= (ulong)index) ||
       (*(long *)((int)this + 0x6) == 0x0))
    {
      return 0x0;
    }
    if ((*(uint *)((int)this + 0xc) <= index._2_2_) &&
       ((*(uint *)((int)this + 0xc) < index._2_2_ ||
        (*(uint *)((int)this + 0xa) <= (uint)index))))
    {
      *(undefined2 *)((int)this + 0xa) = (int)(index + 0x1);
      *(undefined2 *)((int)this + 0xc) = (int)((ulong)(index + 0x1) >> 0x10);
    }
  }
  uVar2 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x6) >> 0x10);
  iVar1 = (int)*(undefined4 *)((int)this + 0x6);
  *(undefined2 *)(iVar1 + (uint)index * 0x4) = (undefined2)value;
  *(undefined2 *)(iVar1 + (uint)index * 0x4 + 0x2) = value._2_2_;
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global heap context pointers in segment 1050:5f2c.
// Performs heap allocation or reallocation for 4-byte history data points.

void __stdcall16far Data_History_Object_Allocate_Buffer_Logic(void *this)
{
  uint uVar1;
  void *pvVar2;
  undefined *heap_ctx;
  undefined *puVar3;
  undefined2 in_stack_00000006;
  void *in_stack_0000ffe8;
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  if (*(long *)((int)this + 0x12) == 0x0)
  {
    uVar1 = *(uint *)((int)this + 0xe);
    puVar3 = (undefined *)*(undefined2 *)((int)this + 0x10);
  }
  else
  {
    uVar1 = *(uint *)((int)this + 0x12) + *(uint *)((int)this + 0x16);
    puVar3 = (undefined *)
             (*(int *)((int)this + 0x14) + *(int *)((int)this + 0x18) +
             (uint)CARRY2(*(uint *)((int)this + 0x12),*(uint *)((int)this + 0x16)));
  }
  uStack_6 = CONCAT22(puVar3,uVar1);
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      puVar3 = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar2 = alloc_with_hooks((ulong)(uVar1 << 0x2),0x1,heap_ctx);
  }
  else
  {
    puVar3 = (undefined *)
             (((int)puVar3 * 0x2 + (uint)CARRY2(uVar1,uVar1)) * 0x2 +
             (uint)CARRY2(uVar1 * 0x2,uVar1 * 0x2));
    pvVar2 = heap_realloc(0x1,(long)CONCAT22((int)*(undefined4 *)((int)this + 0x6),
                                             puVar3),
                          (void *)((ulong)*(undefined4 *)((int)this + 0x6) >> 0x10),
                          in_stack_0000ffe8);
  }
  uStack_a = (void *)CONCAT22(puVar3,pvVar2);
  if (puVar3 != NULL || pvVar2 != NULL)
  {
    *(undefined4 *)((int)this + 0x12) = uStack_6;
    *(undefined4 *)((int)this + 0x6) = uStack_a;
  }
  return;
}



// Scalar deleting destructor for the Data_History_Object class.

void * __stdcall16far Data_History_Object_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Data_History_Object_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes Resource_Tracker_Object vtable to 1008:9412 (base 1008:389A).

void * __stdcall16far
Resource_Tracker_Object_ctor(void *this,long resource_id,void *parent)
{
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000e;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = _parent;
  *(long *)((int)this + 0x8) = resource_id;
  *(long *)((int)this + 0xc) = resource_id;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *_this = 0x9412;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
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



// Targeted Scan Finding: Vtable
// Performs indirect call through [this + 6] vtable offset 4, likely adding a tracker to
// a managed list.

void __stdcall16far
Simulator_Add_Resource_Tracker(void *this,int arg2,long resource_id,void *parent)
{
  undefined2 *puVar1;
  void *pvVar2;
  uint in_DX;
  undefined2 in_stack_0000fff6;
  
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x12));
  in_DX |= (uint)pvVar2;
  if (in_DX == 0x0)
  {
    pvVar2 = NULL;
    in_DX = 0x0;
  }
  else
  {
    pvVar2 = Resource_Tracker_Object_ctor(pvVar2,resource_id,parent);
  }
  if (in_DX != 0x0 || pvVar2 != NULL)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)((int)this + 0x6) + 0x4);
    (*(code *)*puVar1)(0x1000,(undefined4 *)((int)this + 0x6),arg2,pvVar2,in_DX);
  }
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [this + 6] vtable offset 0xC to signal a specific
// resource tracker.

int __stdcall16far
Simulator_Find_and_Signal_Resource_Tracker(void *this,long id1,long id2)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined2 in_stack_00000006;
  undefined1 local_c [0x4];
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 0x0;
  init_8byte_pair_with_long_and_zero
            (local_c,CONCAT22(in_stack_00000006,(int)this + 0x6));
  while( true )
  {
    lVar4 = get_next_list_item(local_c);
    iVar3 = (int)((ulong)lVar4 >> 0x10);
    iVar2 = (int)lVar4;
    if (iVar3 == 0x0 && iVar2 == 0x0) break;
    if ((*(long *)(iVar2 + 0x4) == id2) && (*(long *)(iVar2 + 0x8) == id1))
    {
      iStack_4 = 0x1;
      puVar1 = (undefined2 *)((int)*(undefined4 *)((int)this + 0x6) + 0xc);
      (*(code *)*puVar1)();
      uStack_8 = 0x0;
    }
  }
  return iStack_4;
}



// Targeted Scan Finding: Vtable
// Performs indirect calls through vtable offset 4 of multiple timed entities in a loop.
// Manages 16-bit tick arithmetic (decrementing by 0x37 / 55ms).

void __stdcall16far Simulator_Process_Update_Tick(void *this)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined2 in_stack_00000006;
  undefined1 local_a [0x8];
  
  if (*(int *)((int)this + 0x4) == 0x0)
  {
    *(undefined2 *)((int)this + 0x4) = 0x1;
    init_8byte_pair_with_long_and_zero
              (local_a,CONCAT22(in_stack_00000006,(int)this + 0x6));
    while( true )
    {
      lVar5 = get_next_list_item(local_a);
      iVar3 = (int)((ulong)lVar5 >> 0x10);
      iVar2 = (int)lVar5;
      if (iVar3 == 0x0 && iVar2 == 0x0) break;
      iVar4 = *(int *)(iVar2 + 0xe) - (uint)(*(uint *)(iVar2 + 0xc) < 0x37);
      *(int *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) - 0x37;
      *(int *)(iVar2 + 0xe) = iVar4;
      if ((iVar4 < 0x1) &&
         (((iVar4 < 0x0 || (*(int *)(iVar2 + 0xc) == 0x0)) &&
          (*(int *)(iVar2 + 0x10) == 0x0))))
      {
        puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x4) + 0x4);
        (*(code *)*puVar1)();
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar2 + 0x8);
      }
    }
    *(undefined2 *)((int)this + 0x4) = 0x0;
  }
  return;
}



u16 * __stdcall16far
Base_Object_dtor_Scalar_Deleting_1008_93c0(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



void * __stdcall16far
Simulator_Timer_Object_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  Simulator_Timer_Object_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



void * __stdcall16far init_word_pair(void *dest,int w1,int w2)
{
  undefined2 in_stack_0000000a;
  
                // Initializes 2-word structure: [0]=param_2, [1]=param_3. Returns
                // param_1.
  *_dest = w2;
  *(undefined2 *)((int)dest + 0x2) = in_stack_0000000a;
  return dest;
}



void * __stdcall16far zero_init_u32_ptr(void *dest)
{
  undefined2 in_stack_00000006;
  
  *_dest = 0x0;
  *(undefined2 *)((int)dest + 0x2) = 0x0;
  return dest;
}



void __stdcall16far set_u32_ptr(void *dest,int low,int high)
{
  undefined2 in_stack_0000000a;
  
  *(undefined2 *)((int)dest + 0x2) = in_stack_0000000a;
  *_dest = high;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable
// Reverts Simulator vtable to 1008:052A during teardown.

void __stdcall16far Simulator_Destructor_Internal_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x52a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  free_if_not_null((void *)_PTR_DAT_1050_0000_1050_0392);
  _PTR_DAT_1050_0000_1050_0392 = NULL;
  return;
}



void __stdcall16far void_noop_stub_1008_9490(void)
{
  return;
}



void __stdcall16far void_noop_stub_1008_9494(void)
{
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
  undefined *unaff_SS;
  undefined *in_stack_0000ffe2;
  undefined1 local_16 [0x4];
  int iStack_12;
  
LAB_1008_949c:
  BVar1 = GetMessage16(0x0,0x0,0x0,(undefined *)CONCAT22(in_stack_0000ffe2,unaff_SS));
  if (BVar1 == 0x0)
  {
    return iStack_12;
  }
  hwnd = *(HWND16 *)((int)_p_UIMainWindow + 0x8);
  if (hwnd != 0x0) goto code_r0x100894cd;
  goto LAB_1008_94dc;
code_r0x100894cd:
  in_stack_0000ffe2 = unaff_SS;
  BVar1 = IsDialogMessage16((undefined1 *)CONCAT22(unaff_SS,local_16),hwnd);
  if (BVar1 == 0x0)
  {
LAB_1008_94dc:
    if (PTR_DAT_1050_0000_1050_0398 != NULL)
    {
      in_stack_0000ffe2 = PTR_DAT_1050_0000_1050_0398;
      iVar2 = TranslateAccelerator16
                        ((undefined1 *)CONCAT22(unaff_SS,local_16),
                         (HACCEL16)PTR_DAT_1050_0000_1050_0398,(HWND16)g_ParentHWND);
      if (iVar2 != 0x0) goto LAB_1008_949c;
    }
    TranslateMessage16((undefined1 *)CONCAT22(unaff_SS,local_16));
    in_stack_0000ffe2 = local_16;
    DispatchMessage16((undefined *)CONCAT22(unaff_SS,in_stack_0000ffe2));
  }
  goto LAB_1008_949c;
}



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



void __stdcall16far
UI_Control_Set_Window_Text_from_Offset_A_Logic(u32 param_1,u16 param_2,char *param_3)
{
  strcpy_optimized((char *)CONCAT22(param_1._2_2_,(char *)((int)param_1 + 0xa)),param_3)
  ;
  SetWindowText16((char *)CONCAT22(param_1._2_2_,(char *)((int)param_1 + 0xa)),
                  *(HWND16 *)((int)param_1 + 0x8));
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
                         (void *)CONCAT22(in_stack_00000006,(void *)((int)this + 0x5b)),
                         (HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  if (BVar1 == 0x0)
  {
    local_1c = *(undefined2 *)((int)this + 0xc8);
    uStack_1a = 0x5632;
    uStack_18 = 0x1008;
    uStack_16 = 0x40000;
    puStack_12 = PTR_DAT_1050_0000_1050_038c;
    uStack_10 = *(undefined2 *)((int)this + 0xc2);
    uStack_e = *(undefined2 *)((int)this + 0xc4);
    uStack_c = *(undefined2 *)((int)this + 0xc6);
    uStack_a = 0x0;
    pvStack_6 = (void *)((int)this + 0x5b);
    uVar2 = RegisterClass16((undefined2 *)CONCAT22(unaff_SS,&local_1c));
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
  undefined2 in_DX;
  uint in_BX;
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
      return CONCAT22(in_DX,uVar6);
    }
    puVar1 = (undefined2 *)((int)*_this + 0x28);
    (*(code *)*puVar1)(unaff_CS,this,wParam_ptr,arg3,lParam,
                       CONCAT22(in_stack_0000000e,msg));
  }
  else
  {
    unaff_CS = 0x1008;
    uVar6 = in_BX;
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



uint __stdcall16far
UI_Control_Get_Window_Text_to_Offset_A_Logic(u32 param_1,char *param_2,int param_3)
{
  uint uVar1;
  undefined2 uVar2;
  u16 local_4;
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  uVar1 = strlen_get_length((char *)CONCAT22(uVar2,(char *)((int)param_1 + 0xa)));
  if (param_3 < (int)uVar1)
  {
    uVar1 = param_3 - 0x1;
  }
  strncpy_fixed_optimized
            (param_2,(char *)CONCAT22(uVar2,(char *)((int)param_1 + 0xa)),uVar1);
  return uVar1;
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



int __stdcall16far far_false_stub(void)
{
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



u16 * __stdcall16far
UI_Base_Object_dtor_Scalar_Deleting_1008_9d02(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer / Resource
// Initializes UI_Manager vtable to 1008:9FB2 and a sub-vtable at offset 0x1C to
// 1008:9FCA.
// Registers global manager instance at 1050:4230.
// Iteratively loads 12 resource objects using global manager at 1050:14CC.
// Registers itself as a resource tracker via global state at 1050:0388.

void * __stdcall16far UI_Manager_ctor(void *this,void *arg2,int arg3)
{
  void *pvVar1;
  undefined2 in_DX;
  int iStack_4;
  
  Build_Site_Object_Base_ctor((long)CONCAT22(arg2,this),arg3);
  *(undefined2 *)((int)this + 0x1c) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x1e) = 0x1008;
  *(undefined2 *)((int)this + 0x1c) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0x1e) = 0x1008;
  *(undefined2 *)((int)this + 0x20) = 0x0;
  zero_init_struct_6bytes((void *)((int)this + 0x52));
  *(undefined2 *)CONCAT22(arg2,this) = 0x9fb2;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x1c) = 0x9fca;
  *(undefined2 *)((int)this + 0x1e) = 0x1008;
  p_GlobalPaletteObject = this;
  PTR_DAT_1050_0000_1050_4232 = arg2;
  memset_far((void *)((int)this + 0x22),(int)arg2,0x0);
  Build_Site_Object_Initialize_Vtable_and_Resource((long)CONCAT22(arg2,this),0x1c0);
  iStack_4 = 0x0;
  do
  {
    pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    *(undefined2 *)((int)this + iStack_4 * 0x4 + 0x22) = pvVar1;
    *(undefined2 *)((int)this + iStack_4 * 0x4 + 0x24) = in_DX;
    iStack_4 += 0x1;
  } while (iStack_4 < 0xc);
  pvVar1 = get_with_lazy_init((void *)(void *)*(undefined4 *)((int)this + 0x22));
  pack_3words_reverse((void *)((int)this + 0x52),(int)arg2,0x0,
                      (0x1e0 - *(int *)((int)pvVar1 + 0x8)) / 0x2 + -0x32);
  if ((void *)CONCAT22(arg2,this) == NULL)
  {
    pvVar1 = NULL;
  }
  else
  {
    pvVar1 = (void *)((int)this + 0x1c);
  }
  Simulator_Add_Resource_Tracker
            ((void *)_PTR_DAT_1050_0000_1050_0388,
             (int)((ulong)_PTR_DAT_1050_0000_1050_0388 >> 0x10),0x50,pvVar1);
  return this;
}
