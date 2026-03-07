/*
 * Source: outpost.c
 * Chunk: 47/117
 * Original lines: 52967-54158
 * Boundaries: top-level declarations/definitions only
 */




undefined2 * __stdcall16far
UI_Control_Subclass_9396_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Base constructor for UI Build Items. Initializes transaction state, loads/duplicates
// string resources, and sets up viewport dimensions from Resource 0x48.

long __stdcall16far
UI_Build_Item_Base_ctor
          (astruct_415 *param_1,uint param_2,uint param_3,undefined2 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  astruct_415 *uVar5;
  int value;
  long lVar4;
  
  pvVar3 = UI_Transaction_Item_Type8_ctor_init
                     (param_1,param_4,param_5,param_6,(int)param_7,
                      (int)((ulong)param_7 >> 0x10),(int)param_8,
                      (int)((ulong)param_8 >> 0x10));
  value = (int)((ulong)param_1 >> 0x10);
  uVar5 = (astruct_415 *)param_1;
  uVar5->field245_0xf6 = 0x0;
  uVar5->field246_0xf8 = 0x0;
  uVar5->field247_0xfa = 0x0;
  uVar5->field248_0xfc = 0x0;
  uVar5->field249_0xfe = 0x2;
  (&uVar5->field258_0x108)[0x0] = NULL;
  (&uVar5->field258_0x108)[0x1] = NULL;
  uVar5->field260_0x10c = 0x0;
  uVar5->field261_0x10e = 0x1e0190;
  uVar5->field262_0x112 = 0x0;
  *(undefined2 *)param_1 = 0xc8bc;
  uVar5->field2_0x2 = 0x1018;
  memset_far(&uVar5->field_0x100,value,0x0);
  if ((param_3 == 0x0) || (param_2 != 0x0))
  {
    if ((param_2 & param_3) == 0x0) goto LAB_1018_c4bb;
    piVar2 = (int *)res_concatenate_strings_by_id(param_3,param_2,0x0);
  }
  else
  {
    piVar2 = (int *)Resource_Manager_LoadString_and_Duplicate
                              ((int)_p_GlobalResourceManager,
                               (int)((ulong)_p_GlobalResourceManager >> 0x10),param_3);
  }
  uVar5->field258_0x108 = piVar2;
  uVar5->field259_0x10a = (u16)pvVar3;
LAB_1018_c4bb:
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  piVar2 = (int *)((ulong)lVar4 >> 0x10);
  iVar1 = (int)lVar4;
  uVar5->field245_0xf6 = *(u16 *)(iVar1 + 0xa);
  uVar5->field246_0xf8 = *(u16 *)(iVar1 + 0xc);
  unpack_word_pair((void *)(iVar1 + 0xe),piVar2,(int *)&uVar5->field248_0xfc);
  return (long)param_1;
}



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



// Drawing logic for Build Item text. Calculates a centered rectangle within the
// viewport and renders the item's name string using DrawText16.

void __stdcall16far UI_Build_Item_Draw_Text_Logic(long context,HDC16 *hdc_ptr)
{
  int iVar1;
  COLORREF hdc;
  COLORREF hdc_00;
  int iVar2;
  COLORREF in_DX;
  COLORREF color;
  astruct_413 *iVar3;
  undefined2 uVar3;
  void *unaff_SS;
  undefined2 in_stack_0000000a;
  undefined4 in_stack_0000ffe2;
  void *LPCSTR_str;
  HDC16 in_stack_0000ffe6;
  
  uVar3 = (undefined2)((ulong)context >> 0x10);
  iVar3 = (astruct_413 *)context;
  if ((iVar3->field257_0x108 != NULL) && (*(char *)iVar3->field257_0x108 != '\0'))
  {
    iVar2 = (int)((ulong)in_stack_0000ffe2 >> 0x10);
    hdc = SetTextColor16(0x8000,0x0);
    color = in_DX;
    hdc_00 = SetBkColor16(0x0,0x200);
    if (iVar3->field256_0x106 == 0x0)
    {
      in_stack_0000ffe6 = 0x0;
      iVar1 = iVar3->field259_0x10e;
      LPCSTR_str = (void *)CONCAT22(iVar2,(void *)*_hdc_ptr);
      DrawText16(0x410,(void *)CONCAT22(0xffff,unaff_SS),
                 (int16_t)(void *)iVar3->field257_0x108,LPCSTR_str,0x0);
      iVar2 = (int)((ulong)LPCSTR_str >> 0x10);
      iVar3->field253_0x100 = (0x280 - iVar1) / 0x2;
      iVar3->field254_0x102 = iVar3->field258_0x10c;
      iVar3->field255_0x104 = iVar3->field253_0x100 + iVar1;
      iVar1 = iVar3->field254_0x102;
      iVar3->field256_0x106 = iVar1;
      if (iVar3->field248_0xf8 <= iVar1)
      {
        iVar2 = iVar1 - iVar3->field248_0xf8;
        iVar3->field254_0x102 = iVar3->field254_0x102 - iVar2;
        iVar3->field256_0x106 = iVar3->field256_0x106 - iVar2;
      }
    }
    DrawText16(0x10,(void *)CONCAT22(0xffff,unaff_SS),
               (int16_t)(void *)iVar3->field257_0x108,
               (void *)CONCAT22(iVar2,(void *)*_hdc_ptr),in_stack_0000ffe6);
    SetTextColor16(hdc,in_DX);
    SetBkColor16(hdc_00,color);
  }
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
  undefined2 in_DX;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0x9a00f1;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7320000,0x1f400026,pvVar1,in_DX,uVar2,param_2,param_3);
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
  undefined2 in_DX;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xa000f2;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7330000,0x1b580027,pvVar1,in_DX,uVar2,param_2,param_3);
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
  undefined2 in_DX;
  undefined2 uVar3;
  int unaff_SS;
  undefined4 uVar4;
  undefined1 local_6 [0x4];
  
  uVar4 = 0xa600f3;
  pvVar2 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7340000,0x32c80028,pvVar2,in_DX,uVar4,param_2,param_3);
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
  undefined2 in_DX;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xa100f4;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7350000,0x36b00029,pvVar1,in_DX,uVar2,param_2,param_3);
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
  undefined2 in_DX;
  undefined2 uVar3;
  int unaff_SS;
  undefined4 uVar4;
  undefined1 local_6 [0x4];
  
  uVar4 = 0xbf00f5;
  pvVar2 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7360737,0x6590002a,pvVar2,in_DX,uVar4,param_2,param_3);
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
  undefined2 in_DX;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0x9300f6;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7380000,0x2328002b,pvVar1,in_DX,uVar2,param_2,param_3);
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
  undefined2 in_DX;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0x9400f7;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7390000,0x32c8002c,pvVar1,in_DX,uVar2,param_2,param_3);
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
  undefined2 in_DX;
  undefined2 uVar3;
  int unaff_SS;
  undefined4 uVar4;
  undefined1 local_6 [0x4];
  
  uVar4 = 0xc200f8;
  pvVar2 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x73a0000,0x2328002d,pvVar2,in_DX,uVar4,param_2,param_3);
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
  undefined2 in_DX;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xa300fa;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x73c0000,0x2710002f,pvVar1,in_DX,uVar2,param_2,param_3);
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
  undefined2 in_DX;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xa800fb;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x73d073e,0x61a80030,pvVar1,in_DX,uVar2,param_2,param_3);
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
  undefined2 in_DX;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xa900fc;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x73f0740,0x59d80031,pvVar1,in_DX,uVar2,param_2,param_3);
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
  undefined2 in_DX;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0x7c00fd;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor
            (param_1,0x7410000,0x27100032,pvVar1,in_DX,uVar2,param_2,param_3);
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
  undefined2 in_DX;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xc900fe;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor(param_1,0x0,0x27100033,pvVar1,in_DX,uVar2,param_2,param_3);
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
  undefined2 in_DX;
  int unaff_SS;
  undefined4 uVar2;
  undefined1 local_6 [0x4];
  
  uVar2 = 0xcf00fe;
  pvVar1 = init_word_pair(local_6,unaff_SS,0x1);
  UI_Build_Item_Base_ctor(param_1,0x0,0x27100034,pvVar1,in_DX,uVar2,param_2,param_3);
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



// Scalar deleting destructor for UI Build Item Type 42. Calls internal destructor and
// optionally frees memory.

long __stdcall16far UI_Build_Item_Type42_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 43. Calls internal destructor and
// optionally frees memory.

long __stdcall16far UI_Build_Item_Type43_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 45. Calls internal destructor and
// optionally frees memory.

long __stdcall16far UI_Build_Item_Type45_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 47. Calls internal destructor and
// optionally frees memory.

long __stdcall16far UI_Build_Item_Type47_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Build Item Type 48. Calls internal destructor and
// optionally frees memory.

long __stdcall16far UI_Build_Item_Type48_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Build_Item_Base_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Helper function that resets an object's vtable to the Gameplay Object base (0xDF3C).

long __stdcall16far Gameplay_Object_Base_vtable_init_Helper(long this_ref)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ref >> 0x10);
  *(char **)this_ref = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1008;
  *(undefined2 *)this_ref = 0xdf3c;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Factory function that creates a Gameplay Object based on a type ID, allocates memory,
// and initializes it using the Gameplay_Object_ctor.

long __stdcall16far
Gameplay_Object_Factory_Create_From_Type_ID
          (undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  void *pvVar1;
  void *this;
  int in_DX;
  int iVar2;
  undefined2 in_stack_0000fff2;
  
  pvVar1 = Resource_Manager_Get_or_Create_Entry_Logic
                     ((void *)_p_GlobalResourceManager,0x0,param_4._2_2_);
  iVar2 = in_DX;
  this = allocate_memory(CONCAT22(in_stack_0000fff2,0x46));
  if (iVar2 == 0x0 && this == NULL)
  {
    this = NULL;
    pvVar1 = NULL;
  }
  else
  {
    pvVar1 = Gameplay_Object_ctor
                       (this,iVar2,param_3,(int)param_4,param_4._2_2_,pvVar1,in_DX,0x0,
                        0x0);
  }
  Gameplay_Object_Refresh_Graphic_Logic(this);
  return CONCAT22(pvVar1,this);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Complex factory for Gameplay Objects. Handles logic for planetary vs non-planetary
// types, resource management, and state-based initialization.

long __stdcall16far
Gameplay_Object_Factory_Complex_Resolver(long context,long entity_id)
{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  void *this_ptr;
  undefined4 *puVar7;
  undefined4 uVar8;
  u8 *puStack000c;
  char cStack000f;
  undefined4 *puVar9;
  undefined2 uVar10;
  u8 *index;
  undefined2 in_stack_0000ffd0;
  undefined4 uStack_20;
  u8 *puStack_14;
  int iStack_c;
  void *pvStack_6;
  void *pvStack_4;
  
  pvStack_6 = NULL;
  pvStack_4 = NULL;
  uVar10 = (undefined2)((ulong)_puStack000c >> 0x10);
  if (cStack000f == '\0')
  {
    lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    iVar3 = (int)((ulong)lVar6 >> 0x10);
    if (*(int *)((int)lVar6 + 0x1e) == 0x0)
    {
      puStack_14 = puStack000c;
      index = puStack000c;
    }
    else
    {
      if (puStack000c == (u8 *)0x7)
      {
        puStack_14 = (u8 *)0x6;
      }
      else if (puStack000c == (u8 *)0x8)
      {
        puStack_14 = (u8 *)0x7;
      }
      else
      {
        puStack_14 = (u8 *)0x8;
      }
      index = (u8 *)0x6;
    }
    pvVar2 = Resource_Manager_Get_or_Create_Entry_Logic
                       ((void *)_p_GlobalResourceManager,0x0,(int)index);
    if (iVar3 != 0x0 || pvVar2 != NULL)
    {
      iVar5 = iVar3;
      pvStack_6 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x46));
      if (iVar5 == 0x0 && pvStack_6 == NULL)
      {
        pvStack_6 = NULL;
        pvStack_4 = NULL;
      }
      else
      {
        pvStack_4 = Gameplay_Object_ctor
                              (pvStack_6,iVar5,entity_id,puStack_14,pvVar2,iVar3,
                               puStack000c,uVar10);
      }
    }
  }
  else
  {
    this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,puStack000c);
    uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
    puVar7 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
    iVar3 = (int)((ulong)puVar7 >> 0x10);
    puVar9 = (undefined4 *)puVar7;
    if (iVar3 != 0x0 || puVar9 != NULL)
    {
      uVar8 = *(undefined4 *)((int)(void *)this_ptr + 0x2e);
      iStack_c = (int)uVar8;
      if (*(int *)((int)(void *)this_ptr + 0x30) == 0x0 && iStack_c == 0x0)
      {
        uStack_20 = 0x0;
      }
      else
      {
        uStack_20 = *(long *)(iStack_c + 0x200);
      }
      if (*(int *)((int)puVar9 + 0x1e) != 0x0 || *(int *)(puVar9 + 0x7) != 0x0)
      {
        uStack_20 = CONCAT22(*(int *)((int)puVar9 + 0x1e),*(int *)(puVar9 + 0x7));
      }
      puVar1 = (undefined2 *)((int)*puVar7 + 0x14);
      uVar8 = (*(code *)*puVar1)(0x1030,puVar9,iVar3);
      iVar5 = (int)((ulong)uVar8 >> 0x10);
      pvVar2 = Resource_Manager_Get_or_Create_Entry_Logic
                         ((void *)_p_GlobalResourceManager,uStack_20,(int)uVar8);
      iVar3 = iVar5;
      pvStack_6 = allocate_memory(CONCAT22(puVar9,0x46));
      if (iVar3 == 0x0 && pvStack_6 == NULL)
      {
        pvStack_6 = NULL;
        pvStack_4 = NULL;
      }
      else
      {
        pvStack_4 = Gameplay_Object_ctor
                              (pvStack_6,iVar3,entity_id,(int)uVar8,pvVar2,iVar5,
                               puStack000c,uVar10);
      }
      Gameplay_Object_Refresh_Graphic_Logic(pvStack_6);
    }
  }
  return CONCAT22(pvStack_4,pvStack_6);
}



// Scalar deleting destructor for objects using the base vtable at 0x389A.

void * __stdcall16far Base_Object_dtor_Scalar_Deleting_v389a(long this_ref,byte flags)
{
  void *ptr;
  
  ptr = (void *)this_ref;
  *(char **)this_ref = (char *)s_1_1050_389a;
  *(undefined2 *)((int)ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return ptr;
}



void __stdcall16far UI_Window_Initialize_and_Create_Control_Type54_df40(void *param_1)
{
  void *pvVar1;
  int in_DX;
  long lVar2;
  void *this;
  undefined2 uVar3;
  undefined2 in_stack_0000fffa;
  
  this = (void *)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    lVar2 = UI_Control_Type54_ctor_init_alternative
                      ((long)CONCAT22(in_DX,pvVar1),*(int *)((int)this + 0x8));
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
