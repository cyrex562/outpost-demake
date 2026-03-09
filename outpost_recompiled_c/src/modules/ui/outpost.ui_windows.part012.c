/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 12/54
 * Original lines (combined): 48603-50331
 * Boundaries: top-level declarations/definitions only
 */




// Iterates through a component's internal state to determine if any elements are
// active/visible, and updates visibility status accordingly.

void __stdcall16far UI_Component_Update_Visibility_Logic(long src_comp,long dest_comp)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  long lVar4;
  void *in_stack_0000000c;
  ulong uStack_10;
  ulong uStack_c;
  
  bVar3 = false;
  puVar1 = (undefined4 *)*(undefined4 *)((int)dest_comp + 0x4);
  puVar2 = (undefined2 *)((int)*puVar1 + 0x10);
  uStack_c = (*(code *)*puVar2)();
  uStack_10 = 0x0;
  do
  {
    if (uStack_c <= uStack_10)
    {
LAB_1018_579f:
      if (!bVar3)
      {
        if (dest_comp != 0x0)
        {
          (*(code *)*(undefined2 *)*(undefined2 **)dest_comp)();
        }
        dest_comp = 0x0;
      }
      UI_Component_Set_Vector_Tracker_Ptr_6d80(in_stack_0000000c,(void *)dest_comp);
      return;
    }
    puVar2 = (undefined2 *)((int)*puVar1 + 0x4);
    lVar4 = (*(code *)*puVar2)();
    if (lVar4 != 0x0)
    {
      bVar3 = true;
      goto LAB_1018_579f;
    }
    uStack_10 += 0x1;
  } while( true );
}



// Scalar deleting destructor for the UI Building Manager.

long __stdcall16far UI_Building_Manager_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Building_Manager_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the UI Allocation Panel. Initializes base UI component, sets vtable,
// and loads relevant resources (resource ID 0x27). Sets internal name to "Alloc".

void * __stdcall16far
UI_Allocation_Panel_ctor_init(astruct_428 *param_1,undefined2 param_2,void *param_3)
{
  uint16_t uVar2;
  astruct_428 *uVar1;
  void *pvVar3;
  long lVar4;
  
  UI_Panel_Base_ctor_init_logic_7f7a
            (param_1,(void *)CONCAT22(param_2,(void *)0x6),param_3);
  pvVar3 = (void *)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_428 *)param_1;
  uVar1->field233_0xee = 0x0;
  (&uVar1->field234_0xf2)[0x0] = 0x0;
  (&uVar1->field234_0xf2)[0x1] = 0x0;
  uVar1->field236_0xf6 = 0x0;
  *(char **)param_1 = (char *)s_Alloc__s_1050_5a5b + 0x7;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0x5afe;
  uVar1->field226_0xe4 = 0x1018;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x27);
  uVar2 = (uint16_t)((ulong)lVar4 >> 0x10);
  uVar1->field234_0xf2 = (uint16_t)lVar4;
  uVar1->field235_0xf4 = uVar2;
  uVar1->field227_0xe6 = uVar1->field234_0xf2;
  uVar1->field228_0xe8 = uVar2;
  return pvVar3;
}



// Sets the Allocation Panel's vtable and initializes its internal state by calling a
// secondary initialization function.

void __stdcall16far UI_Allocation_Panel_Initialize_Vtable_and_Globals(long this_ref)
{
  astruct_427 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_427 *)this_ref;
  *(char **)this_ref = (char *)s_Alloc__s_1050_5a5b + 0x7;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0x5afe;
  uVar1->field226_0xe4 = 0x1018;
  UI_Panel_Base_dtor_Internal_Cleanup_logic_808e((void *)this_ref);
  return;
}



// Handles WM_TIMER messages for the Allocation Panel. Increments a tick counter and
// posts a completion message (0xCA) to the main window if a threshold is reached.

void __stdcall16far
UI_Allocation_Panel_OnTimer_Tick_Handler_Logic(long this_ref,int timer_id)
{
  astruct_426 *uVar1;
  undefined2 uVar2;
  HWND16 in_stack_0000fff6;
  
  if (timer_id == 0x105)
  {
    uVar2 = (undefined2)((ulong)this_ref >> 0x10);
    uVar1 = (astruct_426 *)this_ref;
    uVar1->field244_0xf6 = uVar1->field244_0xf6 + 0x1;
    if ((int)PTR_p_LastAllocatedBlock_1050_4240 <= uVar1->field244_0xf6)
    {
      PostMessage16(0x0,0x0,0xca,(long)CONCAT22(in_stack_0000fff6,g_ParentHWND));
      return;
    }
    uVar1->field233_0xea = 0x0;
    InvalidateRect16(0x0,(void *)((ulong)uVar1->field8_0x8 << 0x10),in_stack_0000fff6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates the Allocation Panel's state and triggers a repaint of its specific UI
// rectangle if it hasn't been recently updated. Calls virtual functions to sync
// internal data.

int __stdcall16far UI_Allocation_Panel_Update_and_Invalidate_Rect_Logic(long context)
{
  undefined2 *puVar1;
  void *pvVar2;
  astruct_425 *uVar3;
  undefined2 uVar4;
  void *pvVar5;
  
  uVar4 = (undefined2)((ulong)context >> 0x10);
  uVar3 = (astruct_425 *)context;
  pvVar2 = NULL;
  if (*(int *)((int)&uVar3->field236_0xee + 0x2) != 0x0 ||
      *(int *)&uVar3->field236_0xee != 0x0)
  {
    puVar1 = (undefined2 *)((int)*uVar3->field236_0xee + 0x8);
    pvVar2 = (void *)(*(code *)*puVar1)();
  }
  if (uVar3->field233_0xea == 0x0)
  {
    uVar3->field233_0xea = 0x1;
    pvVar5 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                       (_p_UISubDialogTable,uVar3->field8_0x8,
                        *(int *)(uVar3->field241_0xf6 * 0x2 + 0x4238));
    pvVar2 = (void *)pvVar5;
  }
  return (int)pvVar2;
}



void __stdcall16far
UI_Build_Site_Window_Initialize_and_Create_Sprite_598c(void *param_1)
{
  void *pvVar1;
  int reg_dx;
  long lVar2;
  void *this;
  undefined2 uVar3;
  int in_stack_0000fffa;
  u16 local_4;
  
  this = (void *)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  Build_Site_Object_Set_Window_and_DC
            (*(long *)((int)this + 0xf2),*(HWND16 *)((int)this + 0x8));
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x2a));
  if (reg_dx != 0x0 || pvVar1 != NULL)
  {
    lVar2 = UI_Sprite_Component_ctor_init_logic
                      ((long)CONCAT22(reg_dx,pvVar1),*(int *)((int)this + 0x8),
                       in_stack_0000fffa);
    *(undefined2 *)((int)this + 0xee) = (int)lVar2;
    *(undefined2 *)((int)this + 0xf0) = (int)((ulong)lVar2 >> 0x10);
    return;
  }
  *(undefined4 *)((int)this + 0xee) = 0x0;
  return;
}



void __stdcall16far UI_Build_Site_Window_Cleanup_and_Destroy_59f0(void *param_1)
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



void * UI_Allocation_Panel_dtor_Wrapper_5a2e(u16 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)(void *)param_2 + -0xe2));
  pvVar1 = UI_Allocation_Panel_dtor_Scalar_Deleting_5a3c(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Allocation_Panel_dtor_Scalar_Deleting_5a3c(void *param_1,byte param_2)
{
  UI_Allocation_Panel_Initialize_Vtable_and_Globals((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



void __stdcall16far
UI_Control_Handle_State_Reset_and_Invalidate_5d32(u32 param_1,int param_2)
{
  HWND16 unaff_BP;
  void *pvVar1;
  
  pvVar1 = (void *)(param_1 >> 0x10);
  if (param_2 == 0x1)
  {
    *(undefined4 *)((int)param_1 + 0x14) = 0x0;
    return;
  }
  if (param_2 != 0x2)
  {
    return;
  }
  InvalidateRect16(0x0,(void *)CONCAT22(*(undefined2 *)((int)param_1 + 0x4),pvVar1),
                   unaff_BP);
  return;
}



void __stdcall16far UI_Sprite_Component_OnPaint_Logic_5d6c(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  void *pos;
  undefined1 local_22 [0x20];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar3 + 0x4));
  puVar1 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x14) + 0xa);
  UI_Manager_Get_Resource_Ptr_at_Index((void *)(void *)*(undefined4 *)(iVar3 + 0x14));
  Sprite_Object_Restore_To_Bitmap((void *)(void *)*(undefined4 *)(iVar3 + 0x18));
  pos = (void *)((ulong)puVar1 >> 0x10);
  Bitmap_Object_Blit_Transparent_Logic((undefined4 *)puVar1,pos,(void *)(iVar3 + 0x1c));
  puVar2 = (undefined2 *)((int)*puVar1 + 0x4);
  (*(code *)*puVar2)(0x1008,(undefined4 *)puVar1,pos,0x0,CONCAT22(uVar4,iVar3 + 0xa));
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar3 + 0x4));
  return;
}



// Constructor for a manager that coordinates multiple allocation tabs. Initializes base
// object and sets vtable for tab management logic.

long __stdcall16far UI_Allocation_Tab_Manager_ctor_init_logic(long this_ref,int id)
{
  undefined2 uVar1;
  
  UI_SubDialog_Base_ctor_init_7728(this_ref,0x1,0xfd00000,id);
  uVar1 = (undefined2)((ulong)this_ref >> 0x10);
  *(undefined2 *)this_ref = 0x6128;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  *(undefined2 *)((int)this_ref + 0x74) = 0x1;
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for the Allocation Tab Manager. Performs specific cleanup and
// calls the base destructor.

void __stdcall16far UI_Allocation_Tab_Manager_dtor_Internal_Cleanup_logic(long this_ref)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ref = 0x6128;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1018;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ref);
  return;
}



// Retrieves a dialog control handle using an ID stored in the component struct (offset
// 0x6) and sets its window text using the provided string.

void __stdcall16far
UI_Dialog_Set_Control_Text_from_Struct_ID(long context,char *text,HWND16 parent_hwnd)
{
  HWND16 hwnd;
  HWND16 in_stack_0000000c;
  
  hwnd = GetDlgItem16(in_stack_0000000c,*(short *)((int)context + 0x6));
  SetWindowText16(_text,hwnd);
  return;
}



void __stdcall16far UI_Draw_Linear_Scale_Ticks_and_Indicator_Logic_623e(int *param_1)
{
  undefined2 *puVar1;
  void *pvVar2;
  HPEN16 obj;
  HGDIOBJ16 HVar3;
  HBRUSH16 obj_00;
  HGDIOBJ16 obj_01;
  int *range_ptr;
  HPALETTE16 obj_02;
  undefined2 uVar4;
  undefined2 uVar5;
  int *out;
  int value;
  undefined2 uVar6;
  int unaff_SS;
  undefined4 uVar7;
  int index;
  u32 local_46;
  u16 local_42;
  u16 local_40;
  u16 local_3e;
  u16 local_3c;
  u16 local_3a;
  undefined1 local_38 [0x6];
  u32 local_32;
  u32 local_2e;
  u16 local_2a;
  u32 local_28;
  u16 local_24;
  undefined1 local_22 [0x20];
  
  value = (int)((ulong)param_1 >> 0x10);
  out = (int *)param_1;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),out[0x2]);
  local_28 = UI_Component_Get_Value_at_Offset_16_Logic_2((void *)*(void **)(out + 0x3));
  puVar1 = (undefined2 *)((int)*(undefined4 *)local_28 + 0x8);
  uVar7 = (*(code *)*puVar1)(0x1010,(undefined4 *)local_28,(int)(local_28 >> 0x10),
                             &local_24);
  uVar4 = (undefined2)((ulong)uVar7 >> 0x10);
  out[0x8] = (int)uVar7;
  local_2a = *(u16 *)((int)*(undefined4 *)(out + 0x3) + 0x30);
  local_2e = *(u32 *)*(undefined4 *)((int)*(undefined4 *)(out + 0x3) + 0x12);
  local_32 = 0x140000;
  uVar6 = 0x1008;
  zero_init_struct_6bytes(local_38);
  for (local_3a = 0x0; (int)local_3a < (int)local_2a; local_3a += 0x1)
  {
    pvVar2 = get_with_lazy_init((void *)(void *)*(undefined4 *)
                                                 (local_3a * 0x4 + (int)local_2e));
    uVar5 = uVar4;
    Math_Center_Value_in_100_Range_Helper(out,value);
    pack_3words_reverse(local_38,unaff_SS,0x0,(int)local_32);
    Bitmap_Object_Blit_Transparent_Logic
              ((void *)local_28,(void *)(local_28 >> 0x10),local_38);
    index = (int)(local_32 >> 0x10);
    uVar6 = 0x1010;
    UI_Component_Set_Indexed_Rect_at_Offset_1A_Logic
              ((void *)*(void **)(out + 0x3),(int)((ulong)*(void **)(out + 0x3) >> 0x10)
               ,*(int *)((int)pvVar2 + 0x8) + (int)local_32,
               *(int *)((int)pvVar2 + 0x4) + index,(int)local_32,index);
    local_32 = CONCAT22(local_32._2_2_ +
                        (-(uint)(local_3a == 0x0) & 0x5) + 0x14 +
                        *(int *)((int)pvVar2 + 0x4),(undefined2)local_32);
    uVar4 = uVar5;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)local_28 + 0x4);
  (*(code *)*puVar1)(uVar6,(int)local_28,(int)(local_28 >> 0x10),0x0,0x0,&local_24);
  obj = CreatePen16(0x25,0x100,0x1);
  HVar3 = SelectObject16(0x1538,obj);
  obj_00 = CreateSolidBrush16(0x25);
  obj_01 = SelectObject16(0x1538,obj_00);
  UI_Draw_Linear_Scale_Ticks_GDI((long)param_1,local_24);
  range_ptr = UI_Component_Get_Indexed_Rect_Ptr_Logic((void *)*(void **)(out + 0x3));
  UI_Draw_Centering_Indicator_Triangle_at_Midpoint((long)param_1,range_ptr);
  UI_Panel_Initialize_Text_Controls_from_Resource_Batch((long)param_1);
  obj_02 = SelectPalette16(0x0,out[0x8],local_24);
  DeleteObject16(obj_02);
  HVar3 = SelectObject16(0x1538,HVar3);
  DeleteObject16(HVar3);
  HVar3 = SelectObject16(0x1538,obj_01);
  DeleteObject16(HVar3);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),out[0x2]);
  return;
}



// Sets the UI Planet Summary Panel's vtable and performs its specialized initialization
// of global fields and state.

void __stdcall16far UI_Planet_Summary_Panel_Initialize_Vtable_and_Globals(long this_ref)
{
  astruct_420 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_420 *)this_ref;
  *(undefined2 *)this_ref = 0x6880;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0x691c;
  uVar1->field226_0xe4 = 0x1018;
  UI_Panel_Base_dtor_Internal_Cleanup_logic_808e((void *)this_ref);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates the Planet Summary Manager's state and triggers a repaint. Specifically
// handles resource ID 0x16.

int __stdcall16far
UI_Planet_Summary_Manager_Update_and_Invalidate_Logic_Internal(long context)
{
  undefined2 *puVar1;
  void *pvVar2;
  astruct_418 *uVar3;
  undefined2 uVar4;
  void *pvVar5;
  
  uVar4 = (undefined2)((ulong)context >> 0x10);
  uVar3 = (astruct_418 *)context;
  pvVar2 = NULL;
  if (*(int *)((int)&uVar3->field236_0xee + 0x2) != 0x0 ||
      *(int *)&uVar3->field236_0xee != 0x0)
  {
    puVar1 = (undefined2 *)((int)*uVar3->field236_0xee + 0x8);
    pvVar2 = (void *)(*(code *)*puVar1)();
  }
  if (uVar3->field233_0xea == 0x0)
  {
    uVar3->field233_0xea = 0x1;
    pvVar5 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                       (_p_UISubDialogTable,uVar3->field8_0x8,0x16);
    pvVar2 = (void *)pvVar5;
  }
  return (int)pvVar2;
}



// Constructor for the Planet Summary View UI. Creates window, sets DC, and initializes
// its summary-specific internal component.

void __stdcall16far
UI_Planet_Summary_View_ctor_init_Window_and_Child_Component(void *param_1)
{
  void *pvVar1;
  int reg_dx;
  astruct_419 *uVar1;
  long lVar2;
  void *this;
  undefined2 uVar3;
  int in_stack_0000fffa;
  
  this = (void *)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  Build_Site_Object_Set_Window_and_DC
            (*(long *)((int)this + 0xf2),*(HWND16 *)((int)this + 0x8));
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x18));
  if (reg_dx != 0x0 || pvVar1 != NULL)
  {
    lVar2 = UI_Planet_Summary_Child_Component_ctor_init_logic_ResB
                      ((long)CONCAT22(reg_dx,pvVar1),*(int *)((int)this + 0x8),
                       in_stack_0000fffa);
    *(undefined2 *)((int)this + 0xee) = (int)lVar2;
    *(undefined2 *)((int)this + 0xf0) = (int)((ulong)lVar2 >> 0x10);
    return;
  }
  *(undefined4 *)((int)this + 0xee) = 0x0;
  return;
}



void __stdcall16far UI_Window_Cleanup_SubObjects_and_Destroy_681a(void *param_1)
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



void * UI_Planet_Summary_Panel_dtor_Wrapper_684c(u16 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)param_2 + -0xe2));
  pvVar1 = UI_Planet_Summary_Panel_dtor_Scalar_Deleting_685a(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Planet_Summary_Panel_dtor_Scalar_Deleting_685a(void *param_1,byte param_2)
{
  UI_Planet_Summary_Panel_Initialize_Vtable_and_Globals((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Base constructor for windows inherited from the DanBrotherton UI class. Initializes
// vtable to 0x6C66 and sets up internal tracking fields for media playback or
// sub-state.

long __stdcall16far
UI_DanBrotherton_Window_Base_ctor_init_logic
          (undefined2 *param_1,undefined2 param_2,int param_3,undefined2 param_4,
          undefined2 param_5,void *param_6)
{
  astruct_416 *uVar1;
  undefined2 *this;
  int arg2;
  
  this = (undefined2 *)param_1;
  arg2 = (int)((ulong)param_1 >> 0x10);
  UI_DanBrotherton_Window_ctor(this,arg2,param_3,param_6);
  this[0x75] = param_5;
  this[0x76] = param_4;
  this[0x77] = param_2;
  this[0x78] = 0x0;
  *param_1 = 0x6c66;
  this[0x1] = 0x1018;
  this[0x70] = 0x1;
  this[0x71] = 0x0;
  this[0x72] = 0x0;
  *(undefined4 *)(this + 0x73) = 0x1df027f;
  return (long)param_1;
}



// Finalizes a UI component's lifecycle by posting completion messages (WM_COMMAND) and
// optionally destroying a linked window.

void __stdcall16far
UI_Component_Finalize_and_Signal_Complete_Logic_Internal(long context)
{
  BOOL16 BVar1;
  int iVar2;
  undefined2 unaff_BP;
  undefined2 uVar3;
  undefined *l_param;
  
  uVar3 = (undefined2)((ulong)context >> 0x10);
  iVar2 = (int)context;
  if (*(int *)(iVar2 + 0xea) != 0x0)
  {
    l_param = (undefined *)CONCAT22(unaff_BP,g_ParentHWND);
    PostMessage16(0x0,0x0,*(ushort *)(iVar2 + 0xea),(long)l_param);
    unaff_BP = (undefined2)((ulong)l_param >> 0x10);
  }
  PostMessage16(0x0,0x0,0x79,(long)CONCAT22(unaff_BP,g_ParentHWND));
  if (*(int *)(iVar2 + 0xf0) != 0x0)
  {
    BVar1 = IsWindow16(*(HWND16 *)(iVar2 + 0xf0));
    if (BVar1 != 0x0)
    {
      DestroyWindow16(*(HWND16 *)(iVar2 + 0xf0));
      *(undefined2 *)(iVar2 + 0xf0) = 0x0;
    }
  }
  return;
}



// Constructor for UI Control Type 11. Sets vtable and initializes base class with fixed
// parameters (ID 0xB, Res 0x9C, State 0x8B).

long __stdcall16far
UI_Control_Type11_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0xb0000,0x8b009c,param_2,param_3)
  ;
  *param_1 = 0xa27e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 12. Sets vtable and initializes base class with fixed
// parameters (ID 0xC, Res 0x9D, State 0xD0).

long __stdcall16far
UI_Control_Type12_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0xc0000,0xd0009d,param_2,param_3)
  ;
  *param_1 = 0xb562;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 13. Sets vtable and initializes base class with fixed
// parameters (ID 0xD, Res 0x9E, State 0xD1).

long __stdcall16far
UI_Control_Type13_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0xd0000,0xd1009e,param_2,param_3)
  ;
  *param_1 = 0x9822;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 14. Sets vtable and initializes base class with fixed
// parameters (ID 0xE, Res 0x9F, State 0xD2).

long __stdcall16far
UI_Control_Type14_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0xe0000,0xd2009f,param_2,param_3)
  ;
  *param_1 = 0xab06;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 15. Sets vtable and initializes base class with fixed
// parameters (ID 0xF, Res 0xA0, State 0xD4).

long __stdcall16far
UI_Control_Type15_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0xf0000,0xd400a0,param_2,param_3)
  ;
  *param_1 = 0xbdea;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 16. Sets vtable and initializes base class with fixed
// parameters (ID 0x10, Res 0xA1, State 0xDA).

long __stdcall16far
UI_Control_Type16_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x100000,0xda00a1,param_2,param_3);
  *param_1 = 0xa0aa;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 17 (0x11). Initializes base class with resource ID
// 0xA2 and state 0xDC.

long __stdcall16far
UI_Control_Type17_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x110000,0xdc00a2,param_2,param_3);
  *param_1 = 0xb38e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 18 (0x12). Initializes base class with resource ID
// 0xA3 and state 0xD3.

long __stdcall16far
UI_Control_Type18_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x120000,0xd300a3,param_2,param_3);
  *param_1 = 0x964e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 19 (0x13). Initializes base class with resource ID
// 0xA4 and state 0xDB.

long __stdcall16far
UI_Control_Type19_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x130000,0xdb00a4,param_2,param_3);
  *param_1 = 0xa932;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 20 (0x14). Initializes base class with resource ID
// 0xA5 and state 0xA5.

long __stdcall16far
UI_Control_Type20_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x140000,0xa500a5,param_2,param_3);
  *param_1 = 0xbc16;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 21 (0x15). Initializes base class with resource ID
// 0xA7 and state 0xB2.

long __stdcall16far
UI_Control_Type21_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x150000,0xb200a7,param_2,param_3);
  *param_1 = 0x9e3a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 22 (0x16). Initializes base class with resource ID
// 0xA8.

long __stdcall16far
UI_Control_Type22_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x160000,0xa8,param_2,param_3);
  *param_1 = 0xb11e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 23 (0x17). Initializes base class with resource ID
// 0xAF and state 0xC0.

long __stdcall16far
UI_Control_Type23_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x170000,0xc000af,param_2,param_3);
  *param_1 = 0x93de;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 24 (0x18). Initializes base class with resource ID
// 0xB0 and state 0xC1.

long __stdcall16far
UI_Control_Type24_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x180000,0xc100b0,param_2,param_3);
  *param_1 = 0xa6c2;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 25 (0x19). Initializes base class with resource ID
// 0xB1 and state 0x80.

long __stdcall16far
UI_Control_Type25_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x190000,0x8000b1,param_2,param_3);
  *param_1 = 0xb9a6;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 26 (0x1A). Initializes base class with 492ms timer
// (0x1EC), resource ID 0xB2 and state 0xC3.

long __stdcall16far
UI_Control_Type26_ctor_init_timer1EC
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x1a01ec,0xc300b2,param_2,param_3);
  *param_1 = 0x9c66;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 27 (0x1B). Initializes base class with resource ID
// 0xB3 and state 0xC4.

long __stdcall16far
UI_Control_Type27_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x1b0000,0xc400b3,param_2,param_3);
  *param_1 = 0xaf4a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}
