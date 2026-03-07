//
// Created by cyrex on 2/17/2023.
//

#ifndef OUTPOST_1_SRC_UI_OPS_UI_OPS_4_H_
#define OUTPOST_1_SRC_UI_OPS_UI_OPS_4_H_


#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_0xx/struct_20.h"
#include "structs/structs_0xx/struct_1.h"
#include "structs/structs_0xx/structs_x.h"


void win_dlg_op_1038_bea4(Globals        *globals,
                          unsigned int    param_1,
                          unsigned short *param_2);


void show_win_1038_c044(Globals *globals, Struct1 *param_1);




void  msg_box_op_1038_c07a(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5);




void  enable_win_1038_c294(u32 param_1);




BOOL16  set_win_pos_1038_c31a(u32 param_1, u16 param_2, i16 param_3, HWND16 param_4);




void  pass1_1038_c4fe(Struct18 *param_1);




void  pass1_1038_c52a(u16 param_1, u32 param_2, u8 *param_3, i16 param_4, u16 param_5);




void  show_win_1038_c558(Struct1 *param_1);




void  win_dlg_op_1038_c58e(u32 param_1, WORD *param_2);




void  message_box_op_1038_c672(i16 param_1, u16 param_2, u16 param_3, u32 param_4, short param_5);




void  pass1_1038_c80a(Struct18 *param_1);




void  destroy_window_1038_c836(i16 param_1, u32 param_2, u32 param_3, u16 param_4);




void  win_ui_op_1038_c89c(Struct1 *param_1);




void  enable_window_1038_9cec(i16 param_1, u16 param_2, u16 param_3, u16 param_4, i16 param_5, HWND16 param_6);




void  pass1_1038_9fa4(Struct18 *param_1);




void  show_win_1038_9fd0(Struct1 *param_1);




void  destroy_window_1038_a072(u16 param_1, u16 param_2, i16 param_3, HWND16 param_4);




void  pass1_1038_a156(Struct18 *param_1);




void  unk_win_ui_op_1038_a18c(Struct1 *param_1, u16 param_2);




void  show_win_1038_a396(Struct1 *param_1, u16 param_2, u16 param_3);




void  win_ui_op_1038_a4ee(Struct1 *param_1, u16 param_2);




void  win_ui_op_1038_a584(u16 param_1, i16 param_2, HWND16 param_3, u16 param_4);




void  win_ui_op_1038_a6f4(Struct1 *param_1);




void  win_ui_op_1038_a788(u32 param_1, i16 param_2, HWND16 param_3, u16 param_4);



void  enable_win_1038_a8f8(u16 param_1, u16 param_2, u16 param_3, TwoWords param_4, HWND16 in_hwnd_5);



void  win_ui_op_1038_a972(Struct1 *param_1);




void  win_sys_op_1038_a9fa(u32 param_1, i16 param_2);




void  pass1_1038_abb0(Struct18 *param_1);




void  set_win_pos_1038_abdc(HWND16 param_1);


struct Struct20 * pass1_1038_aeca(Struct20 *param_1, u16 param_2);




u16  pass1_1038_8966(u32 param_1, u16 param_2, u16 param_3, i16 param_4, HWND16 param_5);




void  pass1_1038_89e8(u32 param_1, u16 param_2);




void  pass1_1038_89f8(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u8 *param_5, u16 param_6);




void  msg_box_ui_op_1038_8a3a(u32 param_1, char *param_2, u8 *param_3, u16 param_4);




void  unk_win_ui_op_1038_8afe(Struct50 *param_1, HWND16 param_2, BOOL16 param_3);




void  send_dlg_item_msg_1038_8b58(u32 param_1, u16 param_2);




void  pass1_1038_8d98(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u8 *param_5, u16 param_6, u16 param_7);




void  msg_box_op_1038_8dda(u32 param_1, char *param_2, u8 *param_3, u16 param_4);




LRESULT  send_dlg_item_msg_1038_8f74(u32 param_1, HWND16 param_2, WORD *param_3);




void  win_dlg_op_1038_9294(Struct1 *param_1, u16 param_2);




BOOL16  send_dlg_item_int_1038_94da(i16 param_1, u16 param_2, u16 param_3, u16 param_4, i16 param_5, HWND16 param_6, BOOL16 param_7);




void  enable_win_1038_9a66(u16 param_1, u16 param_2, u16 in_b_enable_3, u32 param_4, HWND16 in_hwnd_5);




void  unk_win_ui_op_1038_9bc8(Struct1 *param_1);




void  destroy_window_1038_7d88(u32 param_1, u16 param_2);




LRESULT  pass1_1038_7dac(u32 param_1, u16 param_2);




void  pass1_1038_7dc6(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u8 *param_5, u16 param_6, u16 param_7, u16 param_8);




LRESULT  send_dlg_item_msg_1038_7eac(u32 param_1);




void  send_dlg_item_msg_1038_7fae(u32 param_1);




void  enable_win_1038_806a(u32 param_1, HWND16 param_2);




u16  send_dlg_item_msg_1038_8164(u16 param_1, u16 param_2, u8 *param_3, u16 param_4, HWND16 param_5);




void  msg_box_op_1038_81be(u32 param_1, char *param_2, u8 *param_3, u16 param_4);




void  set_win_text_1038_8358(u32 param_1, HWND16 param_2, u16 param_3);




void  send_dlg_item_msg_1038_8400(u16 param_1, u16 param_2, u32 param_3, u16 param_4, u16 param_5);




LRESULT  send_dlg_item_msg_1038_844a(u32 param_1, HWND16 param_2, u16 param_3);




u16  send_dlg_item_msg_1038_8618(u32 param_1, u16 param_2);




u16  send_dlg_item_msg_1038_87b2(u32 param_1, u16 param_2, u16 param_3);




void  pass1_1038_8810(u32 param_1, u16 param_2, u16 param_3);



void  pass1_1020_de32(u32 param_1, u16 param_2, u8 *param_3, i16 param_4, u16 param_5);



Struct29 * pass1_1018_d198(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d1be(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d1e4(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d20a(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d230(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d256(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d27c(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d2a2(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d2c8(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d2ee(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d314(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d33a(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d360(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d386(Struct29 *param_1, u8 param_2);




Struct29 * pass1_1018_d3ac(Struct29 *param_1, u8 param_2);



void  pass1_1020_8bcc(Struct285 *param_1, u16 param_2);



void  invalidate_rect_1020_8d90(u32 param_1, u16 param_2, u32 param_3, u16 param_4, u16 param_5, u16 param_6);



void  invalidate_rect_1020_8fb4(u32 param_1, u16 param_2);



void  set_struct_op_1020_921c(Struct7 *param_1, u16 param_2);



void  pass1_1020_770e(u32 param_1);



void  cleanup_menu_ui_op_1020_795c(Struct3 *in_struct_1, HMENU16 in_menu_handle_2);



void  get_win_ui_info_op_1020_7a50(u32 param_1, HWND16 param_2);




void  win_ui_menu_op_1020_7ad2(u32 param_1, HWND16 param_2, RECT16 *param_3, HWND16 param_4);




Struct3 * pass1_1020_7b60(Struct3 *param_1, u8 param_2, u16 param_3);



void  destroy_window_1020_8250(u32 param_1, HWND16 param_2);




#endif // OUTPOST_1_SRC_UI_OPS_UI_OPS_4_H_
