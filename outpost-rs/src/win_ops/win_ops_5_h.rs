//
// Created by cyrex on 2023-03-07.
//

#ifndef OUTPOST_1_SRC_WIN_OPS_WIN_OPS_5_H_
#define OUTPOST_1_SRC_WIN_OPS_WIN_OPS_5_H_

// #include "globals.h"
// #include "op_int.h"
// #include "op_windef.h"
// #include "structs/structs_0xx/struct_1.h"
// #include "structs/structs_0xx/structs_3x.h"
// #include "structs/structs_0xx/structs_5x.h"
// #include "structs/structs_0xx/structs_x.h"
// #include "structs/structs_8xx/struct_87x.h"


void window_op_1020_10a0(globals: &mut Globals, param_1: *mut Struct0);

void window_op_1020_2642(globals: &mut Globals, param_1: *mut Struct0);

BOOL16 pass1_1008_68c6(param_1: u16, param_2: u16, param_3: u16, i32 param_4);

BOOL16 show_win_1008_96ae(param_1: u32, i16 param_2);

void pass1_1008_3bd6(param_1: u32,
                     param_2: *mut Struct57,
                     param_4: u16,
                     param_5: u32,
                     param_6: u16,
                     param_7: u32,
                     param_8: u32,
                     globals: &mut Globals,
                     param_9: u16,
                     param_10: u16,
                     param_11: u16,
                     param_12: u16,
                     param_13: u16,
                    param_14: u16);

void set_win_text_1008_9664(param_1: u32,param_2: u16,char *param_3);

void destroy_win_1008_9698(param_1: *mut Struct871,param_2: u16);

StructD *  pass1_1008_3cd6(StructD *param_1,param_2: u8);

void win_ui_op_1008_3c34(globals: &mut Globals, param_1: u32, param_2: u8, hdc_param_3: HDC16);

#endif // OUTPOST_1_SRC_WIN_OPS_WIN_OPS_5_H_
