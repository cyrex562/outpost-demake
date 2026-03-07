/*
 * Source: outpost.c
 * Chunk: 51/117
 * Original lines: 57694-58868
 * Boundaries: top-level declarations/definitions only
 */




void __stdcall16far UI_Window_Cleanup_SubObject_EE_and_Destroy_26a6(void *param_1)
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



void * __stdcall16far
UI_Report_Panel_dtor_Scalar_Deleting_26e6(void *param_1,byte param_2)
{
  UI_Report_Panel_Initialize_Vtable_and_Globals_2594(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
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



// Internal destructor for the Report child component. Releases internal resource IDs.

void __stdcall16far
UI_Report_Child_Component_dtor_Internal_Cleanup_logic_2838(void *this_ptr)
{
  astruct_377 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_377 *)this_ptr;
  *(char **)this_ptr = (char *)s_fem74_wav_1050_2888 + 0x6;
  uVar1->field2_0x2 = 0x1020;
  if (uVar1->field19_0x14 != 0x0)
  {
    Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)uVar1->field19_0x14);
  }
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4(this_ptr);
  return;
}



// Scalar deleting destructor for the Report child component.

void * __stdcall16far
UI_Report_Child_Component_dtor_Scalar_Deleting_logic_2868(void *this_ptr,byte flags)
{
  UI_Report_Child_Component_dtor_Internal_Cleanup_logic_2838(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the "VrMode" popup menu. Sets vtable to 0x2E4A and initializes with
// menu resource "SCPOPMENU".

void * __stdcall16far
UI_VrMode_PopupMenu_ctor_init_logic_289a
          (astruct_376 *param_1,undefined2 param_2,undefined4 param_3)
{
  astruct_376 *uVar1;
  undefined2 uVar2;
  
  UI_Popup_View_Base_ctor_init_logic(param_1,0x427c,0x1050,param_2,param_3);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_376 *)param_1;
  uVar1->field238_0xf2 = 0x0;
  uVar1->field239_0xf6 = 0x0;
  uVar1->field240_0xfa = 0x0;
  uVar1->field241_0xfc = 0x0;
  *(undefined2 *)param_1 = 0x2e4a;
  uVar1->field2_0x2 = 0x1020;
  strcpy_optimized((char *)CONCAT22(uVar2,&uVar1->field_0x5b),s_VrMode_1050_4286);
  uVar1->field171_0xac = 0x44c00000;
  return param_1;
}



// Internal destructor for the VrMode popup menu. Reverts vtable and performs cleanup.

void __stdcall16far UI_VrMode_PopupMenu_dtor_Internal_Cleanup_logic_28fc(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0x2e4a;
  ((u16 *)this_ptr)[0x1] = 0x1020;
  UI_Popup_View_Base_dtor_Internal_Cleanup_logic((u16 *)this_ptr);
  return;
}



// Posts a WM_CLOSE (0x10) message to the window handle associated with the UI
// component.

void __stdcall16far UI_Window_Post_Close_Message_291a(void *this_ptr)
{
  undefined2 unaff_BP;
  
  PostMessage16(0x0,0x0,0x0,
                CONCAT22(unaff_BP,*(undefined2 *)((int)(void *)this_ptr + 0x8)));
  return;
}



// Thin wrapper that calls a global UI initialization helper (1020:79AE).

void __stdcall16far UI_PC_PopupMenu_Call_Global_Init_Helper_2936(void)
{
  UI_Global_Initialize_Stub_Returning_1_79ae();
  return;
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



// Retrieves the active palette from the main view controller and realizes it for the
// popup menu's window.

void __stdcall16far
UI_VrMode_PopupMenu_Realize_Palette_Logic_2992(void *this_ptr,int should_realize)
{
  undefined2 *puVar1;
  HGDIOBJ16 obj;
  HDC16 hdc;
  undefined2 uVar2;
  undefined4 *puVar3;
  
  if (should_realize != 0x0)
  {
    uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
    puVar3 = (undefined4 *)
             UI_Main_View_Controller_Get_Active_Buffer_Ptr_Logic
                       (*(long *)((int)(void *)this_ptr + 0xf2));
    puVar1 = (undefined2 *)((int)*puVar3 + 0x18);
    obj = (*(code *)*puVar1)(0x1018,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
    UnrealizeObject16(obj);
    hdc = GetDC16(*(HWND16 *)((int)(void *)this_ptr + 0x8));
    RealizePalette16(hdc);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Switches the currently selected structure in the construction manager based on popup
// menu selection. Notifies the main view via message 0x69 if necessary.

void * __stdcall16far
UI_VrMode_PopupMenu_Switch_Selected_Structure_29d8
          (void *param_1,undefined2 param_2,u16 param_3,undefined4 param_4)
{
  void *in_AX;
  undefined2 in_DX;
  long context;
  int selection;
  undefined2 in_stack_0000fff6;
  
  selection = (int)((ulong)param_4 >> 0x10);
  UI_Component_Update_Selected_Entity_Logic_79fc
            ((void *)CONCAT22(param_2,param_1),param_3,(u16)param_4,selection);
  context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  if (selection == 0x0)
  {
    UI_Construction_Manager_Switch_Selected_Structure_Logic
              (context,0x1,*(int *)((int)param_1 + 0xfc));
  }
  else
  {
    UI_Construction_Manager_Switch_Selected_Structure_Logic
              (context,0x0,*(int *)((int)param_1 + 0xfc));
    SendMessage16(0x0,0x0,0x69,(long)CONCAT22(in_stack_0000fff6,g_ParentHWND));
  }
  return (void *)CONCAT22(in_DX,in_AX);
}



void __stdcall16far
UI_Main_View_Controller_Set_5E_and_MoveWindow_2a46(void *param_1,int param_2)
{
  UI_Main_View_Controller_Set_Value_at_Offset_5E_Logic
            (*(long *)((int)param_1 + 0xf2),0x1);
  UI_Window_Set_Position_and_Refresh_Children(param_1,param_2);
  return;
}



void __stdcall16far UI_Main_View_Cleanup_Menu_and_Update_Rect_2a6a(void *param_1)
{
  UI_Component_Update_Internal_Rect_from_Window_Bounds_7a50(param_1);
  UI_Main_View_Controller_Set_Value_at_Offset_5E_Logic
            (*(long *)((int)(void *)param_1 + 0xf2),0x0);
  UI_VrMode_PopupMenu_Cleanup_Resources_2c88(param_1);
  return;
}



// Updates the main view viewport offset based on parameters passed from the popup menu.

void __stdcall16far
UI_VrMode_PopupMenu_Update_Viewport_Offset_2a94(void *this_ptr,long packed_offset)
{
  UI_Main_View_Controller_Update_Viewport_Offset_Wrapper_1
            (*(long *)((int)this_ptr + 0xf2),(int)packed_offset,
             (int)((ulong)packed_offset >> 0x10));
  return;
}



void __stdcall16far
UI_Main_View_BringToTop_and_Update_Viewport_2aae(void *param_1,long param_2)
{
  undefined2 uVar1;
  void *this;
  
  this = (void *)param_1;
  UI_Call_Virtual_Refresh_maybe(this);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  BringWindowToTop16(*(HWND16 *)((int)this + 0x8));
  UI_Main_View_Controller_Update_Viewport_Offset_Wrapper_2
            (*(long *)((int)this + 0xf2),param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Main command processor for the VrMode popup menu. Handles help, entity renaming, view
// toggling, and window management (move/size).

char * __stdcall16far
UI_VrMode_PopupMenu_Process_Command_Logic_2ae4(void *this_ptr,char *command_id)
{
  undefined2 *puVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  HWND16 in_DX;
  void *pvVar5;
  char *pcVar6;
  ushort w_param;
  undefined2 uVar7;
  HWND16 in_stack_0000fff4;
  void *this;
  
  if (command_id != (char *)s_New_failed_in_Op__Op_>Simulator_1050_0110 + 0x19)
  {
    pvVar3 = (void *)this_ptr;
    uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
    if ((char *)s_New_failed_in_Op__Op_>Simulator_1050_0110 + 0x19 < command_id)
    {
      if (command_id == (char *)s_New_failed_in_Op__Op_>Simulator_1050_0110 + 0x1a)
      {
        uVar7 = *(undefined2 *)((int)pvVar3 + 0x8);
        w_param = 0xf012;
      }
      else
      {
        if (command_id == (char *)s_New_failed_in_Op__Op_>Simulator_1050_0110 + 0x1b)
        {
          return NULL;
        }
        if (command_id == (char *)s_New_failed_in_Op__Op_>Simulator_1050_0110 + 0x1c)
        {
          uVar7 = *(undefined2 *)((int)pvVar3 + 0x8);
          w_param = 0xf020;
        }
        else
        {
          if (command_id == (char *)s_New_failed_in_Op__Op_>Simulator_1050_0110 + 0x1d)
          {
            return NULL;
          }
          if (command_id + -0x12e != NULL)
          {
            return command_id + -0x12e;
          }
          uVar7 = *(undefined2 *)((int)pvVar3 + 0x8);
          w_param = 0xf060;
        }
      }
      pcVar4 = (char *)PostMessage16(0x0,0x0,w_param,CONCAT22(in_stack_0000fff4,uVar7));
      return pcVar4;
    }
    if (command_id == (char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x1c)
    {
      pvVar5 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x30);
      this = (void *)pvVar5;
      String_Wrapper_Object_Get_String_Logic(this);
      puVar1 = (undefined2 *)((int)*(undefined4 *)this_ptr + 0x14);
      (*(code *)*puVar1)();
      pcVar4 = String_Wrapper_Object_Get_String_Logic(this);
      UI_Main_View_Update_Entity_Name_Wrapper(*(long *)((int)pvVar3 + 0xf2),pcVar4);
      return pcVar4;
    }
    if (command_id < (char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x1d)
    {
      cVar2 = (char)command_id;
      if (cVar2 == 'o')
      {
        pvVar3 = Resource_Manager_Load_Resource_Object_Logic
                           ((void *)_p_GlobalResourceManager,
                            (int)((ulong)_p_GlobalResourceManager >> 0x10));
        pcVar4 = (char *)WinHelp16(0x2a,0x0,(void *)CONCAT22(pvVar3,(void *)0x1),in_DX);
        return pcVar4;
      }
      if (cVar2 == 'r')
      {
        pvVar5 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                   (_p_ResourceManager,0x30);
        String_Wrapper_Object_Set_String_Logic
                  ((void *)pvVar5,(char *)((ulong)pvVar5 >> 0x10));
        pcVar6 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                           (_p_UISubDialogTable,*(uint16_t *)((int)pvVar3 + 0x8),0x3);
        return (char *)pcVar6;
      }
      command_id = (char *)CONCAT11((char)((uint)command_id >> 0x8),cVar2 + -0x75);
      if ((char)(cVar2 + -0x75) == '\0')
      {
        UI_Main_View_Controller_Toggle_Display_State_Logic
                  (*(long *)((int)pvVar3 + 0xf2));
        InvalidateRect16(0x0,(void *)((ulong)*(uint *)((int)*(undefined4 *)
                                                             ((int)pvVar3 + 0xf6) + 0x4)
                                     << 0x10),in_stack_0000fff4);
        return command_id;
      }
    }
  }
  return command_id;
}



BOOL16 __stdcall16far
UI_Main_Window_Update_Menu_Enabled_State_2c2a(int param_1,HMENU16 param_2)
{
  BOOL16 BVar1;
  undefined4 uVar2;
  
  if (param_1 != 0x0)
  {
    return param_1 - 0x1;
  }
  EnableMenuItem16(0x400,0x3,param_2);
  if ((int)PTR_DAT_1050_0000_1050_3960 < 0x2)
  {
    uVar2 = 0x50401;
  }
  else
  {
    uVar2 = 0x50400;
  }
  BVar1 = EnableMenuItem16((uint16_t)uVar2,(uint16_t)((ulong)uVar2 >> 0x10),param_2);
  return BVar1;
}



void __stdcall16far UI_Main_View_OnPaint_Wrapper_2c72(u32 param_1)
{
  UI_Main_View_OnPaint_Handler_30be((void *)*(undefined4 *)((int)param_1 + 0xf6));
  return;
}



// Cleans up GDI icons, internal components, and resource-managed IDs specific to the
// VrMode popup menu.

void __stdcall16far UI_VrMode_PopupMenu_Cleanup_Resources_2c88(void *this_ptr)
{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = (void *)this_ptr;
  DestroyIcon16(*(HICON16 *)((int)pvVar3 + 0xc2));
  *(undefined2 *)((int)pvVar3 + 0xc2) = 0x0;
  *(undefined2 *)((int)pvVar3 + 0x8) = 0x0;
  puVar1 = (undefined4 *)*(int *)((int)pvVar3 + 0xf6);
  iVar2 = *(int *)((int)pvVar3 + 0xf8);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1538,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)pvVar3 + 0xf6) = 0x0;
  Resource_Manager_Check_ID_Wrapper_Logic
            ((void *)(void *)*(undefined4 *)((int)pvVar3 + 0xf2));
  *(undefined4 *)((int)pvVar3 + 0xf2) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Main_View_Initialize_and_Setup_Context_2cf0(undefined4 *param_1)
{
  undefined2 *puVar1;
  HICON16 HVar2;
  void *pvVar3;
  int16_t *piVar4;
  undefined2 uVar5;
  int extraout_DX;
  int iVar6;
  long lVar7;
  void *pvVar8;
  int16_t *piVar9;
  undefined4 *this;
  undefined2 uVar10;
  
  this = (undefined4 *)param_1;
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  lVar7 = Resource_Manager_Get_Resource_by_ID_Logic
                    (_p_ResourceManager,*(int *)(this + 0x3f));
  uVar5 = (undefined2)((ulong)lVar7 >> 0x10);
  *(undefined2 *)((int)this + 0xf2) = (int)lVar7;
  *(undefined2 *)(this + 0x3d) = uVar5;
  *(undefined2 *)(this + 0x38) = *(undefined2 *)((int)this + 0xf2);
  *(undefined2 *)((int)this + 0xe2) = uVar5;
  HVar2 = LoadIcon16(s_SITEICON_1050_428d,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  *(HICON16 *)((int)this + 0xc2) = HVar2;
  uVar5 = (undefined2)*(undefined4 *)((int)this + 0xf2);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xf2) + 0x30);
  (*(code *)*puVar1)(0x1538,uVar5,
                     (int)((ulong)*(undefined4 *)((int)this + 0xf2) >> 0x10),HVar2);
  iVar6 = extraout_DX;
  pvVar3 = allocate_memory(CONCAT22(uVar5,0x22));
  if (iVar6 == 0x0 && pvVar3 == NULL)
  {
    *(undefined4 *)((int)this + 0xf6) = 0x0;
  }
  else
  {
    pvVar8 = UI_Main_View_Rendering_Context_ctor((void *)CONCAT22(iVar6,pvVar3),param_1)
    ;
    *(undefined2 *)((int)this + 0xf6) = (int)pvVar8;
    *(int *)(this + 0x3e) = (int)((ulong)pvVar8 >> 0x10);
  }
  this[0x3a] = *(undefined4 *)((int)this + 0xf6);
  UI_Main_View_Controller_Set_FarPtr_at_Offset_80_Logic
            (*(long *)((int)this + 0xf2),(long)param_1);
  UI_Main_View_Controller_Get_Indirect_FarPtr_from_Offset_7C_Logic
            (*(long *)((int)this + 0xf2));
  puVar1 = (undefined2 *)((int)*param_1 + 0x14);
  (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xf2) + 0x10);
  piVar9 = (int16_t *)(*(code *)*puVar1)();
  uVar5 = (undefined2)((ulong)piVar9 >> 0x10);
  piVar4 = (int16_t *)piVar9;
  MoveWindow16(0x1,piVar4[0x3],piVar4[0x2],piVar4[0x1],*piVar9,*(HWND16 *)(this + 0x2));
  UI_Call_Virtual_Refresh_maybe(this);
  UpdateWindow16(*(HWND16 *)(this + 0x2));
  return;
}



// Scalar deleting destructor for the VrMode popup menu component.

void * __stdcall16far
UI_VrMode_PopupMenu_dtor_Scalar_Deleting_2e24(void *this_ptr,byte flags)
{
  UI_VrMode_PopupMenu_dtor_Internal_Cleanup_logic_28fc(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI rendering context used by the main view. Sets up a Device
// Context (DC), realization of palettes, and GDI pens/brushes for drawing. Sets vtable
// to 0x363C.

void * __stdcall16far
UI_Main_View_Rendering_Context_ctor(void *this_ptr,void *parent_ptr)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  char *driver;
  HDC16 HVar3;
  undefined2 uVar4;
  HPEN16 obj;
  HGDIOBJ16 HVar5;
  char *device;
  void *pvVar6;
  undefined2 uVar7;
  long lVar8;
  undefined4 *puVar9;
  char *pcVar10;
  
  UI_SubComponent_Base_ctor_init_metrics_7c1a(this_ptr,parent_ptr);
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar6 = (void *)this_ptr;
  *(undefined4 *)((int)pvVar6 + 0x14) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x18) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x1a) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x1c) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x1e) = 0x0;
  *(undefined2 *)((int)pvVar6 + 0x20) = 0x0;
  *(undefined2 *)this_ptr = 0x363c;
  *(undefined2 *)((int)pvVar6 + 0x2) = 0x1020;
  lVar8 = Resource_Manager_Get_Resource_by_ID_Logic
                    (_p_ResourceManager,*(int *)((int)(void *)parent_ptr + 0xfc));
  *(undefined2 *)((int)pvVar6 + 0x14) = (int)lVar8;
  *(undefined2 *)((int)pvVar6 + 0x16) = (int)((ulong)lVar8 >> 0x10);
  puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)pvVar6 + 0x14) + 0x4)
  ;
  (*(code *)*puVar2)(0x1010,(int)*(undefined4 *)((int)pvVar6 + 0x14),
                     (int)((ulong)*(undefined4 *)((int)pvVar6 + 0x14) >> 0x10),0x0,
                     this_ptr);
  pcVar10 = NULL;
  puVar9 = (undefined4 *)
           UI_Main_View_Controller_Get_Active_Buffer_Ptr_Logic
                     (*(long *)((int)pvVar6 + 0x14));
  device = (char *)((ulong)puVar9 >> 0x10);
  driver = get_with_lazy_init((undefined4 *)puVar9);
  HVar3 = CreateDC16(driver,device,(char *)pcVar10,(void *)((ulong)pcVar10 >> 0x10));
  *(HDC16 *)((int)pvVar6 + 0x18) = HVar3;
  puVar2 = (undefined2 *)((int)*puVar9 + 0x8);
  uVar4 = (*(code *)*puVar2)();
  *(undefined2 *)((int)pvVar6 + 0x20) = uVar4;
  uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)pvVar6 + 0x14) + 0x64);
  obj = CreatePen16((short)uVar1,(short)((ulong)uVar1 >> 0x10),0x1);
  *(HPEN16 *)((int)pvVar6 + 0x1a) = obj;
  HVar5 = SelectObject16(0x1538,obj);
  *(HGDIOBJ16 *)((int)pvVar6 + 0x1c) = HVar5;
  HVar5 = GetStockObject16(0x5);
  HVar5 = SelectObject16(0x1538,HVar5);
  *(HGDIOBJ16 *)((int)pvVar6 + 0x1e) = HVar5;
  return this_ptr;
}



// Internal destructor for a UI component that cleans up GDI objects (pens, brushes,
// palettes, DCs) and removes the component from its parent container.

void __stdcall16far UI_Component_dtor_GDI_Cleanup_logic_2fea(void *this_ptr)
{
  HPALETTE16 obj;
  astruct_374 *uVar1;
  undefined2 uVar2;
  HDC16 unaff_CS;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_374 *)this_ptr;
  *(undefined2 *)this_ptr = 0x363c;
  uVar1->field2_0x2 = 0x1020;
  if (uVar1->field19_0x14 != 0x0)
  {
    unaff_CS = 0x1010;
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)uVar1->field19_0x14,(long)this_ptr);
  }
  SelectObject16(unaff_CS,uVar1->field22_0x1c);
  SelectObject16(0x1538,uVar1->field23_0x1e);
  DeleteObject16(uVar1->field21_0x1a);
  obj = SelectPalette16(0x0,uVar1->field24_0x20,uVar1->field20_0x18);
  DeleteObject16(obj);
  DeleteDC16(uVar1->field20_0x18);
  *(char **)this_ptr = (char *)s_0_020_1050_3ab0;
  uVar1->field2_0x2 = 0x1008;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  return;
}



// Handles specific window state change events (1, 4, 6) by either clearing internal
// buffer references or invalidating the window rectangle.

void __stdcall16far
UI_Window_Handle_State_Change_Events_3080(void *this_ptr,int event_type)
{
  HWND16 unaff_BP;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (event_type == 0x1)
  {
    *(undefined4 *)((int)(void *)this_ptr + 0x14) = 0x0;
    return;
  }
  if ((event_type != 0x4) && (event_type != 0x6))
  {
    return;
  }
  InvalidateRect16(0x0,(void *)((ulong)*(uint *)((int)(void *)this_ptr + 0x4) << 0x10),
                   unaff_BP);
  return;
}



// Primary WM_PAINT handler for the main game view. Manages BeginPaint/EndPaint, handles
// iconic drawing, and triggers the rendering of game object collections and selection
// boxes.

void __stdcall16far UI_Main_View_OnPaint_Handler_30be(void *this_ptr)
{
  undefined2 *puVar1;
  u8 *puVar2;
  BOOL16 BVar3;
  void *pvVar4;
  void *pvVar5;
  undefined2 uVar6;
  void *unaff_SS;
  u8 *puVar7;
  u8 *params;
  void *pvVar8;
  undefined2 uVar9;
  undefined1 local_30 [0x8];
  HBRUSH16 HStack_28;
  HICON16 HStack_26;
  HDC16 local_24;
  undefined1 local_22 [0x20];
  
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar5 = (void *)this_ptr;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)((int)pvVar5 + 0x4));
  BVar3 = IsIconic16(*(HWND16 *)((int)pvVar5 + 0x4));
  if (BVar3 == 0x0)
  {
    puVar7 = (u8 *)UI_Main_View_Controller_Get_Active_Buffer_Ptr_Logic
                             (*(long *)((int)pvVar5 + 0x14));
    pvVar4 = (void *)((ulong)puVar7 >> 0x10);
    puVar2 = (u8 *)puVar7;
    puVar1 = (undefined2 *)((int)*(undefined4 *)puVar7 + 0x8);
    (*(code *)*puVar1)(0x1018,puVar2,pvVar4,&local_24);
    if (*(int *)((int)*(undefined4 *)((int)pvVar5 + 0x14) + 0x84) == 0x1)
    {
      UI_Main_View_Draw_All_Object_Collections_320e(this_ptr,local_24);
    }
    uVar9 = 0x0;
    puVar1 = (undefined2 *)((int)*(undefined4 *)puVar7 + 0x4);
    params = puVar2;
    pvVar8 = pvVar4;
    (*(code *)*puVar1)(0x1018);
    if (*(int *)((int)*(undefined4 *)((int)pvVar5 + 0x14) + 0x84) != 0x1)
    {
      UI_Main_View_Draw_All_Object_Collections_320e(this_ptr,local_24);
    }
    UI_Draw_Selection_Rectangle_GDI_3488
              (this_ptr,local_24,params,(void *)CONCAT22(uVar9,pvVar8));
    puVar1 = (undefined2 *)((int)*(undefined4 *)puVar7 + 0xc);
    (*(code *)*puVar1)(0x1018,puVar2,pvVar4,&local_24);
  }
  else if (p_FreeBlockListHead == NULL)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)pvVar5 + 0x14) + 0x2c);
    HStack_26 = (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)pvVar5 + 0x14),
                                   (int)((ulong)*(undefined4 *)((int)pvVar5 + 0x14) >>
                                        0x10));
    if (HStack_26 != 0x0)
    {
      HStack_28 = GetStockObject16(0x4);
      GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_30),
                      *(HWND16 *)((int)pvVar5 + 0x4));
      FillRect16(HStack_28,(void *)CONCAT22(local_24,unaff_SS),0x0);
      DrawIcon16(HStack_26,0x2,0x2,local_24);
    }
  }
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)pvVar5 + 0x4));
  return;
}



// Iterates through and renders all game object collections (fleets, links, etc.)
// visible in the main view. Conditionally creates a secondary DC if required.

void __stdcall16far
UI_Main_View_Draw_All_Object_Collections_320e(void *this_ptr,HDC16 hdc)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  char *driver;
  HPALETTE16 obj;
  char *device;
  void *pvVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  long *unaff_SS;
  char *output;
  void *init_data;
  int local_c;
  undefined4 local_a;
  HPALETTE16 HStack_6;
  HDC16 local_4;
  
  local_4 = hdc;
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar4 = (void *)this_ptr;
  if (*(int *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x84) == 0x1)
  {
    uVar7 = (undefined2)((ulong)*(undefined4 *)((int)pvVar4 + 0x14) >> 0x10);
    iVar5 = (int)*(undefined4 *)((int)pvVar4 + 0x14);
    puVar1 = (undefined4 *)*(undefined4 *)(iVar5 + 0x24);
    device = (char *)*(undefined2 *)(iVar5 + 0x26);
    output = NULL;
    init_data = NULL;
    driver = get_with_lazy_init((undefined4 *)puVar1);
    local_4 = CreateDC16(driver,device,output,init_data);
    puVar3 = (undefined2 *)((int)*puVar1 + 0x8);
    HStack_6 = (*(code *)*puVar3)(0x1538,(undefined4 *)puVar1,
                                  (int)((ulong)puVar1 >> 0x10),&local_4);
  }
  UI_Main_View_Controller_Get_Indirect_Refs_from_Offset_7C_Logic
            (*(long *)((int)pvVar4 + 0x14),&local_c,unaff_SS);
  uVar2 = *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x6c);
  UI_Draw_Object_List_as_Polygons_33c0
            (this_ptr,(int)uVar2,(int)((ulong)uVar2 >> 0x10),local_c,local_a,0x1,local_4
            );
  UI_Main_View_Controller_Get_Fleet_List_Logic
            (*(long *)((int)pvVar4 + 0x14),&local_c,unaff_SS);
  uVar2 = *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x74);
  UI_Draw_Object_List_as_Polygons_33c0
            (this_ptr,(int)uVar2,(int)((ulong)uVar2 >> 0x10),local_c,local_a,0x2,local_4
            );
  UI_Main_View_Controller_Get_Collection_88_Logic
            (*(long *)((int)pvVar4 + 0x14),&local_c,unaff_SS);
  uVar2 = *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x68);
  UI_Draw_Object_List_as_Polygons_33c0
            (this_ptr,(int)uVar2,(int)((ulong)uVar2 >> 0x10),local_c,local_a,0x1,local_4
            );
  UI_Main_View_Controller_Get_Collection_8E_Logic
            (*(long *)((int)pvVar4 + 0x14),&local_c,unaff_SS);
  if (local_c != 0x0)
  {
    uVar2 = *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x70);
    UI_Draw_Object_List_as_Polygons_33c0
              (this_ptr,(int)uVar2,(int)((ulong)uVar2 >> 0x10),local_c,local_a,0x1,
               local_4);
  }
  UI_Main_View_Controller_Get_Link_List_Logic_maybe
            (*(long *)((int)pvVar4 + 0x14),&local_c,unaff_SS);
  if (local_c != 0x0)
  {
    uVar2 = *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x78);
    UI_Draw_Object_List_as_Polygons_33c0
              (this_ptr,(int)uVar2,(int)((ulong)uVar2 >> 0x10),local_c,local_a,0x0,
               local_4);
  }
  if (*(int *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0x84) == 0x1)
  {
    obj = SelectPalette16(0x0,HStack_6,local_4);
    DeleteObject16(obj);
    DeleteDC16(local_4);
  }
  return;
}



// Renders a list of objects as a series of polygons using a consistent pen and brush
// style. Loops through the object collection and calculates coordinates for each.

void __stdcall16far
UI_Draw_Object_List_as_Polygons_33c0
          (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
          int param_5)
{
  HPEN16 obj;
  HGDIOBJ16 obj_00;
  HBRUSH16 obj_01;
  HGDIOBJ16 HVar1;
  u16 *puVar2;
  HDC16 hdc;
  void *pvVar3;
  undefined2 uVar4;
  int iStack_14;
  undefined4 uStack_e;
  
  if (param_3 != 0x0)
  {
    obj = CreatePen16((COLORREF)param_2,(short)((ulong)param_2 >> 0x10),0x1);
    obj_00 = SelectObject16(0x1538,obj);
    obj_01 = CreateSolidBrush16((COLORREF)param_2);
    hdc = 0x1538;
    HVar1 = SelectObject16(0x1538,obj_01);
    uStack_e = param_4;
    for (iStack_14 = 0x0; iStack_14 < param_3; iStack_14 += 0x1)
    {
      uVar4 = (undefined2)((ulong)uStack_e >> 0x10);
      pvVar3 = UI_Calculate_Object_Polygon_Coordinates_3540
                         (param_1,param_5,(int)uStack_e,uVar4);
      if (param_5 < 0x1)
      {
        puVar2 = (u16 *)((int)(undefined **)&p_CurrentHeapContext + 0x1);
      }
      else
      {
        puVar2 = (u16 *)&p_LastAllocatedBlock;
      }
      GDI_Polygon_Wrapper_3602
                ((u16)param_1,(u16)((ulong)param_1 >> 0x10),
                 (u16 *)CONCAT22((void *)pvVar3,puVar2),(HDC16)((ulong)pvVar3 >> 0x10));
      hdc = 0x1000;
      free_if_not_null((void *)pvVar3);
      uStack_e = CONCAT22(uVar4,(int)uStack_e + 0x6);
    }
    HVar1 = SelectObject16(hdc,HVar1);
    DeleteObject16(HVar1);
    SelectObject16(0x1538,obj_00);
    DeleteObject16(obj);
  }
  return;
}



// Draws a stylized selection rectangle using GDI primitives (CreatePen, GetStockObject,
// Rectangle16). Used for highlighting selected objects in the view.

void __stdcall16far
UI_Draw_Selection_Rectangle_GDI_3488
          (void *this_ptr,HDC16 hdc,u8 *params,void *rect_info)
{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *src;
  HPEN16 obj;
  HGDIOBJ16 obj_00;
  HGDIOBJ16 HVar4;
  int *out1;
  undefined2 uVar5;
  undefined4 local_a;
  void *pvStack_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = *(undefined4 *)((int)this_ptr + 0x14);
  out1 = (int *)((ulong)uVar2 >> 0x10);
  src = (void *)((int)uVar2 + 0x36);
  pvStack_6 = (void *)CONCAT22(out1,src);
  unpack_word_pair(src,out1,(int *)&local_a);
  uVar3 = local_a;
  iVar1 = local_a._2_2_ + -0x3;
  local_a = CONCAT22(iVar1,(int)local_a);
  if (iVar1 < 0x0)
  {
    local_a = uVar3 & 0xffff;
  }
  iVar1 = (int)local_a + -0x3;
  local_a._0_2_ = iVar1;
  if (iVar1 < 0x0)
  {
    local_a._0_2_ = 0x0;
  }
  uVar2 = *(undefined4 *)((int)this_ptr + 0x14);
  uVar2 = *(undefined4 *)((int)uVar2 + 0x64);
  obj = CreatePen16((short)uVar2,(short)((ulong)uVar2 >> 0x10),0x1);
  obj_00 = SelectObject16(0x1538,obj);
  HVar4 = GetStockObject16(0x5);
  HVar4 = SelectObject16(0x1538,HVar4);
  Rectangle16((int)local_a + 0x6,local_a._2_2_ + 0x6,(int)local_a,local_a._2_2_,hdc);
  SelectObject16(0x1538,obj_00);
  SelectObject16(0x1538,HVar4);
  DeleteObject16(obj);
  return;
}



// Calculates the individual point coordinates for an object's polygon representation
// based on its type and current state.

void * __stdcall16far
UI_Calculate_Object_Polygon_Coordinates_3540
          (undefined2 param_1,undefined2 param_2,int param_3,void *param_4)
{
  void *pvVar1;
  undefined2 in_DX;
  int iVar2;
  undefined2 unaff_SI;
  int iStack_12;
  int iStack_c;
  int iStack_a;
  int local_6;
  int local_4;
  
  unpack_word_pair((void *)param_4,(int *)((ulong)param_4 >> 0x10),&local_6);
  if (param_3 == 0x0)
  {
    iStack_c = 0x3;
    iStack_a = 0x42a6;
  }
  else if (param_3 == 0x1)
  {
    iStack_c = 0x4;
    iStack_a = 0x4296;
  }
  else
  {
    if (param_3 != 0x2)
    {
      return NULL;
    }
    iStack_c = 0x4;
    iStack_a = 0x42b2;
  }
  pvVar1 = allocate_memory(CONCAT22(unaff_SI,iStack_c << 0x2));
  for (iStack_12 = 0x0; iStack_12 < iStack_c; iStack_12 += 0x1)
  {
    iVar2 = iStack_12 * 0x4;
    *(int *)(iVar2 + (int)pvVar1) = *(int *)(iVar2 + iStack_a) + local_4;
    *(int *)((int)pvVar1 + iVar2 + 0x2) = *(int *)(iVar2 + iStack_a + 0x2) + local_6;
  }
  return (void *)CONCAT22(in_DX,pvVar1);
}



// A thin wrapper around the Win16 Polygon16 API for drawing closed polygons.

void __stdcall16far
GDI_Polygon_Wrapper_3602(u16 unused1,u16 unused2,void *count_and_points,HDC16 hdc)
{
  HDC16 unaff_CS;
  
  Polygon16(unaff_CS,(void *)count_and_points,(short)((ulong)count_and_points >> 0x10));
  return;
}



// Scalar deleting destructor for the UI component cleaned up by the 2FEA logic.

void * __stdcall16far
UI_Component_dtor_Scalar_Deleting_logic_3616(void *this_ptr,byte flags)
{
  UI_Component_dtor_GDI_Cleanup_logic_2fea(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the VrMode view component. Initializes string resources, sets
// vtables, and calls secondary initialization routines.

void * __stdcall16far
UI_VrMode_View_ctor_init_logic_3644
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  astruct_373 *uVar1;
  
  puVar1 = (undefined2 *)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Popup_View_Base_ctor_init_logic(puVar1,uVar2,0x0,0x0,param_2,param_3);
  puVar1[0x79] = (char *)s_1_1050_389a;
  puVar1[0x7a] = 0x1008;
  puVar1[0x79] = (char *)s_18_2_1050_3aa5 + 0x3;
  puVar1[0x7a] = 0x1008;
  puVar1[0x80] = 0x0;
  *(undefined4 *)(puVar1 + 0x85) = 0x0;
  *(undefined4 *)(puVar1 + 0x87) = 0x0;
  *param_1 = 0x3d08;
  puVar1[0x1] = 0x1020;
  puVar1[0x79] = 0x3d9c;
  puVar1[0x7a] = 0x1020;
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(puVar1 + 0x5,0x3ff)
             ,CONCAT22(0x5e9,uVar2));
  strcpy_optimized((char *)CONCAT22(uVar2,(char *)((int)puVar1 + 0x5b)),
                   s_VrMode_1050_42ca);
  *(undefined4 *)(puVar1 + 0x56) = 0x44c00000;
  UI_Summary_View_Initialize_Children_and_Layout_38aa(param_1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Navigation_Dialog_Handle_Event_and_Update_Text_36f6(undefined4 param_1,int param_2)
{
  undefined2 *puVar1;
  char *pcVar2;
  int iVar3;
  HWND16 HVar4;
  undefined2 uVar5;
  undefined2 extraout_DX;
  int iVar6;
  undefined2 uVar7;
  void *unaff_SS;
  int16_t id;
  HWND16 hwnd;
  undefined4 uVar8;
  HWND16 in_stack_0000fbe4;
  undefined4 local_40a;
  char local_406 [0x400];
  undefined2 *local_6;
  
  iVar6 = (int)param_1;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == 0x1)
  {
    *(undefined4 *)(iVar6 + 0x8) = 0x0;
    return;
  }
  if (param_2 != 0xd)
  {
    return;
  }
  local_6 = (undefined2 *)
            UI_Navigation_Manager_Get_Metadata_Ptr_Logic(*(long *)(iVar6 + 0x8),-0x1);
  uVar5 = (undefined2)((ulong)local_6 >> 0x10);
  GetWindowText16(0x3ff,(void *)CONCAT22(*(undefined2 *)
                                          ((int)*(undefined4 *)(iVar6 + 0x18) + 0x6),
                                         unaff_SS),in_stack_0000fbe4);
  pcVar2 = strchr_far_optimized(local_406,(char)unaff_SS);
  local_40a = (char *)CONCAT22(uVar5,pcVar2 + 0x2);
  *local_40a = '\0';
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_406,0x3ff),
             (long)CONCAT22(*local_6,unaff_SS));
  uVar8 = *(undefined4 *)(iVar6 + 0x18);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar6 + 0x18) + 0x18);
  (*(code *)*puVar1)(0x1010,uVar8,local_406);
  hwnd = (HWND16)uVar8;
  iVar3 = *(int *)((int)*(undefined4 *)(iVar6 + 0x8) + 0x4a);
  HVar4 = *(HWND16 *)((int)*(undefined4 *)(iVar6 + 0x18) + 0x6);
  uVar5 = extraout_DX;
  SetDlgItemText(*(void **)((undefined2 *)local_6 + 0x1),0x10f,HVar4);
  SetDlgItemText(*(void **)((undefined2 *)local_6 + 0x5),0x110,HVar4);
  SetDlgItemText(*(void **)((undefined2 *)local_6 + 0x9),0x112,HVar4);
  SetDlgItemText(*(void **)((undefined2 *)local_6 + 0x7),0x113,HVar4);
  if (iVar3 != 0x0)
  {
    iVar3 = UI_Navigation_Manager_Contains_Value_at_Offset_4E_Logic
                      (*(long *)(iVar6 + 0x8),((undefined2 *)local_6)[0xd]);
    if (iVar3 != 0x0)
    {
      id = 0x111;
      pcVar2 = (char *)*(char **)((undefined2 *)local_6 + 0xb);
      uVar5 = (undefined2)((ulong)*(char **)((undefined2 *)local_6 + 0xb) >> 0x10);
      goto LAB_1020_3846;
    }
  }
  id = 0x111;
  pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x5d9);
LAB_1020_3846:
  SetDlgItemText((char *)CONCAT22(uVar5,pcVar2),id,HVar4);
  if (*(long *)(iVar6 + 0x1c) != 0x0)
  {
    HVar4 = GetDlgItem16(((undefined2 *)local_6)[0xd],
                         *(short *)((int)*(undefined4 *)(iVar6 + 0x1c) + 0x6));
    SetFocus16(HVar4);
    return;
  }
  InvalidateRect16(0x0,(void *)((ulong)*(uint *)(iVar6 + -0xea) << 0x10),hwnd);
  return;
}



// A simple wrapper around the internal cleanup logic for the Summary View.

void __stdcall16far UI_Summary_View_dtor_Internal_Wrapper_3898(void *this_ptr)
{
  UI_Summary_View_Internal_Cleanup_logic_3b3e(this_ptr);
  return;
}
