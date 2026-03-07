//
// Created by cyrex562 on 2/13/23.
//

#ifndef OUTPOST_1_SRC_FILE_OPS_FILE_OPS_2_H_
#define OUTPOST_1_SRC_FILE_OPS_FILE_OPS_2_H_

#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_3xx/structs_38x.h"

void  pass1_1030_227a(u32 param_1, u32 param_2, u16 param_3, u16 param_4);

void  pass1_1030_232e(u32 param_1, u32 param_2, i16 param_3, u16 param_4, u16 param_5);

void  pass1_1030_2aca(Struct730 *param_1, u32 param_2, u16 param_3, u16 param_4);

void pass1_1030_2c8a(Globals   *globals,
                     Struct373 *param_1,
                     u32        param_2,
                     i16        param_3,
                     u8        *param_4,
                     u16        param_5);

void  pass1_1030_16d6(u32 param_1, u32 param_2, u16 param_3);

void  file_1030_1730(u32 param_1, u32 param_2);

u16  pass1_1030_1978(Struct730 *param_1, u32 param_2, u16 param_3, u16 param_4);

void  file_1030_19b4(Struct370 *param_1, u32 param_2, i16 param_3, u16 param_4, u16 param_5);

u16  pass1_1030_1a9c(u32 param_1, u32 param_2, u16 param_3);

u16 file_1030_1b18(Globals   *globals,
                   Struct370 *param_1,
                   u32        param_2,
                   i16        param_3,
                   u8        *param_4,
                   u16        param_5);

u16  write_file_fn_1028_e56c(u16 param_1, u16 param_2, u32 param_3, u16 param_4);

BOOL16  pass1_1028_d7a0(u16 param_1, u16 param_2, u32 param_3, u16 param_4);

i16  read_file_1028_d7ba(u16 param_1, u16 param_2, u32 param_3, u16 param_4, u16 param_5);

u32  write_to_file_1028_dce2(u32 *param_1, u32 param_2, u16 param_3);

void  read_file_1028_def2(u32 param_1, u32 param_2, u16 param_3, u16 param_4);

BOOL16  write_to_file_1028_b5ec(u32 param_1, u32 param_2, u16 param_3)
;

void  file_1028_b81a(u32 param_1, u32 param_2, i16 param_3, u16 param_4, u8 *param_5);

BOOL16  pass1_1028_b2c8(u32 param_1, u32 param_2, BOOL16 param_3, u16 param_4);

u16  pass1_1028_64d6(u32 param_1, u32 param_2, u16 param_3);

void  pass1_1028_65e2(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5);

BOOL16  write_to_file_1028_5f82(u32 param_1, u32 param_2, u16 param_3)
;

void  pass1_1028_5fcc(i16 param_1, u8 *param_2, i16 param_3, u16 param_4);

void  pass1_1028_4a1a(u32 param_1, u32 param_2, u16 param_3);

void  pass1_1028_4a5a(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5);

void  write_to_file_1028_3d0e(u32 param_1, u32 param_2, u16 param_3, u16 param_4);

void  pass1_1028_3d92(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5, u16 param_6);

BOOL16  pass1_1028_2418(u32 param_1, u32 param_2, u16 param_3);

BOOL16  file_1028_24a2(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5);

u16  write_to_file_1028_1452(u32 param_1, u32 param_2, u16 param_3);

void  pass1_1028_14d8(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5);

BOOL16  pass1_1020_e94e(u32 param_1, u32 param_2, u16 param_3);

void  pass1_1020_e994(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5);

u16  write_to_file_1028_0234(u32 param_1, u32 param_2, u16 param_3);

void  pass1_1028_0374(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5);

BOOL16  write_to_file_1020_e6a4(u32 param_1, u32 param_2, u16 param_3)
;

void  pass1_1020_e70e(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5);

BOOL16  write_to_file_1020_d3d4(u32 param_1, u32 param_2, u16 param_3)
;

BOOL16  pass1_1020_d41a(u32 param_1, u32 param_2, BOOL16 param_3, u8 *param_4, u16 param_5);

BOOL16  pass1_1020_a644(u16 param_1, u16 param_2, u32 param_3, u16 param_4);

BOOL16  read_file_1020_a65e(u32 param_1, u32 param_2, u16 param_3, u16 param_4);

void  pass1_1020_2488(u32 param_1, u16 param_2, u16 param_3)
;

void  pass1_1018_6630(u32 param_1, u16 param_2, u16 param_3);

void  write_to_file_1010_ed58(u32 param_1, u32 param_2, u16 param_3)
;



#endif // OUTPOST_1_SRC_FILE_OPS_FILE_OPS_2_H_
