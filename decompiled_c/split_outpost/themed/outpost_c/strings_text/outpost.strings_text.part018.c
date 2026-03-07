/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 18/19
 * Original lines (combined): 105376-129670
 * Boundaries: top-level declarations/definitions only
 */




u16 * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_0b6a(void *this_ptr,byte flags)
{
  u16 *ptr;
  
  ptr = (u16 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return ptr;
}



void * __stdcall16far Simulator_Object_Constructor_Type_SCRoboMove(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x3a97);
  *(char **)param_1 = (char *)s_fem110_wav_1050_29fa + 0x4;
  *(undefined2 *)((int)(void *)param_1 + 0x2) = 0x1038;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)(void *)param_1 + 0x8)),
                   s_SCRoboMove_1050_59f8);
  return param_1;
}



void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_29d2(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Frees the existing pointer at 0x1FA, duplicates the provided string, and stores the
// new pointer.

void __stdcall16far UI_Component_Set_String_at_1FA(astruct_154 *param_1,char *param_2)
{
  char *pcVar1;
  undefined2 in_DX;
  astruct_154 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (astruct_154 *)param_1;
  free_if_not_null((void *)uVar2->field506_0x1fa);
  pcVar1 = strdup_allocate(param_2);
  *(char **)&uVar2->field506_0x1fa = pcVar1;
  *(undefined2 *)((int)&uVar2->field506_0x1fa + 0x2) = in_DX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Commits the selected filename to the global string resource (0x30) and triggers a
// system context swap.

void * __stdcall16far UI_File_Selection_Dialog_Commit_Filename_801a(u32 this_ptr)
{
  char *pcVar1;
  char *str;
  char *pcVar2;
  undefined2 uVar3;
  void *pvVar4;
  char *pcVar5;
  
  pvVar4 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x30);
  str = (char *)((ulong)pvVar4 >> 0x10);
  uVar3 = (undefined2)(this_ptr >> 0x10);
  pcVar2 = str;
  pcVar1 = UI_Element_Get_SubComponent_Filename_Logic
                     ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x94));
  pcVar5 = (char *)CONCAT22((uint)pcVar2 | (uint)pcVar1,pcVar1);
  if (((uint)pcVar2 | (uint)pcVar1) != 0x0)
  {
    String_Wrapper_Object_Set_String_Logic((void *)pvVar4,str);
    pcVar5 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                       (_p_UISubDialogTable,*(uint16_t *)((int)this_ptr + 0x6),0x3);
  }
  return pcVar5;
}



// Retrieves the string content of the currently selected item in a list box control.

u16 __stdcall16far
UI_Dialog_Get_Selected_List_Box_Text_8164(void *this_ptr,void *out_text,u16 item_id)
{
  undefined2 uVar1;
  LRESULT pvVar2;
  
  *(undefined1 *)out_text = 0x0;
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = SendDlgItemMessage16
                     (0x0,0x0,0x0,0x409,
                      CONCAT22(*(undefined2 *)((int)(void *)this_ptr + 0x6),item_id));
  if ((pvVar2 != (LRESULT)0xffffffff) || (false))
  {
    pvVar2 = SendDlgItemMessage16
                       ((HWND16)(void *)out_text,(short)((ulong)out_text >> 0x10),
                        (ushort)(void *)pvVar2,0x40a,
                        CONCAT22(*(undefined2 *)((int)(void *)this_ptr + 0x6),item_id));
    if ((pvVar2 != (LRESULT)0xffffffff) || (false))
    {
      return 0x1;
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Loads multiple strings (0x80B-0x812) and displays them in two consecutive message
// boxes to provide a detailed summary of planetary resource distribution. Considers
// window handle at offset 6.

void __stdcall16far UI_Show_Resource_Distribution_Summary_Dialog_81be(u32 this_ptr)
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
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_206,0x3ff),
             (long)CONCAT22(0x57b,unaff_SS));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(ptr,0x3ff),
             CONCAT22(0x80b,in_DX));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x80c,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x80d,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x80e,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x80f,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  MessageBox16(0x0,local_206,unaff_SS,(ushort)ptr);
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(ptr,0x3ff),
             CONCAT22(0x810,in_DX));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x811,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x812,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  MessageBox16(0x0,local_206,unaff_SS,(ushort)ptr);
  free_if_not_null(ptr);
  return;
}



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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes a sub-dialog, formats multiple transaction-related strings using
// UI_Trade_Manager, and sets window text. Correctly handles empty transaction states by
// disabling commit buttons.

void __stdcall16far UI_SubDialog_Type3590_Initialize_and_Layout_3590(undefined4 param_1)
{
  HWND16 HVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  char **unaff_SS;
  HWND16 in_stack_0000fa50;
  void *local_59a;
  void *local_596;
  char *local_592;
  int local_590;
  undefined1 local_58e [0x82];
  undefined1 local_50c [0x100];
  void *local_40c;
  long local_408;
  undefined1 local_404 [0x402];
  
  local_408 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  iVar3 = (int)((ulong)local_408 >> 0x10);
  local_40c = (void *)*(undefined4 *)((int)local_408 + 0x68);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  GetWindowText16(0x80,(char **)CONCAT22(*(undefined2 *)(iVar4 + 0x6),unaff_SS),
                  in_stack_0000fa50);
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_58e),
              (undefined1 *)CONCAT22(unaff_SS,local_50c),local_40c);
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,local_58e),*(HWND16 *)(iVar4 + 0x6));
  local_592 = UI_Trade_Manager_Format_Status_String_Logic(*(long *)(iVar4 + 0x8e));
  local_590 = iVar3;
  UI_Trade_Manager_Get_Transaction_Strings_Logic
            (*(long *)(iVar4 + 0x8e),&local_59a,unaff_SS);
  HVar1 = GetDlgItem16(0x193,*(short *)(iVar4 + 0x6));
  *(HWND16 *)(iVar4 + 0x98) = HVar1;
  EnableWindow16(0x1,HVar1);
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_404,0x3ff),
             (long)CONCAT22(0x44b,unaff_SS));
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_50c),
              (undefined1 *)CONCAT22(unaff_SS,local_404),local_596);
  HVar1 = GetDlgItem16(0x195,*(short *)(iVar4 + 0x6));
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,local_50c),HVar1);
  HVar1 = GetDlgItem16(0x196,*(short *)(iVar4 + 0x6));
  pcVar2 = UI_Trade_Manager_Format_Status_String_Logic(*(long *)(iVar4 + 0x8e));
  SetWindowText16((char *)CONCAT22(iVar3,pcVar2),HVar1);
  HVar1 = GetDlgItem16(0x197,*(short *)(iVar4 + 0x6));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_404,0x3ff),
             (long)CONCAT22(0x443,unaff_SS));
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,local_404),HVar1);
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_404,0x3ff),
             (long)CONCAT22(0x44c,unaff_SS));
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_50c),
              (undefined1 *)CONCAT22(unaff_SS,local_404),local_59a);
  HVar1 = GetDlgItem16(0x198,*(short *)(iVar4 + 0x6));
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,local_50c),HVar1);
  HVar1 = GetDlgItem16(0x199,*(short *)(iVar4 + 0x6));
  pcVar2 = UI_Trade_Manager_Process_Tick_Updates_Logic(*(long *)(iVar4 + 0x8e));
  if (iVar3 == 0x0 && pcVar2 == NULL)
  {
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_404,0x3ff),
               (long)CONCAT22(0x44d,unaff_SS));
    SetWindowText16((undefined1 *)CONCAT22(unaff_SS,local_404),HVar1);
    HVar1 = GetDlgItem16(0x19a,*(short *)(iVar4 + 0x6));
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_404,0x3ff),
               (long)CONCAT22(0x44e,unaff_SS));
    SetWindowText16((undefined1 *)CONCAT22(unaff_SS,local_404),HVar1);
    EnableWindow16(0x0,*(BOOL16 *)(iVar4 + 0x98));
    return;
  }
  SetWindowText16((char *)CONCAT22(iVar3,pcVar2),HVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes an entity name sub-dialog and formats the title string by concatenating
// various resource strings and the current entity name.

void __stdcall16far UI_SubDialog_Entity_Name_Initialize_and_Format_477e(void *param_1)
{
  char *ptr;
  undefined2 uVar1;
  undefined2 uVar2;
  long lVar3;
  char *pcVar4;
  undefined2 uVar5;
  
  UI_SubDialog_Base_AutoPosition_and_Register_b230((void *)param_1);
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  uVar1 = (undefined2)((ulong)lVar3 >> 0x10);
  uVar5 = 0x1050;
  pcVar4 = (char *)0x5d68;
  ptr = res_concatenate_strings_by_id(0x7d3,0x5eb,0x0);
  uVar2 = uVar1;
  strcat_append((char *)CONCAT22(uVar1,ptr),(char *)CONCAT22(uVar5,pcVar4));
  pcVar4 = Resource_Manager_Get_Current_Entity_Name_Logic();
  strcat_append((char *)CONCAT22(uVar1,ptr),(char *)CONCAT22(uVar2,pcVar4));
  strcpy_optimized((char *)CONCAT22((int)((ulong)param_1 >> 0x10),
                                    (char *)((int)(void *)param_1 + 0x10)),
                   (char *)CONCAT22(uVar1,ptr));
  free_if_not_null(ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Loads a sequence of strings (0x7FF-0x802) and displays them in a combined message box
// to provide granular resource details.

void __stdcall16far UI_Show_Resource_Detail_Summary_MessageBox_64ca(void)
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
             CONCAT22(0x7ff,in_DX));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x800,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x801,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x802,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  MessageBox16(0x0,local_206,unaff_SS,(ushort)ptr);
  free_if_not_null(ptr);
  return;
}



// Base constructor for specialized sub-dialogs. Initializes extensive state structure
// (offsets 0x60-0x8C) including system metrics and vtable 0x840C. Copies default window
// class name 'SubDlg'.

ushort __stdcall16far
UI_SubDialog_Base_ctor_init_7728
          (astruct_42 *param_1,u16 param_2,u32 param_3,u16 param_4,u16 param_5)
{
  int16_t iVar1;
  astruct_42 *puVar2;
  int value;
  
  value = (int)((ulong)param_1 >> 0x10);
  puVar2 = (astruct_42 *)param_1;
  *(char **)param_1 = (char *)s_1_1050_389a;
  puVar2->field2_0x2 = 0x1008;
  *(char **)param_1 = (char *)s_18_2_1050_3aa5 + 0x3;
  puVar2->field2_0x2 = 0x1008;
  puVar2->field3_0x4 = 0x0;
  puVar2->field4_0x6 = 0x0;
  puVar2->field5_0x8 = param_5;
  puVar2->field6_0xa = param_4;
  puVar2->field7_0xc = 0x0;
  puVar2->field88_0x60 = 0x0;
  puVar2->field89_0x62 = 0x0;
  puVar2->field90_0x64 = 0x0;
  puVar2->field91_0x66 = 0x0;
  puVar2->field92_0x68 = 0x0;
  puVar2->field93_0x6a = param_3;
  puVar2->field94_0x6e = param_2;
  puVar2->field95_0x70 = 0x0;
  puVar2->field96_0x74 = 0x0;
  puVar2->field97_0x76 = 0x0;
  puVar2->field98_0x78 = 0x0;
  puVar2->field115_0x8a = 0x0;
  puVar2->field116_0x8c = 0x0;
  *(undefined2 *)param_1 = 0x840c;
  puVar2->field2_0x2 = 0x1040;
  strcpy_optimized((char *)CONCAT22(value,&puVar2->field_0x10),(char *)0x10505db0);
  memset_far(&puVar2->field_0x7a,value,0x0);
  memset_far(&puVar2->field_0x82,value,0x0);
  iVar1 = GetSystemMetrics16(0x4);
  puVar2->field89_0x62 = iVar1;
  iVar1 = GetSystemMetrics16(0x5);
  puVar2->field90_0x64 = iVar1;
  iVar1 = GetSystemMetrics16(0x6);
  puVar2->field91_0x66 = iVar1;
  return (ushort)puVar2;
}



// Updates the window's internal title string (offset 0x10) and posts message 0x85 to
// trigger a redraw.

void __stdcall16far UI_Window_Set_Title_and_Refresh_7f56(void *this_ptr,char *title)
{
  undefined2 unaff_BP;
  char *in_stack_00000008;
  
  strcpy_optimized((char *)CONCAT22(title,(char *)((int)this_ptr + 0x10)),
                   in_stack_00000008);
  PostMessage16(0x0,0x0,0x0,CONCAT22(unaff_BP,*(undefined2 *)((int)this_ptr + 0x6)));
  return;
}



// Sets the text and background colors for an HDC and renders a string using DrawText16
// within a pre-defined rectangle. Restores previous colors on completion.

void __stdcall16far
UI_Dialog_Draw_Text_Colored_94fc(void *param_1,HDC16 param_2,HDC16 param_3)
{
  COLORREF hdc;
  COLORREF hdc_00;
  COLORREF hdc_01;
  astruct_27 *struct_a;
  u16 segment;
  
  segment = (u16)((ulong)param_1 >> 0x10);
  struct_a = (astruct_27 *)param_1;
  hdc = SetBkColor16(struct_a->field55_0x3a,0x100);
  hdc_01 = param_3;
  hdc_00 = SetTextColor16(struct_a->field56_0x3c,0x100);
  DrawText16(0x10,(void *)CONCAT22(0xffff,segment),(int16_t)(void *)struct_a->field4_0x4
             ,(void *)CONCAT22(hdc_00,param_2),hdc_01);
  SetBkColor16(hdc,param_3);
  SetTextColor16(hdc_00,hdc_01);
  return;
}



// Uses a temporary screen DC and DT_CALCRECT to determine the bounding box required to
// render the provided text string.

void __stdcall16far UI_Dialog_Calculate_Text_Rect_9650(void *param_1)
{
  void *pvVar1;
  HDC16 unaff_BP;
  void *LPCSTR_str;
  
  pvVar1 = (void *)GetDC16(0x0);
  LPCSTR_str = (void *)CONCAT22(pvVar1,pvVar1);
  pvVar1 = (void *)((ulong)param_1 >> 0x10);
  DrawText16(0x410,(void *)CONCAT22(0xffff,pvVar1),
             (int16_t)*(undefined4 *)((int)(void *)param_1 + 0x4),LPCSTR_str,unaff_BP);
  ReleaseDC16((HDC16)((ulong)LPCSTR_str >> 0x10),0x0);
  return;
}
