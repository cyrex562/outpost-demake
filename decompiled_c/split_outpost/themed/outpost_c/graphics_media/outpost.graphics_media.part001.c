/*
 * Source: outpost.c
 * Theme: graphics_media
 * Chunk: 1/3
 * Original lines (combined): 48-49613
 * Boundaries: top-level declarations/definitions only
 */

string s_tile2.bmp_1050_1538;
void *PTR_s_add16.wav_1050_2bdc_1050_30a4;
pointer p_GlobalPaletteObject;
string s_MciSound_registerClass_failed_1050_02cc;
string s_add16.wav_1050_2bdc;
string s_fem132.wav_1050_2aec;
string s_PLNTICON_1050_4267;
string s_SITEICON_1050_428d;
string s_TILEICON_1050_440c;
string s_fem16.wav_1050_2644;
void *PTR_s_463.bmp_1050_1628_1050_17ba;
void *PTR_s_add51.wav_1050_2d3a_1050_3130;



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// References global palette object via segment 1050:4230.
// Performs indirect call through [puStack_6 + 4], likely an object-specific draw
// method.

void __stdcall16far
UI_Draw_Object_with_Palette_Logic(void *obj_ptr,byte flags,HDC16 hdc)
{
  undefined2 *puVar1;
  HPALETTE16 HVar2;
  undefined2 uVar3;
  undefined1 in_stack_00000007;
  BOOL16 in_stack_0000000a;
  undefined4 *puStack_6;
  
  _obj_ptr = CONCAT13(in_stack_00000007,CONCAT12(flags,obj_ptr));
  uVar3 = (undefined2)((ulong)_obj_ptr >> 0x10);
  if (*(int *)((int)obj_ptr + 0xa) != 0x0 || *(int *)((int)obj_ptr + 0x8) != 0x0)
  {
    puStack_6 = (undefined4 *)*(undefined4 *)((int)obj_ptr + 0x8);
    if ((*(long *)((int)obj_ptr + 0xc) != 0x0) && ((hdc & 0x1) != 0x0))
    {
      puStack_6 = (undefined4 *)*(undefined4 *)((int)obj_ptr + 0xc);
    }
    if ((*(long *)((int)obj_ptr + 0x10) != 0x0) && ((hdc & 0x4) != 0x0))
    {
      puStack_6 = (undefined4 *)*(undefined4 *)((int)obj_ptr + 0x10);
    }
    uVar3 = (undefined2)((ulong)_p_GlobalPaletteObject >> 0x10);
    HVar2 = Palette_Object_Select_And_Realize_Wrapper_Far
                      ((void *)*(undefined2 *)((int)_p_GlobalPaletteObject + 0xe),
                       *(HDC16 *)((int)_p_GlobalPaletteObject + 0x10));
    puVar1 = (undefined2 *)((int)*puStack_6 + 0x4);
    (*(code *)*puVar1)();
    HVar2 = SelectPalette16(0x0,HVar2,in_stack_0000000a);
    DeleteObject16(HVar2);
  }
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



// Draws the gameplay object onto a destination bitmap. If the background buffer is not
// yet initialized, it captures the underlying pixels into a sprite object before
// performing a transparent blit of the object's own graphic. This allows for clean
// restoration of the background during animation.

void * __stdcall16far Gameplay_Object_Draw_Logic(void *this,void *dest_bitmap)
{
  void *pvVar1;
  void *pvVar2;
  int in_DX;
  int y;
  void *in_stack_00000008;
  undefined2 in_stack_0000fff2;
  
  pvVar1 = get_with_lazy_init((void *)(void *)*(undefined4 *)((int)this + 0x4));
  pvVar2 = NULL;
  if ((*(int *)((int)this + 0xc) == 0x0) || (*(int *)((int)this + 0xe) == 0x0))
  {
    y = in_DX;
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff2,0x14));
    if (y == 0x0 && pvVar2 == NULL)
    {
      pvVar2 = NULL;
    }
    else
    {
      pvVar2 = Sprite_Object_init_logic
                         (pvVar2,y,(int)*(undefined4 *)((int)pvVar1 + 0x8),
                          (void *)((ulong)*(undefined4 *)((int)pvVar1 + 0x8) >> 0x10),
                          (int)*(undefined4 *)((int)pvVar1 + 0x4));
    }
    Sprite_Object_Capture_From_Bitmap(pvVar2);
  }
  Bitmap_Object_Blit_Transparent_Logic
            ((void *)in_stack_00000008,(void *)((ulong)in_stack_00000008 >> 0x10),
             (void *)((int)this + 0x1c));
  return pvVar2;
}



// Manages the background pixel cache for specific gameplay object types. Based on the
// object's type ID, it either captures the current background into a sprite object or
// restores the previously captured background. This mechanism is used to facilitate
// flicker-free animation for certain simulated entities.

void __stdcall16far
Gameplay_Object_Manage_Background_Cache_Logic(void *this,void *bitmap_ptr,void *arg3)
{
  char cVar1;
  void *pvVar2;
  void *this_00;
  uint in_DX;
  uint uVar3;
  uint uVar4;
  undefined2 in_stack_0000fff6;
  
  uVar3 = *(uint *)((int)this + 0x2e);
  if ((int)uVar3 < 0x28)
  {
    if (((int)uVar3 < 0x25) && (uVar3 != 0x23))
    {
      if (0x23 < uVar3)
      {
        return;
      }
      cVar1 = (char)uVar3;
      if (((cVar1 != '\v') && (cVar1 != '\x0f')) && (cVar1 != '!'))
      {
        return;
      }
    }
  }
  else if ((int)uVar3 < 0x46)
  {
    if ((int)uVar3 < 0x43)
    {
      if ((int)uVar3 < 0x33)
      {
        return;
      }
      if ((uVar3 != 0x34 && 0x0 < (int)(uVar3 - 0x33)) && (uVar3 != 0x37))
      {
        return;
      }
    }
  }
  else if (uVar3 != 0x49)
  {
    if ((int)(uVar3 - 0x49) < 0x2a)
    {
      return;
    }
    if (0x5 < (int)(uVar3 - 0x73))
    {
      return;
    }
  }
  if (*(long *)((int)this + 0x3a) == 0x0)
  {
    pvVar2 = get_with_lazy_init(arg3);
    uVar3 = in_DX;
    this_00 = allocate_memory(CONCAT22(in_stack_0000fff6,0x14));
    uVar4 = uVar3 | (uint)this_00;
    if (uVar4 == 0x0)
    {
      *(undefined4 *)((int)this + 0x3a) = 0x0;
    }
    else
    {
      pvVar2 = Sprite_Object_init_logic
                         (this_00,uVar3,(int)*(undefined4 *)((int)pvVar2 + 0x8),
                          (void *)((ulong)*(undefined4 *)((int)pvVar2 + 0x8) >> 0x10),
                          (int)*(undefined4 *)((int)pvVar2 + 0x4));
      *(undefined2 *)((int)this + 0x3a) = pvVar2;
      *(uint *)((int)this + 0x3c) = uVar4;
    }
    Sprite_Object_Capture_From_Bitmap((void *)(void *)*(undefined4 *)((int)this + 0x3a))
    ;
    return;
  }
  Sprite_Object_Restore_To_Bitmap((void *)(void *)*(undefined4 *)((int)this + 0x3a));
  return;
}



void * __stdcall16far Turn_Manager_Trigger_Next_Sequence_Event_Logic_maybe(void *this)
{
  undefined2 in_stack_00000006;
  undefined2 uStack_4;
  
  uStack_4 = NULL;
  if ((*(int *)((int)this + 0x414) == 0x0) &&
     (*(int *)((int)*(undefined4 *)((int)this + 0x410) + 0x8) != 0x0))
  {
    *(undefined2 *)((int)this + 0x414) = 0x1;
    uStack_4 = Turn_Manager_Perform_MCI_Signal_Update_Logic(this);
  }
  return uStack_4;
}



// WARNING: Variable defined which should be unmapped: local_42
// WARNING: Variable defined which should be unmapped: local_3e
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Main_View_Load_Bitmap_and_Palette_Logic_2978(u32 param_1)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 in_DX;
  void *pvVar3;
  uint uVar4;
  void *palette_src;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  u32 local_42;
  u32 local_3e;
  u16 local_3a;
  u16 local_38;
  u16 local_36;
  u16 local_34;
  u32 local_32;
  u32 local_2e;
  undefined1 local_2a [0x24];
  u16 local_6;
  u16 local_4;
  
  local_6 = Resource_Manager_Update_Path_by_Type_Logic
                      ((void *)_p_GlobalResourceManager,
                       (int)((ulong)_p_GlobalResourceManager >> 0x10));
  pvVar3 = File_Object_ctor(local_2a,unaff_SS,0x1,local_6,in_DX);
  uVar7 = 0x1000;
  pvVar2 = allocate_memory(CONCAT22((undefined2)local_42,0x1e));
  uVar4 = (uint)pvVar3 | (uint)pvVar2;
  if (uVar4 == 0x0)
  {
    pvVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    uVar7 = 0x1008;
    pvVar2 = Bitmap_Object_ctor_from_other(pvVar2,pvVar3);
  }
  local_2e = CONCAT22(uVar4,pvVar2);
  puVar1 = (undefined2 *)((int)*(undefined4 *)local_2e + 0x14);
  local_32 = (*(code *)*puVar1)(uVar7,pvVar2,uVar4);
  uVar5 = (uint)(local_32 >> 0x10);
  pvVar3 = allocate_memory(CONCAT22(pvVar2,0x14));
  palette_src = (void *)(uVar5 | (uint)pvVar3);
  if (palette_src == NULL)
  {
    pvVar3 = NULL;
    palette_src = NULL;
  }
  else
  {
    pvVar3 = Palette_Object_ctor_basic(pvVar3);
  }
  uVar7 = (undefined2)(param_1 >> 0x10);
  iVar6 = (int)param_1;
  *(undefined2 *)(iVar6 + 0xe) = pvVar3;
  *(uint *)(iVar6 + 0x10) = (uint)palette_src;
  Palette_Object_Copy_From_Other_Logic
            ((void *)(void *)*(undefined4 *)(iVar6 + 0xe),
             (void *)((ulong)*(undefined4 *)(iVar6 + 0xe) >> 0x10));
  GetClientRect16((u16 *)CONCAT22(unaff_SS,&local_3a),(HWND16)g_ParentHWND);
  uVar8 = 0x1000;
  pvVar3 = allocate_memory(CONCAT22(pvVar2,0x1e));
  uVar5 = (uint)palette_src | (uint)pvVar3;
  if (uVar5 == 0x0)
  {
    *(undefined4 *)(iVar6 + 0xa) = 0x0;
  }
  else
  {
    uVar8 = 0x1008;
    pvVar3 = Bitmap_Object_ctor_with_alloc
                       (pvVar3,palette_src,(int)*(undefined4 *)(iVar6 + 0xe),
                        (int)((ulong)*(undefined4 *)(iVar6 + 0xe) >> 0x10));
    *(undefined2 *)(iVar6 + 0xa) = pvVar3;
    *(uint *)(iVar6 + 0xc) = uVar5;
  }
  local_42._0_2_ = (undefined2)local_2e;
  local_42._2_2_ = (undefined2)(local_2e >> 0x10);
  if (local_2e != 0x0)
  {
    (*(code *)*(undefined2 *)*(undefined2 **)local_2e)
              (uVar8,(undefined2)local_42,local_42._2_2_,0x1,pvVar2,uVar4,
               (undefined2)local_42,local_42._2_2_,local_2e);
  }
  File_Object_dtor(local_2a);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for Build Site object. Releases GDI palettes, DCs, and internal
// bitmap/palette objects before calling the base destructor.

void __stdcall16far Build_Site_Object_dtor_Internal(long this_ref)
{
  u32 *puVar1;
  int iVar2;
  HPALETTE16 obj;
  astruct_437 *uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  
  uVar4 = (undefined2)((ulong)this_ref >> 0x10);
  uVar3 = (astruct_437 *)this_ref;
  *(char **)this_ref = (char *)s_SCInternalPutBldg_site_0x_08lx__b_1050_5046 + 0x12;
  uVar3->field2_0x2 = 0x1018;
  if (uVar3->field13_0x12 != 0x0)
  {
    obj = SelectPalette16(0x0,uVar3->field20_0x1a,uVar3->field13_0x12);
    DeleteObject16(obj);
    unaff_CS = 0x1538;
    DeleteDC16(uVar3->field13_0x12);
  }
  puVar1 = uVar3->field9_0xa;
  iVar2 = uVar3->field10_0xc;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field11_0xe;
  iVar2 = uVar3->field12_0x10;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  _p_GlobalPaletteObject = 0x0;
  Base_Object_dtor_2014_Logic(uVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Loads a resource object (likely a bitmap), extracts its palette, and creates internal
// Bitmap and Palette objects.

void __stdcall16far Build_Site_Object_Load_Paletted_Bitmap_Resource(long context)
{
  uint uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  u16 *puVar6;
  undefined2 in_DX;
  uint extraout_DX;
  void *palette_src;
  uint uVar7;
  astruct_435 *uVar5;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined1 local_12 [0x8];
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  puVar3 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  uStack_6 = (undefined4 *)CONCAT22(in_DX,puVar3);
  puVar2 = (undefined2 *)((int)*uStack_6 + 0x14);
  uStack_a = (*(code *)*puVar2)(0x1010,puVar3,in_DX);
  uVar7 = (uint)((ulong)uStack_a >> 0x10);
  uVar8 = (undefined2)((ulong)context >> 0x10);
  uVar5 = (astruct_435 *)context;
  if (*(long *)&uVar5->field12_0xe != 0x0)
  {
    uVar1 = uVar5->field13_0x10;
    puVar4 = (undefined4 *)*(undefined4 **)&uVar5->field12_0xe;
    uVar7 = 0x0;
    if (uVar1 != 0x0 || puVar4 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar4)(0x1010,puVar4,uVar1,0x1);
      uVar7 = extraout_DX;
    }
  }
  pvVar5 = allocate_memory(CONCAT22(puVar3,0x14));
  palette_src = (void *)(uVar7 | (uint)pvVar5);
  if (palette_src == NULL)
  {
    puVar6 = NULL;
    palette_src = NULL;
  }
  else
  {
    puVar6 = Palette_Object_ctor_basic(pvVar5);
  }
  uVar5->field12_0xe = puVar6;
  uVar5->field13_0x10 = (uint)palette_src;
                // WARNING: Load size is inaccurate
  Palette_Object_Copy_From_Other_Logic
            ((void *)uVar5->field12_0xe,(void *)((ulong)uVar5->field12_0xe >> 0x10));
  GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_12),(HWND16)g_ParentHWND);
  uVar9 = 0x1000;
  pvVar5 = allocate_memory(CONCAT22(puVar3,0x1e));
  uVar7 = (uint)palette_src | (uint)pvVar5;
  if (uVar7 == 0x0)
  {
    (&uVar5->field10_0xa)[0x0] = NULL;
    (&uVar5->field10_0xa)[0x1] = NULL;
  }
  else
  {
    uVar9 = 0x1008;
    puVar6 = Bitmap_Object_ctor_with_alloc
                       (pvVar5,palette_src,(int)*(undefined4 *)&uVar5->field12_0xe,
                        (int)((ulong)*(undefined4 *)&uVar5->field12_0xe >> 0x10));
    uVar5->field10_0xa = puVar6;
    uVar5->field11_0xc = uVar7;
  }
  if (uStack_6 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_6)
              (uVar9,(undefined4 *)uStack_6,(int)((ulong)uStack_6 >> 0x10),0x1);
  }
  return;
}



// Internal destructor for the UI Sprite Component. Frees internal sprite buffers and
// removes itself from any parent containers. Reverts vtable pointers.

void __stdcall16far UI_Sprite_Component_dtor_Internal_Cleanup_logic(long this_ref)
{
  void *this;
  astruct_424 *uVar3;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ref >> 0x10);
  uVar3 = (astruct_424 *)this_ref;
  *(undefined ***)this_ref = (undefined **)&PTR_DAT_1050_0000_1050_5e1a;
  uVar3->field2_0x2 = 0x1018;
  this = (void *)*(void **)&uVar3->field_0x18;
  if (uVar3->field22_0x1a != 0x0 || this != NULL)
  {
    Sprite_Object_free_internal_buffer(this);
    free_if_not_null(this);
  }
  if (uVar3->field19_0x14 != 0x0)
  {
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)uVar3->field19_0x14,this_ref);
    Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)uVar3->field19_0x14);
  }
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4((void *)this_ref);
  return;
}



// Scalar deleting destructor for the UI Sprite Component. Calls internal destructor and
// optionally frees object memory.

long __stdcall16far
UI_Sprite_Component_dtor_Scalar_Deleting_logic(long this_ref,byte flags)
{
  UI_Sprite_Component_dtor_Internal_Cleanup_logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Calculates the midpoint of a range and draws a triangular indicator at that position
// using GDI polygons. Used for slider thumbs or selection markers.

void __stdcall16far
UI_Draw_Centering_Indicator_Triangle_at_Midpoint(long context,int *range_ptr)
{
  int unaff_SS;
  undefined2 in_stack_0000000a;
  undefined1 local_a [0x6];
  int iStack_4;
  
  if (_range_ptr != NULL)
  {
    iStack_4 = (range_ptr[0x2] - *_range_ptr >> 0x1) + *_range_ptr;
    pack_3words_alt(local_a,unaff_SS,0x0,0x57);
    UI_Build_3Point_Triangle_Coordinate_Array_from_Offset(context,local_a,unaff_SS);
    GDI_Draw_Polygon_Wrapper_Call_Polygon16(context,0x3);
  }
  return;
}



// A thin wrapper around the Win16 Polygon16 API. Draws a closed polygon from the
// provided point array.

void __stdcall16far GDI_Draw_Polygon_Wrapper_Call_Polygon16(long points_data,HDC16 hdc)
{
  HDC16 unaff_CS;
  short in_stack_0000000a;
  
  Polygon16(unaff_CS,(void *)hdc,in_stack_0000000a);
  return;
}
