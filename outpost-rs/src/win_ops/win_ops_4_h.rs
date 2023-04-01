//
// Created by cyrex on 2/17/2023.
//

#ifndef OUTPOST_1_SRC_WIN_OPS_WIN_OPS_4_H_
#define OUTPOST_1_SRC_WIN_OPS_WIN_OPS_4_H_


// #include "globals.h"
// #include "op_int.h"
// #include "op_winapi.h"
// #include "structs/structs_0xx/structs_7x.h"
// #include "structs/structs_1xx/structs_16x.h"


void def_win_proc_1008_5632(globals: &mut Globals,
                           param_1: *mut u32,
                            WPARAM16 param_2,
                            param_3: u16,
                            param_4: i16,
                           param_5: u16);


void window_op_1008_3bd6(globals: &mut Globals,
                     param_1: *mut Struct65,
                     param_2: u16,
                     param_3: u16,
                     param_4: u32,
                     param_5: u16,
                     param_6: u32,
                     param_7: u32,
                     param_8: u16,
                    param_9: u16);




void  post_msg_1008_3d20(param_1: u32, param_2: HWND16);




void  post_quit_msg_1008_3af4(i16 exit_code);




u16  unk_win_msg_op_1008_0a3c(param_1: u32, param_2: u16, param_3: HWND16);


void pass1_1008_0a92(globals: &mut Globals, param_1: u32, short param_2);




void  window_op_1008_0af8(param_1: *mut Struct0, param_2: *mut u8, param_3: u16);


BOOL16 mixed_win_op_1008_0c60(
  Struct72 **param_1, param_2: u16, BOOL16 param_3, param_4: HWND16, param_5: u16, param_6: u16, Globals *globals);


void  pass1_1008_818c(param_1: *mut Struct23, HINSTANCE16 param_2, WNDCLASS16 *param_3);

void  pass1_1008_818c(param_1: *mut Struct23, HINSTANCE16 param_2, WNDCLASS16 *param_3);

#endif // OUTPOST_1_SRC_WIN_OPS_WIN_OPS_4_H_
