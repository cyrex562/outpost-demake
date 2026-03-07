/*
 * Source: outpost.c
 * Chunk: 10/117
 * Original lines: 10406-11169
 * Boundaries: top-level declarations/definitions only
 */




void __stdcall16far UI_Show_Main_Popup_Menu(u32 param_1,int16_t param_2,int16_t param_3)
{
  HMENU16 HVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  u16 local_6;
  u16 local_4;
  
  uVar3 = (undefined2)(param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0xec) == 0x0)
  {
    HVar1 = LoadMenu16(s_OPPOPMENU_1050_0150,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
    *(HMENU16 *)(iVar2 + 0xec) = HVar1;
    if (HVar1 == 0x0)
    {
      return;
    }
    HVar1 = GetSubMenu16(0x0,*(HMENU16 *)(iVar2 + 0xec));
    *(HMENU16 *)(iVar2 + 0xec) = HVar1;
    if (HVar1 == 0x0)
    {
      return;
    }
  }
  local_6 = param_3;
  local_4 = param_2;
  ClientToScreen16((u16 *)CONCAT22(unaff_SS,&local_6),*(HWND16 *)(iVar2 + 0x8));
  TrackPopupMenu16(NULL,(HWND16)g_ParentHWND,0x0,local_4,local_6,0x0,
                   *(HMENU16 *)(iVar2 + 0xec));
  return;
}



// Handles specific system-level UI commands (like `WM_SYSCOMMAND`). Checks for special
// command IDs (0xF140, 0xF060) and performs window state management.

int __stdcall16far UI_Handle_System_Command_Logic(void *window_ptr,int command_id)
{
  BOOL16 BVar1;
  uint in_stack_00000008;
  HWND16 hwnd;
  
  if ((in_stack_00000008 & 0xfff0) == 0xf140)
  {
    return *(int *)((int)window_ptr + 0xde);
  }
  if ((in_stack_00000008 & 0xfff0) == 0xf060)
  {
    hwnd = *(HWND16 *)((int)window_ptr + 0x8);
    BVar1 = IsIconic16(hwnd);
    if (BVar1 == 0x0)
    {
      PostMessage16(0x0,0x0,0x67,CONCAT22(hwnd,*(undefined2 *)((int)window_ptr + 0x8)));
    }
    return 0x0;
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Shutdown_Application(u32 param_1)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)(param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(long *)(iVar2 + 0xee) != 0x0)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xee) + 0x90);
    (*(code *)*puVar1)();
  }
  if (*(long *)(iVar2 + 0xe8) != 0x0)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xe8) + 0x90);
    (*(code *)*puVar1)();
  }
  if (_PTR_DAT_1050_0000_1050_0388 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*_PTR_DAT_1050_0000_1050_0388)();
  }
  win16_PostQuitMessage_wrapper();
  return;
}



// Targeted Scan Finding: Far Pointer / Vtable
// Initializes global pointer PTR_DAT_1050_0396.
// Performs extensive indirect calls through vtable offsets (0x14, 0x10, 0x8, 0xC) of
// sub-objects.
// References context pointer 1050:1050.

void __stdcall16far UI_Window_Init_Child_Objects_Logic(void *this)
{
  undefined2 uVar1;
  undefined2 *puVar2;
  void *pvVar3;
  uint in_DX;
  void *pvVar4;
  uint uVar5;
  int extraout_DX;
  int iVar6;
  undefined2 uVar7;
  undefined2 in_stack_00000006;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined2 in_stack_0000fffa;
  
  UI_Element_Create_Window_Logic(this);
  g_ParentHWND = (undefined *)*(undefined2 *)((int)this + 0x8);
  pvVar3 = allocate_memory(CONCAT22(in_stack_0000fffa,0x12));
  pvVar4 = (void *)(in_DX | (uint)pvVar3);
  if (pvVar4 != NULL)
  {
    Simulator_Timer_Object_ctor(pvVar3);
  }
  pvVar3 = allocate_memory(CONCAT22(pvVar3,0x6));
  uVar5 = (uint)pvVar4 | (uint)pvVar3;
  if (uVar5 == 0x0)
  {
    *(undefined4 *)((int)this + 0xe0) = 0x0;
  }
  else
  {
    pvVar4 = UI_Generic_Panel_ctor_init(pvVar3,pvVar4);
    *(undefined2 *)((int)this + 0xe0) = pvVar4;
    *(uint *)((int)this + 0xe2) = uVar5;
  }
  puVar2 = (undefined2 *)((int)*_this + 0x14);
  pvVar4 = this;
  (*(code *)*puVar2)(0x1000,this,in_stack_00000006,0x0,0x15a,0x1050,pvVar3);
  uVar7 = 0x1000;
  iVar6 = extraout_DX;
  pvVar3 = allocate_memory(CONCAT22(pvVar4,0xec));
  if (iVar6 == 0x0 && pvVar3 == NULL)
  {
    *(undefined4 *)((int)this + 0xe4) = 0x0;
  }
  else
  {
    *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
    uVar7 = 0x1020;
    pvVar4 = UI_DanBrotherton_Window_ctor_init_logic
                       ((void *)CONCAT22(iVar6,pvVar3),*(undefined2 *)((int)this + 0xcc)
                        ,this,in_stack_00000006);
    *(undefined2 *)((int)this + 0xe4) = pvVar3;
    *(undefined2 *)((int)this + 0xe6) = pvVar4;
  }
  if (*(long *)((int)this + 0xce) != 0x0)
  {
    puVar2 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xce) + 0x10);
    (*(code *)*puVar2)();
  }
  *(undefined4 *)((int)this + 0xce) = *(undefined4 *)((int)this + 0xe4);
  uVar9 = 0x1;
  uVar8 = *(undefined4 *)((int)this + 0xe4);
  puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe4) + 0x10);
  (*(code *)*puVar2)();
  uVar1 = *(undefined2 *)((int)this + 0xe6);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)((int)this + 0xe4);
  puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0x8);
  (*(code *)*puVar2)(uVar7,*(undefined2 *)((int)this + 0xe8),uVar1,uVar8,uVar9);
  puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0xc);
  (*(code *)*puVar2)();
  UI_Window_Register_Child_Event_Handler
            (this,in_stack_00000006,0x0,*(undefined4 *)((int)this + 0xe8));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Main_Window_Command_Dispatcher_0c60(u32 *param_1,u16 param_2)
{
  undefined2 *puVar1;
  char *text;
  HWND16 in_DX;
  char *title;
  undefined2 unaff_CS;
  void *pvVar2;
  long context;
  ushort uVar3;
  u32 *this;
  int panel_id;
  int iVar4;
  undefined2 uVar5;
  undefined2 in_stack_0000ff8e;
  u16 local_6c;
  u16 local_6a;
  u16 local_68;
  u16 local_66;
  undefined1 local_64 [0x50];
  u16 local_14;
  u16 local_12;
  u16 local_10;
  u16 local_e;
  u16 local_6;
  u16 local_4;
  
  this = (u32 *)param_1;
  panel_id = (int)((ulong)param_1 >> 0x10);
  if (false)
  {
switchD_1008_1091_caseD_69:
    if (*(int *)((int)this + 0xea) == 0x0 && (int)this[0x3a] == 0x0)
    {
      return;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)this[0x3a] + 0x40);
    (*(code *)*puVar1)(unaff_CS,(int)this[0x3a],(int)(this[0x3a] >> 0x10),param_2);
    return;
  }
  unaff_CS = 0x1008;
  switch(param_2)
  {
  case 0x64:
    Simulator_init_or_exit_on_fail();
    UI_Auto_Load_Game_Logic(this);
    return;
  case 0x65:
    UI_Auto_Save_Game_Logic(this);
    return;
  case 0x66:
    UI_Save_As_Game_Logic(this);
    return;
  case 0x67:
    iVar4 = UI_Show_Message_Box_Generic_with_Simulator_Check(this);
    if (iVar4 == 0x0)
    {
      return;
    }
  case 0xee:
    uVar5 = (undefined2)this[0x2];
    uVar3 = 0x0;
    goto LAB_1008_0d18;
  case 0x68:
    pvVar2 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x4000001)
    ;
    title = (char *)((uint)((ulong)pvVar2 >> 0x10) | (uint)(void *)pvVar2);
    if (title == NULL)
    {
      return;
    }
    if (PTR_DAT_1050_0000_1050_4fe8 != NULL)
    {
      text = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)(void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
      MessageBox16(0x10,text,title,0x172);
      return;
    }
    local_e = LoadCursor16((void *)0x7f02,0x0);
    local_10 = SetCursor16(local_e);
    context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
    local_12 = (u16)((ulong)context >> 0x10);
    local_14 = (u16)context;
    UI_Construction_Manager_Reset_Selection_State_Logic(context);
    Simulator_Global_Execute_Single_Tick_Logic_838e((void **)_p_SimulatorGlobalState);
    *(undefined2 *)((int)_p_SimulatorGlobalState + 0x8) = 0x1;
    Simulator_Global_Get_Current_Tick_8326();
    Resource_Manager_LoadString_to_Internal_Buffer
              ((int)(void *)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),0x5dc);
    sprintf_wrapper(local_64);
    puVar1 = (undefined2 *)((int)*param_1 + 0x14);
    (*(code *)*puVar1)(0x1000,param_1,0x0,local_64);
    pvVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
    Turn_Manager_Trigger_Next_Sequence_Event_Logic_maybe((void *)pvVar2);
    SetCursor16(local_10);
    uVar5 = (undefined2)this[0x2];
    uVar3 = 0xfc;
    goto LAB_1008_0e3d;
  default:
    goto switchD_1008_1091_caseD_69;
  case 0x6e:
    iVar4 = 0x2;
    goto LAB_1008_0cba;
  case 0x6f:
    local_6 = (u16)Resource_Manager_Load_Resource_Object_Logic
                             ((void *)_p_GlobalResourceManager,
                              (int)((ulong)_p_GlobalResourceManager >> 0x10));
    WinHelp16(0x0,0x0,(void *)CONCAT22(local_6,(void *)((int)(undefined **)
                                                             &p_CurrentHeapContext + 0x1
                                                       )),in_DX);
    return;
  case 0x70:
    iVar4 = 0x1;
LAB_1008_0cba:
    UI_SubDialog_Factory_Create_and_Show_by_ID_af40
              (_p_UISubDialogTable,(uint16_t)this[0x2],iVar4);
    return;
  case 0x71:
    WinExec16(0x3,(dword *)CONCAT22(in_stack_0000ff8e,(dword *)&g_HeapContext));
    return;
  case 0x79:
    UI_Close_Active_View_Panel_Logic(this);
    return;
  case 0x7a:
    goto LAB_1008_0f3e;
  case 0x7b:
    goto LAB_1008_0f3e;
  case 0x7c:
    goto LAB_1008_0f3e;
  case 0x7d:
    goto LAB_1008_0f3e;
  case 0x7e:
    goto LAB_1008_0f3e;
  case 0x7f:
    break;
  case 0x80:
    goto LAB_1008_0f3e;
  case 0x81:
    break;
  case 0x82:
    break;
  case 0x83:
    break;
  case 0x84:
    break;
  case 0x85:
    break;
  case 0x86:
    break;
  case 0x87:
    break;
  case 0x88:
    break;
  case 0x89:
    break;
  case 0x8a:
    break;
  case 0x8b:
    goto LAB_1008_0f3e;
  case 0x8c:
    break;
  case 0x8d:
    break;
  case 0x8e:
    break;
  case 0x8f:
    break;
  case 0x90:
    break;
  case 0x91:
    break;
  case 0x92:
    break;
  case 0x93:
    goto LAB_1008_0f3e;
  case 0x94:
    goto LAB_1008_0f3e;
  case 0x95:
    break;
  case 0x96:
    break;
  case 0x97:
    break;
  case 0x98:
    break;
  case 0x99:
    break;
  case 0x9a:
    goto LAB_1008_0f3e;
  case 0x9b:
    break;
  case 0x9c:
    break;
  case 0x9d:
    break;
  case 0x9e:
    break;
  case 0x9f:
    break;
  case 0xa0:
    goto LAB_1008_0f3e;
  case 0xa1:
    goto LAB_1008_0f3e;
  case 0xa2:
    break;
  case 0xa3:
    goto LAB_1008_0f3e;
  case 0xa4:
    break;
  case 0xa5:
    goto LAB_1008_0f3e;
  case 0xa6:
    goto LAB_1008_0f3e;
  case 0xa7:
    break;
  case 0xa8:
    goto LAB_1008_0f3e;
  case 0xa9:
    goto LAB_1008_0f3e;
  case 0xaa:
    break;
  case 0xab:
    break;
  case 0xac:
    break;
  case 0xad:
    break;
  case 0xae:
    break;
  case 0xaf:
    break;
  case 0xb0:
    goto LAB_1008_0f3e;
  case 0xb1:
    break;
  case 0xb2:
    break;
  case 0xb3:
    break;
  case 0xb4:
    goto LAB_1008_0f3e;
  case 0xb5:
    break;
  case 0xb6:
    break;
  case 0xb7:
    break;
  case 0xb8:
    break;
  case 0xb9:
    break;
  case 0xba:
    break;
  case 0xbb:
    break;
  case 0xbc:
    break;
  case 0xbd:
    break;
  case 0xbe:
    break;
  case 0xbf:
    goto LAB_1008_0f3e;
  case 0xc0:
    goto LAB_1008_0f3e;
  case 0xc1:
    goto LAB_1008_0f3e;
  case 0xc2:
    goto LAB_1008_0f3e;
  case 0xc3:
    goto LAB_1008_0f3e;
  case 0xc4:
    goto LAB_1008_0f3e;
  case 0xc5:
    goto LAB_1008_0f3e;
  case 0xc6:
    goto LAB_1008_0f3e;
  case 0xc8:
    goto LAB_1008_0f3e;
  case 0xc9:
    goto LAB_1008_0f3e;
  case 0xca:
    goto LAB_1008_0f3e;
  case 0xcb:
    Simulator_allocate_and_init_internal();
    goto LAB_1008_0f3e;
  case 0xcc:
    goto LAB_1008_0f3e;
  case 0xcd:
    goto LAB_1008_0f3e;
  case 0xce:
    goto LAB_1008_0f3e;
  case 0xcf:
    goto LAB_1008_0f3e;
  case 0xd0:
    goto LAB_1008_0f3e;
  case 0xd1:
    goto LAB_1008_0f3e;
  case 0xd2:
    goto LAB_1008_0f3e;
  case 0xd3:
    goto LAB_1008_0f3e;
  case 0xd4:
    goto LAB_1008_0f3e;
  case 0xd5:
    goto LAB_1008_0f3e;
  case 0xd6:
    goto LAB_1008_0f3e;
  case 0xd7:
    goto LAB_1008_0f3e;
  case 0xd8:
    goto LAB_1008_0f3e;
  case 0xd9:
    goto LAB_1008_0f3e;
  case 0xda:
    goto LAB_1008_0f3e;
  case 0xdb:
    goto LAB_1008_0f3e;
  case 0xdc:
    goto LAB_1008_0f3e;
  case 0xdd:
    goto LAB_1008_0f3e;
  case 0xde:
LAB_1008_0f3e:
    UI_Set_Primary_View_Panel_Logic(this,panel_id);
    return;
  case 0xdf:
    break;
  case 0xe0:
    break;
  case 0x100:
    media_play_from_resource_id_shorthand
              ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
    return;
  case 0x12c:
    uVar5 = (undefined2)this[0x2];
    uVar3 = 0xf020;
LAB_1008_0d18:
    SendMessage16(0x0,0x0,uVar3,CONCAT22(in_stack_0000ff8e,uVar5));
    return;
  case 0x12e:
    uVar5 = (undefined2)this[0x2];
    uVar3 = 0xf060;
LAB_1008_0e3d:
    PostMessage16(0x0,0x0,uVar3,CONCAT22(in_stack_0000ff8e,uVar5));
    return;
  }
  UI_Switch_Active_View_Panel_Logic(this,panel_id);
  return;
}



void __stdcall16far UI_Refresh_Child_Window_maybe(void *this)
{
  undefined2 in_stack_00000006;
  
  UI_Window_Paint_Background_Solid((void *)(void *)*(undefined4 *)((int)this + 0xe0));
  return;
}



void __stdcall16far
UI_Trigger_Child_Component_Event_4C(u32 param_1,u16 param_2,u32 param_3)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  if (*(long *)((int)param_1 + 0xe8) != 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xe8) + 0x4c);
    (*(code *)*puVar1)();
  }
  return;
}



// Targeted Scan Finding: Vtable
// Performs an indirect call through [this + 0xe8] offset 0x88, likely a menu selection
// event handler.

void __stdcall16far UI_Handle_Menu_Select_Logic(void *this,int menu_id)
{
  undefined2 *puVar1;
  
  if (*(long *)((int)this + 0xe8) != 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0x88);
    (*(code *)*puVar1)();
    return;
  }
  UI_Element_Compare_HWND_Logic(this,menu_id);
  return;
}



// Targeted Scan Finding: Vtable
// Performs an indirect call through [this + 0xe8] offset 0x8c, likely a context menu
// show handler.

void __stdcall16far UI_Show_Menu_Context_maybe(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0xe8) != 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0x8c);
    (*(code *)*puVar1)();
    return;
  }
  far_false_stub();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Displays a file selection dialog for saving the game. It uses a wait cursor, handles
// the dialog result, and shows either a success or error message box depending on
// whether the save operation succeeded.

void __stdcall16far UI_Prompt_Save_Game_Dialog(void *parent_window,char *filename)
{
  int iVar1;
  char *pcVar2;
  char *ptr;
  char *in_DX;
  char *unaff_SS;
  undefined1 local_c [0x6];
  HCURSOR16 HStack_6;
  HCURSOR16 HStack_4;
  
  HStack_4 = LoadCursor16((void *)0x7f02,0x0);
  HStack_6 = SetCursor16(HStack_4);
  file_context_init_logic(local_c,unaff_SS);
  iVar1 = file_context_perform_save_sequence_logic(local_c);
  if (iVar1 == 0x0)
  {
    SetCursor16(HStack_6);
    pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),
                        (int)g_LastFileErrorMsgID);
    ptr = strdup_allocate(pcVar2);
    pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
    MessageBeep16(0x10);
    MessageBox16(0x10,pcVar2,in_DX,(ushort)ptr);
  }
  else
  {
    *(undefined2 *)((int)_p_SimulatorGlobalState + 0x8) = 0x0;
    SetCursor16(HStack_6);
    pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x6d3);
    ptr = strdup_allocate(pcVar2);
    pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
    MessageBeep16(0x0);
    MessageBox16(0x40,pcVar2,in_DX,(ushort)ptr);
  }
  free_if_not_null(ptr);
  file_context_cleanup_logic(local_c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References multiple global management pointers in segment 1050:
// - PTR_DAT_1050_14cc (String resources)
// - PTR_DAT_1050_0ed0 (Resource manager)
// - PTR_DAT_1050_5748 (Simulator state)
// Performs an indirect call through [this + 0xe8] offset 0x4.

void __stdcall16far
UI_Prompt_Load_Game_and_Init_World_Logic(void *parent_window,char *filename)
{
  undefined2 *puVar1;
  int iVar2;
  char *pcVar3;
  char *text;
  char *in_DX;
  char *unaff_SS;
  void *pvVar4;
  long context;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 local_2a;
  undefined2 uStack_26;
  void *pvStack_24;
  undefined2 uStack_22;
  void *pvStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined2 uStack_12;
  void *pvStack_10;
  long lStack_c;
  undefined1 local_8 [0x6];
  
  file_context_init_logic(local_8,unaff_SS);
  iVar2 = file_context_perform_load_sequence_logic(local_8);
  if (iVar2 == 0x0)
  {
    if (g_LastFileErrorMsgID == NULL)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d4;
    }
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),
                        (int)g_LastFileErrorMsgID);
    pcVar3 = strdup_allocate(pcVar3);
    text = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
    MessageBeep16(0x10);
    MessageBox16(0x10,text,in_DX,(ushort)pcVar3);
    free_if_not_null(pcVar3);
    win16_app_exit_wrapper();
  }
  UI_Set_Primary_View_Panel_Logic(parent_window,(int)filename);
  lStack_c = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  pvStack_10 = (void *)*(undefined4 *)((int)lStack_c + 0x20);
  pvVar4 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),pvStack_10);
  uStack_12 = (undefined2)((ulong)pvVar4 >> 0x10);
  pvStack_14 = (void *)pvVar4;
  uStack_18 = *(undefined4 *)((int)pvStack_14 + 0x10);
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)parent_window + 0xe8) + 0x4);
  (*(code *)*puVar1)(0x1030,(int)*(undefined4 *)((int)parent_window + 0xe8),
                     (int)((ulong)*(undefined4 *)((int)parent_window + 0xe8) >> 0x10),
                     (void *)pvStack_10,(int)((ulong)pvStack_10 >> 0x10),
                     *(int *)((int)uStack_18 + 0x2) + -0x1,0x2);
  pvStack_1c = Simulator_Global_Get_Entity_Object_Wrapper_8344
                         ((u16)_p_SimulatorGlobalState,
                          (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                          (void *)0x4000001);
  pvStack_20 = (void *)*(undefined4 *)((int)(void *)pvStack_1c + 0x10);
  pvVar4 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),pvStack_20);
  uStack_22 = (undefined2)((ulong)pvVar4 >> 0x10);
  pvStack_24 = (void *)pvVar4;
  local_2a = *(undefined4 *)((int)pvStack_24 + 0xc);
  uStack_26 = *(undefined2 *)((int)pvStack_24 + 0x10);
  iVar2 = UI_Production_Item_Get_ID_Logic_5b00((void *)CONCAT22(uStack_12,pvStack_14));
  puVar6 = &local_2a;
  context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,iVar2);
  UI_Main_View_Controller_Update_Viewport_from_Struct_Logic
            (context,(long)CONCAT22(unaff_SS,puVar6));
  uVar7 = 0x400;
  iVar2 = 0x1b;
  uVar5 = 0x1;
  pvVar4 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  Turn_Manager_Push_Resource_Event_Logic((void *)pvVar4,CONCAT22(uVar7,uVar5),iVar2);
  file_context_cleanup_logic(local_8);
  return;
}
