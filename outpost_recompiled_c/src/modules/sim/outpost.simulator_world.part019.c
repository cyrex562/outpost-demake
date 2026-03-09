/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 19/56
 * Original lines (combined): 57276-59463
 * Boundaries: top-level declarations/definitions only
 */




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



// Logic to open the Colony Morale Dialog from the Colony View. Manages unique dialog
// instance counting.

void __stdcall16far UI_Colony_View_Open_Morale_Dialog_Logic_25c0(astruct_379 *param_1)
{
  undefined2 *puVar1;
  void *pvVar2;
  int reg_dx;
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
    reg_dx = extraout_DX;
  }
  if (uVar1->field233_0xea == 0x0)
  {
    uVar1->field233_0xea = 0x1;
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x98));
    if (reg_dx == 0x0 && pvVar2 == NULL)
    {
      puStack_6 = NULL;
    }
    else
    {
      uVar1->field204_0xcc = uVar1->field204_0xcc + 0x1;
      puStack_6 = (undefined4 *)
                  UI_Colony_Morale_Dialog_ctor
                            ((void *)CONCAT22(reg_dx,pvVar2),uVar1->field204_0xcc,uVar1,
                             uVar3);
    }
    puVar1 = (undefined2 *)((int)*puStack_6 + 0x8);
    (*(code *)*puVar1)(0x1000,(undefined4 *)puStack_6,(int)((ulong)puStack_6 >> 0x10));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the child component of the Report View. Initializes with Resource ID
// 0x2A. Sets vtable to 0x288E.

void * __stdcall16far
UI_Report_Child_Component_ctor_init_logic_Res2A_27b0(void *this_ptr,u16 res_id)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  long lVar3;
  
  UI_SubComponent_Grid_ctor_init_921c(this_ptr,res_id);
  *(undefined4 *)((int)this_ptr + 0x14) = 0x0;
  *(char **)this_ptr = (char *)s_fem74_wav_1050_2888 + 0x6;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1020;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2a);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x14) = (int)lVar3;
  *(undefined2 *)((int)this_ptr + 0x16) = uVar2;
  *(undefined2 *)((int)this_ptr + 0x6) = *(undefined2 *)((int)this_ptr + 0x14);
  *(undefined2 *)((int)this_ptr + 0x8) = uVar2;
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)
                  *(undefined4 *)((int)*(undefined4 *)((int)this_ptr + 0x14) + 0xa) +
           0x8);
  uVar2 = (*(code *)*puVar1)();
  *(undefined2 *)((int)this_ptr + 0x12) = uVar2;
  UI_SubComponent_Grid_Draw_Logic_9364(this_ptr);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Sets the active entity for the VrMode popup menu. Loads the corresponding resource
// and notifies the main view controller.

void __stdcall16far
UI_VrMode_PopupMenu_Set_Active_Entity_Logic_294a
          (void *this_ptr,void *context_ptr,int entity_id)
{
  uint16_t uVar2;
  astruct_375 *uVar1;
  undefined2 uVar3;
  long lVar4;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_375 *)this_ptr;
  uVar1->field247_0xfc = entity_id;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,entity_id);
  uVar2 = (uint16_t)((ulong)lVar4 >> 0x10);
  *(int *)&uVar1->field240_0xf2 = (int)lVar4;
  *(uint16_t *)((int)&uVar1->field240_0xf2 + 0x2) = uVar2;
  uVar1->field224_0xe0 = *(u16 *)&uVar1->field240_0xf2;
  uVar1->field225_0xe2 = uVar2;
  UI_Main_View_Controller_Set_Active_Entity_Logic
            ((long)uVar1->field240_0xf2,(long)context_ptr);
  return;
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
