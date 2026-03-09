/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 51/54
 * Original lines (combined): 130094-131435
 * Boundaries: top-level declarations/definitions only
 */




// The main window procedure for the custom OPButton control. Handles drawing state
// (normal, focused, pressed, disabled), focus management, mouse capture, and keyboard
// interaction (Space/Enter).

LRESULT __stdcall16far
UI_OPButton_WndProc(char *param_1,int16_t param_2,HWND16 param_3,undefined4 param_4)
{
  POINT16 pt;
  POINT16 pt_00;
  byte bVar1;
  undefined2 reg_ax;
  ushort *puVar2;
  u32 *puVar3;
  ushort uVar4;
  void *pvVar5;
  BOOL16 BVar6;
  int reg_dx;
  int16_t offset;
  undefined2 unaff_SS;
  undefined1 uVar7;
  u32 *puVar8;
  LRESULT pvVar9;
  HWND16 HVar10;
  HWND16 HVar11;
  undefined1 in_stack_0000ffe2;
  undefined1 in_stack_0000ffe3;
  undefined1 uVar12;
  char cVar13;
  undefined4 local_16;
  undefined4 local_12;
  undefined1 local_a [0x8];
  
  HVar11 = 0x1050;
  puVar2 = (ushort *)GetWindowLong16(0x0,param_4._2_2_);
  local_12 = (ushort *)CONCAT22(reg_dx,puVar2);
  if ((uint)param_4 == 0x30)
  {
    puVar2[0x2d] = param_3;
  }
  else
  {
    if ((uint)param_4 < 0x31)
    {
      if ((uint)param_4 == 0x1f)
      {
        puVar2[0x2] = 0x0;
        ReleaseCapture16();
        return NULL;
      }
      if (0x1f < (uint)param_4) goto LAB_1040_a1ae;
      bVar1 = (byte)param_4;
      if (bVar1 == 0x8)
      {
        *(byte *)(puVar2 + 0x2) = (byte)puVar2[0x2] & 0xf7;
        uVar7 = 0x0;
        cVar13 = '\0';
        HVar10 = param_3;
        BVar6 = IsWindow16(param_3);
        if (BVar6 != 0x0)
        {
          pvVar9 = SendMessage16(0x0,0x0,0x0,CONCAT22(HVar10,param_3));
          uVar7 = ((ulong)pvVar9 & 0x20) == 0x0;
          cVar13 = '\0';
        }
        (puVar2 + 0x2b)[0x0] = 0x0;
        (puVar2 + 0x2b)[0x1] = 0x0;
        SendMessage16(0x0,0x0,puVar2[0x2e],CONCAT22(HVar10,puVar2[0x1]));
        if ((puVar2[0x2e] != 0x0) && (puVar2[0x2e] != *local_12))
        {
          SendDlgItemMessage16
                    (CONCAT11(cVar13,uVar7),(int)cVar13 >> 0x7,0x1,0x404,
                     CONCAT22(puVar2[0x1],puVar2[0x2e]));
        }
        puVar2[0x2e] = 0x0;
      }
      else if (bVar1 < 0x9)
      {
        if (bVar1 == 0x1)
        {
          puVar2 = (ushort *)GetWindowLong16(0x0,param_4._2_2_);
          local_16 = (ushort *)CONCAT22(reg_dx,puVar2);
          puVar2[0x1] = *(ushort *)(param_1 + 0x8);
          uVar4 = GetDlgCtrlId(0x1538);
          *local_16 = uVar4;
          *(undefined4 *)(puVar2 + 0x2b) = *(undefined4 *)(param_1 + 0x12);
          strcpy_optimized((char *)CONCAT22(reg_dx,puVar2 + 0x3),
                           *(char **)(param_1 + 0x16));
          if ((param_1[0x12] & 0x1U) != 0x0)
          {
            SendMessage16(0x0,0x0,*local_16,
                          CONCAT22(param_4._2_2_,*(undefined2 *)(param_1 + 0x8)));
          }
          if ((*(uint *)(param_1 + 0x14) & 0x800) == 0x0)
          {
            return (LRESULT)0x1;
          }
          *(byte *)(puVar2 + 0x2) = (byte)puVar2[0x2] | 0x4;
          return (LRESULT)0x1;
        }
        if (bVar1 == 0x2)
        {
          free_if_not_null(puVar2);
          SetWindowLong16(0x0,0x0,0x0);
          return NULL;
        }
        if (bVar1 != 0x7) goto LAB_1040_a1ae;
        *(byte *)(puVar2 + 0x2) = (byte)puVar2[0x2] | 0x8;
        pvVar9 = SendMessage16(0x0,0x0,0x0,CONCAT22(HVar11,puVar2[0x1]));
        pvVar5 = (void *)pvVar9;
        if (((int)((ulong)pvVar9 >> 0x10) == 0x534b) &&
           (puVar2[0x2e] = (ushort)pvVar5, pvVar5 != (void *)*local_12))
        {
          SendDlgItemMessage16(0x1,0x0,0x0,0x404,(long)CONCAT22(puVar2[0x1],pvVar5));
        }
        SendMessage16(0x0,0x0,*local_12,CONCAT22(HVar11,puVar2[0x1]));
        (puVar2 + 0x2b)[0x0] = 0x1;
        (puVar2 + 0x2b)[0x1] = 0x0;
      }
      else if (bVar1 == 0xa)
      {
        *(byte *)(puVar2 + 0x2) = (byte)puVar2[0x2] & 0xfb;
        if (param_3 == 0x0)
        {
          *(byte *)(puVar2 + 0x2) = (byte)puVar2[0x2] | 0x4;
        }
      }
      else
      {
        if (bVar1 != 0xc)
        {
          if (bVar1 == 0xf)
          {
            UI_OPButton_WndProc_9948(param_4._2_2_,(u32)CONCAT22(reg_dx,puVar2));
            return NULL;
          }
          goto LAB_1040_a1ae;
        }
        if ((char *)CONCAT22(param_2,param_1) != NULL)
        {
          strcpy_optimized((char *)CONCAT22(reg_dx,puVar2 + 0x3),
                           (char *)CONCAT22(param_2,param_1));
        }
      }
      goto LAB_1040_9e20;
    }
    if ((uint)param_4 == 0x200)
    {
      if ((puVar2[0x2] & 0x1) == 0x0)
      {
        return NULL;
      }
      GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_a),param_4._2_2_);
      uVar7 = (undefined1)puVar2[0x2];
      uVar12 = (undefined1)(puVar2[0x2] >> 0x8);
      pt.y = param_2;
      pt.x = (int16_t)param_1;
      BVar6 = PtInRect(pt,(undefined1 *)CONCAT22(unaff_SS,local_a));
      if (BVar6 == 0x0)
      {
        *(byte *)(puVar2 + 0x2) = (byte)puVar2[0x2] & 0xfd;
      }
      else
      {
        *(byte *)(puVar2 + 0x2) = (byte)puVar2[0x2] | 0x2;
      }
      param_1 = (char *)(puVar2[0x2] - CONCAT11(uVar12,uVar7));
    }
    else
    {
      if ((uint)param_4 < 0x201)
      {
        if ((uint)param_4 == 0x81)
        {
          HVar11 = 0x0;
          puVar3 = allocate_memory(0x5e);
          if (reg_dx == 0x0 && puVar3 == NULL)
          {
            puVar3 = NULL;
            offset = 0x0;
          }
          else
          {
            puVar8 = UI_View_Reset_Fields_Logic_9824((u32 *)CONCAT22(reg_dx,puVar3));
            offset = (int16_t)((ulong)puVar8 >> 0x10);
            puVar3 = (u32 *)puVar8;
          }
          SetWindowLong16((int32_t)puVar3,offset,HVar11);
          return (LRESULT)0x1;
        }
        if ((uint)param_4 == 0x87)
        {
          if ((puVar2[0x2b] & 0x1) == 0x0)
          {
            bVar1 = 0x21;
          }
          else
          {
            bVar1 = 0x11;
          }
          return (LRESULT)(ulong)bVar1;
        }
        if ((uint)param_4 == 0x100)
        {
          if ((param_3 == 0x26) || (param_3 == 0x25))
          {
            uVar4 = puVar2[0x1];
            BVar6 = 0x1;
          }
          else
          {
            if ((param_3 != 0x28) && (param_3 != 0x27))
            {
              if (((param_3 == 0x20) || (param_3 == 0xd)) &&
                 (*(undefined **)&PTR_DAT_1050_0000_1050_5ed8 == NULL))
              {
                *(undefined **)&PTR_DAT_1050_0000_1050_5ed8 = (undefined *)0x1;
                *(byte *)(puVar2 + 0x2) = (byte)puVar2[0x2] | 0x2;
                goto LAB_1040_9e20;
              }
              goto LAB_1040_a1ae;
            }
            uVar4 = puVar2[0x1];
            BVar6 = 0x0;
          }
          HVar11 = GetNextDlgTabItem16(BVar6,param_4._2_2_,uVar4);
          SetFocus16(HVar11);
          return NULL;
        }
        if (((uint)param_4 == 0x101) &&
           (*(undefined **)&PTR_DAT_1050_0000_1050_5ed8 != NULL))
        {
          *(undefined **)&PTR_DAT_1050_0000_1050_5ed8 = NULL;
          *(byte *)(puVar2 + 0x2) = (byte)puVar2[0x2] & 0xfd;
          InvalidateRect16(0x1,(void *)((ulong)param_4._2_2_ << 0x10),HVar11);
          UpdateWindow16(param_4._2_2_);
          SendMessage16(0x0,0x0,*local_12,
                        CONCAT13(in_stack_0000ffe3,
                                 CONCAT12(in_stack_0000ffe2,puVar2[0x1])));
          return NULL;
        }
LAB_1040_a1ae:
        pvVar9 = DefWindowProc16((char *)CONCAT22(param_2,param_1),param_3,(uint)param_4
                                 ,param_4._2_2_);
        return pvVar9;
      }
      if ((uint)param_4 == 0x201)
      {
LAB_1040_9e74:
        SetFocus16(param_4._2_2_);
        *(byte *)(puVar2 + 0x2) = (byte)puVar2[0x2] | 0x3;
        InvalidateRect16(0x1,(void *)((ulong)param_4._2_2_ << 0x10),HVar11);
        UpdateWindow16(param_4._2_2_);
        SetCapture16(param_4._2_2_);
        return NULL;
      }
      if ((uint)param_4 == 0x202)
      {
        ReleaseCapture16();
        GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_a),param_4._2_2_);
        if ((puVar2[0x2] & 0x1) == 0x0)
        {
          return NULL;
        }
        *(byte *)(puVar2 + 0x2) = (byte)puVar2[0x2] & 0xfc;
        InvalidateRect16(0x1,(void *)((ulong)param_4._2_2_ << 0x10),HVar11);
        UpdateWindow16(param_4._2_2_);
        pt_00.y = param_2;
        pt_00.x = (int16_t)param_1;
        BVar6 = PtInRect(pt_00,(undefined1 *)CONCAT22(unaff_SS,local_a));
        if (BVar6 == 0x0)
        {
          return NULL;
        }
        PostMessage16(0x0,0x0,*local_12,
                      CONCAT13(in_stack_0000ffe3,CONCAT12(in_stack_0000ffe2,puVar2[0x1])
                              ));
        return NULL;
      }
      if ((uint)param_4 == 0x203) goto LAB_1040_9e74;
      if ((uint)param_4 != 0x404) goto LAB_1040_a1ae;
      if (param_3 == 0x1)
      {
        (puVar2 + 0x2b)[0x0] = 0x1;
        (puVar2 + 0x2b)[0x1] = 0x0;
      }
      else
      {
        (puVar2 + 0x2b)[0x0] = 0x0;
        (puVar2 + 0x2b)[0x1] = 0x0;
      }
    }
  }
  if (param_1 == NULL)
  {
    return NULL;
  }
LAB_1040_9e20:
  InvalidateRect16(0x1,(void *)((ulong)param_4._2_2_ << 0x10),HVar11);
  UpdateWindow16(param_4._2_2_);
  return NULL;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xA4E8 (vtable 0xA4E8). Creates a procedure instance
// for its custom logic (1040:A40E) and increments a global counter.

void * __stdcall16far
UI_SubDialog_TypeA4E8_ctor_init_a234(void *param_1,u16 param_2,void *param_3)
{
  undefined2 unaff_BP;
  
  UI_SubDialog_TypeB772_ctor_init_b040((void *)param_1,param_1._2_2_,param_2);
  *(undefined2 *)param_1 = 0xa4e8;
  *(undefined2 *)((int)(void *)param_1 + 0x2) = 0x1040;
  if (_PTR_DAT_1050_0000_1050_5edc == NULL)
  {
    _PTR_DAT_1050_0000_1050_5edc =
         MakeProcInstance16((HANDLE16)PTR_DAT_1050_0000_1050_038c,
                            (void *)CONCAT22(unaff_BP,(void *)0x1040));
  }
  *(long *)((int)(void *)param_1 + 0xc) = (long)_PTR_DAT_1050_0000_1050_5edc;
  PTR_DAT_1050_0000_1050_5ee0 = (void *)param_1;
  PTR_DAT_1050_0000_1050_5ee2 = param_1._2_2_;
  PTR_DAT_1050_0000_1050_5eda = PTR_DAT_1050_0000_1050_5eda + 0x1;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeA4E8_dtor_Internal_a294(void *param_1)
{
  *(undefined2 *)param_1 = 0xa4e8;
  *(undefined2 *)((int)(void *)param_1 + 0x2) = 0x1040;
  PTR_DAT_1050_0000_1050_5eda = PTR_DAT_1050_0000_1050_5eda + -0x1;
  if (PTR_DAT_1050_0000_1050_5eda == NULL)
  {
    FreeProcInstance16(_PTR_DAT_1050_0000_1050_5edc);
    _PTR_DAT_1050_0000_1050_5edc = NULL;
  }
  UI_SubDialog_TypeB772_dtor_Internal_b0f8((void *)param_1);
  return;
}



ulong __stdcall16far
UI_SubDialog_On_Command_Check_Bitmap_a2cc(u16 param_1,u32 param_2,u32 param_3)
{
  uint uVar1;
  ulong uVar2;
  
  if (param_3._2_2_ == 0x1826)
  {
    if (((int)param_3 == 0x1) ||
       ((0x1 < (int)param_3 - 0x1U && ((int)param_3 - 0x3U < 0x2))))
    {
      uVar1 = 0x1;
    }
    else
    {
      uVar1 = 0x0;
    }
    return (ulong)uVar1;
  }
  uVar2 = UI_SubDialog_Complex_Command_Handler_b54a(param_1,param_2,param_3);
  return uVar2;
}



void __stdcall16far UI_SubDialog_TypeA4E8_Init_Controls_a3d0(void *param_1)
{
  HWND16 HVar1;
  astruct_23 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_23 *)param_1;
  if (uVar1->field143_0x90 != 0x0)
  {
    *(int16_t *)((int)uVar1->field143_0x90 + 0x14) = uVar1->field6_0x6;
    HVar1 = GetDlgItem16(0x1826,uVar1->field6_0x6);
    UI_Dialog_Populate_Action_List_Box_a308(param_1,HVar1);
  }
  return;
}



// A specialized window procedure redirector for action list boxes. Uses window
// properties to route initialization (WM_MEASUREITEM equivalent) and query messages to
// the associated object methods.

LRESULT __stdcall16far
UI_Window_Subclass_Action_Redirector_WindowProc
          (void *param_1,undefined4 param_2,undefined4 param_3)
{
  undefined2 *puVar1;
  undefined2 reg_ax;
  void *pvVar2;
  undefined2 reg_dx;
  int iVar3;
  undefined2 uVar4;
  LRESULT pvVar5;
  undefined2 uVar6;
  void *local_6;
  
  uVar6 = 0x1050;
  local_6 = NULL;
  if ((uint16_t)param_3 == 0x19)
  {
    puVar1 = (undefined2 *)
             ((int)**(undefined4 **)(undefined **)&PTR_DAT_1050_0000_1050_5ee0 + 0x34);
    local_6 = (void *)(*(code *)*puVar1)();
    reg_dx = (undefined2)((ulong)local_6 >> 0x10);
  }
  else
  {
    if ((uint16_t)param_3 == 0x86)
    {
      puVar1 = (undefined2 *)
               ((int)**(undefined4 **)(undefined **)&PTR_DAT_1050_0000_1050_5ee0 + 0x20)
      ;
      pvVar5 = (LRESULT)(*(code *)*puVar1)();
      return pvVar5;
    }
    if ((uint16_t)param_3 == 0x110)
    {
                // WARNING: Load size is inaccurate
      pvVar2 = (void *)UI_Dialog_Populate_Action_List_Box_a308
                                 (*(undefined **)&PTR_DAT_1050_0000_1050_5ee0,
                                  param_2._2_2_);
      return (LRESULT)CONCAT22(reg_dx,pvVar2);
    }
  }
  if (local_6 != NULL)
  {
    return (LRESULT)CONCAT22(reg_dx,(void *)local_6);
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(undefined **)&p_UIMainWindow >> 0x10);
  iVar3 = (int)*(undefined4 *)(undefined **)&p_UIMainWindow;
  pvVar2 = (void *)*(uint *)(iVar3 + 0x6);
  if (pvVar2 == NULL && *(int *)(iVar3 + 0x4) == 0x0)
  {
    return (LRESULT)(ZEXT24(pvVar2) << 0x10);
  }
  pvVar5 = CallWindowProc16((void *)CONCAT22((int)param_2,param_1),param_2._2_2_,
                            (uint16_t)param_3,(HWND16)((ulong)param_3 >> 0x10),
                            (void *)CONCAT22(uVar6,pvVar2));
  return pvVar5;
}



void * __stdcall16far
UI_SubDialog_TypeA4E8_dtor_Scalar_Deleting_a4c2(void *param_1,byte param_2)
{
  UI_SubDialog_TypeA4E8_dtor_Internal_a294(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



u32 * __stdcall16far UI_Struct_Zero_Init_10bytes_a564(u32 *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *param_1 = 0x0;
  *(undefined2 *)((u32 *)param_1 + 0x1) = 0x0;
  *(undefined4 *)((int)(u32 *)param_1 + 0x6) = 0x0;
  return param_1;
}



// Constructor for sub-dialog Type 0xAC08 (vtable 0xAC08). Base ID 0x1F1. Used for
// detailed entity and research status views.

void * __stdcall16far
UI_SubDialog_TypeAC08_ctor_init_a640(void *param_1,void *param_2,u16 param_3)
{
  astruct_20 *uVar1;
  undefined2 uVar2;
  void *this_ptr;
  
  this_ptr = (void *)param_1;
  UI_SubDialog_TypeB772_ctor_Simple_b082(this_ptr,CONCAT22(param_3,0x1f1));
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined4 *)((int)this_ptr + 0x94) = param_2;
  *(undefined2 *)((int)this_ptr + 0x98) = 0x0;
  *(undefined2 *)((int)this_ptr + 0xea) = 0x0;
  *(undefined2 *)param_1 = 0xac08;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// CTLCOLOR handler for dialog Type 0xAC08. Uses the global palette to set colors.
// Specifically highlights controls whose IDs exist in the dialog's tracking array
// (offset 0x9A).

u32 __stdcall16far
UI_SubDialog_TypeAC08_Handle_CTLCOLOR_a67e(void *param_1,int param_2,uint param_3)
{
  bool bVar1;
  HBRUSH16 HVar2;
  void *pvVar3;
  undefined2 reg_dx;
  int iVar4;
  undefined2 uVar5;
  undefined *hdc;
  undefined *color;
  int iStack_e;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x8e) == 0x0)
  {
    HVar2 = CreateSolidBrush16(0x0);
    *(HBRUSH16 *)(iVar4 + 0x8e) = HVar2;
  }
  if (_PTR_DAT_1050_0000_1050_5ee8 == NULL)
  {
    pvVar3 = Palette_Object_Get_Buffer_Ptr_maybe
                       ((void *)(void *)*(undefined4 *)
                                         ((int)_p_GlobalPaletteObject + 0xe));
    _PTR_DAT_1050_0000_1050_5ee8 =
         (undefined *)
         (ulong)CONCAT12(*(undefined1 *)((int)pvVar3 + 0x94),
                         CONCAT11(*(undefined1 *)((int)pvVar3 + 0x95),
                                  *(undefined1 *)((int)pvVar3 + 0x96)));
    PTR_DAT_1050_0000_1050_5eec =
         (undefined *)
         CONCAT11(*(undefined1 *)((int)pvVar3 + 0x3e5),
                  *(undefined1 *)((int)pvVar3 + 0x3e6));
    PTR_DAT_1050_0000_1050_5eee = (undefined *)(uint)*(byte *)((int)pvVar3 + 0x3e4);
  }
  hdc = PTR_DAT_1050_0000_1050_5ee8;
  color = PTR_DAT_1050_0000_1050_5eea;
  if (0x5 < param_3)
  {
    if (param_3 != 0x6)
    {
      return 0x0;
    }
    bVar1 = false;
    for (iStack_e = 0x0; iStack_e < *(int *)(iVar4 + 0xea); iStack_e += 0x1)
    {
      if (*(int *)(iVar4 + 0x9a + iStack_e * 0x2) == param_2)
      {
        bVar1 = true;
        break;
      }
    }
    if (bVar1)
    {
      hdc = PTR_DAT_1050_0000_1050_5eec;
      color = PTR_DAT_1050_0000_1050_5eee;
    }
  }
  SetTextColor16((HDC16)hdc,(COLORREF)color);
  SetBkColor16(0x0,0x100);
  return CONCAT22(0x1050,*(undefined2 *)(iVar4 + 0x8e));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for a summary report dialog. Manages spawning specialized report
// sub-dialogs and handles layout refreshing via UI_SubDialog_TypeAC08_Refresh_Logic.

ulong __stdcall16far
UI_SubDialog_Summary_Report_On_Command_a784
          (void *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  HWND16 enable;
  ulong uVar1;
  undefined2 in_stack_0000fff6;
  
  if (param_4._2_2_ != 0xeb)
  {
    if (param_4._2_2_ == 0x1f4)
    {
      UI_Show_Summary_Report_MessageBox_a85a((u32)CONCAT22(param_2,param_1));
      return 0x1;
    }
    if (param_4._2_2_ == 0x1f7)
    {
      _PTR_DAT_1050_0000_1050_5ef0 = *(undefined4 *)((int)param_1 + 0x94);
      UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                (_p_UISubDialogTable,*(uint16_t *)((int)param_1 + 0x8),0x23);
      PostMessage16(0x0,0x0,0x2,
                    CONCAT22(in_stack_0000fff6,*(undefined2 *)((int)param_1 + 0x6)));
      return 0x1;
    }
    if (param_4._2_2_ != 0x17d8)
    {
      uVar1 = UI_SubDialog_Complex_Command_Handler_b54a(param_1,param_2,param_3,param_4)
      ;
      return uVar1;
    }
    SetWindowPos16(0x6,0xed,0x237,0x0,0x0,0x0,*(HWND16 *)((int)param_1 + 0x6));
    enable = GetDlgItem16(0x17d8,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x0,enable);
    *(undefined2 *)((int)param_1 + 0x98) = 0x1;
  }
  UI_SubDialog_TypeAC08_Refresh_Logic_a94a((void *)CONCAT22(param_2,param_1));
  return 0x1;
}



void __stdcall16far UI_SubDialog_TypeAC08_Refresh_Wrapper_a84a(u32 param_1)
{
  UI_SubDialog_TypeAC08_Refresh_Logic_a94a((void *)param_1);
  return;
}



void * __stdcall16far
UI_SubDialog_dtor_Scalar_Deleting_vB0F8_abe2(void *param_1,byte param_2)
{
  UI_SubDialog_TypeB772_dtor_Internal_b0f8((void *)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xAFC4 (vtable 0xAFC4). Links to Resource 0x3D and
// consumes a global pointer from 1050:5EF0. Base ID 499.

void * __stdcall16far UI_SubDialog_TypeAFC4_ctor_init_ac84(void *param_1,u16 param_2)
{
  astruct_19 *uVar2;
  long lVar1;
  void *this_ptr;
  undefined2 uVar3;
  
  this_ptr = (void *)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  UI_SubDialog_TypeB772_ctor_Simple_b082(this_ptr,CONCAT22(param_2,0x1f3));
  *(undefined4 *)((int)this_ptr + 0x94) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x98) = 0x0;
  *(undefined2 *)param_1 = 0xafc4;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  *(undefined4 *)((int)this_ptr + 0x94) = _PTR_DAT_1050_0000_1050_5ef0;
  _PTR_DAT_1050_0000_1050_5ef0 = 0x0;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3d);
  *(undefined2 *)((int)this_ptr + 0x98) = (int)lVar1;
  *(undefined2 *)((int)this_ptr + 0x9a) = (int)((ulong)lVar1 >> 0x10);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeAFC4_dtor_Internal_ace8(void *param_1)
{
  void *unaff_CS;
  
  *(undefined2 *)param_1 = 0xafc4;
  *(undefined2 *)((int)(void *)param_1 + 0x2) = 0x1040;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_TypeB772_dtor_Internal_b0f8((void *)param_1);
  return;
}



void __stdcall16far UI_SubDialog_TypeAFC4_Refresh_Wrapper_ad14(u32 param_1)
{
  UI_Building_Status_Dialog_Refresh_Logic_ae04((void *)param_1);
  return;
}



// Command handler for building status sub-dialogs. Handles refresh (0xEB) and detailed
// info (0x1F0) actions.

ulong __stdcall16far
UI_Building_Status_Dialog_On_Command_ad24
          (void *param_1,u16 param_2,void *param_3,uint16_t param_4)
{
  ulong uVar1;
  
  if (param_3._2_2_ == 0xeb)
  {
    UI_Building_Status_Dialog_Refresh_Logic_ae04(param_1);
  }
  else
  {
    if (param_3._2_2_ != 0x1f0)
    {
      uVar1 = UI_SubDialog_Complex_Command_Handler_b54a
                        ((uint16_t)param_1,CONCAT22(param_2,param_1._2_2_),param_3);
      return uVar1;
    }
    UI_Show_Building_Info_MessageBox_ad66((uint16_t)param_1,0x0,param_4);
  }
  return 0x1;
}



void * __stdcall16far
UI_SubDialog_TypeAFC4_dtor_Scalar_Deleting_af9e(void *param_1,byte param_2)
{
  UI_SubDialog_TypeAFC4_dtor_Internal_ace8(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for sub-dialog Type 0xB772. Initializes base state and sets vtable.
// Specialized for certain building interactions.

ushort __stdcall16far
UI_SubDialog_TypeB772_ctor_init_b040(void *this_ptr,void *arg2,ushort parent_hwnd)
{
  astruct_18 *uVar1;
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000000c;
  
  UI_SubDialog_Base_ctor_init_7728
            (_this_ptr,0x1,0x0,*(undefined2 *)(parent_hwnd + 0x12),in_stack_0000000c);
  *(undefined2 *)((int)this_ptr + 0x8e) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x90) = _parent_hwnd;
  *_this_ptr = 0xb772;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  return (ushort)this_ptr;
}



ushort __stdcall16far
UI_SubDialog_TypeB772_ctor_Simple_b082(void *this_ptr,ulong dlg_template_id)
{
  astruct_17 *uVar1;
  undefined2 in_stack_00000006;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,0x0,dlg_template_id);
  *(undefined2 *)((int)this_ptr + 0x8e) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x90) = 0x0;
  *_this_ptr = 0xb772;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  return (ushort)this_ptr;
}



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
