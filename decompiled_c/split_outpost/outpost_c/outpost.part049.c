/*
 * Source: outpost.c
 * Chunk: 49/117
 * Original lines: 55345-56510
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Object_Initialize_and_Create_Control_Type1_0316(void *param_1)
{
  void *pvVar1;
  uint parent_id;
  uint uVar2;
  long lVar3;
  void *this;
  undefined2 uVar4;
  undefined2 in_stack_0000fff2;
  
  this = (void *)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x1);
  parent_id = (uint)((ulong)lVar3 >> 0x10);
  *(undefined2 *)((int)this + 0xe2) = (int)lVar3;
  *(uint *)((int)this + 0xe4) = parent_id;
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0xe2) + 0x16) =
       *(undefined2 *)((int)this + 0xea);
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0xe2) + 0x12) =
       *(undefined2 *)((int)this + 0xee);
  Resource_Category1_Update_String_Logic
            ((void *)(void *)*(undefined4 *)((int)this + 0xe2),
             (int)((ulong)*(undefined4 *)((int)this + 0xe2) >> 0x10));
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff2,0x12));
  uVar2 = parent_id | (uint)pvVar1;
  if (uVar2 != 0x0)
  {
    pvVar1 = UI_Control_Type1_ctor_init_Res1_logic_04f6(pvVar1,parent_id);
    *(undefined2 *)((int)this + 0xe6) = pvVar1;
    *(uint *)((int)this + 0xe8) = uVar2;
    return;
  }
  *(undefined4 *)((int)this + 0xe6) = 0x0;
  return;
}



void __stdcall16far UI_Object_Post_Message_from_Resource_E2_03b2(undefined4 param_1)
{
  undefined4 uVar1;
  undefined4 in_stack_0000fff6;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe2);
  PostMessage16(0x0,0x0,*(ushort *)((int)uVar1 + 0x16),
                (long)CONCAT22((int)((ulong)in_stack_0000fff6 >> 0x10),g_ParentHWND));
  return;
}



void __stdcall16far UI_Object_Post_Message_from_Resource_E2_03d6(undefined4 param_1)
{
  undefined4 uVar1;
  undefined4 in_stack_0000fff6;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe2);
  PostMessage16(0x0,0x0,*(ushort *)((int)uVar1 + 0x16),
                (long)CONCAT22((int)((ulong)in_stack_0000fff6 >> 0x10),g_ParentHWND));
  return;
}



void __stdcall16far UI_Object_Post_Message_from_Resource_E2_03fa(undefined4 param_1)
{
  undefined4 uVar1;
  undefined4 in_stack_0000fff6;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe2);
  PostMessage16(0x0,0x0,*(ushort *)((int)uVar1 + 0x16),
                (long)CONCAT22((int)((ulong)in_stack_0000fff6 >> 0x10),g_ParentHWND));
  return;
}



// Simple wrapper that passes an internal component pointer (offset 0xE6) to function
// 065E.

void __stdcall16far UI_Component_Wrapper_Call_065e_041e(void *context)
{
  undefined2 in_stack_00000006;
  
  UI_Component_OnPaint_Render_Internal_Bitmap_v2
            ((void *)(void *)*(undefined4 *)((int)context + 0xe6));
  return;
}



void * __stdcall16far
UI_Transaction_Item_Subclass_dtor_Scalar_Deleting_0434
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Transaction_Item_Subclass_dtor_Internal_Cleanup_logic_022c(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for UI Control Type 1 (Resource ID 1). Initializes base object and sets
// vtable to 0x75A. Loads additional viewport data from resource 0x48.

void * __stdcall16far
UI_Control_Type1_ctor_init_Res1_logic_04f6(void *this,int parent_id)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  int *out1;
  long lVar4;
  undefined2 in_stack_00000008;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x4) = in_stack_00000008;
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *_this = 0x75a;
  *(undefined2 *)((int)this + 0x2) = 0x1020;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x1);
  uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
  *(undefined2 *)((int)this + 0x6) = (int)lVar4;
  *(undefined2 *)((int)this + 0x8) = uVar3;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x6) + 0x4);
  (*(code *)*puVar1)(0x1010,*(undefined2 *)((int)this + 0x6),uVar3,0x0,this,parent_id);
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  out1 = (int *)((ulong)lVar4 >> 0x10);
  iVar2 = (int)lVar4;
  *(undefined2 *)((int)this + 0xa) = *(undefined2 *)(iVar2 + 0xa);
  *(undefined2 *)((int)this + 0xc) = *(undefined2 *)(iVar2 + 0xc);
  unpack_word_pair((void *)(iVar2 + 0xe),out1,(int *)((int)this + 0x10));
  return this;
}



// Internal destructor for UI Control Type 1. Removes the component from its parent
// container and reverts vtables.

void __stdcall16far UI_Control_Type1_dtor_Internal_Cleanup_logic_05d6(void *this)
{
  astruct_395 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0x75a;
  *(undefined2 *)((int)this + 0x2) = 0x1020;
  if (*(long *)((int)this + 0x6) != 0x0)
  {
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this + 0x6),
               (long)CONCAT22(in_stack_00000006,this));
  }
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// State change handler that posts a command message to the main UI window based on
// internal component state.

void __stdcall16far
UI_Component_Handle_State_Change_Post_Message_061c(void *context,int state)
{
  void *uVar2;
  int in_stack_00000008;
  undefined4 in_stack_0000fff6;
  
  if (in_stack_00000008 == 0x1)
  {
    *(undefined4 *)((int)context + 0x6) = 0x0;
    return;
  }
  if (in_stack_00000008 != 0x2)
  {
    return;
  }
  PostMessage16(0x0,0x0,*(ushort *)((int)*(undefined4 *)((int)context + 0x6) + 0x16),
                (long)CONCAT22((int)((ulong)in_stack_0000fff6 >> 0x10),g_ParentHWND));
  return;
}



// WM_PAINT handler for a UI component. Renders a background color if the width is >
// 640, then renders an internal bitmap and palette.

void __stdcall16far UI_Component_OnPaint_Render_Internal_Bitmap_v2(void *context)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  HBRUSH16 h_brush16;
  HPALETTE16 HVar4;
  astruct_394 *iVar3;
  HDC16 unaff_DI;
  void *unaff_SS;
  undefined2 in_stack_00000006;
  HDC16 local_24;
  undefined1 local_22 [0x20];
  
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)((int)context + 0x4));
  if (0x280 < *(int *)((int)context + 0xa))
  {
    h_brush16 = CreateSolidBrush16(0x70b);
    FillRect16(h_brush16,(void *)CONCAT22(local_24,unaff_SS),unaff_DI);
    DeleteObject16(h_brush16);
  }
  puVar1 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)((int)context + 0x6) + 0xe)
  ;
  uVar3 = *puVar1;
  puVar2 = (undefined2 *)((int)uVar3 + 0x8);
  HVar4 = (*(code *)*puVar2)(0x1538,(undefined4 *)puVar1,(int)((ulong)puVar1 >> 0x10),
                             &local_24);
  puVar2 = (undefined2 *)((int)uVar3 + 0x4);
  (*(code *)*puVar2)(0x1538,puVar1,*(undefined2 *)((int)context + 0x10),
                     *(undefined2 *)((int)context + 0xe),&local_24);
  HVar4 = SelectPalette16(0x0,HVar4,local_24);
  DeleteObject16(HVar4);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)context + 0x4));
  return;
}



void * __stdcall16far
UI_Control_Type1_dtor_Scalar_Deleting_0734(void *param_1,u16 param_2,byte param_3)
{
  UI_Control_Type1_dtor_Internal_Cleanup_logic_05d6(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for UI Transaction Item Type 8. Initializes base class and sets field
// 0xF2. Sets vtable to 0x81A.

void * __stdcall16far
UI_Transaction_Item_Type8_ctor_init
          (undefined2 *param_1,undefined4 param_2,undefined4 *param_3,undefined2 param_4
          ,undefined4 param_5,undefined4 param_6)
{
  undefined2 *puVar2;
  void *pvVar3;
  astruct_393 *puVar1;
  
  UI_Transaction_Item_Subclass_ctor_init_logic_01d8
            (param_1,param_2,param_4,param_5,param_6);
  pvVar3 = (void *)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)param_1;
  puVar2[0x78] = 0x0;
  *(undefined4 *)(puVar2 + 0x79) = *param_3;
  *param_1 = 0x81a;
  puVar2[0x1] = 0x1020;
  return pvVar3;
}



// Handles the 'Show' event for Type 8 items. Plays a sound effect via the Event Manager
// and marks the item as shown.

void __stdcall16far UI_Transaction_Item_Type8_OnShow_Logic(void *context)
{
  astruct_392 *iVar1;
  void *unaff_SS;
  undefined2 in_stack_00000006;
  undefined1 local_16 [0x14];
  
  UI_Component_Wrapper_Call_065e_041e(context);
  if (*(int *)((int)context + 0xf0) == 0x0)
  {
    *(undefined2 *)((int)context + 0xf0) = 0x1;
    UI_Event_Manager_ctor(local_16);
    media_play_from_resource_ptr_wrapper(local_16,unaff_SS);
    UI_Event_Manager_dtor(local_16);
  }
  return;
}



// Scalar deleting destructor for UI Transaction Item Type 8.

void * __stdcall16far
UI_Transaction_Item_Type8_dtor_Scalar_Deleting(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Transaction_Item_Subclass_dtor_Internal_Cleanup_logic_022c(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the specialized 'DanBrotherton' window component. Plays sound 0x1D4
// upon initialization. Sets vtable to 0xB0E.

void * __stdcall16far
UI_DanBrotherton_Window_ctor_init_logic(undefined2 *param_1,void *param_2)
{
  astruct_391 *puVar1;
  undefined2 *this;
  void *arg2;
  
  this = (undefined2 *)param_1;
  arg2 = (void *)((ulong)param_1 >> 0x10);
  UI_DanBrotherton_Window_ctor(this,(int)arg2,0x1,param_2);
  this[0x73] = 0x0;
  *(undefined4 *)(this + 0x74) = 0x0;
  *param_1 = 0xb0e;
  this[0x1] = 0x1020;
  media_play_from_resource_id_shorthand
            ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
  return arg2;
}



// Internal destructor for the 'DanBrotherton' window. Ensures any child dialogs are
// closed by sending a WM_COMMAND(1) message. Reverts vtable pointers.

void __stdcall16far UI_DanBrotherton_Window_dtor_Internal_Cleanup_logic_08fe(void *this)
{
  HWND16 hwnd;
  BOOL16 BVar1;
  astruct_390 *puVar2;
  undefined2 in_stack_00000006;
  HWND16 HVar2;
  
  *_this = 0xb0e;
  *(undefined2 *)((int)this + 0x2) = 0x1020;
  if (*(long *)((int)this + 0xe8) != 0x0)
  {
    hwnd = *(HWND16 *)((int)*(undefined4 *)((int)this + 0xe8) + 0x6);
    HVar2 = hwnd;
    BVar1 = IsWindow16(hwnd);
    if (BVar1 != 0x0)
    {
      SendMessage16(0x0,0x0,0x1,CONCAT22(HVar2,hwnd));
    }
    *(undefined4 *)((int)this + 0xe8) = 0x0;
  }
  UI_Control_Sub_dtor_logic((void *)((int)this + 0xd2));
  *_this = 0x380a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Helper logic to close the active child dialog associated with the 'DanBrotherton'
// window.

void __stdcall16far UI_DanBrotherton_Window_Close_Child_Dialog_Logic_097e(void *this)
{
  astruct_389 *iVar1;
  undefined2 in_stack_00000006;
  undefined4 in_stack_0000fff4;
  
  if (*(int *)((int)this + 0xea) != 0x0 || *(int *)((int)this + 0xe8) != 0x0)
  {
    SendMessage16(0x0,0x0,0x1,
                  CONCAT22((int)((ulong)in_stack_0000fff4 >> 0x10),
                           *(undefined2 *)((int)*(undefined4 *)((int)this + 0xe8) + 0x6)
                          ));
    *(undefined4 *)((int)this + 0xe8) = 0x0;
  }
  return;
}



void __stdcall16far UI_Window_Initialize_and_Create_Control_Type7_09ba(void *param_1)
{
  void *pvVar1;
  uint in_DX;
  uint uVar2;
  void *this;
  undefined2 uVar3;
  undefined2 in_stack_0000fffa;
  
  this = (void *)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xe));
  uVar2 = in_DX | (uint)pvVar1;
  if (uVar2 != 0x0)
  {
    pvVar1 = UI_Control_Type7_ctor_init_Res7_logic_0baa(pvVar1,in_DX);
    *(undefined2 *)((int)this + 0xe2) = pvVar1;
    *(uint *)((int)this + 0xe4) = uVar2;
    return;
  }
  *(undefined4 *)((int)this + 0xe2) = 0x0;
  return;
}



void __stdcall16far UI_Window_Cleanup_and_Destroy_SubObject_E2_0a0c(void *param_1)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 uVar3;
  void *this;
  
  this = (void *)param_1;
  UI_Window_Destroy_Logic(this);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined4 *)*(int *)((int)this + 0xe2);
  iVar2 = *(int *)((int)this + 0xe4);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1008,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)this + 0xe2) = 0x0;
  *(undefined2 *)((int)this + 0xe6) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Complex_Control_OnPaint_and_Spawn_SubDialog_6_0a52(undefined4 param_1)
{
  int iVar1;
  undefined2 uVar2;
  void *pvVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  UI_Component_Default_OnPaint_Handler_0c3e(*(long *)(iVar1 + 0xe2));
  if (*(int *)(iVar1 + 0xe6) == 0x0)
  {
    *(undefined2 *)(iVar1 + 0xe6) = 0x1;
    *(undefined2 *)((int)(void *)_p_UISubDialogTable + 0xae) = 0x99;
    pvVar3 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                       (_p_UISubDialogTable,*(uint16_t *)(iVar1 + 0x8),0x6);
    *(undefined2 *)(iVar1 + 0xe8) = (void *)pvVar3;
    *(undefined2 *)(iVar1 + 0xea) = (int)((ulong)pvVar3 >> 0x10);
  }
  return;
}



void __stdcall16far UI_Complex_Control_Handle_Palette_Change_0aa6(u32 param_1)
{
  UI_Component_Handle_Palette_Change_and_Invalidate_0cd2(*(long *)((int)param_1 + 0xe2))
  ;
  return;
}



void __stdcall16far
UI_Complex_Control_Conditional_VCall_10_at_E8_abc(undefined4 param_1,undefined2 param_2)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((int)param_1 + 0xe6) != 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xe8) + 0x10);
    (*(code *)*puVar1)();
  }
  return;
}



void * __stdcall16far
UI_DanBrotherton_Window_dtor_Scalar_Deleting_0ae8
          (void *param_1,u16 param_2,byte param_3)
{
  UI_DanBrotherton_Window_dtor_Internal_Cleanup_logic_08fe(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for UI Control Type 7 (Resource ID 7). Initializes base object and sets
// vtable to 0xDBC. Loads additional resource info from resource 0x48.

void * __stdcall16far
UI_Control_Type7_ctor_init_Res7_logic_0baa(void *this,int parent_id)
{
  long lVar1;
  undefined2 in_stack_00000008;
  int *out2;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x4) = in_stack_00000008;
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  *_this = 0xdbc;
  *(undefined2 *)((int)this + 0x2) = 0x1020;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x7);
  *(undefined2 *)((int)this + 0x6) = (int)lVar1;
  *(undefined2 *)((int)this + 0x8) = (int)((ulong)lVar1 >> 0x10);
  out2 = (int *)((int)this + 0xc);
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  unpack_word_pair((void *)((int)lVar1 + 0xe),(int *)((ulong)lVar1 >> 0x10),out2);
  return this;
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



// Scalar deleting destructor for objects using the base vtable at 0x3AB0.

void * __stdcall16far Base_Object_dtor_Scalar_Deleting_v3ab0_0d82(void *this,byte flags)
{
  undefined2 uVar1;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  uVar1 = (undefined2)((ulong)_this >> 0x10);
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Constructor for the 'PC' popup menu. Initializes vtable 0x1384, loads 'PCPOPMENU'
// resource, and initializes children.

long __stdcall16far
UI_PC_PopupMenu_ctor_init(astruct_387 *param_1,undefined2 param_2,undefined4 param_3)
{
  astruct_387 *uVar3;
  undefined2 uVar1;
  
  UI_Popup_View_Base_ctor_init_logic(param_1,0x4256,0x1050,param_2,param_3);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (astruct_387 *)param_1;
  *(undefined4 *)((int)&uVar3->field234_0xef + 0x3) = 0x0;
  *(undefined4 *)((int)&uVar3->field235_0xf3 + 0x3) = 0x0;
  *(undefined2 *)((int)&uVar3[0x1].field0_0x0 + 0x1) = 0x0;
  param_1->field0_0x0 = 0x1384;
  uVar3->field1_0x2 = 0x1020;
  strcpy_optimized((char *)CONCAT22(uVar1,&uVar3->field_0x5b),s_VrMode_1050_4260);
  *(undefined4 *)((int)&uVar3->field167_0xa9 + 0x3) = 0x44c00000;
  UI_PC_PopupMenu_Initialize_Children_and_State(uVar3,uVar1);
  return (long)param_1;
}



// Wrapper that performs internal cleanup for the PC popup menu component.

void __stdcall16far UI_PC_PopupMenu_Internal_Cleanup_Wrapper(long context)
{
  UI_Component_Update_Internal_Rect_from_Window_Bounds_7a50((void *)context);
  UI_Component_Internal_Resource_Cleanup_logic(context);
  return;
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



void __stdcall16far
UI_PC_PopupMenu_Handle_MouseDown_and_Dispatch_0e8e
          (void *param_1,int param_2,int param_3)
{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = UI_PC_PopupMenu_Handle_MouseDown_Interaction(param_1,param_2,param_3);
  if (iVar2 == 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x4) + 0x5c);
    (*(code *)*puVar1)();
  }
  return;
}



// WARNING: Variable defined which should be unmapped: local_c
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char * __stdcall16far UI_Grid_Control_Action_Dispatcher_0ec4(u32 *param_1,char *param_2)
{
  undefined2 *puVar1;
  undefined1 uVar2;
  char cVar3;
  u32 *puVar4;
  void *pvVar5;
  char *pcVar6;
  HWND16 in_DX;
  undefined2 extraout_DX;
  undefined2 uVar7;
  uint in_BX;
  void *pvVar8;
  char *pcVar9;
  ushort w_param;
  undefined2 uVar10;
  int action;
  u32 local_c;
  
  pcVar9 = (char *)ZEXT24(param_2);
  puVar4 = (u32 *)param_1;
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == (char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x1c)
  {
    pvVar8 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x30);
    String_Wrapper_Object_Get_String_Logic((void *)pvVar8);
    puVar1 = (undefined2 *)((int)*param_1 + 0x14);
    (*(code *)*puVar1)();
    uVar7 = extraout_DX;
    pcVar6 = String_Wrapper_Object_Get_String_Logic((void *)pvVar8);
    pcVar9 = (char *)ZEXT24(pcVar6);
    Simulator_Set_Entity_Name_by_Resource_Logic_maybe
              ((void *)(void *)*(undefined4 *)((int)puVar4 + 0xf2),
               (char *)((ulong)*(undefined4 *)((int)puVar4 + 0xf2) >> 0x10));
    return (char *)CONCAT22(uVar7,(char *)pcVar9);
  }
  if (param_2 < (char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x1d)
  {
    if (param_2 == (char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x14)
    {
      action = 0x3;
      pcVar9 = (char *)0xf3;
    }
    else
    {
      if ((char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x14 < param_2)
      goto switchD_1020_0feb_caseD_0;
      cVar3 = (char)param_2;
      uVar2 = (undefined1)((uint)param_2 >> 0x8);
      if (cVar3 == 'o')
      {
        pvVar5 = Resource_Manager_Load_Resource_Object_Logic
                           ((void *)_p_GlobalResourceManager,
                            (int)((ulong)_p_GlobalResourceManager >> 0x10));
        pcVar6 = (char *)WinHelp16(0x28,0x0,(void *)CONCAT22(pvVar5,(void *)0x1),in_DX);
        return (char *)CONCAT22(in_DX,pcVar6);
      }
      if (cVar3 == 'r')
      {
        pvVar8 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                   (_p_ResourceManager,0x30);
        String_Wrapper_Object_Set_String_Logic
                  ((void *)pvVar8,(char *)((ulong)pvVar8 >> 0x10));
        pcVar9 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                           (_p_UISubDialogTable,(uint16_t)puVar4[0x2],0x3);
        return pcVar9;
      }
      pcVar9 = (char *)(ulong)CONCAT11(uVar2,cVar3 + '\x0f');
      if ((char)(cVar3 + '\x0f') == '\0')
      {
        action = 0x1;
      }
      else
      {
        pcVar9 = (char *)(ulong)CONCAT11(uVar2,cVar3 + '\x0e');
        if ((char)(cVar3 + '\x0e') != '\0') goto switchD_1020_0feb_caseD_0;
        action = 0x2;
      }
    }
    UI_Grid_16_Control_Update_Logic(*(long *)((int)puVar4 + 0xf2),action);
    return (char *)CONCAT22(in_DX,(char *)pcVar9);
  }
  pcVar6 = param_2 + -0x129;
  pcVar9 = (char *)ZEXT24(pcVar6);
  if ((char *)((int)(u16 *)&p_LastAllocatedBlock + 0x1U) < pcVar6)
  {
switchD_1020_0feb_caseD_0:
    return (char *)CONCAT22(in_DX,(char *)pcVar9);
  }
  pcVar9 = (char *)(ulong)in_BX;
  switch(pcVar6)
  {
  default:
    goto switchD_1020_0feb_caseD_0;
  case (char *)0x1:
    uVar10 = (undefined2)puVar4[0x2];
    w_param = 0xf012;
    break;
  case (char *)0x3:
    uVar10 = (undefined2)puVar4[0x2];
    w_param = 0xf020;
  }
  pcVar6 = (char *)PostMessage16(0x0,0x0,w_param,CONCAT22((undefined2)local_c,uVar10));
  return (char *)CONCAT22(in_DX,pcVar6);
}



// Simple helper to enable/disable menu item index 3 in a Win16 menu.

void __stdcall16far UI_Menu_Enable_Item_3_Helper(void)
{
  int in_stack_0000000a;
  HMENU16 in_stack_0000000c;
  
  if (in_stack_0000000a != 0x0)
  {
    return;
  }
  EnableMenuItem16(0x400,0x3,in_stack_0000000c);
  return;
}



// Wrapper that triggers an update on an internal sub-component of the PC popup menu.

void __stdcall16far UI_PC_PopupMenu_Trigger_SubComponent_Update_Wrapper(long context)
{
  UI_Component_OnPaint_Render_Internal_Bitmap_v3_15de(*(long *)((int)context + 0xf6));
  return;
}



// Cleans up internal GDI icons and resource-managed bitmaps for a UI component.

void __stdcall16far UI_Component_Internal_Resource_Cleanup_logic(long context)
{
  u32 *puVar1;
  int iVar2;
  astruct_386 *uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)context >> 0x10);
  uVar3 = (astruct_386 *)context;
  DestroyIcon16(uVar3->field193_0xc2);
  uVar3->field193_0xc2 = 0x0;
  uVar3->field8_0x8 = 0x0;
  puVar1 = uVar3->field241_0xf6;
  iVar2 = uVar3->field242_0xf8;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1538,puVar1,iVar2,0x1);
  }
  (&uVar3->field241_0xf6)[0x0] = NULL;
  (&uVar3->field241_0xf6)[0x1] = NULL;
  Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)uVar3->field240_0xf2);
  uVar3->field240_0xf2 = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes children controls (IDs 0xF1, 0xF2, 0xF3) and internal state for the PC
// popup menu. Sets window position and triggers an update.

void __stdcall16far UI_PC_PopupMenu_Initialize_Children_and_State(undefined4 *param_1)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  HICON16 HVar5;
  int16_t *piVar6;
  int in_DX;
  void *pvVar7;
  int extraout_DX;
  int iVar8;
  undefined2 unaff_SI;
  long lVar9;
  int16_t *piVar10;
  undefined2 uVar11;
  undefined4 *this;
  undefined2 uVar12;
  
  this = (undefined4 *)param_1;
  uVar12 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x42));
  pvVar7 = NULL;
  if (in_DX != 0x0 || pvVar3 != NULL)
  {
    pvVar7 = UI_Complex_Control_ctor();
  }
  pvVar4 = allocate_memory(CONCAT22(unaff_SI,0x42));
  pvVar3 = NULL;
  if (pvVar7 != NULL || pvVar4 != NULL)
  {
    pvVar3 = UI_Complex_Control_ctor();
  }
  pvVar7 = allocate_memory(CONCAT22(unaff_SI,0x42));
  if (pvVar3 != NULL || pvVar7 != NULL)
  {
    UI_Complex_Control_ctor();
  }
  lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2d);
  uVar11 = (undefined2)((ulong)lVar9 >> 0x10);
  *(undefined2 *)((int)this + 0xf2) = (int)lVar9;
  *(undefined2 *)(this + 0x3d) = uVar11;
  *(undefined2 *)(this + 0x38) = *(undefined2 *)((int)this + 0xf2);
  *(undefined2 *)((int)this + 0xe2) = uVar11;
  HVar5 = LoadIcon16(s_PLNTICON_1050_4267,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  *(HICON16 *)((int)this + 0xc2) = HVar5;
  uVar11 = (undefined2)*(undefined4 *)((int)this + 0xf2);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xf2) + 0x30);
  (*(code *)*puVar1)(0x1538,uVar11,
                     (int)((ulong)*(undefined4 *)((int)this + 0xf2) >> 0x10),HVar5);
  iVar8 = extraout_DX;
  pvVar7 = allocate_memory(CONCAT22(uVar11,0x24));
  if (iVar8 == 0x0 && pvVar7 == NULL)
  {
    *(undefined4 *)((int)this + 0xf6) = 0x0;
  }
  else
  {
    lVar9 = UI_PC_PopupMenu_Internal_SubComponent_ctor
                      ((long)CONCAT22(iVar8,pvVar7),(long)param_1);
    *(undefined2 *)((int)this + 0xf6) = (int)lVar9;
    *(int *)(this + 0x3e) = (int)((ulong)lVar9 >> 0x10);
  }
  this[0x3a] = *(undefined4 *)((int)this + 0xf6);
  lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  lVar9 = UI_Component_Get_FarPtr_at_Offset_16_Logic(lVar9);
  UI_Element_Generate_HitTest_Rects_Logic
            ((void *)(void *)*(undefined4 *)((int)this + 0xf2),lVar9);
  lVar9 = UI_Element_Get_Resource_Data_at_Offset_6C_Logic
                    ((void *)(void *)*(undefined4 *)((int)this + 0xf2));
  uVar2 = *param_1;
  puVar1 = (undefined2 *)((int)uVar2 + 0x14);
  (*(code *)*puVar1)(0x1010,this,uVar12,0x0,(int)lVar9,(int)((ulong)lVar9 >> 0x10));
  uVar11 = 0x1;
  puVar1 = (undefined2 *)((int)uVar2 + 0x10);
  (*(code *)*puVar1)();
  Simulator_Register_Resource_500_Tracker_Logic(*(long *)((int)this + 0xf2));
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xf2) + 0x10);
  piVar10 = (int16_t *)
            (*(code *)*puVar1)(0x1010,*(undefined4 *)((int)this + 0xf2),param_1,uVar11);
  uVar11 = (undefined2)((ulong)piVar10 >> 0x10);
  piVar6 = (int16_t *)piVar10;
  MoveWindow16(0x1,piVar6[0x3],piVar6[0x2],piVar6[0x1],*piVar10,*(HWND16 *)(this + 0x2))
  ;
  UpdateWindow16(*(HWND16 *)(this + 0x2));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles MouseDown events for the PC popup menu. Performs hit testing against its
// child controls and triggers associated virtual actions.

int __stdcall16far
UI_PC_PopupMenu_Handle_MouseDown_Interaction(void *context,int x,int y)
{
  undefined2 *puVar1;
  void *src;
  int iVar2;
  HCURSOR16 h_cursor;
  HCURSOR16 h_cursor_00;
  int *out1;
  void *pvVar3;
  int in_stack_0000000a;
  int local_12;
  int local_10;
  void *pvStack_e;
  undefined4 *puStack_a;
  int local_6;
  int iStack_4;
  
  pvVar3 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x4000001);
  if ((int)((ulong)pvVar3 >> 0x10) == 0x0 && (void *)pvVar3 == NULL)
  {
    local_6 = in_stack_0000000a;
    iStack_4 = y;
    puStack_a = (undefined4 *)
                Resource_Tracker_Get_Data_Logic
                          ((void *)(void *)*(undefined4 *)((int)context + 0xf2));
    out1 = (int *)((ulong)*(undefined4 *)((int)context + 0xf2) >> 0x10);
    src = (void *)((int)*(undefined4 *)((int)context + 0xf2) + 0x76);
    pvStack_e = (void *)CONCAT22(out1,src);
    unpack_word_pair(src,out1,&local_12);
    local_6 -= local_10;
    iStack_4 -= local_12;
    iVar2 = UI_HitTest_Rect_Collection_Logic
                      ((void *)(void *)*(undefined4 *)((int)context + 0xf2),
                       (POINT16 *)((ulong)*(undefined4 *)((int)context + 0xf2) >> 0x10))
    ;
    if (iVar2 != -0x1)
    {
      h_cursor = LoadCursor16((void *)0x7f02,0x0);
      h_cursor_00 = SetCursor16(h_cursor);
      puVar1 = (undefined2 *)((int)*puStack_a + 0x4);
      (*(code *)*puVar1)(0x1538,(undefined4 *)puStack_a,(int)((ulong)puStack_a >> 0x10),
                         iVar2,iVar2 >> 0xf,iVar2,0x2,h_cursor_00,h_cursor);
      UI_Call_Virtual_Refresh_maybe(context);
      SetCursor16(h_cursor_00);
    }
  }
  return 0x1;
}



u16 * __stdcall16far
UI_Popup_View_Base_dtor_Scalar_Deleting_135e(u16 *param_1,u16 param_2,byte param_3)
{
  UI_Popup_View_Base_dtor_Internal_Cleanup_logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for an internal sub-component of the PC popup menu. Sets up GDI contexts
// and realizes palettes.

long __stdcall16far
UI_PC_PopupMenu_Internal_SubComponent_ctor(long this_ref,long parent)
{
  void *pvVar1;
  undefined2 *puVar2;
  HDC16 HVar3;
  HPALETTE16 HVar4;
  int iVar5;
  undefined2 uVar6;
  long lVar7;
  void *pvVar8;
  
  UI_SubComponent_Base_ctor_init_metrics_7c1a((void *)this_ref,(void *)parent);
  uVar6 = (undefined2)((ulong)this_ref >> 0x10);
  iVar5 = (int)this_ref;
  *(undefined4 *)(iVar5 + 0x14) = 0x0;
  *(undefined4 *)(iVar5 + 0x18) = 0x0;
  zero_init_struct_6bytes((void *)(iVar5 + 0x1e));
  *(undefined2 *)this_ref = 0x1730;
  *(undefined2 *)(iVar5 + 0x2) = 0x1020;
  lVar7 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2d);
  *(undefined2 *)(iVar5 + 0x14) = (int)lVar7;
  *(undefined2 *)(iVar5 + 0x16) = (int)((ulong)lVar7 >> 0x10);
  lVar7 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x14) + 0x4);
  (*(code *)*puVar2)();
  HVar3 = GetDC16(*(HWND16 *)(iVar5 + 0x4));
  *(HDC16 *)((int)*(undefined4 *)(iVar5 + 0x14) + 0x7c) = HVar3;
  *(undefined4 *)(iVar5 + 0x18) =
       *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x14) + 0x66);
  puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x18) + 0x14);
  pvVar8 = (void *)(*(code *)*puVar2)();
  pvVar1 = (void *)*(undefined4 *)((int)lVar7 + 0xe);
  Palette_Object_Copy_From_Other_Logic((void *)pvVar8,(void *)((ulong)pvVar8 >> 0x10));
  HVar4 = Palette_Object_Select_And_Realize_Wrapper_Far
                    ((void *)pvVar1,(HDC16)((ulong)pvVar1 >> 0x10));
  *(HPALETTE16 *)(iVar5 + 0x1c) = HVar4;
  return this_ref;
}



// Internal destructor for the PC popup menu's sub-component. Cleans up GDI palettes and
// removes item from container.

void __stdcall16far UI_PC_PopupMenu_Internal_SubComponent_dtor(long this_ref)
{
  HPALETTE16 obj;
  astruct_385 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_385 *)this_ref;
  *(undefined2 *)this_ref = 0x1730;
  uVar1->field2_0x2 = 0x1020;
  if (uVar1->field19_0x14 != 0x0)
  {
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)uVar1->field19_0x14,this_ref);
  }
  obj = SelectPalette16(0x0,uVar1->field24_0x1c,
                        *(BOOL16 *)((int)uVar1->field19_0x14 + 0x7c));
  uVar1->field24_0x1c = obj;
  DeleteObject16(obj);
  *(char **)this_ref = (char *)s_0_020_1050_3ab0;
  uVar1->field2_0x2 = 0x1008;
  *(char **)this_ref = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  return;
}
