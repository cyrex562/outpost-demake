/*
 * Source: outpost.c
 * Chunk: 8/117
 * Original lines: 8091-9239
 * Boundaries: top-level declarations/definitions only
 */




// Targeted Scan Finding: Far Pointer
// References a global pointer for next token state in segment 1050 (offset 61e4).

char * __cdecl16far strtok_far_optimized_with_state(char *str,char *delimiters)
{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined2 unaff_SS;
  undefined2 uVar7;
  byte *in_stack_00000008;
  byte local_22 [0x20];
  
  pbVar6 = local_22;
  for (iVar5 = 0x10; iVar5 != 0x0; iVar5 += -0x1)
  {
    pbVar2 = pbVar6;
    pbVar6 = pbVar6 + 0x2;
    pbVar2[0x0] = 0x0;
    pbVar2[0x1] = 0x0;
  }
  pbVar6 = (byte *)in_stack_00000008;
  while( true )
  {
    pbVar2 = pbVar6;
    pbVar6 = pbVar6 + 0x1;
    bVar1 = *pbVar2;
    if (bVar1 == 0x0) break;
    local_22[bVar1 >> 0x3] = local_22[bVar1 >> 0x3] | '\x01' << (bVar1 & 0x7);
  }
  pbVar2 = (byte *)CONCAT22(delimiters,str);
  if (delimiters == NULL && str == NULL)
  {
    pbVar2 = (byte *)p_StrtokNextToken;
  }
  do
  {
    p_StrtokNextToken = (dword)pbVar2;
    uVar7 = (undefined2)(p_StrtokNextToken >> 0x10);
    bVar1 = *(byte *)p_StrtokNextToken;
    if (bVar1 == 0x0)
    {
      return NULL;
    }
    pbVar6 = (byte *)p_StrtokNextToken + 0x1;
    pbVar2 = (byte *)CONCAT22(uVar7,(byte *)p_StrtokNextToken + 0x1);
  } while (('\x01' << (bVar1 & 0x7) & local_22[bVar1 >> 0x3]) != 0x0);
  do
  {
    pbVar4 = pbVar6;
    bVar1 = *pbVar4;
    if (bVar1 == 0x0) goto LAB_1000_483c;
    pbVar6 = pbVar4 + 0x1;
  } while (('\x01' << (bVar1 & 0x7) & local_22[bVar1 >> 0x3]) == 0x0);
  *pbVar4 = 0x0;
  pbVar4 = pbVar4 + 0x1;
LAB_1000_483c:
  LOCK();
  pcVar3 = (char *)p_StrtokNextToken;
  p_StrtokNextToken = CONCAT22(p_StrtokNextToken._2_2_,pbVar4);
  UNLOCK();
  return pcVar3;
}



// Compares `param_3` bytes of memory at far pointers `param_1` and `param_2`. Handles
// segment boundaries by adjusting segment registers every 64KB (0x6C segment
// increment). Returns 0 if equal, or the difference between the first non-matching
// bytes.

int __cdecl16far memcmp_far_optimized_with_segments(void *ptr1,void *ptr2,int count)
{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int in_stack_0000000a;
  uint in_stack_0000000c;
  
  if (in_stack_0000000c == 0x0)
  {
    return 0x0;
  }
  do
  {
    uVar3 = ~count;
    uVar3 = ((in_stack_0000000c - 0x1) - uVar3 &
            -(uint)(in_stack_0000000c - 0x1 < uVar3)) + uVar3;
    uVar4 = ~(uint)ptr1;
    uVar3 = (uVar3 - uVar4 & -(uint)(uVar3 < uVar4)) + uVar4 + 0x1;
    bVar5 = in_stack_0000000c < uVar3;
    in_stack_0000000c -= uVar3;
    bVar6 = in_stack_0000000c == 0x0;
    do
    {
      if (uVar3 == 0x0) break;
      uVar3 -= 0x1;
      pbVar2 = (byte *)count;
      count += 0x1;
      pbVar1 = ptr1;
      ptr1 = (void *)((int)ptr1 + 0x1);
      bVar5 = *pbVar1 < *pbVar2;
      bVar6 = *pbVar1 == *pbVar2;
    } while (bVar6);
    if (!bVar6)
    {
      return (0x1 - (uint)bVar5) - (uint)(bVar5 != 0x0);
    }
    if (in_stack_0000000c == 0x0)
    {
      return uVar3;
    }
    if (ptr1 == NULL)
    {
      ptr2 = (void *)((int)ptr2 + 0x6c);
    }
    if ((byte *)count == NULL)
    {
      in_stack_0000000a += 0x6c;
    }
  } while( true );
}



void * __cdecl16far memcpy_far_words(void *dest,void *src,int count)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int in_stack_0000000a;
  int in_stack_0000000c;
  
                // Far pointer memory copy optimized for word-aligned data. Copies
                // param_3 bytes from param_2 to param_1, handling segment boundaries.
  puVar5 = dest;
  if (in_stack_0000000c != 0x0)
  {
    while( true )
    {
      uVar3 = ~(uint)puVar5;
      uVar3 = ((in_stack_0000000c - 0x1U) - uVar3 &
              -(uint)(in_stack_0000000c - 0x1U < uVar3)) + uVar3;
      uVar4 = ~count;
      uVar3 = (uVar3 - uVar4 & -(uint)(uVar3 < uVar4)) + uVar4 + 0x1;
      in_stack_0000000c -= uVar3;
      for (uVar4 = uVar3 >> 0x1; uVar4 != 0x0; uVar4 -= 0x1)
      {
        puVar2 = puVar5;
        puVar5 = puVar5 + 0x1;
        puVar1 = (undefined2 *)count;
        count += 0x2;
        *puVar2 = *puVar1;
      }
      for (uVar3 = (uint)((uVar3 & 0x1) != 0x0); uVar3 != 0x0; uVar3 -= 0x1)
      {
        puVar2 = puVar5;
        puVar5 = (undefined2 *)((int)puVar5 + 0x1);
        puVar1 = (undefined2 *)count;
        count += 0x1;
        *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
      }
      if (in_stack_0000000c == 0x0) break;
      if ((undefined2 *)count == NULL)
      {
        in_stack_0000000a += 0x6c;
      }
      if (puVar5 == NULL)
      {
        src = (void *)((int)src + 0x6c);
      }
    }
  }
  return dest;
}



void * __cdecl16far memset_far(void *dest,int value,int count)
{
  undefined2 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint in_stack_0000000a;
  
                // Far pointer memset - fills param_3 bytes at far pointer param_1 with
                // byte value param_2. Handles segment boundaries.
  if (in_stack_0000000a != 0x0)
  {
    uVar3 = -(int)dest;
    uVar5 = 0x0;
    uVar4 = in_stack_0000000a;
    if (uVar3 != 0x0)
    {
      uVar4 = (uVar3 - in_stack_0000000a & -(uint)(uVar3 < in_stack_0000000a)) +
              in_stack_0000000a;
      uVar5 = in_stack_0000000a - uVar4;
    }
    uVar2 = (undefined1)count;
    puVar6 = dest;
    for (uVar3 = uVar4 >> 0x1; uVar3 != 0x0; uVar3 -= 0x1)
    {
      puVar1 = puVar6;
      puVar6 = puVar6 + 0x1;
      *puVar1 = CONCAT11(uVar2,uVar2);
    }
    for (uVar4 = (uint)((uVar4 & 0x1) != 0x0); uVar4 != 0x0; uVar4 -= 0x1)
    {
      puVar1 = puVar6;
      puVar6 = (undefined2 *)((int)puVar6 + 0x1);
      *(undefined1 *)puVar1 = uVar2;
    }
    if (uVar5 != 0x0)
    {
      for (uVar4 = uVar5 >> 0x1; uVar4 != 0x0; uVar4 -= 0x1)
      {
        puVar1 = puVar6;
        puVar6 = puVar6 + 0x1;
        *puVar1 = CONCAT11(uVar2,uVar2);
      }
      for (uVar5 = (uint)((uVar5 & 0x1) != 0x0); uVar5 != 0x0; uVar5 -= 0x1)
      {
        puVar1 = puVar6;
        puVar6 = (undefined2 *)((int)puVar6 + 0x1);
        *(undefined1 *)puVar1 = uVar2;
      }
    }
  }
  return dest;
}



// Converts a 32-bit integer (provided in `DX:AX`) to a string in the buffer `unaff_DI`.
// Supports custom base `in_CX` (e.g., 10 for decimal, 16 for hex) and signs if `in_BL`
// is set. The string is constructed in reverse and then flipped.

char * __cdecl16far ltoa_integer_to_string_optimized(long value,char *buffer,int radix)
{
  ulong uVar1;
  byte bVar2;
  int in_AX;
  uint uVar4;
  uint in_CX;
  uint in_DX;
  uint uVar5;
  char in_BL;
  byte *pbVar6;
  byte *unaff_DI;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  char cVar3;
  
  pbVar7 = unaff_DI;
  pbVar6 = unaff_DI;
  if (((in_BL != '\0') && (in_CX == 0xa)) && ((int)in_DX < 0x0))
  {
    pbVar7 = unaff_DI + 0x1;
    *unaff_DI = 0x2d;
    bVar9 = in_AX != 0x0;
    in_AX = -in_AX;
    in_DX = -(in_DX + bVar9);
    pbVar6 = pbVar7;
  }
  do
  {
    uVar5 = 0x0;
    uVar4 = in_DX;
    if (in_DX != 0x0)
    {
      uVar4 = in_DX / in_CX;
      uVar5 = in_DX % in_CX;
    }
    uVar1 = CONCAT22(uVar5,in_AX);
    in_AX = (int)(uVar1 / in_CX);
    cVar3 = (char)(uVar1 % (ulong)in_CX);
    bVar2 = cVar3 + 0x30;
    if (0x39 < bVar2)
    {
      bVar2 = cVar3 + 0x57;
    }
    pbVar8 = pbVar7 + 0x1;
    *pbVar7 = bVar2;
    in_DX = uVar4;
    pbVar7 = pbVar8;
  } while (uVar4 != 0x0 || in_AX != 0x0);
  *pbVar8 = 0x0;
  do
  {
    pbVar8 = pbVar8 + -0x1;
    LOCK();
    bVar2 = *pbVar8;
    *pbVar8 = *pbVar6;
    UNLOCK();
    *pbVar6 = bVar2;
    pbVar7 = pbVar6 + 0x2;
    pbVar6 = pbVar6 + 0x1;
  } while (pbVar7 < pbVar8);
  return (char *)unaff_DI;
}



int __cdecl16far abs_u16_to_i16_logic(int value)
{
  return (value ^ value >> 0xf) - (value >> 0xf);
}



// Targeted Scan Finding: Far Pointer / Vtable
// Performs indirect call through in_stack_00000010 (comparison callback).
// Handles 16-bit MS-DOS segment increments (offset 0x6C) during array traversal.

void * __cdecl16far
bsearch_far_array_with_callback
          (void *key,void *base,int num_elements,int element_size,void *compare_func,
          u16 param_6,u16 param_7)
{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  void *pvStack_14;
  uint uStack_12;
  void *pvStack_8;
  uint uStack_6;
  
  pvStack_14 = (void *)num_elements;
  uStack_12 = element_size;
  lVar7 = mul_u32_u32_standard
                    (CONCAT22(-(uint)(compare_func == NULL),(int)compare_func + -0x1),
                     (ulong)param_6);
  pvStack_8 = (void *)(void *)(lVar7 + (ulong)(uint)num_elements);
  uStack_6 = (int)(lVar7 + (ulong)(uint)num_elements >> 0x10) * 0x100 + element_size;
  while( true )
  {
    if (uStack_6 < uStack_12)
    {
      return NULL;
    }
    if ((uStack_6 <= uStack_12) && (pvStack_8 < pvStack_14))
    {
      return NULL;
    }
    pvVar3 = (void *)((uint)compare_func >> 0x1);
    if (pvVar3 == NULL)
    {
      if ((compare_func != NULL) && (iVar5 = (*(code *)param_7)(), iVar5 == 0x0))
      {
        return pvStack_14;
      }
      return NULL;
    }
    pvVar4 = pvVar3;
    if (((uint)compare_func & 0x1) == 0x0)
    {
      pvVar4 = (void *)((int)pvVar3 - 0x1);
    }
    pvVar2 = (void *)(ZEXT24(pvVar4) * (ulong)param_6 + ZEXT24(pvStack_14));
    pvVar4 = (void *)pvVar2;
    iVar6 = (int)((ulong)pvVar2 >> 0x10) * 0x100 + uStack_12;
    iVar5 = (*(code *)param_7)();
    if (iVar5 == 0x0) break;
    if (iVar5 < 0x0)
    {
      pvStack_8 = (void *)(-param_6 + (int)pvVar4);
      uStack_6 = ((uint)CARRY2(-param_6,(uint)pvVar4) - (uint)(param_6 != 0x0)) * 0x100
                 + iVar6;
      uVar1 = (uint)compare_func & 0x1;
      compare_func = pvVar3;
      if (uVar1 == 0x0)
      {
        compare_func = (void *)((int)pvVar3 - 0x1);
      }
    }
    else
    {
      pvStack_14 = (void *)(param_6 + (int)pvVar4);
      uStack_12 = (uint)CARRY2(param_6,(uint)pvVar4) * 0x100 + iVar6;
      compare_func = pvVar3;
    }
  }
  return pvVar4;
}



// Targeted Scan Finding: Far Pointer / Vtable
// Initializes far pointer ptr2 to 1050:1050.
// Performs multiple indirect calls through function pointers on the stack
// (in_stack_0000000c, offset 0x16).
// Handles 16-bit segment increments (0x6C) when traversing far-pointer arrays.

void __cdecl16far
qsort_far_array_with_callback_internal
          (void *base,int num_elements,int element_size,void *compare_func)
{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  void *ptr1;
  int iVar12;
  undefined2 unaff_SS;
  dword *ptr2;
  bool bVar13;
  code *in_stack_0000000c;
  void *pvStack_16;
  uint uVar14;
  void *pvStack_12;
  uint uStack_10;
  void *pvStack_e;
  uint uStack_c;
  
  ptr2 = (dword *)&g_HeapContext;
  if ((compare_func != NULL) &&
     (pvVar11 = base, uStack_c = num_elements, iVar5 = element_size, element_size != 0x0
     ))
  {
    do
    {
      pvStack_e = pvVar11;
      iVar5 += -0x1;
      if (iVar5 == 0x0)
      {
        return;
      }
      pvVar11 = (void *)((int)pvStack_e + (int)compare_func);
      iVar12 = uStack_c + (-(uint)CARRY2((uint)pvStack_e,(uint)compare_func) & 0x6c);
      pvStack_12 = pvVar11;
      uStack_10 = iVar12;
      iVar3 = (*in_stack_0000000c)();
      uStack_c = iVar12;
    } while (-0x1 < iVar3);
    uVar4 = element_size - 0x1;
    iVar5 = 0x0;
    do
    {
      uVar4 >>= 0x1;
      iVar5 += -0x1;
    } while (iVar5 != 0x0 && uVar4 != 0x0);
    if ((int)((ulong)(uint)-iVar5 * 0x8 >> 0x10) == 0x0)
    {
      uStack_c = 0x4b4b;
      uVar4 = get_stack_space_available_bytes();
      if ((uint)((ulong)(uint)-iVar5 * 0x8) <= uVar4)
      {
        puVar8 = &stack0xfff6;
        pvVar1 = (void *)((ulong)(element_size - 0x1) * ZEXT24(compare_func) +
                         ZEXT24(base));
        pvStack_e = (void *)pvVar1;
        uStack_c = (int)((ulong)pvVar1 >> 0x10) * 0x100 + num_elements;
        uStack_10 = num_elements;
        pvStack_12 = base;
LAB_1000_4b7d:
        pvVar11 = pvStack_e;
        uVar4 = uStack_c;
        if (puVar8 <= &pvStack_12)
        {
          return;
        }
LAB_1000_4b81:
        uStack_c = uVar4;
        pvStack_e = pvVar11;
        if ((uStack_10 < uStack_c) ||
           ((uStack_10 == uStack_c && (pvStack_12 < pvStack_e))))
        {
          pvStack_16 = pvStack_e;
          pvVar7 = (void *)((int)pvStack_e + *(uint *)(puVar8 + 0x14));
          uVar6 = uStack_c +
                  (-(uint)CARRY2((uint)pvStack_e,*(uint *)(puVar8 + 0x14)) & 0x6c);
          uVar9 = uStack_10;
          ptr1 = pvStack_12;
          pvVar11 = pvStack_12;
          uVar4 = uStack_10;
          uVar10 = uStack_c;
          do
          {
            while( true )
            {
              bVar13 = CARRY2((uint)ptr1,*(uint *)(puVar8 + 0x14));
              ptr1 = (void *)((int)ptr1 + *(uint *)(puVar8 + 0x14));
              uVar9 += -(uint)bVar13 & 0x6c;
              pvVar2 = pvStack_16;
              if ((ptr1 == pvStack_e) && (uVar9 == uStack_c)) break;
              iVar5 = (**(code **)(puVar8 + 0x16))();
              if (0x0 < iVar5) break;
              if (iVar5 != 0x0)
              {
                pvVar11 = ptr1;
                uVar4 = uVar9;
              }
            }
            do
            {
              uVar14 = uVar10;
              pvStack_16 = pvVar2;
              bVar13 = pvVar7 < *(void **)(puVar8 + 0x14);
              pvVar7 = (void *)((int)pvVar7 - *(uint *)(puVar8 + 0x14));
              uVar6 -= -(uint)bVar13 & 0x6c;
              iVar5 = (**(code **)(puVar8 + 0x16))();
              if (0x0 < iVar5) break;
              pvVar2 = pvVar7;
              uVar10 = uVar6;
            } while (((iVar5 != 0x0) ||
                     (pvVar2 = pvStack_16, uVar10 = uVar14, pvVar7 != pvStack_12)) ||
                    (uVar6 != uStack_10));
            if ((uVar6 < uVar9) || ((uVar6 == uVar9 && (pvVar7 <= ptr1))))
            goto LAB_1000_4c58;
            mem_swap_bytes_internal(ptr2,pvVar11,uVar4);
            pvVar11 = ptr1;
            uVar4 = uVar9;
            uVar10 = uVar6;
            pvStack_16 = pvVar7;
          } while( true );
        }
        goto LAB_1000_4b7d;
      }
    }
    uStack_c = 0x4b7b;
    runtime_stack_check_fail_handler();
  }
  return;
LAB_1000_4c58:
  mem_swap_bytes_internal(ptr1,ptr2,(int)pvVar11);
  uVar10 = ((uStack_c - (-(uint)(pvStack_e < pvStack_16) & 0x6c)) - uVar14) +
           (-(uint)CARRY2((int)pvStack_e - (int)pvStack_16,(uint)pvStack_12) & 0x6c) +
           uStack_10;
  uVar9 = -(uint)((void *)(((int)pvStack_e - (int)pvStack_16) + (int)pvStack_12) <
                 pvVar11) & 0x6c;
  if ((uVar9 <= uVar10) && (uVar4 <= uVar10 - uVar9))
  {
    pvStack_12 = pvStack_16;
    uStack_10 = uVar14;
    pvVar11 = pvStack_e;
    uVar4 = uStack_c;
  }
  goto LAB_1000_4b81;
}



// Swaps two memory blocks of length `in_AX` pointed to by `SI` and `DI`. Used
// internally by sorting algorithms like quicksort. Handles both byte and word-aligned
// swaps.

void __cdecl16near mem_swap_bytes_internal(void *ptr1,void *ptr2,int size)
{
  undefined1 uVar1;
  undefined2 uVar2;
  uint in_AX;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  
  if ((in_AX & 0x1) != 0x0)
  {
    in_AX -= 0x1;
    LOCK();
    uVar1 = *(undefined1 *)(in_AX + unaff_DI);
    *(undefined1 *)(in_AX + unaff_DI) = *(undefined1 *)(in_AX + unaff_SI);
    UNLOCK();
    *(undefined1 *)(in_AX + unaff_SI) = uVar1;
    if (in_AX == 0x0)
    {
      return;
    }
  }
  do
  {
    in_AX -= 0x2;
    LOCK();
    uVar2 = *(undefined2 *)(in_AX + unaff_DI);
    *(undefined2 *)(in_AX + unaff_DI) = *(undefined2 *)(in_AX + unaff_SI);
    UNLOCK();
    *(undefined2 *)(in_AX + unaff_SI) = uVar2;
  } while (in_AX != 0x0);
  return;
}



// Targeted Scan Finding: Far Pointer
// References and updates global RNG state pointers in segment 1050:
// - DAT_1050_61e8 (seed)
// - PTR_DAT_1050_61ea.

void __cdecl16far srand_seed_internal_far(int seed)
{
  g_RNG_Seed = seed;
  g_RNG_Next_Val = NULL;
  return;
}



// Targeted Scan Finding: Far Pointer
// References and updates global LCG RNG state in segment 1050:
// - PTR_DAT_1050_61ea
// - DAT_1050_61e8.

int __cdecl16far rand_next_internal_far_u15(void)
{
  long lVar1;
  
  lVar1 = mul_u32_u32_standard(CONCAT22(g_RNG_Next_Val,g_RNG_Seed),0x343fd);
  g_RNG_Next_Val = (undefined *)((ulong)(lVar1 + 0x269ec3) >> 0x10);
  g_RNG_Seed = (u16)(lVar1 + 0x269ec3);
  return (uint)g_RNG_Next_Val & 0x7fff;
}



// Decomposes a full file path into its components: drive, directory, filename, and
// extension. Optimized for far pointers and handles 16-bit segment boundaries. Supports
// both forward and backslashes.

void __cdecl16far
splitpath_far_optimized_with_segments
          (char *full_path,char *drive,char *dir,char *fname,char *ext)
{
  char *pcVar1;
  int iVar2;
  int in_stack_0000000e;
  char *pcStack0010;
  int iStack0012;
  char *pcStack0014;
  int iStack0016;
  undefined4 uStack_12;
  char *pcStack_c;
  int iStack_a;
  char *pcStack_8;
  int iStack_6;
  
  iStack_a = 0x0;
  pcStack_c = NULL;
  if ((*_full_path == '\0') || (full_path[0x1] != ':'))
  {
    if (fname != NULL || dir != NULL)
    {
      *_dir = '\0';
    }
  }
  else
  {
    if (fname != NULL || dir != NULL)
    {
      *_dir = *_full_path;
      dir[0x1] = full_path[0x1];
      dir[0x2] = '\0';
    }
    _full_path = (char *)CONCAT22(drive,full_path + 0x2);
  }
  iStack_6 = 0x0;
  pcStack_8 = NULL;
  uStack_12 = _full_path;
  while( true )
  {
    iVar2 = (int)((ulong)uStack_12 >> 0x10);
    pcVar1 = (char *)uStack_12;
    if (*uStack_12 == '\0') break;
    if ((*uStack_12 == '/') || (*uStack_12 == '\\'))
    {
      pcStack_8 = pcVar1 + 0x1;
      iStack_6 = iVar2;
    }
    else if (*uStack_12 == '.')
    {
      pcStack_c = pcVar1;
      iStack_a = iVar2;
    }
    uStack_12 = (char *)CONCAT22(iVar2,pcVar1 + 0x1);
  }
  if (iStack_6 == 0x0 && pcStack_8 == NULL)
  {
    if (in_stack_0000000e != 0x0 || ext != NULL)
    {
      *_ext = '\0';
    }
  }
  else
  {
    if (in_stack_0000000e != 0x0 || ext != NULL)
    {
      iVar2 = (int)pcStack_8 - (int)full_path;
      if (0xff < iVar2)
      {
        iVar2 = 0xff;
      }
      strncpy_fixed_optimized((char *)CONCAT22(in_stack_0000000e,ext),_full_path,iVar2);
      ext[iVar2] = '\0';
    }
    _full_path = (char *)CONCAT22(iStack_6,pcStack_8);
  }
  if ((iStack_a != 0x0 || pcStack_c != NULL) && (full_path <= pcStack_c))
  {
    if (iStack0012 != 0x0 || pcStack0010 != NULL)
    {
      iVar2 = (int)pcStack_c - (int)full_path;
      if (0xff < iVar2)
      {
        iVar2 = 0xff;
      }
      strncpy_fixed_optimized(_pcStack0010,_full_path,iVar2);
      pcStack0010[iVar2] = '\0';
    }
    if (iStack0016 == 0x0 && pcStack0014 == NULL)
    {
      return;
    }
    iVar2 = (int)pcVar1 - (int)pcStack_c;
    if (0xff < iVar2)
    {
      iVar2 = 0xff;
    }
    strncpy_fixed_optimized(_pcStack0014,(char *)CONCAT22(iStack_a,pcStack_c),iVar2);
    pcStack0014[iVar2] = '\0';
    return;
  }
  if (iStack0012 != 0x0 || pcStack0010 != NULL)
  {
    iVar2 = (int)pcVar1 - (int)full_path;
    if (0xff < iVar2)
    {
      iVar2 = 0xff;
    }
    strncpy_fixed_optimized(_pcStack0010,_full_path,iVar2);
    pcStack0010[iVar2] = '\0';
  }
  if (iStack0016 != 0x0 || pcStack0014 != NULL)
  {
    *_pcStack0014 = '\0';
  }
  return;
}



void fatal_app_exit_4f1a(int err_code)
{
  fatal_app_exit_with_message_lookup_and_terminate(err_code);
  return;
}



void error_sync_with_dos(int err_code)
{
  code *pcVar1;
  undefined1 uVar2;
  u16 uVar3;
  
  uVar3 = 0x1050;
  uVar2 = 0x0;
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else
  {
    Dos3Call(&g_HeapContext);
  }
  check_error_flag_and_set_internal_err_u16(uVar3,err_code,(bool)uVar2);
  return;
}



// Deletes a file using DOS interrupt 0x21, function 0x41. Updates internal error flags
// on failure.

int dos_delete_file_internal_far(char *filename)
{
  code *pcVar1;
  int iVar2;
  u8 uVar3;
  int in_stack_00000000;
  u16 uVar4;
  
  uVar4 = 0x1050;
  uVar3 = '\0';
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else
  {
    Dos3Call(&g_HeapContext);
  }
  iVar2 = check_error_flag_and_set_internal_err_u16(uVar4,in_stack_00000000,(bool)uVar3)
  ;
  return iVar2;
}



void file_error_sync_with_dos(u16 param_1,u32 param_2,int param_3)
{
  char cVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined4 uVar8;
  u16 uVar9;
  
  uVar3 = 0x3a50;
  uVar9 = 0x1050;
  uVar4 = (undefined2)param_2;
  uVar6 = 0x0;
  if (true)
  {
    pcVar2 = (code *)swi(0x21);
    uVar8 = (*pcVar2)();
  }
  else
  {
    Dos3Call(&g_HeapContext);
    uVar8 = CONCAT22(uVar4,uVar3);
  }
  pcVar5 = (char *)((ulong)uVar8 >> 0x10);
  bVar7 = false;
  if (((bool)uVar6) && (bVar7 = (uint)uVar8 < 0x10, (uint)uVar8 == 0x10))
  {
    while( true )
    {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 0x1;
      if (cVar1 == '\0') break;
      if ((cVar1 == '?') || (cVar1 == '*')) break;
    }
    bVar7 = true;
  }
  check_error_flag_and_set_internal_err_u16(uVar9,param_3,bVar7);
  return;
}



// Retrieves the current DOS drive number (0=A, 1=B, etc.) using Interrupt 0x21,
// function 0x19. Returns the drive number plus 1.

int __cdecl16far dos_get_current_drive_number_internal_far(void)
{
  code *pcVar1;
  byte bVar2;
  int unaff_BP;
  
  bVar2 = 0x50;
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    bVar2 = (*pcVar1)();
  }
  else
  {
    Dos3Call((dword *)CONCAT22(unaff_BP + 0x1,(dword *)&g_HeapContext));
  }
  return bVar2 + 0x1;
}



// Sets the current DOS drive (Interrupt 0x21, function 0x0E) and verifies the change
// (Interrupt 0x21, function 0x19). Returns 0 on success or 0xFFFF on failure.

int __cdecl16far dos_set_current_drive_internal_far_check_success(int drive_num)
{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int unaff_BP;
  dword *CONTEXT_ptr_context;
  
  CONTEXT_ptr_context = (dword *)CONCAT22(unaff_BP + 0x1,(dword *)&g_HeapContext);
  cVar2 = 'P';
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    cVar2 = (*pcVar1)();
  }
  else
  {
    Dos3Call(CONTEXT_ptr_context);
  }
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    cVar2 = (*pcVar1)();
  }
  else
  {
    Dos3Call(CONTEXT_ptr_context);
  }
  iVar3 = -0x1;
  if ((char)(cVar2 + '\x01') == (char)drive_num)
  {
    iVar3 = 0x0;
  }
  return iVar3;
}



void __cdecl16far dos_get_cwd_on_current_drive_wrapper_far(char *buffer,int max_len)
{
  dos_get_cwd_internal_far_with_alloc_logic(0x0,buffer,max_len);
  return;
}



// Targeted Scan Finding: Far Pointer
// References global management pointers in segment 1050:
// - PTR_DAT_1050_5f78
// - PTR_DAT_1050_5f88.

void __cdecl16far
dos_get_cwd_internal_far_with_alloc_logic(int drive_num,char *buffer,int max_len)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_BP;
  undefined2 unaff_SI;
  void *unaff_SS;
  int in_stack_0000000a;
  char *pcStack_130;
  undefined *local_124;
  int iStack_118;
  undefined1 local_116;
  undefined1 uStack_115;
  char cStack_110;
  char *pcStack_10e;
  char local_108 [0x104];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 0x1;
  local_4 = 0x1050;
  _pcStack_130 = (char *)CONCAT22(unaff_SS,local_108);
  if (drive_num == 0x0)
  {
    drive_num = dos_get_current_drive_number_internal_far();
  }
  *_pcStack_130 = (char)drive_num + '@';
  local_108[0x1] = 0x3a;
  pcStack_10e = local_108 + 0x3;
  local_108[0x2] = 0x5c;
  uStack_115 = 0x47;
  cStack_110 = (char)drive_num;
  dos_get_set_file_attributes_internal_far(&local_116,unaff_SS);
  if (iStack_118 == 0x0)
  {
    uVar1 = strlen_get_length((char *)CONCAT22(unaff_SS,local_108));
    iVar2 = uVar1 + 0x1;
    pcStack_130 = buffer;
    uVar3 = max_len | (uint)buffer;
    uVar1 = max_len;
    if (uVar3 == 0x0)
    {
      if (in_stack_0000000a < iVar2)
      {
        in_stack_0000000a = iVar2;
      }
      pcStack_130 = heap_alloc_bytes(CONCAT22(unaff_SI,in_stack_0000000a));
      uVar1 = uVar3;
      if (uVar3 == 0x0 && pcStack_130 == NULL)
      {
        PTR_DAT_1050_0000_1050_5f78 = (undefined *)&p_AllocStrategyCode;
        return;
      }
    }
    if (in_stack_0000000a < iVar2)
    {
      PTR_DAT_1050_0000_1050_5f78 = (char *)s_NewFailedMsg + 0x2;
    }
    else
    {
      strcpy_optimized((char *)CONCAT22(uVar1,pcStack_130),
                       (char *)CONCAT22(unaff_SS,local_108));
    }
  }
  else
  {
    PTR_DAT_1050_0000_1050_5f78 =
         (undefined *)((int)(undefined **)&p_AllocStrategyCode + 0x1);
    PTR_DAT_1050_0000_1050_5f88 = local_124;
  }
  return;
}



// Removes a directory using DOS interrupt 0x21, function 0x3A. Updates internal error
// flags on failure.

int dos_remove_directory_internal_far(char *dir_path)
{
  code *pcVar1;
  int iVar2;
  undefined1 uVar3;
  int in_stack_00000000;
  u16 uVar4;
  
  uVar4 = 0x1050;
  uVar3 = 0x0;
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else
  {
    Dos3Call(&g_HeapContext);
  }
  iVar2 = check_error_flag_and_set_internal_err_u16(uVar4,in_stack_00000000,(bool)uVar3)
  ;
  return iVar2;
}



// A generic wrapper for a DOS interrupt 0x21 call. It executes the interrupt and then
// updates internal error flags based on the Carry bit, returning the result in `AL`.

byte dos_interrupt_call_u8_wrapper(void)
{
  code *pcVar1;
  byte bVar2;
  u16 uVar3;
  int unaff_BP;
  undefined1 uVar4;
  byte in_stack_00000000;
  
  uVar3 = 0x6850;
  uVar4 = 0x0;
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
  }
  else
  {
    Dos3Call((dword *)CONCAT22(unaff_BP + 0x1,(dword *)&g_HeapContext));
  }
  bVar2 = check_error_flag_and_set_internal_err_u8_2
                    (in_stack_00000000,uVar3,(bool)uVar4);
  return bVar2;
}



void dos_multi_call_sync_error(u32 param_1)
{
  code *pcVar1;
  u8 uVar2;
  u16 uVar3;
  byte bVar2;
  char cVar3;
  char in_AF;
  char cVar4;
  char cVar5;
  byte in_stack_00000000;
  void *CONTEXT_ptr_context;
  dword *CONTEXT_ptr_context_00;
  
  CONTEXT_ptr_context_00 = &g_HeapContext;
  uVar2 = 'O';
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
  }
  else
  {
    Dos3Call(&g_HeapContext);
  }
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
  }
  else
  {
    Dos3Call(CONTEXT_ptr_context_00);
  }
  uVar3 = CONCAT11(uVar2,uVar2);
  bVar2 = 0x0;
  cVar5 = '\0';
  cVar4 = '\x01';
  cVar3 = '\x01';
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
  }
  else
  {
    Dos3Call(CONTEXT_ptr_context_00);
  }
  CONTEXT_ptr_context =
       (void *)CONCAT22(uVar3,(void *)CONCAT11(cVar5 << 0x7 | cVar4 << 0x6 |
                                               in_AF << 0x4 | cVar3 << 0x2 | 0x2U |
                                               bVar2,(char)uVar3));
  if (true)
  {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else
  {
    Dos3Call(CONTEXT_ptr_context);
  }
  check_error_flag_and_set_internal_err_u8_2
            (in_stack_00000000,(u16)((ulong)CONTEXT_ptr_context >> 0x10),
             ((ulong)CONTEXT_ptr_context & 0x100) != 0x0);
  return;
}
