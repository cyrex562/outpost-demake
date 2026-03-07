/*
 * Source: outpost.c
 * Chunk: 13/117
 * Original lines: 13526-14701
 * Boundaries: top-level declarations/definitions only
 */




void __stdcall16far copy_struct_6bytes(void *dest,void *src)
{
  undefined2 uVar1;
  undefined2 *in_stack_00000008;
  
                // Copies a 6-byte structure (3 words) from param_2 to far pointer
                // param_1.
  *_dest = *in_stack_00000008;
  uVar1 = (undefined2)((ulong)in_stack_00000008 >> 0x10);
  *(undefined2 *)((int)dest + 0x2) = ((undefined2 *)in_stack_00000008)[0x1];
  *(undefined2 *)((int)dest + 0x4) = ((undefined2 *)in_stack_00000008)[0x2];
  return;
}



// Targeted Scan Finding: Vtable
// Initializes Bitmap_Object vtable to 1008:48DE.
// Performs indirect call through [in_stack_00000008 + 8].

void * __stdcall16far Bitmap_Object_ctor_from_other(void *this,void *other)
{
  undefined2 *puVar1;
  undefined4 *in_stack_00000008;
  
                // Will apply prototype: void __cdecl16near
                // inferred_transform_3f92_medconf(void);
  Base_Graphic_Object_ctor(this);
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x10) = 0x0;
  *(undefined4 *)((int)this + 0x14) = 0x0;
  *(undefined4 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)((int)this + 0x1c) = 0x0;
  *_this = 0x48de;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (in_stack_00000008 == NULL)
  {
    return this;
  }
  puVar1 = (undefined2 *)((int)*in_stack_00000008 + 0x8);
  (*(code *)*puVar1)();
  Bitmap_Object_Transfer_Resource_Logic(this,other);
  Bitmap_Object_Initialize_Metadata(this);
  Bitmap_Object_Initialize_Palette(this);
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes Bitmap_Object vtable to 1008:48DE.

void * __stdcall16far Bitmap_Object_ctor_basic(void *this)
{
  undefined2 in_stack_00000006;
  
  Base_Graphic_Object_ctor(this);
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x10) = 0x0;
  *(undefined4 *)((int)this + 0x14) = 0x0;
  *(undefined4 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)((int)this + 0x1c) = 0x0;
  *_this = 0x48de;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes Bitmap_Object vtable to 1008:48DE.
// References global heap context pointers in segment 1050:5f2c.
// Calculates 8-bit DIB size and initializes BITMAPINFOHEADER at offset 0x10.

void * __stdcall16far
Bitmap_Object_ctor_with_alloc(void *this,void *palette_src,int height,int width)
{
  int iVar1;
  long lVar2;
  void *pvVar3;
  int in_stack_0000000c;
  int in_stack_0000000e;
  undefined4 uStack_a;
  
                // Will apply prototype: void __cdecl16near
                // inferred_builder_405c_medconf(void);
  Base_Graphic_Object_ctor(this);
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x10) = 0x0;
  *(undefined4 *)((int)this + 0x14) = 0x0;
  *(undefined4 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)((int)this + 0x1c) = 0x0;
  *_this = 0x48de;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  iVar1 = in_stack_0000000e * 0x8 + 0x1f;
  iVar1 = ((int)(iVar1 + (iVar1 >> 0xf & 0x1fU)) >> 0x5) << 0x2;
  uStack_a = (long)in_stack_0000000c;
  lVar2 = (long)iVar1 * (long)in_stack_0000000c + 0x436;
  pvVar3 = heap_alloc_with_flags(0x1,lVar2,_g_AllocatedBlock_Offset);
  *(undefined2 *)((int)this + 0x6) = (int)lVar2;
  *(undefined2 *)((int)this + 0x8) = pvVar3;
  Bitmap_Object_Initialize_Metadata(this);
  *(int *)((int)this + 0x18) = iVar1;
  *(int *)((int)this + 0x1a) = iVar1 >> 0xf;
  *(undefined4 *)*(undefined4 *)((int)this + 0x10) = 0x28;
  *(long *)((int)*(undefined4 *)((int)this + 0x10) + 0x4) = (long)in_stack_0000000e;
  *(long *)((int)*(undefined4 *)((int)this + 0x10) + 0x8) = uStack_a;
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0x10) + 0xc) = 0x1;
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0x10) + 0xe) = 0x8;
  *(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x10) = 0x0;
  *(long *)((int)*(undefined4 *)((int)this + 0x10) + 0x14) =
       *(long *)((int)this + 0x18) * uStack_a;
  *(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x20) = 0x100;
  *(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x24) = 0x100;
  Bitmap_Object_Initialize_Palette(this);
  Palette_Object_Copy_From_Other_Logic
            ((void *)(void *)*(undefined4 *)((int)this + 0xa),
             (void *)((ulong)*(undefined4 *)((int)this + 0xa) >> 0x10));
  return this;
}



// Targeted Scan Finding: Vtable
// Reverts vtable to 1008:48DE and then 1008:389A during object destruction.
// Performs indirect call through [this + 10] at offset 0.

void __stdcall16far Bitmap_Object_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
                // Will apply prototype: void __cdecl16near
                // inferred_validator_41bc_medconf(void);
  *_this = 0x48de;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  if (*(long *)((int)this + 0x6) != 0x0)
  {
    heap_free_core((void *)(void *)*(undefined4 *)((int)this + 0x6));
  }
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Transfers a bitmap resource or memory block from one object to another, clearing the
// source object's reference.

void __stdcall16far Bitmap_Object_Transfer_Resource_Logic(void *this,void *src)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 in_stack_00000008;
  
  uVar3 = (undefined2)((ulong)in_stack_00000008 >> 0x10);
  iVar2 = (int)in_stack_00000008;
  *(undefined4 *)((int)this + 0x6) = *(undefined4 *)(iVar2 + 0x1a);
  *(undefined4 *)(iVar2 + 0x1a) = 0x0;
  if (*(int *)(iVar2 + 0x6) != 0x0 || (undefined4 *)*(int *)(iVar2 + 0x4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)(iVar2 + 0x4);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)(iVar2 + 0x4) = 0x0;
  *(undefined4 *)(iVar2 + 0xe) = 0x0;
  *(undefined4 *)(iVar2 + 0x12) = 0x0;
  *(undefined4 *)(iVar2 + 0x16) = 0x0;
  *(undefined2 *)(iVar2 + 0x1e) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global heap context pointers in segment 1050:5f2c.
// Creates a deep copy of Bitmap_Object data using far pointer memory copy (HMemCpy).

void * __stdcall16far Bitmap_Object_Clone_Logic(void *this)
{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000ffee;
  undefined4 uStack_a;
  
  if (*(long *)((int)this + 0x6) != 0x0)
  {
    pvVar4 = (void *)heap_get_block_size_far
                               ((void *)(void *)*(undefined4 *)((int)this + 0x6));
    pvVar1 = (void *)pvVar4;
    pvVar2 = heap_alloc_with_flags();
    uStack_a = (void *)CONCAT22(pvVar2,pvVar1);
    uVar3 = (uint)pvVar2 | (uint)pvVar1;
    if (uVar3 != 0x0)
    {
      HMemCpy((int32_t)(void *)pvVar4,(void *)*(undefined4 *)((int)this + 0x6),
              (void *)CONCAT22(pvVar2,pvVar1));
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffee,0x1e));
      uVar3 |= (uint)pvVar1;
      if (uVar3 == 0x0)
      {
        pvVar1 = NULL;
        uVar3 = 0x0;
      }
      else
      {
        pvVar1 = Bitmap_Object_ctor_basic(pvVar1);
      }
      *(undefined4 *)((int)pvVar1 + 0x6) = uStack_a;
      Bitmap_Object_Initialize_Metadata(pvVar1);
      Bitmap_Object_Initialize_Palette(pvVar1);
      *(undefined2 *)((int)pvVar1 + 0x1c) = 0x1;
      return pvVar1;
    }
  }
  return NULL;
}



// Clears the entire bitmap by filling each scanline with the specified color index
// (`param_2`).

void __stdcall16far Bitmap_Object_Clear_with_Color_Logic(void *this,byte color)
{
  bool bVar1;
  void *dest;
  int value;
  int y;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  undefined4 uStack_6;
  
  _this = CONCAT13(in_stack_00000007,CONCAT12(color,this));
  y = (int)((ulong)_this >> 0x10);
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(int *)((int)this + 0x8) == 0x0 && *(int *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(int *)((int)this + 0xc) == 0x0 && *(int *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (bVar1)
  {
    if (*(int *)((int)this + 0x16) == 0x0 && *(int *)((int)this + 0x14) == 0x0)
    {
      return;
    }
    uStack_6 = 0x0;
    while( true )
    {
      if (*(long *)((int)*(undefined4 *)((int)this + 0x10) + 0x8) <= uStack_6) break;
      value = uStack_6._2_2_;
      dest = Bitmap_Object_Get_Pixel_Address(this,y,(int)uStack_6);
      memset_far(dest,value,(uint)in_stack_00000008);
      uStack_6 += 0x1;
    }
  }
  return;
}



void * __stdcall16far Bitmap_Object_Get_Internal_Buffer_Ptr_maybe(void *this)
{
  bool bVar1;
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(long *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (!bVar1)
  {
    return NULL;
  }
  return (void *)*(undefined2 *)((int)this + 0x14);
}



u32 __stdcall16far Bitmap_Object_Ensure_Initialized(void *param_1)
{
  bool bVar1;
  void *this;
  undefined2 uVar2;
  u16 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  this = (void *)param_1;
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(long *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (!bVar1)
  {
    return 0x0;
  }
  return CONCAT22(*(undefined2 *)((int)this + 0xc),*(undefined2 *)((int)this + 0xa));
}



// Blits a source bitmap onto the current bitmap with transparency handling. Pixels with
// value 0xFF (-1) are skipped. Iterates through scanlines and manages 16-bit segment
// boundaries.

void __stdcall16far
Bitmap_Object_Blit_Transparent_Logic(void *this,void *pos,void *src_bitmap)
{
  int iVar1;
  int iVar2;
  int x;
  void *pvVar3;
  char *pcVar4;
  undefined2 in_DX;
  int iVar5;
  int *in_stack_0000000a;
  void *in_stack_0000000c;
  int iStack_1a;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_6 [0x2];
  
  unpack_word_pair(src_bitmap,in_stack_0000000a,local_6);
  pvVar3 = get_with_lazy_init((void *)in_stack_0000000c);
  iVar1 = *(int *)((int)pvVar3 + 0x4);
  iVar2 = *(int *)((int)pvVar3 + 0x8);
  for (iStack_10 = 0x0; x = local_6[0x0], iStack_10 < iVar2; iStack_10 += 0x1)
  {
    iVar5 = local_6[0x0] >> 0xf;
    local_6[0x0] = local_6[0x0] + 0x1;
    pcVar4 = Bitmap_Object_Get_Pixel_Address(this,(int)pos,x);
    uStack_14 = (char *)CONCAT22(iVar5,pcVar4);
    pcVar4 = Bitmap_Object_Get_Pixel_Address
                       ((void *)in_stack_0000000c,
                        (int)((ulong)in_stack_0000000c >> 0x10),iStack_10);
    uStack_18 = (char *)CONCAT22(iVar5,pcVar4);
    iStack_1a = iVar1;
    while (iStack_1a != 0x0)
    {
      if (*uStack_18 != -0x1)
      {
        *uStack_14 = *uStack_18;
      }
      uStack_18 = (char *)CONCAT22(uStack_18._2_2_ +
                                   (-(uint)((char *)0xfffe < (char *)uStack_18) & 0x6c),
                                   (char *)uStack_18 + 0x1);
      uStack_14 = (char *)CONCAT22(uStack_14._2_2_ +
                                   (-(uint)((char *)0xfffe < (char *)uStack_14) & 0x6c),
                                   (char *)uStack_14 + 0x1);
      iStack_1a = iStack_1a + -0x1;
    }
  }
  return;
}



// Calculates the memory address of a specific pixel (X, Y) within the bitmap. It
// handles the bottom-up coordinate system typical of Windows DIBs by inverting the Y
// coordinate relative to the height. Ensures the bitmap resources are initialized and
// locked before access.

void * __stdcall16far Bitmap_Object_Get_Pixel_Address(void *this,int y,int x)
{
  bool bVar1;
  int in_stack_0000000c;
  
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(long *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (!bVar1)
  {
    return NULL;
  }
  return (void *)((int)*(undefined4 *)((int)this + 0x18) *
                  (((int)*(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x8) -
                   x) + -0x1) + in_stack_0000000c + *(int *)((int)this + 0x14));
}



void __stdcall16far Bitmap_Object_Render_to_DC(void *param_1,u32 param_2,HDC16 *param_3)
{
  bool bVar1;
  void *this;
  int x_dest;
  undefined2 uVar2;
  short y_dest;
  u16 local_6;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  this = (void *)param_1;
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(int *)((int)this + 0x8) == 0x0 && *(int *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(int *)((int)this + 0xc) == 0x0 && *(int *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (!bVar1)
  {
    return;
  }
  y_dest = (short)((ulong)*(undefined4 *)((int)this + 0x10) >> 0x10);
  x_dest = (int)*(undefined4 *)((int)this + 0x10);
  SetDiBitsToDevice16(0x0,x_dest,y_dest,(short)*(undefined4 *)((int)this + 0x14),
                      (short)((ulong)*(undefined4 *)((int)this + 0x14) >> 0x10),
                      *(short *)(x_dest + 0x8),0x0,0x0,0x0,
                      (void *)*(short *)(x_dest + 0x8),
                      (void *)*(undefined2 *)(x_dest + 0x4),(ushort)param_2);
  return;
}



// Renders the bitmap object onto a destination device context (HDC) using the
// `StretchDIBits` Windows API. It automatically handles resource initialization,
// locking, and maps internal bitmap metadata to the API parameters.

void __stdcall16far Bitmap_Object_Draw_To_DC(void *this,HDC16 hdc)
{
  bool bVar1;
  int width_dst;
  short height_dst;
  
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(int *)((int)this + 0x8) == 0x0 && *(int *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(int *)((int)this + 0xc) == 0x0 && *(int *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (!bVar1)
  {
    return;
  }
  height_dst = (short)((ulong)*(undefined4 *)((int)this + 0x10) >> 0x10);
  width_dst = (int)*(undefined4 *)((int)this + 0x10);
  StretchDiBits16(0x20,0xcc,0x0,width_dst,height_dst,
                  (short)*(undefined4 *)((int)this + 0x14),
                  (short)((ulong)*(undefined4 *)((int)this + 0x14) >> 0x10),
                  *(short *)(width_dst + 0x8),*(short *)(width_dst + 0x4),NULL,NULL,
                  *(short *)(width_dst + 0x8),*(short *)(width_dst + 0x4));
  return;
}



// Selects and realizes the bitmap's internal color palette into the specified device
// context (HDC). This ensures that the bitmap is rendered with the correct colors on
// 8-bit displays. Returns the previously selected palette handle.

HPALETTE16 __stdcall16far Bitmap_Object_Select_And_Realize_Palette(void *this,HDC16 hdc)
{
  bool bVar1;
  undefined2 in_AX;
  HPALETTE16 HVar2;
  BOOL16 *in_stack_00000008;
  
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(long *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (!bVar1)
  {
    return 0x0;
  }
  Palette_Object_Create_HPALETTE_Logic((void *)(void *)*(undefined4 *)((int)this + 0xa))
  ;
  *(undefined2 *)((int)this + 0xe) = in_AX;
  HVar2 = SelectPalette16(0x0,*(HPALETTE16 *)((int)this + 0xe),*in_stack_00000008);
  *(HPALETTE16 *)((int)this + 0x4) = HVar2;
  RealizePalette16(*in_stack_00000008);
  return *(HPALETTE16 *)((int)this + 0x4);
}



void * __stdcall16far get_with_lazy_init(void *this)
{
  bool bVar1;
  undefined2 in_stack_00000006;
  
                // Lazy-initialized getter - ensures fields at offset 6 and 10 are
                // initialized, then returns long from offset 0x10-0x12. Returns 0 if
                // init fails.
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(long *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (!bVar1)
  {
    return NULL;
  }
  return (void *)*(undefined2 *)((int)this + 0x10);
}



// Internal routine that initializes bitmap metadata from a raw memory block or file
// resource. It calculates the correct offsets for the BITMAPINFOHEADER and pixel data
// (DIB bits), and determines the scanline stride (pitch) using standard 4-byte
// alignment rules.

void __stdcall16far Bitmap_Object_Initialize_Metadata(void *this)
{
  uint uVar1;
  int iVar3;
  undefined2 uVar4;
  undefined2 in_stack_00000006;
  undefined4 uStack_e;
  int iVar2;
  
  if (*(long *)((int)this + 0x6) != 0x0)
  {
    iVar3 = *(int *)((int)this + 0x8);
    iVar2 = (int)*(undefined4 *)((int)this + 0x6);
    uVar1 = iVar2 + 0xe;
    *(undefined4 *)((int)this + 0x10) =
         CONCAT22((int)((ulong)*(undefined4 *)((int)this + 0x6) >> 0x10),uVar1);
    *(int *)((int)this + 0x14) = iVar2 + 0x436;
    *(int *)((int)this + 0x16) = iVar3 + (-(uint)(0xfbd7 < uVar1) & 0x6c);
    uVar4 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x10) >> 0x10);
    iVar3 = (int)*(undefined4 *)((int)this + 0x10);
    uStack_e = (ulong)*(uint *)(iVar3 + 0xe);
    *(long *)((int)this + 0x18) =
         (long)(uStack_e * *(long *)(iVar3 + 0x4) + 0x1f) / 0x20 << 0x2;
  }
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [this + 10] during palette initialization.

void __stdcall16far Bitmap_Object_Initialize_Palette(void *this)
{
  void *this_00;
  void *pvVar1;
  void *extraout_DX;
  uint uVar2;
  undefined2 in_stack_00000006;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*(int *)((int)this + 0xa);
  pvVar1 = (void *)*(int *)((int)this + 0xc);
  if (pvVar1 != NULL || puVar3 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar3)();
    pvVar1 = extraout_DX;
  }
  this_00 = allocate_memory(CONCAT22(puVar3,0x14));
  uVar2 = (uint)pvVar1 | (uint)this_00;
  if (uVar2 != 0x0)
  {
    pvVar1 = Palette_Object_ctor_with_buffer_init
                       (this_00,pvVar1,(int)*(undefined4 *)((int)this + 0x10) + 0x28);
    *(undefined2 *)((int)this + 0xa) = pvVar1;
    *(uint *)((int)this + 0xc) = uVar2;
    return;
  }
  *(undefined4 *)((int)this + 0xa) = 0x0;
  return;
}



// Retrieves the cached Windows palette handle (HPALETTE) associated with the bitmap
// object.

HPALETTE16 __stdcall16far Bitmap_Object_Get_Palette_Handle(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(HPALETTE16 *)((int)this + 0xe);
}



// Scalar deleting destructor for the Bitmap_Object class. Calls the destructor and
// optionally frees the object memory.

void * __stdcall16far Bitmap_Object_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Bitmap_Object_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes File_Object vtable to 1008:4C4C (replaces base 1008:389A).

void * __stdcall16far
File_Object_ctor(undefined2 *param_1,undefined2 param_2,char *param_3)
{
  char *pcVar1;
  undefined2 in_DX;
  undefined2 *puVar2;
  void *pvVar3;
  
  pvVar3 = (void *)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)param_1;
  *param_1 = (char *)s_1_1050_389a;
  puVar2[0x1] = 0x1008;
  *(undefined4 *)(puVar2 + 0x2) = 0x0;
  *(undefined4 *)(puVar2 + 0x4) = 0x0;
  puVar2[0x6] = 0xffff;
  *(undefined4 *)(puVar2 + 0x7) = 0x0;
  *(undefined4 *)(puVar2 + 0x9) = 0x0;
  *(undefined4 *)(puVar2 + 0xb) = 0x0;
  *(undefined4 *)(puVar2 + 0xd) = 0x0;
  puVar2[0xf] = 0x0;
  puVar2[0x11] = param_2;
  *param_1 = 0x4c4c;
  puVar2[0x1] = 0x1008;
  pcVar1 = strdup_allocate(param_3);
  puVar2[0x4] = pcVar1;
  puVar2[0x5] = in_DX;
  return pvVar3;
}



// Targeted Scan Finding: Vtable
// Reverts File_Object vtable sequence: 1008:4C4C -> 1008:389A.
// Performs indirect call through [this + 4] during cleanup.

void __stdcall16far File_Object_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0x4c4c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0x6) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x4);
    (*(code *)*puVar1)();
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x8));
  if (*(long *)((int)this + 0x1a) != 0x0)
  {
    heap_free_core((void *)(void *)*(undefined4 *)((int)this + 0x1a));
  }
  if (*(int *)((int)this + 0xc) != -0x1)
  {
    _lclose16(*(HFILE16 *)((int)this + 0xc));
  }
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// Loads a bitmap file (.BMP) using low-level DOS I/O.
// Initializes Palette_Object within File_Object.
// References global heap context pointers in segment 1050:5f2c.

int __stdcall16far File_Object_Load_Bitmap_File_Logic(void *this)
{
  HFILE16 HVar1;
  int32_t iVar2;
  int iVar3;
  void *this_00;
  undefined2 uVar4;
  int in_DX;
  void *pvVar5;
  uint uVar6;
  undefined2 unaff_SS;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000ffe4;
  int local_18;
  undefined4 uStack_16;
  int32_t iStack_a;
  void *pvStack_8;
  undefined4 uStack_6;
  
  if (*(long *)((int)this + 0x8) != 0x0)
  {
    if (*(int *)((int)this + 0x1e) != 0x0)
    {
      return 0x1;
    }
    if (*(int *)((int)this + 0xc) == -0x1)
    {
      HVar1 = _lopen16(0x0,(char *)CONCAT22(in_stack_0000ffe4,
                                            (char *)((ulong)*(undefined4 *)
                                                             ((int)this + 0x8) >> 0x10))
                      );
      *(HFILE16 *)((int)this + 0xc) = HVar1;
      if (HVar1 == 0xffff)
      {
        return 0x0;
      }
    }
    uStack_6 = 0x0;
    iVar2 = _hread16(0xe,(int *)CONCAT22(unaff_SS,&local_18),
                     *(HFILE16 *)((int)this + 0xc));
    if ((iVar2 == 0xe) && (in_DX == 0x0))
    {
      uStack_6 = uStack_16;
      if (local_18 == 0x4d42)
      {
        iVar2 = _llseek16(0x0,0x0,0x0);
        pvVar5 = heap_alloc_with_flags
                           (0x1,(int)uStack_6,(int)((ulong)uStack_6 >> 0x10),
                            (int)_g_AllocatedBlock_Offset,
                            (int)((ulong)_g_AllocatedBlock_Offset >> 0x10));
        *(int32_t *)((int)this + 0x1a) = iVar2;
        *(undefined2 *)((int)this + 0x1c) = pvVar5;
        if (pvVar5 == NULL && *(int *)((int)this + 0x1a) == 0x0)
        {
          return 0x0;
        }
        iStack_a = _hread16((int32_t)uStack_6,(void *)*(undefined4 *)((int)this + 0x1a),
                            *(HFILE16 *)((int)this + 0xc));
        pvStack_8 = pvVar5;
        _lclose16(*(HFILE16 *)((int)this + 0xc));
        *(undefined2 *)((int)this + 0xc) = 0xffff;
        *(undefined2 *)((int)this + 0x1e) = 0x1;
        *(undefined4 *)((int)this + 0xe) = *(undefined4 *)((int)this + 0x1a);
        iVar3 = (int)*(undefined4 *)((int)this + 0x1a);
        uVar4 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x1a) >> 0x10);
        *(undefined4 *)((int)this + 0x12) = CONCAT22(uVar4,iVar3 + 0xe);
        *(undefined4 *)((int)this + 0x16) = CONCAT22(uVar4,iVar3 + 0x436);
        this_00 = allocate_memory(CONCAT22(in_stack_0000ffe4,0x14));
        uVar6 = (uint)pvVar5 | (uint)this_00;
        if (uVar6 == 0x0)
        {
          *(undefined4 *)((int)this + 0x4) = 0x0;
        }
        else
        {
          pvVar5 = Palette_Object_ctor_with_buffer_init
                             (this_00,pvVar5,
                              (int)*(undefined4 *)((int)this + 0x12) + 0x28);
          *(undefined2 *)((int)this + 0x4) = pvVar5;
          *(uint *)((int)this + 0x6) = uVar6;
        }
        if (*(int *)((int)this + 0x22) != 0x0)
        {
          Palette_Object_Init_From_Global_Theme_Logic(this);
          return 0x1;
        }
        return 0x1;
      }
    }
    _lclose16(*(HFILE16 *)((int)this + 0xc));
    *(undefined2 *)((int)this + 0xc) = 0xffff;
  }
  return 0x0;
}



u32 __stdcall16far UI_Component_Get_Active_Resource_Ptr(u32 *param_1)
{
  undefined2 *puVar1;
  int iVar2;
  u32 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (u32 *)param_1;
  if (*(int *)((int)puVar3 + 0x1e) == 0x0)
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x8);
    iVar2 = (*(code *)*puVar1)();
    if (iVar2 == 0x0)
    {
      return 0x0;
    }
  }
  return CONCAT22(*(undefined2 *)((int)puVar3 + 0x6),(int)puVar3[0x1]);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global resource manager in segment 1050 (offset 0ed0) to retrieve theme
// resource 0x48.
// Maps theme colors to internal palette.

void __stdcall16far Palette_Object_Init_From_Global_Theme_Logic(void *this)
{
  undefined4 uVar1;
  undefined2 uVar2;
  long lVar3;
  undefined2 in_stack_00000006;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_a;
  
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  uVar1 = *(undefined4 *)((int)lVar3 + 0x18);
  uStack_12 = *(int *)((int)lVar3 + 0x16) / 0x2;
  for (uStack_10 = 0x0; uStack_a = (int)uVar1, uStack_10 < uStack_12; uStack_10 += 0x1)
  {
    Palette_Object_Set_Color_Logic
              ((void *)(void *)*(undefined4 *)((int)this + 0x4),
               (void *)((ulong)*(undefined4 *)((int)this + 0x4) >> 0x10),
               uStack_10 * 0x4 + uStack_a);
  }
  for (uStack_12 = 0x100 - uStack_12; uStack_12 < 0x100; uStack_12 += 0x1)
  {
    Palette_Object_Set_Color_Logic
              ((void *)(void *)*(undefined4 *)((int)this + 0x4),
               (void *)((ulong)*(undefined4 *)((int)this + 0x4) >> 0x10),
               uStack_10 * 0x4 + uStack_a);
    uStack_10 += 0x1;
  }
  return;
}



void * __stdcall16far
File_Object_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  File_Object_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes Palette_Object vtable to 1008:4F1C (base 1008:389A).

void * __stdcall16far Palette_Object_ctor_basic(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x12) = 0x1;
  *_this = 0x4f1c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes Palette_Object vtable to 1008:4F1C (base 1008:389A).

void * __stdcall16far
Palette_Object_ctor_with_buffer_init(void *this,void *buffer,int count)
{
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000000c;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = _count;
  *(undefined2 *)((int)this + 0xc) = in_stack_0000000c;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x12) = 0x0;
  *_this = 0x4f1c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Reverts Palette_Object vtable to 1008:4F1C and then 1008:389A during destruction.

void __stdcall16far Palette_Object_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x4f1c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0xe));
  if (*(int *)((int)this + 0x12) != 0x0)
  {
    free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x4));
  }
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Sets a specific color entry (index `param_3`) in the palette buffer using the 32-bit
// RGB value provided in `param_2`. Performs bounds checking.

int __stdcall16far Palette_Object_Set_Color_Logic(void *this,void *rgb_ptr,int index)
{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 in_stack_0000000a;
  int in_stack_0000000c;
  
  if (((*(long *)((int)this + 0x4) != 0x0) && (-0x1 < in_stack_0000000c)) &&
     (in_stack_0000000c < *(int *)((int)this + 0xc)))
  {
    uVar1 = *(undefined2 *)(index + 0x2);
    uVar3 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x4) >> 0x10);
    iVar2 = (int)*(undefined4 *)((int)this + 0x4);
    *(undefined2 *)(iVar2 + in_stack_0000000c * 0x4) = *_index;
    *(undefined2 *)(iVar2 + in_stack_0000000c * 0x4 + 0x2) = uVar1;
    return 0x1;
  }
  return 0x0;
}



void * __stdcall16far Palette_Object_Get_Buffer_Ptr_maybe(void *this)
{
  undefined2 in_stack_00000006;
  
  return (void *)*(undefined2 *)((int)this + 0x4);
}



// Copies the entire color table from another Palette_Object. Resizes the destination
// buffer if necessary to match the source entry count.

int __stdcall16far Palette_Object_Copy_From_Other_Logic(void *this,void *other)
{
  void *pvVar1;
  undefined2 in_DX;
  undefined2 uVar2;
  undefined4 in_stack_00000008;
  undefined2 in_stack_0000fff6;
  
  uVar2 = (undefined2)((ulong)in_stack_00000008 >> 0x10);
  if (*(int *)((int)this + 0x12) != 0x0)
  {
    *(undefined2 *)((int)this + 0xc) = *(undefined2 *)((int)in_stack_00000008 + 0xc);
    free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x4));
    *(undefined4 *)((int)this + 0x4) = 0x0;
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff6,*(int *)((int)this + 0xc) << 0x2
                                     ));
    *(undefined2 *)((int)this + 0x4) = pvVar1;
    *(undefined2 *)((int)this + 0x6) = in_DX;
  }
  if (*(int *)((int)this + 0xc) != 0x100)
  {
    return 0x0;
  }
  memcpy_far_words((void *)(void *)*(undefined4 *)((int)this + 0x4),
                   (void *)((ulong)*(undefined4 *)((int)this + 0x4) >> 0x10),
                   (int)*(undefined4 *)((int)in_stack_00000008 + 0x4));
  return 0x1;
}



// A far wrapper that selects and realizes the palette into a device context (HDC).
// Ensures the `HPALETTE` handle is valid before use.

HPALETTE16 __stdcall16far
Palette_Object_Select_And_Realize_Wrapper_Far(void *this,HDC16 hdc)
{
  HPALETTE16 in_AX;
  HPALETTE16 HVar1;
  HDC16 *in_stack_00000008;
  HDC16 force_background;
  
  force_background = *in_stack_00000008;
  Palette_Object_Create_HPALETTE_Logic(this);
  HVar1 = SelectPalette16(0x0,in_AX,force_background);
  RealizePalette16(*in_stack_00000008);
  return HVar1;
}



// Internal routine that creates a Windows `HPALETTE` handle from the object's RGB color
// table. It converts internal color formats to the standard `LOGPALETTE` structure
// before calling `CreatePalette16`.

void __stdcall16far Palette_Object_Create_HPALETTE_Logic(void *this)
{
  void *pvVar1;
  undefined2 in_DX;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000fff2;
  int iVar6;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*(long *)((int)this + 0xe) == 0x0)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff2,
                                      (*(int *)((int)this + 0xc) + 0x2) * 0x4));
    *(undefined2 *)((int)this + 0xe) = pvVar1;
    *(undefined2 *)((int)this + 0x10) = in_DX;
    *(undefined2 *)*(undefined4 *)((int)this + 0xe) = 0x300;
    *(undefined2 *)((int)*(undefined4 *)((int)this + 0xe) + 0x2) =
         *(undefined2 *)((int)this + 0xc);
    uStack_8 = (undefined1 *)
               CONCAT22((int)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10),
                        (undefined1 *)((int)*(undefined4 *)((int)this + 0xe) + 0x4));
    uStack_c = (undefined1 *)*(undefined4 *)((int)this + 0x4);
    iVar6 = 0x0;
    while( true )
    {
      if (*(int *)((int)this + 0xc) <= iVar6) break;
      uVar4 = (undefined2)((ulong)uStack_c >> 0x10);
      puVar2 = (undefined1 *)uStack_c;
      *uStack_8 = puVar2[0x2];
      uVar5 = (undefined2)((ulong)uStack_8 >> 0x10);
      puVar3 = (undefined1 *)uStack_8;
      puVar3[0x1] = puVar2[0x1];
      puVar3[0x2] = *uStack_c;
      puVar3[0x3] = 0x0;
      iVar6 += 0x1;
      uStack_8 = (undefined1 *)CONCAT22(uVar5,puVar3 + 0x4);
      uStack_c = (undefined1 *)CONCAT22(uVar4,puVar2 + 0x4);
    }
  }
  CreatePalette16((LOGPALETTE_PTR)*(undefined4 *)((int)this + 0xe));
  return;
}



// Scalar deleting destructor for the Palette_Object class. Calls the destructor and
// optionally deallocates the object's memory.

void * __stdcall16far Palette_Object_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Palette_Object_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}
