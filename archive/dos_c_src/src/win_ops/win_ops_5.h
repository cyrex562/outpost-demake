//
// Created by cyrex on 2023-03-07.
//

#ifndef OUTPOST_1_SRC_WIN_OPS_WIN_OPS_5_H_
#define OUTPOST_1_SRC_WIN_OPS_WIN_OPS_5_H_

#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_0xx/struct_1.h"
#include "structs/structs_0xx/structs_3x.h"
#include "structs/structs_0xx/structs_5x.h"
#include "structs/structs_0xx/structs_x.h"
#include "structs/structs_8xx/struct_87x.h"


void window_op_1020_10a0(Globals *globals, Struct0 *param_1);

void window_op_1020_2642(Globals *globals, Struct0 *param_1);

BOOL16 pass1_1008_68c6(u16 param_1, u16 param_2, u16 param_3, i32 param_4);

BOOL16 show_win_1008_96ae(u32 param_1, i16 param_2);

void pass1_1008_3bd6(u32       param_1,
                     Struct57 *param_2,
                     u16       param_4,
                     u32       param_5,
                     u16       param_6,
                     u32       param_7,
                     u32       param_8,
                     Globals  *globals,
                     u16       param_9,
                     u16       param_10,
                     u16       param_11,
                     u16       param_12,
                     u16       param_13,
                     u16       param_14);

void set_win_text_1008_9664(u32 param_1,u16 param_2,char *param_3);

void destroy_win_1008_9698(Struct871 *param_1,u16 param_2);

StructD *  pass1_1008_3cd6(StructD *param_1,u8 param_2);

void win_ui_op_1008_3c34(Globals *globals, u32 param_1, u8 param_2, HDC16 hdc_param_3);

#endif // OUTPOST_1_SRC_WIN_OPS_WIN_OPS_5_H_
