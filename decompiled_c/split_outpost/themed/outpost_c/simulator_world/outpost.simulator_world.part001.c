/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 1/56
 * Original lines (combined): 120-10944
 * Boundaries: top-level declarations/definitions only
 */

pointer p_SimulatorGlobalState;
pointer p_ResourceManager;
pointer p_GlobalResourceManager;
pointer p_SimulatorWorldContext;
string s_SCInternalPutBldg2_site:0x%08lx._1050_5099;
void *PTR_s_SC%03d_1050_0314_1050_031c;
pointer p_SimulatorObjectLibrary;
pointer p_SimulatorTurnManager;
void *PTR_s_dcbSC_1050_0336_1050_033c;
string s_SCForceMorale_%s_for_colony_%08l_1050_5024;
string s_falseMap_1050_13de;
pointer p_MapContext_5740;
string s_SCInternalPutBldg_site:0x%08lx._b_1050_5046;
string s_New_failed_in_Op::Op->Simulator_1050_0110;
string s_New_failed_in_Op::Op->Simulator_1050_0130;
string s_SCInternalPutBldg2_site:0x%08lx._1050_506f;
string s_mineToSmelter->no_mines_1050_59df;
string s_SCAddSpew_1050_4fd2;
string s_SCConstruct_1050_4fdc;
string s_SCEndSim_1050_4fea;
string s_SCEvent_1050_4ff4;
string s_SCFactory_1050_5002;
string s_SCFillResources_1050_500c;
string s_SCProdSched_1050_5104;
string s_SCPower_1050_5110;
string s_SCRchSched_1050_5118;
string s_SCSetup_1050_5124;
string s_SCStarve_1050_5156;
string s_SCAiInput_1050_5972;
string s_SCKillColony_1050_5990;
string s_SCKillRebelColony_1050_599e;
string s_SCMines_1050_59c6;
string s_SCMorale_1050_59ce;
string s_SCMove_1050_59d8;
string s_SCRoboMove_1050_59f8;



void __cdecl16near resource_find_terminator_3cb7(u16 param_1)
{
  uint *puVar1;
  
  puVar1 = (uint *)*(undefined2 *)(param_1 + 0xa);
  if (puVar1 == (uint *)*(undefined2 *)(param_1 + 0xc))
  {
    puVar1 = (uint *)*(undefined2 *)(param_1 + 0x8);
  }
  while( true )
  {
    if (*puVar1 == 0xfffe) break;
    puVar1 = (uint *)((int)puVar1 + (*puVar1 & 0xfffe) + 0x2);
  }
  return;
}



// Targeted Scan Finding: Resource
// References string literal "Abnormal program termination" (1050:6544) during fatal
// exit.

void __cdecl16far win16_abnormal_termination_exit_handler(void)
{
  FatalAppExit16(s_ABNORMAL_PROGRAM_TERMINATION_1050_6544,0x0);
  return;
}



// Internal routine to determine if a given date/time falls within daylight savings time
// based on the parsed "TZ" rules. Returns 1 if active, 0 otherwise.

int __cdecl16far is_daylight_savings_active_internal_far(void *date_struct)
{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined2 in_stack_00000006;
  int iStack_6;
  
  if (((*(int *)((int)date_struct + 0xa) < 0x43) ||
      (*(int *)((int)date_struct + 0x8) < 0x3)) ||
     (0x9 < *(int *)((int)date_struct + 0x8))) goto LAB_1000_4623;
  if ((*(int *)((int)date_struct + 0x8) < 0x4) ||
     (0x8 < *(int *)((int)date_struct + 0x8)))
  {
    uVar1 = *(uint *)((int)date_struct + 0xa);
    if (((int)uVar1 < 0x57) || (*(int *)((int)date_struct + 0x8) != 0x3))
    {
      iStack_6 = *(int *)(*(int *)((int)date_struct + 0x8) * 0x2 + 0x61b2);
    }
    else
    {
      iStack_6 = *(int *)((int)(dword *)&g_MonthDaysLookupTable +
                         *(int *)((int)date_struct + 0x8) * 0x2 + 0x2) + 0x7;
    }
    if ((uVar1 & 0x3) == 0x0)
    {
      iStack_6 += 0x1;
    }
    uVar1 = (uVar1 - 0x46) * 0x16d + ((int)(uVar1 - 0x1) >> 0x2) + iStack_6;
    lVar3 = div_i32_i32_standard
                      (CONCAT22(((int)uVar1 >> 0xf) - (uint)(uVar1 < 0xd),uVar1 - 0xd),
                       0x7);
    iStack_6 = (int)lVar3 - iStack_6;
    iVar2 = -iStack_6;
    if (*(int *)((int)date_struct + 0x8) == 0x3)
    {
      if ((iVar2 < *(int *)((int)date_struct + 0xe)) ||
         ((-*(int *)((int)date_struct + 0xe) == iStack_6 &&
          (0x1 < *(int *)((int)date_struct + 0x4))))) goto LAB_1000_460e;
    }
    else if ((*(int *)((int)date_struct + 0xe) < iVar2) ||
            ((*(int *)((int)date_struct + 0xe) == iVar2 &&
             (*(int *)((int)date_struct + 0x4) < 0x1)))) goto LAB_1000_460e;
LAB_1000_4623:
    iVar2 = 0x0;
  }
  else
  {
LAB_1000_460e:
    iVar2 = 0x1;
  }
  return iVar2;
}



// Targeted Scan Finding: Far Pointer
// References and updates global RNG state pointers in segment 1050:
// - DAT_1050_61e8 (seed)
// - PTR_DAT_1050_61ea.

void __cdecl16far srand_seed_internal_far(int seed)
{
  g_RNG_Seed = seed;
  g_RNG_Next_Val = NULL;
  return;
}



// Targeted Scan Finding: Far Pointer
// References and updates global LCG RNG state in segment 1050:
// - PTR_DAT_1050_61ea
// - DAT_1050_61e8.

int __cdecl16far rand_next_internal_far_u15(void)
{
  long lVar1;
  
  lVar1 = mul_u32_u32_standard(CONCAT22(g_RNG_Next_Val,g_RNG_Seed),0x343fd);
  g_RNG_Next_Val = (undefined *)((ulong)(lVar1 + 0x269ec3) >> 0x10);
  g_RNG_Seed = (u16)(lVar1 + 0x269ec3);
  return (uint)g_RNG_Next_Val & 0x7fff;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [func_ptr] in a loop. Used for batch operations.

void __stdcall16far
call_function_ptr_n_times_simple(void *func_ptr,int count,u16 param_3)
{
  u16 uVar1;
  
  uVar1 = param_3;
  while (uVar1 -= 0x1, -0x1 < (int)uVar1)
  {
    (*func_ptr)();
  }
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [func_ptr] in a loop after 32-bit multiplication of
// loop bounds.

void __stdcall16far
call_function_ptr_with_multiplication_n_times_2
          (void *func_ptr,int count,u16 param_3,u16 param_4,u16 param_5)
{
  bool bVar1;
  int iStack_4;
  
  mul_u32_u32_standard(CONCAT22(param_4,param_3),(ulong)param_5);
  while( true )
  {
    bVar1 = param_3 == 0x0;
    param_3 -= 0x1;
    param_4 -= bVar1;
    if ((int)param_4 < 0x0) break;
    iStack_4 = count;
    (*func_ptr)();
  }
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [func_ptr] in a loop. Used for batch operations.

void __stdcall16far call_function_n_times(void *func_ptr,int count,u16 param_3)
{
  u16 uVar1;
  
  uVar1 = param_3;
                // Calls function pointer param_1 repeatedly param_3 times. Used for
                // batch operations.
  while (uVar1 -= 0x1, -0x1 < (int)uVar1)
  {
    (*func_ptr)();
  }
  return;
}



// Targeted Scan Finding: Vtable
// Initializes Simulator vtable to 1008:051E (after initially setting it to 1008:052A).
// Structures internal state pointers at offsets 0x4 and 0x8.

void * __stdcall16far Simulator_ctor(void *this)
{
  undefined2 in_stack_00000006;
  
                // Segment:    2
                // Offset:     000060e0
                // Length:     efe0
                // Min Alloc:  efe0
                // Flags:      0d50
                //     Code
                //     Moveable
                //     Preload
                //     Impure (Non-shareable)
                // 
  *_this = 0x52a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = 0x0;
  *(undefined4 *)((int)this + 0x8) = 0x0;
  *_this = 0x51e;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References multiple global subsystem pointers in segment 1050:
// - PTR_DAT_1050_5748 (Global State)
// - PTR_DAT_1050_0ed0 (Resource Manager)
// - PTR_DAT_1050_14cc (Global Resource Manager)
// - PTR_DAT_1050_5b7c (UI SubDialog Table)
// - PTR_DAT_1050_5bc8, PTR_DAT_1050_02a0
// Performs indirect calls through vtable methods at offset 0x0 of these objects.

void __stdcall16far Simulator_dtor(void *this)
{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int *this_ptr;
  undefined2 unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this = 0x51e;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  pvVar3 = (void *)(void *)*(undefined4 *)((int)this + 0x8);
  if (*(int *)((int)this + 0xa) != 0x0 || pvVar3 != NULL)
  {
    far_noop_stub_3();
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  _PTR_DAT_1050_0000_1050_0298 = 0x0;
  if (_p_SimulatorGlobalState != NULL)
  {
    this_ptr = (int *)_p_SimulatorGlobalState;
    Simulator_Global_State_dtor_Internal_8210(this_ptr);
    unaff_CS = 0x1000;
    free_if_not_null(this_ptr);
  }
  if (_p_ResourceManager != NULL)
  {
    pvVar3 = (void *)_p_ResourceManager;
    Resource_Manager_dtor_logic((long)_p_ResourceManager);
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  if (_p_GlobalResourceManager != NULL)
  {
    pvVar3 = (void *)_p_GlobalResourceManager;
    Global_Resource_Manager_dtor_logic_7EFC(pvVar3);
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  if (_p_UISubDialogTable != NULL)
  {
    pvVar3 = (void *)_p_UISubDialogTable;
    UI_Global_SubDialog_Table_Clear_Pointer_af34();
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  if (_p_UIMainWindow != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*_p_UIMainWindow)
              (unaff_CS,(undefined4 *)_p_UIMainWindow,
               (int)((ulong)_p_UIMainWindow >> 0x10),0x1);
  }
  if (_p_UIPanelContainer != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*_p_UIPanelContainer)
              (unaff_CS,(undefined4 *)_p_UIPanelContainer,
               (int)((ulong)_p_UIPanelContainer >> 0x10),0x1);
  }
  puVar1 = (undefined4 *)*(int *)((int)this + 0x4);
  iVar2 = *(int *)((int)this + 0x6);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  Simulator_Destructor_Internal_Logic(this);
  return;
}



// Scalar deleting destructor for the Simulator class. Calls the destructor and
// optionally frees the memory.

void * __stdcall16far Simulator_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Simulator_Destructor_Internal_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



void * __stdcall16far
Simulator_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  Simulator_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Handle_Run_Turn_Command(u32 *param_1,long param_2,u16 param_3,int param_4)
{
  undefined2 *puVar1;
  ulong uVar2;
  char *text;
  char *title;
  u32 *puVar3;
  void *pvVar4;
  long context;
  u32 *puVar5;
  u16 local_62;
  u16 local_60;
  u16 local_5e;
  u16 local_5c;
  undefined1 local_5a [0x50];
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  if (param_4 == 0x400)
  {
    pvVar4 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)(void *)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x4000001)
    ;
    title = (char *)((uint)((ulong)pvVar4 >> 0x10) | (uint)(void *)pvVar4);
    if (title != NULL)
    {
      puVar3 = (u32 *)param_1;
      uVar2 = (ulong)param_1 >> 0x10;
      if (PTR_DAT_1050_0000_1050_4fe8 != NULL)
      {
        text = Resource_Manager_LoadString_to_Internal_Buffer
                         ((int)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
        MessageBox16(0x10,text,title,0xdf);
        return;
      }
      local_4 = LoadCursor16((void *)0x7f02,0x0);
      local_6 = SetCursor16(local_4);
      Simulator_Global_Execute_Multiple_Ticks_Logic_83ba
                (_p_SimulatorGlobalState,param_2);
      *(undefined2 *)((int)(void *)_p_SimulatorGlobalState + 0x8) = 0x1;
      context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
      local_8 = (u16)((ulong)context >> 0x10);
      local_a = (u16)context;
      UI_Construction_Manager_Reset_Selection_State_Logic(context);
      Simulator_Global_Get_Current_Tick_8326();
      Resource_Manager_LoadString_to_Internal_Buffer
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),0x5dc);
      sprintf_wrapper(local_5a);
      puVar1 = (undefined2 *)((int)*param_1 + 0x14);
      (*(code *)*puVar1)(0x1000,param_1,0x0,local_5a);
      pvVar4 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x37);
      puVar5 = (u32 *)param_1;
      Turn_Manager_Trigger_Next_Sequence_Event_Logic_maybe((void *)pvVar4);
      SetCursor16(local_6);
      PostMessage16(0x0,0x0,0xfc,CONCAT22(puVar5,(int)puVar3[0x2]));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global simulator state pointer in segment 1050:
// - PTR_DAT_1050_5748
// - PTR_DAT_1050_65e2.

void __stdcall16far Simulator_init_or_exit_on_fail(void)
{
  void *pvVar1;
  int in_DX;
  undefined2 in_stack_0000fffa;
  
  if (_p_SimulatorGlobalState == NULL)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
    if (in_DX != 0x0 || pvVar1 != NULL)
    {
      Simulator_Global_State_ctor_init_8128((void *)CONCAT22(in_DX,pvVar1));
    }
    if (_p_SimulatorGlobalState == NULL)
    {
      log_debug_message_v(0x110,0x1050);
      win16_app_exit_wrapper();
    }
    Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
              (_p_SimulatorWorldContext,0x0,0x0,0x8000000,0x0,0x0);
    Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
              (_p_SimulatorWorldContext,0x0,0x0,0x8000000,0x0,0x0);
    Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
              (_p_SimulatorWorldContext,0x0,0x0,0xff000000,0x0,0x0);
    Simulator_Global_Execute_Single_Tick_Logic_838e((void **)_p_SimulatorGlobalState);
    Simulator_Global_Reset_Tick_Counter_8334();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable Initializations
// References global pointers in segment 1050:
// - PTR_DAT_1050_5748
// - PTR_DAT_1050_65e2
// Initializes a local command object with vtable 1008:389A.

void __stdcall16far Simulator_allocate_and_init_internal(void)
{
  int in_DX;
  undefined2 unaff_SS;
  undefined2 in_stack_0000fee2;
  undefined2 local_112;
  undefined2 uStack_110;
  void *pvStack_6;
  
  pvStack_6 = allocate_memory(CONCAT22(in_stack_0000fee2,0xa));
  if (in_DX != 0x0 || pvStack_6 != NULL)
  {
    Simulator_Global_State_ctor_init_8128((void *)CONCAT22(in_DX,pvStack_6));
  }
  if (_p_SimulatorGlobalState == NULL)
  {
    log_debug_message_v(0x130,0x1050);
    win16_app_exit_wrapper();
  }
  Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
            (_p_SimulatorWorldContext,0x0,0x0,0x8000000,0x0,0x0);
  Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
            (_p_SimulatorWorldContext,0x0,0x0,0x8000000,0x0,0x0);
  Simulator_Command_Select_ctor_init_532e
            ((undefined2 *)CONCAT22(unaff_SS,&local_112),(void *)0xff000000);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_112));
  Simulator_Global_Execute_Single_Tick_Logic_838e((void **)_p_SimulatorGlobalState);
  local_112 = 0x389a;
  uStack_110 = 0x1008;
  Simulator_Global_Reset_Tick_Counter_8334();
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
