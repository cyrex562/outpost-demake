//
// Created by cyrex562 on 2/13/23.
//

#ifndef OUTPOST_1_SRC_FILE_OPS_FILE_OPS_1_H_
#define OUTPOST_1_SRC_FILE_OPS_FILE_OPS_1_H_

#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_3xx/structs_30x.h"

void file_1038_774e(Globals *globals,
                    Struct307 *param_1, u32 param_2, u8 *param_3, u16 param_4);

u16  pass1_1038_7b20(u32 *param_1, u32 param_2, u16 param_3);

u16 read_file_1038_7c02(Globals *globals,
                        u32     *param_1,
                        u32      param_2,
                        u16      param_3,
                        u16      param_4);

void pass1_1038_5e16(Globals *globals,
                     u32      param_1,
                     u32      param_2,
                     i16      param_3,
                     u16      param_4,
                     u16      param_5);

void file_1038_6118(Globals *globals,
                    u32      param_1,
                    u32      param_2,
                    i16      param_3,
                    u8      *param_4,
                    u16      param_5);

void pass1_1030_de7c(Globals *globals, u32 param_1, u32 param_2, u16 param_3);

void pass1_1030_dec4(u32      param_1,
                     u32      param_2,
                     i16      param_3,
                     u8      *param_4,
                     u16      param_5,
                     Globals *globals);

void pass1_1030_d61c(Globals *globals, u32 param_1, u32 param_2, u16 param_3);

void  pass1_1030_d72e(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5);

void  pass1_1030_c230(u32 param_1, u32 param_2, u16 param_3);

void  pass1_1030_c29c(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5);

BOOL16  pass1_1030_c84e(u32 param_1, u32 param_2, u16 param_3);

BOOL16  pass1_1030_c894(u32 param_1, u32 param_2, BOOL16 param_3, u8 *param_4, u16 param_5);

void  pass1_1030_b768(u32 param_1, u32 param_2, u16 param_3);

void  file_1030_b836(Struct401 *param_1, u32 param_2, u8 *param_3, u16 param_4);

void  pass1_1030_7418(Struct731 *param_1, u32 param_2, i16 param_3, u16 param_4);

void  file_1030_778c(Struct387 *param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5);

BOOL16  pass1_1030_5c1a(u32 param_1, u32 param_2, u16 param_3);

BOOL16  read_file_1030_5c52(u32 param_1, u32 param_2, u16 param_3, u16 param_4);

void  pass1_1030_5dbe(u32 param_1, u32 param_2, u16 param_3, u16 param_4)
;

void  file_1030_5e70(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5);

u16  read_file_1030_4e70(u32 param_1, u32 *param_2, u8 **param_3, long param_4, u16 param_5);

void  pass1_1030_5044(u32 param_1, u16 param_2, u16 param_3);

void  pass1_1030_56f6(u32 param_1, u32 param_2, u16 param_3, u16 param_4);

void  file_1030_581e(Struct381 *param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5);

void  write_to_file_1030_32e4(u32 param_1, u32 param_2, u16 param_3);

void read_file_1030_33f0(Globals *globals, Struct430 *param_1, u32 param_2);



#endif // OUTPOST_1_SRC_FILE_OPS_FILE_OPS_1_H_
