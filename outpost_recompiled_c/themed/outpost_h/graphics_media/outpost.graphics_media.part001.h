/*
 * Source: outpost.h
 * Theme: graphics_media
 * Chunk: 1/1
 * Original lines (combined): 250-65785
 * Boundaries: top-level declarations/definitions only
 */


typedef void *LOGPALETTE_PTR;

typedef uint16_t HPALETTE16;

typedef uint16_t HICON16;

typedef struct Palette_Object Palette_Object, *PPalette_Object;

struct Palette_Object {
    void *vtable;
    void *color_buffer_ptr;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    HPALETTE16 palette_handle;
};
void __stdcall16far UI_Draw_Object_with_Palette_Logic(void *obj_ptr,byte flags,HDC16 hdc);
HPALETTE16 __stdcall16far Bitmap_Object_Select_And_Realize_Palette(void *this,HDC16 hdc);
HPALETTE16 __stdcall16far Bitmap_Object_Get_Palette_Handle(void *this);
void __stdcall16far Palette_Object_Init_From_Global_Theme_Logic(void *this);
void * __stdcall16far Palette_Object_ctor_basic(void *this);
void * __stdcall16far Palette_Object_ctor_with_buffer_init(void *this,void *buffer,int count);
void __stdcall16far Palette_Object_dtor(void *this);
int __stdcall16far Palette_Object_Set_Color_Logic(void *this,void *rgb_ptr,int index);
void * __stdcall16far Palette_Object_Get_Buffer_Ptr_maybe(void *this);
int __stdcall16far Palette_Object_Copy_From_Other_Logic(void *this,void *other);
HPALETTE16 __stdcall16far Palette_Object_Select_And_Realize_Wrapper_Far(void *this,HDC16 hdc);
void __stdcall16far Palette_Object_Create_HPALETTE_Logic(void *this);
void * __stdcall16far Sprite_Object_init_logic(void *this,int y,int x,void *id_data,int flags);
void __stdcall16far media_mci_close_and_update_state(void *event_manager,int device_id);
void * __stdcall16far Turn_Manager_Perform_MCI_Signal_Update_Logic(void *this);
void __stdcall16far UI_Draw_Centering_Indicator_Triangle_at_Midpoint(long context,int *range_ptr);
void __stdcall16far GDI_Draw_Polygon_Wrapper_Call_Polygon16(long points_data,HDC16 hdc);
void __stdcall16far UI_Status_Icon_Draw_Logic(long context);
HPALETTE16 CreatePalette16(LOGPALETTE_PTR palette);
uint16_t GetSystemPaletteEtnries16(HDC16 hdc, ushort start, ushort count, void * entries);
BOOL16 DrawIcon16(HICON16 h_icon, int16_t y, int16_t x, HDC16 hdc);
int16_t DrawText16(uint16_t flags, void * LPRECT16_rect, int16_t count, void * LPCSTR_str, HDC16 hdc);
HICON16 LoadIcon16(void * LPCSTR_name, HINSTANCE16 h_instance);
HPALETTE16 SelectPalette16(HDC16 hdc, HPALETTE16 hpal, BOOL16 force_background);
uint16_t RealizePalette16(HDC16 hdc);
BOOL16 DestroyIcon16(HICON16 h_icon);
