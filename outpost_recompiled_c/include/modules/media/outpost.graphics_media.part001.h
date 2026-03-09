/*
 * Source: outpost.h
 * Theme: graphics_media
 * Chunk: 1/1
 * Original lines (combined): 250-65785
 * Boundaries: top-level declarations/definitions only
 */

#include <outpost_types.h>
#include <ghidra.h>
#include <win16_api.h>

typedef void *LOGPALETTE_PTR;

typedef u16 HPALETTE16;

typedef u16 HICON16;

typedef struct Palette_Object Palette_Object, *PPalette_Object;

struct Palette_Object {
    void *vtable;
    void *color_buffer_ptr;
    u8 field2_0x8;
    u8 field3_0x9;
    u8 field4_0xa;
    u8 field5_0xb;
    u8 field6_0xc;
    u8 field7_0xd;
    HPALETTE16 palette_handle;
};
void __stdcall16far UI_Draw_Object_with_Palette_Logic(void *obj_ptr,u16 flags,HDC16 hdc);
HPALETTE16 __stdcall16far Bitmap_Object_Select_And_Realize_Palette(void *ctx,HDC16 *pHdc);
HPALETTE16 __stdcall16far Bitmap_Object_Get_Palette_Handle(void *ctx);
void __stdcall16far Palette_Object_Init_From_Global_Theme_Logic(void *ctx);
void * __stdcall16far Palette_Object_ctor_basic(void *ctx);
void * __stdcall16far Palette_Object_ctor_with_buffer_init(void *ctx,void *buffer,i16 count);
void __stdcall16far Palette_Object_dtor(void *ctx);
i16 __stdcall16far Palette_Object_Set_Color_Logic(void *ctx,void *rgb_ptr,i16 index);
void * __stdcall16far Palette_Object_Get_Buffer_Ptr_maybe(void *ctx);
i16 __stdcall16far Palette_Object_Copy_From_Other_Logic(void *ctx,void *other);
HPALETTE16 __stdcall16far Palette_Object_Select_And_Realize_Wrapper_Far(void *ctx,HDC16 *pHdc);
HPALETTE16 __stdcall16far Palette_Object_Create_HPALETTE_Logic(void *ctx);
void * __stdcall16far Sprite_Object_init_logic(void *ctx,i16 y,i16 x,void *id_data,i16 flags);
void __stdcall16far media_mci_close_and_update_state(void *event_manager,i16 device_id);
void * __stdcall16far Turn_Manager_Perform_MCI_Signal_Update_Logic(void *ctx);
void __stdcall16far UI_Draw_Centering_Indicator_Triangle_at_Midpoint(i32 context,i16 *range_ptr);
void __stdcall16far GDI_Draw_Polygon_Wrapper_Call_Polygon16(void *context, int count, void *points);
void __stdcall16far UI_Status_Icon_Draw_Logic(i32 context);
HPALETTE16 CreatePalette16(LOGPALETTE_PTR palette);
u16 GetSystemPaletteEtnries16(HDC16 hdc, u16 start, u16 count, void * entries);
BOOL16 DrawIcon16(HICON16 h_icon, i16 y, i16 x, HDC16 hdc);
i16 DrawText16(u16 flags, void * LPRECT16_rect, i16 count, void * LPCSTR_str, HDC16 hdc);
HICON16 LoadIcon16(void * LPCSTR_name, HINSTANCE16 h_instance);
HPALETTE16 SelectPalette16(HDC16 hdc, HPALETTE16 hpal, BOOL16 force_background);
u16 RealizePalette16(HDC16 hdc);
BOOL16 DestroyIcon16(HICON16 h_icon);
