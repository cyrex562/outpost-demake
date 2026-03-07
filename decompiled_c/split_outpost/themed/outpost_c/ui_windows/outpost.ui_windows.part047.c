/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 47/54
 * Original lines (combined): 125229-126763
 * Boundaries: top-level declarations/definitions only
 */




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



void __stdcall16far UI_SubDialog_Initialize_State_and_Position_57d4(void *param_1)
{
  UI_Component_Map_Entity_Type_to_State_Logic_5d42(param_1);
  UI_Map_Entity_Type_to_Category_ID_Logic_5eaa(param_1);
  Colony_Calculate_Efficiency_Percentage_Logic_5dc4(param_1);
  UI_SubDialog_Base_AutoPosition_and_Register_b230(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for sub-dialog type 5800. Handles complex collection refreshes by
// re-allocating buffers and re-populating items, and synchronizes entity status.

ulong __stdcall16far
UI_SubDialog_Type5800_On_Command_5800
          (undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  undefined2 *puVar1;
  void *pvVar2;
  u16 *puVar3;
  ushort uVar4;
  HWND16 enable;
  int iVar5;
  int iVar6;
  undefined2 unaff_SI;
  undefined2 uVar7;
  undefined2 unaff_SS;
  void *pvVar8;
  ulong uVar9;
  undefined4 *hwnd;
  undefined4 local_18;
  undefined1 local_14 [0x8];
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
    if (iVar5 == 0x0 && pvVar2 == NULL)
    {
      pvVar2 = NULL;
      iVar5 = 0x0;
    }
    else
    {
      pvVar8 = Helper_ZeroFill_24Bytes_a598((void *)CONCAT22(iVar5,pvVar2));
      iVar5 = (int)((ulong)pvVar8 >> 0x10);
      pvVar2 = (void *)pvVar8;
    }
    *(void **)(param_1 + 0x24) = pvVar2;
    *(int *)((int)param_1 + 0x92) = iVar5;
    *(undefined2 *)param_1[0x24] = 0x6;
    local_c = *(u16 *)param_1[0x24];
    puVar3 = allocate_memory(CONCAT22(unaff_SI,local_c * 0xa + 0x2));
    local_18 = (u16 *)CONCAT22(iVar5,puVar3);
    if (iVar5 == 0x0 && puVar3 == NULL)
    {
      *(undefined4 *)((int)param_1[0x24] + 0x2) = 0x0;
    }
    else
    {
      *local_18 = local_c;
      call_function_n_times((void *)0xa564,0x1040,local_c);
      uVar7 = (undefined2)((ulong)param_1[0x24] >> 0x10);
      iVar6 = (int)param_1[0x24];
      *(int *)(iVar6 + 0x2) = (int)(puVar3 + 0x1);
      *(int *)(iVar6 + 0x4) = iVar5;
    }
    *(undefined4 *)((int)param_1[0x24] + 0x6) =
         *(undefined4 *)((int)(void *)local_a + 0x6);
    *(undefined2 *)((int)param_1[0x24] + 0xa) = 0x4;
    *(undefined2 *)((int)param_1[0x24] + 0x12) = *(undefined2 *)((int)param_1 + 0xa);
    uVar7 = 0x1010;
    Simulator_Event_Dispatch_Table_Dispatch_Logic
              ((void *)local_6,0x10505d78,param_1[0x24]);
    if (local_a != NULL)
    {
      UI_Managed_Collection_dtor_Internal_a5d0(local_a);
      uVar7 = 0x1000;
      free_if_not_null((void *)local_a);
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)CONCAT22(param_2,param_1) + 0x70);
    hwnd = param_1;
    (*(code *)*puVar1)(uVar7,param_1,param_2);
    uVar4 = UI_Component_Sync_Entity_Status_to_9A_Logic_5cd6(param_1);
    if (uVar4 != 0x0)
    {
      UI_Map_Entity_Type_to_Category_ID_Logic_5eaa(param_1);
      *(undefined2 *)(param_1 + 0x25) = 0x0;
    }
    Colony_Calculate_Efficiency_Percentage_Logic_5dc4(param_1);
    GetWindowRect16((undefined1 *)CONCAT22(unaff_SS,local_14),
                    *(HWND16 *)((int)param_1 + 0x6));
    InvalidateRect16(*(BOOL16 *)(param_1 + 0x27),
                     (void *)((ulong)*(uint *)((int)param_1 + 0x6) << 0x10),(HWND16)hwnd
                    );
    if (*(int *)(param_1 + 0x27) != 0x0)
    {
      *(undefined2 *)(param_1 + 0x27) = 0x0;
    }
  }
  else
  {
    if (param_4._2_2_ != 0x13b)
    {
      uVar9 = UI_SubDialog_Complex_Command_Handler_b54a(param_1,param_2,param_3,param_4)
      ;
      return uVar9;
    }
    enable = GetDlgItem16(0x1790,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,enable);
  }
  return 0x1;
}



void * __stdcall16far
UI_SubDialog_dtor_Scalar_Deleting_vB0F8_6360(void *this_ptr,uchar flags)
{
  byte in_stack_00000008;
  
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(this_ptr);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x67BA (vtable 0x67BA). Links to Resource 0x2B and
// triggers an immediate virtual update. Base ID 0x185.

ushort __stdcall16far
UI_SubDialog_Type67BA_ctor_init_6402(void *this_ptr,ushort parent_hwnd)
{
  astruct_49 *uVar1;
  void *puVar3;
  undefined2 in_stack_00000008;
  void *puVar1;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,0x18500000,in_stack_00000008);
  *(undefined4 *)((int)this_ptr + 0x8e) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x92) = 0x0;
  *_this_ptr = 0x67ba;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  *(undefined2 *)((int)this_ptr + 0x92) = (int)puVar3;
  *(undefined2 *)((int)this_ptr + 0x94) = (int)((ulong)puVar3 >> 0x10);
  puVar1 = (void *)((int)*(undefined4 *)*(undefined4 *)((int)this_ptr + 0x92) + 0x4);
  (**(code **)puVar1)();
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type67BA_dtor_Internal_6470(void *this_ptr)
{
  astruct_48 *uVar1;
  void *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x67ba;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  if (*(long *)((int)this_ptr + 0x92) != 0x0)
  {
    unaff_CS = (void *)0x1010;
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x92),
               (long)CONCAT22(in_stack_00000006,this_ptr));
  }
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes and positions a specialized sub-dialog with multiple complex controls,
// setting up their geometry based on the current game version and system flags.

void __stdcall16far UI_SubDialog_Type65BA_Initialize_and_Layout_65ba(void *param_1)
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
  local_8 = Get_Outpost_Version_Number();
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
    local_1a = UI_System_Update_Ship_Link_Flag_and_Get_Entry_Ptr((int)local_6);
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
// Command handler for dialog Type 0x67BA. Manages detail summary triggers and context
// swaps for Resource 0x1851/0x1852.

void __stdcall16far
UI_SubDialog_Type67BA_On_Command_672e
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  undefined2 unaff_BP;
  int dialog_id;
  
  if (param_4._2_2_ == 0x1841)
  {
    UI_Show_Resource_Detail_Summary_MessageBox_64ca(param_1,param_2);
  }
  else
  {
    if (param_4._2_2_ == 0x1851)
    {
      dialog_id = 0x2a;
    }
    else
    {
      if (param_4._2_2_ != 0x1852)
      {
        UI_SubDialog_Base_On_Command_Logic_7b3c
                  (param_1,param_2,param_3,(ushort)param_4,
                   CONCAT22(unaff_BP,param_4._2_2_));
        return;
      }
      dialog_id = 0x29;
    }
    UI_SubDialog_Factory_Create_and_Show_by_ID_af40
              (_p_UISubDialogTable,*(uint16_t *)((int)param_1 + 0x8),dialog_id);
    PostMessage16(0x0,0x0,0x2,CONCAT22(unaff_BP,*(undefined2 *)((int)param_1 + 0x6)));
  }
  return;
}



void * __stdcall16far
UI_SubDialog_Type67BA_dtor_Scalar_Deleting_6794(void *this_ptr,uchar flags)
{
  byte in_stack_00000008;
  
  UI_SubDialog_Type67BA_dtor_Internal_6470(this_ptr);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}



// Constructor for sub-dialog Type 0x6F32 (vtable 0x6F32). Links to Resource 0xFDA. Base
// dialog ID inherited from init.

ushort __stdcall16far
UI_SubDialog_Type6F32_ctor_init_6826(void *this_ptr,ushort parent_hwnd)
{
  UI_SubDialog_TypeB772_ctor_Alternative_b0bc(this_ptr,(void *)parent_hwnd,0x0);
  *(undefined4 *)((int)this_ptr + 0x94) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x98) = 0x0;
  *_this_ptr = 0x6f32;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  return (ushort)this_ptr;
}



void __stdcall16far UI_SubDialog_Type6F32_dtor_Internal_6862(void *this_ptr)
{
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x6f32;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(this_ptr);
  return;
}



// Virtual event handler for Type 0x6F32. Enables or disables buttons 0x107 and 0x108
// based on operational flags in the linked resource manager.

void __stdcall16far
UI_SubDialog_Type6F32_Handle_vcall_8_Logic_6880(void *this_ptr,int event_id)
{
  HWND16 HVar1;
  astruct_47 *uVar2;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0x8)
  {
    HVar1 = GetDlgItem16(0x107,*(short *)((int)this_ptr + 0x6));
    EnableWindow16(*(HWND16 *)((int)*(undefined4 *)((int)this_ptr + 0x94) + 0x24),HVar1)
    ;
    HVar1 = GetDlgItem16(0x108,*(short *)((int)this_ptr + 0x6));
    EnableWindow16(*(HWND16 *)((int)*(undefined4 *)((int)this_ptr + 0x94) + 0x26),HVar1)
    ;
  }
  return;
}



// Virtual event dispatcher for dialog Type 0x6F32. Manages WM_COMMAND and virtual
// callbacks at offset 0x80.

ushort __stdcall16far
UI_SubDialog_Type6F32_On_Event_Dispatcher_68d2
          (void *this_ptr,void *event_data,ushort arg3,ushort arg4,uint msg_id)
{
  u16 uVar1;
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
    puVar1 = (void *)((int)*_this_ptr + 0x80);
    (**(code **)puVar1)();
  }
  return 0x1;
}
