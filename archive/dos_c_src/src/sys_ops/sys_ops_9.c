#include "sys_ops_9.h"

#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_20.h"
#include "struct_43.h"
#include "struct_ops/struct_ops_1.h"
#include "structs/structs_1xx/structs_16x.h"
#include "structs/structs_2xx/structs_20x.h"
#include "structs/structs_2xx/structs_21x.h"
#include "unk/unk_15.h"
#include "utils.h"
#include "win_ops/win_ops_3.h"


void pass1_1010_28e6(Struct631 *param_1, u8 *param_2, u16 param_3, u8 *param_4, u16 param_5)

{
    u32  uVar1;
    u16         u_var2;
    i16         iVar3;
    u16         uVar4;
    struct Struct43 *paVar5;
    i16         iStack6;

    struct_op_1018_4cda(param_1, param_2, param_3);
    &param_1->field_0x1c_addr_base      = 0x0;
    param_1->field_0x20        = 0x0;
    param_1->field_0x22        = 0x0;
    param_1->field_0x24        = 0x0;
    param_1->field_0x26        = 0x0;
    param_1 =  addr_table_1010_2be4;//0x2be4; // s_add16_wav_1050_2bdc + 0x8;
    param_1->fld2_segment = SEG_1010;
    globals->dat_1050_4230 = param_1;
    globals->dat_1050_4232 = param_2;
    pass1_1018_4dce(CONCAT13((param_2 >> 0x8), CONCAT12(param_2, param_1)), 0x56, param_4, param_5);
    paVar5              = unk_io_op_1010_830aglobals->dat_1050_14cc, 0x4, param_5);
    globals->dat_1050_5f2e        = (paVar5 >> 0x10);
    param_1->field_0x1c_addr_base = paVar5;
    param_1->field_0x1e = globals->dat_1050_5f2e;
    if(globals->_PTR_LOOP_1050_5f2c == 0x0)
    {
        globals->dat_1050_5f2c = mem_op_1000_160a(globals->PTR_LOOP_1050_5f2e, SEG_1000);
    }
    else
    {
    }
    u_var2               = fn_ptr_op_1000_1708(0x40, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
    param_1->field_0x28 = u_var2;
    param_1->field_0x2a = globals->dat_1050_5f2e;
    for(iStack6 = 0x0; iStack6 < 0x10; iStack6 = iStack6 + 0x1)
    {
        paVar5                        = unk_io_op_1010_830aglobals->dat_1050_14cc, iStack6 + 0x56, param_5);
        uVar1                         = &param_1->field_0x28;
        uVar4                         = (uVar1 >> 0x10);
        iVar3                         = uVar1;
        (iVar3 + iStack6 * 0x4)       = paVar5;
        (iVar3 + iStack6 * 0x4 + 0x2) = (paVar5 >> 0x10);
    }
    return;
}

u16 *unk_load_str_op_1010_2c34(void)

{
    u16 *pUVar1;
    u8    *in_DX;
    short  in_buf_len_5;
    i16    unaff_DI;
    u16    unaff_SS;
    u16   *pu_var2;

    pu_var2 = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x3, unaff_SS, in_DX, unaff_DI);
    mem_op_1000_179c(0x80, (pu_var2 >> 0x10), SEG_1000);
    in_buf_len_5 = (short)(pu_var2 >> 0x10);
    load_string_1010_84e0(SEG_1000, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10), 0x80, pu_var2, in_buf_len_5);
    pUVar1 = pass1_1000_3cea(pu_var2, s__1050_11c8);
    pass1_1010_e964(in_buf_len_5, unaff_SS, unaff_DI);
    pass1_1000_3cea(pu_var2, str_var1(in_buf_len_5, pUVar1));
    return pu_var2;
}

void pass1_1010_32f4(Struct166 *param_1, u32 *param_2, u16 param_3, u16 param_4)

{
    u16         *puVar1;
    u32  *pu_var2;
    u32   uVar3;
    u32   uVar4;
    void **ppcVar5;
    Struct65  *paVar6;
    u32          uVar7;
    u16          uVar8;
    u16          uVar9;
    u16          uVar10;
    i16          iVar11;
    u8          *extraout_DX;
    u16          extraout_DX_00;
    Struct166 *iVar10;
    i16          iVar12;
    i16          iVar13;
    u16          uVar14;
    u16          uVar15;
    u16          uVar16;
    u16         *puStack48;
    u16          uStack16;
    i16          iStack12;

    uVar14 = (param_1 >> 0x10);
    iVar10 = (Struct166 *)param_1;
    if(iVar10->field_0x52 != (Struct65 *)0x0)
    {
        param_4 = SEG_1000;
        fn_ptr_1000_17ce((Struct18 *)iVar10->field_0x52, SEG_1000);
        iVar10->field_0x52 = (Struct65 *)0x0;
        iVar10->field_0x18 = 0x0;
    }
    uVar8 = param_2 | param_2;
    if((param_2 != 0x0) && (ppcVar5 = (*param_1 + 0x24), (**ppcVar5)(param_4, param_1, param_2), uVar8 != 0x0))
    {
        ppcVar5 = (*param_2 + 0x4);
        (**ppcVar5)(param_4, param_2);
        iVar10->field_0x18 = uVar8;
        if(uVar8 != 0x0)
        {
            iVar10->field_0x24 = 0x0;
            iVar10->field_0x26 = 0x0;
            puVar1             = &iVar10->field_0x18;
            *puVar1            = *puVar1 - iVar10->field_0x28;
            if(0xa < iVar10->field_0x18)
            {
                iVar10->field_0x26 = 0x1;
                iVar10->field_0x18 = 0xa;
            }
            if(0x1 < iVar10->field_0x28)
            {
                iVar10->field_0x24 = 0x1;
            }
            if(globals->_PTR_LOOP_1050_5f2c == 0x0)
            {
                globals->dat_1050_5f2e      = extraout_DX;
                globals->dat_1050_5f2c      = mem_op_1000_160a(extraout_DX, SEG_1000);
            }
            else
            {
            }
            uVar16                      = SEG_1000;
            uVar9                       = fn_ptr_op_1000_1708(0x28, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
            &iVar10->field_0x52         = uVar9;
            (&iVar10->field_0x52 + 0x2) = globals->dat_1050_5f2e;
            if((*(&iVar10->field_0x52 + 0x2) | *&iVar10->field_0x52) != 0x0)
            {
                uVar3    = (param_2 + 0x8);
                iVar11   = iVar10->field_0x10;
                iStack12 = 0x0;
                for(uStack16 = 0x0; puVar1 = &iVar10->field_0x18, *puVar1 != uStack16 && uStack16 <= *puVar1; uStack16 = uStack16 + 0x1)
                {
                    paVar6    = iVar10->field_0x52;
                    uVar8     = paVar6 + uStack16 * 0x4;
                    uVar7     = paVar6 & 0xffff0000;
                    puStack48 = (uVar7 | uVar8);
                    uVar4     = ((iVar10->field_0x28 + uStack16) * 0x4 + uVar3);
                    ppcVar5   = (*param_1 + 0x1c);
                    uVar10    = uStack16;
                    (**ppcVar5)(uVar16, param_1, uVar4, (uVar4 >> 0x10), iVar10->field_0x22);
                    *puStack48    = uVar10;
                    (uVar8 + 0x2) = extraout_DX_00;
                    paVar6        = iVar10->field_0x52;
                    uVar4         = (paVar6 + uStack16 * 0x4);
                    iStack12      = iStack12 + (uVar4 + 0x24) + 0x8;
                    if(iVar11 + -0xa < iStack12)
                    {
                        uVar16 = SEG_1008;
                        debug_pri16_1008_6048(s_overflow_on_node__d_1050_11ca, SEG_1008, param_3);
                        iVar10->field_0x18 = uStack16 - 0x1;
                        iVar10->field_0x26 = 0x1;
                        paVar6             = iVar10->field_0x52;
                        uVar15             = (paVar6 >> 0x10);
                        iVar13             = paVar6;
                        pu_var2             = *(iVar13 + uStack16 * 0x4);
                        uVar8              = *(iVar13 + uStack16 * 0x4 + 0x2);
                        if((uVar8 | pu_var2) != 0x0)
                        {
                            ppcVar5 = *pu_var2;
                            (**ppcVar5)(SEG_1008, pu_var2, uVar8, 0x1);
                        }
                        paVar6            = iVar10->field_0x52;
                        iVar13            = uStack16 * 0x4;
                        (paVar6 + iVar13) = 0x0;
                        if(0x0 < uStack16)
                        {
                            paVar6 = iVar10->field_0x52;
                            uVar15 = (paVar6 >> 0x10);
                            iVar12 = paVar6;
                            pu_var2 = *(iVar12 + iVar13 + -0x4);
                            uVar8  = *(iVar12 + iVar13 + -0x2);
                            if((uVar8 | pu_var2) != 0x0)
                            {
                                ppcVar5 = *pu_var2;
                                (**ppcVar5)(SEG_1008, pu_var2, uVar8, 0x1);
                            }
                            paVar6                           = iVar10->field_0x52;
                            (uStack16 * 0x4 + paVar6 + -0x4) = 0x0;
                        }
                    }
                }
                iVar10->field_0x20 = 0xa;
                uVar9              = iVar10->field_0x1e;
                mov_update_win_1040_93aa(*(Struct65 **)iVar10->field_0x52, 0xa, uVar9, SEG_1040);
                for(uStack16 = 0x1; puVar1 = &iVar10->field_0x18, *puVar1 != uStack16 && uStack16 <= *puVar1; uStack16 = uStack16 + 0x1)
                {
                    paVar6 = iVar10->field_0x52;
                    uVar3  = (uStack16 * 0x4 + paVar6 + -0x4);
                    iVar11 = uVar3;
                    uVar16 = (uVar3 >> 0x10);
                    paVar6 = iVar10->field_0x52;
                    mov_update_win_1040_93aa(*(Struct65 **)(paVar6 + uStack16 * 0x4), (iVar11 + 0x20) + (iVar11 + 0x24) + 0x8, uVar9, SEG_1040);
                }
            }
        }
    }
    return;
}

void pass1_1010_16ee(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5, u8 *param_6)

{
    u16 unaff_SS;

    mem_op_1000_179c(0x4a, param_6, SEG_1000);
    if((param_6 | param_5) != 0x0)
    {
        pass1_1040_c54a(str_var1(param_6, param_5), 0x0,
                        str_var1(param_4, param_3), SEG_1040, unaff_SS);
        return;
    }
    return;
}

void pass1_1010_1788(u16 param_1, u16 param_2, u32 param_3, u8 *param_4, i16 param_5, u16 param_6)

{
    char      *pcVar1;
    u16        u_var2;
    u16       *puVar3;
    u32 uVar4;
    u8        *puVar5;
    i16        in_stack_0000fff6;

    puVar3 = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x3, param_6, param_4, param_5);
    puVar5 = 0x1778;
    uVar4  = pass1_1028_b58e(param_3);
    u_var2  = (uVar4 >> 0x10);
    pcVar1 = pass1_1010_b038(puVar3, uVar4, u_var2, puVar5, in_stack_0000fff6);
    str_op_1008_60e8(str_var1(u_var2, pcVar1), u_var2);
    return;
}


void pass1_1010_17c0(Struct475 *param_1)

{
    u32  *puVar1;
    u16          u_var2;
    void **ppcVar3;
    Struct475 *iVar5;
    u16          uVar4;
    u16          unaff_CS;

    unk_destroy_win_op_1010_2fa0(param_1, unaff_CS);
    uVar4  = (param_1 >> 0x10);
    iVar5  = (Struct475 *)param_1;
    puVar1 = iVar5->hobject_field_0x56;
    u_var2  = iVar5->hcursor_field_0x58;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    &iVar5->hobject_field_0x56 = 0x0;
    fn_ptr_1000_17ce((Struct18 *)iVar5->field_0x60, SEG_1000);
    pass1_1000_4906(iVar5->field_0x64, 0x0, iVar5->field_0x68 << 0x2);
    fn_ptr_1000_17ce((Struct18 *)iVar5->field_0x64, SEG_1000);
    iVar5->field_0x60 = 0x0;
    iVar5->field_0x64 = (struct Struct20 *)0x0;
    return;
}

u32 pass1_1010_195e(Struct79 *param_1, Struct79 *param_2, u16 param_3)

{
    u8  *in_DX;
    i16  unaff_DI;
    u16  unaff_SS;
    u16 *puVar1;

    pass1_1010_0f24(param_1, param_2, param_3, in_DX, unaff_SS);
    (param_1 + 0xb)                            = 0x0;
    param_1 =  addr_table_1010_1b2a;//0x1b2a;
    param_1->fld2_segment                      = SEG_1010;
    puVar1                                     = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x3, unaff_SS, in_DX, unaff_DI);
    ((Struct79 *)(param_1 + 0xb))->fld0_addr_table = puVar1;
    param_1[0xb].fld2_segment                = (puVar1 >> 0x10);
    return param_1;
}

u32 pass1_1010_1b6e(Struct79 *param_1, Struct79 *param_2, u16 param_3, u16 param_4, u8 *param_5)

{
    i16  unaff_DI;
    u16 *puVar1;

    pass1_1010_0f24(param_1, param_2, param_3, param_5, param_4);
    (param_1 + 0xb)                            = 0x0;
    param_1 =  addr_table_1010_1d04;//0x1d04;
    param_1->fld2_segment                      = SEG_1010;
    puVar1                                     = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x3, param_4, param_5, unaff_DI);
    ((Struct79 *)(param_1 + 0xb))->fld0_addr_table = puVar1;
    param_1[0xb].fld2_segment                = (puVar1 >> 0x10);
    return param_1;
}

void pass1_1010_1df2(Struct242 *param_1, u16 param_2, u32 param_3, u16 param_4, u16 param_5)

{
    void **ppcVar1;
    Struct241 *in_AX;
    u8          *pu_var2;
    u8          *extraout_DX;
    Struct242 *iVar3;
    u16          uVar3;
    u16         *puStack10;
    u16         *pu_stack6;

    uVar3  = (param_1 >> 0x10);
    iVar3  = (Struct242 *)param_1;
    pu_var2 = param_5;
    if(iVar3->field_0x4 == 0x0)
    {
        mem_op_1000_179c(0xc, param_5, SEG_1000);
        pu_var2 = (param_5 | in_AX);
        if(pu_var2 == 0x0)
        {
            iVar3->field_0x4 = 0x0;
        }
        else
        {
            set_struct_1008_574a(str_var1(param_5, in_AX));
            *(Struct241 **)&iVar3->field_0x4 = in_AX;
            (&iVar3->field_0x4 + 0x2)          = extraout_DX;
            pu_var2                             = extraout_DX;
        }
    }
    mem_op_1000_179c(0xa, pu_var2, SEG_1000);
    puStack10 = str_var1(pu_var2, in_AX);
    if((pu_var2 | in_AX) == 0x0)
    {
        pu_stack6 = 0x0;
    }
    else
    {
        *puStack10       = addr_table_1008_380a[36]; // 0x389a
        in_AX->fld2_segment    = SEG_1008;
        in_AX->field_0x4 = param_3;
        in_AX->field_0x8 = param_2;
        *puStack10       = addr_table_1010_2010;//0x2010;
        in_AX->fld2_segment    = SEG_1010;
        pu_stack6         = puStack10;
    }
    ppcVar1 = (*iVar3->field_0x4 + 0x4);
    (**ppcVar1)(SEG_1000, iVar3->field_0x4, pu_stack6, (pu_stack6 >> 0x10));
    return;
}

u16 mixed_1010_20ba(u32 param_1, u16 param_2, u16 param_3, u16 param_4, i16 param_5)

{
    void **ppcVar1;
    u16          u_var2;
    u8          *puVar3;
    u8          *extraout_DX;
    Struct636 *paVar4;
    i16          iVar5;
    u16          uVar6;
    u16          uVar7;
    u16         *puVar8;
    u16         *puVar9;
    u32   uVar10;
    u32          uVar11;
    u16         *pu_stack6;

    pass1_1010_2816(param_1);
    paVar4   = (Struct636 *)(param_2 * 0x4);
    uVar6    = (param_1 >> 0x10);
    iVar5    = param_1;
    pu_stack6 = *(u16 **)(&paVar4->fld0_addr_table + iVar5);
    if(pu_stack6 != 0x0)
    {
        return pu_stack6;
    }
    switch(param_2)
    {
    case 0x1:
        mem_op_1000_179c(0x18, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
        {
        LAB_1010_2126:
            paVar4 = (Struct636 *)0x0;
            puVar3 = 0x0;
        }
        else
        {
            struct_1010_3b7a((Struct648 *)paVar4, param_4, param_2);
        }
        break;
    case 0x2:
        mem_op_1000_179c(0x84, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        win_sys_op_1010_5404((Struct54 *)paVar4, param_4, param_2, param_3);
        break;
    case 0x3:
        mem_op_1000_179c(0x53c, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        struct_1010_a1d8((Struct627 *)paVar4, param_4, param_2, param_3);
        break;
    case 0x4:
        mem_op_1000_179c(0x18a, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        struct_1018_2b10((Struct55 *)str_var1(param_4, paVar4), param_2, param_3);
        break;
    case 0x5:
        mem_op_1000_179c(0x14, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2126;
        puVar9 = pass1_1008_eabc(paVar4, param_4, param_2);
        puVar3 = (puVar9 >> 0x10);
        paVar4 = (Struct636 *)puVar9;
        break;
    case 0x6:
        mem_op_1000_179c(0x58, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1018_18b8(param_3, (Struct55 *)str_var1(param_4, paVar4), param_2);
        break;
    case 0x7:
        mem_op_1000_179c(0xe, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2126;
        uVar11 = pass1_1010_3d82((Struct628 *)paVar4, param_4, param_2, param_3);
        puVar3 = (uVar11 >> 0x10);
        paVar4 = (Struct636 *)uVar11;
        break;
    case 0x8:
        mem_op_1000_179c(0x20, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        struct_1010_95aa((Struct629 *)paVar4, param_4, param_2);
        break;
    case 0x9:
        mem_op_1000_179c(0x26, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        struct_1010_6326((Struct630 *)paVar4, param_4, param_2);
        break;
    case 0xa:
        mem_op_1000_179c(0x1c, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2126;
        uVar11 = pass1_1010_0eac(paVar4, param_4, param_2, (param_4 | paVar4), param_3);
        puVar3 = (uVar11 >> 0x10);
        paVar4 = (Struct636 *)uVar11;
        break;
    case 0xb:
        mem_op_1000_179c(0x1c, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2126;
        uVar11 = pass1_1008_aefe(paVar4, param_4, param_2, (param_4 | paVar4), param_3);
        puVar3 = (uVar11 >> 0x10);
        paVar4 = (Struct636 *)uVar11;
        break;
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
        mem_op_1000_179c(0xaa, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        struct_1018_0570((Struct55 *)str_var1(param_4, paVar4), param_2, param_3);
        break;
    case 0x25:
        mem_op_1000_179c(0x1c, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1018_4aaa(paVar4, param_4, param_2, puVar3, param_3);
        break;
    case 0x26:
        mem_op_1000_179c(0x1c, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1008_d99e(paVar4, param_4, param_2, puVar3, param_3);
        break;
    case 0x27:
        mem_op_1000_179c(0x58, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1008_9d36(paVar4, param_4, param_2, param_3);
        break;
    case 0x28:
        mem_op_1000_179c(0x2c, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1010_28e6((Struct631 *)paVar4, param_4, param_2, puVar3, param_3);
        break;
    case 0x29:
        mem_op_1000_179c(0x72, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        struct_1018_229c((Struct632 *)paVar4, param_4, param_2, puVar3, param_3);
        break;
    case 0x2a:
        mem_op_1000_179c(0x1c, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1010_503e(paVar4, param_4, param_2, puVar3, param_3);
        break;
    case 0x2b:
        mem_op_1000_179c(0x1a, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        struct_1010_02e0((Struct79 *)paVar4, (Struct79 *)param_4, param_2);
        break;
    case 0x2c:
        mem_op_1000_179c(0x10, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1008_eb2a(paVar4, param_4, param_2);
        break;
    case 0x2d:
        mem_op_1000_179c(0x80, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1010_3e3c((Struct55 *)str_var1(param_4, paVar4), param_2, param_3);
        break;
    case 0x2e:
        mem_op_1000_179c(0x806, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2126;
        uVar11 = pass1_1018_1ff4((Struct634 *)paVar4, param_4, param_2);
        puVar3 = (uVar11 >> 0x10);
        paVar4 = (Struct636 *)uVar11;
        break;
    case 0x2f:
        mem_op_1000_179c(0x58, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        struct_1010_e9e4((Struct261 *)paVar4, param_4, param_2);
        break;
    case 0x30:
        mem_op_1000_179c(0xe, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2126;
        puVar8 = pass1_1010_3702(paVar4, param_4, param_2);
        puVar3 = (puVar8 >> 0x10);
        paVar4 = (Struct636 *)puVar8;
        break;
    case 0x31:
        u_var2 = 0x60;
        uVar7 = SEG_1000;
        mem_op_1000_179c(0x60, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
        {
        LAB_1010_2680:
            uVar7  = SEG_1000;
            paVar4 = (Struct636 *)0x0;
            puVar3 = 0x0;
        }
        else
        {
            uVar11 = pass1_1010_9298((Struct79 *)paVar4, (Struct79 *)param_4, param_2, paVar4, (param_4 | paVar4), param_3);
            puVar3 = (uVar11 >> 0x10);
            paVar4 = (Struct636 *)uVar11;
        }
        goto LAB_1010_2683;
    case 0x32:
        mem_op_1000_179c(0x26, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1010_6abc((Struct635 *)paVar4, param_4, param_2);
        break;
    case 0x33:
        mem_op_1000_179c(0x72, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
        {
        LAB_1010_25b8:
            u_var2 = 0x0;
            uVar7 = 0x0;
        }
        else
        {
            uVar10 = pass1_1010_195e((Struct79 *)paVar4, (Struct79 *)param_4, param_2);
            uVar7  = (uVar10 >> 0x10);
            u_var2  = uVar10;
        }
        goto LAB_1010_25bb;
    case 0x34:
        mem_op_1000_179c(0x72, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_25b8;
        uVar11 = pass1_1010_1b6e((Struct79 *)paVar4, (Struct79 *)param_4, param_2, param_3, (param_4 | paVar4));
        uVar7  = (uVar11 >> 0x10);
        u_var2  = uVar11;
    LAB_1010_25bb:
        pu_stack6 = str_var1(uVar7, u_var2);
        pass1_1010_1146(str_var1(uVar7, u_var2), 0x0, param_5, param_3);
        goto switchD_1010_2765_caseD_38;
    case 0x35:
        mem_op_1000_179c(0x14a, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2126;
        uVar11 = pass1_1010_6700(paVar4, param_4, param_2);
        puVar3 = (uVar11 >> 0x10);
        paVar4 = (Struct636 *)uVar11;
        break;
    case 0x36:
        mem_op_1000_179c(0x10, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1008_d790((Struct647 *)paVar4, param_4, param_2, param_3);
        break;
    case 0x37:
        mem_op_1000_179c(0x420, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        struct_1008_9fd2((Struct79 *)paVar4, (Struct79 *)param_4, param_2);
        break;
    default:
        goto switchD_1010_2765_caseD_38;
    case 0x39:
        mem_op_1000_179c(0x36, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1010_4a8a((Struct637 *)paVar4, param_4, param_2, param_3);
        break;
    case 0x3a:
        mem_op_1000_179c(0xc, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2126;
        puVar8 = pass1_1008_d72e(paVar4, param_4, param_2);
        puVar3 = (puVar8 >> 0x10);
        paVar4 = (Struct636 *)puVar8;
        break;
    case 0x3b:
        mem_op_1000_179c(0x22, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        struct_1008_dd4e((Struct209 *)paVar4, param_4, param_2);
        break;
    case 0x3c:
        mem_op_1000_179c(0x146, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1018_331c((Struct638 *)paVar4, param_4, param_2, param_3, puVar3);
        break;
    case 0x3d:
        mem_op_1000_179c(0xe, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2126;
        uVar11 = pass1_1010_8c32((Struct640 *)paVar4, param_4, param_2, param_3);
        puVar3 = (uVar11 >> 0x10);
        paVar4 = (Struct636 *)uVar11;
        break;
    case 0x3e:
        mem_op_1000_179c(0x18, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1018_5070((Struct641 *)paVar4, param_4, param_2);
        break;
    case 0x3f:
        mem_op_1000_179c(0x12, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1008_c72a((Struct642 *)paVar4, param_4, param_2);
        break;
    case 0x40:
        mem_op_1000_179c(0x24, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        pass1_1008_af94((Struct643 *)paVar4, param_4, param_2);
        break;
    case 0x41:
        u_var2 = 0x60;
        mem_op_1000_179c(0x60, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2680;
        uVar7 = SEG_1008;
        struct_1008_ecb2((Struct221 *)paVar4, param_4, param_2);
        puVar3 = extraout_DX;
    LAB_1010_2683:
        *(Struct636 **)(param_2 * 0x4 + iVar5) = paVar4;
        (param_2 * 0x4 + iVar5 + 0x2)            = puVar3;
        ppcVar1                                  = (paVar4 + 0x10);
        (**ppcVar1)(uVar7, paVar4, puVar3, u_var2);
        break;
    case 0x42:
        mem_op_1000_179c(0xc, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2126;
        puVar8 = pass1_1008_ec10(paVar4, param_4, param_2);
        puVar3 = (puVar8 >> 0x10);
        paVar4 = (Struct636 *)puVar8;
        break;
    case 0x43:
        mem_op_1000_179c(0x12, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2126;
        puVar8 = pass1_1010_2bfc((Struct644 *)paVar4, param_4, param_2);
        puVar3 = (puVar8 >> 0x10);
        paVar4 = (Struct636 *)puVar8;
        break;
    case 0x45:
        mem_op_1000_179c(0xe, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2126;
        uVar11 = pass1_1010_0000((Struct645 *)paVar4, param_4, param_2, param_3);
        puVar3 = (uVar11 >> 0x10);
        paVar4 = (Struct636 *)uVar11;
        break;
    case 0x46:
        mem_op_1000_179c(0x1a, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        struct_1010_50b2((Struct646 *)paVar4, param_4, param_2);
        break;
    case 0x47:
        mem_op_1000_179c(0xe, param_4, SEG_1000);
        if((param_4 | paVar4) == 0x0)
            goto LAB_1010_2126;
        puVar8 = pass1_1018_56e6(paVar4, param_4, param_2);
        puVar3 = (puVar8 >> 0x10);
        paVar4 = (Struct636 *)puVar8;
        break;
    case 0x48:
        mem_op_1000_179c(0x1c, param_4, SEG_1000);
        puVar3 = (param_4 | paVar4);
        if(puVar3 == 0x0)
            goto LAB_1010_2126;
        unk_draw_op_1008_da12((Struct19 *)paVar4, param_4, param_2);
    }
    pu_stack6 = str_var1(puVar3, paVar4);
switchD_1010_2765_caseD_38:
    *(u16 **)(param_2 * 0x4 + iVar5) = pu_stack6;
    return pu_stack6;
}

void pass1_1010_043a(Struct226 *param_1, long param_2, i16 param_3, u16 param_4)

{
    u32  *puVar1;
    void **ppcVar2;
    Struct225 *puVar3;
    u16          extraout_DX;
    u16          uVar3;
    Struct226 *iVar4;
    Struct227 *iVar5;
    u16          uVar4;
    u16          uVar5;
    u16          uVar6;
    u16         *puStack18;
    u16         *puStack14;
    u8           local_a[0x8];

    iVar4 = (Struct226 *)param_1;
    uVar4 = (param_1 >> 0x10);
    if(param_3 == 0xc)
    {
        if(iVar4->field_0xe != 0x0)
        {
            return;
        }
        iVar4->field_0xe = 0x1;
    }
    else
    {
        if(param_3 == 0xd)
        {
            if(iVar4->field_0x10 != 0x0)
            {
                return;
            }
            iVar4->field_0x10 = 0x1;
        }
        else
        {
            if(param_3 == 0x12)
            {
                return;
            }
        }
    }
    pass1_1010_089e(param_4, param_1, 0x1, 0x6);
    pass1_1008_5784(str_var1(param_4, local_a), iVar4->field_0xa);
    do
    {
        puVar3 = (Struct225 *)local_a;
        pass1_1008_5b12(puVar3, param_4);
        uVar3 = extraout_DX | puVar3;
        if(uVar3 == 0x0)
        {
            uVar6 = 0xa;
            mem_op_1000_179c(0xa, 0x0, SEG_1000);
            puStack18 = str_var1(uVar3, puVar3);
            if((uVar3 | puVar3) == 0x0)
            {
                puStack14 = 0x0;
            }
            else
            {
                *puStack18                 = addr_table_1008_380a[36]; // 0x389a
                (&puVar3->fld0_addr_table + 0x2) = SEG_1008;
                *puStack18                 = addr_table_1010_0e98[4];//0xea8;
                (&puVar3->fld0_addr_table + 0x2) = SEG_1010;
                puStack14                  = puStack18;
            }
            uVar5            = (puStack14 >> 0x10);
            iVar5            = (Struct227 *)puStack14;
            iVar5->field_0x4 = param_3;
            iVar5->field_0x6 = param_2;
            puVar1           = iVar4->field_0xa;
            ppcVar2          = (*iVar4->field_0xa + 0x8);
            (**ppcVar2)(SEG_1000, puVar1, (puVar1 >> 0x10), iVar5, uVar5, uVar6);
            return;
        }
    } while((puVar3->field_0x4 != param_3) || (puVar3->field_0x6 != param_2));
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass1_1010_0538(u32 param_1, char **param_2, char **param_3, u16 param_4, u16 param_5)

{
    i16         iVar1;
    u32         u_var2;
    void **ppcVar3;
    u16         uVar4;
    i16         iVar5;
    char       *pcVar6;
    u8         *puVar7;
    u16         extraout_DX;
    u8         *puVar8;
    u8         *extraout_DX_00;
    u16         uVar9;
    u16         uVar10;
    u16         uVar11;
    u32  uVar12;
    u32 *pu_stack6;

    uVar4    = 0x0;
    *param_3 = 0x0;
    *param_2 = 0x0;
    uVar10   = (param_1 >> 0x10);
    uVar9    = param_1;
    uVar12   = (uVar9 + 0xa);
    ppcVar3  = ((uVar9 + 0xa) + 0x10);
    (**ppcVar3)();
    pu_stack6 = str_var1(extraout_DX, uVar4);
    puVar8   = (extraout_DX | uVar4);
    if(puVar8 == 0x0)
    {
        return;
    }
    iVar1 = (uVar4 + 0x4);
    u_var2 = *(uVar4 + 0x6);
    if((extraout_DX | uVar4) != 0x0)
    {
        ppcVar3 = *pu_stack6;
        (**ppcVar3)(param_4, uVar4, extraout_DX, 0x1, uVar12);
        puVar8 = extraout_DX_00;
    }
    uVar12 = (uVar9 + 0xa);
    if((uVar12 + 0x8) == 0x0)
    {
        pass1_1010_089e(param_5, param_1, 0x0, 0x6);
        pass1_1010_1f62(param_5, param_1, 0x3);
    }
    iVar5 = iVar1 + 0x757;
    load_string_1010_84acglobals->dat_1050_14cc, (u16)globals->dat_1050_14cc >> 0x10), param_4);
    param_3         = iVar5;
    (param_3 + 0x2) = puVar8;
    while(pcVar6 = pass1_1000_472c(*param_3, '%'), (puVar8 | pcVar6) != 0x0)
    {
        pass1_1010_09b4(uVar9, uVar10, str_var1(puVar8, pcVar6), param_3, u_var2, puVar8, param_5);
    }
    if(0x1e < iVar1 - 0x1U)
        goto LAB_1010_0850;
    uVar11 = (param_2 >> 0x10);
    switch(iVar1)
    {
    case 0x1:
        goto LAB_1010_0619;
    case 0x2:
        goto LAB_1010_0619;
    case 0x3:
        break;
    case 0x4:
        goto LAB_1010_0619;
    case 0x5:
        goto LAB_1010_0619;
    case 0x6:
        break;
    case 0x7:
        goto LAB_1010_0619;
    case 0x8:
        goto LAB_1010_0619;
    case 0x9:
        break;
    case 0xa:
        goto LAB_1010_0619;
    case 0xb:
        goto LAB_1010_0619;
    case 0xc:
        break;
    case 0xd:
        goto LAB_1010_0619;
    case 0xe:
        break;
    case 0xf:
        goto LAB_1010_0619;
    case 0x10:
        break;
    case 0x11:
        break;
    case 0x12:
        break;
    case 0x13:
        break;
    case 0x14:
        break;
    case 0x15:
        break;
    case 0x16:
    LAB_1010_0619:
        puVar7 = pass1_1008_5fd8(param_5, puVar8);
        goto LAB_1010_0621;
    case 0x17:
        break;
    case 0x18:
        break;
    case 0x19:
    case 0x1f:
    LAB_1010_0785:
        puVar7 = pass1_1008_5fd8(param_5, puVar8);
        goto LAB_1010_0621;
    case 0x1a:
        goto LAB_1010_0785;
    case 0x1b:
        goto LAB_1010_0785;
    case 0x1c:
        break;
    case 0x1d:
        break;
    case 0x1e:
        puVar7          = pass1_1008_5fd8(param_5, puVar8);
        param_2         = puVar7;
        (param_2 + 0x2) = puVar8;
        goto LAB_1010_0785;
    }
    puVar7 = pass1_1008_5fd8(param_5, puVar8);
LAB_1010_0621:
    param_2         = puVar7;
    (param_2 + 0x2) = puVar8;
LAB_1010_0850:
    while(pcVar6 = pass1_1000_472c(*param_2, '%'), (puVar8 | pcVar6) != 0x0)
    {
        pass1_1010_09b4(uVar9, uVar10, str_var1(puVar8, pcVar6), param_2, u_var2, puVar8, param_5);
    }
    return;
}

u32 pass1_1010_0946(u16 param_1, u16 param_2, i16 param_3, u8 *param_4, i16 param_5, u16 param_6)

{
    u16 *puVar1;
    long lVar2;
    long lVar3;

    globals->PTR_LOOP_1050_0ea8 = 0x0;
    lVar3              = 0x4000001;
    lVar2              = 0x4000002;
    puVar1             = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x3b, param_6, param_4, param_5);
    pass1_1008_dfa6(puVar1, lVar2, lVar3, param_6);
    if(puVar1 != 0x0)
    {
        pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), 0x4000002);
        if((puVar1 + 0x200) == 0x8000002)
        {
            globals->PTR_LOOP_1050_0ea8 = (&PTR_LOOP_1050_0000 + 0x1);
        }
    }
    return str_var1(0x1050, (param_3 + -0x1) * 0x8 + 0xea2);
}

void pass1_1010_09b4(u16 param_1, u16 param_2, u8 *param_3, char **param_4, u32 param_5, u8 *param_6, u16 param_7)

{
    u8       bVar1;
    bool       bVar2;
    bool       bVar3;
    u16        uVar4;
    u16        uVar5;
    u16        uVar6;
    u16        uVar7;
    i16        unaff_DI;
    u16       *puVar8;
    char      *pcStack18;
    u32 uStack10;

    bVar3 = false;
    bVar2 = false;
    bVar1 = *(u8 *)(param_3 + 0x1);
    if(bVar1 == 0x70)
    {
    LAB_1010_0a06:
        bVar3 = false;
        bVar2 = true;
    }
    else
    {
        if(bVar1 < 0x71)
        {
            if(bVar1 != 0x43)
            {
                if(bVar1 == 0x50)
                    goto LAB_1010_0a06;
                if(bVar1 != 0x63)
                    goto LAB_1010_09db;
            }
            bVar3 = true;
            bVar2 = false;
        }
    }
LAB_1010_09db:
    uVar4    = 0x0;
    uStack10 = 0x0;
    if(bVar2)
    {
        puVar8   = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x2, param_7, param_6, unaff_DI);
        uVar4    = (puVar8 >> 0x10);
        uStack10 = str_var1((puVar8 + 0x6e), (puVar8 + 0x6c));
    }
    else
    {
        if(!bVar3)
            goto LAB_1010_0a36;
        pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), param_5);
        uStack10 = pass1_1038_4d28(str_var1(param_6, uVar4));
    }
    param_6 = (uStack10 >> 0x10);
LAB_1010_0a36:
    if((uStack10 | uStack10) != 0x0)
    {
        uVar5 = str_op_1000_3da4(*param_4);
        uVar6 = str_op_1000_3da4(uStack10);
        uVar7 = uVar6 + 0xa + uVar5;
        mem_op_1000_179c(uVar7, param_6, SEG_1000);
        pcStack18 = str_var1(param_6, uVar7);
        *param_3  = '\0';
        unk_str_op_1000_3d3e(str_var1(param_6, uVar7), *param_4);
        pass1_1000_3cea(str_var1(param_6, uVar7), uStack10);
        pass1_1000_3cea(str_var1(param_6, uVar7), param_3 & 0xffff0000 | (param_3 + 0x2));
        fn_ptr_1000_17ce((Struct18 *)*param_4, SEG_1000);
        *param_4 = pcStack18;
    }
    return;
}

void pass1_1010_11c6(Struct234 *param_1, u16 param_2, u8 *param_3)

{
    i16         *pi_var1;
    u16         *pu_var2;
    void **ppcVar3;
    u32          uVar4;
    u32   uVar5;
    Struct239 *iVar6;
    i16          iVar7;
    i16          iVar8;
    u16          uVar9;
    u16          uVar10;
    u8          *puVar11;
    u8          *puVar12;
    u8          *puVar13;
    u8          *puVar14;
    u8          *extraout_DX;
    u8          *extraout_DX_00;
    u16          uVar15;
    u8          *extraout_DX_01;
    u8          *puVar16;
    u32         *puVar17;
    Struct234 *iVar18;
    i16          iVar19;
    i16          iVar21;
    Struct238 *iVar20;
    u16          u_var22;
    u16          u_var23;
    u16         *pu_var24;
    u32         *puStack50;
    i16          iStack42;
    i16          iStack40;
    struct Struct20 *paStack38;
    i16          iStack28;
    u32         *puStack26;
    u32         *puStack22;
    u32   uStack14;
    u32          uStack10;

    if(DAT_1050_0ecc == -0x1)
    {
        return;
    }
    mem_op_1000_179c(0x1a, param_3, SEG_1000);
    if((param_3 | param_2) == 0x0)
    {
        iVar6   = (Struct239 *)0x0;
        puVar11 = 0x0;
    }
    else
    {
        pu_var24 = pass1_1010_37d4(str_var1(param_3, param_2));
        puVar11 = (pu_var24 >> 0x10);
        iVar6   = (Struct239 *)pu_var24;
    }
    uStack10 = 0x10500ece;
    uStack14 = 0x0;
    puVar12  = puVar11;
    while(true)
    {
        u_var22 = (param_1 >> 0x10);
        iVar18 = (Struct234 *)param_1;
        pi_var1 = &iVar18->field_0x68;
        if(*pi_var1 == uStack14 || *pi_var1 < uStack14)
            break;
        uVar5     = iVar18->field_0x64;
        uVar4     = *(uVar5 + uStack14 * 0x4);
        puVar17   = (uVar4 + DAT_1050_0ecc * 0x8);
        puStack50 = (uVar4 & 0xffff0000 | ZEXT24(puVar17));
        iVar7     = pass1_1000_475e(uStack10, *puVar17);
        if(iVar7 != 0x0)
        {
            uStack10 = *puStack50;
            uStack14 = uStack14 & 0xffff | (uStack14 + 0x1) << 0x10;
        }
        uStack14 = uStack14 & 0xffff0000 | (uStack14 + 0x1);
    }
    iVar6->field_0x10 = uStack14;
    pu_var24           = struct_1010_38f8(str_var1(puVar11, iVar6), uStack14, uStack14, puVar12);
    puVar13           = (pu_var24 >> 0x10);
    iVar8             = 0x0;
    mem_op_1000_179c(0x400, puVar13, SEG_1000);
    puVar12 = puVar13;
    iVar7   = iVar8;
    mem_op_1000_179c(0x400, puVar13, SEG_1000);
    paStack38 = (struct Struct20 *)str_var1(puVar12, iVar7);
    iStack28  = 0x0;
    pass1_1000_4906((struct Struct20 *)str_var1(puVar13, iVar8), 0x0, 0x400);
    pass1_1000_4906((struct Struct20 *)str_var1(puVar12, iVar7), 0x0, 0x400);
    iStack42 = 0x0;
    uVar10   = 0x0;
    do
    {
        pu_var2 = &iVar6->field_0x10;
        if(*pu_var2 == uVar10 || *pu_var2 < uVar10)
        {
            return;
        }
        uVar5     = iVar18->field_0x64;
        u_var23    = (uVar5 >> 0x10);
        iVar19    = uVar5;
        iVar21    = (iVar19 + iStack28 * 0x4);
        puVar16   = (iVar19 + iStack28 * 0x4 + 0x2);
        iVar19    = iVar21 + (DAT_1050_0ecc * 0x6 + 0xeba) * 0x8;
        puStack22 = str_var1(puVar16, iVar19);
        uVar9     = iVar21 + (DAT_1050_0ecc * 0x6 + 0xebc) * 0x8;
        puVar14   = puVar16;
        mem_op_1000_179c(0x1a, puVar16, SEG_1000);
        if((puVar14 | uVar9) == 0x0)
        {
            uVar5                  = iVar6->field_0x8;
            (uVar5 + uVar10 * 0x4) = 0x0;
        }
        else
        {
            pu_var24                       = pass1_1010_37d4(str_var1(puVar14, uVar9));
            uVar5                         = iVar6->field_0x8;
            u_var23                        = (uVar5 >> 0x10);
            iVar21                        = uVar5;
            (iVar21 + uVar10 * 0x4)       = pu_var24;
            (iVar21 + uVar10 * 0x4 + 0x2) = (pu_var24 >> 0x10);
        }
        iStack42 = iStack42 + 0x1;
        uVar5    = iVar6->field_0x8;
        u_var23   = (uVar5 >> 0x10);
        iVar21   = uVar5;
        uVar5    = (iVar21 + uVar10 * 0x4);
        ppcVar3  = ((iVar21 + uVar10 * 0x4) + 0x1c);
        (**ppcVar3)(SEG_1000, uVar5, (uVar5 >> 0x10), iStack42, iVar19, puVar16);
        uStack14 = uVar10;
        puVar16  = extraout_DX;
        while(true)
        {
            pi_var1 = &iVar18->field_0x68;
            if(*pi_var1 == iStack28 || *pi_var1 < iStack28)
                break;
            iVar19 = iStack28 * 0x4;
            uVar5  = iVar18->field_0x64;
            uVar5  = (uVar5 + iVar19);
            iVar21 = pass1_1000_475e(*puStack22, *(uVar5 + (DAT_1050_0ecc * 0x6 + 0xeba) * 0x8));
            if(iVar21 != 0x0)
                break;
            uVar5     = iVar18->field_0x64;
            u_var23    = (uVar5 >> 0x10);
            iVar21    = uVar5;
            puVar16   = (iVar21 + iVar19 + 0x2);
            uVar10    = (iVar21 + iVar19) + (DAT_1050_0ecc * 0x6 + 0xebc) * 0x8;
            puStack26 = str_var1(puVar16, uVar10);
            mem_op_1000_179c(0x1a, puVar16, SEG_1000);
            if((puVar16 | uVar10) == 0x0)
            {
                u_var23 = 0x0;
                uVar15 = 0x0;
            }
            else
            {
                pu_var24 = pass1_1010_37d4(str_var1(puVar16, uVar10));
                uVar15  = (pu_var24 >> 0x10);
                u_var23  = SUB42(pu_var24, 0x0);
            }
            (uStack14 * 0x4 + iVar8)       = u_var23;
            (uStack14 * 0x4 + iVar8 + 0x2) = uVar15;
            uVar5                                = iVar18->field_0x64;
            u_var23                               = (uVar5 >> 0x10);
            iVar21                               = uVar5;
            iStack42                             = iStack42 + 0x1;
            uVar5                                = (uStack14 * 0x4 + iVar8);
            ppcVar3                              = ((uStack14 * 0x4 + iVar8) + 0x1c);
            (**ppcVar3)(SEG_1000, uVar5, (uVar5 >> 0x10), iStack42, (iVar21 + iStack28 * 0x4) + (DAT_1050_0ecc * 0x6 + 0xebc) * 0x8, (iVar21 + iStack28 * 0x4 + 0x2));
            iStack40 = 0x0;
            puVar16  = extraout_DX_00;
            while(true)
            {
                pi_var1 = &iVar18->field_0x68;
                if(*pi_var1 == iStack28 || *pi_var1 < iStack28)
                    break;
                uVar5  = iVar18->field_0x64;
                uVar5  = (uVar5 + iStack28 * 0x4);
                iVar21 = pass1_1000_475e(*puStack26, *(uVar5 + (DAT_1050_0ecc * 0x6 + 0xebc) * 0x8));
                if(iVar21 != 0x0)
                    break;
                uVar5  = iVar18->field_0x64;
                uVar5  = (uVar5 + iStack28 * 0x4);
                uVar10 = pass1_1000_475e(*puStack22, *(uVar5 + (DAT_1050_0ecc * 0x6 + 0xeba) * 0x8));
                if(uVar10 != 0x0)
                    break;
                mem_op_1000_179c(0x1a, puVar16, SEG_1000);
                if((puVar16 | uVar10) == 0x0)
                {
                    u_var23 = 0x0;
                    uVar15 = 0x0;
                }
                else
                {
                    pu_var24 = pass1_1010_37d4(str_var1(puVar16, uVar10));
                    uVar15  = (pu_var24 >> 0x10);
                    u_var23  = SUB42(pu_var24, 0x0);
                }
                (iStack40 * 0x4 + iVar7)       = u_var23;
                (iStack40 * 0x4 + iVar7 + 0x2) = uVar15;
                uVar5                          = iVar18->field_0x64;
                u_var23                         = (uVar5 >> 0x10);
                iVar20                         = (Struct238 *)uVar5;
                iStack42                       = iStack42 + 0x1;
                uVar5                          = (iStack40 * 0x4 + iVar7);
                ppcVar3                        = ((iStack40 * 0x4 + iVar7) + 0x1c);
                (**ppcVar3)(SEG_1000, uVar5, (uVar5 >> 0x10), iStack42, (iVar20 + iStack28 * 0x4) + (DAT_1050_0ecc * 0x6 + 0xebe) * 0x8, (iVar20 + iStack28 * 0x4 + 0x2));
                iStack28 = iStack28 + 0x1;
                iStack40 = iStack40 + 0x1;
                puVar16  = extraout_DX_01;
            }
            uVar5          = (uStack14 * 0x4 + iVar8);
            (uVar5 + 0x10) = iStack40;
            uVar10         = iStack40 << 0x2;
            iVar21         = iVar7;
            puVar14        = puVar12;
            pu_var24        = struct_1010_38f8(*(uStack14 * 0x4 + iVar8), iStack40, uVar10, puVar16);
            puVar16        = (pu_var24 >> 0x10);
            pass1_1000_48a8(pu_var24, str_var1(puVar14, iVar21), uVar10);
            pass1_1000_4906(paStack38, 0x0, 0x400);
            uStack14 = uStack14 & 0xffff | (uStack14 + 0x1) << 0x10;
        }
        uVar5          = iVar6->field_0x8;
        uVar5          = (uVar5 + uStack14 * 0x4);
        (uVar5 + 0x10) = uStack14;
        uVar10         = uStack14 << 0x2;
        uVar5          = iVar6->field_0x8;
        iVar21         = iVar8;
        puVar14        = puVar13;
        pu_var24        = struct_1010_38f8(*(uVar5 + uStack14 * 0x4), uStack14, uVar10, puVar16);
        pass1_1000_48a8(pu_var24, str_var1(puVar14, iVar21), uVar10);
        pass1_1000_4906((struct Struct20 *)str_var1(puVar13, iVar8), 0x0, 0x400);
        uVar10 = uStack14 + 0x1;
    } while(true);
}

u32 string_1008_e586(u16 param_1, u16 param_2, u32 param_3, u16 param_4, u16 param_5)

{
    u16   uVar1;
    u8   *pu_var2;
    char *in_string_2;

    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_3, (param_3 >> 0x10));
    pu_var2 = (param_5 | param_4);
    if(pu_var2 == 0x0)
    {
        return 0x0;
    }
    uVar1 = param_4;
    mem_op_1000_179c(0x80, pu_var2, SEG_1000);
    in_string_2 = pass1_1038_4d28(str_var1(param_5, param_4));
    unk_str_op_1000_3d3e(str_var1(pu_var2, uVar1), in_string_2);
    return str_var1(pu_var2, uVar1);
}

void pass1_1008_e9a4(u16 param_1, u16 param_2, u32 param_3, i16 param_4, u16 param_5)

{
    u16 *puVar1;
    u16  u_var2;
    u16  uVar3;
    u8  *puVar4;
    i16  iVar5;
    u16  uVar6;
    u32  uVar7;
    i16  iStack20;
    u32  uStack16;
    u32  u_stack6;

    uVar7   = pass1_1030_8326();
    uVar6   = (param_3 >> 0x10);
    iVar5   = param_3;
    puVar1  = (iVar5 + 0xe);
    u_var2   = uVar7 - *puVar1;
    puVar4  = (((uVar7 >> 0x10) - (iVar5 + 0x10)) - (uVar7 < *puVar1));
    u_stack6 = str_var1(puVar4, u_var2);
    mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x2, param_5, puVar4, param_4);
    uStack16 = 0x0;
    if((globals->PTR_LOOP_1050_13ae < 0x1) || (SBORROW2(globals->PTR_LOOP_1050_13ae, 0x1)))
        goto LAB_1008_ea2b;
    if(globals->PTR_LOOP_1050_13ae == &PTR_LOOP_1050_0002 || (globals->PTR_LOOP_1050_13ae + -0x1) < 0x1)
    {
        if((iVar5 + 0x12) == 0x0)
        {
        LAB_1008_ea20:
            uVar3 = 0x1e;
        }
        else
        {
            uVar3 = 0xa;
        }
    }
    else
    {
        if(globals->PTR_LOOP_1050_13ae == (&PTR_LOOP_1050_0002 + 0x1))
        {
            if((iVar5 + 0x12) == 0x0)
            {
                uVar3 = 0x28;
            }
            else
            {
                uVar3 = 0x14;
            }
        }
        else
        {
            if(globals->PTR_LOOP_1050_13ae != &DAT_1050_0004)
                goto LAB_1008_ea2b;
            if((iVar5 + 0x12) != 0x0)
                goto LAB_1008_ea20;
            uVar3 = 0x32;
        }
    }
    uStack16 = uVar3;
LAB_1008_ea2b:
    if(uStack16 < u_stack6)
    {
        pass1_1008_612e(0x1, 0x64, u_var2);
        iStack20 = 0x0;
        iVar5    = (iVar5 + 0xc);
        if(iVar5 == 0x2)
        {
            iStack20 = 0x32;
        }
        else
        {
            if(iVar5 == 0x3)
            {
                iStack20 = 0x19;
            }
        }
        if(u_stack6 < iStack20)
        {
            return;
        }
    }
    return;
}

void pass1_1008_eb74(u32 param_1, i16 param_2, u8 *param_3, i16 param_4, u16 param_5)

{
    (param_1 + 0xa) = param_2;
    if(param_2 != 0x0)
    {
        mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x3, param_5, param_3, param_4);
        pass1_1010_c312();
    }
    return;
}

u32 struct_1008_ecb2(Struct221 *param_1, u16 param_2, u16 param_3)

{
    u16 in_AX;
    u8 *in_DX;
    u16 unaff_SS;

    struct_1010_2cd2((Struct79 *)param_1, (Struct79 *)param_2, param_3, unaff_SS);
    param_1 =  addr_table_1008_ef9c;//0xef9c;
    param_1->fld2_segment = SEG_1008;
    mem_op_1000_179c(0x20c, in_DX, SEG_1000);
    param_1->field_0x5c = in_AX;
    param_1->field_0x5e = in_DX;
    pass1_1000_4906((struct Struct20 *)str_var1(in_DX, param_1->field_0x5c), 0x0, 0x20c);
    return param_1;
}

void mem_1008_ed1e(u16 param_1, u16 param_2, i16 param_3, u16 param_4, u8 *param_5)

{
    if(param_3 != 0x0)
    {
        mem_op_1000_179c(param_3 << 0x2, param_5, SEG_1000);
        return;
    }
    mem_op_1000_179c(0x1a, param_5, SEG_1000);
    if((param_5 | param_4) != 0x0)
    {
        struct_1008_ec72(str_var1(param_5, param_4));
        return;
    }
    return;
}

void pass1_1008_ed8a(u32 *param_1, u16 param_2, i16 param_3, i16 param_4, i16 param_5, i16 param_6, u16 param_7)

{
    void **ppcVar1;
    char       cVar2;
    u16        uVar3;
    u16        uVar4;
    bool       bVar5;
    u32 uVar6;
    u32        uVar7;

    if(0x0 < param_4)
    {
        if(globals->_PTR_LOOP_1050_0df6 == 0x0)
        {
            ppcVar1             = (*param_1 + 0x18);
            uVar6               = (**ppcVar1)();
            globals->_PTR_LOOP_1050_0df6 = mixed_1010_20ba(
              NULL, globals->u16_1050_0ed0, uVar6, param_7, (uVar6 >> 0x10), param_6);
        }
        uVar6 = (param_1 + 0xc);
        uVar7 = pass1_1010_2e02(globals->_PTR_LOOP_1050_0df6, (uVar6 + 0x12));
        uVar3 = param_2 + 0x1;
        uVar4 = param_3 + (0xfffe < param_2);
        for(cVar2 = (param_4 + -0x1) * '\x04'; cVar2 != '\0'; cVar2 = cVar2 + -0x1)
        {
            bVar5 = CARRY2(uVar3, uVar3);
            uVar3 = uVar3 * 0x2;
            uVar4 = uVar4 * 0x2 + bVar5;
        }
        pass1_1010_2e30(globals->_PTR_LOOP_1050_0df6, uVar3 | uVar7, uVar4 | (uVar7 >> 0x10), (param_5 * 0x8 + 0xd64));
    }
    return;
}


void struct_1010_02e0(Struct79 *param_1, Struct79 *param_2, u16 param_3)

{
    u16         uVar1;
    u8         *pu_var2;
    u16         extraout_DX;
    Struct79 *paVar3;

    paVar3                          = struct_op_1010_1d48((Struct79 *)str_var1(param_2, param_1), param_3);
    pu_var2                          = (paVar3 >> 0x10);
    uVar1                           = 0x0;
    (param_1 + 0x1)                 = 0x0;
    &param_1[0x1].field_0x4         = 0x0;
    (&param_1[0x1].field_0x4 + 0x2) = 0x0;
    &param_1[0x2].field_0x4         = 0x0;
    param_1 = addr_table_1010_0e98 ;//0xe98;
    param_1->fld2_segment            = SEG_1010;
    mem_op_1000_179c(0xc, pu_var2, SEG_1000);
    if((pu_var2 | uVar1) == 0x0)
    {
        (param_1 + 0x1) = 0x0;
    }
    else
    {
        set_struct_1008_574a(str_var1(pu_var2, uVar1));
        ((Struct79 *)(param_1 + 0x1))->fld0_addr_table = uVar1;
        param_1[0x1].fld2_segment                = extraout_DX;
    }
    return;
}


void unk_str_op_1008_d4f6(u32 param_1, u32 param_2)

{
    long        lVar1;
    u32 *pu_var2;
    u32  uVar3;
    void **ppcVar4;
    bool        bVar5;
    u32 *puVar6;
    BOOL16      BVar7;
    u16         uVar8;
    u16         uVar9;
    u16         uVar10;
    u32 *puVar11;
    u32         uVar12;
    u8          uVar13;
    u8         *extraout_DX;
    u8         *puVar14;
    u16         extraout_DX_00;
    u16         uVar15;
    u8         *extraout_DX_01;
    WORD       *pWVar16;
    WORD       *pWVar17;
    u8         *puVar18;
    u16         uVar19;
    i16         iVar20;
    i16         iVar21;
    u16         u_var22;
    WORD       *valist;
    u32         u_var23;
    u16         uStack58;
    u32         uStack20;

    u_var22  = (param_2 >> 0x10);
    iVar20  = param_2;
    lVar1   = (iVar20 + 0x200);
    valist  = (WORD *)(param_1 >> 0x10);
    iVar21  = param_1;
    puVar6  = *(iVar21 + 0xe);
    puVar14 = (iVar21 + 0x10);
    if((puVar14 | puVar6) != 0x0)
    {
        ppcVar4 = *puVar6;
        (**ppcVar4)();
        puVar14 = extraout_DX;
    }
    mem_op_1000_179c(0xc, puVar14, SEG_1000);
    if((puVar14 | puVar6) == 0x0)
    {
        puVar6 = 0x0;
        uVar15 = 0x0;
    }
    else
    {
        set_struct_1008_574a(str_var1(puVar14, puVar6));
        uVar15 = extraout_DX_00;
    }
    (iVar21 + 0xe)  = puVar6;
    (iVar21 + 0x10) = uVar15;
    pu_var2          = *(iVar20 + 0xc);
    ppcVar4         = (*pu_var2 + 0x10);
    puVar11         = pu_var2;
    (**ppcVar4)(SEG_1000, pu_var2, (iVar20 + 0xe));
    uVar12 = puVar11 & 0xffff | ZEXT24(extraout_DX_01) << 0x10;
    bVar5  = false;
    for(uStack20 = 0x0; uStack20 < uVar12; uStack20 = uStack20 + 0x1)
    {
        u_var23 = pass1_1030_1d7c((puVar11 & 0xffff), extraout_DX_01, pu_var2);
        uVar19 = (u_var23 >> 0x10);
        uVar10 = u_var23;
        if((((uVar19 | uVar10) != 0x0) && ((uVar10 + 0x1c) != 0x8000002)) && ((iVar20 = (uVar10 + 0x12), iVar20 == 0x5 || (iVar20 == 0x6))))
        {
            uVar9 = (uVar10 + 0xc);
            BVar7 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar9, 0x34);
            if((BVar7 == 0x0) && ((uVar10 + 0x1c) != lVar1))
            {
                pass1_1020_bd80(uVar9);
                pWVar16 = valist;
                wsprintf16(SEG_1020, (iVar21 + 0x22), valist);
                uVar8   = str_op_1008_60e8((param_1 & 0xffff0000 | ZEXT24((iVar21 + 0x22))), pWVar16);
                u_var22  = SEG_1000;
                pWVar17 = pWVar16;
                uVar9   = uVar8;
                mem_op_1000_179c(0x14, pWVar16, SEG_1000);
                uStack58 = pWVar17 | uVar9;
                if(uStack58 == 0x0)
                {
                    uVar9    = 0x0;
                    uStack58 = 0x0;
                }
                else
                {
                    u_var22 = SEG_1018;
                    struct_1018_47c8(str_var1(pWVar17, uVar9), 0x1,
                                     str_var1(pWVar16, uVar8), (uVar10 + 0xc), *(uVar10 + 0x4));
                }
                uVar3   = (iVar21 + 0xe);
                ppcVar4 = ((iVar21 + 0xe) + 0x4);
                (**ppcVar4)(u_var22, uVar3, (uVar3 >> 0x10), uVar9, uStack58);
                bVar5 = true;
            }
        }
    }
    if(!bVar5)
    {
        puVar14 = extraout_DX_01;
        load_string_1010_84acglobals->dat_1050_14cc, (u16)globals->dat_1050_14cc >> 0x10), SEG_1010);
        u_var22  = SEG_1000;
        puVar18 = puVar14;
        uVar10  = uVar12;
        mem_op_1000_179c(0x14, puVar14, SEG_1000);
        uVar19 = puVar18 | uVar10;
        if(uVar19 == 0x0)
        {
            uVar10 = 0x0;
            uVar13 = 0x0;
        }
        else
        {
            u_var22 = SEG_1018;
            struct_1018_47c8(str_var1(puVar18, uVar10), 0x0, CONCAT13((puVar14 >> 0x8), CONCAT12(puVar14, uVar12)), 0x0, 0x0);
            uVar13 = uVar19;
        }
        uVar3   = (iVar21 + 0xe);
        ppcVar4 = ((iVar21 + 0xe) + 0x4);
        (**ppcVar4)(u_var22, uVar3, (uVar3 >> 0x10), uVar10, uVar13);
    }
    return;
}

void pass1_1008_d790(Struct647 *param_1, u16 param_2, u16 param_3, u16 param_4)

{
    struct Struct43 *paVar1;

    struct_op_1010_1d48((Struct79 *)str_var1(param_2, param_1), param_3);
    &param_1->field_0xa        = 0x0;
    param_1->field_0xe         = 0x0;
    param_1 =  addr_table_1008_d98e;//0xd98e;
    param_1->fld2_segment      = SEG_1008;
    paVar1                     = unk_io_op_1010_830aglobals->dat_1050_14cc, 0x9b, param_4);
    param_1->field_0xa         = paVar1;
    param_1->field_0xc         = (paVar1 >> 0x10);
    return;
}


void struct_1008_dd4e(Struct209 *param_1, u16 param_2, u16 param_3)

{
    u16         uVar1;
    u8         *pu_var2;
    u16         extraout_DX;
    Struct79 *paVar3;

    paVar3                     = struct_op_1010_1d48((Struct79 *)str_var1(param_2, param_1), param_3);
    pu_var2                     = (paVar3 >> 0x10);
    uVar1                      = 0x0;
    &param_1->field_0xa        = 0x0;
    param_1->field_0xe         = 0x0;
    param_1->field_0x12        = 0x0;
    param_1->field_0x16        = 0x0;
    param_1->field_0x1a_addr_offset = 0x0;
    param_1->field_0x1e        = 0x0;
    param_1 =  addr_table_1008_eaac;//0xeaac;
    param_1->fld2_segment           = SEG_1008;
    mem_op_1000_179c(0xc, pu_var2, SEG_1000);
    if((pu_var2 | uVar1) == 0x0)
    {
        &param_1->field_0xa = 0x0;
    }
    else
    {
        set_struct_1008_574a(str_var1(pu_var2, uVar1));
        param_1->field_0xa = uVar1;
        param_1->field_0xc = extraout_DX;
    }
    return;
}


void pass1_1008_ddca(u16 *param_1, u16 param_2)

{
    u32 *puVar1;
    u16 u_var2;
    void **ppcVar3;
    Struct471 *iVar5;
    u16 uVar4;

    uVar4 = (param_1 >> 0x10);
    iVar5 = (Struct471 *) param_1;
    param_1->field_0x0 = addr_table_1008_eaac;//0xeaac;
    iVar5->fld2_segment = SEG_1008;
    puVar1 = iVar5->field_0xe;
    u_var2 = iVar5->field_0x10;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    puVar1 = iVar5->field_0x12;
    u_var2 = iVar5->field_0x14;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    puVar1 = iVar5->field_0xa;
    u_var2  = iVar5->field_0xc;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    fn_ptr_1000_17ce((Struct18 *)iVar5->field_0x1e, SEG_1000);
    pass1_1010_1d80(param_1, param_2);
    return;
}


void pass1_1008_de58(Struct211 *param_1, long param_2, long param_3, u16 param_4)

{
    void **ppcVar1;
    bool         bVar2;
    Struct210 *puVar4;
    u16          extraout_DX;
    u8          *puVar3;
    u16          uVar4;
    Struct211 *iVar6;
    Struct210 *paVar5;
    u16          uVar6;
    u32          uVar7;
    u8           local_a[0x8];

    uVar6 = (param_1 >> 0x10);
    iVar6 = (Struct211 *)param_1;
    pass1_1008_5784(str_var1(param_4, local_a), iVar6->field_0xa);
    bVar2 = false;
    do
    {
        puVar4 = (Struct210 *)local_a;
        pass1_1008_5b12(puVar4, param_4);
        puVar3 = (extraout_DX | puVar4);
        paVar5 = puVar4;
        if(puVar3 == 0x0)
            goto LAB_1008_dedb;
    } while(((puVar4->field_0x4 != param_3) || (puVar4->field_0x8 != param_2)) && ((puVar4->field_0x8 != param_3 || (puVar4->field_0x4 != param_2))));
    puVar4->field_0xc  = 0x1;
    uVar7              = pass1_1030_8326();
    puVar3             = (uVar7 >> 0x10);
    paVar5             = (Struct210 *)uVar7;
    puVar4->field_0xe  = paVar5;
    puVar4->field_0x10 = puVar3;
    bVar2              = true;
LAB_1008_dedb:
    if(!bVar2)
    {
        mem_op_1000_179c(0x14, puVar3, SEG_1000);
        uVar4 = puVar3 | paVar5;
        if(uVar4 == 0x0)
        {
            paVar5 = (Struct210 *)0x0;
            uVar4  = 0x0;
        }
        else
        {
            struct_1008_dc90(str_var1(puVar3, paVar5), param_2, param_3);
        }
        paVar5->field_0xc  = 0x1;
        uVar7              = pass1_1030_8326();
        paVar5->field_0xe  = uVar7;
        paVar5->field_0x10 = (uVar7 >> 0x10);
        ppcVar1            = (*iVar6->field_0xa + 0x4);
        (**ppcVar1)();
    }
    return;
}

void pass1_1008_e3ec(Struct218 *param_1, u32 *param_2, u32 *param_3, u16 param_4)

{
    u32   uVar1;
    u32  *pu_var2;
    void **ppcVar3;
    Struct219 *paVar4;
    u32  *puVar5;
    Struct219 *puVar4;
    u8          *extraout_DX;
    u16          extraout_DX_00;
    u16          uVar6;
    u16          uVar7;
    u16          extraout_DX_01;
    u8          *puVar8;
    u8          *extraout_DX_02;
    u16          extraout_DX_03;
    u16          uVar9;
    u16          extraout_DX_04;
    Struct218 *iVar10;
    u16          uVar10;
    Struct219  local_14;
    u16          uStack12;
    u16          uStack10;
    u16          uStack8;
    u16          u_stack6;
    i16          iStack4;

    uVar10 = (param_1 >> 0x10);
    iVar10 = (Struct218 *)param_1;
    // WARNING: Load size is inaccurate
    puVar5 = iVar10->field_0xe;
    puVar8 = (&iVar10->field_0xe + 0x2);
    if((puVar8 | puVar5) != 0x0)
    {
        ppcVar3 = *puVar5;
        (**ppcVar3)();
        puVar8 = extraout_DX;
    }
    mem_op_1000_179c(0x18, puVar8, SEG_1000);
    if((puVar8 | puVar5) == 0x0)
    {
        puVar5 = 0x0;
        uVar6  = 0x0;
    }
    else
    {
        struct_op_1030_1cd8(CONCAT13((puVar8 >> 0x8), CONCAT12(puVar8, puVar5)), 0x5, 0x5);
        uVar6 = extraout_DX_00;
    }
    &iVar10->field_0xe = puVar5;
    *(&iVar10->field_0xe + 0x2)        = uVar6;
    pass1_1028_dc52((Struct92 *)CONCAT13((param_4 >> 0x8), CONCAT12(param_4, &local_14)), 0x1, 0x0, 0x400);
    while(true)
    {
        uVar7  = uVar6;
        paVar4 = &local_14;
        pass1_1028_e4ec(str_var1(param_4, paVar4));
        if((uVar7 | paVar4) == 0x0)
            break;
        uVar6 = uVar7 | paVar4;
        if((paVar4 + 0x40) != 0x8000002)
        {
            uVar1   = paVar4->field_0x4;
            pu_var2  = iVar10->field_0xe;
            ppcVar3 = (*iVar10->field_0xe + 0xc);
            (**ppcVar3)(0x28, pu_var2, (pu_var2 >> 0x10), uVar1, (uVar1 >> 0x10));
            uVar6 = extraout_DX_01;
        }
    }
    *param_3 = iVar10->field_0xe;
    uVar6    = *(&iVar10->field_0x12 + 0x2);
    puVar5   = iVar10->field_0x12;
    puVar8   = (uVar6 | puVar5);
    if(puVar8 != 0x0)
    {
        ppcVar3 = *puVar5;
        (**ppcVar3)(0x28, puVar5, uVar6, 0x1);
        puVar8 = extraout_DX_02;
    }
    mem_op_1000_179c(0x18, puVar8, SEG_1000);
    if((puVar8 | puVar5) == 0x0)
    {
        puVar5 = 0x0;
        uVar9  = 0x0;
    }
    else
    {
        struct_op_1030_1cd8(CONCAT13((puVar8 >> 0x8), CONCAT12(puVar8, puVar5)), 0x5, 0x5);
        uVar9 = extraout_DX_03;
    }
    &iVar10->field_0x12 = puVar5;
    (&iVar10->field_0x12 + 0x2)         = uVar9;
    uStack12                            = uStack8;
    uStack10                            = u_stack6;
    if(iStack4 != 0x0)
    {
        uStack12 = 0x1;
        u_stack6  = 0x0;
        uStack10 = u_stack6;
    }
    while(true)
    {
        puVar4 = &local_14;
        pass1_1028_e4ec(str_var1(param_4, puVar4));
        if((u_stack6 | puVar4) == 0x0)
            break;
        uVar1   = puVar4->field_0x4;
        pu_var2  = iVar10->field_0x12;
        ppcVar3 = (*iVar10->field_0x12 + 0xc);
        (**ppcVar3)(0x28, pu_var2, (pu_var2 >> 0x10), uVar1, (uVar1 >> 0x10));
        u_stack6 = extraout_DX_04;
    }
    *param_2 = iVar10->field_0x12;
    return;
}

i16 pass1_1008_c646(u16 param_1, u32 param_2, u16 param_3)

{
    i16 *pi_var1;
    i16  iVar2;
    u8  *puVar3;
    i16  unaff_DI;
    u32 *puVar4;
    u16 *puVar5;
    i16  iStack18;
    i16  iStack16;

    puVar4   = pass1_1008_c6fa(str_var1(param_2, param_1), (param_2 >> 0x10));
    puVar3   = (puVar4 >> 0x10);
    puVar5   = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x35, param_3, puVar3, unaff_DI);
    iStack18 = 0x0;
    iStack16 = 0x0;
    while((pi_var1 = (puVar4 + 0x4), iVar2 = iStack16, *pi_var1 != iStack18 && iStack18 <= *pi_var1 && (iVar2 = (*puVar4 + iStack18 * 0x2), (iVar2 * 0x2 + puVar5 + 0xa) == 0x0)))
    {
        iStack18 = iStack18 + 0x1;
    }
    iStack16 = iVar2;
    return iStack16;
}

void pass1_1008_c882(Struct201 *param_1, u16 param_2)

{
    i16         *pi_var1;
    u32  *pu_var2;
    u16          uVar3;
    u32  *puVar4;
    void **ppcVar5;
    u16          uVar6;
    u16          uVar7;
    u8          *puVar8;
    u8          *extraout_DX;
    u8          *puVar9;
    u8          *puVar10;
    u16          uVar11;
    Struct201 *iVar9;
    i16          unaff_DI;
    u16          uVar12;
    u16          uVar13;
    Struct21  *paVar14;
    u32   uVar15;
    u16         *puVar16;
    u32         *puVar17;
    i16          iStack16;

    uVar12 = (param_1 >> 0x10);
    iVar9  = (Struct201 *)param_1;
    // WARNING: Load size is inaccurate
    pu_var2  = iVar9->field_0xa;
    uVar11  = *(&iVar9->field_0xa + 0x2);
    paVar14 = str_var1(uVar11, pu_var2);
    if((uVar11 | pu_var2) != 0x0)
    {
        ppcVar5 = *pu_var2;
        paVar14 = (**ppcVar5)();
    }
    mem_op_1000_179c(0xc, (paVar14 >> 0x10), SEG_1000);
    if(paVar14 == 0x0)
    {
        uVar15 = 0x0;
    }
    else
    {
        uVar15 = set_struct_1008_574a(paVar14);
    }
    puVar9                    = (uVar15 >> 0x10);
    &iVar9->field_0xa         = uVar15;
    (&iVar9->field_0xa + 0x2) = puVar9;
    puVar16                   = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x35, param_2, puVar9, unaff_DI);
    puVar17                   = pass1_1008_c6fa(globals->dat_1050_06e0, 0x44);
    puVar8                    = (puVar17 >> 0x10);
    iStack16                  = 0x0;
    puVar9                    = puVar8;
    while(true)
    {
        pi_var1 = (puVar17 + 0x4);
        if(*pi_var1 == iStack16 || *pi_var1 < iStack16)
            break;
        uVar3 = (*puVar17 + iStack16 * 0x2);
        if((uVar3 * 0x2 + puVar16 + 0xa) != 0x0)
        {
            uVar6   = pass1_1020_bd80(uVar3);
            uVar7   = str_op_1008_60e8(str_var1(puVar9, uVar6), puVar9);
            uVar13  = SEG_1000;
            uVar6   = uVar7;
            puVar10 = puVar9;
            mem_op_1000_179c(0x14, puVar9, SEG_1000);
            uVar11 = puVar10 | uVar6;
            if(uVar11 == 0x0)
            {
                uVar6  = 0x0;
                uVar11 = 0x0;
            }
            else
            {
                uVar13 = SEG_1018;
                struct_1018_47c8(
                  str_var1(puVar10, uVar6), 0x1, str_var1(puVar9, uVar7), uVar3, 0x0);
            }
            puVar4  = iVar9->field_0xa;
            ppcVar5 = (*iVar9->field_0xa + 0x4);
            (**ppcVar5)(uVar13, puVar4, (puVar4 >> 0x10), uVar6, uVar11);
            puVar9 = extraout_DX;
        }
        iStack16 = iStack16 + 0x1;
    }
    return;
}
