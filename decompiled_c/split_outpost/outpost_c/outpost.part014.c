/*
 * Source: outpost.c
 * Chunk: 14/117
 * Original lines: 14702-15896
 * Boundaries: top-level declarations/definitions only
 */




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
  undefined2 in_DX;
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
  device = File_Object_ctor(local_26,unaff_SS,0x1,pvVar1,in_DX);
  File_Object_Load_Bitmap_File_Logic(local_26);
  Bitmap_Object_Transfer_Resource_Wrapper_Far(this,src);
  Bitmap_Object_Initialize_Metadata(this);
  Bitmap_Object_Initialize_Palette(this);
  output = NULL;
  pvVar1 = NULL;
  pcVar2 = get_with_lazy_init(this);
  force_background = CreateDC16(pcVar2,device,output,pvVar1);
  HVar3 = Bitmap_Object_Select_And_Realize_Palette(this,(HDC16)src);
  hdc = SetBkColor16(0xffff,0xff);
  pcVar2 = device;
  hdc_00 = SetTextColor16(this[0x11],0x100);
  x = strlen_get_length(*(char **)(this + 0xf));
  TextOut16(0x1000,x,(short)*(undefined4 *)(this + 0xf),
            (char *)((ulong)*(undefined4 *)(this + 0xf) >> 0x10),0x0);
  SetBkColor16(hdc,(COLORREF)device);
  SetTextColor16(hdc_00,(COLORREF)pcVar2);
  HVar3 = SelectPalette16(0x0,HVar3,force_background);
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



// Initializes a Sprite or similar graphical metadata structure. Copies identification
// data from `param_4` and sets initial position/attribute fields before calling a
// sub-initialization routine.

void * __stdcall16far
Sprite_Object_init_logic(void *this,int y,int x,void *id_data,int flags)
{
  undefined2 in_stack_0000000e;
  undefined2 *in_stack_00000010;
  undefined4 in_stack_00000014;
  
  *_this = *in_stack_00000010;
  *(undefined2 *)((int)this + 0x2) = ((undefined2 *)in_stack_00000010)[0x1];
  *(undefined4 *)((int)this + 0x4) = _flags;
  *(undefined4 *)((int)this + 0x8) = _x;
  *(undefined4 *)((int)this + 0xc) = in_stack_00000014;
  *(undefined4 *)((int)this + 0x10) = 0x0;
  Sprite_Object_Clip_To_Bitmap_Bounds(this);
  return this;
}



// Frees the internal memory buffer associated with a sprite or graphical object if it
// exists.

void __stdcall16far Sprite_Object_free_internal_buffer(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0x10) != 0x0)
  {
    heap_free_core((void *)(void *)*(undefined4 *)((int)this + 0x10));
  }
  return;
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
  undefined2 in_DX;
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



// Simple far function that clears a 32-bit value or pointer.

void * __stdcall16far null_far_ptr_logic(void *dest)
{
  undefined2 in_stack_00000006;
  
  *_dest = 0x0;
  return dest;
}



void __stdcall16far far_noop_stub_3(void)
{
  return;
}



// Targeted Scan Finding: Resource
// Plays media files using standard Windows 16-bit MCI APIs:
// - MciSendCommand16
// - MciGetErrorString16.

void __cdecl16far media_mci_play_file_logic(char *filename,int device_id)
{
  uint in_DX;
  uint16_t u_error;
  void *unaff_SS;
  undefined1 local_32 [0x2];
  undefined2 uStack_30;
  undefined1 local_2e [0x2];
  undefined2 uStack_2c;
  uint uStack_22;
  uint16_t uStack_20;
  undefined4 local_1e;
  uint16_t uStack_1a;
  undefined2 uStack_16;
  undefined2 uStack_14;
  char *pcStack_12;
  undefined4 uStack_e;
  undefined2 uStack_a;
  undefined2 uStack_8;
  
  local_1e = 0x0;
  uStack_16 = 0x28c;
  uStack_14 = 0x1050;
  pcStack_12 = _filename;
  uStack_e = 0x0;
  uStack_a = 0x0;
  uStack_8 = 0x4000;
  uStack_22 = MciSendCommand16((undefined4 *)CONCAT22(unaff_SS,&local_1e),
                               (void *)0x30200,0x803,0x0);
  if (uStack_1a != 0x0)
  {
    if (in_DX != 0x0 || uStack_22 != 0x0)
    {
      MciGetErrorString16(0x400,(void *)CONCAT22(uStack_22,unaff_SS),in_DX);
    }
    memset_far(local_2e,(int)unaff_SS,0x0);
    uStack_2c = 0x0;
    uStack_22 = MciSendCommand16((undefined1 *)CONCAT22(unaff_SS,local_2e),(void *)0x2,
                                 0x806,uStack_1a);
    u_error = in_DX | uStack_22;
    if (u_error != 0x0)
    {
      MciGetErrorString16(0x400,(void *)CONCAT22(uStack_22,unaff_SS),in_DX);
    }
    uStack_30 = 0x0;
    uStack_22 = MciSendCommand16((undefined1 *)CONCAT22(unaff_SS,local_32),(void *)0x1,
                                 0x804,uStack_1a);
    if (u_error != 0x0 || uStack_22 != 0x0)
    {
      uStack_20 = u_error;
      MciGetErrorString16(0x400,(void *)CONCAT22(uStack_22,unaff_SS),u_error);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable Initializations
// Primary entry point performing extensive global pointer initialization in segment
// 1050:
// - PTR_DAT_1050_03a0, 029c, 4fb8, 68a2, 5744, 5768 (specialized pools)
// - PTR_DAT_1050_038c through 0392 (parameters and cached strings)
// Instantiates Simulator and performs indirect calls through its vtable.

int __stdcall16far
win16_main_init_and_run_loop
          (undefined *param_1,char *param_2,undefined2 param_3,undefined *param_4,
          undefined *param_5)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int in_AX;
  void *pvVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined *in_DX;
  uint uVar7;
  undefined2 unaff_SI;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uStack_c;
  
  if (param_4 != NULL)
  {
    return 0x0;
  }
  dos_get_system_time_to_internal_struct_far(NULL);
  srand_seed_internal_far(in_AX);
  heap_system_increment_refcount();
  pvVar3 = heap_create_pool(0x0,0x32,0x0,0x12);
  _p_Pool_Type1_Event = (void *)CONCAT22(in_DX,pvVar3);
  pvVar3 = heap_create_pool(0x0,0x64,0x0,0xc);
  _p_Pool_Type2_Component = (void *)CONCAT22(in_DX,pvVar3);
  pvVar3 = heap_create_pool(0x0,0x64,0x0,0x10);
  _p_Pool_Type3_Sprite = (void *)CONCAT22(in_DX,pvVar3);
  pvVar3 = heap_create_pool(0x0,0x64,0x0,0xe);
  _p_Pool_Type4_Timer = (void *)CONCAT22(in_DX,pvVar3);
  pvVar3 = heap_create_pool(0x0,0x1f4,0x0,0x42);
  _p_Pool_Type5_Entity = (void *)CONCAT22(in_DX,pvVar3);
  p_Pool_Type6_Node = heap_create_pool(0x0,0x32,0x0,0x6);
  PTR_DAT_1050_0000_1050_038c = param_5;
  PTR_DAT_1050_0000_1050_038e = param_4;
  PTR_DAT_1050_0000_1050_0390 = param_1;
  PTR_DAT_1050_0000_1050_576a = in_DX;
  pcVar4 = strdup_allocate(param_2);
  _PTR_DAT_1050_0000_1050_0392 = (char *)CONCAT22(in_DX,pcVar4);
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0xc));
  uVar7 = (uint)in_DX | (uint)pvVar3;
  if (uVar7 == 0x0)
  {
    puVar5 = NULL;
    uVar7 = 0x0;
  }
  else
  {
    puVar5 = Simulator_ctor(pvVar3);
  }
  uStack_c = (undefined4 *)CONCAT22(uVar7,puVar5);
  if (_PTR_DAT_1050_0000_1050_0392 != NULL)
  {
    puVar1 = (undefined2 *)((int)*uStack_c + 0x4);
    (*(code *)*puVar1)(0x1000,puVar5,uVar7,(char *)_PTR_DAT_1050_0000_1050_0392,
                       (int)((ulong)_PTR_DAT_1050_0000_1050_0392 >> 0x10));
  }
  puVar2 = (undefined2 *)*uStack_c;
  puVar1 = (undefined2 *)puVar2 + 0x4;
  puVar8 = puVar5;
  uVar9 = uVar7;
  (*(code *)*puVar1)();
  iVar6 = win16_main_message_loop_logic();
  if (uStack_c != NULL)
  {
    puVar1 = (undefined2 *)puVar2;
    (*(code *)*puVar1)(0x1000,puVar5,uVar7,0x1,puVar8,uVar9);
  }
  heap_destroy_pool((void *)_p_Pool_Type1_Event);
  heap_destroy_pool((void *)_p_Pool_Type2_Component);
  heap_destroy_pool((void *)_p_Pool_Type3_Sprite);
  heap_destroy_pool((void *)_p_Pool_Type4_Timer);
  heap_destroy_pool((void *)_p_Pool_Type5_Entity);
  return iVar6;
}



uint16_t __stdcall16far
UI_Element_WndProc_Dispatcher
          (u32 *param_1,uint16_t param_2,WPARAM16 param_3,uint16_t param_4,
          HWND16 param_5,u16 param_6,u16 param_7)
{
  undefined2 *puVar1;
  int32_t iVar2;
  uint16_t uVar3;
  LRESULT pvVar4;
  HWND16 hwnd;
  undefined2 uVar5;
  u32 local_6;
  
  uVar5 = 0x1050;
  iVar2 = GetWindowLong16(0x0,param_5);
  local_6 = CONCAT22(param_6,iVar2);
  if (param_6 == 0x0 && iVar2 == 0x0)
  {
    if (param_4 != 0x1)
    {
      pvVar4 = DefWindowProc16((u32 *)CONCAT22(param_2,param_1),param_3,param_4,param_5)
      ;
      return (uint16_t)pvVar4;
    }
    local_6 = *param_1;
    hwnd = (HWND16)(local_6 >> 0x10);
    SetWindowLong16((int32_t)(void *)local_6,hwnd,0x0);
    UI_Element_Set_HWND_If_Null((void *)local_6,hwnd);
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)local_6 + 0x1c);
  uVar3 = (*(code *)*puVar1)(0x1538,(int)local_6,(int)(local_6 >> 0x10),param_1,param_2,
                             param_3,param_4,uVar5);
  return uVar3;
}



// Targeted Scan Finding: Vtable
// Initializes Base_Graphic_Object vtable to 1008:389A.

void * __stdcall16far Base_Graphic_Object_ctor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x4) = 0x0;
  *_this = (char *)s__s__d_1050_573a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// A graphical helper that selects the object's palette into a device context and then
// deletes the previously selected palette handle to prevent resource leaks.

int __stdcall16far Base_Graphic_Object_Select_And_Free_Old_Palette(void *this,HDC16 hdc)
{
  HPALETTE16 obj;
  BOOL16 *in_stack_00000008;
  
  obj = SelectPalette16(0x0,*(HPALETTE16 *)((int)this + 0x4),*in_stack_00000008);
  *(HPALETTE16 *)((int)this + 0x4) = obj;
  DeleteObject16(obj);
  return 0x1;
}



u16 * __stdcall16far UI_Window_dtor_Alt2_Scalar_Deleting(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes object vtable to 1008:5BC4 (base 1008:389A).

void * __stdcall16far construct_object_with_vtable(astruct_491 *this,u16 param_2)
{
                // Constructor - initializes object with vtable pointers (0x389a, then
                // 0x5bc4) and default field values.
  *(char **)&_this->field0_0x0 = (char *)s_1_1050_389a;
  *(undefined2 *)((int)&this->field0_0x0 + 0x2) = 0x1008;
  this->field1_0x4 = 0x0;
  this->field2_0x8 = 0x0;
  this->field3_0xa = 0x1;
  *(char **)&_this->field0_0x0 = (char *)s__s__s__1050_5bc0 + 0x4;
  *(undefined2 *)((int)&this->field0_0x0 + 0x2) = 0x1008;
  return this;
}



void * __stdcall16far init_long_pair(void *dest,long value)
{
  undefined2 in_stack_00000006;
  
                // Initializes a long pair structure: sets first element to param_2,
                // second to 0. Returns the initialized pointer.
  *_dest = value;
  *(undefined4 *)((int)dest + 0x4) = 0x0;
  return dest;
}



// Initializes an 8-byte structure by setting its first 4 bytes to the provided value
// and the last 4 bytes to zero.

void * __stdcall16far init_8byte_pair_with_long_and_zero(void *dest,long value)
{
  undefined2 in_stack_00000006;
  
  *_dest = value;
  *(undefined4 *)((int)dest + 0x4) = 0x0;
  return dest;
}



// Targeted Scan Finding: Vtable
// Reverts vtable sequence during destruction: 1008:5BC4 -> 1008:389A.

void __stdcall16far UI_Control_Sub_dtor_logic(void *this)
{
  u16 in_stack_00000006;
  
  *_this = (char *)s__s__s__1050_5bc0 + 0x4;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  linked_list_clear_and_destroy_items(this,in_stack_00000006);
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Iterates through a linked list starting from the provided head and returns the item
// at the specified 0-based index (`param_2`). Returns 0 if the index is out of bounds.

long __stdcall16far list_get_item_at_index(void *list_head,int index)
{
  bool bVar1;
  long lVar2;
  int in_stack_00000008;
  int iStack_c;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,(long)_list_head);
  iStack_c = 0x0;
  do
  {
    lVar2 = get_next_list_item(local_a);
    if (lVar2 == 0x0)
    {
      return 0x0;
    }
    bVar1 = iStack_c != in_stack_00000008;
    iStack_c = iStack_c + 0x1;
  } while (bVar1);
  return lVar2;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far UI_Component_Add_Window_to_List(u32 param_1,u32 param_2)
{
  void *pvVar1;
  int in_DX;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  u32 local_a;
  u32 local_6;
  
  pvVar1 = validate_and_get_block((void *)_p_Pool_Type2_Component);
  local_a = CONCAT22(in_DX,pvVar1);
  if (in_DX == 0x0 && pvVar1 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar1 + 0x2) = 0x1008;
    *(undefined4 *)((int)pvVar1 + 0x4) = 0x0;
    *(undefined4 *)((int)pvVar1 + 0x8) = 0x0;
    *(char **)local_a = (char *)s__s__s__1050_5bc0;
    *(undefined2 *)((int)pvVar1 + 0x2) = 0x1008;
    local_6 = local_a;
  }
  if (local_6 == 0x0)
  {
    return 0x0;
  }
  uVar3 = (undefined2)(local_6 >> 0x10);
  *(u32 *)((int)local_6 + 0x8) = param_2;
  uVar4 = (undefined2)(param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(undefined4 *)((int)local_6 + 0x4) = *(undefined4 *)(iVar2 + 0x4);
  *(u32 *)(iVar2 + 0x4) = local_6;
  *(int *)(iVar2 + 0x8) = *(int *)(iVar2 + 0x8) + 0x1;
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far UI_Component_Append_Window_to_List(u32 *param_1,u32 param_2)
{
  u32 *puVar1;
  u16 uVar2;
  void *pvVar3;
  int in_DX;
  u32 *puVar4;
  u16 uVar5;
  u16 uVar6;
  u32 local_e;
  u32 local_a;
  u32 local_6;
  u16 *puVar2;
  
  uVar5 = (u16)((ulong)param_1 >> 0x10);
  puVar4 = (u32 *)param_1;
  if ((int)puVar4[0x2] == 0x0)
  {
    puVar2 = (u16 *)((int)*param_1 + 0x4);
    uVar2 = (*(code *)*puVar2)();
    return uVar2;
  }
  pvVar3 = validate_and_get_block((void *)_p_Pool_Type2_Component);
  local_e = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_e = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    *(undefined4 *)((int)pvVar3 + 0x4) = 0x0;
    *(undefined4 *)((int)pvVar3 + 0x8) = 0x0;
    *(char **)local_e = (char *)s__s__s__1050_5bc0;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    local_6 = local_e;
  }
  if (local_6 == 0x0)
  {
    return 0x0;
  }
  *(u32 *)((int)local_6 + 0x8) = param_2;
  do
  {
    param_1 = (u32 *)((u32 *)param_1)[0x1];
    uVar6 = (u16)((ulong)param_1 >> 0x10);
  } while (((u32 *)param_1)[0x1] != 0x0);
  ((u32 *)param_1)[0x1] = local_6;
  puVar1 = puVar4 + 0x2;
  *(int *)puVar1 = (int)*puVar1 + 0x1;
  return 0x1;
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



u32 __stdcall16far UI_Component_Pop_Window_from_List(u32 param_1)
{
  u32 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  int iVar6;
  u32 local_a;
  u32 local_6;
  
  uVar5 = (undefined2)(param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(long *)(iVar3 + 0x4) == 0x0)
  {
    return 0x0;
  }
  puVar2 = (undefined4 *)*(undefined4 *)(iVar3 + 0x4);
  iVar6 = (int)((ulong)puVar2 >> 0x10);
  puVar4 = (undefined4 *)puVar2;
  *(undefined4 *)(iVar3 + 0x4) = puVar4[0x1];
  uVar1 = puVar4[0x2];
  if (iVar6 != 0x0 || puVar4 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar2)();
  }
  *(int *)(iVar3 + 0x8) = *(int *)(iVar3 + 0x8) + -0x1;
  return uVar1;
}



long __stdcall16far get_next_list_item(void *iterator)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 in_stack_00000006;
  
                // Linked list iterator - traverses to next item in list, returns data
                // from offset 8-10. Returns 0 if list is empty or end reached.
  if ((*_iterator != 0x0) && (*(int *)((int)*_iterator + 0x8) != 0x0))
  {
    if (*(long *)((int)iterator + 0x4) == 0x0)
    {
      uVar2 = (undefined2)((ulong)*_iterator >> 0x10);
      iVar1 = (int)*_iterator;
    }
    else
    {
      uVar2 = (undefined2)((ulong)*(undefined4 *)((int)iterator + 0x4) >> 0x10);
      iVar1 = (int)*(undefined4 *)((int)iterator + 0x4);
    }
    *(undefined4 *)((int)iterator + 0x4) = *(undefined4 *)(iVar1 + 0x4);
    if (*(long *)((int)iterator + 0x4) != 0x0)
    {
      uVar2 = (undefined2)((ulong)*(undefined4 *)((int)iterator + 0x4) >> 0x10);
      iVar1 = (int)*(undefined4 *)((int)iterator + 0x4);
      return CONCAT22(*(undefined2 *)(iVar1 + 0xa),*(undefined2 *)(iVar1 + 0x8));
    }
  }
  return 0x0;
}



u16 * __stdcall16far UI_Window_dtor_Alt3_Scalar_Deleting(u16 *param_1,byte param_2)
{
  int bucket_index;
  
  bucket_index = (int)((ulong)param_1 >> 0x10);
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    heap_free_descriptor((u16 *)param_1,bucket_index);
  }
  return param_1;
}



void * __stdcall16far
UI_Control_Sub_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  UI_Control_Sub_dtor_logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Event_Manager vtable to 1008:5FC8.
// Registers global instance pointer at 1050:02A0.
// References global resource manager at 1050:0ED0 to retrieve Resource 2.

void * __stdcall16far UI_Event_Manager_ctor(void *this)
{
  long lVar1;
  undefined *in_stack_00000006;
  
  Base_Object_ctor_init_2014_Logic(this,(int)in_stack_00000006);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xc) = 0x0;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *(undefined2 *)((int)this + 0x12) = 0x0;
  *_this = 0x5fc8;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  p_UIPanelContainer = this;
  PTR_DAT_1050_0000_1050_02a2 = in_stack_00000006;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  *(undefined2 *)((int)this + 0xc) = (int)lVar1;
  *(undefined2 *)((int)this + 0xe) = (int)((ulong)lVar1 >> 0x10);
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Sets UI_Event_Manager vtable to 1008:5FC8.
// Clears global instance pointer at 1050:02A0.

void __stdcall16far UI_Event_Manager_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x5fc8;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  _p_UIPanelContainer = 0x0;
  Base_Object_dtor_2014_Logic(this);
  return;
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



// Sends an MCI_CLOSE command to the media device specified by the ID in param_2. It
// then updates the event manager (param_1) internal state by clearing the corresponding
// device slot and signaling a state change.

void __stdcall16far media_mci_close_and_update_state(void *event_manager,int device_id)
{
  uint16_t in_stack_00000008;
  
  MciSendCommand16(NULL,NULL,0x804,in_stack_00000008);
  if ((*(int *)((int)event_manager + 0xa) == 0x0) ||
     (*(uint16_t *)((int)event_manager + 0xa) != in_stack_00000008))
  {
    *(undefined2 *)((int)event_manager + 0x12) = 0x0;
  }
  else
  {
    *(undefined2 *)((int)event_manager + 0x10) = 0x0;
  }
  UI_Container_Notify_Listeners_at_Offset_4_Logic(event_manager,device_id);
  return;
}



// Targeted Scan Finding: Resource
// References MCI device class names: "waveaudio" (1050:02A4) and "sequencer"
// (1050:02B3).
// Used for identifying media type based on file extension.

HWND16 __stdcall16far
media_mci_open_and_prepare_playback(void *event_manager,char *filename)
{
  int iVar1;
  int16_t iVar2;
  int in_DX;
  char *unaff_SS;
  char *in_stack_00000008;
  HWND16 local_12c [0x6];
  HWND16 HStack_120;
  char local_11e [0x100];
  undefined4 uStack_1e;
  int iStack_1a;
  int iStack_18;
  undefined1 local_16 [0x4];
  uint16_t uStack_12;
  undefined4 uStack_e;
  
                // Will apply prototype: void __cdecl16near
                // inferred_manager_5cfe_medconf(void);
  memset_far(local_16,(int)unaff_SS,0x0);
  iStack_18 = *(int *)((int)*(undefined4 *)((int)event_manager + 0xc) + 0x72);
  iStack_1a = 0x1;
  uStack_1e = 0x105002a4;
  splitpath_far_optimized_with_segments
            ((char *)in_stack_00000008,(char *)((ulong)in_stack_00000008 >> 0x10),NULL,
             NULL,NULL);
  iVar1 = stricmp_case_insensitive_far(local_11e,unaff_SS);
  if (iVar1 == 0x0)
  {
    iStack_18 = *(int *)((int)*(undefined4 *)((int)event_manager + 0xc) + 0x74);
    uStack_1e = 0x105002b3;
    iStack_1a = 0x0;
  }
  if (iStack_18 != 0x0)
  {
    if ((iStack_1a != 0x0) && (*(int *)((int)event_manager + 0x10) != 0x0))
    {
      return 0x0;
    }
    if ((iStack_1a == 0x0) && (*(int *)((int)event_manager + 0x12) != 0x0))
    {
      return 0x0;
    }
    uStack_e = uStack_1e;
    iVar2 = MciSendCommand16((undefined1 *)CONCAT22(unaff_SS,local_16),(void *)0x2200,
                             0x803,0x0);
    if (in_DX == 0x0 && iVar2 == 0x0)
    {
      if (iStack_1a == 0x0)
      {
        *(undefined2 *)((int)event_manager + 0x12) = 0x1;
      }
      else
      {
        *(uint16_t *)((int)event_manager + 0xa) = uStack_12;
        *(undefined2 *)((int)event_manager + 0x10) = 0x1;
      }
      HStack_120 = media_create_mci_notification_window();
      if (HStack_120 == 0x0)
      {
        media_mci_close_and_update_state(event_manager,(int)filename);
        return 0x0;
      }
      memset_far(local_12c,(int)unaff_SS,0x0);
      local_12c[0x0] = HStack_120;
      local_12c[0x1] = 0x0;
      MciSendCommand16((HWND16 *)CONCAT22(unaff_SS,local_12c),(void *)0x1,0x806,
                       uStack_12);
      SetWindowWord16(uStack_12,0x0,HStack_120);
      return HStack_120;
    }
  }
  UI_Container_Notify_Listeners_at_Offset_4_Logic(event_manager,(int)filename);
  return 0x0;
}



// Targeted Scan Finding: Far Pointer / Resource
// Registers window class "MciSoundWindow" (1050:02BD).
// References instance handle at 1050:038C.
// Outputs debug string at far pointer 1050:02CC on registration failure.

HWND16 __stdcall16far media_create_mci_notification_window(void)
{
  char *pcVar1;
  undefined4 *puVar2;
  BOOL16 BVar3;
  uint16_t uVar4;
  HWND16 HVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined2 unaff_SS;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined *puStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  HGDIOBJ16 HStack_1c;
  undefined4 uStack_1a;
  undefined4 *puStack_16;
  undefined4 local_12 [0x4];
  
  puVar8 = local_12;
  pcVar7 = (char *)s_MciSoundWindow_1050_02bd;
  for (iVar6 = 0x3; iVar6 != 0x0; iVar6 += -0x1)
  {
    puVar2 = puVar8;
    puVar8 = puVar8 + 0x1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 0x4;
    *puVar2 = *(undefined4 *)pcVar1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)pcVar7;
  *(char *)((int)puVar8 + 0x2) = pcVar7[0x2];
  local_2c = 0x2000;
  uStack_2a = 0x5f44;
  uStack_28 = 0x1008;
  uStack_24 = 0x2;
  puStack_22 = PTR_DAT_1050_0000_1050_038c;
  uStack_20 = 0x0;
  uStack_1e = 0x0;
  uStack_26 = 0x0;
  HStack_1c = GetStockObject16(0x0);
  uStack_1a = 0x0;
  puStack_16 = local_12;
  BVar3 = GetClassInfo16((undefined2 *)CONCAT22(unaff_SS,&local_2c),
                         (undefined4 *)CONCAT22(unaff_SS,puStack_16),
                         (HINSTANCE16)PTR_DAT_1050_0000_1050_038c);
  if (BVar3 == 0x0)
  {
    uVar4 = RegisterClass16((undefined2 *)CONCAT22(unaff_SS,&local_2c));
    if (uVar4 == 0x0)
    {
      OutputDebugString(s_MciSound_registerClass_failed_1050_02cc);
      return 0x0;
    }
  }
  HVar5 = CreateWindow16(NULL,(HINSTANCE16)PTR_DAT_1050_0000_1050_038c,0x0,
                         (HWND16)g_ParentHWND,0x1,0x1,-0x8000,-0x8000,0x0,
                         (void *)0x2ea00cf,
                         (dword *)CONCAT22(local_12,(dword *)&g_HeapContext));
  return HVar5;
}
