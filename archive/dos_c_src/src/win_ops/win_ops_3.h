//
// Created by cyrex on 2/17/2023.
//

#ifndef OUTPOST_1_SRC_WIN_OPS_WIN_OPS_3_H_
#define OUTPOST_1_SRC_WIN_OPS_WIN_OPS_3_H_


#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_0xx/struct_20.h"
#include "structs/structs_2xx/structs_26x.h"


void window_op_1018_e6c6(Struct0 *param_1);


void pass1_1018_e72a(u32 param_1);


void post_win_msg_1018_ea0a(u16 param_1, u16 param_2, i16 param_3, HWND16 param_4);


void pass1_1018_ea66(u32 param_1, u16 param_2);


void window_op_1018_eada(Struct0 *param_1);


void pass1_1018_eb3e(u32 param_1, u16 param_2);


void pass1_1020_02ae(u32 param_1);


void win_1020_0316(Struct0 *param_1, u8 *param_2, u16 param_3);


void post_msg_1020_03b2(u32 param_1, HWND16 param_2);


void post_msg_1020_03d6(u32 param_1, HWND16 param_2);


void post_msg_1020_03fa(u32 param_1, HWND16 param_2);


void post_win_msg_1020_061c(u32 param_1, i16 param_2, HWND16 param_3);


void pass1_1020_08b6(WNDCLASS16      *param_1,
                     struct Struct20 *param_2,
                     u16              param_3,
                     u32              param_4);


void win_1018_df40(Struct0 *param_1, u16 param_2, u8 *param_3, u16 param_4);


void pass1_1018_df92(u32 param_1);


void pass1_1018_e2cc(Struct269 *param_1, u16 param_2);


void window_op_1018_e384(Struct0 *param_1);


void pass1_1018_e3e8(u32 param_1);


void destroy_window_1018_c518(Struct29 *param_1);


Struct29 *pass1_1018_c896(Struct29 *param_1, u8 param_2);


void unk_destroy_window_op_1018_6bb6(Struct28 *param_1, HWND16 param_2);


void win_1018_598c(Struct0 *param_1, u16 param_2, u16 param_3);


void window_op_1018_67b6(Struct0 *param_1);


void pass1_1018_681a(u32 param_1);


void win_op_1018_294a(i16    param_1,
                      u16    param_2,
                      u16    param_3,
                      u32    param_4,
                      u16    param_5,
                      LPCSTR in_string_6);


u32 set_err_mode_1010_8b14(u32 param_1, u32 param_2, u16 param_3);


void send_msg_1010_7c42(u32 param_1, u16 param_2);


void send_msg_1010_7c9e(u32 param_1, i16 param_2, u16 param_3);


void pass1_1010_71b0(i16 param_1, u16 param_2);


void pass1_1010_71c2(u16 param_1, u16 param_2, i16 param_3, u16 param_4);


void unk_win_op_1010_7300(u32 param_1, u32 param_2, u16 param_3, u32 param_4);


void free_rsrc_1010_4b3e(u16 *param_1, HGLOBAL16 param_2);


void unk_destroy_win_op_1010_2fa0(u32 param_1, HWND16 param_2);


void unk_destroy_win_op_1010_305a(Struct27 *param_1,
                                  i16       param_2,
                                  Struct65 *param_3,
                                  u16       param_4);


void pass1_1010_1656(i16 param_1,
                     u16 param_2,
                     u16 param_3,
                     u32 param_4,
                     u16 param_5,
                     u8 *param_6,
                     i16 param_7,
                     u16 param_8);


void set_window_placement_1010_0070(u32    param_1,
                                    i16    param_2,
                                    u16    param_3,
                                    HWND16 param_4,
                                    u16    param_5);


void set_win_placement_1010_010e(u16 param_1, u16 param_2, u16 param_3, HWND16 param_4);


void enum_child_windows_1010_01be(LPVOID param_1);


void pass1_1008_aa28(u32 param_1, u16 param_2, WNDCLASS16 *param_3);


WPARAM16 main_win_msg_loop_1008_9498(Globals *globals, u16 u16_arg1, u16 u16_arg2);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void unk_win_msg_op_1008_9510(i16 *param_1, MSG16 *param_2, MSG16 *param_3);


void send_msg_1008_9640(u32 param_1, u16 param_2, HWND16 param_3);


ATOM win_ui_reg_class_1008_96d2(Globals         *globals,
                                struct Struct20 *param_1,
                                HINSTANCE16      in_h_inst_2,
                                WNDCLASS16      *in_wnd_class_3);


void create_window_ex_1008_9760(Struct0 *in_struct_1, u16 param_2);


u32 unk_win_op_1008_97f2(u32     *param_1,
                         i16     *param_2,
                         WPARAM16 param_3,
                         u8      *param_4,
                         u16      param_5,
                         HWND16   param_6);


LRESULT make_def_wnd_proc_1008_9ce6(u16      param_1,
                                    u16      param_2,
                                    u16      in_msg_3,
                                    WPARAM16 param_4,
                                    LPARAM   param_5,
                                    HWND16   in_hwnd_5);


void pass1_1008_9e5a(Struct11 *param_1);


void post_win_msg_1008_a0e4(Struct67 *param_1,
                            long      param_2,
                            i16       param_3,
                            u16       param_4,
                            u32       param_5,
                            i16       param_6,
                            HWND16    param_7,
                            u16       param_8);


u16 *pass1_1008_91ba(u16 *param_1, HWND16 param_2);


void kill_timer_1008_921c(u16 *param_1, HWND16 param_2);


void send_msg_1008_84ba(u16 param_1, u32 param_2, HWND16 param_3);


void win_1008_5c9e(u32         param_1,
                   u32        *param_2,
                   u16         param_3,
                   u16         param_4,
                   WNDCLASS16 *param_5);


HWND16
create_window_1008_5e7e(Globals *globals, u16 in_stock_obj_id, WNDCLASS16 *in_wnd_class);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LRESULT make_def_win_proc_1008_5f44(u16      param_1,
                                    WPARAM16 in_wparam_2,
                                    LPARAM   param_3,
                                    HWND16   in_hwnd_4);


void destroy_win_1008_628e(u32 param_1, HWND16 param_2);


#endif // OUTPOST_1_SRC_WIN_OPS_WIN_OPS_3_H_
