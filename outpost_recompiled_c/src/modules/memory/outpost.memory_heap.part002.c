/*
 * Source: outpost.c
 * Theme: memory_heap
 * Chunk: 2/13
 * Original lines (combined): 1380-2248
 * Boundaries: top-level declarations/definitions only
 */




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
// a cleanup routine (indirect call via reg_bx+0x32) or extend the heap via
// heap_alloc_block (1000:03c6) or heap_alloc_large (1000:05e2).

void * __cdecl16near heap_alloc_medium(void *heap_ctx,int flags,int size)
{
  uint reg_ax;
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int reg_dx;
  int reg_bx;
  void *unaff_SI;
  int unaff_DI;
  uint *puVar6;
  dword *heap_ctx_00;
  long lVar7;
  void *pvVar8;
  uint uStack_14;
  uint *puStack_6;
  
  heap_ctx_00 = (dword *)&g_HeapContext;
  uVar1 = reg_ax & 0x2;
  uVar4 = reg_dx + 0x5U & 0xfffc;
  uVar4 = uVar4 - 0x8 & ~-(uint)(uVar4 < 0x8);
  uVar5 = uVar4 + 0x8;
  puVar6 = (uint *)*(uint *)(uVar1 * 0x2 + reg_bx);
  uStack_14 = reg_ax;
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
        *(undefined2 *)(uVar1 * 0x2 + reg_bx) = puVar6;
        return pvVar3;
      }
      puVar6 = (uint *)puVar6[0x2];
    } while (puVar6 != puStack_6);
LAB_1000_0b64:
    if (((((uStack_14 & 0x2) == 0x0) || ((uStack_14 & 0x40) != 0x0)) ||
        (*(int *)(reg_bx + 0x32) == 0x0)) ||
       (uVar2 = (*(code *)*(undefined2 *)(reg_bx + 0x32))(), uVar2 < uVar5))
    {
      if (((uStack_14 & 0x10) != 0x0) ||
         (lVar7 = heap_alloc_block((ulong)*(uint *)(reg_bx + 0x1a),unaff_SI,unaff_DI),
         lVar7 == 0x0))
      {
        if ((uStack_14 & 0x20) == 0x0)
        {
          uVar1 = uVar4 + 0x1007 & 0xf000;
          uVar4 = *(int *)(reg_bx + 0x20) + (uint)CARRY2(uVar1,*(uint *)(reg_bx + 0x1e));
          if ((uVar4 <= *(uint *)(reg_bx + 0x28)) &&
             ((uVar4 < *(uint *)(reg_bx + 0x28) ||
              (uVar1 + *(uint *)(reg_bx + 0x1e) <= *(uint *)(reg_bx + 0x26)))))
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
    puVar6 = (uint *)*(undefined2 *)(uVar1 * 0x2 + reg_bx);
    puStack_6 = (uint *)puVar6[0x2];
  } while( true );
}



// AI Note: Core search routine for free memory blocks within a heap strategy context.
// Performs block splitting and unlinking from circular free lists. If no block matches,
// it may call an external cleanup/notification routine (indirect call via reg_ax+0x34).
// Implements size-aligned memory management (0xFFFC mask).

void * __cdecl16near heap_search_free_blocks(void *heap_ctx,int size,int flags)
{
  byte *pbVar1;
  uint reg_ax;
  uint uVar2;
  uint reg_dx;
  undefined4 *reg_bx;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  undefined2 uVar6;
  uint uStack_e;
  uint *puStack_8;
  uint uStack_6;
  
  puVar5 = (uint *)*(undefined2 *)((int)reg_bx + 0xe);
  uStack_6 = 0x0;
  puVar3 = puVar5;
  while( true )
  {
    do
    {
      uVar2 = *puVar3;
      if (reg_ax <= uVar2)
      {
        uVar2 = (uVar2 & 0xfffc) - reg_ax;
        puStack_8 = puVar3;
        if (uVar2 < *(uint *)((int)reg_bx + 0x12))
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
          uStack_e = reg_ax;
          if ((reg_dx & 0x6) == 0x0)
          {
            puStack_8 = (uint *)(uVar2 + (int)puVar3);
            puStack_8[-0x1] = uVar2;
            *puVar3 = uVar2 | 0x2;
            puVar5 = (uint *)puVar3[0x1];
            *(byte *)((int)puStack_8 + reg_ax) = *(byte *)((int)puStack_8 + reg_ax) | 0x2;
            *puStack_8 = reg_ax | 0x1;
          }
          else
          {
            *puVar3 = CONCAT11((char)(reg_ax >> 0x8),(byte)*puVar3 & 0x2 | (byte)reg_ax) |
                      0x1;
            *(uint *)(puVar3[0x2] + 0x2) = puVar3[0x1];
            *(uint *)(puVar3[0x1] + 0x4) = puVar3[0x2];
            puVar5 = (uint *)((int)puVar3 + reg_ax);
            *(uint *)((int)puVar5 + (uVar2 - 0x2)) = uVar2;
            *puVar5 = uVar2 | 0x2;
            uVar2 = *(uint *)(reg_bx + 0x4);
            puVar5[0x2] = uVar2;
            puVar5[0x1] = *(uint *)(uVar2 + 0x2);
            *(undefined2 *)(*(int *)(uVar2 + 0x2) + 0x4) = puVar5;
            *(undefined2 *)(uVar2 + 0x2) = puVar5;
          }
        }
        *(undefined2 *)((int)reg_bx + 0xe) = puVar5;
        if ((reg_dx & 0x1) != 0x0)
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
        if (((reg_dx & 0x2) != 0x0) && (puVar5[0x1] == puVar5[0x2]))
        {
          *(uint *)reg_bx[0x1] =
               *(uint *)*(undefined2 *)(*(int *)(reg_bx + 0x4) + 0x2) & 0xfffc;
          pbVar1 = (byte *)((int)reg_bx[0x1] + 0x3);
          *pbVar1 = *pbVar1 | 0x80;
        }
        *(int *)((int)reg_bx + 0xa) = *(int *)((int)reg_bx + 0xa) + 0x1;
        return puStack_8 + 0x1;
      }
      if (uStack_6 < uVar2)
      {
        uStack_6 = uVar2;
      }
      puVar3 = (uint *)puVar3[0x1];
    } while (puVar3 != puVar5);
    if (((reg_dx & 0x2) == 0x0) || ((reg_dx & 0x40) != 0x0)) break;
    uVar6 = (undefined2)((ulong)*reg_bx >> 0x10);
    iVar4 = (int)*reg_bx;
    if (*(int *)(iVar4 + 0x34) == 0x0) break;
    uStack_6 = (*(code *)*(undefined2 *)(iVar4 + 0x34))();
    if ((uStack_6 < reg_ax) ||
       (puVar3 = (uint *)*(undefined2 *)((int)reg_bx + 0xe), puVar3 == NULL)) break;
  }
  *(uint *)reg_bx[0x1] = uStack_6 & 0xfffc;
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
  uint reg_ax;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint reg_dx;
  void *reg_bx;
  undefined2 *puVar7;
  void *unaff_SI;
  int unaff_DI;
  undefined2 uVar8;
  ulong uVar9;
  uint uStack_4;
  
  if (reg_dx == 0x0 && reg_ax == 0x0)
  {
    invoke_error_handler();
    if (segment == 0x0 && block_ptr == NULL) goto LAB_1000_0ff0;
    *(undefined2 *)((int)block_ptr + 0x2) = 0x0;
    *(undefined2 *)block_ptr = 0x0;
    uVar3 = reg_dx;
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
        if (reg_dx != 0x0)
        {
          return (ulong)uVar4;
        }
        if (uVar4 < reg_ax)
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
        if (((segment != 0x0 || block_ptr != NULL) && (reg_dx == 0x0)) &&
           ((false || (reg_ax <= *(uint *)(iVar5 + 0x1c)))))
        {
          uVar9 = heap_get_block_size_far(reg_bx);
          if (uVar9 <= CONCAT22(reg_dx,reg_ax))
          {
            return uVar9;
          }
          if ((false) && ((uint)uVar9 <= reg_ax))
          {
            return uVar9;
          }
          return CONCAT22((int)(uVar9 >> 0x10),reg_ax);
        }
        iVar5 = heap_try_resize_block(flags,block_ptr,segment);
        uVar3 = reg_dx;
        if ((iVar5 == 0x0) && (segment == 0x0 && block_ptr == NULL))
        {
LAB_1000_0ff0:
          return CONCAT22(reg_dx,0x1);
        }
      }
      else
      {
        if (segment == 0x0 && block_ptr == NULL) goto LAB_1000_0ff0;
        *(undefined2 *)((int)block_ptr + 0x2) = 0x0;
        *(undefined2 *)block_ptr = 0x0;
        uVar3 = reg_dx;
      }
      goto LAB_1000_1154;
    }
  }
  uVar3 = *(uint *)((int)reg_bx + -0x2) & 0x7ffc;
  uStack_4 = uVar3 - 0x2;
  if ((*(byte *)((int)reg_bx + -0x1) & 0x80) != 0x0)
  {
    uStack_4 = uVar3 - 0x6;
  }
  uVar3 = 0x0;
  if ((true) && ((reg_dx != 0x0 || (uStack_4 < reg_ax))))
  {
    if ((true) && ((reg_dx != 0x0 || (*(uint *)(iVar5 + 0x1c) < reg_ax))))
    goto LAB_1000_106c;
  }
  iVar5 = heap_prepare_inplace_resize(unaff_SI,unaff_DI);
  if (iVar5 != 0x0)
  {
    if (((flags & 0x1U) != 0x0) &&
       ((uVar4 = (*(uint *)((int)reg_bx + -0x2) & 0x7ffc) - 0x2, uStack_4 < reg_ax ||
        (uStack_4 = reg_ax, reg_ax < uVar4))))
    {
      puVar7 = (undefined2 *)(uStack_4 + (int)reg_bx);
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
  int reg_ax;
  uint uVar2;
  uint uVar3;
  uint *reg_bx;
  uint *puVar4;
  int iVar5;
  uint uStack_4;
  
  uVar2 = *reg_bx & 0x7ffc;
  uVar3 = reg_ax + 0x5U & 0xfffc;
  uVar3 = (uVar3 - 0x8 & ~-(uint)(uVar3 < 0x8)) + 0x8;
  if (uVar2 < uVar3)
  {
    puVar4 = (uint *)(uVar2 + (int)reg_bx);
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
      *reg_bx = *reg_bx + (*puVar4 & 0xfffc);
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
    puVar4 = (uint *)(uVar2 + (int)reg_bx);
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
  *reg_bx = *reg_bx & 0x8003 | uVar3;
  *(uint *)(uVar3 + (int)reg_bx) = uStack_4 | 0x2;
  iVar5 = uVar3 + (int)reg_bx;
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
  int reg_dx;
  uint in_stack_00000006;
  
  if (((flags & 0x1000U) != 0x0) || (((int)size == 0x0 && (in_stack_00000006 < 0xfff1)))
     )
  {
    iVar1 = heap_alloc_raw_block
                      (flags & 0xfdffU | 0x800,in_stack_00000006,size,base_ptr);
    if (reg_dx != 0x0 || iVar1 != 0x0)
    {
      return 0x1;
    }
  }
  return 0x0;
}
