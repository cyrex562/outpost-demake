/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 11/56
 * Original lines (combined): 33171-35964
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Signals resource 0x2E and triggers cleanup of report grid collection using global
// resource manager at 1050:0ED0.

void __stdcall16far
Resource_Manager_Signal_Resource_2E_Logic_maybe(void *this,int signal)
{
  long this_ref;
  int in_stack_00000008;
  
  *(int *)((int)this + 0x1e) = in_stack_00000008;
  if (in_stack_00000008 == 0x0)
  {
    this_ref = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2e);
    UI_Report_Grid_Manager_Cleanup_Collection_Logic(this_ref);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes internal UI state. Loads strings 0x62F and 0x630 via global manager at
// 1050:14CC. Performs zero-initialization of an array at offset 0x22.

void __stdcall16far UI_Component_Init_State_Logic_6034(void *this)
{
  char *pcVar1;
  undefined2 in_DX;
  int in_stack_00000006;
  
  *(undefined2 *)((int)this + 0x1e) = 0x1;
  *(undefined2 *)((int)this + 0x20) = 0x1;
  *(undefined2 *)((int)this + 0x72) = 0x1;
  *(undefined2 *)((int)this + 0x74) = 0x1;
  UI_Component_Set_Offset_76_to_5_Logic(this);
  memset_far((void *)((int)this + 0x22),in_stack_00000006,0x0);
  pcVar1 = Resource_Manager_LoadString_and_Duplicate
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x630);
  *(undefined2 *)((int)this + 0x68) = pcVar1;
  *(undefined2 *)((int)this + 0x6a) = in_DX;
  pcVar1 = Resource_Manager_LoadString_and_Duplicate
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x62f);
  *(undefined2 *)((int)this + 0x6c) = pcVar1;
  *(undefined2 *)((int)this + 0x6e) = in_DX;
  return;
}



// Scalar deleting destructor for the global configuration manager.

void * __stdcall16far Configuration_Manager_scalar_dtor_6312(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Configuration_Manager_dtor_6312_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Constructor for Resource_Category_Object. Initializes vtable to 1010:66F0 and clears
// seven internal state pointers.

void * __stdcall16far Resource_Category_Object_ctor_66F0(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined4 *)((int)this + 0x16) = 0x0;
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  *(undefined4 *)((int)this + 0x22) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x66f0;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



// Finds a dynamic offset within the object structure (using `FUN_1010_6646`) and sets
// two 16-bit values at that location.

void __stdcall16far
UI_Component_Set_Dynamic_Offset_Value_Logic(void *this,int value1,int value2,int map_id)
{
  int unaff_SS;
  int local_4;
  
  Resource_Category_Map_ID_to_Offset_Logic(this,value1,&local_4,unaff_SS);
  if (local_4 != 0x0)
  {
    *(int *)((int)this + local_4) = map_id;
    *(int *)((int)this + local_4 + 0x2) = value2;
  }
  return;
}



// Finds a dynamic offset within the object structure and returns the difference between
// two 16-bit values stored there.

int __stdcall16far
UI_Component_Get_Dynamic_Offset_Difference_Logic(void *this,int map_id)
{
  int unaff_SS;
  int local_4;
  
  Resource_Category_Map_ID_to_Offset_Logic(this,map_id,&local_4,unaff_SS);
  if (local_4 == 0x0)
  {
    return 0x0;
  }
  return *(int *)((int)this + local_4) - *(int *)((int)this + local_4 + 0x2);
}



// Retrieves a 16-bit value from a mapped offset within a resource category object. Uses
// `Resource_Category_Map_ID_to_Offset_Logic` to resolve the field location.

int __stdcall16far
Resource_Category_Get_Mapped_Offset_Value_Logic(void *this,int map_id)
{
  int unaff_SS;
  int local_4;
  
  Resource_Category_Map_ID_to_Offset_Logic(this,map_id,&local_4,unaff_SS);
  if (local_4 == 0x0)
  {
    return 0x0;
  }
  return *(int *)((int)this + local_4 + 0x2);
}



// Increments a 16-bit value at a mapped offset and notifies UI listeners (type 0x15)
// about the change.

void __stdcall16far
Resource_Category_Increment_Mapped_Offset_Value_Logic(void *this,int map_id)
{
  int iVar1;
  int unaff_SS;
  int local_4;
  
  Resource_Category_Map_ID_to_Offset_Logic(this,map_id,&local_4,unaff_SS);
  if (local_4 != 0x0)
  {
    iVar1 = *(int *)((int)this + local_4 + 0x2);
    *(undefined2 *)((int)this + local_4) = *(undefined2 *)((int)this + local_4);
    *(int *)((int)this + local_4 + 0x2) = iVar1 + 0x1;
    UI_Container_Notify_Listeners_at_Offset_4_Logic(this,map_id);
  }
  return;
}



// Maps resource string IDs (0x83-0x89) to specific byte offsets (10-34) within the
// category management structure. Used for dynamic property access.

void __stdcall16far
Resource_Category_Map_ID_to_Offset_Logic
          (void *arg1,int segment,int *offset_out,int map_id)
{
  undefined2 in_stack_0000000c;
  
  switch(in_stack_0000000c)
  {
  case 0x83:
    *_offset_out = 0xa;
    break;
  case 0x84:
    *_offset_out = 0xe;
    break;
  case 0x85:
    *_offset_out = 0x12;
    break;
  case 0x86:
    *_offset_out = 0x16;
    return;
  case 0x87:
    *_offset_out = 0x1a;
    return;
  case 0x88:
    *_offset_out = 0x1e;
    return;
  case 0x89:
    *_offset_out = 0x22;
    return;
  default:
    *_offset_out = 0x0;
    return;
  }
  return;
}



// Constructor for Simulator_Settings_Object. Initializes vtable to 1010:6AAC. Sets turn
// limit to 0x33 and initializes two primary flag data blocks (offsets 10 and 0x11E).

void * __stdcall16far
Simulator_Settings_Object_ctor_init_6AAC_Logic(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0x148) = 0x33;
  *(undefined2 *)CONCAT22(segment,this) = 0x6aac;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  memset_far((void *)((int)this + 0xa),segment,0x0);
  *(undefined2 *)((int)this + 0x32) = 0x1;
  *(undefined2 *)((int)this + 0x40) = 0x1;
  *(undefined2 *)((int)this + 0x46) = 0x1;
  *(undefined2 *)((int)this + 0x4e) = 0x1;
  *(undefined2 *)((int)this + 0x54) = 0x1;
  *(undefined2 *)((int)this + 0x5e) = 0x1;
  *(undefined2 *)((int)this + 0x68) = 0x1;
  *(undefined2 *)((int)this + 0x6c) = 0x1;
  *(undefined2 *)((int)this + 0x74) = 0x1;
  *(undefined2 *)((int)this + 0x78) = 0x1;
  *(undefined2 *)((int)this + 0x7a) = 0x1;
  *(undefined2 *)((int)this + 0x7e) = 0x1;
  *(undefined2 *)((int)this + 0x82) = 0x1;
  *(undefined2 *)((int)this + 0xa2) = 0x1;
  *(undefined2 *)((int)this + 0xa4) = 0x1;
  *(undefined2 *)((int)this + 0xa6) = 0x1;
  *(undefined2 *)((int)this + 0xa8) = 0x1;
  *(undefined2 *)((int)this + 0xae) = 0x1;
  *(undefined2 *)((int)this + 0xb2) = 0x1;
  *(undefined2 *)((int)this + 0xb8) = 0x1;
  *(undefined2 *)((int)this + 0xbe) = 0x1;
  *(undefined2 *)((int)this + 0xc0) = 0x1;
  *(undefined2 *)((int)this + 0xc4) = 0x1;
  *(undefined2 *)((int)this + 0xd4) = 0x1;
  *(undefined2 *)((int)this + 0xda) = 0x1;
  *(undefined2 *)((int)this + 0xe2) = 0x1;
  *(undefined2 *)((int)this + 0xfe) = 0x1;
  *(undefined2 *)((int)this + 0x100) = 0x1;
  *(undefined2 *)((int)this + 0x102) = 0x1;
  *(undefined2 *)((int)this + 0x104) = 0x1;
  *(undefined2 *)((int)this + 0x106) = 0x1;
  *(undefined2 *)((int)this + 0x108) = 0x1;
  memset_far((void *)((int)this + 0x11e),segment,0x0);
  *(undefined2 *)((int)this + 0x120) = 0x1;
  *(undefined2 *)((int)this + 0x122) = 0x1;
  *(undefined2 *)((int)this + 0x124) = 0x1;
  *(undefined2 *)((int)this + 0x126) = 0x1;
  *(undefined2 *)((int)this + 0x128) = 0x1;
  *(undefined2 *)((int)this + 0x12c) = 0x1;
  *(undefined2 *)((int)this + 0x138) = 0x1;
  return this;
}



void __stdcall16far
Simulator_Settings_Set_Flag_in_Block2_Logic(void *this,int value,int index)
{
  int in_stack_0000000a;
  
  *(int *)((int)this + in_stack_0000000a * 0x2 + 0x11e) = index;
  return;
}



void __stdcall16far
Simulator_Settings_Set_Flag_in_Block1_Logic(void *this,int value,int index)
{
  int in_stack_0000000a;
  
  *(int *)((int)this + in_stack_0000000a * 0x2 + 0xa) = index;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for Resource_Summary_Manager. Initializes vtable to 1010:7E28.
// Initializes sub-object at offset 10 with vtable 1010:7E38. Registers with global
// resource managers (IDs 3 and 0x2F) via 1050:0ED0.

void * __stdcall16far
Resource_Summary_Manager_ctor_init_7E28_Logic(void *this,int segment,int id)
{
  undefined2 *puVar1;
  long lVar2;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0xc) = 0x1008;
  *(undefined2 *)((int)this + 0xa) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0xc) = 0x1008;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x10) = 0x0;
  *(undefined4 *)((int)this + 0x14) = 0x0;
  *(undefined4 *)((int)this + 0x1c) = 0x0;
  *(undefined2 *)((int)this + 0x20) = 0x0;
  *(undefined4 *)((int)this + 0x22) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x7e28;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0xa) = 0x7e38;
  *(undefined2 *)((int)this + 0xc) = 0x1010;
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  *(undefined2 *)((int)this + 0x14) = (int)lVar2;
  *(undefined2 *)((int)this + 0x16) = (int)((ulong)lVar2 >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x14) + 0x4);
  (*(code *)*puVar1)();
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  *(undefined2 *)((int)this + 0x22) = (int)lVar2;
  *(undefined2 *)((int)this + 0x24) = (int)((ulong)lVar2 >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x22) + 0x4);
  (*(code *)*puVar1)();
  return this;
}



// Destructor for the Resource Summary Manager. It unregisters itself from multiple
// simulator resource trackers (offsets 10 and 0x11) and cleans up sub-objects before
// calling the base destructor.

void __stdcall16far Resource_Summary_Manager_dtor_7E28_Logic(void *this)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int in_stack_00000006;
  undefined4 uStack_e;
  
  *_this = 0x7e28;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0xa) = 0x7e38;
  *(undefined2 *)((int)this + 0xc) = 0x1010;
  if (*(int *)((int)this + 0x1e) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x1c) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x1c);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x1c) = 0x0;
  if (*(long *)((int)this + 0x14) != 0x0)
  {
    if (in_stack_00000006 == 0x0 && this == NULL)
    {
      iVar2 = 0x0;
      iVar4 = 0x0;
    }
    else
    {
      iVar2 = (int)this + 0xa;
      iVar4 = in_stack_00000006;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this + 0x14),CONCAT22(iVar4,iVar2));
  }
  if (*(long *)((int)this + 0x22) != 0x0)
  {
    if (in_stack_00000006 == 0x0 && this == NULL)
    {
      iVar2 = 0x0;
      iVar4 = 0x0;
    }
    else
    {
      iVar2 = (int)this + 0xa;
      iVar4 = in_stack_00000006;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this + 0x22),CONCAT22(iVar4,iVar2));
  }
  *(undefined4 *)((int)this + 0x14) = 0x0;
  *(undefined4 *)((int)this + 0x22) = 0x0;
  if (_this == NULL)
  {
    puVar3 = NULL;
    in_stack_00000006 = 0x0;
  }
  else
  {
    puVar3 = (undefined2 *)((int)this + 0xa);
  }
  uStack_e = (undefined2 *)CONCAT22(in_stack_00000006,puVar3);
  *uStack_e = (char *)s_1_1050_389a;
  puVar3[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Validates a list of entity IDs against a resource tracker. It iterates through the
// provided variable arguments and returns true (1) only if all IDs are successfully
// validated via `FUN_1010_a5ca`.

int __cdecl16far
Resource_Tracker_Batch_Validate_IDs_Logic(undefined4 param_1,int param_2)
{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  undefined2 unaff_SS;
  int iStack_a;
  int *piStack_8;
  
  _piStack_8 = (int *)CONCAT22(unaff_SS,&stack0x000a);
  iStack_a = param_2;
  do
  {
    piVar2 = _piStack_8;
    if (iStack_a == 0x0)
    {
      return 0x1;
    }
    uVar1 = (ulong)_piStack_8 >> 0x10;
    _piStack_8 = (int *)CONCAT22((int)uVar1,piStack_8 + 0x1);
    iVar3 = *piVar2;
    Simulator_Validate_ID_8000001_Logic((int)*(undefined4 *)((int)param_1 + 0x14));
    iStack_a = iStack_a + -0x1;
  } while (iVar3 == 0x0);
  return 0x0;
}



// Determines UI actions for entities. Classifies entity types and uses
// UI_Window_Focus_Manager_Logic to bring existing windows to top, or factory logic to
// create new ones.

int __stdcall16far
UI_Determine_and_Dispatch_Entity_Action_Logic(void *this,int action_mode)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  void *this_ptr;
  void *entity_ref;
  int in_stack_00000008;
  undefined2 *in_stack_0000000a;
  int iStack_14;
  int iStack_e;
  
  this_ptr = (void *)UI_Get_Entity_by_Index_Logic
                               ((int)*(undefined4 *)((int)this + 0x14),
                                (int)((ulong)*(undefined4 *)((int)this + 0x14) >> 0x10),
                                *in_stack_0000000a,
                                *(undefined4 *)((undefined2 *)in_stack_0000000a + 0x1));
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  if (this_ptr == NULL)
  {
    return 0x0;
  }
  entity_ref = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  iVar5 = (int)((ulong)entity_ref >> 0x10);
  iVar3 = (int)entity_ref;
  if ((iVar5 != 0x0 || iVar3 != 0x0) && (*(long *)(iVar3 + 0x1c) == 0x8000002))
  {
    return 0x0;
  }
  uVar1 = *(undefined4 *)((int)this_ptr + 0x2e);
  iStack_e = (int)uVar1;
  if ((*(int *)((int)this_ptr + 0x30) != 0x0 || iStack_e != 0x0) &&
     (*(long *)(iStack_e + 0x200) == 0x8000002))
  {
    return 0x0;
  }
  iVar2 = UI_Get_U16_at_Offset_C_Logic
                    ((int)*(undefined4 *)((int)this + 0x14),
                     (int)((ulong)*(undefined4 *)((int)this + 0x14) >> 0x10),
                     (long)entity_ref);
  if (*(int *)(iVar3 + 0x12) == 0x4)
  {
    in_stack_00000008 = 0x4;
  }
  else if (*(int *)(iVar3 + 0x12) == 0x7)
  {
    in_stack_00000008 = 0x5;
  }
  if (in_stack_00000008 != 0x2)
  {
    if (in_stack_00000008 == 0x3)
    {
      if ((iVar2 == 0xb) || (iVar2 == 0x37))
      {
        iStack_14 = 0xb;
      }
      else
      {
        iStack_14 = 0xa;
      }
      goto LAB_1010_72a7;
    }
    if (in_stack_00000008 == 0x4)
    {
      iStack_14 = 0x17;
      goto LAB_1010_72a7;
    }
    if (in_stack_00000008 != 0x5)
    {
      iStack_14 = UI_Classify_Entity_Type_for_Notification_Logic(this,(long)entity_ref);
      goto LAB_1010_72a7;
    }
  }
  iStack_14 = 0xc;
LAB_1010_72a7:
  if (iStack_14 == 0x0)
  {
    return 0x0;
  }
  iVar3 = UI_Window_Focus_Manager_Logic(this,action_mode,0x0,this_ptr);
  if (iVar3 == 0x0)
  {
    UI_Specialized_Dialog_Factory_Logic(_this,0x0,0x0,iStack_14,this_ptr);
  }
  return 0x1;
}



void UI_Resource_Summary_dtor_Wrapper_1010_7dc6
               (u16 param_1,int param_2,u16 param_3,byte param_4)
{
  Resource_Summary_Manager_dtor_Scalar_Deleting
            ((void *)(param_2 + -0xa),param_3,param_4);
  return;
}



void * __stdcall16far
Resource_Summary_Manager_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  Resource_Summary_Manager_dtor_7E28_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u32 * __stdcall16far Global_Resource_Manager_ctor_init_1010_7e40(u32 *param_1)
{
  u32 *puVar1;
  undefined *value;
  long lVar2;
  
  value = (undefined *)((ulong)param_1 >> 0x10);
  puVar1 = (u32 *)param_1;
  *param_1 = 0x0;
  puVar1[0x19f] = 0x0;
  *(undefined2 *)(puVar1 + 0x1a0) = 0x0;
  *(undefined2 *)((int)puVar1 + 0xe82) = 0x0;
  puVar1[0x3a1] = 0x0;
  puVar1[0x3a2] = 0x0;
  memset_far(puVar1 + 0x1,(int)value,0x0);
  memset_far(puVar1 + 0x8b,(int)value,0x0);
  memset_far(puVar1 + 0x115,(int)value,0x0);
  *(undefined1 *)((int)puVar1 + 0x682) = 0x0;
  *(undefined1 *)((int)puVar1 + 0xa82) = 0x0;
  p_GlobalResourceManager = (undefined *)puVar1;
  PTR_DAT_1050_0000_1050_14ce = value;
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  *(int *)(puVar1 + 0x3a2) = (int)lVar2;
  *(undefined2 *)((int)puVar1 + 0xe8a) = (int)((ulong)lVar2 >> 0x10);
  puVar1[0x3a1] = *(u32 *)((int)puVar1[0x3a2] + 0x64);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Global Resource Manager destructor. Iterates through ~400 slots (bitmaps, dialogs,
// collections), invokes virtual destructors, and clears the global singleton at
// 1050:14CC.

void __stdcall16far Global_Resource_Manager_dtor_logic_7EFC(void *this)
{
  void *obj;
  undefined4 *puVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 in_stack_00000006;
  int iStack_4;
  
  obj = (void *)*(undefined2 *)((int)this + 0x67c);
  if (*(u16 *)((int)this + 0x67e) != 0x0 || obj != NULL)
  {
    call_virtual_destructor_logic(obj,*(u16 *)((int)this + 0x67e));
    unaff_CS = 0x1000;
    free_if_not_null(obj);
  }
  for (iStack_4 = 0x0; iStack_4 < 0x8a; iStack_4 += 0x1)
  {
    puVar1 = (undefined4 *)*(int *)((int)this + iStack_4 * 0x4 + 0x4);
    iVar2 = *(int *)((int)this + iStack_4 * 0x4 + 0x6);
    if (iVar2 != 0x0 || puVar1 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
    }
    puVar1 = (undefined4 *)*(int *)((int)this + iStack_4 * 0x4 + 0x22c);
    iVar2 = *(int *)((int)this + iStack_4 * 0x4 + 0x22e);
    if (iVar2 != 0x0 || puVar1 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1);
    }
    puVar1 = (undefined4 *)*(int *)((int)this + iStack_4 * 0x4 + 0x454);
    iVar2 = *(int *)((int)this + iStack_4 * 0x4 + 0x456);
    if (iVar2 != 0x0 || puVar1 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1);
    }
  }
  free_if_not_null((void *)(void *)*_this);
  _p_GlobalResourceManager = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a specific sub-bitmap region from a managed resource collection. Updates
// the internal path if necessary and creates a new bitmap object for the sub-region.

void * __stdcall16far
Resource_Manager_Get_SubBitmap_by_Index_Logic(void *this,int index)
{
  int iVar1;
  void *pvVar2;
  int in_stack_00000008;
  
  if (*(int *)((char *)s_559_bmp_1050_1f9f + 0x1 + in_stack_00000008 * 0xa) != 0x0)
  {
    Resource_Manager_Switch_Active_Bitmap_Logic(this,index);
    if (*(long *)((int)this + 0x67c) != 0x0)
    {
      iVar1 = in_stack_00000008 * 0xa;
      pvVar2 = Bitmap_Object_Create_SubBitmap_Logic
                         ((void *)(void *)*(undefined4 *)((int)this + 0x67c),
                          CONCAT22(*(undefined2 *)
                                    ((char *)s_559_bmp_1050_1f9f + 0x7 + iVar1),
                                   *(undefined2 *)
                                    ((char *)s_560_bmp_1050_1fa7 + 0x1 + iVar1)),
                          *(int *)((char *)s_559_bmp_1050_1f9f + 0x5 + iVar1),
                          *(int *)((char *)s_559_bmp_1050_1f9f + 0x3 + iVar1));
      return pvVar2;
    }
  }
  return NULL;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a bitmap region. Validates path and resource ID, ensuring the backing
// bitmap is loaded before creating a new bitmap object for the requested region
// (offsets 0x18-0x1E).

void * __stdcall16far Resource_Manager_Get_Bitmap_Region_Logic(void *this,int index)
{
  void *pvVar1;
  int iVar2;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000008 * 0x10 + 0x16) != *(int *)((int)this + 0x680))
  {
    Resource_Manager_Update_Path_by_Type_Logic(this,index);
    Resource_Manager_Switch_Active_Bitmap_Logic(this,index);
    if (*(long *)((int)this + 0x67c) == 0x0)
    {
      return NULL;
    }
  }
  iVar2 = in_stack_00000008 * 0x10;
  pvVar1 = Bitmap_Object_Copy_Region_To_New_Bitmap
                     ((void *)(void *)*(undefined4 *)((int)this + 0x67c),
                      CONCAT22(*(undefined2 *)(iVar2 + 0x1c),
                               *(undefined2 *)(iVar2 + 0x1e)),*(int *)(iVar2 + 0x1a),
                      *(int *)(iVar2 + 0x18));
  return pvVar1;
}



// Retrieves or creates a resource entry (likely a bitmap) in one of three
// sub-collections based on a 32-bit type identifier. Handles lazy initialization of
// sub-collections if needed.

void * __stdcall16far
Resource_Manager_Get_or_Create_Entry_Logic(void *this,long type_id,int index)
{
  void *pvVar1;
  void *in_stack_00000006;
  undefined2 uStack_c;
  int iStack_a;
  
  if (type_id == 0x8000001)
  {
    iStack_a = (int)this + 0x22c;
    uStack_c = 0xfa;
  }
  else if (type_id == 0x8000002)
  {
    iStack_a = (int)this + 0x454;
    uStack_c = 0xfc;
  }
  else
  {
    iStack_a = (int)this + 0x4;
    uStack_c = 0x2;
  }
  if (*(long *)(index * 0x4 + iStack_a) == 0x0)
  {
    if ((0x0 < index) && (index < 0xa))
    {
      Resource_Manager_Bulk_Load_Sourced_SubBitmaps_Logic
                (this,in_stack_00000006,uStack_c,iStack_a,in_stack_00000006);
      return (void *)*(undefined2 *)(index * 0x4 + iStack_a);
    }
    if (index < 0xa)
    {
      return NULL;
    }
    if (0x7f < index)
    {
      return NULL;
    }
    if (*(long *)(iStack_a + 0x14) == 0x0)
    {
      Resource_Manager_Bulk_Load_Sourced_SubBitmaps_Logic
                (this,in_stack_00000006,uStack_c,iStack_a,in_stack_00000006);
    }
    Resource_Manager_Composite_SubBitmap_Logic(this,in_stack_00000006,iStack_a);
  }
  pvVar1 = Resource_Manager_Get_or_Clone_Bitmap_Logic(this,(int)in_stack_00000006);
  return pvVar1;
}



void __stdcall16far Resource_Manager_Set_Offset_E82_Logic(void *this,int value)
{
  undefined2 in_stack_00000008;
  
  *(undefined2 *)((int)this + 0xe82) = in_stack_00000008;
  return;
}



// Retrieves a bitmap resource from the cache. For specific resource IDs identified via
// complex checks, it returns a clone of the bitmap instead of the original instance.

void * __stdcall16far
Resource_Manager_Get_or_Clone_Bitmap_Logic(void *collection,int index)
{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined4 in_stack_00000008;
  uint in_stack_0000000c;
  
  uVar4 = (undefined2)((ulong)in_stack_00000008 >> 0x10);
  if ((int)in_stack_0000000c < 0x28)
  {
    if ((((int)in_stack_0000000c < 0x25) && (in_stack_0000000c != 0x23)) &&
       ((0x23 < in_stack_0000000c ||
        (((cVar1 = (char)in_stack_0000000c, cVar1 != '\v' && (cVar1 != '\x0f')) &&
         (cVar1 != '!')))))) goto LAB_1010_86b9;
  }
  else
  {
    if (in_stack_0000000c == 0x37) goto LAB_1010_8691;
    if ((int)in_stack_0000000c < 0x38)
    {
      if ((int)in_stack_0000000c < 0x33) goto LAB_1010_86b9;
      bVar5 = SBORROW2(in_stack_0000000c - 0x33,0x1);
      iVar3 = in_stack_0000000c - 0x34;
    }
    else
    {
      if (in_stack_0000000c == 0x49) goto LAB_1010_8691;
      if ((int)(in_stack_0000000c - 0x49) < 0x2a) goto LAB_1010_86b9;
      bVar5 = SBORROW2(in_stack_0000000c - 0x73,0x5);
      iVar3 = in_stack_0000000c - 0x78;
    }
    if (iVar3 != 0x0 && bVar5 == iVar3 < 0x0)
    {
LAB_1010_86b9:
      return (void *)*(undefined2 *)(in_stack_0000000c * 0x4 + (int)in_stack_00000008);
    }
  }
LAB_1010_8691:
  pvVar2 = Bitmap_Object_Subclass_Clone_Logic
                     ((void *)(void *)*(undefined4 *)
                                       (in_stack_0000000c * 0x4 + (int)in_stack_00000008
                                       ));
  return pvVar2;
}



// Processes a bitmap to apply or replace border/boundary colors. It scans pixel rows
// and replaces specific indices with the provided color parameter.

void __stdcall16far
Bitmap_Object_Apply_Border_Color_Logic
          (undefined2 param_1,undefined2 param_2,undefined1 param_3,void *param_4)
{
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  undefined2 in_DX;
  undefined2 uVar4;
  long lStack_14;
  undefined4 uStack_a;
  
  pvVar2 = get_with_lazy_init((void *)param_4);
  uStack_a = 0x0;
  do
  {
    if (*(long *)((int)pvVar2 + 0x8) <= uStack_a)
    {
      return;
    }
    uVar4 = uStack_a._2_2_;
    pvVar3 = Bitmap_Object_Get_Pixel_Address
                       ((void *)param_4,(int)((ulong)param_4 >> 0x10),(int)uStack_a);
    bVar1 = false;
    for (lStack_14 = 0x0; lStack_14 < *(long *)((int)pvVar2 + 0x4); lStack_14 += 0x1)
    {
      if (bVar1)
      {
LAB_1010_86fc:
        if (bVar1)
        {
          if (*(char *)((int)lStack_14 + (int)pvVar3) == -0x1)
          {
            *(undefined1 *)((int)lStack_14 + (int)pvVar3) = param_3;
            break;
          }
        }
      }
      else
      {
        if (*(char *)((int)lStack_14 + (int)pvVar3) == -0x1) goto LAB_1010_86fc;
        *(undefined1 *)((int)pvVar3 + (int)lStack_14 + -0x1) = param_3;
        bVar1 = true;
      }
    }
    uStack_a += 0x1;
  } while( true );
}
