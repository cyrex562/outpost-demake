#include "unk_7.h"

#include "address_tables/function_tables.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_ops/struct_ops_1.h"
#include "struct_ops/struct_ops_3.h"
#include "sys_ops/sys_ops_2.h"
#include "sys_ops/sys_ops_6.h"
#include "unk_14.h"
#include "unk_3.h"
#include "unk_5.h"
#include "unk_6.h"

void pass1_1028_b58e(u32 param_1) {
    u32 uVar1;

    uVar1 = (param_1 + 0x8);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));

}


u16  pass1_1028_b5a8(u32 param_1)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x12) != 0x5)
    {
        return 0x0;
    }
    uVar1 = (param_1 + 0x14);
    return (uVar1 + 0x94);
}


u16  pass1_1028_b5ca(u32 param_1)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x12) != 0x5)
    {
        return 0x0;
    }
    uVar1 = (param_1 + 0x14);
    return (uVar1 + 0x9c);
}


void  pass1_1028_bab6(u32 param_1, i16 param_2, u16 param_3)

{
    u32 uVar1;

    uVar1 = pass1_1028_bad4(param_1, param_2, param_3);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    return;
}


u32  pass1_1028_bad4(u32 param_1, i16 param_2, u16 param_3)

{
    pass1_1028_baf6(param_1);
    return str_var1((param_2 + 0xa), (param_2 + 0x8));
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_baf6(u32 param_1)

{
    u32 uVar1;

    uVar1 = pass1_1028_bb24(param_1);
    if(uVar1 == 0x0)
    {
        return;
    }
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    return;
}


u32  pass1_1028_bb24(u32 param_1)

{
    u16        uVar1;
    u16        u_var2;
    u32 uVar3;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x8) == 0x0)
    {
        return 0x0;
    }
    uVar3 = pass1_1028_b58e(param_1 & 0xffff | u_var2 << 0x10);
    uVar1 = (uVar3 >> 0x10);
    return str_var1((uVar3 + 0xa), (uVar3 + 0x8));
}


void  pass1_1028_bb56(u32 param_1, u32 param_2)

{
    pass1_1030_177a(param_1, param_2);
    return;
}


u32  pass1_1028_bb6a(u32 param_1)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if(((iVar1 + 0x12) != 0x5) && ((iVar1 + 0x12) != 0x6))
    {
        return 0x0;
    }
    return str_var1((iVar1 + 0x16), (iVar1 + 0x14) + 0xa4);
}


void  pass1_1028_bb96(Struct296 *param_1, u32 *param_2, u16 param_3)

{
    u32         *puVar1;
    u32         *pu_var2;
    u32   uVar3;
    i16          iVar6;
    Struct296 *iVar5;
    Struct297 *iVar4;
    u32         *puVar7;
    u16          uVar8;
    u16          uVar9;

    uVar8 = (param_1 >> 0x10);
    iVar5 = (Struct296 *)param_1;
    if((iVar5->field_0x12 == 0x5) || (iVar5->field_0x12 == 0x6))
    {
        uVar3  = iVar5->field_0x14;
        uVar9  = (uVar3 >> 0x10);
        puVar7 = (uVar3 + 0xa4);
        for(iVar6 = 0x2; iVar6 != 0x0; iVar6 = iVar6 + -0x1)
        {
            pu_var2  = puVar7;
            puVar7  = puVar7 + 0x1;
            puVar1  = param_2;
            param_2 = param_2 + 0x1;
            *pu_var2 = *puVar1;
        }
        puVar7 = param_2;
        pass1_1028_c724(param_1);
        uVar3 = iVar5->field_0x14;
        uVar8 = (uVar3 >> 0x10);
        iVar4 = (Struct297 *)uVar3;
        if(iVar4->field_0xaa == 0x0)
        {
            iVar4->field_0xaa = 0x1;
        }
    }
    return;
}


void  pass1_1028_bbf0(u16 param_1, u16 param_2, u32 *param_3)

{
    *param_3 = 0x0;
    return;
}


u16  pass1_1028_bc1c(u32 param_1)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((iVar1 + 0x12) == 0x4)
    {
        return (iVar1 + 0xe);
    }
    if((iVar1 + 0x12) == 0x7)
    {
        return (iVar1 + 0x10);
    }
    return (iVar1 + 0xc);
}


void  pass1_1028_bc7e(u32 *param_1, u16 param_2)

{
    pass1_1028_bdac(param_1, 0x4, param_2);
    return;
}


u16  pass1_1028_bc90(u32 *param_1, u16 *param_2, u32 param_3, u32 param_4, i16 param_5, u16 param_6, u16 param_7)

{
    void **ppcVar1;
    u32        u_var2;
    i16        iVar3;
    BOOL16     BVar4;
    u32 uVar5;
    u16        uVar6;
    u16        uVar7;

    uVar6 = param_1;
    uVar7 = (param_1 >> 0x10);
    pass1_1028_c7b6(param_7, param_6, uVar6, uVar7, param_2, param_4);
    if((param_5 == 0x5) || (param_5 == 0x6))
    {
        u_var2   = *param_1;
        ppcVar1 = (u_var2 + 0x60);
        iVar3   = (**ppcVar1)();
        if(iVar3 != 0x0)
        {
            ppcVar1 = (u_var2 + 0x5c);
            uVar5   = (**ppcVar1)();
            if(uVar5 != 0x0)
            {
                pass1_1028_c23e(uVar6, uVar7, param_2, param_3, param_4, uVar5, (uVar5 >> 0x10), param_7);
                if(uVar5 != 0x0)
                {
                    BVar4 = pass1_1028_c314(param_7, uVar5, (uVar5 >> 0x10), uVar6, uVar7, param_2, param_3, (param_3 >> 0x10), param_4);
                    if(BVar4 != 0x0)
                    {
                        return 0x1;
                    }
                }
            }
        }
    }
    else
    {
        globals->PTR_LOOP_1050_50ca = 0x6a8;
    }
    return 0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_bd38(u32 param_1, u16 param_2, u16 param_3)

{
    u16 uVar1;
    u16 u_var2;
    i16 iVar3;
    i16 iVar4;
    u32 uVar5;
    u16 extraout_DX;
    i16 iStack20;

    uVar5 = *(globals->_PTR_LOOP_1050_65e2 + 0x52);
    pass1_1030_4bbe(param_3, param_2, uVar5, (param_1 + 0xc));
    iVar3 = uVar5;
    iVar4 = iVar3;
    pass1_1028_b58e(param_1);
    uVar5    = *(iVar4 + 0x2e);
    iStack20 = 0x11;
    do
    {
        uVar1 = (iStack20 * 0x4 + iVar3);
        u_var2 = (iStack20 * 0x4 + iVar3 + 0x2);
        if((u_var2 | uVar1) != 0x0)
        {
            pass1_1038_5770(uVar5, str_var1(u_var2, uVar1), iStack20);
        }
        iStack20 = iStack20 + 0x1;
    } while(iStack20 < 0x25);
    return;
}


void  pass1_1028_be2a(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    void **ppcVar1;
    u16    u_var2;
    u32    uVar3;
    i16    iVar4;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x12) != 0x6)
    {
        return;
    }
    uVar3 = pass1_1028_b4f2(param_1);
    if((uVar3 + 0x200) != 0x8000002)
    {
        if((param_1 + 0x1c) == 0x8000002)
        {
            iVar4 = 0x6;
            goto code_r0x1028be96;
        }
        ppcVar1 = (*param_1 + 0x64);
        iVar4   = (**ppcVar1)(param_4, param_1);
        if(iVar4 == 0x0)
        {
            return;
        }
        pass1_1028_cb04(param_1, param_2, param_3, param_5);
        if(iVar4 == 0x0)
        {
            iVar4 = 0x6;
            goto code_r0x1028be96;
        }
        pass1_1028_c952(param_1, param_2, param_3, param_5);
    }
    iVar4 = 0x5;
code_r0x1028be96:
    pass1_1028_bdac(param_1, iVar4, param_4);
    return;
}


void  pass1_1028_be9e(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    i16       *pi_var1;
    u32 u_var2;
    i16        iVar3;
    i16        iVar4;
    u16        uVar5;
    u32        uVar6;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x12) == 0x4)
    {
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
            pass1_1028_cb04(param_1, param_2, param_3, param_5);
            if(iVar3 == 0x0)
            {
                return;
            }
            u_var2   = (iVar4 + 0x14);
            pi_var1  = (u_var2 + 0x94);
            *pi_var1 = *pi_var1 + -0x1;
            pass1_1028_c952(param_1, param_2, param_3, param_5);
        }
        u_var2 = (iVar4 + 0x14);
        if((u_var2 + 0x94) < 0x1)
        {
            pass1_1028_bdac(param_1, 0x5, param_4);
        }
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_bf22(u32 param_1, u8 *param_2, u16 param_3)

{
    i16 iVar1;
    i16 iVar2;
    u16 uVar3;
    u32 uVar4;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    iVar1 = (iVar2 + 0x12);
    if(iVar1 == 0x4)
    {
        uVar4 = pass1_1028_e0bc(globals->_PTR_LOOP_1050_65e2, (iVar2 + 0xc), 0x0, param_2, param_3);
    }
    else
    {
        iVar1 = iVar1 + -0x5;
        if(iVar1 != 0x0)
        {
            if(iVar1 != 0x1)
            {
                (iVar2 + 0x14) = 0x0;
            }
            return;
        }
        pass1_1028_e100(globals->_PTR_LOOP_1050_65e2, (iVar2 + 0xc), param_2);
        uVar4 = str_var1(param_2, iVar1);
    }
    (iVar2 + 0x14) = uVar4;
    (iVar2 + 0x16) = (uVar4 >> 0x10);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_bf76(Struct174 *param_1, u16 param_2)

{
    BOOL16       BVar1;
    Struct174 *iVar2;
    u16          u_var2;

    pass1_1008_612e(0x1, 0x3, param_2);
    u_var2 = (param_1 >> 0x10);
    iVar2 = (Struct174 *)param_1;
    BVar1 = pass1_1008_c6ae(globals->dat_1050_06e0, iVar2->field_0xc, 0x28);
    if(BVar1 == 0x0)
    {
        if(param_2 == 0x1)
        {
            iVar2->field_0x10 = 0x48;
            return;
        }
        if(param_2 != 0x2)
        {
            iVar2->field_0x10 = 0x4a;
            return;
        }
        iVar2->field_0x10 = 0x49;
        return;
    }
    if(param_2 == 0x1)
    {
        iVar2->field_0x10 = 0x70;
        return;
    }
    if(param_2 != 0x2)
    {
        iVar2->field_0x10 = 0x72;
        return;
    }
    iVar2->field_0x10 = 0x71;
    return;
}


void  pass1_1028_c1f8(u16 param_1, i16 param_2, u16 param_3, u32 param_4, u16 *param_5, u16 *param_6)

{
    u32 *puVar1;
    u32  local_c;
    u16         uStack8;
    i16         iStack6;
    u16         uStack4;

    pass1_1028_baf6(param_4);
    iStack6 = param_2;
    uStack4 = param_3;
    puVar1  = pass1_1030_5b5c(param_2, param_3);
    local_c = *puVar1;
    uStack8 = (puVar1 + 0x4);
    pass1_1008_3e94(str_var1(param_1, &local_c), param_5, param_6);
    return;
}


void  pass1_1028_a4ee(u32 param_1, u32 param_2, i16 param_3, u16 param_4)

{
    u32         uVar1;
    void **ppcVar2;
    u16         uVar3;
    BOOL16      BVar4;
    u16         uVar5;
    u32         uVar6;
    u8         *puVar7;
    u8         *puVar8;
    u16         uVar9;
    u16         uVar10;
    u32        *puVar11;
    u16         uVar12;
    i16         iStack50;
    u32 *puStack18;

    uVar9   = (param_2 >> 0x10);
    uVar1   = *(param_2 + 0x1f6);
    uVar6   = *_PTR_LOOP_1050_65e2;
    puVar11 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x26);
    puVar7  = (puVar11 >> 0x10);
    uVar5   = puVar11;
    uVar10  = SUB42(SEG_1038, 0x0);
    pass1_1038_4d6e(param_2, puVar11, uVar5, puVar7);
    puStack18 = str_var1(puVar7, uVar5);
    ppcVar2   = (*puStack18 + 0x10);
    uVar3     = uVar5;
    puVar8    = puVar7;
    (**ppcVar2)(SEG_1038, uVar5, puVar7);
    if((puVar8 | uVar3) != 0x0)
    {
        uVar10 = SEG_1030;
        pass1_1030_3548(uVar1, str_var1(puVar8, uVar3));
    }
    if(puStack18 != 0x0)
    {
        ppcVar2 = *puStack18;
        (**ppcVar2)(uVar10, uVar5, puVar7, 0x1);
    }
    uVar3  = (uVar6 % 0xc);
    uVar12 = (param_1 >> 0x10);
    uVar5  = uVar3;
    if(uVar6 % 0xc == 0x0)
    {
        pass1_1030_387c(uVar1);
        pass1_1028_a61e(param_1, uVar12, uVar1, param_2, uVar5, uVar3, param_3, param_4);
    }
    pass1_1038_3fb0(param_2);
    if(((param_2 + 0x204) != 0x0) && (BVar4 = pass1_1030_25b2(CONCAT13((uVar3 >> 0x8), CONCAT12(uVar3, uVar5)), 0x80), BVar4 != 0x0))
    {
        return;
    }
    uVar9    = (uVar1 >> 0x10);
    uVar5    = uVar1 + 0x180;
    uVar6    = uVar5;
    iStack50 = 0x1;
    do
    {
        if((iStack50 * 0x2 + uVar5) != 0x0)
        {
            pass1_1008_612e(0x1, 0x64, uVar6);
            if(uVar6 <= (iStack50 * 0x2 + uVar5))
            {
                pass1_1028_a188(param_1, uVar12, (iStack50 * 0x2 + uVar1 + 0x174), iStack50, param_2, param_4);
            }
        }
        iStack50 = iStack50 + 0x1;
    } while(iStack50 < 0x6);
    return;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_a61e(u16 param_1, u16 param_2, u32 param_3, u32 param_4, u16 param_5, i16 param_6, i16 param_7, u16 param_8)

{
    u16        uVar1;
    u32        u_var2;
    i16        iVar3;
    u8        *puVar4;
    u16        uVar5;
    u16       *puVar6;
    u16        uStack16;
    u32 uStack14;

    pass1_1030_38b8();
    if((param_6 < 0x3fff) || ((param_6 < 0x4000 && (param_5 != 0xffff))))
    {
        pass1_1030_38f2(param_3, 0x3, param_8);
        uVar1 = param_5;
        iVar3 = param_6;
        pass1_1030_38f2(param_3, 0x4, param_8);
        uStack14 = str_var1(param_6 + iVar3 + CARRY2(param_5, uVar1), param_5 + uVar1);
        uStack16 = (param_3 + 0x1a8);
        if(uStack16 == 0x0)
        {
            uStack16 = 0x5;
        }
        u_var2          = uStack14 / (long)uStack16;
        uStack14 = (u_var2 >> 0x10);
        puVar4         = (uStack14 | u_var2);
        if((puVar4 != 0x0) && (uVar5 = (param_4 >> 0x10), (param_4 + 0x200) != 0x8000002))
        {
            puVar6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_8, puVar4, param_7);
            pass1_1010_043a(puVar6, (param_4 + 0x4), 0xc, param_8);
            pass1_1030_3534(param_3, u_var2);
        }
    }
    return;
}


u16  pass1_1028_a73c(u16 param_1, u16 param_2)

{
    u8 *puVar1;
    u8 *pu_var2;
    u16 uVar3;
    u8  local_14[0x12];

    pass1_1028_dc52((Struct92 *)str_var1(param_2, local_14), 0x1, 0x0, 0x400);
    while(true)
    {
        puVar1 = local_14;
        pass1_1028_e4ec(str_var1(param_2, puVar1));
        uVar3 = param_1 | puVar1;
        if(uVar3 == 0x0)
            break;
        pu_var2 = puVar1;
        pass1_1038_5464(str_var1(param_1, puVar1), puVar1, SEG_1038, param_2);
        pass1_1038_56d6(str_var1(param_1, puVar1), 0x0);
        pass1_1038_518c(str_var1(param_1, puVar1), pu_var2, SEG_1038);
        param_1 = uVar3;
    }
    return 0x1;
}


u16  pass1_1028_a89c(u16 param_1, u16 param_2)

{
    u8 *puVar1;
    u16 u_var2;
    u8  local_14[0x12];

    pass1_1028_dc52((Struct92 *)str_var1(param_2, local_14), 0x1, 0x0, 0x400);
    while(true)
    {
        u_var2  = param_1;
        puVar1 = local_14;
        pass1_1028_e4ec(str_var1(param_2, puVar1));
        param_1 = u_var2 | puVar1;
        if(param_1 == 0x0)
            break;
        if((puVar1 + 0x200) != 0x8000002)
        {
            pass1_1038_3fca(str_var1(u_var2, puVar1), puVar1, param_2);
        }
    }
    return 0x1;
}


u16  pass1_1028_a9f4(u16 param_1, u16 param_2)

{
    void **ppcVar1;
    u8         *pu_var2;
    BOOL16      BVar3;
    u16         uVar4;
    u16         extraout_DX;
    u32 *puStack24;
    u8          local_14[0x12];

    pass1_1028_dc52((Struct92 *)str_var1(param_2, local_14), 0x1, 0x0, 0x700);
    while(true)
    {
        pu_var2 = local_14;
        pass1_1028_e4ec(str_var1(param_2, pu_var2));
        puStack24 = str_var1(param_1, pu_var2);
        uVar4     = param_1 | pu_var2;
        if(uVar4 == 0x0)
            break;
        BVar3   = pass1_1008_c6ae(globals->dat_1050_06e0, (pu_var2 + 0xc), 0xc);
        param_1 = uVar4;
        if(BVar3 != 0x0)
        {
            ppcVar1 = (*puStack24 + 0x34);
            (**ppcVar1)(SEG_1008, pu_var2);
            param_1 = extraout_DX;
        }
    }
    return 0x1;
}


u16  pass1_1028_ab68(u16 param_1, u16 param_2)

{
    u16         uVar1;
    void **ppcVar2;
    u8         *puVar3;
    BOOL16      BVar4;
    u16         uVar5;
    u16         extraout_DX;
    u32 *puStack24;
    u8          local_14[0x12];

    pass1_1028_dc52((Struct92 *)CONCAT13((param_2 >> 0x8), CONCAT12(param_2, local_14)), 0x1, 0x0, 0x700);
LAB_1028_ab7e:
    uVar5  = param_1;
    puVar3 = local_14;
    pass1_1028_e4ec(str_var1(param_2, puVar3));
    puStack24 = str_var1(uVar5, puVar3);
    param_1   = uVar5 | puVar3;
    if(param_1 == 0x0)
    {
        return 0x1;
    }
    uVar1 = (puVar3 + 0xc);
    BVar4 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x11);
    if(BVar4 == 0x0)
        goto code_r0x1028abad;
    goto LAB_1028_abc0;
code_r0x1028abad:
    BVar4 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x12);
    if(BVar4 != 0x0)
    {
    LAB_1028_abc0:
        if((puVar3 + 0x12) == 0x5)
        {
            ppcVar2 = (*puStack24 + 0x30);
            (**ppcVar2)(SEG_1008);
            param_1 = extraout_DX;
        }
    }
    goto LAB_1028_ab7e;
}


u16  pass1_1028_acec(u16 param_1, u16 param_2)

{
    u16 *puVar1;
    u16 *pu_var2;
    u16  uVar3;
    u16  local_14;
    u16  uStack18;

    pass1_1028_dc52((Struct92 *)str_var1(param_2, &local_14), 0x1, 0x0, 0x400);
    while(true)
    {
        uVar3  = param_1;
        puVar1 = &local_14;
        pass1_1028_e4ec(str_var1(param_2, puVar1));
        param_1 = uVar3 | puVar1;
        if(param_1 == 0x0)
            break;
        pu_var2 = puVar1;
        vsprintf_op_1030_840a(s_SCSetup__calcMe_clearing_colony_0_1050_512c, SEG_1030, param_2, param_1);
        if((puVar1 + 0x100) != 0x8000002)
        {
            pass1_1038_5464(str_var1(uVar3, puVar1), pu_var2, SEG_1038, param_2);
            pass1_1038_56d6(str_var1(uVar3, puVar1), 0x1);
        }
    }
    local_14 = addr_table_1008_380a[36]; // 0x389a
    uStack18 = SEG_1008;
    pass1_1028_dc52((Struct92 *)str_var1(param_2, &local_14), 0x1, 0x0, 0x800);
    while(true)
    {
        puVar1 = &local_14;
        pass1_1028_e4ec(str_var1(param_2, puVar1));
        uVar3 = param_1 | puVar1;
        if(uVar3 == 0x0)
            break;
        pass1_1030_2690(str_var1(param_1, puVar1));
        param_1 = uVar3;
    }
    return 0x1;
}


void  pass1_1028_aec0(u32 param_1, i16 param_2, u16 param_3, u16 param_4)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    uVar1 = (param_1 + 0x108);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    pass1_1030_375a(*(param_2 + 0x1f6), 0x0, (long)(param_1 + 0x114), param_4);
    return;
}


Struct100 * pass1_1028_b0de(Struct100 *param_1, u32 param_2, u32 param_3, u16 param_4, u8 param_5) {
    pass1_1028_6af2(param_1, param_2, param_3, param_4, param_5);
    param_1->field_0x0 = addr_table_1028_b1f4;//0xb1f4;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


u16 * pass1_1028_b22c(u16 *param_1, u16 param_2, u32 param_3, u16 param_4) {
    u16 uVar1;

    pass1_1030_165e(param_1, 0x6000000, param_3, param_4);
    uVar1 = (param_1 >> 0x10);
    (param_1 + 0xc) = param_2;
    param_1->field_0x0 = addr_table_1028_b33c;//0xb33c;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


void  pass1_1028_b260(u16 *param_1) {
    param_1->field_0x0 = addr_table_1028_b33c;//0xb33c;
    param_1->field_0x2 = SEG_1028;
    pass1_1030_16b2(param_1);
    return;
}


BOOL16  write_to_file_1028_b286(i16 param_1, u16 param_2)

{
    u32 uVar1;
    BOOL16     in_AX;
    BOOL16     BVar2;

    pass1_1030_16d6(*(param_1 + 0x6), *(param_1 + 0xa), param_2);
    if(in_AX != 0x0)
    {
        uVar1            = (param_1 + 0x6);
        (param_1 + -0xa) = (uVar1 + 0xc);
        uVar1            = (param_1 + 0xa);
        BVar2            = write_to_file_1008_7e1c(uVar1, (uVar1 >> 0x10), param_1 - 0xa, param_2, 0x2, SEG_1008);
        if(BVar2 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d0;
            return BVar2;
        }
        in_AX = 0x1;
    }
    return in_AX;
}


void  pass1_1028_9600(u32 param_1, u8 *param_2, i16 param_3, u16 param_4, u8 param_5)

{
    u16 *puVar1;
    u8   local_6[0x4];

    puVar1 = pass1_1020_a43e(param_4, param_2, str_var1(param_4, local_6));
    pass1_1020_a80e(local_6, param_4, (param_1 + 0x11a), local_6, (puVar1 >> 0x10), param_4, param_5, param_3);
    return;
}


void  pass1_1028_9624(Struct688 *param_1, u16 param_2, u8 *param_3, u16 param_4, i16 param_5, u8 param_6)

{
    void **ppcVar1;
    u32         *pu_var2;
    u16          uVar3;
    u16          uVar4;
    BOOL16       BVar5;
    u32          uVar7;
    u8          *extraout_DX;
    u16          extraout_DX_00;
    Struct688 *iVar9;
    u16          uVar8;
    u16          uVar9;
    u8          *puVar10;
    u16          uStack332;
    u16          uStack330;
    u16          u_stack64;
    u32   u_stack62;
    i16          iStack58;
    u32   uStack56;
    u32  *puStack46;
    u32          uStack42;
    u8           local_26[0x4];
    u16          uStack34;
    u8          *puStack32;
    u32          uStack30;
    u32   uStack26;
    u32  *puStack22;
    u8           local_12[0x2];
    u8           local_10[0x2];
    u8           local_e[0x2];
    u16          uStack12;
    u32   uStack10;
    u16         *pu_stack6;
    u32  *puVar6;

    uVar8 = (param_1 >> 0x10);
    iVar9 = (Struct688 *)param_1;
    uVar7 = iVar9->field_0x10c;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar7, (uVar7 >> 0x10));
    &iVar9->field_0x110         = param_2;
    (&iVar9->field_0x110 + 0x2) = param_3;
    pu_stack6                    = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_4, param_3, param_5);
    uStack10              = (pu_stack6 >> 0x10);
    pu_var2                      = &iVar9->field_0x114;
    pass1_1030_64ce(param_4, pu_var2, uStack10, globals->_PTR_LOOP_1050_5740, (param_1 & 0xffff0000 | ZEXT24(pu_var2)), iVar9->field_0x108,
                    str_var1(param_4, local_26));
    uStack56       = *pu_var2;
    uStack56._3_1_ = (uStack56 >> 0x18);
    uStack12       = (uStack56._3_1_ != '\0');
    uVar9          = SEG_1008;
    puStack46      = uStack56;
    uStack10       = uStack56;
    pass1_1008_3eb4((param_1 & 0xffff0000 | ZEXT24(&iVar9->field_0x114)),
                    str_var1(param_4, local_12),
                    str_var1(param_4, local_10),
                    str_var1(param_4, local_e));
    if(uStack12 == 0x0)
    {
        pu_var2 = &iVar9->field_0x114;
        pass1_1028_e2ac(globals->_PTR_LOOP_1050_65e2, 0x500);
        puStack22 = str_var1(uStack10, pu_var2);
        uVar9     = SEG_1030;
        pass1_1030_61fe(globals->_PTR_LOOP_1050_5740,
                        str_var1(uStack10, pu_var2), param_1 & 0xffff0000 | ZEXT24(&iVar9->field_0x114), iVar9->field_0x108, pu_var2, uStack10, param_4);
        if((iVar9->field_0x11a == 0xa) || (iVar9->field_0x11a == 0x37))
        {
            if(iVar9->field_0x11a == 0x37)
            {
                uStack56           = iVar9->field_0x11e;
                uStack10     = (&iVar9->field_0x11e + 0x2);
                uStack42           = iVar9->field_0x10c;
                *(uStack56 + 0x20) = uStack42;
            }
            pu_var2 = &iVar9->field_0x114;
            pass1_1028_e2ac(globals->_PTR_LOOP_1050_65e2, 0x400);
            &iVar9->field_0x10c = pu_var2;
            (&iVar9->field_0x10c + 0x2)  = uStack10;
            uVar9                        = SEG_1018;
            pass1_1018_0196(pu_stack6,
                            str_var1(uStack10, &iVar9->field_0x10c), iVar9->field_0x108, pu_var2, uStack10, param_4);
            if(iVar9->field_0x11a == 0xa)
            {
                uVar9 = SEG_1010;
                pass1_1010_ed22(pu_stack6, iVar9->field_0x10c, param_4);
            }
        }
        uVar7 = iVar9->field_0x10c;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar7, (uVar7 >> 0x10));
        &iVar9->field_0x110 = pu_var2;
        (&iVar9->field_0x110 + 0x2)  = uStack10;
        uVar4                        = uStack10 | &iVar9->field_0x110;
        puVar6                       = uVar4;
        if(uVar4 == 0x0)
            goto LAB_1028_9807;
        uVar3   = SUB42(puStack22, 0x0);
        puVar10 = (puStack22 >> 0x10);
    }
    else
    {
        puStack22 = uStack10;
        puVar6    = uStack10;
        if(iVar9->field_0x11a != 0x75)
            goto LAB_1028_9807;
        uVar3          = SUB42(uStack10, 0x0);
        puVar10        = uStack10;
        uStack10 = (&iVar9->field_0x110 + 0x2);
    }
    ppcVar1 = (*iVar9->field_0x110 + 0x8);
    (**ppcVar1)(uVar9, &iVar9->field_0x110, uStack10, 0x0, uVar3, puVar10, 0x0);
    uStack10 = extraout_DX;
LAB_1028_9807:
    uVar9 = SUB42(puVar6, 0x0);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, puStack22, (puStack22 >> 0x10));
    uStack26 = str_var1(uStack10, uVar9);
    pass1_1030_73ee(str_var1(uStack10, uVar9), iVar9->field_0x10c, uStack10);
    BVar5     = pass1_1008_c6ae(globals->dat_1050_06e0, iVar9->field_0x11a, 0x31);
    puStack32 = uStack10;
    if((BVar5 == 0x0) && (iVar9->field_0x122 == 0x0))
    {
        u_stack62 = (uStack26 + 0xc);
        iStack58 = (uStack26 + 0x10);
        uStack56 = (uStack56 & 0xffff0000 | ZEXT24(&u_stack62));
        if(iStack58 < 0x1)
        {
            u_stack64 = 0x5;
        }
        else
        {
            u_stack64 = 0x6;
        }
        (uStack26 + 0x14) = u_stack64;
        puStack32         = uStack26;
    }
    uVar7    = *(uStack26 + 0x16);
    uStack30 = uVar7;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar7, (uVar7 >> 0x10));
    uStack34 = uVar7;
    if(uStack30 != 0x0)
    {
        struct_1030_e4fa((Struct100 *)str_var1(param_4, &uStack332), uStack30, param_4, param_6);
        fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_4, &uStack332));
        uStack332 = addr_table_1008_380a[36]; // 0x389a
        uStack330 = SEG_1008;
    }
    ppcVar1 = (*iVar9->field_0x11e + 0x4);
    (**ppcVar1)();
    puVar6 = iVar9->field_0x11e;
    pass1_1030_7e5a(uStack26, *(puVar6 + 0x4), extraout_DX_00);
    return;
}


void  pass1_1028_99c4(u32 param_1, i16 param_2, u16 param_3)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    uVar1 = (param_1 + 0x10c);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    pass1_1030_355c(*(param_2 + 0x1f6), *(param_1 + 0x114));
    return;
}


u16  pass1_1028_9c90(u32 param_1)

{
    u16 uVar1;
    u16 u_var2;

    uVar1 = (param_1 + 0x108) - 0x3e8;
    if((uVar1 < 0x3a99) && (uVar1 % 0x3e8 == 0x0))
    {
        // WARNING: Could not recover jumptable at 0x10289dc0. Too many branches
        // WARNING: Treating indirect jump as call
        u_var2 = (**((uVar1 / 0x3e8) * 0x2 + -0x623a))();
        return u_var2;
    }
    return 0x1;
}


void  pass1_1028_a28a(u16 param_1, u16 param_2, u32 param_3)

{
    void **ppcVar1;
    u16          u_var2;
    u16          uVar3;
    u32          uVar4;
    u8          *puVar5;
    u8          *puVar6;
    u8          *puVar7;
    u16          uVar8;
    Struct691 *iVar9;
    u16          uVar9;
    u32         *puVar10;
    u32  *puStack10;

    puVar10 = pass1_1008_c6fa(globals->dat_1050_06e0, 0xe);
    puVar5  = (puVar10 >> 0x10);
    u_var2   = puVar10;
    pass1_1038_4d6e(param_3, puVar10, u_var2, puVar5);
    puStack10 = str_var1(puVar5, u_var2);
    uVar9     = (param_3 >> 0x10);
    iVar9     = (Struct691 *)param_3;
    uVar4     = iVar9->field_0x1f6;
    ppcVar1   = (*puStack10 + 0x10);
    puVar6    = puVar5;
    (**ppcVar1)(SEG_1038, u_var2, puVar5);
    uVar3  = uVar4;
    puVar7 = puVar6;
    pass1_1030_38b8();
    if((uVar4 & 0xffff | ZEXT24(puVar6) << 0x10) == 0x0)
    {
        uVar4 = 0x64;
        uVar8 = 0x0;
    }
    else
    {
        uVar4 = str_var1(puVar7, uVar3) / (long)(uVar4 & 0xffff | ZEXT24(puVar6) << 0x10);
        uVar8 = (uVar4 >> 0x10);
    }
    uVar4 = uVar4 & 0xffff | uVar8 << 0x10;
    if(puStack10 != 0x0)
    {
        ppcVar1 = *puStack10;
        (**ppcVar1)(SEG_1030, u_var2, puVar5, 0x1);
    }
    if((long)uVar4 < 0x64)
    {
        if((long)uVar4 < 0x55)
        {
            if((long)uVar4 < 0x4b)
            {
                if((long)uVar4 < 0x32)
                {
                    if((long)uVar4 < 0x19)
                    {
                        iVar9->field_0x20a = 0x1;
                        iVar9->field_0x20c = 0xffff;
                        return;
                    }
                    iVar9->field_0x20a = 0x0;
                    iVar9->field_0x20c = 0x0;
                    return;
                }
                iVar9->field_0x20a = 0xfffb;
            }
            else
            {
                iVar9->field_0x20a = 0xfff6;
            }
        }
        else
        {
            iVar9->field_0x20a = 0xfff1;
        }
    }
    else
    {
        iVar9->field_0x20a = 0xffec;
    }
    iVar9->field_0x20c = 0x1;
    return;
}


u16  pass1_1028_83b4(u16 param_1, u16 param_2)

{
    u8 *puVar1;
    u8  local_14[0x12];

    pass1_1028_dc52((Struct92 *)str_var1(param_2, local_14), 0x1, 0x0, 0x400);
    while(true)
    {
        puVar1 = local_14;
        pass1_1028_e4ec(str_var1(param_2, puVar1));
        if((param_1 | puVar1) == 0x0)
            break;
        (puVar1 + 0x206) = 0x1;
        param_1          = param_1 | puVar1;
    }
    return 0x1;
}


u16  pass1_1028_853e(u32 param_1, u16 param_2, u16 param_3)

{
    u32 uVar1;
    u16        u_var2;
    i16        iVar3;
    u16        uVar4;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    if((iVar3 + 0x108) == 0x0)
    {
        return 0x0;
    }
    uVar1 = (iVar3 + 0x10e);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    if((iVar3 + 0x108) == 0x1)
    {
        u_var2 = 0x3e8;
    }
    else
    {
        u_var2 = 0x0;
    }
    pass1_1038_4d0e(str_var1(param_3, param_2), u_var2);
    return 0x1;
}


Struct100 * pass1_1028_8698(Struct100 *param_1, u32 param_2, u32 param_3, u8 param_4, u16 param_5) {
    pass1_1028_6af2(param_1, param_2, param_3, param_5, param_4);
    param_1->field_0x0 = addr_table_1028_87e0;//0x87e0;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}


void  pass1_1028_8e1e(u32 param_1, i16 param_2, u16 param_3)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    uVar1 = (param_1 + 0x10c);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    pass1_1030_355c(*(param_2 + 0x1f6), *(param_1 + 0x114));
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_8e5c(u32 param_1, i16 param_2, u8 *param_3, u16 param_4)

{
    u32 uVar1;
    u32        u_var2;
    i16        iVar3;
    u16        uVar4;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    uVar1 = (iVar3 + 0x108);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    u_var2 = *(param_2 + 0x1f6);
    pass1_1030_35a4(u_var2, (iVar3 + 0x110), param_3, SEG_1030, param_4);
    (iVar3 + 0x114) = u_var2;
    (iVar3 + 0x116) = param_3;
    return;
}


Struct100 * pass1_1028_8fc0(Struct100 *param_1, u32 param_2, u32 param_3, u16 param_4, u8 param_5) {
    pass1_1028_6af2(param_1, param_2, param_3, param_4, param_5);
    param_1->field_0x0 = addr_table_1028_90d6;//0x90d6;
    param_1->field_0x2 = SEG_1028;
    return param_1;
}

u16  pass1_1028_74e4(u32 param_1, long param_2, i16 param_3, u16 param_4, u8 param_5)

{
    i16 iVar1;

    pass1_1028_7fb6(param_1, param_3, param_4, param_5);
    pass1_1028_7c4e(param_1, param_2, param_3, param_4);
    pass1_1028_7dfc(param_1, param_2, param_3, param_4, param_5);
    iVar1 = post_msg_1028_76da(param_1);
    pass1_1028_767e(iVar1, param_2, param_3, param_4);
    pass1_1028_75bc(param_4);
    pass1_1028_78b8(param_1, param_2, param_3, param_4, param_5);
    return 0x1;
}

void  pass1_1028_75bc(u16 param_1)

{
    u16 uVar1;
    u8 *pu_var2;
    u16 uVar3;
    u32 uVar4;
    u32 uStack28;
    u8  local_18[0x8];
    u16 uStack16;
    u16 uStack14;
    u16 uStack12;
    u16 uStack10;
    i16 iStack8;
    u32 u_stack6;

    u_stack6 = *_PTR_LOOP_1050_65e2;
    uVar1   = ((qword)u_stack6 % 0x7b);
    uVar4   = uVar1;
    if((uVar1 == 0x0) && (0x95 < u_stack6))
    {
        pass1_1028_dc52((Struct92 *)str_var1(param_1, local_18), 0x1, 0x0, 0x400);
        while(true)
        {
            uVar1  = uVar4;
            pu_var2 = local_18;
            pass1_1028_e4ec(str_var1(param_1, pu_var2));
            uStack28 = str_var1(uVar1, pu_var2);
            uVar4    = (uVar1 | pu_var2);
            if((uVar1 | pu_var2) == 0x0)
                break;
            pass1_1008_612e(0x1, 0x64, pu_var2);
            if(pu_var2 < 0x6)
            {
                pass1_1038_362e(uStack28);
            }
        }
        if(iStack8 != 0x0)
        {
            uStack12 = 0x1;
            uStack10 = 0x0;
        }
        uVar4    = uStack10;
        uStack16 = uStack12;
        uStack14 = uStack10;
        while(true)
        {
            uVar1  = uVar4;
            pu_var2 = local_18;
            pass1_1028_e4ec(str_var1(param_1, pu_var2));
            uVar3 = uVar1 | pu_var2;
            uVar4 = uVar3;
            if(uVar3 == 0x0)
                break;
            pass1_1038_3698(str_var1(uVar1, pu_var2), pu_var2, uVar3, param_1);
        }
    }
    return;
}

void  pass1_1028_7742(u16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    void **ppcVar1;
    u16         u_var2;
    u8         *puVar3;
    u16         uVar4;
    u8         *puVar5;
    u16         extraout_DX;
    u16         uVar6;
    u16         extraout_DX_00;
    u32        *puVar7;
    u32         uVar8;
    u8          uVar9;
    u8          uVar10;
    u16         uVar11;
    u32         uStack26;
    u8          local_16[0x2];
    u32         uStack20;
    u16         uStack16;
    u32 *puStack14;
    u16         uStack10;
    u8         *puStack8;
    u16         u_stack6;
    u16         uStack4;

    puVar7   = pass1_1008_c6fa(globals->dat_1050_06e0, 0x18);
    uVar4    = (puVar7 >> 0x10);
    uVar6    = SUB42(puVar7, 0x0);
    u_stack6  = uVar6;
    uStack4  = uVar4;
    uVar8    = pass1_1028_b4f2(param_4);
    puVar5   = (uVar8 >> 0x10);
    u_var2    = uVar8;
    uStack10 = u_var2;
    puStack8 = puVar5;
    pass1_1038_4d6e(uVar8, str_var1(uVar4, uVar6), u_var2, puVar5);
    puStack14 = str_var1(puVar5, u_var2);
    uStack16  = 0x0;
    ppcVar1   = (*puStack14 + 0x10);
    uVar11    = u_var2;
    (**ppcVar1)(SEG_1038, u_var2, puVar5);
    uStack20 = str_var1(extraout_DX, u_var2);
    uVar8    = pass1_1030_bcae(local_16, param_5);
    uVar6    = (uVar8 >> 0x10);
    uStack26 = 0x0;
    do
    {
        if(uStack20 <= uStack26)
        {
        LAB_1028_77e7:
            if(puStack14 != 0x0)
            {
                ppcVar1 = *puStack14;
                (**ppcVar1)(SEG_1030, puStack14, (puStack14 >> 0x10), 0x1, uVar11, puVar5, puStack14, puStack14);
            }
            return;
        }
        uVar8 = uStack20;
        pass1_1030_1d58(puStack14);
        uVar4  = uVar8;
        uVar9  = uVar8;
        uVar10 = (uVar8 >> 0x8);
        pass1_1028_b58e(param_4);
        puVar3 = local_16;
        uVar8  = str_var1(uVar6, CONCAT11(uVar10, uVar9));
        uVar6  = extraout_DX_00;
        pass1_1030_bd74(puVar3, param_5, str_var1(extraout_DX_00, uVar4), uVar8, param_5);
        if(puVar3 <= param_3)
        {
            uStack16 = 0x1;
            goto LAB_1028_77e7;
        }
        uStack26 = uStack26 + 0x1;
    } while(true);
}


u16  pass1_1028_81e0(u16 param_1, u16 param_2, u16 param_3)

{
    i16         iVar1;
    void **ppcVar2;
    u8         *puVar3;
    u16         uVar4;
    u16         extraout_DX;
    u32 *puStack24;
    u8          local_14[0x12];

    pass1_1028_dc52((Struct92 *)str_var1(param_3, local_14), 0x1, 0x0, 0x700);
switchD_1028_8225_caseD_0:
    do
    {
        while(true)
        {
            uVar4  = param_1;
            puVar3 = local_14;
            pass1_1028_e4ec(str_var1(param_3, puVar3));
            puStack24 = str_var1(uVar4, puVar3);
            param_1   = uVar4 | puVar3;
            if(param_1 == 0x0)
            {
                return 0x1;
            }
            iVar1 = (puVar3 + 0xc);
            if(iVar1 < 0x35)
                goto code_r0x10288222;
            if(0x61 < iVar1)
                break;
            if((iVar1 < 0x5d) && ((iVar1 != 0x37 && (iVar1 != 0x47))))
                goto switchD_1028_8225_caseD_1;
        }
    } while((iVar1 == 0x6a) || ((0x8 < iVar1 + -0x6a && ((iVar1 == 0x75 || iVar1 + -0x74 < 0x1 || ((0x0 < iVar1 + -0x76 && (iVar1 + -0x78 < 0x2))))))));
    goto switchD_1028_8225_caseD_1;
code_r0x10288222:
    param_2 = SEG_1028;
    switch(iVar1)
    {
    case 0x1:
    case 0x2:
    case 0x3:
    case 0x4:
    case 0x6:
    case 0x7:
    case 0x8:
    case 0xa:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
    switchD_1028_8225_caseD_1:
        if((puVar3 + 0x12) == 0x5)
        {
            ppcVar2 = (*puStack24 + 0x30);
            (**ppcVar2)(param_2);
            param_1 = extraout_DX;
        }
    }
    goto switchD_1028_8225_caseD_0;
}


void  pass1_1028_6356(u32 param_1, i16 param_2, u16 param_3, i16 param_4, u16 param_5)

{
    i16       *pi_var1;
    u16        u_var2;
    u16        uVar3;
    void **ppcVar4;
    i16        iVar5;
    u16        uVar6;
    i16        iVar7;
    u16        uVar8;
    bool       bVar9;
    long       lVar10;
    u8         local_a[0x4];
    u32 u_stack6;

    uVar8 = (param_1 >> 0x10);
    iVar7 = param_1;
    pass1_1008_5784(str_var1(param_5, local_a), *(iVar7 + 0x20));
    while(true)
    {
        do
        {
            lVar10 = pass1_1008_5b12(local_a, param_5);
            uVar6  = (lVar10 >> 0x10);
            iVar5  = lVar10;
            if(lVar10 == 0x0)
            {
                return;
            }
        } while((((iVar5 + 0x8) == 0x0) || ((param_2 != 0x0 && ((iVar5 + 0x8) != param_2)))) || (((iVar5 + 0x8) == 0xf && (param_2 != 0xf))));
        u_var2 = (iVar5 + 0xa);
        if((param_4 == 0x0) && (param_3 < u_var2))
            break;
        bVar9   = param_3 < u_var2;
        param_3 = param_3 - u_var2;
        param_4 = param_4 - bVar9;
        ppcVar4 = ((iVar7 + 0x20) + 0xc);
        (**ppcVar4)(SEG_1008, (iVar7 + 0x20));
        u_stack6 = 0x0;
    }
    uVar3   = (iVar5 + 0xc);
    pi_var1  = (iVar5 + 0xa);
    *pi_var1 = *pi_var1 - param_3;
    pi_var1  = (iVar5 + 0xc);
    *pi_var1 = *pi_var1 - param_3 * (uVar3 / u_var2);
    return;
}


void  pass1_1028_6408(u32 param_1, u32 *param_2, u16 param_3)

{
    void **ppcVar1;
    bool   bVar2;
    u8    *puVar3;
    u16    extraout_DX;
    i16    iVar4;
    i16    iVar5;
    u16    uVar6;
    u16    uVar7;
    u8     local_a[0x8];

    uVar6 = (param_1 >> 0x10);
    iVar4 = param_1;
    pass1_1008_5784(str_var1(param_3, local_a), *(iVar4 + 0x20));
    bVar2 = false;
    while(true)
    {
        puVar3 = local_a;
        pass1_1008_5b12(puVar3, param_3);
        iVar5 = param_2;
        uVar7 = (param_2 >> 0x10);
        if((extraout_DX | puVar3) == 0x0)
            break;
        if(((puVar3 + 0x4) == (iVar5 + 0x4)) && ((puVar3 + 0x6) == (iVar5 + 0x6)))
        {
            if((puVar3 + 0x8) == (iVar5 + 0x8))
            {
                bVar2          = true;
                (puVar3 + 0xa) = (puVar3 + 0xa) + (iVar5 + 0xa);
                (puVar3 + 0xc) = (puVar3 + 0xc) + (iVar5 + 0xc);
            }
        }
    }
    if(bVar2)
    {
        if(param_2 != 0x0)
        {
            ppcVar1 = *param_2;
            (**ppcVar1)(SEG_1008, param_2, 0x1, param_2, param_2);
            return;
        }
    }
    else
    {
        ppcVar1 = ((iVar4 + 0x20) + 0x4);
        (**ppcVar1)(SEG_1008, (iVar4 + 0x20), param_2);
    }
    return;
}


u16  pass1_1028_6744(u16 param_1, u32 param_2, i16 param_3)

{
    u16  uVar1;
    long lVar2;
    u8   local_a[0x8];

    pass1_1008_5784(str_var1(param_1, local_a), *(param_2 + 0x20));
    do
    {
        lVar2 = pass1_1008_5b12(local_a, param_1);
        uVar1 = (lVar2 >> 0x10);
        if(lVar2 == 0x0)
        {
            return 0x0;
        }
    } while((lVar2 + 0x6) != param_3);
    return (lVar2 + 0xa);
}


u16  pass1_1028_678c(u32 param_1, i16 param_2, u16 param_3)

{
    u16  uVar1;
    long lVar2;
    u8   local_a[0x8];

    pass1_1008_5784(str_var1(param_3, local_a), *(param_1 + 0x20));
    do
    {
        lVar2 = pass1_1008_5b12(local_a, param_3);
        uVar1 = (lVar2 >> 0x10);
        if(lVar2 == 0x0)
        {
            return 0x0;
        }
    } while((lVar2 + 0x8) != param_2);
    return (lVar2 + 0xa);
}


// WARNING: Could not reconcile some variable overlaps

u32  pass1_1028_67d4(u32 param_1, u16 param_2)

{
    u16  uVar1;
    long lVar2;
    u32  uStack18;
    u8   local_a[0x8];

    pass1_1008_5784(str_var1(param_2, local_a), *(param_1 + 0x20));
    uStack18 = 0x0;
    while(true)
    {
        lVar2 = pass1_1008_5b12(local_a, param_2);
        if(lVar2 == 0x0)
            break;
        uVar1    = (lVar2 + 0xc);
        uStack18 = str_var1((uStack18 >> 0x10) + CARRY2(uStack18, uVar1), uStack18 + uVar1);
    }
    return uStack18;
}


u16  pass1_1028_6822(u32 param_1, u16 *param_2, u16 param_3)

{
    i16 iVar1;
    u32 u_var2;

    u_var2           = pass1_1028_67d4(param_1, param_3);
    iVar1           = (u_var2 >> 0x10);
    *param_2        = u_var2;
    (param_2 + 0x2) = iVar1;
    if((iVar1 == 0x0) && (*param_2 < 0x64))
    {
        return 0x0;
    }
    return 0x1;
}


void  pass1_1028_6926(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u16         uVar1;
    u32  u_var2;
    void **ppcVar3;
    u16         uVar4;
    u16         uVar5;
    u8         *puVar6;
    u16         extraout_DX;
    u8         *extraout_DX_00;
    u8         *puVar7;
    u16         uVar8;
    u16         uVar9;
    u16         uVar10;
    u32        *puVar11;
    u32 *puStack14;

    uVar9 = (param_1 >> 0x10);
    u_var2 = (param_1 + 0x108);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
    puVar11 = pass1_1008_c6fa(globals->dat_1050_06e0, 0xa);
    puVar6  = (puVar11 >> 0x10);
    uVar4   = puVar11;
    uVar10  = SUB42(SEG_1038, 0x0);
    pass1_1038_4d6e(str_var1(param_3, param_2), puVar11, uVar4, puVar6);
    puStack14 = str_var1(puVar6, uVar4);
    u_var2     = *puStack14;
    uVar8     = u_var2;
    ppcVar3   = (uVar8 + 0x10);
    uVar5     = uVar4;
    (**ppcVar3)(SEG_1038, uVar4, puVar6);
    if((extraout_DX | uVar5) != 0x0)
    {
        ppcVar3 = (uVar8 + 0x4);
        (**ppcVar3)(0x38, uVar4, puVar6, 0x0, 0x0);
        puVar7 = extraout_DX_00;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar5, extraout_DX_00);
        uVar1  = (param_1 + 0x10c);
        uVar10 = SEG_1030;
        pass1_1030_7ddc(str_var1(puVar7, uVar5), CONCAT13((undefined)(uVar1 >> 0xf), (i163)uVar1), 0x1f, uVar1, puVar7, uVar8, (u_var2 >> 0x10), param_4);
    }
    if(puStack14 != 0x0)
    {
        ppcVar3 = *puStack14;
        (**ppcVar3)(uVar10, uVar4, puVar6, 0x1);
    }
    return;
}


u16  pass1_1028_6b2c(u32 param_1, u16 param_2)

{
    pass1_1028_6b40(param_1, param_2);
    return 0x1;
}


void  pass1_1028_6b40(u32 param_1, u16 param_2)

{
    u32  uVar1;
    void **ppcVar2;
    u8         *puVar3;
    u16         in_DX;
    u16         uVar4;
    u16         uVar5;
    u16         uVar6;
    u16        *puVar7;
    u8          local_36[0xe];
    u32 *puStack40;
    u16         uStack38;
    u16         uStack36;
    u16         uStack34;
    u16         uStack32;
    u16         uStack30;
    u16         uStack28;
    u16         uStack26;
    u32  local_18;
    u16         uStack20;
    u32         uStack18;
    u32  uStack14;
    u32 *puStack10;
    u8          local_6[0x2];
    i16         local_4;

    puVar3 = local_6;
    pass1_1028_6daa(param_1,
                    str_var1(param_2, puVar3),
                    str_var1(param_2, &local_4), puVar3, in_DX, param_2);
    uVar6 = (param_1 >> 0x10);
    uVar5 = param_1;
    uVar1 = (uVar5 + 0x10c);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    puStack10 = str_var1(in_DX, puVar3);
    ppcVar2   = (*puStack10 + 0x24);
    (**ppcVar2)();
    uStack14  = pass1_1028_b58e(puStack10);
    uStack18  = pass1_1028_bb24(puStack10);
    local_18  = (uStack14 + 0xc);
    uStack20  = (uStack14 + 0x10);
    puStack40 = &local_18;
    uStack26  = local_18;
    uStack28  = (local_18 >> 0x10);
    uStack32  = local_18 - 0x1;
    if(uStack32 < 0x0)
    {
        uStack32 = 0x0;
    }
    uVar4    = local_4 - 0x1;
    uStack34 = local_18 + 0x1;
    if(uVar4 < (local_18 + 0x1))
    {
        uStack34 = uVar4;
    }
    uStack36 = uStack28 - 0x1;
    if(uStack36 < 0x0)
    {
        uStack36 = 0x0;
    }
    uStack38 = uStack28 + 0x1;
    if(uVar4 < (uStack28 + 0x1))
    {
        uStack38 = uVar4;
    }
    uStack30 = uStack20;
    puVar7   = pass1_1008_3e54(str_var1(param_2, local_36), uStack20, uStack36, uStack32);
    pass1_1028_6d24(uVar5, uVar6, str_var1(param_2, local_36), uStack18, (puVar7 >> 0x10), param_2);
    puVar7 = pass1_1008_3e54(str_var1(param_2, local_36), uStack30, uStack36, uStack26);
    pass1_1028_6d24(uVar5, uVar6, str_var1(param_2, local_36), uStack18, (puVar7 >> 0x10), param_2);
    puVar7 = pass1_1008_3e54(str_var1(param_2, local_36), uStack30, uStack36, uStack34);
    pass1_1028_6d24(uVar5, uVar6, str_var1(param_2, local_36), uStack18, (puVar7 >> 0x10), param_2);
    puVar7 = pass1_1008_3e54(str_var1(param_2, local_36), uStack30, uStack28, uStack32);
    pass1_1028_6d24(uVar5, uVar6, str_var1(param_2, local_36), uStack18, (puVar7 >> 0x10), param_2);
    puVar7 = pass1_1008_3e54(str_var1(param_2, local_36), uStack30, uStack28, uStack34);
    pass1_1028_6d24(uVar5, uVar6, str_var1(param_2, local_36), uStack18, (puVar7 >> 0x10), param_2);
    puVar7 = pass1_1008_3e54(str_var1(param_2, local_36), uStack30, uStack38, uStack32);
    pass1_1028_6d24(uVar5, uVar6, str_var1(param_2, local_36), uStack18, (puVar7 >> 0x10), param_2);
    puVar7 = pass1_1008_3e54(str_var1(param_2, local_36), uStack30, uStack38, uStack26);
    pass1_1028_6d24(uVar5, uVar6, str_var1(param_2, local_36), uStack18, (puVar7 >> 0x10), param_2);
    puVar7 = pass1_1008_3e54(str_var1(param_2, local_36), uStack30, uStack38, uStack34);
    pass1_1028_6d24(uVar5, uVar6, str_var1(param_2, local_36), uStack18, (puVar7 >> 0x10), param_2);
    return;
}


u16  pass1_1028_6e96(u16 param_1, u16 param_2)

{
    i16         iVar1;
    void **ppcVar2;
    u8         *puVar3;
    u16         uVar4;
    u16         extraout_DX;
    u32 *puStack24;
    u8          local_14[0x12];

    pass1_1028_dc52((Struct92 *)str_var1(param_2, local_14), 0x1, 0x0, 0x700);
    while(true)
    {
        puVar3 = local_14;
        pass1_1028_e4ec(str_var1(param_2, puVar3));
        puStack24 = str_var1(param_1, puVar3);
        uVar4     = param_1 | puVar3;
        if(uVar4 == 0x0)
            break;
        iVar1   = (puVar3 + 0x12);
        param_1 = uVar4;
        if(((0x0 < iVar1) && (!SBORROW2(iVar1, 0x1))) && (iVar1 + -0x1 < 0x4))
        {
            ppcVar2 = (*puStack24 + 0x38);
            (**ppcVar2)();
            param_1 = extraout_DX;
        }
    }
    return 0x1;
}


void  pass1_1028_740c(u16 param_1, u16 param_2, i16 param_3, u32 param_4)

{
    void **ppcVar1;
    u32  u_var2;
    u16         uVar3;
    u16         uVar4;
    u8         *puVar5;
    u16         extraout_DX;
    u32        *puVar6;
    long        lStack14;
    u32 *puStack10;

    puVar6 = pass1_1008_c6fa(globals->dat_1050_06e0, param_3);
    puVar5 = (puVar6 >> 0x10);
    uVar3  = puVar6;
    pass1_1038_4d6e(param_4, puVar6, uVar3, puVar5);
    puStack10 = str_var1(puVar5, uVar3);
    u_var2     = *puStack10;
    ppcVar1   = u_var2 + 0x8;
    uVar4     = uVar3;
    (**ppcVar1)(SEG_1038, uVar3, puVar5);
    lStack14 = str_var1(extraout_DX, uVar4);
    if(puStack10 != 0x0)
    {
        ppcVar1 = u_var2;
        (**ppcVar1)(SEG_1038, uVar3, puVar5, 0x1);
    }
    if(lStack14 != 0x0)
    {
        return;
    }
    return;
}


u16 * pass1_1028_50fa(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x5280;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_530a(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x535e;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_53e8(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x54bc;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


void  pass1_1028_5412(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    void **ppcVar1;
    u16    u_var2;
    u32    uVar3;
    i16    iVar4;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x12) != 0x6)
    {
        return;
    }
    uVar3 = pass1_1028_b4f2(param_1);
    if((uVar3 + 0x200) != 0x8000002)
    {
        if((param_1 + 0x1c) == 0x8000002)
        {
            iVar4 = 0x6;
            goto code_r0x1028548e;
        }
        ppcVar1 = (*param_1 + 0x64);
        iVar4   = (**ppcVar1)(param_4, param_1);
        if(iVar4 == 0x0)
        {
            return;
        }
        pass1_1028_c0f0(param_1, 0x1, iVar4, param_2, param_3, param_5);
        if(iVar4 == 0x0)
        {
            iVar4 = 0x6;
            goto code_r0x1028548e;
        }
        pass1_1028_c952(param_1, param_2, param_3, param_5);
        pass1_1028_c00a(param_1, 0x1, iVar4, param_5);
    }
    iVar4 = 0x5;
code_r0x1028548e:
    pass1_1028_bdac(param_1, iVar4, param_4);
    return;
}


u16 * pass1_1028_5546(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u8 *param_5)

{
    pass1_1028_00cc(param_1, param_2, param_3, param_4, param_5);
    param_1 =  0x55c8;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


void  pass1_1028_5570(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    u16 uVar1;
    u32 u_var2;
    u16 uVar3;
    u16 uVar4;
    i16 iVar5;

    pass1_1028_0550(param_1, param_2, param_3, param_4, param_5);
    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x12) == 0x5)
    {
        uVar4 = 0x0;
        iVar5 = 0x4;
        uVar3 = 0x1;
        u_var2 = pass1_1028_b58e(param_1 & 0xffff | uVar1 << 0x10);
        pass1_1030_7c50(u_var2, str_var1(uVar4, uVar3), iVar5, u_var2, (u_var2 >> 0x10));
    }
    return;
}


u16 * pass1_1028_5652(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x56ac;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_57c8(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x581c;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_58a6(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x58fe;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_5988(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  s_mineToSmelter__no_mines_1050_59df + 0x1;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_5a6a(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  s_thisLo_1050_5bec;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_5c76(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5)

{
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  s_static_1050_5d8b + 0x3;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}
