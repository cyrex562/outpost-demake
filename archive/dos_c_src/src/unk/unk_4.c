#include "unk_4.h"

#include "address_tables/function_tables.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_20.h"
#include "struct_ops/struct_ops_3.h"
#include "structs/structs_5xx/structs_59x.h"

i16  pass1_1030_d56a(u32 param_1)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    switch((iVar1 + 0x98) + -0x1)
    {
    case 0x0:
        (iVar1 + 0x98) = 0x2;
        break;
    case 0x1:
        (iVar1 + 0x98) = 0x3;
        break;
    case 0x2:
        (iVar1 + 0x98) = 0x4;
        break;
    case 0x3:
        (iVar1 + 0x98) = 0xc;
        break;
    default:
        (iVar1 + 0x98) = 0x1;
        return iVar1;
    case 0x7:
        (iVar1 + 0x98) = 0x9;
        return iVar1;
    case 0x8:
        (iVar1 + 0x98) = 0xb;
        return iVar1;
    case 0xa:
        (iVar1 + 0x98) = 0x5;
        return iVar1;
    case 0xb:
        (iVar1 + 0x98) = 0x8;
        return iVar1;
    }
    return iVar1;
}


u32  pass1_1030_d942(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 = addr_table_1030_dc2e ;//0xdc2e;
    param_1->fld2_segment = SEG_1030;
    if((param_1 + 0xc) == 0x4c)
    {
        (param_1 + 0xe) = 0x43;
    }
    else
    {
        if((param_1 + 0xc) == 0x4d)
        {
            (param_1 + 0xe) = 0x44;
        }
        else
        {
            (param_1 + 0xe) = 0x45;
        }
    }
    return param_1;
}


void  pass1_1030_d994(u32 *param_1, u16 param_2, u16 param_3, u16 param_4)

{
    i16       *pi_var1;
    u32 u_var2;
    i16        iVar3;
    i16        iVar4;
    u16        uVar5;
    u32        uVar6;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x12) != 0x4)
    {
        return;
    }
    uVar6 = pass1_1028_b4f2(param_1);
    iVar3 = uVar6;
    if((iVar3 + 0x200) == 0x8000002)
    {
        u_var2   = (iVar4 + 0x14);
        pi_var1  = (u_var2 + 0x94);
        *pi_var1 = *pi_var1 + -0x1;
    }
    else
    {
        pass1_1028_cb04(param_1, param_2, param_3, param_4);
        if(iVar3 == 0x0)
        {
            return;
        }
        pass1_1030_dace(param_1, param_4);
        if(iVar3 == 0x0)
        {
            return;
        }
        u_var2   = (iVar4 + 0x14);
        pi_var1  = (u_var2 + 0x94);
        *pi_var1 = *pi_var1 + -0x1;
        pass1_1028_c952(param_1, param_2, param_3, param_4);
        pass1_1030_da22(param_1, param_4);
    }
    u_var2 = (iVar4 + 0x14);
    if((u_var2 + 0x94) < 0x1)
    {
        pass1_1028_bdac(param_1, 0x5, SEG_1028);
    }
    return;
}


void  pass1_1030_da22(u32 param_1, u16 param_2)

{
    u32 *puVar1;
    void **ppcVar2;
    u16         uVar3;
    BOOL16      BVar4;
    u16         uVar5;
    u32 *puVar6;
    u16         extraout_DX;
    u16         uVar7;
    u16         uVar8;
    u32         uVar9;
    u32         uStack18;

    uVar9   = pass1_1028_b4f2(param_1);
    uVar3   = (uVar9 >> 0x10);
    puVar1  = *(uVar9 + 0xc);
    ppcVar2 = (*puVar1 + 0x10);
    puVar6  = puVar1;
    (**ppcVar2)(SEG_1028, puVar1, (uVar9 + 0xe));
    uStack18 = 0x0;
    while(true)
    {
        if((puVar6 & 0xffff | extraout_DX << 0x10) <= uStack18)
        {
            return;
        }
        uVar9 = pass1_1030_1d7c((puVar6 & 0xffff), extraout_DX, puVar1);
        uVar7 = (uVar9 >> 0x10);
        uVar8 = uVar7 | uVar9;
        if(((uVar8 != 0x0) && (BVar4 = pass1_1008_c6ae(globals->dat_1050_06e0, (uVar9 + 0xc), 0x4), BVar4 != 0x0)) && (uVar5 = pass1_1028_6744(param_2, uVar9, 0xd), (uVar8 | uVar5) != 0x0))
            break;
        uStack18 = uStack18 + 0x1;
    }
    pass1_1028_6228(uVar9, 0x1, 0x0, 0xd, param_2);
    return;
}


void  pass1_1030_dace(u32 param_1, u16 param_2)

{
    u32 *puVar1;
    void **ppcVar2;
    u16         uVar3;
    BOOL16      BVar4;
    u16         uVar5;
    u32 *puVar6;
    u16         extraout_DX;
    u16         uVar7;
    u16         uVar8;
    u32         uVar9;
    u32         uStack20;

    uVar9   = pass1_1028_b4f2(param_1);
    uVar3   = (uVar9 >> 0x10);
    puVar1  = *(uVar9 + 0xc);
    ppcVar2 = (*puVar1 + 0x10);
    puVar6  = puVar1;
    (**ppcVar2)(SEG_1028, puVar1, (uVar9 + 0xe));
    uStack20 = 0x0;
    uVar8    = extraout_DX;
    do
    {
        if((puVar6 & 0xffff | extraout_DX << 0x10) <= uStack20)
        {
            return;
        }
        uVar9 = pass1_1030_1d7c((puVar6 & 0xffff), uVar8, puVar1);
        uVar7 = (uVar9 >> 0x10);
        uVar8 = uVar7 | uVar9;
        if((uVar8 != 0x0) && (BVar4 = pass1_1008_c6ae(globals->dat_1050_06e0, (uVar9 + 0xc), 0x4), BVar4 != 0x0))
        {
            uVar5 = pass1_1028_6744(param_2, uVar9, 0xd);
            uVar8 = uVar8 | uVar5;
            if(uVar8 != 0x0)
            {
                return;
            }
        }
        uStack20 = uStack20 + 0x1;
    } while(true);
}


u16  pass1_1030_db72(void)

{
    return 0x1;
}


void  pass1_1030_db78(u32 param_1)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x12) == 0x6)
    {
        pass1_1028_bdac((param_1 & 0xffff | uVar1 << 0x10), 0x5, SEG_1028);
    }
    return;
}


void  pass1_1030_db92(u16 param_1, u16 param_2, u16 *param_3, u32 param_4, long param_5, u16 param_6)

{
    i16 iVar1;
    u8 *pu_var2;
    u16 uVar3;
    u32 uVar4;
    u8  local_4[0x2];

    uVar4 = pass1_1030_bcae(local_4, param_6);
    uVar3 = (uVar4 >> 0x10);
    iVar1 = uVar4;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_4, (param_4 >> 0x10));
    uVar4 = *(iVar1 + 0x10);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar4, (uVar4 >> 0x10));
    pu_var2 = local_4;
    pass1_1030_bcde(param_6, pu_var2, param_6, uVar4 & 0xffff | uVar3 << 0x10, param_3, param_5);
    if(pu_var2 < 0x0)
    {
        globals->PTR_LOOP_1050_50ca = 0x6af;
        return;
    }
    return;
}


u16  pass1_1030_dc02(void)

{
    return 0x1;
}


u16 * pass1_1030_dcc2(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    (param_1 + 0x20)           = 0x0;
    param_1 =  addr_table_1030_e036;//0xe036;
    param_1->fld2_segment      = SEG_1030;
    return param_1;
}


void  pass1_1030_dcf4(u16 *param_1, u16 param_2)

{
    long         lVar1;
    void **ppcVar2;
    u16          uVar3;
    u16          uVar4;
    u16          uVar5;
    u16          extraout_DX;
    u16          uVar6;
    u8          *puVar7;
    u16          extraout_DX_00;
    u16          uVar8;
    Struct596 *iVar9;
    u16 uVar9;
    u32 * puVar10;
    u32 uVar11;
    u32 uStack28;
    u32 uStack24;
    u32 * puStack20;
    i16 iStack12;

    uVar9 = (param_1 >> 0x10);
    iVar9 = (Struct596 *) param_1;
    param_1->field_0x0 = addr_table_1030_e036;//0xe036;
    iVar9->field_0x2 = SEG_1030;
    if (globals->_PTR_LOOP_1050_65e2 != 0x0) {
        pass1_1028_b58e(param_1);
        if (iVar9->field_0x20 == 0x0) {
            uVar3 = extraout_DX | param_2;
            if (uVar3 == 0x0) {
                uVar6 = extraout_DX;
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, 0x1, 0x400);
            }
            else
            {
                uVar3 = (param_2 + 0x2e);
                uVar6 = (param_2 + 0x30);
            }
            puVar10 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x1e);
            puVar7  = (puVar10 >> 0x10);
            uVar4   = puVar10;
            pass1_1038_4d6e(str_var1(uVar6, uVar3), puVar10, uVar4, puVar7);
            puStack20 = str_var1(puVar7, uVar4);
            ppcVar2   = (*puStack20 + 0x10);
            uVar6     = uVar4;
            (**ppcVar2)(SEG_1038, uVar4, puVar7);
            uStack24 = str_var1(extraout_DX_00, uVar6);
            uVar3    = extraout_DX_00;
            for(uStack28 = 0x0; uStack28 < uStack24; uStack28 = uStack28 + 0x1)
            {
                uVar11 = pass1_1030_1d7c(uVar6, uVar3, puStack20);
                uVar8  = (uVar11 >> 0x10);
                uVar3  = uVar8 | uVar11;
                if(uVar3 != 0x0)
                {
                    uVar5 = pass1_1030_dfcc(param_1);
                    uVar5 = pass1_1030_cbf0(uVar11, uVar8, uVar5);
                    if(uVar5 != 0x0)
                        break;
                }
            }
            if(puStack20 != 0x0)
            {
                ppcVar2 = *puStack20;
                (**ppcVar2)(0x38, uVar4, puVar7, 0x1);
            }
        }
        else
        {
            lVar1 = iVar9->field_0x20;
            uVar3 = extraout_DX;
            uVar6 = param_2;
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, lVar1, (lVar1 >> 0x10));
            if((uVar3 | uVar6) != 0x0)
            {
                iStack12 = 0x0;
                switch(iVar9->field_0xc)
                {
                case 0x73:
                case 0x77:
                    iStack12 = 0x1;
                    break;
                case 0x74:
                case 0x78:
                    iStack12 = 0x2;
                    break;
                case 0x75:
                    iStack12 = 0x3;
                    break;
                case 0x76:
                    iStack12 = 0x5;
                }
                if(iStack12 != 0x0)
                {
                    pass1_1030_cc44(uVar6, uVar3, 0x1, str_var1(extraout_DX, param_2), iStack12);
                }
            }
        }
    }
    pass1_1028_b418(param_1);
    return;
}


u16 * pass1_1030_bc24(u16 param_1, i16 param_2, u16 param_3, u16 param_4, u32 param_5)

{
    pass1_1028_b22c(str_var1(param_3, param_2), param_4, param_5, param_1);
    str_var1(param_3, param_2) = addr_table_1030_bc96;//0xbc96;
    (param_2 + 0x2)            = SEG_1030;
    return str_var1(param_3, param_2);
}


void  pass1_1030_bc4e(u16 *param_1) {
    param_1->field_0x0 = addr_table_1030_bc96;//0xbc96;
    param_1->field_0x2 = SEG_1030;
    pass1_1028_b260(param_1);
}


u32  pass1_1030_bcae(u16 param_1, u16 param_2)

{
    return param_1;
}


void  pass1_1030_bcbc(u16 param_1, u16 param_2, u32 param_3, u32 param_4, u16 param_5, u32 param_6)

{
    pass1_1030_bcde(param_1, param_2, param_3,
                    str_var1(param_4, param_3),
                    str_var1(param_5, param_4), (param_6 + 0x4));
    return;
}


void  pass1_1030_bcde(u16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 *param_5, long param_6)

{
    i16        iVar1;
    u16        u_var2;
    i16        local_14;
    i16        local_12;
    i16        local_10;
    i16        local_e;
    u32 local_c;
    u16        uStack8;
    long       lStack6;

    u_var2   = (param_4 >> 0x10);
    iVar1   = param_4;
    lStack6 = (iVar1 + 0x8);
    if(lStack6 != param_6)
    {
        return;
    }
    local_c = (iVar1 + 0xc);
    uStack8 = (iVar1 + 0x10);
    pass1_1008_3e94(param_5, str_var1(param_1, &local_10), str_var1(param_1, &local_e));
    pass1_1008_3e94(str_var1(param_1, &local_c),
                    str_var1(param_1, &local_14),
                    str_var1(param_1, &local_12));
    pass1_1000_49b2(local_e - local_12);
    pass1_1000_49b2(local_10 - local_14);
    return;
}


void  pass1_1030_bd74(u16 param_1, u16 param_2, u32 param_3, u32 param_4, u16 param_5)

{
    Struct670 *iVar1;
    i16          iVar2;
    u16          uVar3;
    u16          uVar4;
    i16          local_1e;
    i16          local_1c;
    i16          local_1a;
    i16          local_18;
    u32   local_16;
    u16          uStack18;
    u32   local_10;
    u16          uStack12;
    long         lStack10;
    long         lStack6;

    uVar3    = (param_4 >> 0x10);
    iVar1    = (Struct670 *)param_4;
    lStack6  = iVar1->field_0x8;
    uVar4    = (param_3 >> 0x10);
    iVar2    = param_3;
    lStack10 = (iVar2 + 0x8);
    if(lStack10 != lStack6)
    {
        return;
    }
    local_10 = iVar1->field_0xc;
    uStack12 = iVar1->field_0x10;
    local_16 = (iVar2 + 0xc);
    uStack18 = (iVar2 + 0x10);
    pass1_1008_3e94(str_var1(param_5, &local_10),
                    str_var1(param_5, &local_1a),
                    str_var1(param_5, &local_18));
    pass1_1008_3e94(str_var1(param_5, &local_16),
                    str_var1(param_5, &local_1e),
                    str_var1(param_5, &local_1c));
    pass1_1000_49b2(local_18 - local_1c);
    pass1_1000_49b2(local_1a - local_1e);
    return;
}


u16 * pass1_1030_be56(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  addr_table_1030_c006;//0xc006;
    param_1->fld2_segment = SEG_1030;
    return param_1;
}


void  pass1_1030_be80(u32 param_1, u8 *param_2, u16 param_3)

{
    i16       *pi_var1;
    u32 u_var2;
    i16        iVar3;
    BOOL16     BVar4;
    u32        uVar5;
    u16        extraout_DX;
    u16        uVar6;
    i16        iVar7;
    u16        uVar8;
    i16        iVar9;

    pass1_1028_bf22(param_1, param_2, param_3);
    uVar8 = (param_1 >> 0x10);
    iVar7 = param_1;
    if((iVar7 + 0x12) == 0x5)
    {
        u_var2          = (iVar7 + 0x14);
        (u_var2 + 0xa4) = 0x1e;
        u_var2          = (iVar7 + 0x14);
        (u_var2 + 0xac) = 0x1;
        iVar9          = (iVar7 + 0xc);
        iVar3          = iVar9 + -0x1b;
        if(iVar3 == 0x0)
        {
            u_var2          = (iVar7 + 0x14);
            (u_var2 + 0xaa) = 0xa;
        }
        else
        {
            iVar3 = iVar9 + -0x1c;
            if(iVar3 == 0x0)
            {
                u_var2          = (iVar7 + 0x14);
                (u_var2 + 0xaa) = 0xb;
            }
            else
            {
                iVar3 = iVar9 + -0x1d;
                if(iVar3 == 0x0)
                {
                    u_var2          = (iVar7 + 0x14);
                    (u_var2 + 0xaa) = 0xc;
                }
            }
        }
        pass1_1028_b58e(param_1);
        uVar5 = *(iVar3 + 0x2e);
        iVar9 = 0xc;
        uVar6 = extraout_DX;
        pass1_1038_3fb0(uVar5);
        BVar4 = pass1_1030_25b2(uVar5 & 0xffff | uVar6 << 0x10, iVar9);
        if(BVar4 != 0x0)
        {
            u_var2   = (iVar7 + 0x14);
            pi_var1  = (u_var2 + 0xaa);
            *pi_var1 = *pi_var1 + 0x1;
        }
        BVar4 = pass1_1030_25b2(uVar5 & 0xffff | uVar6 << 0x10, 0xe);
        if(BVar4 != 0x0)
        {
            u_var2   = (iVar7 + 0x14);
            pi_var1  = (u_var2 + 0xaa);
            *pi_var1 = *pi_var1 + 0x1;
        }
        BVar4 = pass1_1030_25b2(uVar5 & 0xffff | uVar6 << 0x10, 0x76);
        if(BVar4 != 0x0)
        {
            u_var2   = (iVar7 + 0x14);
            pi_var1  = (u_var2 + 0xaa);
            *pi_var1 = *pi_var1 + 0x1;
        }
    }
    return;
}


void  pass1_1030_bf6e(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u16       *puVar1;
    u32 u_var2;
    u16        uVar3;
    u16        uVar4;
    i16        iVar5;
    u16        uVar6;
    u32        uVar7;
    u32 uVar8;
    u16        uVar9;

    uVar9  = 0x1e;
    uVar7  = pass1_1028_b58e(param_1);
    uVar8  = pass1_1030_7c28(uVar7, uVar9, uVar7, (uVar7 >> 0x10), param_4);
    uVar4  = 0x3e8 - uVar8;
    u_var2  = (param_1 + 0x14);
    uVar6  = (u_var2 >> 0x10);
    iVar5  = u_var2;
    puVar1 = (iVar5 + 0xaa);
    uVar3  = -(uVar4 < *puVar1);
    pass1_1030_7ddc(uVar7, ((uVar4 - *puVar1 & uVar3) + (iVar5 + 0xaa)), 0x1e, uVar3, (uVar8 >> 0x10), param_2, param_3, param_4);
    return;
}


u16  pass1_1030_bfb8(u32 param_1, u16 param_2)

{
    u32        uVar1;
    u32 u_var2;
    u16        uVar3;

    uVar3 = 0x1e;
    uVar1 = pass1_1028_b58e(param_1);
    u_var2 = pass1_1030_7c28(uVar1, uVar3, uVar1, (uVar1 >> 0x10), param_2);
    return 0x3e8 - u_var2;
}


void  pass1_1030_c09c(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    (param_1 + 0x20)           = 0x0;
    (param_1 + 0x24)           = 0x0;
    param_1 =  addr_table_1030_c68e;//0xc68e;
    param_1->fld2_segment      = SEG_1030;
}


u16  pass1_1030_c0d2(u32 param_1)

{
    if(0x0 < (param_1 + 0x24))
    {
        return 0x1;
    }
    return 0x0;
}


u16  pass1_1030_c0ec(u32 param_1)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    if(((param_1 + 0xc) != 0xb) && ((param_1 + 0x24) < 0x1))
    {
        return 0x0;
    }
    return 0x1;
}


void  pass1_1030_c10e(u32 param_1)

{
    i16 *pi_var1;
    i16  iVar2;
    u16  uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(0x0 < (iVar2 + 0x24))
    {
        pi_var1  = (iVar2 + 0x24);
        *pi_var1 = *pi_var1 + -0x1;
        return;
    }
    (iVar2 + 0xc) = 0x37;
    return;
}


void  pass1_1030_c12e(u32 param_1, i16 param_2, i16 param_3, u16 param_4, u16 param_5, u16 param_6)

{
    i16       *pi_var1;
    u32 u_var2;
    i16        iVar3;
    u16        extraout_DX;
    i16        iVar4;
    u16        uVar5;
    u16        uVar6;
    u32        u_stack6;

    pass1_1028_b58e(param_1);
    u_stack6 = str_var1(extraout_DX, param_3);
    u_var2   = (param_3 + 0x2e);
    uVar5   = (param_1 >> 0x10);
    iVar4   = param_1;
    iVar3   = u_var2;
    if((iVar4 + 0x24) < 0x1)
    {
        pass1_1030_7d1c(u_stack6, 0x0, 0x230000, iVar3, extraout_DX, param_4, param_5, param_6);
    }
    else
    {
        if(param_2 == 0x0)
        {
            uVar6 = 0x0;
        }
        else
        {
            uVar6 = 0x32;
        }
        pass1_1030_7d1c(u_stack6, uVar6, 0x230000, iVar3, extraout_DX, param_4, param_5, param_6);
        pi_var1  = (iVar4 + 0x24);
        *pi_var1 = *pi_var1 + -0x1;
    }
    if((0x0 < (iVar4 + 0x24)) && ((iVar4 + 0x24) < 0x19))
    {
        (iVar3 + 0x1fe) = 0x1;
    }
    return;
}


void  pass1_1030_c52e(u32 param_1, u16 *param_2, u32 param_3, u32 param_4, i16 param_5, u16 param_6, u16 param_7)

{
    BOOL16      BVar1;
    u32        *pu_var2;
    u8         *puVar3;
    u32 *puVar4;
    u16         uVar5;
    u16         uVar6;
    u32         uVar7;
    u16         uVar8;
    u16        *puVar9;
    u32         uVar10;
    u8          local_32[0x12];
    u32  local_20;
    u32  uStack28;
    u32 *puStack24;
    u32         uStack22;
    u16         uStack18;
    u16         uStack16;
    u32         local_c;
    u16         uStack8;
    u32         u_stack6;

    uVar8 = (param_1 >> 0x10);
    BVar1 = pass1_1028_c314(param_7, param_5, param_6, param_1, uVar8, param_2, param_3, (param_3 >> 0x10), param_4);
    if(BVar1 != 0x0)
    {
        pu_var2 = &local_c;
        pass1_1030_64ce(param_7, pu_var2, param_6, globals->_PTR_LOOP_1050_5740, param_2, param_4,
                        str_var1(param_7, pu_var2));
        local_20       = *pu_var2;
        local_20._3_1_ = (u8)(local_20 >> 0x18);
        uStack8        = local_20._3_1_;
        if(local_20._3_1_ == 0x0)
        {
            uStack22 = local_20;
            u_stack6  = local_20;
            pass1_1028_c7b6(param_7, param_6, param_1, uVar8, param_2, param_4);
            if((uStack8 != 0x4) && (uStack8 != 0x0))
            {
                uVar7 = pass1_1030_bcae(&local_20, param_7);
                uVar5 = (uVar7 >> 0x10);
                pass1_1028_dc52((Struct92 *)str_var1(param_7, local_32), 0x1, 0x0, 0x400);
                while(true)
                {
                    puVar3 = local_32;
                    pass1_1028_e4ec(str_var1(param_7, puVar3));
                    uStack28 = str_var1(uVar5, puVar3);
                    uVar6    = uVar5 | puVar3;
                    if(uVar6 == 0x0)
                    {
                        return;
                    }
                    uVar7    = *(puVar3 + 0x10);
                    uVar10   = param_4;
                    uStack22 = uVar7;
                    puVar9   = param_2;
                    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar7, (uVar7 >> 0x10));
                    uStack18 = uVar7;
                    puVar4   = &local_20;
                    uStack16 = uVar6;
                    pass1_1030_bcde(param_7, puVar4, param_7, uVar7 & 0xffff | uVar6 << 0x10, puVar9, uVar10);
                    if(puVar4 < 0x0)
                        break;
                    uVar5     = uVar6;
                    puStack24 = puVar4;
                    if(puVar4 < 0x1f)
                    {
                        globals->PTR_LOOP_1050_50ca = 0x6ae;
                        return;
                    }
                }
                globals->PTR_LOOP_1050_50ca = 0x6af;
                return;
            }
            globals->PTR_LOOP_1050_50ca = 0x6a8;
        }
    }
    return;
}


u16 * pass1_1030_c71e(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    (param_1 + 0x20)           = 0x0;
    param_1 =  addr_table_1030_c940;//0xc940;
    param_1->fld2_segment      = SEG_1030;
    return param_1;
}


void  pass1_1030_c74e(u32 param_1, u32 param_2, u16 param_3)

{
    pass1_1028_b46e(param_1, param_2, param_3);
    (param_1 + 0x20) = 0x70;
    return;
}


void  pass1_1030_c76c(u32 *param_1, u16 param_2, u16 param_3, u16 param_4)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if(((iVar1 + 0x12) != 0x6) && ((iVar1 + 0x12) != 0x5))
    {
        return;
    }
    iVar1 = (iVar1 + 0x20);
    if(iVar1 != 0x0)
    {
        if(((iVar1 < 0x70) || (SBORROW2(iVar1, 0x70))) || (0x1 < iVar1 + -0x70))
        {
            pass1_1028_be2a(param_1, param_2, param_3, SEG_1028, param_4);
            return;
        }
    }
    pass1_1028_bdac(param_1, 0x6, SEG_1028);
    return;
}


u32  pass1_1030_c8da(u32 param_1, u32 param_2, u32 param_3)

{
    u32 uVar1;

    uVar1 = 0x0;
    if(param_3 == 0x1)
    {
        (param_1 + 0x20) = param_2;
    }
    else
    {
        uVar1 = func_0x1030178e();
    }
    return uVar1;
}


u32  pass1_1030_c9e4(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    (param_1 + 0x98)           = 0x1;
    param_1 =  addr_table_1030_d88e;//0xd88e;
    param_1->fld2_segment      = SEG_1030;
    pass1_1000_4906((Struct20 *)str_var1(param_2, param_1 + 0x20), 0x0, 0x78);
    return param_1;
}


void  pass1_1030_ca26(u32 param_1, u32 param_2, u16 param_3)

{
    u16 uVar1;
    u16 extraout_DX;
    i16 iVar2;
    u16 uVar3;
    u16 uStack4;

    for(uStack4 = 0x0; iVar2 = param_1, uVar3 = (param_1 >> 0x10), uStack4 < 0xa; uStack4 = uStack4 + 0x1)
    {
        if(((iVar2 + uStack4 * 0xc + 0x26) == 0x2) || ((iVar2 + uStack4 * 0xc + 0x26) == 0x1))
        {
            (iVar2 + uStack4 * 0xc + 0x26) = 0x4;
            param_3                        = uStack4;
        }
        else
        {
            uVar1 = uStack4;
            pass1_1028_b58e(param_1);
            iVar2 = uStack4 * 0xc + iVar2;
            pass1_1030_6e9c(str_var1(extraout_DX, uVar1), 0x1, (iVar2 + 0x24));
            param_3        = 0x0;
            (iVar2 + 0x20) = 0x0;
            (iVar2 + 0x24) = 0x0;
            (iVar2 + 0x26) = 0x0;
        }
    }
    pass1_1028_b46e(param_1, param_2, param_3);
    return;
}


void  pass1_1030_cac2(u32 *param_1, i16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    u32  uVar1;
    u32 *pu_var2;
    void **ppcVar3;
    u32         uVar4;
    u16         uVar5;
    u32         uVar6;
    u32 *puVar7;
    u32         uVar8;
    u16         extraout_DX;
    u16         extraout_DX_00;
    u16         extraout_DX_01;
    u16         uVar9;
    u16         uVar10;
    u32         uStack34;
    i16         iStack30;
    i16         iStack28;

    pass1_1028_be9e(param_1, param_3, param_4, SEG_1028, param_5);
    uVar10 = (param_1 >> 0x10);
    if(((param_1 + 0x12) == 0x5) && (globals->PTR_LOOP_1050_5812 == 0x0))
    {
        globals->PTR_LOOP_1050_5812 = (&PTR_LOOP_1050_0000 + 0x1);
        pass1_1028_b58e(param_1 & 0xffff | uVar10 << 0x10);
        uVar1  = (param_2 + 0x2e);
        uVar6  = *(uVar1 + 0x10);
        uVar10 = extraout_DX;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar6, (uVar6 >> 0x10));
        pu_var2  = (uVar6 + 0x1e);
        ppcVar3 = (*pu_var2 + 0x10);
        puVar7  = pu_var2;
        (**ppcVar3)(SEG_1028, pu_var2, (uVar6 + 0x20));
        uVar4    = puVar7 & 0xffff | extraout_DX_00 << 0x10;
        iStack28 = 0x0;
        iStack30 = pass1_1030_d144(param_1);
        uStack34 = 0x0;
        while((uStack34 < uVar4 && (iStack30 != 0x0)))
        {
            ppcVar3 = (*pu_var2 + 0x4);
            uVar8   = uVar4;
            (**ppcVar3)(SEG_1028, pu_var2, (pu_var2 >> 0x10), uStack34, (uStack34 >> 0x10));
            uVar5 = uVar8;
            uVar9 = extraout_DX_01 | uVar5;
            if(uVar9 != 0x0)
            {
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar5, extraout_DX_01);
                uVar5 = (uVar5 + 0xc);
                if((0x0 < uVar5) && (!SBORROW2(uVar5, 0x1)))
                {
                    if(uVar5 != 0x3 && 0x0 < (uVar5 - 0x2))
                    {
                        if(uVar5 != 0x4)
                            goto LAB_1030_cbbc;
                        iStack28 = iStack28 + 0x1;
                    }
                    pass1_1030_6e9c(uVar6 & 0xffff | uVar10 << 0x10, 0x1, uVar5);
                    pass1_1030_d180(param_1, uVar5);
                    iStack30 = iStack30 + -0x1;
                }
            }
        LAB_1030_cbbc:
            uStack34 = uStack34 + 0x1;
        }
        while(iStack28 < 0x4)
        {
            pass1_1030_d180(param_1, 0x4);
            iStack28 = iStack28 + 0x1;
        }
    }
    return;
}


u16  pass1_1030_cbf0(i16 param_1, u16 param_2, i16 param_3)

{
    Struct595 *iVar1;
    i16          iStack4;

    iStack4 = 0x0;
    while(true)
    {
        if(0x9 < iStack4)
        {
            return 0x0;
        }
        iVar1 = (Struct595 *)(iStack4 * 0xc + param_1);
        if((iVar1->field_0x24 == param_3) && (iVar1->field_0x26 == 0x3))
            break;
        iStack4 = iStack4 + 0x1;
    }
    iVar1->field_0x26 = 0x0;
    iVar1->field_0x28 = 0x0;
    return 0x1;
}


void  pass1_1030_cc44(i16 param_1, u16 param_2, i16 param_3, u32 param_4, i16 param_5)

{
    void **ppcVar1;
    i16          iVar2;
    u8          *puVar3;
    u16          uVar4;
    u16          uVar5;
    u16          uVar6;
    u16          extraout_DX;
    u16          extraout_DX_00;
    u8          *puVar7;
    u16          extraout_DX_01;
    Struct304 *iVar7;
    Struct303 *iVar8;
    u8           uVar8;
    u16          unaff_SS;
    u32  *puVar9;
    u32         *puVar10;
    u8          *puVar11;
    u8           local_32[0x8];
    u32  *puStack42;
    u32          uStack38;
    u32          uStack34;
    u32  *puStack30;
    u16          uStack26;
    u8          *puStack24;
    u16          uStack22;
    u8          *puStack20;
    u32         *puStack18;
    i16          iStack14;
    u16          uStack12;
    i16          iStack10;
    u32   uStack8;
    i16          iStack4;

    iStack4  = 0x0;
    uStack8  = (param_4 + 0x4);
    iStack10 = 0x0;
    do
    {
        if(0x9 < iStack10)
        {
            return;
        }
        iVar8 = (Struct303 *)(iStack10 * 0xc + param_1);
        if(((iVar8->field_0x28 == uStack8) && (iVar8->field_0x2a == uStack8)) && (iVar8->field_0x24 == param_5))
        {
            if(iVar8->field_0x26 == 0x4)
            {
                iVar2 = param_5;
                pass1_1028_b58e(str_var1(param_2, param_1));
                iStack14 = iVar2;
                uStack12 = extraout_DX_00;
                pass1_1030_6e9c(CONCAT13((extraout_DX_00 >> 0x8), CONCAT12(extraout_DX_00, iStack14)), 0x1, iVar8->field_0x24);
                iVar8->field_0x20 = 0x0;
                iVar8->field_0x24 = 0x0;
                iVar8->field_0x26 = 0x0;
                puStack42         = 0x0;
                puStack18         = 0x0;
                _DAT_0000_0006    = param_5;
                uRam0000000a      = 0x1;
                uVar4             = switch_1020_c3b4(param_5);
                (puStack18 + 0xc) = uVar4;
                puVar10           = pass1_1008_c6fa(globals->dat_1050_06e0, 0x4);
                puVar7            = (puVar10 >> 0x10);
                uVar6             = puVar10;
                uVar5             = uVar6;
                puVar11           = puVar7;
                uStack22          = uVar6;
                puStack20         = puVar7;
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, 0x1, 0x400);
                uVar8     = 0x38;
                uStack26  = uVar6;
                puStack24 = puVar7;
                pass1_1038_4d6e(
                  str_var1(puVar7, uVar6), str_var1(puVar11, uVar5), uVar6, puVar7);
                puStack30 = str_var1(puVar7, uVar6);
                ppcVar1   = (*puStack30 + 0x10);
                (**ppcVar1)(SEG_1038, uVar6, puVar7);
                uStack34 = str_var1(extraout_DX_01, uVar6);
                uVar6    = extraout_DX_01;
                for(uStack38 = 0x0; uStack38 < uStack34; uStack38 = uStack38 + 0x1)
                {
                    puVar9 = pass1_1030_1d7c(uStack34, uVar6, puStack30);
                    uVar5  = (puVar9 >> 0x10);
                    uVar6  = uVar5 | puVar9;
                    if(uVar6 != 0x0)
                    {
                        puVar3  = local_32;
                        ppcVar1 = (*puVar9 + 0x40);
                        (**ppcVar1)(0x38, puVar9, uVar5, puVar3);
                        uVar6 = extraout_DX;
                        if(puVar3 == 0x0)
                        {
                            uVar8 = 0x28;
                            pass1_1028_6408(puVar9, puStack18, unaff_SS);
                            break;
                        }
                    }
                }
                puStack42 = puStack30;
                if(puStack30 != 0x0)
                {
                    ppcVar1 = *puStack30;
                    (**ppcVar1)(uVar8, puStack30, (puStack30 >> 0x10), 0x1);
                }
            }
            else
            {
                iVar7             = (Struct304 *)(iStack10 * 0xc + param_1);
                iVar7->field_0x26 = 0x0;
                iVar7->field_0x28 = 0x0;
            }
            iStack4 = iStack4 + 0x1;
            param_3 = param_3 + -0x1;
            if(param_3 == 0x0)
            {
                return;
            }
        }
        iStack10 = iStack10 + 0x1;
    } while(true);
}


BOOL16  pass1_1030_ad22(u16 param_1, u16 param_2, u16 *param_3, long param_4, u16 param_5, u16 param_6, u16 param_7)

{
    BOOL16 BVar1;
    u16    u_var2;
    u32    uVar3;

    pass1_1030_627e(param_7, param_5, param_6, globals->_PTR_LOOP_1050_5740, param_3, param_4);
    u_var2 = param_6 | param_5;
    if(u_var2 != 0x0)
    {
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_5, param_6);
        if((u_var2 | param_5) != 0x0)
        {
            uVar3 = struct_op_1030_73a8(str_var1(u_var2, param_5));
            if(uVar3 != 0x0)
            {
                BVar1 = pass1_1008_c6ae(globals->dat_1050_06e0, (uVar3 + 0xc), 0x46);
                return BVar1;
            }
        }
    }
    return 0x0;
}


void  pass1_1030_ad86(u16 param_1, u16 param_2, u16 *param_3, long param_4, u16 param_5, u16 param_6)

{
    u32  uVar1;
    u32 *pu_var2;
    char        cStack17;
    u32  local_a;
    i16         iStack6;

    pu_var2 = &local_a;
    pass1_1030_64ce(param_5, pu_var2, param_6, globals->_PTR_LOOP_1050_5740, param_3, param_4,
                    str_var1(param_5, pu_var2));
    uVar1    = *pu_var2;
    cStack17 = (uVar1 >> 0x18);
    if(cStack17 == '\0')
    {
        iStack6 = uVar1;
        if(((0x0 < iStack6) && (!SBORROW2(iStack6, 0x1))) && ((iStack6 == 0x3 || iStack6 + -0x2 < 0x1 || ((0x3 < iStack6 + -0x3 && (iStack6 + -0x7 < 0x2))))))
        {
            return;
        }
    }
    return;
}


u16  pass1_1030_addc(u16 param_1, u16 param_2, u16 *param_3, u16 param_4, u16 param_5, u32 param_6, i16 param_7, u16 param_8, u16 param_9)

{
    u32 *puVar1;
    i16         local_14;
    i16         local_12;
    i16         local_10;
    i16         local_e;
    u32  local_c;
    u16         uStack8;
    i16         iStack6;
    u16         uStack4;

    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_6, (param_6 >> 0x10));
    iStack6 = param_7;
    uStack4 = param_8;
    puVar1  = pass1_1030_5b5c(param_7, param_8);
    local_c = *puVar1;
    uStack8 = (puVar1 + 0x4);
    pass1_1008_3e94(param_3, str_var1(param_9, &local_10), str_var1(param_9, &local_e));
    pass1_1008_3e94(str_var1(param_9, &local_c),
                    str_var1(param_9, &local_14),
                    str_var1(param_9, &local_12));
    if((((0x1 < local_e) && (0x1 < local_10)) && (local_e < local_12 + -0x1)) && (local_10 < local_14 + -0x1))
    {
        return 0x1;
    }
    return 0x0;
}


void  pass1_1030_b13c(void)

{
    return;
}


void  pass1_1030_b142(u32 param_1, u32 param_2)

{
    i16        iVar1;
    i16        iVar2;
    u16        uVar3;
    bool       bVar4;
    u32        uVar5;
    u32 uStack12;

    uVar5    = struct_op_1030_73a8(param_2);
    uVar3    = (uVar5 >> 0x10);
    iVar1    = uVar5;
    iVar2    = (iVar1 + 0xc);
    uStack12 = 0x0;
    if(iVar2 == 0x18)
    {
        uStack12 = pass1_1028_1c1c();
        uVar3          = (iVar1 + 0x22);
    }
    else
    {
        if(iVar2 != 0x3f)
            goto LAB_1030_b1a6;
        uStack12 = pass1_1028_20b0();
        uVar3          = (iVar1 + 0x24);
    }
    uStack12 = str_var1(uStack12, uVar3);
LAB_1030_b1a6:
    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0xe) == 0x1)
    {
        bVar4 = (uStack12 & 0x10000) == 0x0;
    }
    else
    {
        if((iVar2 + 0xe) == 0x2)
        {
            bVar4 = (uStack12 & 0x20000) == 0x0;
        }
        else
        {
            if((iVar2 + 0xe) == 0x3)
            {
                bVar4 = (uStack12 & 0x40000) == 0x0;
            }
            else
            {
                bVar4 = (uStack12 & 0x80000) == 0x0;
            }
        }
    }
    if((bVar4) || (uStack12 != 0x0))
    {
        bVar4 = false;
        while(true)
        {
            if(((uStack12 & 0x10000) != 0x0) && (uStack12 == 0x0))
                goto LAB_1030_b239;
            if(((uStack12 & 0x20000) != 0x0) && (uStack12 == 0x0))
                goto LAB_1030_b247;
            if(((uStack12 & 0x40000) != 0x0) && (uStack12 == 0x0))
                goto LAB_1030_b255;
            if(((uStack12 & 0x80000) != 0x0) && (uStack12 == 0x0))
                goto LAB_1030_b263;
            if(bVar4)
                break;
            uStack12._1_3_ = (u163)(uStack12 >> 0x8) & 0xffff00;
            iVar1          = (iVar2 + 0xe);
            if(iVar1 == 0x1)
            {
                uStack12 = CONCAT31(uStack12._1_3_, 0x4);
            }
            else
            {
                if(iVar1 == 0x2)
                {
                    uStack12 = CONCAT31(uStack12._1_3_, 0x8);
                }
                else
                {
                    if(iVar1 == 0x3)
                    {
                        uStack12 = CONCAT31(uStack12._1_3_, 0x1);
                    }
                    else
                    {
                        uStack12 = CONCAT31(uStack12._1_3_, 0x2);
                    }
                }
            }
            bVar4 = true;
        }
        if((iVar2 + 0xe) == 0x1)
        {
        LAB_1030_b255:
            (iVar2 + 0xe) = 0x3;
            return;
        }
        if((iVar2 + 0xe) == 0x2)
        {
        LAB_1030_b263:
            (iVar2 + 0xe) = 0x4;
            return;
        }
        if((iVar2 + 0xe) == 0x3)
        {
        LAB_1030_b239:
            (iVar2 + 0xe) = 0x1;
            return;
        }
        if((iVar2 + 0xe) == 0x4)
        {
        LAB_1030_b247:
            (iVar2 + 0xe) = 0x2;
            return;
        }
    }
    return;
}


void  pass1_1030_b9b2(u32 param_1)

{
    u16 uVar1;

    uVar1            = (param_1 >> 0x10);
    (param_1 + 0xe)  = 0x0;
    (param_1 + 0x12) = 0x0;
    return;
}


void  pass1_1030_b9da(Struct402 *param_1, u32 param_2, u32 param_3, u32 param_4, u16 param_5, u16 param_6, u16 param_7)

{
    u32         *puVar1;
    u32          u_var2;
    u8          *puVar3;
    u16          uVar4;
    u16          uVar5;
    u32          uVar6;
    Struct402 *iVar7;
    i16          iVar8;
    u16          uVar9;
    u32          uVar10;
    u16          uStack12;
    u16          uStack4;

    puVar3 = param_3;
    uVar9  = (param_1 >> 0x10);
    iVar7  = (Struct402 *)param_1;
    if(iVar7->field_0xe == (long *)0x0)
    {
        mem_op_1000_179c(0xa, puVar3, 0);
        uVar4 = puVar3 | param_4;
        param_3 = uVar4;
        if(uVar4 == 0x0)
        {
            iVar7->field_0xe = (long *)0x0;
        }
        else
        {
            pass1_1020_ba3e((long *)(param_4 & 0xffff | ZEXT24(puVar3) << 0x10), 0x5, 0x5, param_6, param_5);
            &iVar7->field_0xe         = param_4;
            (&iVar7->field_0xe + 0x2) = param_3;
        }
        iVar7->field_0x12 = 0x0;
    }
    for(uStack4 = 0x4; uStack4 < 0xe; uStack4 = uStack4 + 0x1)
    {
        uVar10  = pass1_1030_7c28(param_2, uStack4, param_4, param_3, param_7);
        uVar4   = (uVar10 >> 0x10);
        param_4 = uVar10 & 0xffff;
        uVar5   = uVar4 | param_4;
        param_3 = uVar5;
        if(uVar5 != 0x0)
        {
            u_var2    = 0x64 - iVar7->field_0x12;
            uVar6    = u_var2 >> 0x10;
            uStack12 = uVar10;
            if(uVar10 < u_var2)
            {
                u_var2 = uVar10 & 0xffff;
                uVar6 = uVar4;
            }
            uVar5   = u_var2;
            param_4 = u_var2 & 0xffff | uVar6 << 0x10;
            iVar8   = (uVar4 - uVar6) - (uStack12 < uVar5);
            param_3 = uVar6;
            pass1_1030_7d1c(param_2, uStack12 - uVar5,
                            str_var1(uStack4, iVar8), uVar5, uVar6, iVar8, param_6, param_7);
            pass1_1020_bb8a(iVar7->field_0xe, uVar5, uVar6 | uStack4 << 0x10, param_6, param_7);
            puVar1  = &iVar7->field_0x12;
            *puVar1 = *puVar1 + param_4;
            string_1020_c0ca(uStack4);
            vsprintf_op_1030_840a(s_truck_0x_08lx_loaded__ld_of__s_f_1050_576c, SEG_1020, param_7, param_3);
            if(0x63 < iVar7->field_0x12)
                break;
        }
    }
    if(iVar7->field_0x12 != 0x0)
    {
        return;
    }
    return;
}


u16 * pass1_1030_9e9c(u16 *param_1, u8 param_2) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (param_1)[0x1] = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        pass1_1000_093a(param_1, uVar1, SEG_1000);
    }
    return param_1;
}


void  pass1_1030_9ecc(u32 *param_1, u32 param_2)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = 0x0;
    *(param_1 + 0x4) = param_2;
    (param_1 + 0x8)  = 0x0;
    return;
}


void  pass1_1030_9f40(u32 param_1, u16 param_2, u16 param_3, u8 param_4)

{
    u16 uVar1;

    uVar1           = pass1_1008_c646(globals->dat_1050_06e0,
                            str_var1(param_2, (globals->dat_1050_06e0 >> 0x10)), param_3);
    (param_1 + 0x8) = uVar1;
    pass1_1030_9f7a(param_1, uVar1, param_3, param_4);
    return;
}


void  pass1_1030_9f64(u32 *param_1)

{
    (param_1 + 0x8) = 0x0;
    param_1->field_0x0 = 0x0;
    return;
}


void  pass1_1030_a39a(u32 param_1, u16 *param_2, u16 param_3)

{
    pass1_1030_aa18(param_1, param_2, param_3);
    return;
}


void  pass1_1030_a3ae(u32 param_1, u16 *param_2, u16 param_3)

{
    void **ppcVar1;
    u32  u_var2;
    u16         uVar3;
    u16         uVar4;
    BOOL16      BVar5;
    u32         uVar6;
    u8         *puVar7;
    u16         extraout_DX;
    u16         uVar8;
    u16         uVar9;
    u16         uVar10;
    i16         iVar11;
    u16         uVar12;
    u16         uVar13;
    u32        *puVar14;
    u16        *puVar15;
    u16         uVar16;
    u32         uStack44;
    i16         local_28;
    i16         local_26;
    i16         local_24;
    u8          local_22[0x6];
    i16         local_1c;
    i16         iStack26;
    long        lStack22;
    u32         uStack18;
    u32 *puStack14;
    u16         uStack10;
    u8         *puStack8;
    i16         iStack6;
    u16         uStack4;

    uStack4  = 0x0;
    iStack6  = (param_2 + 0x4);
    puVar14  = pass1_1008_c6fa(globals->dat_1050_06e0, 0x45);
    puVar7   = (puVar14 >> 0x10);
    uVar3    = puVar14;
    uVar12   = (param_1 >> 0x10);
    uVar10   = param_1;
    uStack10 = uVar3;
    puStack8 = puVar7;
    pass1_1038_4e78(uVar3, puVar7, *(uVar10 + 0x4), puVar14);
    puStack14 = str_var1(puVar7, uVar3);
    ppcVar1   = (*puStack14 + 0x10);
    uVar16    = uVar3;
    (**ppcVar1)(SEG_1038, uVar3, puVar7);
    uStack18 = str_var1(extraout_DX, uVar3);
    u_var2    = (uVar10 + 0x4);
    lStack22 = (u_var2 + 0x8);
    pass1_1008_3e38(str_var1(param_3, &local_1c));
    puVar15  = pass1_1008_3e38(str_var1(param_3, local_22));
    uStack44 = 0x0;
    uVar8    = (puVar15 >> 0x10);
    do
    {
        if(uStack18 <= uStack44)
        {
        LAB_1030_a4e7:
            if(puStack14 != 0x0)
            {
                ppcVar1 = *puStack14;
                (**ppcVar1)(SEG_1008, puStack14, (puStack14 >> 0x10), 0x1, uVar16, puVar7, puStack14, puStack14);
            }
            return;
        }
        uVar6 = uStack18;
        pass1_1030_1d58(puStack14);
        uVar9 = uVar8 | uVar6;
        if(uVar9 != 0x0)
        {
            pass1_1008_3f62(str_var1(param_3, &local_1c), str_var1(uVar8, uVar6 + 0xc));
            pass1_1008_3eb4(str_var1(param_3, &local_1c),
                            str_var1(param_3, &local_28),
                            str_var1(param_3, &local_26),
                            str_var1(param_3, &local_24));
            uVar9 = uVar8;
            if((local_28 == iStack6)
               && (u_var2  = (uVar10 + 0x4),
                   uVar13 = (u_var2 >> 0x10),
                   iVar11 = u_var2,
                   u_var2  = (iVar11 + 0x4),
                   uVar4  = pass1_1030_addc(uVar10, uVar12,
                                           str_var1(param_3, &local_1c), u_var2, (u_var2 >> 0x10), *(iVar11 + 0x8), &local_1c, uVar8, param_3),
                   uVar9  = uVar8,
                   uVar4 != 0x0))
            {
                pass1_1008_3f62(str_var1(param_3, local_22),
                                str_var1(param_3, &local_1c));
                iStack26 = local_26 + -0x1;
                BVar5    = pass1_1030_ad22(uVar10, uVar12,
                                        str_var1(param_3, &local_1c), lStack22, &local_1c, uVar8, param_3);
                if(BVar5 == 0x0)
                {
                    iStack26 = local_26 + 0x1;
                    BVar5    = pass1_1030_ad22(uVar10, uVar12,
                                            str_var1(param_3, &local_1c), lStack22, &local_1c, uVar8, param_3);
                    if(BVar5 == 0x0)
                    {
                        iStack26 = local_26;
                        local_1c = local_24 + -0x1;
                        BVar5    = pass1_1030_ad22(uVar10, uVar12,
                                                str_var1(param_3, &local_1c), lStack22, &local_1c, uVar8, param_3);
                        if(BVar5 == 0x0)
                        {
                            local_1c = local_24 + 0x1;
                            BVar5    = pass1_1030_ad22(uVar10, uVar12,
                                                    str_var1(param_3, &local_1c), lStack22, &local_1c, uVar8, param_3);
                            uVar9    = uVar8;
                            if(BVar5 == 0x0)
                                goto LAB_1030_a45b;
                        }
                    }
                }
                pass1_1008_3f62(param_2, str_var1(param_3, local_22));
                uStack4 = 0x1;
                goto LAB_1030_a4e7;
            }
        }
    LAB_1030_a45b:
        uStack44 = uStack44 + 0x1;
        uVar8    = uVar9;
    } while(true);
}


void  pass1_1030_a57e(u32 param_1, u16 *param_2, i16 param_3, i16 param_4, u16 param_5)

{
    u32         uVar1;
    void **ppcVar2;
    u32  uVar3;
    u16         uVar4;
    i16        *piVar5;
    u32         uVar6;
    u8         *puVar7;
    u16         extraout_DX;
    u16         uVar8;
    u16         uVar9;
    u16         uVar10;
    u16         uVar11;
    i16         iVar12;
    u32 *puVar13;
    u16         uVar14;
    u16         uVar15;
    u16         uVar16;
    u16         uVar17;
    u32        *puVar18;
    u32         uVar19;
    u8          u_var20;
    u32         uStack40;
    u8          local_1c[0x2];
    i16         local_1a;
    i16         local_18;
    i16         local_16;
    i16         iStack20;
    u32  uStack16;
    u16         uStack12;
    u8         *puStack10;
    i16         iStack8;
    i16         iStack6;
    u16         uStack4;

    uStack4 = 0x0;
    uVar14  = (param_1 >> 0x10);
    uVar10  = param_1;
    pass1_1038_53ba(*(uVar10 + 0x4), 0x1);
    if((param_4 != 0x0) || (param_3 != 0x0))
    {
        iStack6   = (param_2 + 0x4);
        iStack8   = 0x8 - (iStack6 == 0x0);
        puVar18   = pass1_1008_c6fa(globals->dat_1050_06e0, iStack8);
        puVar7    = (puVar18 >> 0x10);
        uVar8     = puVar18;
        uStack12  = uVar8;
        puStack10 = puVar7;
        pass1_1038_4e78(uVar8, puVar7, *(uVar10 + 0x4), puVar18);
        uStack16 = str_var1(puVar7, uVar8);
        uVar17   = SEG_1008;
        pass1_1008_3e38(str_var1(param_5, &local_16));
        uVar3   = (uVar10 + 0x4);
        uVar1   = *(uVar3 + 0x8);
        uVar15  = (uStack16 >> 0x10);
        uVar11  = SUB42(uStack16, 0x0);
        ppcVar2 = (*uStack16 + 0x10);
        uVar6   = uVar1;
        (**ppcVar2)(SEG_1008, uVar11, uVar15);
        uVar6 = uVar6 & 0xffff | extraout_DX << 0x10;
        uVar8 = extraout_DX;
        for(uStack40 = 0x0; uStack40 < uVar6; uStack40 = uStack40 + 0x1)
        {
            uVar19 = uVar6;
            pass1_1030_1d58(uStack16);
            uVar9 = uVar8 | uVar19;
            if(uVar9 != 0x0)
            {
                uVar9 = uVar8;
                pass1_1008_3f62(str_var1(param_5, &local_16),
                                str_var1(uVar8, uVar19 + 0xc));
                uVar17 = SEG_1008;
                pass1_1008_3eb4(str_var1(param_5, &local_16),
                                str_var1(param_5, local_1c),
                                str_var1(param_5, &local_1a),
                                str_var1(param_5, &local_18));
                uVar3  = (uVar10 + 0x4);
                uVar16 = (uVar3 >> 0x10);
                iVar12 = uVar3;
                uVar3  = (iVar12 + 0x4);
                uVar4  = pass1_1030_addc(uVar10, uVar14,
                                        str_var1(param_5, &local_16), uVar3, (uVar3 >> 0x10), *(iVar12 + 0x8), &local_16, uVar9, param_5);
                if(uVar4 == 0x0)
                    goto LAB_1030_a660;
                uVar19 = struct_op_1030_73a8(uVar19 & 0xffff | uVar8 << 0x10);
                uVar9  = (uVar19 >> 0x10);
                iVar12 = (uVar19 + 0xc);
                if(0x5 < iVar12 - 0x7aU)
                    goto LAB_1030_a660;
                uVar17 = SEG_1030;
                switch(iVar12)
                {
                default:
                    iStack20 = local_1a + -0x1;
                    piVar5   = &local_16;
                    pass1_1030_ad86(uVar10, uVar14, str_var1(param_5, piVar5), uVar1, param_5, uVar9);
                    if(piVar5 != 0x0)
                        goto LAB_1030_a7df;
                    iStack20 = local_1a + 0x1;
                    piVar5   = &local_16;
                    pass1_1030_ad86(uVar10, uVar14, str_var1(param_5, piVar5), uVar1, param_5, uVar9);
                    if(piVar5 == 0x0)
                    {
                        iStack20 = local_1a;
                        local_16 = local_18 + -0x1;
                        piVar5   = &local_16;
                        pass1_1030_ad86(uVar10, uVar14,
                                        str_var1(param_5, piVar5), uVar1, param_5, uVar9);
                        goto joined_r0x1030a722;
                    }
                LAB_1030_a748:
                    pass1_1008_3f62(param_2, str_var1(param_5, &local_16));
                    break;
                case 0x7b:
                case 0x7e:
                    iStack20 = local_1a + -0x1;
                    piVar5   = &local_16;
                    pass1_1030_ad86(uVar10, uVar14, str_var1(param_5, piVar5), uVar1, param_5, uVar9);
                    if(piVar5 == 0x0)
                    {
                        iStack20 = local_1a + 0x1;
                        goto LAB_1030_a730;
                    }
                    pass1_1008_3f62(param_2, str_var1(param_5, &local_16));
                    if(uStack16 == 0x0)
                    {
                        return;
                    }
                    uVar17  = (uStack16 >> 0x10);
                    puVar13 = uStack16;
                    u_var20  = (uStack16 >> 0x10);
                    goto LAB_1030_a6ea;
                case 0x7c:
                case 0x7d:
                    local_16 = local_18 + -0x1;
                    piVar5   = &local_16;
                    pass1_1030_ad86(uVar10, uVar14, str_var1(param_5, piVar5), uVar1, param_5, uVar9);
                joined_r0x1030a722:
                    if(piVar5 == 0x0)
                    {
                        local_16 = local_18 + 0x1;
                    LAB_1030_a730:
                        piVar5 = &local_16;
                        pass1_1030_ad86(uVar10, uVar14,
                                        str_var1(param_5, piVar5), uVar1, param_5, uVar9);
                        if(piVar5 != 0x0)
                            goto LAB_1030_a748;
                        goto LAB_1030_a660;
                    }
                LAB_1030_a7df:
                    pass1_1008_3f62(param_2, str_var1(param_5, &local_16));
                }
                puVar13 = uStack16;
                if((uStack16 | puVar13) != 0x0)
                {
                    uVar17 = (uStack16 >> 0x10);
                    u_var20 = (uStack16 >> 0x10);
                LAB_1030_a6ea:
                    ppcVar2 = *puVar13;
                    (**ppcVar2)(SEG_1008, puVar13, u_var20, 0x1, uVar11, uVar15, uStack16, uStack16);
                }
                return;
            }
        LAB_1030_a660:
            uVar8 = uVar9;
        }
        if(uStack16 != 0x0)
        {
            ppcVar2 = *uStack16;
            (**ppcVar2)(uVar17, uStack16, (uStack16 >> 0x10), 0x1, uVar11, uVar15, uStack16, uStack16);
        }
    }
    return;
}


void  pass1_1030_8aa0(u32 param_1, u32 param_2, u16 *param_3, u16 param_4, u16 param_5)

{
    u16 uVar1;
    i16 unaff_DI;
    u32 local_12;
    u8 *puStack14;
    u32 uStack12;
    u8  local_8[0x2];
    u8  local_6[0x2];
    u8  local_4[0x2];

    puStack14 = local_8;
    pass1_1008_3eb4(param_3, CONCAT13((param_5 >> 0x8), CONCAT12(param_5, puStack14)),
                    str_var1(param_5, local_6),
                    str_var1(param_5, local_4));
    bad_1030_8cd2();
    uStack12 = str_var1(param_4, puStack14);
    uVar1    = param_4 | puStack14;
    if(uVar1 != 0x0)
    {
        pass1_1030_8d9e(param_1, param_5);
        local_12 = param_2;
        pass1_1030_8660(uStack12,
                        str_var1(param_5, &local_12), puStack14, &local_12, uVar1, param_5, unaff_DI);
    }
    return;
}


void  pass1_1030_8b00(u32 param_1, u16 *param_2, u16 *param_3, u16 param_4)

{
    u32 *puVar1;
    i16        *piVar2;
    u16         uVar3;
    u32  local_2a;
    u32  uStack38;
    u32  uStack28;
    u32 *puStack18;
    u32 *puStack16;
    i16        *piStack14;
    i16         local_c;
    u8          local_a[0x4];
    u32  u_stack6;

    u_stack6 = 0x0;
    puVar1  = (local_a + 0x2);
    piVar2  = &local_c;
    pass1_1008_3eb4(param_2, CONCAT13((param_4 >> 0x8), CONCAT12(param_4, piVar2)),
                    str_var1(param_4, local_a),
                    str_var1(param_4, puVar1));
    bad_1030_8cd2();
    puStack16 = puVar1;
    piStack14 = piVar2;
    pass1_1030_8d9e(param_1, param_4);
    puStack18 = puVar1;
    pass1_1030_861a(puStack16, piStack14, puVar1, puVar1, piVar2, param_4);
    uStack38       = *puVar1;
    uVar3          = (puVar1 + 0x2);
    uStack38._3_1_ = (uStack38 >> 0x18);
    u_stack6        = uStack38;
    if(uStack38._3_1_ == '\0')
    {
        puVar1   = &local_2a;
        uStack28 = uStack38;
        pass1_1030_8c66(param_1, local_c, (u8 *)local_a, (local_a >> 0x10),
                        str_var1(param_4, puVar1), uVar3);
        u_stack6 = *puVar1;
        uVar3   = (puVar1 + 0x2);
    }
    *param_3        = u_stack6;
    (param_3 + 0x2) = uVar3;
    return;
}


void  pass1_1030_8bac(u32 param_1, u16 param_2)

{
    i16 iStack4;

    iStack4 = 0x0;
    do
    {
        pass1_1030_86ec((param_1 + 0x38 + iStack4 * 0x4), param_2);
        iStack4 = iStack4 + 0x1;
    } while(iStack4 < 0x5);
    return;
}


void  pass1_1030_8bdc(u32 param_1, u32 param_2, u16 *param_3, i16 param_4, u16 param_5)

{
    u8   *puVar1;
    u32   local_12;
    u8   *puStack14;
    long *plStack12;
    u8    local_8[0x2];
    u8    local_6[0x2];
    u8    local_4[0x2];

    puStack14 = local_4;
    puVar1    = local_8;
    pass1_1008_3eb4(param_3, CONCAT13((param_5 >> 0x8), CONCAT12(param_5, puVar1)),
                    str_var1(param_5, local_6),
                    str_var1(param_5, puStack14));
    bad_1030_8cd2();
    plStack12 = (long *)str_var1(puVar1, puStack14);
    pass1_1030_8d9e(param_1, param_5);
    local_12 = param_2;
    pass1_1030_871e(plStack12, str_var1(param_5, &local_12), puStack14, param_4, param_5);
    return;
}


void  pass1_1030_8c38(u32 param_1, i16 param_2, u16 param_3)

{
    i16 iStack4;

    iStack4 = 0x0;
    do
    {
        pass1_1030_877c(*(u16 **)(param_1 + 0x38 + iStack4 * 0x4), param_2, param_3);
        iStack4 = iStack4 + 0x1;
    } while(iStack4 < 0x5);
    return;
}


void  pass1_1030_8c66(u32 param_1, i16 param_2, u8 *param_3, u16 param_4, u32 *param_5, u16 param_6)

{
    u8 bVar1;
    u16  u_var2;
    u32  u_stack6;

    pass1_1008_4544(*(param_1 + 0x12));
    bVar1   = *param_3;
    u_var2   = bVar1;
    u_stack6 = (u_var2 + 0x1);
    if(0x0 < param_2)
    {
        if(u_var2 == 0x0)
        {
            u_stack6 = 0x7;
        }
        else
        {
            if(((bVar1 == 0x0) || (SBORROW2(u_var2, 0x1))) || (0x1 < (u_var2 - 0x1)))
            {
                u_stack6 = 0x9;
            }
            else
            {
                u_stack6 = 0x8;
            }
        }
    }
    *param_5 = u_stack6;
    return;
}
