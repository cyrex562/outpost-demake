
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
#include "struct_ops_3.h"

#include "address_tables/data_tables.h"
#include "address_tables/function_tables.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_20.h"
#include "struct_ops_2.h"
#include "struct_ops_4.h"
#include "structs/structs_2xx/structs_29x.h"
#include "structs/structs_5xx/structs_59x.h"
#include "structs/structs_6xx/struct_682.h"
#include "unk/unk_15.h"
#include "unk/unk_19.h"

#include <stdbool.h>

void  pass1_1030_7226(u32 param_1)

{
    u32        uVar1;
    u32 u_var2;
    BOOL16     BVar3;
    i16        iVar4;
    u16        uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x1a) == 0x0)
    {
        struct_op_1030_73a8(param_1 & 0xffff | uVar5 << 0x10);
    }
    u_var2 = (iVar4 + 0x1a);
    BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, (u_var2 + 0xc), 0x10);
    if(((BVar3 != 0x0) && (u_var2 = (iVar4 + 0x1a), (u_var2 + 0x12) == 0x5)) && (uVar1 = *(iVar4 + 0x1a), u_var2 = (uVar1 & 0xffff0000 | (uVar1 + 0x14)), (u_var2 + 0xa4) == 0x1e))
    {
        return;
    }
    return;
}


u32  pass1_1030_51f0(u32 param_1)

{
    i16 iVar1;
    u16 u_var2;

    u_var2          = (param_1 >> 0x10);
    iVar1          = param_1;
    (iVar1 + 0xa4) = 0x0;
    (iVar1 + 0xa6) = 0x0;
    (iVar1 + 0xa8) = 0x0;
    (iVar1 + 0xaa) = 0x0;
    (iVar1 + 0xac) = 0x0;
    return param_1;
}


void  pass1_1030_67cc(Struct687 *param_1)

{
    Struct687 *iVar1;
    u16          uVar1;

    struct_1030_1628(param_1);
    iVar1 = (Struct687 *)param_1;
    iVar1 = (Struct687 *)&iVar1->field_0xc;
    pass1_1008_3e38((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1             = (param_1 >> 0x10);
    iVar1->field_0x12 = 0x0;
    iVar1->field_0x14 = 0x0;
    iVar1->field_0x16 = 0x0;
    iVar1->field_0x1a_addr_offset = 0x0;
    iVar1->field_0x1e = 0x0;
    iVar1->field_0x22 = 0x0;
    iVar1->field_0x26 = 0x0;
    iVar1->field_0x2a = 0x0;
    iVar1->field_0x2e = 0x0;
    iVar1->field_0x32 = 0x0;
    iVar1->field_0x34 = 0x0;
    iVar1->field_0x38 = 0x0;
    iVar1->field_0x36 = 0x0;
    iVar1->field_0x3c = 0x0;
    iVar1->field_0x3a = 0x0;
    iVar1->field_0x40 = 0x0;
    iVar1->field_0x3e = 0x0;
    param_1->field_0x0 = addr_table_1030_8114;//0x8114;
    iVar1->fld2_segment = SEG_1030;
    return;
}


void  pass1_1030_684c(u16 *param_1, u32 *param_2, u16 param_3, u16 param_4, u16 param_5, u32 param_6, u16 param_7)

{
    i16 iVar1;
    u16 u_var2;

    pass1_1030_165e(param_1, 0x5000000, param_6, param_7);
    u_var2          = (param_1 >> 0x10);
    iVar1          = param_1;
    *(iVar1 + 0xc) = *param_2;
    (iVar1 + 0x10) = (param_2 + 0x1);
    (iVar1 + 0x12) = param_4;
    (iVar1 + 0x14) = param_4;
    (iVar1 + 0x16) = 0x0;
    (iVar1 + 0x1a) = 0x0;
    (iVar1 + 0x1e) = 0x0;
    (iVar1 + 0x22) = 0x0;
    (iVar1 + 0x26) = 0x0;
    (iVar1 + 0x2a) = 0x0;
    (iVar1 + 0x2e) = 0x0;
    (iVar1 + 0x32) = 0x0;
    (iVar1 + 0x34) = 0x0;
    (iVar1 + 0x36) = 0x0;
    (iVar1 + 0x3a) = 0x0;
    (iVar1 + 0x3e) = 0x0;
    param_1->field_0x0 = addr_table_1030_8114;//0x8114;
    (iVar1 + 0x2) = SEG_1030;
    return;
}


u16 * pass1_1030_560e(u16 *param_1)

{
    i16 iVar1;
    u16 u_var2;

    struct_1030_17ce(param_1, 0x64, 0x1f4);
    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    (iVar1 + 0x10) = 0x0;
    pass1_1008_3e38((param_1 & 0xffff0000 | (iVar1 + 0x14)));
    (iVar1 + 0x1a) = 0x0;
    (iVar1 + 0x1c) = 0x0;
    param_1->field_0x0 = addr_table_1030_5bd0;//0x5bd0; //s_procLo_1050_5bd0;
    (iVar1 + 0x2) = SEG_1030;
    return param_1;
}


u16 * struct_1030_565a(u16 *param_1, u32 param_2, u16 param_3, u8 *param_4)

{
    Struct353 *iVar1;
    u16 uVar1;

    pass1_1030_183c(param_1, 0x64, 0x1f4, 0x3000000, param_2, param_3, param_4);
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct353 *) param_1;
    iVar1->field_0x10 = 0x0;
    pass1_1008_3e38((param_1 & 0xffff0000 | &iVar1->field_0x14));
    iVar1->field_0x1a_addr_offset = 0x0;
    iVar1->field_0x1c_addr_base = 0x0;
    param_1->field_0x0 = addr_table_1030_5bd0;//0x5bd0; // s_procLo_1050_5bd0;
    iVar1->field_0x2 = SEG_1030;
    return param_1;
}


void  pass1_1030_34da(Struct682 *param_1)

{
    Struct682 *iVar1;
    u16          uVar1;

    uVar1              = (param_1 >> 0x10);
    iVar1              = (Struct682 *)param_1;
    iVar1->field_0x176 = 0x1;
    iVar1->field_0x178 = 0x1;
    iVar1->field_0x17a = 0x1;
    iVar1->field_0x17c = 0x1;
    iVar1->field_0x17e = 0x4;
    iVar1->field_0x182 = 0x32;
    iVar1->field_0x184 = 0xa;
    iVar1->field_0x186 = 0xa;
    iVar1->field_0x188 = 0xa;
    iVar1->field_0x18a = 0x4b;
    pass1_1000_4906((struct Struct20 *)(param_1 & 0xffff0000 | ZEXT24(iVar1 + 0x1)), 0x0, 0x18);

}


void  struct_1030_44be(u32 *param_1, u16 param_2)

{
    Struct138 *iVar1;
    i16          unaff_DI;
    u16          uVar1;
    u16          unaff_SS;
    u16         *pu_var2;

    uVar1              = (param_1 >> 0x10);
    iVar1 = (Struct138 *) param_1;
    param_1->field_0x0 = 0x0;
    iVar1->field_0x8 = 0x0;
    iVar1->field_0x12  = 0x0;
    iVar1->field_0x152 = 0x0;
    iVar1->field_0x154 = 0x0;
    iVar1->field_0x156 = 0x0;
    iVar1->field_0x158 = 0x0;
    iVar1->field_0x15a = 0x0;
    iVar1->field_0x15c = 0x0;
    iVar1->field_0x160 = 0x0;
    iVar1->field_0x164 = 0x0;
    iVar1->field_0x568 = 0x0;
    pu_var2             = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, unaff_SS, param_2, unaff_DI);
    iVar1->field_0x568 = (pu_var2 + 0x64);
    return;
}


u32  struct_1030_4574(Struct159 *param_1)

{
    Struct159 *iVar1;
    u16          uVar1;

    uVar1             = (param_1 >> 0x10);
    iVar1             = (Struct159 *)param_1;
    iVar1->field_0xc  = data_1050_518c;
    iVar1->field_0xe  = data_1050_518e;//0x518e;
    iVar1->field_0x10 = SEG_1050;
    return param_1 & 0xffff0000 | ZEXT24(&iVar1->field_0xc);
}


void  pass1_1030_2068(u16 *param_1) {
    i16 iVar1;
    i16 iVar2;
    u16 uVar3;
    i16 iStack4;

    struct_1030_17ce(param_1, 0x0, 0x0);
    uVar3 = (param_1 >> 0x10);
    iVar1 = param_1;
    param_1->field_0x0 = addr_table_1030_293c;//0x293c;
    (iVar1 + 0x2) = SEG_1030;
    pass1_1000_4906((struct Struct20 *) (param_1 & 0xffff0000 | (iVar1 + 0x10)), 0x0, 0x106);
    pass1_1000_4906((struct Struct20 *) (param_1 & 0xffff0000 | (iVar1 + 0x116)), 0x0, 0x86);
    pass1_1000_4906((struct Struct20 *) (param_1 & 0xffff0000 | (iVar1 + 0x19c)), 0x0, 0xa);
    pass1_1000_4906((struct Struct20 *) (param_1 & 0xffff0000 | (iVar1 + 0x2ac)), 0x0, 0x106);
    iStack4 = 0x0;
    do {
        iVar2 = iStack4 * 0x2 + iVar1;
        (iVar2 + 0x10) = 0xffff;
        (iVar2 + 0x1a6) = 0x19;
        iStack4         = iStack4 + 0x1;
    } while(iStack4 < 0x83);
    return;
}


void  struct_1030_2112(u16 *param_1, u32 param_2, u16 param_3, u8 *param_4) {
    Struct366 *iVar1;
    Struct367 *iVar2;
    u16 uVar1;
    i16 iStack4;

    pass1_1030_183c(param_1, 0x1, 0x1, 0x8000000, param_2, param_3, param_4);
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct366 *) param_1;
    param_1->field_0x0 = addr_table_1030_293c;//0x293c;
    iVar1->field_0x2 = SEG_1030;
    iStack4 = 0x0;
    do {
        iVar2 = (Struct367 *) (&iVar1->field_0x0 + iStack4 * 0x2);
        iVar2->field_0x10 = 0xffff;
        iVar2->field_0x1a6 = 0x19;
        iStack4 = iStack4 + 0x1;
    } while (iStack4 < 0x83);
    pass1_1000_4906((struct Struct20 *) (param_1 & 0xffff0000 | &iVar1->field_0x116), 0x0, 0x86);
    pass1_1000_4906((struct Struct20 *)(param_1 & 0xffff0000 | &iVar1->field_0x19c), 0x0, 0xa);
    pass1_1000_4906((struct Struct20 *)(param_1 & 0xffff0000 | ZEXT24(iVar1 + 0x1)), 0x0, 0x106);
    iVar1->field_0x10  = 0x0;
    iVar1->field_0x14  = 0x0;
    iVar1->field_0x16  = 0x0;
    iVar1->field_0x20  = 0x0;
    iVar1->field_0x44  = 0x0;
    iVar1->field_0x50  = 0x0;
    iVar1->field_0x6a  = 0x0;
    iVar1->field_0x84  = 0x0;
    iVar1->field_0xc8  = 0x0;
    iVar1->field_0xe4  = 0x0;
    iVar1->field_0xf0  = 0x0;
    iVar1->field_0xf4  = 0x0;
    iVar1->field_0xf6  = 0x0;
    iVar1->field_0x102 = 0x0;
    iVar1->field_0xfe  = 0x0;
    iVar1->field_0x1a6 = 0x0;
    iVar1->field_0x1aa = 0x0;
    iVar1->field_0x1ac = 0x0;
    iVar1->field_0x1b6 = 0x0;
    iVar1->field_0x1da = 0x0;
    iVar1->field_0x1e6 = 0x0;
    iVar1->field_0x200 = 0x0;
    iVar1->field_0x21a = 0x0;
    iVar1->field_0x25e = 0x0;
    iVar1->field_0x27a = 0x0;
    iVar1->field_0x286 = 0x0;
    iVar1->field_0x28a = 0x0;
    iVar1->field_0x28c = 0x0;
    iVar1->field_0x298 = 0x0;
    iVar1->field_0x294 = 0x0;
    return;
}


void  pass1_1030_2958(u16 *param_1)

{
    Struct347 *iVar1;
    u16 uVar1;

    struct_1030_17ce(param_1, 0x5, 0xf);
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct347 *) param_1;
    iVar1->field_0x10 = 0x0;
    iVar1->field_0x14 = 0x0;
    iVar1->field_0x16 = 0x0;
    iVar1->field_0x18 = 0x2710;
    iVar1->field_0x1a_addr_offset = 0x0;
    param_1->field_0x0 = addr_table_1030_3130;//0x3130;
    iVar1->field_0x2 = SEG_1030;
    return;
}


void  struct_1030_299a(u16 *param_1, u32 param_2, u16 param_3, u8 *param_4)

{
    Struct352 *iVar1;
    u16 uVar1;

    pass1_1030_183c(param_1, 0x5, 0xf, 0x2000000, param_2, param_3, param_4);
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct352 *) param_1;
    iVar1->field_0x10 = 0x0;
    iVar1->field_0x14 = 0x0;
    iVar1->field_0x16 = 0x0;
    iVar1->field_0x18 = 0x2710;
    iVar1->field_0x1a_addr_offset = 0x0;
    param_1->field_0x0 = addr_table_1030_3130;//0x3130;
    iVar1->field_0x2 = SEG_1030;
    return;
}


void  pass1_1030_1120(u32 param_1, u16 param_2, u8 *param_3, u16 param_4)

{
    u8 *puVar1;

    mem_op_1000_179c(0x3b2, param_3, 0);
    puVar1 = (param_3 | param_2);
    if(puVar1 == 0x0)
    {
        param_2 = 0x0;
        puVar1  = 0x0;
    }
    else
    {
        struct_1030_2112(str_var1(param_3, param_2), 0x0, param_2, puVar1);
    }
    pass1_1030_1358(*(param_1 + 0x2a), param_2, puVar1, *(param_2 + 0x4) & 0xffff | ((param_2 + 0x6) & 0xff) << 0x10, param_4);
    return;
}


void  struct_1030_11aa(u16 *param_1, long param_2, long param_3, u16 param_4) {
    Struct156 *iVar1;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct156 *) param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->field_0x2 = SEG_1008;
    iVar1->field_0x4 = 0x0;
    iVar1->field_0x6 = 0x0;
    iVar1->field_0xa = 0x0;
    iVar1->field_0xe = param_3;
    iVar1->field_0x12 = 0x0;
    iVar1->field_0x16 = param_2;
    iVar1->field_0x1a_addr_offset = 0x1;
    param_1->field_0x0 = addr_table_1030_1624;//0x1624; // s_462_bmp_1050_1620 + 0x4;
    iVar1->field_0x2 = SEG_1030;
    if (iVar1->field_0xe == 0x0) {
        iVar1->field_0xe = 0x5;
    }
    if (iVar1->field_0x16 == 0x0) {
        iVar1->field_0x16 = 0x5;
    }
    struct_1030_1550(param_1, param_4);
    *iVar1->field_0x6 = 0x0;
    return;
}


void  pass1_1030_1358(Struct291 *param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5)

{
    u32         *puVar1;
    u16         *pu_var2;
    long         lVar3;
    Struct291 *iVar4;
    i16          iVar5;
    u16          uVar6;
    u16          uVar7;
    bool         bVar8;

    if(param_4 == 0x0)
    {
        return;
    }
    uVar6  = (param_1 >> 0x10);
    iVar4  = (Struct291 *)param_1;
    puVar1 = &iVar4->field_0xa;
    if((*puVar1 < param_4 || *puVar1 == param_4) || (iVar4->field_0x6 == 0x0))
    {
        pu_var2 = (&iVar4->field_0x12 + 0x2);
        bVar8  = *pu_var2 < param_4;
        if((bVar8 || *pu_var2 == param_4) && ((bVar8 || (puVar1 = &iVar4->field_0x12, puVar1 < param_4 || puVar1 == param_4))))
        {
            struct_1030_1550(param_1 & 0xffff | uVar6 << 0x10, param_5);
        }
        puVar1 = &iVar4->field_0x12;
        if(*puVar1 < param_4 || *puVar1 == param_4)
        {
            return;
        }
        if(iVar4->field_0x6 == 0x0)
        {
            return;
        }
        pu_var2 = &iVar4->field_0xc;
        bVar8  = *pu_var2 < param_4;
        if((bVar8 || *pu_var2 == param_4) && ((bVar8 || (pu_var2 = &iVar4->field_0xa, *pu_var2 < param_4 || *pu_var2 == param_4))))
        {
            iVar4->field_0xa = (param_4 + 0x1);
            iVar4->field_0xc = (param_4 + 0x1 >> 0x10);
        }
    }
    lVar3                         = iVar4->field_0x6;
    uVar7                         = (lVar3 >> 0x10);
    iVar5                         = lVar3;
    (iVar5 + param_4 * 0x4)       = param_2;
    (iVar5 + param_4 * 0x4 + 0x2) = param_3;
    return;
}


void  pass1_1030_14b4(Struct345 *param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5)

{
    u32         *puVar1;
    u16         *pu_var2;
    long         lVar3;
    Struct345 *iVar5;
    Struct344 *iVar4;
    u16          uVar4;
    u16          uVar5;
    bool         bVar6;

    uVar4  = (param_1 >> 0x10);
    iVar5  = (Struct345 *)param_1;
    puVar1 = &iVar5->field_0xa;
    if((*puVar1 < param_4 || *puVar1 == param_4) || (iVar5->field_0x6 == 0x0))
    {
        pu_var2 = (&iVar5->field_0x12 + 0x2);
        bVar6  = *pu_var2 < param_4;
        if((bVar6 || *pu_var2 == param_4) && ((bVar6 || (puVar1 = &iVar5->field_0x12, puVar1 < param_4 || puVar1 == param_4))))
        {
            struct_1030_1550(param_1 & 0xffff | uVar4 << 0x10, param_5);
        }
        puVar1 = &iVar5->field_0x12;
        if((*puVar1 < param_4 || *puVar1 == param_4) || (iVar5->field_0x6 == 0x0))
        {
            return;
        }
        pu_var2 = &iVar5->field_0xc;
        bVar6  = *pu_var2 < param_4;
        if((bVar6 || *pu_var2 == param_4) && ((bVar6 || (pu_var2 = &iVar5->field_0xa, *pu_var2 < param_4 || *pu_var2 == param_4))))
        {
            iVar5->field_0xa = (param_4 + 0x1);
            iVar5->field_0xc = (param_4 + 0x1 >> 0x10);
        }
    }
    lVar3                         = iVar5->field_0x6;
    uVar5                         = (lVar3 >> 0x10);
    iVar4                         = (Struct344 *)lVar3;
    (iVar4 + param_4 * 0x4)       = param_2;
    (iVar4 + param_4 * 0x4 + 0x2) = param_3;
    return;
}


void  struct_1030_1628(u16 *param_1) {
    Struct181 *iVar1;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct181 *) param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->field_0x2 = SEG_1008;
    iVar1->field_0x4 = 0x0;
    iVar1->field_0x8 = 0x0;
    param_1->field_0x0 = addr_table_1030_17ba;//0x17ba;
    iVar1->field_0x2 = SEG_1030;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1030_165e(u16 *param_1, u32 param_2, u32 param_3, u16 param_4) {
    Struct175 *iVar1;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct175 *) param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->field_0x2 = SEG_1008;
    &iVar1->field_0x4 = 0x0;
    iVar1->field_0x8 = param_3;
    param_1->field_0x0 = addr_table_1030_17ba;//0x17ba;
    iVar1->field_0x2 = SEG_1030;
    pass1_1030_5c8a(globals->_PTR_LOOP_1050_5736, param_2);
    iVar1->field_0x4 = param_3;
    iVar1->field_0x6 = param_4;
}


void  pass1_1030_16b2(u16 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1030_17ba//0x17ba;
    param_1->field_0x2 = SEG_1030;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
}


void  struct_op_1030_1cd8(Struct75 *param_1, u32 param_2, u32 param_3)

{
    Struct75 *struct_var1;
    Struct75 *struct_var2;

    struct_var2             = (param_1 >> 0x10);
    struct_var1             = param_1;
    param_1->field_0x0      = addr_table_1008_380a[36]; // 0x389a
    struct_var1->field_0x2  = SEG_1008;
    struct_var1->field_0x4  = 0x0;
    struct_var1->field_0x8  = 0x0;
    struct_var1->field_0xc  = param_3;
    struct_var1->field_0x10 = 0x0;
    struct_var1->field_0x14 = param_2;
    param_1->field_0x0      = addr_table_1030_2044;//0x2044;
    struct_var1->field_0x2  = SEG_1030;
}


void  pass1_1030_1d28(u16 *param_1) {
    Struct594 *iVar1;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct594 *) param_1;
    param_1->field_0x0 = addr_table_1030_2044;//0x2044;
    iVar1->field_0x2 = SEG_1030;
    fn_ptr_1000_17ce(iVar1->field_0x4, SEG_1000);
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->field_0x2 = SEG_1008;
}


u32  pass1_1030_1d7c(u16 param_1, u16 param_2, u32 param_3)

{
    u32 uVar1;

    pass1_1030_1d58(param_3);
    if((param_2 | param_1) != 0x0)
    {
        uVar1 = struct_op_1030_73a8(str_var1(param_2, param_1));
        return uVar1;
    }
    return 0x0;
}


u16 * switch_1030_0000(u16 param_1, u16 param_2, i16 param_3, u8 *param_4, u16 param_5, u16 param_6, u16 param_7)

{
    u8  *puVar1;
    u16  u_var2;
    u16 *puVar3;

    // Segment:    7
    // Offset:     000516c0
    // Length:     ef76
    // Min Alloc:  ef76
    // Flags:      0d50
    //     Code
    //     Moveable
    //     Preload
    //     Impure (Non-shareable)
    //
    puVar3 = str_var1(param_4, param_5);
    switch(param_3 + -0x1)
    {
    case 0x0:
    case 0x1:
    case 0x2:
    case 0x3:
    case 0x4:
    case 0x5:
    case 0x6:
    case 0x7:
    case 0x8:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_489e(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x9:
        mem_op_1000_179c(0x22, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_2bdc(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0xa:
        mem_op_1000_179c(0x26, param_4, 0);
        u_var2 = param_4 | param_5;
        goto joined_rSEG_103002a1;
    case 0xb:
        mem_op_1000_179c(0x2c, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_3670(
              str_var1(param_4, param_5), (param_4 | param_5), param_6, param_7);
            return puVar3;
        }
        break;
    case 0xc:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_355e(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0xd:
        mem_op_1000_179c(0x26, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_3484(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0xe:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_406c(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0xf:
    case 0x32:
    case 0x33:
    case 0x5f:
    case 0x60:
        mem_op_1000_179c(0x24, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_0c24(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x10:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_0b42(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x11:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_4354(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x61:
    case 0x62:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_4b84(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x15:
    case 0x16:
    case 0x17:
        mem_op_1000_179c(0x24, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_1bbc(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    default:
        mem_op_1000_179c(0x20, param_4, 0);
        u_var2 = param_4 | param_5;
        if(u_var2 != 0x0)
        {
            struct_1028_b354(str_var1(param_4, param_5));
            return str_var1(u_var2, param_5);
        }
        break;
    case 0x1a:
    case 0x1b:
    case 0x1c:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1030_be34(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x1d:
    case 0x1e:
    case 0x1f:
        mem_op_1000_179c(0x26, param_4, 0);
        puVar1 = (param_4 | param_5);
        if(puVar1 != 0x0)
        {
            struct_1028_0068(str_var1(param_4, param_5), puVar1);
            return str_var1(puVar1, param_5);
        }
        break;
    case 0x20:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_50d8(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x21:
    case 0x22:
    case 0x23:
        mem_op_1000_179c(0x24, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_3e94(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x24:
    case 0x25:
    case 0x26:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1020_d06c(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x27:
    case 0x28:
    case 0x5c:
    case 0x5d:
    case 0x5e:
        mem_op_1000_179c(0x22, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1030_c6f6(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x29:
    case 0x2a:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1020_cce4(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x2b:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_26b4(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x2c:
    case 0x2d:
        mem_op_1000_179c(0x2a, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_49aa(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x2e:
    case 0x2f:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1020_e7fa(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x30:
    case 0x31:
    case 0x6b:
    case 0x6c:
        mem_op_1000_179c(0x22, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1020_d37c(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x34:
    case 0x35:
        mem_op_1000_179c(0x2c, param_4, 0);
        puVar1 = (param_4 | param_5);
        if(puVar1 != 0x0)
        {
            struct_1028_37a6(str_var1(param_4, param_5), puVar1, param_6, param_7);
            return str_var1(puVar1, param_5);
        }
        break;
    case 0x36:
        mem_op_1000_179c(0x26, param_4, 0);
        u_var2 = param_4 | param_5;
    joined_rSEG_103002a1:
        if(u_var2 != 0x0)
        {
            struct_1030_c06e(str_var1(param_4, param_5));
            return str_var1(u_var2, param_5);
        }
        break;
    case 0x37:
    case 0x38:
        mem_op_1000_179c(0x9a, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1030_c9a8(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x39:
    case 0x3a:
        mem_op_1000_179c(0x24, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_60bc(
              str_var1(param_4, param_5), param_5, (param_4 | param_5));
            return puVar3;
        }
        break;
    case 0x3b:
    case 0x3c:
        mem_op_1000_179c(0x24, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_44d2(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x3d:
        mem_op_1000_179c(0x22, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1020_cde6(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x3e:
        mem_op_1000_179c(0x26, param_4, 0);
        puVar1 = (param_4 | param_5);
        if(puVar1 != 0x0)
        {
            struct_1028_1f56(str_var1(param_4, param_5), puVar1);
            return str_var1(puVar1, param_5);
        }
        break;
    case 0x3f:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_25da(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x40:
        mem_op_1000_179c(0x22, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1020_c9ea(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x46:
    case 0x69:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1020_d5a6(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x47:
    case 0x48:
    case 0x49:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1020_d866(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x4b:
    case 0x4c:
    case 0x4d:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1030_d8f6(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x4e:
    case 0x4f:
    case 0x50:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_5c54(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x51:
    case 0x52:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_5966(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x53:
    case 0x54:
    case 0x55:
        mem_op_1000_179c(0x22, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_5ed8(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x56:
    case 0x57:
    case 0x58:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_53c6(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x59:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = pass1_1028_5884(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x5a:
    case 0x5b:
        mem_op_1000_179c(0x26, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = pass1_1028_5524(str_var1(param_4, param_5), (param_4 | param_5));
            return puVar3;
        }
        break;
    case 0x63:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = pass1_1028_5df6(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x64:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_5a48(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x65:
    case 0x66:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_52e8(param_5, param_4);
            return puVar3;
        }
        break;
    case 0x67:
    case 0x68:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_57a6(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x6d:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_5630(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x6f:
    case 0x70:
    case 0x71:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) == 0x0)
        {
            puVar3 = 0x0;
        }
        else
        {
            puVar3 = struct_1020_d866(str_var1(param_4, param_5));
        }
    case 0x72:
    case 0x76:
        mem_op_1000_179c(0x26, (puVar3 >> 0x10), 0);
        if(puVar3 != 0x0)
        {
            puVar3 = struct_1020_e8f6(puVar3);
            return puVar3;
        }
        break;
    case 0x73:
    case 0x77:
    case 0x78:
        mem_op_1000_179c(0x2c, param_4, 0);
        u_var2 = param_4 | param_5;
        if(u_var2 != 0x0)
        {
            struct_1020_d954(str_var1(param_4, param_5));
            return str_var1(u_var2, param_5);
        }
        break;
    case 0x74:
        mem_op_1000_179c(0x24, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_178c(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x75:
        mem_op_1000_179c(0x24, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_2afa(str_var1(param_4, param_5));
            return puVar3;
        }
        break;
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
        mem_op_1000_179c(0x20, param_4, 0);
        if((param_4 | param_5) != 0x0)
        {
            puVar3 = struct_1028_27f0(str_var1(param_4, param_5));
            return puVar3;
        }
    }
    return 0x0;
}


void  pass1_1028_dc52(Struct92 *param_1, i16 param_2, u16 param_3, u16 param_4)

{
    u32  uVar1;
    Struct92 *iVar2;
    u16         u_var2;

    u_var2             = (param_1 >> 0x10);
    iVar2             = (Struct92 *)param_1;
    param_1           = addr_table_1008_380a[36]; // 0x389a
    iVar2->fld2_segment     = SEG_1008;
    iVar2->field_0x4  = (globals->_PTR_LOOP_1050_65e2 + (param_4 >> 0x8) * 0x4 + 0xa);
    iVar2->field_0x8  = 0x1;
    iVar2->field_0x10 = param_2;
    param_1           = addr_table_1030_11a6;//0x11a6;
    iVar2->fld2_segment     = SEG_1030;
    uVar1             = iVar2->field_0x4;
    iVar2->field_0xc  = (uVar1 + 0xa);
    if(param_2 == 0x0)
    {
        iVar2->field_0x8 = iVar2->field_0xc;
    }
    else
    {
        iVar2->field_0x8 = 0x1;
    }
    return;
}


BOOL16  pass1_1028_c5a6(u16 param_1, u16 param_2, i16 param_3, u16 *param_4, long param_5, u16 param_6, u16 param_7, u16 param_8)

{
    i16 iVar1;
    u16 u_var2;
    u32 uVar3;
    i16 iStack14;
    u32 uStack10;

    pass1_1030_627e(param_8, param_6, param_7, globals->_PTR_LOOP_1050_5740, param_4, param_5);
    u_var2 = param_7 | param_6;
    if(u_var2 != 0x0)
    {
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_6, param_7);
        uStack10 = str_var1(u_var2, param_6);
        iStack14 = 0x7a;
        if(0x0 < (param_4 + 0x4))
        {
            if(param_3 == 0x7b)
            {
                param_3 = 0x7e;
            }
            else
            {
                if(param_3 == 0x7c)
                {
                    param_3 = 0x7d;
                }
            }
            iStack14 = 0x7f;
        }
        if(uStack10 != 0x0)
        {
            uVar3 = struct_op_1030_73a8(uStack10);
            if((uVar3 != 0x0) && ((iVar1 = (uVar3 + 0xc), iVar1 == iStack14 || (iVar1 == param_3))))
            {
                return 0x1;
            }
        }
    }
    return 0x0;
}


void  pass1_1028_c00a(u32 param_1, long param_2, i16 param_3, u16 param_4)

{
    void **ppcVar1;
    u16         u_var2;
    u16         uVar3;
    u16         extraout_DX;
    u8         *puVar4;
    u16         extraout_DX_00;
    u16         extraout_DX_01;
    u16         uVar5;
    u16         uVar6;
    u32        *puVar7;
    u32         uVar8;
    u32         uVar9;
    u32         uStack26;
    u32         uStack22;
    u32 *puStack18;

    pass1_1028_b58e(param_1);
    uVar8  = *(param_3 + 0x2e);
    puVar7 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x4);
    puVar4 = (puVar7 >> 0x10);
    u_var2  = puVar7;
    uVar6  = SUB42(SEG_1038, 0x0);
    pass1_1038_4d6e(uVar8, puVar7, u_var2, puVar4);
    puStack18 = str_var1(puVar4, u_var2);
    ppcVar1   = (*puStack18 + 0x10);
    uVar5     = u_var2;
    (**ppcVar1)(SEG_1038, u_var2, puVar4);
    uStack22 = str_var1(extraout_DX_00, uVar5);
    uStack26 = 0x0;
    do
    {
        if(uStack22 <= uStack26)
        {
        LAB_1028_c0d6:
            if(puStack18 != 0x0)
            {
                ppcVar1 = *puStack18;
                (**ppcVar1)(uVar6, u_var2, puVar4, 0x1);
            }
            return;
        }
        ppcVar1 = (*puStack18 + 0x4);
        uVar8   = uStack22;
        (**ppcVar1)(uVar6, u_var2, puVar4, uStack26, (uStack26 >> 0x10));
        uVar3 = uVar8;
        uVar5 = extraout_DX_01;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar3, extraout_DX_01);
        uVar6 = SEG_1030;
        uVar8 = struct_op_1030_73a8(str_var1(uVar5, uVar3));
        uVar9 = pass1_1028_6302(uVar8, param_4);
        uVar5 = (uVar9 >> 0x10);
        if((param_2 <= uVar5) && ((param_2 < uVar5 || (param_2 <= uVar9))))
        {
            pass1_1028_6356(uVar8, 0x0, param_2, param_2, param_4);
            goto LAB_1028_c0d6;
        }
        pass1_1028_6356(uVar8, 0x0, uVar9, uVar5, param_4);
        param_2  = param_2 - uVar9;
        uStack26 = uStack26 + 0x1;
    } while(true);
}


void  pass1_1028_c0f0(u32 param_1, long param_2, i16 param_3, u16 param_4, u16 param_5, u16 param_6)

{
    void **ppcVar1;
    u16         u_var2;
    u16         uVar3;
    u16         extraout_DX;
    u8         *puVar4;
    u8         *extraout_DX_00;
    u16         extraout_DX_01;
    u16         uVar5;
    u8         *puVar6;
    u8         *extraout_DX_02;
    u16         uVar7;
    u32        *puVar8;
    u32         uVar9;
    u32         uStack28;
    u32         uStack24;
    u32 *puStack20;
    u32         u_stack6;

    pass1_1028_b58e(param_1);
    u_stack6 = str_var1(extraout_DX, param_3);
    uVar9   = *(param_3 + 0x2e);
    pass1_1028_cb04(param_1, param_4, param_5, param_6);
    uVar7 = (uVar9 >> 0x10);
    if(((uVar9 + 0x204) == 0x0) && ((uVar9 + 0x206) == 0x0))
    {
        puVar8 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x4);
        puVar4 = (puVar8 >> 0x10);
        u_var2  = puVar8;
        uVar7  = SUB42(SEG_1038, 0x0);
        pass1_1038_4d6e(uVar9, puVar8, u_var2, puVar4);
        puStack20 = str_var1(puVar4, u_var2);
        ppcVar1   = (*puStack20 + 0x10);
        uVar5     = u_var2;
        (**ppcVar1)(SEG_1038, u_var2, puVar4);
        uStack24 = str_var1(extraout_DX_00, uVar5);
        puVar6   = extraout_DX_00;
        for(uStack28 = 0x0; uStack28 < uStack24; uStack28 = uStack28 + 0x1)
        {
            ppcVar1 = (*puStack20 + 0x4);
            uVar9   = uStack24;
            (**ppcVar1)(uVar7, u_var2, puVar4, uStack28, (uStack28 >> 0x10));
            uVar3 = uVar9;
            uVar5 = extraout_DX_01;
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar3, extraout_DX_01);
            uVar7  = SEG_1030;
            uVar9  = struct_op_1030_73a8(str_var1(uVar5, uVar3));
            uVar9  = pass1_1028_6302(uVar9, param_6);
            puVar6 = (uVar9 >> 0x10);
            uVar5  = uVar9;
            if((param_2 <= puVar6) && ((param_2 < puVar6 || (param_2 <= uVar5))))
            {
                param_2 = 0x0;
                break;
            }
            param_2 = str_var1(param_2 + (-(param_2 < uVar5) - puVar6), param_2 - uVar5);
        }
        if(puStack20 != 0x0)
        {
            ppcVar1 = *puStack20;
            (**ppcVar1)(uVar7, u_var2, puVar4, 0x1);
            puVar6 = extraout_DX_02;
        }
        if(param_2 != 0x0)
        {
            pass1_1030_7d7c(u_stack6, param_2,
                            str_var1(0x1d, (param_2 >> 0x10)), puStack20, puVar6, param_4, param_5, param_6);
        }
    }
    return;
}


Struct100 * pass1_1028_a706(Struct100 *param_1, u16 param_2, u8 param_3)

{
    struct_op_1028_d1dc(param_2, param_3, param_1, 0xbb7);
    param_1->field_0x0 = addr_table_1028_a856;//0xa856;
    param_1->field_0x2 = SEG_1028;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (param_1 + 0x8)), s_SCPrelimAlloc_1050_50f6);
    return param_1;
}


Struct100 * pass1_1028_a866(Struct100 *param_1, u16 param_2, u8 param_3)

{
    struct_op_1028_d1dc(param_2, param_3, param_1, 0x36af);
    param_1->field_0x0 = addr_table_1028_a9ae;//0xa9ae;
    param_1->field_0x2 = SEG_1028;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (param_1 + 0x8)), s_SCProdSched_1050_5104);
    return param_1;
}


Struct100 * pass1_1028_a9be(Struct100 *param_1, u16 param_2, u8 param_3)

{
    struct_op_1028_d1dc(param_2, param_3, param_1, 0x176f);
    param_1->field_0x0 = addr_table_1028_ab22;//0xab22;
    param_1->field_0x2 = SEG_1028;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (param_1 + 0x8)), s_SCPower_1050_5110);
    return param_1;
}


Struct100 * pass1_1028_ab32(Struct100 *param_1, u16 param_2, u8 param_3)

{
    struct_op_1028_d1dc(param_2, param_3, param_1, 0x2edf);
    param_1->field_0x0 = addr_table_1028_aca6;//0xaca6;
    param_1->field_0x2 = SEG_1028;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (param_1 + 0x8)), s_SCRchSched_1050_5118);
    return param_1;
}


Struct100 * pass1_1028_acb6(Struct100 *param_1, u16 param_2, u8 param_3)

{
    struct_op_1028_d1dc(param_2, param_3, param_1, 0x3e7f);
    param_1->field_0x0 = addr_table_1028_ae56;//0xae56;
    param_1->field_0x2 = SEG_1028;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (param_1 + 0x8)), s_SCSetup_1050_5124);
    return param_1;
}


void  pass1_1028_ae66(Struct100 *param_1, u32 param_2, u32 param_3, u32 param_4, u16 param_5, u8 param_6)

{
    Struct689 *iVar1;
    u16          uVar1;

    struct_op_1028_d1dc(param_5, param_6, param_1, 0x1387);
    uVar1              = (param_1 >> 0x10);
    iVar1              = (Struct689 *)param_1;
    iVar1->field_0x108 = param_4;
    iVar1->field_0x10c = param_3;
    iVar1->field_0x110 = param_2;
    iVar1->field_0x114 = 0x0;
    param_1->field_0x0 = addr_table_1028_b0ce;//0xb0ce;
    iVar1->fld2_segment = SEG_1028;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | &iVar1->field_0x8), s_SCStarve_1050_5156);
    return;
}


u16 * pass1_1028_b204(u16 *param_1)

{
    u16 uVar1;

    struct_1030_1628(param_1);
    uVar1           = (param_1 >> 0x10);
    (param_1 + 0xc) = 0x0;
    param_1->addr_table = addr_table_1028_b33c;//0xb33c;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


void  struct_1028_b354(Struct180 *struct_arg_1)

{
    struct_1030_1628(struct_arg_1);

    struct_arg_1->field_0xc  = 0x0;
    struct_arg_1->field_0xe  = 0x0;
    struct_arg_1->field_0x10 = 0x0;
    struct_arg_1->field_0x12 = 0x0;
    struct_arg_1->field_0x18 = 0x0;
    struct_arg_1->field_0x1a_addr_offset = 0x0;
    struct_arg_1->field_0x1c_addr_base = 0x0;
    struct_arg_1->fld0_addr_table        = addr_table_1028_cf6a;//0xcf6a;
    struct_arg_1->fld2_segment           = SEG_1028;
    struct_arg_1->field_0x16 = 0x0;
    struct_arg_1->field_0x14 = 0x0;
}


void  pass1_1028_b39e(Struct173 *param_1, i16 param_2, u32 param_3, u16 param_4)

{
//    Struct173 *iVar1;
//    u16          uVar1;

    pass1_1030_165e(param_1, 0x7000000, param_3, param_4);
//    uVar1             = (param_1 >> 0x10);
//    iVar1             = (Struct173 *)param_1;
    param_1->field_0xc  = param_2;
    param_1->field_0xe  = 0x42;
    param_1->field_0x10 = 0x0;
    param_1->field_0x12 = 0x0;
    param_1->field_0x18 = 0x0;
    param_1->field_0x1a_addr_offset = 0x0;
    param_1->field_0x1c_addr_base = 0x0;
    param_1->fld0_addr_table = addr_table_1028_cf6a;//0xcf6a;
    param_1->fld2_segment           = SEG_1028;
    pass1_1028_bf76(param_1 & 0xffff | uVar1 << 0x10, 0x0);
    param_1->field_0x14 = 0x0;
    if((0x4e < param_1->field_0xc) && (param_1->field_0xc < 0x70))
    {
        param_1->field_0xe = 0x6b;
    }
    return;
}


void  pass1_1028_9944(Struct100 *param_1, u32 param_2, u32 param_3, u32 param_4, u16 param_5, u8 param_6)

{
    Struct699 *iVar1;
    u16          uVar1;

    struct_op_1028_d1dc(param_5, param_6, param_1, 0x1387);
    uVar1              = (param_1 >> 0x10);
    iVar1              = (Struct699 *)param_1;
    iVar1->field_0x108 = param_4;
    iVar1->field_0x10c = param_3;
    iVar1->field_0x110 = param_2;
    iVar1->field_0x114 = 0x0;
    param_1->field_0x0 = addr_table_1028_9c52;//0x9c52;
    iVar1->fld2_segment = SEG_1028;
    return;
}


u16 * struct_1028_9c62(i16 param_1, u16 param_2, u16 param_3, u16 param_4, u8 param_5)

{
    struct_op_1028_d1dc(param_4, param_5, (Struct100 *)str_var1(param_2, param_1), param_3);
    (param_1 + 0x108)          = param_3;
    param_1 =  addr_table_1028_9eb6;//0x9eb6;
    param_1->fld2_segment      = SEG_1028;
    return param_1;
}


Struct100 * pass1_1028_9ec6(Struct100 *param_1, u16 param_2, u8 param_3)

{
    struct_op_1028_d1dc(param_2, param_3, param_1, s_noth_bmp_1050_2321 + 0x6);
    param_1->field_0x0 = addr_table_1028_a6f6;//0xa6f6;
    param_1->field_0x2 = SEG_1028;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (param_1 + 0x8)), 0x105050f0);
    return param_1;
}


Struct100 * pass1_1028_837e(Struct100 *param_1, u16 param_2, u8 param_3)

{
    struct_op_1028_d1dc(param_2, param_3, param_1, 0xf9f);
    param_1->field_0x0 = addr_table_1028_84ba;//0x84ba;
    param_1->field_0x2 = SEG_1028;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (param_1 + 0x8)), s_SCFillResources_1050_500c);
    return param_1;
}


void  struct_op_1028_87f0(u16 param_1, u8 param_2, Struct97 *param_3, u16 param_4, u16 param_5, u16 param_6, u32 *param_7, u16 param_8, u32 param_9, u32 param_10)

{
    Struct97 *iVar1;
    Struct97 *puVar1;

    struct_op_1028_d1dc(param_1, param_2, (Struct100 *)param_3, 0x3e8);
    puVar1             = (Struct97 *)(param_3 >> 0x10);
    iVar1              = (Struct97 *)param_3;
    iVar1->field_0x108 = param_10;
    iVar1->field_0x10c = param_9;
    iVar1->field_0x110 = 0x0;
    iVar1->field_0x114 = *param_7;
    iVar1->field_0x118 = (param_7 + 0x1);
    iVar1->field_0x11a = param_6;
    iVar1->field_0x11c = param_5;
    iVar1->field_0x11e = param_4;
    iVar1->field_0x122 = 0x0;
    iVar1->field_0x120 = 0x0;
    param_3            = addr_table_1028_8d8e;//0x8d8e;
    iVar1->fld2_segment = SEG_1028;
    sys_1000_3f9c(&iVar1->field_0x8,
                  puVar1,
                  s_SCi16ernalPutBldg_site_0x_08lx__b_1050_5046,
                  param_10,
                  &stack0xfffe,
                  puVar1,
                  SEG_1000,
                  param_1,
                  param_2);
    return;
}


void  struct_op_1028_8888(u16 param_1, u8 param_2, Struct100 *param_3, u16 param_4, u16 param_5, u32 *param_6, u16 param_7, u32 param_8, u32 param_9, u32 param_10)

{
    Struct100 *iVar1;
    u8          *puVar1;

    struct_op_1028_d1dc(param_1, param_2, param_3, 0x3e8);
    puVar1             = (param_3 >> 0x10);
    iVar1              = (Struct100 *)param_3;
    iVar1->field_0x108 = param_10;
    iVar1->field_0x10c = param_9;
    iVar1->field_0x110 = param_8;
    iVar1->field_0x114 = *param_6;
    iVar1->field_0x118 = (param_6 + 0x1);
    iVar1->field_0x11a = param_5;
    iVar1->field_0x11c = 0x0;
    iVar1->field_0x11e = param_4;
    iVar1->field_0x122 = 0x0;
    iVar1->field_0x120 = 0x0;
    param_3->field_0x0 = addr_table_1028_8d8e;//0x8d8e;
    iVar1->field_0x2   = SEG_1028;
    sys_1000_3f9c(&iVar1->field_0x8,
                  puVar1,
                  s_SCi16ernalPutBldg2_site_0x_08lx__1050_506f,
                  param_10,
                  &stack0xfffe,
                  puVar1,
                  SEG_1000,
                  param_1,
                  param_2);
    return;
}


void  pass1_1028_8d9e(Struct100 *param_1, u32 param_2, u32 param_3, u32 param_4, u16 param_5, u8 param_6)

{
    i16 iVar1;
    u16 u_var2;

    struct_op_1028_d1dc(param_5, param_6, param_1, 0x3e8);
    u_var2              = (param_1 >> 0x10);
    iVar1              = param_1;
    *(iVar1 + 0x108)   = param_4;
    *(iVar1 + 0x10c)   = param_3;
    *(iVar1 + 0x110)   = param_2;
    (iVar1 + 0x114)    = 0x0;
    param_1->field_0x0 = addr_table_1028_8fb0;//0x8fb0;
    (iVar1 + 0x2)      = SEG_1028;
    return;
}


Struct100 * pass1_1028_90e6(Struct100 *param_1, u16 param_2, u16 param_3, u8 param_4)

{
    u16 uVar1;

    struct_op_1028_d1dc(param_3, param_4, param_1, 0x1387);
    uVar1              = (param_1 >> 0x10);
    (param_1 + 0x108)  = param_2;
    param_1->field_0x0 = addr_table_1028_932c;//0x932c;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}

Struct100 * pass1_1028_74ae(Struct100 *param_1)

{
    u16 unaff_SS;
    u8  in_AF;

    struct_op_1028_d1dc(unaff_SS, in_AF, param_1, 0x1387);
    param_1->field_0x0 = addr_table_1028_819a;//0x819a;
    param_1->field_0x2 = SEG_1028;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (param_1 + 0x8)), s_SCEvent_1050_4ff4);
    return param_1;
}

void  pass1_1028_780c(u16 param_1, u16 param_2, u32 param_3)

{
    void **ppcVar1;
    u16         u_var2;
    u16         uVar3;
    u32         uVar4;
    u8         *puVar5;
    u16         extraout_DX;
    u16         extraout_DX_00;
    u16         uVar6;
    u16         uVar7;
    u32        *puVar8;
    u32 *puVar9;
    u32         uStack18;
    u32         uStack14;
    u32 *puStack10;

    puVar8 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x25);
    puVar5 = (puVar8 >> 0x10);
    u_var2  = puVar8;
    uVar7  = SUB42(SEG_1038, 0x0);
    pass1_1038_4e78(u_var2, puVar5, param_3, puVar8);
    puStack10 = str_var1(puVar5, u_var2);
    ppcVar1   = (*puStack10 + 0x10);
    uVar6     = u_var2;
    (**ppcVar1)(SEG_1038, u_var2, puVar5);
    uStack14 = str_var1(extraout_DX, uVar6);
    if((extraout_DX | uVar6) == 0x0)
    {
        return;
    }
    for(uStack18 = 0x0; uStack18 < uStack14; uStack18 = uStack18 + 0x1)
    {
        ppcVar1 = (*puStack10 + 0x4);
        uVar4   = uStack14;
        (**ppcVar1)();
        uVar3 = uVar4;
        uVar6 = extraout_DX_00;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar3, extraout_DX_00);
        uVar7   = SEG_1030;
        puVar9  = struct_op_1030_73a8(str_var1(uVar6, uVar3));
        ppcVar1 = (*puVar9 + 0x24);
        (**ppcVar1)();
    }
    if(puStack10 != 0x0)
    {
        ppcVar1 = *puStack10;
        (**ppcVar1)(uVar7, u_var2, puVar5, 0x1);
    }
    return;
}


Struct100 * pass1_1028_81aa(Struct100 *param_1, u16 param_2, u8 param_3)

{
    struct_op_1028_d1dc(param_2, param_3, param_1, 0x1b57);
    param_1->field_0x0 = addr_table_1028_836e;//0x836e;
    param_1->field_0x2 = SEG_1028;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (param_1 + 0x8)), s_SCFactory_1050_5002);
    return param_1;
}


void  pass1_1028_68de(Struct100 *param_1, u16 param_2, u32 param_3, u8 param_4, u16 param_5)

{
    i16 iVar1;
    u16 u_var2;

    struct_op_1028_d1dc(param_5, param_4, param_1, 0x3e8);
    u_var2              = (param_1 >> 0x10);
    iVar1              = param_1;
    *(iVar1 + 0x108)   = param_3;
    (iVar1 + 0x10c)    = param_2;
    param_1->field_0x0 = addr_table_1028_6ad2[4];//0x6ae2;
    (iVar1 + 0x2)      = SEG_1028;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (iVar1 + 0x8)), s_SCAddSpew_1050_4fd2);
    return;
}


void  pass1_1028_6af2(Struct100 *param_1, u32 param_2, u32 param_3, u16 param_4, u8 param_5)

{
    Struct683 *iVar1;
    u16          uVar1;

    struct_op_1028_d1dc(param_4, param_5, param_1, 0x1387);
    uVar1              = (param_1 >> 0x10);
    iVar1              = (Struct683 *)param_1;
    iVar1->field_0x108 = param_3;
    iVar1->field_0x10c = param_2;
    param_1->field_0x0 = addr_table_1028_6e50;//0x6e50;
    iVar1->fld2_segment = SEG_1028;
    return;
}


Struct100 * pass1_1028_6e60(Struct100 *param_1, u16 param_2, u8 param_3)

{
    struct_op_1028_d1dc(param_2, param_3, param_1, 0x32c7);
    param_1->field_0x0 = addr_table_1028_6fb0;//0x6fb0;
    param_1->field_0x2 = SEG_1028;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (param_1 + 0x8)), s_SCConstruct_1050_4fdc);
    return param_1;
}


Struct100 * pass1_1028_6fc0(Struct100 *param_1, u16 param_2, u8 param_3)

{
    struct_op_1028_d1dc(param_2, param_3, param_1, 0x3e7);
    param_1->field_0x0 = addr_table_1028_749e;//0x749e;
    param_1->field_0x2 = SEG_1028;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (param_1 + 0x8)), s_SCEndSim_1050_4fea);
    return param_1;
}


u16 * struct_1028_50d8(u16 *param_1)

{
    struct_1028_b354(param_1);
    param_1->addr_table = addr_table_1028_5280;//0x5280;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_52e8(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->addr_table = addr_table_1028_535e; //0x535e;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_53c6(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->addr_table = addr_table_1028_54bc;//0x54bc;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * pass1_1028_5524(u16 *param_1, u8 *param_2) {
    struct_1028_0068(param_1, param_2);
    param_1->addr_table = addr_table_1028_55c8;//0x55c8;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_5630(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->addr_table = addr_table_1028_56ac;//0x56ac;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_57a6(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->addr_table = addr_table_1028_581c;//0x581c;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * pass1_1028_5884(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->addr_table = addr_table_1028_58fe;//0x58fe;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_5966(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1028_59e0;//s_mineToSmelter__no_mines_1050_59df + 0x1;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_5a48(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1028_5bec;//s_thisLo_1050_5bec;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


void  pass1_1028_5a98(u16 param_1, i16 param_2, u16 param_3)

{
    long      *plVar1;
    i16        iVar2;
    void **ppcVar3;
    u32 uVar4;
    u16        uVar5;
    u16        uVar6;
    u16        extraout_DX;
    u16        uVar7;
    u16        extraout_DX_00;
    u32        uVar8;

    ppcVar3 = ((param_2 + 0xa) + 0x10);
    (**ppcVar3)();
    (param_2 + -0x4) = param_1;
    (param_2 + -0x2) = extraout_DX;
    if((extraout_DX | param_1) == 0x0)
    {
        return;
    }
    (param_2 + -0x6) = 0x1;
    uVar8            = pass1_1030_bcae(param_2 - 0x8, param_3);
    uVar7            = (uVar8 >> 0x10);
    (param_2 + -0xc) = 0x0;
    while(true)
    {
        uVar8 = *(param_2 + -0x4);
        if(uVar8 <= *(param_2 + -0xc))
        {
            return;
        }
        pass1_1030_1d58(*(param_2 + 0xa));
        uVar5             = uVar8;
        (param_2 + -0x10) = uVar5;
        (param_2 + -0xe)  = uVar7;
        uVar8             = uVar8 & 0xffff | uVar7 << 0x10;
        pass1_1028_b58e(*(param_2 + 0x6));
        uVar6 = param_2 - 0x8;
        uVar7 = extraout_DX_00;
        pass1_1030_bd74(uVar6, param_3, str_var1(extraout_DX_00, uVar5), uVar8, param_3);
        (param_2 + -0x12) = uVar6;
        if(uVar6 < 0x5)
            break;
        plVar1  = (long *)(param_2 + -0xc);
        *plVar1 = *plVar1 + 0x1;
    }
    uVar8             = struct_op_1030_73a8(*(param_2 + -0x10));
    (param_2 + -0x16) = uVar8;
    (param_2 + -0x14) = (uVar8 >> 0x10);
    uVar4             = (param_2 + -0x16);
    iVar2             = (uVar4 + 0x20);
    (param_2 + -0x18) = iVar2;
    if(iVar2 == 0x2)
    {
        (param_2 + -0x6) = 0x2;
    }
    if(iVar2 != 0x1)
    {
        return;
    }
    (param_2 + -0x6) = 0x3;
    return;
}


u16 * struct_1028_5c54(u16 *param_1)

{
    struct_1028_b354(param_1);
    param_1->field_0x0 = s_static_1050_5d8b + 0x3;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


void  pass1_1028_5ca4(u16 param_1, i16 param_2, u16 param_3, u8 param_4)

{
    u32 uVar1;
    u32 u_var2;
    u16        extraout_DX;
    u32        uVar3;

    pass1_1028_b58e(*(param_2 + 0x6));
    (param_2 + -0x4) = param_1;
    (param_2 + -0x2) = extraout_DX;
    uVar1            = (param_2 + -0x4);
    (param_2 + -0x8) = (uVar1 + 0x2e);
    uVar3            = pass1_1028_bb24(*(param_2 + 0x6));
    u_var2            = (param_2 + -0x8);
    uVar1            = (param_2 + -0x4);
    struct_op_1028_87f0(param_3, param_4, (Struct97 *)str_var1(param_3, param_2 + -0x12c), 0x0, 0x0, 0x65, (uVar1 + 0xc), (uVar1 >> 0x10), *(u_var2 + 0x4), uVar3);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_3, param_2 + -0x12c));
    (param_2 + -0x12c) = addr_table_1008_380a[36]; // 0x389a
    (param_2 + -0x12a) = SEG_1008;
    return;
}


u16 * pass1_1028_5df6(u16 *param_1)

{
    struct_1028_b354(param_1);
    param_1->field_0x0 = s_thisHi_1050_5e6f + 0x1;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_5ed8(u16 *param_1) {
    u16 uVar1;

    struct_1028_b354(param_1);
    uVar1 = (param_1 >> 0x10);
    (param_1 + 0x20) = 0x0;
    param_1->addr_table = addr_table_1028_6054;//0x6054;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_60bc(u16 *param_1, u16 param_2, u8 *param_3) {
    u32 uVar1;
    u16 u_var2;
    Struct187 *iVar2;

    iVar2 = (Struct187 *) param_1;
    u_var2 = (param_1 >> 0x10);
    struct_1028_b354(param_1);
    &iVar2->field_0x20 = 0x0;
    param_1->addr_table = addr_table_1028_6876;//0x6876;
    iVar2->field_0x2 = SEG_1028;
    mem_op_1000_179c(0xc, param_3, 0);
    if ((param_3 | param_2) == 0x0) {
        &iVar2->field_0x20 = 0x0;
    } else {
        uVar1 = set_struct_1008_574a(str_var1(param_3, param_2));
        iVar2->field_0x20 = uVar1;
        iVar2->field_0x22 = (uVar1 >> 0x10);
    }
    return param_1;
}
