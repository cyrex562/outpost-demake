/*
 * Source: outpost.c
 * Theme: memory_heap
 * Chunk: 1/13
 * Original lines (combined): 5-1379
 * Boundaries: top-level declarations/definitions only
 */

u16 g_AllocatorFlag1;
pointer p_AllocStrategyCode;
u16 p_LastAllocatedBlock;
byte g_AllocFlags;
pointer p_SmallBlockFreeList;
pointer p_FreeBlockListHead;
pointer g_AllocatedBlock_Offset;
pointer g_AllocatedBlock_Segment;
pointer p_AllocHook_Default;
pointer p_AllocHook_HighPriority;
pointer p_AllocHook_Critical;
pointer p_GlobalPoolList_Offset;
pointer p_GlobalPoolList_Segment;
pointer p_GlobalPoolDescriptor;
pointer g_HeapPoolCount;
pointer p_GlobalAllocHook_Callback;
pointer p_GlobalAllocHook_Segment;
pointer p_Pool_Type1_Event;
pointer p_Pool_Type2_Component;
pointer p_Pool_Type3_Sprite;
pointer p_Pool_Type4_Timer;
pointer p_Pool_Type5_Entity;
pointer p_Pool_Type6_Node;
undefined *PTR_g_AllocFlags_1050_0334;
string s_Alloc:%s_1050_5a5b;
undefined *PTR_p_LastAllocatedBlock_1050_4240;
string s_SCPrelimAlloc_1050_50f6;



long __stdcall16far heap_validate_and_sweep(u32 param_1)
{
  long lVar1;
  u16 local_6;
  u16 local_4;
  
  if (*(int *)((int)param_1 + 0x14) != -0x4153)
  {
    invoke_error_handler();
    return -0x1;
  }
  lVar1 = heap_sweep_free_lists((dword *)&g_HeapContext);
  return lVar1;
}



// AI Note: Performs an indirect call through [in_BX + 0x32], likely a heap-specific
// cleanup or notification callback. References heap context at g_HeapContext
// (1050:1050).

long __cdecl16near heap_sweep_free_lists(void *heap_ctx)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_BX;
  int unaff_SI;
  dword *block_descriptor;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  uint uStack_8;
  
  block_descriptor = (dword *)&g_HeapContext;
  uVar1 = *(uint *)(in_BX + 0x1e);
  iVar2 = *(int *)(in_BX + 0x20);
  uStack_8 = 0x0;
  do
  {
    iStack_a = *(int *)(uStack_8 * 0x2 + in_BX);
    if ((iStack_a != 0x0) && (uStack_8 != 0x3))
    {
      iStack_e = 0x0;
      do
      {
        iStack_c = *(int *)(iStack_a + 0x4);
        if (*(int *)((int)*(undefined4 *)(iStack_a + 0x8) + 0xa) == 0x0)
        {
          iVar3 = heap_try_release_block(block_descriptor,unaff_SI);
          if (iVar3 == 0x0) goto LAB_1000_00f9;
          if (iStack_c == iStack_a)
          {
            iStack_c = 0x0;
          }
        }
        else if (iStack_e == 0x0)
        {
          iStack_e = iStack_a;
        }
        iStack_a = iStack_c;
      } while (iStack_c != iStack_e);
    }
    uStack_8 += 0x1;
  } while (uStack_8 < 0x5);
  if (*(int *)(in_BX + 0x32) != 0x0)
  {
    (*(code *)*(undefined2 *)(in_BX + 0x32))();
  }
LAB_1000_00f9:
  return CONCAT22((iVar2 - *(int *)(in_BX + 0x20)) -
                  (uint)(uVar1 < *(uint *)(in_BX + 0x1e)),
                  uVar1 - *(uint *)(in_BX + 0x1e));
}



// AI Note: Reserves bytes in the heap context. Initializes heap context far pointer to
// g_HeapContext (1050:1050). Uses g_HeapStatus (1050:5f30) and references s_HeapVersion
// (1050:0012).

long __stdcall16far
heap_reserve_bytes(int param_1,uint param_2,uint param_3,undefined4 param_4)
{
  undefined2 uVar1;
  bool bVar2;
  long lVar3;
  dword *heap_ctx;
  uint bucket_index;
  uint uStack_6;
  
  uStack_6 = 0x0;
  bucket_index = 0x0;
  uVar1 = (undefined2)((ulong)param_4 >> 0x10);
  if (*(int *)((int)param_4 + 0x14) != -0x4153)
  {
code_r0x10000128:
    invoke_error_handler();
    return -0x1;
  }
  g_AllocatorFlag1 = 0x1;
  if (param_1 == 0x1)
  {
    if (*(int *)((int)param_4 + 0x18) == 0x0) goto code_r0x10000128;
  }
  else if ((param_1 != 0x2) && (param_1 != 0x4))
  {
    g_AllocatorFlag1 = 0x1;
    return -0x1;
  }
  heap_ctx = (dword *)&g_HeapContext;
  while ((uStack_6 <= param_3 &&
         (((uStack_6 < param_3 || (bucket_index < param_2)) &&
          (lVar3 = heap_alloc_block((ulong)*(uint *)((char *)s_HeapVersion + 0x8),
                                    heap_ctx,bucket_index), lVar3 != 0x0)))))
  {
    bVar2 = CARRY2(bucket_index,*(uint *)((char *)s_HeapVersion + 0x8));
    bucket_index += *(uint *)((char *)s_HeapVersion + 0x8);
    uStack_6 += bVar2;
  }
  return CONCAT22(uStack_6,bucket_index);
}



// AI Note: Extends the heap free list. Performs memory block queries and uses
// g_HeapContext (1050:1050) for allocations. Implements 16-bit far pointer logic for
// segment-relative addressing.

int __cdecl16near heap_extend_free_list(void *heap_ctx)
{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  void *in_BX;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  uint uStack_e;
  uint uStack_c;
  int iStack_a;
  uint uStack_6;
  int iStack_4;
  
  uStack_e = 0x0;
  if (*(int *)((int)in_BX + 0x40) == 0x0 && *(int *)((int)in_BX + 0x3e) == 0x0)
  {
    uVar4 = (int)in_BX + 0x36;
    lVar7 = query_global_memory_block(in_BX);
    lVar8 = lVar7;
  }
  else
  {
    lVar7 = query_global_memory_block(in_BX);
    uVar4 = (uint)lVar7;
    if (((int)((ulong)lVar7 >> 0x10) != 0x0) || (0xffef < uVar4))
    {
      invoke_error_handler();
      return 0x0;
    }
    if (0x1fff < uVar4)
    {
      uVar4 = 0x2000;
    }
    while( true )
    {
      lVar8 = lVar7 + (ulong)uVar4;
      if (((int)((ulong)lVar8 >> 0x10) != 0x0) || (0xfff0 < (uint)lVar8))
      {
        lVar8 = 0xfff0;
      }
      iVar2 = heap_try_alloc_block
                        (*(uint *)((int)in_BX + 0x16) | 0x1000,
                         CONCAT22(in_BX,(int)((ulong)lVar8 >> 0x10)),
                         (dword *)&g_HeapContext);
      iStack_4 = (int)((ulong)lVar7 >> 0x10);
      uStack_6 = (uint)lVar7;
      if (iVar2 != 0x0) break;
      uVar4 >>= 0x1;
      if (uVar4 < 0xc)
      {
        uVar4 *= 0x2;
        invoke_error_handler();
        if (iVar2 == 0x0)
        {
          return (uint)(*(int *)((int)in_BX + 0xa) != 0x0);
        }
        lVar7 = query_global_memory_block(in_BX);
      }
    }
    lVar6 = div_u32_u32_standard
                      (CONCAT22(iStack_4 - (uint)(uStack_6 < 0x42),uStack_6 - 0x42),0xc)
    ;
    uVar4 = (int)in_BX + (int)lVar6 * 0xc + 0x42;
  }
  puVar1 = (uint *)((int)in_BX + 0x1e);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 - (uint)lVar7;
  *(int *)((int)in_BX + 0x20) =
       (*(int *)((int)in_BX + 0x20) - (int)((ulong)lVar7 >> 0x10)) -
       (uint)(uVar3 < (uint)lVar7);
  if (uVar4 != 0x0)
  {
    uVar10 = 0x0;
    uVar9 = 0xc;
    lVar8 = query_global_memory_block(in_BX);
    lVar7 = div_u32_u32_standard
                      (CONCAT22((int)((ulong)lVar8 >> 0x10) - (uint)((uint)lVar8 < 0x42)
                                ,(uint)lVar8 - 0x42),CONCAT22(uVar10,uVar9));
    uStack_e = (int)in_BX + (int)lVar7 * 0xc + 0x36;
  }
  iStack_a = (int)((ulong)lVar8 >> 0x10);
  uStack_c = (uint)lVar8;
  puVar1 = (uint *)((int)in_BX + 0x1e);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uStack_c;
  *(int *)((int)in_BX + 0x20) =
       *(int *)((int)in_BX + 0x20) + iStack_a + (uint)CARRY2(uVar3,uStack_c);
  uVar3 = *(uint *)((int)in_BX + 0xa);
  do
  {
    uVar5 = uVar4;
    *(uint *)(uVar5 + 0x4) = uVar3;
    uVar3 = uVar5;
    uVar4 = uVar5 + 0xc;
  } while (uVar5 < uStack_e);
  *(uint *)((int)in_BX + 0xa) = uVar5;
  return 0x1;
}



// AI Note: Pops a block from the global free list and moves it to a bucket list
// (circularly linked). Calls heap_extend_free_list (1000:01b0) if the global free list
// is exhausted. Facilitates size-specific block distribution.

void * __cdecl16near heap_pop_free_list_to_bucket(void *heap_ctx,int bucket_index)
{
  void *pvVar1;
  int in_AX;
  int iVar2;
  int in_BX;
  void *unaff_SI;
  int *piVar3;
  
  if ((*(int *)(in_BX + 0xa) == 0x0) &&
     (iVar2 = heap_extend_free_list(unaff_SI), iVar2 == 0x0))
  {
    return NULL;
  }
  pvVar1 = (void *)*(int *)(in_BX + 0xa);
  *(undefined2 *)(in_BX + 0xa) = *(undefined2 *)((int)pvVar1 + 0x4);
  piVar3 = (int *)(in_AX * 0x2 + in_BX);
  if (*piVar3 == 0x0)
  {
    *(int *)((int)pvVar1 + 0x6) = (int)pvVar1;
    *(int *)((int)pvVar1 + 0x4) = (int)pvVar1;
  }
  else
  {
    iVar2 = *piVar3;
    *(int *)((int)pvVar1 + 0x6) = iVar2;
    *(undefined2 *)((int)pvVar1 + 0x4) = *(undefined2 *)(iVar2 + 0x4);
    *(int *)(*(int *)(iVar2 + 0x4) + 0x6) = (int)pvVar1;
    *(int *)(iVar2 + 0x4) = (int)pvVar1;
  }
  *piVar3 = (int)pvVar1;
  return pvVar1;
}



// AI Note: Unlinks a block from its bucket list and pushes it to the global free list
// (in_BX + 10). Performs circularly linked list node removal and global list insertion.
// Reverse of heap_pop_free_list_to_bucket (1000:0308).

void __cdecl16near
heap_push_bucket_to_free_list(void *heap_ctx,void *block_descriptor,int bucket_index)
{
  int in_AX;
  int in_DX;
  int in_BX;
  int *piVar1;
  
  if (*(int *)(in_AX + 0x4) == in_AX)
  {
    *(undefined2 *)(in_BX + in_DX * 0x2) = 0x0;
  }
  else
  {
    *(undefined2 *)(*(int *)(in_AX + 0x6) + 0x4) = *(undefined2 *)(in_AX + 0x4);
    *(undefined2 *)(*(int *)(in_AX + 0x4) + 0x6) = *(undefined2 *)(in_AX + 0x6);
    piVar1 = (int *)(in_DX * 0x2 + in_BX);
    if (*piVar1 == in_AX)
    {
      *piVar1 = *(int *)(in_AX + 0x4);
    }
  }
  *(undefined2 *)(in_AX + 0x4) = *(undefined2 *)(in_BX + 0xa);
  *(int *)(in_BX + 0xa) = in_AX;
  return;
}



// AI Note: Allocates a heap block. Initializes global pointers in segment 1050:
// p_AllocStrategyCode (1050:000c), p_CurrentHeapContext (1050:0002),
// p_LastAllocatedBlock (1050:0004), and g_AllocFlags (1050:000a). Dispatches to
// strategy-specific initialization routines (1000:05b4, etc.).

long heap_alloc_block(long size,void *heap_ctx,int bucket_index)
{
  uint *puVar1;
  uint in_AX;
  uint uVar2;
  void *ptr;
  uint *puVar3;
  byte in_DL;
  uint uVar4;
  void *in_BX;
  long lVar5;
  dword *block_ptr;
  void *heap_ctx_00;
  uint uStack_14;
  
  uVar2 = (uint)size + 0xfff & 0xf000;
  uVar4 = size._2_2_ + (uint)(0xf000 < (uint)size) + *(int *)((int)in_BX + 0x20) +
          (uint)CARRY2(uVar2,*(uint *)((int)in_BX + 0x1e));
  if ((uVar4 < *(uint *)((int)in_BX + 0x28)) ||
     ((uVar4 <= *(uint *)((int)in_BX + 0x28) &&
      (uVar2 + *(uint *)((int)in_BX + 0x1e) <= *(uint *)((int)in_BX + 0x26)))))
  {
    if (in_AX == 0x3)
    {
      uStack_14 = (uint)((byte)(-(uint)((in_DL & 0x1) != 0x0) >> 0x8) & 0x1 | 0x20) <<
                  0x8;
    }
    else
    {
      uStack_14 = 0x1000;
    }
    lVar5 = CONCAT22(in_BX,size._2_2_);
    ptr = (void *)(*(uint *)((int)in_BX + 0x16) | uStack_14);
    heap_set_alloc_params((int)ptr,lVar5);
    if (uVar4 != 0x0 || ptr != NULL)
    {
      heap_ctx_00 = (void *)((ulong)lVar5 >> 0x10);
      puVar3 = heap_pop_free_list_to_bucket(heap_ctx_00,in_AX);
      if (puVar3 != NULL)
      {
        puVar3[0x4] = (uint)ptr;
        puVar3[0x5] = uVar4;
        block_ptr = (dword *)&g_HeapContext;
        *(undefined **)&p_AllocStrategyCode = (undefined *)(in_AX | 0xcad0);
        *NULL = in_BX;
        *(undefined **)&p_CurrentHeapContext = (undefined *)(dword *)&g_HeapContext;
        *(u16 *)&p_LastAllocatedBlock = (u16)puVar3;
        *(undefined2 *)0x6 = (dword *)&g_HeapContext;
        ((byte *)&g_AllocFlags)[0x0] = 0x0;
        ((byte *)&g_AllocFlags)[0x1] = 0x0;
        lVar5 = query_global_memory_block(ptr);
        if (in_AX == 0x1)
        {
          uVar2 = heap_init_strategy1(in_BX);
        }
        else if (in_AX == 0x3)
        {
          uVar2 = heap_alloc_strategy3(block_ptr,(int)heap_ctx_00);
        }
        else
        {
          uVar2 = heap_alloc_strategy2(block_ptr,(int)heap_ctx_00);
        }
        *puVar3 = uVar2;
        puVar3[0x1] = 0x8000;
        size._0_2_ = (uint)lVar5;
        size._2_2_ = (int)((ulong)lVar5 >> 0x10);
        puVar1 = (uint *)((int)heap_ctx_00 + 0x1e);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + (uint)size;
        *(int *)((int)heap_ctx_00 + 0x20) =
             *(int *)((int)heap_ctx_00 + 0x20) + size._2_2_ +
             (uint)CARRY2(uVar2,(uint)size);
        return CONCAT22(uVar4,ptr);
      }
      heap_free_block(ptr);
    }
  }
  else
  {
    invoke_error_handler();
  }
  return 0x0;
}



// AI Note: Attempts to release a heap block. References g_HeapContext (1050:1050) and
// s_HeapVersion (1050:0012). Uses s_NewFailedMsg (1050:0020) for error reporting.
// Implements boundary checks before calling heap_push_bucket_to_free_list (1000:0368).

int __cdecl16near heap_try_release_block(void *block_descriptor,int bucket_index)
{
  uint *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int in_AX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *in_BX;
  long lVar8;
  undefined2 uVar9;
  
  iVar2 = *in_BX;
  iVar3 = in_BX[0x1];
  lVar8 = query_global_memory_block(in_BX);
  iVar6 = (int)((ulong)lVar8 >> 0x10);
  uVar5 = (uint)lVar8;
  uVar9 = 0x1050;
  if (in_AX != 0x0)
  {
    uVar7 = (*(int *)(iVar2 + 0x20) - iVar6) - (uint)(*(uint *)(iVar2 + 0x1e) < uVar5);
    if ((uVar7 <= *(uint *)(iVar2 + 0x24)) &&
       ((uVar7 < *(uint *)(iVar2 + 0x24) ||
        (*(uint *)(iVar2 + 0x1e) - uVar5 < *(uint *)(iVar2 + 0x22)))))
    {
      bVar4 = false;
      goto LAB_1000_0595;
    }
  }
  heap_push_bucket_to_free_list((dword *)&g_HeapContext,in_BX,in_AX);
  puVar1 = (uint *)((char *)s_HeapVersion + 0xc);
  uVar7 = *puVar1;
  *puVar1 = *puVar1 - uVar5;
  *(int *)s_NewFailedMsg = (*(int *)s_NewFailedMsg - iVar6) - (uint)(uVar7 < uVar5);
  bVar4 = true;
LAB_1000_0595:
  if (bVar4)
  {
    in_BX[0x6] = 0x0;
    heap_free_block(in_BX);
    return 0x1;
  }
  return 0x0;
}



// AI Note: Initialization routine for heap allocation strategy 3. Sets internal control
// fields (flags, offsets) within the heap structure. Called by heap_alloc_block
// (1000:03c6).

int __cdecl16near heap_alloc_strategy3(void *block_ptr,int flags)
{
  byte in_AL;
  int in_BX;
  
  *(undefined2 *)(in_BX + 0xa) = 0x1;
  *(undefined2 *)(in_BX + 0x8) = 0x668;
  *(byte *)(in_BX + 0x13) = -((in_AL & 0x2) != 0x0) & 0x2;
  *(undefined2 *)(in_BX + 0x10) = 0x0;
  *(undefined2 *)(in_BX + 0xe) = 0x0;
  return 0x0;
}



// AI Note: Allocation routine for large blocks. Retries allocation after calling
// heap_sweep_free_lists (1000:0052) if initial attempt fails. Implements alignment
// (0xF000 mask) and boundary checks before invoking heap_alloc_block (1000:03c6).

long heap_alloc_large(long size,void *heap_ctx)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_BX;
  void *unaff_SI;
  int unaff_DI;
  long lVar5;
  
  iVar2 = (int)size;
  uVar1 = (int)size + 0x14;
  size += 0x14;
  do
  {
    lVar5 = heap_alloc_block(CONCAT22(size._2_2_,uVar1),unaff_SI,unaff_DI);
    if (lVar5 != 0x0)
    {
      return CONCAT22((int)((ulong)lVar5 >> 0x10),(int)lVar5 + 0x14);
    }
    lVar5 = heap_sweep_free_lists(unaff_SI);
    uVar3 = iVar2 + 0x1013U & 0xf000;
    uVar4 = size._2_2_ + (uint)(0xf000 < uVar1) + *(int *)(in_BX + 0x20) +
            (uint)CARRY2(uVar3,*(uint *)(in_BX + 0x1e));
  } while (((uVar4 <= *(uint *)(in_BX + 0x28)) &&
           ((uVar4 < *(uint *)(in_BX + 0x28) ||
            (uVar3 + *(uint *)(in_BX + 0x1e) <= *(uint *)(in_BX + 0x26))))) &&
          ((uVar3 = (uint)((ulong)lVar5 >> 0x10) | (uint)lVar5, uVar3 != 0x0 ||
           (invoke_error_handler(), uVar3 != 0x0))));
  return 0x0;
}



// AI Note: Attempts to resize a heap block. Uses g_HeapContext (1050:1050) and calls
// heap_try_alloc_block (1000:14f2) or heap_alloc_raw_block (1000:1408). Implements
// error handling and block descriptor updates after successful reallocation.

int heap_try_resize_block(uint param_1,int *param_2)
{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_AX;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int in_DX;
  uint uVar11;
  uint uVar12;
  int *in_BX;
  long lVar13;
  long lVar14;
  
  iVar3 = *in_BX;
  iVar4 = in_BX[0x1];
  lVar13 = query_global_memory_block(in_BX);
  iVar9 = in_DX + (uint)(0xffeb < in_AX);
  uVar6 = -(uint)((param_1 & 0x1) != 0x0) & 0x100 |
          -(uint)((param_1 & 0x4) != 0x0) & 0x400 |
          *(uint *)((int)*(undefined4 *)in_BX + 0x16);
  if (param_2._2_2_ == 0x0 && (int *)param_2 == NULL)
  {
    iVar9 = heap_try_alloc_block
                      (uVar6 | 0x2000,CONCAT22(in_BX,iVar9),(dword *)&g_HeapContext);
    if (iVar9 == 0x0)
    {
      return 0x0;
    }
  }
  else
  {
    iVar5 = in_BX[0x2];
    uVar10 = in_BX[0x3];
    uVar12 = uVar10;
    do
    {
      uVar11 = uVar12;
      piVar7 = (int *)heap_alloc_raw_block
                                (uVar6 | 0x2000,in_AX + 0x14,CONCAT22(in_BX,iVar9),
                                 (dword *)&g_HeapContext);
      uVar12 = uVar11 | (uint)piVar7;
      if (uVar12 != 0x0) break;
      piVar8 = piVar7;
      invoke_error_handler();
    } while (piVar8 != NULL);
    if (uVar11 == 0x0 && piVar7 == NULL)
    {
      ((int *)param_2)[0x1] = 0x0;
      *param_2 = 0x0;
      return 0x0;
    }
    *(undefined2 *)(iVar5 + 0x8) = piVar7;
    *(uint *)(iVar5 + 0xa) = uVar11;
    *param_2 = (int)(piVar7 + 0xa);
    ((int *)param_2)[0x1] = uVar11;
    in_BX = piVar7;
  }
  lVar14 = query_global_memory_block(in_BX);
  uVar10 = (uint)(lVar14 - lVar13);
  puVar1 = (uint *)(iVar3 + 0x1e);
  uVar6 = *puVar1;
  *puVar1 = *puVar1 + uVar10;
  piVar2 = (int *)(iVar3 + 0x20);
  *piVar2 = *piVar2 + (int)((ulong)(lVar14 - lVar13) >> 0x10) +
            (uint)CARRY2(uVar6,uVar10);
  return 0x1;
}



// AI Note: Initialization routine for heap allocation strategy 1. Sets internal bucket
// offsets and flags. Calls heap_init_free_lists (1000:07ac) to prepare the initial
// state.

int heap_init_strategy1(void *heap_ctx)
{
  int in_AX;
  int in_BX;
  int unaff_BP;
  void *unaff_SI;
  
  *(undefined2 *)(in_BX + 0xe) = 0x0;
  *(int *)(in_BX + 0x10) = in_BX + 0x14;
  *(undefined2 *)(in_BX + 0x8) = 0x9a0;
  heap_init_free_lists(unaff_SI,in_AX,unaff_BP);
  return 0x1;
}



// AI Note: Initializes a chain of free blocks within a memory segment. Partitions a
// large block into smaller units of size 'block_size' and links them together. Used
// during heap initialization.

void __cdecl16near heap_init_free_lists(void *heap_ctx,int block_size,int total_size)
{
  undefined2 *puVar1;
  uint in_AX;
  int iVar2;
  int in_DX;
  int in_BX;
  uint uVar3;
  
  puVar1 = (undefined2 *)*(undefined2 *)(in_BX + 0x10);
  *(undefined2 *)(in_BX + 0xe) = puVar1;
  uVar3 = in_DX + (in_BX - (int)puVar1);
  iVar2 = (int)puVar1 + (uVar3 - uVar3 % in_AX);
  *(int *)(in_BX + 0x10) = iVar2;
  while (puVar1 < (undefined2 *)(iVar2 - in_AX))
  {
    *puVar1 = (undefined2 *)((int)puVar1 + in_AX);
    puVar1 = (undefined2 *)((int)puVar1 + in_AX);
  }
  *puVar1 = 0x0;
  return;
}



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
