/*
 * Source: outpost.c
 * Chunk: 115/117
 * Original lines: 131279-132472
 * Boundaries: top-level declarations/definitions only
 */




ushort __stdcall16far
UI_SubDialog_TypeB772_ctor_Alternative_b0bc
          (void *this_ptr,void *arg2,ulong dlg_template_id)
{
  astruct_16 *uVar1;
  undefined4 in_stack_0000000c;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,0x0,in_stack_0000000c);
  *(undefined2 *)((int)this_ptr + 0x8e) = 0x0;
  *(ulong *)((int)this_ptr + 0x90) = dlg_template_id;
  *_this_ptr = 0xb772;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for dialog Type 0xB772. Cleans up associated window manager
// entries, bitmaps, managed collections, and reverts vtable.

void __stdcall16far UI_SubDialog_TypeB772_dtor_Internal_b0f8(void *this_ptr)
{
  void *ptr;
  astruct_15 *offset;
  u16 segment;
  void *pvVar1;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0xb772;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
  UI_Window_Manager_Remove_by_HWND_Logic((void *)pvVar1,(HWND16)((ulong)pvVar1 >> 0x10))
  ;
  if (*(int *)((int)this_ptr + 0x8e) != 0x0)
  {
    DeleteObject16(*(HGDIOBJ16 *)((int)this_ptr + 0x8e));
    *(undefined2 *)((int)this_ptr + 0x8e) = 0x0;
  }
  ptr = (void *)*(undefined2 *)((int)this_ptr + 0x90);
  if (*(int *)((int)this_ptr + 0x92) != 0x0 || ptr != NULL)
  {
    UI_Managed_Collection_dtor_Internal_a5d0
              ((void *)CONCAT22(*(int *)((int)this_ptr + 0x92),ptr));
    free_if_not_null(ptr);
  }
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through a managed list, generates formatted labels for each item, and
// updates the component's metadata strings.

void __stdcall16far
UI_SubDialog_Populate_Labels_from_List_b17c(void *this_ptr,void *list_ptr)
{
  int *piVar1;
  char *pcVar2;
  uint16_t segment;
  uint16_t uVar3;
  long lVar4;
  undefined4 in_stack_00000008;
  undefined4 uStack_c;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    piVar1 = (int *)*(undefined4 *)((int)this_ptr + 0x90);
    if (*piVar1 <= iStack_4) break;
    *(undefined2 *)(iStack_4 * 0xa + (int)*(undefined4 *)((int *)piVar1 + 0x1) + 0x4) =
         *(undefined2 *)(iStack_4 * 0x2 + (int)in_stack_00000008);
    iStack_4 += 0x1;
  }
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  segment = (uint16_t)((ulong)lVar4 >> 0x10);
  uStack_c = (void *)*(undefined4 *)((int)*(undefined4 *)((int)this_ptr + 0x90) + 0x2);
  uVar3 = segment;
  for (iStack_4 = 0x0; iStack_4 < *(int *)*(undefined4 *)((int)this_ptr + 0x90);
      iStack_4 += 0x1)
  {
    pcVar2 = UI_Generate_Formatted_Label_Logic
                       ((int)lVar4,segment,
                        (char *)(char *)*(undefined4 *)
                                         ((int)*(undefined4 *)((int)this_ptr + 0x90) +
                                         0x6));
    UI_Component_Set_Metadata_Strings_a626
              (uStack_c,(char *)CONCAT22(uVar3,pcVar2),uVar3);
    uStack_c = (void *)CONCAT22((int)((ulong)uStack_c >> 0x10),
                                (void *)((int)uStack_c + 0xa));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Registers a sub-dialog and automatically positions it on the screen to avoid
// overlapping with existing dialogs. Increments a global cascade counter (1050:5EF8).

void __stdcall16far UI_SubDialog_Base_AutoPosition_and_Register_b230(void *this_ptr)
{
  undefined2 *puVar1;
  int16_t iVar2;
  astruct_14 *offset;
  u16 segment;
  undefined2 unaff_SS;
  undefined2 in_stack_00000006;
  int *out2;
  int local_1a;
  int iStack_18;
  int iStack_16;
  int iStack_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  undefined4 uStack_a;
  int local_6;
  int local_4;
  
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  if (PTR_DAT_1050_0000_1050_5ef8 ==
      (undefined *)((int)(u16 *)&p_LastAllocatedBlock + 0x1))
  {
    PTR_DAT_1050_0000_1050_5ef8 = NULL;
  }
  out2 = &local_6;
  uStack_a = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  unpack_word_pair((void *)((int)uStack_a + 0xe),(int *)((ulong)uStack_a >> 0x10),out2);
  iStack_c = *(int *)((int)uStack_a + 0xa);
  iStack_e = *(int *)((int)uStack_a + 0xc);
  iVar2 = GetSystemMetrics16(0x4);
  iStack_10 = iVar2 * (int)PTR_DAT_1050_0000_1050_5ef8 + 0xa;
  PTR_DAT_1050_0000_1050_5ef8 = PTR_DAT_1050_0000_1050_5ef8 + 0x1;
  iStack_12 = iStack_10 + local_6;
  iStack_10 += local_4;
  GetWindowRect16((int *)CONCAT22(unaff_SS,&local_1a),*(HWND16 *)((int)this_ptr + 0x6));
  if (iStack_e < (iStack_14 - iStack_18) + iStack_12)
  {
    iStack_12 = -0x2 - ((iStack_14 - iStack_18) - iStack_e);
  }
  if (iStack_c < (iStack_16 - local_1a) + iStack_10)
  {
    iStack_10 = -0x2 - ((iStack_16 - local_1a) - iStack_c);
  }
  SetWindowPos16(0x1,0x0,0x0,iStack_12,iStack_10,0x0,*(HWND16 *)((int)this_ptr + 0x6));
  puVar1 = (undefined2 *)((int)*_this_ptr + 0x6c);
  (*(code *)*puVar1)(0x1538,this_ptr,in_stack_00000006);
  return;
}



// Specialized event dispatcher for sub-dialogs. Handles WM_PAINT (0xF) and common
// commands (0x111) by triggering virtual callbacks at offset 0x60 or 0x10.

ushort __stdcall16far
UI_SubDialog_Special_Event_Dispatcher_b316
          (void *this_ptr,void *event_data,ushort arg3,ushort arg4,uint msg_id)
{
  undefined2 *puVar2;
  int in_stack_0000000e;
  uint16_t uStack_4;
  void *puVar1;
  
  if (in_stack_0000000e == 0xf)
  {
    puVar2 = (undefined2 *)((int)*_this_ptr + 0x60);
    uStack_4 = (*(code *)*puVar2)();
  }
  else if (in_stack_0000000e == 0x111)
  {
    puVar1 = (void *)((int)*_this_ptr + 0x10);
    (**(code **)puVar1)();
    uStack_4 = 0x1;
  }
  else
  {
    uStack_4 = UI_SubDialog_Base_On_Event_Dispatcher_79c0
                         (this_ptr,event_data,arg3,arg4,msg_id);
  }
  return uStack_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u32 __stdcall16far
UI_GDI_Set_Brush_and_Palette_Colors_b372(u32 param_1,u16 param_2,uint param_3)
{
  HBRUSH16 HVar1;
  void *pvVar2;
  int16_t iVar3;
  undefined2 in_DX;
  int iVar4;
  undefined2 uVar5;
  HWND16 unaff_CS;
  ulong uVar6;
  u32 local_a;
  
  uVar5 = (undefined2)(param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x8e) == 0x0)
  {
    unaff_CS = 0x1538;
    HVar1 = CreateSolidBrush16(0x0);
    *(HBRUSH16 *)(iVar4 + 0x8e) = HVar1;
  }
  if (_PTR_DAT_1050_0000_1050_5efa == 0x0)
  {
    unaff_CS = 0x1008;
    pvVar2 = Palette_Object_Get_Buffer_Ptr_maybe
                       ((void *)(void *)*(undefined4 *)
                                         ((int)_p_GlobalPaletteObject + 0xe));
    _PTR_DAT_1050_0000_1050_5efa =
         (ulong)CONCAT12(*(undefined1 *)((int)pvVar2 + 0x94),
                         CONCAT11(*(undefined1 *)((int)pvVar2 + 0x95),
                                  *(undefined1 *)((int)pvVar2 + 0x96)));
  }
  if (0x3 < param_3)
  {
    uVar6 = _PTR_DAT_1050_0000_1050_5efa;
    if (param_3 == 0x4) goto LAB_1040_b41a;
    if ((param_3 == 0x4) || (param_3 != 0x5 && param_3 != 0x6))
    {
      return 0x0;
    }
  }
  iVar3 = GetDlgCtrlId(unaff_CS);
  if (iVar3 == 0x14c)
  {
    uVar6 = 0xffff;
  }
  else
  {
    uVar6 = _PTR_DAT_1050_0000_1050_5efa;
    if (iVar3 == 0x175)
    {
      uVar6 = 0xff;
    }
  }
LAB_1040_b41a:
  SetTextColor16((HDC16)uVar6,(COLORREF)(uVar6 >> 0x10));
  SetBkColor16(0x0,0x100);
  return CONCAT22(0x1050,*(undefined2 *)(iVar4 + 0x8e));
}



void __stdcall16far UI_Main_View_VCall_70_and_ShowWindow_b43c(u32 *param_1)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x70);
  (*(code *)*puVar1)();
  ShowWindow16(0x5,*(short *)((int)(u32 *)param_1 + 0x6));
  return;
}



// Iterates through the dialog's metadata list and updates control text using
// SetDlgItemText for each entry.

void __stdcall16far UI_SubDialog_Refresh_Labels_from_Metadata_b45e(u32 param_1)
{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iStack_8;
  undefined4 uStack_6;
  
  uVar3 = (undefined2)(param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(long *)(iVar2 + 0x90) != 0x0)
  {
    *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x90) + 0x14) =
         *(undefined2 *)(iVar2 + 0x6);
    uStack_6 = (undefined2 *)*(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x90) + 0x2);
    for (iStack_8 = 0x0; iStack_8 < *(int *)*(undefined4 *)(iVar2 + 0x90);
        iStack_8 += 0x1)
    {
      uVar4 = (undefined2)((ulong)uStack_6 >> 0x10);
      uVar1 = *(undefined4 *)((undefined2 *)uStack_6 + 0x1);
      SetDlgItemText((void *)CONCAT22((int)uVar1,(void *)*uStack_6),
                     (int16_t)((ulong)uVar1 >> 0x10),*(HWND16 *)(iVar2 + 0x6));
      uStack_6 = (undefined2 *)CONCAT22(uVar4,(undefined2 *)uStack_6 + 0x5);
    }
  }
  return;
}



// WARNING: Unable to use type for symbol uVar1
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Triggers a new specialized sub-dialog (Type 0xD or 0xE) based on the current
// operational state of the linked building.

void __stdcall16far UI_SubDialog_Trigger_Specialized_Dialog_by_State_b4c8(void *param_1)
{
  int iVar1;
  undefined2 uVar2;
  void *puVar2;
  undefined4 uVar1;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(long *)((int)(void *)param_1 + 0x90) != 0x0)
  {
    puVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
    uVar1 = *(undefined4 *)((int)(void *)param_1 + 0x90);
    iVar1 = *(int *)((int)uVar1 + 0xa);
    if (iVar1 == 0x4)
    {
      iVar1 = UI_Window_Focus_Manager_Logic(puVar2,0xfd9,0x0,0x0);
      if (iVar1 == 0x0)
      {
        uVar2 = 0xe;
LAB_1040_b50f:
        UI_Specialized_Dialog_Factory_Logic(puVar2,0x0,0x0,uVar2,0x0,0x0);
        return;
      }
    }
    else if (((0x0 < iVar1 + -0x5) && (!SBORROW2(iVar1 + -0x5,0x1))) &&
            (iVar1 + -0x6 < 0x2))
    {
      iVar1 = UI_Window_Focus_Manager_Logic(puVar2,0xfda,0x0,0x0);
      if (iVar1 == 0x0)
      {
        uVar2 = 0xd;
        goto LAB_1040_b50f;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// High-level command dispatcher for specialized sub-dialogs. Manages building refreshes
// (0xEB), entity link triggers (0x1790, 0x1824, 0x1830), and spawns new sub-dialog
// factory logic.

ulong __stdcall16far
UI_SubDialog_Complex_Command_Handler_b54a
          (undefined4 *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  void *pvVar6;
  undefined2 in_DX;
  void *pvVar7;
  void *ptr;
  undefined2 uVar8;
  long lVar9;
  void *pvVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 in_stack_0000ffe6;
  
  if (param_4._2_2_ == 0xea)
  {
    puVar2 = (undefined2 *)((int)*(undefined4 *)CONCAT22(param_2,param_1) + 0x5c);
    (*(code *)*puVar2)();
  }
  else if (param_4._2_2_ == 0xeb)
  {
    lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
    pvVar10 = (void *)param_1[0x24];
    if (pvVar10 == NULL)
    {
      return 0x0;
    }
    uVar8 = (undefined2)((ulong)pvVar10 >> 0x10);
    ptr = (void *)pvVar10;
    uVar11 = 0x1010;
    pvVar6 = pvVar10;
    pvVar7 = UI_Specialized_Dialog_Create_Helper
                       ((int)lVar9,(int)((ulong)lVar9 >> 0x10),
                        *(undefined2 *)((int)ptr + 0xa),
                        (int)*(undefined4 *)((int)ptr + 0x6),
                        (int)((ulong)*(undefined4 *)((int)ptr + 0x6) >> 0x10));
    *(int *)(param_1 + 0x24) = (int)pvVar6;
    *(undefined2 *)((int)param_1 + 0x92) = pvVar7;
    if (pvVar7 == NULL && *(int *)(param_1 + 0x24) == 0x0)
    {
      param_1[0x24] = pvVar10;
    }
    else
    {
      if (pvVar10 != NULL)
      {
        UI_Managed_Collection_dtor_Internal_a5d0(pvVar10);
        uVar11 = 0x1000;
        free_if_not_null(ptr);
      }
      puVar2 = (undefined2 *)((int)*(undefined4 *)CONCAT22(param_2,param_1) + 0x70);
      (*(code *)*puVar2)(uVar11,param_1,param_2);
    }
  }
  else
  {
    if (param_4._2_2_ == 0x1790)
    {
      pvVar10 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x32);
      iVar4 = UI_Component_Unpack_3Word_at_Offset_C_Logic((void *)pvVar10);
      iVar3 = UI_Window_Focus_Manager_Logic
                        ((void *)pvVar10,(int)((ulong)pvVar10 >> 0x10),0xfab,0x0,0x0);
      if (iVar3 != 0x0)
      {
        return 0x1;
      }
      if (iVar4 == 0x0)
      {
        uVar8 = (undefined2)((ulong)param_1[0x24] >> 0x10);
        iVar4 = (int)param_1[0x24];
        uVar12 = (undefined2)*(undefined4 *)(iVar4 + 0x6);
        uVar13 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x6) >> 0x10);
        uVar11 = 0x14;
      }
      else
      {
        uVar8 = (undefined2)((ulong)param_1[0x24] >> 0x10);
        iVar4 = (int)param_1[0x24];
        uVar12 = (undefined2)*(undefined4 *)(iVar4 + 0x6);
        uVar13 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x6) >> 0x10);
        uVar11 = 0x9;
      }
    }
    else if (param_4._2_2_ == 0x1824)
    {
      pvVar10 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x32);
      uVar1 = *(undefined4 *)((int)param_1[0x24] + 0x6);
      iVar4 = UI_Window_Focus_Manager_Logic
                        ((int)pvVar10,(int)((ulong)pvVar10 >> 0x10),0xfc5,(int)uVar1,
                         (int)((ulong)uVar1 >> 0x10));
      if (iVar4 != 0x0)
      {
        return 0x1;
      }
      uVar1 = *(undefined4 *)((int)param_1[0x24] + 0x6);
      uVar12 = (undefined2)uVar1;
      uVar13 = (undefined2)((ulong)uVar1 >> 0x10);
      uVar11 = 0x12;
      iVar4 = 0x0;
      uVar8 = 0x0;
    }
    else
    {
      if (param_4._2_2_ != 0x1830)
      {
        uVar5 = UI_SubDialog_Base_On_Command_Logic_7b3c
                          (param_1,param_2,param_3,(ushort)param_4,
                           CONCAT22(in_stack_0000ffe6,param_4._2_2_));
        return CONCAT22(in_DX,uVar5);
      }
      pvVar10 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x32);
      uVar1 = *(undefined4 *)((int)param_1[0x24] + 0x6);
      iVar4 = UI_Window_Focus_Manager_Logic
                        ((int)pvVar10,(int)((ulong)pvVar10 >> 0x10),0xfb6,(int)uVar1,
                         (int)((ulong)uVar1 >> 0x10));
      if (iVar4 != 0x0)
      {
        return 0x1;
      }
      uVar1 = *(undefined4 *)((int)param_1[0x24] + 0x6);
      uVar12 = (undefined2)uVar1;
      uVar13 = (undefined2)((ulong)uVar1 >> 0x10);
      uVar11 = 0xc;
      iVar4 = 0x0;
      uVar8 = 0x0;
    }
    UI_Specialized_Dialog_Factory_Logic(pvVar10,iVar4,uVar8,uVar11,uVar12,uVar13);
  }
  return 0x1;
}



// Closes the sub-dialog window and optionally triggers a virtual 'on-close'
// notification callback at offset 0x78.

void __stdcall16far UI_SubDialog_Close_and_Notify_b726(void *this_ptr,int notify)
{
  int in_stack_00000008;
  void *puVar1;
  
  if (in_stack_00000008 != 0x0)
  {
    puVar1 = (void *)((int)*_this_ptr + 0x78);
    (**(code **)puVar1)();
  }
  DestroyWindow16(*(HWND16 *)((int)this_ptr + 0x6));
  return;
}



void * __stdcall16far
UI_SubDialog_TypeB772_dtor_Scalar_Deleting_b74c(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for sub-dialog Type 0xBEBA (vtable 0xBEBA). Links to Resource 0xFAB and
// caches parent object IDs.

ushort __stdcall16far
UI_SubDialog_TypeBEBA_ctor_init_b7ee(void *this_ptr,void *entity_ptr,ushort parent_hwnd)
{
  undefined2 in_stack_0000000a;
  
  UI_SubDialog_TypeB772_ctor_Alternative_b0bc(this_ptr,entity_ptr,0x0);
  *(undefined4 *)((int)this_ptr + 0x94) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x98) = 0x0;
  *(undefined4 *)((int)this_ptr + 0xb0) = 0x0;
  *(undefined2 *)((int)this_ptr + 0xb4) = 0x0;
  *(undefined2 *)((int)this_ptr + 0xb6) = 0x0;
  *_this_ptr = 0xbeba;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  if (_parent_hwnd != 0x0)
  {
    *(undefined4 *)((int)this_ptr + 0xb0) = *(undefined4 *)(parent_hwnd + 0x6);
    *(undefined2 *)((int)this_ptr + 0xb4) = *(undefined2 *)(parent_hwnd + 0x14);
  }
  return (ushort)this_ptr;
}



ushort __stdcall16far
UI_SubDialog_Event_Handler_Dispatcher_b864
          (u32 *param_1,int *param_2,ushort param_3,uint param_4,int param_5)
{
  undefined2 *puVar1;
  ushort uVar2;
  
  if (param_5 == 0x2b)
  {
    if (*param_2 == 0x4)
    {
      UI_Control_Dispatch_Virtual_Event_9566(param_2);
    }
  }
  else
  {
    if (param_5 != 0x111)
    {
      uVar2 = UI_SubDialog_Special_Event_Dispatcher_b316
                        ((u32 *)param_1,(void *)((ulong)param_1 >> 0x10),(ushort)param_2
                         ,param_3,param_4);
      return uVar2;
    }
    puVar1 = (undefined2 *)((int)*param_1 + 0x7c);
    (*(code *)*puVar1)();
  }
  return 0x1;
}



void __stdcall16far UI_SubDialog_Invoke_vcall_80_Logic_Alternative_b8be(void *this_ptr)
{
  undefined2 in_stack_00000006;
  void *puVar1;
  
  puVar1 = (void *)((int)*_this_ptr + 0x80);
  (**(code **)puVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initialization and show logic for sub-dialog Type 0xBEBA. Instantiates 7 complex
// controls, syncs with planetary resources (ID 0x31), and positions the window.

void __stdcall16far UI_SubDialog_TypeBEBA_Show_Logic_b8d2(void *this_ptr)
{
  void *pvVar1;
  ushort uVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  astruct_13 *uVar5;
  undefined2 uVar6;
  uint parent_hwnd;
  uint uVar7;
  int iVar8;
  astruct_12 *uVar9;
  long lVar9;
  ulong uVar10;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000ffe4;
  
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x31);
  parent_hwnd = (uint)((ulong)lVar9 >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x98) = (int)lVar9;
  *(uint *)((int)this_ptr + 0x9a) = parent_hwnd;
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffe4,0xa));
  uVar7 = parent_hwnd | (uint)pvVar1;
  if (uVar7 == 0x0)
  {
    *(undefined4 *)((int)this_ptr + 0x94) = 0x0;
  }
  else
  {
    uVar2 = UI_SubItem_TypeC53E_ctor_init_bf3e(pvVar1,parent_hwnd);
    *(ushort *)((int)this_ptr + 0x94) = uVar2;
    *(uint *)((int)this_ptr + 0x96) = uVar7;
  }
  uVar10 = UI_SubItem_Sync_Update_Cycle_Logic_bfde
                     ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x94),
                      (void *)((ulong)*(undefined4 *)((int)this_ptr + 0x94) >> 0x10));
  iVar8 = (int)(uVar10 >> 0x10);
  pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffe4,0x42));
  pvVar1 = NULL;
  if (iVar8 != 0x0 || pvVar3 != NULL)
  {
    pvVar1 = UI_Complex_Control_ctor
                       (pvVar3,iVar8,0x1,0xa000a,0x0,0x81,0x80,0x10a,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar4 = allocate_memory(CONCAT22(in_stack_0000ffe4,0x42));
  pvVar3 = NULL;
  if (pvVar1 != NULL || pvVar4 != NULL)
  {
    pvVar3 = UI_Complex_Control_ctor
                       (pvVar4,pvVar1,0x1,0xa0028,0x0,0x85,0x84,0x10b,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar4 = allocate_memory(CONCAT22(in_stack_0000ffe4,0x42));
  pvVar1 = NULL;
  if (pvVar3 != NULL || pvVar4 != NULL)
  {
    pvVar1 = UI_Complex_Control_ctor
                       (pvVar4,pvVar3,0x1,0xa0046,0x0,0x87,0x86,0x10d,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar4 = allocate_memory(CONCAT22(in_stack_0000ffe4,0x42));
  pvVar3 = NULL;
  if (pvVar1 != NULL || pvVar4 != NULL)
  {
    pvVar3 = UI_Complex_Control_ctor
                       (pvVar4,pvVar1,0x1,0xa0064,0x0,0x89,0x88,0x10e,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar4 = allocate_memory(CONCAT22(in_stack_0000ffe4,0x42));
  pvVar1 = NULL;
  if (pvVar3 != NULL || pvVar4 != NULL)
  {
    pvVar1 = UI_Complex_Control_ctor
                       (pvVar4,pvVar3,0x1,0xa0082,0x0,0x83,0x82,0x10c,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar4 = allocate_memory(CONCAT22(in_stack_0000ffe4,0x42));
  pvVar3 = NULL;
  if (pvVar1 != NULL || pvVar4 != NULL)
  {
    pvVar3 = UI_Complex_Control_ctor
                       (pvVar4,pvVar1,0x1,0xa00d2,0x0,0x8b,0x8a,0xbbb,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffe4,0x42));
  if (pvVar3 == NULL && pvVar1 == NULL)
  {
    pvVar1 = NULL;
    pvVar3 = NULL;
  }
  else
  {
    pvVar3 = UI_Complex_Control_ctor
                       (pvVar1,pvVar3,0x1,0xa00a0,0x8e,0x8d,0x8c,0xbbc,
                        *(undefined2 *)((int)this_ptr + 0x6));
  }
  lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  iVar8 = (int)lVar9;
  Simulator_Get_Entity_Value_at_Offset_20_Logic(lVar9);
  iVar5 = Simulator_Get_Value_at_Offset_116_Logic(iVar8);
  if (iVar5 != 0x0)
  {
    Simulator_Validate_ID_8000001_Logic(iVar8);
    if (0x0 < iVar5)
    {
      Simulator_Update_Resource_8000001_Wrapper_2(iVar8);
      if (iVar5 == 0x0) goto LAB_1040_bb26;
    }
  }
  UI_Complex_Control_Enable_Window_9234(pvVar1,(ushort)pvVar3);
LAB_1040_bb26:
  uVar5 = (astruct_13 *)(astruct_13 *)*(undefined4 *)((int)this_ptr + 0x98);
  uVar6 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x98) >> 0x10);
  uVar5 = (astruct_13 *)&uVar5->field_0xa;
  SetWindowPos16(0x40,uVar5->field14_0x10,uVar5->field13_0xe,uVar5->field12_0xc,
                 *(int16_t *)CONCAT22(uVar6,uVar5),0x0,*(HWND16 *)((int)this_ptr + 0x6))
  ;
  return;
}



u16 __stdcall16far UI_Component_VCall_8_at_94_bb5a(u32 param_1)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x94) + 0x8);
  (*(code *)*puVar1)();
  return 0x0;
}



void __stdcall16far
UI_Component_Cleanup_B6_and_94_Logic_Alternative_bb78(void *this_ptr)
{
  undefined4 *puVar1;
  int iVar2;
  BOOL16 BVar3;
  astruct_11 *uVar4;
  undefined2 unaff_CS;
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
// Command handler for entity status dialogs. Manages specialized control IDs for entity
// actions (Demolish, etc.), property updates, and handles child window lifecycle (e.g.,
// help or details sub-dialogs).

ulong __stdcall16far
UI_SubDialog_Entity_Status_On_Command_bbe2
          (int param_1,undefined2 param_2,undefined2 param_3,ulong param_4)
{
  undefined2 *puVar1;
  BOOL16 BVar2;
  int iVar3;
  int iVar4;
  HWND16 HVar5;
  void *unaff_SS;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
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
LAB_1040_be78:
        uVar8 = UI_SubDialog_Complex_Command_Handler_b54a
                          (param_1,param_2,param_3,param_4);
        return uVar8;
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
      uVar10 = (undefined2)*(undefined4 *)(param_1 + 0xb0);
      uVar11 = (undefined2)((ulong)*(undefined4 *)(param_1 + 0xb0) >> 0x10);
      uVar9 = *(undefined2 *)((int)*(undefined4 *)(param_1 + 0x98) + 0x12);
    }
    else
    {
      if (param_4._2_2_ != 0x10d)
      {
        if (param_4._2_2_ == 0x10e)
        {
          lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
          uVar9 = (undefined2)lVar6;
          iVar3 = UI_Window_Focus_Manager_Logic
                            (lVar6,0xfc6,(int)*(undefined4 *)(param_1 + 0xb0),
                             (int)((ulong)*(undefined4 *)(param_1 + 0xb0) >> 0x10));
          if (iVar3 != 0x0)
          {
            return 0x1;
          }
          UI_Specialized_Dialog_Factory_Logic
                    (uVar9,(int)((ulong)lVar6 >> 0x10),0x0,0x0,0x13,
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
          goto LAB_1040_be78;
        }
        if ((*(int *)(param_1 + 0xb6) == 0x0) ||
           (BVar2 = IsWindow16(*(HWND16 *)(param_1 + 0xb6)), BVar2 == 0x0))
        {
          pvVar7 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                             (_p_UISubDialogTable,*(uint16_t *)(param_1 + 0x6),0x1b);
          *(undefined2 *)(param_1 + 0xb6) = *(undefined2 *)((int)pvVar7 + 0x6);
          ShowWindow16(0x1,*(short *)(param_1 + 0xb6));
          return 0x1;
        }
        HVar5 = *(HWND16 *)(param_1 + 0xb6);
        goto LAB_1040_bd39;
      }
      lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
      local_1c = (undefined2)((ulong)lVar6 >> 0x10);
      uVar10 = (undefined2)*(undefined4 *)(param_1 + 0xb0);
      uVar11 = (undefined2)((ulong)*(undefined4 *)(param_1 + 0xb0) >> 0x10);
      uVar9 = 0x71;
    }
    local_1e = (undefined2)lVar6;
    UI_Update_Entity_Action_Logic(local_1e,local_1c,uVar9,uVar10,uVar11);
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
LAB_1040_bd39:
  DestroyWindow16(HVar5);
  return 0x1;
}



void * __stdcall16far
UI_SubDialog_TypeBEBA_dtor_Scalar_Deleting_be94(void *this_ptr,uchar flags)
{
  byte in_stack_00000008;
  
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(this_ptr);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}



// Constructor for a specialized UI sub-item or control using vtable 0xC53E. Inherits
// from 0x3AA8 and 0x3AB0.

ushort __stdcall16far
UI_SubItem_TypeC53E_ctor_init_bf3e(void *this_ptr,ushort parent_hwnd)
{
  astruct_10 *uVar1;
  undefined2 in_stack_00000008;
  
  *_this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1008;
  *_this_ptr = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1008;
  *(undefined2 *)((int)this_ptr + 0x4) = in_stack_00000008;
  *_this_ptr = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1008;
  *(undefined4 *)((int)this_ptr + 0x6) = 0x0;
  *_this_ptr = 0xc53e;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  return (ushort)this_ptr;
}



// Internal destructor for specialized UI sub-items. Removes itself from the parent
// container and cleans up child windows. Reverts vtables to 0x389A.

void __stdcall16far UI_SubItem_TypeC53E_dtor_Internal_bf92(void *this_ptr)
{
  astruct_9 *uVar1;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0xc53e;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_Container_Remove_Item_at_Offset_4_Logic
            ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x6),
             (long)CONCAT22(in_stack_00000006,this_ptr));
  UI_Window_Manager_Cleanup_SubWindows_Logic
            ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x6));
  *_this_ptr = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1008;
  *_this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1008;
  return;
}



// Synchronizes a sub-item with its linked entity and triggers a full UI component
// update cycle.

ulong __stdcall16far
UI_SubItem_Sync_Update_Cycle_Logic_bfde(void *this_ptr,void *entity_ptr)
{
  astruct_8 *uVar1;
  void *uVar4;
  undefined4 *in_stack_00000008;
  void *puVar1;
  
  *(undefined4 *)((int)this_ptr + 0x6) = in_stack_00000008;
  puVar1 = (void *)((int)*in_stack_00000008 + 0x4);
  (**(code **)puVar1)();
  *(undefined2 *)((int)*(undefined4 *)((int)this_ptr + 0x6) + 0x22) =
       *(undefined2 *)((int)this_ptr + 0x4);
  uVar4 = (void *)UI_Component_Process_Update_Cycle_Logic
                            ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x6));
  return (ulong)uVar4;
}



// Calculates a dirty rectangle for a tree UI component based on the geometry of
// added/removed items and invalidates the region for repainting.

void __stdcall16far
UI_SubComponent_Tree_Invalidate_Rect_Logic_c028(undefined4 param_1,int param_2)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar5;
  int *piVar4;
  int iVar6;
  HWND16 unaff_SI;
  void *unaff_SS;
  BOOL16 erase;
  undefined2 uVar7;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  iVar6 = (int)param_1;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == 0x8)
  {
    GetClientRect16((int *)CONCAT22(unaff_SS,&local_a),*(HWND16 *)(iVar6 + 0x4));
    iVar3 = *(int *)((int)*(undefined4 *)(iVar6 + 0x6) + 0x16);
    local_a = *(int *)((int)*(undefined4 *)(iVar6 + 0x6) + 0x1a);
    local_8 = *(int *)((int)*(undefined4 *)(iVar6 + 0x6) + 0x1c);
    if (iVar3 != 0x0)
    {
      if (iVar3 < 0x2)
      {
        iVar2 = 0x1;
      }
      else
      {
        iVar2 = 0x2;
      }
      uVar1 = *(undefined4 *)
               ((iVar3 - iVar2) * 0x4 + (int)*(undefined4 *)(iVar6 + 0x6) + 0x2a);
      iVar3 = (int)uVar1;
      uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
      local_a = *(int *)(iVar3 + 0x22) + *(int *)CONCAT22(uVar5,(int *)(iVar3 + 0x1e));
    }
    local_6 = *(int *)((int)*(undefined4 *)(iVar6 + 0x6) + 0x1e);
    local_4 += -0x5;
  }
  else
  {
    if (param_2 != 0x9)
    {
      if (param_2 != 0xa)
      {
        return;
      }
      iVar3 = (int)*(undefined4 *)(iVar6 + 0x6) + 0x2a;
      if (*(int *)(iVar6 + 0x8) == 0x0 && iVar3 == 0x0)
      {
        return;
      }
      uVar1 = *(undefined4 *)
               ((*(int *)((int)*(undefined4 *)(iVar6 + 0x6) + 0x16) + -0x1) * 0x4 +
               iVar3);
      iVar3 = (int)uVar1;
      uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
      piVar4 = (int *)CONCAT22(uVar5,(int *)(iVar3 + 0x1e));
      local_8 = *(int *)(iVar3 + 0x20) + -0x8;
      local_a = *piVar4;
      local_6 = *(int *)(iVar3 + 0x22) + *piVar4;
      local_4 = *(int *)(iVar3 + 0x20);
      uVar7 = *(undefined2 *)(iVar6 + 0x4);
      erase = 0x0;
      goto LAB_1040_c19d;
    }
    local_a = 0x0;
    local_8 = 0x0;
    local_6 = 0x0;
    local_4 = 0x0;
    GetClientRect16((int *)CONCAT22(unaff_SS,&local_a),*(HWND16 *)(iVar6 + 0x4));
    local_a = *(int *)((int)*(undefined4 *)(iVar6 + 0x6) + 0x1a);
    local_6 = *(int *)((int)*(undefined4 *)(iVar6 + 0x6) + 0x1e);
    local_4 += -0x5;
    iVar3 = *(int *)((int)*(undefined4 *)(iVar6 + 0x6) + 0x16);
    if (0x0 < iVar3)
    {
      uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x6) + iVar3 * 0x4 + 0x26);
      iVar3 = (int)uVar1;
      uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
      local_8 = *(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0x24);
    }
  }
  uVar7 = *(undefined2 *)(iVar6 + 0x4);
  erase = 0x1;
LAB_1040_c19d:
  InvalidateRect16(erase,(void *)CONCAT22(uVar7,unaff_SS),unaff_SI);
  return;
}



// OnPaint handler for tree-like UI components. Draws a green background frame and
// dispatches calls to draw connecting lines between tree nodes.

void __stdcall16far UI_SubComponent_Tree_OnPaint_Logic_c226(void *param_1)
{
  HPEN16 obj;
  HGDIOBJ16 HVar1;
  void *tree_ptr;
  ushort hdc;
  void *unaff_SS;
  HDC16 in_stack_0000ffb8;
  int local_32;
  int local_30;
  int local_2e;
  int local_2c;
  undefined2 local_2a;
  int local_28;
  HBRUSH16 local_26;
  HDC16 local_24;
  undefined1 local_22 [0x20];
  
  hdc = (ushort)((ulong)param_1 >> 0x10);
  tree_ptr = (void *)param_1;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)((int)tree_ptr + 0x4));
  local_26 = CreateSolidBrush16(0x8000);
  GetClientRect16((int *)CONCAT22(unaff_SS,&local_32),*(HWND16 *)((int)tree_ptr + 0x4));
  local_28 = *(int *)((int)*(undefined4 *)((int)tree_ptr + 0x6) + 0x1a);
  local_2a = *(undefined2 *)((int)*(undefined4 *)((int)tree_ptr + 0x6) + 0x1c);
  local_30 += 0x2;
  local_32 = local_28 + -0xa;
  local_2e += -0x2;
  local_2c += -0x2;
  FRAMERECT(local_26,(void *)CONCAT22(local_24,unaff_SS),in_stack_0000ffb8);
  DeleteObject16(local_26);
  obj = CreatePen16(-0x7f80,0x0,0x2);
  HVar1 = SelectObject16(0x1538,obj);
  UI_Tree_Draw_Horizontal_Connection_c302(tree_ptr,hdc);
  UI_Tree_Draw_Vertical_Connections_c38e(tree_ptr,hdc);
  HVar1 = SelectObject16(0x1538,HVar1);
  DeleteObject16(HVar1);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)tree_ptr + 0x4))
  ;
  return;
}



// Renders a horizontal connection line between the first and last child nodes in a UI
// tree grouping.

void __stdcall16far UI_Tree_Draw_Horizontal_Connection_c302(void *tree_ptr,ushort hdc)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  short in_stack_00000008;
  
  iVar4 = *(int *)((int)*(undefined4 *)((int)tree_ptr + 0x6) + 0x16);
  if (0x1 < iVar4)
  {
    uVar5 = (undefined2)((ulong)*(undefined4 *)((int)tree_ptr + 0x6) >> 0x10);
    puVar2 = (undefined4 *)((int)*(undefined4 *)((int)tree_ptr + 0x6) + 0x2a);
    uVar1 = *(undefined4 *)CONCAT22(uVar5,puVar2);
    iVar3 = (int)uVar1;
    uVar6 = (undefined2)((ulong)uVar1 >> 0x10);
    MoveTo16(*(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0x24),
             *(int *)(iVar3 + 0x22) / 0x2 +
             *(int *)CONCAT22(uVar6,(int *)(iVar3 + 0x1e)),in_stack_00000008);
    uVar1 = puVar2[iVar4 + -0x1];
    iVar4 = (int)uVar1;
    uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
    LineTo16(*(HDC16 *)(iVar4 + 0x20),
             *(int *)(iVar4 + 0x22) / 0x2 +
             *(int *)CONCAT22(uVar5,(int *)(iVar4 + 0x1e)),in_stack_00000008);
  }
  return;
}
