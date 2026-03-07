/*
 * Source: outpost.c
 * Chunk: 103/117
 * Original lines: 117584-118713
 * Boundaries: top-level declarations/definitions only
 */




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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the link status dialog, manages establishing the link and
// displaying informational message boxes.

void __stdcall16far
UI_Link_Status_Dialog_On_Command_c672
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  undefined2 unaff_SS;
  int arg2;
  undefined2 in_stack_0000fbfc;
  
  arg2 = (int)((ulong)_p_GlobalResourceManager >> 0x10);
  if (param_4._2_2_ == 0x17d)
  {
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,arg2,CONCAT22(&stack0xfbfc,0x3ff),
               CONCAT22(0x453,unaff_SS));
    MessageBox16(0x30,(char *)(char *)*(undefined4 *)((int)param_1 + 0x92),
                 (char *)((ulong)*(undefined4 *)((int)param_1 + 0x92) >> 0x10),
                 (ushort)&stack0xfbfc);
  }
  else
  {
    if (param_4._2_2_ != 0x17e)
    {
      UI_SubDialog_Base_On_Command_Logic_7b3c
                (param_1,param_2,param_3,(ushort)param_4,
                 CONCAT22(in_stack_0000fbfc,param_4._2_2_));
      return;
    }
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,arg2,CONCAT22(&stack0xfbfc,0x3ff),
               CONCAT22(0x454,unaff_SS));
    MessageBox16(0x30,(char *)(char *)*(undefined4 *)((int)param_1 + 0x92),
                 (char *)((ulong)*(undefined4 *)((int)param_1 + 0x92) >> 0x10),
                 (ushort)&stack0xfbfc);
    UI_Relationship_Manager_Establish_Link_and_Notify_Logic
              ((void *)(void *)*(undefined4 *)((int)param_1 + 0x8e));
  }
  PostMessage16(0x0,0x0,0x2,
                CONCAT22(in_stack_0000fbfc,*(undefined2 *)((int)param_1 + 0x6)));
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



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1038_ca42(void)
{
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
  void *in_DX;
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
    uStack_8 = (undefined2 *)CONCAT22(in_DX,puVar2);
    pvVar4 = in_DX;
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000fff2,0x42));
    pvVar5 = NULL;
    if (pvVar4 != NULL || pvVar3 != NULL)
    {
      pvVar5 = UI_Complex_Control_ctor
                         (pvVar3,pvVar4,0x0,puVar2[0x1],*uStack_8,0x101,0x100,0xff,
                          puVar2[0x2],*(undefined2 *)((int)this_ptr_00 + 0x6));
    }
    in_DX = pvVar5;
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



// Synchronizes an internal state value (offset 10 of resource manager) with the
// currently checked radio button (0x1829-0x182F) in the sub-dialog.

void __stdcall16far UI_SubDialog_Sync_Radio_State_cdd6(void *this_ptr,int is_active)
{
  uint16_t uVar1;
  astruct_94 *uVar2;
  undefined2 uVar3;
  
  uVar2 = (astruct_94 *)this_ptr;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  if (is_active == 0x0)
  {
    *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x0;
  }
  else
  {
    uVar1 = IsDlgButtonChecked16(0x182e,uVar2->field6_0x6);
    if (uVar1 == 0x0)
    {
      uVar1 = IsDlgButtonChecked16(0x182f,uVar2->field6_0x6);
      if (uVar1 == 0x0)
      {
        uVar1 = IsDlgButtonChecked16(0x1829,uVar2->field6_0x6);
        if (uVar1 == 0x0)
        {
          uVar1 = IsDlgButtonChecked16(0x182a,uVar2->field6_0x6);
          if (uVar1 == 0x0)
          {
            uVar1 = IsDlgButtonChecked16(0x182c,uVar2->field6_0x6);
            if (uVar1 == 0x0)
            {
              uVar1 = IsDlgButtonChecked16(0x182d,uVar2->field6_0x6);
              if (uVar1 != 0x0)
              {
                *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x7;
              }
            }
            else
            {
              *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x6;
            }
          }
          else
          {
            *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x4;
          }
        }
        else
        {
          *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x3;
        }
      }
      else
      {
        *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x2;
      }
    }
    else
    {
      *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x1;
    }
  }
  uVar2->field142_0x92 = 0x0;
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1038_ced6(void)
{
  return;
}



void * __stdcall16far
UI_SubDialog_TypeCF00_dtor_Scalar_Deleting_ceda(void *param_1,byte param_2)
{
  UI_SubDialog_TypeCF00_dtor_Internal_cd5c(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



u16 * __stdcall16far UI_Main_Window_ctor_init_cf6c(u16 *param_1)
{
  u16 *puVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined *puVar4;
  undefined4 in_stack_0000fff8;
  void *FARPROC16_func;
  
  puVar2 = (undefined *)((ulong)param_1 >> 0x10);
  puVar1 = (u16 *)param_1;
  *param_1 = (u16)(char *)s_1_1050_389a;
  puVar1[0x1] = 0x1008;
  (puVar1 + 0x2)[0x0] = 0x0;
  (puVar1 + 0x2)[0x1] = 0x0;
  puVar1[0x4] = 0x0;
  *param_1 = 0xd23e;
  puVar1[0x1] = 0x1038;
  FARPROC16_func =
       (void *)CONCAT22((int)((ulong)in_stack_0000fff8 >> 0x10),(void *)0x1038);
  p_UIMainWindow = (undefined *)puVar1;
  PTR_DAT_1050_0000_1050_5bca = puVar2;
  pvVar3 = MakeProcInstance16((HANDLE16)PTR_DAT_1050_0000_1050_038c,FARPROC16_func);
  puVar1[0x2] = (u16)pvVar3;
  puVar1[0x3] = (u16)((ulong)pvVar3 >> 0x10);
  puVar4 = MakeProcInstance16((HANDLE16)PTR_DAT_1050_0000_1050_038c,
                              (void *)CONCAT22((int)((ulong)FARPROC16_func >> 0x10),
                                               (void *)0x1038));
  PTR_DAT_1050_0000_1050_5bcc = (undefined *)puVar4;
  PTR_DAT_1050_0000_1050_5bce = (undefined *)((ulong)puVar4 >> 0x10);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for sub-dialog component type 0xD23E. Frees specialized procedure
// instances (thunks) used for subclassing or callbacks.

void __stdcall16far UI_SubDialog_TypeD23E_dtor_Internal_cfda(void *this_ptr)
{
  astruct_93 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_93 *)this_ptr;
  *(undefined2 *)this_ptr = 0xd23e;
  uVar1->field2_0x2 = 0x1038;
  FreeProcInstance16(uVar1->field3_0x4);
  FreeProcInstance16(_PTR_DAT_1050_0000_1050_5bcc);
  uVar1->field3_0x4 = NULL;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  return;
}



// A complex window procedure redirector that uses window properties (procHi, procLo,
// thisHi, thisLo) to route messages to object-oriented methods. Handles WM_CTLCOLOR and
// other custom messages.

LRESULT __stdcall16far
UI_Window_Subclass_Prop_Redirector_WindowProc
          (void *param_1,undefined4 param_2,undefined4 param_3)
{
  undefined2 *puVar1;
  undefined2 in_AX;
  void *pvVar2;
  HANDLE16 HVar3;
  undefined4 *puVar4;
  uint uVar5;
  LRESULT pvVar6;
  undefined2 uVar7;
  LRESULT local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  uVar7 = 0x1050;
  pvVar2 = (void *)GetProp16((char *)CONCAT22(in_AX,(char *)s_procHi_1050_5bd7),
                             param_3._2_2_);
  HVar3 = GetProp16((char *)CONCAT22(in_AX,(char *)s_procLo_1050_5bd0),param_3._2_2_);
  local_6 = CONCAT22(pvVar2,HVar3);
  HVar3 = GetProp16((char *)CONCAT22(in_AX,(char *)s_thisHi_1050_5be5),param_3._2_2_);
  puVar4 = (undefined4 *)
           GetProp16((char *)CONCAT22(in_AX,(char *)s_thisLo_1050_5bde),param_3._2_2_);
  local_a = (undefined4 *)CONCAT22(HVar3,puVar4);
  uVar5 = (uint)((ulong)param_2 >> 0x10);
  if (HVar3 != 0x0 || puVar4 != NULL)
  {
    local_e = NULL;
    if ((uint16_t)param_3 == 0x19)
    {
      puVar1 = (undefined2 *)((int)*local_a + 0x34);
      local_e = (LRESULT)(*(code *)*puVar1)(0x1538,puVar4,HVar3,param_1,param_2);
    }
    else
    {
      if ((uint16_t)param_3 == 0x86)
      {
        puVar1 = (undefined2 *)((int)*local_a + 0x20);
        uVar5 = (*(code *)*puVar1)(0x1538,puVar4,HVar3,uVar5);
        goto LAB_1038_d10e;
      }
      if (((uint16_t)param_3 == 0x112) && ((uVar5 & 0xfff0) == 0xf140))
      {
        pvVar6 = SendMessage16(0x0,0x0,0xf140,
                               (long)CONCAT22(uVar7,*(undefined **)&g_ParentHWND));
        uVar5 = (uint)((void *)pvVar6 == NULL);
        goto LAB_1038_d10e;
      }
    }
    if (local_e != NULL)
    {
      return local_e;
    }
  }
  if (local_6 != 0x0)
  {
    pvVar6 = CallWindowProc16((void *)CONCAT22((int)param_2,param_1),uVar5,
                              (uint16_t)param_3,param_3._2_2_,
                              (void *)CONCAT22(uVar7,pvVar2));
    return pvVar6;
  }
  uVar5 = 0x0;
LAB_1038_d10e:
  return (LRESULT)(long)(int)uVar5;
}



// Handles specific window events related to property management, object destruction,
// and font cleanup.

undefined2 __stdcall16far
UI_Window_Property_Event_Handler_d118(undefined4 param_1,ulong param_2,HWND16 param_3)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  void *in_AX;
  HANDLE16 HVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  HWND16 hwnd;
  undefined4 local_6;
  
  hwnd = 0x1050;
  HVar4 = GetProp16((char *)CONCAT22(in_AX,(char *)s_thisHi_1050_5bf3),param_3);
  puVar5 = (undefined4 *)
           GetProp16((char *)CONCAT22(in_AX,(char *)s_thisLo_1050_5bec),param_3);
  local_6 = (undefined4 *)CONCAT22(HVar4,puVar5);
  if (param_2._2_2_ == 0x30)
  {
    if ((HANDLE16)param_2 != 0x0)
    {
      SetProp16((HANDLE16)param_2,(void *)CONCAT22(param_3,in_AX),hwnd);
    }
  }
  else
  {
    if (param_2 < 0x310000)
    {
      cVar3 = (char)(param_2 >> 0x10);
      if (cVar3 == '\x02')
      {
        if (HVar4 != 0x0 || puVar5 != NULL)
        {
          puVar2 = (undefined2 *)*local_6;
          puVar1 = (undefined2 *)puVar2 + 0x6;
          (*(code *)*puVar1)(0x1538,puVar5,HVar4,param_1,param_2);
          if (local_6 != NULL)
          {
            puVar1 = (undefined2 *)puVar2;
            (*(code *)*puVar1)(0x1538,puVar5,HVar4,0x1);
          }
        }
        HVar4 = GetProp16((char *)CONCAT22(in_AX,(char *)s_hfont_1050_5bfa),param_3);
        if (HVar4 != 0x0)
        {
          DeleteObject16(HVar4);
          RemoveProp16((char *)CONCAT22(in_AX,(char *)s_hfont_1050_5c00),param_3);
        }
        return 0x1;
      }
      if (cVar3 == '\x06')
      {
        if (((HANDLE16)param_2 != 0x1) && ((HANDLE16)param_2 != 0x2))
        {
          *(undefined2 *)((int)*(undefined4 *)(undefined **)&p_UIMainWindow + 0x8) = 0x0
          ;
          return 0x1;
        }
        *(HWND16 *)((int)*(undefined4 *)(undefined **)&p_UIMainWindow + 0x8) = param_3;
        return 0x1;
      }
    }
    if (HVar4 != 0x0 || puVar5 != NULL)
    {
      puVar1 = (undefined2 *)((int)*local_6 + 0xc);
      uVar6 = (*(code *)*puVar1)(0x1538,puVar5,HVar4,param_1,param_2);
      return uVar6;
    }
  }
  return 0x0;
}



u16 * __stdcall16far
UI_SubDialog_TypeD23E_dtor_Scalar_Deleting_d218(void *this_ptr,u8 flags)
{
  UI_SubDialog_TypeD23E_dtor_Internal_cfda(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)this_ptr);
  }
  return (u16 *)this_ptr;
}



// Constructor for sub-dialog Type 0xD6EA (vtable 0xD6EA). Sets a flag at 0x74 to 1,
// indicating modal or persistent behavior. Base ID 0x13E.

void * __stdcall16far
UI_SubDialog_TypeD6EA_ctor_init_d242(void *this_ptr,u16 parent_hwnd)
{
  undefined2 uVar1;
  
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,0x13e0000,parent_hwnd);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)this_ptr = 0xd6ea;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  *(undefined2 *)((int)(void *)this_ptr + 0x74) = 0x1;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeD6EA_dtor_Internal_d276(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xd6ea;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes a sub-dialog with multiple complex controls, sets up their geometry via
// MapDialogRect, and plays a specific sound resource.

void __stdcall16far UI_SubDialog_Complex_Controls_Initialize_d2a2(void *param_1)
{
  void *pvVar1;
  HWND16 enable;
  char *hwnd;
  BOOL16 BVar2;
  void *in_DX;
  short map_id;
  int iVar3;
  undefined2 unaff_SI;
  int x;
  undefined2 unaff_SS;
  ushort msg;
  ushort w_param;
  void *this_ptr;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  void *local_e;
  int local_a;
  void *local_8;
  void *pvStack_6;
  int local_4;
  
  this_ptr = (void *)param_1;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  local_4 = 0x7;
  for (local_a = 0x0; x = (int)((ulong)param_1 >> 0x10), local_a < local_4;
      local_a += 0x1)
  {
    iVar3 = local_a * 0xc;
    local_16 = *(undefined2 *)(iVar3 + 0x5c0c);
    local_14 = *(undefined2 *)(iVar3 + 0x5c0e);
    local_12 = 0x1;
    local_10 = 0x1;
    MapDialogRect16((undefined2 *)CONCAT22(unaff_SS,&local_16),
                    *(HWND16 *)((int)this_ptr + 0x6));
    pvVar1 = allocate_memory(CONCAT22(unaff_SI,0x42));
    if (in_DX == NULL && pvVar1 == NULL)
    {
      pvVar1 = NULL;
      in_DX = NULL;
    }
    else
    {
      in_DX = UI_Complex_Control_ctor
                        (pvVar1,in_DX,0x1,local_14,local_16,0x104,0x103,0x102,
                         *(undefined2 *)(iVar3 + 0x5c10),
                         *(undefined2 *)((int)this_ptr + 0x6));
    }
    _local_8 = (void *)CONCAT22(in_DX,pvVar1);
    if (*(int *)(local_a * 0xc + 0x5c12) == 0x0)
    {
      EnableWindow16(0x0,*(BOOL16 *)((int)pvVar1 + 0x18));
    }
  }
  local_e = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
  map_id = (short)((ulong)local_e >> 0x10);
  iVar3 = UI_Component_Get_Dynamic_Offset_Difference_Logic((void *)local_e,map_id);
  if (iVar3 == 0x0)
  {
    enable = GetDlgItem16(0x14a,*(short *)((int)this_ptr + 0x6));
    EnableWindow16(0x0,enable);
    uVar5 = *(undefined2 *)((int)this_ptr + 0x6);
    w_param = 0xc;
    uVar4 = 0x144;
    msg = 0x0;
    hwnd = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
    SendDlgItemMessage16((HWND16)hwnd,map_id,msg,w_param,CONCAT22(uVar5,uVar4));
  }
  UI_Window_Move_or_Center_826c(this_ptr,x,-0x1);
  BVar2 = ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  media_play_from_full_resource_ptr_logic((void *)_p_UIPanelContainer,0x9a0001);
  *(BOOL16 *)((int)this_ptr + 0x8c) = BVar2;
  return;
}
