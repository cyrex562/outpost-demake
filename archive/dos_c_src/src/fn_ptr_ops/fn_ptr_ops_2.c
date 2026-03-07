
#include "fn_ptr_ops_2.h"

#include "address_tables/function_tables.h"
#include "fn_ptr_ops_1.h"
#include "fn_ptr_ops_3.h"
#include "fn_ptr_ops_4.h"
#include "fn_ptr_ops_6.h"
#include "fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "string_ops.h"
#include "struct_ops/struct_ops_1.h"
#include "struct_ops/struct_ops_2.h"
#include "struct_ops/struct_ops_3.h"
#include "structs/structs_0xx/struct_18.h"
#include "structs/structs_0xx/structs_9x.h"
#include "structs/structs_1xx/structs_10x.h"
#include "structs/structs_4xx/struct_426.h"
#include "sys_ops/sys_ops_2.h"
#include "unk/unk_10.h"
#include "unk/unk_13.h"
#include "unk/unk_14.h"
#include "unk/unk_2.h"
#include "unk/unk_3.h"
#include "unk/unk_4.h"
#include "unk/unk_6.h"
#include "unk/unk_7.h"
#include "unk/unk_8.h"
#include "unk/unk_9.h"
#include "utils.h"

#include <stdbool.h>

Struct18 *pass1_1038_3074(Globals *globals, Struct18 *param_1, u8 param_2)

{
    pass1_1038_2a5c(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void pass1_1038_33f8(Globals *globals, u16 *param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;

    uVar5         = (param_1 >> 0x10);
    iVar4         = param_1;
    param_1->field_0x0 = addr_table_1038_6504;//0x6504;
    (iVar4 + 0x2) = SEG_1038;
    puVar1        = (iVar4 + 0x14);
    u_var2         = (iVar4 + 0x16);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    puVar1 = (iVar4 + 0x1f6);
    u_var2  = (iVar4 + 0x1f8);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    fn_ptr_1000_17ce((iVar4 + 0x1fa), SEG_1000);
    puVar1 = (iVar4 + 0x210);
    u_var2  = (iVar4 + 0x212);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)(SEG_1000, puVar1, u_var2, 0x1);
    }
    fn_ptr_1000_17ce((iVar4 + 0x21a), SEG_1000);
    pass1_1030_18b2(param_1);
}


void pass1_1038_11b0(Globals *globals,
                     u32      param_1,
                     u32     *param_2,
                     u32     *param_3,
                     u16      param_4,
                     u32      param_5,
                     u16      param_6)

{
    void *ppcVar1;
    u16       u_var2;
    u32       uVar3;
    u32       uStack10;
    u32       u_stack6;

    ppcVar1 = (*param_3 + 0x10);
    (**ppcVar1)();
    u_stack6  = str_var1(param_5, param_4);
    uStack10 = 0x0;
    while(true)
    {
        if(u_stack6 <= uStack10)
        {
            return;
        }
        ppcVar1 = (*param_3 + 0x4);
        uVar3   = u_stack6;
        (**ppcVar1)();
        u_var2 = uVar3;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, param_5);
        uVar3   = struct_op_1030_73a8(str_var1(param_5, u_var2));
        param_5 = param_5 & 0xffff0000 | uVar3 >> 0x10;
        u_var2   = uVar3;
        pass1_1038_0f8c(param_1, (param_1 >> 0x10), param_2, uVar3, u_var2, param_5, SEG_1030, param_6);
        if(u_var2 == 0x0)
            break;
        uStack10 = uStack10 + 0x1;
    }
}


void pass1_1038_1220(Globals *globals, u32 param_1, u32 param_2, u32 param_3, u16 param_4)

{
    void **ppcVar1;
    u32  u_var2;
    u16         uVar3;
    u16         uVar4;
    u16         uVar5;
    u8         *puVar6;
    u8         *puVar7;
    u8         *puVar8;
    u16         uVar10;
    u32         uVar9;
    u32        *puVar11;
    u8          uVar12;
    u32 *puStack14;
    u32 *puStack10;

    uVar10  = (param_3 >> 0x10);
    puVar11 = pass1_1008_c6fa(globals->_PTR_LOOP_1050_06e0, 0x4);
    puVar6  = (puVar11 >> 0x10);
    uVar3   = puVar11;
    pass1_1038_4d6e(param_2, puVar11, uVar3, puVar6);
    puStack10 = str_var1(puVar6, uVar3);
    ppcVar1   = (*puStack10 + 0x10);
    puVar7    = puVar6;
    uVar4     = uVar3;
    (**ppcVar1)(SEG_1008, uVar3, puVar6);
    if((puVar7 != 0x0) || (uVar4 != 0x0))
    {
        puVar11 = pass1_1008_c6fa(globals->_PTR_LOOP_1050_06e0, 0x5);
        puVar8  = (puVar11 >> 0x10);
        uVar4   = puVar11;
        pass1_1038_4d6e(param_2, puVar11, uVar4, puVar8);
        puStack14 = str_var1(puVar8, uVar4);
        uVar12    = uVar4;
        u_var2     = *puStack14;
        ppcVar1   = u_var2 + 0x8;
        puVar7    = puVar8;
        uVar5     = uVar4;
        (**ppcVar1)(SEG_1008, uVar12, puVar8);
        uVar9 = str_var1(uVar10, puVar7);
        if(((puVar7 != 0x0) || (uVar5 != 0x0)) && (pass1_1038_11b0(NULL,
                               param_1,
                               CONCAT13((puVar6 >> 0x8), CONCAT12(puVar6, uVar3)),
                               str_var1(puVar8, uVar4),
                               uVar5,
                               uVar9,
                               param_4), uVar5 == 0x0))
        {
            if(puStack14 == 0x0)
            {
                return;
            }
            ppcVar1 = u_var2;
            (**ppcVar1)(0x8, uVar12, puVar8, 0x1);
            return;
        }
        uVar10 = (uVar9 >> 0x10);
        if(puStack14 != 0x0)
        {
            ppcVar1 = *puStack14;
            (**ppcVar1)(0x8, uVar12, puVar8, 0x1);
        }
        puVar11 = pass1_1008_c6fa(globals->_PTR_LOOP_1050_06e0, 0x6);
        puVar8  = (puVar11 >> 0x10);
        uVar4   = puVar11;
        pass1_1038_4d6e(param_2, puVar11, uVar4, puVar8);
        puStack14 = str_var1(puVar8, uVar4);
        ppcVar1   = (*puStack14 + 0x10);
        puVar7    = puVar8;
        uVar5     = uVar4;
        (**ppcVar1)(0x8, uVar4, puVar8);
        if((puVar7 != 0x0) || (uVar5 != 0x0))
        {
            pass1_1038_11b0(NULL,
                            param_1,
                            str_var1(puVar6, uVar3),
                            str_var1(puVar8, uVar4),
                            uVar5,
                            str_var1(uVar10, puVar7),
                            param_4);
        }
        if(puStack14 != 0x0)
        {
            ppcVar1 = *puStack14;
            (**ppcVar1)(0x8, uVar4, puVar8, 0x1);
        }
    }
    if(puStack10 != 0x0)
    {
        ppcVar1 = *puStack10;
        (**ppcVar1)(0x8, uVar3, puVar6, 0x1);
    }
}


void pass1_1038_134a(Globals *globals,
                     u16      param_1,
                     u16      param_2,
                     u32     *param_3,
                     u32     *param_4,
                     u32     *param_5,
                     u16      param_6,
                     u16      param_7)

{
    void **ppcVar1;
    u16    u_var2;
    u16    extraout_DX;
    u16    extraout_DX_00;
    u16    uVar3;
    u16    unaff_SS;
    u32    uVar4;
    u32   *puVar5;
    u32    u_stack6;

    ppcVar1 = (*param_5 + 0x10);
    puVar5  = param_5;
    (**ppcVar1)();
    u_stack6  = str_var1(extraout_DX, param_6);
    *param_3 = 0x0;
    do
    {
        if(u_stack6 <= *param_4)
        {
            return;
        }
        uVar4    = *param_4;
        *param_4 = *param_4 + 0x1;
        ppcVar1  = (*param_5 + 0x4);
        (**ppcVar1)(param_7, param_5, uVar4, puVar5);
        u_var2 = uVar4;
        uVar3 = extraout_DX_00;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, extraout_DX_00);
        uVar4           = struct_op_1030_73a8(str_var1(uVar3, u_var2));
        uVar3           = (uVar4 >> 0x10);
        param_7         = &globals->USHORT_1050_1028;
        uVar4           = pass1_1028_45e2(uVar4 & 0xffff | uVar3 << 0x10, uVar4, uVar3, unaff_SS);
        uVar3           = (uVar4 >> 0x10);
        param_3         = uVar4;
        (param_3 + 0x2) = uVar3;
    } while((uVar3 | param_3) == 0x0);
}


void pass1_1038_13da(Globals *globals,
                     u16      param_1,
                     u16      param_2,
                     u32     *param_3,
                     u32     *param_4,
                     u32     *param_5,
                     u16      param_6,
                     u16      param_7)

{
    void **ppcVar1;
    u16    u_var2;
    u16    extraout_DX;
    u16    extraout_DX_00;
    u16    uVar3;
    u32    uVar4;
    u32   *puVar5;
    u32    u_stack6;

    ppcVar1 = (*param_5 + 0x10);
    puVar5  = param_5;
    (**ppcVar1)();
    u_stack6  = str_var1(extraout_DX, param_6);
    *param_3 = 0x0;
    do
    {
        if(u_stack6 <= *param_4)
        {
            return;
        }
        uVar4    = *param_4;
        *param_4 = *param_4 + 0x1;
        ppcVar1  = (*param_5 + 0x4);
        (**ppcVar1)(param_7, param_5, uVar4, puVar5);
        u_var2 = uVar4;
        uVar3 = extraout_DX_00;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, extraout_DX_00);
        if((uVar3 | u_var2) == 0x0)
        {
            return;
        }
        uVar4 = struct_op_1030_73a8(str_var1(uVar3, u_var2));
        uVar3 = (uVar4 >> 0x10);
        if((uVar3 | uVar4) == 0x0)
        {
            return;
        }
        param_7         = &globals->USHORT_1050_1028;
        uVar4           = pass1_1028_3c32((uVar4 & 0xffff | uVar3 << 0x10));
        uVar3           = (uVar4 >> 0x10);
        param_3         = uVar4;
        (param_3 + 0x2) = uVar3;
    } while((uVar3 | param_3) == 0x0);
}


void pass1_1038_1482(Globals *globals,
                     u32      param_1,
                     u32     *param_2,
                     u32     *param_3,
                     u16      param_4,
                     u16      param_5,
                     u16      param_6,
                     u16      param_7,
                     u16      param_8)

{
    void **ppcVar1;
    sqword      sVar2;
    u16         uVar3;
    u32 *puVar4;
    u16         uVar5;
    u16         uVar6;
    u32         uVar7;
    u8         *puVar8;
    u8         *puVar9;
    u16         uVar10;
    u16         uVar11;
    u8          uVar12;
    u8          uVar13;
    u16         uVar14;
    long        lStack74;
    u32  local_46;
    i16         local_42[0x4];
    u16         uStack58;
    u16         uStack56;
    u32        *puStack54;
    u32        *puStack50;
    u32         uStack46;
    u16         uStack42;
    u16         uStack40;
    u16         uStack38;
    u16         uStack36;
    u32  uStack34;
    u16         uStack30;
    u16         uStack28;
    u16         uStack26;
    u16         uStack24;
    u32         uStack22;
    u32  uStack18;
    u32  uStack14;
    u32  local_a;
    u32  local_6;

    local_6 = 0x0;
    local_a = 0x0;
    puVar4  = &local_a;
    uVar11  = (param_1 >> 0x10);
    uVar3   = param_1;
    pass1_1038_134a(NULL,
                    uVar3,
                    uVar11,
                    str_var1(param_6, puVar4),
                    str_var1(param_6, &local_6),
                    param_3,
                    puVar4,
                    param_4);
    uStack14 = str_var1(param_5, puVar4);
    ppcVar1  = (*param_2 + 0x10);
    (**ppcVar1)(param_4, param_2);
    uStack18 = str_var1(param_5, puVar4);
    uStack22 = 0x0;
    do
    {
        if(uStack18 <= uStack22)
        {
            return;
        }
        uStack14 = uStack14 | uStack14;
        if(uStack14 == 0x0)
        {
            return;
        }
        pass1_1028_b58e(uStack14);
        uStack26 = uStack14;
        uStack24 = uStack18;
        pass1_1038_1a30(uVar3, uVar11, str_var1(uStack18, uStack14), &globals->USHORT_1050_1028);
        uStack30 = uStack14;
        uStack28 = uStack18;
        if((uStack18 | uStack14) != 0x0)
        {
            sVar2    = (qword)str_var1(uStack18, uStack14) * 0x64;
            uVar5    = ((qword)sVar2 >> 0x20);
            uVar7    = sVar2 >> 0x1;
            ppcVar1  = (*param_2 + 0x4);
            uStack34 = uVar7;
            (**ppcVar1)(&globals->USHORT_1050_1028, param_2, uStack22, (uStack22 >> 0x10));
            uVar6    = uVar7;
            uStack38 = uVar6;
            uStack36 = uVar5;
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar6, uVar5);
            uStack42  = uVar6;
            uStack40  = uVar5;
            uStack46  = struct_op_1030_73a8(str_var1(uVar5, uVar6));
            puStack50 = (uStack46 + 0x28);
            puStack54 = 0x0;
            uStack56  = (puStack50 + 0x4);
            for(uStack58 = 0x0; uVar5 = uStack56, uStack58 < uStack56; uStack58 = uStack58 + 0x1)
            {
                pass1_1020_bb16(puStack50,
                                str_var1(param_6, &local_46), CONCAT13((param_6 >> 0x8), CONCAT12(param_6, local_42)), uStack58);
                if(((local_46 != 0x0) && (0xd < local_42[0])) && (local_42[0] < 0x1d))
                {
                    uVar7 = local_46;
                    if(uStack34 < local_46)
                    {
                        uVar7          = uStack34 & 0xffff;
                        local_46 = uStack34;
                    }
                    uVar5 = uVar7;
                    if((local_a <= local_46) && ((local_a < local_46 || (local_a < uVar5))))
                    {
                        uVar5          = local_a;
                        local_46 = local_a;
                    }
                    lStack74 = str_var1(local_46, uVar5);
                    uStack34 = str_var1(uStack34 + (-(uStack34 < uVar5) - local_46), uStack34 - uVar5);
                    local_a  = str_var1(local_a + (-(local_a < uVar5) - local_46), local_a - uVar5);
                    puVar9   = local_46;
                    if(puStack54 == 0x0)
                    {
                        puVar8 = local_46;
                        uVar10 = uVar5;
                        mem_op_1000_179c(0xa, local_46, 0);
                        puVar9 = (puVar8 | uVar10);
                        if(puVar9 == 0x0)
                        {
                            uVar10 = 0x0;
                            puVar9 = 0x0;
                        }
                        else
                        {
                            pass1_1020_ba3e((long *)str_var1(puVar8, uVar10), 0x5, 0x5, param_8, param_7);
                        }
                        puStack54 = str_var1(puVar9, uVar10);
                    }
                    pass1_1020_bb8a((long *)puStack54, uVar5,
                                    str_var1(local_42[0], local_46), param_8, param_6);
                    uVar7 = local_46 - lStack74;
                    pass1_1020_bb8a((long *)puStack50, uVar7,
                                    str_var1(local_42[0], (uVar7 >> 0x10)), param_8, param_6);
                    if(local_a == 0x0)
                    {
                        pass1_1038_1b3a(uVar3, uVar11, uStack14, puStack54, param_6, uVar7, param_7, param_8);
                        puStack54 = 0x0;
                        uVar7     = ZEXT24(&local_a);
                        pass1_1038_134a(NULL,
                                        uVar3,
                                        uVar11,
                                        str_var1(param_6, &local_a),
                                        str_var1(param_6, &local_6),
                                        param_3,
                                        &local_a,
                                        SEG_1020);
                        uVar5    = uVar7;
                        uStack14 = uVar7 & 0xffff | ZEXT24(puVar9) << 0x10;
                        uVar10   = puVar9 | uVar5;
                        if(uVar10 != 0x0)
                        {
                            uVar12 = 0x64;
                            uVar13 = 0x0;
                            uVar14 = 0x0;
                            pass1_1028_b58e(uVar7 & 0xffff | ZEXT24(puVar9) << 0x10);
                            uStack26 = uVar5;
                            uStack24 = uVar10;
                            pass1_1038_1a30(uVar3, uVar11,
                                            str_var1(uVar10, uVar5), &globals->USHORT_1050_1028);
                            uVar7    = (str_var1(uVar10, uVar5) * str_var1(uVar14, CONCAT11(uVar13, uVar12))) >> 0x1;
                            uStack34 = uVar7;
                            uStack30 = uVar5;
                            uStack28 = uVar10;
                        }
                    }
                    uVar5 = uVar7;
                    if((uStack34 == 0x0) || (local_a == 0x0))
                        break;
                }
            }
            if(puStack54 != 0x0)
            {
                pass1_1038_1b3a(uVar3, uVar11, uStack14, puStack54, param_6, uVar5, param_7, param_8);
                puStack54 = 0x0;
            }
        }
        uStack22 = uStack22 + 0x1;
    } while(true);
}


void pass1_1038_16f2(Globals *globals,
                     u32      param_1,
                     u32     *param_2,
                     u32     *param_3,
                     u16      param_4,
                     u16      param_5,
                     u16      param_6,
                     u16      param_7,
                     u16      param_8,
                     u8       param_9)

{
    long       *plVar1;
    void **ppcVar2;
    u16         uVar3;
    u32 *puVar4;
    u16         uVar5;
    u32 *puVar6;
    u32 *puVar7;
    u16         uVar8;
    u16         uVar9;
    u16         uVar10;
    u16         uVar11;
    u8         *puVar12;
    u32         uVar13;
    u32         uVar14;
    u32         uVar15;
    long        lVar16;
    u16         uVar17;
    long        lStack68;
    u32 *puStack56;
    u32 *puStack52;
    long       *plStack50;
    u16         uStack46;
    u32  uStack42;
    u32         uStack22;
    u32         uStack18;
    u32         uStack14;
    u32  local_a;
    u32  local_6;

    local_6 = 0x0;
    local_a = 0x0;
    puVar6  = &local_a;
    uVar17  = (param_1 >> 0x10);
    uVar3   = param_1;
    pass1_1038_13da(NULL,
                    uVar3,
                    uVar17,
                    str_var1(param_8, puVar6),
                    str_var1(param_8, &local_6),
                    param_3,
                    puVar6,
                    param_7);
    uStack14 = str_var1(param_4, puVar6);
    uVar8    = param_4 | puVar6;
    if(uVar8 != 0x0)
    {
        ppcVar2 = (*param_2 + 0x10);
        (**ppcVar2)(param_7, param_2);
        uStack18 = str_var1(uVar8, puVar6);
        for(uStack22 = 0x0; uStack22 < uStack18; uStack22 = uStack22 + 0x1)
        {
            ppcVar2 = (*param_2 + 0x4);
            uVar15  = uStack18;
            uVar10  = uVar8;
            (**ppcVar2)(param_7, param_2, uStack22, (uStack22 >> 0x10));
            uVar5 = uVar15;
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar5, uVar10);
            param_7 = SEG_1030;
            uVar15  = struct_op_1030_73a8(str_var1(uVar10, uVar5));
            uVar11  = (uVar15 >> 0x10);
            uVar9   = uVar15;
            pass1_1038_1a30(uVar3, uVar17, str_var1(uVar10, uVar5), 0x1030);
            if((uVar11 | uVar9) != 0x0)
            {
                uStack42 = (str_var1(uVar11, uVar9) * 0x64) >> 0x1;
                plVar1   = *(long **)(uVar5 + 0x22);
                uVar9    = (uVar5 + 0x24);
                uVar13   = uVar9;
                uStack46 = plVar1;
                if((uVar9 | uStack46) != 0x0)
                {
                    plStack50 = (long *)0x0;
                    puVar6    = pass1_1028_0d80(uVar15);
                    puStack56 = 0x0;
                    puStack52 = puVar6;
                    while(true)
                    {
                        lVar16 = pass1_1020_bae6(uStack46,
                                                 str_var1(puStack52, (plVar1 >> 0x10)), puStack52, uVar13, param_8);
                        uVar9  = (lVar16 >> 0x10);
                        puVar7 = lVar16;
                        uVar13 = (uVar9 | puVar7);
                        if((uVar9 | puVar7) != 0x0)
                        {
                            uVar14 = uVar9;
                            if((uStack42 <= uVar9) && ((uStack42 < uVar9 || (uStack42 < puVar7))))
                            {
                                uVar14 = uStack42;
                                puVar7 = uStack42;
                            }
                            if((local_a <= uVar14) && ((local_a < uVar14 || (local_a < puVar7))))
                            {
                                uVar14 = local_a;
                                puVar7 = local_a;
                            }
                            puVar12  = uVar14;
                            lStack68 = str_var1(puVar12, puVar7);
                            uStack42 = str_var1((uStack42 - puVar12) - (uStack42 < puVar7), uStack42 - puVar7);
                            local_a  = str_var1((local_a - puVar12) - (local_a < puVar7), local_a - puVar7);
                            uVar13   = uVar14;
                            if(plStack50 == (long *)0x0)
                            {
                                puVar4 = puVar7;
                                mem_op_1000_179c(0xa, puVar12, 0);
                                uVar13 = (puVar12 | puVar4);
                                if((puVar12 | puVar4) == 0x0)
                                {
                                    puVar4 = 0x0;
                                    uVar13 = 0x0;
                                }
                                else
                                {
                                    pass1_1020_ba3e((long *)str_var1(puVar12, puVar4), 0x5, 0x5, param_6, param_5);
                                }
                                plStack50 = (long *)str_var1(uVar13, puVar4);
                            }
                            pass1_1020_bb8a(plStack50, puVar7, uVar14 | ZEXT24(puStack52) << 0x10, param_6, param_8);
                            pass1_1020_bb8a(plVar1, (lVar16 - lStack68),
                              str_var1(puStack52, ((lVar16 - lStack68) >> 0x10)), param_6, param_8);
                            uVar9     = uVar13;
                            puStack56 = puStack52;
                            puVar7    = puStack52;
                            if(local_a == 0x0)
                            {
                                pass1_1038_1ac6(uVar3, uVar17, uStack14, plStack50, puStack52, param_8, param_9);
                                plStack50 = (long *)0x0;
                                puVar7    = &local_a;
                                pass1_1038_13da(NULL,
                                                uVar3,
                                                uVar17,
                                                str_var1(param_8, puVar7),
                                                str_var1(param_8, &local_6),
                                                param_3,
                                                puVar7,
                                                SEG_1020);
                                uStack14 = str_var1(uVar9, puVar7);
                                uVar13   = (uVar9 | puVar7);
                                if((uVar9 | puVar7) == 0x0)
                                {
                                    return;
                                }
                            }
                        }
                        param_7 = SEG_1020;
                        if((uStack42 == 0x0) || (local_a == 0x0))
                            break;
                        param_7 = &globals->USHORT_1050_1028;
                        puVar7  = pass1_1028_0d80(uVar15);
                        if((puVar7 == puStack56) || ((puStack52 = puVar7, puStack56 == 0x0 && (puVar7 == puVar6))))
                            break;
                    }
                    if(plStack50 != (long *)0x0)
                    {
                        pass1_1038_1ac6(uVar3, uVar17, uStack14, plStack50, puVar7, param_8, param_9);
                    }
                }
            }
        }
    }
}


void pass1_1038_1940(Globals *globals,
                     u32      param_1,
                     u32     *param_2,
                     u32      param_3,
                     u16      param_4,
                     u16      param_5,
                     u16      param_6)

{
    void *ppcVar1;
    u16       u_var2;
    u16       uVar3;
    u8       *puVar4;
    u16       extraout_DX;
    u32      *puVar5;
    u32      *puStack10;

    puVar5 = pass1_1008_c6fa(globals->_PTR_LOOP_1050_06e0, 0x3);
    puVar4 = (puVar5 >> 0x10);
    u_var2  = puVar5;
    pass1_1038_4d6e(param_3, puVar5, u_var2, puVar4);
    puStack10 = str_var1(puVar4, u_var2);
    ppcVar1   = (*puStack10 + 0x10);
    uVar3     = u_var2;
    (**ppcVar1)(SEG_1008, u_var2, puVar4);
    if((extraout_DX | uVar3) != 0x0)
    {
        pass1_1038_1482(NULL,
                        param_1,
                        param_2,
                        puStack10,
                        SEG_1008,
                        extraout_DX | uVar3,
                        param_6,
                        param_4,
                        param_5);
    }
    if(puStack10 != 0x0)
    {
        ppcVar1 = *puStack10;
        (**ppcVar1)(SEG_1008, u_var2, puVar4, 0x1);
    }
}


void  pass1_1038_1b3a(u16 param_1, u16 param_2, u32 param_3, u32 *param_4, u16 param_5, u16 param_6, u16 param_7, u16 param_8)

{
    i16        extraout_DX;
    u32        local_1a;
    u16        local_16[0x2];
    u16        uStack18;
    u16        uStack16;
    u32 uStack14;
    u32        uStack10;
    u32        u_stack6;

    pass1_1028_b58e(param_3);
    u_stack6  = str_var1(extraout_DX, param_6);
    uStack10 = param_3;
    uStack14 = pass1_1028_45e2(param_3, param_3, extraout_DX, param_5);
    uStack16 = (param_4 + 0x4);
    for(uStack18 = 0x0; uStack18 < uStack16; uStack18 = uStack18 + 0x1)
    {
        pass1_1020_bb16(param_4, str_var1(param_5, &local_1a), str_var1(param_5, local_16), uStack18);
        if(uStack14 < local_1a)
        {
            pass1_1030_7ddc(u_stack6, uStack14, local_16[0], uStack14, uStack14, param_7, param_8, param_5);
            uStack14 = 0x0;
        }
        else
        {
            uStack14 = uStack14 - local_1a;
            pass1_1030_7ddc(u_stack6, local_1a, local_16[0], local_1a, uStack14, param_7, param_8, param_5);
        }
        if(uStack14 == 0x0)
            break;
    }
    if(param_4 != 0x0)
    {
        fn_ptr_1020_ba7e(param_4);
        fn_ptr_1000_17ce((Struct18 *)param_4, SEG_1000);
    }
}


Struct18 * pass1_1038_1c02(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void pass1_1038_0340(Globals *globals,
                     u16      param_1,
                     u16      param_2,
                     i16      param_3,
                     u32      param_4,
                     u16      param_5,
                     u16      param_6,
                     u8       param_7)

{
    u16        uVar1;
    u32        u_var2;
    i16        iVar3;
    u16        uVar4;
    u8         local_13a[0x11c];
    u32 uStack30;
    u32        uStack26;
    u32        uStack22;
    u16        local_12;
    u16        uStack16;
    i16        local_e;
    u16        uStack12;
    u32 uStack10;
    u32        u_stack6;

    u_stack6  = *globals->_PTR_LOOP_1050_65e2;
    uStack10 = 0x0;
    uStack12 = 0x0;
    iVar3    = param_4;
    uVar4    = (param_4 >> 0x10);
    pass1_1038_4cea(param_4, str_var1(param_6, &local_12), str_var1(param_6, &local_e));
    u_var2    = *(iVar3 + 0x1f6);
    uStack22 = u_var2;
    pass1_1030_38b8();
    uVar1    = u_var2;
    uStack26 = u_var2 & 0xffff | param_5 << 0x10;
    if(param_3 == 0x0)
    {
        if(local_e != 0x8)
        {
            uStack10 = (long)(u_var2 & 0xffff | param_5 << 0x10) / 0x4;
            uStack12 = 0x8;
            goto LAB_1038_054b;
        }
    }
    else
    {
        if(param_3 < 0xb)
        {
            if(local_e != 0x7)
            {
                uStack10 = (long)(u_var2 & 0xffff | param_5 << 0x10) / 0xa;
                uStack12 = 0x7;
                goto LAB_1038_054b;
            }
        }
        else
        {
            if(param_3 < 0x1a)
            {
                if(local_e != 0x6)
                {
                    uStack10 = (long)(u_var2 & 0xffff | param_5 << 0x10) / 0x14;
                    uStack12 = 0x6;
                    goto LAB_1038_054b;
                }
            }
            else
            {
                if(param_3 < 0x33)
                {
                    if(local_e != 0x5)
                    {
                        uStack10 = (long)(u_var2 & 0xffff | param_5 << 0x10) / 0x64;
                        uStack12 = 0x5;
                        goto LAB_1038_054b;
                    }
                }
                else
                {
                    if(param_3 < 0x4c)
                    {
                        if(u_stack6 % 0x3 != 0x0)
                            goto LAB_1038_054b;
                        if(local_e != 0x4)
                        {
                            uStack10 = (long)uStack26 / 0x64;
                            uStack12 = 0x4;
                            goto LAB_1038_054b;
                        }
                    }
                    else
                    {
                        if(param_3 < 0x65)
                        {
                            if(u_stack6 % 0x5 != 0x0)
                                goto LAB_1038_054b;
                            if(local_e != 0x3)
                            {
                                uStack10 = (long)uStack26 / 0x64;
                                uStack12 = 0x3;
                                goto LAB_1038_054b;
                            }
                        }
                        else
                        {
                            if(param_3 < 0x97)
                            {
                                if(u_stack6 % 0xa != 0x0)
                                    goto LAB_1038_054b;
                                if(local_e != 0x2)
                                {
                                    uStack10 = (long)uStack26 / 0x64;
                                    uStack12 = 0x2;
                                    goto LAB_1038_054b;
                                }
                            }
                            else
                            {
                                if((0xc8 < param_3) || (u_stack6 % 0x14 != 0x0))
                                    goto LAB_1038_054b;
                                if(local_e != 0x1)
                                {
                                    uStack10 = (long)uStack26 / 0x64;
                                    uStack12 = 0x1;
                                    goto LAB_1038_054b;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if((uStack16 <= param_5) && ((uStack16 < param_5 || (local_12 < uVar1))))
    {
        uVar1   = local_12;
        param_5 = uStack16;
    }
    uStack10 = str_var1(param_5, uVar1);
LAB_1038_054b:
    if(uStack12 != 0x0)
    {
        if((uStack26 != 0x0) && (uStack10 == 0x0))
        {
            uStack10 = 0x1;
        }
        pass1_1038_4cd0(param_4, uStack10, uStack12);
    }
    if((uStack10 | uStack10) != 0x0)
    {
        if((iVar3 + 0x200) == 0x8000001)
        {
            uStack30 = 0x2;
        }
        else
        {
            uStack30 = 0x1;
        }
        uStack30 = str_var1(0x400, uStack30);
        pass1_1028_9944((Struct100 *)str_var1(param_6, local_13a), uStack10,
                        str_var1(0x400, uStack30), *(iVar3 + 0x4), param_6, param_7);
        fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_6, local_13a));
        pass1_1028_9992(str_var1(param_6, local_13a));
    }
}


void pass1_1038_05d8(Globals *globals,
                     u16      param_1,
                     u16      param_2,
                     i16      param_3,
                     u32      param_4,
                     u32      param_5,
                     u16      param_6,
                     u8       param_7)

{
    u16       *puVar1;
    u32        u_var2;
    u16        uVar3;
    u16        uVar4;
    u16        uVar5;
    u8         local_158[0x118];
    u32        u_stack64;
    u16        local_34;
    u16        uStack50;
    u32 uStack34;
    u32 uStack30;
    u32        uStack26;
    u32 uStack22;
    u32 local_12;
    i16        local_e;
    u16        uStack12;
    u32 uStack10;
    u32        u_stack6;

    u_stack6  = *globals->_PTR_LOOP_1050_65e2;
    uStack10 = 0x0;
    uStack12 = 0x0;
    pass1_1038_4cea(param_4, str_var1(param_6, &local_12), str_var1(param_6, &local_e));
    uStack22 = 0x0;
    uStack26 = 0x0;
    uStack30 = 0x0;
    pass1_1028_dc52((Struct92 *)CONCAT13((param_6 >> 0x8), CONCAT12(param_6, &local_34)), 0x1, 0x0, 0x400);
    do
    {
        do
        {
            uVar3  = param_5;
            puVar1 = &local_34;
            pass1_1028_e4ec(str_var1(param_6, puVar1));
            uStack34 = str_var1(uVar3, puVar1);
            uVar4    = uVar3 | puVar1;
            param_5  = uVar4;
            if(uVar4 == 0x0)
                goto LAB_1038_0668;
        } while((puVar1 + 0x100) != 0x8000002);
        uStack22 = str_var1(uVar3, puVar1);
        u_var2    = *(puVar1 + 0xfb);
        uStack26 = u_var2;
        pass1_1030_38b8();
        uStack30 = u_var2 & 0xffff | uVar4 << 0x10;
        uVar4    = uVar4 | u_var2;
        param_5  = uVar4;
    } while(uVar4 == 0x0);
LAB_1038_0668:
    local_34 = addr_table_1008_380a[36]; // 0x389a
    uStack50 = SEG_1008;
    if((uStack22 | uStack22) == 0x0)
    {
        return;
    }
    if(param_3 == 0x3e8)
    {
        if(local_e != 0x10)
        {
            uStack10 = (long)uStack30 / 0x4;
            uStack12 = 0x10;
            goto LAB_1038_0841;
        }
    }
    else
    {
        if(param_3 < 0x3de)
        {
            if(param_3 < 0x3cf)
            {
                if(param_3 < 0x3b6)
                {
                    if(param_3 < 0x39d)
                    {
                        if(param_3 < 0x384)
                        {
                            if(param_3 < 0x352)
                            {
                                if((param_3 < 0x320) || (u_stack6 % 0x14 != 0x0))
                                    goto LAB_1038_0841;
                                if(local_e != 0x9)
                                {
                                    uStack10 = (long)uStack30 / 0x64;
                                    uStack12 = 0x9;
                                    goto LAB_1038_0841;
                                }
                            }
                            else
                            {
                                if(u_stack6 % 0xa != 0x0)
                                    goto LAB_1038_0841;
                                if(local_e != 0xa)
                                {
                                    uStack10 = (long)uStack30 / 0x64;
                                    uStack12 = 0xa;
                                    goto LAB_1038_0841;
                                }
                            }
                        }
                        else
                        {
                            if(u_stack6 % 0x5 != 0x0)
                                goto LAB_1038_0841;
                            if(local_e != 0xb)
                            {
                                uStack10 = (long)uStack30 / 0x64;
                                uStack12 = 0xb;
                                goto LAB_1038_0841;
                            }
                        }
                    }
                    else
                    {
                        if(u_stack6 % 0x3 != 0x0)
                            goto LAB_1038_0841;
                        if(local_e != 0xc)
                        {
                            uStack10 = (long)uStack30 / 0x64;
                            uStack12 = 0xc;
                            goto LAB_1038_0841;
                        }
                    }
                }
                else
                {
                    if(local_e != 0xd)
                    {
                        uStack10 = (long)uStack30 / 0x64;
                        uStack12 = 0xd;
                        goto LAB_1038_0841;
                    }
                }
            }
            else
            {
                if(local_e != 0xe)
                {
                    uStack10 = (long)uStack30 / 0x14;
                    uStack12 = 0xe;
                    goto LAB_1038_0841;
                }
            }
        }
        else
        {
            if(local_e != 0xf)
            {
                uStack10 = (long)uStack30 / 0xa;
                uStack12 = 0xf;
                goto LAB_1038_0841;
            }
        }
    }
    u_var2 = uStack30;
    if((long)local_12 < (long)uStack30)
    {
        u_var2          = local_12 & 0xffff;
        uStack30 = local_12;
    }
    uStack10 = u_var2 & 0xffff | uStack30 << 0x10;
LAB_1038_0841:
    if(uStack12 != 0x0)
    {
        if((uStack30 != 0x0) && (uStack10 == 0x0))
        {
            uStack10 = 0x1;
        }
        pass1_1038_4cd0(param_4, uStack10, uStack12);
    }
    if((uStack10 | uStack10) != 0x0)
    {
        uVar5 = (param_4 >> 0x10);
        if((param_4 + 0x200) == 0x8000001)
        {
            u_stack64 = *(uStack22 + 0x4);
        }
        else
        {
            u_stack64 = 0x4000001;
        }
        pass1_1028_9944((Struct100 *)str_var1(param_6, local_158), uStack10, *(param_4 + 0x4), u_stack64, param_6, param_7);
        fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_6, local_158));
        pass1_1028_9992(str_var1(param_6, local_158));
    }
}


Struct18 * pass1_1038_0b6a(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_e010(Struct18 *param_1, u8 param_2)

{
    u16 in_AX;

    pass1_1030_dcf4(&param_1->field_0x0, in_AX);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_e282(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_e4be(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_e602(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_e75e(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_e864(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16 pass1_1030_e8f8(Globals *globals,
                    u32      param_1,
                    u16      param_2,
                    u16      param_3,
                    u16      param_4,
                    u16      param_5,
                    u16      param_6)

{
    u16         uVar1;
    u16         u_var2;
    u32  uVar3;
    i16         iVar4;
    u16         uVar5;
    u32         uVar6;
    Struct18 *paStack20;
    u32         u_stack6;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x108) != 0x0)
    {
        uVar3 = (iVar4 + 0x10c);
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar3, (uVar3 >> 0x10));
        u_stack6 = str_var1(param_3, param_2);
        uVar6   = struct_op_1030_73a8(str_var1(param_3, param_2));
        if((uVar6 + 0xc) == (iVar4 + 0x110))
        {
            pass1_1030_ea50(param_1, u_stack6, param_4, param_5, param_6);
        }
        uVar1     = (iVar4 + 0x108);
        u_var2     = (iVar4 + 0x10a);
        paStack20 = (Struct18 *)str_var1(u_var2, uVar1);
        if((u_var2 | uVar1) != 0x0)
        {
            fn_ptr_1020_ba7e(str_var1(u_var2, uVar1));
            fn_ptr_1000_17ce(paStack20, SEG_1000);
        }
        (iVar4 + 0x108) = 0x0;
    }
    return 0x1;
}


Struct18 * pass1_1030_eb14(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_ec86(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_d868(Struct18 *param_1, u8 param_2)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_dc08(Struct18 *param_1, u8 param_2)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_bbe6(Struct18 *param_1, u8 param_2)

{
    pass1_1030_b96c(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_bc70(Struct18 *param_1, u8 param_2)

{
    pass1_1030_bc4e(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_bfe0(Struct18 *param_1, u8 param_2)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_c668(Struct18 *param_1, u8 param_2)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_c91a(Struct18 *param_1, u8 param_2)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_b90c(Struct18 *param_1, u8 param_2)

{
    pass1_1030_afa6(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1030_b96c(u16 *param_1)

{
    u16         uVar1;
    Struct18 *p_var2;
    i16         iVar3;
    u16         uVar4;

    uVar4         = (param_1 >> 0x10);
    iVar3         = param_1;
    param_1->field_0x0 = addr_table_1030_bc0c;// 0xbc0c;
    (iVar3 + 0x2) = SEG_1030;
    p_var2        = (iVar3 + 0xe);
    uVar1         = (iVar3 + 0x10);
    if((uVar1 | p_var2) != 0x0)
    {
        fn_ptr_1020_ba7e((p_var2 & 0xffff | uVar1 << 0x10));
        fn_ptr_1000_17ce(p_var2, SEG_1000);
    }
    pass1_1028_b260(param_1);
}


void pass1_1030_bb0e(Globals *globals,
                     u32      param_1,
                     u32      param_2,
                     u16      param_3,
                     u16      param_4,
                     u16      param_5,
                     u16      param_6)

{
    Struct18 *paVar1;
    u32         u_var2;
    u16         uVar3;
    u32         uVar4;
    u16         in_DX;
    u8         *puVar5;
    u32         uVar6;
    u16         uStack8;

    uVar3 = pass1_1030_7bee(param_2);
    uVar4 = uVar3;
    if(uVar3 != 0x0)
    {
        return;
    }
    pass1_1030_b9b2(param_1);
    u_var2  = uVar4 & 0xffff;
    paVar1 = (Struct18 *)(u_var2 | in_DX << 0x10);
    puVar5 = (in_DX | uVar4);
    if(puVar5 != 0x0)
    {
        for(uStack8 = 0x4; uStack8 < 0x25; uStack8 = uStack8 + 0x1)
        {
            uVar6  = pass1_1020_bae6(u_var2, str_var1(uStack8, in_DX), uVar4, puVar5, param_6);
            uVar4  = uVar6 & 0xffff;
            puVar5 = ((uVar6 >> 0x10) | uVar4);
            if(puVar5 != 0x0)
            {
                pass1_1030_7ddc(param_2, uVar6, uStack8, uVar4, puVar5, param_4, param_5, param_6);
                uVar3 = pass1_1030_7bee(param_2);
                uVar4 = uVar3;
                if(uVar3 != 0x0)
                {
                    return;
                }
                string_1020_c0ca(uStack8);
                vsprintf_op_1030_840a(globals->s_truck_0x_08lx_unloaded__ld_of__s_1050_5798, SEG_1020, param_6, puVar5);
                pass1_1020_bb8a((long *)paVar1, 0x0, uStack8 << 0x10, param_5, param_6);
            }
        }
        if(paVar1 != (Struct18 *)0x0)
        {
            fn_ptr_1020_ba7e(paVar1);
            fn_ptr_1000_17ce(paVar1, SEG_1000);
        }
    }
}


void pass1_1030_9f7a(Globals *globals, u16 *param_1, u16 param_2, u16 param_3, u8 param_4)

{
    u32 uVar1;
    BOOL16     BVar2;
    u32       *puVar3;
    u16        extraout_DX;
    u16        uVar4;
    u16        uVar5;
    u8         local_130[0x120];
    u32        uStack16;
    u32        uStack12;
    u32        local_8;
    i16        iStack4;

    pass1_1008_3e38(str_var1(param_3, &local_8));
    BVar2 = pass1_1008_c6ae(globals->_PTR_LOOP_1050_06e0, param_2, 0x28);
    if(BVar2 != 0x0)
    {
        iStack4 = 0x1;
    }
    puVar3 = &local_8;
    pass1_1030_a278(NULL, param_1, str_var1(param_3, puVar3), puVar3, param_3, param_4);
    if(puVar3 != 0x0)
    {
        uVar5    = (param_1 >> 0x10);
        uVar4    = param_1;
        uVar1    = (uVar4 + 0x4);
        uStack12 = *(uVar1 + 0x8);
        uVar1    = (uVar4 + 0x4);
        struct_op_1028_87f0(param_3, param_4, (Struct97 *)str_var1(param_3, local_130), 0x0, 0x0, param_2, &local_8, param_3, *(uVar1 + 0x4), uStack12);
        fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_3, local_130));
        pass1_1028_b58e(uStack16);
        param_1->field_0x0 = uStack16;
        (uVar4 + 0x2) = extraout_DX;
        if(0x0 < iStack4)
        {
            pass1_1030_a044(NULL,
                            param_3,
                            extraout_DX,
                            param_4,
                            uVar4,
                            uVar5,
                            str_var1(param_3, &local_8),
                            uStack12);
        }
    }
}


void pass1_1030_a044(Globals *globals,
                     u16      param_1,
                     u16      param_2,
                     u8       param_3,
                     u16      param_4,
                     u16      param_5,
                     u16     *param_6,
                     u32      param_7)

{
    void **ppcVar1;
    u16        *pu_var2;
    u8         *puVar3;
    i16         iVar4;
    u32  uVar5;
    u16         uVar6;
    u16         extraout_DX;
    u16         uVar7;
    u32 *puVar8;
    u16         uVar9;
    u16         uVar10;
    u16         uVar11;
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
    pass1_1008_3eb4(param_6,
                    str_var1(param_1, pu_var2),
                    str_var1(param_1, &local_6),
                    str_var1(param_1, &local_4));
    pass1_1030_627e(param_1, pu_var2, param_2, globals->_PTR_LOOP_1050_5740, param_6, param_7);
    puStack20 = pu_var2;
    uStack18  = param_2;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, pu_var2, param_2);
    uStack24 = str_var1(param_2, pu_var2);
    uStack28 = (pu_var2 + 0x17);
    uVar5    = (uStack28 + 0x4);
    uStack32 = uVar5;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_7, (param_7 >> 0x10));
    iStack40  = uVar5;
    uStack38  = param_2;
    puVar8    = pass1_1030_5b5c(iStack40, param_2);
    uVar6     = (puVar8 >> 0x10);
    local_2e  = *puVar8;
    uStack42  = (puVar8 + 0x4);
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
    uVar7 = SEG_1008;
    pass1_1008_6cec(str_var1(param_1, local_3a), local_8,
                    str_var1(iStack14, iStack16), local_8, uStack12);
    puVar3 = local_3a;
    pass1_1030_6522(globals->_PTR_LOOP_1050_5740, str_var1(param_1, puVar3), param_7, param_1);
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
                (**ppcVar1)(uVar7, pu_stack62, (pu_stack62 >> 0x10));
                u_stack66       = str_var1(extraout_DX, iVar4);
                u_stack66._3_1_ = (extraout_DX >> 0x8);
                if(u_stack66._3_1_ == '\0')
                {
                    iStack90 = iVar4;
                    if(iVar4 == 0x7)
                    {
                        pass1_1008_3e76(param_6, local_8, uStack70, puStack78);
                        uVar10 = uStack32;
                        uVar11 = (uStack32 >> 0x10);
                        uVar9  = 0x6;
                    }
                    else
                    {
                        if(iVar4 == 0x8)
                        {
                            pass1_1008_3e76(param_6, local_8, uStack70, puStack78);
                            uVar10 = uStack32;
                            uVar11 = (uStack32 >> 0x10);
                            uVar9  = 0x7;
                        }
                        else
                        {
                            if(iVar4 != 0x9)
                                goto LAB_1030_a1d0;
                            pass1_1008_3e76(param_6, local_8, uStack70, puStack78);
                            uVar10 = uStack32;
                            uVar11 = (uStack32 >> 0x10);
                            uVar9  = 0x8;
                        }
                    }
                    uVar7 = SUB42(&globals->USHORT_1050_1028, 0x0);
                    struct_op_1028_87f0(param_1, param_3, (Struct97 *)str_var1(param_1, &local_17e), 0x0, 0x0, uVar9, param_6, (param_6 >> 0x10),
                                        str_var1(uVar11, uVar10), param_7);
                    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748,
                                     str_var1(param_1, &local_17e));
                    local_17e = addr_table_1008_380a[36]; // 0x389a
                    uStack380 = SEG_1008;
                }
            LAB_1030_a1d0:
            }
        }
    }
}


void pass1_1030_a278(Globals *globals,
                     u16     *param_1,
                     u16     *param_2,
                     u16      param_3,
                     u16      param_4,
                     u8       param_5)

{
    i16        iVar1;
    u32 u_var2;
    i16        in_DX;
    u16        extraout_DX;
    u32       *puVar3;
    u16        uVar4;
    u16        uVar5;
    u16        uVar6;
    u8         local_134[0x120];
    u32        uStack20;
    u32        uStack16;
    u32        uStack12;
    u16        u_stack6;
    u16        uStack4;

    uStack4 = 0x1;
    pass1_1030_a39a(param_1, param_2, param_4);
    if(param_3 != 0x0)
    {
        return;
    }
    u_stack6 = param_3;
    pass1_1030_a3ae(param_1, param_2, param_4);
    puVar3 = param_2;
    uVar5  = (param_2 >> 0x10);
    if(param_3 == 0x0)
    {
        pass1_1030_a57e(param_1, param_2, 0x0, in_DX, param_4);
        if(param_3 == 0x0)
        {
            pass1_1030_a844(param_1, param_2, 0x0, in_DX, param_4, NULL);
            if(param_3 == 0x0)
            {
                uStack4 = 0x0;
                goto LAB_1030_a305;
            }
            iVar1 = (puVar3 + 0x1);
        }
        else
        {
            iVar1 = (puVar3 + 0x1);
        }
        if(iVar1 < 0x1)
        {
            u_stack6 = 0x73;
        }
        else
        {
            u_stack6 = 0x77;
        }
    }
    else
    {
        if((puVar3 + 0x1) < 0x1)
        {
            u_stack6 = 0x7a;
        }
        else
        {
            u_stack6 = 0x7f;
        }
    }
LAB_1030_a305:
    if(u_stack6 != 0x0)
    {
        uVar6    = (param_1 >> 0x10);
        uVar4    = param_1;
        u_var2    = (uVar4 + 0x4);
        uStack16 = *(u_var2 + 0x8);
        u_var2    = (uVar4 + 0x4);
        struct_op_1028_87f0(param_4, param_5, (Struct97 *)str_var1(param_4, local_134), 0x0, 0x0, u_stack6, puVar3, uVar5, *(u_var2 + 0x4), uStack16);
        fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_4, local_134));
        uStack12 = uStack20;
        pass1_1028_b58e(uStack20);
        param_1->field_0x0 = uStack20;
        (uVar4 + 0x2) = extraout_DX;
        if(0x0 < (puVar3 + 0x1))
        {
            pass1_1030_a044(NULL,
                            param_4,
                            extraout_DX,
                            param_5,
                            uVar4,
                            uVar6,
                            (param_2 & 0xffff | uVar5 << 0x10),
                            uStack16);
        }
    }
}


void pass1_1030_a844(Struct426 *param_1,
                     u16     *param_2,
                     i16      param_3,
                     i16      param_4,
                     u16      param_5,
                     Globals *globals)

{
    i16          iVar1;
    u32   u_var2;
    void **ppcVar3;
    u16          uVar4;
    u16          uVar5;
    i16         *piVar6;
    u32  *puVar7;
    u16          extraout_DX;
    u16          uVar9;
    u16          uVar10;
//    Struct426 *uVar8;
    Struct427 *iVar8;
    i16          iVar11;
    u16          uVar12;
    u16          uVar13;
    u16         *puVar14;
    u32          uVar15;
    u32          uStack34;
    i16          local_1c;
    i16          local_1a;
    i16          local_18;
    i16          local_16;
    i16          iStack20;
    u16          uStack16;
    long         lStack14;
    u32          uStack10;
    u32  *pu_stack6;

//    uVar12 = (param_1 >> 0x10);
//    uVar8  = (Struct426 *)param_1;
    pass1_1038_53ba(param_1->field_0x4, 0x1);
    if((param_4 != 0x0) || (param_3 != 0x0))
    {
        uVar15   = param_1->field_0x4;
        uVar13   = (uVar15 >> 0x10);
        iVar8    = (Struct427 *)uVar15;
        puVar7   = iVar8->field_0xc;
        ppcVar3  = (*puVar7 + 0x10);
        pu_stack6 = puVar7;
        (**ppcVar3)(SEG_1038, puVar7, (&iVar8->field_0xc + 0x2));
        uStack10 = puVar7 & 0xffff | extraout_DX << 0x10;
        uVar15   = param_1->field_0x4;
        lStack14 = (uVar15 + 0x8);
        uStack16 = 0x0;
        puVar14  = pass1_1008_3e38(str_var1(param_5, &local_16));
        uVar9    = (puVar14 >> 0x10);
        iVar1    = (param_2 + 0x4);
        for(uStack34 = 0x0; uStack34 < uStack10; uStack34 = uStack34 + 0x1)
        {
            uVar15 = pass1_1030_1d7c(uStack10, uVar9, pu_stack6);
            uVar4  = (uVar15 >> 0x10);
            uVar10 = uVar4 | uVar15;
            uVar9  = uVar10;
            if((uVar10 != 0x0) && (uVar4 = pass1_1008_c6ae(globals->_PTR_LOOP_1050_06e0, (uVar15 + 0xc), 0x46), uVar9 = uVar10, uVar4 != 0x0))
            {
                pass1_1030_1d58(pu_stack6);
                uVar9 = uVar10 | uVar4;
                if((uVar10 | uVar4) != 0x0)
                {
                    pass1_1008_3f62(str_var1(param_5, &local_16),
                                    str_var1(uVar10, uVar4 + 0xc));
                    pass1_1008_3eb4(str_var1(param_5, &local_16),
                                    str_var1(param_5, &local_1c),
                                    str_var1(param_5, &local_1a),
                                    str_var1(param_5, &local_18));
                    uVar9 = uVar10;
                    if((iVar1 == local_1c)
                       && (uVar15 = param_1->field_0x4,
                           uVar13 = (uVar15 >> 0x10),
                           iVar11 = uVar15,
                           u_var2  = (iVar11 + 0x4),
                           uVar5  = pass1_1030_addc(param_1, uVar12,
                                                   str_var1(param_5, &local_16), u_var2, (u_var2 >> 0x10), *(iVar11 + 0x8), &local_16, uVar10, param_5),
                           uVar9  = uVar10,
                           uVar5 != 0x0))
                    {
                        iStack20 = local_1a + -0x1;
                        piVar6   = &local_16;
                        pass1_1030_ad86(param_1, uVar12,
                                        str_var1(param_5, piVar6), lStack14, param_5, uVar10);
                        if(piVar6 != 0x0)
                        {
                        LAB_1030_a98e:
                            pass1_1008_3f62(param_2, str_var1(param_5, &local_16));
                            return;
                        }
                        iStack20 = local_1a + 0x1;
                        piVar6   = &local_16;
                        pass1_1030_ad86(param_1, uVar12,
                                        str_var1(param_5, piVar6), lStack14, param_5, uVar10);
                        if(piVar6 != 0x0)
                            goto LAB_1030_a98e;
                        iStack20 = local_1a;
                        local_16 = local_18 + -0x1;
                        piVar6   = &local_16;
                        pass1_1030_ad86(param_1, uVar12,
                                        str_var1(param_5, piVar6), lStack14, param_5, uVar10);
                        if(piVar6 != 0x0)
                            goto LAB_1030_a98e;
                        local_16 = local_18 + 0x1;
                        piVar6   = &local_16;
                        pass1_1030_ad86(param_1, uVar12,
                                        str_var1(param_5, piVar6), lStack14, param_5, uVar10);
                        uVar9 = uVar10;
                        if(piVar6 != 0x0)
                            goto LAB_1030_a98e;
                    }
                }
            }
        }
    }
}


void  pass1_1030_aa18(u32 param_1, u16 *param_2, u16 param_3)

{
    u32         uVar1;
    void **ppcVar2;
    u32  uVar3;
    u16         uVar4;
    BOOL16      BVar5;
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
    u32         uStack38;
    u8          local_1a[0x2];
    i16         local_18;
    i16         local_16;
    i16         local_14;
    i16         iStack18;
    u32  uStack14;
    u16         uStack10;
    u8         *puStack8;
    i16         iStack6;
    i16         iStack4;

    iStack4  = (param_2 + 0x4);
    iStack6  = 0x8 - (iStack4 == 0x0);
    puVar18  = pass1_1008_c6fa(globals->dat_1050_06e0, iStack6);
    puVar7   = (puVar18 >> 0x10);
    uVar8    = puVar18;
    uVar14   = (param_1 >> 0x10);
    uVar10   = param_1;
    uStack10 = uVar8;
    puStack8 = puVar7;
    pass1_1038_4e78(uVar8, puVar7, *(uVar10 + 0x4), puVar18);
    uStack14 = str_var1(puVar7, uVar8);
    uVar17   = SEG_1008;
    pass1_1008_3e38(str_var1(param_3, &local_14));
    uVar3   = (uVar10 + 0x4);
    uVar1   = *(uVar3 + 0x8);
    uVar15  = (uStack14 >> 0x10);
    uVar11  = SUB42(uStack14, 0x0);
    ppcVar2 = (*uStack14 + 0x10);
    uVar6   = uVar1;
    (**ppcVar2)(SEG_1008, uVar11, uVar15);
    uVar6    = uVar6 & 0xffff | extraout_DX << 0x10;
    uStack38 = 0x0;
    uVar8    = extraout_DX;
    while(true)
    {
        if(uVar6 <= uStack38)
        {
            if(uStack14 != 0x0)
            {
                ppcVar2 = *uStack14;
                (**ppcVar2)(uVar17, uStack14, (uStack14 >> 0x10), 0x1, uVar11, uVar15, uStack14, uStack14);
            }
            return;
        }
        uVar19 = uVar6;
        pass1_1030_1d58(uStack14);
        uVar9 = uVar8 | uVar19;
        if(uVar9 != 0x0)
            break;
    LAB_1030_aadc:
        uStack38 = uStack38 + 0x1;
        uVar8    = uVar9;
    }
    uVar9 = uVar8;
    pass1_1008_3f62(str_var1(param_3, &local_14), str_var1(uVar8, uVar19 + 0xc));
    uVar17 = SEG_1008;
    pass1_1008_3eb4(str_var1(param_3, &local_14),
                    str_var1(param_3, local_1a),
                    str_var1(param_3, &local_18),
                    str_var1(param_3, &local_16));
    uVar3  = (uVar10 + 0x4);
    uVar16 = (uVar3 >> 0x10);
    iVar12 = uVar3;
    uVar3  = (iVar12 + 0x4);
    uVar4  = pass1_1030_addc(uVar10, uVar14,
                            str_var1(param_3, &local_14), uVar3, (uVar3 >> 0x10), *(iVar12 + 0x8), &local_14, uVar9, param_3);
    if(uVar4 == 0x0)
        goto LAB_1030_aadc;
    uVar19 = struct_op_1030_73a8(uVar19 & 0xffff | uVar8 << 0x10);
    uVar9  = (uVar19 >> 0x10);
    iVar12 = (uVar19 + 0xc);
    if(0x5 < iVar12 - 0x7aU)
        goto LAB_1030_aadc;
    uVar17 = SEG_1030;
    switch(iVar12)
    {
    default:
        iStack18 = local_18 + -0x1;
        BVar5    = pass1_1030_acbe(uVar10, uVar14, str_var1(param_3, &local_14), uVar1, &local_14, uVar9, param_3);
        if(BVar5 != 0x0)
            goto LAB_1030_ac5b;
        iStack18 = local_18 + 0x1;
        BVar5    = pass1_1030_acbe(uVar10, uVar14, str_var1(param_3, &local_14), uVar1, &local_14, uVar9, param_3);
        if(BVar5 == 0x0)
        {
            iStack18 = local_18;
            local_14 = local_16 + -0x1;
            BVar5    = pass1_1030_acbe(uVar10, uVar14,
                                    str_var1(param_3, &local_14), uVar1, &local_14, uVar9, param_3);
            goto joined_r0x1030ab9e;
        }
    LAB_1030_abc4:
        pass1_1008_3f62(param_2, str_var1(param_3, &local_14));
        break;
    case 0x7b:
    case 0x7e:
        iStack18 = local_18 + -0x1;
        BVar5    = pass1_1030_acbe(uVar10, uVar14, str_var1(param_3, &local_14), uVar1, &local_14, uVar9, param_3);
        if(BVar5 == 0x0)
        {
            iStack18 = local_18 + 0x1;
            goto LAB_1030_abac;
        }
        pass1_1008_3f62(param_2, str_var1(param_3, &local_14));
        if(uStack14 == 0x0)
        {
            return;
        }
        uVar17  = (uStack14 >> 0x10);
        puVar13 = uStack14;
        u_var20  = (uStack14 >> 0x10);
        goto LAB_1030_ab66;
    case 0x7c:
    case 0x7d:
        local_14 = local_16 + -0x1;
        BVar5    = pass1_1030_acbe(uVar10, uVar14, str_var1(param_3, &local_14), uVar1, &local_14, uVar9, param_3);
    joined_r0x1030ab9e:
        if(BVar5 == 0x0)
        {
            local_14 = local_16 + 0x1;
        LAB_1030_abac:
            BVar5 = pass1_1030_acbe(uVar10, uVar14,
                                    str_var1(param_3, &local_14), uVar1, &local_14, uVar9, param_3);
            if(BVar5 != 0x0)
                goto LAB_1030_abc4;
            goto LAB_1030_aadc;
        }
    LAB_1030_ac5b:
        pass1_1008_3f62(param_2, str_var1(param_3, &local_14));
    }
    puVar13 = uStack14;
    if((uStack14 | puVar13) != 0x0)
    {
        uVar17 = (uStack14 >> 0x10);
        u_var20 = (uStack14 >> 0x10);
    LAB_1030_ab66:
        ppcVar2 = *puVar13;
        (**ppcVar2)(SEG_1008, puVar13, u_var20, 0x1, uVar11, uVar15, uStack14, uStack14);
    }
    return;
}
