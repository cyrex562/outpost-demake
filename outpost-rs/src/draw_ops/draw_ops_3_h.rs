//
// Created by cyrex562 on 2/13/23.
//

#ifndef OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_3_H_
#define OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_3_H_

// #include "globals.h"
// #include "op_int.h"
// #include "op_windef.h"
// #include "structs/structs_0xx/struct_20.h"
// #include "structs/structs_0xx/structs_2x.h"
// #include "structs/structs_0xx/structs_5x.h"
// #include "structs/structs_1xx/struct_132.h"
// #include "structs/structs_5xx/structs_50x.h"
// #include "structs/structs_5xx/structs_57x.h"
// #include "structs/structs_6xx/struct_658.h"
// #include "structs/structs_6xx/struct_659.h"
// #include "structs/structs_6xx/struct_660.h"
// #include "structs/structs_6xx/struct_661.h"

void realize_palette_1020_2992(param_1: u32, i16 param_2);

void invalidate_rect_1020_2ae4(globals: &mut Globals,
                              param_1: *mut u32,
                               param_2: u16,
                               param_3: u16,
                              param_4: u16);

void pass1_1020_0a52(globals: &mut Globals,
                     param_1: u32,
                     param_2: u16,
                     param_3: u16,
                    param_4: u16);

void unk_draw_op_1020_0c3e(param_1: u32, param_2: HWND16);

void realize_palette_1020_0e46(param_1: u32, param_2: i16, HGDIOBJ16 param_3);

void pass1_1020_1022(param_1: u32, HANDLE16 param_2);

void cleanup_ui_op_1020_1038(param_1: u32);

void invalidate_rect_1020_157c(param_1: u32, param_2: i16, param_3: HWND16);

pub fn draw_op_1020_15de(param_1: u32, in_win_handle_2: HWND16);

pub fn draw_op_1020_1674(globals: &mut Globals, param_1: u32, param_2: u16);

void pass1_1018_e5dc(Globals         *globals,
                     param_1: u16,
                     struct param_2: *mut Struct20,
                     param_3: u16,
                    param_4: u16);

void pass1_1018_e834(param_1: *mut Struct660, param_2: u16, param_3: u16, param_4: i16, param_5: u16);

void pass1_1018_e8bc(param_1: *mut Struct577);

void pass1_1018_e91e(struct param_1: &mut Struct20, param_2: u16, param_3: u16, param_4: u16);

void pass1_1018_ec74(param_1: *mut Struct661, param_2: i16, param_3: u16, param_4: u16);

void pass1_1018_ed98(u16 *param_1, param_2: u16);

void invalidate_rect_1018_edd8(param_1: u32, param_2: i16, param_3: u16);

void unk_draw_op_1020_0000(param_1: u32, param_2: HWND16, param_3: u16);

void pass1_1020_01d8(struct param_1: &mut Struct20, param_2: u16, param_3: u16, param_4: u16, param_5: u16, param_6: u16, param_7: u16, param_8: u32, param_9: u16)
;

pub fn draw_op_1020_041e(param_1: u32, param_2: u16);

void fill_rect_1020_065e(param_1: u32, in_win_handle_2: HWND16);

void pass1_1020_07aa(param_1: u32, param_2: u16, param_3: i16, param_4: u16, param_5: u16);

void pass1_1018_dfd4(param_1: u32, param_2: *mut u8, param_3: i16, param_4: u16, param_5: u16);

void delete_palette_1018_e16c(param_1: u32, param_2: HWND16);

void pass1_1018_e230(param_1: u16, struct param_2: *mut Struct20, param_3: u16, param_4: u16);

void pass1_1018_e4f2(param_1: *mut Struct659, param_2: u16, param_3: u16, param_4: i16, param_5: u16);

void pass1_1018_e57a(u16 *param_1);

void unk_draw_op_1018_c578(param_1: *mut Struct36, param_2: u16);

pub fn draw_text_1018_c742(param_1: *mut Struct36, HDC16 param_2, RECT16 *param_3, param_4: u16);

void pass1_1018_5b06(param_1: *mut Struct132, param_2: u16, param_3: u16, param_4: u16)
;

void pass1_1018_5cc8(param_1: *mut Struct508, param_2: u16);

void invalidate_rect_1018_5d32(param_1: u32, param_2: i16, param_3: HWND16);

void misc_draw_op_1018_5d6c(param_1: u32, param_2: HWND16);

void set_window_text_1018_6066(param_1: u16, param_2: u16, SEGPTR in_win_text_3, param_4: u16, dialog_id_5: u16, in_hwnd_6: HWND16);

void set_window_text_1018_6086(param_1: u32, LPSTR param_2, WORD *param_3);

void unk_draw_op_1018_623e(param_1: u32, param_2: HWND16, param_3: u16);

pub fn draw_line_1018_6444(param_1: u32, param_2: HDC16);

pub fn draw_op_1018_6544(param_1: u32, i16 *param_2, param_3: u16);

pub fn draw_polygon_1018_661c(param_1: u16, param_2: u16, param_3: u32, param_4: HDC16);

void struct_1018_66cc(struct param_1: &mut Struct20, param_2: u16, param_3: u16, param_4: u16);

void pass1_1018_6924(param_1: *mut Struct658, param_2: u16, param_3: u16, param_4: i16, param_5: u16);

void pass1_1018_69ac(u16 *param_1);

void mixed_draw_op_1018_6a7a(param_1: *mut Struct28, param_2: u16);

void clenaup_win_ui_1018_4d22(in_struct_1: *mut Struct11, in_hdc_2: HDC16);

void get_dc_1018_4db0(param_1: u32, param_2: u16, param_3: HWND16);

void create_dc_1018_4e04(param_1: *mut Struct8, param_2: u16, param_3: i16, param_4: i16, LPCSTR in_string_5, in_string_6: u16);

void struct_1018_5840(globals: &mut Globals,
                      struct param_1: &mut Struct20,
                      param_2: u16,
                      param_3: u16,
                     param_4: u16);

void invalidate_rect_1018_58e2(param_1: *mut Struct58, param_2: i16, param_3: HWND16);

void pass1_1010_4674(param_1: u32, param_2: i16, param_3: u16, param_4: u16);

pub fn draw_1010_47ae(param_1: u32, param_2: u16, param_3: u16);

pub fn draw_op_1010_47d0(param_1: u32, param_2: u16, param_3: u16, in_style_3: u16, param_5: u16);

void pt_in_rect_1010_4e08(param_1: u32, param_2: u16, param_3: u16, param_4: *mut RECT16);

i16 pt_in_rect_1010_40f8(param_1: u32, POINT16 *param_2, param_3: *mut RECT16);

u16 draw_fn_1010_2a32(param_1: u16, param_2: u16,__return_storage_ptr__: *mut u16, param_4: i16, param_5: u16, param_6: u32, param_7: u16, param_8: u16, param_9: u16, param_10: u16);

void unk_draw_op_1008_da12(param_1: *mut Struct19, param_2: u16, param_3: u16);

#endif // OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_3_H_
