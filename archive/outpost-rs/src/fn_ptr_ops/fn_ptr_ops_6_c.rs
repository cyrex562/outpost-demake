// #include "fn_ptr_ops_6.h"

// #include "address_tables/function_tables.h"
// #include "address_tables/address_tables_2.h"
// #include "fn_ptr_ops_7.h"
// #include "globals.h"
// #include "op_dos_interrupts.h"
// #include "op_int.h"
// #include "op_winapi.h"
// #include "sys_ops/sys_ops_12.h"
// #include "unk/unk_11.h"
// #include "unk/unk_14.h"
// #include "unk/unk_15.h"
// #include "unk/unk_19.h"
// #include "utils.h"
// #include "function_tables.h"

// #include <minwindef.h>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCInconsistentNamingInspection"
u32 pass1_1010_8ebc(param_1: u32, param_2: u8)

{
    let mut unaff_SS: u16;

    pass1_1010_8c78(param_1, unaff_SS);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

pub fn pass1_1010_9044(param_1: u32)

{
    FnPtr1 *ppcVar1;

    ppcVar1 = ((param_1 + 0x4) + 0x10);
    (**ppcVar1)();
    return;
}


void fn_ptr_1010_905e(param_1: *mut Struct169, param_2: u32)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    FnPtr1      *fn_ptr_1_list_a;
    let mut iVar4: *mut Struct169;
    let mut uVar4: u16;

    uVar4  = (param_1 >> 0x10);
    iVar4  = param_1;
    puVar1 = &iVar4.field_0x4;
    u_var2  = *(&iVar4.field_0x4 + 0x2);
    if((u_var2 | puVar1) != 0x0)
    {
        fn_ptr_1_list_a = *puVar1;
        (*fn_ptr_1_list_a)();
    }
    iVar4.field_0x4 = param_2;
    return;
}


pub fn pass1_1010_9092(param_1: u32, param_2: u16, param_3: u16)

{
    FnPtr1       *fn_ptr_1_list_a;
    let mut u_var2: u32;
    let mut dx_reg_1: *mut u8;
    let mut puVar3: *mut u8;
    let mut puVar4: *mut u8;
    let mut dx_reg_2: u16;
    let mut param_1_lo: i16;
    let mut param_1_hi: u16;
    let mut uVar7: u16;
    let mut uVar8: u32;
    let mut uStack14: u32;
    let mut u_stack6: u32;

    param_1_hi      = (param_1 >> 0x10);
    param_1_lo      = param_1;
    uVar8   = (param_1_lo + 0x4);
    fn_ptr_1_list_a = ((param_1_lo + 0x4) + 0x10);
    (*fn_ptr_1_list_a)();
    u_stack6 = str_var1(dx_reg_1, param_2);
    uVar7   = 0xc;
    puVar3 = dx_reg_1;
    mem_op_1000_179c(NULL, 0xc, SEG_1000);
    puVar4 = (puVar3 | param_2);
    if(puVar4 == 0x0)
    {
        param_2 = 0x0;
        puVar4  = 0x0;
    }
    else
    {
        pass1_1010_8ef2(str_var1(puVar3, param_2), puVar4, param_3);
    }
    for(uStack14 = 0x0; uStack14 < u_stack6; uStack14 = uStack14 + 0x1)
    {
        fn_ptr_1_list_a = ((param_1_lo + 0x4) + 0x4);
        u_var2   = u_stack6;
        (**fn_ptr_1_list_a)(SEG_1000, (param_1_lo + 0x4), uStack14, uVar7, uVar8);
        if((dx_reg_2 | u_var2) != 0x0)
        {
            fn_ptr_1_list_a = ((param_2 + 0x4) + 0xc);
            (**fn_ptr_1_list_a)(SEG_1000, (param_2 + 0x4), u_var2, dx_reg_2);
        }
    }
    return;
}

u16 *pass1_1010_922e(u16 *param_1, param_2: u8)

{
    pass1_1010_8f78(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1010_951a(u16 *param_1, param_2: u8)

{
    pass1_1010_927a(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1010_9540(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_92e6(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u32 pass1_1010_7dc6(param_1: u32, param_2: u8)

{
    let mut unaff_SS: u16;

    param_1 = param_1 & 0xffff0000 | (param_1 - 0xa);
    pass1_1010_6bb2(param_1, unaff_SS);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1010_7dd2(u16 *param_1, param_2: u8)

{
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}

pub fn pass1_1010_7efc(param_1: *mut Struct448, param_2: u16)

{
    let mut uVar1: u16;
    let mut u_var2: u16;
    let mut puVar3: *mut u32;
    let mut ppcVar4: *mut *mut c_void;
    let mut iVar5: *mut Struct448;
    let mut uVar5: u16;
    let mut paStack8: *mut Struct18;
    let mut iStack4: i16;

    uVar5    = (param_1 >> 0x10);
    iVar5    = param_1;
    uVar1    = iVar5.field_0x67c;
    u_var2    = iVar5.field_0x67e;
    paStack8 = str_var1(u_var2, uVar1);
    if((u_var2 | uVar1) != 0x0)
    {
        pass1_1008_64a2(str_var1(u_var2, uVar1));
        param_2 = SEG_1000;
        fn_ptr_1000_17ce(paStack8, SEG_1000);
    }
    for(iStack4 = 0x0; iStack4 < 0x8a; iStack4 = iStack4 + 0x1)
    {
        puVar3 = *(&iVar5.field_0x4 + iStack4 * 0x4);
        uVar1  = *(&iVar5.field_0x4 + iStack4 * 0x4 + 0x2);
        if((uVar1 | puVar3) != 0x0)
        {
            ppcVar4 = *puVar3;
            (**ppcVar4)(param_2, puVar3, uVar1, 0x1);
        }
        puVar3 = *(&iVar5.field_0x22c + iStack4 * 0x4);
        uVar1  = *(&iVar5.field_0x22c + iStack4 * 0x4 + 0x2);
        if((uVar1 | puVar3) != 0x0)
        {
            ppcVar4 = *puVar3;
            (**ppcVar4)(param_2, puVar3);
        }
        puVar3 = *(&iVar5.field_0x454 + iStack4 * 0x4);
        uVar1  = *(&iVar5.field_0x454 + iStack4 * 0x4 + 0x2);
        if((uVar1 | puVar3) != 0x0)
        {
            ppcVar4 = *puVar3;
            (**ppcVar4)(param_2, puVar3);
        }
    }
    fn_ptr_1000_17ce(*param_1, SEG_1000);
    globals.dat_1050_14cc = 0x0;
    return;
}


pub fn pass1_1010_7fd6(param_1: *mut Struct489)

{
    let mut uVar1: u16;
    let mut u_var2: u16;
    let mut iVar3: *mut Struct489;
    let mut uVar3: u16;
    let mut paStack6: *mut Struct18;

    uVar3    = (param_1 >> 0x10);
    iVar3    = param_1;
    uVar1    = iVar3.field_0x67c;
    u_var2    = iVar3.field_0x67e;
    paStack6 = str_var1(u_var2, uVar1);
    if((u_var2 | uVar1) != 0x0)
    {
        pass1_1008_64a2(str_var1(u_var2, uVar1));
        fn_ptr_1000_17ce(paStack6, SEG_1000);
    }
    &iVar3.field_0x67c = 0x0;
    iVar3.field_0x680  = 0x0;
    return;
}

u16 *pass1_1010_66ca(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_1d80(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1010_6a86(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_1d80(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

pub fn pass1_1010_533c(param_1: u32, param_2: u32, param_3: *mut u8, param_4: u16)

{
    let mut puVar1: *mut u16;
    let mut u_var2: u32;
    let mut uVar3: u32;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut paVar7: *mut Struct18;
    let mut u_stack6: u16;
    let mut local_4: [u8;2] = [0;2];

    pass1_1010_519a(param_1, str_var1(param_4, local_4), param_3, param_4);
    u_stack6 = 0x0;
    while(true)
    {
        uVar6  = (param_1 >> 0x10);
        uVar5  = param_1;
        puVar1 = (uVar5 + 0x10);
        if(*puVar1 < u_stack6 || *puVar1 == u_stack6)
        {
            return;
        }
        uVar3   = (uVar5 + 0xc);
        u_var2   = *(uVar3 + u_stack6 * 0x4);
        paVar7  = string_1010_5286(uVar5, uVar6, u_var2, u_var2, param_3);
        param_3 = (paVar7 >> 0x10);
        iVar4   = pass1_1000_3d7a(param_2, paVar7 & 0xffff | ZEXT24(param_3) << 0x10);
        if(iVar4 == 0x0)
            break;
        fn_ptr_1000_17ce(paVar7, SEG_1000);
        u_stack6 = u_stack6 + 0x1;
    }
    return;
}


u16 *pass1_1010_53ce(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_50f2(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

void struct_1010_5f1e(param_1: *mut Struct73, char *param_2, param_3: u16)

{
    let mut uVar1: u16;
    let mut iVar3: *mut Struct73;
    let mut uVar3: *mut Struct73;

    uVar3 = (param_1 >> 0x10);
    iVar3 = param_1;
    fn_ptr_1000_17ce(&iVar3.field_0x16, SEG_1000);
    uVar1             = str_op_1008_60e8(param_2);
    iVar3.field_0x16 = uVar1;
    iVar3.field_0x18 = param_3;
    return;
}


pub fn pass1_1010_5f4c(param_1: *mut Struct484, char *param_2, param_3: u16)

{
    let mut uVar1: u16;
    let mut iVar3: *mut Struct484;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    iVar3 = param_1;
    fn_ptr_1000_17ce(&iVar3.field_0x12, SEG_1000);
    uVar1             = str_op_1008_60e8(param_2);
    iVar3.field_0x12 = uVar1;
    iVar3.field_0x14 = param_3;
    return;
}

pub fn pass1_1010_5fd8(param_1: *mut Struct485, char *param_2, param_3: u16)

{
    let mut uVar1: u16;
    let mut iVar3: *mut Struct485;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    iVar3 = param_1;
    fn_ptr_1000_17ce(&iVar3.field_0x68, SEG_1000);
    uVar1             = str_op_1008_60e8(param_2);
    iVar3.field_0x68 = uVar1;
    iVar3.field_0x6a = param_3;
    return;
}


pub fn pass1_1010_6006(param_1: *mut Struct486, char *param_2, param_3: u16)

{
    let mut uVar1: u16;
    let mut iVar3: *mut Struct486;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    iVar3 = param_1;
    fn_ptr_1000_17ce(&iVar3.field_0x6c, SEG_1000);
    uVar1             = str_op_1008_60e8(param_2);
    iVar3.field_0x6c = uVar1;
    iVar3.field_0x6e = param_3;
    return;
}

pub fn pass1_1010_60cc(param_1: *mut Struct487, char *param_2, param_3: u16)

{
    let mut uVar1: u16;
    let mut iVar3: *mut Struct487;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    iVar3 = param_1;
    fn_ptr_1000_17ce(&iVar3.field_0x1a_addr_offset, SEG_1000);
    uVar1             = str_op_1008_60e8(param_2);
    iVar3.field_0x1a_addr_offset = uVar1;
    iVar3.field_0x1c_addr_base = param_3;
    return;
}

pub fn pass1_1010_62a4(param_1: *mut Struct488, param_2: u8)

{
//    Struct488 *u_var2;
//    u16          uVar1;

//    uVar1            = (param_1 >> 0x10);
//    u_var2            = param_1;
    param_1.field_0x0 = addr_table_1010_6312[4]         = //0x6322;
    param_1.field_0x2 = SEG_1010;
    fn_ptr_1000_17ce(param_1.field_0x4, SEG_1000);
    param_1.field_0x0         = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
}
Struct18 *pass1_1010_4994(param_1: u16,param_2: *mut Struct18, param_3: u8, param_4: u16)

{
    param_2 = (param_2 & 0xffff0000 | (param_2 - 0x20));
    pass1_1010_3f00(param_2, param_4);
    if((param_3 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_2, SEG_1000);
    }
    return param_2;
}

u16 *pass1_1010_4a20(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_3f00(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

pub fn pass1_1010_50f2(u16 *param_1, param_2: u16) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1010_53f4; //0x53f4;
    param_1.field_0x2 = SEG_1010;
    fn_ptr_1000_17ce((param_1 + 0xc), SEG_1000);
    pass1_1010_1d80(param_1, param_2);
    return;
}

u16 *pass1_1010_36b4(u16 *param_1, param_2: u8)

{
    let mut unaff_SS: u16;

    pass1_1010_2db2(param_1, unaff_SS);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

pub fn pass1_1010_3730(u16 *param_1, param_2: u16)

{
//    u16 uVar1;
//    uVar1           = (param_1 >> 0x10);
    param_1.field_0x0        = addr_table_1010_37c4; //0x37c4;
    param_1.field_0x2 = SEG_1010;
    fn_ptr_1000_17ce((param_1.field_0xa), SEG_1000);
    pass1_1010_1d80(param_1, param_2);
}

pub fn pass1_1010_3770(param_1: *mut Struct477, char *param_2, param_3: u16)

{
    let mut uVar1: u16;
    let mut iVar3: *mut Struct477;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    iVar3 = param_1;
    fn_ptr_1000_17ce(&iVar3.field_0xa, SEG_1000);
    uVar1            = str_op_1008_60e8(param_2);
    iVar3.field_0xa = uVar1;
    iVar3.field_0xc = param_3;
    return;
}

u16 *pass1_1010_379e(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_3730(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

pub fn pass1_1010_3800(u16 *param_1) {
    let mut iVar2: *mut Struct478;
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    iVar2 =  param_1;
    param_1.field_0x0 = addr_table_1010_3b3e;//0x3b3e;
    iVar2.field_0x2 = SEG_1010;
    if (iVar2.field_0x16 != 0x0) {
        fn_ptr_1000_17ce(iVar2.field_0x16, SEG_1000);
    }
    pass1_1010_3880(param_1);
}
pub fn pass1_1010_3880(SegmentAddress *param_1)

{
    let mut pi_var1: *mut i16;
    let mut pu_var2: *mut u32;
    let mut uVar3: u16;
    let mut ppcVar4: *mut *mut c_void;
    long lVar5;
    let mut iVar6: *mut Struct472;
    let mut iVar7: i16;
    let mut uVar8: u16;
    let mut uVar9: u16;
    let mut iStack4: i16;

    uVar8 = (param_1 >> 0x10);
    iVar6 =  param_1;
    param_1.field_0x0 = addr_table_1010_3b3e[8];//0x3b5e;
    iVar6.field_0x2 = SEG_1010;
    if (iVar6.field_0x8 != 0x0) {
        iStack4 = 0x0;
        while (true) {
            pi_var1 = &iVar6.field_0x10;
            if (*pi_var1 == iStack4 || *pi_var1 < iStack4)
                break;
            lVar5 = iVar6.field_0x8;
            uVar9  = (lVar5 >> 0x10);
            iVar7  = lVar5;
            pu_var2 = *(iVar7 + iStack4 * 0x4);
            uVar3 = *(iVar7 + iStack4 * 0x4 + 0x2);
            if ((uVar3 | pu_var2) != 0x0) {
                ppcVar4 = *pu_var2;
                (**ppcVar4)();
            }
            iStack4 = iStack4 + 0x1;
        }
        fn_ptr_1000_17ce( iVar6.field_0x8, SEG_1000);
    }
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar6.field_0x2 = SEG_1008;
    return;
}

u16 *pass1_1010_3af2(u16 *param_1, param_2: u8)

{
    pass1_1010_3800(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1010_3b18(u16 *param_1, param_2: u8)

{
    pass1_1010_3880(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1010_3d38(u16 *param_1, param_2: u8)

{
    let mut unaff_SS: u16;

    param_1 = (param_1 & 0xffff0000 | (param_1 - 0xa));
    pass1_1010_3bde(param_1, unaff_SS);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1010_3e06(u16 *param_1, param_2: u8)

{
    let mut unaff_SS: u16;

    pass1_1010_3dc8(param_1, unaff_SS);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

pub fn pass1_1010_3f00(param_1: *mut Struct481, param_2: u16)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut piVar4: *mut i16;
    let mut iVar5: *mut Struct481;
    let mut uVar5: u16;
    let mut puStack16: *mut u16;
    let mut iStack4: i16;

    uVar5 = (param_1 >> 0x10);
    iVar5 =  param_1;
    param_1.field_0x0 = addr_table_1010_4a46;// 0x4a46; //&PTR_LOOP_1050_4a46;
    iVar5.field_0x2 = SEG_1010;
    iVar5.field_0x20 = addr_table_1010_4a46[15];//0x4a82; //&PTR_LOOP_1050_4a82;
    iVar5.field_0x22 = SEG_1010;
    iStack4 = 0x0;
    do {
        puVar1 = *(&iVar5.field_0x26 + iStack4 * 0x4);
        u_var2 = *(&iVar5.field_0x26 + iStack4 * 0x4 + 0x2);
        if ((u_var2 | puVar1) != 0x0) {
            ppcVar3 = *puVar1;
            (**ppcVar3)();
        }
        iStack4 = iStack4 + 0x1;
    } while(iStack4 < 0x10);
    puVar1 = iVar5.field_0x66;
    u_var2  = iVar5.field_0x68;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    fn_ptr_1000_17ce(iVar5.field_0x70, SEG_1000);
    if(param_1 == 0x0)
    {
        piVar4 = 0x0;
        uVar5  = 0x0;
    }
    else
    {
        piVar4 = &iVar5.field_0x20;
    }
    puStack16   = str_var1(uVar5, piVar4);
    *puStack16  = addr_table_1008_380a[36]; // 0x389a
    piVar4[0x1] = SEG_1008;
    pass1_1010_1d80(param_1, param_2);
    return;
}

Struct11 *pass1_1010_2bbe(param_1: *mut Struct11, param_2: u8)

{
    pass1_1010_29c6(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1010_2c9c(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_1d80(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

pub fn pass1_1010_2db2(param_1: *mut Struct473, param_2: u16)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut param_1_lo: *mut Struct473;
    let mut param_1_hi: u16;

    param_1_hi              = (param_1 >> 0x10);
    param_1_lo              = param_1;
    param_1.offset         = addr_table_1010_36da;//0x36da;
    param_1_lo->base = SEG_1010;
    puVar1           = param_1_lo.field_0x56;
    u_var2            = param_1_lo.field_0x58;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    fn_ptr_1000_17ce(param_1_lo.field_0x5c, SEG_1000);
    pass1_1010_1d80(param_1, param_2);
    return;
}

u16 *pass1_1010_18f4(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_0f76(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1010_1b04(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_0f76(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1010_1cde(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_0f76(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1010_1fbe(u16 *param_1, param_2: u8) {
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1010_1fea(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_1d80(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1010_0e46(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_0350(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1010_0e6c(u16 *param_1, param_2: u8) {
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1008_ea86(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1008_ddca(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1008_eaf4(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_1d80(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_ebda(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_1d80(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1008_ec3c(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_1d80(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1008_ef50(u16 *param_1, param_2: u8)

{
    pass1_1008_ec94(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 *pass1_1008_ef76(param_1: *mut Struct18, param_2: u8)

{
    let mut unaff_SS: u16;

    pass1_1008_ed00(&param_1.field_0x0, unaff_SS);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1010_02a2(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_0052(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1008_d6f4(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1008_caa0(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_d75a(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1010_1d80(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_d968(u16 *param_1, param_2: u8)

{
    let mut unaff_SS: u16;

    pass1_1008_d7da(param_1, unaff_SS);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct11 *pass1_1008_d9d4(param_1: *mut Struct11, param_2: u8)

{
    clenaup_win_ui_1018_4d22(param_1, SEG_1018);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


pub fn pass1_1008_dc2c(u16 *param_1, param_2: u16) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = pass1_1008_dc80;//0xdc80;
    param_1.field_0x2 = SEG_1008;
    fn_ptr_1000_17ce((param_1 + 0x18), SEG_1000);
    pass1_1010_1d80(param_1, param_2);
    return;
}


u16 *pass1_1008_dc5a(u16 *param_1, param_2: u8)

{
    let mut unaff_SS: u16;

    pass1_1008_dc2c(param_1, unaff_SS);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_dd1e(u16 *param_1, param_2: u8) {
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}


pub fn pass1_1008_c626(u32 *param_1)

{
    globals._PTR_LOOP_1050_06e0 = 0x0;
    fn_ptr_1000_17ce(*param_1, SEG_1000);
    return;
}


u32 pass1_1008_ca24(param_1: u32, param_2: u8, param_3: u16)

{
    pass1_1008_c75c(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u32 pass1_1008_bd02(param_1: u32, param_2: u8)

{
    let mut unaff_SS: u16;

    pass1_1008_afde(param_1, unaff_SS);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_bd28(u16 *param_1, param_2: u8)

{
    pass1_1008_b08c(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 *pass1_1008_bd4e(param_1: *mut Struct18, param_2: u8)

{
    pass1_1008_b08c(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 *pass1_1008_bd74(param_1: *mut Struct18, param_2: u8)

{
    pass1_1008_b08c(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 *pass1_1008_bd9a(param_1: *mut Struct18, param_2: u8)

{
    pass1_1008_b08c(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_ad38(u16 *param_1, param_2: u8) {
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}


u32 pass1_1008_ad64(param_1: u32, param_2: u8)

{
    let mut unaff_SS: u16;

    pass1_1008_a086(param_1, unaff_SS);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct11 *pass1_1008_af56(param_1: *mut Struct11, param_2: u8)

{
    pass1_1008_af38(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


pub fn pass1_1008_b08c(u16 *param_1) {
    let mut iVar1: i16;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    param_1.field_0x0 = addr_table_1008_bdc0[2];//0xbdc8;
    (iVar1 + 0x2) = SEG_1008;
    fn_ptr_1000_17ce((iVar1 + 0x4), SEG_1000);
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
}


pub fn pass1_1008_b1a6(param_1: *mut Struct467, char *param_2)

{
    long         lVar1;
    let mut u_var2: u16;
    let mut in_DX: u16;
    let mut iVar3: *mut Struct467;
    let mut iVar4: *mut Struct466;
    let mut uVar3: u16;
    let mut uVar4: u16;

    uVar3 = (param_1 >> 0x10);
    iVar3 = param_1;
    if(iVar3.field_0x16 != 0x0)
    {
        lVar1 = iVar3.field_0x16;
        fn_ptr_1000_17ce((lVar1 + 0x4), SEG_1000);
        u_var2             = str_op_1008_60e8(param_2);
        lVar1             = iVar3.field_0x16;
        uVar4             = (lVar1 >> 0x10);
        iVar4             = lVar1;
        iVar4.field_0x4  = u_var2;
        iVar4.field_0x6  = in_DX;
        iVar3.field_0x16 = 0x0;
    }
    return;
}

pub fn pass1_1008_9466(u16 *param_1) {
    param_1.field_0x0 = 0x52a;
    param_1.field_0x2 = SEG_1008;
    fn_ptr_1000_17ce(globals.ptr_1050_0392, SEG_1000);
    globals.ptr_1050_0392 =  0x0;
    return;
}


u16 *pass1_1008_9d02(u16 *param_1, param_2: u8) {
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}


Struct11 *pass1_1008_9f80(param_1: *mut Struct11, param_2: u8)

{
    param_1 = (param_1 & 0xffff0000 | (param_1 - 0x1c));
    pass1_1008_9e5a(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u32 pass1_1008_87a2(param_1: u32, param_2: u8)

{
    pass1_1008_8168(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


pub fn pass1_1008_8aa2(u16 *param_1)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut ppcVar4: *mut *mut c_void;
    let mut uVar5: u32;
    let mut iVar6: *mut Struct462;
    let mut uVar6: u16;
    let mut paStack16: *mut Struct18;

    uVar6 = (param_1 >> 0x10);
    iVar6 =  param_1;
    param_1.field_0x0 = addr_table_1008_8e9a;//0x8e9a;
    iVar6.field_0x2 = SEG_1008;
    uVar5 = &iVar6.field_0x4;
    if ((uVar5 + 0x1c) != 0x0) {
        puVar1 = iVar6.field_0x4;
        u_var2 = iVar6.field_0x6;
        if ((u_var2 | puVar1) != 0x0) {
            ppcVar4 = *puVar1;
            (**ppcVar4)();
        }
    }
    u_var2 = iVar6.field_0x3a;
    uVar3 = iVar6.field_0x3c;
    paStack16 = str_var1(uVar3, u_var2);
    if ((uVar3 | u_var2) != 0x0) {
        pass1_1008_5118(str_var1(uVar3, u_var2));
        fn_ptr_1000_17ce(paStack16, SEG_1000);
    }
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar6.field_0x2 = SEG_1008;
    return;
}


u16 *pass1_1008_8e74(u16 *param_1, param_2: u8)

{
    pass1_1008_8aa2(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


pub fn pass1_1008_8f24(u16 *param_1)

{
    let mut puVar1: *mut u32;
    let mut pu_var2: *mut u32;
    let mut uVar3: u16;
    let mut ppcVar4: *mut *mut c_void;
    let mut uVar5: u32;
    let mut iVar6: *mut Struct463;
    let mut iVar7: i16;
    let mut iVar8: i16;
    let mut uVar9: u16;
    let mut uVar10: u16;
    let mut u_stack6: u32;

    uVar9 = (param_1 >> 0x10);
    iVar6 =  param_1;
    param_1.field_0x0 = addr_table_1008_9170;//0x9170;
    iVar6.field_0x2 = SEG_1008;
    if (iVar6.field_0x1a_addr_offset != 0x0) {
        u_stack6 = 0x0;
        while (true) {
            puVar1 = &iVar6.field_0xa;
            if (*puVar1 < u_stack6 || *puVar1 == u_stack6)
                break;
            iVar8 = u_stack6 * 0x4;
            uVar5  = iVar6.field_0x6;
            uVar10 = (uVar5 >> 0x10);
            iVar7  = uVar5;
            pu_var2 = *(iVar7 + iVar8);
            uVar3 = *(iVar7 + iVar8 + 0x2);
            if ((uVar3 | pu_var2) != 0x0) {
                ppcVar4 = *pu_var2;
                (**ppcVar4)();
            }
            u_stack6 = u_stack6 + 0x1;
        }
    }
    fn_ptr_1000_17ce( iVar6.field_0x6, SEG_1000);
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar6.field_0x2 = SEG_1008;
    return;
}


u16 *pass1_1008_914a(u16 *param_1, param_2: u8)

{
    pass1_1008_8f24(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_93c0(u16 *param_1, param_2: u8) {
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_93ec(u16 *param_1, param_2: u8)

{
    let mut unaff_CS: u16;

    kill_timer_1008_921c(param_1, unaff_CS);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


pub fn pass1_1008_766e(param_1: u32, param_2: *mut u32, param_3: u16, param_4: u16, u8 *param_5)

{
    let mut puVar1: *mut u32;
    let mut pu_var2: *mut u8;
    let mut local_6: u32;

    *param_2 = 0x0;
    local_6  = 0x0;
    puVar1   = &local_6;
    file_1008_76e4(param_1, (long *)str_var1(param_3, puVar1), param_4, param_3, param_5);
    if(puVar1 != 0x0)
    {
        if(local_6 != 0x0)
        {
            mem_op_1000_179c(NULL, 0xc, SEG_1000);
            pu_var2 = (param_5 | puVar1);
            if(pu_var2 == 0x0)
            {
                puVar1 = 0x0;
                pu_var2 = 0x0;
            }
            else
            {
                pass1_1010_8ef2(str_var1(param_5, puVar1), pu_var2, param_3);
            }
            param_2 = puVar1;
            (param_2 + 0x2)  = pu_var2;
            fn_ptr_1010_905e(*param_2, local_6);
        }
        return;
    }
    return;
}

pub fn pass1_1008_7ffa(u16 *param_1, param_2: u8) {
    let mut uVar1: *mut Struct461;
    let mut u_var2: u16;

    uVar1 =  param_1;
    uVar1 = uVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(uVar1)));
    u_var2 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    uVar1.field_0x2 = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    uVar1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return;
}


pub fn pass1_1008_6732(u16 *param_1) {
    long lVar1;
    let mut iVar2: *mut Struct457;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    iVar2 =  param_1;
    param_1.field_0x0 = addr_table_1008_685a;
    _//0x685a;
    iVar2.field_0x2 = SEG_1008;
    if (iVar2.field_0x10 != 0x0) {
        lVar1 = iVar2.field_0x10;
        call_fn_ptr_1000_0dc6(lVar1, (lVar1 >> 0x10), SEG_1000);
    }
    iVar2.field_0x10 = 0x0;
    pass1_1008_41bc(param_1);
    return;
}


u32 pass1_1008_6834(param_1: u32, param_2: u8)

{
    pass1_1008_6732(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_6b5a(u16 *param_1, param_2: u8) {
    u32 * puVar1;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut uVar4: *mut Struct458;
    let mut uVar5: u16;

    uVar5 = (param_1 >> 0x10);
    uVar4 =  param_1;
    param_1.field_0x0 = addr_table_1008_6bfc[35];//0x6c8c;
    uVar4.field_0x2 = SEG_1008;
    puVar1 = uVar4.field_0x4;
    u_var2 = uVar4.field_0x6;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    uVar4.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}


pub fn pass1_1008_6bb4(u16 *param_1, param_2: u8) {
    let mut uVar1: *mut Struct459;
    let mut u_var2: u16;

    uVar1 =  param_1;
    uVar1 = uVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(uVar1)));
    u_var2 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    uVar1.field_0x2 = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    uVar1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return;
}


u16 *pass1_1008_5b9a(u16 *param_1, param_2: u8)

{
    pass1_1008_57c4(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u32 pass1_1008_5fa2(param_1: u32, param_2: u8)

{
    pass1_1008_5c34(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


pub fn pass1_1008_6330(u16 *param_1, param_2: u8) {
    let mut uVar1: *mut Struct456;
    let mut u_var2: u16;

    uVar1 =  param_1;
    uVar1 = uVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(uVar1)));
    u_var2 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    uVar1.field_0x2 = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    uVar1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return;
}


pub fn pass1_1008_4cdc(u16 *param_1) {
    let mut iVar2: *mut Struct454;
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    iVar2 =  param_1;
    param_1.field_0x0 = addr_table_1008_4f1c;//0x4f1c;
    iVar2.field_0x2 = SEG_1008;
    fn_ptr_1000_17ce( iVar2.field_0xe, SEG_1000);
    if (iVar2.field_0x12 != 0x0) {
        fn_ptr_1000_17ce( iVar2.field_0x4, SEG_1000);
    }
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar2.field_0x2 = SEG_1008;
    return;
}


u16 *pass1_1008_4ef6(u16 *param_1, param_2: u8)

{
    pass1_1008_4cdc(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_507c(u16 *param_1, param_2: u8)

{
    pass1_1008_41bc(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

pub fn pass1_1008_5118(param_1: u32)

{
    let mut uVar1: u32;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x10) != 0x0)
    {
        uVar1 = (param_1 + 0x10);
        call_fn_ptr_1000_0dc6(uVar1, (uVar1 >> 0x10), SEG_1000);
    }
    return;
}


u16 *pass1_1008_570e(u16 *param_1, param_2: u8) {
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass_1008_3d44(u16 *param_1, param_2: u8) {
    let mut uVar1: *mut Struct453;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    uVar1 =  param_1;
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    uVar1.field_0x2 = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    uVar1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}


pub fn pass1_1008_41bc(u16 *param_1) {
    u32 * puVar1;
    let mut u_var2: u16;
    long lVar3;
    let mut ppcVar4: *mut *mut c_void;
    let mut iVar5: *mut Struct288;
    let mut uVar5: u16;

    uVar5 = (param_1 >> 0x10);
    iVar5 =  param_1;
    param_1.field_0x0 = pass1_1008_48de;//0x48de;//&PTR_LOOP_1050_48de;
    iVar5.field_0x2 = SEG_1008;
    puVar1 = iVar5.field_0xa;
    u_var2 = iVar5.field_0xc;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar4 = *puVar1;
        (**ppcVar4)();
    }
    if (iVar5.field_0x6 != 0x0) {
        lVar3 = iVar5.field_0x6;
        call_fn_ptr_1000_0dc6(lVar3, (lVar3 >> 0x10), SEG_1000);
    }
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar5.field_0x2 = SEG_1008;
    return;
}


u16 *pass1_1008_48b8(u16 *param_1, param_2: u8)

{
    pass1_1008_41bc(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_377e(u16 *param_1, param_2: u8) {
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_37aa(u16 *param_1, param_2: u8) {
    let mut uVar1: *mut Struct450;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    uVar1 =  param_1;
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    uVar1.field_0x2 = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    uVar1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}


u32 pass1_1008_37e4(param_1: u32, param_2: u8)

{
    cleanup_ui_op_1008_0618(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_3a14(u16 *param_1, param_2: u8) {
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_3a40(u16 *param_1, param_2: u8) {
    let mut uVar1: *mut Struct451;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    uVar1 =  param_1;
    param_1.field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    uVar1.field_0x2 = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    uVar1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}


u32 pass1_1008_3a7a(param_1: u32, param_2: u8)

{
    pass1_1008_397a(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


pub fn pass1_1008_3afe(u16 *param_1, param_2: u8) {
    let mut iVar1: i16;
    let mut u_var2: u16;

    iVar1 = param_1;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0xd2)));
    u_var2 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    (iVar1 + 0x2) = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return;
}

pub fn pass1_1008_0036(param_1: *mut Struct449, param_2: u16)

{
    let mut uVar1: u16;
    let mut pu_var2: *mut u32;
    let mut paVar3: *mut Struct18;
    let mut ppcVar4: *mut *mut c_void;
    let mut uVar5: u16;
//    Struct449 *iVar6;
//    u16          uVar6;

//    uVar6            = (param_1 >> 0x10);
//    iVar6            = param_1;
    param_1.field_0x0         = addr_table_1008_051e;
    param_1.field_0x2 = SEG_1008;
    paVar3           = &param_1.field_0x8;
    uVar1            = param_1.field_0xa;
    uVar5            = paVar3;
    if((uVar1 | uVar5) != 0x0)
    {
        pass1_1008_53aa(uVar5, uVar1);
        param_2 = SEG_1000;
        fn_ptr_1000_17ce(paVar3, SEG_1000);
    }
    paVar3                       = globals._PTR_LOOP_1050_5748;
    globals._PTR_LOOP_1050_0298 = 0x0;
    if(globals._PTR_LOOP_1050_5748 != 0x0)
    {
        pass1_1030_8210(&_PTR_LOOP_1050_5748->fld0_addr_table);
        param_2 = SEG_1000;
        fn_ptr_1000_17ce(paVar3, SEG_1000);
    }
    paVar3 = globals.u16_1050_0ed0;
    if(globals.u16_1050_0ed0 != 0x0)
    {
        pass1_1010_2050(globals.u16_1050_0ed0);
        param_2 = SEG_1000;
        fn_ptr_1000_17ce(paVar3, SEG_1000);
    }
    paVar3 = globals.dat_1050_14cc;
    ifglobals.dat_1050_14cc != 0x0)
    {
        pass1_1010_7efcglobals.dat_1050_14cc, SEG_1010);
        param_2 = SEG_1000;
        fn_ptr_1000_17ce(paVar3, SEG_1000);
    }
    paVar3 = globals.ptr_1050_5b7c;
    if(globals.ptr_1050_5b7c != 0x0)
    {
        pass1_1038_af34();
        param_2 = SEG_1000;
        fn_ptr_1000_17ce(paVar3, SEG_1000);
    }
    if(globals._PTR_LOOP_1050_5bc8 != 0x0)
    {
        ppcVar4 = *_PTR_LOOP_1050_5bc8;
        (**ppcVar4)(param_2, globals._PTR_LOOP_1050_5bc8, (globals._PTR_LOOP_1050_5bc8 >> 0x10), 0x1);
    }
    if(globals._PTR_LOOP_1050_02a0 != 0x0)
    {
        ppcVar4 = *_PTR_LOOP_1050_02a0;
        (**ppcVar4)(param_2, globals._PTR_LOOP_1050_02a0, (globals._PTR_LOOP_1050_02a0 >> 0x10), 0x1);
    }
    pu_var2 = param_1.field_0x4;
    uVar1  = param_1.field_0x6;
    if((uVar1 | pu_var2) != 0x0)
    {
        ppcVar4 = *pu_var2;
        (**ppcVar4)(param_2, pu_var2, uVar1, 0x1);
    }
    pass1_1008_9466(param_1);
}


u16 *pass1_1008_04d2(u16 *param_1, param_2: u8)

{
    pass1_1008_9466(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 *pass1_1008_04f8(u16 *param_1, param_2: u8, param_3: u16)

{
    pass1_1008_0036(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void fn_ptr_op_1000_24cd(globals: &mut Globals, param_1: u16, i16 param_2)

{
    let mut fn_ptr_1: *mut c_void;
    let mut iVar2: i16;
    let mut uVar6: u16;
    char            cVar7;
    let mut uVar5: u16;
    let mut uVar3: u16;
    let mut uVar4: u16;

    iVar2                             = param_2 + 0x1;
    uVar5                             = SEG_1050;
    globals.data_1050_5fc9           = 0x0;
    uVar6                             = 0x0;
    fn_ptr_op_1000_2594(0x68b6, 0x68b6);
    fn_ptr_op_1000_2594(globals.ptr_1050_6210, 0x620c);
    ret_op_1000_55ac(param_1, uVar6, uVar5, iVar2);
    cVar7 = uVar6;
    fn_ptr_op_1000_2594(globals.ptr_1050_6210, globals.ptr_1050_6210);
    fn_ptr_op_1000_2594(globals.ptr_1050_6210, globals.ptr_1050_6210);
    set_interrupt_vector_1000_256b(globals);
    if(cVar7 == '\0')
    {
        // AH = 0x4c --> terminate process with return code
        fn_ptr_1 = swi(DOS_INT_21);
        ((DosInt21TerminateProcWithRetCode)fn_ptr_1)(0);
    }
}


pub fn pass1_1000_24db(globals: &mut Globals, param_1: u16, param_2: u16)

{
    let mut fn_ptr_1: *mut c_void;
    let mut i16_var2: i16;
    let mut u16_var3: u16;
    let mut u16_var4: u16;

    i16_var2                          = param_2 + 0x1;
    u16_var4                          = SEG_1050;
    globals.data_1050_5fc9           = 0x0;
    u16_var3                          = 0x1;
    fn_ptr_op_1000_2594(&globals.ptr_1050_6210, &globals.ptr_1050_6210);
    fn_ptr_op_1000_2594(&globals.ptr_1050_6210, &globals.ptr_1050_6210);
    set_interrupt_vector_1000_256b(globals, u16_var3);
    if(u16_var3 == '\0')
    {
        // AH = 0x45, duplicate file handle
        //
        fn_ptr_1 = swi(0x21);
        ((DosInt21DuplicateFileHandle)(fn_ptr_1))();
    }
}


void fn_ptr_op_1000_2594(FnPtr1 *param_1, FnPtr1 *param_2)

{
    FnPtr1 *ppcVar1;
    FnPtr1 *ppcVar2;
    FnPtr1 *fn_ptr_1;

    while(param_2 < param_1)
    {
        ppcVar2 = param_1 + -0x2;
        ppcVar1 = param_1 + -0x1;
        param_1 = ppcVar2;
        if((*ppcVar2 | *ppcVar1) != 0x0)
        {
            fn_ptr_1 = ppcVar2;
            (**fn_ptr_1)();
        }
    }
}


BOOL16 call_fn_ptr_1000_0dc6(param_1: u16, param_2: u16, param_3: u16)

{
    if((*&PTR_LOOP_1050_000c & 0xfff8) != 0xcad0)
    {
        pass1_1000_1e61(NULL, param_3, 0xe, 0x0, 0x0);
        return 0x0;
    }
    (**0x8)(SEG_1050);
    return 0x1;
}


pub fn pass1_1000_16ee(param_1: u16, param_2: u16, param_3: u16)

{
    if((param_2 | param_1) != 0x0)
    {
        call_fn_ptr_1000_0dc6(param_1, param_2, param_3);
    }
    return;
}


u16 fn_ptr_op_1000_1708(param_1: u16, param_2: u16, param_3: u16, param_4: u16, param_5: u16, param_6: u16)

{
    let mut iVar1: i16;
    let mut bVar2: bool;
    long lVar3;

    if((param_2 | param_1) == 0x0)
    {
        bVar2   = 0xfffe < param_1;
        param_1 = param_1 + 0x1;
        param_2 = param_2 + bVar2;
    }
// LAB_1000_1724:
    do
    {
        if((param_5 | param_4) != 0x0)
        {
            lVar3 = mem_op_1000_0a48((u8)param_3, param_1, param_2, str_var1(param_5, param_4), param_6);
            if(lVar3 != 0x0)
            {
                return lVar3;
            }
        }
        if(((param_3 & 0x8000) == 0x0) || ((globals.PTR_LOOP_1050_5f3a | globals.PTR_LOOP_1050_5f38) == 0x0))
        {
            if((globals.PTR_LOOP_1050_5f36 | globals.PTR_LOOP_1050_5f34) == 0x0)
            {
                if((globals.PTR_LOOP_1050_5f3e | globals.PTR_LOOP_1050_5f3c) == 0x0)
                {
                    return 0x0;
                }
                (*(FnPtr1)PTR_LOOP_1050_5f3c)();
                goto LAB_1000_1724;
            }
            iVar1 = (*(FnPtr1)PTR_LOOP_1050_5f34)();
        }
        else
        {
            iVar1 = (*(FnPtr1)PTR_LOOP_1050_5f38)(param_6, param_1);
        }
        if(iVar1 == 0x0)
        {
            return 0x0;
        }
    } while(true);
}


void mem_op_1000_179c(globals: &mut Globals, param_1: u16, param_3: u16) {
    let mut puVar1: *mut u8;
    let mut pu_var2: *mut u8;

    puVar1 = globals.dat_1050_5f2c;
    pu_var2 = globals.dat_1050_5f2e;
    if ((globals.dat_1050_5f2e | globals.dat_1050_5f2c) == 0x0) {
        puVar1 = mem_op_1000_160a(NULL, param_3, param_2);
        pu_var2 = param_2;
    }
    fn_ptr_op_1000_1708(param_1, 0x0, 0x0, puVar1, pu_var2, param_3);
    return;
}


pub fn pass1_1000_18d2(param_1: u16, param_2: u16, param_3: u16)

{
    if((param_2 | param_1) != 0x0)
    {
        call_fn_ptr_1000_0dc6(param_1, param_2, param_3);
    }
    return;
}

#pragma clang diagnostic pop
