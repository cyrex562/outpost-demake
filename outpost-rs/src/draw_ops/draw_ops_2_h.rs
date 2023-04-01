//
// Created by cyrex on 3/2/2022.
//

#ifndef OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_2_H_
#define OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_2_H_

// #include "globals.h"
// #include "op_int.h"
// #include "structs/structs_0xx/struct_20.h"
// #include "structs/structs_0xx/structs_2x.h"
// #include "structs/structs_2xx/structs_27x.h"
// #include "structs/structs_5xx/structs_58x.h"
// #include "structs/structs_6xx/struct_664.h"
// #include "structs/structs_6xx/struct_666.h"
// #include "structs/structs_1046.h"

void string_1020_79b4(globals: &mut Globals,
                      param_1: u16,
                      struct_1020_6e52_1 *param_2,
                      param_3: i16,
                      char *param_4);

void pass1_1038_9a48(globals: &mut Globals, param_1: *mut Struct18);

void pass1_1038_7d5c(globals: &mut Globals, param_1: *mut Struct18);

void unk_draw_op_1018_cda8(globals: &mut Globals, param_1: *mut Struct36, param_2: u16);

void unk_draw_op_1018_cfc0(globals: &mut Globals, param_1: *mut Struct36, param_2: u16);

void  palette_op_1020_92c4(param_1: *mut Struct587, param_2: HDC16);

void  mix_draw_op_1020_9312(param_1: u32, param_2: HWND16);

void  draw_op_1020_9364(param_1: *mut Struct7, in_win_handle_2: HWND16, param_3: u16);

Struct18 * pass1_1020_96a2(param_1: *mut Struct18, param_2: u8, param_3: u16);

Struct18 * pass1_1020_7526(param_1: *mut Struct18, param_2: u8, param_3: u16);

void struct_1020_7554(globals: &mut Globals,
                      param_1: u16,
                      struct param_2: *mut Struct20,
                      param_3: u16,
                     param_4: u16);

void pass1_1020_7824(Globals   *globals,
                     param_1: *mut Struct7,
                     param_3: u16,
                     param_4: i16,
                    param_5: u16);

void  pass1_1020_78ac(pstruct_arg1: *mut Struct587, hdc_arg2: u16);

void  struct_1020_790e(param_1: *mut Struct271, param_2: u32, param_3: u16, param_4: u32, param_5: u16);

void string_1020_79b4(globals: &mut Globals,
                      param_1: u16,
                      struct_1020_6e52_1 *param_2,
                      param_3: i16,
                      char *param_4);

void pass1_1020_79e4(globals: &mut Globals, param_1: u32, hwnd_arg2: u16, param_3: u16);

pub fn draw_op_1020_7cc8(globals: &mut Globals,
                       struct_arg1: *mut Struct6,
                       HWND16   hwnd_arg2,
                      param_3: u16);

void unk_draw_op_1020_7f7a(globals: &mut Globals,
                           struct param_1: &mut Struct20, param_2: u16, param_3: u32);

void  realize_palette_1020_8128(param_1: u32, param_2: i16, HGDIOBJ16 param_3, param_4: u16);

void  win_ui_palette_op_1020_81c0(param_1: HWND16);

void  pass1_1020_6466(u16 *param_1, param_2: u16, param_3: u16);

void  mix_draw_op_1020_650c(param_1: *mut Struct7, param_2: HWND16, param_3: u16);

void  realize_palette_1020_6896(param_1: u32, param_2: i16, HGDIOBJ16 param_3);

void  pass1_1020_68de(param_1: u32, param_2: u16);

void  pt_in_rect_1020_68fc(param_1: *mut u32, param_2: u16, param_3: u16);

void  destroy_icon_1020_6bd2(param_1: u32, param_2: u8, HICON16 param_3);

HGDIOBJ16  draw_op_1020_7070(param_1: u16, param_2: u16);

void  palette_op_1020_7270(u16 *param_1, param_2: HDC16);

void  invalidate_rect_1020_735a(param_1: u32, param_2: HWND16);

BOOL16  win_ui_op_1020_737a(param_1: u32, param_2: HWND16, param_3: u16);

void  unk_draw_op_1020_3da4(param_1: *mut Struct24, param_2: u32);

void  win_ui_palette_op_1020_3e84(param_1: *mut Struct16);

void  validate_rect_1020_3f12(param_1: u32, param_2: i16, param_3: HWND16);

void  mixed_draw_op_1020_3fa0(param_1: u32, param_2: HWND16, param_3: u16);

Struct16 *pass1_1020_4064(param_1: *mut Struct16, param_2: u8);

void  draw_rect_1020_40ce(param_1: u32, param_2: i16, param_3: i16, param_4: u16);

void unk_draw_op_1020_41c8(globals: &mut Globals,
                           struct param_1: &mut Struct20, param_2: u16, param_3: u16, param_4: u16);

void  destroy_cursor_1020_42f4(u16 *param_1, HMENparam_2: u16);

void  pass1_1020_2c72(param_1: u32, param_2: u16, param_3: u16);

void  destroy_icon_1020_2c88(param_1: u32, HICON16 param_2);

void  load_draw_op_1020_2ede(u16 *param_1, param_2: u32, param_3: u16);

void  invalidate_rect_1020_3080(param_1: u32, param_2: i16, param_3: HWND16);

void  draw_op_1020_30be(param_1: u32, param_2: HWND16, param_3: u16);

void  unk_draw_op_1020_320e(param_1: u32, HDC16 param_2, param_3: u16);

void  draw_op_1020_33c0(param_1: u32, param_2: u32, param_3: i16, param_4: u32, param_5: i16, param_6: u16, param_7: u16);

void  draw_op_1020_3488(param_1: u32);

void  draw_polygon_1020_3602(param_1: u16, param_2: u16, param_3: u32, param_4: HDC16);

void  pass1_1020_3bd6(param_1: u32, param_2: u16, param_3: u16, param_4: u16);

void  pass1_1020_3d08(param_1: u16,
                                    param_2: u16,
                                    param_3: u16,
                                    param_4: u16,
                                    param_5: u16,
                                    param_6: u16,
                                    param_7: u16,
                                    param_8: u16,
                                    param_9: u16,
                                    u8  param_10,
                                    u8  param_11,
                                    u8  param_12,
                                    u8  param_13,
                                    u8  param_14,
                                    param_15: u32,
                                    param_16: u16,
                                    param_17: u16,
                                    param_18: u16,
                                    param_19: u16);

void  invalidate_rect_1020_1fb2(param_1: u32, param_2: i16, param_3: HWND16);

void  unk_draw_op_1020_2020(param_1: u32, param_2: HWND16, param_3: u16)
;

void  draw_line_1020_229c(param_1: u32, param_2: HDC16);

void  pass1_1020_239c(param_1: u32, i16 *param_2, param_3: u16);

void  draw_polygon_1020_2474(param_1: u16, param_2: u16, param_3: u32, param_4: HDC16);

void  struct_1020_2524(struct param_1: &mut Struct20, param_2: u16, param_3: u16, param_4: u16);

void  pass1_1020_27b0(param_1: *mut Struct664, param_2: u16, param_3: u16, param_4: i16, param_5: u16);

void  pass1_1020_2838(u16 *param_1, param_2: u16);

#endif // OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_2_H_
