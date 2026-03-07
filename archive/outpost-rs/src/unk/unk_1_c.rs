// #include "unk_1.h"

// #include "address_tables/function_tables.h"
// #include "fn_ptr_ops/fn_ptr_ops_7.h"
// #include "globals.h"
// #include "op_int.h"
// #include "struct_43.h"
// #include "struct_ops_6.h"
// #include "structs/structs_5xx/structs_51x.h"
// #include "ui_ops/ui_ops_6.h"
// #include "unk_10.h"
// #include "unk_17.h"


pub fn pass1_1040_d76e(struct_1040_d76e_1 *param_1) {
    let mut u32_var1: u32;
//    u8*        param_1_lo;
//    u8*        param_1_hi;
//    param_1_hi = (param_1 >> 0x10);
//    param_1_lo = param_1;
    u32_var1 = (param_1.field_0x94);
    pass1_1018_5742(_var1: u32,
                    (param_1.field_0x9c),
                    (param_1.field_0x98));
    (param_1.field_0x9c) = 0x0;
}


pub fn pass1_1040_d0f8(globals: &mut Globals, param_1: *mut Struct57, param_2: u16)

{
    let mut u16_var1: u16;
    let mut in_DX: u16;
    let mut u16_var2: u16;
    let mut u16_var3: u16;
    let mut u16_var4: u16;
//    Struct438 *iVar5;
    let mut unaff_DI: i16;
//    u16          uVar5;
    let mut u16_var7: u16;
    let mut u16_var6: u16;
    let mut u32_var7: u32;
    let mut iVar8: *mut Struct392;

    struct_1040_b082(param_1, str_var1(param_2, 0x1845));
//    uVar5 = (param_1 >> 0x10);
//    iVar5 =  param_1;
    &param_1.field_0x94 = 0x0;
    param_1.field_0x98 = globals.dat_1050_5f16;
    &param_1.field_9c = 0x0;
    param_1.field_0xa0 = 0x0;
    param_1 = addr_table_1040_d8c4;//0xd8c4;
    param_1.field_0x2 = SEG_1040;
    u16_var6
      = mixed_1010_20ba(globals.dat_1050_0ed0, 0x47, _var7: u16, in_DX, unaff_DI);
    u16_var2            = (u16_var6 >> 0x10);
    param_1.field_0x94 = u16_var6;
    param_1.field_0x96 = u16_var2;
    u32_var7            = pass1_1018_5732(param_1.field_0x94, _var2: u16, param_1.field_0x98, _var6: u16, _var2: u16, u16_var7);
    u16_var3          = (u32_var7 >> 0x10);
    param_1.field_9c = u32_var7;
    param_1.field_9e = u16_var3;
    u16_var1          = u16_var3 | param_1.field_9c;
    if(u16_var1 == 0x0)
    {
        mem_op_1000_179c(0xc, _var3: u16, 0);
        u16_var4 = (u16_var3 | u16_var1);
        if(u16_var4 == 0x0)
        {
            param_1.field_9c = 0x0;
        }
        else
        {
            pass1_1010_8ef2(str_var1(_var3: u16, u16_var1), _var4: u16, u16_var7);
            param_1.field_9c   = u16_var1;
            param_1.field_9e = u16_var4;
        }
    }
}


u16 * pass1_1040_c9cc(u16 *param_1, param_2: u8)

{
    pass1_1040_c5ac(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


pub fn pass1_1040_c71e(param_1: *mut Struct65)

{
    pass1_1040_9252(param_1);
    (param_1.field_0x28) = (param_1.field_0x24) / 0x2 - (param_1.field_0x2c) / 0x2;
}


pub fn pass1_1040_c630(globals: &mut Globals, param_1: *mut Struct165, param_2: u16, param_3: u16)

{
    let mut iVar1: i16;
    let mut fn_ptr_1: *mut c_void;
    let mut uVar3: u32;
    void**    addr_table;
    //    Struct165 *iVar4;
    let mut uVar5: u16;

//    uVar5 = (param_1 >> 0x10);
    //    iVar4 = param_1;
    uVar3 = param_1.field_0x42;
    if((uVar3 + 0x12) != 0x71)
    {
        param_1.field_0x36 = 0x5;
        param_1.field_0x26 = 0x5;
        param_1.field_0x28 = 0x5;
        iVar1               = param_1.field_0x36;
        param_1.field_0x30 = iVar1;
        param_1.field_0x2e = iVar1;
        if(globals.dat_1050_5f02 == 0x0)
        {
            globals.dat_1050_5f04
              = unk_io_op_1010_830a(globals.dat_1050_14cc,
                                    0xff,
                                    param_3);
            param_2 = SEG_1010;
            globals.dat_1050_5f08
              = unk_io_op_1010_830a(globals.dat_1050_14cc, 0x100, param_3);
        }
        globals.dat_1050_5f02      = globals.dat_1050_5f02 + 0x1;
        param_1.field_0x8          = globals.dat_1050_5f04;
        param_1.field_0xc          = globals.dat_1050_5f08;
        pass1_1040_9618(param_1);
        param_1.field_0x20 = 0x0;
        param_1.field_0x1e = 0xc8;
        param_1.field_0x22 = 0xa0;
        param_1.field_0x24 = param_1.field_0x2c + param_1.field_0x36;
        param_1.field_0x2e = param_1.field_0x36 * 0x3 + param_1.field_0x2a;
        param_1.field_0x30 = param_1.field_0x36;
        param_1.field_0x32 = param_1.field_0x22 - param_1.field_0x36;
        param_1.field_0x3c = 0x25;
        addr_table          = param_1.field_0x0;
        fn_ptr_1            = (addr_table + 0x4);
        (*fn_ptr_1)(param_2, param_1);
        fn_ptr_1 = (addr_table + 0x8);
        (*fn_ptr_1)(param_2, param_1, uVar5);
    }
}


u16  pass1_1040_c60e(param_1: u32)

{
    let mut uVar1: u32;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x42) != 0x0)
    {
        uVar1 = (param_1 + 0x42);
        return (uVar1 + 0x12);
    }
    return 0x0;
}


u32  pass1_1040_c518(param_1: u32, param_2: u8, param_3: u16)

{
    pass1_1040_bf92(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1040_bf92(u16 *param_1, param_2: u16) {
    let mut iVar1: *mut Struct514;
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    iVar1 =  param_1;
    param_1.field_0x0 = addr_table_1040_c53e;//0xc53e;
    iVar1->fld2_segment = SEG_1040;
    pass1_1010_1ea6(iVar1.field_0x6, param_1 & 0xffff | uVar1 << 0x10, param_2);
    unk_destroy_win_op_1010_2fa0(iVar1.field_0x6, SEG_1010);
    param_1.field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    iVar1->fld2_segment = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment = SEG_1008;
    return;
}


void  pass1_1040_bfde(param_1: *mut Struct160, param_2: *mut Struct160, param_3: u16)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut u_var2: u32;
    let mut iVar3: i16;
    let mut uVar4: u16;

    uVar4                  = (param_1 >> 0x10);
    iVar3                  = param_1;
    (iVar3 + 0x6) = param_2;
    ppcVar1                = (*param_2 + 0x4);
    (**ppcVar1)();
    u_var2          = (iVar3 + 0x6);
    (u_var2 + 0x22) = (iVar3 + 0x4);
    pass1_1010_2ee2((iVar3 + 0x6), param_3, SEG_1010);
    return;
}


u16  pass1_1040_bb5a(param_1: u32)

{
    fn_ptr_1 *ppcVar1;

    ppcVar1 = ((param_1 + 0x94) + 0x8);
    (**ppcVar1)();
    return 0x0;
}


void  pass1_1040_b8be(u32 *param_1)

{
    fn_ptr_1 *ppcVar1;

    ppcVar1 = (*param_1 + 0x80);
    (**ppcVar1)();
    return;
}


u16  pass1_1040_b316(param_1: *mut u32, param_2: u16, param_3: u16, param_4: u16, i16 param_5)

{
    fn_ptr_1 *ppcVar1;
    let mut uStack4: u16;

    if(param_5 == 0xf)
    {
        ppcVar1 = (*param_1 + 0x60);
        uStack4 = (**ppcVar1)();
    }
    else
    {
        if(param_5 == 0x111)
        {
            ppcVar1 = (*param_1 + 0x10);
            (**ppcVar1)();
            uStack4 = 0x1;
        }
        else
        {
            uStack4 = pass1_1040_79c0(param_1, param_2, param_3, param_4, param_5);
        }
    }
    return uStack4;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1040_b17c(param_1: u32, param_2: u32, param_3: *mut u8, param_4: i16, param_5: i16, param_6: u16)

{
    let mut pi_var1: *mut i16;
    let mut u_var2: u32;
    let mut pcVar3: *mut c_char;
    let mut uVar4: u16;
    let mut iVar5: i16;
    let mut uVar6: u16;
    let mut puVar7: *mut u8;
    let mut puVar8: *mut u16;
    let mut puStack12: *mut u16;
    let mut iStack4: i16;

    iStack4 = 0x0;
    while(true)
    {
        uVar6  = (param_1 >> 0x10);
        iVar5  = param_1;
        pi_var1 = *(i16 **)(iVar5 + 0x90);
        puVar7 = (pi_var1 >> 0x10);
        if(*pi_var1 == iStack4 || *pi_var1 < iStack4)
            break;
        param_5                       = (iStack4 * 0x2 + param_2);
        u_var2                         = (pi_var1 + 0x2);
        (iStack4 * 0xa + u_var2 + 0x4) = param_5;
        iStack4                       = iStack4 + 0x1;
        param_3                       = puVar7;
    }
    puVar8    = mixed_1010_20ba(globals.dat_1050_0ed0, 0x3, param_6, param_3, param_5);
    uVar4     = (puVar8 >> 0x10);
    u_var2     = (iVar5 + 0x90);
    puStack12 = *(u16 **)(u_var2 + 0x2);
    for(iStack4 = 0x0; pi_var1 = *(i16 **)(iVar5 + 0x90), *pi_var1 != iStack4 && iStack4 <= *pi_var1; iStack4 = iStack4 + 0x1)
    {
        u_var2  = (iVar5 + 0x90);
        u_var2  = (u_var2 + 0x6);
        pcVar3 = pass1_1010_b038(puVar8, u_var2, (u_var2 >> 0x10), (puStack12 + 0x4), param_4);
        string_1040_a626(puStack12, str_var1(uVar4, pcVar3), uVar4);
        puStack12 = (puStack12 & 0xffff0000 | (puStack12 + 0xa));
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1040_ac84(param_1: *mut Struct57, param_2: u16, param_3: *mut u8, param_4: i16, param_5: u16) {
    let mut iVar1: *mut Struct726;
    let mut uVar1: u16;
    let mut pu_var2: *mut u16;

    struct_1040_b082(param_1, str_var1(param_2, 0x1f3));
    uVar1 = (param_1 >> 0x10);
    iVar1 =  param_1;
    iVar1.field_0x94 = 0x0;
    &iVar1.field_0x98 = 0x0;
    param_1 = addr_table_1040_afc4;//0xafc4;
    iVar1->fld2_segment = SEG_1040;
    iVar1.field_0x94 = globals._PTR_LOOP_1050_5ef0;
    globals._PTR_LOOP_1050_5ef0 = 0x0;
    pu_var2 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x3d, param_5, param_3, param_4);
    iVar1.field_0x98 = pu_var2;
    iVar1.field_0x9a = (pu_var2 >> 0x10);
    return;
}


u16 * pass1_1040_a204(u16 *param_1, param_2: u8) {
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce( param_1, SEG_1000);
    }
    return param_1;
}


u32  pass1_1040_a2cc(param_1: i16, param_2: u32, param_3: u32, param_4: u16, param_5: *mut u8, param_6: u16, param_7: u16)

{
    let mut uVar1: u16;

    if(param_3 == 0x1826)
    {
        if((param_3 == 0x1) || ((0x1 < param_3 - 0x1U && (param_3 - 0x3U < 0x2))))
        {
            uVar1 = 0x1;
        }
        else
        {
            uVar1 = 0x0;
        }
        return uVar1;
    }
    pass1_1040_b54a(param_1, param_2, (param_2 >> 0x10), param_3, param_5, param_6, param_7);
    return str_var1(param_5, param_4);
}


void  pass1_1040_8b3c(param_1: u16, param_2: u32, param_3: u32, param_4: u16)

{
    if((param_3 != 0x0) && ((param_3 == (&PTR_LOOP_1050_0000 + 0x1) || param_3 == &PTR_LOOP_1050_0002 || (((&PTR_LOOP_1050_0002 + 0x1U) < param_3 + -0x2 && (param_3 + -0x6 < &PTR_LOOP_1050_0002))))))
    {
        globals.PTR_LOOP_1050_5df4 = 0x0;
        globals.dat_1050_5df8      = param_3;
        return;
    }
    post_win_msg_1040_7b3c(
      str_var1(param_2, param_1), (param_2 >> 0x10), param_3, param_3, param_4);
    return;
}


u16 * pass1_1040_8e58(param_1: i16, param_2: u16, param_3: u16, param_4: u32)

{
    pass1_1040_b040(
      str_var1(param_2, param_1), str_var1(param_4, param_3), (param_4 >> 0x10));
    param_1 =  0x8f3c;
    param_1.fld2_segment = SEG_1040;
    return param_1;
}


void  pass1_1040_9422(u32 *param_1)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x8) != 0x0)
    {
        ppcVar1 = (*param_1 + 0x10);
        (**ppcVar1)();
    }
    if((param_1 + 0x4) != 0x0)
    {
        ppcVar1 = (*param_1 + 0x14);
        (**ppcVar1)();
    }
    return;
}


void  pass1_1040_9618(param_1: *mut Struct65)

{
    let mut uVar1: u16;
    let mut iVar2: *mut Struct162;
    let mut u_var2: u16;
    let mut uVar3: u32;

    u_var2             = (param_1 >> 0x10);
    iVar2             = param_1;
    uVar3             = pass1_1008_4772(iVar2.field_0x8);
    uVar1             = (uVar3 >> 0x10);
    iVar2.field_0x2a = (uVar3 + 0x4);
    iVar2.field_0x2c = (uVar3 + 0x8);
    return;
}


u16  pass1_1040_824a(param_1: u32, i16 param_2)

{
    if((param_1 + 0x6) != param_2)
    {
        return 0x1;
    }
    return 0x0;
}


void  pass1_1040_807e(param_1: *mut Struct395, param_2: u16, param_3: u16)

{
    let mut uVar1: u16;
    let mut ppcVar2: *mut *mut c_void;
    let mut puVar3: *mut u32;
    let mut puVar4: *mut u32;
    let mut in_DX: *mut u8;
    let mut uVar5: u16;
    let mut extraout_DX: *mut u8;
    let mut puVar6: *mut u8;
    let mut extraout_DX_00: *mut u8;
    let mut puVar7: *mut u8;
    let mut iVar9: *mut Struct395;
    let mut uVar8: u16;
    let mut paVar9: *mut Struct43;
    let mut uStack10: u32;
    let mut iVar8: *mut Struct393;

    if(param_2 == 0x1)
    {
        pass1_1040_805a(in_DX);
        return;
    }
    paVar9 = unk_io_op_1010_830a(globals.dat_1050_14cc, param_2, param_3);
    uVar5  = (paVar9 >> 0x10);
    puVar3 = paVar9;
    if((uVar5 | puVar3) != 0x0)
    {
        ppcVar2 = (paVar9 + 0x14);
        puVar4  = puVar3;
        (**ppcVar2)(SEG_1010, puVar3, uVar5);
        uStack10 = str_var1(extraout_DX, puVar4);
        uVar8    = (param_1 >> 0x10);
        iVar9    = param_1;
        puVar6   = extraout_DX;
        if(iVar9.field_0x70 != 0x0)
        {
            puVar4 = &iVar9.field_0x70;
            uVar1  = (&iVar9.field_0x70 + 0x2);
            puVar6 = (uVar1 | puVar4);
            if(puVar6 != 0x0)
            {
                ppcVar2 = *puVar4;
                (**ppcVar2)();
                puVar6 = extraout_DX_00;
            }
        }
        mem_op_1000_179c(0x14, puVar6, 0);
        puVar7 = (puVar6 | puVar4);
        if(puVar7 == 0x0)
        {
            puVar4 = 0x0;
            puVar7 = 0x0;
        }
        else
        {
            struct_1008_4c58(str_var1(puVar6, puVar4));
        }
        &iVar9.field_0x70 = puVar4;
        (&iVar9.field_0x70 + 0x2)         = puVar7;
        pass1_1008_4d84(iVar9.field_0x70, uStack10, puVar7);
        if(paVar9 != 0x0)
        {
            ppcVar2 = paVar9;
            (**ppcVar2)(SEG_1008, puVar3, uVar5, 0x1);
        }
        return;
    }
    return;
}


u32  pass1_1040_805a(u8 *param_1)

{
    let mut unaff_DI: i16;
    let mut uVar1: u16;
    let mut unaff_SS: u16;

    if(globals._PTR_LOOP_1050_4230 == 0x0)
    {
        mixed_1010_20ba(globals.dat_1050_0ed0, 0x28, unaff_SS, param_1, unaff_DI);
    }
    uVar1 = (globals._PTR_LOOP_1050_4230 >> 0x10);
    return str_var1((globals._PTR_LOOP_1050_4230 + 0x10), (globals._PTR_LOOP_1050_4230 + 0xe));
}


u16  pass1_1040_8054(void)

{
    return 0x0;
}


void  pass1_1040_78de(void)

{
    return;
}


void  pass1_1040_741e(param_1: u32, param_2: u16)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: i16;
    let mut uVar5: u16;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    pass1_1010_1ea6(*(iVar4 + 0x94), param_1 & 0xffff | uVar5 << 0x10, param_2);
    puVar1 = (iVar4 + 0x98);
    u_var2  = (iVar4 + 0x9a);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)(SEG_1010, puVar1, u_var2, 0x1);
    }
    (iVar4 + 0x98) = 0x0;
    (iVar4 + 0x94) = 0x0;
    return;
}


i16  pass1_1040_5eaa(param_1: u32)

{
    let mut iVar1: i16;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    switch((iVar1 + 0x9a))
    {
    0x0 =>
    0x70 =>
    0x71 =>
        (iVar1 + 0x98) = 0x0;
        return iVar1;
    0x1 =>
    2 =>
        (iVar1 + 0x98) = 0xd;
        return iVar1;
     3 =>
        (iVar1 + 0x98) = 0xe;
        return iVar1;
    0x4 =>
    0x4b =>
        (iVar1 + 0x98) = 0xf;
        break;
    0x5 =>
        (iVar1 + 0x98) = 0x10;
        return iVar1;
    0x6 =>
        (iVar1 + 0x98) = 0x11;
        return iVar1;
    0x7 =>
        (iVar1 + 0x98) = 0x12;
        break;
    0x8 =>
        (iVar1 + 0x98) = 0x13;
        break;
    0x9 =>
    0xa =>
    0xb =>
        (iVar1 + 0x98) = 0x14;
        break;
    0xc =>
        (iVar1 + 0x98) = 0x18;
        break;
    0xd =>
        (iVar1 + 0x98) = 0x19;
        break;
    0xe =>
    0x76 =>
        (iVar1 + 0x98) = 0x17;
        break;
    0xf =>
    0x10 =>
    0x11 =>
        (iVar1 + 0x98) = 0x1a;
        break;
    0x12 =>
        (iVar1 + 0x98) = 0x1b;
        break;
    0x13 =>
        (iVar1 + 0x98) = 0x1c;
        break;
    0x14 =>
        (iVar1 + 0x98) = 0x1d;
        break;
    0x15 =>
    0x16 =>
    0x17 =>
    0x18 =>
    0x19 =>
        (iVar1 + 0x98) = 0x1e;
        break;
    0x1a =>
        (iVar1 + 0x98) = 0x1f;
        break;
    0x1b =>
        (iVar1 + 0x98) = 0x20;
        break;
    0x1c =>
    0x1d =>
    0x1e =>
        (iVar1 + 0x98) = 0x21;
        break;
    0x1f =>
        (iVar1 + 0x98) = 0x22;
        break;
    0x20 =>
        (iVar1 + 0x98) = 0x23;
        break;
    0x21 =>
        (iVar1 + 0x98) = 0x24;
        break;
    0x22 =>
        (iVar1 + 0x98) = 0x25;
        break;
    0x23 =>
    0x24 =>
    0x25 =>
    0x26 =>
    0x27 =>
    0x28 =>
    0x29 =>
    0x2a =>
    0x2b =>
        (iVar1 + 0x98) = 0x26;
        break;
    0x2c =>
        (iVar1 + 0x98) = 0x27;
        break;
    0x2d =>
        (iVar1 + 0x98) = 0x28;
        break;
    0x2e =>
    0x2f =>
    0x30 =>
    0x31 =>
        (iVar1 + 0x98) = 0x29;
        break;
    0x32 =>
    0x33 =>
    0x34 =>
    0x35 =>
    0x4d =>
        (iVar1 + 0x98) = 0x2a;
        break;
    0x36 =>
        (iVar1 + 0x98) = 0x2b;
        break;
    0x37 =>
    0x38 =>
    0x39 =>
        (iVar1 + 0x98) = 0x2c;
        break;
    0x3a =>
        (iVar1 + 0x98) = 0x2d;
        break;
    0x3b =>
    0x3c =>
        (iVar1 + 0x98) = 0x2e;
        break;
    0x3d =>
        (iVar1 + 0x98) = 0x2f;
        break;
    0x3e =>
        (iVar1 + 0x98) = 0x30;
        break;
    0x3f =>
        (iVar1 + 0x98) = 0x31;
        break;
    0x40 =>
        (iVar1 + 0x98) = 0x32;
        break;
    0x41 =>
        (iVar1 + 0x98) = 0x33;
        break;
    0x42 =>
        (iVar1 + 0x98) = 0x34;
        break;
    0x43 =>
        (iVar1 + 0x98) = 0x35;
        break;
    0x44 =>
        (iVar1 + 0x98) = 0x36;
        break;
    0x45 =>
        (iVar1 + 0x98) = 0x37;
        break;
    0x46 =>
        (iVar1 + 0x98) = 0x38;
        break;
    0x47 =>
        (iVar1 + 0x98) = 0x39;
        break;
    0x48 =>
    0x49 =>
    0x4a =>
        (iVar1 + 0x98) = 0x3a;
        break;
    0x4c =>
        (iVar1 + 0x98) = 0x3b;
        break;
    0x4e =>
        (iVar1 + 0x98) = 0x3c;
        break;
    0x4f =>
    0x50 =>
        (iVar1 + 0x98) = 0x3d;
        break;
    0x51 =>
    0x52 =>
    0x53 =>
    0x54 =>
    0x55 =>
        (iVar1 + 0x98) = 0x3e;
        break;
    0x56 =>
    0x57 =>
    0x58 =>
    0x59 =>
    0x5a =>
        (iVar1 + 0x98) = 0x3f;
        break;
    0x5b =>
        (iVar1 + 0x98) = 0x40;
        break;
    0x5c =>
    0x5d =>
    0x5e =>
        (iVar1 + 0x98) = 0x41;
        break;
    0x5f =>
    0x60 =>
    0x61 =>
        (iVar1 + 0x98) = 0x42;
        break;
    0x62 =>
    0x63 =>
    0x64 =>
    0x65 =>
    0x66 =>
        (iVar1 + 0x98) = 0x43;
        break;
    0x67 =>
    0x68 =>
        (iVar1 + 0x98) = 0x44;
        break;
    0x69 =>
        (iVar1 + 0x98) = 0x45;
        break;
    0x6a =>
        (iVar1 + 0x98) = 0x46;
        break;
    0x6b =>
        (iVar1 + 0x98) = 0x47;
        break;
    0x6c =>
        (iVar1 + 0x98) = 0x48;
        break;
    0x6d =>
        (iVar1 + 0x98) = 0x49;
        break;
    0x6e =>
        (iVar1 + 0x98) = 0x4a;
        break;
    0x6f =>
        (iVar1 + 0x98) = 0x4b;
        break;
    0x74 =>
        (iVar1 + 0x98) = 0x15;
        break;
    0x75 =>
        (iVar1 + 0x98) = 0x16;
        break;
    0x78 =>
    0x7a =>
    0x7b =>
    0x7c =>
    0x7d =>
    0x7e =>
    0x7f =>
    0x80 =>
    0x81 =>
    0x82 =>
        (iVar1 + 0x98) = 0x4c;
    }
    return iVar1;
}


void  pass1_1040_6402(param_1: *mut Struct57, param_2: u16, param_3: *mut u8, param_4: i16, param_5: u16)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut iVar2: *mut Struct725;
    let mut u_var2: u16;
    let mut puVar3: *mut u16;

    get_sys_metrics_1040_7728(param_1, 0x1, 0x0, 0x1850, param_2);
    u_var2 = (param_1 >> 0x10);
    iVar2 =  param_1;
    iVar2.field_0x8e = 0x0;
    iVar2.field_0x92 = 0x0;
    param_1 = addr_table_1040_67ba;//0x67ba;
    iVar2->fld2_segment = SEG_1040;
    puVar3 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2b, param_5, param_3, param_4);
    &iVar2.field_0x92 = puVar3;
    (&iVar2.field_0x92 + 0x2) = (puVar3 >> 0x10);
    ppcVar1 = (*iVar2.field_0x92 + 0x4);
    (**ppcVar1)();
    return;
}


void  pass1_1040_6470(param_1: *mut Struct18, param_2: u16) {
    let mut iVar1: *mut Struct18;
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    iVar1 =  param_1;
    param_1.field_0x0 = addr_table_1040_67ba;//0x67ba;
    iVar1.field_0x2 = SEG_1040;
    if (&iVar1.field_0x92 != 0x0) {
        pass1_1010_1ea6(*&iVar1.field_0x92, (long) param_1, param_2);
    }
    pass1_1038_b6e0(globals.ptr_1050_5b7c, iVar1.field_0x6);
    fn_ptr_1000_17ce(&iVar1.field_0x8e, SEG_1000);
    ui_cleanup_op_1040_782c(param_1, SEG_1000);
    return;
}


Struct18 * pass1_1040_6794(param_1: *mut Struct18, param_2: u8, param_3: u16)

{
    pass1_1040_6470(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1040_6826(param_1: *mut Struct57, param_2: u16) {
    let mut iVar1: i16;
    let mut u_var2: u16;

    pass1_1040_b0bc(param_1, 0x0, str_var1(param_2, 0xfda));
    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    (iVar1 + 0x94) = 0x0;
    (iVar1 + 0x98) = 0x0;
    param_1 = addr_table_1040_6f32;//0x6f32;
    (iVar1 + 0x2) = SEG_1040;
    return;
}


u16  pass1_1040_68d2(param_1: *mut u32, i16 *param_2, param_3: u16, param_4: u16, param_5: i16, param_6: u16)

{
    fn_ptr_1 *ppcVar1;
    let mut u_var2: u16;

    if(param_5 == 0x2b)
    {
        if(*param_2 == 0x4)
        {
            win_ui_get_prop_op_1040_9566(str_var1(param_3, param_2), param_6);
        }
    }
    else
    {
        if(param_5 != 0x111)
        {
            u_var2 = pass1_1040_b316(param_1, param_2, param_3, param_4, param_5);
            return u_var2;
        }
        ppcVar1 = (*param_1 + 0x80);
        (**ppcVar1)(param_6, param_1, param_2, str_var1(param_4, param_3));
    }
    return 0x1;
}


void  pass1_1040_6cac(param_1: u32, param_2: u16)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: i16;
    let mut uVar5: u16;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    pass1_1010_1ea6(*(iVar4 + 0x94), param_1 & 0xffff | uVar5 << 0x10, param_2);
    puVar1 = (iVar4 + 0x98);
    u_var2  = (iVar4 + 0x9a);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)(SEG_1010, puVar1, u_var2, 0x1);
    }
    (iVar4 + 0x98) = 0x0;
    (iVar4 + 0x94) = 0x0;
    return;
}


void  pass1_1040_6fb6(param_1: *mut Struct57, param_2: u16) {
    let mut iVar1: i16;
    let mut u_var2: u16;

    pass1_1040_b0bc(param_1, 0x0, str_var1(param_2, 0xfd9));
    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    (iVar1 + 0x94) = 0x0;
    (iVar1 + 0x98) = 0x0;
    param_1 = addr_table_1040_76a4;//0x76a4;
    (iVar1 + 0x2) = SEG_1040;
}


void  pass1_1040_4d7e(param_1: u32)

{
    let mut uVar1: u32;
    let mut piVar2: *mut i16;
    let mut uVar3: u16;
    let mut iStack8: i16;
    let mut pu_stack6: *mut u32;

    uVar3    = (param_1 >> 0x10);
    uVar1    = (param_1 + 0x90);
    pu_stack6 = (uVar1 + 0x2);
    iStack8  = 0x0;
    while((piVar2 = *(i16 **)(param_1 + 0x90), *piVar2 != iStack8 && iStack8 <= *piVar2 && ((pu_stack6 + 0x4) != 0x1770)))
    {
        iStack8  = iStack8 + 0x1;
        pu_stack6 = (pu_stack6 & 0xffff0000 | (pu_stack6 + 0xa));
    }
    pass1_1000_3e2c(*pu_stack6);
    return;
}
