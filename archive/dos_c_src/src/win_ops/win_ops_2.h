//
// Created by cyrex on 2/17/2023.
//

#ifndef OUTPOST_1_SRC_WIN_OPS_WIN_OPS_2_H_
#define OUTPOST_1_SRC_WIN_OPS_WIN_OPS_2_H_
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_2xx/struct_283.h"


void  send_msg_1038_ed8a(u16 param_1, u32 param_2, u32 param_3, HWND16 param_4);




void  post_win_msg_1040_0d5e(u16 param_1, u16 param_2, i16 param_3, HWND16 param_4);




void  unk_win_sys_op_1038_da68(i16 param_1, u16 param_2, u16 param_3, u32 param_4, WNDCLASS16 *param_5, u8 *param_6);




void  post_win_msg_1038_dcb0(u32 param_1, u16 param_2, u8 *param_3, u16 param_4);




void  destroy_win_1038_e1dc(u16 param_1, u16 param_2, i16 param_3, HWND16 param_4);




void  pass1_1038_e4bc(u16 param_1, u32 param_2, u32 param_3, u8 *param_4, i16 param_5, u16 param_6);




long  call_win_proc_1038_d020(HWND16 win_handle_1, u32 param_2, LPARAM l_param, u16 param_4, HWND16 win_handle_2);




void  win_prop_op_1038_d118(u32 param_1, u32 param_2, u16 param_3, u16 param_4, HWND16 param_5);




void  post_win_msg_1038_d840(Struct70 *param_1, u16 param_2, HWND16 param_3);




LRESULT  send_msg_1038_c228(u32 param_1, HWND16 param_2);




void  send_msg_1038_c374(u32 param_1, u32 *param_2, u16 param_3, HWND16 param_4);




void  destroy_win_1038_a3d2(u32 param_1, HWND16 param_2);




void  send_dlg_item_msg_1038_8d22(u32 param_1, HWND16 param_2, u16 param_3);




LRESULT  pass1_1038_8d7e(u32 param_1, u16 param_2);




void  win_msg_op_1038_95fc(u32 param_1, u16 param_2);




void  win_ui_op_1038_977a(i16 param_1, u16 param_2, i16 param_3, u8 *param_4, HWND16 param_5, u16 param_6);




long  unk_win_ui_op_1038_9820(Struct51 *param_1, i16 param_2, i16 param_3, HWND16 param_4, BOOL16 param_5);




void  win_ui_dlg_op_1038_98b4(Struct51 *param_1, HWND16 param_2, BOOL16 param_3);




void  pass1_1038_362e(u32 param_1);




void  pass1_1038_095e(u16 param_1, u16 param_2, i16 param_3, u32 param_4, u8 *param_5, i16 param_6, u16 param_7);




u16  pass1_1030_e67c(u32 param_1, u8 *param_2, i16 param_3, u16 param_4);




void  pass1_1030_838e(u32 *param_1, u16 param_2, u8 param_3);




void  pass1_1030_83ba(u32 **param_1, long param_2, u16 param_3, u8 param_4);




void  send_msg_1028_e242(u32 *param_1, i16 param_2, HWND16 param_3);




void  pass1_1028_9a02(u32 param_1, i16 param_2, u16 param_3, u16 param_4, i16 param_5);




void  pass1_1028_a188(u16 param_1, u16 param_2, i16 param_3, i16 param_4, u32 param_5, u16 param_6);




void  pass1_1028_86c2(u32 param_1, u8 *param_2, i16 param_3, u16 param_4);




void  pass1_1028_9114(u32 param_1, u8 *param_2, i16 param_3, u16 param_4);



void  post_msg_1028_76da(void);




void  pass1_1028_6ff6(u32 param_1, u16 param_2, i16 param_3, u16 param_4);



void  win_1020_75f0(Struct283 *param_1, u16 param_2);



void  window_op_1020_76aa(Struct0 *param_1);




void  post_win_msg_1020_79fc(Struct69 *param_1, u16 param_2, u16 param_3, i16 param_4, HWND16 param_5);


void window_op_1020_6c3a(Globals *globals, Struct0 *param_1);



void  post_win_msg_1020_7308(u32 param_1, u16 param_2, HWND16 param_3);



u16  post_msg_1020_55b0(u32 param_1, u16 param_2);



void  post_msg_1020_4394(u32 param_1, u16 param_2, HWND16 param_3);



void  win_1020_43f6(Struct0 *param_1, u8 *param_2, u16 param_3);



void  struct_1020_3644(u16 *param_1, u16 param_2, u32 param_3, u16 param_4);



BOOL16  post_win_msg_1020_1ca4(u32 param_1);



void  destroy_window_1020_1d4a(u32 param_1, i16 param_2, HWND16 param_3);



void  post_win_msg_1020_291a(HWND16 param_1);



u32  send_msg_1020_29d8(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5, u16 param_6, u16 param_7);



void  send_win_msg_1020_08fe(Struct63 *param_1, HWND16 param_2);




void  send_msg_1020_097e(u32 param_1, HWND16 param_2);



void  win_1020_09ba(Struct0 *param_1, u16 param_2, u8 *param_3, u16 param_4);




void  pass1_1020_0a0c(u32 param_1);




Struct63 * pass1_1020_0ae8(Struct63 *param_1, u8 param_2, u16 param_3);



void  pass1_1020_0dc4(u16 *param_1, u16 param_2, u32 param_3, u16 param_4);



void  win_help_op_1020_0ec4(u32 *param_1, u16 param_2, u16 param_3);




#endif // OUTPOST_1_SRC_WIN_OPS_WIN_OPS_2_H_
