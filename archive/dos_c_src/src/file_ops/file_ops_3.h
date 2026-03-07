//
// Created by cyrex562 on 2/13/23.
//

#ifndef OUTPOST_1_SRC_FILE_OPS_FILE_OPS_3_H_
#define OUTPOST_1_SRC_FILE_OPS_FILE_OPS_3_H_

#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_2xx/structs_21x.h"
#include "structs/structs_7xx/structs_72x.h"

void pass1_1018_0000(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5);

void pass1_1010_89f0(u16 param_1, u16 param_2, u16 param_3, u32 param_4, HINSTANCE16 param_5, u16 param_6);

void write_to_file_1010_6372(Struct729 *param_1, u32 param_2, u16 param_3);

void pass1_1010_648a(u32 param_1, u32 param_2, i16 param_3, u16 param_4);

void write_to_file_1010_6846(u32 param_1, u32 param_2, u16 param_3)
;

void pass1_1010_68c6(Struct248 *param_1, u32 param_2, u16 param_3, u8 *param_4, u16 param_5);

u16 pass1_1010_5dc6(u32 param_1, u32 param_2, u16 param_3);

void pass1_1010_5e56(u32 param_1, u32 param_2, i16 param_3, u16 param_4, u16 param_5);

void find_n_load_rsrc_1010_4e9e(u32 param_1, HGLOBAL16 param_2);

void pass1_1010_404a(u32 param_1, u32 param_2, i16 param_3, u16 param_4)
;

void pass1_1010_0ad2(u32 param_1, u32 param_2, u16 param_3);

void file_1010_0c7c(Globals          *globals,
                    Struct228 *param_1,
                    u32               param_2,
                    i16               param_3,
                    u8               *param_4,
                    u16               param_5);

void pass1_1008_e5da(u32 param_1, u32 param_2, HFILE16 param_3, u16 param_4);

void file_1008_e70e(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5, u16 param_6);

void pass1_1008_c98e(u32 param_1, u32 param_2, HFILE16 param_3, u16 param_4);

void pass1_1008_c9d4(u32 param_1, u32 param_2, i16 param_3, u16 param_4, u64 param_5);

void pass1_1008_ba38(u32 param_1, u32 param_2, HFILE16 param_3, u16 param_4);

void file_1008_bb5e(Globals   *globals,
                    Struct199 *param_1,
                    u32        param_2,
                    i16        param_3,
                    u8        *param_4,
                    u16        param_5,
                    u16        param_6);

void file_1008_7548(u32 param_1, long *param_2, HFILE16 param_3, u16 param_4);

void file_1008_76e4(u32 param_1, long *param_2, u16 param_3, u16 param_4, u16 param_5);

u16 file_1008_77cc(u32 param_1, long *param_2, u8 *param_3, HFILE16 param_4, u16 param_5)
;

void  pass1_1008_7898(u32 param_1, u32 *param_2, u16 param_3, u16 param_4, HFILE16 param_5, u16 param_6);

u16  write_to_file_1008_7954(u32 param_1, u32 *param_2, u16 param_3, HFILE16 param_4, u16 param_5);

void pass1_1008_79f0(u32 param_1, long param_2, HFILE16 param_3, u16 param_4);

void write_to_file_1008_7a22(u32 param_1, long param_2, HFILE16 param_3, u16 param_4);

u16 pass1_1008_7ad4(u32 param_1, long *param_2, u16 param_3, HFILE16 param_4, u16 param_5)
;

u16 write_to_file_1008_7b4c(u32 param_1, u16 *param_2, HFILE16 param_3, u16 param_4);

BOOL16 read_file_1008_7bc8(u32 param_1, u16 *param_2, HFILE16 param_3, u16 param_4);

void read_file_1008_7c6e(u16 param_1, u16 param_2, char *param_3, HFILE16 param_4);

BOOL16 write_to_file_1008_7cac(u32 param_1, u16 param_2);

void  read_file_1008_7cfe(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5);

BOOL16  read_file_1008_7dee(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5, SEGPTR param_6, HFILE16 param_7);

BOOL16  write_to_file_1008_7e1c(u16 param_1, u16 param_2, u16 param_3, u16 param_4, char *buf_to_write, HFILE16 file_handle);

void close_file_1008_6dd0(u32 *param_1, HFILE16 param_2);

BOOL16 file_fn_1008_6e02(u32 *param_1, LPCSTR in_string, u16 param_3);

BOOL16 read_file_1008_6e78(u32 param_1, u16 param_2, char *in_string, u16 param_4);

void file_fn_1008_6eee(u16 param_1, u16 param_2, u32 param_3);

void read_file_1008_6f7a(u16 param_1, u16 param_2, u32 param_3, u16 param_4);

u16 write_to_file_1008_70a6(u32 *param_1, LPCSTR param_2);

BOOL16 read_file_1008_7146(i16 param_1, u16 param_2, LPCSTR param_3, u16 param_4)
;

u16 read_file_1008_71a0(u32 param_1, u16 param_2);

BOOL16 file_fn_1008_726c(u32 param_1, u16 param_2, HFILE16 file_handle)
;



#endif // OUTPOST_1_SRC_FILE_OPS_FILE_OPS_3_H_
