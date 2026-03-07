

// #include "unk_14.h"

// #include "address_tables/function_tables.h"
// #include "globals.h"
// #include "op_int.h"
// #include "op_windef.h"
// #include "struct_20.h"
// #include "structs/structs_0xx/structs_9x.h"
// #include "sys_ops/sys_ops_12.h"
// #include "utils.h"

// #include <stdbool.h>


#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCInconsistentNamingInspection"
u16 * pass1_1008_941a(u16 *param_1, param_2: u16, param_3: u16)

{
    param_1.field_0x0 = param_2;
    param_1.field_0x2 = param_3;
    return param_1;
}


u16 * pass1_1008_9436(u16 *param_1)

{
    param_1.field_0x0 = 0x0;
    param_1.field_0x2 = 0x0;
    return param_1;
}


void  pass1_1008_944e(u16 *param_1, param_2: u16, param_3: u16)

{
    param_1.field_0x2 = param_3;
    param_1.field_0x0 = param_2;
    return;
}


BOOL16  pass1_1008_7c2a(param_1: u32, char *param_2, HFILE16 param_3)

{
    let mut uVar1: u16;
    let mut BVar2: BOOL16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    if(param_2 != 0x0)
    {
        uVar1 = str_op_1000_3da4(param_2);
        BVar2 = write_to_file_1008_7e1c(param_1, uVar3, param_2, (param_2 >> 0x10), (long)(uVar1 + 0x1), SEG_1000);
        return BVar2;
    }
    write_to_file_1008_7e1c(param_1, uVar3, s_playerName_1050_148e + 0xc, SEG_1050, 0x1, param_3);
    return 0x1;
}


u32 * pass1_1008_80d2(u32 *param_1)

{
    param_1.field_0x0 = 0x0;
    (param_1 + 0x4) = 0x0;
    return param_1;
}


void  pass1_1008_8168(u16 *param_1) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_87c8;//0x87c8;
    param_1.field_0x2 = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    return;
}


void  pass1_1008_68ea(param_1: i16, param_2: u16, param_3: *mut u32, param_4: u16, param_5: u16, i16 param_6)

{
    fn_ptr_1 *ppcVar1;

    if(param_6 == 0x0)
    {
        if((param_1 + 0xce) != str_var1(param_4, param_3))
        {
            if((param_1 + 0xce) != 0x0)
            {
                ppcVar1 = ((param_1 + 0xce) + 0x10);
                (**ppcVar1)();
            }
            (param_1 + 0xce) = str_var1(param_4, param_3);
            ppcVar1          = (*param_3 + 0x10);
            (**ppcVar1)();
            ppcVar1 = ((param_1 + 0xce) + 0xc);
            (**ppcVar1)();
            return;
        }
    }
    else
    {
        pass1_1008_3e0e(CONCAT13((param_2 >> 0x8), CONCAT12(param_2, param_1)));
    }
    return;
}


void  pass1_1008_6a04(param_1: u32, param_2: u16, param_3: u16)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut pu_var2: *mut u8;
    let mut extraout_DX: u16;
    let mut local_a: [u8;8] = [0;8];

    pass1_1008_57a4(str_var1(param_3, local_a), param_1 & 0xffff0000 | (param_1 + 0xd2));
    while(true)
    {
        pu_var2 = local_a;
        pass1_1008_5b12(pu_var2, param_3);
        if((extraout_DX | pu_var2) == 0x0)
            break;
        ppcVar1 = (**(u32 **)(pu_var2 + 0x4) + 0xc);
        (**ppcVar1)();
    }
    return;
}


// WARNING: Could not reconcile some variable overlaps

void  pass1_1008_6a4a(param_1: u32, param_2: i16, param_3: u16, param_4: i16, param_5: u16)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut iVar2: i16;
    let mut puVar3: *mut u8;
    let mut extraout_DX: u16;
    let mut extraout_DX_00: u16;
    let mut local_e: [u8;4] = [0;4];
    let mut uStack10: u32;
    let mut u_stack6: u32;

    if(param_4 == 0x2)
    {
        iVar2 = param_1;
        pass1_1008_57a4(str_var1(param_5, local_e), param_1 & 0xffff0000 | (iVar2 + 0xd2));
        do
        {
            puVar3 = local_e;
            pass1_1008_5b12(puVar3, param_5);
            u_stack6 = str_var1(extraout_DX, puVar3);
            if((extraout_DX | puVar3) == 0x0)
                break;
        } while((puVar3 + 0x8) != param_2);
        if(u_stack6 != 0x0)
        {
            ppcVar1 = ((iVar2 + 0xd2) + 0xc);
            (**ppcVar1)();
            uStack10      = 0x0;
            u_stack6 = local_e;
            pass1_1008_5b12();
            if((extraout_DX_00 | u_stack6) != 0x0)
            {
                ppcVar1       = (**(u32 **)(u_stack6 + 0x4) + 0x10);
                u_stack6 = extraout_DX_00;
                (**ppcVar1)();
                (iVar2 + 0xce) = (u_stack6 + 0x4);
                return;
            }
            (iVar2 + 0xce) = 0x0;
        }
    }
    return;
}


void  pass1_1008_6b02(param_1: u32)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(((iVar2 + 0xd0) | (iVar2 + 0xce)) != 0x0)
    {
        ppcVar1 = ((iVar2 + 0xce) + 0x6c);
        (**ppcVar1)();
    }
    return;
}


void  pass1_1008_6b2e(param_1: u32)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(((iVar2 + 0xd0) | (iVar2 + 0xce)) != 0x0)
    {
        ppcVar1 = ((iVar2 + 0xce) + 0x68);
        (**ppcVar1)();
    }
    return;
}


void  pass1_1008_6c90(u16 *param_1)

{
    pass1_1008_3e38(param_1);
    pass1_1008_3e38((param_1 & 0xffff0000 | (param_1 + 0x6)));
    return;
}


u32 * pass1_1008_6cb4(param_1: *mut u32, param_2: *mut u32, param_3: u16, param_4: *mut u32, param_5: u16)

{
    let mut iVar1: *mut Struct362;
    let mut uVar1: u16;

    uVar1            = (param_1 >> 0x10);
    iVar1 =  param_1;
    param_1.field_0x0 = *param_4;
    iVar1.field_0x4 = (param_4 + 0x1);
    iVar1.field_0x6 = *param_2;
    iVar1.field_0xa = (param_2 + 0x1);
    return param_1;
}


void  pass1_1008_6cec(u16 *param_1, param_2: u16, param_3: u32, param_4: u16, param_5: u32)

{
    pass1_1008_3e76(param_1, param_4, param_5, (param_5 >> 0x10));
    pass1_1008_3e76((param_1 & 0xffff0000 | (param_1 + 0x6)), param_2, param_3, (param_3 >> 0x10));
    return;
}


void  pass1_1008_6d18(u16 *param_1,param_2: *mut u16, u16 *param_3)

{
    pass1_1008_3f62(param_1, param_3);
    pass1_1008_3f62((param_1 & 0xffff0000 | (param_1 + 0x6)), param_2);
    return;
}


void  pass1_1008_6d3e(u16 *param_1,param_2: *mut u16, u16 *param_3)

{
    pass1_1008_3f62(param_3, param_1);
    pass1_1008_3f62(param_2, (param_1 & 0xffff0000 | (param_1 + 0x6)));
    return;
}


void  pass1_1008_6d64(u16 *param_1, u16 *param_2)

{
    pass1_1008_3f62(param_2, param_1);
    pass1_1008_3ee2(param_2, (param_1 & 0xffff0000 | (param_1 + 0x6)));
    return;
}


u16 * pass1_1008_72a8(u16 *param_1, param_2: u16)

{
    param_1.field_0x0 = param_2;
    return param_1;
}


u16  switch_1008_72bc(param_1: u16, param_2: u16, param_3: u16)

{
    if(globals.dat_1050_0312 < 0x2)
    {
        switch(param_3)
        {
        0x1 =>
            param_3 = 0x1;
            break;
        2 =>
            param_3 = 0x2;
            break;
         3 =>
            param_3 = 0x3;
            break;
        0x4 =>
            param_3 = 0x5;
            break;
        0x5 =>
            param_3 = 0x4;
            break;
        0x6 =>
            param_3 = 0x6;
            break;
        0x7 =>
            param_3 = 0x7;
            break;
        0x8 =>
            param_3 = 0x8;
            break;
        0x9 =>
            param_3 = 0x9;
            break;
        0xa =>
            param_3 = 0xa;
            break;
        0xb =>
            param_3 = 0xb;
            break;
        0xc =>
            param_3 = 0xc;
            break;
        0xd =>
            param_3 = 0xd;
            break;
        0xe =>
            param_3 = 0xe;
            break;
        0xf =>
            param_3 = 0xf;
            break;
        0x10 =>
            return 0x10;
        0x11 =>
            return 0x11;
        0x12 =>
            return 0x12;
        0x13 =>
            return 0x13;
        _ =>
            return 0x0;
        }
    }
    return param_3;
}


u16  pass1_1008_738c(param_1: u16, param_2: u16, param_3: u16)

{
    let mut uVar1: u16;

    switch(param_3)
    {
    0x1 =>
        uVar1 = 0x3;
        break;
    2 =>
        uVar1 = 0x4;
        break;
     3 =>
        return 0x5;
    0x4 =>
        return 0x6;
    0x5 =>
        return 0x8;
    0x6 =>
        return 0x9;
    0x7 =>
        return 0xa;
    _ =>
        uVar1 = 0x0;
    }
    return uVar1;
}


i16  switch_1008_73ea(param_1: u16, param_2: u16, i16 param_3)

{
    let mut iStack4: i16;

    iStack4 = param_3;
    if(globals.dat_1050_0312 < 0x2)
    {
        switch(param_3)
        {
        0x18 =>
        0x19 =>
        0x1a =>
        0x1b =>
        0x1c =>
        0x1d =>
        0x1e =>
        0x1f =>
        0x20 =>
        0x21 =>
        0x22 =>
        0x23 =>
        0x24 =>
        0x25 =>
        0x26 =>
        0x27 =>
        0x28 =>
        0x29 =>
        0x2a =>
        0x2b =>
        0x2c =>
        0x2d =>
        0x2e =>
        0x2f =>
        0x30 =>
        0x31 =>
        0x32 =>
        0x33 =>
        0x34 =>
        0x35 =>
        0x36 =>
        0x37 =>
        0x38 =>
        0x39 =>
        0x3a =>
        0x3b =>
        0x3c =>
            iStack4 = param_3 + 0x3;
            break;
        0x3d =>
        0x3e =>
            iStack4 = param_3 + 0x4;
            break;
        0x3f =>
        0x40 =>
        0x41 =>
        0x42 =>
        0x43 =>
        0x44 =>
        0x45 =>
        0x46 =>
        0x47 =>
        0x48 =>
        0x49 =>
        0x4a =>
        0x4b =>
        0x4c =>
        0x4d =>
        0x4e =>
        0x4f =>
        0x50 =>
        0x51 =>
        0x52 =>
        0x53 =>
        0x54 =>
        0x55 =>
        0x56 =>
        0x57 =>
        0x58 =>
        0x59 =>
        0x5a =>
        0x5b =>
        0x5c =>
        0x5d =>
        0x5e =>
        0x5f =>
        0x60 =>
        0x61 =>
        0x62 =>
        0x63 =>
        0x64 =>
        0x65 =>
        0x66 =>
            iStack4 = param_3 + 0x8;
            break;
        0x67 =>
        0x68 =>
        0x69 =>
        0x6a =>
        0x6b =>
        0x6c =>
        0x6d =>
        0x6e =>
        0x6f =>
        0x70 =>
        0x71 =>
        0x72 =>
        0x73 =>
        0x74 =>
        0x75 =>
        0x76 =>
        0x77 =>
        0x78 =>
        0x79 =>
        0x7a =>
        0x7b =>
        0x7c =>
        0x7d =>
        0x7e =>
        0x7f =>
        0x80 =>
            iStack4 = param_3 + 0x9;
        }
    }
    return iStack4;
}

long  pass1_1008_57f0(param_1: u32, param_2: i16, param_3: u16)

{
    let mut bVar1: bool;
    long lVar2;
    let mut iStack12: i16;
    let mut local_a: [u8;8] = [0;8];

    pass1_1008_5784(str_var1(param_3, local_a), param_1);
    iStack12 = 0x0;
    do
    {
        lVar2 = pass1_1008_5b12(local_a, param_3);
        if(lVar2 == 0x0)
        {
            return 0x0;
        }
        bVar1    = iStack12 != param_2;
        iStack12 = iStack12 + 0x1;
    } while(bVar1);
    return lVar2;
}


void  pass1_1008_5830(param_1: u32)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut uVar4: u32;
    let mut puVar5: *mut u32;
    let mut iVar6: i16;
    let mut iVar7: i16;
    let mut uVar8: u16;
    let mut uVar9: u16;

    while(true)
    {
        uVar8 = (param_1 >> 0x10);
        iVar6 = param_1;
        if((iVar6 + 0x4) == 0x0)
            break;
        if((iVar6 + 0xa) != 0x0)
        {
            uVar4  = (iVar6 + 0x4);
            uVar9  = (uVar4 >> 0x10);
            iVar7  = uVar4;
            puVar1 = (iVar7 + 0x8);
            u_var2  = (iVar7 + 0xa);
            if((u_var2 | puVar1) != 0x0)
            {
                ppcVar3 = *puVar1;
                (**ppcVar3)();
            }
        }
        puVar5        = (iVar6 + 0x4);
        (iVar6 + 0x4) = (puVar5 + 0x4);
        if(puVar5 != 0x0)
        {
            ppcVar3 = *puVar5;
            (**ppcVar3)();
        }
    }
    (iVar6 + 0x8) = 0x0;
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1008_58a6(param_1: u32, param_2: u32)

{
    let mut pi_var1: *mut i16;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut paStack6: *mut Struct99;

    paStack6 = pass1_1000_07fc(SEG_1000, globals.u32_ptr_1050_029c);
    uVar3 = (paStack6 >> 0x10);
    u_var2    = paStack6;
    if((uVar3 | u_var2) == 0x0)
    {
        paStack6 = 0x0;
    }
    else
    {
        paStack6.field_0x0 = addr_table_1008_380a[36]; // 0x389a
        (u_var2 + 0x2)       = SEG_1008;
        (u_var2 + 0x4)       = 0x0;
        (u_var2 + 0x8)       = 0x0;
        paStack6.field_0x0 = addr_table_1008_5bc0;//0x5bc0;
        (u_var2 + 0x2)       = SEG_1008;
    }
    if(paStack6 == 0x0)
    {
        return;
    }
    uVar5                         = (paStack6 >> 0x10);
    *(paStack6 + 0x8)             = param_2;
    uVar6                         = (param_1 >> 0x10);
    iVar4                         = param_1;
    (paStack6 + 0x4)              = (iVar4 + 0x4);
    (iVar4 + 0x4) = paStack6;
    pi_var1                        = (iVar4 + 0x8);
    *pi_var1                       = *pi_var1 + 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1008_593c(param_1: *mut u32, param_2: u32)

{
    let mut pi_var1: *mut i16;
    let mut ppcVar2: *mut *mut c_void;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut iVar5: i16;
    let mut uVar6: u16;
    let mut uVar7: u16;
    let mut paStack6: *mut Struct99;

    uVar6 = (param_1 >> 0x10);
    iVar5 = param_1;
    if((iVar5 + 0x8) == 0x0)
    {
        ppcVar2 = (*param_1 + 0x4);
        (**ppcVar2)();
        return;
    }
    paStack6 = pass1_1000_07fc(SEG_1000, globals.u32_ptr_1050_029c);
    uVar4 = (paStack6 >> 0x10);
    uVar3    = paStack6;
    if((uVar4 | uVar3) == 0x0)
    {
        paStack6 = 0x0;
    }
    else
    {
        paStack6.field_0x0 = addr_table_1008_380a[36]; // 0x389a
        (uVar3 + 0x2)       = SEG_1008;
        (uVar3 + 0x4)       = 0x0;
        (uVar3 + 0x8)       = 0x0;
        paStack6.field_0x0 = addr_table_1008_5bc0;//0x5bc0;
        (uVar3 + 0x2)       = SEG_1008;
    }
    if(paStack6 == 0x0)
    {
        return;
    }
    *(paStack6 + 0x8) = param_2;
    do
    {
        param_1 = (param_1 + 0x4);
        uVar7   = (param_1 >> 0x10);
    } while((param_1 + 0x4) != 0x0);
    (param_1 + 0x4) = paStack6;
    pi_var1                          = (iVar5 + 0x8);
    *pi_var1                         = *pi_var1 + 0x1;
    return;
}


void  pass1_1008_59f4(param_1: u32, long param_2)

{
    let mut pi_var1: *mut i16;
    let mut pu_var2: *mut u32;
    let mut uVar3: u16;
    let mut puVar4: *mut u32;
    let mut ppcVar5: *mut *mut c_void;
    let mut puVar6: *mut u32;
    let mut uVar7: u16;
    let mut iVar8: i16;
    let mut uVar9: u16;
    let mut uVar10: u16;
    let mut uVar11: u16;
    let mut uVar12: u16;
    let mut uStack10: u16;
    let mut pu_stack6: *mut u32;

    pu_stack6 = 0x0;
    uVar9    = (param_1 >> 0x10);
    puVar6   = pu_stack6;
    puVar4   = param_1;
    do
    {
        pu_stack6 = puVar6;
        uVar10   = (puVar4 >> 0x10);
        iVar8    = puVar4;
        puVar4   = (iVar8 + 0x4);
        uStack10 = puVar4;
        uVar11   = (puVar4 >> 0x10);
        if(((iVar8 + 0x6) | uStack10) == 0x0)
            break;
        puVar6 = puVar4;
    } while((uStack10 + 0x8) != param_2);
    if(puVar4 != 0x0)
    {
        if(pu_stack6 == 0x0)
        {
            uVar10   = (uStack10 + 0x4);
            uVar7    = (uStack10 + 0x6);
            pu_stack6 = param_1;
        }
        else
        {
            uVar10 = (uStack10 + 0x4);
            uVar7  = (uStack10 + 0x6);
        }
        uVar12           = (pu_stack6 >> 0x10);
        (pu_stack6 + 0x4) = uVar10;
        (pu_stack6 + 0x6) = uVar7;
        if((param_1 + 0xa) != 0x0)
        {
            pu_var2 = (uStack10 + 0x8);
            uVar3  = (uStack10 + 0xa);
            if((uVar3 | pu_var2) != 0x0)
            {
                ppcVar5 = *pu_var2;
                (**ppcVar5)();
            }
        }
        if(puVar4 != 0x0)
        {
            ppcVar5 = *puVar4;
            (**ppcVar5)();
        }
        pi_var1  = (param_1 + 0x8);
        *pi_var1 = *pi_var1 + -0x1;
        return;
    }
    return;
}


void  pass1_1008_5ab8(param_1: u32)

{
    let mut pi_var1: *mut i16;
    let mut ppcVar2: *mut *mut c_void;
    let mut puVar3: *mut u32;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut uVar6: u16;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x4) == 0x0)
    {
        return;
    }
    puVar3        = (iVar4 + 0x4);
    uVar6         = (puVar3 >> 0x10);
    (iVar4 + 0x4) = (puVar3 + 0x4);
    if((uVar6 | puVar3) != 0x0)
    {
        ppcVar2 = *puVar3;
        (**ppcVar2)();
    }
    pi_var1  = (iVar4 + 0x8);
    *pi_var1 = *pi_var1 + -0x1;
    return;
}


void  pass1_1008_5b12(long *param_1)

{
    let mut uVar1: u32;
    let mut iVar2: i16;
    let mut iVar3: i16;
    let mut uVar4: u16;
    let mut uVar5: u16;

    if((*param_1 != 0x0) && ((*param_1 + 0x8) != 0x0))
    {
        uVar4 = (param_1 >> 0x10);
        iVar2 = param_1;
        if((iVar2 + 0x4) == 0x0)
        {
            uVar5 = (*param_1 >> 0x10);
            iVar3 = *param_1;
        }
        else
        {
            uVar1 = (iVar2 + 0x4);
            uVar5 = (uVar1 >> 0x10);
            iVar3 = uVar1;
        }
        (iVar2 + 0x4) = (iVar3 + 0x4);
        if((iVar2 + 0x4) != 0x0)
        {
            return;
        }
    }
    return;
}


u16 * pass1_1008_5b6e(u16 *param_1, param_2: u8) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (param_1)[0x1] = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        pass1_1000_093a(param_1, uVar1, SEG_1000);
    }
    return param_1;
}

void  pass1_1008_5c34(u16 *param_1) {
    let mut unaff_SS: u16;

    param_1.field_0x0 = addr_table_1008_5fc8;//0x5fc8;
    param_1.field_0x2 = SEG_1008;
    globals._PTR_LOOP_1050_02a0 = 0x0;
    pass1_1010_1d80(param_1, unaff_SS);
    return;
}


pub fn pass1_1008_612e(param_1: i16, param_2: i16, param_3: u16)

{
    let mut uVar1: u16;
    let mut u_var2: u16;
    long lVar3;
    let mut iVar4: i16;
    let mut iStack18: i16;
    let mut iStack16: i16;

    uVar1 = pass1_1000_4d24();
    u_var2 = (param_2 - param_1) + 0x1;
    if((u_var2 >> 0xf | u_var2) == 0x0)
    {
        return;
    }
    iStack16 = 0x1;
    iStack18 = param_1;
    do
    {
        if(param_2 < iStack18)
        {
            return;
        }
        lVar3 = (long)iStack16 * (long)(0x7fff / (sqword)(long)u_var2);
        iVar4 = (lVar3 >> 0x10);
        if(uVar1 >> 0xf <= iVar4)
        {
            if(uVar1 >> 0xf < iVar4)
            {
                return;
            }
            if(uVar1 <= lVar3)
            {
                return;
            }
        }
        iStack18 = iStack18 + 0x1;
        iStack16 = iStack16 + 0x1;
    } while(true);
}


void  pass1_1008_64a2(u16 *param_1)

{
    let mut uVar1: u16;
    fn_ptr_1 *ppcVar2;

    uVar1 = (param_1 + 0x2);
    if((uVar1 | *param_1) != 0x0)
    {
        ppcVar2 = *param_1;
        (**ppcVar2)();
    }
    return;
}


u32  pass1_1008_4b5e(u32 *param_1)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut iVar2: i16;
    let mut iVar3: i16;
    let mut uVar4: u16;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    if((iVar3 + 0x1e) == 0x0)
    {
        ppcVar1 = (*param_1 + 0x8);
        iVar2   = (**ppcVar1)();
        if(iVar2 == 0x0)
        {
            return 0x0;
        }
    }
    return str_var1((iVar3 + 0x6), (iVar3 + 0x4));
}


u16  pass1_1008_4d26(param_1: *mut Struct650,param_2: *mut u16, i16 param_3)

{
    let mut pi_var1: *mut i16;
    let mut u_var2: u16;
    long         lVar3;
    let mut iVar5: *mut Struct650;
    let mut iVar4: *mut Struct649;
    let mut uVar4: u16;

    uVar4 = (param_1 >> 0x10);
    iVar5 = param_1;
    if(((iVar5.field_0x4 != 0x0) && (-0x1 < param_3)) && (pi_var1 = &iVar5.field_0xc, *pi_var1 != param_3 && param_3 <= *pi_var1))
    {
        u_var2                         = (param_2 + 0x2);
        lVar3                         = iVar5.field_0x4;
        uVar4                         = (lVar3 >> 0x10);
        iVar4                         = lVar3;
        (iVar4 + param_3 * 0x4)       = *param_2;
        (iVar4 + param_3 * 0x4 + 0x2) = u_var2;
        return 0x1;
    }
    return 0x0;
}


u32  pass1_1008_4d72(param_1: u32)

{
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    return str_var1((param_1 + 0x6), (param_1 + 0x4));
}


void  pass1_1008_50c2(param_1: *mut Struct110, param_2: u32, param_3: u32,param_4: *mut u16, param_5: u32)

{
    let mut iVar1: *mut Struct110;
    let mut uVar1: u16;

    param_1.field_0x0 = *param_4;
    uVar1              = (param_1 >> 0x10);
    iVar1              = param_1;
    iVar1.field_0x2   = (param_4 + 0x2);
    iVar1.field_0x4   = param_3;
    iVar1.field_0x8   = param_2;
    iVar1.field_0xc   = param_5;
    iVar1.field_0x10  = 0x0;
    pass1_1008_52fc((param_1 & 0xffff | uVar1 << 0x10));
    return;
}


void  pass1_1008_5134(param_1: u32)

{
    let mut puVar1: *mut u16;
    let mut iVar2: i16;
    let mut uVar3: u16;
    long lVar4;
    let mut iVar5: i16;
    let mut iVar6: i16;
    let mut uVar7: u16;
    let mut iStack16: i16;
    long lStack14;
    let mut uStack10: u32;

    uVar7          = (param_1 >> 0x10);
    iVar6          = param_1;
    lVar4          = (iVar6 + 0x4) * (iVar6 + 0x8);
    lVar4          = mem_op_1000_0a48(0x1, lVar4, (lVar4 >> 0x10), globals.dat_1050_5f2c, SEG_1000);
    uVar3          = (lVar4 >> 0x10);
    (iVar6 + 0x10) = lVar4;
    (iVar6 + 0x12) = uVar3;
    if((uVar3 | (iVar6 + 0x10)) == 0x0)
    {
        return;
    }
    iVar5    = (iVar6 + 0x8);
    iVar2    = (iVar6 + 0xa);
    lVar4    = str_var1(iVar2 - (iVar5 == 0x0), iVar5- 1) * (iVar6 + 0x4);
    puVar1   = (iVar6 + 0x10);
    uVar3    = lVar4;
    uStack10 = str_var1(((lVar4 >> 0x10) + CARRY2(uVar3, *puVar1)) * 0x100 + (iVar6 + 0x12), uVar3 + *puVar1);
    lStack14 = str_var1(iVar2, iVar5);
    iStack16 = (iVar6 + 0x2);
    while(lStack14 != 0x0)
    {
        iVar2 = iStack16 + 0x1;
        iVar5 = iStack16 >> 0xf;
        pass1_1008_4544(*(iVar6 + 0xc));
        pass1_1000_48a8(uStack10, str_var1(iVar5, iStack16), (iVar6 + 0x4));
        iVar5    = (iVar6 + 0x4);
        uVar3    = -iVar5;
        uStack10 = str_var1((uStack10 >> 0x10) + (CARRY2(uStack10, uVar3) - ((iVar6 + 0x6) + (iVar5 != 0x0))) * 0x100, uStack10 + uVar3);
        iStack16 = iVar2;
        lStack14 = lStack14 + -0x1;
    }
    return;
}


void  pass1_1008_5236(param_1: *mut Struct109)

{
    let mut puVar1: *mut u16;
    let mut iVar2: i16;
    let mut uVar3: u16;
    long         lVar4;
    let mut iVar5: i16;
    let mut iVar6: *mut Struct109;
    let mut uVar6: u16;
    let mut bVar7: bool;
    let mut iStack12: i16;
    long         lStack10;
    let mut u_stack6: u16;
    let mut iStack4: i16;

    uVar6    = (param_1 >> 0x10);
    iVar6    = param_1;
    iVar5    = iVar6.field_0x8;
    iVar2    = iVar6.field_0xa;
    lVar4    = str_var1(iVar2 - (iVar5 == 0x0), iVar5- 1) * &iVar6.field_0x4;
    puVar1   = &iVar6.field_0x10;
    uVar3    = lVar4;
    u_stack6  = uVar3 + *puVar1;
    iStack4  = ((lVar4 >> 0x10) + CARRY2(uVar3, *puVar1)) * 0x100 + iVar6.field_0x12;
    lStack10 = str_var1(iVar2, iVar5);
    iStack12 = iVar6.field_0x2;
    while(lStack10 != 0x0)
    {
        iVar2 = iStack12 + 0x1;
        iVar5 = iStack12 >> 0xf;
        pass1_1008_4544(iVar6.field_0xc);
        pass1_1000_48a8(
          str_var1(iVar5, iStack12), str_var1(iStack4, u_stack6), &iVar6.field_0x4);
        iVar5    = &iVar6.field_0x4;
        uVar3    = -iVar5;
        bVar7    = CARRY2(u_stack6, uVar3);
        u_stack6  = u_stack6 + uVar3;
        iStack4  = iStack4 + (bVar7 - (iVar6.field_0x6 + (iVar5 != 0x0))) * 0x100;
        iStack12 = iVar2;
        lStack10 = lStack10 + -0x1;
    }
    return;
}


void  pass1_1008_52fc(param_1: *mut Struct111)

{
    let mut puVar1: *mut u16;
    let mut u_var2: u16;
    let mut uVar3: u16;
    long         lVar4;
    let mut uVar5: u16;
    let mut iVar6: i16;
    let mut iVar7: i16;
    let mut iVar8: *mut Struct111;
    let mut uVar8: u16;
    let mut uVar9: u32;
    let mut uStack14: u16;
    let mut iStack12: i16;

    uVar8  = (param_1 >> 0x10);
    iVar8  = param_1;
    uVar9  = pass1_1008_4772(iVar8.field_0xc);
    uVar5  = (uVar9 >> 0x10);
    iVar7  = uVar9;
    iVar6  = (iVar7 + 0x4);
    uVar3  = iVar6 - 0x1;
    iVar6  = (iVar7 + 0x6) - (iVar6 == 0x0);
    lVar4  = (iVar7 + 0x8) + -0x1;
    u_var2  = *param_1;
    puVar1 = &iVar8.field_0x4;
    iVar7  = (u_var2 >> 0xf) + iVar8.field_0x6 + CARRY2(u_var2, *puVar1);
    if((iVar6 <= iVar7) && ((iVar6 < iVar7 || (uVar3 < u_var2 + *puVar1))))
    {
        iVar8.field_0x4 = uVar3 - u_var2;
        iVar8.field_0x6 = (iVar6 - (u_var2 >> 0xf)) - (uVar3 < u_var2);
    }
    u_var2    = iVar8.field_0x2;
    puVar1   = &iVar8.field_0x8;
    iVar6    = (u_var2 >> 0xf) + iVar8.field_0xa + CARRY2(u_var2, *puVar1);
    iStack12 = (lVar4 >> 0x10);
    if((iStack12 <= iVar6) && ((uStack14 = lVar4, iStack12 < iVar6 || (uStack14 < u_var2 + *puVar1))))
    {
        iVar8.field_0x8 = uStack14 - u_var2;
        iVar8.field_0xa = (iStack12 - (u_var2 >> 0xf)) - (uStack14 < u_var2);
    }
    return;
}


u32 * pass1_1008_5394(u32 *param_1)

{
    param_1.field_0x0 = 0x0;
    return param_1;
}


void  pass1_1008_53aa(void)

{
    return;
}


void  pass1_1008_5784(param_1: *mut u32, param_2: u32)

{
    param_1.field_0x0 = param_2;
    (param_1 + 0x4) = 0x0;
    return;
}


void  pass1_1008_57a4(param_1: *mut u32, param_2: u32)

{
    param_1.field_0x0 = param_2;
    (param_1 + 0x4) = 0x0;
    return;
}


void  pass1_1008_57c4(u16 *param_1) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1008_5bc0[1]//0x5bc4;
    param_1.field_0x2 = SEG_1008;
    pass1_1008_5830(param_1 & 0xffff | uVar1 << 0x10);
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1.field_0x2 = SEG_1008;
    return;
}


void  pass1_1008_3e0e(param_1: u32)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x4) != 0x0)
    {
        ppcVar1 = ((param_1 + 0x4) + 0x4);
        (**ppcVar1)();
    }
    return;
}


u16 * pass1_1008_3e38(u16 *param_1)

{
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = 0x0;
    param_1.field_0x2 = 0x0;
    (param_1 + 0x4) = 0x0;
    return param_1;
}


u16 * pass1_1008_3e54(u16 *param_1, param_2: u16, param_3: u16, param_4: u16)

{
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = param_4;
    param_1.field_0x2 = param_3;
    (param_1 + 0x4) = param_2;
    return param_1;
}


void  pass1_1008_3e76(u16 *param_1, param_2: u16, param_3: u16, param_4: u16)

{
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = param_4;
    param_1.field_0x2 = param_3;
    (param_1 + 0x4) = param_2;
    return;
}


void  pass1_1008_3e94(u16 *param_1,param_2: *mut u16, u16 *param_3)

{
    *param_3 = *param_1;
    *param_2 = (param_1 + 0x2);
    return;
}


void  pass1_1008_3eb4(u16 *param_1,param_2: *mut u16,param_3: *mut u16, u16 *param_4)

{
    let mut uVar1: u16;

    *param_4 = *param_1;
    uVar1    = (param_1 >> 0x10);
    *param_3 = (param_1 + 0x2);
    *param_2 = (param_1 + 0x4);
    return;
}


void  pass1_1008_3ee2(i16 *param_1, i16 *param_2)

{
    let mut iVar1: i16;
    let mut iVar2: i16;
    let mut uVar3: u16;
    let mut uVar4: u16;

    iVar1 = *param_2 - *param_1;
    if(iVar1 < 0x0)
    {
        iVar1 = -iVar1;
    }
    param_1.field_0x0 = iVar1 + 0x1;
    uVar3 = (param_2 >> 0x10);
    uVar4    = (param_1 >> 0x10);
    iVar2    = param_1;
    iVar1    = (param_2 + 0x2) - (iVar2 + 0x2);
    if(iVar1 < 0x0)
    {
        iVar1 = -iVar1;
    }
    (iVar2 + 0x2) = iVar1 + 0x1;
    iVar1         = (param_2 + 0x4) - (iVar2 + 0x4);
    if(iVar1 < 0x0)
    {
        iVar1 = -iVar1;
    }
    (iVar2 + 0x4) = iVar1 + 0x1;
    return;
}


void  pass1_1008_3f32(i16 *param_1, i16 *param_2)

{
    let mut pi_var1: *mut i16;
    let mut u_var2: u16;
    let mut uVar3: u16;

    param_1.field_0x0 = *param_1 + *param_2;
    u_var2 = (param_2 >> 0x10);
    uVar3    = (param_1 >> 0x10);
    pi_var1   = (param_1 + 0x2);
    *pi_var1  = *pi_var1 + (param_2 + 0x2);
    pi_var1   = (param_1 + 0x4);
    *pi_var1  = *pi_var1 + (param_2 + 0x4);
    return;
}


void  pass1_1008_3f62(u16 *param_1, u16 *param_2)

{
    let mut uVar1: u16;
    let mut u_var2: u16;

    param_1.field_0x0 = *param_2;
    uVar1 = (param_2 >> 0x10);
    u_var2           = (param_1 >> 0x10);
    param_1.field_0x2 = (param_2 + 0x2);
    (param_1 + 0x4) = (param_2 + 0x4);
    return;
}


void  pass1_1008_431c(param_1: u32, param_2: u8)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u32;
    let mut bVar3: bool;
    let mut uVar4: u32;
    let mut iVar5: i16;
    let mut uVar6: u16;
    let mut u_stack6: u32;

    uVar6 = (param_1 >> 0x10);
    iVar5 = param_1;
    if((iVar5 + 0x6) == 0x0)
    {
        pass1_1008_47cc((param_1 & 0xffff | uVar6 << 0x10));
    }
    if(((iVar5 + 0x8) | (iVar5 + 0x6)) == 0x0)
    {
        bVar3 = false;
    }
    else
    {
        if(((iVar5 + 0xc) | (iVar5 + 0xa)) == 0x0)
        {
            pass1_1008_4834((param_1 & 0xffff | uVar6 << 0x10));
        }
        bVar3 = true;
    }
    if(bVar3)
    {
        if(((iVar5 + 0x16) | (iVar5 + 0x14)) == 0x0)
        {
            return;
        }
        u_stack6 = 0x0;
        while(true)
        {
            u_var2  = (iVar5 + 0x10);
            puVar1 = (u_var2 + 0x8);
            if(*puVar1 == u_stack6 || (long)*puVar1 < (long)u_stack6)
                break;
            uVar4 = u_stack6;
            pass1_1008_4544(param_1);
            u_var2 = (iVar5 + 0x10);
            pass1_1000_4906((uVar4 & 0xffff | u_stack6 << 0x10), param_2, (u_var2 + 0x4));
            u_stack6 = u_stack6 + 0x1;
        }
    }
    return;
}


u32  pass1_1008_43cc(param_1: u32)

{
    let mut bVar1: bool;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0x6) == 0x0)
    {
        pass1_1008_47cc((param_1 & 0xffff | uVar3 << 0x10));
    }
    if((iVar2 + 0x6) == 0x0)
    {
        bVar1 = false;
    }
    else
    {
        if((iVar2 + 0xa) == 0x0)
        {
            pass1_1008_4834((param_1 & 0xffff | uVar3 << 0x10));
        }
        bVar1 = true;
    }
    if(!bVar1)
    {
        return 0x0;
    }
    return str_var1((iVar2 + 0x16), (iVar2 + 0x14));
}


u32  pass1_1008_4426(param_1: u32)

{
    let mut bVar1: bool;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0x6) == 0x0)
    {
        pass1_1008_47cc((param_1 & 0xffff | uVar3 << 0x10));
    }
    if((iVar2 + 0x6) == 0x0)
    {
        bVar1 = false;
    }
    else
    {
        if((iVar2 + 0xa) == 0x0)
        {
            pass1_1008_4834((param_1 & 0xffff | uVar3 << 0x10));
        }
        bVar1 = true;
    }
    if(!bVar1)
    {
        return 0x0;
    }
    return str_var1((iVar2 + 0xc), (iVar2 + 0xa));
}


// WARNING: Could not reconcile some variable overlaps

void  pass1_1008_4480(param_1: u32,param_2: *mut u16, param_3: *mut Struct76, param_4: u16)

{
    let mut iVar1: i16;
    let mut iVar2: i16;
    let mut iVar3: i16;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut uVar6: u32;
    let mut iStack26: i16;
    let mut pcStack24: *mut c_char;
    let mut pcStack20: *mut c_char;
    let mut iStack16: i16;
    let mut local_6: i16;
    let mut local_4: [u8;2] = [0;2];

    pass1_1008_3e94(param_2, str_var1(param_4, &local_6), str_var1(param_4, local_4));
    uVar6 = pass1_1008_4772(param_3);
    uVar4 = (uVar6 >> 0x10);
    iVar1 = (uVar6 + 0x4);
    iVar2 = (uVar6 + 0x8);
    for(iStack16 = 0x0; iStack16 < iVar2; iStack16 = iStack16 + 0x1)
    {
        uVar5   = local_6 >> 0xf;
        iVar3   = local_6;
        local_6 = local_6 + 0x1;
        pass1_1008_4544(param_1);
        pcStack20 = str_var1(uVar5, iVar3);
        uVar6     = SEXT24(iStack16);
        pass1_1008_4544(param_3);
        pcStack24 = (uVar6 & 0xffff | uVar5 << 0x10);
        iStack26  = iVar1;
        while(iStack26 != 0x0)
        {
            if(*pcStack24 != -0x1)
            {
                *pcStack20 = *pcStack24;
            }
            pcStack24 = str_var1((pcStack24 >> 0x10) + (-(0xfffe < pcStack24) & 0x6c), pcStack24 + 0x1);
            pcStack20 = str_var1((pcStack20 >> 0x10) + (-(0xfffe < pcStack20) & 0x6c), pcStack20 + 0x1);
            iStack26  = iStack26 + -0x1;
        }
    }
    return;
}


void  pass1_1008_4544(param_1: u32)

{
    let mut bVar1: bool;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0x6) == 0x0)
    {
        pass1_1008_47cc((param_1 & 0xffff | uVar3 << 0x10));
    }
    if((iVar2 + 0x6) == 0x0)
    {
        bVar1 = false;
    }
    else
    {
        if((iVar2 + 0xa) == 0x0)
        {
            pass1_1008_4834((param_1 & 0xffff | uVar3 << 0x10));
        }
        bVar1 = true;
    }
    if(!bVar1)
    {
        return;
    }
    return;
}


u32  pass1_1008_4772(param_1: *mut Struct76)

{
    let mut bVar1: bool;
    let mut iVar2: *mut Struct76;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(&iVar2.field_0x6 == 0x0)
    {
        pass1_1008_47cc((param_1 & 0xffff | u_var2 << 0x10));
    }
    if(&iVar2.field_0x6 == 0x0)
    {
        bVar1 = false;
    }
    else
    {
        if((&iVar2.field_0x8 + 0x2) == 0x0)
        {
            pass1_1008_4834((param_1 & 0xffff | u_var2 << 0x10));
        }
        bVar1 = true;
    }
    if(!bVar1)
    {
        return 0x0;
    }
    return str_var1(iVar2.field_0x12, (&iVar2.field_0xe + 0x2));
}


void  pass1_1008_47cc(param_1: *mut Struct76)

{
    let mut uVar1: u32;
    let mut u_var2: u32;
    let mut uVar3: u16;
    let mut iVar5: i16;
    let mut iVar6: i16;
    let mut uVar7: u16;
    let mut uVar8: u16;
    let mut uStack14: u32;
    let mut iVar4: i16;

    uVar7 = (param_1 >> 0x10);
    iVar5 = param_1;
    if((iVar5 + 0x6) != 0x0)
    {
        uVar1           = *(iVar5 + 0x6);
        iVar6           = (iVar5 + 0x8);
        iVar4           = uVar1;
        uVar3           = iVar4 + 0xe;
        *(iVar5 + 0x10) = uVar1 & 0xffff0000 | uVar3;
        (iVar5 + 0x14)  = iVar4 + 0x436;
        (iVar5 + 0x16)  = iVar6 + (-(0xfbd7 < uVar3) & 0x6c);
        u_var2           = (iVar5 + 0x10);
        uVar8           = (u_var2 >> 0x10);
        iVar6           = u_var2;
        uStack14        = (iVar6 + 0xe);
        (iVar5 + 0x18)  = (long)(uStack14 * (iVar6 + 0x4) + 0x1f) / 0x20 << 0x2;
    }
    return;
}


u16  pass1_1008_48aa(param_1: u32)

{
    return (param_1 + 0xe);
}


void  pass1_1008_3714(param_1: u32)

{
    pass1_1008_3e0e(param_1);
    return;
}


u32  pass1_1008_372c(param_1: i16, param_2: u16)

{
    return str_var1(param_2, param_1 + 0xa);
}


void  pass1_1008_373c(void)

{
    return;
}


void  pass1_1008_3740(void)

{
    return;
}


void  pass1_1008_3744(void)

{
    return;
}


void  pass1_1008_3748(void)

{
    return;
}


void  pass1_1008_374c(void)

{
    return;
}


void  pass1_1008_3750(void)

{
    return;
}


void  pass1_1008_3754(void)

{
    return;
}


u16  pass1_1008_3758(void)

{
    return 0x1;
}


void  pass1_1008_375e(void)

{
    return;
}


void  pass1_1008_3762(void)

{
    return;
}


void  pass1_1008_3766(void)

{
    return;
}


void  pass1_1008_377a(void)

{
    return;
}


u16 * pass1_1008_392e(u16 *param_1, param_2: u16) {
    let mut iVar1: i16;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    param_1.field_0x0 = addr_table_1008_3aa0[2];//0x3aa8;
    (iVar1 + 0x2) = SEG_1008;
    (iVar1 + 0x4) = param_2;
    param_1.field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    (iVar1 + 0x2) = SEG_1008;
    param_1.field_0x0 = addr_table_1008_3aa0;//0x3aa0;
    (iVar1 + 0x2) = SEG_1008;
    return param_1;
}


void  pass1_1008_397a(u16 *param_1) {
    let mut iVar1: *mut Struct452;
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    iVar1 =  param_1;
    param_1.field_0x0 = addr_table_1008_3aa0; //0x3aa0;
    iVar1.field_0x2 = SEG_1008;
    param_1.field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    iVar1.field_0x2 = SEG_1008;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1.field_0x2 = SEG_1008;
    return;
}

void  pass1_1008_3a10(void)

{
    return;
}

void  pass1_1008_1246(param_1: u32)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0xe8) != 0x0)
    {
        ppcVar1 = ((param_1 + 0xe8) + 0x4c);
        (**ppcVar1)();
    }
    return;
}


void  pass1_1008_1272(param_1: u32, i16 param_2)

{
    fn_ptr_1 *ppcVar1;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0xe8) != 0x0)
    {
        ppcVar1 = ((param_1 + 0xe8) + 0x88);
        (**ppcVar1)();
        return;
    }
    pass1_1008_9cc4(param_1 & 0xffff | u_var2 << 0x10, param_2);
    return;
}


void  pass1_1008_12aa(param_1: u32)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0xe8) != 0x0)
    {
        ppcVar1 = ((param_1 + 0xe8) + 0x8c);
        (**ppcVar1)();
        return;
    }
    pass1_1008_9ce0();
    return;
}

u32  pass1_1000_5224(param_1: u16, param_2: u16, param_3: u16, param_4: u16)

{
    let mut uVar1: u32;
    long lVar2;
    let mut uVar3: u16;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut uVar7: u16;
    let mut uVar8: u16;
    let mut bVar10: bool;
    char cVar11;
    let mut uVar9: u16;

    cVar11 = param_2 < 0x0;
    if((bool)cVar11)
    {
        bVar10  = param_1 != 0x0;
        param_1 = -param_1;
        param_2 = -bVar10 - param_2;
    }
    if(param_4 < 0x0)
    {
        cVar11  = cVar11 + '\x01';
        bVar10  = param_3 != 0x0;
        param_3 = -param_3;
        param_4 = -bVar10 - param_4;
    }
    uVar3 = param_1;
    uVar5 = param_3;
    uVar6 = param_2;
    uVar9 = param_4;
    if(param_4 == 0x0)
    {
        uVar3 = param_2 / param_3;
        iVar4 = ((param_2 % param_3 << 0x10 | param_1) / param_3);
    }
    else
    {
        do
        {
            uVar8 = uVar9 >> 0x1;
            uVar5 = uVar5 >> 0x1 | ((uVar9 & 0x1) != 0x0) << 0xf;
            uVar7 = uVar6 >> 0x1;
            uVar3 = uVar3 >> 0x1 | ((uVar6 & 0x1) != 0x0) << 0xf;
            uVar6 = uVar7;
            uVar9 = uVar8;
        } while(uVar8 != 0x0);
        uVar1 = str_var1(uVar7, uVar3) / uVar5;
        iVar4 = uVar1;
        lVar2 = param_3 * (uVar1 & 0xffff);
        uVar3 = (lVar2 >> 0x10);
        uVar5 = uVar3 + iVar4 * param_4;
        if(((CARRY2(uVar3, iVar4 * param_4)) || (param_2 < uVar5)) || ((param_2 <= uVar5 && (param_1 < lVar2))))
        {
            iVar4 = iVar4 + -0x1;
        }
        uVar3 = 0x0;
    }
    if(cVar11 == '\x01')
    {
        bVar10 = iVar4 != 0x0;
        iVar4  = -iVar4;
        uVar3  = -bVar10 - uVar3;
    }
    return str_var1(uVar3, iVar4);
}


u32  pass1_1000_52be(param_1: u16, param_2: u16, param_3: u16, param_4: u16)

{
    if((param_4 | param_2) == 0x0)
    {
        return param_1 * param_3;
    }
    return param_1 * param_3 & 0xffff | ((param_1 * param_3 >> 0x10) + param_2 * param_3 + param_1 * param_4) << 0x10;
}


u32  pass1_1000_52f0(param_1: u16, param_2: u16, param_3: u16, param_4: u16)

{
    let mut uVar1: u32;
    long lVar2;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut iVar5: i16;
    let mut iVar6: i16;
    let mut uVar7: u16;
    let mut uVar8: u16;
    let mut uVar9: u16;
    let mut uVar10: u16;
    let mut uVar11: u16;
    let mut bVar12: bool;
    let mut bVar13: bool;

    bVar13 = param_2 < 0x0;
    if(bVar13)
    {
        bVar12  = param_1 != 0x0;
        param_1 = -param_1;
        param_2 = -bVar12 - param_2;
    }
    uVar11 = bVar13;
    if(param_4 < 0x0)
    {
        bVar13  = param_3 != 0x0;
        param_3 = -param_3;
        param_4 = -bVar13 - param_4;
    }
    uVar3 = param_1;
    uVar4 = param_3;
    uVar8 = param_2;
    uVar9 = param_4;
    if(param_4 == 0x0)
    {
        iVar5 = ((param_2 % param_3 << 0x10 | param_1) % param_3);
        iVar6 = 0x0;
        if((uVar11 - 0x1) < 0x0)
            goto LAB_1000_538a;
    }
    else
    {
        do
        {
            uVar10 = uVar9 >> 0x1;
            uVar4  = uVar4 >> 0x1 | ((uVar9 & 0x1) != 0x0) << 0xf;
            uVar7  = uVar8 >> 0x1;
            uVar3  = uVar3 >> 0x1 | ((uVar8 & 0x1) != 0x0) << 0xf;
            uVar8  = uVar7;
            uVar9  = uVar10;
        } while(uVar10 != 0x0);
        uVar1 = str_var1(uVar7, uVar3) / uVar4;
        uVar3 = uVar1 * param_4;
        lVar2 = (uVar1 & 0xffff) * param_3;
        uVar8 = (lVar2 >> 0x10);
        uVar4 = lVar2;
        uVar9 = uVar8 + uVar3;
        if(((CARRY2(uVar8, uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4))))
        {
            bVar13 = uVar4 < param_3;
            uVar4  = uVar4 - param_3;
            uVar9  = (uVar9 - param_4) - bVar13;
        }
        iVar5 = uVar4 - param_1;
        iVar6 = (uVar9 - param_2) - (uVar4 < param_1);
        if(-0x1 < (uVar11 - 0x1))
            goto LAB_1000_538a;
    }
    bVar13 = iVar5 != 0x0;
    iVar5  = -iVar5;
    iVar6  = -bVar13 - iVar6;
// LAB_1000_538a:
    return str_var1(iVar6, iVar5);
}


u32  pass1_1000_5390(param_1: u16, param_2: u16, param_3: u16, param_4: u16)

{
    let mut uVar1: u32;
    long lVar2;
    let mut uVar3: u16;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut uVar7: u16;
    let mut uVar8: u16;
    let mut uVar9: u16;

    uVar3 = param_1;
    uVar8 = param_4;
    uVar6 = param_2;
    uVar9 = param_3;
    if(param_4 == 0x0)
    {
        uVar3 = param_2 / param_3;
        iVar4 = ((param_2 % param_3 << 0x10 | param_1) / param_3);
    }
    else
    {
        do
        {
            uVar5 = uVar8 >> 0x1;
            uVar9 = uVar9 >> 0x1 | ((uVar8 & 0x1) != 0x0) << 0xf;
            uVar7 = uVar6 >> 0x1;
            uVar3 = uVar3 >> 0x1 | ((uVar6 & 0x1) != 0x0) << 0xf;
            uVar8 = uVar5;
            uVar6 = uVar7;
        } while(uVar5 != 0x0);
        uVar1 = str_var1(uVar7, uVar3) / uVar9;
        iVar4 = uVar1;
        lVar2 = param_3 * (uVar1 & 0xffff);
        uVar3 = (lVar2 >> 0x10);
        uVar8 = uVar3 + iVar4 * param_4;
        if(((CARRY2(uVar3, iVar4 * param_4)) || (param_2 < uVar8)) || ((param_2 <= uVar8 && (param_1 < lVar2))))
        {
            iVar4 = iVar4 + -0x1;
        }
        uVar3 = 0x0;
    }
    return str_var1(uVar3, iVar4);
}


u32  pass1_1000_53f0(param_1: u16, param_2: u16, param_3: u16, param_4: u16)

{
    let mut uVar1: u32;
    long lVar2;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut iVar6: i16;
    let mut iVar7: i16;
    let mut uVar8: u16;
    let mut uVar9: u16;
    let mut uVar10: u16;
    let mut bVar11: bool;

    uVar3  = param_1;
    uVar4  = param_4;
    uVar9  = param_2;
    uVar10 = param_3;
    if(param_4 == 0x0)
    {
        iVar6 = ((param_2 % param_3 << 0x10 | param_1) % param_3);
        iVar7 = 0x0;
    }
    else
    {
        do
        {
            uVar5  = uVar4 >> 0x1;
            uVar10 = uVar10 >> 0x1 | ((uVar4 & 0x1) != 0x0) << 0xf;
            uVar8  = uVar9 >> 0x1;
            uVar3  = uVar3 >> 0x1 | ((uVar9 & 0x1) != 0x0) << 0xf;
            uVar4  = uVar5;
            uVar9  = uVar8;
        } while(uVar5 != 0x0);
        uVar1  = str_var1(uVar8, uVar3) / uVar10;
        uVar3  = uVar1 * param_4;
        lVar2  = (uVar1 & 0xffff) * param_3;
        uVar9  = (lVar2 >> 0x10);
        uVar4  = lVar2;
        uVar10 = uVar9 + uVar3;
        if(((CARRY2(uVar9, uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
        {
            bVar11 = uVar4 < param_3;
            uVar4  = uVar4 - param_3;
            uVar10 = (uVar10 - param_4) - bVar11;
        }
        iVar6 = -(uVar4 - param_1);
        iVar7 = -(uVar4 - param_1 != 0x0) - ((uVar10 - param_2) - (uVar4 < param_1));
    }
    return str_var1(iVar7, iVar6);
}


i16 pass1_1000_545a(param_1: u32, param_2: u32)

{
    let mut pbVar1: *mut u8;
    let mut bVar2: u8;
    let mut bVar3: u8;
    let mut bVar4: u8;
    let mut pbVar5: *mut u8;
    let mut pbVar6: *mut u8;

    pbVar6 = (u8 *)param_2;
    pbVar5 = (u8 *)param_1;
    bVar4  = 0xff;
    do
    {
        do
        {
            if(bVar4 == 0x0)
                goto LAB_1000_5499;
            pbVar1 = pbVar6;
            pbVar6 = pbVar6 + 0x1;
            bVar4  = *pbVar1;
            bVar3  = *pbVar5;
            pbVar5 = pbVar5 + 0x1;
        } while(bVar3 == bVar4);
        bVar2 = bVar4 + 0xbf + (-((u8)(bVar4 + 0xbf) < 0x1a) & 0x20U) + 0x41;
        bVar3 = bVar3 + 0xbf;
        bVar4 = bVar3 + (-(bVar3 < 0x1a) & 0x20U) + 0x41;
    } while(bVar4 == bVar2);
    bVar4 = (bVar4 < bVar2) * -0x2 + 0x1;
// LAB_1000_5499:
    return bVar4;
}


u16 *pass1_1000_54a0(param_1: u32, param_2: u16, param_3: u16)

{
    let mut puVar1: *mut u16;
    let mut u_var2: u8;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut uVar6: u16;
    let mut puVar7: *mut u16;
    let mut iVar8: i16;

    if(param_3 != 0x0)
    {
        iVar8 = (param_1 >> 0x10);
        uVar5 = -param_1;
        uVar6 = param_3;
        if(uVar5 != 0x0)
        {
            uVar6 = (uVar5 - param_3 & -(uVar5 < param_3)) + param_3;
            uVar5 = param_3 - uVar6;
        }
        uVar3  = param_2 & 0xff | param_2 << 0x8;
        puVar7 = param_1;
        for(uVar4 = uVar6 >> 0x1; uVar4 != 0x0; uVar4 = uVar4 - 0x1)
        {
            puVar1  = puVar7;
            puVar7  = puVar7 + 0x1;
            *puVar1 = uVar3;
        }
        for(uVar6 = ((uVar6 & 0x1) != 0x0); u_var2 = (param_2 & 0xff), uVar6 != 0x0; uVar6 = uVar6 - 0x1)
        {
            puVar1  = puVar7;
            puVar7  = (puVar7 + 0x1);
            *puVar1 = u_var2;
        }
        if(uVar5 != 0x0)
        {
            for(uVar6 = uVar5 >> 0x1; uVar6 != 0x0; uVar6 = uVar6 - 0x1)
            {
                puVar1  = puVar7;
                puVar7  = puVar7 + 0x1;
                *puVar1 = uVar3;
            }
            for(uVar6 = ((uVar5 & 0x1) != 0x0); uVar6 != 0x0; uVar6 = uVar6 - 0x1)
            {
                puVar1  = puVar7;
                puVar7  = (puVar7 + 0x1);
                *puVar1 = u_var2;
            }
        }
    }
    return param_1;
}


void  pass1_1000_54e8(param_1: *mut u8, param_2: u16, param_3: i16, param_4: i16, param_5: i16, param_6: u16)

{
    let mut iVar1: i16;

    iVar1 = param_3;
    while(iVar1 = iVar1 + -0x1, -0x1 < iVar1)
    {
        (*(fn_ptr_1)param_1)();
    }
    return;
}


void  pass1_1000_5512(param_1: *mut u8, param_2: u16, param_3: i16, param_4: i16, param_5: u16)

{
    let mut bVar1: bool;
    let mut uStack4: u16;

    pass1_1000_52be(param_3, param_4, param_5, 0x0);
    while(true)
    {
        bVar1   = param_3 == 0x0;
        param_3 = param_3 + -0x1;
        param_4 = param_4 - bVar1;
        if(param_4 < 0x0)
            break;
        uStack4 = param_2;
        (*(fn_ptr_1)param_1)();
    }
    return;
}


void  pass1_1000_5586(param_1: *mut u8, param_2: u16, param_3: i16, param_4: i16, param_5: i16, param_6: u16)

{
    let mut iVar1: i16;

    iVar1 = param_3;
    while(iVar1 = iVar1 + -0x1, -0x1 < iVar1)
    {
        (*(fn_ptr_1)param_1)();
    }
    return;
}


u32 ret_op_1000_55ac(a: u16)

{
    return 0;
}

#pragma clang diagnostic pop
