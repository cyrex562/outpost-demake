
#include "sys_ops_3.h"

#include "address_tables/function_tables.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_20.h"
#include "struct_ops/struct_ops_2.h"
#include "struct_ops/struct_ops_3.h"
#include "struct_ops/struct_ops_4.h"
#include "sys_ops_12.h"
#include "unk/unk_15.h"
#include "unk/unk_6.h"

void pass1_1030_1be2(u32 param_1, u16 param_2, u8 *param_3) {
    void **ppcVar1;
    u16 *pu_var2;
    u8 *puVar3;
    u8 *extraout_DX;
    u8 *extraout_DX_00;
    i16 iVar4;
    u16    uVar5;
    u32    uVar6;
    u16    uStack4;

    uVar5  = (param_1 >> 0x10);
    iVar4  = param_1;
    puVar3 = param_3;
    if((iVar4 + 0xc) == 0x0) {
        mem_op_1000_179c(0x18, param_3, 0);
        puVar3 = (param_3 | param_2);
        if(puVar3 == 0x0) {
            (iVar4 + 0xc) = 0x0;
        } else {
            struct_op_1030_1cd8(str_var1(param_3, param_2), 0x5, 0x5);
            (iVar4 + 0xc) = param_2;
            (iVar4 + 0xe) = extraout_DX;
            puVar3        = extraout_DX;
        }
    }
    for(uStack4 = 0x0; pu_var2 = *(u16 **)(iVar4 + 0x10), uStack4 <= *pu_var2 && *pu_var2 != uStack4; uStack4 = uStack4 + 0x1) {
        uVar6   = pass1_1028_e2e0(globals->_PTR_LOOP_1050_65e2, puVar3, 0x1);
        ppcVar1 = ((iVar4 + 0xc) + 0x8);
        (**ppcVar1)(SEG_1028, (iVar4 + 0xc), uVar6, (uVar6 >> 0x10), uStack4, 0x0);
        puVar3 = extraout_DX_00;
    }
    return;
}


void  pass1_1028_ef00(u16 param_1, u8 *param_2, u32 param_3, u16 param_4, u16 param_5, u16 param_6, u16 param_7) {
    u16  uVar1;
    u16 *pu_var2;

    if(param_5 == 0x4) {
        mem_op_1000_179c(0x16, param_2, 0);
        uVar1 = param_2 | param_5;
        if(uVar1 != 0x0) {
            pass1_1030_b936((Struct365 *)param_5, param_2, 0x4, _param_6, uVar1);
            goto LAB_1028_ef8b;
        }
    } else {
        if(param_5 == 0xc) {
            mem_op_1000_179c(0xe, param_2, 0);
            if((param_2 | param_5) != 0x0) {
                pu_var2  = pass1_1030_bc24(param_2 | param_5, param_5, param_2, 0xc, _param_6);
                uVar1   = (pu_var2 >> 0x10);
                param_5 = (Struct365 *)pu_var2;
                goto LAB_1028_ef8b;
            }
        } else {
            uVar1 = param_5;
            mem_op_1000_179c(0xe, param_2, 0);
            if((param_2 | uVar1) != 0x0) {
                pu_var2  = pass1_1028_b22c(
                  str_var1(param_2, uVar1), param_5, _param_6, param_2 | uVar1);
                uVar1   = (pu_var2 >> 0x10);
                param_5 = (Struct365 *)pu_var2;
                goto LAB_1028_ef8b;
            }
        }
    }
    param_5 = 0x0;
    uVar1   = 0x0;
LAB_1028_ef8b:
    pass1_1030_1358(*(param_3 + 0x22), param_5, uVar1, *(param_5 + 0x4) & 0xffff | ((param_5 + 0x6) & 0xff) << 0x10, param_1);
    return;
}


u16 * switch_1030_07ac(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5, u32 param_6, u8 *param_7, Struct179 *param_8, u16 param_9, u16 param_10, u16 param_11) {
    u16  uVar1;
    u8  *pu_var2;
    u16  uVar3;
    u16 *puVar4;

    puVar4 = str_var1(param_7, param_8);
    switch(param_4 - 0x1) {
        case 0x0:
        case 0x1:
        case 0x2:
        case 0x3:
        case 0x4:
        case 0x5:
        case 0x6:
        case 0x7:
        case 0x8:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_48c0(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x9:
            mem_op_1000_179c(0x22, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_2bfe(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0xa:
            mem_op_1000_179c(0x26, param_7, 0);
            uVar1 = param_7 | param_8;
            goto joined_r0x10300adb;
        case 0xb:
            mem_op_1000_179c(0x2c, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_3692(param_8, param_7, param_4, param_6, (param_7 | param_8), param_9, param_10);
                return puVar4;
            }
            break;
        case 0xc:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_3580(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0xd:
            mem_op_1000_179c(0x26, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_34a6(param_8, param_7, param_4, param_6, (param_7 | param_8));
                return puVar4;
            }
            break;
        case 0xe:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_408e(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0xf:
        case 0x32:
        case 0x33:
        case 0x5f:
        case 0x60:
            mem_op_1000_179c(0x24, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_0c50(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x10:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_0b64(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x11:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_4376(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x61:
        case 0x62:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_4ba6(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x15:
        case 0x16:
        case 0x17:
            mem_op_1000_179c(0x24, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_1be8(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        default:
            mem_op_1000_179c(0x20, param_7, 0);
            uVar3 = param_7 | param_8;
            if(uVar3 != 0x0) {
                pass1_1028_b39e(str_var1(param_7, param_8), param_4, param_6, uVar3);
                return str_var1(uVar3, param_8);
            }
            break;
        case 0x1a:
        case 0x1b:
        case 0x1c:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1030_be56(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x1d:
        case 0x1e:
        case 0x1f:
            mem_op_1000_179c(0x26, param_7, 0);
            pu_var2 = (param_7 | param_8);
            if(pu_var2 != 0x0) {
                pass1_1028_00cc(param_8, param_7, param_4, param_6, pu_var2);
                return str_var1(pu_var2, param_8);
            }
            break;
        case 0x20:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_50fa(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x21:
        case 0x22:
        case 0x23:
            mem_op_1000_179c(0x24, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_3ec8(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x24:
        case 0x25:
        case 0x26:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1020_d08e(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x27:
        case 0x28:
        case 0x5c:
        case 0x5d:
        case 0x5e:
            mem_op_1000_179c(0x22, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1030_c71e(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x29:
        case 0x2a:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1020_cd06(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x2b:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_26d6(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x2c:
        case 0x2d:
            mem_op_1000_179c(0x2a, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_49de(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x2e:
        case 0x2f:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1020_e81c(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x30:
        case 0x31:
        case 0x6b:
        case 0x6c:
            mem_op_1000_179c(0x22, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1020_d3a4(str_var1(param_7, param_8), param_3, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x34:
        case 0x35:
            mem_op_1000_179c(0x2c, param_7, 0);
            pu_var2 = (param_7 | param_8);
            if(pu_var2 != 0x0) {
                pass1_1028_3816(param_8, param_7, param_4, param_6, pu_var2, param_9, param_10);
                return str_var1(pu_var2, param_8);
            }
            break;
        case 0x36:
            mem_op_1000_179c(0x26, param_7, 0);
            uVar1 = param_7 | param_8;
        joined_r0x10300adb:
            if(uVar1 != 0x0) {
                pass1_1030_c09c(param_8, param_7, param_4, param_6, uVar1);
                return str_var1(uVar1, param_8);
            }
            break;
        case 0x37:
        case 0x38:
            mem_op_1000_179c(0x9a, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1030_c9e4(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x39:
        case 0x3a:
            mem_op_1000_179c(0x24, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_611e(param_8, param_7, param_4, param_6, param_8, (param_7 | param_8));
                return puVar4;
            }
            break;
        case 0x3b:
        case 0x3c:
            mem_op_1000_179c(0x24, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_44fe(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x3d:
            mem_op_1000_179c(0x22, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1020_ce08(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x3e:
            mem_op_1000_179c(0x26, param_7, 0);
            pu_var2 = (param_7 | param_8);
            if(pu_var2 != 0x0) {
                pass1_1028_1fc8(param_8, param_7, param_4, param_6, pu_var2);
                return str_var1(pu_var2, param_8);
            }
            break;
        case 0x3f:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_25fc(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x40:
            mem_op_1000_179c(0x22, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1020_ca0c(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x46:
        case 0x69:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1020_d5c8(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x47:
        case 0x48:
        case 0x49:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1020_d888(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x4b:
        case 0x4c:
        case 0x4d:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1030_d942(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x4e:
        case 0x4f:
        case 0x50:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_5c76(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x51:
        case 0x52:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_5988(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x53:
        case 0x54:
        case 0x55:
            mem_op_1000_179c(0x22, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_5f00(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x56:
        case 0x57:
        case 0x58:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_53e8(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x59:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_58a6(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x5a:
        case 0x5b:
            mem_op_1000_179c(0x26, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_5546(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x63:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_5e18(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x64:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_5a6a(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x65:
        case 0x66:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_530a(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x67:
        case 0x68:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_57c8(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x6d:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_5652(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x6f:
        case 0x70:
        case 0x71:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) == 0x0) {
                puVar4 = 0x0;
            } else {
                puVar4 = pass1_1020_d888(param_8, param_7, param_4, param_6, param_7 | param_8);
            }
        case 0x72:
        case 0x76:
            mem_op_1000_179c(0x26, (puVar4 >> 0x10), 0);
            uVar3 = (puVar4 >> 0x10);
            if(puVar4 != 0x0) {
                puVar4 = pass1_1020_e91e(puVar4, uVar3, param_4, param_6, uVar3 | puVar4);
                return puVar4;
            }
            break;
        case 0x73:
        case 0x77:
        case 0x78:
            mem_op_1000_179c(0x2c, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = struct_1020_d99e(str_var1(param_7, param_8), param_3, param_4, param_6, param_7 | param_8, param_11);
                return puVar4;
            }
            break;
        case 0x74:
            mem_op_1000_179c(0x24, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_17ae(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x75:
            mem_op_1000_179c(0x24, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_2b1c(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
            break;
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x7e:
            mem_op_1000_179c(0x20, param_7, 0);
            if((param_7 | param_8) != 0x0) {
                puVar4 = pass1_1028_2812(param_8, param_7, param_4, param_6, param_7 | param_8);
                return puVar4;
            }
    }
    return 0x0;
}


void  pass1_1028_e628(Struct349 *param_1, u16 param_2, u16 param_3, i16 param_4, i16 param_5, u16 param_6, u16 param_7, u16 param_8, u16 param_9, u8 param_10) {
    char        *pcVar1;
    i16         *piVar2;
    char         cVar3;
    u32          uVar4;
    u32          uVar5;
    long         lVar6;
    void **ppcVar7;
    u16         *puVar8;
    u16         *puVar9;
    u16          uVar10;
    BOOL16       BVar11;
    u16          uVar12;
    u32   uVar13;
    i16          iVar14;
    u16         *extraout_DX;
    u16          extraout_DX_00;
    u8          *extraout_DX_01;
    u16          uVar15;
    u16          uVar16;
    u16         *puVar17;
    Struct348 *uVar18;
    Struct349 *paVar18;
    u16          uVar19;
    Struct349 *u_var20;
    u16          u_var21;
    u16          u_var22;
    bool         bVar23;
    bool         bVar24;
    u16         *pu_var25;
    Struct99  *p_var26;
    u32  *pu_var27;
    u16          local_154;
    u16          uStackY338;
    u16          local_14c;
    u16          uStackY330;
    u16          uStackY80;
    u16          uStackY78;
    u8           u_var28;
    u8           u_var29;
    u8           uVar30;
    u8           uVar31;
    u8           uVar32;
    u8           uVar33;
    u8           uVar34;
    u8           uVar35;
    u8           uVar36;
    u16          uVar37;
    u8           uVar38;
    u8           uVar39;
    i16          iVar40;
    u16          in_stack_0000ffca;
    u16          in_stack_0000ffcc;
    u32   local_30;
    u16          uStack44;
    u16          uStack42;
    u16          uStack40;
    u16          uStack38;
    u32  *puStack36;
    u16         *puStack32;
    u16         *puStack30;
    u16          uStack28;
    u16          uStack26;
    u16        **ppuStack24;
    u16          local_16;
    u16         *local_14;
    i16          local_12;
    u16         *local_10;
    u16         *puStack14;
    void *pcStack12;
    u16         *puStack10;
    u32  *local_6;

    u_var21 = SUB42(SEG_1050, 0x0);
    uVar19 = param_6;
    u_var22 = param_7;
    BVar11 = read_file_1008_7dee(param_2, param_3, &local_6, 0x0, param_9, 0x4, SEG_1008);
    if(BVar11 == 0x0) {
        globals->dat_1050_0310 = 0x6d2;
        return;
    }
    puStack10 = 0x0;
    if(((param_4 == 0x0) && ((param_5 - 0x100U) == '\0')) && (puVar17 = (param_5 - 0x100U >> 0x7), puVar17 < (&PTR_LOOP_1050_000e + 0x1))) {
        uVar37 = (param_1 >> 0x10);
        u_var20 = (Struct349 *)param_1;
        uVar34 = (param_9 >> 0x8);
        switch(puVar17) {
            case0x0:
                pass1_1030_145a(u_var20->field_0xe, (long)local_6);
                uStack28 = 0x0;
                uStack26 = 0x0;
                while(str_var1(uStack26, uStack28) < local_6) {
                    pu_var27 = local_6;
                    mem_op_1000_179c(0x14, puVar17, 0);
                    puStack32 = pu_var27;
                    puStack30 = puVar17;
                    if((puVar17 | puStack32) == 0x0) {
                        puVar17  = 0x0;
                        local_16 = 0x0;
                    } else {
                        pu_var25  = pass1_1030_5d0a((pu_var27 & 0xffff | ZEXT24(puVar17) << 0x10));
                        local_16 = (pu_var25 >> 0x10);
                        puVar17  = pu_var25;
                    }
                    ppcVar7    = (str_var1(local_16, puVar17) + 0x10);
                    ppuStack24 = (u16 **)puVar17;
                    (**ppcVar7)();
                    if(puVar17 == 0x0) {
                        return;
                    }
                    uVar5     = *(ppuStack24 + 0x2);
                    uVar16    = ppuStack24[0x3];
                    puStack14 = uVar5;
                    pcStack12 = (fn_ptr_1)(uVar5 >> 0x10);
                    puVar17   = (uVar16 & 0xff);
                    pass1_1030_14b4(u_var20->field_0xe, ppuStack24, local_16, uVar5 & 0xffff | (uVar16 & 0xff) << 0x10, param_9);
                    lVar6    = str_var1(uStack26, uStack28) + 0x1;
                    uStack28 = lVar6;
                    uStack26 = (lVar6 >> 0x10);
                }
                break;
            case0x1:
                // WARNING: Bad instruction - Truncating control flow here
//                halt_baddata();
            case0x2:
                pass1_1030_145a(u_var20->field_0x12, (long)local_6);
                uStack40 = 0x0;
                uStack38 = 0x0;
                while(str_var1(uStack38, uStack40) < local_6) {
                    pu_var27 = local_6;
                    mem_op_1000_179c(0x1c, puVar17, 0);
                    puStack32 = pu_var27;
                    uVar16    = puVar17 | puStack32;
                    puStack30 = puVar17;
                    if(uVar16 == 0x0) {
                        uVar12 = 0x0;
                        uVar16 = 0x0;
                    } else {
                        uVar12 = puStack32;
                        pass1_1030_2958((pu_var27 & 0xffff | ZEXT24(puVar17) << 0x10));
                    }
                    puStack36 = str_var1(uVar16, uVar12);
                    ppcVar7   = (*puStack36 + 0x10);
                    (**ppcVar7)();
                    if(uVar12 == 0x0) {
                        return;
                    }
                    uVar19    = (puStack36 >> 0x10);
                    uVar18    = (Struct348 *)puStack36;
                    uVar5     = *&uVar18->field_0x4;
                    uVar16    = uVar18->field_0x6;
                    puStack14 = uVar5;
                    pcStack12 = (fn_ptr_1)(uVar5 >> 0x10);
                    puVar17   = (uVar16 & 0xff);
                    pass1_1030_14b4(u_var20->field_0x12, uVar18, uVar19, uVar5 & 0xffff | (uVar16 & 0xff) << 0x10, param_9);
                    lVar6    = str_var1(uStack38, uStack40) + 0x1;
                    uStack40 = lVar6;
                    uStack38 = (lVar6 >> 0x10);
                }
                break;
            case0x3:
                uStackY78 = SEG_1028;
                uStackY80 = 0x970b;
                uVar19    = &u_var20->field_0x114;
                pass1_1028_e2ac(globals->_PTR_LOOP_1050_65e2, 0x500);
                uStackY78 = 0x9728;
                local_16  = uVar19;
                local_14  = puVar17;
                pass1_1030_61fe(globals->_PTR_LOOP_1050_5740,
                                str_var1(puVar17, uVar19), param_1 & 0xffff0000 | &u_var20->field_0x114, &u_var20->field_0x108, uVar19, puVar17, param_9);
                if((u_var20->field_0x11a == 0xa) || (u_var20->field_0x11a == 0x37)) {
                    if(u_var20->field_0x11a == 0x37) {
                        puVar17                       = *(u16 **)(&u_var20->field_0x11e + 0x2);
                        uVar5                         = u_var20->field_0x10c;
                        uStack42                      = uVar5;
                        uStack40                      = (uVar5 >> 0x10);
                        *(u_var20->field_0x11e + 0x20) = uVar5;
                    }
                    uVar19    = &u_var20->field_0x114;
                    uStackY78 = SEG_1030;
                    uStackY80 = 0x9788;
                    pass1_1028_e2ac(globals->_PTR_LOOP_1050_65e2, 0x400);
                    &u_var20->field_0x10c                  = uVar19;
                    *(u16 **)(&u_var20->field_0x10c + 0x2) = puVar17;
                    pass1_1018_0196(local_6,
                                    str_var1(puVar17, &u_var20->field_0x10c), *&u_var20->field_0x108, uVar19, puVar17, param_9);
                    if(u_var20->field_0x11a == 0xa) {
                        pass1_1010_ed22(local_6, u_var20->field_0x10c, param_9);
                    }
                }
                uVar5 = u_var20->field_0x10c;
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar5, (uVar5 >> 0x10));
                &u_var20->field_0x110                  = uVar19;
                *(u16 **)(&u_var20->field_0x110 + 0x2) = puVar17;
                uStack26                              = puVar17 | &u_var20->field_0x110;
                if(uStack26 != 0x0) {
                    ppcVar7 = (*u_var20->field_0x110 + 0x8);
                    (**ppcVar7)();
                    puVar17 = extraout_DX;
                }
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, local_16, local_14);
                ppuStack24 = (u16 **)puVar17;
                pass1_1030_73ee(
                  str_var1(puVar17, uStack26), u_var20->field_0x10c, puVar17);
                BVar11    = pass1_1008_c6ae(globals->dat_1050_06e0, u_var20->field_0x11a, 0x31);
                puStack32 = puVar17;
                if((BVar11 == 0x0) && (u_var20->field_0x122 == 0x0)) {
                    u_var21 = ((uStack26 + 0xc) >> 0x10);
                    if((uStack26 + 0x10) < 0x1) {
                        uVar10 = 0x5;
                    } else {
                        uVar10 = 0x6;
                    }
                    (uStack26 + 0x14) = uVar10;
                    puStack32         = ppuStack24;
                }
                uVar13    = (uStack26 + 0x16);
                puStack30 = uVar13;
                uStack28  = (uVar13 >> 0x10);
                pass1_1028_e1ec(*&PTR_LOOP_1050_65e2, puStack30, uStack28);
                puStack36 = str_var1(uVar13, puStack36);
                if(str_var1(uStack28, puStack30) != 0x0) {
                    struct_1030_e4fa((Struct100 *)str_var1(param_9, &local_14c),
                                     str_var1(uStack28, puStack30), param_9, param_10);
                    fn_ptr_1030_835a((u32 **)&PTR_LOOP_1050_5748,
                                     str_var1(param_9, &local_14c));
                    local_14c  = addr_table_1008_380a[36]; // 0x389a
                    uStackY330 = SEG_1008;
                }
                ppcVar7 = (*u_var20->field_0x11e + 0x4);
                (**ppcVar7)();
                pu_var27   = u_var20->field_0x11e;
                uStackY78 = 0x9902;
                pass1_1030_7e5a(CONCAT13((ppuStack24 >> 0x8), CONCAT12(ppuStack24, uStack26)), *(pu_var27 + 0x4), extraout_DX_00);
                return;
            case0x4:
                pass1_1030_145a(u_var20->field_0x16, (long)local_6);
                uStack40 = 0x0;
                uStack38 = 0x0;
                while(str_var1(uStack38, uStack40) < local_6) {
                    pu_var27 = local_6;
                    mem_op_1000_179c(0x1e, puVar17, 0);
                    puStack32 = pu_var27;
                    puStack30 = puVar17;
                    if((puVar17 | puStack32) == 0x0) {
                        iVar14 = 0x0;
                        u_var21 = 0x0;
                    } else {
                        pu_var25 = pass1_1030_560e((pu_var27 & 0xffff | ZEXT24(puVar17) << 0x10));
                        u_var21  = (pu_var25 >> 0x10);
                        iVar14  = pu_var25;
                    }
                    puStack36 = str_var1(u_var21, iVar14);
                    ppcVar7   = (*puStack36 + 0x10);
                    (**ppcVar7)();
                    if(iVar14 == 0x0) {
                        return;
                    }
                    u_var21    = (puStack36 >> 0x10);
                    uVar5     = *(puStack36 + 0x4);
                    puStack14 = uVar5;
                    pcStack12 = (fn_ptr_1)(uVar5 >> 0x10);
                    uVar4     = *(puStack36 + 0x10);
                    uStack28  = uVar4;
                    uStack26 = (uVar4 >> 0x10);
                    pass1_1030_6222(globals->_PTR_LOOP_1050_5740, 0x0, uVar4, uVar5, uStack28, extraout_DX_01, param_9);
                    puVar17 = (pcStack12 & 0xff);
                    pass1_1030_14b4(u_var20->field_0x16, puStack36, (puStack36 >> 0x10),
                                    str_var1(pcStack12, puStack14) & 0xffffff, param_9);
                    lVar6 = str_var1(uStack38, uStack40) + 0x1;
                    uStack40 = lVar6;
                    uStack38 = (lVar6 >> 0x10);
                }
                break;
            case0x5:
                *puVar17 = addr_table_1028_5280;//0x5280;
                puVar17[0x1] = SEG_1028;
                return;
            case0x6:
                pass1_1030_145a(u_var20->field_0x1a_addr_offset, (long) local_6);
                for (local_30 = 0x0; local_30 < local_6; local_30 = ((long) local_30 + 0x1)) {
                    pu_var27 = local_6;
                    mem_op_1000_179c(0x21e, puVar17, 0);
                    puStack32 = pu_var27;
                    uVar16 = puVar17 | puStack32;
                    puStack30 = puVar17;
                    if(uVar16 == 0x0) {
                        uVar12 = 0x0;
                        uVar16 = 0x0;
                    } else {
                        uVar12 = puStack32;
                        pass1_1038_30aa((pu_var27 & 0xffff | ZEXT24(puVar17) << 0x10), param_9);
                    }
                    ppcVar7  = (str_var1(uVar16, uVar12) + 0x10);
                    uStack44 = uVar12;
                    uStack42 = uVar16;
                    (**ppcVar7)();
                    if(uVar12 == 0x0) {
                        return;
                    }
                    uVar5     = *(uStack44 + 0x4);
                    uVar16    = (uStack44 + 0x6);
                    puStack14 = uVar5;
                    pcStack12 = (fn_ptr_1)(uVar5 >> 0x10);
                    puVar17   = (uVar16 & 0xff);
                    pass1_1030_14b4(u_var20->field_0x1a_addr_offset, uStack44, uStack42, uVar5 & 0xffff | (uVar16 & 0xff) << 0x10, param_9);
                }
                break;
            default:
                pass1_1030_145a(u_var20->field_0x1e, (long)local_6);
                pass1_1030_66de(globals->_PTR_LOOP_1050_5740, local_6, param_9);
                local_30 = 0x0;
                while(true) {
                    if (local_6 <= local_30) {
                        pass1_1030_154c();
                        pass1_1030_6740(globals->_PTR_LOOP_1050_5740, param_9, param_7);
                        return;
                    }
                    local_14 = globals->_PTR_LOOP_1050_5744;
                    local_12 = (globals->u32_ptr_1050_5744 >> 0x10);
                    p_var26 = pass1_1000_07fc(SEG_1000, globals->u32_ptr_1050_5744);
                    puStack30 = (p_var26 >> 0x10);
                    puStack32 = p_var26;
                    uVar16 = puStack30 | puStack32;
                    if (uVar16 == 0x0) {
                        uVar12 = 0x0;
                        uVar16 = 0x0;
                    } else {
                        uVar12 = puStack32;
                        pass1_1030_67cc(&p_var26->fld0_addr_table);
                    }
                    ppcVar7  = (str_var1(uVar16, uVar12) + 0x10);
                    uStack44 = uVar12;
                    uStack42 = uVar16;
                    (**ppcVar7)();
                    if(uVar12 == 0x0)
                        break;
                    uVar5     = *(uStack44 + 0x4);
                    puStack14 = uVar5;
                    pcStack12 = (fn_ptr_1)(uVar5 >> 0x10);
                    lVar6     = (uStack44 + 0x8);
                    uStack40  = lVar6;
                    uStack38  = (lVar6 >> 0x10);
                    param_7   = &local_30;
                    puStack36 = (puStack36 & 0xffff0000 | ZEXT24(&stack0xffca));
                    uStackY78 = 0xe977;
                    pass1_1030_671c(globals->_PTR_LOOP_1050_5740, uVar5,
                                    str_var1(param_9, &stack0xffca), lVar6, &stack0xffca, uStack42, param_7, param_9);
                    pass1_1030_14b4(u_var20->field_0x1e, uStack44, uStack42,
                                    str_var1(pcStack12, puStack14) & 0xffffff, param_9);
                    local_30 = ((long)local_30 + 0x1);
                }
                return;
            case0x9:
                local_6   = (local_6 & 0xffff);
                pcStack12 = (fn_ptr_1)u_var20->field_0x2e;
                puStack10 = u_var20->field_0x30;
                (*pcStack12)();
                return;
            case0xa:
                pass1_1030_145a(u_var20->field_0x22, (long)local_6);
                u_var21 = 0x0;
                uVar10 = 0x0;
                while(str_var1(uVar10, u_var21) < local_6) {
                    pu_var27 = local_6;
                    mem_op_1000_179c(0xe, puVar17, 0);
                    puStack32 = pu_var27;
                    puStack30 = puVar17;
                    if((puVar17 | puStack32) == 0x0) {
                        iVar14 = 0x0;
                        uVar15 = 0x0;
                    } else {
                        pu_var25 = pass1_1028_b204((pu_var27 & 0xffff | ZEXT24(puVar17) << 0x10));
                        uVar15  = (pu_var25 >> 0x10);
                        iVar14  = pu_var25;
                    }
                    local_30 = str_var1(uVar15, iVar14);
                    ppcVar7  = (*local_30 + 0x10);
                    (**ppcVar7)();
                    if(iVar14 == 0x0) {
                        return;
                    }
                    u_var22    = (local_30 >> 0x10);
                    uVar19    = local_30;
                    uVar5     = *(uVar19 + 0x4);
                    uVar16    = (uVar19 + 0x6);
                    puStack14 = uVar5;
                    pcStack12 = (fn_ptr_1)(uVar5 >> 0x10);
                    puVar17   = (uVar16 & 0xff);
                    pass1_1030_14b4(u_var20->field_0x22, uVar19, u_var22, uVar5 & 0xffff | (uVar16 & 0xff) << 0x10, param_9);
                    lVar6  = str_var1(uVar10, u_var21) + 0x1;
                    u_var21 = lVar6;
                    uVar10 = (lVar6 >> 0x10);
                }
                break;
            case0xb:
                if(puVar17 < (&PTR_LOOP_1050_000e + 0x1)) {
                    pcVar1  = (param_6 + 0x23);
                    cVar3   = *pcVar1;
                    *pcVar1 = *pcVar1 << 0x6;
                    piVar2  = (puVar17 + param_6);
                    *piVar2 = *piVar2 + (-0x6600 - ((cVar3 << 0x5) < '\0'));
                } else {
                    pass1_1028_780c(uVar19, u_var22, str_var1(in_stack_0000ffcc, in_stack_0000ffca));
                    if(param_4 == 0x0)
                        goto code_r0x10287b17;
                }
                u_var29    = 0x0;
                uVar31    = 0x4;
                iVar14    = 0x1d;
                uStackY78 = 0x7b0a;
                pu_var25   = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_9, puVar17, param_7);
                puVar17   = (pu_var25 >> 0x10);
                param_4   = pu_var25;
                pass1_1010_043a(pu_var25, CONCAT13(uVar31, CONCAT12(u_var29, puVar17)), iVar14, param_9);
            code_r0x10287b17:
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, 0x2, 0x400);
                pass1_1028_780c(u_var20, uVar37, str_var1(puVar17, param_4));
                puStack10 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_9, puVar17, param_7);
                pcStack12 = (fn_ptr_1)PTR_LOOP_1050_13ae;
                if(0x2 < globals->PTR_LOOP_1050_13ae) {
                    pu_var25 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_9, (puStack10 >> 0x10), param_7);
                    uVar32  = (pu_var25 >> 0x10);
                    uVar33  = (pu_var25 >> 0x18);
                    uVar35  = 0x1;
                    uVar36  = 0x0;
                    u_var29  = pu_var25;
                    uVar31  = (pu_var25 >> 0x8);
                    while(CONCAT11(uVar36, uVar35) < 0x9) {
                        u_var28 = u_var29;
                        uVar30 = uVar31;
                        if((CONCAT11(uVar31, u_var29) + 0x34 + CONCAT11(uVar36, uVar35) * 0x4) == local_6) {
                            puVar9   = (&PTR_LOOP_1050_0000 + 0x1);
                            local_30 = str_var1(local_30, 0x1);
                            uVar35   = 0xd7;
                            uVar36   = 0x7b;
                            pass1_1008_612e(0x1, 0x64, 0x1);
                            puVar17 = (CONCAT11(uVar36, uVar35) - 0x7);
                            if(puVar17 == 0x0) {
                                bVar24 = SBORROW2(puVar9, 0x32);
                                puVar8 = puVar9 + -0x19;
                                bVar23 = puVar9 == (s_New_failed_in_Op__Op_1050_0020 + 0x12);
                                LAB_1028_7b74:
                                if(!bVar23 && bVar24 == puVar8 < 0x0) {
                                    local_30 = (local_30 & 0xffff0000);
                                }
                            } else {
                                puVar17 = (CONCAT11(uVar36, uVar35) - 0x8);
                                if(puVar17 == 0x0) {
                                    bVar24 = SBORROW2(puVar9, 0x19);
                                    puVar8 = (puVar9 + -0x19);
                                    bVar23 = puVar8 == 0x0;
                                    goto LAB_1028_7b74;
                                }
                            }
                            puStack30 = puVar9;
                            if(local_30 != 0x0) {
                                pass1_1028_90e6((Struct100 *)CONCAT13(uVar34, CONCAT12(param_9, &local_154)), CONCAT11(uVar36, uVar35), param_9, param_10);
                                puVar17 = &local_154;
                                uVar32  = 0x8;
                                uVar33  = 0x10;
                                u_var29  = 0xc;
                                uVar31  = 0x7c;
                                fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748,
                                                 str_var1(param_9, puVar17));
                                local_154  = addr_table_1008_380a[36]; // 0x389a
                                uStackY338 = SEG_1008;
                            }
                            uVar38 = 0x0;
                            uVar39 = 0x0;
                            uVar35 = 0x23;
                            uVar36 = 0x7c;
                            pass1_1008_612e(0x0, 0xa, puVar17);
                            ppuStack24 = (u16 **)puVar17;
                            if(CONCAT11(uVar36, uVar35) == 0x7) {
                                iVar40  = 0x7;
                                puVar17 = puVar17 + 0x37;
                                iVar14  = puVar17 >> 0xf;
                            } else {
                                u_var28 = u_var29;
                                uVar30 = uVar31;
                                if(CONCAT11(uVar36, uVar35) != 0x8)
                                    goto LAB_1028_7ba0;
                                iVar40  = 0x8;
                                puVar17 = puVar17 + 0x32;
                                iVar14  = (puVar17 >> 0xf) + ((u16 *)0xff9b < puVar17);
                            }
                            uVar19 = iVar40 + iVar14 + CARRY2(CONCAT11(uVar39, uVar38), puVar17);
                            u_var28 = 0x8;
                            uVar30 = 0x10;
                            uVar35 = uVar32;
                            uVar36 = uVar33;
                            pass1_1010_ebf8(CONCAT13(uVar33, CONCAT12(uVar32, CONCAT11(uVar31, u_var29))), CONCAT11(uVar39, uVar38) + puVar17, uVar19, uVar19);
                            uVar32 = u_var29;
                            uVar33 = uVar31;
                        }
                        LAB_1028_7ba0:
                        iVar14 = CONCAT11(uVar36, uVar35) + 0x1;
                        uVar35 = iVar14;
                        u_var29 = u_var28;
                        uVar31 = uVar30;
                        uVar36 = (iVar14 >> 0x8);
                    }
                }
                return;
            case0xc:
                paVar18 = u_var20;
                pass1_1030_145a(u_var20->field_0x26, (long)local_6);
                u_var21 = 0x0;
                uVar10 = 0x0;
                while(str_var1(uVar10, u_var21) < local_6) {
                    BVar11 = read_file_1008_7dee(param_2, param_3, &local_30, 0x0, param_9, 0x2, SEG_1008);
                    if(BVar11 == 0x0) {
                        globals->dat_1050_0310 = 0x6d2;
                        return;
                    }
                    uStack44 = switch_1008_73ea(param_2, param_3, local_30);
                    pu_var27  = switch_1030_0000(u_var20, uVar37, uStack44, puVar17, paVar18, param_6, param_7);
                    uStack38 = (pu_var27 >> 0x10);
                    uVar19   = pu_var27;
                    ppcVar7  = (*pu_var27 + 0x10);
                    uStack40 = uVar19;
                    (**ppcVar7)();
                    if(uVar19 == 0x0) {
                        return;
                    }
                    uVar5     = *(uStack40 + 0x4);
                    uVar16    = (uStack40 + 0x6);
                    puStack14 = uVar5;
                    pcStack12 = (fn_ptr_1)(uVar5 >> 0x10);
                    puVar17   = (uVar16 & 0xff);
                    paVar18   = u_var20;
                    pass1_1030_14b4(u_var20->field_0x26, uStack40, uStack38, uVar5 & 0xffff | (uVar16 & 0xff) << 0x10, param_9);
                    lVar6  = str_var1(uVar10, u_var21) + 0x1;
                    u_var21 = lVar6;
                    uVar10 = (lVar6 >> 0x10);
                }
                break;
            case0xd:
                puStack10  = (ZEXT24(puVar17) << 0x10);
                uVar13     = &PTR_LOOP_1050_000c;
                local_10   = uVar13;
                puStack14  = (uVar13 >> 0x10);
                pcStack12  = *&PTR_LOOP_1050_0010;
                ppuStack24 = &local_10;
                uStackY78  = 0x211d;
                pass1_1008_3eb4(CONCAT13(uVar34, CONCAT12(param_9, &local_10)),
                                str_var1(param_9, &local_16),
                                str_var1(param_9, &local_14),
                                str_var1(param_9, &local_12));
                ppuStack24 = (u16 **)(local_14 + -0x1);
                puStack14  = ppuStack24;
                uVar16     = pass1_1028_21ba(u_var20, uVar37,
                                         str_var1(param_9, &local_10), (long)local_6, &local_10, puVar17, param_9);
                if(uVar16 == 0x0) {
                    ppuStack24 = (u16 **)(local_14 + 0x1);
                    puStack14  = ppuStack24;
                    uVar16     = pass1_1028_21ba(u_var20, uVar37,
                                             str_var1(param_9, &local_10), (long)local_6, &local_10, puVar17, param_9);
                    if(uVar16 == 0x0) {
                        puStack14  = local_14;
                        ppuStack24 = (u16 **)(local_12 + -0x1);
                        local_10   = ppuStack24;
                        uVar16     = pass1_1028_21ba(u_var20, uVar37,
                                                 str_var1(param_9, &local_10), (long)local_6, &local_10, puVar17, param_9);
                        if(uVar16 == 0x0) {
                            ppuStack24 = (u16 **)(local_12 + 0x1);
                            local_10   = ppuStack24;
                            uVar16     = pass1_1028_21ba(u_var20, uVar37,
                                                     str_var1(param_9, &local_10), (long)local_6, &local_10, puVar17, param_9);
                            if(uVar16 == 0x0) {
                                return;
                            }
                        }
                    }
                }
                pass1_1038_79b2(globals->_PTR_LOOP_1050_5a64, puStack10, uVar16, puVar17);
                return;
            case0xe:
                pass1_1030_145a(u_var20->field_0x2a, (long)local_6);
                u_var21 = 0x0;
                uVar10 = 0x0;
                while(str_var1(uVar10, u_var21) < local_6) {
                    pu_var27 = local_6;
                    mem_op_1000_179c(0x3b2, puVar17, 0);
                    puStack32 = pu_var27;
                    uVar16    = puVar17 | puStack32;
                    puStack30 = puVar17;
                    if(uVar16 == 0x0) {
                        uVar12 = 0x0;
                        uVar16 = 0x0;
                    } else {
                        uVar12 = puStack32;
                        pass1_1030_2068((pu_var27 & 0xffff | ZEXT24(puVar17) << 0x10));
                    }
                    local_30 = str_var1(uVar16, uVar12);
                    ppcVar7  = (*local_30 + 0x10);
                    (**ppcVar7)();
                    if(uVar12 == 0x0) {
                        return;
                    }
                    u_var22    = (local_30 >> 0x10);
                    uVar19    = local_30;
                    uVar5     = *(uVar19 + 0x4);
                    uVar16    = (uVar19 + 0x6);
                    puStack14 = uVar5;
                    pcStack12 = (fn_ptr_1)(uVar5 >> 0x10);
                    puVar17   = (uVar16 & 0xff);
                    pass1_1030_14b4(u_var20->field_0x2a, uVar19, u_var22, uVar5 & 0xffff | (uVar16 & 0xff) << 0x10, param_9);
                    lVar6  = str_var1(uVar10, u_var21) + 0x1;
                    u_var21 = lVar6;
                    uVar10 = (lVar6 >> 0x10);
                }
        }
        pass1_1030_154c();
    }
    return;
}


u32  pass1_1028_ebee(u32 param_1, u16 param_2, u16 param_3) {
    i16 iVar1;
    u16 u_var2;
    u32 uVar3;

    mem_op_1000_179c(0x14, param_3, 0);
    if((param_3 | param_2) != 0x0) {
        pass1_1030_1a32(str_var1(param_3, param_2), param_2, (param_3 | param_2));
    }
    uVar3          = struct_1030_4574(*(param_1 + 0x52));
    u_var2          = (globals->_PTR_LOOP_1050_5166 >> 0x10);
    iVar1          = globals->_PTR_LOOP_1050_5166;
    (iVar1 + 0x10) = uVar3;
    (iVar1 + 0x12) = (uVar3 >> 0x10);
    u_var2          = (globals->_PTR_LOOP_1050_5166 >> 0x10);
    return str_var1((globals->_PTR_LOOP_1050_5166 + 0x6), (globals->_PTR_LOOP_1050_5166 + 0x4));
}


void  pass1_1028_ec36(u32 param_1, u16 param_2, i16 param_3, u16 param_4, u32 param_5, u16 param_6, u8 *param_7, u16 param_8) {
    u32 uVar1;
    u16        u_var2;
    u16        uVar3;
    u8        *puVar4;
    u8        *puVar5;
    u16        uVar6;
    u16       *puVar7;

    mem_op_1000_179c(0x14, param_7, 0);
    if((param_7 | param_6) == 0x0) {
        u_var2  = 0x0;
        puVar4 = 0x0;
    } else {
        puVar7 = pass1_1030_5d3c(
          str_var1(param_7, param_6), param_5, param_6, (param_7 | param_6));
        puVar4 = (puVar7 >> 0x10);
        u_var2  = puVar7;
    }
    uVar6  = (param_1 >> 0x10);
    uVar1  = (param_1 + 0x52);
    puVar5 = puVar4;
    uVar3  = u_var2;
    pass1_1030_4594(puVar4, uVar1, (uVar1 >> 0x10), param_3);
    pass1_1030_5fe2(str_var1(puVar4, u_var2), str_var1(puVar5, uVar3));
    pass1_1030_1358(*(param_1 + 0xe), u_var2, puVar4, *(u_var2 + 0x4) & 0xffff | ((u_var2 + 0x6) & 0xff) << 0x10, param_8);
    return;
}


void  pass1_1028_ecac(u32 param_1, u16 param_2, i16 *param_3, u16 param_4, u32 param_5, u16 param_6, u8 *param_7, u16 param_8) {
    u32 uVar1;
    i16      **ppiVar2;
    u8        *puVar3;
    u8        *puVar4;
    u16        uVar5;

    mem_op_1000_179c(0x1c, param_7, 0);
    puVar3 = (param_7 | param_6);
    if(puVar3 == 0x0) {
        param_6 = 0x0;
        puVar3  = 0x0;
    } else {
        struct_1030_299a(str_var1(param_7, param_6), param_5, param_6, puVar3);
    }
    uVar5   = (param_1 >> 0x10);
    uVar1   = (param_1 + 0x52);
    puVar4  = puVar3;
    ppiVar2 = (i16 **)param_3;
    pass1_1030_4628(puVar3, uVar1, (uVar1 >> 0x10), param_3);
    *ppiVar2 = param_3;
    pass1_1030_3006(str_var1(puVar3, param_6), str_var1(puVar4, ppiVar2));
    pass1_1030_1358(*(param_1 + 0x12), param_6, puVar3, *(param_6 + 0x4) & 0xffff | ((param_6 + 0x6) & 0xff) << 0x10, param_8);
    return;
}


// WARNING: Unable to use type for symbol uVar1
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_ed2c(u32 param_1, u16 param_2, i16 param_3, u16 param_4, u32 param_5, u16 param_6, u8 *param_7, u16 param_8, u8 param_9) {
    u32        u_var2;
    u16        uVar3;
    u16        uVar4;
    u8        *puVar5;
    u8        *puVar6;
    u8        *puVar7;
    u16        uVar8;
    u16       *puVar9;
    u32 uVar1;

    mem_op_1000_179c(0x1e, param_7, 0);
    if((param_7 | param_6) == 0x0) {
        uVar3  = 0x0;
        puVar5 = 0x0;
    } else {
        puVar9 = struct_1030_565a(
          str_var1(param_7, param_6), param_5, param_6, (param_7 | param_6));
        puVar5 = (puVar9 >> 0x10);
        uVar3  = puVar9;
    }
    uVar8  = (param_1 >> 0x10);
    uVar1  = (param_1 + 0x52);
    puVar6 = puVar5;
    uVar4  = uVar3;
    pass1_1030_4782(param_8, param_9, puVar5, uVar1, (uVar1 >> 0x10), 0x1, 0x1, param_3);
    puVar7 = puVar6;
    pass1_1030_5a80(str_var1(puVar5, uVar3), str_var1(puVar6, uVar4), param_8);
    u_var2 = *(uVar3 + 0x4);
    pass1_1030_6222(globals->_PTR_LOOP_1050_5740, 0x1,
                    str_var1(puVar6, uVar4), u_var2, u_var2, puVar7, param_8);
    pass1_1030_1358(*(param_1 + 0x16), uVar3, puVar5, u_var2 & 0xffffff, param_8);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_edc4(u32 param_1, u16 param_2, u16 *param_3, long param_4, u8 *param_5, u16 param_6) {
    u16        uVar1;
    u32        u_var2;
    u8        *puVar3;
    u8         in_AF;
    u8         local_1a[0x4];
    u32        uStack22;
    u32 uStack18;
    u32        uStack14;
    u32        uStack10;
    u16       *pu_stack6;

    pu_stack6 = param_3;
    pass1_1030_64ce(param_6, param_3, param_5, globals->_PTR_LOOP_1050_5740, param_3, param_4,
                    str_var1(param_6, local_1a));
    u_var2    = *param_3;
    uStack14 = u_var2;
    uStack10 = u_var2;
    mem_op_1000_179c(0x21e, param_5, 0);
    uVar1 = u_var2;
    puVar3 = (param_5 | uVar1);
    if(puVar3 == 0x0) {
        uVar1  = 0x0;
        puVar3 = 0x0;
    } else {
        pass1_1038_3222((u_var2 & 0xffff | ZEXT24(param_5) << 0x10), uStack14, param_4, uVar1, puVar3, in_AF, param_6);
    }
    uStack18 = str_var1(puVar3, uVar1);
    uStack22 = *(uVar1 + 0x4);
    pass1_1030_1358(*(param_1 + 0x1a), uVar1, puVar3, uStack22 & 0xffff | ((uVar1 + 0x6) & 0xff) << 0x10, param_6);
    return;
}


void  struct_1028_d22e(u32 *param_1, u32 param_2, u16 param_3) {
    u16 uVar1;
    u8 *pu_var2;
    u16 uVar3;

    uVar3 = (param_1 >> 0x10);
    param_1->field_0x0 = 0x0;
    *(param_1 + 0x4) = param_2;
    mem_op_1000_179c(0xc, param_3, 0);
    uVar1 = param_2;
    pu_var2 = (param_3 | uVar1);
    if(pu_var2 == 0x0) {
        param_1->field_0x0 = 0x0;
    } else {
        struct_1028_d59c((param_2 & 0xffff | param_3 << 0x10), pu_var2);
        param_1         = uVar1;
        param_1->fld2_segment = pu_var2;
    }
    return;
}


void  struct_1028_d59c(u32 *param_1, u8 *param_2) {
    u16         *puVar1;
    u16          u_var2;
    u16         *puVar3;
    u8          *puVar4;
    u8          *extraout_DX;
    Struct158 *iVar5;
    u16          uVar5;
    u16         *puStack14;

    uVar5            = (param_1 >> 0x10);
    iVar5 = (Struct158 *) param_1;
    param_1->field_0x0 = 0x0;
    iVar5->field_0x4 = 0x0;
    iVar5->field_0x8 = 0x0;
    puVar3 = *_PTR_LOOP_1050_5748;
    param_1->field_0x0 = puVar3;
    mem_op_1000_179c(0xc, param_2, 0);
    puVar1 = (puVar3 & 0xffff | ZEXT24(param_2) << 0x10);
    puVar4 = (param_2 | puVar3);
    if(puVar4 == 0x0) {
        iVar5->field_0x4 = 0x0;
    } else {
        set_struct_1008_574a((puVar3 & 0xffff | ZEXT24(param_2) << 0x10));
        *puVar1 = addr_table_1028_d804;//0xd804;
        (puVar3 + 0x2) = SEG_1028;
        iVar5->field_0x4 = puVar1;
        puVar3 = puVar1;
        puVar4 = extraout_DX;
    }
    u_var2 = puVar3;
    mem_op_1000_179c(0xc, puVar4, 0);
    puStack14 = str_var1(puVar4, u_var2);
    if((puVar4 | u_var2) == 0x0) {
        iVar5->field_0x8 = 0x0;
    } else {
        set_struct_1008_574a(str_var1(puVar4, u_var2));
        *puStack14 = addr_table_1028_d804;//0xd804;
        (u_var2 + 0x2) = SEG_1028;
        iVar5->field_0x8 = puStack14;
    }
    return;
}


void  pass1_1028_d81c(u32 *param_1, u32 param_2, u8 *param_3, u16 param_4) {
    u16         *puVar1;
    u8          *pu_var2;
    u8          *puVar3;
    u16 uVar4;
    Struct136 *iVar6;
    u16 uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar6 = (Struct136 *) param_1;
    param_1->field_0x0 = 0x0;
    iVar6->field_0x4 = param_2;
    &iVar6->field_0x52 = 0x0;
    globals->_PTR_LOOP_1050_65e2 = param_1;
    iVar6->field_0x32 = pass1_1028_ec36;//0xec36;
    iVar6->field_0x34 = SEG_1028;
    iVar6->field_0x36 = pass1_1028_ecac;//0xecac;
    iVar6->field_0x38 = SEG_1028;
    iVar6->field_0x3a = pass1_1028_ed2c;//0xed2c;
    iVar6->field_0x3c = SEG_1028;
    iVar6->field_0x3e = pass1_1028_edc4;//0xedc4;
    iVar6->field_0x40 = SEG_1028;
    iVar6->pv_field_42 = pass1_1028_ee54;//0xee54;
    iVar6->field_0x44 = SEG_1028;
    iVar6->field_0x46 = pass1_1028_ef00;//0xef00;
    iVar6->field_0x48 = SEG_1028;
    iVar6->field_0x4a = pass1_1030_10b0;//0x10b0;
    iVar6->field_0x4c = SEG_1030;
    iVar6->field_0x4e = pass1_1030_1120;//0x1120;
    iVar6->field_0x50 = SEG_1030;
    mem_op_1000_179c(0x8, param_3, 0);
    uVar4 = param_2;
    pu_var2 = (param_3 | uVar4);
    if (pu_var2 != 0x0) {
        pass1_1030_615a((Struct137 *) (param_2 & 0xffff | ZEXT24(param_3) << 0x10), pu_var2);
    }
    mem_op_1000_179c(0x56c, pu_var2, 0);
    puVar3 = (pu_var2 | uVar4);
    if(puVar3 == 0x0) {
        uVar4  = 0x0;
        puVar3 = 0x0;
    } else {
        struct_1030_44be(str_var1(pu_var2, uVar4), puVar3);
    }
    iVar6->field_0x52 = uVar4;
    iVar6->field_0x54 = puVar3;
    mem_op_1000_179c(0x4, puVar3, 0);
    pu_var2 = (puVar3 | uVar4);
    if(pu_var2 != 0x0) {
        struct_1008_bde0(str_var1(puVar3, uVar4), pu_var2);
    }
    puVar1 = pass1_1000_4906((Struct20 *) (param_1 & 0xffff0000 | &iVar6->field_0xa), 0x0, 0x24);
    mem_op_1000_179c(0x1c, pu_var2, 0);
    puVar3 = (pu_var2 | puVar1);
    if(puVar3 == 0x0) {
        &iVar6->field_0xe = 0x0;
    } else {
        struct_1030_11aa(str_var1(pu_var2, puVar1), 0x5, 0x15, param_4);
        iVar6->field_0xe  = puVar1;
        iVar6->field_0x10 = puVar3;
    }
    mem_op_1000_179c(0x1c, puVar3, 0);
    pu_var2 = (puVar3 | puVar1);
    if(pu_var2 == 0x0) {
        puVar1 = 0x0;
        pu_var2 = 0x0;
    } else {
        struct_1030_11aa(str_var1(puVar3, puVar1), 0x5, 0xa, param_4);
    }
    iVar6->field_0x12 = puVar1;
    iVar6->field_0x14 = pu_var2;
    mem_op_1000_179c(0x1c, pu_var2, 0);
    puVar3 = (pu_var2 | puVar1);
    if(puVar3 == 0x0) {
        puVar1 = 0x0;
        puVar3 = 0x0;
    } else {
        struct_1030_11aa(str_var1(pu_var2, puVar1), 0x5, 0x19, param_4);
    }
    iVar6->field_0x16 = puVar1;
    iVar6->field_0x18 = puVar3;
    mem_op_1000_179c(0x1c, puVar3, 0);
    pu_var2 = (puVar3 | puVar1);
    if(pu_var2 == 0x0) {
        puVar1 = 0x0;
        pu_var2 = 0x0;
    } else {
        struct_1030_11aa(str_var1(puVar3, puVar1), 0x5, 0xa, param_4);
    }
    iVar6->field_0x1a_addr_offset = puVar1;
    iVar6->field_0x1c_addr_base = pu_var2;
    mem_op_1000_179c(0x1c, pu_var2, 0);
    puVar3 = (pu_var2 | puVar1);
    if(puVar3 == 0x0) {
        puVar1 = 0x0;
        puVar3 = 0x0;
    } else {
        struct_1030_11aa(str_var1(pu_var2, puVar1), 0x64, 0x1f4, param_4);
    }
    iVar6->field_0x1e = puVar1;
    iVar6->field_0x20 = puVar3;
    mem_op_1000_179c(0x1c, puVar3, 0);
    pu_var2 = (puVar3 | puVar1);
    if(pu_var2 == 0x0) {
        puVar1 = 0x0;
        pu_var2 = 0x0;
    } else {
        struct_1030_11aa(str_var1(puVar3, puVar1), 0x19, 0x64, param_4);
    }
    iVar6->field_0x22 = puVar1;
    iVar6->field_0x24 = pu_var2;
    mem_op_1000_179c(0x1c, pu_var2, 0);
    puVar3 = (pu_var2 | puVar1);
    if(puVar3 == 0x0) {
        puVar1 = 0x0;
        puVar3 = 0x0;
    } else {
        struct_1030_11aa(str_var1(pu_var2, puVar1), 0x64, 0x1f4, param_4);
    }
    iVar6->field_0x26 = puVar1;
    iVar6->field_0x28 = puVar3;
    mem_op_1000_179c(0x1c, puVar3, 0);
    uVar4 = puVar3 | puVar1;
    if(uVar4 == 0x0) {
        puVar1 = 0x0;
        uVar4  = 0x0;
    } else {
        struct_1030_11aa(str_var1(puVar3, puVar1), 0x5, 0x2, param_4);
    }
    iVar6->field_0x2a = puVar1;
    iVar6->field_0x2c = uVar4;
    return;
}


u32  pass1_1028_e0bc(u32 param_1, i16 param_2, u32 *param_3, u8 *param_4, u16 param_5) {
    u32 *puVar1;
    u32 *pu_var2;
    u32 *puVar3;
    i16  iVar4;
    u8  *puVar5;
    u32 *puVar6;

    mem_op_1000_179c(0x98, param_4, 0);
    puVar3 = param_3;
    puVar5 = param_4;
    pass1_1030_4bbe(param_5, param_4, *(param_1 + 0x52), param_2);
    puVar6 = param_3;
    for(iVar4 = 0x26; iVar4 != 0x0; iVar4 = iVar4 + -0x1) {
        pu_var2  = puVar6;
        puVar6  = puVar6 + 0x1;
        puVar1  = puVar3;
        puVar3  = puVar3 + 0x1;
        *pu_var2 = *puVar1;
    }
    return str_var1(param_4, param_3);
}


void  pass1_1028_e100(u32 param_1, u16 param_2, u8 *param_3) {
    u32  *puVar1;
    u32  *pu_var2;
    Struct311 *uVar4;
    i16          iVar4;
    u16          uVar5;
    u32  *puVar6;
    u32  *puVar7;
    u16          uVar8;
    u16          unaff_SS;
    u32          uStack10;
    u32          u_stack6;
    u32          uVar3;

    if(globals->_PTR_LOOP_1050_5f2c == 0x0) {
        globals->dat_1050_5f2c      = mem_op_1000_160a(param_3, SEG_1000);
        globals->dat_1050_5f2e      = param_3;
    } else {
    }
    uVar4    = (Struct311 *)fn_ptr_op_1000_1708(0xae, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
    uVar3    = uVar4;
    uStack10 = str_var1(globals->PTR_LOOP_1050_5f2e, uVar4);
    uVar5    = globals->dat_1050_5f2e | uVar4;
    if(uVar5 == 0x0) {
        u_stack6 = 0x0;
    } else {
        uVar4->field_0xa4 = 0x0;
        uVar4->field_0xa8 = 0x0;
        uVar4->field_0xac = 0x0;
        u_stack6           = uStack10;
        uVar3             = uStack10;
    }
    puVar6 = uVar3;
    pass1_1030_4c06(*(param_1 + 0x52), param_2, uVar5, unaff_SS);
    uVar8  = (u_stack6 >> 0x10);
    puVar7 = u_stack6;
    for(iVar4 = 0x2b; iVar4 != 0x0; iVar4 = iVar4 + -0x1) {
        pu_var2  = puVar7;
        puVar7  = puVar7 + 0x1;
        puVar1  = puVar6;
        puVar6  = puVar6 + 0x1;
        *pu_var2 = *puVar1;
    }
    puVar7 = puVar6;
    return;
}


void  pass1_1028_e28a(u8 *param_1, i16 param_2, u16 param_3) {
    void **ppcVar1;
    u32 *pu_var2;
    u16         uVar3;
    u16        *puVar4;

    puVar4  = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_3, param_1, param_2);
    uVar3   = (puVar4 >> 0x10);
    pu_var2  = (puVar4 + 0xa);
    ppcVar1 = (*pu_var2 + 0x4);
    (**ppcVar1)(SEG_1010, pu_var2, uVar3, 0x5);
    return;
}


void  pass1_1028_c3aa(u16 param_1, u16 param_2, u16 *param_3, u32 param_4, u32 param_5, u16 param_6) {
    void **ppcVar1;
    i16         iVar2;
    u16         uVar3;
    u16         uVar4;
    u16         uVar5;
    u8         *puVar6;
    u8         *puVar7;
    u8         *puVar8;
    u8         *puVar9;
    u16         extraout_DX;
    u16         uVar10;
    i16         unaff_DI;
    u16         uVar11;
    u32         uVar12;
    u16        *puVar13;
    u32        *puVar14;
    u8          uVar15;
    u8          uVar16;
    u16         uVar17;
    u16         uVar18;
    u32         uVar19;
    u16         u_var20;
    u32         uStack40;
    u32         uStack36;
    u32 *puStack32;
    u8         *puStack24;
    u8          local_4[0x2];

    uVar12 = pass1_1030_bcae(local_4, param_6);
    puVar7 = (uVar12 >> 0x10);
    iVar2  = uVar12;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_4, (param_4 >> 0x10));
    uVar12 = *(iVar2 + 0x10);
    uVar15 = SUB41(param_3, 0x0);
    uVar16 = (param_3 >> 0x8);
    uVar11 = (param_3 >> 0x10);
    puVar8 = puVar7;
    uVar19 = param_5;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar12, (uVar12 >> 0x10));
    puStack24 = local_4;
    pass1_1030_bcde(param_6, puStack24, param_6, uVar12 & 0xffff | ZEXT24(puVar8) << 0x10,
                    str_var1(uVar11, CONCAT11(uVar16, uVar15)), uVar19);
    if(puStack24 < 0x0) {
        globals->PTR_LOOP_1050_50ca = 0x6af;
        return;
    }
    if(0x1e < puStack24) {
        uVar3   = 0x87;
        puVar13 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x9, param_6, puVar8, unaff_DI);
        uVar3   = pass1_1010_65d0(param_6, puVar13, uVar3);
        if(uVar3 == 0x0) {
            puVar14 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x15);
            puVar9  = (puVar14 >> 0x10);
            uVar4   = puVar14;
            uVar11  = SUB42(SEG_1038, 0x0);
            pass1_1038_4d6e(str_var1(puVar7, iVar2), puVar14, uVar4, puVar9);
            puStack32 = str_var1(puVar9, uVar4);
            ppcVar1   = (*puStack32 + 0x10);
            uVar10    = uVar4;
            uVar18    = uVar4;
            puVar8    = puVar9;
            (**ppcVar1)(SEG_1038, uVar4, puVar9);
            uStack36 = str_var1(extraout_DX, uVar10);
            uStack40 = 0x0;
            uVar10   = extraout_DX;
            while(true) {
                if(uStack36 <= uStack40) {
                    if(puStack32 != 0x0) {
                        ppcVar1 = *puStack32;
                        (**ppcVar1)(uVar11, uVar4, puVar9, 0x1, uVar18, puVar8, puStack32, puStack32);
                    }
                    globals->PTR_LOOP_1050_50ca = 0x6b6;
                    globals->PTR_LOOP_1050_50cc = puStack24 + -0x1e;
                    return;
                }
                uVar15  = param_5;
                uVar16  = (param_5 >> 0x8);
                uVar12  = uStack36;
                puVar13 = param_3;
                uVar17  = (param_5 >> 0x10);
                pass1_1030_1d58(puStack32);
                uVar5  = uVar12;
                puVar6 = local_4;
                uVar11 = SEG_1030;
                u_var20 = uVar10;
                pass1_1030_bcde(param_6, puVar6, param_6, uVar12 & 0xffff | uVar10 << 0x10, puVar13,
                                str_var1(uVar17, CONCAT11(uVar16, uVar15)));
                if((0x0 < puVar6) && (puVar6 < 0x1f))
                    break;
                if(puVar6 < puStack24) {
                    puStack24 = puVar6;
                }
                uStack40 = uStack40 + 0x1;
            }
            if(puStack32 == 0x0) {
                return;
            }
            ppcVar1 = *puStack32;
            (**ppcVar1)(0x1030, uVar4, puVar9, 0x1, uVar18, puVar8, puStack32, puStack32, uVar5, u_var20);
            return;
        }
    }
    return;
}


void  pass1_1028_ccd0(u8 param_1, u16 param_2, u32 param_3, u16 *param_4) {
    void **ppcVar1;
    u16        *pu_var2;
    u8         *puVar3;
    i16         iVar4;
    u8         *extraout_DX;
    u8         *puVar5;
    u16         uVar6;
    i16         iVar7;
    u16         extraout_DX_00;
    i16         unaff_DI;
    u16         uVar8;
    u16         uVar9;
    u16         uVar10;
    u16         uVar11;
    u16         uVar12;
    u16         local_178;
    u16         uStack374;
    i16         iStack84;
    u16         uStack72;
    u16         u_stack64;
    i16         iStack62;
    u32  u_stack60;
    u32 *puStack56;
    u32         uStack52;
    u16        *puStack48;
    u8          local_2c[0xc];
    i16         local_20;
    i16         local_1e;
    u32  uStack28;
    u32  uStack24;
    u32  uStack20;
    i16         iStack16;
    i16         iStack14;
    u16         uStack12;
    u16         uStack10;
    u16         local_8;
    i16         local_6;
    i16         local_4;

    pu_var2 = &local_8;
    pass1_1008_3eb4(param_4,
                    str_var1(param_2, pu_var2),
                    str_var1(param_2, &local_6),
                    str_var1(param_2, &local_4));
    pass1_1028_b58e(param_3);
    uStack20 = str_var1(extraout_DX, pu_var2);
    uStack24 = (pu_var2 + 0x17);
    uStack28 = (uStack24 + 0x4);
    puVar5   = extraout_DX;
    pass1_1028_c1f8(param_2, &local_20, extraout_DX, param_3,
                    str_var1(param_2, &local_20),
                    str_var1(param_2, &local_1e));
    uStack10 = local_4 - 0x1;
    iStack14 = local_4 + 0x1;
    uStack12 = local_6 - 0x1;
    iStack16 = local_6 + 0x1;
    if(uStack10 < 0x0) {
        uStack10 = 0x0;
    }
    if(local_1e <= iStack14) {
        iStack14 = local_1e + -0x1;
    }
    if(uStack12 < 0x0) {
        uStack12 = 0x0;
    }
    if(local_20 <= iStack16) {
        iStack16 = local_20 + -0x1;
    }
    pass1_1008_6c90(str_var1(param_2, local_2c));
    pass1_1008_6cec(str_var1(param_2, local_2c), local_8,
                    str_var1(iStack14, iStack16), local_8,
                    str_var1(uStack10, uStack12));
    puStack48 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_2, puVar5, unaff_DI);
    uVar6     = (puStack48 >> 0x10);
    uStack52  = *(puStack48 + 0x20);
    puVar3    = local_2c;
    pass1_1030_6522(globals->_PTR_LOOP_1050_5740, str_var1(param_2, puVar3), uStack52, param_2);
    puStack56 = str_var1(uVar6, puVar3);
    if((uVar6 | puVar3) != 0x0) {
        u_stack60 = 0x0;
        iStack62 = 0x0;
        for(u_stack64 = uStack12; u_stack64 <= iStack16; u_stack64 = u_stack64 + 0x1) {
            for(uStack72 = uStack10; iVar4 = iStack62, uStack72 <= iStack14; uStack72 = uStack72 + 0x1) {
                iVar7    = iStack62 >> 0xf;
                ppcVar1  = (*puStack56 + 0x4);
                iStack62 = iStack62 + 0x1;
                (**ppcVar1)(0x1030, puStack56, (puStack56 >> 0x10), iVar4, iVar7);
                u_stack60       = str_var1(extraout_DX_00, iVar4);
                u_stack60._3_1_ = (extraout_DX_00 >> 0x8);
                if(u_stack60._3_1_ == '\0') {
                    iStack84 = iVar4;
                    if(iVar4 == 0x7) {
                        pass1_1008_3e76(param_4, local_8, u_stack64, uStack72);
                        uVar11 = uStack52;
                        uVar12 = (uStack52 >> 0x10);
                        uVar9  = uStack28;
                        uVar10 = (uStack28 >> 0x10);
                        uVar8  = 0x6;
                    } else {
                        if(iVar4 == 0x8) {
                            pass1_1008_3e76(param_4, local_8, u_stack64, uStack72);
                            uVar11 = uStack52;
                            uVar12 = (uStack52 >> 0x10);
                            uVar9  = uStack28;
                            uVar10 = (uStack28 >> 0x10);
                            uVar8  = 0x7;
                        } else {
                            if(iVar4 != 0x9)
                                goto LAB_1028_ce2c;
                            pass1_1008_3e76(param_4, local_8, u_stack64, uStack72);
                            uVar11 = uStack52;
                            uVar12 = (uStack52 >> 0x10);
                            uVar9  = uStack28;
                            uVar10 = (uStack28 >> 0x10);
                            uVar8  = 0x8;
                        }
                    }
                    struct_op_1028_87f0(param_2, param_1, (Struct97 *)str_var1(param_2, &local_178), 0x0, 0x0, uVar8, param_4, (param_4 >> 0x10),
                                        str_var1(uVar10, uVar9),
                                        str_var1(uVar12, uVar11));
                    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748,
                                     str_var1(param_2, &local_178));
                    local_178 = addr_table_1008_380a[36]; // 0x389a
                    uStack374 = SEG_1008;
                }
                LAB_1028_ce2c:
            }
        }
    }
    return;
}


void  pass1_1028_d078(u16 param_1, u32 param_2, u32 param_3) {
    void **ppcVar1;
    u8         *extraout_DX;
    u8         *pu_var2;
    i16         iVar3;
    u16         uVar4;
    u16        *puVar5;
    u32         uVar6;
    u8          local_16[0x4];
    u32 *puStack18;
    u8         *puStack16;
    u32  uStack14;
    u16         uStack10;
    u16         uStack8;
    u32 *pu_stack6;
    u16         uStack4;

    uVar4     = (param_2 >> 0x10);
    iVar3     = param_2;
    pu_stack6  = (iVar3 + 0x4);
    pu_var2    = (iVar3 + 0x6);
    uStack14  = str_var1(pu_var2, pu_stack6);
    puStack18 = pu_stack6;
    puStack16 = pu_var2;
    if((pu_var2 | pu_stack6) != 0x0) {
        ppcVar1 = *pu_stack6;
        (**ppcVar1)();
        pu_var2 = extraout_DX;
    }
    mem_op_1000_179c(0x1c, pu_var2, 0);
    uStack4 = pu_var2 | pu_stack6;
    puStack18 = pu_stack6;
    puStack16 = pu_var2;
    if(uStack4 == 0x0) {
        pu_stack6 = 0x0;
        uStack4  = 0x0;
    } else {
        struct_op_1008_8e9e((Struct78 *)str_var1(pu_var2, pu_stack6), 0x6, 0x24);
    }
    (iVar3 + 0x4) = pu_stack6;
    (iVar3 + 0x6) = uStack4;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_3, (param_3 >> 0x10));
    if((uStack4 | pu_stack6) == 0x0) {
        puVar5 = pass1_1018_dcf6(str_var1(param_1, local_16));
        uVar6  = pass1_1018_dd1e(param_1, local_16, (puVar5 >> 0x10), local_16, param_1, 0x0, 0xa0000);
        pass1_1008_8faa((iVar3 + 0x4), uVar6);
        return;
    }
    uVar6    = pass1_1038_565e(param_1, (uStack4 | pu_stack6), str_var1(uStack4, pu_stack6));
    uStack8  = (uVar6 >> 0x10);
    uStack10 = uVar6;
    if((uStack8 | uStack10) != 0x0) {
        pass1_1028_d172(param_1, param_2, uVar6 & 0xffff | uStack8 << 0x10);
    }
    return;
}


Struct100 * struct_op_1028_d1dc(u16 param_1, u8 param_2, Struct100 *param_3, u16 param_4) {
    Struct101 *iVar1;
    u8 *puVar1;
    u16 in_stack_0000fffa;

    puVar1 = (param_3 >> 0x10);
    iVar1 = (Struct101 *) param_3;
    param_3->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment = SEG_1008;
    iVar1->field_0x4 = param_4;
    iVar1->field_0x6 = 0x0;
    param_3->fld0_addr_table = addr_table_1028_6ad2;//0x6ad2;
    iVar1->fld2_segment = SEG_1028;
    sys_1000_3f9c(&iVar1->field_0x8,
                  puVar1,
                  0x5160,
                  in_stack_0000fffa,
                  &stack0xfffe,
                  puVar1,
                  SEG_1000,
                  param_1,
                  param_2);
    return param_3;
}
