/*
 * Source: outpost.c
 * Chunk: 99/117
 * Original lines: 113039-114226
 * Boundaries: top-level declarations/definitions only
 */




// Constructor for the global Turn Manager. Initializes two internal linked
// lists/trackers and sets the primary 1050:5A64 pointer.

u32 * __stdcall16far Simulator_Turn_Manager_ctor_init_78e2(u32 *this_ptr)
{
  astruct_491 *paVar1;
  void *pvVar2;
  uint in_DX;
  uint uVar3;
  uint uVar4;
  undefined *in_stack_00000006;
  undefined4 in_stack_0000fff8;
  long size;
  undefined2 uVar5;
  
  *_this_ptr = 0x0;
  this_ptr[0x1] = 0x0;
  p_SimulatorTurnManager = (undefined *)this_ptr;
  PTR_DAT_1050_0000_1050_5a66 = in_stack_00000006;
  size = CONCAT22((int)((ulong)in_stack_0000fff8 >> 0x10),0xc);
  paVar1 = allocate_memory(size);
  uVar5 = (undefined2)((ulong)size >> 0x10);
  uVar3 = in_DX | (uint)paVar1;
  if (uVar3 == 0x0)
  {
    *_this_ptr = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(paVar1,in_DX);
    *(void **)_this_ptr = pvVar2;
    *(uint *)((int)this_ptr + 0x2) = uVar3;
  }
  paVar1 = allocate_memory(CONCAT22(uVar5,0xc));
  uVar4 = uVar3 | (uint)paVar1;
  if (uVar4 == 0x0)
  {
    pvVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(paVar1,uVar3);
  }
  *(void **)(this_ptr + 0x1) = pvVar2;
  *(uint *)((int)this_ptr + 0x6) = uVar4;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for the Turn Manager. Cleans up its internal lists and clears the
// global 1050:5A64 pointer.

void __stdcall16far Simulator_Turn_Manager_dtor_Internal_7964(void *this_ptr)
{
  undefined2 *puVar1;
  astruct_124 *uVar2;
  undefined2 uVar3;
  
  _p_SimulatorTurnManager = 0x0;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_124 *)this_ptr;
  if (uVar2->field2_0x2 != 0x0 || *(undefined4 **)this_ptr != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)**(undefined4 **)this_ptr;
    (*(code *)*puVar1)();
  }
  if (uVar2->field4_0x6 != 0x0 || uVar2->field3_0x4 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field3_0x4;
    (*(code *)*puVar1)();
  }
  return;
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



// Searches the Turn Manager's internal list for an entry matching the target ID and
// triggers its virtual removal callback (offset 0xC).

void __stdcall16far
Simulator_Turn_Manager_Remove_Item_by_ID_79f2(void *this_ptr,void *item_id)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  astruct_123 *uVar4;
  undefined2 uVar5;
  long lVar6;
  undefined1 local_e [0x8];
  long lStack_6;
  
  lStack_6 = *(long *)((int)item_id + 0x4);
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_123 *)this_ptr;
  init_long_pair(local_e,(long)uVar4->field4_0x4);
  do
  {
    lVar6 = get_next_list_item(local_e);
    iVar3 = (int)((ulong)lVar6 >> 0x10);
    iVar2 = (int)lVar6;
    if (iVar3 == 0x0 && iVar2 == 0x0)
    {
      return;
    }
  } while (*(long *)(iVar2 + 0x4) != lStack_6);
  puVar1 = (undefined2 *)((int)*uVar4->field4_0x4 + 0xc);
  (*(code *)*puVar1)(0x1008,uVar4->field4_0x4,iVar2,iVar3);
  return;
}



// Triggers the per-turn update logic (virtual call at offset 4) for the global Turn
// Manager.

void __stdcall16far Simulator_Turn_Manager_Process_Tick_vcall_4_7a5a(u32 *this_ptr)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*_this_ptr + 0x4);
  (*(code *)*puVar1)();
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



// Serializes the entire Turn Manager state to a save file, including the counts and
// data for both of its managed linked lists.

u16 __stdcall16far
Simulator_Turn_Manager_Save_to_File_Logic_7b20(void *this_ptr,void *file_ctx)
{
  undefined4 uVar1;
  int iVar2;
  u16 uVar3;
  undefined2 uVar4;
  void *unaff_SS;
  long lVar5;
  void *this_ptr_00;
  undefined2 local_1c;
  undefined4 uStack_1a;
  undefined4 uStack_10;
  undefined1 local_c [0x8];
  undefined2 local_4;
  
  iVar2 = file_context_write_footer_marker_logic((void *)file_ctx);
  if (iVar2 != 0x0)
  {
    local_1c = *(undefined2 *)((int)*(undefined4 *)this_ptr + 0x8);
    local_4 = local_1c;
    iVar2 = file_write_check((long)file_ctx,&local_1c,unaff_SS);
    if (iVar2 != 0x0)
    {
      init_long_pair(local_c,*(long *)this_ptr);
      do
      {
        lVar5 = get_next_list_item(local_c);
        uStack_10 = lVar5;
        if (lVar5 == 0x0)
        {
          uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
          uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x4);
          local_1c = *(undefined2 *)((int)uVar1 + 0x8);
          local_4 = local_1c;
          iVar2 = file_write_check((long)file_ctx,&local_4,unaff_SS);
          if (iVar2 == 0x0)
          {
            return 0x0;
          }
          init_long_pair(local_c,*(long *)((int)(void *)this_ptr + 0x4));
          do
          {
            this_ptr_00 = (void *)get_next_list_item(local_c);
            if (this_ptr_00 == NULL)
            {
              return 0x1;
            }
            uStack_1a = this_ptr_00;
            uVar3 = Simulator_Complex_List_Save_to_File_Logic_b768(this_ptr_00,file_ctx)
            ;
          } while (uVar3 != 0x0);
          return 0x0;
        }
        uVar3 = Simulator_Resource_List_Save_to_File_Logic_75ca(lVar5,file_ctx);
      } while (uVar3 != 0x0);
    }
  }
  return 0x0;
}



// Deserialization routine for a complex collection of objects. Reads a footer marker,
// then iteratively instantiates and loads 'Resource Change Items' and 'B932' UI
// components from a save file.

void * __stdcall16far
Simulator_Complex_Collection_Load_from_File_7c02(undefined4 *param_1,void *param_2)
{
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  u16 uVar5;
  void *in_DX;
  void *extraout_DX;
  void *extraout_DX_00;
  void *unaff_SS;
  void *this_ptr;
  void *pvVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int local_12 [0x2];
  void *pvStack_e;
  int local_4;
  
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
LAB_1038_7c0d:
    return (void *)CONCAT22(0x1,in_DX);
  }
  iVar2 = file_context_find_footer_marker_logic();
  if ((iVar2 != 0x0) &&
     (iVar2 = file_read_check((long)param_2,&local_4,unaff_SS), iVar2 != 0x0))
  {
    while( true )
    {
      pvVar6 = (void *)param_2;
      uVar7 = (undefined2)((ulong)param_2 >> 0x10);
      if (local_4 == 0x0) break;
      local_4 = local_4 + -0x1;
      pvVar3 = allocate_memory(CONCAT22(pvVar6,0x2a));
      if (in_DX == NULL && pvVar3 == NULL)
      {
        pvStack_e = NULL;
      }
      else
      {
        pvStack_e = Simulator_Resource_Change_Item_ctor_init_6520
                              ((void *)CONCAT22(in_DX,pvVar3));
      }
      in_DX = (void *)((ulong)pvStack_e >> 0x10);
      uVar5 = Simulator_Resource_List_Load_from_File_Logic_774e
                        (pvStack_e,(void *)CONCAT22(uVar7,pvVar6));
      if (uVar5 == 0x0) goto LAB_1038_7c23;
      puVar1 = (undefined2 *)((int)*(undefined4 *)*param_1 + 0x4);
      (*(code *)*puVar1)();
      in_DX = extraout_DX;
    }
    local_4 = local_4 + -0x1;
    iVar2 = file_read_check((long)param_2,local_12,unaff_SS);
    if (iVar2 != 0x0)
    {
      while (local_12[0x0] != 0x0)
      {
        pvVar3 = pvVar6;
        uVar8 = uVar7;
        local_12[0x0] = local_12[0x0] + -0x1;
        pvVar4 = allocate_memory(CONCAT22(pvVar6,0x14));
        if (in_DX == NULL && pvVar4 == NULL)
        {
          this_ptr = NULL;
        }
        else
        {
          this_ptr = UI_Component_Type_B932_ctor_ae6c((void *)CONCAT22(in_DX,pvVar4));
        }
        in_DX = (void *)((ulong)this_ptr >> 0x10);
        uVar5 = Simulator_Complex_List_Load_from_File_Logic_b836
                          (this_ptr,(void *)CONCAT22(uVar8,pvVar3));
        if (uVar5 == 0x0) goto LAB_1038_7c23;
        puVar1 = (undefined2 *)((int)*(undefined4 *)((undefined4 *)param_1)[0x1] + 0x4);
        (*(code *)*puVar1)();
        in_DX = extraout_DX_00;
      }
      goto LAB_1038_7c0d;
    }
  }
LAB_1038_7c23:
  return (void *)ZEXT24(in_DX);
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



u16 __stdcall16far const_0_stub_1038_8842(void)
{
  return 0x0;
}



void __stdcall16far void_noop_stub_1038_8848(void)
{
  return;
}



void __stdcall16far void_noop_stub_1038_884c(void)
{
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
