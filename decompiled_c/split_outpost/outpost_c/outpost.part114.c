/*
 * Source: outpost.c
 * Chunk: 114/117
 * Original lines: 130094-131278
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
  undefined2 in_AX;
  ushort *puVar2;
  u32 *puVar3;
  ushort uVar4;
  void *pvVar5;
  BOOL16 BVar6;
  int in_DX;
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
  local_12 = (ushort *)CONCAT22(in_DX,puVar2);
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
          local_16 = (ushort *)CONCAT22(in_DX,puVar2);
          puVar2[0x1] = *(ushort *)(param_1 + 0x8);
          uVar4 = GetDlgCtrlId(0x1538);
          *local_16 = uVar4;
          *(undefined4 *)(puVar2 + 0x2b) = *(undefined4 *)(param_1 + 0x12);
          strcpy_optimized((char *)CONCAT22(in_DX,puVar2 + 0x3),
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
            UI_OPButton_WndProc_9948(param_4._2_2_,(u32)CONCAT22(in_DX,puVar2));
            return NULL;
          }
          goto LAB_1040_a1ae;
        }
        if ((char *)CONCAT22(param_2,param_1) != NULL)
        {
          strcpy_optimized((char *)CONCAT22(in_DX,puVar2 + 0x3),
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
          if (in_DX == 0x0 && puVar3 == NULL)
          {
            puVar3 = NULL;
            offset = 0x0;
          }
          else
          {
            puVar8 = UI_View_Reset_Fields_Logic_9824((u32 *)CONCAT22(in_DX,puVar3));
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



// A scalar deleting destructor for a base object, resetting the vtable to 1008:389a.

undefined2 * __stdcall16far
Base_Object_dtor_Scalar_Deleting_a204(undefined2 *param_1,byte param_2)
{
  *param_1 = (char *)s_1_1050_389a;
  ((undefined2 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((undefined2 *)param_1);
  }
  return param_1;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Populates a list box with action-specific strings (from Resource 3) based on the
// linked building's available operations. Appends 'None' if no actions exist.

u16 __stdcall16far
UI_Dialog_Populate_Action_List_Box_a308(void *param_1,uint16_t param_2)
{
  undefined4 uVar1;
  char *pcVar2;
  ushort uVar3;
  undefined2 unaff_SI;
  undefined2 uVar4;
  LRESULT pvVar5;
  void *puVar3;
  ushort w_param;
  long lVar6;
  undefined2 uVar7;
  undefined2 uStack_c;
  
  lVar6 = CONCAT22(unaff_SI,param_2);
  SendMessage16(0x0,0x0,0x0,lVar6);
  lVar6 = CONCAT22((int)((ulong)lVar6 >> 0x10),param_2);
  pvVar5 = SendMessage16(0x0,0x0,0x0,lVar6);
  uVar3 = (ushort)((ulong)pvVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)(void *)param_1 + 0x90);
  uVar7 = (undefined2)((ulong)lVar6 >> 0x10);
  if (*(int *)((int)uVar1 + 0x10) == 0x0)
  {
    lVar6 = CONCAT22(uVar7,param_2);
    w_param = 0x0;
    pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
    SendMessage16((HWND16)pcVar2,uVar3,w_param,lVar6);
    uVar7 = (undefined2)((ulong)lVar6 >> 0x10);
  }
  else
  {
    lVar6 = CONCAT22(uVar7,0x3);
    puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
    puVar3._2_2_ = (ushort)((ulong)puVar3 >> 0x10);
    for (uStack_c = 0x0; uVar7 = (undefined2)((ulong)lVar6 >> 0x10),
        uVar1 = *(undefined4 *)((int)(void *)param_1 + 0x90),
        uStack_c < *(int *)((int)uVar1 + 0x10); uStack_c += 0x1)
    {
      lVar6 = CONCAT22(uVar7,param_2);
      uVar3 = 0x0;
      pcVar2 = Resource_Manager_Get_Action_String_Logic((int)(void *)puVar3);
      pvVar5 = SendMessage16((HWND16)pcVar2,puVar3._2_2_,uVar3,lVar6);
      puVar3._2_2_ = (ushort)((ulong)pvVar5 >> 0x10);
    }
  }
  SendMessage16(0x0,0x0,0x1,CONCAT22(uVar7,param_2));
  return 0x1;
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
  undefined2 in_AX;
  void *pvVar2;
  undefined2 in_DX;
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
    in_DX = (undefined2)((ulong)local_6 >> 0x10);
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
      return (LRESULT)CONCAT22(in_DX,pvVar2);
    }
  }
  if (local_6 != NULL)
  {
    return (LRESULT)CONCAT22(in_DX,(void *)local_6);
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



void __stdcall16far Helper_Free_Pointer_Offset0_a582(void *param_1)
{
  free_if_not_null((void *)*(void **)param_1);
  return;
}



void * __stdcall16far Helper_ZeroFill_24Bytes_a598(void *param_1)
{
  astruct_22 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_22 *)param_1;
  *(undefined2 *)param_1 = 0x0;
  uVar1->field2_0x2 = 0x0;
  uVar1->field3_0x6 = 0x0;
  uVar1->field4_0xa = 0x0;
  uVar1->field5_0xc = 0x0;
  uVar1->field6_0x10 = 0x0;
  uVar1->field7_0x12 = 0x0;
  uVar1->field8_0x14 = 0x0;
  uVar1->field9_0x16 = 0x0;
  return param_1;
}



// Internal destructor for managed object collections. Iteratively calls the scalar
// destructor (A582) for all items in the buffer before freeing the buffer itself.

void __stdcall16far UI_Managed_Collection_dtor_Internal_a5d0(void *param_1)
{
  int iVar1;
  astruct_21 *uVar4;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (astruct_21 *)param_1;
  iVar1 = uVar4->field2_0x2;
  if (uVar4->field3_0x4 != 0x0 || iVar1 != 0x0)
  {
    call_function_ptr_n_times_simple((void *)0xa582,0x1040,*(u16 *)(iVar1 + -0x2));
    free_if_not_null((void *)(iVar1 + -0x2));
  }
  free_if_not_null((void *)uVar4->field10_0xc);
  return;
}



// Duplicates a provided string and stores it along with a 16-bit ID into a metadata
// structure.

void __stdcall16far
UI_Component_Set_Metadata_Strings_a626(void *param_1,char *param_2,uint16_t param_3)
{
  char *pcVar1;
  
  pcVar1 = strdup_allocate((char *)param_2);
  *(char **)param_1 = pcVar1;
  *(uint16_t *)((int)(void *)param_1 + 0x2) = param_3;
  return;
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
  undefined2 in_DX;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Displays a multi-line message box with a summary report using string resources
// 0x7EF-0x7F2.

void __stdcall16far UI_Show_Summary_Report_MessageBox_a85a(u32 param_1)
{
  char *ptr;
  undefined2 in_DX;
  char *unaff_SS;
  undefined2 in_stack_0000fdee;
  char local_206 [0x102];
  char local_104 [0x102];
  
  ptr = allocate_memory(CONCAT22(in_stack_0000fdee,0x1000));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_206,0x100),
             (long)CONCAT22(0x57b,unaff_SS));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(ptr,0x3ff),
             CONCAT22(0x7ef,in_DX));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7f0,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7f1,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7f2,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  MessageBox16(0x0,local_206,unaff_SS,(ushort)ptr);
  free_if_not_null(ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Exhaustive refresh logic for the entity detail/research dialog. Formats status
// strings, updates value labels, and iterates through 36 research categories to
// populate dynamic control pairs.

void __stdcall16far UI_SubDialog_TypeAC08_Refresh_Logic_a94a(void *param_1)
{
  int iVar1;
  int iVar2;
  uint16_t uVar3;
  char *pcVar4;
  HWND16 HVar5;
  int iVar6;
  undefined2 uVar7;
  void *pvVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  bool bVar10;
  char *context;
  long lVar11;
  void *pvVar12;
  u16 uStack_120;
  void *pvStack_11e;
  HWND16 HStack_116;
  HWND16 HStack_114;
  char local_102 [0x100];
  
  context = (char *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar8 = (void *)param_1;
  Entity_Format_Full_Name_Label_Logic
            ((char *)context,(long)CONCAT22(unaff_SS,local_102));
  SetDlgItemText((char *)CONCAT22(unaff_SS,local_102),0x1f2,
                 *(HWND16 *)((int)pvVar8 + 0x6));
  Entity_Get_Category_Name_Logic
            (context,local_102,unaff_SS,(int)*(undefined4 *)((int)pvVar8 + 0x94),
             (int)((ulong)*(undefined4 *)((int)pvVar8 + 0x94) >> 0x10));
  SetDlgItemText((char *)CONCAT22(unaff_SS,local_102),0x1774,
                 *(HWND16 *)((int)pvVar8 + 0x6));
  Entity_Format_Detailed_Status_Label_Logic
            ((long)context,local_102,*(long *)((int)pvVar8 + 0x94));
  SetDlgItemText((char *)CONCAT22(unaff_SS,local_102),0x1773,
                 *(HWND16 *)((int)pvVar8 + 0x6));
  uVar3 = UI_Component_Get_Entity_Value_at_1A_Logic_6ddc
                    ((void *)*(undefined4 *)((int)pvVar8 + 0x94));
  SetDlgItemInt(0x0,uVar3,0x1f5,*(HWND16 *)((int)pvVar8 + 0x6));
  uVar3 = UI_Component_Get_Entity_Special_Status_Logic_6e14
                    ((void *)*(undefined4 *)((int)pvVar8 + 0x94));
  SetDlgItemInt(0x0,uVar3,0x1f6,*(HWND16 *)((int)pvVar8 + 0x6));
  if (*(int *)((int)pvVar8 + 0x98) != 0x0)
  {
    lVar11 = Entity_Get_Indirect_Long_at_Offset_14_Logic((long)context);
    iVar6 = (int)((ulong)lVar11 >> 0x10);
    iVar2 = (int)lVar11;
    if (iVar6 != 0x0 || iVar2 != 0x0)
    {
      lVar11 = *(long *)((int)*(undefined4 *)((int)pvVar8 + 0x94) + 0x26);
      HStack_114 = 0x1798;
      HStack_116 = 0x17c3;
      *(undefined2 *)((int)pvVar8 + 0xea) = 0x0;
      for (uStack_120 = 0x1; (int)uStack_120 < 0x25; uStack_120 += 0x1)
      {
        if (lVar11 == 0x0)
        {
          pvVar12 = NULL;
        }
        else
        {
          pvVar12 = UI_Item_List_Find_Item_FarPtr_Logic
                              ((int)lVar11,(int)((ulong)lVar11 >> 0x10),uStack_120);
        }
        uVar7 = (undefined2)((ulong)pvVar12 >> 0x10);
        bVar10 = *(long *)(uStack_120 * 0x4 + iVar2) != 0x0;
        if (bVar10)
        {
          pcVar4 = Lookup_Research_Category_Name_by_ID_Logic_c0d8(uStack_120);
          SetDlgItemText((char *)CONCAT22(uVar7,pcVar4),HStack_114,
                         *(HWND16 *)((int)pvVar8 + 0x6));
          SetDlgItemInt(0x0,*(uint16_t *)(iVar2 + uStack_120 * 0x4),HStack_116,
                        *(HWND16 *)((int)pvVar8 + 0x6));
        }
        pvStack_11e = (void *)pvVar12;
        if (pvVar12 != NULL)
        {
          if (!bVar10)
          {
            pcVar4 = Lookup_Research_Category_Name_by_ID_Logic_c0d8(uStack_120);
            SetDlgItemText((char *)CONCAT22(uVar7,pcVar4),HStack_114,
                           *(HWND16 *)((int)pvVar8 + 0x6));
          }
          SetDlgItemInt(0x0,(uint16_t)pvStack_11e,HStack_116,
                        *(HWND16 *)((int)pvVar8 + 0x6));
          iVar1 = *(int *)((int)pvVar8 + 0xea);
          HVar5 = GetDlgItem16(HStack_114,*(short *)((int)pvVar8 + 0x6));
          *(HWND16 *)((int)pvVar8 + iVar1 * 0x2 + 0x9a) = HVar5;
          *(int *)((int)pvVar8 + 0xea) = *(int *)((int)pvVar8 + 0xea) + 0x1;
          iVar1 = *(int *)((int)pvVar8 + 0xea);
          HVar5 = GetDlgItem16(HStack_116,*(short *)((int)pvVar8 + 0x6));
          *(HWND16 *)((int)pvVar8 + iVar1 * 0x2 + 0x9a) = HVar5;
          *(int *)((int)pvVar8 + 0xea) = *(int *)((int)pvVar8 + 0xea) + 0x1;
          bVar10 = true;
        }
        if (bVar10)
        {
          HStack_114 += 0x1;
          HStack_116 += 0x1;
        }
      }
    }
  }
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Displays a message box with detailed information about a building using string
// resources 0x7F3 and 0x7F4.

void __stdcall16far
UI_Show_Building_Info_MessageBox_ad66
          (uint16_t param_1,uint16_t param_2,uint16_t param_3)
{
  char *ptr;
  char *unaff_SS;
  undefined2 in_stack_0000fdee;
  uint8_t local_206 [0x102];
  char local_104 [0x102];
  
  ptr = allocate_memory(CONCAT22(in_stack_0000fdee,0x1000));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_206,0x100),
             (long)CONCAT22(0x57b,unaff_SS));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(ptr,0x3ff),
             CONCAT22(0x7f3,param_3));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7f4,unaff_SS));
  strcat_append((char *)CONCAT22(param_3,ptr),(char *)CONCAT22(unaff_SS,local_104));
  MessageBox16(0x0,(char *)local_206,unaff_SS,(ushort)ptr);
  free_if_not_null(ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Refreshes the labels in a building status dialog. Iterates through 10 entity slots,
// calculates time remaining until completion (Current Tick - Entity Tick), and formats
// status descriptions.

void __stdcall16far UI_Building_Status_Dialog_Refresh_Logic_ae04(void *param_1)
{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  char *pcVar4;
  uint32_t uVar11;
  undefined2 uVar5;
  void *pvVar6;
  long *plVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  void *puVar9;
  void *pvVar9;
  u32 uVar10;
  int iStack_118;
  uint8_t local_102 [0x100];
  
  puVar9 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar6 = (void *)param_1;
  Entity_Format_Full_Name_Label_Logic((char *)puVar9,(long)CONCAT22(unaff_SS,local_102))
  ;
  SetDlgItemText((uint8_t *)CONCAT22(unaff_SS,local_102),0x1778,
                 *(HWND16 *)((int)pvVar6 + 0x6));
  pvVar9 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8
                     ((void *)*(undefined4 *)((int)pvVar6 + 0x94));
  uVar11 = (uint32_t)((ulong)pvVar9 >> 0x10);
  pvVar3 = (void *)pvVar9;
  uVar10 = Simulator_Global_Get_Current_Tick_8326();
  uVar5 = (undefined2)(uVar10 >> 0x10);
  iVar1 = 0x0;
  bVar2 = false;
  for (iStack_118 = 0x0; iStack_118 < 0xa; iStack_118 += 0x1)
  {
    if (*(int *)((int)pvVar3 + iStack_118 * 0xc + 0x22) != 0x0 ||
        *(int *)((int)pvVar3 + iStack_118 * 0xc + 0x20) != 0x0)
    {
      plVar7 = (long *)((int)pvVar3 + iStack_118 * 0xc + 0x20);
      pcVar4 = Lookup_Entity_Category_Name_by_ID_Logic_c222(*(u16 *)(plVar7 + 0x1));
      SetDlgItemText((char *)CONCAT22(uVar5,pcVar4),iVar1 + 0x1d2,
                     *(HWND16 *)((int)pvVar6 + 0x6));
      _wsprintf16((uint8_t *)CONCAT22(unaff_SS,local_102),s__ld_1050_5ef4,
                  (void *)(*plVar7 - uVar10));
      SetDlgItemText((uint8_t *)CONCAT22(unaff_SS,local_102),iVar1 + 0x1dc,
                     *(HWND16 *)((int)pvVar6 + 0x6));
      UI_Format_Status_Description_Logic
                ((void *)(void *)*(undefined4 *)((int)pvVar6 + 0x98),
                 (char *)((ulong)*(undefined4 *)((int)pvVar6 + 0x98) >> 0x10),local_102)
      ;
      SetDlgItemText((uint8_t *)CONCAT22(unaff_SS,local_102),iVar1 + 0x1e6,
                     *(HWND16 *)((int)pvVar6 + 0x6));
      iVar1 += 0x1;
      bVar2 = true;
    }
  }
  if (!bVar2)
  {
    pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
    SetDlgItemText((char *)CONCAT22(uVar5,pcVar4),0x1d2,*(HWND16 *)((int)pvVar6 + 0x6));
  }
  return;
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
