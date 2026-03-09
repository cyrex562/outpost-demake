/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 6/54
 * Original lines (combined): 22406-26713
 * Boundaries: top-level declarations/definitions only
 */




// Sets the UI sub-component at offset 0x1E using a newly created object.

void __stdcall16far
UI_Component_Set_SubComponent_at_Offset_1E_Logic(void *this,char *str)
{
  void *pvVar1;
  undefined2 in_DX;
  
  pvVar1 = UI_Find_Item_In_List_Offset_12_by_String_Logic(this,str);
  *(undefined2 *)((int)this + 0x1e) = pvVar1;
  *(undefined2 *)((int)this + 0x20) = in_DX;
  return;
}



// Searches the linked list stored at offset 0xE of the input structure for an item
// whose associated value (offset 8) matches the provided 32-bit identifier. Returns the
// matching item or 0 if not found.

void * __stdcall16far UI_Find_Item_In_List_Offset_0E_Logic(void *this,long id)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined2 in_stack_00000006;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xe));
  do
  {
    pvVar3 = (void *)get_next_list_item(local_a);
    iVar2 = (int)((ulong)pvVar3 >> 0x10);
    pvVar1 = (void *)pvVar3;
    if (iVar2 == 0x0 && pvVar1 == NULL)
    {
      return NULL;
    }
  } while (*(long *)((int)pvVar1 + 0x8) != id);
  return pvVar1;
}



// Searches the linked list stored at offset 0x12 of the input structure for an item
// whose associated 16-bit ID (offset 8) matches the provided value. Returns the
// matching item or 0 if not found.

void * __stdcall16far UI_Find_Item_In_List_Offset_12_Logic(void *this,int id)
{
  void *pvVar1;
  int in_stack_00000008;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0x12));
  do
  {
    pvVar1 = (void *)get_next_list_item(local_a);
    if (pvVar1 == NULL)
    {
      return NULL;
    }
  } while (*(int *)((int)(void *)pvVar1 + 0x8) != in_stack_00000008);
  return (void *)pvVar1;
}



void * __stdcall16far
UI_Element_Subclass_BDCC_dtor_Scalar_Deleting_bd02
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Element_Subclass_dtor_BDCC(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_Element_Subclass_BDC8_dtor_Scalar_Deleting_bd28
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Element_Subclass_dtor_BDC8(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_Element_Subclass_BDC8_dtor_Scalar_Deleting_bd4e
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Element_Subclass_dtor_BDC8(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Scalar deleting destructor for the UI element subclass with vtable 0xBDC8.

void * __stdcall16far UI_Element_Subclass_scalar_dtor_BDC8(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Element_Subclass_dtor_BDC8(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Scalar deleting destructor for the UI element subclass with vtable 0xBDC8. Duplicate
// instance.

void * __stdcall16far
UI_Element_Subclass_scalar_dtor_BDC8_duplicate(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Element_Subclass_dtor_BDC8(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:CA4A.

void * __stdcall16far UI_Element_Subclass_ctor_CA4A(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xca4a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1008:CA4A during destruction.
// Invokes virtual destructor (index 0) for sub-object at offset 10.

void __stdcall16far UI_Element_Subclass_dtor_CA4A(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xca4a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(this);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Compares an internal tracking value (offset 0xE) against a global threshold. Returns
// 1 if the value is greater than or equal to the threshold.

int __stdcall16far UI_Element_Check_Offset_0E_Against_Global_maybe(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*_p_SimulatorWorldContext <= *(ulong *)((int)this + 0xe))
  {
    return 0x1;
  }
  return 0x0;
}



// Retrieves the linked list pointer from offset 10 (0xA). If the list is not yet
// initialized, it calls a sub-routine to populate it first.

void * __stdcall16far UI_Element_Get_or_Init_List_at_Offset_0A_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0xa) == 0x0)
  {
    UI_Populate_Specialized_Resource_List_Logic(this);
  }
  return (void *)*(undefined2 *)((int)this + 0xa);
}



void * __stdcall16far
UI_Element_Subclass_CA4A_dtor_Scalar_Deleting_ca24
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Element_Subclass_dtor_CA4A(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:D71A.

void * __stdcall16far UI_Element_Subclass_ctor_D71A(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined4 *)((int)this + 0x16) = 0x0;
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xd71a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



void __stdcall16far UI_Element_Subclass_dtor_D71A_Wrapper(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0xd71a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  UI_Element_Subclass_dtor_D71A_Logic(this);
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Targeted Scan Finding: Vtable
// Iteratively invokes virtual destructors (vtable index 0) for six sub-objects at
// offsets 10, 0xE, 12, 16, 1A, and 1E.

void __stdcall16far UI_Element_Subclass_dtor_D71A_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0xa) = 0x0;
  if (*(int *)((int)this + 0x10) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0xe) = 0x0;
  if (*(int *)((int)this + 0x14) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x12) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x12);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x12) = 0x0;
  if (*(int *)((int)this + 0x18) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x16) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x16);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x16) = 0x0;
  if (*(int *)((int)this + 0x1c) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x1a) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x1a);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  if (*(int *)((int)this + 0x20) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x1e) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x1e);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  return;
}



// Scalar deleting destructor for the UI element subclass with vtable 0xD71A.

void * __stdcall16far UI_Element_Subclass_scalar_dtor_D71A(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Element_Subclass_dtor_D71A_Wrapper(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Constructor for a UI element subclass. Initializes base properties and sets the
// vtable to 0xD780.

void * __stdcall16far UI_Element_Subclass_ctor_D780(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xd780;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1008:D98E during destruction.
// Invokes virtual destructor (index 0) for sub-object at offset 10.

void __stdcall16far UI_Element_Subclass_dtor_D98E(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xd98e;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Scalar deleting destructor for the UI element subclass with vtable 0xD98E.

void * __stdcall16far UI_Element_Subclass_scalar_dtor_D98E(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Element_Subclass_dtor_D98E(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Special_Dialog_Subclass vtable to 1008:D9FA.
// Registers global special dialog instance at 1050:4230.
// Loads resource ID 0x9A via Build_Site_Object_Initialize_Vtable_and_Resource.

void __stdcall16far UI_Special_Dialog_Subclass_ctor_init(void *this,int segment,int id)
{
  Build_Site_Object_Base_ctor((long)CONCAT22(segment,this),id);
  *(undefined2 *)CONCAT22(segment,this) = 0xd9fa;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  Build_Site_Object_Initialize_Vtable_and_Resource((long)CONCAT22(segment,this),0x9a);
  _p_GlobalPaletteObject = (void *)CONCAT22(segment,this);
  return;
}



// Scalar deleting destructor for the specialized dialog subclass.

void * __stdcall16far UI_Special_Dialog_Subclass_scalar_dtor(void *this,byte flags)
{
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  Build_Site_Object_dtor_Internal(_this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Relationship_Link vtable to 1008:DD4A (base 1008:389A).

void * __stdcall16far
UI_Relationship_Link_ctor(void *this,long parent_id,long owner_ref)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(long *)((int)this + 0x4) = owner_ref;
  *(long *)((int)this + 0x8) = parent_id;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x12) = 0x0;
  *_this = 0xdd4a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Default constructor for the UI component with vtable 0xDD4A. Initializes all internal
// reference fields to zero.

void * __stdcall16far UI_Component_ctor_DD4A_zero(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = 0x0;
  *(undefined4 *)((int)this + 0x8) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x12) = 0x0;
  *_this = 0xdd4a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Iterates through the linked list of relationships and invokes a processing routine
// for any link that is currently active (state 2 or 3).

void __stdcall16far UI_Relationship_Manager_Process_Active_Links_Logic(void *this)
{
  void *link_ptr;
  undefined2 uVar1;
  void *pvVar2;
  int in_stack_00000006;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  while( true )
  {
    pvVar2 = (void *)get_next_list_item(local_a);
    uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
    link_ptr = (void *)pvVar2;
    if (pvVar2 == NULL) break;
    if ((*(int *)((int)link_ptr + 0xc) == 0x2) || (*(int *)((int)link_ptr + 0xc) == 0x3)
       )
    {
      UI_Relationship_Manager_Should_Update_Link_Probability_Check
                ((int)this,in_stack_00000006,link_ptr);
    }
  }
  return;
}



// Searches for a specific relationship between two identifiers and returns true (1) if
// the link exists and is in state 1.

int __stdcall16far
UI_Relationship_Manager_Is_Link_Active_Type1_Logic(void *this,long id1,long id2)
{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  undefined2 in_stack_00000006;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  do
  {
    lVar3 = get_next_list_item(local_a);
    uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
    iVar1 = (int)lVar3;
    if (lVar3 == 0x0)
    {
      return 0x0;
    }
  } while (((*(long *)(iVar1 + 0x4) != id2) || (*(long *)(iVar1 + 0x8) != id1)) &&
          ((*(long *)(iVar1 + 0x8) != id2 || (*(long *)(iVar1 + 0x4) != id1))));
  if (*(int *)(iVar1 + 0xc) != 0x1)
  {
    return 0x0;
  }
  return 0x1;
}



// Sets the values of two internal reference fields at offsets 0x16 and 0x1A.

void __stdcall16far
UI_Component_Set_Offsets_16_1A_Logic(void *this,long val_1a,long val_16)
{
  undefined2 in_stack_00000006;
  
  *(long *)((int)this + 0x16) = val_16;
  *(long *)((int)this + 0x1a) = val_1a;
  return;
}



// Retrieves the 32-bit values from offsets 0x16 and 0x1A of the input structure.
// Inverse of `UI_Component_Set_Offsets_16_1A_Logic`.

void __stdcall16far
UI_Component_Get_Offsets_16_1A_Logic(void *this,long *out_1a,long *out_16)
{
  undefined2 in_stack_0000000a;
  undefined4 *in_stack_0000000c;
  
  *in_stack_0000000c = *(undefined4 *)((int)this + 0x16);
  *_out_16 = *(long *)((int)this + 0x1a);
  return;
}



// Finds a relationship link and, if it is in an active state (2 or 3), invokes the
// processing routine `FUN_1008_e9a4`. Returns 1 if the link is in state 0/1 or after
// processing.

int __stdcall16far
UI_Relationship_Manager_Activate_Link_Logic(void *this,char *name1,char *name2)
{
  void *link_ptr;
  int iVar1;
  int in_DX;
  
  link_ptr = UI_Relationship_Manager_Find_Link_by_Strings_Logic(this,name1,name2);
  if (in_DX == 0x0 && link_ptr == NULL)
  {
    return 0x1;
  }
  iVar1 = *(int *)((int)link_ptr + 0xc);
  if ((-0x1 < iVar1) && (true))
  {
    if (iVar1 < 0x2)
    {
      return 0x1;
    }
    if ((0x0 < iVar1 + -0x1) && (iVar1 + -0x2 < 0x2))
    {
      iVar1 = UI_Relationship_Manager_Should_Update_Link_Probability_Check
                        ((int)this,(int)name1,link_ptr);
      return iVar1;
    }
  }
  return 0x0;
}



// Scalar deleting destructor for the UI component with vtable 0xEAAC.

void * __stdcall16far UI_Component_scalar_dtor_EAAC(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Component_dtor_EAAC(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:EB1A.

void * __stdcall16far UI_Element_Subclass_ctor_EB1A(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  zero_init_struct_6bytes((void *)((int)this + 0xc));
  *(undefined2 *)CONCAT22(segment,this) = 0xeb1a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:EC00.

void * __stdcall16far UI_Element_Subclass_ctor_EC00(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xc) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xec00;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:EC62.

void * __stdcall16far UI_Element_Subclass_ctor_EC62(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xec62;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Subclass_EFC4 vtable to 1008:EFC4 (base 1008:3B5E).

void * __stdcall16far UI_Subclass_EFC4_ctor(void *this)
{
  undefined2 in_stack_00000006;
  
  Collection_Object_Base_ctor_3B5E(this);
  *_this = 0xefc4;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Destructor for the UI element subclass with vtable 0xEFC4. Calls the base class
// destructor.

void __stdcall16far UI_Subclass_EFC4_dtor(void *this)
{
  u16 in_stack_00000006;
  
  *_this = 0xefc4;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  Collection_Object_Base_dtor_3B5E(this,in_stack_00000006);
  return;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Subclass_EF9C vtable to 1008:EF9C (base 1008:36DA).
// Allocates a 0x20C byte buffer using global heap context.

void * __stdcall16far UI_Subclass_EF9C_ctor(void *this,int segment,int id)
{
  void *pvVar1;
  int in_DX;
  undefined2 unaff_BP;
  
  UI_Window_Base_ctor_init_36DA_Logic(this,segment,id);
  *(undefined2 *)CONCAT22(segment,this) = 0xef9c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  pvVar1 = allocate_memory(CONCAT22(unaff_BP,0x20c));
  *(undefined2 *)((int)this + 0x5c) = pvVar1;
  *(int *)((int)this + 0x5e) = in_DX;
  memset_far((void *)*(undefined2 *)((int)this + 0x5c),in_DX,0x0);
  return this;
}



// Destructor for the UI element subclass with vtable 0xEF9C. Calls the base class
// destructor.

void __stdcall16far UI_Subclass_EF9C_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0xef9c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  UI_Window_Base_dtor_36DA_Logic(this);
  return;
}



void __stdcall16far UI_Struct_Initialize_by_Index_ed62(u32 param_1,int param_2)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(int *)(iVar1 + 0x16) = param_2 * 0x8 + 0xd5e;
  *(undefined2 *)(iVar1 + 0x18) = (dword *)&g_HeapContext;
  *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_2 * 0x8 + 0xd64);
  return;
}



// Targeted Scan Finding: Vtable
// Instantiates a stack-based UI_Subclass_EFC4 (vtable 1008:EFC4).
// Invokes recursive tree building logic.

void __stdcall16far UI_Element_Lazy_Init_Offset_56(void *this)
{
  void *pvVar1;
  undefined2 in_DX;
  int unaff_SS;
  undefined2 in_stack_00000006;
  undefined1 local_1c [0x1a];
  
  if (*(long *)((int)this + 0x56) == 0x0)
  {
    UI_Subclass_EFC4_ctor(local_1c);
    pvVar1 = UI_Tree_Builder_Recursive_Logic(local_1c,unaff_SS,0x0,NULL);
    *(undefined2 *)((int)this + 0x56) = pvVar1;
    *(undefined2 *)((int)this + 0x58) = in_DX;
    UI_Subclass_EFC4_dtor(local_1c);
  }
  return;
}



void __stdcall16far UI_Element_Lookup_Node_at_5C_ee72(u32 *param_1,int param_2)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 in_DX;
  undefined2 extraout_DX;
  
  if (*(long *)((int)param_1 + 0x56) == 0x0)
  {
    puVar1 = (undefined2 *)((int)*(u32 *)CONCAT22(param_2,param_1) + 0x10);
    (*(code *)*puVar1)();
    in_DX = extraout_DX;
  }
  pvVar2 = UI_Element_Get_Indexed_FarPtr_from_Offset_5C_Logic(param_1,param_2);
  UI_Element_Find_Node_by_Bitmask_Logic(param_1,(long)CONCAT22(in_DX,pvVar2));
  return;
}



// Scalar deleting destructor for the UI_Subclass_EFC4 class.

void * __stdcall16far UI_Subclass_EFC4_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Subclass_EFC4_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



void * __stdcall16far
UI_Subclass_EF9C_dtor_Scalar_Deleting_ef76(void *param_1,u16 param_2,byte param_3)
{
  UI_Subclass_EF9C_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



u16 __stdcall16far
UI_Window_Update_Placement_and_Translate_Logic(void *param_1,int param_2,HWND16 param_3)
{
  undefined2 *puVar1;
  int32_t iVar2;
  undefined2 in_DX;
  undefined2 unaff_SS;
  u16 local_22;
  u32 local_20;
  u32 local_1c;
  u16 local_18;
  u32 local_16;
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
  local_12 = 0x0;
  local_10 = 0x0;
  local_e = 0x0;
  local_c = 0x0;
  local_a = 0x0;
  local_8 = 0x0;
  local_6 = 0x0;
  local_4 = 0x0;
  GetWindowPlacement16((u16 *)CONCAT22(unaff_SS,&local_18),param_3);
  if ((local_10 == 0xffff) || (param_2 != 0x0))
  {
    local_16 = 0x50001;
    iVar2 = GetWindowLong16(0x0,param_3);
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xe0) + 0x38);
    (*(code *)*puVar1)(0x1538,(undefined4 *)(undefined4 *)*(undefined4 *)(iVar2 + 0xe0),
                       *(undefined2 *)(iVar2 + 0xe2));
    UI_Map_Coordinate_Translation_Logic
              ((void *)param_1,(void *)((ulong)param_1 >> 0x10),(int)&local_18);
    SetWindowPlacement16((u16 *)CONCAT22(unaff_SS,&local_18),param_3);
  }
  return 0x0;
}
