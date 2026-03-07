

// #include "address_tables/function_tables.h"
// #include "structs/structs_0xx/structs_8x.h"
// #include "op_int.h"
// #include "op_windef.h"
// #include "globals.h"
// #include "unk_13.h"
pub fn pass1_1010_0f76(u16 *param_1, param_2: u16)

{
//    u16 uVar1;

//    uVar1           = (param_1 >> 0x10);
    param_1.field_0x0        = addr_table_1010_191a; //s_648_bmp_1050_1919 + 0x1;
    param_1.field_0x2 = SEG_1010;
    pass1_1010_17c0(param_1);
    pass1_1010_2db2(param_1, param_2);
}

pub fn pass1_1010_1146(param_1: u32, param_2: u16, param_3: i16, param_4: u16)

{
    let mut uVar1: u32;
    let mut u_var2: u16;

    DAT_1050_0ecc = param_2;
    u_var2         = (param_1 >> 0x10);
    uVar1         = (param_1 + 0x66);
    pass1_1000_4aea(*(param_1 + 0x64), uVar1, (uVar1 >> 0x10), 0x4, (s_dibtext_bmp_1050_1844 + 0x6), &stack0xfffe, param_3, u_var2, SEG_1000, param_4);
    return;
}

pub fn pass1_1010_116c(param_1: *mut u32, param_2: i16, param_3: u16)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut iVar2: i16;
    let mut uVar3: u16;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut uVar6: u32;
    let mut uStack4: u16;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x56) != 0x0)
    {
        ppcVar1 = (*param_1 + 0x34);
        (**ppcVar1)();
    }
    ppcVar1 = (*param_1 + 0x28);
    uVar6   = (**ppcVar1)();
    uVar3   = (uVar6 >> 0x10);
    if(uVar6 != 0x0)
    {
        uStack4 = DAT_1050_0ecc;
        iVar2   = DAT_1050_0ecc + 0x1;
        if(iVar2 == 0x0)
        {
            uStack4 = 0x0;
        }
        pass1_1010_1146(param_1, uStack4, param_2, param_3);
        pass1_1010_11c6(param_1, iVar2, uVar3);
        (iVar4 + 0x56) = iVar2;
        (iVar4 + 0x58) = uVar3;
    }
    return;
}

pub fn pass1_1008_e852(param_1: u16, param_2: u16, param_3: u32, param_4: u16, param_5: u16)

{
    let mut puVar1: *mut u8;
    let mut iVar2: i16;
    let mut pcVar3: *mut c_char;
    let mut local_14: [u8;12] = [0;12];

    pass1_1028_dc52(str_var1(param_4, local_14), 0x1, 0x0, 0x400);
    do
    {
        puVar1 = local_14;
        pass1_1028_e4ec(str_var1(param_4, puVar1));
        if((param_5 | puVar1) == 0x0)
        {
            return;
        }
        pcVar3  = pass1_1038_4d28(str_var1(param_5, puVar1));
        param_5 = (pcVar3 >> 0x10);
        iVar2   = pass1_1000_3d7a(param_3, pcVar3 & 0xffff | param_5 << 0x10);
    } while(iVar2 != 0x0);
    return;
}

long pass1_1008_e8cc(param_1: u16, param_2: *mut Struct102, param_3: u32, param_4: u32)

{
    let mut uVar1: u32;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut uVar6: u16;
    long       lVar7;
    let mut pcVar8: *mut c_char;
    let mut pcVar9: *mut c_char;
    let mut uStack22: u32;
    let mut uStack18: u32;
    let mut local_a: [u8;8] = [0;8];

    pass1_1008_5784(str_var1(param_1, local_a), *(param_2 + 0xa));
    while(true)
    {
        lVar7 = pass1_1008_5b12(local_a, param_1);
        uVar5 = (lVar7 >> 0x10);
        u_var2 = lVar7;
        uVar6 = uVar5 | u_var2;
        if(lVar7 == 0x0)
        {
            return 0x0;
        }
        uVar1 = (u_var2 + 0x4);
        uVar3 = u_var2;
        pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
        uStack18 = str_var1(uVar6, uVar3);
        uVar1    = (u_var2 + 0x8);
        pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
        uStack22 = str_var1(uVar6, uVar3);
        pcVar8   = pass1_1038_4d28(uStack18);
        pcVar9   = pass1_1038_4d28(uStack22);
        iVar4    = pass1_1000_3d7a(param_4, pcVar8);
        if((iVar4 == 0x0) && (iVar4 = pass1_1000_3d7a(param_3, pcVar9), iVar4 == 0x0))
            break;
        iVar4 = pass1_1000_3d7a(param_3, pcVar8);
        if((iVar4 == 0x0) && (iVar4 = pass1_1000_3d7a(param_4, pcVar9), iVar4 == 0x0))
        {
            return lVar7;
        }
    }
    return lVar7;
}


u32 pass1_1008_eb5c(param_1: u16, param_2: u16, i16 param_3)

{
    return str_var1(0x1050, param_3 * 0x10 + 0xd0e);
}


u16 pass1_1008_eb6e(void)

{
    return 0x5;
}

pub fn pass1_1008_ec94(u16 *param_1)

{
    param_1.field_0x0 = addr_table_1008_efc4;//0xefc4;
    param_1.field_0x2 = SEG_1008;
    pass1_1010_3880(param_1);
    return;
}

pub fn pass1_1008_ed00(u16 *param_1, param_2: u16) {
    param_1.field_0x0 = addr_table_1008_ef9c;//0xef9c;
    param_1.field_0x2 = SEG_1008;
    pass1_1010_2db2(param_1, param_2);
    return;
}


pub fn pass1_1008_ed62(param_1: u32, i16 param_2)

{
    let mut iVar1: i16;
    let mut u_var2: u16;

    u_var2          = (param_1 >> 0x10);
    iVar1          = param_1;
    (iVar1 + 0x16) = param_2 * 0x8 + 0xd5e;
    (iVar1 + 0x18) = SEG_1050;
    (iVar1 + 0x12) = (param_2 * 0x8 + 0xd64);
    return;
}

pub fn pass1_1008_ee72(param_1: u16, param_2: u16, i16 param_3)

{
    fn_ptr_1 *ppcVar1;
    let mut u_var2: u32;

    if((param_1 + 0x56) == 0x0)
    {
        ppcVar1 = (str_var1(param_2, param_1) + 0x10);
        (**ppcVar1)();
    }
    u_var2 = pass1_1010_2e02(str_var1(param_2, param_1), param_3);
    pass1_1010_2e5c(param_1, param_2, u_var2);
    return;
}


u16 pass1_1008_eea6(void)

{
    return 0x0;
}

bool pass1_1008_eeac(param_1: u16, param_2: u16, param_3: u32, param_4: *mut u8, param_5: i16, param_6: u16)

{
    let mut uVar1: u16;
    char cVar2;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut puVar6: *mut u16;
    let mut uVar7: u16;

    uVar7  = *(param_3 + 0x12);
    puVar6 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x3, param_6, param_4, param_5);
    uVar4  = (puVar6 >> 0x10);
    uVar1  = puVar6;
    uVar5  = uVar4;
    if(uVar7 == 0x7d)
    {
        pass1_1010_a5ca(uVar1, uVar4, 0x7c, 0x7d, uVar4);
        if(uVar7 != 0x0)
        {
            return false;
        }
        pass1_1010_a5ca(uVar1, uVar4, 0x7d, 0x0, uVar5);
        if(uVar7 != 0x0)
        {
            return false;
        }
        uVar3 = uVar7;
        uVar7 = 0x78;
    }
    else
    {
        uVar3 = uVar7;
        if(uVar7 < 0x7e)
        {
            cVar2 = uVar7;
            uVar3 = uVar7 & 0xff00;
            if((u8)(cVar2 + 0x8dU) == 0x0)
            {
                uVar7 = 0x9;
                uVar3 = uVar3 | (u8)(cVar2 + 0x8dU);
            }
            else
            {
                if((u8)(cVar2 + 0x89U) == 0x0)
                {
                    uVar7 = 0x2e;
                    uVar3 = uVar3 | (u8)(cVar2 + 0x89U);
                }
                else
                {
                    uVar3 = uVar3 | (u8)(cVar2 + 0x87U);
                    if((u8)(cVar2 + 0x87U) == 0x0)
                    {
                        uVar7 = 0x5b;
                    }
                }
            }
        }
    }
    pass1_1010_a5ca(uVar1, uVar4, uVar7, uVar3, uVar5);
    return uVar3 == 0x0;
}


u16 pass1_1008_ef38(param_1: u32)

{
    let mut uVar1: u32;

    uVar1 = (param_1 + 0x16);
    return (uVar1 + 0x2);
}


u16 pass1_1008_ef4a(void)

{
    return 0x41;
}

Struct645 *pass1_1010_0000(param_1: *mut Struct645, param_2: u16, param_3: u16, param_4: u16)

{
    let mut unaff_DI: i16;
    let mut paVar1: *mut Struct79;
    let mut pu_var2: *mut u16;
    let mut puVar3: *mut u16;
    let mut uVar4: u16;
    let mut puVar5: *mut u16;
    let mut uVar6: u16;

    // Segment:    3
    // Offset:     00015420
    // Length:     ee9f
    // Min Alloc:  ee9f
    // Flags:      0d50
    //     Code
    //     Moveable
    //     Preload
    //     Impure (Non-shareable)
    //
    paVar1                     = struct_op_1010_1d48(str_var1(param_2, param_1), param_3);
    param_1.field_0xa         = 0x0;
    param_1.field_0xc         = 0x0;
    param_1.field_0x0 =  addr_table_1010_02c8;//0x02c8;
    param_1.field_0x2         = SEG_1010;
    puVar5                     = &param_1.field_0xa;
    puVar3                     = &param_1.field_0xc;
    uVar4                      = param_2;
    uVar6                      = param_2;
    pu_var2                     = mixed_1010_20ba(
      _PTR_LOOP_1050_0ed0,
      0x48,
      param_4,
      (paVar1 >> 0x10),
      unaff_DI);
    pass1_1008_3e94((pu_var2 + 0xe), str_var1(uVar4, puVar3), str_var1(uVar6, puVar5));
    return param_1;
}


pub fn pass1_1010_0052(u16 *param_1, param_2: u16) {
    param_1.field_0x0 = addr_table_1010_02c8;//0x2c8;
    param_1.field_0x2 = SEG_1010;
    pass1_1010_1d80(param_1, param_2);
    return;
}

pub fn pass1_1010_01f8(param_1: u32, param_2: u32, i16 param_3)

{
    let mut iVar1: i16;
    let mut iVar2: i16;
    let mut uVar3: u16;
    let mut uVar4: u16;

    iVar2           = (param_3 * 0x4 + 0xe02) * 0x4;
    iVar1           = (iVar2 + 0xdfc);
    uVar3           = (param_1 >> 0x10);
    uVar4           = (param_2 >> 0x10);
    (param_2 + 0x6) = (param_3 * 0x4 + 0xe04) * 0x28 + (iVar2 + 0xdfa) + (param_1 + 0xa);
    (param_2 + 0x8) = (param_1 + 0xc) + iVar1;
}

pub fn pass1_1010_0350(u16 *param_1, param_2: u16) {
    u32 * puVar1;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: *mut Struct474;
    let mut uVar4: u16;

    uVar4 = (param_1 >> 0x10);
    iVar4 =  param_1;
    param_1.field_0x0 = addr_table_1010_0e98;//0xe98;
    iVar4.field_0x2 = SEG_1010;
    puVar1 = iVar4.field_0xa;
    u_var2 = iVar4.field_0xc;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    pass1_1010_1d80(param_1, param_2);
}

pub fn pass1_1008_d7da(u16 *param_1, param_2: u16) {
    u32 * puVar1;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: i16;
    let mut uVar5: u16;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    param_1.field_0x0 = addr_table_1008_d98e;//0xd98e;
    (iVar4 + 0x2) = SEG_1008;
    puVar1 = *(iVar4 + 0xa);
    u_var2 = *(iVar4 + 0xc);
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    pass1_1010_1d80(param_1, param_2);
}


void  pass1_1008_dc80(param_1: u16,param_2: *mut u16, param_3: u32, param_4: u32, param_5: u16, param_6: u8, param_7: i16, param_8: i16, param_9: u8, param_10: u16)

{
    let mut pcVar1: *mut c_char;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut pcVar4: *mut c_void;
    let mut uVar5: u16;
    char  cVar6;
    char  extraout_DL;
    let mut bVar7: u8;
    let mut iVar8: i16;
    let mut uVar9: u16;
    let mut bVar10: u8;

    bVar7  = (u8)(param_10 >> 0x8);
    bVar10 = (u8)param_10 + bVar7;
    cVar6  = bVar10 + param_9;
    u_var2  = (CARRY1((u8)param_10, bVar7) || CARRY1(bVar10, param_9));
    uVar3  = param_5 + 0xeff0;
    bVar10 = param_5 < SEG_1010 || uVar3 < u_var2;
    uVar5  = uVar3 - u_var2;
    pcVar4 = swi(0x4);
    if(SBORROW2(param_5, SEG_1010) != SBORROW2(uVar3, u_var2))
    {
        (*pcVar4)();
        cVar6 = extraout_DL;
    }
    pcVar1         = (param_7 + param_8);
    *pcVar1        = *pcVar1 + cVar6 + (uVar5 < SEG_1010 || uVar5 + 0xeff0 < bVar10);
    uVar9          = (param_2 >> 0x10);
    iVar8          = param_2;
    *param_2       = addr_table_1008_380a[36]; // 0x389a
    (iVar8 + 0x2)  = SEG_1008;
    *(iVar8 + 0x4) = param_4;
    *(iVar8 + 0x8) = param_3;
    (iVar8 + 0xc)  = 0x0;
    (iVar8 + 0xe)  = 0x0;
    (iVar8 + 0x12) = 0x0;
    *param_2       = addr_table_1008_dd4a;//0xdd4a;
    (iVar8 + 0x2)  = SEG_1008;
    return;
}


pub fn pass1_1008_df4a(param_1: u32, param_2: i16, param_3: u16)

{
    let mut uVar1: u16;
    let mut u_var2: u16;
    let mut uVar3: u32;
    let mut local_a: [u8;8] = [0;8];

    u_var2 = (param_1 >> 0x10);
    pass1_1008_5784(str_var1(param_3, local_a), *(param_1 + 0xa));
    while(true)
    {
        uVar3 = pass1_1008_5b12(local_a, param_3);
        uVar1 = (uVar3 >> 0x10);
        if(uVar3 == 0x0)
            break;
        if(((uVar3 + 0xc) == 0x2) || ((uVar3 + 0xc) == 0x3))
        {
            pass1_1008_e9a4(param_1, u_var2, uVar3, param_2, param_3);
        }
    }
    return;
}

pub fn pass1_1008_dfa6(param_1: u32, long param_2, long param_3, param_4: u16)

{
    let mut puVar1: *mut u8;
    let mut extraout_DX: u16;
    let mut local_a: [u8;8] = [0;8];

    pass1_1008_5784(str_var1(param_4, local_a), *(param_1 + 0xa));
    do
    {
        puVar1 = local_a;
        pass1_1008_5b12(puVar1, param_4);
        if((extraout_DX | puVar1) == 0x0)
        {
            return;
        }
    } while((((puVar1 + 0x4) != param_3) || ((puVar1 + 0x8) != param_2)) && (((puVar1 + 0x8) != param_3 || ((puVar1 + 0x4) != param_2))));
    if((puVar1 + 0xc) != 0x1)
    {
        return;
    }
    return;
}


pub fn pass1_1008_e01c(param_1: u32, param_2: u32, param_3: u32)

{
    let mut uVar1: u16;

    uVar1             = (param_1 >> 0x10);
    *(param_1 + 0x16) = param_3;
    *(param_1 + 0x1a) = param_2;
    return;
}


pub fn pass1_1008_e038(param_1: u32, param_2: *mut u32, u32 *param_3)

{
    let mut uVar1: u16;

    uVar1    = (param_1 >> 0x10);
    *param_3 = *(param_1 + 0x16);
    *param_2 = *(param_1 + 0x1a);
    return;
}


i16 pass1_1008_e10c(param_1: u32, param_2: u32, param_3: u32, param_4: i16, param_5: u16)

{
    let mut iVar1: i16;
    let mut iVar2: i16;
    let mut uVar3: u32;

    uVar3 = pass1_1008_e8cc(param_5, param_1, param_2, param_3);
    if(uVar3 == 0x0)
    {
        return 0x1;
    }
    iVar1 = (uVar3 + 0xc);
    if(-0x1 < iVar1)
    {
        if(iVar1 < 0x2)
        {
            return 0x1;
        }
        if((0x0 < iVar1- 1) && (iVar2 = iVar1 + -0x3, iVar2 == 0x0 || iVar1 + -0x2 < 0x1))
        {
            pass1_1008_e9a4(param_1, (param_1 >> 0x10), uVar3, param_4, param_5);
            return iVar2;
        }
    }
    return 0x0;
}


BOOL16 pass1_1008_c6ae(param_1: u32, param_2: i16, i16 param_3)

{
    let mut pi_var1: *mut i16;
    let mut pu_var2: *mut u32;
    let mut iStack8: i16;

    pu_var2  = pass1_1008_c6fa(param_1, param_3);
    iStack8 = 0x0;
    while(true)
    {
        pi_var1 = (pu_var2 + 0x4);
        if(*pi_var1 == iStack8 || *pi_var1 < iStack8)
        {
            return 0x0;
        }
        if((*pu_var2 + iStack8 * 0x2) == param_2)
            break;
        iStack8 = iStack8 + 0x1;
    }
    return 0x1;
}


u32 *pass1_1008_c6fa(i16 *param_1, i16 param_2)

{
    if((0x0 < param_2) && (param_2 < 0x47))
    {
        return str_var1((param_1 + 0x2), param_2 * 0x6 + *param_1);
    }
    return 0x0;
}


pub fn pass1_1008_c75c(u16 *param_1, param_2: u16) {
    u32 * puVar1;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: *mut Struct469;
    let mut uVar4: u16;

    uVar4 = (param_1 >> 0x10);
    iVar4 =  param_1;
    param_1.field_0x0 = addr_table_1008_ca4a;//0xca4a;
    iVar4.field_0x2 = SEG_1008;
    puVar1 = iVar4.field_0xa;
    u_var2 = iVar4.field_0xc;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    pass1_1010_1d80(param_1, param_2);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1008_c79a(param_1: u32, param_2: u32, param_3: i16, param_4: u16, param_5: u8)

{
    let mut puVar1: *mut u8;
    let mut iVar2: i16;
    let mut uVar3: u32;
    let mut extraout_DX: u16;
    let mut puVar4: *mut u8;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut puVar7: *mut u16;
    let mut local_12: [u8;4] = [0;4];
    let mut uStack14: u32;
    let mut local_a: [u8;8] = [0;8];

    uVar6 = (param_1 >> 0x10);
    pass1_1008_5784(str_var1(param_4, local_a), *(param_1 + 0xa));
    while(true)
    {
        puVar1 = local_a;
        pass1_1008_5b12(puVar1, param_4);
        uStack14 = str_var1(extraout_DX, puVar1);
        puVar4   = (extraout_DX | puVar1);
        if(puVar4 == 0x0)
            break;
        iVar2 = pass1_1000_3d7a(*(puVar1 + 0x4), param_2);
        if(iVar2 == 0x0)
        {
            puVar7 = pass1_1020_a43e(param_4, puVar4, str_var1(param_4, local_12));
            uVar5  = (puVar7 >> 0x10);
            pass1_1020_a6ee(str_var1(param_4, local_12), (uStack14 + 0x12), local_12, uVar5, param_3, param_4, param_5);
            uVar3 = *(globals._PTR_LOOP_1050_65e2 + 0x52);
            pass1_1030_4bbe(param_4, uVar5, uVar3, (uStack14 + 0x12));
            (param_1 + 0xe) = (long)(uVar3 + 0x94) + *_PTR_LOOP_1050_65e2;
        }
    }
    return;
}

pub fn pass1_1008_c83a(param_1: u32)

{
    if(*_PTR_LOOP_1050_65e2 <= *(param_1 + 0xe))
    {
        return;
    }
    return;
}


u32 pass1_1008_c85e(param_1: u32, param_2: u16)

{
    let mut iVar1: i16;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((iVar1 + 0xa) == 0x0)
    {
        pass1_1008_c882(param_1 & 0xffff | u_var2 << 0x10, param_2);
    }
    return str_var1((iVar1 + 0xc), (iVar1 + 0xa));
}


pub fn pass1_1008_caa0(u16 *param_1, param_2: u16) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_d71a;//0xd71a;
    param_1.field_0x2 = SEG_1008;
    pass1_1008_cac6(param_1 & 0xffff | uVar1 << 0x10);
    pass1_1010_1d80(param_1, param_2);
    return;
}


pub fn pass1_1008_cac6(param_1: *mut Struct470)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: *mut Struct470;
    let mut uVar4: u16;

    uVar4  = (param_1 >> 0x10);
    iVar4  = param_1;
    puVar1 = iVar4.field_0xa;
    u_var2  = iVar4.field_0xc;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    &iVar4.field_0xa = 0x0;
    puVar1            = iVar4.field_0xe;
    u_var2             = iVar4.field_0x10;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    &iVar4.field_0xe = 0x0;
    puVar1            = iVar4.field_0x12;
    u_var2             = iVar4.field_0x14;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    &iVar4.field_0x12 = 0x0;
    puVar1             = iVar4.field_0x16;
    u_var2              = iVar4.field_0x18;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    &iVar4.field_0x16 = 0x0;
    puVar1             = iVar4.field_0x1a_addr_offset;
    u_var2              = iVar4.field_0x1c_addr_base;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    &iVar4.field_0x1a_addr_offset = 0x0;
    puVar1             = iVar4.field_0x1e;
    u_var2              = iVar4.field_0x20;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    &iVar4.field_0x1e = 0x0;
    return;
}


u32 pass1_1008_b340(param_1: u32)

{
    let mut uVar1: u32;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    if((param_1 + 0x16) != 0x0)
    {
        uVar1 = (param_1 + 0x16);
        uVar3 = (uVar1 >> 0x10);
        iVar2 = uVar1;
        return str_var1((iVar2 + 0x6), (iVar2 + 0x4));
    }
    return 0x0;
}


u32 pass1_1008_b366(param_1: u32)

{
    let mut uVar1: u32;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    if((param_1 + 0x1a) != 0x0)
    {
        uVar1 = (param_1 + 0x1a);
        uVar3 = (uVar1 >> 0x10);
        iVar2 = uVar1;
        return str_var1((iVar2 + 0x6), (iVar2 + 0x4));
    }
    return 0x0;
}


u32 pass1_1008_b47a(param_1: u32)

{
    let mut uVar1: u32;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    if((param_1 + 0x1e) != 0x0)
    {
        uVar1 = (param_1 + 0x1e);
        uVar3 = (uVar1 >> 0x10);
        iVar2 = uVar1;
        return str_var1((iVar2 + 0x6), (iVar2 + 0x4));
    }
    return 0x0;
}


pub fn pass1_1008_b4a0(param_1: u32, long param_2, param_3: u16, param_4: *mut u8, param_5: u16)

{
    let mut uVar1: u32;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut uVar6: u32;
    long       lVar7;

    iVar4 = param_1;
    uVar5 = (param_1 >> 0x10);
    if(param_2 == 0x0)
    {
        (iVar4 + 0x16) = 0x0;
    }
    else
    {
        pass1_1008_b9ce(param_1, param_2, param_5);
        *(iVar4 + 0x16) = param_3;
        (iVar4 + 0x18)  = param_4;
    }
    uVar1 = (iVar4 + 0x16);
    if((uVar1 + 0x8) != 0x0)
    {
        pass1_1008_b200(param_1, param_5);
        uVar6 = pass1_1008_b38c(param_1, param_3, param_4);
        uVar3 = (uVar6 >> 0x10);
        u_var2 = uVar6;
        uVar1 = (iVar4 + 0x16);
        pass1_1008_b85c(param_1, (uVar1 + 0xa));
        (iVar4 + 0x1a) = u_var2;
        (iVar4 + 0x1c) = uVar3;
        uVar1          = (iVar4 + 0x16);
        lVar7          = pass1_1008_b8ac(param_1, (uVar1 + 0xe), param_5);
        (iVar4 + 0x1e) = lVar7;
        (iVar4 + 0x20) = (lVar7 >> 0x10);
        return;
    }
    (iVar4 + 0x1a) = 0x0;
    (iVar4 + 0x1e) = 0x0;
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn pass1_1008_b544(param_1: u32, param_2: i16, param_3: u16, param_4: u16)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut uVar4: u32;
    let mut uVar5: u32;
    let mut uVar6: u16;
    let mut iVar7: i16;
    let mut uVar8: u16;

    iVar7 = param_1;
    uVar8 = (param_1 >> 0x10);
    if(param_2 != 0x0)
    {
        if((iVar7 + 0x1a) != 0x0)
        {
            uVar4         = (iVar7 + 0x16);
            (uVar4 + 0x8) = 0x1;
            uVar4         = (iVar7 + 0x1a);
            uVar5         = (iVar7 + 0x16);
            (uVar5 + 0xa) = (uVar4 + 0x8);
            uVar4         = (iVar7 + 0x1e);
            uVar6         = (uVar4 + 0x8);
            uVar4         = (iVar7 + 0x16);
            (uVar4 + 0xe) = uVar6;
            uVar4         = (iVar7 + 0x16);
            pass1_1030_8344(globals._PTR_LOOP_1050_5748, (globals._PTR_LOOP_1050_5748 >> 0x10), *(uVar4 + 0xa));
            param_4 = SEG_1038;
            pass1_1038_3608(str_var1(param_3, uVar6));
        }
    }
    (iVar7 + 0x1e) = 0x0;
    (iVar7 + 0x1a) = 0x0;
    (iVar7 + 0x16) = 0x0;
    puVar1         = *(iVar7 + 0xe);
    u_var2          = *(iVar7 + 0x10);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)(param_4, puVar1, u_var2, 0x1);
    }
    (iVar7 + 0xe) = 0x0;
    puVar1        = *(iVar7 + 0x12);
    u_var2         = *(iVar7 + 0x14);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)(param_4, puVar1, u_var2, 0x1);
    }
    (iVar7 + 0x12) = 0x0;
    return;
}


pub fn pass1_1008_b61a(param_1: u32, param_2: u32, param_3: u16, param_4: u16, param_5: u16)

{
    let mut uVar1: u16;

    pass1_1008_b8fa(param_1, param_2, param_4, param_5);
    uVar1            = (param_1 >> 0x10);
    (param_1 + 0x1a) = param_3;
    (param_1 + 0x1c) = param_4;
    return;
}


pub fn pass1_1008_b63a(param_1: u32, param_2: u32)

{
    let mut in_AX: u16;
    let mut in_DX: u16;
    let mut uVar1: u16;
    let mut unaff_SS: u16;

    pass1_1008_b964(param_1, param_2, unaff_SS);
    uVar1            = (param_1 >> 0x10);
    (param_1 + 0x1e) = in_AX;
    (param_1 + 0x20) = in_DX;
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void load_string_1008_b65a(param_1: u32, LPSTR in_string_2, param_3: u32, param_4: u16)

{
    let mut unaff_SS: u16;

    pass1_1008_b9ce(param_1, str_var1(param_4, param_3), unaff_SS);
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, in_string_2, (short)param_3);
    return;
}


u32 pass1_1008_b820(param_1: u32, param_2: i16, param_3: u16)

{
    let mut uVar1: u16;

    pass1_1030_8344(globals._PTR_LOOP_1050_5748, (globals._PTR_LOOP_1050_5748 >> 0x10), 0x8000001);
    if((param_2 + 0x152) == 0x0)
    {
        return 0x0;
    }
    uVar1 = (param_1 >> 0x10);
    return str_var1((param_1 + 0xc), (param_1 + 0xa));
}


pub fn pass1_1008_b85c(param_1: u32, long param_2)

{
    let mut puVar1: *mut u8;
    let mut extraout_DX: u16;
    let mut unaff_SS: u16;
    let mut local_a: [u8;8] = [0;8];

    pass1_1008_5784(str_var1(unaff_SS, local_a), *(param_1 + 0xe));
    do
    {
        puVar1 = local_a;
        pass1_1008_5b12(puVar1, unaff_SS);
        if((extraout_DX | puVar1) == 0x0)
        {
            return;
        }
    } while((puVar1 + 0x8) != param_2);
    return;
}


long pass1_1008_b8ac(param_1: u32, param_2: i16, param_3: u16)

{
    long lVar1;
    let mut local_a: [u8;8] = [0;8];

    pass1_1008_5784(str_var1(param_3, local_a), *(param_1 + 0x12));
    do
    {
        lVar1 = pass1_1008_5b12(local_a, param_3);
        if(lVar1 == 0x0)
        {
            return 0x0;
        }
    } while((lVar1 + 0x8) != param_2);
    return lVar1;
}


pub fn pass1_1008_b8fa(param_1: u32, param_2: u32, param_3: u16, param_4: u16)

{
    let mut puVar1: *mut u8;
    let mut iVar2: i16;
    let mut extraout_DX: u16;
    let mut local_a: [u8;8] = [0;8];

    if(param_2 == 0x0)
    {
        return;
    }
    pass1_1008_5784(str_var1(param_4, local_a), *(param_1 + 0xe));
    do
    {
        puVar1 = local_a;
        pass1_1008_5b12(puVar1, param_4);
        if((extraout_DX | puVar1) == 0x0)
        {
            return;
        }
        iVar2 = pass1_1000_3d7a(*(puVar1 + 0x4), param_2);
    } while(iVar2 != 0x0);
    return;
}


pub fn pass1_1008_b964(param_1: u32, param_2: u32, param_3: u16)

{
    let mut puVar1: *mut u8;
    let mut iVar2: i16;
    let mut extraout_DX: u16;
    let mut local_a: [u8;8] = [0;8];

    if(param_2 == 0x0)
    {
        return;
    }
    pass1_1008_5784(str_var1(param_3, local_a), *(param_1 + 0x12));
    do
    {
        puVar1 = local_a;
        pass1_1008_5b12(puVar1, param_3);
        if((extraout_DX | puVar1) == 0x0)
        {
            return;
        }
        iVar2 = pass1_1000_3d7a(*(puVar1 + 0x4), param_2);
    } while(iVar2 != 0x0);
    return;
}


pub fn pass1_1008_b9ce(param_1: u32, param_2: u32, param_3: u16)

{
    let mut puVar1: *mut u8;
    let mut iVar2: i16;
    let mut extraout_DX: u16;
    let mut local_a: [u8;8] = [0;8];

    if(param_2 == 0x0)
    {
        return;
    }
    pass1_1008_5784(str_var1(param_3, local_a), *(param_1 + 0xa));
    do
    {
        puVar1 = local_a;
        pass1_1008_5b12(puVar1, param_3);
        if((extraout_DX | puVar1) == 0x0)
        {
            return;
        }
        iVar2 = pass1_1000_3d7a(*(puVar1 + 0x4), param_2);
    } while(iVar2 != 0x0);
    return;
}


u32  pass1_1008_a8f4(param_1: u32,param_2: *mut u16,param_3: *mut u16,param_4: *mut u16, param_5: u16, param_6: u16, param_7: u16, param_8: u8)

{
    let mut iVar1: i16;
    let mut local_6: u32;

    iVar1 = &local_6 + 0x2;
    pass1_1008_a1f0(globals, param_6, param_7, param_8, param_1, param_2,
                    str_var1(param_7, &local_6),
                    str_var1(param_7, iVar1), param_4);
    pass1_1008_944e(param_3, local_6, (local_6 >> 0x10));
    return str_var1(param_5, iVar1);
}


u16 pass1_1008_a9ec(param_1: u32)

{
    let mut uVar1: u32;
    let mut in_AX: u16;
    let mut iVar2: i16;
    let mut uVar3: u16;
    WNDCLASS16 *unaff_SS;
    let mut uStack4: u16;

    uStack4 = 0x0;
    uVar3   = (param_1 >> 0x10);
    iVar2   = param_1;
    if(((iVar2 + 0x414) == 0x0) && (uVar1 = (iVar2 + 0x410), (uVar1 + 0x8) != 0x0))
    {
        (iVar2 + 0x414) = 0x1;
        pass1_1008_aa28(param_1 & 0xffff | uVar3 << 0x10, in_AX, unaff_SS);
        uStack4 = in_AX;
    }
    return uStack4;
}


u16 pass1_1008_aaa8(param_1: u16, param_2: u16, param_3: u16)

{
    let mut uStack4: u16;

    uStack4 = 0x0;
    switch(param_3)
    {
    0x1 =>
        uStack4 = 0x24;
        break;
    2 =>
        uStack4 = 0x16;
        break;
     3 =>
        uStack4 = 0x17;
        break;
    0x4 =>
        uStack4 = 0x18;
        break;
    0x5 =>
        uStack4 = 0x1b;
        break;
    0x6 =>
        uStack4 = 0x1c;
        break;
    0x7 =>
        uStack4 = 0x1f;
    }
    return uStack4;
}


u16 pass1_1008_ab12(param_1: u16, param_2: u16, param_3: u16)

{
    if(param_3 == 0x37)
    {
        return 0x22;
    }
    if(param_3 < 0x38)
    {
        if(param_3 == '\r')
        {
            return 0xf;
        }
        if(param_3 == '*')
        {
            return 0x2b;
        }
    }
    return 0x0;
}


u16 pass1_1008_ab54(param_1: u32)

{
    let mut uVar1: u32;
    let mut u_var2: u16;
    let mut uStack4: u16;

    uStack4 = 0x0;
    u_var2   = (param_1 >> 0x10);
    if(((param_1 + 0xa) != 0x0) && (uVar1 = (param_1 + 0xa), (uVar1 + 0x8) != 0x0))
    {
        uStack4 = 0x1;
    }
    return uStack4;
}


u16 pass1_1008_ab80(param_1: u16, param_2: u16, param_3: u16)

{
    let mut uStack4: u16;

    uStack4 = 0x0;
    switch(param_3)
    {
    0x8 =>
        uStack4 = 0x82;
        break;
    0x9 =>
        uStack4 = 0x7f;
        break;
    0xa =>
        uStack4 = 0x80;
        break;
    0xb =>
        uStack4 = 0x84;
        break;
    0xc =>
        uStack4 = 0x89;
        break;
    0xd =>
        uStack4 = 0x8a;
        break;
    0xe =>
        uStack4 = 0x8c;
        break;
    0xf =>
        uStack4 = 0x8e;
        break;
    0x10 =>
        uStack4 = 0x8f;
        break;
    0x11 =>
        uStack4 = 0x90;
        break;
    0x12 =>
        uStack4 = 0x91;
        break;
    0x13 =>
        uStack4 = 0x95;
        break;
    0x14 =>
        uStack4 = 0x96;
        break;
    0x16 =>
        uStack4 = 0x9b;
        break;
    0x17 =>
        uStack4 = 0x9f;
        break;
    0x18 =>
        uStack4 = 0xa2;
        break;
    0x19 =>
        uStack4 = 0xa4;
        break;
    0x1b =>
    0x1c =>
        uStack4 = 0xa7;
        break;
    0x1d =>
        uStack4 = 0xaa;
        break;
    0x1e =>
        uStack4 = 0xac;
        break;
    0x1f =>
        uStack4 = 0xad;
        break;
    0x20 =>
        uStack4 = 0xae;
        break;
    0x21 =>
        uStack4 = 0xb1;
        break;
    0x22 =>
        uStack4 = 0xb3;
        break;
    0x23 =>
        uStack4 = 0xb4;
        break;
    0x24 =>
        uStack4 = 0xb5;
        break;
    0x25 =>
        uStack4 = 0xb6;
        break;
    0x26 =>
        uStack4 = 0xb7;
        break;
    0x27 =>
        uStack4 = 0xab;
        break;
    0x28 =>
        uStack4 = 0xb9;
        break;
    0x29 =>
        uStack4 = 0xba;
        break;
    0x2a =>
        uStack4 = 0xbc;
        break;
    0x2b =>
        uStack4 = 0xbe;
        break;
    0x2c =>
        uStack4 = 0xdf;
        break;
    0x2d =>
        uStack4 = 0xe0;
    }
    return uStack4;
}


u16 *pass1_1008_ad0c(u16 *param_1, param_2: u8) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (param_1)[0x1] = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        pass1_1000_093a(param_1, uVar1, SEG_1000);
    }
    return param_1;
}

u16 *pass1_1008_ada2(u16 *param_1, i16 param_2)

{
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = 0x0;
    param_1.field_0x2 = 0x0;
    (param_1 + 0x4) = param_2;
    param_1.field_0x0 = (param_2 * 0x6 + 0x3a4);
    return param_1;
}


pub fn pass1_1008_add2(u16 *param_1)

{
    param_1.field_0x0 = ((param_1 + 0x4) * 0x6 + 0x3a4);
    return;
}


u16 pass1_1008_adf2(param_1: u32)

{
    return ((param_1 + 0x4) * 0x6 + 0x3a4);
}


u16 pass1_1008_ae0c(param_1: u32)

{
    return ((param_1 + 0x4) * 0x6 + 0x3a6);
}


pub fn pass1_1008_ae26(i16 *param_1)

{
    let mut pi_var1: *mut i16;
    let mut iVar2: i16;
    let mut iVar3: i16;
    let mut uVar4: u16;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    iVar2 = ((iVar3 + 0x4) * 0x6 + 0x3a8);
    if(iVar2 == 0x2)
    {
        if((iVar3 + 0x2) == 0x1)
        {
            param_1.field_0x0 = *param_1 + -0x1;
            iVar2 = (iVar3 + 0x4) * 0x6;
            pi_var1   = (iVar2 + 0x3a4);
            if(*pi_var1 != *param_1 && *param_1 <= *pi_var1)
            {
                param_1.field_0x0 = (iVar2 + 0x3a4) + 0x1;
                (iVar3 + 0x2) = 0x0;
                return;
            }
        }
        else
        {
            param_1.field_0x0 = *param_1 + 0x1;
            iVar2 = (iVar3 + 0x4) * 0x6;
            if((iVar2 + 0x3a6) < *param_1)
            {
                param_1.field_0x0 = (iVar2 + 0x3a6) + -0x1;
                (iVar3 + 0x2) = 0x1;
                return;
            }
        }
    }
    else
    {
        if((iVar2 != 0x3) && (iVar2 != 0x4))
        {
            param_1.field_0x0 = *param_1 + 0x1;
            iVar2 = (iVar3 + 0x4) * 0x6;
            if((iVar2 + 0x3a6) < *param_1)
            {
                param_1.field_0x0 = (iVar2 + 0x3a4);
            }
        }
    }
    return;
}


BOOL16 pass1_1008_aed8(param_1: u32)

{
    if(((param_1 + 0x4) * 0x6 + 0x3a4) != 0x0)
    {
        return 0x1;
    }
    return 0x0;
}

pub fn pass1_1008_afde(u16 *param_1, param_2: u16) {
    u32 * puVar1;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: *mut Struct468;
    let mut uVar4: u16;

    uVar4 = (param_1 >> 0x10);
    iVar4 =  param_1;
    param_1.field_0x0 = addr_table_1008_bdcc;//0xbdcc;
    iVar4.field_0x2 = SEG_1008;
    puVar1 = iVar4.field_0xa;
    u_var2 = iVar4.field_0xc;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    puVar1 = iVar4.field_0xe;
    u_var2 = iVar4.field_0x10;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    puVar1 = iVar4.field_0x12;
    u_var2  = iVar4.field_0x14;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    pass1_1010_1d80(param_1, param_2);
    return;
}


u16 *pass1_1008_b05a(param_1: *mut Struct26) {
    let mut iVar1: *mut Struct193;
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    iVar1 =  param_1;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1.field_0x2 = SEG_1008;
    iVar1.field_0x4 = 0x0;
    param_1.field_0x0 = addr_table_1008_bdc8;//0xbdc8;
    iVar1.field_0x2 = SEG_1008;
    return param_1;
}


Struct26 *set_stuct_1008_b0bc(param_1: *mut Struct26)

{
//    Struct26 *iVar1;
//    u16         uVar1;

    pass1_1008_b05a(param_1);
//    uVar1             = (param_1 >> 0x10);
//    iVar1             = param_1;
    param_1.field_0x8  = 0x0;
    param_1.field_0xa  = 0x0;
    param_1.field_0xe  = 0x0;
    param_1.field_0x10 = 0x0;
    param_1           = addr_table_1008_bdc0[1];//0xbdc4;
    param_1.field_0x2  = SEG_1008;
    return param_1;
}


u16 *pass1_1008_b0f2(u16 *param_1) {
    let mut uVar1: u16;

    pass1_1008_b05a(param_1);
    uVar1 = (param_1 >> 0x10);
    (param_1 + 0x8) = 0x0;
    param_1.field_0x0 = addr_table_1008_bdc0;//0xbdc0;
    param_1.field_0x2 = SEG_1008;
    return param_1;
}


u16 *pass1_1008_b11e(u16 *param_1) {
    let mut uVar1: u16;

    pass1_1008_b05a(param_1);
    uVar1 = (param_1 >> 0x10);
    (param_1 + 0x8) = 0x0;
    param_1.field_0x0 = addr_table_1008_bdc0[7];//0xbddc;
    param_1.field_0x2 = SEG_1008;
    return param_1;
}

pub fn pass1_1008_b146(param_1: u32, param_2: u16, param_3: u16)

{
    let mut uVar1: u32;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0x16) != 0x0)
    {
        uVar1 = (iVar2 + 0x16);
        pass1_1030_8344(globals._PTR_LOOP_1050_5748, (globals._PTR_LOOP_1050_5748 >> 0x10), *(uVar1 + 0xa));
        pass1_1038_3608(str_var1(param_3, param_2));
        uVar1          = (iVar2 + 0x16);
        (uVar1 + 0x8)  = 0x0;
        uVar1          = (iVar2 + 0x16);
        (uVar1 + 0xa)  = 0x0;
        uVar1          = (iVar2 + 0x16);
        (uVar1 + 0xe)  = 0x0;
        uVar1          = (iVar2 + 0x16);
        (uVar1 + 0x10) = 0x0;
    }
    return;
}


pub fn pass1_1008_9628(param_1: u32, param_2: u16)

{
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x8) == 0x0)
    {
        (param_1 + 0x8) = param_2;
    }
    return;
}


LRESULT pass1_1008_9c16(param_1: u16, param_2: u32, param_3: u32, param_4: HWND16)

{
    LRESULT LVar1;

    LVar1 = make_def_wnd_proc_1008_9ce6(param_1, param_2, (param_2 >> 0x10), (WPARAM16)param_3,
                                        str_var1(0x85, (param_3 >> 0x10)), param_4);
    return LVar1;
}


LRESULT pass1_1008_9c30(param_1: u16, param_2: u32, param_3: u32, param_4: HWND16)

{
    LRESULT LVar1;

    LVar1 = make_def_wnd_proc_1008_9ce6(param_1, param_2, (param_2 >> 0x10), (WPARAM16)param_3,
                                        str_var1(0x86, (param_3 >> 0x10)), param_4);
    return LVar1;
}


pub fn pass1_1008_9c4a(void)

{
    return;
}


pub fn pass1_1008_9c4e(void)

{
    return;
}


pub fn pass1_1008_9c52(void)

{
    return;
}


pub fn pass1_1008_9c60(param_1: u16, param_2: u16, param_3: *mut u32, i16 param_4)

{
    fn_ptr_1 *ppcVar1;

    if((param_4 == 0xc7) && (param_3 != 0x0))
    {
        ppcVar1 = *param_3;
        (**ppcVar1)();
    }
    return;
}


BOOL16 pass1_1008_9cc4(param_1: u32, i16 param_2)

{
    if((param_1 + 0x8) != param_2)
    {
        return 0x1;
    }
    return 0x0;
}


u16 pass1_1008_9ce0(void)

{
    return 0x0;
}


pub fn pass1_1008_9f18(param_1: i16, param_2: u16, param_3: i16, param_4: u16)

{
    if(param_3 == 0x2)
    {
        pass1_1008_9f64(str_var1(param_2, param_1 + -0x1c));
        pass1_1010_1f62(param_4, str_var1(param_2, param_1 + -0x1c), 0x2);
    }
    return;
}


u32 pass1_1008_9f48(param_1: *mut Struct134)

{
    let mut iVar1: *mut Struct134;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    iVar1 = param_1;
    iVar2 = iVar1.field_0x20 * 0x4;
    return str_var1((&iVar1[0x1].field_0x2 + iVar2), (&iVar1[0x1].field_0x0 + iVar2));
}


pub fn pass1_1008_9f64(param_1: u32)

{
    let mut pi_var1: *mut i16;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3   = (param_1 >> 0x10);
    iVar2   = param_1;
    pi_var1  = (iVar2 + 0x20);
    *pi_var1 = *pi_var1 + 0x1;
    if(0xb < (iVar2 + 0x20))
    {
        (iVar2 + 0x20) = 0x0;
    }
    return;
}

pub fn pass1_1008_a086(u16 *param_1, param_2: u16) {
    u32 * puVar1;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: *mut Struct465;
    let mut uVar4: u16;

    uVar4 = (param_1 >> 0x10);
    iVar4 =  param_1;
    param_1.field_0x0 = addr_table_1008_ad8a[2];//0xad92;
    iVar4.field_0x2 = SEG_1008;
    puVar1 = iVar4.field_0xa;
    u_var2 = iVar4.field_0xc;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    puVar1 = iVar4.field_0x410;
    u_var2 = iVar4.field_0x412;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    pass1_1010_1d80(param_1, param_2);
    return;
}

void  pass1_1008_87cc(param_1: *mut Struct86, param_2: i16, param_3: i16, param_4: u16, param_5: u32, param_6: u32, param_7: u16)

{
    long        lVar1;
    let mut u_var2: u16;
    let mut BVar3: BOOL16;
    let mut piVar4: *mut i16;
    let mut puVar5: *mut u8;
    let mut iVar5: *mut Struct86;
    let mut iVar6: i16;
    let mut unaff_DI: i16;
    let mut uVar7: u16;
    let mut uVar8: u16;
    let mut puVar9: *mut u16;
    let mut piStack48: *mut i16;
    let mut local_24: u32;
    let mut uStack32: u16;
    let mut uStack30: u32;
    let mut paStack26: *mut Struct18;
    let mut uStack18: u32;
    let mut iStack14: i16;
    let mut iStack12: i16;
    let mut iStack10: i16;
    let mut iStack8: i16;
    let mut u_stack6: u32;

    uVar7              = (param_1 >> 0x10);
    iVar5              = param_1;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar5.field_0x2   = SEG_1008;
    iVar5.field_0x4   = param_5;
    &iVar5.field_0x8  = 0x0;
    iVar5.field_0xc   = param_3;
    iVar5.field_0xe   = param_2;
    iVar5.field_0x10  = 0x0;
    iVar5.field_0x12  = 0x0;
    pass1_1008_3e38((param_1 & 0xffff0000 | ZEXT24(&iVar5.field_0x1c_addr_base)));
    pass1_1008_3e38((param_1 & 0xffff0000 | &iVar5.field_0x22));
    puVar9             = pass1_1008_3e38((param_1 & 0xffff0000 | &iVar5.field_0x28));
    iVar5.field_0x2e  = param_4;
    iVar5.field_0x30  = 0xffff;
    iVar5.field_0x3a  = 0x0;
    iVar5.field_0x3e  = 0x1;
    iVar5.field_0x40  = 0x1;
    iVar5.pv_field_42  = param_6;
    param_1.field_0x0 = addr_table_1008_8e9a;//0x8e9a;
    iVar5.field_0x2   = SEG_1008;
    if(globals._PTR_LOOP_1050_0382 == 0x0)
    {
        globals._PTR_LOOP_1050_0382 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2e, param_7, (puVar9 >> 0x10), unaff_DI);
    }
    u_stack6           = pass1_1008_4772(iVar5.field_0x4);
    iVar5.field_0x12 = 0x2f - (u_stack6 + 0x8);
    uVar8             = (globals._PTR_LOOP_1050_0382 >> 0x10);
    iVar6             = globals._PTR_LOOP_1050_0382;
    iStack8           = (iVar6 + 0xa);
    iStack10          = (iVar6 + 0xc);
    iStack12          = (iVar6 + 0xe);
    iStack14          = (iVar6 + 0x10);
    iVar6             = iVar5.field_0xc;
    lVar1             = (long)(iVar6 + iVar5.field_0xe) * (long)iStack14;
    puVar5            = (lVar1 >> 0x10);
    pass1_1008_3e76((param_1 & 0xffff0000 | ZEXT24(&iVar5.field_0x1c_addr_base)), 0x0, lVar1 + iVar5.field_0x12 + iStack10, (iVar6 - iVar5.field_0xe) * iStack12 + iVar5.field_0x10 + iStack8);
    iVar5.field_0x14 = iVar5.field_0x1c_addr_base + 0x20;
    iVar5.field_0x16 = (u_stack6 + 0x8) + iVar5.field_0x1e + -0x25;
    iVar5.field_0x18 = iVar5.field_0x14 + 0x32;
    u_var2             = iVar5.field_0x16 + 0x19;
    iVar5.field_0x1a_addr_offset = u_var2;
    mem_op_1000_179c(0x6, puVar5, 0);
    paStack26 = str_var1(puVar5, u_var2);
    uStack18 = puVar5 | u_var2;
    if(uStack18 == 0x0)
    {
        &iVar5.field_0x8 = 0x0;
    }
    else
    {
        puVar9           = pass1_1008_ada2(str_var1(puVar5, u_var2), iVar5.field_0x2e);
        uStack18   = (puVar9 >> 0x10);
        iVar5.field_0x8 = puVar9;
        iVar5.field_0xa = uStack18;
    }
    BVar3 = pass1_1008_aed8(*&iVar5.field_0x8);
    if(BVar3 == 0x0)
    {
        paStack26 = &iVar5.field_0x8;
        uStack18  = paStack26;
        fn_ptr_1000_17ce(paStack26, SEG_1000);
        &iVar5.field_0x8 = 0x0;
    }
    else
    {
        piVar4 = *(i16 **)&iVar5.field_0x8;
        pass1_1018_20ee(globals._PTR_LOOP_1050_0382, piVar4);
        uStack18 = SUB42(piVar4, 0x0);
        pass1_1008_add2(*(u16 **)&iVar5.field_0x8);
        uStack30 = pass1_1008_4772(str_var1(uStack18, uStack18));
        pass1_1018_214e(globals._PTR_LOOP_1050_0382, (globals._PTR_LOOP_1050_0382 >> 0x10), (param_1 & 0xffff0000 | &iVar5.field_0x28), iVar5.field_0x2e);
        local_24 = &iVar5.field_0x1c_addr_base;
        uStack32 = iVar5.field_0x20;
        pass1_1008_3f32(str_var1(param_7, &local_24), (param_1 & 0xffff0000 | &iVar5.field_0x28));
        piStack48 = (param_1 & 0xffff0000 | &iVar5.field_0x32);
        pass1_1008_3e94(str_var1(param_7, &local_24), (param_1 & 0xffff0000 | ZEXT24(&iVar5.field_0x34)), (param_1 & 0xffff0000 | &iVar5.field_0x32));
        uVar8             = (uStack30 >> 0x10);
        iVar5.field_0x36 = (uStack30 + 0x4) + *piStack48;
        u_var2             = (uStack30 + 0x8) + iVar5.field_0x34;
        iVar5.field_0x38 = u_var2;
        pass1_1008_612e(0x2, 0x5, u_var2);
        iVar5.field_0x3e = u_var2;
    }
    return;
}
pub fn pass1_1008_8b20(param_1: u32, param_2: u16)

{
    let mut iVar1: i16;
    let mut piVar2: *mut i16;
    let mut uVar3: u16;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut local_a: [u8;2] = [0;2];
    let mut local_8: [u8;2] = [0;2];
    let mut paStack6: *mut Struct76;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x8) != 0x0)
    {
        iVar1   = (iVar4 + 0x40);
        piVar2  = (iVar4 + 0x40);
        *piVar2 = *piVar2 + 0x1;
        uVar3   = iVar1 % (iVar4 + 0x3e);
        if(uVar3 == 0x0)
        {
            (iVar4 + 0x40) = 0x1;
            piVar2         = *(i16 **)(iVar4 + 0x8);
            pass1_1018_20ee(globals._PTR_LOOP_1050_0382, piVar2);
            paStack6 = (piVar2 & 0xffff | uVar3 << 0x10);
            pass1_1008_3e94((param_1 & 0xffff0000 | (iVar4 + 0x28U)),
                            str_var1(param_2, local_a),
                            str_var1(param_2, local_8));
            pass1_1008_8d8a(param_1 & 0xffff | uVar5 << 0x10, paStack6, *(iVar4 + 0x4));
            pass1_1008_4480(*(iVar4 + 0x4), (param_1 & 0xffff0000 | (iVar4 + 0x28U)), paStack6, param_2);
            return;
        }
    }
    return;
}


pub fn pass1_1008_8bc6(param_1: u16, param_2: u16, param_3: u32)

{
    let mut pi_var1: *mut i16;
    let mut iVar2: i16;
    let mut uVar3: u16;
    let mut local_a: [u8;2] = [0;2];
    let mut local_8: [u8;2] = [0;2];
    let mut paStack6: *mut Struct76;

    uVar3 = (param_3 >> 0x10);
    iVar2 = param_3;
    if((iVar2 + 0x8) == 0x0)
    {
        return;
    }
    pi_var1 = *(i16 **)(iVar2 + 0x8);
    pass1_1018_20ee(globals._PTR_LOOP_1050_0382, pi_var1);
    paStack6 = (pi_var1 & 0xffff | param_2 << 0x10);
    pass1_1008_3e94((param_3 & 0xffff0000 | (iVar2 + 0x28U)),
                    str_var1(param_1, local_a),
                    str_var1(param_1, local_8));
    pass1_1008_8d8a(param_3 & 0xffff | uVar3 << 0x10, paStack6, *(iVar2 + 0x4));
    pass1_1008_4480(*(iVar2 + 0x4), (param_3 & 0xffff0000 | (iVar2 + 0x28U)), paStack6, param_1);
    return;
}


pub fn pass1_1008_8c4e(param_1: u32, param_2: u32, param_3: u16)

{
    let mut uVar1: u16;
    let mut pu_var2: *mut u16;
    let mut puVar3: *mut u8;
    let mut puVar4: *mut u8;
    let mut uVar5: u16;
    let mut iVar6: i16;
    let mut uVar7: u16;
    let mut uVar8: u32;
    let mut paStack14: *mut Struct110;

    uVar7  = (param_1 >> 0x10);
    iVar6  = param_1;
    uVar8  = pass1_1008_4772((iVar6 + 0x4));
    puVar3 = (uVar8 >> 0x10);
    uVar5  = 0x0;
    if(((iVar6 + 0xc) == 0x0) || ((iVar6 + 0xe) == 0x0))
    {
        puVar4 = puVar3;
        mem_op_1000_179c(0x14, puVar3, 0);
        paStack14 = str_var1(puVar4, uVar5);
        uVar5     = puVar4 | uVar5;
        if(uVar5 == 0x0)
        {
            uVar1 = 0x0;
            uVar5 = 0x0;
        }
        else
        {
            pu_var2 = (param_1 & 0xffff0000 | (iVar6 + 0x1c));
            pass1_1008_50c2(paStack14, *(uVar8 + 0x8), *(uVar8 + 0x4), pu_var2, param_2);
            uVar1 = SUB42(pu_var2, 0x0);
        }
        pass1_1008_5134(str_var1(uVar5, uVar1));
    }
    pass1_1008_4480(param_2, (param_1 & 0xffff0000 | (iVar6 + 0x1c)), (iVar6 + 0x4), param_3);
    return;
}

pub fn pass1_1008_8ce4(param_1: u32,param_2: *mut u16, param_3: u32, param_4: u16)

{
    let mut puVar1: *mut u8;
    let mut pu_var2: *mut u8;
    let mut uVar3: u16;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut puVar7: *mut u16;
    let mut local_10: [u8;6] = [0;6];
    let mut uStack10: u32;
    let mut u_stack6: u32;

    uVar5    = (param_1 >> 0x10);
    iVar4    = param_1;
    u_stack6  = pass1_1008_4772((iVar4 + 0x4));
    uStack10 = 0x0;
    puVar7   = pass1_1008_3e54(str_var1(param_4, local_10), 0x0, (iVar4 + 0x12), (iVar4 + 0x10));
    pu_var2   = (puVar7 >> 0x10);
    puVar1   = local_10;
    pass1_1008_3f32(param_2, str_var1(param_4, puVar1));
    mem_op_1000_179c(0x14, pu_var2, 0);
    uVar3 = pu_var2 | puVar1;
    if(uVar3 == 0x0)
    {
        puVar1 = 0x0;
        uVar3  = 0x0;
    }
    else
    {
        uVar6 = (u_stack6 >> 0x10);
        pass1_1008_50c2(str_var1(pu_var2, puVar1), *(u_stack6 + 0x8), *(u_stack6 + 0x4), param_2, param_3);
    }
    uStack10 = str_var1(uVar3, puVar1);
    pass1_1008_5134(str_var1(uVar3, puVar1));
    pass1_1008_4480(param_3, param_2, (iVar4 + 0x4), param_4);
    return;
}


pub fn pass1_1008_8faa(param_1: u32, param_2: u32)

{
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    pass1_1008_9004(param_1 & 0xffff | uVar1 << 0x10, param_2, (param_2 >> 0x10), *(param_1 + 0xa));
    return;
}


void empty_1008_8fc4(void)

{
    return;
}


pub fn pass1_1008_9004(param_1: *mut Struct107, param_2: u16, param_3: u16, param_4: u32)

{
    let mut puVar1: *mut u32;
    let mut pu_var2: *mut u16;
    long         lVar3;
    let mut iVar4: *mut Struct107;
    let mut iVar5: *mut Struct108;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut unaff_SS: u16;
    let mut bVar6: bool;

    uVar4  = (param_1 >> 0x10);
    iVar4  = param_1;
    puVar1 = &iVar4.field_0xa;
    if((*puVar1 < param_4 || *puVar1 == param_4) || (iVar4.field_0x6 == 0x0))
    {
        pu_var2 = (&iVar4.field_0x12 + 0x2);
        bVar6  = *pu_var2 < param_4;
        if((bVar6 || *pu_var2 == param_4) && ((bVar6 || (puVar1 = &iVar4.field_0x12, *puVar1 < param_4 || *puVar1 == param_4))))
        {
            pass1_1008_909c(param_1 & 0xffff | uVar4 << 0x10, unaff_SS);
        }
        puVar1 = &iVar4.field_0x12;
        if((*puVar1 < param_4 || *puVar1 == param_4) || (iVar4.field_0x6 == 0x0))
        {
            return;
        }
        pu_var2 = &iVar4.field_0xc;
        bVar6  = *pu_var2 < param_4;
        if((bVar6 || *pu_var2 == param_4) && ((bVar6 || (pu_var2 = &iVar4.field_0xa, *pu_var2 < param_4 || *pu_var2 == param_4))))
        {
            iVar4.field_0xa = (param_4 + 0x1);
            iVar4.field_0xc = (param_4 + 0x1 >> 0x10);
        }
    }
    lVar3                         = iVar4.field_0x6;
    uVar5                         = (lVar3 >> 0x10);
    iVar5                         = lVar3;
    (iVar5 + param_4 * 0x4)       = param_2;
    (iVar5 + param_4 * 0x4 + 0x2) = param_3;
    return;
}


pub fn pass1_1008_92b2(param_1: u32, long param_2, long param_3)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut pu_var2: *mut u8;
    let mut extraout_DX: u16;
    let mut unaff_SS: u16;
    let mut local_c: [u8;4] = [0;4];
    let mut uStack8: u32;
    let mut uStack4: u16;

    uStack4 = 0x0;
    pass1_1008_57a4(str_var1(unaff_SS, local_c), param_1 & 0xffff0000 | (param_1 + 0x6));
    while(true)
    {
        pu_var2 = local_c;
        pass1_1008_5b12(pu_var2, unaff_SS);
        if((extraout_DX | pu_var2) == 0x0)
            break;
        if(((pu_var2 + 0x4) == param_3) && ((pu_var2 + 0x8) == param_2))
        {
            uStack4 = 0x1;
            ppcVar1 = ((param_1 + 0x6) + 0xc);
            (**ppcVar1)();
            uStack8 = 0x0;
        }
    }
    return;
}


pub fn pass1_1008_932a(param_1: u32, param_2: u16)

{
    let mut uVar1: u16;
    let mut ppcVar2: *mut *mut c_void;
    let mut puVar3: *mut u8;
    let mut extraout_DX: u16;
    let mut iVar4: i16;
    let mut iVar5: i16;
    let mut uVar6: u16;
    let mut local_a: [u8;8] = [0;8];

    uVar6 = (param_1 >> 0x10);
    iVar5 = param_1;
    if((iVar5 + 0x4) == 0x0)
    {
        (iVar5 + 0x4) = 0x1;
        pass1_1008_57a4(str_var1(param_2, local_a), param_1 & 0xffff0000 | (iVar5 + 0x6));
        while(true)
        {
            puVar3 = local_a;
            pass1_1008_5b12(puVar3, param_2);
            if((extraout_DX | puVar3) == 0x0)
                break;
            uVar1           = *(puVar3 + 0xc);
            iVar4           = (puVar3 + 0xe) - (uVar1 < 0x37);
            *(puVar3 + 0xc) = uVar1 - 0x37;
            (puVar3 + 0xe)  = iVar4;
            if((iVar4 < 0x1) && (((iVar4 < 0x0 || ((puVar3 + 0xc) == 0x0)) && ((puVar3 + 0x10) == 0x0))))
            {
                ppcVar2 = (**(u32 **)(puVar3 + 0x4) + 0x4);
                (**ppcVar2)();
                (puVar3 + 0xc) = (puVar3 + 0x8);
            }
        }
        (iVar5 + 0x4) = 0x0;
    }
    return;
}
