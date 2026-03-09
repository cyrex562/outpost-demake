/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 40/54
 * Original lines (combined): 118278-119269
 * Boundaries: top-level declarations/definitions only
 */




// Synchronizes an internal state value (offset 10 of resource manager) with the
// currently checked radio button (0x1829-0x182F) in the sub-dialog.

void __stdcall16far UI_SubDialog_Sync_Radio_State_cdd6(void *this_ptr,int is_active)
{
  uint16_t uVar1;
  astruct_94 *uVar2;
  undefined2 uVar3;
  
  uVar2 = (astruct_94 *)this_ptr;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  if (is_active == 0x0)
  {
    *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x0;
  }
  else
  {
    uVar1 = IsDlgButtonChecked16(0x182e,uVar2->field6_0x6);
    if (uVar1 == 0x0)
    {
      uVar1 = IsDlgButtonChecked16(0x182f,uVar2->field6_0x6);
      if (uVar1 == 0x0)
      {
        uVar1 = IsDlgButtonChecked16(0x1829,uVar2->field6_0x6);
        if (uVar1 == 0x0)
        {
          uVar1 = IsDlgButtonChecked16(0x182a,uVar2->field6_0x6);
          if (uVar1 == 0x0)
          {
            uVar1 = IsDlgButtonChecked16(0x182c,uVar2->field6_0x6);
            if (uVar1 == 0x0)
            {
              uVar1 = IsDlgButtonChecked16(0x182d,uVar2->field6_0x6);
              if (uVar1 != 0x0)
              {
                *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x7;
              }
            }
            else
            {
              *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x6;
            }
          }
          else
          {
            *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x4;
          }
        }
        else
        {
          *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x3;
        }
      }
      else
      {
        *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x2;
      }
    }
    else
    {
      *(undefined2 *)((int)uVar2->field141_0x8e + 0xa) = 0x1;
    }
  }
  uVar2->field142_0x92 = 0x0;
  return;
}



void * __stdcall16far
UI_SubDialog_TypeCF00_dtor_Scalar_Deleting_ceda(void *param_1,byte param_2)
{
  UI_SubDialog_TypeCF00_dtor_Internal_cd5c(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



u16 * __stdcall16far UI_Main_Window_ctor_init_cf6c(u16 *param_1)
{
  u16 *puVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined *puVar4;
  undefined4 in_stack_0000fff8;
  void *FARPROC16_func;
  
  puVar2 = (undefined *)((ulong)param_1 >> 0x10);
  puVar1 = (u16 *)param_1;
  *param_1 = (u16)(char *)s_1_1050_389a;
  puVar1[0x1] = 0x1008;
  (puVar1 + 0x2)[0x0] = 0x0;
  (puVar1 + 0x2)[0x1] = 0x0;
  puVar1[0x4] = 0x0;
  *param_1 = 0xd23e;
  puVar1[0x1] = 0x1038;
  FARPROC16_func =
       (void *)CONCAT22((int)((ulong)in_stack_0000fff8 >> 0x10),(void *)0x1038);
  p_UIMainWindow = (undefined *)puVar1;
  PTR_DAT_1050_0000_1050_5bca = puVar2;
  pvVar3 = MakeProcInstance16((HANDLE16)PTR_DAT_1050_0000_1050_038c,FARPROC16_func);
  puVar1[0x2] = (u16)pvVar3;
  puVar1[0x3] = (u16)((ulong)pvVar3 >> 0x10);
  puVar4 = MakeProcInstance16((HANDLE16)PTR_DAT_1050_0000_1050_038c,
                              (void *)CONCAT22((int)((ulong)FARPROC16_func >> 0x10),
                                               (void *)0x1038));
  PTR_DAT_1050_0000_1050_5bcc = (undefined *)puVar4;
  PTR_DAT_1050_0000_1050_5bce = (undefined *)((ulong)puVar4 >> 0x10);
  return param_1;
}



// Handles specific window events related to property management, object destruction,
// and font cleanup.

undefined2 __stdcall16far
UI_Window_Property_Event_Handler_d118(undefined4 param_1,ulong param_2,HWND16 param_3)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  void *in_AX;
  HANDLE16 HVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  HWND16 hwnd;
  undefined4 local_6;
  
  hwnd = 0x1050;
  HVar4 = GetProp16((char *)CONCAT22(in_AX,(char *)s_thisHi_1050_5bf3),param_3);
  puVar5 = (undefined4 *)
           GetProp16((char *)CONCAT22(in_AX,(char *)s_thisLo_1050_5bec),param_3);
  local_6 = (undefined4 *)CONCAT22(HVar4,puVar5);
  if (param_2._2_2_ == 0x30)
  {
    if ((HANDLE16)param_2 != 0x0)
    {
      SetProp16((HANDLE16)param_2,(void *)CONCAT22(param_3,in_AX),hwnd);
    }
  }
  else
  {
    if (param_2 < 0x310000)
    {
      cVar3 = (char)(param_2 >> 0x10);
      if (cVar3 == '\x02')
      {
        if (HVar4 != 0x0 || puVar5 != NULL)
        {
          puVar2 = (undefined2 *)*local_6;
          puVar1 = (undefined2 *)puVar2 + 0x6;
          (*(code *)*puVar1)(0x1538,puVar5,HVar4,param_1,param_2);
          if (local_6 != NULL)
          {
            puVar1 = (undefined2 *)puVar2;
            (*(code *)*puVar1)(0x1538,puVar5,HVar4,0x1);
          }
        }
        HVar4 = GetProp16((char *)CONCAT22(in_AX,(char *)s_hfont_1050_5bfa),param_3);
        if (HVar4 != 0x0)
        {
          DeleteObject16(HVar4);
          RemoveProp16((char *)CONCAT22(in_AX,(char *)s_hfont_1050_5c00),param_3);
        }
        return 0x1;
      }
      if (cVar3 == '\x06')
      {
        if (((HANDLE16)param_2 != 0x1) && ((HANDLE16)param_2 != 0x2))
        {
          *(undefined2 *)((int)*(undefined4 *)(undefined **)&p_UIMainWindow + 0x8) = 0x0
          ;
          return 0x1;
        }
        *(HWND16 *)((int)*(undefined4 *)(undefined **)&p_UIMainWindow + 0x8) = param_3;
        return 0x1;
      }
    }
    if (HVar4 != 0x0 || puVar5 != NULL)
    {
      puVar1 = (undefined2 *)((int)*local_6 + 0xc);
      uVar6 = (*(code *)*puVar1)(0x1538,puVar5,HVar4,param_1,param_2);
      return uVar6;
    }
  }
  return 0x0;
}



u16 * __stdcall16far
UI_SubDialog_TypeD23E_dtor_Scalar_Deleting_d218(void *this_ptr,u8 flags)
{
  UI_SubDialog_TypeD23E_dtor_Internal_cfda(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)this_ptr);
  }
  return (u16 *)this_ptr;
}



// Constructor for sub-dialog Type 0xD6EA (vtable 0xD6EA). Sets a flag at 0x74 to 1,
// indicating modal or persistent behavior. Base ID 0x13E.

void * __stdcall16far
UI_SubDialog_TypeD6EA_ctor_init_d242(void *this_ptr,u16 parent_hwnd)
{
  undefined2 uVar1;
  
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,0x13e0000,parent_hwnd);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)this_ptr = 0xd6ea;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  *(undefined2 *)((int)(void *)this_ptr + 0x74) = 0x1;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeD6EA_dtor_Internal_d276(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xd6ea;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes a sub-dialog with multiple complex controls, sets up their geometry via
// MapDialogRect, and plays a specific sound resource.

void __stdcall16far UI_SubDialog_Complex_Controls_Initialize_d2a2(void *param_1)
{
  void *pvVar1;
  HWND16 enable;
  char *hwnd;
  BOOL16 BVar2;
  void *in_DX;
  short map_id;
  int iVar3;
  undefined2 unaff_SI;
  int x;
  undefined2 unaff_SS;
  ushort msg;
  ushort w_param;
  void *this_ptr;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  void *local_e;
  int local_a;
  void *local_8;
  void *pvStack_6;
  int local_4;
  
  this_ptr = (void *)param_1;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  local_4 = 0x7;
  for (local_a = 0x0; x = (int)((ulong)param_1 >> 0x10), local_a < local_4;
      local_a += 0x1)
  {
    iVar3 = local_a * 0xc;
    local_16 = *(undefined2 *)(iVar3 + 0x5c0c);
    local_14 = *(undefined2 *)(iVar3 + 0x5c0e);
    local_12 = 0x1;
    local_10 = 0x1;
    MapDialogRect16((undefined2 *)CONCAT22(unaff_SS,&local_16),
                    *(HWND16 *)((int)this_ptr + 0x6));
    pvVar1 = allocate_memory(CONCAT22(unaff_SI,0x42));
    if (in_DX == NULL && pvVar1 == NULL)
    {
      pvVar1 = NULL;
      in_DX = NULL;
    }
    else
    {
      in_DX = UI_Complex_Control_ctor
                        (pvVar1,in_DX,0x1,local_14,local_16,0x104,0x103,0x102,
                         *(undefined2 *)(iVar3 + 0x5c10),
                         *(undefined2 *)((int)this_ptr + 0x6));
    }
    _local_8 = (void *)CONCAT22(in_DX,pvVar1);
    if (*(int *)(local_a * 0xc + 0x5c12) == 0x0)
    {
      EnableWindow16(0x0,*(BOOL16 *)((int)pvVar1 + 0x18));
    }
  }
  local_e = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
  map_id = (short)((ulong)local_e >> 0x10);
  iVar3 = UI_Component_Get_Dynamic_Offset_Difference_Logic((void *)local_e,map_id);
  if (iVar3 == 0x0)
  {
    enable = GetDlgItem16(0x14a,*(short *)((int)this_ptr + 0x6));
    EnableWindow16(0x0,enable);
    uVar5 = *(undefined2 *)((int)this_ptr + 0x6);
    w_param = 0xc;
    uVar4 = 0x144;
    msg = 0x0;
    hwnd = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
    SendDlgItemMessage16((HWND16)hwnd,map_id,msg,w_param,CONCAT22(uVar5,uVar4));
  }
  UI_Window_Move_or_Center_826c(this_ptr,x,-0x1);
  BVar2 = ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  media_play_from_full_resource_ptr_logic((void *)_p_UIPanelContainer,0x9a0001);
  *(BOOL16 *)((int)this_ptr + 0x8c) = BVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Complex command handler for dialog Type 0xD6EA. Manages a sequential interaction flow
// (0x145-0x14B), playing sounds, updating labels, and potentially triggering main UI
// notifications (0xAF, 0xB8).

void __stdcall16far
UI_SubDialog_TypeD6EA_On_Command_d400
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  HWND16 HVar1;
  undefined **enable;
  int iVar2;
  BOOL16 BVar3;
  char *pcVar4;
  short in_DX;
  int map_id;
  short id;
  int unaff_SS;
  LRESULT pvVar5;
  void *pvVar6;
  long lVar7;
  ushort uVar8;
  ushort uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 in_stack_0000ffe6;
  undefined1 local_c [0x4];
  ushort uStack_8;
  undefined4 uStack_6;
  
  uStack_6 = 0x0;
  uStack_8 = 0x0;
  switch(param_4._2_2_)
  {
  case 0x145:
    HVar1 = GetDlgItem16(0x146,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,HVar1);
    uStack_6 = 0x13f0647;
    enable = (undefined **)((char *)s_Unsupported_FileStructType_in_Op_1050_01ca + 0x27)
    ;
    goto LAB_1038_d490;
  case 0x146:
    uStack_6 = 0x1400648;
    init_word_pair(local_c,unaff_SS,0x1);
    media_play_from_resource_ptr_wrapper
              ((void *)_p_UIPanelContainer,(void *)((ulong)_p_UIPanelContainer >> 0x10))
    ;
    pvVar6 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
    map_id = (int)((ulong)pvVar6 >> 0x10);
    iVar2 = map_id;
    Resource_Category_Increment_Mapped_Offset_Value_Logic((void *)pvVar6,map_id);
    HVar1 = GetDlgItem16(0x145,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x0,HVar1);
    uVar10 = *(undefined2 *)((int)param_1 + 0x6);
    uVar9 = 0xc;
    uVar11 = 0x13f;
    uVar8 = 0x0;
    pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x649);
    pvVar5 = SendDlgItemMessage16
                       ((HWND16)pcVar4,iVar2,uVar8,uVar9,CONCAT22(uVar10,uVar11));
    id = (short)((ulong)pvVar5 >> 0x10);
    HVar1 = GetDlgItem16(0x146,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x0,HVar1);
    iVar2 = UI_Component_Get_Dynamic_Offset_Difference_Logic((void *)pvVar6,map_id);
    if (iVar2 == 0x0)
    {
      HVar1 = GetDlgItem16(0x14a,*(short *)((int)param_1 + 0x6));
      EnableWindow16(0x0,HVar1);
      uVar10 = *(undefined2 *)((int)param_1 + 0x6);
      uVar9 = 0xc;
      uVar11 = 0x144;
      uVar8 = 0x0;
      pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                         ((int)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
      SendDlgItemMessage16((HWND16)pcVar4,id,uVar8,uVar9,CONCAT22(uVar10,uVar11));
    }
    enable = (undefined **)&p_CurrentHeapContext;
    lVar7 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    in_DX = (short)((ulong)lVar7 >> 0x10);
    if (*(int *)((int)lVar7 + 0x20) != 0x0)
    {
      enable = (undefined **)g_ParentHWND;
      PostMessage16(0x0,0x0,0xaf,(long)CONCAT22(in_stack_0000ffe6,g_ParentHWND));
    }
    break;
  case 0x147:
    HVar1 = GetDlgItem16(0x148,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,HVar1);
    uStack_6 = 0x1410647;
    enable = (undefined **)((char *)s_Unsupported_FileStructType_in_Op_1050_01ca + 0x2b)
    ;
    goto LAB_1038_d490;
  case 0x148:
    HVar1 = GetDlgItem16(0x149,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,HVar1);
    uStack_6 = 0x1420647;
    enable = (undefined **)((char *)s_Unsupported_FileStructType_in_Op_1050_01ca + 0x28)
    ;
LAB_1038_d490:
    media_play_from_resource_id_shorthand
              ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
    break;
  case 0x149:
    uStack_6 = 0x1430648;
    PostMessage16(0x0,0x0,0xb8,(long)CONCAT22(in_stack_0000ffe6,g_ParentHWND));
    enable = (undefined **)*(HWND16 *)((int)param_1 + 0x6);
    DestroyWindow16((HWND16)enable);
    break;
  case 0x14a:
    HVar1 = GetDlgItem16(0x145,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,HVar1);
    enable = (undefined **)*(HWND16 *)((int)param_1 + 0x6);
    uVar9 = 0xc;
    uVar10 = 0x140;
    uVar8 = 0x0;
    pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x649);
    pvVar5 = SendDlgItemMessage16
                       ((HWND16)pcVar4,in_DX,uVar8,uVar9,CONCAT22(enable,uVar10));
    in_DX = (short)((ulong)pvVar5 >> 0x10);
    break;
  case 0x14b:
    enable = (undefined **)GetDlgItem16(0x147,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,(BOOL16)enable);
    break;
  default:
    UI_SubDialog_Base_On_Command_Logic_7b3c
              (param_1,param_2,param_3,(ushort)param_4,
               CONCAT22(in_stack_0000ffe6,param_4._2_2_));
    return;
  }
  if ((uStack_6._2_2_ != 0x0) && ((int)uStack_6 != 0x0))
  {
    enable = (undefined **)*(HWND16 *)((int)param_1 + 0x6);
    BVar3 = IsWindow16((HWND16)enable);
    if (BVar3 != 0x0)
    {
      uVar10 = *(undefined2 *)((int)param_1 + 0x6);
      uVar8 = 0x0;
      uVar9 = 0xc;
      uVar11 = uStack_6._2_2_;
      pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                         ((int)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10),(int)uStack_6);
      SendDlgItemMessage16((HWND16)pcVar4,in_DX,uVar8,uVar9,CONCAT22(uVar10,uVar11));
    }
  }
  if (uStack_8 != 0x0)
  {
    PostMessage16(0x0,0x0,uStack_8,(long)CONCAT22(enable,g_ParentHWND));
  }
  return;
}



void * __stdcall16far
UI_SubDialog_TypeD6EA_dtor_Scalar_Deleting_d6c4(void *param_1,byte param_2)
{
  UI_SubDialog_TypeD6EA_dtor_Internal_d276(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xE0D4 (vtable 0xE0D4). Links to Resource 0x2B and
// triggers a virtual update. Base ID 0x11B.

void * __stdcall16far
UI_SubDialog_TypeE0D4_ctor_init_d756(void *this_ptr,u16 parent_hwnd)
{
  undefined2 *puVar1;
  astruct_92 *uVar2;
  undefined2 uVar3;
  long lVar4;
  
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,0x11b0000,parent_hwnd);
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_92 *)this_ptr;
  uVar2->field141_0x8e = 0x0;
  uVar2->field142_0x90 = 0x0;
  uVar2->field143_0x92 = NULL;
  uVar2->field144_0x96 = 0x0;
  *(undefined2 *)this_ptr = 0xe0d4;
  uVar2->field2_0x2 = 0x1038;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  *(int *)&uVar2->field143_0x92 = (int)lVar4;
  *(undefined2 *)((int)&uVar2->field143_0x92 + 0x2) = (int)((ulong)lVar4 >> 0x10);
  puVar1 = (undefined2 *)((int)*uVar2->field143_0x92 + 0x4);
  (*(code *)*puVar1)();
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeE0D4_dtor_Internal_d7d0(void *this_ptr)
{
  astruct_91 *uVar1;
  undefined2 uVar2;
  void *unaff_CS;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_91 *)this_ptr;
  *(undefined2 *)this_ptr = 0xe0d4;
  uVar1->field2_0x2 = 0x1038;
  if (uVar1->field142_0x90 != 0x0)
  {
    unaff_CS = (void *)0x1010;
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)_p_UIPanelContainer,(long)this_ptr);
  }
  if (uVar1->field143_0x92 != 0x0)
  {
    unaff_CS = (void *)0x1010;
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)uVar1->field143_0x92,(long)this_ptr);
  }
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  free_if_not_null((void *)uVar1->field144_0x96);
  UI_SubDialog_Base_dtor_Internal_782c(uVar1);
  return;
}



// Virtual event handler for dialog Type 0xE0D4. Handles command forwarding (0x10), flag
// resets (0x01), and batch colony component refreshes (0x03).

void __stdcall16far
UI_SubDialog_TypeE0D4_On_Event_Logic_d840(void *this_ptr,u16 event_id)
{
  int iVar1;
  undefined2 unaff_BP;
  undefined2 uVar2;
  
  iVar1 = (int)this_ptr;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  if (event_id == 0x10)
  {
    if (*(int *)(iVar1 + 0x8e) != 0x0)
    {
      PostMessage16(0x0,0x0,*(ushort *)(iVar1 + 0x8e),
                    CONCAT22(unaff_BP,*(undefined2 *)(iVar1 + 0x6)));
      *(undefined2 *)(iVar1 + 0x8e) = 0x0;
      return;
    }
  }
  else if (event_id < 0x11)
  {
    if ((char)event_id == '\x01')
    {
      *(undefined2 *)(iVar1 + 0x90) = 0x0;
      *(undefined4 *)(iVar1 + 0x92) = 0x0;
      return;
    }
    if ((char)event_id == '\x03')
    {
      UI_Colony_Batch_Reset_Component_Flags_e03e(this_ptr);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes and positions the colony summary dialog, creating and enabling multiple
// complex controls based on a dynamic count.

void __stdcall16far UI_Colony_Summary_Dialog_Initialize_and_Layout_d8ae(void *param_1)
{
  void *pvVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined *in_DX;
  int iVar4;
  undefined2 unaff_SI;
  undefined2 uVar5;
  undefined2 unaff_SS;
  void *this_ptr;
  undefined2 uVar6;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 *local_1e;
  undefined *puStack_1c;
  long local_e;
  int local_a;
  int local_8;
  HCURSOR16 local_6;
  HCURSOR16 local_4;
  
  local_4 = LoadCursor16((void *)0x7f02,0x0);
  local_6 = SetCursor16(local_4);
  this_ptr = (void *)param_1;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  local_8 = get_const_10_stub();
  if (_g_AllocatedBlock_Offset == NULL)
  {
    local_1e = init_memory_allocator();
  }
  else
  {
    local_1e = (undefined2 *)g_AllocatedBlock_Offset;
    in_DX = g_AllocatedBlock_Segment;
  }
  puStack_1c = in_DX;
  pvVar3 = alloc_with_hooks((ulong)(uint)((local_8 + 0x2) * 0x4),0x1,local_1e);
  *(undefined2 *)((int)this_ptr + 0x96) = pvVar3;
  *(undefined2 *)((int)this_ptr + 0x98) = in_DX;
  for (local_a = 0x1; local_a <= local_8; local_a += 0x1)
  {
    local_1e = UI_System_Reset_Flags_and_Get_Entry_Ptr
                         ((int)*(undefined4 *)((int)this_ptr + 0x92));
    local_26 = *local_1e;
    local_24 = local_1e[0x1];
    local_22 = 0x1;
    local_20 = 0x1;
    puStack_1c = in_DX;
    MapDialogRect16((undefined2 *)CONCAT22(unaff_SS,&local_26),
                    *(HWND16 *)((int)this_ptr + 0x6));
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x42));
    if (in_DX == NULL && pvVar3 == NULL)
    {
      *(undefined4 *)((int)*(undefined4 *)((int)this_ptr + 0x96) + local_a * 0x4) = 0x0;
      in_DX = NULL;
    }
    else
    {
      in_DX = UI_Complex_Control_ctor
                        (pvVar3,in_DX,0x0,local_24,local_26,0x101,0x100,0xff,
                         local_1e[0x2],*(undefined2 *)((int)this_ptr + 0x6));
      uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x96) >> 0x10);
      iVar4 = (int)*(undefined4 *)((int)this_ptr + 0x96);
      *(undefined2 *)(iVar4 + local_a * 0x4) = pvVar3;
      *(undefined2 *)(iVar4 + local_a * 0x4 + 0x2) = in_DX;
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x96) >> 0x10);
    iVar4 = (int)*(undefined4 *)((int)this_ptr + 0x96);
    if (*(long *)(iVar4 + local_a * 0x4) != 0x0)
    {
      uVar2 = *(undefined4 *)(iVar4 + local_a * 0x4);
      *(undefined2 *)((int)uVar2 + 0x3e) = 0x1;
      pvVar1 = (void *)*(undefined4 *)
                        ((int)*(undefined4 *)((int)this_ptr + 0x96) + local_a * 0x4);
      UI_Complex_Control_Enable_Window_9234
                ((void *)pvVar1,(ushort)((ulong)pvVar1 >> 0x10));
    }
  }
  local_e = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  SetWindowText16((void *)*(undefined4 *)((int)local_e + 0x68),
                  *(HWND16 *)((int)this_ptr + 0x6));
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  SetCursor16(local_6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the colony dialog, managing various colony-related actions like
// abandonment, settings, help, and spawning sub-dialogs.

void __stdcall16far
UI_Colony_Dialog_On_Command_da68
          (void *param_1,ushort param_2,ushort param_3,ulong param_4)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint in_DX;
  uint uVar4;
  uint extraout_DX;
  undefined2 uVar5;
  int unaff_SS;
  void *pvVar6;
  int dialog_id;
  undefined2 in_stack_0000ffea;
  undefined4 local_e;
  int local_8;
  int iStack_4;
  
  if (param_3 == 0x204)
  {
    UI_Colony_Dispatch_Building_Event_Dialog_de20(param_1,param_2,0x204,param_4);
    return;
  }
  iStack_4 = 0x0;
  local_8 = 0x0;
  if (param_4._2_2_ == 0x121)
  {
    iStack_4 = 0x6ec;
    local_8 = 0x15;
  }
  else if (param_4 < 0x1220000)
  {
    if (param_4._2_2_ == 0x100)
    {
      if (*(int *)((int)param_1 + 0x8e) == 0x0)
      {
        UI_Container_Remove_Item_at_Offset_4_Logic
                  ((undefined4 *)_p_UIPanelContainer,(long)CONCAT22(param_2,param_1));
        *(undefined2 *)((int)param_1 + 0x90) = 0x0;
      }
      iStack_4 = 0x72c;
      local_8 = 0x48;
    }
    else if (param_4._2_2_ == 0x11c)
    {
      UI_Colony_Confirm_Abandonment_Logic_df86((void *)CONCAT22(param_2,param_1));
    }
    else
    {
      if (param_4._2_2_ != 0x11d)
      {
        if (param_4._2_2_ == 0x11e)
        {
          dialog_id = 0x1d;
        }
        else
        {
          if (param_4._2_2_ != 0x120)
          {
LAB_1038_dc20:
            UI_SubDialog_Base_On_Command_Logic_7b3c
                      (param_1,param_2,param_3,(ushort)param_4,
                       CONCAT22(in_stack_0000ffea,param_4._2_2_));
            return;
          }
          dialog_id = 0x1c;
        }
        goto LAB_1038_db1c;
      }
      pvVar6 = UI_Colony_Apply_Settings_and_Swap_Context_df5c
                         ((void *)CONCAT22(param_2,param_1));
      in_DX = (uint)((ulong)pvVar6 >> 0x10);
    }
  }
  else
  {
    if (param_4._2_2_ == 0x122)
    {
      dialog_id = 0x14;
    }
    else
    {
      if (param_4._2_2_ != 0x123)
      {
        if (param_4._2_2_ == 0x125)
        {
          puVar1 = (undefined2 *)((int)*_p_UIPanelContainer + 0x4);
          (*(code *)*puVar1)();
          *(undefined2 *)((int)param_1 + 0x90) = 0x1;
          in_DX = extraout_DX;
          media_play_from_resource_id_shorthand
                    ((undefined4 *)_p_UIPanelContainer,
                     (int)((ulong)_p_UIPanelContainer >> 0x10));
          *(undefined2 *)((int)param_1 + 0x8e) = 0x100;
        }
        else if (param_4._2_2_ == 0x126)
        {
          *(undefined2 *)((int)param_1 + 0x8e) = 0x0;
          media_play_from_full_resource_ptr_logic
                    ((undefined4 *)_p_UIPanelContainer,0xcb0001);
          pvVar2 = Resource_Manager_Load_Resource_Object_Logic
                             ((void *)_p_GlobalResourceManager,
                              (int)((ulong)_p_GlobalResourceManager >> 0x10));
          WinHelp16(0x0,0x0,(void *)CONCAT22(pvVar2,(void *)((int)(undefined **)
                                                                  &p_CurrentHeapContext
                                                            + 0x1)),in_DX);
        }
        else
        {
          if (param_4._2_2_ != 0x127) goto LAB_1038_dc20;
          UI_Colony_Handle_Event_Outcome_Notification_dcb0(param_1,param_2);
        }
        goto LAB_1038_dac3;
      }
      dialog_id = 0x28;
    }
LAB_1038_db1c:
    pvVar6 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                       (_p_UISubDialogTable,*(uint16_t *)((int)param_1 + 0x8),dialog_id)
    ;
    in_DX = (uint)((ulong)pvVar6 >> 0x10);
  }
LAB_1038_dac3:
  if (iStack_4 == 0x0)
  {
    return;
  }
  if (true)
  {
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffea,0xb4));
    uVar4 = in_DX | (uint)pvVar2;
    if (uVar4 != 0x0)
    {
      uVar5 = 0x1040;
      puVar3 = (undefined4 *)
               UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                         (pvVar2,in_DX,*(undefined2 *)((int)param_1 + 0x6),0x0,0x2,0x634
                          ,iStack_4);
      goto LAB_1038_dc37;
    }
  }
  else
  {
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffea,0xb4));
    uVar4 = in_DX | (uint)pvVar2;
    if (uVar4 != 0x0)
    {
      uVar5 = 0x1040;
      puVar3 = (undefined4 *)
               UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                         (pvVar2,in_DX,*(undefined2 *)((int)param_1 + 0x6),0x0,0x3,0x634
                          ,iStack_4,0x0);
      goto LAB_1038_dc37;
    }
  }
  uVar5 = 0x1000;
  puVar3 = NULL;
  uVar4 = 0x0;
LAB_1038_dc37:
  local_e = (undefined4 *)CONCAT22(uVar4,puVar3);
  if (local_8 == 0x0)
  {
    puVar1 = (undefined2 *)((int)*local_e + 0x74);
    (*(code *)*puVar1)(uVar5,puVar3,uVar4);
  }
  else
  {
    init_word_pair(&stack0xffea,unaff_SS,0x1);
    puVar1 = (undefined2 *)((int)*local_e + 0x6c);
    (*(code *)*puVar1)(0x1008,puVar3,uVar4,&stack0xffea);
  }
  return;
}
