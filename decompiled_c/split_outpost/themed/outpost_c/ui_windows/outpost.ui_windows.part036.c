/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 36/54
 * Original lines (combined): 114386-115561
 * Boundaries: top-level declarations/definitions only
 */




// Processes selections in the file selection dialog and updates string properties.

void __stdcall16far UI_File_Selection_Dialog_Process_Selection_8d22(undefined4 param_1)
{
  int iVar1;
  undefined2 uVar2;
  short unaff_SS;
  LRESULT pvVar3;
  undefined1 local_106 [0x100];
  ushort local_6;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  pvVar3 = SendDlgItemMessage16
                     (0x0,0x0,0x0,0x409,CONCAT22(*(undefined2 *)(iVar1 + 0x6),0x185b));
  local_6 = (ushort)pvVar3;
  local_4 = (int)local_6 >> 0xf;
  if ((local_6 != 0xffff) || (false))
  {
    SendDlgItemMessage16
              ((HWND16)local_106,unaff_SS,local_6,0x40a,
               CONCAT22(*(undefined2 *)(iVar1 + 0x6),0x185b));
    UI_Element_Subclass_Process_String_Match_Logic
              ((void *)(void *)*(undefined4 *)(iVar1 + 0x94),
               (char *)((ulong)*(undefined4 *)(iVar1 + 0x94) >> 0x10));
  }
  return;
}



void __stdcall16far UI_SubDialog_Type90C8_Show_Logic_8d7e(void *this_ptr)
{
  Helper_NoOp_Stub_78de();
  UI_SubDialog_Type90C8_Refresh_List_Box_8f74(this_ptr);
  return;
}



ulong __stdcall16far
UI_SubDialog_Type90C8_On_Command_8d98
          (uint16_t param_1,uint16_t param_2,u16 param_3,u32 param_4)
{
  ulong uVar1;
  
  if (param_4._2_2_ == 0xeb)
  {
    UI_SubDialog_Type90C8_Refresh_List_Box_8f74((void *)CONCAT22(param_2,param_1));
  }
  else
  {
    if (param_4._2_2_ != 0x1841)
    {
      uVar1 = UI_SubDialog_Complex_Command_Handler_b54a
                        (param_1,CONCAT22(param_3,param_2),param_4);
      return uVar1;
    }
    UI_Show_Final_Status_Report_MessageBox_8dda(CONCAT22(param_2,param_1));
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Refreshes the list box (ID 0x185B) in Type 0x90C8 dialogs. Iterates through linked
// elements and formats display strings or shows 'None' if empty.

void __stdcall16far UI_SubDialog_Type90C8_Refresh_List_Box_8f74(void *this_ptr)
{
  int iVar1;
  HWND16 enable;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  short unaff_SS;
  LRESULT pvVar5;
  long lVar6;
  HWND16 hwnd;
  undefined1 local_50c [0x100];
  undefined1 local_40c [0x8];
  void *local_404;
  undefined2 uStack_402;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar3 = (int)this_ptr;
  SendDlgItemMessage16(0x0,0x0,0x0,0xb,CONCAT22(*(undefined2 *)(iVar3 + 0x6),0x185b));
  pvVar5 = SendDlgItemMessage16
                     (0x0,0x0,0x0,0x405,CONCAT22(*(undefined2 *)(iVar3 + 0x6),0x185b));
  uVar2 = (undefined2)((ulong)pvVar5 >> 0x10);
  iVar1 = UI_Element_Check_Offset_0E_Against_Global_maybe
                    ((void *)(void *)*(undefined4 *)(iVar3 + 0x94));
  if (iVar1 == 0x0)
  {
    local_404 = UI_Element_Get_or_Init_List_at_Offset_0A_Logic
                          ((void *)(void *)*(undefined4 *)(iVar3 + 0x94));
    uStack_402 = uVar2;
    init_long_pair(local_40c,(long)CONCAT22(uVar2,local_404));
    while( true )
    {
      lVar6 = get_next_list_item(local_40c);
      if (lVar6 == 0x0) break;
      _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_50c),s__s_1050_5a6c,
                  (void *)*(undefined4 *)((int)lVar6 + 0x4));
      SendDlgItemMessage16
                ((HWND16)local_50c,unaff_SS,0x0,0x401,
                 CONCAT22(*(undefined2 *)(iVar3 + 0x6),0x185b));
    }
    enable = GetDlgItem16(0x1,*(short *)(iVar3 + 0x6));
    hwnd = 0x1;
  }
  else
  {
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(&local_404,0x3ff)
               ,CONCAT22(0x452,unaff_SS));
    SendDlgItemMessage16
              ((HWND16)&local_404,unaff_SS,0x0,0x401,
               CONCAT22(*(undefined2 *)(iVar3 + 0x6),0x185b));
    enable = GetDlgItem16(0x1,*(short *)(iVar3 + 0x6));
    hwnd = 0x0;
  }
  EnableWindow16(hwnd,enable);
  SendDlgItemMessage16(0x0,0x0,0x1,0xb,CONCAT22(*(undefined2 *)(iVar3 + 0x6),0x185b));
  return;
}



void * __stdcall16far
UI_Transfer_Dialog_dtor_Scalar_Deleting_90a2(void *this_ptr,byte flags)
{
  UI_SubDialog_Type90C8_dtor_Internal_8cf6(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes the resource exchange dialog, reads initial values, and plays sound.

void __stdcall16far UI_Resource_Exchange_Dialog_Initialize_and_Play_9294(void *param_1)
{
  uint16_t uVar1;
  undefined2 uVar2;
  int16_t unaff_SS;
  void *this_ptr;
  undefined1 local_6 [0x2];
  undefined1 local_4 [0x2];
  
  this_ptr = (void *)param_1;
  UI_SubDialog_Base_AutoPosition_and_Register_b230(this_ptr);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = GetDlgItemInt16(0x1,(uint16_t)local_4,unaff_SS,0xfa9);
  *(uint16_t *)((int)this_ptr + 0x94) = uVar1;
  uVar1 = GetDlgItemInt16(0x1,(uint16_t)local_6,unaff_SS,0xfa8);
  *(uint16_t *)((int)this_ptr + 0x96) = uVar1;
  UI_Resource_Exchange_Dialog_Refresh_All_Balances_98b4(param_1);
  media_play_from_full_resource_ptr_logic((void *)_p_UIPanelContainer,0x950001);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the resource exchange dialog, handles refresh and resource
// updates via the event dispatch table.

ulong __stdcall16far
UI_Resource_Exchange_Dialog_On_Command_92f6
          (undefined4 *param_1,u16 param_2,int param_3,undefined4 param_4)
{
  undefined2 *puVar1;
  void *pvVar2;
  u16 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_SI;
  undefined2 uVar6;
  int16_t unaff_SS;
  void *pvVar7;
  ulong uVar8;
  int local_1a [0x2];
  uint16_t local_16;
  void *local_14;
  undefined4 local_10;
  u16 local_c;
  void *local_a;
  void *local_6;
  
  if (param_4._2_2_ == 0xeb)
  {
    local_6 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
    iVar4 = (int)((ulong)local_6 >> 0x10);
    local_a = (void *)param_1[0x24];
    if (local_a != NULL)
    {
      pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x18));
      local_10 = (u16 *)CONCAT22(iVar4,pvVar2);
      if (iVar4 == 0x0 && pvVar2 == NULL)
      {
        uVar6 = 0x0;
        iVar4 = 0x0;
      }
      else
      {
        pvVar7 = Helper_ZeroFill_24Bytes_a598((void *)CONCAT22(iVar4,pvVar2));
        iVar4 = (int)((ulong)pvVar7 >> 0x10);
        uVar6 = SUB42(pvVar7,0x0);
      }
      *(undefined2 *)(param_1 + 0x24) = uVar6;
      *(int *)((int)param_1 + 0x92) = iVar4;
      *(undefined2 *)param_1[0x24] = 0x11;
      local_c = *(u16 *)param_1[0x24];
      puVar3 = allocate_memory(CONCAT22(unaff_SI,local_c * 0xa + 0x2));
      local_10 = (u16 *)CONCAT22(iVar4,puVar3);
      if (iVar4 == 0x0 && puVar3 == NULL)
      {
        *(undefined4 *)((int)param_1[0x24] + 0x2) = 0x0;
      }
      else
      {
        *local_10 = local_c;
        call_function_n_times((void *)0xa564,0x1040,local_c);
        uVar6 = (undefined2)((ulong)param_1[0x24] >> 0x10);
        iVar5 = (int)param_1[0x24];
        *(int *)(iVar5 + 0x2) = (int)(puVar3 + 0x1);
        *(int *)(iVar5 + 0x4) = iVar4;
      }
      uVar6 = (undefined2)((ulong)local_a >> 0x10);
      *(undefined4 *)((int)param_1[0x24] + 0x6) = *(undefined4 *)((int)local_a + 0x6);
      *(undefined2 *)((int)param_1[0x24] + 0xa) = *(undefined2 *)((int)local_a + 0xa);
      *(undefined2 *)((int)param_1[0x24] + 0x12) = *(undefined2 *)((int)param_1 + 0xa);
      uVar6 = 0x1010;
      Simulator_Event_Dispatch_Table_Dispatch_Logic
                ((void *)local_6,0x10505b42,param_1[0x24]);
      local_14 = local_a;
      local_10 = local_a;
      if (local_a != NULL)
      {
        UI_Managed_Collection_dtor_Internal_a5d0(local_a);
        uVar6 = 0x1000;
        free_if_not_null((void *)local_a);
      }
      puVar1 = (undefined2 *)((int)*(undefined4 *)CONCAT22(param_2,param_1) + 0x70);
      (*(code *)*puVar1)(uVar6,param_1,param_2);
    }
    uVar8 = 0x0;
  }
  else
  {
    if (param_4._2_2_ != 0xf9)
    {
      uVar8 = UI_SubDialog_Complex_Command_Handler_b54a();
      return uVar8;
    }
    iVar4 = UI_Resource_Exchange_Dialog_Lookup_Index_by_Control_ID_993a
                      ((u16)param_1,param_2,param_3);
    if (-0x1 < iVar4)
    {
      local_16 = GetDlgItemInt16(0x1,(uint16_t)local_1a,unaff_SS,
                                 *(HWND16 *)(iVar4 * 0xe + 0x5a72));
      if (local_1a[0x0] != 0x0)
      {
        UI_Planet_View_Notify_Update_Logic_maybe
                  ((int)param_1[0x26],(int)((ulong)param_1[0x26] >> 0x10),local_16,
                   *(undefined2 *)(iVar4 * 0xe + 0x5a72));
      }
    }
    uVar8 = 0x1;
  }
  return uVar8;
}



// Handles increment/decrement button clicks in the exchange dialog. Adjusts quantities,
// enforces range limits from a static table, validates affordability via 9820, and
// refreshes summary labels.

u16 __stdcall16far
UI_Resource_Exchange_Dialog_On_Adjust_Button_Logic_94da
          (int offset,u16 segment,int item_id,u16 arg4,int delta_type)
{
  int iVar1;
  HWND16 hwnd;
  int16_t unaff_SS;
  long lVar2;
  int local_c;
  uint uStack_a;
  int iStack_8;
  uint16_t uStack_6;
  int iStack_4;
  
  iStack_4 = 0x1;
  iStack_8 = UI_Resource_Exchange_Dialog_Lookup_Index_by_Control_ID_993a
                       (offset,segment,item_id);
  if ((-0x1 < iStack_8) &&
     (uStack_6 = GetDlgItemInt16(0x1,(uint16_t)&local_c,unaff_SS,
                                 *(HWND16 *)(iStack_8 * 0xe + 0x5a72)), local_c != 0x0))
  {
    if (delta_type == 0x0)
    {
      uStack_6 += 0x1;
    }
    else
    {
      iStack_4 = -0x1;
      uStack_6 -= 0x1;
    }
    uStack_a = (uint)((int)uStack_6 <= *(int *)(iStack_8 * 0xe + 0x5a7a));
    if ((int)uStack_6 < *(int *)(iStack_8 * 0xe + 0x5a78))
    {
      uStack_a = 0x0;
    }
    iVar1 = iStack_8 * 0xe;
    hwnd = GetDlgItem16(*(HWND16 *)(iVar1 + 0x5a72),*(short *)(offset + 0x6));
    SetFocus16(hwnd);
    if ((uStack_a != 0x0) &&
       (lVar2 = UI_Resource_Exchange_Dialog_Validate_and_Apply_Change_9820
                          ((void *)CONCAT22(segment,offset),0x1,iStack_4,iStack_8),
       (int)lVar2 != 0x0))
    {
      SetDlgItemInt(0x1,uStack_6,*(int16_t *)(iVar1 + 0x5a72),*(HWND16 *)(offset + 0x6))
      ;
      SetDlgItemInt(0x1,*(uint16_t *)(offset + 0x94),0xfa9,*(HWND16 *)(offset + 0x6));
      SetDlgItemInt(0x1,*(uint16_t *)(offset + 0x96),0xfa8,*(HWND16 *)(offset + 0x6));
    }
  }
  return 0x1;
}



// Handles the final commit action for resource exchange and closes the dialog.

void __stdcall16far
UI_Resource_Exchange_Dialog_Commit_and_Close_977a(void *param_1,int param_2)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint in_DX;
  uint uVar4;
  int16_t unaff_SS;
  undefined2 in_stack_0000ffec;
  undefined1 local_10 [0x4];
  undefined4 local_c;
  int local_8;
  uint16_t local_6;
  undefined1 local_4 [0x2];
  
  local_8 = 0x0;
  local_6 = GetDlgItemInt16(0x1,(uint16_t)local_4,unaff_SS,0xfa8);
  if (local_6 != 0x0)
  {
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffec,0xb4));
    uVar4 = in_DX | (uint)pvVar2;
    if (uVar4 == 0x0)
    {
      puVar3 = NULL;
      uVar4 = 0x0;
    }
    else
    {
      puVar3 = (undefined4 *)
               UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                         (pvVar2,in_DX,*(undefined2 *)((int)param_1 + 0x6),0x20041,0x5db
                          ,0x5da,pvVar2);
    }
    local_c = (undefined4 *)CONCAT22(uVar4,puVar3);
    init_word_pair(local_10,unaff_SS,0x1);
    puVar1 = (undefined2 *)((int)*local_c + 0x6c);
    local_8 = (*(code *)*puVar1)(0x1008,(undefined4 *)local_c,
                                 (int)((ulong)local_c >> 0x10),local_10);
  }
  if ((local_8 == 0x1) || (local_6 == 0x0))
  {
    UI_SubDialog_Close_and_Notify_b726(param_1,param_2);
  }
  return;
}



// Core logic for applying a resource trade. Checks if the proposed subtraction would
// result in a negative balance for the two primary resource pools (offsets 0x94, 0x96).
// Returns 1 if successful.

long __stdcall16far
UI_Resource_Exchange_Dialog_Validate_and_Apply_Change_9820
          (void *this_ptr,int arg2,int delta,int index)
{
  long lVar1;
  uint16_t uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined2 uVar7;
  int16_t unaff_SS;
  undefined1 local_6 [0x2];
  undefined1 local_4 [0x2];
  
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar6 = (void *)this_ptr;
  uVar2 = GetDlgItemInt16(0x1,(uint16_t)local_4,unaff_SS,
                          *(HWND16 *)(index * 0xe + 0x5a74));
  iVar3 = uVar2 * arg2 * delta;
  uVar2 = GetDlgItemInt16(0x1,(uint16_t)local_6,unaff_SS,
                          *(HWND16 *)(index * 0xe + 0x5a76));
  lVar1 = (long)(int)(uVar2 * arg2) * (long)delta;
  uVar5 = (uint)((ulong)lVar1 >> 0x10);
  iVar4 = (int)lVar1;
  if ((-0x1 < -(iVar3 - *(int *)((int)pvVar6 + 0x94))) &&
     (-0x1 < *(int *)((int)pvVar6 + 0x96) - iVar4))
  {
    *(int *)((int)pvVar6 + 0x94) = *(int *)((int)pvVar6 + 0x94) - iVar3;
    *(int *)((int)pvVar6 + 0x96) = *(int *)((int)pvVar6 + 0x96) - iVar4;
    return CONCAT22(uVar5,0x1);
  }
  return (ulong)uVar5 << 0x10;
}



// Iterates through all 15 exchange categories and recalculates the total impact on
// colony resource pools. Updates summary display labels (0xFA9, 0xFA8) upon completion.

void __stdcall16far
UI_Resource_Exchange_Dialog_Refresh_All_Balances_98b4(void *this_ptr)
{
  uint16_t arg2;
  void *pvVar1;
  undefined2 uVar2;
  int16_t unaff_SS;
  int delta;
  int index;
  int iStack_8;
  undefined2 local_4;
  
  local_4 = 0x0;
  for (iStack_8 = 0x0; pvVar1 = (void *)this_ptr,
      uVar2 = (undefined2)((ulong)this_ptr >> 0x10), iStack_8 < 0xf; iStack_8 += 0x1)
  {
    delta = 0x1;
    index = iStack_8;
    arg2 = GetDlgItemInt16(0x1,(uint16_t)&local_4,unaff_SS,
                           *(HWND16 *)(iStack_8 * 0xe + 0x5a72));
    UI_Resource_Exchange_Dialog_Validate_and_Apply_Change_9820
              (this_ptr,arg2,delta,index);
  }
  SetDlgItemInt(0x1,*(uint16_t *)((int)pvVar1 + 0x94),0xfa9,
                *(HWND16 *)((int)pvVar1 + 0x6));
  SetDlgItemInt(0x1,*(uint16_t *)((int)pvVar1 + 0x96),0xfa8,
                *(HWND16 *)((int)pvVar1 + 0x6));
  return;
}



// Maps a Windows control ID to an internal category index (0-14) using a lookup table
// at 0x5A70.

int __stdcall16far
UI_Resource_Exchange_Dialog_Lookup_Index_by_Control_ID_993a
          (u16 offset,u16 segment,int ctrl_id)
{
  u16 uStack_6;
  
  uStack_6 = 0x0;
  while( true )
  {
    if (0xe < (int)uStack_6)
    {
      return -0x1;
    }
    if (*(int *)(uStack_6 * 0xe + 0x5a70) == ctrl_id) break;
    uStack_6 += 0x1;
  }
  return uStack_6;
}



// Scalar deleting destructor for sub-dialog type B772.

void * __stdcall16far
UI_SubDialog_TypeB772_dtor_Scalar_Deleting_997c
          (void *param_1,undefined2 param_2,byte param_3)
{
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_SubDialog_Type9AF6_ctor_init_9a1e(undefined2 *param_1,void *param_2,ushort param_3)
{
  UI_SubDialog_TypeB772_ctor_init_b040(param_1,param_2,param_3);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x9af6;
  param_1[0x1] = 0x1038;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far UI_SubDialog_Type9AF6_dtor_Internal_9a48(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0x9af6;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_SubDialog_TypeB772_dtor_Internal_b0f8((void *)this_ptr);
  return;
}



// Virtual event handler for dialog Type 0x9AF6. Manages specialized control
// interactions for items 0xF8 and 0x17D9, including enabling windows and window
// positioning.

ulong __stdcall16far
UI_SubDialog_Type9AF6_On_Event_Logic_9a66
          (int param_1,undefined2 param_2,HWND16 param_3,undefined4 param_4)
{
  ulong uVar1;
  HWND16 hwnd;
  
  if (param_4._2_2_ == 0xf8)
  {
    param_3 = GetDlgItem16(0x17d9,*(short *)(param_1 + 0x6));
    hwnd = 0x1;
  }
  else
  {
    if (param_4._2_2_ != 0x17d9)
    {
      uVar1 = UI_SubDialog_Complex_Command_Handler_b54a
                        (param_1,param_2,param_3,(int)param_4,param_4._2_2_);
      return uVar1;
    }
    SetWindowPos16(0x6,0x1a0,0x12c,0x0,0x0,0x0,*(HWND16 *)(param_1 + 0x6));
    hwnd = 0x0;
  }
  EnableWindow16(hwnd,param_3);
  return 0x1;
}



void * __stdcall16far
UI_SubDialog_Type9AF6_dtor_Scalar_Deleting_9ad0(void *this_ptr,byte flags)
{
  UI_SubDialog_Type9AF6_dtor_Internal_9a48(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for sub-dialog Type 0x9EFA (vtable 0x9EFA). Initializes base dialog,
// zeroes an internal 74-element array (offset 0x94), and sets vtable.

void * __stdcall16far
UI_SubDialog_Type9EFA_ctor_init_9b72(undefined2 *param_1,void *param_2,ushort param_3)
{
  int iStack_4;
  
  UI_SubDialog_TypeB772_ctor_init_b040(param_1,param_2,param_3);
  param_1[0x94] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x9efa;
  param_1[0x1] = 0x1038;
  iStack_4 = 0x0;
  do
  {
    param_1[iStack_4 + 0x4a] = 0x0;
    iStack_4 += 0x1;
  } while (iStack_4 < 0x4a);
  return (void *)CONCAT22(param_2,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes and positions the colony status report sub-dialog, setting up window
// handles for various labels.

void __stdcall16far
UI_Colony_Status_Dialog_Initialize_and_Layout_9bc8(undefined4 *param_1)
{
  undefined2 *puVar1;
  int iVar2;
  int16_t iVar3;
  HDC16 hdc;
  int iVar4;
  HWND16 HVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  long lVar9;
  int *out2;
  undefined4 *this_ptr;
  int local_24;
  undefined1 local_16 [0x2];
  int local_14;
  int local_10;
  int local_e;
  int iStack_c;
  long local_a;
  int local_6;
  int local_4;
  
  this_ptr = (undefined4 *)param_1;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  if (PTR_DAT_1050_0000_1050_5ef8 ==
      (undefined *)((int)(u16 *)&p_LastAllocatedBlock + 0x1))
  {
    PTR_DAT_1050_0000_1050_5ef8 = NULL;
  }
  out2 = &local_6;
  local_a = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  unpack_word_pair((void *)((int)local_a + 0xe),(int *)((ulong)local_a >> 0x10),out2);
  iVar3 = GetSystemMetrics16(0x4);
  iStack_c = iVar3 * (int)PTR_DAT_1050_0000_1050_5ef8 + 0xa;
  PTR_DAT_1050_0000_1050_5ef8 = PTR_DAT_1050_0000_1050_5ef8 + 0x1;
  local_e = iStack_c + local_6;
  iStack_c += local_4;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  GetWindowRect16((undefined1 *)CONCAT22(unaff_SS,local_16),
                  *(HWND16 *)((int)this_ptr + 0x6));
  hdc = GetDC16(0x0);
  iVar3 = GETDEVICECAPS(0xa,hdc);
  ReleaseDC16(hdc,0x0);
  if (iVar3 < local_10)
  {
    local_e = (local_14 - (local_10 - iVar3)) + 0x1;
  }
  SetWindowPos16(0x1,0x0,0x0,local_e,iStack_c,0x0,*(HWND16 *)((int)this_ptr + 0x6));
  uVar8 = 0x1010;
  lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  uVar6 = (undefined2)((ulong)lVar9 >> 0x10);
  iVar4 = (int)lVar9 + 0xa4;
  local_24 = 0x0;
  while (iVar2 = local_24 * 0x2, *(int *)(iVar2 + iVar4) != 0x0)
  {
    uVar8 = 0x1538;
    HVar5 = GetDlgItem16(*(HWND16 *)(iVar2 + iVar4),*(short *)((int)this_ptr + 0x6));
    *(HWND16 *)((int)this_ptr + iVar2 + 0x94) = HVar5;
    local_24 += 0x1;
    *(int *)(this_ptr + 0x4a) = *(int *)(this_ptr + 0x4a) + 0x1;
  }
  puVar1 = (undefined2 *)((int)*param_1 + 0x6c);
  (*(code *)*puVar1)(uVar8,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Virtual event handler for dialog Type 0x9EFA. On command 0xEB, it scans the resource
// manager (ID 3) and caches multiple control handles (HWNDs) in its internal array
// starting at offset 0x94. Also manages dialog positioning.

ulong __stdcall16far
UI_SubDialog_Type9EFA_On_Event_Logic_9cec(void *this_ptr,u16 arg2,u16 arg3,int event_id)
{
  int iVar1;
  HWND16 HVar2;
  ulong uVar3;
  void *puVar5;
  HWND16 hwnd;
  u16 uStack_c;
  
  if (event_id == 0xeb)
  {
    UI_SubDialog_Complex_Command_Handler_b54a(this_ptr,arg2,arg3,0xeb);
    puVar5 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
    puVar5._2_2_ = (undefined2)((ulong)puVar5 >> 0x10);
    uStack_c = 0x0;
    while (iVar1 = uStack_c * 0x2, *(int *)((int)(void *)puVar5 + iVar1 + 0xa4) != 0x0)
    {
      HVar2 = GetDlgItem16(*(HWND16 *)((int)(void *)puVar5 + iVar1 + 0xa4),
                           *(short *)((int)(void *)this_ptr + 0x6));
      *(HWND16 *)((int)(void *)this_ptr + iVar1 + 0x94) = HVar2;
      uStack_c += 0x1;
      *(int *)((int)(void *)this_ptr + 0x128) =
           *(int *)((int)(void *)this_ptr + 0x128) + 0x1;
    }
  }
  else
  {
    if (event_id == 0xf8)
    {
      HVar2 = GetDlgItem16(0x17d8,*(short *)((int)(void *)this_ptr + 0x6));
      hwnd = 0x1;
    }
    else
    {
      if (event_id != 0x17d8)
      {
        uVar3 = UI_SubDialog_Complex_Command_Handler_b54a(this_ptr,arg2,arg3,event_id);
        return uVar3;
      }
      SetWindowPos16(0x6,0xed,0x237,0x0,0x0,0x0,*(HWND16 *)((int)(void *)this_ptr + 0x6)
                    );
      HVar2 = GetDlgItem16(0x17d8,*(short *)((int)(void *)this_ptr + 0x6));
      hwnd = 0x0;
    }
    EnableWindow16(hwnd,HVar2);
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Custom handler for WM_CTLCOLOR messages in sub-dialogs. Selects text/background
// colors from the global palette. For list box items (type 6), compares the control ID
// against the dialog's cached handle array (offset 0x94) to decide between primary and
// secondary highlight colors.

void * __stdcall16far
UI_SubDialog_Handle_Custom_CTLCOLOR_Logic_9dcc
          (void *this_ptr,int ctrl_id,uint ctrl_type)
{
  bool bVar1;
  HBRUSH16 HVar2;
  void *pvVar3;
  undefined2 in_DX;
  int iVar4;
  undefined2 uVar5;
  undefined *hdc;
  undefined *color;
  uint uStack_e;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar4 = (int)this_ptr;
  if (*(int *)(iVar4 + 0x8e) == 0x0)
  {
    HVar2 = CreateSolidBrush16(0x0);
    *(HBRUSH16 *)(iVar4 + 0x8e) = HVar2;
  }
  if (_PTR_DAT_1050_0000_1050_5b64 == NULL)
  {
    pvVar3 = Palette_Object_Get_Buffer_Ptr_maybe
                       ((void *)(void *)*(undefined4 *)
                                         ((int)_p_GlobalPaletteObject + 0xe));
    _PTR_DAT_1050_0000_1050_5b64 =
         (undefined *)
         (ulong)CONCAT12(*(undefined1 *)((int)pvVar3 + 0x94),
                         CONCAT11(*(undefined1 *)((int)pvVar3 + 0x95),
                                  *(undefined1 *)((int)pvVar3 + 0x96)));
    PTR_DAT_1050_0000_1050_5b68 =
         (undefined *)
         CONCAT11(*(undefined1 *)((int)pvVar3 + 0x3e5),
                  *(undefined1 *)((int)pvVar3 + 0x3e6));
    PTR_DAT_1050_0000_1050_5b6a = (undefined *)(uint)*(byte *)((int)pvVar3 + 0x3e4);
  }
  hdc = PTR_DAT_1050_0000_1050_5b64;
  color = PTR_DAT_1050_0000_1050_5b66;
  if (0x5 < ctrl_type)
  {
    if (ctrl_type != 0x6)
    {
      return NULL;
    }
    bVar1 = false;
    for (uStack_e = 0x0; uStack_e < *(uint *)(iVar4 + 0x128); uStack_e += 0x1)
    {
      if (*(int *)(iVar4 + 0x94 + uStack_e * 0x2) == ctrl_id)
      {
        bVar1 = true;
        break;
      }
    }
    if (bVar1)
    {
      hdc = PTR_DAT_1050_0000_1050_5b68;
      color = PTR_DAT_1050_0000_1050_5b6a;
    }
  }
  SetTextColor16((HDC16)hdc,(COLORREF)color);
  SetBkColor16(0x0,0x100);
  return (void *)CONCAT22(0x1050,(void *)*(undefined2 *)(iVar4 + 0x8e));
}



// Scalar deleting destructor for sub-dialog type B772.

void * __stdcall16far
UI_SubDialog_TypeB772_dtor_Scalar_Deleting_9ed4
          (void *param_1,undefined2 param_2,byte param_3)
{
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_SubDialog_TypeA0B6_ctor_init_9f76(void *this_ptr,u32 arg2,u16 arg3,u16 arg4,u16 arg5)
{
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,arg2,0xfba,arg5);
  *(undefined2 *)this_ptr = 0xa0b6;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeA0B6_dtor_Internal_9fa4(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xa0b6;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



void __stdcall16far UI_SubDialog_TypeA0B6_Show_and_Center_9fd0(void *this_ptr)
{
  int x;
  void *this_ptr_00;
  
  this_ptr_00 = (void *)this_ptr;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  x = (int)((ulong)this_ptr >> 0x10);
  UI_Window_Move_or_Center_826c(this_ptr_00,x,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  return;
}



void __stdcall16far UI_Window_Conditional_Destroy_a072(u32 param_1,int param_2)
{
  if (param_2 != 0x0)
  {
    DestroyWindow16(*(HWND16 *)((int)param_1 + 0x6));
  }
  return;
}



void * __stdcall16far
UI_SubDialog_TypeA0B6_dtor_Scalar_Deleting_a090(void *param_1,byte param_2)
{
  UI_SubDialog_TypeA0B6_dtor_Internal_9fa4(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}
