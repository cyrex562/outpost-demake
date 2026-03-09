/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 17/54
 * Original lines (combined): 54380-55693
 * Boundaries: top-level declarations/definitions only
 */




// Constructor for the Colony Summary View UI. Creates window, sets DC, and initializes
// its internal child component.

void __stdcall16far
UI_Colony_Summary_View_ctor_init_Window_and_Child_Component_e384(void *param_1)
{
  void *offset;
  int reg_dx;
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
  if (reg_dx != 0x0 || offset != NULL)
  {
    lVar1 = UI_Colony_Summary_Child_Component_ctor_init_logic_Res26_e4f2
                      ((int)offset,reg_dx,*(int *)((int)this + 0x8));
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
  int reg_dx;
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
  if (reg_dx != 0x0 || pvVar1 != NULL)
  {
    lVar2 = UI_Planet_Info_Panel_ctor_init_logic_Res10
                      ((long)CONCAT22(reg_dx,pvVar1),*(int *)((int)this + 0x8),
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
  int reg_dx;
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
  if (reg_dx != 0x0 || pvVar1 != NULL)
  {
    lVar2 = UI_Planet_Surface_Child_Component_ctor_init_logic_Res28_ec74
                      ((long)CONCAT22(reg_dx,pvVar1),*(int *)((int)this + 0x8));
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Object_Initialize_and_Create_Control_Type1_0316(void *param_1)
{
  void *pvVar1;
  uint parent_id;
  uint uVar2;
  long lVar3;
  void *this;
  undefined2 uVar4;
  undefined2 in_stack_0000fff2;
  
  this = (void *)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x1);
  parent_id = (uint)((ulong)lVar3 >> 0x10);
  *(undefined2 *)((int)this + 0xe2) = (int)lVar3;
  *(uint *)((int)this + 0xe4) = parent_id;
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0xe2) + 0x16) =
       *(undefined2 *)((int)this + 0xea);
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0xe2) + 0x12) =
       *(undefined2 *)((int)this + 0xee);
  Resource_Category1_Update_String_Logic
            ((void *)(void *)*(undefined4 *)((int)this + 0xe2),
             (int)((ulong)*(undefined4 *)((int)this + 0xe2) >> 0x10));
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff2,0x12));
  uVar2 = parent_id | (uint)pvVar1;
  if (uVar2 != 0x0)
  {
    pvVar1 = UI_Control_Type1_ctor_init_Res1_logic_04f6(pvVar1,parent_id);
    *(undefined2 *)((int)this + 0xe6) = pvVar1;
    *(uint *)((int)this + 0xe8) = uVar2;
    return;
  }
  *(undefined4 *)((int)this + 0xe6) = 0x0;
  return;
}



void __stdcall16far UI_Object_Post_Message_from_Resource_E2_03b2(undefined4 param_1)
{
  undefined4 uVar1;
  undefined4 in_stack_0000fff6;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe2);
  PostMessage16(0x0,0x0,*(ushort *)((int)uVar1 + 0x16),
                (long)CONCAT22((int)((ulong)in_stack_0000fff6 >> 0x10),g_ParentHWND));
  return;
}



void __stdcall16far UI_Object_Post_Message_from_Resource_E2_03d6(undefined4 param_1)
{
  undefined4 uVar1;
  undefined4 in_stack_0000fff6;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe2);
  PostMessage16(0x0,0x0,*(ushort *)((int)uVar1 + 0x16),
                (long)CONCAT22((int)((ulong)in_stack_0000fff6 >> 0x10),g_ParentHWND));
  return;
}



void __stdcall16far UI_Object_Post_Message_from_Resource_E2_03fa(undefined4 param_1)
{
  undefined4 uVar1;
  undefined4 in_stack_0000fff6;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe2);
  PostMessage16(0x0,0x0,*(ushort *)((int)uVar1 + 0x16),
                (long)CONCAT22((int)((ulong)in_stack_0000fff6 >> 0x10),g_ParentHWND));
  return;
}



// Simple wrapper that passes an internal component pointer (offset 0xE6) to function
// 065E.

void __stdcall16far UI_Component_Wrapper_Call_065e_041e(void *context)
{
  undefined2 in_stack_00000006;
  
  UI_Component_OnPaint_Render_Internal_Bitmap_v2
            ((void *)(void *)*(undefined4 *)((int)context + 0xe6));
  return;
}



void * __stdcall16far
UI_Transaction_Item_Subclass_dtor_Scalar_Deleting_0434
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Transaction_Item_Subclass_dtor_Internal_Cleanup_logic_022c(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Internal destructor for UI Control Type 1. Removes the component from its parent
// container and reverts vtables.

void __stdcall16far UI_Control_Type1_dtor_Internal_Cleanup_logic_05d6(void *this)
{
  astruct_395 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0x75a;
  *(undefined2 *)((int)this + 0x2) = 0x1020;
  if (*(long *)((int)this + 0x6) != 0x0)
  {
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this + 0x6),
               (long)CONCAT22(in_stack_00000006,this));
  }
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// State change handler that posts a command message to the main UI window based on
// internal component state.

void __stdcall16far
UI_Component_Handle_State_Change_Post_Message_061c(void *context,int state)
{
  void *uVar2;
  int in_stack_00000008;
  undefined4 in_stack_0000fff6;
  
  if (in_stack_00000008 == 0x1)
  {
    *(undefined4 *)((int)context + 0x6) = 0x0;
    return;
  }
  if (in_stack_00000008 != 0x2)
  {
    return;
  }
  PostMessage16(0x0,0x0,*(ushort *)((int)*(undefined4 *)((int)context + 0x6) + 0x16),
                (long)CONCAT22((int)((ulong)in_stack_0000fff6 >> 0x10),g_ParentHWND));
  return;
}



void * __stdcall16far
UI_Control_Type1_dtor_Scalar_Deleting_0734(void *param_1,u16 param_2,byte param_3)
{
  UI_Control_Type1_dtor_Internal_Cleanup_logic_05d6(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for UI Transaction Item Type 8. Initializes base class and sets field
// 0xF2. Sets vtable to 0x81A.

void * __stdcall16far
UI_Transaction_Item_Type8_ctor_init
          (undefined2 *param_1,undefined4 param_2,undefined4 *param_3,undefined2 param_4
          ,undefined4 param_5,undefined4 param_6)
{
  undefined2 *puVar2;
  void *pvVar3;
  astruct_393 *puVar1;
  
  UI_Transaction_Item_Subclass_ctor_init_logic_01d8
            (param_1,param_2,param_4,param_5,param_6);
  pvVar3 = (void *)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)param_1;
  puVar2[0x78] = 0x0;
  *(undefined4 *)(puVar2 + 0x79) = *param_3;
  *param_1 = 0x81a;
  puVar2[0x1] = 0x1020;
  return pvVar3;
}



// Handles the 'Show' event for Type 8 items. Plays a sound effect via the Event Manager
// and marks the item as shown.

void __stdcall16far UI_Transaction_Item_Type8_OnShow_Logic(void *context)
{
  astruct_392 *iVar1;
  void *unaff_SS;
  undefined2 in_stack_00000006;
  undefined1 local_16 [0x14];
  
  UI_Component_Wrapper_Call_065e_041e(context);
  if (*(int *)((int)context + 0xf0) == 0x0)
  {
    *(undefined2 *)((int)context + 0xf0) = 0x1;
    UI_Event_Manager_ctor(local_16);
    media_play_from_resource_ptr_wrapper(local_16,unaff_SS);
    UI_Event_Manager_dtor(local_16);
  }
  return;
}



// Scalar deleting destructor for UI Transaction Item Type 8.

void * __stdcall16far
UI_Transaction_Item_Type8_dtor_Scalar_Deleting(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Transaction_Item_Subclass_dtor_Internal_Cleanup_logic_022c(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the specialized 'DanBrotherton' window component. Plays sound 0x1D4
// upon initialization. Sets vtable to 0xB0E.

void * __stdcall16far
UI_DanBrotherton_Window_ctor_init_logic(undefined2 *param_1,void *param_2)
{
  astruct_391 *puVar1;
  undefined2 *this;
  void *arg2;
  
  this = (undefined2 *)param_1;
  arg2 = (void *)((ulong)param_1 >> 0x10);
  UI_DanBrotherton_Window_ctor(this,(int)arg2,0x1,param_2);
  this[0x73] = 0x0;
  *(undefined4 *)(this + 0x74) = 0x0;
  *param_1 = 0xb0e;
  this[0x1] = 0x1020;
  media_play_from_resource_id_shorthand
            ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
  return arg2;
}
