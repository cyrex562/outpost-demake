#pragma once

#include "op_int.h"
#include "op_windef.h"
#include "globals.h"


void  mixed_win_sys_op_1008_016e(u32 param_1, u16 param_2);




BOOL16  pass1_1008_07d8(u16 param_1, BOOL16 param_2, u8 *param_3, u16 param_4);




void pass1_1000_4aea(u16 param_1, u16 param_2, i16 param_3, u16 param_4, u8 *param_5, i16 param_6, i16 param_7, u16 param_8, u16 param_9, u16 param_10);



i16 *pass1_1000_4f1a(i16 param_1, u16 param_2, u16 param_3);




// WARNING: Removing unreachable block (ram,0x10004f47);

u16 dos3_call_1000_4f20(u16 param_1);



u16 dos3call_1000_4f54(u32 param_1, i16 param_2);




// WARNING: Removing unreachable block (ram,0x10004fa9);

i16 dos3_call_1000_4f94(u16 param_1);




// WARNING: Removing unreachable block (ram,0x10004fd7);
// WARNING: Removing unreachable block (ram,0x10004feb);

u16 dos3_call_1000_4fbe(char param_1, i16 param_2);



void pass1_1000_5026(i16 param_1, u16 param_2, u16 param_3, u16 param_4, i16 param_5, u16 param_6, u16 param_7);




// WARNING: Removing unreachable block (ram,0x10005167);

u16 dos3_call_1000_514e(i16 param_1);




// WARNING: Removing unreachable block (ram,0x1000518c);

u16 dos3_call_1000_5174(u16 param_1);




// WARNING: Removing unreachable block (ram,0x100051f7);
// WARNING: Removing unreachable block (ram,0x100051c5);
// WARNING: Removing unreachable block (ram,0x100051d9);
// WARNING: Removing unreachable block (ram,0x10005214);

u16 dos3_calls_1000_5198(i16 param_1);


void fatal_app_exit_1000_3e9e(Globals *globals, u16 app_exit_action);


u16 sys_1000_3f9c(u8 *param_1,
                  u8 *param_2,
                  u16 param_3,
                  u16 param_5,
                  i16 param_6,
                  u16 param_7,
                  u16 param_8,
                  u16 param_9,
                  u8  param_10);




u8 *pass1_1000_400a(i16 param_1, u16 param_2);



void free_mem_1000_407a(u16 param_1, u16 param_2, u16 param_3);




i16 *mixed_sys_op_1000_40af(u16 param_1, i16 param_2, u16 param_3, u16 param_4, u16 param_5);



void dos3_call_set_struct_1000_42de(u16 *param_1, u16 *param_2, u16 *param_3);


void get_date_time_op_1000_435c(Globals *globals, u16 *param_1, u16 param_2, u16 param_3, i16 param_4, u16 param_5);



u16 dos3_call_op_1000_35fe(u16 param_1, i16 param_2);




// WARNING: Removing unreachable block (ram,0x100036b5);
// WARNING: Removing unreachable block (ram,0x10003681);
// WARNING: Removing unreachable block (ram,0x100036f7);
// WARNING: Removing unreachable block (ram,0x100036d8);

void mixed_dos3_call_1000_3636(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5);




// WARNING: Removing unreachable block (ram,0x10003989);
// WARNING: Removing unreachable block (ram,0x100038a1);
// WARNING: Removing unreachable block (ram,0x10003867);
// WARNING: Removing unreachable block (ram,0x10003799);
// WARNING: Removing unreachable block (ram,0x100037ec);
// WARNING: Removing unreachable block (ram,0x10003967);
// WARNING: Removing unreachable block (ram,0x1000391a);
// WARNING: Removing unreachable block (ram,0x100038f2);
// WARNING: Removing unreachable block (ram,0x10003765);
// WARNING: Removing unreachable block (ram,0x100037b7);
// WARNING: Removing unreachable block (ram,0x10003803);
// WARNING: Removing unreachable block (ram,0x1000381c);
// WARNING: Removing unreachable block (ram,0x1000393a);
// WARNING: Removing unreachable block (ram,0x1000384b);
// WARNING: Removing unreachable block (ram,0x1000388b);
// WARNING: Removing unreachable block (ram,0x100038ba);
// WARNING: Removing unreachable block (ram,0x100039b9);

u16 mixed_dos3_call_1000_370a(u16 param_1, u16 param_2, u16 param_3, u8 param_4, u16 param_5, i16 param_6);




u8 *mixed_dos3_call_1000_39f2(u8 *param_1, char *param_2, u8 *param_3, u16 param_4, u16 param_5, u16 param_6, char param_7);




// WARNING: Unable to track spacebase fully for stack
// WARNING: Removing unreachable block (ram,0x10003afe);

u16 mixed_dos3_call_1000_3ad9(u16 param_1, i16 param_2, i16 param_3, i16 param_4, u16 param_5, u16 param_6, u16 param_7, char param_8);




void pass1_1000_3bc0(i16 param_1, i16 param_2, u16 *param_3, u16 param_4, u16 param_5, u16 param_6);




u32 mixed_mem_op_1000_3c51(HGLOBAL16 param_1, HGLOBAL16 param_2, i16 param_3, u16 param_4, u16 param_5, i16 param_6);



void pass1_1000_3cd8(u16 param_1, u16 param_2);



u16 pass1_1000_2e74(u16 *param_1, u16 param_2);



u16 pass1_1000_30a4(i16 param_1, u16 param_2, u16 param_3, u16 param_4, i16 param_5, u16 param_6, u16 param_7, u16 param_8, u16 param_9, u8 param_10);




u16 sys_1000_30b4(u16 param_1, u16 param_2, u8 *param_3, i16 param_4, u16 param_5, u16 param_6, u16 param_7, u16 param_8);



i16 pass1_1000_3503(char param_1, u16 param_2, i16 param_3, u16 param_4, u16 param_5, u8 param_6);



i16 *pass1_1000_25d2(i16 param_1, i16 param_2, u16 param_3, u16 param_4, u16 param_5, u8 *param_6);



i16 *exit_1000_25f2(u16 param_1, u16 param_2, i16 param_3, i16 param_4, u16 param_5, u16 param_6, u16 param_7);


void pass1_1000_262c(Globals *globals,
                     u16      param_1,
                     u16      param_2,
                     u16      param_3, u16 param_4);
