/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 53/54
 * Original lines (combined): 132389-133682
 * Boundaries: top-level declarations/definitions only
 */




// OnPaint handler for tree-like UI components. Draws a green background frame and
// dispatches calls to draw connecting lines between tree nodes.

void __stdcall16far UI_SubComponent_Tree_OnPaint_Logic_c226(void *param_1)
{
  HPEN16 obj;
  HGDIOBJ16 HVar1;
  void *tree_ptr;
  ushort hdc;
  void *unaff_SS;
  HDC16 in_stack_0000ffb8;
  int local_32;
  int local_30;
  int local_2e;
  int local_2c;
  undefined2 local_2a;
  int local_28;
  HBRUSH16 local_26;
  HDC16 local_24;
  undefined1 local_22 [0x20];
  
  hdc = (ushort)((ulong)param_1 >> 0x10);
  tree_ptr = (void *)param_1;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)((int)tree_ptr + 0x4));
  local_26 = CreateSolidBrush16(0x8000);
  GetClientRect16((int *)CONCAT22(unaff_SS,&local_32),*(HWND16 *)((int)tree_ptr + 0x4));
  local_28 = *(int *)((int)*(undefined4 *)((int)tree_ptr + 0x6) + 0x1a);
  local_2a = *(undefined2 *)((int)*(undefined4 *)((int)tree_ptr + 0x6) + 0x1c);
  local_30 += 0x2;
  local_32 = local_28 + -0xa;
  local_2e += -0x2;
  local_2c += -0x2;
  FRAMERECT(local_26,(void *)CONCAT22(local_24,unaff_SS),in_stack_0000ffb8);
  DeleteObject16(local_26);
  obj = CreatePen16(-0x7f80,0x0,0x2);
  HVar1 = SelectObject16(0x1538,obj);
  UI_Tree_Draw_Horizontal_Connection_c302(tree_ptr,hdc);
  UI_Tree_Draw_Vertical_Connections_c38e(tree_ptr,hdc);
  HVar1 = SelectObject16(0x1538,HVar1);
  DeleteObject16(HVar1);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)tree_ptr + 0x4))
  ;
  return;
}



// Renders a horizontal connection line between the first and last child nodes in a UI
// tree grouping.

void __stdcall16far UI_Tree_Draw_Horizontal_Connection_c302(void *tree_ptr,ushort hdc)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  short in_stack_00000008;
  
  iVar4 = *(int *)((int)*(undefined4 *)((int)tree_ptr + 0x6) + 0x16);
  if (0x1 < iVar4)
  {
    uVar5 = (undefined2)((ulong)*(undefined4 *)((int)tree_ptr + 0x6) >> 0x10);
    puVar2 = (undefined4 *)((int)*(undefined4 *)((int)tree_ptr + 0x6) + 0x2a);
    uVar1 = *(undefined4 *)CONCAT22(uVar5,puVar2);
    iVar3 = (int)uVar1;
    uVar6 = (undefined2)((ulong)uVar1 >> 0x10);
    MoveTo16(*(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0x24),
             *(int *)(iVar3 + 0x22) / 0x2 +
             *(int *)CONCAT22(uVar6,(int *)(iVar3 + 0x1e)),in_stack_00000008);
    uVar1 = puVar2[iVar4 + -0x1];
    iVar4 = (int)uVar1;
    uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
    LineTo16(*(HDC16 *)(iVar4 + 0x20),
             *(int *)(iVar4 + 0x22) / 0x2 +
             *(int *)CONCAT22(uVar5,(int *)(iVar4 + 0x1e)),in_stack_00000008);
  }
  return;
}



// Complex routine that renders vertical 'drop' lines and branching connectors for a
// hierarchical UI tree. Calculates anchor points based on child node positions and
// parent offsets.

void __stdcall16far UI_Tree_Draw_Vertical_Connections_c38e(void *tree_ptr,ushort hdc)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar5;
  HDC16 HVar6;
  long lVar7;
  HDC16 in_stack_00000008;
  undefined2 uStack_1a;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  short *psVar4;
  
  iVar3 = *(int *)((int)*(undefined4 *)((int)tree_ptr + 0x6) + 0x18);
  if ((iVar3 != 0x0) &&
     (*(int *)((int)*(undefined4 *)((int)tree_ptr + 0x6) + 0x16) != 0x0))
  {
    lVar7 = UI_Component_Process_Update_Cycle_Logic
                      ((void *)(void *)*(undefined4 *)((int)tree_ptr + 0x6));
    for (uStack_1a = 0x0; uStack_1a < iVar3; uStack_1a += 0x1)
    {
      uVar1 = *(undefined4 *)(uStack_1a * 0x4 + (int)lVar7);
      iVar2 = (int)uVar1;
      uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
      psVar4 = (short *)CONCAT22(uVar5,(short *)(iVar2 + 0x1e));
      uStack_12 = *(int *)(iVar2 + 0x24) >> 0xf;
      HVar6 = *(int *)(iVar2 + 0x24) / 0x2 + *(int *)(iVar2 + 0x20);
      MoveTo16(HVar6,*psVar4,in_stack_00000008);
      LineTo16(HVar6,*psVar4 + -0xf,in_stack_00000008);
      uStack_14 = GetCurrentPosition16(in_stack_00000008);
      if (uStack_1a == 0x0)
      {
        uStack_10 = uStack_14;
        uStack_e = uStack_12;
      }
    }
    if (*(int *)((int)*(undefined4 *)((int)tree_ptr + 0x6) + 0x24) != 0x0)
    {
      uStack_e -= 0xd;
    }
    if (*(int *)((int)*(undefined4 *)((int)tree_ptr + 0x6) + 0x26) != 0x0)
    {
      uStack_12 += 0xd;
    }
    uVar1 = *(undefined4 *)
             ((int)*(undefined4 *)((int)tree_ptr + 0x6) +
              *(int *)((int)*(undefined4 *)((int)tree_ptr + 0x6) + 0x16) * 0x4 + 0x26);
    iVar3 = (int)uVar1;
    uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
    MoveTo16(*(int *)(iVar3 + 0x24) / 0x2 + *(int *)(iVar3 + 0x20),
             *(int *)(iVar3 + 0x22) + *(int *)CONCAT22(uVar5,(int *)(iVar3 + 0x1e)),
             in_stack_00000008);
    HVar6 = *(int *)(iVar3 + 0x24) >> 0xf;
    LineTo16(*(int *)(iVar3 + 0x24) / 0x2 + *(int *)(iVar3 + 0x20),uStack_10,
             in_stack_00000008);
    GetCurrentPosition16(in_stack_00000008);
    if ((int)HVar6 < (int)uStack_e)
    {
      uStack_e = HVar6;
    }
    if ((int)uStack_12 < (int)HVar6)
    {
      uStack_12 = HVar6;
    }
    MoveTo16(uStack_e,uStack_10,in_stack_00000008);
    LineTo16(uStack_12,uStack_14,in_stack_00000008);
  }
  return;
}



void * __stdcall16far
UI_SubItem_dtor_Scalar_Deleting_vC53E_c518(void *this_ptr,uchar flags)
{
  byte in_stack_00000008;
  
  UI_SubItem_TypeC53E_dtor_Internal_bf92(this_ptr);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}



// Constructor for a UI 'Tree Node' control (vtable 0xC9F2). Initializes base complex
// control using the entity's name, links to the simulator object (0x42), and triggers
// initial layout (C630).

ushort __stdcall16far
UI_TreeNode_Control_ctor_init_c54a
          (astruct_7 *param_1,uint16_t param_2,undefined4 *param_3)
{
  undefined4 *puVar2;
  astruct_7 *uVar1;
  undefined2 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  void *puVar1;
  
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  puVar2 = (undefined4 *)param_3;
  uVar7 = 0x0;
  uVar6 = 0x0;
  puVar1 = (void *)((int)*param_3 + 0x14);
  uVar5 = (**(code **)puVar1)();
  UI_Complex_Control_ctor_9fb8(param_1,0x0,uVar5,puVar2,uVar3,uVar6,uVar7);
  uVar4 = (ushort)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_7 *)param_1;
  uVar1->field65_0x42 = param_3;
  uVar1->field66_0x46 = 0x0;
  uVar1->field67_0x48 = param_2;
  *(undefined2 *)param_1 = 0xc9f2;
  uVar1->field2_0x2 = 0x1040;
  UI_TreeNode_Init_Layout_Logic_c630(uVar1);
  return uVar4;
}



// Internal destructor for Tree Node controls. Decrements global counter (1050:5F02) and
// triggers virtual cleanup of linked bitmaps if it was the last instance.

void __stdcall16far UI_TreeNode_Control_dtor_Internal_c5ac(void *this_ptr)
{
  undefined2 *puVar2;
  undefined2 in_stack_00000006;
  void *puVar1;
  
  *_this_ptr = 0xc9f2;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  PTR_DAT_1050_0000_1050_5f02 = PTR_DAT_1050_0000_1050_5f02 + -0x1;
  if (PTR_DAT_1050_0000_1050_5f02 == NULL)
  {
    if (*(int *)((int)this_ptr + 0xa) != 0x0 ||
        (undefined4 *)*(int *)((int)this_ptr + 0x8) != NULL)
    {
      puVar1 = (void *)(void *)*(undefined4 *)*(int *)((int)this_ptr + 0x8);
      (**(code **)puVar1)();
    }
    if (*(int *)((int)this_ptr + 0xe) != 0x0 ||
        (undefined4 *)*(int *)((int)this_ptr + 0xc) != NULL)
    {
      puVar2 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this_ptr + 0xc);
      (*(code *)*puVar2)();
    }
  }
  UI_Complex_Control_dtor_Internal_911e(this_ptr);
  return;
}



ushort __stdcall16far UI_TreeNode_Get_Linked_Entity_ID_c60e(void *this_ptr)
{
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this_ptr + 0x42) != 0x0)
  {
    return *(ushort *)((int)*(undefined4 *)((int)this_ptr + 0x42) + 0x12);
  }
  return 0x0;
}



void __stdcall16far UI_Dialog_Center_Component_Horizontally_c71e(void *param_1)
{
  undefined2 uVar1;
  void *this_ptr;
  
  this_ptr = (void *)param_1;
  UI_Dialog_Calculate_Layout_Metrics_9252(this_ptr);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(int *)((int)this_ptr + 0x28) =
       *(int *)((int)this_ptr + 0x24) / 0x2 - *(int *)((int)this_ptr + 0x2c) / 0x2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LRESULT __stdcall16far UI_Global_Set_Context_and_Send_Msg_FA_c85a(u32 param_1)
{
  undefined2 unaff_BP;
  LRESULT pvVar1;
  
  _PTR_DAT_1050_0000_1050_5efe = param_1;
  pvVar1 = SendMessage16(0x0,0x0,0xfa,
                         CONCAT22(unaff_BP,*(undefined2 *)((int)param_1 + 0x1a)));
  return pvVar1;
}



void * __stdcall16far
UI_TreeNode_Control_dtor_Scalar_Deleting_c9cc(void *param_1,u16 param_2,byte param_3)
{
  UI_TreeNode_Control_dtor_Internal_c5ac(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xD07C (vtable 0xD07C). Links to Resource 0x3E and
// sets base dialog ID from static string.

ushort __stdcall16far
UI_SubDialog_TypeD07C_ctor_init_ca16(void *this_ptr,ushort parent_hwnd)
{
  astruct_4 *uVar1;
  void *puVar3;
  undefined2 in_stack_00000008;
  
  UI_SubDialog_TypeB772_ctor_Simple_b082(this_ptr,CONCAT22(in_stack_00000008,0x1840));
  *(undefined4 *)((int)this_ptr + 0x94) = _PTR_DAT_1050_0000_1050_5f0c;
  *(undefined4 *)((int)this_ptr + 0x98) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x9c) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x9e) = 0x0;
  *_this_ptr = 0xd07c;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3e);
  *(undefined2 *)((int)this_ptr + 0x98) = (void *)puVar3;
  *(undefined2 *)((int)this_ptr + 0x9a) = (int)((ulong)puVar3 >> 0x10);
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_SubDialog_TypeD07C_dtor_Internal_ca74(astruct_503 *this_ptr,u16 param_2)
{
  void *unaff_CS;
  
  *(undefined2 *)&_this_ptr->pointer_1 = 0xd07c;
  *(undefined2 *)((int)&this_ptr->pointer_1 + 0x2) = 0x1040;
                // 0x1040:d07c start of vtable
                // 
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  PTR_DAT_1050_0000_1050_5f10 = NULL;
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Standard commit handler that performs a UI system context swap (Resource 0x2B) before
// closing the sub-dialog.

void __stdcall16far
UI_SubDialog_Base_On_Commit_Swap_Context_caa6(void *this_ptr,ushort arg2)
{
  void *pvVar1;
  
  pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  UI_System_Context_Swap_Logic((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10));
  UI_SubDialog_Close_and_Notify_b726(this_ptr,arg2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes a dialog commitment (likely for building/unit assignment). Shows
// confirmation message boxes and spawns specialized outcome sub-dialogs based on
// whether the action succeeded or failed.

void * __stdcall16far UI_SubDialog_TypeCACE_Commit_and_Spawn_Outcome(undefined4 param_1)
{
  int iVar1;
  short sVar2;
  void *pvVar3;
  int iVar4;
  undefined2 uVar5;
  char *unaff_SS;
  void *pvVar6;
  undefined4 local_20c;
  char local_208 [0x100];
  undefined1 local_108 [0x100];
  void *local_8;
  uint16_t local_6;
  undefined1 local_4 [0x2];
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  local_6 = GetDlgItemInt16(0x0,(uint16_t)local_4,(int16_t)unaff_SS,0x18e);
  local_8 = (void *)GetDlgItemInt16(0x0,(uint16_t)local_4,(int16_t)unaff_SS,0x191);
  if (local_6 == 0x0)
  {
    return local_8;
  }
  Build_Site_Object_Process_Selection_and_Notify
            ((int)*(undefined4 *)(iVar4 + 0x98),
             (int)((ulong)*(undefined4 *)(iVar4 + 0x98) >> 0x10),local_6,
             *(undefined4 *)(iVar4 + 0x94));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_208,0x3ff),
             (long)CONCAT22(0x57b,unaff_SS));
  iVar1 = (int)((ulong)_p_GlobalResourceManager >> 0x10);
  if (*(long *)((int)*(undefined4 *)(iVar4 + 0x94) + 0x36) == 0x0)
  {
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,iVar1,CONCAT22(local_108,0x3ff),
               (long)CONCAT22(0x7ed,unaff_SS));
    iVar1 = MessageBox16(0x34,local_208,unaff_SS,(ushort)local_108);
  }
  else
  {
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,iVar1,CONCAT22(local_108,0x3ff),
               (long)CONCAT22(0x7ec,unaff_SS));
    iVar1 = MessageBox16(0x34,local_208,unaff_SS,(ushort)local_108);
  }
  pvVar3 = (void *)(uint)(iVar1 == 0x6);
  local_20c = ZEXT24(pvVar3);
  if ((pvVar3 == NULL) && (*(int *)((int)*(undefined4 *)(iVar4 + 0x94) + 0x34) < 0x1))
  {
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_108,0x3ff),
               (long)CONCAT22(0x7ee,unaff_SS));
    sVar2 = MessageBox16(0x34,local_208,unaff_SS,(ushort)local_108);
    pvVar3 = (void *)(uint)(sVar2 == 0x6);
    local_20c = (ulong)(sVar2 == 0x6) << 0x10;
  }
  if ((int)local_20c == 0x0)
  {
    if (local_20c._2_2_ == 0x0)
    {
      return pvVar3;
    }
    _PTR_DAT_1050_0000_1050_5a68 = *(undefined4 *)(iVar4 + 0x94);
    iVar1 = 0x27;
  }
  else
  {
    _PTR_DAT_1050_0000_1050_5f16 = *(undefined4 *)(iVar4 + 0x94);
    iVar1 = 0x26;
  }
  pvVar6 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                     (_p_UISubDialogTable,*(uint16_t *)(iVar4 + 0x8),iVar1);
  return (void *)pvVar6;
}



// Triggers a virtual update (offset 0x10) on the dialog's linked object and then
// refreshes all UI labels.

void __stdcall16far
UI_SubDialog_Refresh_Object_and_Labels_cc66(astruct_502 *this_ptr,u16 param_2)
{
  void *puVar1;
  
  puVar1 = (void *)((int)*this_ptr->field148_0x98 + 0x10);
  (**(code **)puVar1)();
  UI_Trade_Request_Dialog_Full_Refresh_Logic_cf1c((astruct_499 *)this_ptr,param_2);
  return;
}



// Command handler for the trade request dialog. Manages list refreshes, report
// displays, and updates based on selection changes.

ulong __stdcall16far
UI_Trade_Request_Dialog_On_Command_cc8c
          (astruct_500 *param_1,u16 param_2,undefined2 param_3,undefined4 param_4)
{
  u16 reg_dx;
  ulong uVar1;
  
  if (param_4._2_2_ == 0xeb)
  {
    UI_Trade_Request_Dialog_Full_Refresh_Logic_cf1c((astruct_499 *)param_1,param_2);
  }
  else if (param_4._2_2_ == 0x1841)
  {
    UI_Show_Trade_Report_MessageBox_cce4(param_1,param_2,reg_dx);
  }
  else
  {
    if (param_4._2_2_ != 0x1842)
    {
      uVar1 = UI_SubDialog_Complex_Command_Handler_b54a
                        (param_1,CONCAT22(param_3,param_2),param_4);
      return uVar1;
    }
    if ((int)param_4 == 0x1)
    {
      UI_Trade_Request_Dialog_On_Selection_Change_ce76(param_1,param_2);
    }
  }
  return 0x1;
}



// Handles increment/decrement logic for a dialog item (ID 0x18E), effectively
// implementing a custom spin-control behavior and updating the displayed integer value.

undefined2 __stdcall16far
UI_SubDialog_Increment_Decrement_Property_18E_cdac
          (undefined4 param_1,undefined2 param_2,undefined2 param_3,int param_4)
{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  
  bVar1 = false;
  iVar2 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_4 == 0x0)
  {
    if (*(int *)(iVar2 + 0x9c) <= *(int *)(iVar2 + 0x9e)) goto LAB_1040_cdef;
    *(int *)(iVar2 + 0x9e) = *(int *)(iVar2 + 0x9e) + 0x1;
  }
  else
  {
    if (param_4 != 0x1) goto LAB_1040_cdef;
    if (*(int *)(iVar2 + 0x9e) < 0x1) goto LAB_1040_cdef;
    *(int *)(iVar2 + 0x9e) = *(int *)(iVar2 + 0x9e) + -0x1;
  }
  bVar1 = true;
LAB_1040_cdef:
  if (bVar1)
  {
    SetDlgItemInt(0x0,*(uint16_t *)(iVar2 + 0x9e),0x18e,*(HWND16 *)(iVar2 + 0x6));
  }
  return 0x0;
}



// Handles selection changes in the trade request list box. Resolves the site by name
// and updates quantity/limit labels.

void __stdcall16far
UI_Trade_Request_Dialog_On_Selection_Change_ce76(astruct_500 *this_ptr,u16 param_2)
{
  short unaff_SS;
  LRESULT pvVar1;
  long lVar2;
  u16 in_stack_00000006;
  char local_str_1 [0x100];
  void *pvStack_6;
  int iStack_4;
  
  pvVar1 = SendDlgItemMessage16(0x0,0x0,0x0,0x409,CONCAT22(this_ptr->field6_0x6,0x1842))
  ;
  pvStack_6 = (void *)pvVar1;
  iStack_4 = (int)pvStack_6 >> 0xf;
  if ((pvStack_6 != (void *)0xffff) || (false))
  {
    SendDlgItemMessage16
              ((HWND16)local_str_1,unaff_SS,(ushort)pvStack_6,0x40a,
               CONCAT22(this_ptr->field6_0x6,0x1842));
    lVar2 = Build_Site_List_Find_Item_by_Name
                      ((void *)(void *)this_ptr->field151_0x98,
                       (char *)((ulong)this_ptr->field151_0x98 >> 0x10));
    if (lVar2 != 0x0)
    {
      this_ptr->field152_0x9c = *(uint16_t *)((int)lVar2 + 0x8);
      this_ptr->field153_0x9e = 0x0;
      SetDlgItemInt(0x0,0x0,0x18e,this_ptr->field6_0x6);
      SetDlgItemInt(0x0,this_ptr->field152_0x9c,0x191,this_ptr->field6_0x6);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Comprehensive UI refresh for trade request dialogs. Syncs entity names, populates the
// site list box, and validates the 'OK' button state. Shows 'None' if no sites are
// available.

void __stdcall16far
UI_Trade_Request_Dialog_Full_Refresh_Logic_cf1c(astruct_499 *this_ptr,ushort param_2)
{
  HWND16 enable;
  uint32_t uVar4;
  astruct_3 *offset;
  u16 segment;
  short unaff_SS;
  void *pvVar1;
  LRESULT pvVar2;
  HWND16 hwnd;
  ushort uVar3;
  char local_str_1 [0x402];
  uint32_t uStack_10a;
  uint16_t uStack_108;
  char local_str_2 [0x100];
  void *puStack_6;
  
  puStack_6 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  Entity_Format_Full_Name_Label_Logic
            ((char *)puStack_6,(long)CONCAT22(unaff_SS,local_str_2));
  SendDlgItemMessage16
            ((HWND16)local_str_2,unaff_SS,0x0,0xc,CONCAT22(this_ptr->field6_0x6,0x1846))
  ;
  SendDlgItemMessage16(0x0,0x0,0x0,0xb,CONCAT22(this_ptr->field6_0x6,0x1842));
  SendDlgItemMessage16(0x0,0x0,0x0,0x405,CONCAT22(this_ptr->field6_0x6,0x1842));
  uVar3 = 0x1842;
  pvVar1 = (void *)Build_Site_Object_Get_or_Init_List_Item
                             (this_ptr->field148_0x98,this_ptr->field147_0x94);
  uVar4 = (uint32_t)((ulong)pvVar1 >> 0x10);
  uStack_10a = (uint32_t)pvVar1;
  uStack_108 = uVar4;
  UI_Dialog_Populate_Formatted_List_Box_ce12
            ((astruct_501 *)this_ptr,param_2,(void *)uStack_10a,uVar4,uVar3);
  pvVar2 = SendDlgItemMessage16(0x0,0x0,0x0,0x40c,CONCAT22(this_ptr->field6_0x6,0x1842))
  ;
  if (((int)((ulong)pvVar2 >> 0x10) != 0x0 && -0x1 < (long)pvVar2) ||
     ((-0x1 < (long)pvVar2 && ((void *)pvVar2 != NULL))))
  {
    enable = GetDlgItem16(0x1,this_ptr->field6_0x6);
    hwnd = 0x1;
  }
  else
  {
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),
               CONCAT22(local_str_1,0x3ff),CONCAT22(0x44a,unaff_SS));
    SendDlgItemMessage16
              ((HWND16)local_str_1,unaff_SS,0x0,0x401,
               CONCAT22(this_ptr->field6_0x6,0x1842));
    enable = GetDlgItem16(0x1,this_ptr->field6_0x6);
    hwnd = 0x0;
  }
  EnableWindow16(hwnd,enable);
  SendDlgItemMessage16(0x0,0x0,0x1,0xb,CONCAT22(this_ptr->field6_0x6,0x1842));
  return;
}



void * __stdcall16far
UI_SubDialog_TypeD07C_dtor_Scalar_Deleting_d056(void *param_1,u16 param_2,byte param_3)
{
  UI_SubDialog_TypeD07C_dtor_Internal_ca74(param_1,param_2);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xD8C4 (vtable 0xD8C4). Links to Resource 0x47 and
// instantiates a UI Vector Tracker object at offset 0x9C.

ushort __stdcall16far
UI_SubDialog_TypeD8C4_ctor_init_d0f8
          (astruct_498 *this_ptr,ushort parent_hwnd,ushort param_3)
{
  void *pvVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  undefined2 in_stack_0000fffa;
  astruct_2 *struct_ptr_1;
  
  UI_SubDialog_TypeB772_ctor_Simple_b082(this_ptr,CONCAT22(param_3,0x1845));
  *(undefined4 *)&this_ptr->field144_0x94 = 0x0;
  *(undefined4 *)((int)&this_ptr->field145_0x96 + 0x2) = _PTR_DAT_1050_0000_1050_5f16;
  (&this_ptr->field147_0x9c)[0x0] = 0x0;
  (&this_ptr->field147_0x9c)[0x1] = 0x0;
  *(undefined2 *)&(this_ptr + 0x1)->pointer_1 = 0x0;
  *(undefined2 *)&_this_ptr->pointer_1 = 0xd8c4;
  *(undefined2 *)((int)&this_ptr->pointer_1 + 0x2) = 0x1040;
                // 0x1040:d8c4
                // 9e  d8  40  10    
                // void *     UI_SubDialog_TypeD8C4_dtor_Scalar_Deleting_d89e
                // 
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x47);
  uVar2 = (undefined2)((ulong)lVar4 >> 0x10);
  this_ptr->field144_0x94 = (int)lVar4;
  *(undefined2 *)&this_ptr->field145_0x96 = uVar2;
  lVar4 = Build_Site_Get_Selected_Building_ID_Logic
                    (CONCAT22(uVar2,this_ptr->field144_0x94));
  uVar3 = (uint)((ulong)lVar4 >> 0x10);
  this_ptr->field147_0x9c = (uint)lVar4;
  this_ptr->field148_0x9e = uVar3;
  if (uVar3 == 0x0 && this_ptr->field147_0x9c == 0x0)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
    uVar3 |= (uint)pvVar1;
    if (uVar3 == 0x0)
    {
      (&this_ptr->field147_0x9c)[0x0] = 0x0;
      (&this_ptr->field147_0x9c)[0x1] = 0x0;
    }
    else
    {
      pvVar1 = UI_Vector_Tracker_Object_ctor(pvVar1);
      this_ptr->field147_0x9c = (uint)pvVar1;
      this_ptr->field148_0x9e = uVar3;
    }
  }
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_SubDialog_TypeD8C4_dtor_Internal_d1bc(astruct_497 *this_ptr,ushort param_2)
{
  int iVar1;
  u16 offset;
  u16 segment;
  void *unaff_CS;
  void *puVar1;
  
  *(undefined2 *)&_this_ptr->pointer_1 = 0xd8c4;
                // 0x1040:0xd8c4     
                // 9e  d8  40  10    
                // void *    UI_SubDialog_TypeD8C4_dtor_Scalar_Deleting_d89e
                // 
                // 
  *(undefined2 *)((int)&this_ptr->pointer_1 + 0x2) = 0x1040;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  puVar1 = (void *)this_ptr->field152_0x9c;
  iVar1 = *(int *)&(this_ptr + 0x1)->pointer_1;
  if (iVar1 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)*(undefined2 **)puVar1)(0x1038,puVar1,iVar1,0x1);
  }
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(this_ptr);
  return;
}



void __stdcall16far
UI_SubDialog_TypeD8C4_Refresh_Wrapper_d29c(void *this_ptr,u16 param_2)
{
  UI_SubDialog_TypeD8C4_Full_Refresh_Logic_d79c(this_ptr,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for dialog Type D8C4. Manages specialized control actions (Add/Remove
// links), building manager updates (0x203), and spawns new sub-dialog factory logic.

ulong __stdcall16far
UI_SubDialog_TypeD8C4_On_Command_d2ac
          (astruct_494 *param_1,u16 msg,u16 wparam,ushort param_4,ushort param_5,
          char *param_6)
{
  LRESULT pvVar1;
  u32 result;
  undefined2 in_stack_0000fff8;
  
                // IDC_ADD_LINK (0x1848)
  if (param_5 == IDC_ADD_LINK)
  {
    SendDlgItemMessage16(0x0,0x0,0x0,0x405,CONCAT22(param_1->win_handle,0x1847));
                // WARNING: Load size is inaccurate
    UI_Vector_Tracker_Replace_Object_at_Offset_4_Logic
              ((void *)param_1->p_LinkCollection_Tracker);
  }
  else if (param_5 < IDC_ADD_LINK + 0x1)
  {
                // IDC_FULL_REFRESH (0x00eb) (AX = ID - 0xeb)
    if (param_5 == IDC_FULL_REFRESH)
    {
      UI_SubDialog_TypeD8C4_Full_Refresh_Logic_d79c((astruct_492 *)param_1,msg);
    }
    else
    {
                // IDC_COLONY_STATUS_REPORT (0x1841) (AX = ID - 0xeb - 0x1756)
      if (param_5 != IDC_COLONY_STATUS_REPORT)
      {
LAB_1040_d3b3:
        result = UI_SubDialog_Complex_Command_Handler_b54a
                           (param_1,msg,wparam,param_4,param_5);
        return result;
      }
      UI_Show_Colony_Status_Report_MessageBox_d3d0((u32)CONCAT22(msg,param_1),param_6);
    }
  }
  else
  {
                // IDC_REMOVE_LINK (0x1849) (AX = ID - 0x1849)
    if (param_5 == IDC_REMOVE_LINK)
    {
      pvVar1 = SendDlgItemMessage16
                         (0x0,0x0,0x0,0x40c,CONCAT22(param_1->win_handle,0x1847));
      if ((pvVar1 != (LRESULT)0xffffffff) || (false))
      {
        SendDlgItemMessage16
                  (0x0,0x0,(int)pvVar1 - 0x1,0x403,CONCAT22(param_1->win_handle,0x1847))
        ;
                // WARNING: Load size is inaccurate
        Collection_Notify_Update_if_NotEmpty_Logic
                  ((void *)param_1->p_LinkCollection_Tracker,
                   (u16)((ulong)param_1->p_LinkCollection_Tracker >> 0x10));
      }
    }
    else
    {
                // IDC_BUILDING_MANAGER_UPDATE (0x184a) (AX = ID - 0x184a)
      if (param_5 == IDC_REMOVE_LINK + 0x1)
      {
        UI_SubDialog_TypeD8C4_Disable_Interaction_Buttons_d6be(param_1,msg);
        UI_Building_Manager_Set_Active_Object_Ptr
                  (*(long *)&param_1->p_ActiveObject_Context,(long)CONCAT22(msg,param_1)
                  );
        PostMessage16(0x0,0x0,0x203,(long)CONCAT22(in_stack_0000fff8,g_ParentHWND));
      }
      else
      {
                // IDC_DIALOG_FACTORY_SPAWN (0x184b) (AX = ID - 0x184b) (ID 0x27)
        if (param_5 != IDC_DIALOG_FACTORY_SPAWN) goto LAB_1040_d3b3;
        _PTR_DAT_1050_0000_1050_5a68 = *(undefined4 *)&param_1->p_FactoryDialogData_5a68
        ;
        UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                  (_p_UISubDialogTable,param_1->win_handle,0x27);
      }
    }
  }
  return 0x1;
}



// Enables a cluster of interaction buttons (IDs 1, 2, 0x1841, 0x1848-0x184B) in the
// D8C4 dialog and clears the active flag.

void __stdcall16far
UI_SubDialog_TypeD8C4_Enable_Interaction_Buttons_d60e(astruct_495 *this_ptr,u16 param_2)
{
  HWND16 HVar1;
  astruct_1 *offset;
  u16 segment;
  
  HVar1 = GetDlgItem16(0x1,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  HVar1 = GetDlgItem16(0x2,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  HVar1 = GetDlgItem16(0x1841,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  HVar1 = GetDlgItem16(0x1848,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  HVar1 = GetDlgItem16(0x1849,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  HVar1 = GetDlgItem16(0x184a,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  HVar1 = GetDlgItem16(0x184b,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  this_ptr->field159_0xa0 = 0x0;
  return;
}
