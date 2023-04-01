//
// Created by cyrex on 2/4/23.
//

#ifndef OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_4_H_
#define OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_4_H_

// #include "globals.h"
// #include "op_int.h"
// #include "op_windef.h"
// #include "structs/structs_0xx/struct_20.h"
// #include "structs/structs_0xx/structs_1x.h"
HPALETTE16  palette_op_1008_4e08(param_1: *mut Struct13, BOOL16 param_2, param_3: u16, param_4: HDC16);

void  begin_end_paint_1008_97c8(param_1: HWND16);

void  get_stock_obj_1008_9c56(param_1: u16);

Struct23 *unk_draw_op_1008_80ee(globals: &mut Globals, param_1: *mut Struct23, param_2: u16);

pub fn draw_op_1008_8288(param_1: u16, param_2: u32, param_3: HWND16);

struct Struct20 *
unk_draw_op_1008_61b2(globals: &mut Globals, param_1: &mut Struct20, param_2: u16, param_3: u16, param_4: u32, param_5: u16);

void  fill_rect_1008_62c0(param_1: HWND16);

HPALETTE16  palette_op_1008_4e08(param_1: *mut Struct13, BOOL16 param_2, param_3: u16, param_4: HDC16);

void  create_palette_1008_4e38(in_struct_1: *mut Struct13, LOGPALETTE *in_log_palette_2, u8 *param_3);

void file_and_draw_op_1008_4f20(globals: &mut Globals,
                                param_1: *mut Struct76,
                                param_2: u32,
                                param_3: u16,
                                param_4: u32,
                               param_5: u16);

BOOL16  cleanup_palette_1008_56e2(param_1: u32, param_2: HDC16);

void  set_di_bits_to_device_1008_45d6(param_1: *mut Struct76, param_2: HDC16);

void  stretch_di_bits_1008_465a(param_1: *mut Struct76, param_2: HDC16);

u16  palette_op_1008_46e4(param_1: u32, param_2: u16, param_3: u16, param_4: HDC16);

void set_sys_color_1008_357e(globals: &mut Globals,
                             param_1: &mut Struct20,
                             param_2: i16,
                             in_index_3: u16,
                            param_4: u16);

void  fill_rect_1008_39ac(in_win_handle_1: HWND16);

void pass1_1008_0984(param_1: &mut Struct20, param_3: i16, param_4: u16, param_5: u16);

void set_struct_op_1008_0536(globals: &mut Globals, param_1: &mut Struct20, hinst_arg2: u16, param_3: u16);

#endif // OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_4_H_
