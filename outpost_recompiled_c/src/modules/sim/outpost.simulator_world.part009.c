/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 9/56
 * Original lines (combined): 28677-31326
 * Boundaries: top-level declarations/definitions only
 */

u16 g_ResourceManager_Seg; /* Segment half of p_ResourceManager far ptr (1050:0ed2) */

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global string property table in segment 1050 (offset 06E0).
// Determines entity visibility in grouped reports based on property lookup.

int __stdcall16far UI_Report_Check_Entity_Visibility_Logic(void *this,long entity_ref)
{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  undefined2 in_stack_00000006;
  uint uStack_4;
  
  uVar4 = (undefined2)((ulong)entity_ref >> 0x10);
  if ((*(int *)((int)entity_ref + 0x1c) != 0x2) ||
     ((*(uint *)((int)entity_ref + 0x1e) & 0xff) != 0x0))
  {
    UI_Build_Item_Get_Construction_Manager_Logic_b58e((void *)entity_ref);
    lVar5 = Entity_Get_Indirect_ID_Logic(*(long *)((int)this + 0x6e));
    if (((int)lVar5 != 0x2) || ((char)((ulong)lVar5 >> 0x10) != '\0'))
    {
      iVar2 = UI_Get_U16_at_Offset_C_Logic
                        ((int)*(undefined4 *)((int)this + 0x6e),
                         (int)((ulong)*(undefined4 *)((int)this + 0x6e) >> 0x10),
                         entity_ref);
      iVar3 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar2);
      if ((iVar3 == 0x0) &&
         (iVar2 = search_array_for_value
                            ((int *)_p_StringPropertyTable,
                             (int)((ulong)_p_StringPropertyTable >> 0x10),iVar2),
         iVar2 == 0x0))
      {
        bVar1 = 0x0;
      }
      else
      {
        bVar1 = 0x1;
      }
      uStack_4 = (uint)bVar1;
      return uStack_4;
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global resource manager instance at 1050:0ED0.

void __stdcall16far Resource_Manager_Check_ID_Wrapper_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  Resource_Manager_Set_Active_ID_Logic(_p_ResourceManager,*(int *)((int)this + 0x8));
  return;
}



// A generic scalar deleting destructor that resets the vtable to the base object state.

void * __stdcall16far Base_Object_scalar_dtor_logic_2(void *this,byte flags)
{
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



undefined * __stdcall16far
Resource_Manager_Initialize_Global_Ptr_2024(undefined *param_1)
{
  g_ResourceManager_Seg = (u16)((ulong)param_1 >> 0x10); /* PTR_DAT_1050_0000_1050_0ed2: segment half of p_ResourceManager (1050:0ed2) */
  p_ResourceManager = (undefined *)param_1;
  *(undefined2 *)(p_ResourceManager + 0x124) = 0x0;
  memset_far(p_ResourceManager,(int)g_ResourceManager_Seg,0x0);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Iteratively invokes virtual destructors (vtable index 0) for 73 resource categories.
// Clears global manager pointer at 1050:0ED0.

void __stdcall16far Resource_Manager_dtor_logic(long this_ref)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iStack_4;
  
  Resource_Manager_Finalize_Active_Resource_Logic(this_ref);
  iStack_4 = 0x0;
  do
  {
    uVar4 = (undefined2)((ulong)this_ref >> 0x10);
    puVar1 = (undefined4 *)*(int *)(iStack_4 * 0x4 + (int)this_ref);
    iVar2 = *(int *)(iStack_4 * 0x4 + (int)this_ref + 0x2);
    if (iVar2 != 0x0 || puVar1 != NULL)
    {
      puVar3 = (undefined2 *)(undefined2 *)*puVar1;
      (*(code *)*puVar3)();
    }
    iStack_4 += 0x1;
  } while (iStack_4 < 0x49);
  _p_ResourceManager = 0x0;
  return;
}



// Ensures the resource manager is initialized and then sets an active or current
// resource ID at offset 0x124.

void __stdcall16far Resource_Manager_Set_Active_ID_Logic(long this_ref,int id)
{
  Resource_Manager_Finalize_Active_Resource_Logic(this_ref);
  *(int *)((int)this_ref + 0x124) = id;
  return;
}



// Checks for an active resource ID at offset 0x124. If present, it retrieves the
// corresponding object, invokes its virtual destructor, and clears the cache entry.
// This is used to ensure temporary or state-specific resources are properly released.

void __stdcall16far Resource_Manager_Finalize_Active_Resource_Logic(long this_ref)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)this_ref >> 0x10);
  iVar3 = (int)this_ref;
  if (*(int *)(iVar3 + 0x124) != 0x0)
  {
    iVar4 = *(int *)(iVar3 + 0x124) * 0x4;
    puVar1 = (undefined4 *)*(int *)(iVar4 + iVar3);
    iVar4 = *(int *)(iVar4 + iVar3 + 0x2);
    if (iVar4 != 0x0 || puVar1 != NULL)
    {
      puVar2 = (undefined2 *)(undefined2 *)*puVar1;
      (*(code *)*puVar2)();
    }
    *(undefined4 *)(*(int *)(iVar3 + 0x124) * 0x4 + iVar3) = 0x0;
    *(undefined2 *)(iVar3 + 0x124) = 0x0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer / Resource
// Initializes UI_Option_Selection_Dialog vtable to 1010:29C2.
// Registers global instance pointer at 1050:4230.
// Loads primary resource 0x56 and 16 sub-resources (IDs 0x56-0x65) using 1050:14CC.
// Allocates internal string table using global heap at 1050:5F2C.

void * __stdcall16far UI_Option_Selection_Dialog_ctor(void *this,int segment,int id)
{
  void *pvVar1;
  undefined *heap_ctx;
  undefined *reg_dx;
  int iVar2;
  undefined2 uVar3;
  int iStack_6;
  
  Build_Site_Object_Base_ctor((long)CONCAT22(segment,this),id);
  *(undefined4 *)((int)this + 0x1c) = 0x0;
  *(undefined2 *)((int)this + 0x20) = 0x0;
  *(undefined2 *)((int)this + 0x22) = 0x0;
  *(undefined2 *)((int)this + 0x24) = 0x0;
  *(undefined2 *)((int)this + 0x26) = 0x0;
  *(char **)CONCAT22(segment,this) = (char *)s_add16_wav_1050_2bdc + 0x8;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  p_GlobalPaletteObject = this;
  PTR_DAT_1050_0000_1050_4232 = (undefined *)segment;
  Build_Site_Object_Initialize_Vtable_and_Resource((long)CONCAT22(segment,this),0x56);
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(undefined2 *)((int)this + 0x1c) = pvVar1;
  *(undefined2 *)((int)this + 0x1e) = reg_dx;
  if (_g_AllocatedBlock_Offset == NULL)
  {
    heap_ctx = init_memory_allocator();
  }
  else
  {
    reg_dx = g_AllocatedBlock_Segment;
    heap_ctx = g_AllocatedBlock_Offset;
  }
  pvVar1 = alloc_with_hooks(0x40,0x1,heap_ctx);
  *(undefined2 *)((int)this + 0x28) = pvVar1;
  *(undefined2 *)((int)this + 0x2a) = reg_dx;
  for (iStack_6 = 0x0; iStack_6 < 0x10; iStack_6 += 0x1)
  {
    pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    uVar3 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x28) >> 0x10);
    iVar2 = (int)*(undefined4 *)((int)this + 0x28);
    *(undefined2 *)(iVar2 + iStack_6 * 0x4) = pvVar1;
    *(undefined2 *)(iVar2 + iStack_6 * 0x4 + 0x2) = reg_dx;
  }
  return this;
}



// Targeted Scan Finding: Far Pointer
// Copies 124-byte (0x7C) simulation state entry from table starting at 1010:0ED4.

void __stdcall16far
UI_Planet_View_Copy_State_Table_Entry_Logic_maybe
          (undefined2 param_1,undefined2 param_2,int param_3,undefined4 *param_4)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)(param_3 * 0x7c + 0xed4);
  puVar5 = (undefined4 *)param_4;
  for (iVar4 = 0x1f; iVar4 != 0x0; iVar4 += -0x1)
  {
    puVar2 = puVar5;
    puVar5 = puVar5 + 0x1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 0x1;
    *puVar2 = *puVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// References global resource manager at 1050:0ED0 to retrieve resource 3.
// Loads report component string ID 0x5EB using 1050:14CC.
// Concatenates status suffix from 1050:11C8.

char * __stdcall16far UI_Format_Complex_Resource_String_Logic_maybe(void)
{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined2 in_stack_0000fff6;
  
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  uVar3 = (undefined2)((ulong)lVar5 >> 0x10);
  pcVar1 = allocate_memory(CONCAT22(in_stack_0000fff6,0x80));
  uVar4 = uVar3;
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(pcVar1,0x80),
             CONCAT22(0x5eb,uVar3));
  strcat_append((char *)CONCAT22(uVar3,pcVar1),(char *)0x105011c8);
  pcVar2 = Resource_Manager_Get_Current_Entity_Name_Logic();
  strcat_append((char *)CONCAT22(uVar3,pcVar1),(char *)CONCAT22(uVar4,pcVar2));
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer / Resource
// Initializes UI_Window_Base vtable to 1010:36DA.
// References Display Adapter resource 0x48 via 1050:0ED0 to calculate screen-centered
// coordinates.
// Initializes 40-byte internal state array.

void * __stdcall16far UI_Window_Base_ctor_init_36DA_Logic(void *this,int segment,int id)
{
  long lVar1;
  int *out2;
  int local_6;
  int local_4;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined2 *)((int)this + 0x16) = 0x0;
  *(undefined2 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)((int)this + 0x22) = 0x0;
  *(undefined2 *)((int)this + 0x24) = 0x0;
  *(undefined2 *)((int)this + 0x26) = 0x0;
  *(undefined2 *)((int)this + 0x28) = 0x0;
  *(undefined4 *)((int)this + 0x52) = 0x0;
  *(undefined4 *)((int)this + 0x56) = 0x0;
  *(undefined2 *)((int)this + 0x5a) = 0x0;
  *(undefined2 *)((int)this + 0x5e) = 0x0;
  *(undefined2 *)((int)this + 0x5c) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x36da;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  out2 = &local_6;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  unpack_word_pair((void *)((int)lVar1 + 0xe),(int *)((ulong)lVar1 >> 0x10),out2);
  *(undefined4 *)((int)this + 0xe) = 0x19001db;
  *(int *)((int)this + 0xa) = 0x140 - (*(int *)((int)this + 0xe) / 0x2 - local_4);
  *(int *)((int)this + 0xc) = 0xf0 - (*(int *)((int)this + 0x10) / 0x2 - local_6);
  *(undefined4 *)((int)this + 0x1a) = 0xa006e;
  *(undefined4 *)((int)this + 0x1e) = 0xa012c;
  memset_far((void *)((int)this + 0x2a),segment,0x0);
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes Collection_Object_Subclass vtable to 1010:3B3E (base 1010:3B5E).

void * __stdcall16far Collection_Object_Subclass_ctor_3B3E(void *this)
{
  u16 in_stack_00000006;
  
  Collection_Object_Base_ctor_3B5E(this);
  *(undefined4 *)((int)this + 0x16) = 0x0;
  *_this = (char *)s_6_0_1050_3b3d + 0x1;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes Resource_Category1_Object vtable to 1010:3D6A.
// Initializes embedded sub-object at offset 10 with vtable 1010:3D7A (base 1008:3AA8).

void * __stdcall16far Resource_Category1_Object_ctor(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0xc) = 0x1008;
  *(undefined2 *)((int)this + 0xa) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0xc) = 0x1008;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x12) = 0x0;
  *(undefined2 *)((int)this + 0x14) = 0x0;
  *(undefined2 *)((int)this + 0x16) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x3d6a;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0xa) = 0x3d7a;
  *(undefined2 *)((int)this + 0xc) = 0x1010;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets Resource_Category1_Object vtables to 1010:3D6A and 1010:3D7A during
// destruction.
// Invokes virtual destructor (index 0) for sub-object at offset 0xE.

void __stdcall16far Resource_Category1_Object_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 in_stack_00000006;
  undefined4 uStack_e;
  
  *_this = 0x3d6a;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0xa) = 0x3d7a;
  *(undefined2 *)((int)this + 0xc) = 0x1010;
  if (*(int *)((int)this + 0x10) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar1)();
  }
  if (_this == NULL)
  {
    puVar2 = NULL;
    in_stack_00000006 = 0x0;
  }
  else
  {
    puVar2 = (undefined2 *)((int)this + 0xa);
  }
  uStack_e = (undefined2 *)CONCAT22(in_stack_00000006,puVar2);
  *uStack_e = (char *)s_1_1050_389a;
  puVar2[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(this);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// Loads resource object using global string manager at 1050:14CC.
// Indirectly calls virtual destructor (index 0) of the existing resource string.

void __stdcall16far Resource_Category1_Update_String_Logic(void *this,int res_id)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 extraout_DX;
  undefined2 uVar3;
  undefined2 in_stack_00000008;
  
  *(undefined2 *)((int)this + 0x14) = in_stack_00000008;
  uVar3 = 0x0;
  if (*(int *)((int)this + 0x10) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar1)();
    uVar3 = extraout_DX;
  }
  pvVar2 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(undefined2 *)((int)this + 0xe) = pvVar2;
  *(undefined2 *)((int)this + 0x10) = uVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Registers a resource tracking object with the global Simulator. It uses offset 0x12
// as the resource identifier.

void __stdcall16far Simulator_Register_Resource_Tracker_Wrapper(long this_ref)
{
  void *parent;
  
  if (this_ref == 0x0)
  {
    parent = NULL;
  }
  else
  {
    parent = (void *)((int)this_ref + 0xa);
  }
  Simulator_Add_Resource_Tracker
            ((void *)_PTR_DAT_1050_0000_1050_0388,
             (int)((ulong)_PTR_DAT_1050_0000_1050_0388 >> 0x10),
             (ulong)*(uint *)((int)this_ref + 0x12),parent);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Sends a signal or update notification to a resource tracker within the Simulator
// context.

void __stdcall16far Simulator_Signal_Resource_Tracker_Wrapper(long this_ref)
{
  int iVar1;
  undefined2 uVar2;
  
  if (_PTR_DAT_1050_0000_1050_0388 != NULL)
  {
    if (this_ref == 0x0)
    {
      iVar1 = 0x0;
      uVar2 = 0x0;
    }
    else
    {
      iVar1 = (int)this_ref + 0xa;
      uVar2 = this_ref._2_2_;
    }
    Simulator_Find_and_Signal_Resource_Tracker
              ((void *)_PTR_DAT_1050_0000_1050_0388,
               (ulong)*(uint *)((int)this_ref + 0x12),CONCAT22(uVar2,iVar1));
  }
  return;
}



// Event handler for resource updates. If the update type is 2, it signals the simulator
// and notifies all registered UI listeners.

void __stdcall16far
Resource_Tracker_On_Update_Logic(int offset,int segment,int update_type)
{
  if (update_type == 0x2)
  {
    Simulator_Signal_Resource_Tracker_Wrapper
              ((long)CONCAT22(segment,(void *)(offset + -0xa)));
    UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)(offset + -0xa),segment);
  }
  return;
}



void Resource_Category1_dtor_Wrapper_3d38
               (u16 param_1,int param_2,u16 param_3,byte param_4)
{
  Resource_Category1_dtor_Scalar_Deleting_3d44((void *)(param_2 + -0xa),param_3,param_4)
  ;
  return;
}



void * __stdcall16far
Resource_Category1_dtor_Scalar_Deleting_3d44(void *param_1,u16 param_2,byte param_3)
{
  Resource_Category1_Object_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Resource / Far Pointer
// Initializes Resource_Category2_Object vtable to 1010:3E2C.
// Loads a resource object using global manager at 1050:14CC.

void * __stdcall16far Resource_Category2_Object_ctor(void *this,int segment,int id)
{
  void *pvVar1;
  undefined2 reg_dx;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(void ***)CONCAT22(segment,this) = (void **)&PTR_s_0_000_1050_3bbb_1050_3e2c;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(undefined2 *)((int)this + 0xa) = pvVar1;
  *(undefined2 *)((int)this + 0xc) = reg_dx;
  return this;
}



// Destructor for Resource Category 2 objects. Frees the descriptive string and calls
// the base destructor.

void __stdcall16far Resource_Category2_Object_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = (void **)&PTR_s_0_000_1050_3bbb_1050_3e2c;
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



void * __stdcall16far
Resource_Category2_dtor_Scalar_Deleting_3e06(void *param_1,u16 param_2,byte param_3)
{
  Resource_Category2_Object_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer / Resource
// Initializes UI_Complex_Dialog vtable to 1010:4A46 and an embedded base vtable at
// offset 0x20 to 1010:4A82 (base 1008:3AA8).
// Registers global instance pointer at 1050:4230.
// Loads a resource object using global string manager at 1050:14CC.
// Performs 16-slot far-pointer array initialization (memset_far).

void * __stdcall16far UI_Complex_Dialog_ctor_4A46(void *this,int id)
{
  void *pvVar1;
  undefined2 uVar2;
  long lVar3;
  int in_stack_00000008;
  
  lVar3 = UI_Metric_Manager_Object_ctor_init
                    ((long)CONCAT22(id,this),0x6,in_stack_00000008);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  *(undefined2 *)((int)this + 0x20) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x22) = 0x1008;
  *(undefined2 *)((int)this + 0x20) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0x22) = 0x1008;
  *(undefined2 *)((int)this + 0x24) = 0x0;
  *(undefined4 *)((int)this + 0x66) = 0x0;
  *(undefined2 *)((int)this + 0x6a) = 0x4;
  *(undefined4 *)((int)this + 0x6c) = 0x0;
  *(undefined4 *)((int)this + 0x70) = 0x0;
  *(undefined2 *)((int)this + 0x74) = 0x0;
  pack_3words_alt((void *)((int)this + 0x76),id,0x0,0x3);
  *(undefined4 *)((int)this + 0x7c) = 0x0;
  *_this = 0x4a46;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0x20) = 0x4a82;
  *(undefined2 *)((int)this + 0x22) = 0x1010;
  memset_far((void *)((int)this + 0x26),id,0x0);
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(undefined2 *)((int)this + 0x66) = pvVar1;
  *(undefined2 *)((int)this + 0x68) = uVar2;
  Build_Site_Update_From_Resources((long)CONCAT22(id,this));
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a 32-bit data value (likely coordinates or status) from a resource tracker
// managed by the simulator.

long __stdcall16far Resource_Tracker_Get_Data_Logic(void *this)
{
  undefined2 uVar1;
  void *pvVar2;
  undefined2 in_stack_00000006;
  
  pvVar2 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                      (void *)*(undefined4 *)((int)this + 0x6c));
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)pvVar2 + 0xe),*(undefined2 *)((int)pvVar2 + 0xc))
  ;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource / Vtable
// References global state flags at 1050:3960 and resource manager at 1050:0ED0.
// Instantiates UI_SubDialog with vtable at 1040:8520.
// Performs indirect call through [uStack_10] vtable offset 0x74.
// Updates active resource ID at 1050:0ED0.

int __stdcall16far UI_HitTest_Rect_Collection_Logic(void *this,POINT16 *pt)
{
  undefined2 *puVar1;
  bool bVar2;
  BOOL16 BVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  long context;
  POINT16 *in_stack_00000008;
  undefined2 in_stack_0000ffec;
  undefined4 uStack_10;
  int iStack_6;
  
  iStack_6 = 0x0;
  bVar2 = false;
  do
  {
    if (*(int *)((int)this + 0x74) <= iStack_6)
    {
LAB_1010_413e:
      if ((bVar2) && (0x3 < (int)PTR_DAT_1050_0000_1050_3960))
      {
        context = Resource_Manager_Get_Resource_by_ID_Logic
                            (_p_ResourceManager,iStack_6 + 0xc);
        uVar7 = (uint)((ulong)context >> 0x10);
        iVar4 = UI_Main_View_Controller_Get_Value_at_Offset_5E_Logic(context);
        if (iVar4 == 0x0)
        {
          uVar9 = 0x1000;
          pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffec,0xb4));
          uVar8 = uVar7 | (uint)pvVar5;
          if (uVar8 == 0x0)
          {
            puVar6 = NULL;
            uVar8 = 0x0;
          }
          else
          {
            uVar9 = 0x1040;
            puVar6 = (undefined4 *)
                     UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                               (pvVar5,uVar7,g_ParentHWND,0x30,0x2,0x643,0x645);
          }
          uStack_10 = (undefined4 *)CONCAT22(uVar8,puVar6);
          puVar1 = (undefined2 *)((int)*uStack_10 + 0x74);
          (*(code *)*puVar1)(uVar9,puVar6,uVar8);
          Resource_Manager_Set_Active_ID_Logic(_p_ResourceManager,iStack_6 + 0xc);
          bVar2 = false;
        }
      }
      if (bVar2)
      {
        return iStack_6;
      }
      return -0x1;
    }
    BVar3 = PtInRect(*in_stack_00000008,
                     (void *)CONCAT22(*(undefined2 *)((int)this + 0x72),
                                      (void *)((iStack_6 * 0x10 +
                                               *(int *)((int)this + 0x24)) * 0x8 +
                                              *(int *)((int)this + 0x70))));
    if (BVar3 != 0x0)
    {
      bVar2 = true;
      goto LAB_1010_413e;
    }
    iStack_6 += 0x1;
  } while( true );
}
