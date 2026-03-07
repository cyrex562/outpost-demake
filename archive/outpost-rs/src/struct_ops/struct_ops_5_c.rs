
// #include "struct_ops_5.h"

// #include "address_tables/address_tables_2.h"
// #include "address_tables/function_tables.h"
// #include "fn_ptr_ops/fn_ptr_ops_6.h"
// #include "globals.h"
// #include "op_int.h"
// #include "op_windef.h"
// #include "string_ops.h"
// #include "struct_20.h"
// #include "struct_ops_3.h"
// #include "struct_ops_4.h"
// #include "structs/structs_2xx/structs_23x.h"
// #include "structs/structs_6xx/struct_648.h"
// #include "sys_ops/sys_ops_12.h"
// #include "unk/unk_15.h"
// #include "unk/unk_6.h"
// #include "utils.h"
// #include "structs/structs_1046.h"
// #include "function_tables.h"


#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCInconsistentNamingInspection"

Struct79 *pass1_1010_3702(param_1: *mut Struct79, param_3: u16) {
    struct_op_1010_1d48(param_1, param_3);
    param_1.field_0xa = 0x0;
    param_1.field_0x0 = addr_table_1010_37c4; // 0x37c4;
    param_1.field_0x2 = SEG_1010;
    return param_1;
}

u16 *pass1_1010_37d4(u16 *param_1)

{
    struct_1010_383a(param_1);
    (param_1 + 0x16) = 0x0;
    param_1.field_0x0 = addr_table_1010_3b3e;//0x3b3e;
    param_1.field_0x2 = SEG_1010;
    return param_1;
}

void struct_1010_383a(param_1: *mut Struct223)

{
//    Struct223 *iVar1;
//    u16          uVar1;

//    uVar1             = (param_1 >> 0x10);
//    iVar1             = param_1;
    param_1.field_0x0 = addr_table_1008_380a + 2; //0x389a;
    param_1.field_0x2  = SEG_1008;
    param_1.field_0x4  = 0x0;
    param_1.field_0x8  = 0x0;
    param_1.field_0xc  = 0x0;
    param_1.field_0x10 = 0x0;
    param_1.field_0x12 = 0x0;
    param_1.field_0x14 = 0x0;
    param_1.field_0x0 = addr_table_1010_3b3e[6];// 0x3b5e;
    param_1.field_0x2  = SEG_1010;
}

void struct_1010_3b7a(param_1: *mut Struct79, param_3: u16)

{
    struct_op_1010_1d48(param_1, param_3);
    param_1.field_0xa         = addr_table_1008_380a[]; // 0x389a;
    param_1.field_0xc         = SEG_1008;
    param_1.field_0xa         = addr_table_1008_3aa0[2];//0x3aa8;
    param_1.field_0xc         = SEG_1008;
    param_1.field_0xe         = 0x0;
    param_1.field_0x12        = 0x0;
    param_1.field_0x14        = 0x0;
    param_1.field_0x16        = 0x0;
   param_1.field_0x0 = addr_table_1010_3d6a;//0x3d6a;
    param_1.field_0x2         = SEG_1010;
    param_1.field_0xa         = addr_table_1010_3d6a[4];//0x3d7a;
    param_1.field_0xc         = SEG_1010;
}

Struct79 *pass1_1010_2bfc(param_1: *mut Struct79, param_2: u16, param_3: u16)

{
    struct_op_1010_1d48(param_1, param_3);
    param_1.field_0xa  = 0x0;
    param_1.field_0xc  = 0x0;
    param_1.field_0xe  = 0x0;
    param_1.field_0x10 = 0x0;
    param_1.field_0x0  = addr_table_1010_2cc2; // 0x2cc2;
    param_1.field_0x2  = SEG_1010;
    return param_1;
}

Struct79 *struct_op_1010_1d48(param_1: *mut Struct79, param_2: u16)

{
    //    Struct79 *iVar1;
    //    Struct79 *uVar1;
    //    uVar1              = (param_1 >> 0x10);
    //    iVar1              = param_1;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    param_1.field_0x4 = 0x0;
    param_1.field_0x8 = param_2;
    param_1.field_0x0 = addr_table_1010_2010[1]; // 0x2014;
    param_1.field_0x2 = SEG_1010;
    return param_1;
}

u32 pass1_1010_0eac(globals: &mut Globals,
                    u8      *param_1,
                    u8      *param_2,
                    param_3: u16,
                    u8      *param_4,
                   param_5: u16)

{
    struct_op_1018_4cda(param_1, param_2, param_3);
    param_1 =  0xf0c;
    param_1.field_0x2 = SEG_1010;
    globals.dat_1050_4230      = param_1;
    globals.dat_1050_4232      = param_2;
    pass1_1018_4dce(str_var1(param_2, param_1), 0xff, param_4, param_5);
    return param_1;
}

pub fn pass1_1010_0f24(globals: &mut Globals,
                     param_1: *mut Struct79,
                     param_2: *mut Struct79,
                     param_3: u16,
                     u8       *param_4,
                    param_5: u16)

{
    let mut unaff_DI: i16;
    let mut puVar1: *mut u16;

    struct_1010_2cd2(param_1, param_2, param_3, param_5);
    (&param_1[0x9].field_0x4 + 0x2) = 0x0;
    (param_1.field_0xa)                 = 0x0;
    &param_1[0xa].field_0x4         = 0x0;
    (&param_1[0xa].field_0x4 + 0x2) = 0x0;
//    param_1 =  s_648_bmp_1050_1919 + 0x1;
    param_1.field_0x0 = addr_table_1010_191a;//0x191a;
    param_1.field_0x2              = SEG_1010;
    puVar1                          = mixed_1010_20ba(globals.dat_1050_0ed0, 0x3, param_5, param_4, unaff_DI);
    (&param_1[0xa].field_0x4 + 0x2) = puVar1;
    param_1[0xa].field_0x8          = (puVar1 >> 0x10);
}


void struct_1010_0f9c(param_1: *mut Struct232, param_2: u16, param_3: u16)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut u_var2: u16;
    let mut puVar3: *mut u8;
    let mut puVar4: *mut u8;
    let mut uVar5: u32;
    let mut extraout_DX: *mut u8;
    let mut puVar6: *mut u8;
    let mut puVar7: *mut u8;
    let mut extraout_DX_00: *mut u8;
    let mut extraout_DX_01: u16;
    let mut extraout_DX_02: u16;
    let mut extraout_DX_03: u16;
    let mut extraout_DX_04: *mut u8;
    let mut iVar8: *mut Struct232;
    let mut iVar9: *mut Struct231;
    let mut iVar10: *mut Struct230;
    let mut iVar11: *mut Struct233;
    let mut uVar8: u16;
    let mut uVar9: u16;
    let mut puVar10: *mut u32;
    let mut uVar11: u32;
    let mut puVar12: *mut u32;
    let mut uVar13: u8;
    let mut uStack36: u32;
    let mut iStack32: i16;
    let mut uStack30: u16;
    let mut puStack28: *mut u16;
    let mut uStack24: u32;
    let mut local_14: [u8;12] = [0;12];

    uVar8   = (param_1 >> 0x10);
    iVar8   = param_1;
    ppcVar1 = (*param_1 + 0x38);
    (**ppcVar1)();
    iVar8.field_0x68 = param_2;
    if((&iVar8.field_0x60 != 0x0) && (iVar8.field_0x68 == 0x1))
    {
        return;
    }
    if(iVar8.field_0x68 == 0x0)
    {
        return;
    }
    puVar7 = extraout_DX;
    pass1_1028_dc52(str_var1(param_3, local_14), 0x1, 0x0, 0x700);
    u_var2 = iVar8.field_0x68 * 0x18;
    mem_op_1000_179c(NULL, u_var2, SEG_1000);
    iVar8.field_0x60 = u_var2;
    iVar8.field_0x62 = puVar7;
    puStack28         = str_var1(puVar7, iVar8.field_0x60);
    uStack30          = iVar8.field_0x68;
    do
    {
        do
        {
            puVar6 = puVar7;
            puVar3 = local_14;
            pass1_1028_e4ec(CONCAT13((param_3 >> 0x8), CONCAT12(param_3, puVar3)));
            uStack24 = str_var1(puVar6, puVar3);
            puVar7   = (puVar6 | puVar3);
            if(puVar7 == 0x0)
                goto LAB_1010_10ca;
            iVar9   = *param_1;
            ppcVar1 = &iVar9.field_0x40;
            puVar4  = puVar3;
            (**ppcVar1)();
            puVar7 = extraout_DX_00;
        } while(puVar4 == 0x0);
        uVar13 = SUB21(puVar6, 0x0);
        pass1_1028_b58e(CONCAT13((puVar6 >> 0x8), CONCAT12(uVar13, puVar3)));
        uStack36 = str_var1(extraout_DX_01, puVar4);
        ppcVar1  = &iVar9.field_0x2c;
        puVar12  = param_1;
        (**ppcVar1)();
        uVar9             = (puStack28 >> 0x10);
        iVar10            = puStack28;
        *puStack28        = puVar4;
        iVar10->fld2_segment = extraout_DX_02;
        ppcVar1           = &iVar9.field_0x30;
        puVar10           = param_1;
        uVar11            = uStack24;
        (**ppcVar1)();
        iVar10.field_0x8 = puVar4;
        iVar10.field_0xa = extraout_DX_03;
        iVar10.field_0xc = uStack36;
        ppcVar1           = &iVar9.field_0x3c;
        uVar5             = uStack36;
        (**ppcVar1)(SEG_1028, param_1, uStack24, puVar10, uVar11, puVar12, puVar3, uVar13);
        iVar10.field_0x10 = uVar5;
        iVar10.field_0x12 = extraout_DX_04;
        iVar10.field_0x14 = uStack36;
        puStack28          = (puStack28 & 0xffff0000 | ZEXT24(iVar10 + 0x1));
        uStack30           = uStack30 - 0x1;
        puVar7             = extraout_DX_04;
    } while(uStack30 != 0x0);
// LAB_1010_10ca:
    u_var2 = iVar8.field_0x68 << 0x2;
    mem_op_1000_179c(NULL, u_var2, SEG_1000);
    iVar8.field_0x64 = u_var2;
    iVar8.field_0x66 = puVar7;
    iStack32          = 0x0;
    uStack30          = 0x0;
    while(true)
    {
        if((iVar8.field_0x68 * 0x3) <= uStack30)
            break;
        puVar7                          = iVar8.field_0x62;
        uVar5                           = &iVar8.field_0x64;
        uVar9                           = (uVar5 >> 0x10);
        iVar11                          = uVar5;
        (iVar11 + iStack32 * 0x4)       = iVar8.field_0x60 + uStack30 * 0x8;
        (iVar11 + iStack32 * 0x4 + 0x2) = puVar7;
        uStack30                        = uStack30 + 0x3;
        iStack32                        = iStack32 + 0x1;
    }
    return;
}

u16 *pass1_1008_eabc(param_1: i16, param_2: u16, param_3: u16)

{
    struct_op_1010_1d48(str_var1(param_2, param_1), param_3);
    (param_1 + 0xa) = 0x0;
    pass1_1008_3e38(str_var1(param_2, param_1 + 0xc));
    param_1 =  addr_table_1008_eb1a;//0xeb1a;
    param_1.fld2_segment = SEG_1008;
    return param_1;
}


pub fn pass1_1008_eb2a(param_1: i16, param_2: u16, param_3: u16)

{
    struct_op_1010_1d48(str_var1(param_2, param_1), param_3);
    (param_1 + 0xa)            = 0x0;
    (param_1 + 0xc)            = 0x0;
    param_1 =  addr_table_1008_ec00;//0xec00;
    param_1.fld2_segment      = SEG_1008;
    return;
}

u16 *pass1_1008_ec10(param_1: i16, param_2: u16, param_3: u16)

{
    struct_op_1010_1d48(str_var1(param_2, param_1), param_3);
    (param_1 + 0xa)            = 0x0;
    param_1 =  addr_table_1008_ec62;//0xec62;
    param_1.fld2_segment      = SEG_1008;
    return param_1;
}

u16 *struct_1008_ec72(u16 *param_1) {
    struct_1010_383a(param_1);
    param_1.field_0x0 = addr_table_1008_ef9c[10];//0xefc4;
    param_1.field_0x2 = SEG_1008;
    return param_1;
}

pub fn pass1_1008_ee14(param_1: u32, param_2: u16)

{
    let mut puVar1: *mut u8;
    let mut u_var2: u16;
    let mut iVar3: i16;
    let mut uVar4: u16;
    let mut puVar5: *mut u16;
    let mut local_1c: [u8;1a] = [0;1a];

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    if((iVar3 + 0x56) == 0x0)
    {
        puVar5 = struct_1008_ec72(str_var1(param_2, local_1c));
        u_var2  = (puVar5 >> 0x10);
        puVar1 = local_1c;
        pass1_1010_398e(str_var1(param_2, puVar1), 0x0, 0x0, 0x0, puVar1);
        (iVar3 + 0x56) = puVar1;
        (iVar3 + 0x58) = u_var2;
        pass1_1008_ec94(str_var1(param_2, local_1c));
    }
    return;
}


u16 *pass1_1008_d72e(param_1: i16, param_2: u16, param_3: u16)

{
    struct_op_1010_1d48(str_var1(param_2, param_1), param_3);
    (param_1 + 0xa)            = 0x0;
    param_1 =  addr_table_1008_d780;//0xd780;
    param_1.fld2_segment      = SEG_1008;
    return param_1;
}


pub fn pass1_1008_d818(param_1: *mut Struct732, i16 param_2)

{
    let mut iVar1: *mut Struct732;
    let mut uVar1: u16;

    if(param_2 - 0x1a0U < 0x15)
    {
        iVar1 = param_1;
        uVar1 = (param_1 >> 0x10);
        switch(param_2)
        {
        0x1a0 =>
            iVar1.field_0xe = 0x14;
            break;
        0x1a1 =>
            iVar1.field_0xe = 0x3;
            break;
        0x1a2 =>
            iVar1.field_0xe = 0x2;
            break;
        0x1a3 =>
            iVar1.field_0xe = 0xe;
            break;
        0x1a4 =>
            iVar1.field_0xe = 0xc;
            break;
        0x1a5 =>
            iVar1.field_0xe = 0x4;
            break;
        0x1a6 =>
            iVar1.field_0xe = 0xb;
            break;
        0x1a7 =>
            iVar1.field_0xe = 0x6;
            break;
        0x1a8 =>
            iVar1.field_0xe = 0xa;
            break;
        0x1a9 =>
            iVar1.field_0xe = 0xd;
            break;
        0x1aa =>
            iVar1.field_0xe = 0x13;
            break;
        0x1ab =>
            iVar1.field_0xe = 0x5;
            break;
        0x1ac =>
            iVar1.field_0xe = 0x9;
            break;
        0x1ad =>
            iVar1.field_0xe = 0x8;
            break;
        0x1ae =>
            iVar1.field_0xe = 0x12;
            break;
        0x1af =>
            iVar1.field_0xe = 0x11;
            break;
        0x1b0 =>
            iVar1.field_0xe = 0x7;
            return;
        0x1b1 =>
            iVar1.field_0xe = 0x10;
            return;
        0x1b2 =>
            iVar1.field_0xe = 0x1;
            return;
        0x1b3 =>
            iVar1.field_0xe = 0xf;
            return;
        0x1b4 =>
            iVar1.field_0xe = 0x15;
            return;
        }
    }
    return;
}


pub fn pass1_1008_d99e(param_1: i16, param_2: u16, param_3: u16, param_4: *mut u8, param_5: u16)

{
    struct_op_1018_4cda(param_1, param_2, param_3);
    param_1 =  addr_table_1008_d9fa;//0xd9fa;
    param_1.fld2_segment = SEG_1008;
    pass1_1018_4dce(str_var1(param_2, param_1), 0x9a, param_4, param_5);
    globals._PTR_LOOP_1050_4230 = str_var1(param_2, param_1);
    return;
}

void struct_1008_dc90(u16 *param_1, param_2: u32, param_3: u32) {
    let mut iVar1: *mut Struct212;
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    iVar1 =  param_1;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment = SEG_1008;
    iVar1.field_0x4 = param_3;
    iVar1.field_0x8 = param_2;
    iVar1.field_0xc = 0x0;
    iVar1.field_0xe = 0x0;
    iVar1.field_0x12 = 0x0;
    param_1.field_0x0 = addr_table_1008_dd4a;//0xdd4a;
    iVar1->fld2_segment = SEG_1008;
    return;
}


void struct_1008_dcdc(u16 *param_1) {
    let mut iVar1: *mut Struct220;
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    iVar1 =  param_1;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1.field_0x2 = SEG_1008;
    iVar1.field_0x4 = 0x0;
    iVar1.field_0x8 = 0x0;
    iVar1.field_0xc = 0x0;
    iVar1.field_0xe = 0x0;
    iVar1.field_0x12 = 0x0;
    param_1.field_0x0 = addr_table_1008_dd4a; //0xdd4a;
    iVar1.field_0x2 = SEG_1008;
    return;
}

void  pass1_1008_e05e(param_1: u32, param_2: u16, param_3: u32, param_4: u32, param_5: u16, param_6: u8)

{
    let mut iVar1: i16;
    let mut u_var2: u16;
    let mut uVar3: u32;
    let mut local_122: [u8;112] = [0;112];
    let mut iStack16: i16;
    let mut local_e: [u8;8] = [0;8];
    long lStack6;

    lStack6 = pass1_1008_e8cc(param_5, param_1, param_3, param_4);
    if(lStack6 != 0x0)
    {
        uVar3          = pass1_1030_8326();
        u_var2          = (lStack6 >> 0x10);
        iVar1          = lStack6;
        (iVar1 + 0xe)  = uVar3;
        (iVar1 + 0x10) = (uVar3 >> 0x10);
        (iVar1 + 0xc)  = param_2;
    }
    pass1_1008_5784(str_var1(param_5, local_e), *(param_1 + 0xa));
    iStack16 = 0x0;
    do
    {
        lStack6 = pass1_1008_5b12(local_e, param_5);
        if(lStack6 == 0x0)
            goto LAB_1008_e0d3;
    } while((lStack6 + 0xc) != 0x1);
    iStack16 = 0x1;
// LAB_1008_e0d3:
    if(iStack16 == 0x0)
    {
        struct_1030_e2be(str_var1(param_5, local_122), 0x0, 0x0, 0x0, param_5, param_6);
        fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_5, local_122));
    }
    return;
}

pub fn pass1_1008_e164(param_1: *mut Struct214, param_2: u16, param_3: u8)

{
    let mut puVar1: *mut u32;
    let mut ppcVar2: *mut *mut c_void;
    let mut uVar5: *mut Struct215;
    let mut paVar3: *mut Struct215;
    let mut paVar4: *mut Struct216;
    let mut puVar5: *mut u8;
    let mut puVar6: *mut u8;
    let mut puVar7: *mut u8;
    let mut uVar8: u16;
    let mut uVar11: *mut Struct214;
    let mut paVar9: *mut Struct215;
    let mut iVar12: *mut Struct213;
    let mut uVar10: u16;
    let mut uVar12: u16;
    let mut uVar13: u32;
    let mut local_118: [u8;112] = [0;112];
    long         lStack6;
    let mut iVar1: *mut Struct216;

    uVar10  = (param_1 >> 0x10);
    uVar11  = param_1;
    lStack6 = pass1_1008_e8cc(param_2, param_1, uVar11.field_0x1a_addr_offset, uVar11.field_0x16);
    uVar8   = (lStack6 >> 0x10);
    uVar5   = lStack6;
    puVar5  = (uVar8 | uVar5);
    if(lStack6 == 0x0)
    {
        pass1_1008_e852(uVar11, uVar10, uVar11.field_0x16, param_2, puVar5);
        paVar3 = uVar5;
        puVar6 = puVar5;
        pass1_1008_e852(uVar11, uVar10, uVar11.field_0x1a_addr_offset, param_2, puVar5);
        paVar9 = paVar3;
        puVar7 = puVar6;
        mem_op_1000_179c(NULL, 0x14, SEG_1000);
        uVar8 = puVar7 | paVar9;
        if(uVar8 == 0x0)
        {
            paVar9 = 0x0;
            uVar8  = 0x0;
        }
        else
        {
            struct_1008_dc90(str_var1(puVar7, paVar9), CONCAT13((puVar6 >> 0x8), CONCAT12(puVar6, paVar3)),
                             str_var1(puVar5, uVar5));
        }
        lStack6            = str_var1(uVar8, paVar9);
        paVar9.field_0xc  = 0x1;
        uVar13             = pass1_1030_8326();
        uVar12             = (lStack6 >> 0x10);
        iVar12             = lStack6;
        iVar12.field_0xe  = uVar13;
        iVar12.field_0x10 = (uVar13 >> 0x10);
        puVar1             = uVar11.field_0xa;
        ppcVar2            = (*uVar11.field_0xa + 0x4);
        (**ppcVar2)(SEG_1030, puVar1, (puVar1 >> 0x10), iVar12, uVar12);
    }
    else
    {
        iVar1  = uVar5.field_0xc;
        paVar4 = iVar1 + -0x1;
        if(paVar4 == 0x0)
        {
            return;
        }
        if(((0x0 < paVar4) && (!SBORROW2(paVar4, 0x1))) && ((iVar1 + -0x2) < 0x2))
        {
            uVar5.field_0x12 = 0x1;
        }
        uVar5.field_0xc = 0x1;
    }
    uVar12 = (lStack6 >> 0x10);
    struct_1030_e2be(str_var1(param_2, local_118), 0x1, *(lStack6 + 0x8), *(lStack6 + 0x4), param_2, param_3);
    uVar13 = pass1_1030_8326();
    pass1_1030_8372(globals._PTR_LOOP_1050_5748, uVar13 + 0x1, str_var1(param_2, local_118));
}


pub fn pass1_1008_c72a(param_1: *mut Struct642, param_2: u16, param_3: u16)

{
    struct_op_1010_1d48(str_var1(param_2, param_1), param_3);
    param_1.field_0xa         = 0x0;
    param_1.field_0xe         = 0x0;
    param_1 =  addr_table_1008_ca4a;//0xca4a;
    param_1.field_0x2         = SEG_1008;
}


pub fn pass1_1008_ca5a(param_1: *mut Struct639, param_2: u16, param_3: u16)

{
    struct_op_1010_1d48(str_var1(param_2, param_1), param_3);
    param_1.field_0xa         = 0x0;
    param_1.field_0xe         = 0x0;
    param_1.field_0x12        = 0x0;
    param_1.field_0x16        = 0x0;
    param_1.field_0x1a_addr_offset = 0x0;
    param_1.field_0x1e        = 0x0;
    param_1 =  addr_table_1008_d71a;//0xd71a;
    param_1.fld2_segment           = SEG_1008;
}


void struct_1008_bde0(param_1: *mut u32, u8 *param_2)

{
    let mut uVar1: u16;
    let mut iVar2: *mut Struct139;
    let mut iVar3: *mut Struct140;
    let mut iVar4: *mut Struct141;
    let mut iVar5: *mut Struct142;
    let mut iVar6: *mut Struct143;
    let mut iVar7: *mut Struct144;
    let mut iVar8: *mut Struct145;
    let mut iVar9: *mut Struct146;
    let mut iVar10: *mut Struct147;
    let mut iVar11: *mut Struct148;
    let mut iVar12: *mut Struct149;
    let mut iVar2_00: *mut Struct150;
    let mut iVar2_01: *mut Struct151;
    let mut iVar2_02: *mut Struct152;
    let mut iVar2_03: *mut Struct153;
    let mut iVar2_04: *mut Struct154;
    let mut iVar2_05: *mut Struct155;
    let mut iVar2_06: i16;
    let mut uVar3: u16;
    let mut uVar13: u16;

    globals._PTR_LOOP_1050_06e0 = param_1;
    if(globals._PTR_LOOP_1050_5f2c == 0x0)
    {
        globals.dat_1050_5f2c      = mem_op_1000_160a(param_2, SEG_1000);
        globals.dat_1050_5f2e      = param_2;
    }
    else
    {
    }
    uVar1                = fn_ptr_op_1000_1708(0x1aa, 0x0, 0x1, globals.dat_1050_5f2c, globals.dat_1050_5f2e, SEG_1000);
    param_1              = uVar1;
    param_1.field_0x2 = globals.dat_1050_5f2e;
    uVar3                = (*param_1 >> 0x10);
    iVar2                = *param_1;
    iVar2.field_0x6     = 0x6e4;
    iVar2.field_0x8     = SEG_1050;
    (*param_1 + 0xa)     = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar3                = *param_1;
    iVar3.field_0xc     = 0x6ea;
    iVar3.field_0xe     = SEG_1050;
    (*param_1 + 0x10)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar4                = *param_1;
    iVar4.field_0x12    = 0x6ee;
    iVar4.field_0x14    = SEG_1050;
    (*param_1 + 0x16)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar5                = *param_1;
    iVar5.field_0x18    = 0x6f2;
    iVar5.field_0x1a_addr_offset = SEG_1050;
    (*param_1 + 0x1c)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar6                = *param_1;
    iVar6.field_0x1e    = 0x6f6;
    iVar6.field_0x20    = SEG_1050;
    (*param_1 + 0x22)    = 0x4;
    uVar13               = (*param_1 >> 0x10);
    iVar7                = *param_1;
    iVar7.field_0x24    = 0x6fe;
    iVar7.field_0x26    = SEG_1050;
    (*param_1 + 0x28)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar8                = *param_1;
    iVar8.field_0x2a    = 0x702;
    iVar8.field_0x2c    = SEG_1050;
    (*param_1 + 0x2e)    = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar9                = *param_1;
    iVar9.field_0x30    = 0x708;
    iVar9.field_0x32    = SEG_1050;
    (*param_1 + 0x34)    = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar10               = *param_1;
    iVar10.field_0x36   = 0x70e;
    iVar10.field_0x38   = SEG_1050;
    (*param_1 + 0x3a)    = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar11               = *param_1;
    iVar11.field_0x3c   = 0x714;
    iVar11.field_0x3e   = SEG_1050;
    (*param_1 + 0x40)    = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar12               = *param_1;
    iVar12.pv_field_42   = 0x71a;
    iVar12.field_0x44   = SEG_1050;
    (*param_1 + 0x46)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_00             = *param_1;
    iVar2_00.field_0x48 = 0x71e;
    iVar2_00.field_0x4a = SEG_1050;
    (*param_1 + 0x4c)    = 0x7;
    uVar13               = (*param_1 >> 0x10);
    iVar2_01             = *param_1;
    iVar2_01.field_0x4e = 0x72c;
    iVar2_01.field_0x50 = SEG_1050;
    (*param_1 + 0x52)    = 0x6;
    uVar13               = (*param_1 >> 0x10);
    iVar2_02             = *param_1;
    iVar2_02.field_0x54 = 0x738;
    iVar2_02.field_0x56 = SEG_1050;
    (*param_1 + 0x58)    = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar2_03             = *param_1;
    iVar2_03.field_0x5a = 0x73e;
    iVar2_03.field_0x5c = SEG_1050;
    (*param_1 + 0x5e)    = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar2_04             = *param_1;
    iVar2_04.field_0x60 = 0x744;
    iVar2_04.field_0x62 = SEG_1050;
    (*param_1 + 0x64)    = 0x4;
    uVar13               = (*param_1 >> 0x10);
    iVar2_05             = *param_1;
    iVar2_05.field_0x66 = 0x74c;
    iVar2_05.field_0x68 = SEG_1050;
    (*param_1 + 0x6a)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x6c)    = 0x750;
    (iVar2_06 + 0x6e)    = SEG_1050;
    (*param_1 + 0x70)    = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x72)    = 0x756;
    (iVar2_06 + 0x74)    = SEG_1050;
    (*param_1 + 0x76)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x78)    = 0x75a;
    (iVar2_06 + 0x7a)    = SEG_1050;
    (*param_1 + 0x7c)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x7e)    = 0x75e;
    (iVar2_06 + 0x80)    = SEG_1050;
    (*param_1 + 0x82)    = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x84)    = 0x764;
    (iVar2_06 + 0x86)    = SEG_1050;
    (*param_1 + 0x88)    = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x8a)    = 0x76a;
    (iVar2_06 + 0x8c)    = SEG_1050;
    (*param_1 + 0x8e)    = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x90)    = 0x770;
    (iVar2_06 + 0x92)    = SEG_1050;
    (*param_1 + 0x94)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x96)    = 0x774;
    (iVar2_06 + 0x98)    = SEG_1050;
    (*param_1 + 0x9a)    = 0x4;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x9c)    = 0x77c;
    (iVar2_06 + 0x9e)    = SEG_1050;
    (*param_1 + 0xa0)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xa2)    = 0x780;
    (iVar2_06 + 0xa4)    = SEG_1050;
    (*param_1 + 0xa6)    = 0x1;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xa8)    = 0x782;
    (iVar2_06 + 0xaa)    = SEG_1050;
    (*param_1 + 0xac)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xae)    = 0x786;
    (iVar2_06 + 0xb0)    = SEG_1050;
    (*param_1 + 0xb2)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xb4)    = 0x78a;
    (iVar2_06 + 0xb6)    = SEG_1050;
    (*param_1 + 0xb8)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xba)    = 0x78e;
    (iVar2_06 + 0xbc)    = SEG_1050;
    (*param_1 + 0xbe)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xc0)    = 0x792;
    (iVar2_06 + 0xc2)    = SEG_1050;
    (*param_1 + 0xc4)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xc6)    = 0x796;
    (iVar2_06 + 0xc8)    = SEG_1050;
    (*param_1 + 0xca)    = 0x4;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xcc)    = 0x79e;
    (iVar2_06 + 0xce)    = SEG_1050;
    (*param_1 + 0xd0)    = 0x1;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xd2)    = 0x7a0;
    (iVar2_06 + 0xd4)    = SEG_1050;
    (*param_1 + 0xd6)    = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xd8)    = 0x7a4;
    (iVar2_06 + 0xda)    = SEG_1050;
    (*param_1 + 0xdc)    = 0x1;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xde)    = 0x7a6;
    (iVar2_06 + 0xe0)    = SEG_1050;
    (*param_1 + 0xe2)    = 0x6;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xe4)    = 0x7b2;
    (iVar2_06 + 0xe6)    = SEG_1050;
    (*param_1 + 0xe8)    = 0x1;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xea)    = 0x7b4;
    (iVar2_06 + 0xec)    = SEG_1050;
    (*param_1 + 0xee)    = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xf0)    = 0x7ba;
    (iVar2_06 + 0xf2)    = SEG_1050;
    (*param_1 + 0xf4)    = 0x2d;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xf6)    = 0x814;
    (iVar2_06 + 0xf8)    = SEG_1050;
    (*param_1 + 0xfa)    = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0xfc)    = 0x81a;
    (iVar2_06 + 0xfe)    = SEG_1050;
    (*param_1 + 0x100)   = 0x1;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x102)   = 0x81c;
    (iVar2_06 + 0x104)   = SEG_1050;
    (*param_1 + 0x106)   = 0x4b;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x108)   = 0x8b2;
    (iVar2_06 + 0x10a)   = SEG_1050;
    (*param_1 + 0x10c)   = 0x6;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x10e)   = 0x8be;
    (iVar2_06 + 0x110)   = SEG_1050;
    (*param_1 + 0x112)   = 0x4;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x11a)   = 0x8c6;
    (iVar2_06 + 0x11c)   = SEG_1050;
    (*param_1 + 0x11e)   = 0x35;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x120)   = 0x930;
    (iVar2_06 + 0x122)   = SEG_1050;
    (*param_1 + 0x124)   = 0x2e;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x114)   = 0x98c;
    (iVar2_06 + 0x116)   = SEG_1050;
    (*param_1 + 0x118)   = 0x1;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x126)   = 0x98e;
    (iVar2_06 + 0x128)   = SEG_1050;
    (*param_1 + 0x12a)   = 0x9;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x12c)   = 0x9a0;
    (iVar2_06 + 0x12e)   = SEG_1050;
    (*param_1 + 0x130)   = 0x1a;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x132)   = 0x9d4;
    (iVar2_06 + 0x134)   = SEG_1050;
    (*param_1 + 0x136)   = 0x8;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x138)   = 0x9e4;
    (iVar2_06 + 0x13a)   = SEG_1050;
    (*param_1 + 0x13c)   = 0x4a;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x144)   = 0xa78;
    (iVar2_06 + 0x146)   = SEG_1050;
    (*param_1 + 0x148)   = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x14a)   = 0xa7c;
    (iVar2_06 + 0x14c)   = SEG_1050;
    (*param_1 + 0x14e)   = 0x1;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x150)   = 0xa7e;
    (iVar2_06 + 0x152)   = SEG_1050;
    (*param_1 + 0x154)   = 0x1;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x156)   = 0xa80;
    (iVar2_06 + 0x158)   = SEG_1050;
    (*param_1 + 0x15a)   = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x15c)   = 0xa86;
    (iVar2_06 + 0x15e)   = SEG_1050;
    (*param_1 + 0x160)   = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x168)   = 0xa8a;
    (iVar2_06 + 0x16a)   = SEG_1050;
    (*param_1 + 0x16c)   = 0x1b;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x16e)   = 0xac0;
    (iVar2_06 + 0x170)   = SEG_1050;
    (*param_1 + 0x172)   = 0x16;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x174)   = 0xaec;
    (iVar2_06 + 0x176)   = SEG_1050;
    (*param_1 + 0x178)   = 0x3e;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x17a)   = 0xb68;
    (iVar2_06 + 0x17c)   = SEG_1050;
    (*param_1 + 0x17e)   = 0x46;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x180)   = 0xbf4;
    (iVar2_06 + 0x182)   = SEG_1050;
    (*param_1 + 0x184)   = 0x1;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x186)   = 0xbf6;
    (iVar2_06 + 0x188)   = SEG_1050;
    (*param_1 + 0x18a)   = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x18c)   = 0xbfc;
    (iVar2_06 + 0x18e)   = SEG_1050;
    (*param_1 + 0x190)   = 0x3;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x192)   = 0xc02;
    (iVar2_06 + 0x194)   = SEG_1050;
    (*param_1 + 0x196)   = 0xa;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x198)   = 0xc16;
    (iVar2_06 + 0x19a)   = SEG_1050;
    (*param_1 + 0x19c)   = 0x24;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x19e)   = 0xc5e;
    (iVar2_06 + 0x1a0)   = SEG_1050;
    (*param_1 + 0x1a2)   = 0x2;
    uVar13               = (*param_1 >> 0x10);
    iVar2_06             = *param_1;
    (iVar2_06 + 0x1a4)   = 0xc62;
    (iVar2_06 + 0x1a6)   = SEG_1050;
    (*param_1 + 0x1a8)   = 0x44;
    return;
}

u32 pass1_1008_aefe(param_1: *mut u8, param_2: *mut u8, param_3: u16, param_4: *mut u8, param_5: u16)

{
    struct_op_1018_4cda(param_1, param_2, param_3);
    param_1 =  addr_table_1008_af7c;//0xaf7c;
    param_1.field_0x2 = SEG_1008;
    globals.dat_1050_4230      = param_1;
    globals.dat_1050_4232      = param_2;
    pass1_1018_4dce(str_var1(param_2, param_1), 0x1b3, param_4, param_5);
    return param_1;
}


pub fn pass1_1008_af94(param_1: *mut Struct643, param_2: u16, param_3: u16)

{
    struct_op_1010_1d48(str_var1(param_2, param_1), param_3);
    param_1.field_0xa         = 0x0;
    param_1.field_0xe         = 0x0;
    param_1.field_0x12        = 0x0;
    param_1.field_0x16        = 0x0;
    param_1.field_0x1a_addr_offset = 0x0;
    param_1.field_0x1e        = 0x0;
    param_1.field_0x22        = 0x0;
    param_1 =  addr_table_1008_bdc0[3];//0xbdcc;
    param_1.field_0x2         = SEG_1008;
    return;
}


void set_struct_op_1008_9584(struct param_1: &mut Struct20, param_2: u32)

{
    struct Struct20 *iVar1;
    let mut uVar1: u16;

    uVar1                     = (param_1 >> 0x10);
    iVar1                     = (struct Struct20 *)param_1;
    param_1.field_0x0        = addr_table_1008_380a[36]; // 0x389a
    iVar1.field_0x2          = SEG_1008;
    iVar1.field_0x4          = param_2;
    param_1.field_0x0        = addr_table_1008_9d2e;//0x9d2e;
    iVar1.field_0x2          = SEG_1008;
    iVar1.field_0x8          = 0x0;
    iVar1.field_0xac         = 0x2000000;
    iVar1.field_0xb0         = 0x0;
    iVar1.field_0xb4         = 0x8000;
    iVar1.field_0xb6         = 0x8000;
    iVar1.field_0xb8         = 0x8000;
    iVar1.field_0xba         = 0x8000;
    iVar1.field_0xbc         = 0x0;
    iVar1.field_0xbe         = 0x0;
    iVar1.field_0xc2         = 0x0;
    iVar1->hcursor_field_0xc4 = 0x0;
    iVar1->hgdiobj_field_0xc6 = 0x0;
    iVar1.field_0xc8         = 0x2008;
    iVar1.field_0xca         = 0x0;
    param_1.field_0x0        = addr_table_1008_380a; // 0x380a
    iVar1.field_0x2          = SEG_1008;
    iVar1.field_0x5b         = '\0';
    *&iVar1.field_0xa        = 0x0;
    return;
}


void struct_op_1008_8e9e(param_1: *mut Struct78, param_2: u32, param_3: u32)

{
    let mut iVar1: *mut Struct78;
    let mut uVar1: *mut Struct78;
    let mut unaff_SS: u16;

    uVar1              = (param_1 >> 0x10);
    iVar1              = param_1;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1.field_0x2   = SEG_1008;
    iVar1.field_0x4   = 0x0;
    iVar1.field_0x6   = 0x0;
    iVar1.field_0xa   = 0x0;
    iVar1.field_0xe   = param_3;
    iVar1.field_0x12  = 0x0;
    iVar1.field_0x16  = param_2;
    iVar1.field_0x1a_addr_offset = 0x1;
    param_1.field_0x0 = addr_table_1008_9170;//0x9170;
    iVar1.field_0x2   = SEG_1008;
    if(iVar1.field_0xe < 0x7)
    {
        iVar1.field_0xe = 0x6;
    }
    pass1_1008_909c(param_1, unaff_SS);
    *iVar1.field_0x6 = 0x0;
    return;
}


void struct_op_1008_9174(param_1: *mut Struct88, param_2: u32, param_3: u32)

{
    let mut iVar1: *mut Struct88;
    let mut uVar1: u16;

    uVar1             = (param_1 >> 0x10);
    iVar1             = param_1;
    param_1           = addr_table_1008_380a[36]; // 0x389a
    iVar1.field_0x2  = SEG_1008;
    iVar1.field_0x4  = param_3;
    iVar1.field_0x8  = param_2;
    iVar1.field_0xc  = param_2;
    iVar1.field_0x10 = 0x0;
    param_1           = addr_table_1008_9412;//0x9412;
    iVar1.field_0x2  = SEG_1008;
    return;
}

void set_struct_1008_687a(struct param_1: &mut Struct20, param_2: u32)

{
    struct Struct20 *iVar1;
    struct Struct20 *uVar1;

    set_struct_op_1008_9584(param_1, param_2);
    uVar1             = (struct Struct20 *)(param_1 >> 0x10);
    iVar1             = (struct Struct20 *)param_1;
    iVar1.field_0xcc = 0x0;
    iVar1.field_0xce = 0x0;
    set_struct_1008_574a((param_1 & 0xffff0000 | ZEXT24(&iVar1.field_0xd2)));
    param_1.field_0x0            = addr_table_1008_6bfc;//0x6bfc;
    iVar1.field_0x2              = SEG_1008;
    (iVar1.field_0xd2).field_0xa = 0x0;
    return;
}

u16 str_op_1008_60e8(char *param_1)

{
    let mut uVar1: u16;

    if(param_1 != 0x0)
    {
        uVar1 = str_op_1000_3da4(param_1);
        uVar1 = uVar1 + 0x1;
        mem_op_1000_179c(NULL, uVar1, SEG_1000);
        if((param_2 | uVar1) != 0x0)
        {
            unk_str_op_1000_3d3e(uVar1, param_1);
            return uVar1;
        }
    }
    return 0x0;
}


void struct_1008_4c58(u16 *param_1) {
    let mut iVar1: *mut Struct394;
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    iVar1 =  param_1;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1.field_0x2 = SEG_1008;
    iVar1.field_0x4 = 0x0;
    iVar1.field_0xc = 0x0;
    iVar1.field_0xe = 0x0;
    iVar1.field_0x12 = 0x1;
    param_1.field_0x0 = addr_table_1008_4f1c;//0x4f1c;
    iVar1.field_0x2 = SEG_1008;
    return;
}


void struct_op_1008_4c98(param_1: *mut Struct76, param_2: u32, param_3: u16)

{
    let mut iVar1: *mut Struct76;
    let mut uVar1: u16;

    uVar1              = (param_1 >> 0x10);
    iVar1              = param_1;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1.field_0x2   = SEG_1008;
    *&iVar1.field_0x4 = param_2;
    iVar1.field_0xc   = param_3;
    iVar1.field_0xe   = 0x0;
    iVar1.field_0x12  = 0x0;
    param_1.field_0x0 = addr_table_1008_4f1c;//0x4f1c;
    iVar1.field_0x2   = SEG_1008;
    return;
}


pub fn pass1_1008_5068(param_1: *mut Struct76, param_2: *mut Struct83)

{
    struct_op_1008_4214(param_1, param_2);
    return;
}


u16 *struct_op_1008_56b4(param_1: *mut Struct76)

{
    let mut iVar1: *mut Struct82;
    let mut uVar1: u16;

    uVar1              = (param_1 >> 0x10);
    iVar1              = param_1;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    iVar1.field_0x4   = 0x0;
    param_1.field_0x0 = addr_table_1008_573a;//0x573a;//s__s__d_1050_573a;
    iVar1->fld2_segment     = SEG_1008;
    return &param_1.field_0x0;
}


void set_struct_1008_574a(param_1: *mut Struct21)

{
    let mut iVar1: *mut Struct21;
    let mut uVar1: *mut Struct21;

    uVar1              = (param_1 >> 0x10);
    iVar1              = param_1;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1.field_0x2   = SEG_1008;
    iVar1.field_0x4   = 0x0;
    iVar1.field_0x8   = 0x0;
    iVar1.field_0xa   = 0x1;
    param_1.field_0x0 = addr_table_1008_5bc0[1];//0x5bc4;
    iVar1.field_0x2   = SEG_1008;
}

void struct_op_1008_3f92(param_1: *mut Struct76, param_2: *mut Struct83)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut iVar2: *mut Struct76;
    let mut u_var2: u16;

    struct_op_1008_56b4(param_1);
    u_var2                     = (param_1 >> 0x10);
    iVar2                     = param_1;
    &iVar2.field_0x6         = 0x0;
    (&iVar2.field_0x8 + 0x2) = 0x0;
    &iVar2.field_0xe         = 0x0;
    (&iVar2.field_0xe + 0x2) = 0x0;
    iVar2.field_0x14         = 0x0;
    &iVar2.field_0x18        = 0x0;
    iVar2.field_0x1c_addr_base = 0x0;
    param_1.field_0x0        = pass1_1008_48de;//0x48de;//&PTR_LOOP_1050_48de;
    iVar2.field_0x2          = SEG_1008;
    if(param_2 == 0x0)
    {
        return;
    }
    ppcVar1 = (param_2 + 0x8);
    (**ppcVar1)();
    struct_op_1008_4214(param_1, param_2);
    pass1_1008_47cc(param_1);
    pass1_1008_4834(param_1);
    return;
}


pub fn pass1_1008_4016(param_1: *mut Struct76)

{
    let mut iVar1: i16;
    let mut u_var2: u16;

    struct_op_1008_56b4(param_1);
    u_var2              = (param_1 >> 0x10);
    iVar1              = param_1;
    (iVar1 + 0x6)      = 0x0;
    (iVar1 + 0xa)      = 0x0;
    (iVar1 + 0xe)      = 0x0;
    (iVar1 + 0x10)     = 0x0;
    (iVar1 + 0x14)     = 0x0;
    (iVar1 + 0x18)     = 0x0;
    (iVar1 + 0x1c)     = 0x0;
    param_1.field_0x0 = pass1_1008_48de;//&PTR_LOOP_1050_48de;
    (iVar1 + 0x2)      = SEG_1008;
    return;
}


void struct_op_1008_4214(param_1: *mut Struct76, param_2: *mut Struct83)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: *mut Struct83;
    let mut uVar4: *mut Struct83;

    uVar4             = (param_2 >> 0x10);
    iVar4             = param_2;
    (param_1 + 0x6)   = iVar4.field_0x1a_addr_offset;
    iVar4.field_0x1a_addr_offset = 0x0;
    puVar1            = iVar4.field_0x4;
    u_var2             = iVar4.field_0x6;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    &iVar4.field_0x4 = 0x0;
    iVar4.field_0xe  = 0x0;
    iVar4.field_0x12 = 0x0;
    iVar4.field_0x16 = 0x0;
    iVar4.field_0x1e = 0x0;
    return;
}


struct Struct20 *pass1_1008_3ab8(struct param_1: *mut Struct20)

{
    let mut iVar1: i16;
    let mut u_var2: u16;

    set_struct_1008_687a(param_1, 0x0);
    u_var2              = (param_1 >> 0x10);
    iVar1              = param_1;
    (iVar1 + 0xde)     = 0x0;
    param_1.field_0x0 = addr_table_1008_3b46;//0x3b46;
    (iVar1 + 0x2)      = SEG_1008;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (iVar1 + 0x5b)), s_SOLDefaultWindowClass_1050_01fe);
    return param_1;
}


void struct_op_1008_0000(struct_1008_0000_1 *param_1) {
//    i16 iVar1;
//    u16 u_var2;
//
//    // Segment:    2
//    // Offset:     000060e0
//    // Length:     efe0
//    // Min Alloc:  efe0
//    // Flags:      0d50
//    //     Code
//    //     Moveable
//    //     Preload
//    //     Impure (Non-shareable)
//    //
//    u_var2 = (param_1 >> 0x10);
//    iVar1 = param_1;
    param_1.field_0x0 = addr_table_1008_051e[3]//0x052a;
            (param_1.field_0x2) = SEG_1008;
    (param_1.field_0x4) = 0x0;
    (param_1.field_0x8) = 0x0;
    param_1.field_0x0 = addr_table_1008_051e;//0x51e;
    (param_1.field_0x2) = SEG_1008;
}

SegmentAddress struct_op_1030_73a8(globals: &mut Globals, param_1: *mut Struct383)

{
    Address1   address_1_var_1;
    let mut in_AX: u16;
    let mut in_DX: u16;
    SegmentAddress result;
    result.base = 0;
    result.offset = 0;
//    i16        iVar2;
//    u16        uVar3;

//    uVar3 = (param_1 >> 0x10);
//    iVar2 = param_1;
    if((param_1.field_0x16) == 0x0)
    {
        return result;
    }
    if((param_1.field_0x1a_addr_offset) == 0x0)
    {
        address_1_var_1 = (param_1.field_0x16);
        pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, address_1_var_1.offset, (address_1_var_1.base));
        (param_1.field_0x1a_addr_offset) = in_AX;
        (param_1.field_0x1c_addr_base) = in_DX;
    }

    result.base = param_1.field_0x1c_addr_base;
    result.offset = param_1.field_0x1a_addr_offset;
    return result;
}

#pragma clang diagnostic pop
