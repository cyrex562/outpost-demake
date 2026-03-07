/*
 * Source: outpost.c
 * Chunk: 42/117
 * Original lines: 47213-48254
 * Boundaries: top-level declarations/definitions only
 */




// Maps specific simulation state values (7, 8, 12, 13) to UI-specific constants (9, 10,
// 25, 3).

int __stdcall16far UI_Map_Sim_Value_to_Constant_Logic(int arg1,int arg2,int sim_value)
{
  undefined2 uStack_6;
  
  if (sim_value == 0x7)
  {
    uStack_6 = 0x9;
  }
  else if (sim_value == 0x8)
  {
    uStack_6 = 0xa;
  }
  else if (sim_value == 0xc)
  {
    uStack_6 = 0x19;
  }
  else if (sim_value == 0xd)
  {
    uStack_6 = 0x3;
  }
  else
  {
    uStack_6 = 0x8;
  }
  return uStack_6;
}



// Maps internal ship/fleet type identifiers to UI display constants (1-4).

int __stdcall16far UI_Map_Ship_Type_to_Constant_Logic(int arg1,int arg2,int ship_type)
{
  undefined2 uStack_6;
  
  if (false)
  {
switchD_1018_45a3_caseD_17:
    uStack_6 = 0x1;
  }
  else
  {
    switch(ship_type)
    {
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
      uStack_6 = 0x2;
      break;
    case 0x16:
    case 0x1e:
      uStack_6 = 0x3;
      break;
    default:
      goto switchD_1018_45a3_caseD_17;
    case 0x1d:
    case 0x21:
      uStack_6 = 0x4;
    }
  }
  return uStack_6;
}



// Maps specific research-related simulation values (3, 4) to UI constants (0x16, 0x17).
// Defaults to 0x14.

int __stdcall16far
UI_Map_Research_Value_to_Constant_Logic(int arg1,int arg2,int res_value)
{
  undefined2 uStack_6;
  
  if (res_value == 0x3)
  {
    uStack_6 = 0x16;
  }
  else if (res_value == 0x4)
  {
    uStack_6 = 0x17;
  }
  else
  {
    uStack_6 = 0x14;
  }
  return uStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Searches the trade manager's relationship collection for a link connecting two
// entities by their name strings. It checks both possible orderings (A-B and B-A) to
// find the bidirectional link object.

long __stdcall16far
UI_Trade_Manager_Find_Link_Bidirectional_Logic(long context,char *name1,char *name2)
{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  void *this_ptr;
  void *this_ptr_00;
  char *pcVar5;
  char *pcVar6;
  byte *in_stack_0000000c;
  undefined1 local_a [0x8];
  
  uVar1 = *(undefined4 *)((int)context + 0x122);
  init_long_pair(local_a,*(long *)((int)uVar1 + 0xa));
  while( true )
  {
    lVar4 = get_next_list_item(local_a);
    uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
    if (lVar4 == 0x0)
    {
      return 0x0;
    }
    this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)((int)lVar4 + 0x4));
    this_ptr_00 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,
                             (u8 *)(u8 *)*(undefined4 *)((int)lVar4 + 0x8));
    pcVar5 = UI_Component_Get_FarPtr_at_1FA(this_ptr);
    pcVar6 = UI_Component_Get_FarPtr_at_1FA(this_ptr_00);
    iVar2 = strcmp_case_sensitive(in_stack_0000000c,pcVar5);
    if ((iVar2 == 0x0) && (iVar2 = strcmp_case_sensitive(_name1,pcVar6), iVar2 == 0x0))
    break;
    iVar2 = strcmp_case_sensitive(_name1,pcVar5);
    if ((iVar2 == 0x0) &&
       (iVar2 = strcmp_case_sensitive(in_stack_0000000c,pcVar6), iVar2 == 0x0))
    {
      return lVar4;
    }
  }
  return lVar4;
}



void * __stdcall16far
UI_Trade_Manager_dtor_Scalar_Deleting_46e6(void *param_1,byte param_2)
{
  UI_Trade_Manager_dtor_470C_Logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Base constructor for a transaction-related UI element (vtable 0x4AA6). Initializes
// core data pointers at offsets 4 and 8.

long __stdcall16far
UI_Transaction_Item_Base_ctor_4AA6_Logic(long this_ref,long data1,long data2)
{
  astruct_445 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_445 *)this_ref;
  *(char **)this_ref = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = (void *)data2;
  uVar1->field4_0x8 = (void *)data1;
  uVar1->field5_0xc = 0x0;
  *(undefined2 *)this_ref = 0x4aa6;
  uVar1->field2_0x2 = 0x1018;
  return this_ref;
}



// Destructor for the transaction UI item base class. Frees the data buffer at offset 4.

void __stdcall16far UI_Transaction_Item_Base_dtor_4AA6_Logic(long this_ref)
{
  astruct_444 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_444 *)this_ref;
  *(undefined2 *)this_ref = 0x4aa6;
  uVar1->field2_0x2 = 0x1018;
  free_if_not_null((void *)uVar1->field3_0x4);
  *(char **)this_ref = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  return;
}



// Constructor for a specialized transaction UI element (vtable 0x4A92). It calls the
// base constructor and sets a specific type code at offset 0xE.

long __stdcall16far
UI_Transaction_Item_Subclass_ctor_4A92_Logic
          (long this_ref,long data1,long data2,int type)
{
  astruct_443 *uVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic(this_ref,data1,data2);
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_443 *)this_ref;
  uVar1->field12_0xe = type;
  *(undefined2 *)this_ref = 0x4a92;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field11_0xc = 0x1;
  return this_ref;
}



// Constructor for UI Transaction Item Type 2. Initializes base class and sets
// type-specific fields (0xE, 0x12).

long __stdcall16far
UI_Transaction_Item_Type2_ctor
          (astruct_442 *param_1,long param_2,long param_3,u16 param_4,void *param_5)
{
  astruct_442 *uVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic((long)param_1,param_2,param_3);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_442 *)param_1;
  uVar1->field12_0xe = param_5;
  uVar1->field13_0x12 = param_4;
  *(undefined2 *)param_1 = 0x4a9a;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field11_0xc = 0x2;
  return (long)param_1;
}



// Constructor for UI Transaction Item Type 3. Initializes base class and sets field
// 0xE.

long __stdcall16far
UI_Transaction_Item_Type3_ctor(long this_ref,long data1,long data2,long entity_ref)
{
  astruct_441 *uVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic(this_ref,data1,data2);
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_441 *)this_ref;
  uVar1->field12_0xe = (void *)entity_ref;
  *(undefined2 *)this_ref = 0x4aa2;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field11_0xc = 0x3;
  return this_ref;
}



// Constructor for UI Transaction Item Type 4. Initializes base class and sets field 0xE
// and 0x10.

long __stdcall16far
UI_Transaction_Item_Type4_ctor(long this_ref,long data1,long data2,int id)
{
  astruct_440 *uVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic(this_ref,data1,data2);
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_440 *)this_ref;
  uVar1->field12_0xe = id;
  uVar1->field13_0x10 = 0x0;
  *(undefined2 *)this_ref = 0x4a8e;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field11_0xc = 0x4;
  return this_ref;
}



// Destructor for UI Transaction Item Type 4. Frees resource at offset 0x10 and calls
// base destructor.

void __stdcall16far UI_Transaction_Item_Type4_dtor(long this_ref)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ref >> 0x10);
  *(undefined2 *)this_ref = 0x4a8e;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ref + 0x10));
  UI_Transaction_Item_Base_dtor_4AA6_Logic(this_ref);
  return;
}



// Constructor for UI Transaction Item Type 5. Initializes base class and sets field
// 0xE.

long __stdcall16far
UI_Transaction_Item_Type5_ctor(long this_ref,long data1,long data2,int id)
{
  int iVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic(this_ref,data1,data2);
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  iVar1 = (int)this_ref;
  *(int *)(iVar1 + 0xe) = id;
  *(undefined2 *)this_ref = 0x4a96;
  *(undefined2 *)(iVar1 + 0x2) = 0x1018;
  *(undefined2 *)(iVar1 + 0xc) = 0x5;
  return this_ref;
}



// Constructor for UI Transaction Item Type 6. Initializes base class and sets field
// 0xE.

long __stdcall16far
UI_Transaction_Item_Type6_ctor(long this_ref,long data1,long data2,int type)
{
  astruct_439 *uVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic(this_ref,data1,data2);
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_439 *)this_ref;
  uVar1->field12_0xe = type;
  *(undefined2 *)this_ref = 0x4a9e;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field11_0xc = 0x6;
  return this_ref;
}



// Constructor for UI Transaction Item Type 7. Initializes base class and sets field 0xE
// (far pointer).

long __stdcall16far
UI_Transaction_Item_Type7_ctor(long this_ref,long data1,long data2,long ptr)
{
  int iVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic(this_ref,data1,data2);
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  iVar1 = (int)this_ref;
  *(long *)(iVar1 + 0xe) = ptr;
  *(undefined2 *)this_ref = 0x4a8a;
  *(undefined2 *)(iVar1 + 0x2) = 0x1018;
  *(undefined2 *)(iVar1 + 0xc) = 0x7;
  return this_ref;
}



void * __stdcall16far
UI_Transaction_Item_Base_dtor_Scalar_Deleting_495a(void *param_1,byte param_2)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_Transaction_Item_Base_dtor_Scalar_Deleting_4980(void *param_1,byte param_2)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Scalar deleting destructor for UI Transaction Item. Calls base destructor and
// optionally frees object memory.

long __stdcall16far UI_Transaction_Item_Scalar_Deleting_Dtor(long this_ref,byte flags)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Transaction Item Type 2. Calls base destructor and
// optionally frees memory.

long __stdcall16far
UI_Transaction_Item_Type2_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Transaction Item Type 4. Calls Type 4 specific
// destructor and optionally frees memory.

long __stdcall16far
UI_Transaction_Item_Type4_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Transaction_Item_Type4_dtor(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



void * __stdcall16far
UI_Transaction_Item_Base_dtor_Scalar_Deleting_4a18(void *param_1,byte param_2)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Scalar deleting destructor for UI Transaction Item Type 5. Calls base destructor and
// optionally frees memory.

long __stdcall16far
UI_Transaction_Item_Type5_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Scalar deleting destructor for UI Transaction Item Type 6. Calls base destructor and
// optionally frees memory.

long __stdcall16far
UI_Transaction_Item_Type6_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Build Site internal object. Initializes base object, vtable, and
// sets a global reference.

void __stdcall16far Build_Site_Object_ctor(long this_ref,int arg2,int arg3)
{
  Build_Site_Object_Base_ctor(this_ref,arg2);
  *(undefined2 *)this_ref = 0x4b06;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  Build_Site_Object_Initialize_Vtable_and_Resource(this_ref,0x9a);
  _p_GlobalPaletteObject = this_ref;
  return;
}



// Scalar deleting destructor for Build Site internal object. Calls specific destructor
// and optionally frees memory.

long __stdcall16far Build_Site_Object_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  Build_Site_Object_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Constructor for a UI-related object that initializes system metrics (SM_CXBORDER,
// SM_CYBORDER, etc.) into global variables if not already set.

long __stdcall16far UI_Metric_Manager_Object_ctor_init(long this_ref,int arg2,int id)
{
  astruct_438 *uVar1;
  void *this;
  int id_00;
  
  this = (void *)this_ref;
  id_00 = (int)((ulong)this_ref >> 0x10);
  Base_Object_ctor_init_2014_Logic(this,id_00);
  *(int *)((int)this + 0x12) = arg2;
  *(undefined2 *)((int)this + 0x14) = 0x0;
  *(undefined2 *)this_ref = 0x4c9e;
  *(undefined2 *)((int)this + 0x2) = 0x1018;
  if (PTR_DAT_1050_0000_1050_416c == NULL)
  {
    PTR_DAT_1050_0000_1050_416c = (undefined *)GetSystemMetrics16(0x4);
    PTR_DAT_1050_0000_1050_416e = (undefined *)GetSystemMetrics16(0x5);
    PTR_DAT_1050_0000_1050_4170 = (undefined *)GetSystemMetrics16(0x6);
  }
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates Build Site object data by fetching a resource via the Resource Manager and
// indexing into it using an internal ID.

void __stdcall16far Build_Site_Update_From_Resources(long context)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int index;
  void *pvVar3;
  
  memset_far((undefined4 *)((int)context + 0xa),context._2_2_,0x0);
  memset_far((void *)((int)context + 0x18),context._2_2_,0x0);
  pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  index = (int)((ulong)pvVar3 >> 0x10);
  puVar2 = UI_Component_Get_Indexed_Struct_at_Offset_22_Logic((void *)pvVar3,index);
  if (index != 0x0 || puVar2 != NULL)
  {
    *(undefined4 *)((int)context + 0xa) = *puVar2;
    *(undefined4 *)((int)context + 0xe) = puVar2[0x1];
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)context + 0x20);
  (*(code *)*puVar1)(0x1010,context);
  if ((*(int *)((int)context + 0xe) == 0x0) && (*(int *)((int)context + 0x10) == 0x0))
  {
    *(undefined2 *)((int)context + 0xa) = *(undefined2 *)((int)context + 0x18);
    *(undefined2 *)((int)context + 0xc) = *(undefined2 *)((int)context + 0x1a);
  }
  *(undefined2 *)((int)context + 0xe) = *(undefined2 *)((int)context + 0x1c);
  *(undefined2 *)((int)context + 0x10) = *(undefined2 *)((int)context + 0x1e);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Saves current Build Site object state back into the resource managed structures.

void __stdcall16far Build_Site_Save_To_Resources_Internal(long context,long data_ref)
{
  void *pvVar1;
  
  *(undefined4 *)((int)context + 0xa) = *(undefined4 *)data_ref;
  *(undefined4 *)((int)context + 0xe) = *(undefined4 *)((int)data_ref + 0x4);
  pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  UI_Component_Set_Indexed_Struct_at_Offset_22_Logic
            ((void *)pvVar1,(long *)((ulong)pvVar1 >> 0x10),0x0);
  return;
}



void * __stdcall16far
Base_Object_2014_dtor_Scalar_Deleting_4c78
          (void *param_1,undefined2 param_2,byte param_3)
{
  Base_Object_dtor_2014_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Base constructor for Build Site internal object. Initializes memory offsets and sets
// a descriptive string pointer ("SCInternalPutBldg site").

void * __stdcall16far Build_Site_Object_Base_ctor(long this_ref,int id)
{
  Base_Object_ctor_init_2014_Logic((void *)this_ref,this_ref._2_2_);
  *(undefined4 *)((int)(void *)this_ref + 0xa) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0xe) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x12) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x14) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x16) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x18) = 0x1;
  *(undefined2 *)((int)(void *)this_ref + 0x1a) = 0x0;
  *(char **)this_ref = (char *)s_SCInternalPutBldg_site_0x_08lx__b_1050_5046 + 0x12;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1018;
  return (void *)this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for Build Site object. Releases GDI palettes, DCs, and internal
// bitmap/palette objects before calling the base destructor.

void __stdcall16far Build_Site_Object_dtor_Internal(long this_ref)
{
  u32 *puVar1;
  int iVar2;
  HPALETTE16 obj;
  astruct_437 *uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  
  uVar4 = (undefined2)((ulong)this_ref >> 0x10);
  uVar3 = (astruct_437 *)this_ref;
  *(char **)this_ref = (char *)s_SCInternalPutBldg_site_0x_08lx__b_1050_5046 + 0x12;
  uVar3->field2_0x2 = 0x1018;
  if (uVar3->field13_0x12 != 0x0)
  {
    obj = SelectPalette16(0x0,uVar3->field20_0x1a,uVar3->field13_0x12);
    DeleteObject16(obj);
    unaff_CS = 0x1538;
    DeleteDC16(uVar3->field13_0x12);
  }
  puVar1 = uVar3->field9_0xa;
  iVar2 = uVar3->field10_0xc;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field11_0xe;
  iVar2 = uVar3->field12_0x10;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  _p_GlobalPaletteObject = 0x0;
  Base_Object_dtor_2014_Logic(uVar3);
  return;
}



// Sets the HWND for the Build Site object and retrieves its Device Context (HDC).

void __stdcall16far Build_Site_Object_Set_Window_and_DC(long this_ref,HWND16 hwnd)
{
  HDC16 HVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  *(HWND16 *)((int)this_ref + 0x16) = hwnd;
  HVar1 = GetDC16(hwnd);
  *(HDC16 *)((int)this_ref + 0x14) = HVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes the Build Site object's virtual function table and links it with a
// resource ID.

void __stdcall16far
Build_Site_Object_Initialize_Vtable_and_Resource(long context,int res_id)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  long lVar3;
  
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)context + 0x10);
  (*(code *)*puVar1)(0x1010,context,res_id,*(undefined2 *)((int)lVar3 + 0xc),
                     *(undefined2 *)((int)lVar3 + 0xa));
  return;
}



// Sets up the GDI context for the Build Site, including creating a memory DC and
// scaling UI metrics for different resolutions.

void __stdcall16far
Build_Site_Object_Setup_GDI_Context(long context,int arg2,int width,int height)
{
  undefined2 *puVar1;
  char *driver;
  HDC16 HVar2;
  u16 uVar3;
  char *in_DX;
  astruct_436 *uVar4;
  undefined2 uVar5;
  int iStack_10;
  
  uVar5 = (undefined2)((ulong)context >> 0x10);
  uVar4 = (astruct_436 *)context;
  puVar1 = (undefined2 *)((int)*(undefined4 *)context + 0x14);
  (*(code *)*puVar1)();
  driver = get_with_lazy_init((u32 *)uVar4->field10_0xa);
  Bitmap_Object_Get_Internal_Buffer_Ptr_maybe((u32 *)uVar4->field10_0xa);
  HVar2 = CreateDC16(driver,in_DX,NULL,NULL);
  uVar4->field15_0x12 = HVar2;
  puVar1 = (undefined2 *)((int)*uVar4->field10_0xa + 0x8);
  uVar3 = (*(code *)*puVar1)();
  uVar4->field22_0x1a = uVar3;
  if ((u16_1050_422e != 0x0) && (0x280 < height))
  {
    for (iStack_10 = 0x0; iStack_10 < (int)(u16_1050_4216 + 0x1); iStack_10 += 0x1)
    {
      *(int *)((undefined *)&DAT_1050_4172 + iStack_10 * 0x2) =
           (int)(((long)*(int *)((undefined *)&DAT_1050_4172 + iStack_10 * 0x2) *
                 ((long)height + 0x1)) / 0x280);
    }
    for (iStack_10 = 0x0; iStack_10 < (int)(u16_1050_422c + 0x1); iStack_10 += 0x1)
    {
      *(int *)((undefined *)&DAT_1050_419a + iStack_10 * 0x2) =
           (int)(((long)*(int *)((undefined *)&DAT_1050_419a + iStack_10 * 0x2) *
                 ((long)width + 0x1)) / 0x1e0);
    }
  }
  u16_1050_422e = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Loads a resource object (likely a bitmap), extracts its palette, and creates internal
// Bitmap and Palette objects.

void __stdcall16far Build_Site_Object_Load_Paletted_Bitmap_Resource(long context)
{
  uint uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  u16 *puVar6;
  undefined2 in_DX;
  uint extraout_DX;
  void *palette_src;
  uint uVar7;
  astruct_435 *uVar5;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined1 local_12 [0x8];
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  puVar3 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  uStack_6 = (undefined4 *)CONCAT22(in_DX,puVar3);
  puVar2 = (undefined2 *)((int)*uStack_6 + 0x14);
  uStack_a = (*(code *)*puVar2)(0x1010,puVar3,in_DX);
  uVar7 = (uint)((ulong)uStack_a >> 0x10);
  uVar8 = (undefined2)((ulong)context >> 0x10);
  uVar5 = (astruct_435 *)context;
  if (*(long *)&uVar5->field12_0xe != 0x0)
  {
    uVar1 = uVar5->field13_0x10;
    puVar4 = (undefined4 *)*(undefined4 **)&uVar5->field12_0xe;
    uVar7 = 0x0;
    if (uVar1 != 0x0 || puVar4 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar4)(0x1010,puVar4,uVar1,0x1);
      uVar7 = extraout_DX;
    }
  }
  pvVar5 = allocate_memory(CONCAT22(puVar3,0x14));
  palette_src = (void *)(uVar7 | (uint)pvVar5);
  if (palette_src == NULL)
  {
    puVar6 = NULL;
    palette_src = NULL;
  }
  else
  {
    puVar6 = Palette_Object_ctor_basic(pvVar5);
  }
  uVar5->field12_0xe = puVar6;
  uVar5->field13_0x10 = (uint)palette_src;
                // WARNING: Load size is inaccurate
  Palette_Object_Copy_From_Other_Logic
            ((void *)uVar5->field12_0xe,(void *)((ulong)uVar5->field12_0xe >> 0x10));
  GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_12),(HWND16)g_ParentHWND);
  uVar9 = 0x1000;
  pvVar5 = allocate_memory(CONCAT22(puVar3,0x1e));
  uVar7 = (uint)palette_src | (uint)pvVar5;
  if (uVar7 == 0x0)
  {
    (&uVar5->field10_0xa)[0x0] = NULL;
    (&uVar5->field10_0xa)[0x1] = NULL;
  }
  else
  {
    uVar9 = 0x1008;
    puVar6 = Bitmap_Object_ctor_with_alloc
                       (pvVar5,palette_src,(int)*(undefined4 *)&uVar5->field12_0xe,
                        (int)((ulong)*(undefined4 *)&uVar5->field12_0xe >> 0x10));
    uVar5->field10_0xa = puVar6;
    uVar5->field11_0xc = uVar7;
  }
  if (uStack_6 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_6)
              (uVar9,(undefined4 *)uStack_6,(int)((ulong)uStack_6 >> 0x10),0x1);
  }
  return;
}



void * __stdcall16far
Build_Site_Object_dtor_Scalar_Deleting_5032(void *param_1,byte param_2)
{
  Build_Site_Object_dtor_Internal((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for an item in the Build Site list. Initializes base object and clears
// fields.

long __stdcall16far Build_Site_List_Item_ctor_init(long this_ref)
{
  Base_Object_ctor_init_2014_Logic((void *)this_ref,this_ref._2_2_);
  *(undefined4 *)((int)(void *)this_ref + 0xa) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0xe) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x12) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x16) = 0x0;
  *(undefined2 *)this_ref = 0x56d2;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1018;
  return this_ref;
}



// Internal destructor for Build Site list item. Calls virtual destructor of internal
// object if it exists.

void __stdcall16far Build_Site_List_Item_dtor_Internal(long this_ref)
{
  undefined2 *puVar1;
  astruct_434 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ref >> 0x10);
  uVar2 = (astruct_434 *)this_ref;
  *(undefined2 *)this_ref = 0x56d2;
  uVar2->field2_0x2 = 0x1018;
  if (uVar2->field14_0x10 != 0x0 || uVar2->field13_0xe != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field13_0xe;
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(uVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes building selection within the Build Site UI and notifies other components
// of the state change.

void __stdcall16far
Build_Site_Object_Process_Selection_and_Notify
          (undefined4 param_1,undefined2 param_2,undefined4 param_3)
{
  int iVar1;
  astruct_433 *puVar2;
  int in_DX;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 uStack_a;
  astruct_433 *paStack_6;
  
  puVar2 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
  uStack_a = (astruct_433 *)CONCAT22(in_DX,puVar2);
  if (in_DX == 0x0 && puVar2 == NULL)
  {
    paStack_6 = NULL;
  }
  else
  {
    *(char **)uStack_a = (char *)s_1_1050_389a;
    puVar2->field2_0x2 = 0x1008;
    puVar2->field3_0x4 = 0x0;
    puVar2->field4_0x6 = 0x0;
    puVar2->field5_0x8 = 0x0;
    puVar2->field6_0xa = 0x0;
    puVar2->field7_0xc = 0x0;
    *(undefined2 *)uStack_a = 0x56ce;
    puVar2->field2_0x2 = 0x1018;
    paStack_6 = uStack_a;
  }
  iVar5 = (int)((ulong)paStack_6 >> 0x10);
  puVar3 = (undefined4 *)paStack_6;
  *(undefined2 *)((int)puVar3 + 0xa) = param_2;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  iVar1 = *(int *)((int)*(undefined4 *)(iVar4 + 0xa) + 0xc);
  if (iVar1 == 0x1)
  {
    *(undefined2 *)(puVar3 + 0x1) =
         *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0xa) + 0xe);
  }
  else if (iVar1 == 0x5)
  {
    *(undefined2 *)((int)puVar3 + 0x6) =
         *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0xa) + 0xe);
  }
  else
  {
    if (iVar1 != 0x6)
    {
      if (iVar5 == 0x0 && puVar3 == NULL)
      {
        return;
      }
      (*(code *)*(undefined2 *)*(undefined2 **)paStack_6)();
      return;
    }
    *(undefined2 *)(puVar3 + 0x2) =
         *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0xa) + 0xe);
  }
  UI_Component_Execute_Resource_Action_and_Notify_6c66(param_3,0x1,paStack_6);
  return;
}



void __stdcall16far UI_Object_Destroy_SubObject_at_0E_51d2(undefined4 param_1)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x10) != 0x0 || (undefined4 *)*(int *)(iVar2 + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)(iVar2 + 0xe);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)(iVar2 + 0xe) = 0x0;
  return;
}



// Iterates through a list of Build Site items and returns the one matching the
// specified name.

long __stdcall16far Build_Site_List_Find_Item_by_Name(void *this,char *name)
{
  int iVar1;
  astruct_432 *iVar2;
  long lVar2;
  char *in_stack_00000008;
  undefined1 local_a [0x8];
  
  *(undefined4 *)((int)this + 0xa) = 0x0;
  init_long_pair(local_a,*(long *)((int)this + 0xe));
  do
  {
    lVar2 = get_next_list_item(local_a);
    iVar1 = (int)((ulong)lVar2 >> 0x10);
    *(undefined2 *)((int)this + 0xa) = (int)lVar2;
    *(int *)((int)this + 0xc) = iVar1;
    if (iVar1 == 0x0 && *(int *)((int)this + 0xa) == 0x0) break;
    iVar1 = strcmp_case_sensitive
                      ((byte *)*(undefined4 *)
                                ((int)*(undefined4 *)((int)this + 0xa) + 0x4),
                       in_stack_00000008);
  } while (iVar1 != 0x0);
  return CONCAT22(*(undefined2 *)((int)this + 0xc),*(undefined2 *)((int)this + 0xa));
}



// Retrieves a Build Site list item, initializing it if it hasn't been created yet.

long __stdcall16far
Build_Site_Object_Get_or_Init_List_Item(long context,long src_context)
{
  astruct_431 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_431 *)context;
  if (*(long *)&uVar1->field_0xe == 0x0)
  {
    Build_Site_List_Initialize_Items_Internal(context,src_context);
  }
  return CONCAT22(uVar1->field16_0x10,*(undefined2 *)&uVar1->field_0xe);
}
