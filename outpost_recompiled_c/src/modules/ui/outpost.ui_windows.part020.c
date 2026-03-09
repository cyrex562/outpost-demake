/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 20/54
 * Original lines (combined): 59017-60843
 * Boundaries: top-level declarations/definitions only
 */




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



void __stdcall16far
UI_View_Handle_MouseDown_Dispatcher_51c6(void *param_1,u16 param_2,u32 param_3)
{
  int iVar1;
  undefined2 *puVar2;
  u16 uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = *(int *)((int)param_1 + 0xf4);
  uVar3 = (u16)param_3;
  if (iVar1 == 0x2)
  {
    UI_View_Handle_Complex_MouseDown_Interaction_5e76(param_1,param_2,uVar3);
    return;
  }
  if (iVar1 != 0x3)
  {
    uVar3 = UI_View_Dispatch_MouseDown_Actions_58ce
                      (param_1,param_2,uVar3,(byte)(param_3 >> 0x10));
    if (uVar3 == 0x0)
    {
      puVar2 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x4) + 0x5c);
      (*(code *)*puVar2)();
    }
    return;
  }
  UI_View_Handle_MouseUp_Reset_State_5de8(param_1,param_2,uVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes MouseUp or capture release events for the Lab View. Restores cursors and
// releases GDI capture. Conditional logic handles building manager object release.

void __stdcall16far
UI_Lab_View_Handle_MouseUp_or_Release_Capture_522e(void *this_ptr,u16 x,u16 y)
{
  undefined2 *puVar1;
  u16 uVar2;
  astruct_367 *uVar3;
  undefined2 uVar4;
  long context;
  long selection_ref;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_367 *)this_ptr;
  if (uVar3->field240_0xf4 == 0x2)
  {
    SetCursor16(uVar3->field235_0xee);
    uVar3->field235_0xee = 0x0;
    uVar3->field240_0xf4 = 0x1;
    uVar3->field263_0x10c = 0x0;
    ReleaseCapture16();
    return;
  }
  if (uVar3->field240_0xf4 == 0x3)
  {
    SetCursor16(uVar3->field235_0xee);
    uVar3->field235_0xee = 0x0;
    uVar3->field240_0xf4 = 0x1;
    uVar3->field263_0x10c = 0x0;
    ReleaseCapture16();
    selection_ref = 0x0;
    context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x47);
    UI_Building_Manager_Release_Active_Object(context,selection_ref);
    return;
  }
  uVar2 = UI_View_Handle_RightClick_PopupMenu_5bf2(this_ptr,x,y);
  if (uVar2 == 0x0)
  {
    puVar1 = (undefined2 *)((int)*uVar3->field4_0x4 + 0x60);
    (*(code *)*puVar1)();
  }
  return;
}



// Internal destructor for the Lab View component. Recursively cleans up internal bitmap
// objects and removes the component from UI containers.

void __stdcall16far UI_Lab_View_dtor_Cleanup_SubComponents_52de(void *this_ptr)
{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  astruct_366 *iVar4;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar4 = (astruct_366 *)this_ptr;
  if (iVar4->field247_0xf8 != 0x0 || iVar4->field246_0xf6 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*iVar4->field246_0xf6;
    (*(code *)*puVar1)();
  }
  (&iVar4->field246_0xf6)[0x0] = NULL;
  (&iVar4->field246_0xf6)[0x1] = NULL;
  if (iVar4->field248_0xfa != 0x0)
  {
    if (this_ptr == NULL)
    {
      puVar2 = NULL;
      uVar3 = 0x0;
    }
    else
    {
      puVar2 = &iVar4->field_0xe2;
      uVar3 = uVar4;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)iVar4->field248_0xfa,(long)CONCAT22(uVar3,puVar2));
  }
  UI_Window_Destroy_Logic(iVar4);
  if (iVar4->field248_0xfa != 0x0)
  {
    Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)iVar4->field248_0xfa);
  }
  iVar4->field248_0xfa = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Spawns specialized child windows or popup menus (like VrMode or child types 1/2)
// within the Lab View context. Registers event handlers and brings windows to top.

void __stdcall16far
UI_Lab_View_Spawn_Child_Window_Logic_536e
          (void *this_ptr,void *parent_ptr,int arg1,int type)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int reg_dx;
  u32 *puVar6;
  int iVar7;
  undefined2 uVar8;
  undefined4 *puVar9;
  void *pvVar10;
  undefined2 unaff_SI;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined4 *this_ptr_00;
  void *pvVar13;
  long lVar14;
  undefined2 uVar15;
  
  pvVar10 = (void *)this_ptr;
  uVar12 = (undefined2)((ulong)this_ptr >> 0x10);
  if (type == 0x1)
  {
    if (*(long *)((int)pvVar10 + 0xfe) == 0x0)
    {
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0xfc));
      if (reg_dx == 0x0 && pvVar5 == NULL)
      {
        *(undefined4 *)((int)pvVar10 + 0xfe) = 0x0;
      }
      else
      {
        *(int *)((int)pvVar10 + 0xcc) = *(int *)((int)pvVar10 + 0xcc) + 0x1;
        puVar6 = UI_TP_PopupMenu_ctor_init_logic_67ce
                           (pvVar5,reg_dx,*(undefined2 *)((int)pvVar10 + 0xcc),this_ptr);
        *(undefined2 *)((int)pvVar10 + 0xfe) = pvVar5;
        *(undefined2 *)((int)pvVar10 + 0x100) = puVar6;
      }
      UI_Window_Register_Child_Event_Handler
                (this_ptr,0x0,(int)*(undefined4 *)((int)pvVar10 + 0xfe),
                 (int)((ulong)*(undefined4 *)((int)pvVar10 + 0xfe) >> 0x10));
      uVar8 = (undefined2)*(undefined4 *)((int)pvVar10 + 0xfe);
      uVar15 = (undefined2)((ulong)*(undefined4 *)((int)pvVar10 + 0xfe) >> 0x10);
      uVar11 = (undefined2)((ulong)*(undefined4 *)((int)pvVar10 + 0xfe) >> 0x10);
      puVar9 = (undefined4 *)(undefined4 *)*(undefined4 *)((int)pvVar10 + 0xfe);
      goto LAB_1020_53f3;
    }
  }
  else
  {
    if (type == 0x2)
    {
      iVar3 = arg1 + 0xc;
      lVar14 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,iVar3);
      iVar7 = (int)((ulong)lVar14 >> 0x10);
      iVar4 = UI_Main_View_Controller_Get_Value_at_Offset_5E_Logic(lVar14);
      if (iVar4 == 0x0)
      {
        *(int *)((int)pvVar10 + 0xcc) = *(int *)((int)pvVar10 + 0xcc) + 0x1;
        uVar11 = *(undefined2 *)((int)pvVar10 + 0xcc);
        pvVar5 = allocate_memory(CONCAT22((void *)parent_ptr,0xfe));
        if (iVar7 == 0x0 && pvVar5 == NULL)
        {
          this_ptr_00 = NULL;
        }
        else
        {
          this_ptr_00 = UI_VrMode_PopupMenu_ctor_init_logic_289a
                                  (pvVar5,iVar7,uVar11,this_ptr);
        }
        uVar8 = (undefined2)((ulong)this_ptr_00 >> 0x10);
        puVar9 = (undefined4 *)this_ptr_00;
        UI_VrMode_PopupMenu_Set_Active_Entity_Logic_294a(this_ptr_00,parent_ptr,iVar3);
        uVar2 = *this_ptr_00;
        puVar1 = (undefined2 *)((int)uVar2 + 0x8);
        (*(code *)*puVar1)(0x1000,puVar9,uVar8);
        UI_Call_Virtual_Refresh_maybe(puVar9);
        UI_Window_Register_Child_Event_Handler(this_ptr,uVar11,puVar9,uVar8);
        puVar1 = (undefined2 *)((int)uVar2 + 0xc);
        (*(code *)*puVar1)(0x1008,puVar9,uVar8,0x1);
      }
      else
      {
        pvVar13 = (void *)UI_Main_View_Controller_Get_FarPtr_at_Offset_80_Logic(lVar14);
        UI_Call_Virtual_Refresh_maybe((void *)pvVar13);
      }
      UI_Main_View_Controller_Update_Viewport_Offset_Wrapper_1(lVar14,0x0,0x0);
      BringWindowToTop16(*(HWND16 *)((int)*(undefined4 *)((int)pvVar10 + 0xce) + 0x8));
      iVar4 = 0x1;
      pvVar13 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x2b);
      iVar3 = (int)((ulong)pvVar13 >> 0x10);
      UI_System_Set_State_Flag_and_Notify((void *)pvVar13,iVar3,iVar4);
      UI_System_Set_State_Flag_and_Notify((void *)pvVar13,iVar3,0x1);
      return;
    }
    if ((type == 0x3) && (*(long *)((int)pvVar10 + 0x102) == 0x0))
    {
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0xfc));
      if (reg_dx == 0x0 && pvVar5 == NULL)
      {
        *(undefined4 *)((int)pvVar10 + 0x102) = 0x0;
      }
      else
      {
        *(int *)((int)pvVar10 + 0xcc) = *(int *)((int)pvVar10 + 0xcc) + 0x1;
        lVar14 = UI_PC_PopupMenu_ctor_init
                           (pvVar5,reg_dx,*(undefined2 *)((int)pvVar10 + 0xcc),this_ptr);
        *(undefined2 *)((int)pvVar10 + 0x102) = (int)lVar14;
        *(undefined2 *)((int)pvVar10 + 0x104) = (int)((ulong)lVar14 >> 0x10);
      }
      UI_Window_Register_Child_Event_Handler
                (this_ptr,0x0,(int)*(undefined4 *)((int)pvVar10 + 0x102),
                 (int)((ulong)*(undefined4 *)((int)pvVar10 + 0x102) >> 0x10));
      uVar8 = (undefined2)*(undefined4 *)((int)pvVar10 + 0x102);
      uVar15 = (undefined2)((ulong)*(undefined4 *)((int)pvVar10 + 0x102) >> 0x10);
      uVar11 = (undefined2)((ulong)*(undefined4 *)((int)pvVar10 + 0x102) >> 0x10);
      puVar9 = (undefined4 *)(undefined4 *)*(undefined4 *)((int)pvVar10 + 0x102);
LAB_1020_53f3:
      puVar1 = (undefined2 *)((int)*puVar9 + 0xc);
      (*(code *)*puVar1)(0x1008,uVar8,uVar15,0x5);
      return;
    }
  }
  return;
}
