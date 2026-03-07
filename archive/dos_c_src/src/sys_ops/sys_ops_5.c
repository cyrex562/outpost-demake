
#include "sys_ops_5.h"

#include "address_tables/function_tables.h"
#include "globals.h"
#include "op_int.h"
#include "op_winapi.h"
#include "op_windef.h"
#include "struct_20.h"
#include "struct_43.h"
#include "struct_ops/struct_ops_2.h"
#include "struct_ops/struct_ops_3.h"
#include "structs/structs_6xx/struct_667.h"
#include "unk/unk_15.h"
void  pass1_1028_4aca(u32 param_1, u8 *param_2, i16 param_3, u16 param_4)

{
    u16 *puVar1;

    if((param_1 + 0x20) != 0x0)
    {
        puVar1 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_4, param_2, param_3);
        pass1_1010_ed3e(puVar1);
        pass1_1030_2a2c(puVar1, (puVar1 >> 0x10), param_3, param_4);
    }
    return;
}


void  pass1_1028_2e84(u16 param_1, u32 param_2, u8 *param_3, u16 param_4, u16 param_5, u8 param_6)

{
    u8         *puVar1;
    Struct67 *p_var2;
    u16        *puVar3;
    u16         uVar4;
    u16         uVar5;
    i16         iVar6;
    u16         uVar7;
    u16         uVar8;
    u16         uVar9;
    i16         iVar10;

    pass1_1028_09b8(str_var1(param_2, param_1));
    if((param_2 >> 0x10) == 0x0)
    {
        uVar9  = 0x0;
        iVar10 = 0x8;
        uVar7  = 0x1;
        uVar8  = 0x0;
        uVar5  = 0x0;
        iVar6  = 0x0;
        uVar4  = 0x0;
        p_var2 = (Struct67 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_5, param_3, param_4);
        puVar1 = (p_var2 >> 0x10);
        post_win_msg_1008_a0e4(p_var2,
                               str_var1(uVar5, uVar4), iVar6, uVar7,
                               str_var1(uVar9, uVar8), iVar10, SEG_1008, param_5);
        uVar5  = 0x400;
        iVar6  = 0x3;
        uVar4  = 0x1;
        puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_5, puVar1, param_4);
        puVar1 = (puVar3 >> 0x10);
        pass1_1010_043a(puVar3, str_var1(uVar5, uVar4), iVar6, param_5);
        pass1_1010_043a(puVar3, 0x4000001, 0x4, param_5);
        puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_5, puVar1, param_4);
        puVar1 = (puVar3 >> 0x10);
        pass1_1010_ec84(puVar3, param_5, param_6);
        puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x8, param_5, puVar1, param_4);
        pass1_1010_9766(puVar3, (puVar3 >> 0x10), param_4, param_5);
    }
    return;
}


void  struct_1028_37a6(u16 *param_1, u8 *param_2, u16 param_3, u16 param_4)

{
    u16          uVar1;
    u16          u_var2;
    Struct189 *iVar3;
    u16 uVar3;

    struct_1028_b354(param_1);
    uVar3 = (param_1 >> 0x10);
    iVar3 = (Struct189 *) param_1;
    uVar1 = 0x0;
    iVar3->field_0x20 = 0x0;
    iVar3->field_0x24 = 0x0;
    &iVar3->field_0x28 = 0x0;
    param_1->field_0x0 = addr_table_1028_3e2c;//0x3e2c;
    iVar3->fld2_segment = SEG_1028;
    mem_op_1000_179c(0xa, param_2, 0);
    u_var2 = param_2 | uVar1;
    if (u_var2 == 0x0) {
        &iVar3->field_0x28 = 0x0;
    } else {
        pass1_1020_ba3e((long *)str_var1(param_2, uVar1), 0x5, 0x5, param_4, param_3);
        iVar3->field_0x28 = uVar1;
        iVar3->field_0x2a = u_var2;
    }
    return;
}


void  pass1_1028_3816(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u8 *param_5, u16 param_6, u16 param_7)

{
    u16 uVar1;
    u16 u_var2;

    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    uVar1                      = 0x0;
    (param_1 + 0x20)           = 0x0;
    (param_1 + 0x24)           = 0x0;
    (param_1 + 0x28)           = 0x0;
    param_1 =  0x3e2c;
    param_1->fld2_segment = SEG_1028;
    mem_op_1000_179c(0xa, param_5, 0);
    u_var2 = param_5 | uVar1;
    if(u_var2 == 0x0)
    {
        (param_1 + 0x28) = 0x0;
    }
    else
    {
        pass1_1020_ba3e((long *)str_var1(param_5, uVar1), 0x5, 0x5, param_7, param_6);
        (param_1 + 0x28) = uVar1;
        (param_1 + 0x2a) = u_var2;
    }
    return;
}


void  struct_1028_1f56(u16 *param_1, u8 *param_2)

{
    u32   uVar1;
    u16          u_var2;
    u16 extraout_DX;
    Struct186 *iVar3;
    u16 uVar3;

    struct_1028_b354(param_1);
    uVar3 = (param_1 >> 0x10);
    iVar3 = (Struct186 *) param_1;
    u_var2 = 0x0;
    &iVar3->field_0x20 = 0x0;
    iVar3->field_0x24 = 0x0;
    param_1->field_0x0 = addr_table_1028_2572;//0x2572;
    iVar3->field_0x2 = SEG_1028;
    mem_op_1000_179c(0xc, param_2, 0);
    if ((param_2 | u_var2) == 0x0) {
        &iVar3->field_0x20 = 0x0;
    } else {
        set_struct_1008_574a(str_var1(param_2, u_var2));
        iVar3->field_0x20 = u_var2;
        iVar3->field_0x22 = extraout_DX;
    }
    uVar1         = &iVar3->field_0x20;
    (uVar1 + 0xa) = 0x0;
}


void  pass1_1028_1fc8(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u8 *param_5)

{
    u32 uVar1;
    u16        u_var2;
    u16        extraout_DX;

    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    u_var2                      = 0x0;
    (param_1 + 0x20)           = 0x0;
    (param_1 + 0x24)           = 0x0;
    param_1 =  0x2572;
    param_1->fld2_segment = SEG_1028;
    mem_op_1000_179c(0xc, param_5, 0);
    if((param_5 | u_var2) == 0x0)
    {
        (param_1 + 0x20) = 0x0;
    }
    else
    {
        set_struct_1008_574a(str_var1(param_5, u_var2));
        (param_1 + 0x20) = u_var2;
        (param_1 + 0x22) = extraout_DX;
    }
    uVar1         = (param_1 + 0x20);
    (uVar1 + 0xa) = 0x0;
    return;
}


void  pass1_1028_1824(u32 param_1, u32 *param_2, u32 param_3, u32 param_4, i16 param_5, u16 param_6, i16 param_7, u16 param_8)

{
    BOOL16 BVar1;
    u32   *pu_var2;
    u16    uVar3;
    u16    uVar4;
    u8    *puVar5;
    u16    uVar6;
    u32    uVar7;
    u16    uVar8;
    u16    uVar9;
    u32    local_2a;
    i16    iStack38;
    i16    iStack36;
    u16    uStack34;
    u16    uStack32;
    u8    *puStack30;
    u16    uStack28;
    i16    iStack24;
    u16   *puStack22;
    u16    uStack16;
    u16    uStack14;
    u32    local_c;
    i16    iStack8;
    u32    u_stack6;

    uVar8 = param_1;
    uVar9 = (param_1 >> 0x10);
    pass1_1028_c3aa(uVar8, uVar9, param_2, param_3, param_4, param_8);
    if(param_5 == 0x0)
    {
        return;
    }
    BVar1 = pass1_1028_c314(param_8, param_5, param_6, uVar8, uVar9, param_2, param_3, (param_3 >> 0x10), param_4);
    if(BVar1 == 0x0)
    {
        return;
    }
    pu_var2 = &local_c;
    pass1_1030_64ce(param_8, pu_var2, param_6, globals->_PTR_LOOP_1050_5740, param_2, param_4,
                    str_var1(param_8, pu_var2));
    u_stack6   = *pu_var2;
    puVar5    = (pu_var2 + 0x2);
    uVar6     = (param_2 >> 0x10);
    iStack8   = (param_2 + 0x4);
    puStack22 = (u_stack6 & 0xffff | ZEXT24(puVar5) << 0x10);
    uStack32  = u_stack6;
    uVar3     = puVar5 >> 0x8;
    if((puVar5 >> 0x8) != '\0')
    {
        puStack30 = puVar5;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_stack6, puVar5);
        uStack32  = uVar3;
        puStack30 = puVar5;
        uStack28  = pass1_1030_6fa0(str_var1(puVar5, uVar3));
        if(uStack28 == 0x10)
        {
            if(iStack8 != 0x0)
            {
                globals->PTR_LOOP_1050_50ca = 0x6ab;
                return;
            }
            return;
        }
        if((uStack28 == 0x60) || (uStack28 == 0x61))
        {
            puStack22 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_8, puVar5, param_7);
            uVar7     = pass1_1018_04b8(puStack22);
            uStack34  = (uVar7 >> 0x10);
            uStack16  = uVar7;
            iStack36  = (puStack22 + 0x1e);
            iStack24  = iStack36;
            uStack14  = uStack34;
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uStack16, uStack34);
            uVar4 = pass1_1030_2fac(str_var1(uStack34, iStack36));
            if(uVar4 <= iStack24)
            {
                globals->PTR_LOOP_1050_50ca = 0x6ac;
                return;
            }
            local_2a = *param_2;
            iStack38 = iStack8 + 0x1;
            pu_var2   = &local_2a;
            pass1_1028_c7b6(param_8, uVar6, uVar8, uVar9, str_var1(param_8, pu_var2), param_4);
            if(pu_var2 == 0x0)
            {
                return;
            }
            if(pu_var2 == (&DAT_1050_0004 + 0x2))
            {
                return;
            }
            return;
        }
    }
    globals->PTR_LOOP_1050_50ca = 0x6aa;
    return;
}


void  pass1_1020_ea20(u32 param_1, u16 *param_2, u32 param_3, u32 param_4, u16 param_5, u16 param_6, u8 param_7, u16 param_8)

{
    u16         uVar1;
    void **ppcVar2;
    u16         uVar3;
    char        cVar4;
    u32        *puVar5;
    u16         uVar6;
    u8         *puVar7;
    u8         *extraout_DX;
    i16         unaff_DI;
    u16         uVar8;
    u16         uVar9;
    u8          local_146[0x10c];
    u16         uStack58;
    u8         *puStack56;
    u32         uStack50;
    u16        *puStack46;
    u32 *puStack42;
    u32  uStack38;
    u32  uStack34;
    u32         uStack28;
    u32         local_12;
    i16         iStack14;
    u32 *puStack12;
    u32  uStack8;
    BOOL16      BStack4;

    uVar9 = param_1;
    uVar3 = (param_1 >> 0x10);
    pass1_1028_c3aa(uVar9, uVar3, param_2, param_3, param_4, param_6);
    if(param_5 == 0x0)
    {
        return;
    }
    pass1_1028_c23e(uVar9, uVar3, param_2, param_3, param_4, param_5, param_8, param_6);
    if(param_5 == 0x0)
    {
        return;
    }
    BStack4 = pass1_1028_c314(param_6, param_5, param_8, uVar9, uVar3, param_2, param_3, (param_3 >> 0x10), param_4);
    if(BStack4 == 0x0)
    {
        return;
    }
    pass1_1028_c7b6(param_6, param_8, uVar9, uVar3, param_2, param_4);
    if((((BStack4 == 0x5) || (BStack4 == 0x4)) || (BStack4 == 0x6)) || (BStack4 == 0x9))
    {
        globals->PTR_LOOP_1050_50ca = 0x6a8;
        return;
    }
    if(BStack4 != 0x0)
    {
        return;
    }
    puVar5 = &local_12;
    pass1_1030_64ce(param_6, puVar5, param_8, globals->_PTR_LOOP_1050_5740, param_2, param_4,
                    str_var1(param_6, puVar5));
    uStack38       = *puVar5;
    puStack56      = (puVar5 + 0x2);
    uStack38._3_1_ = (u8)(uStack38 >> 0x18);
    uStack58       = uStack38._3_1_;
    uStack28       = uStack38;
    uStack8        = uStack38;
    if(uStack38._3_1_ == 0x0)
        goto LAB_1020_eb4e;
    uStack8 = uStack38;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uStack8, puStack56);
    uStack38 = str_var1(puStack56, uStack58);
    uStack34 = (uStack58 + 0x2e);
    if(*(uStack34 + 0x4) != param_3)
    {
        globals->PTR_LOOP_1050_50ca = 0x6b7;
        return;
    }
    uStack28  = struct_op_1030_73a8(str_var1(puStack56, uStack58));
    puStack56 = (uStack28 >> 0x10);
    uVar1     = (uStack28 + 0xc);
    uStack58  = uVar1;
    if(uVar1 != 0x41)
    {
        if(0x41 < uVar1)
        {
            if(uVar1 == 0x6b)
            {
                globals->PTR_LOOP_1050_50ca = 0x6b1;
                return;
            }
            if(uVar1 < 0x6c)
            {
                if(uVar1 == 0x42)
                {
                    globals->PTR_LOOP_1050_50ca = 0x6b1;
                    return;
                }
                uStack58 = uVar1 - 0x4b;
                if(uStack58 == 0x0)
                {
                    globals->PTR_LOOP_1050_50ca = 0x6b1;
                    return;
                }
            }
            else
            {
                if(uVar1 == 0x6e)
                {
                    return;
                }
                uStack58 = uVar1 - 0x73;
                if((0x4 < (uVar1 - 0x6e)) && (uStack58 = uVar1 - 0x79, uStack58 == 0x0 || (uVar1 - 0x73) < 0x6))
                {
                    globals->PTR_LOOP_1050_50ca = 0x6b0;
                    return;
                }
            }
            goto LAB_1020_eb4e;
        }
        if(uVar1 != 0x3e)
        {
            if(uVar1 < 0x3f)
            {
                cVar4 = uVar1;
                if(cVar4 != '\v')
                {
                    if(cVar4 == '\x10')
                    {
                        return;
                    }
                    uStack58 = uVar1 & 0xff00 | (u8)(cVar4 - 0x37U);
                    if((u8)(cVar4 - 0x37U) != 0x0)
                        goto LAB_1020_eb4e;
                }
                globals->PTR_LOOP_1050_50ca = 0x6b4;
                return;
            }
            goto LAB_1020_eb4e;
        }
    }
    if((uStack28 + 0x12) == 0x4)
    {
        globals->PTR_LOOP_1050_50ca = 0x6b1;
        return;
    }
LAB_1020_eb4e:
    uVar8 = SEG_1000;
    mem_op_1000_179c(0xb4, puStack56, 0);
    puVar7 = (puStack56 | uStack58);
    if(puVar7 == 0x0)
    {
        iStack14 = 0x0;
        puVar7   = 0x0;
    }
    else
    {
        uVar8    = SUB42(SEG_1040, 0x0);
        iStack14 = string_1040_8520(CONCAT13((puStack56 >> 0x8), CONCAT12(puStack56, uStack58)), globals->PTR_LOOP_1050_0396, 0x24, 0x2, 0x57b, 0x5e8, puVar7, param_6);
    }
    puStack12 = str_var1(puVar7, iStack14);
    ppcVar2   = (*puStack12 + 0x74);
    (**ppcVar2)(uVar8, iStack14, puVar7);
    if(iStack14 != 0x7)
    {
        puStack46      = uStack8;
        uStack34       = uStack8;
        uStack34._3_1_ = (u8)(uStack8 >> 0x18);
        uVar6          = uStack34._3_1_;
        if(uStack34._3_1_ != 0x0)
        {
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uStack8, uStack8);
            uStack50 = str_var1(uStack8, uVar6);
            fn_ptr_1030_7296(str_var1(uStack8, uVar6));
            pass1_1030_730a(uStack50, uVar6, 0x1030, param_6);
            puStack46 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_6, uStack8, unaff_DI);
            pass1_1010_ec68(puStack46, uStack50, param_6);
            puStack42 = struct_op_1030_73a8(uStack50);
            puVar5    = puStack42;
            ppcVar2   = (*puStack42 + 0x24);
            (**ppcVar2)(0x1030, puStack42, (puStack42 >> 0x10));
            uVar6          = pass1_1028_bc4a(puStack42, puVar5, extraout_DX, param_6);
            (uVar9 + 0x24) = uVar6;
            struct_1030_e4fa((Struct100 *)str_var1(param_6, local_146), *(uStack50 + 0x16), param_6, param_7);
            fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_6, local_146));
        }
        return;
    }
    globals->PTR_LOOP_1050_50ca = (&PTR_LOOP_1050_0000 + 0x1);
    return;
}


void  struct_1028_0068(Struct183 *param_1, u8 *param_2)

{
    u16          uVar1;
    u16          extraout_DX;
    Struct183 *iVar2;
    u16          u_var2;

    struct_1028_b354(param_1);
    u_var2              = (param_1 >> 0x10);
    iVar2              = (Struct183 *)param_1;
    uVar1              = 0x0;
    iVar2->field_0x20  = 0x0;
    &iVar2->field_0x22 = 0x0;
    param_1->field_0x0 = 0x8ec;
    iVar2->field_0x2 = SEG_1028;
    mem_op_1000_179c(0xc, param_2, 0);
    if((param_2 | uVar1) == 0x0)
    {
        &iVar2->field_0x22 = 0x0;
    }
    else
    {
        set_struct_1008_574a(str_var1(param_2, uVar1));
        iVar2->field_0x22 = uVar1;
        iVar2->field_0x24 = extraout_DX;
    }
    return;
}


void  pass1_1028_00cc(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u8 *param_5)

{
    u16 uVar1;
    u16 extraout_DX;

    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    uVar1                      = 0x0;
    (param_1 + 0x20)           = 0x0;
    (param_1 + 0x22)           = 0x0;
    param_1 =  0x8ec;
    param_1->fld2_segment = SEG_1028;
    mem_op_1000_179c(0xc, param_5, 0);
    if((param_5 | uVar1) == 0x0)
    {
        (param_1 + 0x22) = 0x0;
    }
    else
    {
        set_struct_1008_574a(str_var1(param_5, uVar1));
        (param_1 + 0x22) = uVar1;
        (param_1 + 0x24) = extraout_DX;
    }
    return;
}

void  pass1_1028_0176(Struct306 *param_1, u32 param_2, u16 param_3, u16 param_4)

{
    u32  *puVar1;
    u16          u_var2;
    void **ppcVar3;
    u32          uVar4;
    u16          uVar5;
    Struct21  *paVar6;
    u32   uVar7;
    u16          uVar8;
    u16          uVar9;
    Struct306 *iVar9;
    Struct298 *iVar8;

    iVar9 = (Struct306 *)param_1;
    uVar8 = (param_1 >> 0x10);
    pass1_1028_b46e(param_1, param_2, param_4);
    puVar1 = iVar9->field_0x22;
    u_var2  = iVar9->field_0x24;
    uVar5  = u_var2 | puVar1;
    paVar6 = str_var1(uVar5, puVar1);
    if(uVar5 != 0x0)
    {
        ppcVar3 = *puVar1;
        paVar6  = (**ppcVar3)();
    }
    mem_op_1000_179c(0xc, (paVar6 >> 0x10), 0);
    if(paVar6 == 0x0)
    {
        uVar7 = 0x0;
    }
    else
    {
        uVar7 = set_struct_1008_574a(paVar6);
    }
    iVar9->field_0x22 = uVar7;
    iVar9->field_0x24 = (uVar7 >> 0x10);
    uVar9             = 0x14;
    uVar4             = pass1_1028_b58e(param_1);
    pass1_1030_7f1a(uVar4, uVar9, param_3);
    return;
}

void  struct_1020_d954(u16 *param_1)

{
    u8          *extraout_DX;
    Struct182 *iVar1;
    i16          unaff_DI;
    u16 uVar1;
    u16 unaff_SS;
    u16 *pu_var2;

    struct_1030_dc96(param_1);
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct182 *) param_1;
    iVar1->field_0x24 = 0x0;
    iVar1->field_0x26 = 0x0;
    &iVar1->field_0x28 = 0x0;
    param_1->field_0x0 = addr_table_1020_e792;//0xe792;
    iVar1->field_0x2 = SEG_1020;
    pu_var2 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, unaff_SS, extraout_DX, unaff_DI);
    iVar1->field_0x28 = pu_var2;
    iVar1->field_0x2a = (pu_var2 >> 0x10);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 * struct_1020_d99e(u16 *param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5, u16 param_6)

{
    i16          unaff_DI;
    u16 *puVar1;
    u16 u_var2;
    Struct178 *iVar2;

    iVar2 = (Struct178 *) param_1;
    u_var2 = (param_1 >> 0x10);
    puVar1 = pass1_1030_dcc2(iVar2, u_var2, param_3, param_4, param_5);
    iVar2->field_0x24 = param_2;
    iVar2->field_0x26 = 0x0;
    &iVar2->field_0x28 = 0x0;
    param_1->field_0x0 = addr_table_1020_e792;//0xe792;
    iVar2->field_0x2 = SEG_1020;
    puVar1 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_6, (puVar1 >> 0x10), unaff_DI);
    iVar2->field_0x28 = puVar1;
    iVar2->field_0x2a = (puVar1 >> 0x10);
    iVar2->field_0x10 = 0x49;
    return param_1;
}

void  pass1_1020_cac2(u32 param_1, u8 *param_2, u16 param_3, u16 param_4, u16 param_5)

{
    i16        *pi_var1;
    void **ppcVar2;
    u8         *puVar3;
    u8         *puVar4;
    u16         uVar5;
    i16         iVar6;
    u16         extraout_DX;
    u16         extraout_DX_00;
    u16         uVar7;
    u16        *puVar8;
    i16         iStack52;
    u8         *puStack36;
    u8          local_1c[0x4];
    u32  uStack24;
    u32 *puStack20;
    u32 *puStack16;
    u16        *puStack12;
    u8         *puStack8;
    u16         u_stack6;
    u8         *puStack4;

    puVar8   = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_5, param_2, param_4);
    puStack4 = (puVar8 >> 0x10);
    u_stack6  = SUB42(puVar8, 0x0);
    puStack8 = globals->PTR_LOOP_1050_13ae;
    if(globals->PTR_LOOP_1050_13ae == (&PTR_LOOP_1050_0000 + 0x1))
    {
        puStack8 = &PTR_LOOP_1050_0002;
    }
    puStack12 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x8, param_5, puStack4, param_4);
    uVar7     = (puStack12 >> 0x10);
    puStack16 = *(puStack12 + 0xa);
    puStack20 = (puStack12 + 0xe);
    pass1_1008_5784(str_var1(param_5, local_1c), puStack16);
    do
    {
        do
        {
            while(true)
            {
                do
                {
                    puVar3 = local_1c;
                    pass1_1008_5b12(puVar3, param_5);
                    if((extraout_DX | puVar3) == 0x0)
                    {
                        return;
                    }
                    iVar6 = (puVar3 + 0x4);
                } while((iVar6 < 0x12) || (SBORROW2(iVar6, 0x12)));
                if(iVar6 != 0x13 && 0x0 < iVar6 + -0x12)
                    break;
                iStack52 = 0x0;
                if(puStack8 == (&PTR_LOOP_1050_0002 + 0x1))
                {
                    iStack52 = (puVar3 + 0x6) / 0x2;
                }
                else
                {
                    if(puStack8 == &DAT_1050_0004)
                    {
                        iVar6    = (puVar3 + 0x6) * 0x3;
                        iStack52 = (iVar6 + (iVar6 >> 0xf & 0x3U)) >> 0x2;
                    }
                }
                pi_var1            = (puVar3 + 0x6);
                *pi_var1           = *pi_var1 - iStack52;
                uVar7             = (puStack16 >> 0x10);
                (puStack16 + 0xa) = 0x0;
                ppcVar2           = (*puStack16 + 0xc);
                (**ppcVar2)(SEG_1008, puStack16, uVar7, puVar3, extraout_DX);
                (puStack16 + 0xa) = 0x1;
                uStack24          = 0x0;
                ppcVar2           = (*puStack20 + 0x4);
                (**ppcVar2)(SEG_1008, puStack20, (puStack20 >> 0x10), puVar3, extraout_DX);
            }
        } while(iVar6 != 0x81);
        puStack36 = 0x0;
        if(puStack8 == &PTR_LOOP_1050_0002)
        {
            iVar6 = (puVar3 + 0x6);
        LAB_1020_cba7:
            puVar4    = ((iVar6 + (iVar6 >> 0xf & 0x3U)) >> 0x2);
            puStack36 = puVar4;
        }
        else
        {
            if(puStack8 == (&PTR_LOOP_1050_0002 + 0x1))
            {
                puVar4    = ((puVar3 + 0x6) / 0x2);
                puStack36 = puVar4;
            }
            else
            {
                puVar4 = puStack8 + -0x4;
                if(puVar4 == 0x0)
                {
                    iVar6 = (puVar3 + 0x6) * 0x3;
                    goto LAB_1020_cba7;
                }
            }
        }
        pass1_1028_b58e(param_1);
        uVar5 = (puVar3 + 0x6) - puStack36;
        pass1_1030_7ddc(CONCAT13((extraout_DX_00 >> 0x8), CONCAT12(extraout_DX_00, puVar4)), (long)uVar5, 0x1e, uVar5, (uVar5 >> 0xf), param_3, param_4, param_5);
        ppcVar2 = (*puStack16 + 0xc);
        (**ppcVar2)(0x1030, puStack16, (puStack16 >> 0x10), puVar3, extraout_DX);
        uStack24 = 0x0;
    } while(true);
}

void  pass1_1020_ce32(i16 param_1, u16 param_2, i16 param_3, u16 param_4)

{
    u8         *puVar1;
    u32         u_var2;
    u16        *puVar3;
    Struct67 *paVar4;
    u16         uVar5;
    u16         uVar6;
    i16         iVar7;
    u16         uVar8;
    u16         uVar9;
    u16         uVar10;
    i16         iVar11;

    pass1_1028_09b8(str_var1(param_2, param_1));
    u_var2  = pass1_1028_b4f2(str_var1(param_2, param_1));
    puVar1 = (u_var2 >> 0x10);
    if((u_var2 + 0x200) != 0x8000002)
    {
        puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x8, param_4, puVar1, param_3);
        puVar1 = (puVar3 >> 0x10);
        pass1_1010_988c(puVar3, (param_1 + 0xc));
        uVar10 = 0x0;
        iVar11 = 0x9;
        uVar8  = 0x1;
        uVar9  = 0x0;
        uVar6  = 0x0;
        iVar7  = 0x0;
        uVar5  = 0x0;
        paVar4 = (Struct67 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_4, puVar1, param_3);
        post_win_msg_1008_a0e4(paVar4,
                               str_var1(uVar6, uVar5), iVar7, uVar8,
                               str_var1(uVar10, uVar9), iVar11, SEG_1008, param_4);
    }
    return;
}

void  pass1_1020_ce9e(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u8  *puVar1;
    u32  u_var2;
    u16 *puVar3;

    pass1_1028_be9e(param_1, param_4, param_2, SEG_1028, param_3);
    if((param_1 + 0x12) == 0x5)
    {
        pass1_1020_cefc(param_1, param_2, param_3);
        u_var2  = pass1_1028_b4f2(param_1);
        puVar1 = (u_var2 >> 0x10);
        if((u_var2 + 0x200) != 0x8000002)
        {
            puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_3, puVar1, param_2);
            pass1_1010_043a(puVar3, (u_var2 + 0x4), 0x5, param_3);
        }
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1020_cefc(u32 param_1, i16 param_2, u16 param_3)

{
    u8  *puVar1;
    u32  u_var2;
    u16 *puVar3;
    u16  uStack12;

    u_var2  = pass1_1028_b4f2(param_1);
    puVar1 = (u_var2 >> 0x10);
    if((u_var2 + 0x200) == 0x8000002)
    {
        uStack12 = 0x32;
    }
    else
    {
        puVar3   = mixed_1010_20ba(globals->u16_1050_0ed0, 0x8, param_3, puVar1, param_2);
        uStack12 = pass1_1010_96c2(puVar3);
        if(0x32 < uStack12)
        {
            uStack12 = 0x32;
        }
        pass1_1010_96a8(puVar3, uStack12);
    }
    pass1_1020_cf6c(param_1, (param_1 >> 0x10), uStack12, u_var2);
    return;
}

void  pass1_1020_d194(u32 param_1, i16 param_2, u16 param_3)

{
    void **ppcVar1;
    u16         u_var2;
    u8         *puVar3;
    u16         uVar4;
    u16         uVar5;
    u32         uVar6;
    u16         uVar7;
    u8         *extraout_DX;
    u8         *puVar8;
    u8         *puVar9;
    u16         extraout_DX_00;
    u16         uVar10;
    u16         uVar11;
    u32         uVar12;
    u16        *puVar13;
    u32        *puVar14;
    u8          uVar15;
    u8          uVar16;
    u8         *puVar17;
    u16         uVar18;
    u16         uVar19;
    u32         uStack42;
    u32         uStack38;
    u32 *puStack34;
    u8          local_4[0x2];

    pass1_1030_bcae(local_4, param_3);
    uVar12 = pass1_1028_b4f2(param_1);
    uVar7  = (uVar12 >> 0x10);
    uVar6  = *(uVar12 + 0x10);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar6, (uVar6 >> 0x10));
    u_var2 = uVar6;
    pass1_1028_b58e(param_1);
    puVar3 = local_4;
    puVar8 = extraout_DX;
    pass1_1030_bd74(puVar3, param_3, uVar6 & 0xffff | uVar7 << 0x10,
                    str_var1(extraout_DX, u_var2), param_3);
    if(puVar3 < 0x0)
    {
        return;
    }
    if(0x1e < puVar3)
    {
        uVar4   = 0x87;
        puVar13 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x9, param_3, puVar8, param_2);
        uVar4   = pass1_1010_65d0(param_3, puVar13, uVar4);
        if(uVar4 == 0x0)
        {
            puVar14 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x15);
            puVar9  = (puVar14 >> 0x10);
            uVar7   = puVar14;
            uVar11  = SUB42(SEG_1038, 0x0);
            pass1_1038_4e78(uVar7, puVar9, uVar12, puVar14);
            puStack34 = str_var1(puVar9, uVar7);
            ppcVar1   = (*puStack34 + 0x10);
            uVar10    = uVar7;
            uVar18    = uVar7;
            puVar8    = puVar9;
            (**ppcVar1)(SEG_1038, uVar7, puVar9);
            uStack38 = str_var1(extraout_DX_00, uVar10);
            uStack42 = 0x0;
            uVar10   = extraout_DX_00;
            while(true)
            {
                if(uStack38 <= uStack42)
                {
                    if(puStack34 == 0x0)
                    {
                        return;
                    }
                    ppcVar1 = *puStack34;
                    (**ppcVar1)(uVar11, uVar7, puVar9, 0x1, uVar18, puVar8, puStack34, puStack34);
                    return;
                }
                uVar15  = u_var2;
                uVar16  = (u_var2 >> 0x8);
                uVar6   = uStack38;
                puVar17 = extraout_DX;
                pass1_1030_1d58(puStack34);
                uVar5  = uVar6;
                puVar3 = local_4;
                uVar11 = SEG_1030;
                uVar19 = uVar10;
                pass1_1030_bd74(puVar3, param_3, uVar6 & 0xffff | uVar10 << 0x10,
                                str_var1(puVar17, CONCAT11(uVar16, uVar15)), param_3);
                if((0x0 < puVar3) && (puVar3 < 0x1f))
                    break;
                uStack42 = uStack42 + 0x1;
            }
            if(puStack34 == 0x0)
            {
                return;
            }
            ppcVar1 = *puStack34;
            (**ppcVar1)(0x1030, uVar7, puVar9, 0x1, uVar18, puVar8, puStack34, puStack34, uVar5, uVar19);
            return;
        }
    }
    return;
}

u16 * pass1_1020_a43e(u16 param_1, u8 *param_2, u16 *param_3)

{
    i16 unaff_DI;

    *param_3        = addr_table_1020_ba36;//0xba36;
    (param_3 + 0x2) = SEG_1020;
    if(globals->_PTR_LOOP_1050_4e74 != 0x0)
    {
        return param_3;
    }
    mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_1, param_2, unaff_DI);
    if((0x0 < globals->PTR_LOOP_1050_13ae) && (!SBORROW2(globals->PTR_LOOP_1050_13ae, 0x1)))
    {
        if(globals->PTR_LOOP_1050_13ae == &PTR_LOOP_1050_0002 || (globals->PTR_LOOP_1050_13ae + -0x1) < 0x1)
        {
            globals->PTR_LOOP_1050_4e74 = 0x44b4;
            goto LAB_1020_a482;
        }
        if(globals->PTR_LOOP_1050_13ae == &DAT_1050_0004)
        {
            globals->PTR_LOOP_1050_4e74 = 0x4b2c;
            goto LAB_1020_a482;
        }
    }
    globals->PTR_LOOP_1050_4e74 = 0x47f0;
LAB_1020_a482:
    globals->_PTR_LOOP_1050_4e74 = str_var1(0x1050, globals->PTR_LOOP_1050_4e74);
    return param_3;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1020_a49a(u16 param_1, u8 param_2, u8 *param_3, u32 param_4, i16 *param_5, u16 param_6)

{
    u32  uVar1;
    i16  unaff_DI;
    u16  u_var2;
    u16  uVar3;
    u8   local_136[0x128];
    u16  uStack14;
    u16  uStack12;
    u32  uStack10;
    u16 *pu_stack6;

    pu_stack6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_1, param_3, unaff_DI);
    uStack12 = (pu_stack6 >> 0x10);
    uVar1    = *(pu_stack6 + 0x20);
    uStack10 = uVar1;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    uStack14 = uVar1;
    if(param_5 != 0x0)
    {
        u_var2 = (param_5 >> 0x10);
        if((param_5 + 0x1) == 0x0)
        {
            uVar3 = SUB42(&PTR_LOOP_1050_4230, 0x0);
        }
        else
        {
            uVar3 = 0x4236;
        }
        pass1_1008_3f32(param_5, str_var1(0x1048, uVar3));
        struct_op_1028_87f0(param_1, param_2, (Struct97 *)str_var1(param_1, local_136), 0x0, 0x0, param_6, param_5, u_var2, *(globals->_PTR_LOOP_1050_4e70 + 0x4), uStack10);
        fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_1, local_136));
        return;
    }
    pass1_1020_abc0(param_1, param_2, param_4, param_6, uVar1 & 0xffff | uStack12 << 0x10);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1020_a54c(u16 param_1, u8 param_2, u8 *param_3, u16 param_4, u16 param_5, i16 param_6)

{
    u32 uVar1;
    i16        unaff_DI;
    u16        u_var2;
    u16        uVar3;
    u16        uVar4;
    u16        uVar5;
    u16        uVar6;
    u8         local_140[0x124];
    u32       *puStack28;
    i16        local_18;
    u16        local_16;
    u32        local_14;
    u8        *puStack16;
    u16        uStack14;
    u16        uStack12;
    u32 uStack10;
    u16       *pu_stack6;

    pu_stack6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_1, param_3, unaff_DI);
    uStack12 = (pu_stack6 >> 0x10);
    uVar1    = (pu_stack6 + 0x20);
    uStack10 = uVar1;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    uStack14  = uVar1;
    local_14  = globals->_PTR_LOOP_1048_4230;
    puStack16 = globals->PTR_LOOP_1048_4234;
    puStack28 = &local_14;
    pass1_1008_3e94(str_var1(param_1, &local_14),
                    str_var1(param_1, &local_18),
                    str_var1(param_1, &local_16));
    if((param_6 < 0x0) || (0x5 < param_6))
    {
        pass1_1008_3e76(str_var1(param_1, &local_14), 0x0, local_18 - 0x9, local_16);
        uVar5 = uStack10;
        uVar6 = (uStack10 >> 0x10);
        uVar1 = (globals->_PTR_LOOP_1050_4e70 + 0x4);
        uVar3 = uVar1;
        uVar4 = (uVar1 >> 0x10);
        u_var2 = 0x14;
    }
    else
    {
        pass1_1008_3e76(
          str_var1(param_1, &local_14), 0x0, (local_18 - param_6) - 0x3, local_16);
        uVar5 = uStack10;
        uVar6 = (uStack10 >> 0x10);
        uVar1 = (globals->_PTR_LOOP_1050_4e70 + 0x4);
        uVar3 = uVar1;
        uVar4 = (uVar1 >> 0x10);
        u_var2 = 0x7b;
    }
    struct_op_1028_87f0(param_1, param_2, (Struct97 *)str_var1(param_1, local_140), 0x0, 0x0, u_var2, &local_14, param_1,
                        str_var1(uVar4, uVar3),
                        str_var1(uVar6, uVar5));
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_1, local_140));
    return;
}

void  pass1_1020_a6ee(u32 param_1, u16 param_2, u16 param_3, u16 param_4, i16 param_5, u16 param_6, u8 param_7)

{
    u32 uVar1;
    u16        u_var2;
    u16       *puVar3;
    u16        uVar4;
    u8         local_13e[0x120];
    u32 uStack30;
    BOOL16     BStack26;
    u32        local_18;
    u16        uStack20;
    i16        iStack18;
    u16        uStack16;
    u32 uStack14;
    u16       *puStack10;
    u32 u_stack6;

    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, 0x2, 0x400);
    u_stack6 = str_var1(param_4, param_3);
    if(((param_4 | param_3) == 0x0) || ((param_3 + 0x200) == 0x8000002))
    {
        puStack10 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_6, (param_4 | param_3), param_5);
        uStack16  = (puStack10 >> 0x10);
        uVar1     = (puStack10 + 0x20);
        uStack14  = uVar1;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
        iStack18 = uVar1;
        puVar3   = pass1_1008_3e38(str_var1(param_6, &local_18));
        u_var2    = (puVar3 >> 0x10);
        BStack26 = pass1_1008_c6ae(globals->dat_1050_06e0, param_2, 0x28);
        if(BStack26 != 0x0)
        {
            uStack20 = 0x1;
        }
        uVar4 = (param_1 >> 0x10);
        pass1_1020_b2da(param_6, param_1, uVar4, (BStack26 != 0x0),
                        str_var1(param_6, &local_18),
                        str_var1(uStack16, iStack18));
        struct_op_1028_87f0(param_6, param_7, (Struct97 *)str_var1(param_6, local_13e), 0x0, 0x0, param_2, &local_18, param_6, *(globals->_PTR_LOOP_1050_4e70 + 0x4), *(iStack18 + 0x4));
        fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_6, local_13e));
        if(BStack26 != 0x0)
        {
            pass1_1020_ad90(param_6, u_var2, param_1, uVar4,
                            str_var1(param_6, &local_18), *(iStack18 + 0x4));
        }
        (uStack30 + 0x1c) = 0x8000001;
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1020_a80e(u16 param_1, u16 param_2, i16 param_3, u16 param_4, u16 param_5, u16 param_6, u8 param_7, i16 param_8)

{
    u16  uVar1;
    u32  u_var2;
    u16  uVar3;
    u16 *puVar4;

    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, 0x2, 0x400);
    if(((param_5 | param_4) == 0x0) || ((param_4 + 0x200) == 0x8000002))
    {
        puVar4 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_6, (param_5 | param_4), param_8);
        uVar3  = (puVar4 >> 0x10);
        u_var2  = *(puVar4 + 0x20);
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
        uVar1 = u_var2;
        if(param_3 == 0xa)
        {
            pass1_1020_b872(param_6, param_7,
                            str_var1(param_2, param_1), u_var2 & 0xffff | uVar3 << 0x10);
            return;
        }
        pass1_1020_b0aa(param_1, param_2, param_3, uVar3);
        if(uVar1 != 0x0)
        {
            pass1_1020_abc0(param_6, param_7,
                            str_var1(param_2, param_1), uVar1, u_var2 & 0xffff | uVar3 << 0x10);
        }
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1020_a89e(u16 param_1, u32 param_2, u32 *param_3, u16 param_4)

{
    i16       *pi_var1;
    u8        *pu_var2;
    u16        uVar3;
    u16        uVar4;
    u32        uVar5;
    u8        *in_DX;
    u16        uVar6;
    u32       *puVar7;
    u16        extraout_DX;
    i16        unaff_DI;
    u8         in_AF;
    u16        uVar8;
    u16        uVar9;
    u8         uVar10;
    u8         uVar11;
    u16        local_5ee;
    u16        uStack1516;
    u32       *puStack1218;
    i16        iStack1214;
    u32 uStack1212;
    u8         local_4b8[0x8];
    u32        uStack1200;
    u16       *puStack1196;
    u8         local_4a8[0x124];
    u8         local_384[0x124];
    u8         local_260[0x124];
    u8         local_13c[0x124];
    u16        local_18;
    u16        local_16;
    u32        local_14;
    u16        uStack16;
    u32        uStack14;
    u32        uStack10;
    u16       *pu_stack6;

    pu_stack6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_1, in_DX, unaff_DI);
    uVar6    = (pu_stack6 >> 0x10);
    uVar5    = *(pu_stack6 + 0x20);
    uStack10 = uVar5;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar5, (uVar5 >> 0x10));
    uStack14    = uVar5 & 0xffff | uVar6 << 0x10;
    local_14    = *param_3;
    uStack16    = (param_3 + 0x1);
    puStack1218 = &local_14;
    puVar7      = &local_14;
    pass1_1008_3e94(str_var1(param_1, puVar7),
                    str_var1(param_1, &local_18),
                    str_var1(param_1, &local_16));
    uVar10 = param_1;
    uVar11 = (param_1 >> 0x8);
    pass1_1008_3e76(CONCAT13(uVar11, CONCAT12(uVar10, &local_14)), 0x0, local_18, local_16 + 0x2);
    struct_op_1028_8888(param_1, in_AF, (Struct100 *)str_var1(param_1, local_13c), 0x0, 0x7a, &local_14, param_1, 0x8000002, 0x4000002, uStack10);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_1, local_13c));
    pass1_1008_3e76(CONCAT13(uVar11, CONCAT12(uVar10, &local_14)), 0x0, local_18 - 0x2, local_16);
    struct_op_1028_8888(param_1, in_AF, (Struct100 *)str_var1(param_1, local_260), 0x0, 0x47, &local_14, param_1, 0x8000002, 0x4000002, uStack10);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_1, local_260));
    pass1_1008_3e76(CONCAT13(uVar11, CONCAT12(uVar10, &local_14)), 0x1, local_18 - 0x2, local_16);
    struct_op_1028_8888(param_1, in_AF, (Struct100 *)str_var1(param_1, local_384), 0x0, 0x6a, &local_14, param_1, 0x8000002, 0x4000002, uStack10);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_1, local_384));
    uVar8 = param_2;
    uVar9 = (param_2 >> 0x10);
    pass1_1020_ad90(param_1, puVar7, uVar8, uVar9, str_var1(param_1, &local_14), uStack10);
    pass1_1008_3e76(CONCAT13(uVar11, CONCAT12(uVar10, &local_14)), 0x1, local_18 - 0x2, local_16 + 0x1);
    struct_op_1028_8888(param_1, in_AF, (Struct100 *)str_var1(param_1, local_4a8), 0x0, 0x7f, &local_14, param_1, 0x8000002, 0x4000002, uStack10);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_1, local_4a8));
    pass1_1020_ad90(param_1, puVar7, uVar8, uVar9, str_var1(param_1, &local_14), uStack10);
    puStack1196 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x8, param_1, puVar7, &uStack14);
    uStack1200  = *(puStack1196 + 0x12);
    pass1_1008_5784(str_var1(param_1, local_4b8), uStack1200);
    iStack1214 = 0x0;
    do
    {
        do
        {
            pu_var2 = local_4b8;
            pass1_1008_5b12(pu_var2, param_1);
            uStack1212 = str_var1(extraout_DX, pu_var2);
            if((extraout_DX | pu_var2) == 0x0)
            {
                pass1_1010_9674(puStack1196);
                return;
            }
        } while(((pu_var2 + 0x4) != 0x3e) && ((pu_var2 + 0x4) != 0x41));
        while(0x0 < (uStack1212 + 0x6))
        {
            if(iStack1214 == 0x0)
            {
                uVar4 = local_16 - 0x2;
            LAB_1020_ab4a:
                uVar3 = local_18 - 0x2;
            LAB_1020_ab51:
                iStack1214 = iStack1214 + 0x1;
                pass1_1008_3e76(CONCAT13(uVar11, CONCAT12(uVar10, &local_14)), 0x0, uVar3, uVar4);
            }
            else
            {
                if(iStack1214 == 0x1)
                {
                    uVar4 = local_16 + 0x2;
                    goto LAB_1020_ab4a;
                }
                if(iStack1214 == 0x2)
                {
                    uVar4 = local_16 + 0x2;
                LAB_1020_ab6e:
                    uVar3 = local_18 + 0x2;
                    goto LAB_1020_ab51;
                }
                if(iStack1214 == 0x3)
                {
                    uVar4 = local_16 - 0x2;
                    goto LAB_1020_ab6e;
                }
                iStack1214 = iStack1214 + 0x1;
                pass1_1020_b2da(param_1, uVar8, uVar9, 0x0, str_var1(param_1, &local_14), uStack14);
            }
            struct_op_1028_8888(param_1, in_AF, (Struct100 *)str_var1(param_1, &local_5ee), 0x0, (uStack1212 + 0x4), &local_14, param_1, 0x8000002, 0x4000002, uStack10);
            fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_1, &local_5ee));
            pi_var1     = (uStack1212 + 0x6);
            *pi_var1    = *pi_var1 + -0x1;
            local_5ee  = addr_table_1008_380a[36]; // 0x389a
            uStack1516 = SEG_1008;
        }
    } while(true);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1020_abc0(u16 param_1, u8 param_2, u32 param_3, u16 param_4, u32 param_5)

{
    u16    uVar1;
    u16    u_var2;
    u16   *puVar3;
    u16    uVar4;
    u8     local_12e[0x124];
    BOOL16 BStack10;
    u32    local_8;
    u16    uStack4;

    puVar3   = pass1_1008_3e38(str_var1(param_1, &local_8));
    uVar1    = (puVar3 >> 0x10);
    BStack10 = pass1_1008_c6ae(globals->dat_1050_06e0, param_4, 0x28);
    if(BStack10 != 0x0)
    {
        uStack4 = 0x1;
    }
    uVar4 = (param_3 >> 0x10);
    pass1_1020_b2da(param_1, param_3, uVar4, (BStack10 != 0x0), str_var1(param_1, &local_8), param_5);
    u_var2 = (param_5 >> 0x10);
    struct_op_1028_87f0(param_1, param_2, (Struct97 *)str_var1(param_1, local_12e), 0x0, 0x0, param_4, &local_8, param_1, *(globals->_PTR_LOOP_1050_4e70 + 0x4), *(param_5 + 0x4));
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_1, local_12e));
    if(BStack10 != 0x0)
    {
        pass1_1020_ad90(param_1, uVar1, param_3, uVar4, str_var1(param_1, &local_8), *(param_5 + 0x4));
    }
    return;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1020_ac6e(u16 param_1, u8 param_2, u32 param_3, i16 param_4, i16 param_5, i16 param_6)

{
    u16        uVar1;
    u32       *pu_var2;
    u32        uVar3;
    u16        uVar4;
    i16        unaff_DI;
    u16       *puVar5;
    u16        uVar6;
    u8         local_146[0x12c];
    i16        iStack26;
    u16        uStack24;
    u32        uStack22;
    u16       *puStack18;
    u32        local_e;
    u16        local_8;
    u32 local_6;

    if(param_4 == 0x0)
    {
        uVar6 = SUB42(&PTR_LOOP_1050_4230, 0x0);
    }
    else
    {
        uVar6 = 0x4236;
    }
    pass1_1008_3eb4(str_var1(0x1048, uVar6),
                    str_var1(param_1, &local_8),
                    str_var1(param_1, &local_6),
                    str_var1(param_1, &local_6 + 0x2));
    if(param_6 == 0x0)
    {
        local_6 = local_6 & 0xffff | (local_6 + param_5) << 0x10;
    }
    else
    {
        if(param_6 == 0x1)
        {
            local_6 = local_6 & 0xffff0000 | (local_6 + param_5);
        }
        else
        {
            if(param_6 == 0x2)
            {
                local_6 = local_6 & 0xffff | (local_6 - param_5) << 0x10;
            }
        }
    }
    puVar5    = pass1_1008_3e54(str_var1(param_1, &local_e), local_8, local_6, (local_6 >> 0x10));
    puStack18 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_1, (puVar5 >> 0x10), unaff_DI);
    uVar4     = (puStack18 >> 0x10);
    uVar3     = *(puStack18 + 0x20);
    uStack22  = uVar3;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar3, (uVar3 >> 0x10));
    iStack26 = uVar3;
    uStack24 = uVar4;
    uVar1    = pass1_1020_b1ae(&local_e, uVar4, param_1, param_3, (param_3 >> 0x10),
                            str_var1(param_1, &local_e), *(iStack26 + 0x4));
    if(uVar1 != 0x0)
    {
        pu_var2 = &local_e;
        pass1_1020_b240(param_1, uVar4, param_3,
                        str_var1(param_1, pu_var2),
                        str_var1(uStack24, iStack26));
        if(pu_var2 != 0x0)
        {
            struct_op_1028_87f0(param_1, param_2, (Struct97 *)str_var1(param_1, local_146), 0x0, 0x0, (-(param_4 == 0x0) & 0xfffb) + 0x7f, &local_e, param_1, *(globals->_PTR_LOOP_1050_4e70 + 0x4), uStack22);
            fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_1, local_146));
        }
    }
    return;
}

void  pass1_1020_ad90(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 *param_5, u32 param_6)

{
    void **ppcVar1;
    u16        *pu_var2;
    u8         *puVar3;
    i16         iVar4;
    u32  uVar5;
    u16         uVar6;
    u16         extraout_DX;
    u8          in_AF;
    u32 *puVar7;
    u16         uVar8;
    u16         uVar9;
    u16         uVar10;
    u16         local_17e;
    u16         uStack380;
    i16         iStack90;
    u32 *puStack78;
    u16         uStack70;
    i16         iStack68;
    u32  u_stack66;
    u32 *pu_stack62;
    u8          local_3a[0xc];
    u32  local_2e;
    u16         uStack42;
    i16         iStack40;
    u16         uStack38;
    i16         local_24;
    i16         local_22;
    u32  uStack32;
    u32  uStack28;
    u32  uStack24;
    u16        *puStack20;
    u16         uStack18;
    i16         iStack16;
    i16         iStack14;
    u32  uStack12;
    u16         local_8;
    i16         local_6;
    i16         local_4;

    pu_var2 = &local_8;
    pass1_1008_3eb4(param_5,
                    str_var1(param_1, pu_var2),
                    str_var1(param_1, &local_6),
                    str_var1(param_1, &local_4));
    pass1_1030_627e(param_1, pu_var2, param_2, globals->_PTR_LOOP_1050_5740, param_5, param_6);
    puStack20 = pu_var2;
    uStack18  = param_2;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, pu_var2, param_2);
    uStack24 = str_var1(param_2, pu_var2);
    uStack28 = (pu_var2 + 0x17);
    uVar5    = (uStack28 + 0x4);
    uStack32 = uVar5;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_6, (param_6 >> 0x10));
    iStack40  = uVar5;
    uStack38  = param_2;
    puVar7    = pass1_1030_5b5c(iStack40, param_2);
    uVar6     = (puVar7 >> 0x10);
    local_2e  = *puVar7;
    uStack42  = (puVar7 + 0x4);
    puStack78 = &local_2e;
    pass1_1008_3e94(str_var1(param_1, &local_2e),
                    str_var1(param_1, &local_24),
                    str_var1(param_1, &local_22));
    iStack14 = local_4 + 0x1;
    uStack12 = str_var1(local_4 + -0x1, local_6 - 0x1U);
    iStack16 = local_6 + 0x1;
    if(local_4 + -0x1 < 0x0)
    {
        uStack12 = (local_6 - 0x1U);
    }
    if(local_22 <= iStack14)
    {
        iStack14 = local_22 + -0x1;
    }
    if(uStack12 < 0x0)
    {
        uStack12 = uStack12 & 0xffff0000;
    }
    if(local_24 <= iStack16)
    {
        iStack16 = local_24 + -0x1;
    }
    pass1_1008_6c90(str_var1(param_1, local_3a));
    pass1_1008_6cec(str_var1(param_1, local_3a), local_8,
                    str_var1(iStack14, iStack16), local_8, uStack12);
    puVar3 = local_3a;
    pass1_1030_6522(globals->_PTR_LOOP_1050_5740, str_var1(param_1, puVar3), param_6, param_1);
    pu_stack62 = str_var1(uVar6, puVar3);
    if((uVar6 | puVar3) != 0x0)
    {
        u_stack66 = 0x0;
        iStack68 = 0x0;
        for(uStack70 = uStack12; uStack70 <= iStack16; uStack70 = uStack70 + 0x1)
        {
            for(puStack78 = uStack12; puStack78 <= iStack14; puStack78 = (puStack78 + 0x1))
            {
                ppcVar1  = (*pu_stack62 + 0x4);
                iVar4    = iStack68;
                iStack68 = iStack68 + 0x1;
                (**ppcVar1)(0x1030, pu_stack62, (pu_stack62 >> 0x10));
                u_stack66       = str_var1(extraout_DX, iVar4);
                u_stack66._3_1_ = (extraout_DX >> 0x8);
                if(u_stack66._3_1_ == '\0')
                {
                    iStack90 = iVar4;
                    if(iVar4 == 0x7)
                    {
                        pass1_1008_3e76(param_5, local_8, uStack70, puStack78);
                        uVar9  = uStack32;
                        uVar10 = (uStack32 >> 0x10);
                        uVar8  = 0x6;
                    }
                    else
                    {
                        if(iVar4 == 0x8)
                        {
                            pass1_1008_3e76(param_5, local_8, uStack70, puStack78);
                            uVar9  = uStack32;
                            uVar10 = (uStack32 >> 0x10);
                            uVar8  = 0x7;
                        }
                        else
                        {
                            if(iVar4 != 0x9)
                                goto LAB_1020_af1c;
                            pass1_1008_3e76(param_5, local_8, uStack70, puStack78);
                            uVar9  = uStack32;
                            uVar10 = (uStack32 >> 0x10);
                            uVar8  = 0x8;
                        }
                    }
                    struct_op_1028_87f0(param_1, in_AF, (Struct97 *)str_var1(param_1, &local_17e), 0x0, 0x0, uVar8, param_5, (param_5 >> 0x10),
                                        str_var1(uVar10, uVar9), param_6);
                    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748,
                                     str_var1(param_1, &local_17e));
                    local_17e = addr_table_1008_380a[36]; // 0x389a
                    uStack380 = SEG_1008;
                }
            LAB_1020_af1c:
            }
        }
    }
    return;
}

void  pass1_1020_87c2(Struct281 *param_1, u16 param_2, i16 param_3)

{
    u32   uVar1;
    Struct281 *iVar2;
    u16          u_var2;
    u16         *puVar3;
    u8           local_12[0x8];
    i16          iStack10;
    u16         *puStack8;
    i16          iStack4;

    struct_1020_847a(param_1, 0x4, param_2);
    iStack4  = 0x4;
    iVar2    = (Struct281 *)param_1;
    iVar2    = (Struct281 *)&iVar2->field_0x16;
    puStack8 = (param_1 & 0xffff0000 | ZEXT24(iVar2));
    do {
        pass1_1008_3e38(puStack8);
        puStack8 = (puStack8 & 0xffff0000 | (puStack8 + 0x6));
        iStack4 = iStack4 + -0x1;
    } while (iStack4 != 0x0);
    u_var2 = (param_1 >> 0x10);
    &iVar2->field_0x2e = 0x0;
    puVar3 = pass1_1008_3e38((param_1 & 0xffff0000 | &iVar2->field_0x32));
    iVar2->field_0x38 = 0x0;
    param_1->field_0x0 = addr_table_1020_8a84;//0x8a84;
    iVar2->field_0x2 = SEG_1020;
    puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x29, param_2, (puVar3 >> 0x10), param_3);
    iVar2->field_0x2e = puVar3;
    iVar2->field_0x30 = (puVar3 >> 0x10);
    iStack10 = 0x0;
    do {
        uVar1 = &iVar2->field_0x2e;
        pass1_1018_26d8(uVar1, (uVar1 >> 0x10), iStack10,
                        (param_1 & 0xffff0000 | (&iVar2->field_0x16 + iStack10 * 0x6)));
        uVar1 = &iVar2->field_0x2e;
        pass1_1020_8712(param_1 & 0xffff | u_var2 << 0x10,
                        str_var1(iVar2->field_0xa, iVar2->field_0x8 + iStack10 * 0x8), *(Struct76 **)(uVar1 + 0x2e + iStack10 * 0x4), (param_1 & 0xffff0000 | (&iVar2->field_0x16 + iStack10 * 0x6)));
        iStack10 = iStack10 + 0x1;
    } while(iStack10 < 0x4);
    uVar1 = &iVar2->field_0x2e;
    pass1_1018_2548(uVar1, (uVar1 >> 0x10), (param_1 & 0xffff0000 | &iVar2->field_0x32));
    uVar1             = &iVar2->field_0x2e;
    iVar2->field_0x38 = (uVar1 + 0x6e);
    pass1_1020_8712(param_1 & 0xffff | u_var2 << 0x10,
                    str_var1(param_2, local_12), (Struct76 *)iVar2->field_0x38, (param_1 & 0xffff0000 | &iVar2->field_0x32));
    return;
}

void  pass1_1020_8908(u32 param_1, u32 param_2, u16 param_3)

{
    Struct76  *paVar1;
    u32   u_var2;
    u16          uVar3;
    u16          uVar4;
    u8          *puVar5;
    u8          *puVar6;
    u16          uVar7;
    Struct284 *iVar8;
    i16          iVar9;
    i16          iVar10;
    u16          uVar11;
    u16          uVar12;
    u32          uVar13;
    Struct110 *paStack28;
    i16          iStack4;

    for(iStack4 = 0x0; iVar8 = (Struct284 *)param_1, uVar11 = (param_1 >> 0x10), iStack4 < 0x4; iStack4 = iStack4 + 0x1)
    {
        if(iVar8->field_0x4 == 0x0)
        {
            u_var2  = iVar8->field_0xc;
            uVar11 = (u_var2 >> 0x10);
            iVar10 = u_var2;
            iVar9  = iStack4 * 0x4;
            if(((iVar10 + iVar9 + 0x2) | (iVar10 + iVar9)) != 0x0)
            {
                pass1_1008_5236(*(iVar10 + iVar9));
            }
        }
        else
        {
            u_var2  = iVar8->field_0x2e;
            paVar1 = *(Struct76 **)(u_var2 + 0x2e + iStack4 * 0x4);
            uVar13 = pass1_1008_4772(paVar1);
            puVar5 = (uVar13 >> 0x10);
            uVar3  = uVar13;
            u_var2  = iVar8->field_0xc;
            iVar10 = iStack4 * 0x4;
            if((u_var2 + iVar10) == 0x0)
            {
                puVar6 = puVar5;
                uVar4 = uVar3;
                mem_op_1000_179c(0x14, puVar5, 0);
                paStack28 = (Struct110 *)str_var1(puVar6, uVar4);
                if((puVar6 | uVar4) == 0x0)
                {
                    u_var2                   = iVar8->field_0xc;
                    (u_var2 + iStack4 * 0x4) = 0x0;
                }
                else
                {
                    uVar4 = &iVar8->field_0x16 + iStack4 * 0x6;
                    uVar7 = uVar11;
                    pass1_1008_50c2(paStack28, *(uVar3 + 0x8), *(uVar3 + 0x4), (param_1 & 0xffff0000 | uVar4), param_2);
                    u_var2                  = iVar8->field_0xc;
                    uVar12                 = (u_var2 >> 0x10);
                    iVar9                  = u_var2;
                    (iVar9 + iVar10)       = uVar4;
                    (iVar9 + iVar10 + 0x2) = uVar7;
                }
                u_var2 = iVar8->field_0xc;
                pass1_1008_5134(*(u_var2 + iStack4 * 0x4));
            }
            u_var2 = iVar8->field_0xc;
            pass1_1008_5236(*(u_var2 + iStack4 * 0x4));
            pass1_1008_4480(param_2, (param_1 & 0xffff0000 | (&iVar8->field_0x16 + iStack4 * 0x6)), paVar1, param_3);
        }
    }
    if(iVar8->field_0x4 != 0x0)
    {
        pass1_1008_4480(param_2, (param_1 & 0xffff0000 | &iVar8->field_0x32), iVar8->field_0x38, param_3);
    }
    return;
}

void  pass1_1020_8a9c(u16 *param_1)

{
    u32  uVar1;
    u32         u_var2;
    u16         uVar3;
    u16         uVar4;
    u16         unaff_SS;
    u16        *puVar5;
    Struct76 *paVar6;
    Struct43 *paVar7;
    i16         iVar8;
    u16         uVar9;
    u16        *puStack76;
    u8          local_48[0x1e];
    u8          local_2a[0x24];
    u16         u_stack6;
    u16 uStack4;

    iVar8 = param_1;
    uVar9 = (param_1 >> 0x10);
    struct_1020_847a(param_1, 0x2, unaff_SS);
    uVar3 = iVar8 + 0x16;
    pass1_1008_3e38((param_1 & 0xffff0000 | uVar3));
    puStack76 = (param_1 & 0xffff0000 | (iVar8 + 0x1cU));
    puVar5 = pass1_1008_3e38((param_1 & 0xffff0000 | (iVar8 + 0x1cU)));
    (iVar8 + 0x22) = 0x0;
    param_1->field_0x0 = addr_table_1020_8e92;//0x8e92;
    (iVar8 + 0x2) = SEG_1020;
    puVar5 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x29, unaff_SS, (puVar5 >> 0x10), uVar9);
    uVar4 = (puVar5 >> 0x10);
    (iVar8 + 0x22) = puVar5;
    (iVar8 + 0x24) = uVar4;
    pass1_1018_2678((iVar8 + 0x22), uVar4, (param_1 & 0xffff0000 | uVar3));
    paVar6 = (Struct76 *) pass1_1018_268e(*(iVar8 + 0x22));
    uStack4 = (paVar6 >> 0x10);
    u_stack6 = SUB42(paVar6, 0x0);
    pass1_1020_8712(param_1 & 0xffff | uVar9 << 0x10, *(i16 **) (iVar8 + 0x8), paVar6, (param_1 & 0xffff0000 | uVar3));
    uVar1 = (iVar8 + 0x22);
    pass1_1018_26c2(uVar1, (uVar1 >> 0x10), puStack76);
    paVar7 = unk_io_op_1010_830aglobals->dat_1050_14cc, 0x2, unaff_SS);
    struct_op_1008_48fe((Struct81 *)CONCAT13((unaff_SS >> 0x8), CONCAT12(unaff_SS, local_2a)), 0x1, paVar7, (paVar7 >> 0x10));
    struct_op_1008_3f92((Struct76 *)str_var1(unaff_SS, local_48), (Struct83 *)str_var1(unaff_SS, local_2a));
    u_var2 = *(iVar8 + 0x8);
    pass1_1020_8712(param_1 & 0xffff | uVar9 << 0x10, (u_var2 & 0xffff0000 | (u_var2 + 0x8)), (Struct76 *)str_var1(unaff_SS, local_48), puStack76);
    pass1_1008_41bc(str_var1(unaff_SS, local_48));
    close_file_1008_496c(local_2a, unaff_SS);
    return;
}

void  pass1_1020_8eaa(u16 *param_1, u16 param_2)

{
    u16          uVar1;
    u16          u_var2;
    u8          *puVar3;
    Struct668 *iVar4;
    u16          uVar4;
    u16         *puVar5;
    Struct43  *paVar6;
    u8           local_a[0x8];

    struct_1020_847a(param_1, 0x25, param_2);
    uVar4 = (param_1 >> 0x10);
    iVar4 = (Struct668 *) param_1;
    &iVar4->field_0x16 = 0x0;
    iVar4->field_0xaa = 0x0;
    uVar1 = &iVar4->field_0xae;
    puVar5 = pass1_1008_3e38((param_1 & 0xffff0000 | uVar1));
    &iVar4->field_0xb4 = 0x0;
    iVar4->field_0xb8 = 0xffff;
    &iVar4->field_0xba = 0x0;
    param_1->field_0x0 = addr_table_1020_9204;//0x9204;
    iVar4->fld2_segment = SEG_1020;
    puVar5 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x29, param_2, (puVar5 >> 0x10), uVar4);
    u_var2 = (puVar5 >> 0x10);
    iVar4->field_0x16 = puVar5;
    iVar4->field_0x18 = u_var2;
    pass1_1018_2646(iVar4->field_0x16, u_var2, (param_1 & 0xffff0000 | uVar1));
    paVar6 = unk_io_op_1010_830aglobals->dat_1050_14cc, 0x1ce, param_2);
    puVar3 = (paVar6 >> 0x10);
    iVar4->field_0xb4 = paVar6;
    iVar4->field_0xb6 = puVar3;
    pass1_1020_8712(param_1 & 0xffff | uVar4 << 0x10,
                    str_var1(param_2, local_a), (Struct76 *)(paVar6 & 0xffff0000 | iVar4->field_0xb4), (param_1 & 0xffff0000 | uVar1));
    puVar5            = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_2, puVar3, uVar4);
    iVar4->field_0xba = puVar5;
    iVar4->field_0xbc = (puVar5 >> 0x10);
    return;
}

void  pass1_1020_915a(Struct669 *param_1, u8 *param_2, i16 param_3, u16 param_4)

{
    i16          iVar1;
    Struct669 *iVar2;
    u16          u_var2;
    u16         *puVar3;
    Struct43  *paVar4;
    u16          uStack12;

    puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_4, param_2, param_3);
    iVar1  = (puVar3 + 0x1e);
    u_var2  = (param_1 >> 0x10);
    iVar2  = (Struct669 *)param_1;
    if(iVar2->field_0xb8 != iVar1)
    {
        uStack12 = 0x1ce;
        if(iVar1 == 0x1)
        {
            uStack12 = 0x1cf;
        }
        else
        {
            if(iVar1 == 0x2)
            {
                uStack12 = 0x1d0;
            }
            else
            {
                if(iVar1 == 0x3)
                {
                    uStack12 = 0x1d1;
                }
                else
                {
                    if(iVar1 == 0x4)
                    {
                        uStack12 = 0x1d2;
                    }
                }
            }
        }
        paVar4            = unk_io_op_1010_830aglobals->dat_1050_14cc, uStack12, param_4);
        iVar2->field_0xb4 = paVar4;
        iVar2->field_0xb6 = (paVar4 >> 0x10);
        iVar2->field_0xb8 = iVar1;
    }
    return;
}

void  get_sys_metrics_1020_7c1a(u16 *param_1, u32 param_2, u16 param_3)

{
    u16 IVar1;
    Struct56 *iVar3;
    u16 uVar3;
    u16 uVar4;
    u16 uVar1;

    uVar3 = (param_2 >> 0x10);
    uVar1 = (param_2 + 0x8);
    uVar4 = (param_1 >> 0x10);
    iVar3 = (Struct56 *) param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar3->field_0x2 = SEG_1008;
    param_1->field_0x0 = addr_table_1008_3aa0[2];//0x3aa8;
    iVar3->field_0x2 = SEG_1008;
    iVar3->field_0x4 = uVar1;
    param_1->field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    iVar3->field_0x2 = SEG_1008;
    iVar3->field_0x6 = param_2;
    iVar3->field_0xa = 0x0;
    iVar3->field_0xe = 0x0;
    iVar3->field_0x10 = 0x0;
    iVar3->field_0x12 = 0x0;
    param_1->field_0x0 = addr_table_1020_7f72;//0x7f72;
    iVar3->field_0x2 = SEG_1020;
    iVar3->field_0xa = (param_2 + 0xe4);
    IVar1 = GetSystemMetrics16(param_3);
    iVar3->field_0xe = IVar1;
    IVar1 = GetSystemMetrics16((u16) LAST_SEGMENT);
    iVar3->field_0x10 = IVar1;
    IVar1 = GetSystemMetrics16((u16) LAST_SEGMENT);
    iVar3->field_0x12 = IVar1;
    return;
}

void  pass1_1020_8360(u16 *param_1, u16 param_2)

{
    u32   uVar1;
    u16 u_var2;
    u16 *puVar3;
    u16 uVar4;
    Struct667 *iVar4;

    iVar4 = (Struct667 *) param_1;
    uVar4 = (param_1 >> 0x10);
    struct_1020_847a(param_1, 0x1, param_2);
    puVar3 = pass1_1008_3e38((param_1 & 0xffff0000 | &iVar4->field_0x16));
    &iVar4->field_0x1c_addr_base = 0x0;
    param_1->field_0x0 = addr_table_1020_8462;//0x8462;
    iVar4->field_0x2 = SEG_1020;
    puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x29, param_2, (puVar3 >> 0x10), uVar4);
    u_var2 = (puVar3 >> 0x10);
    iVar4->field_0x1c_addr_base = puVar3;
    iVar4->field_0x1e = u_var2;
    pass1_1018_26f8(iVar4->field_0x1c_addr_base, u_var2, (param_1 & 0xffff0000 | &iVar4->field_0x16));
    uVar1 = &iVar4->field_0x1c_addr_base;
    pass1_1020_8712(param_1 & 0xffff | uVar4 << 0x10, iVar4->field_0x8, *(Struct76 **) (uVar1 + 0x2a),
                    (param_1 & 0xffff0000 | &iVar4->field_0x16));
}

void  struct_1020_847a(u16 *param_1, i16 param_2, u16 param_3) {
    u16 uVar1;
    u8 *pu_var2;
    Struct280 *iVar3;
    i16 iVar4;
    u16 *puVar5;

    iVar4 = (param_1 >> 0x10);
    iVar3 = (Struct280 *) param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar3->field_0x2 = SEG_1008;
    iVar3->field_0x4 = 0x0;
    iVar3->field_0x6 = param_2;
    iVar3->field_0x8 = (Struct20 *) 0x0;
    iVar3->field_0xc = (Struct20 *) 0x0;
    puVar5 = pass1_1008_3e38((param_1 & 0xffff0000 | ZEXT24(iVar3 + 0x1)));
    param_1->field_0x0 = addr_table_1020_87aa;//0x87aa;
    iVar3->field_0x2 = SEG_1020;
    puVar5 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x48, param_3, (puVar5 >> 0x10), iVar4);
    pu_var2 = (puVar5 >> 0x10);
    pass1_1008_3f62((param_1 & 0xffff0000 | ZEXT24(iVar3 + 0x1)), (puVar5 & 0xffff0000 | (puVar5 + 0xe)));
    uVar1 = iVar3->field_0x6 << 0x3;
    mem_op_1000_179c(uVar1, pu_var2, 0);
    &iVar3->field_0x8 = uVar1;
    (&iVar3->field_0x8 + 0x2) = pu_var2;
    uVar1 = iVar3->field_0x6 << 0x2;
    mem_op_1000_179c(uVar1, pu_var2, 0);
    &iVar3->field_0xc = uVar1;
    (&iVar3->field_0xc + 0x2) = pu_var2;
    pass1_1000_4906(iVar3->field_0x8, 0x0, iVar3->field_0x6 << 0x3);
    pass1_1000_4906(iVar3->field_0xc, 0x0, iVar3->field_0x6 << 0x2);
}
void  pass1_1020_62e0(i16 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32 *puVar1;
    void **ppcVar2;
    u16        *puVar3;
    u32  uVar4;
    u8         *extraout_DX;
    u8         *puVar5;
    u8         *puVar6;
    u16         uVar7;
    u8         *extraout_DX_00;
    i16         unaff_DI;
    u16        *puVar8;
    u16         uVar9;
    u16         uVar10;
    i16         iVar11;
    u16         uVar12;

    set_struct_op_1020_921c(str_var1(param_2, param_1), param_3);
    (param_1 + 0x14)           = 0x0;
    (param_1 + 0x2c)           = 0x0;
    param_1 =  addr_table_1020_67c2;//0x67c2;
    param_1->fld2_segment      = SEG_1020;
    puVar6                     = extraout_DX;
    puVar3 = pass1_1000_4906((Struct20 *)str_var1(param_2, param_1 + 0x18), 0x0, 0x14);
    mem_op_1000_179c(0x3c, puVar6, 0);
    puVar5 = (puVar6 | puVar3);
    if(puVar5 == 0x0)
    {
        (param_1 + 0x1c) = 0x0;
    }
    else
    {
        pass1_1020_87c2(str_var1(puVar6, puVar3), param_4, unaff_DI);
        *(u16 **)(param_1 + 0x1c) = puVar3;
        (param_1 + 0x1e)          = puVar5;
    }
    mem_op_1000_179c(0x26, puVar5, 0);
    puVar6 = (puVar5 | puVar3);
    if(puVar6 == 0x0)
    {
        puVar3 = 0x0;
        puVar6 = 0x0;
    }
    else
    {
        pass1_1020_8a9c(str_var1(puVar5, puVar3));
    }
    *(u16 **)(param_1 + 0x20) = puVar3;
    (param_1 + 0x22) = puVar6;
    mem_op_1000_179c(0xbe, puVar6, 0);
    puVar5 = (puVar6 | puVar3);
    if(puVar5 == 0x0)
    {
        puVar3 = 0x0;
        puVar5 = 0x0;
    }
    else
    {
        pass1_1020_8eaa(str_var1(puVar6, puVar3), param_4);
    }
    *(u16 **)(param_1 + 0x24) = puVar3;
    (param_1 + 0x26) = puVar5;
    mem_op_1000_179c(0x20, puVar5, 0);
    puVar6 = (puVar5 | puVar3);
    if(puVar6 == 0x0)
    {
        puVar3 = 0x0;
        puVar6 = 0x0;
    }
    else
    {
        pass1_1020_8360(str_var1(puVar5, puVar3), param_4);
    }
    *(u16 **)(param_1 + 0x28) = puVar3;
    (param_1 + 0x2a)          = puVar6;
    pass1_1020_6746(str_var1(param_2, param_1), 0x1, 0x4);
    puVar8           = mixed_1010_20ba(globals->u16_1050_0ed0, 0x29, param_4, puVar6, unaff_DI);
    uVar7            = (puVar8 >> 0x10);
    (param_1 + 0x14) = puVar8;
    (param_1 + 0x16) = uVar7;
    uVar10           = 0x0;
    uVar9            = (param_1 + 0x14);
    ppcVar2          = ((param_1 + 0x14) + 0x4);
    iVar11           = param_1;
    uVar12           = param_2;
    (**ppcVar2)();
    (param_1 + 0x6) = (param_1 + 0x14);
    uVar4           = (param_1 + 0x14);
    puVar1          = (uVar4 + 0xa);
    uVar4           = str_var1(param_2, param_1 + 0xa);
    ppcVar2         = (*puVar1 + 0x8);
    (**ppcVar2)(SEG_1010, puVar1, (puVar1 >> 0x10), uVar4, uVar9, uVar7, uVar10, iVar11, uVar12);
    (param_1 + 0x12) = uVar4;
    (param_1 + 0x10) = 0x1;
    puVar8           = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_4, extraout_DX_00, unaff_DI);
    (param_1 + 0x2c) = puVar8;
    (param_1 + 0x2e) = (puVar8 >> 0x10);
    return;
}

void  pass1_1020_61c4(u16 param_1, u16 param_2, u32 param_3, u16 *param_4, u8 *param_5, i16 param_6, u16 param_7)

{
    u32  uVar1;
    u16  u_var2;
    u16 *puVar3;

    puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_7, param_5, param_6);
    u_var2  = (puVar3 >> 0x10);
    uVar1  = *(puVar3 + 0x20);
    pass1_1030_8308(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), param_3, param_4, uVar1, uVar1, u_var2);
    *param_4 = (puVar3 + 0x1e);
    return;
}

void  pass1_1020_3540(u16 param_1, u16 param_2, i16 param_3, u16 *param_4, u8 *param_5, u16 param_6)

{
    u16          uVar1;
    Struct279 *iVar2;
    i16          iStack18;
    i16          iStack12;
    i16          iStack10;
    i16          local_6;
    i16          local_4;

    pass1_1008_3e94(param_4, str_var1(param_6, &local_6), str_var1(param_6, &local_4));
    if(param_3 == 0x0)
    {
        iStack12 = 0x3;
        iStack10 = 0x42a6;
    }
    else
    {
        if(param_3 == 0x1)
        {
            iStack12 = 0x4;
            iStack10 = s_SITEICON_1050_428d + 0x9;
        }
        else
        {
            if(param_3 != 0x2)
            {
                return;
            }
            iStack12 = 0x4;
            iStack10 = 0x42b2;
        }
    }
    uVar1 = iStack12 << 0x2;
    mem_op_1000_179c(uVar1, param_5, 0);
    for(iStack18 = 0x0; iStack18 < iStack12; iStack18 = iStack18 + 0x1)
    {
        iVar2                 = (Struct279 *)(iStack18 * 0x4);
        (iVar2 + uVar1)       = (iVar2 + iStack10) + local_4;
        (iVar2 + uVar1 + 0x2) = (iVar2 + iStack10 + 0x2) + local_6;
    }
    return;
}

void  pass1_1020_1eea(u16 *param_1, u32 param_2, u16 param_3, u8 *param_4, i16 param_5, u16 param_6) {
    void **ppcVar1;
    u16 u_var2;
    Struct663 *iVar3;
    u16 uVar3;
    u16 *puVar4;

    uVar3 = (param_1 >> 0x10);
    iVar3 = (Struct663 *) param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar3->fld2_segment = SEG_1008;
    param_1->field_0x0 = addr_table_1008_3aa0[2];//0x3aa8;
    iVar3->fld2_segment = SEG_1008;
    iVar3->field_0x4 = param_3;
    param_1->field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    iVar3->fld2_segment = SEG_1008;
    iVar3->field_0x6 = 0x0;
    iVar3->field_0xa = param_2;
    param_1->field_0x0 = addr_table_1020_2518;//0x2518;
    iVar3->fld2_segment = SEG_1020;
    puVar4 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x39, param_6, param_4, param_5);
    u_var2 = (puVar4 >> 0x10);
    &iVar3->field_0x6 = puVar4;
    (&iVar3->field_0x6 + 0x2) = u_var2;
    ppcVar1 = (*iVar3->field_0x6 + 0x4);
    (**ppcVar1)(SEG_1010, &iVar3->field_0x6, u_var2, 0x0, param_1);
}

u32  pass1_1020_23f2(u16 param_1, u16 param_2, u16 *param_3, u8 *param_4, u16 param_5)

{
    i16 *pi_var1;
    i16  iStack18;
    i16  local_6;
    i16  local_4;

    pi_var1 = &local_6;
    pass1_1008_3e94(param_3, str_var1(param_5, pi_var1), str_var1(param_5, &local_4));
    mem_op_1000_179c(0xc, param_4, 0);
    for(iStack18 = 0x0; iStack18 < 0x3; iStack18 = iStack18 + 0x1)
    {
        pi_var1[iStack18 * 0x2]       = (iStack18 * 0x4 + 0x4270) + local_4;
        pi_var1[iStack18 * 0x2 + 0x1] = (iStack18 * 0x4 + 0x4272) + local_6;
    }
    return str_var1(param_4, pi_var1);
}

void  pass1_1020_25c0(Struct277 *param_1, u16 param_2, u16 param_3)

{
    i16         *pi_var1;
    void **ppcVar2;
    u16          uVar3;
    u16          uVar4;
    Struct277 *iVar3;
    u16          uVar5;
    Struct57  *paVar6;
    u32  *pu_stack6;

    paVar6 = str_var1(param_3, param_2);
    uVar5  = (param_1 >> 0x10);
    iVar3  = (Struct277 *)param_1;
    if(iVar3->field_0xee != 0x0)
    {
        ppcVar2 = (*iVar3->field_0xee + 0x8);
        paVar6  = (**ppcVar2)();
    }
    if(iVar3->field_0xea == 0x0)
    {
        iVar3->field_0xea = 0x1;
        mem_op_1000_179c(0x98, (paVar6 >> 0x10), 0);
        uVar3 = paVar6;
        uVar4 = (paVar6 >> 0x10) | uVar3;
        if(paVar6 == 0x0)
        {
            pu_stack6 = 0x0;
        }
        else
        {
            pi_var1  = &iVar3->field_0xcc;
            *pi_var1 = *pi_var1 + 0x1;
            struct_1020_1738(paVar6, iVar3->field_0xcc, param_1);
            pu_stack6 = str_var1(uVar4, uVar3);
        }
        ppcVar2 = (*pu_stack6 + 0x8);
        (**ppcVar2)(SEG_1000, pu_stack6, (pu_stack6 >> 0x10));
    }
    return;
}

void  pass1_1020_294a(Struct665 *param_1, u32 param_2, u16 param_3, u8 *param_4, i16 param_5, u16 param_6)

{
    u16          uVar1;
    Struct665 *iVar3;
    u16          u_var2;
    u16         *puVar3;

    u_var2             = (param_1 >> 0x10);
    iVar3             = (Struct665 *)param_1;
    iVar3->field_0xfc = param_3;
    puVar3            = mixed_1010_20ba(globals->u16_1050_0ed0, param_3, param_6, param_4, param_5);
    uVar1             = (puVar3 >> 0x10);
    iVar3->field_0xf2 = puVar3;
    iVar3->field_0xf4 = uVar1;
    iVar3->field_0xe0 = iVar3->field_0xf2;
    iVar3->field_0xe2 = uVar1;
    pass1_1018_0902(&iVar3->field_0xf2, param_2);
    return;
}


void  struct_1020_1738(Struct57 *param_1, u16 param_2, u32 param_3)

{
    Struct278 *iVar1;
    u16          uVar1;

    get_sys_metrics_1040_7728(param_1, 0x1, 0x0, 0xfcd, (param_3 + 0x8));
    uVar1             = (param_1 >> 0x10);
    iVar1             = (Struct278 *)param_1;
    iVar1->field_0x8e = 0x0;
    iVar1->field_0x92 = 0x0;
    iVar1->field_0x96 = 0x0;
    param_1           = addr_table_1020_1e7a;//0x1e7a;
    iVar1->field_0x2  = SEG_1020;

}
