/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 48/54
 * Original lines (combined): 126775-127711
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes the report list dialog, setting up sub-items, scroll bars, filter
// buttons, and window text. Plays sound resource 0x9E0001 on initialization.

void __stdcall16far UI_Report_List_Dialog_Initialize_and_Layout_6942(void *param_1)
{
  undefined2 *puVar1;
  void *pvVar2;
  ushort uVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint extraout_DX;
  uint uVar10;
  int iVar11;
  void *unaff_SS;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  void *this_ptr;
  undefined2 uVar16;
  void *pvVar15;
  undefined4 local_64;
  undefined4 local_60;
  uint32_t local_5c;
  void *local_5a;
  char local_58 [0x50];
  HDC16 local_8;
  void *local_6;
  void *local_4;
  
  this_ptr = (void *)param_1;
  uVar16 = (undefined2)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  lVar12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x33);
  uVar9 = (undefined2)((ulong)lVar12 >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x94) = (int)lVar12;
  *(undefined2 *)((int)this_ptr + 0x96) = uVar9;
  uVar8 = *(undefined2 *)((int)this_ptr + 0x94);
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ptr + 0x94) + 0x4);
  pvVar15 = param_1;
  (*(code *)*puVar1)(0x1010,uVar8,uVar9,0x0,this_ptr);
  uVar6 = extraout_DX;
  pvVar2 = allocate_memory(CONCAT22(uVar8,0xa));
  uVar10 = uVar6 | (uint)pvVar2;
  if (uVar10 == 0x0)
  {
    *(undefined4 *)((int)this_ptr + 0x98) = 0x0;
  }
  else
  {
    uVar3 = UI_SubItem_TypeC53E_ctor_init_bf3e(pvVar2,uVar6);
    *(ushort *)((int)this_ptr + 0x98) = uVar3;
    *(uint *)((int)this_ptr + 0x9a) = uVar10;
  }
  uVar13 = UI_SubItem_Sync_Update_Cycle_Logic_bfde
                     ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x98),
                      (void *)((ulong)*(undefined4 *)((int)this_ptr + 0x98) >> 0x10));
  iVar11 = (int)(uVar13 >> 0x10);
  pvVar4 = allocate_memory(CONCAT22(uVar8,0x42));
  pvVar2 = NULL;
  if (iVar11 != 0x0 || pvVar4 != NULL)
  {
    pvVar2 = UI_Complex_Control_ctor
                       (pvVar4,iVar11,0x1,0xa,0xa,0x0,0x81,0x80,0x10a,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar5 = allocate_memory(CONCAT22(uVar8,0x42));
  pvVar4 = NULL;
  if (pvVar2 != NULL || pvVar5 != NULL)
  {
    pvVar4 = UI_Complex_Control_ctor
                       (pvVar5,pvVar2,0x1,0x28,0xa,0x0,0x83,0x82,0x10c,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  local_6 = allocate_memory(0x42);
  if (pvVar4 == NULL && local_6 == NULL)
  {
    local_6 = NULL;
    pvVar2 = NULL;
  }
  else
  {
    pvVar2 = UI_Complex_Control_ctor
                       (local_6,pvVar4,0x1,0xaa,0xa,0x101,0x100,0xff,0x107,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  local_4 = pvVar2;
  UI_Complex_Control_Enable_Window_9234(local_6,(ushort)pvVar2);
  pvVar4 = allocate_memory(0x42);
  if (pvVar2 == NULL && pvVar4 == NULL)
  {
    pvVar4 = NULL;
    pvVar2 = NULL;
  }
  else
  {
    pvVar2 = UI_Complex_Control_ctor
                       (pvVar4,pvVar2,0x1,0xc2,0xa,0x101,0x100,0xff,0x108,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  local_6 = pvVar4;
  local_4 = pvVar2;
  UI_Complex_Control_Enable_Window_9234(pvVar4,(ushort)pvVar2);
  local_8 = GetDC16(*(HWND16 *)((int)this_ptr + 0x6));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_58,0x50),
             (long)CONCAT22(0x7cd,unaff_SS));
  pcVar14 = local_58;
  pvVar4 = unaff_SS;
  uVar6 = strlen_get_length((char *)CONCAT22(unaff_SS,pcVar14));
  local_5c = GetTextExtent16(uVar6,pcVar14,(short)pvVar4);
  local_5a = pvVar2;
  CreateWindow16(NULL,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c,0x7cd,
                 *(HWND16 *)((int)this_ptr + 0x6),(int16_t)pvVar2,local_5c,0xad,0x22,0x0
                 ,(char *)CONCAT22(local_58,(char *)s_Rebel_1050_4ffc + 0x4),
                 (void *)CONCAT22(0x5d84,unaff_SS));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_58,0x50),
             (long)CONCAT22(0x7ce,unaff_SS));
  pcVar14 = local_58;
  pvVar4 = unaff_SS;
  uVar6 = strlen_get_length((char *)CONCAT22(unaff_SS,pcVar14));
  local_5c = GetTextExtent16(uVar6,pcVar14,(short)pvVar4);
  uVar8 = (undefined2)((ulong)pvVar15 >> 0x10);
  local_5a = pvVar2;
  ReleaseDC16(local_8,*(HWND16 *)((int)this_ptr + 0x6));
  CreateWindow16(NULL,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c,0x7ce,
                 *(HWND16 *)((int)this_ptr + 0x6),(int16_t)local_5a,local_5c,0xc5,0x22,
                 0x0,(char *)CONCAT22(local_58,(char *)s_Rebel_1050_4ffc + 0x4),
                 (void *)CONCAT22(0x5d8b,unaff_SS));
  local_64 = 0x5a000a;
  local_60 = 0x140050;
  puVar7 = &local_64;
  UI_Dialog_Create_Button_Control_Alternative_6eae
            (param_1,0x1,puVar7,unaff_SS,0x5eb,0xfd,*(undefined2 *)((int)this_ptr + 0x6)
            );
  local_64._2_2_ = local_64._2_2_ + 0x14;
  UI_Dialog_Create_Button_Control_Alternative_6eae
            (param_1,0x0,&local_64,unaff_SS,0x5ec,0xfe,
             *(undefined2 *)((int)this_ptr + 0x6));
  local_64 = CONCAT22(local_64._2_2_ + 0x14,(undefined2)local_64);
  UI_Dialog_Create_Button_Control_Alternative_6eae
            (param_1,0x0,&local_64,unaff_SS,0x5ee,0xff,
             *(undefined2 *)((int)this_ptr + 0x6));
  SendMessage16(0x0,0x0,0x1,(long)CONCAT22(uVar8,puVar7));
  iVar11 = (int)*(undefined4 *)((int)this_ptr + 0x94);
  uVar8 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x94) >> 0x10);
  SetWindowPos16(0x40,*(int16_t *)(iVar11 + 0x10),*(int16_t *)(iVar11 + 0xe),
                 *(int16_t *)(iVar11 + 0xc),
                 *(int16_t *)CONCAT22(uVar8,(int16_t *)(iVar11 + 0xa)),0x0,
                 *(HWND16 *)((int)this_ptr + 0x6));
  g_ReportFilter_0ECC = 0x0;
  uVar8 = (undefined2)*(undefined4 *)((int)this_ptr + 0x94);
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ptr + 0x94) + 0x10);
  (*(code *)*puVar1)(0x1538,uVar8,
                     (int)((ulong)*(undefined4 *)((int)this_ptr + 0x94) >> 0x10));
  UI_Component_Process_Update_Cycle_Logic
            ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x94));
  PostMessage16(0x0,0x0,0x10a,CONCAT22(uVar8,*(undefined2 *)((int)this_ptr + 0x6)));
  return;
}



// Commit logic for Type 0x6F32. Removes itself from the parent and triggers a virtual
// completion callback at offset 0x10 of its sub-object.

void __stdcall16far UI_SubDialog_Type6F32_On_Commit_Logic_6cac(void *this_ptr)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 in_stack_00000006;
  
  UI_Container_Remove_Item_at_Offset_4_Logic
            ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x94),
             (long)CONCAT22(in_stack_00000006,this_ptr));
  puVar1 = (undefined4 *)*(int *)((int)this_ptr + 0x98);
  iVar2 = *(int *)((int)this_ptr + 0x9a);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1010,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)this_ptr + 0x98) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x94) = 0x0;
  return;
}



u16 __stdcall16far UI_Component_VCall_8_at_98_6cfa(u32 param_1)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x98) + 0x8);
  (*(code *)*puVar1)();
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the report list dialog. Manages filter selection (Report Filter
// 0-2), scroll positions, and triggers update cycles for the list components.

ulong __stdcall16far
UI_Report_List_Dialog_On_Command_6d1a
          (int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  undefined2 *puVar1;
  void *unaff_SS;
  ulong uVar2;
  undefined2 uVar3;
  HWND16 in_stack_0000ffde;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  if (false)
  {
switchD_1040_6e7b_caseD_fb:
    uVar2 = UI_SubDialog_Complex_Command_Handler_b54a(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  switch(param_4._2_2_)
  {
  case 0xfa:
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(param_1 + 0x94) + 0x18);
    (*(code *)*puVar1)();
    break;
  default:
    goto switchD_1040_6e7b_caseD_fb;
  case 0xfd:
    if (g_ReportFilter_0ECC == 0x0)
    {
      return 0x1;
    }
    g_ReportFilter_0ECC = 0x0;
    goto LAB_1040_6deb;
  case 0xfe:
    if (g_ReportFilter_0ECC == 0x1)
    {
      return 0x1;
    }
    g_ReportFilter_0ECC = 0x1;
    goto LAB_1040_6deb;
  case 0xff:
    if (g_ReportFilter_0ECC == 0x2)
    {
      return 0x1;
    }
    g_ReportFilter_0ECC = 0x2;
LAB_1040_6deb:
    uVar3 = (undefined2)*(undefined4 *)(param_1 + 0x94);
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(param_1 + 0x94) + 0x10);
    (*(code *)*puVar1)(0x1040,uVar3,
                       (int)((ulong)*(undefined4 *)(param_1 + 0x94) >> 0x10));
    UI_Component_Process_Update_Cycle_Logic
              ((void *)(void *)*(undefined4 *)(param_1 + 0x94));
    PostMessage16(0x0,0x0,0x10a,CONCAT22(uVar3,*(undefined2 *)(param_1 + 0x6)));
    break;
  case 0x107:
    goto LAB_1040_6e48;
  case 0x108:
LAB_1040_6e48:
    UI_Component_Adjust_Scroll_Position_and_Rebuild_Logic
              ((void *)(void *)*(undefined4 *)(param_1 + 0x94),
               (int)((ulong)*(undefined4 *)(param_1 + 0x94) >> 0x10));
    break;
  case 0x10a:
    GetClientRect16((int *)CONCAT22(unaff_SS,&local_a),*(HWND16 *)(param_1 + 0x6));
    local_8 += 0x3;
    local_a = *(int *)((int)*(undefined4 *)(param_1 + 0x94) + 0x1a) + -0x9;
    local_6 += -0x3;
    local_4 += -0x3;
    InvalidateRect16(0x1,(void *)CONCAT22(*(undefined2 *)(param_1 + 0x6),unaff_SS),
                     in_stack_0000ffde);
    UI_Window_Manager_Cleanup_SubWindows_Logic
              ((void *)(void *)*(undefined4 *)(param_1 + 0x94));
    UI_Component_Set_Offsets_28_12_Logic
              ((void *)(void *)*(undefined4 *)(param_1 + 0x94),0x0);
    UI_Component_Process_Update_Cycle_Logic
              ((void *)(void *)*(undefined4 *)(param_1 + 0x94));
    break;
  case 0x10c:
    DestroyWindow16(*(HWND16 *)(param_1 + 0x6));
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// An alternative routine for creating a Windows button control within a dialog.
// Equivalent to 1040:7620.

void __stdcall16far
UI_Dialog_Create_Button_Control_Alternative_6eae
          (undefined4 param_1,int param_2,astruct_46 *param_3,int param_4,
          HMENU16 param_5)
{
  char *pcVar1;
  void *in_DX;
  astruct_46 *uVar1;
  undefined2 uVar2;
  undefined4 uStack_a;
  
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),param_4);
  uStack_a = 0x50000009;
  if (param_2 != 0x0)
  {
    uStack_a = 0x50020009;
  }
  uVar2 = (undefined2)((ulong)param_3 >> 0x10);
  uVar1 = (astruct_46 *)param_3;
  CreateWindow16(NULL,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c,param_5,
                 *(HWND16 *)((int)param_1 + 0x6),uVar1->field4_0x6,uVar1->field3_0x4,
                 uVar1->field2_0x2,*(int16_t *)param_3,(uint32_t)uStack_a,
                 (void *)CONCAT22(pcVar1,(void *)((ulong)uStack_a >> 0x10)),
                 (void *)CONCAT22(0x5d92,in_DX));
  return;
}



void * __stdcall16far
UI_SubDialog_Type6F32_dtor_Scalar_Deleting_6f0c(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_Type6F32_dtor_Internal_6862(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for sub-dialog Type 0x76A4 (vtable 0x76A4). Links to Resource 0xFD9.

ushort __stdcall16far
UI_SubDialog_Type76A4_ctor_init_6fb6(void *this_ptr,ushort parent_hwnd)
{
  astruct_45 *uVar2;
  
  UI_SubDialog_TypeB772_ctor_Alternative_b0bc(this_ptr,(void *)parent_hwnd,0x0);
  *(undefined4 *)((int)this_ptr + 0x94) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x98) = 0x0;
  *_this_ptr = 0x76a4;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  return (ushort)this_ptr;
}



void __stdcall16far
UI_SubDialog_Type76A4_Handle_vcall_8_Logic_6ff2(void *this_ptr,int event_id)
{
  HWND16 HVar1;
  astruct_44 *uVar2;
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



ushort __stdcall16far
UI_SubDialog_Type76A4_On_Event_Dispatcher_7044
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Alternative initialization for a report list dialog (likely for a different resource
// category like Infrastructure/Colony), using specific resource IDs for components.

void __stdcall16far UI_Report_List_Dialog_Initialize_Alternative_70b4(void *param_1)
{
  undefined2 *puVar1;
  void *pvVar2;
  ushort uVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint extraout_DX;
  uint uVar10;
  int iVar11;
  void *unaff_SS;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  void *this_ptr;
  undefined2 uVar16;
  void *pvVar15;
  undefined4 local_64;
  undefined4 local_60;
  uint32_t local_5c;
  void *local_5a;
  char local_58 [0x50];
  HDC16 local_8;
  void *local_6;
  void *local_4;
  
  this_ptr = (void *)param_1;
  uVar16 = (undefined2)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  lVar12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x34);
  uVar9 = (undefined2)((ulong)lVar12 >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x94) = (int)lVar12;
  *(undefined2 *)((int)this_ptr + 0x96) = uVar9;
  uVar8 = *(undefined2 *)((int)this_ptr + 0x94);
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ptr + 0x94) + 0x4);
  pvVar15 = param_1;
  (*(code *)*puVar1)(0x1010,uVar8,uVar9,0x0,this_ptr);
  uVar6 = extraout_DX;
  pvVar2 = allocate_memory(CONCAT22(uVar8,0xa));
  uVar10 = uVar6 | (uint)pvVar2;
  if (uVar10 == 0x0)
  {
    *(undefined4 *)((int)this_ptr + 0x98) = 0x0;
  }
  else
  {
    uVar3 = UI_SubItem_TypeC53E_ctor_init_bf3e(pvVar2,uVar6);
    *(ushort *)((int)this_ptr + 0x98) = uVar3;
    *(uint *)((int)this_ptr + 0x9a) = uVar10;
  }
  uVar13 = UI_SubItem_Sync_Update_Cycle_Logic_bfde
                     ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x98),
                      (void *)((ulong)*(undefined4 *)((int)this_ptr + 0x98) >> 0x10));
  iVar11 = (int)(uVar13 >> 0x10);
  pvVar4 = allocate_memory(CONCAT22(uVar8,0x42));
  pvVar2 = NULL;
  if (iVar11 != 0x0 || pvVar4 != NULL)
  {
    pvVar2 = UI_Complex_Control_ctor
                       (pvVar4,iVar11,0x1,0xa,0xa,0x0,0x81,0x80,0x10a,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar5 = allocate_memory(CONCAT22(uVar8,0x42));
  pvVar4 = NULL;
  if (pvVar2 != NULL || pvVar5 != NULL)
  {
    pvVar4 = UI_Complex_Control_ctor
                       (pvVar5,pvVar2,0x1,0x28,0xa,0x0,0x83,0x82,0x10c,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  local_6 = allocate_memory(0x42);
  if (pvVar4 == NULL && local_6 == NULL)
  {
    local_6 = NULL;
    pvVar2 = NULL;
  }
  else
  {
    pvVar2 = UI_Complex_Control_ctor
                       (local_6,pvVar4,0x1,0xaa,0xa,0x101,0x100,0xff,0x107,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  local_4 = pvVar2;
  UI_Complex_Control_Enable_Window_9234(local_6,(ushort)pvVar2);
  pvVar4 = allocate_memory(0x42);
  if (pvVar2 == NULL && pvVar4 == NULL)
  {
    pvVar4 = NULL;
    pvVar2 = NULL;
  }
  else
  {
    pvVar2 = UI_Complex_Control_ctor
                       (pvVar4,pvVar2,0x1,0xc2,0xa,0x101,0x100,0xff,0x108,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  local_6 = pvVar4;
  local_4 = pvVar2;
  UI_Complex_Control_Enable_Window_9234(pvVar4,(ushort)pvVar2);
  local_8 = GetDC16(*(HWND16 *)((int)this_ptr + 0x6));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_58,0x50),
             (long)CONCAT22(0x7cd,unaff_SS));
  pcVar14 = local_58;
  pvVar4 = unaff_SS;
  uVar6 = strlen_get_length((char *)CONCAT22(unaff_SS,pcVar14));
  local_5c = GetTextExtent16(uVar6,pcVar14,(short)pvVar4);
  local_5a = pvVar2;
  CreateWindow16(NULL,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c,0x7cd,
                 *(HWND16 *)((int)this_ptr + 0x6),(int16_t)pvVar2,local_5c,0xad,0x22,0x0
                 ,(char *)CONCAT22(local_58,(char *)s_Rebel_1050_4ffc + 0x4),
                 (void *)CONCAT22(0x5d9a,unaff_SS));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_58,0x50),
             (long)CONCAT22(0x7ce,unaff_SS));
  pcVar14 = local_58;
  pvVar4 = unaff_SS;
  uVar6 = strlen_get_length((char *)CONCAT22(unaff_SS,pcVar14));
  local_5c = GetTextExtent16(uVar6,pcVar14,(short)pvVar4);
  uVar8 = (undefined2)((ulong)pvVar15 >> 0x10);
  local_5a = pvVar2;
  ReleaseDC16(local_8,*(HWND16 *)((int)this_ptr + 0x6));
  CreateWindow16(NULL,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c,0x7ce,
                 *(HWND16 *)((int)this_ptr + 0x6),(int16_t)local_5a,local_5c,0xc5,0x22,
                 0x0,(char *)CONCAT22(local_58,(char *)s_Rebel_1050_4ffc + 0x4),
                 (void *)CONCAT22(0x5da1,unaff_SS));
  local_64 = 0x5a000a;
  local_60 = 0x140050;
  puVar7 = &local_64;
  UI_Dialog_Create_Button_Control_7620
            (param_1,0x1,puVar7,unaff_SS,0x5eb,0xfd,*(undefined2 *)((int)this_ptr + 0x6)
            );
  local_64._2_2_ = local_64._2_2_ + 0x14;
  UI_Dialog_Create_Button_Control_7620
            (param_1,0x0,&local_64,unaff_SS,0x5ed,0xfe,
             *(undefined2 *)((int)this_ptr + 0x6));
  local_64 = CONCAT22(local_64._2_2_ + 0x14,(undefined2)local_64);
  UI_Dialog_Create_Button_Control_7620
            (param_1,0x0,&local_64,unaff_SS,0x5ef,0xff,
             *(undefined2 *)((int)this_ptr + 0x6));
  SendMessage16(0x0,0x0,0x1,(long)CONCAT22(uVar8,puVar7));
  iVar11 = (int)*(undefined4 *)((int)this_ptr + 0x94);
  uVar8 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x94) >> 0x10);
  SetWindowPos16(0x40,*(int16_t *)(iVar11 + 0x10),*(int16_t *)(iVar11 + 0xe),
                 *(int16_t *)(iVar11 + 0xc),
                 *(int16_t *)CONCAT22(uVar8,(int16_t *)(iVar11 + 0xa)),0x0,
                 *(HWND16 *)((int)this_ptr + 0x6));
  g_ReportFilter_0ECC = 0x0;
  uVar8 = (undefined2)*(undefined4 *)((int)this_ptr + 0x94);
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ptr + 0x94) + 0x10);
  (*(code *)*puVar1)(0x1538,uVar8,
                     (int)((ulong)*(undefined4 *)((int)this_ptr + 0x94) >> 0x10));
  UI_Component_Process_Update_Cycle_Logic
            ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x94));
  PostMessage16(0x0,0x0,0x10a,CONCAT22(uVar8,*(undefined2 *)((int)this_ptr + 0x6)));
  return;
}



// Commit handler for dialog Type 0x67BA. Removes itself from the parent container and
// triggers a virtual completion callback (offset 0x10) on its associated internal
// object.

void __stdcall16far UI_SubDialog_Type67BA_On_Commit_Logic_741e(void *this_ptr)
{
  undefined4 *puVar1;
  int iVar2;
  astruct_43 *uVar3;
  undefined2 in_stack_00000006;
  
  UI_Container_Remove_Item_at_Offset_4_Logic
            ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x94),
             (long)CONCAT22(in_stack_00000006,this_ptr));
  puVar1 = (undefined4 *)*(int *)((int)this_ptr + 0x98);
  iVar2 = *(int *)((int)this_ptr + 0x9a);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1010,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)this_ptr + 0x98) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x94) = 0x0;
  return;
}



u16 __stdcall16far UI_Component_VCall_8_at_98_746c(u32 param_1)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x98) + 0x8);
  (*(code *)*puVar1)();
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for a colony report dialog. Manages filter selection (Report Filter
// 0-2), scroll positions, and triggers update cycles for the list components.

ulong __stdcall16far
UI_Colony_Report_On_Command_748c
          (int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  undefined2 *puVar1;
  void *unaff_SS;
  ulong uVar2;
  undefined2 uVar3;
  HWND16 in_stack_0000ffde;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  if (false)
  {
switchD_1040_75ed_caseD_fb:
    uVar2 = UI_SubDialog_Complex_Command_Handler_b54a(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  switch(param_4._2_2_)
  {
  case 0xfa:
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(param_1 + 0x94) + 0x18);
    (*(code *)*puVar1)();
    break;
  default:
    goto switchD_1040_75ed_caseD_fb;
  case 0xfd:
    if (g_ReportFilter_0ECC == 0x0)
    {
      return 0x1;
    }
    g_ReportFilter_0ECC = 0x0;
    goto LAB_1040_755d;
  case 0xfe:
    if (g_ReportFilter_0ECC == 0x1)
    {
      return 0x1;
    }
    g_ReportFilter_0ECC = 0x1;
    goto LAB_1040_755d;
  case 0xff:
    if (g_ReportFilter_0ECC == 0x2)
    {
      return 0x1;
    }
    g_ReportFilter_0ECC = 0x2;
LAB_1040_755d:
    uVar3 = (undefined2)*(undefined4 *)(param_1 + 0x94);
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(param_1 + 0x94) + 0x10);
    (*(code *)*puVar1)(0x1040,uVar3,
                       (int)((ulong)*(undefined4 *)(param_1 + 0x94) >> 0x10));
    UI_Component_Process_Update_Cycle_Logic
              ((void *)(void *)*(undefined4 *)(param_1 + 0x94));
    PostMessage16(0x0,0x0,0x10a,CONCAT22(uVar3,*(undefined2 *)(param_1 + 0x6)));
    break;
  case 0x107:
    goto LAB_1040_75ba;
  case 0x108:
LAB_1040_75ba:
    UI_Component_Adjust_Scroll_Position_and_Rebuild_Logic
              ((void *)(void *)*(undefined4 *)(param_1 + 0x94),
               (int)((ulong)*(undefined4 *)(param_1 + 0x94) >> 0x10));
    break;
  case 0x10a:
    GetClientRect16((int *)CONCAT22(unaff_SS,&local_a),*(HWND16 *)(param_1 + 0x6));
    local_8 += 0x3;
    local_a = *(int *)((int)*(undefined4 *)(param_1 + 0x94) + 0x1a) + -0x9;
    local_6 += -0x3;
    local_4 += -0x3;
    InvalidateRect16(0x1,(void *)CONCAT22(*(undefined2 *)(param_1 + 0x6),unaff_SS),
                     in_stack_0000ffde);
    UI_Window_Manager_Cleanup_SubWindows_Logic
              ((void *)(void *)*(undefined4 *)(param_1 + 0x94));
    UI_Component_Set_Offsets_28_12_Logic
              ((void *)(void *)*(undefined4 *)(param_1 + 0x94),0x0);
    UI_Component_Process_Update_Cycle_Logic
              ((void *)(void *)*(undefined4 *)(param_1 + 0x94));
    break;
  case 0x10c:
    DestroyWindow16(*(HWND16 *)(param_1 + 0x6));
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Helper routine to create a Windows 'button' control within a dialog. Loads the button
// text from string resources and sets styles (0x50000009 or 0x50020009).

void __stdcall16far
UI_Dialog_Create_Button_Control_7620
          (undefined4 param_1,int param_2,int16_t *param_3,int param_4,HMENU16 param_5)
{
  char *pcVar1;
  void *in_DX;
  int16_t *piVar2;
  undefined2 uVar3;
  undefined4 uStack_a;
  
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),param_4);
  uStack_a = 0x50000009;
  if (param_2 != 0x0)
  {
    uStack_a = 0x50020009;
  }
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  piVar2 = (int16_t *)param_3;
  CreateWindow16(NULL,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c,param_5,
                 *(HWND16 *)((int)param_1 + 0x6),piVar2[0x3],piVar2[0x2],piVar2[0x1],
                 *param_3,(uint32_t)uStack_a,
                 (void *)CONCAT22(pcVar1,(void *)((ulong)uStack_a >> 0x10)),
                 (void *)CONCAT22(0x5da8,in_DX));
  return;
}



// Scalar deleting destructor for sub-dialog type B772.

void * __stdcall16far
UI_SubDialog_TypeB772_dtor_Scalar_Deleting_767e
          (void *param_1,undefined2 param_2,byte param_3)
{
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Internal destructor for base sub-dialogs. Systematically cleans up associated virtual
// objects, brushes, menus, and window properties. Reverts vtable to base state.

void __stdcall16far UI_SubDialog_Base_dtor_Internal_782c(void *this_ptr)
{
  undefined2 *puVar1;
  astruct_41 *uVar2;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x840c;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  if (*(int *)((int)this_ptr + 0x72) != 0x0 ||
      (undefined4 *)*(int *)((int)this_ptr + 0x70) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this_ptr + 0x70);
    (*(code *)*puVar1)();
  }
  if (*(int *)((int)this_ptr + 0x4) != 0x0)
  {
    DeleteObject16(*(HGDIOBJ16 *)((int)this_ptr + 0x4));
    *(undefined2 *)((int)this_ptr + 0x4) = 0x0;
  }
  if (*(int *)((int)this_ptr + 0x68) != 0x0)
  {
    DestroyMenu16(*(HMENU16 *)((int)this_ptr + 0x68));
  }
  RemoveProp16(s_thisLo_1050_5db1,*(HWND16 *)((int)this_ptr + 0x6));
  RemoveProp16(s_thisHi_1050_5db8,*(HWND16 *)((int)this_ptr + 0x6));
  RemoveProp16(s_procLo_1050_5dbf,*(HWND16 *)((int)this_ptr + 0x6));
  RemoveProp16(s_procHi_1050_5dc6,*(HWND16 *)((int)this_ptr + 0x6));
  *_this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1008;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Core routine for instantiating a Windows dialog from a template. Registers the new
// HWND with multiple internal properties (0x1050:5DCD, etc.) and triggers a virtual
// post-create callback at offset 0x50.

void __stdcall16far UI_SubDialog_Base_Create_and_Register_78e2(void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  HWND16 HVar3;
  HANDLE16 handle;
  HANDLE16 handle_02;
  astruct_40 *handle_01;
  HINSTANCE16 unaff_DI;
  undefined2 uVar4;
  void *in_stack_00000006;
  HWND16 hwnd;
  undefined4 uStack_6;
  
  if (*(long *)((int)this_ptr + 0xc) == 0x0)
  {
    uVar4 = (undefined2)((ulong)_p_UIMainWindow >> 0x10);
    pvVar2 = (void *)*(undefined2 *)((int)_p_UIMainWindow + 0x4);
    uVar4 = *(undefined2 *)((int)_p_UIMainWindow + 0x6);
  }
  else
  {
    pvVar2 = (void *)*(undefined2 *)((int)this_ptr + 0xc);
    uVar4 = *(undefined2 *)((int)this_ptr + 0xe);
  }
  uStack_6 = (void *)CONCAT22(uVar4,pvVar2);
  handle_02 = 0x0;
  HVar3 = CreateDialog16(uStack_6,*(HWND16 *)((int)this_ptr + 0x8),
                         (void *)(ZEXT24(PTR_DAT_1050_0000_1050_038c) << 0x10),unaff_DI)
  ;
  *(HWND16 *)((int)this_ptr + 0x6) = HVar3;
  hwnd = 0x50;
  GetWindowText16(0x50,(void *)CONCAT22(HVar3,in_stack_00000006),unaff_DI);
  handle = GetWindowLong16(-0x4,*(HWND16 *)((int)this_ptr + 0x6));
  SetWindowLong16((int32_t)_PTR_DAT_1050_0000_1050_5bcc,
                  (int16_t)((ulong)_PTR_DAT_1050_0000_1050_5bcc >> 0x10),0xfffc);
  SetProp16((HANDLE16)this_ptr,
            (dword *)CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),
                              (dword *)&g_HeapContext),hwnd);
  SetProp16((HANDLE16)in_stack_00000006,
            (dword *)CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),
                              (dword *)&g_HeapContext),hwnd);
  SetProp16(handle,(dword *)CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),
                                     (dword *)&g_HeapContext),hwnd);
  SetProp16(handle_02,
            (dword *)CONCAT22(*(undefined2 *)((int)this_ptr + 0x6),
                              (dword *)&g_HeapContext),hwnd);
  puVar1 = (undefined2 *)((int)*_this_ptr + 0x50);
  (*(code *)*puVar1)();
  return;
}
