/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 35/54
 * Original lines (combined): 112153-114385
 * Boundaries: top-level declarations/definitions only
 */




// Validates if all core status fields (0xC, 0xE, 0x12, 0x14) are zero and clears the
// secondary flag at 0x16 if so. Returns 1 if 0x16 is now zero.

u16 __stdcall16far UI_Component_Check_and_Clear_Status_Flags_6b3c(void *this_ptr)
{
  astruct_139 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_139 *)this_ptr;
  if ((((uVar1->field12_0xc == 0x0) && (uVar1->field14_0x12 == 0x0)) &&
      (uVar1->field15_0x14 == 0x0)) &&
     ((uVar1->field13_0xe == 0x0 && (uVar1->field16_0x16 != 0x0))))
  {
    uVar1->field16_0x16 = 0x0;
  }
  if (uVar1->field16_0x16 == 0x0)
  {
    return 0x1;
  }
  return 0x0;
}



// Factory routine that instantiates a B932 UI component and appends it to the parent
// manager's active list.

void __stdcall16far
UI_Component_Add_B932_to_Manager_79b2(undefined4 param_1,u16 param_2)
{
  undefined2 *puVar1;
  void *pvVar2;
  int in_DX;
  undefined2 uVar3;
  undefined2 uVar4;
  void *pvVar5;
  undefined2 in_stack_0000fff6;
  
  uVar4 = 0x1000;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x14));
  if (in_DX == 0x0 && pvVar2 == NULL)
  {
    pvVar5 = NULL;
  }
  else
  {
    uVar4 = 0x1030;
    pvVar5 = UI_Component_Type_B932_ctor_with_Params_aefa
                       ((void *)CONCAT22(in_DX,pvVar2),param_2);
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x4) + 0x4)
  ;
  (*(code *)*puVar1)(uVar4,*(undefined4 *)((int)param_1 + 0x4),pvVar5);
  return;
}



// Main iteration routine for the Turn Manager. Resets all tracked items, then processes
// updates for items requiring a state change, and finally triggers neighbor-link
// refreshes for the entire list.

void __stdcall16far Simulator_Turn_Manager_Batch_Update_Logic_7a76(void *this_ptr)
{
  undefined2 *puVar1;
  u16 uVar2;
  void *pvVar3;
  undefined1 local_a [0x4];
  undefined4 uStack_6;
  
  init_long_pair(local_a,*(long *)this_ptr);
  while( true )
  {
    pvVar3 = (void *)get_next_list_item(local_a);
    if (pvVar3 == NULL) break;
    UI_Build_Item_TypeD88E_Process_SubItem_Scheduling_6a0e(pvVar3);
  }
  do
  {
    uStack_6 = 0x0;
    do
    {
      pvVar3 = (void *)get_next_list_item(local_a);
      if (pvVar3 == NULL)
      {
        init_long_pair(local_a,*(long *)((int)(void *)this_ptr + 0x4));
        while( true )
        {
          pvVar3 = (void *)get_next_list_item(local_a);
          if (pvVar3 == NULL) break;
          UI_Build_Item_Scan_Neighbors_and_Update_State_Logic_affc(pvVar3);
        }
        return;
      }
      uVar2 = UI_Component_Check_and_Clear_Status_Flags_6b3c(pvVar3);
    } while (uVar2 == 0x0);
    puVar1 = (undefined2 *)((int)**(undefined4 **)this_ptr + 0xc);
    (*(code *)*puVar1)(0x1008,*(undefined4 *)this_ptr,pvVar3);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog component type 0x8876. Links to Resource 0x40. Base ID
// 0x1853.

u16 * __stdcall16far UI_SubDialog_Type8876_ctor_init_7d10(u16 *this_ptr,uint16_t arg2)
{
  long lVar1;
  undefined2 in_stack_00000008;
  
  UI_SubDialog_TypeB772_ctor_Simple_b082(this_ptr,CONCAT22(in_stack_00000008,0x1853));
  (this_ptr + 0x4a)[0x0] = 0x0;
  (this_ptr + 0x4a)[0x1] = 0x0;
  *_this_ptr = 0x8876;
  this_ptr[0x1] = 0x1038;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x40);
  this_ptr[0x4a] = (u16)lVar1;
  this_ptr[0x4b] = (u16)((ulong)lVar1 >> 0x10);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type8876_dtor_Internal_7d5c(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0x8876;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_TypeB772_dtor_Internal_b0f8((void *)this_ptr);
  return;
}



// Systematic cleanup of a component's internal sub-systems followed by the destruction
// of its associated window handle.

void __stdcall16far
UI_Component_Cleanup_and_Destroy_Window_7d88(void *this_ptr,int arg2)
{
  void *pvVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar1 = (void *)*(undefined4 *)((int)this_ptr + 0x94);
  UI_Component_Cleanup_SubSystems_Logic((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10));
  DestroyWindow16(*(HWND16 *)((int)this_ptr + 0x6));
  return;
}



void __stdcall16far UI_File_Selection_Dialog_Initialize_Wrapper_7dac(void *this_ptr)
{
  Helper_NoOp_Stub_78de();
  UI_File_Selection_Dialog_Initialize_844a(this_ptr);
  return;
}



// Command handler for the file selection dialog, managing list changes, name updates,
// and commitments.

ulong __stdcall16far
UI_File_Selection_Dialog_On_Command_7dc6
          (void *param_1,undefined2 param_2,undefined2 param_3,ulong param_4)
{
  bool bVar1;
  ulong uVar2;
  
  bVar1 = false;
  if (param_4._2_2_ == 0x1854)
  {
    if ((int)param_4 != 0x1) goto LAB_1038_7e8c;
    UI_File_Selection_On_Primary_List_Change_8618((void *)CONCAT22(param_2,param_1));
  }
  else
  {
    if (param_4 < 0x18550000)
    {
      if (param_4._2_2_ == 0xeb)
      {
        UI_File_Selection_Dialog_Initialize_844a((void *)CONCAT22(param_2,param_1));
      }
      else if (param_4._2_2_ == 0xfb)
      {
        UI_File_Selection_Dialog_On_Name_Update_7eac((void *)CONCAT22(param_2,param_1));
      }
      else
      {
        if (param_4._2_2_ != 0x1841)
        {
LAB_1038_7e77:
          uVar2 = UI_SubDialog_Complex_Command_Handler_b54a
                            (param_1,CONCAT22(param_3,param_2),param_4);
          return uVar2;
        }
        UI_Show_Resource_Distribution_Summary_Dialog_81be
                  ((u32)CONCAT22(param_2,param_1));
      }
      goto LAB_1038_7e8c;
    }
    if (param_4._2_2_ == 0x1855)
    {
      if ((int)param_4 != 0x1) goto LAB_1038_7e8c;
      UI_File_Selection_On_Secondary_List_Change_87b2((void *)CONCAT22(param_2,param_1))
      ;
    }
    else if (param_4._2_2_ == 0x1856)
    {
      if ((int)param_4 != 0x1) goto LAB_1038_7e8c;
      UI_File_Selection_On_Tertiary_List_Change_8810((void *)CONCAT22(param_2,param_1));
    }
    else if (param_4._2_2_ == 0x1858)
    {
      UI_File_Selection_Dialog_Cleanup_Selections_7fae((u32)CONCAT22(param_2,param_1));
    }
    else
    {
      if (param_4._2_2_ != 0x1859) goto LAB_1038_7e77;
      UI_File_Selection_Dialog_Commit_Filename_801a((u32)CONCAT22(param_2,param_1));
    }
  }
  bVar1 = true;
LAB_1038_7e8c:
  if (bVar1)
  {
    UI_File_Selection_Update_Status_Text_8358((void *)CONCAT22(param_2,param_1));
    UI_File_Selection_Dialog_Update_Button_States_806a
              ((void *)CONCAT22(param_2,param_1));
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles UI updates when a file name is changed or selected. Refreshes list boxes
// 0x1854-0x1856 and synchronizes the underlying element's string.

void __stdcall16far UI_File_Selection_Dialog_On_Name_Update_7eac(void *this_ptr)
{
  char *hwnd;
  short id;
  astruct_122 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  LRESULT pvVar4;
  
  pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x30);
  id = (short)((ulong)pvVar3 >> 0x10);
  hwnd = String_Wrapper_Object_Get_String_Logic((void *)pvVar3);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_122 *)this_ptr;
  UI_Element_Subclass_Replace_String_at_Offset_16
            ((void *)(void *)uVar1->field147_0x94,
             (char *)((ulong)uVar1->field147_0x94 >> 0x10));
  SendDlgItemMessage16(0x0,0x0,0x0,0xb,CONCAT22(uVar1->field6_0x6,0x1854));
  pvVar4 = SendDlgItemMessage16(0x0,0x0,0x0,0x409,CONCAT22(uVar1->field6_0x6,0x1854));
  if ((pvVar4 != (LRESULT)0xffffffff) || (false))
  {
    SendDlgItemMessage16
              (0x0,0x0,(ushort)pvVar4,0x403,CONCAT22(uVar1->field6_0x6,0x1854));
    SendDlgItemMessage16((HWND16)hwnd,id,0x0,0x401,CONCAT22(uVar1->field6_0x6,0x1854));
    SendDlgItemMessage16(0x0,0x0,0xffff,0x407,CONCAT22(uVar1->field6_0x6,0x1854));
    SendDlgItemMessage16(0x0,0x0,0x0,0x405,CONCAT22(uVar1->field6_0x6,0x1855));
    SendDlgItemMessage16(0x0,0x0,0x0,0x405,CONCAT22(uVar1->field6_0x6,0x1856));
    UI_File_Selection_Dialog_Update_Button_States_806a(this_ptr);
  }
  SendDlgItemMessage16(0x0,0x0,0x1,0xb,CONCAT22(uVar1->field6_0x6,0x1854));
  return;
}



// Clears all current selections and sub-component links within the file selection
// dialog.

void __stdcall16far UI_File_Selection_Dialog_Cleanup_Selections_7fae(u32 this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  UI_Element_Subclass_Cleanup_Offset_16((void *)(void *)*(undefined4 *)(iVar1 + 0x94));
  SendDlgItemMessage16
            (0x0,0x0,0xffff,0x407,CONCAT22(*(undefined2 *)(iVar1 + 0x6),0x1855));
  SendDlgItemMessage16
            (0x0,0x0,0xffff,0x407,CONCAT22(*(undefined2 *)(iVar1 + 0x6),0x1856));
  UI_Component_Set_SubComponent_at_Offset_1A_Logic
            ((void *)(void *)*(undefined4 *)(iVar1 + 0x94),
             (char *)((ulong)*(undefined4 *)(iVar1 + 0x94) >> 0x10));
  UI_Component_Set_SubComponent_at_Offset_1E_Logic
            ((void *)(void *)*(undefined4 *)(iVar1 + 0x94),
             (char *)((ulong)*(undefined4 *)(iVar1 + 0x94) >> 0x10));
  return;
}



// Dynamically enables or disables the OK and specialized action buttons based on the
// validity of the current file selection.

void __stdcall16far UI_File_Selection_Dialog_Update_Button_States_806a(void *this_ptr)
{
  HWND16 HVar1;
  void *pvVar2;
  char *pcVar3;
  uint in_DX;
  astruct_121 *uVar2;
  undefined2 uVar4;
  undefined4 uStack_e;
  undefined4 uStack_a;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_121 *)this_ptr;
  HVar1 = GetDlgItem16(0x1,uVar2->field6_0x6);
  EnableWindow16(0x0,HVar1);
  HVar1 = GetDlgItem16(0x1858,uVar2->field6_0x6);
  EnableWindow16(0x0,HVar1);
  HVar1 = GetDlgItem16(0x1859,uVar2->field6_0x6);
  EnableWindow16(0x0,HVar1);
  pvVar2 = UI_Get_Numbered_Slot_List_Head_maybe((void *)(void *)uVar2->field147_0x94);
  in_DX |= (uint)pvVar2;
  if (in_DX != 0x0)
  {
    pcVar3 = UI_Element_Get_SubComponent_Filename_Logic
                       ((void *)(void *)uVar2->field147_0x94);
    uStack_a = (char *)CONCAT22(in_DX,pcVar3);
    pvVar2 = UI_Element_Get_SubComponent_Data_at_Offset_1A_Logic
                       ((void *)(void *)uVar2->field147_0x94);
    uStack_e = (void *)CONCAT22(in_DX,pvVar2);
    pvVar2 = UI_Element_Get_SubComponent_Data_at_Offset_1E_Logic
                       ((void *)(void *)uVar2->field147_0x94);
    if (((uStack_a != NULL) && (uStack_e != NULL)) && (in_DX != 0x0 || pvVar2 != NULL))
    {
      HVar1 = GetDlgItem16(0x1,uVar2->field6_0x6);
      EnableWindow16(0x1,HVar1);
      HVar1 = GetDlgItem16(0x1858,uVar2->field6_0x6);
      EnableWindow16(0x1,HVar1);
    }
    if (uStack_a != NULL)
    {
      HVar1 = GetDlgItem16(0x1859,uVar2->field6_0x6);
      EnableWindow16(0x1,HVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates the status text in a file selection dialog. If no files are available, shows
// a default "No Files" message. Otherwise, retrieves and displays the status of the
// currently selected file.

void __stdcall16far UI_File_Selection_Update_Status_Text_8358(void *this_ptr)
{
  char *pcVar1;
  u16 uVar2;
  int in_DX;
  astruct_120 *iVar3;
  undefined2 uVar3;
  undefined2 unaff_SS;
  char local_30a [0x102];
  char local_208 [0x100];
  undefined1 local_108 [0x100];
  void *pvStack_8;
  HWND16 HStack_4;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar3 = (astruct_120 *)this_ptr;
  HStack_4 = GetDlgItem16(0x1857,iVar3->field6_0x6);
  pvStack_8 = UI_Get_Numbered_Slot_List_Head_maybe((void *)(void *)iVar3->field147_0x94)
  ;
  if (in_DX == 0x0 && pvStack_8 == NULL)
  {
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_30a,0x100),
               CONCAT22(0x449,unaff_SS));
    pcVar1 = local_30a;
  }
  else
  {
    uVar2 = UI_Dialog_Get_Selected_List_Box_Text_8164
                      (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_108),0x1854);
    if (uVar2 == 0x0)
    {
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),
                 CONCAT22(local_208,0x100),CONCAT22(0x447,unaff_SS));
    }
    else
    {
      UI_Component_Show_File_Status_Message_Logic
                ((void *)(void *)iVar3->field147_0x94,
                 (void *)((ulong)iVar3->field147_0x94 >> 0x10),local_208);
    }
    pcVar1 = local_208;
  }
  SetWindowText16((char *)CONCAT22(unaff_SS,pcVar1),HStack_4);
  return;
}



// Iterates through a managed list and populates a Windows list box (LB_ADDSTRING)
// within the specified dialog.

void __stdcall16far
UI_Dialog_Populate_List_Box_8400(int offset,u16 segment,long list_ptr,int16_t item_id)
{
  undefined4 uVar1;
  long lVar2;
  u16 local_a;
  
  init_long_pair(&local_a,list_ptr);
  while( true )
  {
    lVar2 = get_next_list_item(&local_a);
    if (lVar2 == 0x0) break;
    uVar1 = *(undefined4 *)((int)lVar2 + 0x4);
    SendDlgItemMessage16
              ((HWND16)uVar1,(short)((ulong)uVar1 >> 0x10),0x0,0x401,
               CONCAT22(*(undefined2 *)(offset + 0x6),item_id));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initialization routine for file selection dialogs. Resets and populates multiple list
// boxes (0x1854-0x1856) with available save game files and update status text.

void __stdcall16far UI_File_Selection_Dialog_Initialize_844a(void *this_ptr)
{
  HWND16 hwnd;
  int iVar1;
  astruct_119 *uVar1;
  u16 segment;
  short unaff_SS;
  LRESULT pvVar2;
  undefined1 local_108 [0x102];
  void *pvStack_6;
  int iStack_4;
  
  segment = (u16)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_119 *)this_ptr;
  SendDlgItemMessage16(0x0,0x0,0x0,0xb,CONCAT22(uVar1->field6_0x6,0x1854));
  SendDlgItemMessage16(0x0,0x0,0x0,0xb,CONCAT22(uVar1->field6_0x6,0x1855));
  SendDlgItemMessage16(0x0,0x0,0x0,0xb,CONCAT22(uVar1->field6_0x6,0x1856));
  SendDlgItemMessage16(0x0,0x0,0x0,0x405,CONCAT22(uVar1->field6_0x6,0x1854));
  SendDlgItemMessage16(0x0,0x0,0x0,0x405,CONCAT22(uVar1->field6_0x6,0x1855));
  pvVar2 = SendDlgItemMessage16(0x0,0x0,0x0,0x405,CONCAT22(uVar1->field6_0x6,0x1856));
  iVar1 = (int)((ulong)pvVar2 >> 0x10);
  pvStack_6 = UI_Get_Numbered_Slot_List_Head_maybe((void *)(void *)uVar1->field147_0x94)
  ;
  iStack_4 = iVar1;
  if (iVar1 == 0x0 && pvStack_6 == NULL)
  {
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_108,0x100),
               CONCAT22(0x448,unaff_SS));
    SendDlgItemMessage16
              ((HWND16)local_108,unaff_SS,0x0,0x401,CONCAT22(uVar1->field6_0x6,0x1854));
    SendDlgItemMessage16(0x0,0x0,0x1,0xb,CONCAT22(uVar1->field6_0x6,0x1854));
    SendDlgItemMessage16(0x0,0x0,0x1,0xb,CONCAT22(uVar1->field6_0x6,0x1855));
    SendDlgItemMessage16(0x0,0x0,0x1,0xb,CONCAT22(uVar1->field6_0x6,0x1856));
    hwnd = GetDlgItem16(0x1857,uVar1->field6_0x6);
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_108,0x100),
               CONCAT22(0x449,unaff_SS));
    SetWindowText16((undefined1 *)CONCAT22(unaff_SS,local_108),hwnd);
    return;
  }
  UI_Dialog_Populate_List_Box_8400
            ((int)uVar1,segment,(long)CONCAT22(iVar1,pvStack_6),0x1854);
  UI_File_Selection_Update_Status_Text_8358(this_ptr);
  SendDlgItemMessage16(0x0,0x0,0x1,0xb,CONCAT22(uVar1->field6_0x6,0x1854));
  SendDlgItemMessage16(0x0,0x0,0x1,0xb,CONCAT22(uVar1->field6_0x6,0x1855));
  SendDlgItemMessage16(0x0,0x0,0x1,0xb,CONCAT22(uVar1->field6_0x6,0x1856));
  return;
}



// Handles the selection change event for the primary file list. Refreshes sub-lists
// (0x1855, 0x1856) and updates the dialog state based on the new file's metadata.

u16 __stdcall16far UI_File_Selection_On_Primary_List_Change_8618(void *this_ptr)
{
  void *pvVar1;
  u16 uVar2;
  int in_DX;
  uint id;
  uint uVar3;
  uint uVar4;
  void *offset;
  u16 segment;
  undefined2 unaff_SS;
  LRESULT pvVar5;
  undefined1 local_106 [0x100];
  void *pvStack_6;
  
  segment = (u16)((ulong)this_ptr >> 0x10);
  offset = (void *)this_ptr;
  pvVar1 = UI_Get_Numbered_Slot_List_Head_maybe
                     ((void *)(void *)*(undefined4 *)((int)offset + 0x94));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    pvStack_6 = pvVar1;
    uVar2 = UI_Dialog_Get_Selected_List_Box_Text_8164
                      (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_106),0x1854);
    pvVar1 = NULL;
    if (uVar2 != 0x0)
    {
      SendDlgItemMessage16
                (0x0,0x0,0x0,0xb,CONCAT22(*(undefined2 *)((int)offset + 0x6),0x1855));
      SendDlgItemMessage16
                (0x0,0x0,0x0,0xb,CONCAT22(*(undefined2 *)((int)offset + 0x6),0x1856));
      SendDlgItemMessage16
                (0x0,0x0,0x0,0x405,CONCAT22(*(undefined2 *)((int)offset + 0x6),0x1855));
      pvVar5 = SendDlgItemMessage16
                         (0x0,0x0,0x0,0x405,
                          CONCAT22(*(undefined2 *)((int)offset + 0x6),0x1856));
      uVar4 = (uint)((ulong)pvVar5 >> 0x10);
      UI_Component_Init_SubSystems_from_File_Logic
                ((void *)(void *)*(undefined4 *)((int)offset + 0x94),
                 (char *)((ulong)*(undefined4 *)((int)offset + 0x94) >> 0x10));
      pvVar1 = UI_Populate_File_List_Logic
                         ((void *)(void *)*(undefined4 *)((int)offset + 0x94));
      id = uVar4 | (uint)pvVar1;
      uVar3 = 0x0;
      if (id != 0x0)
      {
        UI_Dialog_Populate_List_Box_8400
                  ((int)offset,segment,(long)CONCAT22(uVar4,pvVar1),0x1855);
        pvVar1 = UI_Element_Get_SubComponent_Data_at_Offset_1A_Logic
                           ((void *)(void *)*(undefined4 *)((int)offset + 0x94));
        uVar3 = 0x0;
        if (id != 0x0 || pvVar1 != NULL)
        {
          pvVar5 = SendDlgItemMessage16
                             ((HWND16)pvVar1,id,0xffff,0x40d,
                              CONCAT22(*(undefined2 *)((int)offset + 0x6),0x1855));
          uVar3 = (uint)((ulong)pvVar5 >> 0x10);
        }
      }
      pvVar1 = UI_Populate_Standard_Option_List_Logic
                         ((void *)(void *)*(undefined4 *)((int)offset + 0x94));
      uVar4 = uVar3 | (uint)pvVar1;
      if (uVar4 != 0x0)
      {
        UI_Dialog_Populate_List_Box_8400
                  ((int)offset,segment,(long)CONCAT22(uVar3,pvVar1),0x1856);
        pvVar1 = UI_Element_Get_SubComponent_Data_at_Offset_1E_Logic
                           ((void *)(void *)*(undefined4 *)((int)offset + 0x94));
        if (uVar4 != 0x0 || pvVar1 != NULL)
        {
          SendDlgItemMessage16
                    ((HWND16)pvVar1,uVar4,0xffff,0x40d,
                     CONCAT22(*(undefined2 *)((int)offset + 0x6),0x1856));
        }
      }
      SendDlgItemMessage16
                (0x0,0x0,0x1,0xb,CONCAT22(*(undefined2 *)((int)offset + 0x6),0x1855));
      pvVar5 = SendDlgItemMessage16
                         (0x0,0x0,0x1,0xb,
                          CONCAT22(*(undefined2 *)((int)offset + 0x6),0x1856));
      pvVar1 = (void *)pvVar5;
    }
  }
  return (u16)pvVar1;
}



// Handles selection changes in the secondary file sub-list. Updates the file
// component's internal state.

u16 __stdcall16far UI_File_Selection_On_Secondary_List_Change_87b2(void *this_ptr)
{
  void *pvVar1;
  u16 uVar2;
  char *hwnd;
  void *pvVar3;
  short in_DX;
  undefined2 uVar4;
  undefined2 unaff_SS;
  LRESULT pvVar5;
  undefined1 local_102 [0x100];
  
  uVar2 = UI_Dialog_Get_Selected_List_Box_Text_8164
                    (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_102),0x1855);
  pvVar3 = NULL;
  if (uVar2 != 0x0)
  {
    uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
    pvVar1 = (void *)*(undefined4 *)((int)(void *)this_ptr + 0x94);
    UI_Component_Set_SubComponent_at_Offset_1A_Logic
              ((void *)pvVar1,(char *)((ulong)pvVar1 >> 0x10));
    hwnd = get_resource_string_531();
    pvVar5 = SendDlgItemMessage16
                       ((HWND16)hwnd,in_DX,0xffff,0x40d,
                        CONCAT22(*(undefined2 *)((int)(void *)this_ptr + 0x6),0x1856));
    pvVar3 = (void *)pvVar5;
  }
  return (u16)pvVar3;
}



void __stdcall16far UI_File_Selection_On_Tertiary_List_Change_8810(void *this_ptr)
{
  void *pvVar1;
  u16 uVar2;
  undefined2 unaff_SS;
  undefined1 local_102 [0x100];
  
  uVar2 = UI_Dialog_Get_Selected_List_Box_Text_8164
                    (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_102),0x1856);
  if (uVar2 != 0x0)
  {
    pvVar1 = (void *)*(undefined4 *)((int)this_ptr + 0x94);
    UI_Component_Set_SubComponent_at_Offset_1E_Logic
              ((void *)pvVar1,(char *)((ulong)pvVar1 >> 0x10));
  }
  return;
}



void * __stdcall16far
UI_SubDialog_Type8876_dtor_Scalar_Deleting_8850(void *param_1,byte param_2)
{
  UI_SubDialog_Type8876_dtor_Internal_7d5c(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a resource/population transfer dialog (vtable 0x8C2E). Loads
// 'dibtext.bmp' and links to the global Transfer Manager.

u16 * __stdcall16far UI_Transfer_Dialog_ctor_init_88f2(void *this_ptr,uint16_t arg2)
{
  astruct_118 *uVar1;
  undefined2 uVar2;
  u16 *this_ptr_00;
  
  this_ptr_00 = (u16 *)this_ptr;
  UI_SubDialog_TypeB772_ctor_Simple_b082(this_ptr_00,CONCAT22(arg2,0x184c));
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined4 *)(this_ptr_00 + 0x4a) = _PTR_DAT_1050_0000_1050_5a68;
  this_ptr_00[0x4c] = 0x0;
  this_ptr_00[0x4d] = 0x0;
  this_ptr_00[0x4e] = 0x0;
  this_ptr_00[0x4f] = 0x0;
  *(undefined2 *)this_ptr = 0x8c2e;
  this_ptr_00[0x1] = 0x1038;
  return this_ptr_00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Transfer_Dialog_dtor_Internal_893a(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0x8c2e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_TypeB772_dtor_Internal_b0f8((void *)this_ptr);
  return;
}



// Increments or decrements values in a transfer dialog (between slots 0x184D and
// 0x184F) and updates the UI labels. Prevents negative values.

u16 __stdcall16far
UI_Transfer_Dialog_Adjust_Value_8966(void *this_ptr,u16 arg2,u16 arg3,int delta)
{
  bool bVar1;
  astruct_117 *uVar2;
  undefined2 uVar3;
  
  bVar1 = false;
  uVar2 = (astruct_117 *)this_ptr;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  if (delta == 0x0)
  {
    if ((int)uVar2->field151_0x98 < 0x1) goto LAB_1038_89af;
    uVar2->field152_0x9a = uVar2->field152_0x9a + 0x1;
    uVar2->field151_0x98 = uVar2->field151_0x98 - 0x1;
  }
  else
  {
    if (delta != 0x1) goto LAB_1038_89af;
    if ((int)uVar2->field152_0x9a < 0x1) goto LAB_1038_89af;
    uVar2->field152_0x9a = uVar2->field152_0x9a - 0x1;
    uVar2->field151_0x98 = uVar2->field151_0x98 + 0x1;
  }
  bVar1 = true;
LAB_1038_89af:
  if (bVar1)
  {
    SetDlgItemInt(0x0,uVar2->field152_0x9a,0x184d,uVar2->field6_0x6);
    SetDlgItemInt(0x0,uVar2->field151_0x98,0x184f,uVar2->field6_0x6);
  }
  return 0x0;
}



void __stdcall16far UI_Transfer_Dialog_Refresh_VCall_89e8(void *param_1)
{
  UI_Transfer_Dialog_Refresh_Labels_Logic_8b58(param_1);
  return;
}



// Command handler for dialog Type 0x8DDC. Dispatches to refresh logic (0xEB) or summary
// display (based on specific resource ptr).

void * __stdcall16far
UI_SubDialog_Type8DDC_On_Command_89f8
          (void *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  void *pvVar1;
  
  if (param_4._2_2_ == 0xeb)
  {
    UI_Transfer_Dialog_Refresh_Labels_Logic_8b58((void *)CONCAT22(param_2,param_1));
  }
  else
  {
    if (param_4._2_2_ != 0x1841)
    {
      pvVar1 = (void *)UI_SubDialog_Complex_Command_Handler_b54a
                                 (param_1,CONCAT22(param_3,param_2),param_4);
      return pvVar1;
    }
    UI_Show_Colony_Status_Summary_MessageBox_8a3a((void *)CONCAT22(param_2,param_1));
  }
  return (void *)0x1;
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
