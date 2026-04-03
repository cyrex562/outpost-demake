/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 5/19
 * Original lines (combined): 22697-25692
 * Boundaries: top-level declarations/definitions only
 */

 #include <ghidra.h>
 #include <outpost_types.h>
 #include <win16_api.h>

extern u16   g_HeapContext;
extern void  *_p_StringPropertyTable;
extern void  *g_AllocatedBlock_Offset;
extern void  *g_AllocatedBlock_Segment;
extern const char s__s___02ld_1050_0cea[];
extern const char s__s___02ld_1050_0cf4[];
/* _p_GlobalResourceManager overlaps p_GlobalResourceManager (Ghidra far-ptr alias) */
#define _p_GlobalResourceManager p_GlobalResourceManager
extern void  *p_GlobalResourceManager;

/* â”€â”€ part005 fixup: forward decls â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€â”€ */
typedef struct astruct_491 astruct_491;
typedef struct astruct_442 astruct_442;
typedef struct astruct_152 astruct_152;
void  *init_memory_allocator(void);
void  *get_array_element_6bytes(void *, int);
void  *UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(void *);
char  *Lookup_Entity_Name_by_ID_Logic_bd80(u16 entity_id);
long   UI_Transaction_Item_Type3_ctor(long, long, long, long);
long   UI_Transaction_Item_Type2_ctor();  /* K&R: call sites pass variable args */
void  *UI_Relationship_Manager_Find_Link_by_Strings_Logic(void *, char *, char *);
long   Colony_Batch_Init_Production_Items_General_Logic_4e78();  /* K&R: varargs */
void  *construct_object_with_vtable(astruct_491 *, u16);
int    search_array_for_value(void *, int, int);
long   init_long_pair(void *, long);
long   get_next_list_item(void *);


// Searches the linked list stored at offset 0x12 of the input structure for an item
// whose associated name string (offset 4) matches the provided string `param_2`. Uses
// case-sensitive string comparison.

void * __stdcall16far
UI_Find_Item_In_List_Offset_12_by_String_Logic(void *this,char *search_name)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  char *in_stack_00000008;
  void *pvStack_12;
  undefined1 local_a [0x8];
  
  if (in_stack_00000008 == NULL)
  {
    return NULL;
  }
  init_long_pair(local_a,*(long *)((int)this + 0x12));
  pvStack_12 = NULL;
  do
  {
    pvVar3 = (void *)get_next_list_item(local_a);
    iVar2 = (int)((ulong)pvVar3 >> 0x10);
    pvVar1 = pvStack_12;
    if (iVar2 == 0x0 && (void *)pvVar3 == NULL) break;
    iVar2 = strcmp_case_sensitive
                      ((byte *)*(undefined4 *)((int)(void *)pvVar3 + 0x4),
                       in_stack_00000008);
    pvVar1 = pvVar3;
  } while (iVar2 != 0x0);
  pvStack_12 = pvVar1;
  return (void *)pvStack_12;
}



// Searches the linked list stored at offset 10 (0xA) of the input structure for an item
// whose associated name string (offset 4) matches the provided string `param_2`. Uses
// case-sensitive string comparison.

void * __stdcall16far
UI_Find_Item_In_List_Offset_0A_by_String_Logic(void *this,char *search_name)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  char *in_stack_00000008;
  void *pvStack_12;
  undefined1 local_a [0x8];
  
  if (in_stack_00000008 == NULL)
  {
    return NULL;
  }
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  pvStack_12 = NULL;
  do
  {
    pvVar3 = (void *)get_next_list_item(local_a);
    iVar2 = (int)((ulong)pvVar3 >> 0x10);
    pvVar1 = pvStack_12;
    if (iVar2 == 0x0 && (void *)pvVar3 == NULL) break;
    iVar2 = strcmp_case_sensitive
                      ((byte *)*(undefined4 *)((int)(void *)pvVar3 + 0x4),
                       in_stack_00000008);
    pvVar1 = pvVar3;
  } while (iVar2 != 0x0);
  pvStack_12 = pvVar1;
  return (void *)pvStack_12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// Allocates a 0x1AA byte string property table using segment 1050 heap context.
// Registers the table at global far pointer 1050:06E0.
// Exhaustively initializes 70+ entries with resource IDs (0x6E4 to 0xC62) and segment
// 1050 references.

void * __stdcall16far res_init_string_property_table_logic(void **table_ptr_out)
{
  undefined *heap_ctx;
  void *pvVar1;
  undefined *reg_dx;
  int iVar2;
  undefined2 uVar3;
  undefined2 in_stack_00000006;
  
  _p_StringPropertyTable = table_ptr_out;
  if (g_AllocatedBlock_Offset == NULL)
  {
    heap_ctx = init_memory_allocator();
  }
  else
  {
    reg_dx = g_AllocatedBlock_Segment;
    heap_ctx = g_AllocatedBlock_Offset;
  }
  pvVar1 = alloc_with_hooks(0x1aa,0x1,heap_ctx);
  *table_ptr_out = pvVar1;
  table_ptr_out[0x1] = reg_dx;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x6) = 0x6e4;
  *(undefined2 *)(iVar2 + 0x8) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xa) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xc) = 0x6ea;
  *(undefined2 *)(iVar2 + 0xe) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x10) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x12) = 0x6ee;
  *(undefined2 *)(iVar2 + 0x14) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x16) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x18) = 0x6f2;
  *(undefined2 *)(iVar2 + 0x1a) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x1c) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x1e) = 0x6f6;
  *(undefined2 *)(iVar2 + 0x20) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x22) = 0x4;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x24) = 0x6fe;
  *(undefined2 *)(iVar2 + 0x26) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x28) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x2a) = 0x702;
  *(undefined2 *)(iVar2 + 0x2c) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x2e) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x30) = 0x708;
  *(undefined2 *)(iVar2 + 0x32) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x34) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x36) = 0x70e;
  *(undefined2 *)(iVar2 + 0x38) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x3a) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x3c) = 0x714;
  *(undefined2 *)(iVar2 + 0x3e) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x40) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x42) = 0x71a;
  *(undefined2 *)(iVar2 + 0x44) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x46) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x48) = 0x71e;
  *(undefined2 *)(iVar2 + 0x4a) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x4c) = 0x7;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x4e) = 0x72c;
  *(undefined2 *)(iVar2 + 0x50) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x52) = 0x6;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x54) = 0x738;
  *(undefined2 *)(iVar2 + 0x56) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x58) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x5a) = 0x73e;
  *(undefined2 *)(iVar2 + 0x5c) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x5e) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x60) = 0x744;
  *(undefined2 *)(iVar2 + 0x62) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x64) = 0x4;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x66) = 0x74c;
  *(undefined2 *)(iVar2 + 0x68) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x6a) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x6c) = 0x750;
  *(undefined2 *)(iVar2 + 0x6e) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x70) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x72) = 0x756;
  *(undefined2 *)(iVar2 + 0x74) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x76) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x78) = 0x75a;
  *(undefined2 *)(iVar2 + 0x7a) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x7c) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x7e) = 0x75e;
  *(undefined2 *)(iVar2 + 0x80) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x82) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x84) = 0x764;
  *(undefined2 *)(iVar2 + 0x86) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x88) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x8a) = 0x76a;
  *(undefined2 *)(iVar2 + 0x8c) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x8e) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x90) = 0x770;
  *(undefined2 *)(iVar2 + 0x92) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x94) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x96) = 0x774;
  *(undefined2 *)(iVar2 + 0x98) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x9a) = 0x4;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x9c) = 0x77c;
  *(undefined2 *)(iVar2 + 0x9e) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xa0) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xa2) = 0x780;
  *(undefined2 *)(iVar2 + 0xa4) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xa6) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xa8) = 0x782;
  *(undefined2 *)(iVar2 + 0xaa) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xac) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xae) = 0x786;
  *(undefined2 *)(iVar2 + 0xb0) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xb2) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xb4) = 0x78a;
  *(undefined2 *)(iVar2 + 0xb6) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xb8) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xba) = 0x78e;
  *(undefined2 *)(iVar2 + 0xbc) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xbe) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xc0) = 0x792;
  *(undefined2 *)(iVar2 + 0xc2) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xc4) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xc6) = 0x796;
  *(undefined2 *)(iVar2 + 0xc8) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xca) = 0x4;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xcc) = 0x79e;
  *(undefined2 *)(iVar2 + 0xce) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xd0) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xd2) = 0x7a0;
  *(undefined2 *)(iVar2 + 0xd4) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xd6) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xd8) = 0x7a4;
  *(undefined2 *)(iVar2 + 0xda) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xdc) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xde) = 0x7a6;
  *(undefined2 *)(iVar2 + 0xe0) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xe2) = 0x6;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xe4) = 0x7b2;
  *(undefined2 *)(iVar2 + 0xe6) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xe8) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xea) = 0x7b4;
  *(undefined2 *)(iVar2 + 0xec) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xee) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xf0) = 0x7ba;
  *(undefined2 *)(iVar2 + 0xf2) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xf4) = 0x2d;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xf6) = 0x814;
  *(undefined2 *)(iVar2 + 0xf8) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0xfa) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0xfc) = 0x81a;
  *(undefined2 *)(iVar2 + 0xfe) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x100) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x102) = 0x81c;
  *(undefined2 *)(iVar2 + 0x104) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x106) = 0x4b;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x108) = 0x8b2;
  *(undefined2 *)(iVar2 + 0x10a) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x10c) = 0x6;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x10e) = 0x8be;
  *(undefined2 *)(iVar2 + 0x110) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x112) = 0x4;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x11a) = 0x8c6;
  *(undefined2 *)(iVar2 + 0x11c) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x11e) = 0x35;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x120) = 0x930;
  *(undefined2 *)(iVar2 + 0x122) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x124) = 0x2e;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x114) = 0x98c;
  *(undefined2 *)(iVar2 + 0x116) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x118) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x126) = 0x98e;
  *(undefined2 *)(iVar2 + 0x128) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x12a) = 0x9;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x12c) = 0x9a0;
  *(undefined2 *)(iVar2 + 0x12e) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x130) = 0x1a;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x132) = 0x9d4;
  *(undefined2 *)(iVar2 + 0x134) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x136) = 0x8;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x138) = 0x9e4;
  *(undefined2 *)(iVar2 + 0x13a) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x13c) = 0x4a;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x144) = 0xa78;
  *(undefined2 *)(iVar2 + 0x146) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x148) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x14a) = 0xa7c;
  *(undefined2 *)(iVar2 + 0x14c) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x14e) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x150) = 0xa7e;
  *(undefined2 *)(iVar2 + 0x152) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x154) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x156) = 0xa80;
  *(undefined2 *)(iVar2 + 0x158) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x15a) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x15c) = 0xa86;
  *(undefined2 *)(iVar2 + 0x15e) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x160) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x168) = 0xa8a;
  *(undefined2 *)(iVar2 + 0x16a) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x16c) = 0x1b;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x16e) = 0xac0;
  *(undefined2 *)(iVar2 + 0x170) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x172) = 0x16;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x174) = 0xaec;
  *(undefined2 *)(iVar2 + 0x176) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x178) = 0x3e;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x17a) = 0xb68;
  *(undefined2 *)(iVar2 + 0x17c) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x17e) = 0x46;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x180) = 0xbf4;
  *(undefined2 *)(iVar2 + 0x182) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x184) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x186) = 0xbf6;
  *(undefined2 *)(iVar2 + 0x188) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x18a) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x18c) = 0xbfc;
  *(undefined2 *)(iVar2 + 0x18e) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x190) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x192) = 0xc02;
  *(undefined2 *)(iVar2 + 0x194) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x196) = 0xa;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x198) = 0xc16;
  *(undefined2 *)(iVar2 + 0x19a) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x19c) = 0x24;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x19e) = 0xc5e;
  *(undefined2 *)(iVar2 + 0x1a0) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x1a2) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)table_ptr_out;
  *(undefined2 *)(iVar2 + 0x1a4) = 0xc62;
  *(undefined2 *)(iVar2 + 0x1a6) = (undefined2)(uintptr_t)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)table_ptr_out + 0x1a8) = 0x44;
  return table_ptr_out;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Clears the global string property table reference and frees the associated memory.

void __stdcall16far res_cleanup_string_property_table_logic(void **table_ptr)
{
  undefined2 in_stack_00000006;
  
  _p_StringPropertyTable = 0x0;
                // WARNING: Load size is inaccurate
  free_if_not_null((void *)*table_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// References global property table 1050:06E0 and string manager 1050:14CC.
// Indirect calls via vtable offset 0x10 and 4.
// Uses formatted string at 1050:0CEA.

void __stdcall16far UI_Populate_Ship_Cargo_List_Logic(void *this,void *ship)
{
  undefined2 *puVar1;
  bool bVar2;
  astruct_491 *this_00;
  void *pvVar3;
  undefined4 *puVar4;
  char *pcVar5;
  void *pvVar6;
  uint extraout_DX;
  uint uVar7;
  u32 *puVar8;
  uint uVar9;
  uint uVar10;
  uint extraout_DX_00;
  undefined2 segmentAddress;
  ulong uVar12;
  void *pvVar13;
  undefined4 in_stack_00000008;
  undefined4 *puVar14;
  undefined2 in_stack_0000ffbe;
  ulong uStack_14;
  undefined4 *uStack_a;
  
  uVar9 = *(uint *)((int)this + 0x14);
  if (uVar9 != 0x0 || (undefined4 *)*(int *)((int)this + 0x12) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x12);
    (*(code *)*puVar1)();
    uVar9 = extraout_DX;
  }
  this_00 = allocate_memory(CONCAT22(in_stack_0000ffbe,0xc));
  uVar7 = uVar9 | (uint)this_00;
  if (uVar7 == 0x0)
  {
    pvVar3 = NULL;
    uVar7 = 0x0;
  }
  else
  {
    pvVar3 = construct_object_with_vtable(this_00,uVar9);
  }
  *(undefined2 *)((int)this + 0x12) = pvVar3;
  *(uint *)((int)this + 0x14) = uVar7;
  puVar4 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  segmentAddress = 0x1038;
  puVar8 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                     ((int)in_stack_00000008,(int)((ulong)in_stack_00000008 >> 0x10),
                      puVar4,uVar7);
  uStack_a = (undefined4 *)CONCAT22(puVar8,puVar4);
  puVar1 = (undefined2 *)((int)*uStack_a + 0x10);
  puVar14 = puVar4;
  uVar12 = (*(code *)*puVar1)(0x1038,puVar4,puVar8);
  uVar9 = (uint)(uVar12 >> 0x10);
  bVar2 = false;
  for (uStack_14 = 0x0; uStack_14 < uVar12; uStack_14 += 0x1)
  {
    segmentAddress = 0x1030;
    pvVar13 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_a);
    uVar7 = (uint)((ulong)pvVar13 >> 0x10);
    pvVar3 = (void *)pvVar13;
    uVar9 = uVar7 | (uint)pvVar3;
    if (((uVar9 != 0x0) && (*(long *)((int)pvVar3 + 0x1c) != 0x8000002)) &&
       ((*(int *)((int)pvVar3 + 0x12) == 0x5 || (*(int *)((int)pvVar3 + 0x12) == 0x6))))
    {
      uVar10 = *(uint *)((int)pvVar3 + 0x6) & 0xff;
      pcVar5 = Lookup_Entity_Name_by_ID_Logic_bd80(*(u16 *)((int)pvVar3 + 0xc));
      _wsprintf16((void *)CONCAT22(ship,(void *)((int)this + 0x22)),
                  s__s___02ld_1050_0cea,(char *)CONCAT22(uVar10,pcVar5));
      pcVar5 = strdup_allocate((char *)((int)this + 0x22));
      segmentAddress = 0x1000;
      uVar9 = uVar10;
      pvVar6 = allocate_memory(CONCAT22(puVar14,0x12));
      if (uVar9 != 0x0 || pvVar6 != NULL)
      {
        segmentAddress = 0x1018;
        UI_Transaction_Item_Type3_ctor
                  ((long)CONCAT22(uVar9,pvVar6),0x1,(long)CONCAT22(uVar10,pcVar5),
                   *(long *)((int)pvVar3 + 0x4));
      }
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x12) + 0x4);
      (*(code *)*puVar1)();
      bVar2 = true;
      uVar9 = extraout_DX_00;
    }
  }
  if (!bVar2)
  {
    pcVar5 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x441);
    segmentAddress = 0x1000;
    uVar7 = uVar9;
    pvVar3 = allocate_memory(CONCAT22(puVar14,0x12));
    if (uVar7 != 0x0 || pvVar3 != NULL)
    {
      segmentAddress = 0x1018;
      UI_Transaction_Item_Type3_ctor
                ((long)CONCAT22(uVar7,pvVar3),0x0,(long)CONCAT22(uVar9,pcVar5),0x0);
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x12) + 0x4)
    ;
    (*(code *)*puVar1)();
  }
  if (puVar8 != NULL || puVar4 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_a)(segmentAddress,puVar4,puVar8,0x1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// References global property table 1050:06E0 and string manager 1050:14CC.
// Indirect calls via vtable index 0, offset 4, and offset 0x10.
// Uses formatted string at 1050:0CF4.

void __stdcall16far
UI_Populate_Transfer_Shipment_List_Logic(void *this,void *ship_context)
{
  u16 entity_id;
  undefined4 *this_ptr;
  undefined2 *puVar1;
  bool bVar2;
  astruct_491 *this_00;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  undefined2 uVar8;
  uint extraout_DX;
  uint uVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  void *pvVar13;
  undefined2 uVar14;
  int iVar15;
  undefined2 unaff_SI;
  undefined2 segment_address;
  ulong uVar17;
  void *pvVar18;
  long lVar19;
  long lVar20;
  undefined4 in_stack_00000008;
  undefined2 uStack_3a;
  ulong uStack_14;
  
  segment_address = (undefined2)((ulong)in_stack_00000008 >> 0x10);
  iVar15 = (int)in_stack_00000008;
  lVar20 = *(long *)(iVar15 + 0x200);
  uVar11 = *(uint *)((int)this + 0x10);
  if (uVar11 != 0x0 || (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar1)();
    uVar11 = extraout_DX;
  }
  this_00 = allocate_memory(CONCAT22(unaff_SI,0xc));
  uVar9 = uVar11 | (uint)this_00;
  if (uVar9 == 0x0)
  {
    pvVar3 = NULL;
    uVar9 = 0x0;
  }
  else
  {
    pvVar3 = construct_object_with_vtable(this_00,uVar11);
  }
  *(undefined2 *)((int)this + 0xe) = pvVar3;
  *(uint *)((int)this + 0x10) = uVar9;
  this_ptr = (undefined4 *)*(undefined4 *)(iVar15 + 0xc);
  puVar4 = (undefined4 *)this_ptr;
  puVar1 = (undefined2 *)((int)*this_ptr + 0x10);
  uVar17 = (*(code *)*puVar1)(0x1000,puVar4,*(undefined2 *)(iVar15 + 0xe));
  iVar15 = (int)(uVar17 >> 0x10);
  bVar2 = false;
  for (uStack_14 = 0x0; uStack_14 < uVar17; uStack_14 += 0x1)
  {
    pvVar18 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(this_ptr);
    iVar10 = (int)((ulong)pvVar18 >> 0x10);
    pvVar3 = (void *)pvVar18;
    if (((iVar10 != 0x0 || pvVar3 != NULL) &&
        (*(long *)((int)pvVar3 + 0x1c) != 0x8000002)) &&
       ((*(int *)((int)pvVar3 + 0x12) == 0x5 || (*(int *)((int)pvVar3 + 0x12) == 0x6))))
    {
      entity_id = *(u16 *)((int)pvVar3 + 0xc);
      iVar5 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),entity_id);
      if ((iVar5 == 0x0) && (*(long *)((int)pvVar3 + 0x1c) != lVar20))
      {
        uVar11 = *(uint *)((int)pvVar3 + 0x6) & 0xff;
        pcVar6 = Lookup_Entity_Name_by_ID_Logic_bd80(entity_id);
        pvVar12 = ship_context;
        _wsprintf16((char *)CONCAT22(ship_context,(char *)((int)this + 0x22)),
                    s__s___02ld_1050_0cf4,(char *)CONCAT22(uVar11,pcVar6));
        pcVar6 = strdup_allocate((char *)((int)this + 0x22));
        segment_address = 0x1000;
        pvVar13 = pvVar12;
        pvVar7 = allocate_memory(CONCAT22(puVar4,0x14));
        if (pvVar13 == NULL && pvVar7 == NULL)
        {
          uVar8 = 0x0;
          uStack_3a = 0x0;
        }
        else
        {
          segment_address = 0x1018;
          lVar19 = UI_Transaction_Item_Type2_ctor
                             (pvVar7,pvVar13,0x1,0x0,pcVar6,pvVar12,
                              *(undefined2 *)((int)pvVar3 + 0xc),
                              (int)*(undefined4 *)((int)pvVar3 + 0x4),
                              (int)((ulong)*(undefined4 *)((int)pvVar3 + 0x4) >> 0x10));
          uStack_3a = (undefined2)((ulong)lVar19 >> 0x10);
          uVar8 = (undefined2)lVar19;
        }
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe) + 0x4);
        (*(code *)*puVar1)(segment_address,(int)*(undefined4 *)((int)this + 0xe),
                           (int)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10),uVar8,
                           uStack_3a);
        bVar2 = true;
      }
    }
  }
  if (!bVar2)
  {
    pcVar6 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x442);
    segment_address = 0x1000;
    iVar10 = iVar15;
    pvVar3 = allocate_memory(CONCAT22(puVar4,0x14));
    if (iVar10 == 0x0 && pvVar3 == NULL)
    {
      uVar8 = 0x0;
      uVar14 = 0x0;
    }
    else
    {
      segment_address = 0x1018;
      lVar20 = UI_Transaction_Item_Type2_ctor
                         (pvVar3,iVar10,0x0,0x0,pcVar6,iVar15,0x0,0x0,0x0);
      uVar14 = (undefined2)((ulong)lVar20 >> 0x10);
      uVar8 = (undefined2)lVar20;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe) + 0x4);
    (*(code *)*puVar1)(segment_address,(int)*(undefined4 *)((int)this + 0xe),
                       (int)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10),uVar8,
                       uVar14);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Determines the numerical status code (0, 1, or 2) for a relationship link between two
// identifiers. It performs initial string validation before checking the link's
// internal state field.

int __stdcall16far
UI_Relationship_Manager_Get_Link_Status_Code_Logic(void *this,char *name1,char *name2)
{
  byte *pbVar1;
  int iVar2;
  void *pvVar3;
  int reg_dx;
  undefined2 in_stack_0000000a;
  byte *in_stack_0000000c;
  char *pcVar4;
  
  pcVar4 = name2;
  pbVar1 = (byte *)Resource_Manager_LoadString_to_Internal_Buffer
                             ((int)_p_GlobalResourceManager,
                              (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  iVar2 = strcmp_case_sensitive((byte *)CONCAT22(reg_dx,pbVar1),pcVar4);
  if ((iVar2 == 0x0) ||
     (iVar2 = strcmp_case_sensitive(in_stack_0000000c,name2), iVar2 == 0x0))
  {
    return 0x0;
  }
  pvVar3 = UI_Relationship_Manager_Find_Link_by_Strings_Logic(this,name1,name2);
  if (reg_dx != 0x0 || pvVar3 != NULL)
  {
    iVar2 = *(int *)((int)pvVar3 + 0xc);
    if (iVar2 == 0x1)
    {
      return 0x2;
    }
    if (iVar2 + -0x1 < 0x1)
    {
      return 0x0;
    }
    if (SBORROW2(iVar2 + -0x1,0x1))
    {
      return 0x0;
    }
    if (0x1 < iVar2 + -0x2)
    {
      return 0x0;
    }
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// Loads report strings (IDs 0x443 to 0x446) and "None" (0x531) using global manager at
// 1050:14CC.

int __stdcall16far
UI_Relationship_Manager_Report_Link_Status_Logic(void *this,char *name1,char *name2)
{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  uint reg_dx;
  uint uVar5;
  undefined2 in_stack_0000000a;
  byte *in_stack_0000000c;
  undefined2 uVar6;
  int iStack_c;
  
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x1e));
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  pcVar3 = name2;
  uVar6 = in_stack_0000000a;
  pbVar1 = (byte *)Resource_Manager_LoadString_to_Internal_Buffer
                             ((int)_p_GlobalResourceManager,
                              (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  iVar2 = strcmp_case_sensitive
                    ((byte *)CONCAT22(reg_dx,pbVar1),(char *)CONCAT22(uVar6,pcVar3));
  uVar5 = reg_dx;
  if ((iVar2 == 0x0) ||
     (iVar2 = strcmp_case_sensitive
                        (in_stack_0000000c,(char *)CONCAT22(in_stack_0000000a,name2)),
     uVar5 = reg_dx, iVar2 == 0x0))
  {
    iStack_c = 0x443;
  }
  else
  {
    pvVar4 = UI_Relationship_Manager_Find_Link_by_Strings_Logic(this,name1,name2);
    uVar5 = reg_dx | (uint)pvVar4;
    if (uVar5 == 0x0)
    {
      iStack_c = 0x444;
    }
    else
    {
      iStack_c = 0x443;
      iVar2 = *(int *)((int)pvVar4 + 0xc);
      if (iVar2 != 0x0)
      {
        if (iVar2 == 0x1)
        {
          iStack_c = 0x445;
          goto LAB_1008_e378;
        }
        if (iVar2 != 0x2)
        {
          if (iVar2 == 0x3)
          {
            iStack_c = 0x446;
          }
          goto LAB_1008_e378;
        }
      }
      iStack_c = 0x444;
    }
  }
LAB_1008_e378:
  pcVar3 = Resource_Manager_LoadString_and_Duplicate
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),iStack_c);
  *(undefined2 *)((int)this + 0x1e) = pcVar3;
  *(uint *)((int)this + 0x20) = uVar5;
  return *(int *)((int)this + 0x1e);
}
