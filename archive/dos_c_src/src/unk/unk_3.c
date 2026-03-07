#include "unk_3.h"
#include "address_tables/function_tables.h"
#include "op_int.h"
#include "op_windef.h"
#include "globals.h"


void pass1_1038_3698(u32 param_1, u16 param_2, u16 param_3, u16 param_4) {
    i16 *pi_var1;
    u16 *pu_var2;
    u32 uVar3;
    void **ppcVar4;
    u16 uVar5;
    BOOL16 BVar6;
    u16        uVar7;
    u16        uVar8;
    long       lVar9;
    u32        uVar10;
    u16        uVar11;
    u16        uVar12;
    u16        uVar13;
    u32        uVar14;
    i16        iVar15;
    u16        uVar16;
    u32        uVar17;
    u32        uStack32;
    u32        uStack18;
    u32        uStack14;
    u32 uStack10;
    u32 u_stack6;

    uVar16 = (param_1 >> 0x10);
    iVar15 = param_1;
    if((iVar15 + 0x214) == 0x0) {
        return;
    }
    pass1_1030_38b8();
    u_stack6 = str_var1(param_3, param_2);
    u_stack6 = u_stack6 - (iVar15 + 0x216);
    if(0x0 < u_stack6) {
        u_stack6  = u_stack6 + 0x3;
        uStack10 = u_stack6 / 0x5;
        uVar14   = u_stack6 % 0x5;
        if((iVar15 + 0xc) == 0x0) {
            uVar5  = 0x0;
            uVar14 = 0x0;
        } else {
            uVar3   = (iVar15 + 0xc);
            ppcVar4 = ((iVar15 + 0xc) + 0x10);
            lVar9   = uStack10;
            (**ppcVar4)(SEG_1030, uVar3, (uVar3 >> 0x10));
            uVar5 = lVar9;
        }
        uStack14 = str_var1(uVar14, uVar5);
        for(uStack18 = 0x0; uVar12 = uVar14, uVar10 = uStack14, uStack18 < uStack14; uStack18 = uStack18 + 0x1) {
            uVar17 = pass1_1030_1d7c(uVar5, uVar12, *(iVar15 + 0xc));
            uVar8  = (uVar17 >> 0x10);
            uVar13 = uVar8 | uVar17;
            uVar14 = uVar13;
            if(uVar13 != 0x0) {
                BVar6  = pass1_1008_c6ae(globals->dat_1050_06e0, (uVar17 + 0xc), 0x4);
                uVar8  = uVar14;
                uVar10 = BVar6;
                if(BVar6 != 0x0) {
                    uVar7    = pass1_1028_678c(uVar17, 0xf, param_4);
                    uStack32 = str_var1(uVar8, uVar7);
                    uVar14   = (uVar8 | uVar7);
                    uVar10   = uVar7;
                    if((uVar8 | uVar7) != 0x0) {
                        if(uStack10 < (long)uStack32) {
                            uVar8 = uStack10;
                            pass1_1028_6356(uVar17, 0xf, uVar8, uStack10, param_4);
                            uVar13   = uVar8 * 0x5;
                            uVar11   = uStack10 * 0x5 + CARRY2(uVar8, uVar8) * 0x2 + CARRY2(uVar8 * 0x2, uVar8 * 0x2) + CARRY2(uVar8 * 0x4, uVar8);
                            uVar14   = uVar11;
                            pu_var2   = (iVar15 + 0x216);
                            uVar8    = *pu_var2;
                            *pu_var2  = *pu_var2 + uVar13;
                            pi_var1   = (iVar15 + 0x218);
                            *pi_var1  = *pi_var1 + uVar11 + CARRY2(uVar8, uVar13);
                            uStack10 = 0x0;
                            uVar10   = uVar13;
                        } else {
                            pass1_1028_6356(uVar17, 0xf, uVar7, uVar8, param_4);
                            uVar13   = uVar8 * 0x5 + CARRY2(uVar7, uVar7) * 0x2 + CARRY2(uVar7 * 0x2, uVar7 * 0x2) + CARRY2(uVar7 * 0x4, uVar7);
                            uVar14   = uVar13;
                            pu_var2   = (iVar15 + 0x216);
                            uVar8    = *pu_var2;
                            *pu_var2  = *pu_var2 + uVar7 * 0x5;
                            pi_var1   = (iVar15 + 0x218);
                            *pi_var1  = *pi_var1 + uVar13 + CARRY2(uVar8, uVar7 * 0x5);
                            uStack10 = uStack10 - uStack32;
                            uVar10   = uStack32;
                        }
                    }
                }
                uVar12 = uVar14;
                if(uStack10 == 0x0)
                    break;
            }
        }
        uVar5 = uVar10;
        pass1_1030_38b8();
        u_stack6       = str_var1(uVar12, uVar5);
        u_stack6       = u_stack6 - (iVar15 + 0x216);
        u_stack6 = (u_stack6 >> 0x10);
        if((u_stack6 | u_stack6) != 0x0) {
            uStack32 = u_stack6 / (long)(iVar15 + 0x214);
            if((long)uStack32 < 0x1) {
                uStack32 = 0x1;
            }
            pass1_1030_375a(*(iVar15 + 0x1f6), 0x0, uStack32, param_4);
        }
    }
    pi_var1  = (iVar15 + 0x214);
    *pi_var1 = *pi_var1 + -0x1;
    return;
}


void  pass1_1038_387e(Struct302 *param_1, i16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    void **ppcVar1;
    long         lVar2;
    u16          uVar3;
    i16          iVar4;
    u32          uVar5;
    u32          uVar6;
    u32          uVar7;
    u8          *extraout_DX;
    u8          *puVar8;
    u8          *puVar9;
    u16          uVar10;
    u16          extraout_DX_00;
    u16          uVar11;
    Struct302 *iVar10;
    u16          uVar12;
    i16          iStack22;
    u16          uStack12;
    u32          uStack10;
    u32          u_stack6;

    if(param_2 != param_3) {
        iVar10 = (Struct302 *)param_1;
        uVar12 = (param_1 >> 0x10);
        if(param_2 < param_3) {
            uStack12 = param_3 - param_2;
            if((iVar10->field_0x210 == 0x0) || (lVar2 = iVar10->field_0x210, (lVar2 + 0xa) == 0x0)) {
                if(iVar10->field_0xc == 0x0) {
                    uVar11 = 0x0;
                    puVar8 = 0x0;
                } else {
                    ppcVar1 = (*iVar10->field_0xc + 0x10);
                    uVar11  = uStack12;
                    (**ppcVar1)();
                    puVar8 = extraout_DX;
                }
                u_stack6 = str_var1(puVar8, uVar11);
                for(uStack10 = 0x0; uStack10 < u_stack6; uStack10 = uStack10 + 0x1) {
                    uVar6 = u_stack6;
                    pass1_1030_1d58(iVar10->field_0xc);
                    puVar9 = (puVar8 | uVar6);
                    if((puVar9 != 0x0) && (uVar3 = pass1_1030_6fa0(uVar6 & 0xffff | ZEXT24(puVar8) << 0x10), uVar3 == 0xb)) {
                        pass1_1030_7c50(CONCAT13((puVar8 >> 0x8), CONCAT12(puVar8, uVar6)), (long)uStack12, 0x4, uStack12, puVar9);
                        return;
                    }
                    puVar8 = puVar9;
                }
            } else {
                lVar2 = iVar10->field_0x210;
                uVar6 = *(lVar2 + 0xa);
                for(uStack10 = 0x0; uStack10 < uVar6; uStack10 = uStack10 + 0x1) {
                    uVar5 = uVar6;
                    bad_1030_1312();
                    uVar11 = uVar5;
                    uVar10 = param_5 | uVar11;
                    if(((uVar10 != 0x0) && (pass1_1030_cc44(uVar11, param_5, uStack12, param_4, 0x4), uVar11 != 0x0)) && (uStack12 = uStack12 - uVar11, uStack12 == 0x0)) {
                        return;
                    }
                    param_5 = uVar10;
                }
            }
        } else {
            iStack22 = param_2 - param_3;
            if((iVar10->field_0x210 == 0x0) || (lVar2 = iVar10->field_0x210, (lVar2 + 0xa) == 0x0)) {
                if(iVar10->field_0xc == 0x0) {
                    iVar4  = 0x0;
                    uVar11 = 0x0;
                } else {
                    ppcVar1 = (*iVar10->field_0xc + 0x10);
                    iVar4   = iStack22;
                    (**ppcVar1)();
                    uVar11 = extraout_DX_00;
                }
                u_stack6 = str_var1(uVar11, iVar4);
                for(uStack10 = 0x0; uStack10 < u_stack6; uStack10 = uStack10 + 0x1) {
                    uVar6 = u_stack6;
                    pass1_1030_1d58(iVar10->field_0xc);
                    uVar10 = uVar11 | uVar6;
                    if((uVar10 != 0x0) && (uVar3 = pass1_1030_6fa0(uVar6 & 0xffff | uVar11 << 0x10), uVar3 == 0xb)) {
                        pass1_1030_6e9c(CONCAT13((uVar11 >> 0x8), CONCAT12(uVar11, uVar6)), (long)iStack22, 0x4);
                        return;
                    }
                    uVar11 = uVar10;
                }
            } else {
                lVar2 = iVar10->field_0x210;
                uVar6 = *(lVar2 + 0xa);
                for(uStack10 = 0x0; uStack10 < uVar6; uStack10 = uStack10 + 0x1) {
                    uVar7 = uVar6;
                    bad_1030_1312();
                    uVar5   = param_5;
                    uVar11  = uVar7;
                    param_5 = param_5 | uVar11;
                    if(param_5 != 0x0) {
                        pass1_1030_ce72(uVar5 << 0x10 | uVar7 & 0xffff, iStack22, param_4, 0x4);
                        iStack22 = iStack22 - uVar11;
                        if(iStack22 == 0x0) {
                            return;
                        }
                    }
                }
            }
        }
    }
    return;
}


void  pass1_1038_3aa6(u32 param_1, u16 param_2, u16 param_3) {
    void **ppcVar1;
    u32 u_var2;
    u16        uVar3;
    u32        uVar4;
    u32        uVar5;
    u16        extraout_DX;
    u16        uVar6;
    u16        uVar7;
    i16        iVar8;
    u16        uVar9;
    u32        uStack12;
    u32        uStack8;

    uVar9 = (param_1 >> 0x10);
    iVar8 = param_1;
    if(((iVar8 + 0x210) == 0x0) || (u_var2 = (iVar8 + 0x210), (u_var2 + 0xa) == 0x0)) {
        if((iVar8 + 0xc) == 0x0) {
            param_2 = 0x0;
            uVar6   = 0x0;
        } else {
            ppcVar1 = ((iVar8 + 0xc) + 0x10);
            (**ppcVar1)();
            uVar6 = extraout_DX;
        }
        uStack8 = str_var1(uVar6, param_2);
        for(uStack12 = 0x0; uStack12 < uStack8; uStack12 = uStack12 + 0x1) {
            uVar4 = uStack8;
            pass1_1030_1d58(*(iVar8 + 0xc));
            uVar7 = uVar6 | uVar4;
            if((uVar7 != 0x0) && (uVar3 = pass1_1030_6fa0(uVar4 & 0xffff | uVar6 << 0x10), uVar3 == 0xb)) {
                pass1_1030_6b86(uVar4 & 0xffff | uVar6 << 0x10, 0xb, SEG_1030);
                return;
            }
            uVar6 = uVar7;
        }
    } else {
        u_var2 = (iVar8 + 0x210);
        uVar4 = *(u_var2 + 0xa);
        for(uStack12 = 0x0; uStack12 < uVar4; uStack12 = uStack12 + 0x1) {
            uVar5 = uVar4;
            bad_1030_1312();
            uVar6 = param_3 | uVar5;
            if(uVar6 != 0x0) {
                pass1_1030_ce2e(uVar5, param_3, 0x4);
            }
            param_3 = uVar6;
        }
    }
    return;
}


void  pass1_1038_3ba0(u32 param_1) {
    u32  *puVar1;
    void **ppcVar2;
    char         cVar3;
    u32  *puVar4;
    u32          uVar5;
    u16          uVar6;
    u16          uVar7;
    u32          uVar8;
    u8          *puVar9;
    u8          *extraout_DX;
    u8          *puVar10;
    u16          uVar11;
    Struct428 *iVar13;
    u16          uVar12;
    u16          uVar13;
    u16          unaff_SS;
    u32         *puVar14;
    u32          uVar15;
    u32          uStack20;

    uVar12 = (param_1 >> 0x10);
    iVar13 = (Struct428 *)param_1;
    puVar1 = &iVar13->field_0x210;
    uVar6  = (&iVar13->field_0x210 + 0x2);
    if((uVar6 | puVar1) != 0x0) {
        ppcVar2 = *puVar1;
        (**ppcVar2)();
    }
    puVar14 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x1e);
    puVar9  = (puVar14 >> 0x10);
    uVar8   = puVar14 & 0xffff;
    pass1_1038_4d6e(param_1, puVar14, uVar8, puVar9);
    uVar5   = uVar8 & 0xffff;
    puVar4  = (uVar5 | ZEXT24(puVar9) << 0x10);
    ppcVar2 = (*puVar4 + 0x10);
    (**ppcVar2)(SEG_1008, uVar8, puVar9);
    uVar6 = uVar8;
    if((extraout_DX == 0x0) && (uVar6 < 0x5)) {
        uVar6 = 0x5;
    }
    uVar6   = uVar6 + 0x1;
    uVar13  = SEG_1000;
    puVar10 = extraout_DX;
    uVar7 = uVar6;
    mem_op_1000_179c(0x1c, extraout_DX, 0);
    uVar11 = puVar10 | uVar7;
    if(uVar11 == 0x0) {
        iVar13->field_0x210 = 0x0;
    } else {
        uVar11 = uVar6 >> 0xf;
        cVar3  = (uVar6 >> 0x8);
        uVar13 = SEG_1030;
        struct_1030_11aa(str_var1(puVar10, uVar7), 0x5, CONCAT13(cVar3 >> 0xf, CONCAT12(cVar3 >> 0x7, uVar6)), unaff_SS);
        &iVar13->field_0x210         = uVar6;
        (&iVar13->field_0x210 + 0x2) = uVar11;
    }
    uVar15          = iVar13->field_0x210;
    (uVar15 + 0x1a) = 0x0;
    for(uStack20 = 0x0; uStack20 < (uVar8 & 0xffff | ZEXT24(extraout_DX) << 0x10); uStack20 = uStack20 + 0x1) {
        uVar15 = pass1_1030_1d7c((uVar8 & 0xffff), uVar11, puVar4);
        uVar6  = (uVar15 >> 0x10);
        uVar11 = uVar6 | uVar15;
        if(uVar11 != 0x0) {
            pass1_1030_1358(iVar13->field_0x210, uVar15, uVar6, uStack20 + 0x1, unaff_SS);
        }
        uVar13 = SEG_1030;
    }
    if(puVar4 != 0x0) {
        ppcVar2 = *puVar4;
        (**ppcVar2)(uVar13, uVar5, puVar9, 0x1);
    }
    return;
}


void  pass1_1038_3cc0(u32 param_1, u16 param_2, u8 *param_3, u16 param_4, u16 param_5, u16 param_6, u16 param_7) {
    long        lVar1;
    void **ppcVar2;
    u16         uVar3;
    u32 *puVar4;
    u16         uVar5;
    u8         *extraout_DX;
    u8         *extraout_DX_00;
    u16         extraout_DX_01;
    u16         extraout_DX_02;
    u16         uVar6;
    u8         *extraout_DX_03;
    u8         *puVar7;
    u8         *extraout_DX_04;
    u32 *puVar8;
    u8         *puVar9;
    u16         uVar10;
    u32        *puVar11;
    u32         uVar12;
    u32         uVar13;
    u8          uVar14;
    u8          uVar15;
    u8          uVar16;
    u8          uVar17;
    u32 *puStack26;
    u32         uStack22;
    u32         uStack18;
    u32         uStack14;
    u32 *puStack10;

    if(param_4 == 0x1e) {
        uVar10  = SEG_1008;
        puVar11 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x27);
        puVar9  = (puVar11 >> 0x10);
        puVar8  = puVar11;
        pass1_1038_4e78(puVar8, puVar9, param_1, puVar11);
        puStack10 = str_var1(puVar9, puVar8);
        ppcVar2   = (*puStack10 + 0x10);
        puVar4    = puVar8;
        (**ppcVar2)(SEG_1008, puVar8, puVar9);
        uStack14 = str_var1(extraout_DX_00, puVar4);
        puVar7   = extraout_DX_00;
        for(uStack18 = 0x0; uStack18 < uStack14; uStack18 = uStack18 + 0x1) {
            uVar12 = pass1_1030_1d7c(puVar4, puVar7, puStack10);
            puVar7 = ((uVar12 >> 0x10) | uVar12);
            if(puVar7 != 0x0) {
                uVar5     = pass1_1030_bfb8(uVar12, param_7);
                puStack26 = str_var1(puVar7, uVar5);
                puVar7    = (puVar7 | uVar5);
                if(puVar7 != 0x0) {
                    pass1_1028_b58e(uVar12);
                    if(str_var1(param_3, param_2) <= puStack26) {
                        uVar10 = SEG_1030;
                        pass1_1030_7ddc(
                          str_var1(extraout_DX_01, uVar5), CONCAT13((param_3 >> 0x8), CONCAT12(param_3, param_2)), 0x1e, param_2, param_3, param_5, param_6, param_7);
                        break;
                    }
                    puVar7 = param_3;
                    pass1_1030_7ddc(str_var1(extraout_DX_01, uVar5), (long)puStack26, 0x1e, param_2, param_3, param_5, param_6, param_7);
                    lVar1   = str_var1(param_3, param_2) - (long)puStack26;
                    param_2 = lVar1;
                    param_3 = (lVar1 >> 0x10);
                }
            }
            uVar10 = SEG_1030;
        }
        puStack26 = puStack10;
        if(puStack10 == 0x0) {
            return;
        }
    } else {
        if(param_4 != 0x21) {
            uVar10  = SEG_1008;
            puVar11 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x3);
            puVar7  = (puVar11 >> 0x10);
            uVar3   = puVar11;
            pass1_1038_4e78(uVar3, puVar7, param_1, puVar11);
            puStack26 = str_var1(puVar7, uVar3);
            ppcVar2   = (*puStack26 + 0x10);
            (**ppcVar2)(SEG_1008, uVar3, puVar7);
            uStack22 = str_var1(extraout_DX, uVar3);
            uStack18 = 0x0;
            puVar7   = extraout_DX;
            LAB_1038_3e9c:
            if(uStack18 < uStack22) {
                uVar10 = SEG_1030;
                uVar12 = pass1_1030_1d7c(uVar3, puVar7, puStack26);
                puVar7 = ((uVar12 >> 0x10) | uVar12);
                if(puVar7 == 0x0)
                    goto LAB_1038_3e98;
                uVar10 = SUB42(SEG_1028, 0x0);
                uVar13 = pass1_1028_45e2(uVar12, uVar12, puVar7, param_7);
                uVar6  = uVar13;
                puVar7 = ((uVar13 >> 0x10) | uVar6);
                if(puVar7 == 0x0)
                    goto LAB_1038_3e98;
                pass1_1028_b58e(uVar12);
                uVar12 = str_var1(param_3, param_2);
                if(uVar13 < uVar12) {
                    uVar10 = SEG_1030;
                    puVar7 = param_3;
                    pass1_1030_7ddc(str_var1(extraout_DX_04, uVar6), uVar13, param_4, param_2, param_3, param_5, param_6, param_7);
                    lVar1   = str_var1(param_3, param_2) - uVar13;
                    param_2 = lVar1;
                    param_3 = (lVar1 >> 0x10);
                    goto LAB_1038_3e98;
                }
                uVar16 = SUB21(param_3, 0x0);
                uVar17 = (param_3 >> 0x8);
                uVar14 = uVar6;
                uVar15 = (uVar6 >> 0x8);
                puVar7 = extraout_DX_04;
                LAB_1038_3e67:
                uVar10 = SEG_1030;
                pass1_1030_7ddc(str_var1(puVar7, CONCAT11(uVar15, uVar14)), CONCAT13(uVar17, CONCAT12(uVar16, param_2)), param_4, uVar12, param_3, param_5, param_6, param_7);
            }
            goto LAB_1038_3e6c;
        }
        uVar10  = SEG_1008;
        puVar11 = pass1_1008_c6fa(globals->dat_1050_06e0, 0xa);
        puVar7  = (puVar11 >> 0x10);
        uVar3   = puVar11;
        pass1_1038_4e78(uVar3, puVar7, param_1, puVar11);
        puStack26 = str_var1(puVar7, uVar3);
        ppcVar2   = (*puStack26 + 0x10);
        (**ppcVar2)(SEG_1008, uVar3, puVar7);
        uStack22 = str_var1(extraout_DX_02, uVar3);
        uVar6    = extraout_DX_02;
        for(uStack18 = 0x0; uStack18 < uStack22; uStack18 = uStack18 + 0x1) {
            uVar10 = SEG_1030;
            uVar13 = pass1_1030_1d7c(uVar3, uVar6, puStack26);
            uVar12 = uVar13 & 0xffff;
            uVar6  = (uVar13 >> 0x10) | uVar12;
            if(uVar6 != 0x0) {
                uVar16 = SUB21(param_3, 0x0);
                uVar17 = (param_3 >> 0x8);
                pass1_1028_b58e(uVar13);
                uVar14  = uVar12;
                uVar15  = (uVar12 >> 0x8);
                param_3 = extraout_DX_03;
                puVar7  = extraout_DX_03;
                goto LAB_1038_3e67;
            }
        }
        LAB_1038_3e6c:
        if(puStack26 == 0x0) {
            return;
        }
        puVar9 = (puStack26 >> 0x10);
        puVar8 = puStack26;
    }
    ppcVar2 = *puVar8;
    (**ppcVar2)(uVar10, puStack26, puVar9, 0x1);
    return;
LAB_1038_3e98:
    uStack18 = uStack18 + 0x1;
    goto LAB_1038_3e9c;
}


void  pass1_1038_3fb0(u32 param_1) {
    u32 uVar1;

    uVar1 = (param_1 + 0x200);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    return;
}


u16  pass1_1038_290e(u16 param_1, u16 param_2) {
    u16 unaff_SI;
    u16 unaff_DI;
    u16 unaff_SS;
    u8  in_AF;

    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, 0x1, 0x400);
    if((param_2 | param_1) != 0x0) {
        pass1_1038_4918(
          str_var1(param_2, param_1), param_1, param_2 | param_1, unaff_SS, in_AF);
    }
    pass1_1038_7a76(globals->_PTR_LOOP_1050_5a64, unaff_SI, unaff_DI, unaff_SS);
    return 0x1;
}


u16  pass1_1038_2ac2(u32 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5, u16 param_6, u8 param_7) {
    u32 uVar1;
    u16        u_var2;
    u16        uVar3;
    u32        uStack10;
    u32        u_stack6;

    uVar3 = (param_1 >> 0x10);
    u_var2 = param_1;
    uVar1 = (u_var2 + 0x108);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    u_stack6 = str_var1(param_3, param_2);
    uVar1   = (u_var2 + 0x10c);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    uStack10 = str_var1(param_3, param_2);
    pass1_1038_2c82(u_var2, uVar3, *(u_var2 + 0x110),
                    str_var1(param_3, param_2), u_stack6, param_4, param_5, SEG_1028, param_6, param_7);
    pass1_1038_2c82(u_var2, uVar3, *(u_var2 + 0x114), u_stack6, uStack10, param_4, param_5, SEG_1028, param_6, param_7);
    return 0x1;
}


u16  pass1_1038_2b2e(u32 param_1, u16 param_2, u16 param_3) {
    u32 uVar1;
    u16        u_var2;
    u16        unaff_SI;
    u16        unaff_DI;
    u16        uVar3;
    u16        unaff_SS;
    u32        u_stack6;

    uVar3 = (param_1 >> 0x10);
    u_var2 = param_1;
    uVar1 = (u_var2 + 0x108);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    u_stack6 = str_var1(param_3, param_2);
    uVar1   = (u_var2 + 0x10c);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    pass1_1038_2f92(u_var2, uVar3, *(u_var2 + 0x110),
                    str_var1(param_3, param_2), unaff_SI, unaff_DI, unaff_SS);
    pass1_1038_2f92(u_var2, uVar3, *(u_var2 + 0x114), u_stack6, unaff_SI, unaff_DI, unaff_SS);
    return 0x1;
}


void  pass1_1038_2f92(u16 param_1, u16 param_2, u32 param_3, u32 param_4, u16 param_5, u16 param_6, u16 param_7) {
    u16       *puVar1;
    i16       *piVar2;
    i16        iVar3;
    u16        uVar4;
    u16        uVar5;
    u32        uVar6;
    u32 uVar7;
    i16        iVar8;
    i16        iVar9;
    u16        uVar10;
    u16        uVar11;
    i16        iStack10;

    uVar10 = (param_4 >> 0x10);
    iVar8  = param_4;
    uVar6  = *(iVar8 + 0x200);
    uVar11 = (param_3 >> 0x10);
    iVar9  = param_3;
    iVar3  = (iVar9 + 0xc);
    if(iVar3 == 0x1) {
        uVar7 = (iVar9 + 0x8);
        pass1_1038_3cc0(param_4, uVar7, (uVar7 >> 0x10), (iVar9 + 0xe), param_5, param_6, param_7);
        return;
    }
    if(iVar3 == 0x4) {
        pass1_1030_355c(*(iVar8 + 0x1f6), *(iVar9 + 0x10));
        return;
    }
    if(iVar3 == 0x5) {
        if((iVar9 + 0xe) != 0xc) {
            pass1_1038_5798(param_4, (iVar9 + 0x8), (iVar9 + 0xe));
            return;
        }
        iStack10 = uVar6;
        if((iStack10 == 0x1) && ((uVar6 & 0xff0000) == 0x0)) {
            uVar7   = (iVar8 + 0x1f6);
            uVar4   = (iVar9 + 0x8);
            iVar3   = (iVar9 + 0xa);
            uVar10  = (uVar7 >> 0x10);
            iVar8   = uVar7;
            puVar1  = (iVar8 + 0x170);
            uVar5   = *puVar1;
            *puVar1 = *puVar1 + uVar4;
            piVar2  = (iVar8 + 0x172);
            *piVar2 = *piVar2 + iVar3 + CARRY2(uVar5, uVar4);
            return;
        }
    }
    return;
}


void  pass1_1038_1a30(u16 param_1, u16 param_2, u32 param_3, u16 param_4) {
    u32 *puVar1;
    void **ppcVar2;
    u16         uVar3;
    u32         uVar4;
    u16         extraout_DX;
    u16         extraout_DX_00;
    u16         uVar5;
    u16         uVar6;
    u16         uVar7;
    u32         uStack18;
    u32         uStack10;
    u16         u_stack6;

    uVar5   = (param_3 >> 0x10);
    puVar1  = (param_3 + 0x1e);
    uVar7   = (param_3 + 0x20);
    u_stack6 = puVar1;
    uVar3   = uVar7 | u_stack6;
    if(uVar3 != 0x0) {
        ppcVar2 = (*puVar1 + 0x10);
        uVar6   = u_stack6;
        (**ppcVar2)();
        uStack10 = str_var1(extraout_DX, uVar3);
        for(uStack18 = 0x0; uStack18 < uStack10; uStack18 = uStack18 + 0x1) {
            ppcVar2 = (*puVar1 + 0x4);
            uVar4   = uStack10;
            (**ppcVar2)(param_4, u_stack6, (puVar1 >> 0x10), uStack18, uVar6, uVar7);
            if((extraout_DX_00 | uVar4) != 0x0) {
                param_4 = SEG_1028;
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar4, extraout_DX_00);
            }
        }
        return;
    }
    return;
}


void  pass1_1038_1ac6(u16 param_1, u16 param_2, u32 param_3, u32 param_4, i16 param_5, u16 param_6, u8 param_7) {
    u16        extraout_DX;
    u8         local_118[0x112];
    u32 u_stack6;

    pass1_1028_b58e(param_3);
    u_stack6 = str_var1(extraout_DX, param_5);
    pass1_1030_e8a0((Struct100 *)str_var1(param_6, local_118), param_4, (param_3 + 0xc), *(param_5 + 0x4), param_6, param_7);
    pass1_1028_d52c(*_PTR_LOOP_1050_5748, *_PTR_LOOP_1050_65e2 + 0x1, str_var1(param_6, local_118));
    return;
}


void  pass1_1038_0000(u32 param_1, u16 param_2, u8 *param_3) {
    u32 *puVar1;
    u32 *pu_var2;
    u32 *puVar3;
    i16         iVar4;
    u32 *puVar5;
    u16         uVar6;
    u16        *puStack10;

    // Segment:    8
    // Offset:     000606c0
    // Length:     ef91
    // Min Alloc:  ef91
    // Flags:      0d50
    //     Code
    //     Moveable
    //     Preload
    //     Impure (Non-shareable)
    //
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
        *puStack10 = 0xb96;
        (param_2 + 0x2) = SEG_1038;
    }
    return;
}


void  pass1_1038_08d4(u16 param_1, long param_2, u32 param_3, u32 param_4, u16 param_5, u8 param_6) {
    u16 *puVar1;
    u16  u_var2;
    u16  uVar3;
    u16  local_16;
    u16  uStack20;
    i16  iStack4;

    iStack4 = 0x0;
    pass1_1028_dc52((Struct92 *)str_var1(param_5, &local_16), 0x1, 0x0, 0x400);
    do {
        puVar1 = &local_16;
        pass1_1028_e4ec(str_var1(param_5, puVar1));
        u_var2   = param_4;
        uVar3   = u_var2 | puVar1;
        param_4 = param_4 & 0xffff0000 | uVar3;
        if(uVar3 == 0x0)
            goto LAB_1038_0917;
    } while((puVar1 + 0x100) != 0x8000002);
    iStack4 = 0x1;
LAB_1038_0917:
    local_16 = addr_table_1008_380a[36]; // 0x389a
    uStack20 = SEG_1008;
    if(iStack4 != 0x0) {
        if(param_2 < 0xc90000) {
            pass1_1038_0340(param_1, param_2, param_2, param_3, uVar3, param_5, param_6);
            return;
        }
        if(0x31fffff < param_2) {
            pass1_1038_05d8(param_1, param_2, param_2, param_3, param_4, param_5, param_6);
        }
    }
    return;
}


void  pass1_1038_0c00(u32 param_1, u32 param_2, u16 param_3, u16 param_4, u16 param_5, u8 param_6) {
    void **ppcVar1;
    u32  u_var2;
    u8         *puVar3;
    u16         uVar4;
    u16         uVar5;
    u16         uVar6;
    u8         *puVar7;
    u8         *puVar8;
    u32         uVar9;
    u16         uVar10;
    u32        *puVar11;
    u32 *puStack32;
    u32         uStack24;
    u8          local_14[0x12];

    pass1_1028_dc52((Struct92 *)CONCAT13((param_5 >> 0x8), CONCAT12(param_5, local_14)), 0x1, 0x0, 0x400);
    while(true) {
        puVar3 = local_14;
        pass1_1028_e4ec(str_var1(param_5, puVar3));
        uVar6    = param_2;
        uStack24 = str_var1(uVar6, puVar3);
        uVar9    = param_2 & 0xffff0000 | (uVar6 | puVar3);
        if((uVar6 | puVar3) == 0x0)
            break;
        pass1_1038_0e78(param_1, str_var1(uVar6, puVar3), param_5);
        pass1_1038_1220(param_1, str_var1(uVar6, puVar3), uVar9, param_5);
        uVar10  = (uVar9 >> 0x10);
        puVar11 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x1);
        puVar7  = (puVar11 >> 0x10);
        uVar4   = puVar11;
        pass1_1038_4d6e(str_var1(uVar6, puVar3), puVar11, uVar4, puVar7);
        puStack32 = str_var1(puVar7, uVar4);
        ppcVar1   = (*puStack32 + 0x10);
        uVar5     = uVar4;
        puVar8    = puVar7;
        (**ppcVar1)(SEG_1008, uVar4, puVar7);
        param_2 = str_var1(uVar10, puVar8 | uVar5);
        if((puVar8 | uVar5) != 0x0) {
            u_var2 = (param_1 + 0x108);
            if((u_var2 + 0x82) != 0x0) {
                pass1_1038_19a0(param_1,
                                str_var1(puVar7, uVar4),
                                str_var1(uVar6, puVar3), param_5, param_6);
            }
            pass1_1038_1940(param_1, str_var1(puVar7, uVar4), uStack24, param_3, param_4, param_5);
        }
        if(puStack32 != 0x0) {
            ppcVar1 = *puStack32;
            (**ppcVar1)(0x8, uVar4, puVar7, 0x1);
        }
        pass1_1038_1c3e(param_1, uStack24, param_3, param_4, SEG_1008, param_5);
    }
    return;
}


void  pass1_1038_0d8e(u16 param_1, u16 param_2, u32 param_3, u32 param_4, u16 param_5) {
    u16  uVar1;
    u16  u_var2;
    u16  uVar3;
    long lStack10;
    u16  uStack4;

    uVar1    = pass1_1030_d0a8(param_4);
    u_var2    = pass1_1030_d144(param_4);
    lStack10 = (long)u_var2;
    u_var2    = u_var2 >> 0xf | u_var2;
    uStack4  = uVar1;
    if(u_var2 != 0x0) {
        do {
            uVar3 = pass1_1028_6744(param_5, param_3, uStack4);
            u_var2 = u_var2 | uVar3;
            if(u_var2 != 0x0) {
                pass1_1028_6228(param_3, 0x1, 0x0, uStack4, param_5);
                lStack10 = lStack10 + -0x1;
                pass1_1030_d180(param_4, uStack4);
            }
            if(lStack10 == 0x0) {
                return;
            }
            uStack4 = pass1_1030_d0a8(param_4);
        } while(uStack4 != uVar1);
    }
    return;
}


void  pass1_1030_df0c(u32 param_1, u16 param_2) {
    u32 uVar1;
    u32        u_var2;
    long       lVar3;
    u16        uVar4;
    i16        iVar5;
    u32        uVar6;
    u16        extraout_DX;
    u16        uVar7;
    u16        uVar8;
    u16        uVar9;
    u16        uVar10;
    u16        uStack24;
    u16        uStack22;
    u16        uStack14;
    u16        uStack10;

    pass1_1028_b58e(param_1);
    uVar1    = (param_2 + 0x2e);
    uStack10 = uVar1;
    if(((param_2 + 0x30) | uStack10) != 0x0) {
        uVar9    = (uVar1 >> 0x10);
        uVar1    = (uStack10 + 0x210);
        uVar7    = (uStack10 + 0x212);
        uStack14 = uVar1;
        if((uVar7 | uStack14) != 0x0) {
            u_var2 = *(uStack14 + 0xa);
            uVar4 = pass1_1030_dfcc(param_1);
            if(uVar4 != 0x0) {
                uStack24 = 0x1;
                uStack22 = 0x0;
                while(str_var1(uStack22, uStack24) < u_var2) {
                    uVar6  = u_var2;
                    uVar10 = uVar4;
                    bad_1030_1312();
                    uVar8 = uVar7;
                    iVar5 = pass1_1030_cde8(uVar6, uVar7, uVar10);
                    if(-0x1 < iVar5) {
                        pass1_1030_cef8(uVar6 & 0xffff | uVar7 << 0x10,
                                        str_var1(extraout_DX, param_2), 0x1, iVar5);
                        (param_1 + 0x20) = (uVar6 + 0x4);
                        return;
                    }
                    lVar3    = str_var1(uStack22, uStack24) + 0x1;
                    uStack24 = lVar3;
                    uVar7    = uVar8;
                    uStack22 = (lVar3 >> 0x10);
                }
            }
        }
    }
    return;
}


void  pass1_1030_e0d4(u8 *param_1, u16 param_2, i16 param_3) {
    i16       *pi_var1;
    u32 u_var2;
    u16        uVar3;
    u8        *puVar4;
    u8        *puVar5;
    u16        uVar6;
    u16        extraout_DX;
    u8        *puVar7;
    u8        *puVar8;
    i16        iVar9;
    u16        uVar10;
    u16       *puVar11;
    u32 uStack42;
    u8         local_1c[0x8];
    u32 uStack20;
    u16        uStack16;
    u32 uStack14;
    u32        uStack10;
    i16        iStack6;
    u16        uStack4;

    puVar11  = mixed_1010_20ba(globals->u16_1050_0ed0, 0x40, param_2, param_1, param_3);
    uStack4  = (puVar11 >> 0x10);
    iStack6  = puVar11;
    uStack10 = pass1_1008_b820(puVar11, iStack6, uStack4);
    uVar3    = uStack10;
    uVar6    = (uStack10 >> 0x10) | uVar3;
    if(uVar6 != 0x0) {
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, 0x1, 0x800);
        uStack14 = str_var1(uVar6, uVar3);
        uStack16 = ((uVar3 + 0x154) != 0x0);
        pass1_1008_5784(str_var1(param_2, local_1c), uStack10);
        while(true) {
            puVar4 = local_1c;
            pass1_1008_5b12(puVar4, param_2);
            uStack20 = str_var1(extraout_DX, puVar4);
            puVar7   = (extraout_DX | puVar4);
            if(puVar7 == 0x0)
                break;
            if((puVar4 + 0x8) != 0x0) {
                u_var2 = (puVar4 + 0xa);
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
                puVar8 = puVar7;
                puVar5 = puVar4;
                pass1_1038_354a(str_var1(puVar7, puVar4), puVar4, puVar7);
                if(puVar5 != 0x0) {
                    uVar10 = (uStack20 >> 0x10);
                    if(uStack16 == 0x0) {
                        iVar9    = (uStack20 + 0xe) * 0xc;
                        uStack42 = (iVar9 + 0x58c4);
                        uVar3    = (iVar9 + 0x58c8);
                    } else {
                        iVar9    = (uStack20 + 0xe) * 0xc;
                        uStack42 = (iVar9 + 0x58be);
                        uVar3    = (iVar9 + 0x58c2);
                    }
                    uVar6 = uVar3;
                    pass1_1038_35a8(str_var1(puVar7, puVar4), ((uStack20 + 0x10) * 0x2 + uStack42), uVar3, puVar8);
                    if(uVar6 != 0x0) {
                        uVar10  = (uStack20 >> 0x10);
                        iVar9   = uStack20;
                        pi_var1  = (iVar9 + 0x10);
                        *pi_var1 = *pi_var1 + 0x1;
                        if(uVar3 <= (iVar9 + 0x10)) {
                            (iVar9 + 0x10) = 0x0;
                        }
                    }
                }
            }
        }
    }
    return;
}


u16  pass1_1030_e328(u32 param_1, u16 param_2, u16 param_3, u16 param_4, u8 param_5) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x110) == 0x0) {
        pass1_1030_e4ba(param_1);
    } else {
        pass1_1030_e410(param_4, param_2, param_5, param_3, param_1 & 0xffff | uVar1 << 0x10);
    }
    return 0x1;
}


void  pass1_1030_e410(u16 param_1, u16 param_2, u8 param_3, u16 param_4, u32 param_5) {
    u32 uVar1;
    u8        *pu_var2;
    u16        uVar3;
    u16       *puVar4;
    u8         local_10[0x6];
    u8         local_a[0x4];
    u16        u_stack6;
    u16        uStack4;

    uVar1 = (param_5 + 0x10c);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    pu_var2 = (param_4 | param_2);
    if(pu_var2 != 0x0) {
        u_stack6 = param_2;
        uStack4 = param_4;
        pass1_1038_4fd8(param_2, str_var1(param_4, param_2), 0x21);
        if(param_2 == 0x0) {
            pass1_1020_a43e(param_1, pu_var2, str_var1(param_1, local_a));
            puVar4 = pass1_1008_3e54(str_var1(param_1, local_10), 0x0, 0x2, 0xfffd);
            uVar3  = (puVar4 >> 0x10);
            pass1_1020_a49a(param_1, param_3, uVar3,
                            str_var1(param_1, local_a),
                            str_var1(param_1, local_10), 0x7a);
            pass1_1008_3e76(str_var1(param_1, local_10), 0x0, 0x3, 0xfffe);
            pass1_1020_a49a(param_1, param_3, uVar3,
                            str_var1(param_1, local_a),
                            str_var1(param_1, local_10), 0x7a);
            pass1_1008_3e76(str_var1(param_1, local_10), 0x0, 0x3, 0xfffd);
            pass1_1020_a49a(param_1, param_3, uVar3,
                            str_var1(param_1, local_a),
                            str_var1(param_1, local_10), 0x21);
        }
    }
    return;
}


void  pass1_1030_e4ba(void) {
    return;
}


u16  pass1_1030_e540(void) {
    return 0x1;
}


u16  pass1_1030_e546(u32 param_1, u16 param_2) {
    u32 uVar1;

    uVar1 = (param_1 + 0x108);
    pass1_1028_e332(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10), param_2);
    return 0x1;
}


u16  pass1_1030_e7d0(void) {
    return 0x1;
}


u16  pass1_1030_eb86(u16 param_1, u16 param_2) {
    i16         iVar1;
    void **ppcVar2;
    u8         *puVar3;
    u16         uVar4;
    u16         extraout_DX;
    u32 *puStack24;
    u8          local_14[0x12];

    pass1_1028_dc52((Struct92 *)str_var1(param_2, local_14), 0x1, 0x0, 0x700);
    while(true) {
        uVar4  = param_1;
        puVar3 = local_14;
        pass1_1028_e4ec(str_var1(param_2, puVar3));
        puStack24 = str_var1(uVar4, puVar3);
        param_1   = uVar4 | puVar3;
        if(param_1 == 0x0)
            break;
        if((puVar3 + 0x12) == 0x5) {
            iVar1 = (puVar3 + 0xc);
            if(((0x32 < iVar1) && (!SBORROW2(iVar1, 0x33))) && ((iVar1 == 0x34 || iVar1 + -0x33 < 0x1 || ((0x2b < iVar1 + -0x34 && (iVar1 + -0x60 < 0x2)))))) {
                ppcVar2 = (*puStack24 + 0x2c);
                (**ppcVar2)(SEG_1028);
                param_1 = extraout_DX;
            }
        }
    }
    return 0x1;
}


void  pass1_1030_ecf8(u32 param_1, u32 param_2, i16 param_3, u16 param_4, u8 param_5) {
    i16         iVar1;
    u32 *pu_var2;
    void **ppcVar3;
    u16         uVar4;
    u32         uVar5;
    u8         *puVar6;
    i16         iVar7;
    u32         uVar8;
    u16         uVar9;
    u16         uVar10;
    u16         uVar11;
    u16         uVar12;
    u32         uVar13;
    u16         uVar14;
    bool        bVar15;
    u16        *puVar16;
    u32 *puVar17;
    u16         uVar18;
    u32         u_stack64;
    i16         iStack56;
    u16         uStack54;
    u32         uStack38;
    u8          local_22[0x12];
    u16         uStack16;
    u16         uStack14;
    u16         uStack12;
    u16         uStack10;
    u16         uStack8;
    u16         u_stack6;
    u16         uStack4;

    uStack12 = 0x0;
    puVar16  = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_4, param_2, param_3);
    uVar13   = param_2 & 0xffff0000 | puVar16 >> 0x10;
    uStack10 = puVar16;
    uStack4  = (puVar16 >> 0x10);
    u_stack6  = uStack10;
    pass1_1010_ed3e(puVar16);
    uStack8 = uVar13;
    uVar13  = uVar13 & 0xffff0000 | (uStack8 | uStack10);
    if((uStack8 | uStack10) != 0x0) {
        uStack12 = pass1_1030_2aaa(str_var1(uStack8, uStack10));
    }
    if(uStack12 < 0x2) {
        uStack12 = 0x0;
    }
    puVar16  = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_4, uVar13, param_3);
    uVar13   = uVar13 & 0xffff0000 | puVar16 >> 0x10;
    uStack16 = SUB42(puVar16, 0x0);
    uStack14 = (puVar16 >> 0x10);
    if((0x0 < globals->PTR_LOOP_1050_13ae) && (!SBORROW2(globals->PTR_LOOP_1050_13ae, 0x1))) {
        if(globals->PTR_LOOP_1050_13ae == &PTR_LOOP_1050_0002 || (globals->PTR_LOOP_1050_13ae + -0x1) < 0x1) {
            if(0x6 < uStack12) {
                uStack12 = uStack12 - 0x2;
                goto LAB_1030_ed5b;
            }
            bVar15 = SBORROW2(uStack12, 0x4);
            iVar1  = uStack12 - 0x4;
        } else {
            if(globals->PTR_LOOP_1050_13ae != (&PTR_LOOP_1050_0002 + 0x1))
                goto LAB_1030_ed5b;
            bVar15 = SBORROW2(uStack12, 0x7);
            iVar1  = uStack12 - 0x7;
        }
        if(bVar15 == iVar1 < 0x0) {
            uStack12 = uStack12 - 0x1;
        }
    }
LAB_1030_ed5b:
    pass1_1028_dc52((Struct92 *)CONCAT13((param_4 >> 0x8), CONCAT12(param_4, local_22)), 0x1, 0x0, 0x400);
    while(true) {
        puVar6 = local_22;
        pass1_1028_e4ec(str_var1(param_4, puVar6));
        uVar9    = uVar13;
        uStack38 = str_var1(uVar9, puVar6);
        if((uVar9 | puVar6) == 0x0)
            break;
        uVar10 = (puVar6 + 0x1f6);
        uVar13 = uVar13 & 0xffff0000 | (puVar6 + 0x1f8);
        if(((puVar6 + 0x1fe) != 0x0) && ((puVar6 + 0x200) != 0x8000002)) {
            pass1_1030_38b8();
            uVar10 = uVar13 | uVar10;
            uVar8  = uVar13 & 0xffff0000;
            uVar13 = uVar8 | uVar10;
            if(uVar10 != 0x0) {
                pu_var2  = (puVar6 + 0xc);
                uVar10  = (puVar6 + 0xe);
                uVar8   = uVar8 | uVar10;
                ppcVar3 = (*pu_var2 + 0x10);
                puVar17 = pu_var2;
                (**ppcVar3)(SEG_1028, pu_var2, uVar10);
                uVar5    = puVar17 & 0xffff | uVar8 << 0x10;
                uStack54 = (puVar6 + 0x18);
                uVar14   = SUB42(SEG_1038, 0x0);
                pass1_1038_4760(str_var1(uVar9, puVar6));
                iVar1    = (puVar6 + 0x22);
                iStack56 = iVar1 / 0xa;
                uVar13   = uVar8 & 0xffff0000 | (long)iVar1 % 0xa & 0xffffU;
                iVar1    = (puVar6 + 0x24);
                if(iVar1 < 0x33) {
                    if(iVar1 < 0x32) {
                        iStack56 = iStack56 + -0x1;
                    }
                } else {
                    uStack54 = uStack54 + 0x1;
                }
                for(u_stack64 = 0x0; u_stack64 < uVar5; u_stack64 = u_stack64 + 0x1) {
                    ppcVar3 = (*pu_var2 + 0x4);
                    uVar8   = uVar5;
                    (**ppcVar3)(uVar14, pu_var2, (pu_var2 >> 0x10), u_stack64, (u_stack64 >> 0x10));
                    uVar10 = uVar8;
                    uVar11 = uVar13;
                    uVar12 = uVar11 | uVar10;
                    uVar13 = uVar13 & 0xffff0000 | uVar12;
                    if(uVar12 != 0x0) {
                        uVar14 = SUB42(SEG_1028, 0x0);
                        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar10, uVar11);
                        puVar17 = struct_op_1030_73a8(str_var1(uVar13, uVar10));
                        uVar10  = puVar17;
                        uVar11  = (puVar17 >> 0x10);
                        uVar13  = uVar13 & 0xffff0000 | (uVar11 | uVar10);
                        if(((uVar11 | uVar10) != 0x0) && ((uVar10 + 0x12) == 0x5)) {
                            ppcVar3 = (*puVar17 + 0x48);
                            (**ppcVar3)(SEG_1028, uVar10, uVar11);
                            if(uVar10 < 0x0) {
                                iStack56 = iStack56 + uVar10;
                            } else {
                                uStack54 = uStack54 + uVar10;
                            }
                        }
                    }
                }
                iStack56 = iStack56 - uStack12;
                iVar1    = (puVar6 + 0x20a);
                uVar18   = (param_1 >> 0x10);
                uVar4    = param_1;
                iVar7    = iVar1;
                pass1_1038_01c0(uVar4, uVar18, uStack38, param_4);
                iVar7    = iVar7 - iVar1;
                iStack56 = iStack56 - iVar7;
                pass1_1038_008e(uVar4, uVar18, uStack38, uVar13, param_3, param_4);
                if(iVar7 < 0x0) {
                    iStack56 = iStack56 + iVar7;
                } else {
                    uStack54 = uStack54 + iVar7;
                }
                if(0x3e8 < uStack54) {
                    uStack54 = 0x3e8;
                }
                if(uStack54 < 0x0) {
                    uStack54 = 0x0;
                }
                uStack54 = uStack54 + iStack56;
                if(0x3e8 < uStack54) {
                    uStack54 = 0x3e8;
                }
                if(uStack54 < 0x0) {
                    uStack54 = 0x0;
                }
                pass1_1038_4d0e(uStack38, uStack54);
                if((puVar6 + 0x4) == 0x4000001) {
                    pass1_1038_08d4(uVar4,
                                    str_var1(uStack54, uVar18), uStack38, uVar13, param_4, param_5);
                }
                pass1_1038_095e(uVar4, uVar18, uStack54, uStack38, uVar13, param_3, param_4);
            }
        }
    }
    return;
}


i16  pass1_1030_cde8(i16 param_1, u16 param_2, i16 param_3) {
    i16 iVar1;
    i16 iStack4;

    iStack4 = 0x0;
    while(true) {
        if(0x9 < iStack4) {
            return -0x1;
        }
        iVar1 = iStack4 * 0xc + param_1;
        if(((iVar1 + 0x24) == param_3) && ((iVar1 + 0x26) == 0x0))
            break;
        iStack4 = iStack4 + 0x1;
    }
    return iStack4;
}


i16  pass1_1030_ce2e(i16 param_1, u16 param_2, i16 param_3) {
    i16        iVar1;
    u32 u_stack6;

    for(u_stack6 = 0x0; u_stack6 < 0xa; u_stack6 = u_stack6 & 0xffff0000 | (u_stack6 + 0x1)) {
        iVar1 = u_stack6 * 0xc + param_1;
        if(((iVar1 + 0x24) == param_3) && ((iVar1 + 0x26) == 0x0)) {
            u_stack6 = u_stack6 & 0xffff | (u_stack6 + 0x1) << 0x10;
        }
    }
    return u_stack6;
}


void  pass1_1030_ce72(u32 param_1, i16 param_2, u32 param_3, i16 param_4) {
    long         lVar1;
    Struct300 *iVar2;
    i16          iStack10;

    lVar1    = (param_3 + 0x4);
    iStack10 = 0x0;
    do {
        if(0x9 < iStack10) {
            return;
        }
        iVar2 = (Struct300 *)(iStack10 * 0xc + param_1);
        if((iVar2->field_0x24 == param_4) && (iVar2->field_0x28 == 0x0)) {
            iVar2->field_0x28 = lVar1;
            if(param_4 == 0x4) {
                iVar2->field_0x26 = 0x2;
            } else {
                (param_1 + iStack10 * 0xc + 0x26) = 0x1;
            }
            param_2 = param_2 + -0x1;
            if(param_2 == 0x0) {
                return;
            }
        }
        iStack10 = iStack10 + 0x1;
    } while(true);
}


void  pass1_1030_cef8(u32 param_1, u32 param_2, u16 param_3, i16 param_4) {
    u16 uVar1;
    i16 iVar2;
    u16 uVar3;
    u16 uVar4;

    uVar3                          = (param_1 >> 0x10);
    iVar2                          = param_1;
    (iVar2 + param_4 * 0xc + 0x26) = param_3;
    uVar4                          = (param_2 >> 0x10);
    uVar1                          = (param_2 + 0x6);
    (iVar2 + param_4 * 0xc + 0x28) = (param_2 + 0x4);
    (iVar2 + param_4 * 0xc + 0x2a) = uVar1;
    return;
}


u16  pass1_1030_cf3a(u32 param_1, i16 param_2) {
    i16 iStack4;

    iStack4 = 0x0;
    while(true) {
        if(0x9 < iStack4) {
            return 0x0;
        }
        if((param_1 + iStack4 * 0xc + 0x24) == param_2)
            break;
        iStack4 = iStack4 + 0x1;
    }
    return 0x1;
}


void  pass1_1030_cf78(u32 param_1, u16 param_2) {
    u32          uVar1;
    u16          extraout_DX;
    Struct680 *iVar3;
    u16          u_var2;
    i16          iStack4;

    iStack4 = 0x0;
    while(true) {
        if(0x9 < iStack4) {
            return;
        }
        uVar1 = param_2;
        u_var2 = (param_1 >> 0x10);
        if((param_1 + iStack4 * 0xc + 0x24) == param_2)
            break;
        iStack4 = iStack4 + 0x1;
    }
    pass1_1028_b58e(param_1);
    if(param_2 == 0x5) {
        pass1_1038_4900(*(uVar1 + 0x2e));
    } else {
        pass1_1030_6e9c(uVar1 & 0xffff | extraout_DX << 0x10, 0x1, param_2);
    }
    iVar3             = (Struct680 *)(iStack4 * 0xc + param_1);
    iVar3->field_0x20 = 0x0;
    iVar3->field_0x24 = 0x0;
    iVar3->field_0x26 = 0x0;
    return;
}


void  pass1_1030_d00c(i16 param_1, u16 param_2, u16 param_3) {
    u32          uVar1;
    u16          extraout_DX;
    Struct696 *local_BX_40;
    i16          iVar2;
    i16          iStack4;

    iStack4 = 0x0;
    while(true) {
        if(0x9 < iStack4) {
            return;
        }
        iVar2 = iStack4 * 0xc + param_1;
        if(((iVar2 + 0x26) == 0x0) && (uVar1 = param_3, (iVar2 + 0x24) == param_3))
            break;
        iStack4 = iStack4 + 0x1;
    }
    pass1_1028_b58e(str_var1(param_2, param_1));
    if(param_3 == 0x5) {
        pass1_1038_4900(*(uVar1 + 0x2e));
    } else {
        pass1_1030_6e9c(uVar1 & 0xffff | extraout_DX << 0x10, 0x1, param_3);
    }
    local_BX_40             = (Struct696 *)(iStack4 * 0xc + param_1);
    local_BX_40->field_0x20 = 0x0;
    local_BX_40->field_0x24 = 0x0;
    local_BX_40->field_0x26 = 0x0;
    return;
}


u16  pass1_1030_d0a8(u32 param_1) {
    u16 uVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    uVar1 = (param_1 + 0x98);
    pass1_1030_d56a(param_1 & 0xffff | u_var2 << 0x10);
    return uVar1;
}


i16  pass1_1030_d0c6(u32 param_1) {
    u32 u_stack6;

    for(u_stack6 = 0x0; u_stack6 < 0xa; u_stack6 = u_stack6 & 0xffff0000 | (u_stack6 + 0x1)) {
        if((param_1 + u_stack6 * 0xc + 0x20) != 0x0) {
            u_stack6 = u_stack6 & 0xffff | (u_stack6 + 0x1) << 0x10;
        }
    }
    return u_stack6;
}


i16  pass1_1030_d102(i16 param_1, u16 param_2) {
    i16        iVar1;
    u32 u_stack6;

    for(u_stack6 = 0x0; u_stack6 < 0xa; u_stack6 = u_stack6 & 0xffff0000 | (u_stack6 + 0x1)) {
        iVar1 = u_stack6 * 0xc + param_1;
        if(((iVar1 + 0x20) != 0x0) && ((iVar1 + 0x26) != 0x0)) {
            u_stack6 = u_stack6 & 0xffff | (u_stack6 + 0x1) << 0x10;
        }
    }
    return u_stack6;
}


i16  pass1_1030_d144(u32 param_1) {
    u32 u_stack6;

    for(u_stack6 = 0x0; u_stack6 < 0xa; u_stack6 = u_stack6 & 0xffff0000 | (u_stack6 + 0x1)) {
        if((param_1 + u_stack6 * 0xc + 0x20) == 0x0) {
            u_stack6 = u_stack6 & 0xffff | (u_stack6 + 0x1) << 0x10;
        }
    }
    return u_stack6;
}


void  pass1_1030_d180(u32 param_1, u16 param_2) {
    i16 iVar1;
    u16 u_var2;
    u8 *extraout_DX;
    u16 uVar3;
    i16 iVar4;
    u16 uVar5;
    i16 iStack4;

    iStack4 = 0x0;
    while(true) {
        if(0x9 < iStack4) {
            return;
        }
        uVar5 = (param_1 >> 0x10);
        uVar3 = param_1;
        if(((uVar3 + iStack4 * 0xc + 0x22) | (uVar3 + iStack4 * 0xc + 0x20)) == 0x0)
            break;
        iStack4 = iStack4 + 0x1;
    }
    u_var2          = *_PTR_LOOP_1050_65e2;
    iVar1          = (globals->_PTR_LOOP_1050_65e2 + 0x2);
    iVar4          = iStack4 * 0xc + uVar3;
    (iVar4 + 0x20) = u_var2 + 0xc8;
    (iVar4 + 0x22) = iVar1 + (0xff37 < u_var2);
    (iVar4 + 0x24) = param_2;
    u_var2          = param_2;
    pass1_1030_d340(uVar3, uVar5, param_1 & 0xffff0000 | (iVar4 + 0x20));
    pass1_1028_b58e(param_1);
    if(param_2 == 0x5) {
        pass1_1038_48e0(*(u_var2 + 0x2e), 0x1);
        return;
    }
    pass1_1030_7c50(str_var1(extraout_DX, u_var2), 0x1, param_2, u_var2, extraout_DX);
    return;
}


u16  pass1_1030_d230(u32 param_1) {
    i16 iStack4;

    iStack4 = 0x0;
    while(true) {
        if(0x9 < iStack4) {
            return 0x1;
        }
        if((param_1 + iStack4 * 0xc + 0x20) == 0x0)
            break;
        iStack4 = iStack4 + 0x1;
    }
    return 0x0;
}


void  pass1_1030_d26c(u32 param_1, u16 param_2) {
    u32 *puVar1;
    u32  u_var2;
    i16  iVar3;
    u32  uVar4;
    u16  extraout_DX;
    i16  iVar5;
    i16  iStack8;

    u_var2 = *_PTR_LOOP_1050_65e2;
    for(iStack8 = 0x0; iStack8 < 0xa; iStack8 = iStack8 + 0x1) {
        iVar5 = iStack8 * 0xc + param_1;
        if((((iVar5 + 0x22) | (iVar5 + 0x20)) != 0x0) && (puVar1 = (iVar5 + 0x20), *puVar1 < u_var2 || *puVar1 == u_var2)) {
            uVar4 = u_var2;
            pass1_1030_d3b2(param_1, param_1, iStack8, u_var2, param_2);
            iVar3 = uVar4;
            if(iVar3 == 0x0) {
                pass1_1028_b58e(param_1);
                if((iVar5 + 0x24) == 0x5) {
                    pass1_1038_4900(*(iVar3 + 0x2e));
                } else {
                    pass1_1030_6e9c(str_var1(extraout_DX, iVar3), 0x1, (param_1 + iStack8 * 0xc + 0x24));
                }
                iVar5          = iStack8 * 0xc + param_1;
                (iVar5 + 0x20) = 0x0;
                (iVar5 + 0x24) = 0x0;
                (iVar5 + 0x26) = 0x0;
            }
        }
    }
    return;
}


void  pass1_1030_d340(u16 param_1, u16 param_2, u32 param_3) {
    i16 iVar1;
    i16 iVar2;
    u16 uVar3;

    uVar3 = (param_3 >> 0x10);
    iVar2 = param_3;
    iVar1 = (iVar2 + 0x4);
    if(((0x0 < iVar1) && (!SBORROW2(iVar1, 0x1))) && ((iVar1 == 0x4 || iVar1 + -0x1 < 0x3 || (iVar1 == 0xc)))) {
        (iVar2 + 0x6) = 0x0;
        return;
    }
    (iVar2 + 0x6) = 0x1;
    return;
}


u16  pass1_1030_d36e(u32 param_1, i16 param_2) {
    i16 iStack4;

    iStack4 = 0x0;
    while(true) {
        if(0x9 < iStack4) {
            return 0x0;
        }
        if((iStack4 != param_2) && ((param_1 + iStack4 * 0xc + 0x24) == 0x8))
            break;
        iStack4 = iStack4 + 0x1;
    }
    return 0x1;
}


void  pass1_1030_d3b2(i16 param_1, u16 param_2, i16 param_3, i16 param_4, u16 param_5) {
    i16         iVar1;
    void **ppcVar2;
    bool        bVar3;
    u16         uVar4;
    u16         uVar5;
    u16         extraout_DX;
    u8         *puVar6;
    u16         extraout_DX_00;
    u16         extraout_DX_01;
    u16         uVar7;
    u16         uVar8;
    u32        *puVar9;
    u32         uVar10;
    u32         uVar11;
    u32 *puStack26;
    u32         uStack18;
    u32  uStack14;

    pass1_1028_b58e(str_var1(param_2, param_1));
    uVar11 = *(param_4 + 0x2e);
    uVar4  = pass1_1030_d36e(str_var1(param_2, param_1), param_3);
    if(uVar4 == 0x0) {
        puVar9 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x1e);
        puVar6 = (puVar9 >> 0x10);
        uVar5  = puVar9;
        pass1_1038_4d6e(uVar11, puVar9, uVar5, puVar6);
        puStack26 = str_var1(puVar6, uVar5);
        ppcVar2   = (*puStack26 + 0x10);
        uVar7     = uVar5;
        (**ppcVar2)(SEG_1038, uVar5, puVar6);
        uStack18 = str_var1(extraout_DX_00, uVar7);
        bVar3    = false;
        for(uStack14 = 0x0; uStack14 < uStack18; uStack14 = uStack14 + 0x1) {
            uVar10 = pass1_1030_1d7c(uStack14, uStack14, puStack26);
            uVar7  = (uVar10 >> 0x10);
            if((((uVar7 | uVar10) != 0x0) && ((uVar10 + 0x4) != (param_1 + 0x4))) && (uVar4 = pass1_1030_cf3a(uVar10, 0x8), uVar4 != 0x0)) {
                bVar3 = true;
                break;
            }
        }
        if(puStack26 != 0x0) {
            ppcVar2 = *puStack26;
            (**ppcVar2)(0x38, uVar5, puVar6, 0x1);
        }
        if(!bVar3) {
            return;
        }
    }
    puVar9 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x4);
    puVar6 = (puVar9 >> 0x10);
    uVar5  = puVar9;
    uVar8  = SUB42(SEG_1038, 0x0);
    pass1_1038_4d6e(uVar11, puVar9, uVar5, puVar6);
    puStack26 = str_var1(puVar6, uVar5);
    ppcVar2   = (*puStack26 + 0x10);
    uVar7     = uVar5;
    (**ppcVar2)(SEG_1038, uVar5, puVar6);
    uStack18 = str_var1(extraout_DX_01, uVar7);
    bVar3    = false;
    uStack14 = 0x0;
    do {
        if(uStack18 <= uStack14) {
            LAB_1030_d51b:
            if(puStack26 != 0x0) {
                ppcVar2 = *puStack26;
                (**ppcVar2)(uVar8, uVar5, puVar6, 0x1);
            }
            if(!bVar3) {
                return;
            }
            uVar5                            = *_PTR_LOOP_1050_65e2;
            iVar1                            = (globals->_PTR_LOOP_1050_65e2 + 0x2);
            (param_1 + param_3 * 0xc + 0x20) = uVar5 + 0xc8;
            (param_1 + param_3 * 0xc + 0x22) = iVar1 + (0xff37 < uVar5);
            return;
        }
        uVar11 = pass1_1030_1d7c(uStack14, uStack14, puStack26);
        uVar7  = (uVar11 >> 0x10) | uVar11;
        if(uVar7 != 0x0) {
            uVar8 = SUB42(SEG_1028, 0x0);
            uVar4 = pass1_1028_6744(param_5, uVar11, 0x7);
            if((uVar7 | uVar4) != 0x0) {
                uVar8 = SUB42(SEG_1028, 0x0);
                pass1_1028_6228(uVar11, 0x1, 0x0, 0x7, param_5);
                bVar3 = true;
                goto LAB_1030_d51b;
            }
        }
        uStack14 = uStack14 + 0x1;
    } while(true);
}
