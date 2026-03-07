
// #include "fn_ptr_ops_4.h"

// #include "address_tables/function_tables.h"
// #include "fn_ptr_ops_7.h"
// #include "globals.h"
// #include "op_int.h"
// #include "op_windef.h"
// #include "struct_ops/struct_ops_3.h"
// #include "structs/structs_6xx/structs_60x.h"
// #include "sys_ops/sys_ops_12.h"

// #include <stdbool.h>

Struct18 * pass1_1028_7472(param_1: *mut Struct18, param_2: u8)

{
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_816e(param_1: *mut Struct18, param_2: u8)

{
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_8342(param_1: *mut Struct18, param_2: u8)

{
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_6850(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_6186(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_6a7a(param_1: *mut Struct18, param_2: u8)

{
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_6aa6(param_1: *mut Struct18, param_2: u8)

{
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_6e24(param_1: *mut Struct18, param_2: u8)

{
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_6f84(param_1: *mut Struct18, param_2: u8)

{
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1028_504a(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1028_5128(param_1: u16, param_2: u16, param_3: *mut u8, param_4: i16, param_5: u16, param_6: u8)

{
    let mut pi_var1: *mut i16;
    let mut extraout_DX: u16;
    let mut piVar2: *mut i16;
    let mut uVar3: u16;
    let mut puVar4: *mut u16;
    let mut uVar5: u16;
    let mut local_14e: [u8;124] = [0;124];
    let mut uStack42: u32;
    let mut uStack38: u32;
    let mut local_22: i16;
    let mut local_20: [u8;2] = [0;2];
    let mut local_1e: [u8;2] = [0;2];
    let mut local_1c: u32;
    let mut iStack24: i16;
    let mut uStack22: u32;
    let mut piStack18: *mut i16;
    let mut uStack16: u16;
    let mut local_e: i16;
    let mut local_c: u16;
    let mut uStack10: u32;
    let mut pu_stack6: *mut u16;

    pass1_1028_bd38(str_var1(param_2, param_1), param_3, param_5);
    pu_stack6 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2f, param_5, param_3, param_4);
    uStack16 = (pu_stack6 >> 0x10);
    uStack10 = *(pu_stack6 + 0x20);
    puVar4   = &local_c;
    pi_var1   = &local_e;
    piVar2   = pi_var1;
    uVar3    = param_5;
    uVar5    = param_5;
    pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, uStack10, (uStack10 >> 0x10));
    piStack18 = pi_var1;
    pass1_1030_5b1c(
      str_var1(uStack16, pi_var1), str_var1(uVar3, piVar2), str_var1(uVar5, puVar4));
    pass1_1028_b58e(str_var1(param_2, param_1));
    uStack22 = str_var1(extraout_DX, pi_var1);
    local_1c = *(pi_var1 + 0x6);
    iStack24 = pi_var1[0x8];
    pass1_1028_c8ee(param_5, param_1, param_2, 0x1, str_var1(param_5, &local_1c));
    pass1_1008_3eb4(str_var1(param_5, &local_1c),
                    str_var1(param_5, &local_22),
                    str_var1(param_5, local_20),
                    str_var1(param_5, local_1e));
    if(local_e < local_22)
    {
        pass1_1030_5b3e(str_var1(uStack16, piStack18), local_22, local_c);
        pass1_1030_5b1c(str_var1(uStack16, piStack18),
                        str_var1(param_5, &local_e),
                        str_var1(param_5, &local_c));
    }
    uStack38 = (uStack22 + 0x2e);
    uStack42 = *(uStack38 + 0x4);
    struct_op_1028_87f0(param_5, param_6, str_var1(param_5, local_14e), 0x0, 0x0, 0x6f, &local_1c, param_5, uStack42, uStack10);
    fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_5, local_14e));
    pass1_1028_ccd0(param_6, param_5, str_var1(param_2, param_1), str_var1(param_5, &local_1c));
    return;
}


Struct18 * pass1_1028_525a(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u32  pass1_1028_533c(param_1: i16, param_2: u16)

{
    pass1_1028_b418((param_1 + 0x6));
    if(((param_1 + 0xa) & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((param_1 + 0x6), SEG_1000);
    }
    return str_var1((param_1 + 0x8), (param_1 + 0x6));
}


Struct18 * pass1_1028_5496(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_55a2(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_0138(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u32  pass1_1028_568a(param_1: i16, param_2: u16)

{
    pass1_1028_b418((param_1 + 0x6));
    if(((param_1 + 0xa) & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((param_1 + 0x6), SEG_1000);
    }
    return str_var1((param_1 + 0x8), (param_1 + 0x6));
}


u32  pass1_1028_571c(param_1: i16, param_2: u16)

{
    pass1_1028_b418((param_1 + 0x6));
    if(((param_1 + 0xa) & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((param_1 + 0x6), SEG_1000);
    }
    return str_var1((param_1 + 0x8), (param_1 + 0x6));
}


u32  pass1_1028_57fa(param_1: i16, param_2: u16)

{
    pass1_1028_b418((param_1 + 0x6));
    if(((param_1 + 0xa) & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((param_1 + 0x6), SEG_1000);
    }
    return str_var1((param_1 + 0x8), (param_1 + 0x6));
}


u32  pass1_1028_58dc(param_1: i16, param_2: u16)

{
    pass1_1028_b418((param_1 + 0x6));
    if(((param_1 + 0xa) & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((param_1 + 0x6), SEG_1000);
    }
    return str_var1((param_1 + 0x8), (param_1 + 0x6));
}


u32  pass1_1028_59be(param_1: i16, param_2: u16)

{
    pass1_1028_b418((param_1 + 0x6));
    if(((param_1 + 0xa) & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((param_1 + 0x6), SEG_1000);
    }
    return str_var1((param_1 + 0x8), (param_1 + 0x6));
}


Struct18 * pass1_1028_5bc6(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1028_5d12(param_1: u16, param_2: i16, param_3: u16, param_4: u8)

{
    let mut uVar1: u32;
    let mut u_var2: u32;
    let mut extraout_DX: u16;

    pass1_1028_b58e(*(param_2 + 0x6));
    (param_2 + -0x4)  = param_1;
    (param_2 + -0x2)  = extraout_DX;
    u_var2             = (param_2 + -0x4);
    (param_2 + -0x8)  = (u_var2 + 0x2e);
    u_var2             = (param_2 + -0x8);
    uVar1             = *(u_var2 + 0x4);
    *(param_2 + -0xc) = uVar1;
    pass1_1028_68de(str_var1(param_3, param_2 + -0x11a), 0x1, uVar1, param_4, param_3);
    fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_3, param_2 + -0x11a));
    (param_2 + -0x11a) = addr_table_1008_380a[36]; // 0x389a
    (param_2 + -0x118) = SEG_1008;
    return;
}


Struct18 * pass1_1028_5d68(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u32  pass1_1028_5e4e(param_1: i16, param_2: u16)

{
    pass1_1028_b418((param_1 + 0x6));
    if(((param_1 + 0xa) & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((param_1 + 0x6), SEG_1000);
    }
    return str_var1((param_1 + 0x8), (param_1 + 0x6));
}


Struct18 * pass1_1028_602e(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1028_6186(param_1: *mut Struct603)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: *mut Struct603;
    let mut uVar4: u16;

    uVar4            = (param_1 >> 0x10);
    iVar4            = param_1;
    param_1.field_0x0 = addr_table_1028_6876;//0x6876;
    iVar4->fld2_segment = SEG_1028;
    puVar1           = iVar4.field_0x20;
    u_var2            = iVar4.field_0x22;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    pass1_1028_b418(param_1);
}


void  pass1_1028_61c4(param_1: *mut Struct315, param_2: u32, param_3: u16)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut uVar4: u16;
    let mut paVar5: *mut Struct21;
    let mut uVar6: u32;
    let mut uVar7: u16;
    let mut iVar7: *mut Struct315;

    iVar7 = param_1;
    uVar7 = (param_1 >> 0x10);
    pass1_1028_b46e(param_1, param_2, param_3);
    puVar1 = iVar7.field_0x20;
    u_var2  = iVar7.field_0x22;
    uVar4  = u_var2 | puVar1;
    paVar5 = str_var1(uVar4, puVar1);
    if(uVar4 != 0x0)
    {
        ppcVar3 = *puVar1;
        paVar5  = (**ppcVar3)();
    }
    mem_op_1000_179c(0xc, (paVar5 >> 0x10), 0);
    if(paVar5 == 0x0)
    {
        uVar6 = 0x0;
    }
    else
    {
        uVar6 = set_struct_1008_574a(paVar5);
    }
    iVar7.field_0x20 = uVar6;
    iVar7.field_0x22 = (uVar6 >> 0x10);
    return;
}


void  pass1_1028_6228(param_1: u32, param_2: u16, param_3: i16, param_4: i16, param_5: u16)

{
    let mut uVar1: u16;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut iVar6: i16;
    let mut uVar7: u16;
    let mut bVar8: bool;
    long       lVar9;
    let mut local_a: [u8;4] = [0;4];
    let mut u_stack6: u32;

    uVar7 = (param_1 >> 0x10);
    iVar6 = param_1;
    pass1_1008_5784(str_var1(param_5, local_a), *(iVar6 + 0x20));
    while(true)
    {
        do
        {
            lVar9 = pass1_1008_5b12(local_a, param_5);
            uVar5 = (lVar9 >> 0x10);
            iVar4 = lVar9;
            if(lVar9 == 0x0)
            {
                return;
            }
        } while((iVar4 + 0x6) != param_4);
        uVar1 = (iVar4 + 0xa);
        if((param_3 == 0x0) && (param_2 < uVar1))
            break;
        bVar8   = param_2 < uVar1;
        param_2 = param_2 - uVar1;
        param_3 = param_3 - bVar8;
        ppcVar3 = ((iVar6 + 0x20) + 0xc);
        (**ppcVar3)(SEG_1008, (iVar6 + 0x20));
        u_stack6 = 0x0;
    }
    u_var2         = (iVar4 + 0xc);
    (iVar4 + 0xa) = uVar1 - param_2;
    (iVar4 + 0xc) = -(param_2 * (u_var2 / uVar1) - (iVar4 + 0xc));
    return;
}


Struct18 * pass1_1028_3fde(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u32  pass1_1028_42ca(param_1: i16, param_2: u16)

{
    pass1_1028_b418((param_1 + 0x6));
    if(((param_1 + 0xa) & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((param_1 + 0x6), SEG_1000);
    }
    return str_var1((param_1 + 0x8), (param_1 + 0x6));
}


Struct18 * pass1_1028_4444(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_4810(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_4530(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u32  pass1_1028_4920(param_1: i16, param_2: u16)

{
    pass1_1028_b418((param_1 + 0x6));
    if(((param_1 + 0xa) & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((param_1 + 0x6), SEG_1000);
    }
    return str_var1((param_1 + 0x8), (param_1 + 0x6));
}


Struct18 * pass1_1028_4af6(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1028_2f18(param_1: u16, param_2: i16, param_3: u8, param_4: u32)

{
    let mut iVar1: i16;
    let mut pu_var2: *mut u32;
    let mut extraout_DX: u16;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut puVar5: *mut u16;
    let mut local_944: [u8;124] = [0;124];
    let mut local_820: [u8;124] = [0;124];
    let mut local_6fc: [u8;124] = [0;124];
    let mut local_5d8: [u8;124] = [0;124];
    let mut local_4b4: [u8;124] = [0;124];
    let mut local_390: u32;
    let mut local_38a: [u8;124] = [0;124];
    let mut local_266: [u8;124] = [0;124];
    let mut local_142: [u8;124] = [0;124];
    let mut local_1e: u32;
    let mut local_1a: u16;
    let mut local_18: u32;
    let mut uStack20: u16;
    let mut uStack18: u32;
    let mut uStack14: u32;
    let mut uStack10: u32;
    let mut u_stack6: u32;

    u_stack6 = pass1_1028_bb24(param_4);
    iVar1   = u_stack6;
    pass1_1028_b58e(param_4);
    uStack10 = str_var1(extraout_DX, iVar1);
    uStack14 = (iVar1 + 0x2e);
    uStack18 = *(uStack14 + 0x4);
    local_18 = *(iVar1 + 0xc);
    uStack20 = (iVar1 + 0x10);
    pass1_1008_3eb4(str_var1(param_1, &local_18),
                    str_var1(param_1, &local_1e),
                    str_var1(param_1, &local_1e + 0x2),
                    str_var1(param_1, &local_1a));
    pass1_1008_3e76(
      str_var1(param_1, &local_18), local_1e, local_1e - 0x1, local_1a - 0x1);
    struct_op_1028_87f0(param_1, param_3, str_var1(param_1, local_142), 0x0, 0x0, 0xd, &local_18, param_1, uStack18, u_stack6);
    fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_1, local_142));
    pass1_1008_3e76(
      str_var1(param_1, &local_18), local_1e, local_1e + 0x1, local_1a + 0x1);
    struct_op_1028_87f0(param_1, param_3, str_var1(param_1, local_266), 0x0, 0x0, 0xc, &local_18, param_1, uStack18, u_stack6);
    fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_1, local_266));
    pass1_1008_3e76(
      str_var1(param_1, &local_18), local_1e, local_1e + 0x1, local_1a - 0x1);
    struct_op_1028_87f0(param_1, param_3, str_var1(param_1, local_38a), 0x0, 0x0, 0xe, &local_18, param_1, uStack18, u_stack6);
    fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_1, local_38a));
    puVar5 = pass1_1008_3e54(
      str_var1(param_1, &local_390), local_1e, local_1e - 0x1, local_1a + 0x1);
    uVar3  = (puVar5 >> 0x10);
    struct_op_1028_87f0(param_1, param_3, str_var1(param_1, local_4b4), 0x0, 0x0, 0xb, &local_390, param_1, uStack18, u_stack6);
    fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_1, local_4b4));
    pass1_1008_3e76(str_var1(param_1, &local_18), local_1e, local_1e - 0x1, local_1a);
    struct_op_1028_87f0(param_1, param_3, str_var1(param_1, local_5d8), 0x0, 0x0, 0x7a, &local_18, param_1, uStack18, u_stack6);
    fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_1, local_5d8));
    pass1_1008_3e76(
      str_var1(param_1, &local_18), local_1e, (local_1e >> 0x10), local_1a + 0x1);
    struct_op_1028_87f0(param_1, param_3, str_var1(param_1, local_6fc), 0x0, 0x0, 0x7a, &local_18, param_1, uStack18, u_stack6);
    fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_1, local_6fc));
    pass1_1008_3e76(str_var1(param_1, &local_18), local_1e, local_1e + 0x1, local_1a);
    struct_op_1028_87f0(param_1, param_3, str_var1(param_1, local_820), 0x0, 0x0, 0x7a, &local_18, param_1, uStack18, u_stack6);
    fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_1, local_820));
    pass1_1008_3e76(
      str_var1(param_1, &local_18), local_1e, (local_1e >> 0x10), local_1a - 0x1);
    struct_op_1028_87f0(param_1, param_3, str_var1(param_1, local_944), 0x0, 0x0, 0x7a, &local_18, param_1, uStack18, u_stack6);
    fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_1, local_944));
    pu_var2 = &local_390;
    pass1_1030_627e(param_1, pu_var2, uVar3, globals._PTR_LOOP_1050_5740,
                    str_var1(param_1, pu_var2), u_stack6);
    uVar4                      = (uStack14 >> 0x10);
    (uStack14 + 0x10) = pu_var2;
    (uStack14 + 0x12)          = uVar3;
    return;
}


Struct18 * pass1_1028_33f6(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_34d0(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_0138(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_35e2(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_3718(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_388e(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1028_388e(u16 *param_1)

{
    let mut uVar1: u16;
    let mut p_var2: *mut Struct18;
    let mut iVar3: i16;
    let mut uVar4: u16;

    uVar4         = (param_1 >> 0x10);
    iVar3         = param_1;
    param_1.field_0x0 = addr_table_1028_3e2c; // 0x3e2c;
    (iVar3 + 0x2) = SEG_1028;
    p_var2        = (iVar3 + 0x28);
    uVar1         = (iVar3 + 0x2a);
    if((uVar1 | p_var2) != 0x0)
    {
        fn_ptr_1020_ba7e((p_var2 & 0xffff | uVar1 << 0x10));
        fn_ptr_1000_17ce(p_var2, SEG_1000);
    }
    pass1_1028_b418(param_1);
}


Struct18 * pass1_1028_3e06(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_388e(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1028_199a(param_1: u16, param_2: i16, param_3: u8, param_4: u32)

{
    let mut pi_var1: *mut i16;
    let mut u_var2: u32;
    let mut extraout_DX: *mut u8;
    let mut puVar3: *mut u8;
    let mut uVar4: u16;
    let mut piVar5: *mut i16;
    let mut uVar6: u16;
    let mut puVar7: *mut u16;
    let mut uVar8: u16;
    let mut local_15e: u16;
    let mut uStack348: u16;
    let mut puStack50: *mut u32;
    let mut uStack42: u32;
    let mut uStack38: u16;
    let mut piStack36: *mut i16;
    let mut local_22: i16;
    let mut local_20: u16;
    let mut uStack30: u32;
    let mut puStack26: *mut u16;
    let mut local_16: i16;
    let mut local_14: u32;
    let mut local_10: u32;
    let mut uStack12: u16;
    let mut uStack10: u32;
    let mut iStack6: i16;
    let mut puStack4: *mut u8;

    pi_var1  = (param_4 + 0x14);
    *pi_var1 = *pi_var1 + -0x1;
    if(*pi_var1 == 0x0)
    {
        pass1_1028_b58e(param_4);
        uStack10 = *(param_2 + 0x2e);
        iStack6  = param_2;
        puStack4 = extraout_DX;
        pass1_1038_5804(uStack10, 0x1, 0x3);
        local_10  = *(iStack6 + 0xc);
        uStack12  = (iStack6 + 0x10);
        puStack50 = &local_10;
        puVar3    = puStack4;
        pass1_1008_3eb4(str_var1(param_1, &local_10),
                        str_var1(param_1, &local_16),
                        str_var1(param_1, &local_14),
                        str_var1(param_1, &local_14 + 0x2));
        puStack26 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2f, param_1, puVar3, &uStack10);
        u_var2     = *(puStack26 + 0x20);
        puVar7    = &local_20;
        piStack36 = &local_22;
        piVar5    = piStack36;
        uVar6     = param_1;
        uVar8     = param_1;
        uStack30  = u_var2;
        pass1_1028_e1ec(globals._PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
        uStack38 = u_var2;
        pass1_1030_5b1c(u_var2 & 0xffff | ZEXT24(piStack36) << 0x10,
                        str_var1(uVar6, piVar5),
                        str_var1(uVar8, puVar7));
        if(local_22 < local_16 + 0x1)
        {
            pass1_1030_5b3e(str_var1(piStack36, uStack38), local_16 + 0x1, local_20);
            pass1_1030_5b1c(str_var1(piStack36, uStack38),
                            str_var1(param_1, &local_22),
                            str_var1(param_1, &local_20));
        }
        uVar4    = (uStack10 >> 0x10);
        uStack42 = *(uStack10 + 0x4);
        struct_op_1028_87f0(param_1, param_3, str_var1(param_1, &local_15e), 0x0, 0x0, (-(local_16 == 0x0) & 0xffd3) + 0x60, &local_10, param_1, uStack42 & 0xffff | (uStack10 + 0x6) << 0x10, uStack30);
        fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_1, &local_15e));
        local_15e = addr_table_1008_380a[36]; // 0x389a
        uStack348 = SEG_1008;
        pass1_1008_3e76(
          str_var1(param_1, &local_10), local_16 + 0x1, local_14, (local_14 >> 0x10));
        struct_op_1028_87f0(param_1, param_3, str_var1(param_1, &local_15e), 0x0, 0x0, 0x60, &local_10, param_1, uStack42, uStack30);
        fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_1, &local_15e));
    }
    return;
}


Struct18 * pass1_1028_1b2e(param_1: *mut Struct18, param_2: u8, param_3: u16)

{
    pass1_1030_dcf4(&param_1.field_0x0, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_1ec8(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_254c(param_1: *mut Struct18, param_2: u8, param_3: u16)

{
    pass1_1028_2042(&param_1.field_0x0, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_2626(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_2762(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_2a6c(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_2b4e(param_1: *mut Struct18, param_2: u8, param_3: u16)

{
    pass1_1030_dcf4(&param_1.field_0x0, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_0ab4(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1028_0b96(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_16fe(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1020_e868(param_1: *mut Struct18, param_2: u8)

{
    pass1_1020_e846(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1020_ee3a(param_1: u32, param_2: u16, param_3: i16, param_4: u16, param_5: u8)

{
    let mut extraout_DX: u16;
    let mut local_13c: [u8;124] = [0;124];
    let mut uStack24: u32;
    let mut uStack20: u32;
    let mut uStack16: u32;
    let mut local_c: u32;
    let mut uStack8: u16;
    let mut iStack6: i16;
    let mut uStack4: u16;

    pass1_1028_b58e(param_1);
    local_c  = *(param_3 + 0xc);
    uStack8  = (param_3 + 0x10);
    iStack6  = param_3;
    uStack4  = extraout_DX;
    uStack16 = pass1_1028_bb24(param_1);
    uStack20 = (iStack6 + 0x2e);
    uStack24 = *(uStack20 + 0x4);
    struct_op_1028_87f0(param_4, param_5, str_var1(param_4, local_13c), 0x0, 0x1, param_2, &local_c, param_4, uStack24, uStack16);
    fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_4, local_13c));
    return;
}


Struct18 * pass1_1020_eed0(param_1: *mut Struct18, param_2: u8, param_3: u16)

{
    pass1_1030_dcf4(&param_1.field_0x0, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1020_ef94(param_1: *mut Struct18, param_2: u8)

{
    pass1_1020_ef5e(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1028_0582(param_1: *mut u32, param_2: *mut u32, param_3: u16, param_4: u16, param_5: u8, param_6: u16)

{
    u32       **ppuVar1;
    long       *plVar2;
    let mut uVar3: u32;
    let mut ppcVar4: *mut *mut c_void;
    let mut puVar5: *mut u8;
    let mut uVar6: u16;
    let mut uVar7: u16;
    let mut uVar8: u32;
    let mut extraout_DX: u16;
    let mut uVar9: u16;
    let mut extraout_DX_00: u16;
    let mut extraout_DX_01: u16;
    let mut iVar10: i16;
    let mut iVar11: i16;
    let mut uVar12: u16;
    let mut uVar13: u16;
    let mut uVar14: u16;
    let mut local_138: [u8;10e] = [0;10e];
    let mut local_2a: u32;
    let mut paStack38: *mut Struct99;
    let mut paStack34: *mut Struct99;
    let mut uStack30: u32;
    let mut uStack18: u32;
    let mut uStack14: u32;
    let mut local_a: [u8;4] = [0;4];
    let mut u_stack6: u32;

    uVar12  = (param_1 >> 0x10);
    iVar10  = param_1;
    uVar8   = *(iVar10 + 0x14);
    uVar13  = (uVar8 >> 0x10);
    iVar11  = uVar8;
    u_stack6 = uVar8 & 0xffff0000 | (iVar11 + 0xa4);
    if(((iVar11 + 0xa6) != 0x0) && ((iVar11 + 0xac) != 0x0))
    {
        pass1_1028_081e(param_1, param_2, param_6);
        param_2 = (iVar10 + 0x20);
        ppuVar1 = (u32 **)(u_stack6 + 0x8);
        if(*ppuVar1 < param_2 || *ppuVar1 == param_2)
        {
            puVar5  = local_a;
            ppcVar4 = (*param_1 + 0x40);
            (**ppcVar4)(param_3, param_1);
            uVar8   = ZEXT24(puVar5);
            param_6 = extraout_DX;
            if(puVar5 == 0x0)
            {
                if((u_stack6 + 0x2) == 0xc)
                {
                    uStack14 = pass1_1028_b4f2(param_1);
                    param_6  = (uStack14 >> 0x10);
                    uVar8    = *(uStack14 + 0x1f6);
                    plVar2   = (long *)(uVar8 + 0x170);
                    *plVar2  = *plVar2 + 0x1;
                    uStack18 = uVar8;
                }
                else {
                    uStack18 = globals.u32_ptr_1050_68a2;
                    paStack38 = pass1_1000_07fc(SEG_1000, globals.u32_ptr_1050_68a2);
                    uVar9 = (paStack38 >> 0x10);
                    uVar6 = paStack38;
                    if ((uVar9 | uVar6) == 0x0) {
                        paStack34 =  0x0;
                    } else {
                        paStack38->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
                        (uVar6 + 0x2) = SEG_1008;
                        (uVar6 + 0x4)        = 0x0;
                        (uVar6 + 0x6)        = 0x0;
                        (uVar6 + 0x8)        = 0x0;
                        (uVar6 + 0xa)        = 0x0;
                        (uVar6 + 0xc)        = 0x0;
                        paStack38->fld0_addr_table = addr_table_1018_56ce;//0x56ce;
                        (uVar6 + 0x2)        = SEG_1018;
                        paStack34            = paStack38;
                    }
                    uVar13            = (u_stack6 >> 0x10);
                    iVar11            = u_stack6;
                    uVar14            = (paStack34 >> 0x10);
                    (paStack34 + 0x6) = (iVar11 + 0x2);
                    (paStack34 + 0xa) = (iVar11 + 0x6);
                    param_3           = SEG_1020;
                    uVar7             = switch_1020_c3b4((iVar11 + 0x2));
                    uVar6             = uVar7 * (u_stack6 + 0x6);
                    uVar8             = uVar6;
                    (paStack34 + 0xc) = uVar6;
                    uVar3             = (iVar10 + 0x22);
                    ppcVar4           = ((iVar10 + 0x22) + 0x4);
                    (**ppcVar4)(SEG_1020, uVar3, (uVar3 >> 0x10));
                    param_6 = extraout_DX_00;
                }
            }
            param_2         = uVar8;
            (iVar10 + 0x20) = 0x0;
        }
    }
    uVar13 = (u_stack6 >> 0x10);
    if(((u_stack6 + 0x4) != 0x0) && ((u_stack6 + 0x8) != 0x0))
    {
        pass1_1028_081e(param_1, param_2, param_6);
        param_2 = (iVar10 + 0x20);
        ppuVar1 = (u32 **)(u_stack6 + 0x8);
        if(*ppuVar1 < param_2 || *ppuVar1 == param_2)
        {
            param_2 = &local_2a;
            ppcVar4 = (*param_1 + 0x40);
            (**ppcVar4)(param_3, param_1);
            if(param_2 == 0x0) {
                uStack18 = globals.u32_ptr_1050_68a2;
                paStack38 = pass1_1000_07fc(SEG_1000, globals.u32_ptr_1050_68a2);
                uVar9 = (paStack38 >> 0x10);
                uVar6 = paStack38;
                if ((uVar9 | uVar6) == 0x0) {
                    paStack34 =  0x0;
                } else {
                    paStack38->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
                    (uVar6 + 0x2) = SEG_1008;
                    (uVar6 + 0x4)        = 0x0;
                    (uVar6 + 0x6)        = 0x0;
                    (uVar6 + 0x8)        = 0x0;
                    (uVar6 + 0xa)        = 0x0;
                    (uVar6 + 0xc)        = 0x0;
                    paStack38->fld0_addr_table = addr_table_1018_56ce;//0x56ce;
                    (uVar6 + 0x2)        = SEG_1018;
                    paStack34            = paStack38;
                }
                uVar13                     = (u_stack6 >> 0x10);
                iVar11                     = u_stack6;
                uVar14                     = (paStack34 >> 0x10);
                (paStack34 + 0x8)          = (iVar11 + 0x4);
                (paStack34 + 0xa)          = (iVar11 + 0x6);
                uVar7                      = pass1_1020_c42e((iVar11 + 0x4));
                param_2                    = (uVar7 * (u_stack6 + 0x6));
                (paStack34 + 0xc) = param_2;
                uVar3                      = (iVar10 + 0x22);
                ppcVar4                    = ((iVar10 + 0x22) + 0x4);
                (**ppcVar4)(SEG_1020, uVar3, (uVar3 >> 0x10));
            }
            (iVar10 + 0x20) = 0x0;
        }
    }
    if((iVar10 + 0xc) != 0xe)
    {
        pass1_1028_b58e(param_1 & 0xffff | uVar12 << 0x10);
        local_2a  = str_var1(extraout_DX_01, param_2);
        paStack34 = (param_2 + 0x2e);
        uStack30  = *(paStack34 + 0x4);
        pass1_1028_68de(str_var1(param_4, local_138), 0x1, uStack30, param_5, param_4);
        fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_4, local_138));
    }
    return;
}


Struct18 * pass1_1028_08c6(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_0138(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_d7d8(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

u32  pass1_1020_d8ca(param_1: i16, param_2: u16)

{
    pass1_1028_b418((param_1 + 0x6));
    if(((param_1 + 0xa) & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((param_1 + 0x6), SEG_1000);
    }
    return str_var1((param_1 + 0x8), (param_1 + 0x6));
}

void  pass1_1020_e294(param_1: u32, param_2: u16, param_3: u8)

{
    let mut uVar1: u32;
    let mut pu_var2: *mut u32;
    let mut uVar3: u32;
    let mut extraout_DX: u16;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut uVar6: u16;
    char       cStack347;
    let mut local_150: [u8;c] = [0;c];
    let mut puStack324: *mut u32;
    let mut local_140: [u8;124] = [0;124];
    let mut uStack28: u32;
    let mut uStack24: u32;
    let mut uStack20: u32;
    let mut local_10: u32;
    let mut uStack12: u16;
    let mut iStack10: i16;
    let mut uStack8: u16;
    let mut u_stack6: u32;

    uVar6 = (param_1 >> 0x10);
    uVar5 = param_1;
    if((0x1 < (uVar5 + 0x24)) && ((uVar5 + 0x24) < 0x6))
    {
        uVar1   = (uVar5 + 0x28);
        uVar3   = *(uVar1 + 0x20);
        u_stack6 = uVar3;
        pass1_1028_b58e(param_1);
        iStack10   = uVar3;
        local_10   = *(iStack10 + 0xc);
        uStack12   = (iStack10 + 0x10);
        puStack324 = &local_10;
        uVar4      = extraout_DX;
        uStack8    = extraout_DX;
        pass1_1028_c8ee(param_2, uVar5, uVar6, (uVar5 + 0x24), str_var1(param_2, puStack324));
        pu_var2 = &local_10;
        pass1_1028_c89c(param_1,
                        str_var1(param_2, pu_var2),
                        str_var1(param_2, local_150), pu_var2, param_2);
        uStack20  = *pu_var2;
        cStack347 = (uStack20 >> 0x18);
        if((cStack347 == '\0') && (uStack20 == 0x9))
        {
            (uVar5 + 0x14) = 0x1;
        }
        uStack24 = (iStack10 + 0x2e);
        uStack28 = *(uStack24 + 0x4);
        struct_op_1028_87f0(param_2, param_3, str_var1(param_2, local_140), 0x0, (uVar5 + 0x14) + 0x1, 0x79, &local_10, param_2, uStack28, u_stack6);
        fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_2, local_140));
    }
    (uVar5 + 0x26) = 0x1;
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1020_e39c(param_1: u32, param_2: u16, param_3: i16, param_4: u16, param_5: u8)

{
    let mut uVar1: u32;
    let mut u_var2: u16;
    let mut extraout_DX: u16;
    let mut local_13c: [u8;124] = [0;124];
    let mut uStack24: u32;
    let mut uStack20: u32;
    let mut uStack16: u32;
    let mut local_c: u32;
    let mut iStack8: i16;
    let mut u_stack6: u32;

    pass1_1028_b58e(param_1);
    u_stack6 = str_var1(extraout_DX, param_3);
    local_c = *(param_3 + 0xc);
    iStack8 = (param_3 + 0x10);
    if(iStack8 < 0x1)
    {
        u_var2 = 0x5;
    }
    else
    {
        u_var2 = 0x6;
    }
    (param_3 + 0x14) = u_var2;
    uVar1            = (param_1 + 0x28);
    uStack16         = *(uVar1 + 0x20);
    uStack20         = (param_3 + 0x2e);
    uStack24         = *(uStack20 + 0x4);
    struct_op_1028_87f0(param_4, param_5, str_var1(param_4, local_13c), 0x0, 0x1, param_2, &local_c, param_4, uStack24, uStack16);
    fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_4, local_13c));
    return;
}

Struct18 * pass1_1020_e76c(param_1: *mut Struct18, param_2: u8, param_3: u16)

{
    pass1_1030_dcf4(&param_1.field_0x0, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1020_c80e(param_1: *mut Struct18, param_2: u8)

{
    pass1_1020_c47a(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_cc56(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_cd58(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_cfde(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_d2ee(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_d518(param_1: *mut Struct18, param_2: u8)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1020_b872(param_1: u16, param_2: u8, param_3: u32, param_4: u32)

{
    let mut uVar1: u16;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut puVar4: *mut u32;
    let mut puVar5: *mut u8;
    let mut puVar6: *mut u32;
    let mut puVar7: *mut u16;
    let mut uVar8: u16;
    let mut local_136: [u8;124] = [0;124];
    let mut local_12: u32;
    let mut local_c: i16;
    let mut local_a: i16;
    let mut local_8: u32;
    let mut uStack4: u16;

    uVar8   = (param_4 >> 0x10);
    puVar6  = pass1_1030_5b5c(param_4, uVar8);
    local_8 = *puVar6;
    uStack4 = (puVar6 + 0x4);
    pass1_1008_3e94(str_var1(param_1, &local_8),
                    str_var1(param_1, &local_c),
                    str_var1(param_1, &local_a));
    uVar1 = local_a - 0xa;
    pass1_1008_612e(0xa, uVar1, uVar1);
    u_var2 = local_c - 0xa;
    pass1_1008_612e(0xa, u_var2, u_var2);
    puVar7 = pass1_1008_3e54(str_var1(param_1, &local_12), 0x0, u_var2, uVar1);
    uVar1  = (puVar7 >> 0x10);
    while(true)
    {
        puVar4 = &local_12;
        pass1_1020_b482(param_1, param_3, str_var1(param_1, puVar4), param_4);
        if(puVar4 != 0x0)
            break;
        u_var2 = local_a - 0xa;
        pass1_1008_612e(0xa, u_var2, u_var2);
        uVar3 = local_c - 0xa;
        pass1_1008_612e(0xa, uVar3, uVar3);
        pass1_1008_3e76(str_var1(param_1, &local_12), 0x0, uVar3, u_var2);
    }
    struct_op_1028_8888(param_1, param_2, str_var1(param_1, local_136), 0x0, 0xa, &local_12, param_1, 0x8000002, 0x0, *(param_4 + 0x4));
    puVar5 = local_136;
    fn_ptr_1030_835a(globals._PTR_LOOP_1050_5748, str_var1(param_1, puVar5));
    pass1_1020_b97e(param_1, puVar5, uVar1, param_3, (param_3 >> 0x10), 0x1);
    return;
}
void  fn_ptr_1020_ba7e(u32 *param_1)

{
    fn_ptr_1000_17ce(*param_1, SEG_1000);
    return;
}

void  pass1_1020_bcc4(long *param_1, param_2: u16, param_3: u16)

{
    let mut puVar1: *mut u16;
    let mut iVar2: i16;
    let mut uVar3: u16;
    let mut iVar4: i16;
    let mut uVar5: u16;
    long lVar6;
    long lStack12;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x4) == 0x0)
    {
        globals.dat_1050_5f2e      = 0x0;
        iVar2                       = (iVar4 + 0x6);
    }
    else
    {
        uVar3                       = (iVar4 + 0x4);
        puVar1                      = (iVar4 + 0x8);
        iVar2                       = uVar3 + *puVar1;
        globals.dat_1050_5f2e      = CARRY2(uVar3, *puVar1);
    }
    if(globals.PTR_LOOP_1050_5f2e == 0x0)
    {
        if (param_1.field_0x0 == 0x0) {
            if (globals._PTR_LOOP_1050_5f2c == 0x0) {
                globals.dat_1050_5f2c = mem_op_1000_160a(0x0, SEG_1000);
            } else {
            }
            uVar3 = fn_ptr_op_1000_1708(iVar2 * 0x6, 0x0, 0x1, globals.dat_1050_5f2c, globals.dat_1050_5f2e,
                                        SEG_1000);
        }
        else
        {
            lVar6                       = pass1_1000_0ed4(SEG_1000, param_3, 0x1, iVar2 * 0x6, 0x0, *param_1, (*param_1 >> 0x10));
            globals.dat_1050_5f2e      = (lVar6 >> 0x10);
            uVar3                       = lVar6;
        }
        lStack12 = str_var1(globals.PTR_LOOP_1050_5f2e, uVar3);
        if((globals.PTR_LOOP_1050_5f2e | uVar3) != 0x0)
        {
            (iVar4 + 0x4) = iVar2;
            param_1.field_0x0 = lStack12;
            pass1_1020_bc72( (param_1 & 0xffff | uVar5 << 0x10), param_2, param_3);
        }
    }
    return;
}

void  pass1_1020_c47a(u16 *param_1) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1020_c834;//0xc834;
    param_1.field_0x2 = SEG_1020;
    fn_ptr_1000_17ce((param_1 + 0x18), SEG_1000);
    pass1_1030_1d28(param_1);
    return;
}

void  pass1_1020_c73a(param_1: u32, param_2: u16)

{
    let mut puVar1: *mut u16;
    let mut u_var2: u16;
    let mut uVar3: u32;
    let mut uVar4: u16;
    let mut iVar5: i16;
    let mut uVar6: u16;
    long       lVar7;
    let mut uStack10: u32;
    let mut u_stack6: u32;

    uVar6 = (param_1 >> 0x10);
    iVar5 = param_1;
    if((iVar5 + 0x10) == 0x0)
    {
        uVar4                       = (iVar5 + 0xc);
        globals.dat_1050_5f2e      = (iVar5 + 0xe);
    }
    else
    {
        u_var2                       = (iVar5 + 0x10);
        puVar1                      = (iVar5 + 0x14);
        uVar4                       = u_var2 + *puVar1;
        globals.dat_1050_5f2e
          = ((iVar5 + 0x12) + (iVar5 + 0x16) + CARRY2(u_var2, *puVar1));
    }
    u_stack6 = str_var1(globals.PTR_LOOP_1050_5f2e, uVar4);
    if((iVar5 + 0x18) == 0x0)
    {
        if(globals._PTR_LOOP_1050_5f2c == 0x0)
        {
            globals.dat_1050_5f2c = mem_op_1000_160a(globals.PTR_LOOP_1050_5f2e, SEG_1000);
        }
        else
        {
        }
        uVar4 = fn_ptr_op_1000_1708(uVar4 * 0x6, 0x0, 0x1, globals.dat_1050_5f2c, globals.dat_1050_5f2e, SEG_1000);
    }
    else
    {
        uVar3                       = (iVar5 + 0x18);
        lVar7                       = pass1_1000_0ed4(SEG_1000, param_2, 0x1, uVar4 * 0x6, (globals.PTR_LOOP_1050_5f2e * 0x3 + CARRY2(uVar4, uVar4) + CARRY2(uVar4 * 0x2, uVar4)) * 0x2 + CARRY2(uVar4 * 0x3, uVar4 * 0x3), uVar3, (uVar3 >> 0x10));
        globals.dat_1050_5f2e      = (lVar7 >> 0x10);
        uVar4                       = lVar7;
    }
    uStack10 = str_var1(globals.PTR_LOOP_1050_5f2e, uVar4);
    if((globals.PTR_LOOP_1050_5f2e | uVar4) != 0x0)
    {
        (iVar5 + 0x10) = u_stack6;
        (iVar5 + 0x18) = uStack10;
    }
    (iVar5 + 0x1c) = 0x1;
    return;
}

Struct18 * pass1_1020_8784(param_1: *mut Struct18, param_2: u8)

{
    pass1_1020_8556(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_8a5e(param_1: *mut Struct18, param_2: u8)

{
    pass1_1020_8556(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_8e6c(param_1: *mut Struct18, param_2: u8)

{
    pass1_1020_8bae(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_91de(param_1: *mut Struct18, param_2: u8)

{
    pass1_1020_8f74(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_774c(param_1: *mut Struct18, param_2: u8)

{
    param_1 = (param_1 & 0xffff0000 | (param_1 - 0xe2));
    pass1_1020_75c4(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_78dc(param_1: *mut Struct18, param_2: u8, param_3: u16)

{
    pass1_1020_78ac(&param_1.field_0x0, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_7f38(param_1: *mut Struct18, param_2: u8)

{
    let mut uVar1: u16;

    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    param_1.field_0x2 = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1020_8288(param_1: *mut Struct18, param_2: u8)

{
    param_1 = (param_1 & 0xffff0000 | (param_1 - 0xe2));
    pass1_1020_808e(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_843c(param_1: *mut Struct18, param_2: u8)

{
    pass1_1020_8556(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1020_8556(u16 *param_1)

{
    let mut pi_var1: *mut i16;
    let mut u_var2: u16;
    let mut paVar3: *mut Struct18;
    let mut iVar5: *mut Struct588;
    let mut iVar4: *mut Struct589;
    let mut iVar6: i16;
    let mut uVar7: u16;
    let mut uVar8: u16;
    let mut iStack12: i16;

    uVar7 = (param_1 >> 0x10);
    iVar5 =  param_1;
    param_1.field_0x0 = addr_table_1020_87aa;//0x87aa;
    iVar5.field_0x2 = SEG_1020;
    fn_ptr_1000_17ce(iVar5.field_0x8, SEG_1000);
    if (((&iVar5.field_0xc + 0x2) | &iVar5.field_0xc) != 0x0) {
        iStack12 = 0x0;
        while (true) {
            pi_var1 = &iVar5.field_0x6;
            if (*pi_var1 == iStack12 || *pi_var1 < iStack12)
                break;
            iVar6  = iStack12 * 0x4;
            paVar3 = iVar5.field_0xc;
            uVar8  = (paVar3 >> 0x10);
            iVar4  = paVar3;
            if((iVar4 + iVar6) != 0x0)
            {
                paVar3 = (iVar4 + iVar6);
                u_var2  = (iVar4 + iVar6 + 0x2);
                if ((u_var2 | paVar3) != 0x0) {
                    pass1_1008_5118(paVar3 & 0xffff | u_var2 << 0x10);
                    fn_ptr_1000_17ce(paVar3, SEG_1000);
                }
            }
            iStack12 = iStack12 + 0x1;
        }
        fn_ptr_1000_17ce(iVar5.field_0xc, SEG_1000);
    }
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar5.field_0x2 = SEG_1008;
    return;
}


void  pass1_1020_85f6(param_1: *mut Struct590)

{
    let mut pi_var1: *mut i16;
    let mut u_var2: u16;
    let mut paVar3: *mut Struct18;
    let mut uVar4: u32;
    let mut iVar5: i16;
    let mut iVar6: *mut Struct590;
    let mut uVar6: u16;
    let mut uVar7: u16;
    let mut iStack4: i16;

    iStack4 = 0x0;
    while(true)
    {
        uVar7  = (param_1 >> 0x10);
        iVar6  = param_1;
        pi_var1 = &iVar6.field_0x6;
        if(*pi_var1 == iStack4 || *pi_var1 < iStack4)
            break;
        uVar4  = iVar6.field_0xc;
        uVar6  = (uVar4 >> 0x10);
        iVar5  = uVar4;
        paVar3 = (iVar5 + iStack4 * 0x4);
        u_var2  = (iVar5 + iStack4 * 0x4 + 0x2);
        if((u_var2 | paVar3) != 0x0)
        {
            pass1_1008_5118(paVar3 & 0xffff | u_var2 << 0x10);
            fn_ptr_1000_17ce(paVar3, SEG_1000);
        }
        uVar4                   = iVar6.field_0xc;
        (uVar4 + iStack4 * 0x4) = 0x0;
        iStack4                 = iStack4 + 0x1;
    }
    return;
}


void  pass1_1020_865a(param_1: u32)

{
    let mut pi_var1: *mut i16;
    let mut u_var2: u16;
    let mut paVar3: *mut Struct18;
    let mut uVar4: u32;
    let mut iVar5: i16;
    let mut iVar7: *mut Struct592;
    let mut iVar6: *mut Struct591;
    let mut iVar8: i16;
    let mut uVar9: u16;
    let mut uVar10: u16;
    let mut iStack4: i16;

    iStack4 = 0x0;
    while(true)
    {
        uVar9  = (param_1 >> 0x10);
        iVar5  = param_1;
        pi_var1 = (iVar5 + 0x6);
        if(*pi_var1 == iStack4 || *pi_var1 < iStack4)
            break;
        iVar8  = iStack4 * 0x4;
        uVar4  = (iVar5 + 0xc);
        uVar10 = (uVar4 >> 0x10);
        iVar7  = uVar4;
        if((iVar7 + iVar8) != 0x0)
        {
            pass1_1008_5236(*(iVar7 + iVar8));
            uVar4  = (iVar5 + 0xc);
            uVar10 = (uVar4 >> 0x10);
            iVar6  = uVar4;
            paVar3 = (iVar6 + iVar8);
            u_var2  = (iVar6 + iVar8 + 0x2);
            if((u_var2 | paVar3) != 0x0)
            {
                pass1_1008_5118(paVar3 & 0xffff | u_var2 << 0x10);
                fn_ptr_1000_17ce(paVar3, SEG_1000);
            }
            uVar4                   = (iVar5 + 0xc);
            (uVar4 + iStack4 * 0x4) = 0x0;
        }
        iStack4 = iStack4 + 0x1;
    }
    return;
}

Struct18 * pass1_1020_6208(param_1: *mut Struct18, param_2: u8, param_3: u16)

{
    param_1 = (param_1 & 0xffff0000 | (param_1 - 0xe2));
    destroy_cursor_1020_42f4(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}
Struct18 * pass1_1020_679c(param_1: *mut Struct18, param_2: u8, param_3: u16, param_4: u16)

{
    pass1_1020_6466(&param_1.field_0x0, param_3, param_4);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct3 * pass1_1020_2e24(param_1: *mut Struct3, param_2: u8)

{
    let mut unaff_CS: u16;

    pass1_1020_28fc(param_1, unaff_CS);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_24f2(param_1: *mut Struct18, param_2: u8, param_3: u16)

{
    pass1_1020_1f74(&param_1.field_0x0, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_26d8(param_1: *mut Struct18, param_2: u8)

{
    param_1 = (param_1 & 0xffff0000 | (param_1 - 0xe2));
    pass1_1020_2594(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_2868(param_1: *mut Struct18, param_2: u8, param_3: u16)

{
    pass1_1020_2838(&param_1.field_0x0, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1020_0abc(param_1: u32)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0xe6) != 0x0)
    {
        ppcVar1 = ((param_1 + 0xe8) + 0x10);
        (**ppcVar1)();
    }
    return;
}

Struct18 * pass1_1020_0d82(param_1: *mut Struct18, param_2: u8)

{
    let mut uVar1: u16;

    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    param_1.field_0x2 = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1018_e5aa(param_1: *mut Struct18, param_2: u8)

{
    pass1_1018_e57a(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1018_e75c(param_1: *mut Struct18, param_2: u8)

{
    param_1 = (param_1 & 0xffff0000 | (param_1 - 0xe2));
    pass1_1018_e64c(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1018_e8ec(param_1: *mut Struct18, param_2: u8)

{
    pass1_1018_e8bc(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1018_eb9c(param_1: *mut Struct18, param_2: u8)

{
    param_1 = (param_1 & 0xffff0000 | (param_1 - 0xe2));
    pass1_1018_e9de(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_01a6(param_1: *mut Struct18, param_2: u8, param_3: u16)

{
    pass1_1018_ed98(&param_1.field_0x0, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_0434(param_1: *mut Struct18, param_2: u8)

{
    pass1_1020_022c(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_0734(param_1: *mut Struct18, param_2: u8, param_3: u16)

{
    pass1_1020_05d6(&param_1.field_0x0, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1020_07f4(param_1: *mut Struct18, param_2: u8)

{
    pass1_1020_022c(&param_1.field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1018_df10(param_1: *mut Struct18, param_2: u8)

{
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1018_e01c(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct572;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1.field_0x2   = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1.field_0x2   = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}

Struct18 * pass1_1018_e1ee(param_1: *mut Struct18, param_2: u8)

{
    let mut uVar1: u16;

    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    param_1.field_0x2 = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

Struct18 * pass1_1018_e41a(param_1: *mut Struct18, param_2: u8)

{
    param_1 = (param_1 & 0xffff0000 | (param_1 - 0xe2));
    pass1_1018_e2a0(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1018_8c46(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct548;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8c8e(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct549;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8cd6(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct675;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8d1e(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct550;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8d66(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct551;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8dae(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct552;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8df6(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct553;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8e3e(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct554;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8e86(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct555;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8ece(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct676;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8f16(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct556;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8f5e(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct677;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8fa6(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct557;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_8fee(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct558;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_9036(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct559;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_907e(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct560;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_90c6(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct561;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_910e(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct562;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_9156(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct563;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_919e(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct564;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_91e6(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct565;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_922e(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct566;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_9276(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct567;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_92be(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct568;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_9306(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct569;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1->fld2_segment     = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment     = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_934e(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct570;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1.field_0x2   = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1.field_0x2   = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}


void  pass1_1018_9396(param_1: *mut Struct18, param_2: u8)

{
    let mut iVar1: *mut Struct571;
    let mut uVar1: u16;

    iVar1 = param_1;
    iVar1 = iVar1 + 0x1;
    pass1_1008_57c4((param_1 & 0xffff0000 | ZEXT24(iVar1)));
    uVar1              = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a; // 0x380a
    iVar1.field_0x2   = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1.field_0x2   = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return;
}
