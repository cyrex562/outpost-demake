//
// Created by cyrex on 2/17/2023.
//

#ifndef OUTPOST_1_SRC_UI_OPS_SYS_OPS_5_H_
#define OUTPOST_1_SRC_UI_OPS_SYS_OPS_5_H_

#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_0xx/struct_12.h"
#include "structs/structs_0xx/structs_5x.h"
#include "structs/structs_0xx/structs_x.h"

void unk_win_op_1020_65cc(Struct60 *param_1, i16 param_2, u16 param_3);


void unk_win_ui_op_1020_67ce(Globals  *globals,
                             Struct20 *in_struct_1,
                             u16       param_2,
                             u32       param_3);


void pass1_1020_687c(u32 param_1, u16 param_2, u16 param_3);


u16 unk_destroy_win_op_1020_694c(Globals *globals,
                                 u32      param_1,
                                 u16      param_2,
                                 HWND16   param_3,
                                 u16      param_4);


void win_ui_op_1020_6ae6(u32     *param_1,
                         u16      param_2,
                         i16      param_3,
                         i16      param_4,
                         HWND16   param_5,
                         WPARAM16 param_6);


void enable_menu_item_1020_6b9a(HMENU16 param_1, i16 param_2);


void pass1_1020_6bbc(u32 param_1, u16 param_2, u16 param_3);


void win_ui_fn_1020_6e98(u32 param_1, HWND16 in_win_handle, u16 param_3);


Struct3 *pass1_1020_70c0(Struct3 *param_1, u8 param_2, u16 param_3);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void unk_win_ui_op_1020_717e(u16 *param_1, u32 param_2, u16 param_3);


void pass1_1020_51c6(u32 param_1, u16 param_2, u32 param_3, u16 param_4, u16 param_5);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_cursor_op_1020_522e(Struct52 *param_1, u16 param_2, u16 param_3);


void pass1_1020_52de(u32 param_1, u16 param_2);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ui_op_1020_536e(u32 param_1, u32 param_2, i16 param_3, i16 param_4, u8 *param_5);


void window_op_1020_5764(Globals *globals, u32 param_1, i16 param_2, u16 param_3);


void pt_in_rect_1020_5856(u32 param_1, POINT16 *param_2, u16 param_3);


void pt_in_rect_op_1020_58ce(u32     param_1,
                             u16     param_2,
                             u16     param_3,
                             u8      param_4,
                             RECT16 *param_5,
                             u16     param_6);


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL16 menu_ui_op_1020_5bf2(Struct52 *param_1, HWND16 param_2, RECT16 *param_3);


void win_ui_op_1020_5de8(u32 param_1, u16 param_2, u16 param_3, u16 param_4);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_op_1020_5e76(Globals *globals, u32 param_1, u16 param_2, u16 param_3);


void pass1_1020_6184(u32 param_1, u16 param_2, u16 param_3);


void pass1_1020_434c(i16  param_1,
                     u16  param_2,
                     u32 *param_3,
                     u16  param_4,
                     u16  param_5,
                     i16  param_6,
                     u16  param_7,
                     u16  param_8);


void mixed_menu_op_1020_44ec(u32     param_1,
                             u16     param_2,
                             i16     param_3,
                             HMENU16 param_4,
                             HMENU16 param_5,
                             u16     param_6);


void win_sys_op_1020_493c(u32        *param_1,
                          u16         param_2,
                          u8         *param_3,
                          u16         param_4,
                          HCURSOR16   param_5,
                          WNDCLASS16 *param_6);


BOOL16 enable_menu_item_1020_2c2a(HMENU16 param_1, i16 param_2);


void win_ui_op_1020_2cf0(Struct0 *param_1);


void cleanup_win_ui_1020_2fea(Struct12 *in_struct_1, HDC16 in_dc_handle_2);


Struct18 *pass1_1020_3616(Struct18 *param_1, u8 param_2, u16 param_3);


void win_ui_op_1020_36f6(u32 param_1, i16 param_2, short param_3);


void pass1_1020_3898(Struct30 *param_1, u16 param_2);


void window_op_1020_38aa(Struct0 *param_1);


#endif // OUTPOST_1_SRC_UI_OPS_SYS_OPS_5_H_
