/*
 * Source: outpost.c
 * Chunk: 21/117
 * Original lines: 23024-24167
 * Boundaries: top-level declarations/definitions only
 */




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
  undefined *in_DX;
  int iVar2;
  undefined2 uVar3;
  undefined2 in_stack_00000006;
  
  _p_StringPropertyTable = _table_ptr_out;
  if (_g_AllocatedBlock_Offset == NULL)
  {
    heap_ctx = init_memory_allocator();
  }
  else
  {
    in_DX = g_AllocatedBlock_Segment;
    heap_ctx = g_AllocatedBlock_Offset;
  }
  pvVar1 = alloc_with_hooks(0x1aa,0x1,heap_ctx);
  *_table_ptr_out = pvVar1;
  table_ptr_out[0x1] = in_DX;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x6) = 0x6e4;
  *(undefined2 *)(iVar2 + 0x8) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xa) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xc) = 0x6ea;
  *(undefined2 *)(iVar2 + 0xe) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x10) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x12) = 0x6ee;
  *(undefined2 *)(iVar2 + 0x14) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x16) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x18) = 0x6f2;
  *(undefined2 *)(iVar2 + 0x1a) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x1c) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x1e) = 0x6f6;
  *(undefined2 *)(iVar2 + 0x20) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x22) = 0x4;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x24) = 0x6fe;
  *(undefined2 *)(iVar2 + 0x26) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x28) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x2a) = 0x702;
  *(undefined2 *)(iVar2 + 0x2c) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x2e) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x30) = 0x708;
  *(undefined2 *)(iVar2 + 0x32) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x34) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x36) = 0x70e;
  *(undefined2 *)(iVar2 + 0x38) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x3a) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x3c) = 0x714;
  *(undefined2 *)(iVar2 + 0x3e) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x40) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x42) = 0x71a;
  *(undefined2 *)(iVar2 + 0x44) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x46) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x48) = 0x71e;
  *(undefined2 *)(iVar2 + 0x4a) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x4c) = 0x7;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x4e) = 0x72c;
  *(undefined2 *)(iVar2 + 0x50) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x52) = 0x6;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x54) = 0x738;
  *(undefined2 *)(iVar2 + 0x56) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x58) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x5a) = 0x73e;
  *(undefined2 *)(iVar2 + 0x5c) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x5e) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x60) = 0x744;
  *(undefined2 *)(iVar2 + 0x62) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x64) = 0x4;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x66) = 0x74c;
  *(undefined2 *)(iVar2 + 0x68) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x6a) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x6c) = 0x750;
  *(undefined2 *)(iVar2 + 0x6e) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x70) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x72) = 0x756;
  *(undefined2 *)(iVar2 + 0x74) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x76) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x78) = 0x75a;
  *(undefined2 *)(iVar2 + 0x7a) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x7c) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x7e) = 0x75e;
  *(undefined2 *)(iVar2 + 0x80) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x82) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x84) = 0x764;
  *(undefined2 *)(iVar2 + 0x86) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x88) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x8a) = 0x76a;
  *(undefined2 *)(iVar2 + 0x8c) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x8e) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x90) = 0x770;
  *(undefined2 *)(iVar2 + 0x92) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x94) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x96) = 0x774;
  *(undefined2 *)(iVar2 + 0x98) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x9a) = 0x4;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x9c) = 0x77c;
  *(undefined2 *)(iVar2 + 0x9e) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xa0) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xa2) = 0x780;
  *(undefined2 *)(iVar2 + 0xa4) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xa6) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xa8) = 0x782;
  *(undefined2 *)(iVar2 + 0xaa) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xac) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xae) = 0x786;
  *(undefined2 *)(iVar2 + 0xb0) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xb2) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xb4) = 0x78a;
  *(undefined2 *)(iVar2 + 0xb6) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xb8) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xba) = 0x78e;
  *(undefined2 *)(iVar2 + 0xbc) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xbe) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xc0) = 0x792;
  *(undefined2 *)(iVar2 + 0xc2) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xc4) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xc6) = 0x796;
  *(undefined2 *)(iVar2 + 0xc8) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xca) = 0x4;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xcc) = 0x79e;
  *(undefined2 *)(iVar2 + 0xce) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xd0) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xd2) = 0x7a0;
  *(undefined2 *)(iVar2 + 0xd4) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xd6) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xd8) = 0x7a4;
  *(undefined2 *)(iVar2 + 0xda) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xdc) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xde) = 0x7a6;
  *(undefined2 *)(iVar2 + 0xe0) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xe2) = 0x6;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xe4) = 0x7b2;
  *(undefined2 *)(iVar2 + 0xe6) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xe8) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xea) = 0x7b4;
  *(undefined2 *)(iVar2 + 0xec) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xee) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xf0) = 0x7ba;
  *(undefined2 *)(iVar2 + 0xf2) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xf4) = 0x2d;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xf6) = 0x814;
  *(undefined2 *)(iVar2 + 0xf8) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0xfa) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0xfc) = 0x81a;
  *(undefined2 *)(iVar2 + 0xfe) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x100) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x102) = 0x81c;
  *(undefined2 *)(iVar2 + 0x104) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x106) = 0x4b;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x108) = 0x8b2;
  *(undefined2 *)(iVar2 + 0x10a) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x10c) = 0x6;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x10e) = 0x8be;
  *(undefined2 *)(iVar2 + 0x110) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x112) = 0x4;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x11a) = 0x8c6;
  *(undefined2 *)(iVar2 + 0x11c) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x11e) = 0x35;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x120) = 0x930;
  *(undefined2 *)(iVar2 + 0x122) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x124) = 0x2e;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x114) = 0x98c;
  *(undefined2 *)(iVar2 + 0x116) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x118) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x126) = 0x98e;
  *(undefined2 *)(iVar2 + 0x128) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x12a) = 0x9;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x12c) = 0x9a0;
  *(undefined2 *)(iVar2 + 0x12e) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x130) = 0x1a;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x132) = 0x9d4;
  *(undefined2 *)(iVar2 + 0x134) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x136) = 0x8;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x138) = 0x9e4;
  *(undefined2 *)(iVar2 + 0x13a) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x13c) = 0x4a;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x144) = 0xa78;
  *(undefined2 *)(iVar2 + 0x146) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x148) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x14a) = 0xa7c;
  *(undefined2 *)(iVar2 + 0x14c) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x14e) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x150) = 0xa7e;
  *(undefined2 *)(iVar2 + 0x152) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x154) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x156) = 0xa80;
  *(undefined2 *)(iVar2 + 0x158) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x15a) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x15c) = 0xa86;
  *(undefined2 *)(iVar2 + 0x15e) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x160) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x168) = 0xa8a;
  *(undefined2 *)(iVar2 + 0x16a) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x16c) = 0x1b;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x16e) = 0xac0;
  *(undefined2 *)(iVar2 + 0x170) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x172) = 0x16;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x174) = 0xaec;
  *(undefined2 *)(iVar2 + 0x176) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x178) = 0x3e;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x17a) = 0xb68;
  *(undefined2 *)(iVar2 + 0x17c) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x17e) = 0x46;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x180) = 0xbf4;
  *(undefined2 *)(iVar2 + 0x182) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x184) = 0x1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x186) = 0xbf6;
  *(undefined2 *)(iVar2 + 0x188) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x18a) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x18c) = 0xbfc;
  *(undefined2 *)(iVar2 + 0x18e) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x190) = 0x3;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x192) = 0xc02;
  *(undefined2 *)(iVar2 + 0x194) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x196) = 0xa;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x198) = 0xc16;
  *(undefined2 *)(iVar2 + 0x19a) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x19c) = 0x24;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x19e) = 0xc5e;
  *(undefined2 *)(iVar2 + 0x1a0) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x1a2) = 0x2;
  uVar3 = (undefined2)((ulong)*(undefined4 *)_table_ptr_out >> 0x10);
  iVar2 = (int)*(undefined4 *)_table_ptr_out;
  *(undefined2 *)(iVar2 + 0x1a4) = 0xc62;
  *(undefined2 *)(iVar2 + 0x1a6) = (dword *)&g_HeapContext;
  *(undefined2 *)((int)*(undefined4 *)_table_ptr_out + 0x1a8) = 0x44;
  return table_ptr_out;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Clears the global string property table reference and frees the associated memory.

void __stdcall16far res_cleanup_string_property_table_logic(void **table_ptr)
{
  undefined2 in_stack_00000006;
  
  _p_StringPropertyTable = 0x0;
                // WARNING: Load size is inaccurate
  free_if_not_null((void *)*_table_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through an array of string indices and returns the first one that is marked
// as 'available' or 'valid' in the resource manager's state table (offset 0x35).

int __stdcall16far res_find_first_available_string_index_logic(int *param_1,int param_2)
{
  int iVar1;
  undefined4 *puVar2;
  undefined2 in_DX;
  long lVar3;
  int iStack_12;
  int iStack_10;
  undefined4 uStack_6;
  
  puVar2 = get_array_element_6bytes(param_1,param_2);
  uStack_6 = (undefined4 *)CONCAT22(in_DX,puVar2);
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x35);
  iStack_12 = 0x0;
  iStack_10 = 0x0;
  while ((iVar1 = iStack_10, iStack_12 < *(int *)(puVar2 + 0x1) &&
         (iVar1 = *(int *)((int)*uStack_6 + iStack_12 * 0x2),
         *(int *)(iVar1 * 0x2 + (int)lVar3 + 0xa) == 0x0)))
  {
    iStack_12 += 0x1;
  }
  iStack_10 = iVar1;
  return iStack_10;
}



int __stdcall16far search_array_for_value(int *base_array,int value,int category)
{
  undefined4 *puVar1;
  undefined2 in_DX;
  int iStack_8;
  undefined4 uStack_6;
  
                // Searches for param_2 in an array retrieved by category/type param_3.
                // Returns 1 if found, 0 if not found.
  puVar1 = get_array_element_6bytes(base_array,value);
  uStack_6 = (undefined4 *)CONCAT22(in_DX,puVar1);
  iStack_8 = 0x0;
  while( true )
  {
    if (*(int *)(puVar1 + 0x1) <= iStack_8)
    {
      return 0x0;
    }
    if (*(int *)((int)*uStack_6 + iStack_8 * 0x2) == category) break;
    iStack_8 += 0x1;
  }
  return 0x1;
}



void * __stdcall16far get_array_element_6bytes(int *array_desc,int index)
{
  int in_stack_00000008;
  
                // Gets element from 6-byte structure array. Bounds check: 0 < index <
                // 0x47. Returns far ptr to element.
  if ((0x0 < in_stack_00000008) && (in_stack_00000008 < 0x47))
  {
    return (void *)(in_stack_00000008 * 0x6 + *_array_desc);
  }
  return NULL;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:CA4A.

void * __stdcall16far UI_Element_Subclass_ctor_CA4A(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xca4a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1008:CA4A during destruction.
// Invokes virtual destructor (index 0) for sub-object at offset 10.

void __stdcall16far UI_Element_Subclass_dtor_CA4A(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xca4a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(this);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References global simulator map context at 1050:65E2.
// Performs indirect call via vtable initialization UI_Entity_Summary_Display_ctor_a43e.
// Triggers simulator object template loading via far address 1008:4BBE.

void __stdcall16far
UI_Element_Subclass_Process_String_Match_Logic(void *this,char *search_name)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  char *in_stack_00000008;
  undefined1 local_12 [0x4];
  long lStack_e;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  while( true )
  {
    lStack_e = get_next_list_item(local_a);
    iVar1 = (int)((ulong)lStack_e >> 0x10);
    if (iVar1 == 0x0 && (int)lStack_e == 0x0) break;
    iVar1 = strcmp_case_sensitive
                      ((byte *)*(undefined4 *)((int)lStack_e + 0x4),in_stack_00000008);
    if (iVar1 == 0x0)
    {
      pvVar3 = UI_Entity_Summary_Display_ctor_a43e
                         ((undefined1 *)CONCAT22(unaff_SS,local_12));
      uVar2 = (undefined2)((ulong)pvVar3 >> 0x10);
      UI_Entity_Dispatch_Command_from_ID_a6ee
                ((u32)CONCAT22(unaff_SS,local_12),*(u16 *)((int)lStack_e + 0x12));
      pvVar3 = (void *)*(undefined4 *)((int)(long *)_p_SimulatorWorldContext + 0x52);
      Simulator_Map_Context_Load_Object_Template_4bbe
                (pvVar3,*(int *)((int)lStack_e + 0x12));
      *(long *)((int)this + 0xe) =
           (long)*(int *)((int)(void *)pvVar3 + 0x94) + *_p_SimulatorWorldContext;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Compares an internal tracking value (offset 0xE) against a global threshold. Returns
// 1 if the value is greater than or equal to the threshold.

int __stdcall16far UI_Element_Check_Offset_0E_Against_Global_maybe(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*_p_SimulatorWorldContext <= *(ulong *)((int)this + 0xe))
  {
    return 0x1;
  }
  return 0x0;
}



// Retrieves the linked list pointer from offset 10 (0xA). If the list is not yet
// initialized, it calls a sub-routine to populate it first.

void * __stdcall16far UI_Element_Get_or_Init_List_at_Offset_0A_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0xa) == 0x0)
  {
    UI_Populate_Specialized_Resource_List_Logic(this);
  }
  return (void *)*(undefined2 *)((int)this + 0xa);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// References global resource manager at 1050:0ED0 and string property table at
// 1050:06E0.
// Iteratively instantiates UI components with Type 2 ctor.
// Performs indirect calls through list vtable index 0 (Destructor) and offset 4 (Add
// item).

void __stdcall16far UI_Populate_Specialized_Resource_List_Logic(void *this)
{
  u16 entity_id;
  undefined2 *puVar1;
  astruct_491 *this_00;
  void *pvVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint extraout_DX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int extraout_DX_00;
  int iVar9;
  int iVar10;
  undefined2 unaff_SI;
  undefined2 uVar11;
  long lVar12;
  long lVar13;
  undefined2 in_stack_00000006;
  int iStack_10;
  undefined4 uStack_e;
  
  uVar5 = *(uint *)((int)this + 0xc);
  if (uVar5 != 0x0 || (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
    uVar5 = extraout_DX;
  }
  this_00 = allocate_memory(CONCAT22(unaff_SI,0xc));
  uVar6 = uVar5 | (uint)this_00;
  if (uVar6 == 0x0)
  {
    pvVar2 = NULL;
    uVar6 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(this_00,uVar5);
  }
  *(undefined2 *)((int)this + 0xa) = pvVar2;
  *(uint *)((int)this + 0xc) = uVar6;
  lVar12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x35);
  iVar7 = (int)((ulong)lVar12 >> 0x10);
  iVar8 = iVar7;
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uStack_e = (undefined4 *)CONCAT22(iVar8,puVar3);
  iStack_10 = 0x0;
  iVar9 = iVar8;
  while( true )
  {
    if (*(int *)(puVar3 + 0x1) <= iStack_10) break;
    entity_id = *(u16 *)((int)*uStack_e + iStack_10 * 0x2);
    if (*(int *)(entity_id * 0x2 + (int)lVar12 + 0xa) != 0x0)
    {
      pcVar4 = Lookup_Entity_Name_by_ID_Logic_bd80(entity_id);
      pcVar4 = strdup_allocate(pcVar4);
      uVar11 = 0x1000;
      iVar10 = iVar9;
      pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x14));
      if (iVar10 == 0x0 && pvVar2 == NULL)
      {
        lVar13 = 0x0;
      }
      else
      {
        uVar11 = 0x1018;
        lVar13 = UI_Transaction_Item_Type2_ctor
                           (pvVar2,iVar10,0x1,pcVar4,iVar9,entity_id,0x0,0x0);
      }
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x4);
      (*(code *)*puVar1)(uVar11,(int)*(undefined4 *)((int)this + 0xa),
                         (int)((ulong)*(undefined4 *)((int)this + 0xa) >> 0x10),lVar13);
      iVar9 = extraout_DX_00;
    }
    iStack_10 += 0x1;
  }
  return;
}



u16 __stdcall16far UI_Object_Field_E_Serialize_to_File_c98e(u32 param_1,void *param_2)
{
  int iVar1;
  u16 uVar2;
  void *unaff_SS;
  u32 local_10;
  
  iVar1 = file_context_write_footer_marker_logic((void *)param_2);
  uVar2 = 0x0;
  if (iVar1 != 0x0)
  {
    local_10 = *(u32 *)((int)param_1 + 0xe);
    iVar1 = file_write_check((long)param_2,&local_10,unaff_SS);
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    uVar2 = 0x1;
  }
  return uVar2;
}



u16 __stdcall16far
UI_Object_Field_E_Deserialize_from_File_c9d4(u32 param_1,void *param_2)
{
  int iVar1;
  
  if (0x1 < (int)PTR_DAT_1050_0000_1050_0312)
  {
    iVar1 = file_context_find_footer_marker_logic();
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d4;
      return 0x0;
    }
    iVar1 = file_read_check((long)param_2,(void *)((int)param_1 + 0xe),
                            (void *)(param_1 >> 0x10));
    if (iVar1 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
  }
  return 0x1;
}



void * __stdcall16far
UI_Element_Subclass_CA4A_dtor_Scalar_Deleting_ca24
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Element_Subclass_dtor_CA4A(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:D71A.

void * __stdcall16far UI_Element_Subclass_ctor_D71A(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined4 *)((int)this + 0x16) = 0x0;
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xd71a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



void __stdcall16far UI_Element_Subclass_dtor_D71A_Wrapper(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0xd71a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  UI_Element_Subclass_dtor_D71A_Logic(this);
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Targeted Scan Finding: Vtable
// Iteratively invokes virtual destructors (vtable index 0) for six sub-objects at
// offsets 10, 0xE, 12, 16, 1A, and 1E.

void __stdcall16far UI_Element_Subclass_dtor_D71A_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0xa) = 0x0;
  if (*(int *)((int)this + 0x10) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0xe) = 0x0;
  if (*(int *)((int)this + 0x14) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x12) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x12);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x12) = 0x0;
  if (*(int *)((int)this + 0x18) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x16) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x16);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x16) = 0x0;
  if (*(int *)((int)this + 0x1c) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x1a) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x1a);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  if (*(int *)((int)this + 0x20) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x1e) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x1e);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// Initializes list tracker with construct_object_with_vtable.
// Uses global string manager at 1050:14CC for "None" label (ID 0x43D).
// Performs indirect call through vtable index 0 and offset 4.

void __stdcall16far
UI_Populate_Associated_File_List_Logic(void *this,void *search_context)
{
  undefined2 *puVar1;
  bool bVar2;
  astruct_491 *this_00;
  void *pvVar3;
  char *pcVar4;
  undefined2 uVar5;
  uint extraout_DX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  void *pvVar14;
  char *pcVar15;
  long lVar16;
  undefined4 in_stack_00000008;
  undefined2 in_stack_0000ffc0;
  undefined4 uStack_38;
  int iStack_1e;
  undefined1 local_18 [0x8];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  long lStack_6;
  
  uVar6 = *(uint *)((int)this + 0x20);
  if (uVar6 != 0x0 || (undefined4 *)*(int *)((int)this + 0x1e) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x1e);
    (*(code *)*puVar1)();
    uVar6 = extraout_DX;
  }
  this_00 = allocate_memory(CONCAT22(in_stack_0000ffc0,0xc));
  uVar7 = uVar6 | (uint)this_00;
  if (uVar7 == 0x0)
  {
    pvVar3 = NULL;
    uVar7 = 0x0;
  }
  else
  {
    pvVar3 = construct_object_with_vtable(this_00,uVar6);
  }
  *(undefined2 *)((int)this + 0x1e) = pvVar3;
  *(uint *)((int)this + 0x20) = uVar7;
  lStack_6 = *(long *)((int)in_stack_00000008 + 0x200);
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_18),0x1,0x0,0x400);
  iStack_1e = 0x0;
  while( true )
  {
    pvVar14 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                        ((undefined1 *)CONCAT22(unaff_SS,local_18));
    iVar8 = (int)((ulong)pvVar14 >> 0x10);
    if (iVar8 == 0x0 && (int)pvVar14 == 0x0) break;
    if (*(long *)((int)pvVar14 + 0x200) == lStack_6)
    {
      iStack_1e += 0x1;
    }
  }
  bVar2 = false;
  if (0x1 < iStack_1e)
  {
    uStack_10 = uStack_c;
    uStack_e = uStack_a;
    if (iStack_8 != 0x0)
    {
      uStack_10 = 0x1;
      uStack_e = 0x0;
    }
    while( true )
    {
      pvVar14 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                          ((undefined1 *)CONCAT22(unaff_SS,local_18));
      iVar9 = (int)((ulong)pvVar14 >> 0x10);
      iVar8 = (int)pvVar14;
      if (iVar9 == 0x0 && iVar8 == 0x0) break;
      if ((*(long *)(iVar8 + 0x200) == lStack_6) &&
         (*(long *)(iVar8 + 0x4) != 0x4000001))
      {
        pcVar15 = UI_Component_Get_FarPtr_at_1FA(pvVar14);
        iVar10 = (int)((ulong)pcVar15 >> 0x10);
        pcVar4 = strdup_allocate((char *)pcVar15);
        uVar13 = 0x1000;
        iVar11 = iVar10;
        pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffc0,0x12));
        if (iVar11 == 0x0 && pvVar3 == NULL)
        {
          uVar5 = 0x0;
          uStack_38 = 0x0;
        }
        else
        {
          uVar13 = 0x1018;
          uStack_38 = UI_Transaction_Item_Type7_ctor
                                ((long)CONCAT22(iVar11,pvVar3),0x1,
                                 (long)CONCAT22(iVar10,pcVar4),*(long *)(iVar8 + 0x4));
          uVar5 = (undefined2)uStack_38;
        }
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x1e) + 0x4);
        (*(code *)*puVar1)(uVar13,(int)*(undefined4 *)((int)this + 0x1e),
                           (int)((ulong)*(undefined4 *)((int)this + 0x1e) >> 0x10),uVar5
                           ,uStack_38._2_2_);
        bVar2 = true;
      }
    }
  }
  iVar8 = 0x0;
  if (!bVar2)
  {
    pcVar4 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x43d);
    uVar13 = 0x1000;
    iVar9 = iVar8;
    pvVar3 = allocate_memory(CONCAT22(pcVar4,0x12));
    if (iVar8 == 0x0 && pvVar3 == NULL)
    {
      uVar5 = 0x0;
      uVar12 = 0x0;
    }
    else
    {
      uVar13 = 0x1018;
      lVar16 = UI_Transaction_Item_Type7_ctor
                         ((long)CONCAT22(iVar8,pvVar3),0x0,(long)CONCAT22(iVar9,pcVar4),
                          0x0);
      uVar12 = (undefined2)((ulong)lVar16 >> 0x10);
      uVar5 = (undefined2)lVar16;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x1e) + 0x4)
    ;
    (*(code *)*puVar1)(uVar13,(int)*(undefined4 *)((int)this + 0x1e),
                       (int)((ulong)*(undefined4 *)((int)this + 0x1e) >> 0x10),uVar5,
                       uVar12,pcVar4,iVar9,uVar5,uVar12);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// References global management pointers in segment 1050: 06E0, 14CC.
// Indirect calls via multiple vtable offsets: 0x0, 4, 0x10, 0x1C, 0x24, 0x28.
// Manages resource lists for planets and entities.

void __stdcall16far UI_Populate_Planet_Resource_List_Logic(void *this,void *planet)
{
  undefined2 *puVar1;
  void *pvVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  uint extraout_DX;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  undefined2 uVar11;
  long lVar12;
  undefined4 in_stack_00000008;
  undefined2 in_stack_0000ffca;
  int iVar13;
  undefined1 local_2e [0x8];
  int iStack_26;
  u16 uStack_24;
  void *pvStack_22;
  ulong uStack_1e;
  undefined4 uStack_1a;
  astruct_491 *paStack_12;
  uint uStack_10;
  undefined4 uStack_e;
  undefined2 uStack_a;
  void *pvStack_8;
  int iStack_4;
  
  paStack_12 = (astruct_491 *)*(int *)((int)this + 0x1a);
  uVar6 = *(uint *)((int)this + 0x1c);
  uStack_e = (undefined4 *)CONCAT22(uVar6,paStack_12);
  uStack_10 = uVar6;
  if (uVar6 != 0x0 || paStack_12 != NULL)
  {
    (*(code *)*(undefined2 *)paStack_12->field0_0x0)();
    uVar6 = extraout_DX;
  }
  paStack_12 = allocate_memory(CONCAT22(in_stack_0000ffca,0xc));
  uVar7 = uVar6 | (uint)paStack_12;
  uStack_10 = uVar6;
  if (uVar7 == 0x0)
  {
    pvVar2 = NULL;
    uVar7 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(paStack_12,uVar6);
  }
  *(undefined2 *)((int)this + 0x1a) = pvVar2;
  *(uint *)((int)this + 0x1c) = uVar7;
  iStack_4 = 0x0;
  uVar11 = (undefined2)((ulong)in_stack_00000008 >> 0x10);
  pvStack_8 = (void *)*(undefined4 *)((int)in_stack_00000008 + 0x210);
  iVar10 = *(int *)((int)in_stack_00000008 + 0x212);
  if (iVar10 != 0x0 || (void *)pvStack_8 != NULL)
  {
    uStack_1a = *(ulong *)((int)(void *)pvStack_8 + 0xa);
    for (uStack_1e = 0x0; iVar10 = uStack_1a._2_2_, uStack_1e < uStack_1a;
        uStack_1e += 0x1)
    {
      pvStack_22 = UI_Managed_List_Get_Item_at_Index_1312(pvStack_8,uStack_1e);
      if ((int)((ulong)pvStack_22 >> 0x10) != 0x0 || (void *)pvStack_22 != NULL)
      {
        for (uStack_24 = 0x1; (int)uStack_24 < 0x15; uStack_24 += 0x1)
        {
          iStack_26 = UI_Build_Item_TypeD88E_Count_Free_Slots_by_ID_ce2e
                                ((int)(void *)pvStack_22,
                                 (u16)((ulong)pvStack_22 >> 0x10),uStack_24);
          if (iStack_26 != 0x0)
          {
            init_long_pair(local_2e,*(long *)((int)this + 0x1a));
            do
            {
              lVar12 = get_next_list_item(local_2e);
              uVar9 = (uint)((ulong)lVar12 >> 0x10);
              uVar6 = (uint)lVar12;
              uVar7 = uVar9 | uVar6;
              if (uVar7 == 0x0) break;
            } while (*(u16 *)(uVar6 + 0xe) != uStack_24);
            if (lVar12 == 0x0)
            {
              pcVar3 = Lookup_Entity_Category_Name_by_ID_Logic_c222(uStack_24);
              pcVar3 = strdup_allocate(pcVar3);
              uVar11 = 0x1000;
              uVar6 = uVar7;
              puVar4 = allocate_memory(CONCAT22(pcVar3,0x10));
              uStack_e = (undefined4 *)CONCAT22(uVar7,puVar4);
              if (uVar7 == 0x0 && puVar4 == NULL)
              {
                uVar5 = 0x0;
                uVar8 = 0x0;
              }
              else
              {
                uVar11 = 0x1018;
                lVar12 = UI_Transaction_Item_Type5_ctor
                                   ((long)uStack_e,(long)iStack_26,
                                    (long)CONCAT22(uVar6,pcVar3),uStack_24);
                uVar8 = (undefined2)((ulong)lVar12 >> 0x10);
                uVar5 = (undefined2)lVar12;
              }
              puVar1 = (undefined2 *)
                       ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x1a) + 0x4);
              (*(code *)*puVar1)(uVar11,(int)*(undefined4 *)((int)this + 0x1a),
                                 (int)((ulong)*(undefined4 *)((int)this + 0x1a) >> 0x10)
                                 ,uVar5,uVar8,pcVar3,uVar6,uVar5);
            }
            else
            {
              *(long *)(uVar6 + 0x8) = *(long *)(uVar6 + 0x8) + (long)iStack_26;
            }
            iStack_4 = 0x1;
          }
        }
      }
    }
  }
  uStack_a = 0x0;
  if (iStack_4 == 0x0)
  {
    pcVar3 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x43f);
    uVar11 = 0x1000;
    iVar13 = iVar10;
    paStack_12 = allocate_memory(CONCAT22(pcVar3,0x10));
    uStack_10 = iVar10;
    if (iVar10 == 0x0 && paStack_12 == NULL)
    {
      uVar5 = 0x0;
      uVar8 = 0x0;
    }
    else
    {
      uVar11 = 0x1018;
      lVar12 = UI_Transaction_Item_Type5_ctor
                         ((long)CONCAT22(iVar10,paStack_12),0x0,
                          (long)CONCAT22(iVar13,pcVar3),0x0);
      uVar8 = (undefined2)((ulong)lVar12 >> 0x10);
      uVar5 = (undefined2)lVar12;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x1a) + 0x4)
    ;
    (*(code *)*puVar1)(uVar11,(int)*(undefined4 *)((int)this + 0x1a),
                       (int)((ulong)*(undefined4 *)((int)this + 0x1a) >> 0x10),uVar5,
                       uVar8,pcVar3,iVar13,uVar5,uVar8);
  }
  return;
}
