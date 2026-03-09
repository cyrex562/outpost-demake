/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 1/54
 * Original lines (combined): 11-11015
 * Boundaries: top-level declarations/definitions only
 */

string s_NewFailedMsg;
string s_New_failed_in_Op::Op->DialogHand_1050_0073;
pointer p_UISubDialogTable;
pointer p_UIMainWindow;
pointer p_UIPanelContainer;
pointer g_ParentHWND;
undefined4 g_SimulatorContext; /* 1050:0298 — simulator ctx ptr; written by main_engine_initialization, cleared by Simulator_dtor */
string s_OPPOPMENU_1050_0150;
pointer g_LastFileErrorMsgID;
string s_SOLDefaultWindowClass_1050_01fe;
string s_MciSoundWindow_1050_02bd;
string s_windows_1050_13b8;
undefined *PTR_s_NewFailedMsg_1050_393f;
string s_OpWnd::getKid->Unknown_target_mo_1050_01a3;
string s_TILEMENU_1050_43f0;
string s_New_failed_in_Op::Op->DialogCtr_1050_0053;
string s_OPButton_1050_5ece;

// Title:  Outpost is Copyright 1994, Sierra On-Line, Inc. All Rights Reserved.
// Format: New Executable (NE) Windows
// CRC:    00000000
// 
// Program Entry Point (CS:IP):   0001:2300
// Initial Stack Pointer (SS:SP): 000b:0000
// Auto Data Segment Index:       000b
// Initial Heap Size:             1000
// Initial Stack Size:            2800
// Minimum Code Swap Size:        0000
// 
// Linker Version:  5.60
// Target OS:       Windows
// Windows Version: 3.10
// 
// Program Flags:     2a
//         80286
//         Multi Data
//         Protected Mode
// Application Flags: 03
//         Windows P.M. API
// Other Flags:       08
// 

void __cdecl16near memcpy_words_near(void)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *reg_ax;
  uint uVar3;
  uint reg_dx;
  undefined2 *reg_bx;
  
                // Segment:    1
                // Offset:     00000a20
                // Length:     55b7
                // Min Alloc:  55b7
                // Flags:      0d50
                //     Code
                //     Moveable
                //     Preload
                //     Impure (Non-shareable)
                // 
  for (uVar3 = reg_dx >> 0x1; uVar3 != 0x0; uVar3 -= 0x1)
  {
    puVar2 = reg_bx;
    reg_bx = reg_bx + 0x1;
    puVar1 = reg_ax;
    reg_ax = reg_ax + 0x1;
    *puVar2 = *puVar1;
  }
  return;
}



// Targeted Scan Finding: Resource
// Displays a standard Windows 16-bit MessageBox using far pointers to title and message
// strings.
// References a hardcoded far address 1000:1DE8 for the title.

int __stdcall16far
display_error_dialog(int icon_type,int buttons,char *title,char *message)
{
  short sVar1;
  uint hwnd;
  char *LPCSTR_text;
  
  hwnd = 0x2 - (buttons == 0x0) | 0x2110;
  MessageBeep16(0x0);
  do
  {
    sVar1 = MessageBox16(hwnd,(char *)s_1034a_bmp_1050_1de7 + 0x1,(char *)&DAT_1050_1000
                         ,(ushort)title);
    if (sVar1 == 0x1)
    {
      return 0x0;
    }
    if ((0x0 < sVar1 + -0x1) && (!SBORROW2(sVar1 + -0x1,0x1)))
    {
      if (sVar1 == 0x3 || sVar1 + -0x2 < 0x1)
      {
        win16_abnormal_termination_exit_handler();
        return 0x0;
      }
      if (sVar1 == 0x4)
      {
        return 0x1;
      }
      if (sVar1 == 0x5)
      {
        return 0x0;
      }
    }
    if ((hwnd & 0x2000) == 0x0)
    {
      return 0x0;
    }
    hwnd = hwnd & 0xdfef | 0x1010;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far main_engine_initialization(u32 param_1,u16 param_2)
{
  undefined2 *puVar5;
  u32 *puVar1;
  u8 *puVar2;
  u16 pvVar5;
  u16 *puVar3;
  u8 bVar6;
  u16 uVar9;
  u16 extraout_DX;
  uint uVar6;
  u16 uVar7;
  u16 extraout_DX_00;
  u16 uVar11;
  u16 iVar12;
  u16 uVar13;
  u16 uVar8;
  /* unaff_SS / in_stack_0000fe40/42: Win16 SS register and stack offsets — removed in flat model */
  u8 *puVar10;
  u32 *puVar11;
  u32 pvVar14;
  u16 *puVar12;
  u32 puVar15;
  char local_13e [0xac];  /* caption/text buffer, 172 bytes */
  u8 local_92 [0x80];     /* test buffer for ver check, 128 bytes */
  u32 *local_12;
  u16 local_10;
  u32 local_e;
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  u32 puVar4;
  char *LPSTR_buffer;
  char *LPSTR_buffer_00;
  char *LPSTR_buffer_01;
  
  local_6 = GetVersion16(NULL); /* CONCAT22(in_stack_0000fe42, in_stack_0000fe40) = SS:SP junk; flat: NULL */
  local_8 = local_6 & 0xff;
  bVar6 = (u8)(local_6 >> 0x8);
  local_a = (u16)bVar6;
  local_4 = param_2;
  if ((local_8 < 0x3) || ((local_8 == 0x3 && (bVar6 < 0xa))))
  {
    uVar8 = 0x1000;
    local_12 = allocate_memory(0xb4); /* CONCAT22(in_stack_0000fe40, 0xb4) -> flat: size=0xb4 */
    uVar9 = param_2 | (uint)local_12;
    local_10 = param_2;
    if (uVar9 == 0x0)
    {
      puVar1 = NULL;
      uVar9 = 0x0;
    }
    else
    {
      uVar8 = 0x1040;
      puVar1 = (u32 *)UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                                (local_12,param_2,0x0,0x10,0x2,0x5de,0x5dd);
    }
    local_e = (u32)(uintptr_t)puVar1; /* CONCAT22(uVar9, puVar1) -> flat: ptr only */
    puVar4 = (u32)((int)*(undefined4 *)local_e + 0x74);
    (**(code **)puVar4)(uVar8,puVar1,uVar9);
    param_2 = extraout_DX;
    win16_app_exit_wrapper();
  }
  log_debug_message_v(0x12,0x1050,local_8,local_a);
  if ((local_8 == 0x3) && (0xb < (int)local_a))
  {
    p_FreeBlockListHead = (undefined *)0x1;
  }
  /* Win16 LoadString: (hInst, buf_near_off, buf_seg, res_id) — seg=SS (stack), flat: NULL */
  LoadString16(0x80,(ushort)local_92,NULL,0x578);
  puVar2 = local_92;
  dos_multiple_interrupt_call_wrapper();
  if (puVar2 != NULL)
  {
    LoadString16(0x80,(ushort)local_13e,NULL,0x57b);
    LoadString16(0x80,(ushort)&local_13e[0x4c],NULL,0x62e);  /* caption: local_13e+0x4c area */
    MessageBox16(0x10,local_13e,NULL,0x0);  /* Win16 MB_OK; caption SS:stack0xfe42 -> flat: NULL */
    win16_app_exit_wrapper();
  }
  local_12 = allocate_memory(0x4); /* CONCAT22(unaff_SS, 0x4) -> flat: size=4 */
  uVar6 = param_2 | (uint)local_12;
  if (uVar6 == 0x0)
  {
    pvVar5 = 0x0;
    uVar6 = 0x0;
    local_10 = param_2;
  }
  else
  {
    local_10 = param_2;
    pvVar5 = (u16)null_far_ptr_logic(local_12);
  }
  uVar13 = (u16)(param_1 >> 0x10);
  iVar12 = (u16)param_1;
  *(u16 *)(iVar12 + 0x8) = pvVar5;
  *(uint *)(iVar12 + 0xa) = uVar6;
  g_SimulatorContext = *(undefined4 *)(iVar12 + 0x8); /* save ctx ptr; also cleared in Simulator_dtor */
  puVar5 = (undefined2 *)*(undefined4 *)(iVar12 + 0x8);
  *puVar5 = 0x70;
  ((undefined2 *)puVar5)[0x1] = (char *)s_tile2_bmp_1050_1538;
  local_12 = allocate_memory(0x126); /* CONCAT22(unaff_SS, 0x126) -> flat: size=0x126 */
  puVar10._2_2_ = 0x0;
  local_10 = uVar6;
  if (uVar6 != 0x0 || local_12 != NULL)
  {
    puVar10 = Resource_Manager_Initialize_Global_Ptr_2024
                        ((undefined *)local_12); /* CONCAT22(uVar6, local_12) -> flat: ptr only */
    puVar10._2_2_ = (u16)((ulong)puVar10 >> 0x10);
  }
  if (_p_ResourceManager == 0x0)
  {
    log_debug_message_v(0x20,0x1050);
    win16_app_exit_wrapper();
  }
  local_12 = allocate_memory(0xe8c); /* CONCAT22(unaff_SS, 0xe8c) -> flat: size=0xe8c */
  puVar11._2_2_ = 0x0;
  local_10 = puVar10._2_2_;
  if (puVar10._2_2_ != 0x0 || local_12 != NULL)
  {
    puVar11 = Global_Resource_Manager_ctor_init_1010_7e40
                        ((u32 *)local_12); /* CONCAT22(puVar10._2_2_, local_12) -> flat: ptr only */
    puVar11._2_2_ = (u16)((ulong)puVar11 >> 0x10);
  }
  if (_p_GlobalResourceManager == 0x0)
  {
    log_debug_message_v(0x35,0x1050);
    win16_app_exit_wrapper();
  }
  local_12 = allocate_memory(0xb0); /* CONCAT22(unaff_SS, 0xb0) -> flat: size=0xb0 */
  pvVar14._2_2_ = 0x0;
  local_10 = puVar11._2_2_;
  if (puVar11._2_2_ != 0x0 || local_12 != NULL)
  {
    pvVar14 = (u32)UI_SubDialog_Manager_ctor_init_aeca
                             ((u32 *)local_12); /* CONCAT22(puVar11._2_2_, local_12) -> flat: ptr only */
    pvVar14._2_2_ = (u16)(pvVar14 >> 0x10);
  }
  if (_p_UISubDialogTable == 0x0)
  {
    log_debug_message_v(0x53,0x1050);
    win16_app_exit_wrapper();
  }
  local_12 = allocate_memory(0xa); /* CONCAT22(unaff_SS, 0xa) -> flat: size=10 */
  puVar12._2_2_ = 0x0;
  local_10 = pvVar14._2_2_;
  if (pvVar14._2_2_ != 0x0 || local_12 != NULL)
  {
    puVar12 = UI_Main_Window_ctor_init_cf6c((u16 *)local_12); /* CONCAT22(pvVar14, local_12) -> flat */
    puVar12._2_2_ = (uint)((ulong)puVar12 >> 0x10);
  }
  if (_p_UIMainWindow == 0x0)
  {
    log_debug_message_v(0x73,0x1050);
    win16_app_exit_wrapper();
  }
  local_12 = allocate_memory(0x14); /* CONCAT22(unaff_SS, 0x14) -> flat: size=20 */
  uVar6 = puVar12._2_2_ | (uint)local_12;
  local_10 = puVar12._2_2_;
  if (uVar6 != 0x0)
  {
    UI_Event_Manager_ctor(local_12);
  }
  if (_p_UIPanelContainer == 0x0)
  {
    log_debug_message_v(0x97,0x1050);
    win16_app_exit_wrapper();
  }
  local_12 = allocate_memory(0xfc); /* CONCAT22(unaff_SS, 0xfc) -> flat: size=0xfc */
  local_10 = uVar6;
  if (uVar6 == 0x0 && local_12 == NULL)
  {
    puVar15 = 0x0;
  }
  else
  {
    puVar15 = (u32)UI_MainWindow_ctor((u16 *)local_12); /* CONCAT22(uVar6, local_12) -> flat */
  }
  *(undefined2 *)(iVar12 + 0x4) = (int)puVar15;
  *(undefined2 *)(iVar12 + 0x6) = (int)(puVar15 >> 0x10);
  if (*(long *)(iVar12 + 0x4) == 0x0)
  {
    log_debug_message_v(0xb7,0x1050);
    win16_app_exit_wrapper();
  }
  UI_Container_Register_Class_Logic((void *)(void *)*(undefined4 *)(iVar12 + 0x4));
  puVar5 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar12 + 0x4) + 0x8);
  (*(code *)*puVar5)(0x1000,(int)*(undefined4 *)(iVar12 + 0x4),
                     (int)((ulong)*(undefined4 *)(iVar12 + 0x4) >> 0x10));
  g_ParentHWND = (undefined *)*(undefined2 *)((int)*(undefined4 *)(iVar12 + 0x4) + 0x8);
  puVar5 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar12 + 0x4) + 0xc);
  (*(code *)*puVar5)(0x1000,*(undefined4 *)(iVar12 + 0x4),0x3);
  uVar11 = extraout_DX_00;
  UpdateWindow16(*(HWND16 *)((int)*(undefined4 *)(iVar12 + 0x4) + 0x8));
  return uVar11;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 * __stdcall16far UI_MainWindow_ctor(u16 *param_1)
{
  HICON16 HVar1;
  HCURSOR16 HVar2;
  HGDIOBJ16 HVar3;
  long lVar4;
  u16 *this;
  /* int mode; -- segment half of param_1 (far ptr seg), removed: flat model */
  
  this = (u16 *)param_1;
  UI_SOLWindow_ctor(this);
  (this + 0x70)[0x0] = 0x0;
  (this + 0x70)[0x1] = 0x0;
  (this + 0x72)[0x0] = 0x0;
  (this + 0x72)[0x1] = 0x0;
  (this + 0x74)[0x0] = 0x0;
  (this + 0x74)[0x1] = 0x0;
  this[0x76] = 0x0;
  (this + 0x77)[0x0] = 0x0;
  (this + 0x77)[0x1] = 0x0;
  this[0x79] = 0x0;
  (this + 0x7a)[0x0] = 0x0;
  (this + 0x7a)[0x1] = 0x0;
  (this + 0x7c)[0x0] = 0x0;
  (this + 0x7c)[0x1] = 0x0;
  *param_1 = (u16)(char *)s_0_1050_389e;
  this[0x1] = 0x1008;
  this[0x64] = (u16)((char *)s_572_bmp_1050_2007 + 0x1);
  this[0x56] = 0x0;
  this[0x57] = 0x8700;
  HVar1 = LoadIcon16(s_Op_1050_00d4,(HINSTANCE16)g_hInstance);
  this[0x61] = HVar1;
  HVar2 = LoadCursor16((void *)0x7f00,0x0);
  this[0x62] = HVar2;
  HVar3 = GetStockObject16(0x4);
  this[0x63] = HVar3;
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  strcpy_optimized((char *)(this + 0x5),s_Outpost_1050_00d7); /* CONCAT22(mode,this+0x5) -> flat: drop segment half */
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
  this[0x7a] = (u16)lVar4;
  this[0x7b] = (u16)((ulong)lVar4 >> 0x10);
  UI_Manage_System_Colors_Logic(this,0x0); /* mode (segment half of far ptr) = 0 in flat model */
  return param_1;
}



// Targeted Scan Finding: Vtable / Resource
// Initializes UI_Window vtable to 1008:389A (with intermediate states 1008:389E,
// 1008:380A).
// Performs indirect call through [this + 0xe0], likely a child control or renderer.
// References bitmap resource: tile2.bmp (offset 1050:1538).

void __stdcall16far UI_Window_dtor(void *this)
{
  undefined4 *puVar1;
  int iVar2;
  int in_stack_00000006;
  
  *_this = (char *)s_0_1050_389e;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  UI_Manage_System_Colors_Logic(this,in_stack_00000006);
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0xf8));
  if (*(int *)((int)this + 0xec) != 0x0)
  {
    DestroyMenu16(*(HMENU16 *)((int)this + 0xec));
  }
  DestroyIcon16(*(HICON16 *)((int)this + 0xc2));
  *(undefined2 *)((int)this + 0xc2) = 0x0;
  puVar1 = (undefined4 *)*(int *)((int)this + 0xe0);
  iVar2 = *(int *)((int)this + 0xe2);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1538,puVar1,iVar2,0x1);
  }
  UI_Control_Sub_dtor_logic((void *)((int)this + 0xd2));
  *_this = 0x380a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



void __stdcall16far UI_Refresh_Colors_and_Components(void *param_1,int param_2)
{
  undefined2 *puVar1;
  
  UI_Manage_System_Colors_Logic(param_1,param_2);
  if (*(long *)((int)param_1 + 0xe8) != 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xe8) + 0x98);
    (*(code *)*puVar1)();
  }
  return;
}



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
  uint reg_dx;
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
  pvVar4 = (void *)(reg_dx | (uint)pvVar3);
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
