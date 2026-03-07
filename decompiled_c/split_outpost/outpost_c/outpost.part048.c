/*
 * Source: outpost.c
 * Chunk: 48/117
 * Original lines: 54159-55344
 * Boundaries: top-level declarations/definitions only
 */




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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for UI Control Type 54 (Resource 0x36). Initializes vtable and loads
// graphics.

long __stdcall16far UI_Control_Type54_ctor_init_alternative(long this_ref,int id)
{
  astruct_412 *uVar1;
  undefined2 uVar2;
  long lVar3;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_412 *)this_ref;
  *(char **)this_ref = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  *(char **)this_ref = (char *)s_18_2_1050_3aa5 + 0x3;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = id;
  *(char **)this_ref = (char *)s_0_020_1050_3ab0;
  uVar1->field2_0x2 = 0x1008;
  (&uVar1->field4_0x6)[0x0] = 0x0;
  (&uVar1->field4_0x6)[0x1] = 0x0;
  *(undefined2 *)this_ref = 0xe228;
  uVar1->field2_0x2 = 0x1018;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x36);
  uVar1->field4_0x6 = (uint16_t)lVar3;
  uVar1->field5_0x8 = (uint16_t)((ulong)lVar3 >> 0x10);
  return this_ref;
}



// WM_PAINT handler for a UI component that renders an internal bitmap (offset 5).
// Handles palette realization and GDI painting sequence.

void __stdcall16far UI_Component_OnPaint_Render_Internal_Bitmap_logic_e16c(long context)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  HPALETTE16 HVar4;
  astruct_411 *uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  HDC16 local_24;
  undefined1 local_22 [0x20];
  
  uVar6 = (undefined2)((ulong)context >> 0x10);
  uVar5 = (astruct_411 *)context;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),uVar5->field4_0x4);
  puVar1 = (undefined4 *)*(undefined4 *)((int)uVar5->field5_0x6 + 0xa);
  uVar3 = *puVar1;
  puVar2 = (undefined2 *)((int)uVar3 + 0x8);
  HVar4 = (*(code *)*puVar2)(0x1538,(undefined4 *)puVar1,(int)((ulong)puVar1 >> 0x10),
                             &local_24);
  puVar2 = (undefined2 *)((int)uVar3 + 0x4);
  (*(code *)*puVar2)(0x1538,puVar1,0x0,&local_24);
  HVar4 = SelectPalette16(0x0,HVar4,local_24);
  DeleteObject16(HVar4);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),uVar5->field4_0x4);
  return;
}



undefined2 * __stdcall16far
UI_Control_Subclass_E1EE_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  ptr = (undefined2 *)param_1;
  *param_1 = (char *)s_0_020_1050_3ab0;
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
// Constructor for the Colony Summary Panel (variant 26). Initializes base UI object,
// sets vtable to 0xE44E, and loads Resource ID 0x26.

long __stdcall16far
UI_Colony_Summary_Panel_ctor_init_logic_Res26_e230
          (astruct_410 *param_1,undefined2 param_2,void *param_3)
{
  uint16_t uVar2;
  astruct_410 *uVar1;
  undefined2 uVar3;
  long lVar4;
  
  UI_Panel_Base_ctor_init_logic_7f7a
            (param_1,(u16 *)CONCAT22(param_2,(u16 *)&p_LastAllocatedBlock),param_3);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_410 *)param_1;
  uVar1->field233_0xee = 0x0;
  (&uVar1->field234_0xf2)[0x0] = 0x0;
  (&uVar1->field234_0xf2)[0x1] = 0x0;
  *(undefined2 *)param_1 = 0xe44e;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0xe4ea;
  uVar1->field226_0xe4 = 0x1018;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x26);
  uVar2 = (uint16_t)((ulong)lVar4 >> 0x10);
  uVar1->field234_0xf2 = (uint16_t)lVar4;
  uVar1->field235_0xf4 = uVar2;
  uVar1->field227_0xe6 = uVar1->field234_0xf2;
  uVar1->field228_0xe8 = uVar2;
  return (long)param_1;
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
  int in_DX;
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
    in_DX = extraout_DX;
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
    if (in_DX == 0x0 && pvVar3 == NULL)
    {
      puVar4 = NULL;
      uStack_a = NULL;
    }
    else
    {
      uVar4->field204_0xcc = uVar4->field204_0xcc + 0x1;
      uStack_a = UI_VrMode_View_ctor_init_logic_3644
                           (pvVar3,in_DX,uVar4->field204_0xcc,context);
      puVar4 = (undefined4 *)uStack_a;
    }
    UI_Window_Register_Child_Event_Handler(context,0x0,puVar4,uStack_a._2_2_);
    puVar1 = (undefined2 *)((int)*uStack_a + 0xc);
    (*(code *)*puVar1)(0x1008,(undefined4 *)uStack_a,uStack_a._2_2_,0x5);
  }
  return;
}



// Constructor for the Colony Summary View UI. Creates window, sets DC, and initializes
// its internal child component.

void __stdcall16far
UI_Colony_Summary_View_ctor_init_Window_and_Child_Component_e384(void *param_1)
{
  void *offset;
  int in_DX;
  astruct_407 *uVar3;
  long lVar1;
  void *this;
  undefined2 uVar2;
  undefined2 in_stack_0000fffa;
  
  this = (void *)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  Build_Site_Object_Set_Window_and_DC
            (*(long *)((int)this + 0xf2),*(HWND16 *)((int)this + 0x8));
  offset = allocate_memory(CONCAT22(in_stack_0000fffa,0x18));
  if (in_DX != 0x0 || offset != NULL)
  {
    lVar1 = UI_Colony_Summary_Child_Component_ctor_init_logic_Res26_e4f2
                      ((int)offset,in_DX,*(int *)((int)this + 0x8));
    *(undefined2 *)((int)this + 0xee) = (int)lVar1;
    *(undefined2 *)((int)this + 0xf0) = (int)((ulong)lVar1 >> 0x10);
    return;
  }
  *(undefined4 *)((int)this + 0xee) = 0x0;
  return;
}



void __stdcall16far UI_Window_Cleanup_SubObject_EE_and_Destroy_e3e8(void *param_1)
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



void * UI_Colony_Summary_Panel_dtor_Wrapper_e41a(u16 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)(void *)param_2 + -0xe2));
  pvVar1 = UI_Colony_Summary_Panel_dtor_Scalar_Deleting_e428(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Colony_Summary_Panel_dtor_Scalar_Deleting_e428(void *param_1,byte param_2)
{
  UI_Colony_Summary_Panel_Initialize_Vtable_and_Globals_e2a0((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the internal child component of the Colony Summary View. Initializes
// with Resource ID 0x26 and sets vtable to 0xE5D0.

long __stdcall16far
UI_Colony_Summary_Child_Component_ctor_init_logic_Res26_e4f2
          (int offset,int segment,int id)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  long lVar3;
  
  UI_SubComponent_Grid_ctor_init_921c((void *)CONCAT22(segment,offset),id);
  *(undefined4 *)(offset + 0x14) = 0x0;
  *(undefined2 *)CONCAT22(segment,offset) = 0xe5d0;
  *(undefined2 *)(offset + 0x2) = 0x1018;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x26);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  *(undefined2 *)(offset + 0x14) = (int)lVar3;
  *(undefined2 *)(offset + 0x16) = uVar2;
  *(undefined2 *)(offset + 0x6) = *(undefined2 *)(offset + 0x14);
  *(undefined2 *)(offset + 0x8) = uVar2;
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)
                  *(undefined4 *)((int)*(undefined4 *)(offset + 0x14) + 0xa) + 0x8);
  uVar2 = (*(code *)*puVar1)();
  *(undefined2 *)(offset + 0x12) = uVar2;
  UI_SubComponent_Grid_Draw_Logic_9364((void *)CONCAT22(segment,offset));
  return CONCAT22(segment,offset);
}



// Internal destructor for the Colony Summary child component. Releases internal
// resource IDs.

void __stdcall16far
UI_Colony_Summary_Child_Component_dtor_Internal_Cleanup_logic_e57a(long this_ref)
{
  astruct_406 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_406 *)this_ref;
  *(undefined2 *)this_ref = 0xe5d0;
  uVar1->field2_0x2 = 0x1018;
  if (uVar1->field19_0x14 != 0x0)
  {
    Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)uVar1->field19_0x14);
  }
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4((void *)this_ref);
  return;
}



// Scalar deleting destructor for the Colony Summary child component.

long __stdcall16far
UI_Colony_Summary_Child_Component_dtor_Scalar_Deleting_e5aa(long this_ref,byte flags)
{
  UI_Colony_Summary_Child_Component_dtor_Internal_Cleanup_logic_e57a(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Navigation Summary Panel. Initializes base UI object, sets vtable
// to 0xE790, and loads Resource ID 10.

void * __stdcall16far
UI_Navigation_Summary_Panel_ctor_init_logic_Res10_e5dc
          (astruct_405 *param_1,undefined2 param_2,void *param_3)
{
  uint16_t uVar2;
  astruct_405 *uVar1;
  void *pvVar3;
  long lVar4;
  
  UI_Panel_Base_ctor_init_logic_7f7a
            (param_1,(void *)CONCAT22(param_2,(void *)0x9),param_3);
  pvVar3 = (void *)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_405 *)param_1;
  uVar1->field233_0xee = 0x0;
  (&uVar1->field234_0xf2)[0x0] = 0x0;
  (&uVar1->field234_0xf2)[0x1] = 0x0;
  *(undefined2 *)param_1 = 0xe790;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0xe82c;
  uVar1->field226_0xe4 = 0x1018;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0xa);
  uVar2 = (uint16_t)((ulong)lVar4 >> 0x10);
  uVar1->field234_0xf2 = (uint16_t)lVar4;
  uVar1->field235_0xf4 = uVar2;
  uVar1->field227_0xe6 = uVar1->field234_0xf2;
  uVar1->field228_0xe8 = uVar2;
  return pvVar3;
}



// Sets the UI Navigation Summary Panel's vtable and performs its specialized
// initialization.

void __stdcall16far
UI_Navigation_Summary_Panel_Initialize_Vtable_and_Globals_e64c(long this_ref)
{
  astruct_404 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_404 *)this_ref;
  *(undefined2 *)this_ref = 0xe790;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0xe82c;
  uVar1->field226_0xe4 = 0x1018;
  UI_Panel_Base_dtor_Internal_Cleanup_logic_808e((void *)this_ref);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates the Colony Manager's state and triggers a repaint. Specifically handles
// resource ID 0x15.

int __stdcall16far UI_Colony_Manager_Update_and_Invalidate_Logic_Internal(long context)
{
  undefined2 *puVar1;
  int iVar2;
  astruct_403 *uVar3;
  undefined2 uVar4;
  void *pvVar5;
  
  uVar4 = (undefined2)((ulong)context >> 0x10);
  uVar3 = (astruct_403 *)context;
  iVar2 = 0x0;
  if (*(int *)((int)&uVar3->field236_0xee + 0x2) != 0x0 ||
      *(int *)&uVar3->field236_0xee != 0x0)
  {
    puVar1 = (undefined2 *)((int)*uVar3->field236_0xee + 0x8);
    iVar2 = (*(code *)*puVar1)();
  }
  if (uVar3->field233_0xea == 0x0)
  {
    uVar3->field233_0xea = 0x1;
    pvVar5 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                       (_p_UISubDialogTable,uVar3->field8_0x8,0x15);
    iVar2 = (int)pvVar5;
  }
  return iVar2;
}



// Constructor for the Planet View UI component. Creates its window, sets the DC, and
// initializes its internal child component.

void __stdcall16far UI_Planet_View_ctor_init_Window_and_Child_Component(long this_ref)
{
  void *pvVar1;
  int in_DX;
  astruct_402 *uVar2;
  long lVar2;
  void *this;
  undefined2 uVar3;
  int in_stack_0000fffa;
  
  this = (void *)this_ref;
  uVar3 = (undefined2)((ulong)this_ref >> 0x10);
  UI_Element_Create_Window_Logic(this);
  Build_Site_Object_Set_Window_and_DC
            (*(long *)((int)this + 0xf2),*(HWND16 *)((int)this + 0x8));
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x18));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    lVar2 = UI_Planet_Info_Panel_ctor_init_logic_Res10
                      ((long)CONCAT22(in_DX,pvVar1),*(int *)((int)this + 0x8),
                       in_stack_0000fffa);
    *(undefined2 *)((int)this + 0xee) = (int)lVar2;
    *(undefined2 *)((int)this + 0xf0) = (int)((ulong)lVar2 >> 0x10);
    return;
  }
  *(undefined4 *)((int)this + 0xee) = 0x0;
  return;
}



void __stdcall16far UI_Window_Cleanup_SubObject_EE_and_Destroy_e72a(void *param_1)
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



void * UI_Navigation_Summary_Panel_dtor_Wrapper_e75c
                 (undefined2 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)(void *)param_2 + -0xe2));
  pvVar1 = UI_Navigation_Summary_Panel_dtor_Scalar_Deleting_e76a(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Navigation_Summary_Panel_dtor_Scalar_Deleting_e76a(void *param_1,byte param_2)
{
  UI_Navigation_Summary_Panel_Initialize_Vtable_and_Globals_e64c((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Planet Info Panel (Resource 10). Initializes base object and
// loads relevant graphics.

long __stdcall16far
UI_Planet_Info_Panel_ctor_init_logic_Res10(long this_ref,int id1,int id2)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  long lVar3;
  
  UI_SubComponent_Grid_ctor_init_921c((void *)this_ref,id1);
  *(undefined4 *)((int)this_ref + 0x14) = 0x0;
  *(undefined2 *)this_ref = 0xe912;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0xa);
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



// Internal destructor for the Planet Info Panel. Releases resource IDs and clears
// object state.

void __stdcall16far UI_Planet_Info_Panel_dtor_Internal_Cleanup_logic(long this_ref)
{
  astruct_401 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_401 *)this_ref;
  *(undefined2 *)this_ref = 0xe912;
  uVar1->field2_0x2 = 0x1018;
  if (uVar1->field19_0x14 != 0x0)
  {
    Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)uVar1->field19_0x14);
  }
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4((void *)this_ref);
  return;
}



// Scalar deleting destructor for the Planet Info Panel.

long __stdcall16far
UI_Planet_Info_Panel_dtor_Scalar_Deleting_logic_e8ec(long this_ref,byte flags)
{
  UI_Planet_Info_Panel_dtor_Internal_Cleanup_logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Colony Summary Panel. Initializes base object, loads Resource
// 0x28 (Colony info) and 0x32 (Toolbar/Icons). Sets up initial child control state.

long __stdcall16far
UI_Colony_Summary_Panel_ctor_init_logic_Res28_Res32_e91e
          (astruct_400 *param_1,undefined2 param_2,void *param_3)
{
  undefined2 *puVar1;
  u16 *puVar2;
  uint16_t uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  astruct_400 *uVar5;
  
  uVar5 = (astruct_400 *)param_1;
  iVar6 = (int)((ulong)param_1 >> 0x10);
  UI_Panel_Base_ctor_init_logic_7f7a
            (param_1,(void *)CONCAT22(param_2,(void *)((int)(undefined **)
                                                            &p_CurrentHeapContext + 0x1)
                                     ),param_3);
  uVar5->field233_0xee = 0x0;
  (&uVar5->field234_0xf2)[0x0] = 0x0;
  (&uVar5->field234_0xf2)[0x1] = 0x0;
  uVar5->field236_0xf6 = NULL;
  *(undefined2 *)param_1 = 0xebd0;
  uVar5->field2_0x2 = 0x1018;
  uVar5->field225_0xe2 = 0xec6c;
  uVar5->field226_0xe4 = 0x1018;
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x28);
  uVar3 = (uint16_t)((ulong)lVar5 >> 0x10);
  uVar5->field234_0xf2 = (uint16_t)lVar5;
  uVar5->field235_0xf4 = uVar3;
  uVar5->field227_0xe6 = uVar5->field234_0xf2;
  uVar5->field228_0xe8 = uVar3;
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
  *(int *)&uVar5->field236_0xf6 = (int)lVar5;
  *(undefined2 *)((int)&uVar5->field236_0xf6 + 0x2) = (int)((ulong)lVar5 >> 0x10);
  if (iVar6 == 0x0 && uVar5 == NULL)
  {
    puVar2 = NULL;
    iVar4 = 0x0;
  }
  else
  {
    puVar2 = &uVar5->field225_0xe2;
    iVar4 = iVar6;
  }
  puVar1 = (undefined2 *)((int)*uVar5->field236_0xf6 + 0x4);
  (*(code *)*puVar1)(0x1010,(u32 *)uVar5->field236_0xf6,
                     (int)((ulong)uVar5->field236_0xf6 >> 0x10),0xb,puVar2,iVar4);
  return (long)param_1;
}



// Sets the Colony Summary Panel's vtable and calls its specific initialization logic.

void __stdcall16far
UI_Colony_Summary_Panel_Initialize_Vtable_and_Globals_e9de(long this_ref)
{
  astruct_399 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_399 *)this_ref;
  *(undefined2 *)this_ref = 0xebd0;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0xec6c;
  uVar1->field226_0xe4 = 0x1018;
  UI_Panel_Base_dtor_Internal_Cleanup_logic_808e((void *)this_ref);
  return;
}



// Specialized event handler that posts message 0xC6 to the main window if a specific
// condition (param_3 == 0xED) is met. Likely used for specialized button clicks in the
// colony view.

void __stdcall16far
UI_Command_Post_Message_0xC6_on_0xED_Handler_ea0a(int arg1,int arg2,int condition)
{
  undefined4 in_stack_0000fff4;
  
  if (condition == 0xed)
  {
    PostMessage16(0x0,0x0,0xc6,
                  (long)CONCAT22((int)((ulong)in_stack_0000fff4 >> 0x10),g_ParentHWND));
  }
  return;
}



void __stdcall16far UI_Control_Handle_State_Change_ea2c(undefined4 param_1,int param_2)
{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (int)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == 0x1)
  {
    *(undefined4 *)(iVar1 + 0x14) = 0x0;
    return;
  }
  if (param_2 != 0xb)
  {
    return;
  }
  *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0x14) + 0xe) =
       *(undefined2 *)(iVar1 + -0xda);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Triggers a sound effect (Resource 0x95) and opens a specialized dialog related to
// colony management.

void __stdcall16far
UI_Colony_Manager_Play_Sound_and_Open_Specialized_Dialog_ea66(long context)
{
  undefined2 *puVar1;
  u32 *puVar2;
  astruct_398 *uVar3;
  undefined2 uVar4;
  int unaff_SS;
  u32 local_6;
  
  uVar4 = (undefined2)((ulong)context >> 0x10);
  uVar3 = (astruct_398 *)context;
  if (uVar3->field236_0xee != NULL)
  {
    puVar1 = (undefined2 *)((int)*uVar3->field236_0xee + 0x8);
    (*(code *)*puVar1)();
  }
  if (uVar3->field234_0xea == 0x0)
  {
    uVar3->field234_0xea = 0x1;
    init_word_pair(&local_6,unaff_SS,0x1);
    puVar2 = &local_6;
    media_play_from_resource_ptr_wrapper
              ((void *)_p_UIPanelContainer,(void *)((ulong)_p_UIPanelContainer >> 0x10))
    ;
    uVar3->field235_0xec = puVar2;
    UI_Specialized_Dialog_Factory_Logic(uVar3->field241_0xf6,0x0,0x80000,0x0);
  }
  return;
}



// Constructor for the Planet Surface View. Creates window, sets DC, and initializes its
// surface-specific internal component.

void __stdcall16far
UI_Planet_Surface_View_ctor_init_Window_and_Child_Component_eada(void *param_1)
{
  void *pvVar1;
  int in_DX;
  astruct_397 *uVar3;
  long lVar2;
  void *this;
  undefined2 uVar4;
  undefined2 in_stack_0000fffa;
  
  this = (void *)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  Build_Site_Object_Set_Window_and_DC
            (*(long *)((int)this + 0xf2),*(HWND16 *)((int)this + 0x8));
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x28));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    lVar2 = UI_Planet_Surface_Child_Component_ctor_init_logic_Res28_ec74
                      ((long)CONCAT22(in_DX,pvVar1),*(int *)((int)this + 0x8));
    *(undefined2 *)((int)this + 0xee) = (int)lVar2;
    *(undefined2 *)((int)this + 0xf0) = (int)((ulong)lVar2 >> 0x10);
    return;
  }
  *(undefined4 *)((int)this + 0xee) = 0x0;
  return;
}



void __stdcall16far UI_Window_Complex_Cleanup_F6_and_Destroy_eb3e(void *param_1)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  void *this;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  this = (void *)param_1;
  if (*(int *)((int)this + 0xf0) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xee) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xee);
    (*(code *)*puVar1)();
  }
  if (*(long *)((int)this + 0xf6) != 0x0)
  {
    if (param_1 == NULL)
    {
      iVar2 = 0x0;
      uVar3 = 0x0;
    }
    else
    {
      iVar2 = (int)this + 0xe2;
      uVar3 = uVar4;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this + 0xf6),CONCAT22(uVar3,iVar2));
  }
  UI_Window_Destroy_Logic(this);
  return;
}



void * UI_Colony_Summary_Panel_dtor_Wrapper_eb9c
                 (undefined2 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)param_2 + -0xe2));
  pvVar1 = UI_Colony_Summary_Panel_dtor_Scalar_Deleting_ebaa(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Colony_Summary_Panel_dtor_Scalar_Deleting_ebaa(void *param_1,byte param_2)
{
  UI_Colony_Summary_Panel_Initialize_Vtable_and_Globals_e9de((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the internal component of the Planet Surface View. Initializes with
// Resource ID 0x28 and sets vtable to 0x1CC.

long __stdcall16far
UI_Planet_Surface_Child_Component_ctor_init_logic_Res28_ec74(long this_ref,int id)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  void *pvVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 extraout_DX;
  undefined2 uVar6;
  long lVar7;
  undefined2 uVar8;
  
  UI_SubComponent_Grid_ctor_init_921c((void *)this_ref,id);
  *(undefined4 *)((int)this_ref + 0x14) = 0x0;
  zero_init_struct_6bytes((void *)((int)this_ref + 0x18));
  zero_init_struct_6bytes((void *)((int)this_ref + 0x1e));
  *(undefined4 *)((int)this_ref + 0x24) = 0x0;
  *(undefined2 *)this_ref = 0x1cc;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1020;
  lVar7 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x28);
  uVar5 = (undefined2)((ulong)lVar7 >> 0x10);
  *(undefined2 *)((int)this_ref + 0x14) = (int)lVar7;
  *(undefined2 *)((int)this_ref + 0x16) = uVar5;
  uVar8 = 0x0;
  uVar4 = *(undefined2 *)((int)this_ref + 0x14);
  puVar2 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ref + 0x14) + 0x4);
  lVar7 = this_ref;
  (*(code *)*puVar2)();
  *(undefined4 *)((int)this_ref + 0x6) = *(undefined4 *)((int)this_ref + 0x14);
  uVar6 = extraout_DX;
  win16_Copy_Struct_6Bytes_Wrapper
            ((void *)(void *)*(undefined4 *)((int)this_ref + 0x14));
  pvVar3 = UI_Element_Get_FarPtr_at_Offset_1C_Logic
                     ((void *)(void *)*(undefined4 *)((int)this_ref + 0x14));
  *(undefined2 *)((int)this_ref + 0x24) = pvVar3;
  *(undefined2 *)((int)this_ref + 0x26) = uVar6;
  puVar1 = (undefined4 *)
           *(undefined4 *)((int)*(undefined4 *)((int)this_ref + 0x14) + 0xa);
  puVar2 = (undefined2 *)((int)*puVar1 + 0x8);
  uVar4 = (*(code *)*puVar2)(0x1010,(undefined4 *)puVar1,(int)((ulong)puVar1 >> 0x10),
                             CONCAT22(this_ref._2_2_,(int)this_ref + 0xa),uVar4,uVar5,
                             uVar8,lVar7);
  *(undefined2 *)((int)this_ref + 0x12) = uVar4;
  UI_SubComponent_Grid_Draw_Logic_9364((void *)this_ref);
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  copy_struct_6bytes((void *)((int)this_ref + 0x1e),this_ref._2_2_);
  add_3int_vectors((int *)((int)this_ref + 0x18),this_ref._2_2_);
  return this_ref;
}



// Internal destructor for the Planet Surface child component. Releases internal
// resource IDs.

void __stdcall16far
UI_Planet_Surface_Child_Component_dtor_Internal_Cleanup_logic_ed98(long this_ref)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  iVar1 = (int)this_ref;
  *(undefined2 *)this_ref = 0x1cc;
  *(undefined2 *)(iVar1 + 0x2) = 0x1020;
  if (*(long *)(iVar1 + 0x14) != 0x0)
  {
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)(iVar1 + 0x14),this_ref);
    Resource_Manager_Check_ID_Wrapper_Logic
              ((void *)(void *)*(undefined4 *)(iVar1 + 0x14));
  }
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4((void *)this_ref);
  return;
}



// WARNING: Variable defined which should be unmapped: local_16

void __stdcall16far UI_Control_Handle_Adjacency_Invalidate_edd8(u32 param_1,int param_2)
{
  void *this;
  int iVar1;
  int *out1;
  void *unaff_SS;
  u16 local_16;
  u16 local_14;
  u16 local_12;
  u16 local_10;
  u32 local_e;
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  iVar1 = (int)param_1;
  out1 = (int *)(param_1 >> 0x10);
  if (param_2 == 0x1)
  {
    *(undefined4 *)(iVar1 + 0x14) = 0x0;
    return;
  }
  if (param_2 != 0xc)
  {
    return;
  }
  unpack_word_pair((void *)(iVar1 + 0x18),out1,(int *)&local_6);
  this = UI_Element_Get_FarPtr_at_Offset_1C_Logic
                   ((void *)(void *)*(undefined4 *)(iVar1 + 0x14));
  get_with_lazy_init(this);
  InvalidateRect16(0x0,(void *)CONCAT22(*(undefined2 *)(iVar1 + 0x4),unaff_SS),local_4);
  return;
}



// WARNING: Variable defined which should be unmapped: local_b6
// WARNING: Variable defined which should be unmapped: local_be

void __stdcall16far UI_Planet_View_Surface_OnPaint_Logic_0000(u32 param_1)
{
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int *out1;
  undefined2 uVar6;
  int unaff_SS;
  undefined1 local_c4 [0x6];
  u32 local_be;
  u16 local_b8;
  u16 local_b6;
  u16 local_b4;
  u16 local_b2;
  undefined1 auStack_b0 [0x2];
  int aiStack_ae [0x3b];
  u16 local_38;
  u16 local_30;
  u32 local_2e;
  u16 local_2a;
  u16 local_28;
  u32 local_26;
  undefined1 local_22 [0x20];
  
                // Segment:    5
                // Offset:     00033420
                // Length:     efba
                // Min Alloc:  efba
                // Flags:      0d50
                //     Code
                //     Moveable
                //     Preload
                //     Impure (Non-shareable)
                // 
  out1 = (int *)(param_1 >> 0x10);
  iVar5 = (int)param_1;
  BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar5 + 0x4));
  local_26 = *(u32 *)((int)*(undefined4 *)(iVar5 + 0x14) + 0xa);
  piVar4 = out1;
  unpack_word_pair((void *)(iVar5 + 0x18),out1,(int *)&local_2a);
  uVar6 = 0x1008;
  Bitmap_Object_Blit_Transparent_Logic
            ((void *)local_26,(void *)(local_26 >> 0x10),(void *)(iVar5 + 0x18));
  local_2e = 0x0;
  for (local_30 = 0x0; (int)local_30 < 0x6; local_30 += 0x1)
  {
    uVar6 = 0x1010;
    UI_Planet_View_Copy_State_Table_Entry_Logic_maybe
              ((int)*(undefined4 *)(iVar5 + 0x14),
               (int)((ulong)*(undefined4 *)(iVar5 + 0x14) >> 0x10),local_30,&local_b4,
               unaff_SS);
    if (local_b4 == 0x0)
    {
      for (local_38 = 0x0; (int)local_38 <= (int)local_b2; local_38 = local_38 + 0x1)
      {
        iVar2 = local_38 * 0x6;
        local_b8 = (u16)(auStack_b0 + iVar2);
        if (*(int *)(auStack_b0 + iVar2 + 0x4) != 0x0)
        {
          pvVar3 = UI_Element_Get_Nested_FarPtr_from_Offset_28_Logic
                             ((void *)(void *)*(undefined4 *)(iVar5 + 0x14),
                              (int)((ulong)*(undefined4 *)(iVar5 + 0x14) >> 0x10));
          local_2e = CONCAT22(piVar4,pvVar3);
          pack_3words_alt(&local_be,unaff_SS,0x0,
                          *(int *)(auStack_b0 + iVar2 + 0x2) + local_2a);
          uVar6 = 0x1008;
          Bitmap_Object_Blit_Transparent_Logic
                    ((void *)local_26,(void *)(local_26 >> 0x10),&local_be);
        }
      }
    }
    else
    {
      local_be = CONCAT22(unaff_SS,auStack_b0 + local_b2 * 0x6);
      if (*(int *)(auStack_b0 + local_b2 * 0x6 + 0x4) != 0x0)
      {
        pvVar3 = UI_Element_Get_Nested_FarPtr_from_Offset_28_Logic
                           ((void *)(void *)*(undefined4 *)(iVar5 + 0x14),
                            (int)((ulong)*(undefined4 *)(iVar5 + 0x14) >> 0x10));
        local_2e = CONCAT22(piVar4,pvVar3);
        pack_3words_alt(local_c4,unaff_SS,0x0,*(int *)((int)local_be + 0x2) + local_2a);
        uVar6 = 0x1008;
        Bitmap_Object_Blit_Transparent_Logic
                  ((void *)local_26,(void *)(local_26 >> 0x10),local_c4);
      }
    }
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)local_26 + 0x4);
  (*(code *)*puVar1)(uVar6,(int)local_26,(int)(local_26 >> 0x10),0x0,0x0,iVar5 + 0xa,
                     out1);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar5 + 0x4));
  return;
}



void * __stdcall16far
UI_Planet_Surface_Child_Component_dtor_Scalar_Deleting_01a6(void *param_1,byte param_2)
{
  UI_Planet_Surface_Child_Component_dtor_Internal_Cleanup_logic_ed98((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for a subclass of UI Transaction Item. Initializes base window and sets
// vtable to 0x45A.

long __stdcall16far
UI_Transaction_Item_Subclass_ctor_init_logic_01d8
          (undefined2 *param_1,int param_2,int param_3,undefined2 param_4,
          undefined2 param_5,undefined2 param_6,void *param_7)
{
  UI_DanBrotherton_Window_ctor(param_1,param_2,param_3,param_7);
  *(undefined4 *)(param_1 + 0x71) = 0x0;
  *(undefined4 *)(param_1 + 0x73) = 0x0;
  param_1[0x75] = param_6;
  param_1[0x76] = param_5;
  param_1[0x77] = param_4;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x45a;
  param_1[0x1] = 0x1020;
  return (long)CONCAT22(param_2,param_1);
}



// Internal destructor for UI Transaction Item subclasses. Manages child cleanup and
// reverts vtables.

void __stdcall16far
UI_Transaction_Item_Subclass_dtor_Internal_Cleanup_logic_022c(void *this)
{
  undefined2 *puVar1;
  astruct_396 *puVar2;
  undefined2 in_stack_00000006;
  
  *_this = 0x45a;
  *(undefined2 *)((int)this + 0x2) = 0x1020;
  if (*(int *)((int)this + 0xe8) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xe6) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe6);
    (*(code *)*puVar1)();
  }
  UI_Control_Sub_dtor_logic((void *)((int)this + 0xd2));
  *_this = 0x380a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
                // 1008 389a
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Updates window position and registers a simulator-level resource tracker for the
// window's context.

void __stdcall16far
UI_Window_Set_Position_and_Register_Resource_Tracker_028c(void *this,int pos)
{
  Simulator_Register_Resource_Tracker_Wrapper(*(long *)((int)this + 0xe2));
  UI_Window_Set_Position_and_Refresh_Children(this,pos);
  return;
}



void __stdcall16far UI_Object_Cleanup_E6_and_Signal_E2_02ae(void *param_1)
{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  this = (void *)param_1;
  Simulator_Signal_Resource_Tracker_Wrapper(*(long *)((int)this + 0xe2));
  UI_Window_Destroy_Logic(this);
  puVar1 = (undefined4 *)*(int *)((int)this + 0xe6);
  iVar2 = *(int *)((int)this + 0xe8);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1008,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)this + 0xe6) = 0x0;
  Resource_Manager_Check_ID_Wrapper_Logic
            ((void *)(void *)*(undefined4 *)((int)this + 0xe2));
  *(undefined4 *)((int)this + 0xe2) = 0x0;
  return;
}
