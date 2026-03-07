/*
 * Source: outpost.c
 * Chunk: 101/117
 * Original lines: 115367-116406
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Custom handler for WM_CTLCOLOR messages in sub-dialogs. Selects text/background
// colors from the global palette. For list box items (type 6), compares the control ID
// against the dialog's cached handle array (offset 0x94) to decide between primary and
// secondary highlight colors.

void * __stdcall16far
UI_SubDialog_Handle_Custom_CTLCOLOR_Logic_9dcc
          (void *this_ptr,int ctrl_id,uint ctrl_type)
{
  bool bVar1;
  HBRUSH16 HVar2;
  void *pvVar3;
  undefined2 in_DX;
  int iVar4;
  undefined2 uVar5;
  undefined *hdc;
  undefined *color;
  uint uStack_e;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar4 = (int)this_ptr;
  if (*(int *)(iVar4 + 0x8e) == 0x0)
  {
    HVar2 = CreateSolidBrush16(0x0);
    *(HBRUSH16 *)(iVar4 + 0x8e) = HVar2;
  }
  if (_PTR_DAT_1050_0000_1050_5b64 == NULL)
  {
    pvVar3 = Palette_Object_Get_Buffer_Ptr_maybe
                       ((void *)(void *)*(undefined4 *)
                                         ((int)_p_GlobalPaletteObject + 0xe));
    _PTR_DAT_1050_0000_1050_5b64 =
         (undefined *)
         (ulong)CONCAT12(*(undefined1 *)((int)pvVar3 + 0x94),
                         CONCAT11(*(undefined1 *)((int)pvVar3 + 0x95),
                                  *(undefined1 *)((int)pvVar3 + 0x96)));
    PTR_DAT_1050_0000_1050_5b68 =
         (undefined *)
         CONCAT11(*(undefined1 *)((int)pvVar3 + 0x3e5),
                  *(undefined1 *)((int)pvVar3 + 0x3e6));
    PTR_DAT_1050_0000_1050_5b6a = (undefined *)(uint)*(byte *)((int)pvVar3 + 0x3e4);
  }
  hdc = PTR_DAT_1050_0000_1050_5b64;
  color = PTR_DAT_1050_0000_1050_5b66;
  if (0x5 < ctrl_type)
  {
    if (ctrl_type != 0x6)
    {
      return NULL;
    }
    bVar1 = false;
    for (uStack_e = 0x0; uStack_e < *(uint *)(iVar4 + 0x128); uStack_e += 0x1)
    {
      if (*(int *)(iVar4 + 0x94 + uStack_e * 0x2) == ctrl_id)
      {
        bVar1 = true;
        break;
      }
    }
    if (bVar1)
    {
      hdc = PTR_DAT_1050_0000_1050_5b68;
      color = PTR_DAT_1050_0000_1050_5b6a;
    }
  }
  SetTextColor16((HDC16)hdc,(COLORREF)color);
  SetBkColor16(0x0,0x100);
  return (void *)CONCAT22(0x1050,(void *)*(undefined2 *)(iVar4 + 0x8e));
}



// Scalar deleting destructor for sub-dialog type B772.

void * __stdcall16far
UI_SubDialog_TypeB772_dtor_Scalar_Deleting_9ed4
          (void *param_1,undefined2 param_2,byte param_3)
{
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_SubDialog_TypeA0B6_ctor_init_9f76(void *this_ptr,u32 arg2,u16 arg3,u16 arg4,u16 arg5)
{
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,arg2,0xfba,arg5);
  *(undefined2 *)this_ptr = 0xa0b6;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeA0B6_dtor_Internal_9fa4(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xa0b6;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



void __stdcall16far UI_SubDialog_TypeA0B6_Show_and_Center_9fd0(void *this_ptr)
{
  int x;
  void *this_ptr_00;
  
  this_ptr_00 = (void *)this_ptr;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  x = (int)((ulong)this_ptr >> 0x10);
  UI_Window_Move_or_Center_826c(this_ptr_00,x,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
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



void __stdcall16far UI_Window_Conditional_Destroy_a072(u32 param_1,int param_2)
{
  if (param_2 != 0x0)
  {
    DestroyWindow16(*(HWND16 *)((int)param_1 + 0x6));
  }
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1038_a08c(void)
{
  return;
}



void * __stdcall16far
UI_SubDialog_TypeA0B6_dtor_Scalar_Deleting_a090(void *param_1,byte param_2)
{
  UI_SubDialog_TypeA0B6_dtor_Internal_9fa4(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_SubDialog_TypeA2D0_ctor_init_a122
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
          undefined4 param_5)
{
  UI_SubDialog_Base_ctor_init_7728(param_1,CONCAT22(param_3,param_2),param_4,param_5);
  param_1[0x47] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xa2d0;
  param_1[0x1] = 0x1038;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far UI_SubDialog_TypeA2D0_dtor_Internal_a156(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0xa2d0;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



void __stdcall16far
UI_SubDialog_TypeA2D0_On_Event_Stub_a174(void *this_ptr,int event_id)
{
  if (event_id == 0x1)
  {
    *(undefined2 *)((int)(void *)this_ptr + 0x8e) = 0x0;
  }
  return;
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



// A stub function returning constant 0.

undefined2 __stdcall16far const_0_stub_1038_a2a4(void)
{
  return 0x0;
}



void * __stdcall16far
UI_SubDialog_TypeA2D0_dtor_Scalar_Deleting_a2aa(void *param_1,byte param_2)
{
  UI_SubDialog_TypeA2D0_dtor_Internal_a156(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for sub-dialog Type 0xA428 (vtable 0xA428). Base dialog ID 0xFC7.

void * __stdcall16far UI_SubDialog_TypeA428_ctor_init_a33c(void *this_ptr,u16 arg2)
{
  UI_SubDialog_TypeA2D0_ctor_init_a122(this_ptr,0x1,0xfc70000,arg2);
  *(undefined2 *)this_ptr = 0xa428;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1038;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeA428_dtor_Internal_a36a(u16 *this_ptr)
{
  void *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0xa428;
  this_ptr[0x1] = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_TypeA2D0_dtor_Internal_a156((u16 *)CONCAT22(in_stack_00000006,this_ptr));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initialization and show logic for sub-dialog Type 0xA428. Positions the window, plays
// sound 0x10001, and displays it.

void __stdcall16far UI_SubDialog_TypeA428_Show_Logic_a396(void *param_1)
{
  undefined2 in_AX;
  undefined2 uVar1;
  void *this_ptr;
  
  this_ptr = (void *)param_1;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  UI_SubDialog_Calculate_Position_and_Center_Logic_a18c(param_1);
  media_play_from_full_resource_ptr_logic((void *)_p_UIPanelContainer,0x10001);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x8c) = in_AX;
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  return;
}



// Commit handler for dialog Type 0xA428. Notifies the parent window of completion via
// message 0x111 and destroys the window.

void __stdcall16far UI_SubDialog_TypeA428_On_Commit_Logic_a3d2(void *this_ptr)
{
  uint16_t uVar1;
  undefined2 unaff_BP;
  
  uVar1 = GetWindowWord16(-0x8,*(HWND16 *)((int)(void *)this_ptr + 0x6));
  PostMessage16(0x0,0x0,0x105,CONCAT22(unaff_BP,uVar1));
  UI_SubDialog_Base_Try_Destroy_7b98((void *)this_ptr);
  return;
}



u16 * __stdcall16far
UI_SubDialog_TypeA428_dtor_Scalar_Deleting_a402(u16 *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_TypeA428_dtor_Internal_a36a(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for sub-dialog Type 0xA62E (vtable 0xA62E). Base dialog ID 0xFC8.

u16 * __stdcall16far UI_SubDialog_TypeA62E_ctor_init_a494(void *this_ptr,u16 arg2)
{
  UI_SubDialog_TypeA2D0_ctor_init_a122(this_ptr,0x1,0xfc80000,arg2);
  *(undefined2 *)this_ptr = 0xa62e;
  ((u16 *)this_ptr)[0x1] = 0x1038;
  return (u16 *)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeA62E_dtor_Internal_a4c2(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xa62e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_TypeA2D0_dtor_Internal_a156(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initialization and show logic for sub-dialog Type 0xA62E. Plays sound 0x20001, sets
// window text from a resource, and centers the window.

void __stdcall16far UI_SubDialog_TypeA62E_Show_Logic_a4ee(void *this_ptr)
{
  void *lp_string;
  undefined2 in_AX;
  HWND16 hwnd;
  long lVar1;
  void *pvVar2;
  void *this_ptr_00;
  undefined2 uVar3;
  
  this_ptr_00 = (void *)this_ptr;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  media_play_from_full_resource_ptr_logic((void *)_p_UIPanelContainer,0x20001);
  *(undefined2 *)((int)this_ptr_00 + 0x8c) = in_AX;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  lp_string = (void *)*(undefined4 *)((int)lVar1 + 0x6c);
  hwnd = GetDlgItem16(0x114,*(short *)((int)this_ptr_00 + 0x6));
  pvVar2 = (void *)lp_string;
  SetWindowText16(lp_string,hwnd);
  SetFocus16(hwnd);
  SendMessage16(0x0,0xffff,0x0,CONCAT22(pvVar2,hwnd));
  UI_SubDialog_Calculate_Position_and_Center_Logic_a18c(this_ptr);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes a name update in a sub-dialog (likely for buildings), updates a component
// string at offset 0x6C, posts a notification message, and destroys the dialog.

void __stdcall16far
UI_SubDialog_Process_Name_Update_and_Notify_a584(void *param_1,int param_2)
{
  HWND16 HVar1;
  uint uVar2;
  uint16_t uVar3;
  void *this_ptr;
  undefined2 uVar4;
  void *unaff_SS;
  void *pvVar5;
  undefined2 uVar6;
  HWND16 in_stack_0000ffa8;
  char local_52 [0x50];
  
  if (param_2 != 0x0)
  {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    this_ptr = (void *)param_1;
    HVar1 = GetDlgItem16(0x114,*(short *)((int)this_ptr + 0x6));
    uVar6 = 0x50;
    GetWindowText16(0x50,(void *)CONCAT22(HVar1,unaff_SS),in_stack_0000ffa8);
    uVar2 = strlen_get_length((char *)CONCAT22(unaff_SS,local_52));
    if (uVar2 != 0x0)
    {
      pvVar5 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2)
      ;
      UI_Component_Set_String_at_Offset_6C_Logic
                ((void *)pvVar5,(char *)((ulong)pvVar5 >> 0x10));
      uVar3 = GetWindowWord16(-0x8,*(HWND16 *)((int)this_ptr + 0x6));
      PostMessage16(0x0,0x0,0x105,CONCAT22(uVar6,uVar3));
      UI_SubDialog_Base_Try_Destroy_7b98(this_ptr);
    }
  }
  return;
}



void * __stdcall16far
UI_SubDialog_TypeA62E_dtor_Scalar_Deleting_a608(void *this_ptr,byte flags)
{
  UI_SubDialog_TypeA62E_dtor_Internal_a4c2(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for sub-dialog Type 0xA832 (vtable 0xA832). Base dialog ID 0xFC9.

void * __stdcall16far UI_SubDialog_TypeA832_ctor_init_a69a(void *this_ptr,u16 arg2)
{
  UI_SubDialog_TypeA2D0_ctor_init_a122(this_ptr,0x1,0xfc90000,arg2);
  *(undefined2 *)this_ptr = 0xa832;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1038;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for sub-dialog component type 0xA832. Reverts vtable and cleans
// up via base A2D0 destructor.

void __stdcall16far UI_SubDialog_TypeA832_dtor_Internal_a6c8(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xa832;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_TypeA2D0_dtor_Internal_a156(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes and shows sub-dialog Type 0xA832. Sets window text from Resource 2
// (offset 0x68), plays sound 0x30001, and captures initial list box focus.

void __stdcall16far UI_SubDialog_TypeA832_Show_Logic_a6f4(void *this_ptr)
{
  void *lp_string;
  HWND16 hwnd;
  undefined2 uVar1;
  astruct_110 *uVar2;
  long lVar2;
  LRESULT pvVar3;
  void *this_ptr_00;
  undefined2 uVar4;
  
  this_ptr_00 = (void *)this_ptr;
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  lp_string = (void *)*(undefined4 *)((int)lVar2 + 0x68);
  hwnd = GetDlgItem16(0x115,*(short *)((int)this_ptr_00 + 0x6));
  uVar1 = SUB42(lp_string,0x0);
  SetWindowText16(lp_string,hwnd);
  SetFocus16(hwnd);
  pvVar3 = SendMessage16(0x0,0xffff,0x0,CONCAT22(uVar1,hwnd));
  uVar1 = SUB42(pvVar3,0x0);
  UI_SubDialog_Calculate_Position_and_Center_Logic_a18c(this_ptr);
  media_play_from_full_resource_ptr_logic((void *)_p_UIPanelContainer,0x30001);
  *(undefined2 *)((int)this_ptr_00 + 0x8c) = uVar1;
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Similar to a584, but updates a component string at offset 0x68 (likely for a
// different entity type or property).

void __stdcall16far
UI_SubDialog_Process_Name_Update_and_Notify_a788(void *param_1,int param_2)
{
  HWND16 HVar1;
  uint uVar2;
  uint16_t uVar3;
  void *this_ptr;
  undefined2 uVar4;
  void *unaff_SS;
  void *pvVar5;
  undefined2 uVar6;
  HWND16 in_stack_0000ffa8;
  char local_52 [0x50];
  
  if (param_2 != 0x0)
  {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    this_ptr = (void *)param_1;
    HVar1 = GetDlgItem16(0x115,*(short *)((int)this_ptr + 0x6));
    uVar6 = 0x50;
    GetWindowText16(0x50,(void *)CONCAT22(HVar1,unaff_SS),in_stack_0000ffa8);
    uVar2 = strlen_get_length((char *)CONCAT22(unaff_SS,local_52));
    if (uVar2 != 0x0)
    {
      pvVar5 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2)
      ;
      UI_Component_Set_String_at_Offset_68_Logic
                ((void *)pvVar5,(char *)((ulong)pvVar5 >> 0x10));
      uVar3 = GetWindowWord16(-0x8,*(HWND16 *)((int)this_ptr + 0x6));
      PostMessage16(0x0,0x0,0x105,CONCAT22(uVar6,uVar3));
      UI_SubDialog_Base_Try_Destroy_7b98(this_ptr);
    }
  }
  return;
}



void * __stdcall16far
UI_SubDialog_TypeA832_dtor_Scalar_Deleting_a80c(void *this_ptr,byte flags)
{
  UI_SubDialog_TypeA832_dtor_Internal_a6c8(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the Colony Settings/Selection dialog (vtable 0xAB16). Initializes
// base sub-dialog with ID 0xFCA.

u16 * __stdcall16far UI_Colony_Settings_Dialog_ctor_init_a89e(void *this_ptr,u16 arg2)
{
  UI_SubDialog_TypeA2D0_ctor_init_a122(this_ptr,0x1,0xfca0000,arg2);
  *(undefined2 *)this_ptr = 0xab16;
  ((u16 *)this_ptr)[0x1] = 0x1038;
  return (u16 *)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Colony_Settings_Dialog_dtor_Internal_a8cc(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xab16;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_TypeA2D0_dtor_Internal_a156(this_ptr);
  return;
}



// Handles control logic for the Colony Settings dialog. Enables/disables the
// confirmation button (0x11A) based on which radio button (0x116-0x119) is selected.

void __stdcall16far
UI_Colony_Settings_Dialog_On_Control_Logic_a8f8
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  HWND16 enable;
  undefined2 unaff_BP;
  HWND16 hwnd;
  
  if (param_4._2_2_ == 0x116)
  {
    SendDlgItemMessage16
              (0x0,0x0,0x1,0x401,CONCAT22(*(undefined2 *)((int)param_1 + 0x6),0x11a));
    enable = GetDlgItem16(0x11a,*(short *)((int)param_1 + 0x6));
    hwnd = 0x0;
  }
  else
  {
    if ((param_4._2_2_ == 0x116) || (0x2 < param_4._2_2_ - 0x117U))
    {
      UI_SubDialog_Base_On_Command_Logic_7b3c
                (param_1,param_2,param_3,(ushort)param_4,
                 CONCAT22(unaff_BP,param_4._2_2_));
      return;
    }
    enable = GetDlgItem16(0x11a,*(short *)((int)param_1 + 0x6));
    hwnd = 0x1;
  }
  EnableWindow16(hwnd,enable);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes and shows the Colony Settings dialog. Plays sound 0x40001, selects the
// first radio button by default, and disables the confirmation button until a valid
// selection is made.

void __stdcall16far UI_Colony_Settings_Dialog_Show_Logic_a972(void *this_ptr)
{
  HWND16 enable;
  BOOL16 BVar1;
  void *this_ptr_00;
  undefined2 uVar2;
  
  this_ptr_00 = (void *)this_ptr;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  SendDlgItemMessage16
            (0x0,0x0,0x1,0x401,CONCAT22(*(undefined2 *)((int)this_ptr_00 + 0x6),0x116));
  SendDlgItemMessage16
            (0x0,0x0,0x1,0x401,CONCAT22(*(undefined2 *)((int)this_ptr_00 + 0x6),0x11a));
  enable = GetDlgItem16(0x11a,*(short *)((int)this_ptr_00 + 0x6));
  BVar1 = EnableWindow16(0x0,enable);
  media_play_from_full_resource_ptr_logic((void *)_p_UIPanelContainer,0x40001);
  *(BOOL16 *)((int)this_ptr_00 + 0x8c) = BVar1;
  UI_SubDialog_Calculate_Position_and_Center_Logic_a18c(this_ptr);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Finalizes selection in the Colony Settings dialog. Maps radio buttons (0x116-0x119)
// to a global state variable (1050:13AE), updates resource metrics, and notifies the
// main window via message 0x111.

void __stdcall16far
UI_Colony_Settings_Dialog_Execute_Action_a9fa(void *this_ptr,int is_commit)
{
  uint16_t uVar1;
  void *this_ptr_00;
  undefined2 uVar2;
  long lVar3;
  LRESULT pvVar4;
  undefined2 in_stack_0000fff0;
  
  if (is_commit != 0x0)
  {
    lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
    this_ptr_00 = (void *)this_ptr;
    pvVar4 = SendDlgItemMessage16
                       (0x0,0x0,0x0,0x400,
                        CONCAT22(*(undefined2 *)((int)this_ptr_00 + 0x6),0x116));
    if (pvVar4 == NULL)
    {
      pvVar4 = SendDlgItemMessage16
                         (0x0,0x0,0x0,0x400,
                          CONCAT22(*(undefined2 *)((int)this_ptr_00 + 0x6),0x117));
      if (pvVar4 == NULL)
      {
        pvVar4 = SendDlgItemMessage16
                           (0x0,0x0,0x0,0x400,
                            CONCAT22(*(undefined2 *)((int)this_ptr_00 + 0x6),0x118));
        if (pvVar4 == NULL)
        {
          pvVar4 = SendDlgItemMessage16
                             (0x0,0x0,0x0,0x400,
                              CONCAT22(*(undefined2 *)((int)this_ptr_00 + 0x6),0x119));
          if (pvVar4 != NULL)
          {
            g_ModeVersion_13AE = (undefined *)&p_LastAllocatedBlock;
          }
        }
        else
        {
          g_ModeVersion_13AE =
               (undefined *)((int)(undefined **)&p_CurrentHeapContext + 0x1);
        }
      }
      else
      {
        g_ModeVersion_13AE = (undefined *)&p_CurrentHeapContext;
      }
    }
    else
    {
      g_ModeVersion_13AE = (undefined *)0x1;
    }
    pvVar4 = SendDlgItemMessage16
                       (0x0,0x0,0x0,0x400,
                        CONCAT22(*(undefined2 *)((int)this_ptr_00 + 0x6),0x11a));
    *(undefined2 *)((int)lVar3 + 0x82) = (void *)pvVar4;
    uVar1 = GetWindowWord16(-0x8,*(HWND16 *)((int)this_ptr_00 + 0x6));
    PostMessage16(0x0,0x0,0x105,CONCAT22(in_stack_0000fff0,uVar1));
    UI_SubDialog_Base_Try_Destroy_7b98(this_ptr_00);
  }
  return;
}



void * __stdcall16far
UI_Colony_Settings_Dialog_dtor_Scalar_Deleting_aaf0(void *this_ptr,byte flags)
{
  UI_Colony_Settings_Dialog_dtor_Internal_a8cc(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



void * __stdcall16far UI_SubDialog_TypeAD72_ctor_init_ab82(void *this_ptr,u16 arg2)
{
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,0xfd30000,arg2);
  *(undefined2 *)this_ptr = 0xad72;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1038;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// An alternative internal destructor for sub-dialog component type 0xA832. Reverts
// vtable and cleans up via base A2D0 destructor. Equivalent to 1038:A6C8.

void __stdcall16far UI_SubDialog_TypeA832_dtor_Internal_Alternative_abb0(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xad72;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



// Re-calculates the screen position for a sub-dialog by comparing its current window
// rect against a target control's rect (ID 0xFD7). Adjusts horizontal position with a
// 2-pixel margin and centers vertically.

void __stdcall16far UI_SubDialog_Reorient_and_Center_Logic_abdc(void *this_ptr)
{
  HWND16 hwnd;
  astruct_109 *uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined1 local_12 [0x2];
  int iStack_10;
  int local_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_109 *)this_ptr;
  GetWindowRect16((int *)CONCAT22(unaff_SS,&local_a),uVar1->field6_0x6);
  hwnd = GetDlgItem16(0xfd7,uVar1->field6_0x6);
  GetWindowRect16((undefined1 *)CONCAT22(unaff_SS,local_12),hwnd);
  iStack_6 -= local_a;
  iStack_4 = (iStack_10 - iStack_8) + -0x2;
  SetWindowPos16(0x6,iStack_4,iStack_6,0x0,0x0,0x0,uVar1->field6_0x6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A specialized CTLCOLOR handler that synchronizes text colors with the global UI
// palette (Resource 0x230). Maps control IDs 0xFD4-0xFD7 to specific palette indices
// for high-contrast rendering.

void * __stdcall16far
UI_Dialog_Handle_Custom_CTLCOLOR_with_Palette_Logic_ac38
          (u16 arg1,u16 arg2,u16 arg3,uint ctrl_type)
{
  void *pvVar1;
  void *pvVar2;
  int16_t iVar3;
  undefined2 in_DX;
  HWND16 hwnd;
  ulong uVar4;
  astruct_108 *iVar1;
  
  hwnd = 0x1538;
  pvVar1 = (void *)GetStockObject16(0x4);
  if (_PTR_DAT_1050_0000_1050_5b78 == 0x0)
  {
    hwnd = 0x1008;
    pvVar2 = Palette_Object_Get_Buffer_Ptr_maybe
                       ((void *)(void *)*(undefined4 *)
                                         ((int)_p_GlobalPaletteObject + 0xe));
    _PTR_DAT_1050_0000_1050_5b6c =
         (ulong)CONCAT12(*(undefined1 *)((int)pvVar2 + 0x3ec),
                         CONCAT11(*(undefined1 *)((int)pvVar2 + 0x3ed),
                                  *(undefined1 *)((int)pvVar2 + 0x3ee)));
    _PTR_DAT_1050_0000_1050_5b70 =
         (ulong)CONCAT12(*(undefined1 *)((int)pvVar2 + 0x3e4),
                         CONCAT11(*(undefined1 *)((int)pvVar2 + 0x3e5),
                                  *(undefined1 *)((int)pvVar2 + 0x3e6)));
    _PTR_DAT_1050_0000_1050_5b74 =
         (ulong)CONCAT12(*(undefined1 *)((int)pvVar2 + 0x3f8),
                         CONCAT11(*(undefined1 *)((int)pvVar2 + 0x3f9),
                                  *(undefined1 *)((int)pvVar2 + 0x3fa)));
    _PTR_DAT_1050_0000_1050_5b78 =
         (ulong)CONCAT12(*(undefined1 *)((int)pvVar2 + 0x94),
                         CONCAT11(*(undefined1 *)((int)pvVar2 + 0x95),
                                  *(undefined1 *)((int)pvVar2 + 0x96)));
  }
  if (ctrl_type < 0x4)
  {
LAB_1038_acf0:
    iVar3 = GetDlgCtrlId(hwnd);
    uVar4 = _PTR_DAT_1050_0000_1050_5b70;
    if ((iVar3 == 0xfd4) ||
       ((iVar3 != 0xfd5 &&
        ((uVar4 = _PTR_DAT_1050_0000_1050_5b6c, iVar3 == 0xfd6 ||
         (uVar4 = _PTR_DAT_1050_0000_1050_5b74, iVar3 == 0xfd7)))))) goto LAB_1038_ad0e;
  }
  else if (ctrl_type != 0x4)
  {
    if ((ctrl_type == 0x4) || (ctrl_type != 0x5 && ctrl_type != 0x6))
    {
      return NULL;
    }
    goto LAB_1038_acf0;
  }
  uVar4 = _PTR_DAT_1050_0000_1050_5b78;
LAB_1038_ad0e:
  SetTextColor16((HDC16)uVar4,(COLORREF)(uVar4 >> 0x10));
  SetBkColor16(0x0,0x100);
  return (void *)CONCAT22(0x1050,pvVar1);
}



void * __stdcall16far
UI_SubDialog_TypeA832_dtor_Scalar_Deleting_ad4c(void *param_1,byte param_2)
{
  UI_SubDialog_TypeA832_dtor_Internal_Alternative_abb0(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_SubDialog_TypeAE4E_ctor_init_adde
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_SubDialog_Type9EFA_ctor_init_9b72(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xae4e;
  param_1[0x1] = 0x1038;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far UI_SubDialog_TypeAE4E_dtor_Internal_ae08(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0xae4e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_SubDialog_TypeB772_dtor_Internal_b0f8((void *)this_ptr);
  return;
}



void * __stdcall16far
UI_SubDialog_TypeAE4E_dtor_Scalar_Deleting_ae28(void *param_1,byte param_2)
{
  UI_SubDialog_TypeAE4E_dtor_Internal_ae08(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * __stdcall16far UI_SubDialog_Manager_ctor_init_aeca(void *param_1)
{
  void *dest;
  int value;
  undefined2 unaff_SS;
  u16 local_b6;
  u16 local_b4;
  undefined1 local_5c [0x5a];
  
  value = (int)((ulong)param_1 >> 0x10);
  dest = (void *)param_1;
  *(undefined2 *)((int)dest + 0xac) = 0x0;
  *(undefined2 *)((int)dest + 0xae) = 0x0;
  if (_p_UISubDialogTable == NULL)
  {
    _p_UISubDialogTable = param_1;
  }
  memset_far(dest,value,0x0);
  MicroSpinControl_ctor(local_5c);
  UI_OPButton_ctor_9854((u16 *)CONCAT22(unaff_SS,&local_b6));
  local_b6 = 0x389a;
  local_b4 = 0x1008;
  MicroSpinControl_dtor_internal_logic(local_5c);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Global_SubDialog_Table_Clear_Pointer_af34(void)
{
  _p_UISubDialogTable = 0x0;
  return;
}
