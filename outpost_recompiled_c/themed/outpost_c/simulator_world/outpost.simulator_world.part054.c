/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 54/56
 * Original lines (combined): 114876-126029
 * Boundaries: top-level declarations/definitions only
 */




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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Custom drawing routine for Type A0B6 dialogs. Loads an entity summary resource (ID 3)
// and triggers virtual rendering callbacks (offsets 4, 8, 0xC) to display entity
// details.

u16 __stdcall16far UI_SubDialog_TypeA0B6_Draw_Entity_Summary_9ffa(void *this_ptr)
{
  undefined4 *puVar1;
  undefined2 in_DX;
  astruct_113 *iVar1;
  undefined2 uVar2;
  undefined4 uStack_8;
  HDC16 local_4;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  local_4 = GetDC16(*(HWND16 *)((int)(void *)this_ptr + 0x6));
  puVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  uStack_8 = (undefined4 *)CONCAT22(in_DX,puVar1);
  iVar1 = (astruct_113 *)(astruct_113 *)*uStack_8;
  (*(code *)iVar1->field6_0x8)(0x1010,puVar1,in_DX,&local_4);
  (*(code *)iVar1->field4_0x4)(0x1010,uStack_8,0x50005,&local_4);
  (*(code *)iVar1->field8_0xc)(0x1010,uStack_8,&local_4);
  ReleaseDC16(local_4,*(HWND16 *)((int)(void *)this_ptr + 0x6));
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates the screen position for a sub-dialog, centering it horizontally and
// determining a vertical offset based on planetary resources and system metrics. Moves
// the window via 1040:826C.

void __stdcall16far
UI_SubDialog_Calculate_Position_and_Center_Logic_a18c(void *this_ptr)
{
  undefined4 *this;
  int16_t iVar1;
  int x;
  int *unaff_SS;
  long lVar2;
  astruct_111 *paVar3;
  int *out2;
  undefined2 uVar4;
  int local_2c [0x2];
  int iStack_28;
  astruct_111 *puStack_24;
  int *piStack_22;
  int iStack_20;
  u16 uStack_1e;
  int local_1c [0x2];
  astruct_112 *iStack_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  int local_10;
  int local_e;
  undefined1 local_c [0x6];
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x27);
  uVar4 = (undefined2)((ulong)lVar2 >> 0x10);
  uStack_6 = (undefined2)lVar2;
  uStack_4 = uVar4;
  zero_init_struct_6bytes(local_c);
  copy_struct_6bytes(local_c,unaff_SS);
  unpack_word_pair(local_c,unaff_SS,&local_10);
  this = Resource_Manager_Load_Resource_Object_Logic
                   ((void *)_p_GlobalResourceManager,
                    (int)((ulong)_p_GlobalResourceManager >> 0x10));
  uStack_14 = (undefined4 *)CONCAT22(uVar4,this);
  iStack_18 = get_with_lazy_init(this);
  out2 = local_1c;
  uStack_16 = uVar4;
  paVar3 = (astruct_111 *)
           Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  piStack_22 = (int *)((ulong)paVar3 >> 0x10);
  puStack_24 = (astruct_111 *)paVar3;
  unpack_word_pair(puStack_24 + 0x1,piStack_22,out2);
  uStack_1e = puStack_24->field10_0xa;
  iStack_20 = puStack_24->field11_0xc;
  local_10 += (iStack_20 * 0xa) / 0x258 + iStack_18->field8_0x8 + local_1c[0x0];
  x = (int)((ulong)this_ptr >> 0x10);
  GetWindowRect16((int *)CONCAT22(unaff_SS,local_2c),
                  *(HWND16 *)((int)(void *)this_ptr + 0x6));
  uVar4 = 0x0;
  iVar1 = GetSystemMetrics16(0x0);
  local_e = (iVar1 - (iStack_28 - local_2c[0x0])) / 0x2;
  UI_Window_Move_or_Center_826c((void *)this_ptr,x,local_10);
  if (uStack_14 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_14)
              (0x1040,(undefined4 *)uStack_14,(int)((ulong)uStack_14 >> 0x10),0x1,uVar4,
               uStack_14,uStack_14);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xBD70. Links to Resource 0x36 and Resource 6
// (Navigation/Selection). Sets vtable to 0xBD70.

void * __stdcall16far UI_SubDialog_TypeBD70_ctor_init_b772(astruct_105 *param_1)
{
  astruct_105 *uVar1;
  undefined2 uVar2;
  u32 *puVar3;
  undefined2 in_stack_00000010;
  
  UI_SubDialog_Base_ctor_init_7728(param_1,0x9a,0xfbf0000,in_stack_00000010);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_105 *)param_1;
  (&uVar1->field141_0x8e)[0x0] = NULL;
  (&uVar1->field141_0x8e)[0x1] = NULL;
  (&uVar1->field143_0x92)[0x0] = NULL;
  (&uVar1->field143_0x92)[0x1] = NULL;
  uVar1->field145_0x96 = 0x1;
  uVar1->field146_0x98 = 0x0;
  *(undefined2 *)param_1 = 0xbd70;
  uVar1->field2_0x2 = 0x1038;
  puVar3 = (u32 *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x36);
  uVar1->field141_0x8e = (u32 *)puVar3;
  uVar1->field142_0x90 = (int)((ulong)puVar3 >> 0x10);
  puVar3 = (u32 *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x6);
  uVar1->field143_0x92 = (u32 *)puVar3;
  uVar1->field144_0x94 = (int)((ulong)puVar3 >> 0x10);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Orchestrates the 'Select Entity' action. Uses a wait cursor, submits a Select command
// to the simulator, forces a single-tick update to refresh state, and resets the
// simulator tick counter.

void __stdcall16far UI_Dialog_Execute_Select_Entity_Command_bc30(u32 this_ptr)
{
  undefined4 uVar1;
  undefined2 unaff_SS;
  undefined2 local_112;
  undefined2 uStack_110;
  HCURSOR16 HStack_6;
  HCURSOR16 HStack_4;
  
  HStack_4 = LoadCursor16((void *)0x7f02,0x0);
  HStack_6 = SetCursor16(HStack_4);
  uVar1 = *(undefined4 *)((int)this_ptr + 0x8e);
  Simulator_Command_Select_ctor_init_532e
            ((undefined2 *)CONCAT22(unaff_SS,&local_112),
             (void *)((long)*(int *)((int)uVar1 + 0xe) + 0x1000000));
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_112));
  Simulator_Global_Execute_Single_Tick_Logic_838e((void **)_p_SimulatorGlobalState);
  local_112 = 0x389a;
  uStack_110 = 0x1008;
  Simulator_Global_Reset_Tick_Counter_8334();
  SetCursor16(HStack_6);
  return;
}



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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x237E (vtable 0x237E). Links to Resource 0x1CC and
// formats a resource-specific event message using the Turn Manager for display. Base ID
// 0xFCF.

ushort __stdcall16far
UI_SubDialog_Type237E_ctor_init_1f5a(void *this_ptr,ushort parent_hwnd)
{
  void *pvVar1;
  undefined2 in_DX;
  void *pvVar2;
  undefined2 in_stack_00000008;
  int *status_out;
  undefined4 local_16;
  undefined4 uStack_12;
  astruct_70 *uVar5;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,0xfcf0000,in_stack_00000008);
  *(undefined4 *)((int)this_ptr + 0x8e) = 0x0;
  *(undefined4 *)((int)this_ptr + 0xa2) = 0x0;
  *(undefined4 *)((int)this_ptr + 0xa6) = 0x0;
  *_this_ptr = (char *)s_alarm_m_1050_2377 + 0x7;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(undefined2 *)((int)this_ptr + 0x8e) = pvVar1;
  *(undefined2 *)((int)this_ptr + 0x90) = in_DX;
  pvVar1 = get_with_lazy_init((void *)*(undefined2 *)((int)this_ptr + 0x8e));
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  local_16 = CONCAT22(*(int *)((int)pvVar1 + 0x8) + 0xa,0xa);
  uStack_12 = CONCAT22(0x1d6,*(int *)((int)pvVar1 + 0x4) + -0xa);
  *(undefined4 *)((int)this_ptr + 0x92) = local_16;
  *(undefined4 *)((int)this_ptr + 0x96) = uStack_12;
  *(undefined4 *)((int)this_ptr + 0x9a) = local_16;
  *(undefined4 *)((int)this_ptr + 0x9e) = uStack_12;
  *(int *)((int)this_ptr + 0x9c) = *(int *)((int)this_ptr + 0x9c) + 0x14;
  status_out = (int *)((int)this_ptr + 0xa6);
  pvVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  Turn_Manager_Format_Resource_Event_Message_Logic
            ((void *)pvVar2,(char **)((ulong)pvVar2 >> 0x10),status_out);
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x2E26 (vtable 0x2E26). Links to Resource 0x157 and
// initializes display strings from resources 0x64A and 0x64B.

ushort __stdcall16far
UI_SubDialog_Type2E26_ctor_init_29c2(void *this_ptr,void *arg2,ushort arg3)
{
  char *pcVar1;
  undefined2 in_DX;
  astruct_65 *uVar1;
  undefined2 in_stack_0000000a;
  
  UI_SubDialog_TypeB772_ctor_Alternative_b0bc
            (this_ptr,arg2,CONCAT22(in_stack_0000000a,arg3));
  *_this_ptr = (char *)s_add74_wav_1050_2e20 + 0x6;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  pcVar1 = Resource_Manager_LoadString_and_Duplicate
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x64b);
  *(undefined2 *)((int)this_ptr + 0x94) = pcVar1;
  *(undefined2 *)((int)this_ptr + 0x96) = in_DX;
  pcVar1 = Resource_Manager_LoadString_and_Duplicate
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x64a);
  *(undefined2 *)((int)this_ptr + 0x98) = pcVar1;
  *(undefined2 *)((int)this_ptr + 0x9a) = in_DX;
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// OnPaint handler for sub-dialog type 3D5E. Loads a resource object via
// Resource_Manager and makes multiple virtual calls for different drawing phases
// (background, content, etc.).

undefined2 __stdcall16far UI_SubDialog_Type3D5E_OnPaint_Logic_3d5e(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined2 in_DX;
  int iVar2;
  undefined2 uVar3;
  undefined4 local_8;
  HDC16 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  local_4 = GetDC16(*(HWND16 *)((int)param_1 + 0x6));
  puVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  local_8 = (undefined4 *)CONCAT22(in_DX,puVar1);
  iVar2 = (int)*local_8;
  (*(code *)*(undefined2 *)(iVar2 + 0x8))(0x1010,puVar1,in_DX,&local_4);
  (*(code *)*(undefined2 *)(iVar2 + 0x4))(0x1010,local_8,0x50078,&local_4);
  (*(code *)*(undefined2 *)(iVar2 + 0xc))(0x1010,local_8,&local_4);
  ReleaseDC16(local_4,*(HWND16 *)((int)param_1 + 0x6));
  return 0x0;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Complex OnPaint handler for sub-dialog type 5A06. Manages GDI objects, selects the
// global palette, and draws custom grids and indicators using resource-loaded bitmaps.

undefined2 __stdcall16far UI_SubDialog_Type5A06_OnPaint_Logic_5a06(undefined4 param_1)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  HPALETTE16 HVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int16_t iVar9;
  int iVar10;
  HPEN16 obj;
  HGDIOBJ16 obj_00;
  HDC16 hdc;
  HDC16 hdc_00;
  int iVar11;
  int in_DX;
  undefined2 extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  undefined2 uVar12;
  int iVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  uint unaff_SS;
  undefined4 uVar16;
  HDC16 *pHVar17;
  ulong uVar18;
  undefined2 uVar19;
  uint local_52;
  int local_48;
  int local_44;
  undefined4 local_36;
  HDC16 local_2c;
  undefined1 local_2a [0x20];
  undefined1 local_a [0x8];
  
  uVar14 = (undefined2)((ulong)param_1 >> 0x10);
  iVar13 = (int)param_1;
  GetWindowRect16((undefined1 *)CONCAT22(unaff_SS,local_a),*(HWND16 *)(iVar13 + 0x6));
  local_2c = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_2a),
                          *(HWND16 *)(iVar13 + 0x6));
  pvVar1 = (void *)*(undefined4 *)((int)_p_GlobalPaletteObject + 0xe);
  uVar15 = 0x1008;
  HVar5 = Palette_Object_Select_And_Realize_Wrapper_Far
                    ((void *)pvVar1,(HDC16)((ulong)pvVar1 >> 0x10));
  local_36 = NULL;
  if (*(int *)(iVar13 + 0x98) != 0x0)
  {
    puVar6 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    local_36 = (undefined4 *)CONCAT22(in_DX,puVar6);
    iVar11 = in_DX;
    pvVar7 = get_with_lazy_init(puVar6);
    if (iVar11 == 0x0 && pvVar7 == NULL)
    {
      uVar15 = 0x0;
      if (local_36 != NULL)
      {
        if (local_36 != NULL)
        {
          (*(code *)*(undefined2 *)(undefined2 *)*local_36)(0x1008,puVar6,in_DX,0x1);
          uVar15 = extraout_DX;
        }
      }
      puVar6 = Resource_Manager_Load_Resource_Object_Logic
                         ((void *)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10));
      local_36 = (undefined4 *)CONCAT22(uVar15,puVar6);
    }
    uVar15 = 0x1538;
    GetSystemMetrics16(0x4);
    puVar3 = (undefined2 *)((int)*local_36 + 0x4);
    (*(code *)*puVar3)();
    in_DX = extraout_DX_00;
  }
  if (local_36 != NULL)
  {
    if (local_36 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*local_36)
                (uVar15,(undefined4 *)local_36,(int)((ulong)local_36 >> 0x10),0x1);
      in_DX = extraout_DX_01;
    }
  }
  puVar8 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  local_36 = (undefined4 *)CONCAT22(in_DX,puVar8);
  pHVar17 = &local_2c;
  uVar12 = 0x4;
  uVar19 = 0xd;
  iVar9 = GetSystemMetrics16(0x4);
  iVar10 = -(iVar9 + -0x23);
  puVar4 = (undefined2 *)*local_36;
  puVar3 = (undefined2 *)puVar4 + 0x2;
  puVar6 = puVar8;
  iVar11 = in_DX;
  (*(code *)*puVar3)();
  uVar15 = extraout_DX_02;
  if (local_36 != NULL)
  {
    if (local_36 != NULL)
    {
      puVar3 = (undefined2 *)puVar4;
      (*(code *)*puVar3)(0x1538,puVar8,in_DX,0x1,puVar6,iVar11,iVar10,uVar12,uVar19,
                         pHVar17);
      uVar15 = extraout_DX_03;
    }
  }
  obj = CreatePen16(0x25,0x100,0x0);
  obj_00 = SelectObject16(0x1538,obj);
  puVar6 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  local_36 = (undefined4 *)CONCAT22(uVar15,puVar6);
  uVar12 = uVar15;
  pvVar7 = get_with_lazy_init(puVar6);
  uVar16 = *(undefined4 *)((int)pvVar7 + 0x4);
  uVar2 = *(undefined4 *)((int)pvVar7 + 0x8);
  iVar9 = GetSystemMetrics16(0x4);
  hdc = -(iVar9 + -0xc1);
  iVar9 = GetSystemMetrics16(0x4);
  local_48 = (int)uVar2;
  hdc_00 = 0xc5 - (iVar9 - local_48);
  MoveTo16(hdc,0x82,local_2c);
  local_44 = (int)uVar16;
  iVar11 = local_44 * 0xa + 0x85;
  LineTo16(hdc,iVar11,local_2c);
  LineTo16(hdc_00,iVar11,local_2c);
  LineTo16(hdc_00,0x82,local_2c);
  LineTo16(hdc,0x82,local_2c);
  for (local_52 = 0x0; local_52 < *(uint *)(iVar13 + 0x94); local_52 += 0x1)
  {
    pHVar17 = &local_2c;
    uVar18 = (ulong)unaff_SS;
    uVar16 = CONCAT22(local_44 * local_52 + 0x84,0x4);
    iVar9 = GetSystemMetrics16(0x4);
    puVar3 = (undefined2 *)((int)*local_36 + 0x4);
    (*(code *)*puVar3)(0x1538,puVar6,uVar15,-(iVar9 + -0xc4),uVar16,pHVar17,uVar18);
  }
  if (local_36 != NULL)
  {
    if (local_36 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*local_36)(0x1538,puVar6,uVar15,0x1);
    }
  }
  SelectObject16(0x1538,obj_00);
  DeleteObject16(obj);
  HVar5 = SelectPalette16(0x0,HVar5,local_2c);
  DeleteObject16(HVar5);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_2a),*(HWND16 *)(iVar13 + 0x6));
  return 0x0;
}



// Synchronizes an internal state field (offset 0x9A) with the linked entity's status
// value (offset 0x20). Returns 1 if a change occurred.

ushort __stdcall16far UI_Component_Sync_Entity_Status_to_9A_Logic_5cd6(void *this_ptr)
{
  int iVar1;
  ulong uVar2;
  undefined2 in_stack_00000006;
  
  uVar2 = UI_Component_Get_Simulator_Entity_via_90_Logic_5d12(this_ptr);
  if (uVar2 != 0x0)
  {
    iVar1 = *(int *)((int)uVar2 + 0x20);
    if (*(int *)((int)this_ptr + 0x9a) != iVar1)
    {
      *(int *)((int)this_ptr + 0x9a) = iVar1;
      return 0x1;
    }
  }
  return 0x0;
}



// Retrieves a simulator entity object by resolving the packed ID stored at offset 0x90
// of the UI component.

ulong __stdcall16far UI_Component_Get_Simulator_Entity_via_90_Logic_5d12(void *this_ptr)
{
  u16 iVar2;
  undefined2 uVar1;
  void *uVar4;
  undefined2 in_stack_00000006;
  u16 iVar1;
  
  uVar1 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x90) >> 0x10);
  iVar2 = (u16)*(undefined4 *)((int)this_ptr + 0x90);
  iVar1 = *(u16 *)(iVar2 + 0x6);
  if (*(int *)(iVar2 + 0x8) != 0x0 || iVar1 != 0x0)
  {
    uVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8
                      ((void *)CONCAT22(*(int *)(iVar2 + 0x8),iVar1));
    return (ulong)uVar4;
  }
  return 0x0;
}
