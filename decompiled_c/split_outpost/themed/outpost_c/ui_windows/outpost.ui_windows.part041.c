/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 41/54
 * Original lines (combined): 119270-120289
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes the outcome of a colony event (building completion or failure). Shows
// outcome-specific dialogs (Type 0x634 with sub-IDs 0x726-0x729), updates the turn
// manager, and notifies the main UI.

void __stdcall16far
UI_Colony_Handle_Event_Outcome_Notification_dcb0(astruct_90 *param_1)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  uint in_DX;
  uint uVar3;
  uint uVar4;
  astruct_90 *uVar5;
  int unaff_SS;
  undefined4 uVar6;
  void *pvVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int qty_delta;
  int arg4;
  undefined2 uVar10;
  undefined2 uVar11;
  int resource_id;
  undefined2 in_stack_0000ffe8;
  undefined1 local_14 [0x4];
  void *pvStack_10;
  uint uStack_e;
  int iStack_c;
  undefined1 local_a [0x4];
  undefined4 uStack_6;
  
  pvStack_10 = allocate_memory(CONCAT22(in_stack_0000ffe8,0xb4));
  uVar3 = in_DX | (uint)pvStack_10;
  uVar5 = (astruct_90 *)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  if (uVar3 == 0x0)
  {
    puVar2 = NULL;
    uVar3 = 0x0;
  }
  else
  {
    puVar2 = (undefined4 *)
             UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                       (pvStack_10,in_DX,uVar5->field6_0x6,0x4,0x3,0x634,0x726,0x727);
  }
  uStack_6 = (undefined4 *)CONCAT22(uVar3,puVar2);
  init_word_pair(local_a,unaff_SS,0x1);
  puVar2 = (undefined4 *)uStack_6;
  puVar1 = (undefined2 *)((int)*uStack_6 + 0x6c);
  uVar6 = (*(code *)*puVar1)(0x1008,puVar2,(int)((ulong)uStack_6 >> 0x10),local_a);
  uVar3 = (uint)((ulong)uVar6 >> 0x10);
  iStack_c = (int)uVar6;
  if (iStack_c == 0x6)
  {
    pvStack_10 = allocate_memory(CONCAT22(puVar2,0xb4));
    uVar4 = uVar3 | (uint)pvStack_10;
    uStack_e = uVar3;
    if (uVar4 == 0x0)
    {
      puVar2 = NULL;
      uVar4 = 0x0;
    }
    else
    {
      puVar2 = (undefined4 *)
               UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                         (pvStack_10,uVar3,uVar5->field6_0x6,0x0,0x2,0x634,0x728);
    }
    uStack_6 = (undefined4 *)CONCAT22(uVar4,puVar2);
    init_word_pair(local_14,unaff_SS,0x1);
    puVar2 = (undefined4 *)uStack_6;
    puVar1 = (undefined2 *)((int)*uStack_6 + 0x6c);
    (*(code *)*puVar1)(0x1008,puVar2,(int)((ulong)uStack_6 >> 0x10),local_14);
    uVar11 = 0x0;
    resource_id = 0x15;
    arg4 = 0x1;
    uVar10 = 0x0;
    uVar9 = 0x0;
    qty_delta = 0x0;
    uVar8 = 0x0;
    pvVar7 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
    Turn_Manager_Add_Resource_Change_Entry_Logic
              ((void *)pvVar7,CONCAT22(uVar9,uVar8),qty_delta,arg4,
               CONCAT22(uVar11,uVar10),resource_id);
    PostMessage16(0x0,0x0,0xfc,(long)CONCAT22(puVar2,g_ParentHWND));
    return;
  }
  pvStack_10 = allocate_memory(CONCAT22(puVar2,0xb4));
  uVar4 = uVar3 | (uint)pvStack_10;
  uStack_e = uVar3;
  if (uVar4 == 0x0)
  {
    puVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar2 = (undefined4 *)
             UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                       (pvStack_10,uVar3,uVar5->field6_0x6,0x0,0x2,0x634,0x729);
  }
  uStack_6 = (undefined4 *)CONCAT22(uVar4,puVar2);
  init_word_pair(&stack0xffe8,unaff_SS,0x1);
  puVar1 = (undefined2 *)((int)*uStack_6 + 0x6c);
  (*(code *)*puVar1)(0x1008,(undefined4 *)uStack_6,(int)((ulong)uStack_6 >> 0x10),
                     &stack0xffe8);
  return;
}



// Maps specific building events (IDs 0x11C+) to their corresponding notification
// dialogs and turn-manager resource entries. Handles 10 distinct event categories.

void __stdcall16far
UI_Colony_Dispatch_Building_Event_Dialog_de20
          (undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint in_DX;
  uint uVar4;
  undefined2 uVar5;
  int unaff_SS;
  undefined4 in_stack_0000ffec;
  undefined4 uStack_a;
  int iStack_6;
  int iStack_4;
  
  iStack_4 = 0x644;
  iStack_6 = 0x0;
  if (true)
  {
    switch(param_4)
    {
    case 0x11c:
      iStack_4 = 0x635;
      iStack_6 = 0x3a;
      break;
    case 0x11d:
      iStack_4 = 0x636;
      iStack_6 = 0x3b;
      break;
    case 0x11e:
      iStack_4 = 0x637;
      iStack_6 = 0x3c;
      break;
    case 0x120:
      iStack_4 = 0x639;
      iStack_6 = 0x3e;
      break;
    case 0x121:
      iStack_4 = 0x63a;
      iStack_6 = 0x3f;
      break;
    case 0x122:
      iStack_4 = 0x63b;
      iStack_6 = 0x40;
      break;
    case 0x123:
      iStack_4 = 0x640;
      iStack_6 = 0x45;
      break;
    case 0x125:
      iStack_4 = 0x642;
      iStack_6 = 0x47;
      break;
    case 0x126:
      iStack_4 = 0x641;
      iStack_6 = 0x46;
      break;
    case 0x127:
      iStack_4 = 0x63f;
      iStack_6 = 0x44;
    }
  }
  if (iStack_4 != 0x0)
  {
    uVar5 = 0x1000;
    pvVar2 = allocate_memory(CONCAT22((int)((ulong)in_stack_0000ffec >> 0x10),0xb4));
    uVar4 = in_DX | (uint)pvVar2;
    if (uVar4 == 0x0)
    {
      puVar3 = NULL;
      uVar4 = 0x0;
    }
    else
    {
      uVar5 = 0x1040;
      puVar3 = (undefined4 *)
               UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                         (pvVar2,in_DX,*(undefined2 *)((int)param_1 + 0x6),0x0,0x6340002
                          ,iStack_4);
    }
    uStack_a = (undefined4 *)CONCAT22(uVar4,puVar3);
    if (iStack_6 == 0x0)
    {
      puVar1 = (undefined2 *)((int)*uStack_a + 0x74);
      (*(code *)*puVar1)(uVar5,puVar3,uVar4);
    }
    else
    {
      init_word_pair(&stack0xffee,unaff_SS,0x1);
      puVar1 = (undefined2 *)((int)*uStack_a + 0x6c);
      (*(code *)*puVar1)(0x1008,puVar3,uVar4,&stack0xffee);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Applies colony-wide settings and performs a primary system context swap. Equivalent
// to 1038:AF40 but with a different flag (0x20).

void * __stdcall16far UI_Colony_Apply_Settings_and_Swap_Context_df5c(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)*(undefined4 *)((int)this_ptr + 0x92);
  UI_System_Context_Swap_Logic((void *)pvVar2,(int)((ulong)pvVar2 >> 0x10));
  pvVar2 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                     (_p_UISubDialogTable,*(uint16_t *)((int)this_ptr + 0x8),0x20);
  return pvVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Orchestrates the confirmation flow for abandoning a colony. Checks runtime
// constraints, shows a confirmation dialog (string 0x7D5), and triggers abandonment via
// a virtual call.

u16 __stdcall16far UI_Colony_Confirm_Abandonment_Logic_df86(void *this_ptr)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  u16 uVar6;
  int iVar7;
  ushort uVar8;
  void *pvVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  long lVar12;
  void *pvVar13;
  undefined2 in_stack_0000ffe6;
  undefined4 uStack_16;
  
  lVar12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  iVar7 = (int)((ulong)lVar12 >> 0x10);
  uVar1 = *(undefined4 *)((int)lVar12 + 0x68);
  uVar10 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar9 = (void *)this_ptr;
  iVar3 = win16_Check_Min_Runtime_Ticks_Logic();
  if (iVar3 != 0x0)
  {
    UI_System_Context_Swap_Logic
              ((void *)(void *)*(undefined4 *)((int)pvVar9 + 0x92),
               (int)((ulong)*(undefined4 *)((int)pvVar9 + 0x92) >> 0x10));
    pvVar13 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                        (_p_UISubDialogTable,*(uint16_t *)((int)pvVar9 + 0x8),0x1e);
    return (u16)(void *)pvVar13;
  }
  pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x7d5);
  uVar11 = 0x1000;
  iVar3 = iVar7;
  puVar5 = allocate_memory(CONCAT22(in_stack_0000ffe6,0xb4));
  if (iVar3 == 0x0 && puVar5 == NULL)
  {
    puVar5 = NULL;
    uVar8 = 0x0;
  }
  else
  {
    uVar11 = 0x1040;
    uVar8 = UI_SubDialog_Type8DDC_ctor_init_8478
                      (puVar5,iVar3,0x20,(int)uVar1,(int)((ulong)uVar1 >> 0x10),pcVar4,
                       iVar7,*(undefined2 *)((int)pvVar9 + 0x6));
  }
  uStack_16 = (undefined4 *)CONCAT22(uVar8,puVar5);
  puVar2 = (undefined2 *)((int)*uStack_16 + 0x74);
  uVar6 = (*(code *)*puVar2)(uVar11,puVar5,uVar8);
  return uVar6;
}



// Batch resets internal state flags for 10 primary colony components and synchronizes
// their underlying simulator entities.

void __stdcall16far UI_Colony_Batch_Reset_Component_Flags_e03e(void *this_ptr)
{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uStack_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar3 = get_const_10_stub();
  for (uStack_6 = 0x1; uStack_6 <= iVar3; uStack_6 += 0x1)
  {
    UI_System_Reset_Flags_and_Get_Entry_Ptr((int)*(undefined4 *)((int)this_ptr + 0x92));
    uVar2 = *(undefined4 *)((int)this_ptr + 0x96);
    uVar6 = (undefined2)((ulong)uVar2 >> 0x10);
    iVar4 = (int)uVar2;
    if (*(long *)(iVar4 + uStack_6 * 0x4) != 0x0)
    {
      pvVar1 = (void *)*(undefined4 *)(iVar4 + uStack_6 * 0x4);
      UI_Complex_Control_Enable_Window_9234
                ((void *)pvVar1,(ushort)((ulong)pvVar1 >> 0x10));
    }
  }
  return;
}



void * __stdcall16far
UI_SubDialog_TypeE0D4_dtor_Scalar_Deleting_e0ae(void *param_1,byte param_2)
{
  UI_SubDialog_TypeE0D4_dtor_Internal_d7d0(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for sub-dialog Type 0xE264 (vtable 0xE264). Base dialog ID 0xFC2.

void * __stdcall16far
UI_SubDialog_TypeE264_ctor_init_e140
          (void *this_ptr,u32 dlg_template_id,u16 arg3,u16 arg4,u16 parent_hwnd)
{
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,dlg_template_id,0xfc2,parent_hwnd);
  *(undefined2 *)this_ptr = 0xe264;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1038;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeE264_dtor_Internal_e16e(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xe264;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



// Show logic for dialog Type 0xE264. Configures a default selection (radio button
// 0x1807) and centers the window. Likely a speed or difficulty selector.

void __stdcall16far UI_SubDialog_TypeE264_Show_Logic_e19a(void *this_ptr)
{
  void *this_ptr_00;
  int x;
  
  this_ptr_00 = (void *)this_ptr;
  x = (int)((ulong)this_ptr >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  CheckRadioButton16(0x1807,0x1807,0x1807,*(HWND16 *)((int)this_ptr_00 + 0x6));
  UI_Window_Move_or_Center_826c(this_ptr_00,x,0xc8);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  return;
}



// Selection handler for dialog Type 0xE264. Maps radio buttons 0x1806/0x1807 to main UI
// messages 0x12F/0x130 and closes the dialog.

void __stdcall16far
UI_SubDialog_TypeE264_On_Select_Logic_e1dc(void *this_ptr,int selected)
{
  uint16_t uVar1;
  void *pvVar2;
  undefined2 unaff_BP;
  undefined2 uVar3;
  ushort w_param;
  undefined *l_param;
  
  pvVar2 = (void *)this_ptr;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  if (selected != 0x0)
  {
    uVar1 = IsDlgButtonChecked16(0x1807,*(HWND16 *)((int)pvVar2 + 0x6));
    if (uVar1 == 0x0)
    {
      uVar1 = IsDlgButtonChecked16(0x1806,*(HWND16 *)((int)pvVar2 + 0x6));
      if (uVar1 == 0x0) goto LAB_1038_e229;
      l_param = (undefined *)CONCAT22(unaff_BP,g_ParentHWND);
      w_param = 0x130;
    }
    else
    {
      l_param = (undefined *)CONCAT22(unaff_BP,g_ParentHWND);
      w_param = 0x12f;
    }
    SendMessage16(0x0,0x0,w_param,(long)l_param);
  }
LAB_1038_e229:
  DestroyWindow16(*(HWND16 *)((int)pvVar2 + 0x6));
  return;
}



void * __stdcall16far
UI_SubDialog_TypeE264_dtor_Scalar_Deleting_e23e(void *param_1,byte param_2)
{
  UI_SubDialog_TypeE264_dtor_Internal_e16e(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for sub-dialog Type 0xE62E (vtable 0xE62E). Base ID 0x1C3.

void * __stdcall16far
UI_SubDialog_TypeE62E_ctor_init_e2d0(void *this_ptr,u16 parent_hwnd)
{
  undefined2 uVar1;
  
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,0x1c30000,parent_hwnd);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined4 *)((int)(void *)this_ptr + 0x8e) = 0x0;
  *(undefined2 *)this_ptr = 0xe62e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeE62E_dtor_Internal_e308(void *this_ptr)
{
  astruct_89 *uVar1;
  undefined2 uVar2;
  void *unaff_CS;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_89 *)this_ptr;
  *(undefined2 *)this_ptr = 0xe62e;
  uVar1->field2_0x2 = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  free_if_not_null((void *)uVar1->field140_0x8e);
  UI_SubDialog_Base_dtor_Internal_782c(uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes and positions the system summary dialog, creating multiple complex
// controls and enabling them.

void __stdcall16far UI_System_Summary_Dialog_Initialize_and_Layout_e348(void *param_1)
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
  local_8 = get_const_3_stub();
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
    local_1a = UI_System_Get_Flag_Entry_Category2_Ptr((int)local_6);
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
