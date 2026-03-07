/*
 * Source: outpost.c
 * Chunk: 52/117
 * Original lines: 58869-59947
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Main initialization routine for the Summary View. Spawns child controls (IDs 0xF4,
// 0xF5), creates the main child component (using 3DA4), and handles window positioning
// and viewport updates. Linked to Resource ID 6.

void __stdcall16far UI_Summary_View_Initialize_Children_and_Layout_38aa(void *this_ptr)
{
  HWND16 hwnd;
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  int16_t *piVar4;
  ushort uVar5;
  int extraout_DX;
  void *pvVar6;
  uint y;
  uint uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  long lVar9;
  void *pvVar10;
  int16_t *piVar11;
  undefined2 uVar13;
  void *this;
  undefined2 uVar14;
  int local_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int local_a [0x2];
  int iStack_6;
  int iStack_4;
  astruct_372 *uVar12;
  
  this = (void *)this_ptr;
  uVar14 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Element_Create_Window_Logic(this);
  lVar9 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x6);
  uVar8 = (undefined2)((ulong)lVar9 >> 0x10);
  *(undefined2 *)((int)this + 0xfa) = (int)lVar9;
  *(undefined2 *)((int)this + 0xfc) = uVar8;
  *(undefined2 *)((int)this + 0xe0) = *(undefined2 *)((int)this + 0xfa);
  *(undefined2 *)((int)this + 0xe2) = uVar8;
  if (this_ptr == NULL)
  {
    iVar2 = 0x0;
    uVar8 = 0x0;
  }
  else
  {
    iVar2 = (int)this + 0xf2;
    uVar8 = uVar14;
  }
  uVar13 = (undefined2)*(undefined4 *)((int)this + 0xfa);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xfa) + 0x4);
  (*(code *)*puVar1)(0x1010,uVar13,
                     (int)((ulong)*(undefined4 *)((int)this + 0xfa) >> 0x10),0x0,iVar2,
                     uVar8);
  iVar2 = extraout_DX;
  UI_Navigation_Manager_Populate_Summary_Logic(*(long *)((int)this + 0xfa));
  pvVar3 = allocate_memory(CONCAT22(uVar13,0x20));
  if (iVar2 == 0x0 && pvVar3 == NULL)
  {
    *(undefined4 *)((int)this + 0xf6) = 0x0;
    iVar2 = 0x0;
  }
  else
  {
    pvVar10 = UI_Summary_Child_Component_ctor_3da4
                        ((void *)CONCAT22(iVar2,pvVar3),this_ptr);
    iVar2 = (int)((ulong)pvVar10 >> 0x10);
    *(undefined2 *)((int)this + 0xf6) = (int)pvVar10;
    *(int *)((int)this + 0xf8) = iVar2;
  }
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)((int)this + 0xf6);
  pvVar3 = allocate_memory(CONCAT22(uVar13,0x42));
  if (iVar2 == 0x0 && pvVar3 == NULL)
  {
    *(undefined4 *)((int)this + 0x102) = 0x0;
    pvVar6 = NULL;
  }
  else
  {
    pvVar6 = UI_Complex_Control_ctor
                       (pvVar3,iVar2,0x0,0xf1,0x0,0x1ad,0x1ac,0xf4,
                        *(undefined2 *)((int)this + 0x8));
    *(undefined2 *)((int)this + 0x102) = pvVar3;
    *(undefined2 *)((int)this + 0x104) = pvVar6;
  }
  uVar8 = 0x1000;
  pvVar3 = allocate_memory(CONCAT22(uVar13,0x42));
  if (pvVar6 == NULL && pvVar3 == NULL)
  {
    *(undefined4 *)((int)this + 0x106) = 0x0;
  }
  else
  {
    uVar8 = 0x1008;
    pvVar6 = UI_Complex_Control_ctor
                       (pvVar3,pvVar6,0x0,0xf500f1,0x0,0x1af,0x1ae,0xf5,
                        *(undefined2 *)((int)this + 0x8));
    *(undefined2 *)((int)this + 0x106) = pvVar3;
    *(undefined2 *)((int)this + 0x108) = pvVar6;
  }
  uVar13 = (undefined2)*(undefined4 *)((int)this + 0xfa);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xfa) + 0x10);
  piVar11 = (int16_t *)
            (*(code *)*puVar1)(uVar8,uVar13,
                               (int)((ulong)*(undefined4 *)((int)this + 0xfa) >> 0x10));
  uVar8 = (undefined2)((ulong)piVar11 >> 0x10);
  piVar4 = (int16_t *)piVar11;
  y = piVar4[0x1];
  MoveWindow16(0x1,piVar4[0x3],piVar4[0x2],y,*piVar11,*(HWND16 *)((int)this + 0x8));
  uVar8 = 0x1000;
  pvVar3 = allocate_memory(CONCAT22(uVar13,0x8e));
  uVar7 = y | (uint)pvVar3;
  if (uVar7 == 0x0)
  {
    *(undefined4 *)((int)this + 0x10a) = 0x0;
  }
  else
  {
    uVar8 = 0x1040;
    uVar5 = UI_SubDialog_Base_ctor_init_7728
                      (pvVar3,y,0x1,0x0,0xfc0,*(undefined2 *)((int)this + 0x8));
    *(ushort *)((int)this + 0x10a) = uVar5;
    *(uint *)((int)this + 0x10c) = uVar7;
  }
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0x10a) + 0x74) = 0x1;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x10a) + 0x8);
  (*(code *)*puVar1)(uVar8,(int)*(undefined4 *)((int)this + 0x10a),
                     (int)((ulong)*(undefined4 *)((int)this + 0x10a) >> 0x10));
  if (*(int *)((int)this + 0x10c) != 0x0 || *(int *)((int)this + 0x10a) != 0x0)
  {
    hwnd = *(HWND16 *)((int)*(undefined4 *)((int)this + 0x10a) + 0x6);
    GetWindowRect16((int *)CONCAT22(unaff_SS,local_a),*(HWND16 *)((int)this + 0x8));
    GetWindowRect16((int *)CONCAT22(unaff_SS,&local_12),hwnd);
    iStack_c -= iStack_10;
    iStack_e = iStack_6 - local_a[0x0];
    local_12 = local_a[0x0];
    iStack_10 = iStack_4 + 0x3;
    SetWindowPos16(0x44,iStack_c,iStack_e,iStack_10,local_a[0x0],0x0,hwnd);
  }
  return;
}



// Internal destructor for the Summary View. Cleans up its main child component, child
// windows, and removes itself from the UI container.

void __stdcall16far UI_Summary_View_Internal_Cleanup_logic_3b3e(void *this_ptr)
{
  u32 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 uVar5;
  astruct_371 *uVar4;
  undefined2 uVar6;
  undefined2 unaff_CS;
  
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_371 *)this_ptr;
  uVar4->field262_0x10e = 0x0;
  if (uVar4->field261_0x10a != 0x0)
  {
    unaff_CS = 0x1538;
    DestroyWindow16(*(HWND16 *)((int)uVar4->field261_0x10a + 0x6));
  }
  puVar1 = uVar4->field246_0xf6;
  iVar2 = uVar4->field247_0xf8;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2);
  }
  (&uVar4->field246_0xf6)[0x0] = NULL;
  (&uVar4->field246_0xf6)[0x1] = NULL;
  if (uVar4->field248_0xfa != 0x0)
  {
    if (this_ptr == NULL)
    {
      puVar3 = NULL;
      uVar5 = 0x0;
    }
    else
    {
      puVar3 = &uVar4->field_0xf2;
      uVar5 = uVar6;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)uVar4->field248_0xfa,(long)CONCAT22(uVar5,puVar3));
  }
  uVar4->field248_0xfa = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Lab_Orbit_View_OnPaint_and_Spawn_SubDialog_3bd6(undefined4 param_1)
{
  int dialog_id;
  int iVar1;
  undefined2 uVar2;
  void *pvVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  UI_Lab_Orbit_View_OnPaint_Handler_3fa0((void *)*(undefined4 *)(iVar1 + 0xf6));
  if (*(int *)(iVar1 + 0x100) == 0x0)
  {
    *(undefined2 *)(iVar1 + 0x100) = 0x1;
    if (*(int *)((int)*(undefined4 *)(iVar1 + 0xfa) + 0x56) == 0x0)
    {
      dialog_id = 0x5;
    }
    else
    {
      dialog_id = 0x8;
    }
    pvVar3 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                       (_p_UISubDialogTable,*(uint16_t *)(iVar1 + 0x8),dialog_id);
    *(undefined2 *)(iVar1 + 0x10e) = (int)pvVar3;
    *(undefined2 *)(iVar1 + 0x110) = (int)((ulong)pvVar3 >> 0x10);
  }
  return;
}



// Processes entity cycling commands (Prev/Next) for the Summary View, passing them to
// the Navigation Manager.

void __stdcall16far
UI_Summary_View_Handle_Cycling_Commands_3c32(void *this_ptr,uint command_id)
{
  char cVar1;
  int delta;
  
  if (command_id == 0xf5)
  {
    delta = 0x1;
LAB_1020_3c52:
    UI_Navigation_Manager_Cycle_Items_Logic
              (*(long *)((int)(void *)this_ptr + 0xfa),delta);
    return;
  }
  if ((command_id < 0xf6) && (cVar1 = (char)command_id, cVar1 != '\0'))
  {
    if (cVar1 == '\x01' || cVar1 == '\x02')
    {
      return;
    }
    if (cVar1 == -0xc)
    {
      delta = 0x0;
      goto LAB_1020_3c52;
    }
  }
  UI_Summary_View_Handle_Cycling_Commands_3c32(this_ptr,command_id);
  return;
}



// A wrapper that translates far pointer parameters into a hit test call against Summary
// View entities.

void __stdcall16far
UI_Summary_View_HitTest_Entities_FarPtr_Wrapper_3c74
          (void *param_1,undefined4 param_2,undefined2 param_3)
{
  UI_Summary_View_HitTest_Entities_Wrapper_3c8c
            ((void *)CONCAT22((int)param_2,param_1),
             (void *)CONCAT22(param_3,(void *)((ulong)param_2 >> 0x10)));
  return;
}



// Core hit test routine for the Summary View, delegating the operation to its internal
// Navigation Manager instance.

void __stdcall16far
UI_Summary_View_HitTest_Entities_Wrapper_3c8c(void *this_ptr,void *mouse_coords)
{
  UI_Navigation_Manager_HitTest_Entities_Logic
            (*(long *)((int)(void *)this_ptr + 0xfa),(int)(void *)mouse_coords,
             (int)((ulong)mouse_coords >> 0x10));
  return;
}



u16 * __stdcall16far UI_Popup_View_Base_dtor_Wrapper_3ca6(u16 *param_1_00,byte param_2)
{
  u16 *puVar1;
  
  param_1_00 = (u16 *)CONCAT22(param_1_00._2_2_,(u16 *)param_1_00 + -0x79);
  puVar1 = UI_Popup_View_Base_dtor_Scalar_Deleting_3cb8(param_1_00,param_2);
  return puVar1;
}



void __stdcall16far void_noop_stub_1020_3cb4(void)
{
  return;
}



u16 * __stdcall16far
UI_Popup_View_Base_dtor_Scalar_Deleting_3cb8(u16 *param_1,byte param_2)
{
  u16 *puVar1;
  undefined2 uVar2;
  undefined4 local_a;
  
  if (param_1 == NULL)
  {
    puVar1 = NULL;
    uVar2 = 0x0;
  }
  else
  {
    puVar1 = (u16 *)param_1 + 0x79;
    uVar2 = param_1._2_2_;
  }
  local_a = (u16 *)CONCAT22(uVar2,puVar1);
  *local_a = (u16)(char *)s_1_1050_389a;
  puVar1[0x1] = 0x1008;
  UI_Popup_View_Base_dtor_Internal_Cleanup_logic((u16 *)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Summary View's internal child component. Sets up GDI mapping
// modes, selects stock pens/brushes, and realizes palettes for Resource ID 6. Sets
// vtable to 0x408A.

void * __stdcall16far
UI_Summary_Child_Component_ctor_3da4(void *this_ptr,void *parent_ptr)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  short sVar3;
  HGDIOBJ16 HVar4;
  undefined2 uVar5;
  long lVar6;
  int iVar7;
  undefined2 uVar8;
  HDC16 local_4;
  astruct_370 *uVar7;
  
  iVar7 = (int)this_ptr;
  uVar8 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_SubComponent_Base_ctor_init_metrics_7c1a(this_ptr,parent_ptr);
  *(undefined4 *)(iVar7 + 0x14) = 0x0;
  *(undefined2 *)this_ptr = 0x408a;
  *(undefined2 *)(iVar7 + 0x2) = 0x1020;
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x6);
  uVar5 = (undefined2)((ulong)lVar6 >> 0x10);
  *(undefined2 *)(iVar7 + 0x14) = (int)lVar6;
  *(undefined2 *)(iVar7 + 0x16) = uVar5;
  puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar7 + 0x14) + 0x4);
  (*(code *)*puVar2)(0x1010,*(undefined2 *)(iVar7 + 0x14),uVar5,0x0,this_ptr);
  local_4 = GetDC16(*(HWND16 *)(iVar7 + 0x4));
  sVar3 = SetMapMode16(0x1,local_4);
  *(short *)(iVar7 + 0x1e) = sVar3;
  HVar4 = GetStockObject16(0x0);
  HVar4 = SelectObject16(0x1538,HVar4);
  *(HGDIOBJ16 *)(iVar7 + 0x18) = HVar4;
  HVar4 = GetStockObject16(0x6);
  HVar4 = SelectObject16(0x1538,HVar4);
  *(HGDIOBJ16 *)(iVar7 + 0x1a) = HVar4;
  puVar1 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar7 + 0x14) + 0x24);
  puVar2 = (undefined2 *)((int)*puVar1 + 0x8);
  uVar5 = (*(code *)*puVar2)(0x1538,(undefined4 *)puVar1,(int)((ulong)puVar1 >> 0x10),
                             &local_4);
  *(undefined2 *)(iVar7 + 0x1c) = uVar5;
  *(HDC16 *)((int)*(undefined4 *)(iVar7 + 0x14) + 0x4c) = local_4;
  return this_ptr;
}



// Internal destructor for the Summary child component. Reverts GDI states and mapping
// modes, and cleans up palettes.

void __stdcall16far
UI_Summary_Child_Component_dtor_Internal_Cleanup_logic_3e84(void *this_ptr)
{
  BOOL16 force_background;
  HPALETTE16 obj;
  astruct_369 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_369 *)this_ptr;
  *(undefined2 *)this_ptr = 0x408a;
  uVar1->field2_0x2 = 0x1020;
  UI_Container_Remove_Item_at_Offset_4_Logic
            ((void *)(void *)uVar1->field19_0x14,(long)this_ptr);
  force_background = *(BOOL16 *)((int)uVar1->field19_0x14 + 0x4c);
  SelectObject16(0x1010,uVar1->field20_0x18);
  SelectObject16(0x1538,uVar1->field21_0x1a);
  obj = SelectPalette16(0x0,uVar1->field22_0x1c,force_background);
  DeleteObject16(obj);
  SetMapMode16(uVar1->field23_0x1e,force_background);
  *(char **)this_ptr = (char *)s_0_020_1050_3ab0;
  uVar1->field2_0x2 = 0x1008;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  return;
}



// Handles window state change events for the Summary View, triggering rectangle
// invalidation and redundant validation (likely a GDI flush hack).

void __stdcall16far
UI_Summary_View_Handle_State_Change_Events_3f12(void *this_ptr,int event_type)
{
  void *pvVar1;
  undefined2 uVar2;
  void *unaff_SS;
  
  pvVar1 = (void *)this_ptr;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  if (event_type == 0x1)
  {
    *(undefined4 *)((int)pvVar1 + 0x14) = 0x0;
    return;
  }
  if (event_type != 0xd)
  {
    return;
  }
  InvalidateRect16(0x0,(void *)CONCAT22(*(undefined2 *)((int)pvVar1 + 0x4),unaff_SS),0xe
                  );
  ValidateRect16((undefined1 *)CONCAT22(unaff_SS,&stack0xfff6),
                 *(HWND16 *)((int)pvVar1 + 0x4));
  ValidateRect16((undefined1 *)CONCAT22(unaff_SS,&stack0xfff6),
                 *(HWND16 *)((int)pvVar1 + 0x4));
  return;
}



// WM_PAINT handler for the Research Lab's orbital display. Renders the background
// bitmap and iterates through planetary data to draw orbits and selection markers using
// 40CE.

void __stdcall16far UI_Lab_Orbit_View_OnPaint_Handler_3fa0(void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  u16 unaff_SS;
  int arg2;
  undefined4 *puVar5;
  u32 arg5;
  undefined2 uVar6;
  u8 *arg7;
  undefined2 *hdc_maybe;
  u16 arg9;
  HDC16 in_stack_0000ffb0;
  int iStack_38;
  undefined4 uStack_36;
  int local_32 [0x2];
  int iStack_2e;
  int *piStack_2c;
  undefined4 *puStack_28;
  undefined2 local_24;
  undefined1 local_22 [0x20];
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)pvVar2 + 0x4))
  ;
  local_24 = *(undefined2 *)((int)*(undefined4 *)((int)pvVar2 + 0x14) + 0x4c);
  puStack_28 = (undefined4 *)
               *(undefined4 *)((int)*(undefined4 *)((int)pvVar2 + 0x14) + 0x24);
  hdc_maybe = &local_24;
  uVar6 = 0x0;
  arg7 = NULL;
  uVar4 = (undefined2)((ulong)puStack_28 >> 0x10);
  puVar5 = (undefined4 *)puStack_28;
  puVar1 = (undefined2 *)((int)*puStack_28 + 0x4);
  arg9 = unaff_SS;
  (*(code *)*puVar1)(0x1538);
  iStack_2e = *(int *)((int)*(undefined4 *)((int)pvVar2 + 0x14) + 0x44);
  piStack_2c = (int *)*(undefined4 *)((int)*(undefined4 *)((int)pvVar2 + 0x14) + 0x40);
  arg5 = CONCAT22(puVar5,unaff_SS);
  unpack_word_pair((void *)((int)*(undefined4 *)((int)pvVar2 + 0x14) + 0x3a),
                   (int *)((ulong)*(undefined4 *)((int)pvVar2 + 0x14) >> 0x10),local_32)
  ;
  uStack_36 = piStack_2c;
  for (iStack_38 = 0x0; iStack_38 < iStack_2e; iStack_38 += 0x1)
  {
    arg5 = CONCAT22((int)(arg5 >> 0x10),local_24);
    arg2 = (int)((ulong)uStack_36 >> 0x10);
    UI_Draw_Planet_Orbit_Ellipse_and_Selection_Marker_40ce
              ((int *)uStack_36,arg2,local_32[0x0],local_32[0x1],arg5,
               CONCAT22(uVar6,uVar4),arg7,(HDC16)hdc_maybe,arg9,in_stack_0000ffb0);
    uStack_36 = (int *)CONCAT22(arg2,(int *)uStack_36 + 0xc);
  }
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)pvVar2 + 0x4));
  return;
}



// Scalar deleting destructor for the VrMode view.

void * __stdcall16far
UI_VrMode_View_dtor_Scalar_Deleting_logic_4064(void *this_ptr,byte flags)
{
  UI_Summary_Child_Component_dtor_Internal_Cleanup_logic_3e84(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



void * __stdcall16far UI_Coordinate_Pair_Init_State_4092(void *param_1)
{
  undefined2 uVar1;
  void *ptr;
  
  ptr = (void *)param_1;
  zero_init_struct_6bytes(ptr);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)ptr + 0x6) = 0x0;
  *(undefined2 *)((int)ptr + 0x8) = 0x0;
  *(undefined2 *)((int)ptr + 0xa) = 0x1;
  *(undefined2 *)((int)ptr + 0xc) = 0x0;
  *(undefined2 *)((int)ptr + 0xe) = 0x0;
  zero_init_struct_6bytes((void *)((int)ptr + 0x10));
  return param_1;
}



// Specialized GDI drawing routine that renders a planet's orbit as an ellipse and
// conditionally draws a rectangular selection marker/crosshair around it.

void __stdcall16far
UI_Draw_Planet_Orbit_Ellipse_and_Selection_Marker_40ce
          (int *planet_ptr,int arg2,int arg3,u16 arg4,u32 arg5,u32 arg6,u8 *arg7,
          HDC16 hdc_maybe,u16 arg9,HDC16 hdc)
{
  HGDIOBJ16 HVar1;
  HPEN16 obj;
  int local_6;
  int local_4;
  
  unpack_word_pair(planet_ptr + 0x8,(int *)arg2,&local_6);
  unpack_word_pair(planet_ptr,(int *)arg2,&local_6);
  Ellipse16(planet_ptr[0x5] + local_6 + arg3,planet_ptr[0x5] + local_4 + arg4,
            (local_6 - planet_ptr[0x5]) + arg3,(local_4 - planet_ptr[0x5]) + arg4,
            (short)arg5);
  if ((*(byte *)(planet_ptr + 0x7) & 0x1) != 0x0)
  {
    HVar1 = GetStockObject16(0x5);
    SelectObject16(0x1538,HVar1);
    obj = CreatePen16(0xf9,0x100,0x1);
    SelectObject16(0x1538,obj);
    Rectangle16(local_6 + arg3 + 0x5,local_4 + arg4 + 0x5,local_6 + arg3 + -0x5,
                local_4 + arg4 + -0x5,(short)arg5);
    HVar1 = GetStockObject16(0x0);
    SelectObject16(0x1538,HVar1);
    HVar1 = GetStockObject16(0x6);
    HVar1 = SelectObject16(0x1538,HVar1);
    DeleteObject16(HVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Research Lab UI view. Loads custom cursors (0x19E, 0x19F) and
// accelerator tables. Initializes base UI object and resource 0x29. Sets vtable to
// 0x623C.

void * __stdcall16far
UI_Lab_View_ctor_init_logic_41c8(astruct_368 *param_1,undefined2 param_2,void *param_3)
{
  undefined2 *puVar1;
  HCURSOR16 HVar2;
  u16 *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  astruct_368 *uVar6;
  
  uVar6 = (astruct_368 *)param_1;
  iVar6 = (int)((ulong)param_1 >> 0x10);
  UI_Panel_Base_ctor_init_logic_7f7a
            (param_1,(void *)CONCAT22(param_2,(void *)0x8),param_3);
  uVar6->field232_0xee = 0x0;
  uVar6->field233_0xf0 = 0x0;
  uVar6->field234_0xf2 = 0x0;
  uVar6->field235_0xf4 = 0x1;
  uVar6->field236_0xf6 = 0x0;
  uVar6->field237_0xfa = NULL;
  uVar6->field238_0xfe = 0x0;
  uVar6->field239_0x102 = 0x0;
  uVar6->field240_0x106 = 0x0;
  uVar6->field242_0x10a = 0x0;
  uVar6->field241_0x108 = 0x0;
  uVar6->field243_0x10c = 0x0;
  uVar6->field245_0x110 = 0x0;
  uVar6->field244_0x10e = 0x0;
  uVar6->field246_0x112 = 0x0;
  uVar6->field247_0x114 = 0x0;
  uVar6->field248_0x116 = 0x0;
  *(undefined2 *)param_1 = 0x623c;
  uVar6->field2_0x2 = 0x1020;
  uVar6->field225_0xe2 = 0x62d8;
  uVar6->field226_0xe4 = 0x1020;
  HVar2 = LoadCursor16((void *)0x19e,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  uVar6->field233_0xf0 = HVar2;
  HVar2 = LoadCursor16((void *)0x19f,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  uVar6->field234_0xf2 = HVar2;
  PTR_DAT_1050_0000_1050_0398 =
       (undefined *)
       LoadAccelerators16(s_OpAccel_1050_43e8,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  *(int *)&uVar6->field237_0xfa = (int)lVar5;
  *(undefined2 *)((int)&uVar6->field237_0xfa + 0x2) = (int)((ulong)lVar5 >> 0x10);
  if (iVar6 == 0x0 && uVar6 == NULL)
  {
    puVar3 = NULL;
    iVar4 = 0x0;
  }
  else
  {
    puVar3 = &uVar6->field225_0xe2;
    iVar4 = iVar6;
  }
  puVar1 = (undefined2 *)((int)*uVar6->field237_0xfa + 0x4);
  (*(code *)*puVar1)(0x1010,(u32 *)uVar6->field237_0xfa,
                     (int)((ulong)uVar6->field237_0xfa >> 0x10),0x0,puVar3,iVar4);
  uVar6->field227_0xe6 = (u32)uVar6->field237_0xfa;
  return param_1;
}



// Internal destructor for the Lab View. Destroys menus, custom cursors, and performs
// standard UI object teardown.

void __stdcall16far UI_Lab_View_dtor_Internal_Cleanup_logic_42f4(void *this_ptr)
{
  void *pvVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar1 = (void *)this_ptr;
  *(undefined2 *)this_ptr = 0x623c;
  *(undefined2 *)((int)pvVar1 + 0x2) = 0x1020;
  *(undefined2 *)((int)pvVar1 + 0xe2) = 0x62d8;
  *(undefined2 *)((int)pvVar1 + 0xe4) = 0x1020;
  if (*(int *)((int)pvVar1 + 0x106) != 0x0)
  {
    DestroyMenu16(*(HMENU16 *)((int)pvVar1 + 0x106));
  }
  DestroyCursor16(*(HCURSOR16 *)((int)pvVar1 + 0xf0));
  DestroyCursor16(*(HCURSOR16 *)((int)pvVar1 + 0xf2));
  UI_Panel_Base_dtor_Internal_Cleanup_logic_808e(this_ptr);
  return;
}



// Dispatches child interaction events for the Lab View. Handles specific logic for
// child types 1 and 2, or falls back to the default UI window logic.

void __stdcall16far
UI_Lab_View_Handle_Child_Interaction_Dispatch_434c
          (void *this_ptr,void *context,u16 arg1,int type,int arg2)
{
  if (type == 0x1)
  {
    UI_View_Initiate_Mouse_Capture_6184(this_ptr,arg1);
    return;
  }
  if (type == 0x2)
  {
    UI_Lab_View_Spawn_Child_Window_Logic_536e(this_ptr,context,arg1,0x2);
    return;
  }
  UI_Window_Set_Active_Child_Logic((void *)this_ptr,this_ptr._2_2_,(int)(void *)context)
  ;
  return;
}



void __stdcall16far
UI_Lab_View_Handle_Status_Change_4394(undefined4 param_1,uint param_2)
{
  int iVar1;
  undefined2 uVar2;
  undefined4 in_stack_0000fff4;
  
  iVar1 = (int)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == 0x10)
  {
    if (*(int *)(iVar1 + 0x34) != 0x0)
    {
      PostMessage16(0x0,0x0,0xf6,
                    (long)CONCAT22((int)((ulong)in_stack_0000fff4 >> 0x10),g_ParentHWND)
                   );
      return;
    }
  }
  else if (param_2 < 0x11)
  {
    if ((char)param_2 == '\x01')
    {
      *(undefined4 *)(iVar1 + 0x18) = 0x0;
      return;
    }
    if ((char)param_2 == '\v')
    {
      *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0x2c) + 0xe) =
           *(undefined2 *)(iVar1 + -0xda);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Lab_View_Initialize_and_Spawn_Logic_43f6(void *param_1)
{
  undefined2 *puVar1;
  int iVar2;
  u16 *puVar3;
  undefined2 uVar4;
  uint extraout_DX;
  uint segment;
  uint uVar5;
  long lVar6;
  undefined2 uVar7;
  void *this;
  undefined2 uVar8;
  
  this = (void *)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  Build_Site_Object_Set_Window_and_DC
            (*(long *)((int)this + 0xfa),*(HWND16 *)((int)this + 0x8));
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
  *(undefined2 *)((int)this + 0x10e) = (int)lVar6;
  *(undefined2 *)((int)this + 0x110) = (int)((ulong)lVar6 >> 0x10);
  if (param_1 == NULL)
  {
    iVar2 = 0x0;
    uVar4 = 0x0;
  }
  else
  {
    iVar2 = (int)this + 0xe2;
    uVar4 = uVar8;
  }
  uVar7 = (undefined2)*(undefined4 *)((int)this + 0x10e);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x10e) + 0x4);
  (*(code *)*puVar1)(0x1010,uVar7,
                     (int)((ulong)*(undefined4 *)((int)this + 0x10e) >> 0x10),0xb,iVar2,
                     uVar4);
  segment = extraout_DX;
  puVar3 = allocate_memory(CONCAT22(uVar7,0x30));
  uVar5 = segment | (uint)puVar3;
  if (uVar5 == 0x0)
  {
    *(undefined4 *)((int)this + 0xf6) = 0x0;
  }
  else
  {
    puVar3 = UI_Lab_View_Initialize_Items_and_Vtable_62e0
                       (puVar3,segment,*(u16 *)((int)this + 0x8));
    *(undefined2 *)((int)this + 0xf6) = puVar3;
    *(uint *)((int)this + 0xf8) = uVar5;
  }
  UI_Lab_View_Spawn_Child_Window_Logic_536e(param_1,NULL,-0x1,0x3);
  return;
}



void __stdcall16far UI_Lab_View_Cleanup_SubComponents_44b0(u32 *param_1)
{
  undefined2 *puVar1;
  u32 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (u32 *)param_1;
  if (*(long *)((int)puVar2 + 0xf6) != 0x0)
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x98);
    (*(code *)*puVar1)();
    *(undefined2 *)((int)puVar2 + 0x112) = 0x0;
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)puVar2 + 0xf6) + 0x8);
    (*(code *)*puVar1)();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Lab_View_Update_Menu_States_Logic_44ec
          (undefined4 param_1,undefined2 param_2,int param_3,char *param_4)
{
  char *entity_id;
  uint16_t uVar1;
  char *pcVar2;
  u16 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  long lVar8;
  uint16_t w_flags;
  uint16_t local_138 [0x2];
  u16 local_134 [0x2];
  int local_130;
  undefined2 uStack_12e;
  void *local_12c;
  undefined4 local_128;
  void *local_124;
  char *local_11e;
  undefined4 local_116;
  BOOL16 local_10e;
  char *local_10c;
  void *local_108 [0x40];
  u16 local_8;
  char *local_6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x106) != 0x0)
  {
    if ((char *)*(int *)(iVar4 + 0x106) == param_4)
    {
      local_6 = (char *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x3);
      local_8 = *(u16 *)((int)*(undefined4 *)(iVar4 + 0x108) + 0x2e);
      uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x108) >> 0x10);
      iVar5 = (int)*(undefined4 *)(iVar4 + 0x108);
      local_11e = (char *)*(undefined4 *)(iVar5 + 0x42);
      uVar7 = *(undefined2 *)(iVar5 + 0x44);
      local_128._3_1_ = (char)((ulong)local_11e >> 0x18);
      local_128 = local_11e;
      local_10c = local_11e;
      if (local_128._3_1_ == '\0')
      {
        pcVar2 = Lookup_Entity_Name_by_ID_Logic_bd80(local_8);
        strcpy_optimized((char *)CONCAT22(unaff_SS,local_108),
                         (char *)CONCAT22(uVar7,pcVar2));
      }
      else
      {
        local_10c._0_2_ = (char *)local_11e;
        entity_id = (char *)CONCAT22(uVar7,(char *)local_10c);
        local_128 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                              ((u16)_p_SimulatorGlobalState,
                               (u16)((ulong)_p_SimulatorGlobalState >> 0x10),entity_id);
        uVar7 = (undefined2)((ulong)local_128 >> 0x10);
        Entity_Format_Full_Name_Label_Logic
                  ((char *)local_6,(long)CONCAT22(unaff_SS,local_108));
      }
      local_10e = ModifyMenu16((void **)CONCAT22(unaff_SS,local_108),0x76,0x0,0x76,
                               *(HMENU16 *)(iVar4 + 0x106));
      uVar1 = GetMenuState16(0x0,0x13c,*(HMENU16 *)(iVar4 + 0x106));
      if (uVar1 != 0xffff)
      {
        DeleteMenu16(0x1538,0x0,0x13c);
      }
      iVar5 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),local_8);
      if (iVar5 != 0x0)
      {
        pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                           ((int)_p_GlobalResourceManager,
                            (int)((ulong)_p_GlobalResourceManager >> 0x10),0x74b);
        local_128 = (char *)CONCAT22(uVar7,pcVar2);
        InsertMenu16((char *)CONCAT22(uVar7,pcVar2),0x13c,0x400,0xffff,
                     *(HMENU16 *)(iVar4 + 0x106));
      }
      if (*(int *)(local_8 * 0x2 + 0x42d2) == 0x0)
      {
        param_4 = (char *)*(undefined2 *)(iVar4 + 0x106);
        w_flags = 0x1;
        uVar1 = 0x77;
        goto LAB_1020_464c;
      }
      uVar1 = 0x77;
      param_4 = (char *)*(undefined2 *)(iVar4 + 0x106);
    }
    else
    {
      pcVar2 = (char *)GetSubMenu16(0x1,*(HMENU16 *)(iVar4 + 0x106));
      local_128 = (char *)CONCAT22(local_128._2_2_,pcVar2);
      if (pcVar2 != param_4) goto LAB_1020_479e;
      EnableMenuItem16(0x1,0x200,(HMENU16)pcVar2);
      EnableMenuItem16(0x1,0x201,(HMENU16)(char *)local_128);
      EnableMenuItem16(0x1,0x202,(HMENU16)(char *)local_128);
      local_124 = (void *)*(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x108) + 0x42);
      local_11e = Simulator_Global_Get_Entity_Object_Wrapper_8344
                            ((u16)_p_SimulatorGlobalState,
                             (u16)((ulong)_p_SimulatorGlobalState >> 0x10),local_124);
      iVar4 = (int)((ulong)local_11e >> 0x10);
      pcVar2 = (char *)local_11e;
      if (iVar4 == 0x0 && pcVar2 == NULL)
      {
        return;
      }
      local_116 = *(undefined4 *)(pcVar2 + 0x2e);
      if (*(int *)(pcVar2 + 0x30) == 0x0 && (int)local_116 == 0x0)
      {
        return;
      }
      local_10c = (char *)*(undefined4 *)((int)local_116 + 0x200);
      local_108[0x0] = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(local_11e);
      uVar6 = (undefined2)((ulong)local_108[0x0] >> 0x10);
      local_6 = (char *)*(undefined4 *)((int)(void *)local_108[0x0] + 0x1c);
      iVar4 = *(int *)((int)(void *)local_108[0x0] + 0x1e);
      if (iVar4 != 0x0 || (char *)local_6 != NULL)
      {
        local_10c = (char *)CONCAT22(iVar4,(char *)local_6);
      }
      if ((char *)local_10c != (char *)0x1)
      {
        return;
      }
      if (((ulong)local_10c & 0xff0000) != 0x0)
      {
        return;
      }
      local_134[0x0] = UI_Component_Get_Entity_Type_ID_6fa0(local_11e);
      iVar4 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),local_134[0x0]);
      if (iVar4 != 0x0)
      {
        EnableMenuItem16(0x0,0x201,(HMENU16)(char *)local_128);
      }
      if (*(long *)((char *)local_11e + 0x36) != 0x0)
      {
        EnableMenuItem16(0x0,0x202,(HMENU16)(char *)local_128);
      }
      uVar3 = UI_Component_Check_Has_Active_Resources_69cc((u32)local_11e);
      if (uVar3 == 0x0)
      {
        return;
      }
      uVar1 = 0x200;
      param_4 = (char *)local_128;
    }
    w_flags = 0x0;
    goto LAB_1020_464c;
  }
LAB_1020_479e:
  if (param_3 == 0x1)
  {
    iVar4 = Simulator_Check_Resource_4000001_Count_Logic_maybe();
    if (iVar4 == 0x0)
    {
      EnableMenuItem16(0x401,0x0,(HMENU16)param_4);
      uVar1 = 0x1;
LAB_1020_47e3:
      w_flags = 0x401;
      goto LAB_1020_464c;
    }
    EnableMenuItem16(0x400,0x0,(HMENU16)param_4);
    uVar1 = 0x1;
  }
  else if (param_3 == 0x2)
  {
    uVar3 = UI_View_Get_Child_State_Property_64d4
                      ((void *)*(undefined4 *)(iVar4 + 0xf6),0x2);
    if (uVar3 == 0x0)
    {
      EnableMenuItem16(0x401,0x0,(HMENU16)param_4);
      uVar1 = 0x401;
    }
    else
    {
      EnableMenuItem16(0x400,0x0,(HMENU16)param_4);
      uVar1 = 0x400;
    }
    EnableMenuItem16(uVar1,0x1,(HMENU16)param_4);
    if ((p_FreeBlockListHead != NULL) || (*(long *)(iVar4 + 0x102) == 0x0))
    {
      uVar1 = 0x5;
      goto LAB_1020_47e3;
    }
    uVar1 = 0x5;
  }
  else
  {
    if (param_3 == 0x3)
    {
      local_138[0x0] = 0x0;
      local_134[0x0] = 0x0;
      lVar8 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
      uStack_12e = (undefined2)((ulong)lVar8 >> 0x10);
      local_130 = (int)lVar8;
      local_12c = (void *)*(undefined4 *)(local_130 + 0x20);
      if (*(int *)(local_130 + 0x22) != 0x0 || (void *)local_12c != NULL)
      {
        Simulator_Global_Get_Entity_Coords_Wrapper_8308
                  ((u16)_p_SimulatorGlobalState,
                   (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                   (u16 *)CONCAT22(unaff_SS,local_134),
                   (uint16_t *)CONCAT22(unaff_SS,local_138),
                   (void *)CONCAT22(*(int *)(local_130 + 0x22),(void *)local_12c));
        local_138[0x0] = *(uint16_t *)(local_130 + 0x1e);
      }
      local_128 = (char *)((ulong)local_128 & 0xffff0000);
      do
      {
        CheckMenuItem16(0x400,(uint16_t)(char *)local_128,(HMENU16)param_4);
        EnableMenuItem16(0x401,(uint16_t)(char *)local_128,(HMENU16)param_4);
        iVar4 = (int)(char *)local_128 + 0x1;
        local_128 = (char *)CONCAT22(local_128._2_2_,iVar4);
      } while (iVar4 < 0x5);
      CheckMenuItem16(0x408,local_138[0x0],(HMENU16)param_4);
      local_128 = (char *)((ulong)local_128 & 0xffff0000);
      while ((int)(char *)local_128 <= (int)local_134[0x0])
      {
        EnableMenuItem16(0x400,(uint16_t)(char *)local_128,(HMENU16)param_4);
        local_128 = (char *)CONCAT22(local_128._2_2_,(int)(char *)local_128 + 0x1);
      }
      return;
    }
    if (param_3 != 0x4)
    {
      return;
    }
    uVar1 = 0x2;
  }
  w_flags = 0x400;
LAB_1020_464c:
  EnableMenuItem16(w_flags,uVar1,(HMENU16)param_4);
  return;
}
