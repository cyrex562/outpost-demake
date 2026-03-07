//
// Created by cyrex on 2/17/2023.
//

#ifndef OUTPOST_1_SRC_WIN_OPS_WIN_OPS_1_H_
#define OUTPOST_1_SRC_WIN_OPS_WIN_OPS_1_H_


#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_0xx/struct_1.h"
#include "structs/structs_0xx/struct_18.h"
#include "structs/structs_0xx/struct_37.h"
#include "structs/structs_0xx/structs_5x.h"
#include "structs/structs_0xx/structs_6x.h"


Struct18 * pass1_1040_a4c2(Struct18 *param_1, u8 param_2, u16 param_3);

void win_1008_5c7c(Globals *globals, u16 param_1, u16 param_2, u32 param_3, u32 param_4);


// WARNING: Unable to use type for symbol uVar5

u32 call_win_proc_1040_a40e(Globals *globals,
                            HWND16   param_1,
                            u32      param_2,
                            LPARAM   param_3,
                            u16      param_4,
                            LPVOID   param_5,
                            u16      param_6);


ATOM reg_class_1040_98c0(Globals *globals, u32 param_1, HINSTANCE16 param_2, WNDCLASS16 *in_wnd_class_3);


void win_op_1040_9cde(Globals *globals,
                      u16      param_1,
                      WPARAM16 param_2,
                      i16      param_3,
                      u32      param_4,
                      HWND16   param_5,
                      u16      param_6);




void  make_proc_inst_1040_a234(u8 *param_1, u8 *param_2, u16 param_3, u32 param_4, LPVOID param_5);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  free_proc_inst_1040_a294(Struct18 *param_1, u16 param_2);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u32  win_msg_1040_a308(u32 param_1, i16 param_2, HWND16 param_3, u16 param_4);




u8 * win_ui_op_1040_8718(Struct37 *param_1, u16 param_2);




void  pass1_1040_8978(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, WNDCLASS16 *param_5);


void pass1_1040_89a4(Globals    *globals,
                     u32        *param_1,
                     u16        *param_2,
                     u8         *param_3,
                     i16         param_4,
                     WNDCLASS16 *param_5);


HANDLE16 create_window_1040_8bea(Globals *globals,
                                 u32             param_1,
                                 u16             param_2,
                                 i16             param_3,
                                 u16             param_4,
                                 HMENU16  hmenu_arg5);


void mixed_struct_op_1040_8fb8(Globals  *globals,
                               Struct65 *param_1,
                               u16       param_2,
                               char     *param_3,
                               u16       param_4,
                               u32       param_5,
                               u32       param_6,
                               u16       param_7,
                               u16       param_8,
                               u16       param_9);




void  mix_win_ui_op_1040_911e(u16 *param_1);




void  enable_win_1040_9234(u32 param_1, BOOL16 param_2, HWND16 param_3);




LRESULT  pass1_1040_93e6(u32 param_1, HWND16 param_2);




LRESULT  send_msg_1040_9404(u32 param_1, HWND16 param_2);




void win_ui_get_prop_op_1040_9566(i16 *param_1, HWND16 param_2);




// WARNING: Unable to use type for symbol var11
// WARNING: Unable to use type for symbol var7
// WARNING: Unable to use type for symbol var8

void  call_win_proc_1040_9684(HWND16 win_handle_1, u16 param_2, WPARAM16 w_param_1, LPARAM l_param_1, HWND16 win_handle_2, u16 param_6);




u16 * pass1_1040_97da(u16 *param_1, u8 param_2);




Struct57 * pass1_1040_8478(Struct57 *param_1, u16 param_2, char *param_3, char *param_4, u16 param_5, u16 param_6);




void  check_dialog_msg_1040_81b6(u32 param_1, HWND16 param_2);




void  unk_win_ui_op_1040_8158(u32 *param_1, POINT16 param_2, i16 param_3, HWND16 param_4);




void  win_help_1040_800c(u32 param_1, u16 param_2);




void  destroy_win_1040_7b98(u32 param_1, HWND16 param_2);




BOOL16  post_win_msg_1040_7b3c(u32 *param_1, u16 param_2, u16 param_3, i16 param_4, HWND16 param_5);




void  ui_cleanup_op_1040_782c(Struct18 *param_1, HGDIOBJ16 param_2);


void create_window_1040_7620(Globals *globals,
                             u32      param_1,
                             i16      param_2,
                             HMENU16 *in_menu_handle,
                             u16      param_4,
                             u16      param_5);




void  post_win_msg_1040_7f56(u32 param_1, char *param_2);




BOOL16  post_win_msg_1040_7f1c(u32 param_1, i16 param_2, HWND16 param_3);


void win_ui_op_1040_6d1a(Globals *globals,
                         i16      param_1,
                         u16      param_2,
                         u16      param_3,
                         u32      param_4);


void create_window_1040_6eae(Globals *globals,
                             u32      param_1,
                             i16      param_2,
                             HMENU16 *in_menu_handle,
                             u16      param_4,
                             u16      param_5);




LRESULT  send_msg_1040_4cb2(u32 param_1, HWND16 param_2);




void  pass1_1040_4cf4(u32 param_1, HWND16 param_2, u16 param_3);




u16  pass1_1040_4f28(u32 *param_1, i16 *param_2, u16 param_3, u16 param_4, i16 param_5, u16 param_6);




void  set_win_pos_1040_4f96(Struct1 *param_1, u16 param_2, u16 param_3, u8 *param_4);




void  destroy_win_1040_5256(Struct34 *param_1, HWND16 param_2);




void  win_ui_op_1040_52c0(i16 param_1, u16 param_2, u16 param_3, u32 param_4, HWND16 param_5, u16 param_6);




void  enable_win_1040_5780(u32 *param_1);




void  pass1_1040_3a0e(u16 param_1, u16 param_2, u8 *param_3, i16 param_4, u16 param_5);




u16  enable_win_1040_3a36(u32 param_1, u16 param_2, u16 param_3, i16 param_4, HWND16 param_5);




void  send_dlg_item_msg_1040_3f12(u16 param_1, u16 param_2, u32 param_3, HWND16 param_4, u16 param_5);




void  get_win_rect_1040_43ea(i16 param_1, HWND16 param_2, u16 param_3, u16 param_4);




LRESULT  send_win_msg_1040_4a0a(Struct48 **param_1, HWND16 param_2);




void  pass1_1040_2f32(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5);




LRESULT  send_msg_1040_323c(u32 param_1, HWND16 param_2);




void  send_msg_1040_3374(u32 param_1, u32 *param_2, u16 param_3, HWND16 param_4);




void  pass1_1040_3532(u16 param_1, u16 param_2, u8 *param_3, i16 param_4, u16 param_5);




void  pass1_1040_109c(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u8 *param_5, i16 param_6, u16 param_7, u16 param_8);




void  pass1_1040_1152(i16 param_1, u16 param_2, u8 *param_3, i16 param_4, u16 param_5, u16 param_6);




void  send_msg_1040_1696(u32 param_1, u16 param_2, u16 param_3, HWND16 param_4);




u32  pass1_1040_1e80(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5, u16 param_6);




#endif // OUTPOST_1_SRC_WIN_OPS_WIN_OPS_1_H_
