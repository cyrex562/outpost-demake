//
// Created by cyrex on 2/17/2023.
//

#ifndef OUTPOST_1_SRC_UI_OPS_UI_OPS_2_H_
#define OUTPOST_1_SRC_UI_OPS_UI_OPS_2_H_


#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_0xx/struct_1.h"
#include "structs/structs_0xx/struct_18.h"

void  win_ui_op_1040_5800(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5);




void  message_box_op_1040_37f0(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5, u16 param_6);




void  pass1_1040_39e2(Struct18 *param_1);




void  show_win_1040_3ae8(Struct1 *param_1, u16 param_2);




void  win_ui_op_1040_3b1e(Struct2 *param_1, WORD *param_2);




void  unk_win_ui_op_1040_3c64(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5);




void  dialog_item_ui_op_1040_3e08(Struct2 *in_struct_1, u16 param_2);




void  pass1_1040_40e2(Struct18 *param_1);




void  win_ui_op_1040_410e(Struct1 *param_1, u16 param_2, u8 *param_3);




void  win_ui_op_1040_42b2(u32 param_1, i16 param_2, HWND16 param_3, WORD *param_4);




void  pass1_1040_477e(Struct1 *param_1, u8 *param_2, u16 param_3, u16 param_4);




void  set_win_pos_1040_4ae4(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5);




void  pass1_1040_2464(Struct18 *param_1);




void  show_win_1040_2490(Struct1 *param_1, HWND16 param_2);




u32  win_ui_op_1040_2512(u32 *param_1, u32 param_2, u16 param_3, HWND16 param_4, WNDCLASS16 *param_5, u8 *param_6);




void  dlg_ui_op_1040_2a64(Struct1 *param_1, u16 param_2, u16 param_3);




void  win_ui_op_1040_2bb2(i16 param_1, u16 param_2, u16 param_3, u32 param_4, HWND16 param_5);




void  win_dlg_item_1040_2d48(u32 param_1, HWND16 param_2, BOOL16 param_3);




void  pass1_1040_2f06(Struct18 *param_1);




void  show_win_1040_2f5a(Struct1 *param_1, HWND16 param_2);




void  win_dlg_op_1040_2f90(u32 param_1, WORD *param_2);




void  win_ui_op_1040_311a(i16 param_1, u16 param_2, u16 param_3, u32 param_4);




void  enable_win_1040_32a8(u32 param_1);




BOOL16  set_win_pos_1040_331a(u32 param_1, u16 param_2, i16 param_3, HWND16 param_4);




void  pass1_1040_3506(Struct18 *param_1);




void  show_win_1040_355a(Struct1 *param_1, HWND16 param_2);




void  set_win_text_1040_3590(u32 param_1, WORD *param_2);




void  pass1_1040_0e86(Struct18 *param_1, u16 param_2);




void  set_win_pos_1040_0f10(HWND16 param_1, u16 param_2, i16 param_3);




void  pass1_1040_1290(Struct18 *param_1);




void  win_ui_op_1040_12bc(Struct1 *param_1, u16 param_2, u8 *param_3);




void  win_msg_op_1040_13b2(u32 param_1, i16 param_2, HWND16 param_3, u16 param_4);




u32  set_win_pos_1040_162a(u16 param_1, u32 param_2, u32 param_3, u16 param_4, HWND16 param_5);




void  pass1_1040_1876(Struct18 *param_1);




void  show_win_1040_18a2(Struct1 *param_1, HWND16 param_2, WORD *param_3);




void  unk_win_ui_op_1040_19ea(Struct32 *param_1, i16 param_2, HWND16 param_3);




u32  pass1_1040_1ab0(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5, u16 param_6);




void  check_dialog_btn_1040_1afe(u32 param_1);




void  check_dialog_btn_1040_1b8a(void);




void  pass1_1040_1d24(Struct18 *param_1);




void  show_win_1040_1d50(Struct1 *param_1, HWND16 param_2);




void  unk_win_ui_op_1040_1d7a(Struct33 *param_1, i16 param_2, HWND16 param_3);




void  pass1_1040_205e(Struct18 *param_1);


void create_win_1040_20d4(Globals *globals,
                          u16             param_1,
                          u16             param_2,
                          u16             param_3,
                          Struct1        *param_4);


void pass1_1038_ebd6(Globals *globals, Struct18 *param_1);




void  win_ui_op_1038_ec1a(u16 param_1, i16 param_2);




#endif // OUTPOST_1_SRC_UI_OPS_UI_OPS_2_H_
