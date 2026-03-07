/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 43/54
 * Original lines (combined): 121283-122197
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A CTLCOLOR handler that synchronizes text colors with a palette retrieved via a
// virtual call at offset 0x68. Selects a light gray brush (vtable 0x1050:1538) for
// non-highlighted items.

ulong __stdcall16far
UI_SubDialog_Handle_Custom_CTLCOLOR_v68_Logic_0cc0
          (void *this_ptr,ushort hdc,ushort item_type)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  void *pvVar4;
  uint in_stack_0000000a;
  HGDIOBJ16 HStack_4;
  
  HStack_4 = GetStockObject16(0x4);
  if (_PTR_DAT_1050_0000_1050_5cd0 == 0x0)
  {
    puVar1 = (undefined2 *)((int)*_this_ptr + 0x68);
    pvVar4 = (void *)(*(code *)*puVar1)(0x1538,this_ptr,hdc,
                                        *(undefined2 *)((int)this_ptr + 0x6e));
    uVar3 = (undefined2)((ulong)pvVar4 >> 0x10);
    pvVar2 = Palette_Object_Get_Buffer_Ptr_maybe((void *)pvVar4);
    _PTR_DAT_1050_0000_1050_5cd0 =
         CONCAT22(CONCAT11(0x2,*(undefined1 *)((int)pvVar2 + 0x94)),
                  CONCAT11(*(undefined1 *)((int)pvVar2 + 0x95),
                           *(undefined1 *)((int)pvVar2 + 0x96)));
  }
  if (0x3 < in_stack_0000000a)
  {
    if (in_stack_0000000a == 0x4)
    {
      HStack_4 = GetStockObject16(0x5);
    }
    else if ((in_stack_0000000a == 0x4) || (0x1 < in_stack_0000000a - 0x5))
    {
      return 0x0;
    }
  }
  SetTextColor16((HDC16)_PTR_DAT_1050_0000_1050_5cd0,
                 (COLORREF)((ulong)_PTR_DAT_1050_0000_1050_5cd0 >> 0x10));
  SetBkColor16(0x0,0x100);
  return CONCAT22(0x1050,HStack_4);
}



// Posts a WM_COMMAND (1) notification to the parent window handle stored at offset 8.

void __stdcall16far
UI_SubDialog_Notify_Parent_Logic_0d5e(void *this_ptr,ushort notify_code)
{
  undefined2 unaff_BP;
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0x0)
  {
    PostMessage16(0x0,0x0,0x1,CONCAT22(unaff_BP,*(undefined2 *)((int)this_ptr + 0x8)));
  }
  return;
}



void * __stdcall16far
UI_SubDialog_Type0DB0_dtor_Scalar_Deleting_0d8a(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_Type0DB0_dtor_Internal_0c54(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xA5D0 (vtable 0xA5D0). Links to Resource 0x3A and
// stores entity-specific IDs. Base dialog ID 0x1C0.

ushort __stdcall16far
UI_SubDialog_TypeA5D0_ctor_init_0e1c
          (astruct_78 *param_1,u16 param_2,u32 param_3,undefined2 param_4)
{
  astruct_78 *uVar1;
  ushort uVar2;
  void *puVar3;
  
  UI_SubDialog_Base_ctor_init_7728(param_1,0x1,0x1c00000,param_4);
  uVar2 = (ushort)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_78 *)param_1;
  (&uVar1->field141_0x8e)[0x0] = 0x0;
  (&uVar1->field141_0x8e)[0x1] = 0x0;
  uVar1->field143_0x92 = param_3;
  uVar1->field144_0x96 = 0x0;
  uVar1->field145_0x98 = param_2;
  *(char **)param_1 = (char *)s_overflow_on_node__d_1050_11ca + 0x8;
  uVar1->field2_0x2 = 0x1040;
  puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3a);
  uVar1->field141_0x8e = (uint16_t)puVar3;
  uVar1->field142_0x90 = (uint16_t)((ulong)puVar3 >> 0x10);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for dialog Type 0xA5D0. Systematic cleanup of associated
// sub-objects and unregistration from either the sub-dialog table or the window
// manager.

void __stdcall16far UI_SubDialog_TypeA5D0_dtor_Internal_0e86(void *this_ptr)
{
  void *ptr;
  astruct_77 *uVar4;
  undefined *unaff_CS;
  void *puVar6;
  undefined2 in_stack_00000006;
  
  *_this_ptr = (char *)s_overflow_on_node__d_1050_11ca + 0x8;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  ptr = (void *)(void *)*(undefined4 *)((int)this_ptr + 0x92);
  if (*(int *)((int)this_ptr + 0x94) != 0x0 || ptr != NULL)
  {
    UI_Managed_Collection_dtor_Internal_a5d0
              ((void *)CONCAT22(*(int *)((int)this_ptr + 0x94),ptr));
    unaff_CS = (undefined *)&DAT_1050_1000;
    free_if_not_null(ptr);
  }
  PTR_DAT_1050_0000_1050_5b82 = (undefined *)*(undefined2 *)((int)this_ptr + 0x96);
  if (*(long *)((int)this_ptr + 0x92) == 0x0)
  {
    UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
              ((undefined *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
               (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  }
  else
  {
    puVar6 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
    UI_Window_Manager_Remove_by_HWND_Logic
              ((void *)puVar6,(HWND16)((ulong)puVar6 >> 0x10));
  }
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes a sub-dialog with radio button toggles, positions it relative to the
// current cursor position within the screen boundaries, and sets initial button states
// from object properties.

void __stdcall16far UI_SubDialog_Radio_Toggles_Initialize_and_Layout_0f0c(void *param_1)
{
  HWND16 HVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  void *this_ptr;
  int16_t id;
  undefined2 uVar4;
  undefined1 local_2e [0x2];
  int local_2c;
  int local_26;
  int local_24;
  int local_22;
  int local_20;
  long local_1e;
  int local_1a;
  int local_18;
  int local_16;
  int local_14;
  int local_12;
  int iStack_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  this_ptr = (void *)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  if (*(int *)((int)this_ptr + 0x98) == 0x0)
  {
    GetWindowRect16((int *)CONCAT22(unaff_SS,&local_26),*(HWND16 *)((int)this_ptr + 0x6)
                   );
    HVar1 = GetDlgItem16(0x1830,*(short *)((int)this_ptr + 0x6));
    GetWindowRect16((undefined1 *)CONCAT22(unaff_SS,local_2e),HVar1);
    local_22 -= local_26;
    local_20 = (local_2c - local_24) + -0x2;
    SetWindowPos16(0x6,local_20,local_22,0x0,0x0,0x0,*(HWND16 *)((int)this_ptr + 0x6));
    CheckDlgButton16(0x1,0x1c1,*(HWND16 *)((int)this_ptr + 0x6));
    *(undefined2 *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0xa) = 0x2;
    HVar1 = GetDlgItem16(0x1830,*(short *)((int)this_ptr + 0x6));
    EnableWindow16(0x0,HVar1);
  }
  else
  {
    pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8
                       ((void *)*(undefined4 *)
                                 ((int)*(undefined4 *)((int)this_ptr + 0x92) + 0x6));
    if (*(int *)((int)(void *)pvVar3 + 0x20) == 0x2)
    {
      HVar1 = *(HWND16 *)((int)this_ptr + 0x6);
      id = 0x1c1;
    }
    else
    {
      HVar1 = *(HWND16 *)((int)this_ptr + 0x6);
      id = 0x1c2;
    }
    CheckDlgButton16(0x1,id,HVar1);
  }
  GetCursorPos16((int *)CONCAT22(unaff_SS,&local_6));
  GetWindowRect16((int *)CONCAT22(unaff_SS,&local_e),*(HWND16 *)((int)this_ptr + 0x6));
  local_14 = local_a - local_e;
  iStack_10 = -(local_14 / 0x2 - local_6);
  local_16 = local_8 - local_c;
  local_12 = -(local_16 / 0x2 - local_4);
  local_1e = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar2 = (undefined2)((ulong)local_1e >> 0x10);
  local_18 = *(int *)((int)local_1e + 0xa);
  local_1a = *(int *)((int)local_1e + 0xc);
  if (local_18 < local_14 + iStack_10)
  {
    iStack_10 = local_18 - local_14;
  }
  if (local_1a < local_16 + local_12)
  {
    local_12 = local_1a - local_16;
  }
  SetWindowPos16(0x45,0x0,0x0,local_12,iStack_10,0x0,*(HWND16 *)((int)this_ptr + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the radio toggle sub-dialog, updates the internal selection state
// and handles help/info requests by spawning specialized dialogs.

void __stdcall16far
UI_SubDialog_Radio_Toggles_On_Command_109c
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined2 in_stack_0000fff2;
  
  bVar2 = false;
  if (param_4._2_2_ == 0x1c1)
  {
    *(undefined2 *)((int)param_1 + 0x96) = 0x2;
    bVar2 = true;
  }
  else if (param_4._2_2_ == 0x1c2)
  {
    *(undefined2 *)((int)param_1 + 0x96) = 0x1;
    bVar2 = true;
  }
  else
  {
    if (param_4._2_2_ != 0x1830)
    {
      UI_SubDialog_Base_On_Command_Logic_7b3c
                (param_1,param_2,param_3,(ushort)param_4,
                 CONCAT22(in_stack_0000fff2,param_4._2_2_));
      return;
    }
    lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
    uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)param_1 + 0x92) + 0x6);
    iVar3 = UI_Window_Focus_Manager_Logic
                      (lVar4,0xfb6,(int)uVar1,(int)((ulong)uVar1 >> 0x10));
    if (iVar3 == 0x0)
    {
      uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)param_1 + 0x92) + 0x6);
      UI_Specialized_Dialog_Factory_Logic
                (lVar4,0x0,0x0,0xc,(int)uVar1,(int)((ulong)uVar1 >> 0x10));
    }
  }
  if (bVar2)
  {
    *(undefined2 *)((int)*(undefined4 *)((int)param_1 + 0x8e) + 0xa) =
         *(undefined2 *)((int)param_1 + 0x96);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Commits the selection from the radio toggle sub-dialog by updating the entity's
// property value, notifying the simulator, and destroying the window.

void __stdcall16far
UI_SubDialog_Radio_Toggles_Commit_and_Close_1152(void *param_1,undefined2 param_2)
{
  int value;
  int iVar1;
  undefined2 uVar2;
  long context;
  
  if (*(long *)((int)param_1 + 0x92) != 0x0)
  {
    value = *(int *)((int)*(undefined4 *)((int)param_1 + 0x8e) + 0xa);
    context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
    uVar2 = (undefined2)((ulong)*(undefined4 *)((int)param_1 + 0x92) >> 0x10);
    iVar1 = (int)*(undefined4 *)((int)param_1 + 0x92);
    UI_Update_Entity_Property_and_Notify_Simulator_Logic
              (context,value,*(int *)(iVar1 + 0xa),*(long *)(iVar1 + 0x6));
  }
  UI_SubDialog_Base_Try_Destroy_7b98(param_1);
  PTR_DAT_1050_0000_1050_5b80 = NULL;
  return;
}



void * __stdcall16far
UI_SubDialog_TypeA5D0_dtor_Scalar_Deleting_11ac(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_TypeA5D0_dtor_Internal_0e86(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x17B0 (vtable 0x17B0). Links to Resource 0x46 and
// sets base dialog ID 0xFD1.

ushort __stdcall16far
UI_SubDialog_Type17B0_ctor_init_123e
          (void *this_ptr,void *arg2,ushort arg3,ushort arg4,ushort parent_hwnd)
{
  astruct_76 *uVar1;
  void *puVar3;
  undefined2 in_stack_00000010;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,arg3,arg4,0xfd1,in_stack_00000010);
  *(undefined4 *)((int)this_ptr + 0x8e) = 0x0;
  *_this_ptr = 0x17b0;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x46);
  *(undefined2 *)((int)this_ptr + 0x8e) = (int)puVar3;
  *(undefined2 *)((int)this_ptr + 0x90) = (int)((ulong)puVar3 >> 0x10);
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type17B0_dtor_Internal_1290(void *this_ptr)
{
  void *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x17b0;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes the entity selection sub-dialog, setting up dual list boxes for
// source/destination and formatting the target labels.

void __stdcall16far UI_Entity_Selection_Dialog_Initialize_and_Layout_12bc(void *param_1)
{
  HWND16 HVar1;
  char *hwnd;
  ushort msg;
  ushort unaff_SS;
  LRESULT pvVar2;
  void *this_ptr;
  ushort list_hwnd;
  undefined2 in_stack_0000ff9e;
  undefined1 local_54 [0x52];
  
  this_ptr = (void *)param_1;
  list_hwnd = (ushort)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  sprintf_wrapper(local_54);
  HVar1 = GetDlgItem16(0xfd2,*(short *)((int)this_ptr + 0x6));
  SendMessage16((HWND16)local_54,unaff_SS,0x0,CONCAT22(in_stack_0000ff9e,HVar1));
  SetFocus16(HVar1);
  pvVar2 = SendMessage16(0x0,0xffff,0x0,CONCAT22(in_stack_0000ff9e,HVar1));
  msg = (ushort)((ulong)pvVar2 >> 0x10);
  UI_Window_Move_or_Center_826c(this_ptr,list_hwnd,-0x1);
  hwnd = Resource_Manager_LoadString_to_Internal_Buffer
                   ((int)_p_GlobalResourceManager,
                    (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  HVar1 = GetDlgItem16(0x183f,*(short *)((int)this_ptr + 0x6));
  UI_SubDialog_Populate_Entity_List_Box_1696(this_ptr,list_hwnd);
  SendMessage16((HWND16)hwnd,msg,0xffff,CONCAT22(in_stack_0000ff9e,HVar1));
  HVar1 = GetDlgItem16(0x183e,*(short *)((int)this_ptr + 0x6));
  UI_SubDialog_Populate_Entity_List_Box_1696(this_ptr,list_hwnd);
  SendMessage16((HWND16)hwnd,msg,0xffff,CONCAT22(in_stack_0000ff9e,HVar1));
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Commits the selection from the dual list boxes in the entity selection dialog,
// validates the transfer quantity, dispatches a build event to the simulator, and
// destroys the window.

void __stdcall16far
UI_Entity_Selection_Dialog_Commit_and_Close_13b2(undefined4 param_1,int param_2)
{
  undefined2 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  ushort unaff_SS;
  LRESULT pvVar10;
  void *pvVar11;
  undefined2 in_stack_0000fdce;
  u16 local_22e [0x8c];
  undefined4 local_116;
  u32 local_112;
  void *local_10e;
  byte *local_10c;
  undefined4 local_10a;
  uint local_106;
  undefined4 local_104;
  byte local_100 [0x52];
  void *local_ae;
  HWND16 local_ac;
  byte local_aa [0x52];
  int local_58;
  HWND16 local_56;
  char local_54 [0x52];
  
  iVar7 = (int)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 != 0x0)
  {
    local_56 = GetDlgItem16(0xfd2,*(short *)(iVar7 + 0x6));
    SendMessage16((HWND16)local_54,unaff_SS,0x51,CONCAT22(in_stack_0000fdce,local_56));
    local_58 = atoi_wrapper_far(local_54);
    local_ac = GetDlgItem16(0x183e,*(short *)(iVar7 + 0x6));
    pvVar10 = SendMessage16(0x0,0x0,0x0,CONCAT22(in_stack_0000fdce,local_ac));
    local_ae = (void *)pvVar10;
    if (local_ae != (void *)0xffff)
    {
      SendMessage16((HWND16)local_aa,unaff_SS,(ushort)local_ae,
                    CONCAT22(in_stack_0000fdce,local_ac));
    }
    local_ac = GetDlgItem16(0x183f,*(short *)(iVar7 + 0x6));
    pvVar11 = SendMessage16(0x0,0x0,0x0,CONCAT22(in_stack_0000fdce,local_ac));
    local_ae = (void *)pvVar11;
    if (local_ae != (void *)0xffff)
    {
      pvVar10 = SendMessage16((HWND16)local_100,unaff_SS,(ushort)local_ae,
                              CONCAT22(in_stack_0000fdce,local_ac));
      pvVar11 = (void *)CONCAT22((int)((ulong)pvVar10 >> 0x10),local_ae);
    }
    uVar9 = (undefined2)((ulong)pvVar11 >> 0x10);
    local_ae = (void *)pvVar11;
    pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
    local_104 = (char *)CONCAT22(uVar9,pcVar2);
    pbVar5 = local_aa;
    iVar3 = strcmp_case_sensitive
                      ((byte *)CONCAT22(unaff_SS,pbVar5),
                       (char *)CONCAT22(unaff_SS,local_100));
    if (iVar3 != 0x0)
    {
      iVar3 = strcmp_case_sensitive((byte *)CONCAT22(unaff_SS,local_aa),local_104);
      if (iVar3 != 0x0)
      {
        iVar3 = strcmp_case_sensitive((byte *)CONCAT22(unaff_SS,local_100),local_104);
        if (iVar3 != 0x0)
        {
          UI_Set_Entity_ID_at_Offset_16_by_Name_Logic
                    ((void *)(void *)*(undefined4 *)(iVar7 + 0x8e),
                     (char *)((ulong)*(undefined4 *)(iVar7 + 0x8e) >> 0x10));
          UI_Set_Entity_ID_at_Offset_12_by_Name_Logic
                    ((void *)(void *)*(undefined4 *)(iVar7 + 0x8e),
                     (char *)((ulong)*(undefined4 *)(iVar7 + 0x8e) >> 0x10));
          puVar4 = (undefined4 *)
                   UI_Resource_Quantity_Validator_Logic
                             ((void *)(void *)*(undefined4 *)(iVar7 + 0x8e),
                              (int)((ulong)*(undefined4 *)(iVar7 + 0x8e) >> 0x10));
          local_10a = (undefined4 *)CONCAT22(local_10a._2_2_,puVar4);
          if (puVar4 == NULL)
          {
            local_10e = allocate_memory(CONCAT22(in_stack_0000fdce,0xb4));
            uVar6 = (uint)pbVar5 | (uint)local_10e;
            local_10c = pbVar5;
            if (uVar6 == 0x0)
            {
              puVar4 = NULL;
              uVar6 = 0x0;
            }
            else
            {
              puVar4 = (undefined4 *)UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520();
            }
            puVar1 = (undefined2 *)((int)*(undefined4 *)CONCAT22(uVar6,puVar4) + 0x74);
            (*(code *)*puVar1)(0x1000,puVar4,uVar6);
            return;
          }
          local_112 = *(u32 *)((int)*(undefined4 *)(iVar7 + 0x8e) + 0x12);
          uVar9 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x8e) >> 0x10);
          iVar3 = (int)*(undefined4 *)(iVar7 + 0x8e);
          local_116 = *(undefined4 *)(iVar3 + 0x16);
          local_106 = *(uint *)((int)*(undefined4 *)(iVar7 + 0x8e) + 0xa);
          UI_Build_Item_Type_8FB0_ctor_init_8d9e
                    ((u16 *)CONCAT22(unaff_SS,local_22e),(ulong)local_106,local_112,
                     CONCAT22(*(undefined2 *)(iVar3 + 0x18),(undefined2)local_116));
          Simulator_Global_Process_Build_Event_Type4_835a
                    (_p_SimulatorGlobalState,(u16 *)CONCAT22(unaff_SS,local_22e));
          UI_Build_Item_Type_8FB0_dtor_Internal_8dec(local_22e);
          goto LAB_1040_1619;
        }
      }
    }
    local_10e = allocate_memory(CONCAT22(in_stack_0000fdce,0xb4));
    uVar6 = (uint)pbVar5 | (uint)local_10e;
    local_10c = pbVar5;
    if (uVar6 == 0x0)
    {
      puVar4 = NULL;
      uVar6 = 0x0;
    }
    else
    {
      puVar4 = (undefined4 *)UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520();
    }
    local_10a = (undefined4 *)CONCAT22(uVar6,puVar4);
    puVar1 = (undefined2 *)((int)*local_10a + 0x74);
    (*(code *)*puVar1)(0x1000,puVar4,uVar6);
  }
LAB_1040_1619:
  DestroyWindow16(*(HWND16 *)(iVar7 + 0x6));
  return;
}



// A command handler that specifically manages window positioning events (SetWindowPos)
// for persistent or docked sub-panels.

ulong __stdcall16far
UI_SubDialog_Type162A_On_Command_162a
          (void *param_1,undefined4 param_2,undefined4 param_3)
{
  uint uVar1;
  ushort uVar2;
  undefined2 in_DX;
  undefined2 unaff_SS;
  int in_stack_0000fff6;
  int local_6;
  
  if ((param_3._2_2_ != 0x183f) && (param_3._2_2_ != 0x183e))
  {
    uVar2 = UI_SubDialog_Base_On_Command_Logic_7b3c
                      (param_1,(ushort)param_2,param_2._2_2_,(ushort)param_3,
                       CONCAT22(in_stack_0000fff6,param_3._2_2_));
    return CONCAT22(in_DX,uVar2);
  }
  if ((ushort)param_3 == 0x7)
  {
    GetWindowRect16((undefined1 *)CONCAT22(unaff_SS,&stack0xfff6),param_2._2_2_);
    SetWindowPos16(0x2,0x50,local_6 - in_stack_0000fff6,0x0,0x0,0x0,param_2._2_2_);
  }
  else if (((ushort)param_3 != 0x9) && ((ushort)param_3 != 0xa))
  {
    uVar1 = 0x0;
    goto LAB_1040_164d;
  }
  uVar1 = 0x1;
LAB_1040_164d:
  return (ulong)uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Refreshes a dialog list box with names of available entities. Queries the simulator
// for an ID list, formats their names with categories, and appends them to the control.
// Appends 'None' at the end.

ulong __stdcall16far
UI_SubDialog_Populate_Entity_List_Box_1696(void *this_ptr,ushort list_hwnd)
{
  uint *puVar1;
  char *pcVar2;
  ushort uVar3;
  ushort msg;
  undefined2 unaff_SI;
  LRESULT pvVar4;
  undefined2 in_stack_00000008;
  ushort w_param;
  undefined2 uVar5;
  uint uStack_12;
  uint local_4;
  
  SendMessage16(0x0,0x0,0x0,CONCAT22(unaff_SI,in_stack_00000008));
  pvVar4 = SendMessage16(0x0,0x0,0x0,CONCAT22(unaff_SI,in_stack_00000008));
  uVar3 = (ushort)((ulong)pvVar4 >> 0x10);
  local_4 = 0x0;
  puVar1 = &local_4;
  UI_Populate_Entity_ID_List_at_Offset_C_Logic
            ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e),
             (int *)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10));
  msg = uVar3;
  for (uStack_12 = 0x0; uStack_12 < local_4; uStack_12 += 0x1)
  {
    w_param = 0x0;
    uVar5 = in_stack_00000008;
    pcVar2 = UI_Format_Entity_Name_with_Category_Logic_maybe
                       ((int)*(undefined4 *)((int)this_ptr + 0x8e),
                        (int)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10),
                        *(long *)(puVar1 + uStack_12 * 0x2));
    pvVar4 = SendMessage16((HWND16)pcVar2,msg,w_param,CONCAT22(unaff_SI,uVar5));
    msg = (ushort)((ulong)pvVar4 >> 0x10);
    free_if_not_null(pcVar2);
  }
  uVar3 = 0x0;
  uVar5 = in_stack_00000008;
  pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  SendMessage16((HWND16)pcVar2,msg,uVar3,CONCAT22(unaff_SI,uVar5));
  pvVar4 = SendMessage16(0x0,0x0,0x1,CONCAT22(unaff_SI,in_stack_00000008));
  return CONCAT22((int)((ulong)pvVar4 >> 0x10),0x1);
}



void * __stdcall16far
UI_SubDialog_Type17B0_dtor_Scalar_Deleting_178a(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_Type17B0_dtor_Internal_1290(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x1C48 (vtable 0x1C48). Links to Resource 2 and sets
// base dialog ID 0xFBB.

ushort __stdcall16far
UI_SubDialog_Type1C48_ctor_init_181c
          (void *this_ptr,ulong dlg_template_id,ushort arg3,ushort arg4,
          ushort parent_hwnd)
{
  astruct_75 *uVar1;
  long lVar1;
  undefined2 in_stack_00000006;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,dlg_template_id,0xfbb,parent_hwnd);
  *(undefined4 *)((int)this_ptr + 0x8e) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x92) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x94) = 0x0;
  *_this_ptr = (char *)s_202_flc_1050_1c46 + 0x2;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  *(undefined2 *)((int)this_ptr + 0x8e) = (int)lVar1;
  *(undefined2 *)((int)this_ptr + 0x90) = (int)((ulong)lVar1 >> 0x10);
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type1C48_dtor_Internal_1876(void *this_ptr)
{
  void *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = (char *)s_202_flc_1050_1c46 + 0x2;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes and positions a status summary sub-dialog, formatting descriptive strings
// based on the current game mode version.

void __stdcall16far
UI_SubDialog_Status_Summary_Initialize_and_Layout_18a2(void *param_1)
{
  int x;
  undefined2 unaff_SS;
  void *this_ptr;
  undefined1 local_304 [0x100];
  undefined1 local_204 [0x100];
  undefined1 local_104 [0x100];
  undefined2 local_4;
  
  this_ptr = (void *)param_1;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  UI_SubDialog_TypeA832_Sync_UI_from_Object_1afe(this_ptr);
  x = (int)((ulong)param_1 >> 0x10);
  if (g_ModeVersion_13AE != NULL)
  {
    if ((undefined **)g_ModeVersion_13AE == (undefined **)&p_CurrentHeapContext)
    {
      local_4 = 0x621;
    }
    else if (g_ModeVersion_13AE ==
             (undefined *)((int)(undefined **)&p_CurrentHeapContext + 0x1))
    {
      local_4 = 0x622;
    }
    else if ((u16 *)g_ModeVersion_13AE == (u16 *)&p_LastAllocatedBlock)
    {
      local_4 = 0x623;
    }
    else
    {
      local_4 = 0x620;
    }
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
               CONCAT22(local_4,unaff_SS));
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_204,0x3ff),
               CONCAT22(0x624,unaff_SS));
    _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_304),s__s_s_1050_5cda,
                (undefined1 *)CONCAT22(unaff_SS,local_204));
    SetDlgItemText((undefined1 *)CONCAT22(unaff_SS,local_304),0xfe0,
                   *(HWND16 *)((int)this_ptr + 0x6));
    if (*(int *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x82) == 0x0)
    {
      local_4 = 0x627;
    }
    else
    {
      local_4 = 0x626;
    }
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
               CONCAT22(local_4,unaff_SS));
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_204,0x3ff),
               CONCAT22(0x625,unaff_SS));
    _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_304),s__s_s_1050_5cdf,
                (undefined1 *)CONCAT22(unaff_SS,local_204));
    SetDlgItemText((undefined1 *)CONCAT22(unaff_SS,local_304),0xfdf,
                   *(HWND16 *)((int)this_ptr + 0x6));
  }
  UI_Window_Move_or_Center_826c(this_ptr,x,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  return;
}



// Commit logic for the A832 sub-dialog. Reads checkboxes 0xFDB-0xFDE and updates the
// linked resource manager's status flags (offsets 0x20, 0x72, 0x74). Optionally resets
// an internal data buffer.

void __stdcall16far
UI_SubDialog_TypeA832_On_Commit_Logic_19ea(void *this_ptr,int commit)
{
  uint16_t uVar1;
  astruct_74 *uVar2;
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0x0)
  {
    IsDlgButtonChecked16(0xfdb,*(HWND16 *)((int)this_ptr + 0x6));
    Resource_Manager_Signal_Resource_2E_Logic_maybe
              ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e),
               (int)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10));
    uVar1 = IsDlgButtonChecked16(0xfdc,*(HWND16 *)((int)this_ptr + 0x6));
    *(uint16_t *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x20) = uVar1;
    uVar1 = IsDlgButtonChecked16(0xfdd,*(HWND16 *)((int)this_ptr + 0x6));
    *(uint16_t *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x74) = uVar1;
    uVar1 = IsDlgButtonChecked16(0xfde,*(HWND16 *)((int)this_ptr + 0x6));
    *(uint16_t *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x72) = uVar1;
    if (*(int *)((int)this_ptr + 0x92) != 0x0)
    {
      memset_far((void *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x22),
                 (int)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10),0x0);
    }
    if (*(int *)((int)this_ptr + 0x94) != 0x0)
    {
      UI_Component_Set_Offset_76_to_5_Logic
                ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e));
    }
  }
  DestroyWindow16(*(HWND16 *)((int)this_ptr + 0x6));
  return;
}



// Command handler for sub-dialog type A832, specifically managing the 'Reset to
// Defaults' action by updating state flags and re-initializing the UI.

undefined4 __stdcall16far
UI_SubDialog_TypeA832_On_Command_1ab0
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  ushort uVar1;
  undefined2 in_DX;
  undefined2 uStack_4;
  
  uVar1 = 0x0;
  uStack_4 = 0x0;
  if (param_4._2_2_ == 0x1831)
  {
    *(undefined2 *)((int)param_1 + 0x92) = 0x1;
    *(undefined2 *)((int)param_1 + 0x94) = 0x1;
    UI_SubDialog_TypeA832_Reset_to_Defaults_1b8a(param_1,param_2);
  }
  else
  {
    uVar1 = UI_SubDialog_Base_On_Command_Logic_7b3c
                      (param_1,param_2,param_3,(ushort)param_4,(ulong)param_4._2_2_);
    uStack_4 = in_DX;
  }
  return CONCAT22(uStack_4,uVar1);
}



// Synchronizes the A832 dialog's checkbox states from the linked resource manager's
// internal flags.

void __stdcall16far UI_SubDialog_TypeA832_Sync_UI_from_Object_1afe(void *this_ptr)
{
  uint16_t check;
  uint16_t check_00;
  uint16_t check_01;
  astruct_73 *uVar1;
  undefined2 in_stack_00000006;
  
  check = *(uint16_t *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x20);
  check_00 = *(uint16_t *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x74);
  check_01 = *(uint16_t *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x72);
  CheckDlgButton16(*(uint16_t *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x1e),
                   0xfdb,*(HWND16 *)((int)this_ptr + 0x6));
  CheckDlgButton16(check_00,0xfdd,*(HWND16 *)((int)this_ptr + 0x6));
  CheckDlgButton16(check_01,0xfde,*(HWND16 *)((int)this_ptr + 0x6));
  CheckDlgButton16(check,0xfdc,*(HWND16 *)((int)this_ptr + 0x6));
  return;
}
