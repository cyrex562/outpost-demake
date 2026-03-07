//
// Created by cyrex on 2/22/2022.
//

// #include "utils.h"

// #include "op_int.h"

u32 str_var1(a: u16, b: u16)
{
    return a << 16 | b;
}

u16 CONCAT11(a: u8, b: u8)
{
    return a << 8 | b;
}

u32 CONCAT13(a: u8, b: u32)
{
    return a << 24 | b;
}

u32 CONCAT12(a: u8, b: u16)
{
    u32 c = 0;
    c |= b;
    c = c | (a << 16);
    return c;
}

u32 SUB42(a: u32, b: u32)
{
    return a - b;
}

u32 SBORROW2(a: u16, b: u16)
{
    return 0;
}

u32 CARRY2(a: u16, b: u16)
{
    return 0;
}

u32 ZEXT24(a: u16)
{
    return 0;
}

u16 SUB21(a: u16)
{
    return 0;
}

u16 CARRY1(a: u16, b: u16)
{
    return 0;
}

u16 CONCAT21(a: u16, b: u16)
{
    return 0;
}

u16 POPCOUNT(a: u16)
{
    return 0;
}

i16 SCARRY1(a: i16, i16 b) {
    return 0;
}

u32 SUB41(a: u32, b: u8) {
    return 0;
}

void *ptr_from_addr_pair(segment: u16, offset: u16) {

}