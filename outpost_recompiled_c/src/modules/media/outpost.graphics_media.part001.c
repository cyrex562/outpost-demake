/*
 * Source: outpost.c
 * Theme: graphics_media
 * Chunk: 1/3
 * Original lines (combined): 48-49613
 * Boundaries: top-level declarations/definitions only
 */

#include <ghidra.h>
#include <outpost_types.h>
#include <win16_api.h>


char* s_tile2_bmp_1050_1538;
void *PTR_s_add16_wav_1050_2bdc_1050_30a4;
void* p_GlobalPaletteObject;
char* s_MciSound_registerClass_failed_1050_02cc;
char* s_add16_wav_1050_2bdc;
char* s_fem132_wav_1050_2aec;
char* s_PLNTICON_1050_4267;
char* s_SITEICON_1050_428d;
char* s_TILEICON_1050_440c;
char* s_fem16_wav_1050_2644;
void *PTR_s_463_bmp_1050_1628_1050_17ba;
void *PTR_s_add51_wav_1050_2d3a_1050_3130;



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// References global palette object via segment 1050:4230.
// Performs indirect call through [puStack_6 + 4], likely an object-specific draw
// method.

// Targets an object for drawing, handling palette selection and realization before
// invoking the object's virtual draw method.
// Coordinates and palette state are managed to ensure consistent rendering.

void __stdcall16far
UI_Draw_Object_with_Palette_Logic(void *obj_ptr, u16 flags, HDC16 hdc)
{
    if (obj_ptr == NULL) return;

    char *base_obj = (char *)obj_ptr;
    void *target_drawable = *(void **)(base_obj + 8);
    
    // If the primary drawable is missing, we cannot proceed.
    if (target_drawable == NULL) return;

    // The container can hold multiple alternate drawable objects.
    // Selection is controlled by specific bits in the flags parameter.
    if ((flags & 0x01) != 0)
    {
        void *alt1 = *(void **)(base_obj + 0x0C);
        if (alt1 != NULL) target_drawable = alt1;
    }
    
    if ((flags & 0x04) != 0)
    {
        void *alt2 = *(void **)(base_obj + 0x10);
        if (alt2 != NULL) target_drawable = alt2;
    }

    if (p_GlobalPaletteObject != NULL)
    {
        // Reference the global palette manager.
        char *palMgr = (char *)p_GlobalPaletteObject;
        void *palObj = *(void **)(palMgr + 0x0E);
        
        // Select and realize the palette. Returns the previously active palette.
        // We pass &hdc because the wrapper and virtual call expect a reference.
        HPALETTE16 hpalOld = (HPALETTE16)Palette_Object_Select_And_Realize_Wrapper_Far(palObj, &hdc);
        
        // Virtual call: target_drawable->vtable->draw(target_drawable, y, x, &hdc)
        // Offset +4 in the vtable is the draw routine.
        void **vtable = *(void ***)target_drawable;
        typedef void (__stdcall16far *DrawFunc)(void *this, int y, int x, HDC16 *pHdc);
        DrawFunc draw = (DrawFunc)vtable[1];
        
        int x = *(int *)(base_obj + 0x26);
        int y = *(int *)(base_obj + 0x28);
        
        draw(target_drawable, y, x, &hdc);
        
        // Restore the previous palette and cleanup the temporary palette handle.
        HPALETTE16 hpalUsed = (HPALETTE16)SelectPalette16(hdc, hpalOld, 0);
        DeleteObject16(hpalUsed);
    }
}



// Selects and realizes the bitmap's internal color palette into the specified device
// context (HDC). ctx ensures that the bitmap is rendered with the correct colors on
// 8-bit displays. Returns the previously selected palette handle.

HPALETTE16 __stdcall16far Bitmap_Object_Select_And_Realize_Palette(void *ctx, HDC16 *pHdc)
{
    if (ctx == NULL) return 0;
    
    char *c = (char *)ctx;
    
    // Ensure metadata and palette are initialized.
    if (*(void **)(c + 6) == NULL)
    {
        Bitmap_Object_Initialize_Metadata(ctx);
    }
    
    if (*(void **)(c + 6) == NULL)
    {
        return 0;
    }
    
    if (*(void **)(c + 0xA) == NULL)
    {
        Bitmap_Object_Initialize_Palette(ctx);
    }
    
    // Create/retrieve the HPALETTE from the internal palette object.
    HPALETTE16 hpal = Palette_Object_Create_HPALETTE_Logic(*(void **)(c + 0xA));
    *(HPALETTE16 *)(c + 0x0E) = hpal;
    
    // Select into the provided HDC.
    HPALETTE16 hpalOld = (HPALETTE16)SelectPalette16(*pHdc, hpal, 0);
    *(HPALETTE16 *)(c + 0x04) = hpalOld;
    
    // Realize the palette.
    RealizePalette16(*pHdc);
    
    return hpalOld;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [ctx + 10] during palette initialization.

void __stdcall16far Bitmap_Object_Initialize_Palette(void *ctx)
{
    if (ctx == NULL) return;
    char *c = (char *)ctx;
    
    void **vtable = *(void ***)(c + 0xA);
    if (vtable != NULL)
    {
        // Indirect call through vtable
        typedef void (__stdcall16far *InitFunc)(void *this);
        InitFunc init = (InitFunc)vtable[0];
        init(vtable);
    }
    
    void *newPal = allocate_memory(0x14);
    if (newPal != NULL)
    {
        void *buffer = *(void **)(c + 0x10);
        Palette_Object_ctor_with_buffer_init(newPal, buffer, 0);
        *(void **)(c + 0xA) = newPal;
    }
}



// Retrieves the cached Windows palette handle (HPALETTE) associated with the bitmap
// object.

HPALETTE16 __stdcall16far Bitmap_Object_Get_Palette_Handle(void *ctx)
{
    if (ctx == NULL) return 0;
    return *(HPALETTE16 *)((char *)ctx + 0x0E);
}



// Targeted Scan Finding: Vtable
// Initializes Palette_Object vtable to 1008:4F1C (base 1008:389A).

void * __stdcall16far Palette_Object_ctor_basic(void *ctx)
{
    if (ctx == NULL) return NULL;
    char *p = (char *)ctx;
    
    *(void **)p = (void *)0x10084f1c;
    *(void **)(p + 4) = NULL;
    *(short *)(p + 0x0C) = 0;
    *(void **)(p + 0x0E) = NULL;
    *(short *)(p + 0x12) = 1;
    
    return ctx;
}



// Targeted Scan Finding: Vtable
// Initializes Palette_Object vtable to 1008:4F1C (base 1008:389A).

void * __stdcall16far Palette_Object_ctor_with_buffer_init(void *ctx, void *buffer, int count)
{
    if (ctx == NULL) return NULL;
    char *p = (char *)ctx;
    
    *(void **)p = (void *)0x10084f1c;
    *(void **)(p + 4) = buffer;
    *(short *)(p + 0x0C) = (short)count;
    *(void **)(p + 0x0E) = NULL;
    *(short *)(p + 0x12) = 0;
    
    return ctx;
}



// Sets a specific color entry (index `param_3`) in the palette buffer using the 32-bit
// RGB value provided in `param_2`. Performs bounds checking.

int __stdcall16far Palette_Object_Set_Color_Logic(void *ctx, void *rgb_ptr, int index)
{
    if (ctx == NULL || rgb_ptr == NULL) return 0;
    char *p = (char *)ctx;
    
    int count = *(short *)(p + 0x0C);
    if (index >= 0 && index < count)
    {
        void *buffer = *(void **)(p + 4);
        if (buffer != NULL)
        {
            *(long *)((char *)buffer + (index * 4)) = *(long *)rgb_ptr;
            return 1;
        }
    }
    return 0;
}



void * __stdcall16far Palette_Object_Get_Buffer_Ptr_maybe(void *ctx)
{
    if (ctx == NULL) return NULL;
    return *(void **)((char *)ctx + 4);
}



// A far wrapper that selects and realizes the palette into a device context (HDC).
// Ensures the `HPALETTE` handle is valid before use.

HPALETTE16 __stdcall16far
Palette_Object_Select_And_Realize_Wrapper_Far(void *ctx, HDC16 *pHdc)
{
    HPALETTE16 hpal = Palette_Object_Create_HPALETTE_Logic(ctx);
    HPALETTE16 hpalOld = (HPALETTE16)SelectPalette16(*pHdc, hpal, 0);
    RealizePalette16(*pHdc);
    return hpalOld;
}



// Internal routine that creates a Windows `HPALETTE` handle from the object's RGB color
// table. It converts internal color formats to the standard `LOGPALETTE` structure
// before calling `CreatePalette16`.

HPALETTE16 __stdcall16far Palette_Object_Create_HPALETTE_Logic(void *ctx)
{
    if (ctx == NULL) return 0;
    char *pal = (char *)ctx;
    
    if (*(void **)(pal + 0x0E) == NULL)
    {
        int count = *(short *)(pal + 0x0C);
        void *logPal = allocate_memory((count + 2) * 4);
        if (logPal == NULL) return 0;
        
        *(void **)(pal + 0x0E) = logPal;
        *(short *)logPal = 0x300; // palVersion
        *(short *)((char *)logPal + 2) = (short)count; // palNumEntries
        
        char *entries = (char *)logPal + 4;
        char *src = *(char **)(pal + 4);
        
        if (src != NULL)
        {
            for (int i = 0; i < count; i++)
            {
                entries[i*4 + 0] = src[i*4 + 2]; // R
                entries[i*4 + 1] = src[i*4 + 1]; // G
                entries[i*4 + 2] = src[i*4 + 0]; // B
                entries[i*4 + 3] = 0;            // peFlags
            }
        }
    }
    
    return (HPALETTE16)CreatePalette16(*(void **)(pal + 0x0E));
}



// Scalar deleting destructor for the Palette_Object class. Calls the destructor and
// optionally deallocates the object's memory.

void * __stdcall16far Palette_Object_scalar_dtor(void *ctx, byte flags)
{
    Palette_Object_dtor(ctx);
    if ((flags & 0x1) != 0)
    {
        free_if_not_null(ctx);
    }
    return ctx;
}



// Initializes a Sprite or similar graphical metadata structure. Copies identification
// data from `param_4` and sets initial position/attribute fields before calling a
// sub-initialization routine.

void * __stdcall16far
Sprite_Object_init_logic(void *ctx, int y, int x, void *id_data, int flags)
{
    if (ctx == NULL) return NULL;
    char *s = (char *)ctx;
    
    *(void **)s = id_data;
    *(int *)(s + 4) = flags;
    *(int *)(s + 8) = x;
    *(int *)(s + 0x0C) = y;
    *(void **)(s + 0x10) = NULL;
    
    Sprite_Object_Clip_To_Bitmap_Bounds(ctx);
    return ctx;
}



// Plays media files using standard Windows 16-bit MCI APIs:
// - MciSendCommand16
// - MciGetErrorString16.

void __cdecl16far media_mci_play_file_logic(char *filename, int device_id)
{
    uint32_t mci_res;
    char error_buf[1024];
    
    struct {
        uint32_t callback;
        uint32_t device_id;
        char *device_type;
        char *element_name;
        char *alias;
    } open_params = {0};
    
    open_params.element_name = filename;
    open_params.device_type = (char *)0x4000; // Likely a constant or resource ID
    
    mci_res = MciSendCommand16(&open_params, 0x00030200, 0x0803, 0);
    
    uint16_t device = (uint16_t)open_params.device_id;
    if (device != 0)
    {
        if (mci_res != 0)
        {
            MciGetErrorString16(0x0400, error_buf, mci_res);
        }
        
        struct {
            uint32_t callback;
        } play_params = {0};
        
        mci_res = MciSendCommand16(&play_params, 2, 0x0806, device);
        if (mci_res != 0)
        {
            MciGetErrorString16(0x0400, error_buf, mci_res);
        }
        
        struct {
            uint32_t callback;
        } close_params = {0};
        
        mci_res = MciSendCommand16(&close_params, 1, 0x0804, device);
        if (mci_res != 0)
        {
            MciGetErrorString16(0x0400, error_buf, mci_res);
        }
    }
}



// A graphical helper that selects the object's palette into a device context and then
// deletes the previously selected palette handle to prevent resource leaks.

int __stdcall16far Base_Graphic_Object_Select_And_Free_Old_Palette(void *ctx, HDC16 *pHdc)
{
    if (ctx == NULL) return 0;
    HPALETTE16 hpal = *(HPALETTE16 *)((char *)ctx + 4);
    HPALETTE16 hpalOld = (HPALETTE16)SelectPalette16(*pHdc, hpal, 0);
    *(HPALETTE16 *)((char *)ctx + 4) = hpalOld;
    DeleteObject16(hpalOld);
    return 1;
}



// Sends an MCI_CLOSE command to the media device specified by the ID in param_2. It
// then updates the event manager (param_1) internal state by clearing the corresponding
// device slot and signaling a state change.

void __stdcall16far media_mci_close_and_update_state(void *event_manager, int device_id)
{
  char *em = (char *)event_manager;

  MciSendCommand16(NULL, NULL, 0x804, (uint16_t)device_id);

  /* Update the event manager's active device slot. */
  if ((*(int *)(em + 0xa) == 0x0) ||
      (*(uint16_t *)(em + 0xa) != (uint16_t)device_id))
  {
    *(uint16_t *)(em + 0x12) = 0x0; /* clear secondary active device slot */
  }
  else
  {
    *(uint16_t *)(em + 0x10) = 0x0; /* clear primary active device slot */
  }
  UI_Container_Notify_Listeners_at_Offset_4_Logic(event_manager, device_id);
  return;
}



// Draws the gameplay object onto a destination bitmap. If the background buffer is not
// yet initialized, it captures the underlying pixels into a sprite object before
// performing a transparent blit of the object's own graphic. ctx allows for clean
// restoration of the background during animation.

void * __stdcall16far Gameplay_Object_Draw_Logic(void *ctx, void *dest_bitmap)
{
  void *bitmap_meta; /* pvVar1: lazy-init metadata for the object's drawable */
  void *sprite;      /* pvVar2: newly allocated background sprite */
  /* y (sprite_seg=0), in_stack_* -- Win16 register/stack artifacts all removed */

  bitmap_meta = get_with_lazy_init((void *)*(undefined4 *)((int)ctx + 0x4));
  sprite = NULL;
  if ((*(int *)((int)ctx + 0xc) == 0x0) || (*(int *)((int)ctx + 0xe) == 0x0))
  {
    sprite = allocate_memory(0x14);
    if (sprite != NULL)
    {
      /* arg4 was Win16 far-ptr seg half of arg3 (x coord): dropped -> NULL in flat */
      sprite = Sprite_Object_init_logic(
                           sprite, 0,
                           (int)*(undefined4 *)((int)bitmap_meta + 0x8),
                           NULL,
                           (int)*(undefined4 *)((int)bitmap_meta + 0x4));
    }
    Sprite_Object_Capture_From_Bitmap(sprite);
  }
  /* arg2 was Win16 seg half of dest_bitmap far ptr: dropped -> NULL in flat */
  Bitmap_Object_Blit_Transparent_Logic(dest_bitmap, NULL, (void *)((int)ctx + 0x1c));
  return sprite;
}



// Manages the background pixel cache for specific gameplay object types. Based on the
// object's type ID, it either captures the current background into a sprite object or
// restores the previously captured background. ctx mechanism is used to facilitate
// flicker-free animation for certain simulated entities.

void __stdcall16far
Gameplay_Object_Manage_Background_Cache_Logic(void *ctx,void *bitmap_ptr,void *arg3)
{
  char type_id_byte;   /* cVar1 */
  void *bitmap_meta;   /* pvVar2 */
  void *sprite_obj;    /* this_00 */
  uint obj_type_id;    /* uVar3: object type ID from ctx+0x2e */
  uint sprite_ptr;     /* uVar4: non-null only if allocation succeeded */
  /* sprite_seg (=0), in_stack_0000fff6 -- Win16 register/stack artifacts: removed */

  obj_type_id = *(uint *)((int)ctx + 0x2e);
  if ((int)obj_type_id < 0x28)
  {
    if (((int)obj_type_id < 0x25) && (obj_type_id != 0x23))
    {
      if (0x23 < obj_type_id)
      {
        return;
      }
      type_id_byte = (char)obj_type_id;
      if (((type_id_byte != '\v') && (type_id_byte != '\x0f')) && (type_id_byte != '!'))
      {
        return;
      }
    }
  }
  else if ((int)obj_type_id < 0x46)
  {
    if ((int)obj_type_id < 0x43)
    {
      if ((int)obj_type_id < 0x33)
      {
        return;
      }
      if ((obj_type_id != 0x34 && 0x0 < (int)(obj_type_id - 0x33)) && (obj_type_id != 0x37))
      {
        return;
      }
    }
  }
  else if (obj_type_id != 0x49)
  {
    if ((int)(obj_type_id - 0x49) < 0x2a)
    {
      return;
    }
    if (0x5 < (int)(obj_type_id - 0x73))
    {
      return;
    }
  }
  if (*(long *)((int)ctx + 0x3a) == 0x0)
  {
    bitmap_meta = get_with_lazy_init(arg3);
    sprite_obj  = allocate_memory(0x14); /* flat: no seg prefix */
    sprite_ptr  = (uint)sprite_obj;      /* sprite_seg was 0; seg|ptr == ptr */
    if (sprite_ptr == 0x0)
    {
      *(undefined4 *)((int)ctx + 0x3a) = 0x0;
    }
    else
    {
      /* arg4 was Win16 far-ptr seg half of bitmap_meta x-field: dropped -> NULL in flat */
      bitmap_meta = Sprite_Object_init_logic(
                           sprite_obj, 0,
                           (int)*(undefined4 *)((int)bitmap_meta + 0x8),
                           NULL,
                           (int)*(undefined4 *)((int)bitmap_meta + 0x4));
      *(undefined2 *)((int)ctx + 0x3a) = bitmap_meta;
      *(uint *)((int)ctx + 0x3c) = sprite_ptr;
    }
    Sprite_Object_Capture_From_Bitmap((void *)*(undefined4 *)((int)ctx + 0x3a));
    return;
  }
  Sprite_Object_Restore_To_Bitmap((void *)*(undefined4 *)((int)ctx + 0x3a));
  return;
}



void * __stdcall16far Turn_Manager_Trigger_Next_Sequence_Event_Logic_maybe(void *ctx)
{
  /* in_stack_00000006 -- Win16 stack slot, unused: removed */
  void *result; /* uStack_4 renamed */

  result = NULL;
  if ((*(int *)((int)ctx + 0x414) == 0x0) &&
      (*(int *)((int)*(undefined4 *)((int)ctx + 0x410) + 0x8) != 0x0))
  {
    *(undefined2 *)((int)ctx + 0x414) = 0x1;
    result = Turn_Manager_Perform_MCI_Signal_Update_Logic(ctx);
  }
  return result;
}



// WARNING: Variable defined which should be unmapped: local_42
// WARNING: Variable defined which should be unmapped: local_3e
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// Loads a bitmap and its associated palette for the main view.
// It initializes a temporary bitmap to extract the palette, then creates a new
// target bitmap matching the client area dimensions.

void __stdcall16far UI_Main_View_Load_Bitmap_and_Palette_Logic_2978(void *obj_ptr)
{
    if (obj_ptr == NULL) return;

    struct Main_View_State {
        void *vtable;
        char pad[6];
        void *main_bitmap;
        void *main_palette;
    } *state = (struct Main_View_State *)obj_ptr;

    // 1. Get resource path for the main view background.
    char *path = (char *)Resource_Manager_Update_Path_by_Type_Logic(p_GlobalResourceManager, 1);
    
    // 2. Load the source bitmap from file.
    char file_obj[36];
    File_Object_ctor(file_obj, 1, path);
    
    void *bmp_src = allocate_memory(0x1E); // Size of Bitmap_Object
    if (bmp_src != NULL)
    {
        Bitmap_Object_ctor_from_other(bmp_src, file_obj);
        
        // 3. Extract palette from the source bitmap.
        // Virtual call vtable[5]: Ensure_Initialized / Get_Palette
        void **vtable = *(void ***)bmp_src;
        typedef void* (__stdcall16far *GetPalFunc)(void *this);
        GetPalFunc getPal = (GetPalFunc)vtable[5];
        void *other_pal = getPal(bmp_src);
        
        // 4. Create and initialize the target palette.
        void *new_pal = allocate_memory(0x14); // Size of Palette_Object
        if (new_pal != NULL)
        {
            Palette_Object_ctor_basic(new_pal);
            state->main_palette = new_pal;
            Palette_Object_Copy_From_Other_Logic(state->main_palette, other_pal);
        }
        
        // 5. Create a target bitmap matching the client area.
        RECT16 rect;
        GetClientRect16(g_ParentHWND, &rect);
        int width = rect.right - rect.left + 1;
        int height = rect.bottom - rect.top + 1;
        
        void *bmp_target = allocate_memory(0x1E);
        if (bmp_target != NULL)
        {
            Bitmap_Object_ctor_with_alloc(bmp_target, state->main_palette, height, width);
            state->main_bitmap = bmp_target;
        }
        
        // 6. Cleanup the temporary source bitmap.
        // Virtual call vtable[0]: Destructor
        typedef void (__stdcall16far *DtorFunc)(void *this, int flags);
        DtorFunc dtor = (DtorFunc)vtable[0];
        dtor(bmp_src, 1);
    }
    
    // 7. Cleanup the stack file object.
    File_Object_dtor(file_obj);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for Build Site object. Releases GDI palettes, DCs, and internal
// bitmap/palette objects before calling the base destructor.

// Internal destructor for Build Site object. Releases GDI palettes, DCs, and internal
// bitmap/palette objects before calling the base destructor.

void __stdcall16far Build_Site_Object_dtor_Internal(void *obj_ptr)
{
    if (obj_ptr == NULL) return;
    astruct_437 *this = (astruct_437 *)obj_ptr;

    // Set vtable? Or is it setting some internal state/tag?
    // 1018:5058 is likely the vtable for this class during destruction.
    *(void **)this = (void *)0x10185058;

    // 1. Cleanup GDI resources if an HDC is active.
    if (this->field13_0x12 != 0)
    {
        // Select back old palette and delete the temporary one.
        // field20_0x1a is likely the hPalette handle.
        HPALETTE16 hpalOld = (HPALETTE16)SelectPalette16(this->field13_0x12, (HPALETTE16)this->field20_0x1a, 0);
        DeleteObject16(hpalOld);
        DeleteDC16(this->field13_0x12);
    }

    // 2. Destroy internal objects (Bitmap/Palette objects at offsets 0xA and 0x0E).
    // These are virtual calls to destructors (index 0 in vtable).
    void **bmp_vtable;
    typedef void (__stdcall16far *DtorFunc)(void *this, int flags);

    if (this->field9_0xa != NULL)
    {
        bmp_vtable = *(void ***)this->field9_0xa;
        ((DtorFunc)bmp_vtable[0])(this->field9_0xa, 1);
    }

    if (this->field11_0xe != NULL)
    {
        bmp_vtable = *(void ***)this->field11_0xe;
        ((DtorFunc)bmp_vtable[0])(this->field11_0xe, 1);
    }

    // 3. Clear global palette reference.
    p_GlobalPaletteObject = NULL;

    // 4. Call base class destructor.
    Base_Object_dtor_2014_Logic(this);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Loads a resource object (likely a bitmap), extracts its palette, and creates internal
// Bitmap and Palette objects.

void __stdcall16far Build_Site_Object_Load_Paletted_Bitmap_Resource(void *obj_ptr, int res_id)
{
    if (obj_ptr == NULL) return;
    astruct_437 *this = (astruct_437 *)obj_ptr;

    // 1. Load the resource object (source for bitmap/palette).
    // Using global resource manager.
    void *res_src = Resource_Manager_Load_Resource_Object_Logic(p_GlobalResourceManager, res_id);
    if (res_src == NULL) return;

    // 2. Extract palette from the source resource.
    // Virtual call vtable[5]: Get_Palette?
    void **res_vtable = *(void ***)res_src;
    typedef void* (__stdcall16far *GetPalFunc)(void *this);
    GetPalFunc getPal = (GetPalFunc)res_vtable[5];
    void *other_pal = getPal(res_src);

    // 3. Destroy existing palette if it exists.
    if (this->field11_0xe != NULL)
    {
        void **pal_vtable = *(void ***)this->field11_0xe;
        typedef void (__stdcall16far *DtorFunc)(void *this, int flags);
        ((DtorFunc)pal_vtable[0])(this->field11_0xe, 1);
    }

    // 4. Create and initialize new internal Palette object.
    void *new_pal = allocate_memory(0x14);
    if (new_pal != NULL)
    {
        Palette_Object_ctor_basic(new_pal);
        this->field11_0xe = (u32 *)new_pal;
        Palette_Object_Copy_From_Other_Logic(this->field11_0xe, other_pal);
    }

    // 5. Get client area dimensions for target bitmap.
    RECT16 rect;
    GetClientRect16(g_ParentHWND, &rect);
    int width = rect.right - rect.left + 1;
    int height = rect.bottom - rect.top + 1;

    // 6. Create and initialize new internal Bitmap object.
    void *new_bmp = allocate_memory(0x1E);
    if (new_bmp != NULL)
    {
        // Signature: ctor(this, palette, height, width)
        Bitmap_Object_ctor_with_alloc(new_bmp, this->field11_0xe, height, width);
        this->field9_0xa = (u32 *)new_bmp;
    }

    // 7. Cleanup the temporary resource source.
    // Virtual call vtable[0]: Destructor
    typedef void (__stdcall16far *DtorFunc)(void *this, int flags);
    ((DtorFunc)res_vtable[0])(res_src, 1);
}



// Internal destructor for the UI Sprite Component. Frees internal sprite buffers and
// removes itself from any parent containers. Reverts vtable pointers.

void __stdcall16far UI_Sprite_Component_dtor_Internal_Cleanup_logic(long this_ref)
{
  void *ctx;
  astruct_424 *obj;
  /* uVar1 = (ulong)this_ref >> 0x10 -- segment half of this_ref far ptr, unused: removed */

  obj = (astruct_424 *)this_ref;
  *(undefined ***)this_ref = (undefined **)&PTR_DAT_1050_0000_1050_5e1a; /* set dtor vtable (1050:5e1a) */
  obj->field2_0x2 = 0x1018;
  ctx = (void *)*(void **)&obj->field_0x18;
  if (ctx != NULL) /* field22_0x1a was Win16 seg half of ctx far ptr; flat: check offset only */
  {
    Sprite_Object_free_internal_buffer(ctx);
    free_if_not_null(ctx);
  }
  if (obj->field19_0x14 != 0x0)
  {
    UI_Container_Remove_Item_at_Offset_4_Logic((void *)obj->field19_0x14, this_ref);
    Resource_Manager_Check_ID_Wrapper_Logic((void *)obj->field19_0x14);
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
UI_Draw_Centering_Indicator_Triangle_at_Midpoint(void *context, int *range_ptr)
{
    if (range_ptr == NULL) return;
    
    int min_val = range_ptr[0];
    int max_val = range_ptr[2];
    int midpoint = (max_val - min_val) / 2 + min_val;
    
    short triangle_data[3];
    // pack_3words_alt(dest, w1, w2, w3) -> [0]=w3, [1]=w2, [2]=w1
    pack_3words_alt(triangle_data, 0, 0x57, midpoint);
    
    // UI_Build_3Point_Triangle_Coordinate_Array_from_Offset
    // signature needs to be verified, but this is the logical flow.
    void *points = UI_Build_3Point_Triangle_Coordinate_Array_from_Offset(context, triangle_data, 0);
    
    GDI_Draw_Polygon_Wrapper_Call_Polygon16(context, 3, points);
}



// A thin wrapper around the Win16 Polygon16 API. Draws a closed polygon from the
// provided point array.

void __stdcall16far GDI_Draw_Polygon_Wrapper_Call_Polygon16(void *context, int count, void *points)
{
    // Need to extract HDC from context if necessary, but Polygon16 needs it.
    // Based on disassembly, it calls Polygon16(HDC, lpPoints, nCount).
    // The context pointer likely contains the HDC.
    HDC16 hdc = *(HDC16 *)((char *)context + 0x0E); // Just a guess based on patterns
    Polygon16(hdc, points, count);
}
