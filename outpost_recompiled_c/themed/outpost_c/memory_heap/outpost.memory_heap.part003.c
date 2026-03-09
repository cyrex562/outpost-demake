/*
 * Source: outpost.c
 * Theme: memory_heap
 * Chunk: 3/13
 * Original lines (combined): 2275-3284
 * Boundaries: top-level declarations/definitions only
 */




// AI Note: Enters a specialized locking context by allocating DOS-accessible memory
// using GlobalDosAlloc16. Updates p_CurrentHeapContext (1050:0002) and implements a
// shifting retry mechanism for the allocation size. Used for low-level system or
// hardware-adjacent memory management.

void * __cdecl16near heap_enter_lock_context(u16 param_1,u16 param_2)
{
  uint uVar1;
  void *fVar3;
  undefined *puStack_c;
  uint uStack_a;
  uint uStack_8;
  
  puStack_c = NULL;
  uStack_a = 0x0;
  uStack_8 = 0x8;
  if ((param_2 < 0x9) && ((param_2 < 0x8 || (param_1 == 0x0))))
  {
    do
    {
      while( true )
      {
        fVar3 = GlobalDosAlloc16(uStack_a);
        fVar3._0_2_ = (void *)fVar3;
        if ((void *)fVar3 == NULL) break;
        *NULL = 0x0;
        *(undefined **)&p_CurrentHeapContext = puStack_c;
        puStack_c = (void *)fVar3;
      }
      uVar1 = uStack_8 & 0x1;
      uStack_8 >>= 0x1;
      uStack_a = uStack_a >> 0x1 | (uint)(uVar1 != 0x0) << 0xf;
    } while ((param_2 < uStack_8) || ((param_2 <= uStack_8 && (param_1 <= uStack_a))));
  }
  return NULL;
}



// AI Note: Exits a locking context by iteratively freeing DOS-accessible memory
// segments allocated via GlobalDosAlloc16. Companion to heap_enter_lock_context
// (1000:1558). Implements a linked-list traversal to ensure all allocated segments in
// the context are released.

void heap_leave_lock_context(void *lock_ctx,int segment)
{
  int *piVar1;
  uint16_t uVar2;
  uint16_t uStack_8;
  
  uStack_8 = segment;
  if (segment != 0x0 || lock_ctx != NULL)
  {
    do
    {
      piVar1 = *(int **)lock_ctx;
      uVar2 = *(uint16_t *)((int)lock_ctx + 0x2);
      GlobalDosFree(uStack_8);
      lock_ctx = piVar1;
      uStack_8 = uVar2;
    } while (uVar2 != 0x0 || piVar1 != NULL);
  }
  return;
}


/*
Unable to decompile 'init_memory_allocator'
Cause: 
Low-level Error: Symbol $$undef00000002 extends beyond the end of the address space
*/


// AI Note: High-level heap allocation routine. Checks if the main application heap is
// initialized (g_AllocatedBlock_Offset/Segment at 1050:5f2c/5f2e), calling
// init_memory_allocator (1000:160a) if necessary. Then calls heap_alloc_with_flags
// (1000:0a48) to perform the actual allocation.

void * __cdecl16far heap_alloc_bytes(long size)
{
  void *pvVar1;
  int in_DX;
  
  pvVar1 = (void *)((uint)g_AllocatedBlock_Segment | (uint)g_AllocatedBlock_Offset);
  if (pvVar1 == NULL)
  {
    pvVar1 = init_memory_allocator();
    if (in_DX == 0x0 && pvVar1 == NULL)
    {
      return NULL;
    }
  }
  heap_alloc_with_flags
            (0x0,(undefined2)size,0x0,g_AllocatedBlock_Offset,g_AllocatedBlock_Segment);
  return pvVar1;
}



// AI Note: High-level realloc routine. If both block and size are null, it allocates a
// new block via heap_alloc_bytes (1000:167a). If size is zero, it frees the block via
// heap_free_bytes (1000:16ee). Otherwise, it calls heap_realloc (1000:0ed4). Standard
// ANSI-style realloc behavior.

void * __cdecl16far heap_realloc_or_free(void *ptr,long new_size)
{
  void *pvVar1;
  void *unaff_BP;
  void *in_stack_00000006;
  
  if (in_stack_00000006 == NULL && ptr == NULL)
  {
    pvVar1 = heap_alloc_bytes(CONCAT22(unaff_BP,(int)new_size));
    return pvVar1;
  }
  if ((int)new_size == 0x0)
  {
    heap_free_bytes(ptr);
    return NULL;
  }
  pvVar1 = heap_realloc(0x0,ZEXT24(ptr) << 0x10,in_stack_00000006,unaff_BP);
  return pvVar1;
}



// AI Note: High-level heap free routine. Checks if the pointer is null before calling
// heap_free_core (1000:0dc6). Standard free() implementation.

void __cdecl16far heap_free_bytes(void *ptr)
{
  int in_stack_00000006;
  
  if (in_stack_00000006 != 0x0 || ptr != NULL)
  {
    heap_free_core(ptr);
  }
  return;
}



// AI Note: Advanced memory allocation routine with retry hooks. If initial allocation
// via heap_alloc_with_flags (1000:0a48) fails, it executes callbacks stored in
// p_AllocHook_Default (1050:5f34), p_AllocHook_HighPriority (1050:5f38), or
// p_AllocHook_Critical (1050:5f3c) to attempt memory reclamation or recovery.
// Implements a robust "try until success or fatal" allocation loop.

void * __cdecl16far alloc_with_hooks(long size,int flags,void *heap_ctx)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint in_stack_0000000c;
  
                // Core memory allocation - tries allocation with hooks/callbacks.
                // Returns allocated pointer or NULL on failure.
  if (size == 0x0)
  {
    size = 0x1;
  }
LAB_1000_1724:
  do
  {
    pvVar1 = (void *)(in_stack_0000000c | (uint)heap_ctx);
    if ((pvVar1 != NULL) &&
       (pvVar3 = heap_alloc_with_flags
                           (flags,(undefined2)size,size._2_2_,heap_ctx,in_stack_0000000c
                           ), pvVar3 != NULL || pvVar1 != NULL))
    {
      return pvVar1;
    }
    if (((flags & 0x8000U) == 0x0) ||
       (PTR_DAT_1050_0000_1050_5f3a == NULL && p_AllocHook_HighPriority == NULL))
    {
      if (PTR_DAT_1050_0000_1050_5f36 == NULL && p_AllocHook_Default == NULL)
      {
        if (PTR_DAT_1050_0000_1050_5f3e == NULL && p_AllocHook_Critical == NULL)
        {
          return NULL;
        }
        (*(code *)p_AllocHook_Critical)();
        goto LAB_1000_1724;
      }
      iVar2 = (*(code *)p_AllocHook_Default)();
    }
    else
    {
      iVar2 = (*(code *)p_AllocHook_HighPriority)();
    }
    if (iVar2 == 0x0)
    {
      return NULL;
    }
  } while( true );
}



// AI Note: High-level memory allocation entry point. Ensures the global heap
// (g_AllocatedBlock_Offset/Segment at 1050:5f2c/5f2e) is initialized via
// init_memory_allocator (1000:160a), then performs the allocation via alloc_with_hooks
// (1000:1708). Standard application-level malloc().

void * __cdecl16far allocate_memory(long size)
{
  undefined *heap_ctx;
  void *pvVar1;
  
  heap_ctx = g_AllocatedBlock_Offset;
                // Memory allocation wrapper - uses global memory pool pointers,
                // initializes if needed, then allocates requested size.
  if (g_AllocatedBlock_Segment == NULL && g_AllocatedBlock_Offset == NULL)
  {
    heap_ctx = init_memory_allocator();
  }
  pvVar1 = alloc_with_hooks(size & 0xffff,0x0,heap_ctx);
  return pvVar1;
}



// AI Note: Safe memory deallocation wrapper. Equivalent to heap_free_bytes (1000:16ee).
// Widely used (310+ call sites) to release far pointers with a null check.

void __cdecl16far free_if_not_null(void *ptr)
{
  int in_stack_00000006;
  
                // Safely frees a far pointer - checks non-null before calling
                // FUN_1000_0dc6. Called from 310+ locations.
  if (in_stack_00000006 != 0x0 || ptr != NULL)
  {
    heap_free_core(ptr);
  }
  return;
}



// WARNING: Unable to use type for symbol puVar1

u8 * __cdecl16far heap_set_allocation_hook(u8 *param_1,u8 *param_2)
{
  u16 local_4;
  undefined *puVar1;
  
  puVar1 = p_AllocHook_Default;
  p_AllocHook_Default = param_1;
  PTR_DAT_1050_0000_1050_5f36 = param_2;
  return puVar1;
}



// Targeted Scan Finding: Far Pointer
// References global heap context pointers in segment 1050 (offsets 5f2c and 5f2e).
// Public wrapper for heap_alloc_bytes.

void * __cdecl16far heap_alloc_bytes_public(long size)
{
  void *pvVar1;
  int in_DX;
  
  pvVar1 = (void *)((uint)g_AllocatedBlock_Segment | (uint)g_AllocatedBlock_Offset);
  if (pvVar1 == NULL)
  {
    pvVar1 = init_memory_allocator();
    if (in_DX == 0x0 && pvVar1 == NULL)
    {
      return NULL;
    }
  }
  heap_alloc_with_flags
            (0x0,(undefined2)size,0x0,g_AllocatedBlock_Offset,g_AllocatedBlock_Segment);
  return pvVar1;
}



// Targeted Scan Finding: Far Pointer
// References global heap context pointers in segment 1050 (offsets 5f2c and 5f2e)
// during calloc-like allocation.

void * __cdecl16far heap_calloc_like(int num_elements,int element_size)
{
  void *pvVar1;
  undefined *puVar2;
  
  puVar2 = NULL;
  if ((int)((ulong)(uint)element_size * (ulong)(uint)num_elements >> 0x10) != 0x0)
  {
    return NULL;
  }
  pvVar1 = (void *)((uint)g_AllocatedBlock_Segment | (uint)g_AllocatedBlock_Offset);
  if (pvVar1 == NULL)
  {
    g_AllocatedBlock_Offset = init_memory_allocator();
    pvVar1 = (void *)((uint)puVar2 | (uint)g_AllocatedBlock_Offset);
    g_AllocatedBlock_Segment = puVar2;
    if (pvVar1 == NULL)
    {
      return NULL;
    }
  }
  heap_alloc_with_flags
            (0x1,(int)((ulong)(uint)element_size * (ulong)(uint)num_elements),0x0,
             g_AllocatedBlock_Offset,g_AllocatedBlock_Segment);
  return pvVar1;
}



// A public wrapper for the heap reallocation function. If the input pointer is NULL, it
// performs a new allocation via `heap_alloc_bytes_public`. If the requested size is
// zero, it frees the existing pointer via `heap_free_public`. Otherwise, it attempts to
// reallocate the memory block to the new size.

void * __cdecl16far heap_realloc_public(void *ptr,long new_size)
{
  void *pvVar1;
  void *unaff_BP;
  void *in_stack_00000006;
  
  if (in_stack_00000006 == NULL && ptr == NULL)
  {
    pvVar1 = heap_alloc_bytes_public(CONCAT22(unaff_BP,(int)new_size));
    return pvVar1;
  }
  if ((int)new_size == 0x0)
  {
    heap_free_public(ptr);
    return NULL;
  }
  pvVar1 = heap_realloc(0x0,ZEXT24(ptr) << 0x10,in_stack_00000006,unaff_BP);
  return pvVar1;
}



// A public wrapper for the core heap free function. It performs a NULL check on the
// provided address before calling `heap_free_core`.

void __cdecl16far heap_free_public(void *ptr)
{
  int in_stack_00000006;
  
  if (in_stack_00000006 != 0x0 || ptr != NULL)
  {
    heap_free_core(ptr);
  }
  return;
}



// A convenience wrapper for `heap_create_pool` that initializes the global memory pool
// with default parameters.

void * __stdcall16far heap_init_global_pool(int flags)
{
  void *pvVar1;
  
  pvVar1 = heap_create_pool(flags,0x0,0x0,0xc);
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable Initializations
// Performs extensive far pointer initialization in data segment 1050:
// - PTR_DAT_1050_5f1a = 1050:1f7e
// - PTR_DAT_1050_5f1e = [ptr]
// - PTR_DAT_1050_5f20 = [puVar4]
// Sets pool magic number 0xBEAD at offset 0x14.
// Registers pool via global list management pointers.

void * __stdcall16far
heap_create_pool(int flags,int initial_size,int limit,int bucket_size)
{
  undefined2 *puVar1;
  undefined2 *ptr;
  undefined2 *puVar2;
  int iVar3;
  undefined *in_DX;
  undefined *puVar4;
  uint unaff_SI;
  long lVar5;
  ulong uVar6;
  
  uVar6 = (ulong)unaff_SI << 0x10;
  if (((flags & 0x8000U) != 0x0) && (_SHI_INVOKEERRORHANDLER1 != -0x6f70))
  {
    flags |= 0x1;
  }
  if (true)
  {
    do
    {
      puVar4 = in_DX;
      uVar6 &= 0xffff0000;
      ptr = (undefined2 *)(flags & 0xfffbU | 0x1000);
      heap_set_alloc_params((int)ptr,uVar6);
      in_DX = (undefined *)((uint)puVar4 | (uint)ptr);
      if (in_DX != NULL) break;
      uVar6 &= 0xffff0000;
      puVar2 = ptr;
      invoke_error_handler();
    } while (puVar2 != NULL);
    if (puVar4 != NULL || ptr != NULL)
    {
      ptr[0x17] = (undefined **)&p_GlobalPoolDescriptor;
      ptr[0x18] = (dword *)&g_HeapContext;
      ptr[0x15] = p_GlobalPoolList_Offset;
      ptr[0x16] = p_GlobalPoolList_Segment;
      puVar2 = ptr;
      p_GlobalPoolList_Offset = (undefined *)ptr;
      p_GlobalPoolList_Segment = puVar4;
      for (iVar3 = 0x5; iVar3 != 0x0; iVar3 += -0x1)
      {
        puVar1 = puVar2;
        puVar2 = puVar2 + 0x1;
        *puVar1 = 0x0;
      }
      ptr[0x5] = 0x0;
      ptr[0x7] = 0x0;
      ptr[0x6] = 0x0;
      ptr[0x9] = 0x0;
      ptr[0x8] = 0x0;
      ptr[0xa] = 0xbead;
      ptr[0xb] = flags & 0xfffd;
      ptr[0xc] = 0x0;
      ptr[0xd] = 0x2000;
      ptr[0xe] = 0x800;
      lVar5 = query_global_memory_block(ptr);
      ptr[0xf] = (int)lVar5;
      ptr[0x10] = (int)((ulong)lVar5 >> 0x10);
      ptr[0x12] = 0x0;
      ptr[0x11] = 0x0;
      ptr[0x13] = 0xfffe;
      ptr[0x14] = 0xffff;
      ptr[0x19] = 0x0;
      ptr[0x1a] = 0x0;
      ptr[0x20] = 0x0;
      ptr[0x1f] = 0x0;
      iVar3 = heap_set_pool_hook();
      if (iVar3 != 0x0)
      {
        if (limit != 0x0 || initial_size != 0x0)
        {
          mul_u32_u32_standard(CONCAT22(limit,initial_size),(ulong)(uint)bucket_size);
          heap_reserve_bytes();
        }
        return ptr;
      }
      heap_destroy_pool_internal();
    }
  }
  return NULL;
}



// Targeted Scan Finding: Far Pointer
// Validates heap pool structure by checking magic number 0xBEAD at offset 0x14.

int __stdcall16far heap_validate_and_set_size_params(void *heap_ctx,long new_size)
{
  uint uVar1;
  int iVar2;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  long lVar3;
  int in_stack_00000006;
  
  if (*(int *)(in_stack_00000006 + 0x14) != -0x4153)
  {
    invoke_error_handler();
    return 0x0;
  }
  lVar3 = heap_round_up_size(CONCAT22(unaff_DI,unaff_SI));
  uVar1 = (uint)lVar3;
  if (uVar1 < *(int *)(in_stack_00000006 + 0x18) + 0x14U)
  {
    iVar2 = 0x0;
  }
  else
  {
    iVar2 = *(int *)(in_stack_00000006 + 0x1a);
    *(uint *)(in_stack_00000006 + 0x1a) = uVar1;
    *(uint *)(in_stack_00000006 + 0x1c) = uVar1 >> 0x2;
  }
  return iVar2;
}



// Rounds a given size up to the nearest appropriate heap management threshold (usually
// powers of two or specific alignment boundaries). Used for pool and block management.

long __cdecl16near heap_round_up_size(long size)
{
  uint in_AX;
  undefined2 in_DX;
  uint uVar1;
  
  if (in_AX == 0x2000)
  {
LAB_1000_1afa:
    return CONCAT22(in_DX,in_AX);
  }
  if (in_AX < 0xfff0)
  {
    if (in_AX < 0x1001)
    {
      return CONCAT22(in_DX,0x1000);
    }
    uVar1 = 0x2000;
    if (in_AX < 0x2001)
    {
      do
      {
        uVar1 >>= 0x1;
      } while (in_AX <= uVar1);
      in_AX = uVar1 * 0x2;
      goto LAB_1000_1afa;
    }
    while (uVar1 *= 0x2, uVar1 != 0x0)
    {
      if (in_AX <= uVar1)
      {
        return CONCAT22(in_DX,(uVar1 + 0x10 & -(uint)(uVar1 < 0xfff0)) - 0x10);
      }
    }
  }
  return CONCAT22(in_DX,0xfff0);
}



// Targeted Scan Finding: Far Pointer
// Validates heap pool structure by checking magic number 0xBEAD at offset 0x14 before
// destruction.

int __stdcall16far heap_destroy_pool(void *heap_ctx)
{
  int iVar1;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)heap_ctx + 0x14) != -0x4153)
  {
    invoke_error_handler();
    return 0x0;
  }
  iVar1 = heap_destroy_pool_internal(0x0,heap_ctx,in_stack_00000006);
  return iVar1;
}



// Internal function to completely deallocate a heap pool. It clears management flags,
// iterates through and frees all associated memory blocks (5 internal lists), cleans up
// pool metadata via `FUN_1000_20a2`, and finally frees the pool descriptor itself.

int __stdcall16far heap_destroy_pool_internal(undefined2 param_1,void *param_2)
{
  undefined2 *puVar1;
  undefined2 *ptr;
  int iVar2;
  void *heap_ctx;
  undefined2 uVar3;
  undefined4 uStack_8;
  uint uStack_4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  heap_ctx = (void *)param_2;
  *(undefined2 *)((int)heap_ctx + 0x14) = 0x0;
  uStack_4 = 0x0;
  do
  {
    iVar2 = *(int *)(uStack_4 * 0x2);
    if (iVar2 != 0x0)
    {
      do
      {
        *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x8) + 0xc) = 0x0;
        heap_free_block((void *)*(undefined2 *)(iVar2 + 0x8));
        iVar2 = *(int *)(iVar2 + 0x4);
      } while (*(int *)(uStack_4 * 0x2) != iVar2);
    }
    uStack_4 += 0x1;
  } while (uStack_4 < 0x5);
  iVar2 = *(int *)((int)heap_ctx + 0x12);
  ptr = (undefined2 *)*(undefined2 *)((int)heap_ctx + 0x10);
  while( true )
  {
    uStack_8 = (undefined2 *)CONCAT22(iVar2,ptr);
    if (iVar2 == 0x0 && ptr == NULL) break;
    puVar1 = (undefined2 *)*uStack_8;
    iVar2 = ptr[0x1];
    heap_free_block(ptr);
    ptr = puVar1;
  }
  heap_unlink_pool_from_global_list(heap_ctx);
  heap_free_block(heap_ctx);
  return 0x1;
}



// Targeted Scan Finding: Far Pointer / Vtable
// References global control pointers in segment 1050:
// - PTR_DAT_1050_5f1c
// - PTR_DAT_1050_5f1a
// Performs an indirect call through pcStack_6, which is initialized from a far pointer
// in segment 1050.

int __stdcall16far _SHI_INVOKEERRORHANDLER1(void)
{
  bool bVar1;
  undefined1 extraout_AH;
  int iVar2;
  code *pcStack_6;
  code *pcStack_4;
  
  pcStack_4 = (code *)0x1050;
  if (true)
  {
    if (p_ErrorHandlerCallback_Segment == NULL && p_GlobalPoolDescriptor == NULL)
    {
      pcStack_6 = NULL;
      pcStack_4 = (code *)NULL;
    }
    else
    {
      bVar1 = validate_ptr_read_access(p_GlobalPoolDescriptor);
      pcStack_6 = (code *)p_GlobalPoolDescriptor;
      pcStack_4 = (code *)p_ErrorHandlerCallback_Segment;
      if (CONCAT11(extraout_AH,bVar1) == 0x0)
      {
        p_GlobalPoolDescriptor = (char *)s_554_bmp_1050_1f77 + 0x7;
        p_ErrorHandlerCallback_Segment = (undefined *)&DAT_1050_1000;
        pcStack_6 = (code *)((char *)s_554_bmp_1050_1f77 + 0x7);
        pcStack_4 = (code *)(undefined *)&DAT_1050_1000;
      }
    }
    if (pcStack_4 != NULL || pcStack_6 != NULL)
    {
      iVar2 = heap_check_pool_count_limit((undefined **)&p_GlobalPoolDescriptor,0x1050);
      if (iVar2 == 0x0)
      {
        iVar2 = (*pcStack_6)();
      }
      else
      {
        pcStack_4 = NULL;
        pcStack_6 = NULL;
        iVar2 = 0x0;
      }
      if (pcStack_4 != NULL || pcStack_6 != NULL)
      {
        heap_system_decrement_refcount();
      }
      return iVar2;
    }
  }
  return 0x0;
}



u16 __stdcall16far
heap_dispatch_error_handler(u16 param_1,u16 param_2,u16 param_3,u16 param_4)
{
  bool bVar1;
  undefined1 extraout_AH;
  int iVar2;
  u16 uVar3;
  u16 local_40;
  u16 local_3e;
  u16 local_3c;
  u16 local_6;
  u16 local_4;
  
  if (true)
  {
    if (*(undefined **)&p_ErrorHandlerCallback_Segment == NULL &&
        *(undefined **)&p_GlobalPoolDescriptor == NULL)
    {
      local_6 = 0x0;
      local_4 = 0x0;
    }
    else
    {
      local_4 = param_4;
      bVar1 = validate_ptr_read_access(*(undefined **)&p_GlobalPoolDescriptor);
      if (CONCAT11(extraout_AH,bVar1) == 0x0)
      {
        local_6 = (u16)((char *)s_554_bmp_1050_1f77 + 0x7);
        local_4 = 0x1000;
        *(undefined **)&p_GlobalPoolDescriptor = (char *)s_554_bmp_1050_1f77 + 0x7;
        *(undefined **)&p_ErrorHandlerCallback_Segment = (undefined *)0x1000;
      }
      else
      {
        local_6 = (u16)*(undefined **)&p_GlobalPoolDescriptor;
        local_4 = (u16)*(undefined **)&p_ErrorHandlerCallback_Segment;
      }
    }
    if ((undefined *)local_4 != NULL || (code *)local_6 != NULL)
    {
      iVar2 = heap_check_pool_count_limit((undefined **)&p_GlobalPoolDescriptor,param_4)
      ;
      if (iVar2 == 0x0)
      {
        uVar3 = (*(code *)local_6)();
      }
      else
      {
        local_4 = 0x0;
        local_6 = 0x0;
        uVar3 = 0x0;
      }
      if (local_4 != 0x0 || local_6 != 0x0)
      {
        heap_system_decrement_refcount();
      }
      return uVar3;
    }
  }
  return 0x0;
}



// Targeted Scan Finding: Resource
// Triggers display_error_dialog with hardcoded offsets (0xD940, 0x1040), likely
// pointing to string resources in segment 1050.

int heap_check_pool_count_limit(void *pool_ctx,int count)
{
  uint in_AX;
  
  if (in_AX < *(uint *)((int)pool_ctx + 0xc))
  {
    display_error_dialog(0x0,0x0,(char *)0xd940,(char *)0x1040);
    return 0x1;
  }
  *(int *)((int)pool_ctx + 0xc) = *(int *)((int)pool_ctx + 0xc) + 0x1;
  return 0x0;
}



// Targeted Scan Finding: Far Pointer
// Decrements a global reference count stored as a far pointer in segment 1050 (offset
// 5f26).

void __cdecl16far heap_system_decrement_refcount(void)
{
  if ((true) && (g_HeapRefCount = g_HeapRefCount + -0x1, (int)g_HeapRefCount < 0x0))
  {
    g_HeapRefCount = NULL;
  }
  return;
}



// Targeted Scan Finding: Far Pointer
// Increments a global reference count stored as a far pointer in segment 1050 (offset
// 5f22).
// Performs a far pointer assignment to DAT_1050_0002.

int __cdecl16far heap_system_increment_refcount(void)
{
  undefined *puVar1;
  bool bVar2;
  
  if (((true) &&
      (puVar1 = g_HeapPoolCount + 0x1, bVar2 = g_HeapPoolCount == NULL,
      g_HeapPoolCount = puVar1, bVar2)) &&
     (p_GlobalPoolList_Segment != NULL || p_GlobalPoolList_Offset != NULL))
  {
    g_HeapPoolCount = (undefined *)&p_CurrentHeapContext;
  }
  if (true)
  {
    return 0x1;
  }
  return 0x0;
}



void heap_pool_cleanup_list(u16 param_1,u16 param_2)
{
  undefined2 uVar1;
  u16 uVar2;
  int iVar3;
  undefined2 uVar4;
  
  if (param_1 == 0x0)
  {
    *(undefined2 *)(param_2 + 0x6) = 0x0;
    *(undefined2 *)(param_2 + 0x4) = 0x0;
  }
  if (*(int *)(param_2 + 0x6) != 0x0 || *(int *)(param_2 + 0x4) != 0x0)
  {
    do
    {
      uVar2 = heap_is_valid_pool_ptr(*(int *)(param_2 + 0x4),*(u16 *)(param_2 + 0x6));
      if (uVar2 == 0x0)
      {
        uVar4 = (undefined2)((ulong)*(undefined4 *)(param_2 + 0x4) >> 0x10);
        iVar3 = (int)*(undefined4 *)(param_2 + 0x4);
        uVar1 = *(undefined2 *)(iVar3 + 0x2c);
        *(undefined2 *)(param_2 + 0x4) = *(undefined2 *)(iVar3 + 0x2a);
        *(undefined2 *)(param_2 + 0x6) = uVar1;
      }
      else
      {
        heap_destroy_pool_internal
                  (0x1,*(undefined2 *)(param_2 + 0x4),*(undefined2 *)(param_2 + 0x6));
      }
    } while (*(int *)(param_2 + 0x6) != 0x0 || *(int *)(param_2 + 0x4) != 0x0);
  }
  return;
}



u16 __stdcall16far heap_validate_pool_magic_internal(void)
{
  int iVar1;
  int in_stack_00003ca4;
  undefined2 in_stack_00003ca6;
  
  iVar1 = validate_mem_access_ext();
  if ((iVar1 != 0x0) && (*(int *)(in_stack_00003ca4 + 0x14) == -0x4153))
  {
    return 0x1;
  }
  return 0x0;
}



u16 __stdcall16far heap_is_valid_pool_ptr(int param_1,u16 param_2)
{
  int iVar1;
  
  iVar1 = validate_mem_access_ext(0x102,0x42,0x0,param_1,param_2);
  if ((iVar1 != 0x0) && (*(int *)(param_1 + 0x14) == -0x4153))
  {
    return 0x1;
  }
  return 0x0;
}
