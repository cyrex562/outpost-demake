/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 31/54
 * Original lines (combined): 91604-96079
 * Boundaries: top-level declarations/definitions only
 */




// Initializes a large table of 3D coordinate offsets (at 0x1050:65E6) used for mapping
// neighbor tiles and entity proximity. Maps over 60 directions/offsets.

u32 * __cdecl16far Simulator_Context_Initialize_Coordinate_Offsets_3b28(void)
{
  void *pvVar1;
  u16 in_DX;
  u16 uVar2;
  int unaff_SS;
  void *pvVar3;
  u32 *puVar4;
  undefined1 local_8 [0x6];
  
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x3c);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105065e6,0x115,0x15b,(u16)pvVar1,in_DX);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105065f0,0x116,0x15c,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x23);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105065fa,0x117,0x15d,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506604,0x118,0x15e,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xf);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050660e,0x119,0x15f,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x28);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506618,0x11a,0x160,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x14);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506622,0x11b,0x161,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x14);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050662c,0x11c,0x162,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506636,0x11d,0x163,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506640,0x11e,0x164,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x32);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050664a,0x11f,0x165,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506654,0x120,0x166,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x19);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050665e,0x121,0x167,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506668,0x122,0x168,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x28);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506672,0x123,0x169,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xf);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050667c,0x124,0x16a,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x14);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506686,0x125,0x16b,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506690,0x126,0x16c,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x2d);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050669a,0x127,0x16d,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xa);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066a4,0x128,0x16e,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066ae,0x129,0x16f,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066b8,0x12a,0x170,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x32);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066c2,0x12b,0x171,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x37);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066cc,0x12c,0x172,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066d6,0x12d,0x173,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x19);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066e0,0x12e,0x174,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x32);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066ea,0x12f,0x175,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x3c);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066f4,0x130,0x176,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x3c);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066fe,0x131,0x177,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506708,0x132,0x178,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506712,0x133,0x179,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050671c,0x134,0x17a,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x23);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506726,0x135,0x17b,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506730,0x136,0x17c,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xf);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050673a,0x137,0x17d,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x2d);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506744,0x138,0x17e,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050674e,0x139,0x17f,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x2d);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506758,0x13a,0x180,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x19);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506762,0x13b,0x181,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050676c,0x13c,0x182,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506776,0x13d,0x183,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x32);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506780,0x13e,0x184,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xf);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050678a,0x13f,0x185,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506794,0x140,0x186,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050679e,0x141,0x187,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x64);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067a8,0x142,0x188,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x32);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067b2,0x143,0x189,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x64);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067bc,0x144,0x18a,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067c6,0x145,0x18b,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x2d);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067d0,0x146,0x18c,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x32);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067da,0x147,0x18d,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xf);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067e4,0x148,0x18e,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067ee,0x149,0x18f,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067f8,0x14a,0x190,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506802,0x14b,0x191,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xa);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050680c,0x14c,0x192,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506816,0x14d,0x193,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506820,0x14e,0x194,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050682a,0x14f,0x195,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xf);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506834,0x150,0x196,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050683e,0x151,0x197,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x23);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506848,0x152,0x198,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506852,0x153,0x199,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x2d);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050685c,0x154,0x19a,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x19);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506866,0x155,0x19b,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xa);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506870,0x156,0x19c,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050687a,0x157,0x19d,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506884,0x158,0x19e,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x14);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050688e,0x159,0x19f,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  puVar4 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506898,0x15a,0x1a0,(u16)pvVar1,uVar2);
  return (u32 *)puVar4;
}



undefined4 __stdcall16far UI_Struct_Zero_Init_A4_51f0(undefined4 param_1)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0xa4) = 0x0;
  *(undefined2 *)(iVar1 + 0xa6) = 0x0;
  *(undefined2 *)(iVar1 + 0xa8) = 0x0;
  *(undefined2 *)(iVar1 + 0xaa) = 0x0;
  *(undefined2 *)(iVar1 + 0xac) = 0x0;
  return param_1;
}



// Constructor for a UI production item. Initializes base class, sets vtable to 0x5BD0,
// and zero-fills its internal metadata structure.

u16 * __stdcall16far UI_Production_Item_ctor_init_560e(void *this_ptr)
{
  astruct_273 *uVar1;
  undefined2 uVar2;
  
  UI_Window_with_List_ctor_init_17ce(this_ptr,(void *)0x64,(void *)0x1f4);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_273 *)this_ptr;
  uVar1->field15_0x10 = 0x0;
  zero_init_struct_6bytes(&uVar1->field_0x14);
  uVar1->field22_0x1a = 0x0;
  uVar1->field23_0x1c = 0x0;
  *(char **)this_ptr = (char *)s_procLo_1050_5bd0;
  uVar1->field2_0x2 = 0x1030;
  return (u16 *)uVar1;
}



// Parameterized constructor for a UI production item.

u16 * __stdcall16far UI_Production_Item_ctor_with_Params_565a(void *this_ptr,void *arg2)
{
  astruct_272 *uVar1;
  undefined2 uVar2;
  
  UI_Window_with_List_ctor_with_Params_183c
            (this_ptr,(void *)0x64,(void *)0x1f4,(void *)0x3000000,arg2);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_272 *)this_ptr;
  uVar1->field15_0x10 = 0x0;
  zero_init_struct_6bytes(&uVar1->field_0x14);
  uVar1->field22_0x1a = 0x0;
  uVar1->field23_0x1c = 0x0;
  *(char **)this_ptr = (char *)s_procLo_1050_5bd0;
  uVar1->field2_0x2 = 0x1030;
  return (u16 *)uVar1;
}



// Internal destructor for UI production items. Cleans up its internal sub-object and
// reverts vtables.

void __stdcall16far UI_Production_Item_dtor_Internal_56b0(void *this_ptr)
{
  void *ptr;
  astruct_271 *uVar3;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_271 *)this_ptr;
  *(char **)this_ptr = (char *)s_procLo_1050_5bd0;
  uVar3->field2_0x2 = 0x1030;
  ptr = (void *)*(void **)&uVar3->field_0x10;
  if (uVar3->field17_0x12 != 0x0 || ptr != NULL)
  {
    Simulator_Entity_Cleanup_Internal_84d0((void *)CONCAT22(uVar3->field17_0x12,ptr));
    free_if_not_null(ptr);
  }
  UI_Window_with_List_dtor_Internal_18b2(this_ptr);
  return;
}



// Retrieves two 4-byte fields (0xE, 0x12) from the production item's linked internal
// object.

void __stdcall16far
UI_Production_Item_Get_Object_Fields_5a52
          (void *this_ptr,void *out_field2,void *out_field1)
{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x10);
  *(undefined4 *)out_field1 = *(undefined4 *)((int)uVar1 + 0xe);
  uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x10);
  *(undefined4 *)out_field2 = *(undefined4 *)((int)uVar1 + 0x12);
  return;
}



// Retrieves an internal identifier (field at offset 4 + 0xB) for the production item.

int __stdcall16far UI_Production_Item_Get_ID_Logic_5b00(void *this_ptr)
{
  return *(int *)((int)(void *)this_ptr + 0x4) + 0xb;
}



// Retrieves the 2D coordinates (offsets 0x1A, 0x1C) for the production item.

void __stdcall16far
UI_Production_Item_Get_Coords_Logic_5b1c(void *this_ptr,void *out_y,void *out_x)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)out_x = *(undefined2 *)((int)(void *)this_ptr + 0x1a);
  *(undefined2 *)out_y = *(undefined2 *)((int)(void *)this_ptr + 0x1c);
  return;
}



// Scalar deleting destructor for UI production items.

void * __stdcall16far
UI_Production_Item_dtor_Scalar_Deleting_5baa(void *this_ptr,byte flags)
{
  UI_Production_Item_dtor_Internal_56b0(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// An alternative constructor for UI production item Type 0x613E. Equivalent to
// 1030:5D3C.

u16 * __stdcall16far
UI_Production_Item_Type_613E_ctor_613E_Alternative_5d0a(void *this_ptr)
{
  u16 *puVar1;
  undefined2 uVar2;
  
  UI_Window_with_List_ctor_init_17ce(this_ptr,(void *)0x1,(void *)0x4);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  puVar1 = (u16 *)this_ptr;
  (puVar1 + 0x8)[0x0] = 0x0;
  (puVar1 + 0x8)[0x1] = 0x0;
  *(undefined2 *)this_ptr = 0x613e;
  puVar1[0x1] = 0x1030;
  return puVar1;
}



// Constructor for UI production item Type 0x613E. Inherits from Type 0x183C and sets
// vtable to 0x613E.

void * __stdcall16far
UI_Production_Item_Type_613E_ctor_init_5d3c(void *this_ptr,void *arg2)
{
  undefined2 uVar1;
  
  UI_Window_with_List_ctor_with_Params_183c
            (this_ptr,(void *)0x1,(void *)0x4,(void *)0x1000000,arg2);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined4 *)((int)(void *)this_ptr + 0x10) = 0x0;
  *(undefined2 *)this_ptr = 0x613e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1030;
  return this_ptr;
}



// Internal destructor for UI production item 0x613E. Cleans up its internal sub-object
// and reverts vtables.

void __stdcall16far UI_Production_Item_Type_613E_dtor_Internal_5d78(void *this_ptr)
{
  void *ptr;
  astruct_267 *uVar3;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_267 *)this_ptr;
  *(undefined2 *)this_ptr = 0x613e;
  uVar3->field2_0x2 = 0x1030;
  ptr = (void *)*(void **)&uVar3->field_0x10;
  if (uVar3->field17_0x12 != 0x0 || ptr != NULL)
  {
    Helper_Free_Pointer_at_Offset0_8480((void *)CONCAT22(uVar3->field17_0x12,ptr));
    free_if_not_null(ptr);
  }
  UI_Window_with_List_dtor_Internal_18b2(this_ptr);
  return;
}



// Sets a far pointer to an internal object (offset 0x10) for the UI component.

void __stdcall16far UI_Component_Set_Internal_Object_Ptr_5fe2(u32 this_ptr,u32 obj_ptr)
{
  *(u32 *)((int)this_ptr + 0x10) = obj_ptr;
  return;
}



// Scalar deleting destructor for UI production items.

u16 * __stdcall16far
UI_Production_Item_dtor_Scalar_Deleting_6118(void *this_ptr,byte flags)
{
  UI_Production_Item_Type_613E_dtor_Internal_5d78(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)this_ptr);
  }
  return (u16 *)this_ptr;
}



// Constructor for a UI sub-component using vtable 0x8114. Initializes base window and
// zero-fills a large internal state structure (offset 0xC).

void * __stdcall16far UI_SubComponent_Type8114_ctor_init_67cc(void *this_ptr)
{
  astruct_263 *uVar1;
  undefined2 uVar2;
  
  UI_Window_Base_ctor_init_1628(this_ptr);
  uVar1 = (astruct_263 *)this_ptr;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_263 *)&uVar1->field_0xc;
  zero_init_struct_6bytes(uVar1);
  uVar1->field17_0x12 = 0x0;
  uVar1->field18_0x14 = 0x0;
  uVar1->field19_0x16 = 0x0;
  uVar1->field20_0x1a = 0x0;
  uVar1->field21_0x1e = 0x0;
  uVar1->field22_0x22 = 0x0;
  uVar1->field23_0x26 = 0x0;
  uVar1->field24_0x2a = 0x0;
  uVar1->field25_0x2e = 0x0;
  uVar1->field26_0x32 = 0x0;
  uVar1->field27_0x34 = 0x0;
  uVar1->field29_0x38 = 0x0;
  uVar1->field28_0x36 = 0x0;
  uVar1->field31_0x3c = 0x0;
  uVar1->field30_0x3a = 0x0;
  uVar1->field33_0x40 = 0x0;
  uVar1->field32_0x3e = 0x0;
  *(undefined2 *)this_ptr = 0x8114;
  uVar1->field2_0x2 = 0x1030;
  return this_ptr;
}



// Parameterized constructor for UI sub-component 0x8114. Sets up initial object links
// and state flags.

void * __stdcall16far
UI_SubComponent_Type8114_ctor_with_Params_684c
          (void *this_ptr,u16 arg1,u16 arg2,u16 arg3,u16 arg4,void *arg5)
{
  astruct_262 *uVar1;
  undefined2 uVar2;
  
  UI_Window_Base_ctor_with_Params_165e(this_ptr,0x5000000,arg5);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_262 *)this_ptr;
  uVar1->field11_0xc = *(u32 *)arg1;
  uVar1->field12_0x10 = *(u16 *)(arg1 + 0x4);
  uVar1->field13_0x12 = arg3;
  uVar1->field14_0x14 = arg3;
  uVar1->field15_0x16 = 0x0;
  uVar1->field16_0x1a = 0x0;
  uVar1->field17_0x1e = 0x0;
  uVar1->field18_0x22 = 0x0;
  uVar1->field19_0x26 = 0x0;
  uVar1->field20_0x2a = 0x0;
  uVar1->field21_0x2e = 0x0;
  uVar1->field22_0x32 = 0x0;
  uVar1->field23_0x34 = 0x0;
  uVar1->field24_0x36 = 0x0;
  uVar1->field25_0x3a = 0x0;
  uVar1->field26_0x3e = 0x0;
  *(undefined2 *)this_ptr = 0x8114;
  uVar1->field2_0x2 = 0x1030;
  return this_ptr;
}



// Internal destructor for UI sub-component 0x8114. Exhausitively cleans up multiple
// managed item lists, internal bitmap objects, and reverts vtables.

void __stdcall16far UI_SubComponent_Type8114_dtor_Internal_68dc(void *this_ptr)
{
  u32 *puVar1;
  int iVar2;
  void *pvVar3;
  astruct_261 *uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_261 *)this_ptr;
  *(undefined2 *)this_ptr = 0x8114;
  uVar4->field2_0x2 = 0x1030;
  pvVar3 = (void *)*(void **)&uVar4->field_0x22;
  if (uVar4->field33_0x24 != 0x0 || pvVar3 != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic((void *)CONCAT22(uVar4->field33_0x24,pvVar3));
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  pvVar3 = (void *)uVar4->field34_0x26;
  if (uVar4->field35_0x28 != 0x0 || pvVar3 != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic((void *)CONCAT22(uVar4->field35_0x28,pvVar3));
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  puVar1 = uVar4->field29_0x1e;
  iVar2 = uVar4->field30_0x20;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar4->field48_0x36;
  iVar2 = uVar4->field49_0x38;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar4->field50_0x3a;
  iVar2 = uVar4->field51_0x3c;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar4->field52_0x3e;
  iVar2 = uVar4->field53_0x40;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  UI_Window_Base_dtor_Internal_16b2(this_ptr);
  return;
}



// Caps an internal value (offset 0x34) based on a primary limit (offset 0x32).

void __stdcall16far UI_Component_Set_Cap_Value_Logic_6c4c(void *this_ptr,int value)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = *(int *)((int)(void *)this_ptr + 0x32);
  if (value < iVar1)
  {
    iVar1 = value;
  }
  *(int *)((int)(void *)this_ptr + 0x34) = iVar1;
  return;
}



// Retrieves a pointer to a vector tracker or collection object stored at offset 0x36.

void * __stdcall16far UI_Component_Get_Vector_Tracker_Ptr_6d4e(void *this_ptr)
{
  void *pvVar1;
  undefined2 in_DX;
  undefined2 uVar2;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_6 = NULL;
  uStack_4 = 0x0;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + 0x36) != 0x0)
  {
    pvVar1 = (void *)*(undefined4 *)((int)(void *)this_ptr + 0x36);
    uStack_6 = Collection_Build_Vector_Tracker_Logic
                         ((void *)pvVar1,(u16)((ulong)pvVar1 >> 0x10));
    uStack_4 = in_DX;
  }
  return (void *)CONCAT22(uStack_4,uStack_6);
}



// Updates the internal vector tracker pointer (offset 0x36), ensuring the previous
// object is virtually destroyed first.

void __stdcall16far
UI_Component_Set_Vector_Tracker_Ptr_6d80(void *this_ptr,void *new_ptr)
{
  int iVar1;
  undefined2 *puVar2;
  astruct_253 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_253 *)this_ptr;
                // WARNING: Load size is inaccurate
  iVar1 = *(int *)((int)&uVar2->field54_0x36 + 0x2);
  if (iVar1 != 0x0 || uVar2->field54_0x36 != NULL)
  {
    puVar2 = (undefined2 *)(undefined2 *)*uVar2->field54_0x36;
    (*(code *)*puVar2)();
  }
  uVar2->field54_0x36 = new_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a specialized value (likely health or production) from the entity's
// internal object at offset 0x1A, provided it belongs to grouping 0x1E.

int __stdcall16far UI_Component_Get_Entity_Value_at_1A_Logic_6ddc(void *this_ptr)
{
  u16 category;
  int iVar1;
  
  category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),category);
  if (iVar1 != 0x0)
  {
    iVar1 = UI_Build_Item_TypeD88E_Count_Occupied_Slots_d0c6
                      ((void *)*(undefined4 *)((int)(void *)this_ptr + 0x1a));
    return iVar1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a specialized status or health value for certain entity types (group 0x1E)
// by calling 1030:D102 on the internal object.

int __stdcall16far UI_Component_Get_Entity_Special_Status_Logic_6e14(void *this_ptr)
{
  undefined4 uVar1;
  u16 category;
  int iVar2;
  
  category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
  iVar2 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),category);
  if (iVar2 != 0x0)
  {
    uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x1a);
    iVar2 = UI_Build_Item_TypeD88E_Count_Active_SubItems_d102
                      ((int)uVar1,(u16)((ulong)uVar1 >> 0x10));
    return iVar2;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Sums the active sub-values from the entity's internal list if it belongs to grouping
// category 4.

void * __stdcall16far UI_Component_Sum_Active_SubValues_Group4_6f5a(void *this_ptr)
{
  u16 category;
  int iVar1;
  void *uVar3;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_6 = NULL;
  uVar3._2_2_ = 0x0;
  category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),category);
  if (iVar1 != 0x0)
  {
    uVar3 = UI_Item_List_Sum_Active_Values_Logic_6302
                      ((void *)*(undefined4 *)((int)(void *)this_ptr + 0x1a));
    uVar3._2_2_ = (undefined2)((ulong)uVar3 >> 0x10);
    uStack_6 = (void *)uVar3;
  }
  return (void *)CONCAT22(uVar3._2_2_,uStack_6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates the aggregate sum of 32-bit values from the managed list stored at offset
// 0x22, specifically for entities in group 3 and active state 5.

long __stdcall16far UI_Component_Sum_Entity_Values_from_List_22_7176(void *this_ptr)
{
  astruct_244 *uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  long local_1a;
  int local_16 [0x2];
  uint uStack_12;
  uint uStack_e;
  int iStack_a;
  int iStack_8;
  long lStack_6;
  
  lStack_6 = 0x0;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_244 *)this_ptr;
  if (uVar1->field31_0x22 == NULL)
  {
    return 0x0;
  }
  if (uVar1->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  iStack_8 = *(int *)((int)uVar1->field26_0x1a + 0xc);
  iStack_a = search_array_for_value
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_8);
  if ((iStack_a != 0x0) && (*(int *)((int)uVar1->field26_0x1a + 0x12) == 0x5))
  {
    uStack_e = (uint)((u32 *)uVar1->field31_0x22)[0x1];
    for (uStack_12 = 0x0; uStack_12 < uStack_e; uStack_12 += 0x1)
    {
      UI_Item_List_Get_Item_at_Index_Logic
                (uVar1->field31_0x22,(long *)CONCAT22(unaff_SS,&local_1a),
                 (int *)CONCAT22(unaff_SS,local_16),uStack_12);
      if (0x0 < local_16[0x0])
      {
        lStack_6 += local_1a;
      }
    }
  }
  return lStack_6;
}



// Performs a search within the managed list at offset 0x22 to find a specific item.

void * __stdcall16far
UI_Component_Find_Item_in_List_22_Logic_7c28(void *this_ptr,u16 key)
{
  undefined2 uVar1;
  void *pvVar2;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + 0x22) == 0x0)
  {
    return NULL;
  }
  pvVar2 = UI_Item_List_Find_Item_FarPtr_Logic
                     (*(undefined4 *)((int)(void *)this_ptr + 0x22),key);
  return pvVar2;
}
