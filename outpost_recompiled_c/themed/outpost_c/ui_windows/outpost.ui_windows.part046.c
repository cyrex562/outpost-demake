/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 46/54
 * Original lines (combined): 124334-125228
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x4466 (vtable 0x4466). Links to Resource 2 and
// Resource 0x29. Base dialog ID 0xFB7.

ushort __stdcall16far
UI_SubDialog_Type4466_ctor_init_4068
          (void *this_ptr,ulong dlg_template_id,ushort arg3,ushort arg4,
          ushort parent_hwnd)
{
  astruct_57 *uVar1;
  void *puVar3;
  long lVar1;
  undefined2 in_stack_00000006;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,dlg_template_id,0xfb7,parent_hwnd);
  *(undefined4 *)((int)this_ptr + 0x8e) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x92) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x9a) = 0x0;
  *_this_ptr = 0x4466;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  *(undefined2 *)((int)this_ptr + 0x76) = 0x1;
  puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  *(undefined2 *)((int)this_ptr + 0x8e) = (int)puVar3;
  *(undefined2 *)((int)this_ptr + 0x90) = (int)((ulong)puVar3 >> 0x10);
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  *(undefined2 *)((int)this_ptr + 0x96) = (int)lVar1;
  *(undefined2 *)((int)this_ptr + 0x98) = (int)((ulong)lVar1 >> 0x10);
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type4466_dtor_Internal_40e2(void *this_ptr)
{
  void *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x4466;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes and positions a sub-dialog, resolving an indexed structure from a
// component. Calculates a complex offset for MoveWindow if the structure is initially
// empty.

void __stdcall16far UI_SubDialog_Type410E_Initialize_and_Layout_410e(void *param_1)
{
  int iVar1;
  int *out1;
  undefined2 unaff_SI;
  int *unaff_SS;
  LRESULT pvVar2;
  long lVar3;
  int *out2;
  void *this_ptr;
  int x;
  int local_36;
  int local_34;
  int local_32;
  undefined1 local_30 [0x6];
  int local_2a;
  undefined4 *local_22;
  int local_20;
  undefined4 local_1e;
  undefined4 local_1a;
  int local_16;
  int local_14;
  int local_12;
  int local_10;
  HWND16 local_e;
  undefined1 local_c [0xa];
  
  this_ptr = (void *)param_1;
  x = (int)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  memset_far(local_c,(int)unaff_SS,0x0);
  sprintf_wrapper();
  local_e = GetDlgItem16(0xfb5,*(short *)((int)this_ptr + 0x6));
  SendMessage16((HWND16)local_c,(ushort)unaff_SS,0x0,CONCAT22(unaff_SI,local_e));
  SetFocus16(local_e);
  pvVar2 = SendMessage16(0x0,0xffff,0x0,CONCAT22(unaff_SI,local_e));
  iVar1 = (int)((ulong)pvVar2 >> 0x10);
  GetWindowRect16((int *)CONCAT22(unaff_SS,&local_16),*(HWND16 *)((int)this_ptr + 0x6));
  memset_far(&local_1e,(int)unaff_SS,0x0);
  local_22 = UI_Component_Get_Indexed_Struct_at_Offset_22_Logic
                       ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e),
                        (int)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10));
  if (iVar1 != 0x0 || local_22 != NULL)
  {
    local_1e = *local_22;
    local_1a = local_22[0x1];
  }
  local_20 = iVar1;
  if ((local_1e._2_2_ == 0x0) && ((int)local_1e == 0x0))
  {
    zero_init_struct_6bytes(local_30);
    win16_Copy_Struct_6Bytes_Wrapper_4216(*(long *)((int)this_ptr + 0x96));
    unpack_word_pair(local_30,unaff_SS,&local_32);
    out2 = &local_36;
    lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
    out1 = (int *)((ulong)lVar3 >> 0x10);
    unpack_word_pair((void *)((int)lVar3 + 0xe),out1,out2);
    local_1a = CONCAT22(local_10 - local_14,local_12 - local_16);
    local_1e = CONCAT22(((*(int *)((int)lVar3 + 0xc) * -0x14) / 0x258 -
                        (local_10 - local_14)) + local_36 + local_32,local_34 + local_2a
                       );
  }
  UI_Window_Move_or_Center_826c(this_ptr,x,local_1e._2_2_);
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  return;
}



// Command handler for sub-dialog type 410E. Manages numeric text input (likely a
// resource quantity), validates it, updates the component property, and posts a message
// to the parent window.

LRESULT __stdcall16far
UI_SubDialog_Type410E_On_Command_42b2(undefined4 param_1,int param_2)
{
  undefined4 uVar1;
  HWND16 HVar2;
  int iVar3;
  void *pvVar4;
  undefined2 in_DX;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  ushort unaff_SS;
  LRESULT pvVar9;
  undefined2 in_stack_0000ff9a;
  char local_54 [0x52];
  
  iVar7 = (int)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == 0x0)
  {
    *(undefined2 *)(iVar7 + 0x9a) = 0x1;
    pvVar4 = (void *)DestroyWindow16(*(HWND16 *)(iVar7 + 0x6));
    return (LRESULT)CONCAT22(in_DX,pvVar4);
  }
  memset_far(local_54,unaff_SS,0x0);
  HVar2 = GetDlgItem16(0xfb5,*(short *)(iVar7 + 0x6));
  pvVar9 = SendMessage16((HWND16)local_54,unaff_SS,0x51,
                         CONCAT22(in_stack_0000ff9a,HVar2));
  iVar5 = (int)((ulong)pvVar9 >> 0x10);
  iVar3 = atoi_wrapper_far(local_54);
  iVar6 = 0x0;
  if (iVar5 != 0x0 || iVar3 != 0x0)
  {
    *(int *)(iVar7 + 0x92) = iVar3;
    *(int *)(iVar7 + 0x94) = iVar5;
    iVar6 = iVar5;
  }
  if (iVar5 < 0x0)
  {
    _wsprintf16((char *)CONCAT22(unaff_SS,local_54),s__ld_1050_5d3c,
                (void *)*(undefined4 *)((int)*(undefined4 *)(iVar7 + 0x8e) + 0x76));
    SendMessage16((HWND16)local_54,unaff_SS,0x0,CONCAT22(in_stack_0000ff9a,HVar2));
    SetFocus16(HVar2);
    pvVar9 = SendMessage16(0x0,0xffff,0x0,CONCAT22(in_stack_0000ff9a,HVar2));
    return pvVar9;
  }
  HVar2 = GetDlgItem16(0x1,*(short *)(iVar7 + 0x6));
  EnableWindow16(0x0,HVar2);
  uVar1 = *(undefined4 *)(iVar7 + 0x92);
  *(undefined4 *)((int)*(undefined4 *)(iVar7 + 0x8e) + 0x76) = uVar1;
  PostMessage16((HWND16)*(undefined4 *)(iVar7 + 0x92),
                (ushort)((ulong)*(undefined4 *)(iVar7 + 0x92) >> 0x10),0x0,
                (long)CONCAT22((int)uVar1,g_ParentHWND));
  HVar2 = GetDlgItem16(0x1,*(short *)(iVar7 + 0x6));
  pvVar4 = (void *)EnableWindow16(0x1,HVar2);
  return (LRESULT)CONCAT22(iVar6,pvVar4);
}



// Cleanup routine for sub-dialog type 410E. Updates component structures and state
// flags before the window is destroyed.

void __stdcall16far UI_SubDialog_Type410E_Cleanup_and_Destroy_43ea(undefined4 param_1)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  GetWindowRect16((int *)CONCAT22(unaff_SS,&local_a),*(HWND16 *)(iVar1 + 0x6));
  local_6 -= local_a;
  local_4 -= local_8;
  UI_Component_Set_Indexed_Struct_at_Offset_22_Logic
            ((void *)(void *)*(undefined4 *)(iVar1 + 0x8e),
             (long *)((ulong)*(undefined4 *)(iVar1 + 0x8e) >> 0x10),0x0);
  *(uint *)((int)*(undefined4 *)(iVar1 + 0x8e) + 0x7a) =
       (uint)(*(int *)(iVar1 + 0x9a) == 0x0);
  return;
}



void * __stdcall16far
UI_SubDialog_Type4466_dtor_Scalar_Deleting_4440(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_Type4466_dtor_Internal_40e2(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for sub-dialog Type 0x4824 (vtable 0x4824). Links to Resource 0xFA2 and
// initializes an internal list of 20 items.

ushort __stdcall16far
UI_SubDialog_Type4824_ctor_init_44d2(void *this_ptr,ulong arg2,ushort parent_hwnd)
{
  u16 uVar1;
  void *pvVar2;
  int in_DX;
  int iVar3;
  astruct_56 *uVar4;
  int iVar4;
  undefined2 unaff_SI;
  u16 uVar8;
  u16 uVar9;
  void *pvVar5;
  undefined2 in_stack_00000006;
  u32 uStack_8;
  
  UI_SubDialog_TypeB772_ctor_Simple_b082(this_ptr,CONCAT22(parent_hwnd,0xfa2));
  *_this_ptr = 0x4824;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x18));
  if (in_DX == 0x0 && pvVar2 == NULL)
  {
    *(undefined4 *)((int)this_ptr + 0x90) = 0x0;
    iVar3 = 0x0;
  }
  else
  {
    pvVar5 = Helper_ZeroFill_24Bytes_a598((void *)CONCAT22(in_DX,pvVar2));
    iVar3 = (int)((ulong)pvVar5 >> 0x10);
    *(undefined2 *)((int)this_ptr + 0x90) = (int)pvVar5;
    *(int *)((int)this_ptr + 0x92) = iVar3;
  }
  *(undefined2 *)*(undefined4 *)((int)this_ptr + 0x90) = 0x14;
  uVar1 = *(u16 *)*(undefined4 *)((int)this_ptr + 0x90);
  pvVar2 = allocate_memory(CONCAT22(unaff_SI,uVar1 * 0xa + 0x2));
  uStack_8 = CONCAT22(iVar3,pvVar2);
  if (iVar3 == 0x0 && pvVar2 == NULL)
  {
    *(undefined4 *)((int)*(undefined4 *)((int)this_ptr + 0x90) + 0x2) = 0x0;
  }
  else
  {
    *(u16 *)uStack_8 = uVar1;
    call_function_n_times((void *)0xa564,0x1040,uVar1);
    uVar9 = (u16)((ulong)*(undefined4 *)((int)this_ptr + 0x90) >> 0x10);
    iVar4 = (int)*(undefined4 *)((int)this_ptr + 0x90);
    *(int *)(iVar4 + 0x2) = (int)pvVar2 + 0x2;
    *(int *)(iVar4 + 0x4) = iVar3;
  }
  *(ulong *)((int)*(undefined4 *)((int)this_ptr + 0x90) + 0x6) = arg2;
  *(undefined2 *)((int)*(undefined4 *)((int)this_ptr + 0x90) + 0xa) = 0x1;
  *(undefined2 *)((int)*(undefined4 *)((int)this_ptr + 0x90) + 0x12) =
       *(undefined2 *)((int)this_ptr + 0xa);
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for dialog Type 0x4824. On specific segment trigger (0xEB), it loads
// string resources, dispatches a simulator event, and refreshes the UI.

ulong __stdcall16far
UI_SubDialog_Type4824_On_Command_45e8
          (undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  u16 uVar1;
  void *pvVar2;
  undefined2 *puVar3;
  void *pvVar4;
  u16 *puVar5;
  int iVar7;
  uint16_t uVar8;
  astruct_55 *iVar6;
  undefined2 unaff_SI;
  undefined2 uVar9;
  void *pvVar10;
  void *pvVar11;
  ulong uVar12;
  undefined4 uStack_10;
  
  if (param_4._2_2_ == 0xeb)
  {
    pvVar10 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
    iVar7 = (int)((ulong)pvVar10 >> 0x10);
    pvVar2 = (void *)param_1[0x24];
    if (pvVar2 == NULL)
    {
      uVar12 = 0x0;
    }
    else
    {
      pvVar4 = allocate_memory(CONCAT22(unaff_SI,0x18));
      if (iVar7 == 0x0 && pvVar4 == NULL)
      {
        pvVar4 = NULL;
        uVar8 = 0x0;
      }
      else
      {
        pvVar11 = Helper_ZeroFill_24Bytes_a598((void *)CONCAT22(iVar7,pvVar4));
        uVar8 = (uint16_t)((ulong)pvVar11 >> 0x10);
        pvVar4 = (void *)pvVar11;
      }
      *(void **)(param_1 + 0x24) = pvVar4;
      *(uint16_t *)((int)param_1 + 0x92) = uVar8;
      *(undefined2 *)param_1[0x24] = 0x14;
      uVar1 = *(u16 *)param_1[0x24];
      puVar5 = allocate_memory(CONCAT22(unaff_SI,uVar1 * 0xa + 0x2));
      uStack_10 = (u16 *)CONCAT22(uVar8,puVar5);
      if (uVar8 == 0x0 && puVar5 == NULL)
      {
        *(undefined4 *)((int)param_1[0x24] + 0x2) = 0x0;
      }
      else
      {
        *uStack_10 = uVar1;
        call_function_n_times((void *)0xa564,0x1040,uVar1);
        uVar9 = (undefined2)((ulong)param_1[0x24] >> 0x10);
        iVar6 = (astruct_55 *)(astruct_55 *)param_1[0x24];
        iVar6->field2_0x2 = (int *)(puVar5 + 0x1);
        iVar6->field3_0x4 = uVar8;
      }
      *(undefined4 *)((int)param_1[0x24] + 0x6) =
           *(undefined4 *)((int)(void *)pvVar2 + 0x6);
      *(undefined2 *)((int)param_1[0x24] + 0xa) = 0x1;
      *(undefined2 *)((int)param_1[0x24] + 0x12) = *(undefined2 *)((int)param_1 + 0xa);
      uVar9 = 0x1010;
      Simulator_Event_Dispatch_Table_Dispatch_Logic
                ((void *)pvVar10,0x10505d40,param_1[0x24]);
      if (pvVar2 != NULL)
      {
        UI_Managed_Collection_dtor_Internal_a5d0(pvVar2);
        uVar9 = 0x1000;
        free_if_not_null((void *)pvVar2);
      }
      puVar3 = (undefined2 *)((int)*(undefined4 *)CONCAT22(param_2,param_1) + 0x70);
      (*(code *)*puVar3)(uVar9,param_1,param_2);
      uVar12 = 0x1;
    }
    return uVar12;
  }
  uVar12 = UI_SubDialog_Complex_Command_Handler_b54a();
  return uVar12;
}



void __stdcall16far UI_Dialog_Invoke_vcall_74_Logic_4766(void *this_ptr)
{
  undefined2 in_stack_00000006;
  void *puVar1;
  
  puVar1 = (void *)((int)*_this_ptr + 0x74);
  (**(code **)puVar1)();
  return;
}



// Scalar deleting destructor for sub-dialog type B772.

void * __stdcall16far
UI_SubDialog_TypeB772_dtor_Scalar_Deleting_47fe
          (void *param_1,undefined2 param_2,byte param_3)
{
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Refresh logic for dialog Type 0x4E18. Clears and repopulates list box 6000 with
// entity names retrieved from the simulator.

void __stdcall16far UI_SubDialog_Type4E18_Refresh_Logic_4a0a(void *this_ptr)
{
  undefined2 *puVar1;
  HWND16 HVar2;
  ushort msg;
  char *pcVar3;
  astruct_53 *uVar3;
  LRESULT pvVar4;
  int in_stack_00000006;
  ushort w_param;
  HWND16 HVar5;
  HWND16 HVar6;
  void *pvVar7;
  HWND16 HStack_a;
  
  puVar1 = (undefined2 *)((int)*_this_ptr + 0x74);
  pvVar7 = this_ptr;
  (*(code *)*puVar1)();
  HVar2 = GetDlgItem16(0x1770,*(short *)((int)this_ptr + 0x6));
  SendMessage16(0x0,0x0,0x0,CONCAT22(pvVar7,HVar2));
  pvVar4 = SendMessage16(0x0,0x0,0x0,CONCAT22(pvVar7,HVar2));
  msg = (ushort)((ulong)pvVar4 >> 0x10);
  for (HStack_a = 0x0;
      (int)HStack_a < *(int *)((int)*(undefined4 *)((int)this_ptr + 0x90) + 0x10);
      HStack_a += 0x1)
  {
    w_param = 0x0;
    HVar5 = HVar2;
    pcVar3 = UI_Get_Entity_Name_Wrapper_4dcc(this_ptr,in_stack_00000006);
    pvVar4 = SendMessage16((HWND16)pcVar3,msg,w_param,CONCAT22(pvVar7,HVar5));
    msg = (ushort)((ulong)pvVar4 >> 0x10);
  }
  UI_Dialog_Parse_Control_6000_as_Int_4d7e(this_ptr);
  if (HStack_a == 0x0)
  {
    HVar5 = HStack_a;
    HVar6 = HVar2;
    pcVar3 = UI_Get_Entity_Name_by_Type_and_Index_Logic
                       ((int)*(undefined4 *)((int)this_ptr + 0x94),
                        (int)((ulong)*(undefined4 *)((int)this_ptr + 0x94) >> 0x10),0x0,
                        *(undefined2 *)
                         ((int)*(undefined4 *)((int)this_ptr + 0x90) + 0xa));
    SendMessage16(HStack_a,(ushort)pcVar3,HVar5,CONCAT22(pvVar7,HVar6));
  }
  SendMessage16(0x0,0x0,0x1,CONCAT22(pvVar7,HVar2));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for sub-dialog type 4AE4. Manages complex collection refreshes by
// re-allocating buffers, re-populating items, and dispatching events via the simulator
// event table.

ulong __stdcall16far
UI_SubDialog_Type4AE4_On_Command_4ae4
          (undefined4 *param_1,undefined2 param_2,HWND16 param_3,undefined4 param_4)
{
  undefined2 *puVar1;
  void *pvVar2;
  u16 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_SI;
  undefined2 uVar6;
  undefined2 unaff_SS;
  ulong uVar7;
  void *pvVar8;
  int local_24 [0x2];
  int local_20;
  void *local_14;
  undefined4 local_10;
  u16 local_c;
  void *local_a;
  void *local_6;
  
  if (param_4._2_2_ == 0xeb)
  {
    local_6 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
    iVar5 = (int)((ulong)local_6 >> 0x10);
    local_a = (void *)param_1[0x24];
    if (local_a == NULL)
    {
      return 0x0;
    }
    pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x18));
    local_10 = (u16 *)CONCAT22(iVar5,pvVar2);
    if (iVar5 == 0x0 && pvVar2 == NULL)
    {
      uVar6 = 0x0;
      iVar5 = 0x0;
    }
    else
    {
      pvVar8 = Helper_ZeroFill_24Bytes_a598((void *)CONCAT22(iVar5,pvVar2));
      iVar5 = (int)((ulong)pvVar8 >> 0x10);
      uVar6 = SUB42(pvVar8,0x0);
    }
    *(undefined2 *)(param_1 + 0x24) = uVar6;
    *(int *)((int)param_1 + 0x92) = iVar5;
    *(undefined2 *)param_1[0x24] = 0x7;
    local_c = *(u16 *)param_1[0x24];
    puVar3 = allocate_memory(CONCAT22(unaff_SI,local_c * 0xa + 0x2));
    local_10 = (u16 *)CONCAT22(iVar5,puVar3);
    if (iVar5 == 0x0 && puVar3 == NULL)
    {
      *(undefined4 *)((int)param_1[0x24] + 0x2) = 0x0;
    }
    else
    {
      *local_10 = local_c;
      call_function_n_times((void *)0xa564,0x1040,local_c);
      uVar6 = (undefined2)((ulong)param_1[0x24] >> 0x10);
      iVar4 = (int)param_1[0x24];
      *(int *)(iVar4 + 0x2) = (int)(puVar3 + 0x1);
      *(int *)(iVar4 + 0x4) = iVar5;
    }
    uVar6 = (undefined2)((ulong)local_a >> 0x10);
    iVar5 = (int)local_a;
    *(undefined4 *)((int)param_1[0x24] + 0x6) = *(undefined4 *)(iVar5 + 0x6);
    *(undefined2 *)((int)param_1[0x24] + 0xa) = *(undefined2 *)(iVar5 + 0xa);
    *(undefined2 *)((int)param_1[0x24] + 0x12) = *(undefined2 *)(iVar5 + 0x12);
    uVar6 = 0x1010;
    Simulator_Event_Dispatch_Table_Dispatch_Logic
              ((void *)local_6,0x10505d6a,param_1[0x24]);
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
  else
  {
    if (param_4._2_2_ != 0x1770)
    {
      uVar7 = UI_SubDialog_Complex_Command_Handler_b54a(param_1,param_2,param_3,param_4)
      ;
      return uVar7;
    }
    if ((int)param_4 == 0x7)
    {
      GetWindowRect16((int *)CONCAT22(unaff_SS,local_24),param_3);
      local_20 -= local_24[0x0];
      SetWindowPos16(0x2,0x50,local_20,0x0,0x0,0x0,param_3);
    }
    else if (((int)param_4 != 0x9) && ((int)param_4 != 0xa))
    {
      return 0x0;
    }
  }
  return 0x1;
}



// Refreshes sub-dialog labels from metadata, parses an ID from control 6000, and sends
// a message to retrieve the corresponding entity name.

LRESULT __stdcall16far UI_SubDialog_Type4AE4_Refresh_and_Get_Name_4cb2(void *param_1)
{
  HWND16 HVar1;
  char *hwnd;
  ushort in_DX;
  void *this_ptr;
  int entity_id;
  LRESULT pvVar2;
  ushort w_param;
  undefined2 in_stack_0000fffa;
  
  UI_SubDialog_Refresh_Labels_from_Metadata_b45e((u32)param_1);
  entity_id = (int)((ulong)param_1 >> 0x10);
  this_ptr = (void *)param_1;
  HVar1 = GetDlgItem16(0x1770,*(short *)((int)this_ptr + 0x6));
  w_param = 0xffff;
  UI_Dialog_Parse_Control_6000_as_Int_4d7e(this_ptr);
  hwnd = UI_Get_Entity_Name_Wrapper_4dcc(this_ptr,entity_id);
  pvVar2 = SendMessage16((HWND16)hwnd,in_DX,w_param,CONCAT22(in_stack_0000fffa,HVar1));
  return pvVar2;
}



// Processes the final selection in sub-dialog type 4AE4. Retrieves the name from
// control 6000, finds the matching entity index, and updates the property in the
// simulator.

void __stdcall16far UI_SubDialog_Type4AE4_Commit_Selection_4cf4(undefined4 param_1)
{
  HWND16 HVar1;
  int value;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  ushort unaff_SS;
  LRESULT pvVar6;
  undefined2 in_stack_0000ffa8;
  undefined1 local_52 [0x50];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  HVar1 = GetDlgItem16(0x1770,*(short *)(iVar2 + 0x6));
  pvVar6 = SendMessage16(0x0,0x0,0x0,CONCAT22(in_stack_0000ffa8,HVar1));
  if ((ushort)pvVar6 != 0xffff)
  {
    SendMessage16((HWND16)local_52,unaff_SS,(ushort)pvVar6,
                  CONCAT22(in_stack_0000ffa8,HVar1));
  }
  value = UI_Find_Entity_Index_by_Name_and_Type_Logic
                    ((int)*(undefined4 *)(iVar2 + 0x94),
                     (int)((ulong)*(undefined4 *)(iVar2 + 0x94) >> 0x10),local_52,
                     unaff_SS,*(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x90) + 0xa))
  ;
  if (value != -0x1)
  {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x90) >> 0x10);
    iVar3 = (int)*(undefined4 *)(iVar2 + 0x90);
    UI_Update_Entity_Property_and_Notify_Simulator_Logic
              (*(long *)(iVar2 + 0x94),value,*(int *)(iVar3 + 0xa),
               *(long *)(iVar3 + 0x6));
  }
  return;
}



void __stdcall16far UI_Dialog_Parse_Control_6000_as_Int_4d7e(void *this_ptr)
{
  undefined2 uVar1;
  undefined2 in_stack_00000006;
  int iStack_8;
  undefined4 uStack_6;
  
  uStack_6 = (undefined4 *)
             *(undefined4 *)((int)*(undefined4 *)((int)this_ptr + 0x90) + 0x2);
  iStack_8 = 0x0;
  while ((iStack_8 < *(int *)*(undefined4 *)((int)this_ptr + 0x90) &&
         (uVar1 = (undefined2)((ulong)uStack_6 >> 0x10),
         *(int *)((undefined4 *)uStack_6 + 0x1) != 0x1770)))
  {
    iStack_8 += 0x1;
    uStack_6 = (undefined4 *)
               CONCAT22(uVar1,(undefined4 *)((int)(undefined4 *)uStack_6 + 0xa));
  }
  atoi_wrapper_far((char *)(char *)*uStack_6);
  return;
}



// Scalar deleting destructor for sub-dialog type B772.

void * __stdcall16far
UI_SubDialog_TypeB772_dtor_Scalar_Deleting_4df2
          (void *param_1,undefined2 param_2,byte param_3)
{
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for sub-dialog Type 0x55A2 (vtable 0x55A2). Links to Resource 0xFAB and
// stores entity-specific IDs at offsets 0xB0 and 0xB4. Used for production queue or
// unit management.

ushort __stdcall16far
UI_SubDialog_Type55A2_ctor_init_4e94(void *this_ptr,void *entity_ptr,ushort parent_hwnd)
{
  astruct_52 *uVar2;
  u16 uVar4;
  undefined2 in_stack_0000000a;
  
  UI_SubDialog_TypeB772_ctor_Alternative_b0bc(this_ptr,entity_ptr,0x0);
  *(undefined4 *)((int)this_ptr + 0x94) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x98) = 0x0;
  *(undefined4 *)((int)this_ptr + 0xb0) = 0x0;
  *(undefined2 *)((int)this_ptr + 0xb4) = 0x0;
  *(undefined2 *)((int)this_ptr + 0xb6) = 0x0;
  *_this_ptr = 0x55a2;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  if (_parent_hwnd != 0x0)
  {
    *(undefined4 *)((int)this_ptr + 0xb0) = *(undefined4 *)(parent_hwnd + 0x6);
    *(undefined2 *)((int)this_ptr + 0xb4) = *(undefined2 *)(parent_hwnd + 0x14);
  }
  return (ushort)this_ptr;
}



void __stdcall16far UI_SubDialog_Type55A2_dtor_Internal_4f0a(void *this_ptr)
{
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x55a2;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(this_ptr);
  return;
}



// Virtual event handler for dialog Type 0x55A2. Handles WM_COMMAND (0x111) by
// triggering a virtual call at offset 0x7C and manages control notifications (0x2B).

ushort __stdcall16far
UI_SubDialog_Type55A2_On_Event_Logic_4f28
          (void *this_ptr,void *event_data,ushort arg3,ushort arg4,uint msg_id)
{
  ushort uVar1;
  int in_stack_0000000e;
  void *puVar1;
  
  if (in_stack_0000000e == 0x2b)
  {
    if (*(int *)arg3 == 0x4)
    {
      UI_Control_Dispatch_Virtual_Event_9566((void *)arg3);
    }
  }
  else
  {
    if (in_stack_0000000e != 0x111)
    {
      uVar1 = UI_SubDialog_Special_Event_Dispatcher_b316
                        (this_ptr,event_data,arg3,arg4,msg_id);
      return uVar1;
    }
    puVar1 = (void *)((int)*_this_ptr + 0x7c);
    (**(code **)puVar1)();
  }
  return 0x1;
}



void __stdcall16far UI_SubDialog_Invoke_vcall_80_Logic_4f82(void *this_ptr)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  puVar1 = (undefined2 *)((int)*_this_ptr + 0x80);
  (*(code *)*puVar1)();
  return;
}
