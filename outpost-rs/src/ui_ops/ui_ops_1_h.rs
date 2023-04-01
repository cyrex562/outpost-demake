//
// Created by cyrex on 2/17/2023.
//

#ifndef OUTPOST_1_SRC_UI_OPS_UI_OPS_1_H_
#define OUTPOST_1_SRC_UI_OPS_UI_OPS_1_H_


// #include "globals.h"
// #include "op_int.h"
// #include "op_windef.h"
// #include "structs/structs_0xx/struct_1.h"
// #include "structs/structs_0xx/struct_18.h"
// #include "structs/structs_0xx/struct_37.h"
// #include "structs/structs_0xx/structs_3x.h"
// #include "structs/structs_0xx/structs_5x.h"

void unk_draw_op_1040_b0f8(globals: &mut Globals, param_1: *mut Struct18);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_op_1040_ae04(param_1: u32, WORD *param_2, Globals *globals);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void msg_box_ui_op_1040_ad66(globals: &mut Globals,
                             param_1: u32,
                             char    *param_2,
                             u8      *param_3,
                            param_4: u16);




void pass1_1040_ad24(param_1: i16, param_2: u16, param_3: u16, param_4: u32, param_5: *mut u8, param_6: u16, param_7: u16);




void pass1_1040_ad14(param_1: u32, param_2: u16);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_dlg_op_1040_a94a(globals: &mut Globals, param_1: u32, param_2: u16);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void msg_box_op_1040_a85a(param_1: u32, char *param_2, param_3: *mut u8, param_4: u16);




void pass1_1040_a84a(param_1: u32, param_2: u16);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_op_1040_a784(param_1: i16, param_2: i16, param_3: u16, param_4: u32, param_5: u16, param_6: u16, param_7: u16);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void unk_win_ui_op_1040_b230(globals: &mut Globals,
                             param_1: *mut Struct1,
                             param_2: u16,
                            param_3: u16);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass1_1040_b54a(globals: &mut Globals,
                     param_1: i16,
                     param_2: u16,
                     param_3: u16,
                     param_4: u32,
                     u8      *param_5,
                     param_6: u16,
                    param_7: u16);




void destroy_window_1040_b726(param_1: *mut u32, param_2: i16, in_win_handle_3: HWND16);




void pass1_1040_c5ac(u16 *param_1);




void win_ui_op_1040_bbe2(param_1: i16, param_2: u16, param_3: u16, param_4: u32, param_5: HWND16, param_6: u16);




void destroy_win_1040_bb78(param_1: *mut Struct35, param_2: HWND16);




void win_ui_1040_b8d2(param_1: *mut Struct1, param_2: u16, param_3: u16, param_4: u16);




u16 pass1_1040_b864(param_1: *mut u32, i16 *param_2, param_3: u16, param_4: u16, param_5: i16, param_6: u16);




void show_win_1040_b43c(param_1: *mut u32, param_2: HWND16);




void pass1_1040_b45e(param_1: u32, param_2: HWND16);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass1_1040_b4c8(param_1: u32, param_2: *mut u8, param_3: i16, param_4: u16);




void send_dlg_item_msg_1040_d20c(param_1: u32, long param_2, param_3: u16, param_4: u16);


void win_ui_op_1040_d2ac(globals: &mut Globals,
                         param_1: i16,
                         param_2: u16,
                         param_3: u16,
                         param_4: u32,
                         param_5: u16,
                         param_6: u16,
                        param_7: u16);




void msg_box_op_1040_d3d0(param_1: u32, char *param_2, param_3: *mut u8, param_4: u16);




void enable_win_1040_d60e(param_1: u32, param_2: HWND16);




void enable_win_1040_d6be(param_1: u32, param_2: HWND16);




void send_ldg_item_msg_1040_d79c(param_1: u32, param_2: u16);



void pass1_1040_d29c(param_1: u32, param_2: u16);




LRESULT send_dlg_msg_1040_cf1c(param_1: u32, param_2: u16);




void send_dlg_item_1040_ce76(param_1: u32, param_2: HWND16, param_3: u16);



void send_dlg_item_msg_1040_ce12(param_1: u16, param_2: u16, param_3: u32, param_4: u16, WORD *param_5);




u16 pass1_1040_cdac(param_1: u32, param_2: u16, param_3: u16, param_4: i16, param_5: HWND16);




void msg_box_op_1040_cce4(param_1: u32, char *param_2, param_3: *mut u8, param_4: u16);



void pass1_1040_cc8c(param_1: i16, param_2: u16, param_3: u16, param_4: u32, param_5: *mut u8, param_6: u16, param_7: u16);



LRESULT pass1_1040_cc66(param_1: u32, param_2: u16);


void win_ui_op_1040_cace(globals: &mut Globals, param_1: u32, param_2: HWND16, param_3: u16);




void pass1_1040_caa6(param_1: u16, param_2: u32, param_3: *mut u8, param_4: i16, param_5: u16);




void get_dlg_item_1040_a3d0(param_1: *mut Struct49, param_2: HWND16);




void enable_win_1040_86dc(param_1: HWND16);




void destroy_win_1040_8b7e(param_1: HWND16);




void load_icon_1040_8b92(param_1: *mut Struct57, HINSTANCE16 hinst_arg_2);




void get_sys_metrics_1040_8c66(param_1: *mut Struct37, param_2: HWND16);




pub fn draw_text_1040_8d14(param_1: *mut Struct37, param_2: HWND16);




void enable_window_1040_8ea0(param_1: u16, param_2: u16, param_3: u16, param_4: u32, param_5: u16);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void create_window_1040_92dc(globals: &mut Globals, param_1: *mut Struct65);


void mov_update_win_1040_93aa(param_1: *mut Struct65, param_2: u32, param_4: u16);


i16 string_1040_8520(globals: &mut Globals,
                     param_1: *mut Struct57,
                     param_2: u16,
                     param_3: u16,
                     param_4: i16,
                     param_5: u16,
                     param_6: u16,
                     u8       *param_7,
                    param_8: u16);




Struct18 *pass1_1040_83e6(param_1: *mut Struct18, param_2: u8, param_3: u16);




void move_win_1040_826c(param_1: *mut Struct1, param_2: u16, BOOL16 param_3);




void destroy_win_1040_8212(param_1: u32, param_2: HWND16);




void set_sys_modal_window_1040_81fe(param_1: HWND16);




void menu_ui_op_1040_7f86(param_1: u32, param_2: HWND16, param_3: *mut RECT16);




u16 pass1_1040_79c0(param_1: *mut u32, i16 *param_2, param_3: u16, param_4: u16, param_5: u16);


void dialog_ui_fn_1040_78e2(Globals    *globals,
                            Struct1    *in_struct_1,
                            HINSTANCE16 in_instance_handle);




void win_cleanup_op_1040_748c(param_1: i16, param_2: u16, param_3: u16, param_4: u32);




void msg_box_ui_op_1040_64ca(param_1: u32, char *param_2, param_3: *mut u8, param_4: u16);


void show_win_1040_65ba(globals: &mut Globals, param_1: *mut Struct1, param_2: u16);


void post_win_msg_1040_672e(globals: &mut Globals,
                            param_1: i16,
                            param_2: u16,
                            param_3: u16,
                            param_4: u32,
                            param_5: u16,
                           param_6: u16);




void enable_win_1040_6880(param_1: u32, param_2: i16, param_3: HWND16);


void mixed_win_ui_op_1040_6942(globals: &mut Globals,
                               struct_arg1: *mut Struct1,
                               param_2: u16,
                              hinst_arg3: u16);




void enable_win_1040_6ff2(param_1: u32, param_2: i16, param_3: HWND16);




u16 pass1_1040_7044(param_1: *mut u32, i16 *param_2, param_3: u16, param_4: u16, param_5: i16, param_6: u16);


void mixed_win_ui_op_1040_70b4(globals: &mut Globals,
                               param_1: *mut Struct1,
                               param_2: u16,
                              param_3: u16);




void pass1_1040_57d4(param_1: *mut Struct1, param_2: *mut u8, param_3: i16, param_4: u16, param_5: u16);







#endif // OUTPOST_1_SRC_UI_OPS_UI_OPS_1_H_
