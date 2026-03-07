/*
 * Source: outpost.c
 * Chunk: 15/117
 * Original lines: 15897-17083
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Window procedure for the hidden MCI notification window. It handles the
// `MM_MCINOTIFY` message by destroying the window, and the `WM_DESTROY` message by
// ensuring the associated MCI device is closed and the system state is updated via
// `media_mci_close_and_update_state`.

void __stdcall16far
media_mci_notification_window_proc(void *param_1,undefined4 param_2,undefined4 param_3)
{
  void *pvVar1;
  
  if ((uint16_t)param_3 == 0x2)
  {
    GetWindowWord16(0x0,param_3._2_2_);
    media_mci_close_and_update_state
              ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
    Turn_Manager_Perform_MCI_Signal_Update_Logic((void *)pvVar1);
  }
  else
  {
    if ((uint16_t)param_3 != 0x3b9)
    {
      DefWindowProc16((LPARAM)CONCAT22((int)param_2,param_1),
                      (WPARAM16)((ulong)param_2 >> 0x10),(uint16_t)param_3,param_3._2_2_
                     );
      return;
    }
    DestroyWindow16(param_3._2_2_);
  }
  return;
}



void * __stdcall16far
UI_Event_Manager_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  UI_Event_Manager_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global string resource manager at 1050:14CC.

char * __cdecl16far res_concatenate_strings_by_id(int param_1)
{
  ulong uVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 in_DX;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 in_stack_0000ffdc;
  int *piStack_6;
  
  _piStack_6 = (int *)CONCAT22(unaff_SS,&stack0x0006);
  pcVar3 = allocate_memory(CONCAT22(in_stack_0000ffdc,0x1000));
  uVar5 = in_DX;
  pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),param_1);
  strcpy_optimized((char *)CONCAT22(in_DX,pcVar3),(char *)CONCAT22(uVar5,pcVar4));
  while( true )
  {
    piVar2 = _piStack_6;
    uVar1 = (ulong)_piStack_6 >> 0x10;
    _piStack_6 = (int *)CONCAT22((int)uVar1,piStack_6 + 0x1);
    if (*piVar2 == 0x0) break;
    pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),*piVar2);
    strcat_append((char *)CONCAT22(in_DX,pcVar3),(char *)CONCAT22(uVar5,pcVar4));
  }
  return pcVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References debug logging flags and objects in segment 1050:
// - PTR_DAT_1050_02ec
// - _PTR_DAT_1050_02f0 (Log handle)
// Outputs debug string suffix at far pointer 1050:02FA.

void __cdecl16far log_debug_message_v(void *param_1)
{
  char *pcVar1;
  int in_DX;
  undefined2 unaff_SS;
  undefined1 local_106 [0x100];
  undefined1 *puStack_6;
  
  if (PTR_DAT_1050_0000_1050_02ec != NULL)
  {
    _puStack_6 = (undefined1 *)CONCAT22(unaff_SS,&stack0x0008);
    if (u16_1050_02ee == 0xffff)
    {
      pcVar1 = getenv_wrapper_far_ptr_search((char *)s_MONO2_1050_02f4);
      u16_1050_02ee = (u16)(in_DX != 0x0 || pcVar1 != NULL);
    }
    if (u16_1050_02ee != 0x0)
    {
      wvsprintf16(_puStack_6,param_1,(undefined1 *)CONCAT22(unaff_SS,local_106));
      OutputDebugString((undefined1 *)CONCAT22(unaff_SS,local_106));
      OutputDebugString(s__1050_02fa);
      if (_PTR_DAT_1050_0000_1050_02f0 != NULL)
      {
        handle_open_resource_locked(_PTR_DAT_1050_0000_1050_02f0,0x2fd,0x1050,local_106)
        ;
        handle_flush_specific(_PTR_DAT_1050_0000_1050_02f0);
      }
    }
  }
  return;
}



char * __cdecl16far strdup_allocate(char *str)
{
  uint uVar1;
  char *pcVar2;
  int in_DX;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000fff8;
  
                // String duplication - allocates memory for strlen+1, copies string,
                // returns new pointer. Returns NULL if param is NULL or allocation
                // fails.
  if (_str != NULL)
  {
    uVar1 = strlen_get_length((char *)CONCAT22(in_stack_00000006,str));
    pcVar2 = allocate_memory(CONCAT22(in_stack_0000fff8,uVar1 + 0x1));
    if (in_DX != 0x0 || pcVar2 != NULL)
    {
      strcpy_optimized((char *)CONCAT22(in_DX,pcVar2),
                       (char *)CONCAT22(in_stack_00000006,str));
      return pcVar2;
    }
  }
  return NULL;
}



int __cdecl16far random_int_range(int min,int max)
{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iStack_12;
  int iStack_10;
  
                // Random integer in range [param_1, param_2] inclusive. Uses linear
                // congruential method.
  uVar1 = rand_next_internal_far_u15();
  iVar2 = (max - min) + 0x1;
  if (iVar2 == 0x0)
  {
    return min;
  }
  iStack_10 = 0x1;
  iStack_12 = min;
  while( true )
  {
    if (max < iStack_12)
    {
      return max;
    }
    lVar3 = (long)iStack_10 * (long)(0x7fff / (sqword)(long)iVar2);
    if (((int)uVar1 <= lVar3) && ((true || (uVar1 <= (uint)lVar3)))) break;
    iStack_12 += 0x1;
    iStack_10 += 0x1;
  }
  return iStack_12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_DanBrotherton_Window vtable to 1008:6378.
// References string literal "DanBrotherton" (1050:0302).
// References global resource manager in segment 1050 (offset 0ed0) to retrieve theme
// resource 0x48.

void * __stdcall16far
UI_DanBrotherton_Window_ctor(void *this,int arg2,int arg3,void *parent)
{
  HGDIOBJ16 HVar1;
  HCURSOR16 HVar2;
  undefined2 uVar3;
  long lVar4;
  undefined4 in_stack_0000000c;
  
  UI_Base_Window_ctor(this,(void *)arg2);
  *(int *)((int)this + 0xde) = arg3;
  *(undefined2 *)((int)this + 0xe0) = 0x0;
  *_this = 0x6378;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  strcpy_optimized((char *)CONCAT22(arg2,(char *)((int)this + 0x5b)),
                   s_DanBrotherton_1050_0302);
  HVar1 = GetStockObject16(0x4);
  *(HGDIOBJ16 *)((int)this + 0xc6) = HVar1;
  HVar2 = LoadCursor16((void *)0x7f00,0x0);
  *(HCURSOR16 *)((int)this + 0xc4) = HVar2;
  *(undefined2 *)((int)this + 0xc8) = (char *)s_572_bmp_1050_2007 + 0x4;
  *(undefined4 *)((int)this + 0xac) = 0x45000000;
  *(undefined2 *)((int)this + 0xbc) = *(undefined2 *)((int)in_stack_0000000c + 0x8);
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
  *(undefined2 *)((int)this + 0xb4) = 0x0;
  *(undefined2 *)((int)this + 0xb6) = 0x0;
  *(undefined2 *)((int)this + 0xb8) = *(undefined2 *)((int)lVar4 + 0xa);
  *(undefined2 *)((int)this + 0xba) = *(undefined2 *)((int)lVar4 + 0xc);
  *(undefined2 *)((int)this + 0xca) = parent;
  UI_Container_Register_Class_Logic(this);
  return this;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [this + 0xd2] at offset 0x14, likely a child tracker
// cleanup method.

void __stdcall16far UI_Window_Destroy_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)((int)this + 0xd2) + 0x14);
  (*(code *)*puVar1)();
  DestroyWindow16(*(HWND16 *)((int)this + 0x8));
  *(undefined2 *)((int)this + 0x8) = 0x0;
  return;
}



void __stdcall16far UI_Window_OnPaint_Fill_Background(u32 param_1)
{
  int iVar1;
  undefined2 uVar2;
  void *unaff_SS;
  HDC16 in_stack_0000ffc8;
  undefined1 local_2e [0x8];
  u16 local_26;
  u16 local_24;
  undefined1 local_22 [0x20];
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  iVar1 = (int)param_1;
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)(iVar1 + 0x8));
  local_26 = CreateSolidBrush16(0x70b);
  GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_2e),*(HWND16 *)(iVar1 + 0x8));
  FillRect16(local_26,(void *)CONCAT22(local_24,unaff_SS),in_stack_0000ffc8);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar1 + 0x8));
  DeleteObject16(local_26);
  return;
}



void __stdcall16far far_noop_stub_1008_2(void)
{
  return;
}



void __stdcall16far far_noop_stub_1008_3(void)
{
  return;
}



void __stdcall16far far_noop_stub_1008_4(void)
{
  return;
}



u16 * __stdcall16far
UI_Window_With_Control_dtor_Scalar_Deleting(u16 *param_1,byte param_2)
{
  u16 *ptr;
  undefined2 uVar1;
  
  ptr = (u16 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (u16)(char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
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
  uint in_DX;
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
  y = in_DX | (uint)pvVar2;
  if (y == 0x0)
  {
    pvVar2 = NULL;
    y = 0x0;
  }
  else
  {
    pvVar2 = Bitmap_Object_Subclass_ctor_with_alloc(pvVar2,in_DX,(int)count);
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
  void *in_DX;
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
  y = (uint)in_DX | (uint)pvVar2;
  if (y == 0x0)
  {
    pvVar2 = NULL;
    y = 0x0;
  }
  else
  {
    pvVar2 = Bitmap_Object_ctor_with_alloc
                       (pvVar2,in_DX,(int)*(undefined4 *)((int)src_bitmap + 0x4),
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes Bitmap_Object subclass vtable to 1008:685A.
// References global heap in segment 1050:5f2c to allocate separate metadata and pixel
// buffers.

void * __stdcall16far
Bitmap_Object_Subclass_ctor_with_alloc(void *this,int height,int width)
{
  void *pvVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined2 uVar5;
  int in_stack_0000000a;
  
  pvVar1 = Bitmap_Object_ctor_basic(this);
  *_this = 0x685a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  pvVar4 = heap_alloc_with_flags(0x1,0x28,_g_AllocatedBlock_Offset);
  *(undefined2 *)((int)this + 0x10) = pvVar1;
  *(undefined2 *)((int)this + 0x12) = pvVar4;
  iVar2 = in_stack_0000000a * 0x8 + 0x1f;
  iVar2 = ((int)(iVar2 + (iVar2 >> 0xf & 0x1fU)) >> 0x5) << 0x2;
  *(int *)((int)this + 0x18) = iVar2;
  *(int *)((int)this + 0x1a) = iVar2 >> 0xf;
  lVar3 = (long)iVar2 * (long)width;
  pvVar1 = heap_alloc_with_flags(0x1,lVar3,_g_AllocatedBlock_Offset);
  *(undefined2 *)((int)this + 0x6) = (int)lVar3;
  *(undefined2 *)((int)this + 0x8) = pvVar1;
  *(undefined2 *)((int)this + 0x14) = *(undefined2 *)((int)this + 0x6);
  *(undefined2 *)((int)this + 0x16) = pvVar1;
  *(undefined4 *)*(undefined4 *)((int)this + 0x10) = 0x28;
  *(long *)((int)*(undefined4 *)((int)this + 0x10) + 0x4) = (long)in_stack_0000000a;
  uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x10) >> 0x10);
  iVar2 = (int)*(undefined4 *)((int)this + 0x10);
  *(int *)(iVar2 + 0x8) = width;
  *(int *)(iVar2 + 0xa) = width >> 0xf;
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0x10) + 0xc) = 0x1;
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0x10) + 0xe) = 0x8;
  *(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x10) = 0x0;
  *(long *)((int)*(undefined4 *)((int)this + 0x10) + 0x14) =
       *(long *)((int)this + 0x18) * (long)width;
  *(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x20) = 0x100;
  *(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x24) = 0x100;
  return this;
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



// Performs a deep clone of the specialized Bitmap_Object subclass. It allocates a new
// instance and copies both the metadata header and the full pixel buffer.

void * __stdcall16far Bitmap_Object_Subclass_Clone_Logic(void *this)
{
  void *pvVar1;
  uint in_DX;
  uint uVar2;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000fff2;
  
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    return NULL;
  }
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff2,0x1e));
  uVar2 = in_DX | (uint)pvVar1;
  if (uVar2 == 0x0)
  {
    pvVar1 = NULL;
    uVar2 = 0x0;
  }
  else
  {
    pvVar1 = Bitmap_Object_Subclass_ctor_with_alloc
                       (pvVar1,in_DX,
                        *(int *)((int)*(undefined4 *)((int)this + 0x10) + 0x8));
  }
  memcpy_far_words((void *)(void *)*(undefined4 *)((int)pvVar1 + 0x10),
                   (void *)((ulong)*(undefined4 *)((int)pvVar1 + 0x10) >> 0x10),
                   (int)*(undefined4 *)((int)this + 0x10));
  HMemCpy((int32_t)(*(long *)((int)*(undefined4 *)((int)pvVar1 + 0x10) + 0x8) *
                   *(long *)((int)this + 0x18)),(void *)*(undefined4 *)((int)this + 0x6)
          ,(void *)*(undefined4 *)((int)pvVar1 + 0x6));
  *(undefined2 *)((int)pvVar1 + 0x1c) = 0x1;
  return pvVar1;
}



void __stdcall16far far_noop_stub_1008_5(void)
{
  return;
}



void __stdcall16far far_noop_stub_1008_6(void)
{
  return;
}



void __stdcall16far far_noop_stub_1008_7(void)
{
  return;
}



u16 __stdcall16far far_return_zero_stub_1008(void)
{
  return 0x0;
}



void __stdcall16far far_noop_stub_1008_8(void)
{
  return;
}



u16 __stdcall16far far_return_zero_stub_1008_2(void)
{
  return 0x0;
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



// Targeted Scan Finding: Vtable
// Initializes child tracker at offset 0xd2 via construct_object_with_vtable (sets
// 1008:5BC4).
// Sets main window vtable to 1008:6BFC.

void * __stdcall16far UI_Base_Window_ctor(void *this,void *parent)
{
  UI_Element_ctor(this,parent);
  *(undefined2 *)((int)this + 0xcc) = 0x0;
  *(undefined4 *)((int)this + 0xce) = 0x0;
  construct_object_with_vtable((astruct_491 *)((int)this + 0xd2),(u16)parent);
  *_this = 0x6bfc;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0xdc) = 0x0;
  return this;
}



// Updates the window's screen position or dimensions and triggers a refresh/update
// cycle for all registered child components.

int __stdcall16far UI_Window_Set_Position_and_Refresh_Children(void *this,int show_cmd)
{
  int iVar1;
  
  iVar1 = UI_Element_ShowWindow_Wrapper(this,show_cmd);
  UI_Window_Refresh_All_Child_Handlers(this);
  return iVar1;
}



// Targeted Scan Finding: Vtable
// Performs multiple indirect calls through child vtables at offsets 0x10
// (Activation/Deactivation) and 0xC (Refresh).

void __stdcall16far UI_Window_Set_Active_Child_Logic(void *this,void *child,int flags)
{
  undefined2 *puVar1;
  undefined2 in_stack_0000000a;
  int in_stack_0000000e;
  
  if (in_stack_0000000e == 0x0)
  {
    if (*(long *)((int)this + 0xce) != CONCAT22(in_stack_0000000a,flags))
    {
      if (*(long *)((int)this + 0xce) != 0x0)
      {
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xce) + 0x10);
        (*(code *)*puVar1)();
      }
      *(long *)((int)this + 0xce) = CONCAT22(in_stack_0000000a,flags);
      puVar1 = (undefined2 *)((int)*(undefined4 *)flags + 0x10);
      (*(code *)*puVar1)();
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xce) + 0xc);
      (*(code *)*puVar1)();
      return;
    }
  }
  else
  {
    UI_Call_Virtual_Refresh_maybe(this);
  }
  return;
}



// Targeted Scan Finding: Vtable
// Initializes a child event tracker with vtable 1008:6C8C (base 1008:389A).
// Performs an indirect call through [param_1 + 0xd2] at offset 4, likely adding the
// tracker to a managed list.

void __stdcall16far
UI_Window_Register_Child_Event_Handler
          (undefined4 param_1,int param_2,undefined4 param_3)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int in_DX;
  undefined2 in_stack_0000ffe0;
  undefined4 uStack_a;
  undefined2 *puStack_6;
  
  puVar2 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xa));
  uStack_a = (undefined2 *)CONCAT22(in_DX,puVar2);
  if (in_DX == 0x0 && puVar2 == NULL)
  {
    puStack_6 = NULL;
  }
  else
  {
    if (param_2 == 0x0)
    {
      param_2 = *(int *)((int)param_1 + 0xcc);
    }
    *uStack_a = (char *)s_1_1050_389a;
    puVar2[0x1] = 0x1008;
    *(undefined4 *)(puVar2 + 0x2) = param_3;
    puVar2[0x4] = param_2;
    *uStack_a = 0x6c8c;
    puVar2[0x1] = 0x1008;
    puStack_6 = uStack_a;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)((int)param_1 + 0xd2) + 0x4);
  (*(code *)*puVar1)(0x1000,(undefined4 *)((int)param_1 + 0xd2),param_1._2_2_,
                     (undefined2 *)puStack_6,(int)((ulong)puStack_6 >> 0x10));
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect calls through vtable offset 0xC of all tracked child objects in a
// loop.

void __stdcall16far UI_Window_Refresh_All_Child_Handlers(void *this)
{
  undefined2 *puVar1;
  int iVar2;
  long lVar3;
  undefined2 in_stack_00000006;
  undefined1 local_a [0x8];
  
  init_8byte_pair_with_long_and_zero
            (local_a,CONCAT22(in_stack_00000006,(int)this + 0xd2));
  while( true )
  {
    lVar3 = get_next_list_item(local_a);
    iVar2 = (int)((ulong)lVar3 >> 0x10);
    if (iVar2 == 0x0 && (int)lVar3 == 0x0) break;
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)lVar3 + 0x4) + 0xc)
    ;
    (*(code *)*puVar1)();
  }
  return;
}



// Targeted Scan Finding: Vtable
// Performs multiple indirect calls through vtable offsets:
// - [this + 0xd2] offset 0xC (Refresh)
// - [uStack_6 + 4] offset 0x10 (Activation)
// Manages window focus and sub-object activation.

void __stdcall16far
UI_Window_Handle_Child_Command_and_Switch_Focus
          (void *this,int command_id,int arg3,int flags)
{
  undefined2 *puVar1;
  int iVar2;
  long lVar3;
  int in_stack_0000000c;
  undefined1 local_e [0x4];
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  if (in_stack_0000000c == 0x2)
  {
    init_8byte_pair_with_long_and_zero(local_e,CONCAT22(command_id,(int)this + 0xd2));
    do
    {
      uStack_6 = get_next_list_item(local_e);
      iVar2 = (int)((ulong)uStack_6 >> 0x10);
      if (iVar2 == 0x0 && (int)uStack_6 == 0x0) break;
    } while (*(int *)((int)uStack_6 + 0x8) != arg3);
    if (uStack_6 != 0x0)
    {
      puVar1 = (undefined2 *)((int)*(undefined4 *)((int)this + 0xd2) + 0xc);
      (*(code *)*puVar1)();
      uStack_a = 0x0;
      lVar3 = get_next_list_item(local_e);
      uStack_6._2_2_ = (int)((ulong)lVar3 >> 0x10);
      uStack_6._0_2_ = (int)lVar3;
      if (uStack_6._2_2_ != 0x0 || (int)uStack_6 != 0x0)
      {
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)uStack_6 + 0x4) + 0x10);
        (*(code *)*puVar1)();
        *(undefined4 *)((int)this + 0xce) = *(undefined4 *)((int)uStack_6 + 0x4);
        return;
      }
      *(undefined4 *)((int)this + 0xce) = 0x0;
    }
  }
  return;
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



// Targeted Scan Finding: Vtable
// Performs indirect call through [this + 0xce] vtable offset 0x68.

void __stdcall16far UI_Window_Call_Active_Child_Method_0x68(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0xd0) != 0x0 || *(int *)((int)this + 0xce) != 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xce) + 0x68);
    (*(code *)*puVar1)();
  }
  return;
}



// Targeted Scan Finding: Vtable
// Resets UI_Event_Handler_Tracker vtable to 1008:6C8C and then 1008:389A during
// destruction.
// Performs indirect call through [this + 4] during cleanup.

void * __stdcall16far UI_Event_Handler_Tracker_scalar_dtor(void *this,byte flags)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  uVar2 = (undefined2)((ulong)_this >> 0x10);
  *_this = 0x6c8c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0x6) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x4);
    (*(code *)*puVar1)();
  }
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Resets UI_Base_Window vtable to 1008:380A and then 1008:389A during destruction.

void * __stdcall16far UI_Base_Window_scalar_dtor(void *this,byte flags)
{
  undefined2 uVar1;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  uVar1 = (undefined2)((ulong)_this >> 0x10);
  UI_Control_Sub_dtor_logic((void *)((int)this + 0xd2));
  *_this = 0x380a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Zero-initializes a 12-byte structure by calling the 6-byte zero initializer twice.

void * __stdcall16far zero_init_12bytes_struct(void *ptr)
{
  zero_init_struct_6bytes(ptr);
  zero_init_struct_6bytes((void *)((int)ptr + 0x6));
  return ptr;
}



// Copies two 6-byte structures into a single 12-byte destination structure.

void * __stdcall16far copy_two_6byte_structs_to_12byte(void *dest,void *src1,void *src2)
{
  undefined2 in_stack_0000000a;
  undefined4 *in_stack_0000000c;
  undefined2 in_stack_0000000e;
  
  *_dest = *in_stack_0000000c;
  *(undefined2 *)((int)dest + 0x4) = *(undefined2 *)(in_stack_0000000c + 0x1);
  *(undefined4 *)((int)dest + 0x6) = *(undefined4 *)src2;
  *(undefined2 *)((int)dest + 0xa) = *(undefined2 *)((int)src2 + 0x4);
  return dest;
}



// Packs two sets of 3-word vectors into a 12-byte structure using reverse word packing.

void __stdcall16far
pack_two_3word_structs
          (void *param_1,int param_2,int param_3,undefined2 param_4,int param_5,
          int param_6)
{
  int w1;
  
  w1 = (int)((ulong)param_1 >> 0x10);
  pack_3words_reverse((void *)param_1,w1,param_5,param_6);
  pack_3words_reverse((void *)((int)(void *)param_1 + 0x6),w1,param_2,param_3);
  return;
}



// Alternative routine to copy two 6-byte structures into a contiguous 12-byte
// destination.

void __stdcall16far
copy_two_6byte_structs_to_12byte_v2(void *dest,void *src1,void *src2)
{
  copy_struct_6bytes(dest,src1);
  copy_struct_6bytes((void *)((int)dest + 0x6),src1);
  return;
}



// Splits a 12-byte structure into two separate 6-byte destinations.

void __stdcall16far split_12byte_struct_to_two_6byte(void *src,void *dest1,void *dest2)
{
  void *in_stack_0000000a;
  void *in_stack_0000000c;
  
  copy_struct_6bytes((void *)in_stack_0000000c,
                     (void *)((ulong)in_stack_0000000c >> 0x10));
  copy_struct_6bytes(dest2,in_stack_0000000a);
  return;
}



// Copies the first 6 bytes of a structure to a destination and then calculates the
// absolute difference between those bytes and the second 6 bytes of the source.

void __stdcall16far
calc_abs_diff_between_halves_of_12byte_struct
          (void *dest,void *src,u16 param_3,u16 param_4)
{
  copy_struct_6bytes((void *)param_3,(void *)param_4);
  calc_abs_diff_3ints((int *)param_3,(int *)param_4,(int)dest + 0x6,(u16)src);
  return;
}



// Targeted Scan Finding: Far Pointer / Resource
// Initializes global save version pointer at 1050:0312.
// Uses 1050:1050 as scratch for sprintf.
// References string literal "SC%03d" (1050:031C) for file header formatting.

void * __stdcall16far file_context_init_logic(void *this,char *filename)
{
  char *pcVar1;
  undefined2 in_DX;
  char *in_stack_00000008;
  
  *_this = 0x0;
  *(undefined2 *)((int)this + 0x4) = 0xffff;
  PTR_DAT_1050_0000_1050_0312 = (undefined *)&p_LastAllocatedBlock;
  sprintf_wrapper(0x65a0,0x1050,(void *)PTR_s_SC_03d_1050_0314_1050_031c,
                  (int)((ulong)PTR_s_SC_03d_1050_0314_1050_031c >> 0x10),0x4);
  pcVar1 = strdup_allocate(in_stack_00000008);
  *(char **)_this = pcVar1;
  *(undefined2 *)((int)this + 0x2) = in_DX;
  return this;
}



// Cleans up a file operation context. It ensures the associated file handle is closed
// and frees the duplicated filename string.

void __stdcall16far file_context_cleanup_logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x4) != -0x1)
  {
    _lclose16(*(HFILE16 *)((int)this + 0x4));
    *(undefined2 *)((int)this + 0x4) = 0xffff;
  }
  free_if_not_null((void *)(void *)*_this);
  return;
}



// Orchestrates the entire game saving sequence. It creates the file, writes the header,
// saves individual component chunks (UI, etc.), saves the core simulation state
// (planets, structures), and finally verifies the file integrity.

int __stdcall16far file_context_perform_save_sequence_logic(void *this)
{
  int iVar1;
  int unaff_SS;
  void *in_stack_00000006;
  undefined1 local_4 [0x2];
  
  g_LastFileErrorMsgID = NULL;
  iVar1 = file_context_create_and_write_header_logic(this);
  if (iVar1 != 0x0)
  {
    set_u16_logic(local_4,unaff_SS);
    iVar1 = file_context_save_component_chunks_logic(this,in_stack_00000006);
    if ((iVar1 != 0x0) &&
       (iVar1 = file_context_save_core_state_logic(this,in_stack_00000006), iVar1 != 0x0
       ))
    {
      iVar1 = file_context_close_handle_logic(this);
      if (iVar1 == 0x0)
      {
        return 0x0;
      }
      return 0x1;
    }
    _lclose16(*(HFILE16 *)((int)this + 0x4));
  }
  return 0x0;
}



// Orchestrates the entire game loading sequence. It opens the file, verifies the
// header, loads component chunks, loads the core simulation state, and performs final
// integrity checks.

int __stdcall16far file_context_perform_load_sequence_logic(void *this)
{
  int iVar1;
  int unaff_SS;
  void *in_stack_00000006;
  undefined1 local_4 [0x2];
  
  g_LastFileErrorMsgID = NULL;
  iVar1 = file_context_open_and_verify_header_logic(this);
  if (iVar1 != 0x0)
  {
    set_u16_logic(local_4,unaff_SS);
    iVar1 = file_context_load_component_chunks_logic(this,in_stack_00000006);
    if ((iVar1 != 0x0) &&
       (iVar1 = file_context_load_core_state_logic(this,in_stack_00000006), iVar1 != 0x0
       ))
    {
      iVar1 = file_context_close_handle_logic(this);
      if (iVar1 == 0x0)
      {
        return 0x0;
      }
      return 0x1;
    }
    _lclose16(*(HFILE16 *)((int)this + 0x4));
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References multiple global subsystem pointers in segment 1050:
// - PTR_DAT_1050_5748 (Global State)
// - PTR_DAT_1050_5736 (Object Library)
// - PTR_DAT_1050_65e2 (World Context)
// - PTR_DAT_1050_5a64 (Turn Manager)
// Performs indirect call through [PTR_DAT_1050_5748] vtable.

int __stdcall16far file_context_save_core_state_logic(void *this,void *handle_ptr)
{
  int iVar1;
  u16 uVar2;
  u16 unaff_SS;
  void *in_stack_00000008;
  undefined1 local_e [0x4];
  undefined4 uStack_a;
  undefined4 *puStack_6;
  
  puStack_6 = (undefined4 *)*_p_SimulatorGlobalState;
  uStack_a = *puStack_6;
  UI_Entity_Summary_Display_ctor_a43e((undefined1 *)CONCAT22(unaff_SS,local_e));
  iVar1 = Save_File_Write_Footer_Marker_Alternative_d7a0
                    ((u16)uStack_a,(u16)((ulong)uStack_a >> 0x10),in_stack_00000008);
  if (iVar1 != 0x0)
  {
    iVar1 = Simulator_Object_Library_Save_to_File_Logic_5c1a
                      (_p_SimulatorObjectLibrary,in_stack_00000008);
    if (iVar1 != 0x0)
    {
      uVar2 = Simulator_Context_Save_to_File_Comprehensive_dce2
                        ((u32 *)_p_SimulatorWorldContext,in_stack_00000008);
      if (uVar2 != 0x0)
      {
        uVar2 = Simulator_Turn_Manager_Save_to_File_Logic_7b20
                          (_p_SimulatorTurnManager,in_stack_00000008);
        if (uVar2 != 0x0)
        {
          iVar1 = Save_File_Write_Footer_Marker_a644
                            ((u16)local_e,unaff_SS,in_stack_00000008);
          if (iVar1 != 0x0)
          {
            return 0x1;
          }
        }
      }
    }
  }
  return 0x0;
}
