#include "unk_8.h"

#include "address_tables/function_tables.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_20.h"

void pass1_1028_5b42(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5) {
    void **ppcVar1;
    u16 u_var2;
    u32 uVar3;
    i16 iVar4;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x12) != 0x6) {
        return;
    }
    uVar3 = pass1_1028_b4f2(param_1);
    if((uVar3 + 0x200) != 0x8000002) {
        if((param_1 + 0x1c) == 0x8000002) {
            iVar4 = 0x6;
            goto code_r0x10285bbe;
        }
        ppcVar1 = (*param_1 + 0x64);
        iVar4   = (**ppcVar1)(param_4, param_1);
        if(iVar4 == 0x0) {
            return;
        }
        pass1_1028_c0f0(param_1, 0x2, iVar4, param_2, param_3, param_5);
        if(iVar4 == 0x0) {
            iVar4 = 0x6;
            goto code_r0x10285bbe;
        }
        pass1_1028_c952(param_1, param_2, param_3, param_5);
        pass1_1028_c00a(param_1, 0x2, iVar4, param_5);
    }
    iVar4 = 0x5;
code_r0x10285bbe:
    pass1_1028_bdac(param_1, iVar4, param_4);
    return;
}


u16 * pass1_1028_5e18(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  s_thisHi_1050_5e6f + 0x1;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_5f00(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    (param_1 + 0x20)           = 0x0;
    param_1 =  0x6054;
    param_1->fld2_segment      = SEG_1028;
    return param_1;
}


void  pass1_1028_5f34(u16 param_1, i16 param_2, u16 param_3, u16 param_4, u16 param_5, u16 param_6) {
    i16       *pi_var1;
    u32 u_var2;
    BOOL16     BVar3;
    u32        uVar4;
    u16        extraout_DX;
    u16        uVar5;
    u16        uVar6;
    i16        iVar7;

    pass1_1028_be9e((param_2 + 0x6), param_3, param_4, param_5, param_6);
    uVar4 = *(param_2 + 0x6);
    uVar6 = (uVar4 >> 0x10);
    if((uVar4 + 0x12) == 0x5) {
        (uVar4 + 0x20) = 0x64;
        pass1_1028_b58e(uVar4);
        (param_2 + -0x4) = param_1;
        (param_2 + -0x2) = extraout_DX;
        u_var2            = (param_2 + -0x4);
        uVar4            = *(u_var2 + 0x2e);
        iVar7            = 0x61;
        uVar5            = extraout_DX;
        pass1_1038_3fb0(uVar4);
        BVar3 = pass1_1030_25b2(uVar4 & 0xffff | uVar5 << 0x10, iVar7);
        if(BVar3 != 0x0) {
            u_var2   = (param_2 + 0x6);
            pi_var1  = (u_var2 + 0x20);
            *pi_var1 = *pi_var1 + 0x64;
        }
    }
    return;
}


void  pass1_1028_6008(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5) {
    i16 *pi_var1;
    i16  iVar2;
    u16  uVar3;

    pass1_1028_be2a(param_1, param_2, param_3, param_4, param_5);
    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(((iVar2 + 0x12) == 0x5) && (0x0 < (iVar2 + 0x20))) {
        pi_var1  = (iVar2 + 0x20);
        *pi_var1 = *pi_var1 + -0x1;
    }
    return;
}


u32  pass1_1028_62c8(u32 param_1, u16 param_2) {
    u16 uVar1;
    u32 u_var2;

    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x12) == 0x5) {
        u_var2 = pass1_1028_67d4(param_1 & 0xffff | uVar1 << 0x10, param_2);
        uVar1 = u_var2;
        if(((u_var2 >> 0x10) == 0x0) && (uVar1 < 0x64)) {
            return str_var1(-(0x64 < uVar1), 0x64 - uVar1);
        }
    }
    return 0x0;
}


// WARNING: Could not reconcile some variable overlaps

u32  pass1_1028_6302(u32 param_1, u16 param_2) {
    u16  uVar1;
    u16  u_var2;
    long lVar3;
    u32  uStack18;
    u8   local_a[0x8];

    pass1_1008_5784(str_var1(param_2, local_a), *(param_1 + 0x20));
    uStack18 = 0x0;
    while(true) {
        lVar3 = pass1_1008_5b12(local_a, param_2);
        u_var2 = (lVar3 >> 0x10);
        if(lVar3 == 0x0)
            break;
        if((lVar3 + 0x8) != 0x0) {
            uVar1    = (lVar3 + 0xa);
            uStack18 = str_var1((uStack18 >> 0x10) + CARRY2(uStack18, uVar1), uStack18 + uVar1);
        }
    }
    return uStack18;
}


u16 * pass1_1028_408e(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x42ec;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


void  pass1_1028_40b8(u32 param_1, u16 param_2, u16 param_3) {
    void **ppcVar1;
    u32 *pu_var2;
    u16         uVar3;
    u16         uVar4;
    u16         extraout_DX;
    u16         uVar5;
    u32         uVar6;
    u32        *puVar7;
    u32  uStack54;
    u8          local_2c[0x6];
    u32 *puStack38;
    u32  uStack34;
    u32 *puStack26;
    u32  uStack24;
    u32  local_14;
    i16         iStack16;
    i16         iStack14;
    u32  local_c;
    i16         iStack8;
    u16         u_stack6;
    u16         uStack4;

    pass1_1028_b58e(param_1);
    local_14  = (param_2 + 0xc);
    iStack8   = (param_2 + 0x10);
    puStack26 = &local_c;
    uStack34  = str_var1(uStack34, &local_14);
    iStack16  = iStack8 + 0x1;
    puVar7    = str_var1(param_3, local_2c);
    iStack14  = iStack16;
    local_c   = local_14;
    u_stack6   = param_2;
    uStack4   = extraout_DX;
    uVar6     = pass1_1028_bb24(param_1);
    uVar5     = (uVar6 >> 0x10);
    pu_var2    = &local_14;
    pass1_1030_64ce(param_3, pu_var2, uVar5, globals->_PTR_LOOP_1050_5740,
                    str_var1(param_3, pu_var2), uVar6 & 0xffff | uVar5 << 0x10, puVar7);
    uStack34       = *pu_var2;
    uVar5          = (pu_var2 + 0x2);
    uStack54._3_1_ = (u8)(uStack34 >> 0x18);
    uVar3          = uStack54._3_1_;
    uStack24       = uStack34;
    if(uStack54._3_1_ != 0x0) {
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uStack34, uVar5);
        uStack54 = str_var1(uVar5, uVar3);
        uVar4    = pass1_1030_6fa0(str_var1(uVar5, uVar3));
        if(uVar4 == 0x64) {
            puStack38 = struct_op_1030_73a8(uStack54);
            ppcVar1   = (*puStack38 + 0x58);
            (**ppcVar1)();
        }
    }
    pass1_1028_b514(param_1);
    return;
}


void  pass1_1028_41ea(u32 param_1, i16 param_2, u16 param_3) {
    void **ppcVar1;
    u32 *pu_var2;
    u16         uVar3;
    u16         uVar4;
    u16         extraout_DX;
    u16         uVar5;
    u32         uVar6;
    u32        *puVar7;
    u32  uStack54;
    u8          local_2c[0x6];
    u32 *puStack38;
    u32  uStack34;
    u32 *puStack26;
    u32  uStack24;
    u32  local_14;
    i16         iStack16;
    i16         iStack14;
    u32  local_c;
    i16         iStack8;
    i16         iStack6;
    u16         uStack4;

    pass1_1028_b514(param_1);
    pass1_1028_b58e(param_1);
    local_14  = (param_2 + 0xc);
    iStack8   = (param_2 + 0x10);
    puStack26 = &local_c;
    uStack34  = str_var1(uStack34, &local_14);
    iStack16  = iStack8 + 0x1;
    puVar7    = str_var1(param_3, local_2c);
    iStack14  = iStack16;
    local_c   = local_14;
    iStack6   = param_2;
    uStack4   = extraout_DX;
    uVar6     = pass1_1028_bb24(param_1);
    uVar5     = (uVar6 >> 0x10);
    pu_var2    = &local_14;
    pass1_1030_64ce(param_3, pu_var2, uVar5, globals->_PTR_LOOP_1050_5740,
                    str_var1(param_3, pu_var2), uVar6 & 0xffff | uVar5 << 0x10, puVar7);
    uStack34       = *pu_var2;
    uVar5          = (pu_var2 + 0x2);
    uStack54._3_1_ = (u8)(uStack34 >> 0x18);
    uVar3          = uStack54._3_1_;
    if(uStack54._3_1_ != 0x0) {
        uStack24 = uStack34;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uStack34, uVar5);
        uStack54 = str_var1(uVar5, uVar3);
        uVar4    = pass1_1030_6fa0(str_var1(uVar5, uVar3));
        if(uVar4 == 0x64) {
            puStack38 = struct_op_1030_73a8(uStack54);
            ppcVar1   = (*puStack38 + 0x24);
            (**ppcVar1)();
        }
    }
    return;
}


u16 * pass1_1028_4376(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x446a;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16  pass1_1028_43a0(u32 param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    if(((param_1 + 0x12) != 0x6) && ((param_1 + 0x12) != 0x5)) {
        return 0x0;
    }
    return 0x1;
}


u16 * pass1_1028_44fe(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    (param_1 + 0x20)           = 0x0;
    param_1 =  0x4836;
    param_1->fld2_segment      = SEG_1028;
    return param_1;
}


void  pass1_1028_4530(u16 *param_1) {
    u32 *puVar1;
    u16 u_var2;
    void **ppcVar3;
    i16 iVar4;
    u16 uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    param_1->fld0_addr_table = addr_table_1028_4836;//0x4836;
    (iVar4 + 0x2) = SEG_1028;
    puVar1 = (iVar4 + 0x20);
    u_var2 = (iVar4 + 0x22);
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    pass1_1028_b418(param_1);
    return;
}


void  pass1_1028_456e(u32 param_1, u32 param_2, u16 param_3) {
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;

    pass1_1028_b46e(param_1, param_2, param_3);
    uVar5  = (param_1 >> 0x10);
    iVar4  = param_1;
    puVar1 = (iVar4 + 0x20);
    u_var2  = (iVar4 + 0x22);
    if((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    (iVar4 + 0x20) = 0x0;
    return;
}


void  pass1_1028_45b0(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5) {
    u16 uVar1;
    u32 u_var2;
    u16 uVar3;
    u16 uVar4;
    i16 iVar5;

    pass1_1028_be9e(param_1, param_2, param_3, param_4, param_5);
    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x12) == 0x5) {
        uVar4 = 0x0;
        iVar5 = 0x4;
        uVar3 = 0x2;
        u_var2 = pass1_1028_b58e(param_1 & 0xffff | uVar1 << 0x10);
        pass1_1030_7c50(u_var2, str_var1(uVar4, uVar3), iVar5, u_var2, (u_var2 >> 0x10));
    }
    return;
}


u32  pass1_1028_45e2(u32 param_1, u16 param_2, i16 param_3, u16 param_4) {
    pass1_1028_478a(param_1, param_2, param_4);
    return str_var1(-(0x3e8 < param_2) - param_3, 0x3e8 - param_2);
}


u16  pass1_1028_4768(u32 param_1, u16 param_2, i16 param_3, u16 param_4) {
    pass1_1028_478a(param_1, param_2, param_4);
    if((param_3 == 0x0) && (param_2 < 0x3e8)) {
        return 0x0;
    }
    return 0x1;
}


// WARNING: Could not reconcile some variable overlaps

void  pass1_1028_478a(u32 param_1, i16 param_2, u16 param_3) {
    u16        extraout_DX;
    long       local_1e;
    i16        local_1a[0x4];
    u16        uStack18;
    u16        uStack16;
    long       lStack14;
    u32       *puStack10;
    u32 u_stack6;

    pass1_1028_b58e(param_1);
    u_stack6   = str_var1(extraout_DX, param_2);
    puStack10 = (param_2 + 0x22);
    lStack14  = 0x0;
    if(((param_2 + 0x24) | puStack10) == 0x0) {
        return;
    }
    uStack16 = (puStack10 + 0x4);
    for(uStack18 = 0x0; uStack18 < uStack16; uStack18 = uStack18 + 0x1) {
        pass1_1020_bb16(puStack10, str_var1(param_3, &local_1e), str_var1(param_3, local_1a), uStack18);
        if(0x0 < local_1a[0]) {
            lStack14 = lStack14 + local_1e;
        }
    }
    return;
}


u16 * pass1_1028_48c0(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  &PTR_LOOP_1050_4942;
    param_1->fld2_segment      = SEG_1028;
    (param_1 + 0xe)            = (param_1 + 0xc);
    (param_1 + 0x10)           = (param_1 + 0xc);
    return param_1;
}


void  pass1_1028_48fa(u32 *param_1, u16 param_2) {
    pass1_1028_bdac(param_1, 0x0, param_2);
    return;
}


u32  pass1_1028_49de(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x4b1c;
    param_1->fld2_segment = SEG_1028;
    pass1_1000_4906((Struct20 *)str_var1(param_2, param_1 + 0x20), 0x0, 0xa);
    return param_1;
}


u16  pass1_1028_4a9a(u32 param_1, i16 param_2) {
    return (param_1 + 0x20 + param_2 * 0x2);
}


void  pass1_1028_4ab2(u32 param_1, u16 param_2, i16 param_3) {
    (param_1 + param_3 * 0x2 + 0x20) = param_2;
    return;
}


u16 * pass1_1028_4ba6(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  s_SCi16ernalPutBldg2_site_0x_08lx__1050_506f + 0x1;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16  pass1_1028_4bd0(u32 param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    if(((param_1 + 0x12) != 0x6) && ((param_1 + 0x12) != 0x5)) {
        return 0x0;
    }
    return 0x1;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_4bf2(u32 param_1, u32 param_2, i16 param_3, u16 param_4) {
    void **ppcVar1;
    u32 *pu_var2;
    u16         uVar3;
    u16         extraout_DX;
    u16         uVar4;
    u32         uVar5;
    u32        *puVar6;
    u32  uStack54;
    u8          local_2c[0x6];
    u32 *puStack38;
    u32  uStack34;
    u32 *puStack26;
    u32  uStack24;
    u32  local_14;
    i16         iStack16;
    i16         iStack14;
    u32  local_c;
    i16         iStack8;
    i16         iStack6;
    u16         uStack4;

    pass1_1028_b58e(param_1);
    local_14  = (param_3 + 0xc);
    iStack8   = (param_3 + 0x10);
    puStack26 = &local_c;
    uStack34  = str_var1(uStack34, &local_14);
    iStack16  = iStack8 + 0x1;
    puVar6    = str_var1(param_4, local_2c);
    iStack14  = iStack16;
    local_c   = local_14;
    iStack6   = param_3;
    uStack4   = extraout_DX;
    uVar5     = pass1_1028_bb24(param_1);
    uVar4     = (uVar5 >> 0x10);
    pu_var2    = &local_14;
    pass1_1030_64ce(param_4, pu_var2, uVar4, globals->_PTR_LOOP_1050_5740,
                    str_var1(param_4, pu_var2), uVar5 & 0xffff | uVar4 << 0x10, puVar6);
    uStack34       = *pu_var2;
    uVar4          = (pu_var2 + 0x2);
    uStack54._3_1_ = (u8)(uStack34 >> 0x18);
    uVar3          = uStack54._3_1_;
    uStack24       = uStack34;
    if(uStack54._3_1_ != 0x0) {
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uStack34, uVar4);
        uStack54 = str_var1(uVar4, uVar3);
        uVar3    = pass1_1030_6fa0(str_var1(uVar4, uVar3));
        if((uVar3 == 0x62) || (uVar3 == 0x63)) {
            puStack38 = struct_op_1030_73a8(uStack54);
            uVar3     = puStack38;
            ppcVar1   = (*puStack38 + 0x58);
            (**ppcVar1)();
        }
    }
    pass1_1028_b46e(param_1, param_2, uVar3);
    return;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_4cd6(u32 param_1, i16 param_2, u16 param_3) {
    void **ppcVar1;
    u32 *pu_var2;
    u16         uVar3;
    u16         uVar4;
    u16         extraout_DX;
    u16         uVar5;
    u32         uVar6;
    u32        *puVar7;
    u32  uStack54;
    u8          local_2c[0x6];
    u32 *puStack38;
    u32  uStack34;
    u32 *puStack26;
    u32  uStack24;
    u32  local_14;
    i16         iStack16;
    i16         iStack14;
    u32  local_c;
    i16         iStack8;
    i16         iStack6;
    u16         uStack4;

    pass1_1028_b514(param_1);
    pass1_1028_b58e(param_1);
    local_14  = (param_2 + 0xc);
    iStack8   = (param_2 + 0x10);
    puStack26 = &local_c;
    uStack34  = str_var1(uStack34, &local_14);
    iStack16  = iStack8 + 0x1;
    puVar7    = str_var1(param_3, local_2c);
    iStack14  = iStack16;
    local_c   = local_14;
    iStack6   = param_2;
    uStack4   = extraout_DX;
    uVar6     = pass1_1028_bb24(param_1);
    uVar5     = (uVar6 >> 0x10);
    pu_var2    = &local_14;
    pass1_1030_64ce(param_3, pu_var2, uVar5, globals->_PTR_LOOP_1050_5740,
                    str_var1(param_3, pu_var2), uVar6 & 0xffff | uVar5 << 0x10, puVar7);
    uStack34       = *pu_var2;
    uVar5          = (pu_var2 + 0x2);
    uStack54._3_1_ = (u8)(uStack34 >> 0x18);
    uVar3          = uStack54._3_1_;
    if(uStack54._3_1_ != 0x0) {
        uStack24 = uStack34;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uStack34, uVar5);
        uStack54 = str_var1(uVar5, uVar3);
        uVar4    = pass1_1030_6fa0(str_var1(uVar5, uVar3));
        if((uVar4 == 0x62) || (uVar4 == 0x63)) {
            puStack38 = struct_op_1030_73a8(uStack54);
            ppcVar1   = (*puStack38 + 0x24);
            (**ppcVar1)();
        }
    }
    return;
}


void  pass1_1028_4f30(u32 param_1, i16 param_2, u16 param_3, u16 param_4, u16 param_5) {
    u32 uVar1;
    u16 u_var2;

    uVar1 = pass1_1028_b58e(param_1);
    if(param_2 == 0x0) {
        u_var2 = 0x0;
    } else {
        u_var2 = 0x3e8;
    }
    pass1_1030_7d1c(uVar1, u_var2, 0x230000, uVar1, (uVar1 >> 0x10), param_3, param_4, param_5);
    return;
}


u16  pass1_1028_4f62(u32 param_1) {
    u32 uVar1;

    uVar1 = pass1_1028_b58e(param_1);
    if((uVar1 + 0x10) == 0x0) {
        return 0x1;
    }
    return 0x0;
}


u16 * pass1_1028_2bfe(Struct179 *param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_0982(param_1, param_2, param_3, param_4, param_5);
    param_1 =  0x341c;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16  pass1_1028_2c28(u16 param_1, u16 param_2, u16 param_3, u32 param_4, u32 *param_5, u32 param_6, u32 param_7) {
    u32 *puVar1;
    u16 *pu_var2;
    u16  uVar3;
    u16  uVar4;
    u16  local_e;
    u16  local_c;
    u16  local_a;
    u32  local_8;
    u16  uStack4;

    pass1_1028_09d4(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    if(param_2 != 0x0) {
        local_8 = *param_5;
        uStack4 = (param_5 + 0x4);
        pu_var2  = &local_e;
        pass1_1008_3eb4(str_var1(param_1, &local_8),
                        str_var1(param_1, pu_var2),
                        str_var1(param_1, &local_c),
                        str_var1(param_1, &local_a));
        pass1_1008_3e76(
          str_var1(param_1, &local_8), local_e, local_c - 0x1, local_a - 0x1);
        puVar1 = &local_8;
        uVar3  = param_4;
        uVar4  = (param_4 >> 0x10);
        pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4, str_var1(param_1, puVar1), param_7);
        if(puVar1 != 0x0) {
            pass1_1008_3e76(str_var1(param_1, &local_8), local_e, local_c - 0x1, local_a);
            puVar1 = &local_8;
            pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4, str_var1(param_1, puVar1), param_7);
            if(puVar1 != 0x0) {
                pass1_1008_3e76(
                  str_var1(param_1, &local_8), local_e, local_c - 0x1, local_a + 0x1);
                puVar1 = &local_8;
                pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4, str_var1(param_1, puVar1), param_7);
                if(puVar1 != 0x0) {
                    pass1_1008_3e76(
                      str_var1(param_1, &local_8), local_e, local_c, local_a - 0x1);
                    puVar1 = &local_8;
                    pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4, str_var1(param_1, puVar1), param_7);
                    if(puVar1 != 0x0) {
                        pass1_1008_3e76(
                          str_var1(param_1, &local_8), local_e, local_c, local_a);
                        puVar1 = &local_8;
                        pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4,
                                        str_var1(param_1, puVar1), param_7);
                        if(puVar1 != 0x0) {
                            pass1_1008_3e76(str_var1(param_1, &local_8), local_e, local_c, local_a + 0x1);
                            puVar1 = &local_8;
                            pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4,
                                            str_var1(param_1, puVar1), param_7);
                            if(puVar1 != 0x0) {
                                pass1_1008_3e76(str_var1(param_1, &local_8), local_e, local_c + 0x1, local_a - 0x1);
                                puVar1 = &local_8;
                                pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4,
                                                str_var1(param_1, puVar1), param_7);
                                if(puVar1 != 0x0) {
                                    pass1_1008_3e76(str_var1(param_1, &local_8), local_e, local_c + 0x1, local_a);
                                    puVar1 = &local_8;
                                    pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4,
                                                    str_var1(param_1, puVar1), param_7);
                                    if(puVar1 != 0x0) {
                                        pass1_1008_3e76(str_var1(param_1, &local_8), local_e, local_c + 0x1, local_a + 0x1);
                                        puVar1 = &local_8;
                                        pass1_1028_c7b6(param_1, pu_var2, uVar3, uVar4,
                                                        str_var1(param_1, puVar1), param_7);
                                        if(puVar1 != 0x0) {
                                            return 0x1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        globals->PTR_LOOP_1050_50ca = 0x6a8;
    }
    return 0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_2e40(u32 *param_1, i16 param_2, u8 *param_3, u16 param_4, u16 param_5, u16 param_6, u16 param_7, u8 param_8) {
    u16        uVar1;
    u16       *pu_var2;
    u32 uVar3;

    pass1_1028_be9e(param_1, param_4, param_5, param_6, param_7);
    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x12) == 0x5) {
        pass1_1028_2f18(param_7, param_2, param_8, param_1 & 0xffff | uVar1 << 0x10);
        pass1_1028_3246(param_1, param_2, param_3, param_4, param_5, param_7);
        uVar3  = 0x50001;
        pu_var2 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_7, param_3, param_5);
        pass1_1010_089e(param_7, pu_var2, uVar3, (uVar3 >> 0x10));
    }
    return;
}


void  pass1_1028_3246(u32 param_1, i16 param_2, u16 param_3, u16 param_4, u16 param_5, u16 param_6) {
    u16        uVar1;
    u32        u_var2;
    u8        *extraout_DX;
    u8        *puVar3;
    u16        uVar4;
    u16        uVar5;
    i16        iVar6;
    u8         local_20[0x6];
    u16       *puStack26;
    u16        uStack18;
    u8        *puStack16;
    u32        uStack14;
    u32 uStack10;
    u32 u_stack6;

    pass1_1028_b58e(param_1);
    u_stack6  = str_var1(extraout_DX, param_2);
    uStack10 = (param_2 + 0x2e);
    u_var2    = *(uStack10 + 0x10);
    uVar5    = 0x0;
    iVar6    = 0x1;
    uVar4    = 0x1;
    puVar3   = extraout_DX;
    uStack14 = u_var2;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
    uVar1     = u_var2;
    uStack18  = uVar1;
    puStack16 = puVar3;
    pass1_1030_7c50(u_var2 & 0xffff | ZEXT24(puVar3) << 0x10,
                    str_var1(uVar5, uVar4), iVar6, uVar1, puVar3);
    pass1_1030_7c50(str_var1(puStack16, uStack18), 0x1, 0x2, uVar1, puVar3);
    pass1_1030_7c50(str_var1(puStack16, uStack18), 0x1, 0x3, uVar1, puVar3);
    pass1_1030_7c50(str_var1(puStack16, uStack18), 0x1, 0x5, uVar1, puVar3);
    puStack26 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_6, puVar3, param_5);
    puVar3    = (puStack26 >> 0x10);
    uVar1     = puStack26;
    if((uVar1 + 0x82) == 0x0) {
        pass1_1030_7c50(str_var1(puStack16, uStack18), 0x4, 0x4, uVar1, puVar3);
    }
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x11, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x12, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x13, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x14, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0x14, 0x15, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0x14, 0x16, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x17, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x18, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0xc8, 0x19, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0x14, 0x1a, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0x14, 0x1b, uVar1, puVar3, param_4, param_5, param_6);
    pass1_1030_7ddc(str_var1(puStack16, uStack18), 0x14, 0x1c, uVar1, puVar3, param_4, param_5, param_6);
    if((uStack10 + 0x200) == 0x8000002) {
        pass1_1020_a43e(param_6, puVar3, str_var1(param_6, local_20));
        pass1_1020_a89e(param_6, str_var1(param_6, local_20), (u_stack6 + 0xc), (u_stack6 >> 0x10));
    }
    return;
}


u16 * pass1_1028_34a6(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u8 *param_5) {
    pass1_1028_00cc(param_1, param_2, param_3, param_4, param_5);
    param_1 =  0x34f6;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_3580(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x3608;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16  pass1_1028_35aa(void) {
    return 0x1;
}


void  pass1_1028_35b0(u32 param_1, i16 param_2, u16 param_3, u16 param_4, u16 param_5) {
    u32 uVar1;
    u16 u_var2;

    uVar1 = pass1_1028_b58e(param_1);
    if(param_2 == 0x0) {
        u_var2 = 0x0;
    } else {
        u_var2 = 0x32;
    }
    pass1_1030_7d1c(uVar1, u_var2, 0x230000, uVar1, (uVar1 >> 0x10), param_3, param_4, param_5);
    return;
}


u16 * pass1_1028_3692(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u8 *param_5, u16 param_6, u16 param_7) {
    pass1_1028_3816(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    param_1 =  0x373e;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16  pass1_1028_36bc(u32 param_1, u32 *param_2, u16 param_3, u16 param_4, u16 param_5) {
    i16       *pi_var1;
    u16        u_var2;
    u32 uVar3;
    u16        uVar4;
    u32 uVar5;
    i16        iStack4;

    uVar5    = str_var1(param_4, param_3);
    *param_2 = 0x0;
    uVar4    = (param_1 >> 0x10);
    if((param_1 + 0x28) != 0x0) {
        iStack4 = 0x4;
        while(true) {
            if(0x1c < iStack4)
                break;
            uVar3   = (param_1 + 0x28);
            uVar5   = pass1_1020_bae6(uVar3, str_var1(iStack4, (uVar3 >> 0x10)), uVar5, (uVar5 >> 0x10), param_5);
            u_var2   = param_2;
            param_2 = param_2 + uVar5;
            pi_var1  = (param_2 + 0x2);
            *pi_var1 = *pi_var1 + (uVar5 >> 0x10) + CARRY2(u_var2, uVar5);
            if(0xf9 < *param_2) {
                return 0x1;
            }
            iStack4 = iStack4 + 0x1;
        }
    }
    return 0x0;
}


u16  pass1_1028_38d4(u32 *param_1, u16 *param_2, u32 param_3, u32 param_4, i16 param_5, u16 param_6, u16 param_7) {
    void **ppcVar1;
    BOOL16     BVar2;
    u32 uVar3;
    u16        uVar4;
    u16        uVar5;

    uVar4 = param_1;
    uVar5 = (param_1 >> 0x10);
    pass1_1028_c7b6(param_7, param_6, uVar4, uVar5, param_2, param_4);
    if((param_5 == 0x5) || (param_5 == 0x6)) {
        ppcVar1 = (*param_1 + 0x60);
        uVar3   = (**ppcVar1)();
        if(uVar3 != 0x0) {
            pass1_1028_c23e(uVar4, uVar5, param_2, param_3, param_4, uVar3, (uVar3 >> 0x10), param_7);
            if(uVar3 != 0x0) {
                BVar2 = pass1_1028_c314(param_7, uVar3, (uVar3 >> 0x10), uVar4, uVar5, param_2, param_3, (param_3 >> 0x10), param_4);
                if(BVar2 != 0x0) {
                    return 0x1;
                }
            }
        }
    } else {
        globals->PTR_LOOP_1050_50ca = 0x6a8;
    }
    return 0x0;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_3958(u32 param_1, i16 param_2, u16 param_3, i16 param_4, u16 param_5, u16 param_6) {
    long      *plVar1;
    qword      qVar2;
    u16        uVar3;
    u16        uVar4;
    u16        uVar5;
    u32        uVar6;
    i16        iVar7;
    u16        uVar8;
    u16        uVar9;
    u32 uStack52;
    u16        local_2c[0x2];
    u32 local_28;
    i16        iStack36;
    u32        uStack34;
    u32 uStack30;
    u16        uStack22;
    u16        uStack20;
    u32 uStack18;
    u32        uStack14;
    u32       *puStack10;
    i16        iStack6;
    u16        uStack4;

    pass1_1028_b58e(param_1);
    puStack10 = (param_2 + 0x22);
    uVar5     = (param_2 + 0x24);
    uVar6     = uVar5;
    if((uVar5 | puStack10) != 0x0) {
        iStack6 = param_2;
        uStack4 = param_3;
        if(globals->PTR_LOOP_1050_574c != 0x0) {
            uStack30 = (puStack10 + 0x4);
            for(uStack34 = 0x0; uStack34 < uStack30; uStack34 = uStack34 + 0x1) {
                pass1_1020_bb16(puStack10,
                                str_var1(param_6, local_2c),
                                str_var1(param_6, &local_28), uStack34);
            }
        }
        uStack14 = *(iStack6 + 0x2e);
        uStack18 = *_PTR_LOOP_1050_65e2;
        uStack20 = uStack18 & 0x1;
        for(uStack22 = 0x4; uStack22 < 0xe; uStack22 = uStack22 + 0x1) {
            local_2c[0] = uStack22;
            local_28    = pass1_1020_bae6(puStack10,
                                       str_var1(uStack22, (puStack10 >> 0x10)), uStack22, uVar6, param_6);
            uVar5       = (local_28 >> 0x10) | local_28;
            uVar6       = uVar5;
            if(uVar5 != 0x0) {
                pass1_1020_bb8a((long *)puStack10, 0x0, local_2c[0] << 0x10, param_5, param_6);
                uVar5    = -(local_28 + (local_28 != 0x0));
                uVar6    = uVar5;
                uStack34 = str_var1(uVar5, -local_28);
                pass1_1038_5694(uStack14, str_var1(uVar5, -local_28), local_2c[0]);
                uStack30 = 0x0;
                iStack36 = 0x0;
                iVar7    = param_1;
                uVar8    = (param_1 >> 0x10);
                switch(uStack22) {
                    case 0x4:
                        uStack30 = local_28 >> 0x1;
                        if((uStack30 == 0x0) && (uStack20 != 0x0)) {
                            uStack30 = 0x1;
                        }
                        iStack36 = 0x11;
                        break;
                    case 0x5:
                        uStack30 = local_28 >> 0x1;
                        if((uStack30 == 0x0) && (uStack20 != 0x0)) {
                            uStack30 = 0x1;
                        }
                        iStack36 = 0x12;
                        break;
                    case 0x6:
                        uStack30 = local_28 >> 0x1;
                        if((uStack30 == 0x0) && (uStack20 != 0x0)) {
                            uStack30 = 0x1;
                        }
                        iStack36 = 0x13;
                        break;
                    case 0x7:
                        uStack30 = local_28 >> 0x1;
                        if((uStack30 == 0x0) && (uStack20 != 0x0)) {
                            uStack30 = 0x1;
                        }
                        iStack36 = 0x14;
                        break;
                    case 0x8:
                        uStack30 = local_28;
                        iStack36 = 0x1a;
                        break;
                    case 0x9:
                        uStack30 = local_28;
                        iStack36 = 0x1b;
                        break;
                    case 0xa:
                        uStack30 = local_28;
                        iStack36 = 0x1c;
                        break;
                    case 0xb:
                        uStack30 = local_28;
                        iStack36 = 0x17;
                        break;
                    case 0xc:
                        iStack36       = 0x18;
                        uStack30       = local_28;
                        plVar1         = (long *)(iVar7 + 0x20);
                        *plVar1        = *plVar1 + local_28;
                        uVar5          = (iVar7 + 0x20);
                        uVar3          = (iVar7 + 0x22);
                        uVar4          = uVar5 >> 0x1 | ((uVar3 & 0x1) != 0x0) << 0xf;
                        uStack52       = str_var1(uVar3 >> 0x1, uVar4);
                        uVar4          = (uVar3 & 0xfffe) + CARRY2(uVar4, uVar4);
                        uVar6          = uVar4;
                        param_4        = (uVar3 - uVar4) - (uVar5 < (uVar5 & 0xfffe));
                        (iVar7 + 0x20) = uVar5 - (uVar5 & 0xfffe);
                        (iVar7 + 0x22) = param_4;
                        if(uStack52 != 0x0) {
                            uVar9 = 0x15;
                            LAB_1028_3b14:
                            uStack30 = local_28;
                            pass1_1020_bb8a(*(long **)(iVar7 + 0x28), uStack52,
                                            str_var1(uVar9, (uStack52 >> 0x10)), param_5, param_6);
                        }
                        break;
                    case 0xd:
                        iStack36       = 0x19;
                        uStack30       = local_28;
                        plVar1         = (long *)(iVar7 + 0x24);
                        *plVar1        = *plVar1 + local_28;
                        uVar5          = (iVar7 + 0x24);
                        qVar2          = (qword)(local_28 & 0xffff0000 | uVar5) / 0x3;
                        uStack52       = (long)qVar2;
                        uStack52 = (qVar2 >> 0x10);
                        uVar3          = qVar2;
                        uVar4          = uStack52 * 0x3 + CARRY2(uVar3, uVar3) + CARRY2(uVar3 * 0x2, uVar3);
                        uVar6          = uVar4;
                        param_4        = uVar5 + uVar3 * -0x3;
                        param_5        = ((iVar7 + 0x26) - uVar4) - (uVar5 < uVar3 * 0x3);
                        (iVar7 + 0x24) = param_4;
                        (iVar7 + 0x26) = param_5;
                        if(uStack52 != 0x0) {
                            uVar9 = 0x16;
                            goto LAB_1028_3b14;
                        }
                }
                if(((uStack30 | uStack30) != 0x0) && (iStack36 != 0x0)) {
                    pass1_1020_bb70(*(long **)(iVar7 + 0x28), uStack30,
                                        str_var1(iStack36, uStack30), param_5, param_4, param_6);
                }
            }
        }
    }
    return;
}


u32  pass1_1028_3c32(u32 *param_1) {
    fn_ptr_1 *ppcVar1;
    i16       iVar2;
    u16       local_6;
    i16       iStack4;

    ppcVar1 = (*param_1 + 0x40);
    iVar2   = (**ppcVar1)();
    if(iVar2 != 0x0) {
        return 0x0;
    }
    return str_var1(-(0x3e8 < local_6) - iStack4, 0x3e8 - local_6);
}


void  pass1_1028_3c60(u32 param_1, u32 *param_2, u16 param_3, u16 param_4, u16 param_5) {
    i16       *pi_var1;
    u16        u_var2;
    u32 uVar3;
    i16        iVar4;
    u16        uVar5;
    u32 uVar6;
    long       local_10;
    u8         local_c[0x4];
    i16        iStack8;
    u16        u_stack6;
    u16        uStack4;

    uVar6    = str_var1(param_4, param_3);
    *param_2 = 0x0;
    uVar5    = (param_1 >> 0x10);
    iVar4    = param_1;
    if((iVar4 + 0x28) != 0x0) {
        iStack8 = 0x4;
        while(true) {
            if(0x1c < iStack8)
                break;
            uVar3   = (iVar4 + 0x28);
            uVar6   = pass1_1020_bae6(uVar3, str_var1(iStack8, (uVar3 >> 0x10)), uVar6, (uVar6 >> 0x10), param_5);
            u_var2   = param_2;
            param_2 = param_2 + uVar6;
            pi_var1  = (param_2 + 0x2);
            *pi_var1 = *pi_var1 + (uVar6 >> 0x10) + CARRY2(u_var2, uVar6);
            if(0x3e7 < *param_2) {
                return;
            }
            iStack8 = iStack8 + 0x1;
        }
    }
    uVar6   = (iVar4 + 0x28);
    uStack4 = (uVar6 + 0x4);
    u_stack6 = 0x0;
    while(true) {
        if(uStack4 <= u_stack6) {
            return;
        }
        pass1_1020_bb16((iVar4 + 0x28),
                        str_var1(param_5, &local_10),
                        str_var1(param_5, local_c), u_stack6);
        *param_2 = *param_2 + local_10;
        if(0x3e7 < *param_2)
            break;
        u_stack6 = u_stack6 + 0x1;
    }
    return;
}


u32  pass1_1028_3ec8(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    (param_1 + 0x20)           = 0x0;
    param_1 =  0x4004;
    param_1->fld2_segment      = SEG_1028;
    pass1_1028_3fa2(str_var1(param_2, param_1));
    return param_1;
}


void  pass1_1028_3f04(u32 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5, u16 param_6) {
    u16 uVar1;
    u32 u_var2;
    u8 *puVar3;
    i16 iVar4;
    u16 uVar5;
    u16 uVar6;
    u32 uStack14;
    u32 uStack10;
    u32 u_stack6;

    uVar6 = 0x1f;
    pass1_1028_b58e(param_1);
    u_stack6  = str_var1(param_3, param_2);
    uStack10 = pass1_1030_7c28(str_var1(param_3, param_2), uVar6, param_2, param_3, param_6);
    puVar3   = (uStack10 >> 0x10);
    u_var2    = uStack10 & 0xffff;
    pass1_1030_7d1c(u_stack6, 0x0, 0x1f0000, u_var2, puVar3, param_4, param_5, param_6);
    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0xc) != 0x22) {
        if((iVar4 + 0xc) == 0x23) {
            uVar1 = 0xa;
        } else {
            uVar1 = 0x5;
        }
        uStack14        = uVar1;
        uStack10        = uStack10 + (iVar4 + 0x20);
        *(iVar4 + 0x20) = uStack10 % uVar1;
        u_var2           = uStack10 / uStack14;
        puVar3          = (uStack10 % uStack14);
        uStack10        = uStack10 + u_var2;
    }
    pass1_1030_7ddc(u_stack6, uStack10, 0x21, u_var2, puVar3, param_4, param_5, param_6);
    return;
}


void  pass1_1028_3fa2(u32 param_1) {
    u16 uVar1;
    i16 iVar2;
    u16 uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0xc) != 0x22) {
        if((iVar2 + 0xc) == 0x23) {
            uVar1 = 0xa;
        } else {
            uVar1 = 0x5;
        }
        uVar1 = uVar1 >> 0x1;
        pass1_1008_612e(0x0, uVar1, uVar1);
        (iVar2 + 0x20) = uVar1;
        (iVar2 + 0x22) = uVar1 >> 0xf;
    }
    return;
}


void  pass1_1028_1b1e(u32 param_1) {
    (param_1 + 0x14) = 0x7;
    return;
}


u16 * pass1_1028_1be8(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    (param_1 + 0x20)           = 0x0;
    (param_1 + 0x22)           = 0x0;
    param_1 =  0x1eee;
    param_1->fld2_segment      = SEG_1028;
    return param_1;
}


u16  pass1_1028_1c1c(void) {
    return 0x0;
}


u16  pass1_1028_1c22(u32 param_1) {
    u16 uVar1;
    i16 iVar2;
    u16 uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(((iVar2 + 0x20) != 0x0) && (((iVar2 + 0x12) == 0x5 || ((iVar2 + 0x12) == 0x6)))) {
        if((iVar2 + 0xc) == 0x16) {
            return 0x19;
        }
        if((iVar2 + 0xc) == 0x17) {
            return 0x1a;
        }
    }
    uVar1 = pass1_1028_bc1c(param_1 & 0xffff | uVar3 << 0x10);
    return uVar1;
}


void  pass1_1028_1c66(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5) {
    fn_ptr_1 *ppcVar1;
    i16       iVar2;
    u32       uVar3;

    if((param_1 + 0x12) != 0x6) {
        return;
    }
    uVar3 = pass1_1028_b4f2(param_1);
    if((uVar3 + 0x200) != 0x8000002) {
        ppcVar1 = (*param_1 + 0x64);
        iVar2   = (**ppcVar1)(param_4, param_1);
        if(iVar2 == 0x0) {
            return;
        }
        pass1_1028_cb04(param_1, param_2, param_3, param_5);
        if(iVar2 == 0x0) {
            iVar2 = 0x6;
            goto LAB_1028_1cbd;
        }
        pass1_1028_c952(param_1, param_2, param_3, param_5);
    }
    iVar2 = 0x5;
LAB_1028_1cbd:
    pass1_1028_bdac(param_1, iVar2, param_4);
    return;
}


// WARNING: Could not reconcile some variable overlaps

u16  pass1_1028_1cca(u32 param_1, u32 *param_2, u16 param_3, u16 param_4, u16 param_5, long param_6, u16 param_7) {
    u16        uVar1;
    u16        u_var2;
    u16        uVar3;
    u8         local_e[0x2];
    i16        local_c;
    i16        local_a;
    u32 local_8;
    u16        uStack4;

    local_8 = *param_2;
    uStack4 = (param_2 + 0x1);
    pass1_1008_3eb4(str_var1(param_7, &local_8),
                    str_var1(param_7, local_e),
                    str_var1(param_7, &local_c),
                    str_var1(param_7, &local_a));
    local_8 = local_8 & 0xffff | (local_c - 0x1) << 0x10;
    u_var2   = param_1;
    uVar3   = (param_1 >> 0x10);
    uVar1   = pass1_1028_1e14(u_var2, uVar3, 0x16,
                            str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
    if(uVar1 == 0x0) {
        local_8 = local_8 & 0xffff | (local_c + 0x1) << 0x10;
        uVar1   = pass1_1028_1e14(u_var2, uVar3, 0x16,
                                str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
        if(uVar1 == 0x0) {
            local_8 = local_a + -0x1;
            local_8 = local_c;
            uVar1         = pass1_1028_1e14(u_var2, uVar3, 0x17,
                                    str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
            if(uVar1 == 0x0) {
                local_8 = str_var1(local_8, local_a + 0x1);
                uVar1   = pass1_1028_1e14(u_var2, uVar3, 0x17,
                                        str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                if(uVar1 == 0x0) {
                    return uVar1;
                }
            }
        }
    }
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_1da4(u16 param_1, u16 param_2, u16 *param_3, u32 param_4, long param_5, u16 param_6) {
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
    if(pu_var2 < 0x0) {
        globals->PTR_LOOP_1050_50ca = 0x6af;
        return;
    }
    return;
}


u16  pass1_1028_1e8a(u32 *param_1, u16 param_2, u16 param_3, u16 param_4) {
    u16 uVar1;
    u32 u_var2;
    u16 uVar3;
    u16 uVar4;
    u16 uVar5;

    uVar1 = (param_1 >> 0x10);
    if((*(u8 *)(param_1 + 0x1a) & 0x2) == 0x0) {
        uVar4 = 0x0;
        uVar5 = 0x23;
        uVar3 = 0x1;
        u_var2 = pass1_1028_b58e(param_1 & 0xffff | uVar1 << 0x10);
        pass1_1030_7d7c(u_var2, uVar3,
                        str_var1(uVar5, uVar4), u_var2, (u_var2 >> 0x10), param_2, param_3, param_4);
        pass1_1028_bdac(param_1, 0x6, 0x1030);
        return 0x0;
    }
    return 0x1;
}


void  pass1_1028_2042(u16 *param_1, u16 param_2) {
    u32 * puVar1;
    u16 u_var2;
    void **ppcVar3;
    u32 uVar4;
    Struct602 *iVar5;
    u16 uVar5;
    u32 uVar6;

    uVar5 = (param_1 >> 0x10);
    iVar5 = (Struct602 *) param_1;
    param_1->fld0_addr_table = addr_table_1028_2572;//0x2572;
    iVar5->fld2_segment = SEG_1028;
    uVar4 = &iVar5->field_0x20;
    (uVar4 + 0xa) = 0x1;
    puVar1 = iVar5->field_0x20;
    u_var2 = iVar5->field_0x22;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    if((globals->_PTR_LOOP_1050_65e2 != 0x0) && (globals->_PTR_LOOP_1050_5a64 != 0x0)) {
        uVar6 = pass1_1028_b58e(param_1);
        pass1_1038_79f2(globals->_PTR_LOOP_1050_5a64, uVar6, param_2);
    }
    pass1_1028_b418(param_1);
    return;
}


u16  pass1_1028_20b0(void) {
    return 0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_20b6(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5) {
    u16 uVar1;
    u8 *pu_var2;
    u16 uVar3;
    u16 uVar4;
    u8  auStack22[0x2];
    i16 iStack20;
    i16 iStack18;
    u32 uStack16;
    u16 uStack12;
    u32 uStack10;
    u32 u_stack6;

    pass1_1028_be9e(param_1, param_2, param_3, param_4, param_5);
    uVar4 = (param_1 >> 0x10);
    uVar3 = param_1;
    if((uVar3 + 0x12) == 0x5) {
        u_stack6  = pass1_1028_bb24(param_1 & 0xffff | uVar4 << 0x10);
        uStack10 = pass1_1028_b58e(param_1);
        pu_var2   = (uStack10 >> 0x10);
        uStack16 = *(uStack10 + 0xc);
        uStack12 = (uStack10 + 0x10);
        pass1_1008_3eb4(str_var1(param_5, &uStack16),
                        str_var1(param_5, auStack22),
                        str_var1(param_5, &iStack20),
                        str_var1(param_5, &iStack18));
        uStack16 = uStack16 & 0xffff | (iStack20 - 0x1) << 0x10;
        uVar1    = pass1_1028_21ba(uVar3, uVar4,
                                str_var1(param_5, &uStack16), u_stack6, &uStack16, pu_var2, param_5);
        if(uVar1 == 0x0) {
            uStack16 = uStack16 & 0xffff | (iStack20 + 0x1) << 0x10;
            uVar1    = pass1_1028_21ba(uVar3, uVar4,
                                    str_var1(param_5, &uStack16), u_stack6, &uStack16, pu_var2, param_5);
            if(uVar1 == 0x0) {
                uStack16 = str_var1(iStack20, iStack18 + -0x1);
                uVar1    = pass1_1028_21ba(uVar3, uVar4,
                                        str_var1(param_5, &uStack16), u_stack6, &uStack16, pu_var2, param_5);
                if(uVar1 == 0x0) {
                    uStack16 = uStack16 & 0xffff0000 | (iStack18 + 0x1);
                    uVar1    = pass1_1028_21ba(uVar3, uVar4,
                                            str_var1(param_5, &uStack16), u_stack6, &uStack16, pu_var2, param_5);
                    if(uVar1 == 0x0) {
                        return;
                    }
                }
            }
        }
        pass1_1038_79b2(globals->_PTR_LOOP_1050_5a64, uStack10, uVar1, pu_var2);
    }
    return;
}


i16  pass1_1028_2290(u32 param_1, u32 *param_2, u16 param_3, u16 param_4, u16 param_5, long param_6, u16 param_7) {
    i16        iVar1;
    u16        u_var2;
    u16        uVar3;
    u8         local_e[0x2];
    i16        local_c;
    i16        local_a;
    u32 local_8;
    u16        uStack4;

    local_8 = *param_2;
    uStack4 = (param_2 + 0x1);
    pass1_1008_3eb4(str_var1(param_7, &local_8),
                    str_var1(param_7, local_e),
                    str_var1(param_7, &local_c),
                    str_var1(param_7, &local_a));
    local_8 = local_8 & 0xffff | (local_c - 0x1) << 0x10;
    u_var2   = param_1;
    uVar3   = (param_1 >> 0x10);
    iVar1   = pass1_1028_2220(u_var2, uVar3, 0x16,
                            str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
    if(iVar1 == 0x0) {
        local_8 = local_8 & 0xffff | (local_c + 0x1) << 0x10;
        iVar1   = pass1_1028_2220(u_var2, uVar3, 0x16,
                                str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
        if(iVar1 == 0x0) {
            local_8 = local_a + -0x1;
            local_8 = local_c;
            iVar1         = pass1_1028_2220(u_var2, uVar3, 0x17,
                                    str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
            if(iVar1 == 0x0) {
                local_8 = str_var1(local_8, local_a + 0x1);
                iVar1   = pass1_1028_2220(u_var2, uVar3, 0x17,
                                        str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                if(iVar1 == 0x0) {
                    return iVar1;
                }
            }
        }
    }
    return 0x1;
}


u16  pass1_1028_236a(u32 *param_1, u16 param_2, u16 param_3, u16 param_4) {
    u16 uVar1;
    u32 u_var2;
    u16 uVar3;
    u16 uVar4;
    u16 uVar5;

    uVar1 = (param_1 >> 0x10);
    if((*(u8 *)(param_1 + 0x1a) & 0x2) == 0x0) {
        uVar4 = 0x0;
        uVar5 = 0x23;
        uVar3 = 0x1;
        u_var2 = pass1_1028_b58e(param_1 & 0xffff | uVar1 << 0x10);
        pass1_1030_7d7c(u_var2, uVar3,
                        str_var1(uVar5, uVar4), u_var2, (u_var2 >> 0x10), param_2, param_3, param_4);
        pass1_1028_bdac(param_1, 0x6, 0x1030);
        return 0x0;
    }
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_23a8(u16 param_1, u16 param_2, u16 *param_3, u32 param_4, long param_5, u16 param_6) {
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
    if(pu_var2 < 0x0) {
        globals->PTR_LOOP_1050_50ca = 0x6af;
        return;
    }
    return;
}


u16 * pass1_1028_25fc(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  s_fem16_wav_1050_2644 + 0x8;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_26d6(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x2788;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


void  pass1_1028_2700(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5) {
    u16 uVar1;
    u32 u_var2;

    pass1_1028_be2a(param_1, param_2, param_3, param_4, param_5);
    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x12) == 0x5) {
        u_var2           = pass1_1028_b4f2(param_1 & 0xffff | uVar1 << 0x10);
        (u_var2 + 0x204) = 0x1;
    }
    return;
}


void  pass1_1028_272e(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5) {
    u32 uVar1;

    pass1_1028_be9e(param_1, param_2, param_3, param_4, param_5);
    uVar1 = pass1_1028_b4f2(param_1);
    if((param_1 + 0x12) == 0x5) {
        (uVar1 + 0x204) = 0x1;
    }
    return;
}


u16 * pass1_1028_2812(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1 =  0x2a92;
    param_1->fld2_segment      = SEG_1028;
    (param_1 + 0xe)            = (param_1 + 0xc);
    return param_1;
}


// WARNING: Could not reconcile some variable overlaps

u16  pass1_1028_2844(u32 param_1, u32 *param_2, u16 param_3, u16 param_4, u16 param_5, long param_6, u16 param_7) {
    BOOL16     BVar1;
    u16        u_var2;
    u16        uVar3;
    u16        uVar4;
    u8         local_e[0x2];
    i16        local_c;
    i16        local_a;
    u32 local_8;
    u16        uStack4;

    local_8 = *param_2;
    uStack4 = (param_2 + 0x1);
    pass1_1008_3eb4(str_var1(param_7, &local_8),
                    str_var1(param_7, local_e),
                    str_var1(param_7, &local_c),
                    str_var1(param_7, &local_a));
    local_8 = local_8 & 0xffff | (local_c - 0x1) << 0x10;
    uVar3   = param_1;
    uVar4   = (param_1 >> 0x10);
    BVar1   = pass1_1028_c5a6(uVar3, uVar4, 0x7b,
                            str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
    if(BVar1 == 0x0) {
        u_var2 = pass1_1028_297c(param_1, str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
        if(u_var2 == 0x0) {
            local_8 = local_8 & 0xffff | (local_c + 0x1) << 0x10;
            BVar1   = pass1_1028_c5a6(uVar3, uVar4, 0x7b,
                                    str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
            if(BVar1 == 0x0) {
                u_var2 = pass1_1028_297c(param_1,
                                         str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                if(u_var2 == 0x0) {
                    local_8 = local_a + -0x1;
                    local_8 = local_c;
                    BVar1         = pass1_1028_c5a6(uVar3, uVar4, 0x7c,
                                            str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                    if(BVar1 == 0x0) {
                        u_var2 = pass1_1028_297c(param_1,
                                                 str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                        if(u_var2 == 0x0) {
                            local_8 = str_var1(local_8, local_a + 0x1);
                            BVar1   = pass1_1028_c5a6(uVar3, uVar4, 0x7c,
                                                    str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                            if(BVar1 == 0x0) {
                                uVar3 = pass1_1028_297c(param_1,
                                                        str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                                if(uVar3 == 0x0) {
                                    return uVar3;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0x1;
}


u16  pass1_1028_297c(u32 param_1, u16 *param_2, long param_3, u16 param_4, u16 param_5, u16 param_6) {
    char cVar1;
    u16  u_var2;
    u32  uVar3;

    pass1_1028_c7b6(param_6, param_5, param_1, (param_1 >> 0x10), param_2, param_3);
    if(param_4 == 0x0) {
        pass1_1030_627e(param_6, 0x0, param_5, globals->_PTR_LOOP_1050_5740, param_2, param_3);
        u_var2 = param_5 | param_4;
        if(u_var2 != 0x0) {
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_4, param_5);
            uVar3 = struct_op_1030_73a8(str_var1(u_var2, param_4));
            u_var2 = (uVar3 + 0xc);
            if(0x4a < u_var2) {
                switch(u_var2) {
                    case 0x4c:
                    case 0x4d:
                    case 0x4e:
                    case 0x60:
                    case 0x61:
                    case 0x62:
                    case 0x63:
                    case 0x6e:
                    case 0x73:
                    case 0x74:
                    case 0x75:
                    case 0x76:
                    case 0x77:
                    case 0x78:
                    case 0x79:
                        goto switchD_1028_2a0b_caseD_4c;
                    default:
                        goto switchD_1028_2a0b_caseD_4f;
                }
            }
            if((u_var2 < 0x48) && (u_var2 != 0x41)) {
                if(u_var2 < 0x42) {
                    cVar1 = u_var2;
                    if(cVar1 < '5') {
                        if('2' < cVar1) {
                            return 0x0;
                        }
                        cVar1 = cVar1 + -0x10;
                    } else {
                        cVar1 = cVar1 + -0x3e;
                    }
                    if(cVar1 == '\0') {
                        return 0x0;
                    }
                }
                switchD_1028_2a0b_caseD_4f:
                return 0x1;
            }
        }
    }
switchD_1028_2a0b_caseD_4c:
    return 0x0;
}


u16 * pass1_1028_2b1c(i16 param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1030_dcc2(param_1, param_2, param_3, param_4, param_5);
    param_1 =  0x2b74;
    param_1->fld2_segment = SEG_1028;
    return param_1;
}


u16 * pass1_1028_0982(Struct179 *param_1, u16 param_2, i16 param_3, u32 param_4, u16 param_5) {
    pass1_1028_b39e(str_var1(param_2, param_1), param_3, param_4, param_5);
    param_1->field_0x20        = 0x0;
    param_1 =  0xada;
    param_1->fld2_segment      = SEG_1028;
    param_1->field_0xe         = 0x4b;
    return param_1;
}


void  pass1_1028_09b8(u32 param_1) {
    u32 uVar1;

    uVar1          = pass1_1028_b58e(param_1);
    (uVar1 + 0x14) = 0x1;
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_09d4(u16 param_1, i16 param_2, u16 param_3, u32 param_4, u16 *param_5, u32 param_6, long param_7) {
    i16    iVar1;
    u8    *pu_var2;
    u16    uVar3;
    u32    uVar4;
    u16    uVar5;
    u16    uVar6;
    u16    uVar7;
    u8     local_6[0x2];
    BOOL16 BStack4;

    uVar5   = param_4;
    uVar6   = (param_4 >> 0x10);
    uVar7   = (param_6 >> 0x10);
    BStack4 = pass1_1028_c314(param_1, param_2, param_3, uVar5, uVar6, param_5, param_6, uVar7, param_7);
    if(BStack4 == 0x0) {
        return;
    }
    pass1_1028_c7b6(param_1, param_3, uVar5, uVar6, param_5, param_7);
    if((BStack4 != 0x0) && (BStack4 != 0x4)) {
        if(((BStack4 - 0x5) < 0x1) || ((SBORROW2(BStack4 - 0x5, 0x1) || (0x3 < (BStack4 - 0x6))))) {
            if(((uVar5 + 0xc) != 0x3e) && ((uVar5 + 0xc) != 0x41)) {
                return;
            }
            uVar4 = pass1_1030_bcae(local_6, param_1);
            uVar3 = (uVar4 >> 0x10);
            iVar1 = uVar4;
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_6, uVar7);
            uVar4 = *(iVar1 + 0x10);
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar4, (uVar4 >> 0x10));
            pu_var2 = local_6;
            pass1_1030_bcde(param_1, pu_var2, param_1, uVar4 & 0xffff | uVar3 << 0x10, param_5, param_7);
            if(pu_var2 < 0x0) {
                globals->PTR_LOOP_1050_50ca = 0x6af;
                return;
            }
            if(0x5 < pu_var2) {
                globals->PTR_LOOP_1050_50ca = 0x6b5;
                return;
            }
            return;
        }
    }
    globals->PTR_LOOP_1050_50ca = 0x6a8;
    return;
}
