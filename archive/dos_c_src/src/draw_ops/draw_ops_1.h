//
// Created by cyrex on 2/25/2022.
//

#ifndef OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_1_H_
#define OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_1_H_

#include "../globals.h"
#include "structs/structs_0xx/struct_18.h"
#include "structs/structs_0xx/struct_37.h"
#include "structs/structs_0xx/structs_1x.h"
#include "structs/structs_0xx/structs_7x.h"
#include "structs/structs_3xx/struct_380.h"

void pass1_1040_d1bc(Globals* globals, Struct18 *param_1);

void pass1_1040_ca74(Globals* globals, Struct18 *param_1);

void pass1_1040_c94a(Globals *globals, Struct380 *pstruct_arg1,
                     u8 *param_3,
                     i16 param_4,
                     u16 param_5,
                     u16 param_6);

void palette_op_1040_c886(Globals *globals, u32 param_1, u8 param_2, u16 param_3, HDC16 param_4);

void draw_op_1040_c74c(Globals *globals, u32 *param_1, u32 param_2, u16 param_3);

void unk_draw_op_1040_c226(u32 param_1, HWND16 param_2, u16 param_3);

void draw_line_1040_c302(u32 param_1, HDC16 param_2);

void draw_op_1040_c38e(u32 param_1);

void invalidate_rect_1040_c028(u32 param_1, i16 param_2, HWND16 param_3, RECT16 *param_4);

Struct18 *pass1_1040_be94(Globals *globals, Struct18 *param_1, u8 param_2);

Struct18 *pass1_1040_b74c(Struct18 *param_1, u8 param_2);

void draw_text_1040_94fc(Globals *globals, Struct37 *param_1, HDC16 param_2);

void win_ui_op_1040_b372(Globals *globals,
                         u32      param_1,
                         u16      param_2,
                         u16      param_3,
                         COLORREF in_colorref_4);

void pass1_1040_ace8(Globals *globals, Struct18 *param_1);

Struct18 *pass1_1040_abe2(Struct18 *param_1, u8 param_2);

void draw_op_1040_a67e(Globals *globals,
                       u32      param_1,
                       i16      param_2,
                       u16      param_3,
                       COLORREF param_4);

u16 *unk_win_ui_op_1040_9854(Globals *globals, u16 *param_1, u16 param_2);

void draw_op_1040_9948(u16 param_1,
                       Struct71 *param_2, HWND16 param_3, RECT16 *param_4);

void mixed_draw_op_1040_8a06(Globals *globals, u32 param_1, HWND16 param_2, u16 param_3);

void pass1_1040_8e82(Globals *globals, Struct18 *param_1);

void pass1_1040_9252(Struct65 *param_1);

void unk_draw_op_1040_9458(Struct17 *param_1, u8 param_2, u16 param_3, HDC16 param_4);

void draw_text_1040_94fc(Globals *globals, Struct37 *param_1, HDC16 param_2);

void draw_text_1040_9650(Struct65 *pstruct_arg_1, HWND16 hwnd_arg_2);

void draw_op_1040_82ee(Struct15 *param_1, COLORREF in_colorref_2);

u32 set_text_bk_color_1040_7e5e(Globals *globals,
                                u32     *param_1,
                                u16      param_2,
                                u16      param_3,
                                u16      param_4);

void draw_op_1040_7bb2(Struct14 *in_struct_1, HWND16 in_win_handle_2, u16 param_3);

Struct18 *pass1_1040_767e(Struct18 *param_1, u8 param_2);

Struct18 *pass1_1040_6360(Struct18 *param_1, u8 param_2);

void pass1_1040_6862(Struct18 *param_1);

Struct18 *pass1_1040_4df2(Struct18 *param_1, u8 param_2);

void pass1_1040_4f0a(Struct18 *param_1);

void draw_op_1040_5a06(u32 param_1, HWND16 param_2, u16 param_3);

u16 get_dc_op_1040_3d5e(u32 param_1, HWND16 param_2, u16 param_3);

void invalidate_rect_1040_3ddc(Struct2 *in_struct_1, HWND16 in_win_handle_2);

Struct18 *pass1_1040_47fe(Struct18 *param_1, u8 param_2);

u32 draw_ui_op_1040_27cc(u32 *param_1, u16 param_2, u16 param_3, COLORREF param_4);

void pass1_1040_2a22(Struct18 *param_1);

void mix_draw_op_1040_21d6(u32 param_1, HWND16 param_2, u16 param_3);

u32 set_text_bk_color_1040_0cc0(Globals *globals,
                                u32     *param_1,
                                u16      param_2,
                                u16      param_3,
                                u16      param_4);

void draw_op_1038_9dcc(Globals  *globals,
                       Struct10 *in_struct_1,
                       i16       param_2,
                       u16       param_3,
                       COLORREF  in_colorref_4,
                       u16       param_5);

u16 call_fn_ptr_1038_9ffa(HWND16 win_handle, u16 param_2, Struct733 *struct_1, u16 param_4);

void unk_win_ui_op_1038_ac38(Globals *globals, u16 param_1, u16 param_2);

void pass1_1038_ae08(Globals *globals, Struct18 *param_1);

void pass1_1038_893a(Globals *globals, Struct18 *param_1);

void pass1_1038_8cf6(Struct18 *param_1);

void draw_op_1038_92f6(u16 param_1, u16 param_2, u16 param_3, u32 param_4, HWND16 param_5, u16 param_6);

Struct18 *pass1_1038_997c(Struct18 *param_1, u8 param_2);

#endif // OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_1_H_
