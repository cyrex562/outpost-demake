#include "fn_ptr_ops_5.h"

#include "address_tables/function_tables.h"
#include "fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_ops/struct_ops_3.h"
#include "struct_ops/struct_ops_4.h"
#include "structs/structs_0xx/struct_18.h"
#include "structs/structs_0xx/structs_9x.h"
#include "unk/unk_14.h"

void  pass1_1018_7f0e(Struct18 *param_1, u8 param_2)

{
    Struct671 *iVar1;
    u16          uVar1;

    iVar1 = (Struct671 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_7f56(u16 *param_1, u8 param_2)

{
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_7f9e(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_7fe6(Struct18 *param_1, u8 param_2)

{
    Struct672 *iVar1;
    u16          uVar1;

    iVar1 = (Struct672 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_802e(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8076(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_80be(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8106(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_814e(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8196(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_81de(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8226(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_826e(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_82b6(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_82fe(Struct18 *param_1, u8 param_2)

{
    Struct517 *iVar1;
    u16          uVar1;

    iVar1 = (Struct517 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8346(Struct18 *param_1, u8 param_2)

{
    Struct518 *iVar1;
    u16          uVar1;

    iVar1 = (Struct518 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_838e(Struct18 *param_1, u8 param_2)

{
    Struct519 *iVar1;
    u16          uVar1;

    iVar1 = (Struct519 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_83d6(Struct18 *param_1, u8 param_2)

{
    Struct673 *iVar1;
    u16          uVar1;

    iVar1 = (Struct673 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_841e(Struct18 *param_1, u8 param_2)

{
    Struct520 *iVar1;
    u16          uVar1;

    iVar1 = (Struct520 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8466(Struct18 *param_1, u8 param_2)

{
    Struct521 *iVar1;
    u16          uVar1;

    iVar1 = (Struct521 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_84ae(Struct18 *param_1, u8 param_2)

{
    Struct522 *iVar1;
    u16          uVar1;

    iVar1 = (Struct522 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_84f6(Struct18 *param_1, u8 param_2)

{
    Struct523 *iVar1;
    u16          uVar1;

    iVar1 = (Struct523 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_853e(Struct18 *param_1, u8 param_2)

{
    Struct524 *iVar1;
    u16          uVar1;

    iVar1 = (Struct524 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8586(Struct18 *param_1, u8 param_2)

{
    Struct525 *iVar1;
    u16          uVar1;

    iVar1 = (Struct525 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_85ce(Struct18 *param_1, u8 param_2)

{
    Struct526 *iVar1;
    u16          uVar1;

    iVar1 = (Struct526 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8616(Struct18 *param_1, u8 param_2)

{
    Struct527 *iVar1;
    u16          uVar1;

    iVar1 = (Struct527 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_865e(Struct18 *param_1, u8 param_2)

{
    Struct528 *iVar1;
    u16          uVar1;

    iVar1 = (Struct528 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_86a6(Struct18 *param_1, u8 param_2)

{
    Struct529 *iVar1;
    u16          uVar1;

    iVar1 = (Struct529 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_86ee(Struct18 *param_1, u8 param_2)

{
    Struct530 *iVar1;
    u16          uVar1;

    iVar1 = (Struct530 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8736(Struct18 *param_1, u8 param_2)

{
    Struct531 *iVar1;
    u16          uVar1;

    iVar1 = (Struct531 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_877e(Struct18 *param_1, u8 param_2)

{
    Struct532 *iVar1;
    u16          uVar1;

    iVar1 = (Struct532 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_87c6(Struct18 *param_1, u8 param_2)

{
    Struct533 *iVar1;
    u16          uVar1;

    iVar1 = (Struct533 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_880e(Struct18 *param_1, u8 param_2)

{
    Struct534 *iVar1;
    u16          uVar1;

    iVar1 = (Struct534 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8856(Struct18 *param_1, u8 param_2)

{
    Struct535 *iVar1;
    u16          uVar1;

    iVar1 = (Struct535 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_889e(Struct18 *param_1, u8 param_2)

{
    Struct536 *iVar1;
    u16          uVar1;

    iVar1 = (Struct536 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_88e6(Struct18 *param_1, u8 param_2)

{
    Struct537 *iVar1;
    u16          uVar1;

    iVar1 = (Struct537 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_892e(Struct18 *param_1, u8 param_2)

{
    Struct538 *iVar1;
    u16          uVar1;

    iVar1 = (Struct538 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8976(Struct18 *param_1, u8 param_2)

{
    Struct539 *iVar1;
    u16          uVar1;

    iVar1 = (Struct539 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_89be(Struct18 *param_1, u8 param_2)

{
    Struct540 *iVar1;
    u16          uVar1;

    iVar1 = (Struct540 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8a06(Struct18 *param_1, u8 param_2)

{
    Struct541 *iVar1;
    u16          uVar1;

    iVar1 = (Struct541 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8a4e(Struct18 *param_1, u8 param_2)

{
    Struct674 *iVar1;
    u16          uVar1;

    iVar1 = (Struct674 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8a96(Struct18 *param_1, u8 param_2)

{
    Struct542 *iVar1;
    u16          uVar1;

    iVar1 = (Struct542 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8ade(Struct18 *param_1, u8 param_2)

{
    Struct543 *iVar1;
    u16          uVar1;

    iVar1 = (Struct543 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8b26(Struct18 *param_1, u8 param_2)

{
    Struct544 *iVar1;
    u16          uVar1;

    iVar1 = (Struct544 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8b6e(Struct18 *param_1, u8 param_2)

{
    Struct545 *iVar1;
    u16          uVar1;

    iVar1 = (Struct545 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8bb6(Struct18 *param_1, u8 param_2)

{
    Struct546 *iVar1;
    u16          uVar1;

    iVar1 = (Struct546 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8bfe(Struct18 *param_1, u8 param_2)

{
    Struct547 *iVar1;
    u16          uVar1;

    iVar1 = (Struct547 *)param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1->fld0_addr_table = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}

void  pass1_1018_6c1e(u16 *param_1, u8 param_2) {
    Struct512 *uVar1;
    u16 u_var2;

    uVar1 = (Struct512 *) param_1;
    uVar1 = uVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(uVar1)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    uVar1->fld2_segment = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    uVar1->fld2_segment = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}

void  pass1_1018_7da6(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_7dee(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_7e36(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_7e7e(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_7ec6(u16 *param_1, u8 param_2) {
    i16 iVar1;
    u16 u_var2;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return;
}

Struct18 * pass1_1018_5a2e(Struct18 *param_1, u8 param_2)

{
    param_1 = (Struct18 *)(param_1 & 0xffff0000 | (param_1 - 0xe2));
    pass1_1018_58b6(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 * pass1_1018_5df4(u16 *param_1, u8 param_2, u16 param_3)

{
    pass1_1018_5cc8(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1018_5e86(u32 *param_1)

{
    fn_ptr_1 *ppcVar1;

    ppcVar1 = (*param_1 + 0x6c);
    (**ppcVar1)();
    return;
}

void  pass1_1018_5ffa(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;

    uVar5  = (param_1 >> 0x10);
    iVar4  = param_1;
    puVar1 = (iVar4 + 0x92);
    u_var2  = (iVar4 + 0x94);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    (iVar4 + 0x92) = 0x0;
    pass1_1010_1dda(*(iVar4 + 0x8e));
    (iVar4 + 0x8e) = 0x0;
    return;
}


u16  pass1_1018_6048(u32 param_1)

{
    fn_ptr_1 *ppcVar1;

    ppcVar1 = ((param_1 + 0x92) + 0x8);
    (**ppcVar1)();
    return 0x0;
}

u16 * pass1_1018_6102(u16 *param_1, u8 param_2)

{
    pass1_1018_5e5a(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

u32  pass1_1018_669a(u32 param_1, u8 param_2)

{
    pass1_1018_620c(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

u16 * pass1_1018_684c(u16 *param_1, u8 param_2)

{
    param_1 = (param_1 & 0xffff0000 | (param_1 - 0xe2));
    pass1_1018_673c(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

u16 * pass1_1018_69dc(u16 *param_1, u8 param_2)

{
    pass1_1018_69ac(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

u16 * pass1_1018_4a64(u16 *param_1, u8 param_2)

{
    pass1_1018_4760(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

u16 * pass1_1018_4c78(u16 *param_1, u8 param_2, u16 param_3)

{
    pass1_1010_1d80(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

u32  pass1_1018_56a8(u32 param_1, u8 param_2, u16 param_3)

{
    pass1_1018_50ac(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

u16 * pass1_1018_580a(u16 *param_1, u8 param_2, u16 param_3)

{
    pass1_1018_5714(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1018_3cda(Struct506 *param_1, char *param_2, char *param_3)

{
    void **ppcVar1;
    u16          u_var2;
    u16          extraout_DX;
    u16          uVar3;
    Struct506 *iVar5;
    u16          uVar4;

    uVar4   = (param_1 >> 0x10);
    iVar5   = (Struct506 *)param_1;
    ppcVar1 = (*param_1 + 0x10);
    (**ppcVar1)();
    uVar3 = extraout_DX;
    fn_ptr_1000_17ce(&iVar5->field_0x126, SEG_1000);
    fn_ptr_1000_17ce(&iVar5->field_0x12a, SEG_1000);
    u_var2              = str_op_1008_60e8(param_3, uVar3);
    iVar5->field_0x126 = u_var2;
    iVar5->field_0x128 = uVar3;
    u_var2              = str_op_1008_60e8(param_2, uVar3);
    iVar5->field_0x12a = u_var2;
    iVar5->field_0x12c = uVar3;
    return;
}

u16 * pass1_1018_46e6(u16 *param_1, u8 param_2, u16 param_3)

{
    pass1_1018_33b4(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1018_4760(u16 *param_1) {
    Struct507 *iVar2;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar2 = (Struct507 *) param_1;
    param_1->field_0x0 = addr_table_1018_4a8a[7];//&PTR_LOOP_1050_4aa6;
    iVar2->fld2_segment = SEG_1018;
    fn_ptr_1000_17ce((Struct18 *) iVar2->field_0x4, SEG_1000);
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar2->fld2_segment = SEG_1008;
}

void  pass1_1018_4882(u16 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1018_4a8a[1];//&PTR_LOOP_1050_4a8e;
    param_1->fld2_segment = SEG_1018;
    fn_ptr_1000_17ce((param_1 + 0x10), SEG_1000);
    pass1_1018_4760(param_1);
}

u16 * pass1_1018_495a(u16 *param_1, u8 param_2)

{
    pass1_1018_4760(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}


u16 * pass1_1018_4980(u16 *param_1, u8 param_2)

{
    pass1_1018_4760(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}


u16 * pass1_1018_49a6(u16 *param_1, u8 param_2)

{
    pass1_1018_4760(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}


u16 * pass1_1018_49cc(u16 *param_1, u8 param_2)

{
    pass1_1018_4760(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}


u16 * pass1_1018_49f2(u16 *param_1, u8 param_2)

{
    pass1_1018_4882(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}


u16 * pass1_1018_4a18(u16 *param_1, u8 param_2)

{
    pass1_1018_4760(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}


u16 * pass1_1018_4a3e(u16 *param_1, u8 param_2)

{
    pass1_1018_4760(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

Struct11 * pass1_1018_2aa8(Struct11 *param_1, u8 param_2, u16 param_3)

{
    param_1 = (Struct11 *)(param_1 & 0xffff0000 | (param_1 - 0x1c));
    pass1_1018_2440(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1018_2afa(u32 *param_1)

{
    fn_ptr_1000_17ce((Struct18 *)*param_1, SEG_1000);
    return;
}


void  pass1_1018_2c60(u16 *param_1, u16 param_2)

{
    u32  *puVar1;
    u16 u_var2;
    void **ppcVar3;
    u16 *puVar4;
    u16 uVar5;
    Struct503 *uVar6;
    u16 uVar7;
    u16 *pu_stack6;

    uVar7 = (param_1 >> 0x10);
    uVar6 = (Struct503 *) param_1;
    param_1->field_0x0 = addr_table_1018_32d8;//0x32d8;
    uVar6->fld2_segment = SEG_1018;
    uVar6->field_0x20 = addr_table_1018_32d8[15];//0x3314;
    uVar6->field_0x22 = SEG_1018;
    if (uVar6->field_0x182 != 0x0) {
        if (param_1 == 0x0) {
            puVar4 = 0x0;
            uVar5 = 0x0;
        }
        else
        {
            puVar4 = &uVar6->field_0x20;
            uVar5  = uVar7;
        }
        pass1_1010_1ea6(uVar6->field_0x182, str_var1(uVar5, puVar4), param_2);
    }
    fn_ptr_1000_17ce((Struct18 *)uVar6->field_0x186, SEG_1000);
    puVar1 = uVar6->field_0x24;
    u_var2  = uVar6->field_0x26;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)(SEG_1000, puVar1, u_var2, 0x1);
    }
    if(param_1 == 0x0)
    {
        puVar4 = 0x0;
        uVar7  = 0x0;
    }
    else
    {
        puVar4 = &uVar6->field_0x20;
    }
    pu_stack6    = str_var1(uVar7, puVar4);
    *pu_stack6   = addr_table_1008_380a[36]; // 0x389a
    puVar4[0x1] = SEG_1008;
    pass1_1010_1d80(param_1, param_2);
    return;
}

void  pass1_1018_30ca(Struct504 *param_1, char *param_2, u16 param_3)

{
    u16          uVar1;
    Struct504 *iVar3;
    u16          u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar3 = (Struct504 *)param_1;
    fn_ptr_1000_17ce(&iVar3->field_0x186, SEG_1000);
    uVar1              = str_op_1008_60e8(param_2, param_3);
    iVar3->field_0x186 = uVar1;
    iVar3->field_0x188 = param_3;
    return;
}

u16 * pass1_1018_32a6(u16 *param_1, u8 param_2, u16 param_3)

{
    param_1 = (param_1 & 0xffff0000 | (param_1 - 0x20));
    pass1_1018_2c60(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1018_33b4(u16 *param_1, u16 param_2) {
    u32 *puVar1;
    u16 u_var2;
    void **ppcVar3;
    Struct505 *iVar5;
    u16 uVar4;

    uVar4 = (param_1 >> 0x10);
    iVar5 = (Struct505 *) param_1;
    param_1->field_0x0 = addr_table_1018_470c;//0x470c; //&PTR_LOOP_1050_470c;
    iVar5->fld2_segment = SEG_1018;
    puVar1 = iVar5->field_0x136;
    u_var2 = iVar5->field_0x138;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    &iVar5->field_0x136 = 0x0;
    fn_ptr_1000_17ce((Struct18 *) iVar5->field_0x126, SEG_1000);
    fn_ptr_1000_17ce((Struct18 *)iVar5->field_0x12a, SEG_1000);
    pass1_1008_caa0(param_1, param_2);
    return;
}

Struct18 *pass1_1018_1f6a(u16 param_1, Struct18 *param_2, u8 param_3, u16 param_4)

{
    param_2 = (Struct18 *)(param_2 & 0xffff0000 | (param_2 - 0x20));
    pass1_1018_1a04(param_2, param_4);
    if((param_3 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_2, SEG_1000);
    }
    return param_2;
}

u16 * pass1_1018_1f8a(u16 *param_1, u8 param_2, u16 param_3)

{
    pass1_1018_1a04(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

u32  pass1_1018_21c2(u32 param_1, u8 param_2, u16 param_3)

{
    pass1_1018_2076(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1018_0dc6(Struct91 *param_1, u16 param_2)

{
    u16        *puVar1;
    u8         *pu_var2;
    u16         uVar3;
    i16         iVar4;
    u32 *puVar5;
    Struct18 *paVar6;
    u8         *in_DX;
    u8         *puVar7;
    u8         *puVar8;
    u16         uVar9;
    Struct91 *iVar13;
    u16         uVar10;
    u32  local_32;
    u16         uStack46;
    u32         uStack44;
    Struct18 *paStack40;
    Struct18 *paStack36;
    Struct18 *p_stack32;
    u32  uStack28;
    u32  uStack24;
    u8          local_14[0x8];
    u16         uStack12;
    u16         uStack10;
    u16         uStack8;
    u16         u_stack6;
    i16         iStack4;

    pass1_1028_dc52((Struct92 *)str_var1(param_2, local_14), 0x1, 0x0, 0x400);
    uVar10    = (param_1 >> 0x10);
    iVar13    = (Struct91 *)param_1;
    paStack36 = (Struct18 *)iVar13->field_0x94;
    fn_ptr_1000_17ce(paStack36, SEG_1000);
    paStack40 = (Struct18 *)iVar13->field_0x9a;
    p_stack32 = paStack40;
    fn_ptr_1000_17ce(paStack40, SEG_1000);
    iVar13->field_0x94 = 0x0;
    iVar13->field_0x9a = 0x0;
    iVar13->field_0x92 = 0x0;
    iVar13->field_0x98 = 0x0;
    while(true)
    {
        pu_var2 = local_14;
        pass1_1028_e4ec(str_var1(param_2, pu_var2));
        uStack24 = str_var1(in_DX, pu_var2);
        puVar7   = (in_DX | pu_var2);
        if(puVar7 == 0x0)
            break;
        paVar6    = (pu_var2 + 0x200);
        paStack40 = paVar6;
        if(paVar6 == (Struct18 *)0x8000001)
        {
            puVar1  = &iVar13->field_0x92;
            *puVar1 = *puVar1 + 0x1;
            in_DX   = puVar7;
        }
        else
        {
            if((iVar13->field_0xa8 != 0x0) || (pass1_1008_dfa6(iVar13->field_0xa2, (pu_var2 + 0x4), 0x4000001, param_2), in_DX = puVar7, paVar6 != 0x0))
            {
                in_DX   = puVar7;
                puVar1  = &iVar13->field_0x98;
                *puVar1 = *puVar1 + 0x1;
            }
        }
    }
    puVar8 = puVar7;
    if(iVar13->field_0x92 != 0x0)
    {
        uVar9    = iVar13->field_0x92;
        uStack44 = uStack44 & 0xffff0000 | uVar9;
        uVar3 = uVar9 * 0x6;
        mem_op_1000_179c(uVar3, 0x0, 0);
        p_stack32 = (Struct18 *)str_var1(puVar7, uVar3);
        puVar8    = (puVar7 | uVar3);
        if(puVar8 == 0x0)
        {
            iVar13->field_0x94 = 0x0;
        }
        else
        {
            pass1_1000_5586(0x3e38, SEG_1008, uStack44, 0x6, uVar3, puVar7);
            iVar13->field_0x94 = p_stack32;
        }
    }
    if(iVar13->field_0x98 != 0x0)
    {
        uVar9    = iVar13->field_0x98;
        uStack44 = uStack44 & 0xffff0000 | uVar9;
        uVar3 = uVar9 * 0x6;
        mem_op_1000_179c(uVar3, puVar8, 0);
        p_stack32 = (Struct18 *)str_var1(puVar8, uVar3);
        if((puVar8 | uVar3) == 0x0)
        {
            iVar13->field_0x9a = 0x0;
        }
        else
        {
            pass1_1000_5586(0x3e38, SEG_1008, uStack44, 0x6, uVar3, puVar8);
            iVar13->field_0x9a = p_stack32;
        }
    }
    if(iStack4 != 0x0)
    {
        uStack8 = 0x1;
        u_stack6 = 0x0;
    }
    uStack28 = 0x0;
    uStack12 = uStack8;
    uStack10 = u_stack6;
LAB_1018_0f74:
    pu_var2 = local_14;
    pass1_1028_e4ec(str_var1(param_2, pu_var2));
    uStack24 = str_var1(u_stack6, pu_var2);
    uVar9    = u_stack6 | pu_var2;
    if(uVar9 == 0x0)
    {
        return;
    }
    uStack44  = *(pu_var2 + 0x200);
    paVar6    = (pu_var2 + 0x10);
    paStack40 = paVar6;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, paVar6, (paVar6 >> 0x10));
    paStack36 = (Struct18 *)(paVar6 & 0xffff | uVar9 << 0x10);
    local_32  = (paVar6 + 0xc);
    uStack46  = (paVar6 + 0x10);
    puVar5    = &local_32;
    if(uStack44 != 0x8000001)
        goto LAB_1018_0ffc;
    iVar4    = &iVar13->field_0x94;
    u_stack6  = (&iVar13->field_0x94 + 0x2);
    uStack28 = uStack28 & 0xffff | (uStack28 + 0x1) << 0x10;
    goto LAB_1018_0fe8;
LAB_1018_0ffc:
    if((iVar13->field_0xa8 != 0x0) || (pass1_1008_dfa6(iVar13->field_0xa2, (uStack24 + 0x4), 0x4000001, param_2), u_stack6 = uVar9, puVar5 != 0x0))
    {
        iVar4          = &iVar13->field_0x9a;
        u_stack6        = (&iVar13->field_0x9a + 0x2);
        uStack28       = uStack28 & 0xffff0000 | (uStack28 + 0x1);
        uStack28 = uStack28;
    LAB_1018_0fe8:
        pass1_1008_3f62(str_var1(u_stack6, iVar4 + uStack28 * 0x6),
                        str_var1(param_2, &local_32));
    }
    goto LAB_1018_0f74;
}

u16 * pass1_1018_1842(u16 *param_1, u8 param_2, u16 param_3)

{
    param_1 = (param_1 & 0xffff0000 | (param_1 - 0x20));
    pass1_1018_078e(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1018_1a04(u16 *param_1, u16 param_2)

{
    u32 *puVar1;
    u16 u_var2;
    void **ppcVar3;
    u16 *puVar4;
    Struct501 *iVar5;
    u16 uVar5;
    u16 *puStack14;

    uVar5 = (param_1 >> 0x10);
    iVar5 = (Struct501 *) param_1;
    param_1->field_0x0 = addr_table_1018_1fb0;//0x1fb0;
    iVar5->fld2_segment = SEG_1018;
    iVar5->field_0x20 = addr_table_1018_1fb0[15];//0x1fec;
    iVar5->field_0x22 = SEG_1018;
    puVar1 = iVar5->field_0x24;
    u_var2 = iVar5->field_0x26;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    fn_ptr_1000_17ce((Struct18 *)iVar5->field_0x40, SEG_1000);
    if(param_1 == 0x0)
    {
        puVar4 = 0x0;
        uVar5  = 0x0;
    }
    else
    {
        puVar4 = &iVar5->field_0x20;
    }
    puStack14   = str_var1(uVar5, puVar4);
    *puStack14  = addr_table_1008_380a[36]; // 0x389a
    puVar4[0x1] = SEG_1008;
    pass1_1010_1d80(param_1, param_2);
    return;
}


u32  pass1_1010_e99a(u32 param_1, u8 param_2)

{
    u16 unaff_SS;

    param_1 = param_1 & 0xffff0000 | (param_1 - 0xa);
    pass1_1010_a478(param_1, unaff_SS);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1010_eb66(u16 *param_1, u16 param_2)

{
    u32 *puVar1;
    u16 u_var2;
    void **ppcVar3;
    u16 *puVar4;
    Struct499 *iVar5;
    u16 uVar5;
    u16 *puStack14;

    uVar5 = (param_1 >> 0x10);
    iVar5 = (Struct499 *) param_1;
    param_1->field_0x0 = addr_table_1018_0558;//0x558;
    iVar5->fld2_segment = SEG_1018;
    iVar5->field_0xa = addr_table_1018_0558[4];//0x568;
    iVar5->field_0xc = SEG_1018;
    puVar1 = iVar5->field_0xe;
    u_var2 = iVar5->field_0x10;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    pass1_1018_04f2(param_1);
    fn_ptr_1000_17ce((Struct18 *)iVar5->field_0x2c, SEG_1000);
    if(param_1 == 0x0)
    {
        puVar4 = 0x0;
        uVar5  = 0x0;
    }
    else
    {
        puVar4 = &iVar5->field_0xa;
    }
    puStack14   = str_var1(uVar5, puVar4);
    *puStack14  = addr_table_1008_380a[36]; // 0x389a
    puVar4[0x1] = SEG_1008;
    pass1_1010_1d80(param_1, param_2);
    return;
}

void  pass1_1010_ec84(u32 param_1, u16 param_2, u8 param_3)

{
    u8 local_10e[0x10c];

    pass1_1010_1f62(param_2, param_1, 0x14);
    pass1_1030_532e((Struct100 *)str_var1(param_2, local_10e), *(param_1 + 0x20), param_2, param_3);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, local_10e));
    return;
}

u16 * pass1_1018_0526(u16 *param_1, u8 param_2, u16 param_3)

{
    param_1 = (param_1 & 0xffff0000 | (param_1 - 0xa));
    pass1_1010_eb66(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1018_078e(u16 *param_1, u16 param_2)

{
    u16          uVar1;
    u16 u_var2;
    u16 *puVar3;
    u16 uVar4;
    Struct500 *uVar5;
    u16 uVar6;
    u16 *puStack26;
    Struct18 *paStack6;

    uVar6 = (param_1 >> 0x10);
    uVar5 = (Struct500 *) param_1;
    param_1->field_0x0 = addr_table_1018_1874;//0x1874;
    uVar5->fld2_segment = SEG_1018;
    uVar5->field_0x20 = addr_table_1018_1874[15];//0x18b0;
    uVar5->field_0x22 = SEG_1018;
    globals->PTR_LOOP_1050_3960 = globals->PTR_LOOP_1050_3960 + -0x1;
    (globals->_PTR_LOOP_1050_3962 + uVar5->field_0x12 * 0x2 + -0x4) = 0x0;
    if (globals->PTR_LOOP_1050_3960 == 0x0) {
        fn_ptr_1000_17ce(globals->_PTR_LOOP_1050_3962, SEG_1000);
        globals->_PTR_LOOP_1050_3962 = (Struct18 *) 0x0;
    }
    fn_ptr_1000_17ce((Struct18 *)uVar5->field_0x94, SEG_1000);
    fn_ptr_1000_17ce((Struct18 *)uVar5->field_0x9a, SEG_1000);
    fn_ptr_1000_17ce((Struct18 *)uVar5->field_0x88, SEG_1000);
    fn_ptr_1000_17ce((Struct18 *)uVar5->field_0x8e, SEG_1000);
    if(uVar5->field_0x2c != 0x0)
    {
        if(param_1 == 0x0)
        {
            puVar3 = 0x0;
            uVar4  = 0x0;
        }
        else
        {
            puVar3 = &uVar5->field_0x20;
            uVar4  = uVar6;
        }
        pass1_1010_1ea6(uVar5->field_0x2c, str_var1(uVar4, puVar3), param_2);
    }
    if(uVar5->field_9e != 0x0)
    {
        if(param_1 == 0x0)
        {
            puVar3 = 0x0;
            uVar4  = 0x0;
        }
        else
        {
            puVar3 = &uVar5->field_0x20;
            uVar4  = uVar6;
        }
        pass1_1010_1ea6(uVar5->field_9e, str_var1(uVar4, puVar3), param_2);
    }
    uVar1    = uVar5->field_0x60;
    u_var2    = uVar5->field_0x62;
    paStack6 = (Struct18 *)str_var1(u_var2, uVar1);
    if((u_var2 | uVar1) != 0x0)
    {
        pass1_1008_5118(str_var1(u_var2, uVar1));
        fn_ptr_1000_17ce(paStack6, SEG_1000);
    }
    uVar5->field_0x4c = 0x0;
    if(param_1 == 0x0)
    {
        puVar3 = 0x0;
        uVar6  = 0x0;
    }
    else
    {
        puVar3 = &uVar5->field_0x20;
    }
    puStack26   = str_var1(uVar6, puVar3);
    *puStack26  = addr_table_1008_380a[36]; // 0x389a
    puVar3[0x1] = SEG_1008;
    pass1_1010_1d80(param_1, param_2);
    return;
}

u16 * pass1_1010_a172(u16 *param_1, u8 param_2, u16 param_3)

{
    pass1_1010_95f8(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}


u16 * pass1_1010_a198(u16 *param_1, u8 param_2) {
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->fld2_segment = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return param_1;
}
