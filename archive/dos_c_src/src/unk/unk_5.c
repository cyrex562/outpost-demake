
#include "unk_5.h"

#include "address_tables/function_tables.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_20.h"
#include "struct_ops/struct_ops_2.h"
#include "struct_ops_5.h"
#include "structs/structs_45.h"
#include "structs_30x.h"
#include "unk_6.h"
#include "utils.h"

void  bad_1030_8cd2(void)

{
    return;
}


void  pass1_1030_8d08(u32 param_1, u16 param_2)

{
    i16       *pi_var1;
    u32 u_var2;
    u16        uVar3;
    u16        uVar4;
    u32        uVar5;
    u32        uStack16;
    i16        iStack4;

    iStack4 = 0x0;
    while(true)
    {
        uVar4  = (param_1 >> 0x10);
        pi_var1 = (param_1 + 0x1e);
        if(*pi_var1 == iStack4 || *pi_var1 < iStack4)
            break;
        uVar3                 = iStack4 * 0x6;
        u_var2                 = (param_1 + 0x1a);
        (u_var2 + uVar3 + 0x4) = 0x0;
        pass1_1028_e2ac(globals->_PTR_LOOP_1050_65e2, 0x500);
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar3, param_2);
        uStack16 = str_var1(param_2, uVar3);
        uVar5    = pass1_1028_e2e0(globals->_PTR_LOOP_1050_65e2, param_2, 0x7);
        param_2  = (uVar5 >> 0x10);
        pass1_1030_7e5a(uStack16, uVar5 & 0xffff | param_2 << 0x10, param_2);
        iStack4 = iStack4 + 0x1;
    }
    return;
}


void  pass1_1030_8d9e(u32 param_1, u16 param_2)

{
    u8 local_c[0x2];
    u8 local_a[0x2];
    u8 local_8[0x6];

    pass1_1008_3e38(str_var1(param_2, local_8));
    pass1_1008_6d64((param_1 & 0xffff0000 | (param_1 + 0x28)),
                    str_var1(param_2, local_8));
    pass1_1008_3e94(
      str_var1(param_2, local_8), str_var1(param_2, local_c), str_var1(param_2, local_a));
    return;
}


Struct18 * pass1_1030_8e12(Struct18 *param_1, u8 param_2)

{
    pass1_1030_8a2c(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1030_8f04(u16 param_1, u16 param_2, u32 param_3, u32 param_4, u16 param_5)

{
    u16 uVar1;
    u16 u_var2;
    u16 uVar3;
    u16 uVar4;
    u32 uVar5;
    u16 uVar6;
    i16 iStack8;
    u32 u_stack6;

    pass1_1038_53ba(param_3, 0x1);
    if((((param_5 != 0x0) || (0x1 < param_4)) && ((pass1_1038_53ba(param_3, 0x2), param_5 != 0x0 || (0x1 < param_4)))) && ((pass1_1038_53ba(param_3, 0x3), param_5 != 0x0 || (0x1 < param_4))))
    {
        pass1_1038_53ba(param_3, 0x4);
        uVar5 = param_5;
        if((param_5 != 0x0) || (0x1 < param_4))
        {
            empty_1038_540a();
            u_stack6 = param_4 & 0xffff | uVar5 << 0x10;
            iStack8 = 0x0;
            do
            {
                uVar3 = uVar5;
                u_var2 = param_4;
                if(0x0 < (iStack8 * 0x2 + globals->_PTR_LOOP_1050_580e))
                {
                    empty_1038_540a();
                    uVar6   = (globals->_PTR_LOOP_1050_580e >> 0x10);
                    uVar1   = (iStack8 * 0x2 + globals->_PTR_LOOP_1050_580e);
                    param_4 = uVar1;
                    uVar4   = uVar1 >> 0xf;
                    uVar5   = uVar4;
                    if((uVar3 <= uVar4) && ((uVar3 < uVar4 || (u_var2 < uVar1))))
                    {
                        if(0x1c < iStack8)
                        {
                            return;
                        }
                        u_var2   = (iStack8 * 0x2 + globals->_PTR_LOOP_1050_580e);
                        param_4 = SEXT24(u_var2);
                        uVar5   = param_4 >> 0x10;
                        if((long)u_stack6 < (long)param_4)
                        {
                            return;
                        }
                        u_stack6 = str_var1(((u_stack6 >> 0x10) - (u_var2 >> 0xf)) - (u_stack6 < u_var2), u_stack6 - u_var2);
                    }
                }
                iStack8 = iStack8 + 0x1;
                if(0x24 < iStack8)
                {
                    return;
                }
            } while(true);
        }
    }
    return;
}


u32  pass1_1030_7c28(u32 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    u16        uVar1;
    u32 u_var2;

    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x22) == 0x0)
    {
        return 0x0;
    }
    u_var2 = (param_1 + 0x22);
    u_var2 = pass1_1020_bae6(u_var2, str_var1(param_2, (u_var2 >> 0x10)), param_3, param_4, param_5);
    return u_var2;
}


void  pass1_1030_7c50(Struct305 *param_1, long param_2, i16 param_3, u16 param_4, u8 *param_5)

{
    i16         *pi_var1;
    void **ppcVar2;
    u16          uVar3;
    u32          uVar4;
    u16          uVar5;
    u8          *puVar6;
    u8          *extraout_DX;
    u16          extraout_DX_00;
    u16          uVar7;
    u8          *extraout_DX_01;
    Struct305 *iVar8;
    u16          uVar8;
    u32          uVar9;
    u32  *puVar10;
    u32  *puStack18;

    uVar8  = (param_1 >> 0x10);
    iVar8  = (Struct305 *)param_1;
    puVar6 = param_5;
    if(iVar8->field_0x1e == 0x0)
    {
        mem_op_1000_179c(0x18, param_5, 0);
        puVar6 = (param_5 | param_4);
        if(puVar6 == 0x0)
        {
            iVar8->field_0x1e = 0x0;
        }
        else
        {
            struct_op_1030_1cd8(str_var1(param_5, param_4), 0x5, 0x5);
            &iVar8->field_0x1e         = param_4;
            (&iVar8->field_0x1e + 0x2) = extraout_DX;
            puVar6                     = extraout_DX;
        }
    }
    if(param_3 == 0x4)
    {
        pi_var1  = &iVar8->field_0x34;
        *pi_var1 = *pi_var1 + param_2;
    }
    while(param_2 != 0x0)
    {
        uVar9   = pass1_1028_e2e0(globals->_PTR_LOOP_1050_65e2, puVar6, 0x6);
        uVar3   = uVar9;
        uVar4   = uVar9 >> 0x10;
        puVar10 = iVar8->field_0x1e;
        ppcVar2 = (*iVar8->field_0x1e + 0xc);
        uVar5   = uVar3;
        (**ppcVar2)();
        uVar7 = extraout_DX_00;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar3, uVar4);
        puStack18 = str_var1(uVar7, uVar5);
        ppcVar2   = (*puStack18 + 0x14);
        (**ppcVar2)(SEG_1028, uVar5, uVar7, param_1, puVar10, uVar9);
        puVar6  = extraout_DX_01;
        param_2 = param_2 + -0x1;
    }
    return;
}


BOOL16  pass1_1030_7ea0(u32 param_1)

{
    u32 uVar1;
    u16        u_var2;
    BOOL16     BVar3;

    u_var2 = pass1_1030_6fa0(param_1);
    BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0xb);
    if(BVar3 != 0x0)
    {
        uVar1 = (param_1 + 0x1a);
        if((uVar1 + 0x12) == 0x5)
        {
            return 0x1;
        }
        BVar3 = 0x0;
    }
    return BVar3;
}


u32  pass1_1030_8086(u32 param_1)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    return str_var1((param_1 + 0x18), (param_1 + 0x16)) & 0xffffff;
}


u16 * pass1_1030_80ee(u16 *param_1, u8 param_2, u16 param_3)

{
    pass1_1030_68dc(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        pass1_1000_093a(param_1, (param_1 >> 0x10), SEG_1000);
    }
    return param_1;
}


void  pass1_1030_82f0(u16 param_1, u32 param_2, u32 param_3)

{
    pass1_1028_d078(param_1, *(param_2 + 0x4), param_3);
    return;
}


void  pass1_1030_8308(u16 param_1, u16 param_2, u16 *param_3, u16 *param_4, u32 param_5, u16 param_6, u16 param_7)

{
    pass1_1028_e198(globals->_PTR_LOOP_1050_65e2, param_3, param_4, param_5, param_6, param_7);
    return;
}


u32  pass1_1030_8326(void)

{
    return str_var1((globals->_PTR_LOOP_1050_65e2 + 0x2), *_PTR_LOOP_1050_65e2);
}


void  pass1_1030_8334(void)

{
    *_PTR_LOOP_1050_65e2 = 0x0;
    return;
}


void  pass1_1030_8344(u16 param_1, u16 param_2, u32 param_3)

{
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_3, (param_3 >> 0x10));
    return;
}


void  pass1_1030_8372(u32 **param_1, u32 param_2, u32 *param_3)

{
    pass1_1028_d52c(*param_1, param_2, param_3);
    return;
}


void vsprintf_op_1030_840a(u32 param_1, LPSTR param_2, WORD *param_3, u16 param_4)

{
    LPCSTR pCVar1;
    u16    unaff_ES;
    u8     in_AF;
    WORD  *args;

    if(globals->PTR_LOOP_1050_574c != 0x0)
    {
        args = param_3;
        if(globals->PTR_LOOP_1050_5750 == 0x0)
        {
            param_2 = SEG_1000;
            pCVar1  = &stack0x0008;
            pass1_1000_2b3c(s_simres_out_1050_5758, SEG_1050, 0x5756, SEG_1050, param_4, &stack0xfffe);
            globals->_PTR_LOOP_1050_5752 = str_var1(param_4, pCVar1);
            globals->PTR_LOOP_1050_5750  = (&PTR_LOOP_1050_0000 + 0x1);
        }
        wvsprintf16(param_2, &stack0x0008, args);
        pass1_1000_2b5c(globals->_PTR_LOOP_1050_5752, (globals->_PTR_LOOP_1050_5752 >> 0x10), 0x5763, SEG_1050, unaff_ES, &stack0xfffe, SEG_1000, param_3);
        pass1_1000_2f48(globals->_PTR_LOOP_1050_5752, &stack0xfffe, unaff_ES, SEG_1000, param_3, in_AF);
    }
    return;
}


void  pass1_1030_861a(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5, u16 param_6)

{
    u32 *pu_stack6;

    pass1_1030_8854(param_1, param_2, param_3, param_6);
    pu_stack6 = str_var1(param_5, param_4);
    if((param_5 | param_4) == 0x0)
    {
        (param_1 + 0xa) = 0x0;
    }
    else
    {
        (param_1 + 0xa) = *pu_stack6;
    }
    return;
}


void  pass1_1030_8660(u32 param_1, u32 *param_2, u16 param_3, u16 param_4, u16 param_5, u16 param_6, i16 param_7)

{
    u16  uVar1;
    u16  u_var2;
    u16  uVar3;
    u32 *pu_stack6;

    u_var2 = param_1;
    uVar3 = (param_1 >> 0x10);
    pass1_1030_8854(u_var2, uVar3, param_3, param_6);
    pu_stack6 = str_var1(param_5, param_4);
    uVar1    = param_5 | param_4;
    if(uVar1 == 0x0)
    {
        pass1_1030_8854(u_var2, uVar3, 0x0, param_6);
        pu_stack6 = str_var1(uVar1, param_4);
        uVar1    = uVar1 | param_4;
        if(uVar1 == 0x0)
        {
            pass1_1030_878c((long *)param_1, param_7, param_6);
            pass1_1030_8854(u_var2, uVar3, 0x0, param_6);
            pu_stack6 = str_var1(uVar1, param_4);
            if((uVar1 | param_4) == 0x0)
            {
                return;
            }
        }
        (pu_stack6 + 0x4) = param_3;
        *pu_stack6        = *param_2;
        pass1_1030_8834((u16 *)param_1, param_7, param_6);
    }
    else
    {
        *pu_stack6 = *param_2;
    }
    return;
}


void  pass1_1030_871e(Struct681 *param_1, u32 *param_2, u16 param_3, i16 param_4, u16 param_5)

{
    i16         *pi_var1;
    Struct681 *iVar2;
    u16          u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar2 = (Struct681 *)param_1;
    if (param_1->field_0x0 == 0x0) {
        pass1_1030_878c((long *) (param_1 & 0xffff | u_var2 << 0x10), param_4, param_5);
    }
    pi_var1                                    = &iVar2->field_0xe;
    *pi_var1                                   = *pi_var1 + 0x1;
    (*param_1 + iVar2->field_0xe * 0x6 + 0x4) = param_3;
    *(iVar2->field_0xe * 0x6 + *param_1)      = *param_2;
    return;
}


void  pass1_1030_877c(u16 *param_1, i16 param_2, u16 param_3)

{
    pass1_1030_8834(param_1, param_2, param_3);
    return;
}


void  pass1_1030_8834(u16 *param_1, i16 param_2, u16 param_3)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    uVar1 = (param_1 + 0x2);
    pass1_1000_4aea(*param_1, uVar1, (uVar1 >> 0x10), 0x6, 0x888e, &stack0xfffe, param_2, u_var2, SEG_1000, param_3);
    return;
}


void  pass1_1030_8854(u16 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32 uVar1;
    u32 local_c;
    u16        uStack8;

    uStack8 = param_3;
    local_c = 0x0;
    uVar1   = (param_1 + 0x2);
    pass1_1000_49c6(&local_c, param_4, *_param_1, uVar1, (uVar1 >> 0x10), 0x6, 0x888e, &stack0xfffe);
    return;
}


u16 pass1_1030_888e(u32 param_1, u32 param_2)

{
    i16 *pi_var1;
    i16  iVar2;
    u16  uVar3;
    u16  uVar4;

    uVar3  = (param_1 >> 0x10);
    iVar2  = (param_1 + 0x4);
    uVar4  = (param_2 >> 0x10);
    pi_var1 = (param_2 + 0x4);
    if(*pi_var1 != iVar2 && iVar2 <= *pi_var1)
    {
        return 0xffff;
    }
    if((param_2 + 0x4) < (param_1 + 0x4))
    {
        return 0x1;
    }
    return 0x0;
}


void  pass1_1030_88ce(u16 *param_1, u32 param_2, u32 param_3, u16 param_4)

{
    u8          *puVar1;
    u8          *pu_var2;
    Struct354 *iVar4;
    u16          uVar3;
    u32          uVar4;
    u16         *puStack38;
    i16          iStack34;
    u8           local_20[0x2];
    i16          local_1e;
    i16 local_1c;
    u8 local_1a[0x6];
    u8 local_14[0x6];
    u32 uStack14;
    u32 uStack10;
    i16 iStack6;
    u16 uStack4;

    uVar3 = (param_1 >> 0x10);
    iVar4 = (Struct354 *) param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar4->fld2_segment = SEG_1008;
    pass1_1030_84ae(param_1 & 0xffff0000 | &iVar4->field_0x4);
    iVar4->field_0x24 = param_3;
    puStack38 = (param_1 & 0xffff0000 | &iVar4->field_0x28);
    pass1_1008_6c90((param_1 & 0xffff0000 | &iVar4->field_0x28));
    &iVar4->field_0x34 = 0x0;
    param_1->field_0x0 = addr_table_1030_8e38;//0x8e38;
    iVar4->fld2_segment = SEG_1030;
    struct_1030_8544((param_1 & 0xffff0000 | &iVar4->field_0x4), param_2);
    uVar4 = pass1_1008_4772(iVar4->field_0x12);
    uStack4 = (uVar4 >> 0x10);
    iStack6 = uVar4;
    uStack10 = (iStack6 + 0x4);
    uStack14 = (iStack6 + 0x8);
    pass1_1008_3e54(str_var1(param_4, local_14), 0x0, uStack14 - 0x1, uStack10 - 0x1);
    pass1_1008_3e54(str_var1(param_4, local_1a), 0x0, 0x0, 0x0);
    pass1_1008_6d18(puStack38, str_var1(param_4, local_14), str_var1(param_4, local_1a));
    pass1_1008_6d64(puStack38, str_var1(param_4, local_1a));
    pass1_1008_3eb4(str_var1(param_4, local_1a),
                    str_var1(param_4, local_20),
                    str_var1(param_4, &local_1e),
                    str_var1(param_4, &local_1c));
    puVar1            = (((long)local_1e * (long)local_1c) >> 0x10);
    uVar4             = (long)local_1e * (long)local_1c & 0xffff;
    iVar4->field_0x34 = uVar4;
    iVar4->field_0x36 = puVar1;
    for(iStack34 = 0x0; iStack34 < 0x5; iStack34 = iStack34 + 0x1)
    {
        mem_op_1000_179c(0x10, puVar1, 0);
        pu_var2 = (puVar1 | uVar4);
        if(pu_var2 == 0x0)
        {
            (&iVar4[0x1].fld0_addr_table + iStack34 * 0x4) = 0x0;
        }
        else
        {
            pass1_1030_85be((long *)(uVar4 & 0xffff | ZEXT24(puVar1) << 0x10), 0x19, 0x64, uVar3, param_4);
            (&iVar4[0x1].fld0_addr_table + iStack34 * 0x4) = uVar4;
            (&iVar4[0x1].fld2_segment)[iStack34 * 0x2]  = pu_var2;
        }
        puVar1 = pu_var2;
    }
    return;
}


void  pass1_1030_6b86(u32 param_1, u16 param_2, u16 param_3)

{
    void **ppcVar1;
    u32    u_var2;
    u16    extraout_DX;
    u16    uVar3;
    u16    extraout_DX_00;
    i16    iVar4;
    u16    uVar5;
    u32    uStack12;
    u32    uStack8;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x1e) == 0x0)
    {
        param_2 = 0x0;
        uVar3   = 0x0;
    }
    else
    {
        ppcVar1 = ((iVar4 + 0x1e) + 0x10);
        (**ppcVar1)();
        uVar3 = extraout_DX;
    }
    uStack8 = str_var1(uVar3, param_2);
    for(uStack12 = 0x0; uStack12 < uStack8; uStack12 = uStack12 + 0x1)
    {
        ppcVar1 = ((iVar4 + 0x1e) + 0x4);
        u_var2   = uStack8;
        (**ppcVar1)(param_3, (iVar4 + 0x1e));
        if((extraout_DX_00 | u_var2) != 0x0)
        {
            param_3 = SUB42(SEG_1028, 0x0);
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, extraout_DX_00);
        }
    }
    return;
}


void  pass1_1030_6c1a(u32 param_1, i16 param_2)

{
    i16 *pi_var1;
    i16  iVar2;
    i16  iVar3;
    u16  uVar4;

    uVar4          = (param_1 >> 0x10);
    iVar3          = param_1;
    iVar2          = (iVar3 + 0x32);
    (iVar3 + 0x32) = param_2;
    pi_var1         = (iVar3 + 0x34);
    *pi_var1        = *pi_var1 + (param_2 - iVar2);
    iVar2          = (iVar3 + 0x32);
    if(iVar2 < 0x0)
    {
        iVar2 = 0x0;
    }
    (iVar3 + 0x32) = iVar2;
    return;
}


void  pass1_1030_6c4c(u32 param_1, i16 param_2)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = (param_1 + 0x32);
    if(param_2 < iVar1)
    {
        iVar1 = param_2;
    }
    (param_1 + 0x34) = iVar1;
    return;
}


u32  pass1_1030_6d4e(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u16 uVar1;
    u16 u_stack6;
    u16 uStack4;

    u_stack6 = 0x0;
    uStack4 = 0x0;
    uVar1   = (param_1 >> 0x10);
    if((param_1 + 0x36) != 0x0)
    {
        pass1_1010_9092(*(param_1 + 0x36), param_2, param_4);
        u_stack6 = param_2;
        uStack4 = param_3;
    }
    return str_var1(uStack4, u_stack6);
}


void  pass1_1030_6d80(Struct299 *param_1, u32 param_2)

{
    u32  *puVar1;
    u16          u_var2;
    void **ppcVar3;
    Struct299 *iVar4;
    u16          uVar4;

    uVar4  = (param_1 >> 0x10);
    iVar4  = (Struct299 *)param_1;
    puVar1 = &iVar4->field_0x36;
    u_var2  = (&iVar4->field_0x36 + 0x2);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    iVar4->field_0x36 = param_2;
    return;
}


void  pass1_1030_6ddc(u32 param_1)

{
    u16    uVar1;
    BOOL16 BVar2;

    uVar1 = pass1_1030_6fa0(param_1);
    BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x1e);
    if(BVar2 != 0x0)
    {
        pass1_1030_d0c6(*(param_1 + 0x1a));
        return;
    }
    return;
}


void  pass1_1030_6e14(u32 param_1)

{
    u32 uVar1;
    u16        u_var2;
    BOOL16     BVar3;

    u_var2 = pass1_1030_6fa0(param_1);
    BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x1e);
    if(BVar3 != 0x0)
    {
        uVar1 = (param_1 + 0x1a);
        pass1_1030_d102(uVar1, (uVar1 >> 0x10));
        return;
    }
    return;
}


void  pass1_1030_6e9c(Struct301 *param_1, long param_2, i16 param_3)

{
    void **ppcVar1;
    u16          u_var2;
    u16          uVar3;
    u32          uVar4;
    u16          extraout_DX;
    u16          extraout_DX_00;
    u16          uVar5;
    Struct301 *iVar6;
    u16          uVar6;
    u16          unaff_SS;
    u32          uStack10;
    u32          u_stack6;

    uVar6 = (param_1 >> 0x10);
    iVar6 = (Struct301 *)param_1;
    u_var2 = (&iVar6->field_0x1e + 0x2) | &iVar6->field_0x1e;
    if(u_var2 != 0x0)
    {
        ppcVar1 = (*iVar6->field_0x1e + 0x10);
        (**ppcVar1)();
        u_stack6 = str_var1(extraout_DX, u_var2);
        for(uStack10 = 0x0; uStack10 < u_stack6; uStack10 = uStack10 + 0x1)
        {
            ppcVar1 = (*iVar6->field_0x1e + 0x4);
            uVar4   = u_stack6;
            (**ppcVar1)();
            u_var2 = uVar4;
            uVar5 = extraout_DX_00 | u_var2;
            if(uVar5 != 0x0)
            {
                uVar3 = u_var2;
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, extraout_DX_00);
                if((uVar3 + 0xc) == param_3)
                {
                    param_2 = param_2 + -0x1;
                    pass1_1028_e332(globals->_PTR_LOOP_1050_65e2, u_var2, extraout_DX_00, unaff_SS);
                    ppcVar1 = (*iVar6->field_0x1e + 0x8);
                    (**ppcVar1)(SEG_1028, iVar6->field_0x1e, 0x0, uStack10);
                }
                if((param_2 | param_2) == 0x0)
                {
                    return;
                }
            }
        }
    }
    return;
}


void  pass1_1030_6f5a(u32 param_1, u16 param_2)

{
    u16    uVar1;
    BOOL16 BVar2;

    uVar1 = pass1_1030_6fa0(param_1);
    BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x4);
    if(BVar2 != 0x0)
    {
        pass1_1028_6302(*(param_1 + 0x1a), param_2);
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1030_73ee(Struct294 *param_1, u32 param_2, u16 param_3)

{
    Struct294 *iVar1;
    u16          uVar1;

    uVar1             = (param_1 >> 0x10);
    iVar1             = (Struct294 *)param_1;
    iVar1->field_0x2a = param_2;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_2, (param_2 >> 0x10));
    iVar1->field_0x2e = param_2;
    iVar1->field_0x30 = param_3;
    return;
}


u32  pass1_1030_5b5c(i16 param_1, u16 param_2)

{
    return str_var1(param_2, param_1 + 0x14);
}


void  pass1_1030_5bec(u32 param_1)

{
    globals->_PTR_LOOP_1050_5736 = param_1;
    pass1_1000_54a0(param_1, 0x0, 0x24);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1030_5c0e(void)

{
    globals->_PTR_LOOP_1050_5736 = 0x0;
    return;
}

u16 * pass1_1030_5d0a(u16 *param_1) {
    u16 uVar1;

    struct_1030_17ce(param_1, 0x1, 0x4);
    uVar1 = (param_1 >> 0x10);
    (param_1 + 0x10) = 0x0;
    param_1->field_0x0 = addr_table_1030_613e;//0x613e;
    param_1->field_0x2 = SEG_1030;
    return param_1;
}


u16 * pass1_1030_5d3c(u16 *param_1, u32 param_2, u16 param_3, u8 *param_4) {
    u16 uVar1;

    pass1_1030_183c(param_1, 0x1, 0x4, 0x1000000, param_2, param_3, param_4);
    uVar1 = (param_1 >> 0x10);
    (param_1 + 0x10) = 0x0;
    param_1->field_0x0 = addr_table_1030_613e;//0x613e;
    param_1->field_0x2 = SEG_1030;
    return param_1;
}


void  pass1_1030_5d78(u16 *param_1) {
    u16 uVar1;
    Struct18 *p_var2;
    i16 iVar3;
    u16 uVar4;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    param_1->field_0x0 = addr_table_1030_613e;//0x613e;
    (iVar3 + 0x2) = SEG_1030;
    p_var2 = (iVar3 + 0x10);
    uVar1 = (iVar3 + 0x12);
    if ((uVar1 | p_var2) != 0x0) {
        pass1_1030_8480((Struct18 **) (p_var2 & 0xffff | uVar1 << 0x10));
        fn_ptr_1000_17ce(p_var2, SEG_1000);
    }
    pass1_1030_18b2(param_1);
}


void  pass1_1030_5fe2(u32 param_1, u32 param_2)

{
    *(param_1 + 0x10) = param_2;
}


void  pass1_1030_61b0(u16 *param_1)

{
    u16         uVar1;
    u32 *pu_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    uVar1 = (iVar4 + 0x2);
    if((uVar1 | *param_1) != 0x0)
    {
        ppcVar3 = *param_1;
        (**ppcVar3)();
    }
    pu_var2 = (iVar4 + 0x4);
    uVar1  = (iVar4 + 0x6);
    if((uVar1 | pu_var2) != 0x0)
    {
        ppcVar3 = *pu_var2;
        (**ppcVar3)();
    }
    globals->_PTR_LOOP_1050_5740 = 0x0;
    return;
}


void  pass1_1030_61fe(u32 param_1, u32 param_2, u32 param_3, long param_4, u16 param_5, u16 param_6, u16 param_7)

{
    pass1_1030_677a(param_1, param_4, param_7);
    pass1_1030_8aa0(str_var1(param_6, param_5), param_2, param_3, param_6, param_7);
    return;
}


void  pass1_1030_627e(u16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 *param_5, long param_6)

{
    u32 local_12[0x2];
    u32        uStack10;
    u32 u_stack6;

    u_stack6 = 0x0;
    pass1_1030_677a(param_4, param_6, param_1);
    uStack10 = str_var1(param_3, param_2);
    if((param_3 | param_2) != 0x0)
    {
        pass1_1030_8b00(uStack10, param_5, str_var1(param_1, local_12), param_1);
    }
    return;
}


void  pass1_1030_64ce(u16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 *param_5, long param_6, u32 *param_7)

{
    u32 *puVar1;
    u16  u_var2;
    u32  local_e;
    u32  uStack10;
    u32  u_stack6;

    u_stack6 = 0x0;
    pass1_1030_677a(param_4, param_6, param_1);
    uStack10 = str_var1(param_3, param_2);
    u_var2    = param_3 | param_2;
    if(u_var2 != 0x0)
    {
        puVar1 = &local_e;
        pass1_1030_8b00(uStack10, param_5, str_var1(param_1, puVar1), param_1);
        u_stack6 = *puVar1;
    }
    *param_7 = u_stack6;
    return;
}


void  pass1_1030_6522(u32 *param_1, u32 param_2, u32 param_3, u16 param_4)

{
    void **ppcVar1;
    u32 *pu_var2;
    u16         uVar3;
    u8         *extraout_DX;
    u8         *puVar4;
    u16         extraout_DX_00;
    u16         extraout_DX_01;
    u16         uVar5;
    u8          local_64[0xc];
    u16         uStack88;
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
    if((puVar4 | pu_var2) != 0x0)
    {
        ppcVar1 = *pu_var2;
        (**ppcVar1)();
        puVar4 = extraout_DX;
    }
    mem_op_1000_179c(0x18, puVar4, 0);
    puStack54 = pu_var2;
    puStack52 = puVar4;
    if((puVar4 | pu_var2) == 0x0)
    {
        pu_var2 = 0x0;
        uVar3  = 0x0;
    }
    else
    {
        struct_op_1030_1cd8(str_var1(puVar4, pu_var2), 0x5, 0x5);
        uVar3 = extraout_DX_00;
    }
    param_1 = pu_var2;
    param_1->field_0x2 = uVar3;
    pass1_1030_677a(param_1, param_3, param_4);
    u_stack6 = str_var1(uVar3, pu_var2);
    if((uVar3 | pu_var2) != 0x0)
    {
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
        if(local_24 == local_1e)
        {
            iStack44 = 0x0;
            for(uStack46 = local_1c; uVar3 = local_28 + local_1c, uStack46 < uVar3; uStack46 = uStack46 + 0x1)
            {
                for(uStack56 = local_1a; uStack56 < (local_26 + local_1a); uStack56 = uStack56 + 0x1)
                {
                    uStack88 = local_1e;
                    pass1_1008_3e54(CONCAT13((param_4 >> 0x8), CONCAT12(param_4, local_64)), local_1e, uStack46, uStack56);
                    pass1_1030_8b00(u_stack6,
                                    str_var1(param_4, local_64),
                                    str_var1(param_4, &local_40), param_4);
                    u_stack60 = local_40;
                    iStack44 = iStack44 + 0x1;
                    ppcVar1  = (*param_1 + 0x8);
                    (**ppcVar1)();
                }
            }
            ppcVar1 = (*param_1 + 0x10);
            (**ppcVar1)(SEG_1008, *param_1);
            if((extraout_DX_01 | uVar3) != 0x0)
            {
                return;
            }
        }
    }
    return;
}


void  pass1_1030_66de(u32 param_1, u32 param_2, u16 param_3)

{
    u32 uVar1;
    u8  local_a[0x8];

    pass1_1008_5784(str_var1(param_3, local_a), *(param_1 + 0x4));
    while(true)
    {
        uVar1 = pass1_1008_5b12(local_a, param_3);
        if(uVar1 == 0x0)
            break;
        pass1_1030_8bac(uVar1, param_2);
    }
    return;
}


void  pass1_1030_671c(u32 param_1, u32 param_2, u16 *param_3, long param_4, u16 param_5, u16 param_6, i16 param_7, u16 param_8)

{
    pass1_1030_677a(param_1, param_4, param_8);
    pass1_1030_8bdc(str_var1(param_6, param_5), param_2, param_3, param_7, param_8);
    return;
}


void  pass1_1030_6740(u32 param_1, u16 param_2, i16 param_3)

{
    u32 uVar1;
    u8  local_a[0x8];

    pass1_1008_5784(str_var1(param_2, local_a), *(param_1 + 0x4));
    while(true)
    {
        uVar1 = pass1_1008_5b12(local_a, param_2);
        if(uVar1 == 0x0)
            break;
        pass1_1030_8c38(uVar1, param_3, param_2);
    }
    return;
}


void  pass1_1030_677a(u32 param_1, long param_2, u16 param_3)

{
    u8 *puVar1;
    u16 extraout_DX;
    u16 u_var2;
    u8  local_a[0x8];

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x4) == 0x0)
    {
        return;
    }
    pass1_1008_5784(str_var1(param_3, local_a), *(param_1 + 0x4));
    do
    {
        puVar1 = local_a;
        pass1_1008_5b12(puVar1, param_3);
        if((extraout_DX | puVar1) == 0x0)
        {
            return;
        }
    } while((puVar1 + 0x24) != param_2);
    return;
}


void  pass1_1030_69cc(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u16    uVar1;
    BOOL16 BVar2;
    i16    iVar3;
    u16    uVar4;
    u32    uVar5;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    if((iVar3 + 0x3e) != 0x0)
    {
        return;
    }
    if(((iVar3 + 0x22) != 0x0) && (pass1_1020_ba94(*(long **)(iVar3 + 0x22)), (param_3 | param_2) != 0x0))
    {
        return;
    }
    uVar1 = pass1_1030_6fa0(param_1);
    BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x4);
    if((BVar2 != 0x0) && (uVar5 = pass1_1028_67d4(*(iVar3 + 0x1a), param_4), ((uVar5 >> 0x10) | uVar5) != 0x0))
    {
        return;
    }
    return;
}


void  pass1_1030_4bbe(u16 param_1, u16 param_2, u32 param_3, i16 param_4)

{
    u32  *puVar1;
    u32  *pu_var2;
    u16          uVar3;
    i16          iVar4;
    Struct117 *iVar5;
    u32  *puVar5;
    u32  *puVar6;
    u16          uVar7;

    uVar7 = (param_3 >> 0x10);
    iVar5 = (Struct117 *)param_3;
    if(iVar5->field_0x12 == 0x0)
    {
        pass1_1030_4f5a(param_1, param_2, param_3 & 0xffff | uVar7 << 0x10);
    }
    puVar6 = &iVar5->field_0x16;
    uVar3  = (&iVar5->field_0x12 + 0x2);
    puVar5 = (&iVar5->field_0x12 + param_4 * 0x98);
    for(iVar4 = 0x26; iVar4 != 0x0; iVar4 = iVar4 + -0x1)
    {
        pu_var2  = puVar6;
        puVar6  = puVar6 + 0x1;
        puVar1  = puVar5;
        puVar5  = puVar5 + 0x1;
        *pu_var2 = *puVar1;
    }
    return;
}


void  pass1_1030_4c06(u32 param_1, i16 param_2, u16 param_3, u16 param_4)

{
    u32 *puVar1;
    u32 *pu_var2;
    u16         uVar3;
    u32 *puVar4;
    i16         iVar5;
    u32 *puVar6;
    u16         uVar7;

    uVar7 = (param_1 >> 0x10);
    iVar5 = param_1;
    if((iVar5 + 0x15c) == 0x0)
    {
        pass1_1030_5044(param_1 & 0xffff | uVar7 << 0x10, param_4, param_3);
    }
    puVar4 = (iVar5 + 0xae);
    uVar3  = (iVar5 + 0x15e);
    puVar6 = ((iVar5 + 0x15c) + param_2 * 0xae);
    for(iVar5 = 0x2b; iVar5 != 0x0; iVar5 = iVar5 + -0x1)
    {
        pu_var2  = puVar4;
        puVar4  = puVar4 + 0x1;
        puVar1  = puVar6;
        puVar6  = puVar6 + 0x1;
        *pu_var2 = *puVar1;
    }
    puVar4 = puVar6;
    return;
}


void  pass1_1030_4c52(u16 param_1, u16 param_2, u32 param_3, u32 param_4, u16 param_5, u16 param_6)

{
    u16   uVar1;
    i16   iVar2;
    i16   iVar3;
    u16   uVar4;
    char *pcStack8;
    i16   iStack4;

    iStack4 = 0x0;
    while(true)
    {
        uVar1    = pass1_1000_47a4(param_4, 0x1050518a, param_6);
        pcStack8 = str_var1(param_5, uVar1);
        if((param_5 | uVar1) == 0x0)
            break;
        if(*pcStack8 != '\"')
        {
            iVar2 = pass1_1000_3e2c(str_var1(param_5, uVar1));
            iVar3 = param_3;
            uVar4 = (param_3 >> 0x10);
            if(iStack4 < 0x25)
            {
                (iStack4 * 0x4 + iVar3)       = iVar2;
                (iStack4 * 0x4 + iVar3 + 0x2) = param_5;
            }
            else
            {
                if(iStack4 == 0x25)
                {
                    (iVar3 + 0x94) = iVar2;
                }
                else
                {
                    if(iStack4 == 0x26)
                    {
                        (iVar3 + 0x96) = iVar2;
                    }
                    else
                    {
                        if(iStack4 == 0x27)
                        {
                            (iVar3 + 0x98) = iVar2;
                        }
                        else
                        {
                            if(iStack4 == 0x28)
                            {
                                (iVar3 + 0x9a) = iVar2;
                            }
                            else
                            {
                                if(iStack4 == 0x29)
                                {
                                    (iVar3 + 0x9c) = iVar2;
                                }
                                else
                                {
                                    if(iStack4 == 0x2a)
                                    {
                                        (iVar3 + 0x9e) = iVar2;
                                    }
                                    else
                                    {
                                        if(iStack4 == 0x2b)
                                        {
                                            (iVar3 + 0xa0) = iVar2;
                                        }
                                        else
                                        {
                                            if(iStack4 == 0x2c)
                                            {
                                                (iVar3 + 0xa2) = iVar2;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            iStack4 = iStack4 + 0x1;
        }
        param_4 = 0x0;
    }
    return;
}


void  pass1_1030_4d3a(u16 param_1, u16 param_2, u16 param_3, u32 param_4, u32 param_5)

{
    u16          uVar1;
    i16          iVar2;
    Struct118 *iVar3;
    u16          uVar3;
    u16          unaff_SS;
    char        *pcStack8;
    i16          iStack4;

    iStack4 = 0x0;
    while(true)
    {
        uVar1    = pass1_1000_47a4(param_5, 0x1050518a, unaff_SS);
        pcStack8 = str_var1(param_1, uVar1);
        if((param_1 | uVar1) == 0x0)
            break;
        if(*pcStack8 != '\"')
        {
            iVar2 = pass1_1000_3e2c(str_var1(param_1, uVar1));
            iVar3 = (Struct118 *)param_4;
            uVar3 = (param_4 >> 0x10);
            if(iStack4 < 0x25)
            {
                (&iVar3->field_0x0 + iStack4 * 0x4) = iVar2;
                (&iVar3->field_0x2 + iStack4 * 0x4) = param_1;
            }
            else
            {
                if(iStack4 == 0x25)
                {
                    iVar3->field_0x94 = iVar2;
                }
                else
                {
                    if(iStack4 == 0x26)
                    {
                        iVar3->field_0x96 = iVar2;
                    }
                }
            }
            iStack4 = iStack4 + 0x1;
        }
        param_5 = 0x0;
    }
    return;
}


void  pass1_1030_4e34(u16 param_1, u16 param_2, long param_3, char *param_4)

{
    while(param_3 != 0x0)
    {
        if((*param_4 == '\r') || (*param_4 == '\n'))
        {
            *param_4 = '\0';
        }
        param_4 = (param_4 & 0xffff0000 | (param_4 + 0x1));
        param_3 = param_3 + -0x1;
    }
    return;
}


u32  pass1_1030_5164(u32 param_1, u32 param_2, u16 param_3)

{
    u16  uVar1;
    u16  u_var2;
    long lVar3;
    u8   local_a[0x8];

    pass1_1008_5784(str_var1(param_3, local_a), *(param_1 + 0x568));
    do
    {
        lVar3 = pass1_1008_5b12(local_a, param_3);
        if(lVar3 == 0x0)
        {
            return param_2;
        }
        uVar1 = param_1 + 0x168;
        unk_str_op_1000_3d3e((param_1 & 0xffff0000 | uVar1), (lVar3 + 0x4));
        pass1_1000_3cea(param_1 & 0xffff0000 | uVar1, param_2);
        u_var2 = dos_int21_find_file_1000_51aa(&stack0xfffe);
    } while(u_var2 != 0x0);
    return param_1 & 0xffff0000 | uVar1;
}


void pass1_1030_51eb(void)

{
    u16 unaff_SS;

    pass1_1030_3b28(unaff_SS);
    return;
}


u16  pass1_1030_5260(u32 param_1, u16 param_2, u16 param_3)

{
    u32  uVar1;
    void **ppcVar2;
    u32 *pu_stack6;

    uVar1 = (param_1 + 0x108);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    pu_stack6 = str_var1(param_3, param_2);
    ppcVar2  = (*pu_stack6 + 0x14);
    (**ppcVar2)();
    return 0x1;
}


void  pass1_1030_53f4(u32 param_1, u16 param_2, u16 param_3, u8 param_4)

{
    u32 uVar1;
    u16        u_var2;
    i16        iVar3;
    u16        uVar4;
    u32        uVar5;
    u8         bStack291;
    u8         local_11e[0x10e];
    u32 uStack16;
    u32 uStack12;

    uVar4          = (param_1 >> 0x10);
    iVar3          = param_1;
    uStack12       = (iVar3 + 0x108);
    uStack12._3_1_ = (uStack12 >> 0x18);
    if(uStack12._3_1_ == -0x1)
    {
        uVar5   = pass1_1028_e2e0(globals->_PTR_LOOP_1050_65e2, param_2, (u8)((iVar3 + 0x108) >> 0x18));
        param_2 = (uVar5 >> 0x10);
    }
    else
    {
        uStack16       = (iVar3 + 0x108);
        uStack16._3_1_ = (uStack16 >> 0x18);
        if(uStack16._3_1_ == '\x03')
        {
            pass1_1028_e44a(globals->_PTR_LOOP_1050_65e2, (iVar3 + 0x108), param_3);
        }
        else
        {
            uVar1 = (iVar3 + 0x108);
            pass1_1028_e372(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10), param_3);
        }
    }
    uStack12       = (iVar3 + 0x108);
    uStack12._3_1_ = (uStack12 >> 0x18);
    if(uStack12._3_1_ != '\x03')
    {
        pass1_1030_521c((Struct100 *)CONCAT13((param_3 >> 0x8), CONCAT12(param_3, local_11e)), *(iVar3 + 0x108), param_3, param_4);
        uStack16 = *_PTR_LOOP_1050_5748;
        fn_ptr_1028_d566(uStack16, str_var1(param_3, local_11e));
        bStack291 = (u8)((iVar3 + 0x108) >> 0x18);
        u_var2     = bStack291;
        if(bStack291 == 0x2)
        {
            uVar1 = (iVar3 + 0x108);
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
            pass1_1010_82f8globals->dat_1050_14cc, **(u16 **)(u_var2 + 0x10));
        }
    }
    return;
}


void  pass1_1030_5a52(u32 param_1, u32 *param_2, u32 *param_3)

{
    u32 uVar1;
    u16        u_var2;

    u_var2    = (param_1 >> 0x10);
    uVar1    = (param_1 + 0x10);
    *param_3 = *(uVar1 + 0xe);
    uVar1    = (param_1 + 0x10);
    *param_2 = *(uVar1 + 0x12);
    return;
}


void  pass1_1030_5a80(u32 param_1, u32 param_2, u16 param_3)

{
    u32       *puVar1;
    u16        u_var2;
    u32        uVar3;
    u8         local_20[0xc];
    u32        local_14;
    u32 uStack14;
    u32 uStack10;
    i16        iStack6;
    u16        uStack4;

    u_var2             = (param_1 >> 0x10);
    *(param_1 + 0x10) = param_2;
    uVar3             = pass1_1008_4772(*(Struct76 **)(param_2 + 0xe));
    uStack4           = (uVar3 >> 0x10);
    iStack6           = uVar3;
    uStack10          = (iStack6 + 0x4);
    uStack14          = (iStack6 + 0x8);
    pass1_1008_3e54(str_var1(param_3, &local_14), 0x0, uStack14 - 0x1, uStack10 - 0x1);
    puVar1 = (param_1 + 0x14);
    pass1_1008_6cb4(str_var1(param_3, local_20), &local_14, param_3, puVar1, u_var2);
    pass1_1008_6d64(str_var1(param_3, local_20), (param_1 & 0xffff0000 | ZEXT24(puVar1)));
    return;
}


i16  pass1_1030_5b00(u32 param_1)

{
    return (param_1 + 0x4) + 0xb;
}


void  pass1_1030_5b1c(u32 param_1, u16 *param_2, u16 *param_3)

{
    u16 uVar1;

    uVar1    = (param_1 >> 0x10);
    *param_3 = (param_1 + 0x1a);
    *param_2 = (param_1 + 0x1c);
    return;
}


void  pass1_1030_5b3e(u32 param_1, i16 param_2, u16 param_3)

{
    i16 iVar1;
    u16 u_var2;

    u_var2          = (param_1 >> 0x10);
    iVar1          = param_1;
    (iVar1 + 0x1a) = param_3;
    if((iVar1 + 0x1c) < param_2)
    {
        (iVar1 + 0x1c) = param_2;
    }
    return;
}


void  pass1_1030_3006(u32 param_1, u32 param_2)

{
    *(param_1 + 0x10) = param_2;
    return;
}


void  pass1_1030_3258(u32 param_1, u16 param_2)

{
    (param_1 + 0x1ae) = param_2;
    return;
}


void  pass1_1030_326a(Struct692 *param_1, u32 param_2, u16 param_3, u16 param_4)

{
    u16          uVar1;
    u32          u_var2;
    u16          uVar3;
    Struct692 *iVar4;
    u16          uVar4;
    long         lStack6;

    uVar4 = (param_1 >> 0x10);
    iVar4 = (Struct692 *)param_1;
    if(iVar4->field_0x1aa == 0x0)
    {
        iVar4->field_0x1aa = 0x1;
    }
    else
    {
        param_2            = iVar4->field_0x1aa * 0x2;
        iVar4->field_0x1aa = param_2;
    }
    uVar1 = param_2;
    pass1_1030_38b8();
    lStack6 = str_var1(param_3, uVar1);
    u_var2   = iVar4->field_0x1aa;
    uVar3   = (&iVar4->field_0x1aa + 0x2);
    if(lStack6 < (long)u_var2)
    {
        u_var2 = uVar1;
        uVar3 = param_3;
    }
    &iVar4->field_0x1aa         = u_var2;
    (&iVar4->field_0x1aa + 0x2) = uVar3;
    pass1_1030_375a(param_1 & 0xffff | uVar4 << 0x10, 0x0, u_var2 & 0xffff | uVar3 << 0x10, param_4);
    return;
}


void  pass1_1030_3534(u32 param_1, u32 param_2)

{
    *(param_1 + 0x4) = param_2;
    return;
}


void  pass1_1030_3548(u32 param_1, long param_2)

{
    long *plVar1;

    plVar1  = (long *)(param_1 + 0x4);
    *plVar1 = *plVar1 + param_2;
    return;
}


void  pass1_1030_355c(u32 param_1, u32 param_2)

{
    i16 iVar1;
    u16 u_var2;
    i16 iStack4;

    iStack4 = 0x0;
    do
    {
        iVar1                   = iStack4 * 0x4;
        u_var2                   = (param_1 >> 0x10);
        (param_1 + iVar1 + 0x4) = (iVar1 + param_2) + (param_1 + 0x4 + iVar1);
        iStack4                 = iStack4 + 0x1;
    } while(iStack4 < 0x5b);
    return;
}


void  pass1_1030_35a4(u32 param_1, long param_2, u8 *param_3, u16 param_4, u16 param_5)

{
    u16       *puVar1;
    u8       **ppu_var2;
    u16        uVar3;
    u8        *puVar4;
    u16        uVar5;
    u16        uVar6;
    u32        uVar7;
    u8        *puVar8;
    u16        uVar9;
    u8         uVar10;
    u8         uVar11;
    u8         local_c[0x2];
    u32 local_a;
    u32 u_stack6;

    vsprintf_op_1030_840a(s_Pop_Leaving__ld_1050_516a, param_4, param_5, param_3);
    if(globals->_PTR_LOOP_1050_5f2c == 0x0)
    {
        globals->dat_1050_5f2c      = mem_op_1000_160a(param_3, SEG_1000);
        globals->dat_1050_5f2e      = param_3;
    }
    else
    {
    }
    uVar5   = fn_ptr_op_1000_1708(0x16c, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
    u_stack6 = str_var1(globals->PTR_LOOP_1050_5f2e, uVar5);
    uVar10  = param_5;
    uVar11  = (param_5 >> 0x8);
    pass1_1030_3948(param_1,
                    str_var1(param_5, local_c), CONCAT13(uVar11, CONCAT12(uVar10, &local_a)), 0x3);
    uVar7 = (&local_a + 0x2U);
    pass1_1030_3948(param_1,
                    str_var1(param_5, &local_a + 0x2U), CONCAT13(uVar11, CONCAT12(uVar10, local_c)), 0x4);
    do
    {
        uVar6 = uVar7;
        if(param_2 < 0x1)
            break;
        pass1_1008_612e(local_a, (local_a >> 0x10), uVar6);
        uVar7 = ZEXT24(&param_2);
        pass1_1030_3a3a(param_1, (long *)CONCAT13(uVar11, CONCAT12(uVar10, &param_2)), uVar6);
        uVar9    = (u_stack6 >> 0x10);
        puVar1   = (uVar6 * 0x4 + u_stack6);
        uVar3    = *puVar1;
        *puVar1  = *puVar1 + uVar7;
        ppu_var2  = (u8 **)(uVar6 * 0x4 + u_stack6 + 0x2);
        *ppu_var2 = globals->dat_1050_5f2e + (*ppu_var2 + CARRY2(uVar3, uVar7));
        pass1_1030_38f2(param_1, 0x3, param_5);
        uVar6  = uVar7;
        puVar8 = globals->dat_1050_5f2e;
        pass1_1030_38f2(param_1, 0x4, param_5);
        puVar4                      = globals->dat_1050_5f2e + puVar8;
        globals->dat_1050_5f2e      = puVar8;
    } while(((puVar4 + CARRY2(uVar6, uVar7)) | uVar6 + uVar7) != 0x0);
    pass1_1000_4906((Struct20 *)(param_1 & 0xffff0000 | (param_1 + 0x18c)), 0x0, 0x18);
    return;
}


void  pass1_1030_3694(u32 param_1, i16 param_2, long param_3, u8 *param_4, u16 param_5, u16 param_6)

{
    u16 *puVar1;
    u8 **ppu_var2;
    u16  uVar3;
    u16  uVar4;
    u16  uVar5;
    u32  uVar6;
    u8  *puVar7;

    vsprintf_op_1030_840a(s_Pop_Leaving__ld_1050_517a, param_5, param_6, param_4);
    if(globals->_PTR_LOOP_1050_5f2c == 0x0)
    {
        globals->dat_1050_5f2c      = mem_op_1000_160a(param_4, SEG_1000);
        globals->dat_1050_5f2e      = param_4;
    }
    else
    {
    }
    uVar4  = fn_ptr_op_1000_1708(0x16c, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
    uVar6  = (param_2 - 0x1U);
    puVar7 = globals->dat_1050_5f2e;
    if(((param_2 < 0x1) || (SBORROW2(param_2, 0x1))) || (uVar6 = (param_2 - 0x5U), param_2 - 0x5U != 0x0 && 0x3 < (param_2 - 0x1U)))
    {
        while(uVar5 = uVar6, 0x0 < param_3)
        {
            pass1_1008_612e(0x0, 0x5a, uVar5);
            uVar6 = ZEXT24(&param_3);
            pass1_1030_3a3a(param_1, (long *)CONCAT13((param_6 >> 0x8), CONCAT12(param_6, &param_3)), uVar5);
            puVar1   = (uVar5 * 0x4 + uVar4);
            uVar3    = *puVar1;
            *puVar1  = *puVar1 + uVar6;
            ppu_var2  = (u8 **)(uVar5 * 0x4 + uVar4 + 0x2);
            *ppu_var2 = puVar7 + (*ppu_var2 + CARRY2(uVar3, uVar6));
        }
    }
    else
    {
        pass1_1030_39dc(param_1, (long *)str_var1(param_6, &param_3), CONCAT13((globals->PTR_LOOP_1050_5f2e >> 0x8), CONCAT12(globals->PTR_LOOP_1050_5f2e, uVar4)), param_2);
    }
    pass1_1000_4906((Struct20 *)(param_1 & 0xffff0000 | (param_1 + 0x18c)), 0x0, 0x18);
    return;
}


void  pass1_1030_375a(u32 param_1, i16 param_2, long param_3, u16 param_4)

{
    i16        iVar1;
    i16        iVar2;
    u16        uVar3;
    long       lVar4;
    long       lVar5;
    i16        iVar6;
    i16        iVar7;
    u16        uVar8;
    i16        iStack20;
    u32 uStack18;
    i16        local_6;
    i16        local_4;

    iVar6 = param_1;
    if(param_2 == 0x0)
    {
        local_4 = 0x5a;
        while((-0x1 < local_4 && (pass1_1030_3a3a(param_1, (long *)str_var1(param_4, &param_3), local_4), param_3 != 0x0)))
        {
            local_4 = local_4 + -0x1;
        }
    }
    else
    {
        pass1_1030_3948(param_1, str_var1(param_4, &local_4), str_var1(param_4, &local_6), param_2);
        iVar2    = (local_4 - local_6) + 0x1;
        lVar4    = param_3 / (long)iVar2;
        lVar5    = lVar4 * iVar2;
        uVar3    = lVar5;
        uStack18 = str_var1(((param_3 >> 0x10) - (lVar5 >> 0x10)) - (param_3 < uVar3), param_3 - uVar3);
        for(iStack20 = local_6; iStack20 <= local_4; iStack20 = iStack20 + 0x1)
        {
            iVar7                 = iStack20 * 0x4;
            uVar8                 = (param_1 >> 0x10);
            (iVar6 + iVar7 + 0x4) = (iVar6 + iVar7 + 0x4) - lVar4;
            iVar2                 = (iVar6 + iVar7 + 0x6);
            if((uStack18 | uStack18) != 0x0)
            {
                iVar1                 = (iVar6 + iVar7 + 0x4);
                (iVar6 + iVar7 + 0x4) = iVar1 + -0x1;
                (iVar6 + iVar7 + 0x6) = iVar2 - (iVar1 == 0x0);
                uStack18              = uStack18 + -0x1;
            }
            if((iVar6 + iStack20 * 0x4 + 0x6) < 0x0)
            {
                (iVar6 + iStack20 * 0x4 + 0x4) = 0x0;
            }
        }
    }
    pass1_1000_4906((Struct20 *)(param_1 & 0xffff0000 | (iVar6 + 0x18c)), 0x0, 0x18);
    return;
}


void  pass1_1030_387c(u32 param_1)

{
    i16 iStack4;

    iStack4 = 0x5a;
    do
    {
        (iStack4 * 0x4 + param_1 + 0x4) = (iStack4 * 0x4 + param_1);
        iStack4                         = iStack4 + -0x1;
    } while(0x0 < iStack4);
    (param_1 + 0x4) = 0x0;
    return;
}


void  pass1_1030_38b8(void)

{
    i16 iStack8;

    iStack8 = 0x0;
    do
    {
        iStack8 = iStack8 + 0x1;
    } while(iStack8 < 0x5b);
    return;
}


void  pass1_1030_38f2(u32 param_1, i16 param_2, u16 param_3)

{
    i16        iStack12;
    i16        local_a;
    i16        local_8;
    u32 u_stack6;

    u_stack6 = 0x0;
    pass1_1030_3948(param_1, str_var1(param_3, &local_a), str_var1(param_3, &local_8), param_2);
    for(iStack12 = local_8; iStack12 <= local_a; iStack12 = iStack12 + 0x1)
    {
    }
    return;
}


void  pass1_1030_3948(u32 param_1, u16 *param_2, i16 *param_3, i16 param_4)

{
    u16 uVar1;

    if(param_4 == 0x1)
    {
        *param_3 = 0x0;
        *param_2 = 0x3;
        return;
    }
    uVar1 = (param_1 >> 0x10);
    if(param_4 == 0x2)
    {
        *param_3 = 0x4;
        *param_2 = (param_1 + 0x1ae);
        return;
    }
    if(param_4 == 0x3)
    {
        *param_3 = (param_1 + 0x1ae) + 0x1;
        *param_2 = 0x27;
        return;
    }
    if(param_4 != 0x4)
    {
        if(param_4 == 0x5)
        {
            *param_3 = 0x4c;
        }
        else
        {
            *param_3 = 0x0;
        }
        *param_2 = 0x5a;
        return;
    }
    *param_3 = 0x28;
    *param_2 = 0x4b;
    return;
}


void  pass1_1030_39dc(u32 param_1, long *param_2, u32 param_3, i16 param_4)

{
    i16 iVar1;
    u16 in_DX;
    u16 u_var2;
    u16 unaff_SS;
    i16 iStack8;
    i16 local_6;
    i16 local_4;

    pass1_1030_3948(param_1, str_var1(unaff_SS, &local_6), str_var1(unaff_SS, &local_4), param_4);
    iStack8 = local_6;
    while(true)
    {
        if(iStack8 < local_4)
        {
            return;
        }
        iVar1 = local_4;
        pass1_1030_3a3a(param_1, param_2, iStack8);
        u_var2                           = (param_3 >> 0x10);
        (iStack8 * 0x4 + param_3)       = iVar1;
        (iStack8 * 0x4 + param_3 + 0x2) = in_DX;
        if(*param_2 == 0x0)
            break;
        iStack8 = iStack8 + -0x1;
    }
    return;
}


void  pass1_1030_3a3a(u32 param_1, long *param_2, i16 param_3)

{
    i16 *pi_var1;
    i16  iVar2;
    i16  iVar3;
    u16  uVar4;
    u16  uVar5;
    i16  iVar6;
    i16  iVar7;
    i16  iVar8;
    u16  uVar9;

    iVar2  = (param_2 + 0x2);
    uVar9  = (param_1 >> 0x10);
    iVar6  = param_1;
    iVar7  = iVar6 + 0x4;
    iVar8  = param_3 * 0x4;
    pi_var1 = (iVar7 + iVar8 + 0x2);
    iVar3  = *pi_var1;
    if((iVar3 < iVar2) || ((uVar5 = *param_2, *pi_var1 == iVar2 || iVar3 < iVar2 && ((iVar7 + iVar8) < uVar5))))
    {
        *param_2                      = *param_2 - (iVar6 + 0x4 + param_3 * 0x4);
        (iVar6 + param_3 * 0x4 + 0x4) = 0x0;
    }
    else
    {
        uVar4                 = (iVar7 + iVar8);
        iVar3                 = (iVar7 + iVar8 + 0x2);
        (iVar6 + iVar8 + 0x4) = uVar4 - uVar5;
        (iVar6 + iVar8 + 0x6) = (iVar3 - iVar2) - (uVar4 < uVar5);
        *param_2              = 0x0;
    }
    return;
}
