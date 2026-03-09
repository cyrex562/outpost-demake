/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 16/54
 * Original lines (combined): 53049-54379
 * Boundaries: top-level declarations/definitions only
 */




// Internal destructor for UI Build Items. Frees duplicated string resources and ensures
// the associated window is destroyed.

void __stdcall16far UI_Build_Item_Base_dtor_Internal(long this_ref)
{
  BOOL16 BVar1;
  astruct_414 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ref >> 0x10);
  uVar2 = (astruct_414 *)this_ref;
  *(undefined2 *)this_ref = 0xc8bc;
  uVar2->field2_0x2 = 0x1018;
  free_if_not_null((void *)uVar2->field263_0x108);
  if (uVar2->field270_0x112 != 0x0)
  {
    BVar1 = IsWindow16(uVar2->field270_0x112);
    if (BVar1 != 0x0)
    {
      DestroyWindow16(uVar2->field270_0x112);
      uVar2->field270_0x112 = 0x0;
    }
  }
  UI_Transaction_Item_Subclass_dtor_Internal_Cleanup_logic_022c(uVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_Window_OnPaint_Logic_c578(long param_1)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  HBRUSH16 h_brush16;
  void *pvVar4;
  int iVar5;
  HPALETTE16 obj;
  undefined2 uVar6;
  int iVar7;
  HDC16 unaff_DI;
  undefined2 uVar8;
  int iVar9;
  void *unaff_SS;
  undefined4 uVar10;
  HDC16 local_2a;
  int local_28;
  long local_26;
  undefined1 local_22 [0x20];
  
  local_26 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  local_28 = *(int *)((int)local_26 + 0x20);
  iVar7 = (int)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  if (local_28 == 0x0)
  {
    BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar7 + 0x8));
    EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar7 + 0x8));
    PostMessage16(0x0,0x0,*(ushort *)(iVar7 + 0xea),
                  (long)CONCAT22(unaff_DI,g_ParentHWND));
    return;
  }
  if ((*(int *)(iVar7 + 0xf0) == 0x0) && (*(int *)(iVar7 + 0xf4) != 0x0))
  {
    *(undefined2 *)(iVar7 + 0xf0) = 0x1;
    media_play_from_resource_ptr_wrapper
              ((void *)_p_UIPanelContainer,(void *)((ulong)_p_UIPanelContainer >> 0x10))
    ;
  }
  iVar9 = (int)((ulong)_p_UIPanelContainer >> 0x10);
  if (*(int *)((int)(void *)_p_UIPanelContainer + 0x12) == 0x0)
  {
    media_play_from_resource_id_shorthand((void *)_p_UIPanelContainer,iVar9);
  }
  local_2a = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)(iVar7 + 0x8));
  h_brush16 = CreateSolidBrush16(0x0);
  FillRect16(h_brush16,(void *)CONCAT22(local_2a,unaff_SS),unaff_DI);
  DeleteObject16(h_brush16);
  puVar1 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar7 + 0xe2) + 0xe);
  uVar3 = *puVar1;
  puVar2 = (undefined2 *)((int)uVar3 + 0x8);
  uVar10 = (*(code *)*puVar2)(0x1538,(undefined4 *)puVar1,(int)((ulong)puVar1 >> 0x10),
                              &local_2a);
  uVar6 = (undefined2)((ulong)uVar10 >> 0x10);
  pvVar4 = get_with_lazy_init((undefined4 *)puVar1);
  iVar9 = *(int *)((int)pvVar4 + 0x4);
  iVar5 = (0x1e0 - *(int *)((int)pvVar4 + 0x8)) / 0x2;
  *(int *)(iVar7 + 0x10c) =
       iVar5 + *(int *)((int)pvVar4 + 0x8) + *(int *)(iVar7 + 0x110);
  puVar2 = (undefined2 *)((int)uVar3 + 0x4);
  (*(code *)*puVar2)(0x1008,puVar1,
                     *(int *)(iVar7 + 0xfc) + *(int *)(iVar7 + 0xfe) + iVar5,
                     *(int *)(iVar7 + 0xfa) + (0x280 - iVar9) / 0x2,&local_2a);
  UI_Build_Item_Draw_Text_Logic(param_1,&local_2a);
  obj = SelectPalette16(0x0,(HPALETTE16)uVar10,local_2a);
  DeleteObject16(obj);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar7 + 0x8));
  return;
}



// Scalar deleting destructor for UI Build Items.

long __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_c896(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Constructor for UI Build Item Type 38 (ID 0x26). Initializes with resource ID 0x732.

long __stdcall16far
UI_Build_Item_Type38_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  undefined2 reg_dx;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0x9a00f1;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7320000,0x1f400026,pvVar1,reg_dx,uVar2,param_2,param_3);
  *param_1 = 0xdc5a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Build Item Type 39 (ID 0x27). Initializes with resource ID 0x733.

long __stdcall16far
UI_Build_Item_Type39_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  undefined2 reg_dx;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xa000f2;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7330000,0x1b580027,pvVar1,reg_dx,uVar2,param_2,param_3);
  *param_1 = 0xd6de;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Build Item Type 40 (ID 0x28). Initializes with resource ID 0x734.
// Adjusts an internal coordinate by -25.

long __stdcall16far
UI_Build_Item_Type40_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  int *piVar1;
  void *pvVar2;
  undefined2 reg_dx;
  undefined2 uVar3;
  int unaff_SS;
  undefined4 uVar4;
  undefined1 local_6 [0x4];
  
  uVar4 = 0xa600f3;
  pvVar2 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7340000,0x32c80028,pvVar2,reg_dx,uVar4,param_2,param_3);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  *param_1 = 0xda86;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  piVar1 = (undefined2 *)param_1 + 0x87;
  *piVar1 = *piVar1 + -0x19;
  return (long)param_1;
}



// Constructor for UI Build Item Type 41 (ID 0x29). Initializes with resource ID 0x735.

long __stdcall16far
UI_Build_Item_Type41_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  undefined2 reg_dx;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xa100f4;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7350000,0x36b00029,pvVar1,reg_dx,uVar2,param_2,param_3);
  *param_1 = 0xd50a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Build Item Type 42 (ID 0x2A). Initializes with resource IDs 0x737
// and 0x736. Adjusts an internal coordinate by +100.

long __stdcall16far
UI_Build_Item_Type42_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  int *piVar1;
  void *pvVar2;
  undefined2 reg_dx;
  undefined2 uVar3;
  int unaff_SS;
  undefined4 uVar4;
  undefined1 local_6 [0x4];
  
  uVar4 = 0xbf00f5;
  pvVar2 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7360737,0x6590002a,pvVar2,reg_dx,uVar4,param_2,param_3);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  *param_1 = 0xd8b2;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  piVar1 = (undefined2 *)param_1 + 0x87;
  *piVar1 = *piVar1 + 0x64;
  return (long)param_1;
}



// Constructor for UI Build Item Type 43 (ID 0x2B). Initializes with resource ID 0x738.

long __stdcall16far
UI_Build_Item_Type43_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  undefined2 reg_dx;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0x9300f6;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7380000,0x2328002b,pvVar1,reg_dx,uVar2,param_2,param_3);
  *param_1 = 0xdbbe;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Build Item Type 44 (ID 0x2C). Initializes with resource ID 0x739.

long __stdcall16far
UI_Build_Item_Type44_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  undefined2 reg_dx;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0x9400f7;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7390000,0x32c8002c,pvVar1,reg_dx,uVar2,param_2,param_3);
  *param_1 = 0xd642;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Build Item Type 45 (ID 0x2D). Initializes with resource ID 0x73A.
// Adjusts an internal coordinate by +100.

long __stdcall16far
UI_Build_Item_Type45_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  int *piVar1;
  void *pvVar2;
  undefined2 reg_dx;
  undefined2 uVar3;
  int unaff_SS;
  undefined4 uVar4;
  undefined1 local_6 [0x4];
  
  uVar4 = 0xc200f8;
  pvVar2 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x73a0000,0x2328002d,pvVar2,reg_dx,uVar4,param_2,param_3);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  *param_1 = 0xd9ea;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  piVar1 = (undefined2 *)param_1 + 0x87;
  *piVar1 = *piVar1 + 0x64;
  return (long)param_1;
}



// Constructor for UI Build Item Type 46 (ID 0x2E). Initializes with resource ID 0x73B.

long __stdcall16far
UI_Build_Item_Type46_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  int unaff_SS;
  void *puVar1;
  undefined4 uVar1;
  undefined1 local_6 [0x4];
  u16 u16a;
  u16 u16b;
  
  uVar1 = 0xc500f9;
  puVar1._0_2_ = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x73b0000,0x2af8002e,(void *)puVar1,puVar1._2_2_,uVar1,param_2,
             param_3);
  *param_1 = 0xd46e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Build Item Type 47 (ID 0x2F). Initializes with resource ID 0x73C.

long __stdcall16far
UI_Build_Item_Type47_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  undefined2 reg_dx;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xa300fa;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x73c0000,0x2710002f,pvVar1,reg_dx,uVar2,param_2,param_3);
  *param_1 = 0xd816;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Build Item Type 48 (ID 0x30). Initializes with resource IDs 0x73E
// and 0x73D.

long __stdcall16far
UI_Build_Item_Type48_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  undefined2 reg_dx;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xa800fb;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x73d073e,0x61a80030,pvVar1,reg_dx,uVar2,param_2,param_3);
  *param_1 = 0xdb22;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Build Item Type 49 (ID 0x31). Initializes with resource IDs 0x740
// and 0x73F. Linked to "SCMove" string.

long __stdcall16far
UI_Build_Item_Type49_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  undefined2 reg_dx;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xa900fc;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x73f0740,0x59d80031,pvVar1,reg_dx,uVar2,param_2,param_3);
  *param_1 = 0xd5a6;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Build Item Type 50 (ID 0x32). Initializes with resource ID 0x741.

long __stdcall16far
UI_Build_Item_Type50_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  undefined2 reg_dx;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0x7c00fd;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7410000,0x27100032,pvVar1,reg_dx,uVar2,param_2,param_3);
  *param_1 = 0xd94e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Build Item Type 51 (ID 0x33). Initializes base building component
// with no specific string resources.

long __stdcall16far
UI_Build_Item_Type51_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  undefined2 reg_dx;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xc900fe;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor(param_1,0x0,0x27100033,pvVar1,reg_dx,uVar2,param_2,param_3);
  *param_1 = 0xd3d2;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Build Item Type 52 (ID 0x34). Initializes with Resource ID 0x34.

long __stdcall16far
UI_Build_Item_Type52_ctor_init
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  undefined2 reg_dx;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xcf00fe;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor(param_1,0x0,0x27100034,pvVar1,reg_dx,uVar2,param_2,param_3);
  *param_1 = 0xd77a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_Window_OnPaint_Logic_cfc0(long param_1)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  HBRUSH16 h_brush16;
  void *pvVar3;
  int iVar4;
  HPALETTE16 obj;
  undefined2 uVar5;
  int iVar6;
  undefined4 *this;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  void *unaff_SS;
  undefined4 uVar10;
  HDC16 in_stack_0000ffb2;
  HDC16 local_2a;
  int local_28;
  long local_26;
  undefined1 local_22 [0x20];
  
  local_26 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  local_28 = *(int *)((int)local_26 + 0x20);
  iVar6 = (int)param_1;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  if (local_28 == 0x0)
  {
    BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar6 + 0x8));
    EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar6 + 0x8));
    PostMessage16(0x0,0x0,*(ushort *)(iVar6 + 0xea),
                  (long)CONCAT22(in_stack_0000ffb2,g_ParentHWND));
    return;
  }
  if ((*(int *)(iVar6 + 0xf0) == 0x0) && (*(int *)(iVar6 + 0xf4) != 0x0))
  {
    *(undefined2 *)(iVar6 + 0xf0) = 0x1;
    media_play_from_resource_ptr_wrapper
              ((void *)_p_UIPanelContainer,(void *)((ulong)_p_UIPanelContainer >> 0x10))
    ;
    iVar8 = (int)((ulong)_p_UIPanelContainer >> 0x10);
    if (*(int *)((int)(void *)_p_UIPanelContainer + 0x12) == 0x0)
    {
      media_play_from_resource_id_shorthand((void *)_p_UIPanelContainer,iVar8);
    }
  }
  local_2a = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)(iVar6 + 0x8));
  h_brush16 = CreateSolidBrush16(0x0);
  FillRect16(h_brush16,(void *)CONCAT22(local_2a,unaff_SS),in_stack_0000ffb2);
  DeleteObject16(h_brush16);
  puVar1 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar6 + 0xe2) + 0xe);
  uVar9 = (undefined2)((ulong)puVar1 >> 0x10);
  this = (undefined4 *)puVar1;
  puVar2 = (undefined2 *)((int)*puVar1 + 0x8);
  uVar10 = (*(code *)*puVar2)(0x1538,this,uVar9,&local_2a);
  uVar5 = (undefined2)((ulong)uVar10 >> 0x10);
  pvVar3 = get_with_lazy_init(this);
  iVar8 = (0x280 - *(int *)((int)pvVar3 + 0x4)) / 0x2;
  iVar4 = (0x1e0 - *(int *)((int)pvVar3 + 0x8)) / 0x2;
  *(int *)(iVar6 + 0x10c) =
       iVar4 + *(int *)((int)pvVar3 + 0x8) + *(int *)(iVar6 + 0x110);
  if ((*(int *)(iVar6 + 0xfa) == 0x0) && (iVar8 == 0x0))
  {
    *(int *)(iVar6 + 0xfa) = *(int *)(iVar6 + 0xfa) + 0x2;
  }
  puVar2 = (undefined2 *)((int)*puVar1 + 0x4);
  (*(code *)*puVar2)(0x1008,this,uVar9,
                     *(int *)(iVar6 + 0xfc) + *(int *)(iVar6 + 0xfe) + iVar4,
                     *(int *)(iVar6 + 0xfa) + iVar8,&local_2a);
  UI_Build_Item_Draw_Text_Logic(param_1,&local_2a);
  obj = SelectPalette16(0x0,(HPALETTE16)uVar10,local_2a);
  DeleteObject16(obj);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar6 + 0x8));
  return;
}



// Scalar deleting destructor for UI Build Item Type 38.

long __stdcall16far UI_Build_Item_Type38_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 39.

long __stdcall16far UI_Build_Item_Type39_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 40.

long __stdcall16far UI_Build_Item_Type40_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 41.

long __stdcall16far UI_Build_Item_Type41_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 42. (Vtable points here).

long __stdcall16far
UI_Build_Item_Type42_dtor_Scalar_Deleting_v2(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 43. (Vtable points here).

long __stdcall16far
UI_Build_Item_Type43_dtor_Scalar_Deleting_v2(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 44.

long __stdcall16far UI_Build_Item_Type44_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 45. (Vtable points here).

long __stdcall16far
UI_Build_Item_Type45_dtor_Scalar_Deleting_v2(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 46.

long __stdcall16far UI_Build_Item_Type46_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 47. (Vtable points here).

long __stdcall16far
UI_Build_Item_Type47_dtor_Scalar_Deleting_v2(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



void __stdcall16far UI_Window_Initialize_and_Create_Control_Type54_df40(void *param_1)
{
  void *pvVar1;
  int reg_dx;
  long lVar2;
  void *this;
  undefined2 uVar3;
  undefined2 in_stack_0000fffa;
  
  this = (void *)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
  if (reg_dx != 0x0 || pvVar1 != NULL)
  {
    lVar2 = UI_Control_Type54_ctor_init_alternative
                      ((long)CONCAT22(reg_dx,pvVar1),*(int *)((int)this + 0x8));
    *(undefined2 *)((int)this + 0xe2) = (int)lVar2;
    *(undefined2 *)((int)this + 0xe4) = (int)((ulong)lVar2 >> 0x10);
    return;
  }
  *(undefined4 *)((int)this + 0xe2) = 0x0;
  return;
}



void __stdcall16far UI_Window_Cleanup_and_Destroy_SubObject_E2_df92(void *param_1)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 uVar3;
  void *this;
  
  this = (void *)param_1;
  UI_Window_Destroy_Logic(this);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined4 *)*(int *)((int)this + 0xe2);
  iVar2 = *(int *)((int)this + 0xe4);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1008,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)this + 0xe2) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Complex_Control_OnPaint_and_Spawn_SubDialog_dfd4(undefined4 param_1)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  UI_Component_OnPaint_Render_Internal_Bitmap_logic_e16c(*(long *)(iVar1 + 0xe2));
  if (*(int *)(iVar1 + 0xe6) == 0x0)
  {
    *(undefined2 *)(iVar1 + 0xe6) = 0x1;
    Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x36);
    UI_SubDialog_Factory_Create_and_Show_by_ID_af40
              (_p_UISubDialogTable,*(uint16_t *)(iVar1 + 0x8),0x8);
  }
  return;
}



undefined2 * __stdcall16far
UI_Control_Subclass_E01C_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



// Sets the UI Colony Summary Panel's vtable and performs its specialized
// initialization.

void __stdcall16far
UI_Colony_Summary_Panel_Initialize_Vtable_and_Globals_e2a0(long this_ref)
{
  astruct_409 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_409 *)this_ref;
  *(undefined2 *)this_ref = 0xe44e;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0xe4ea;
  uVar1->field226_0xe4 = 0x1018;
  UI_Panel_Base_dtor_Internal_Cleanup_logic_808e((void *)this_ref);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Triggers sound 0x7A and spawns the VrMode UI view as a child of the Colony Summary
// panel.

void __stdcall16far UI_Colony_Summary_Panel_Open_VrMode_View_Logic_e2cc(long context)
{
  undefined2 *puVar1;
  u32 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int reg_dx;
  int extraout_DX;
  astruct_408 *uVar4;
  undefined2 uVar5;
  int unaff_SS;
  undefined2 in_stack_0000fff2;
  undefined4 uStack_a;
  u32 local_6;
  
  uVar5 = (undefined2)((ulong)context >> 0x10);
  uVar4 = (astruct_408 *)context;
  if (uVar4->field235_0xee != NULL)
  {
    puVar1 = (undefined2 *)((int)*uVar4->field235_0xee + 0x8);
    (*(code *)*puVar1)();
    reg_dx = extraout_DX;
  }
  if (uVar4->field233_0xea == 0x0)
  {
    uVar4->field233_0xea = 0x1;
    init_word_pair(&local_6,unaff_SS,0x1);
    puVar2 = &local_6;
    media_play_from_resource_ptr_wrapper
              ((void *)_p_UIPanelContainer,(void *)((ulong)_p_UIPanelContainer >> 0x10))
    ;
    uVar4->field234_0xec = puVar2;
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000fff2,0x112));
    if (reg_dx == 0x0 && pvVar3 == NULL)
    {
      puVar4 = NULL;
      uStack_a = NULL;
    }
    else
    {
      uVar4->field204_0xcc = uVar4->field204_0xcc + 0x1;
      uStack_a = UI_VrMode_View_ctor_init_logic_3644
                           (pvVar3,reg_dx,uVar4->field204_0xcc,context);
      puVar4 = (undefined4 *)uStack_a;
    }
    UI_Window_Register_Child_Event_Handler(context,0x0,puVar4,uStack_a._2_2_);
    puVar1 = (undefined2 *)((int)*uStack_a + 0xc);
    (*(code *)*puVar1)(0x1008,(undefined4 *)uStack_a,uStack_a._2_2_,0x5);
  }
  return;
}
