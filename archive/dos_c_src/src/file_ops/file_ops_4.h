//
// Created by cyrex562 on 2/13/23.
//

#ifndef OUTPOST_1_SRC_FILE_OPS_FILE_OPS_4_H_
#define OUTPOST_1_SRC_FILE_OPS_FILE_OPS_4_H_

#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_0xx/struct_18.h"

void  file_1008_6414(u32 *param_1, u32 param_2, u16 param_3, u8 *param_4);

void  close_file_1008_496c(Struct18 *param_1);

u16  read_file_1008_49e8(u32 param_1, u16 param_2, u16 param_3);

Struct18 *file_1008_4c26(Struct18 *param_1, u8 param_2);

void save_file_1008_3178(Globals *globals, u32 param_1, i16 param_2, u16 param_3);



#endif // OUTPOST_1_SRC_FILE_OPS_FILE_OPS_4_H_
