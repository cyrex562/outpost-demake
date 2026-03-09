/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 3/19
 * Original lines (combined): 7170-12608
 * Boundaries: top-level declarations/definitions only
 */




// Converts a string pointed to by far pointer `param_1` to an integer. Handles leading
// whitespace and optional plus/minus signs.

int __cdecl16far atoi_wrapper_far(char *str)
{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined2 in_stack_00000006;
  
  iVar4 = 0x0;
  do
  {
    do
    {
      pbVar1 = (byte *)str;
      str = (char *)((byte *)str + 0x1);
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 0x9);
  if ((bVar2 != 0x2d) && (bVar3 = bVar2, bVar2 != 0x2b)) goto LAB_1000_3e4d;
  while( true )
  {
    pbVar1 = (byte *)str;
    str = (char *)((byte *)str + 0x1);
    bVar3 = *pbVar1;
LAB_1000_3e4d:
    if ((0x39 < bVar3) || (bVar3 < 0x30)) break;
    iVar4 = iVar4 * 0xa + (uint)(byte)(bVar3 - 0x30);
  }
  if (bVar2 == 0x2d)
  {
    iVar4 = -iVar4;
  }
  return iVar4;
}



void win16_app_pre_init_wrapper_3_entry_point_maybe(void)
{
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  char *in_stack_00000000;
  int in_stack_00000002;
  
  ltoa_integer_to_string_optimized
            (CONCAT22(unaff_BP,unaff_SI),in_stack_00000000,in_stack_00000002);
  return;
}



// Targeted Scan Finding: Far Pointer
// References environment tracking pointers in segment 1050:
// - PTR_DAT_1050_5fc0
// - PTR_DAT_1050_5fbe.

char * __cdecl16far getenv_wrapper_far_ptr_search(char *var_name)
{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  int in_stack_00000006;
  undefined4 uStack_8;
  
  uStack_8 = (int *)CONCAT22(p_EnvSegment_Base,p_EnvOffset_Base);
  if ((p_EnvSegment_Base != NULL || p_EnvOffset_Base != NULL) &&
     (in_stack_00000006 != 0x0 || var_name != NULL))
  {
    uVar1 = strlen_get_length((char *)CONCAT22(in_stack_00000006,var_name));
    while( true )
    {
      uVar5 = (undefined2)((ulong)uStack_8 >> 0x10);
      piVar4 = (int *)uStack_8;
      if (piVar4[0x1] == 0x0 && *uStack_8 == 0x0) break;
      uVar2 = strlen_get_length((char *)CONCAT22(piVar4[0x1],(char *)*uStack_8));
      if (((uVar1 < uVar2) && (*(char *)((int)*(undefined4 *)uStack_8 + uVar1) == '='))
         && (iVar3 = strncmp_fixed_optimized
                               ((char *)*uStack_8,(char *)piVar4[0x1],(int)var_name),
            iVar3 == 0x0))
      {
        return (char *)(*uStack_8 + uVar1 + 0x1);
      }
      uStack_8 = (int *)CONCAT22(uVar5,piVar4 + 0x2);
    }
  }
  return NULL;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable Initializations
// Performs extensive far pointer initialization in data segment 1050 for formatting
// buffer management:
// - PTR_DAT_1050_68b2
// - PTR_DAT_1050_68ae
// - PTR_DAT_1050_68b0
// - _PTR_DAT_1050_68a8
// - PTR_DAT_1050_68ac
// References far pointer 1050:1050 during formatted string dispatch.

int __cdecl16far
sprintf_wrapper(undefined1 *param_1,undefined *param_2,char *param_3,undefined2 param_4)
{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
                // Format string into buffer - sets up global formatting buffer, calls
                // formatter, null-terminates result.
  PTR_DAT_1050_0000_1050_68b2._0_1_ = 0x42;
  PTR_DAT_1050_0000_1050_68ae = param_1;
  PTR_DAT_1050_0000_1050_68b0 = param_2;
  _PTR_DAT_1050_0000_1050_68a8 = (undefined1 *)CONCAT22(param_2,param_1);
  PTR_DAT_1050_0000_1050_68ac = (undefined *)0x7fff;
  puVar2 = &stack0x000c;
  format_string_dispatcher_internal(0x68a8,0x1050,(char *)CONCAT22(param_4,param_3));
  puVar1 = _PTR_DAT_1050_0000_1050_68a8;
  PTR_DAT_1050_0000_1050_68ac = PTR_DAT_1050_0000_1050_68ac + -0x1;
  if ((int)PTR_DAT_1050_0000_1050_68ac < 0x0)
  {
    handle_buffered_write_char(0x0,(undefined **)&PTR_DAT_1050_0000_1050_68a8);
  }
  else
  {
    _PTR_DAT_1050_0000_1050_68a8 =
         (undefined1 *)
         CONCAT22(PTR_DAT_1050_0000_1050_68aa,PTR_DAT_1050_0000_1050_68a8 + 0x1);
    *puVar1 = 0x0;
  }
  return (int)puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References string resource at offset 0x61ca (likely "TZ" environment name).
// Extensive updates to global timezone data in segment 1050:
// - PTR_DAT_1050_61de
// - PTR_DAT_1050_61dc
// - PTR_DAT_1050_61d0
// - DAT_1050_61ce
// - DAT_1050_61d2
// - PTR_DAT_1050_61e0.

void __cdecl16far parse_tz_environment_variable_internal_far(void)
{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int in_DX;
  undefined2 uVar5;
  long lVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 uStack_8;
  
  pcVar2 = getenv_wrapper_far_ptr_search((char *)0x61ca);
  uStack_8 = (char *)CONCAT22(in_DX,pcVar2);
  if ((in_DX != 0x0 || pcVar2 != NULL) && (*uStack_8 != '\0'))
  {
    strncpy_fixed_optimized
              ((char *)CONCAT22(g_TimezoneName_Segment,g_TimezoneName_Offset),
               (char *)CONCAT22(in_DX,pcVar2),0x3);
    uStack_8 = (char *)CONCAT22(in_DX,pcVar2 + 0x3);
    cVar1 = *uStack_8;
    if (cVar1 == '-')
    {
      uStack_8 = (char *)CONCAT22(in_DX,pcVar2 + 0x4);
    }
    uVar5 = 0x0;
    uVar8 = 0x0;
    uVar7 = 0xe10;
    iVar3 = atoi_wrapper_far((char *)uStack_8);
    lVar6 = mul_u32_u32_standard(CONCAT22(uVar5,iVar3),CONCAT22(uVar8,uVar7));
    g_TimezoneOffset_High = (undefined *)((ulong)lVar6 >> 0x10);
    g_TimezoneOffset_Low = (u16)lVar6;
    while( true )
    {
      uVar5 = (undefined2)((ulong)uStack_8 >> 0x10);
      if ((*uStack_8 != '+') && ((*uStack_8 < '0' || ('9' < *uStack_8)))) break;
      uStack_8 = (char *)CONCAT22(uVar5,(char *)uStack_8 + 0x1);
    }
    if (*uStack_8 == ':')
    {
      uVar7 = 0x0;
      uVar9 = 0x0;
      uVar8 = 0x3c;
      uStack_8._0_2_ = (char *)uStack_8 + 0x1;
      uStack_8 = (char *)CONCAT22(uVar5,(char *)uStack_8);
      iVar3 = atoi_wrapper_far((char *)uStack_8);
      lVar6 = mul_u32_u32_standard(CONCAT22(uVar7,iVar3),CONCAT22(uVar9,uVar8));
      iVar3 = (int)((ulong)lVar6 >> 0x10);
      lVar6 += CONCAT22(g_TimezoneOffset_High,g_TimezoneOffset_Low);
      g_TimezoneOffset_Low = (u16)lVar6;
      g_TimezoneOffset_High = (undefined *)((ulong)lVar6 >> 0x10);
      while( true )
      {
        uVar5 = (undefined2)((ulong)uStack_8 >> 0x10);
        if ((*uStack_8 < '0') || ('9' < *uStack_8)) break;
        uStack_8 = (char *)CONCAT22(uVar5,(char *)uStack_8 + 0x1);
      }
      if (*uStack_8 == ':')
      {
        uStack_8._0_2_ = (char *)uStack_8 + 0x1;
        uStack_8 = (char *)CONCAT22(uVar5,(char *)uStack_8);
        uVar4 = atoi_wrapper_far((char *)uStack_8);
        while ((lVar6 = CONCAT22(g_TimezoneOffset_High +
                                 (uint)CARRY2(g_TimezoneOffset_Low,uVar4) + iVar3,
                                 g_TimezoneOffset_Low + uVar4), '/' < *uStack_8 &&
               (lVar6 = CONCAT22(g_TimezoneOffset_High +
                                 (uint)CARRY2(g_TimezoneOffset_Low,uVar4) + iVar3,
                                 g_TimezoneOffset_Low + uVar4), *uStack_8 < ':')))
        {
          uStack_8 = (char *)CONCAT22(uStack_8._2_2_,(char *)uStack_8 + 0x1);
        }
      }
    }
    g_TimezoneOffset_High = (undefined *)((ulong)lVar6 >> 0x10);
    g_TimezoneOffset_Low = (u16)lVar6;
    if (cVar1 == '-')
    {
      lVar6 = CONCAT22(-(int)(g_TimezoneOffset_High + (g_TimezoneOffset_Low != 0x0)),
                       -g_TimezoneOffset_Low);
    }
    g_TimezoneOffset_High = (undefined *)((ulong)lVar6 >> 0x10);
    g_TimezoneOffset_Low = (u16)lVar6;
    u16_1050_61d2 = (u16)*uStack_8;
    if (u16_1050_61d2 == 0x0)
    {
      *_g_DSTName_Offset = '\0';
    }
    else
    {
      strncpy_fixed_optimized(_g_DSTName_Offset,uStack_8,0x3);
    }
  }
  return;
}



// Searches for the first occurrence of a character `param_2` in the string `param_1`.
// Optimized for far pointers, it first finds the string length and then performs the
// search. Returns a pointer to the character or NULL if not found.

char * __cdecl16far strchr_far_optimized(char *str,char character)
{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined1 in_stack_00000007;
  char in_stack_00000008;
  
  _str = CONCAT13(in_stack_00000007,CONCAT12(character,str));
  uVar4 = (undefined2)((ulong)_str >> 0x10);
  bVar5 = true;
  uVar2 = 0xffff;
  pcVar3 = str;
  do
  {
    if (uVar2 == 0x0) break;
    uVar2 -= 0x1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 0x1;
    bVar5 = *pcVar1 == '\0';
  } while (!bVar5);
  uVar2 = ~uVar2;
  do
  {
    if (uVar2 == 0x0) break;
    uVar2 -= 0x1;
    pcVar1 = str;
    str = str + 0x1;
    bVar5 = in_stack_00000008 == *pcVar1;
  } while (!bVar5);
  if (!bVar5)
  {
    if (in_stack_00000008 != '\0')
    {
      return NULL;
    }
    str = str + 0x1;
  }
  return str + -0x1;
}



// Compares two far-pointer strings `param_1` and `param_2` without regard to case.
// Converts both to uppercase before comparing each character. Returns 0 if equal, -1 if
// `param_1` < `param_2`, or 1 if `param_1` > `param_2`.

int __cdecl16far stricmp_case_insensitive_far(char *str1,char *str2)
{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  byte *in_stack_00000008;
  
  pbVar5 = (byte *)in_stack_00000008;
  bVar3 = 0xff;
  do
  {
    do
    {
      cVar4 = '\0';
      if (bVar3 == 0x0) goto LAB_1000_479d;
      pbVar1 = pbVar5;
      pbVar5 = pbVar5 + 0x1;
      bVar3 = *pbVar1;
      pbVar1 = (byte *)str1;
      str1 = (char *)((byte *)str1 + 0x1);
    } while (*pbVar1 == bVar3);
    bVar2 = bVar3 + 0xbf + (-((byte)(bVar3 + 0xbf) < 0x1a) & 0x20U) + 0x41;
    bVar3 = *pbVar1 + 0xbf;
    bVar3 = bVar3 + (-(bVar3 < 0x1a) & 0x20U) + 0x41;
  } while (bVar3 == bVar2);
  cVar4 = (bVar3 < bVar2) * -0x2 + '\x01';
LAB_1000_479d:
  return (int)cVar4;
}



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



// Executes a sequence of four DOS interrupt 0x21 calls. This is likely used for
// operations that require multiple step handshakes or flushes in DOS.

void dos_multiple_interrupt_call_wrapper(void)
{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  byte bVar4;
  char cVar5;
  char in_AF;
  char cVar6;
  char cVar7;
  byte in_stack_00000000;
  void *CONTEXT_ptr_context;
  dword *CONTEXT_ptr_context_00;
  
  CONTEXT_ptr_context_00 = &g_HeapContext;
  uVar2 = 0x4e;
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
  bVar4 = 0x0;
  cVar7 = '\0';
  cVar6 = '\x01';
  cVar5 = '\x01';
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
       (void *)CONCAT22(uVar3,(void *)CONCAT11(cVar7 << 0x7 | cVar6 << 0x6 |
                                               in_AF << 0x4 | cVar5 << 0x2 | 0x2U |
                                               bVar4,(char)uVar3));
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



int __cdecl16far stricmp_case_insensitive_far_duplicate(char *str1,char *str2)
{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  byte *in_stack_00000008;
  
  pbVar5 = (byte *)in_stack_00000008;
  bVar3 = 0xff;
  do
  {
    do
    {
      cVar4 = '\0';
      if (bVar3 == 0x0) goto LAB_1000_5499;
      pbVar1 = pbVar5;
      pbVar5 = pbVar5 + 0x1;
      bVar3 = *pbVar1;
      pbVar1 = (byte *)str1;
      str1 = (char *)((byte *)str1 + 0x1);
    } while (*pbVar1 == bVar3);
    bVar2 = bVar3 + 0xbf + (-((byte)(bVar3 + 0xbf) < 0x1a) & 0x20U) + 0x41;
    bVar3 = *pbVar1 + 0xbf;
    bVar3 = bVar3 + (-(bVar3 < 0x1a) & 0x20U) + 0x41;
  } while (bVar3 == bVar2);
  cVar4 = (bVar3 < bVar2) * -0x2 + '\x01';
LAB_1000_5499:
  return (int)cVar4;
}



// Checks if the provided string matches a specific internal name (case-insensitive) and
// nulls a global pointer if it does.

void __stdcall16far stricmp_check_and_null_global_ptr(char *name)
{
  uint uVar1;
  int iVar2;
  char *in_stack_00000008;
  
  if (in_stack_00000008 != NULL)
  {
    uVar1 = strlen_get_length(in_stack_00000008);
    if (uVar1 != 0x0)
    {
      iVar2 = stricmp_case_insensitive_far_duplicate
                        ((char *)in_stack_00000008 + 0x1,
                         (char *)((ulong)in_stack_00000008 >> 0x10));
      if (iVar2 == 0x0)
      {
        PTR_DAT_1050_0000_1050_02ec = NULL;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References resource manager pointer in segment 1050 (offset 0ed0).
// Triggers save operation if a valid path exists.

void __stdcall16far UI_Auto_Save_Game_Logic(void *parent_window)
{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  char *in_stack_00000006;
  char *pcStack_10a;
  undefined4 uStack_106;
  char local_102 [0x100];
  
  local_102[0x0] = '\0';
  uStack_106 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  uVar4 = (undefined2)((ulong)uStack_106 >> 0x10);
  iVar2 = (int)uStack_106;
  pcVar1 = (char *)*(undefined4 *)(iVar2 + 0x12);
  pcStack_10a = (char *)pcVar1;
  if (*(int *)(iVar2 + 0x14) == 0x0 && pcStack_10a == NULL)
  {
    UI_Save_As_Game_Logic(parent_window);
  }
  else
  {
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_102),
                     (char *)*(undefined4 *)(iVar2 + 0x1a));
    uVar3 = strlen_get_length((char *)CONCAT22(unaff_SS,local_102));
    if (local_102[uVar3 - 0x1] != '\\')
    {
      local_102[uVar3] = '\\';
      local_102[uVar3 + 0x1] = '\0';
    }
    strcat_append((char *)CONCAT22(unaff_SS,local_102),pcVar1);
    if (local_102[0x0] != '\0')
    {
      UI_Prompt_Save_Game_Dialog(parent_window,in_stack_00000006);
      return;
    }
  }
  return;
}
