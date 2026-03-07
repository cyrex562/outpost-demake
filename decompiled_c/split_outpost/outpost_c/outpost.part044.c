/*
 * Source: outpost.c
 * Chunk: 44/117
 * Original lines: 49403-50582
 * Boundaries: top-level declarations/definitions only
 */




void __stdcall16far UI_Draw_Linear_Scale_Ticks_and_Indicator_Logic_623e(int *param_1)
{
  undefined2 *puVar1;
  void *pvVar2;
  HPEN16 obj;
  HGDIOBJ16 HVar3;
  HBRUSH16 obj_00;
  HGDIOBJ16 obj_01;
  int *range_ptr;
  HPALETTE16 obj_02;
  undefined2 uVar4;
  undefined2 uVar5;
  int *out;
  int value;
  undefined2 uVar6;
  int unaff_SS;
  undefined4 uVar7;
  int index;
  u32 local_46;
  u16 local_42;
  u16 local_40;
  u16 local_3e;
  u16 local_3c;
  u16 local_3a;
  undefined1 local_38 [0x6];
  u32 local_32;
  u32 local_2e;
  u16 local_2a;
  u32 local_28;
  u16 local_24;
  undefined1 local_22 [0x20];
  
  value = (int)((ulong)param_1 >> 0x10);
  out = (int *)param_1;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),out[0x2]);
  local_28 = UI_Component_Get_Value_at_Offset_16_Logic_2((void *)*(void **)(out + 0x3));
  puVar1 = (undefined2 *)((int)*(undefined4 *)local_28 + 0x8);
  uVar7 = (*(code *)*puVar1)(0x1010,(undefined4 *)local_28,(int)(local_28 >> 0x10),
                             &local_24);
  uVar4 = (undefined2)((ulong)uVar7 >> 0x10);
  out[0x8] = (int)uVar7;
  local_2a = *(u16 *)((int)*(undefined4 *)(out + 0x3) + 0x30);
  local_2e = *(u32 *)*(undefined4 *)((int)*(undefined4 *)(out + 0x3) + 0x12);
  local_32 = 0x140000;
  uVar6 = 0x1008;
  zero_init_struct_6bytes(local_38);
  for (local_3a = 0x0; (int)local_3a < (int)local_2a; local_3a += 0x1)
  {
    pvVar2 = get_with_lazy_init((void *)(void *)*(undefined4 *)
                                                 (local_3a * 0x4 + (int)local_2e));
    uVar5 = uVar4;
    Math_Center_Value_in_100_Range_Helper(out,value);
    pack_3words_reverse(local_38,unaff_SS,0x0,(int)local_32);
    Bitmap_Object_Blit_Transparent_Logic
              ((void *)local_28,(void *)(local_28 >> 0x10),local_38);
    index = (int)(local_32 >> 0x10);
    uVar6 = 0x1010;
    UI_Component_Set_Indexed_Rect_at_Offset_1A_Logic
              ((void *)*(void **)(out + 0x3),(int)((ulong)*(void **)(out + 0x3) >> 0x10)
               ,*(int *)((int)pvVar2 + 0x8) + (int)local_32,
               *(int *)((int)pvVar2 + 0x4) + index,(int)local_32,index);
    local_32 = CONCAT22(local_32._2_2_ +
                        (-(uint)(local_3a == 0x0) & 0x5) + 0x14 +
                        *(int *)((int)pvVar2 + 0x4),(undefined2)local_32);
    uVar4 = uVar5;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)local_28 + 0x4);
  (*(code *)*puVar1)(uVar6,(int)local_28,(int)(local_28 >> 0x10),0x0,0x0,&local_24);
  obj = CreatePen16(0x25,0x100,0x1);
  HVar3 = SelectObject16(0x1538,obj);
  obj_00 = CreateSolidBrush16(0x25);
  obj_01 = SelectObject16(0x1538,obj_00);
  UI_Draw_Linear_Scale_Ticks_GDI((long)param_1,local_24);
  range_ptr = UI_Component_Get_Indexed_Rect_Ptr_Logic((void *)*(void **)(out + 0x3));
  UI_Draw_Centering_Indicator_Triangle_at_Midpoint((long)param_1,range_ptr);
  UI_Panel_Initialize_Text_Controls_from_Resource_Batch((long)param_1);
  obj_02 = SelectPalette16(0x0,out[0x8],local_24);
  DeleteObject16(obj_02);
  HVar3 = SelectObject16(0x1538,HVar3);
  DeleteObject16(HVar3);
  HVar3 = SelectObject16(0x1538,obj_01);
  DeleteObject16(HVar3);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),out[0x2]);
  return;
}



// Calculates (100 - X) / 2. Useful for centering elements within a 100-pixel or
// 100-unit UI container.

void __stdcall16far Math_Center_Value_in_100_Range_Helper(int *out,int value)
{
  int *in_stack_00000008;
  int in_stack_0000000c;
  
  *in_stack_00000008 = 0x64 - in_stack_0000000c >> 0x1;
  return;
}



// Draws a series of tick marks and boundaries for a linear scale or slider using GDI
// LineTo/MoveTo calls. Renders marks at endpoints and centers.

void __stdcall16far UI_Draw_Linear_Scale_Ticks_GDI(long context,HDC16 hdc)
{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  undefined2 uVar7;
  int iStack_a;
  
  uVar7 = (undefined2)((ulong)context >> 0x10);
  uVar3 = *(undefined4 *)((int)context + 0x6);
  iVar1 = *(int *)((int)uVar3 + 0x30);
  uVar3 = *(undefined4 *)((int)context + 0x6);
  psVar2 = (short *)*(undefined4 *)((int)uVar3 + 0x1a);
  MoveTo16(0x5,*psVar2,hdc);
  uVar7 = (undefined2)((ulong)psVar2 >> 0x10);
  psVar5 = (short *)psVar2;
  LineTo16(0x5,psVar5[iVar1 * 0x4 + -0x2],hdc);
  for (iStack_a = 0x0; iStack_a < iVar1; iStack_a += 0x1)
  {
    psVar6 = psVar5 + iStack_a * 0x4;
    iVar4 = (psVar6[0x2] - *psVar6 >> 0x1) + *psVar6;
    MoveTo16(0x5,iVar4,hdc);
    LineTo16(0xa,iVar4,hdc);
  }
  MoveTo16(0x5f,*psVar2,hdc);
  LineTo16(0x5f,psVar5[iVar1 * 0x4 + -0x2],hdc);
  for (iStack_a = 0x0; iStack_a < iVar1; iStack_a += 0x1)
  {
    psVar6 = psVar5 + iStack_a * 0x4;
    iVar4 = (psVar6[0x2] - *psVar6 >> 0x1) + *psVar6;
    MoveTo16(0x5f,iVar4,hdc);
    LineTo16(0x5a,iVar4,hdc);
  }
  return;
}



// Calculates the midpoint of a range and draws a triangular indicator at that position
// using GDI polygons. Used for slider thumbs or selection markers.

void __stdcall16far
UI_Draw_Centering_Indicator_Triangle_at_Midpoint(long context,int *range_ptr)
{
  int unaff_SS;
  undefined2 in_stack_0000000a;
  undefined1 local_a [0x6];
  int iStack_4;
  
  if (_range_ptr != NULL)
  {
    iStack_4 = (range_ptr[0x2] - *_range_ptr >> 0x1) + *_range_ptr;
    pack_3words_alt(local_a,unaff_SS,0x0,0x57);
    UI_Build_3Point_Triangle_Coordinate_Array_from_Offset(context,local_a,unaff_SS);
    GDI_Draw_Polygon_Wrapper_Call_Polygon16(context,0x3);
  }
  return;
}



// Constructs an array of 3 points (coordinates) for a triangle by applying constant
// offsets to a base coordinate. Used for indicator graphics.

POINT16 * __stdcall16far
UI_Build_3Point_Triangle_Coordinate_Array_from_Offset
          (undefined2 param_1,undefined2 param_2,void *param_3)
{
  void *pvVar1;
  POINT16 *in_DX;
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
    *(int *)(iVar2 + (int)pvVar1) = *(int *)(iVar2 + 0x4248) + local_4;
    *(int *)((int)pvVar1 + iVar2 + 0x2) = *(int *)(iVar2 + 0x424a) + local_6;
  }
  return in_DX;
}



// A thin wrapper around the Win16 Polygon16 API. Draws a closed polygon from the
// provided point array.

void __stdcall16far GDI_Draw_Polygon_Wrapper_Call_Polygon16(long points_data,HDC16 hdc)
{
  HDC16 unaff_CS;
  short in_stack_0000000a;
  
  Polygon16(unaff_CS,(void *)hdc,in_stack_0000000a);
  return;
}



// Initializes 9 UI text controls within a panel using a batch of strings loaded from a
// resource ID. Iterates through a string table and applies each string to corresponding
// dialog items.

void __stdcall16far UI_Panel_Initialize_Text_Controls_from_Resource_Batch(long context)
{
  char *in_AX;
  uint uVar1;
  HWND16 in_DX;
  int iVar2;
  undefined2 uVar3;
  int iStack_c;
  char *pcStack_a;
  
  uVar3 = (undefined2)((ulong)context >> 0x10);
  iVar2 = (int)context;
  UI_Component_Load_Resource_by_Indexed_ID_Logic
            ((void *)(void *)*(undefined4 *)(iVar2 + 0x6));
  if (in_DX != 0x0 || in_AX != NULL)
  {
    pcStack_a = in_AX;
    for (iStack_c = 0x0; iStack_c < 0x9; iStack_c += 0x1)
    {
      get_table_139A_entry_logic((int)*(undefined4 *)(iVar2 + 0x6));
      UI_Dialog_Set_Control_Text_from_Struct_ID(*(long *)(iVar2 + 0xa),pcStack_a,in_DX);
      uVar1 = strlen_get_length((char *)CONCAT22(in_DX,pcStack_a));
      pcStack_a = pcStack_a + uVar1 + 0x1;
    }
  }
  return;
}



// Scalar deleting destructor for the UI Slider component. Calls the internal destructor
// logic and optionally frees the object memory.

long __stdcall16far UI_Slider_Component_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Slider_Component_dtor_Internal_vtable_revert(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Planet Summary Panel. Initializes base UI object, sets vtable to
// 0x6880, and loads Resource ID 0xB (Planet data summary).

long __stdcall16far
UI_Planet_Summary_Panel_ctor_init_logic_ResB
          (astruct_421 *param_1,undefined2 param_2,void *param_3)
{
  uint16_t uVar2;
  astruct_421 *uVar1;
  undefined2 uVar3;
  long lVar4;
  
  UI_Panel_Base_ctor_init_logic_7f7a
            (param_1,(byte *)CONCAT22(param_2,(byte *)&g_AllocFlags),param_3);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_421 *)param_1;
  uVar1->field233_0xee = 0x0;
  (&uVar1->field234_0xf2)[0x0] = 0x0;
  (&uVar1->field234_0xf2)[0x1] = 0x0;
  *(undefined2 *)param_1 = 0x6880;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0x691c;
  uVar1->field226_0xe4 = 0x1018;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0xb);
  uVar2 = (uint16_t)((ulong)lVar4 >> 0x10);
  uVar1->field234_0xf2 = (uint16_t)lVar4;
  uVar1->field235_0xf4 = uVar2;
  uVar1->field227_0xe6 = uVar1->field234_0xf2;
  uVar1->field228_0xe8 = uVar2;
  return (long)param_1;
}



// Sets the UI Planet Summary Panel's vtable and performs its specialized initialization
// of global fields and state.

void __stdcall16far UI_Planet_Summary_Panel_Initialize_Vtable_and_Globals(long this_ref)
{
  astruct_420 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_420 *)this_ref;
  *(undefined2 *)this_ref = 0x6880;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0x691c;
  uVar1->field226_0xe4 = 0x1018;
  UI_Panel_Base_dtor_Internal_Cleanup_logic_808e((void *)this_ref);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates the Planet Summary Manager's state and triggers a repaint. Specifically
// handles resource ID 0x16.

int __stdcall16far
UI_Planet_Summary_Manager_Update_and_Invalidate_Logic_Internal(long context)
{
  undefined2 *puVar1;
  void *pvVar2;
  astruct_418 *uVar3;
  undefined2 uVar4;
  void *pvVar5;
  
  uVar4 = (undefined2)((ulong)context >> 0x10);
  uVar3 = (astruct_418 *)context;
  pvVar2 = NULL;
  if (*(int *)((int)&uVar3->field236_0xee + 0x2) != 0x0 ||
      *(int *)&uVar3->field236_0xee != 0x0)
  {
    puVar1 = (undefined2 *)((int)*uVar3->field236_0xee + 0x8);
    pvVar2 = (void *)(*(code *)*puVar1)();
  }
  if (uVar3->field233_0xea == 0x0)
  {
    uVar3->field233_0xea = 0x1;
    pvVar5 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                       (_p_UISubDialogTable,uVar3->field8_0x8,0x16);
    pvVar2 = (void *)pvVar5;
  }
  return (int)pvVar2;
}



// Constructor for the Planet Summary View UI. Creates window, sets DC, and initializes
// its summary-specific internal component.

void __stdcall16far
UI_Planet_Summary_View_ctor_init_Window_and_Child_Component(void *param_1)
{
  void *pvVar1;
  int in_DX;
  astruct_419 *uVar1;
  long lVar2;
  void *this;
  undefined2 uVar3;
  int in_stack_0000fffa;
  
  this = (void *)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  Build_Site_Object_Set_Window_and_DC
            (*(long *)((int)this + 0xf2),*(HWND16 *)((int)this + 0x8));
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x18));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    lVar2 = UI_Planet_Summary_Child_Component_ctor_init_logic_ResB
                      ((long)CONCAT22(in_DX,pvVar1),*(int *)((int)this + 0x8),
                       in_stack_0000fffa);
    *(undefined2 *)((int)this + 0xee) = (int)lVar2;
    *(undefined2 *)((int)this + 0xf0) = (int)((ulong)lVar2 >> 0x10);
    return;
  }
  *(undefined4 *)((int)this + 0xee) = 0x0;
  return;
}



void __stdcall16far UI_Window_Cleanup_SubObjects_and_Destroy_681a(void *param_1)
{
  undefined2 *puVar1;
  void *this;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  this = (void *)param_1;
  if (*(int *)((int)this + 0xf0) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xee) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xee);
    (*(code *)*puVar1)();
  }
  UI_Window_Destroy_Logic(this);
  return;
}



void * UI_Planet_Summary_Panel_dtor_Wrapper_684c(u16 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)param_2 + -0xe2));
  pvVar1 = UI_Planet_Summary_Panel_dtor_Scalar_Deleting_685a(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Planet_Summary_Panel_dtor_Scalar_Deleting_685a(void *param_1,byte param_2)
{
  UI_Planet_Summary_Panel_Initialize_Vtable_and_Globals((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the internal child component of the Planet Summary View. Initializes
// with Resource ID 0xB and sets vtable to 0x6A02.

long __stdcall16far
UI_Planet_Summary_Child_Component_ctor_init_logic_ResB(long this_ref,int arg2,int arg3)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  long lVar3;
  
  UI_SubComponent_Grid_ctor_init_921c((void *)this_ref,arg2);
  *(undefined4 *)((int)this_ref + 0x14) = 0x0;
  *(undefined2 *)this_ref = 0x6a02;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0xb);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  *(undefined2 *)((int)this_ref + 0x14) = (int)lVar3;
  *(undefined2 *)((int)this_ref + 0x16) = uVar2;
  *(undefined2 *)((int)this_ref + 0x6) = *(undefined2 *)((int)this_ref + 0x14);
  *(undefined2 *)((int)this_ref + 0x8) = uVar2;
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)
                  *(undefined4 *)((int)*(undefined4 *)((int)this_ref + 0x14) + 0xa) +
           0x8);
  uVar2 = (*(code *)*puVar1)();
  *(undefined2 *)((int)this_ref + 0x12) = uVar2;
  UI_SubComponent_Grid_Draw_Logic_9364((void *)this_ref);
  return this_ref;
}



// Internal destructor for the Planet Summary child component. Releases internal
// resource IDs and performs cleanup.

void __stdcall16far
UI_Planet_Summary_Child_Component_dtor_Internal_Cleanup_logic(long this_ref)
{
  astruct_417 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_417 *)this_ref;
  *(undefined2 *)this_ref = 0x6a02;
  uVar1->field2_0x2 = 0x1018;
  if (uVar1->field19_0x14 != 0x0)
  {
    Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)uVar1->field19_0x14);
  }
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4((void *)this_ref);
  return;
}



// Scalar deleting destructor for the Planet Summary child component.

long __stdcall16far
UI_Planet_Summary_Child_Component_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Planet_Summary_Child_Component_dtor_Internal_Cleanup_logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Base constructor for windows inherited from the DanBrotherton UI class. Initializes
// vtable to 0x6C66 and sets up internal tracking fields for media playback or
// sub-state.

long __stdcall16far
UI_DanBrotherton_Window_Base_ctor_init_logic
          (undefined2 *param_1,undefined2 param_2,int param_3,undefined2 param_4,
          undefined2 param_5,void *param_6)
{
  astruct_416 *uVar1;
  undefined2 *this;
  int arg2;
  
  this = (undefined2 *)param_1;
  arg2 = (int)((ulong)param_1 >> 0x10);
  UI_DanBrotherton_Window_ctor(this,arg2,param_3,param_6);
  this[0x75] = param_5;
  this[0x76] = param_4;
  this[0x77] = param_2;
  this[0x78] = 0x0;
  *param_1 = 0x6c66;
  this[0x1] = 0x1018;
  this[0x70] = 0x1;
  this[0x71] = 0x0;
  this[0x72] = 0x0;
  *(undefined4 *)(this + 0x73) = 0x1df027f;
  return (long)param_1;
}



void __stdcall16far void_noop_stub_1018_6a76(void)
{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A WM_PAINT handler for UI components. Wraps BeginPaint/EndPaint and conditionally
// triggers either movie playback logic or a cleanup operation based on a resource flag.

void __stdcall16far UI_Component_OnPaint_Handler_Logic_Movie_or_Cleanup(long context)
{
  undefined2 uVar1;
  undefined2 unaff_SS;
  long lVar2;
  undefined1 local_22 [0x20];
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)context + 0x8)
              );
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)context + 0x8));
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  if (*(int *)((int)lVar2 + 0x20) == 0x0)
  {
    UI_Component_Finalize_and_Signal_Complete_Logic_Internal(context);
    return;
  }
  UI_Component_Play_Fullscreen_Movie_and_Clean_Logic_Internal(context);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates movie centering, hides the cursor, plays a movie resource using MCI, and
// restores the cursor. Triggers cleanup after playback.

void __stdcall16far
UI_Component_Play_Fullscreen_Movie_and_Clean_Logic_Internal(long context)
{
  int iVar1;
  int iVar2;
  int16_t iVar3;
  char *filename;
  int device_id;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  device_id = (int)((ulong)lVar6 >> 0x10);
  iVar1 = *(int *)((int)lVar6 + 0xa);
  iVar2 = *(int *)((int)lVar6 + 0xc);
  uVar5 = (undefined2)((ulong)context >> 0x10);
  iVar4 = (int)context;
  if (0x1 < iVar1 - *(int *)(iVar4 + 0xe6))
  {
    device_id = iVar1 >> 0xf;
    *(int *)(iVar4 + 0xe2) = iVar1 / 0x2 - (*(int *)(iVar4 + 0xe6) + 0x1) / 0x2;
  }
  if (0x1 < iVar2 - *(int *)(iVar4 + 0xe8))
  {
    device_id = iVar2 >> 0xf;
    *(int *)(iVar4 + 0xe4) = iVar2 / 0x2 - (*(int *)(iVar4 + 0xe8) + 0x1) / 0x2;
  }
  iVar3 = ShowCursor16(0x0);
  if (*(int *)(iVar4 + 0xee) != 0x0)
  {
    media_play_from_resource_id_shorthand
              ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
    *(int16_t *)(iVar4 + 0xf0) = iVar3;
  }
  filename = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
  media_mci_play_file_logic(filename,device_id);
  ShowCursor16(0x1);
  UI_Component_Finalize_and_Signal_Complete_Logic_Internal(context);
  return;
}



// Finalizes a UI component's lifecycle by posting completion messages (WM_COMMAND) and
// optionally destroying a linked window.

void __stdcall16far
UI_Component_Finalize_and_Signal_Complete_Logic_Internal(long context)
{
  BOOL16 BVar1;
  int iVar2;
  undefined2 unaff_BP;
  undefined2 uVar3;
  undefined *l_param;
  
  uVar3 = (undefined2)((ulong)context >> 0x10);
  iVar2 = (int)context;
  if (*(int *)(iVar2 + 0xea) != 0x0)
  {
    l_param = (undefined *)CONCAT22(unaff_BP,g_ParentHWND);
    PostMessage16(0x0,0x0,*(ushort *)(iVar2 + 0xea),(long)l_param);
    unaff_BP = (undefined2)((ulong)l_param >> 0x10);
  }
  PostMessage16(0x0,0x0,0x79,(long)CONCAT22(unaff_BP,g_ParentHWND));
  if (*(int *)(iVar2 + 0xf0) != 0x0)
  {
    BVar1 = IsWindow16(*(HWND16 *)(iVar2 + 0xf0));
    if (BVar1 != 0x0)
    {
      DestroyWindow16(*(HWND16 *)(iVar2 + 0xf0));
      *(undefined2 *)(iVar2 + 0xf0) = 0x0;
    }
  }
  return;
}



// Destructor for a UI Control subclass. Reverts vtables and optionally frees object
// memory.

long __stdcall16far
UI_Control_Subclass_dtor_Scalar_Deleting_Logic(long this_ref,byte flags)
{
  void *ptr;
  undefined2 uVar1;
  
  ptr = (void *)this_ref;
  uVar1 = (undefined2)((ulong)this_ref >> 0x10);
  UI_Control_Sub_dtor_logic((void *)((int)ptr + 0xd2));
  *(undefined2 *)this_ref = 0x380a;
  *(undefined2 *)((int)ptr + 0x2) = 0x1008;
  *(char **)this_ref = (char *)s_1_1050_389a;
  *(undefined2 *)((int)ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return this_ref;
}



// Constructor for UI Control Type 11. Sets vtable and initializes base class with fixed
// parameters (ID 0xB, Res 0x9C, State 0x8B).

long __stdcall16far
UI_Control_Type11_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0xb0000,0x8b009c,param_2,param_3)
  ;
  *param_1 = 0xa27e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 12. Sets vtable and initializes base class with fixed
// parameters (ID 0xC, Res 0x9D, State 0xD0).

long __stdcall16far
UI_Control_Type12_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0xc0000,0xd0009d,param_2,param_3)
  ;
  *param_1 = 0xb562;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 13. Sets vtable and initializes base class with fixed
// parameters (ID 0xD, Res 0x9E, State 0xD1).

long __stdcall16far
UI_Control_Type13_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0xd0000,0xd1009e,param_2,param_3)
  ;
  *param_1 = 0x9822;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 14. Sets vtable and initializes base class with fixed
// parameters (ID 0xE, Res 0x9F, State 0xD2).

long __stdcall16far
UI_Control_Type14_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0xe0000,0xd2009f,param_2,param_3)
  ;
  *param_1 = 0xab06;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 15. Sets vtable and initializes base class with fixed
// parameters (ID 0xF, Res 0xA0, State 0xD4).

long __stdcall16far
UI_Control_Type15_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0xf0000,0xd400a0,param_2,param_3)
  ;
  *param_1 = 0xbdea;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 16. Sets vtable and initializes base class with fixed
// parameters (ID 0x10, Res 0xA1, State 0xDA).

long __stdcall16far
UI_Control_Type16_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x100000,0xda00a1,param_2,param_3);
  *param_1 = 0xa0aa;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 17 (0x11). Initializes base class with resource ID
// 0xA2 and state 0xDC.

long __stdcall16far
UI_Control_Type17_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x110000,0xdc00a2,param_2,param_3);
  *param_1 = 0xb38e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 18 (0x12). Initializes base class with resource ID
// 0xA3 and state 0xD3.

long __stdcall16far
UI_Control_Type18_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x120000,0xd300a3,param_2,param_3);
  *param_1 = 0x964e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 19 (0x13). Initializes base class with resource ID
// 0xA4 and state 0xDB.

long __stdcall16far
UI_Control_Type19_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x130000,0xdb00a4,param_2,param_3);
  *param_1 = 0xa932;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 20 (0x14). Initializes base class with resource ID
// 0xA5 and state 0xA5.

long __stdcall16far
UI_Control_Type20_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x140000,0xa500a5,param_2,param_3);
  *param_1 = 0xbc16;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 21 (0x15). Initializes base class with resource ID
// 0xA7 and state 0xB2.

long __stdcall16far
UI_Control_Type21_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x150000,0xb200a7,param_2,param_3);
  *param_1 = 0x9e3a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 22 (0x16). Initializes base class with resource ID
// 0xA8.

long __stdcall16far
UI_Control_Type22_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x160000,0xa8,param_2,param_3);
  *param_1 = 0xb11e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 23 (0x17). Initializes base class with resource ID
// 0xAF and state 0xC0.

long __stdcall16far
UI_Control_Type23_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x170000,0xc000af,param_2,param_3);
  *param_1 = 0x93de;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 24 (0x18). Initializes base class with resource ID
// 0xB0 and state 0xC1.

long __stdcall16far
UI_Control_Type24_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x180000,0xc100b0,param_2,param_3);
  *param_1 = 0xa6c2;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 25 (0x19). Initializes base class with resource ID
// 0xB1 and state 0x80.

long __stdcall16far
UI_Control_Type25_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x190000,0x8000b1,param_2,param_3);
  *param_1 = 0xb9a6;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 26 (0x1A). Initializes base class with 492ms timer
// (0x1EC), resource ID 0xB2 and state 0xC3.

long __stdcall16far
UI_Control_Type26_ctor_init_timer1EC
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x1a01ec,0xc300b2,param_2,param_3);
  *param_1 = 0x9c66;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 27 (0x1B). Initializes base class with resource ID
// 0xB3 and state 0xC4.

long __stdcall16far
UI_Control_Type27_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x1b0000,0xc400b3,param_2,param_3);
  *param_1 = 0xaf4a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 28 (0x1C). Initializes base class with resource ID
// 0xB4 and state 0xD8.

long __stdcall16far
UI_Control_Type28_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x1c0000,0xd800b4,param_2,param_3);
  *param_1 = 0xc22e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 29 (0x1D). Initializes base class with resource ID
// 0xB5 and state 0x7B.

long __stdcall16far
UI_Control_Type29_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x1d0000,0x7b00b5,param_2,param_3);
  *param_1 = 0xa4ee;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 30 (0x1E). Initializes base class with resource ID
// 0xB6 and state 0xD9.

long __stdcall16far
UI_Control_Type30_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x1e0000,0xd900b6,param_2,param_3);
  *param_1 = 0xb7d2;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 31 (0x1F). Initializes base class with resource ID
// 0xB7 and state 0x7D.

long __stdcall16far
UI_Control_Type31_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x1f0000,0x7d00b7,param_2,param_3);
  *param_1 = 0x9a92;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 33 (0x21). Initializes base class with resource ID
// 0xB9 and state 0xDD.

long __stdcall16far
UI_Control_Type33_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x210000,0xdd00b9,param_2,param_3);
  *param_1 = 0xad76;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 35 (0x23). Initializes base class with resource ID
// 0xD3 and state 0xD6.

long __stdcall16far
UI_Control_Type35_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x230000,0xd600d3,param_2,param_3);
  *param_1 = 0xb69a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 36 (0x24). Initializes base class with 493ms timer
// (0x1ED), resource ID 0xD4 and state 0xD7.

long __stdcall16far
UI_Control_Type36_ctor_init_timer1ED
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x2401ed,0xd700d4,param_2,param_3);
  *param_1 = 0x995a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 37 (0x25). Initializes base class with resource ID
// 0xE9 and state 0xEE.

long __stdcall16far
UI_Control_Type37_ctor_init_stateEE
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x250000,0xee00e9,param_2,param_3);
  *param_1 = 0xa452;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 99 (0x63). Initializes base class with resource ID
// 0xA6.

long __stdcall16far
UI_Control_Type99_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x630000,0xa6,param_2,param_3);
  *param_1 = 0xc05a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 100 (0x64). Initializes base class with resource ID
// 0xA9.

long __stdcall16far
UI_Control_Type100_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x640000,0xa9,param_2,param_3);
  *param_1 = 0xa31a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 101 (0x65). Initializes base class with resource ID
// 0xAA and state 0xBB.

long __stdcall16far
UI_Control_Type101_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x650000,0xbb00aa,param_2,param_3);
  *param_1 = 0xb5fe;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 102 (0x66). Initializes base class with resource ID
// 0xAB.

long __stdcall16far
UI_Control_Type102_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x660000,0xab,param_2,param_3);
  *param_1 = 0x98be;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 103 (0x67). Initializes base class with resource ID
// 0xAC and state 0xBD.

long __stdcall16far
UI_Control_Type103_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x670000,0xbd00ac,param_2,param_3);
  *param_1 = 0xaba2;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 104 (0x68). Initializes base class with resource ID
// 0xAD.

long __stdcall16far
UI_Control_Type104_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x680000,0xad,param_2,param_3);
  *param_1 = 0xbe86;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 105 (0x69). Initializes base class with resource ID
// 0xAE.

long __stdcall16far
UI_Control_Type105_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x690000,0xae,param_2,param_3);
  *param_1 = 0xac3e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 53 (0x35). Initializes base class with resource ID
// 0xBA and state 0x81.

long __stdcall16far
UI_Control_Type53_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x350000,0x8100ba,param_2,param_3);
  *param_1 = 0xbf22;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 57 (0x39). Initializes base class with resource ID
// 0xBB.

long __stdcall16far
UI_Control_Type57_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x390000,0xbb,param_2,param_3);
  *param_1 = 0xa146;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}
