// #include "unk_9.h"

// #include "address_tables/function_tables.h"
// #include "globals.h"
// #include "op_int.h"
// #include "op_windef.h"
// #include "struct_ops/struct_ops_3.h"
// #include "structs/structs_0xx/structs_9x.h"

u16 *pass1_1028_0b64(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0xbbc;
    param_1.fld2_segment = SEG_1028;
    return param_1;
}

u16 *pass1_1028_0c50(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    (param_1 + 0x20)           = 0x0;
    (param_1 + 0x22)           = 0x0;
    param_1 =  s_480_bmp_1050_1721 + 0x3;
    param_1.fld2_segment      = SEG_1028;
    return param_1;
}

pub fn pass1_1028_0c84(param_1: u32, param_2: u32, param_3: i16, param_4: u16)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut u_var2: u16;
    let mut puVar3: *mut u32;
    let mut extraout_DX: u16;
    let mut uVar4: u16;
    let mut uVar5: u32;
    let mut puVar6: *mut u32;
    let mut puVar7: *mut u32;
    let mut bStack55: u8;
    let mut local_32: [u8;a] = [0;a];
    let mut uStack40: u32;
    let mut uStack36: u32;
    let mut puStack28: *mut u32;
    let mut local_1a: u32;
    let mut iStack22: i16;
    let mut uStack20: u16;
    let mut iStack18: i16;
    let mut uStack16: u16;
    let mut iStack14: i16;
    let mut local_c: u32;
    let mut iStack8: i16;
    let mut u_stack6: u32;

    pass1_1028_b58e(param_1);
    u_stack6   = str_var1(extraout_DX, param_3);
    local_c   = (param_3 + 0xc);
    iStack18  = (param_3 + 0x10);
    puStack28 = &local_c;
    uStack16  = extraout_DX;
    iStack14  = iStack18;
    iStack8   = iStack18;
    pass1_1028_bab6(param_1, iStack18, extraout_DX);
    u_var2    = pass1_1030_2fac(str_var1(uStack16, iStack18));
    local_1a = local_c;
    iStack22 = iStack8;
    uStack36 = str_var1(uStack36, &local_1a);
    iStack14 = iStack14 + 0x1;
    uStack20 = u_var2;
    if(iStack14 <= u_var2)
    {
        puVar7   = str_var1(param_4, local_32);
        iStack22 = iStack14;
        uVar5    = pass1_1028_bb24(param_1);
        uVar4    = (uVar5 >> 0x10);
        puVar3   = &local_1a;
        pass1_1030_64ce(param_4, puVar3, uVar4, globals._PTR_LOOP_1050_5740,
                        str_var1(param_4, puVar3), uVar5 & 0xffff | uVar4 << 0x10, puVar7);
        uStack40 = *puVar3;
        uVar4    = (puVar3 + 0x2);
        bStack55 = (u8)(uStack40 >> 0x18);
        u_var2    = bStack55;
        uStack36 = uStack40;
        if(bStack55 != 0x0)
        {
            pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uStack40, uVar4);
            puVar6  = struct_op_1030_73a8(str_var1(uVar4, u_var2));
            u_var2   = puVar6;
            ppcVar1 = (*puVar6 + 0x58);
            (**ppcVar1)();
        }
    }
    pass1_1028_b46e(param_1, param_2, u_var2);
    fn_ptr_1030_7296(u_stack6);
    return;
}


u16 pass1_1028_0d80(param_1: u32)

{
    let mut uVar1: u16;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    uVar1 = (param_1 + 0x20);
    pass1_1028_1646(param_1 & 0xffff | u_var2 << 0x10);
    return uVar1;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1028_0d9c(param_1: u32, param_2: i16, param_3: u16)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut pu_var2: *mut u32;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut BVar5: BOOL16;
    let mut extraout_DX: u16;
    let mut uVar6: u16;
    let mut uVar7: u32;
    let mut puVar8: *mut u32;
    let mut uStack58: u32;
    let mut local_32: [u8;6] = [0;6];
    let mut puStack44: *mut u32;
    let mut uStack40: u32;
    let mut uStack36: u32;
    let mut puStack28: *mut u32;
    let mut local_1a: u32;
    let mut iStack22: i16;
    let mut uStack20: u16;
    let mut iStack18: i16;
    let mut uStack16: u16;
    let mut iStack14: i16;
    let mut local_c: u32;
    let mut iStack8: i16;
    let mut iStack6: i16;
    let mut uStack4: u16;

    pass1_1028_b514(param_1);
    pass1_1028_b58e(param_1);
    local_c   = (param_2 + 0xc);
    iStack18  = (param_2 + 0x10);
    puStack28 = &local_c;
    uStack16  = extraout_DX;
    iStack14  = iStack18;
    iStack8   = iStack18;
    iStack6   = param_2;
    uStack4   = extraout_DX;
    pass1_1028_bab6(param_1, iStack18, extraout_DX);
    uStack20 = pass1_1030_2fac(str_var1(uStack16, iStack18));
    local_1a = local_c;
    uStack36 = str_var1(uStack36, &local_1a);
    iStack22 = iStack14 + 0x1;
    if(iStack22 <= uStack20)
    {
        puVar8   = str_var1(param_3, local_32);
        iStack14 = iStack22;
        uVar7    = pass1_1028_bb24(param_1);
        uVar6    = (uVar7 >> 0x10);
        pu_var2   = &local_1a;
        pass1_1030_64ce(param_3, pu_var2, uVar6, globals._PTR_LOOP_1050_5740,
                        str_var1(param_3, pu_var2), uVar7 & 0xffff | uVar6 << 0x10, puVar8);
        uStack40       = *pu_var2;
        uVar6          = (pu_var2 + 0x2);
        uStack58._3_1_ = (u8)(uStack40 >> 0x18);
        uVar3          = uStack58._3_1_;
        if(uStack58._3_1_ != 0x0)
        {
            uStack36 = uStack40;
            pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uStack40, uVar6);
            uStack58 = str_var1(uVar6, uVar3);
            uVar4    = pass1_1030_6fa0(str_var1(uVar6, uVar3));
            BVar5    = pass1_1008_c6ae(globals.dat_1050_06e0, uVar4, 0x13);
            if(BVar5 != 0x0)
            {
                puStack44 = struct_op_1030_73a8(uStack58);
                ppcVar1   = (*puStack44 + 0x24);
                (**ppcVar1)();
            }
        }
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1028_0ea6(param_1: *mut Struct597, param_2: u16, param_3: u16, param_4: u16, param_5: u16)

{
    let mut pi_var1: *mut i16;
    let mut BVar2: BOOL16;
    let mut uVar3: u16;
    let mut iVar3: *mut Struct597;
    let mut uVar4: u16;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    if(iVar3.field_0xc != 0x10)
    {
        BVar2 = pass1_1008_c6ae(globals.dat_1050_06e0, iVar3.field_0xc, 0x13);
        if(BVar2 == 0x0)
        {
            BVar2 = pass1_1008_c6ae(globals.dat_1050_06e0, iVar3.field_0xc, 0x2);
            if(((BVar2 != 0x0) && (iVar3.field_0x12 != 0x7)) && (iVar3.field_0x12 != 0x4))
            {
                uVar3 = pass1_1028_1556(param_1 & 0xffff | uVar4 << 0x10, BVar2, param_2, param_5);
                if(uVar3 == 0x0)
                    goto LAB_1028_0f0a;
                if(iVar3.field_0x12 == 0x9)
                {
                    iVar3.field_0x12 = 0x5;
                }
            }
        }
        else
        {
            if(iVar3.field_0x22 < 0x1)
            {
                if((iVar3.field_0x12 != 0x5) && (iVar3.field_0x12 != 0x6))
                {
                    return;
                }
                fn_ptr_1000_17ce(iVar3.field_0x14, SEG_1000);
                iVar3.field_0x14 = 0x0;
            // LAB_1028_0f0a:
                iVar3.field_0x12 = 0x9;
                return;
            }
        }
        pass1_1028_be2a(param_1, param_3, param_4, SEG_1008, param_5);
        if(iVar3.field_0x12 == 0x5)
        {
            pi_var1  = &iVar3.field_0x22;
            *pi_var1 = *pi_var1 + -0x1;
            pass1_1028_b58e(param_1 & 0xffff | uVar4 << 0x10);
        }
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1028_0fa4(param_1: *mut u32, param_2: *mut u8, param_3: u16, param_4: u16, param_5: u16, param_6: u16)

{
    let mut BVar1: BOOL16;
    let mut iVar2: i16;
    let mut uVar3: u16;
    let mut puVar4: *mut u16;
    let mut uVar5: u32;
    let mut uVar6: u16;
    let mut uVar7: u16;
    let mut iVar8: i16;

    pass1_1028_be9e(param_1, param_3, param_4, param_5, param_6);
    puVar4 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2, param_6, param_2, param_4);
    iVar8  = (puVar4 + 0x82);
    uVar3  = (param_1 >> 0x10);
    iVar2  = param_1;
    if((iVar2 + 0x12) == 0x5)
    {
        BVar1 = pass1_1008_c6ae(globals.dat_1050_06e0, (iVar2 + 0xc), 0x2);
        if((BVar1 != 0x0) && ((globals.PTR_LOOP_1050_4fbc == 0x0 || (iVar8 != 0x0))))
        {
            globals.PTR_LOOP_1050_4fbc = (&PTR_LOOP_1050_0000 + 0x1);
            uVar7                       = 0x0;
            iVar8                       = 0x4;
            uVar6                       = 0x1;
            uVar5                       = pass1_1028_b58e(param_1);
            pass1_1030_7c50(uVar5, str_var1(uVar7, uVar6), iVar8, uVar5, (uVar5 >> 0x10));
        }
        (iVar2 + 0x22) = 0x64;
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

i16 pass1_1028_1024(param_1: u32, param_2: i16, param_3: u16, param_4: u16)

{
    let mut BVar1: BOOL16;
    let mut pu_var2: *mut u32;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut uVar6: u32;
    let mut iStack26: i16;
    let mut iStack24: i16;
    let mut local_16: u32;
    let mut iStack18: i16;
    let mut uStack16: u16;
    let mut uStack14: u16;
    let mut uStack12: u32;
    let mut uStack8: u16;
    let mut iStack6: i16;
    let mut uStack4: u16;

    pass1_1028_bab6(param_1, param_2, param_3);
    iStack6  = param_2;
    uStack4  = param_3;
    uStack8  = pass1_1030_2fac(str_var1(param_3, param_2));
    uStack12 = pass1_1028_bb24(param_1);
    uVar6    = pass1_1028_b58e(param_1);
    uStack14 = (uVar6 >> 0x10);
    local_16 = (uVar6 + 0xc);
    iStack26 = 0x0;
    iStack24 = 0x0;
    while(true)
    {
        if(uStack8 < iStack26)
        {
            return iStack24;
        }
        iStack18 = iStack26;
        pu_var2   = &local_16;
        pass1_1030_627e(param_4, pu_var2, (uVar6 >> 0x10), globals._PTR_LOOP_1050_5740,
                        str_var1(param_4, pu_var2), uStack12);
        uStack16 = uVar6;
        pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, pu_var2, (uVar6 >> 0x10));
        uStack16 = uVar6;
        if(((uVar6 >> 0x10) | pu_var2) == 0x0)
            break;
        uVar6 = struct_op_1030_73a8(uVar6 & 0xffff0000 | ZEXT24(pu_var2));
        uVar4 = (uVar6 >> 0x10);
        uVar3 = uVar6;
        uVar5 = uVar4 | uVar3;
        if(uVar6 == 0x0)
        {
            return iStack24;
        }
        BVar1 = pass1_1008_c6ae(globals.dat_1050_06e0, (uVar3 + 0xc), 0x13);
        uVar6 = str_var1(uVar5, uStack16);
        if((BVar1 != 0x0) && ((uVar3 + 0x12) == 0x5))
        {
            iStack24 = iStack24 + 0x1;
        }
        iStack26 = iStack26 + 0x1;
    }
    return iStack24;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

i16 pass1_1028_1106(param_1: u32, param_2: i16, param_3: u16, param_4: u16)

{
    let mut BVar1: BOOL16;
    let mut pu_var2: *mut u32;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut uVar5: u32;
    let mut iStack26: i16;
    let mut iStack24: i16;
    let mut local_16: u32;
    let mut iStack18: i16;
    let mut uStack16: u16;
    let mut uStack14: u16;
    let mut uStack12: u32;
    let mut uStack8: u16;
    let mut iStack6: i16;
    let mut uStack4: u16;

    pass1_1028_bab6(param_1, param_2, param_3);
    iStack6  = param_2;
    uStack4  = param_3;
    uStack8  = pass1_1030_2fac(str_var1(param_3, param_2));
    uStack12 = pass1_1028_bb24(param_1);
    uVar5    = pass1_1028_b58e(param_1);
    uStack14 = (uVar5 >> 0x10);
    local_16 = (uVar5 + 0xc);
    iStack26 = 0x0;
    iStack24 = 0x0;
    while(true)
    {
        if(uStack8 < iStack26)
        {
            return iStack24;
        }
        iStack18 = iStack26;
        pu_var2   = &local_16;
        pass1_1030_627e(param_4, pu_var2, (uVar5 >> 0x10), globals._PTR_LOOP_1050_5740,
                        str_var1(param_4, pu_var2), uStack12);
        uStack16 = uVar5;
        pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, pu_var2, (uVar5 >> 0x10));
        uStack16 = uVar5;
        if(((uVar5 >> 0x10) | pu_var2) == 0x0)
            break;
        uVar5 = struct_op_1030_73a8(uVar5 & 0xffff0000 | ZEXT24(pu_var2));
        uVar3 = (uVar5 >> 0x10);
        uVar4 = uVar3 | uVar5;
        if(uVar5 == 0x0)
        {
            return iStack24;
        }
        BVar1 = pass1_1008_c6ae(globals.dat_1050_06e0, (uVar5 + 0xc), 0x13);
        uVar5 = str_var1(uVar4, uStack16);
        if(BVar1 != 0x0)
        {
            iStack24 = iStack24 + 0x1;
        }
        iStack26 = iStack26 + 0x1;
    }
    return iStack24;
}


bool pass1_1028_11de(param_1: u32)

{
    let mut uVar1: u32;

    uVar1 = pass1_1028_b58e(param_1);
    return (uVar1 + 0x10) == 0x0;
}


u16 pass1_1028_12be(param_1: u32, param_2: *mut u32, param_3: u16)

{
    let mut pi_var1: *mut i16;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut bVar4: bool;
    let mut extraout_AH: u8;
    let mut uVar5: u16;
    let mut puVar6: *mut u32;
    let mut uVar7: u32;
    let mut uVar8: u32;
    let mut uStack8: u16;

    bVar4 = pass1_1028_11de(param_1);
    if(CONCAT11(extraout_AH, bVar4) == 0x0)
    {
        puVar6  = pass1_1028_121e(param_1, param_3);
        ppcVar3 = (*puVar6 + 0x40);
        uVar5   = (**ppcVar3)();
        return uVar5;
    }
    *param_2 = 0x0;
    uVar7    = pass1_1028_b58e(param_1);
    uStack8  = 0x4;
    uVar8    = uVar7;
    do
    {
        uVar8   = pass1_1030_7c28(uVar7, uStack8, uVar8, (uVar8 >> 0x10), param_3);
        u_var2   = param_2;
        param_2 = param_2 + uVar8;
        pi_var1  = (param_2 + 0x2);
        *pi_var1 = *pi_var1 + (uVar8 >> 0x10) + CARRY2(u_var2, uVar8);
        uStack8 = uStack8 + 0x1;
    } while(uStack8 < 0xe);
    if(0x1f4 < *param_2)
    {
        return 0x1;
    }
    return 0x0;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1028_134a(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16)

{
    let mut pi_var1: *mut i16;
    let mut ppcVar2: *mut *mut c_void;
    let mut BVar3: BOOL16;
    long      *plVar4;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut uVar7: u32;
    long       lStack26;
    let mut iStack22: i16;
    let mut uStack18: u32;
    let mut uStack10: u32;
    long       local_6;

    uVar6 = (param_1 >> 0x10);
    BVar3 = pass1_1008_c6ae(globals.dat_1050_06e0, (param_1 + 0xc), 0x13);
    if(BVar3 != 0x0)
    {
        plVar4  = &local_6;
        ppcVar2 = (*param_1 + 0x40);
        (**ppcVar2)(SEG_1008, param_1, plVar4, param_4);
        if(plVar4 != (long *)0x0)
        {
            pi_var1  = (param_1 + 0x22);
            *pi_var1 = *pi_var1 + 0x1;
            return;
        }
        uStack10 = 0x1f4 - local_6;
        uVar7    = pass1_1028_121e(param_1, param_4);
        uVar5    = (uVar7 >> 0x10);
        uVar6    = uVar7;
        pass1_1028_b58e(uVar7);
        uStack18 = str_var1(uVar5, uVar6);
        for(iStack22 = 0x0; iStack22 < 0xa; iStack22 = iStack22 + 0x1)
        {
            uStack10 = (iStack22 * 0x2 + 0x4fbe);
            uStack10 = (uStack10 >> 0xf);
            if(uStack10 < uStack10)
            {
            }
            lStack26 = str_var1(uStack10, uStack10);
            pass1_1030_7ddc(uStack18, CONCAT13((uStack10 >> 0x8), CONCAT12(uStack10, uStack10)), iStack22 + 0x4, uStack10, uStack10, param_2, param_3, param_4);
            uStack10 = uStack10 - lStack26;
            if(uStack10 < 0x1)
            {
                return;
            }
        }
    }
    return;
}


i16 pass1_1028_1416(param_1: u32, param_2: u16, param_3: u16)

{
    let mut bVar1: bool;
    let mut extraout_AH: u8;
    let mut iVar2: i16;
    let mut uVar3: u16;
    let mut uVar4: u32;

    bVar1 = pass1_1028_11de(param_1);
    if(CONCAT11(extraout_AH, bVar1) == 0x0)
    {
        uVar4 = pass1_1028_121e(param_1, param_3);
        uVar3 = (uVar4 >> 0x10);
        iVar2 = pass1_1028_1416(uVar4 & 0xffff | uVar3 << 0x10, uVar3, param_3);
        return iVar2;
    }
    iVar2 = pass1_1028_1024(param_1, CONCAT11(extraout_AH, bVar1), param_2, param_3);
    return iVar2 * 0xf;
}


u16 pass1_1028_1556(param_1: u32, param_2: i16, param_3: u16, param_4: u16)

{
    let mut iVar1: i16;
    let mut pu_var2: *mut u32;
    let mut uVar3: u16;
    let mut BVar4: BOOL16;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut uVar7: u32;
    let mut iStack26: i16;
    let mut local_16: u32;
    let mut iStack18: i16;
    let mut uStack16: u16;
    let mut uStack14: u16;
    let mut uStack12: u32;
    let mut uStack8: u16;
    let mut iStack6: i16;
    let mut uStack4: u16;

    pass1_1028_bab6(param_1, param_2, param_3);
    iStack6  = param_2;
    uStack4  = param_3;
    uStack8  = pass1_1030_2fac(str_var1(param_3, param_2));
    uStack12 = pass1_1028_bb24(param_1);
    uVar7    = pass1_1028_b58e(param_1);
    uStack14 = (uVar7 >> 0x10);
    local_16 = (uVar7 + 0xc);
    iStack26 = 0x1;
    while(true)
    {
        if(uStack8 < iStack26)
        {
            return 0x0;
        }
        iStack18 = iStack26;
        pu_var2   = &local_16;
        pass1_1030_627e(param_4, pu_var2, (uVar7 >> 0x10), globals._PTR_LOOP_1050_5740,
                        str_var1(param_4, pu_var2), uStack12);
        uStack16 = uVar7;
        pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, pu_var2, (uVar7 >> 0x10));
        uStack16 = uVar7;
        if(((uVar7 >> 0x10) | pu_var2) == 0x0)
        {
            return 0x0;
        }
        uVar7 = struct_op_1030_73a8(uVar7 & 0xffff0000 | ZEXT24(pu_var2));
        uVar5 = (uVar7 >> 0x10);
        uVar3 = uVar7;
        uVar6 = uVar5 | uVar3;
        if(uVar7 == 0x0)
        {
            return 0x0;
        }
        iVar1 = (uVar3 + 0xc);
        BVar4 = pass1_1008_c6ae(globals.dat_1050_06e0, iVar1, 0x13);
        uVar7 = str_var1(uVar6, uStack16);
        if((BVar4 == 0x0) && (iVar1 != 0x75))
            break;
        if((uVar3 + 0x12) != 0x9)
        {
            return 0x1;
        }
        iStack26 = iStack26 + 0x1;
    }
    return 0x0;
}


Struct409 *pass1_1028_1646(param_1: *mut Struct409)

{
    let mut paVar1: *mut Struct409;
    let mut u_var2: *mut Struct409;
    let mut uVar3: u16;

    uVar3  = (param_1 >> 0x10);
    u_var2  = param_1;
    paVar1 = (u_var2.field_0x20 + -0x4);
    if(paVar1 < &DAT_1050_0009)
    {
        switch(paVar1)
        {
        case0x0:
            u_var2.field_0x20 = 0x5;
            break;
        case0x1:
            u_var2.field_0x20 = 0x6;
            break;
        case0x2:
            u_var2.field_0x20 = 0x7;
            break;
        case0x3:
            u_var2.field_0x20 = 0x8;
            break;
        case0x4:
            u_var2.field_0x20 = 0x9;
            break;
        case0x5:
            u_var2.field_0x20 = 0xa;
            return u_var2;
        case0x6:
            u_var2.field_0x20 = 0xb;
            return u_var2;
        case0x7:
            u_var2.field_0x20 = 0xc;
            return u_var2;
        case0x8:
            u_var2.field_0x20 = 0xd;
            return u_var2;
        }
        return u_var2;
    }
    u_var2.field_0x20 = 0x4;
    return paVar1;
}


u16 *pass1_1028_17ae(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16)

{
    pass1_1030_dcc2(param_1, param_2, param_3, param_4, param_5);
    param_1 =  0x1b54;
    param_1.fld2_segment = SEG_1028;
    return param_1;
}


pub fn pass1_1028_17d8(param_1: u16, param_2: u16, param_3: u16)

{
    let mut extraout_DX: u16;

    pass1_1030_df0c(str_var1(param_2, param_1), param_3);
    pass1_1028_b58e(str_var1(param_2, param_1));
    pass1_1038_57dc(*(param_3 + 0x2e), 0x1, 0x3);
    return;
}


pub fn pass1_1028_1812(param_1: *mut u32, param_2: u16)

{
    pass1_1028_bdac(param_1, 0x2, param_2);
    return;
}


u16 *pass1_1020_e91e(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16)

{
    pass1_1030_dcc2(param_1, param_2, param_3, param_4, param_5);
    (param_1 + 0x24)           = 0x0;
    param_1 =  addr_table_1020_eef6;//0xeef6;
    param_1.fld2_segment      = SEG_1020;
    return param_1;
}


pub fn pass1_1020_e9d4(param_1: u16, param_2: u16, param_3: u16)

{
    let mut extraout_DX: u16;

    pass1_1030_df0c(str_var1(param_2, param_1), param_3);
    pass1_1028_b58e(str_var1(param_2, param_1));
    pass1_1038_57dc(*(param_3 + 0x2e), 0x1, 0x1);
}


pub fn pass1_1020_ea0e(u32 *param_1)

{
    pass1_1028_bdac(param_1, 0x1, SEG_1028);
    return;
}

pub fn pass1_1020_ecb0(param_1: u32, param_2: i16, param_3: u16)

{
    let mut uVar1: u32;
    let mut iVar2: i16;
    let mut uVar3: u16;
    let mut unaff_SS: u16;
    let mut uStack8: u16;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    uVar1 = (iVar2 + 0x8);
    pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    if((iVar2 + 0x12) == 0x1)
    {
        switch((param_2 + 0x14))
        {
        2 =>
        0x7 =>
            uStack8 = 0x2;
            break;
         3 =>
        0x8 =>
            uStack8 = 0x3;
            break;
        _ =>
            uStack8 = (param_2 + 0x14);
            break;
        0x5 =>
        0x6 =>
            uStack8 = 0x1;
        }
        (iVar2 + 0x14) = uStack8;
        return;
    }
    pass1_1028_bf22(param_1 & 0xffff | uVar3 << 0x10, param_3, unaff_SS);
    return;
}

pub fn pass1_1020_ed3c(param_1: u32, param_2: i16, param_3: u16, param_4: u8)

{
    let mut pi_var1: *mut i16;
    let mut u_var2: u16;
    let mut extraout_DX: u16;
    let mut extraout_DX_00: u16;
    let mut iVar3: i16;
    let mut uVar4: u16;
    let mut local_138: [u8;112] = [0;112];
    let mut uStack38: u32;
    let mut puStack30: *mut u32;
    let mut uStack28: u32;
    let mut uStack24: u32;
    let mut uStack20: u16;
    let mut local_12: i16;
    let mut local_10: [u8;2] = [0;2];
    let mut local_e: [u8;2] = [0;2];
    let mut local_c: u32;
    let mut uStack8: u16;
    let mut iStack6: i16;
    let mut uStack4: u16;

    uVar4   = (param_1 >> 0x10);
    iVar3   = param_1;
    pi_var1  = (iVar3 + 0x14);
    *pi_var1 = *pi_var1 + -0x1;
    if(*pi_var1 == 0x0)
    {
        (iVar3 + 0x12) = 0x0;
        pass1_1028_b58e(param_1);
        local_c   = (param_2 + 0xc);
        uStack8   = (param_2 + 0x10);
        puStack30 = &local_c;
        iStack6   = param_2;
        uStack4   = extraout_DX;
        pass1_1008_3eb4(str_var1(param_3, &local_c),
                        str_var1(param_3, &local_12),
                        str_var1(param_3, local_10),
                        str_var1(param_3, local_e));
        if(local_12 < 0x1)
        {
            puStack30 = 0x5;
        }
        else
        {
            puStack30 = 0x6;
        }
        (iStack6 + 0x14) = puStack30;
        if(local_12 < 0x1)
        {
            u_var2 = 0x5;
        }
        else
        {
            u_var2 = 0x9;
        }
        uStack20 = u_var2;
        pass1_1020_ee3a(param_1, u_var2, u_var2, param_3, param_4);
        pass1_1028_b58e(param_1);
        uStack24 = str_var1(extraout_DX_00, u_var2);
        uStack28 = *(u_var2 + 0x2e);
        pass1_1038_5804(uStack28, 0x1, 0x1);
        if(0x0 < (iVar3 + 0x24))
        {
            uStack38 = *(uStack28 + 0x4);
            pass1_1028_68de(str_var1(param_3, local_138), (iVar3 + 0x24), uStack38, param_4, param_3);
            fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_3, local_138));
        }
    }
    return;
}

pub fn pass1_1020_ef5e(u16 *param_1)

{
    param_1.field_0x0 = 0x0;
    param_1.field_0x2 = SEG_1028;
    pass1_1028_b418(param_1);
    return;
}

pub fn pass1_1028_0138(u16 *param_1)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: i16;
    let mut uVar5: u16;

    uVar5         = (param_1 >> 0x10);
    iVar4 = param_1;
    param_1.field_0x0 = 0x8ec;
    (iVar4 + 0x2) = SEG_1028;
    puVar1        = (iVar4 + 0x22);
    u_var2         = (iVar4 + 0x24);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    pass1_1028_b418(param_1);
    return;
}

pub fn pass1_1028_01ec(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16, param_5: u16)

{
    let mut uVar1: u32;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(((iVar2 + 0x12) == 0x6) || ((iVar2 + 0x12) == 0x5))
    {
        uVar1 = (iVar2 + 0x14);
        uVar3 = (uVar1 >> 0x10);
        iVar2 = uVar1;
        if(((iVar2 + 0xa6) == 0x14) || ((iVar2 + 0xa8) == 0x10))
        {
            pass1_1028_bdac(param_1, 0x6, param_4);
            return;
        }
        pass1_1028_be2a(param_1, param_2, param_3, param_4, param_5);
    }
    return;
}


u16 pass1_1028_04ee(param_1: u32, param_2: *mut u32, param_3: u16)

{
    let mut pi_var1: *mut i16;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut uVar4: u16;
    long lVar5;
    let mut local_a: [u8;8] = [0;8];

    *param_2 = 0x0;
    pass1_1008_5784(str_var1(param_3, local_a), *(param_1 + 0x22));
    do
    {
        lVar5 = pass1_1008_5b12(local_a, param_3);
        if(lVar5 == 0x0)
        {
            return 0x0;
        }
        u_var2   = (lVar5 + 0xc);
        uVar4   = (param_2 >> 0x10);
        uVar3   = param_2;
        param_2 = param_2 + u_var2;
        pi_var1  = (param_2 + 0x2);
        *pi_var1 = *pi_var1 + CARRY2(uVar3, u_var2);
    } while(((param_2 + 0x2) == 0x0) && (param_2 < 0x1e));
    return 0x1;
}


pub fn pass1_1028_0550(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16, param_5: u16)

{
    let mut uVar1: u16;
    let mut u_var2: u32;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut iVar5: i16;

    pass1_1028_be9e(param_1, param_2, param_3, param_4, param_5);
    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x12) == 0x5)
    {
        uVar4 = 0x0;
        iVar5 = 0x4;
        uVar3 = 0x1;
        u_var2 = pass1_1028_b58e(param_1 & 0xffff | uVar1 << 0x10);
        pass1_1030_7c50(u_var2, str_var1(uVar4, uVar3), iVar5, u_var2, (u_var2 >> 0x10));
    }
    return;
}

pub fn pass1_1028_081e(param_1: u32, param_2: i16, param_3: u16)

{
    let mut pi_var1: *mut i16;
    let mut iVar2: i16;
    let mut uVar3: u16;
    let mut uVar4: u32;
    let mut uVar5: u16;
    let mut iVar6: i16;
    let mut uVar7: u16;

    pass1_1028_b58e(param_1);
    uVar4   = (param_2 + 0x2e);
    iVar2   = (uVar4 + 0x18);
    uVar7   = (param_1 >> 0x10);
    iVar6   = param_1;
    pi_var1  = (iVar6 + 0x20);
    *pi_var1 = *pi_var1 + 0x1;
    uVar5   = *_PTR_LOOP_1050_65e2;
    uVar3   = (globals._PTR_LOOP_1050_65e2 + 0x2);
    if(iVar2 < 0xfa)
    {
        uVar5 = uVar5 & 0x1;
    }
    else
    {
        if(0x1c1 < iVar2)
        {
            if(iVar2 < 0x226)
            {
                return;
            }
            if((iVar2 < 0x2ee) && (str_var1(uVar3, uVar5) % 0x3 != 0x0))
            {
                return;
            }
            pi_var1  = (iVar6 + 0x20);
            *pi_var1 = *pi_var1 + 0x1;
            return;
        }
        uVar5 = ((qword)str_var1(uVar3, uVar5) % 0x3);
    }
    if(uVar5 != 0x0)
    {
        return;
    }
    pi_var1  = (iVar6 + 0x20);
    *pi_var1 = *pi_var1 + -0x1;
    return;
}


u16 *pass1_1020_d888(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  addr_table_1020_d8ec;//0xd8ec;
    param_1.fld2_segment = SEG_1020;
    return param_1;
}

pub fn pass1_1020_d9fa(param_1: u32, param_2: u16)

{
    let mut extraout_DX: u16;

    if((param_1 + 0xc) != 0x79)
    {
        pass1_1030_df0c(param_1, param_2);
        pass1_1028_b58e(param_1);
        pass1_1038_57dc(*(param_2 + 0x2e), 0x1, 0x2);
    }
    return;
}


pub fn pass1_1020_da3c(u32 *param_1)

{
    pass1_1028_bdac(param_1, 0x2, SEG_1028);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1020_da4e(param_1: *mut u32,param_2: *mut u16, param_3: u32, param_4: u32, param_5: u16, param_6: i16, param_7: u16)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut pu_var2: *mut u32;
    let mut uVar3: u16;
    let mut BVar4: BOOL16;
    let mut extraout_DX: *mut u8;
    let mut puVar5: *mut u8;
    let mut extraout_DX_00: *mut u8;
    let mut uVar6: u16;
    let mut uVar7: u32;
    let mut uVar8: u32;
    let mut uVar9: u16;
    let mut uVar11: u16;
    let mut puVar10: *mut u16;
    let mut uVar12: u32;
    let mut bStack31: u8;
    let mut local_e: u32;
    let mut uStack10: u16;
    let mut uStack8: u16;
    let mut u_stack6: u32;

    pu_var2 = &local_e;
    pass1_1030_64ce(param_7, pu_var2, param_5, globals._PTR_LOOP_1050_5740, param_2, param_4,
                    str_var1(param_7, pu_var2));
    u_stack6  = *pu_var2;
    uVar6    = (pu_var2 + 0x2);
    bStack31 = (u8)(u_stack6 >> 0x18);
    uVar3    = bStack31;
    if(bStack31 != 0x0)
    {
        pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, u_stack6, uVar6);
        uVar7 = struct_op_1030_73a8(str_var1(uVar6, uVar3));
        uVar6 = (uVar7 >> 0x10);
        uVar3 = uVar7;
        if((uVar3 + 0xc) == 0x10)
        {
            globals.PTR_LOOP_1050_50ca = 0x6a9;
            return;
        }
    }
    uVar9  = param_1;
    uVar11 = (param_1 >> 0x10);
    pass1_1028_c7b6(param_7, uVar6, uVar9, uVar11, param_2, param_4);
    uVar8   = param_1 & 0xffff | uVar11 << 0x10;
    ppcVar1 = (*param_1 + 0x60);
    puVar10 = param_2;
    uVar7   = param_3;
    uVar12  = param_4;
    uStack8 = uVar3;
    (**ppcVar1)();
    if(((uVar3 != 0x0) && (puVar5 = extraout_DX, pass1_1028_c23e(uVar9, uVar11, param_2, param_3, param_4, uVar3, extraout_DX, param_7), uVar3 != 0x0))
       && (BVar4 = pass1_1028_c314(param_7, uVar3, puVar5, uVar9, uVar11, param_2, param_3, (param_3 >> 0x10), param_4), BVar4 != 0x0))
    {
        uVar6 = (param_2 >> 0x10);
        if((((param_2 + 0x4) == 0x0) && (uStack8 != 0x4)) && (ppcVar1 = (*param_1 + 0x5c), (**ppcVar1)(SEG_1028, param_1, param_2, param_3, param_4, uVar8, puVar10, uVar7, uVar12), puVar5 = extraout_DX_00, BVar4 == 0x0))
        {
            return;
        }
        uStack10 = (param_2 + 0x4);
        if(uStack10 != 0x0)
        {
            pass1_1020_df10(param_1, (param_2 & 0xffff | uVar6 << 0x10), param_4, uStack10, puVar5, param_6, param_7);
            return;
        }
        pass1_1020_deac(param_1, (param_2 & 0xffff | uVar6 << 0x10), param_4, 0x0, puVar5, param_6, param_7);
        return;
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1020_db86(param_1: u16, param_2: u16,param_3: *mut u16, param_4: u32, long param_5, param_6: u16)

{
    let mut iVar1: i16;
    let mut pu_var2: *mut u8;
    let mut uVar3: u16;
    let mut uVar4: u32;
    let mut puVar5: *mut u16;
    let mut local_4: [u8;2] = [0;2];

    uVar4 = pass1_1030_bcae(local_4, param_6);
    uVar3 = (uVar4 >> 0x10);
    iVar1 = uVar4;
    pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, param_4, (param_4 >> 0x10));
    uVar4  = *(iVar1 + 0x10);
    puVar5 = param_3;
    pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uVar4, (uVar4 >> 0x10));
    pu_var2 = local_4;
    pass1_1030_bcde(param_6, pu_var2, param_6, uVar4 & 0xffff | uVar3 << 0x10, puVar5, param_5);
    if(pu_var2 < 0x0)
    {
        globals.PTR_LOOP_1050_50ca = 0x6af;
    }
    else
    {
        if((pu_var2 < 0x1f) || ((param_3 + 0x4) < 0x1))
        {
            return;
        }
        globals.PTR_LOOP_1050_50ca = 0x6b6;
        globals.PTR_LOOP_1050_50cc = pu_var2 + -0x1e;
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1020_dc1c(param_1: u32,param_2: *mut u16, param_3: u16)

{
    let mut iVar1: i16;
    let mut ppcVar2: *mut *mut c_void;
    let mut puVar3: *mut u32;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut uVar6: u32;
    let mut puVar7: *mut u32;
    let mut puVar8: *mut u32;
    let mut bStack27: u8;
    let mut local_a: [u8;4] = [0;4];
    let mut u_stack6: u32;

    puVar8 = str_var1(param_3, local_a);
    uVar6  = pass1_1028_bb24(param_1);
    uVar5  = (uVar6 >> 0x10);
    puVar3 = uVar6;
    pass1_1030_64ce(param_3, puVar3, uVar5, globals._PTR_LOOP_1050_5740, param_2, uVar6 & 0xffff | uVar5 << 0x10, puVar8);
    u_stack6  = *puVar3;
    uVar5    = (puVar3 + 0x2);
    bStack27 = (u8)(u_stack6 >> 0x18);
    uVar4    = bStack27;
    if(bStack27 != 0x0)
    {
        pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, u_stack6, uVar5);
        puVar7 = struct_op_1030_73a8(str_var1(uVar5, uVar4));
        iVar1  = (puVar7 + 0xc);
        if(((iVar1 < 0x1) || (SBORROW2(iVar1, 0x1))) || ((iVar1 != 0x9 && 0x7 < iVar1 + -0x1 && ((iVar1 + -0x9 < 0x6a || (0x6 < iVar1 + -0x73))))))
        {
            ppcVar2 = (*puVar7 + 0x24);
            (**ppcVar2)();
        }
    }
    return;
}


// WARNING: Could not reconcile some variable overlaps

pub fn pass1_1020_dca8(param_1: u32, param_2: u16, param_3: u16)

{
    let mut uVar1: u16;
    let mut u_var2: u16;
    let mut local_2e: [u8;e] = [0;e];
    let mut puStack32: *mut u32;
    let mut uStack30: u16;
    let mut uStack28: u16;
    let mut uStack26: u16;
    let mut uStack24: u16;
    let mut uStack22: u16;
    let mut uStack20: u16;
    let mut uStack18: u16;
    let mut local_10: u32;
    let mut uStack12: u16;
    let mut uStack10: u32;
    let mut local_6: [u8;2] = [0;2];
    let mut local_4: i16;

    pass1_1028_c1f8(param_3, local_6, param_2, param_1,
                    str_var1(param_3, local_6),
                    str_var1(param_3, &local_4));
    uStack10  = pass1_1028_b58e(param_1);
    uVar1     = (uStack10 >> 0x10);
    local_10  = (uStack10 + 0xc);
    uStack12  = (uStack10 + 0x10);
    puStack32 = &local_10;
    uStack18  = local_10;
    uStack20  = (local_10 >> 0x10);
    uStack24  = local_10 - 0x1;
    if(uStack24 < 0x0)
    {
        uStack24 = 0x0;
    }
    u_var2    = local_4 - 0x1;
    uStack26 = local_10 + 0x1;
    if(u_var2 < (local_10 + 0x1))
    {
        uStack26 = u_var2;
    }
    uStack28 = uStack20 - 0x1;
    if(uStack28 < 0x0)
    {
        uStack28 = 0x0;
    }
    uStack30 = uStack20 + 0x1;
    if(u_var2 < (uStack20 + 0x1))
    {
        uStack30 = u_var2;
    }
    uStack22 = uStack12;
    pass1_1008_3e54(str_var1(param_3, local_2e), uStack12, uStack28, uStack24);
    pass1_1020_dc1c(param_1, str_var1(param_3, local_2e), param_3);
    pass1_1008_3e54(str_var1(param_3, local_2e), uStack22, uStack28, uStack18);
    pass1_1020_dc1c(param_1, str_var1(param_3, local_2e), param_3);
    pass1_1008_3e54(str_var1(param_3, local_2e), uStack22, uStack28, uStack26);
    pass1_1020_dc1c(param_1, str_var1(param_3, local_2e), param_3);
    pass1_1008_3e54(str_var1(param_3, local_2e), uStack22, uStack20, uStack24);
    pass1_1020_dc1c(param_1, str_var1(param_3, local_2e), param_3);
    pass1_1008_3e54(str_var1(param_3, local_2e), uStack22, uStack20, uStack26);
    pass1_1020_dc1c(param_1, str_var1(param_3, local_2e), param_3);
    pass1_1008_3e54(str_var1(param_3, local_2e), uStack22, uStack30, uStack24);
    pass1_1020_dc1c(param_1, str_var1(param_3, local_2e), param_3);
    pass1_1008_3e54(str_var1(param_3, local_2e), uStack22, uStack30, uStack18);
    pass1_1020_dc1c(param_1, str_var1(param_3, local_2e), param_3);
    pass1_1008_3e54(str_var1(param_3, local_2e), uStack22, uStack30, uStack26);
    pass1_1020_dc1c(param_1, str_var1(param_3, local_2e), param_3);
    return;
}

BOOL16 pass1_1020_deac(param_1: u32,param_2: *mut u16, long param_3, param_4: i16, param_5: *mut u8, param_6: i16, param_7: u16)

{
    let mut uVar1: u16;
    let mut u_var2: u16;

    uVar1 = param_1;
    u_var2 = (param_1 >> 0x10);
    pass1_1028_c7b6(param_7, param_5, uVar1, u_var2, param_2, param_3);
    if(param_4 < 0x1)
    {
        return 0x0;
    }
    if(SBORROW2(param_4, 0x1))
    {
        return 0x0;
    }
    if(param_4 != 0x3 && 0x0 < param_4 + -0x2)
    {
        if(param_4 == 0x4)
        {
            pass1_1020_de32(param_1, 0x4, param_5, param_6, param_7);
            if((uVar1 + 0x24) == 0x6)
            {
                return 0x1;
            }
            return 0x0;
        }
        if(param_4 != 0x5)
        {
            return 0x0;
        }
    }
    (uVar1 + 0x24) = 0x1;
    return 0x1;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1020_df10(param_1: u32,param_2: *mut u16, long param_3, param_4: u16, param_5: *mut u8, param_6: i16, param_7: u16)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut BVar3: BOOL16;
    let mut uVar4: u16;
    let mut uVar5: u32;
    let mut uVar6: u16;
    let mut uVar7: u16;
    let mut bStack31: u8;
    let mut local_e: u32;
    let mut uStack10: u32;
    let mut u_stack6: u16;
    let mut uStack4: u16;

    uStack4 = 0x0;
    uVar6   = param_1;
    uVar7   = (param_1 >> 0x10);
    pass1_1028_c7b6(param_7, param_5, uVar6, uVar7, param_2, param_3);
    u_stack6 = param_4;
    if(param_4 == 0x0)
    {
        puVar1 = &local_e;
        pass1_1030_64ce(param_7, puVar1, param_5, globals._PTR_LOOP_1050_5740, param_2, param_3,
                        str_var1(param_7, puVar1));
        uStack10 = *puVar1;
        uVar4    = (puVar1 + 0x2);
        bStack31 = (u8)(uStack10 >> 0x18);
        u_var2    = bStack31;
        if(bStack31 != 0x0)
        {
            pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uStack10, uVar4);
            uVar5 = struct_op_1030_73a8(str_var1(uVar4, u_var2));
            if((uVar5 + 0xc) == 0x6a)
            {
                BVar3 = pass1_1020_e044(param_1);
                if(BVar3 == 0x0)
                {
                    (uVar6 + 0x24) = 0x1;
                }
                else
                {
                    globals.PTR_LOOP_1050_50ca = 0x6ac;
                }
            }
        }
    }
    else
    {
        if(((0x5 < param_4) && (!SBORROW2(param_4, 0x6))) && ((param_4 - 0x6) < 0x4))
        {
            pass1_1020_de32(param_1, param_4, param_5, param_6, param_7);
            switch((uVar6 + 0x24))
            {
            0x1 =>
                BVar3 = pass1_1020_e044(param_1);
                if(BVar3 != 0x0)
                {
                    globals.PTR_LOOP_1050_50ca = 0x6ac;
                }
                break;
            2 =>
             3 =>
            0x4 =>
            0x5 =>
                pass1_1020_e652(param_1, param_2, (param_2 >> 0x10), param_3, param_7);
            }
        }
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL16 pass1_1020_e044(param_1: u32)

{
    let mut uVar1: u32;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut uVar4: u32;

    uVar3 = (param_1 >> 0x10);
    uVar4 = pass1_1018_04b8(*(param_1 + 0x28));
    pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uVar4, (uVar4 >> 0x10));
    u_var2 = pass1_1030_2fac(uVar4);
    uVar1 = (param_1 + 0x28);
    if(u_var2 <= (uVar1 + 0x1e))
    {
        return 0x1;
    }
    return 0x0;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1020_e08e(param_1: u32, param_2: u16, param_3: u16, param_4: u8)

{
    let mut iVar1: i16;
    let mut u_var2: u32;
    let mut iVar3: i16;
    let mut iVar4: i16;
    let mut uVar5: u32;
    let mut extraout_DX: u16;
    let mut uVar6: u16;
    let mut uVar7: u16;
    let mut uVar8: u16;
    let mut piVar9: *mut i16;
    let mut puVar10: *mut u16;
    let mut uVar11: u16;
    let mut uVar12: u16;
    let mut local_158: u16;
    let mut uStack342: u16;
    let mut uStack50: u32;
    let mut puStack42: *mut u32;
    let mut local_22: i16;
    let mut local_20: [u8;2] = [0;2];
    let mut local_1e: [u8;2] = [0;2];
    let mut uStack28: u16;
    let mut piStack26: *mut i16;
    let mut local_18: i16;
    let mut local_16: u16;
    let mut uStack20: u32;
    let mut local_10: u32;
    let mut iStack12: i16;
    let mut uStack10: u32;
    let mut u_stack6: u32;

    uVar8 = (param_1 >> 0x10);
    uVar7 = param_1;
    iVar3 = (uVar7 + 0xc);
    if(iVar3 == 0x74)
    {
        iVar1 = (uVar7 + 0x24);
        iVar3 = iVar1 + -0x1;
        if(iVar3 == 0x0)
            goto LAB_1020_e0ae;
        iVar3 = iVar1 + -0x6;
        if(iVar3 != 0x0)
            goto LAB_1020_e0b9;
        uVar11 = 0x1;
    }
    else
    {
        if(iVar3 == 0x78)
        {
            iVar1 = (uVar7 + 0x24);
            iVar4 = iVar1 + -0x1;
            if(iVar4 != 0x0)
            {
                iVar3 = iVar1 + -0x2;
                if((0x0 < iVar4) && (!SBORROW2(iVar4, 0x1)))
                {
                    if(iVar1 + -0x5 == 0x0 || iVar3 < 0x3)
                    {
                        iVar3 = iVar1 + -0x5;
                        pass1_1020_e49a(param_1, param_3, param_4);
                    }
                    else
                    {
                        iVar3 = iVar1 + -0x6;
                        if(iVar3 == 0x0)
                        {
                            pass1_1020_e39c(param_1, 0x6, 0x0, param_3, param_4);
                            pass1_1020_dca8(param_1, param_2, param_3);
                        }
                    }
                }
                goto LAB_1020_e0b9;
            }
            uVar11 = 0x6a;
            iVar3  = iVar4;
        }
        else
        {
            iVar3 = iVar3 + -0x79;
            if(iVar3 == 0x0)
            {
                pass1_1020_e49a(param_1, param_3, param_4);
                return;
            }
        // LAB_1020_e0ae:
            uVar11 = 0x47;
        }
    }
    pass1_1020_e39c(param_1, uVar11, iVar3, param_3, param_4);
// LAB_1020_e0b9:
    pass1_1028_b58e(param_1);
    u_stack6  = str_var1(extraout_DX, iVar3);
    uVar5    = *(iVar3 + 0x2e);
    uVar6    = (iVar3 + 0x30);
    uStack10 = uVar5;
    if((uVar7 + 0xc) != 0x79)
    {
        pass1_1038_5804(uVar5 & 0xffff | uVar6 << 0x10, 0x1, 0x2);
    }
    if((uVar7 + 0x24) == 0x6)
    {
        pass1_1038_43cc(uStack10, (uStack10 >> 0x10), 0x1, 0x2, uVar5, uVar6);
    }
    local_10  = *(u_stack6 + 0xc);
    iStack12  = (u_stack6 + 0x10);
    puStack42 = &local_10;
    if(((uVar7 + 0x24) == 0x6) && (iStack12 == 0x0))
    {
        return;
    }
    u_var2     = (uVar7 + 0x28);
    uVar5     = *(u_var2 + 0x20);
    puVar10   = &local_16;
    piStack26 = &local_18;
    piVar9    = piStack26;
    uVar11    = param_3;
    uVar12    = param_3;
    uStack20  = uVar5;
    pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uVar5, (uVar5 >> 0x10));
    uStack28 = uVar5;
    pass1_1030_5b1c(uVar5 & 0xffff | ZEXT24(piStack26) << 0x10,
                    str_var1(uVar11, piVar9),
                    str_var1(uVar12, puVar10));
    pass1_1028_c8ee(param_3, uVar7, uVar8, (uVar7 + 0x24), str_var1(param_3, &local_10));
    pass1_1008_3eb4(str_var1(param_3, &local_10),
                    str_var1(param_3, &local_22),
                    str_var1(param_3, local_20),
                    str_var1(param_3, local_1e));
    if((uVar7 + 0x24) == 0x1)
    {
        if(local_18 < local_22)
        {
            pass1_1030_5b3e(str_var1(piStack26, uStack28), local_22, local_16);
            pass1_1030_5b1c(str_var1(piStack26, uStack28),
                            str_var1(param_3, &local_18),
                            str_var1(param_3, &local_16));
        }
        uStack50 = *(uStack10 + 0x4);
        struct_op_1028_87f0(param_3, param_4, str_var1(param_3, &local_158), 0x0, 0x0, 0x6a, &local_10, param_3, uStack50, uStack20);
        fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_3, &local_158));
        local_158 = addr_table_1008_380a[36]; // 0x389a
        uStack342 = SEG_1008;
    }
    pass1_1028_ccd0(param_4, param_3, param_1, str_var1(param_3, &local_10));
    return;
}

pub fn pass1_1020_e44c(param_1: u32, param_2: u16, param_3: u16, param_4: u8)

{
    let mut pi_var1: *mut i16;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0x12) == 0x2)
    {
        pi_var1  = (iVar2 + 0x14);
        *pi_var1 = *pi_var1 + -0x1;
        if(((iVar2 + 0x26) == 0x0) && ((iVar2 + 0xc) == 0x78))
        {
            pass1_1020_e294(param_1 & 0xffff | uVar3 << 0x10, param_3, param_4);
        }
        if((iVar2 + 0x14) == 0x0)
        {
            pass1_1020_e08e(param_1 & 0xffff | uVar3 << 0x10, param_2, param_3, param_4);
            return;
        }
        if((iVar2 + 0x24) == 0x6)
        {
            (iVar2 + 0xe) = 0x49;
        }
    }
    return;
}


pub fn pass1_1020_e49a(param_1: u32, param_2: u16, param_3: u8)

{
    let mut iVar1: i16;
    let mut iVar2: i16;
    let mut uVar3: u32;
    let mut uStack10: u16;

    uVar3    = pass1_1028_b58e(param_1);
    iVar1    = (uVar3 + 0x14);
    uStack10 = 0x0;
    iVar2    = iVar1 + -0x6;
    if(iVar2 == 0x0)
    {
        uStack10 = 0x9;
    }
    else
    {
        iVar2 = iVar1 + -0x7;
        if(iVar2 == 0x0)
        {
            uStack10 = 0x6;
        }
        else
        {
            iVar2 = iVar1 + -0x8;
            if(iVar2 == 0x0)
            {
                uStack10 = 0x7;
            }
            else
            {
                iVar2 = iVar1 + -0x9;
                if(iVar2 == 0x0)
                {
                    uStack10 = 0x8;
                }
            }
        }
    }
    pass1_1020_e39c(param_1, uStack10, iVar2, param_2, param_3);
    return;
}


i16 pass1_1020_e4fa(param_1: u32, param_2: u16)

{
    let mut uVar1: u32;
    let mut iStack4: i16;

    switch(param_2)
    {
    2 =>
    0x5 =>
    0x6 =>
    0x7 =>
        iStack4 = 0x4;
        break;
     3 =>
    0x8 =>
        iStack4 = 0x5;
        break;
    _ =>
        uVar1   = pass1_1028_b58e(param_1);
        iStack4 = (uVar1 + 0x14) + 0x2;
    }
    return iStack4;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1020_e558(param_1: u32, param_2: i16, param_3: u16)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut iVar3: i16;
    let mut extraout_DX: u16;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut uVar7: u16;
    let mut bStack45: u8;
    let mut local_24: [u8;c] = [0;c];
    let mut uStack24: u32;
    let mut uStack20: u32;
    let mut local_10: u32;
    let mut uStack12: u16;
    let mut iStack10: i16;
    let mut uStack8: u16;
    let mut iStack6: i16;
    let mut uStack4: u16;

    uVar7 = (param_1 >> 0x10);
    uVar6 = param_1;
    if((uVar6 + 0xc) == 0x79)
    {
        param_2        = (uVar6 + 0x24);
        (uVar6 + 0x14) = param_2;
        (uVar6 + 0x24) = 0x0;
    }
    if((uVar6 + 0x24) != 0x6)
    {
        pass1_1028_b58e(param_1);
        uStack8  = (param_2 + 0x14);
        iStack6  = param_2;
        uStack4  = extraout_DX;
        iStack10 = pass1_1020_e4fa(param_1, uStack8);
        local_10 = (iStack6 + 0xc);
        uStack12 = (iStack6 + 0x10);
        uStack24 = str_var1(uStack24, &local_10);
        uVar4    = uStack4;
        pass1_1028_c8ee(param_3, uVar6, uVar7, (uVar6 + 0x24), str_var1(param_3, &local_10));
        puVar1 = &local_10;
        pass1_1028_c89c(param_1,
                        str_var1(param_3, puVar1),
                        str_var1(param_3, local_24), puVar1, param_3);
        uStack24       = *puVar1;
        uVar5          = (puVar1 + 0x2);
        bStack45       = (u8)(uStack24 >> 0x18);
        u_var2          = bStack45;
        uStack20 = uStack24;
        uStack20       = uStack24;
        if(bStack45 != 0x0)
        {
            pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uStack20, uVar5);
            uStack20 = (u_var2 + 0x14);
        }
        uStack8        = uStack20;
        iVar3          = pass1_1020_e4fa(param_1, uStack20);
        (uVar6 + 0x14) = iStack10 + iVar3;
        return;
    }
    (uVar6 + 0x14) = 0x1;
    return;
}

u32 *pass1_1020_e652(param_1: u32, param_2: *mut u32, param_3: u16, long param_4, param_5: u16)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut local_8: u32;
    let mut uStack4: u16;

    local_8 = *param_2;
    uStack4 = (param_2 + 0x1);
    uVar3   = (param_1 >> 0x10);
    u_var2   = param_1;
    pass1_1028_c8ee(param_5, u_var2, uVar3, (u_var2 + 0x24), str_var1(param_5, &local_8));
    puVar1 = &local_8;
    pass1_1028_c7b6(param_5, param_3, u_var2, uVar3, str_var1(param_5, puVar1), param_4);
    if(puVar1 != 0x0)
    {
        puVar1 = (&PTR_LOOP_1050_0000 + 0x1);
    }
    return puVar1;
}

u16 *pass1_1020_e81c(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  addr_table_1020_e88e;//0xe88e;
    param_1.fld2_segment = SEG_1020;
    return param_1;
}


pub fn pass1_1020_e846(u16 *param_1) {
    param_1.field_0x0 = addr_table_1020_e88e;//0xe88e;
    param_1.field_0x2 = SEG_1020;
    pass1_1028_b418(param_1);
    return;
}

i16 pass1_1020_c7fa(param_1: u32, param_2: u32)

{
    return (param_1 + 0x4) - (param_2 + 0x4);
}


u32 pass1_1020_c860(param_1: u32)

{
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    return str_var1((param_1 + 0x6), (param_1 + 0x4));
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1020_c872(param_1: u32, param_2: u32, param_3: u32)

{
    let mut puVar1: *mut u16;
    let mut pu_var2: *mut u32;
    let mut piVar3: *mut i16;
    let mut uVar4: *mut Struct98;
    let mut uVar6: u16;
    let mut iVar7: i16;
    let mut iVar8: i16;
    let mut uVar9: u16;
    let mut uVar10: u16;
    let mut uVar11: u16;
    let mut bVar12: bool;
    let mut uStack14: u32;
    let mut uStack10: u32;
    let mut pu_stack6: *mut Struct99;
    let mut uVar5: *mut Struct99;

    pu_stack6 = pass1_1000_07fc(SEG_1000, globals.u32_ptr_1050_4fb8);
    uVar6 = (pu_stack6 >> 0x10);
    uVar5    = pu_stack6;
    if((uVar6 | uVar5) == 0x0)
    {
        pu_stack6 = 0x0;
    }
    else {
        pu_stack6.field_0x0 = addr_table_1008_380a[36]; // 0x389a
        uVar5.field_0x2 = SEG_1008;
        uVar5.field_0x4 = 0x0;
        uVar5.field_0x8 = 0x0;
        pu_stack6.field_0x0 = addr_table_1008_5bc0;//0x5bc0;
        uVar5.field_0x2 = SEG_1008;
        uVar5.field_0xe = 0x0;
        uVar5.field_0xc = 0x0;
        pu_stack6.field_0x0 = addr_table_1020_c9e6;//0xc9e6;
        uVar5.field_0x2 = SEG_1020;
    }
    if(pu_stack6 == 0x0)
    {
        return;
    }
    uVar9          = (pu_stack6 >> 0x10);
    iVar7          = pu_stack6;
    *(iVar7 + 0x8) = param_3;
    *(iVar7 + 0xc) = param_2;
    uVar10         = (param_1 >> 0x10);
    iVar8          = param_1;
    uStack14       = *(iVar8 + 0x4);
    uVar11         = (iVar8 + 0x6);
    if((iVar8 + 0x8) == 0x0)
    {
    // LAB_1020_c92d:
        (iVar7 + 0x4) = (iVar8 + 0x4);
    }
    else
    {
        puVar1 = (uStack14 + 0xe);
        bVar12 = *puVar1 < param_2;
        if((bVar12 || *puVar1 == param_2) && ((bVar12 || (puVar1 = (uStack14 + 0xc), *puVar1 < param_2 || *puVar1 == param_2))))
            goto LAB_1020_c92d;
        bVar12 = false;
        while(true)
        {
            if(uStack14 == 0x0)
                break;
            uVar11 = (uStack14 >> 0x10);
            pu_var2 = (uStack14 + 0xc);
            if(*pu_var2 < param_2 || *pu_var2 == param_2)
            {
                bVar12                           = true;
                *(iVar7 + 0x4)                   = uStack14;
                (uStack10 + 0x4) = pu_stack6;
                break;
            }
            uStack10 = uStack14;
            uStack14 = *(uStack14 + 0x4);
        }
        param_1 = uStack10;
        if(bVar12)
            goto LAB_1020_c9ab;
    }
    uVar11          = (param_1 >> 0x10);
    (param_1 + 0x4) = iVar7;
    (param_1 + 0x6) = uVar9;
// LAB_1020_c9ab:
    piVar3  = (iVar8 + 0x8);
    *piVar3 = *piVar3 + 0x1;
    return;
}


u16 *pass1_1020_c9ba(u16 *param_1, param_2: u8) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (param_1)[0x1] = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        pass1_1000_093a(param_1, uVar1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1020_ca0c(param_1: *mut Struct179, param_2: u16, param_3: i16, param_4: u32, param_5: u16)

{
    pass1_1028_0982(param_1, param_2, param_3, param_4, param_5);
    param_1.field_0x0 =  addr_table_1020_cc7c;//0xcc7c;
    param_1.field_0x2         = SEG_1020;
    return param_1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1020_ca36(param_1: i16, param_2: u16, param_3: u16, param_4: i16, param_5: u16)

{
    let mut puVar1: *mut u8;
    let mut u_var2: u32;
    let mut puVar3: *mut u16;

    pass1_1028_09b8(str_var1(param_2, param_1));
    u_var2  = pass1_1028_b4f2(str_var1(param_2, param_1));
    puVar1 = (u_var2 >> 0x10);
    if((u_var2 + 0x200) != 0x8000002)
    {
        puVar3 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x8, param_5, puVar1, param_4);
        pass1_1010_988c(puVar3, (param_1 + 0xc));
    }
    return;
}


pub fn pass1_1020_ca82(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16)

{
    let mut puVar1: *mut u8;
    let mut u_var2: u16;
    let mut uVar3: u32;

    pass1_1028_be9e(param_1, param_2, param_3, SEG_1028, param_4);
    uVar3  = pass1_1028_b4f2(param_1);
    puVar1 = (uVar3 >> 0x10);
    if((uVar3 + 0x200) != 0x8000002)
    {
        u_var2 = (param_1 >> 0x10);
        if((param_1 + 0x12) == 0x5)
        {
            pass1_1020_cac2(param_1 & 0xffff | u_var2 << 0x10, puVar1, param_2, param_3, param_4);
        }
    }
    return;
}


u16 *pass1_1020_cd06(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  addr_table_1020_cd7e;//0xcd7e;
    param_1.fld2_segment = SEG_1020;
    return param_1;
}


u16 pass1_1020_cd30(param_1: u32)

{
    let mut iVar1: i16;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((((iVar1 + 0x12) == 0x6) || ((iVar1 + 0x12) == 0x5)) && (((iVar1 + 0x1a) & 0x2) != 0x0))
    {
        return 0x1;
    }
    return 0x0;
}


u16 *pass1_1020_ce08(param_1: *mut Struct179, param_2: u16, param_3: i16, param_4: u32, param_5: u16)

{
    pass1_1028_0982(param_1, param_2, param_3, param_4, param_5);
    param_1 =  addr_table_1020_d004;//0xd004;
    param_1.field_0x2         = SEG_1020;
    return param_1;
}

pub fn pass1_1020_cf6c(param_1: u16, param_2: u16, param_3: i16, param_4: u32)

{
    let mut puVar1: *mut u16;
    let mut piVar2: *mut i16;
    let mut uVar3: u16;
    let mut uVar4: u32;
    let mut uVar5: u16;
    let mut iVar6: i16;
    let mut uVar7: u16;
    let mut uVar8: u16;
    let mut iVar9: i16;
    let mut uVar10: u16;

    uVar10            = (param_4 >> 0x10);
    uVar4             = (param_4 + 0x1f6);
    iVar6             = uVar4;
    uVar5             = (uVar4 >> 0x10);
    uVar7             = param_3 / 0x5;
    uVar8             = uVar7 * -0x4 + param_3;
    puVar1            = (iVar6 + 0x50);
    uVar3             = *puVar1;
    *puVar1           = *puVar1 + uVar8;
    piVar2            = (iVar6 + 0x52);
    *piVar2           = *piVar2 + (uVar8 >> 0xf) + CARRY2(uVar3, uVar8);
    iVar9             = uVar7 >> 0xf;
    puVar1            = (iVar6 + 0x78);
    uVar3             = *puVar1;
    *puVar1           = *puVar1 + uVar7;
    piVar2            = (iVar6 + 0x7a);
    *piVar2           = *piVar2 + iVar9 + CARRY2(uVar3, uVar7);
    puVar1            = (iVar6 + 0xa0);
    uVar3             = *puVar1;
    *puVar1           = *puVar1 + uVar7;
    piVar2            = (iVar6 + 0xa2);
    *piVar2           = *piVar2 + iVar9 + CARRY2(uVar3, uVar7);
    puVar1            = (iVar6 + 0xc8);
    uVar3             = *puVar1;
    *puVar1           = *puVar1 + uVar7;
    piVar2            = (iVar6 + 0xca);
    *piVar2           = *piVar2 + iVar9 + CARRY2(uVar3, uVar7);
    puVar1            = (iVar6 + 0xf0);
    uVar3             = *puVar1;
    *puVar1           = *puVar1 + uVar7;
    piVar2            = (iVar6 + 0xf2);
    *piVar2           = *piVar2 + iVar9 + CARRY2(uVar3, uVar7);
    (param_4 + 0x1fe) = 0x1;
    return;
}

u16 *pass1_1020_d08e(param_1: i16, param_2: u16, param_3: i16, param_4: u32, param_5: u16)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  addr_table_1020_d314;//0xd314;
    param_1.fld2_segment = SEG_1020;
    return param_1;
}


pub fn pass1_1020_d0b8(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16)

{
    let mut uVar1: u32;
    let mut iVar2: i16;

    if((param_1 + 0x12) != 0x6)
    {
        return;
    }
    uVar1 = pass1_1028_b4f2(param_1);
    iVar2 = uVar1;
    if((iVar2 + 0x200) != 0x8000002)
    {
        pass1_1028_cb04(param_1, param_2, param_3, param_4);
        if((iVar2 == 0x0) || (pass1_1020_d194(param_1, param_3, param_4), iVar2 == 0x0))
        {
            iVar2 = 0x6;
            goto LAB_1020_d10b;
        }
        pass1_1028_c952(param_1, param_2, param_3, param_4);
    }
    iVar2 = 0x5;
// LAB_1020_d10b:
    pass1_1028_bdac(param_1, iVar2, SEG_1028);
    return;
}


u16 pass1_1020_d118(param_1: u32,param_2: *mut u16, param_3: u32, param_4: u32, param_5: i16, param_6: u16, param_7: u16)

{
    let mut BVar1: BOOL16;
    let mut u_var2: u16;
    let mut uVar3: u16;

    u_var2 = param_1;
    uVar3 = (param_1 >> 0x10);
    pass1_1028_c7b6(param_7, param_6, u_var2, uVar3, param_2, param_4);
    if(param_5 == 0x5)
    {
        pass1_1028_c23e(u_var2, uVar3, param_2, param_3, param_4, 0x5, param_6, param_7);
        if(param_5 != 0x0)
        {
            pass1_1028_c3aa(u_var2, uVar3, param_2, param_3, param_4, param_7);
            if(param_5 != 0x0)
            {
                BVar1 = pass1_1028_c314(param_7, param_5, param_6, u_var2, uVar3, param_2, param_3, (param_3 >> 0x10), param_4);
                if(BVar1 != 0x0)
                {
                    return 0x1;
                }
            }
        }
    }
    else
    {
        globals.PTR_LOOP_1050_50ca = 0x6a8;
    }
    return 0x0;
}
