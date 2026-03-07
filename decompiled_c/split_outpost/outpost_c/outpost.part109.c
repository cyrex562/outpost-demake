/*
 * Source: outpost.c
 * Chunk: 109/117
 * Original lines: 124551-125698
 * Boundaries: top-level declarations/definitions only
 */




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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x4E18 (vtable 0x4E18). Links to Resource 0xFA1 and
// Resource 3. Populates an active entity ID list from the simulator.

ushort __stdcall16far
UI_SubDialog_Type4E18_ctor_init_48a0
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4)
{
  u16 uVar1;
  void *pvVar2;
  u16 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_SI;
  undefined2 uVar7;
  long lVar8;
  void *pvVar9;
  undefined2 *this_ptr;
  ushort uVar10;
  undefined4 uStack_8;
  astruct_54 *uVar6;
  
  this_ptr = (undefined2 *)param_1;
  uVar10 = (ushort)((ulong)param_1 >> 0x10);
  UI_SubDialog_TypeB772_ctor_Simple_b082(this_ptr,CONCAT22(param_4,0xfa1));
  *(undefined4 *)(this_ptr + 0x4a) = 0x0;
  *param_1 = 0x4e18;
  this_ptr[0x1] = 0x1040;
  lVar8 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  iVar4 = (int)((ulong)lVar8 >> 0x10);
  this_ptr[0x4a] = (int)lVar8;
  this_ptr[0x4b] = iVar4;
  pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x18));
  if (iVar4 == 0x0 && pvVar2 == NULL)
  {
    *(undefined4 *)(this_ptr + 0x48) = 0x0;
    iVar4 = 0x0;
  }
  else
  {
    pvVar9 = Helper_ZeroFill_24Bytes_a598((void *)CONCAT22(iVar4,pvVar2));
    iVar4 = (int)((ulong)pvVar9 >> 0x10);
    this_ptr[0x48] = (int)pvVar9;
    this_ptr[0x49] = iVar4;
  }
  **(undefined2 **)(this_ptr + 0x48) = 0x7;
  uVar1 = **(u16 **)(this_ptr + 0x48);
  puVar3 = allocate_memory(CONCAT22(unaff_SI,uVar1 * 0xa + 0x2));
  uStack_8 = (u16 *)CONCAT22(iVar4,puVar3);
  if (iVar4 == 0x0 && puVar3 == NULL)
  {
    *(undefined4 *)((int)*(undefined4 *)(this_ptr + 0x48) + 0x2) = 0x0;
  }
  else
  {
    *uStack_8 = uVar1;
    call_function_n_times((void *)0xa564,0x1040,uVar1);
    uVar7 = (undefined2)((ulong)*(undefined4 *)(this_ptr + 0x48) >> 0x10);
    iVar5 = (int)*(undefined4 *)(this_ptr + 0x48);
    *(int *)(iVar5 + 0x2) = (int)(puVar3 + 0x1);
    *(int *)(iVar5 + 0x4) = iVar4;
  }
  *(undefined4 *)((int)*(undefined4 *)(this_ptr + 0x48) + 0x6) = param_3;
  *(undefined2 *)((int)*(undefined4 *)(this_ptr + 0x48) + 0xa) = param_2;
  *(undefined2 *)((int)*(undefined4 *)(this_ptr + 0x48) + 0x12) = this_ptr[0x5];
  iVar4 = this_ptr[0x48];
  uVar7 = this_ptr[0x49];
  Simulator_Populate_Active_ID_List_Logic
            (*(undefined4 *)(this_ptr + 0x4a),*(undefined2 *)(iVar4 + 0xa),iVar4 + 0x10,
             uVar7,iVar4 + 0xc,uVar7,(int)param_3,(int)((ulong)param_3 >> 0x10));
  return uVar10;
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



// WARNING: Unable to use type for symbol uVar2

char * __stdcall16far UI_Get_Entity_Name_Wrapper_4dcc(void *this_ptr,int entity_id)
{
  u32 lVar3;
  undefined2 in_stack_00000008;
  void *uVar1;
  undefined4 uVar2;
  
  UI_Get_Entity_Name_by_Type_and_Index_Logic
            (*(undefined4 *)((int)this_ptr + 0x94),in_stack_00000008,
             *(undefined2 *)((int)*(undefined4 *)((int)this_ptr + 0x90) + 0xa));
  return (char *)lVar3;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initialization and show logic for sub-dialog Type 0x55A2. Dynamically instantiates 7
// complex controls (IDs 0x10A-0x10E, 0xBBB, 0xBBC), syncs with simulator entity
// resources, and positions the window using Resource 0x41.

void __stdcall16far UI_SubDialog_Type55A2_Show_Logic_4f96(void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  ushort uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint extraout_DX;
  uint parent_hwnd;
  uint uVar10;
  int iVar11;
  astruct_51 *uVar9;
  long lVar12;
  ulong uVar13;
  undefined2 in_stack_00000006;
  
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  lVar12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x41);
  uVar8 = (undefined2)((ulong)lVar12 >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x98) = (int)lVar12;
  *(undefined2 *)((int)this_ptr + 0x9a) = uVar8;
  uVar7 = *(undefined2 *)((int)this_ptr + 0x98);
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ptr + 0x98) + 0x10);
  (*(code *)*puVar1)(0x1010,uVar7,uVar8);
  parent_hwnd = extraout_DX;
  pvVar2 = allocate_memory(CONCAT22(uVar7,0xa));
  uVar10 = parent_hwnd | (uint)pvVar2;
  if (uVar10 == 0x0)
  {
    *(undefined4 *)((int)this_ptr + 0x94) = 0x0;
  }
  else
  {
    uVar3 = UI_SubItem_TypeC53E_ctor_init_bf3e(pvVar2,parent_hwnd);
    *(ushort *)((int)this_ptr + 0x94) = uVar3;
    *(uint *)((int)this_ptr + 0x96) = uVar10;
  }
  uVar13 = UI_SubItem_Sync_Update_Cycle_Logic_bfde
                     ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x94),
                      (void *)((ulong)*(undefined4 *)((int)this_ptr + 0x94) >> 0x10));
  iVar11 = (int)(uVar13 >> 0x10);
  pvVar4 = allocate_memory(CONCAT22(uVar7,0x42));
  pvVar2 = NULL;
  if (iVar11 != 0x0 || pvVar4 != NULL)
  {
    pvVar2 = UI_Complex_Control_ctor
                       (pvVar4,iVar11,0x1,0xa,0xa,0x0,0x81,0x80,0x10a,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar5 = allocate_memory(CONCAT22(uVar7,0x42));
  pvVar4 = NULL;
  if (pvVar2 != NULL || pvVar5 != NULL)
  {
    pvVar4 = UI_Complex_Control_ctor
                       (pvVar5,pvVar2,0x1,0x28,0xa,0x0,0x85,0x84,0x10b,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar5 = allocate_memory(CONCAT22(uVar7,0x42));
  pvVar2 = NULL;
  if (pvVar4 != NULL || pvVar5 != NULL)
  {
    pvVar2 = UI_Complex_Control_ctor
                       (pvVar5,pvVar4,0x1,0x46,0xa,0x0,0x87,0x86,0x10d,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar5 = allocate_memory(CONCAT22(uVar7,0x42));
  pvVar4 = NULL;
  if (pvVar2 != NULL || pvVar5 != NULL)
  {
    pvVar4 = UI_Complex_Control_ctor
                       (pvVar5,pvVar2,0x1,0x64,0xa,0x0,0x89,0x88,0x10e,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar5 = allocate_memory(CONCAT22(uVar7,0x42));
  pvVar2 = NULL;
  if (pvVar4 != NULL || pvVar5 != NULL)
  {
    pvVar2 = UI_Complex_Control_ctor
                       (pvVar5,pvVar4,0x1,0x82,0xa,0x0,0x83,0x82,0x10c,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar5 = allocate_memory(CONCAT22(uVar7,0x42));
  pvVar4 = NULL;
  if (pvVar2 != NULL || pvVar5 != NULL)
  {
    pvVar4 = UI_Complex_Control_ctor
                       (pvVar5,pvVar2,0x1,0xd2,0xa,0x0,0x8b,0x8a,0xbbb,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar2 = allocate_memory(0x42);
  if (pvVar4 == NULL && pvVar2 == NULL)
  {
    pvVar2 = NULL;
    pvVar4 = NULL;
  }
  else
  {
    pvVar4 = UI_Complex_Control_ctor
                       (pvVar2,pvVar4,0x1,0xa0,0xa,0x8e,0x8d,0x8c,0xbbc,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  UI_Complex_Control_Enable_Window_9234(pvVar2,(ushort)pvVar4);
  lVar12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  iVar11 = (int)lVar12;
  Simulator_Get_Entity_Value_at_Offset_20_Logic(lVar12);
  iVar6 = Simulator_Get_Value_at_Offset_116_Logic(iVar11);
  if (iVar6 != 0x0)
  {
    Simulator_Validate_ID_8000001_Logic(iVar11);
    if (0x0 < iVar6)
    {
      Simulator_Update_Resource_8000001_Wrapper_2(iVar11);
      if (iVar6 == 0x0)
      {
        UI_Complex_Control_Enable_Window_9234(pvVar2,(ushort)pvVar4);
      }
    }
  }
  iVar11 = (int)*(undefined4 *)((int)this_ptr + 0x98);
  uVar7 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x98) >> 0x10);
  SetWindowPos16(0x40,*(int16_t *)(iVar11 + 0x10),*(int16_t *)(iVar11 + 0xe),
                 *(int16_t *)(iVar11 + 0xc),
                 *(int16_t *)CONCAT22(uVar7,(int16_t *)(iVar11 + 0xa)),0x0,
                 *(HWND16 *)((int)this_ptr + 0x6));
  return;
}



void __stdcall16far UI_Component_Invoke_vcall_8_at_94_Logic_5238(void *this_ptr)
{
  undefined2 in_stack_00000006;
  void *puVar1;
  
  puVar1 = (void *)((int)*(undefined4 *)*(undefined4 *)((int)this_ptr + 0x94) + 0x8);
  (**(code **)puVar1)();
  return;
}



// Systematic cleanup for a component. Destroys sub-window 0xB6 and triggers the virtual
// destructor for the object at 0x94.

void __stdcall16far UI_Component_Cleanup_B6_and_94_Logic_5256(void *this_ptr)
{
  undefined4 *puVar1;
  int iVar2;
  BOOL16 BVar3;
  astruct_50 *uVar4;
  u16 unaff_CS;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this_ptr + 0xb6) != 0x0)
  {
    unaff_CS = 0x1538;
    BVar3 = IsWindow16(*(HWND16 *)((int)this_ptr + 0xb6));
    if (BVar3 != 0x0)
    {
      unaff_CS = 0x1538;
      DestroyWindow16(*(HWND16 *)((int)this_ptr + 0xb6));
    }
  }
  *(undefined2 *)((int)this_ptr + 0xb6) = 0x0;
  puVar1 = (undefined4 *)*(int *)((int)this_ptr + 0x94);
  iVar2 = *(int *)((int)this_ptr + 0x96);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)this_ptr + 0x94) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x98) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for specialized sub-dialog 52C0. Manages UI updates, child window
// cleanup, and specialized control IDs like IDC_UPDATE_CYCLE and IDC_PROPERTY_EDIT.

ulong __stdcall16far
UI_SubDialog_Type52C0_On_Command_52c0
          (int param_1,undefined2 param_2,undefined2 param_3,ulong param_4)
{
  undefined2 *puVar1;
  BOOL16 BVar2;
  int iVar3;
  int iVar4;
  HWND16 HVar5;
  void *unaff_SS;
  long lVar6;
  void *this_ptr;
  ulong uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  HWND16 in_stack_0000ffde;
  undefined2 local_1e;
  undefined2 local_1c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  if (param_4._2_2_ != 0x10c)
  {
    if (param_4 < 0x10d0000)
    {
      if (param_4._2_2_ == 0xfa)
      {
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)(param_1 + 0x98) + 0x18);
        (*(code *)*puVar1)();
        return 0x1;
      }
      if (param_4._2_2_ == 0x10a)
      {
        GetClientRect16((int *)CONCAT22(unaff_SS,&local_a),*(HWND16 *)(param_1 + 0x6));
        local_8 += 0x3;
        local_a = *(int *)((int)*(undefined4 *)(param_1 + 0x98) + 0x1a) + -0x9;
        local_6 += -0x3;
        local_4 += -0x3;
        InvalidateRect16(0x1,(void *)CONCAT22(*(undefined2 *)(param_1 + 0x6),unaff_SS),
                         in_stack_0000ffde);
        UI_Window_Manager_Cleanup_SubWindows_Logic
                  ((void *)(void *)*(undefined4 *)(param_1 + 0x98));
        UI_Component_Set_Offsets_28_12_Logic
                  ((void *)(void *)*(undefined4 *)(param_1 + 0x98),0x0);
        UI_Component_Process_Update_Cycle_Logic
                  ((void *)(void *)*(undefined4 *)(param_1 + 0x98));
        return 0x1;
      }
      if (param_4._2_2_ != 0x10b)
      {
LAB_1040_5560:
        uVar7 = UI_SubDialog_Complex_Command_Handler_b54a
                          (param_1,param_2,param_3,param_4);
        return uVar7;
      }
      iVar3 = *(int *)((int)*(undefined4 *)(param_1 + 0x98) + 0x12);
      lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
      iVar4 = (int)lVar6;
      Simulator_Validate_ID_8000001_Logic(iVar4);
      local_1c = (undefined2)((ulong)lVar6 >> 0x10);
      if ((iVar3 != 0x70) && (iVar4 == 0x0))
      {
        return 0x1;
      }
      uVar9 = (undefined2)*(undefined4 *)(param_1 + 0xb0);
      uVar10 = (undefined2)((ulong)*(undefined4 *)(param_1 + 0xb0) >> 0x10);
      uVar8 = *(undefined2 *)((int)*(undefined4 *)(param_1 + 0x98) + 0x12);
    }
    else
    {
      if (param_4._2_2_ != 0x10d)
      {
        if (param_4._2_2_ == 0x10e)
        {
          lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
          uVar8 = (undefined2)lVar6;
          iVar3 = UI_Window_Focus_Manager_Logic
                            (lVar6,0xfc6,(int)*(undefined4 *)(param_1 + 0xb0),
                             (int)((ulong)*(undefined4 *)(param_1 + 0xb0) >> 0x10));
          if (iVar3 != 0x0)
          {
            return 0x1;
          }
          UI_Specialized_Dialog_Factory_Logic
                    (uVar8,(int)((ulong)lVar6 >> 0x10),0x0,0x0,0x13,
                     (int)*(undefined4 *)(param_1 + 0xb0),
                     (int)((ulong)*(undefined4 *)(param_1 + 0xb0) >> 0x10));
          return 0x1;
        }
        if (param_4._2_2_ != 0xbbb)
        {
          if (param_4._2_2_ == 0xbbc)
          {
            lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
            iVar3 = (int)lVar6;
            iVar4 = Simulator_Get_Entity_Value_at_Offset_20_Logic(lVar6);
            Simulator_Update_Resource_8000001_Wrapper_2(iVar3);
            if (iVar4 == 0x0)
            {
              Simulator_Update_Resource_8000001_Wrapper_1(iVar3);
            }
            HVar5 = GetDlgItem16(0xbbc,*(short *)(param_1 + 0x6));
            EnableWindow16(0x0,HVar5);
            return 0x1;
          }
          goto LAB_1040_5560;
        }
        if ((*(int *)(param_1 + 0xb6) == 0x0) ||
           (BVar2 = IsWindow16(*(HWND16 *)(param_1 + 0xb6)), BVar2 == 0x0))
        {
          this_ptr = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                               (_p_UISubDialogTable,*(uint16_t *)(param_1 + 0x6),0x1b);
          *(undefined2 *)(param_1 + 0xb6) = *(undefined2 *)((int)(void *)this_ptr + 0x6)
          ;
          UI_SubDialog_Reorient_and_Center_Logic_abdc(this_ptr);
          ShowWindow16(0x1,*(short *)(param_1 + 0xb6));
          return 0x1;
        }
        HVar5 = *(HWND16 *)(param_1 + 0xb6);
        goto LAB_1040_5417;
      }
      lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
      local_1c = (undefined2)((ulong)lVar6 >> 0x10);
      uVar9 = (undefined2)*(undefined4 *)(param_1 + 0xb0);
      uVar10 = (undefined2)((ulong)*(undefined4 *)(param_1 + 0xb0) >> 0x10);
      uVar8 = 0x71;
    }
    local_1e = (undefined2)lVar6;
    UI_Update_Entity_Action_Logic(local_1e,local_1c,uVar8,uVar9,uVar10);
    if (*(int *)(param_1 + 0xb4) != 0x0)
    {
      HVar5 = *(HWND16 *)(param_1 + 0xb4);
      BVar2 = IsWindow16(HVar5);
      if (BVar2 != 0x0)
      {
        SendMessage16(0x0,0x0,0xeb,CONCAT22(HVar5,*(undefined2 *)(param_1 + 0xb4)));
      }
    }
  }
  HVar5 = *(HWND16 *)(param_1 + 0x6);
LAB_1040_5417:
  DestroyWindow16(HVar5);
  return 0x1;
}



void * __stdcall16far
UI_SubDialog_Type55A2_dtor_Scalar_Deleting_557c(void *this_ptr,uchar flags)
{
  byte in_stack_00000008;
  
  UI_SubDialog_Type55A2_dtor_Internal_4f0a(this_ptr);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}



// Constructor for sub-dialog Type 0x6386 (vtable 0x6386). Links to Resource 0xFA3 and
// initializes a managed list of 6 entity entries. Syncs the current research or
// production level from the simulator.

ushort __stdcall16far
UI_SubDialog_Type6386_ctor_init_5626(void *this_ptr,ulong arg2,ushort parent_hwnd)
{
  u16 uVar1;
  void *pvVar2;
  u16 *puVar3;
  int in_DX;
  int iVar4;
  int iVar5;
  undefined2 unaff_SI;
  undefined2 uVar6;
  void *pvVar7;
  ulong uVar8;
  undefined2 in_stack_00000006;
  undefined4 uStack_c;
  
  UI_SubDialog_TypeB772_ctor_Simple_b082(this_ptr,CONCAT22(parent_hwnd,0xfa3));
  *(undefined2 *)((int)this_ptr + 0x94) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x96) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x98) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x9c) = 0x0;
  *_this_ptr = 0x6386;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x18));
  if (in_DX == 0x0 && pvVar2 == NULL)
  {
    *(undefined4 *)((int)this_ptr + 0x90) = 0x0;
    iVar4 = 0x0;
  }
  else
  {
    pvVar7 = Helper_ZeroFill_24Bytes_a598((void *)CONCAT22(in_DX,pvVar2));
    iVar4 = (int)((ulong)pvVar7 >> 0x10);
    *(undefined2 *)((int)this_ptr + 0x90) = (int)pvVar7;
    *(int *)((int)this_ptr + 0x92) = iVar4;
  }
  *(undefined2 *)*(undefined4 *)((int)this_ptr + 0x90) = 0x6;
  uVar1 = *(u16 *)*(undefined4 *)((int)this_ptr + 0x90);
  puVar3 = allocate_memory(CONCAT22(unaff_SI,uVar1 * 0xa + 0x2));
  uStack_c = (u16 *)CONCAT22(iVar4,puVar3);
  if (iVar4 == 0x0 && puVar3 == NULL)
  {
    *(undefined4 *)((int)*(undefined4 *)((int)this_ptr + 0x90) + 0x2) = 0x0;
  }
  else
  {
    *uStack_c = uVar1;
    call_function_n_times((void *)0xa564,0x1040,uVar1);
    uVar6 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x90) >> 0x10);
    iVar5 = (int)*(undefined4 *)((int)this_ptr + 0x90);
    *(int *)(iVar5 + 0x2) = (int)(puVar3 + 0x1);
    *(int *)(iVar5 + 0x4) = iVar4;
  }
  *(ulong *)((int)*(undefined4 *)((int)this_ptr + 0x90) + 0x6) = arg2;
  *(undefined2 *)((int)*(undefined4 *)((int)this_ptr + 0x90) + 0xa) = 0x4;
  *(undefined2 *)((int)*(undefined4 *)((int)this_ptr + 0x90) + 0x12) =
       *(undefined2 *)((int)this_ptr + 0xa);
  uVar8 = UI_Component_Get_Simulator_Entity_via_90_Logic_5d12(this_ptr);
  iVar4 = (int)(uVar8 >> 0x10);
  if (iVar4 == 0x0 && (int)uVar8 == 0x0)
  {
    *(undefined2 *)((int)this_ptr + 0x9a) = 0x0;
  }
  else
  {
    *(undefined2 *)((int)this_ptr + 0x9a) = *(undefined2 *)((int)uVar8 + 0x20);
  }
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Triggers a virtual update (offset 0x74) and enables dialog control 0x1790 if the
// linked entity is fully built (not state 4).

void __stdcall16far
UI_SubDialog_Check_Entity_and_Enable_Control_1790_5780(void *this_ptr)
{
  int iVar1;
  HWND16 enable;
  void *puVar3;
  undefined2 in_stack_00000006;
  void *puVar1;
  
  puVar1 = (void *)((int)*_this_ptr + 0x74);
  (**(code **)puVar1)();
  puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  iVar1 = Simulator_Is_Entity_Not_Type4_Logic((long)puVar3);
  if (iVar1 != 0x0)
  {
    enable = GetDlgItem16(0x1790,*(short *)((int)this_ptr + 0x6));
    EnableWindow16(0x1,enable);
  }
  return;
}



void __stdcall16far UI_SubDialog_Initialize_State_and_Position_57d4(void *param_1)
{
  UI_Component_Map_Entity_Type_to_State_Logic_5d42(param_1);
  UI_Map_Entity_Type_to_Category_ID_Logic_5eaa(param_1);
  Colony_Calculate_Efficiency_Percentage_Logic_5dc4(param_1);
  UI_SubDialog_Base_AutoPosition_and_Register_b230(param_1);
  return;
}
