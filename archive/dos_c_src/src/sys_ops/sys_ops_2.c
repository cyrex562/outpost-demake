#include "sys_ops_2.h"

#include "address_tables/function_tables.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_20.h"
#include "struct_43.h"
#include "struct_ops/struct_ops_2.h"
#include "struct_ops/struct_ops_3.h"
#include "structs/structs_3xx/struct_397.h"
#include "sys_ops_12.h"
#include "unk/unk_15.h"

u16 pass1_1030_e300(u32 param_1, u8 *param_2, i16 param_3, u16 param_4) {
    u16 *puVar1;

    puVar1 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_4, param_2, param_3);
    pass1_1010_089e(param_4, puVar1, (param_1 + 0x110), 0x2);
    return 0x1;
}


void  pass1_1030_e34e(Struct403 *param_1, u16 param_2, u8 *param_3) {
    u32 * puVar1;
    u32 * pu_var2;
    Struct404 *in_AX;
    i16          iVar3;
    Struct403 *iVar5;
    u32 *puVar4;
    u32 *puVar5;
    u16          uVar6;
    u16         *puStack10;

    mem_op_1000_179c(0x112, param_3, 0);
    puStack10 = str_var1(param_3, param_2);
    if((param_3 | param_2) != 0x0) {
        *puStack10      = addr_table_1008_380a[36]; // 0x389a
        (param_2 + 0x2) = SEG_1008;
        uVar6           = (param_1 >> 0x10);
        iVar5           = (Struct403 *)param_1;
        (param_2 + 0x4) = iVar5->field_0x4;
        puVar4 = &iVar5->field_0x8;
        puVar5 = (param_2 + 0x8);
        for (iVar3 = 0x40; iVar3 != 0x0; iVar3 = iVar3 + -0x1) {
            pu_var2 = puVar5;
            puVar5 = puVar5 + 0x1;
            puVar1 = puVar4;
            puVar4 = puVar4 + 0x1;
            *pu_var2 = *puVar1;
        }
        *puStack10 = addr_table_1028_6ad2;//0x6ad2;
        (param_2 + 0x2) = SEG_1028;
        (param_2 + 0x108) = iVar5->field_0x108;
        (param_2 + 0x10c) = iVar5->field_0x10c;
        (param_2 + 0x110) = iVar5->field_0x110;
        *puStack10 = addr_table_1030_e4ea;//0xe4ea;
        (param_2 + 0x2) = SEG_1030;
    }
}


void  struct_1030_e4fa(Struct100 *param_1, u32 param_2, u16 param_3, u8 param_4) {
    Struct289 *iVar1;
    u8 *puVar1;

    struct_op_1028_d1dc(param_3, param_4, param_1, 0x3e80);
    puVar1 = (param_1 >> 0x10);
    iVar1 = (Struct289 *) param_1;
    iVar1->field_0x108 = param_2;
    param_1->fld0_addr_table = addr_table_1030_e62e;//0xe62e;
    iVar1->fld2_segment = SEG_1030;
    sys_1000_3f9c(&iVar1->field_0x8,
                  puVar1,
                  s_SCKillBldg__0x_08lx_1050_597c,
                  iVar1->field_0x108,
                  &stack0xfffe,
                  puVar1,
                  SEG_1000,
                  param_3,
                  param_4);
}


void  pass1_1030_e564(Struct405 *param_1, u16 param_2, u8 *param_3) {
    u32 *puVar1;
    u32 *pu_var2;
    i16          iVar3;
    Struct405 *iVar5;
    u32 *puVar4;
    u32 *puVar5;
    u16          uVar6;
    u16         *puStack10;

    mem_op_1000_179c(0x10c, param_3, 0);
    puStack10 = str_var1(param_3, param_2);
    if((param_3 | param_2) != 0x0) {
        *puStack10      = addr_table_1008_380a[36]; // 0x389a
        (param_2 + 0x2) = SEG_1008;
        uVar6           = (param_1 >> 0x10);
        iVar5           = (Struct405 *)param_1;
        (param_2 + 0x4) = iVar5->field_0x4;
        puVar4 = &iVar5->field_0x8;
        puVar5 = (param_2 + 0x8);
        for (iVar3 = 0x40; iVar3 != 0x0; iVar3 = iVar3 + -0x1) {
            pu_var2 = puVar5;
            puVar5 = puVar5 + 0x1;
            puVar1 = puVar4;
            puVar4 = puVar4 + 0x1;
            *pu_var2 = *puVar1;
        }
        *puStack10 = addr_table_1028_6ad2;//0x6ad2;
        (param_2 + 0x2) = SEG_1028;
        (param_2 + 0x108) = iVar5->field_0x108;
        *puStack10 = addr_table_1030_e62e;//0xe62e;
        (param_2 + 0x2) = SEG_1030;
    }
    return;
}


void  pass1_1030_e6c2(Struct406 *param_1, u16 param_2, u8 *param_3) {
    u32 *puVar1;
    u32 *pu_var2;
    i16          iVar3;
    Struct406 *iVar5;
    u32 *puVar4;
    u32 *puVar5;
    u16          uVar6;
    u16         *puStack10;

    mem_op_1000_179c(0x10a, param_3, 0);
    puStack10 = str_var1(param_3, param_2);
    if((param_3 | param_2) != 0x0) {
        *puStack10      = addr_table_1008_380a[36]; // 0x389a
        (param_2 + 0x2) = SEG_1008;
        uVar6           = (param_1 >> 0x10);
        iVar5           = (Struct406 *)param_1;
        (param_2 + 0x4) = iVar5->field_0x4;
        puVar4 = &iVar5->field_0x8;
        puVar5 = (param_2 + 0x8);
        for (iVar3 = 0x40; iVar3 != 0x0; iVar3 = iVar3 + -0x1) {
            pu_var2 = puVar5;
            puVar5 = puVar5 + 0x1;
            puVar1 = puVar4;
            puVar4 = puVar4 + 0x1;
            *pu_var2 = *puVar1;
        }
        *puStack10 = addr_table_1028_6ad2;//0x6ad2;
        (param_2 + 0x2) = SEG_1028;
        (param_2 + 0x108) = iVar5->field_0x108;
        *puStack10 = addr_table_1030_e78a;//0xe78a;
        (param_2 + 0x2) = SEG_1030;
    }
    return;
}


void  pass1_1030_e7d6(u32 param_1, u16 param_2, u8 *param_3) {
    u32 *puVar1;
    u32 *pu_var2;
    u32 *puVar3;
    i16         iVar4;
    u32 *puVar5;
    u16         uVar6;
    u16        *puStack10;

    mem_op_1000_179c(0x108, param_3, 0);
    puStack10 = str_var1(param_3, param_2);
    if((param_3 | param_2) != 0x0) {
        *puStack10      = addr_table_1008_380a[36]; // 0x389a
        (param_2 + 0x2) = SEG_1008;
        uVar6           = (param_1 >> 0x10);
        (param_2 + 0x4) = (param_1 + 0x4);
        puVar3 = (param_1 + 0x8);
        puVar5 = (param_2 + 0x8);
        for (iVar4 = 0x40; iVar4 != 0x0; iVar4 = iVar4 + -0x1) {
            pu_var2 = puVar5;
            puVar5 = puVar5 + 0x1;
            puVar1 = puVar3;
            puVar3 = puVar3 + 0x1;
            *pu_var2 = *puVar1;
        }
        *puStack10 = addr_table_1028_6ad2;//0x6ad2;
        (param_2 + 0x2) = SEG_1028;
        *puStack10 = addr_table_1030_e890;//0xe890;
        (param_2 + 0x2) = SEG_1030;
    }
    return;
}


void  pass1_1030_e8a0(Struct100 *param_1, u32 param_2, u16 param_3, u32 param_4, u16 param_5, u8 param_6) {
    Struct408 *iVar1;
    u8 *puVar1;

    struct_op_1028_d1dc(param_5, param_6, param_1, 0x2710);
    puVar1 = (param_1 >> 0x10);
    iVar1 = (Struct408 *) param_1;
    iVar1->field_0x108 = param_2;
    iVar1->field_0x10c = param_4;
    iVar1->field_0x110 = param_3;
    param_1->fld0_addr_table = addr_table_1030_eb40;//0xeb40;
    iVar1->fld2_segment = SEG_1030;
    sys_1000_3f9c(&iVar1->field_0x8,
                  puVar1,
                  s_SCMoveBas_to_0x_08lx_1050_59b0,
                  iVar1->field_0x10c,
                  &stack0xfffe,
                  puVar1,
                  SEG_1000,
                  param_5,
                  param_6);
    return;
}


void  pass1_1030_e98e(Struct407 *param_1, u16 param_2, u8 *param_3) {
    u32 *puVar1;
    u32 *pu_var2;
    i16          iVar3;
    Struct407 *iVar5;
    u32 *puVar4;
    u32 *puVar5;
    u16          uVar6;
    u16         *puStack10;

    mem_op_1000_179c(0x112, param_3, 0);
    puStack10 = str_var1(param_3, param_2);
    if((param_3 | param_2) != 0x0) {
        *puStack10      = addr_table_1008_380a[36]; // 0x389a
        (param_2 + 0x2) = SEG_1008;
        uVar6           = (param_1 >> 0x10);
        iVar5           = (Struct407 *)param_1;
        (param_2 + 0x4) = iVar5->field_0x4;
        puVar4 = &iVar5->field_0x8;
        puVar5 = (param_2 + 0x8);
        for (iVar3 = 0x40; iVar3 != 0x0; iVar3 = iVar3 + -0x1) {
            pu_var2 = puVar5;
            puVar5 = puVar5 + 0x1;
            puVar1 = puVar4;
            puVar4 = puVar4 + 0x1;
            *pu_var2 = *puVar1;
        }
        *puStack10 = addr_table_1028_6ad2;//0x6ad2;
        (param_2 + 0x2) = SEG_1028;
        (param_2 + 0x108) = iVar5->field_0x108;
        (param_2 + 0x10c) = iVar5->field_0x10c;
        (param_2 + 0x110) = iVar5->field_0x110;
        *puStack10 = addr_table_1030_eb40;//0xeb40;
        (param_2 + 0x2) = SEG_1030;
    }
    return;
}


void  pass1_1030_ebf8(u32 param_1, u16 param_2, u8 *param_3) {
    u32 *puVar1;
    u32 *pu_var2;
    u32 *puVar3;
    i16         iVar4;
    u32 *puVar5;
    u16         uVar6;
    u16        *puStack10;

    mem_op_1000_179c(0x108, param_3, 0);
    puStack10 = str_var1(param_3, param_2);
    if((param_3 | param_2) != 0x0) {
        *puStack10      = addr_table_1008_380a[36]; // 0x389a
        (param_2 + 0x2) = SEG_1008;
        uVar6           = (param_1 >> 0x10);
        (param_2 + 0x4) = (param_1 + 0x4);
        puVar3 = (param_1 + 0x8);
        puVar5 = (param_2 + 0x8);
        for (iVar4 = 0x40; iVar4 != 0x0; iVar4 = iVar4 + -0x1) {
            pu_var2 = puVar5;
            puVar5 = puVar5 + 0x1;
            puVar1 = puVar3;
            puVar3 = puVar3 + 0x1;
            *pu_var2 = *puVar1;
        }
        *puStack10 = addr_table_1028_6ad2;//0x6ad2;
        (param_2 + 0x2) = SEG_1028;
        *puStack10 = addr_table_1030_ecb2;//0xecb2;
        (param_2 + 0x2) = SEG_1030;
    }
    return;
}


void  pass1_1030_c1b2(Struct695 *param_1, u8 *param_2, u16 param_3, u16 param_4, u16 param_5) {
    i16          iVar1;
    Struct695 *iVar2;
    u16          u_var2;
    u16         *puVar3;

    pass1_1028_be9e(param_1, param_3, param_4, SEG_1028, param_5);
    u_var2 = (param_1 >> 0x10);
    iVar2 = (Struct695 *)param_1;
    if(iVar2->field_0x12 == 0x5) {
        if(iVar2->field_0xc == 0xb) {
            pass1_1030_c652(param_2, param_4, param_5);
            iVar1  = 0x82;
            puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x8, param_5, param_2, param_4);
            pass1_1010_9f8c(puVar3, iVar1, param_5);
            iVar2->field_0x24 = puVar3 * 0x3;
            mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_5, (puVar3 >> 0x10), param_4);
            if(globals->PTR_LOOP_1050_13ae < 0x3) {
                iVar1 = iVar2->field_0x24;
                if(iVar1 < 0x32) {
                    iVar1 = 0x32;
                }
                iVar2->field_0x24 = iVar1;
                return;
            }
        } else {
            iVar2->field_0x24 = 0x64;
        }
    }
    return;
}


void  pass1_1030_c2fa(u32 param_1, i16 param_2, u8 *param_3, u16 param_4, u16 param_5) {
    u32   uVar1;
    u32          u_var2;
    u32          uVar3;
    u32          uVar4;
    i16          iVar6;
    u16          uVar7;
    u32          uVar8;
    u8          *puVar9;
    u32          uVar10;
    u16          uVar11;
    u16          uVar12;
    u16          uVar13;
    u16         *puVar14;
    u16          uVar15;
    u16          uStack84;
    long         lStack80;
    i16          iStack56;
    u32          uStack10;
    u32          u_stack6;
    Struct698 *iVar5;

    uVar12 = (param_1 >> 0x10);
    if((param_1 + 0xc) != 0xb) {
        pass1_1028_bd38(param_1, param_3, param_5);
        uVar1 = (param_1 + 0x20);
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
        u_stack6 = str_var1(param_3, param_2);
        iVar6   = param_2;
        puVar9  = param_3;
        pass1_1028_b58e(param_1);
        uStack10 = str_var1(puVar9, iVar6);
        u_var2    = *(iVar6 + 0x2e);
        puVar14  = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_5, puVar9, param_4);
        uVar10   = puVar14 >> 0x10;
        uVar13   = (u_var2 >> 0x10);
        pass1_1010_ed22(puVar14, *(u_var2 + 0x4), param_5);
        uVar3 = *(param_2 + 0x1f6);
        uVar8 = uVar3;
        pass1_1030_3694(uVar3, 0x3, 0x2, uVar10, SEG_1010, param_5);
        uVar12 = (uVar3 >> 0x10);
        uVar4  = *(u_var2 + 0x1f6);
        pass1_1030_355c(uVar4, uVar8 & 0xffff | uVar10 << 0x10);
        uVar13   = (uVar4 >> 0x10);
        iStack56 = 0x0;
        do {
            iVar5                   = (Struct698 *)(iStack56 * 0x2);
            (iVar5 + uVar4 + 0x174) = (iVar5 + uVar3 + 0x174);
            uVar7                   = (iVar5 + uVar3 + 0x180);
            uVar8                   = uVar7;
            (iVar5 + uVar4 + 0x180) = uVar7;
            iStack56                = iStack56 + 0x1;
        } while(iStack56 < 0x6);
        uStack84 = 0x11;
        while(true) {
            puVar9 = uVar10;
            uVar7  = uVar8;
            if(0x24 < uStack84)
                break;
            if(0x0 < (uStack84 * 0x2 + globals->_PTR_LOOP_1050_580e)) {
                empty_1038_540a();
                lStack80 = str_var1(puVar9, uVar7);
                uVar12   = (globals->_PTR_LOOP_1050_580e >> 0x10);
                uVar11   = globals->_PTR_LOOP_1050_580e;
                iVar6    = (uStack84 * 0x2 + uVar11);
                uVar10   = (long)iVar6 >> 0x10;
                uVar15   = uStack84;
                if(lStack80 < iVar6) {
                    iVar6  = (uStack84 * 0x2 + uVar11);
                    uVar10 = (iVar6 >> 0xf);
                    uVar15 = 0x21;
                }
                pass1_1038_52b8(u_stack6,
                                str_var1(uVar10, iVar6), uVar15, uVar11, param_4, SEG_1038, param_5);
                uVar15 = uStack84 * 0x2;
                uVar7  = (uVar15 + globals->_PTR_LOOP_1050_580e);
                pass1_1030_7ddc(uStack10, (long)uVar7, uStack84, uVar7, uVar10, uVar15, param_4, param_5);
                iVar6 = (globals->_PTR_LOOP_1050_580e + uVar15);
                uVar8 = iVar6;
                pass1_1038_5694(u_var2, (long)iVar6, uStack84);
            }
            uStack84 = uStack84 + 0x1;
        }
        pass1_1030_7c50(uStack10, 0x2, 0x1, uVar7, puVar9);
        pass1_1030_7c50(uStack10, 0x2, 0x2, uVar7, puVar9);
        pass1_1030_7c50(uStack10, 0x2, 0x3, uVar7, puVar9);
        pass1_1030_7c50(uStack10, 0x2, 0x4, uVar7, puVar9);
        pass1_1038_44d8(param_2, param_3, 0x2, 0x1, uVar7, puVar9);
        pass1_1038_44d8(param_2, param_3, 0x2, 0x2, uVar7, puVar9);
        pass1_1038_44d8(param_2, param_3, 0x2, 0x3, uVar7, puVar9);
        pass1_1038_44d8(param_2, param_3, 0x2, 0x4, uVar7, puVar9);
        puVar14 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_5, puVar9, param_4);
        pass1_1010_043a(puVar14, (param_2 + 0x4), 0x7, param_5);
    }
    return;
}


void  pass1_1030_c652(u8 *param_1, i16 param_2, u16 param_3) {
    u16 *puVar1;

    puVar1 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x8, param_3, param_1, param_2);
    pass1_1010_9794(puVar1, param_3);
    return;
}


void  pass1_1030_ae6c(u16 *param_1) {
    u32 uVar1;
    u16 u_var2;
    u8 *puVar3;
    u16 extraout_DX;
    Struct399 *iVar4;
    u16 uVar4;
    u16 *puVar5;

    uVar4 = (param_1 >> 0x10);
    iVar4 = (Struct399 *) param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar4->fld2_segment = SEG_1008;
    iVar4->field_0x4 = 0x0;
    puVar5 = pass1_1008_3e38((param_1 & 0xffff0000 | &iVar4->field_0x8));
    puVar3 = (puVar5 >> 0x10);
    u_var2 = 0x0;
    iVar4->field_0xe = 0x0;
    &iVar4->field_0x10 = 0x0;
    param_1->fld0_addr_table = addr_table_1030_b932;//0xb932;
    iVar4->fld2_segment = SEG_1030;
    mem_op_1000_179c(0xc, puVar3, 0);
    if ((puVar3 | u_var2) == 0x0) {
        &iVar4->field_0x10 = 0x0;
    } else {
        set_struct_1008_574a(str_var1(puVar3, u_var2));
        iVar4->field_0x10 = u_var2;
        iVar4->field_0x12 = extraout_DX;
    }
    uVar1         = &iVar4->field_0x10;
    (uVar1 + 0xa) = 0x0;
    return;
}


void  pass1_1030_aefa(u16 *param_1, u32 param_2) {
    u32   uVar1;
    u16 u_var2;
    u8 *puVar3;
    u16 extraout_DX;
    u16 uVar4;
    Struct400 *iVar5;
    u16 uVar5;
    u16 *puVar6;

    uVar5 = (param_1 >> 0x10);
    iVar5 = (Struct400 *) param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar5->fld2_segment = SEG_1008;
    iVar5->field_0x4 = 0x0;
    puVar6 = pass1_1008_3e38((param_1 & 0xffff0000 | &iVar5->field_0x8));
    puVar3 = (puVar6 >> 0x10);
    iVar5->field_0xe = 0x0;
    &iVar5->field_0x10 = 0x0;
    param_1->fld0_addr_table = addr_table_1030_b932;//0xb932;
    iVar5->fld2_segment = SEG_1030;
    iVar5->field_0x4 = (param_2 + 0x4);
    puVar6 = (param_1 & 0xffff0000 | &iVar5->field_0x8);
    pass1_1008_3f62(puVar6, (param_2 & 0xffff0000 | (param_2 + 0xc)));
    u_var2 = puVar6;
    mem_op_1000_179c(0xc, puVar3, 0);
    if ((puVar3 | u_var2) == 0x0) {
        u_var2 = 0x0;
        uVar4 = 0x0;
    } else {
        set_struct_1008_574a(str_var1(puVar3, u_var2));
        uVar4 = extraout_DX;
    }
    iVar5->field_0x10 = u_var2;
    iVar5->field_0x12 = uVar4;
    uVar1             = &iVar5->field_0x10;
    (uVar1 + 0xa)     = 0x0;
    return;
}


void  pass1_1030_b718(u16 param_1, u16 param_2, u16 *param_3, u32 *param_4, u8 *param_5, i16 param_6, u16 param_7) {
    u32 *puVar1;
    u16  u_var2;
    u32  local_12[0x2];
    long lStack10;
    u16 *pu_stack6;

    pu_stack6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_7, param_5, param_6);
    u_var2    = (pu_stack6 >> 0x10);
    lStack10 = (pu_stack6 + 0x20);
    puVar1   = local_12;
    pass1_1030_64ce(param_7, puVar1, u_var2, globals->_PTR_LOOP_1050_5740, param_3, lStack10,
                    str_var1(param_7, puVar1));
    *param_4 = *puVar1;
    return;
}


void  pass1_1030_9c1c(u32 param_1, u32 *param_2, u32 param_3) {
    void **ppcVar1;
    u16         u_var2;
    u16         uVar3;
    i16         iVar4;
    i16         iVar5;
    u8         *in_DX;
    u16         uVar6;
    i16         unaff_DI;
    u16         unaff_SS;
    u16        *puVar7;
    i16         iStack24;
    i16         iStack16;
    Struct99 *paStack6;

    puVar7 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x35, unaff_SS, in_DX, unaff_DI);
    iVar4  = puVar7 + 0xa;
    uVar3  = (puVar7 >> 0x10);
    iVar5  = iVar4;
    pass1_1030_9048(unaff_SS, param_1, 0x1, param_3);
    if(iVar5 != 0x0) {
        for(iStack24 = 0x4f; iStack24 < 0x70; iStack24 = iStack24 + 0x1) {
            if((iStack24 * 0x2 + iVar4) != 0x0) {
                paStack6 = pass1_1000_07fc(SEG_1000, globals->_PTR_LOOP_1050_5768);
                uVar6    = (paStack6 >> 0x10);
                u_var2    = paStack6;
                if((uVar6 | u_var2) == 0x0) {
                    paStack6 = (Struct99 *)0x0;
                } else {
                    paStack6->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
                    (u_var2 + 0x2) = SEG_1008;
                    (u_var2 + 0x4) = iStack24;
                    paStack6->fld0_addr_table = addr_table_1030_9ec8;//0x9ec8;
                    (u_var2 + 0x2) = SEG_1030;
                }
                ppcVar1 = (*param_2 + 0x8);
                (**ppcVar1)(SEG_1000, param_2, paStack6, (paStack6 >> 0x10));
            }
        }
    }
    for(iStack16 = 0x7d; iStack16 < 0x80; iStack16 = iStack16 + 0x1) {
        if((iStack16 * 0x2 + iVar4) != 0x0) {
            paStack6 = pass1_1000_07fc(SEG_1000, globals->_PTR_LOOP_1050_5768);
            uVar6    = (paStack6 >> 0x10);
            u_var2    = paStack6;
            if((uVar6 | u_var2) == 0x0) {
                paStack6 = (Struct99 *)0x0;
            } else {
                paStack6->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
                (u_var2 + 0x2) = SEG_1008;
                (u_var2 + 0x4) = iStack16;
                paStack6->fld0_addr_table = addr_table_1030_9ec8;//0x9ec8;
                (u_var2 + 0x2) = SEG_1030;
            }
            ppcVar1 = (*param_2 + 0x8);
            (**ppcVar1)(SEG_1000, param_2, paStack6, (paStack6 >> 0x10));
        }
    }
    return;
}


void  pass1_1030_9d42(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u32 *param_5, u32 param_6) {
    u32       *puVar1;
    u32        u_var2;
    void **ppcVar3;
    u16       *puVar4;
    u8        *puVar5;
    u8        *puVar6;
    u16        extraout_DX;
    u16        uVar8;
    i16        iVar9;
    u16        uVar10;
    u8         local_a6[0x4];
    u32 uStack162;
    u32        uStack158;
    i16        iStack154;
    u32 local_98;
    u32        uStack12;
    u32        uStack8;
    i16        iStack4;
    u32        uVar7;

    uVar10 = (param_6 >> 0x10);
    if((param_6 + 0x206) == 0x0) {
        iStack4   = (param_6 + 0x204);
        puVar4    = pass1_1000_4906((Struct20 *)str_var1(param_1, &local_98), 0x0, 0x94);
        uVar7     = ZEXT24(puVar4);
        iStack154 = 0x11;
        do {
            empty_1038_540a();
            uVar10                              = uVar7;
            (&local_98 + iStack154)             = uVar10;
            (&local_98 + iStack154 * 0x4 + 0x2) = param_2;
            iStack154                           = iStack154 + 0x1;
        } while(iStack154 < 0x25);
        empty_1038_540a();
        uStack158 = str_var1(param_2, uVar10);
        pass1_1008_5784(str_var1(param_1, local_a6), param_5);
        uVar7 = *(globals->_PTR_LOOP_1050_65e2 + 0x52);
        while(true) {
            puVar5 = local_a6;
            pass1_1008_5b12(puVar5, param_1);
            uVar8 = extraout_DX | puVar5;
            if(uVar8 == 0x0)
                break;
            puVar6 = puVar5;
            pass1_1030_4bbe(param_1, uVar8, uVar7, (puVar5 + 0x4));
            if(iStack4 == 0x0) {
                for(iStack154 = 0x11; iStack154 < 0x25; iStack154 = iStack154 + 0x1) {
                    iVar9 = iStack154 * 0x4;
                    if(((puVar6 + iVar9) != 0x0) && (u_var2 = (&local_98)[iStack154], puVar1 = (puVar6 + iVar9), u_var2 <= *puVar1 && *puVar1 != u_var2)) {
                        puVar1 = (puVar6 + iVar9);
                        if(uStack158 <= *puVar1 && *puVar1 != uStack158)
                            goto LAB_1030_9e17;
                        uStack158 = uStack158 - (puVar6 + iVar9);
                    }
                }
            } else {
                puVar1 = (puVar6 + 0x8c);
                if((uStack12 <= *puVar1 && *puVar1 != uStack12) || (puVar1 = (puVar6 + 0x90), uStack8 <= *puVar1 && *puVar1 != uStack8)) {
                    LAB_1030_9e17:
                    ppcVar3 = (*param_5 + 0xc);
                    (**ppcVar3)(SEG_1008, param_5, (param_5 >> 0x10), puVar5, extraout_DX);
                    uStack162 = 0x0;
                }
            }
        }
    }
    return;
}


u32  pass1_1030_8e3c(u16 param_1, u16 param_2, u8 *param_3, u32 param_4, u32 param_5) {
    u16  uVar1;
    u16  u_var2;
    u16  uVar3;
    u16  uVar4;
    i16  unaff_DI;
    u32 *puVar5;
    u16 *puVar6;
    u16  uVar7;

    mem_op_1000_179c(0xc, param_3, 0);
    if((param_3 | param_2) == 0x0) {
        puVar5 = 0x0;
    } else {
        puVar5 = set_struct_1008_574a(str_var1(param_3, param_2));
    }
    if(param_5._3_1_ == '\x04') {
        puVar6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_1, (puVar5 >> 0x10), unaff_DI);
        uVar3  = (puVar6 >> 0x10);
        uVar1  = (puVar6 + 0x1e);
        u_var2  = uVar1;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_5, (param_5 >> 0x10));
        uVar7 = (param_4 >> 0x10);
        uVar4 = uVar3;
        if(uVar1 < 0x1) {
            pass1_1030_9296(param_4, puVar5, str_var1(uVar3, u_var2), param_1, u_var2, uVar3);
            pass1_1030_951a(param_1, uVar4, param_4, puVar5, str_var1(uVar3, u_var2));
        } else {
            pass1_1030_9adc(param_4, uVar7, puVar5, str_var1(uVar3, u_var2), u_var2, uVar3);
            pass1_1030_9c1c(param_4, puVar5, str_var1(uVar3, u_var2));
        }
        pass1_1030_9d42(param_1, uVar4, param_4, uVar7, puVar5, str_var1(uVar3, u_var2));
    }
    return puVar5;
}


void  pass1_1030_7d1c(Struct397 *param_1, u16 param_2, u32 param_3, u16 param_4, u8 *param_5, u16 param_6, u16 param_7, u16 param_8) {
    u16          uVar1;
    Struct397 *iVar2;
    u16          u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar2 = (Struct397 *)param_1;
    if(iVar2->field_0x22 == (long *)0x0) {
        mem_op_1000_179c(0xa, param_5, 0);
        uVar1 = param_5 | param_4;
        if(uVar1 == 0x0) {
            iVar2->field_0x22 = (long *)0x0;
        } else {
            pass1_1020_ba3e((long *)str_var1(param_5, param_4), 0xa, 0x2, param_7, param_6);
            &iVar2->field_0x22         = param_4;
            (&iVar2->field_0x22 + 0x2) = uVar1;
        }
    }
    pass1_1020_bb8a(iVar2->field_0x22, param_2, param_3, param_7, param_8);
    return;
}


void  pass1_1030_7d7c(Struct398 *param_1, u16 param_2, u32 param_3, u16 param_4, u8 *param_5, u16 param_6, u16 param_7, u16 param_8) {
    u16          uVar1;
    Struct398 *iVar2;
    u16          u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar2 = (Struct398 *)param_1;
    if(iVar2->field_0x26 == (long *)0x0) {
        mem_op_1000_179c(0xa, param_5, 0);
        uVar1 = param_5 | param_4;
        if(uVar1 == 0x0) {
            iVar2->field_0x26 = (long *)0x0;
        } else {
            pass1_1020_ba3e((long *)str_var1(param_5, param_4), 0xa, 0x2, param_7, param_6);
            &iVar2->field_0x26         = param_4;
            (&iVar2->field_0x26 + 0x2) = uVar1;
        }
    }
    pass1_1020_bb8a(iVar2->field_0x26, param_2, param_3, param_7, param_8);
    return;
}


void  pass1_1030_7ddc(u32 param_1, long param_2, u16 param_3, u16 param_4, u8 *param_5, u16 param_6, u16 param_7, u16 param_8) {
    u32 uVar1;
    u8        *pu_var2;
    i16        iVar3;
    u16        uVar4;
    long       lVar5;

    uVar4  = (param_1 >> 0x10);
    iVar3  = param_1;
    pu_var2 = param_5;
    if((iVar3 + 0x22) == 0x0) {
        mem_op_1000_179c(0xa, param_5, 0);
        pu_var2 = (param_5 | param_4);
        if(pu_var2 == 0x0) {
            (iVar3 + 0x22) = 0x0;
        } else {
            pass1_1020_ba3e((long *)str_var1(param_5, param_4), 0xa, 0x2, param_7, param_6);
            (iVar3 + 0x22) = param_4;
            (iVar3 + 0x24) = pu_var2;
        }
    }
    uVar1 = (iVar3 + 0x22);
    lVar5 = pass1_1020_bae6(uVar1, str_var1(param_3, (uVar1 >> 0x10)), param_4, pu_var2, param_8);
    pass1_1020_bb8a(*(long **)(iVar3 + 0x22), (lVar5 + param_2),
                    str_var1(param_3, ((lVar5 + param_2) >> 0x10)), param_7, param_8);
    return;
}


void  struct_1030_8128(Struct135 *param_1, u16 param_2, u16 param_3) {
    u16          uVar1;
    u8          *pu_var2;
    u8          *puVar3;
    u8          *extraout_DX;
    Struct135 *iVar4;
    u16          uVar5;

    uVar5               = (param_1 >> 0x10);
    iVar4               = (Struct135 *)param_1;
    uVar1 = 0x0;
    param_1->field_0x0 = 0x0;
    &iVar4->field_0x4 = 0x0;
    iVar4->field_0x8    = 0x0;
    globals->_PTR_LOOP_1050_5748 = param_1;
    mem_op_1000_179c(0x56, param_2, 0);
    pu_var2 = (param_2 | uVar1);
    if(pu_var2 != 0x0) {
        pass1_1028_d81c(str_var1(param_2, uVar1), param_1, pu_var2, param_3);
    }
    mem_op_1000_179c(0x8, pu_var2, 0);
    puVar3 = (pu_var2 | uVar1);
    if(puVar3 == 0x0) {
        param_1->field_0x0 = 0x0;
    } else {
        struct_1028_d22e(str_var1(pu_var2, uVar1), param_1, puVar3);
        param_1          = uVar1;
        iVar4->fld2_segment = puVar3;
    }
    mem_op_1000_179c(0x8, puVar3, 0);
    pu_var2 = (puVar3 | uVar1);
    if(pu_var2 == 0x0) {
        &iVar4->field_0x4 = 0x0;
    } else {
        pass1_1028_cfd2(str_var1(puVar3, uVar1), param_1);
        iVar4->field_0x4 = uVar1;
        iVar4->field_0x6 = extraout_DX;
        pu_var2           = extraout_DX;
    }
    mem_op_1000_179c(0x24, pu_var2, 0);
    puVar3 = (pu_var2 | uVar1);
    if(puVar3 != 0x0) {
        pass1_1030_5bec(str_var1(pu_var2, uVar1));
    }
    mem_op_1000_179c(0x8, puVar3, 0);
    if((puVar3 | uVar1) != 0x0) {
        pass1_1038_78e2(str_var1(puVar3, uVar1), (puVar3 | uVar1));
    }
    globals->PTR_LOOP_1050_574a = (globals->_PTR_LOOP_1050_5748 >> 0x10);
    return;
}


u16  pass1_1030_6db4(u8 *param_1, i16 param_2, u16 param_3) {
    u16 *puVar1;

    puVar1 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_3, param_1, param_2);
    pass1_1010_ed3e(puVar1);
    return (puVar1 + 0x18);
}


void  pass1_1030_5ff6(u32 param_1, u16 param_2, u8 *param_3, u8 *param_4, u8 param_5) {
    u16        *puVar1;
    void **ppcVar2;
    u32 *puVar3;
    u32  uVar4;
    i16         iVar5;
    u16         uVar6;
    u8         *puVar7;
    u8         *extraout_DX;
    u8         *extraout_DX_00;
    i16         iVar8;
    u16         uVar9;
    u16         uVar10;
    u8          local_6c[0x58];
    u32  uStack20;
    u32  uStack16;
    u32         uStack12;
    u16         uStack8;
    u8         *pu_stack6;
    u16         uStack4;

    uVar9  = (param_1 >> 0x10);
    iVar8  = param_1;
    puVar7 = param_3;
    if((iVar8 + 0xc) == 0x0) {
        mem_op_1000_179c(0x18, param_3, 0);
        puVar7 = (param_3 | param_2);
        uStack8  = param_2;
        pu_stack6 = param_3;
        if(puVar7 == 0x0) {
            (iVar8 + 0xc) = 0x0;
        } else {
            struct_op_1030_1cd8(str_var1(param_3, param_2), 0x5, 0x5);
            (iVar8 + 0xc) = param_2;
            (iVar8 + 0xe) = extraout_DX;
            puVar7        = extraout_DX;
        }
    }
    for(uStack4 = 0x0; uVar4 = (iVar8 + 0x10), puVar1 = (uVar4 + 0xa), uStack4 <= *puVar1 && *puVar1 != uStack4; uStack4 = uStack4 + 0x1) {
        uStack12 = pass1_1028_e2e0(globals->_PTR_LOOP_1050_65e2, puVar7, 0x2);
        iVar5    = uStack12;
        ppcVar2  = ((iVar8 + 0xc) + 0x8);
        (**ppcVar2)(SEG_1028, (iVar8 + 0xc), iVar5, (uStack12 >> 0x10), uStack4, 0x0);
        puVar7 = extraout_DX_00;
        pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), uStack12);
        uStack16 = str_var1(puVar7, iVar5);
        uStack20 = (iVar5 + 0x10);
        if((uStack20 + 0x2) == 0x0) {
            puVar3 = (iVar8 + 0x10);
            sys_1000_3f9c(local_6c,
                          param_4,
                          s__s__d_1050_573a,
                          *puVar3,
                          &stack0xfffe,
                          (puVar3 >> 0x10),
                          SEG_1000,
                          param_4,
                          param_5);
            uVar6            = str_op_1008_60e8(str_var1(param_4, local_6c));
            uVar10           = (uStack20 >> 0x10);
            (uStack20 + 0x2) = uVar6;
            (uStack20 + 0x4) = puVar7;
        }
    }
    return;
}


void  pass1_1030_615a(Struct137 *param_1, u16 param_2) {
    u16          uVar1;
    u16          extraout_DX;
    Struct137 *iVar2;
    u16          u_var2;

    u_var2             = (param_1 >> 0x10);
    iVar2             = (Struct137 *)param_1;
    uVar1             = 0x0;
    param_1           = 0x0;
    &iVar2->field_0x4 = 0x0;
    mem_op_1000_179c(0xc, param_2, 0);
    if((param_2 | uVar1) == 0x0) {
        &iVar2->field_0x4 = 0x0;
    } else {
        set_struct_1008_574a(str_var1(param_2, uVar1));
        iVar2->field_0x4 = uVar1;
        iVar2->field_0x6 = extraout_DX;
    }
    globals->_PTR_LOOP_1050_5740 = param_1;
    return;
}


u16  pass1_1030_6222(u32 param_1, i16 param_2, u32 param_3, u32 param_4, u16 param_5, u8 *param_6, u16 param_7) {
    fn_ptr_1 *ppcVar1;
    u16       u_var2;
    u16       extraout_DX;
    u32       u_stack6;

    mem_op_1000_179c(0x4c, param_6, 0);
    u_var2 = param_6 | param_5;
    if(u_var2 == 0x0) {
        param_5 = 0x0;
        u_var2   = 0x0;
    } else {
        pass1_1030_88ce(str_var1(param_6, param_5), param_3, param_4, param_7);
    }
    u_stack6 = str_var1(u_var2, param_5);
    ppcVar1 = ((param_1 + 0x4) + 0x4);
    (**ppcVar1)();
    if(param_2 != 0x0) {
        pass1_1030_8d08(u_stack6, extraout_DX);
    }
    return 0x0;
}


void  pass1_1030_62e4(u32 *param_1, u16 *param_2, long param_3, u16 param_4) {
    void **ppcVar1;
    u32 *pu_var2;
    u16         uVar3;
    u8         *extraout_DX;
    u8         *puVar4;
    u16         extraout_DX_00;
    u16         extraout_DX_01;
    u16         uVar5;
    i16         local_64[0x3];
    u32  uStack94;
    u16         uStack88;
    u16         uStack78;
    u16         uStack76;
    u32  local_40;
    u32  u_stack60;
    u16         uStack56;
    u32 *puStack54;
    u8         *puStack52;
    u32 *puStack50;
    u8         *puStack48;
    u16         uStack46;
    i16         iStack44;
    u8          local_2a[0x2];
    i16         local_28;
    i16         local_26;
    u16         local_24;
    u8          local_22[0x2];
    u8          local_20[0x2];
    u16         local_1e;
    u16         local_1c;
    u16         local_1a;
    u8          local_18[0x6];
    u8          local_12[0x6];
    u8          local_c[0x6];
    u32         u_stack6;

    uVar5     = (param_1 >> 0x10);
    pu_var2    = param_1;
    puVar4    = (param_1 + 0x2);
    puStack54 = pu_var2;
    puStack52 = puVar4;
    puStack50 = pu_var2;
    puStack48 = puVar4;
    if((puVar4 | pu_var2) != 0x0) {
        ppcVar1 = *pu_var2;
        (**ppcVar1)();
        puVar4 = extraout_DX;
    }
    mem_op_1000_179c(0x18, puVar4, 0);
    puStack54 = pu_var2;
    puStack52 = puVar4;
    if((puVar4 | pu_var2) == 0x0) {
        pu_var2 = 0x0;
        uVar3  = 0x0;
    } else {
        struct_op_1030_1cd8(str_var1(puVar4, pu_var2), 0x5, 0x5);
        uVar3 = extraout_DX_00;
    }
    param_1 = pu_var2;
    param_1->fld2_segment = uVar3;
    pass1_1030_677a(param_1, param_3, param_4);
    u_stack6 = str_var1(uVar3, pu_var2);
    if((uVar3 | pu_var2) != 0x0) {
        pass1_1008_3e38(str_var1(param_4, local_c));
        pass1_1008_3e38(str_var1(param_4, local_12));
        pass1_1008_3e38(str_var1(param_4, local_18));
        pass1_1008_6d3e(param_2, str_var1(param_4, local_12), str_var1(param_4, local_c));
        pass1_1008_3eb4(str_var1(param_4, local_c),
                        str_var1(param_4, &local_1e),
                        str_var1(param_4, &local_1c),
                        str_var1(param_4, &local_1a));
        pass1_1008_3eb4(str_var1(param_4, local_12),
                        str_var1(param_4, &local_24),
                        str_var1(param_4, local_22),
                        str_var1(param_4, local_20));
        pass1_1008_6d64(param_2, str_var1(param_4, local_18));
        pass1_1008_3eb4(str_var1(param_4, local_18),
                        str_var1(param_4, local_2a),
                        str_var1(param_4, &local_28),
                        str_var1(param_4, &local_26));
        if(local_24 == local_1e) {
            iStack44 = 0x0;
            for(uStack46 = local_1c; uVar3 = local_28 + local_1c, uStack46 < uVar3; uStack46 = uStack46 + 0x1) {
                for(uStack56 = local_1a; uStack56 < (local_26 + local_1a); uStack56 = uStack56 + 0x1) {
                    uStack88 = local_1e;
                    pass1_1008_3e54(CONCAT13((param_4 >> 0x8), CONCAT12(param_4, local_64)), local_1e, uStack46, uStack56);
                    pass1_1030_8b00(u_stack6,
                                    str_var1(param_4, local_64),
                                    str_var1(param_4, &local_40), param_4);
                    u_stack60       = local_40;
                    local_64[0]    = iStack44;
                    u_stack60 = local_40;
                    uStack78       = u_stack60;
                    uStack76       = local_40;
                    uStack76._1_1_ = (local_40 >> 0x18);
                    if(uStack76._1_1_ == '\0') {
                        u_stack60 = 0x0;
                        local_40 = 0x0;
                    }
                    uStack94 = str_var1(local_40, u_stack60);
                    ppcVar1  = (*param_1 + 0x8);
                    iStack44 = iStack44 + 0x1;
                    (**ppcVar1)();
                }
            }
            ppcVar1 = (*param_1 + 0x10);
            (**ppcVar1)(SEG_1008, *param_1);
            if((extraout_DX_01 | uVar3) != 0x0) {
                return;
            }
        }
    }
    return;
}


void  pass1_1030_521c(Struct100 *param_1, u32 param_2, u16 param_3, u8 param_4) {
    i16 iVar1;
    u8 *pu_var2;

    struct_op_1028_d1dc(param_3, param_4, param_1, 0x32c7);
    pu_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    *(iVar1 + 0x108) = param_2;
    param_1->fld0_addr_table = addr_table_1030_55ee[4];//0x55fe;
    (iVar1 + 0x2) = SEG_1030;
    sys_1000_3f9c((iVar1 + 0x8),
                  pu_var2,
                  s_SCGenKids_0x_08lx_1050_5714,
                  param_2,
                  &stack0xfffe,
                  pu_var2,
                  SEG_1000,
                  param_3,
                  param_4);
    return;
}


void  pass1_1030_5290(Struct377 *param_1, Struct376 *param_2, u8 *param_3) {
    u32 *puVar1;
    u32 *pu_var2;
    i16          iVar3;
    Struct377 *iVar5;
    u32 *puVar4;
    u32 *puVar5;
    u16          uVar6;
    u16         *puStack10;

    mem_op_1000_179c(0x10c, param_3, 0);
    puStack10 = str_var1(param_3, param_2);
    if((param_3 | param_2) != 0x0) {
        *puStack10         = addr_table_1008_380a[36]; // 0x389a
        param_2->fld2_segment = SEG_1008;
        uVar6              = (param_1 >> 0x10);
        iVar5              = (Struct377 *)param_1;
        param_2->field_0x4 = iVar5->field_0x4;
        puVar4 = &iVar5->field_0x8;
        puVar5 = &param_2->field_0x8;
        for (iVar3 = 0x40; iVar3 != 0x0; iVar3 = iVar3 + -0x1) {
            pu_var2 = puVar5;
            puVar5 = puVar5 + 0x1;
            puVar1 = puVar4;
            puVar4 = puVar4 + 0x1;
            *pu_var2 = *puVar1;
        }
        *puStack10 = addr_table_1028_6ad2;//0x6ad2;
        param_2->fld2_segment = SEG_1028;
        param_2->field_0x108 = iVar5->field_0x108;
        *puStack10 = addr_table_1030_55ee[4];//0x55fe;
        param_2->fld2_segment = SEG_1030;
    }
    return;
}


void  pass1_1030_532e(Struct100 *param_1, u32 param_2, u16 param_3, u8 param_4) {
    i16 iVar1;
    u8 *pu_var2;

    struct_op_1028_d1dc(param_3, param_4, param_1, 0x32c7);
    pu_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    *(iVar1 + 0x108) = param_2;
    param_1->fld0_addr_table = addr_table_1030_55ee;//0x55ee;
    (iVar1 + 0x2) = SEG_1030;
    sys_1000_3f9c((iVar1 + 0x8),
                  pu_var2,
                  s_SCSelect__u___d_1050_5726,
                  *(iVar1 + 0x4),
                  &stack0xfffe,
                  pu_var2,
                  SEG_1000,
                  param_3,
                  param_4);
    return;
}


u16  pass1_1030_538a(Struct694 *param_1, i16 param_2, u16 param_3) {
    u8          *puVar1;
    u16          u_var2;
    Struct694 *iVar4;
    u16          uVar3;
    u16         *puVar4;

    uVar3  = (param_1 >> 0x10);
    iVar4  = (Struct694 *)param_1;
    puVar1 = (&iVar4->field_0x108 + 0x2);
    u_var2  = puVar1 >> 0x8;
    puVar4 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_3, puVar1, param_2);
    if(u_var2 == 0x1) {
        pass1_1018_04ca(puVar4, iVar4->field_0x108);
    } else {
        if(u_var2 == 0x2) {
            pass1_1018_04a4(puVar4, iVar4->field_0x108);
        }
    }
    return 0x1;
}


void pass1_1030_54f8(Struct378 *param_1, u8 *param_2, u32 param_3) {
    u32 *puVar1;
    u32 *pu_var2;
    i16          iVar3;
    Struct379 *iVar5;
    u32 *puVar4;
    u32 *puVar5;
    u16          uVar6;
    u16         *puStack10;

    mem_op_1000_179c(0x10c, param_2, 0);
    puStack10 = str_var1(param_2, param_1);
    if((param_2 | param_1) != 0x0) {
        *puStack10         = addr_table_1008_380a[36]; // 0x389a
        param_1->fld2_segment = SEG_1008;
        uVar6              = (param_3 >> 0x10);
        iVar5              = (Struct379 *)param_3;
        param_1->field_0x4 = iVar5->field_0x4;
        puVar4 = &iVar5->field_0x8;
        puVar5 = &param_1->field_0x8;
        for (iVar3 = 0x40; iVar3 != 0x0; iVar3 = iVar3 + -0x1) {
            pu_var2 = puVar5;
            puVar5 = puVar5 + 0x1;
            puVar1 = puVar4;
            puVar4 = puVar4 + 0x1;
            *pu_var2 = *puVar1;
        }
        *puStack10 = addr_table_1028_6ad2;//0x6ad2;
        param_1->fld2_segment = SEG_1028;
        param_1->field_0x108 = iVar5->field_0x108;
        *puStack10 = addr_table_1030_55ee;//0x55ee;
        param_1->fld2_segment = SEG_1030;
    }
    return;
}


u16  pass1_1030_3058(Struct375 *param_1, u16 param_2, u8 *param_3) {
    u16         *puVar1;
    void **ppcVar2;
    u8          *puVar3;
    u8          *extraout_DX;
    Struct375 *iVar4;
    u16          uVar4;
    u32   uVar5;
    u32          uVar6;
    u16          uStack4;

    uVar4  = (param_1 >> 0x10);
    iVar4  = (Struct375 *)param_1;
    puVar3 = param_3;
    if(iVar4->field_0xc == 0x0) {
        mem_op_1000_179c(0x18, param_3, 0);
        puVar3 = (param_3 | param_2);
        if(puVar3 == 0x0) {
            iVar4->field_0xc = 0x0;
        } else {
            uVar5                     = struct_op_1030_1cd8(str_var1(param_3, param_2), 0x5, 0x5);
            puVar3                    = (uVar5 >> 0x10);
            &iVar4->field_0xc         = uVar5;
            (&iVar4->field_0xc + 0x2) = puVar3;
        }
    }
    for(uStack4 = 0x0; uVar5 = iVar4->field_0x10, puVar1 = (uVar5 + 0x22), uStack4 <= *puVar1 && *puVar1 != uStack4; uStack4 = uStack4 + 0x1) {
        uVar6   = pass1_1028_e2e0(globals->_PTR_LOOP_1050_65e2, puVar3, 0x3);
        ppcVar2 = (*iVar4->field_0xc + 0x8);
        (**ppcVar2)(SEG_1028, iVar4->field_0xc, uVar6, (uVar6 >> 0x10), uStack4, 0x0);
        puVar3 = extraout_DX;
    }
    return 0x1;
}


void  pass1_1030_314c(u16 *param_1, u32 param_2, u8 *param_3, u16 param_4) {
    Struct364 *iVar1;
    i16 unaff_DI;
    u16 uVar1;
    i16 iStack12;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct364 *) param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment = SEG_1008;
    iVar1->field_0x170 = 0x0;
    iVar1->field_0x1a4 = param_2;
    iVar1->field_0x1a8 = 0x5;
    iVar1->field_0x1aa = 0x0;
    iVar1->field_0x1ae = 0x10;
    param_1->fld0_addr_table = addr_table_1030_3af2;//0x3af2;
    iVar1->fld2_segment = SEG_1030;
    pass1_1000_4906((Struct20 *) (param_1 & 0xffff0000 | &iVar1->field_0x4), 0x0, 0x16c);
    pass1_1000_4906((Struct20 *) (param_1 & 0xffff0000 | &iVar1->field_0x18c), 0x0, 0x18);
    pass1_1000_4906((Struct20 *) (param_1 & 0xffff0000 | &iVar1->field_0x174), 0x0, 0xc);
    pass1_1000_4906((Struct20 *) (param_1 & 0xffff0000 | &iVar1->field_0x180), 0x0, 0xc);
    mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_4, param_3, unaff_DI);
    if (globals->PTR_LOOP_1050_13ae < 0x2) {
        pass1_1030_34da(param_1);
    } else {
        iVar1->field_0x176 = 0x1;
        iVar1->field_0x178 = 0x2;
        iVar1->field_0x17a = 0x2;
        iVar1->field_0x17c = 0x60001;
        for(iStack12 = 0x1; iStack12 < 0x6; iStack12 = iStack12 + 0x1) {
            (&iVar1->field_0x180 + iStack12 * 0x2) = 0x64;
        }
    }
    return;
}


void  pass1_1030_4594(u8 *param_1, u16 param_2, u16 param_3, i16 param_4) {
    u16  uVar1;
    u16 *pu_var2;
    u16  uVar3;
    i16  iVar4;
    i16  iVar5;
    u16  uVar6;
    u16 *puVar7;
    u16 *puStack8;

    pu_var2 = (param_4 - 0x1U);
    mem_op_1000_179c(0x10, param_1, 0);
    puStack8 = (pu_var2 & 0xffff | ZEXT24(param_1) << 0x10);
    uVar3    = param_1 | pu_var2;
    if(uVar3 == 0x0) {
        puStack8 = 0x0;
    } else {
        puVar7 = pass1_1008_3e38(str_var1(param_1, pu_var2 + 0x4));
        uVar3  = (puVar7 >> 0x10);
        pu_var2 = puStack8;
    }
    uVar1 = SUB42(pu_var2, 0x0);
    iVar4 = (param_4 - 0x1U) * 0x12;
    load_string_1010_84acglobals->dat_1050_14cc, SEG_1010);
    uVar6         = (puStack8 >> 0x10);
    iVar5         = puStack8;
    *puStack8     = uVar1;
    (iVar5 + 0x2) = uVar3;
    (iVar5 + 0xa) = (iVar4 + 0x51ba);
    pass1_1008_3e76((puStack8 & 0xffff0000 | (iVar5 + 0x4)), (iVar4 + 0x51c0), (iVar4 + 0x51be), (iVar4 + 0x51bc));
    (iVar5 + 0xc) = iVar4 + 0x51c2;
    (iVar5 + 0xe) = SEG_1050;
    return;
}


void  pass1_1030_4628(u8 *param_1, u16 param_2, u16 param_3, i16 param_4) {
    u32 uVar1;
    u16        u_var2;
    u16        uVar3;
    i16        iVar4;
    i16        iVar5;
    i16        iVar6;
    i16       *piVar7;
    u16        uVar8;
    i16        iStack24;
    i16       *piStack20;
    i16        iStack10;
    i16       *piStack8;

    u_var2 = param_4 - 0x1;
    uVar3 = u_var2;
    mem_op_1000_179c(0x28, param_1, 0);
    piStack20 = str_var1(param_1, uVar3);
    if((param_1 | uVar3) == 0x0) {
        piStack8 = 0x0;
    } else {
        pass1_1008_3e38(str_var1(param_1, uVar3 + 0x6));
        piStack8 = piStack20;
    }
    uVar8         = (piStack8 >> 0x10);
    iVar5         = piStack8;
    (iVar5 + 0x2) = 0x0;
    iVar6         = u_var2 * 0x5e;
    pass1_1008_3e76((piStack8 & 0xffff0000 | (iVar5 + 0x6)), (iVar6 + 0x5336), (iVar6 + 0x5334), (iVar6 + 0x5332));
    (iVar5 + 0xc) = (iVar6 + 0x5348);
    *piStack8     = param_4;
    (iVar5 + 0xe) = (iVar6 + 0x534a);
    iStack10      = 0x0;
    do {
        uVar3                           = ((u_var2 * 0x2f + iStack10) * 0x2 + 0x5338);
        (iVar5 + iStack10 * 0x2 + 0x12) = uVar3;
        iStack10                        = iStack10 + 0x1;
    } while(iStack10 < 0x8);
    uVar1 = (&DAT_1050_5350 + u_var2 * 0x5e);
    pass1_1008_612e(uVar1, (uVar1 >> 0x10), uVar3);
    (iVar5 + 0x22)          = uVar3;
    piVar7                  = (u_var2 * 0x5e + 0x5354);
    *(i16 **)(iVar5 + 0x24) = piVar7;
    (iVar5 + 0x26)          = SEG_1050;
    iVar6                   = *piVar7;
    pass1_1000_4906((Struct20 *)str_var1(0x1050, piVar7), 0x0, 0x1e);
    iStack10 = 0x0;
LAB_1030_474c:
    if(uVar3 <= iStack10) {
        return;
    }
    do {
        iVar4 = (u_var2 * 0x5e + 0x534e) + iVar6 + -0x1;
        pass1_1008_612e(iVar6, iVar4, iVar4);
        iStack24 = 0x0;
        while(true) {
            if(iStack10 < iStack24) {
                uVar1                    = (iVar5 + 0x24);
                (uVar1 + iStack10 * 0x2) = iVar4;
                iStack10                 = iStack10 + 0x1;
                goto LAB_1030_474c;
            }
            uVar1 = (iVar5 + 0x24);
            if((uVar1 + iStack24 * 0x2) == iVar4)
                break;
            iStack24 = iStack24 + 0x1;
        }
    } while(true);
}


void  pass1_1030_4782(u8 *param_1, u8 param_2, u8 *param_3, u16 param_4, u16 param_5, i16 param_6, i16 param_7, i16 param_8) {
    i16         iVar1;
    u16         u_var2;
    u8        **ppuVar3;
    u8         *puVar4;
    u16         uVar5;
    u16         uVar6;
    i16         iVar7;
    i16         unaff_DI;
    u16         uVar8;
    u16         uVar9;
    u16        *puVar10;
    Struct43 *paVar11;
    u32         uVar12;
    i16         iStack220;
    u8         *local_c4;
    u8         *puStack194;
    u8         *local_c0;
    u16         uStack190;
    i16         iStack188;
    Struct18 *paStack184;
    i16         iStack180;
    Struct18 *paStack178;
    Struct18 *paStack174;
    u16         uStack170;
    u16         uStack168;
    u16         uStack166;
    u16         uStack164;
    u16         uStack162;
    u8        **ppuStack160;
    i16         iStack158;
    i16         iStack156;
    i16         iStack154;
    u16         uStack152;
    char       *pcStack150;
    u8          local_92[0x80];
    u32         uStack18;
    u32         uStack14;
    u16         uStack10;
    u16         uStack8;
    i16        *piStack6;

    if(globals->_PTR_LOOP_1050_5f2c == 0x0) {
        globals->dat_1050_5f2c      = mem_op_1000_160a(param_3, SEG_1000);
        globals->dat_1050_5f2e      = param_3;
    } else {
    }
    local_c4   = globals->dat_1050_5f2c;
    puStack194 = globals->dat_1050_5f2e;
    u_var2      = fn_ptr_op_1000_1708(0x20, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
    paStack184 = (Struct18 *)str_var1(globals->PTR_LOOP_1050_5f2e, u_var2);
    puVar4     = (globals->PTR_LOOP_1050_5f2e | u_var2);
    if(puVar4 == 0x0) {
        u_var2  = 0x0;
        puVar4 = 0x0;
    } else {
        pass1_1030_84ae(str_var1(globals->PTR_LOOP_1050_5f2e, u_var2));
    }
    piStack6  = str_var1(puVar4, u_var2);
    *piStack6 = param_8;
    pass1_1008_3f62(CONCAT13((puVar4 >> 0x8), CONCAT12(puVar4, u_var2 + 0x8)),
                    str_var1(0x1050, &USHORT_1050_65e6 + param_8 * 0xa));
    if(param_7 != 0x0) {
        puVar10  = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_1, puVar4, unaff_DI);
        uStack8  = (puVar10 >> 0x10);
        uStack10 = SUB42(puVar10, 0x0);
        uStack14 = pass1_1018_04b8(puVar10);
        uVar5    = (uStack14 >> 0x10);
        u_var2    = uStack14;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, uVar5);
        uStack18         = str_var1(uVar5, u_var2);
        pcStack150       = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
        uVar6            = (pcStack150 >> 0x10);
        u_var2            = pass1_1030_2a98(uStack18);
        uVar8            = (piStack6 >> 0x10);
        (piStack6 + 0x2) = u_var2;
        sys_1000_3f9c(local_92,
                      param_1,
                      pcStack150,
                      u_var2,
                      &stack0xfffe,
                      uVar8,
                      SEG_1000,
                      param_1,
                      param_2);
        u_var2             = str_op_1008_60e8(str_var1(param_1, local_92));
        uVar8             = (piStack6 >> 0x10);
        (piStack6 + 0x4)  = u_var2;
        (piStack6 + 0x6)  = uVar6;
        paVar11           = unk_io_op_1010_830aglobals->dat_1050_14cc, (param_8 * 0xa + 0x65ec), param_1);
        uVar8             = (piStack6 >> 0x10);
        (piStack6 + 0xe)  = paVar11;
        (piStack6 + 0x10) = (paVar11 >> 0x10);
        paVar11           = unk_io_op_1010_830aglobals->dat_1050_14cc, (param_8 * 0xa + 0x65ee), param_1);
        uVar8             = (piStack6 >> 0x10);
        iVar7             = piStack6;
        (iVar7 + 0x12)    = paVar11;
        (iVar7 + 0x14)    = (paVar11 >> 0x10);
        uVar12            = pass1_1008_4772(*(Struct76 **)(iVar7 + 0xe));
        uStack152         = (uVar12 >> 0x10);
        iStack154         = uVar12;
        iStack156         = (iStack154 + 0x4) + -0x1;
        iStack158         = (iStack154 + 0x8) + -0x1;
        if(param_6 != 0x0) {
            ppuStack160 = (u8 **)(&PTR_LOOP_1050_000e + 0x1);
            if(uStack14 == 0x0) {
                debug_pri16_1008_6048(s_get_site_data_without_planet__1050_56de, SEG_1008, param_1);
            } else {
                ppuVar3 = &local_c4;
                pass1_1030_2f1a(uStack18, CONCAT13((param_1 >> 0x8), CONCAT12(param_1, &local_c0)),
                                str_var1(param_1, ppuVar3));
                pass1_1008_612e(local_c4, local_c0, ppuVar3);
                ppuStack160 = ppuVar3;
            }
            iVar7             = ppuStack160 * 0xa;
            uVar8             = (piStack6 >> 0x10);
            (piStack6 + 0x1c) = iVar7;
            (piStack6 + 0x1c) = iVar7 / 0x64;
            puVar10           = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_1, (iVar7 % 0x64), unaff_DI);
            puStack194        = (puVar10 >> 0x10);
            local_c4          = puVar10;
            local_c0          = globals->PTR_LOOP_1050_13ae;
            u_var2             = 0x84;
            puVar10           = mixed_1010_20ba(globals->u16_1050_0ed0, 0x9, param_1, puStack194, unaff_DI);
            uStack190         = pass1_1010_65d0(param_1, puVar10, u_var2);
            iStack188         = 0x3c;
            if(local_c0 < 0x3) {
                if(0x0 < uStack190) {
                    iStack188 = 0x5a;
                }
            } else {
                if(uStack190 == 0x1) {
                    iStack188 = 0x44;
                } else {
                    if(uStack190 == 0x2) {
                        iStack188 = 0x4b;
                    } else {
                        if(uStack190 == 0x3) {
                            iStack188 = 0x53;
                        } else {
                            if(uStack190 == 0x4) {
                                iStack188 = 0x5a;
                            }
                        }
                    }
                }
            }
            iVar7             = iStack188 * ppuStack160;
            ppuStack160       = (u8 **)(iVar7 / 0x64);
            puVar4            = (iVar7 % 0x64);
            uVar8             = (piStack6 >> 0x10);
            (piStack6 + 0x1a) = ppuStack160;
            uStack164         = ppuStack160 + (piStack6 + 0x1c);
            u_var2             = uStack164 * 0x6;
            uStack162 = uStack164;
            mem_op_1000_179c(u_var2, puVar4, 0);
            paStack184 = (Struct18 *)str_var1(puVar4, u_var2);
            globals->dat_1050_5f2e = (puVar4 | u_var2);
            if(globals->PTR_LOOP_1050_5f2e == 0x0) {
                (piStack6 + 0x16) = 0x0;
            } else {
                pass1_1000_5586(0x3e38, SEG_1008, uStack164, 0x6, u_var2, puVar4);
                (piStack6 + 0x16) = paStack184;
            }
            uStack170 = uStack162 * 0x2;
            if(globals->_PTR_LOOP_1050_5f2c == 0x0) {
                globals->dat_1050_5f2c = mem_op_1000_160a(globals->PTR_LOOP_1050_5f2e, SEG_1000);
            } else {
            }
            u_var2      = fn_ptr_op_1000_1708(uStack170, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
            paStack174 = (Struct18 *)str_var1(globals->PTR_LOOP_1050_5f2e, u_var2);
            if(globals->_PTR_LOOP_1050_5f2c == 0x0) {
                globals->dat_1050_5f2c = mem_op_1000_160a(globals->PTR_LOOP_1050_5f2e, SEG_1000);
            } else {
            }
            u_var2      = fn_ptr_op_1000_1708(uStack170, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
            paStack178 = (Struct18 *)str_var1(globals->PTR_LOOP_1050_5f2e, u_var2);
            iStack180  = 0x0;
            LAB_1030_4b57:
            uVar5 = uStack162;
            if(iStack180 < uStack162) {
                do {
                    pass1_1008_612e(0x0, iStack156, uVar5);
                    uStack166 = uVar5;
                    pass1_1008_612e(0x0, iStack158, uVar5);
                    iStack220 = 0x0;
                    while(true) {
                        iVar7     = paStack174;
                        uVar8     = (paStack174 >> 0x10);
                        uVar9     = (paStack178 >> 0x10);
                        uStack168 = uVar5;
                        if(iStack180 <= iStack220) {
                            iVar1                = iStack180 * 0x2;
                            (iVar1 + iVar7)      = uStack166;
                            (iVar1 + paStack178) = uVar5;
                            uVar12               = *(piStack6 + 0x16);
                            pass1_1008_3e76((uVar12 & 0xffff0000 | (uVar12 + iStack180 * 0x6)), 0x0, uVar5, (iVar1 + iVar7));
                            iStack180 = iStack180 + 0x1;
                            goto LAB_1030_4b57;
                        }
                        if(((iStack220 * 0x2 + iVar7) == uStack166) && ((iStack220 * 0x2 + paStack178) == uVar5))
                            break;
                        iStack220 = iStack220 + 0x1;
                    }
                } while(true);
            }
            fn_ptr_1000_17ce(paStack174, SEG_1000);
            paStack184 = paStack178;
            fn_ptr_1000_17ce(paStack178, SEG_1000);
        }
    }
    return;
}


void  pass1_1030_23e2(u32 param_1, i16 param_2, u16 param_3, i16 param_4, u8 *param_5, u16 param_6, u16 param_7) {
    void **ppcVar1;
    u32  u_var2;
    bool        bVar3;
    bool        bVar4;
    undefined3  extraout_var;
    u8         *extraout_DX;
    u8         *extraout_DX_00;
    u16         uVar5;
    u16         uVar6;
    u16         uVar7;
    i16         iVar8;
    u16         uVar9;
    u32 *puVar10;
    u16        *puVar11;
    u16         uVar12;
    i16         iStack8;

    uVar9 = (param_1 >> 0x10);
    uVar6 = param_1;
    if((uVar6 + 0x10 + param_3 * 0x2) < 0x0) {
        uVar12 = param_3;
        if(param_2 == 0x0) {
            puVar10 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x31, param_7, param_5, param_6);
            ppcVar1 = (*puVar10 + 0x14);
            (**ppcVar1)(SEG_1010, puVar10, (puVar10 >> 0x10), param_3, param_3 >> 0xf);
            param_5 = extraout_DX_00;
        } else {
            puVar10 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x41, param_7, param_5, param_6);
            ppcVar1 = (*puVar10 + 0x14);
            (**ppcVar1)(SEG_1010, puVar10, (puVar10 >> 0x10), param_3, param_3 >> 0xf);
            param_5 = extraout_DX;
        }
        u_var2                          = (uVar12 + 0x16);
        param_4                        = (u_var2 + 0x4);
        (uVar6 + param_3 * 0x2 + 0x10) = param_4;
    }
    if((uVar6 + 0x10 + param_3 * 0x2) != 0x0) {
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, 0x1, 0x400);
        pass1_1030_2852();
        bVar3   = false;
        iStack8 = param_4;
        if((uVar6 + 0x152) != 0x0) {
            bVar4 = pass1_1030_266c(uVar6, str_var1(param_3, uVar9));
            if(bVar4 != 0x0) {
                iStack8 = param_4 + 0x1;
                bVar3   = true;
            }
        }
        iVar8                  = param_3 * 0x2;
        iStack8                = (uVar6 + iVar8 + 0x10) - iStack8;
        (uVar6 + iVar8 + 0x10) = iStack8;
        if(iStack8 < 0x0) {
            (uVar6 + iVar8 + 0x10) = 0x0;
        }
        uVar7 = param_3 * 0x2;
        if((uVar6 + 0x2ac + uVar7) == 0x0) {
            iVar8           = uVar7 + uVar6;
            (iVar8 + 0x2ac) = 0x1;
            param_5         = ((uVar6 + uVar7 + 0x1a6) + -0x1);
            (iVar8 + 0x1a6) = param_5;
            param_6         = uVar7;
            if((uVar6 + uVar7 + 0x1a6) < 0x0) {
                (iVar8 + 0x1a6) = 0x0;
            }
        }
        if(((uVar6 + 0x10 + param_3 * 0x2) != 0x0) || (uVar7 = uVar6 + 0x1a6, (uVar7 + param_3 * 0x2) != 0x0)) {
            if((uVar6 + 0x10 + param_3 * 0x2) == 0x0) {
                (uVar6 + param_3 * 0x2 + 0x10) = 0x1;
            }
            return;
        }
        uVar12  = param_3;
        puVar11 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x32, param_7, param_5, param_6);
        uVar5   = (puVar11 >> 0x10);
        pass1_1010_6cf8(SEG_1010, puVar11, uVar12, param_7, uVar5, uVar7, param_6);
        pass1_1030_26ac(param_1, param_3, uVar5, param_7);
        if(bVar3) {
            iVar8                         = pass1_1030_28dc(param_1, param_3);
            (uVar6 + iVar8 * 0x2 + 0x19c) = 0x0;
        }
    }
    return;
}


void  pass1_1030_2a2c(Struct678 *param_1, u8 *param_2, i16 param_3, u16 param_4) {
    i16         *pi_var1;
    Struct678 *iVar2;
    u16          u_var2;
    Struct67  *paVar3;
    u16          uVar4;
    i16          iVar5;
    u16          uVar6;
    u16          uVar7;
    u16          uVar8;
    i16          iVar9;

    u_var2 = (param_1 >> 0x10);
    iVar2 = (Struct678 *)param_1;
    if(0x0 < iVar2->field_0x18) {
        pi_var1  = &iVar2->field_0x18;
        *pi_var1 = *pi_var1 + -0x1;
    }
    if(iVar2->field_0x16 == 0x0) {
        iVar2->field_0x16 = 0x1;
    }
    if(iVar2->field_0x1a_addr_offset == 0x0) {
        iVar2->field_0x1a_addr_offset = 0x2;
    }
    if(iVar2->field_0x18 < 0x1) {
        iVar2->field_0x16 = 0x2;
        iVar2->field_0x1a_addr_offset = 0x1;
        uVar8             = 0x0;
        iVar9             = 0x21;
        uVar6             = 0x1;
        uVar7             = 0x0;
        uVar4             = 0x0;
        iVar5             = 0x0;
        u_var2             = 0x0;
        paVar3            = (Struct67 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_4, param_2, param_3);
        post_win_msg_1008_a0e4(paVar3,
                               str_var1(uVar4, u_var2), iVar5, uVar6,
                               str_var1(uVar8, uVar7), iVar9, SEG_1008, param_4);
    }
    return;
}


u16 * struct_1030_17ce(u16 *param_1, u32 param_2, u32 param_3) {
    Struct75 *paVar1;
    u32 u_var2;
    u16 uVar3;
    Struct343 *iVar3;

    iVar3 = (Struct343 *) param_1;
    uVar3 = (param_1 >> 0x10);
    paVar1 = struct_1030_1628(param_1);
    &iVar3->field_0xc = 0x0;
    param_1->fld0_addr_table = addr_table_1030_1a16;//0x1a16;
    iVar3->fld2_segment = SEG_1030;
    if ((param_3 != 0x0) || (param_2 != 0x0)) {
        mem_op_1000_179c(0x18, (paVar1 >> 0x10), 0);
        if (paVar1 == 0x0) {
            u_var2 = 0x0;
        } else {
            u_var2 = struct_op_1030_1cd8(paVar1, param_2, param_3);
        }
        iVar3->field_0xc = u_var2;
        iVar3->field_0xe = (u_var2 >> 0x10);
    }
    return param_1;
}


u16 * pass1_1030_183c(u16 *param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u16 param_6, u8 *param_7) {
    u32 uVar1;
    u16 u_var2;
    Struct351 *iVar2;

    iVar2 = (Struct351 *) param_1;
    u_var2 = (param_1 >> 0x10);
    pass1_1030_165e(param_1, param_4, param_5, param_7);
    &iVar2->field_0xc = 0x0;
    param_1->fld0_addr_table = addr_table_1030_1a16;//0x1a16;
    iVar2->fld2_segment = SEG_1030;
    if ((param_3 != 0x0) || (param_2 != 0x0)) {
        mem_op_1000_179c(0x18, param_7, 0);
        if ((param_7 | param_6) == 0x0) {
            uVar1 = 0x0;
        } else {
            uVar1 = struct_op_1030_1cd8(str_var1(param_7, param_6), param_2, param_3);
        }
        iVar2->field_0xc = uVar1;
        iVar2->field_0xe = (uVar1 >> 0x10);
    }
    return param_1;
}
