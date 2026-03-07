
#include "struct_ops_4.h"

#include "address_tables/function_tables.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_20.h"
#include "struct_43.h"
#include "struct_ops_3.h"
#include "structs/structs_2xx/structs_20x.h"
#include "structs/structs_2xx/structs_26x.h"
#include "structs/structs_6xx/struct_626.h"
#include "structs/structs_6xx/struct_627.h"
#include "structs/structs_6xx/structs_63x.h"
#include "structs/structs_6xx/structs_64x.h"
#include "sys_ops/sys_ops_7.h"
#include "unk/unk_15.h"

u16 * struct_1028_406c(u16 *param_1)

{
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1028_42ec;//0x42ec;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_4354(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1028_446a;//0x446a;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_44d2(u16 *param_1) {
    u16 uVar1;

    struct_1028_b354(param_1);
    uVar1 = (param_1 >> 0x10);
    (param_1 + 0x20) = 0x0;
    param_1->field_0x0 = addr_table_1028_4836;//0x4836;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_489e(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1028_4942;//&PTR_LOOP_1050_4942;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_49aa(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1028_4b1c;//0x4b1c;
    param_1->field_0x2 = SEG_1028;
    pass1_1000_4906((Struct20 *) (param_1 & 0xffff0000 | (param_1 + 0x20)), 0x0, 0xa);
    return param_1;
}


u16 * struct_1028_4b84(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1028_5070;//s_SCi16ernalPutBldg2_site_0x_08lx__1050_506f + 0x1;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


void  pass1_1028_4db2(u16 param_1, u16 param_2, i16 param_3, u8 *param_4, i16 param_5, u16 param_6, u8 param_7)

{
    BOOL16     BVar1;
    i16       *piVar2;
    u16        extraout_DX;
    u16       *puVar3;
    i16       *piVar4;
    u16        uVar5;
    u16       *puVar6;
    u16        uVar7;
    u8         local_14e[0x124];
    u32        uStack42;
    u32 uStack38;
    i16        local_22;
    u8         local_20[0x2];
    u8         local_1e[0x2];
    u32        local_1c;
    i16        iStack24;
    u32 uStack22;
    i16       *piStack18;
    u16        uStack16;
    i16        local_e;
    u16        local_c;
    u32        uStack10;
    u16       *pu_stack6;

    BVar1 = pass1_1008_c6ae(globals->dat_1050_06e0, (param_1 + 0xc), 0x29);
    if(BVar1 != 0x0)
    {
        pass1_1028_bd38(str_var1(param_2, param_1), param_4, param_6);
        if((param_3 == 0x0) && ((param_1 + 0xc) == 0x13))
        {
            puVar3  = mixed_1010_20ba(globals->u16_1050_0ed0, 0x8, param_6, param_4, param_5);
            param_4 = (puVar3 >> 0x10);
            pass1_1010_988c(puVar3, (param_1 + 0xc));
        }
        pu_stack6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_6, param_4, param_5);
        uStack16 = (pu_stack6 >> 0x10);
        uStack10 = *(pu_stack6 + 0x20);
        puVar6   = &local_c;
        piVar2   = &local_e;
        piVar4   = piVar2;
        uVar5    = param_6;
        uVar7    = param_6;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uStack10, (uStack10 >> 0x10));
        piStack18 = piVar2;
        pass1_1030_5b1c(
          str_var1(uStack16, piVar2), str_var1(uVar5, piVar4), str_var1(uVar7, puVar6));
        pass1_1028_b58e(str_var1(param_2, param_1));
        uStack22 = str_var1(extraout_DX, piVar2);
        local_1c = *(piVar2 + 0x6);
        iStack24 = piVar2[0x8];
        pass1_1028_c8ee(param_6, param_1, param_2, 0x1, str_var1(param_6, &local_1c));
        pass1_1008_3eb4(str_var1(param_6, &local_1c),
                        str_var1(param_6, &local_22),
                        str_var1(param_6, local_20),
                        str_var1(param_6, local_1e));
        if(local_e < local_22)
        {
            pass1_1030_5b3e(str_var1(uStack16, piStack18), local_22, local_c);
            pass1_1030_5b1c(str_var1(uStack16, piStack18),
                            str_var1(param_6, &local_e),
                            str_var1(param_6, &local_c));
        }
        uStack38 = (uStack22 + 0x2e);
        uStack42 = *(uStack38 + 0x4);
        struct_op_1028_87f0(param_6, param_7, (Struct97 *)str_var1(param_6, local_14e), 0x0, 0x0, 0x62, &local_1c, param_6, uStack42, uStack10);
        fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_6, local_14e));
        pass1_1028_ccd0(param_7, param_6, str_var1(param_2, param_1), str_var1(param_6, &local_1c));
    }
    return;
}


u32  pass1_1028_4faa(u32 param_1, u16 param_2)

{
    u16         uVar1;
    u32 *pu_var2;
    u16         uVar3;
    u32         uVar4;
    u32  local_c;
    u16         uStack8;
    u32  u_stack6;

    uVar1 = pass1_1028_4f62(param_1);
    if(uVar1 != 0x0)
    {
        return param_1;
    }
    u_stack6 = pass1_1028_b58e(param_1);
    local_c = (u_stack6 + 0xc);
    uStack8 = 0x0;
    uVar4   = pass1_1028_bb24(param_1);
    uVar3   = (uVar4 >> 0x10);
    pu_var2  = &local_c;
    pass1_1030_627e(param_2, pu_var2, uVar3, globals->_PTR_LOOP_1050_5740,
                    str_var1(param_2, pu_var2), uVar4 & 0xffff | uVar3 << 0x10);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, pu_var2, uVar3);
    if((uVar3 | pu_var2) == 0x0)
    {
        return 0x0;
    }
    uVar4 = struct_op_1030_73a8(str_var1(uVar3, pu_var2));
    return uVar4;
}


u16 * struct_1028_3484(u16 *param_1) {
    u8 *in_DX;

    struct_1028_0068(param_1, in_DX);
    param_1->field_0x0 = addr_table_1028_34f6;//0x34f6;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_355e(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1028_3608;//0x3608;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_3670(u16 *param_1, u8 *param_2, u16 param_3, u16 param_4) {
    struct_1028_37a6(param_1, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1028_373e;//0x373e;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_3e94(u16 *param_1) {
    u16 uVar1;

    struct_1028_b354(param_1);
    uVar1 = (param_1 >> 0x10);
    (param_1 + 0x20) = 0x0;
    param_1->field_0x0 = addr_table_1028_4004;//0x4004;
    param_1->field_0x2 = SEG_1028;
    pass1_1028_3fa2(param_1 & 0xffff | uVar1 << 0x10);
    return param_1;
}


u16 * struct_1028_1bbc(u16 *param_1) {
    Struct190 *iVar1;
    u16 uVar1;

    struct_1028_b354(param_1);
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct190 *) param_1;
    iVar1->field_0x20 = 0x0;
    iVar1->field_0x22 = 0x0;
    param_1->field_0x0 = addr_table_1028_1eee;//0x1eee;
    iVar1->field_0x2 = SEG_1028;
    return param_1;
}


u16  pass1_1028_1e14(u16 param_1, u16 param_2, i16 param_3, u16 *param_4, long param_5, u16 param_6, u16 param_7, u16 param_8)

{
    i16 iVar1;
    u16 u_var2;
    u32 uVar3;

    pass1_1030_627e(param_8, param_6, param_7, globals->_PTR_LOOP_1050_5740, param_4, param_5);
    u_var2 = param_7 | param_6;
    if(u_var2 != 0x0)
    {
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_6, param_7);
        if((u_var2 | param_6) != 0x0)
        {
            uVar3 = struct_op_1030_73a8(str_var1(u_var2, param_6));
            if(uVar3 != 0x0)
            {
                iVar1 = (uVar3 + 0xc);
                if(((iVar1 == 0x18) || (iVar1 == 0x3f)) || (iVar1 == param_3))
                {
                    return 0x1;
                }
            }
        }
    }
    return 0x0;
}


u16  pass1_1028_21ba(u16 param_1, u16 param_2, u16 *param_3, long param_4, u16 param_5, u16 param_6, u16 param_7)

{
    u16 uVar1;
    u32 u_var2;

    pass1_1030_627e(param_7, param_5, param_6, globals->_PTR_LOOP_1050_5740, param_3, param_4);
    uVar1 = param_6 | param_5;
    if(uVar1 != 0x0)
    {
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_5, param_6);
        if((uVar1 | param_5) != 0x0)
        {
            u_var2 = struct_op_1030_73a8(str_var1(uVar1, param_5));
            if((u_var2 != 0x0) && ((u_var2 + 0xc) == 0x40))
            {
                return 0x1;
            }
        }
    }
    return 0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_2220(u16 param_1, u16 param_2, i16 param_3, u16 *param_4, long param_5, u16 param_6, u16 param_7, u16 param_8)

{
    i16 iVar1;
    u16 u_var2;
    u32 uVar3;

    pass1_1030_627e(param_8, param_6, param_7, globals->_PTR_LOOP_1050_5740, param_4, param_5);
    u_var2 = param_7 | param_6;
    if(u_var2 != 0x0)
    {
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_6, param_7);
        if((u_var2 | param_6) != 0x0)
        {
            uVar3 = struct_op_1030_73a8(str_var1(u_var2, param_6));
            if((uVar3 != 0x0) && ((iVar1 = (uVar3 + 0xc), iVar1 == 0x40 || (iVar1 == param_3))))
            {
                return 0x1;
            }
        }
    }
    return 0x0;
}


u16 * struct_1028_25da(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1028_264c;//s_fem16_wav_1050_2644 + 0x8;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_26b4(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1028_2788;//0x2788;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_27f0(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1028_2a92;//0x2a92;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_2afa(u16 *param_1) {
    struct_1030_dc96(param_1);
    param_1->field_0x0 = addr_table_1028_2b74;//0x2b74;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_2bdc(u16 *param_1) {
    struct_1028_0954(param_1);
    param_1->field_0x0 = addr_table_1028_341c;//0x341c;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_0b42(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1028_0bbc;//0xbbc;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1028_0c24(u16 *param_1) {
    Struct191 *iVar1;
    u16 uVar1;

    struct_1028_b354(param_1);
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct191 *) param_1;
    iVar1->field_0x20 = 0x0;
    iVar1->field_0x22 = 0x0;
    param_1->field_0x0 = addr_table_1028_1724;//s_480_bmp_1050_1721 + 0x3;
    iVar1->field_0x2 = SEG_1028;
    return param_1;
}


u32  pass1_1028_121e(u32 param_1, u16 param_2)

{
    bool        bVar1;
    u8          extraout_AH;
    u32 *pu_var2;
    u16         uVar3;
    u32         uVar4;
    u32  local_c;
    u16         uStack8;
    u32  u_stack6;

    bVar1 = pass1_1028_11de(param_1);
    if(CONCAT11(extraout_AH, bVar1) != 0x0)
    {
        return param_1;
    }
    u_stack6 = pass1_1028_b58e(param_1);
    local_c = (u_stack6 + 0xc);
    uStack8 = 0x0;
    uVar4   = pass1_1028_bb24(param_1);
    uVar3   = (uVar4 >> 0x10);
    pu_var2  = &local_c;
    pass1_1030_627e(param_2, pu_var2, uVar3, globals->_PTR_LOOP_1050_5740,
                    str_var1(param_2, pu_var2), uVar4 & 0xffff | uVar3 << 0x10);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, pu_var2, uVar3);
    if((uVar3 | pu_var2) == 0x0)
    {
        return 0x0;
    }
    uVar4 = struct_op_1030_73a8(str_var1(uVar3, pu_var2));
    return uVar4;
}


u16 * struct_1028_178c(u16 *param_1) {
    struct_1030_dc96(param_1);
    param_1->field_0x0 = addr_table_1028_1b54;//0x1b54;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * struct_1020_e8f6(u16 *param_1) {
    u16 uVar1;

    struct_1030_dc96(param_1);
    uVar1 = (param_1 >> 0x10);
    (param_1 + 0x24) = 0x0;
    param_1->field_0x0 = addr_table_1020_eef6;//0xeef6;
    param_1->field_0x2 = SEG_1020;
    return param_1;
}

u16 * struct_1028_0954(u16 *param_1) {
    Struct185 *iVar1;
    u16 uVar1;

    struct_1028_b354(param_1);
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct185 *) param_1;
    iVar1->field_0x20 = 0x0;
    param_1->field_0x0 = addr_table_1028_0ada;//0xada;
    iVar1->field_0x2 = SEG_1028; // &USHORT_1050_1028;
    iVar1->field_0xe = 0x4b;
    return param_1;
}

u16 * struct_1020_d866(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1020_d8ec;//0xd8ec;
    param_1->field_0x2 = SEG_1020;
    return param_1;
}

u16 * struct_1020_e7fa(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1020_e88e;//0xe88e;
    param_1->field_0x2 = SEG_1020;
    return param_1;
}

u16 * struct_1020_c9ea(u16 *param_1) {
    struct_1028_0954(param_1);
    param_1->field_0x0 = addr_table_1020_cc7c;//0xcc7c;
    param_1->field_0x2 = SEG_1020;
    return param_1;
}

u16 * struct_1020_cce4(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1020_cd7e;//0xcd7e;
    param_1->field_0x2 = SEG_1020;
    return param_1;
}

u16 * struct_1020_cde6(u16 *param_1) {
    struct_1028_0954(param_1);
    param_1->field_0x0 = addr_table_1020_d004;//0xd004;
    param_1->field_0x2 = SEG_1020;
    return param_1;
}

u16 * struct_1020_d06c(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1020_d314;//0xd314;
    param_1->field_0x2 = SEG_1020;
    return param_1;
}

u16 * struct_1020_d37c(u16 *param_1) {
    u16 uVar1;

    struct_1028_b354(param_1);
    uVar1 = (param_1 >> 0x10);
    (param_1 + 0x20) = 0x0;
    param_1->field_0x0 = addr_table_1020_d53e;//0xd53e;
    param_1->field_0x2 = SEG_1020;
    return param_1;
}

u16 * struct_1020_d5a6(u16 *param_1) {
    struct_1028_b354(param_1);
    param_1->field_0x0 = addr_table_1020_d7fe;//0xd7fe;
    param_1->field_0x2 = SEG_1020;
    return param_1;
}

void  struct_1020_c444(Struct75 *param_1, u32 param_2, u32 param_3)

{
    Struct75 *iVar1;
    Struct75 *uVar1;

    struct_op_1030_1cd8(param_1, param_2, param_3);
    uVar1                 = (param_1 >> 0x10);
    iVar1                 = param_1;
    (iVar1 + 0x1)         = 0x0;
    &iVar1[0x1].field_0x4 = 0x0;
    param_1->field_0x0    = addr_table_1020_c834;//0xc834;
    iVar1->field_0x2      = SEG_1020;
    return;
}

void  pass1_1020_afc4(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 *param_5, long param_6)

{
    u32 *puVar1;
    u16         u_var2;
    u16         uVar3;
    u32         uVar4;
    u8        bStack27;
    u32  local_a;
    u32  u_stack6;

    puVar1 = &local_a;
    pass1_1030_64ce(param_1, puVar1, param_2, globals->_PTR_LOOP_1050_5740, param_5, param_6,
                    str_var1(param_1, puVar1));
    u_stack6  = *puVar1;
    uVar3    = (puVar1 + 0x2);
    bStack27 = (u8)(u_stack6 >> 0x18);
    u_var2    = bStack27;
    if(bStack27 == 0x0)
    {
        return;
    }
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_stack6, uVar3);
    uVar4 = struct_op_1030_73a8(str_var1(uVar3, u_var2));
    uVar3 = (uVar4 >> 0x10);
    if((uVar3 | uVar4) != 0x0)
    {
        switch((uVar4 + 0xc))
        {
        case 0x1:
            break;
        case 0x2:
            break;
        case 0x3:
            break;
        case 0x4:
            break;
        case 0x5:
            break;
        case 0x6:
            break;
        case 0x7:
            return;
        case 0x8:
            return;
        case 0x9:
            return;
        }
        return;
    }
    return;
}


void  pass1_1020_289a(u16 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    i16 iVar1;
    u16 u_var2;

    struct_1020_790e(param_1, s_SCPOPMENU_1050_427c, param_2, param_3, param_4);
    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    (iVar1 + 0xf2) = 0x0;
    (iVar1 + 0xf6) = 0x0;
    (iVar1 + 0xfa) = 0x0;
    (iVar1 + 0xfc) = 0x0;
    param_1->field_0x0 = addr_table_1020_2e4a;//0x2e4a;
    (iVar1 + 0x2) = SEG_1020;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (iVar1 + 0x5b)), s_VrMode_1050_4286);
    (iVar1 + 0xac) = 0x44c00000;
    return;
}

void  struct_1020_0baa(u16 *param_1, u16 param_2, u8 *param_3, u16 param_4)

{
    u8          *puVar1;
    Struct276 *iVar2;
    i16 unaff_DI;
    u16 u_var2;
    u16 *puVar3;
    u16 *puVar4;
    u16 *puVar5;
    u16 uVar6;

    u_var2 = (param_1 >> 0x10);
    iVar2 = (Struct276 *) param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar2->field_0x2 = SEG_1008;
    param_1->field_0x0 = addr_table_1008_3aa0[2];//0x3aa8;
    iVar2->field_0x2 = SEG_1008;
    iVar2->field_0x4 = param_2;
    param_1->field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    iVar2->field_0x2 = SEG_1008;
    &iVar2->field_0x6 = 0x0;
    iVar2->field_0xa = 0x0;
    iVar2->field_0xc = 0x0;
    param_1->field_0x0 = addr_table_1020_0dbc;//0xdbc;
    iVar2->field_0x2 = SEG_1020;
    puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x7, param_4, param_3, unaff_DI);
    puVar1 = (puVar3 >> 0x10);
    iVar2->field_0x6 = puVar3;
    iVar2->field_0x8 = puVar1;
    puVar5 = &iVar2->field_0xa;
    puVar4 = &iVar2->field_0xc;
    uVar6 = u_var2;
    puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x48, param_4, puVar1, unaff_DI);
    pass1_1008_3e94((puVar3 & 0xffff0000 | (puVar3 + 0xe)),
                    str_var1(u_var2, puVar4),
                    str_var1(uVar6, puVar5));
    return;
}

Struct20 * struct_1018_6d02(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0xb, 0x9c, 0x8b, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[935];//0xa27e;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6d38(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0xc, 0x9d, 0xd0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2144];//0xb562;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6d6e(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0xd, 0x9e, 0xd1, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[273];//0x9822;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6da4(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0xe, 0x9f, 0xd2, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1481];//0xab06;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6dda(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0xf, 0xa0, 0xd4, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2690];//0xbdea;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6e10(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x10, 0xa1, 0xda, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[818];//0xa0aa;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6e46(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x11, 0xa2, 0xdc, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2027];//0xb38e;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6e7c(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x12, 0xa3, 0xd3, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[156];//0x964e;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6eb2(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x13, 0xa4, 0xdb, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1364]//0xa932;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6ee8(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x14, 0xa5, 0xa5, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2573];//0xbc16;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6f1e(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x15, 0xa7, 0xb2, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[662];//0x9e3a;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6f54(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x16, 0xa8, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1871];//0xb11e;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6f8a(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x17, 0xaf, 0xc0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de;//0x93de;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6fc0(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x18, 0xb0, 0xc1, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1208];//0xa6c2;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_6ff6(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x19, 0xb1, 0x80, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2417];//0xb9a6;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_702c(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1ec, 0x1a, 0xb2, 0xc3, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[545];//0x9c66;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7062(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x1b, 0xb3, 0xc4, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1754];//0xaf4a;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7098(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x1c, 0xb4, 0xd8, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2963];//0xc22e;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_70ce(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x1d, 0xb5, 0x7b, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1091];//0xa4ee;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7104(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x1e, 0xb6, 0xd9, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2300];//0xb7d2;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_713a(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x1f, 0xb7, 0x7d, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[429];//0x9a92;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7170(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x21, 0xb9, 0xdd, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1637];//0xad76;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_71a6(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x23, 0xd3, 0xd6, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2222];//0xb69a;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_71dc(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1ed, 0x24, 0xd4, 0xd7, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[351];//0x995a;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7212(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x25, 0xe9, 0xee, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1052];//0xa452;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7248(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x63, 0xa6, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2846];//0xc05a;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_727e(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x64, 0xa9, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[974];//0xa31a;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_72b4(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x65, 0xaa, 0xbb, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2183];//0xb5fe;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_72ea(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x66, 0xab, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[312];//0x98be;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7320(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x67, 0xac, 0xbd, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1520];//0xaba2;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7356(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x68, 0xad, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2729];//0xbe86;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_738c(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x69, 0xae, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1559];//0xac3e;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_73c2(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x35, 0xba, 0x81, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2768];//0xbf22;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_73f8(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x39, 0xbb, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[857];//0xa146;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_745e(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x22, 0xbc, 0xd5, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2066];//0xb42a;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7494(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x36, 0xbd, 0xcd, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[195];//0x96ea;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_74ca(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x37, 0xbe, 0x83, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1403];//0xa9ce;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7500(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x38, 0xbf, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2612];//0xbcb2;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7536(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x3a, 0xc0, 0x85, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[740];//0x9f72;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_756c(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1e2, 0x3b, 0xc1, 0x86, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1949];//0xb256;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * pass1_1018_75a2(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x3c, 0xc2, 0x87, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[78];//0x9516;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * pass1_1018_75d8(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x3d, 0xc3, 0x88, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1286];//0xa7fa;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_760e(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)


{
    struct_op_1018_6a0e(param_1, 0x0, 0x3e, 0xc4, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2495];//0xbade;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7644(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x3f, 0xc5, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[584];//0x9d02;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_767a(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x40, 0xc6, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1793];//0xafe6;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_76b0(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x41, 0xc7, 0x8d, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[3002];//0xc2ca;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_76e6(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x42, 0xc8, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1130];//0xa58a;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_771c(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x43, 0xc9, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2339];//0xb86e;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7752(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x44, 0xcc, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[3080];//0x9b2e;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7788(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x45, 0xcd, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1676];//0xae12;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_77be(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x46, 0xd1, 0x92, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2885]//0xc0f6;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_77f4(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x47, 0xd2, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1013];//0xa3b6;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_782a(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x48, 0xd5, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1598];//0xacda;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7860(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x49, 0xd6, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2807];//0xbfbe;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7896(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1f4, 0x4a, 0xd7, 0x98, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[896];//0xa1e2;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_78cc(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x4b, 0xd8, 0x99, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2105];//0xb4c6;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7902(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x4c, 0xd9, 0xee, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[234];//0x9786;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7938(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x4d, 0xda, 0x9c, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1442];//0xaa6a;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_796e(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x4e, 0xdb, 0x9d, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2651];//0xbd4e;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_79a4(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x4f, 0xdc, 0x9e, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[779];//0xa00e;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_79da(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x50, 0xdd, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1988];//0xb2f2;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7a10(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1d9, 0x51, 0xde, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[117];//0x95b2;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7a46(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x52, 0xdf, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1325];//0xa896;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7a7c(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x53, 0xe0, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2534];//0xbb7a;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7ab2(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1e4, 0x55, 0xe2, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1832];//0xb082;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7ae8(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1e4, 0x56, 0xe3, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[3041];//0xc366;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7b1e(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1da, 0x57, 0xe4, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1169];//0xa626;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7b54(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1d8, 0x58, 0xe5, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2378];//0xb90a;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7b8a(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x59, 0xe6, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[506];//0x9bca;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7bc0(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1ef, 0x5a, 0xe7, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1715];//0xaeae;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7bf6(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x5b, 0xe8, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2924];//0xc192;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7c2c(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x5c, 0xea, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2261];//0xb736;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7c62(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x5d, 0xeb, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[390];//0x99f6;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7c98(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1e6, 0x5e, 0xec, 0xee, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[2456];//0xba42;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7cce(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1da, 0x5f, 0xed, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[701];//0x9ed6;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7d04(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x0, 0x60, 0xee, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1910];//0xb1ba;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7d3a(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1f0, 0x61, 0xef, 0x0, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[39];//0x947a;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


Struct20 * struct_1018_7d70(Struct20 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    struct_op_1018_6a0e(param_1, 0x1f7, 0x62, 0xf0, 0xcc, param_2, param_3, param_4);
    param_1->field_0x0 = addr_table_1018_93de[1247];//0xa75e;
    param_1->field_0x2 = SEG_1018;
    return param_1;
}


void  pass1_1018_620c(u16 *param_1) {
    Struct509 *iVar1;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct509 *) param_1;
    param_1->field_0x0 = addr_table_1018_66c0;//0x66c0;
    iVar1->field_0x2 = SEG_1018;
    param_1->field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    iVar1->field_0x2 = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->field_0x2 = SEG_1008;
    return;
}

void  pass1_1018_673c(u16 *param_1) {
    Struct510 *iVar1;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct510 *) param_1;
    param_1->field_0x0 = addr_table_1018_6880;//0x6880;
    iVar1->fld2_segment = SEG_1018;
    iVar1->field_0xe2 = addr_table_1018_6880[39];//0x691c;
    iVar1->field_0xe4 = SEG_1018;
    pass1_1020_808e(param_1);
}

Struct20 * struct_op_1018_6a0e(Struct20 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5, u16 param_6, u32 param_7, u16 param_8)

{
    i16 iVar1;
    u16 u_var2;

    unk_draw_op_1008_61b2(param_1, param_3, param_6, param_7, param_8);
    u_var2              = (param_1 >> 0x10);
    iVar1              = param_1;
    (iVar1 + 0xea)     = param_5;
    (iVar1 + 0xec)     = param_4;
    (iVar1 + 0xee)     = param_2;
    (iVar1 + 0xf0)     = 0x0;
    param_1->field_0x0 = addr_table_1018_6c66;//0x6c66;
    (iVar1 + 0x2)      = SEG_1018;
    (iVar1 + 0xe0)     = 0x1;
    (iVar1 + 0xe2)     = 0x0;
    (iVar1 + 0xe4)     = 0x0;
    (iVar1 + 0xe6)     = 0x1df027f;
    return param_1;
}

void  pass1_1018_4aaa(i16 param_1, u16 param_2, u16 param_3, u8 *param_4, u16 param_5)

{
    struct_op_1018_4cda(param_1, param_2, param_3);
    param_1 =  addr_table_1018_4b06;//0x4b06;
    param_1->fld2_segment = SEG_1018;
    pass1_1018_4dce(str_var1(param_2, param_1), 0x9a, param_4, param_5);
    globals->_PTR_LOOP_1050_4230 = str_var1(param_2, param_1);
}

void  struct_op_1018_4cda(i16 param_1, u16 param_2, u16 param_3)

{
    struct_op_1010_1d48((Struct79 *)str_var1(param_2, param_1), param_3);
    (param_1 + 0xa)            = 0x0;
    (param_1 + 0xe)            = 0x0;
    (param_1 + 0x12)           = 0x0;
    (param_1 + 0x14)           = 0x0;
    (param_1 + 0x16)           = 0x0;
    (param_1 + 0x18)           = 0x1;
    (param_1 + 0x1a)           = 0x0;
    param_1 =  addr_table_1018_5058;//0x5058; // s_SCi16ernalPutBldg_site_0x_08lx__b_1050_5046 + 0x12;
    param_1->fld2_segment = SEG_1018;
}

void  pass1_1018_5070(Struct641 *param_1, u16 param_2, u16 param_3)

{
    struct_op_1010_1d48((Struct79 *)str_var1(param_2, param_1), param_3);
    param_1->field_0xa         = 0x0;
    param_1->field_0xe         = 0x0;
    param_1->field_0x12        = 0x0;
    param_1->field_0x16        = 0x0;
    param_1 =  addr_table_1018_56ce[1];//0x56d2;
    param_1->field_0x2         = SEG_1018;
}

u16 * pass1_1018_56e6(i16 param_1, u16 param_2, u16 param_3)

{
    struct_op_1010_1d48((Struct79 *)str_var1(param_2, param_1), param_3);
    (param_1 + 0xa)            = 0x0;
    param_1 =  addr_table_1018_5830;//0x5830;
    param_1->fld2_segment      = SEG_1018;
    return param_1;
}

void  pass1_1018_58b6(u16 *param_1) {
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    param_1->field_0x0 = addr_table_1018_5a62;//0x5a62; //s_Alloc__s_1050_5a5b + 0x7;
    (iVar1 + 0x2) = SEG_1018;
    (iVar1 + 0xe2) = addr_table_1018_5a62[39];//0x5afe;
    (iVar1 + 0xe4) = SEG_1018;
    pass1_1020_808e(param_1);
}

void  struct_1018_4720(u16 *param_1, u32 param_2, u32 param_3) {
    Struct204 *iVar1;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct204 *) param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->field_0x2 = SEG_1008;
    iVar1->field_0x4 = param_3;
    iVar1->field_0x8 = param_2;
    iVar1->field_0xc = 0x0;
    param_1->field_0x0 = addr_table_1018_4a8a[7];//0x4aa6; //&PTR_LOOP_1050_4aa6;
    iVar1->field_0x2 = SEG_1018;
}

u16 * struct_1018_4790(u16 *param_1, u32 param_2, u32 param_3, u16 param_4) {
    Struct266 *iVar1;
    u16 uVar1;

    struct_1018_4720(param_1, param_2, param_3);
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct266 *) param_1;
    iVar1->field_0xe = param_4;
    param_1->field_0x0 = addr_table_1018_4a8a[2];//0x4a92;
    iVar1->field_0x2 = SEG_1018;
    iVar1->field_0xc = 0x1;
    return param_1;
}


void  struct_1018_47c8(u16 *param_1, u32 param_2, u32 param_3, u16 param_4, u32 param_5) {
    Struct264 *iVar1;
    u16 uVar1;

    struct_1018_4720(param_1, param_2, param_3);
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct264 *) param_1;
    iVar1->field_0xe = param_5;
    iVar1->field_0x12 = param_4;
    param_1->field_0x0 = addr_table_1018_4a8a[4];//0x4a9a; //&PTR_LOOP_1050_4a9a;
    iVar1->field_0x2 = SEG_1018;
    iVar1->field_0xc = 0x2;
}


void  pass1_1018_4808(u16 *param_1, u32 param_2, u32 param_3, u32 param_4) {
    i16 iVar1;
    u16 u_var2;

    struct_1018_4720(param_1, param_2, param_3);
    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    *(iVar1 + 0xe) = param_4;
    param_1->field_0x0 = addr_table_1018_4a8a[6];//0x4aa2; &PTR_LOOP_1050_4aa2;
    (iVar1 + 0x2) = SEG_1018;
    (iVar1 + 0xc) = 0x3;
}


u16 * struct_1018_4842(u16 *param_1, u32 param_2, u32 param_3, u16 param_4) {
    Struct265 *iVar1;
    u16 uVar1;

    struct_1018_4720(param_1, param_2, param_3);
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct265 *) param_1;
    iVar1->field_0xe = param_4;
    iVar1->field_0x10 = 0x0;
    param_1->field_0x0 = addr_table_1018_4a8a[1];//0x4a8e; &PTR_LOOP_1050_4a8e;
    iVar1->field_0x2 = SEG_1018;
    iVar1->field_0xc = 0x4;
    return param_1;
}

u16 * struct_1018_48b0(u16 *param_1, u32 param_2, u32 param_3, u16 param_4) {
    Struct207 *iVar1;
    u16 uVar1;

    struct_1018_4720(param_1, param_2, param_3);
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct207 *) param_1;
    iVar1->field_0xe = param_4;
    param_1->field_0x0 = addr_table_1018_4a8a[3];//0x4a96; // &PTR_LOOP_1050_4a96;
    iVar1->field_0x2 = SEG_1018;
    iVar1->field_0xc = 0x5;
    return param_1;
}


u16 * struct_1018_48e8(u16 *param_1, u32 param_2, u32 param_3, u16 param_4) {
    i16 iVar1;
    u16 u_var2;

    struct_1018_4720(param_1, param_2, param_3);
    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    (iVar1 + 0xe) = param_4;
    param_1->field_0x0 = addr_table_1018_4a8a[5];//0x4a9e;
    (iVar1 + 0x2) = SEG_1018;
    (iVar1 + 0xc) = 0x6;
    return param_1;
}


void  struct_1018_4920(u16 *param_1, u32 param_2, u32 param_3, u32 param_4) {
    Struct203 *iVar1;
    u16 uVar1;

    struct_1018_4720(param_1, param_2, param_3);
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct203 *) param_1;
    iVar1->field_0xe = param_4;
    param_1->field_0x0 = addr_table_1018_4a8a;//0x4a8a; // &PTR_LOOP_1050_4a8a;
    iVar1->field_0x2 = SEG_1018;
    iVar1->field_0xc = 0x7;
    return;
}
void  struct_1018_2b10(Struct55 *param_1, u16 param_2, u16 param_3)

{
    u32  *puVar1;
    void **ppcVar2;
    u16         *puVar3;
    u16          uVar4;
    i16          unaff_DI;
    u16         *puVar5;
    Struct43  *paVar6;
    u32          uVar7;
    u16          uVar8;
    Struct626 *uVar9;

    uVar9                       = (Struct626 *)param_1;
    uVar8                       = (param_1 >> 0x10);
    puVar5                      = get_sys_metrics_1018_4b1e(param_1, 0x1, param_2);
    uVar9->field_0x20           = addr_table_1008_380a[36]; // 0x389a
    uVar9->field_0x22           = SEG_1008;
    uVar9->field_0x20           = addr_table_1008_3aa0[2];//0x3aa8;
    uVar9->field_0x22           = SEG_1008;
    uVar9->field_0x24           = (Struct76 *)0x0;
    uVar9->field_0x174          = 0x0;
    uVar9->field_0x176          = 0x0;
    uVar9->field_0x178          = 0x0;
    uVar9->field_0x17a          = 0x0;
    uVar9->field_0x17e          = 0x0;
    uVar9->field_0x182          = 0x0;
    uVar9->field_0x186          = 0x0;
    param_1->field_0x0          = addr_table_1018_32d8;//0x32d8;
    uVar9->field_0x2            = SEG_1018;
    uVar9->field_0x20           = addr_table_1018_32d8[15];//0x3314;
    uVar9->field_0x22           = SEG_1018;
    puVar5                      = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_3, (puVar5 >> 0x10), unaff_DI);
    &uVar9->field_0x182         = puVar5;
    (&uVar9->field_0x182 + 0x2) = (puVar5 >> 0x10);
    if(param_1 == (Struct55 *)0x0)
    {
        puVar3 = 0x0;
        uVar4  = 0x0;
    }
    else
    {
        puVar3 = &uVar9->field_0x20;
        uVar4  = uVar8;
    }
    puVar1  = uVar9->field_0x182;
    ppcVar2 = (*uVar9->field_0x182 + 0x4);
    (**ppcVar2)(SEG_1010, puVar1, (puVar1 >> 0x10), 0x0, puVar3, uVar4);
    puVar1                     = uVar9->field_0x182;
    uVar9->field_0x17a         = (puVar1 + 0x24);
    paVar6                     = unk_io_op_1010_830aglobals->dat_1050_14cc, 0x6e, param_3);
    &uVar9->field_0x24         = paVar6;
    (&uVar9->field_0x24 + 0x2) = (paVar6 >> 0x10);
    uVar9->field_0x28          = 0x0;
    uVar7                      = pass1_1008_4772(uVar9->field_0x24);
    uVar4                      = (uVar7 >> 0x10);
    pass1_1018_4b78(param_1, param_3);
    uVar9->field_0x16c = 0x1;
    uVar9->field_0x16e = 0x1;
    uVar9->field_0x170 = (uVar7 + 0x4) + uVar9->field_0x16c;
    uVar9->field_0x172 = (uVar7 + 0x8) + -0x19;
    return;
}

void struct_1018_229c(Globals   *globals,
                      Struct632 *param_1,
                      u8        *param_2,
                      u16        param_3,
                      u8        *param_4,
                      u16        param_5)

{
    i16        *pi_var1;
    Struct43 *p_var2;
    i16         iStack4;

    struct_op_1018_4cda(param_1, param_2, param_3);
    param_1->field_0x1c_fn_ptr        = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x1e        = SEG_1008;
    param_1->field_0x1c_fn_ptr        = addr_table_1008_3aa0[2];//0x3aa8;
    param_1->field_0x1e        = SEG_1008;
    param_1->field_0x20        = 0x0;
    param_1->field_0x24        = 0x0;
    param_1->field_0x26        = 0x0;
    &param_1->field_0x2a       = 0x0;
    param_1->field_0x3e        = 0x0;
    param_1->field_0x40        = 0x0;
    param_1->field_0x42        = 0x0;
    param_1->field_0x44        = 0x0;
    &param_1->field_0x6e       = 0x0;
    param_1->field_0x0 =  addr_table_1018_2ada;//0x2ada;
    param_1->field_0x2         = SEG_1018;
    param_1->field_0x1c_fn_ptr        = addr_table_1018_2ada[6];//0x2af2; // s_fem132_wav_1050_2aec + 0x6;
    param_1->field_0x1e        = SEG_1018;
    globals->dat_1050_4230              = param_1;
    globals->dat_1050_4232              = param_2;
    pass1_1018_4dce(param_1, 0x105, param_4, param_5);
    p_var2              = unk_io_op_1010_830a(globals->dat_1050_14cc, 0x1a8, param_5);
    param_1->field_0x2a = p_var2;
    param_1->field_0x2c = (p_var2 >> 0x10);
    pass1_1000_4906((Struct20 *)str_var1(param_2, &param_1->field_0x2e), 0x0, 0x10);
    pass1_1000_4906((Struct20 *)str_var1(param_2, &param_1->field_0x46), 0x0, 0x28);
    p_var2              = unk_io_op_1010_830a(globals->dat_1050_14cc, 0x6c, param_5);
    param_1->field_0x2e = p_var2;
    param_1->field_0x30 = (p_var2 >> 0x10);
    p_var2              = unk_io_op_1010_830a(globals->dat_1050_14cc, 0x68, param_5);
    param_1->field_0x32 = p_var2;
    param_1->field_0x34 = (p_var2 >> 0x10);
    p_var2              = unk_io_op_1010_830a(globals->dat_1050_14cc, 0x66, param_5);
    param_1->field_0x36 = p_var2;
    param_1->field_0x38 = (p_var2 >> 0x10);
    p_var2              = unk_io_op_1010_830a(globals->dat_1050_14cc, 0x6a, param_5);
    param_1->field_0x3a = p_var2;
    param_1->field_0x3c = (p_var2 >> 0x10);
    p_var2              = unk_io_op_1010_830a(globals->dat_1050_14cc, 0x1cd, param_5);
    param_1->field_0x6e = p_var2;
    param_1->field_0x70 = (p_var2 >> 0x10);
    iStack4             = 0x0;
    do
    {
        p_var2                                 = unk_io_op_1010_830a(globals->dat_1050_14cc, iStack4 + 0x8f, param_5);
        (&param_1->field_0x46 + iStack4 * 0x4) = p_var2;
        (&param_1->field_0x48 + iStack4 * 0x4) = (p_var2 >> 0x10);
        iStack4                                = iStack4 + 0x1;
    } while(iStack4 < 0xa);
    if(param_1 = = 0x0)
    {
        pi_var1  = 0x0;
        param_2 = 0x0;
    }
    else
    {
        pi_var1 = &param_1->field_0x1c_fn_ptr;
    }
    pass1_1008_9262(
      globals->dat_1050_0388, 0x73, str_var1(param_2, pi_var1), pi_var1, param_2);
    return;
}


void  struct_1010_dd5e(u16 param_1, u16 param_2, u32 param_3)

{
    i16   iVar1;
    i16   iVar2;
    u16   uVar3;
    u32   uVar4;
    long *plStack16;

    if(param_3 != 0x0)
    {
        uVar4     = struct_op_1030_73a8(param_3);
        uVar3     = (uVar4 >> 0x10);
        iVar2     = uVar4;
        plStack16 = (long *)(uVar4 & 0xffff0000 | (iVar2 + 0x14U));
        if((uVar3 | iVar2 + 0x14U) != 0x0)
        {
            iVar1 = (iVar2 + 0x12);
            iVar2 = (iVar2 + 0x18);
            if(((((iVar1 == 0x4) || ((((iVar1 == 0x6 && (iVar2 == 0x4)) || (iVar1 == 0x5)) || ((iVar1 == 0x6 && (iVar2 == 0x5)))))) || (iVar1 == 0x8)) || ((iVar1 == 0x6 && (iVar2 == 0x8)))) && (*plStack16 != 0x0))
            {
                return;
            }
        }
    }
}

void pass1_1010_e8f6(Globals *globals, u16 param_1, u16 param_2, u32 param_3, u16 param_4)

{
    u16    uVar1;
    BOOL16 BVar2;
    u16    uVar3;
    u32    uVar4;

    uVar4 = struct_op_1030_73a8(param_3);
    uVar1 = (uVar4 + 0xc);
    BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x13);
    if(BVar2 == 0x0)
    {
        BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x14);
        if(BVar2 == 0x0)
        {
            return;
        }
        uVar4 = pass1_1028_4faa(uVar4, param_4);
        uVar3 = (uVar4 >> 0x10);
        uVar1 = uVar4;
    }
    else
    {
        uVar4 = pass1_1028_121e(uVar4, param_4);
        uVar3 = (uVar4 >> 0x10);
        uVar1 = uVar4;
    }
    pass1_1028_b58e(str_var1(uVar3, uVar1));
}

void  struct_1010_a1d8(Struct627 *param_1, u16 param_2, u16 param_3, u16 param_4)

{
    i16         iVar1;
    void **ppcVar2;
    i16         unaff_DI;
    Struct79 *paVar3;
    u16        *puVar4;
    u16         uStack4;

    paVar3                        = struct_op_1010_1d48((Struct79 *)str_var1(param_2, param_1), param_3);
    param_1->field_0xa            = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0xc            = SEG_1008;
    param_1->field_0xa            = addr_table_1008_3aa0[2];//0x3aa8;
    param_1->field_0xc            = SEG_1008;
    param_1->field_0x138          = 0x0;
    param_1 =  addr_table_1010_e9cc;//0xe9cc;
    param_1->fld2_segment         = SEG_1010;
    param_1->field_0xa            = addr_table_1010_e9cc[4]; //0xe9dc;
    param_1->field_0xc            = SEG_1010;
    puVar4                        = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_4, (paVar3 >> 0x10), unaff_DI);
    &param_1->field_0x138         = puVar4;
    (&param_1->field_0x138 + 0x2) = (puVar4 >> 0x10);
    ppcVar2                       = (*param_1->field_0x138 + 0x4);
    (**ppcVar2)();
    pass1_1000_4906((Struct20 *)str_var1(param_2, &param_1->field_0xa4), 0x0, 0x94);
    pass1_1000_4906((Struct20 *)str_var1(param_2, &param_1->field_0xe), 0x0, 0x96);
    uStack4 = 0x0;
    do
    {
        iVar1          = &param_1->fld0_addr_table + uStack4 * 0x6;
        *(iVar1 + 0xe) = pass1_1010_c7e2;
        (iVar1 + 0x12) = 0x0;
        uStack4        = uStack4 + 0x1;
    } while(uStack4 < 0x19);
    param_1->field_0x4a = pass1_1010_c864;
    param_1->field_0x4e = 0x0;
    param_1->field_0x50 = pass1_1010_cc56;
    param_1->field_0x54 = 0x0;
    param_1->field_0x56 = pass1_1010_cf36;
    param_1->field_0x5a = 0x0;
    param_1->field_0x2c = pass1_1010_d24a;
    param_1->field_0x30 = 0x0;
    param_1->field_0x6e = pass1_1010_d448;
    param_1->field_0x72 = 0x0;
    param_1->field_0x74 = pass1_1010_d5ae;
    param_1->field_0x78 = 0x0;
    param_1->field_0x98 = pass1_1010_d710;
    param_1->field_9c   = 0x0;
}

u16  pass1_1010_a5ac(u16 param_1, u16 param_2, u32 param_3)

{
    u32 uVar1;

    uVar1 = struct_op_1030_73a8(param_3);
    return (uVar1 + 0x20);
}

u16  pass1_1010_acc0(u16 param_1, u16 param_2, u32 param_3)

{
    u32 uVar1;

    uVar1 = struct_op_1030_73a8(param_3);
    if((uVar1 + 0x12) != 0x4)
    {
        return 0x1;
    }
    return 0x0;
}

void  struct_1010_9172(Struct249 *param_1)

{
    u32  *puVar1;
    u16          u_var2;
    void **ppcVar3;
    Struct249 *iVar4;
    u16          uVar4;
    Struct75  *paVar5;
    u32   uVar6;

    uVar4  = (param_1 >> 0x10);
    iVar4  = (Struct249 *)param_1;
    puVar1 = iVar4->field_0x4;
    u_var2  = iVar4->field_0x6;
    paVar5 = str_var1(u_var2, puVar1);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        paVar5  = (**ppcVar3)();
    }
    mem_op_1000_179c(0x18, (paVar5 >> 0x10), 0);
    if(paVar5 == 0x0)
    {
        uVar6 = 0x0;
    }
    else
    {
        uVar6 = struct_op_1030_1cd8(paVar5, 0x5, 0x5);
    }
    iVar4->field_0x4 = uVar6;
    iVar4->field_0x6 = (uVar6 >> 0x10);
}

u16 * pass1_1010_9258(u16 *param_1) {
    struct_1010_383a(param_1);
    param_1->field_0x0 = addr_table_1010_9566[10];//0x958e;
    param_1->field_0x2 = SEG_1010;
    return param_1;
}

void  struct_1010_95aa(Struct629 *param_1, u16 param_2, u16 param_3)

{
    struct_op_1010_1d48((Struct79 *)str_var1(param_2, param_1), param_3);
    param_1->field_0xa         = 0x0;
    param_1->field_0xe         = 0x0;
    param_1->field_0x12        = 0x0;
    param_1->field_0x16        = 0x0;
    param_1->field_0x18        = 0x0;
    param_1->field_0x1a_addr_offset = 0x0;
    param_1->field_0x1c_fn_ptr = 0xa;
    param_1->field_0x1e        = 0x0;
    param_1 =  addr_table_1010_a1c4[1];//0xa1c8;
    param_1->fld2_segment           = SEG_1010;
}

void  struct_1010_6326(Struct630 *param_1, u16 param_2, u16 param_3)

{
    struct_op_1010_1d48((Struct79 *)str_var1(param_2, param_1), param_3);
    param_1->field_0xa         = 0x0;
    param_1->field_0xe         = 0x0;
    param_1->field_0x12        = 0x0;
    param_1->field_0x16        = 0x0;
    param_1->field_0x1a_addr_offset = 0x0;
    param_1->field_0x1e        = 0x0;
    param_1->field_0x22        = 0x0;
    param_1 =  addr_table_1010_66f0;//0x66f0;
    param_1->field_0x2         = SEG_1010;
}

u32  pass1_1010_6700(Struct636 *param_1, u16 param_2, u16 param_3)

{
    struct_op_1010_1d48((Struct79 *)str_var1(param_2, param_1), param_3);
    param_1->field_0x148       = 0x33;
    param_1 =  addr_table_1010_6aac;//0x6aac;
    param_1->field_0x2         = SEG_1010;
    pass1_1000_4906((Struct20 *)str_var1(param_2, &param_1->field_0xa), 0x0, 0x114);
    param_1->field_0x32  = 0x1;
    param_1->field_0x40  = 0x1;
    param_1->field_0x46  = 0x1;
    param_1->field_0x4e  = 0x1;
    param_1->field_0x54  = 0x1;
    param_1->field_0x5e  = 0x1;
    param_1->field_0x68  = 0x1;
    param_1->field_0x6c  = 0x1;
    param_1->field_0x74  = 0x1;
    param_1->field_0x78  = 0x1;
    param_1->field_0x7a  = 0x1;
    param_1->field_0x7e  = 0x1;
    param_1->field_0x82  = 0x1;
    param_1->field_0xa2  = 0x1;
    param_1->field_0xa4  = 0x1;
    param_1->field_0xa6  = 0x1;
    param_1->field_0xa8  = 0x1;
    param_1->field_0xae  = 0x1;
    param_1->field_0xb2  = 0x1;
    param_1->field_0xb8  = 0x1;
    param_1->field_0xbe  = 0x1;
    param_1->field_0xc0  = 0x1;
    param_1->field_0xc4  = 0x1;
    param_1->field_0xd4  = 0x1;
    param_1->field_0xda  = 0x1;
    param_1->field_0xe2  = 0x1;
    param_1->field_0xfe  = 0x1;
    param_1->field_0x100 = 0x1;
    param_1->field_0x102 = 0x1;
    param_1->field_0x104 = 0x1;
    param_1->field_0x106 = 0x1;
    param_1->field_0x108 = 0x1;
    pass1_1000_4906((Struct20 *)str_var1(param_2, &param_1->field_0x11e), 0x0, 0x2a);
    param_1->field_0x120 = 0x1;
    param_1->field_0x122 = 0x1;
    param_1->field_0x124 = 0x1;
    param_1->field_0x126 = 0x1;
    param_1->field_0x128 = 0x1;
    param_1->field_0x12c = 0x1;
    param_1->field_0x138 = 0x1;
    return param_1;
}


void  struct_1010_50b2(Struct79 *param_1, u16 param_2, u16 param_3)

{
    struct_op_1010_1d48(param_1, param_3);
    param_1->field_0xa         = 0x0;
    param_1->field_0xc         = 0x0;
    param_1->field_0x10        = 0x0;
    param_1->field_0x12        = 0x0;
    param_1->field_0x16        = 0x0;
    param_1->field_0x0 = addr_table_1010_53f4;//0x53f4;
    param_1->field_0x2         = SEG_1010;
}
