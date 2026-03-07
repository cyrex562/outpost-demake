/*
 * Source: outpost.c
 * Chunk: 100/117
 * Original lines: 114227-115366
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Displays a multi-line message box summarizing current colony conditions (Strings
// 0x7E6-0x7E8).

void __stdcall16far UI_Show_Colony_Status_Summary_MessageBox_8a3a(void)
{
  undefined2 in_DX;
  char *unaff_SS;
  undefined2 in_stack_0000fdee;
  char local_20a [0x102];
  char *pcStack_108;
  undefined2 uStack_106;
  char local_104 [0x102];
  
  pcStack_108 = allocate_memory(CONCAT22(in_stack_0000fdee,0x1000));
  uStack_106 = in_DX;
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(pcStack_108,0x3ff),
             CONCAT22(0x7e6,in_DX));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7e7,unaff_SS));
  strcat_append((char *)CONCAT22(uStack_106,pcStack_108),
                (char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7e8,unaff_SS));
  strcat_append((char *)CONCAT22(uStack_106,pcStack_108),
                (char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_20a,0x101),
             (long)CONCAT22(0x57b,unaff_SS));
  MessageBox16(0x0,local_20a,unaff_SS,(ushort)pcStack_108);
  free_if_not_null(pcStack_108);
  return;
}



// Applies population or resource adjustments from the transfer UI to the colony and
// world entities. Reads the adjusted quantity from control 0x184D.

void __stdcall16far UI_Transfer_Dialog_Apply_Adjustment_Logic_8afe(void *this_ptr)
{
  uint16_t value;
  astruct_116 *uVar2;
  undefined2 uVar1;
  int16_t unaff_SS;
  undefined1 local_4 [0x2];
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_116 *)this_ptr;
  value = GetDlgItemInt16(0x0,(uint16_t)local_4,unaff_SS,0x184d);
  UI_Component_Adjust_Resource_Value_and_Limit_6c1a((void *)uVar2->field148_0x94,value);
  Colony_Adjust_SubEntity_Population_Logic_387e
            ((void *)*(undefined4 *)((int)uVar2->field148_0x94 + 0x2e),value,
             uVar2->field153_0x9c,(void *)uVar2->field148_0x94);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Syncs the transfer dialog's labels with the linked entity's name and current counts.
// Updates quantity controls 0x1846, 0x184D, and 0x184F.

void __stdcall16far UI_Transfer_Dialog_Refresh_Labels_Logic_8b58(void *this_ptr)
{
  uint16_t value;
  void *pvVar1;
  undefined2 uVar2;
  short unaff_SS;
  undefined1 local_106 [0x100];
  char *pcStack_6;
  
  pcStack_6 = (char *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar1 = (void *)this_ptr;
  Entity_Format_Full_Name_Label_Logic
            ((char *)pcStack_6,(long)CONCAT22(unaff_SS,local_106));
  SendDlgItemMessage16
            ((HWND16)local_106,unaff_SS,0x0,0xc,
             CONCAT22(*(undefined2 *)((int)pvVar1 + 0x6),0x1846));
  *(undefined2 *)((int)pvVar1 + 0x9c) =
       *(undefined2 *)((int)*(undefined4 *)((int)pvVar1 + 0x94) + 0x32);
  *(undefined2 *)((int)pvVar1 + 0x9a) = *(undefined2 *)((int)pvVar1 + 0x9c);
  SetDlgItemInt(0x0,*(uint16_t *)((int)pvVar1 + 0x9c),0x184d,
                *(HWND16 *)((int)pvVar1 + 0x6));
  value = Colony_Count_Total_Free_SubItem_Slots_3aa6
                    ((void *)*(undefined4 *)
                              ((int)*(undefined4 *)((int)pvVar1 + 0x94) + 0x2e));
  *(uint16_t *)((int)pvVar1 + 0x98) = value;
  SetDlgItemInt(0x0,value,0x184f,*(HWND16 *)((int)pvVar1 + 0x6));
  return;
}



u16 * __stdcall16far
UI_SubDialog_Type8DDC_dtor_Scalar_Deleting_8c08(void *this_ptr,byte flags)
{
  UI_Transfer_Dialog_dtor_Internal_893a(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)this_ptr);
  }
  return (u16 *)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x90C8 (vtable 0x90C8). Links to Resource 0x3F and
// initializes base ID 0x185A.

void * __stdcall16far UI_SubDialog_Type90C8_ctor_init_8caa(void *this_ptr)
{
  astruct_115 *uVar2;
  long lVar1;
  undefined2 in_stack_00000008;
  void *this_ptr_00;
  undefined2 uVar3;
  
  this_ptr_00 = (void *)this_ptr;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_SubDialog_TypeB772_ctor_Simple_b082(this_ptr_00,CONCAT22(in_stack_00000008,0x185a))
  ;
  *(undefined4 *)((int)this_ptr_00 + 0x94) = 0x0;
  *(undefined2 *)this_ptr = 0x90c8;
  *(undefined2 *)((int)this_ptr_00 + 0x2) = 0x1038;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3f);
  *(undefined2 *)((int)this_ptr_00 + 0x94) = (int)lVar1;
  *(undefined2 *)((int)this_ptr_00 + 0x96) = (int)((ulong)lVar1 >> 0x10);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type90C8_dtor_Internal_8cf6(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0x90c8;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_TypeB772_dtor_Internal_b0f8((void *)this_ptr);
  return;
}



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
// Displays a massive, two-part status report in message boxes using string resources
// 0x803-0x80A. Likely used for game end or major milestones.

void __stdcall16far UI_Show_Final_Status_Report_MessageBox_8dda(u32 this_ptr)
{
  char *ptr;
  undefined2 in_DX;
  char *unaff_SS;
  undefined2 in_stack_0000fdee;
  char local_206 [0x102];
  char local_104 [0x102];
  
  ptr = allocate_memory(CONCAT22(in_stack_0000fdee,0x1000));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_206,0x100),
             (long)CONCAT22(0x57b,unaff_SS));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(ptr,0x3ff),
             CONCAT22(0x803,in_DX));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x804,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x805,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x806,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x807,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x808,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  MessageBox16(0x0,local_206,unaff_SS,(ushort)ptr);
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(ptr,0x3ff),
             CONCAT22(0x809,in_DX));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x80a,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  MessageBox16(0x0,local_206,unaff_SS,(ushort)ptr);
  free_if_not_null(ptr);
  return;
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
// Constructor for the Resource Exchange/Trade Dialog (vtable 0x99A2). Links to a
// resource manager (ID 0x28), allocates a list for 17 exchange categories, and
// initializes internal tracking fields at offsets 0x94 and 0x96.

u16 * __stdcall16far
UI_Resource_Exchange_Dialog_ctor_init_9144(void *this_ptr,uint16_t arg2)
{
  u16 uVar1;
  void *pvVar2;
  u16 *puVar3;
  u16 uVar4;
  int iVar5;
  undefined2 unaff_SI;
  undefined2 uVar7;
  long lVar8;
  void *pvVar9;
  u16 *this_ptr_00;
  undefined2 uVar10;
  undefined4 uStack_8;
  astruct_114 *uVar6;
  
  this_ptr_00 = (u16 *)this_ptr;
  uVar10 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_SubDialog_TypeB772_ctor_Simple_b082(this_ptr_00,CONCAT22(arg2,0xfaa));
  this_ptr_00[0x4a] = 0x0;
  this_ptr_00[0x4b] = 0x0;
  (this_ptr_00 + 0x4c)[0x0] = 0x0;
  (this_ptr_00 + 0x4c)[0x1] = 0x0;
  *(undefined2 *)this_ptr = 0x99a2;
  this_ptr_00[0x1] = 0x1038;
  this_ptr_00[0x45] = 0x27;
  lVar8 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x28);
  uVar4 = (u16)((ulong)lVar8 >> 0x10);
  this_ptr_00[0x4c] = (u16)lVar8;
  this_ptr_00[0x4d] = uVar4;
  pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x18));
  if (uVar4 == 0x0 && pvVar2 == NULL)
  {
    (this_ptr_00 + 0x48)[0x0] = 0x0;
    (this_ptr_00 + 0x48)[0x1] = 0x0;
    uVar4 = 0x0;
  }
  else
  {
    pvVar9 = Helper_ZeroFill_24Bytes_a598((void *)CONCAT22(uVar4,pvVar2));
    uVar4 = (u16)((ulong)pvVar9 >> 0x10);
    this_ptr_00[0x48] = (u16)pvVar9;
    this_ptr_00[0x49] = uVar4;
  }
  **(undefined2 **)(this_ptr_00 + 0x48) = 0x11;
  uVar1 = **(u16 **)(this_ptr_00 + 0x48);
  puVar3 = allocate_memory(CONCAT22(unaff_SI,uVar1 * 0xa + 0x2));
  uStack_8 = (u16 *)CONCAT22(uVar4,puVar3);
  if (uVar4 == 0x0 && puVar3 == NULL)
  {
    *(undefined4 *)((int)*(undefined4 *)(this_ptr_00 + 0x48) + 0x2) = 0x0;
  }
  else
  {
    *uStack_8 = uVar1;
    call_function_n_times((void *)0xa564,0x1040,uVar1);
    uVar7 = (undefined2)((ulong)*(undefined4 *)(this_ptr_00 + 0x48) >> 0x10);
    iVar5 = (int)*(undefined4 *)(this_ptr_00 + 0x48);
    *(int *)(iVar5 + 0x2) = (int)(puVar3 + 0x1);
    *(u16 *)(iVar5 + 0x4) = uVar4;
  }
  *(undefined2 *)((int)*(undefined4 *)(this_ptr_00 + 0x48) + 0xa) = 0x18;
  *(u16 *)((int)*(undefined4 *)(this_ptr_00 + 0x48) + 0x12) = this_ptr_00[0x5];
  return this_ptr_00;
}



void __stdcall16far Simulator_Object_VCall_74_927c(u32 *param_1)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x74);
  (*(code *)*puVar1)();
  return;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Commits resource exchange transactions, creating sprite objects or setting dynamic
// values based on dialog inputs.

void __stdcall16far
UI_Resource_Exchange_Dialog_Commit_Transactions_95fc(undefined4 param_1)
{
  undefined2 *puVar1;
  astruct_491 *this;
  undefined4 *puVar2;
  uint16_t map_id;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_DX;
  undefined2 unaff_SI;
  undefined2 uVar6;
  int16_t unaff_SS;
  uint16_t value2;
  long lVar7;
  undefined2 *local_1e;
  undefined4 local_18;
  int local_14;
  undefined1 local_10 [0x2];
  undefined4 local_e;
  void *local_a;
  long local_6;
  
  local_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
  local_a = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
  uVar4 = (uint)((ulong)local_a >> 0x10);
  lVar7 = CONCAT22(unaff_SI,0xc);
  this = allocate_memory(lVar7);
  uVar5 = uVar4 | (uint)this;
  if (uVar5 == 0x0)
  {
    puVar2 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    lVar7 = CONCAT22((int)((ulong)lVar7 >> 0x10),uVar4);
    puVar2 = construct_object_with_vtable(this,uVar4);
  }
  local_e = (undefined4 *)CONCAT22(uVar5,puVar2);
  for (local_14 = 0x0; uVar4 = (uint)((ulong)lVar7 >> 0x10), local_14 < 0xf;
      local_14 += 0x1)
  {
    lVar7 = (ulong)uVar4 << 0x10;
    map_id = GetDlgItemInt16(0x1,(uint16_t)local_10,unaff_SS,
                             *(HWND16 *)(local_14 * 0xe + 0x5a72));
    if (map_id != 0x0)
    {
      uVar4 = (uint)((ulong)lVar7 >> 0x10);
      if (*(int *)(local_14 * 0xe + 0x5a7c) < 0x83)
      {
        lVar7 = CONCAT22(uVar4,0x8);
        puVar3 = allocate_memory(lVar7);
        local_18 = (undefined2 *)CONCAT22(uVar5,puVar3);
        if (uVar5 == 0x0 && puVar3 == NULL)
        {
          local_1e = NULL;
        }
        else
        {
          *local_18 = (char *)s_1_1050_389a;
          puVar3[0x1] = 0x1008;
          *local_18 = 0xa1c4;
          puVar3[0x1] = 0x1010;
          local_1e = local_18;
        }
        uVar6 = (undefined2)((ulong)local_1e >> 0x10);
        puVar3 = (undefined2 *)local_1e;
        puVar3[0x3] = map_id;
        puVar3[0x2] = *(undefined2 *)(local_14 * 0xe + 0x5a7c);
        lVar7 = CONCAT22((int)((ulong)lVar7 >> 0x10),uVar6);
        puVar1 = (undefined2 *)((int)*local_e + 0x4);
        (*(code *)*puVar1)(0x1000,(undefined4 *)local_e,(int)((ulong)local_e >> 0x10),
                           puVar3,uVar6);
        uVar5 = extraout_DX;
      }
      else
      {
        value2 = map_id;
        if (*(int *)(local_14 * 0xe + 0x5a7c) != 0x89)
        {
          value2 = 0x0;
        }
        lVar7 = (ulong)uVar4 << 0x10;
        UI_Component_Set_Dynamic_Offset_Value_Logic
                  ((void *)local_a,(int)((ulong)local_a >> 0x10),value2,map_id);
      }
    }
  }
  *(undefined4 *)((int)local_6 + 0xa) = local_e;
  PostMessage16(0x0,0x0,0xed,(long)CONCAT22(uVar4,g_ParentHWND));
  return;
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
