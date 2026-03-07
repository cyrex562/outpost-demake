//
// Created by cyrex on 2/22/2022.
//

#ifndef OUTPOST_1_SRC_UTILS_H_
#define OUTPOST_1_SRC_UTILS_H_

// #include "op_int.h"

u32 str_var1(a: u16, b: u16);

u16 CONCAT11(a: u8, b: u8) ;

u32 CONCAT12(a: u8, b: u16);

u32 CONCAT13(a: u8, b: u32);

u32 SUB42(a: u32, b: u32);

u32 str_var1(a: u16, b: u16);

u32 SBORROW2(a: u16, b: u16);

u32 CARRY2(a: u16, b: u16);

u32 ZEXT24(a: u16);

u16 SUB21(a: u16);

u16 CARRY1(a: u16, b: u16);

u16 CONCAT21(a: u16, b: u16);

u16 POPCOUNT(a: u16);

i16 SCARRY1(a: i16, i16 b);

u32 SUB41(a: u32, b: u8);

void *ptr_from_addr_pair(segment: u16, offset: u16);

#endif // OUTPOST_1_SRC_UTILS_H_
