#include "unk_2.h"

#include "address_tables/function_tables.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_20.h"
#include "struct_ops_6.h"
#include "unk_17.h"

void  pass1_1040_5626(Struct57 *param_1, u32 param_2, u16 param_3, u8 *param_4)

{
    i16         *pi_var1;
    u16          u_var2;
    u8          *puVar3;
    i16          iVar4;
    u16          uVar5;
    u32          uVar6;
    u16          uVar7;
    i16         *piStack12;
    Struct441 *iVar8;
    Struct396 *iVar7;
    Struct439 *iVar6;

    iVar8 = (Struct441 *) param_1;
    uVar7 = (param_1 >> 0x10);
    struct_1040_b082(param_1, str_var1(param_3, 0xfa3));
    u_var2 = 0x0;
    iVar8->field_0x94 = 0x0;
    iVar8->field_0x96 = 0x0;
    iVar8->field_0x98 = 0x0;
    iVar8->field_9c = 0x0;
    param_1 = addr_table_1040_6386;//0x6386;
    iVar8->field_0x2 = SEG_1040;
    mem_op_1000_179c(0x18, param_4, 0);
    puVar3 = (param_4 | u_var2);
    if (puVar3 == 0x0) {
        iVar8->field_0x90 = 0x0;
    } else {
        struct_1040_a598(str_var1(param_4, u_var2));
        &iVar8->field_0x90         = u_var2;
        (&iVar8->field_0x90 + 0x2) = puVar3;
    }
    *iVar8->field_0x90 = 0x6;
    iVar4              = *iVar8->field_0x90;
    u_var2 = iVar4 * 0xa + 0x2;
    mem_op_1000_179c(u_var2, puVar3, 0);
    piStack12 = str_var1(puVar3, u_var2);
    if((puVar3 | u_var2) == 0x0)
    {
        pi_var1         = iVar8->field_0x90;
        (pi_var1 + 0x2) = 0x0;
    }
    else
    {
        *piStack12 = iVar4;
        pass1_1000_5586(0xa564, SEG_1040, iVar4, 0xa, u_var2 + 0x2, puVar3);
        pi_var1        = iVar8->field_0x90;
        uVar5         = (pi_var1 >> 0x10);
        iVar4         = pi_var1;
        (iVar4 + 0x2) = u_var2 + 0x2;
        (iVar4 + 0x4) = puVar3;
    }
    pi_var1          = iVar8->field_0x90;
    *(pi_var1 + 0x6) = param_2;
    pi_var1          = iVar8->field_0x90;
    (pi_var1 + 0xa)  = 0x4;
    pi_var1          = iVar8->field_0x90;
    (pi_var1 + 0x12) = iVar8->field_0xa;
    uVar6           = pass1_1040_5d12(param_1);
    u_var2           = (uVar6 >> 0x10);
    if((u_var2 | uVar6) == 0x0)
    {
        iVar8->field_0x9a = 0x0;
    }
    else
    {
        iVar8->field_0x9a = (uVar6 + 0x20);
    }
    return;
}


u16  pass1_1040_5cd6(u32 param_1)

{
    i16 iVar1;
    u16 u_var2;
    u32 uVar3;

    uVar3 = pass1_1040_5d12(param_1);
    if(uVar3 != 0x0)
    {
        iVar1 = (uVar3 + 0x20);
        u_var2 = (param_1 >> 0x10);
        if((param_1 + 0x9a) != iVar1)
        {
            (param_1 + 0x9a) = iVar1;
            return 0x1;
        }
    }
    return 0x0;
}


void  pass1_1040_5dc4(Struct724 *param_1, u8 *param_2, i16 param_3, u16 param_4)

{
    void **ppcVar1;
    u32   u_var2;
    u16          uVar3;
    u16          uVar4;
    u16          uVar5;
    u8          *puVar6;
    u16          extraout_DX;
    Struct724 *iVar7;
    u16          uVar7;
    u16         *puVar8;
    u32  *puVar9;
    u16          uVar10;
    i16          iStack18;

    puVar8 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_4, param_2, param_3);
    puVar6 = (puVar8 >> 0x10);
    uVar3  = puVar8;
    uVar7  = (param_1 >> 0x10);
    iVar7  = (Struct724 *)param_1;
    pass1_1010_a5ca(uVar3, puVar6, iVar7->field_0x9a, uVar3, puVar6);
    if(uVar3 == 0x0)
    {
        iVar7->field_0x94 = 0x0;
        iVar7->field_9c   = 0x1;
    }
    if(-0x1 < uVar3)
    {
        if(iVar7->field_0x9a < 0x72)
        {
            uVar10 = 0x31;
        }
        else
        {
            uVar10 = 0x41;
        }
        puVar9  = mixed_1010_20ba(globals->u16_1050_0ed0, uVar10, param_4, puVar6, param_3);
        uVar4   = iVar7->field_0x9a;
        ppcVar1 = (*puVar9 + 0x14);
        (**ppcVar1)(SEG_1010, puVar9, (puVar9 >> 0x10), uVar4, uVar4 >> 0xf);
        if((extraout_DX | uVar4) == 0x0)
        {
            iStack18 = 0x0;
        }
        else
        {
            u_var2    = (uVar4 + 0x16);
            iStack18 = (u_var2 + 0x4);
        }
        if((iStack18 != 0x0) && (uVar3 != 0x0))
        {
            uVar5             = ((iStack18 - uVar3) * 0x64) / iStack18;
            uVar4             = uVar5 / 0xa;
            iVar7->field_0x94 = uVar4;
            if(0x4 < uVar5 % 0xa)
            {
                iVar7->field_0x94 = uVar4 + 0x1;
            }
        }
    }
    return;
}


void  pass1_1040_288e(u32 param_1)

{
    u16         uVar1;
    void **ppcVar2;
    u32  uVar3;
    u32 *puVar4;
    u32 *puVar5;
    u8         *extraout_DX;
    u8         *puVar6;
    u8         *extraout_DX_00;
    u8         *puVar7;
    i16         iVar8;
    u16         uVar9;

    uVar9   = (param_1 >> 0x10);
    iVar8   = param_1;
    uVar3   = (iVar8 + 0x8e);
    puVar5  = (uVar3 + 0x24);
    ppcVar2 = (*puVar5 + 0x14);
    (**ppcVar2)();
    puVar4 = puVar5;
    puVar6 = extraout_DX;
    if((iVar8 + 0x70) != 0x0)
    {
        puVar4 = (iVar8 + 0x70);
        uVar1  = (iVar8 + 0x72);
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
    (iVar8 + 0x70) = puVar4;
    (iVar8 + 0x72) = puVar7;
    pass1_1008_4d84((iVar8 + 0x70), puVar5 & 0xffff | ZEXT24(extraout_DX) << 0x10, puVar7);
    return;
}


u16  pass1_1040_0d80(void)

{
    return 0x1;
}


u32  pass1_1038_df5c(u32 param_1, u16 param_2, u16 param_3)

{
    u16 uVar1;
    u16 u_var2;
    u32 uVar3;

    u_var2 = (param_1 >> 0x10);
    uVar1 = param_1;
    pass1_1010_038e(*(uVar1 + 0x92), 0x1, param_3);
    uVar3 = pass1_1038_af40(globals->ptr_1050_5b7c, (uVar1 + 0x8), 0x20, param_2, uVar1, SEG_1010, param_3);
    return uVar3;
}


void  pass1_1038_a174(u32 param_1, i16 param_2)

{
    if(param_2 == 0x1)
    {
        (param_1 + 0x8e) = 0x0;
    }
    return;
}


u16 * pass1_1038_a33c(u16 *param_1, u16 param_2) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    pass1_1038_a122(param_1, uVar1, 0x1, 0x0, str_var1(param_2, 0xfc7));
    param_1->field_0x0 = addr_table_1038_a428;//0xa428;
    param_1->field_0x2 = SEG_1038;
    return param_1;
}


void  pass1_1038_a36a(Struct18 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1038_a428;//0xa428;
    param_1->field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    pass1_1038_a156(param_1);
    return;
}


u16 * pass1_1038_a494(u16 *param_1, u16 param_2) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    pass1_1038_a122(param_1, uVar1, 0x1, 0x0, str_var1(param_2, 0xfc8));
    param_1->field_0x0 = addr_table_1038_a62e;//0xa62e;
    param_1->field_0x2 = SEG_1038;
    return param_1;
}


void  pass1_1038_a4c2(Struct18 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1038_a62e;//0xa62e;
    param_1->field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    pass1_1038_a156(param_1);
    return;
}


u16 * pass1_1038_a69a(u16 *param_1, u16 param_2) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    pass1_1038_a122(param_1, uVar1, 0x1, 0x0, str_var1(param_2, 0xfc9));
    param_1->field_0x0 = addr_table_1038_a832;//0xa832;
    param_1->field_0x2 = SEG_1038;
    return param_1;
}


void  pass1_1038_a6c8(Struct18 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1038_a832;//0xa832;
    param_1->field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    pass1_1038_a156(param_1);
    return;
}


u16 * pass1_1038_a89e(u16 *param_1, u16 param_2) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    pass1_1038_a122(param_1, uVar1, 0x1, 0x0, str_var1(param_2, 0xfca));
    param_1->field_0x0 = addr_table_1038_ab16;//0xab16;
    param_1->field_0x2 = SEG_1038;
    return param_1;
}


void  pass1_1038_a8cc(Struct18 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1038_ab16;//0xab16;
    param_1->field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    pass1_1038_a156(param_1);
    return;
}


u16 * pass1_1038_adde(i16 param_1, u16 param_2, u16 param_3, u32 param_4) {
    pass1_1038_9b72(param_1, param_2, param_3, param_4);
    param_1 = addr_table_1038_ae4e;//0xae4e;
    param_1->fld2_segment = SEG_1038;
    return param_1;
}


void  pass1_1038_af34(void)

{
    globals->ptr_1050_5b7c = 0x0;
    return;
}


u32  pass1_1038_af40(u32 param_1, u16 param_2, i16 param_3, u16 param_4, u16 param_5, u16 param_6, u16 param_7)

{
    void **ppcVar1;
    u32  u_var2;
    u8         *puVar3;
    u8         *puVar4;
    u16         uVar5;
    i16         iVar6;
    i16         unaff_DI;
    u16         uVar7;
    u16         uVar8;
    Struct57 *paVar9;

    puVar3 = bring_win_to_top_1038_b72e(param_1, param_3, param_6);
    iVar6  = param_1;
    uVar7  = (param_1 >> 0x10);
    if(puVar3 != 0x0)
        goto LAB_1038_b61f;
    uVar8                       = SUB42(SEG_1038, 0x0);
    globals->PTR_LOOP_1050_5b82 = puVar3;
    switch(param_3)
    {
    case 0x1:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x8e, param_4, 0);
        if((param_4 | param_5) == 0x0)
        {
        LAB_1038_afa0:
            uVar8  = SEG_1000;
            paVar9 = 0x0;
        }
        else
        {
            paVar9 = pass1_1038_9f76(str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2);
        }
        break;
    case 0x2:
        mem_op_1000_179c(0x96, param_4, 0);
        uVar5 = param_4 | param_5;
        if(uVar5 == 0x0)
            goto LAB_1038_afa0;
        uVar8 = SUB42(SEG_1040, 0x0);
        pass1_1040_181c(
          str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, uVar5, param_7);
        paVar9 = str_var1(uVar5, param_5);
        break;
    case 0x3:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x92, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_e99a(str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, (param_4 | param_5), param_7);
        break;
    case 0x4:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x92, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_c7b8(str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, (param_4 | param_5), param_7);
        break;
    case 0x5:
        mem_op_1000_179c(0x96, param_4, 0);
        uVar5 = param_4 | param_5;
        if(uVar5 == 0x0)
            goto LAB_1038_afa0;
        uVar8 = SUB42(SEG_1040, 0x0);
        pass1_1040_23ea(
          str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, param_7, uVar5);
        paVar9 = str_var1(uVar5, param_5);
        break;
    case 0x6:
        mem_op_1000_179c(0x92, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        uVar8  = SUB42(SEG_1040, 0x0);
        paVar9 = pass1_1040_06e8(str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, (param_4 | param_5), param_7);
        break;
    case 0x7:
        mem_op_1000_179c(0x9c, param_4, 0);
        puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        uVar8 = SUB42(SEG_1040, 0x0);
        pass1_1040_4068(
          str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x8:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x9a, param_4, 0);
            puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        pass1_1038_b772(str_var1(param_4, param_5), puVar4, unaff_DI, param_7, param_2);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x9:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x8e, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_e140(str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2);
        break;
    case 0xa:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x90, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_a33c(str_var1(param_4, param_5), param_2);
        break;
    case 0xb:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x90, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_a494(str_var1(param_4, param_5), param_2);
        break;
    case 0xc:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x90, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_a69a(str_var1(param_4, param_5), param_2);
        break;
    case 0xd:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x90, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_a89e(str_var1(param_4, param_5), param_2);
        break;
    case 0xe:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x94, param_4, 0);
            puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        pass1_1038_e69a(
          str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0xf:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x94, param_4, 0);
            puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        pass1_1038_cd06(
          str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x10:
        mem_op_1000_179c(0x92, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        uVar8  = SUB42(SEG_1040, 0x0);
        paVar9 = pass1_1040_0bfc(str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, (param_4 | param_5), unaff_DI, param_7);
        break;
    case 0x11:
        mem_op_1000_179c(0x9a, param_4, 0);
        puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        uVar8 = SUB42(SEG_1040, 0x0);
        pass1_1040_0e1c(
          str_var1(param_4, param_5), 0x0, 0x0, param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x12:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x9a, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_d756(
          str_var1(param_4, param_5), param_2, (param_4 | param_5), unaff_DI, param_7);
        break;
    case 0x13:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x92, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_cad8(
          str_var1(param_4, param_5), param_2, (param_4 | param_5), unaff_DI, param_7);
        break;
    case 0x14:
        mem_op_1000_179c(0xaa, param_4, 0);
        uVar5 = param_4 | param_5;
        if(uVar5 == 0x0)
            goto LAB_1038_afa0;
        uVar8 = SUB42(SEG_1040, 0x0);
        pass1_1040_1f5a(str_var1(param_4, param_5), param_2, unaff_DI, param_7);
        paVar9 = str_var1(uVar5, param_5);
        break;
    case 0x15:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x8e, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_d242(str_var1(param_4, param_5), param_2);
        break;
    case 0x16:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x9a, param_4, 0);
            puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        pass1_1038_eeda(str_var1(param_4, param_5), param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x17:
        mem_op_1000_179c(0x96, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        uVar8  = SEG_1018;
        paVar9 = pass1_1018_5e26(str_var1(param_4, param_5), param_2);
        break;
    default:
        goto switchD_1038_b581_caseD_18;
    case 0x19:
        mem_op_1000_179c(0x96, param_4, 0);
        puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        uVar8 = SUB42(SEG_1040, 0x0);
        pass1_1040_1cb4(
          str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x1a:
        mem_op_1000_179c(0x92, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        uVar8  = SUB42(SEG_1040, 0x0);
        paVar9 = pass1_1040_123e(str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, (param_4 | param_5), unaff_DI, param_7);
        break;
    case 0x1b:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x8e, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_ab82(str_var1(param_4, param_5), param_2);
        break;
    case 0x1c:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x92, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_e2d0(str_var1(param_4, param_5), param_2);
        break;
    case 0x1d:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x92, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_eb9e(str_var1(param_4, param_5), param_2);
        break;
    case 0x1e:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x29e, param_4, 0);
            puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        pass1_1038_bddc(
          str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x1f:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x9a, param_4, 0);
            puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        pass1_1038_c4a2(
          str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x20:
        mem_op_1000_179c(0x29a, param_4, 0);
        puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        uVar8 = SUB42(SEG_1040, 0x0);
        pass1_1040_2ea2(
          str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x21:
        mem_op_1000_179c(0xa6, param_4, 0);
        puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        uVar8 = SUB42(SEG_1040, 0x0);
        pass1_1040_3966(
          str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x22:
        mem_op_1000_179c(0x9a, param_4, 0);
        puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        uVar8 = SUB42(SEG_1040, 0x0);
        pass1_1040_34a2(
          str_var1(param_4, param_5), 0x0, 0x0, 0x0, param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x23:
        mem_op_1000_179c(0x9c, param_4, 0);
        puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        uVar8 = SUB42(SEG_1040, 0x0);
        pass1_1040_ac84(str_var1(param_4, param_5), param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x25:
        mem_op_1000_179c(0xa0, param_4, 0);
        puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        uVar8 = SUB42(SEG_1040, 0x0);
        struct_op_1040_ca16(
          NULL, str_var1(param_4, param_5), param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x26:
        mem_op_1000_179c(0xa2, param_4, 0);
        uVar5 = param_4 | param_5;
        if(uVar5 == 0x0)
            goto LAB_1038_afa0;
        uVar8 = SUB42(SEG_1040, 0x0);
        pass1_1040_d0f8(NULL, str_var1(param_4, param_5), param_2);
        paVar9 = str_var1(uVar5, param_5);
        break;
    case 0x27:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0xa0, param_4, 0);
            uVar5 = param_4 | param_5;
        if(uVar5 == 0x0)
            goto LAB_1038_afa0;
        pass1_1038_88f2(str_var1(param_4, param_5), param_2);
        paVar9 = str_var1(uVar5, param_5);
        break;
    case 0x28:
        mem_op_1000_179c(0x96, param_4, 0);
        puVar4 = (param_4 | param_5);
        if(puVar4 == 0x0)
            goto LAB_1038_afa0;
        uVar8 = SUB42(SEG_1040, 0x0);
        pass1_1040_6402(str_var1(param_4, param_5), param_2, puVar4, unaff_DI, param_7);
        paVar9 = str_var1(puVar4, param_5);
        break;
    case 0x29:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x98, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_7d10(
          str_var1(param_4, param_5), param_2, param_4 | param_5, unaff_DI, param_7);
        break;
    case 0x2a:
        uVar8 = SEG_1000;
            mem_op_1000_179c(0x98, param_4, 0);
        if((param_4 | param_5) == 0x0)
            goto LAB_1038_afa0;
        paVar9 = pass1_1038_8caa(
          str_var1(param_4, param_5), param_2, (param_4 | param_5), unaff_DI, param_7);
    }
    (param_3 * 0x4 + iVar6)       = paVar9;
    (param_3 * 0x4 + iVar6 + 0x2) = (paVar9 >> 0x10);
switchD_1038_b581_caseD_18:
    if((param_3 * 0x4 + iVar6) != 0x0)
    {
        if((iVar6 + 0xae) != 0x0)
        {
            u_var2          = (param_3 * 0x4 + iVar6);
            (u_var2 + 0x6e) = (iVar6 + 0xae);
        }
        (iVar6 + 0xae) = 0x0;
        u_var2          = (param_3 * 0x4 + iVar6);
        ppcVar1        = ((param_3 * 0x4 + iVar6) + 0x8);
        (**ppcVar1)(uVar8, u_var2, (u_var2 >> 0x10));
    }
LAB_1038_b61f:
    return str_var1((param_3 * 0x4 + iVar6 + 0x2), (param_3 * 0x4 + iVar6));
}


i16  pass1_1038_993a(u16 param_1, u16 param_2, i16 param_3)

{
    i16 iStack6;

    iStack6 = 0x0;
    while(true)
    {
        if(0xe < iStack6)
        {
            return -0x1;
        }
        if((iStack6 * 0xe + 0x5a70) == param_3)
            break;
        iStack6 = iStack6 + 0x1;
    }
    return iStack6;
}


u16 * pass1_1038_9a1e(i16 param_1, u16 param_2, u16 param_3, u32 param_4)

{
    pass1_1040_b040(
      str_var1(param_2, param_1), str_var1(param_4, param_3), (param_4 >> 0x10));
    param_1 =  0x9af6;
    param_1->fld2_segment = SEG_1038;
    return param_1;
}


u32  pass1_1038_9b72(i16 param_1, u16 param_2, u16 param_3, u32 param_4)

{
    i16 iStack4;

    pass1_1040_b040(
      str_var1(param_2, param_1), str_var1(param_4, param_3), (param_4 >> 0x10));
    (param_1 + 0x128)          = 0x0;
    param_1 =  0x9efa;
    param_1->fld2_segment      = SEG_1038;
    iStack4                    = 0x0;
    do
    {
        (param_1 + iStack4 * 0x2 + 0x94) = 0x0;
        iStack4                          = iStack4 + 0x1;
    } while(iStack4 < 0x4a);
    return param_1;
}


void  pass1_1038_79f2(u32 param_1, u32 param_2, u16 param_3)

{
    void **ppcVar1;
    u8    *pu_var2;
    u16    extraout_DX;
    i16    iVar3;
    u16    uVar4;
    u8     local_e[0x8];
    long   lStack6;

    lStack6 = (param_2 + 0x4);
    uVar4   = (param_1 >> 0x10);
    iVar3   = param_1;
    pass1_1008_5784(str_var1(param_3, local_e), *(iVar3 + 0x4));
    do
    {
        pu_var2 = local_e;
        pass1_1008_5b12(pu_var2, param_3);
        if((extraout_DX | pu_var2) == 0x0)
        {
            return;
        }
    } while((pu_var2 + 0x4) != lStack6);
    ppcVar1 = ((iVar3 + 0x4) + 0xc);
    (**ppcVar1)(SEG_1008, (iVar3 + 0x4), pu_var2, extraout_DX);
    return;
}


void  pass1_1038_7a76(u32 *param_1, u16 param_2, i16 param_3, u16 param_4)

{
    void **ppcVar1;
    u16        u_var2;
    u32        uVar3;
    u8         local_a[0x4];
    u32 u_stack6;

    pass1_1008_5784(str_var1(param_4, local_a), *param_1);
    while(true)
    {
        uVar3 = pass1_1008_5b12(local_a, param_4);
        if(uVar3 == 0x0)
            break;
        pass1_1038_6a0e(uVar3, uVar3, (uVar3 >> 0x10) | uVar3, param_2, param_3, param_4);
    }
    do
    {
        u_stack6 = 0x0;
        do
        {
            uVar3 = pass1_1008_5b12(local_a, param_4);
            if(uVar3 == 0x0)
            {
                pass1_1008_5784(str_var1(param_4, local_a), *(param_1 + 0x4));
                while(true)
                {
                    uVar3 = pass1_1008_5b12(local_a, param_4);
                    if(uVar3 == 0x0)
                        break;
                    pass1_1030_affc(uVar3, param_3, param_4);
                }
                return;
            }
            u_var2 = pass1_1038_6b3c(uVar3);
        } while(u_var2 == 0x0);
        ppcVar1 = (*param_1 + 0xc);
        (**ppcVar1)(SEG_1008);
    } while(true);
}


void  pass1_1038_8848(void)

{
    return;
}


void  pass1_1038_884c(void)

{
    return;
}


void  pass1_1038_6a0e(u32 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5, u16 param_6)

{
    i16       *pi_var1;
    u32 u_var2;
    u16        uVar3;
    BOOL16     BVar4;
    u16        uVar5;
    u16        uVar6;
    u16        uVar7;
    u16        uVar8;
    u16        uVar9;
    u16       *puVar10;
    u32        uVar11;
    u32        uStack22;
    u8         local_10[0x4];
    u8         local_c[0x6];
    u32        u_stack6;

    uVar9 = (param_1 >> 0x10);
    uVar8 = param_1;
    if((uVar8 + 0x28) == 0x0)
    {
        u_var2 = (uVar8 + 0x20);
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
        u_stack6 = str_var1(param_3, param_2);
        pi_var1  = (uVar8 + 0x24);
        *pi_var1 = *pi_var1 + 0x3c;
        puVar10 = pass1_1008_3e38(str_var1(param_6, local_c));
        uVar6   = (puVar10 >> 0x10);
        while(true)
        {
            uVar3 = pass1_1038_6d24(param_1,
                                    str_var1(param_6, local_10),
                                    str_var1(param_6, local_c), u_stack6, (u_stack6 >> 0x10), param_6);
            if(uVar3 == 0x0)
            {
                pass1_1010_8fba(*(uVar8 + 0x4), 0x0);
                uStack22 = str_var1(uVar6, uVar3);
                uVar7    = uVar6 | uVar3;
                if(uVar7 == 0x0)
                {
                    u_var2 = (uVar8 + 0x20);
                    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
                    pass1_1038_7356(param_1, str_var1(uVar7, uVar3), param_6, param_4, param_5);
                    return;
                }
                uVar11 = struct_op_1030_73a8(u_stack6);
                BVar4  = pass1_1008_c6ae(globals->dat_1050_06e0, (uVar11 + 0xc), 0x40);
                if(BVar4 != 0x0)
                {
                    (uVar8 + 0x28)  = 0x1;
                    *(uVar8 + 0x20) = uStack22;
                    return;
                }
                *(uVar8 + 0x20) = uStack22;
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, (uVar8 + 0x20), uVar6);
                u_stack6 = uStack22 & 0xffff | uVar6 << 0x10;
            }
            uVar5 = pass1_1038_6e1a(uVar8, uVar9, (long *)str_var1(param_6, local_10));
            if((uVar8 + 0x24) < uVar5)
                break;
            pi_var1  = (uVar8 + 0x24);
            *pi_var1 = *pi_var1 - uVar5;
            pass1_1008_3f62((param_1 & 0xffff0000 | (uVar8 + 0x1a)),
                            str_var1(param_6, local_c));
        }
    }
    return;
}


u16  pass1_1038_6b3c(u32 param_1)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if(((((iVar1 + 0xc) == 0x0) && ((iVar1 + 0x12) == 0x0)) && ((iVar1 + 0x14) == 0x0)) && (((iVar1 + 0xe) == 0x0 && ((iVar1 + 0x16) != 0x0))))
    {
        (iVar1 + 0x16) = 0x0;
    }
    if((iVar1 + 0x16) == 0x0)
    {
        return 0x1;
    }
    return 0x0;
}


void  pass1_1038_6bd4(u32 param_1, u16 *param_2, u32 *param_3, i16 param_4, u8 *param_5, i16 param_6, u16 param_7)

{
    u16 uStack4;

    pass1_1008_3f62(param_2, (param_1 & 0xffff0000 | (param_1 + 0x1a)));
    if(param_4 < 0x0)
    {
        uStack4 = *param_2 - 0x1;
    }
    else
    {
        uStack4 = *param_2 + 0x1;
    }
    *param_2 = uStack4;
    pass1_1038_6b88(param_1, (param_1 >> 0x10), param_2, param_3, param_5, param_6, param_7);
    return;
}


void  pass1_1038_6c1c(u32 param_1, u16 *param_2, u32 *param_3, i16 param_4, u8 *param_5, i16 param_6, u16 param_7)

{
    u16 uVar1;
    i16 iStack4;

    pass1_1008_3f62(param_2, (param_1 & 0xffff0000 | (param_1 + 0x1a)));
    uVar1   = (param_2 >> 0x10);
    iStack4 = (param_2 + 0x2);
    if(param_4 < 0x0)
    {
        iStack4 = iStack4 + -0x1;
    }
    else
    {
        iStack4 = iStack4 + 0x1;
    }
    (param_2 + 0x2) = iStack4;
    pass1_1038_6b88(param_1, (param_1 >> 0x10), param_2, param_3, param_5, param_6, param_7);
    return;
}


i16  pass1_1038_6d24(u32 param_1, u32 *param_2, u16 *param_3, i16 param_4, u16 param_5, u16 param_6)

{
    i16        local_14;
    i16        local_12;
    i16        local_10;
    i16        local_e;
    i16        local_c;
    i16        local_a;
    u32 local_8;
    u16        uStack4;

    *param_2 = 0x0;
    local_8  = (param_4 + 0xc);
    uStack4  = (param_4 + 0x10);
    pass1_1008_3eb4(str_var1(param_6, &local_8),
                    str_var1(param_6, &local_e),
                    str_var1(param_6, &local_c),
                    str_var1(param_6, &local_a));
    pass1_1008_3eb4((param_1 & 0xffff0000 | (param_1 + 0x1a)),
                    str_var1(param_6, &local_14),
                    str_var1(param_6, &local_12),
                    str_var1(param_6, &local_10));
    local_c = local_c - local_12;
    local_e = local_e - local_14;
    local_a = local_a - local_10;
    if(((local_a == 0x0) && (local_c == 0x0)) && (local_e == 0x0))
    {
        return 0x0;
    }
    if((local_c != 0x0) || (local_a == 0x0))
    {
        if((local_a == 0x0) && (local_c != 0x0))
        {
            pass1_1038_6c1c(param_1, param_3, param_2, local_c, 0x0, &stack0xfffe, param_6);
            return 0x1;
        }
        if(((local_a == 0x0) && (local_c == 0x0)) && (local_e != 0x0))
        {
            pass1_1038_6c68(param_1, param_3, param_2, local_e, 0x0, &stack0xfffe, param_6);
            if(local_c != 0x0)
            {
                return 0x1;
            }
            return local_c;
        }
    }
    pass1_1038_6bd4(param_1, param_3, param_2, local_a, local_a, &stack0xfffe, param_6);
    return 0x1;
}


u16  pass1_1038_6e1a(u16 param_1, u16 param_2, long *param_3)

{
    u16    uVar1;
    BOOL16 BVar2;
    u16    uVar3;
    u16    uVar4;
    u8   bStack21;
    u16    uStack4;

    uStack4 = 0x0;
    if((*param_3 == 0x0) && (param_3 == 0x0))
    {
        return 0x1;
    }
    uVar4    = (param_3 + 0x2);
    bStack21 = (u8)(uVar4 >> 0x8);
    uVar1    = bStack21;
    if(bStack21 == 0x0)
    {
        uStack4 = param_3;
        goto switchD_1038_6eab_caseD_9;
    }
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, *param_3, (*param_3 >> 0x10));
    uVar3 = pass1_1030_6fa0(str_var1(uVar4, uVar1));
    if(uVar3 < 0xa)
    {
        switch(uVar3)
        {
        case 0x1:
            uStack4 = 0x1;
            break;
        case 0x2:
        case 0x6:
            uStack4 = 0x2;
            break;
        case 0x3:
        case 0x7:
            uStack4 = 0x3;
            break;
        case 0x4:
        case 0x8:
            uStack4 = 0x4;
            break;
        case 0x5:
        case 0x9:
            goto switchD_1038_6eab_caseD_5;
        }
    }
    else
    {
        BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar3, 0x41);
        if(BVar2 != 0x0)
        {
            uStack4 = 0xa;
            goto switchD_1038_6eab_caseD_9;
        }
        BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar3, 0x42);
        if((BVar2 != 0x0) || (uVar3 == 0x3f))
        {
            uStack4 = 0xb;
            goto switchD_1038_6eab_caseD_9;
        }
    switchD_1038_6eab_caseD_5:
        uStack4 = 0x5;
    }
switchD_1038_6eab_caseD_9:
    switch(uStack4)
    {
    case 0x1:
        return 0x14;
    case 0x2:
    case 0x7:
        return 0x3c;
    case 0x3:
    case 0x8:
        return 0x78;
    case 0x4:
    case 0x9:
        return 0xf0;
    case 0x5:
    case 0x6:
        return 0xf;
    case 0xa:
        uVar3 = 0xc;
        break;
    case 0xb:
        uVar3 = 0xa;
        break;
    default:
        uVar3 = 0xffff;
    }
    return uVar3;
}


void  pass1_1038_6f5a(u32 param_1, u32 param_2, u16 param_3, u8 *param_4, u16 param_5, u16 param_6, u16 param_7)

{
    u32   uVar1;
    long         lVar2;
    u16         *puVar3;
    u16          uVar4;
    u16          uVar5;
    i16          iVar6;
    i16          iVar7;
    u16          uVar8;
    u16          uVar9;
    Struct99  *paStack16;
    u16          uStack12;
    u16          local_a;
    u16          uStack8;
    u16          local_6;
    u16          uStack4;
    Struct623 *uVar3;

    uVar8 = (param_1 >> 0x10);
    iVar6 = param_1;
    if((iVar6 + 0xe) == 0x0)
    {
        if((iVar6 + 0xc) != 0x0)
        {
            pass1_1030_7ddc(param_2, (iVar6 + 0x16), (iVar6 + 0xc), param_3, param_4, param_5, param_6, param_7);
            return;
        }
        if((iVar6 + 0x12) != 0x0)
        {
            pass1_1030_7c50(param_2, (iVar6 + 0x16), (iVar6 + 0x12), param_3, param_4);
            return;
        }
        paStack16 = pass1_1000_07fc(SEG_1000, globals->u32_ptr_1050_68a2);
        uVar5 = (paStack16 >> 0x10);
        uVar3     = (Struct623 *)paStack16;
        if((uVar5 | uVar3) == 0x0)
        {
            paStack16 = (Struct99 *)0x0;
        }
        else
        {
            paStack16->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
            uVar3->fld2_segment       = SEG_1008;
            uVar3->field_0x4     = 0x0;
            uVar3->field_0x6     = 0x0;
            uVar3->field_0x8     = 0x0;
            uVar3->field_0xa     = 0x0;
            uVar3->field_0xc     = 0x0;
            paStack16->fld0_addr_table = addr_table_1018_56ce; // 0x56ce
            uVar3->fld2_segment       = SEG_1018;
        }
        uVar9         = (paStack16 >> 0x10);
        iVar7         = paStack16;
        (iVar7 + 0x8) = (iVar6 + 0x14);
        (iVar7 + 0xa) = (iVar6 + 0x16);
        uVar4         = pass1_1020_c42e((iVar6 + 0x14));
        lVar2         = uVar4 * (iVar7 + 0xa);
        uVar5         = lVar2;
        (iVar7 + 0xc) = uVar5;
        pass1_1030_6a2c(param_2, (long)paStack16, uVar5, (lVar2 >> 0x10), param_7);
    }
    else
    {
        uVar1   = (iVar6 + 0xe);
        uStack4 = (uVar1 + 0x4);
        for(uStack12 = 0x0; uStack12 < uStack4; uStack12 = uStack12 + 0x1)
        {
            puVar3 = &local_6;
            pass1_1020_bb16((iVar6 + 0xe),
                            str_var1(param_7, &local_a),
                            str_var1(param_7, puVar3), uStack12);
            if(str_var1(uStack8, local_a) != 0x0)
            {
                pass1_1030_7ddc(param_2,
                                str_var1(uStack8, local_a), local_6, puVar3, param_4, param_5, param_6, param_7);
            }
        }
    }
    return;
}


void  pass1_1038_50e0(u32 param_1, u16 param_2, u16 param_3)

{
    void **ppcVar1;
    u16    u_var2;
    BOOL16 BVar3;
    u16    extraout_DX;
    u16    uVar4;
    u16    uVar5;
    i16    iVar6;
    u16    uVar7;
    u32    uVar8;
    u32    uStack14;
    u32    uStack10;

    uVar7 = (param_1 >> 0x10);
    iVar6 = param_1;
    if((iVar6 + 0xc) == 0x0)
    {
        param_3 = 0x0;
        uVar4   = 0x0;
    }
    else
    {
        ppcVar1 = ((iVar6 + 0xc) + 0x10);
        (**ppcVar1)();
        uVar4 = extraout_DX;
    }
    uStack10 = str_var1(uVar4, param_3);
    for(uStack14 = 0x0; uStack14 < uStack10; uStack14 = uStack14 + 0x1)
    {
        uVar8 = uStack10;
        pass1_1030_1d58(*(iVar6 + 0xc));
        uVar5 = uVar4 | uVar8;
        if(uVar5 != 0x0)
        {
            u_var2 = pass1_1030_6fa0(uVar8 & 0xffff | uVar4 << 0x10);
            BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, param_2);
            if(BVar3 != 0x0)
            {
                uVar8 = struct_op_1030_73a8(uVar8 & 0xffff | uVar4 << 0x10);
                uVar5 = (uVar8 >> 0x10);
            }
        }
        uVar4 = uVar5;
    }
    return;
}


void  pass1_1038_518c(u32 param_1, u16 param_2, u16 param_3)

{
    u16       *puVar1;
    u32 u_var2;
    void **ppcVar3;
    u16        uVar4;
    u32        uVar5;
    u16        extraout_DX;
    u16        extraout_DX_00;
    u16        uVar6;
    i16        iVar7;
    i16        iVar8;
    i16        iVar9;
    u16        uVar10;
    u16        uVar11;
    bool       bVar12;
    u32        uVar13;
    i16        iStack34;
    u32        uStack32;
    u32       *puStack28;
    u32        uStack10;
    u32        u_stack6;

    uVar10 = (param_1 >> 0x10);
    iVar7  = param_1;
    if((iVar7 + 0x206) == 0x0)
    {
        if((iVar7 + 0xc) == 0x0)
        {
            param_2 = 0x0;
            uVar11  = 0x0;
        }
        else
        {
            u_var2   = (iVar7 + 0xc);
            ppcVar3 = ((iVar7 + 0xc) + 0x10);
            (**ppcVar3)(param_3, u_var2, (u_var2 >> 0x10));
            uVar11 = extraout_DX;
        }
        u_stack6 = str_var1(uVar11, param_2);
        for(uStack10 = 0x0; uStack10 < u_stack6; uStack10 = uStack10 + 0x1)
        {
            u_var2   = (iVar7 + 0xc);
            ppcVar3 = ((iVar7 + 0xc) + 0x4);
            uVar5   = u_stack6;
            (**ppcVar3)(param_3, u_var2, (u_var2 >> 0x10), uStack10, (uStack10 >> 0x10));
            uVar4 = uVar5;
            uVar6 = extraout_DX_00 | uVar4;
            if(uVar6 != 0x0)
            {
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar4, extraout_DX_00);
                param_3   = SEG_1030;
                uVar13    = struct_op_1030_73a8(str_var1(uVar6, uVar4));
                uVar6     = (uVar13 >> 0x10);
                iVar8     = (uVar13 + 0x12);
                uVar4     = uVar13 + 0x14;
                uVar5     = uVar4;
                puStack28 = (uVar13 & 0xffff0000 | uVar4);
                uStack32  = 0x0;
                if((iVar8 == 0x4) || (iVar8 == 0x5))
                {
                    uVar5    = *puStack28;
                    uStack32 = uVar5;
                }
                if(uStack32 != 0x0)
                {
                    for(iStack34 = 0x11; iStack34 < 0x25; iStack34 = iStack34 + 0x1)
                    {
                        if((((iVar7 + 0x204) == 0x0) || (iStack34 == 0x23)) || (iStack34 == 0x24))
                        {
                            empty_1038_540a();
                            iVar8  = iStack34 * 0x4;
                            uVar11 = (uStack32 >> 0x10);
                            iVar9  = uStack32;
                            puVar1 = (iVar8 + iVar9 + 0x2);
                            bVar12 = *puVar1 < uVar6;
                            if((bVar12 || *puVar1 == uVar6) && ((bVar12 || (puVar1 = (iVar8 + iVar9), *puVar1 < uVar5 || *puVar1 == uVar5))))
                            {
                                pass1_1038_5770(param_1, (iVar8 + iVar9), iStack34);
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}


void  pass1_1038_52b8(u32 param_1, u32 param_2, u16 param_3, u16 param_4, u16 param_5, u16 param_6, u16 param_7)

{
    u32   uVar1;
    void **ppcVar2;
    u32          uVar3;
    i16          iVar4;
    u16          uVar5;
    u16          extraout_DX;
    u16          uVar6;
    u16          extraout_DX_00;
    u16          uVar7;
    u16          uVar8;
    u32          uVar9;
    i16          iVar11;
    u16          uVar12;
    u16          uStack26;
    i16          iStack24;
    u32          uStack22;
    u32          uStack14;
    u32          uStack10;
    Struct601 *iVar10;

    iVar4  = -param_2;
    iVar11 = param_1;
    pass1_1038_5694(param_1, str_var1(-(param_2 + (param_2 != 0x0)), iVar4), param_3);
    if(param_3 != 0x24)
    {
        uVar8 = (param_1 >> 0x10);
        if((iVar11 + 0xc) == 0x0)
        {
            iVar4 = 0x0;
            uVar6 = 0x0;
        }
        else
        {
            uVar1   = (iVar11 + 0xc);
            ppcVar2 = ((iVar11 + 0xc) + 0x10);
            (**ppcVar2)(param_6, uVar1, (uVar1 >> 0x10));
            uVar6 = extraout_DX;
        }
        uStack10 = str_var1(uVar6, iVar4);
        for(uStack14 = 0x0; uVar3 = param_2, uStack14 < uStack10; uStack14 = uStack14 + 0x1)
        {
            uVar1   = (iVar11 + 0xc);
            ppcVar2 = ((iVar11 + 0xc) + 0x4);
            uVar9   = uStack10;
            (**ppcVar2)(param_6, uVar1, (uVar1 >> 0x10), uStack14, (uStack14 >> 0x10));
            uVar5 = uVar9;
            uVar7 = extraout_DX_00 | uVar5;
            if(uVar7 != 0x0)
            {
                uVar12 = param_3;
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar5, extraout_DX_00);
                uStack22 = str_var1(uVar7, uVar5);
                param_6  = SEG_1030;
                uVar9    = pass1_1030_7c28(
                  str_var1(uVar7, uVar5), uVar12, uVar5, uVar7, param_7);
                uVar7    = (uVar9 >> 0x10);
                uVar5    = uVar9;
                if((uVar7 | uVar5) != 0x0)
                {
                    if(uVar9 < param_2)
                    {
                        param_2  = param_2 - uVar9;
                        uStack26 = 0x0;
                        iStack24 = 0x0;
                    }
                    else
                    {
                        uStack26 = uVar5 - param_2;
                        iStack24 = (uVar7 - param_2) - (uVar5 < param_2);
                        param_2  = 0x0;
                        uVar9    = uVar3;
                    }
                    param_6 = SEG_1030;
                    pass1_1030_7d1c(uStack22, uStack26,
                                    str_var1(param_3, iStack24), uVar9, param_2, param_4, param_5, param_7);
                    if(param_2 == 0x0)
                    {
                        return;
                    }
                }
            }
        }
    }
    return;
}


void  pass1_1038_53ba(u32 param_1, i16 param_2)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    if(*(param_1 + 0x1a2 + param_2 * 0x4) < *(param_1 + 0x14e + param_2 * 0x4))
    {
        return;
    }
    return;
}


void  empty_1038_540a(void)

{
    return;
}


void  pass1_1038_5464(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32  uVar1;
    void **ppcVar2;
    u16         uVar3;
    u32         uVar4;
    u16         extraout_DX;
    u16         extraout_DX_00;
    u16         extraout_DX_01;
    u16         extraout_DX_02;
    u16         uVar5;
    i16         iVar6;
    i16         iVar7;
    u16         uVar8;
    u16         uVar9;
    u16         local_2e;
    u16         uStack44;
    u16         local_2a;
    u16         uStack40;
    u32 *puStack34;
    u16         uStack30;
    u16         uStack28;
    u32        *puStack26;
    u32  uStack22;
    u16         uStack18;
    u16         uStack16;
    u32         uStack14;
    u32         uStack10;
    u32  u_stack6;

    pass1_1038_56ba(param_1);
    pass1_1038_57c0(param_1);
    uVar8 = (param_1 >> 0x10);
    iVar6 = param_1;
    if((iVar6 + 0xc) == 0x0)
    {
        param_2 = 0x0;
        uVar5   = 0x0;
    }
    else
    {
        uVar1   = (iVar6 + 0xc);
        ppcVar2 = ((iVar6 + 0xc) + 0x10);
        (**ppcVar2)(param_3, uVar1, (uVar1 >> 0x10));
        uVar5 = extraout_DX;
    }
    uStack10 = str_var1(uVar5, param_2);
    for(uStack14 = 0x0; uStack14 < uStack10; uStack14 = uStack14 + 0x1)
    {
        uVar1   = (iVar6 + 0xc);
        ppcVar2 = ((iVar6 + 0xc) + 0x4);
        uVar4   = uStack10;
        (**ppcVar2)(param_3, uVar1, (uVar1 >> 0x10), uStack14, (uStack14 >> 0x10));
        uVar3    = uVar4;
        uVar5    = extraout_DX_02 | uVar3;
        uStack18 = uVar3;
        uStack16 = extraout_DX_02;
        if(uVar5 != 0x0)
        {
            param_3 = SEG_1028;
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar3, extraout_DX_02);
            uStack22  = str_var1(uVar5, uVar3);
            puStack26 = (uVar3 + 0x22);
            if(((uVar3 + 0x24) | puStack26) == 0x0)
            {
                uStack28 = 0x0;
            }
            else
            {
                uStack28 = (puStack26 + 0x4);
            }
            for(uStack30 = 0x0; uStack30 < uStack28; uStack30 = uStack30 + 0x1)
            {
                param_3 = SEG_1020;
                pass1_1020_bb16(puStack26, CONCAT13((param_4 >> 0x8), CONCAT12(param_4, &local_2e)),
                                str_var1(param_4, &local_2a), uStack30);
                if(str_var1(uStack44, local_2e) != 0x0)
                {
                    pass1_1038_5694(param_1, str_var1(uStack44, local_2e), local_2a);
                }
            }
            uVar9     = (uStack22 >> 0x10);
            puStack34 = (uStack22 + 0x1e);
            uVar5     = (uStack22 + 0x20);
            uVar3     = uVar5 | puStack34;
            if(uVar3 == 0x0)
            {
                uVar3 = 0x0;
            }
            else
            {
                ppcVar2 = (*puStack34 + 0x10);
                (**ppcVar2)(param_3, puStack34, uVar5);
                uVar5 = extraout_DX_00;
            }
            uStack28 = uVar3;
            for(uStack30 = 0x0; uStack30 < uStack28; uStack30 = uStack30 + 0x1)
            {
                ppcVar2 = (*puStack34 + 0x4);
                uVar3   = uStack28;
                (**ppcVar2)(param_3, puStack34, (puStack34 >> 0x10), uStack30, 0x0);
                uVar5    = extraout_DX_01 | uVar3;
                local_2a = uVar3;
                uStack40 = extraout_DX_01;
                if(uVar5 != 0x0)
                {
                    param_3 = SEG_1028;
                    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar3, extraout_DX_01);
                    iVar7                   = (uVar3 + 0xc) * 0x4;
                    (iVar6 + iVar7 + 0x14e) = (iVar6 + 0x14e + iVar7) + 0x1;
                }
            }
        }
    }
    uVar4 = uStack10;
    pass1_1030_38f2(*(iVar6 + 0x1f6), 0x3, param_4);
    uVar3         = uVar4;
    u_stack6 = uVar3;
    u_stack6 = uVar5;
    pass1_1030_38f2(*(iVar6 + 0x1f6), 0x4, param_4);
    u_stack6 = str_var1(u_stack6 + uVar5 + CARRY2(u_stack6, uVar3), u_stack6 + uVar3);
    if(u_stack6 == 0x0)
    {
        pass1_1030_38f2(*(iVar6 + 0x1f6), 0x2, param_4);
        u_stack6 = str_var1(uVar5, uVar3);
    }
    uVar1   = (iVar6 + 0x1f6);
    u_stack6 = u_stack6 + (uVar1 + 0x170);
    pass1_1038_5694(param_1, u_stack6, 0x24);
    return;
}


u32  pass1_1038_565e(u16 param_1, u8 *param_2, u32 param_3)

{
    i16 iVar1;
    u16 u_var2;
    u32 uVar3;
    u8  local_4[0x2];

    u_var2 = (param_3 >> 0x10);
    iVar1 = param_3;
    uVar3 = pass1_1030_8e3c(param_1, local_4, param_2, str_var1(param_1, local_4), *(iVar1 + 0x4));
    pass1_1038_582c(param_3, uVar3);
    return str_var1((iVar1 + 0x16), (iVar1 + 0x14));
}


void  pass1_1038_5694(u32 param_1, long param_2, i16 param_3)

{
    u16 uVar1;

    uVar1                            = (param_1 >> 0x10);
    (param_1 + param_3 * 0x4 + 0x26) = (param_1 + 0x26 + param_3 * 0x4) + param_2;
    return;
}


void  pass1_1038_56ba(u32 param_1)

{
    pass1_1000_4906((Struct20 *)(param_1 & 0xffff0000 | (param_1 + 0x26)), 0x0, 0x94);
    return;
}


void  pass1_1038_56d6(u32 param_1, i16 param_2)

{
    void **ppcVar1;
    i16    iVar2;
    u16   *puVar3;
    u16    uVar4;
    u32    uVar5;
    u16    extraout_DX;
    u16    uVar6;
    u16    extraout_DX_00;
    u16    uVar7;
    u16    uVar8;
    u16    uVar9;
    u32    uStack10;
    u32    u_stack6;

    iVar2  = param_1;
    uVar9  = SEG_1000;
    puVar3 = pass1_1000_4906((Struct20 *)(param_1 & 0xffff0000 | (iVar2 + 0xba)), 0x0, 0x94);
    if(param_2 != 0x0)
    {
        uVar8 = (param_1 >> 0x10);
        if((iVar2 + 0xc) == 0x0)
        {
            puVar3 = 0x0;
            uVar6  = 0x0;
        }
        else
        {
            ppcVar1 = ((iVar2 + 0xc) + 0x10);
            (**ppcVar1)();
            uVar6 = extraout_DX;
        }
        u_stack6 = str_var1(uVar6, puVar3);
        for(uStack10 = 0x0; uStack10 < u_stack6; uStack10 = uStack10 + 0x1)
        {
            ppcVar1 = ((iVar2 + 0xc) + 0x4);
            uVar5   = u_stack6;
            (**ppcVar1)(uVar9, (iVar2 + 0xc));
            uVar4 = uVar5;
            uVar7 = extraout_DX_00 | uVar4;
            if(uVar7 != 0x0)
            {
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar4, extraout_DX_00);
                uVar9 = SEG_1030;
                pass1_1030_72d0(str_var1(uVar7, uVar4));
            }
        }
    }
    return;
}


void  pass1_1038_5770(u32 param_1, long param_2, i16 param_3)

{
    u16 uVar1;

    uVar1                            = (param_1 >> 0x10);
    (param_1 + param_3 * 0x4 + 0xba) = (param_1 + 0xba + param_3 * 0x4) + param_2;
    return;
}


void  pass1_1038_5798(u32 param_1, long param_2, i16 param_3)

{
    u16 uVar1;

    uVar1                             = (param_1 >> 0x10);
    (param_1 + param_3 * 0x4 + 0x14e) = (param_1 + 0x14e + param_3 * 0x4) + param_2;
    return;
}


void  pass1_1038_57c0(u32 param_1)

{
    pass1_1000_4906((Struct20 *)(param_1 & 0xffff0000 | (param_1 + 0x14e)), 0x0, 0x54);
    return;
}


void  pass1_1038_57dc(u32 param_1, long param_2, i16 param_3)

{
    u16 uVar1;

    uVar1                             = (param_1 >> 0x10);
    (param_1 + param_3 * 0x4 + 0x1a2) = (param_1 + 0x1a2 + param_3 * 0x4) + param_2;
    return;
}


void  pass1_1038_5804(u32 param_1, long param_2, i16 param_3)

{
    u16 uVar1;

    uVar1                             = (param_1 >> 0x10);
    (param_1 + param_3 * 0x4 + 0x1a2) = (param_1 + 0x1a2 + param_3 * 0x4) - param_2;
    return;
}


void  pass1_1038_5cc6(u32 param_1, u32 param_2, u32 param_3, u32 param_4, i16 param_5, u16 param_6)

{
    u32        uVar1;
    u32 u_var2;
    u16        uVar3;
    u16        uVar4;
    u16        uVar5;
    u16        unaff_SS;
    u16       *puVar6;
    i16        local_14;
    i16        local_12;
    i16        local_10;
    u32        uStack14;
    i16        local_a;
    i16        iStack8;
    i16        iStack4;

    puVar6 = pass1_1008_3e38(str_var1(unaff_SS, &local_a));
    uVar4  = (puVar6 >> 0x10);
    do
    {
        iStack4 = 0x0;
        for(uStack14 = 0x0; uStack14 < param_2; uStack14 = uStack14 + 0x1)
        {
            uVar5 = (param_4 >> 0x10);
            if((uStack14 * 0x4 + param_4) != 0x0)
            {
                uVar1 = *(uStack14 * 0x4 + param_4);
                pass1_1008_3f62(str_var1(unaff_SS, &local_a), (uVar1 & 0xffff0000 | (uVar1 + 0xc)));
                pass1_1008_3eb4(str_var1(unaff_SS, &local_a),
                                str_var1(unaff_SS, &local_14),
                                str_var1(unaff_SS, &local_12),
                                str_var1(unaff_SS, &local_10));
                if(local_14 == param_5)
                {
                    uVar5 = (param_3 >> 0x10);
                    if(((uStack14 * 0x4 + param_3) != 0x0) && (u_var2 = (uStack14 * 0x4 + param_3), ((u_var2 + 0x1a) & param_6) != 0x0))
                    {
                        iStack8 = local_12 + -0x1;
                        uVar3   = pass1_1038_5be8(param_1, param_6, 0x7b,
                                                str_var1(unaff_SS, &local_a), &local_a, uVar4, unaff_SS);
                        if(uVar3 != 0x0)
                        {
                            iStack4 = 0x1;
                        }
                        iStack8 = local_12 + 0x1;
                        uVar3   = pass1_1038_5be8(param_1, param_6, 0x7b,
                                                str_var1(unaff_SS, &local_a), &local_a, uVar4, unaff_SS);
                        if(uVar3 != 0x0)
                        {
                            iStack4 = 0x1;
                        }
                        iStack8 = local_12;
                        local_a = local_10 + -0x1;
                        uVar3   = pass1_1038_5be8(param_1, param_6, 0x7c,
                                                str_var1(unaff_SS, &local_a), &local_a, uVar4, unaff_SS);
                        if(uVar3 != 0x0)
                        {
                            iStack4 = 0x1;
                        }
                        local_a = local_10 + 0x1;
                        uVar3   = pass1_1038_5be8(param_1, param_6, 0x7c,
                                                str_var1(unaff_SS, &local_a), &local_a, uVar4, unaff_SS);
                        if(uVar3 != 0x0)
                        {
                            iStack4 = 0x1;
                        }
                    }
                }
            }
        }
    } while(iStack4 != 0x0);
    return;
}


void  pass1_1038_43cc(i16 param_1, u16 param_2, u16 param_3, u16 param_4, i16 param_5, i16 param_6)

{
    void **ppcVar1;
    u16         u_var2;
    u16         uVar3;
    u16         uVar4;
    u32         uVar5;
    u8         *puVar6;
    u16         extraout_DX;
    u16         uVar7;
    i16         iVar8;
    i16         iVar9;
    u16         uVar10;
    u32        *puVar11;
    u32         uVar12;
    u32         uStack22;
    u32         uStack18;
    u32 *puStack14;

    if(param_4 == 0x5)
    {
        pass1_1038_4900(str_var1(param_2, param_1));
        return;
    }
    pass1_1038_53ba(str_var1(param_2, param_1), param_4);
    if((param_6 != 0x0) || (param_5 != 0x0))
    {
        iVar8                     = param_4 * 0x4;
        u_var2                     = (param_1 + iVar8 + 0x14e);
        iVar9                     = ((param_1 + iVar8 + 0x150) - (param_3 >> 0xf)) - (u_var2 < param_3);
        (param_1 + iVar8 + 0x14e) = u_var2 - param_3;
        (param_1 + iVar8 + 0x150) = iVar9;
        if(iVar9 < 0x0)
        {
            (param_1 + iVar8 + 0x14e) = 0x0;
        }
        uVar10  = SEG_1008;
        puVar11 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x1e);
        puVar6  = (puVar11 >> 0x10);
        u_var2   = puVar11;
        pass1_1038_4e78(u_var2, puVar6, str_var1(param_2, param_1), puVar11);
        puStack14 = str_var1(puVar6, u_var2);
        ppcVar1   = (*puStack14 + 0x10);
        uVar3     = u_var2;
        (**ppcVar1)(SEG_1008, u_var2, puVar6);
        uStack18 = str_var1(extraout_DX, uVar3);
        uVar7    = extraout_DX;
        for(uStack22 = 0x0; uStack22 < uStack18; uStack22 = uStack22 + 0x1)
        {
            uVar12 = pass1_1030_1d7c(uVar3, uVar7, puStack14);
            uVar7  = (uVar12 >> 0x10);
            uVar5  = uVar12 & 0xffff;
            for(; uVar4 = uVar5, param_3 != 0x0; param_3 = param_3 - 0x1)
            {
                pass1_1030_cf78(uVar12, param_4);
                uVar5 = uVar4;
                if(uVar4 == 0x0)
                    break;
            }
            uVar10 = SEG_1030;
            if(param_3 == 0x0)
                break;
        }
        if(puStack14 != 0x0)
        {
            ppcVar1 = *puStack14;
            (**ppcVar1)(uVar10, u_var2, puVar6, 0x1);
            return;
        }
    }
    return;
}


void  pass1_1038_44d8(i16 param_1, u16 param_2, u16 param_3, u16 param_4, i16 param_5, i16 param_6)

{
    void **ppcVar1;
    u16          u_var2;
    u16          uVar3;
    u16          uVar4;
    u32          uVar5;
    u8          *puVar6;
    u16          extraout_DX;
    u16          uVar7;
    u16          uVar8;
    Struct697 *iVar9;
    i16          iVar10;
    u16          uVar11;
    u32         *puVar12;
    u32          uVar13;
    u32          uStack22;
    u32          uStack18;
    u32  *puStack14;

    if(param_4 == 0x5)
    {
        pass1_1038_4900(str_var1(param_2, param_1));
        return;
    }
    pass1_1038_53ba(str_var1(param_2, param_1), param_4);
    if((param_6 != 0x0) || (param_5 != 0x0))
    {
        iVar9                     = (Struct697 *)(param_4 * 0x4);
        u_var2                     = (iVar9 + param_1 + 0x14e);
        iVar10                    = ((iVar9 + param_1 + 0x150) - (param_3 >> 0xf)) - (u_var2 < param_3);
        (iVar9 + param_1 + 0x14e) = u_var2 - param_3;
        (iVar9 + param_1 + 0x150) = iVar10;
        if(iVar10 < 0x0)
        {
            (iVar9 + param_1 + 0x14e) = 0x0;
        }
        uVar11  = SEG_1008;
        puVar12 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x1e);
        puVar6  = (puVar12 >> 0x10);
        u_var2   = puVar12;
        pass1_1038_4e78(u_var2, puVar6, str_var1(param_2, param_1), puVar12);
        puStack14 = str_var1(puVar6, u_var2);
        ppcVar1   = (*puStack14 + 0x10);
        uVar3     = u_var2;
        (**ppcVar1)(SEG_1008, u_var2, puVar6);
        uStack18 = str_var1(extraout_DX, uVar3);
        uVar7    = extraout_DX;
        for(uStack22 = 0x0; uStack22 < uStack18; uStack22 = uStack22 + 0x1)
        {
            uVar13 = pass1_1030_1d7c(uVar3, uVar7, puStack14);
            uVar8  = (uVar13 >> 0x10);
            uVar5  = uVar13 & 0xffff;
            uVar7  = uVar8;
            for(; uVar4 = uVar5, param_3 != 0x0; param_3 = param_3 - 0x1)
            {
                pass1_1030_d00c(uVar13, uVar8, param_4);
                uVar5 = uVar4;
                if(uVar4 == 0x0)
                    break;
            }
            uVar11 = SEG_1030;
            if(param_3 == 0x0)
                break;
        }
        if(puStack14 != 0x0)
        {
            ppcVar1 = *puStack14;
            (**ppcVar1)(uVar11, u_var2, puVar6, 0x1);
            return;
        }
    }
    return;
}


void  pass1_1038_45e4(u32 param_1, u16 param_2, i16 param_3, u16 param_4)

{
    i16        *pi_var1;
    void **ppcVar2;
    u32  uVar3;
    u16         uVar4;
    u16         uVar5;
    u16         uVar6;
    u16         uVar7;
    i16         iVar8;
    i16         iVar9;
    i16         iVar10;
    u8         *puVar11;
    i16         iVar12;
    u16         uVar13;
    u16         uVar14;
    bool        bVar15;
    u32        *puVar16;
    u16         uStack28;
    u32 *puStack22;

    uVar14 = (param_1 >> 0x10);
    iVar12 = param_1;
    pass1_1030_38f2(*(iVar12 + 0x1f6), 0x2, param_4);
    iVar8 = param_3;
    uVar4 = param_2;
    pass1_1030_38f2(*(iVar12 + 0x1f6), 0x1, param_4);
    bVar15 = param_2 < uVar4;
    uVar13 = param_2 - uVar4;
    iVar10 = param_3 - iVar8;
    pass1_1030_38f2(*(iVar12 + 0x1f6), 0x4, param_4);
    iVar9 = iVar8;
    uVar5 = uVar4;
    pass1_1030_38f2(*(iVar12 + 0x1f6), 0x3, param_4);
    uVar7  = (iVar12 + 0x24);
    uVar6  = uVar7 + (uVar4 - uVar5);
    iVar10 = (uVar7 >> 0xf) + ((iVar8 - iVar9) - (uVar4 < uVar5)) + CARRY2(uVar7, uVar4 - uVar5) + (iVar10 - bVar15) + CARRY2(uVar6, uVar13);
    if((iVar10 < 0x0) || ((iVar10 < 0x1 && (uVar6 + uVar13 == 0x0))))
    {
        iVar10 = -0x1;
    }
    else
    {
        iVar10 = 0x1;
    }
    pi_var1  = (iVar12 + 0x24);
    *pi_var1 = *pi_var1 + iVar10;
    puVar16 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x16);
    puVar11 = (puVar16 >> 0x10);
    uVar7   = puVar16;
    pass1_1038_4d6e(param_1, puVar16, uVar7, puVar11);
    puStack22 = str_var1(puVar11, uVar7);
    uVar3     = *puStack22;
    ppcVar2   = uVar3 + 0x8;
    uVar5     = uVar7;
    (**ppcVar2)(SEG_1008, uVar7, puVar11);
    if(puStack22 != 0x0)
    {
        ppcVar2 = uVar3;
        (**ppcVar2)(SEG_1008, uVar7, puVar11, 0x1);
    }
    pi_var1  = (iVar12 + 0x24);
    *pi_var1 = *pi_var1 + uVar5 * 0x2;
    iVar10  = (iVar12 + 0x24);
    if(0x64 < iVar10)
    {
        iVar10 = 0x64;
    }
    (iVar12 + 0x24) = iVar10;
    if(iVar10 < 0x0)
    {
        iVar10 = 0x0;
    }
    (iVar12 + 0x24) = iVar10;
    iVar10          = iVar10 / 0xa;
    uStack28        = 0x10;
    if(iVar10 < 0xb)
    {
        uStack28 = 0x14;
    }
    else
    {
        if(iVar10 < 0x15)
        {
            uStack28 = 0x13;
        }
        else
        {
            if(iVar10 < 0x1f)
            {
                uStack28 = 0x12;
            }
            else
            {
                if(iVar10 < 0x29)
                {
                    uStack28 = 0x11;
                }
                else
                {
                    if(iVar10 < 0x33)
                    {
                        uStack28 = 0x10;
                    }
                    else
                    {
                        if(iVar10 < 0x3d)
                        {
                            uStack28 = 0xf;
                        }
                        else
                        {
                            if(iVar10 < 0x47)
                            {
                                uStack28 = 0xe;
                            }
                            else
                            {
                                if(iVar10 < 0x51)
                                {
                                    uStack28 = 0xd;
                                }
                                else
                                {
                                    if(iVar10 < 0x5b)
                                    {
                                        uStack28 = 0xc;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    pass1_1030_3258(*(iVar12 + 0x1f6), uStack28);
    return;
}


void  pass1_1038_4760(Struct700 *param_1)

{
    u16         *puVar1;
    void **ppcVar2;
    u16          uVar3;
    u16          uVar4;
    i16          iVar5;
    u16          uVar6;
    u8          *puVar7;
    u8          *puVar8;
    u16          extraout_DX;
    u16          extraout_DX_00;
    u16          extraout_DX_01;
    u16          extraout_DX_02;
    u16          uVar9;
    u16          extraout_DX_03;
    u16          extraout_DX_04;
    Struct700 *iVar10;
    u16          uVar10;
    u16          uVar11;
    u16          unaff_SS;
    u32         *puVar12;
    u32          uVar13;
    u8           uVar14;
    u8          *puVar15;
    u32          uStack26;
    u32          uStack22;
    u32  *puStack14;
    u32  *puStack10;

    uVar10  = (param_1 >> 0x10);
    iVar10  = (Struct700 *)param_1;
    puVar1  = &iVar10->field_0x22;
    *puVar1 = *puVar1 + iVar10->field_0x20c;
    puVar12 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x26);
    puVar7  = (puVar12 >> 0x10);
    uVar6   = puVar12;
    pass1_1038_4d6e(param_1, puVar12, uVar6, puVar7);
    puStack10 = str_var1(puVar7, uVar6);
    uVar11    = SEG_1008;
    puVar12   = pass1_1008_c6fa(globals->dat_1050_06e0, 0x1a);
    puVar8    = (puVar12 >> 0x10);
    uVar3     = puVar12;
    pass1_1038_4d6e(param_1, puVar12, uVar3, puVar8);
    puStack14 = str_var1(puVar8, uVar3);
    ppcVar2   = (*puStack14 + 0x10);
    uVar4     = uVar3;
    (**ppcVar2)(SEG_1008, uVar3, puVar8);
    uVar14  = uVar6;
    puVar15 = puVar7;
    if((extraout_DX | uVar4) == 0x0)
    {
        ppcVar2 = (*puStack10 + 0x10);
        (**ppcVar2)();
        puVar1  = &iVar10->field_0x22;
        *puVar1 = *puVar1 + uVar4;
        uVar9   = extraout_DX_00;
    }
    else
    {
        ppcVar2 = (*puStack10 + 0x10);
        (**ppcVar2)();
        uStack22 = str_var1(extraout_DX_03, uVar4);
        uVar9    = extraout_DX_03;
        for(uStack26 = 0x0; uStack26 < uStack22; uStack26 = uStack26 + 0x1)
        {
            uVar13 = pass1_1030_1d7c(uVar4, uVar9, puStack10);
            iVar5  = uVar13;
            uVar11 = SUB42(SEG_1028, 0x0);
            func_0x10285a94();
            if(iVar5 == 0x2)
            {
                if((*_PTR_LOOP_1050_65e2 & 0x1) == 0x0)
                    goto LAB_1038_485e;
            }
            else
            {
                if(iVar5 != 0x3)
                {
                LAB_1038_485e:
                    puVar1  = &iVar10->field_0x22;
                    *puVar1 = *puVar1 + 0x1;
                }
            }
            uVar9 = extraout_DX_04;
        }
    }
    if(puStack10 != 0x0)
    {
        ppcVar2 = *puStack10;
        (**ppcVar2)(uVar11, uVar6, puVar7, 0x1, uVar14, puVar15);
        uVar9 = extraout_DX_01;
    }
    if(puStack14 != 0x0)
    {
        ppcVar2 = *puStack14;
        (**ppcVar2)(uVar11, uVar3, puVar8, 0x1);
        uVar9 = extraout_DX_02;
    }
    pass1_1038_45e4(param_1, puStack14, uVar9, unaff_SS);
    if(0x32 < iVar10->field_0x24)
    {
        puVar1  = &iVar10->field_0x22;
        *puVar1 = *puVar1 - 0x1;
    }
    if(iVar10->field_0x24 < 0x32)
    {
        puVar1  = &iVar10->field_0x22;
        *puVar1 = *puVar1 + 0x1;
    }
    if(iVar10->field_0x18 < 0xfa)
    {
        puVar1  = &iVar10->field_0x22;
        *puVar1 = *puVar1 + 0x2;
    }
    else
    {
        if(iVar10->field_0x18 < 0x1c2)
        {
            puVar1  = &iVar10->field_0x22;
            *puVar1 = *puVar1 + 0x1;
        }
        else
        {
            if(0x225 < iVar10->field_0x18)
            {
                if(iVar10->field_0x18 < 0x2ee)
                {
                    puVar1  = &iVar10->field_0x22;
                    *puVar1 = *puVar1 - 0x1;
                }
                else
                {
                    puVar1  = &iVar10->field_0x22;
                    *puVar1 = *puVar1 - 0x2;
                }
            }
        }
    }
    uVar6 = iVar10->field_0x22;
    if(0x64 < uVar6)
    {
        uVar6 = 0x64;
    }
    iVar10->field_0x22 = uVar6;
    if(uVar6 < 0x0)
    {
        uVar6 = 0x0;
    }
    iVar10->field_0x22 = uVar6;
    return;
}


void  pass1_1038_48e0(u32 param_1, i16 param_2)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = (param_1 + 0x20e) + param_2;
    if(0xa < iVar1)
    {
        iVar1 = 0xa;
    }
    (param_1 + 0x20e) = iVar1;
    return;
}


void  pass1_1038_4900(u32 param_1)

{
    i16 *pi_var1;
    u16  u_var2;

    u_var2   = (param_1 >> 0x10);
    pi_var1  = (param_1 + 0x20e);
    *pi_var1 = *pi_var1 + -0x1;
    if(*pi_var1 < 0x0)
    {
        (param_1 + 0x20e) = 0x0;
    }
    return;
}


void  pass1_1038_4b20(u32 param_1, u32 param_2, u32 param_3, u16 param_4)

{
    u32 uVar1;

    uVar1 = *(param_1 + 0xc);
    pass1_1020_c4f4(uVar1, param_2, (param_2 >> 0x10), param_3, (Struct361 *)uVar1, param_4);
    return;
}


void  pass1_1038_4c1a(u32 param_1, u16 param_2, u32 param_3, u16 param_4)

{
    void **ppcVar1;
    u16        u_var2;
    u16        uVar3;
    u32        uVar4;
    u16        uVar5;
    i16        iVar6;
    u16        uVar7;
    u32 uVar8;
    u32        uStack14;
    u32        uStack10;

    uVar7   = (param_1 >> 0x10);
    iVar6   = param_1;
    uVar8   = (iVar6 + 0xc);
    ppcVar1 = ((iVar6 + 0xc) + 0x10);
    (**ppcVar1)();
    uStack10 = str_var1(param_3, param_2);
    for(uStack14 = 0x0; uVar5 = param_3, uStack14 < uStack10; uStack14 = uStack14 + 0x1)
    {
        ppcVar1 = ((iVar6 + 0xc) + 0x4);
        uVar4   = uStack10;
        (**ppcVar1)(param_4, (iVar6 + 0xc), uStack14, uVar8);
        u_var2   = uVar4;
        param_3 = (uVar5 | u_var2);
        if((uVar5 | u_var2) != 0x0)
        {
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, uVar5);
            uVar3   = pass1_1030_6fa0(str_var1(param_3, u_var2));
            param_4 = SEG_1008;
            pass1_1008_c6ae(globals->dat_1050_06e0, uVar3, 0xe);
        }
    }
    return;
}


void  pass1_1038_4cba(void)

{
    pass1_1030_38b8();
    return;
}


char * pass1_1038_4d28(u32 param_1)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    return str_var1((param_1 + 0x1fc), (param_1 + 0x1fa));
}


void  pass1_1038_4f54(u32 param_1, u16 param_2, u16 param_3)

{
    void **ppcVar1;
    u16    u_var2;
    BOOL16 BVar3;
    u32    uVar4;
    u16    extraout_DX;
    u16    uVar5;
    u16    uVar6;
    i16    iVar7;
    u16    uVar8;
    u32    uStack10;
    u32    u_stack6;

    uVar8 = (param_1 >> 0x10);
    iVar7 = param_1;
    if((iVar7 + 0xc) == 0x0)
    {
        param_3 = 0x0;
        uVar5   = 0x0;
    }
    else
    {
        ppcVar1 = ((iVar7 + 0xc) + 0x10);
        (**ppcVar1)();
        uVar5 = extraout_DX;
    }
    u_stack6  = str_var1(uVar5, param_3);
    uStack10 = 0x0;
    do
    {
        if(u_stack6 <= uStack10)
        {
            return;
        }
        uVar4 = u_stack6;
        pass1_1030_1d58(*(iVar7 + 0xc));
        uVar6 = uVar5 | uVar4;
        if(uVar6 != 0x0)
        {
            u_var2 = pass1_1030_6fa0(uVar4 & 0xffff | uVar5 << 0x10);
            BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, param_2);
            if(BVar3 != 0x0)
            {
                return;
            }
        }
        uStack10 = uStack10 + 0x1;
        uVar5    = uVar6;
    } while(true);
}


void  pass1_1038_4fd8(u16 param_1, u32 param_2, u16 param_3)

{
    void **ppcVar1;
    u16    u_var2;
    u32    uVar3;
    u16    extraout_DX;
    u16    uVar4;
    u16    uVar5;
    i16    iVar6;
    u16    uVar7;
    u32    uStack10;
    u32    u_stack6;

    uVar7 = (param_2 >> 0x10);
    iVar6 = param_2;
    if((iVar6 + 0xc) == 0x0)
    {
        param_1 = 0x0;
        uVar4   = 0x0;
    }
    else
    {
        ppcVar1 = ((iVar6 + 0xc) + 0x10);
        (**ppcVar1)();
        uVar4 = extraout_DX;
    }
    u_stack6  = str_var1(uVar4, param_1);
    uStack10 = 0x0;
    do
    {
        if(u_stack6 <= uStack10)
        {
            return;
        }
        uVar3 = u_stack6;
        pass1_1030_1d58(*(iVar6 + 0xc));
        uVar5 = uVar4 | uVar3;
        if(uVar5 != 0x0)
        {
            u_var2 = pass1_1030_6fa0(uVar3 & 0xffff | uVar4 << 0x10);
            if(u_var2 == param_3)
            {
                return;
            }
        }
        uStack10 = uStack10 + 0x1;
        uVar4    = uVar5;
    } while(true);
}


void  pass1_1038_5050(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    void **ppcVar1;
    u16    u_var2;
    u32    uVar3;
    u16    extraout_DX;
    u16    uVar4;
    u16    uVar5;
    i16    iVar6;
    u16    uVar7;
    u32    uStack14;
    u32    uStack10;

    uVar7 = (param_1 >> 0x10);
    iVar6 = param_1;
    if((iVar6 + 0xc) == 0x0)
    {
        param_3 = 0x0;
        uVar4   = 0x0;
    }
    else
    {
        ppcVar1 = ((iVar6 + 0xc) + 0x10);
        (**ppcVar1)();
        uVar4 = extraout_DX;
    }
    uStack10 = str_var1(uVar4, param_3);
    for(uStack14 = 0x0; uStack14 < uStack10; uStack14 = uStack14 + 0x1)
    {
        uVar3 = uStack10;
        pass1_1030_1d58(*(iVar6 + 0xc));
        uVar5 = uVar4 | uVar3;
        if(uVar5 != 0x0)
        {
            u_var2 = pass1_1030_6fa0(uVar3 & 0xffff | uVar4 << 0x10);
            pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, param_2);
        }
        uVar4 = uVar5;
    }
    return;
}


void  pass1_1038_349e(Struct685 *param_1, u32 param_2)

{
    void **ppcVar1;
    u16          u_var2;
    u16          uVar3;
    u16          extraout_DX;
    u16          uVar4;
    u16          uVar5;
    u16          extraout_DX_00;
    Struct685 *iVar7;
    u16          uVar6;
    u32  *puVar7;
    u16          uVar8;
    u16          uVar9;
    u32          uStack10;
    u32          u_stack6;

    uVar6              = (param_1 >> 0x10);
    iVar7              = (Struct685 *)param_1;
    iVar7->field_0x200 = param_2;
    pass1_1038_4d0e(param_1, 0x258);
    uVar3 = param_2;
    pass1_1038_4d0e(param_1, 0x258);
    iVar7->field_0x204 = 0x0;
    iVar7->field_0x206 = 0x0;
    puVar7             = iVar7->field_0xc;
    uVar8              = SUB42(puVar7, 0x0);
    uVar9              = (puVar7 >> 0x10);
    ppcVar1            = (*iVar7->field_0xc + 0x10);
    (**ppcVar1)();
    u_stack6 = str_var1(extraout_DX, uVar3);
    uVar5   = extraout_DX;
    for(uStack10 = 0x0; uStack10 < u_stack6; uStack10 = uStack10 + 0x1)
    {
        puVar7 = pass1_1030_1d7c(uVar3, uVar5, iVar7->field_0xc);
        uVar4  = (puVar7 >> 0x10);
        u_var2  = puVar7;
        uVar5  = uVar4 | u_var2;
        if(uVar5 != 0x0)
        {
            ppcVar1 = (*puVar7 + 0x58);
            (**ppcVar1)(SEG_1030, u_var2, uVar4, param_1, uVar6, uVar8, uVar9);
            (u_var2 + 0x1c) = 0x0;
            uVar5          = extraout_DX_00;
        }
    }
    return;
}
