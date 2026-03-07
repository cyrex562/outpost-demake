/*
 * Source: outpost.c
 * Chunk: 50/117
 * Original lines: 56511-57693
 * Boundaries: top-level declarations/definitions only
 */




void __stdcall16far
UI_Component_Handle_State_Change_and_Invalidate_157c(u32 param_1,int param_2)
{
  BOOL16 BVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  HWND16 hwnd;
  undefined1 local_a [0x6];
  u16 local_4;
  
  iVar2 = (int)param_1;
  uVar3 = (undefined2)(param_1 >> 0x10);
  if (param_2 == 0x1)
  {
    *(undefined4 *)(iVar2 + 0x14) = 0x0;
    return;
  }
  if (param_2 == 0x2)
  {
    hwnd = *(HWND16 *)(iVar2 + 0x4);
    BVar1 = IsIconic16(hwnd);
    if (BVar1 == 0x0)
    {
      GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_a),*(HWND16 *)(iVar2 + 0x4))
      ;
      local_4 = 0x9a;
      InvalidateRect16(0x0,(void *)CONCAT22(*(undefined2 *)(iVar2 + 0x4),unaff_SS),hwnd)
      ;
      return;
    }
  }
  return;
}



// WM_PAINT handler for a UI component. Renders its internal bitmap with transparency
// and handles iconic status icon drawing.

void __stdcall16far UI_Component_OnPaint_Render_Internal_Bitmap_v3_15de(long context)
{
  undefined2 *puVar1;
  BOOL16 BVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  long lVar6;
  HDC16 local_24;
  undefined1 local_22 [0x20];
  
  uVar4 = (undefined2)((ulong)context >> 0x10);
  iVar3 = (int)context;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)(iVar3 + 0x4));
  BVar2 = IsIconic16(*(HWND16 *)(iVar3 + 0x4));
  if (BVar2 == 0x0)
  {
    uVar5 = 0x1010;
    lVar6 = UI_Element_Get_Indexed_Data_at_Offset_26_Logic
                      ((void *)(void *)*(undefined4 *)(iVar3 + 0x14));
    if (lVar6 != 0x0)
    {
      uVar5 = 0x1008;
      Bitmap_Object_Blit_Transparent_Logic
                ((void *)(void *)*(undefined4 *)(iVar3 + 0x18),
                 (void *)((ulong)*(undefined4 *)(iVar3 + 0x18) >> 0x10),
                 (void *)((int)*(undefined4 *)(iVar3 + 0x14) + 0x76));
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x18) + 0x4);
    (*(code *)*puVar1)(uVar5,*(undefined4 *)(iVar3 + 0x18),0x0,0x0,&local_24);
  }
  else
  {
    UI_Status_Icon_Draw_Logic(context);
  }
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar3 + 0x4));
  return;
}



// Drawing logic for a status icon in the UI. Fills a rectangle and draws an icon
// retrieved from an internal component.

void __stdcall16far UI_Status_Icon_Draw_Logic(long context)
{
  HDC16 hdc;
  undefined2 *puVar1;
  astruct_384 *uVar2;
  undefined2 uVar3;
  void *unaff_SS;
  u32 *hdc_00;
  undefined1 local_e [0x8];
  HBRUSH16 HStack_6;
  HICON16 HStack_4;
  
  if (p_FreeBlockListHead == NULL)
  {
    uVar3 = (undefined2)((ulong)context >> 0x10);
    uVar2 = (astruct_384 *)context;
    hdc_00 = (u32 *)uVar2->field19_0x14;
    puVar1 = (undefined2 *)((int)*uVar2->field19_0x14 + 0x2c);
    HStack_4 = (*(code *)*puVar1)();
    if (HStack_4 != 0x0)
    {
      HStack_6 = GetStockObject16(0x4);
      GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_e),uVar2->field4_0x4);
      hdc = (HDC16)((u32 *)uVar2->field19_0x14)[0x1f];
      FillRect16(HStack_6,(void *)CONCAT22(hdc,unaff_SS),(HDC16)hdc_00);
      DrawIcon16(HStack_4,0x2,0x2,hdc);
    }
  }
  return;
}



void * __stdcall16far
UI_PC_PopupMenu_Internal_SubComponent_dtor_Scalar_Deleting_170a
          (void *param_1,byte param_2)
{
  UI_PC_PopupMenu_Internal_SubComponent_dtor((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for the Colony Morale Dialog component. Initializes internal state and
// sets vtable to 0x1E7A.

long __stdcall16far
UI_Colony_Morale_Dialog_ctor(astruct_383 *param_1,undefined2 param_2,undefined4 param_3)
{
  astruct_383 *uVar1;
  undefined2 uVar2;
  
  UI_SubDialog_Base_ctor_init_7728
            (param_1,0x1,0xfcd0000,*(undefined2 *)((int)param_3 + 0x8));
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_383 *)param_1;
  uVar1->field141_0x8e = 0x0;
  uVar1->field142_0x92 = 0x0;
  uVar1->field143_0x96 = 0x0;
  *(char **)param_1 = (char *)s_512_bmp_1050_1e77 + 0x3;
  uVar1->field2_0x2 = 0x1020;
  return (long)param_1;
}



void __stdcall16far UI_Window_Cleanup_SubWindow_at_8C_and_Destroy_1780(u32 *param_1)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x6c);
  (*(code *)*puVar1)();
  UI_Window_Destroy_SubWindow_at_8C_8212((u32 *)param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Colony_Morale_Dialog_Initialize_and_Layout_179c(void *param_1)
{
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  int16_t iVar4;
  HWND16 hwnd;
  uint extraout_DX;
  uint uVar5;
  uint uVar6;
  int16_t *piVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  void *pvVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined2 uVar12;
  void *this_ptr;
  undefined2 uVar13;
  undefined1 local_178 [0x102];
  int16_t local_76;
  int iStack_74;
  undefined4 local_72;
  int local_6e;
  int iStack_6c;
  undefined4 local_6a;
  HWND16 local_66;
  int16_t local_62;
  int16_t local_5e;
  void *local_4e;
  uint local_4c;
  int local_4a;
  int iStack_48;
  HWND16 local_46;
  int local_44;
  int iStack_42;
  undefined4 local_40;
  void *local_3c;
  undefined2 uStack_3a;
  undefined2 local_38;
  undefined4 *local_36;
  void *local_32;
  undefined1 local_2e [0x12];
  int local_1c;
  int iStack_1a;
  undefined4 local_18;
  int local_14;
  int local_12;
  int local_10;
  undefined2 uStack_e;
  int16_t *local_c;
  uint local_8;
  void *local_6;
  int iStack_4;
  
  this_ptr = (void *)param_1;
  uVar13 = (undefined2)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  pvVar9 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
  iStack_4 = (int)((ulong)pvVar9 >> 0x10);
  local_6 = (void *)pvVar9;
  iVar2 = Resource_Category_Get_Mapped_Offset_Value_Logic(local_6,iStack_4);
  local_8 = (uint)(iVar2 == 0x0);
  iVar2 = Resource_Category_Get_Mapped_Offset_Value_Logic(local_6,iStack_4);
  if (iVar2 != 0x0)
  {
    local_8 = 0x0;
  }
  lVar10 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x39);
  uVar12 = (undefined2)((ulong)lVar10 >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x8e) = (int)lVar10;
  *(undefined2 *)((int)this_ptr + 0x90) = uVar12;
  uVar8 = *(undefined2 *)((int)this_ptr + 0x8e);
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ptr + 0x8e) + 0x10);
  (*(code *)*puVar1)(0x1010,uVar8,uVar12,local_8);
  uVar5 = extraout_DX;
  local_4e = allocate_memory(CONCAT22(uVar8,0x12));
  uVar6 = uVar5 | (uint)local_4e;
  local_4c = uVar5;
  if (uVar6 == 0x0)
  {
    *(undefined4 *)((int)this_ptr + 0x92) = 0x0;
  }
  else
  {
    pvVar3 = UI_Control_Type7_ctor_init_Res39_1eea
                       (local_4e,(long)param_1,*(int *)((int)this_ptr + 0x6));
    *(undefined2 *)((int)this_ptr + 0x92) = pvVar3;
    *(uint *)((int)this_ptr + 0x94) = uVar6;
  }
  local_c = (int16_t *)
            CONCAT22((int)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10),
                     (int16_t *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0xa));
  lVar10 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uStack_e = (undefined2)((ulong)lVar10 >> 0x10);
  local_10 = (int)lVar10;
  GetClientRect16((int *)CONCAT22(unaff_SS,&local_1c),*(HWND16 *)((int)this_ptr + 0x6));
  uVar12 = 0x4;
  iVar4 = GetSystemMetrics16(0x4);
  uVar8 = (undefined2)((ulong)local_c >> 0x10);
  piVar7 = (int16_t *)local_c;
  piVar7[0x3] = iVar4 + local_18._2_2_;
  local_12 = *(int *)(local_10 + 0xa);
  local_14 = *(int *)(local_10 + 0xc);
  piVar7[0x1] = (local_14 - piVar7[0x3]) / 0x2;
  *local_c = (local_12 - piVar7[0x2]) / 0x2;
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_2e),0x1,0x0,0x100);
  local_38 = 0x0;
  while( true )
  {
    local_32 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                         ((undefined1 *)CONCAT22(unaff_SS,local_2e));
    iVar2 = (int)((ulong)local_32 >> 0x10);
    if (iVar2 == 0x0 && (void *)local_32 == NULL) break;
    local_36 = (undefined4 *)*(long *)((int)(void *)local_32 + 0x10);
    if (local_36 != NULL)
    {
      strcat_append((char *)CONCAT22(uVar13,(char *)((int)this_ptr + 0x10)),
                    (char *)*local_36);
    }
  }
  iVar2 = UI_Colony_Morale_Dialog_Check_State_Logic(this_ptr);
  *(int *)((int)this_ptr + 0x96) = iVar2;
  iVar2 = Resource_Category_Get_Mapped_Offset_Value_Logic(local_6,iStack_4);
  if ((iVar2 == 0x0) || (*(int *)((int)this_ptr + 0x96) != 0x0))
  {
    *(undefined2 *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x2c) = 0x0;
    puVar11 = (undefined1 *)0x1010;
    local_66 = GetDlgItem16(0x175,*(short *)((int)this_ptr + 0x6));
    if (local_8 != 0x0)
    {
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),
                 CONCAT22(local_178,0x100),CONCAT22(0x72d,unaff_SS));
      puVar11 = local_178;
      SetWindowText16((undefined1 *)CONCAT22(unaff_SS,puVar11),local_66);
    }
    pvVar9 = MakeProcInstance16((HANDLE16)PTR_DAT_1050_0000_1050_038c,
                                (void *)CONCAT22(puVar11,(void *)0x1020));
    uStack_3a = (undefined2)((ulong)pvVar9 >> 0x10);
    local_3c = (void *)pvVar9;
    GetWindowRect16((int *)CONCAT22(unaff_SS,&local_6e),local_66);
    local_72 = local_6a;
    local_62 = (int)local_6a - local_6e;
    local_5e = local_6a._2_2_ - iStack_6c;
    local_76 = -(local_62 - ((int16_t *)local_c)[0x2]) / 0x2;
    iStack_74 = iStack_6c;
    iVar4 = GetSystemMetrics16(0x4);
    iStack_74 -= iVar4;
    MoveWindow16(0x0,local_5e,local_62,iStack_74,local_76,local_66);
  }
  else
  {
    media_play_from_full_resource_ptr_logic((void *)_p_UIPanelContainer,0x9d0001);
    *(int *)((int)this_ptr + 0x8c) = iVar2;
    pvVar9 = MakeProcInstance16((HANDLE16)PTR_DAT_1050_0000_1050_038c,
                                (void *)CONCAT22(uVar12,(void *)0x1020));
    uStack_3a = (undefined2)((ulong)pvVar9 >> 0x10);
    local_3c = (void *)pvVar9;
  }
  EnumChildWindows16(NULL,(void *)CONCAT22(uStack_3a,local_3c),
                     *(HWND16 *)((int)this_ptr + 0x6));
  FreeProcInstance16((void *)CONCAT22(uStack_3a,local_3c));
  local_46 = GetDlgItem16(0x1,*(short *)((int)this_ptr + 0x6));
  GetWindowRect16((int *)CONCAT22(unaff_SS,&local_1c),local_46);
  local_40 = local_18;
  iVar2 = (int)local_18 - local_1c;
  _local_4a = CONCAT22(iVar2,local_18._2_2_ - iStack_1a);
  local_44 = -(iVar2 - ((int16_t *)local_c)[0x2]) / 0x2;
  iStack_42 = iStack_1a;
  iVar4 = GetSystemMetrics16(0x4);
  iStack_42 -= iVar4;
  uVar8 = unaff_SS;
  if (*(int *)((int)this_ptr + 0x96) == 0x0)
  {
    if (local_8 == 0x0) goto LAB_1020_1b24;
    hwnd = 0x72e;
    puVar11 = local_178;
    uVar12 = 0x100;
  }
  else
  {
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_178,0x100),
               CONCAT22(0x72f,unaff_SS));
    hwnd = GetDlgItem16(0x175,*(short *)((int)this_ptr + 0x6));
    puVar11 = local_178;
    SetWindowText16((undefined1 *)CONCAT22(unaff_SS,puVar11),hwnd);
    uVar12 = 0x3fe;
  }
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(puVar11,uVar12),
             CONCAT22(hwnd,uVar8));
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,local_178),local_46);
LAB_1020_1b24:
  MoveWindow16(0x0,(int16_t)_local_4a,(int16_t)((ulong)_local_4a >> 0x10),iStack_42,
               local_44,local_46);
  uVar8 = (undefined2)((ulong)local_c >> 0x10);
  piVar7 = (int16_t *)local_c;
  SetWindowPos16(0x44,piVar7[0x3],piVar7[0x2],piVar7[0x1],*local_c,0x0,
                 *(HWND16 *)((int)this_ptr + 0x6));
  return;
}



// Internal destructor for the Colony Morale Dialog. Cleans up internal objects and
// refreshes morale logic.

void __stdcall16far UI_Colony_Morale_Dialog_dtor_Internal(long this_ref)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ref >> 0x10);
  iVar2 = (int)this_ref;
  if (*(int *)(iVar2 + 0x94) != 0x0 || (undefined4 *)*(int *)(iVar2 + 0x92) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)(iVar2 + 0x92);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)(iVar2 + 0x92) = 0x0;
  UI_Colony_Morale_Dialog_Refresh_Logic((void *)(void *)*(undefined4 *)(iVar2 + 0x8e));
  *(undefined4 *)(iVar2 + 0x8e) = 0x0;
  return;
}



// Invokes a virtual function to retrieve the palette from the dialog's internal bitmap
// component.

int __stdcall16far UI_Colony_Morale_Dialog_Get_Internal_Palette_vcall(long this_ref)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ref + 0x92) + 0x8);
  (*(code *)*puVar1)();
  return 0x0;
}



// Processes user interactions (like clicks) for the Colony Morale Dialog. Performs hit
// testing and conditionally opens sub-dialogs.

void __stdcall16far
UI_Colony_Morale_Dialog_Handle_Interaction(int offset,int segment,int x,int y)
{
  undefined2 *puVar1;
  bool bVar2;
  int in_AX;
  HWND16 enable;
  BOOL16 BVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint in_DX;
  uint uVar6;
  undefined2 uVar7;
  undefined2 in_stack_0000fff0;
  undefined4 uStack_c;
  
  bVar2 = false;
  UI_Component_HitTest_Wrapper(CONCAT22(segment,offset),CONCAT22(y,x));
  if (in_AX != 0x0)
  {
    if (in_AX < 0x2)
    {
      bVar2 = true;
    }
    else
    {
      enable = GetDlgItem16(0x1,*(short *)(offset + 0x6));
      UI_Component_Notify_Listeners_Type_D_Logic
                ((void *)(void *)*(undefined4 *)(offset + 0x8e));
      BVar3 = EnableWindow16(0x1,enable);
      UI_Component_Invoke_Callback_at_Offset_26_Logic
                ((void *)(void *)*(undefined4 *)(offset + 0x8e));
      if ((BVar3 == 0x0) && (bVar2 = true, *(int *)(offset + 0x96) == 0x0))
      {
        EnableWindow16(0x0,enable);
      }
    }
  }
  if (bVar2)
  {
    uVar7 = 0x1000;
    pvVar4 = allocate_memory(CONCAT22(in_stack_0000fff0,0xb4));
    uVar6 = in_DX | (uint)pvVar4;
    if (uVar6 == 0x0)
    {
      puVar5 = NULL;
      uVar6 = 0x0;
    }
    else
    {
      uVar7 = 0x1040;
      puVar5 = (undefined4 *)
               UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                         (pvVar4,in_DX,*(undefined2 *)(offset + 0x6),0x30,0x2,0x57b,
                          0x62a);
    }
    uStack_c = (undefined4 *)CONCAT22(uVar6,puVar5);
    puVar1 = (undefined2 *)((int)*uStack_c + 0x74);
    (*(code *)*puVar1)(uVar7,puVar5,uVar6);
  }
  return;
}



// Executes a specific command within the Morale Dialog, potentially triggering
// sub-dialogs or posting UI messages.

int __stdcall16far UI_Colony_Morale_Dialog_Execute_Command(undefined4 param_1)
{
  undefined2 *puVar1;
  int in_AX;
  void *pvVar2;
  undefined4 *puVar3;
  uint in_DX;
  uint uVar4;
  undefined2 uVar5;
  undefined2 in_stack_0000fff2;
  undefined4 uStack_a;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((int)param_1 + 0x96) == 0x0)
  {
    UI_Component_Invoke_Callback_at_Offset_26_Logic
              ((void *)(void *)*(undefined4 *)((int)param_1 + 0x8e));
    if (in_AX == 0x0)
    {
      uVar5 = 0x1000;
      pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff2,0xb4));
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
                           (pvVar2,in_DX,g_ParentHWND,0x30,0x2,0x57b,0x62a);
      }
      uStack_a = (undefined4 *)CONCAT22(uVar4,puVar3);
      puVar1 = (undefined2 *)((int)*uStack_a + 0x74);
      (*(code *)*puVar1)(uVar5,puVar3,uVar4);
      return 0x0;
    }
    PostMessage16(0x0,0x0,0xde,(long)CONCAT22(in_stack_0000fff2,g_ParentHWND));
  }
  return 0x1;
}



// Utility wrapper to set the text of a dialog control based on an ID stored in a
// component struct.

void __stdcall16far
UI_Dialog_Set_Control_Text_Wrapper(long context,char *text,HWND16 parent_hwnd)
{
  HWND16 hwnd;
  HWND16 in_stack_0000000c;
  
  hwnd = GetDlgItem16(in_stack_0000000c,*(short *)((int)context + 0x6));
  SetWindowText16(_text,hwnd);
  return;
}



// Handles the closing of the Morale Dialog, ensuring internal state is processed and
// the window is destroyed.

void __stdcall16far UI_Colony_Morale_Dialog_Handle_Close(long context,int arg2)
{
  int iVar1;
  undefined2 unaff_BP;
  undefined2 uVar2;
  
  if (arg2 != 0x0)
  {
    uVar2 = (undefined2)((ulong)context >> 0x10);
    iVar1 = UI_Colony_Morale_Dialog_Execute_Command(context);
    if (iVar1 != 0x0)
    {
      if (*(int *)((int)context + 0x96) != 0x0)
      {
        PostMessage16(0x0,0x0,0xee,(long)CONCAT22(unaff_BP,g_ParentHWND));
      }
      DestroyWindow16(*(HWND16 *)((int)context + 0x6));
    }
  }
  return;
}



// Thin wrapper for the component's rect-array hit testing logic.

void __stdcall16far UI_Component_HitTest_Wrapper(long context,long coords)
{
  void *pvVar1;
  
  pvVar1 = (void *)*(undefined4 *)((int)context + 0x8e);
  UI_Component_HitTest_Rect_Array_Logic
            ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10),(int)coords);
  return;
}



// Checks the internal state or type count for the Morale Dialog to determine if certain
// actions are valid.

int __stdcall16far UI_Colony_Morale_Dialog_Check_State_Logic(void *context)
{
  int in_AX;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)*(undefined4 *)((int)context + 0x8e) + 0x30) == 0x1)
  {
    return 0x1;
  }
  if ((*(int *)((int)*(undefined4 *)((int)context + 0x8e) + 0x30) < 0x3) &&
     (UI_Component_Invoke_Callback_at_Offset_26_Logic
                ((void *)(void *)*(undefined4 *)((int)context + 0x8e)), in_AX == 0x0))
  {
    return 0x1;
  }
  return 0x0;
}



u16 __stdcall16far
UI_Window_Destroy_if_ID_175_1dea(u16 param_1,u16 param_2,HWND16 param_3)
{
  BOOL16 BVar1;
  uint16_t uVar2;
  
  BVar1 = IsWindow16(param_3);
  if (BVar1 != 0x0)
  {
    uVar2 = GetWindowWord16(-0xc,param_3);
    if (uVar2 == 0x175)
    {
      DestroyWindow16(param_3);
      return 0x0;
    }
  }
  return 0x1;
}



undefined2 __stdcall16far
UI_Window_Destroy_if_Not_ID_1_or_175_1e1e
          (undefined2 param_1,undefined2 param_2,HWND16 param_3)
{
  BOOL16 BVar1;
  uint16_t uVar2;
  
  BVar1 = IsWindow16(param_3);
  if (BVar1 != 0x0)
  {
    uVar2 = GetWindowWord16(-0xc,param_3);
    if ((uVar2 != 0x1) && (uVar2 != 0x175))
    {
      DestroyWindow16(param_3);
    }
  }
  return 0x1;
}



// An alternative scalar deleting destructor for UI views.

long __stdcall16far
UI_View_dtor_Scalar_Deleting_Alternative_1e54(long this_ref,byte flags)
{
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for UI Control Type 7, specifically initialized with Resource ID 0x39.
// Sets vtable to 0x2518.

void * __stdcall16far
UI_Control_Type7_ctor_init_Res39_1eea(void *this,long parent_id,int id)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  long lVar3;
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(int *)((int)this + 0x4) = id;
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(long *)((int)this + 0xa) = parent_id;
  *_this = (char *)s_218_bmp_1050_2516 + 0x2;
  *(undefined2 *)((int)this + 0x2) = 0x1020;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x39);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  *(undefined2 *)((int)this + 0x6) = (int)lVar3;
  *(undefined2 *)((int)this + 0x8) = uVar2;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x6) + 0x4);
  (*(code *)*puVar1)(0x1010,*(undefined2 *)((int)this + 0x6),uVar2,0x0,this,
                     in_stack_00000006);
  return this;
}



// Internal destructor for UI Control Type 7. Removes the item from its parent container
// and reverts vtables.

void __stdcall16far UI_Control_Type7_dtor_Internal_Cleanup_logic_1f74(long this_ref)
{
  astruct_382 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_382 *)this_ref;
  *(char **)this_ref = (char *)s_218_bmp_1050_2516 + 0x2;
  uVar1->field2_0x2 = 0x1020;
  UI_Container_Remove_Item_at_Offset_4_Logic((void *)(void *)uVar1->field5_0x6,this_ref)
  ;
  *(char **)this_ref = (char *)s_0_020_1050_3ab0;
  uVar1->field2_0x2 = 0x1008;
  *(char **)this_ref = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  return;
}



// Handles specific state change events (1, 0xD) for a UI component, triggering
// invalidation of its window rectangle.

void __stdcall16far
UI_Component_Handle_State_Change_Invalidate_Rect_1fb2(long context,int event_id)
{
  int iVar1;
  undefined2 uVar2;
  void *unaff_SS;
  undefined1 local_e [0x8];
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  iVar1 = (int)context;
  uVar2 = (undefined2)((ulong)context >> 0x10);
  if (event_id == 0x1)
  {
    *(undefined4 *)(iVar1 + 0x6) = 0x0;
    return;
  }
  if (event_id != 0xd)
  {
    return;
  }
  GetWindowRect16((undefined1 *)CONCAT22(unaff_SS,local_e),*(HWND16 *)(iVar1 + 0x4));
  uStack_6 = 0x46;
  uStack_4 = 0x5f;
  InvalidateRect16(0x0,(void *)CONCAT22(*(undefined2 *)(iVar1 + 0x4),unaff_SS),0x0);
  return;
}



void __stdcall16far UI_Linear_Scale_Component_OnPaint_Logic_2020(void *param_1)
{
  undefined2 *puVar1;
  void *pvVar2;
  HPEN16 HVar3;
  HGDIOBJ16 obj;
  HBRUSH16 HVar4;
  HGDIOBJ16 obj_00;
  HGDIOBJ16 HVar5;
  int *rect_coords;
  HPALETTE16 obj_01;
  undefined2 uVar6;
  undefined2 uVar7;
  void *scale_ptr;
  u16 unused2;
  undefined2 uVar8;
  int unaff_SS;
  undefined4 uVar9;
  int local_3a;
  undefined1 local_38 [0x6];
  int local_32;
  int iStack_30;
  undefined4 local_2e;
  int local_2a;
  undefined4 *local_28;
  HDC16 local_24;
  undefined1 local_22 [0x20];
  
  unused2 = (u16)((ulong)param_1 >> 0x10);
  scale_ptr = (void *)param_1;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)((int)scale_ptr + 0x4));
  local_28 = (undefined4 *)
             UI_Component_Get_Value_at_Offset_16_Logic_2
                       ((void *)(void *)*(undefined4 *)((int)scale_ptr + 0x6));
  puVar1 = (undefined2 *)((int)*local_28 + 0x8);
  uVar9 = (*(code *)*puVar1)(0x1010,(undefined4 *)local_28,
                             (int)((ulong)local_28 >> 0x10),&local_24);
  uVar6 = (undefined2)((ulong)uVar9 >> 0x10);
  *(undefined2 *)((int)scale_ptr + 0x10) = (int)uVar9;
  local_2a = *(int *)((int)*(undefined4 *)((int)scale_ptr + 0x6) + 0x30);
  local_2e = *(undefined4 *)
              *(undefined4 *)((int)*(undefined4 *)((int)scale_ptr + 0x6) + 0x12);
  local_32 = 0x0;
  iStack_30 = 0x14;
  uVar8 = 0x1008;
  zero_init_struct_6bytes(local_38);
  for (local_3a = 0x0; local_3a < local_2a; local_3a += 0x1)
  {
    pvVar2 = get_with_lazy_init((void *)(void *)*(undefined4 *)
                                                 (local_3a * 0x4 + (int)local_2e));
    uVar7 = uVar6;
    Math_Center_Value_in_100_Range_Alternative_2286
              ((u16)scale_ptr,unused2,&local_32,unaff_SS);
    pack_3words_reverse(local_38,unaff_SS,0x0,local_32);
    Bitmap_Object_Blit_Transparent_Logic
              ((undefined4 *)local_28,(void *)((ulong)local_28 >> 0x10),local_38);
    uVar8 = 0x1010;
    UI_Component_Set_Indexed_Rect_at_Offset_1A_Logic
              ((void *)(void *)*(undefined4 *)((int)scale_ptr + 0x6),
               (int)((ulong)*(undefined4 *)((int)scale_ptr + 0x6) >> 0x10),
               *(int *)((int)pvVar2 + 0x8) + local_32,
               *(int *)((int)pvVar2 + 0x4) + iStack_30,local_32,iStack_30);
    iStack_30 += (-(uint)(local_3a == 0x0) & 0x5) + 0x14 + *(int *)((int)pvVar2 + 0x4);
    uVar6 = uVar7;
  }
  puVar1 = (undefined2 *)((int)*local_28 + 0x4);
  (*(code *)*puVar1)(uVar8,(undefined4 *)local_28,(int)((ulong)local_28 >> 0x10),0x0,0x0
                     ,&local_24);
  HVar3 = CreatePen16(0x25,0x100,0x1);
  obj = SelectObject16(0x1538,HVar3);
  HVar4 = CreateSolidBrush16(0x25);
  obj_00 = SelectObject16(0x1538,HVar4);
  HVar5 = obj_00;
  UI_Draw_Linear_Scale_Ticks_Alternative_229c(scale_ptr,unused2);
  UI_Component_Invoke_Callback_at_Offset_26_Logic
            ((void *)(void *)*(undefined4 *)((int)scale_ptr + 0x6));
  if (HVar5 == 0x0)
  {
    HVar5 = SelectObject16(0x1010,obj);
    DeleteObject16(HVar5);
    HVar5 = SelectObject16(0x1538,obj_00);
    DeleteObject16(HVar5);
    HVar4 = CreateSolidBrush16(0xff);
    HVar3 = CreatePen16(0xff,0x0,0x1);
    SelectObject16(0x1538,HVar4);
    SelectObject16(0x1538,HVar3);
  }
  rect_coords = UI_Component_Get_Indexed_Rect_Ptr_Logic
                          ((void *)(void *)*(undefined4 *)((int)scale_ptr + 0x6));
  UI_Draw_Centering_Indicator_Triangle_Alternative_239c(param_1,rect_coords);
  if (*(int *)((int)*(undefined4 *)((int)scale_ptr + 0x6) + 0x2c) != 0x0)
  {
    UI_Panel_Initialize_Text_Controls_from_Params_2488(param_1,local_24);
  }
  obj_01 = SelectPalette16(0x0,*(HPALETTE16 *)((int)scale_ptr + 0x10),local_24);
  DeleteObject16(obj_01);
  HVar5 = SelectObject16(0x1538,obj);
  DeleteObject16(HVar5);
  HVar5 = SelectObject16(0x1538,obj_00);
  DeleteObject16(HVar5);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)scale_ptr + 0x4)
            );
  return;
}



// Calculates (100 - X) / 2 and stores the result. Useful for centering elements in a
// 100-unit UI container.

void __stdcall16far
Math_Center_Value_in_100_Range_Alternative_2286
          (u16 unused1,u16 unused2,int *out_result,int value)
{
  int in_stack_0000000c;
  
  *_out_result = 0x64 - in_stack_0000000c >> 0x1;
  return;
}



// An alternative GDI routine for drawing tick marks on a linear scale or slider bar.

void __stdcall16far
UI_Draw_Linear_Scale_Ticks_Alternative_229c(void *scale_ptr,HDC16 hdc)
{
  int iVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  undefined2 uVar6;
  short in_stack_00000008;
  int iStack_a;
  
  iVar1 = *(int *)((int)*(undefined4 *)((int)scale_ptr + 0x6) + 0x30);
  psVar2 = (short *)*(undefined4 *)((int)*(undefined4 *)((int)scale_ptr + 0x6) + 0x1a);
  MoveTo16(0x5,*psVar2,in_stack_00000008);
  uVar6 = (undefined2)((ulong)psVar2 >> 0x10);
  psVar4 = (short *)psVar2;
  LineTo16(0x5,psVar4[iVar1 * 0x4 + -0x2],in_stack_00000008);
  for (iStack_a = 0x0; iStack_a < iVar1; iStack_a += 0x1)
  {
    psVar5 = psVar4 + iStack_a * 0x4;
    iVar3 = (psVar5[0x2] - *psVar5 >> 0x1) + *psVar5;
    MoveTo16(0x5,iVar3,in_stack_00000008);
    LineTo16(0xa,iVar3,in_stack_00000008);
  }
  MoveTo16(0x5f,*psVar2,in_stack_00000008);
  LineTo16(0x5f,psVar4[iVar1 * 0x4 + -0x2],in_stack_00000008);
  for (iStack_a = 0x0; iStack_a < iVar1; iStack_a += 0x1)
  {
    psVar5 = psVar4 + iStack_a * 0x4;
    iVar3 = (psVar5[0x2] - *psVar5 >> 0x1) + *psVar5;
    MoveTo16(0x5f,iVar3,in_stack_00000008);
    LineTo16(0x5a,iVar3,in_stack_00000008);
  }
  return;
}



// An alternative routine for drawing a triangular indicator at the midpoint of a range.

void __stdcall16far
UI_Draw_Centering_Indicator_Triangle_Alternative_239c(void *hdc_state,int *rect_coords)
{
  undefined1 *puVar1;
  int *hdc;
  int unaff_SS;
  undefined2 in_stack_0000000a;
  undefined1 local_a [0x6];
  int iStack_4;
  
  if (_rect_coords != NULL)
  {
    iStack_4 = (rect_coords[0x2] - *_rect_coords >> 0x1) + *_rect_coords;
    pack_3words_alt(local_a,unaff_SS,0x0,0x57);
    puVar1 = local_a;
    hdc = UI_Build_3Point_Triangle_Coordinate_Array_Alternative_23f2
                    (hdc_state,puVar1,unaff_SS);
    GDI_Polygon_Wrapper_Alternative_2474
              ((u16)hdc_state,(u16)((ulong)hdc_state >> 0x10),
               (void *)CONCAT22(puVar1,(void *)((int)(undefined **)&p_CurrentHeapContext
                                               + 0x1)),(HDC16)hdc);
  }
  return;
}



// An alternative routine for constructing a 3-point triangle coordinate array based on
// constant offsets (0x4270, 0x4272).

int * __stdcall16far
UI_Build_3Point_Triangle_Coordinate_Array_Alternative_23f2
          (undefined2 param_1,undefined2 param_2,void *param_3)
{
  void *pvVar1;
  int *in_DX;
  int iVar2;
  undefined2 unaff_SI;
  int iStack_12;
  int local_6;
  int local_4;
  
  unpack_word_pair((void *)param_3,(int *)((ulong)param_3 >> 0x10),&local_6);
  pvVar1 = allocate_memory(CONCAT22(unaff_SI,0xc));
  for (iStack_12 = 0x0; iStack_12 < 0x3; iStack_12 += 0x1)
  {
    iVar2 = iStack_12 * 0x4;
    *(int *)(iVar2 + (int)pvVar1) = *(int *)(iVar2 + 0x4270) + local_4;
    *(int *)((int)pvVar1 + iVar2 + 0x2) = *(int *)(iVar2 + 0x4272) + local_6;
  }
  return in_DX;
}



// An alternative wrapper for the Win16 Polygon16 API.

void __stdcall16far
GDI_Polygon_Wrapper_Alternative_2474
          (u16 unused1,u16 unused2,void *count_and_points,HDC16 hdc)
{
  HDC16 unaff_CS;
  
  Polygon16(unaff_CS,(void *)count_and_points,(short)((ulong)count_and_points >> 0x10));
  return;
}



// Bulk initializes 9 text controls in a UI panel using a provided string pointer and
// resource ID table. Similar to 1018:6630 but takes the string pointer directly.

void __stdcall16far
UI_Panel_Initialize_Text_Controls_from_Params_2488(undefined4 param_1)
{
  char *in_AX;
  uint uVar1;
  HWND16 in_DX;
  int iVar2;
  undefined2 uVar3;
  int iStack_c;
  char *pcStack_a;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  UI_Component_Load_Resource_by_Indexed_ID_Logic
            ((void *)(void *)*(undefined4 *)(iVar2 + 0x6));
  if (in_DX != 0x0 || in_AX != NULL)
  {
    pcStack_a = in_AX;
    for (iStack_c = 0x0; iStack_c < 0x9; iStack_c += 0x1)
    {
      get_table_139A_entry_logic((int)*(undefined4 *)(iVar2 + 0x6));
      UI_Dialog_Set_Control_Text_Wrapper(*(long *)(iVar2 + 0xa),pcStack_a,in_DX);
      uVar1 = strlen_get_length((char *)CONCAT22(in_DX,pcStack_a));
      pcStack_a = pcStack_a + uVar1 + 0x1;
    }
  }
  return;
}



// Scalar deleting destructor for the UI Report Panel.

void * __stdcall16far
UI_Report_Panel_dtor_Scalar_Deleting_logic_24f2(void *this_ptr,byte flags)
{
  UI_Control_Type7_dtor_Internal_Cleanup_logic_1f74((long)this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the UI Report Panel. Initializes base object and loads Resource ID
// 0x2A. Sets vtable to 0x270C.

void * __stdcall16far
UI_Report_Panel_ctor_init_logic_Res2A_2524
          (astruct_381 *param_1,undefined2 param_2,void *param_3)
{
  uint16_t uVar2;
  astruct_381 *uVar1;
  undefined2 uVar3;
  long lVar4;
  
  UI_Panel_Base_ctor_init_logic_7f7a
            (param_1,(void *)CONCAT22(param_2,(void *)0x7),param_3);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_381 *)param_1;
  uVar1->field233_0xee = 0x0;
  (&uVar1->field234_0xf2)[0x0] = 0x0;
  (&uVar1->field234_0xf2)[0x1] = 0x0;
  *(char **)param_1 = (char *)s_fem36_wav_1050_270c;
  uVar1->field2_0x2 = 0x1020;
  uVar1->field225_0xe2 = (u16)((char *)s_fem51_wav_1050_27a2 + 0x6);
  uVar1->field226_0xe4 = 0x1020;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2a);
  uVar2 = (uint16_t)((ulong)lVar4 >> 0x10);
  uVar1->field234_0xf2 = (uint16_t)lVar4;
  uVar1->field235_0xf4 = uVar2;
  uVar1->field227_0xe6 = uVar1->field234_0xf2;
  uVar1->field228_0xe8 = uVar2;
  return param_1;
}



// Sets the UI Report Panel's vtable and performs its specialized initialization.

void __stdcall16far UI_Report_Panel_Initialize_Vtable_and_Globals_2594(void *this_ptr)
{
  astruct_380 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_380 *)this_ptr;
  *(char **)this_ptr = (char *)s_fem36_wav_1050_270c;
  uVar1->field2_0x2 = 0x1020;
  uVar1->field225_0xe2 = (u16)((char *)s_fem51_wav_1050_27a2 + 0x6);
  uVar1->field226_0xe4 = 0x1020;
  UI_Panel_Base_dtor_Internal_Cleanup_logic_808e(this_ptr);
  return;
}



// Logic to open the Colony Morale Dialog from the Colony View. Manages unique dialog
// instance counting.

void __stdcall16far UI_Colony_View_Open_Morale_Dialog_Logic_25c0(astruct_379 *param_1)
{
  undefined2 *puVar1;
  void *pvVar2;
  int in_DX;
  int extraout_DX;
  astruct_379 *uVar1;
  undefined2 uVar3;
  undefined2 in_stack_0000fff6;
  undefined4 *puStack_6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_379 *)param_1;
  if (uVar1->field236_0xee != NULL)
  {
    puVar1 = (undefined2 *)((int)*uVar1->field236_0xee + 0x8);
    (*(code *)*puVar1)();
    in_DX = extraout_DX;
  }
  if (uVar1->field233_0xea == 0x0)
  {
    uVar1->field233_0xea = 0x1;
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x98));
    if (in_DX == 0x0 && pvVar2 == NULL)
    {
      puStack_6 = NULL;
    }
    else
    {
      uVar1->field204_0xcc = uVar1->field204_0xcc + 0x1;
      puStack_6 = (undefined4 *)
                  UI_Colony_Morale_Dialog_ctor
                            ((void *)CONCAT22(in_DX,pvVar2),uVar1->field204_0xcc,uVar1,
                             uVar3);
    }
    puVar1 = (undefined2 *)((int)*puStack_6 + 0x8);
    (*(code *)*puVar1)(0x1000,(undefined4 *)puStack_6,(int)((ulong)puStack_6 >> 0x10));
  }
  return;
}



// Constructor for the Report View UI. Creates window, sets DC, and initializes its
// report-specific internal component.

void __stdcall16far
UI_Report_View_ctor_init_Window_and_Child_Component_2642(void *param_1)
{
  void *pvVar1;
  int in_DX;
  astruct_378 *uVar3;
  void *pvVar2;
  void *this;
  undefined2 uVar4;
  undefined2 in_stack_0000fffa;
  
  this = (void *)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  Build_Site_Object_Set_Window_and_DC
            (*(long *)((int)this + 0xf2),*(HWND16 *)((int)this + 0x8));
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x18));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    pvVar2 = UI_Report_Child_Component_ctor_init_logic_Res2A_27b0
                       ((void *)CONCAT22(in_DX,pvVar1),*(u16 *)((int)this + 0x8));
    *(undefined2 *)((int)this + 0xee) = (int)pvVar2;
    *(undefined2 *)((int)this + 0xf0) = (int)((ulong)pvVar2 >> 0x10);
    return;
  }
  *(undefined4 *)((int)this + 0xee) = 0x0;
  return;
}
