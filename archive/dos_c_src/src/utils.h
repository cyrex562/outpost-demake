//
// Created by cyrex on 2/22/2022.
//

#ifndef OUTPOST_1_SRC_UTILS_H_
#define OUTPOST_1_SRC_UTILS_H_

#include "op_int.h"

u32 str_var1(u16 a, u16 b);

u16 CONCAT11(u8 a, u8 b) ;

u32 CONCAT12(u8 a, u16 b);

u32 CONCAT13(u8 a, u32 b);

u32 SUB42(u32 a, u32 b);

u32 str_var1(u16 a, u16 b);

u32 SBORROW2(u16 a, u16 b);

u32 CARRY2(u16 a, u16 b);

u32 ZEXT24(u16 a);

u16 SUB21(u16 a);

u16 CARRY1(u16 a, u16 b);

u16 CONCAT21(u16 a, u16 b);

u16 POPCOUNT(u16 a);

i16 SCARRY1(i16 a, i16 b);

u32 SUB41(u32 a, u8 b);

void *ptr_from_addr_pair(u16 segment, u16 offset);

#endif // OUTPOST_1_SRC_UTILS_H_
