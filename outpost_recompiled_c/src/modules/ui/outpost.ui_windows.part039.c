/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 39/54
 * Original lines (combined): 117362-118277
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes the trade dialog, sets up window text with colony names, and populates
// dual entity lists for trade selection.

void __stdcall16far UI_Trade_Dialog_Initialize_and_Layout_bea4(u32 param_1)
{
  HWND16 HVar1;
  char *pcVar2;
  ushort uVar3;
  int iVar4;
  undefined2 uVar5;
  void *unaff_SS;
  long lVar6;
  LRESULT pvVar7;
  undefined1 *puVar8;
  HWND16 in_stack_0000fed2;
  void *local_116 [0x4];
  undefined1 local_10e [0x82];
  undefined1 local_8c [0x82];
  void *local_a;
  long local_6;
  
  local_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  local_a = (void *)*(undefined4 *)((int)local_6 + 0x68);
  uVar5 = (undefined2)(param_1 >> 0x10);
  iVar4 = (int)param_1;
  GetWindowText16(0x80,(void *)CONCAT22(*(undefined2 *)(iVar4 + 0x6),unaff_SS),
                  in_stack_0000fed2);
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_10e),
              (undefined1 *)CONCAT22(unaff_SS,local_8c),local_a);
  puVar8 = local_10e;
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,puVar8),*(HWND16 *)(iVar4 + 0x6));
  HVar1 = GetDlgItem16(0x179,*(short *)(iVar4 + 0x6));
  *(HWND16 *)(iVar4 + 0x92) = HVar1;
  UI_Populate_Dual_Entity_Lists_Logic
            ((void *)(void *)*(undefined4 *)(iVar4 + 0x8e),
             (void **)((ulong)*(undefined4 *)(iVar4 + 0x8e) >> 0x10),local_116);
  UI_Trade_Dialog_Populate_Entity_List_c374
            (param_1,(u32 *)local_116._4_4_,SUB42(local_116._4_4_,0x2));
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  uVar3 = (ushort)((ulong)lVar6 >> 0x10);
  pcVar2 = res_strdup_by_id_logic(*(long *)(iVar4 + 0x8e));
  pvVar7 = SendMessage16((HWND16)pcVar2,uVar3,0xffff,
                         CONCAT22(puVar8,*(undefined2 *)(iVar4 + 0x92)));
  uVar3 = (ushort)((ulong)pvVar7 >> 0x10);
  HVar1 = GetDlgItem16(0x17a,*(short *)(iVar4 + 0x6));
  *(HWND16 *)(iVar4 + 0x94) = HVar1;
  UI_Trade_Dialog_Populate_Entity_List_c374
            (param_1,(u32 *)local_116._0_4_,SUB42(local_116._0_4_,0x2));
  pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  pvVar7 = SendMessage16((HWND16)pcVar2,uVar3,0x0,
                         CONCAT22(puVar8,*(undefined2 *)(iVar4 + 0x94)));
  *(undefined2 *)(iVar4 + 0x9c) = (int)pvVar7;
  SendMessage16((HWND16)pcVar2,uVar3,0xffff,
                CONCAT22(puVar8,*(undefined2 *)(iVar4 + 0x94)));
  HVar1 = GetDlgItem16(0x178,*(short *)(iVar4 + 0x6));
  *(HWND16 *)(iVar4 + 0x96) = HVar1;
  HVar1 = GetDlgItem16(0x177,*(short *)(iVar4 + 0x6));
  *(HWND16 *)(iVar4 + 0x98) = HVar1;
  HVar1 = GetDlgItem16(0x184,*(short *)(iVar4 + 0x6));
  *(HWND16 *)(iVar4 + 0x9a) = HVar1;
  return;
}



void __stdcall16far UI_SubDialog_Show_Center_and_Focus_c044(void *this_ptr)
{
  int x;
  void *this_ptr_00;
  
  this_ptr_00 = (void *)this_ptr;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  x = (int)((ulong)this_ptr >> 0x10);
  UI_Window_Move_or_Center_826c(this_ptr_00,x,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  SetFocus16(*(HWND16 *)((int)this_ptr_00 + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the trade dialog, manages adding/activating links between
// colonies and dispatching list events.

void __stdcall16far
UI_Trade_Dialog_On_Command_c07a
          (void *param_1,ushort param_2,HWND16 param_3,undefined4 param_4)
{
  int iVar1;
  undefined2 unaff_SI;
  char *unaff_SS;
  undefined1 local_70c [0x200];
  char local_50c [0x100];
  undefined1 local_40c [0x402];
  undefined4 local_a;
  char *local_6;
  
  UI_Trade_Dialog_Sync_List_Selections_c228((void *)CONCAT22(param_2,param_1));
  local_6 = Resource_Manager_LoadString_to_Internal_Buffer
                      ((int)_p_GlobalResourceManager,
                       (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  if (param_4._2_2_ == 0x177)
  {
    UI_Relationship_Manager_Add_Link_and_Check_Status_Logic
              ((int)*(undefined4 *)((int)param_1 + 0x8e),
               (int)((ulong)*(undefined4 *)((int)param_1 + 0x8e) >> 0x10),0x2,
               (int)param_1 + 0x19e,param_2,(int)param_1 + 0x9e,param_2);
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_40c,0x200),
               (long)CONCAT22(0x451,unaff_SS));
    sprintf_wrapper(local_70c);
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_50c,0x100),
               (long)CONCAT22(0x57b,unaff_SS));
    MessageBox16(0x30,local_50c,unaff_SS,(ushort)local_70c);
  }
  else
  {
    if (param_4._2_2_ != 0x178)
    {
      if ((param_4._2_2_ != 0x178) && (param_4._2_2_ - 0x179U < 0x2))
      {
        UI_Trade_Dialog_On_List_Event_c31a
                  ((void *)CONCAT22(param_2,param_1),param_3,(ushort)param_4);
        return;
      }
      UI_SubDialog_Base_On_Command_Logic_7b3c
                (param_1,param_2,param_3,(ushort)param_4,
                 CONCAT22(unaff_SI,param_4._2_2_));
      return;
    }
    local_a = CONCAT22(param_2,(int)param_1 + 0x9e);
    iVar1 = UI_Relationship_Manager_Activate_Link_Logic
                      ((void *)(void *)*(undefined4 *)((int)param_1 + 0x8e),
                       (char *)((ulong)*(undefined4 *)((int)param_1 + 0x8e) >> 0x10),
                       (char *)((int)param_1 + 0x19e));
    if (iVar1 == 0x0)
    {
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),
                 CONCAT22(local_40c,0x3ff),(long)CONCAT22(0x450,unaff_SS));
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),
                 CONCAT22(local_50c,0x3ff),(long)CONCAT22(0x57b,unaff_SS));
      MessageBox16(0x30,local_50c,unaff_SS,(ushort)local_40c);
      return;
    }
    UI_Component_Set_Offsets_16_1A_Logic
              ((void *)(void *)*(undefined4 *)((int)param_1 + 0x8e),
               (long)CONCAT22(param_2,(char *)((int)param_1 + 0x19e)),local_a);
    UI_SubDialog_Factory_Create_and_Show_by_ID_af40
              (_p_UISubDialogTable,*(uint16_t *)((int)param_1 + 0x8),0x1f);
  }
  PostMessage16(0x0,0x0,0x2,CONCAT22(unaff_SI,*(undefined2 *)((int)param_1 + 0x6)));
  return;
}



// Synchronizes the current selection between two parallel list boxes (IDs 0x92 and
// 0x94) in a trade or exchange dialog. Equivalent to 1040:323C.

void __stdcall16far UI_Trade_Dialog_Sync_List_Selections_c228(void *this_ptr)
{
  astruct_102 *uVar1;
  ushort msg;
  LRESULT pvVar1;
  LRESULT pvVar2;
  undefined4 in_stack_0000fff4;
  long lVar3;
  ushort w_param;
  
  msg = (ushort)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_102 *)this_ptr;
  lVar3 = CONCAT22((int)((ulong)in_stack_0000fff4 >> 0x10),uVar1->field146_0x92);
  pvVar1 = SendMessage16(0x0,0x0,0x0,lVar3);
  pvVar2 = SendMessage16(0x0,0x0,0x0,
                         CONCAT22((int)((ulong)lVar3 >> 0x10),uVar1->field147_0x94));
  lVar3 = CONCAT22((void *)pvVar2,uVar1->field146_0x92);
  SendMessage16((HWND16)&uVar1->field_0x9e,msg,(ushort)(void *)pvVar1,lVar3);
  w_param = (ushort)((ulong)lVar3 >> 0x10);
  SendMessage16((HWND16)(uVar1 + 0x1),msg,w_param,CONCAT22(w_param,uVar1->field147_0x94)
               );
  return;
}



// Updates the link status text and button enabled states in a trade dialog based on the
// validity of the selected connection. Equivalent to 1040:32A8.

void __stdcall16far UI_Trade_Dialog_Update_Link_Status_c294(void *this_ptr)
{
  void *pvVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar3 = this_ptr._2_2_;
  pvVar1 = (void *)UI_Relationship_Manager_Report_Link_Status_Logic
                             ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e),
                              (char *)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >>
                                      0x10),(char *)((int)this_ptr + 0x19e));
  SetWindowText16((void *)CONCAT22(uVar3,pvVar1),*(HWND16 *)((int)this_ptr + 0x9a));
  uVar2 = UI_Relationship_Manager_Get_Link_Status_Code_Logic
                    ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e),
                     (char *)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10),
                     (char *)((int)this_ptr + 0x19e));
  EnableWindow16(uVar2 & 0x1,*(BOOL16 *)((int)this_ptr + 0x96));
  EnableWindow16(uVar2 & 0x2,*(BOOL16 *)((int)this_ptr + 0x98));
  return;
}



// Event handler for trade dialog list boxes. Handles selection changes and window
// repositioning. Equivalent to 1040:331A.

u16 __stdcall16far
UI_Trade_Dialog_On_List_Event_c31a(void *this_ptr,HWND16 hwnd,int event_id)
{
  undefined2 unaff_SS;
  int local_e [0x2];
  int iStack_a;
  HWND16 HStack_6;
  int iStack_4;
  
  iStack_4 = event_id;
  HStack_6 = hwnd;
  if (event_id == 0x1)
  {
    UI_Trade_Dialog_Update_Link_Status_c294(this_ptr);
  }
  else
  {
    if (event_id != 0x7)
    {
      return 0x0;
    }
    GetWindowRect16((int *)CONCAT22(unaff_SS,local_e),hwnd);
    iStack_a -= local_e[0x0];
    SetWindowPos16(0x2,0x50,iStack_a,0x0,0x0,0x0,HStack_6);
  }
  return 0x1;
}



// Populates a list box with entity names from the trade manager. Equivalent to
// 1040:3374.

void __stdcall16far
UI_Trade_Dialog_Populate_Entity_List_c374(u32 this_ptr,u32 *manager_ptr,HWND16 hwnd)
{
  undefined2 *puVar1;
  char *ptr;
  ushort extraout_DX;
  ushort msg;
  undefined2 uVar2;
  LRESULT pvVar3;
  undefined2 in_stack_0000000c;
  u32 *puVar4;
  undefined4 in_stack_0000ffdc;
  ulong uStack_a;
  ulong uStack_6;
  
  uVar2 = 0x1538;
  SendMessage16(0x0,0x0,0x0,
                CONCAT22((int)((ulong)in_stack_0000ffdc >> 0x10),in_stack_0000000c));
  puVar1 = (undefined2 *)((int)*_manager_ptr + 0x10);
  puVar4 = manager_ptr;
  uStack_6 = (*(code *)*puVar1)(0x1538,manager_ptr,hwnd);
  uStack_a = 0x0;
  while( true )
  {
    if (uStack_6 <= uStack_a)
    {
      return;
    }
    puVar1 = (undefined2 *)((int)*_manager_ptr + 0x4);
    (*(code *)*puVar1)(uVar2,manager_ptr,hwnd,(int)uStack_a,(int)(uStack_a >> 0x10));
    msg = extraout_DX;
    ptr = res_strdup_by_id_logic(*(long *)((int)this_ptr + 0x8e));
    pvVar3 = SendMessage16((HWND16)ptr,msg,0x0,CONCAT22(puVar4,in_stack_0000000c));
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
UI_SubDialog_TypeC436_dtor_Scalar_Deleting_c410(void *this_ptr,byte flags)
{
  UI_SubDialog_TypeC436_dtor_Internal_be4a(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog component type 0xC74C. Links to Resource 0x3B (likely
// Relationship/Trade). Base dialog ID 0x17C.

void * __stdcall16far
UI_SubDialog_TypeC74C_ctor_init_c4a2(void *this_ptr,u32 arg2,u16 arg3,u16 arg4,u16 arg5)
{
  astruct_101 *puVar1;
  undefined2 uVar1;
  u32 *puVar2;
  
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,arg2,0x17c,arg5);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  puVar1 = (astruct_101 *)this_ptr;
  (&puVar1->field141_0x8e)[0x0] = NULL;
  (&puVar1->field141_0x8e)[0x1] = NULL;
  puVar1->field143_0x92 = 0x0;
  puVar1->field144_0x96 = 0x0;
  *(undefined2 *)this_ptr = 0xc74c;
  puVar1->field2_0x2 = 0x1038;
  puVar2 = (u32 *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3b);
  puVar1->field141_0x8e = (u32 *)puVar2;
  puVar1->field142_0x90 = (int)((ulong)puVar2 >> 0x10);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeC74C_dtor_Internal_c4fe(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xc74c;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Commit handler for dialog Type 0xC74C. Performs a system context swap using Resource
// 0x2B and destroys the window.

void __stdcall16far
UI_SubDialog_TypeC74C_On_Commit_Logic_c52a(void *param_1,undefined4 param_2)
{
  void *pvVar1;
  
  if (param_2._2_2_ == 0x0)
  {
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    UI_System_Context_Swap_Logic((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10));
  }
  UI_SubDialog_Base_Try_Destroy_7b98(param_1);
  return;
}



void __stdcall16far UI_SubDialog_Show_Center_and_Focus_c558(void *this_ptr)
{
  int x;
  void *this_ptr_00;
  
  this_ptr_00 = (void *)this_ptr;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  x = (int)((ulong)this_ptr >> 0x10);
  UI_Window_Move_or_Center_826c(this_ptr_00,x,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  SetFocus16(*(HWND16 *)((int)this_ptr_00 + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes and positions the link status dialog, formatting the title and setting up
// the status text for specific link IDs.

void __stdcall16far UI_Link_Status_Dialog_Initialize_and_Layout_c58e(undefined4 param_1)
{
  int iVar1;
  HWND16 unaff_SI;
  undefined2 uVar2;
  void *unaff_SS;
  undefined4 local_816;
  undefined1 local_80e [0x402];
  undefined1 local_40c [0x402];
  void *local_a;
  long local_6;
  
  local_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  local_a = (void *)*(undefined4 *)((int)local_6 + 0x68);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  GetWindowText16(0x80,(void *)CONCAT22(*(undefined2 *)(iVar1 + 0x6),unaff_SS),unaff_SI)
  ;
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_80e),
              (undefined1 *)CONCAT22(unaff_SS,local_40c),local_a);
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,local_80e),*(HWND16 *)(iVar1 + 0x6));
  local_816 = (undefined4 *)CONCAT22(uVar2,(undefined4 *)(iVar1 + 0x96));
  UI_Component_Get_Offsets_16_1A_Logic
            ((void *)(void *)*(undefined4 *)(iVar1 + 0x8e),
             (long *)((ulong)*(undefined4 *)(iVar1 + 0x8e) >> 0x10),
             (long *)(iVar1 + 0x92));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_80e,0x400),
             (long)CONCAT22(0x7d6,unaff_SS));
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_40c),
              (undefined1 *)CONCAT22(unaff_SS,local_80e),(void *)*local_816);
  SetDlgItemText((undefined1 *)CONCAT22(unaff_SS,local_40c),0x17f,
                 *(HWND16 *)(iVar1 + 0x6));
  return;
}



void * __stdcall16far
UI_SubDialog_TypeC74C_dtor_Scalar_Deleting_c726(void *this_ptr,byte flags)
{
  UI_SubDialog_TypeC74C_dtor_Internal_c4fe(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xCA6C (vtable 0xCA6C). Links to Resource 5
// (Building/Construction). Sets base dialog with ID 0xFB8.

void * __stdcall16far
UI_SubDialog_TypeCA6C_ctor_init_c7b8(void *this_ptr,u32 arg2,u16 arg3,u16 arg4,u16 arg5)
{
  astruct_100 *uVar1;
  undefined2 uVar2;
  u32 *puVar3;
  
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,arg2,0xfb8,arg5);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_100 *)this_ptr;
  (&uVar1->field141_0x8e)[0x0] = NULL;
  (&uVar1->field141_0x8e)[0x1] = NULL;
  *(undefined2 *)this_ptr = 0xca6c;
  uVar1->field2_0x2 = 0x1038;
  puVar3 = (u32 *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x5);
  uVar1->field141_0x8e = (u32 *)puVar3;
  uVar1->field142_0x90 = (int)((ulong)puVar3 >> 0x10);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeCA6C_dtor_Internal_c80a(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xca6c;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for dialog Type 0xCA6C. On command 0xFCE, plays sound 0x100AC, sets
// an internal building flag to 6, and closes the window.

void __stdcall16far
UI_SubDialog_TypeCA6C_On_Command_c836
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  int unaff_SS;
  undefined2 in_stack_0000fff2;
  undefined1 local_6 [0x4];
  
  if (param_4._2_2_ == 0xfce)
  {
    init_word_pair(local_6,unaff_SS,0x1);
    media_play_from_resource_ptr_wrapper
              ((void *)_p_UIPanelContainer,(void *)((ulong)_p_UIPanelContainer >> 0x10))
    ;
    *(undefined2 *)((int)*(undefined4 *)((int)param_1 + 0x8e) + 0xa) = 0x6;
    DestroyWindow16(*(HWND16 *)((int)param_1 + 0x6));
    PTR_DAT_1050_0000_1050_5b80 = NULL;
    return;
  }
  UI_SubDialog_Base_On_Command_Logic_7b3c
            (param_1,param_2,param_3,(ushort)param_4,
             CONCAT22(in_stack_0000fff2,param_4._2_2_));
  return;
}



// Show logic for dialog Type 0xCA6C. Configures radio buttons and enables/disables the
// confirmation button based on the linked building's state (4, 5, 8, 9). Centers the
// window.

void __stdcall16far UI_SubDialog_TypeCA6C_Show_Logic_c89c(void *this_ptr)
{
  int iVar1;
  HWND16 HVar2;
  astruct_99 *uVar3;
  void *this_ptr_00;
  HWND16 hwnd;
  int x;
  
  this_ptr_00 = (void *)this_ptr;
  x = (int)((ulong)this_ptr >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  CheckRadioButton16(0xfac,0xfad,0xfac,*(HWND16 *)((int)this_ptr_00 + 0x6));
  *(undefined2 *)((int)*(undefined4 *)((int)this_ptr_00 + 0x8e) + 0xa) = 0x1;
  iVar1 = *(int *)((int)*(undefined4 *)((int)this_ptr_00 + 0x8e) + 0x12);
  if (iVar1 == 0x4)
  {
LAB_1038_c8da:
    HVar2 = GetDlgItem16(0xfce,*(short *)((int)this_ptr_00 + 0x6));
    if (HVar2 != 0x0)
    {
      EnableWindow16(0x1,HVar2);
    }
    HVar2 = GetDlgItem16(0x1,*(short *)((int)this_ptr_00 + 0x6));
    if (HVar2 == 0x0) goto LAB_1038_c93c;
    hwnd = 0x0;
  }
  else
  {
    if ((iVar1 + -0x5 < 0x1) || (SBORROW2(iVar1 + -0x5,0x1))) goto LAB_1038_c93c;
    if (iVar1 != 0x8 && 0x0 < iVar1 + -0x7)
    {
      if (iVar1 != 0x9) goto LAB_1038_c93c;
      goto LAB_1038_c8da;
    }
    HVar2 = GetDlgItem16(0xfce,*(short *)((int)this_ptr_00 + 0x6));
    if (HVar2 == 0x0) goto LAB_1038_c93c;
    hwnd = 0x1;
  }
  EnableWindow16(hwnd,HVar2);
LAB_1038_c93c:
  UI_Window_Move_or_Center_826c(this_ptr_00,x,0xc8);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  return;
}



// Processes radio button selection in a specialized sub-dialog, updates a property
// offset in the associated object, and destroys the window.

void __stdcall16far
UI_SubDialog_TypeC95E_Handle_RadioSelection_and_Close(undefined4 param_1,int param_2)
{
  uint16_t uVar1;
  int iVar2;
  undefined2 uVar3;
  
  iVar2 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == 0x0)
  {
    *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x8e) + 0xa) = 0x0;
  }
  else
  {
    uVar1 = IsDlgButtonChecked16(0xfac,*(HWND16 *)(iVar2 + 0x6));
    if (uVar1 == 0x0)
    {
      uVar1 = IsDlgButtonChecked16(0xfad,*(HWND16 *)(iVar2 + 0x6));
      if (uVar1 == 0x0)
      {
        uVar1 = IsDlgButtonChecked16(0xfae,*(HWND16 *)(iVar2 + 0x6));
        if (uVar1 == 0x0)
        {
          uVar1 = IsDlgButtonChecked16(0xfaf,*(HWND16 *)(iVar2 + 0x6));
          if (uVar1 == 0x0)
          {
            uVar1 = IsDlgButtonChecked16(0xfb0,*(HWND16 *)(iVar2 + 0x6));
            if (uVar1 != 0x0)
            {
              *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x8e) + 0xa) = 0x5;
            }
          }
          else
          {
            *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x8e) + 0xa) = 0x4;
          }
        }
        else
        {
          *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x8e) + 0xa) = 0x3;
        }
      }
      else
      {
        *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x8e) + 0xa) = 0x2;
      }
    }
    else
    {
      *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x8e) + 0xa) = 0x1;
    }
  }
  DestroyWindow16(*(HWND16 *)(iVar2 + 0x6));
  PTR_DAT_1050_0000_1050_5b80 = NULL;
  return;
}



void * __stdcall16far
UI_SubDialog_TypeCA6C_dtor_Scalar_Deleting_ca46(void *param_1,byte param_2)
{
  UI_SubDialog_TypeCA6C_dtor_Internal_c80a(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xCC9A. Links to Resource 0x2C (Randomized Table).
// Sets vtable to 0xCC9A.

void * __stdcall16far UI_SubDialog_TypeCC9A_ctor_init_cad8(void *this_ptr,u16 arg2)
{
  astruct_98 *uVar1;
  undefined2 uVar2;
  u32 *puVar3;
  
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,0x1cb0000,arg2);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_98 *)this_ptr;
  (&uVar1->field140_0x8e)[0x0] = NULL;
  (&uVar1->field140_0x8e)[0x1] = NULL;
  *(undefined2 *)this_ptr = 0xcc9a;
  uVar1->field2_0x2 = 0x1038;
  puVar3 = (u32 *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2c);
  uVar1->field140_0x8e = (u32 *)puVar3;
  uVar1->field141_0x90 = (int)((ulong)puVar3 >> 0x10);
  uVar1->field115_0x74 = 0x0;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeCC9A_dtor_Internal_cb30(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xcc9a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Show logic for dialog Type 0xCC9A. Instantiates 5 specialized complex controls from a
// table, plays sound 0x90001, and displays the window.

void __stdcall16far UI_SubDialog_TypeCC9A_Show_Logic_cb5c(void *this_ptr)
{
  int iVar1;
  undefined2 *puVar2;
  void *pvVar3;
  void *reg_dx;
  void *pvVar4;
  void *pvVar5;
  astruct_97 *uVar3;
  void *this_ptr_00;
  undefined2 uVar6;
  undefined2 in_stack_0000fff2;
  int iStack_a;
  undefined4 uStack_8;
  
  this_ptr_00 = (void *)this_ptr;
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  iVar1 = get_const_5_stub();
  for (iStack_a = 0x0; iStack_a < iVar1; iStack_a += 0x1)
  {
    puVar2 = get_table_D0E_entry_ptr((int)*(undefined4 *)((int)this_ptr_00 + 0x8e));
    uStack_8 = (undefined2 *)CONCAT22(reg_dx,puVar2);
    pvVar4 = reg_dx;
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000fff2,0x42));
    pvVar5 = NULL;
    if (pvVar4 != NULL || pvVar3 != NULL)
    {
      pvVar5 = UI_Complex_Control_ctor
                         (pvVar3,pvVar4,0x0,puVar2[0x1],*uStack_8,0x101,0x100,0xff,
                          puVar2[0x2],*(undefined2 *)((int)this_ptr_00 + 0x6));
    }
    reg_dx = pvVar5;
  }
  media_play_from_full_resource_ptr_logic((void *)_p_UIPanelContainer,0x90001);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for dialog Type 0xCC9A. Maps commands 0x1CD-0x1D1 to indices 1-5,
// retrieves a randomized value from the resource manager, plays the corresponding
// sound, and closes the window.

void __stdcall16far
UI_SubDialog_TypeCC9A_On_Command_cc00
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  int iVar1;
  undefined2 in_stack_0000fffc;
  
  if ((((param_4._2_2_ != 0x1cd) && (param_4._2_2_ != 0x1ce)) &&
      (param_4._2_2_ != 0x1cf)) &&
     ((param_4._2_2_ != 0x1d0 && (param_4._2_2_ != 0x1d1))))
  {
    UI_SubDialog_Base_On_Command_Logic_7b3c
              (param_1,param_2,param_3,(ushort)param_4,
               CONCAT22(in_stack_0000fffc,param_4._2_2_));
    return;
  }
  iVar1 = res_manager_get_randomized_table_value_logic
                    ((void *)(void *)*(undefined4 *)((int)param_1 + 0x8e),
                     (int)((ulong)*(undefined4 *)((int)param_1 + 0x8e) >> 0x10));
  if (iVar1 != 0x0)
  {
    media_play_from_full_resource_ptr_logic
              ((void *)_p_UIPanelContainer,CONCAT22(iVar1,0x1));
    DestroyWindow16(*(HWND16 *)((int)param_1 + 0x6));
  }
  return;
}



void * __stdcall16far
UI_SubDialog_TypeCC9A_dtor_Scalar_Deleting_cc74(void *param_1,byte param_2)
{
  UI_SubDialog_TypeCC9A_dtor_Internal_cb30(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xCF00. Links to Resource 0x42 and sets vtable to
// 0xCF00. Base ID 0xFCC.

void * __stdcall16far
UI_SubDialog_TypeCF00_ctor_init_cd06
          (void *this_ptr,u32 dlg_template_id,u16 arg3,u16 arg4,u16 parent_hwnd)
{
  astruct_96 *uVar1;
  undefined2 uVar2;
  u32 *puVar3;
  
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,dlg_template_id,0xfcc,parent_hwnd);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_96 *)this_ptr;
  (&uVar1->field141_0x8e)[0x0] = NULL;
  (&uVar1->field141_0x8e)[0x1] = NULL;
  uVar1->field143_0x92 = 0x0;
  *(undefined2 *)this_ptr = 0xcf00;
  uVar1->field2_0x2 = 0x1038;
  puVar3 = (u32 *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x42);
  uVar1->field141_0x8e = (u32 *)puVar3;
  uVar1->field142_0x90 = (int)((ulong)puVar3 >> 0x10);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeCF00_dtor_Internal_cd5c(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xcf00;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



// Executes a sub-dialog in a modal-like loop. Creates the window, centers it, runs a
// message loop until an internal flag (offset 0x92) is cleared, and then destroys it.

void __stdcall16far UI_SubDialog_Execute_Modal_Loop_cd88(void *this_ptr)
{
  astruct_95 *uVar1;
  int x;
  void *this_ptr_00;
  
  this_ptr_00 = (void *)this_ptr;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  x = (int)((ulong)this_ptr >> 0x10);
  UI_Window_Move_or_Center_826c(this_ptr_00,x,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  *(undefined2 *)((int)this_ptr_00 + 0x92) = 0x1;
  win16_conditional_message_loop((int *)((int)this_ptr_00 + 0x92));
  DestroyWindow16(*(HWND16 *)((int)this_ptr_00 + 0x6));
  return;
}
