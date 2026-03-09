/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 3/56
 * Original lines (combined): 14702-17487
 * Boundaries: top-level declarations/definitions only
 */

u16 g_UIPanelContainer_Seg; /* Segment half of p_UIPanelContainer far ptr (1050:02a2) */

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer / Vtable
// Initializes vtable to far address constructed from 1050:5099 + 9.
// References multiple string resources via Resource Manager in segment 1050:14cc.
// Instantiates and renders text into a Bitmap_Object using standard Windows GDI APIs
// (CreateDC16, TextOut16).

void * __stdcall16far
Text_Bitmap_Object_ctor_and_render
          (undefined2 *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)
{
  void *pvVar1;
  char *pcVar2;
  HDC16 force_background;
  HPALETTE16 HVar3;
  COLORREF hdc;
  COLORREF hdc_00;
  uint x;
  undefined2 reg_dx;
  char *device;
  undefined2 unaff_SS;
  char *output;
  undefined2 *this;
  void *src;
  undefined1 local_26 [0x24];
  
                // Will apply prototype: void __cdecl16near
                // inferred_complex_init_4f20_medconf(void);
  this = (undefined2 *)param_1;
  src = (void *)((ulong)param_1 >> 0x10);
  Bitmap_Object_ctor_basic(this);
  *(undefined4 *)(this + 0xf) = param_4;
  this[0x11] = param_3;
  *(undefined4 *)(this + 0x12) = param_2;
  *param_1 = (char *)s_SCInternalPutBldg2_site_0x_08lx__1050_5099 + 0x9;
  this[0x1] = 0x1008;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  device = File_Object_ctor(local_26,unaff_SS,0x1,pvVar1,reg_dx);
  File_Object_Load_Bitmap_File_Logic(local_26);
  Bitmap_Object_Transfer_Resource_Wrapper_Far(this,src);
  Bitmap_Object_Initialize_Metadata(this);
  Bitmap_Object_Initialize_Palette(this);
  output = NULL;
  pvVar1 = NULL;
  pcVar2 = get_with_lazy_init(this);
  force_background = CreateDC16(pcVar2,device,output,pvVar1);
  HVar3 = Bitmap_Object_Select_And_Realize_Palette(this, &force_background);
  hdc = SetBkColor16(0xffff,0xff);
  pcVar2 = device;
  hdc_00 = SetTextColor16(this[0x11],0x100);
  x = strlen_get_length(*(char **)(this + 0xf));
  TextOut16(0x1000,x,(short)*(undefined4 *)(this + 0xf),
            (char *)((ulong)*(undefined4 *)(this + 0xf) >> 0x10),0x0);
  SetBkColor16(hdc,(COLORREF)device);
  SetTextColor16(hdc_00,(COLORREF)pcVar2);
  HVar3 = (HPALETTE16)SelectPalette16(force_background,HVar3,0);
  DeleteObject16(HVar3);
  DeleteDC16(force_background);
  File_Object_dtor(local_26);
  return src;
}



// A far wrapper for the bitmap resource transfer logic.

void __stdcall16far Bitmap_Object_Transfer_Resource_Wrapper_Far(void *this,void *src)
{
  Bitmap_Object_Transfer_Resource_Logic(this,src);
  return;
}



// Scalar deleting destructor for the Bitmap_Object class. Duplicate instance.

void * __stdcall16far Bitmap_Object_scalar_dtor_duplicate(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Bitmap_Object_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global heap context in segment 1050:5f2c.
// Captures rectangular pixel data from a far-pointer bitmap into an internal buffer.

int __stdcall16far Sprite_Object_Capture_From_Bitmap(void *this)
{
  int iVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  undefined2 in_stack_00000006;
  undefined2 uStack_10;
  undefined4 uStack_e;
  undefined2 uStack_a;
  undefined2 uStack_8;
  
                // Will apply prototype: void __cdecl16near
                // inferred_serializer_5134_medconf(void);
  lVar3 = *(long *)((int)this + 0x4) * *(long *)((int)this + 0x8);
  pvVar4 = heap_alloc_with_flags(0x1,lVar3,_g_AllocatedBlock_Offset);
  *(undefined2 *)((int)this + 0x10) = (int)lVar3;
  *(undefined2 *)((int)this + 0x12) = pvVar4;
  if (pvVar4 == NULL && *(int *)((int)this + 0x10) == 0x0)
  {
    return 0x0;
  }
  iVar1 = *(int *)((int)this + 0x8);
  lVar3 = CONCAT22(*(int *)((int)this + 0xa) - (uint)(iVar1 == 0x0),iVar1 + -0x1) *
          *(long *)((int)this + 0x4);
  uVar2 = (uint)lVar3;
  uStack_a = (void *)(uVar2 + *(uint *)((int)this + 0x10));
  uStack_8 = (void *)(((int)((ulong)lVar3 >> 0x10) +
                      (uint)CARRY2(uVar2,*(uint *)((int)this + 0x10))) * 0x100 +
                     *(int *)((int)this + 0x12));
  uStack_e = CONCAT22(*(int *)((int)this + 0xa),iVar1);
  uStack_10 = *(int *)((int)this + 0x2);
  while (uStack_e != 0x0)
  {
    pvVar4 = Bitmap_Object_Get_Pixel_Address
                       ((void *)(void *)*(undefined4 *)((int)this + 0xc),
                        (int)((ulong)*(undefined4 *)((int)this + 0xc) >> 0x10),uStack_10
                       );
    memcpy_far_words(uStack_a,uStack_8,(int)pvVar4);
    uVar2 = -*(int *)((int)this + 0x4);
    bVar5 = CARRY2((uint)uStack_a,uVar2);
    uStack_a = (void *)((int)uStack_a + uVar2);
    uStack_8 = (void *)((int)uStack_8 +
                       ((uint)bVar5 -
                       (*(int *)((int)this + 0x6) +
                       (uint)(*(int *)((int)this + 0x4) != 0x0))) * 0x100);
    uStack_10 = uStack_10 + 0x1;
    uStack_e = uStack_e + -0x1;
  }
  return 0x1;
}



// Restores or draws the internal pixel buffer of a sprite object back onto a
// destination Bitmap_Object. Performs the inverse operation of
// `Sprite_Object_Capture_From_Bitmap`.

int __stdcall16far Sprite_Object_Restore_To_Bitmap(void *this)
{
  void *dest;
  void *src;
  undefined2 in_stack_00000006;
  undefined2 uStack_c;
  undefined4 uStack_a;
  undefined2 uStack_6;
  
  uStack_6 = (int)((ulong)(*(int *)((int)this + 0x8) - 0x1) * *(long *)((int)this + 0x4)
                  ) + *(int *)((int)this + 0x10);
  uStack_a = CONCAT22(*(undefined2 *)((int)this + 0xa),*(int *)((int)this + 0x8));
  uStack_c = *(int *)((int)this + 0x2);
  while (uStack_a != 0x0)
  {
    src = (void *)(uStack_c >> 0xf);
    dest = Bitmap_Object_Get_Pixel_Address
                     ((void *)(void *)*(undefined4 *)((int)this + 0xc),
                      (int)((ulong)*(undefined4 *)((int)this + 0xc) >> 0x10),uStack_c);
    memcpy_far_words(dest,src,uStack_6);
    uStack_6 -= *(int *)((int)this + 0x4);
    uStack_c = uStack_c + 0x1;
    uStack_a = uStack_a + -0x1;
  }
  return 0x1;
}



// Clips the sprite's rectangular dimensions to ensure they stay within the boundaries
// of the target bitmap. Truncates width and height as necessary based on the current X
// and Y offsets.

void __stdcall16far Sprite_Object_Clip_To_Bitmap_Bounds(void *this)
{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  undefined2 reg_dx;
  int iVar5;
  int iVar6;
  undefined2 in_stack_00000006;
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  pvVar2 = get_with_lazy_init((void *)(void *)*(undefined4 *)((int)this + 0xc));
  uVar3 = *(int *)((int)pvVar2 + 0x4) - 0x1;
  iVar5 = *(int *)((int)pvVar2 + 0x6) - (uint)(*(int *)((int)pvVar2 + 0x4) == 0x0);
  lVar4 = *(long *)((int)pvVar2 + 0x8) + -0x1;
  uVar1 = *_this;
  iVar6 = ((int)uVar1 >> 0xf) + *(int *)((int)this + 0x6) +
          (uint)CARRY2(uVar1,*(uint *)((int)this + 0x4));
  if ((iVar5 <= iVar6) &&
     ((iVar5 < iVar6 || (uVar3 < uVar1 + *(uint *)((int)this + 0x4)))))
  {
    *(int *)((int)this + 0x4) = uVar3 - uVar1;
    *(int *)((int)this + 0x6) = (iVar5 - ((int)uVar1 >> 0xf)) - (uint)(uVar3 < uVar1);
  }
  uVar1 = *(uint *)((int)this + 0x2);
  iVar5 = ((int)uVar1 >> 0xf) + *(int *)((int)this + 0xa) +
          (uint)CARRY2(uVar1,*(uint *)((int)this + 0x8));
  uStack_c = (int)((ulong)lVar4 >> 0x10);
  if ((uStack_c <= iVar5) &&
     ((uStack_e = (uint)lVar4, uStack_c < iVar5 ||
      (uStack_e < uVar1 + *(uint *)((int)this + 0x8)))))
  {
    *(undefined2 *)((int)this + 0x8) = (int)(lVar4 - (int)uVar1);
    *(undefined2 *)((int)this + 0xa) = (int)((ulong)(lVar4 - (int)uVar1) >> 0x10);
  }
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect calls through vtable offsets during list traversal and item
// destruction.
// Calls sub-object virtual method then item's own virtual destructor (index 0).

void __stdcall16far linked_list_clear_and_destroy_items(void *list_head,u16 param_2)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 uVar5;
  
  while( true )
  {
    if (*(long *)((int)list_head + 0x4) == 0x0) break;
    if (*(int *)((int)list_head + 0xa) != 0x0)
    {
      uVar5 = (undefined2)((ulong)*(undefined4 *)((int)list_head + 0x4) >> 0x10);
      iVar4 = (int)*(undefined4 *)((int)list_head + 0x4);
      puVar1 = (undefined4 *)*(int *)(iVar4 + 0x8);
      iVar4 = *(int *)(iVar4 + 0xa);
      if (iVar4 != 0x0 || puVar1 != NULL)
      {
        puVar2 = (undefined2 *)(undefined2 *)*puVar1;
        (*(code *)*puVar2)();
      }
    }
    puVar3 = (undefined4 *)*(undefined4 *)((int)list_head + 0x4);
    *(undefined4 *)((int)list_head + 0x4) = ((undefined4 *)puVar3)[0x1];
    if (puVar3 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar3)();
    }
  }
  *(undefined2 *)((int)list_head + 0x8) = 0x0;
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect calls through vtable offsets during item removal.
// Calls sub-object virtual method then item's own virtual destructor.

int __stdcall16far linked_list_remove_and_destroy_item(void *list_head,long item_value)
{
  int *piVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 in_stack_00000006;
  undefined4 *puStack_a;
  undefined4 *puStack_6;
  
  puStack_6 = NULL;
  puStack_a = list_head;
  uVar7 = in_stack_00000006;
  puVar2 = puStack_6;
  do
  {
    puStack_6 = puVar2;
    puVar2 = (undefined4 *)puStack_a[0x1];
    piVar1 = (int *)((int)puStack_a + 0x6);
    puStack_a = (undefined4 *)puVar2;
    uVar7 = (undefined2)((ulong)puVar2 >> 0x10);
    if (*piVar1 == 0x0 && puStack_a == NULL) break;
  } while (puStack_a[0x2] != item_value);
  if (puVar2 != NULL)
  {
    if (puStack_6 == NULL)
    {
      uVar4 = *(undefined2 *)(puStack_a + 0x1);
      uVar5 = *(undefined2 *)((int)puStack_a + 0x6);
      puVar6 = list_head;
      uVar8 = in_stack_00000006;
    }
    else
    {
      uVar4 = *(undefined2 *)(puStack_a + 0x1);
      uVar5 = *(undefined2 *)((int)puStack_a + 0x6);
      puVar6 = (undefined4 *)puStack_6;
      uVar8 = (int)((ulong)puStack_6 >> 0x10);
    }
    *(undefined2 *)(puVar6 + 0x1) = uVar4;
    *(undefined2 *)((int)puVar6 + 0x6) = uVar5;
    if (*(int *)((int)list_head + 0xa) != 0x0)
    {
      if (*(int *)((int)puStack_a + 0xa) != 0x0 ||
          *(undefined4 **)(puStack_a + 0x2) != NULL)
      {
        puVar3 = (undefined2 *)(undefined2 *)**(undefined4 **)(puStack_a + 0x2);
        (*(code *)*puVar3)();
      }
    }
    if (puVar2 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar2)();
    }
    *(int *)((int)list_head + 0x8) = *(int *)((int)list_head + 0x8) + -0x1;
    return 0x1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Event_Manager vtable to 1008:5FC8.
// Registers global instance pointer at 1050:02A0.
// References global resource manager at 1050:0ED0 to retrieve Resource 2.

void * __stdcall16far UI_Event_Manager_ctor(void *this)
{
  long lVar1;
  /* in_stack_00000006: Win16 segment of 'this' on stack — flat model: 0 */
  
  Base_Object_ctor_init_2014_Logic(this, 0x0); /* segment arg = 0 in flat model */
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xc) = 0x0;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *(undefined2 *)((int)this + 0x12) = 0x0;
  *_this = 0x5fc8;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  p_UIPanelContainer = this;
  g_UIPanelContainer_Seg = 0x0; /* PTR_DAT_1050_0000_1050_02a2: segment of this — flat: 0 */
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  *(undefined2 *)((int)this + 0xc) = (int)lVar1;
  *(undefined2 *)((int)this + 0xe) = (int)((ulong)lVar1 >> 0x10);
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global string resource manager at 1050:14CC.

void __stdcall16far
media_play_from_resource_id_shorthand(void *event_manager,int resource_id)
{
  Resource_Manager_Update_Path_Type3_Logic
            ((void *)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10));
  media_mci_open_and_prepare_playback(event_manager,(char *)resource_id);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global string resource manager at 1050:14CC.

void __stdcall16far
media_play_from_full_resource_ptr_logic(void *event_manager,long resource_id)
{
  char *in_stack_00000006;
  
  Resource_Manager_Update_Path_Case2_Logic
            ((void *)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),(int)resource_id);
  media_mci_open_and_prepare_playback(event_manager,in_stack_00000006);
  return;
}



void __stdcall16far
media_play_from_resource_ptr_wrapper(void *event_manager,void *resource_ptr)
{
  long *in_stack_00000008;
  
  media_play_from_full_resource_ptr_logic(event_manager,*in_stack_00000008);
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [out_struct] at offset 0x14, likely a virtual
// initialization method for Bitmap_Object.

void * __stdcall16far Bitmap_Object_Load_Helper(void *out_struct,char *filename)
{
  undefined2 *puVar1;
  void *pvVar2;
  void *other;
  uint uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined4 in_stack_00000008;
  undefined2 in_stack_0000ffd6;
  undefined1 local_26 [0x24];
  
  *_out_struct = 0x0;
  *(undefined4 *)((int)out_struct + 0x4) = 0x0;
  other = File_Object_ctor(local_26,unaff_SS,0x1,(int)in_stack_00000008,
                           (int)((ulong)in_stack_00000008 >> 0x10));
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffd6,0x1e));
  uVar3 = (uint)other | (uint)pvVar2;
  if (uVar3 == 0x0)
  {
    *_out_struct = 0x0;
  }
  else
  {
    pvVar2 = Bitmap_Object_ctor_from_other(pvVar2,other);
    *(void **)_out_struct = pvVar2;
    *(uint *)((int)out_struct + 0x2) = uVar3;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)*_out_struct + 0x14);
  uVar4 = (*(code *)*puVar1)();
  *(undefined2 *)((int)out_struct + 0x4) = (int)uVar4;
  *(undefined2 *)((int)out_struct + 0x6) = (int)((ulong)uVar4 >> 0x10);
  File_Object_dtor(local_26);
  return out_struct;
}



// Targeted Scan Finding: Vtable
// Invokes the object's primary virtual destructor (vtable index 0).

void __stdcall16far call_virtual_destructor_logic(void *obj,u16 param_2)
{
  u16 *puVar1;
  
  if (*(int *)((int)obj + 0x2) != 0x0 || (undefined4 *)*_obj != NULL)
  {
    puVar1 = (u16 *)(u16 *)*(undefined4 *)*_obj;
    (*(code *)*puVar1)();
  }
  return;
}



// Creates a new sub-bitmap from a rectangular region of a source bitmap. It allocates a
// new Bitmap_Object subclass and copies the specified scanlines. Used for cropping or
// extracting UI elements.

void * __stdcall16far
Bitmap_Object_Create_SubBitmap_Logic
          (void *src_bitmap,long count,int start_y,int start_x)
{
  int iVar1;
  void *pvVar2;
  void *count_00;
  void *dest;
  uint reg_dx;
  uint y;
  void *src;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000ffe6;
  undefined2 uStack_8;
  
  if (*_src_bitmap == 0x0)
  {
    return NULL;
  }
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffe6,0x1e));
  y = reg_dx | (uint)pvVar2;
  if (y == 0x0)
  {
    pvVar2 = NULL;
    y = 0x0;
  }
  else
  {
    pvVar2 = Bitmap_Object_Subclass_ctor_with_alloc(pvVar2,reg_dx,(int)count);
  }
  uStack_8 = 0x0;
  while (iVar1 = (int)count, count = (long)((int)count - 0x1), iVar1 != 0x0)
  {
    count_00 = Bitmap_Object_Get_Pixel_Address
                         ((void *)(void *)*_src_bitmap,
                          (int)((ulong)*_src_bitmap >> 0x10),start_y);
    src = (void *)(uStack_8 >> 0xf);
    dest = Bitmap_Object_Get_Pixel_Address(pvVar2,y,uStack_8);
    memcpy_far_words(dest,src,(int)count_00);
    start_y = start_y + 0x1;
    uStack_8 = uStack_8 + 0x1;
  }
  return pvVar2;
}



// Copies a rectangular region from a source bitmap into a newly allocated base
// Bitmap_Object. Performs scanline-by-scanline copying using far memory transfers.

void * __stdcall16far
Bitmap_Object_Copy_Region_To_New_Bitmap
          (void *src_bitmap,long count,int start_y,int start_x)
{
  int iVar1;
  void *pvVar2;
  void *count_00;
  void *dest;
  void *reg_dx;
  uint y;
  void *src;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000ffe6;
  undefined2 uStack_8;
  
  if (*_src_bitmap == 0x0)
  {
    return NULL;
  }
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffe6,0x1e));
  y = (uint)reg_dx | (uint)pvVar2;
  if (y == 0x0)
  {
    pvVar2 = NULL;
    y = 0x0;
  }
  else
  {
    pvVar2 = Bitmap_Object_ctor_with_alloc
                       (pvVar2,reg_dx,(int)*(undefined4 *)((int)src_bitmap + 0x4),
                        (int)((ulong)*(undefined4 *)((int)src_bitmap + 0x4) >> 0x10));
  }
  uStack_8 = 0x0;
  while (iVar1 = (int)count, count = (long)((int)count - 0x1), iVar1 != 0x0)
  {
    count_00 = Bitmap_Object_Get_Pixel_Address
                         ((void *)(void *)*_src_bitmap,
                          (int)((ulong)*_src_bitmap >> 0x10),start_y);
    src = (void *)(uStack_8 >> 0xf);
    dest = Bitmap_Object_Get_Pixel_Address(pvVar2,y,uStack_8);
    memcpy_far_words(dest,src,(int)count_00);
    start_y = start_y + 0x1;
    uStack_8 = uStack_8 + 0x1;
  }
  return pvVar2;
}



// Targeted Scan Finding: Vtable
// Sets vtable to 1008:685A during destruction.

void __stdcall16far Bitmap_Object_Subclass_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x685a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(long *)((int)this + 0x10) != 0x0)
  {
    heap_free_core((void *)(void *)*(undefined4 *)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0x0;
  Bitmap_Object_dtor(this);
  return;
}



void * __stdcall16far
Bitmap_Object_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  Bitmap_Object_Subclass_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



void __stdcall16far
Resource_Manager_Dispatch_Virtual_Call_6C_6b02(u32 param_1,u8 param_2)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)(param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0xd0) != 0x0 || *(int *)(iVar2 + 0xce) != 0x0)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xce) + 0x6c);
    (*(code *)*puVar1)();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// Iterates through component IDs at offset 800 using global count at 1050:0334.
// References global resource manager at 1050:0ED0.
// Performs indirect calls through vtable offset 0x8 (Save method).

int __stdcall16far file_context_save_component_chunks_logic(void *this,void *handle_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000008;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    if ((int)PTR_g_AllocFlags_1050_0334 <= iStack_4)
    {
      return 0x1;
    }
    puVar3 = (undefined4 *)
             Resource_Manager_Get_Resource_by_ID_Logic
                       (_p_ResourceManager,*(int *)(iStack_4 * 0x2 + 0x320));
    puVar1 = (undefined2 *)((int)*puVar3 + 0x8);
    iVar2 = (*(code *)*puVar1)(0x1010,puVar3,(int)in_stack_00000008,
                               (int)((ulong)in_stack_00000008 >> 0x10));
    if (iVar2 == 0x0) break;
    iStack_4 += 0x1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References global resource manager at 1050:0ED0.
// Performs indirect calls through vtable offset 0xC (Load method).

int __stdcall16far file_context_load_component_chunks_logic(void *this,void *handle_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000008;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    if ((int)PTR_g_AllocFlags_1050_0334 <= iStack_4)
    {
      return 0x1;
    }
    puVar3 = (undefined4 *)
             Resource_Manager_Get_Resource_by_ID_Logic
                       (_p_ResourceManager,*(int *)(iStack_4 * 0x2 + 0x320));
    puVar1 = (undefined2 *)((int)*puVar3 + 0xc);
    iVar2 = (*(code *)*puVar1)(0x1010,puVar3,(int)in_stack_00000008,
                               (int)((ulong)in_stack_00000008 >> 0x10));
    if (iVar2 == 0x0) break;
    iStack_4 += 0x1;
  }
  return 0x0;
}



// Targeted Scan Finding: Far Pointer
// Checks global save version pointer at 1050:0312 to determine if ID remapping is
// required.

int __stdcall16far file_context_remap_id_by_version_logic(int arg1,int arg2,int id)
{
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
    switch(id)
    {
    case 0x1:
      id = 0x1;
      break;
    case 0x2:
      id = 0x2;
      break;
    case 0x3:
      id = 0x3;
      break;
    case 0x4:
      id = 0x5;
      break;
    case 0x5:
      id = 0x4;
      break;
    case 0x6:
      id = 0x6;
      break;
    case 0x7:
      id = 0x7;
      break;
    case 0x8:
      id = 0x8;
      break;
    case 0x9:
      id = 0x9;
      break;
    case 0xa:
      id = 0xa;
      break;
    case 0xb:
      id = 0xb;
      break;
    case 0xc:
      id = 0xc;
      break;
    case 0xd:
      id = 0xd;
      break;
    case 0xe:
      id = 0xe;
      break;
    case 0xf:
      id = 0xf;
      break;
    case 0x10:
      return 0x10;
    case 0x11:
      return 0x11;
    case 0x12:
      return 0x12;
    case 0x13:
      return 0x13;
    default:
      return 0x0;
    }
  }
  return id;
}



// Maps an input ID from one internal category to another using a lookup switch.

int __stdcall16far remap_id_type_A_to_type_B_logic(int arg1,int arg2,int id)
{
  int iVar1;
  
  switch(id)
  {
  case 0x1:
    iVar1 = 0x3;
    break;
  case 0x2:
    iVar1 = 0x4;
    break;
  case 0x3:
    return 0x5;
  case 0x4:
    return 0x6;
  case 0x5:
    return 0x8;
  case 0x6:
    return 0x9;
  case 0x7:
    return 0xa;
  default:
    iVar1 = 0x0;
  }
  return iVar1;
}
