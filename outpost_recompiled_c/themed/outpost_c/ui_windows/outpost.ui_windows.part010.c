/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 10/54
 * Original lines (combined): 35236-44188
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Broadcasts message 0xEB only to sub-windows associated with specific entity types.
// Filters using search_array_for_value and global type map at 1050:06E0.

void __stdcall16far UI_Window_Broadcast_Msg_EB_by_Type_Logic(void *this,int type_id)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  void *pvVar5;
  int in_stack_00000008;
  undefined2 in_stack_0000ffe4;
  undefined1 local_a [0x8];
  
  if ((*(int *)((int)this + 0x1e) != 0x0 || *(int *)((int)this + 0x1c) != 0x0) &&
     (in_stack_00000008 != 0x0))
  {
    init_long_pair(local_a,*(long *)((int)this + 0x1c));
    while( true )
    {
      lVar4 = get_next_list_item(local_a);
      uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
      iVar1 = (int)lVar4;
      if (lVar4 == 0x0) break;
      if (*(long *)(iVar1 + 0x4) != 0x0)
      {
        pvVar5 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8
                           ((void *)*(undefined4 *)(iVar1 + 0x4));
        iVar2 = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),
                           *(int *)((int)(void *)pvVar5 + 0xc));
        if (iVar2 != 0x0)
        {
          SendMessage16(0x0,0x0,0xeb,
                        CONCAT22(in_stack_0000ffe4,
                                 *(undefined2 *)
                                  ((int)*(undefined4 *)(iVar1 + 0x8) + 0x6)));
        }
      }
    }
  }
  return;
}



int __stdcall16far UI_Component_Unpack_3Word_at_Offset_C_Logic(void *obj)
{
  int *unaff_SS;
  int in_stack_00000008;
  undefined2 in_stack_0000000a;
  undefined4 local_e;
  undefined2 uStack_a;
  int local_8 [0x3];
  
  local_e = *(undefined4 *)(in_stack_00000008 + 0xc);
  uStack_a = *(undefined2 *)(in_stack_00000008 + 0x10);
  unpack_3word_struct(&local_e,unaff_SS,local_8,unaff_SS);
  return local_8[0x0];
}



void __stdcall16far UI_Component_Subclass_dtor_8EE2(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x8ee2;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  Base_Object_dtor_2014_Logic(this);
  return;
}



void * __stdcall16far UI_Component_Subclass_scalar_dtor_8EE2(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Component_Subclass_dtor_8EE2(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Destructor for the UI vector or coordinate tracking object. Resets the vtable to the
// base object state.

void __stdcall16far UI_Vector_Tracker_Object_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0x9254;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  if (*(int *)((int)this + 0x6) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x4);
    (*(code *)*puVar1)();
  }
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Constructs a new UI_Vector_Tracker_Object by iterating over a source collection using
// virtual methods (indexes 4, 10) and adding non-zero items via index 0xC.

void * __stdcall16far Collection_Build_Vector_Tracker_Logic(void *this,u16 param_2)
{
  undefined2 *puVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  ulong uStack_e;
  
  uVar6 = (undefined2)*(undefined4 *)((int)this + 0x4);
  uVar7 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x4) >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x10);
  uVar4 = (*(code *)*puVar1)();
  uVar3 = (uint)(uVar4 >> 0x10);
  pvVar2 = allocate_memory(CONCAT22(uVar6,0xc));
  uVar3 |= (uint)pvVar2;
  if (uVar3 == 0x0)
  {
    pvVar2 = NULL;
    uVar3 = 0x0;
  }
  else
  {
    pvVar2 = UI_Vector_Tracker_Object_ctor(pvVar2);
  }
  for (uStack_e = 0x0; uStack_e < uVar4; uStack_e += 0x1)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x4);
    lVar5 = (*(code *)*puVar1)(0x1000,*(undefined4 *)((int)this + 0x4),(int)uStack_e,
                               (int)(uStack_e >> 0x10),uVar6,uVar7);
    if (lVar5 != 0x0)
    {
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)pvVar2 + 0x4) + 0xc);
      (*(code *)*puVar1)(0x1000,*(undefined4 *)((int)pvVar2 + 0x4),lVar5);
    }
  }
  return pvVar2;
}



// Replaces tracking sub-object at offset 4 by invoking its virtual destructor and
// constructing a new coordinate-related structure (1010:1CD8) in its place.

void __stdcall16far UI_Vector_Tracker_Replace_Object_at_Offset_4_Logic(void *this)
{
  undefined2 *puVar1;
  void *pvVar2;
  int extraout_DX;
  int iVar3;
  void *pvVar4;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000fff6;
  
  iVar3 = *(int *)((int)this + 0x6);
  if (iVar3 != 0x0 || (undefined4 *)*(int *)((int)this + 0x4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x4);
    (*(code *)*puVar1)();
    iVar3 = extraout_DX;
  }
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x18));
  if (iVar3 == 0x0 && pvVar2 == NULL)
  {
    pvVar4 = NULL;
  }
  else
  {
    pvVar4 = UI_Production_Item_Base_ctor_init_1cd8
                       ((void *)CONCAT22(iVar3,pvVar2),(void *)0x5,(void *)0x5);
  }
  *(undefined2 *)((int)this + 0x4) = (void *)pvVar4;
  *(undefined2 *)((int)this + 0x6) = (int)((ulong)pvVar4 >> 0x10);
  return;
}



// Scalar deleting destructor for the coordinate tracking object.

void * __stdcall16far UI_Vector_Tracker_Object_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Vector_Tracker_Object_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Constructor for UI_Window_Subclass_9566. Initializes vtable to 1010:9566. Allocates a
// 0x20C byte buffer at offset 0x5C. Calls base constructor 1010:36DA.

void * __stdcall16far UI_Window_Subclass_ctor_9566(void *this,int segment,int id)
{
  void *pvVar1;
  int in_DX;
  undefined2 unaff_BP;
  
  UI_Window_Base_ctor_init_36DA_Logic(this,segment,id);
  *(undefined2 *)CONCAT22(segment,this) = 0x9566;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  pvVar1 = allocate_memory(CONCAT22(unaff_BP,0x20c));
  *(undefined2 *)((int)this + 0x5c) = pvVar1;
  *(int *)((int)this + 0x5e) = in_DX;
  memset_far((void *)*(undefined2 *)((int)this + 0x5c),in_DX,0x0);
  return this;
}



// Destructor for the 0x9566 window subclass. Calls the base window destructor.

void __stdcall16far UI_Window_Subclass_dtor_9566(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x9566;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  UI_Window_Base_dtor_36DA_Logic(this);
  return;
}



// Lazy initialization for offset 0x56 using temporary Collection_Object_Subclass_958E.
// Triggers recursive tree building via 1008:304E.

void __stdcall16far UI_Element_Lazy_Init_Offset_56_Subclass958E(void *this)
{
  void *pvVar1;
  undefined2 in_DX;
  int unaff_SS;
  undefined2 in_stack_00000006;
  undefined1 local_1c [0x1a];
  
  if (*(long *)((int)this + 0x56) == 0x0)
  {
    Collection_Object_Subclass_ctor_958E(local_1c);
    pvVar1 = UI_Tree_Builder_Recursive_Logic(local_1c,unaff_SS,0x0,NULL);
    *(undefined2 *)((int)this + 0x56) = pvVar1;
    *(undefined2 *)((int)this + 0x58) = in_DX;
    Collection_Object_Subclass_dtor_958E(local_1c);
  }
  return;
}



void * __stdcall16far
UI_Window_Subclass_9566_dtor_Scalar_Deleting_9540
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Window_Subclass_dtor_9566(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for UI_Object_Subclass_A1C8. Initializes vtable to 1010:A1C8. Sets
// initial count at offset 0x1C to 10 and clears multiple pointer/status fields.

void * __stdcall16far UI_Object_Subclass_ctor_A1C8(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined2 *)((int)this + 0x16) = 0x0;
  *(undefined2 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)((int)this + 0x1a) = 0x0;
  *(undefined2 *)((int)this + 0x1c) = 0xa;
  *(undefined2 *)((int)this + 0x1e) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xa1c8;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



// Destructor for UI_Object_Subclass_A1C8. Destroys three nested sub-objects at offsets
// 10, 14, and 18 via virtual destructors before calling base.

void __stdcall16far UI_Object_Subclass_dtor_A1C8(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xa1c8;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  if (*(int *)((int)this + 0x10) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar1)();
  }
  if (*(int *)((int)this + 0x14) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x12) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x12);
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Destroys the sub-object pointer stored at offset 0x12 and clears the field.

void __stdcall16far UI_Object_Destroy_SubObject_at_Offset_12_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x14) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x12) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x12);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x12) = 0x0;
  return;
}



// Subtracts an input value from the 16-bit field at offset 0x1E, ensuring it does not
// go below zero.

void __stdcall16far UI_Object_Decrement_Value_at_Offset_1E_Logic(void *this,int amount)
{
  int *piVar1;
  int in_stack_00000008;
  
  piVar1 = (int *)((int)this + 0x1e);
  *piVar1 = *piVar1 - in_stack_00000008;
  if (*piVar1 < 0x0)
  {
    *(undefined2 *)((int)this + 0x1e) = 0x0;
  }
  return;
}



int __stdcall16far UI_Object_Get_Value_at_Offset_1E_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(int *)((int)this + 0x1e);
}



// Initializes the state flag at offset 0x1A and populates the quantity at 0x1E based on
// a scaled input value.

void __stdcall16far UI_Object_Init_State_at_Offset_1A_Logic(void *this)
{
  int in_AX;
  int in_stack_00000006;
  
  *(undefined2 *)((int)this + 0x1a) = 0x1;
  UI_Object_Process_Quantity_Reduction_and_Migration_Logic(this);
  UI_Object_Process_Item_Action_on_Collection_10_Wrapper(this,in_stack_00000006);
  *(int *)((int)this + 0x1e) = in_AX * 0x32;
  return;
}



// Searches for an item by type in collection 0xE, decrements its count, and removes it
// from the collection if the count hits zero.

void __stdcall16far
UI_Object_Decrement_Item_Count_in_Collection_E_Logic_maybe(void *this,int item_type)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  int in_stack_00000008;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xe));
  do
  {
    lVar5 = get_next_list_item(local_a);
    uVar4 = (undefined2)((ulong)lVar5 >> 0x10);
    iVar2 = (int)lVar5;
    if (lVar5 == 0x0)
    {
      return;
    }
  } while (*(int *)(iVar2 + 0x4) != in_stack_00000008);
  iVar3 = *(int *)(iVar2 + 0x6) + -0x1;
  *(int *)(iVar2 + 0x6) = iVar3;
  if ((iVar3 < 0x1) &&
     (puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe) + 0xc),
     (*(code *)*puVar1)(0x1008,*(undefined4 *)((int)this + 0xe),iVar2,uVar4),
     *(int *)((int)*(undefined4 *)((int)this + 0xe) + 0x8) == 0x0))
  {
    *(undefined2 *)((int)this + 0x16) = 0x1;
  }
  return;
}



void __stdcall16far
UI_Object_Process_Item_Action_on_Collection_E_Wrapper(void *this,int item_type)
{
  int in_stack_00000008;
  
  Collection_Find_Value_by_Type_Logic
            ((int)this,item_type,*(long *)((int)this + 0xe),in_stack_00000008);
  return;
}



void __stdcall16far
UI_Object_Process_Item_Action_on_Collection_10_Wrapper(void *this,int item_type)
{
  int in_stack_00000008;
  
  Collection_Find_Value_by_Type_Logic
            ((int)this,item_type,*(long *)((int)this + 0xa),in_stack_00000008);
  return;
}



void * __stdcall16far UI_Object_Subclass_scalar_dtor_A1C8(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Object_Subclass_dtor_A1C8(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Handles specific UI events (1 or 5). For event 1, it clears a state pointer at 0x12E
// and notifies listeners. For event 5, it only notifies.

void __stdcall16far UI_Object_On_Event_Notify_and_Clear_Logic(long obj_ref,int event_id)
{
  int notify_type;
  
  notify_type = (int)((ulong)obj_ref >> 0x10);
  if (event_id == 0x1)
  {
    *(undefined4 *)((int)obj_ref + 0x12e) = 0x0;
  }
  else if (event_id != 0x5)
  {
    return;
  }
  UI_Container_Notify_Listeners_at_Offset_4_Logic
            ((void *)((int)obj_ref + -0xa),notify_type);
  return;
}



// WARNING: Unable to use type for symbol uVar1
// Helper for specialized dialog creation. It validates entity magic types (specifically
// checking for 0x8000002) before proceeding with allocation.

void * __stdcall16far
UI_Specialized_Dialog_Create_Helper(undefined2 param_1,undefined4 param_2,long param_3)
{
  void *pvVar1;
  undefined4 uVar1;
  
  if ((param_3 != 0x0) &&
     (uVar1 = *(undefined4 *)((int)param_3 + 0x2e),
     *(long *)((int)uVar1 + 0x200) == 0x8000002))
  {
    return NULL;
  }
  pvVar1 = UI_Entity_Summary_Object_ctor_init(param_1,param_2,param_3);
  return pvVar1;
}



// Populates a UI list with a series of status or error messages. It initializes a
// temporary buffer and copies it into the target grid slots.

void __stdcall16far
UI_Report_List_Populate_Status_Messages_Logic
          (undefined2 param_1,undefined2 param_2,uint param_3,undefined4 param_4,
          uint *param_5)
{
  undefined4 *puVar1;
  uint16_t uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  uint uStack_5a;
  undefined *local_54;
  undefined4 local_52 [0x14];
  
  local_54 = PTR_s_NewFailedMsg_1050_393f;
  puVar6 = local_52;
  for (iVar4 = 0x13; iVar4 != 0x0; iVar4 += -0x1)
  {
    puVar1 = puVar6;
    puVar6 = puVar6 + 0x1;
    *puVar1 = 0x0;
  }
  *(undefined2 *)puVar6 = 0x0;
  *(undefined1 *)(undefined2 *)((int)puVar6 + 0x2) = 0x0;
  uStack_5a = param_3;
  while( true )
  {
    uVar7 = (undefined2)((ulong)param_5 >> 0x10);
    if (*param_5 <= uStack_5a) break;
    uVar3 = *(undefined4 *)((uint *)param_5 + 0x1);
    uVar2 = ((uint *)param_5)[0x2];
    pvVar5 = (void *)((int)uVar3 + uStack_5a * 0xa);
    *(undefined2 *)((int)pvVar5 + 0x4) = *(undefined2 *)(uStack_5a * 0x2 + (int)param_4)
    ;
    uStack_5a += 0x1;
    UI_Component_Set_Metadata_Strings_a626
              ((void *)CONCAT22((int)((ulong)uVar3 >> 0x10),pvVar5),
               (char *)CONCAT22(unaff_SS,&local_54),uVar2);
  }
  return;
}



// Handles UI event type 5. It calculates the parent object address (offset -10) and
// notifies its listeners.

void __stdcall16far UI_Object_On_Event_5_Notify_Parent_Logic(long obj_ref,int event_id)
{
  if (event_id != 0x5)
  {
    return;
  }
  UI_Container_Notify_Listeners_at_Offset_4_Logic
            ((void *)((int)obj_ref + -0xa),(int)((ulong)obj_ref >> 0x10));
  return;
}



void __stdcall16far
UI_Object_Destroy_SubObject_at_Offset_12_Logic_Duplicate(long this_ref)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ref >> 0x10);
  iVar2 = (int)this_ref;
  if (*(int *)(iVar2 + 0x14) != 0x0 || (undefined4 *)*(int *)(iVar2 + 0x12) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)(iVar2 + 0x12);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)(iVar2 + 0x12) = 0x0;
  return;
}



void __stdcall16far UI_Main_View_Set_State_Property_0aa0(u32 param_1,u16 param_2)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(u16 *)(iVar1 + 0x14) = param_2;
  UI_Component_Set_FarPtr_at_Offset_20_Logic_2
            (*(long *)(iVar1 + 0x2c),*(long *)(iVar1 + 0x3c));
  return;
}



void __stdcall16far
UI_Main_View_Controller_Handle_Status_Change_bf4(u32 param_1,u16 param_2)
{
  int iVar1;
  int *unaff_SS;
  long lVar2;
  undefined1 local_14 [0xc];
  u16 local_8;
  u32 local_6;
  
  if (false)
  {
    return;
  }
  switch(param_2)
  {
  case 0x1:
    *(undefined4 *)((int)param_1 + 0xc) = 0x0;
    *(undefined4 *)((int)param_1 + 0x7e) = 0x0;
    return;
  case 0x4:
    unpack_3word_struct((void *)((int)param_1 + 0x10),param_1._2_2_,(int *)&local_8,
                        unaff_SS);
    local_8 = *(u16 *)((int)*(undefined4 *)((int)param_1 + 0xc) + 0x1e);
    pack_3words_reverse((void *)((int)param_1 + 0x10),(int)param_1._2_2_,local_8,
                        (int)local_6);
    zero_init_12bytes_struct(local_14);
    UI_Main_View_Controller_Calculate_Clamped_Viewport_Bounds_Logic
              (CONCAT22(param_1._2_2_,(int)param_1 + -0x20),
               (long)CONCAT22(unaff_SS,local_14));
    goto LAB_1018_0c71;
  case 0x5:
  case 0x6:
    iVar1 = (int)param_1 + -0x20;
    UI_Main_View_Controller_Populate_Fleet_and_Link_Lists_Logic
              (CONCAT22(param_1._2_2_,iVar1));
    UI_Main_View_Controller_Populate_Entity_Collection_88_Logic
              (CONCAT22(param_1._2_2_,iVar1));
    UI_Main_View_Controller_Populate_Type9_Collection_8E_Logic
              (CONCAT22(param_1._2_2_,iVar1));
LAB_1018_0c71:
    *(undefined4 *)((int)param_1 + 0x2c) = 0x0;
    if (*(long *)((int)*(undefined4 *)((int)param_1 + 0xc) + 0x20) ==
        *(long *)((int)param_1 + 0x1c))
    {
      lVar2 = UI_Component_Populate_Data_History_from_Resource_Logic
                        (*(long *)((int)param_1 + 0xc),*(long *)((int)param_1 + 0x1c));
      *(undefined2 *)((int)param_1 + 0x2c) = (int)lVar2;
      *(undefined2 *)((int)param_1 + 0x2e) = (int)((ulong)lVar2 >> 0x10);
      UI_Container_Notify_Listeners_at_Offset_4_Logic
                ((void *)((int)param_1 + -0x20),(int)param_1._2_2_);
      return;
    }
    break;
  case 0x14:
    if (*(long *)((int)*(undefined4 *)((int)param_1 + 0xc) + 0x20) !=
        *(long *)((int)param_1 + 0x1c))
    {
      UI_Window_Post_Close_Message_291a((void *)*(undefined4 *)((int)param_1 + 0x60));
      return;
    }
    break;
  case 0x15:
    iVar1 = Resource_Category_Get_Mapped_Offset_Value_Logic
                      ((void *)(void *)*(undefined4 *)((int)param_1 + 0x7e),
                       (int)((ulong)*(undefined4 *)((int)param_1 + 0x7e) >> 0x10));
    if (iVar1 != 0x0)
    {
      *(undefined2 *)((int)param_1 + 0x88) = 0x1;
      return;
    }
  }
  return;
}



// Core coordinate update logic for the Main View. It clamps input coordinates to entity
// boundaries, updates internal packed structures at 0x30 and 0x36, and triggers a data
// history refresh if the active entity is selected.

void __stdcall16far
UI_Main_View_Controller_Update_Viewport_and_History_Logic
          (void *param_1,int param_2,ulong param_3)
{
  int iVar1;
  void *this;
  int *out1;
  long lVar2;
  int local_6 [0x2];
  
  if (param_3._2_2_ + -0x3 < 0x1)
  {
    param_3 = CONCAT22(0x3,(int)param_3);
  }
  if ((int)param_3 + -0x3 < 0x1)
  {
    param_3 = CONCAT22(param_3._2_2_,0x3);
  }
  out1 = (int *)((ulong)param_1 >> 0x10);
  this = (void *)param_1;
  if (*(int *)((int)*(undefined4 *)((int)this + 0x5a) + 0x4) <= param_3._2_2_ + 0x2)
  {
    param_3 &= 0xffff;
  }
  iVar1 = *(int *)((int)*(undefined4 *)((int)this + 0x5a) + 0x8);
  if (iVar1 <= (int)param_3 + 0x2)
  {
    param_3._0_2_ = iVar1 + -0x3;
  }
  pack_3words_reverse((void *)((int)this + 0x30),(int)out1,param_2,(int)param_3);
  unpack_word_pair((void *)((int)this + 0x36),out1,local_6);
  pack_3words_reverse((void *)((int)this + 0x36),(int)out1,0x0,(int)param_3);
  *(undefined4 *)((int)this + 0x4c) = 0x0;
  if (*(long *)((int)*(undefined4 *)((int)this + 0x2c) + 0x20) ==
      *(long *)((int)this + 0x3c))
  {
    lVar2 = UI_Component_Populate_Data_History_from_Resource_Logic
                      (*(long *)((int)this + 0x2c),*(long *)((int)this + 0x3c));
    *(undefined2 *)((int)this + 0x4c) = (int)lVar2;
    *(undefined2 *)((int)this + 0x4e) = (int)((ulong)lVar2 >> 0x10);
    UI_Container_Notify_Listeners_at_Offset_4_Logic(this,(int)out1);
  }
  return;
}



void __stdcall16far
UI_Main_View_Controller_Update_Viewport_from_Struct_Logic
          (long context,long src_struct_ref)
{
  int *unaff_SS;
  int local_8;
  undefined4 local_6;
  
  unpack_3word_struct((void *)src_struct_ref,(int *)((ulong)src_struct_ref >> 0x10),
                      &local_8,unaff_SS);
  UI_Main_View_Controller_Update_Viewport_and_History_Logic(context,local_8,local_6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Searches for the first available (zero) index in the global 4-slot Main View tracking
// table.

int __stdcall16far UI_Main_View_Find_Available_Global_Slot_Logic(void)
{
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  while ((uStack_4 < 0x4 &&
         (*(int *)(uStack_4 * 0x2 + (int)_PTR_DAT_1050_0000_1050_3962) != 0x0)))
  {
    uStack_4 += 0x1;
  }
  return uStack_4;
}



void * UI_Main_View_Controller_dtor_Wrapper_1842(u16 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)(void *)param_2 + -0x20));
  pvVar1 = UI_Main_View_Controller_dtor_Scalar_Deleting_184e(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Main_View_Controller_dtor_Scalar_Deleting_184e(void *param_1,byte param_2)
{
  UI_Main_View_Controller_dtor_1874_Logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates/cycles values within the 24-byte entry array at offset 0x40. It recalculates
// internal states and notifies listeners (type 0xD).

void __stdcall16far UI_Navigation_Manager_Cycle_Items_Logic(long this_ref,int delta)
{
  void *src;
  int *out1;
  astruct_473 *uVar4;
  int notify_type;
  int iStack_c;
  int local_6 [0x2];
  
  iStack_c = 0x0;
  while( true )
  {
    notify_type = (int)((ulong)this_ref >> 0x10);
    uVar4 = (astruct_473 *)this_ref;
    if (uVar4->field65_0x44 <= iStack_c) break;
    out1 = (int *)(uVar4->field64_0x40 >> 0x10);
    src = (void *)((int)uVar4->field64_0x40 + iStack_c * 0x18);
    *(int *)((int)src + 0x6) = *(int *)((int)src + 0x6) + delta * 0x2 + -0x1;
    if (0x23 < *(int *)((int)src + 0x6))
    {
      *(undefined2 *)((int)src + 0x6) = 0x0;
    }
    if (*(int *)((int)src + 0x6) < 0x0)
    {
      *(undefined2 *)((int)src + 0x6) = 0x23;
    }
    copy_struct_6bytes((void *)((int)src + 0x10),out1);
    *(undefined2 *)((int)src + 0x16) = *(undefined2 *)((int)src + 0xa);
    unpack_word_pair(src,out1,local_6);
    pack_3words_reverse(src,(int)out1,0x0,local_6[0x0]);
    *(undefined2 *)((int)src + 0xa) =
         *(undefined2 *)(*(int *)((int)src + 0x6) * 0x2 + 0x3966);
    iStack_c += 0x1;
  }
  UI_Container_Notify_Listeners_at_Offset_4_Logic(uVar4,notify_type);
  return;
}
