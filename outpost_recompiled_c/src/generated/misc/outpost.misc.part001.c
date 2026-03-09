/*
 * Source: outpost.c
 * Theme: misc
 * Chunk: 1/3
 * Original lines (combined): 14-15272
 * Boundaries: top-level declarations/definitions only
 */

#include <outpost_types.h>
#include <ghidra.h>
#include <win16_api.h>

u8 DAT_1050_0000;
u8 *PTR_DAT_1050_0000_1050_5f3a;
u8 *PTR_DAT_1050_0000_1050_5f36;
u8 *PTR_DAT_1050_0000_1050_5f3e;
u8 DAT_1050_1000;
void* g_HeapRefCount;
u8 *PTR_DAT_1050_0000_1050_5f7e;
u16 u16_1050_5f82;
u8 u8_1050_5f87;
u8 *PTR_DAT_1050_0000_1050_5fbc;
u8 *PTR_DAT_1050_0000_1050_5fba;
u8 *PTR_DAT_1050_0000_1050_5fb8;
void* p_EnvSegment_Base;
void* p_EnvOffset_Base;
void* PTR_DAT_1050_0000_1050_5f7e;
void* PTR_DAT_1050_0000_1050_6202;
u8 PTR_DAT_1050_0000_1050_5fc9;
void* PTR_DAT_1050_0000_1050_5fd2;
u8 *PTR_DAT_1050_0000_1050_5fd4;
u8 *PTR_DAT_1050_0000_1050_5fc4;
u8 *PTR_DAT_1050_5fc6_1050_5fc2;
void* p_SystemIO_Active;
u8 *PTR_DAT_1050_1000_1050_6066;
u8 PTR_DAT_1050_0000_1050_5f88;
u8 *PTR_DAT_1050_0000_1050_5f78;
int ___EXPORTEDSTUB;
u8 ___EXPORTEDSTUB;
void* p_StdOut_Buffer;
void* p_StdErr_Buffer;
u8 *PTR_DAT_1050_0000_1050_6064;
u8 u8_1050_6061;
u8 *PTR_DAT_1050_0000_1050_5f7a;
u8 *PTR_s_ed_in_Op_Op_1050_0028_1050_5f8e;
u8 PTR_DAT_1050_0000_1050_68b2;
u8 *PTR_DAT_1050_0000_1050_68ae;
u8 *PTR_DAT_1050_0000_1050_68b0;
void* PTR_DAT_1050_0000_1050_68a8;
u8 *PTR_DAT_1050_0000_1050_68aa;
u8 *PTR_DAT_1050_0000_1050_68ac;
u8 u16_1050_5f82;
u8 *PTR_DAT_1050_0000_1050_5f88;
u16 u16_1050_61d2;
void* g_DSTName_Offset;
dword g_MonthDaysLookupTable;
u16 g_RNG_Seed;
void* g_RNG_Next_Val;
u8 PTR_DAT_1050_0000_1050_0298;
u8 *PTR_DAT_1050_0000_1050_038c;
u8 *PTR_DAT_1050_0000_1050_02ec;
u8 *PTR_DAT_1050_0000_1050_4fe8;
u8 PTR_DAT_1050_0000_1050_0388;
void *PTR_s_92.76_1050_3a8d_1050_3cfc;
u8 *PTR_DAT_1050_0000_1050_576a;
u8 *PTR_DAT_1050_0000_1050_038e;
u8 *PTR_DAT_1050_0000_1050_0390;
u8 PTR_DAT_1050_0000_1050_0392;
u8 *PTR_DAT_1050_0000_1050_02a2;
u16 u16_1050_02ee;
u8 PTR_DAT_1050_0000_1050_02f0;
u8 *PTR_DAT_1050_0000_1050_0312;
u32 u32_1050_0364;
u8 PTR_DAT_1050_0000_1050_0382;
u8 *PTR_DAT_1050_0000_1050_0388;
u8 *PTR_DAT_1050_0000_1050_038a;
u8 *PTR_DAT_1050_0000_1050_0398;
u8 *PTR_DAT_1050_0000_1050_039a;
u8 *PTR_DAT_1050_0000_1050_039c;
u8 *PTR_DAT_1050_0000_1050_4232;
u8 PTR_DAT_1050_0000_1050_0df6;
void* PTR_DAT_1050_0000_1050_038c;
u16 u16_1050_0e28;
u8 *PTR_DAT_1050_0000_1050_0e30;
u8 *PTR_DAT_1050_0000_1050_0ea8;
u8 *PTR_DAT_1050_0000_1050_0e38;
u8 *PTR_DAT_1050_0000_1050_0e40;
u8 *PTR_DAT_1050_0000_1050_0e48;
u16 u16_1050_0e58;
u16 u16_1050_0e60;
u8 *PTR_DAT_1050_0000_1050_0e70;
u16 g_ReportFilter_0ECC;
u8 *PTR_DAT_1050_0000_1050_0ed2;
u8 *PTR_DAT_1050_0000_1050_11de;
void *PTR_s_0.000_1050_3bbb_1050_3e2c;
u8 *PTR_DAT_1050_0000_1050_3960;
void *PTR_s_M3_1050_3bc1_1050_3e36;
void *PTR_s_unknown_1050_13fa_1050_1446;
u8 *PTR_DAT_1050_0000_1050_14ce;
u8 DAT_1050_63f0;
void *PTR_DAT_1050_24ea_1050_2526;
void *PTR_DAT_1050_25b6_1050_2e34;
void *PTR_DAT_1050_2482_1050_24be;
u8 DAT_1050_63f2;
void* PTR_DAT_1048_0000_1048_3820;
ulong ULONG_1050_358c;
ulong ULONG_1050_362e;
u16 u16_1050_368e;
u16 u16_1050_3706;
ulong ULONG_1050_379c;
ulong ULONG_1050_37ac;
ulong ULONG_1050_37b6;
u8 *PTR_DAT_1050_0000_1050_50ca;
u8 PTR_DAT_1050_0000_1050_3962;
u8 DAT_1050_63f4;
void *PTR_s_3.65_1050_39b1_1050_3c1e;
u16 u16_1050_4216;
void *PTR_s_!_1050_41da_1050_421c;
void *PTR_s_A_1050_4202_1050_4220;
void *PTR_DAT_1050_41aa_1050_4228;
u8 *PTR_DAT_1050_0000_1050_416c;
u8 *PTR_DAT_1050_0000_1050_416e;
u8 *PTR_DAT_1050_0000_1050_4170;
u16 u16_1050_422e;
u16 u16_1050_422c;
u8 DAT_1050_4172;
u8 DAT_1050_419a;
u8 DAT_1050_5830;
void* PTR_DAT_1050_0000_1050_5e1a;
u8 *PTR_DAT_1050_0000_1050_4254;
u8 *PTR_DAT_1050_0000_1050_5a68;
u8 *PTR_DAT_1050_0000_1050_5a6a;
u8 *PTR_DAT_1050_0000_1050_5f0c;
u8 *PTR_DAT_1050_0000_1050_5f0e;
u8 *PTR_DAT_1050_0000_1050_5f16;
u8 *PTR_DAT_1050_0000_1050_5f18;
u8 *PTR_DAT_1050_0000_1050_50cc;
u8 PTR_DAT_1050_0000_1050_441e;
void *PTR_DAT_1050_4172_1050_4212;
void *PTR_s_O_1050_41b2_1050_4218;
void *PTR_DAT_1050_419a_1050_4224;
u8 *PTR_DAT_1050_0000_1050_4e74;
u8 PTR_DAT_1050_0000_1050_4e70;
u8 PTR_DAT_1048_0000_1048_4230;
u8 *PTR_DAT_1048_0000_1048_4234;
u8 PTR_DAT_1050_0000_1050_4e74;
u8 *PTR_DAT_1050_0000_1050_4e78;
void* PTR_DAT_1050_0000_1050_5b80;
u8 *PTR_DAT_1050_0000_1050_4fbc;
void* PTR_DAT_1050_0000_1050_4fbc;
u8 *PTR_DAT_1050_0000_1050_574c;
u8 DAT_1050_581c;
u8 *PTR_DAT_1050_0000_1050_65e4;
u8 PTR_DAT_1050_0000_1050_5166;
u8 *PTR_DAT_1050_0000_1050_5166;
u8 *PTR_DAT_1050_0000_1050_5168;
u16 u16_1050_518c;
u8 *PTR_DAT_1050_0000_1050_574a;
u8 *PTR_DAT_1050_0000_1050_5a66;
u8 *PTR_DAT_1050_0000_1050_5750;
u8 PTR_DAT_1050_0000_1050_5752;
void *PTR_DAT_1050_57c4_1050_580e;
u8 *PTR_DAT_1050_0000_1050_5812;
u16 UNK_0000_0006;
undefined2 UNK_0000_000a;
void* PTR_DAT_1050_0000_1050_5812;
u8 PTR_DAT_1050_0000_1050_5a68;
u8 *PTR_DAT_1050_0000_1050_5ef8;
u8 *PTR_DAT_1050_0000_1050_5b64;
u8 *PTR_DAT_1050_0000_1050_5b66;
u8 *PTR_DAT_1050_0000_1050_5b68;
u8 *PTR_DAT_1050_0000_1050_5b6a;
u8 PTR_DAT_1050_0000_1050_5b78;
u8 PTR_DAT_1050_0000_1050_5b6c;
u8 PTR_DAT_1050_0000_1050_5b70;
u8 PTR_DAT_1050_0000_1050_5b74;
u8 *PTR_DAT_1050_0000_1050_5b82;
u8 *PTR_DAT_1050_0000_1050_5b80;
u8 *PTR_DAT_1050_0000_1050_5bca;
u8 *PTR_DAT_1050_0000_1050_5bcc;
u8 *PTR_DAT_1050_0000_1050_5bce;
u8 PTR_DAT_1050_0000_1050_5bcc;
u8 PTR_DAT_1050_0000_1050_5cd0;
u8 PTR_DAT_1050_0000_1050_5cf8;
void* PTR_DAT_1050_0000_1050_5d04;
u16 u16_1050_5d06;
u8 *PTR_DAT_1050_0000_1050_5f10;
u8 PTR_DAT_1050_0000_1050_5efe;
u8 PTR_DAT_1050_0000_1050_5df0;
u8 *PTR_DAT_1050_0000_1050_5df8;
dword DWORD_1050_5df4;
u8 DWORD_1050_5df4;
u8 PTR_DAT_1050_0000_1050_5e18;
u8 *PTR_DAT_1050_0000_1050_5e16;
u32 u32_1050_5ec2;
u32 u32_1050_5ebe;
u16 u16_1050_5eca;
u8 *PTR_DAT_1050_0000_1050_5ecc;
u16 u16_1050_5ec8;
void* PTR_DAT_1050_0000_1050_5ed8;
u8 PTR_DAT_1050_0000_1050_5edc;
u8 *PTR_DAT_1050_0000_1050_5ee0;
u8 *PTR_DAT_1050_0000_1050_5ee2;
u8 *PTR_DAT_1050_0000_1050_5eda;
void* PTR_DAT_1050_0000_1050_5ee0;
u8 *PTR_DAT_1050_0000_1050_5ee8;
u8 *PTR_DAT_1050_0000_1050_5eea;
u8 *PTR_DAT_1050_0000_1050_5eec;
u8 *PTR_DAT_1050_0000_1050_5eee;
u8 PTR_DAT_1050_0000_1050_5ef0;
u8 PTR_DAT_1050_0000_1050_5efa;
u8 *PTR_DAT_1050_0000_1050_5f02;
u8 PTR_DAT_1050_0000_1050_5f04;
u8 PTR_DAT_1050_0000_1050_5f08;
u8 PTR_DAT_1050_0000_1050_5f0c;
u8 PTR_DAT_1050_0000_1050_5f16;



// Validates if a memory access of a specific size (`param_1`) at a given offset
// (`param_3`) is within the bounds and permissions of the provided segment selector
// (`param_4`). It checks the segment limit and its access rights according to the mode
// specified in `param_2`. Returns 0 if access is valid, or 1 otherwise.

int validate_segment_access(int size,byte mode,int offset,int segment)
{
  undefined3 uVar1;
  uint uVar2;
  
  if ((mode & 0x4) == 0x0)
  {
    uVar2 = (uint)(byte)(((byte)(-(uint)((mode & 0x2) == 0x0) >> 0x8) & 0xfe) + 0x92) <<
            0x8;
  }
  else
  {
    uVar2 = 0x1800;
  }
  if (((segment == 0x0) || (false)) ||
     ((segment & 0xff00U &
      (uint)(byte)(((byte)(-(uint)((mode & 0x4) == 0x0) >> 0x8) & 0x82) + 0x18) << 0x8)
      != uVar2))
  {
    return 0x1;
  }
  if (size != 0x0)
  {
    uVar1 = SegmentLimit(segment);
    if (CARRY2(offset,size - 0x1U))
    {
      return 0x1;
    }
    if ((uint)uVar1 < offset + (size - 0x1U))
    {
      return 0x1;
    }
  }
  return 0x0;
}



int __cdecl16far const_true_stub(void)
{
  return 0x1;
}



void __cdecl16far nop_stub(void)
{
  return;
}



// Validates access to a memory range by iterating through it. Returns 1 if the entire
// range is accessible.
//
// Win16 artifact note: the callback was passed in DX:AX register pair (reg_ax/reg_dx);
// in_stack_00000004 shadowed the ptr parameter at stack offset 4. Flat model: pass
// NULL for the callback (probe-only mode) and forward size as the iteration limit.

int validate_ptr_range_access(void *ptr, long size)
{
  long lVar1 = iterate_memory_callback_far(NULL, ptr, (void *)size);
  if (lVar1 == 0x0)
  {
    return 0x1;
  }
  return 0x0;
}



void win16_app_exit_wrapper(void)
{
  win16_app_exit_with_cleanup();
  return;
}



void win16_app_pre_init_wrapper_2(void)
{
  win16_app_exit_with_cleanup();
  return;
}



void app_exit_wrapper(void)
{
  win16_app_exit_with_cleanup();
  return;
}



/* Win16 artifact: in_stack_00000002 was the first stack parameter (at [BP+2]),
 * meaning the function takes an error code. Promoted to a proper parameter. */
void fatal_exit_wrapper_2(int err_code)
{
  fatal_app_exit_with_message_lookup_and_terminate(err_code);
}



// Checks if the `___EXPORTEDSTUB` has been patched or initialized with a `MOV AX`
// instruction (opcode 0xB8). Used for determining the initialization state of certain
// exported library stubs.
//
// Win16 artifact: `reg_ss` was the SS (stack segment) register, treated as the
// undefined return value when the stub was not yet patched. In flat model reg_ss
// has no meaningful value; return 0 to indicate "not ready".
// The commented-out `iRam100029ed` was the Win16 patch target address.

int __cdecl16far check_exported_stub_patch_state(void)
{
  if (___EXPORTEDSTUB != (code)0xb8)
  {
    return 0; /* stub unpatched — original consumed SS; flat model: 0 = not ready */
  }
  return ___EXPORTEDSTUB();
}


//
int __cdecl16far ___EXPORTEDSTUB(void)
{
  return 0x0;
}


// Win16 near vararg helper: reads the next u16 argument from the formatting loop's
// argument pointer stored at [caller.BP+0xE]. Promotes that frame slot to an explicit
// `u16 **ap` parameter so callers pass their va_list cursor by reference.
u16 __cdecl16near fmt_get_next_word_arg(u16 **ap)
{
  u16 uVar1 = **ap;
  (*ap)++;
  return uVar1;
}



// Win16 near vararg helper: reads the next u32 (two consecutive u16 words: lo then hi)
// from the argument pointer and advances it by 2 words.
// CONCAT22(hi,lo) -> explicit shift/or.
u32 __cdecl16near fmt_get_next_dword_arg(u16 **ap)
{
  u16 lo = (*ap)[0];
  u16 hi = (*ap)[1];
  (*ap) += 2;
  return ((u32)hi << 16) | lo;
}



// Win16 near vararg dispatcher: if the `%l` long-flag bit (0x20) is set in the
// current format specifier's flags byte, fetch a dword arg; otherwise a word arg.
// Win16 artifacts removed:
//   - `reg_bp`/`reg_ss` (callee-saved frame registers, not needed in flat)
//   - `*(byte *)(reg_bp + -0x6)` (caller's local flags var) -> explicit `flags` param
//   - `CONCAT22(param_1, uVar1)` -> explicit shift/or
long __cdecl16near fmt_get_arg_by_size_flag(u16 param_1, byte flags, u16 **ap)
{
  if ((flags & 0x20) != 0x0)
  {
    u32 uVar2 = fmt_get_next_dword_arg(ap);
    return uVar2;
  }
  u16 uVar1 = fmt_get_next_word_arg(ap);
  if (uVar1 == 0x0)
  {
    return (ulong)param_1 << 0x10;
  }
  /* CONCAT22(param_1, uVar1): hi-word | lo-word */
  return ((u32)param_1 << 16) | uVar1;
}



void __cdecl16far far_noop_stub(void)
{
  return;
}



void __cdecl16near near_noop_stub_2(void)
{
  return;
}



// Far void* memory copy optimized for word-aligned data. Copies `byte_count` bytes
// from `src` (represented as src_ptr_off flat offset) to `dest`, managing Win16
// 64KB segment boundaries via src_seg (+0x6C per crossing).
//
// Win16 artifact: original signature had 5 args — (dest, src_seg_handle, src_ptr_off,
// src_seg, byte_count) — with in_stack_0000000a/0000000c at [BP+0xA]/[BP+0xC].
// Promoted to named parameters; `count` renamed to `src_ptr_off` (source byte cursor).

void * __cdecl16far memcpy_far_words(void *dest, void *src, int src_ptr_off, int src_seg, int byte_count)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  
  puVar5 = dest;
  if (byte_count != 0x0)
  {
    while( true )
    {
      uVar3 = ~(uint)puVar5;
      uVar3 = ((byte_count - 0x1U) - uVar3 &
              -(uint)(byte_count - 0x1U < uVar3)) + uVar3;
      uVar4 = ~src_ptr_off;
      uVar3 = (uVar3 - uVar4 & -(uint)(uVar3 < uVar4)) + uVar4 + 0x1;
      byte_count -= uVar3;
      for (uVar4 = uVar3 >> 0x1; uVar4 != 0x0; uVar4 -= 0x1)
      {
        puVar2 = puVar5;
        puVar5 = puVar5 + 0x1;
        puVar1 = (undefined2 *)src_ptr_off;
        src_ptr_off += 0x2;
        *puVar2 = *puVar1;
      }
      for (uVar3 = (uint)((uVar3 & 0x1) != 0x0); uVar3 != 0x0; uVar3 -= 0x1)
      {
        puVar2 = puVar5;
        puVar5 = (undefined2 *)((int)puVar5 + 0x1);
        puVar1 = (undefined2 *)src_ptr_off;
        src_ptr_off += 0x1;
        *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
      }
      if (byte_count == 0x0) break;
      /* Win16 64KB boundary crossing: advance source segment by one selector step */
      if ((undefined2 *)src_ptr_off == NULL)
      {
        src_seg += 0x6c;
      }
      if (puVar5 == NULL)
      {
        src = (void *)((int)src + 0x6c);
      }
    }
  }
  return dest;
}



int __cdecl16far abs_u16_to_i16_logic(int value)
{
  return (value ^ value >> 0xf) - (value >> 0xf);
}



void fatal_app_exit_4f1a(int err_code)
{
  fatal_app_exit_with_message_lookup_and_terminate(err_code);
  return;
}



u32 __stdcall16far div_32bit_signed(uint param_1,uint param_2,uint param_3,uint param_4)
{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0x0;
  if ((bool)cVar11)
  {
    bVar10 = param_1 != 0x0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0x0)
  {
    cVar11 += '\x01';
    bVar10 = param_3 != 0x0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0x0)
  {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) /
                 (ulong)param_3);
  }
  else
  {
    do
    {
      uVar8 = uVar9 >> 0x1;
      uVar5 = uVar5 >> 0x1 | (uint)((uVar9 & 0x1) != 0x0) << 0xf;
      uVar7 = uVar6 >> 0x1;
      uVar3 = uVar3 >> 0x1 | (uint)((uVar6 & 0x1) != 0x0) << 0xf;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0x0);
    /* CONCAT22(uVar7,uVar3): DX:AX 32-bit pair → explicit shift/or */
    uVar1 = ((ulong)uVar7 << 16 | (ulong)uVar3) / (ulong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar3 = (uint)((ulong)lVar2 >> 0x10);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY2(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2))))
    {
      iVar4 += -0x1;
    }
    uVar3 = 0x0;
  }
  if (cVar11 == '\x01')
  {
    bVar10 = iVar4 != 0x0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  /* CONCAT22(uVar3,iVar4): DX:AX return pair — high word | low word */
  return ((u32)uVar3 << 16) | (u32)(u16)iVar4;
}



// Standard 32-bit unsigned multiplication routine for 16-bit environments. Returns the
// result in `DX:AX`.

long __stdcall16far mul_u32_u32_standard(long factor1,long factor2)
{
  return (unsigned long)factor1 * (unsigned long)factor2;
}



// Standard 32-bit unsigned division/modulo routine. Returns the quotient in `DX:AX`.

long __stdcall16far div_u32_u32_standard(long dividend,long divisor)
{
  if (divisor == 0) return 0;
  return (unsigned long)dividend / (unsigned long)divisor;
}



u32 __stdcall16far mod_32bit(uint param_1,uint param_2,uint param_3,uint param_4)
{
  uint32_t dividend = ((uint32_t)param_2 << 16) | param_1;
  uint32_t divisor = ((uint32_t)param_4 << 16) | param_3;

  if (divisor == 0) return 0;
  return (u32)(dividend % divisor);
}



void __cdecl16near nop_near_stub_3(void)
{
  return;
}



void __stdcall16far far_noop_stub_1(void)
{
  return;
}



void __stdcall16far far_noop_stub_2(void)
{
  return;
}



void __stdcall16far far_noop_stub_1008(void)
{
  return;
}



void __stdcall16far win16_PostQuitMessage_wrapper(void)
{
  PostQuitMessage16(0x0);
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1008_3cd2(void)
{
  return;
}



void * __stdcall16far zero_init_struct_6bytes(void *ptr)
{
  if (ptr != NULL)
  {
    memset(ptr, 0, 6);
  }
  return ptr;
}



void * __stdcall16far pack_3words_alt(void *dest, int w1, int w2, int w3)
{
    short *p = (short *)dest;
    p[0] = (short)w3;
    p[1] = (short)w2;
    p[2] = (short)w1;
    return dest;
}



void __stdcall16far pack_3words_reverse(void *dest, int w1, int w2, int w3)
{
    short *p = (short *)dest;
    p[0] = (short)w3;
    p[1] = (short)w2;
    p[2] = (short)w1;
}

void __stdcall16far unpack_word_pair(void *src, int *out1, int *out2)
{
    short *s = (short *)src;
    *out2 = (int)s[0];
    *out1 = (int)s[1];
}

void __stdcall16far unpack_3word_struct(void *src, int *out1, int *out2, int *out3)
{
    short *s = (short *)src;
    *out3 = (int)s[0];
    *out2 = (int)s[1];
    *out1 = (int)s[2];
}

void __stdcall16far calc_abs_diff_3ints(int *vec1, int *vec2)
{
    short *v1 = (short *)vec1;
    short *v2 = (short *)vec2;
    v1[0] = abs(v2[0] - v1[0]) + 1;
    v1[1] = abs(v2[1] - v1[1]) + 1;
    v1[2] = abs(v2[2] - v1[2]) + 1;
}

void __stdcall16far add_3int_vectors(int *dest, int *src)
{
    short *d = (short *)dest;
    short *s = (short *)src;
    d[0] += s[0];
    d[1] += s[1];
    d[2] += s[2];
}

void __stdcall16far copy_struct_6bytes(void *dest, void *src)
{
    short *d = (short *)dest;
    short *s = (short *)src;
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void * __stdcall16far null_far_ptr_logic(void *dest)
{
    *(void **)dest = NULL;
    return dest;
}

void * __stdcall16far init_long_pair(void *dest, long value)
{
    long *p = (long *)dest;
    p[0] = value;
    p[1] = 0;
    return dest;
}

void * __stdcall16far init_8byte_pair_with_long_and_zero(void *dest, long value)
{
    long *p = (long *)dest;
    p[0] = value;
    p[1] = 0;
    return dest;
}
