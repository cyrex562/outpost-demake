/*
 * Source: outpost.c
 * Chunk: 105/117
 * Original lines: 119850-120978
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the colony main dialog, managing production queues, specialized
// dialogs (Technology/Laboratory), and entity-specific actions.

void __stdcall16far
UI_Colony_Main_Dialog_On_Command_e4bc
          (void *param_1,undefined4 param_2,undefined4 param_3)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  u8 *puVar4;
  uint uVar5;
  uint uVar6;
  u32 *puVar7;
  undefined2 unaff_SI;
  void *pvVar8;
  long lVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined4 local_16;
  
  if (param_3._2_2_ == 0x1c4)
  {
    lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    uVar12 = (undefined2)((ulong)lVar9 >> 0x10);
    puVar4 = (u8 *)*(undefined2 *)((int)lVar9 + 0x24);
    if (*(int *)((int)lVar9 + 0x26) != 0x0 || puVar4 != NULL)
    {
      pvVar8 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,puVar4);
      uVar5 = (uint)((ulong)pvVar8 >> 0x10);
      uVar6 = uVar5 | (uint)pvVar8;
      if (uVar6 != 0x0)
      {
        puVar3 = get_array_element_6bytes
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10));
        puVar7 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                           ((uint)pvVar8,uVar5,puVar3,uVar6);
        local_16 = (undefined4 *)CONCAT22(puVar7,puVar3);
        puVar2 = (undefined2 *)*local_16;
        puVar1 = (undefined2 *)puVar2 + 0x8;
        lVar9 = (*(code *)*puVar1)(0x1008,puVar3,puVar7);
        if (lVar9 == 0x0)
        {
          if (local_16 != NULL)
          {
            puVar1 = (undefined2 *)puVar2;
            (*(code *)*puVar1)(0x1008,puVar3,puVar7,0x1);
          }
        }
        else
        {
          puVar1 = (undefined2 *)((int)*local_16 + 0x4);
          puVar4 = (u8 *)(*(code *)*puVar1)(0x1008,puVar3,puVar7,0x0,0x0);
          Simulator_Get_Entity_Object_from_PackedID_e1ec
                    (_p_SimulatorWorldContext,puVar4);
          pvVar8 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                     (_p_ResourceManager,0x32);
          UI_Determine_and_Dispatch_Entity_Action_Logic
                    ((void *)pvVar8,(int)((ulong)pvVar8 >> 0x10));
          if (local_16 != NULL)
          {
            (*(code *)*(undefined2 *)(undefined2 *)*local_16)(0x1010,puVar3,puVar7,0x1);
          }
        }
      }
    }
  }
  else
  {
    if (param_3._2_2_ == 0x1c5)
    {
      uVar12 = 0xe;
    }
    else
    {
      if (param_3._2_2_ != 0x1c6)
      {
        UI_SubDialog_Base_On_Command_Logic_7b3c
                  (param_1,(ushort)param_2,(ushort)((ulong)param_2 >> 0x10),
                   (ushort)param_3,CONCAT22(unaff_SI,param_3._2_2_));
        return;
      }
      uVar12 = 0xd;
    }
    uVar14 = 0x0;
    uVar13 = 0x0;
    uVar10 = 0x0;
    uVar11 = 0x0;
    lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
    UI_Specialized_Dialog_Factory_Logic
              ((int)lVar9,(int)((ulong)lVar9 >> 0x10),uVar10,uVar11,uVar12,uVar13,uVar14
              );
  }
  return;
}



void * __stdcall16far
UI_SubDialog_TypeE62E_dtor_Scalar_Deleting_e608(void *param_1,byte param_2)
{
  UI_SubDialog_TypeE62E_dtor_Internal_e308(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xE92E (vtable 0xE92E). Links to Resource 0x43. Base
// dialog ID 0xFCB.

void * __stdcall16far
UI_SubDialog_TypeE92E_ctor_init_e69a
          (void *this_ptr,u32 dlg_template_id,u16 arg3,u16 arg4,u16 parent_hwnd)
{
  astruct_88 *uVar1;
  undefined2 uVar2;
  u32 *puVar3;
  
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,dlg_template_id,0xfcb,parent_hwnd);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_88 *)this_ptr;
  (&uVar1->field141_0x8e)[0x0] = NULL;
  (&uVar1->field141_0x8e)[0x1] = NULL;
  uVar1->field143_0x92 = 0x0;
  *(undefined2 *)this_ptr = 0xe92e;
  uVar1->field2_0x2 = 0x1038;
  puVar3 = (u32 *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x43);
  uVar1->field141_0x8e = (u32 *)puVar3;
  uVar1->field142_0x90 = (int)((ulong)puVar3 >> 0x10);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeE92E_dtor_Internal_e6f0(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xe92e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



// Initialization and show logic for sub-dialog Type 0xE92E. Formats a complex resource
// string, centers the window, and enters a modal message loop.

void __stdcall16far UI_SubDialog_TypeE92E_Show_Logic_e71c(void *this_ptr)
{
  char *ptr;
  undefined2 in_DX;
  int x;
  void *this_ptr_00;
  
  this_ptr_00 = (void *)this_ptr;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  x = (int)((ulong)this_ptr >> 0x10);
  ptr = UI_Format_Complex_Resource_String_Logic_maybe();
  strcpy_optimized((char *)CONCAT22(x,(char *)((int)this_ptr_00 + 0x10)),
                   (char *)CONCAT22(in_DX,ptr));
  free_if_not_null(ptr);
  UI_Window_Move_or_Center_826c(this_ptr_00,x,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  *(undefined2 *)((int)this_ptr_00 + 0x92) = 0x1;
  win16_conditional_message_loop((int *)((int)this_ptr_00 + 0x92));
  DestroyWindow16(*(HWND16 *)((int)this_ptr_00 + 0x6));
  return;
}



// Commit handler for dialog Type 0xE92E. Reads three groups of radio buttons
// (0x1827-0x1828, 0x183A-0x183B, 0x183C-0x183D) and synchronizes the results with
// Resource 0x43.

void __stdcall16far
UI_SubDialog_TypeE92E_On_Commit_Logic_e7a0(void *this_ptr,int commit)
{
  uint16_t uVar1;
  astruct_87 *uVar2;
  undefined2 uVar3;
  
  uVar2 = (astruct_87 *)this_ptr;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  if (commit == 0x0)
  {
    *(undefined2 *)((int)uVar2->field141_0x8e + 0x10) = 0x1;
    *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x0;
    *(undefined2 *)((int)uVar2->field141_0x8e + 0xc) = 0x0;
    *(undefined2 *)((int)uVar2->field141_0x8e + 0xe) = 0x0;
  }
  else
  {
    uVar1 = IsDlgButtonChecked16(0x1827,uVar2->field6_0x6);
    if (uVar1 == 0x0)
    {
      uVar1 = IsDlgButtonChecked16(0x1828,uVar2->field6_0x6);
      if (uVar1 == 0x0)
      {
        *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x0;
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
    uVar1 = IsDlgButtonChecked16(0x183a,uVar2->field6_0x6);
    if (uVar1 == 0x0)
    {
      uVar1 = IsDlgButtonChecked16(0x183b,uVar2->field6_0x6);
      if (uVar1 == 0x0)
      {
        *(undefined2 *)((int)uVar2->field141_0x8e + 0xc) = 0x0;
      }
      else
      {
        *(undefined2 *)((int)uVar2->field141_0x8e + 0xc) = 0x2;
      }
    }
    else
    {
      *(undefined2 *)((int)uVar2->field141_0x8e + 0xc) = 0x1;
    }
    uVar1 = IsDlgButtonChecked16(0x183c,uVar2->field6_0x6);
    if (uVar1 == 0x0)
    {
      uVar1 = IsDlgButtonChecked16(0x183d,uVar2->field6_0x6);
      if (uVar1 == 0x0)
      {
        *(undefined2 *)((int)uVar2->field141_0x8e + 0xe) = 0x0;
      }
      else
      {
        *(undefined2 *)((int)uVar2->field141_0x8e + 0xe) = 0x2;
      }
    }
    else
    {
      *(undefined2 *)((int)uVar2->field141_0x8e + 0xe) = 0x1;
    }
    *(undefined2 *)((int)uVar2->field141_0x8e + 0x10) = 0x0;
  }
  uVar2->field142_0x92 = 0x0;
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1038_e904(void)
{
  return;
}



void * __stdcall16far
UI_SubDialog_TypeE92E_dtor_Scalar_Deleting_e908(void *param_1,byte param_2)
{
  UI_SubDialog_TypeE92E_dtor_Internal_e6f0(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xEB32 (vtable 0xEB32). Links to Resource 0x30. Base
// dialog ID 0xFB9.

void * __stdcall16far
UI_SubDialog_TypeEB32_ctor_init_e99a
          (void *this_ptr,u32 dlg_template_id,u16 arg3,u16 arg4,u16 parent_hwnd)
{
  astruct_86 *uVar1;
  undefined2 uVar2;
  u32 *puVar3;
  
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,dlg_template_id,0xfb9,parent_hwnd);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_86 *)this_ptr;
  (&uVar1->field141_0x8e)[0x0] = NULL;
  (&uVar1->field141_0x8e)[0x1] = NULL;
  *(undefined2 *)this_ptr = 0xeb32;
  uVar1->field2_0x2 = 0x1038;
  puVar3 = (u32 *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x30);
  uVar1->field141_0x8e = (u32 *)puVar3;
  uVar1->field142_0x90 = (int)((ulong)puVar3 >> 0x10);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeEB32_dtor_Internal_e9ec(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xeb32;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



// Initialization and show logic for sub-dialog Type 0xEB32. Displays a string from
// Resource 0x30 in control 0xFA5 and positions the window based on system metrics.

void __stdcall16far UI_SubDialog_TypeEB32_Show_Logic_ea18(void *this_ptr)
{
  int16_t iVar1;
  ushort in_DX;
  astruct_85 *uVar2;
  undefined2 unaff_SS;
  int in_stack_00000006;
  undefined2 in_stack_0000ffec;
  undefined1 local_10 [0x2];
  int iStack_e;
  HWND16 HStack_8;
  char *pcStack_6;
  ushort uStack_4;
  
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  pcStack_6 = String_Wrapper_Object_Get_String_Logic
                        ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e));
  uStack_4 = in_DX;
  HStack_8 = GetDlgItem16(0xfa5,*(short *)((int)this_ptr + 0x6));
  SendMessage16((HWND16)pcStack_6,uStack_4,0x0,CONCAT22(in_stack_0000ffec,HStack_8));
  GetWindowRect16((undefined1 *)CONCAT22(unaff_SS,local_10),
                  *(HWND16 *)((int)this_ptr + 0x8));
  iVar1 = GetSystemMetrics16(0x4);
  UI_Window_Move_or_Center_826c(this_ptr,in_stack_00000006,iVar1 + iStack_e + 0x5);
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  return;
}



// Processes a name update in a sub-dialog, updates the associated object's string
// wrapper, posts a completion message, and destroys the window.

void __stdcall16far
UI_SubDialog_TypeEAA2_Handle_Name_Update_and_Close(undefined4 param_1,int param_2)
{
  HWND16 HVar1;
  int iVar2;
  undefined2 uVar3;
  ushort unaff_SS;
  long l_param;
  undefined2 uVar4;
  undefined1 local_54 [0x52];
  
  iVar2 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 != 0x0)
  {
    HVar1 = GetDlgItem16(0xfa5,*(short *)(iVar2 + 0x6));
    l_param = CONCAT22(HVar1,HVar1);
    SendMessage16((HWND16)local_54,unaff_SS,0x50,l_param);
    uVar4 = (undefined2)((ulong)l_param >> 0x10);
    String_Wrapper_Object_Set_String_Logic
              ((void *)(void *)*(undefined4 *)(iVar2 + 0x8e),
               (char *)((ulong)*(undefined4 *)(iVar2 + 0x8e) >> 0x10));
    PostMessage16(0x0,0x0,0xfb,CONCAT22(uVar4,*(undefined2 *)(iVar2 + 0x8)));
  }
  DestroyWindow16(*(HWND16 *)(iVar2 + 0x6));
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1038_eb08(void)
{
  return;
}



void * __stdcall16far
UI_SubDialog_TypeEB32_dtor_Scalar_Deleting_eb0c(void *param_1,byte param_2)
{
  UI_SubDialog_TypeEB32_dtor_Internal_e9ec(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for sub-dialog Type 0xEE6E (vtable 0xEE6E). Base ID 0x1C7.

void * __stdcall16far
UI_SubDialog_TypeEE6E_ctor_init_eb9e(void *this_ptr,ushort parent_hwnd)
{
  undefined2 in_stack_00000008;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,0x1c70000,in_stack_00000008);
  *(undefined4 *)((int)this_ptr + 0x8e) = 0x0;
  *_this_ptr = 0xee6e;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1038;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeEE6E_dtor_Internal_ebd6(void *this_ptr)
{
  astruct_84 *uVar1;
  void *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0xee6e;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes and positions an alternative colony summary dialog with multiple complex
// controls based on system flags.

void __stdcall16far
UI_Colony_Summary_Alternative_Initialize_and_Layout_ec16(void *param_1)
{
  void *pvVar1;
  void *pvVar2;
  undefined *puVar3;
  int iVar4;
  undefined2 unaff_SI;
  undefined2 uVar5;
  undefined2 unaff_SS;
  void *this_ptr;
  int x;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 *local_1a;
  undefined *puStack_18;
  int local_a;
  int local_8;
  long local_6;
  
  this_ptr = (void *)param_1;
  x = (int)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  local_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  puVar3 = (undefined *)((ulong)local_6 >> 0x10);
  local_8 = get_const_3_stub_2();
  if (_g_AllocatedBlock_Offset == NULL)
  {
    local_1a = init_memory_allocator();
  }
  else
  {
    local_1a = (undefined2 *)g_AllocatedBlock_Offset;
    puVar3 = g_AllocatedBlock_Segment;
  }
  puStack_18 = puVar3;
  pvVar2 = alloc_with_hooks((ulong)(uint)((local_8 + 0x2) * 0x4),0x1,local_1a);
  *(undefined2 *)((int)this_ptr + 0x8e) = pvVar2;
  *(undefined2 *)((int)this_ptr + 0x90) = puVar3;
  for (local_a = 0x1; local_a <= local_8; local_a += 0x1)
  {
    local_1a = UI_System_Get_Flag_Entry_Category3_Ptr((int)local_6);
    local_22 = *local_1a;
    local_20 = local_1a[0x1];
    local_1e = 0x1;
    local_1c = 0x1;
    puStack_18 = puVar3;
    MapDialogRect16((undefined2 *)CONCAT22(unaff_SS,&local_22),
                    *(HWND16 *)((int)this_ptr + 0x6));
    pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x42));
    if (puVar3 == NULL && pvVar2 == NULL)
    {
      *(undefined4 *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + local_a * 0x4) = 0x0;
      puVar3 = NULL;
    }
    else
    {
      puVar3 = UI_Complex_Control_ctor
                         (pvVar2,puVar3,0x0,local_20,local_22,0x101,0x100,0xff,
                          local_1a[0x2],*(undefined2 *)((int)this_ptr + 0x6));
      uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10);
      iVar4 = (int)*(undefined4 *)((int)this_ptr + 0x8e);
      *(undefined2 *)(iVar4 + local_a * 0x4) = pvVar2;
      *(undefined2 *)(iVar4 + local_a * 0x4 + 0x2) = puVar3;
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10);
    iVar4 = (int)*(undefined4 *)((int)this_ptr + 0x8e);
    if (*(long *)(iVar4 + local_a * 0x4) != 0x0)
    {
      pvVar1 = (void *)*(undefined4 *)(iVar4 + local_a * 0x4);
      UI_Complex_Control_Enable_Window_9234
                ((void *)pvVar1,(ushort)((ulong)pvVar1 >> 0x10));
    }
  }
  UI_Window_Move_or_Center_826c(this_ptr,x,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the Colony window (vtable 0x6504). On command 0x1C9 ('Go to'), it
// resolves the entity at the current coordinate sub-list, finds its controller, and
// notifies the main view. Standard commands (0x1C8, 0x1CA) are forwarded to the main
// UI.

void __stdcall16far
UI_Colony_Window_On_Command_ed8a(void *param_1,undefined4 param_2,undefined4 param_3)
{
  u8 *packed_id;
  int id;
  void *puVar3;
  void *this_ptr;
  void *puVar4;
  long lVar1;
  undefined *puVar2;
  undefined2 in_stack_0000ffe2;
  
  puVar2 = g_ParentHWND;
  if (param_3._2_2_ != 0x1c8)
  {
    if (param_3._2_2_ == 0x1c9)
    {
      puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x2f);
      puVar3._2_2_ = (undefined2)((ulong)puVar3 >> 0x10);
      packed_id = (u8 *)*(undefined2 *)((int)(void *)puVar3 + 0x20);
      if (*(int *)((int)(void *)puVar3 + 0x22) == 0x0 && packed_id == NULL)
      {
        return;
      }
      this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,packed_id);
      if (this_ptr == NULL)
      {
        return;
      }
      id = UI_Production_Item_Get_ID_Logic_5b00(this_ptr);
      puVar4 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,id);
      if (puVar4 == NULL)
      {
        return;
      }
      lVar1 = UI_Main_View_Controller_Get_FarPtr_at_Offset_80_Logic((long)puVar4);
      if (lVar1 == 0x0)
      {
        return;
      }
      param_3._2_2_ = 0x72;
      puVar2 = (undefined *)*(undefined2 *)((int)lVar1 + 0x8);
    }
    else if (param_3._2_2_ != 0x1ca)
    {
      UI_SubDialog_Base_On_Command_Logic_7b3c
                (param_1,(ushort)param_2,(ushort)((ulong)param_2 >> 0x10),
                 (ushort)param_3,CONCAT22(in_stack_0000ffe2,param_3._2_2_));
      return;
    }
  }
  SendMessage16(0x0,0x0,param_3._2_2_,(long)CONCAT22(in_stack_0000ffe2,puVar2));
  return;
}



void * __stdcall16far
UI_SubDialog_TypeEE6E_dtor_Scalar_Deleting_ee48(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_TypeEE6E_dtor_Internal_ebd6(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x067C (vtable 0x067C). Links to Resource 9. Base
// dialog ID 0x166.

ushort __stdcall16far
UI_SubDialog_Type067C_ctor_init_eeda(void *this_ptr,ushort parent_hwnd)
{
  astruct_82 *uVar1;
  long lVar1;
  undefined2 in_stack_00000008;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,0x1660000,in_stack_00000008);
  *(undefined4 *)((int)this_ptr + 0x8e) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x92) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x94) = 0x0;
  *_this_ptr = 0x67c;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
  *(undefined2 *)((int)this_ptr + 0x8e) = (int)lVar1;
  *(undefined2 *)((int)this_ptr + 0x90) = (int)((ulong)lVar1 >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x74) = 0x1;
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type067C_dtor_Internal_ef3a(void *this_ptr)
{
  astruct_83 *uVar1;
  char *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x67c;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  if (*(long *)((int)this_ptr + 0x96) != 0x0)
  {
    unaff_CS = (char *)s_tile2_bmp_1050_1538;
    DestroyWindow16(*(HWND16 *)((int)*(undefined4 *)((int)this_ptr + 0x96) + 0x6));
    *(undefined4 *)((int)this_ptr + 0x96) = 0x0;
  }
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((char *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes a specialized sub-dialog, creates multiple complex controls with
// MapDialogRect, and spawns another sub-dialog (type 0x17). Plays sound resource
// 0x9E0001.

void __stdcall16far
UI_SubDialog_Type0000_Initialize_and_Spawn_SubDialog_17(void *param_1)
{
  int iVar1;
  void *pvVar2;
  void *in_DX;
  undefined2 uVar3;
  undefined2 unaff_SI;
  int x;
  undefined2 unaff_SS;
  void *pvVar4;
  void *this_ptr;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  int local_1c;
  int16_t local_1a;
  int16_t local_18;
  int local_16;
  long local_12;
  undefined2 local_e;
  int local_c;
  int local_a;
  void *local_8;
  void *local_6;
  int local_4;
  
                // Segment:    9
                // Offset:     0006f820
                // Length:     d974
                // Min Alloc:  d974
                // Flags:      0d50
                //     Code
                //     Moveable
                //     Preload
                //     Impure (Non-shareable)
                // 
  this_ptr = (void *)param_1;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  local_4 = 0x8;
  for (local_a = 0x0; x = (int)((ulong)param_1 >> 0x10), local_a < local_4;
      local_a += 0x1)
  {
    iVar1 = local_a * 0xe;
    local_24 = *(undefined2 *)(iVar1 + 0x5c60);
    local_22 = *(undefined2 *)(iVar1 + 0x5c62);
    local_20 = 0x1;
    local_1e = 0x1;
    MapDialogRect16((undefined2 *)CONCAT22(unaff_SS,&local_24),
                    *(HWND16 *)((int)this_ptr + 0x6));
    pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x42));
    if (in_DX == NULL && pvVar2 == NULL)
    {
      pvVar2 = NULL;
      in_DX = NULL;
    }
    else
    {
      in_DX = UI_Complex_Control_ctor
                        (pvVar2,in_DX,0x1,local_22,local_24,0x104,0x103,0x102,
                         *(undefined2 *)(iVar1 + 0x5c64),
                         *(undefined2 *)((int)this_ptr + 0x6));
    }
    local_8 = pvVar2;
    local_6 = in_DX;
    UI_Dialog_Update_Item_Status_and_Label_0558(this_ptr,x);
  }
  UI_Window_Move_or_Center_826c(this_ptr,x,-0x1);
  local_12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar3 = (undefined2)((ulong)local_12 >> 0x10);
  local_c = *(int *)((int)local_12 + 0xa);
  local_e = *(undefined2 *)((int)local_12 + 0xc);
  GetWindowRect16((int16_t *)CONCAT22(unaff_SS,&local_1a),
                  *(HWND16 *)((int)this_ptr + 0x6));
  local_1c = local_16 - local_1a;
  local_1a = (local_c / 0x2 - local_1c) + -0x3;
  if (local_1a < 0x0)
  {
    local_1a = 0x0;
  }
  SetWindowPos16(0x41,0x0,0x0,local_18,local_1a,0x0,*(HWND16 *)((int)this_ptr + 0x6));
  pvVar4 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                     (_p_UISubDialogTable,*(uint16_t *)((int)this_ptr + 0x6),0x17);
  uVar3 = SUB42(pvVar4,0x0);
  *(undefined2 *)((int)this_ptr + 0x96) = uVar3;
  *(undefined2 *)((int)this_ptr + 0x98) = (int)((ulong)pvVar4 >> 0x10);
  media_play_from_full_resource_ptr_logic((void *)_p_UIPanelContainer,0x9e0001);
  *(undefined2 *)((int)this_ptr + 0x8c) = uVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the specialized sub-dialog type 0000, managing tab-like behavior
// for resource categories and entity selection/activation.

void __stdcall16far
UI_SubDialog_Type0000_On_Command_0170
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  int iVar1;
  HWND16 HVar2;
  char *hwnd;
  short in_DX;
  undefined2 unaff_SI;
  undefined2 unaff_SS;
  void *pvVar3;
  HCURSOR16 *pHVar4;
  ushort msg;
  ushort w_param;
  HCURSOR16 *pHVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  long local_12a [0x43];
  long local_1e;
  u16 local_1a;
  HCURSOR16 local_18;
  HCURSOR16 local_16;
  void *local_14;
  void *local_10;
  int local_e;
  long local_c;
  void *local_8;
  ushort local_6;
  int local_4;
  
  local_4 = 0x8;
  local_6 = 0x0;
  switch(param_4._2_2_)
  {
  case 0x167:
    UI_Dialog_Batch_Disable_Items_060e(param_1,param_2,0x3,0x168,0x169,0x16a);
    HVar2 = GetDlgItem16(0x16b,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,HVar2);
    local_4 = 0x0;
    break;
  case 0x168:
    UI_Dialog_Batch_Disable_Items_060e(param_1,param_2,0x3,0x167,0x169,0x16a);
    HVar2 = GetDlgItem16(0x16b,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,HVar2);
    local_4 = 0x1;
    break;
  case 0x169:
    UI_Dialog_Batch_Disable_Items_060e(param_1,param_2,0x3,0x167,0x168,0x16a);
    HVar2 = GetDlgItem16(0x16b,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,HVar2);
    local_4 = 0x2;
    break;
  case 0x16a:
    UI_Dialog_Batch_Disable_Items_060e(param_1,param_2,0x3,0x167,0x168,0x169);
    HVar2 = GetDlgItem16(0x16b,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,HVar2);
    local_4 = 0x3;
    break;
  case 0x16b:
    HVar2 = GetDlgItem16(0x16b,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x0,HVar2);
    if (*(int *)((int)param_1 + 0x92) != 0x3)
    {
      media_play_from_resource_id_shorthand
                ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
    }
    if (*(int *)((int)param_1 + 0x92) != 0x8)
    {
      local_6 = *(ushort *)(*(int *)((int)param_1 + 0x92) * 0xe + 0x5c6c);
      Resource_Category_Increment_Mapped_Offset_Value_Logic
                ((void *)(void *)*(undefined4 *)((int)param_1 + 0x8e),
                 (int)((ulong)*(undefined4 *)((int)param_1 + 0x8e) >> 0x10));
      *(undefined2 *)((int)param_1 + 0x92) = 0x8;
    }
    for (local_8 = NULL; (int)local_8 < 0x4; local_8 = (void *)((int)local_8 + 0x1))
    {
      UI_Dialog_Update_Item_Status_and_Label_0558(param_1,param_2);
    }
    goto LAB_1040_04da;
  case 0x16c:
    HVar2 = GetDlgItem16(0x16d,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,HVar2);
    local_4 = 0x5;
    *(undefined2 *)((int)param_1 + 0x94) = 0x5;
    goto LAB_1040_04da;
  case 0x16d:
    HVar2 = GetDlgItem16(0x16d,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x0,HVar2);
    media_play_from_resource_id_shorthand
              ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
    if (*(int *)((int)param_1 + 0x94) != 0x8)
    {
      local_6 = *(ushort *)(*(int *)((int)param_1 + 0x94) * 0xe + 0x5c6c);
      Resource_Category_Increment_Mapped_Offset_Value_Logic
                ((void *)(void *)*(undefined4 *)((int)param_1 + 0x8e),
                 (int)((ulong)*(undefined4 *)((int)param_1 + 0x8e) >> 0x10));
      *(undefined2 *)((int)param_1 + 0x94) = 0x8;
    }
    UI_Dialog_Update_Item_Status_and_Label_0558(param_1,param_2);
    local_c = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x39);
    local_10 = (void *)*(int *)((int)local_c + 0x20);
    pHVar5 = &local_16;
    pHVar4 = &local_18;
    local_e = ((int)local_10 >> 0xf) + 0x200;
    uVar7 = unaff_SS;
    local_8 = local_10;
    local_14 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                         ((u16)(void **)_p_SimulatorGlobalState,
                          (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                          (void *)CONCAT22(local_e,local_10));
    Simulator_Get_Site_Bounds_by_Entity_Type_2f1a
              (local_14,(HCURSOR16 *)CONCAT22(unaff_SS,pHVar4),
               (HCURSOR16 *)CONCAT22(uVar7,pHVar5));
    in_DX = (int)(local_18 - local_16) >> 0xf;
    local_16 += (int)(local_18 - local_16) / 0x2;
    local_1a = Simulator_Get_Entity_Resource_Category_ID_2fac(local_14);
    UI_Dialog_Format_and_Set_Slider_Values
              (*(long *)((int)param_1 + 0x96),local_1a,local_16);
    goto LAB_1040_04da;
  case 0x16e:
    local_1e = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x39);
    local_1a = *(u16 *)((int)local_1e + 0x20);
    local_18 = LoadCursor16((void *)0x7f02,0x0);
    local_16 = SetCursor16(local_18);
    pvVar3 = Simulator_Command_Select_ctor_init_532e
                       ((long *)CONCAT22(unaff_SS,local_12a),
                        (void *)((long)(int)local_1a + 0x2000000));
    in_DX = (short)((ulong)pvVar3 >> 0x10);
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(long *)CONCAT22(unaff_SS,local_12a));
    Simulator_Global_Execute_Single_Tick_Logic_838e((void **)_p_SimulatorGlobalState);
    Simulator_Global_Reset_Tick_Counter_8334();
    SetCursor16(local_16);
    PostMessage16(0x0,0x0,0x7e,(long)CONCAT22(unaff_SI,g_ParentHWND));
    DestroyWindow16(*(HWND16 *)((int)param_1 + 0x6));
    local_12a[0x0] = 0x1008389a;
    goto LAB_1040_04da;
  default:
    UI_SubDialog_Base_On_Command_Logic_7b3c
              (param_1,param_2,param_3,(ushort)param_4,CONCAT22(unaff_SI,param_4._2_2_))
    ;
    return;
  }
  *(int *)((int)param_1 + 0x92) = local_4;
LAB_1040_04da:
  if (local_4 != 0x8)
  {
    uVar7 = *(undefined2 *)((int)param_1 + 0x6);
    uVar6 = *(undefined2 *)(local_4 * 0xe + 0x5c68);
    msg = 0x0;
    w_param = 0xc;
    hwnd = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),
                      *(int *)(local_4 * 0xe + 0x5c6a));
    SendDlgItemMessage16((HWND16)hwnd,in_DX,msg,w_param,CONCAT22(uVar7,uVar6));
  }
  if (local_6 != 0x0)
  {
    local_12a[0x0] = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    iVar1 = *(int *)((int)local_12a[0x0] + 0x20);
    local_1e = CONCAT22(local_1e._2_2_,iVar1);
    if (iVar1 != 0x0)
    {
      PostMessage16(0x0,0x0,local_6,(long)CONCAT22(unaff_SI,g_ParentHWND));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates a specific dialog control's enabled state and label. Loads strings 0x531
// ('None') or 0x649 based on dynamic resource availability.

void __stdcall16far
UI_Dialog_Update_Item_Status_and_Label_0558(void *this_ptr,int item_index)
{
  HWND16 enable;
  int iVar1;
  char *hwnd;
  short in_DX;
  astruct_81 *uVar4;
  int in_stack_00000008;
  ushort msg;
  ushort w_param;
  undefined2 uVar2;
  undefined2 uVar3;
  
  enable = GetDlgItem16(*(HWND16 *)(in_stack_00000008 * 0xe + 0x5c64),
                        *(short *)((int)this_ptr + 0x6));
  iVar1 = UI_Component_Get_Dynamic_Offset_Difference_Logic
                    ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e),
                     (int)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10));
  if ((iVar1 == 0x0) && (*(int *)(in_stack_00000008 * 0xe + 0x5c66) != 0xa))
  {
    EnableWindow16(0x0,enable);
    uVar3 = *(undefined2 *)((int)this_ptr + 0x6);
    uVar2 = *(undefined2 *)(in_stack_00000008 * 0xe + 0x5c68);
    iVar1 = 0x531;
  }
  else
  {
    EnableWindow16(0x1,enable);
    uVar3 = *(undefined2 *)((int)this_ptr + 0x6);
    uVar2 = *(undefined2 *)(in_stack_00000008 * 0xe + 0x5c68);
    iVar1 = 0x649;
  }
  w_param = 0xc;
  msg = 0x0;
  hwnd = Resource_Manager_LoadString_to_Internal_Buffer
                   ((int)_p_GlobalResourceManager,
                    (int)((ulong)_p_GlobalResourceManager >> 0x10),iVar1);
  SendDlgItemMessage16((HWND16)hwnd,in_DX,msg,w_param,CONCAT22(uVar3,uVar2));
  return;
}



// Disables a variable number of dialog controls provided in an array.

void __cdecl16far UI_Dialog_Batch_Disable_Items_060e(undefined4 param_1,int param_2)
{
  ulong uVar1;
  HWND16 *pHVar2;
  HWND16 enable;
  undefined2 unaff_SS;
  int iStack_a;
  HWND16 *pHStack_8;
  
  _pHStack_8 = (HWND16 *)CONCAT22(unaff_SS,&stack0x000a);
  iStack_a = param_2;
  while( true )
  {
    pHVar2 = _pHStack_8;
    if (iStack_a == 0x0) break;
    uVar1 = (ulong)_pHStack_8 >> 0x10;
    _pHStack_8 = (HWND16 *)CONCAT22((int)uVar1,pHStack_8 + 0x1);
    enable = GetDlgItem16(*pHVar2,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x0,enable);
    iStack_a = iStack_a + -0x1;
  }
  return;
}



void * __stdcall16far
UI_SubDialog_Type067C_dtor_Scalar_Deleting_0656(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_Type067C_dtor_Internal_ef3a(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x0B90 (vtable 0x0B90). Links to Resource 7. Base
// dialog ID 0xFB8.

ushort __stdcall16far
UI_SubDialog_Type0B90_ctor_init_06e8
          (void *this_ptr,ulong dlg_template_id,ushort arg3,ushort arg4,
          ushort parent_hwnd)
{
  astruct_80 *uVar1;
  void *puVar3;
  undefined2 in_stack_00000006;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,dlg_template_id,0xfbc,parent_hwnd);
  *(undefined4 *)((int)this_ptr + 0x8e) = 0x0;
  *_this_ptr = 0xb90;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x7);
  *(undefined2 *)((int)this_ptr + 0x8e) = (void *)puVar3;
  *(undefined2 *)((int)this_ptr + 0x90) = (int)((ulong)puVar3 >> 0x10);
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type0B90_dtor_Internal_073a(void *this_ptr)
{
  void *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0xb90;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type0B90_Show_Logic_0766(void *this_ptr)
{
  void *pvVar1;
  long lVar2;
  int in_stack_00000006;
  u16 *out2;
  u16 local_e;
  u16 local_c;
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  local_4 = (u16)((ulong)pvVar1 >> 0x10);
  local_6 = (u16)pvVar1;
  UI_Component_Restore_State_from_Offset_7C_Logic((void *)local_6);
  out2 = &local_a;
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  unpack_word_pair((void *)((int)lVar2 + 0xe),(int *)((ulong)lVar2 >> 0x10),(int *)out2)
  ;
  UI_Window_Move_or_Center_826c(this_ptr,in_stack_00000006,local_a + 0x8c);
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  return;
}



void UI_SubDialog_Type0B90_On_Commit_Logic_07b8(void *this_ptr,int commit)
{
  int unaff_BP;
  undefined2 unaff_SS;
  
  UI_Window_Move_or_Center_826c
            ((void *)(void *)*(undefined4 *)(unaff_BP + 0x6),
             (int)((ulong)*(undefined4 *)(unaff_BP + 0x6) >> 0x10),
             *(int *)(unaff_BP + -0x8) + 0x8c);
  ShowWindow16(0x5,*(short *)((int)*(undefined4 *)(unaff_BP + 0x6) + 0x6));
  return;
}
