/*
 * Source: outpost.c
 * Chunk: 38/117
 * Original lines: 42512-43648
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Creates and populates a Data History object (at offset 0x12) using entries from a
// resource collection. It iterates through the resource, calculates history points
// (likely for a graph), and appends them to the object.

long __stdcall16far
UI_Component_Populate_Data_History_from_Resource_Logic(long context,long entity_ref)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  void *this;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  void *this_ptr;
  long lVar10;
  undefined4 *puVar11;
  undefined2 in_stack_0000ffce;
  int iStack_24;
  undefined4 uStack_1c;
  undefined1 local_18 [0x4];
  int iStack_14;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  void *pvStack_6;
  undefined2 uStack_4;
  
  this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)entity_ref
                       );
  uStack_4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvStack_6 = (void *)this_ptr;
  iStack_8 = UI_Production_Item_Get_ID_Logic_5b00(this_ptr);
  lVar10 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,iStack_8);
  uStack_a = (undefined2)((ulong)lVar10 >> 0x10);
  uStack_c = (undefined2)lVar10;
  zero_init_12bytes_struct(local_18);
  UI_Main_View_Controller_Calculate_Clamped_Viewport_Bounds_Logic
            (CONCAT22(uStack_a,uStack_c),(long)CONCAT22(unaff_SS,local_18));
  if (iStack_14 == 0x0)
  {
    puVar11 = Simulator_Map_Batch_Create_Production_Items_in_Rect_6522
                        (_p_MapContext_5740,(undefined1 *)CONCAT22(unaff_SS,local_18),
                         entity_ref);
    uVar5 = (uint)((ulong)puVar11 >> 0x10);
    puVar2 = (undefined4 *)puVar11;
  }
  else
  {
    puVar11 = (undefined4 *)
              Simulator_Map_Batch_Process_Cells_in_Rect_62e4
                        (_p_MapContext_5740,(undefined1 *)CONCAT22(unaff_SS,local_18),
                         entity_ref);
    uVar5 = (uint)((ulong)puVar11 >> 0x10);
    puVar2 = (undefined4 *)puVar11;
  }
  uStack_1c = (undefined4 *)CONCAT22(uVar5,puVar2);
  if (uVar5 == 0x0 && puVar2 == NULL)
  {
    return 0x0;
  }
  uVar6 = uVar5;
  UI_Object_Destroy_SubObject_at_Offset_12_Logic_Duplicate(context);
  uVar9 = 0x1000;
  this = allocate_memory(CONCAT22(in_stack_0000ffce,0x1c));
  uVar6 |= (uint)this;
  iVar7 = (int)context;
  uVar8 = (undefined2)((ulong)context >> 0x10);
  if (uVar6 == 0x0)
  {
    *(undefined4 *)(iVar7 + 0x12) = 0x0;
  }
  else
  {
    uVar9 = 0x1008;
    pvVar3 = Data_History_Object_ctor(this,0x6,0x24);
    *(undefined2 *)(iVar7 + 0x12) = pvVar3;
    *(uint *)(iVar7 + 0x14) = uVar6;
  }
  puVar1 = (undefined2 *)((int)*uStack_1c + 0x10);
  iVar4 = (*(code *)*puVar1)(uVar9,puVar2,uVar5,this);
  for (iStack_24 = 0x0; iStack_24 < iVar4; iStack_24 += 0x1)
  {
    puVar1 = (undefined2 *)((int)*uStack_1c + 0x4);
    lVar10 = (*(code *)*puVar1)();
    if (lVar10 != 0x0)
    {
      lVar10 = Gameplay_Object_Factory_Complex_Resolver
                         (*(long *)(iVar7 + 0xe),
                          CONCAT22(iStack_24 % 0x6,iStack_24 / 0x6));
      Data_History_Object_Append_Point
                ((void *)(void *)*(undefined4 *)(iVar7 + 0x12),lVar10);
    }
  }
  return CONCAT22(*(undefined2 *)(iVar7 + 0x14),*(undefined2 *)(iVar7 + 0x12));
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Prepares and submits a command to the global simulator resource 0x5748. It classifies
// the entity type (0x73-0x78) and notifies listeners (type 6) upon success.

void __stdcall16far
UI_Component_Submit_Simulator_Command_Logic
          (void *param_1,undefined2 param_2,undefined4 param_3,int param_4,
          undefined4 param_5)
{
  undefined4 uVar1;
  undefined1 *puVar2;
  int notify_type;
  undefined2 unaff_SS;
  undefined1 local_128 [0x124];
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  if (((0x72 < param_4) && (!SBORROW2(param_4,0x73))) &&
     ((param_4 == 0x75 || param_4 + -0x74 < 0x1 ||
      ((0x0 < param_4 + -0x76 && (param_4 + -0x77 < 0x2))))))
  {
    uStack_4 = 0x1;
  }
  notify_type = (int)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)(void *)param_1 + 0x24);
  Simulator_Command_PutBldg_ctor_init_933c
            (local_128,unaff_SS,param_2,uStack_4,param_4,param_3,(int)uVar1,
             (int)((ulong)uVar1 >> 0x10),(int)param_5,(int)((ulong)param_5 >> 0x10));
  puVar2 = local_128;
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,puVar2));
  if (puVar2 != NULL)
  {
    UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)param_1,notify_type);
  }
  return;
}



void __stdcall16far
UI_Component_Set_FarPtr_at_Offset_16_Logic(long context,long new_ptr)
{
  *(long *)((int)context + 0x16) = new_ptr;
  return;
}



long __stdcall16far UI_Component_Get_FarPtr_at_Offset_16_Logic(long context)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  return CONCAT22(*(undefined2 *)((int)context + 0x18),
                  *(undefined2 *)((int)context + 0x16));
}



void __stdcall16far
UI_Component_Set_FarPtr_at_Offset_1A_Logic_2(long context,long new_ptr)
{
  *(long *)((int)context + 0x1a) = new_ptr;
  return;
}



void __stdcall16far
UI_Component_Set_FarPtr_at_Offset_20_Logic_2(long context,long new_ptr)
{
  *(long *)((int)context + 0x20) = new_ptr;
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



void * __stdcall16far
Simulator_Object_Subclass_dtor_Scalar_Deleting_0532(void *param_1,byte param_2)
{
  Simulator_Object_Subclass_dtor_0558((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the primary UI Main View Controller (vtable 0x1874). It initializes a
// massive state structure with nearly 50 fields, including GDI pens/brushes, resource
// IDs (0xF9-0xFF), and coordinate trackers. It manages a global reference count at
// 0x3960 and registers with multiple simulator resource trackers (0x2F, 9, 0x3B).

long __stdcall16far UI_Main_View_Controller_ctor_init_1874_Logic(long this_ref,int id)
{
  undefined2 *puVar1;
  void *dest;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 in_stack_0000fff0;
  astruct_480 *uVar7;
  
  iVar5 = (int)this_ref;
  uVar6 = (undefined2)((ulong)this_ref >> 0x10);
  lVar4 = UI_Metric_Manager_Object_ctor_init(this_ref,0x0,id);
  iVar2 = (int)((ulong)lVar4 >> 0x10);
  *(undefined2 *)(iVar5 + 0x20) = (char *)s_1_1050_389a;
  *(undefined2 *)(iVar5 + 0x22) = 0x1008;
  *(undefined2 *)(iVar5 + 0x20) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)(iVar5 + 0x22) = 0x1008;
  *(undefined4 *)(iVar5 + 0x24) = 0x0;
  *(undefined4 *)(iVar5 + 0x2c) = 0x0;
  zero_init_struct_6bytes((void *)(iVar5 + 0x30));
  zero_init_struct_6bytes((void *)(iVar5 + 0x36));
  *(undefined4 *)(iVar5 + 0x3c) = 0x0;
  zero_init_12bytes_struct((void *)(iVar5 + 0x40));
  *(undefined4 *)(iVar5 + 0x4c) = 0x0;
  *(undefined4 *)(iVar5 + 0x5a) = 0x0;
  *(undefined2 *)(iVar5 + 0x5e) = 0x0;
  *(undefined4 *)(iVar5 + 0x60) = 0x0;
  *(undefined2 *)(iVar5 + 0x64) = 0xff00;
  *(undefined2 *)(iVar5 + 0x66) = 0x0;
  *(undefined4 *)(iVar5 + 0x68) = 0x10000fb;
  *(undefined4 *)(iVar5 + 0x6c) = 0x10000f9;
  *(undefined4 *)(iVar5 + 0x70) = 0x10000ff;
  *(undefined4 *)(iVar5 + 0x74) = 0x10000fe;
  *(undefined4 *)(iVar5 + 0x78) = 0x10000fc;
  *(undefined4 *)(iVar5 + 0x7c) = 0x0;
  *(undefined4 *)(iVar5 + 0x80) = 0x0;
  *(undefined2 *)(iVar5 + 0x84) = 0x1;
  *(undefined2 *)(iVar5 + 0x86) = 0x0;
  *(undefined4 *)(iVar5 + 0x88) = 0x0;
  *(undefined2 *)(iVar5 + 0x8c) = 0x0;
  *(undefined4 *)(iVar5 + 0x8e) = 0x0;
  *(undefined2 *)(iVar5 + 0x92) = 0x0;
  *(undefined4 *)(iVar5 + 0x94) = 0x0;
  *(undefined2 *)(iVar5 + 0x98) = 0x0;
  *(undefined4 *)(iVar5 + 0x9a) = 0x0;
  *(undefined4 *)(iVar5 + 0xa2) = 0x0;
  *(undefined2 *)(iVar5 + 0xa6) = 0xffff;
  *(undefined2 *)(iVar5 + 0xa8) = 0x0;
  *(char **)this_ref = (char *)s_582_bmp_1050_1871 + 0x3;
  *(undefined2 *)(iVar5 + 0x2) = 0x1018;
  *(undefined2 *)(iVar5 + 0x20) = (char *)s_589_bmp_1050_18a9 + 0x7;
  *(undefined2 *)(iVar5 + 0x22) = 0x1018;
  if ((PTR_DAT_1050_0000_1050_3960 == NULL) && (_PTR_DAT_1050_0000_1050_3962 == NULL))
  {
    dest = allocate_memory(CONCAT22(in_stack_0000fff0,0x8));
    _PTR_DAT_1050_0000_1050_3962 = (void *)CONCAT22(iVar2,dest);
    memset_far(dest,iVar2,0x0);
  }
  PTR_DAT_1050_0000_1050_3960 = PTR_DAT_1050_0000_1050_3960 + 0x1;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  *(undefined2 *)(iVar5 + 0x2c) = (int)lVar4;
  *(undefined2 *)(iVar5 + 0x2e) = (int)((ulong)lVar4 >> 0x10);
  if (this_ref == 0x0)
  {
    iVar2 = 0x0;
    uVar3 = 0x0;
  }
  else
  {
    iVar2 = iVar5 + 0x20;
    uVar3 = uVar6;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x2c) + 0x4);
  (*(code *)*puVar1)(0x1010,(int)*(undefined4 *)(iVar5 + 0x2c),
                     (int)((ulong)*(undefined4 *)(iVar5 + 0x2c) >> 0x10),0x0,iVar2,uVar3
                    );
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  if (*(int *)((int)lVar4 + 0x80) != 0x0)
  {
    *(undefined2 *)(iVar5 + 0x84) = 0x2;
  }
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
  iVar2 = (int)((ulong)lVar4 >> 0x10);
  *(undefined2 *)(iVar5 + 0x9e) = (int)lVar4;
  *(int *)(iVar5 + 0xa0) = iVar2;
  iVar2 = Resource_Category_Get_Mapped_Offset_Value_Logic
                    ((void *)*(undefined2 *)(iVar5 + 0x9e),iVar2);
  if (iVar2 != 0x0)
  {
    *(undefined2 *)(iVar5 + 0xa8) = 0x1;
  }
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3b);
  *(undefined2 *)(iVar5 + 0xa2) = (int)lVar4;
  *(undefined2 *)(iVar5 + 0xa4) = (int)((ulong)lVar4 >> 0x10);
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Destructor for the Main View Controller. It decrements the global reference count,
// frees four string buffers and a Sprite sub-object, and unregisters itself from two
// different UI containers before calling the base destructor.

void __stdcall16far UI_Main_View_Controller_dtor_1874_Logic(long this_ref)
{
  void *this;
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  void *this_00;
  undefined2 uVar4;
  undefined4 uStack_1a;
  
  uVar4 = (undefined2)((ulong)this_ref >> 0x10);
  this_00 = (void *)this_ref;
  *(char **)this_ref = (char *)s_582_bmp_1050_1871 + 0x3;
  *(undefined2 *)((int)this_00 + 0x2) = 0x1018;
  *(undefined2 *)((int)this_00 + 0x20) = (char *)s_589_bmp_1050_18a9 + 0x7;
  *(undefined2 *)((int)this_00 + 0x22) = 0x1018;
  PTR_DAT_1050_0000_1050_3960 = PTR_DAT_1050_0000_1050_3960 + -0x1;
  *(undefined2 *)
   ((int)_PTR_DAT_1050_0000_1050_3962 + *(int *)((int)this_00 + 0x12) * 0x2 + -0x4) =
       0x0;
  if (PTR_DAT_1050_0000_1050_3960 == NULL)
  {
    free_if_not_null((void *)_PTR_DAT_1050_0000_1050_3962);
    _PTR_DAT_1050_0000_1050_3962 = NULL;
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_00 + 0x94));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_00 + 0x9a));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_00 + 0x88));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_00 + 0x8e));
  if (*(long *)((int)this_00 + 0x2c) != 0x0)
  {
    if (this_ref == 0x0)
    {
      iVar1 = 0x0;
      uVar3 = 0x0;
    }
    else
    {
      iVar1 = (int)this_00 + 0x20;
      uVar3 = uVar4;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this_00 + 0x2c),
               CONCAT22(uVar3,iVar1));
  }
  if (*(long *)((int)this_00 + 0x9e) != 0x0)
  {
    if (this_ref == 0x0)
    {
      iVar1 = 0x0;
      uVar3 = 0x0;
    }
    else
    {
      iVar1 = (int)this_00 + 0x20;
      uVar3 = uVar4;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this_00 + 0x9e),
               CONCAT22(uVar3,iVar1));
  }
  this = (void *)*(undefined2 *)((int)this_00 + 0x60);
  if (*(int *)((int)this_00 + 0x62) != 0x0 || this != NULL)
  {
    Sprite_Object_free_internal_buffer(this);
    free_if_not_null(this);
  }
  *(undefined4 *)((int)this_00 + 0x4c) = 0x0;
  if (this_ref == 0x0)
  {
    puVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar2 = (undefined2 *)((int)this_00 + 0x20);
  }
  uStack_1a = (undefined2 *)CONCAT22(uVar4,puVar2);
  *uStack_1a = (char *)s_1_1050_389a;
  puVar2[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(this_00);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes the Main View Controller state for a specific entity. It retrieves the
// entity's coordinates and metadata from the simulator, updates internal tracking
// fields (offsets 0x5A, 0x3C, 0x7C), and triggers a virtual refresh.

void __stdcall16far
UI_Main_View_Controller_Set_Active_Entity_Logic(long this_ref,long entity_ref)
{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined2 uVar4;
  void *this_ptr;
  long lVar5;
  undefined4 *out_field2;
  void *out_field1;
  
  out_field1 = (void *)CONCAT22(this_ref._2_2_,(void *)((int)this_ref + 0x28));
  out_field2 = (undefined4 *)
               CONCAT22(this_ref._2_2_,(undefined4 *)((int)this_ref + 0x24));
  this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)entity_ref
                       );
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Production_Item_Get_Object_Fields_5a52(this_ptr,out_field2,out_field1);
  pvVar2 = get_with_lazy_init((void *)(void *)*(undefined4 *)((int)this_ref + 0x24));
  *(undefined2 *)((int)this_ref + 0x5a) = pvVar2;
  *(undefined2 *)((int)this_ref + 0x5c) = uVar4;
  iVar3 = UI_Main_View_Find_Available_Global_Slot_Logic();
  *(int *)((int)this_ref + 0x12) = iVar3 + 0x2;
  *(undefined2 *)(iVar3 * 0x2 + (int)_PTR_DAT_1050_0000_1050_3962) = 0x1;
  puVar1 = (undefined2 *)((int)*(undefined4 *)this_ref + 0x18);
  (*(code *)*puVar1)();
  *(long *)((int)this_ref + 0x3c) = entity_ref;
  lVar5 = UI_Get_Entity_FarPtr_at_Offset_10_Logic(*(long *)((int)this_ref + 0x2c));
  *(undefined2 *)((int)this_ref + 0x7c) = (int)lVar5;
  *(undefined2 *)((int)this_ref + 0x7e) = (int)((ulong)lVar5 >> 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Main_View_Calculate_System_Metrics_09a8(u32 param_1)
{
  int16_t iVar1;
  int16_t iVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  u16 *out2;
  u16 local_e;
  u16 local_c;
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  local_4 = GetSystemMetrics16(0x4);
  uVar4 = (undefined2)(param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_6 = *(int *)(iVar3 + 0x12) - 0x2;
  out2 = &local_a;
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  unpack_word_pair((void *)((int)lVar5 + 0xe),(int *)((ulong)lVar5 >> 0x10),(int *)out2)
  ;
  *(int *)(iVar3 + 0x18) = local_6 * local_4 + local_8 + 0x146;
  *(int *)(iVar3 + 0x1a) = local_6 * local_4 + local_a + 0x9;
  iVar1 = GetSystemMetrics16(0x5);
  *(int *)(iVar3 + 0x1c) =
       iVar1 * 0x2 + *(int *)((int)*(undefined4 *)(iVar3 + 0x5a) + 0x4);
  iVar1 = GetSystemMetrics16(0x4);
  iVar2 = GetSystemMetrics16(0x6);
  *(int *)(iVar3 + 0x1e) =
       iVar2 + iVar1 + *(int *)((int)*(undefined4 *)(iVar3 + 0x5a) + 0x8);
  return;
}



// Returns either the primary (0x24) or secondary (0x28) buffer pointer based on the
// current display state flag at 0x84.

long __stdcall16far UI_Main_View_Controller_Get_Active_Buffer_Ptr_Logic(long context)
{
  astruct_479 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_479 *)context;
  if (uVar1->field128_0x84 == 0x2)
  {
    return CONCAT22(uVar1->field39_0x2a,uVar1->field38_0x28);
  }
  return CONCAT22(uVar1->field37_0x26,uVar1->field36_0x24);
}



// Toggles the display state flag at 0x84 between 1 and 2 and notifies listeners. Used
// for switching between map layers or view modes.

void __stdcall16far UI_Main_View_Controller_Toggle_Display_State_Logic(long context)
{
  undefined2 uVar1;
  void *this;
  int notify_type;
  
  notify_type = (int)((ulong)context >> 0x10);
  this = (void *)context;
  if (*(int *)((int)this + 0x84) == 0x1)
  {
    uVar1 = 0x2;
  }
  else
  {
    uVar1 = 0x1;
  }
  *(undefined2 *)((int)this + 0x84) = uVar1;
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,notify_type);
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
UI_Main_View_Controller_Set_FarPtr_at_Offset_80_Logic(long context,long new_ptr)
{
  *(long *)((int)context + 0x80) = new_ptr;
  return;
}



long __stdcall16far UI_Main_View_Controller_Get_FarPtr_at_Offset_80_Logic(long context)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  return CONCAT22(*(undefined2 *)((int)context + 0x82),
                  *(undefined2 *)((int)context + 0x80));
}



void __stdcall16far
UI_Main_View_Controller_Set_Value_at_Offset_5E_Logic(long context,int value)
{
  *(int *)((int)context + 0x5e) = value;
  return;
}



int __stdcall16far UI_Main_View_Controller_Get_Value_at_Offset_5E_Logic(long context)
{
  return *(int *)((int)context + 0x5e);
}



long __stdcall16far
UI_Main_View_Controller_Get_Indirect_FarPtr_from_Offset_7C_Logic(long context)
{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)context + 0x7c);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 0x6),*(undefined2 *)(iVar2 + 0x4));
}



// Calculates clamped bounds for a viewport or selection region. It unpacks a coordinate
// from offset 0x30, ensures it stays within safe margins (3 pixels) of the parent
// entity's boundaries, and generates two bounding structures at 0x40 and 0x46.

void __stdcall16far
UI_Main_View_Controller_Calculate_Clamped_Viewport_Bounds_Logic
          (long context,long dest_ref)
{
  int iVar1;
  astruct_478 *uVar3;
  int *out1;
  int *unaff_SS;
  void *src;
  int local_8;
  int local_6;
  int local_4;
  
  uVar3 = (astruct_478 *)context;
  out1 = (int *)((ulong)context >> 0x10);
  uVar3 = (astruct_478 *)&uVar3->field_0x30;
  unpack_3word_struct(uVar3,out1,&local_8,unaff_SS);
  if (local_4 + -0x3 < 0x1)
  {
    local_4 = 0x3;
  }
  if (local_6 + -0x3 < 0x1)
  {
    local_6 = 0x3;
  }
  iVar1 = *(int *)((int)uVar3->field90_0x5a + 0x4);
  if (iVar1 <= local_4 + 0x2)
  {
    local_4 = iVar1 + -0x3;
  }
  iVar1 = *(int *)((int)uVar3->field90_0x5a + 0x8);
  if (iVar1 <= local_6 + 0x2)
  {
    local_6 = iVar1 + -0x3;
  }
  pack_two_3word_structs
            (&uVar3->field_0x40,out1,local_8,local_6 + 0x2,local_4 + 0x2,local_8,
             local_6 + -0x3,local_4 + -0x3);
  src = (void *)((ulong)dest_ref >> 0x10);
  copy_struct_6bytes((void *)dest_ref,src);
  copy_struct_6bytes((void *)((int)(void *)dest_ref + 0x6),src);
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



// Compares the selected entity ID at offset 0x3C with the current simulator context at
// offset 0x2C to determine if the selection is still valid and active.

int __stdcall16far UI_Main_View_Controller_Is_Selected_Entity_Active_Logic(long context)
{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = *(undefined4 *)((int)context + 0x2c);
  if (*(long *)((int)uVar1 + 0x20) == *(long *)((int)context + 0x3c))
  {
    return 0x1;
  }
  return 0x0;
}



void __stdcall16far
UI_Main_View_Controller_Get_Indirect_Refs_from_Offset_7C_Logic
          (long context,int *out1,long *out2)
{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined4 *in_stack_0000000c;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = *(undefined4 *)((int)context + 0x7c);
  *in_stack_0000000c = *(undefined4 *)((int)uVar1 + 0x16);
  uVar1 = *(undefined4 *)((int)context + 0x7c);
  *_out1 = *(int *)((int)uVar1 + 0x1a);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Populates two parallel 6-byte structure arrays (offsets 0x94 and 0x9A). The first
// list tracks entities with magic 0x8000001 (Fleets), and the second tracks entities
// with active simulation links. It uses qsort-style allocations and notifies listeners
// upon completion.

void __stdcall16far
UI_Main_View_Controller_Populate_Fleet_and_Link_Lists_Logic(long context)
{
  u16 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined2 unaff_SI;
  undefined2 uVar10;
  undefined2 unaff_SS;
  void *pvVar11;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_14 [0x8];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  int iStack_4;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,0x0,0x400);
  uVar10 = (undefined2)((ulong)context >> 0x10);
  iVar9 = (int)context;
  free_if_not_null((void *)(void *)*(undefined4 *)(iVar9 + 0x94));
  free_if_not_null((void *)(void *)*(undefined4 *)(iVar9 + 0x9a));
  *(undefined4 *)(iVar9 + 0x94) = 0x0;
  *(undefined4 *)(iVar9 + 0x9a) = 0x0;
  *(undefined2 *)(iVar9 + 0x92) = 0x0;
  *(undefined2 *)(iVar9 + 0x98) = 0x0;
  while( true )
  {
    pvVar11 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                        ((undefined1 *)CONCAT22(unaff_SS,local_14));
    uVar8 = (uint)((ulong)pvVar11 >> 0x10);
    pvVar5 = (void *)pvVar11;
    uVar7 = uVar8 | (uint)pvVar5;
    if (uVar7 == 0x0) break;
    if (*(long *)((int)pvVar5 + 0x200) == 0x8000001)
    {
      *(int *)(iVar9 + 0x92) = *(int *)(iVar9 + 0x92) + 0x1;
    }
    else if ((*(int *)(iVar9 + 0xa8) != 0x0) ||
            (iVar4 = UI_Relationship_Manager_Is_Link_Active_Type1_Logic
                               ((void *)(void *)*(undefined4 *)(iVar9 + 0xa2),
                                *(long *)((int)pvVar5 + 0x4),0x4000001), iVar4 != 0x0))
    {
      *(int *)(iVar9 + 0x98) = *(int *)(iVar9 + 0x98) + 0x1;
    }
  }
  uVar8 = 0x0;
  if (*(int *)(iVar9 + 0x92) != 0x0)
  {
    uVar1 = *(u16 *)(iVar9 + 0x92);
    pvVar5 = allocate_memory(CONCAT22(unaff_SI,uVar1 * 0x6));
    uStack_20 = (void *)CONCAT22(uVar7,pvVar5);
    uVar8 = uVar7 | (uint)pvVar5;
    if (uVar8 == 0x0)
    {
      *(undefined4 *)(iVar9 + 0x94) = 0x0;
    }
    else
    {
      call_function_n_times
                ((void *)((int)(void **)&PTR_s_M3_1050_3bc1_1050_3e36 + 0x2),0x1008,
                 uVar1);
      *(undefined4 *)(iVar9 + 0x94) = uStack_20;
    }
  }
  if (*(int *)(iVar9 + 0x98) != 0x0)
  {
    uVar1 = *(u16 *)(iVar9 + 0x98);
    pvVar5 = allocate_memory(CONCAT22(unaff_SI,uVar1 * 0x6));
    uStack_20 = (void *)CONCAT22(uVar8,pvVar5);
    if (uVar8 == 0x0 && pvVar5 == NULL)
    {
      *(undefined4 *)(iVar9 + 0x9a) = 0x0;
    }
    else
    {
      call_function_n_times
                ((void *)((int)(void **)&PTR_s_M3_1050_3bc1_1050_3e36 + 0x2),0x1008,
                 uVar1);
      *(undefined4 *)(iVar9 + 0x9a) = uStack_20;
    }
  }
  if (iStack_4 != 0x0)
  {
    uStack_8 = 0x1;
    uStack_6 = 0x0;
  }
  uStack_1c = 0x0;
  uStack_c = uStack_8;
  uStack_a = uStack_6;
LAB_1018_0f74:
  pvVar11 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                      ((undefined1 *)CONCAT22(unaff_SS,local_14));
  iVar4 = (int)((ulong)pvVar11 >> 0x10);
  pvVar5 = (void *)pvVar11;
  if (iVar4 == 0x0 && pvVar5 == NULL)
  {
    return;
  }
  lVar2 = *(long *)((int)pvVar5 + 0x200);
  Simulator_Get_Entity_Object_from_PackedID_e1ec
            (_p_SimulatorWorldContext,(u8 *)(u8 *)*(undefined4 *)((int)pvVar5 + 0x10));
  iVar6 = (int)uStack_1c;
  iVar3 = uStack_1c._2_2_;
  if (lVar2 != 0x8000001) goto LAB_1018_0ffc;
  iVar4 = *(int *)(iVar9 + 0x94);
  pvVar5 = (void *)*(undefined2 *)(iVar9 + 0x96);
  uStack_1c = CONCAT22(uStack_1c._2_2_ + 0x1,(int)uStack_1c);
  iVar6 = iVar3;
  goto LAB_1018_0fe8;
LAB_1018_0ffc:
  if ((*(int *)(iVar9 + 0xa8) != 0x0) ||
     (iVar4 = UI_Relationship_Manager_Is_Link_Active_Type1_Logic
                        ((void *)(void *)*(undefined4 *)(iVar9 + 0xa2),
                         *(long *)((int)pvVar5 + 0x4),0x4000001), iVar4 != 0x0))
  {
    iVar4 = *(int *)(iVar9 + 0x9a);
    pvVar5 = (void *)*(undefined2 *)(iVar9 + 0x9c);
    uStack_1c = CONCAT22(uStack_1c._2_2_,(int)uStack_1c + 0x1);
LAB_1018_0fe8:
    copy_struct_6bytes((void *)(iVar4 + iVar6 * 0x6),pvVar5);
  }
  goto LAB_1018_0f74;
}



// Getter for the fleet list at offset 0x94. Triggers lazy population if the list is
// null.

void __stdcall16far
UI_Main_View_Controller_Get_Fleet_List_Logic(long context,int *count_out,long *list_out)
{
  astruct_477 *uVar1;
  undefined2 uVar2;
  long *in_stack_0000000c;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_477 *)context;
  if (uVar1->field147_0x94 == 0x0)
  {
    UI_Main_View_Controller_Populate_Fleet_and_Link_Lists_Logic(context);
  }
  *in_stack_0000000c = uVar1->field147_0x94;
  *_count_out = uVar1->field146_0x92;
  return;
}



// Getter for the link list at offset 0x9A. Triggers lazy population if the list is
// null.

void __stdcall16far
UI_Main_View_Controller_Get_Link_List_Logic_maybe
          (long context,int *count_out,long *list_out)
{
  astruct_476 *uVar1;
  undefined2 uVar2;
  long *in_stack_0000000c;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_476 *)context;
  if (uVar1->field153_0x9a == 0x0)
  {
    UI_Main_View_Controller_Populate_Fleet_and_Link_Lists_Logic(context);
  }
  *in_stack_0000000c = uVar1->field153_0x9a;
  *_count_out = uVar1->field152_0x98;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Populates an entity collection at offset 0x88 by iterating through the global entity
// list and matching parent IDs (offset 8). It performs nested lookups via resource
// category 2 and copies metadata into a newly allocated array.

void __stdcall16far
UI_Main_View_Controller_Populate_Entity_Collection_88_Logic(long context)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  u32 *puVar9;
  void *this;
  undefined2 unaff_SI;
  int notify_type;
  undefined2 uVar10;
  undefined2 unaff_SS;
  void *pvVar11;
  long lVar12;
  ulong uStack_3c;
  ulong uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  u16 uStack_1e;
  undefined1 local_16 [0x8];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  int iStack_4;
  
  notify_type = (int)((ulong)context >> 0x10);
  this = (void *)context;
  iStack_4 = *(int *)((int)this + 0x86);
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x88));
  *(undefined2 *)((int)this + 0x86) = 0x0;
  *(undefined4 *)((int)this + 0x88) = 0x0;
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_16),0x1,0x0,0x400);
  lVar4 = 0x0;
  while( true )
  {
    uStack_1e = (u16)lVar4;
    pvVar11 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                        ((undefined1 *)CONCAT22(unaff_SS,local_16));
    uVar7 = (uint)((ulong)pvVar11 >> 0x10);
    pvVar6 = (void *)pvVar11;
    uVar8 = uVar7 | (uint)pvVar6;
    if (uVar8 == 0x0) break;
    if (*(long *)((int)this + 0x3c) == *(long *)((int)pvVar6 + 0x8))
    {
      puVar5 = get_array_element_6bytes
                         ((int *)_p_StringPropertyTable,
                          (int)((ulong)_p_StringPropertyTable >> 0x10));
      puVar9 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                         (pvVar6,uVar7,puVar5,uVar8);
      uStack_30 = (undefined4 *)CONCAT22(puVar9,puVar5);
      puVar2 = (undefined2 *)*uStack_30;
      puVar1 = (undefined2 *)puVar2 + 0x8;
      lVar12 = (*(code *)*puVar1)(0x1038,puVar5,puVar9);
      lVar4 = lVar12 + lVar4;
      if (uStack_30 != NULL)
      {
        puVar1 = (undefined2 *)puVar2;
        (*(code *)*puVar1)(0x1038,puVar5,puVar9,0x1);
      }
    }
  }
  if (lVar4 != 0x0)
  {
    *(u16 *)((int)this + 0x86) = uStack_1e;
    pvVar6 = allocate_memory(CONCAT22(unaff_SI,uStack_1e * 0x6));
    uStack_34 = (void *)CONCAT22(uVar8,pvVar6);
    if (uVar8 == 0x0 && pvVar6 == NULL)
    {
      *(undefined4 *)((int)this + 0x88) = 0x0;
    }
    else
    {
      call_function_n_times
                ((void *)((int)(void **)&PTR_s_M3_1050_3bc1_1050_3e36 + 0x2),0x1008,
                 uStack_1e);
      *(undefined4 *)((int)this + 0x88) = uStack_34;
    }
    if (iStack_6 != 0x0)
    {
      uStack_a = 0x1;
      uStack_8 = 0x0;
    }
    iVar3 = 0x0;
    uStack_e = uStack_a;
    uStack_c = uStack_8;
    while( true )
    {
      pvVar11 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                          ((undefined1 *)CONCAT22(unaff_SS,local_16));
      uVar7 = (uint)((ulong)pvVar11 >> 0x10);
      pvVar6 = (void *)pvVar11;
      uVar8 = uVar7 | (uint)pvVar6;
      if (uVar8 == 0x0) break;
      if (*(long *)((int)this + 0x3c) == *(long *)((int)pvVar6 + 0x8))
      {
        puVar5 = get_array_element_6bytes
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10));
        uVar10 = 0x1038;
        puVar9 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                           (pvVar6,uVar7,puVar5,uVar8);
        uStack_28 = (undefined4 *)CONCAT22(puVar9,puVar5);
        puVar1 = (undefined2 *)((int)*uStack_28 + 0x10);
        uStack_38 = (*(code *)*puVar1)(0x1038,puVar5,puVar9);
        for (uStack_3c = 0x0; uStack_3c < uStack_38; uStack_3c += 0x1)
        {
          UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_28);
          uVar10 = 0x1008;
          copy_struct_6bytes((void *)((int)*(undefined4 *)((int)this + 0x88) +
                                     iVar3 * 0x6),
                             (void *)((ulong)*(undefined4 *)((int)this + 0x88) >> 0x10))
          ;
          iVar3 += 0x1;
        }
        if (uStack_28 != NULL)
        {
          (*(code *)*(undefined2 *)(undefined2 *)*uStack_28)(uVar10,puVar5,puVar9,0x1);
        }
      }
    }
    if (*(int *)((int)this + 0x86) != iStack_4)
    {
      UI_Container_Notify_Listeners_at_Offset_4_Logic(this,notify_type);
    }
  }
  return;
}



void __stdcall16far
UI_Main_View_Controller_Get_Collection_88_Logic
          (long context,int *count_out,long *list_out)
{
  undefined2 uVar1;
  undefined4 *in_stack_0000000c;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  *in_stack_0000000c = *(undefined4 *)((int)context + 0x88);
  *_count_out = *(int *)((int)context + 0x86);
  return;
}
