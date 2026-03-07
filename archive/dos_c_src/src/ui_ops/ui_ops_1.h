//
// Created by cyrex on 2/17/2023.
//

#ifndef OUTPOST_1_SRC_UI_OPS_UI_OPS_1_H_
#define OUTPOST_1_SRC_UI_OPS_UI_OPS_1_H_


#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_0xx/struct_1.h"
#include "structs/structs_0xx/struct_18.h"
#include "structs/structs_0xx/struct_37.h"
#include "structs/structs_0xx/structs_3x.h"
#include "structs/structs_0xx/structs_5x.h"

void unk_draw_op_1040_b0f8(Globals *globals, Struct18 *param_1);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_op_1040_ae04(u32 param_1, WORD *param_2, Globals *globals);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void msg_box_ui_op_1040_ad66(Globals *globals,
                             u32      param_1,
                             char    *param_2,
                             u8      *param_3,
                             u16      param_4);




void pass1_1040_ad24(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u8 *param_5, u16 param_6, u16 param_7);




void pass1_1040_ad14(u32 param_1, u16 param_2);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_dlg_op_1040_a94a(Globals *globals, u32 param_1, u16 param_2);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void msg_box_op_1040_a85a(u32 param_1, char *param_2, u8 *param_3, u16 param_4);




void pass1_1040_a84a(u32 param_1, u16 param_2);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_op_1040_a784(i16 param_1, i16 param_2, u16 param_3, u32 param_4, u16 param_5, u16 param_6, u16 param_7);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void unk_win_ui_op_1040_b230(Globals *globals,
                             Struct1 *param_1,
                             u16      param_2,
                             u16      param_3);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass1_1040_b54a(Globals *globals,
                     i16      param_1,
                     u16      param_2,
                     u16      param_3,
                     u32      param_4,
                     u8      *param_5,
                     u16      param_6,
                     u16      param_7);




void destroy_window_1040_b726(u32 *param_1, i16 param_2, HWND16 in_win_handle_3);




void pass1_1040_c5ac(u16 *param_1);




void win_ui_op_1040_bbe2(i16 param_1, u16 param_2, u16 param_3, u32 param_4, HWND16 param_5, u16 param_6);




void destroy_win_1040_bb78(Struct35 *param_1, HWND16 param_2);




void win_ui_1040_b8d2(Struct1 *param_1, u16 param_2, u16 param_3, u16 param_4);




u16 pass1_1040_b864(u32 *param_1, i16 *param_2, u16 param_3, u16 param_4, i16 param_5, u16 param_6);




void show_win_1040_b43c(u32 *param_1, HWND16 param_2);




void pass1_1040_b45e(u32 param_1, HWND16 param_2);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass1_1040_b4c8(u32 param_1, u8 *param_2, i16 param_3, u16 param_4);




void send_dlg_item_msg_1040_d20c(u32 param_1, long param_2, u16 param_3, u16 param_4);


void win_ui_op_1040_d2ac(Globals *globals,
                         i16      param_1,
                         u16      param_2,
                         u16      param_3,
                         u32      param_4,
                         u16      param_5,
                         u16      param_6,
                         u16      param_7);




void msg_box_op_1040_d3d0(u32 param_1, char *param_2, u8 *param_3, u16 param_4);




void enable_win_1040_d60e(u32 param_1, HWND16 param_2);




void enable_win_1040_d6be(u32 param_1, HWND16 param_2);




void send_ldg_item_msg_1040_d79c(u32 param_1, u16 param_2);



void pass1_1040_d29c(u32 param_1, u16 param_2);




LRESULT send_dlg_msg_1040_cf1c(u32 param_1, u16 param_2);




void send_dlg_item_1040_ce76(u32 param_1, HWND16 param_2, u16 param_3);



void send_dlg_item_msg_1040_ce12(u16 param_1, u16 param_2, u32 param_3, u16 param_4, WORD *param_5);




u16 pass1_1040_cdac(u32 param_1, u16 param_2, u16 param_3, i16 param_4, HWND16 param_5);




void msg_box_op_1040_cce4(u32 param_1, char *param_2, u8 *param_3, u16 param_4);



void pass1_1040_cc8c(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u8 *param_5, u16 param_6, u16 param_7);



LRESULT pass1_1040_cc66(u32 param_1, u16 param_2);


void win_ui_op_1040_cace(Globals *globals, u32 param_1, HWND16 param_2, u16 param_3);




void pass1_1040_caa6(u16 param_1, u32 param_2, u8 *param_3, i16 param_4, u16 param_5);




void get_dlg_item_1040_a3d0(Struct49 *param_1, HWND16 param_2);




void enable_win_1040_86dc(HWND16 param_1);




void destroy_win_1040_8b7e(HWND16 param_1);




void load_icon_1040_8b92(Struct57 *param_1, HINSTANCE16 hinst_arg_2);




void get_sys_metrics_1040_8c66(Struct37 *param_1, HWND16 param_2);




void draw_text_1040_8d14(Struct37 *param_1, HWND16 param_2);




void enable_window_1040_8ea0(u16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void create_window_1040_92dc(Globals *globals, Struct65 *param_1);


void mov_update_win_1040_93aa(Struct65 *param_1, u32 param_2, u16 param_4);


i16 string_1040_8520(Globals  *globals,
                     Struct57 *param_1,
                     u16       param_2,
                     u16       param_3,
                     i16       param_4,
                     u16       param_5,
                     u16       param_6,
                     u8       *param_7,
                     u16       param_8);




Struct18 *pass1_1040_83e6(Struct18 *param_1, u8 param_2, u16 param_3);




void move_win_1040_826c(Struct1 *param_1, u16 param_2, BOOL16 param_3);




void destroy_win_1040_8212(u32 param_1, HWND16 param_2);




void set_sys_modal_window_1040_81fe(HWND16 param_1);




void menu_ui_op_1040_7f86(u32 param_1, HWND16 param_2, RECT16 *param_3);




u16 pass1_1040_79c0(u32 *param_1, i16 *param_2, u16 param_3, u16 param_4, u16 param_5);


void dialog_ui_fn_1040_78e2(Globals    *globals,
                            Struct1    *in_struct_1,
                            HINSTANCE16 in_instance_handle);




void win_cleanup_op_1040_748c(i16 param_1, u16 param_2, u16 param_3, u32 param_4);




void msg_box_ui_op_1040_64ca(u32 param_1, char *param_2, u8 *param_3, u16 param_4);


void show_win_1040_65ba(Globals *globals, Struct1 *param_1, u16 param_2);


void post_win_msg_1040_672e(Globals *globals,
                            i16      param_1,
                            u16      param_2,
                            u16      param_3,
                            u32      param_4,
                            u16      param_5,
                            u16      param_6);




void enable_win_1040_6880(u32 param_1, i16 param_2, HWND16 param_3);


void mixed_win_ui_op_1040_6942(Globals *globals,
                               Struct1 *struct_arg1,
                               u16      param_2,
                               u16      hinst_arg3);




void enable_win_1040_6ff2(u32 param_1, i16 param_2, HWND16 param_3);




u16 pass1_1040_7044(u32 *param_1, i16 *param_2, u16 param_3, u16 param_4, i16 param_5, u16 param_6);


void mixed_win_ui_op_1040_70b4(Globals *globals,
                               Struct1 *param_1,
                               u16      param_2,
                               u16      param_3);




void pass1_1040_57d4(Struct1 *param_1, u8 *param_2, i16 param_3, u16 param_4, u16 param_5);







#endif // OUTPOST_1_SRC_UI_OPS_UI_OPS_1_H_
