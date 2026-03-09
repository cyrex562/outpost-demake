/*
 * Source: outpost.h
 * Theme: memory_heap
 * Chunk: 1/1
 * Original lines (combined): 567-65655
 * Boundaries: top-level declarations/definitions only
 */


#include <outpost_types.h>
#include <ghidra.h>
#include <win16_api.h>

struct HeapGlobalContext {
    u8 field0_0x0;
    u8 field1_0x1;
    u8 field2_0x2;
    u8 field3_0x3;
    u16 pool_list_head_off;
    u16 pool_list_head_seg;
};

typedef struct UI_Allocation_Tab_Manager UI_Allocation_Tab_Manager, *PUI_Allocation_Tab_Manager;

struct UI_Allocation_Tab_Manager {
};

struct HeapNode {
    u8 field0_0x0;
    u8 field1_0x1;
    u8 field2_0x2;
    u8 field3_0x3;
    u16 next;
    u16 prev;
    u32 descriptor_far_ptr;
};

typedef struct HeapBlockDescriptor HeapBlockDescriptor, *PHeapBlockDescriptor;

struct HeapBlockDescriptor {
    u8 field0_0x0;
    u8 field1_0x1;
    u8 field2_0x2;
    u8 field3_0x3;
    u8 field4_0x4;
    u8 field5_0x5;
    u8 field6_0x6;
    u8 field7_0x7;
    u8 field8_0x8;
    u8 field9_0x9;
    int status;
    u16 alloc_count;
    u8 field12_0xe;
    u8 field13_0xf;
    u8 field14_0x10;
    u8 field15_0x11;
    u8 field16_0x12;
    u8 field17_0x13;
    u8 field_13_byte_flags;
};

struct HeapContext {
    u8 buckets_base;
    u8 field1_0x1;
    u16 bucket_1;
    u16 bucket_2;
    u16 bucket_3;
    u16 bucket_4;
    u16 global_free_list_head;
    u8 field7_0xc;
    u8 field8_0xd;
    u8 field9_0xe;
    u8 field10_0xf;
    u8 field11_0x10;
    u8 field12_0x11;
    u8 field13_0x12;
    u8 field14_0x13;
    u16 magic_bead;
    u8 field16_0x16;
    u8 field17_0x17;
    u8 field18_0x18;
    u8 field19_0x19;
    u8 field20_0x1a;
    u8 field21_0x1b;
    u8 field22_0x1c;
    u8 field23_0x1d;
    u8 field24_0x1e;
    u8 field25_0x1f;
    u16 flags;
    u8 field27_0x22;
    u8 field28_0x23;
    u8 field29_0x24;
    u8 field30_0x25;
    u8 field31_0x26;
    u8 field32_0x27;
    u16 stat_1_alloc_size_low;
    u8 field34_0x2a;
    u16 next_pool_ptr_off;
    u16 next_pool_ptr_seg;
    u16 global_list_head;
    u16 global_list_seg;
    u16 stat_2_alloc_size_high;
    u8 field40_0x35;
    u8 field41_0x36;
    u8   field42_0x37;
    u8 field43_0x38;
    u8 field44_0x39;
    u8 field45_0x3a;
    u8 field46_0x3b;
    u8 field47_0x3c;
    u8 field48_0x3d;
    u8 field49_0x3e;
    u8 field50_0x3f;
    u8 field51_0x40;
    u8 field52_0x41;
    u8 field53_0x42;
    u8 field54_0x43;
    u8 field55_0x44;
    u16 callback_ptr;
};
long __stdcall16far heap_validate_and_sweep(u32 param_1);
long __cdecl16near heap_sweep_free_lists(void *heap_ctx);
long __stdcall16far heap_reserve_bytes(i16 param_1,u16 param_2,u16 param_3,u32 param_4);
int __cdecl16near heap_extend_free_list(void *heap_ctx);
void * __cdecl16near heap_pop_free_list_to_bucket(void *heap_ctx,i16 bucket_index);
void __cdecl16near heap_push_bucket_to_free_list(void *heap_ctx,void *block_descriptor,int bucket_index);
long heap_alloc_block(long size,void *heap_ctx,int bucket_index);
int __cdecl16near heap_try_release_block(void *block_descriptor,int bucket_index);
int __cdecl16near heap_alloc_strategy3(void *block_ptr,int flags);
long heap_alloc_large(long size,void *heap_ctx);
int heap_try_resize_block(u16 param_1,int *param_2);
int heap_init_strategy1(void *heap_ctx);
void __cdecl16near heap_init_free_lists(void *heap_ctx,int block_size,int total_size);
void * __stdcall16far validate_and_get_block(void *heap_ctx);
void * __cdecl16near heap_alloc_small(void *heap_ctx);
int __stdcall16far heap_free_descriptor(void *block_ptr,int bucket_index);
void __cdecl16near heap_free_small_block_09a0(void);
u16 __cdecl16near heap_alloc_strategy2(void *block_ptr,int size);
void * __stdcall16far heap_alloc_with_flags(byte param_1,u16 param_2,int param_3,u32 param_4);
void * __cdecl16near heap_alloc_medium(void *heap_ctx,int flags,int size);
void * __cdecl16near heap_search_free_blocks(void *heap_ctx,int size,int flags);
int __stdcall16far heap_free_core(void *block_ptr);
void __cdecl16near heap_free_block_internal(u16 param_1);
void * __stdcall16far heap_realloc(int flags,long new_size,void *old_block,void *heap_ctx);
long heap_query_block_size(int flags,void *block_ptr,int segment);
int __cdecl16near heap_prepare_inplace_resize(void *block_ptr,int new_size);
long __stdcall16far heap_get_block_size_far(void *block_ptr);
void __stdcall16far heap_set_alloc_params(int flags,long size);
void __stdcall16far heap_free_block(void *ptr);
int __stdcall16far heap_alloc_raw_block(int flags,u16 param_2,long size,void *base_ptr);
int __stdcall16far heap_try_alloc_block(int flags,long size,void *base_ptr);
void * __cdecl16near heap_enter_lock_context(u16 param_1,u16 param_2);
void heap_leave_lock_context(void *lock_ctx,int segment);
void * __cdecl16far heap_alloc_bytes(long size);
void * __cdecl16far heap_realloc_or_free(void *ptr,long new_size);
void __cdecl16far heap_free_bytes(void *ptr);
void * __cdecl16far alloc_with_hooks(long size,int flags,void *heap_ctx);
void * __cdecl16far allocate_memory(long size);
void __cdecl16far free_if_not_null(void *ptr);
u8 * __cdecl16far heap_set_allocation_hook(u8 *param_1,u8 *param_2);
void * __cdecl16far heap_alloc_bytes_public(long size);
void * __cdecl16far heap_calloc_like(int num_elements,int element_size);
void * __cdecl16far heap_realloc_public(void *ptr,long new_size);
void __cdecl16far heap_free_public(void *ptr);
void * __stdcall16far heap_init_global_pool(int flags);
void * __stdcall16far heap_create_pool(int flags,int initial_size,int limit,int bucket_size);
int __stdcall16far heap_validate_and_set_size_params(void *heap_ctx,long new_size);
long __cdecl16near heap_round_up_size(long size);
int __stdcall16far heap_set_pool_hook(u16 param_1,u32 param_2);
int __stdcall16far heap_destroy_pool(void *heap_ctx);
int __stdcall16far heap_destroy_pool_internal(undefined2 param_1,void *param_2);
int heap_check_pool_count_limit(void *pool_ctx,int count);
void __cdecl16far heap_system_decrement_refcount(void);
int __cdecl16far heap_system_increment_refcount(void);
void heap_pool_cleanup_list(u16 param_1,u16 param_2);
u16 __stdcall16far heap_validate_pool_magic_internal(void);
u16 __stdcall16far heap_is_valid_pool_ptr(int param_1,u16 param_2);
void __stdcall16far heap_unlink_pool_from_global_list(void *heap_ctx);
void * __cdecl16near heap_alloc_safe(long size);
void __cdecl16near global_realloc_guarded(int err_code,u16 alloc_size,u16 param_3);
void __cdecl16far global_free_wrapper_far_3cd8(void *param_1);
void __cdecl16far global_free_wrapper_far(void *ptr);
void * __cdecl16far global_alloc_zero_init_safe(u16 param_1,int param_2,u16 param_3);
void __cdecl16far dos_get_cwd_internal_far_with_alloc_logic(int drive_num,char *buffer,int max_len);
void __stdcall16far Simulator_allocate_and_init_internal(void);
long __stdcall16far heap_global_sweep_all_pools(void);
void * __stdcall16far Bitmap_Object_ctor_with_alloc(void *ctx,void *palette_src,int height,int width);
void __stdcall16far Sprite_Object_free_internal_buffer(void *ctx);
int __stdcall16far Base_Graphic_Object_Select_And_Free_Old_Palette(void *ctx,HDC16 hdc);
void * __stdcall16far Bitmap_Object_Subclass_ctor_with_alloc(void *ctx,int height,int width);
void __stdcall16far Data_History_Object_Allocate_Buffer_Logic(void *ctx);
void __stdcall16far UI_Label_Generate_and_Alloc_from_Construction_1788(u16 param_1,u16 param_2,void *param_3);
void __stdcall16far mem_free_indirect_logic(long ptr_to_ptr_ref);
long __stdcall16far UI_Allocation_Tab_Manager_ctor_init_logic(long this_ref,int id);
void __stdcall16far UI_Allocation_Tab_Manager_dtor_Internal_Cleanup_logic(long this_ref);
void __stdcall16far UI_Allocation_Tab_Manager_vcall_6C_Logic_Wrapper(long this_ref);
void * __stdcall16far UI_Allocation_Tab_Manager_dtor_Scalar_Deleting_6102(void *param_1,byte param_2);
void __stdcall16far UI_Sprite_Collection_Cleanup_and_Free_865a(u32 param_1);
void __stdcall16far UI_Item_List_Free_Data_Pointer_Logic(void *this_ptr);
void __stdcall16far UI_Build_Item_Sync_World_Entity_and_Free_List_22_0c84(void *param_1,void *param_2);
void * __stdcall16far Simulator_Object_Alloc_and_Init_from_Manager_e100(u32 param_1,int param_2);
void __stdcall16far UI_Managed_List_Realloc_Buffer_Logic_1550(void *this_ptr);
void __stdcall16far Simulator_Object_Realloc_Internal_Buffer_1f70(u32 param_1);
void __stdcall16far UI_Component_Free_List_22_Logic_7296(void *this_ptr);
void __stdcall16far UI_Component_Free_List_26_Logic_72d0(void *this_ptr);
void __stdcall16far Helper_Free_Pointer_at_Offset0_8480(void *this_ptr);
void __stdcall16far Helper_Free_Pointer_at_Offset2_8496(void *this_ptr);
void __stdcall16far Simulator_Entity_Collection_Realloc_Buffer_Logic_878c(void *this_ptr);
int __stdcall16far UI_Build_Item_TypeD88E_Find_Free_Slot_by_ID_cde8(int offset,u16 segment,int sub_id);
int __stdcall16far UI_Build_Item_TypeD88E_Count_Free_Slots_by_ID_ce2e(int offset,u16 segment,int sub_id);
int __stdcall16far UI_Build_Item_TypeD88E_Allocate_SubItem_Slots_ce72(u32 param_1,int param_2,u32 param_3,int param_4);
int __stdcall16far Colony_Count_Total_Free_SubItem_Slots_3aa6(void *this_ptr);
void __stdcall16far Helper_Free_Pointer_Offset0_a582(void *param_1);
HGLOBAL16 GlobalAlloc16(u32 size, u16 flags);
HGLOBAL16 GlobalRealloc16(u16 flags, u32 size, HGLOBAL16 handle);
HGLOBAL16 GlobalFree16(HGLOBAL16 handle);
void * GlobalLock16(HGLOBAL16 handle);
void FreeProcInstance16(void * FARPROC16_ptr_func);
BOOL16 FreeResource16(HGLOBAL16 handle);
void * GlobalDosAlloc16(u32 size);
u16 GlobalDosFree(u16 selector);
