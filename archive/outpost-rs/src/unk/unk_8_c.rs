// #include "unk_8.h"

// #include "address_tables/function_tables.h"
// #include "globals.h"
// #include "op_int.h"
// #include "op_windef.h"
// #include "struct_20.h"

pub fn pass1_1028_5b42(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16, param_5: u16) {
    let mut ppcVar1: *mut *mut c_void;
    let mut u_var2: u16;
    let mut uVar3: u32;
    let mut iVar4: i16;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x12) != 0x6) {
        return;
    }
    uVar3 = pass1_1028_b4f2(param_1);
    if((uVar3 + 0x200) != 0x8000002) {
        if((param_1 + 0x1c) == 0x8000002) {
            iVar4 = 0x6;
            goto code_r0x10285bbe;
        }
        ppcVar1 = (*param_1 + 0x64);
        iVar4   = (**ppcVar1)(param_4, param_1);
        if(iVar4 == 0x0) {
            return;
        }
        pass1_1028_c0f0(param_1, 0x2, iVar4, param_2, param_3, param_5);
        if(iVar4 == 0x0) {
            iVar4 = 0x6;
            goto code_r0x10285bbe;
        }
        pass1_1028_c952(param_1, param_2, param_3, param_5);
        pass1_1028_c00a(param_1, 0x2, iVar4, param_5);
    }
    iVar4 = 0x5;
code_r0x10285bbe:
    pass1_1028_bdac(param_1, iVar4, param_4);
    return;
}


u16 * pass1_1028_5e18(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  s_thisHi_1050_5e6f + 0x1;
    param_1.fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_5f00(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    (param_1 + 0x20)           = 0x0;
    param_1 =  0x6054;
    param_1.fld2_segment      = SEG_1028;
    return param_1;
}


void  pass1_1028_5f34(param_1: u16, param_2: i16, param_3: u16, param_4: u16, param_5: u16, param_6: u16) {
    let mut pi_var1: *mut i16;
    let mut u_var2: u32;
    let mut BVar3: BOOL16;
    let mut uVar4: u32;
    let mut extraout_DX: u16;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut iVar7: i16;

    pass1_1028_be9e((param_2 + 0x6), param_3, param_4, param_5, param_6);
    uVar4 = *(param_2 + 0x6);
    uVar6 = (uVar4 >> 0x10);
    if((uVar4 + 0x12) == 0x5) {
        (uVar4 + 0x20) = 0x64;
        pass1_1028_b58e(uVar4);
        (param_2 + -0x4) = param_1;
        (param_2 + -0x2) = extraout_DX;
        u_var2            = (param_2 + -0x4);
        uVar4            = *(u_var2 + 0x2e);
        iVar7            = 0x61;
        uVar5            = extraout_DX;
        pass1_1038_3fb0(uVar4);
        BVar3 = pass1_1030_25b2(uVar4 & 0xffff | uVar5 << 0x10, iVar7);
        if(BVar3 != 0x0) {
            u_var2   = (param_2 + 0x6);
            pi_var1  = (u_var2 + 0x20);
            *pi_var1 = *pi_var1 + 0x64;
        }
    }
    return;
}


void  pass1_1028_6008(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16, param_5: u16) {
    let mut pi_var1: *mut i16;
    let mut iVar2: i16;
    let mut uVar3: u16;

    pass1_1028_be2a(param_1, param_2, param_3, param_4, param_5);
    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(((iVar2 + 0x12) == 0x5) && (0x0 < (iVar2 + 0x20))) {
        pi_var1  = (iVar2 + 0x20);
        *pi_var1 = *pi_var1 + -0x1;
    }
    return;
}


u32  pass1_1028_62c8(param_1: u32, param_2: u16) {
    let mut uVar1: u16;
    let mut u_var2: u32;

    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x12) == 0x5) {
        u_var2 = pass1_1028_67d4(param_1 & 0xffff | uVar1 << 0x10, param_2);
        uVar1 = u_var2;
        if(((u_var2 >> 0x10) == 0x0) && (uVar1 < 0x64)) {
            return str_var1(-(0x64 < uVar1), 0x64 - uVar1);
        }
    }
    return 0x0;
}


// WARNING: Could not reconcile some variable overlaps

u32  pass1_1028_6302(param_1: u32, param_2: u16) {
    let mut uVar1: u16;
    let mut u_var2: u16;
    long lVar3;
    let mut uStack18: u32;
    let mut local_a: [u8;8] = [0;8];

    pass1_1008_5784(str_var1(param_2, local_a), *(param_1 + 0x20));
    uStack18 = 0x0;
    while(true) {
        lVar3 = pass1_1008_5b12(local_a, param_2);
        u_var2 = (lVar3 >> 0x10);
        if(lVar3 == 0x0)
            break;
        if((lVar3 + 0x8) != 0x0) {
            uVar1    = (lVar3 + 0xa);
            uStack18 = str_var1((uStack18 >> 0x10) + CARRY2(uStack18, uVar1), uStack18 + uVar1);
        }
    }
    return uStack18;
}


u16 * pass1_1028_408e(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x42ec;
    param_1.fld2_segment = SEG_1028;
    return param_1;
}


void  pass1_1028_40b8(param_1: u32, param_2: u16, param_3: u16) {
    let mut ppcVar1: *mut *mut c_void;
    let mut pu_var2: *mut u32;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut extraout_DX: u16;
    let mut uVar5: u16;
    let mut uVar6: u32;
    let mut puVar7: *mut u32;
    let mut uStack54: u32;
    let mut local_2c: [u8;6] = [0;6];
    let mut puStack38: *mut u32;
    let mut uStack34: u32;
    let mut puStack26: *mut u32;
    let mut uStack24: u32;
    let mut local_14: u32;
    let mut iStack16: i16;
    let mut iStack14: i16;
    let mut local_c: u32;
    let mut iStack8: i16;
    let mut u_stack6: u16;
    let mut uStack4: u16;

    pass1_1028_b58e(param_1);
    local_14  = (param_2 + 0xc);
    iStack8   = (param_2 + 0x10);
    puStack26 = &local_c;
    uStack34  = str_var1(uStack34, &local_14);
    iStack16  = iStack8 + 0x1;
    puVar7    = str_var1(param_3, local_2c);
    iStack14  = iStack16;
    local_c   = local_14;
    u_stack6   = param_2;
    uStack4   = extraout_DX;
    uVar6     = pass1_1028_bb24(param_1);
    uVar5     = (uVar6 >> 0x10);
    pu_var2    = &local_14;
    pass1_1030_64ce(param_3, pu_var2, uVar5, globals._PTR_LOOP_1050_5740,
                    str_var1(param_3, pu_var2), uVar6 & 0xffff | uVar5 << 0x10, puVar7);
    uStack34       = *pu_var2;
    uVar5          = (pu_var2 + 0x2);
    uStack54._3_1_ = (u8)(uStack34 >> 0x18);
    uVar3          = uStack54._3_1_;
    uStack24       = uStack34;
    if(uStack54._3_1_ != 0x0) {
        pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uStack34, uVar5);
        uStack54 = str_var1(uVar5, uVar3);
        uVar4    = pass1_1030_6fa0(str_var1(uVar5, uVar3));
        if(uVar4 == 0x64) {
            puStack38 = struct_op_1030_73a8(uStack54);
            ppcVar1   = (*puStack38 + 0x58);
            (**ppcVar1)();
        }
    }
    pass1_1028_b514(param_1);
    return;
}


void  pass1_1028_41ea(param_1: u32, param_2: i16, param_3: u16) {
    let mut ppcVar1: *mut *mut c_void;
    let mut pu_var2: *mut u32;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut extraout_DX: u16;
    let mut uVar5: u16;
    let mut uVar6: u32;
    let mut puVar7: *mut u32;
    let mut uStack54: u32;
    let mut local_2c: [u8;6] = [0;6];
    let mut puStack38: *mut u32;
    let mut uStack34: u32;
    let mut puStack26: *mut u32;
    let mut uStack24: u32;
    let mut local_14: u32;
    let mut iStack16: i16;
    let mut iStack14: i16;
    let mut local_c: u32;
    let mut iStack8: i16;
    let mut iStack6: i16;
    let mut uStack4: u16;

    pass1_1028_b514(param_1);
    pass1_1028_b58e(param_1);
    local_14  = (param_2 + 0xc);
    iStack8   = (param_2 + 0x10);
    puStack26 = &local_c;
    uStack34  = str_var1(uStack34, &local_14);
    iStack16  = iStack8 + 0x1;
    puVar7    = str_var1(param_3, local_2c);
    iStack14  = iStack16;
    local_c   = local_14;
    iStack6   = param_2;
    uStack4   = extraout_DX;
    uVar6     = pass1_1028_bb24(param_1);
    uVar5     = (uVar6 >> 0x10);
    pu_var2    = &local_14;
    pass1_1030_64ce(param_3, pu_var2, uVar5, globals._PTR_LOOP_1050_5740,
                    str_var1(param_3, pu_var2), uVar6 & 0xffff | uVar5 << 0x10, puVar7);
    uStack34       = *pu_var2;
    uVar5          = (pu_var2 + 0x2);
    uStack54._3_1_ = (u8)(uStack34 >> 0x18);
    uVar3          = uStack54._3_1_;
    if(uStack54._3_1_ != 0x0) {
        uStack24 = uStack34;
        pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uStack34, uVar5);
        uStack54 = str_var1(uVar5, uVar3);
        uVar4    = pass1_1030_6fa0(str_var1(uVar5, uVar3));
        if(uVar4 == 0x64) {
            puStack38 = struct_op_1030_73a8(uStack54);
            ppcVar1   = (*puStack38 + 0x24);
            (**ppcVar1)();
        }
    }
    return;
}


u16 * pass1_1028_4376(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x446a;
    param_1.fld2_segment = SEG_1028;
    return param_1;
}


u16  pass1_1028_43a0(param_1: u32) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    if(((param_1 + 0x12) != 0x6) && ((param_1 + 0x12) != 0x5)) {
        return 0x0;
    }
    return 0x1;
}


u16 * pass1_1028_44fe(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    (param_1 + 0x20)           = 0x0;
    param_1 =  0x4836;
    param_1.fld2_segment      = SEG_1028;
    return param_1;
}


void  pass1_1028_4530(u16 *param_1) {
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: i16;
    let mut uVar5: u16;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    param_1.fld0_addr_table = addr_table_1028_4836;//0x4836;
    (iVar4 + 0x2) = SEG_1028;
    puVar1 = (iVar4 + 0x20);
    u_var2 = (iVar4 + 0x22);
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    pass1_1028_b418(param_1);
    return;
}


void  pass1_1028_456e(param_1: u32, param_2: u32, param_3: u16) {
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: i16;
    let mut uVar5: u16;

    pass1_1028_b46e(param_1, param_2, param_3);
    uVar5  = (param_1 >> 0x10);
    iVar4  = param_1;
    puVar1 = (iVar4 + 0x20);
    u_var2  = (iVar4 + 0x22);
    if((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    (iVar4 + 0x20) = 0x0;
    return;
}


void  pass1_1028_45b0(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16, param_5: u16) {
    let mut uVar1: u16;
    let mut u_var2: u32;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut iVar5: i16;

    pass1_1028_be9e(param_1, param_2, param_3, param_4, param_5);
    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x12) == 0x5) {
        uVar4 = 0x0;
        iVar5 = 0x4;
        uVar3 = 0x2;
        u_var2 = pass1_1028_b58e(param_1 & 0xffff | uVar1 << 0x10);
        pass1_1030_7c50(u_var2, str_var1(uVar4, uVar3), iVar5, u_var2, (u_var2 >> 0x10));
    }
    return;
}


u32  pass1_1028_45e2(param_1: u32, param_2: u16, param_3: i16, param_4: u16) {
    pass1_1028_478a(param_1, param_2, param_4);
    return str_var1(-(0x3e8 < param_2) - param_3, 0x3e8 - param_2);
}


u16  pass1_1028_4768(param_1: u32, param_2: u16, param_3: i16, param_4: u16) {
    pass1_1028_478a(param_1, param_2, param_4);
    if((param_3 == 0x0) && (param_2 < 0x3e8)) {
        return 0x0;
    }
    return 0x1;
}


// WARNING: Could not reconcile some variable overlaps

void  pass1_1028_478a(param_1: u32, param_2: i16, param_3: u16) {
    let mut extraout_DX: u16;
    long       local_1e;
    i16        local_1a[0x4];
    let mut uStack18: u16;
    let mut uStack16: u16;
    long       lStack14;
    let mut puStack10: *mut u32;
    let mut u_stack6: u32;

    pass1_1028_b58e(param_1);
    u_stack6   = str_var1(extraout_DX, param_2);
    puStack10 = (param_2 + 0x22);
    lStack14  = 0x0;
    if(((param_2 + 0x24) | puStack10) == 0x0) {
        return;
    }
    uStack16 = (puStack10 + 0x4);
    for(uStack18 = 0x0; uStack18 < uStack16; uStack18 = uStack18 + 0x1) {
        pass1_1020_bb16(puStack10, str_var1(param_3, &local_1e), str_var1(param_3, local_1a), uStack18);
        if(0x0 < local_1a[0]) {
            lStack14 = lStack14 + local_1e;
        }
    }
    return;
}


u16 * pass1_1028_48c0(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  &PTR_LOOP_1050_4942;
    param_1.fld2_segment      = SEG_1028;
    (param_1 + 0xe)            = (param_1 + 0xc);
    (param_1 + 0x10)           = (param_1 + 0xc);
    return param_1;
}


void  pass1_1028_48fa(param_1: *mut u32, param_2: u16) {
    pass1_1028_bdac(param_1, 0x0, param_2);
    return;
}


u32  pass1_1028_49de(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x4b1c;
    param_1.fld2_segment = SEG_1028;
    pass1_1000_4906(str_var1(param_2, param_1 + 0x20), 0x0, 0xa);
    return param_1;
}


u16  pass1_1028_4a9a(param_1: u32, i16 param_2) {
    return (param_1 + 0x20 + param_2 * 0x2);
}


void  pass1_1028_4ab2(param_1: u32, param_2: u16, i16 param_3) {
    (param_1 + param_3 * 0x2 + 0x20) = param_2;
    return;
}


u16 * pass1_1028_4ba6(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  s_SCi16ernalPutBldg2_site_0x_08lx__1050_506f + 0x1;
    param_1.fld2_segment = SEG_1028;
    return param_1;
}


u16  pass1_1028_4bd0(param_1: u32) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    if(((param_1 + 0x12) != 0x6) && ((param_1 + 0x12) != 0x5)) {
        return 0x0;
    }
    return 0x1;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_4bf2(param_1: u32, param_2: u32, param_3: i16, param_4: u16) {
    let mut ppcVar1: *mut *mut c_void;
    let mut pu_var2: *mut u32;
    let mut uVar3: u16;
    let mut extraout_DX: u16;
    let mut uVar4: u16;
    let mut uVar5: u32;
    let mut puVar6: *mut u32;
    let mut uStack54: u32;
    let mut local_2c: [u8;6] = [0;6];
    let mut puStack38: *mut u32;
    let mut uStack34: u32;
    let mut puStack26: *mut u32;
    let mut uStack24: u32;
    let mut local_14: u32;
    let mut iStack16: i16;
    let mut iStack14: i16;
    let mut local_c: u32;
    let mut iStack8: i16;
    let mut iStack6: i16;
    let mut uStack4: u16;

    pass1_1028_b58e(param_1);
    local_14  = (param_3 + 0xc);
    iStack8   = (param_3 + 0x10);
    puStack26 = &local_c;
    uStack34  = str_var1(uStack34, &local_14);
    iStack16  = iStack8 + 0x1;
    puVar6    = str_var1(param_4, local_2c);
    iStack14  = iStack16;
    local_c   = local_14;
    iStack6   = param_3;
    uStack4   = extraout_DX;
    uVar5     = pass1_1028_bb24(param_1);
    uVar4     = (uVar5 >> 0x10);
    pu_var2    = &local_14;
    pass1_1030_64ce(param_4, pu_var2, uVar4, globals._PTR_LOOP_1050_5740,
                    str_var1(param_4, pu_var2), uVar5 & 0xffff | uVar4 << 0x10, puVar6);
    uStack34       = *pu_var2;
    uVar4          = (pu_var2 + 0x2);
    uStack54._3_1_ = (u8)(uStack34 >> 0x18);
    uVar3          = uStack54._3_1_;
    uStack24       = uStack34;
    if(uStack54._3_1_ != 0x0) {
        pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uStack34, uVar4);
        uStack54 = str_var1(uVar4, uVar3);
        uVar3    = pass1_1030_6fa0(str_var1(uVar4, uVar3));
        if((uVar3 == 0x62) || (uVar3 == 0x63)) {
            puStack38 = struct_op_1030_73a8(uStack54);
            uVar3     = puStack38;
            ppcVar1   = (*puStack38 + 0x58);
            (**ppcVar1)();
        }
    }
    pass1_1028_b46e(param_1, param_2, uVar3);
    return;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_4cd6(param_1: u32, param_2: i16, param_3: u16) {
    let mut ppcVar1: *mut *mut c_void;
    let mut pu_var2: *mut u32;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut extraout_DX: u16;
    let mut uVar5: u16;
    let mut uVar6: u32;
    let mut puVar7: *mut u32;
    let mut uStack54: u32;
    let mut local_2c: [u8;6] = [0;6];
    let mut puStack38: *mut u32;
    let mut uStack34: u32;
    let mut puStack26: *mut u32;
    let mut uStack24: u32;
    let mut local_14: u32;
    let mut iStack16: i16;
    let mut iStack14: i16;
    let mut local_c: u32;
    let mut iStack8: i16;
    let mut iStack6: i16;
    let mut uStack4: u16;

    pass1_1028_b514(param_1);
    pass1_1028_b58e(param_1);
    local_14  = (param_2 + 0xc);
    iStack8   = (param_2 + 0x10);
    puStack26 = &local_c;
    uStack34  = str_var1(uStack34, &local_14);
    iStack16  = iStack8 + 0x1;
    puVar7    = str_var1(param_3, local_2c);
    iStack14  = iStack16;
    local_c   = local_14;
    iStack6   = param_2;
    uStack4   = extraout_DX;
    uVar6     = pass1_1028_bb24(param_1);
    uVar5     = (uVar6 >> 0x10);
    pu_var2    = &local_14;
    pass1_1030_64ce(param_3, pu_var2, uVar5, globals._PTR_LOOP_1050_5740,
                    str_var1(param_3, pu_var2), uVar6 & 0xffff | uVar5 << 0x10, puVar7);
    uStack34       = *pu_var2;
    uVar5          = (pu_var2 + 0x2);
    uStack54._3_1_ = (u8)(uStack34 >> 0x18);
    uVar3          = uStack54._3_1_;
    if(uStack54._3_1_ != 0x0) {
        uStack24 = uStack34;
        pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uStack34, uVar5);
        uStack54 = str_var1(uVar5, uVar3);
        uVar4    = pass1_1030_6fa0(str_var1(uVar5, uVar3));
        if((uVar4 == 0x62) || (uVar4 == 0x63)) {
            puStack38 = struct_op_1030_73a8(uStack54);
            ppcVar1   = (*puStack38 + 0x24);
            (**ppcVar1)();
        }
    }
    return;
}


void  pass1_1028_4f30(param_1: u32, param_2: i16, param_3: u16, param_4: u16, param_5: u16) {
    let mut uVar1: u32;
    let mut u_var2: u16;

    uVar1 = pass1_1028_b58e(param_1);
    if(param_2 == 0x0) {
        u_var2 = 0x0;
    } else {
        u_var2 = 0x3e8;
    }
    pass1_1030_7d1c(uVar1, u_var2, 0x230000, uVar1, (uVar1 >> 0x10), param_3, param_4, param_5);
    return;
}


u16  pass1_1028_4f62(param_1: u32) {
    let mut uVar1: u32;

    uVar1 = pass1_1028_b58e(param_1);
    if((uVar1 + 0x10) == 0x0) {
        return 0x1;
    }
    return 0x0;
}


u16 * pass1_1028_2bfe(param_1: *mut Struct179, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_0982(param_1, param_2, param_3, param_4, param_5);
    param_1 =  0x341c;
    param_1.fld2_segment = SEG_1028;
    return param_1;
}


u16  pass1_1028_2c28(param_1: u16, param_2: u16, param_3: u16, param_4: u32, param_5: *mut u32, param_6: u32, param_7: u32) {
    let mut puVar1: *mut u32;
    let mut pu_var2: *mut u16;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut local_e: u16;
    let mut local_c: u16;
    let mut local_a: u16;
    let mut local_8: u32;
    let mut uStack4: u16;

    pass1_1028_09d4(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    if(param_2 != 0x0) {
        local_8 = *param_5;
        uStack4 = (param_5 + 0x4);
        pu_var2  = &local_e;
        pass1_1008_3eb4(str_var1(param_1, &local_8),
                        str_var1(param_1, pu_var2),
                        str_var1(param_1, &local_c),
                        str_var1(param_1, &local_a));
        pass1_1008_3e76(
          str_var1(param_1, &local_8), local_e, local_c - 0x1, local_a - 0x1);
        puVar1 = &local_8;
        uVar3  = param_4;
        uVar4  = (param_4 >> 0x10);
        pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4, str_var1(param_1, puVar1), param_7);
        if(puVar1 != 0x0) {
            pass1_1008_3e76(str_var1(param_1, &local_8), local_e, local_c - 0x1, local_a);
            puVar1 = &local_8;
            pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4, str_var1(param_1, puVar1), param_7);
            if(puVar1 != 0x0) {
                pass1_1008_3e76(
                  str_var1(param_1, &local_8), local_e, local_c - 0x1, local_a + 0x1);
                puVar1 = &local_8;
                pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4, str_var1(param_1, puVar1), param_7);
                if(puVar1 != 0x0) {
                    pass1_1008_3e76(
                      str_var1(param_1, &local_8), local_e, local_c, local_a - 0x1);
                    puVar1 = &local_8;
                    pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4, str_var1(param_1, puVar1), param_7);
                    if(puVar1 != 0x0) {
                        pass1_1008_3e76(
                          str_var1(param_1, &local_8), local_e, local_c, local_a);
                        puVar1 = &local_8;
                        pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4,
                                        str_var1(param_1, puVar1), param_7);
                        if(puVar1 != 0x0) {
                            pass1_1008_3e76(str_var1(param_1, &local_8), local_e, local_c, local_a + 0x1);
                            puVar1 = &local_8;
                            pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4,
                                            str_var1(param_1, puVar1), param_7);
                            if(puVar1 != 0x0) {
                                pass1_1008_3e76(str_var1(param_1, &local_8), local_e, local_c + 0x1, local_a - 0x1);
                                puVar1 = &local_8;
                                pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4,
                                                str_var1(param_1, puVar1), param_7);
                                if(puVar1 != 0x0) {
                                    pass1_1008_3e76(str_var1(param_1, &local_8), local_e, local_c + 0x1, local_a);
                                    puVar1 = &local_8;
                                    pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4,
                                                    str_var1(param_1, puVar1), param_7);
                                    if(puVar1 != 0x0) {
                                        pass1_1008_3e76(str_var1(param_1, &local_8), local_e, local_c + 0x1, local_a + 0x1);
                                        puVar1 = &local_8;
                                        pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4,
                                                        str_var1(param_1, puVar1), param_7);
                                        if(puVar1 != 0x0) {
                                            return 0x1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        globals.PTR_LOOP_1050_50ca = 0x6a8;
    }
    return 0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_2e40(param_1: *mut u32, param_2: i16, param_3: *mut u8, param_4: u16, param_5: u16, param_6: u16, param_7: u16, param_8: u8) {
    let mut uVar1: u16;
    let mut pu_var2: *mut u16;
    let mut uVar3: u32;

    pass1_1028_be9e(param_1, param_4, param_5, param_6, param_7);
    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x12) == 0x5) {
        pass1_1028_2f18(param_7, param_2, param_8, param_1 & 0xffff | uVar1 << 0x10);
        pass1_1028_3246(param_1, param_2, param_3, param_4, param_5, param_7);
        uVar3  = 0x50001;
        pu_var2 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2b, param_7, param_3, param_5);
        pass1_1010_089e(param_7, pu_var2, uVar3, (uVar3 >> 0x10));
    }
    return;
}


void  pass1_1028_3246(param_1: u32, param_2: i16, param_3: u16, param_4: u16, param_5: u16, param_6: u16) {
    let mut uVar1: u16;
    let mut u_var2: u32;
    let mut extraout_DX: *mut u8;
    let mut puVar3: *mut u8;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut iVar6: i16;
    let mut local_20: [u8;6] = [0;6];
    let mut puStack26: *mut u16;
    let mut uStack18: u16;
    let mut puStack16: *mut u8;
    let mut uStack14: u32;
    let mut uStack10: u32;
    let mut u_stack6: u32;

    pass1_1028_b58e(param_1);
    u_stack6  = str_var1(extraout_DX, param_2);
    uStack10 = (param_2 + 0x2e);
    u_var2    = *(uStack10 + 0x10);
    uVar5    = 0x0;
    iVar6    = 0x1;
    uVar4    = 0x1;
    puVar3   = extraout_DX;
    uStack14 = u_var2;
    pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
    uVar1     = u_var2;
    uStack18  = uVar1;
    puStack16 = puVar3;
    pass1_1030_7c50(u_var2 & 0xffff | ZEXT24(puVar3) << 0x10,
                    str_var1(uVar5, uVar4), iVar6, uVar1, puVar3);
    pass1_1030_7c50(str_var1(puStack16, uStack18), 0x1, 0x2, uVar1, puVar3);
    pass1_1030_7c50(str_var1(puStack16, uStack18), 0x1, 0x3, uVar1, puVar3);
    pass1_1030_7c50(str_var1(puStack16, uStack18), 0x1, 0x5, uVar1, puVar3);
    puStack26 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2, param_6, puVar3, param_5);
    puVar3    = (puStack26 >> 0x10);
    uVar1     = puStack26;
    if((uVar1 + 0x82) == 0x0) {
        pass1_1030_7c50(str_var1(puStack16, uStack18), 0x4, 0x4, uVar1, puVar3);
    }
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x11, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x12, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x13, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x14, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0x14, 0x15, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0x14, 0x16, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x17, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x18, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x19, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0x14, 0x1a, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0x14, 0x1b, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0x14, 0x1c, uVar1, puVar3, param_4, param_5, param_6);
    if((uStack10 + 0x200) == 0x8000002) {
        pass1_1020_a43e(param_6, puVar3, str_var1(param_6, local_20));
        pass1_1020_a89e(param_6, str_var1(param_6, local_20), (u_stack6 + 0xc), (u_stack6 >> 0x10));
    }
    return;
}


u16 * pass1_1028_34a6(param_1: i16, param_2: u16, param_3: i16, param_4: u32, u8 *param_5) {
    pass1_1028_00cc(param_1, param_2, param_3, param_4, param_5);
    param_1 =  0x34f6;
    param_1.fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_3580(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x3608;
    param_1.fld2_segment = SEG_1028;
    return param_1;
}


u16  pass1_1028_35aa(void) {
    return 0x1;
}


void  pass1_1028_35b0(param_1: u32, param_2: i16, param_3: u16, param_4: u16, param_5: u16) {
    let mut uVar1: u32;
    let mut u_var2: u16;

    uVar1 = pass1_1028_b58e(param_1);
    if(param_2 == 0x0) {
        u_var2 = 0x0;
    } else {
        u_var2 = 0x32;
    }
    pass1_1030_7d1c(uVar1, u_var2, 0x230000, uVar1, (uVar1 >> 0x10), param_3, param_4, param_5);
    return;
}


u16 * pass1_1028_3692(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: *mut u8, param_6: u16, param_7: u16) {
    pass1_1028_3816(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    param_1 =  0x373e;
    param_1.fld2_segment = SEG_1028;
    return param_1;
}


u16  pass1_1028_36bc(param_1: u32, param_2: *mut u32, param_3: u16, param_4: u16, param_5: u16) {
    let mut pi_var1: *mut i16;
    let mut u_var2: u16;
    let mut uVar3: u32;
    let mut uVar4: u16;
    let mut uVar5: u32;
    let mut iStack4: i16;

    uVar5    = str_var1(param_4, param_3);
    *param_2 = 0x0;
    uVar4    = (param_1 >> 0x10);
    if((param_1 + 0x28) != 0x0) {
        iStack4 = 0x4;
        while(true) {
            if(0x1c < iStack4)
                break;
            uVar3   = (param_1 + 0x28);
            uVar5   = pass1_1020_bae6(uVar3, str_var1(iStack4, (uVar3 >> 0x10)), uVar5, (uVar5 >> 0x10), param_5);
            u_var2   = param_2;
            param_2 = param_2 + uVar5;
            pi_var1  = (param_2 + 0x2);
            *pi_var1 = *pi_var1 + (uVar5 >> 0x10) + CARRY2(u_var2, uVar5);
            if(0xf9 < *param_2) {
                return 0x1;
            }
            iStack4 = iStack4 + 0x1;
        }
    }
    return 0x0;
}


u16  pass1_1028_38d4(param_1: *mut u32,param_2: *mut u16, param_3: u32, param_4: u32, param_5: i16, param_6: u16, param_7: u16) {
    let mut ppcVar1: *mut *mut c_void;
    let mut BVar2: BOOL16;
    let mut uVar3: u32;
    let mut uVar4: u16;
    let mut uVar5: u16;

    uVar4 = param_1;
    uVar5 = (param_1 >> 0x10);
    pass1_1028_c7b6(param_7, param_6, uVar4, uVar5, param_2, param_4);
    if((param_5 == 0x5) || (param_5 == 0x6)) {
        ppcVar1 = (*param_1 + 0x60);
        uVar3   = (**ppcVar1)();
        if(uVar3 != 0x0) {
            pass1_1028_c23e(uVar4, uVar5, param_2, param_3, param_4, uVar3, (uVar3 >> 0x10), param_7);
            if(uVar3 != 0x0) {
                BVar2 = pass1_1028_c314(param_7, uVar3, (uVar3 >> 0x10), uVar4, uVar5, param_2, param_3, (param_3 >> 0x10), param_4);
                if(BVar2 != 0x0) {
                    return 0x1;
                }
            }
        }
    } else {
        globals.PTR_LOOP_1050_50ca = 0x6a8;
    }
    return 0x0;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_3958(param_1: u32, param_2: i16, param_3: u16, param_4: i16, param_5: u16, param_6: u16) {
    long      *plVar1;
    qword      qVar2;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut uVar6: u32;
    let mut iVar7: i16;
    let mut uVar8: u16;
    let mut uVar9: u16;
    let mut uStack52: u32;
    u16        local_2c[0x2];
    let mut local_28: u32;
    let mut iStack36: i16;
    let mut uStack34: u32;
    let mut uStack30: u32;
    let mut uStack22: u16;
    let mut uStack20: u16;
    let mut uStack18: u32;
    let mut uStack14: u32;
    let mut puStack10: *mut u32;
    let mut iStack6: i16;
    let mut uStack4: u16;

    pass1_1028_b58e(param_1);
    puStack10 = (param_2 + 0x22);
    uVar5     = (param_2 + 0x24);
    uVar6     = uVar5;
    if((uVar5 | puStack10) != 0x0) {
        iStack6 = param_2;
        uStack4 = param_3;
        if(globals.PTR_LOOP_1050_574c != 0x0) {
            uStack30 = (puStack10 + 0x4);
            for(uStack34 = 0x0; uStack34 < uStack30; uStack34 = uStack34 + 0x1) {
                pass1_1020_bb16(puStack10,
                                str_var1(param_6, local_2c),
                                str_var1(param_6, &local_28), uStack34);
            }
        }
        uStack14 = *(iStack6 + 0x2e);
        uStack18 = *_PTR_LOOP_1050_65e2;
        uStack20 = uStack18 & 0x1;
        for(uStack22 = 0x4; uStack22 < 0xe; uStack22 = uStack22 + 0x1) {
            local_2c[0] = uStack22;
            local_28    = pass1_1020_bae6(puStack10,
                                       str_var1(uStack22, (puStack10 >> 0x10)), uStack22, uVar6, param_6);
            uVar5       = (local_28 >> 0x10) | local_28;
            uVar6       = uVar5;
            if(uVar5 != 0x0) {
                pass1_1020_bb8a((long *)puStack10, 0x0, local_2c[0] << 0x10, param_5, param_6);
                uVar5    = -(local_28 + (local_28 != 0x0));
                uVar6    = uVar5;
                uStack34 = str_var1(uVar5, -local_28);
                pass1_1038_5694(uStack14, str_var1(uVar5, -local_28), local_2c[0]);
                uStack30 = 0x0;
                iStack36 = 0x0;
                iVar7    = param_1;
                uVar8    = (param_1 >> 0x10);
                switch(uStack22) {
                    0x4 =>
                        uStack30 = local_28 >> 0x1;
                        if((uStack30 == 0x0) && (uStack20 != 0x0)) {
                            uStack30 = 0x1;
                        }
                        iStack36 = 0x11;
                        break;
                    0x5 =>
                        uStack30 = local_28 >> 0x1;
                        if((uStack30 == 0x0) && (uStack20 != 0x0)) {
                            uStack30 = 0x1;
                        }
                        iStack36 = 0x12;
                        break;
                    0x6 =>
                        uStack30 = local_28 >> 0x1;
                        if((uStack30 == 0x0) && (uStack20 != 0x0)) {
                            uStack30 = 0x1;
                        }
                        iStack36 = 0x13;
                        break;
                    0x7 =>
                        uStack30 = local_28 >> 0x1;
                        if((uStack30 == 0x0) && (uStack20 != 0x0)) {
                            uStack30 = 0x1;
                        }
                        iStack36 = 0x14;
                        break;
                    0x8 =>
                        uStack30 = local_28;
                        iStack36 = 0x1a;
                        break;
                    0x9 =>
                        uStack30 = local_28;
                        iStack36 = 0x1b;
                        break;
                    0xa =>
                        uStack30 = local_28;
                        iStack36 = 0x1c;
                        break;
                    0xb =>
                        uStack30 = local_28;
                        iStack36 = 0x17;
                        break;
                    0xc =>
                        iStack36       = 0x18;
                        uStack30       = local_28;
                        plVar1         = (long *)(iVar7 + 0x20);
                        *plVar1        = *plVar1 + local_28;
                        uVar5          = (iVar7 + 0x20);
                        uVar3          = (iVar7 + 0x22);
                        uVar4          = uVar5 >> 0x1 | ((uVar3 & 0x1) != 0x0) << 0xf;
                        uStack52       = str_var1(uVar3 >> 0x1, uVar4);
                        uVar4          = (uVar3 & 0xfffe) + CARRY2(uVar4, uVar4);
                        uVar6          = uVar4;
                        param_4        = (uVar3 - uVar4) - (uVar5 < (uVar5 & 0xfffe));
                        (iVar7 + 0x20) = uVar5 - (uVar5 & 0xfffe);
                        (iVar7 + 0x22) = param_4;
                        if(uStack52 != 0x0) {
                            uVar9 = 0x15;
                            // LAB_1028_3b14:
                            uStack30 = local_28;
                            pass1_1020_bb8a(*(long **)(iVar7 + 0x28), uStack52,
                                            str_var1(uVar9, (uStack52 >> 0x10)), param_5, param_6);
                        }
                        break;
                    0xd =>
                        iStack36       = 0x19;
                        uStack30       = local_28;
                        plVar1         = (long *)(iVar7 + 0x24);
                        *plVar1        = *plVar1 + local_28;
                        uVar5          = (iVar7 + 0x24);
                        qVar2          = (qword)(local_28 & 0xffff0000 | uVar5) / 0x3;
                        uStack52       = (long)qVar2;
                        uStack52 = (qVar2 >> 0x10);
                        uVar3          = qVar2;
                        uVar4          = uStack52 * 0x3 + CARRY2(uVar3, uVar3) + CARRY2(uVar3 * 0x2, uVar3);
                        uVar6          = uVar4;
                        param_4        = uVar5 + uVar3 * -0x3;
                        param_5        = ((iVar7 + 0x26) - uVar4) - (uVar5 < uVar3 * 0x3);
                        (iVar7 + 0x24) = param_4;
                        (iVar7 + 0x26) = param_5;
                        if(uStack52 != 0x0) {
                            uVar9 = 0x16;
                            goto LAB_1028_3b14;
                        }
                }
                if(((uStack30 | uStack30) != 0x0) && (iStack36 != 0x0)) {
                    pass1_1020_bb70(*(long **)(iVar7 + 0x28), uStack30,
                                        str_var1(iStack36, uStack30), param_5, param_4, param_6);
                }
            }
        }
    }
    return;
}


u32  pass1_1028_3c32(u32 *param_1) {
    fn_ptr_1 *ppcVar1;
    let mut iVar2: i16;
    let mut local_6: u16;
    let mut iStack4: i16;

    ppcVar1 = (*param_1 + 0x40);
    iVar2   = (**ppcVar1)();
    if(iVar2 != 0x0) {
        return 0x0;
    }
    return str_var1(-(0x3e8 < local_6) - iStack4, 0x3e8 - local_6);
}


void  pass1_1028_3c60(param_1: u32, param_2: *mut u32, param_3: u16, param_4: u16, param_5: u16) {
    let mut pi_var1: *mut i16;
    let mut u_var2: u16;
    let mut uVar3: u32;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut uVar6: u32;
    long       local_10;
    let mut local_c: [u8;4] = [0;4];
    let mut iStack8: i16;
    let mut u_stack6: u16;
    let mut uStack4: u16;

    uVar6    = str_var1(param_4, param_3);
    *param_2 = 0x0;
    uVar5    = (param_1 >> 0x10);
    iVar4    = param_1;
    if((iVar4 + 0x28) != 0x0) {
        iStack8 = 0x4;
        while(true) {
            if(0x1c < iStack8)
                break;
            uVar3   = (iVar4 + 0x28);
            uVar6   = pass1_1020_bae6(uVar3, str_var1(iStack8, (uVar3 >> 0x10)), uVar6, (uVar6 >> 0x10), param_5);
            u_var2   = param_2;
            param_2 = param_2 + uVar6;
            pi_var1  = (param_2 + 0x2);
            *pi_var1 = *pi_var1 + (uVar6 >> 0x10) + CARRY2(u_var2, uVar6);
            if(0x3e7 < *param_2) {
                return;
            }
            iStack8 = iStack8 + 0x1;
        }
    }
    uVar6   = (iVar4 + 0x28);
    uStack4 = (uVar6 + 0x4);
    u_stack6 = 0x0;
    while(true) {
        if(uStack4 <= u_stack6) {
            return;
        }
        pass1_1020_bb16((iVar4 + 0x28),
                        str_var1(param_5, &local_10),
                        str_var1(param_5, local_c), u_stack6);
        *param_2 = *param_2 + local_10;
        if(0x3e7 < *param_2)
            break;
        u_stack6 = u_stack6 + 0x1;
    }
    return;
}


u32  pass1_1028_3ec8(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    (param_1 + 0x20)           = 0x0;
    param_1 =  0x4004;
    param_1.fld2_segment      = SEG_1028;
    pass1_1028_3fa2(str_var1(param_2, param_1));
    return param_1;
}


void  pass1_1028_3f04(param_1: u32, param_2: u16, param_3: u16, param_4: u16, param_5: u16, param_6: u16) {
    let mut uVar1: u16;
    let mut u_var2: u32;
    let mut puVar3: *mut u8;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut uStack14: u32;
    let mut uStack10: u32;
    let mut u_stack6: u32;

    uVar6 = 0x1f;
    pass1_1028_b58e(param_1);
    u_stack6  = str_var1(param_3, param_2);
    uStack10 = pass1_1030_7c28(str_var1(param_3, param_2), uVar6, param_2, param_3, param_6);
    puVar3   = (uStack10 >> 0x10);
    u_var2    = uStack10 & 0xffff;
    pass1_1030_7d1c(u_stack6, 0x0, 0x1f0000, u_var2, puVar3, param_4, param_5, param_6);
    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0xc) != 0x22) {
        if((iVar4 + 0xc) == 0x23) {
            uVar1 = 0xa;
        } else {
            uVar1 = 0x5;
        }
        uStack14        = uVar1;
        uStack10        = uStack10 + (iVar4 + 0x20);
        *(iVar4 + 0x20) = uStack10 % uVar1;
        u_var2           = uStack10 / uStack14;
        puVar3          = (uStack10 % uStack14);
        uStack10        = uStack10 + u_var2;
    }
    pass1_1030_7ddc(u_stack6, uStack10, 0x21, u_var2, puVar3, param_4, param_5, param_6);
    return;
}


void  pass1_1028_3fa2(param_1: u32) {
    let mut uVar1: u16;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0xc) != 0x22) {
        if((iVar2 + 0xc) == 0x23) {
            uVar1 = 0xa;
        } else {
            uVar1 = 0x5;
        }
        uVar1 = uVar1 >> 0x1;
        pass1_1008_612e(0x0, uVar1, uVar1);
        (iVar2 + 0x20) = uVar1;
        (iVar2 + 0x22) = uVar1 >> 0xf;
    }
    return;
}


void  pass1_1028_1b1e(param_1: u32) {
    (param_1 + 0x14) = 0x7;
    return;
}


u16 * pass1_1028_1be8(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    (param_1 + 0x20)           = 0x0;
    (param_1 + 0x22)           = 0x0;
    param_1 =  0x1eee;
    param_1.fld2_segment      = SEG_1028;
    return param_1;
}


u16  pass1_1028_1c1c(void) {
    return 0x0;
}


u16  pass1_1028_1c22(param_1: u32) {
    let mut uVar1: u16;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(((iVar2 + 0x20) != 0x0) && (((iVar2 + 0x12) == 0x5 || ((iVar2 + 0x12) == 0x6)))) {
        if((iVar2 + 0xc) == 0x16) {
            return 0x19;
        }
        if((iVar2 + 0xc) == 0x17) {
            return 0x1a;
        }
    }
    uVar1 = pass1_1028_bc1c(param_1 & 0xffff | uVar3 << 0x10);
    return uVar1;
}


void  pass1_1028_1c66(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16, param_5: u16) {
    fn_ptr_1 *ppcVar1;
    let mut iVar2: i16;
    let mut uVar3: u32;

    if((param_1 + 0x12) != 0x6) {
        return;
    }
    uVar3 = pass1_1028_b4f2(param_1);
    if((uVar3 + 0x200) != 0x8000002) {
        ppcVar1 = (*param_1 + 0x64);
        iVar2   = (**ppcVar1)(param_4, param_1);
        if(iVar2 == 0x0) {
            return;
        }
        pass1_1028_cb04(param_1, param_2, param_3, param_5);
        if(iVar2 == 0x0) {
            iVar2 = 0x6;
            goto LAB_1028_1cbd;
        }
        pass1_1028_c952(param_1, param_2, param_3, param_5);
    }
    iVar2 = 0x5;
// LAB_1028_1cbd:
    pass1_1028_bdac(param_1, iVar2, param_4);
    return;
}


// WARNING: Could not reconcile some variable overlaps

u16  pass1_1028_1cca(param_1: u32, param_2: *mut u32, param_3: u16, param_4: u16, param_5: u16, long param_6, param_7: u16) {
    let mut uVar1: u16;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut local_e: [u8;2] = [0;2];
    let mut local_c: i16;
    let mut local_a: i16;
    let mut local_8: u32;
    let mut uStack4: u16;

    local_8 = *param_2;
    uStack4 = (param_2 + 0x1);
    pass1_1008_3eb4(str_var1(param_7, &local_8),
                    str_var1(param_7, local_e),
                    str_var1(param_7, &local_c),
                    str_var1(param_7, &local_a));
    local_8 = local_8 & 0xffff | (local_c - 0x1) << 0x10;
    u_var2   = param_1;
    uVar3   = (param_1 >> 0x10);
    uVar1   = pass1_1028_1e14(u_var2, uVar3, 0x16,
                            str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
    if(uVar1 == 0x0) {
        local_8 = local_8 & 0xffff | (local_c + 0x1) << 0x10;
        uVar1   = pass1_1028_1e14(u_var2, uVar3, 0x16,
                                str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
        if(uVar1 == 0x0) {
            local_8 = local_a + -0x1;
            local_8 = local_c;
            uVar1         = pass1_1028_1e14(u_var2, uVar3, 0x17,
                                    str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
            if(uVar1 == 0x0) {
                local_8 = str_var1(local_8, local_a + 0x1);
                uVar1   = pass1_1028_1e14(u_var2, uVar3, 0x17,
                                        str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                if(uVar1 == 0x0) {
                    return uVar1;
                }
            }
        }
    }
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_1da4(param_1: u16, param_2: u16,param_3: *mut u16, param_4: u32, long param_5, param_6: u16) {
    let mut iVar1: i16;
    let mut pu_var2: *mut u8;
    let mut uVar3: u16;
    let mut uVar4: u32;
    let mut local_4: [u8;2] = [0;2];

    uVar4 = pass1_1030_bcae(local_4, param_6);
    uVar3 = (uVar4 >> 0x10);
    iVar1 = uVar4;
    pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, param_4, (param_4 >> 0x10));
    uVar4 = *(iVar1 + 0x10);
    pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uVar4, (uVar4 >> 0x10));
    pu_var2 = local_4;
    pass1_1030_bcde(param_6, pu_var2, param_6, uVar4 & 0xffff | uVar3 << 0x10, param_3, param_5);
    if(pu_var2 < 0x0) {
        globals.PTR_LOOP_1050_50ca = 0x6af;
        return;
    }
    return;
}


u16  pass1_1028_1e8a(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16) {
    let mut uVar1: u16;
    let mut u_var2: u32;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut uVar5: u16;

    uVar1 = (param_1 >> 0x10);
    if(((param_1 + 0x1a) & 0x2) == 0x0) {
        uVar4 = 0x0;
        uVar5 = 0x23;
        uVar3 = 0x1;
        u_var2 = pass1_1028_b58e(param_1 & 0xffff | uVar1 << 0x10);
        pass1_1030_7d7c(u_var2, uVar3,
                        str_var1(uVar5, uVar4), u_var2, (u_var2 >> 0x10), param_2, param_3, param_4);
        pass1_1028_bdac(param_1, 0x6, 0x1030);
        return 0x0;
    }
    return 0x1;
}


void  pass1_1028_2042(u16 *param_1, param_2: u16) {
    u32 * puVar1;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut uVar4: u32;
    let mut iVar5: *mut Struct602;
    let mut uVar5: u16;
    let mut uVar6: u32;

    uVar5 = (param_1 >> 0x10);
    iVar5 =  param_1;
    param_1.fld0_addr_table = addr_table_1028_2572;//0x2572;
    iVar5->fld2_segment = SEG_1028;
    uVar4 = &iVar5.field_0x20;
    (uVar4 + 0xa) = 0x1;
    puVar1 = iVar5.field_0x20;
    u_var2 = iVar5.field_0x22;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    if((globals._PTR_LOOP_1050_65e2 != 0x0) && (globals._PTR_LOOP_1050_5a64 != 0x0)) {
        uVar6 = pass1_1028_b58e(param_1);
        pass1_1038_79f2(globals._PTR_LOOP_1050_5a64, uVar6, param_2);
    }
    pass1_1028_b418(param_1);
    return;
}


u16  pass1_1028_20b0(void) {
    return 0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_20b6(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16, param_5: u16) {
    let mut uVar1: u16;
    let mut pu_var2: *mut u8;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut auStack22: [u8;2] = [0;2];
    let mut iStack20: i16;
    let mut iStack18: i16;
    let mut uStack16: u32;
    let mut uStack12: u16;
    let mut uStack10: u32;
    let mut u_stack6: u32;

    pass1_1028_be9e(param_1, param_2, param_3, param_4, param_5);
    uVar4 = (param_1 >> 0x10);
    uVar3 = param_1;
    if((uVar3 + 0x12) == 0x5) {
        u_stack6  = pass1_1028_bb24(param_1 & 0xffff | uVar4 << 0x10);
        uStack10 = pass1_1028_b58e(param_1);
        pu_var2   = (uStack10 >> 0x10);
        uStack16 = *(uStack10 + 0xc);
        uStack12 = (uStack10 + 0x10);
        pass1_1008_3eb4(str_var1(param_5, &uStack16),
                        str_var1(param_5, auStack22),
                        str_var1(param_5, &iStack20),
                        str_var1(param_5, &iStack18));
        uStack16 = uStack16 & 0xffff | (iStack20 - 0x1) << 0x10;
        uVar1    = pass1_1028_21ba(uVar3, uVar4,
                                str_var1(param_5, &uStack16), u_stack6, &uStack16, pu_var2, param_5);
        if(uVar1 == 0x0) {
            uStack16 = uStack16 & 0xffff | (iStack20 + 0x1) << 0x10;
            uVar1    = pass1_1028_21ba(uVar3, uVar4,
                                    str_var1(param_5, &uStack16), u_stack6, &uStack16, pu_var2, param_5);
            if(uVar1 == 0x0) {
                uStack16 = str_var1(iStack20, iStack18- 1);
                uVar1    = pass1_1028_21ba(uVar3, uVar4,
                                        str_var1(param_5, &uStack16), u_stack6, &uStack16, pu_var2, param_5);
                if(uVar1 == 0x0) {
                    uStack16 = uStack16 & 0xffff0000 | (iStack18 + 0x1);
                    uVar1    = pass1_1028_21ba(uVar3, uVar4,
                                            str_var1(param_5, &uStack16), u_stack6, &uStack16, pu_var2, param_5);
                    if(uVar1 == 0x0) {
                        return;
                    }
                }
            }
        }
        pass1_1038_79b2(globals._PTR_LOOP_1050_5a64, uStack10, uVar1, pu_var2);
    }
    return;
}


i16  pass1_1028_2290(param_1: u32, param_2: *mut u32, param_3: u16, param_4: u16, param_5: u16, long param_6, param_7: u16) {
    let mut iVar1: i16;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut local_e: [u8;2] = [0;2];
    let mut local_c: i16;
    let mut local_a: i16;
    let mut local_8: u32;
    let mut uStack4: u16;

    local_8 = *param_2;
    uStack4 = (param_2 + 0x1);
    pass1_1008_3eb4(str_var1(param_7, &local_8),
                    str_var1(param_7, local_e),
                    str_var1(param_7, &local_c),
                    str_var1(param_7, &local_a));
    local_8 = local_8 & 0xffff | (local_c - 0x1) << 0x10;
    u_var2   = param_1;
    uVar3   = (param_1 >> 0x10);
    iVar1   = pass1_1028_2220(u_var2, uVar3, 0x16,
                            str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
    if(iVar1 == 0x0) {
        local_8 = local_8 & 0xffff | (local_c + 0x1) << 0x10;
        iVar1   = pass1_1028_2220(u_var2, uVar3, 0x16,
                                str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
        if(iVar1 == 0x0) {
            local_8 = local_a + -0x1;
            local_8 = local_c;
            iVar1         = pass1_1028_2220(u_var2, uVar3, 0x17,
                                    str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
            if(iVar1 == 0x0) {
                local_8 = str_var1(local_8, local_a + 0x1);
                iVar1   = pass1_1028_2220(u_var2, uVar3, 0x17,
                                        str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                if(iVar1 == 0x0) {
                    return iVar1;
                }
            }
        }
    }
    return 0x1;
}


u16  pass1_1028_236a(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16) {
    let mut uVar1: u16;
    let mut u_var2: u32;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut uVar5: u16;

    uVar1 = (param_1 >> 0x10);
    if(((param_1 + 0x1a) & 0x2) == 0x0) {
        uVar4 = 0x0;
        uVar5 = 0x23;
        uVar3 = 0x1;
        u_var2 = pass1_1028_b58e(param_1 & 0xffff | uVar1 << 0x10);
        pass1_1030_7d7c(u_var2, uVar3,
                        str_var1(uVar5, uVar4), u_var2, (u_var2 >> 0x10), param_2, param_3, param_4);
        pass1_1028_bdac(param_1, 0x6, 0x1030);
        return 0x0;
    }
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_23a8(param_1: u16, param_2: u16,param_3: *mut u16, param_4: u32, long param_5, param_6: u16) {
    let mut iVar1: i16;
    let mut pu_var2: *mut u8;
    let mut uVar3: u16;
    let mut uVar4: u32;
    let mut local_4: [u8;2] = [0;2];

    uVar4 = pass1_1030_bcae(local_4, param_6);
    uVar3 = (uVar4 >> 0x10);
    iVar1 = uVar4;
    pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, param_4, (param_4 >> 0x10));
    uVar4 = *(iVar1 + 0x10);
    pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uVar4, (uVar4 >> 0x10));
    pu_var2 = local_4;
    pass1_1030_bcde(param_6, pu_var2, param_6, uVar4 & 0xffff | uVar3 << 0x10, param_3, param_5);
    if(pu_var2 < 0x0) {
        globals.PTR_LOOP_1050_50ca = 0x6af;
        return;
    }
    return;
}


u16 * pass1_1028_25fc(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  s_fem16_wav_1050_2644 + 0x8;
    param_1.fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_26d6(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x2788;
    param_1.fld2_segment = SEG_1028;
    return param_1;
}


void  pass1_1028_2700(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16, param_5: u16) {
    let mut uVar1: u16;
    let mut u_var2: u32;

    pass1_1028_be2a(param_1, param_2, param_3, param_4, param_5);
    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x12) == 0x5) {
        u_var2           = pass1_1028_b4f2(param_1 & 0xffff | uVar1 << 0x10);
        (u_var2 + 0x204) = 0x1;
    }
    return;
}


void  pass1_1028_272e(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16, param_5: u16) {
    let mut uVar1: u32;

    pass1_1028_be9e(param_1, param_2, param_3, param_4, param_5);
    uVar1 = pass1_1028_b4f2(param_1);
    if((param_1 + 0x12) == 0x5) {
        (uVar1 + 0x204) = 0x1;
    }
    return;
}


u16 * pass1_1028_2812(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x2a92;
    param_1.fld2_segment      = SEG_1028;
    (param_1 + 0xe)            = (param_1 + 0xc);
    return param_1;
}


// WARNING: Could not reconcile some variable overlaps

u16  pass1_1028_2844(param_1: u32, param_2: *mut u32, param_3: u16, param_4: u16, param_5: u16, long param_6, param_7: u16) {
    let mut BVar1: BOOL16;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut local_e: [u8;2] = [0;2];
    let mut local_c: i16;
    let mut local_a: i16;
    let mut local_8: u32;
    let mut uStack4: u16;

    local_8 = *param_2;
    uStack4 = (param_2 + 0x1);
    pass1_1008_3eb4(str_var1(param_7, &local_8),
                    str_var1(param_7, local_e),
                    str_var1(param_7, &local_c),
                    str_var1(param_7, &local_a));
    local_8 = local_8 & 0xffff | (local_c - 0x1) << 0x10;
    uVar3   = param_1;
    uVar4   = (param_1 >> 0x10);
    BVar1   = pass1_1028_c5a6(uVar3, uVar4, 0x7b,
                            str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
    if(BVar1 == 0x0) {
        u_var2 = pass1_1028_297c(param_1, str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
        if(u_var2 == 0x0) {
            local_8 = local_8 & 0xffff | (local_c + 0x1) << 0x10;
            BVar1   = pass1_1028_c5a6(uVar3, uVar4, 0x7b,
                                    str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
            if(BVar1 == 0x0) {
                u_var2 = pass1_1028_297c(param_1,
                                         str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                if(u_var2 == 0x0) {
                    local_8 = local_a + -0x1;
                    local_8 = local_c;
                    BVar1         = pass1_1028_c5a6(uVar3, uVar4, 0x7c,
                                            str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                    if(BVar1 == 0x0) {
                        u_var2 = pass1_1028_297c(param_1,
                                                 str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                        if(u_var2 == 0x0) {
                            local_8 = str_var1(local_8, local_a + 0x1);
                            BVar1   = pass1_1028_c5a6(uVar3, uVar4, 0x7c,
                                                    str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                            if(BVar1 == 0x0) {
                                uVar3 = pass1_1028_297c(param_1,
                                                        str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                                if(uVar3 == 0x0) {
                                    return uVar3;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0x1;
}


u16  pass1_1028_297c(param_1: u32,param_2: *mut u16, long param_3, param_4: u16, param_5: u16, param_6: u16) {
    char cVar1;
    let mut u_var2: u16;
    let mut uVar3: u32;

    pass1_1028_c7b6(param_6, param_5, param_1, (param_1 >> 0x10), param_2, param_3);
    if(param_4 == 0x0) {
        pass1_1030_627e(param_6, 0x0, param_5, globals._PTR_LOOP_1050_5740, param_2, param_3);
        u_var2 = param_5 | param_4;
        if(u_var2 != 0x0) {
            pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, param_4, param_5);
            uVar3 = struct_op_1030_73a8(str_var1(u_var2, param_4));
            u_var2 = (uVar3 + 0xc);
            if(0x4a < u_var2) {
                switch(u_var2) {
                    0x4c =>
                    0x4d =>
                    0x4e =>
                    0x60 =>
                    0x61 =>
                    0x62 =>
                    0x63 =>
                    0x6e =>
                    0x73 =>
                    0x74 =>
                    0x75 =>
                    0x76 =>
                    0x77 =>
                    0x78 =>
                    0x79 =>
                        goto switchD_1028_2a0b_caseD_4c;
                    _ =>
                        goto switchD_1028_2a0b_caseD_4f;
                }
            }
            if((u_var2 < 0x48) && (u_var2 != 0x41)) {
                if(u_var2 < 0x42) {
                    cVar1 = u_var2;
                    if(cVar1 < '5') {
                        if('2' < cVar1) {
                            return 0x0;
                        }
                        cVar1 = cVar1 + -0x10;
                    } else {
                        cVar1 = cVar1 + -0x3e;
                    }
                    if(cVar1 == '\0') {
                        return 0x0;
                    }
                }
                switchD_1028_2a0b_caseD_4f:
                return 0x1;
            }
        }
    }
switchD_1028_2a0b_caseD_4c:
    return 0x0;
}


u16 * pass1_1028_2b1c(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1030_dcc2(param_1, param_2, param_3, param_4, param_5);
    param_1 =  0x2b74;
    param_1.fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_0982(param_1: *mut Struct179, param_2: u16, param_3: i16, param_4: u32, param_5: u16) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1.field_0x20        = 0x0;
    param_1 =  0xada;
    param_1.fld2_segment      = SEG_1028;
    param_1.field_0xe         = 0x4b;
    return param_1;
}


void  pass1_1028_09b8(param_1: u32) {
    let mut uVar1: u32;

    uVar1          = pass1_1028_b58e(param_1);
    (uVar1 + 0x14) = 0x1;
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_09d4(param_1: u16, param_2: i16, param_3: u16, param_4: u32,param_5: *mut u16, param_6: u32, long param_7) {
    let mut iVar1: i16;
    let mut pu_var2: *mut u8;
    let mut uVar3: u16;
    let mut uVar4: u32;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut uVar7: u16;
    let mut local_6: [u8;2] = [0;2];
    let mut BStack4: BOOL16;

    uVar5   = param_4;
    uVar6   = (param_4 >> 0x10);
    uVar7   = (param_6 >> 0x10);
    BStack4 = pass1_1028_c314(param_1, param_2, param_3, uVar5, uVar6, param_5, param_6, uVar7, param_7);
    if(BStack4 == 0x0) {
        return;
    }
    pass1_1028_c7b6(param_1, param_3, uVar5, uVar6, param_5, param_7);
    if((BStack4 != 0x0) && (BStack4 != 0x4)) {
        if(((BStack4 - 0x5) < 0x1) || ((SBORROW2(BStack4 - 0x5, 0x1) || (0x3 < (BStack4 - 0x6))))) {
            if(((uVar5 + 0xc) != 0x3e) && ((uVar5 + 0xc) != 0x41)) {
                return;
            }
            uVar4 = pass1_1030_bcae(local_6, param_1);
            uVar3 = (uVar4 >> 0x10);
            iVar1 = uVar4;
            pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, param_6, uVar7);
            uVar4 = *(iVar1 + 0x10);
            pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uVar4, (uVar4 >> 0x10));
            pu_var2 = local_6;
            pass1_1030_bcde(param_1, pu_var2, param_1, uVar4 & 0xffff | uVar3 << 0x10, param_5, param_7);
            if(pu_var2 < 0x0) {
                globals.PTR_LOOP_1050_50ca = 0x6af;
                return;
            }
            if(0x5 < pu_var2) {
                globals.PTR_LOOP_1050_50ca = 0x6b5;
                return;
            }
            return;
        }
    }
    globals.PTR_LOOP_1050_50ca = 0x6a8;
    return;
}
