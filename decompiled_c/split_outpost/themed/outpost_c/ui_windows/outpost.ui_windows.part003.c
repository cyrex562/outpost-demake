/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 3/54
 * Original lines (combined): 12330-15944
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Resource
// Performs extensive indirect calls through vtable offsets (0x90, 0x8, 0xC) of active
// view panels.
// References global sub-dialog table at PTR_DAT_1050_5b7c.
// References bitmap resource: tile2.bmp (offset 1050:1538).

void __stdcall16far UI_Switch_Active_View_Panel_Logic(void *this,int panel_id)
{
  undefined2 *puVar1;
  HCURSOR16 HVar2;
  void *pvVar3;
  undefined2 in_DX;
  undefined2 extraout_DX;
  
  HVar2 = LoadCursor16((void *)0x7f02,0x0);
  HVar2 = SetCursor16(HVar2);
  *(int *)((int)this + 0xf2) = *(int *)((int)this + 0xf2) + 0x1;
  if (*(long *)((int)this + 0xee) != 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xee) + 0x90);
    (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)this + 0xee),
                       (int)((ulong)*(undefined4 *)((int)this + 0xee) >> 0x10));
    in_DX = extraout_DX;
  }
  pvVar3 = UI_Get_or_Create_Child_Object_by_ID_Logic(this,panel_id);
  *(undefined2 *)((int)this + 0xee) = pvVar3;
  *(undefined2 *)((int)this + 0xf0) = in_DX;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xee) + 0x8);
  (*(code *)*puVar1)(0x1538,*(undefined2 *)((int)this + 0xee),in_DX);
  if (*(long *)((int)this + 0xe8) != 0x0)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0xc)
    ;
    (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)this + 0xe8),
                       (int)((ulong)*(undefined4 *)((int)this + 0xe8) >> 0x10),0x0);
  }
  UI_Global_Batch_Hide_Active_SubDialogs_b634(_p_UISubDialogTable);
  UI_Window_Bulk_Hide_SubWindows_Logic
            ((void *)(void *)*(undefined4 *)((int)this + 0xf4));
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xee) + 0xc);
  (*(code *)*puVar1)(0x1010,(int)*(undefined4 *)((int)this + 0xee),
                     (int)((ulong)*(undefined4 *)((int)this + 0xee) >> 0x10),0x5);
  BringWindowToTop16(*(HWND16 *)((int)*(undefined4 *)((int)this + 0xee) + 0x8));
  SetCursor16(HVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Performs multiple indirect calls through vtable offsets (0x90, 0xC, 0x98) of
// deactivated and parent view panels.
// References global sub-dialog table at PTR_DAT_1050_5b7c and parent HWND at 1050:0396.

void __stdcall16far UI_Close_Active_View_Panel_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  if ((*(long *)((int)this + 0xee) != 0x0) &&
     (*(int *)((int)this + 0xf2) = *(int *)((int)this + 0xf2) + -0x1,
     *(int *)((int)this + 0xf2) < 0x1))
  {
    uVar5 = *(undefined4 *)((int)this + 0xee);
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xee) + 0x90);
    (*(code *)*puVar1)();
    *(undefined4 *)((int)this + 0xee) = 0x0;
    *(undefined2 *)((int)this + 0xf2) = 0x0;
    if (*(long *)((int)this + 0xe8) != 0x0)
    {
      uVar4 = 0x3;
      uVar3 = *(undefined4 *)((int)this + 0xe8);
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0xc);
      (*(code *)*puVar1)();
      UI_Global_Batch_Show_Active_SubDialogs_b68a(_p_UISubDialogTable);
      UI_Window_Bulk_Show_SubWindows_Logic
                ((void *)(void *)*(undefined4 *)((int)this + 0xf4));
      uVar2 = (undefined2)*(undefined4 *)((int)this + 0xe8);
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0x98);
      (*(code *)*puVar1)(0x1010,uVar2,
                         (int)((ulong)*(undefined4 *)((int)this + 0xe8) >> 0x10),0x1,
                         uVar3,uVar4,uVar5);
      PostMessage16(0x0,0x0,0xfc,(long)CONCAT22(uVar2,g_ParentHWND));
    }
  }
  return;
}



// Targeted Scan Finding: Vtable / Resource
// Performs extensive indirect calls through vtable offsets (0x90, 0x8, 0xC, 0x10) of
// primary and child view panels.
// References bitmap resource: tile2.bmp (offset 1050:1538).

void __stdcall16far UI_Set_Primary_View_Panel_Logic(void *this,int panel_id)
{
  undefined2 *puVar1;
  HCURSOR16 HVar2;
  void *pvVar3;
  undefined2 in_DX;
  undefined2 extraout_DX;
  
  HVar2 = LoadCursor16((void *)0x7f02,0x0);
  HVar2 = SetCursor16(HVar2);
  if (*(long *)((int)this + 0xe8) != 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0x90);
    (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)this + 0xe8),
                       (int)((ulong)*(undefined4 *)((int)this + 0xe8) >> 0x10));
    in_DX = extraout_DX;
  }
  pvVar3 = UI_Get_or_Create_Child_Object_by_ID_Logic(this,panel_id);
  *(undefined2 *)((int)this + 0xe8) = pvVar3;
  *(undefined2 *)((int)this + 0xea) = in_DX;
  if (*(int *)((int)*(undefined4 *)((int)this + 0xe8) + 0xe0) == 0x0)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0x8)
    ;
    (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)this + 0xe8),
                       (int)((ulong)*(undefined4 *)((int)this + 0xe8) >> 0x10));
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0xc)
    ;
    (*(code *)*puVar1)(0x1538,*(undefined4 *)((int)this + 0xe8),0x3);
    *(undefined4 *)((int)this + 0xce) = *(undefined4 *)((int)this + 0xe8);
  }
  else
  {
    *(undefined4 *)((int)this + 0xe8) = 0x0;
    UI_Switch_Active_View_Panel_Logic(this,panel_id);
    *(undefined4 *)((int)this + 0xce) = 0x0;
  }
  SetCursor16(HVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References global pointers in segment 1050:
// - PTR_DAT_1050_0ed0 (Resource manager)
// - PTR_DAT_1050_0396 (Parent HWND)
// Indirectly triggers a view panel switch and world initialization logic.

void __stdcall16far UI_Auto_Load_Game_Logic(void *parent_window)
{
  int iVar1;
  char *pcVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_SI;
  char *unaff_SS;
  char *in_stack_00000006;
  char local_22e [0xa];
  char local_224 [0x108];
  uint uStack_11c;
  char *pcStack_11a;
  HCURSOR16 HStack_112;
  HCURSOR16 HStack_110;
  void *pvStack_10e;
  undefined4 uStack_10a;
  undefined4 uStack_106;
  char local_102 [0x100];
  
  local_102[0x0] = '\0';
  uStack_106 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2)
  ;
  uVar3 = (undefined2)((ulong)uStack_106 >> 0x10);
  iVar1 = (int)uStack_106;
  uStack_10a = (char *)*(undefined4 *)(iVar1 + 0x16);
  iVar4 = *(int *)(iVar1 + 0x18);
  if (iVar4 == 0x0 && (char *)uStack_10a == NULL)
  {
    pcVar2 = UI_Prompt_File_Dialog_Get_Path(parent_window,(int)in_stack_00000006);
    uStack_10a = (char *)CONCAT22(iVar4,pcVar2);
    if (iVar4 == 0x0 && pcVar2 == NULL)
    {
      PostMessage16(0x0,0x0,0x13d,(long)CONCAT22(unaff_SI,g_ParentHWND));
      return;
    }
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_102),(char *)CONCAT22(iVar4,pcVar2)
                    );
    splitpath_far_optimized_with_segments(local_102,unaff_SS,NULL,NULL,NULL);
    if (local_22e[0x0] != '\0')
    {
      strcat_append((char *)CONCAT22(unaff_SS,local_224),
                    (char *)CONCAT22(unaff_SS,local_22e));
    }
    UI_Component_Set_String_at_Offset_16_Logic
              ((void *)uStack_106,(char *)((ulong)uStack_106 >> 0x10));
  }
  else
  {
    pcStack_11a = (char *)*(undefined4 *)(iVar1 + 0x1a);
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_102),pcStack_11a);
    uStack_11c = strlen_get_length((char *)CONCAT22(unaff_SS,local_102));
    if (local_102[uStack_11c - 0x1] != '\\')
    {
      local_102[uStack_11c] = '\\';
      local_102[uStack_11c + 0x1] = '\0';
    }
    strcat_append((char *)CONCAT22(unaff_SS,local_102),uStack_10a);
  }
  if (local_102[0x0] != '\0')
  {
    pvStack_10e = (void *)*(undefined4 *)((int)parent_window + 0xe8);
    UI_DanBrotherton_Window_Close_Child_Dialog_Logic_097e((void *)pvStack_10e);
    UpdateWindow16(*(HWND16 *)((int)*(undefined4 *)((int)parent_window + 0xe8) + 0x8));
    HStack_110 = LoadCursor16((void *)0x7f02,0x0);
    HStack_112 = SetCursor16(HStack_110);
    UI_Prompt_Load_Game_and_Init_World_Logic(parent_window,in_stack_00000006);
    SetCursor16(HStack_112);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References resource manager pointer in segment 1050 (offset 0ed0).
// Prompts for path and triggers save logic.

void __stdcall16far UI_Save_As_Game_Logic(void *parent_window)
{
  int in_DX;
  char *unaff_SS;
  void *pvVar1;
  char *in_stack_00000006;
  char local_210 [0xa];
  char local_206 [0x100];
  char *pcStack_106;
  char local_102 [0x100];
  
  local_102[0x0] = '\0';
  pcStack_106 = UI_Prompt_File_Dialog_Get_Path(parent_window,(int)in_stack_00000006);
  if (in_DX != 0x0 || pcStack_106 != NULL)
  {
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_102),
                     (char *)CONCAT22(in_DX,pcStack_106));
    splitpath_far_optimized_with_segments(local_102,unaff_SS,NULL,NULL,NULL);
    if (local_210[0x0] != '\0')
    {
      strcat_append((char *)CONCAT22(unaff_SS,local_206),
                    (char *)CONCAT22(unaff_SS,local_210));
    }
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    UI_Component_Set_String_at_Offset_12_Logic_2
              ((void *)pvVar1,(char *)((ulong)pvVar1 >> 0x10));
    if (local_102[0x0] != '\0')
    {
      UI_Prompt_Save_Game_Dialog(parent_window,in_stack_00000006);
    }
  }
  return;
}



void __stdcall16far UI_Update_Window_State_Wrapper_Far(void *this)
{
  UI_Call_Virtual_Refresh_maybe(this);
  return;
}



u16 * __stdcall16far UI_Window_dtor_Scalar_Deleting(u16 *param_1,byte param_2)
{
  u16 *ptr;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  ptr = (u16 *)param_1;
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



void * __stdcall16far
UI_Window_Base_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  UI_Window_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Generic_Panel vtable sequence: 1008:389A -> 1008:3AA8 -> 1008:3AB0 ->
// 1008:3AA0.
// Stores parent reference at offset 4.

void * __stdcall16far UI_Generic_Panel_ctor_init(void *this,void *parent)
{
  undefined2 in_stack_00000008;
  
                // Will apply prototype: void __cdecl16near
                // inferred_small_util_392e_lowconf(void);
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x4) = in_stack_00000008;
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_0_76_1050_3aa0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Reverts UI_Generic_Panel vtable sequence during destruction: 1008:3AA0 -> 1008:3AB0
// -> 1008:389A.

void __stdcall16far UI_Generic_Panel_dtor_internal(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_0_76_1050_3aa0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// A standard WM_PAINT handler for erasing or filling a window background with a solid
// color (0x70B). Handles DC acquisition and rectangle filling.

void __stdcall16far UI_Window_Paint_Background_Solid(void *this)
{
  HDC16 HVar1;
  HBRUSH16 h_brush16;
  void *unaff_SS;
  undefined2 in_stack_00000006;
  HDC16 in_stack_0000ffd4;
  undefined1 local_22 [0x20];
  
                // Will apply prototype: void __cdecl16near
                // inferred_parser_39ac_lowconf(void);
  HVar1 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                       *(HWND16 *)((int)this + 0x4));
  h_brush16 = CreateSolidBrush16(0x70b);
  GetClientRect16((undefined1 *)CONCAT22(unaff_SS,&stack0xffd2),
                  *(HWND16 *)((int)this + 0x4));
  FillRect16(h_brush16,(void *)CONCAT22(HVar1,unaff_SS),in_stack_0000ffd4);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)this + 0x4));
  DeleteObject16(h_brush16);
  return;
}



u16 * __stdcall16far UI_Window_dtor_Alt_Scalar_Deleting(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



u16 * __stdcall16far
UI_GenericPanel_Step_dtor_Scalar_Deleting(u16 *param_1,byte param_2)
{
  u16 *ptr;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  ptr = (u16 *)param_1;
  *param_1 = (u16)(char *)s_0_020_1050_3ab0;
  ptr[0x1] = 0x1008;
  *param_1 = (u16)(char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



void * __stdcall16far
UI_GenericPanel_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  UI_Generic_Panel_dtor_internal(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable / Resource
// Initializes UI_SOLWindow vtable to 1008:3B46.
// References string literal "SOLDefaultWindowClass" (1050:01FE).

void * __stdcall16far UI_SOLWindow_ctor(void *this)
{
  void *in_stack_00000006;
  
  UI_Base_Window_ctor(this,in_stack_00000006);
  *(undefined2 *)((int)this + 0xde) = 0x0;
  *_this = (char *)s_0_000_1050_3b46;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  strcpy_optimized((char *)CONCAT22(in_stack_00000006,(char *)((int)this + 0x5b)),
                   s_SOLDefaultWindowClass_1050_01fe);
  return this;
}



// Targeted Scan Finding: Vtable
// Reverts UI_SOLWindow vtable sequence during destruction: 1008:380A -> 1008:389A.

void * __stdcall16far UI_SOLWindow_dtor(void *this,byte flags)
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



// Targeted Scan Finding: Vtable
// Initializes UI_Complex_Control vtable to 1008:3CFC.

void * __stdcall16far
UI_Complex_Control_ctor
          (undefined2 *param_1,void *param_2,undefined2 param_3,int param_4,
          undefined2 param_5,undefined2 param_6,undefined4 param_7,undefined4 param_8)
{
                // Will apply prototype: void __cdecl16near
                // inferred_dispatcher_3bd6_medconf(void);
  UI_Complex_Control_ctor_9fb8
            (param_1,(void *)CONCAT22(param_3,param_2),0x0,param_6,param_7,param_8);
  *(void ***)CONCAT22(param_2,param_1) = (void **)&PTR_s_92_76_1050_3a8d_1050_3cfc;
  param_1[0x1] = 0x1008;
  param_1[0x1b] = 0x0;
  *(undefined4 *)(param_1 + 0x13) = 0x0;
  UI_Dialog_Calculate_Layout_Metrics_9252(param_1);
  UI_Window_Create_and_Subclass_92dc(param_1);
  UI_Window_Move_and_Update_93aa(param_1,(int)param_2,param_4);
  return param_2;
}



void * __stdcall16far UI_Complex_Control_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Complex_Control_dtor_Internal_911e(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Sends a WM_COMMAND message to a window handle stored in the provided structure. The
// command ID is also retrieved from the structure at a fixed offset.

void __stdcall16far UI_Post_Command_Message_From_Struct(void *struct_ptr)
{
  undefined2 unaff_BP;
  undefined2 in_stack_00000006;
  
  PostMessage16(0x0,0x0,*(ushort *)((int)struct_ptr + 0xcc),
                CONCAT22(unaff_BP,*(undefined2 *)((int)struct_ptr + 0xbc)));
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [this + 4] at offset 4, likely invoking a virtual
// refresh/update method.

void __stdcall16far UI_Call_Virtual_Refresh_maybe(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0x4) != 0x0)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x4);
    (*(code *)*puVar1)();
  }
  return;
}



u32 __stdcall16far UI_Component_Get_Active_Resource_Ptr(u32 *param_1)
{
  undefined2 *puVar1;
  int iVar2;
  u32 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (u32 *)param_1;
  if (*(int *)((int)puVar3 + 0x1e) == 0x0)
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x8);
    iVar2 = (*(code *)*puVar1)();
    if (iVar2 == 0x0)
    {
      return 0x0;
    }
  }
  return CONCAT22(*(undefined2 *)((int)puVar3 + 0x6),(int)puVar3[0x1]);
}



uint16_t __stdcall16far
UI_Element_WndProc_Dispatcher
          (u32 *param_1,uint16_t param_2,WPARAM16 param_3,uint16_t param_4,
          HWND16 param_5,u16 param_6,u16 param_7)
{
  undefined2 *puVar1;
  int32_t iVar2;
  uint16_t uVar3;
  LRESULT pvVar4;
  HWND16 hwnd;
  undefined2 uVar5;
  u32 local_6;
  
  uVar5 = 0x1050;
  iVar2 = GetWindowLong16(0x0,param_5);
  local_6 = CONCAT22(param_6,iVar2);
  if (param_6 == 0x0 && iVar2 == 0x0)
  {
    if (param_4 != 0x1)
    {
      pvVar4 = DefWindowProc16((u32 *)CONCAT22(param_2,param_1),param_3,param_4,param_5)
      ;
      return (uint16_t)pvVar4;
    }
    local_6 = *param_1;
    hwnd = (HWND16)(local_6 >> 0x10);
    SetWindowLong16((int32_t)(void *)local_6,hwnd,0x0);
    UI_Element_Set_HWND_If_Null((void *)local_6,hwnd);
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)local_6 + 0x1c);
  uVar3 = (*(code *)*puVar1)(0x1538,(int)local_6,(int)(local_6 >> 0x10),param_1,param_2,
                             param_3,param_4,uVar5);
  return uVar3;
}



u16 * __stdcall16far UI_Window_dtor_Alt2_Scalar_Deleting(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



u32 __stdcall16far UI_Component_Pop_Window_from_List(u32 param_1)
{
  u32 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  int iVar6;
  u32 local_a;
  u32 local_6;
  
  uVar5 = (undefined2)(param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(long *)(iVar3 + 0x4) == 0x0)
  {
    return 0x0;
  }
  puVar2 = (undefined4 *)*(undefined4 *)(iVar3 + 0x4);
  iVar6 = (int)((ulong)puVar2 >> 0x10);
  puVar4 = (undefined4 *)puVar2;
  *(undefined4 *)(iVar3 + 0x4) = puVar4[0x1];
  uVar1 = puVar4[0x2];
  if (iVar6 != 0x0 || puVar4 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar2)();
  }
  *(int *)(iVar3 + 0x8) = *(int *)(iVar3 + 0x8) + -0x1;
  return uVar1;
}



void * __stdcall16far
UI_Control_Sub_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  UI_Control_Sub_dtor_logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Sets UI_Event_Manager vtable to 1008:5FC8.
// Clears global instance pointer at 1050:02A0.

void __stdcall16far UI_Event_Manager_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x5fc8;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  _p_UIPanelContainer = 0x0;
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Targeted Scan Finding: Resource
// References MCI device class names: "waveaudio" (1050:02A4) and "sequencer"
// (1050:02B3).
// Used for identifying media type based on file extension.

HWND16 __stdcall16far
media_mci_open_and_prepare_playback(void *event_manager,char *filename)
{
  int iVar1;
  int16_t iVar2;
  int in_DX;
  char *unaff_SS;
  char *in_stack_00000008;
  HWND16 local_12c [0x6];
  HWND16 HStack_120;
  char local_11e [0x100];
  undefined4 uStack_1e;
  int iStack_1a;
  int iStack_18;
  undefined1 local_16 [0x4];
  uint16_t uStack_12;
  undefined4 uStack_e;
  
                // Will apply prototype: void __cdecl16near
                // inferred_manager_5cfe_medconf(void);
  memset_far(local_16,(int)unaff_SS,0x0);
  iStack_18 = *(int *)((int)*(undefined4 *)((int)event_manager + 0xc) + 0x72);
  iStack_1a = 0x1;
  uStack_1e = 0x105002a4;
  splitpath_far_optimized_with_segments
            ((char *)in_stack_00000008,(char *)((ulong)in_stack_00000008 >> 0x10),NULL,
             NULL,NULL);
  iVar1 = stricmp_case_insensitive_far(local_11e,unaff_SS);
  if (iVar1 == 0x0)
  {
    iStack_18 = *(int *)((int)*(undefined4 *)((int)event_manager + 0xc) + 0x74);
    uStack_1e = 0x105002b3;
    iStack_1a = 0x0;
  }
  if (iStack_18 != 0x0)
  {
    if ((iStack_1a != 0x0) && (*(int *)((int)event_manager + 0x10) != 0x0))
    {
      return 0x0;
    }
    if ((iStack_1a == 0x0) && (*(int *)((int)event_manager + 0x12) != 0x0))
    {
      return 0x0;
    }
    uStack_e = uStack_1e;
    iVar2 = MciSendCommand16((undefined1 *)CONCAT22(unaff_SS,local_16),(void *)0x2200,
                             0x803,0x0);
    if (in_DX == 0x0 && iVar2 == 0x0)
    {
      if (iStack_1a == 0x0)
      {
        *(undefined2 *)((int)event_manager + 0x12) = 0x1;
      }
      else
      {
        *(uint16_t *)((int)event_manager + 0xa) = uStack_12;
        *(undefined2 *)((int)event_manager + 0x10) = 0x1;
      }
      HStack_120 = media_create_mci_notification_window();
      if (HStack_120 == 0x0)
      {
        media_mci_close_and_update_state(event_manager,(int)filename);
        return 0x0;
      }
      memset_far(local_12c,(int)unaff_SS,0x0);
      local_12c[0x0] = HStack_120;
      local_12c[0x1] = 0x0;
      MciSendCommand16((HWND16 *)CONCAT22(unaff_SS,local_12c),(void *)0x1,0x806,
                       uStack_12);
      SetWindowWord16(uStack_12,0x0,HStack_120);
      return HStack_120;
    }
  }
  UI_Container_Notify_Listeners_at_Offset_4_Logic(event_manager,(int)filename);
  return 0x0;
}



// Targeted Scan Finding: Far Pointer / Resource
// Registers window class "MciSoundWindow" (1050:02BD).
// References instance handle at 1050:038C.
// Outputs debug string at far pointer 1050:02CC on registration failure.

HWND16 __stdcall16far media_create_mci_notification_window(void)
{
  char *pcVar1;
  undefined4 *puVar2;
  BOOL16 BVar3;
  uint16_t uVar4;
  HWND16 HVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined2 unaff_SS;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined *puStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  HGDIOBJ16 HStack_1c;
  undefined4 uStack_1a;
  undefined4 *puStack_16;
  undefined4 local_12 [0x4];
  
  puVar8 = local_12;
  pcVar7 = (char *)s_MciSoundWindow_1050_02bd;
  for (iVar6 = 0x3; iVar6 != 0x0; iVar6 += -0x1)
  {
    puVar2 = puVar8;
    puVar8 = puVar8 + 0x1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 0x4;
    *puVar2 = *(undefined4 *)pcVar1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)pcVar7;
  *(char *)((int)puVar8 + 0x2) = pcVar7[0x2];
  local_2c = 0x2000;
  uStack_2a = 0x5f44;
  uStack_28 = 0x1008;
  uStack_24 = 0x2;
  puStack_22 = PTR_DAT_1050_0000_1050_038c;
  uStack_20 = 0x0;
  uStack_1e = 0x0;
  uStack_26 = 0x0;
  HStack_1c = GetStockObject16(0x0);
  uStack_1a = 0x0;
  puStack_16 = local_12;
  BVar3 = GetClassInfo16((undefined2 *)CONCAT22(unaff_SS,&local_2c),
                         (undefined4 *)CONCAT22(unaff_SS,puStack_16),
                         (HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  if (BVar3 == 0x0)
  {
    uVar4 = RegisterClass16((undefined2 *)CONCAT22(unaff_SS,&local_2c));
    if (uVar4 == 0x0)
    {
      OutputDebugString(s_MciSound_registerClass_failed_1050_02cc);
      return 0x0;
    }
  }
  HVar5 = CreateWindow16(NULL,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c,0x0,
                         (HWND16)g_ParentHWND,0x1,0x1,-0x8000,-0x8000,0x0,
                         (void *)0x2ea00cf,
                         (dword *)CONCAT22(local_12,(dword *)&g_HeapContext));
  return HVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Window procedure for the hidden MCI notification window. It handles the
// `MM_MCINOTIFY` message by destroying the window, and the `WM_DESTROY` message by
// ensuring the associated MCI device is closed and the system state is updated via
// `media_mci_close_and_update_state`.

void __stdcall16far
media_mci_notification_window_proc(void *param_1,undefined4 param_2,undefined4 param_3)
{
  void *pvVar1;
  
  if ((uint16_t)param_3 == 0x2)
  {
    GetWindowWord16(0x0,param_3._2_2_);
    media_mci_close_and_update_state
              ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
    Turn_Manager_Perform_MCI_Signal_Update_Logic((void *)pvVar1);
  }
  else
  {
    if ((uint16_t)param_3 != 0x3b9)
    {
      DefWindowProc16((LPARAM)CONCAT22((int)param_2,param_1),
                      (WPARAM16)((ulong)param_2 >> 0x10),(uint16_t)param_3,param_3._2_2_
                     );
      return;
    }
    DestroyWindow16(param_3._2_2_);
  }
  return;
}



void * __stdcall16far
UI_Event_Manager_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  UI_Event_Manager_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}
