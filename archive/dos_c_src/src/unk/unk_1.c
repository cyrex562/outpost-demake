#include "unk_1.h"

#include "address_tables/function_tables.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "struct_43.h"
#include "struct_ops_6.h"
#include "structs/structs_5xx/structs_51x.h"
#include "ui_ops/ui_ops_6.h"
#include "unk_10.h"
#include "unk_17.h"


void pass1_1040_d76e(struct_1040_d76e_1 *param_1) {
    u32 u32_var1;
//    u8*        param_1_lo;
//    u8*        param_1_hi;
//    param_1_hi = (param_1 >> 0x10);
//    param_1_lo = param_1;
    u32_var1 = (param_1->field_0x94);
    pass1_1018_5742(u32_var1,
                    (param_1->field_0x9c),
                    (param_1->field_0x98));
    (param_1->field_0x9c) = 0x0;
}


void pass1_1040_d0f8(Globals *globals, Struct57 *param_1, u16 param_2)

{
    u16          u16_var1;
    u16          in_DX;
    u16          u16_var2;
    u16          u16_var3;
    u16          u16_var4;
//    Struct438 *iVar5;
    i16          unaff_DI;
//    u16          uVar5;
    u16          u16_var7;
    u16          u16_var6;
    u32          u32_var7;
    Struct392 *iVar8;

    struct_1040_b082(param_1, str_var1(param_2, 0x1845));
//    uVar5 = (param_1 >> 0x10);
//    iVar5 = (Struct438 *) param_1;
    &param_1->field_0x94 = 0x0;
    param_1->field_0x98 = globals->dat_1050_5f16;
    &param_1->field_9c = 0x0;
    param_1->field_0xa0 = 0x0;
    param_1 = addr_table_1040_d8c4;//0xd8c4;
    param_1->field_0x2 = SEG_1040;
    u16_var6
      = mixed_1010_20ba(globals->u16_1050_0ed0, 0x47, u16_var7, in_DX, unaff_DI);
    u16_var2            = (u16_var6 >> 0x10);
    param_1->field_0x94 = u16_var6;
    param_1->field_0x96 = u16_var2;
    u32_var7            = pass1_1018_5732(param_1->field_0x94, u16_var2, param_1->field_0x98, u16_var6, u16_var2, u16_var7);
    u16_var3          = (u32_var7 >> 0x10);
    param_1->field_9c = u32_var7;
    param_1->field_9e = u16_var3;
    u16_var1          = u16_var3 | param_1->field_9c;
    if(u16_var1 == 0x0)
    {
        mem_op_1000_179c(0xc, u16_var3, 0);
        u16_var4 = (u16_var3 | u16_var1);
        if(u16_var4 == 0x0)
        {
            param_1->field_9c = 0x0;
        }
        else
        {
            pass1_1010_8ef2(str_var1(u16_var3, u16_var1), u16_var4, u16_var7);
            param_1->field_9c   = u16_var1;
            param_1->field_9e = u16_var4;
        }
    }
}


u16 * pass1_1040_c9cc(u16 *param_1, u8 param_2)

{
    pass1_1040_c5ac(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}


void pass1_1040_c71e(Struct65 *param_1)

{
    pass1_1040_9252(param_1);
    (param_1->field_0x28) = (param_1->field_0x24) / 0x2 - (param_1->field_0x2c) / 0x2;
}


void pass1_1040_c630(Globals *globals, Struct165 *param_1, u16 param_2, u16 param_3)

{
    i16    iVar1;
    void *fn_ptr_1;
    u32    uVar3;
    void**    addr_table;
    //    Struct165 *iVar4;
    u16 uVar5;

//    uVar5 = (param_1 >> 0x10);
    //    iVar4 = (Struct165 *)param_1;
    uVar3 = param_1->field_0x42;
    if((uVar3 + 0x12) != 0x71)
    {
        param_1->field_0x36 = 0x5;
        param_1->field_0x26 = 0x5;
        param_1->field_0x28 = 0x5;
        iVar1               = param_1->field_0x36;
        param_1->field_0x30 = iVar1;
        param_1->field_0x2e = iVar1;
        if(globals->dat_1050_5f02 == 0x0)
        {
            globals->dat_1050_5f04
              = unk_io_op_1010_830a(globals->dat_1050_14cc,
                                    0xff,
                                    param_3);
            param_2 = SEG_1010;
            globals->dat_1050_5f08
              = unk_io_op_1010_830a(globals->dat_1050_14cc, 0x100, param_3);
        }
        globals->dat_1050_5f02      = globals->dat_1050_5f02 + 0x1;
        param_1->field_0x8          = globals->dat_1050_5f04;
        param_1->field_0xc          = globals->dat_1050_5f08;
        pass1_1040_9618(param_1);
        param_1->field_0x20 = 0x0;
        param_1->field_0x1e = 0xc8;
        param_1->field_0x22 = 0xa0;
        param_1->field_0x24 = param_1->field_0x2c + param_1->field_0x36;
        param_1->field_0x2e = param_1->field_0x36 * 0x3 + param_1->field_0x2a;
        param_1->field_0x30 = param_1->field_0x36;
        param_1->field_0x32 = param_1->field_0x22 - param_1->field_0x36;
        param_1->field_0x3c = 0x25;
        addr_table          = param_1->field_0x0;
        fn_ptr_1            = (addr_table + 0x4);
        (*fn_ptr_1)(param_2, param_1);
        fn_ptr_1 = (addr_table + 0x8);
        (*fn_ptr_1)(param_2, param_1, uVar5);
    }
}


u16  pass1_1040_c60e(u32 param_1)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x42) != 0x0)
    {
        uVar1 = (param_1 + 0x42);
        return (uVar1 + 0x12);
    }
    return 0x0;
}


u32  pass1_1040_c518(u32 param_1, u8 param_2, u16 param_3)

{
    pass1_1040_bf92(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1040_bf92(u16 *param_1, u16 param_2) {
    Struct514 *iVar1;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct514 *) param_1;
    param_1->field_0x0 = addr_table_1040_c53e;//0xc53e;
    iVar1->fld2_segment = SEG_1040;
    pass1_1010_1ea6(iVar1->field_0x6, param_1 & 0xffff | uVar1 << 0x10, param_2);
    unk_destroy_win_op_1010_2fa0(iVar1->field_0x6, SEG_1010);
    param_1->field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    iVar1->fld2_segment = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->fld2_segment = SEG_1008;
    return;
}


void  pass1_1040_bfde(Struct160 *param_1, Struct160 *param_2, u16 param_3)

{
    void **ppcVar1;
    u32 u_var2;
    i16        iVar3;
    u16        uVar4;

    uVar4                  = (param_1 >> 0x10);
    iVar3                  = param_1;
    (iVar3 + 0x6) = param_2;
    ppcVar1                = (*param_2 + 0x4);
    (**ppcVar1)();
    u_var2          = (iVar3 + 0x6);
    (u_var2 + 0x22) = (iVar3 + 0x4);
    pass1_1010_2ee2((iVar3 + 0x6), param_3, SEG_1010);
    return;
}


u16  pass1_1040_bb5a(u32 param_1)

{
    fn_ptr_1 *ppcVar1;

    ppcVar1 = ((param_1 + 0x94) + 0x8);
    (**ppcVar1)();
    return 0x0;
}


void  pass1_1040_b8be(u32 *param_1)

{
    fn_ptr_1 *ppcVar1;

    ppcVar1 = (*param_1 + 0x80);
    (**ppcVar1)();
    return;
}


u16  pass1_1040_b316(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, i16 param_5)

{
    fn_ptr_1 *ppcVar1;
    u16       uStack4;

    if(param_5 == 0xf)
    {
        ppcVar1 = (*param_1 + 0x60);
        uStack4 = (**ppcVar1)();
    }
    else
    {
        if(param_5 == 0x111)
        {
            ppcVar1 = (*param_1 + 0x10);
            (**ppcVar1)();
            uStack4 = 0x1;
        }
        else
        {
            uStack4 = pass1_1040_79c0(param_1, param_2, param_3, param_4, param_5);
        }
    }
    return uStack4;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1040_b17c(u32 param_1, u32 param_2, u8 *param_3, i16 param_4, i16 param_5, u16 param_6)

{
    i16       *pi_var1;
    u32 u_var2;
    char      *pcVar3;
    u16        uVar4;
    i16        iVar5;
    u16        uVar6;
    u8        *puVar7;
    u16       *puVar8;
    u16       *puStack12;
    i16        iStack4;

    iStack4 = 0x0;
    while(true)
    {
        uVar6  = (param_1 >> 0x10);
        iVar5  = param_1;
        pi_var1 = *(i16 **)(iVar5 + 0x90);
        puVar7 = (pi_var1 >> 0x10);
        if(*pi_var1 == iStack4 || *pi_var1 < iStack4)
            break;
        param_5                       = (iStack4 * 0x2 + param_2);
        u_var2                         = (pi_var1 + 0x2);
        (iStack4 * 0xa + u_var2 + 0x4) = param_5;
        iStack4                       = iStack4 + 0x1;
        param_3                       = puVar7;
    }
    puVar8    = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_6, param_3, param_5);
    uVar4     = (puVar8 >> 0x10);
    u_var2     = (iVar5 + 0x90);
    puStack12 = *(u16 **)(u_var2 + 0x2);
    for(iStack4 = 0x0; pi_var1 = *(i16 **)(iVar5 + 0x90), *pi_var1 != iStack4 && iStack4 <= *pi_var1; iStack4 = iStack4 + 0x1)
    {
        u_var2  = (iVar5 + 0x90);
        u_var2  = (u_var2 + 0x6);
        pcVar3 = pass1_1010_b038(puVar8, u_var2, (u_var2 >> 0x10), (puStack12 + 0x4), param_4);
        string_1040_a626(puStack12, str_var1(uVar4, pcVar3), uVar4);
        puStack12 = (puStack12 & 0xffff0000 | (puStack12 + 0xa));
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1040_ac84(Struct57 *param_1, u16 param_2, u8 *param_3, i16 param_4, u16 param_5) {
    Struct726 *iVar1;
    u16 uVar1;
    u16 *pu_var2;

    struct_1040_b082(param_1, str_var1(param_2, 0x1f3));
    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct726 *) param_1;
    iVar1->field_0x94 = 0x0;
    &iVar1->field_0x98 = 0x0;
    param_1 = addr_table_1040_afc4;//0xafc4;
    iVar1->fld2_segment = SEG_1040;
    iVar1->field_0x94 = globals->_PTR_LOOP_1050_5ef0;
    globals->_PTR_LOOP_1050_5ef0 = 0x0;
    pu_var2 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3d, param_5, param_3, param_4);
    iVar1->field_0x98 = pu_var2;
    iVar1->field_0x9a = (pu_var2 >> 0x10);
    return;
}


u16 * pass1_1040_a204(u16 *param_1, u8 param_2) {
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        fn_ptr_1000_17ce((Struct18 *) param_1, SEG_1000);
    }
    return param_1;
}


u32  pass1_1040_a2cc(i16 param_1, u32 param_2, u32 param_3, u16 param_4, u8 *param_5, u16 param_6, u16 param_7)

{
    u16 uVar1;

    if(param_3 == 0x1826)
    {
        if((param_3 == 0x1) || ((0x1 < param_3 - 0x1U && (param_3 - 0x3U < 0x2))))
        {
            uVar1 = 0x1;
        }
        else
        {
            uVar1 = 0x0;
        }
        return uVar1;
    }
    pass1_1040_b54a(param_1, param_2, (param_2 >> 0x10), param_3, param_5, param_6, param_7);
    return str_var1(param_5, param_4);
}


void  pass1_1040_8b3c(u16 param_1, u32 param_2, u32 param_3, u16 param_4)

{
    if((param_3 != 0x0) && ((param_3 == (&PTR_LOOP_1050_0000 + 0x1) || param_3 == &PTR_LOOP_1050_0002 || (((&PTR_LOOP_1050_0002 + 0x1U) < param_3 + -0x2 && (param_3 + -0x6 < &PTR_LOOP_1050_0002))))))
    {
        globals->PTR_LOOP_1050_5df4 = 0x0;
        globals->dat_1050_5df8      = param_3;
        return;
    }
    post_win_msg_1040_7b3c(
      str_var1(param_2, param_1), (param_2 >> 0x10), param_3, param_3, param_4);
    return;
}


u16 * pass1_1040_8e58(i16 param_1, u16 param_2, u16 param_3, u32 param_4)

{
    pass1_1040_b040(
      str_var1(param_2, param_1), str_var1(param_4, param_3), (param_4 >> 0x10));
    param_1 =  0x8f3c;
    param_1->fld2_segment = SEG_1040;
    return param_1;
}


void  pass1_1040_9422(u32 *param_1)

{
    void **ppcVar1;
    u16    u_var2;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x8) != 0x0)
    {
        ppcVar1 = (*param_1 + 0x10);
        (**ppcVar1)();
    }
    if((param_1 + 0x4) != 0x0)
    {
        ppcVar1 = (*param_1 + 0x14);
        (**ppcVar1)();
    }
    return;
}


void  pass1_1040_9618(Struct65 *param_1)

{
    u16          uVar1;
    Struct162 *iVar2;
    u16          u_var2;
    u32          uVar3;

    u_var2             = (param_1 >> 0x10);
    iVar2             = (Struct162 *)param_1;
    uVar3             = pass1_1008_4772(iVar2->field_0x8);
    uVar1             = (uVar3 >> 0x10);
    iVar2->field_0x2a = (uVar3 + 0x4);
    iVar2->field_0x2c = (uVar3 + 0x8);
    return;
}


u16  pass1_1040_824a(u32 param_1, i16 param_2)

{
    if((param_1 + 0x6) != param_2)
    {
        return 0x1;
    }
    return 0x0;
}


void  pass1_1040_807e(Struct395 *param_1, u16 param_2, u16 param_3)

{
    u16          uVar1;
    void **ppcVar2;
    u32  *puVar3;
    u32  *puVar4;
    u8          *in_DX;
    u16          uVar5;
    u8          *extraout_DX;
    u8          *puVar6;
    u8          *extraout_DX_00;
    u8          *puVar7;
    Struct395 *iVar9;
    u16          uVar8;
    Struct43  *paVar9;
    u32          uStack10;
    Struct393 *iVar8;

    if(param_2 == 0x1)
    {
        pass1_1040_805a(in_DX);
        return;
    }
    paVar9 = unk_io_op_1010_830a(globals->dat_1050_14cc, param_2, param_3);
    uVar5  = (paVar9 >> 0x10);
    puVar3 = paVar9;
    if((uVar5 | puVar3) != 0x0)
    {
        ppcVar2 = (paVar9 + 0x14);
        puVar4  = puVar3;
        (**ppcVar2)(SEG_1010, puVar3, uVar5);
        uStack10 = str_var1(extraout_DX, puVar4);
        uVar8    = (param_1 >> 0x10);
        iVar9    = (Struct395 *)param_1;
        puVar6   = extraout_DX;
        if(iVar9->field_0x70 != (Struct90 *)0x0)
        {
            puVar4 = &iVar9->field_0x70;
            uVar1  = (&iVar9->field_0x70 + 0x2);
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
        &iVar9->field_0x70 = puVar4;
        (&iVar9->field_0x70 + 0x2)         = puVar7;
        pass1_1008_4d84(iVar9->field_0x70, uStack10, puVar7);
        if(paVar9 != (Struct43 *)0x0)
        {
            ppcVar2 = paVar9;
            (**ppcVar2)(SEG_1008, puVar3, uVar5, 0x1);
        }
        return;
    }
    return;
}


u32  pass1_1040_805a(u8 *param_1)

{
    i16 unaff_DI;
    u16 uVar1;
    u16 unaff_SS;

    if(globals->_PTR_LOOP_1050_4230 == 0x0)
    {
        mixed_1010_20ba(globals->u16_1050_0ed0, 0x28, unaff_SS, param_1, unaff_DI);
    }
    uVar1 = (globals->_PTR_LOOP_1050_4230 >> 0x10);
    return str_var1((globals->_PTR_LOOP_1050_4230 + 0x10), (globals->_PTR_LOOP_1050_4230 + 0xe));
}


u16  pass1_1040_8054(void)

{
    return 0x0;
}


void  pass1_1040_78de(void)

{
    return;
}


void  pass1_1040_741e(u32 param_1, u16 param_2)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    pass1_1010_1ea6(*(iVar4 + 0x94), param_1 & 0xffff | uVar5 << 0x10, param_2);
    puVar1 = (iVar4 + 0x98);
    u_var2  = (iVar4 + 0x9a);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)(SEG_1010, puVar1, u_var2, 0x1);
    }
    (iVar4 + 0x98) = 0x0;
    (iVar4 + 0x94) = 0x0;
    return;
}


i16  pass1_1040_5eaa(u32 param_1)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    switch((iVar1 + 0x9a))
    {
    case 0x0:
    case 0x70:
    case 0x71:
        (iVar1 + 0x98) = 0x0;
        return iVar1;
    case 0x1:
    case 0x2:
        (iVar1 + 0x98) = 0xd;
        return iVar1;
    case 0x3:
        (iVar1 + 0x98) = 0xe;
        return iVar1;
    case 0x4:
    case 0x4b:
        (iVar1 + 0x98) = 0xf;
        break;
    case 0x5:
        (iVar1 + 0x98) = 0x10;
        return iVar1;
    case 0x6:
        (iVar1 + 0x98) = 0x11;
        return iVar1;
    case 0x7:
        (iVar1 + 0x98) = 0x12;
        break;
    case 0x8:
        (iVar1 + 0x98) = 0x13;
        break;
    case 0x9:
    case 0xa:
    case 0xb:
        (iVar1 + 0x98) = 0x14;
        break;
    case 0xc:
        (iVar1 + 0x98) = 0x18;
        break;
    case 0xd:
        (iVar1 + 0x98) = 0x19;
        break;
    case 0xe:
    case 0x76:
        (iVar1 + 0x98) = 0x17;
        break;
    case 0xf:
    case 0x10:
    case 0x11:
        (iVar1 + 0x98) = 0x1a;
        break;
    case 0x12:
        (iVar1 + 0x98) = 0x1b;
        break;
    case 0x13:
        (iVar1 + 0x98) = 0x1c;
        break;
    case 0x14:
        (iVar1 + 0x98) = 0x1d;
        break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
        (iVar1 + 0x98) = 0x1e;
        break;
    case 0x1a:
        (iVar1 + 0x98) = 0x1f;
        break;
    case 0x1b:
        (iVar1 + 0x98) = 0x20;
        break;
    case 0x1c:
    case 0x1d:
    case 0x1e:
        (iVar1 + 0x98) = 0x21;
        break;
    case 0x1f:
        (iVar1 + 0x98) = 0x22;
        break;
    case 0x20:
        (iVar1 + 0x98) = 0x23;
        break;
    case 0x21:
        (iVar1 + 0x98) = 0x24;
        break;
    case 0x22:
        (iVar1 + 0x98) = 0x25;
        break;
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
        (iVar1 + 0x98) = 0x26;
        break;
    case 0x2c:
        (iVar1 + 0x98) = 0x27;
        break;
    case 0x2d:
        (iVar1 + 0x98) = 0x28;
        break;
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
        (iVar1 + 0x98) = 0x29;
        break;
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x4d:
        (iVar1 + 0x98) = 0x2a;
        break;
    case 0x36:
        (iVar1 + 0x98) = 0x2b;
        break;
    case 0x37:
    case 0x38:
    case 0x39:
        (iVar1 + 0x98) = 0x2c;
        break;
    case 0x3a:
        (iVar1 + 0x98) = 0x2d;
        break;
    case 0x3b:
    case 0x3c:
        (iVar1 + 0x98) = 0x2e;
        break;
    case 0x3d:
        (iVar1 + 0x98) = 0x2f;
        break;
    case 0x3e:
        (iVar1 + 0x98) = 0x30;
        break;
    case 0x3f:
        (iVar1 + 0x98) = 0x31;
        break;
    case 0x40:
        (iVar1 + 0x98) = 0x32;
        break;
    case 0x41:
        (iVar1 + 0x98) = 0x33;
        break;
    case 0x42:
        (iVar1 + 0x98) = 0x34;
        break;
    case 0x43:
        (iVar1 + 0x98) = 0x35;
        break;
    case 0x44:
        (iVar1 + 0x98) = 0x36;
        break;
    case 0x45:
        (iVar1 + 0x98) = 0x37;
        break;
    case 0x46:
        (iVar1 + 0x98) = 0x38;
        break;
    case 0x47:
        (iVar1 + 0x98) = 0x39;
        break;
    case 0x48:
    case 0x49:
    case 0x4a:
        (iVar1 + 0x98) = 0x3a;
        break;
    case 0x4c:
        (iVar1 + 0x98) = 0x3b;
        break;
    case 0x4e:
        (iVar1 + 0x98) = 0x3c;
        break;
    case 0x4f:
    case 0x50:
        (iVar1 + 0x98) = 0x3d;
        break;
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
        (iVar1 + 0x98) = 0x3e;
        break;
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
        (iVar1 + 0x98) = 0x3f;
        break;
    case 0x5b:
        (iVar1 + 0x98) = 0x40;
        break;
    case 0x5c:
    case 0x5d:
    case 0x5e:
        (iVar1 + 0x98) = 0x41;
        break;
    case 0x5f:
    case 0x60:
    case 0x61:
        (iVar1 + 0x98) = 0x42;
        break;
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
    case 0x66:
        (iVar1 + 0x98) = 0x43;
        break;
    case 0x67:
    case 0x68:
        (iVar1 + 0x98) = 0x44;
        break;
    case 0x69:
        (iVar1 + 0x98) = 0x45;
        break;
    case 0x6a:
        (iVar1 + 0x98) = 0x46;
        break;
    case 0x6b:
        (iVar1 + 0x98) = 0x47;
        break;
    case 0x6c:
        (iVar1 + 0x98) = 0x48;
        break;
    case 0x6d:
        (iVar1 + 0x98) = 0x49;
        break;
    case 0x6e:
        (iVar1 + 0x98) = 0x4a;
        break;
    case 0x6f:
        (iVar1 + 0x98) = 0x4b;
        break;
    case 0x74:
        (iVar1 + 0x98) = 0x15;
        break;
    case 0x75:
        (iVar1 + 0x98) = 0x16;
        break;
    case 0x78:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
        (iVar1 + 0x98) = 0x4c;
    }
    return iVar1;
}


void  pass1_1040_6402(Struct57 *param_1, u16 param_2, u8 *param_3, i16 param_4, u16 param_5)

{
    void **ppcVar1;
    Struct725 *iVar2;
    u16 u_var2;
    u16 *puVar3;

    get_sys_metrics_1040_7728(param_1, 0x1, 0x0, 0x1850, param_2);
    u_var2 = (param_1 >> 0x10);
    iVar2 = (Struct725 *) param_1;
    iVar2->field_0x8e = 0x0;
    iVar2->field_0x92 = 0x0;
    param_1 = addr_table_1040_67ba;//0x67ba;
    iVar2->fld2_segment = SEG_1040;
    puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_5, param_3, param_4);
    &iVar2->field_0x92 = puVar3;
    (&iVar2->field_0x92 + 0x2) = (puVar3 >> 0x10);
    ppcVar1 = (*iVar2->field_0x92 + 0x4);
    (**ppcVar1)();
    return;
}


void  pass1_1040_6470(Struct18 *param_1, u16 param_2) {
    Struct18 *iVar1;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct18 *) param_1;
    param_1->field_0x0 = addr_table_1040_67ba;//0x67ba;
    iVar1->field_0x2 = SEG_1040;
    if (&iVar1->field_0x92 != 0x0) {
        pass1_1010_1ea6(*&iVar1->field_0x92, (long) param_1, param_2);
    }
    pass1_1038_b6e0(globals->ptr_1050_5b7c, iVar1->field_0x6);
    fn_ptr_1000_17ce(&iVar1->field_0x8e, SEG_1000);
    ui_cleanup_op_1040_782c(param_1, SEG_1000);
    return;
}


Struct18 * pass1_1040_6794(Struct18 *param_1, u8 param_2, u16 param_3)

{
    pass1_1040_6470(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1040_6826(Struct57 *param_1, u16 param_2) {
    i16 iVar1;
    u16 u_var2;

    pass1_1040_b0bc(param_1, 0x0, str_var1(param_2, 0xfda));
    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    (iVar1 + 0x94) = 0x0;
    (iVar1 + 0x98) = 0x0;
    param_1 = addr_table_1040_6f32;//0x6f32;
    (iVar1 + 0x2) = SEG_1040;
    return;
}


u16  pass1_1040_68d2(u32 *param_1, i16 *param_2, u16 param_3, u16 param_4, i16 param_5, u16 param_6)

{
    fn_ptr_1 *ppcVar1;
    u16       u_var2;

    if(param_5 == 0x2b)
    {
        if(*param_2 == 0x4)
        {
            win_ui_get_prop_op_1040_9566(str_var1(param_3, param_2), param_6);
        }
    }
    else
    {
        if(param_5 != 0x111)
        {
            u_var2 = pass1_1040_b316(param_1, param_2, param_3, param_4, param_5);
            return u_var2;
        }
        ppcVar1 = (*param_1 + 0x80);
        (**ppcVar1)(param_6, param_1, param_2, str_var1(param_4, param_3));
    }
    return 0x1;
}


void  pass1_1040_6cac(u32 param_1, u16 param_2)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    pass1_1010_1ea6(*(iVar4 + 0x94), param_1 & 0xffff | uVar5 << 0x10, param_2);
    puVar1 = (iVar4 + 0x98);
    u_var2  = (iVar4 + 0x9a);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)(SEG_1010, puVar1, u_var2, 0x1);
    }
    (iVar4 + 0x98) = 0x0;
    (iVar4 + 0x94) = 0x0;
    return;
}


void  pass1_1040_6fb6(Struct57 *param_1, u16 param_2) {
    i16 iVar1;
    u16 u_var2;

    pass1_1040_b0bc(param_1, 0x0, str_var1(param_2, 0xfd9));
    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    (iVar1 + 0x94) = 0x0;
    (iVar1 + 0x98) = 0x0;
    param_1 = addr_table_1040_76a4;//0x76a4;
    (iVar1 + 0x2) = SEG_1040;
}


void  pass1_1040_4d7e(u32 param_1)

{
    u32 uVar1;
    i16       *piVar2;
    u16        uVar3;
    i16        iStack8;
    u32       *pu_stack6;

    uVar3    = (param_1 >> 0x10);
    uVar1    = (param_1 + 0x90);
    pu_stack6 = (uVar1 + 0x2);
    iStack8  = 0x0;
    while((piVar2 = *(i16 **)(param_1 + 0x90), *piVar2 != iStack8 && iStack8 <= *piVar2 && ((pu_stack6 + 0x4) != 0x1770)))
    {
        iStack8  = iStack8 + 0x1;
        pu_stack6 = (pu_stack6 & 0xffff0000 | (pu_stack6 + 0xa));
    }
    pass1_1000_3e2c(*pu_stack6);
    return;
}
