/*
 * Source: outpost.c
 * Theme: misc
 * Chunk: 2/3
 * Original lines (combined): 15290-48089
 * Boundaries: top-level declarations/definitions only
 */




// Iterates through a linked list starting from the provided head and returns the item
// at the specified 0-based index (`param_2`). Returns 0 if the index is out of bounds.

long __stdcall16far list_get_item_at_index(void *list_head, int index)
{
    long item;
    int i;
    unsigned char iterator[8];
    
    init_long_pair(iterator, (long)list_head);
    i = 0;
    do
    {
        item = get_next_list_item(iterator);
        if (item == 0)
        {
            return 0;
        }
        if (i == index)
        {
            return item;
        }
        i++;
    } while (1);
}



long __stdcall16far get_next_list_item(void *iterator)
{
    long *it = (long *)iterator;
    char *head = (char *)it[0];
    
    if (head == NULL || *(short *)(head + 8) == 0)
    {
        return 0;
    }
    
    char *current = (char *)it[1];
    char *node = (current == NULL) ? head : current;
    char *next_node = *(char **)(node + 4);
    
    it[1] = (long)next_node;
    
    if (next_node == NULL)
    {
        return 0;
    }
    
    return *(long *)(next_node + 8);
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
    zero_init_struct_6bytes((void *)((char *)ptr + 6));
    return ptr;
}


// Copies two 6-byte structures into a single 12-byte destination structure.

void * __stdcall16far copy_two_6byte_structs_to_12byte(void *dest, void *src1, void *src2)
{
    copy_struct_6bytes(dest, src1);
    copy_struct_6bytes((void *)((char *)dest + 6), src2);
    return dest;
}

void __stdcall16far pack_two_3word_structs(void *dest, int w1_1, int w1_2, int w1_3, int w2_1, int w2_2, int w2_3)
{
    pack_3words_reverse(dest, w2_1, w2_2, w2_3);
    pack_3words_reverse((void *)((char *)dest + 6), w1_1, w1_2, w1_3);
}

// Alternative routine to copy two 6-byte structures into a contiguous 12-byte
// destination.

void __stdcall16far copy_two_6byte_structs_to_12byte_v2(void *dest, void *src1, void *src2)
{
    copy_struct_6bytes(dest, src1);
    copy_struct_6bytes((void *)((char *)dest + 6), src2);
}

// Splits a 12-byte structure into two separate 6-byte destinations.

void __stdcall16far split_12byte_struct_to_two_6byte(void *src, void *dest1, void *dest2)
{
    copy_struct_6bytes(dest2, src);
    copy_struct_6bytes(dest1, (void *)((char *)src + 6));
}

// Copies the first 6 bytes of a structure to a destination and then calculates the
// absolute difference between those bytes and the second 6 bytes of the source.

void __stdcall16far calc_abs_diff_between_halves_of_12byte_struct(void *dest, void *src)
{
    copy_struct_6bytes(dest, src);
    calc_abs_diff_3ints((int *)((char *)dest + 6), (int *)src);
}

// Simple utility to set a 16-bit value at a far pointer.

void * __stdcall16far set_u16_logic(void *dest, int value)
{
    *(short *)dest = (short)value;
    return dest;
}

// Zero-initializes a 6-byte structure.

void * __stdcall16far zero_init_6bytes_logic(void *ptr)
{
    short *p = (short *)ptr;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    return ptr;
}



// Retrieves a 32-bit data point from the history buffer at the specified index.
// Performs bounds checking and returns 0 if the index is invalid.

// Win16 artifact: `in_stack_00000006` was the segment half of the far `index` pointer
// at [BP+6]; in flat model `long index` occupies [BP+4..5] only. Removed.
long __stdcall16far Data_History_Object_Get_Point_At_Index(void *this, long index)
{
  long result = 0;
  if ((*(long *)((int)this + 0x6) != 0x0) &&
     ((ulong)index < *(ulong *)((int)this + 0xa)))
  {
    result = *(long *)((int)*(undefined4 *)((int)this + 0x6) + (int)index * 0x4);
  }
  return result;
}



void * __stdcall16far init_word_pair(void *dest, int w1, int w2)
{
    short *p = (short *)dest;
    p[0] = (short)w1;
    p[1] = (short)w2;
    return dest;
}

void * __stdcall16far zero_init_u32_ptr(void *dest)
{
    *(long *)dest = 0;
    return dest;
}

void __stdcall16far set_u32_ptr(void *dest, int low, int high)
{
    short *p = (short *)dest;
    p[0] = (short)low;
    p[1] = (short)high;
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
    char *ptr = (char *)this;
    void *seq_ptr = *(void **)(ptr + 0xA);
    if (seq_ptr != NULL && *(int *)((char *)seq_ptr + 8) != 0)
    {
        return 1;
    }
    return 0;
}

// Retrieves the value from the properties table (0x3A4) corresponding to the gameplay
// sub-object's type index.

int __stdcall16far Gameplay_SubObject_get_table_value_logic(void *this)
{
    int type_index = *(int *)((char *)this + 4);
    return *(int *)(type_index * 6 + 0x3A4);
}

// Retrieves the second 16-bit field from the properties table entry corresponding to
// the gameplay sub-object's type index.

int __stdcall16far Gameplay_SubObject_get_table_value_field2_logic(void *this)
{
    int type_index = *(int *)((char *)this + 4);
    return *(int *)(type_index * 6 + 0x3A6);
}

// Updates the internal value of a gameplay sub-object for each simulation tick.
// Depending on the object's behavior flags (at 0x3A8), it can perform ping-ponging
// increments/decrements or standard wrapping cycles between the minimum and maximum
// values defined in the properties table.

void __stdcall16far Gameplay_SubObject_Process_Tick_Logic(void *this)
{
    char *obj = (char *)this;
    int type_index = *(int *)(obj + 4);
    int behavior = *(int *)(type_index * 6 + 0x3A8);
    int min_val = *(int *)(type_index * 6 + 0x3A4);
    int max_val = *(int *)(type_index * 6 + 0x3A6);
    
    if (behavior == 2)
    {
        if (*(int *)(obj + 2) == 1) // Decrementing
        {
            *(int *)obj -= 1;
            if (*(int *)obj < min_val)
            {
                *(int *)obj = min_val + 1;
                *(int *)(obj + 2) = 0; // Switch to incrementing
            }
        }
        else // Incrementing
        {
            *(int *)obj += 1;
            if (*(int *)obj > max_val)
            {
                *(int *)obj = max_val - 1;
                *(int *)(obj + 2) = 1; // Switch to decrementing
            }
        }
    }
    else if (behavior != 3 && behavior != 4)
    {
        *(int *)obj += 1;
        if (*(int *)obj > max_val)
        {
            *(int *)obj = min_val;
        }
    }
}

// Returns true (1) if the first field of the properties table entry for this sub-object
// is non-zero. Used for basic state validation.

int __stdcall16far Gameplay_SubObject_Check_Field1_NonZero_Logic(void *this)
{
    int type_index = *(int *)((char *)this + 4);
    if (*(int *)(type_index * 6 + 0x3A4) != 0)
    {
        return 1;
    }
    return 0;
}



int __stdcall16far search_array_for_value(int *base_array, int value, int category)
{
    struct ArrayInfo {
        short *data;
        short count;
    } *info;
    
    info = (struct ArrayInfo *)get_array_element_6bytes(base_array, category);
    if (info == NULL)
    {
        return 0;
    }
    
    for (int i = 0; i < info->count; i++)
    {
        if (info->data[i] == (short)value)
        {
            return 1;
        }
    }
    return 0;
}

int __stdcall16far get_const_5_stub(void)
{
  return 0x5;
}



// Retrieves a 16-bit value from a specific offset within a nested sub-component.

int __stdcall16far get_u16_from_offset_16_plus_2(void *this)
{
    char *ptr = (char *)this;
    void *sub = *(void **)(ptr + 0x16);
    return *(short *)((char *)sub + 2);
}



void __stdcall16far Game_Settings_Manager_dtor(void *this)
{
    *(void **)this = (void *)0x101002c8; // Restore vtable?
    Base_Object_dtor_2014_Logic(this);
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
    // index is usually at [BP+6] for stdcall far?
    // Wait, get_table_139A_entry_logic(int index)
    // RETF 0x2
    return *(int *)((char *)0x139A + (index * 2));
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

long __stdcall16far Collection_Find_First_NonZero_Item_Logic(void *this, u16 param_2)
{
    typedef long (__stdcall16far *VFunc)(void);
    VFunc *vtable = *(VFunc **)((char *)this + 4);
    
    long count = vtable[4](); // 0x10 / 4
    for (long i = 0; i < count; i++)
    {
        long item = vtable[1](); // 0x04 / 4
        if (item != 0)
        {
            vtable[2](); // 0x08 / 4
            return item;
        }
    }
    vtable[2](); // 0x08 / 4
    return 0;
}

// Invokes a virtual reset or clear method (index 0x10) on the source collection object.

void __stdcall16far Collection_Reset_or_Clear_Logic(void *this)
{
    typedef void (__stdcall16far *VFunc)(void);
    VFunc *vtable = *(VFunc **)((char *)this + 4);
    vtable[4](); // 0x10 / 4
}

// Sets the source collection object at offset 4. Destroys the existing object if
// present.

void __stdcall16far Collection_Set_Source_Object_Logic(void *this, long source_collection)
{
    typedef void (__stdcall16far *VFunc)(void);
    char *obj = (char *)this;
    
    if (*(long *)(obj + 4) != 0)
    {
        VFunc *vtable = *(VFunc **)(*(long *)(obj + 4));
        vtable[0](); // Virtual destructor or release?
    }
    *(long *)(obj + 4) = source_collection;
}

// Checks if the source collection is non-empty and, if so, invokes a virtual update or
// notification method (index 8).

void __stdcall16far Collection_Notify_Update_if_NotEmpty_Logic(void *this, u16 param_2)
{
    typedef long (__stdcall16far *VFunc)(void);
    VFunc *vtable = *(VFunc **)((char *)this + 4);
    
    if (vtable[4]() != 0) // 0x10 / 4
    {
        ((void (__stdcall16far *)(void))vtable[2])(); // 0x08 / 4
    }
}

// Invokes a virtual method (index 0xC) on the source collection object.

void __stdcall16far Collection_Invoke_Method_0C_Logic(void *this, u16 param_2)
{
    typedef void (__stdcall16far *VFunc)(void);
    VFunc *vtable = *(VFunc **)((char *)this + 4);
    vtable[3](); // 0x0C / 4
}



// Constructor for Collection_Object_Subclass_958E. Initializes vtable to 1010:958E.
// Calls base constructor 1008:3B5E.

void * __stdcall16far Collection_Object_Subclass_ctor_958E(void *this)
{
    Collection_Object_Base_ctor_3B5E(this);
    *(void **)this = (void *)0x1010958e; // Set vtable
    return this;
}

// Destructor for the 0x958E collection subclass. Calls the base collection destructor.

void __stdcall16far Collection_Object_Subclass_dtor_958E(void *this)
{
    *(void **)this = (void *)0x1010958e; // Set vtable
    Collection_Object_Base_dtor_3B5E(this, 0); // Pass dummy arg?
}

// Retrieves a 16-bit value from a specific offset within a nested sub-component.
// Duplicate logic.

int __stdcall16far get_u16_from_offset_16_plus_2_Logic_2(void *this)
{
    char *ptr = (char *)this;
    void *sub = *(void **)(ptr + 0x16);
    return *(short *)((char *)sub + 2);
}

// Searches a collection for an item with a matching 16-bit type ID and returns its
// associated value.

int __stdcall16far Collection_Find_Value_by_Type_Logic(int arg1, int arg2, long collection_head, int search_type)
{
    unsigned char iterator[8];
    long item;
    
    if (collection_head != 0)
    {
        init_long_pair(iterator, collection_head);
        while ((item = get_next_list_item(iterator)) != 0)
        {
            if (*(short *)((char *)item + 4) == (short)search_type)
            {
                return *(short *)((char *)item + 6);
            }
        }
    }
    return 0;
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



void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_2(void *p1, void *p2)
{
    copy_struct_6bytes((void *)0x10484228, p2);
}

void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_4222(void *p1, void *p2)
{
    copy_struct_6bytes((void *)0x10484222, p2);
}

void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_4216(void *p1, void *p2)
{
    copy_struct_6bytes((void *)0x10484216, p2);
}

void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_421c(void *p1, void *p2)
{
    copy_struct_6bytes((void *)0x1048421c, p2);
}

void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_4210(void *p1, void *p2)
{
    copy_struct_6bytes((void *)0x10484210, p2);
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
