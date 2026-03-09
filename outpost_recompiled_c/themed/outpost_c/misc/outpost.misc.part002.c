/*
 * Source: outpost.c
 * Theme: misc
 * Chunk: 2/3
 * Original lines (combined): 15290-48089
 * Boundaries: top-level declarations/definitions only
 */




// Iterates through a linked list starting from the provided head and returns the item
// at the specified 0-based index (`param_2`). Returns 0 if the index is out of bounds.

long __stdcall16far list_get_item_at_index(void *list_head,int index)
{
  bool bVar1;
  long lVar2;
  int in_stack_00000008;
  int iStack_c;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,(long)_list_head);
  iStack_c = 0x0;
  do
  {
    lVar2 = get_next_list_item(local_a);
    if (lVar2 == 0x0)
    {
      return 0x0;
    }
    bVar1 = iStack_c != in_stack_00000008;
    iStack_c = iStack_c + 0x1;
  } while (bVar1);
  return lVar2;
}



long __stdcall16far get_next_list_item(void *iterator)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 in_stack_00000006;
  
                // Linked list iterator - traverses to next item in list, returns data
                // from offset 8-10. Returns 0 if list is empty or end reached.
  if ((*_iterator != 0x0) && (*(int *)((int)*_iterator + 0x8) != 0x0))
  {
    if (*(long *)((int)iterator + 0x4) == 0x0)
    {
      uVar2 = (undefined2)((ulong)*_iterator >> 0x10);
      iVar1 = (int)*_iterator;
    }
    else
    {
      uVar2 = (undefined2)((ulong)*(undefined4 *)((int)iterator + 0x4) >> 0x10);
      iVar1 = (int)*(undefined4 *)((int)iterator + 0x4);
    }
    *(undefined4 *)((int)iterator + 0x4) = *(undefined4 *)(iVar1 + 0x4);
    if (*(long *)((int)iterator + 0x4) != 0x0)
    {
      uVar2 = (undefined2)((ulong)*(undefined4 *)((int)iterator + 0x4) >> 0x10);
      iVar1 = (int)*(undefined4 *)((int)iterator + 0x4);
      return CONCAT22(*(undefined2 *)(iVar1 + 0xa),*(undefined2 *)(iVar1 + 0x8));
    }
  }
  return 0x0;
}



int __cdecl16far random_int_range(int min,int max)
{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iStack_12;
  int iStack_10;
  
                // Random integer in range [param_1, param_2] inclusive. Uses linear
                // congruential method.
  uVar1 = rand_next_internal_far_u15();
  iVar2 = (max - min) + 0x1;
  if (iVar2 == 0x0)
  {
    return min;
  }
  iStack_10 = 0x1;
  iStack_12 = min;
  while( true )
  {
    if (max < iStack_12)
    {
      return max;
    }
    lVar3 = (long)iStack_10 * (long)(0x7fff / (sqword)(long)iVar2);
    if (((int)uVar1 <= lVar3) && ((true || (uVar1 <= (uint)lVar3)))) break;
    iStack_12 += 0x1;
    iStack_10 += 0x1;
  }
  return iStack_12;
}



void __stdcall16far far_noop_stub_1008_2(void)
{
  return;
}



void __stdcall16far far_noop_stub_1008_3(void)
{
  return;
}



void __stdcall16far far_noop_stub_1008_4(void)
{
  return;
}



void __stdcall16far far_noop_stub_1008_5(void)
{
  return;
}



void __stdcall16far far_noop_stub_1008_6(void)
{
  return;
}



void __stdcall16far far_noop_stub_1008_7(void)
{
  return;
}



u16 __stdcall16far far_return_zero_stub_1008(void)
{
  return 0x0;
}



void __stdcall16far far_noop_stub_1008_8(void)
{
  return;
}



u16 __stdcall16far far_return_zero_stub_1008_2(void)
{
  return 0x0;
}



// Zero-initializes a 12-byte structure by calling the 6-byte zero initializer twice.

void * __stdcall16far zero_init_12bytes_struct(void *ptr)
{
  zero_init_struct_6bytes(ptr);
  zero_init_struct_6bytes((void *)((int)ptr + 0x6));
  return ptr;
}



// Copies two 6-byte structures into a single 12-byte destination structure.

void * __stdcall16far copy_two_6byte_structs_to_12byte(void *dest,void *src1,void *src2)
{
  undefined2 in_stack_0000000a;
  undefined4 *in_stack_0000000c;
  undefined2 in_stack_0000000e;
  
  *_dest = *in_stack_0000000c;
  *(undefined2 *)((int)dest + 0x4) = *(undefined2 *)(in_stack_0000000c + 0x1);
  *(undefined4 *)((int)dest + 0x6) = *(undefined4 *)src2;
  *(undefined2 *)((int)dest + 0xa) = *(undefined2 *)((int)src2 + 0x4);
  return dest;
}



void __stdcall16far pack_two_3word_structs(void *dest, int w1_1, int w1_2, int w1_3, int w2_1, int w2_2, int w2_3)
{
    pack_3words_reverse(dest, w2_1, w2_2, w2_3);
    pack_3words_reverse((void *)((char *)dest + 6), w1_1, w1_2, w1_3);
}



// Alternative routine to copy two 6-byte structures into a contiguous 12-byte
// destination.

void __stdcall16far
copy_two_6byte_structs_to_12byte_v2(void *dest,void *src1,void *src2)
{
  copy_struct_6bytes(dest,src1);
  copy_struct_6bytes((void *)((int)dest + 0x6),src1);
  return;
}



// Splits a 12-byte structure into two separate 6-byte destinations.

void __stdcall16far split_12byte_struct_to_two_6byte(void *src,void *dest1,void *dest2)
{
  void *in_stack_0000000a;
  void *in_stack_0000000c;
  
  copy_struct_6bytes((void *)in_stack_0000000c,
                     (void *)((ulong)in_stack_0000000c >> 0x10));
  copy_struct_6bytes(dest2,in_stack_0000000a);
  return;
}



// Copies the first 6 bytes of a structure to a destination and then calculates the
// absolute difference between those bytes and the second 6 bytes of the source.

void __stdcall16far calc_abs_diff_between_halves_of_12byte_struct(void *dest, void *src)
{
    copy_struct_6bytes(dest, src);
    calc_abs_diff_3ints((int *)((char *)dest + 6), (int *)src);
}



// Simple utility to set a 16-bit value at a far pointer.

void * __stdcall16far set_u16_logic(void *dest,int value)
{
  undefined2 in_stack_00000008;
  
  *_dest = in_stack_00000008;
  return dest;
}



// Zero-initializes a 6-byte structure.

void * __stdcall16far zero_init_6bytes_logic(void *ptr)
{
  undefined2 in_stack_00000006;
  
  *_ptr = 0x0;
  *(undefined2 *)((int)ptr + 0x4) = 0x0;
  return ptr;
}



// Retrieves a 32-bit data point from the history buffer at the specified index.
// Performs bounds checking and returns 0 if the index is invalid.

long __stdcall16far Data_History_Object_Get_Point_At_Index(void *this,long index)
{
  undefined2 in_stack_00000006;
  undefined4 uStack_6;
  
  uStack_6 = 0x0;
  if ((*(long *)((int)this + 0x6) != 0x0) &&
     ((ulong)index < *(ulong *)((int)this + 0xa)))
  {
    uStack_6 = *(long *)((int)*(undefined4 *)((int)this + 0x6) + (int)index * 0x4);
  }
  return uStack_6;
}



void * __stdcall16far init_word_pair(void *dest,int w1,int w2)
{
  undefined2 in_stack_0000000a;
  
                // Initializes 2-word structure: [0]=param_2, [1]=param_3. Returns
                // param_1.
  *_dest = w2;
  *(undefined2 *)((int)dest + 0x2) = in_stack_0000000a;
  return dest;
}



void * __stdcall16far zero_init_u32_ptr(void *dest)
{
  undefined2 in_stack_00000006;
  
  *_dest = 0x0;
  *(undefined2 *)((int)dest + 0x2) = 0x0;
  return dest;
}



void __stdcall16far set_u32_ptr(void *dest,int low,int high)
{
  undefined2 in_stack_0000000a;
  
  *(undefined2 *)((int)dest + 0x2) = in_stack_0000000a;
  *_dest = high;
  return;
}



void __stdcall16far void_noop_stub_1008_9490(void)
{
  return;
}



void __stdcall16far void_noop_stub_1008_9494(void)
{
  return;
}



int __stdcall16far far_false_stub(void)
{
  return 0x0;
}



int __stdcall16far Turn_Manager_Has_Active_Sequence_maybe_Logic(void *this)
{
  undefined2 in_stack_00000006;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  if ((*(long *)((int)this + 0xa) != 0x0) &&
     (*(int *)((int)*(undefined4 *)((int)this + 0xa) + 0x8) != 0x0))
  {
    uStack_4 = 0x1;
  }
  return uStack_4;
}



// Retrieves the value from the properties table (0x3A4) corresponding to the gameplay
// sub-object's type index.

int __stdcall16far Gameplay_SubObject_get_table_value_logic(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(int *)(*(int *)((int)this + 0x4) * 0x6 + 0x3a4);
}



// Retrieves the second 16-bit field from the properties table entry corresponding to
// the gameplay sub-object's type index.

int __stdcall16far Gameplay_SubObject_get_table_value_field2_logic(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(int *)(*(int *)((int)this + 0x4) * 0x6 + 0x3a6);
}



// Updates the internal value of a gameplay sub-object for each simulation tick.
// Depending on the object's behavior flags (at 0x3A8), it can perform ping-ponging
// increments/decrements or standard wrapping cycles between the minimum and maximum
// values defined in the properties table.

void __stdcall16far Gameplay_SubObject_Process_Tick_Logic(void *this)
{
  int iVar1;
  undefined2 in_stack_00000006;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x4) * 0x6 + 0x3a8);
  if (iVar1 == 0x2)
  {
    if (*(int *)((int)this + 0x2) == 0x1)
    {
      *(int *)this = *(int *)this + -0x1;
      iVar1 = *(int *)((int)this + 0x4) * 0x6;
      if (*(int *)this < *(int *)(iVar1 + 0x3a4))
      {
        *(int *)this = *(int *)(iVar1 + 0x3a4) + 0x1;
        *(undefined2 *)((int)this + 0x2) = 0x0;
        return;
      }
    }
    else
    {
      *(int *)this = *(int *)this + 0x1;
      iVar1 = *(int *)((int)this + 0x4) * 0x6;
      if (*(int *)(iVar1 + 0x3a6) < *(int *)this)
      {
        *(int *)this = *(int *)(iVar1 + 0x3a6) + -0x1;
        *(undefined2 *)((int)this + 0x2) = 0x1;
        return;
      }
    }
  }
  else if ((iVar1 != 0x3) && (iVar1 != 0x4))
  {
    *(int *)this = *(int *)this + 0x1;
    iVar1 = *(int *)((int)this + 0x4) * 0x6;
    if (*(int *)(iVar1 + 0x3a6) < *(int *)this)
    {
      *(undefined2 *)this = *(undefined2 *)(iVar1 + 0x3a4);
    }
  }
  return;
}



// Returns true (1) if the first field of the properties table entry for this sub-object
// is non-zero. Used for basic state validation.

int __stdcall16far Gameplay_SubObject_Check_Field1_NonZero_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(int *)(*(int *)((int)this + 0x4) * 0x6 + 0x3a4) != 0x0)
  {
    return 0x1;
  }
  return 0x0;
}



int __stdcall16far search_array_for_value(int *base_array,int value,int category)
{
  undefined4 *puVar1;
  undefined2 in_DX;
  int iStack_8;
  undefined4 uStack_6;
  
                // Searches for param_2 in an array retrieved by category/type param_3.
                // Returns 1 if found, 0 if not found.
  puVar1 = get_array_element_6bytes(base_array,value);
  uStack_6 = (undefined4 *)CONCAT22(in_DX,puVar1);
  iStack_8 = 0x0;
  while( true )
  {
    if (*(int *)(puVar1 + 0x1) <= iStack_8)
    {
      return 0x0;
    }
    if (*(int *)((int)*uStack_6 + iStack_8 * 0x2) == category) break;
    iStack_8 += 0x1;
  }
  return 0x1;
}



int __stdcall16far get_const_5_stub(void)
{
  return 0x5;
}



// Retrieves a 16-bit value from a specific offset within a nested sub-component.

int __stdcall16far get_u16_from_offset_16_plus_2(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(int *)((int)*(undefined4 *)((int)this + 0x16) + 0x2);
}



void __stdcall16far Game_Settings_Manager_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x2c8;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  Base_Object_dtor_2014_Logic(this);
  return;
}



// A simple stub function that returns the constant value 10.

int __stdcall16far get_const_10_stub(void)
{
  return 0xa;
}



// A simple stub function that returns the constant value 3.

int __stdcall16far get_const_3_stub(void)
{
  return 0x3;
}



// A simple stub function that returns the constant value 3. Duplicate instance.

int __stdcall16far get_const_3_stub_2(void)
{
  return 0x3;
}



u16 __stdcall16far const_0_stub_1010_18e8(void)
{
  return 0x0;
}



u16 __stdcall16far const_1_stub_1010_18ee(void)
{
  return 0x1;
}



u16 __stdcall16far const_0_stub_1010_1dce(void)
{
  return 0x0;
}



u16 __stdcall16far const_0_stub_1010_1dd4(void)
{
  return 0x0;
}



void __stdcall16far void_noop_stub_1010_3aa6(void)
{
  return;
}



u16 __stdcall16far const_0_stub_1010_3abc(void)
{
  return 0x0;
}



// Retrieves a 16-bit value from a global lookup table at 0x139A based on the provided
// index.

int __stdcall16far get_table_139A_entry_logic(int index)
{
  int in_stack_00000008;
  
  return *(int *)(in_stack_00000008 * 0x2 + 0x139a);
}



int __stdcall16far get_const_1_stub_1010_60b4(void)
{
  return 0x1;
}



int __stdcall16far get_const_1_stub_1010_60ba(void)
{
  return 0x1;
}



int __stdcall16far get_const_1_stub_1010_60c0(void)
{
  return 0x1;
}



int __stdcall16far get_const_1_stub_1010_60c6(void)
{
  return 0x1;
}



// Iterates through a collection using virtual methods (count at +0x10, next at +4) and
// returns the first non-zero item found.

long __stdcall16far Collection_Find_First_NonZero_Item_Logic(void *this,u16 param_2)
{
  undefined2 *puVar1;
  long lVar2;
  ulong uStack_e;
  ulong uStack_a;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x10);
  uStack_a = (*(code *)*puVar1)();
  uStack_e = 0x0;
  while( true )
  {
    if (uStack_a <= uStack_e)
    {
      return 0x0;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x4);
    lVar2 = (*(code *)*puVar1)();
    if (lVar2 != 0x0) break;
    uStack_e += 0x1;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x8);
  (*(code *)*puVar1)();
  return lVar2;
}



// Invokes a virtual reset or clear method (index 0x10) on the source collection object.

void __stdcall16far Collection_Reset_or_Clear_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x10);
  (*(code *)*puVar1)();
  return;
}



// Sets the source collection object at offset 4. Destroys the existing object if
// present.

void __stdcall16far
Collection_Set_Source_Object_Logic(void *this,long source_collection)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x6) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x4);
    (*(code *)*puVar1)();
  }
  *(long *)((int)this + 0x4) = source_collection;
  return;
}



// Checks if the source collection is non-empty and, if so, invokes a virtual update or
// notification method (index 8).

void __stdcall16far Collection_Notify_Update_if_NotEmpty_Logic(void *this,u16 param_2)
{
  long lVar1;
  u16 *puVar1;
  u16 *puVar2;
  
  puVar1 = (u16 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x10);
  lVar1 = (*(code *)*puVar1)();
  if (lVar1 != 0x0)
  {
    puVar2 = (u16 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x8);
    (*(code *)*puVar2)();
  }
  return;
}



// Invokes a virtual method (index 0xC) on the source collection object.

void __stdcall16far Collection_Invoke_Method_0C_Logic(void *this,u16 param_2)
{
  u16 *puVar1;
  
  puVar1 = (u16 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0xc);
  (*(code *)*puVar1)();
  return;
}



// Constructor for Collection_Object_Subclass_958E. Initializes vtable to 1010:958E.
// Calls base constructor 1008:3B5E.

void * __stdcall16far Collection_Object_Subclass_ctor_958E(void *this)
{
  undefined2 in_stack_00000006;
  
  Collection_Object_Base_ctor_3B5E(this);
  *_this = 0x958e;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



// Destructor for the 0x958E collection subclass. Calls the base collection destructor.

void __stdcall16far Collection_Object_Subclass_dtor_958E(void *this)
{
  u16 in_stack_00000006;
  
  *_this = 0x958e;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  Collection_Object_Base_dtor_3B5E(this,in_stack_00000006);
  return;
}



// Retrieves a 16-bit value from a specific offset within a nested sub-component.
// Duplicate logic.

int __stdcall16far get_u16_from_offset_16_plus_2_Logic_2(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(int *)((int)*(undefined4 *)((int)this + 0x16) + 0x2);
}



// Searches a collection for an item with a matching 16-bit type ID and returns its
// associated value.

int __stdcall16far
Collection_Find_Value_by_Type_Logic
          (int arg1,int arg2,long collection_head,int search_type)
{
  u16 uVar1;
  long lVar1;
  u8 local_a [0x8];
  
  if (collection_head != 0x0)
  {
    init_long_pair(local_a,collection_head);
    while( true )
    {
      lVar1 = get_next_list_item(local_a);
      uVar1 = (u16)((ulong)lVar1 >> 0x10);
      if (lVar1 == 0x0) break;
      if (*(int *)((int)lVar1 + 0x4) == search_type)
      {
        return *(int *)((int)lVar1 + 0x6);
      }
    }
  }
  return 0x0;
}



// Iterates through a 16-bit word array within a specified index range and returns the
// count of non-zero entries.

int __stdcall16far
Array_Count_NonZero_Entries_in_Range_Logic
          (int arg1,int segment,int end_idx,int start_idx,int *array_base,u16 param_6)
{
  int iStack_6;
  int iStack_4;
  
  iStack_4 = 0x0;
  for (iStack_6 = start_idx; iStack_6 <= end_idx; iStack_6 += 0x1)
  {
    if (array_base[iStack_6] != 0x0)
    {
      iStack_4 += 0x1;
    }
  }
  return iStack_4;
}



void __stdcall16far void_noop_stub_1018_1f76(void)
{
  return;
}



void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_2(long struct_ref)
{
  void *in_stack_00000008;
  
  copy_struct_6bytes((void *)in_stack_00000008,
                     (void *)((ulong)in_stack_00000008 >> 0x10));
  return;
}



void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_4222(long struct_ref)
{
  void *in_stack_00000008;
  
  copy_struct_6bytes((void *)in_stack_00000008,
                     (void *)((ulong)in_stack_00000008 >> 0x10));
  return;
}



void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_4216(long struct_ref)
{
  void *in_stack_00000008;
  
  copy_struct_6bytes((void *)in_stack_00000008,
                     (void *)((ulong)in_stack_00000008 >> 0x10));
  return;
}



void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_421c(long struct_ref)
{
  void *in_stack_00000008;
  
  copy_struct_6bytes((void *)in_stack_00000008,
                     (void *)((ulong)in_stack_00000008 >> 0x10));
  return;
}



void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_4210(long struct_ref)
{
  void *in_stack_00000008;
  
  copy_struct_6bytes((void *)in_stack_00000008,
                     (void *)((ulong)in_stack_00000008 >> 0x10));
  return;
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
