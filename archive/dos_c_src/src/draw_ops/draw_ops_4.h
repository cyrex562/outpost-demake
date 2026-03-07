//
// Created by cyrex on 2/4/23.
//

#ifndef OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_4_H_
#define OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_4_H_

#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_0xx/struct_20.h"
#include "structs/structs_0xx/structs_1x.h"
HPALETTE16  palette_op_1008_4e08(Struct13 *param_1, BOOL16 param_2, u16 param_3, HDC16 param_4);

void  begin_end_paint_1008_97c8(HWND16 param_1);

void  get_stock_obj_1008_9c56(u16 param_1);

Struct23 *unk_draw_op_1008_80ee(Globals *globals, Struct23 *param_1, u16 param_2);

void draw_op_1008_8288(u16 param_1, u32 param_2, HWND16 param_3);

struct Struct20 *
unk_draw_op_1008_61b2(Globals *globals, Struct20 *param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5);

void  fill_rect_1008_62c0(HWND16 param_1);

HPALETTE16  palette_op_1008_4e08(Struct13 *param_1, BOOL16 param_2, u16 param_3, HDC16 param_4);

void  create_palette_1008_4e38(Struct13 *in_struct_1, LOGPALETTE *in_log_palette_2, u8 *param_3);

void file_and_draw_op_1008_4f20(Globals  *globals,
                                Struct76 *param_1,
                                u32              param_2,
                                u16              param_3,
                                u32              param_4,
                                u16              param_5);

BOOL16  cleanup_palette_1008_56e2(u32 param_1, HDC16 param_2);

void  set_di_bits_to_device_1008_45d6(Struct76 *param_1, HDC16 param_2);

void  stretch_di_bits_1008_465a(Struct76 *param_1, HDC16 param_2);

u16  palette_op_1008_46e4(u32 param_1, u16 param_2, u16 param_3, HDC16 param_4);

void set_sys_color_1008_357e(Globals  *globals,
                             Struct20 *param_1,
                             i16              param_2,
                             u16              in_index_3,
                             u16              param_4);

void  fill_rect_1008_39ac(HWND16 in_win_handle_1);

void pass1_1008_0984(Struct20 *param_1, i16 param_3, u16 param_4, u16 param_5);

void set_struct_op_1008_0536(Globals *globals, Struct20 *param_1, u16 hinst_arg2, u16 param_3);

#endif // OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_4_H_
