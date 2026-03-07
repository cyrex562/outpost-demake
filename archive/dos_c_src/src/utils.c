//
// Created by cyrex on 2/22/2022.
//

#include "utils.h"

#include "op_int.h"

u32 str_var1(u16 a, u16 b)
{
    return a << 16 | b;
}

u16 CONCAT11(u8 a, u8 b)
{
    return a << 8 | b;
}

u32 CONCAT13(u8 a, u32 b)
{
    return a << 24 | b;
}

u32 CONCAT12(u8 a, u16 b)
{
    u32 c = 0;
    c |= b;
    c = c | (a << 16);
    return c;
}

u32 SUB42(u32 a, u32 b)
{
    return a - b;
}

u32 SBORROW2(u16 a, u16 b)
{
    return 0;
}

u32 CARRY2(u16 a, u16 b)
{
    return 0;
}

u32 ZEXT24(u16 a)
{
    return 0;
}

u16 SUB21(u16 a)
{
    return 0;
}

u16 CARRY1(u16 a, u16 b)
{
    return 0;
}

u16 CONCAT21(u16 a, u16 b)
{
    return 0;
}

u16 POPCOUNT(u16 a)
{
    return 0;
}

i16 SCARRY1(i16 a, i16 b) {
    return 0;
}

u32 SUB41(u32 a, u8 b) {
    return 0;
}

void *ptr_from_addr_pair(u16 segment, u16 offset) {

}