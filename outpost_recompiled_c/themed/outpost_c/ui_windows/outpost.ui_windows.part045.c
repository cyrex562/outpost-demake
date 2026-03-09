/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 45/54
 * Original lines (combined): 123328-124333
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x3436 (vtable 0x3436). Links to Resource 0x3C and
// sets base dialog ID 0x180.

ushort __stdcall16far
UI_SubDialog_Type3436_ctor_init_2ea2
          (void *this_ptr,void *arg2,ushort arg3,ushort arg4,ushort parent_hwnd)
{
  astruct_63 *uVar1;
  long lVar1;
  undefined2 in_stack_00000010;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,arg3,arg4,0x180,in_stack_00000010);
  *(undefined2 *)((int)this_ptr + 0x8e) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x90) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x92) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x94) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x96) = 0x0;
  *_this_ptr = 0x3436;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3c);
  *(undefined2 *)((int)this_ptr + 0x96) = (int)lVar1;
  *(undefined2 *)((int)this_ptr + 0x98) = (int)((ulong)lVar1 >> 0x10);
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for sub-dialog component type 0x3436. Cleans up via base dialog
// destructor and notifies global table.

void __stdcall16far UI_SubDialog_Type3436_dtor_Internal_2f06(void *this_ptr)
{
  void *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x3436;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Commit handler for dialog Type 0x3436. Swaps the system context using Resource 0x2B
// before closing.

void __stdcall16far UI_SubDialog_Type3436_On_Commit_Logic_2f32(void *this_ptr)
{
  void *puVar1;
  
  puVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  UI_System_Context_Swap_Logic((void *)puVar1,(int)((ulong)puVar1 >> 0x10));
  UI_SubDialog_Base_Try_Destroy_7b98(this_ptr);
  return;
}



void __stdcall16far UI_SubDialog_Type3436_Show_Logic_2f5a(void *this_ptr)
{
  int in_stack_00000006;
  
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  UI_Window_Move_or_Center_826c(this_ptr,in_stack_00000006,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  SetFocus16(*(HWND16 *)((int)this_ptr + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes the trade dialog, setting up source/destination list boxes, formatting
// colony-specific names in the title, and populating entity lists.

void __stdcall16far UI_Trade_Dialog_Initialize_and_Layout_2f90(void *param_1)
{
  HWND16 HVar1;
  char *pcVar2;
  ushort msg;
  short id;
  void *this_ptr;
  void *manager_ptr;
  void **unaff_SS;
  long lVar3;
  LRESULT pvVar4;
  undefined1 *puVar5;
  HWND16 in_stack_0000fed2;
  void *local_116 [0x2];
  ushort local_112;
  undefined1 local_10e [0x82];
  undefined1 local_8c [0x82];
  void *local_a;
  long local_6;
  
  local_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  local_a = (void *)*(undefined4 *)((int)local_6 + 0x68);
  manager_ptr = (void *)((ulong)param_1 >> 0x10);
  this_ptr = (void *)param_1;
  GetWindowText16(0x80,(void **)CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),unaff_SS),
                  in_stack_0000fed2);
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_10e),
              (undefined1 *)CONCAT22(unaff_SS,local_8c),local_a);
  puVar5 = local_10e;
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,puVar5),
                  *(HWND16 *)((int)this_ptr + 0x6));
  HVar1 = GetDlgItem16(0x182,*(short *)((int)this_ptr + 0x6));
  *(HWND16 *)((int)this_ptr + 0x92) = HVar1;
  UI_Trade_Manager_Populate_Dual_Entity_Lists_Wrapper
            (*(long *)((int)this_ptr + 0x96),local_116,unaff_SS);
  UI_Trade_Dialog_Populate_Entity_List_3374(this_ptr,manager_ptr,local_112);
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  msg = (ushort)((ulong)lVar3 >> 0x10);
  pcVar2 = UI_Trade_Manager_res_strdup_by_id_Wrapper(*(long *)((int)this_ptr + 0x96));
  pvVar4 = SendMessage16((HWND16)pcVar2,msg,0xffff,
                         CONCAT22(puVar5,*(undefined2 *)((int)this_ptr + 0x92)));
  id = (short)((ulong)pvVar4 >> 0x10);
  HVar1 = GetDlgItem16(0x183,*(short *)((int)this_ptr + 0x6));
  *(HWND16 *)((int)this_ptr + 0x94) = HVar1;
  UI_Trade_Dialog_Populate_Entity_List_3374(this_ptr,manager_ptr,(ushort)local_116[0x0])
  ;
  pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  SendDlgItemMessage16
            ((HWND16)pcVar2,id,0x0,0x403,
             CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),0x183));
  SendDlgItemMessage16
            ((HWND16)pcVar2,id,0xffff,0x40d,
             CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),0x183));
  HVar1 = GetDlgItem16(0x181,*(short *)((int)this_ptr + 0x6));
  *(HWND16 *)((int)this_ptr + 0x8e) = HVar1;
  HVar1 = GetDlgItem16(0x184,*(short *)((int)this_ptr + 0x6));
  *(HWND16 *)((int)this_ptr + 0x90) = HVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the trade dialog. Manages committing transactions, validates
// route existence between colonies, and spawns outcome sub-dialogs.

void __stdcall16far
UI_Trade_Dialog_On_Command_311a
          (void *param_1,char *param_2,ushort param_3,undefined4 param_4)
{
  void *pvVar1;
  char *pcVar2;
  undefined2 unaff_SI;
  void *pvVar3;
  undefined *puVar4;
  int dialog_id;
  
  UI_Trade_Dialog_Sync_List_Selections_323c(param_1);
  Resource_Manager_LoadString_to_Internal_Buffer
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  if (param_4._2_2_ == 0x181)
  {
    pcVar2 = param_2;
    UI_Trade_Manager_Update_Transaction_Strings_Logic
              (*(long *)((int)param_1 + 0x96),(char *)((int)param_1 + 0x19a),param_2);
    pvVar1 = (void *)UI_Trade_Manager_Check_Route_Validity_Logic
                               ((int)*(undefined4 *)((int)param_1 + 0x96),
                                (int)((ulong)*(undefined4 *)((int)param_1 + 0x96) >>
                                     0x10));
    if (pvVar1 == NULL)
    {
      dialog_id = 0x21;
    }
    else
    {
      UI_Trade_Manager_Validate_Entity_Name_Wrapper
                (*(long *)((int)param_1 + 0x96),CONCAT22(param_2,(int)param_1 + 0x9a));
      pvVar3 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                         ((u16)_p_SimulatorGlobalState,
                          (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                          (void *)CONCAT22(pcVar2,pvVar1));
      puVar4 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                         ((u16)_p_SimulatorGlobalState,
                          (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                          (void *)*(undefined4 *)((int)pvVar3 + 0x10));
      PTR_DAT_1050_0000_1050_5f0e = (undefined *)((ulong)puVar4 >> 0x10);
      PTR_DAT_1050_0000_1050_5f0c = (undefined *)puVar4;
      PTR_DAT_1050_0000_1050_5f10 = (undefined *)0x1;
      dialog_id = 0x25;
    }
    UI_SubDialog_Factory_Create_and_Show_by_ID_af40
              (_p_UISubDialogTable,*(uint16_t *)((int)param_1 + 0x8),dialog_id);
    SendMessage16(0x0,0x0,0x2,CONCAT22(unaff_SI,*(undefined2 *)((int)param_1 + 0x6)));
    pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    UI_System_Context_Swap_Logic((void *)pvVar3,(int)((ulong)pvVar3 >> 0x10));
  }
  else
  {
    if ((param_4._2_2_ == 0x181) || (0x1 < param_4._2_2_ - 0x182U))
    {
      UI_SubDialog_Base_On_Command_Logic_7b3c
                (param_1,(ushort)param_2,param_3,(ushort)param_4,
                 CONCAT22(unaff_SI,param_4._2_2_));
      return;
    }
    UI_Trade_Dialog_On_List_Event_331a(param_1,(ushort)param_2,param_3);
  }
  return;
}



// Synchronizes the current selection between two parallel list boxes (IDs 0x92 and
// 0x94) in a trade or exchange dialog.

ulong __stdcall16far UI_Trade_Dialog_Sync_List_Selections_323c(void *this_ptr)
{
  LRESULT pvVar1;
  LRESULT pvVar2;
  ushort in_stack_00000006;
  undefined4 in_stack_0000fff4;
  long lVar3;
  ushort w_param;
  
  lVar3 = CONCAT22((int)((ulong)in_stack_0000fff4 >> 0x10),
                   *(undefined2 *)((int)this_ptr + 0x92));
  pvVar1 = SendMessage16(0x0,0x0,0x0,lVar3);
  pvVar2 = SendMessage16(0x0,0x0,0x0,
                         CONCAT22((int)((ulong)lVar3 >> 0x10),
                                  *(undefined2 *)((int)this_ptr + 0x94)));
  lVar3 = CONCAT22((void *)pvVar2,*(undefined2 *)((int)this_ptr + 0x92));
  SendMessage16((int)this_ptr + 0x9a,in_stack_00000006,(ushort)(void *)pvVar1,lVar3);
  w_param = (ushort)((ulong)lVar3 >> 0x10);
  pvVar1 = SendMessage16((int)this_ptr + 0x19a,in_stack_00000006,w_param,
                         CONCAT22(w_param,*(undefined2 *)((int)this_ptr + 0x94)));
  return (ulong)pvVar1;
}



// Updates the textual status of a resource link and enables/disables the confirmation
// button based on whether the trade connection is valid and active.

void __stdcall16far UI_Trade_Dialog_Update_Link_Status_32a8(void *this_ptr)
{
  void *pvVar1;
  uint uVar2;
  char *pcVar3;
  char *in_stack_00000006;
  
  pvVar1 = (void *)((int)this_ptr + 0x19a);
  pcVar3 = in_stack_00000006;
  UI_Trade_Manager_Report_Link_Status_Wrapper
            (*(long *)((int)this_ptr + 0x96),(char *)((int)this_ptr + 0x9a),
             in_stack_00000006);
  SetWindowText16((void *)CONCAT22(pcVar3,pvVar1),*(HWND16 *)((int)this_ptr + 0x90));
  uVar2 = UI_Trade_Manager_Is_Entity_Link_Active_Logic_maybe
                    (*(long *)((int)this_ptr + 0x96),(char *)((int)this_ptr + 0x9a),
                     in_stack_00000006);
  EnableWindow16(uVar2 & 0x1,*(BOOL16 *)((int)this_ptr + 0x8e));
  return;
}



// Event handler for trade dialog list boxes. Triggers status updates on selection
// change (1) and manages sub-window positioning on move (7).

ushort __stdcall16far
UI_Trade_Dialog_On_List_Event_331a(void *this_ptr,ushort list_hwnd,int event_code)
{
  undefined2 unaff_SS;
  int in_stack_0000000a;
  int local_e [0x2];
  int iStack_a;
  HWND16 HStack_6;
  
  HStack_6 = event_code;
  if (in_stack_0000000a == 0x1)
  {
    UI_Trade_Dialog_Update_Link_Status_32a8(this_ptr);
  }
  else
  {
    if (in_stack_0000000a != 0x7)
    {
      return 0x0;
    }
    GetWindowRect16((int *)CONCAT22(unaff_SS,local_e),event_code);
    iStack_a -= local_e[0x0];
    SetWindowPos16(0x2,0x50,iStack_a,0x0,0x0,0x0,HStack_6);
  }
  return 0x1;
}



// Populates a list box with entity names retrieved from the Trade Manager. Iterates
// through the manager's collection and performs name lookups.

void __stdcall16far
UI_Trade_Dialog_Populate_Entity_List_3374
          (void *this_ptr,void *manager_ptr,ushort list_hwnd)
{
  undefined2 *puVar1;
  char *ptr;
  ushort extraout_DX;
  ushort msg;
  undefined2 uVar2;
  LRESULT pvVar3;
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000000c;
  ushort uVar4;
  undefined4 in_stack_0000ffdc;
  ulong uStack_a;
  ulong uStack_6;
  
  uVar2 = 0x1538;
  SendMessage16(0x0,0x0,0x0,
                CONCAT22((int)((ulong)in_stack_0000ffdc >> 0x10),in_stack_0000000c));
  puVar1 = (undefined2 *)((int)*_list_hwnd + 0x10);
  uVar4 = list_hwnd;
  uStack_6 = (*(code *)*puVar1)(0x1538,list_hwnd,in_stack_0000000a);
  uStack_a = 0x0;
  while( true )
  {
    if (uStack_6 <= uStack_a)
    {
      return;
    }
    puVar1 = (undefined2 *)((int)*_list_hwnd + 0x4);
    (*(code *)*puVar1)(uVar2,list_hwnd,in_stack_0000000a,(int)uStack_a,
                       (int)(uStack_a >> 0x10));
    msg = extraout_DX;
    ptr = UI_Trade_Manager_res_strdup_by_id_Wrapper(*(long *)((int)this_ptr + 0x96));
    pvVar3 = SendMessage16((HWND16)ptr,msg,0x0,CONCAT22(uVar4,in_stack_0000000c));
    uVar2 = 0x1000;
    free_if_not_null(ptr);
    if (pvVar3 == (LRESULT)0xffffffff) break;
    if (pvVar3 == (LRESULT)0xfffffffe)
    {
      return;
    }
    uStack_a += 0x1;
  }
  return;
}



void * __stdcall16far
UI_SubDialog_Type3436_dtor_Scalar_Deleting_3410(void *this_ptr,uchar flags)
{
  byte in_stack_00000008;
  
  UI_SubDialog_Type3436_dtor_Internal_2f06(this_ptr);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x38FA (vtable 0x38FA). Links to Resource 0x3C and
// initializes base ID 0x192.

ushort __stdcall16far
UI_SubDialog_Type38FA_ctor_init_34a2
          (void *this_ptr,void *arg2,ushort arg3,ushort arg4,ushort parent_hwnd)
{
  astruct_62 *uVar1;
  void *puVar3;
  undefined2 in_stack_00000010;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,arg3,arg4,0x192,in_stack_00000010);
  *(undefined4 *)((int)this_ptr + 0x8e) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x92) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x94) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x96) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x98) = 0x0;
  *_this_ptr = (char *)s_Null_Ptr_1050_38f3 + 0x7;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3c);
  *(undefined2 *)((int)this_ptr + 0x8e) = (void *)puVar3;
  *(undefined2 *)((int)this_ptr + 0x90) = (int)((ulong)puVar3 >> 0x10);
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type38FA_dtor_Internal_3506(void *this_ptr)
{
  void *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = (char *)s_Null_Ptr_1050_38f3 + 0x7;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_SubDialog_Type3436_On_Commit_Logic_Alternative_3532(void *this_ptr)
{
  void *puVar1;
  
  puVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  UI_System_Context_Swap_Logic((void *)puVar1,(int)((ulong)puVar1 >> 0x10));
  UI_SubDialog_Base_Try_Destroy_7b98(this_ptr);
  return;
}



void __stdcall16far UI_SubDialog_Type3436_Show_Logic_Alternative_355a(void *this_ptr)
{
  int in_stack_00000006;
  
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  UI_Window_Move_or_Center_826c(this_ptr,in_stack_00000006,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  SetFocus16(*(HWND16 *)((int)this_ptr + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for sub-dialog type 3590. Manages transaction submissions via
// UI_Trade_Manager and handles context swapping for the simulation.

void __stdcall16far
UI_SubDialog_Type3590_On_Command_37f0
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  undefined2 unaff_SS;
  undefined2 in_stack_0000fbec;
  undefined1 local_40c [0x402];
  char *local_a;
  void *local_6;
  
  if (param_4._2_2_ == 0x193)
  {
    local_6 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    local_a = (char *)*(undefined4 *)((int)local_6 + 0x68);
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_40c,0x3ff),
               CONCAT22(0x44f,unaff_SS));
    MessageBox16(0x30,(char *)local_a,(char *)((ulong)local_a >> 0x10),(ushort)local_40c
                );
    UI_Trade_Manager_Submit_Transaction_Logic
              ((int)*(undefined4 *)((int)param_1 + 0x8e),
               (int)((ulong)*(undefined4 *)((int)param_1 + 0x8e) >> 0x10));
    PostMessage16(0x0,0x0,0x2,
                  CONCAT22(in_stack_0000fbec,*(undefined2 *)((int)param_1 + 0x6)));
  }
  else
  {
    if (param_4._2_2_ != 0x194)
    {
      UI_SubDialog_Base_On_Command_Logic_7b3c
                (param_1,param_2,param_3,(ushort)param_4,
                 CONCAT22(in_stack_0000fbec,param_4._2_2_));
      return;
    }
    UI_SubDialog_Factory_Create_and_Show_by_ID_af40
              (_p_UISubDialogTable,*(uint16_t *)((int)param_1 + 0x8),0x21);
    SendMessage16(0x0,0x0,0x2,
                  CONCAT22(in_stack_0000fbec,*(undefined2 *)((int)param_1 + 0x6)));
    local_6 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b)
    ;
    UI_System_Context_Swap_Logic((void *)local_6,(int)((ulong)local_6 >> 0x10));
  }
  return;
}



void * __stdcall16far
UI_SubDialog_Type38FA_dtor_Scalar_Deleting_38d4(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_Type38FA_dtor_Internal_3506(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Trade Request/Transaction Dialog (vtable 0x3FFC). Links to
// Resource 0x3C and initializes tracking fields for quantity (0x9C), caps (0x9E), and
// current selection type (0xA0). Base dialog ID 0x185.

ushort __stdcall16far
UI_Trade_Request_Dialog_ctor_init_3966
          (void *this_ptr,void *arg2,ushort arg3,ushort arg4,ushort parent_hwnd)
{
  astruct_61 *uVar1;
  void *puVar3;
  undefined2 in_stack_00000010;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,arg3,arg4,0x185,in_stack_00000010);
  *(undefined4 *)((int)this_ptr + 0x8e) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x92) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x96) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x9a) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x9c) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x9e) = 0x0;
  *(undefined2 *)((int)this_ptr + 0xa0) = 0x0;
  *(undefined2 *)((int)this_ptr + 0xa2) = 0x0;
  *(undefined2 *)((int)this_ptr + 0xa4) = 0x5;
  *_this_ptr = 0x3ffc;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3c);
  *(undefined2 *)((int)this_ptr + 0x8e) = (void *)puVar3;
  *(undefined2 *)((int)this_ptr + 0x90) = (int)((ulong)puVar3 >> 0x10);
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Trade_Request_Dialog_dtor_Internal_39e2(void *this_ptr)
{
  void *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x3ffc;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Trade_Request_Dialog_On_Commit_Logic_3a0e(void *this_ptr)
{
  void *puVar2;
  
  puVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  UI_System_Context_Swap_Logic((void *)puVar2,(int)((ulong)puVar2 >> 0x10));
  UI_SubDialog_Base_Try_Destroy_7b98(this_ptr);
  return;
}



// Increments or decrements the transaction quantity (offset 0x9C) and updates the UI
// label 0x18E. Enforces caps and enables/disables the confirmation button based on the
// current amount.

ushort __stdcall16far
UI_Trade_Request_Dialog_Adjust_Quantity_3a36
          (void *this_ptr,ushort low_id,ushort high_id,int delta)
{
  bool bVar1;
  astruct_60 *uVar2;
  int in_stack_0000000c;
  
  bVar1 = false;
  if (in_stack_0000000c == 0x0)
  {
    if (*(uint *)((int)this_ptr + 0x9e) <= *(uint *)((int)this_ptr + 0x9c))
    goto LAB_1040_3a79;
    *(int *)((int)this_ptr + 0x9c) = *(int *)((int)this_ptr + 0x9c) + 0x1;
  }
  else
  {
    if (in_stack_0000000c != 0x1) goto LAB_1040_3a79;
    if (*(int *)((int)this_ptr + 0x9c) == 0x0) goto LAB_1040_3a79;
    *(int *)((int)this_ptr + 0x9c) = *(int *)((int)this_ptr + 0x9c) + -0x1;
  }
  bVar1 = true;
LAB_1040_3a79:
  if (bVar1)
  {
    SetDlgItemInt(0x0,*(uint16_t *)((int)this_ptr + 0x9c),0x18e,
                  *(HWND16 *)((int)this_ptr + 0x6));
  }
  if ((*(int *)((int)this_ptr + 0x9c) != 0x0) && (*(int *)((int)this_ptr + 0xa2) == 0x0)
     )
  {
    *(undefined2 *)((int)this_ptr + 0xa2) = 0x1;
    EnableWindow16(0x1,*(BOOL16 *)((int)this_ptr + 0x9a));
  }
  if ((*(int *)((int)this_ptr + 0x9c) == 0x0) && (*(int *)((int)this_ptr + 0xa2) != 0x0)
     )
  {
    *(undefined2 *)((int)this_ptr + 0xa2) = 0x0;
    EnableWindow16(0x0,*(BOOL16 *)((int)this_ptr + 0x9a));
  }
  return 0x0;
}



void __stdcall16far UI_SubDialog_Base_Show_and_Focus_3ae8(void *param_1)
{
  int x;
  void *this_ptr;
  
  this_ptr = (void *)param_1;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  x = (int)((ulong)param_1 >> 0x10);
  UI_Window_Move_or_Center_826c(this_ptr,x,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  SetFocus16(*(HWND16 *)((int)this_ptr + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes the trade request dialog, setting up radio buttons for categories and
// populating the item list via UI_Trade_Manager. Sets up initial button states.

void __stdcall16far UI_Trade_Request_Dialog_Initialize_and_Layout_3b1e(void *param_1)
{
  HWND16 HVar1;
  void *this_ptr;
  HWND16 unaff_SI;
  char **out_b;
  void *unaff_SS;
  ulong list_ptr;
  undefined1 *puVar2;
  void *pvVar3;
  undefined4 local_11a;
  undefined1 local_10e [0x82];
  undefined1 local_8c [0x82];
  void *local_a;
  long local_6;
  
  local_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  local_a = (void *)*(undefined4 *)((int)local_6 + 0x68);
  out_b = (char **)((ulong)param_1 >> 0x10);
  this_ptr = (void *)param_1;
  GetWindowText16(0x80,(void *)CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),unaff_SS),
                  unaff_SI);
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_10e),
              (undefined1 *)CONCAT22(unaff_SS,local_8c),local_a);
  puVar2 = local_10e;
  pvVar3 = unaff_SS;
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,puVar2),
                  *(HWND16 *)((int)this_ptr + 0x6));
  local_11a = (undefined4 *)CONCAT22(out_b,(undefined4 *)((int)this_ptr + 0x96));
  UI_Trade_Manager_Get_Transaction_Strings_Logic
            (*(long *)((int)this_ptr + 0x8e),(char **)((int)this_ptr + 0x92),out_b);
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_10e,0x80),
             (long)CONCAT22(0x7d7,unaff_SS));
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_8c),
              (undefined1 *)CONCAT22(unaff_SS,local_10e),(void *)*local_11a);
  SetDlgItemText((undefined1 *)CONCAT22(unaff_SS,local_8c),0x187,
                 *(HWND16 *)((int)this_ptr + 0x6));
  CheckRadioButton16(0x188,0x18d,0x188,*(HWND16 *)((int)this_ptr + 0x6));
  *(undefined2 *)((int)this_ptr + 0xa0) = 0x188;
  list_ptr = UI_Trade_Manager_Get_or_Init_List_by_Type_Logic
                       ((int)*(undefined4 *)((int)this_ptr + 0x8e),
                        (int)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10),
                        *(undefined2 *)((int)this_ptr + 0xa0));
  UI_Trade_Request_Dialog_Populate_Item_List_3f12
            (this_ptr,list_ptr,(ulong)CONCAT22(pvVar3,puVar2));
  UI_Trade_Request_Dialog_Refresh_Selection_Logic_3e08(this_ptr);
  HVar1 = GetDlgItem16(0x186,*(short *)((int)this_ptr + 0x6));
  *(HWND16 *)((int)this_ptr + 0x9a) = HVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Main command dispatcher for the Trade Request dialog. Handles 'Execute Transaction'
// (0x186), category radio buttons (0x188-0x18D), and forwards standard commands.
// Triggers context swaps and new sub-dialog creation (ID 0x22).

void __stdcall16far
UI_Trade_Request_Dialog_On_Command_3c64
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  uint16_t id1;
  ulong list_ptr;
  LRESULT pvVar1;
  void *pvVar2;
  undefined2 in_stack_0000fff4;
  undefined2 in_stack_0000fff6;
  
  if (param_4._2_2_ == 0x186)
  {
    pvVar1 = SendDlgItemMessage16
                       (0x0,0x0,0x0,0x409,
                        CONCAT22(*(undefined2 *)((int)param_1 + 0x6),0x190));
    id1 = GetDlgItemInt16(0x0,0x0,0x0,0x18e);
    UI_Trade_Manager_Set_Transaction_ID_Logic
              (*(long *)((int)param_1 + 0x8e),id1,(int)pvVar1,
               *(int *)((int)param_1 + 0xa0));
    UI_SubDialog_Factory_Create_and_Show_by_ID_af40
              (_p_UISubDialogTable,*(uint16_t *)((int)param_1 + 0x8),0x22);
    SendMessage16(0x0,0x0,0x2,
                  CONCAT22(in_stack_0000fff4,*(undefined2 *)((int)param_1 + 0x6)));
    pvVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    UI_System_Context_Swap_Logic((void *)pvVar2,(int)((ulong)pvVar2 >> 0x10));
  }
  else
  {
    if (param_4._2_2_ - 0x186U < 0x2)
    {
LAB_1040_3c7f:
      UI_SubDialog_Base_On_Command_Logic_7b3c
                (param_1,param_2,param_3,(ushort)param_4,
                 CONCAT22(in_stack_0000fff4,param_4._2_2_));
      return;
    }
    if (param_4._2_2_ - 0x188U < 0x5 || param_4._2_2_ == 0x18d)
    {
      *(int *)((int)param_1 + 0xa0) = param_4._2_2_;
      list_ptr = UI_Trade_Manager_Get_or_Init_List_by_Type_Logic
                           ((int)*(undefined4 *)((int)param_1 + 0x8e),
                            (int)((ulong)*(undefined4 *)((int)param_1 + 0x8e) >> 0x10),
                            param_4._2_2_);
      UI_Trade_Request_Dialog_Populate_Item_List_3f12
                (param_1,list_ptr,CONCAT22(in_stack_0000fff6,in_stack_0000fff4));
    }
    else
    {
      if (param_4._2_2_ - 0x188U != 0x8) goto LAB_1040_3c7f;
      if ((ushort)param_4 != 0x1)
      {
        return;
      }
    }
    UI_Trade_Request_Dialog_Refresh_Selection_Logic_3e08(param_1);
  }
  return;
}



void __stdcall16far UI_Trade_Request_Dialog_Invalidate_Rect_3ddc(void *this_ptr)
{
  void *unaff_SS;
  undefined2 in_stack_00000006;
  
  InvalidateRect16(0x0,(void *)CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),unaff_SS),
                   0x5);
  return;
}



// Updates the radio button states and refreshes the transaction cap and item ID based
// on the currently selected category. Triggers a UI redraw via 3DDC.

void __stdcall16far UI_Trade_Request_Dialog_Refresh_Selection_Logic_3e08(void *this_ptr)
{
  int iVar1;
  astruct_59 *uVar2;
  LRESULT pvVar2;
  undefined2 in_stack_00000006;
  
  CheckRadioButton16(*(uint16_t *)((int)this_ptr + 0xa0),0x18d,0x188,
                     *(HWND16 *)((int)this_ptr + 0x6));
  *(undefined2 *)((int)this_ptr + 0x9c) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x9e) = 0x0;
  pvVar2 = SendDlgItemMessage16
                     (0x0,0x0,0x0,0x409,
                      CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),0x190));
  if ((pvVar2 != (LRESULT)0xffffffff) || (false))
  {
    iVar1 = UI_Trade_Manager_Get_Item_ID_by_Type_and_Index_Logic
                      (*(long *)((int)this_ptr + 0x8e),(int)(void *)pvVar2,
                       *(int *)((int)this_ptr + 0xa0));
    *(int *)((int)this_ptr + 0x9e) = iVar1;
  }
  SetDlgItemInt(0x0,*(uint16_t *)((int)this_ptr + 0x9c),0x18e,
                *(HWND16 *)((int)this_ptr + 0x6));
  SetDlgItemInt(0x0,*(uint16_t *)((int)this_ptr + 0x9e),0x191,
                *(HWND16 *)((int)this_ptr + 0x6));
  switch(*(undefined2 *)((int)this_ptr + 0xa0))
  {
  case 0x188:
    *(undefined2 *)((int)this_ptr + 0xa4) = 0x5;
    break;
  case 0x189:
    *(undefined2 *)((int)this_ptr + 0xa4) = 0x6;
    break;
  case 0x18a:
    *(undefined2 *)((int)this_ptr + 0xa4) = 0x7;
    break;
  case 0x18b:
    *(undefined2 *)((int)this_ptr + 0xa4) = 0x8;
    break;
  case 0x18c:
    *(undefined2 *)((int)this_ptr + 0xa4) = 0x9;
    break;
  case 0x18d:
    *(undefined2 *)((int)this_ptr + 0xa4) = 0xa;
  }
  UI_Trade_Request_Dialog_Invalidate_Rect_3ddc(this_ptr);
  return;
}



// Populates the dialog's primary list box (ID 400) with available items for trade.
// Iterates through the trade manager's list and appends item names.

void __stdcall16far
UI_Trade_Request_Dialog_Populate_Item_List_3f12
          (void *this_ptr,ulong list_ptr,ulong arg3)
{
  undefined4 uVar1;
  int iVar2;
  astruct_58 *uVar2;
  long lVar3;
  LRESULT pvVar4;
  undefined2 in_stack_00000006;
  undefined1 local_a [0x8];
  
  SendDlgItemMessage16
            (0x0,0x0,0x0,0xb,CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),0x190));
  SendDlgItemMessage16
            (0x0,0x0,0x0,0x405,CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),0x190));
  init_long_pair(local_a,list_ptr);
  while( true )
  {
    lVar3 = get_next_list_item(local_a);
    iVar2 = (int)((ulong)lVar3 >> 0x10);
    if (iVar2 == 0x0 && (int)lVar3 == 0x0) break;
    uVar1 = *(undefined4 *)((int)lVar3 + 0x4);
    pvVar4 = SendDlgItemMessage16
                       ((HWND16)uVar1,(short)((ulong)uVar1 >> 0x10),0x0,0x401,
                        CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),0x190));
    if (((pvVar4 == (LRESULT)0xffffffff) && (true)) ||
       ((pvVar4 == (LRESULT)0xfffffffe && (true)))) break;
  }
  SendDlgItemMessage16
            (0x0,0x0,0x0,0x407,CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),0x190));
  SendDlgItemMessage16
            (0x0,0x0,0x1,0xb,CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),0x190));
  return;
}



void * __stdcall16far
UI_SubDialog_Type3436_dtor_Scalar_Deleting_3fd6(void *this_ptr,uchar flags)
{
  byte in_stack_00000008;
  
  UI_Trade_Request_Dialog_dtor_Internal_39e2(this_ptr);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}
