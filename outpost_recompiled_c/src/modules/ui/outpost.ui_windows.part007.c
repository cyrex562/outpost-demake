/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 7/54
 * Original lines (combined): 26714-30071
 * Boundaries: top-level declarations/definitions only
 */




u16 __stdcall16far
UI_Window_Update_Placement_from_VTable_1C_Logic(u16 param_1,u16 param_2,HWND16 param_3)
{
  undefined2 *puVar1;
  int32_t iVar2;
  u16 *puVar3;
  undefined2 reg_dx;
  undefined2 uVar4;
  undefined2 unaff_SS;
  u16 *puVar5;
  u16 local_26;
  u32 local_24;
  u32 local_20;
  u32 local_1c;
  u16 local_18;
  u16 local_16;
  u16 local_14;
  u16 local_12;
  u16 local_10;
  u16 local_e;
  u16 local_c;
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  local_18 = 0x16;
  local_16 = 0x0;
  local_14 = 0x0;
  local_12 = 0x0;
  local_10 = 0x0;
  local_e = 0x0;
  local_c = 0x0;
  local_a = 0x0;
  local_8 = 0x0;
  local_6 = 0x0;
  local_4 = 0x0;
  GetWindowPlacement16((u16 *)CONCAT22(unaff_SS,&local_18),param_3);
  if (local_a == 0xffff)
  {
    iVar2 = GetWindowLong16(0x0,param_3);
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xe0) + 0x1c);
    puVar5 = (u16 *)(*(code *)*puVar1)(0x1538,(undefined4 *)
                                              (undefined4 *)
                                              *(undefined4 *)(iVar2 + 0xe0),
                                       *(undefined2 *)(iVar2 + 0xe2));
    uVar4 = (undefined2)((ulong)puVar5 >> 0x10);
    puVar3 = (u16 *)puVar5;
    local_14 = 0x9;
    local_a = *puVar5;
    local_8 = puVar3[0x1];
    local_6 = puVar3[0x2] + *puVar5;
    local_4 = puVar3[0x1] + puVar3[0x3];
    SetWindowPlacement16((u16 *)CONCAT22(unaff_SS,&local_18),param_3);
  }
  return 0x0;
}



void __stdcall16far win16_EnumChildWindows_Wrapper(HWND16 parent_hwnd)
{
  void *WNDENUMPROC6_func;
  HWND16 in_stack_00000008;
  
  if (p_FreeBlockListHead == NULL)
  {
    WNDENUMPROC6_func =
         MakeProcInstance16((HANDLE16)PTR_DAT_1050_0000_1050_038c,
                            (void *)CONCAT22(in_stack_00000008,(void *)0x1010));
    EnumChildWindows16(NULL,WNDENUMPROC6_func,in_stack_00000008);
    FreeProcInstance16(WNDENUMPROC6_func);
  }
  return;
}



u16 __stdcall16far
UI_Icon_Window_Dispatch_Resource_45_Action(u16 param_1,u16 param_2,HWND16 param_3)
{
  undefined2 *puVar1;
  undefined2 reg_ax;
  BOOL16 BVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  HWND16 HVar5;
  HWND16 HVar6;
  undefined2 uVar7;
  u32 local_8;
  u16 local_4;
  
  uVar7 = 0x1050;
  HVar6 = param_3;
  BVar2 = IsWindow16(param_3);
  if (BVar2 != 0x0)
  {
    puVar3 = (undefined *)GetWindowWord16(-0x6,param_3);
    if (puVar3 == *(undefined **)&PTR_DAT_1050_0000_1050_038c)
    {
      HVar5 = param_3;
      BVar2 = IsIconic16(param_3);
      if (BVar2 != 0x0)
      {
        puVar4 = (undefined4 *)
                 Resource_Manager_Get_Resource_by_ID_Logic
                           (*(long *)(undefined **)&p_ResourceManager,0x45);
        puVar1 = (undefined2 *)((int)*puVar4 + 0x10);
        (*(code *)*puVar1)(0x1538,puVar4,0x1,param_3,HVar5,HVar6,uVar7);
      }
    }
  }
  return 0x1;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1010:0E98 during destruction.
// Invokes virtual destructor (index 0) for sub-object at offset 10.

void __stdcall16far UI_Event_List_Manager_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xe98;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Targeted Scan Finding: Far Pointer
// Performs state swap with global UI context variables in segment 1050:
// - DAT_1050_0e28
// - PTR_DAT_1050_0e30
// - PTR_DAT_1050_0ea8.

void __stdcall16far UI_System_Context_Swap_Logic(void *this,int mode)
{
  bool bVar1;
  int in_stack_00000008;
  
  bVar1 = false;
  if (in_stack_00000008 != 0x0)
  {
    if (*(int *)((int)this + 0x18) == 0x0)
    {
      *(u16 *)((int)this + 0x12) = u16_1050_0e28;
      *(undefined2 *)((int)this + 0x14) = PTR_DAT_1050_0000_1050_0e30;
      *(undefined2 *)((int)this + 0x16) = PTR_DAT_1050_0000_1050_0ea8;
      u16_1050_0e28 = 0x0;
      PTR_DAT_1050_0000_1050_0e30 = NULL;
      PTR_DAT_1050_0000_1050_0ea8 = NULL;
      *(undefined2 *)((int)this + 0x18) = 0x1;
      bVar1 = true;
      goto LAB_1010_0404;
    }
  }
  if (in_stack_00000008 == 0x0)
  {
    if (*(int *)((int)this + 0x18) != 0x0)
    {
      u16_1050_0e28 = *(u16 *)((int)this + 0x12);
      PTR_DAT_1050_0000_1050_0e30 = (undefined *)*(undefined2 *)((int)this + 0x14);
      PTR_DAT_1050_0000_1050_0ea8 = (undefined *)*(undefined2 *)((int)this + 0x16);
      *(undefined2 *)((int)this + 0x18) = 0x0;
      bVar1 = true;
    }
  }
LAB_1010_0404:
  if (bVar1)
  {
    UI_Container_Notify_Listeners_at_Offset_4_Logic(this,mode);
  }
  return;
}



// Targeted Scan Finding: Far Pointer
// Updates indexed system state flag in lookup table starting at 1010:0E28.
// Triggers UI notification on the provided context object.

void __stdcall16far UI_System_Set_State_Flag_and_Notify(void *this,int value,int index)
{
  int in_stack_0000000a;
  
  *(int *)((in_stack_0000000a + -0x1) * 0x8 + 0xe28) = index;
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,value);
  return;
}



// Targeted Scan Finding: Far Pointer
// Updates indexed system state flag in lookup table starting at 1010:0EA8.
// Triggers UI notification on the provided context object.

void __stdcall16far
UI_System_Set_State_Flag_Category2_and_Notify(void *this,int value,int index)
{
  int in_stack_0000000a;
  
  *(int *)((in_stack_0000000a + -0x1) * 0x8 + 0xea8) = index;
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,value);
  return;
}



// Targeted Scan Finding: Far Pointer
// Resets a series of global state variables in segment 1050 (offsets 0E28 through
// 0E70).
// Returns far pointer into a flag entry table starting at 1010:0E22.

void * __stdcall16far UI_System_Reset_Flags_and_Get_Entry_Ptr(int index)
{
  int in_stack_00000008;
  
  if (PTR_DAT_1050_0000_1050_4fe8 != NULL)
  {
    u16_1050_0e28 = 0x0;
    PTR_DAT_1050_0000_1050_0e30 = NULL;
    PTR_DAT_1050_0000_1050_0e38 = NULL;
    PTR_DAT_1050_0000_1050_0e40 = NULL;
    PTR_DAT_1050_0000_1050_0e48 = NULL;
    u16_1050_0e58 = 0x0;
    u16_1050_0e60 = 0x0;
    PTR_DAT_1050_0000_1050_0e70 = NULL;
  }
  return (void *)((in_stack_00000008 + -0x1) * 0x8 + 0xe22);
}



// Targeted Scan Finding: Far Pointer
// Returns far pointer into a flag entry table starting at 1010:0E72.

void * __stdcall16far UI_System_Get_Flag_Entry_Category2_Ptr(int index)
{
  int in_stack_00000008;
  
  return (void *)((in_stack_00000008 + -0x1) * 0x8 + 0xe72);
}



// Targeted Scan Finding: Far Pointer
// Returns far pointer into a flag entry table starting at 1010:0E8A.

void * __stdcall16far UI_System_Get_Flag_Entry_Category3_Ptr(int index)
{
  int in_stack_00000008;
  
  return (void *)((in_stack_00000008 + -0x1) * 0x8 + 0xe8a);
}



// Scalar deleting destructor for the UI_Event_List_Manager class.

void * __stdcall16far UI_Event_List_Manager_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Event_List_Manager_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Destructor for the report list manager. Cleans up internal structures and calls the
// base class destructor.

void __stdcall16far UI_Report_List_Manager_dtor_191A_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_648_bmp_1050_1919 + 0x1;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  UI_Report_List_Internal_Cleanup_Logic(this);
  UI_Window_Base_dtor_36DA_Logic(this);
  return;
}



// Refreshes a report list by optionally destroying old content and rebuilding the
// hierarchical grouping of items. It triggers a re-sort and then calls the internal
// grouping routine.

void __stdcall16far UI_Report_List_Refresh_and_Rebuild_Groups_Logic(void *this)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int in_stack_00000006;
  
  if (*(long *)((int)this + 0x56) != 0x0)
  {
    puVar1 = (undefined2 *)((int)*_this + 0x34);
    (*(code *)*puVar1)();
  }
  puVar1 = (undefined2 *)((int)*_this + 0x28);
  uVar4 = (*(code *)*puVar1)();
  uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
  if ((int)uVar4 != 0x0)
  {
    UI_Report_List_Sort_Items_by_Column_Logic(this,in_stack_00000006);
    pvVar2 = UI_Report_List_Internal_Grouping_Engine_Logic(this);
    *(undefined2 *)((int)this + 0x56) = pvVar2;
    *(undefined2 *)((int)this + 0x58) = uVar3;
  }
  return;
}



// Internal cleanup routine for report-style UI managers. It destroys nested sub-objects
// and deallocates internal tracking arrays.

void __stdcall16far UI_Report_List_Internal_Cleanup_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  UI_Window_Manager_Cleanup_SubWindows_Logic(this);
  if (*(int *)((int)this + 0x58) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x56) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x56);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x56) = 0x0;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x60));
  memset_far((void *)(void *)*(undefined4 *)((int)this + 0x64),
             (int)((ulong)*(undefined4 *)((int)this + 0x64) >> 0x10),0x0);
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x64));
  *(undefined4 *)((int)this + 0x60) = 0x0;
  *(undefined4 *)((int)this + 0x64) = 0x0;
  return;
}



// Scalar deleting destructor for the report list manager with vtable 0x191A.

void * __stdcall16far UI_Report_List_Manager_scalar_dtor_191A(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Report_List_Manager_dtor_191A_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



void * __stdcall16far
UI_Report_List_Manager_dtor_Scalar_Deleting_1b04(void *param_1,u16 param_2,byte param_3)
{
  UI_Report_List_Manager_dtor_191A_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_Report_List_Manager_dtor_Scalar_Deleting_1cde(void *param_1,u16 param_2,byte param_3)
{
  UI_Report_List_Manager_dtor_191A_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Searches for and removes an item from the container list at offset 4 by its 32-bit
// ID. Invokes a virtual removal method on the list object for the matching item and
// destroys the list if it becomes empty.

int __stdcall16far UI_Container_Remove_Item_at_Offset_4_Logic(void *this,long item_id)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  long lVar5;
  undefined2 in_stack_00000006;
  undefined1 local_c [0x4];
  undefined4 uStack_8;
  int iStack_4;
  
  if (*(long *)((int)this + 0x4) == 0x0)
  {
    return 0x0;
  }
  iStack_4 = 0x0;
  init_long_pair(local_c,*(long *)((int)this + 0x4));
  while( true )
  {
    lVar5 = get_next_list_item(local_c);
    iVar4 = (int)((ulong)lVar5 >> 0x10);
    iVar2 = (int)lVar5;
    if (iVar4 == 0x0 && iVar2 == 0x0) break;
    if (*(long *)(iVar2 + 0x4) == item_id)
    {
      iStack_4 = 0x1;
      puVar3 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0xc);
      (*(code *)*puVar3)(0x1008,*(undefined4 *)((int)this + 0x4),iVar2);
      uStack_8 = 0x0;
    }
  }
  if (*(int *)((int)*(undefined4 *)((int)this + 0x4) + 0x8) == 0x0)
  {
    puVar1 = (undefined4 *)*(int *)((int)this + 0x4);
    iVar2 = *(int *)((int)this + 0x6);
    if (iVar2 != 0x0 || puVar1 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar1)
                (0x1008,puVar1,iVar2,0x1,puVar1,iVar2,puVar1,iVar2);
    }
    *(undefined4 *)((int)this + 0x4) = 0x0;
  }
  return iStack_4;
}



// Broadcasts a notification (with type `param_2`) to all listeners registered in the
// container list at offset 4. Only listeners with a matching filter type (or type 0)
// are notified via a virtual method call.

void __stdcall16far
UI_Container_Notify_Listeners_at_Offset_4_Logic(void *this,int notify_type)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  int in_stack_00000008;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0x4));
  while( true )
  {
    lVar4 = get_next_list_item(local_a);
    uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
    iVar2 = (int)lVar4;
    if (lVar4 == 0x0) break;
    if (((*(int *)(iVar2 + 0x8) == 0x0) || (in_stack_00000008 == 0x0)) ||
       (*(int *)(iVar2 + 0x8) == in_stack_00000008))
    {
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x4) + 0x4);
      (*(code *)*puVar1)(0x1008,(int)*(undefined4 *)(iVar2 + 0x4),
                         (int)((ulong)*(undefined4 *)(iVar2 + 0x4) >> 0x10),
                         in_stack_00000008);
    }
  }
  return;
}



void __cdecl16far UI_Coordinate_Table_Batch_Initialize_286c(void)
{
  pack_3words_alt(NULL,0x1048,0x0,0x5);
  pack_3words_alt((void *)0x65a6,0x1050,0x0,0x9b);
  pack_3words_alt((void *)0x65ac,0x1050,0x0,0xf5);
  pack_3words_alt((void *)0x65b2,0x1050,0x0,0x114);
  pack_3words_alt((void *)0x65b8,0x1050,0x0,0x135);
  pack_3words_alt((void *)0x65be,0x1050,0x0,0xf5);
  pack_3words_alt((void *)0x65c4,0x1050,0x0,0x117);
  return;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1010:29C2 during destruction.
// Invokes virtual destructor (index 0) for sub-object at offset 0x1C.

void __stdcall16far UI_Option_Selection_Dialog_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_add16_wav_1050_2bdc + 0x8;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  if (*(long *)((int)this + 0x1c) != 0x0)
  {
    if (*(int *)((int)this + 0x1e) != 0x0 ||
        (undefined4 *)*(int *)((int)this + 0x1c) != NULL)
    {
      puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x1c);
      (*(code *)*puVar1)();
    }
    *(undefined4 *)((int)this + 0x1c) = 0x0;
    free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0x0;
  }
  Build_Site_Object_dtor_Internal(_this);
  return;
}


/*
Unable to decompile 'UI_Planet_View_Notify_Update_Logic_maybe'
Cause: 
Low-level Error: Cannot marshal address space: NO ADDRESS
*/


void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper(void *ptr)
{
  void *in_stack_00000008;
  
  copy_struct_6bytes((void *)in_stack_00000008,
                     (void *)((ulong)in_stack_00000008 >> 0x10));
  return;
}



void * __stdcall16far UI_Element_Get_FarPtr_at_Offset_1C_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  return (void *)*(undefined2 *)((int)this + 0x1c);
}



void * __stdcall16far
UI_Element_Get_Nested_FarPtr_from_Offset_28_Logic(void *this,int index)
{
  int in_stack_00000008;
  
  return (void *)*(undefined2 *)
                  (in_stack_00000008 * 0x4 + (int)*(undefined4 *)((int)this + 0x28) +
                  -0x158);
}



void * __stdcall16far
UI_Option_Selection_Dialog_dtor_Scalar_Deleting_2bbe
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Option_Selection_Dialog_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Subclass vtable to 1010:2CC2 (base 1010:2014).

void * __stdcall16far UI_Subclass_2CC2_ctor(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *(char **)CONCAT22(segment,this) = (char *)s_add39_wav_1050_2cc2;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets UI_Window_Base vtable to 1010:36DA during destruction.
// Invokes virtual destructor (index 0) for sub-window manager at offset 0x56.

void __stdcall16far UI_Window_Base_dtor_36DA_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0x36da;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  if (*(int *)((int)this + 0x58) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x56) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x56);
    (*(code *)*puVar1)();
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x5c));
  Base_Object_dtor_2014_Logic(this);
  return;
}



void * __stdcall16far
UI_Element_Get_Indexed_FarPtr_from_Offset_5C_Logic(void *this,int index)
{
  int in_stack_00000008;
  
  if (*(long *)((int)this + 0x5c) != 0x0)
  {
    return (void *)*(undefined2 *)
                    ((int)*(undefined4 *)((int)this + 0x5c) + in_stack_00000008 * 0x4);
  }
  return NULL;
}



// Setter for a far pointer in an indexed array stored at offset 0x5C. Inverse of
// `UI_Element_Get_Indexed_FarPtr_from_Offset_5C_Logic`.

void __stdcall16far
UI_Element_Set_Indexed_FarPtr_at_Offset_5C_Logic(void *this,int low,int high,int index)
{
  int iVar1;
  undefined2 uVar2;
  int in_stack_0000000c;
  
  if (*(long *)((int)this + 0x5c) != 0x0)
  {
    uVar2 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x5c) >> 0x10);
    iVar1 = (int)*(undefined4 *)((int)this + 0x5c);
    *(int *)(iVar1 + in_stack_0000000c * 0x4) = high;
    *(int *)(iVar1 + in_stack_0000000c * 0x4 + 0x2) = index;
  }
  return;
}



// Targeted Scan Finding: Vtable
// Performs multiple indirect calls through [this] vtable:
// - Offset 0x20 (Check rebuild)
// - Offset 0x14 (Re-sort)
// - Offset 0x18 (Build path).
// Manages UI component update cycles and notifications.

long __stdcall16far UI_Component_Process_Update_Cycle_Logic(void *this)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined2 extraout_DX;
  undefined2 uVar5;
  void *in_stack_00000006;
  
  if (*(long *)((int)this + 0x52) != 0x0)
  {
    return CONCAT22(*(undefined2 *)((int)this + 0x54),*(undefined2 *)((int)this + 0x52))
    ;
  }
  *(undefined2 *)((int)this + 0x28) = 0x0;
  uVar2 = *_this;
  puVar1 = (undefined2 *)((int)uVar2 + 0x20);
  iVar3 = (*(code *)*puVar1)();
  if (iVar3 != 0x0)
  {
    puVar1 = (undefined2 *)((int)uVar2 + 0x14);
    (*(code *)*puVar1)();
    uVar5 = extraout_DX;
    pvVar4 = UI_Element_Get_Indexed_FarPtr_from_Offset_5C_Logic
                       (this,(int)in_stack_00000006);
    UI_Component_Build_Hierarchy_Path_Elements_Logic(this,(long)CONCAT22(uVar5,pvVar4));
  }
  UI_Component_Rebuild_SubItems_Internal_Logic(this,in_stack_00000006);
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,(int)in_stack_00000006);
  if (*(long *)((int)this + 0x52) == 0x0)
  {
    return 0x0;
  }
  puVar1 = (undefined2 *)*(undefined4 *)((int)this + 0x52);
  return CONCAT22(((undefined2 *)puVar1)[0x1],*puVar1);
}



// Cleans up window resources for a UI component. It iterates through primary (offset
// 0x2A) and secondary (offset 0x52) sub-window arrays, calling `DestroyWindow16` on
// every active HWND entry.

void __stdcall16far UI_Window_Manager_Cleanup_SubWindows_Logic(void *this)
{
  undefined4 uVar1;
  undefined2 in_stack_00000006;
  int iStack_4;
  
  *(undefined2 *)((int)this + 0x28) = 0x0;
  iStack_4 = 0x0;
  while( true )
  {
    if (*(int *)((int)this + 0x16) <= iStack_4) break;
    uVar1 = *(undefined4 *)((int)this + iStack_4 * 0x4 + 0x2a);
    DestroyWindow16(*(HWND16 *)((int)uVar1 + 0x18));
    iStack_4 += 0x1;
  }
  *(undefined2 *)((int)this + 0x16) = 0x0;
  if (*(int *)((int)this + 0x54) != 0x0 || *(int *)((int)this + 0x52) != 0x0)
  {
    iStack_4 = 0x0;
    do
    {
      if (*(long *)((int)*(undefined4 *)((int)this + 0x52) + iStack_4 * 0x4) != 0x0)
      {
        uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)this + 0x52) + iStack_4 * 0x4)
        ;
        DestroyWindow16(*(HWND16 *)((int)uVar1 + 0x18));
        *(undefined4 *)((int)*(undefined4 *)((int)this + 0x52) + iStack_4 * 0x4) = 0x0;
      }
      iStack_4 += 0x1;
    } while (iStack_4 < 0xa);
    free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x52));
    *(undefined4 *)((int)this + 0x52) = 0x0;
  }
  return;
}



// Adds a new sub-window to the tracked collection (offset 0x2A). It handles window
// positioning (FUN_1040_93AA), duplicate detection, and optional cleanup of old
// windows. Broadcasts notifications (types 8, 9, 10) to signal state changes.

void __stdcall16far
UI_Window_Manager_Add_and_Focus_SubWindow_Logic(void *param_1,int param_2,void *param_3)
{
  undefined4 uVar1;
  bool bVar2;
  ushort uVar3;
  void *this;
  int iVar4;
  int iVar5;
  void *src_obj;
  undefined2 uVar6;
  void *this_ptr;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  this_ptr = (void *)param_3;
  iVar4 = (int)((ulong)param_3 >> 0x10);
  uVar3 = UI_TreeNode_Get_Linked_Entity_ID_c60e(this_ptr);
  src_obj = (void *)((ulong)param_1 >> 0x10);
  this = (void *)param_1;
  *(ushort *)((int)this + 0x12) = uVar3;
  *(undefined2 *)((int)this + 0x14) = 0x0;
  iStack_6 = 0x0;
  bVar2 = false;
  *(undefined2 *)((int)this + 0x28) = 0x0;
  iStack_8 = 0x0;
  do
  {
    if (*(int *)((int)this + 0x16) <= iStack_8)
    {
LAB_1010_30ad:
      iStack_8 = iStack_6;
      if (bVar2)
      {
        while (iStack_8 += 0x1, iStack_8 < *(int *)((int)this + 0x16))
        {
          uVar1 = *(undefined4 *)((int)this + iStack_8 * 0x4 + 0x2a);
          DestroyWindow16(*(HWND16 *)((int)uVar1 + 0x18));
          *(undefined4 *)((int)this + iStack_8 * 0x4 + 0x2a) = 0x0;
        }
        *(int *)((int)this + 0x16) = iStack_6 + 0x1;
        UI_Container_Notify_Listeners_at_Offset_4_Logic(this,(int)src_obj);
      }
      else
      {
        iVar5 = *(int *)((int)this + 0x16) * 0x4;
        *(undefined2 *)((int)this + iVar5 + 0x2a) = this_ptr;
        *(int *)((int)this + iVar5 + 0x2c) = iVar4;
        iStack_a = 0xa;
        *(int *)((int)this + 0x16) = *(int *)((int)this + 0x16) + 0x1;
        if (0x1 < *(int *)((int)this + 0x16))
        {
          uVar1 = *(undefined4 *)((int)this + *(int *)((int)this + 0x16) * 0x4 + 0x22);
          iVar5 = (int)uVar1;
          uVar6 = (undefined2)((ulong)uVar1 >> 0x10);
          iStack_a = *(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x24) + 0x8;
        }
        UI_Window_Move_and_Update_93aa(this_ptr,iVar4,iStack_a);
      }
      if (!bVar2)
      {
        UI_Container_Notify_Listeners_at_Offset_4_Logic(this,(int)src_obj);
      }
      if (param_2 == 0x0)
      {
        if (*(long *)((int)this + 0x52) != 0x0)
        {
          iStack_8 = 0x0;
          do
          {
            uVar6 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x52) >> 0x10);
            iVar4 = (int)*(undefined4 *)((int)this + 0x52);
            if ((*(long *)(iVar4 + iStack_8 * 0x4) != 0x0) &&
               ((void *)*(long *)(iVar4 + iStack_8 * 0x4) != param_3))
            {
              uVar1 = *(undefined4 *)
                       ((int)*(undefined4 *)((int)this + 0x52) + iStack_8 * 0x4);
              DestroyWindow16(*(HWND16 *)((int)uVar1 + 0x18));
            }
            *(undefined4 *)((int)*(undefined4 *)((int)this + 0x52) + iStack_8 * 0x4) =
                 0x0;
            iStack_8 += 0x1;
          } while (iStack_8 < 0xa);
        }
        UI_Component_Rebuild_SubItems_from_Offset_42_Wrapper(this,src_obj);
        UI_Container_Notify_Listeners_at_Offset_4_Logic(this,(int)src_obj);
      }
      return;
    }
    if ((void *)*(long *)((int)this + iStack_8 * 0x4 + 0x2a) == param_3)
    {
      bVar2 = true;
      iStack_6 = iStack_8;
      goto LAB_1010_30ad;
    }
    iStack_8 += 0x1;
  } while( true );
}
