/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 14/19
 * Original lines (combined): 58003-73018
 * Boundaries: top-level declarations/definitions only
 */




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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles game turn processing and event messaging within the Lab View. Polls the Turn
// Manager, displays event dialogs, and posts notification messages (0xFC, 0xB0, 0x97)
// to the main UI.

LRESULT __stdcall16far UI_Lab_View_Process_Turn_and_Events_Logic_55b0(void *this_ptr)
{
  undefined2 *puVar1;
  char *pcVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int *unaff_SS;
  char *pcVar10;
  LRESULT pvVar11;
  undefined2 in_stack_0000fed8;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  ushort local_114;
  undefined1 local_112 [0x2];
  int iStack_110;
  int local_10e;
  undefined4 local_10c [0x40];
  void *pvStack_c;
  int iStack_8;
  long lStack_6;
  
  lStack_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  iStack_8 = *(int *)((int)lStack_6 + 0x20);
  pvStack_c = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37)
  ;
  uVar5 = (uint)((ulong)pvStack_c >> 0x10);
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_10c,0x100),
             (long)CONCAT22(0x59c,unaff_SS));
  zero_init_u32_ptr(local_112);
  pcVar2 = Turn_Manager_Process_Next_Event_Message_with_Lazy_Ptr_Update
                     ((void *)pvStack_c,(int *)((ulong)pvStack_c >> 0x10),
                      (long *)&local_114,unaff_SS);
  uStack_118 = (char *)CONCAT22(uVar5,pcVar2);
  uVar6 = uVar5 | (uint)pcVar2;
  uVar8 = (undefined2)((ulong)this_ptr >> 0x10);
  pcVar10 = (char *)CONCAT22(uVar6,pcVar2);
  if ((uVar6 != 0x0) && (pcVar10 = (char *)CONCAT22(uVar6,pcVar2), *uStack_118 != '\0'))
  {
    uVar9 = 0x1000;
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000fed8,0xb4));
    uStack_120 = (void *)CONCAT22(uVar6,pvVar3);
    if (uVar6 == 0x0 && pvVar3 == NULL)
    {
      puVar4 = NULL;
      uVar7 = 0x0;
    }
    else
    {
      puVar4 = local_10c;
      uVar9 = 0x1040;
      uVar7 = UI_SubDialog_Type8DDC_ctor_init_8478
                        (uStack_120,0x0,puVar4,unaff_SS,pcVar2,uVar5,
                         *(undefined2 *)((int)(void *)this_ptr + 0x8));
    }
    uStack_11c = (undefined4 *)CONCAT22(uVar7,puVar4);
    if (iStack_110 == 0x0)
    {
      puVar1 = (undefined2 *)((int)*uStack_11c + 0x74);
      pcVar10 = (char *)(*(code *)*puVar1)(uVar9,puVar4,uVar7);
    }
    else
    {
      puVar1 = (undefined2 *)((int)*uStack_11c + 0x6c);
      pcVar10 = (char *)(*(code *)*puVar1)(uVar9,puVar4,uVar7,local_112);
    }
    uVar9 = (undefined2)((ulong)pcVar10 >> 0x10);
    if ((iStack_8 == 0x0) || (local_114 == 0x0))
    {
      pcVar2 = (char *)PostMessage16(0x0,0x0,0xfc,
                                     (long)CONCAT22(in_stack_0000fed8,g_ParentHWND));
      pcVar10 = (char *)CONCAT22(uVar9,pcVar2);
    }
  }
  if ((iStack_8 != 0x0) && (local_114 != 0x0))
  {
    pvVar11 = SendMessage16(0x0,0x0,local_114,
                            (long)CONCAT22(in_stack_0000fed8,g_ParentHWND));
    *(undefined2 *)((int)(void *)this_ptr + 0x112) = 0x1;
    return pvVar11;
  }
  if (local_10e == 0x6)
  {
    PostMessage16(0x0,0x0,0xb0,(long)CONCAT22(in_stack_0000fed8,g_ParentHWND));
    pcVar10 = (char *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    ((char *)pcVar10 + 0x20)[0x0] = '\x01';
    ((char *)pcVar10 + 0x20)[0x1] = '\0';
  }
  if (local_10e == 0x15)
  {
    PostMessage16(0x0,0x0,0x97,(long)CONCAT22(in_stack_0000fed8,g_ParentHWND));
    pcVar10 = (char *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    ((char *)pcVar10 + 0x20)[0x0] = '\x01';
    ((char *)pcVar10 + 0x20)[0x1] = '\0';
  }
  return pcVar10;
}



// Sets the component's name string (offset 10) and optionally triggers an update
// notification on the sub-component stored at offset 0xE8.

void __stdcall16far
UI_Component_Set_Name_and_Notify_Logic_79b4
          (undefined4 param_1,int param_2,char *param_3)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)param_1 + 0xa)),param_3);
  if (param_2 != 0x0)
  {
    UI_Component_Draw_Labeled_Rectangle_Logic_7cc8
              ((void *)*(undefined4 *)((int)param_1 + 0xe8));
  }
  return;
}



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
// Constructor for a UI component that renders a grid (likely for the planet surface or
// building sites). Initializes vtable to 0x96C8 and sets up the rendering DC.

void * __stdcall16far UI_SubComponent_Grid_ctor_init_921c(void *this_ptr,u16 parent_id)
{
  HDC16 HVar1;
  undefined2 uVar3;
  astruct_344 *uVar2;
  undefined2 uVar4;
  long lVar5;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_344 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar2->field2_0x2 = 0x1008;
  *(char **)this_ptr = (char *)s_18_2_1050_3aa5 + 0x3;
  uVar2->field2_0x2 = 0x1008;
  uVar2->field3_0x4 = parent_id;
  *(char **)this_ptr = (char *)s_0_020_1050_3ab0;
  uVar2->field2_0x2 = 0x1008;
  uVar2->field4_0x6 = 0x0;
  uVar2->field5_0xa = 0x0;
  uVar2->field6_0xc = 0x0;
  uVar2->field7_0xe = 0x0;
  uVar2->field8_0x10 = 0x0;
  uVar2->field9_0x12 = 0x0;
  *(undefined2 *)this_ptr = 0x96c8;
  uVar2->field2_0x2 = 0x1020;
  HVar1 = GetDC16(uVar2->field3_0x4);
  uVar2->field5_0xa = HVar1;
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar3 = (undefined2)((ulong)lVar5 >> 0x10);
  uVar2->field6_0xc = *(u16 *)((int)lVar5 + 0xa);
  uVar2->field7_0xe = *(u16 *)((int)lVar5 + 0xc);
  return this_ptr;
}



// Internal destructor for the Grid sub-component. Cleans up GDI palettes and reverts
// vtables.

void __stdcall16far
UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4(void *this_ptr)
{
  HPALETTE16 obj;
  astruct_343 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_343 *)this_ptr;
  *(undefined2 *)this_ptr = 0x96c8;
  uVar1->field2_0x2 = 0x1020;
  if (uVar1->field16_0x12 != 0x0)
  {
    obj = SelectPalette16(0x0,uVar1->field16_0x12,uVar1->field9_0xa);
    DeleteObject16(obj);
  }
  *(char **)this_ptr = (char *)s_0_020_1050_3ab0;
  uVar1->field2_0x2 = 0x1008;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  return;
}



// Constructor for UI Build Item Type 264C. Initializes base class and sets its internal
// metadata string. Sets vtable to 0x264C.

void * __stdcall16far UI_Build_Item_Type_264C_ctor_init_25da(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)s_fem16_wav_1050_2644 + 0x8;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}
