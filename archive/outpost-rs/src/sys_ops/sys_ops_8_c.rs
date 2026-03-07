// #include "sys_ops_8.h"

// #include "address_tables/function_tables.h"
// #include "globals.h"
// #include "op_int.h"
// #include "op_windef.h"
// #include "struct_20.h"
// #include "struct_43.h"
// #include "struct_ops/struct_ops_1.h"
// #include "sys_ops_9.h"
// #include "unk/unk_15.h"
// #include "utils.h"
// #include "function_tables.h"

pub fn pass1_1010_abd2(globals: &mut Globals, param_1: u16, param_2: u16, param_3: i16, param_4: *mut u8, param_5: i16, param_6: u16)

{
    let mut bVar1: bool;
    let mut piVar2: *mut i16;
    let mut puVar3: *mut u16;
    let mut iStack20: i16;
    let mut iStack16: i16;
    let mut iStack14: i16;

    puVar3    = mixed_1010_20ba(globals.dat_1050_0ed0, 0x35, param_6, param_4, param_5);
    bVar1     = false;
    iStack16  = param_3;
    _iStack20 = str_var1(param_6, &stack0x000a);
    while(true)
    {
        piVar2 = _iStack20;
        if(iStack16 == 0x0)
        {
            return;
        }
        if(bVar1)
            break;
        if((iStack16 * 0x2 + puVar3 + 0xa) != 0x0)
        {
            bVar1    = true;
            iStack14 = iStack16;
        }
        _iStack20 = (_iStack20 & 0xffff0000 | (iStack20 + 0x2));
        iStack16  = *piVar2;
    }
    pass1_1010_682e(puVar3, 0x0, iStack14);
    pass1_1010_682e(puVar3, 0x1, iStack16);
    return;
}

void  pass1_1010_ae92(param_1: u32, param_2: u16, param_3: u16, param_4: u32, param_5: i16, param_6: u16)

{
    let mut uVar1: u16;
    let mut pu_var2: *mut u8;
    let mut uVar3: u32;
    let mut paVar4: *mut Struct67;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut iVar7: i16;
    let mut uVar8: u8;
    let mut uVar9: u8;
    let mut uVar10: u16;
    let mut uVar11: u16;
    let mut iVar12: i16;

    if(param_3 == 0x15)
    {
        uVar3 = struct_op_1030_73a8(param_4);
        if(uVar3 != 0x0)
        {
            (uVar3 + 0x20) = param_2;
            return;
        }
    }
    else
    {
        if(param_3 < 0x16)
        {
            if(param_3 == '\x06')
            {
                pass1_1030_7f1a(param_4, param_2, param_6);
                uVar3  = struct_op_1030_73a8(param_4);
                uVar1  = pass1_1010_b028(param_1, (param_1 >> 0x10), uVar3);
                uVar3  = pass1_1030_8326();
                pu_var2 = (uVar3 >> 0x10);
                if(((uVar1 == 0xe) && ((pu_var2 != 0x0 || (0x32 < uVar3)))) && ((param_2 == 0x1 || (((param_2 == 0x2 || (param_2 == 0x4)) || (param_2 == 0x3))))))
                {
                    uVar11 = 0x0;
                    iVar12 = 0xb;
                    uVar8  = 0x1;
                    uVar9  = 0x0;
                    uVar10 = 0x0;
                    uVar6  = 0x0;
                    iVar7  = 0x0;
                    uVar5  = 0x0;
                    paVar4 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x37, param_6, pu_var2, param_5);
                    post_win_msg_1008_a0e4(paVar4,
                                           str_var1(uVar6, uVar5), iVar7, CONCAT11(uVar9, uVar8),
                                           str_var1(uVar11, uVar10), iVar12, SEG_1008, param_6);
                    return;
                }
            }
            else
            {
                if(param_3 == '\a')
                {
                    pass1_1030_7eda(param_4, param_2, param_6);
                    return;
                }
            }
        }
    }
    return;
}

u32  pass1_1010_8c32(param_1: *mut Struct640, param_2: u16, param_3: u16, param_4: u16)

{
    let mut unaff_DI: i16;
    let mut paVar1: *mut Struct79;
    let mut pu_var2: *mut u16;

    paVar1                     = struct_op_1010_1d48(str_var1(param_2, param_1), param_3);
    &param_1.field_0xa        = 0x0;
    param_1 =  addr_table_1010_8ee2;//0x8ee2;
    param_1.field_0x2         = SEG_1010;
    pu_var2                     = mixed_1010_20ba(globals.dat_1050_0ed0, 0x3, param_4, (paVar1 >> 0x10), unaff_DI);
    param_1.field_0xa         = pu_var2;
    param_1.field_0xc         = (pu_var2 >> 0x10);
    return param_1;
}


u32  unk_load_str_op_1010_8c96(param_1: u32, param_2: u32, param_3: u32, param_4: u16, param_5: u16)

{
    let mut uVar1: u32;
    let mut IVar2: u16;
    let mut puVar3: *mut u32;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut in_DX: *mut u8;
    let mut iVar6: i16;
    let mut uVar7: u16;
    let mut uVar8: u16;
    let mut in_AF: u8;
    let mut uVar9: u32;
    let mut pcVar10: *mut c_char;
    let mut spec: *mut c_char;
    WORD       *valist;
    let mut uStack46: u32;
    let mut local_10: u32;
    let mut iStack12: i16;
    let mut iStack10: i16;
    let mut puStack8: *mut u8;
    let mut u_stack6: u16;
    let mut uStack4: u16;

    uVar7  = (param_3 >> 0x10);
    iVar6  = param_3;
    uVar5  = (iVar6 + 0x6);
    uVar9  = uVar5;
    spec   = param_2;
    valist = (WORD *)(param_2 >> 0x10);
    if(uVar5 != 0x0)
    {
        uVar8 = (param_1 >> 0x10);
        if(uVar5 == 0x1)
        {
            uVar9   = param_3 & 0xffff;
            iVar4   = uVar9;
            param_4 = SEG_1010;
            switch((iVar6 + 0x4)- 1)
            {
            0x0 =>
            0x1 =>
                uVar1 = (iVar6 + 0x8);
                pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
                local_10 = (iVar4 + 0xc);
                iStack12 = (iVar4 + 0x10);
                iStack10 = iVar4;
                if(0x0 < iStack12)
                {
                    pcVar10 = load_string_1010_847eglobals.dat_1050_14cc, (HINSTANCE16)SEG_1028);
                    uStack4 = (pcVar10 >> 0x10);
                    u_stack6 = SUB42(pcVar10, 0x0);
                    IVar2   = wsprintf16(SEG_1028, spec, valist);
                    return str_var1(IVar2, uStack4);
                }
                break;
            2 =>
                uVar1 = (iVar6 + 0x8);
                pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
                local_10 = (iVar4 + 0xc);
                iStack12 = (iVar4 + 0x10);
                if(0x0 < iStack12)
                {
                    iStack12 = 0x0;
                    uVar9    = struct_op_1030_73a8(str_var1(in_DX, iVar4));
                    uVar9    = pass1_1028_bb24(uVar9);
                    in_DX    = (uVar9 >> 0x10);
                    iStack10 = uVar9;
                    puVar3   = &local_10;
                    puStack8 = in_DX;
                    pass1_1030_627e(param_5, puVar3, in_DX, globals._PTR_LOOP_1050_5740,
                                    str_var1(param_5, puVar3), uVar9);
                    pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, puVar3, in_DX);
                    uVar1 = (param_1 + 0xa);
                    pass1_1010_c3c2(uVar1, (uVar1 >> 0x10), 0x0,
                                    str_var1(in_DX, puVar3), in_DX, in_AF, param_5);
                    uStack46 = str_var1(in_DX, puVar3);
                    pcVar10  = load_string_1010_847eglobals.dat_1050_14cc, (HINSTANCE16)SEG_1028);
                    uStack4  = (pcVar10 >> 0x10);
                    u_stack6  = SUB42(pcVar10, 0x0);
                    wsprintf16(SEG_1028, spec, valist);
                    goto LAB_1010_8def;
                }
                break;
            _ =>
                goto switchD_1010_8e11_caseD_4;
            0x4 =>
            0x7 =>
            0x8 =>
            0xa =>
                goto LAB_1010_8ea5;
            }
            uVar9   = ZEXT24(&local_10);
            param_4 = SEG_1028;
        }
        else
        {
            uVar9 = (uVar5 - 0x2);
            if(uVar5 - 0x2 == 0x0)
            {
                iVar4 = (iVar6 + 0x4);
                uVar5 = iVar4 - 0x4;
                if(uVar5 != 0x0)
                {
                    uVar5 = iVar4 - 0xc;
                    uVar9 = uVar5;
                    if(uVar5 != 0x0)
                        goto LAB_1010_8ea5;
                }
                uVar1 = (iVar6 + 0x8);
                pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
                uVar1 = (param_1 + 0xa);
                pass1_1010_c3c2(uVar1, (uVar1 >> 0x10), 0x0,
                                str_var1(in_DX, uVar5), in_DX, in_AF, param_5);
                uStack46 = str_var1(in_DX, uVar5);
                pcVar10  = load_string_1010_847eglobals.dat_1050_14cc, (HINSTANCE16)SEG_1028);
                uStack4  = (pcVar10 >> 0x10);
                u_stack6  = SUB42(pcVar10, 0x0);
                wsprintf16(SEG_1028, spec, valist);
            // LAB_1010_8def:
                fn_ptr_1000_17ce((uStack46 & 0xffff | ZEXT24(in_DX) << 0x10), SEG_1000);
                return str_var1(uStack46, in_DX);
            }
        }
    }
// LAB_1010_8ea5:
    load_string_1010_84e0(param_4, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, spec, (short)valist);
switchD_1010_8e11_caseD_4:
    return str_var1(uVar9, in_DX);
}

void  pass1_1010_8ef2(param_1: u32, param_2: u16, param_3: u16)

{
    let mut uVar1: u16;
    let mut pu_var2: *mut u8;
    let mut extraout_DX: *mut u8;
    let mut iVar3: *mut Struct170;
    let mut unaff_DI: i16;
    let mut uVar3: u16;
    let mut puVar4: *mut u16;

    uVar3 = (param_1 >> 0x10);
    iVar3 =  param_1;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar3.field_0x2 = SEG_1008;
    uVar1 = 0x0;
    &iVar3.field_0x4 = 0x0;
    &iVar3.field_0x8 = 0x0;
    param_1.field_0x0 = addr_table_1010_9254;//0x9254;
    iVar3.field_0x2 = SEG_1010;
    mem_op_1000_179c(0x18, param_2, 0);
    pu_var2 = (param_2 | uVar1);
    if (pu_var2 == 0x0) {
        &iVar3.field_0x4 = 0x0;
    } else {
        struct_op_1030_1cd8(str_var1(param_2, uVar1), 0x5, 0x5);
        iVar3.field_0x4 = uVar1;
        iVar3.field_0x6 = extraout_DX;
        pu_var2           = extraout_DX;
    }
    puVar4           = mixed_1010_20ba(globals.dat_1050_0ed0, 0x3, param_3, pu_var2, unaff_DI);
    iVar3.field_0x8 = puVar4;
    iVar3.field_0xa = (puVar4 >> 0x10);
    return;
}

u32  pass1_1010_9298(param_1: *mut Struct79, param_2: *mut Struct79, param_3: u16, param_4: u16, param_5: *mut u8, param_6: u16)

{
    struct_1010_2cd2(param_1, param_2, param_3, param_6);
    param_1 =  addr_table_1010_9566;//0x9566;
    param_1.field_0x2 = SEG_1010;
    mem_op_1000_179c(0x20c, param_5, 0);
    param_1[0x9].field_0x2 = param_4;
    &param_1[0x9].field_0x4 = param_5;
    pass1_1000_4906(str_var1(param_5, param_1[0x9].field_0x2), 0x0, 0x20c);
    return param_1;
}

void  pass1_1010_9304(param_1: u16, param_2: u16, param_3: i16, param_4: u16, u8 *param_5)

{
    if(param_3 != 0x0)
    {
        mem_op_1000_179c(param_3 << 0x2, param_5, 0);
        return;
    }
    mem_op_1000_179c(0x1a, param_5, 0);
    if((param_5 | param_4) != 0x0)
    {
        pass1_1010_9258(str_var1(param_5, param_4));
        return;
    }
    return;
}

void  pass1_1010_9372(param_1: *mut u32, param_2: u16, param_3: i16, param_4: i16, i16 param_5)

{
    let mut ppcVar1: *mut *mut c_void;
    char       cVar2;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut unaff_DI: i16;
    let mut unaff_SS: u16;
    let mut bVar5: bool;
    let mut uVar6: u32;
    let mut uVar7: u32;

    if(0x0 < param_4)
    {
        if(globals._PTR_LOOP_1050_3528 == 0x0)
        {
            ppcVar1             = (*param_1 + 0x18);
            uVar6               = (**ppcVar1)();
            globals._PTR_LOOP_1050_3528 = mixed_1010_20ba(globals.dat_1050_0ed0, uVar6, unaff_SS, (uVar6 >> 0x10), unaff_DI);
        }
        uVar6 = (param_1 + 0xc);
        uVar7 = pass1_1010_2e02(globals._PTR_LOOP_1050_3528, (uVar6 + 0x12));
        uVar3 = param_2 + 0x1;
        uVar4 = param_3 + (0xfffe < param_2);
        for(cVar2 = (param_4- 1) * '\x04'; cVar2 != '\0'; cVar2 = cVar2- 1)
        {
            bVar5 = CARRY2(uVar3, uVar3);
            uVar3 = uVar3 * 0x2;
            uVar4 = uVar4 * 0x2 + bVar5;
        }
        pass1_1010_2e30(globals._PTR_LOOP_1050_3528, uVar3 | uVar7, uVar4 | (uVar7 >> 0x10), param_5);
    }
    return;
}

void  pass1_1010_9794(param_1: *mut Struct250, param_2: u16)

{
    let mut iVar1: i16;
    let mut ppcVar2: *mut *mut c_void;
    let mut puVar3: *mut u32;
    let mut uVar4: u16;
    let mut puVar5: *mut Struct251;
    let mut puVar6: *mut u32;
    let mut puVar7: *mut u8;
    let mut extraout_DX: *mut u8;
    let mut extraout_DX_00: u16;
    let mut uVar8: u16;
    let mut extraout_DX_01: u16;
    let mut iVar9: *mut Struct250;
    let mut uVar9: u16;
    u64   local_a;

    uVar9 = (param_1 >> 0x10);
    iVar9 = param_1;
    if(iVar9.field_0x18 == 0x0)
    {
        iVar9.field_0x18 = 0x1;
        puVar6            = iVar9.field_0xe;
        uVar4             = (&iVar9.field_0xe + 0x2);
        puVar7            = (uVar4 | puVar6);
        if(puVar7 != 0x0)
        {
            ppcVar2 = puVar6;
            (**ppcVar2)();
            puVar7 = extraout_DX;
        }
        mem_op_1000_179c(0xc, puVar7, 0);
        uVar4 = puVar6;
        if((puVar7 | uVar4) == 0x0)
        {
            uVar4 = 0x0;
            uVar8 = 0x0;
        }
        else
        {
            set_struct_1008_574a((puVar6 & 0xffff | ZEXT24(puVar7) << 0x10));
            uVar8 = extraout_DX_00;
        }
        &iVar9.field_0xe         = uVar4;
        (&iVar9.field_0xe + 0x2) = uVar8;
        pass1_1008_5784(str_var1(param_2, &local_a), iVar9.field_0xa);
        while(true)
        {
            puVar5 = &local_a;
            pass1_1008_5b12(puVar5, param_2);
            if((extraout_DX_01 | puVar5) == 0x0)
                break;
            iVar1 = puVar5.field_0x4;
            if((iVar1 == 0x3e) || (iVar1 == 0x41))
            {
                puVar6         = iVar9.field_0xa;
                (puVar6 + 0xa) = 0x0;
                puVar6         = iVar9.field_0xa;
                ppcVar2        = (*iVar9.field_0xa + 0xc);
                (**ppcVar2)();
                puVar3         = iVar9.field_0xa;
                (puVar3 + 0xa) = 0x1;
                local_a._4_4_  = 0x0;
                ppcVar2        = (*iVar9.field_0xe + 0x4);
                (**ppcVar2)(SEG_1008, iVar9.field_0xe, str_var1(extraout_DX_01, puVar5), puVar6);
            }
        }
    }
    return;
}

void  pass1_1010_866c(param_1: u16, param_2: u16, param_3: u16, param_4: u32, param_5: u16)

{
    let mut uVar1: u32;
    char cVar2;
    let mut iVar3: i16;
    let mut bVar4: bool;

    if(param_5 < 0x28)
    {
        if((param_5 < 0x25) && (param_5 != 0x23))
        {
            if(0x23 < param_5)
            {
                return;
            }
            cVar2 = param_5;
            if(((cVar2 != '\v') && (cVar2 != '\x0f')) && (cVar2 != '!'))
            {
                return;
            }
        }
    }
    else
    {
        if(param_5 != 0x37)
        {
            if(param_5 < 0x38)
            {
                if(param_5 < 0x33)
                {
                    return;
                }
                bVar4 = SBORROW2(param_5 - 0x33, 0x1);
                iVar3 = param_5 - 0x34;
            }
            else
            {
                if(param_5 == 0x49)
                    goto LAB_1010_8691;
                if((param_5 - 0x49) < 0x2a)
                {
                    return;
                }
                bVar4 = SBORROW2(param_5 - 0x73, 0x5);
                iVar3 = param_5 - 0x78;
            }
            if(iVar3 != 0x0 && bVar4 == iVar3 < 0x0)
            {
                return;
            }
        }
    }
// LAB_1010_8691:
    uVar1 = *(param_5 * 0x4 + param_4);
    memcpy_op_1008_676e(uVar1, uVar1, param_1);
    return;
}

void  pass1_1010_878c(Struct87 **param_1, param_2: i16, HINSTANCE16 param_3)

{
    let mut uVar1: u16;
    let mut u_var2: u16;
    let mut uVar4: u16;
    let mut puVar3: *mut u8;
    let mut puVar4: *mut u8;
    let mut uVar6: *mut Struct87;
    let mut iVar5: i16;
    let mut uVar7: u16;
    let mut unaff_SS: u16;
    let mut paVar8: *mut Struct87;
    let mut paVar9: *mut Struct87;

    uVar7 = (param_1 >> 0x10);
    uVar6 = param_1;
    if(uVar6.field_0x680 == param_2)
    {
        return;
    }
    uVar1  = uVar6.field_0x67c;
    puVar4 = uVar6.field_0x67e;
    puVar3 = (puVar4 | uVar1);
    u_var2  = uVar1;
    if(puVar3 != 0x0)
    {
        pass1_1008_64a2(str_var1(puVar4, uVar1));
        param_3 = SEG_1000;
        fn_ptr_1000_17ce(str_var1(puVar4, uVar1), SEG_1000);
    }
    if((param_2 == 0x1) || (param_2 == 0x2))
    {
        mem_op_1000_179c(0x8, puVar3, 0);
        puVar4 = (puVar3 | u_var2);
        if(puVar4 == 0x0)
        {
            &uVar6.field_0x67c = 0x0;
            goto LAB_1010_8869;
        }
        paVar8 = *param_1;
        paVar9 = str_var1(puVar3, u_var2);
    // LAB_1010_8853:
        uVar4 = paVar9;
        file_1008_6414(paVar9, paVar8, unaff_SS, puVar4);
    }
    else
    {
        iVar5  = param_2 * 0x4;
        paVar8 = set_err_mode_1010_8b14(param_1, *(iVar5 + 0x172a), unaff_SS);
        paVar9 = paVar8;
        if(((iVar5 + 0x172a) == paVar8) && ((iVar5 + 0x172c) == (paVar8 >> 0x10)))
        {
            msg_box_op_1010_8bb4(uVar6, uVar7, paVar8, param_3, unaff_SS);
        }
        mem_op_1000_179c(0x8, (paVar9 >> 0x10), 0);
        puVar4 = ((paVar9 >> 0x10) | paVar9);
        if(paVar9 != 0x0)
            goto LAB_1010_8853;
        uVar4  = 0x0;
        puVar4 = 0x0;
    }
    uVar6.field_0x67c = uVar4;
    uVar6.field_0x67e = puVar4;
// LAB_1010_8869:
    uVar6.field_0x680 = param_2;
    return;
}

void  pass1_1010_6abc(param_1: *mut Struct635, param_2: u16, param_3: u16)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut extraout_DX: *mut u8;
    let mut unaff_DI: i16;
    let mut unaff_SS: u16;
    let mut p_var2: *mut Struct79;
    let mut puVar3: *mut u16;

    p_var2                       = struct_op_1010_1d48(str_var1(param_2, param_1), param_3);
    param_1.field_0xa           = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0xc           = SEG_1008;
    param_1.field_0xa           = addr_table_1008_3aa0[2];//0x3aa8;
    param_1.field_0xc           = SEG_1008;
    param_1.field_0xe           = 0x0;
    param_1.field_0x10          = 0x0;
    param_1.field_0x14          = 0x0;
    param_1.field_0x1c_addr_base = 0x0;
    param_1.field_0x20          = 0x0;
    param_1.field_0x22          = 0x0;
    param_1 =  addr_table_1010_7e24[1]; //0x7e28;
    param_1.fld2_segment         = SEG_1010;
    param_1.field_0xa           = addr_table_1010_7e24[5]; //0x7e38;
    param_1.field_0xc           = SEG_1010;
    puVar3                       = mixed_1010_20ba(globals.dat_1050_0ed0, 0x3, unaff_SS, (p_var2 >> 0x10), unaff_DI);
    &param_1.field_0x14         = puVar3;
    (&param_1.field_0x14 + 0x2) = (puVar3 >> 0x10);
    ppcVar1                      = (*param_1.field_0x14 + 0x4);
    (**ppcVar1)();
    puVar3                       = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2f, unaff_SS, extraout_DX, unaff_DI);
    &param_1.field_0x22         = puVar3;
    (&param_1.field_0x22 + 0x2) = (puVar3 >> 0x10);
    ppcVar1                      = (*param_1.field_0x22 + 0x4);
    (**ppcVar1)();
    return;
}

u16 pass1_1010_6cf8(param_1: u16, param_2: u32, param_3: i16, param_4: u16, param_5: u16, param_6: u16, param_7: u16)

{
    let mut uVar1: u16;

    switch(param_3)
    {
    0x1 =>
        pass1_1010_715c(param_2, 0x1, param_6, param_5, param_7, param_4);
        send_msg_1010_7c9e(param_2, 0x12, param_4);
        return 0x1;
    _ =>
        return 0x0;
    0x4 =>
        uVar1 = 0x2;
        break;
    0x5 =>
        uVar1 = 0x3;
        break;
    0x6 =>
        uVar1 = 0x4;
        break;
    0x7 =>
        uVar1 = 0x5;
        break;
    0x9 =>
        pass1_1010_715c(param_2, 0x6, param_6, param_5, param_7, param_4);
    0x2e =>
        uVar1 = 0x38;
        break;
    0xa =>
    0x80 =>
        uVar1 = 0x2d;
        break;
    0xb =>
        uVar1 = 0x7;
        break;
    0xc =>
    0x17 =>
    0x18 =>
    0x19 =>
    0x21 =>
    0x75 =>
    0x81 =>
        if(param_3 == 0x75)
        {
            pass1_1010_715c(param_2, 0x8, param_6, param_5, param_7, param_4);
            pass1_1010_715c(param_2, 0x9, param_6, param_5, param_7, param_4);
        }
        uVar1 = pass1_1010_6ca2(param_2, 0x7, param_5, param_4);
        if(uVar1 != 0x0)
        {
            pass1_1010_715c(param_2, 0x10, uVar1, param_5, param_7, param_4);
        }
        param_6 = pass1_1010_6ca2(param_2, 0x3, param_5, param_4);
        if(param_6 != 0x0)
        {
            pass1_1010_715c(param_2, 0x11, param_6, param_5, param_7, param_4);
        }
        if(param_3 == 0x21)
        {
            pass1_1010_715c(param_2, 0x14, param_6, param_5, param_7, param_4);
        }
        if(param_3 != 0xc)
        {
            return 0x1;
        }
        uVar1 = 0x9;
        goto code_rSEG_10106d4c;
    0xe =>
        uVar1 = 0xc;
        goto code_rSEG_10106d4c;
    0x10 =>
    0x11 =>
    0x13 =>
        uVar1 = 0xd;
        break;
    0x12 =>
        uVar1 = 0xe;
        break;
    0x1b =>
    0x1f =>
    0x5b =>
    0x78 =>
    0x7e =>
    0x7f =>
        if(param_3 == 0x7e)
        {
            pass1_1010_715c(param_2, 0x2c, param_6, param_5, param_7, param_4);
        }
        if(param_3 == 0x5b)
        {
            pass1_1010_715c(param_2, 0x38, param_6, param_5, param_7, param_4);
        }
        if(param_3 == 0x1f)
        {
            pass1_1010_715c(param_2, 0x3f, param_6, param_5, param_7, param_4);
        }
        if(param_3 == 0x7f)
        {
            pass1_1010_715c(param_2, 0x42, param_6, param_5, param_7, param_4);
        }
        param_6 = pass1_1010_6ca2(param_2, 0x5, param_5, param_4);
        if((param_6 == 0x0) && (param_6 = pass1_1010_6ca2(param_2, 0x5, param_5, param_4), param_6 == 0x0))
        {
            return 0x1;
        }
        uVar1 = 0x37;
        break;
    0x1d =>
    0x2a =>
    0x2c =>
    0x3c =>
    0x3d =>
    0x4b =>
    0x53 =>
    0x54 =>
    0x55 =>
    0x5a =>
        uVar1 = pass1_1010_6ca2(param_2, 0x2, param_5, param_4);
        if(uVar1 != 0x0)
        {
            pass1_1010_715c(param_2, 0x12, uVar1, param_5, param_7, param_4);
        }
        uVar1 = pass1_1010_6ca2(param_2, 0x8, param_5, param_4);
        if(uVar1 != 0x0)
        {
            pass1_1010_715c(param_2, 0x1a, uVar1, param_5, param_7, param_4);
        }
        if(param_3 == 0x2c)
        {
            pass1_1010_715c(param_2, 0x1d, uVar1, param_5, param_7, param_4);
        }
        param_6 = pass1_1010_6ca2(param_2, 0x2, param_5, param_4);
        if(param_6 == 0x0)
        {
            return 0x1;
        }
        uVar1 = 0x1c;
        break;
    0x22 =>
        uVar1 = 0x15;
        break;
    0x25 =>
        uVar1 = 0x16;
        break;
    0x26 =>
        pass1_1010_715c(param_2, 0x17, param_6, param_5, param_7, param_4);
    0x1e =>
        uVar1 = 0x13;
        break;
    0x27 =>
        uVar1 = 0x18;
        break;
    0x29 =>
        uVar1 = 0x19;
        break;
    0x2b =>
        uVar1 = 0x1b;
        break;
    0x2f =>
    0x36 =>
        param_6 = pass1_1010_6ca2(param_2, 0x2, param_5, param_4);
        if(param_6 == 0x0)
        {
            return 0x0;
        }
        uVar1 = 0x1e;
        break;
    0x30 =>
        uVar1 = 0x1f;
        break;
    0x31 =>
        uVar1 = 0x35;
        break;
    0x33 =>
        uVar1 = 0x21;
        break;
    0x34 =>
        uVar1 = 0x22;
        break;
    0x35 =>
        pass1_1010_715c(param_2, 0x23, param_6, param_5, param_7, param_4);
    0x65 =>
    0x66 =>
    0x6b =>
    0x6c =>
    0x6d =>
    0x6e =>
    0x6f =>
        uVar1 = 0x34;
        break;
    0x38 =>
        pass1_1010_715c(param_2, 0x24, param_6, param_5, param_7, param_4);
        uVar1 = 0x3d;
        break;
    0x39 =>
        uVar1 = 0x25;
        break;
    0x3e =>
        pass1_1010_715c(param_2, 0x26, param_6, param_5, param_7, param_4);
        pass1_1010_715c(param_2, 0x28, param_6, param_5, param_7, param_4);
        uVar1 = 0x27;
        break;
    0x40 =>
        uVar1 = 0x2a;
        break;
    0x41 =>
        uVar1 = 0x39;
        break;
    0x42 =>
        uVar1 = 0x3a;
        break;
    0x44 =>
        uVar1 = 0x36;
        break;
    0x45 =>
        uVar1 = 0x3b;
        break;
    0x49 =>
        uVar1 = 0x29;
        break;
    0x50 =>
        uVar1 = 0x2b;
        break;
    0x56 =>
        pass1_1010_715c(param_2, 0x3c, param_6, param_5, param_7, param_4);
        uVar1 = 0x3e;
        break;
    0x5d =>
        pass1_1010_715c(param_2, 0x2f, param_6, param_5, param_7, param_4);
        uVar1 = 0x40;
        break;
    0x5e =>
    0x60 =>
        uVar1 = 0x2f;
        break;
    0x5f =>
        pass1_1010_715c(param_2, 0x34, param_6, param_5, param_7, param_4);
        uVar1 = 0x41;
        break;
    0x61 =>
        uVar1 = 0x30;
        break;
    0x63 =>
        uVar1 = 0x31;
        break;
    0x64 =>
        uVar1 = 0x24;
        break;
    0x68 =>
        uVar1 = 0x32;
        break;
    0x69 =>
        uVar1 = 0x33;
        break;
    0x76 =>
        uVar1 = 0xa;
    code_rSEG_10106d4c:
        pass1_1010_715c(param_2, uVar1, param_6, param_5, param_7, param_4);
        uVar1 = 0xb;
    }
    pass1_1010_715c(param_2, uVar1, param_6, param_5, param_7, param_4);
    return 0x1;
}

u32  string_1010_5286(param_1: u16, param_2: u16, param_3: u32, char *param_4, param_5: u16)

{
    let mut in_buffer_4: *mut c_char;
    let mut in_buf_len_5: *mut u8;
    let mut pcVar1: *mut c_char;

    pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, param_3, (param_3 >> 0x10));
    in_buf_len_5 = (param_5 | param_4);
    if(in_buf_len_5 == 0x0)
    {
        return 0x0;
    }
    in_buffer_4 = param_4;
    mem_op_1000_179c(0x80, in_buf_len_5, 0);
    load_string_1010_84e0(SEG_1000, globals.dat_1050_14cc,
                          globals.dat_1050_14cc >> 0x10,NULL), 0x80, in_buffer_4, (short) in_buf_len_5);
    pass1_1000_3cea(str_var1(in_buf_len_5, in_buffer_4), 0x105013ac);
    pcVar1 = pass1_1038_4d28(str_var1(param_5, param_4));
    pass1_1000_3cea(str_var1(in_buf_len_5, in_buffer_4), pcVar1);
    return str_var1(in_buf_len_5, in_buffer_4);
}

void  win_sys_op_1010_5404(param_1: *mut Struct54, param_2: u16, param_3: u16, param_4: u16)

{
    let mut pi_var1: *mut i16;
    u16       **ppu_var2;
    let mut uVar3: u32;
    let mut puVar4: *mut u32;
    let mut ppcVar5: *mut *mut c_void;
    let mut pCVar6: *mut c_char;
    let mut iVar7: i16;
    let mut uVar8: u16;
    let mut puVar9: *mut u16;
    let mut uVar10: u16;
    let mut puVar11: *mut u8;
    let mut extraout_DX: *mut u8;
    let mut puVar12: *mut u8;
    let mut extraout_DX_00: *mut u8;
    let mut extraout_DX_01: *mut u8;
    let mut puVar13: *mut u8;
    let mut puVar14: *mut u16;
    let mut unaff_DI: i16;
    let mut uVar15: u16;
    let mut pCVar16: *mut c_char;
    let mut index: u16;
    let mut paVar17: *mut Struct79;
    let mut pcVar18: *mut c_char;
    let mut puVar19: *mut u16;
    let mut u_var20: u16;
    let mut local_134: [u8;102] = [0;102];
    let mut puStack50: *mut u16;
    let mut uStack46: u16;
    let mut puStack44: *mut u8;
    let mut iStack42: i16;
    let mut iStack26: i16;
    let mut puStack24: *mut u8;
    let mut iStack22: i16;
    let mut puStack20: *mut u16;
    let mut uStack16: u32;
    let mut iStack12: i16;
    let mut iStack10: i16;
    let mut uStack8: u16;
    let mut pu_stack6: *mut u8;
    let mut uStack4: u16;

    paVar17                    = struct_op_1010_1d48(str_var1(param_2, param_1), param_3);
    puVar12                    = (paVar17 >> 0x10);
    uVar15                     = 0x0;
    &param_1.field_0xa        = 0x0;
    param_1.field_0xe         = 0x0;
    param_1.field_0x12        = 0x0;
    param_1.field_0x16        = 0x0;
    &param_1.field_0x1a_addr_offset = 0x0;
    param_1.field_0x62        = 0x0;
    param_1.field_0x64        = 0x0;
    &param_1.field_0x68       = 0x0;
    &param_1.field_0x6c       = 0x0;
    param_1.field_0x70        = 0x1;
    param_1.field_0x7a        = 0x0;
    param_1.field_0x7c        = 0x0;
    param_1.field_0x7e        = 0x0;
    param_1.field_0x80        = 0x0;
    param_1.field_0x82        = 0x1;
    param_1 = addr_table_1010_3b3e[15]; //0x6312;
    param_1.field_0x2         = SEG_1010;
    pass1_1010_6034(str_var1(param_2, param_1), puVar12);
    mem_op_1000_179c(0x101, puVar12, 0);
    &param_1.field_0xe = uVar15;
    (&param_1.field_0xe + 0x2) = puVar12;
    pass1_1000_5008(&param_1.field_0xe, puVar12, 0x100, &stack0xfffe);
    uStack4 = str_op_1000_3da4(param_1.field_0xe);
    pcVar18 = param_1.field_0xe;
    uVar15  = (pcVar18 >> 0x10);
    puVar13 = (pcVar18 + uStack4);
    if(puVar13[-0x1] != '\\')
    {
        *puVar13                   = 0x5c;
        pcVar18                    = param_1.field_0xe;
        *(pcVar18 + uStack4 + 0x1) = 0x0;
    }
    pcVar18  = load_string_1010_847eglobals.dat_1050_14cc, SEG_1000);
    puVar12  = (pcVar18 >> 0x10);
    uStack8  = SUB42(pcVar18, 0x0);
    pu_stack6 = puVar12;
    pass1_1000_3cea(param_1.field_0xe, pcVar18);
    pCVar6             = str_op_1008_60e8(param_1.field_0xe);
    param_1.field_0xa = pCVar6;
    param_1.field_0xc = puVar12;
    pcVar18            = param_1.field_0xe;
    pCVar6             = LAST_SEGMENT;
    GetPrivateProfileString16(SEG_1008, param_1.field_0xa, puVar12, (s_You_may_not_run_a_turn__The_game_1050_00df + 0x21), pcVar18, (pcVar18 >> 0x10));
    if(*param_1.field_0xe != '\0')
    {
        pCVar6              = SEG_1000;
        iStack22            = pass1_1000_3e2c(param_1.field_0xe);
        puVar19             = mixed_1010_20ba(globals.dat_1050_0ed0, 0x48, param_4, puVar12, unaff_DI);
        puVar12             = (puVar19 >> 0x10);
        iStack26            = puVar19;
        iStack10            = (iStack26 + 0xa);
        iStack12            = (iStack26 + 0xc);
        param_1.field_0x62 = (iStack22 != iStack10);
        puStack24           = puVar12;
    }
    pcVar18 = param_1.field_0xe;
    uVar3   = &param_1.field_0xa;
    pCVar16 = LAST_SEGMENT;
    GetPrivateProfileString16(pCVar6, uVar3, (uVar3 >> 0x10), (s_You_may_not_run_a_turn__The_game_1050_00df + 0x21), pcVar18, (pcVar18 >> 0x10));
    if(*param_1.field_0xe != '\0')
    {
        pCVar16 = SEG_1000;
        iVar7   = pass1_1000_475e(param_1.field_0xe, 0x105013c4);
        if(iVar7 == 0x0)
        {
            param_1.field_0x80 = 0x1;
        }
    }
    pcVar18 = param_1.field_0xe;
    uVar3   = &param_1.field_0xa;
    pCVar6  = LAST_SEGMENT;
    GetPrivateProfileString16(pCVar16, uVar3, (uVar3 >> 0x10), (s_You_may_not_run_a_turn__The_game_1050_00df + 0x21), pcVar18, (pcVar18 >> 0x10));
    if(*param_1.field_0xe != '\0')
    {
        pCVar6 = SEG_1000;
        iVar7  = pass1_1000_475e(param_1.field_0xe, 0x105013c8);
        if(iVar7 == 0x0)
        {
            param_1.field_0x74 = 0x0;
        }
    }
    pcVar18 = param_1.field_0xe;
    uVar3   = &param_1.field_0xa;
    pCVar16 = LAST_SEGMENT;
    GetPrivateProfileString16(pCVar6, uVar3, (uVar3 >> 0x10), (s_You_may_not_run_a_turn__The_game_1050_00df + 0x21), pcVar18, (pcVar18 >> 0x10));
    if(*param_1.field_0xe != '\0')
    {
        pCVar16 = SEG_1000;
        iVar7   = pass1_1000_475e(param_1.field_0xe, 0x105013c8);
        if(iVar7 == 0x0)
        {
            param_1.field_0x72 = 0x0;
        }
    }
    pcVar18 = param_1.field_0xe;
    uVar3   = &param_1.field_0xa;
    pCVar6  = LAST_SEGMENT;
    GetPrivateProfileString16(pCVar16, uVar3, (uVar3 >> 0x10), (s_You_may_not_run_a_turn__The_game_1050_00df + 0x21), pcVar18, (pcVar18 >> 0x10));
    if(*param_1.field_0xe != '\0')
    {
        pCVar6 = SEG_1000;
        iVar7  = pass1_1000_475e(param_1.field_0xe, 0x105013c8);
        if(iVar7 == 0x0)
        {
            param_1.field_0x1e = 0x0;
        }
    }
    pcVar18 = param_1.field_0xe;
    uVar3   = &param_1.field_0xa;
    pCVar16 = LAST_SEGMENT;
    GetPrivateProfileString16(pCVar6, uVar3, (uVar3 >> 0x10), (s_You_may_not_run_a_turn__The_game_1050_00df + 0x21), pcVar18, (pcVar18 >> 0x10));
    if(*param_1.field_0xe != '\0')
    {
        pCVar16 = SEG_1000;
        iVar7   = pass1_1000_475e(param_1.field_0xe, 0x105013c8);
        if(iVar7 == 0x0)
        {
            param_1.field_0x20 = 0x0;
        }
    }
    pcVar18 = param_1.field_0xe;
    uVar3   = &param_1.field_0xa;
    pCVar6  = LAST_SEGMENT;
    GetPrivateProfileString16(pCVar16, uVar3, (uVar3 >> 0x10), (s_You_may_not_run_a_turn__The_game_1050_00df + 0x21), pcVar18, (pcVar18 >> 0x10));
    puVar11 = puVar12;
    if(*param_1.field_0xe != '\0')
    {
        pCVar6    = SEG_1000;
        uStack46  = pass1_1000_3e2c(param_1.field_0xe);
        puVar11   = (puVar12 | uStack46);
        puStack44 = puVar12;
        if((puVar12 | uStack46) != 0x0)
        {
            param_1.field_0x76 = uStack46;
            param_1.field_0x78 = puVar12;
            puVar11             = puVar12;
        }
    }
    pcVar18 = param_1.field_0xe;
    uVar3   = &param_1.field_0xa;
    pCVar16 = LAST_SEGMENT;
    GetPrivateProfileString16(pCVar6, uVar3, (uVar3 >> 0x10), (s_You_may_not_run_a_turn__The_game_1050_00df + 0x21), pcVar18, (pcVar18 >> 0x10));
    if(*param_1.field_0xe != '\0')
    {
        pCVar16 = SEG_1000;
        iVar7   = pass1_1000_475e(param_1.field_0xe, 0x105013c4);
        if(iVar7 == 0x0)
        {
            param_1.field_0x7a = 0x1;
        }
    }
    pcVar18 = param_1.field_0xe;
    uVar3   = &param_1.field_0xa;
    pCVar6  = LAST_SEGMENT;
    GetPrivateProfileString16(pCVar16, uVar3, (uVar3 >> 0x10), (s_You_may_not_run_a_turn__The_game_1050_00df + 0x21), pcVar18, (pcVar18 >> 0x10));
    if(*param_1.field_0xe != '\0')
    {
        pCVar6              = SEG_1008;
        uVar8               = str_op_1008_60e8(param_1.field_0xe);
        param_1.field_0x1a_addr_offset = uVar8;
        param_1.field_0x1c_addr_base = puVar11;
    }
    pcVar18 = param_1.field_0xe;
    uVar3   = &param_1.field_0xa;
    pCVar16 = LAST_SEGMENT;
    GetPrivateProfileString16(pCVar6, uVar3, (uVar3 >> 0x10), (s_You_may_not_run_a_turn__The_game_1050_00df + 0x21), pcVar18, (pcVar18 >> 0x10));
    if(*param_1.field_0xe != '\0')
    {
        pCVar16             = SEG_1008;
        uVar8               = str_op_1008_60e8(param_1.field_0xe);
        param_1.field_0x68 = uVar8;
        param_1.field_0x6a = puVar11;
    }
    pcVar18 = param_1.field_0xe;
    uVar3   = &param_1.field_0xa;
    index   = LAST_SEGMENT;
    puVar9  = GetPrivateProfileString16(pCVar16, uVar3, (uVar3 >> 0x10), (s_You_may_not_run_a_turn__The_game_1050_00df + 0x21), pcVar18, (pcVar18 >> 0x10));
    if(*param_1.field_0xe != '\0')
    {
        index               = SEG_1008;
        puVar9              = str_op_1008_60e8(param_1.field_0xe);
        param_1.field_0x6c = puVar9;
        param_1.field_0x6e = puVar11;
    }
    if(param_1.field_0x62 == 0x0)
    {
        uVar15   = SUB42(LAST_SEGMENT, 0x0);
        uStack46 = GetSystemMetrics16(index);
        iStack42 = 0x1;
        do
        {
            get_private_profile_string_1010_6132(
              str_var1(param_2, param_1), iStack42, uVar15);
            puVar14 = &param_1.field_0x0 + iStack42 * 0x4;
            if((((puVar14[0x11] < 0x0) || (puVar14[0x12] < 0x0)) || (pi_var1 = puVar14 + 0x11, *pi_var1 != iStack10 - uStack46 && (iStack10 - uStack46) <= *pi_var1))
               || (puVar9 = (iStack12 - uStack46), ppu_var2 = (u16 **)(puVar14 + 0x12), *ppu_var2 != puVar9 && puVar9 <= *ppu_var2))
            {
                uVar15 = SEG_1000;
                puVar9 = pass1_1000_4906(str_var1(param_2, &param_1.field_0x22 + iStack42 * 0x8), 0x0, 0x8);
            }
            iStack42 = iStack42 + 0x1;
        } while(iStack42 < 0x8);
    }
    mem_op_1000_179c(0xc, puVar11, 0);
    puStack50 = str_var1(puVar11, puVar9);
    if((puVar11 | puVar9) == 0x0)
    {
        puVar9  = 0x0;
        puVar12 = 0x0;
    }
    else
    {
        set_struct_1008_574a(str_var1(puVar11, puVar9));
        puVar12 = extraout_DX;
    }
    *(u16 **)&param_1.field_0x64 = puVar9;
    (&param_1.field_0x64 + 0x2)  = puVar12;
    pcVar18                       = param_1.field_0xe;
    pass1_1000_5008(pcVar18, (pcVar18 >> 0x10), 0x100, &stack0xfffe);
    uStack4 = str_op_1000_3da4(param_1.field_0xe);
    pcVar18 = param_1.field_0xe;
    uVar15  = (pcVar18 >> 0x10);
    puVar13 = (pcVar18 + uStack4);
    if(puVar13[-0x1] != '\\')
    {
        *puVar13                   = 0x5c;
        pcVar18                    = param_1.field_0xe;
        *(pcVar18 + uStack4 + 0x1) = 0x0;
    }
    uVar10   = str_op_1008_60e8(param_1.field_0xe);
    uStack16 = str_var1(puVar12, uVar10);
    mem_op_1000_179c(0x8, puVar12, 0);
    puStack50 = str_var1(puVar12, uVar10);
    if((puVar12 | uVar10) == 0x0)
    {
        puStack20 = 0x0;
    }
    else
    {
        *puStack50     = addr_table_1008_380a[36]; // 0x389a
        (uVar10 + 0x2) = SEG_1008;
        (uVar10 + 0x4) = uStack16;
        *puStack50     = addr_table_1010_6312[4];//0x6322;
        (uVar10 + 0x2) = SEG_1010;
        puStack20      = puStack50;
    }
    puVar4  = param_1.field_0x64;
    ppcVar5 = (*param_1.field_0x64 + 0x4);
    (**ppcVar5)(SEG_1000, puVar4, (puVar4 >> 0x10), puStack20, (puStack20 >> 0x10));
    pcVar18 = param_1.field_0xe;
    uVar3   = &param_1.field_0xa;
    puVar12 = extraout_DX_00;
    GetPrivateProfileString16(SEG_1000, uVar3, (uVar3 >> 0x10), (s_You_may_not_run_a_turn__The_game_1050_00df + 0x21), pcVar18, (pcVar18 >> 0x10));
    if(*param_1.field_0xe != '\0')
    {
        pcVar18 = param_1.field_0xe;
        uVar15  = SUB42(pcVar18, 0x0);
        u_var20  = (pcVar18 >> 0x10);
        while(uStack46 = pass1_1000_47a4(str_var1(u_var20, uVar15), 0x105013f8, param_4), (puVar12 | uStack46) != 0x0)
        {
            puStack44 = puVar12;
            unk_str_op_1000_3d3e(str_var1(param_4, local_134),
                                 str_var1(puVar12, uStack46));
            uStack4 = str_op_1000_3da4(str_var1(param_4, local_134));
            if(local_134[uStack4 - 0x1] != '\\')
            {
                local_134[uStack4]       = 0x5c;
                local_134[uStack4 + 0x1] = 0x0;
            }
            uVar10   = str_op_1008_60e8(str_var1(param_4, local_134));
            uStack16 = str_var1(puVar12, uVar10);
            mem_op_1000_179c(0x8, puVar12, 0);
            puStack50 = str_var1(puVar12, uVar10);
            if((puVar12 | uVar10) == 0x0)
            {
                puStack20 = 0x0;
            }
            else
            {
                *puStack50     = addr_table_1008_380a[36]; // 0x389a
                (uVar10 + 0x2) = SEG_1008;
                (uVar10 + 0x4) = uStack16;
                *puStack50     = addr_table_1010_6312[4];//0x6322;
                (uVar10 + 0x2) = SEG_1010;
                puStack20      = puStack50;
            }
            puVar4  = param_1.field_0x64;
            ppcVar5 = (*param_1.field_0x64 + 0x8);
            (**ppcVar5)(SEG_1000, puVar4, (puVar4 >> 0x10), puStack20, (puStack20 >> 0x10));
            uVar15  = 0x0;
            u_var20  = 0x0;
            puVar12 = extraout_DX_01;
        }
    }
    return;
}

void  write_private_profile_str_1010_5b10(u16 *param_1)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut uVar3: u32;
    let mut ppcVar4: *mut *mut c_void;
    let mut pCVar5: *mut c_char;
    let mut in_DX: *mut u8;
    let mut iVar6: i16;
    let mut unaff_DI: i16;
    let mut uVar7: u16;
    let mut unaff_SS: u16;
    let mut in_AF: u8;
    let mut puVar8: *mut u16;
    let mut iStack12: i16;

    uVar7 = (param_1 >> 0x10);
    iVar6 = param_1;
    param_1.field_0x0 = addr_table_1010_6312;//0x6312;
    (iVar6 + 0x2) = SEG_1010;
    puVar8 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x48, unaff_SS, in_DX, unaff_DI);
    uVar3 = (iVar6 + 0xe);
    sys_1000_3f9c(uVar3,
                  (uVar3 >> 0x10),
                  0x149c,
                  (puVar8 + 0xa),
                  &stack0xfffe,
                  uVar7,
                  SEG_1000,
                  unaff_SS,
                  in_AF);
    if ((iVar6 + 0x80) == 0x0) {
        pCVar5 = 0x13c8;
    } else {
        pCVar5 = 0x13c4;
    }
    uVar3 = (iVar6 + 0xa);
    WritePrivateProfileString16(SEG_1000, uVar3, (uVar3 >> 0x10), pCVar5);
    uVar3 = (iVar6 + 0xa);
    WritePrivateProfileString16(LAST_SEGMENT, uVar3, (uVar3 >> 0x10),  * (iVar6 + 0xe));
    if((iVar6 + 0x1e) == 0x0)
    {
        pCVar5 = 0x13c8;
    }
    else
    {
        pCVar5 = 0x13c4;
    }
    uVar3 = (iVar6 + 0xa);
    WritePrivateProfileString16(LAST_SEGMENT, uVar3, (uVar3 >> 0x10), pCVar5);
    if((iVar6 + 0x74) == 0x0)
    {
        pCVar5 = 0x13c8;
    }
    else
    {
        pCVar5 = 0x13c4;
    }
    uVar3 = (iVar6 + 0xa);
    WritePrivateProfileString16(LAST_SEGMENT, uVar3, (uVar3 >> 0x10), pCVar5);
    if((iVar6 + 0x72) == 0x0)
    {
        pCVar5 = 0x13c8;
    }
    else
    {
        pCVar5 = 0x13c4;
    }
    uVar3 = (iVar6 + 0xa);
    WritePrivateProfileString16(LAST_SEGMENT, uVar3, (uVar3 >> 0x10), pCVar5);
    if((iVar6 + 0x20) == 0x0)
    {
        pCVar5 = 0x13c8;
    }
    else
    {
        pCVar5 = 0x13c4;
    }
    uVar3 = (iVar6 + 0xa);
    WritePrivateProfileString16(LAST_SEGMENT, uVar3, (uVar3 >> 0x10), pCVar5);
    uVar3 = (iVar6 + 0xe);
    sys_1000_3f9c(uVar3,
                  (uVar3 >> 0x10),
                  0x14a2,
                  *(iVar6 + 0x76),
                  &stack0xfffe,
                  uVar7,
                  SEG_1000,
                  unaff_SS,
                  in_AF);
    uVar3 = (iVar6 + 0xa);
    WritePrivateProfileString16(SEG_1000, uVar3, (uVar3 >> 0x10),  * (iVar6 + 0xe));
    if((iVar6 + 0x7a) == 0x0)
    {
        pCVar5 = 0x13c8;
    }
    else
    {
        pCVar5 = 0x13c4;
    }
    uVar3 = (iVar6 + 0xa);
    WritePrivateProfileString16(LAST_SEGMENT, uVar3, (uVar3 >> 0x10), pCVar5);
    uVar3 = (iVar6 + 0xa);
    WritePrivateProfileString16(LAST_SEGMENT, uVar3, (uVar3 >> 0x10),  * (iVar6 + 0x1a));
    uVar3 = (iVar6 + 0xa);
    WritePrivateProfileString16(LAST_SEGMENT, uVar3, (uVar3 >> 0x10),  * (iVar6 + 0x68));
    uVar3 = (iVar6 + 0xa);
    WritePrivateProfileString16(LAST_SEGMENT, uVar3, (uVar3 >> 0x10),  * (iVar6 + 0x6c));
    iStack12 = 0x1;
    do
    {
    switchD_1010:
        2ab5 ::caseD_13(param_1, iStack12);
        iStack12 = iStack12 + 0x1;
    } while(iStack12 < 0x8);
    fn_ptr_1000_17ce((iVar6 + 0xa), SEG_1000);
    fn_ptr_1000_17ce((iVar6 + 0xe), SEG_1000);
    fn_ptr_1000_17ce((iVar6 + 0x12), SEG_1000);
    fn_ptr_1000_17ce((iVar6 + 0x16), SEG_1000);
    fn_ptr_1000_17ce((iVar6 + 0x1a), SEG_1000);
    puVar1 = (iVar6 + 0x64);
    u_var2  = (iVar6 + 0x66);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar4 = *puVar1;
        (**ppcVar4)(SEG_1000, puVar1, u_var2, 0x1);
    }
    fn_ptr_1000_17ce((iVar6 + 0x68), SEG_1000);
    fn_ptr_1000_17ce((iVar6 + 0x6c), SEG_1000);
    pass1_1010_1d80(param_1, unaff_SS);
    return;
}

void  pass1_1010_5d9c(param_1: u32, param_2: i16, param_3: *mut u8, param_4: i16, param_5: u16)

{
    let mut puVar1: *mut u16;

    (param_1 + 0x1e) = param_2;
    if(param_2 == 0x0)
    {
        puVar1 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2e, param_5, param_3, param_4);
        pass1_1018_209c(puVar1);
    }
    return;
}

void  get_private_profile_string_1010_6132(param_1: u32, param_2: i16, LPCSTR param_3)

{
    let mut uVar1: u32;
    let mut u_var2: u32;
    let mut uVar3: u16;
    let mut iVar4: i16;
    let mut in_DX: u16;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut iVar7: i16;
    let mut uVar8: u16;
    let mut unaff_SS: u16;

    uVar8 = (param_1 >> 0x10);
    iVar7 = param_1;
    uVar1 = (iVar7 + 0xe);
    u_var2 = (iVar7 + 0xa);
    GetPrivateProfileString16(param_3, u_var2, (u_var2 >> 0x10), (s_You_may_not_run_a_turn__The_game_1050_00df + 0x21), uVar1, (uVar1 >> 0x10));
    if(*(iVar7 + 0xe) != '\0')
    {
        uVar3 = pass1_1000_47a4(*(iVar7 + 0xe), 0x105014a6, unaff_SS);
        uVar5 = in_DX | uVar3;
        if(uVar5 != 0x0)
        {
            iVar4          = pass1_1000_3e2c(str_var1(in_DX, uVar3));
            iVar7          = param_2 * 0x8 + iVar7;
            (iVar7 + 0x22) = iVar4;
            uVar3          = pass1_1000_47a4(0x0, 0x105014a8, unaff_SS);
            uVar6          = uVar5 | uVar3;
            if(uVar6 != 0x0)
            {
                iVar4          = pass1_1000_3e2c(str_var1(uVar5, uVar3));
                (iVar7 + 0x24) = iVar4;
                uVar3          = pass1_1000_47a4(0x0, 0x105014aa, unaff_SS);
                uVar5          = uVar6 | uVar3;
                if(uVar5 != 0x0)
                {
                    iVar4          = pass1_1000_3e2c(str_var1(uVar6, uVar3));
                    (iVar7 + 0x26) = iVar4;
                    uVar3          = pass1_1000_47a4(0x0, 0x105014ac, unaff_SS);
                    if((uVar5 | uVar3) != 0x0)
                    {
                        iVar4          = pass1_1000_3e2c(str_var1(uVar5, uVar3));
                        (iVar7 + 0x28) = iVar4;
                    }
                }
            }
        }
    }
    return;
}

void  switchD_1010: 2ab5 ::caseD_13(param_1: u32, i16 param_2)

{
    let mut uVar1: u32;
    let mut iVar2: i16;
    let mut unaff_SS: u16;
    undefined1 in_AF;

    iVar2 = param_2 * 0x8 + param_1;
    if(((((iVar2 + 0x22) != 0x0) || ((iVar2 + 0x24) != 0x0)) || ((iVar2 + 0x26) != 0x0)) || ((iVar2 + 0x28) != 0x0))
    {
        uVar1 = (param_1 + 0xe);
        sys_1000_3f9c(uVar1, (uVar1 >> 0x10), s__d__d__d__d_1050_14ae, SEG_1050, *(param_2 * 0x8 + param_1 + 0x22), &stack0xfffe, param_1, SEG_1000, unaff_SS, in_AF);
        uVar1 = (param_1 + 0xa);
        WritePrivateProfileString16(SEG_1000, uVar1, (uVar1 >> 0x10),  * (param_1 + 0xe));
    }
    return;
}
u16 * pass1_1010_62ec(u16 *param_1, param_2: u8)

{
    write_private_profile_str_1010_5b10(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u32  pass1_1010_451a(param_1: u32, param_2: *mut u8, param_3: i16, param_4: u16)

{
    let mut uVar1: u16;
    let mut u_var2: u16;
    let mut puVar3: *mut u16;
    let mut uVar4: u32;

    puVar3 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2f, param_4, param_2, param_3);
    uVar1  = (puVar3 >> 0x10);
    uVar4  = pass1_1010_ec40(puVar3, uVar1, *(param_1 + 0x6c), puVar3, uVar1);
    u_var2  = (uVar4 >> 0x10);
    return str_var1((uVar4 + 0x4), (uVar4 + 0x2));
}

void  get_sys_metrics_1010_46f6(param_1: u32)

{
    let mut uVar1: u16;
    let mut IVar2: u16;
    let mut IVar3: u16;
    let mut in_DX: *mut u8;
    let mut iVar4: i16;
    let mut unaff_DI: i16;
    let mut uVar5: u16;
    let mut unaff_SS: u16;
    let mut puVar6: *mut u16;
    let mut uVar7: u32;
    let mut puVar8: *mut u16;
    let mut puVar9: *mut u16;
    let mut local_6: i16;
    let mut local_4: i16;

    puVar9 = str_var1(unaff_SS, &local_4);
    puVar8 = str_var1(unaff_SS, &local_6);
    puVar6 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x48, unaff_SS, in_DX, unaff_DI);
    pass1_1008_3e94((puVar6 & 0xffff0000 | (puVar6 + 0xe)), puVar8, puVar9);
    uVar5          = (param_1 >> 0x10);
    iVar4          = param_1;
    uVar7          = pass1_1008_4772((iVar4 + 0x66));
    uVar1          = (uVar7 >> 0x10);
    (iVar4 + 0x18) = local_4 + 0x8;
    (iVar4 + 0x1a) = local_6 + 0x9;
    IVar2          = GetSystemMetrics16(SEG_1008);
    (iVar4 + 0x1c) = IVar2 * 0x2 + (uVar7 + 0x4);
    IVar2          = GetSystemMetrics16(LAST_SEGMENT);
    IVar3          = GetSystemMetrics16(LAST_SEGMENT);
    (iVar4 + 0x1e) = IVar3 + IVar2 + (uVar7 + 0x8);
    return;
}

void  pass1_1010_4a8a(param_1: *mut Struct637, param_2: u16, param_3: u16, param_4: u16)

{
    let mut puVar1: *mut u8;
    let mut unaff_DI: i16;
    let mut p_var2: *mut Struct43;
    let mut puVar3: *mut u16;

    struct_op_1010_1d48(str_var1(param_2, param_1), param_3);
    param_1.field_0x16          = 0x0;
    param_1.field_0x1a_addr_offset = 0x0;
    param_1.field_0x1e          = 0x0;
    param_1.field_0x20          = 0x1;
    param_1.field_0x22          = 0x0;
    param_1.field_0x24          = 0x0;
    &param_1.field_0x26         = 0x0;
    param_1.field_0x2a          = 0x0;
    param_1.field_0x2c          = 0x1;
    param_1.field_0x2e          = 0x0;
    param_1.field_0x30          = 0x0;
    param_1.field_0x32          = 0x0;
    param_1 = addr_table_1010_502a; //0x502a; // s_SCForceMorale__s_for_colony__08l_1050_5024 + 0x6;
    param_1.fld2_segment        = SEG_1010;
    p_var2                       = unk_io_op_1010_830a(globals.dat_1050_14cc, 0x1b3, param_4);
    puVar1                       = (p_var2 >> 0x10);
    &param_1.field_0x16         = p_var2;
    (&param_1.field_0x16 + 0x2) = puVar1;
    puVar3                       = mixed_1010_20ba(globals.dat_1050_0ed0, 0x3, param_4, puVar1, unaff_DI);
    param_1.field_0x26          = puVar3;
    param_1.field_0x28          = (puVar3 >> 0x10);
    pass1_1008_4772(param_1.field_0x16);
    param_1.field_0xe  = 0x13c;
    param_1.field_0xa  = 0x0;
    param_1.field_0x10 = 0x0;
    param_1.field_0xc  = 0x0;
    return;
}

void  struct_1010_4d5c(param_1: *mut Struct245, param_2: u16, param_3: u16, param_4: u16, param_5: u16, param_6: i16, u8 *param_7)

{
    let mut uVar1: u32;
    let mut u_var2: u16;
    let mut iVar3: *mut Struct245;
    let mut iVar4: i16;
    let mut uVar5: u16;

    uVar5 = (param_1 >> 0x10);
    iVar3 = param_1;
    if(&iVar3.field_0x1a_addr_offset == 0x0)
    {
        u_var2 = iVar3.field_0x30 << 0x3;
        mem_op_1000_179c(u_var2, param_7, 0);
        &iVar3.field_0x1a_addr_offset = u_var2;
        iVar3.field_0x1c_addr_base = param_7;
    }
    uVar1                 = &iVar3.field_0x1a_addr_offset;
    iVar4                 = param_6 * 0x8;
    (uVar1 + iVar4)       = param_5;
    uVar1                 = &iVar3.field_0x1a_addr_offset;
    (uVar1 + iVar4 + 0x2) = param_4;
    uVar1                 = &iVar3.field_0x1a_addr_offset;
    (uVar1 + iVar4 + 0x4) = param_3;
    uVar1                 = &iVar3.field_0x1a_addr_offset;
    (uVar1 + iVar4 + 0x6) = param_2;
    return;
}

void  pass1_1010_4f48(param_1: *mut Struct482, param_2: u16)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut puVar4: *mut u32;
    let mut uVar5: u32;
    let mut iVar6: *mut Struct482;
    let mut iVar7: *mut Struct483;
    let mut uVar6: u16;
    let mut uVar7: u16;
    let mut paVar8: *mut Struct43;

    uVar6             = (param_1 >> 0x10);
    iVar6             = param_1;
    puVar4            = iVar6.field_0x12;
    iVar6.field_0x30 = (puVar4 + 0x8);
    if(iVar6.field_0x32 != 0x0)
    {
        uVar5            = *iVar6.field_0x12;
        uVar7            = (uVar5 >> 0x10);
        iVar7            = uVar5;
        puVar4           = iVar7.field_0x4;
        iVar7.field_0x4 = iVar6.field_0x32;
        if(puVar4 != 0x0)
        {
            ppcVar3 = *puVar4;
            (**ppcVar3)();
        }
        iVar6.field_0x32 = 0x0;
    }
    puVar1 = iVar6.field_0x16;
    u_var2  = iVar6.field_0x18;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    paVar8            = unk_io_op_1010_830a(globals.dat_1050_14cc, 0x1b3, param_2);
    iVar6.field_0x16 = paVar8;
    iVar6.field_0x18 = (paVar8 >> 0x10);
    fn_ptr_1000_17ce(iVar6.field_0x1a_addr_offset, SEG_1000);
    iVar6.field_0x1a_addr_offset = 0x0;
    iVar6.field_0x2e = 0x0;
    return;
}


u16 * pass1_1010_5004(u16 *param_1, param_2: u8, param_3: u16)

{
    free_rsrc_1010_4b3e(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1010_503e(param_1: i16, param_2: u16, param_3: u16, param_4: *mut u8, param_5: u16)

{
    struct_op_1018_4cda(param_1, param_2, param_3);
    param_1 = addr_table_1010_509a;// 0x509a; //s_SCi16ernalPutBldg2_site_0x_08lx__1050_5099 + 0x1;
    param_1.fld2_segment = SEG_1010;
    pass1_1018_4dce(str_var1(param_2, param_1), 0x1b3, param_4, param_5);
    globals._PTR_LOOP_1050_4230 = str_var1(param_2, param_1);
    return;
}

void  pass1_1010_519a(param_1: *mut Struct242, i16 *param_2, param_3: *mut u8, param_4: u16)

{
    let mut uVar1: u32;
    let mut u_var2: u16;
    let mut puVar3: *mut u8;
    let mut puVar4: *mut u8;
    let mut iVar5: *mut Struct246;
    let mut iVar6: *mut Struct247;
    let mut iVar7: i16;
    let mut uVar8: u16;
    let mut uVar9: u16;
    let mut piStack44: *mut i16;
    let mut local_18: [u8;c] = [0;c];
    let mut iStack12: i16;
    let mut u_stack6: u32;

    u_stack6 = 0x0;
    pass1_1028_dc52(str_var1(param_4, local_18), 0x1, 0x0, 0x400);
    uVar8             = (param_1 >> 0x10);
    iVar5             = param_1;
    iVar5.field_0x10 = iStack12;
    fn_ptr_1000_17ce(&iVar5.field_0xc, SEG_1000);
    u_var2 = iVar5.field_0x10 << 0x2;
    mem_op_1000_179c(u_var2, param_3, 0);
    iVar5.field_0xc = u_var2;
    iVar5.field_0xe  = param_3;
    iVar5.field_0x10 = 0x0;
    while(true)
    {
        puVar4 = param_3;
        puVar3 = local_18;
        pass1_1028_e4ec(str_var1(param_4, puVar3));
        u_stack6 = str_var1(puVar4, puVar3);
        if((puVar4 | puVar3) == 0x0)
            break;
        param_3 = (puVar4 | puVar3);
        if((puVar3 + 0x200) != 0x8000002)
        {
            param_3               = (puVar3 + 0x6);
            uVar1                 = &iVar5.field_0xc;
            uVar9                 = (uVar1 >> 0x10);
            iVar7                 = uVar1;
            iVar6                 = (iVar5.field_0x10 * 0x4);
            piStack44             = (param_1 & 0xffff0000 | ZEXT24(&iVar5.field_0x10));
            (iVar6 + iVar7)       = (puVar3 + 0x4);
            (iVar6 + iVar7 + 0x2) = param_3;
            *piStack44            = *piStack44 + 0x1;
        }
    }
    *param_2 = iVar5.field_0x10;
    return;
}

void  pass1_1010_35a4(param_1: *mut u32, param_2: u32, u8 *param_3)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut u_var2: u32;
    let mut uVar3: u16;
    let mut puVar4: *mut u32;
    let mut uVar5: u16;
    let mut extraout_DX: *mut u8;
    let mut puVar6: *mut u8;
    let mut extraout_DX_00: *mut u8;
    let mut uVar7: u16;
    let mut unaff_SS: u16;
    let mut uStack12: u32;
    let mut puStack8: *mut u32;

    uVar7    = (param_1 >> 0x10);
    u_var2    = (param_1 + 0x56);
    u_var2    = (u_var2 + 0x8);
    puStack8 = (u_var2 + (param_1 + 0x5a) * 0x4);
    uStack12 = param_2;
    if(param_2 != 0x0)
    {
        uVar7 = SEG_1000;
        mem_op_1000_179c(0x4a, param_3, 0);
        uVar3 = param_2;
        uVar5 = param_3 | uVar3;
        if(uVar5 == 0x0)
        {
            uVar3 = 0x0;
            uVar5 = 0x0;
        }
        else
        {
            uVar7 = SUB42(SEG_1040, 0x0);
            pass1_1040_c54a((param_2 & 0xffff | ZEXT24(param_3) << 0x10), 0x1, puStack8, SEG_1040, unaff_SS);
        }
        ppcVar1 = (*param_1 + 0x18);
        (**ppcVar1)(uVar7, param_1, 0x1, uVar3, uVar5);
        puVar6 = extraout_DX;
        for(; (uStack12 & 0xf) != 0x0; uStack12 = uStack12 >> 0x4)
        {
            u_var2    = (puStack8 + 0x8);
            puStack8 = ((((u8)uStack12 & 0xf) - 0x1) * 0x4 + u_var2);
            uVar7    = SEG_1000;
            puVar4 = puStack8;
            mem_op_1000_179c(0x4a, puVar6, 0);
            uVar3 = puVar4;
            uVar5 = puVar6 | uVar3;
            if(uVar5 == 0x0)
            {
                uVar3 = 0x0;
                uVar5 = 0x0;
            }
            else
            {
                uVar7 = SUB42(SEG_1040, 0x0);
                pass1_1040_c54a((puVar4 & 0xffff | ZEXT24(puVar6) << 0x10), 0x1, puStack8, SEG_1040, unaff_SS);
            }
            ppcVar1 = (*param_1 + 0x18);
            (**ppcVar1)(uVar7, param_1, 0x1, uVar3, uVar5);
            puVar6 = extraout_DX_00;
        }
    }
    return;
}

void  pass1_1010_3680(param_1: u16, param_2: u16, param_3: u16, param_4: u16, param_5: u16, param_6: *mut u8, param_7: u16)

{
    mem_op_1000_179c(0x4a, param_6, 0);
    if((param_6 | param_5) != 0x0)
    {
        pass1_1040_c54a(
          str_var1(param_6, param_5), 0x1, str_var1(param_4, param_3), SEG_1040, param_7);
        return;
    }
    return;
}

u16 * struct_1010_38f8(param_1: *mut Struct240, param_2: i16, param_3: u16, u8 *param_4)

{
    let mut uVar1: u16;
    let mut iVar2: *mut Struct240;
    let mut u_var2: u16;
    let mut puVar3: *mut u16;

    if(param_2 != 0x0)
    {
        uVar1 = param_2 << 0x2;
        mem_op_1000_179c(uVar1, param_4, 0);
        u_var2 = (param_1 >> 0x10);
        iVar2            = param_1;
        iVar2.field_0x8 = uVar1;
        iVar2.field_0xa = param_4;
        return str_var1(param_4, iVar2.field_0x8);
    }
    mem_op_1000_179c(0x1a, param_4, 0);
    if((param_4 | param_3) != 0x0)
    {
        puVar3 = pass1_1010_37d4(str_var1(param_4, param_3));
        return puVar3;
    }
    return 0x0;
}

void  pass1_1010_394a(param_1: u16, param_2: u16, param_3: i16, param_4: u16, u8 *param_5)

{
    if(param_3 != 0x0)
    {
        mem_op_1000_179c(param_3 << 0x2, param_5, 0);
        return;
    }
    mem_op_1000_179c(0x16, param_5, 0);
    if((param_5 | param_4) != 0x0)
    {
        struct_1010_383a(str_var1(param_5, param_4));
        return;
    }
    return;
}

u32  pass1_1010_3d82(param_1: *mut Struct628, param_2: u16, param_3: u16, param_4: u16)

{
    let mut paVar1: *mut Struct43;

    struct_op_1010_1d48(str_var1(param_2, param_1), param_3);
    &param_1.field_0xa        = 0x0;
    param_1 =  addr_table_1010_3e2c;//0x3e2c;
    param_1.fld2_segment      = SEG_1010;
    paVar1                     = unk_io_op_1010_830a(globals.dat_1050_14cc, 0x99, param_4);
    param_1.field_0xa         = paVar1;
    param_1.field_0xc         = (paVar1 >> 0x10);
    return param_1;
}

void  pass1_1010_3e3c(param_1: *mut Struct55, param_2: u16, param_3: u16)

{
    let mut iVar1: *mut Struct633;
    let mut uVar1: u16;
    let mut p_var2: *mut Struct43;

    get_sys_metrics_1018_4b1e(param_1, 0x6, param_2);
    uVar1              = (param_1 >> 0x10);
    iVar1              = param_1;
    iVar1.field_0x20  = addr_table_1008_380a[36]; // 0x389a
    iVar1.field_0x22  = SEG_1008;
    iVar1.field_0x20  = addr_table_1008_3aa0[2];//0x3aa8;
    iVar1.field_0x22  = SEG_1008;
    iVar1.field_0x24  = 0x0;
    &iVar1.field_0x66 = 0x0;
    iVar1.field_0x6a  = 0x4;
    iVar1.field_0x6c  = 0x0;
    iVar1.field_0x70  = 0x0;
    iVar1.field_0x74  = 0x0;
    pass1_1008_3e54((param_1 & 0xffff0000 | &iVar1.field_0x76), 0x0, 0x3, 0x5);
    iVar1.field_0x7c  = 0x0;
    param_1.field_0x0 = addr_table_1010_4a46;//0x4a46; //&PTR_LOOP_1050_4a46;
    iVar1->fld2_segment = SEG_1010;
    iVar1.field_0x20  = addr_table_1010_4a46[15];//0x4a82; // &PTR_LOOP_1050_4a82;
    iVar1.field_0x22  = SEG_1010;
    pass1_1000_4906((param_1 & 0xffff0000 | &iVar1.field_0x26), 0x0, 0x40);
    p_var2            = unk_io_op_1010_830a(globals.dat_1050_14cc, 0x1a1, param_3);
    iVar1.field_0x66 = p_var2;
    iVar1.field_0x68 = (p_var2 >> 0x10);
    pass1_1018_4b78(param_1, param_3);
    return;
}

void  pass1_1010_41d6(param_1: *mut Struct243, param_2: u32, param_3: *mut u8, param_4: u16, param_5: u8)

{
    let mut puVar1: *mut u16;
    let mut piVar2: *mut i16;
    let mut uVar3: u32;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut iVar6: i16;
    let mut iVar7: i16;
    let mut puVar8: *mut u8;
    let mut puVar9: *mut u8;
    let mut iVar9: *mut Struct243;
    let mut iVar10: *mut Struct244;
    let mut unaff_DI: i16;
    let mut uVar10: u16;
    let mut uVar11: u16;
    let mut puVar12: *mut u16;
    let mut iStack50: i16;
    let mut local_30: i16;
    let mut local_2e: *mut Struct18;
    let mut iStack42: i16;
    let mut paStack40: *mut Struct18;
    let mut paStack34: *mut Struct18;
    let mut paStack30: *mut Struct18;
    let mut iStack26: i16;
    let mut uStack24: u16;
    let mut iStack22: i16;
    let mut uStack20: u32;
    let mut uStack16: u16;
    let mut uStack14: u32;
    let mut uStack10: u32;
    let mut u_stack6: u16;
    let mut uStack4: u16;

    uVar10            = (param_1 >> 0x10);
    iVar9             = param_1;
    iVar9.field_0x6c = param_2;
    puVar12           = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2f, param_4, param_3, unaff_DI);
    uStack4           = (puVar12 >> 0x10);
    u_stack6           = puVar12;
    uStack10          = pass1_1010_ec40(u_stack6, uStack4, iVar9.field_0x6c, u_stack6, uStack4);
    puVar8            = (uStack10 >> 0x10);
    iVar9.field_0x74 = (uStack10 + 0x22);
    if(&iVar9.field_0x70 != 0x0)
    {
        paStack34 = &iVar9.field_0x70;
        paStack30 = paStack34;
        fn_ptr_1000_17ce(paStack34, SEG_1000);
        &iVar9.field_0x70 = 0x0;
    }
    uVar4 = iVar9.field_0x74 << 0x7;
    mem_op_1000_179c(uVar4, puVar8, 0);
    &iVar9.field_0x70 = uVar4;
    iVar9.field_0x72  = puVar8;
    pass1_1030_8344(globals._PTR_LOOP_1050_5748, (globals._PTR_LOOP_1050_5748 >> 0x10), iVar9.field_0x6c);
    uStack14 = str_var1(puVar8, uVar4);
    uStack16 = ((uVar4 + 0x10) == 0x9);
    iStack22 = (uStack10 + 0x22);
    uVar4 = iStack22 * 0x6;
    mem_op_1000_179c(uVar4, puVar8, 0);
    paStack30 = str_var1(puVar8, uVar4);
    puVar9    = (puVar8 | uVar4);
    if(puVar9 == 0x0)
    {
        uStack20 = 0x0;
    }
    else
    {
        pass1_1000_5586(0x3e38, SEG_1008, iStack22, 0x6, uVar4, puVar8);
        uStack20 = paStack30;
    }
    uStack24 = 0x0;
    while(true)
    {
        uVar11 = (uStack10 >> 0x10);
        puVar1 = (uStack10 + 0x22);
        if(*puVar1 < uStack24 || *puVar1 == uStack24)
            break;
        uVar3 = (uStack10 + 0x24);
        uVar5 = uStack24;
        pass1_1028_e0a0(globals._PTR_LOOP_1050_65e2, (uVar3 + uStack24 * 0x2) << 0x10, puVar9, param_4, param_5);
        paStack34 = str_var1(puVar9, uVar5);
        pass1_1008_3f62((uStack20 & 0xffff0000 | (uStack24 * 0x6 + uStack20)),
                        str_var1(puVar9, uVar5 + 0x8));
        paStack40 = paStack34;
        paStack30 = paStack34;
        if(paStack34 != 0x0)
        {
            fn_ptr_1030_84d0(paStack34);
            fn_ptr_1000_17ce(paStack34, SEG_1000);
        }
        uStack24 = uStack24 + 0x1;
        puVar9   = uStack20;
    }
    for(iStack26 = 0x0; piVar2 = &iVar9.field_0x74, *piVar2 != iStack26 && iStack26 <= *piVar2; iStack26 = iStack26 + 0x1)
    {
        pass1_1008_3e94((uStack20 & 0xffff0000 | (iStack26 * 0x6 + uStack20)),
                        str_var1(param_4, &local_2e),
                        str_var1(param_4, &local_30));
        iStack42 = pass1_1000_49b2(local_2e);
        iStack42 = iStack42 / 0x5;
        if(0xc < iStack42)
        {
            iStack42 = 0xc;
            iVar6    = pass1_1000_49b2(local_2e);
            local_2e = (local_2e & 0xffff0000 | ((local_2e / iVar6) * 0x3c));
        }
        iVar7     = pass1_1000_49b2(local_2e);
        iVar6     = ((long)iVar7 % 0x5);
        paStack34 = (paStack34 & 0xffff0000 | (long)iVar7 % 0x5 & 0xffffU);
        if(local_2e < 0x0)
        {
            if(0x2 < iVar6)
            {
                iVar6 = iVar6 + -0x5;
            }
            local_2e = (local_2e & 0xffff0000 | (local_2e + iVar6));
        }
        else
        {
            if(iVar6 < 0x3)
            {
                local_2e = (local_2e & 0xffff0000 | (local_2e - iVar6));
            }
            else
            {
                local_2e = (local_2e & 0xffff0000 | (local_2e + (0x5 - iVar6)));
            }
        }
        iStack50 = local_30 / 0x16;
        for(iVar6 = 0x0; iVar6 < 0x10; iVar6 = iVar6 + 0x1)
        {
            if(0xf < iStack50)
            {
                iStack50 = 0x0;
            }
            if(((uStack16 != 0x0) < iStack50) && (iStack50 < 0x8))
            {
                iVar7                  = ((iStack42 * 0x10 + iStack50) * 0x2 + 0x11e0);
                iVar10                 = ((iStack26 * 0x10 + iVar6) * 0x8);
                uVar3                  = &iVar9.field_0x70;
                (iVar10 + uVar3)       = iVar7 + 0x49;
                uVar3                  = &iVar9.field_0x70;
                (iVar10 + uVar3 + 0x2) = local_2e + 0x49;
                uVar3                  = &iVar9.field_0x70;
                (iVar10 + uVar3 + 0x4) = iVar7 + 0x4e;
                uVar3                  = &iVar9.field_0x70;
                (iVar10 + uVar3 + 0x6) = local_2e + 0x4e;
            }
            else
            {
                iVar7                 = (iStack26 * 0x10 + iVar6) * 0x8;
                uVar3                 = &iVar9.field_0x70;
                (iVar7 + uVar3)       = 0x0;
                uVar3                 = &iVar9.field_0x70;
                (uVar3 + iVar7 + 0x2) = 0x0;
                uVar3                 = &iVar9.field_0x70;
                (uVar3 + iVar7 + 0x4) = 0x1;
                uVar3                 = &iVar9.field_0x70;
                (uVar3 + iVar7 + 0x6) = 0x1;
            }
            iStack50 = iStack50 + 0x1;
        }
    }
    paStack40 = uStack20;
    local_2e  = uStack20;
    fn_ptr_1000_17ce(uStack20, SEG_1000);
    draw_1010_47ae(param_1, SEG_1000, param_4);
    return;
}
