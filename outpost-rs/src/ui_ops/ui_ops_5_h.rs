//
// Created by cyrex on 2/17/2023.
//

#ifndef OUTPOST_1_SRC_UI_OPS_SYS_OPS_5_H_
#define OUTPOST_1_SRC_UI_OPS_SYS_OPS_5_H_

// #include "globals.h"
// #include "op_int.h"
// #include "op_windef.h"
// #include "structs/structs_0xx/struct_12.h"
// #include "structs/structs_0xx/structs_5x.h"
// #include "structs/structs_0xx/structs_x.h"

void unk_win_op_1020_65cc(param_1: *mut Struct60, param_2: i16, param_3: u16);


void unk_win_ui_op_1020_67ce(globals: &mut Globals,
                             in_struct_1: *mut Struct20,
                             param_2: u16,
                             u32       param_3);


void pass1_1020_687c(param_1: u32, param_2: u16, param_3: u16);


u16 unk_destroy_win_op_1020_694c(globals: &mut Globals,
                                 param_1: u32,
                                 param_2: u16,
                                 HWND16   param_3,
                                param_4: u16);


void win_ui_op_1020_6ae6(u32     *param_1,
                         param_2: u16,
                         param_3: i16,
                         param_4: i16,
                         HWND16   param_5,
                         WPARAM16 param_6);


void enable_menu_item_1020_6b9a(HMENparam_1: u16, i16 param_2);


void pass1_1020_6bbc(param_1: u32, param_2: u16, param_3: u16);


void win_ui_fn_1020_6e98(param_1: u32, in_win_handle: HWND16, param_3: u16);


Struct3 *pass1_1020_70c0(param_1: *mut Struct3, param_2: u8, param_3: u16);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void unk_win_ui_op_1020_717e(u16 *param_1, param_2: u32, param_3: u16);


void pass1_1020_51c6(param_1: u32, param_2: u16, param_3: u32, param_4: u16, param_5: u16);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_cursor_op_1020_522e(param_1: *mut Struct52, param_2: u16, param_3: u16);


void pass1_1020_52de(param_1: u32, param_2: u16);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ui_op_1020_536e(param_1: u32, param_2: u32, param_3: i16, param_4: i16, u8 *param_5);


void window_op_1020_5764(globals: &mut Globals, param_1: u32, param_2: i16, param_3: u16);


void pt_in_rect_1020_5856(param_1: u32, POINT16 *param_2, param_3: u16);


void pt_in_rect_op_1020_58ce(param_1: u32,
                             param_2: u16,
                             param_3: u16,
                             u8      param_4,
                             RECT16 *param_5,
                            param_6: u16);


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL16 menu_ui_op_1020_5bf2(param_1: *mut Struct52, param_2: HWND16, param_3: *mut RECT16);


void win_ui_op_1020_5de8(param_1: u32, param_2: u16, param_3: u16, param_4: u16);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_op_1020_5e76(globals: &mut Globals, param_1: u32, param_2: u16, param_3: u16);


void pass1_1020_6184(param_1: u32, param_2: u16, param_3: u16);


void pass1_1020_434c(param_1: i16,
                     param_2: u16,
                     param_3: *mut u32,
                     param_4: u16,
                     param_5: u16,
                     param_6: i16,
                     param_7: u16,
                    param_8: u16);


void mixed_menu_op_1020_44ec(param_1: u32,
                             param_2: u16,
                             param_3: i16,
                             HMENparam_4: u16,
                             HMENparam_5: u16,
                            param_6: u16);


void win_sys_op_1020_493c(u32        *param_1,
                          param_2: u16,
                          u8         *param_3,
                          param_4: u16,
                          HCURSOR16   param_5,
                          WNDCLASS16 *param_6);


BOOL16 enable_menu_item_1020_2c2a(HMENparam_1: u16, i16 param_2);


void win_ui_op_1020_2cf0(param_1: *mut Struct0);


void cleanup_win_ui_1020_2fea(in_struct_1: *mut Struct12, in_dc_handle_2: HDC16);


Struct18 *pass1_1020_3616(param_1: *mut Struct18, param_2: u8, param_3: u16);


void win_ui_op_1020_36f6(param_1: u32, param_2: i16, short param_3);


void pass1_1020_3898(param_1: *mut Struct30, param_2: u16);


void window_op_1020_38aa(param_1: *mut Struct0);


#endif // OUTPOST_1_SRC_UI_OPS_SYS_OPS_5_H_
