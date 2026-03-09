/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 8/56
 * Original lines (combined): 26077-28657
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References Resource Manager at 1050:0ED0.
// Accesses global difficulty setting at 1050:13AE (PTR_DAT_1050_13ae).
// Performs randomized state transition checks for relationship links.

int __stdcall16far
UI_Relationship_Manager_Should_Update_Link_Probability_Check
          (int segment1,int segment2,void *link_ptr)
{
  uint uVar1;
  int iVar2;
  u32 uVar3;
  undefined2 in_stack_0000000a;
  int iStack_14;
  ulong uStack_10;
  undefined4 uStack_6;
  
  uVar3 = Simulator_Global_Get_Current_Tick_8326();
  uStack_6 = CONCAT22(((int)(uVar3 >> 0x10) - *(int *)((int)link_ptr + 0x10)) -
                      (uint)((uint)uVar3 < *(uint *)((int)link_ptr + 0xe)),
                      (uint)uVar3 - *(uint *)((int)link_ptr + 0xe));
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  uStack_10 = 0x0;
  if (((int)g_ModeVersion_13AE < 0x1) || (SBORROW2((int)g_ModeVersion_13AE,0x1)))
  goto LAB_1008_ea2b;
  if ((undefined **)g_ModeVersion_13AE == (undefined **)&p_CurrentHeapContext ||
      (int)(g_ModeVersion_13AE + -0x1) < 0x1)
  {
    if (*(int *)((int)link_ptr + 0x12) == 0x0)
    {
LAB_1008_ea20:
      uVar1 = 0x1e;
    }
    else
    {
      uVar1 = 0xa;
    }
  }
  else if (g_ModeVersion_13AE ==
           (undefined *)((int)(undefined **)&p_CurrentHeapContext + 0x1))
  {
    if (*(int *)((int)link_ptr + 0x12) == 0x0)
    {
      uVar1 = 0x28;
    }
    else
    {
      uVar1 = 0x14;
    }
  }
  else
  {
    if ((u16 *)g_ModeVersion_13AE != (u16 *)&p_LastAllocatedBlock) goto LAB_1008_ea2b;
    if (*(int *)((int)link_ptr + 0x12) != 0x0) goto LAB_1008_ea20;
    uVar1 = 0x32;
  }
  uStack_10 = (ulong)uVar1;
LAB_1008_ea2b:
  if (uStack_10 < uStack_6)
  {
    iVar2 = random_int_range(0x1,0x64);
    iStack_14 = 0x0;
    if (*(int *)((int)link_ptr + 0xc) == 0x2)
    {
      iStack_14 = 0x32;
    }
    else if (*(int *)((int)link_ptr + 0xc) == 0x3)
    {
      iStack_14 = 0x19;
    }
    if (iVar2 < iStack_14)
    {
      return 0x1;
    }
  }
  return 0x0;
}



// A simple wrapper for the base scalar deleting destructor of a UI element.

void * __stdcall16far UI_Element_scalar_dtor_base_wrapper(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Base_Object_dtor_2014_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Far Pointer
// Returns a far pointer into a 16-byte element property table starting at 1050:0D0E.

void * __stdcall16far get_table_D0E_entry_ptr(int index)
{
  int in_stack_00000008;
  
  return (void *)(in_stack_00000008 * 0x10 + 0xd0e);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References Resource Manager at 1050:0ED0 and global state at 1050:65E2.
// Accesses global property tables at 1050:0D04 (Divisors) and 1050:0D08 (Values).

int __stdcall16far res_manager_get_randomized_table_value_logic(void *this,int index)
{
  int iVar1;
  ulong uVar2;
  int in_stack_00000008;
  
  *(int *)((int)this + 0xa) = in_stack_00000008;
  iVar1 = 0x0;
  if (in_stack_00000008 != 0x0)
  {
    Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
    uVar2 = Resource_Manager_Get_Global_65E2_Pointer();
    iVar1 = *(int *)(((int)(uVar2 % *(ulong *)(*(int *)((int)this + 0xa) * 0x10 + 0xd04)
                           ) + *(int *)((int)this + 0xa) * 0x8) * 0x2 + 0xd08);
  }
  return iVar1;
}



// A simple wrapper for the base scalar deleting destructor of a UI element. Duplicate
// instance.

void * __stdcall16far UI_Element_scalar_dtor_base_wrapper_2(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Base_Object_dtor_2014_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References global resource manager at 1050:0ED0 and bitmask context at 1050:0DF6.
// Performs indirect call through [this] vtable offset 0x18.
// Updates simulation state bitflags based on table index.

void __stdcall16far
Simulation_Update_BitFlags_Logic(void *this,int low,int high,int shift,int table_idx)
{
  undefined2 *puVar1;
  int id;
  void *pvVar2;
  char cVar3;
  uint reg_dx;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (0x0 < table_idx)
  {
    if (_PTR_DAT_1050_0000_1050_0df6 == NULL)
    {
      puVar1 = (undefined2 *)((int)*_this + 0x18);
      id = (*(code *)*puVar1)();
      _PTR_DAT_1050_0000_1050_0df6 =
           (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,id);
      reg_dx = (uint)((ulong)_PTR_DAT_1050_0000_1050_0df6 >> 0x10);
    }
    pvVar2 = UI_Element_Get_Indexed_FarPtr_from_Offset_5C_Logic
                       ((void *)_PTR_DAT_1050_0000_1050_0df6,
                        (int)((ulong)_PTR_DAT_1050_0000_1050_0df6 >> 0x10));
    uVar4 = high + 0x1;
    uVar5 = shift + (uint)(0xfffe < (uint)high);
    for (cVar3 = ((char)table_idx + -0x1) * '\x04'; cVar3 != '\0'; cVar3 += -0x1)
    {
      bVar6 = CARRY2(uVar4,uVar4);
      uVar4 *= 0x2;
      uVar5 = uVar5 * 0x2 + (uint)bVar6;
    }
    UI_Element_Set_Indexed_FarPtr_at_Offset_5C_Logic
              ((void *)_PTR_DAT_1050_0000_1050_0df6,
               (int)((ulong)_PTR_DAT_1050_0000_1050_0df6 >> 0x10),uVar4 | (uint)pvVar2,
               uVar5 | reg_dx);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// Loads resource string using global manager at 1050:14CC based on ID from
// sub-component at offset 0x16.

char * __stdcall16far get_resource_string_from_offset_16_logic(void *this)
{
  char *pcVar1;
  undefined2 in_stack_00000006;
  
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),
                      *(int *)*(undefined4 *)((int)this + 0x16));
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool __stdcall16far
Simulator_Validate_Entity_Type_eeac(u16 param_1,u16 param_2,u32 param_3)
{
  int id;
  char cVar1;
  undefined1 uVar3;
  long lVar4;
  u32 local_a;
  u16 local_6;
  u16 local_4;
  uint uVar2;
  
  uVar2 = *(uint *)((int)param_3 + 0x12);
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  id = (int)lVar4;
  if (uVar2 == 0x7d)
  {
    Simulator_Validate_ID_8000001_Logic(id);
    if (uVar2 != 0x0)
    {
      return false;
    }
    Simulator_Validate_ID_8000001_Logic(id);
    if (uVar2 != 0x0)
    {
      return false;
    }
    uVar2 = 0x0;
  }
  else if (uVar2 < 0x7e)
  {
    cVar1 = (char)uVar2;
    uVar3 = (undefined1)(uVar2 >> 0x8);
    uVar2 = CONCAT11(uVar3,cVar1 + -0x73);
    if (((char)(cVar1 + -0x73) != '\0') &&
       (uVar2 = CONCAT11(uVar3,cVar1 + -0x77), (char)(cVar1 + -0x77) != '\0'))
    {
      uVar2 = CONCAT11(uVar3,cVar1 + -0x79);
    }
  }
  Simulator_Validate_ID_8000001_Logic(id);
  return uVar2 == 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes Game_Settings_Manager vtable to 1010:02C8.
// References global resource manager at 1050:0ED0 to retrieve resource 0x48.
// Unpacks configuration data using unpack_word_pair.

void * __stdcall16far Game_Settings_Manager_ctor(void *this,int segment,int id)
{
  long lVar1;
  int *out2;
  
                // Segment:    3
                // Offset:     00015420
                // Length:     ee9f
                // Min Alloc:  ee9f
                // Flags:      0d50
                //     Code
                //     Moveable
                //     Preload
                //     Impure (Non-shareable)
                // 
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x2c8;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  out2 = (int *)((int)this + 0xc);
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  unpack_word_pair((void *)((int)lVar1 + 0xe),(int *)((ulong)lVar1 >> 0x10),out2);
  return this;
}



// Translates abstract map or grid indices into pixel coordinates for the UI. It uses a
// lookup table at 0xE02 to calculate offsets based on the target coordinate system.

void __stdcall16far UI_Map_Coordinate_Translation_Logic(void *src,void *dest,int type)
{
  int iVar1;
  int iVar2;
  undefined2 in_stack_0000000a;
  int in_stack_0000000c;
  
  iVar2 = *(int *)(in_stack_0000000c * 0x4 + 0xe02) * 0x4;
  iVar1 = *(int *)(iVar2 + 0xdfc);
  *(int *)(type + 0x6) =
       *(int *)(in_stack_0000000c * 0x4 + 0xe04) * 0x28 + *(int *)(iVar2 + 0xdfa) +
       *(int *)((int)src + 0xa);
  *(int *)(type + 0x8) = *(int *)((int)src + 0xc) + iVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks the system tick count and returns false if fewer than 100 ticks have elapsed
// since initialization.

int __stdcall16far win16_Check_Min_Runtime_Ticks_Logic(void)
{
  u32 uVar1;
  
  uVar1 = Simulator_Global_Get_Current_Tick_8326();
  if (((int)(uVar1 >> 0x10) == 0x0) && ((uint)uVar1 < 0x64))
  {
    return 0x0;
  }
  return 0x1;
}



// Targeted Scan Finding: Vtable
// Initializes resource event tracker with vtable 1010:0EA8 (replaces base 1008:389A).
// Performs indirect call through [this + 10] vtable offset 8 to append event.

void __stdcall16far
Turn_Manager_Push_Resource_Event_Logic(void *this,long value,int type)
{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  long lVar7;
  int in_stack_00000006;
  undefined2 in_stack_0000ffe6;
  undefined4 uStack_12;
  undefined2 *puStack_e;
  undefined1 local_a [0x8];
  
  if (type == 0xc)
  {
    if (*(int *)((int)this + 0xe) != 0x0)
    {
      return;
    }
    *(undefined2 *)((int)this + 0xe) = 0x1;
  }
  else if (type == 0xd)
  {
    if (*(int *)((int)this + 0x10) != 0x0)
    {
      return;
    }
    *(undefined2 *)((int)this + 0x10) = 0x1;
  }
  else if (type == 0x12)
  {
    return;
  }
  UI_System_Set_State_Flag_and_Notify(this,in_stack_00000006,0x1);
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  do
  {
    lVar7 = get_next_list_item(local_a);
    uVar4 = (uint)((ulong)lVar7 >> 0x10);
    uVar2 = (uint)lVar7;
    uVar5 = uVar4 | uVar2;
    if (uVar5 == 0x0)
    {
      puVar3 = allocate_memory(CONCAT22(in_stack_0000ffe6,0xa));
      uStack_12 = (undefined2 *)CONCAT22(uVar5,puVar3);
      if (uVar5 == 0x0 && puVar3 == NULL)
      {
        puStack_e = NULL;
      }
      else
      {
        *uStack_12 = (char *)s_1_1050_389a;
        puVar3[0x1] = 0x1008;
        *uStack_12 = 0xea8;
        puVar3[0x1] = 0x1010;
        puStack_e = uStack_12;
      }
      uVar6 = (undefined2)((ulong)puStack_e >> 0x10);
      puVar3 = (undefined2 *)puStack_e;
      puVar3[0x2] = type;
      *(long *)(puVar3 + 0x3) = value;
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x8);
      (*(code *)*puVar1)(0x1000,*(undefined4 *)((int)this + 0xa),puVar3,uVar6);
      return;
    }
  } while ((*(int *)(uVar2 + 0x4) != type) || (*(long *)(uVar2 + 0x6) != value));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References Resource Manager at 1050:0ED0 and global state at 1050:5748.
// Performs cross-entity relationship checks between 0x4000001 and 0x4000002.
// Updates global ship-link status flag at 1050:0EA8.
// Returns far pointer into a flag entry table starting at 1010:0EA2.

void * __stdcall16far UI_System_Update_Ship_Link_Flag_and_Get_Entry_Ptr(int index)
{
  int iVar1;
  void *pvVar2;
  int in_stack_00000008;
  long id1;
  long id2;
  
  PTR_DAT_1050_0000_1050_0ea8 = NULL;
  id2 = 0x4000001;
  id1 = 0x4000002;
  pvVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3b);
  iVar1 = UI_Relationship_Manager_Is_Link_Active_Type1_Logic((void *)pvVar2,id1,id2);
  if (iVar1 != 0x0)
  {
    pvVar2 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x4000002)
    ;
    if (*(long *)((int)pvVar2 + 0x200) == 0x8000002)
    {
      PTR_DAT_1050_0000_1050_0ea8 = (undefined *)0x1;
    }
  }
  return (void *)((in_stack_00000008 + -0x1) * 0x8 + 0xea2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References global resource manager at 1050:0ED0 and simulator state at 1050:5748.
// Constructs full resource paths by appending component-specific filenames.

void __stdcall16far
Path_Manager_Construct_Resource_Path
          (int arg1,int arg2,char *path_comp,char **out_str,long entity_id)
{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int reg_dx;
  undefined2 uVar7;
  long lVar8;
  void *this_ptr;
  char *pcVar9;
  void *in_stack_00000010;
  undefined2 in_stack_0000ffde;
  undefined4 uStack_12;
  char *pcStack_a;
  int iStack_8;
  
  bVar3 = false;
  bVar2 = false;
  bVar1 = path_comp[0x1];
  if (bVar1 == 0x70)
  {
LAB_1010_0a06:
    bVar3 = false;
    bVar2 = true;
  }
  else if (bVar1 < 0x71)
  {
    if (bVar1 != 0x43)
    {
      if (bVar1 == 0x50) goto LAB_1010_0a06;
      if (bVar1 != 0x63) goto LAB_1010_09db;
    }
    bVar3 = true;
    bVar2 = false;
  }
LAB_1010_09db:
  pcStack_a = NULL;
  iStack_8 = 0x0;
  if (bVar2)
  {
    lVar8 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    uVar7 = (undefined2)((ulong)lVar8 >> 0x10);
    pcVar9 = (char *)CONCAT22(*(undefined2 *)((int)lVar8 + 0x6e),
                              (char *)*(undefined2 *)((int)lVar8 + 0x6c));
  }
  else
  {
    if (!bVar3) goto LAB_1010_0a36;
    this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                         ((u16)_p_SimulatorGlobalState,
                          (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                          in_stack_00000010);
    pcVar9 = UI_Component_Get_FarPtr_at_1FA(this_ptr);
  }
  reg_dx = (int)((ulong)pcVar9 >> 0x10);
  pcStack_a = (char *)pcVar9;
  iStack_8 = reg_dx;
LAB_1010_0a36:
  if (iStack_8 != 0x0 || pcStack_a != NULL)
  {
    uVar4 = strlen_get_length(*(char **)entity_id);
    uVar5 = strlen_get_length((char *)CONCAT22(iStack_8,pcStack_a));
    pcVar6 = allocate_memory(CONCAT22(in_stack_0000ffde,uVar5 + 0xa + uVar4));
    uStack_12 = (char *)CONCAT22(reg_dx,pcVar6);
    *_path_comp = '\0';
    strcpy_optimized((char *)CONCAT22(reg_dx,pcVar6),*(char **)entity_id);
    strcat_append((char *)CONCAT22(reg_dx,pcVar6),(char *)CONCAT22(iStack_8,pcStack_a));
    strcat_append((char *)CONCAT22(reg_dx,pcVar6),
                  (char *)CONCAT22(out_str,path_comp + 0x2));
    free_if_not_null((void *)*(void **)entity_id);
    *(char **)entity_id = uStack_12;
  }
  return;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Special_Manager_Subclass vtable to 1010:0F0C.
// Registers global instance pointer at 1050:4230.
// Loads resource ID 0xFF via Build_Site_Object_Initialize_Vtable_and_Resource.

void * __stdcall16far
UI_Special_Manager_Subclass_ctor_init_F0C(void *this,int segment,int id)
{
  Build_Site_Object_Base_ctor((long)CONCAT22(segment,this),id);
  *(undefined2 *)CONCAT22(segment,this) = 0xf0c;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  p_GlobalPaletteObject = this;
  PTR_DAT_1050_0000_1050_4232 = (undefined *)segment;
  Build_Site_Object_Initialize_Vtable_and_Resource((long)CONCAT22(segment,this),0xff);
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Report_List_Manager vtable to 1010:191A.
// References Resource Manager at 1050:0ED0 to retrieve resource 3.

void * __stdcall16far
UI_Report_List_Manager_ctor_init_191A_Logic(void *this,int segment,int id)
{
  long lVar1;
  
  UI_Window_Base_ctor_init_36DA_Logic(this,segment,id);
  *(undefined4 *)((int)this + 0x60) = 0x0;
  *(undefined4 *)((int)this + 0x64) = 0x0;
  *(undefined2 *)((int)this + 0x68) = 0x0;
  *(undefined4 *)((int)this + 0x6a) = 0x0;
  *(char **)CONCAT22(segment,this) = (char *)s_648_bmp_1050_1919 + 0x1;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  *(undefined2 *)((int)this + 0x6a) = (int)lVar1;
  *(undefined2 *)((int)this + 0x6c) = (int)((ulong)lVar1 >> 0x10);
  return this;
}



u16 __stdcall16far UI_Main_View_Populate_Entity_Polygons_Logic(u32 *param_1)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  void *pvVar3;
  int iVar4;
  u32 *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  void *pvVar9;
  void *pvVar10;
  undefined4 uVar11;
  u32 *puVar12;
  void *pvVar13;
  u32 *puVar14;
  u16 local_26;
  u32 local_24;
  u16 local_20;
  u16 local_1e;
  u32 local_1c;
  u32 local_18;
  u16 local_14;
  u16 local_12;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (u32 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x38);
  puVar14 = puVar5;
  uVar2 = (*(code *)*puVar1)();
  *(undefined2 *)(puVar5 + 0x1a) = uVar2;
  if ((puVar5[0x18] != 0x0) && ((int)puVar5[0x1a] == 0x1))
  {
    return 0x1;
  }
  if ((int)puVar5[0x1a] == 0x0)
  {
    return 0x0;
  }
  pvVar9 = Simulator_World_Iterator_ctor_init_dc52
                     ((u16 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x700);
  uVar2 = (undefined2)((ulong)pvVar9 >> 0x10);
  pvVar3 = allocate_memory(CONCAT22(puVar14,(int)puVar5[0x1a] * 0x18));
  *(void **)(puVar5 + 0x18) = pvVar3;
  *(undefined2 *)((int)puVar5 + 0x62) = uVar2;
  local_1c = CONCAT22(uVar2,(int)puVar5[0x18]);
  local_1e = (u16)puVar5[0x1a];
  do
  {
    do
    {
      pvVar9 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                         ((u16 *)CONCAT22(unaff_SS,&local_14));
      uVar2 = 0x0;
      if (pvVar9 == NULL) goto LAB_1010_10ca;
      iVar6 = (int)*param_1;
      iVar4 = (*(code *)*(undefined2 *)(iVar6 + 0x40))(0x1028,param_1,pvVar9);
    } while (iVar4 == 0x0);
    pvVar10 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(pvVar9);
    uVar11 = (*(code *)*(undefined2 *)(iVar6 + 0x2c))(0x1028,param_1,pvVar9);
    uVar8 = (undefined2)(local_1c >> 0x10);
    iVar4 = (int)local_1c;
    *(int *)local_1c = (int)uVar11;
    *(undefined2 *)(iVar4 + 0x2) = (int)((ulong)uVar11 >> 0x10);
    puVar12 = param_1;
    pvVar13 = pvVar9;
    uVar11 = (*(code *)*(undefined2 *)(iVar6 + 0x30))();
    *(undefined2 *)(iVar4 + 0x8) = (int)uVar11;
    *(undefined2 *)(iVar4 + 0xa) = (int)((ulong)uVar11 >> 0x10);
    *(undefined4 *)(iVar4 + 0xc) = pvVar10;
    uVar11 = (*(code *)*(undefined2 *)(iVar6 + 0x3c))
                       (0x1028,param_1,pvVar9,puVar12,pvVar13);
    uVar2 = (undefined2)((ulong)uVar11 >> 0x10);
    *(undefined2 *)(iVar4 + 0x10) = (int)uVar11;
    *(undefined2 *)(iVar4 + 0x12) = uVar2;
    *(undefined4 *)(iVar4 + 0x14) = pvVar10;
    local_1c = CONCAT22(uVar8,iVar4 + 0x18);
    local_1e -= 0x1;
  } while (local_1e != 0x0);
LAB_1010_10ca:
  pvVar3 = allocate_memory(CONCAT22(puVar14,(int)puVar5[0x1a] << 0x2));
  *(void **)(puVar5 + 0x19) = pvVar3;
  *(undefined2 *)((int)puVar5 + 0x66) = uVar2;
  local_20 = 0x0;
  local_1e = 0x0;
  while( true )
  {
    if ((int)puVar5[0x1a] * 0x3 <= (int)local_1e) break;
    uVar2 = *(undefined2 *)((int)puVar5 + 0x62);
    uVar8 = (undefined2)(puVar5[0x19] >> 0x10);
    iVar4 = (int)puVar5[0x19];
    *(int *)(iVar4 + local_20 * 0x4) = (int)puVar5[0x18] + local_1e * 0x8;
    *(undefined2 *)(iVar4 + local_20 * 0x4 + 0x2) = uVar2;
    local_1e += 0x3;
    local_20 += 0x1;
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References Resource Manager at 1050:0ED0 to retrieve resource 0x32.
// Orchestrates colonization-related dialog instantiation and focus management.

void __stdcall16far
UI_Planet_Update_Colonization_Status_Logic_maybe
          (int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  void *pvVar6;
  void *entity_ref;
  
  UI_Window_Manager_Add_and_Focus_SubWindow_Logic
            (param_1,param_2,param_3,(int)param_4,(int)((ulong)param_4 >> 0x10));
  if (*(int *)(param_1 + 0x16) == 0x3)
  {
    pvVar6 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 0x32) + 0x42);
    uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar4 = (int)uVar1;
    entity_ref = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8
                           ((void *)*(undefined4 *)
                                     ((int)*(undefined4 *)(iVar4 + 0x16) + 0x4));
    iVar2 = UI_Classify_Entity_Type_for_Notification_Logic
                      ((void *)pvVar6,(long)entity_ref);
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x16) + 0x4);
    iVar3 = UI_Window_Focus_Manager_Logic
                      ((void *)pvVar6,(int)((ulong)pvVar6 >> 0x10),0x0,(int)uVar1,
                       (int)((ulong)uVar1 >> 0x10));
    if (iVar3 == 0x0)
    {
      uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x16) + 0x4);
      UI_Specialized_Dialog_Factory_Logic
                (pvVar6,0x0,0x0,iVar2,(int)uVar1,(int)((ulong)uVar1 >> 0x10));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Report_List_Manager vtable to 1010:1B2A.
// References Resource Manager at 1050:0ED0 to retrieve resource 3.

void * __stdcall16far
UI_Report_List_Manager_ctor_init_1B2A_Logic(void *this,int segment,int id)
{
  long lVar1;
  
  UI_Report_List_Manager_ctor_init_191A_Logic(this,segment,id);
  *(undefined4 *)((int)this + 0x6e) = 0x0;
  *(char **)CONCAT22(segment,this) = (char *)s_35_flc_1050_1b2a;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  *(undefined2 *)((int)this + 0x6e) = (int)lVar1;
  *(undefined2 *)((int)this + 0x70) = (int)((ulong)lVar1 >> 0x10);
  return this;
}



void __stdcall16far Simulator_World_Process_Entities_VCall_40_19a4(u32 *param_1)
{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  void *pvVar2;
  u16 local_1c;
  u16 local_1a;
  u32 local_18;
  u16 local_14;
  u16 local_12;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x700);
  while( true )
  {
    pvVar2 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((u16 *)CONCAT22(unaff_SS,&local_14));
    if (pvVar2 == NULL) break;
    puVar1 = (undefined2 *)((int)*param_1 + 0x40);
    (*(code *)*puVar1)(0x1028,param_1,(int)pvVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References Resource Manager at 1050:0ED0 to retrieve resource 0x32.
// Orchestrates entity classification and label generation for reports.

char * __stdcall16far
UI_Report_Get_Entity_Name_Label_Logic(void *context,long entity_ref)
{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  undefined2 in_stack_00000006;
  
  pcVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e((void *)entity_ref);
  pcVar1 = UI_Generate_Formatted_Label_Logic
                     ((int)*(undefined4 *)((int)context + 0x6e),
                      (int)((ulong)*(undefined4 *)((int)context + 0x6e) >> 0x10),
                      (char *)pcVar3);
  iVar2 = atoi_wrapper_far(pcVar1);
  pvVar4 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
  pcVar1 = (char *)UI_Classify_Entity_Type_for_Notification_Logic
                             ((void *)pvVar4,entity_ref);
  UI_Get_Entity_Name_by_Type_and_Index_Logic
            ((int)*(undefined4 *)((int)context + 0x6e),
             (int)((ulong)*(undefined4 *)((int)context + 0x6e) >> 0x10),iVar2,pcVar1);
  pcVar1 = strdup_allocate(pcVar1);
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Report_List_Manager vtable to 1010:1D04.
// References Resource Manager at 1050:0ED0 to retrieve resource 3.

void * __stdcall16far
UI_Report_List_Manager_ctor_init_1D04_Logic(void *this,int segment,int id)
{
  long lVar1;
  
  UI_Report_List_Manager_ctor_init_191A_Logic(this,segment,id);
  *(undefined4 *)((int)this + 0x6e) = 0x0;
  *(char **)CONCAT22(segment,this) = (char *)s_330_flc_1050_1cfe + 0x6;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  *(undefined2 *)((int)this + 0x6e) = (int)lVar1;
  *(undefined2 *)((int)this + 0x70) = (int)((ulong)lVar1 >> 0x10);
  return this;
}



void __stdcall16far Simulator_World_Process_Entities_VCall_40_1bb4(u32 *param_1)
{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  void *pvVar2;
  u16 local_1c;
  u16 local_1a;
  u32 local_18;
  u16 local_14;
  u16 local_12;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x700);
  while( true )
  {
    pvVar2 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((u16 *)CONCAT22(unaff_SS,&local_14));
    if (pvVar2 == NULL) break;
    puVar1 = (undefined2 *)((int)*param_1 + 0x40);
    (*(code *)*puVar1)(0x1028,param_1,(void *)pvVar2);
  }
  return;
}
