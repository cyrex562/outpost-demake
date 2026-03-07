/*
 * Source: outpost.c
 * Chunk: 56/117
 * Original lines: 63388-64559
 * Boundaries: top-level declarations/definitions only
 */




// Base constructor for UI sub-components. Initializes vtable to 0x7F72, links to
// parent, and caches Windows system metrics for layout calculations.

void * __stdcall16far
UI_SubComponent_Base_ctor_init_metrics_7c1a(void *this_ptr,void *parent_ptr)
{
  u16 uVar1;
  int16_t iVar2;
  astruct_350 *uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)parent_ptr >> 0x10);
  uVar1 = *(u16 *)((int)parent_ptr + 0x8);
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_350 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar3->field2_0x2 = 0x1008;
  *(char **)this_ptr = (char *)s_18_2_1050_3aa5 + 0x3;
  uVar3->field2_0x2 = 0x1008;
  uVar3->field3_0x4 = uVar1;
  *(char **)this_ptr = (char *)s_0_020_1050_3ab0;
  uVar3->field2_0x2 = 0x1008;
  uVar3->field4_0x6 = parent_ptr;
  uVar3->field5_0xa = 0x0;
  uVar3->field6_0xe = 0x0;
  uVar3->field7_0x10 = 0x0;
  uVar3->field8_0x12 = 0x0;
  *(undefined2 *)this_ptr = 0x7f72;
  uVar3->field2_0x2 = 0x1020;
  uVar3->field5_0xa = *(u32 *)((int)parent_ptr + 0xe4);
  iVar2 = GetSystemMetrics16(0x4);
  uVar3->field6_0xe = iVar2;
  iVar2 = GetSystemMetrics16(0x5);
  uVar3->field7_0x10 = iVar2;
  iVar2 = GetSystemMetrics16(0x6);
  uVar3->field8_0x12 = iVar2;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Renders a styled labeled rectangle with a border and centered text. Handles both
// normal and iconic states, and includes logic for an internal separator line.

void __stdcall16far UI_Component_Draw_Labeled_Rectangle_Logic_7cc8(void *this_ptr)
{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  int x;
  HDC16 HVar4;
  HGDIOBJ16 HVar5;
  undefined4 *color;
  HDC16 HVar6;
  HPEN16 obj;
  HDC16 hdc;
  HDC16 hdc_00;
  char *str;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  void *unaff_SS;
  char *LPCSTR_str;
  HWND16 hwnd;
  short sStack_42;
  int local_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  HPALETTE16 HStack_c;
  void *pvStack_a;
  HDC16 local_6;
  BOOL16 BStack_4;
  
  uVar10 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar8 = (int)this_ptr;
  hwnd = *(HWND16 *)(iVar8 + 0x4);
  BStack_4 = IsIconic16(hwnd);
  if ((BStack_4 == 0x0) || (p_FreeBlockListHead != NULL))
  {
    local_6 = GetWindowDC16(*(HWND16 *)(iVar8 + 0x4));
    pvStack_a = (void *)*(undefined4 *)((int)_p_GlobalPaletteObject + 0xe);
    HStack_c = Palette_Object_Select_And_Realize_Wrapper_Far
                         ((void *)pvStack_a,(HDC16)((ulong)pvStack_a >> 0x10));
    GetWindowRect16((int *)CONCAT22(unaff_SS,&local_14),*(HWND16 *)(iVar8 + 0x4));
    x = (iStack_10 - local_14) + -0x1;
    hdc_00 = (iStack_e - iStack_12) - 0x1;
    iVar1 = *(int *)(iVar8 + 0x12);
    HVar4 = hdc_00;
    if (BStack_4 == 0x0)
    {
      HVar4 = *(int *)(iVar8 + 0xe) - *(int *)(iVar8 + 0x12);
    }
    HVar6 = local_6;
    HVar5 = GetStockObject16(0x4);
    FillRect16(HVar5,(void *)CONCAT22(HVar6,unaff_SS),hwnd);
    uVar11 = (undefined2)((ulong)*(undefined4 *)(iVar8 + 0x6) >> 0x10);
    iVar9 = (int)*(undefined4 *)(iVar8 + 0x6);
    puVar2 = (undefined4 *)*(undefined4 *)(iVar9 + 0xe0);
    color = (undefined4 *)puVar2;
    puVar3 = (undefined2 *)((int)*puVar2 + 0x24);
    iVar9 = (*(code *)*puVar3)(0x1538,color,*(undefined2 *)(iVar9 + 0xe2),0x0,0x0);
    HVar6 = (-(uint)(iVar9 == 0x0) & 0x1e) + 0x25;
    obj = CreatePen16(HVar6,0x100,(COLORREF)color);
    HVar5 = SelectObject16(0x1538,obj);
    MoveTo16(0x0,0x0,local_6);
    LineTo16(0x0,x,local_6);
    LineTo16(hdc_00,x,local_6);
    LineTo16(hdc_00,0x0,local_6);
    LineTo16(0x0,0x0,local_6);
    if (BStack_4 == 0x0)
    {
      hdc = *(int *)(iVar8 + 0xe) - *(int *)(iVar8 + 0x12);
      MoveTo16(hdc,0x0,local_6);
      LineTo16(hdc,x,local_6);
    }
    puVar3 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar8 + 0x6) + 0x18);
    LPCSTR_str = (char *)(*(code *)*puVar3)(0x1538,(int)*(undefined4 *)(iVar8 + 0x6),
                                            (int)((ulong)*(undefined4 *)(iVar8 + 0x6) >>
                                                 0x10));
    str = (char *)((ulong)LPCSTR_str >> 0x10);
    if (*LPCSTR_str != '\0')
    {
      pcVar7 = str;
      SetBkColor16(0x0,0x0);
      SetTextColor16(HVar6,0x100);
      HVar6 = LStrLen16(LPCSTR_str);
      GetTextExtent16(HVar6,(char *)LPCSTR_str,(short)str);
      if (BStack_4 == 0x0)
      {
        sStack_42 = (int)(HVar4 - iVar1) / 0x2 - (int)pcVar7 / 0x2;
      }
      else
      {
        sStack_42 = (int)hdc_00 / 0x2 - (int)pcVar7 / 0x2;
      }
      TextOut16(0x1538,HVar6,(short)(char *)LPCSTR_str,str,sStack_42);
    }
    HStack_c = SelectPalette16(0x0,HStack_c,local_6);
    DeleteObject16(HStack_c);
    SelectObject16(0x1538,HVar5);
    DeleteObject16(obj);
    ReleaseDC16(local_6,*(HWND16 *)(iVar8 + 0x4));
  }
  return;
}



// Scalar deleting destructor for UI sub-components. Reverts vtable pointers and
// optionally frees object memory.

void * __stdcall16far
UI_SubComponent_dtor_Scalar_Deleting_7f38(void *this_ptr,byte flags)
{
  void *ptr;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  ptr = (void *)this_ptr;
  *(char **)this_ptr = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)ptr + 0x2) = 0x1008;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Base constructor for panel-style UI components. Initializes vtable to 0x82BC, sets up
// standard GDI objects, and loads viewport dimensions from Resource 0x48.

void * __stdcall16far
UI_Panel_Base_ctor_init_logic_7f7a(void *this_ptr,void *arg1,void *parent_ptr)
{
  HGDIOBJ16 HVar1;
  HCURSOR16 HVar2;
  undefined2 uVar4;
  astruct_349 *uVar3;
  long lVar5;
  void *this;
  int arg2;
  void *parent;
  
  parent = (void *)((ulong)arg1 >> 0x10);
  this = (void *)this_ptr;
  arg2 = (int)((ulong)this_ptr >> 0x10);
  UI_DanBrotherton_Window_ctor(this,arg2,(int)(void *)arg1,parent);
  *(undefined2 *)((int)this + 0xe2) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0xe4) = 0x1008;
  *(undefined2 *)((int)this + 0xe2) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0xe4) = 0x1008;
  *(undefined4 *)((int)this + 0xe6) = 0x0;
  *(undefined2 *)((int)this + 0xea) = 0x0;
  *(undefined2 *)((int)this + 0xec) = 0x0;
  *(undefined2 *)this_ptr = 0x82bc;
  *(undefined2 *)((int)this + 0x2) = 0x1020;
  *(undefined2 *)((int)this + 0xe2) = 0x8358;
  *(undefined2 *)((int)this + 0xe4) = 0x1020;
  strcpy_optimized((char *)CONCAT22(arg2,(char *)((int)this + 0x5b)),s_VrMode_1050_4422)
  ;
  HVar1 = GetStockObject16(0x5);
  *(HGDIOBJ16 *)((int)this + 0xc6) = HVar1;
  HVar2 = LoadCursor16((void *)0x7f00,0x0);
  *(HCURSOR16 *)((int)this + 0xc4) = HVar2;
  *(undefined2 *)((int)this + 0xc8) = (char *)s_576_bmp_1050_2027 + 0x1;
  *(undefined4 *)((int)this + 0xac) = 0x47000000;
  *(undefined2 *)((int)this + 0xbc) = *(undefined2 *)((int)(void *)parent_ptr + 0x8);
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar4 = (undefined2)((ulong)lVar5 >> 0x10);
  *(undefined2 *)((int)this + 0xb4) = 0x0;
  *(undefined2 *)((int)this + 0xb6) = 0x0;
  *(undefined2 *)((int)this + 0xb8) = *(undefined2 *)((int)lVar5 + 0xa);
  *(undefined2 *)((int)this + 0xba) = *(undefined2 *)((int)lVar5 + 0xc);
  *(undefined2 *)((int)this + 0xca) = parent;
  UI_Container_Register_Class_Logic(this);
  return this_ptr;
}



// Internal destructor for base panel UI components. Reverts vtable pointers and cleans
// up the inherited UI control sub-logic.

void __stdcall16far UI_Panel_Base_dtor_Internal_Cleanup_logic_808e(void *this_ptr)
{
  u16 *puVar1;
  undefined2 uVar2;
  astruct_348 *uVar3;
  undefined2 uVar4;
  u16 *puStack_6;
  undefined2 uStack_4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_348 *)this_ptr;
  *(undefined2 *)this_ptr = 0x82bc;
  uVar3->field2_0x2 = 0x1020;
  uVar3->field225_0xe2 = 0x8358;
  uVar3->field226_0xe4 = 0x1020;
  if (this_ptr == NULL)
  {
    puVar1 = NULL;
    uVar2 = 0x0;
  }
  else
  {
    puVar1 = &uVar3->field225_0xe2;
    uVar2 = uVar4;
  }
  _puStack_6 = (u16 *)CONCAT22(uVar2,puVar1);
  *_puStack_6 = (u16)(char *)s_1_1050_389a;
  puVar1[0x1] = 0x1008;
  UI_Control_Sub_dtor_logic(&uVar3->field_0xd2);
  *(undefined2 *)this_ptr = 0x380a;
  uVar3->field2_0x2 = 0x1008;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar3->field2_0x2 = 0x1008;
  return;
}



void __stdcall16far UI_Object_VCall_60_at_4_8106(u32 param_1,u16 param_2,u32 param_3)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x4) + 0x60);
  (*(code *)*puVar1)();
  return;
}



void __stdcall16far
UI_GDI_Update_Palette_and_Notify_List_at_D2_8128(u32 param_1,int param_2)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  u32 local_22;
  u32 local_16;
  undefined1 local_12 [0x8];
  u16 local_a;
  u16 local_8;
  u32 local_6;
  
  if (param_2 != 0x0)
  {
    uVar5 = (undefined2)(param_1 >> 0x10);
    iVar4 = (int)param_1;
    local_6 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0xe6) + 0xa);
    puVar1 = (undefined2 *)((int)*(undefined4 *)local_6 + 0x18);
    local_8 = (*(code *)*puVar1)();
    UnrealizeObject16(local_8);
    local_a = *(HDC16 *)((int)*(undefined4 *)(iVar4 + 0xe6) + 0x14);
    RealizePalette16(local_a);
    init_8byte_pair_with_long_and_zero(local_12,CONCAT22(uVar5,iVar4 + 0xd2));
    while( true )
    {
      lVar6 = get_next_list_item(local_12);
      iVar3 = (int)((ulong)lVar6 >> 0x10);
      iVar4 = (int)lVar6;
      if (iVar3 == 0x0 && iVar4 == 0x0) break;
      puVar2 = (undefined4 *)(undefined4 *)*(undefined4 *)(iVar4 + 0x4);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x90);
      (*(code *)*puVar1)(0x1008,puVar2,*(undefined2 *)(iVar4 + 0x6));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes palette changes specifically for panel components. Realizes the system
// palette and invalidates the panel's window if colors have changed.

int __stdcall16far UI_Panel_Handle_Palette_Change_and_Invalidate_81c0(void *this_ptr)
{
  HDC16 hdc;
  HDC16 hpal;
  HPALETTE16 hpal_00;
  uint16_t uVar1;
  undefined2 uVar2;
  HDC16 force_background;
  HWND16 in_stack_0000ffea;
  undefined2 uStack_6;
  
  uVar2 = (undefined2)((ulong)_p_GlobalPaletteObject >> 0x10);
  uStack_6 = (void *)(void *)*(undefined4 *)((int)_p_GlobalPaletteObject + 0xe);
  if (*(int *)((int)_p_GlobalPaletteObject + 0x10) == 0x0 && uStack_6 == NULL)
  {
    return 0x0;
  }
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  hdc = GetDC16(*(HWND16 *)((int)(void *)this_ptr + 0x8));
  hpal = hdc;
  force_background = hdc;
  Palette_Object_Create_HPALETTE_Logic(uStack_6);
  hpal_00 = SelectPalette16(0x0,hpal,force_background);
  uVar1 = RealizePalette16(hdc);
  SelectPalette16(0x1,hpal_00,hdc);
  RealizePalette16(hdc);
  DeleteObject16(hpal);
  if (0x0 < (int)uVar1)
  {
    InvalidateRect16(0x1,(void *)((ulong)*(uint *)((int)(void *)this_ptr + 0x8) << 0x10)
                     ,in_stack_0000ffea);
  }
  return uVar1;
}



void __stdcall16far UI_Window_Conditional_Destroy_EC_8250(u32 param_1)
{
  BOOL16 BVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)(param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0xec) != 0x0)
  {
    BVar1 = IsWindow16(*(HWND16 *)(iVar2 + 0xec));
    if (BVar1 != 0x0)
    {
      DestroyWindow16(*(HWND16 *)(iVar2 + 0xec));
      *(undefined2 *)(iVar2 + 0xec) = 0x0;
    }
  }
  return;
}



void * UI_Panel_Base_dtor_Wrapper_8288(undefined2 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)param_2 + -0xe2));
  pvVar1 = UI_Panel_Base_dtor_Scalar_Deleting_8296(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Panel_Base_dtor_Scalar_Deleting_8296(void *param_1,byte param_2)
{
  UI_Panel_Base_dtor_Internal_Cleanup_logic_808e(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI component representing a single lab item. Initializes base list
// with 1 item and sets vtable to 0x8462.

u16 * __stdcall16far UI_Lab_Item_Single_ctor_init(u16 *this_ptr)
{
  u16 uVar1;
  long lVar2;
  u16 in_stack_00000006;
  
  UI_Lab_Item_List_Base_ctor_init(this_ptr,in_stack_00000006);
  zero_init_struct_6bytes(this_ptr + 0xb);
  (this_ptr + 0xe)[0x0] = 0x0;
  (this_ptr + 0xe)[0x1] = 0x0;
  *_this_ptr = 0x8462;
  this_ptr[0x1] = 0x1020;
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  uVar1 = (u16)((ulong)lVar2 >> 0x10);
  this_ptr[0xe] = (u16)lVar2;
  this_ptr[0xf] = uVar1;
  win16_Copy_Struct_6Bytes_Wrapper_4210(CONCAT22(uVar1,this_ptr[0xe]));
  UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
            ((u32)CONCAT22(in_stack_00000006,this_ptr),(int *)*(int **)(this_ptr + 0x4),
             *(u32 *)((int)*(undefined4 *)(this_ptr + 0xe) + 0x2a),
             (int *)(this_ptr + 0xb));
  return this_ptr;
}



void __stdcall16far UI_Icon_Component_OnPaint_Logic_83f8(undefined4 param_1)
{
  void *pvVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x4) != 0x0)
  {
    pvVar1 = (void *)*(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x1c) + 0xa);
    Bitmap_Object_Blit_Transparent_Logic
              ((void *)pvVar1,(void *)((ulong)pvVar1 >> 0x10),(void *)(iVar2 + 0x16));
  }
  return;
}



void __stdcall16far void_noop_stub_1020_8438(void)
{
  return;
}



void * __stdcall16far
UI_Lab_Item_List_Base_dtor_Scalar_Deleting_843c(void *param_1,byte param_2)
{
  UI_Lab_Item_List_Base_dtor_Internal_Cleanup_logic(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Base constructor for components managing a list of UI items (like research
// categories). Allocates memory for a sprite list and coordinate list. Sets vtable to
// 0x87AA.

u16 * __stdcall16far UI_Lab_Item_List_Base_ctor_init(u16 *this_ptr,u16 count)
{
  void *pvVar1;
  u16 uVar2;
  undefined2 unaff_SI;
  long lVar3;
  u16 in_stack_00000008;
  
  *_this_ptr = (u16)(char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  this_ptr[0x2] = 0x0;
  this_ptr[0x3] = in_stack_00000008;
  (this_ptr + 0x4)[0x0] = 0x0;
  (this_ptr + 0x4)[0x1] = 0x0;
  (this_ptr + 0x6)[0x0] = 0x0;
  (this_ptr + 0x6)[0x1] = 0x0;
  zero_init_struct_6bytes(this_ptr + 0x8);
  *_this_ptr = 0x87aa;
  this_ptr[0x1] = 0x1020;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar2 = (u16)((ulong)lVar3 >> 0x10);
  copy_struct_6bytes(this_ptr + 0x8,(void *)count);
  lVar3 = CONCAT22(unaff_SI,this_ptr[0x3] << 0x3);
  pvVar1 = allocate_memory(lVar3);
  this_ptr[0x4] = (u16)pvVar1;
  this_ptr[0x5] = uVar2;
  pvVar1 = allocate_memory(CONCAT22((int)((ulong)lVar3 >> 0x10),this_ptr[0x3] << 0x2));
  this_ptr[0x6] = (u16)pvVar1;
  this_ptr[0x7] = uVar2;
  memset_far((void *)*(void **)(this_ptr + 0x4),
             (int)((ulong)*(void **)(this_ptr + 0x4) >> 0x10),0x0);
  memset_far((void *)*(void **)(this_ptr + 0x6),
             (int)((ulong)*(void **)(this_ptr + 0x6) >> 0x10),0x0);
  return this_ptr;
}



// Internal destructor for the Lab Item List base. Iterates through and frees all
// allocated sprites and internal list buffers.

void __stdcall16far UI_Lab_Item_List_Base_dtor_Internal_Cleanup_logic(void *this_ptr)
{
  void *this;
  astruct_347 *uVar3;
  int iVar1;
  int iVar2;
  undefined2 uVar4;
  undefined2 uVar5;
  int iStack_c;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_347 *)this_ptr;
  *(undefined2 *)this_ptr = 0x87aa;
  uVar3->field2_0x2 = 0x1020;
  free_if_not_null((void *)uVar3->field6_0x8);
  if (*(int *)((int)&uVar3->field7_0xc + 0x2) != 0x0 ||
      *(int *)&uVar3->field7_0xc != 0x0)
  {
    iStack_c = 0x0;
    while( true )
    {
      if (uVar3->field5_0x6 <= iStack_c) break;
      iVar2 = iStack_c * 0x4;
      uVar5 = (undefined2)((ulong)uVar3->field7_0xc >> 0x10);
      iVar1 = (int)uVar3->field7_0xc;
      if (*(long *)(iVar1 + iVar2) != 0x0)
      {
        this = (void *)(void *)*(undefined4 *)(iVar1 + iVar2);
        if (*(int *)(iVar1 + iVar2 + 0x2) != 0x0 || this != NULL)
        {
          Sprite_Object_free_internal_buffer(this);
          free_if_not_null(this);
        }
      }
      iStack_c += 0x1;
    }
    free_if_not_null((void *)uVar3->field7_0xc);
  }
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar3->field2_0x2 = 0x1008;
  return;
}



// Clears all sprites currently managed by the item list without destroying the list
// object itself.

void __stdcall16far UI_Lab_Item_List_Clear_Sprites_Logic_85f6(void *this_ptr)
{
  void *this;
  int iVar1;
  astruct_346 *uVar4;
  undefined2 uVar2;
  undefined2 uVar3;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
    uVar4 = (astruct_346 *)this_ptr;
    if (uVar4->field6_0x6 <= iStack_4) break;
    uVar2 = (undefined2)(uVar4->field11_0xc >> 0x10);
    iVar1 = (int)uVar4->field11_0xc;
    this = (void *)(void *)*(undefined4 *)(iVar1 + iStack_4 * 0x4);
    if (*(int *)(iVar1 + iStack_4 * 0x4 + 0x2) != 0x0 || this != NULL)
    {
      Sprite_Object_free_internal_buffer(this);
      free_if_not_null(this);
    }
    *(undefined4 *)((int)uVar4->field11_0xc + iStack_4 * 0x4) = 0x0;
    iStack_4 += 0x1;
  }
  return;
}



void __stdcall16far UI_Sprite_Collection_Cleanup_and_Free_865a(undefined4 param_1)
{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_4;
  
  local_4 = 0x0;
  while( true )
  {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    iVar1 = (int)param_1;
    if (*(int *)(iVar1 + 0x6) <= local_4) break;
    iVar3 = local_4 * 0x4;
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xc) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0xc);
    if (*(long *)(iVar2 + iVar3) != 0x0)
    {
      Sprite_Object_Restore_To_Bitmap((void *)(void *)*(undefined4 *)(iVar2 + iVar3));
      uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xc) >> 0x10);
      iVar2 = (int)*(undefined4 *)(iVar1 + 0xc);
      this = (void *)(void *)*(undefined4 *)(iVar2 + iVar3);
      if (*(int *)(iVar2 + iVar3 + 0x2) != 0x0 || this != NULL)
      {
        Sprite_Object_free_internal_buffer(this);
        free_if_not_null(this);
      }
      *(undefined4 *)((int)*(undefined4 *)(iVar1 + 0xc) + local_4 * 0x4) = 0x0;
    }
    local_4 += 0x1;
  }
  return;
}



void __stdcall16far UI_Sprite_Collection_Restore_All_86d8(undefined4 param_1)
{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  local_4 = 0x0;
  while( true )
  {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    if (*(int *)((int)param_1 + 0x6) <= local_4) break;
    uVar1 = *(undefined4 *)((int)param_1 + 0xc);
    uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar2 = (int)uVar1;
    if (*(long *)(iVar2 + local_4 * 0x4) != 0x0)
    {
      Sprite_Object_Restore_To_Bitmap
                ((void *)(void *)*(undefined4 *)(iVar2 + local_4 * 0x4));
    }
    local_4 += 0x1;
  }
  return;
}



// Calculates a bounding rectangle (L,T,R,B) by adding an object's bitmap dimensions to
// its base coordinates.

void __stdcall16far
UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
          (u32 unused,int *out_rect,u32 bitmap_ptr,int *base_coords)
{
  void *pvVar1;
  undefined2 in_DX;
  undefined2 in_stack_0000000a;
  int *in_stack_00000012;
  
  add_3int_vectors(base_coords,in_stack_00000012);
  pvVar1 = get_with_lazy_init((void *)bitmap_ptr);
  unpack_word_pair(base_coords,in_stack_00000012,out_rect + 0x1);
  out_rect[0x2] = *(int *)((int)pvVar1 + 0x4) + *_out_rect;
  out_rect[0x3] = *(int *)((int)pvVar1 + 0x8) + out_rect[0x1];
  return;
}



void __stdcall16far void_noop_stub_1020_8780(void)
{
  return;
}



void * __stdcall16far
UI_Lab_Item_List_Base_dtor_Scalar_Deleting_8784(void *param_1,byte param_2)
{
  UI_Lab_Item_List_Base_dtor_Internal_Cleanup_logic(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI component representing four lab items. Initializes base list
// with 4 items and sets vtable to 0x8A84.

u16 * __stdcall16far UI_Lab_Item_Quad_ctor_init_87c2(u16 *this_ptr)
{
  long lVar1;
  u16 in_stack_00000006;
  int local_12 [0x4];
  int iStack_a;
  u16 *puStack_8;
  int iStack_4;
  
  UI_Lab_Item_List_Base_ctor_init(this_ptr,in_stack_00000006);
  iStack_4 = 0x4;
  puStack_8 = this_ptr + 0xb;
  do
  {
    zero_init_struct_6bytes(puStack_8);
    puStack_8 = puStack_8 + 0x3;
    iStack_4 += -0x1;
  } while (iStack_4 != 0x0);
  (this_ptr + 0x17)[0x0] = 0x0;
  (this_ptr + 0x17)[0x1] = 0x0;
  zero_init_struct_6bytes(this_ptr + 0x19);
  (this_ptr + 0x1c)[0x0] = 0x0;
  (this_ptr + 0x1c)[0x1] = 0x0;
  *_this_ptr = 0x8a84;
  this_ptr[0x1] = 0x1020;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  this_ptr[0x17] = (u16)lVar1;
  this_ptr[0x18] = (u16)((ulong)lVar1 >> 0x10);
  iStack_a = 0x0;
  do
  {
    Resource_Manager_Get_6Byte_Struct_from_65CA_Logic
              ((int)*(undefined4 *)(this_ptr + 0x17),
               (int)((ulong)*(undefined4 *)(this_ptr + 0x17) >> 0x10),iStack_a,
               this_ptr + iStack_a * 0x3 + 0xb,in_stack_00000006);
    UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
              ((u32)CONCAT22(in_stack_00000006,this_ptr),
               (int *)(this_ptr[0x4] + iStack_a * 0x8),
               *(u32 *)((int)*(undefined4 *)(this_ptr + 0x17) + 0x2e + iStack_a * 0x4),
               (int *)(this_ptr + iStack_a * 0x3 + 0xb));
    iStack_a += 0x1;
  } while (iStack_a < 0x4);
  win16_Copy_Struct_6Bytes_Wrapper_2(*(long *)(this_ptr + 0x17));
  *(undefined4 *)(this_ptr + 0x1c) =
       *(undefined4 *)((int)*(undefined4 *)(this_ptr + 0x17) + 0x6e);
  UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
            ((u32)CONCAT22(in_stack_00000006,this_ptr),local_12,
             *(u32 *)(this_ptr + 0x1c),(int *)(this_ptr + 0x19));
  return this_ptr;
}



void __stdcall16far
UI_Complex_Control_OnPaint_Manage_4_Sprites_8908(undefined4 param_1,void *param_2)
{
  void *pvVar1;
  void *this;
  int in_DX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_SI;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  void *pos;
  undefined2 local_4;
  
  for (local_4 = 0x0; pos = (void *)((ulong)param_2 >> 0x10), iVar5 = (int)param_1,
      iVar3 = (int)((ulong)param_1 >> 0x10), local_4 < 0x4; local_4 += 0x1)
  {
    if (*(int *)(iVar5 + 0x4) == 0x0)
    {
      uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0xc) >> 0x10);
      iVar3 = (int)*(undefined4 *)(iVar5 + 0xc);
      iVar5 = local_4 * 0x4;
      if (*(int *)(iVar3 + iVar5 + 0x2) != 0x0 || *(int *)(iVar3 + iVar5) != 0x0)
      {
        Sprite_Object_Restore_To_Bitmap((void *)(void *)*(undefined4 *)(iVar3 + iVar5));
      }
    }
    else
    {
      pvVar1 = get_with_lazy_init((void *)(void *)*(undefined4 *)
                                                   ((int)*(undefined4 *)(iVar5 + 0x2e) +
                                                    0x2e + local_4 * 0x4));
      iVar6 = local_4 * 0x4;
      if (*(long *)((int)*(undefined4 *)(iVar5 + 0xc) + iVar6) == 0x0)
      {
        iVar4 = in_DX;
        this = allocate_memory(CONCAT22(unaff_SI,0x14));
        if (iVar4 == 0x0 && this == NULL)
        {
          *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0xc) + local_4 * 0x4) = 0x0;
        }
        else
        {
          iVar2 = iVar3;
          pvVar1 = Sprite_Object_init_logic
                             (this,iVar4,(int)*(undefined4 *)((int)pvVar1 + 0x8),
                              (void *)((ulong)*(undefined4 *)((int)pvVar1 + 0x8) >> 0x10
                                      ),(int)*(undefined4 *)((int)pvVar1 + 0x4));
          uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0xc) >> 0x10);
          iVar4 = (int)*(undefined4 *)(iVar5 + 0xc);
          *(undefined2 *)(iVar4 + iVar6) = pvVar1;
          *(int *)(iVar4 + iVar6 + 0x2) = iVar2;
        }
        Sprite_Object_Capture_From_Bitmap
                  ((void *)(void *)*(undefined4 *)
                                    ((int)*(undefined4 *)(iVar5 + 0xc) + local_4 * 0x4))
        ;
      }
      Sprite_Object_Restore_To_Bitmap
                ((void *)(void *)*(undefined4 *)
                                  ((int)*(undefined4 *)(iVar5 + 0xc) + local_4 * 0x4));
      Bitmap_Object_Blit_Transparent_Logic
                ((void *)param_2,pos,(void *)(local_4 * 0x6 + iVar5 + 0x16));
      in_DX = iVar3;
    }
  }
  if (*(int *)(iVar5 + 0x4) != 0x0)
  {
    Bitmap_Object_Blit_Transparent_Logic((void *)param_2,pos,(void *)(iVar5 + 0x32));
  }
  return;
}



// Scalar deleting destructor for the Lab Item List base component.

void * __stdcall16far
UI_Lab_Item_List_Base_dtor_Scalar_Deleting_logic_8a5e(void *this_ptr,byte flags)
{
  UI_Lab_Item_List_Base_dtor_Internal_Cleanup_logic(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI component representing two lab items. Initializes base list with
// 2 items and sets vtable to 0x8E92. Includes a specific bitmap from resource 2.

u16 * __stdcall16far UI_Lab_Item_Dual_ctor_init_8a9c(u16 *this_ptr)
{
  u16 uVar1;
  void *unaff_SS;
  long lVar2;
  u32 bitmap_ptr;
  u16 in_stack_00000006;
  undefined1 local_48 [0x1e];
  undefined1 local_2a [0x24];
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  UI_Lab_Item_List_Base_ctor_init(this_ptr,in_stack_00000006);
  zero_init_struct_6bytes(this_ptr + 0xb);
  zero_init_struct_6bytes(this_ptr + 0xe);
  (this_ptr + 0x11)[0x0] = 0x0;
  (this_ptr + 0x11)[0x1] = 0x0;
  *_this_ptr = 0x8e92;
  this_ptr[0x1] = 0x1020;
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  uVar1 = (u16)((ulong)lVar2 >> 0x10);
  this_ptr[0x11] = (u16)lVar2;
  this_ptr[0x12] = uVar1;
  win16_Copy_Struct_6Bytes_Wrapper_4216(CONCAT22(uVar1,this_ptr[0x11]));
  bitmap_ptr = UI_Component_Get_Indexed_FarPtr_at_Offset_46_Logic
                         (*(long *)(this_ptr + 0x11));
  uStack_4 = (undefined2)(bitmap_ptr >> 0x10);
  uStack_6 = (undefined2)bitmap_ptr;
  UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
            ((u32)CONCAT22(in_stack_00000006,this_ptr),(int *)*(int **)(this_ptr + 0x4),
             bitmap_ptr,(int *)(this_ptr + 0xb));
  win16_Copy_Struct_6Bytes_Wrapper_421c(*(long *)(this_ptr + 0x11));
  Resource_Manager_Load_Resource_Object_Logic
            ((void *)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10));
  File_Object_ctor();
  Bitmap_Object_ctor_from_other(local_48,unaff_SS);
  UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
            ((u32)CONCAT22(in_stack_00000006,this_ptr),
             (int *)((int)*(undefined4 *)(this_ptr + 0x4) + 0x8),
             (u32)CONCAT22(unaff_SS,local_48),(int *)(this_ptr + 0xe));
  Bitmap_Object_dtor(local_48);
  File_Object_dtor(local_2a);
  return this_ptr;
}



// Internal destructor for the dual-item Lab component. Reverts vtable and calls base
// cleanup.

void __stdcall16far UI_Lab_Item_Dual_dtor_Internal_Cleanup_logic_8bae(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0x8e92;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1020;
  UI_Lab_Item_List_Base_dtor_Internal_Cleanup_logic(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Turn_Counter_Component_OnPaint_Logic_8bcc(undefined4 param_1)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  void *y;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  void *unaff_SS;
  void *pvVar11;
  undefined2 in_stack_0000ffa4;
  undefined1 local_58 [0x1e];
  undefined1 local_3a [0x26];
  void *local_14;
  void *pvStack_12;
  undefined2 local_c;
  void *local_a;
  uint uStack_8;
  void *local_6;
  
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 0x4) != 0x0)
  {
    local_6 = (void *)*(undefined4 *)((int)*(undefined4 *)(iVar7 + 0x22) + 0xa);
    pvVar11 = (void *)UI_Component_Get_Indexed_FarPtr_at_Offset_46_Logic
                                (*(long *)(iVar7 + 0x22));
    uVar6 = (uint)((ulong)pvVar11 >> 0x10);
    local_a = (void *)pvVar11;
    local_c = *(undefined2 *)((int)*(undefined4 *)(iVar7 + 0x22) + 0x16);
    uStack_8 = uVar6;
    if (*(long *)*(undefined4 *)(iVar7 + 0xc) == 0x0)
    {
      local_14 = get_with_lazy_init(local_a);
      pvStack_12 = (void *)uVar6;
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffa4,0x14));
      uVar5 = uVar6 | (uint)pvVar3;
      if (uVar5 == 0x0)
      {
        *(undefined4 *)*(undefined4 *)(iVar7 + 0xc) = 0x0;
      }
      else
      {
        pvVar4 = Sprite_Object_init_logic
                           (pvVar3,uVar6,(int)*(undefined4 *)((int)local_14 + 0x8),
                            (void *)((ulong)*(undefined4 *)((int)local_14 + 0x8) >> 0x10
                                    ),(int)*(undefined4 *)((int)local_14 + 0x4));
        puVar2 = (undefined2 *)*(undefined4 *)(iVar7 + 0xc);
        *puVar2 = pvVar4;
        ((undefined2 *)puVar2)[0x1] = uVar5;
      }
      Sprite_Object_Capture_From_Bitmap((void *)*(void **)*(undefined4 *)(iVar7 + 0xc));
      pvVar4 = Resource_Manager_Load_Resource_Object_Logic
                         ((void *)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10));
      y = File_Object_ctor(local_3a,unaff_SS,0x1,pvVar4,uVar5);
      Bitmap_Object_ctor_from_other(local_58,unaff_SS);
      pvVar4 = get_with_lazy_init(local_58);
      _local_14 = (void *)CONCAT22(y,pvVar4);
      pvVar3 = allocate_memory(CONCAT22(pvVar3,0x14));
      uVar6 = (uint)y | (uint)pvVar3;
      if (uVar6 == 0x0)
      {
        *(undefined4 *)((int)*(undefined4 *)(iVar7 + 0xc) + 0x4) = 0x0;
      }
      else
      {
        uVar10 = (undefined2)((ulong)_local_14 >> 0x10);
        uVar1 = *(undefined4 *)((int)_local_14 + 0x8);
        pvVar3 = Sprite_Object_init_logic
                           (pvVar3,(int)y,(int)uVar1,(void *)((ulong)uVar1 >> 0x10),
                            (int)*(undefined4 *)((int)_local_14 + 0x4));
        uVar10 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0xc) >> 0x10);
        iVar8 = (int)*(undefined4 *)(iVar7 + 0xc);
        *(undefined2 *)(iVar8 + 0x4) = pvVar3;
        *(uint *)(iVar8 + 0x6) = uVar6;
      }
      Sprite_Object_Capture_From_Bitmap
                ((void *)(void *)*(undefined4 *)
                                  ((int)*(undefined4 *)(iVar7 + 0xc) + 0x4));
      Bitmap_Object_dtor(local_58);
      File_Object_dtor(local_3a);
    }
    Sprite_Object_Restore_To_Bitmap
              ((void *)(void *)*(undefined4 *)((int)*(undefined4 *)(iVar7 + 0xc) + 0x4))
    ;
    Sprite_Object_Restore_To_Bitmap((void *)*(void **)*(undefined4 *)(iVar7 + 0xc));
    Bitmap_Object_Blit_Transparent_Logic
              ((void *)local_6,(void *)((ulong)local_6 >> 0x10),(void *)(iVar7 + 0x16));
    UI_Draw_Turn_Counter_Text_Logic_8d90
              (param_1,local_c,(int)local_6,(int)((ulong)local_6 >> 0x10));
  }
  return;
}



// Renders the current game turn number as text into a bitmap, blits it to the screen,
// and invalidates the target rectangle for repainting.

void __stdcall16far
UI_Draw_Turn_Counter_Text_Logic_8d90
          (undefined4 param_1,undefined2 param_2,void *param_3)
{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *out1;
  void *unaff_SS;
  long lVar5;
  HWND16 in_stack_0000ffa0;
  int local_40 [0x2];
  void *pvStack_3c;
  void *pvStack_3a;
  undefined1 local_38 [0x28];
  undefined1 local_10 [0xa];
  int iStack_6;
  int iStack_4;
  
  out1 = (int *)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  iVar2 = UI_Component_Get_Value_at_Offset_44_Logic_2(*(long *)(iVar4 + 0x22));
  if (iVar2 != 0x0)
  {
    lVar5 = Simulator_Get_Ticks_Wrapper();
    iStack_4 = (int)((ulong)lVar5 >> 0x10);
    iStack_6 = (int)lVar5;
    if (iStack_4 != 0x0 || iStack_6 != 0x0)
    {
      sprintf_wrapper(local_10);
      uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x22) + 0xe);
      pvVar3 = Text_Bitmap_Object_ctor_and_render
                         (local_38,unaff_SS,(int)uVar1,(int)((ulong)uVar1 >> 0x10),0x25,
                          local_10,unaff_SS);
      Bitmap_Object_Blit_Transparent_Logic
                ((void *)param_3,(void *)((ulong)param_3 >> 0x10),(void *)(iVar4 + 0x1c)
                );
      pvStack_3c = get_with_lazy_init(local_38);
      pvStack_3a = pvVar3;
      unpack_word_pair((void *)(iVar4 + 0x1c),out1,local_40);
      InvalidateRect16(0x0,(void *)CONCAT22(param_2,unaff_SS),in_stack_0000ffa0);
      Bitmap_Object_dtor(local_38);
    }
  }
  return;
}



void * __stdcall16far
UI_Lab_Item_Dual_dtor_Scalar_Deleting_8e6c(void *param_1,byte param_2)
{
  UI_Lab_Item_Dual_dtor_Internal_Cleanup_logic_8bae(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI list of lab research categories. Initializes base list with 37
// (0x25) items and sets vtable to 0x9204. Loads category-specific graphics from
// resource 0x1CE.

u16 * __stdcall16far UI_Lab_Item_Category_List_ctor_init_8eaa(u16 *this_ptr)
{
  void *pvVar1;
  u16 uVar2;
  long lVar3;
  u16 in_stack_00000006;
  int local_a [0x4];
  
  UI_Lab_Item_List_Base_ctor_init(this_ptr,in_stack_00000006);
  (this_ptr + 0xb)[0x0] = 0x0;
  (this_ptr + 0xb)[0x1] = 0x0;
  (this_ptr + 0x55)[0x0] = 0x0;
  (this_ptr + 0x55)[0x1] = 0x0;
  zero_init_struct_6bytes(this_ptr + 0x57);
  (this_ptr + 0x5a)[0x0] = 0x0;
  (this_ptr + 0x5a)[0x1] = 0x0;
  this_ptr[0x5c] = 0xffff;
  (this_ptr + 0x5d)[0x0] = 0x0;
  (this_ptr + 0x5d)[0x1] = 0x0;
  *_this_ptr = 0x9204;
  this_ptr[0x1] = 0x1020;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  uVar2 = (u16)((ulong)lVar3 >> 0x10);
  this_ptr[0xb] = (u16)lVar3;
  this_ptr[0xc] = uVar2;
  win16_Copy_Struct_6Bytes_Wrapper_4222(CONCAT22(uVar2,this_ptr[0xb]));
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  this_ptr[0x5a] = (u16)pvVar1;
  this_ptr[0x5b] = uVar2;
  UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
            ((u32)CONCAT22(in_stack_00000006,this_ptr),local_a,
             CONCAT22(uVar2,this_ptr[0x5a]),(int *)(this_ptr + 0x57));
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  this_ptr[0x5d] = (u16)lVar3;
  this_ptr[0x5e] = (u16)((ulong)lVar3 >> 0x10);
  return this_ptr;
}



// Internal destructor for the Lab research category list. Cleans up category-specific
// objects and calls base list cleanup.

void __stdcall16far
UI_Lab_Item_Category_List_dtor_Internal_Cleanup_logic_8f74(void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  *(undefined2 *)this_ptr = 0x9204;
  *(undefined2 *)((int)pvVar2 + 0x2) = 0x1020;
  if (*(int *)((int)pvVar2 + 0xb6) != 0x0 ||
      (undefined4 *)*(int *)((int)pvVar2 + 0xb4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)pvVar2 + 0xb4);
    (*(code *)*puVar1)();
  }
  UI_Lab_Item_List_Base_dtor_Internal_Cleanup_logic(this_ptr);
  return;
}
