//
// Created by cyrex on 2/25/2022.
//

#ifndef OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_1_H_
#define OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_1_H_

// #include "../globals.h"
// #include "structs/structs_0xx/struct_18.h"
// #include "structs/structs_0xx/struct_37.h"
// #include "structs/structs_0xx/structs_1x.h"
// #include "structs/structs_0xx/structs_7x.h"
// #include "structs/structs_3xx/struct_380.h"

void pass1_1040_d1bc(globals: &mut Globals, param_1: *mut Struct18);

void pass1_1040_ca74(globals: &mut Globals, param_1: *mut Struct18);

void pass1_1040_c94a(globals: &mut Globals, pstruct_arg1: *mut Struct380,
                     param_3: *mut u8,
                     param_4: i16,
                     param_5: u16,
                     param_6: u16);

void palette_op_1040_c886(globals: &mut Globals, param_1: u32, param_2: u8, param_3: u16, param_4: HDC16);

pub fn draw_op_1040_c74c(globals: &mut Globals, param_1: *mut u32, param_2: u32, param_3: u16);

void unk_draw_op_1040_c226(param_1: u32, param_2: HWND16, param_3: u16);

pub fn draw_line_1040_c302(param_1: u32, param_2: HDC16);

pub fn draw_op_1040_c38e(param_1: u32);

void invalidate_rect_1040_c028(param_1: u32, param_2: i16, param_3: HWND16, param_4: *mut RECT16);

Struct18 *pass1_1040_be94(globals: &mut Globals,param_1: *mut Struct18, param_2: u8);

Struct18 *pass1_1040_b74c(param_1: *mut Struct18, param_2: u8);

pub fn draw_text_1040_94fc(globals: &mut Globals, param_1: *mut Struct37, param_2: HDC16);

void win_ui_op_1040_b372(globals: &mut Globals,
                         param_1: u32,
                         param_2: u16,
                         param_3: u16,
                         in_colorref_4: COLORREF);

void pass1_1040_ace8(globals: &mut Globals, param_1: *mut Struct18);

Struct18 *pass1_1040_abe2(param_1: *mut Struct18, param_2: u8);

pub fn draw_op_1040_a67e(globals: &mut Globals,
                       param_1: u32,
                       param_2: i16,
                       param_3: u16,
                       param_4: COLORREF);

u16 *unk_win_ui_op_1040_9854(globals: &mut Globals,param_1: *mut u16, param_2: u16);

pub fn draw_op_1040_9948(param_1: u16,
                       param_2: *mut Struct71, param_3: HWND16, param_4: *mut RECT16);

void mixed_draw_op_1040_8a06(globals: &mut Globals, param_1: u32, param_2: HWND16, param_3: u16);

void pass1_1040_8e82(globals: &mut Globals, param_1: *mut Struct18);

void pass1_1040_9252(param_1: *mut Struct65);

void unk_draw_op_1040_9458(param_1: *mut Struct17, param_2: u8, param_3: u16, param_4: HDC16);

pub fn draw_text_1040_94fc(globals: &mut Globals, param_1: *mut Struct37, param_2: HDC16);

pub fn draw_text_1040_9650(pstruct_arg_1: *mut Struct65, hwnd_arg_2: HWND16);

pub fn draw_op_1040_82ee(param_1: *mut Struct15, in_colorref_2: COLORREF);

u32 set_text_bk_color_1040_7e5e(globals: &mut Globals,
                               param_1: *mut u32,
                                param_2: u16,
                                param_3: u16,
                               param_4: u16);

pub fn draw_op_1040_7bb2(in_struct_1: *mut Struct14, in_win_handle_2: HWND16, param_3: u16);

Struct18 *pass1_1040_767e(param_1: *mut Struct18, param_2: u8);

Struct18 *pass1_1040_6360(param_1: *mut Struct18, param_2: u8);

void pass1_1040_6862(param_1: *mut Struct18);

Struct18 *pass1_1040_4df2(param_1: *mut Struct18, param_2: u8);

void pass1_1040_4f0a(param_1: *mut Struct18);

pub fn draw_op_1040_5a06(param_1: u32, param_2: HWND16, param_3: u16);

u16 get_dc_op_1040_3d5e(param_1: u32, param_2: HWND16, param_3: u16);

void invalidate_rect_1040_3ddc(in_struct_1: *mut Struct2, in_win_handle_2: HWND16);

Struct18 *pass1_1040_47fe(param_1: *mut Struct18, param_2: u8);

u32 draw_ui_op_1040_27cc(param_1: *mut u32, param_2: u16, param_3: u16, param_4: COLORREF);

void pass1_1040_2a22(param_1: *mut Struct18);

void mix_draw_op_1040_21d6(param_1: u32, param_2: HWND16, param_3: u16);

u32 set_text_bk_color_1040_0cc0(globals: &mut Globals,
                               param_1: *mut u32,
                                param_2: u16,
                                param_3: u16,
                               param_4: u16);

pub fn draw_op_1038_9dcc(globals: &mut Globals,
                       in_struct_1: *mut Struct10,
                       param_2: i16,
                       param_3: u16,
                       in_colorref_4: COLORREF,
                      param_5: u16);

u16 call_fn_ptr_1038_9ffa(win_handle: HWND16, param_2: u16, struct_1: *mut Struct733, param_4: u16);

void unk_win_ui_op_1038_ac38(globals: &mut Globals, param_1: u16, param_2: u16);

void pass1_1038_ae08(globals: &mut Globals, param_1: *mut Struct18);

void pass1_1038_893a(globals: &mut Globals, param_1: *mut Struct18);

void pass1_1038_8cf6(param_1: *mut Struct18);

pub fn draw_op_1038_92f6(param_1: u16, param_2: u16, param_3: u16, param_4: u32, param_5: HWND16, param_6: u16);

Struct18 *pass1_1038_997c(param_1: *mut Struct18, param_2: u8);

#endif // OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_1_H_
