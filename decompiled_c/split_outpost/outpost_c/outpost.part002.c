/*
 * Source: outpost.c
 * Chunk: 2/117
 * Original lines: 1181-2373
 * Boundaries: top-level declarations/definitions only
 */




// AI Note: Validates a memory block's integrity by checking a magic number (0xBEAD at
// offset 0x14). If successful, calls heap_alloc_small (1000:0838) to allocate from the
// validated context. Calls invoke_error_handler on failure.

void * __stdcall16far validate_and_get_block(void *heap_ctx)
{
  void *pvVar1;
  undefined2 in_stack_00000006;
  
                // Validates memory block magic number (0xBEAD at offset 0x14), then
                // retrieves block. Calls error handler if validation fails.
  if (*(int *)((int)heap_ctx + 0x14) != -0x4153)
  {
    invoke_error_handler();
    return NULL;
  }
  pvVar1 = heap_alloc_small((dword *)&g_HeapContext);
  return pvVar1;
}



// AI Note: Allocates a small memory block from a specialized free list
// (p_SmallBlockFreeList at 1050:000e). If the list is empty, it attempts to extend the
// heap using heap_alloc_block (1000:03c6). Increments g_AllocFlags (1050:000a) on
// successful allocation.

void * __cdecl16near heap_alloc_small(void *heap_ctx)
{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  int in_BX;
  void *unaff_SI;
  int *piVar4;
  int unaff_DI;
  long lVar5;
  uint uStack_6;
  int *piStack_4;
  
  piVar4 = (int *)*(undefined2 *)(in_BX + 0x2);
  piStack_4 = piVar4;
  if (*(int *)(in_BX + 0x2) == 0x0) goto LAB_1000_085b;
  do
  {
    do
    {
      if (*piVar4 != 0x0)
      {
        iVar1 = piVar4[0x5];
        puVar2 = (undefined2 *)*(undefined **)&p_SmallBlockFreeList;
        if (puVar2 != NULL)
        {
          *(undefined **)&p_SmallBlockFreeList = (undefined *)*puVar2;
          *(int *)(byte *)&g_AllocFlags = *(int *)(byte *)&g_AllocFlags + 0x1;
          *(undefined2 *)(in_BX + 0x2) = piVar4;
          return puVar2;
        }
        *piVar4 = 0x0;
      }
      piVar4 = (int *)piVar4[0x2];
    } while (piVar4 != piStack_4);
LAB_1000_085b:
    if (*(int *)(in_BX + 0x18) == 0x0)
    {
      invoke_error_handler();
      return NULL;
    }
    uStack_6 = *(uint *)(in_BX + 0x1a);
    while (lVar5 = heap_alloc_block((ulong)uStack_6,unaff_SI,unaff_DI), lVar5 == 0x0)
    {
      uVar3 = *(int *)(in_BX + 0x20) + (uint)CARRY2(*(uint *)(in_BX + 0x1e),uStack_6);
      if (*(uint *)(in_BX + 0x28) <= uVar3)
      {
        if (*(uint *)(in_BX + 0x28) < uVar3)
        {
          return NULL;
        }
        if (*(uint *)(in_BX + 0x26) < *(uint *)(in_BX + 0x1e) + uStack_6)
        {
          return NULL;
        }
      }
      uVar3 = *(int *)(in_BX + 0x18) + 0x14;
      uStack_6 >>= 0x1;
      if (uStack_6 < uVar3)
      {
        uStack_6 *= 0x2;
        invoke_error_handler();
        if (uVar3 == 0x0)
        {
          return NULL;
        }
      }
    }
    piVar4 = (int *)*(undefined2 *)(in_BX + 0x2);
    piStack_4 = (int *)piVar4[0x2];
  } while( true );
}



// AI Note: Frees a memory block descriptor and returns it to the small block free list
// (p_SmallBlockFreeList at 1050:000e). Decrements g_AllocFlags (1050:000a) and calls
// heap_try_release_block (1000:0510) if the flags reach zero. Validates the allocation
// strategy before proceeding.

int __stdcall16far heap_free_descriptor(void *block_ptr,int bucket_index)
{
  byte *pbVar1;
  int in_stack_0000fffa;
  
  if (*(undefined **)&p_AllocStrategyCode != (undefined *)0xcad1)
  {
    invoke_error_handler();
    return 0x0;
  }
  *(undefined **)block_ptr = *(undefined **)&p_SmallBlockFreeList;
  if (*(int *)block_ptr == 0x0)
  {
    **(undefined2 **)(u16 *)&p_LastAllocatedBlock = 0x1;
  }
  *(undefined **)&p_SmallBlockFreeList = block_ptr;
  pbVar1 = (byte *)&g_AllocFlags;
  *(int *)pbVar1 = *(int *)pbVar1 + -0x1;
  if (*(int *)pbVar1 == 0x0)
  {
    heap_try_release_block((dword *)&g_HeapContext,in_stack_0000fffa);
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16near heap_free_small_block_09a0(void)
{
  undefined2 *in_BX;
  void *unaff_SI;
  int in_stack_00000000;
  
  *in_BX = p_SmallBlockFreeList;
  if (p_SmallBlockFreeList == NULL)
  {
    *_p_LastAllocatedBlock = 0x1;
  }
  _g_AllocFlags += -0x1;
  p_SmallBlockFreeList = (undefined *)in_BX;
  if (_g_AllocFlags == 0x0)
  {
    heap_try_release_block(unaff_SI,in_stack_00000000);
  }
  return;
}



// AI Note: Initialization routine for heap allocation strategy 2. Manages raw block
// structures and free pointers within a memory segment. Sets up internal heap pointers
// and flags for Strategy 2 allocations. Called by heap_alloc_block (1000:03c6).

uint __cdecl16near heap_alloc_strategy2(void *block_ptr,int size)
{
  uint *puVar1;
  int iVar2;
  int in_AX;
  undefined4 *in_BX;
  undefined2 *puVar3;
  
  puVar1 = (uint *)(in_BX + 0x5);
  puVar3 = (undefined2 *)
           (((int)in_BX + (in_AX - (int)puVar1) + -0x6 & 0xfffcU) + (int)puVar1);
  *puVar3 = 0x1;
  *(int *)((int)in_BX + 0xe) = (int)puVar1;
  puVar3[0x2] = puVar3;
  puVar3[0x1] = puVar3;
  *(undefined2 **)(in_BX + 0x4) = puVar3;
  if ((*(byte *)(in_BX + 0x3) & 0x7) == 0x2)
  {
    *(undefined2 *)((int)in_BX + 0x12) = 0x8;
  }
  else
  {
    iVar2 = *(int *)((int)*in_BX + 0x18);
    *(int *)((int)in_BX + 0x12) = (iVar2 - 0x5U & ~-(uint)(iVar2 + 0x3U < 0x8)) + 0x8;
  }
  puVar3[-0x1] = (int)puVar3 - (int)puVar1;
  *puVar1 = (int)puVar3 - (int)puVar1 | 0x2;
  *(undefined2 **)(in_BX + 0x6) = puVar3;
  *(undefined2 *)((int)in_BX + 0x16) = puVar3[0x1];
  *(int *)(puVar3[0x1] + 0x4) = (int)puVar1;
  puVar3[0x1] = puVar1;
  *(undefined2 *)(in_BX + 0x2) = 0xe08;
  return *puVar1 & 0xfffc;
}



// AI Note: High-level heap allocation routine with flags. Dispatches to
// heap_alloc_small (1000:0838), heap_alloc_medium (1000:0b20), or heap_alloc_large
// (1000:05e2) based on requested size and context. Includes validation and
// zero-initialization logic.

void * __stdcall16far
heap_alloc_with_flags(byte param_1,uint param_2,int param_3,undefined4 param_4)
{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  int unaff_SI;
  int unaff_DI;
  undefined2 uVar5;
  long lVar6;
  void *pvStack_4;
  
                // Heap allocation function with configurable flags.
                // param_1: Flags byte - bit 0 controls zero-initialization
                // param_2/param_3: Size as 32-bit value (low/high words)
                // param_4: Pointer to heap descriptor structure (offset +0x14 contains
                // magic -0x4153)
                // Returns: Far pointer to allocated memory block, or NULL on failure
                // Delegates to FUN_1000_0838 for small blocks or FUN_1000_0b20 for
                // large blocks
  uVar5 = (undefined2)((ulong)param_4 >> 0x10);
  if (*(int *)((int)param_4 + 0x14) != -0x4153)
  {
    invoke_error_handler();
    return NULL;
  }
  pvStack_4 = NULL;
  if ((param_3 != 0x0) || ((true && (*(uint *)((char *)s_HeapVersion + 0x6) < param_2)))
     )
  {
    if ((param_3 != 0x0) ||
       ((true && (*(uint *)((char *)s_HeapVersion + 0xa) < param_2))))
    {
      lVar6 = heap_alloc_large(CONCAT22(param_3,param_2),(dword *)&g_HeapContext);
    }
    else
    {
      heap_alloc_medium((dword *)&g_HeapContext,unaff_SI,unaff_DI);
      lVar6 = (ulong)param_2 << 0x10;
    }
    pvStack_4 = (void *)((ulong)lVar6 >> 0x10);
  }
  else if ((false) || (param_2 != 0x0))
  {
    puVar3 = heap_alloc_small((dword *)&g_HeapContext);
    if ((pvStack_4 != NULL || puVar3 != NULL) && ((param_1 & 0x1) != 0x0))
    {
      uVar2 = *(uint *)((char *)s_HeapVersion + 0x6);
      for (uVar4 = uVar2 >> 0x1; uVar4 != 0x0; uVar4 -= 0x1)
      {
        puVar1 = puVar3;
        puVar3 = puVar3 + 0x1;
        *puVar1 = 0x0;
      }
      if ((uVar2 & 0x1) != 0x0)
      {
        *(undefined1 *)puVar3 = 0x0;
      }
    }
  }
  else
  {
    invoke_error_handler();
    pvStack_4 = NULL;
  }
  return pvStack_4;
}



// AI Note: Allocates a medium-sized memory block. Searches size-specific buckets and
// uses heap_search_free_blocks (1000:0c32). If no suitable block is found, it may call
// a cleanup routine (indirect call via in_BX+0x32) or extend the heap via
// heap_alloc_block (1000:03c6) or heap_alloc_large (1000:05e2).

void * __cdecl16near heap_alloc_medium(void *heap_ctx,int flags,int size)
{
  uint in_AX;
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int in_DX;
  int in_BX;
  void *unaff_SI;
  int unaff_DI;
  uint *puVar6;
  dword *heap_ctx_00;
  long lVar7;
  void *pvVar8;
  uint uStack_14;
  uint *puStack_6;
  
  heap_ctx_00 = (dword *)&g_HeapContext;
  uVar1 = in_AX & 0x2;
  uVar4 = in_DX + 0x5U & 0xfffc;
  uVar4 = uVar4 - 0x8 & ~-(uint)(uVar4 < 0x8);
  uVar5 = uVar4 + 0x8;
  puVar6 = (uint *)*(uint *)(uVar1 * 0x2 + in_BX);
  uStack_14 = in_AX;
  puStack_6 = puVar6;
  if (puVar6 == NULL) goto LAB_1000_0b64;
  do
  {
    do
    {
      if ((uVar5 <= *puVar6) &&
         (uVar2 = uStack_14,
         pvVar3 = heap_search_free_blocks(heap_ctx_00,(int)unaff_SI,unaff_DI),
         uVar2 != 0x0 || pvVar3 != NULL))
      {
        *(undefined2 *)(uVar1 * 0x2 + in_BX) = puVar6;
        return pvVar3;
      }
      puVar6 = (uint *)puVar6[0x2];
    } while (puVar6 != puStack_6);
LAB_1000_0b64:
    if (((((uStack_14 & 0x2) == 0x0) || ((uStack_14 & 0x40) != 0x0)) ||
        (*(int *)(in_BX + 0x32) == 0x0)) ||
       (uVar2 = (*(code *)*(undefined2 *)(in_BX + 0x32))(), uVar2 < uVar5))
    {
      if (((uStack_14 & 0x10) != 0x0) ||
         (lVar7 = heap_alloc_block((ulong)*(uint *)(in_BX + 0x1a),unaff_SI,unaff_DI),
         lVar7 == 0x0))
      {
        if ((uStack_14 & 0x20) == 0x0)
        {
          uVar1 = uVar4 + 0x1007 & 0xf000;
          uVar4 = *(int *)(in_BX + 0x20) + (uint)CARRY2(uVar1,*(uint *)(in_BX + 0x1e));
          if ((uVar4 <= *(uint *)(in_BX + 0x28)) &&
             ((uVar4 < *(uint *)(in_BX + 0x28) ||
              (uVar1 + *(uint *)(in_BX + 0x1e) <= *(uint *)(in_BX + 0x26)))))
          {
            pvVar8 = (void *)heap_alloc_large((ulong)uVar5,unaff_SI);
            return (void *)pvVar8;
          }
        }
        return NULL;
      }
    }
    else
    {
      uStack_14 |= 0x40;
    }
    puVar6 = (uint *)*(undefined2 *)(uVar1 * 0x2 + in_BX);
    puStack_6 = (uint *)puVar6[0x2];
  } while( true );
}



// AI Note: Core search routine for free memory blocks within a heap strategy context.
// Performs block splitting and unlinking from circular free lists. If no block matches,
// it may call an external cleanup/notification routine (indirect call via in_AX+0x34).
// Implements size-aligned memory management (0xFFFC mask).

void * __cdecl16near heap_search_free_blocks(void *heap_ctx,int size,int flags)
{
  byte *pbVar1;
  uint in_AX;
  uint uVar2;
  uint in_DX;
  undefined4 *in_BX;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  undefined2 uVar6;
  uint uStack_e;
  uint *puStack_8;
  uint uStack_6;
  
  puVar5 = (uint *)*(undefined2 *)((int)in_BX + 0xe);
  uStack_6 = 0x0;
  puVar3 = puVar5;
  while( true )
  {
    do
    {
      uVar2 = *puVar3;
      if (in_AX <= uVar2)
      {
        uVar2 = (uVar2 & 0xfffc) - in_AX;
        puStack_8 = puVar3;
        if (uVar2 < *(uint *)((int)in_BX + 0x12))
        {
          puVar5 = (uint *)puVar3[0x1];
          *(undefined2 *)(puVar3[0x2] + 0x2) = puVar5;
          *(uint *)(puVar3[0x1] + 0x4) = puVar3[0x2];
          *(byte *)puVar3 = (byte)*puVar3 | 0x1;
          uStack_e = *puVar3 & 0xfffc;
          *(uint *)((int)puVar3 + uStack_e) = *(uint *)((int)puVar3 + uStack_e) | 0x2;
        }
        else
        {
          uStack_e = in_AX;
          if ((in_DX & 0x6) == 0x0)
          {
            puStack_8 = (uint *)(uVar2 + (int)puVar3);
            puStack_8[-0x1] = uVar2;
            *puVar3 = uVar2 | 0x2;
            puVar5 = (uint *)puVar3[0x1];
            *(byte *)((int)puStack_8 + in_AX) = *(byte *)((int)puStack_8 + in_AX) | 0x2;
            *puStack_8 = in_AX | 0x1;
          }
          else
          {
            *puVar3 = CONCAT11((char)(in_AX >> 0x8),(byte)*puVar3 & 0x2 | (byte)in_AX) |
                      0x1;
            *(uint *)(puVar3[0x2] + 0x2) = puVar3[0x1];
            *(uint *)(puVar3[0x1] + 0x4) = puVar3[0x2];
            puVar5 = (uint *)((int)puVar3 + in_AX);
            *(uint *)((int)puVar5 + (uVar2 - 0x2)) = uVar2;
            *puVar5 = uVar2 | 0x2;
            uVar2 = *(uint *)(in_BX + 0x4);
            puVar5[0x2] = uVar2;
            puVar5[0x1] = *(uint *)(uVar2 + 0x2);
            *(undefined2 *)(*(int *)(uVar2 + 0x2) + 0x4) = puVar5;
            *(undefined2 *)(uVar2 + 0x2) = puVar5;
          }
        }
        *(undefined2 *)((int)in_BX + 0xe) = puVar5;
        if ((in_DX & 0x1) != 0x0)
        {
          puVar3 = puStack_8;
          for (uVar2 = uStack_e - 0x2 >> 0x1; puVar3 = puVar3 + 0x1, uVar2 != 0x0;
              uVar2 -= 0x1)
          {
            *puVar3 = 0x0;
          }
          if ((uStack_e - 0x2 & 0x1) != 0x0)
          {
            *(byte *)puVar3 = 0x0;
          }
        }
        if (((in_DX & 0x2) != 0x0) && (puVar5[0x1] == puVar5[0x2]))
        {
          *(uint *)in_BX[0x1] =
               *(uint *)*(undefined2 *)(*(int *)(in_BX + 0x4) + 0x2) & 0xfffc;
          pbVar1 = (byte *)((int)in_BX[0x1] + 0x3);
          *pbVar1 = *pbVar1 | 0x80;
        }
        *(int *)((int)in_BX + 0xa) = *(int *)((int)in_BX + 0xa) + 0x1;
        return puStack_8 + 0x1;
      }
      if (uStack_6 < uVar2)
      {
        uStack_6 = uVar2;
      }
      puVar3 = (uint *)puVar3[0x1];
    } while (puVar3 != puVar5);
    if (((in_DX & 0x2) == 0x0) || ((in_DX & 0x40) != 0x0)) break;
    uVar6 = (undefined2)((ulong)*in_BX >> 0x10);
    iVar4 = (int)*in_BX;
    if (*(int *)(iVar4 + 0x34) == 0x0) break;
    uStack_6 = (*(code *)*(undefined2 *)(iVar4 + 0x34))();
    if ((uStack_6 < in_AX) ||
       (puVar3 = (uint *)*(undefined2 *)((int)in_BX + 0xe), puVar3 == NULL)) break;
  }
  *(uint *)in_BX[0x1] = uStack_6 & 0xfffc;
  return NULL;
}



// AI Note: Core heap freeing routine. Validates the allocation strategy
// (p_AllocStrategyCode at 1050:000c) and dispatches the free request via an indirect
// call (at offset 0x8) using the global heap context g_HeapContext (1050:1050).
// High-level entry point for freeing blocks.

int __stdcall16far heap_free_core(void *block_ptr)
{
  undefined2 in_stack_00000006;
  
                // Core heap deallocation function called by free_if_not_null.
                // param_1/param_2: Far pointer (segment:offset) to memory block to free
                // Validates heap integrity by checking magic value 0xcad0 before
                // freeing.
                // Invokes function pointer at *0x8 to perform actual deallocation.
                // Returns 1 on success, 0 on error (invalid heap state)
  if (((uint)*(undefined **)&p_AllocStrategyCode & 0xfff8) != 0xcad0)
  {
    invoke_error_handler();
    return 0x0;
  }
  (*(code *)*(undefined2 *)0x8)(0x1050);
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16near heap_free_block_internal(u16 param_1)
{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint *puVar4;
  void *unaff_SI;
  int unaff_DI;
  bool bVar5;
  
  puVar4 = (uint *)(param_1 - 0x2);
  bVar5 = (*puVar4 & 0x2) != 0x0;
  if (bVar5)
  {
    *(byte *)puVar4 = (byte)*puVar4 & 0xfe;
  }
  else
  {
    puVar3 = (uint *)((int)puVar4 - *(int *)(param_1 - 0x4));
    puVar1 = puVar3;
    *puVar1 = *puVar1 + (*puVar4 & 0xfffc);
    puVar4 = puVar3;
  }
  puVar3 = (uint *)((*puVar4 & 0xfffc) + (int)puVar4);
  if ((*puVar3 & 0x1) == 0x0)
  {
    *puVar4 = *puVar4 + (*puVar3 & 0xfffc);
    if (puVar3 == (uint *)p_SmallBlockFreeList)
    {
      p_SmallBlockFreeList = (undefined *)puVar4;
    }
    *(uint *)(puVar3[0x2] + 0x2) = puVar3[0x1];
    *(uint *)(puVar3[0x1] + 0x4) = puVar3[0x2];
    puVar3 = (uint *)((*puVar4 & 0xfffc) + (int)puVar4);
  }
  puVar3[-0x1] = *puVar4 & 0xfffc;
  if (*_p_LastAllocatedBlock < puVar3[-0x1])
  {
    *_p_LastAllocatedBlock = *puVar4 & 0xfffc;
  }
  *(byte *)puVar3 = (byte)*puVar3 & 0xfd;
  if (bVar5)
  {
    if (*(undefined **)(p_FreeBlockListHead + 0x2) != p_FreeBlockListHead)
    {
      pbVar2 = (byte *)((int)(uint *)_p_LastAllocatedBlock + 0x3);
      *pbVar2 = *pbVar2 & 0x7f;
    }
    puVar4[0x2] = (uint)p_FreeBlockListHead;
    puVar4[0x1] = *(uint *)(p_FreeBlockListHead + 0x2);
    *(undefined2 *)(*(int *)(p_FreeBlockListHead + 0x2) + 0x4) = puVar4;
    *(uint **)(p_FreeBlockListHead + 0x2) = puVar4;
  }
  _g_AllocFlags += -0x1;
  if (_g_AllocFlags == 0x0)
  {
    heap_try_release_block(unaff_SI,unaff_DI);
  }
  return;
}



// AI Note: Reallocates a memory block. If the block cannot be resized in place, it
// allocates a new block via heap_alloc_with_flags (1000:0a48), copies the data, and
// frees the old block via heap_free_core (1000:0dc6). Uses global heap pointers at
// 1050:000c and 1050:0002.

void * __stdcall16far
heap_realloc(int flags,long new_size,void *old_block,void *heap_ctx)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  int unaff_SS;
  undefined2 *puVar10;
  int in_stack_00000006;
  
                // Heap reallocation function - grows/shrinks memory blocks.
                // param_1: Flags - bit 3 controls whether to free old block
                // param_2/param_3: New size as 32-bit value
                // param_4/param_5: Far pointer to existing memory block
                // Allocates new block via heap_alloc_with_flags, copies old data,
                // optionally frees old block.
                // Returns far pointer to new block, or original pointer if allocation
                // fails
  if (((uint)*(undefined **)&p_AllocStrategyCode & 0xfff8) == 0xcad0)
  {
    uVar3 = *NULL;
    puVar4 = *(undefined **)&p_CurrentHeapContext;
    if ((flags & 0x8U) == 0x0)
    {
      pvVar5 = (void *)((int)&new_size + 0x2);
    }
    else
    {
      pvVar5 = NULL;
      unaff_SS = 0x0;
    }
    puVar10 = (undefined2 *)heap_query_block_size(flags,pvVar5,unaff_SS);
    puVar6 = (undefined2 *)puVar10;
    if (puVar6 == NULL)
    {
      return new_size._2_2_;
    }
    if ((flags & 0x8U) == 0x0)
    {
      puVar7 = puVar6;
      pvVar5 = heap_alloc_with_flags(flags,in_stack_00000006,(int)new_size,uVar3,puVar4)
      ;
      if (pvVar5 != NULL || puVar7 != NULL)
      {
        uVar8 = (uint)puVar6 >> 0x1;
        puVar6 = new_size._2_2_;
        puVar9 = puVar7;
        for (; uVar8 != 0x0; uVar8 -= 0x1)
        {
          puVar2 = puVar9;
          puVar9 = puVar9 + 0x1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 0x1;
          *puVar2 = *puVar1;
        }
        for (uVar8 = (uint)(((ulong)puVar10 & 0x1) != 0x0); uVar8 != 0x0; uVar8 -= 0x1)
        {
          puVar1 = puVar9;
          puVar9 = (undefined2 *)((int)puVar9 + 0x1);
          puVar10 = puVar6;
          puVar6 = (undefined2 *)((int)puVar6 + 0x1);
          *(undefined1 *)puVar1 = *(undefined1 *)puVar10;
        }
        heap_free_core(new_size._2_2_);
      }
      return puVar7;
    }
    if ((int)new_size == 0x0 && in_stack_00000006 == 0x0)
    {
      return NULL;
    }
  }
  invoke_error_handler();
  return NULL;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// AI Note: Queries the size of a memory block based on the active allocation strategy
// (p_AllocStrategyCode at 1050:000c). Handles strategies 1, 2, and 3, and may attempt
// an in-place resize via heap_prepare_inplace_resize (1000:115c) if necessary. Relies
// on internal heap metadata stored in block descriptors.

long heap_query_block_size(int flags,void *block_ptr,int segment)
{
  undefined2 *puVar1;
  byte bVar2;
  uint in_AX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint in_DX;
  void *in_BX;
  undefined2 *puVar7;
  void *unaff_SI;
  int unaff_DI;
  undefined2 uVar8;
  ulong uVar9;
  uint uStack_4;
  
  if (in_DX == 0x0 && in_AX == 0x0)
  {
    invoke_error_handler();
    if (segment == 0x0 && block_ptr == NULL) goto LAB_1000_0ff0;
    *(undefined2 *)((int)block_ptr + 0x2) = 0x0;
    *(undefined2 *)block_ptr = 0x0;
    uVar3 = in_DX;
    goto LAB_1000_1154;
  }
  bVar2 = (byte)p_AllocStrategyCode & 0x7;
  iVar5 = (int)_DAT_1050_0000;
  uVar8 = (undefined2)((ulong)_DAT_1050_0000 >> 0x10);
  if (((byte)p_AllocStrategyCode & 0x7) != 0x0)
  {
    if (bVar2 == 0x1)
    {
      uVar4 = *(uint *)(iVar5 + 0x18);
      uVar3 = 0x0;
      if (true)
      {
        if (in_DX != 0x0)
        {
          return (ulong)uVar4;
        }
        if (uVar4 < in_AX)
        {
          return (long)uVar4;
        }
      }
      goto LAB_1000_1154;
    }
    if (bVar2 != 0x2)
    {
      if (bVar2 == 0x3)
      {
        if (((segment != 0x0 || block_ptr != NULL) && (in_DX == 0x0)) &&
           ((false || (in_AX <= *(uint *)(iVar5 + 0x1c)))))
        {
          uVar9 = heap_get_block_size_far(in_BX);
          if (uVar9 <= CONCAT22(in_DX,in_AX))
          {
            return uVar9;
          }
          if ((false) && ((uint)uVar9 <= in_AX))
          {
            return uVar9;
          }
          return CONCAT22((int)(uVar9 >> 0x10),in_AX);
        }
        iVar5 = heap_try_resize_block(flags,block_ptr,segment);
        uVar3 = in_DX;
        if ((iVar5 == 0x0) && (segment == 0x0 && block_ptr == NULL))
        {
LAB_1000_0ff0:
          return CONCAT22(in_DX,0x1);
        }
      }
      else
      {
        if (segment == 0x0 && block_ptr == NULL) goto LAB_1000_0ff0;
        *(undefined2 *)((int)block_ptr + 0x2) = 0x0;
        *(undefined2 *)block_ptr = 0x0;
        uVar3 = in_DX;
      }
      goto LAB_1000_1154;
    }
  }
  uVar3 = *(uint *)((int)in_BX + -0x2) & 0x7ffc;
  uStack_4 = uVar3 - 0x2;
  if ((*(byte *)((int)in_BX + -0x1) & 0x80) != 0x0)
  {
    uStack_4 = uVar3 - 0x6;
  }
  uVar3 = 0x0;
  if ((true) && ((in_DX != 0x0 || (uStack_4 < in_AX))))
  {
    if ((true) && ((in_DX != 0x0 || (*(uint *)(iVar5 + 0x1c) < in_AX))))
    goto LAB_1000_106c;
  }
  iVar5 = heap_prepare_inplace_resize(unaff_SI,unaff_DI);
  if (iVar5 != 0x0)
  {
    if (((flags & 0x1U) != 0x0) &&
       ((uVar4 = (*(uint *)((int)in_BX + -0x2) & 0x7ffc) - 0x2, uStack_4 < in_AX ||
        (uStack_4 = in_AX, in_AX < uVar4))))
    {
      puVar7 = (undefined2 *)(uStack_4 + (int)in_BX);
      uVar4 -= uStack_4;
      for (uVar6 = uVar4 >> 0x1; uVar6 != 0x0; uVar6 -= 0x1)
      {
        puVar1 = puVar7;
        puVar7 = puVar7 + 0x1;
        *puVar1 = 0x0;
      }
      if ((uVar4 & 0x1) != 0x0)
      {
        *(undefined1 *)puVar7 = 0x0;
      }
    }
LAB_1000_1154:
    return (ulong)uVar3 << 0x10;
  }
LAB_1000_106c:
  return CONCAT22(uVar3,uStack_4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// AI Note: Prepares a heap block for in-place resizing by adjusting its boundary with
// neighboring free blocks. Links and unlinks from p_SmallBlockFreeList (1050:000e) and
// p_FreeBlockListHead (1050:0010). Updates p_LastAllocatedBlock (1050:0004) if the
// available free space changes.

int __cdecl16near heap_prepare_inplace_resize(void *block_ptr,int new_size)
{
  byte *pbVar1;
  int in_AX;
  uint uVar2;
  uint uVar3;
  uint *in_BX;
  uint *puVar4;
  int iVar5;
  uint uStack_4;
  
  uVar2 = *in_BX & 0x7ffc;
  uVar3 = in_AX + 0x5U & 0xfffc;
  uVar3 = (uVar3 - 0x8 & ~-(uint)(uVar3 < 0x8)) + 0x8;
  if (uVar2 < uVar3)
  {
    puVar4 = (uint *)(uVar2 + (int)in_BX);
    if (((*puVar4 & 0x1) != 0x0) || ((*puVar4 & 0xfffc) + uVar2 < uVar3))
    {
      return 0x0;
    }
    if (puVar4 == (uint *)p_SmallBlockFreeList)
    {
      p_SmallBlockFreeList = (undefined *)puVar4[0x1];
    }
    *(uint *)(puVar4[0x2] + 0x2) = puVar4[0x1];
    *(uint *)(puVar4[0x1] + 0x4) = puVar4[0x2];
    uStack_4 = ((*puVar4 & 0xfffc) + uVar2) - uVar3;
    if (uStack_4 < (uint)s_HeapVersion._0_2_)
    {
      *in_BX = *in_BX + (*puVar4 & 0xfffc);
      pbVar1 = (byte *)((int)puVar4 + (*puVar4 & 0xfffc));
      *pbVar1 = *pbVar1 | 0x2;
      return 0x1;
    }
  }
  else
  {
    uStack_4 = uVar2 - uVar3;
    if (uStack_4 < (uint)s_HeapVersion._0_2_)
    {
      return 0x1;
    }
    puVar4 = (uint *)(uVar2 + (int)in_BX);
    if ((*puVar4 & 0x1) == 0x0)
    {
      uStack_4 += *puVar4 & 0xfffc;
      if (puVar4 == (uint *)p_SmallBlockFreeList)
      {
        p_SmallBlockFreeList = (undefined *)puVar4[0x1];
      }
      *(uint *)(puVar4[0x2] + 0x2) = puVar4[0x1];
      *(uint *)(puVar4[0x1] + 0x4) = puVar4[0x2];
    }
    if (*_p_LastAllocatedBlock < uStack_4)
    {
      *_p_LastAllocatedBlock = uStack_4;
    }
  }
  *in_BX = *in_BX & 0x8003 | uVar3;
  *(uint *)(uVar3 + (int)in_BX) = uStack_4 | 0x2;
  iVar5 = uVar3 + (int)in_BX;
  *(undefined2 *)(iVar5 + 0x4) = p_FreeBlockListHead;
  *(undefined2 *)(iVar5 + 0x2) = *(undefined2 *)(p_FreeBlockListHead + 0x2);
  *(int *)(*(int *)(p_FreeBlockListHead + 0x2) + 0x4) = iVar5;
  *(int *)(p_FreeBlockListHead + 0x2) = iVar5;
  *(uint *)((byte *)(iVar5 + uStack_4) + -0x2) = uStack_4;
  pbVar1 = (byte *)(iVar5 + uStack_4);
  *pbVar1 = *pbVar1 & 0xfd;
  return 0x1;
}



// AI Note: Retrieves the size of a memory block using far pointers. Dispatches based on
// the allocation strategy at 1050:000c. Handles magic number validation and block
// descriptor metadata to compute the effective user size.

long __stdcall16far heap_get_block_size_far(void *block_ptr)
{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined2 in_stack_00000006;
  uint uStack_6;
  int iStack_4;
  
  if (((uint)*(undefined **)&p_AllocStrategyCode & 0xfff8) != 0xcad0)
  {
    invoke_error_handler();
    return -0x1;
  }
  bVar1 = *(byte *)(undefined **)&p_AllocStrategyCode & 0x7;
  if ((*(byte *)(undefined **)&p_AllocStrategyCode & 0x7) != 0x0)
  {
    if (bVar1 == 0x1)
    {
      return (long)*(uint *)((int)*NULL + 0x18);
    }
    if (bVar1 != 0x2)
    {
      if (bVar1 != 0x3)
      {
        return -0x1;
      }
      lVar4 = query_global_memory_block(NULL);
      return CONCAT22((int)((ulong)lVar4 >> 0x10) - (uint)((uint)lVar4 < 0x14),
                      (uint)lVar4 - 0x14);
    }
  }
  uVar2 = *(uint *)((int)block_ptr + -0x2) & 0x7ffc;
  uStack_6 = uVar2 - 0x2;
  iStack_4 = 0x0;
  if ((*(uint *)((int)block_ptr + -0x2) & 0x8000) != 0x0)
  {
    bVar3 = uStack_6 < 0x4;
    uStack_6 = uVar2 - 0x6;
    iStack_4 = -(uint)bVar3;
  }
  return CONCAT22(iStack_4,uStack_6);
}



// AI Note: Low-level memory allocation using Windows 16-bit APIs. Calls GlobalAlloc16,
// GlobalPageLock16, and GlobalLock16. Implements retry logic and context-based locking
// via heap_enter_lock_context (1000:1558) and heap_leave_lock_context (1000:15ce).
// Handles large allocations by capping at 0xFFF0.

void __stdcall16far heap_set_alloc_params(int flags,long size)
{
  HGLOBAL16 handle;
  bool bVar1;
  uint in_stack_00000006;
  void *pvStack_a;
  u16 uStack_8;
  int iStack_6;
  
  iStack_6 = 0x1;
  if (((flags & 0x1000U) != 0x0) && (((u16)size != 0x0 || (0xfff0 < in_stack_00000006)))
     )
  {
    in_stack_00000006 = 0xfff0;
    size._0_2_ = 0x0;
  }
  if ((flags & 0x4U) != 0x0)
  {
    uStack_8 = (u16)size;
    pvStack_a = heap_enter_lock_context(in_stack_00000006,(u16)size);
  }
  do
  {
    handle = GlobalAlloc16(in_stack_00000006,(u16)size);
    if (handle != 0x0) break;
    bVar1 = iStack_6 != 0x0;
    iStack_6 = iStack_6 + -0x1;
  } while (bVar1);
  if ((flags & 0x4U) != 0x0)
  {
    if (handle != 0x0)
    {
      GlobalPageLock16(handle);
    }
    heap_leave_lock_context(pvStack_a,uStack_8);
  }
  if (handle != 0x0)
  {
    GlobalLock16(handle);
    return;
  }
  return;
}



// AI Note: Low-level memory deallocation using Windows 16-bit APIs. Calls
// GlobalHandle16 to retrieve the handle and GlobalFree16 to release the global memory
// block. Companion to heap_set_alloc_params (1000:131c).

void __stdcall16far heap_free_block(void *ptr)
{
  uint32_t handle;
  uint16_t in_stack_00000006;
  
  handle = GlobalHandle16(in_stack_00000006);
  if (handle != 0x0)
  {
    GlobalFree16(handle);
    return;
  }
  return;
}



// AI Note: Raw global memory block management. Uses GlobalHandle16, GlobalPageUnlock16,
// GlobalRealloc16, GlobalPageLock16, and GlobalLock16 to resize and lock memory.
// Includes flags for page locking (0x4) and allocation strategies (0x1000, 0x100).
// Similar to heap_set_alloc_params (1000:131c) but includes realloc capability.

int __stdcall16far heap_alloc_raw_block(int flags,u16 param_2,long size,void *base_ptr)
{
  uint32_t handle;
  HGLOBAL16 handle_00;
  bool bVar1;
  void *fVar2;
  int iStack_c;
  uint uStack_8;
  
  handle = GlobalHandle16((uint16_t)base_ptr);
  uStack_8 = 0x32;
  iStack_c = 0x1;
  if (((flags & 0x1000U) != 0x0) && (((HGLOBAL16)size != 0x0 || (0xfff0 < param_2))))
  {
    param_2 = 0xfff0;
    size._0_2_ = 0x0;
  }
  if ((flags & 0x100U) != 0x0)
  {
    uStack_8 = 0x72;
  }
  if ((flags & 0x804U) != 0x0)
  {
    uStack_8 &= 0xfffd;
  }
  if (handle != 0x0)
  {
    if ((flags & 0x4U) != 0x0)
    {
      GlobalPageUnlock16(handle);
    }
    do
    {
      handle_00 = GlobalRealloc16(uStack_8,param_2,(HGLOBAL16)size);
      if (handle_00 != 0x0) break;
      uStack_8 &= 0xffcf;
      bVar1 = iStack_c != 0x0;
      iStack_c = iStack_c + -0x1;
    } while (bVar1);
    if ((handle_00 != 0x0) && ((flags & 0x4U) != 0x0))
    {
      GlobalPageLock16(handle_00);
    }
    if (handle_00 != 0x0)
    {
      fVar2 = GlobalLock16(handle_00);
      return (int)(void *)fVar2;
    }
  }
  return 0x0;
}



// AI Note: Wrapper for heap_alloc_raw_block (1000:1408). Attempts to allocate or resize
// a block with specific flags (masks 0xFDFF, adds 0x800). Includes size validation
// (0xFFF1 threshold). Returns a success boolean.

int __stdcall16far heap_try_alloc_block(int flags,long size,void *base_ptr)
{
  int iVar1;
  int in_DX;
  uint in_stack_00000006;
  
  if (((flags & 0x1000U) != 0x0) || (((int)size == 0x0 && (in_stack_00000006 < 0xfff1)))
     )
  {
    iVar1 = heap_alloc_raw_block
                      (flags & 0xfdffU | 0x800,in_stack_00000006,size,base_ptr);
    if (in_DX != 0x0 || iVar1 != 0x0)
    {
      return 0x1;
    }
  }
  return 0x0;
}



// AI Note: Retrieves the size of a global memory block using Windows 16-bit APIs. Calls
// GlobalHandle16 and GlobalSize16. Used across the heap manager to validate block
// boundaries and descriptor metadata.

long __stdcall16far query_global_memory_block(void *ptr)
{
  uint32_t uVar1;
  undefined2 in_DX;
  uint16_t in_stack_00000006;
  
                // Queries Windows 16-bit global memory block information.
                // param_2: Memory selector/segment
                // Calls GlobalHandle16() to get handle, then GlobalSize16() to query
                // size.
                // Used for validating global memory blocks allocated via Windows API
  uVar1 = GlobalHandle16(in_stack_00000006);
  if (uVar1 != 0x0)
  {
    uVar1 = GlobalSize16(uVar1);
    return CONCAT22(in_DX,uVar1);
  }
  return 0x0;
}



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
