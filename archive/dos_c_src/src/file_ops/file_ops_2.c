#include "file_ops_2.h"

#include "draw_ops/draw_ops_3.h"
#include "file_ops_1.h"
#include "file_ops_3.h"
#include "fn_ptr_ops/fn_ptr_ops_6.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "string_ops.h"
#include "struct_ops/struct_ops_1.h"
#include "struct_ops/struct_ops_3.h"
#include "struct_ops/struct_ops_5.h"
#include "structs/structs_3xx/struct_371.h"
#include "sys_ops/sys_ops_12.h"
#include "sys_ops/sys_ops_3.h"
#include "sys_ops/sys_ops_6.h"
#include "sys_ops/sys_ops_9.h"
#include "ui_ops/ui_ops_6.h"
#include "unk/unk_10.h"
#include "unk/unk_12.h"
#include "unk/unk_14.h"
#include "unk/unk_18.h"
#include "unk/unk_3.h"
#include "unk/unk_6.h"
#include "utils.h"

void  pass1_1030_227a(u32 param_1, u32 param_2, u16 param_3, u16 param_4)

{
    u16    uVar1;
    i16    iVar2;
    BOOL16 BVar3;
    u16    uVar4;
    u16    uVar5;

    uVar1 = pass1_1030_1978(param_1, param_2, param_3, param_4);
    if(uVar1 != 0x0)
    {
        iVar2 = param_1;
        uVar1 = (param_1 >> 0x10);
        uVar4 = param_2;
        uVar5 = (param_2 >> 0x10);
        BVar3 = write_to_file_1008_7e1c(uVar4, uVar5, iVar2 + 0x10, uVar1, 0x106, SEG_1008);
        if(BVar3 != 0x0)
        {
            BVar3 = write_to_file_1008_7e1c(uVar4, uVar5, iVar2 + 0x116, uVar1, 0x86, SEG_1008);
            if(BVar3 != 0x0)
            {
                BVar3 = write_to_file_1008_7e1c(uVar4, uVar5, iVar2 + 0x19c, uVar1, 0xa, SEG_1008);
                if(BVar3 != 0x0)
                {
                    BVar3 = write_to_file_1008_7e1c(uVar4, uVar5, iVar2 + 0x1a6, uVar1, 0x106, SEG_1008);
                    if(BVar3 != 0x0)
                    {
                        BVar3 = write_to_file_1008_7e1c(uVar4, uVar5, iVar2 + 0x2ac, uVar1, 0x106, SEG_1008);
                        if(BVar3 != 0x0)
                        {
                            return;
                        }
                    }
                }
            }
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return;
}


void  pass1_1030_232e(u32 param_1, u32 param_2, i16 param_3, u16 param_4, u16 param_5)

{
    u16    uVar1;
    i16    iVar2;
    BOOL16 BVar3;
    u16    uVar4;
    u16    uVar5;

    file_1030_19b4(param_1, param_2, param_3, param_4, param_5);
    if(param_3 != 0x0)
    {
        iVar2 = param_1;
        uVar1 = (param_1 >> 0x10);
        uVar4 = param_2;
        uVar5 = (param_2 >> 0x10);
        BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0x10, 0x0, uVar1, 0x106, SEG_1008);
        if(BVar3 != 0x0)
        {
            BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0x116, 0x0, uVar1, 0x86, SEG_1008);
            if(BVar3 != 0x0)
            {
                BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0x19c, 0x0, uVar1, 0xa, SEG_1008);
                if(BVar3 != 0x0)
                {
                    BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0x1a6, 0x0, uVar1, 0x106, SEG_1008);
                    if(BVar3 != 0x0)
                    {
                        BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0x2ac, 0x0, uVar1, 0x106, SEG_1008);
                        if(BVar3 != 0x0)
                        {
                            return;
                        }
                    }
                }
            }
        }
        globals->dat_1050_0310 = 0x6d2;
    }
    return;
}


void  pass1_1030_2aca(Struct730 *param_1, u32 param_2, u16 param_3, u16 param_4)

{
    u32   uVar1;
    u16         *pu_var2;
    u16          uVar3;
    BOOL16       BVar4;
    i16          iVar5;
//    Struct730 *iVar6;
    u16          uVar6;
    u16          uVar7;
    u16          uVar8;
    u32   local_18[0x3];
    u16          local_c[0x3];
    u16          local_6[0x2];

    uVar3 = pass1_1030_1978(param_1, param_2, param_3, param_4);
    if(uVar3 == 0x0)
    {
        return;
    }
//    uVar6      = (param_1 >> 0x10);
//    iVar6      = (Struct730 *)param_1;
    local_c[0] = *param_1->field_0x10;
    uVar3      = param_2;
    uVar8      = (param_2 >> 0x10);
    BVar4      = write_to_file_1008_7e1c(uVar3, uVar8, local_c, param_4, 0x2, SEG_1008);
    if(((BVar4 != 0x0) && (pu_var2 = param_1->field_0x10, BVar4 = pass1_1008_7c2a(param_2, (pu_var2 + 0x2), SEG_1008), BVar4 != 0x0))
       && (pu_var2 = param_1->field_0x10, iVar5 = write_to_file_1008_7b4c(param_2, pu_var2 & 0xffff0000 | (pu_var2 + 0x6), SEG_1008, param_4), iVar5 != 0x0))
    {
        pu_var2     = param_1->field_0x10;
        local_6[0] = (pu_var2 + 0xc);
        BVar4      = write_to_file_1008_7e1c(uVar3, uVar8, local_6, param_4, 0x2, SEG_1008);
        if(BVar4 != 0x0)
        {
            pu_var2      = param_1->field_0x10;
            local_18[0] = (pu_var2 + 0xe);
            BVar4       = write_to_file_1008_7e1c(uVar3, uVar8, local_18, param_4, 0x4, SEG_1008);
            if((BVar4 != 0x0) && (pu_var2 = param_1->field_0x10, BVar4 = write_to_file_1008_7e1c(uVar3, uVar8, pu_var2 + 0x12, (pu_var2 >> 0x10), 0x10, SEG_1008), BVar4 != 0x0))
            {
                pu_var2     = iVar6->field_0x10;
                local_c[0] = (pu_var2 + 0x22);
                BVar4      = write_to_file_1008_7e1c(uVar3, uVar8, local_c, param_4, 0x2, SEG_1008);
                if((BVar4 != 0x0)
                   && ((
                     pu_var2 = iVar6->field_0x10,
                     (pu_var2 + 0x22) == 0x0
                       || (pu_var2 = iVar6->field_0x10, uVar7 = (pu_var2 >> 0x10), iVar5 = pu_var2, uVar1 = (iVar5 + 0x24), BVar4 = write_to_file_1008_7e1c(uVar3, uVar8, uVar1, (uVar1 >> 0x10), ((iVar5 + 0x22) * 0x2), SEG_1008), BVar4 != 0x0))))
                {
                    local_c[0] = iVar6->field_0x14;
                    BVar4      = write_to_file_1008_7e1c(uVar3, uVar8, local_c, param_4, 0x2, SEG_1008);
                    if(BVar4 != 0x0)
                    {
                        local_c[0] = iVar6->field_0x16;
                        BVar4      = write_to_file_1008_7e1c(uVar3, uVar8, local_c, param_4, 0x2, SEG_1008);
                        if(BVar4 != 0x0)
                        {
                            local_c[0] = iVar6->field_0x18;
                            BVar4      = write_to_file_1008_7e1c(uVar3, uVar8, local_c, param_4, 0x2, SEG_1008);
                            if(BVar4 != 0x0)
                            {
                                local_c[0] = iVar6->field_0x1a_addr_offset;
                                BVar4      = write_to_file_1008_7e1c(uVar3, uVar8, local_c, param_4, 0x2, SEG_1008);
                                if(BVar4 != 0x0)
                                {
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    globals->dat_1050_0310 = 0x6d0;
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass1_1030_2c8a(Globals   *globals,
                     Struct373 *param_1,
                     u32        param_2,
                     i16        param_3,
                     u8        *param_4,
                     u16        param_5)

{
    u32   uVar1;
    u16          u_var2;
    BOOL16       BVar3;
    u8          *puVar4;
    u16          uVar5;
    u8          *puVar6;
    Struct374 *iVar7;
    Struct371 *iVar8;
    Struct372 *iVar9;
    i16          unaff_DI;
    u16          uVar7;
    u16         *puVar8;
    u16          uVar9;
//    u16          uVar10;
    u16         *puStack1038;
    u16          local_406;
    u16          local_404;
    u8           local_402[0x400];
//    Struct373 *iVar14;

//    iVar14 = (Struct373 *)param_1;
//    uVar10 = (param_1 >> 0x10);
    file_1030_19b4(param_1, param_2, param_3, param_4, param_5);
    if(param_3 == 0x0)
    {
        return;
    }
    if(globals->_PTR_LOOP_1050_5f2c == 0x0)
    {
        globals->dat_1050_5f2c      = mem_op_1000_160a(param_4, SEG_1000);
        globals->dat_1050_5f2e      = param_4;
    }
    else
    {
    }
    u_var2       = fn_ptr_op_1000_1708(0x28, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
    puStack1038 = str_var1(globals->PTR_LOOP_1050_5f2e, u_var2);
    puVar6      = (globals->PTR_LOOP_1050_5f2e | u_var2);
    if(puVar6 == 0x0)
    {
        param_1->field_0x10 = 0x0;
    }
    else
    {
        puVar8             = pass1_1008_3e38(str_var1(globals->PTR_LOOP_1050_5f2e, u_var2 + 0x6));
        puVar6             = (puVar8 >> 0x10);
        param_1->field_0x10 = puStack1038;
    }
    puVar8 = param_1->field_0x10;
    u_var2  = param_2;
    uVar9  = (param_2 >> 0x10);
    BVar3  = read_file_1008_7dee(u_var2, uVar9, puVar8, 0x0, (puVar8 >> 0x10), 0x2, SEG_1008);
    if(BVar3 != 0x0)
    {
        puVar4 = local_402;
        read_file_1008_7c6e(u_var2, uVar9, str_var1(param_5, puVar4), SEG_1008);
        if(puVar4 != 0x0)
        {
            uVar5            = str_op_1008_60e8(str_var1(param_5, local_402), puVar6);
            puVar8           = param_1->field_0x10;
            uVar7            = (puVar8 >> 0x10);
            iVar7            = (Struct374 *)puVar8;
            iVar7->fld2_segment = uVar5;
            iVar7->field_0x4 = puVar6;
            puVar8           = param_1->field_0x10;
            BVar3            = read_file_1008_7bc8(param_2, (puVar8 & 0xffff0000 | (puVar8 + 0x6)), SEG_1008, param_5);
            if((((BVar3 != 0x0) && (puVar8 = param_1->field_0x10, BVar3 = read_file_1008_7dee(u_var2, uVar9, puVar8 + 0xc, 0x0, (puVar8 >> 0x10), 0x2, SEG_1008), BVar3 != 0x0))
                && (puVar8 = param_1->field_0x10, BVar3 = read_file_1008_7dee(u_var2, uVar9, puVar8 + 0xe, 0x0, (puVar8 >> 0x10), 0x4, SEG_1008), BVar3 != 0x0))
               && ((puVar8 = param_1->field_0x10,
                    BVar3  = read_file_1008_7dee(u_var2, uVar9, puVar8 + 0x12, 0x0, (puVar8 >> 0x10), 0x10, SEG_1008),
                    BVar3 != 0x0 && (puVar8 = param_1->field_0x10, BVar3 = read_file_1008_7dee(u_var2, uVar9, puVar8 + 0x22, 0x0, (puVar8 >> 0x10), 0x2, SEG_1008), BVar3 != 0x0))))
            {
                puVar8 = param_1->field_0x10;
                if((puVar8 + 0x22) != 0x0)
                {
                    puVar8   = param_1->field_0x10;
                    unaff_DI = (puVar8 >> 0x10);
                    iVar8    = (Struct371 *)puVar8;
                    uVar5 = iVar8->field_0x22 * 0x2;
                    mem_op_1000_179c(uVar5, puVar6, 0);
                    iVar8->field_0x24 = uVar5;
                    iVar8->field_0x26 = puVar6;
                    puVar8            = param_1->field_0x10;
                    uVar7             = (puVar8 >> 0x10);
                    iVar9             = (Struct372 *)puVar8;
                    uVar1             = iVar9->field_0x24;
                    BVar3             = read_file_1008_7dee(u_var2, uVar9, uVar1, 0x0, (uVar1 >> 0x10), iVar9->field_0x22 * 0x2, SEG_1008);
                    if(BVar3 == 0x0)
                    {
                        globals->dat_1050_0310 = 0x6d2;
                        return;
                    }
                }
                BVar3 = read_file_1008_7dee(u_var2, uVar9, &param_1->field_0x14, 0x0, uVar10, 0x2, SEG_1008);
                if(((BVar3 != 0x0) && (BVar3 = read_file_1008_7dee(u_var2, uVar9, &local_404, 0x0, param_5, 0x2, SEG_1008), BVar3 != 0x0))
                   && ((BVar3 = read_file_1008_7dee(u_var2, uVar9, &param_1->field_0x18, 0x0, uVar10, 0x2, SEG_1008), BVar3 != 0x0 && (BVar3 = read_file_1008_7dee(u_var2, uVar9, &local_406, 0x0, param_5, 0x2, SEG_1008), BVar3 != 0x0))))
                {
                    param_1->field_0x16 = local_404;
                    param_1->field_0x1a_addr_offset = local_406;
                    puVar8             = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_5, puVar6, unaff_DI);
                    pass1_1018_04a4(puVar8, param_1->field_0x4);
                    pass1_1010_82f8(globals->dat_1050_14cc, *param_1->field_0x10);
                    return;
                }
            }
        }
    }
    globals->dat_1050_0310 = 0x6d2;
}


void  pass1_1030_16d6(u32 param_1, u32 param_2, u16 param_3)

{
    BOOL16     BVar1;
    u16        u_var2;
    u16        uVar3;
    u32 local_10[0x2];
    u32 local_8;

    u_var2       = (param_1 >> 0x10);
    local_10[0] = (param_1 + 0x4);
    uVar3       = (param_2 >> 0x10);
    BVar1       = write_to_file_1008_7e1c(param_2, uVar3, local_10, param_3, 0x4, SEG_1008);
    if(BVar1 != 0x0)
    {
        local_8 = (param_1 + 0x8);
        BVar1   = write_to_file_1008_7e1c(param_2, uVar3, &local_8, param_3, 0x4, SEG_1008);
        if(BVar1 != 0x0)
        {
            return;
        }
    }
    globals->dat_1050_0310 = 0x6d0;
    return;
}


void  file_1030_1730(u32 param_1, u32 param_2)

{
    u16    uVar1;
    BOOL16 BVar2;
    u16    uVar3;

    uVar1 = (param_1 >> 0x10);
    uVar3 = (param_2 >> 0x10);
    BVar2 = read_file_1008_7dee(param_2, uVar3, param_1 + 0x4, 0x0, uVar1, 0x4, SEG_1008);
    if(BVar2 != 0x0)
    {
        BVar2 = read_file_1008_7dee(param_2, uVar3, param_1 + 0x8, 0x0, uVar1, 0x4, SEG_1008);
        if(BVar2 != 0x0)
        {
            return;
        }
    }
    globals->dat_1050_0310 = 0x6d2;
    return;
}


u16  pass1_1030_1978(Struct730 *param_1, u32 param_2, u16 param_3, u16 param_4)

{
    pass1_1030_16d6(param_1, param_2, param_4);
    if(param_3 != 0x0)
    {
        write_to_file_1008_7954(param_2, (param_1 + 0xc), param_3, SEG_1008, param_4);
        if(param_3 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d0;
            return param_3;
        }
        param_3 = 0x1;
    }
    return param_3;
}


void  file_1030_19b4(Struct370 *param_1, u32 param_2, i16 param_3, u16 param_4, u16 param_5)

{
    long *plVar1;

    file_1030_1730(param_1, param_2);
    if(param_3 != 0x0)
    {
        plVar1 = (long *)(param_1 & 0xffff0000 | (param_1 + 0xc));
        file_1008_76e4(param_2, plVar1, SEG_1008, param_5, param_4);
        if(plVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d2;
            return;
        }
    }
    return;
}


u16  pass1_1030_1a9c(u32 param_1, u32 param_2, u16 param_3)

{
    u32 uVar1;
    i16       *piVar2;
    u16      in_AX;
    u16        uVar3;
    BOOL16     BVar4;
    i16        iVar5;
    u16        uVar6;
    u16        local_c[0x5];

    uVar3 = pass1_1030_1978(param_1, param_2, in_AX, param_3);
    if(uVar3 != 0x0)
    {
        uVar6      = (param_1 >> 0x10);
        iVar5      = param_1;
        local_c[0] = (iVar5 + 0x10);
        uVar3      = (param_2 >> 0x10);
        BVar4      = write_to_file_1008_7e1c(param_2, uVar3, local_c, param_3, 0x2, SEG_1008);
        if(BVar4 != 0x0)
        {
            if((iVar5 + 0x10) == 0x0)
            {
                return 0x1;
            }
            piVar2 = *(i16 **)(iVar5 + 0x10);
            uVar1  = (piVar2 + 0x2);
            BVar4  = write_to_file_1008_7e1c(param_2, uVar3, uVar1, (uVar1 >> 0x10), (*piVar2 * 0x2), SEG_1008);
            if(BVar4 != 0x0)
            {
                return 0x1;
            }
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return 0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 file_1030_1b18(Globals   *globals,
                   Struct370 *param_1,
                   u32        param_2,
                   i16        param_3,
                   u8        *param_4,
                   u16        param_5)

{
    u32   uVar1;
    i16         *piVar2;
    u16          uVar3;
    u16          uVar4;
    BOOL16       BVar5;
    u16          uVar6;
    u8          *puVar7;
    Struct368 *iVar7;
    u16          uVar8;
//    u16          uVar9;
//    Struct370 *iVar10;
    Struct369 *iVar9;

//    iVar10 = (Struct370 *)param_1;
//    uVar9  = (param_1 >> 0x10);
    file_1030_19b4(param_1, param_2, param_3, param_4, param_5);
    if(param_3 != 0x0)
    {
        if(globals->dat_1050_5f2c == 0x0)
        {
            globals->dat_1050_5f2c      = mem_op_1000_160a(param_4, SEG_1000);
            globals->dat_1050_5f2e      = param_4;
        }
        else
        {
        }
        uVar4                       = fn_ptr_op_1000_1708(0x6, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
        &param_1->field_0x10         = uVar4;
        (&param_1->field_0x10 + 0x2) = globals->dat_1050_5f2e;
        puVar7                      = (&param_1->field_0x10 + 0x2);
        uVar4                       = (param_2 >> 0x10);
        BVar5                       = read_file_1008_7dee(param_2, uVar4, &param_1->field_0x10, 0x0, puVar7, 0x2, SEG_1008);
        if(BVar5 != 0x0)
        {
            piVar2 = param_1->field_0x10;
            if(*piVar2 == 0x0)
            {
                return 0x1;
            }
            uVar3 = *piVar2 * 0x2;
            uVar6 = uVar3;
            mem_op_1000_179c(uVar3, puVar7, 0);
            piVar2 = param_1->field_0x10;
            uVar8            = (piVar2 >> 0x10);
            iVar7            = (Struct368 *)piVar2;
            iVar7->fld2_segment = uVar6;
            iVar7->field_0x4 = puVar7;
            piVar2           = param_1->field_0x10;
            uVar1            = (piVar2 + 0x2);
            BVar5            = read_file_1008_7dee(param_2, uVar4, uVar1, 0x0, (uVar1 >> 0x10), uVar3, SEG_1008);
            if(BVar5 != 0x0)
            {
                return 0x1;
            }
        }
        globals->dat_1050_0310 = 0x6d2;
    }
    return 0x0;
}


u16  write_file_fn_1028_e56c(u16 param_1, u16 param_2, u32 param_3, u16 param_4)

{
    void **ppcVar1;
    u8         *pu_var2;
    BOOL16      BVar3;
    u16       in_DX;
    u16       extraout_DX;
    u32  in_stack_0000000c;
    u32         local_2a[0x3];
    u32 *puStack28;
    u32         uStack24;
    u8          local_14[0x8];
    u16         uStack12;
    u16       uStack10;
    u16         uStack8;
    u16       u_stack6;
    i16         iStack4;

    pass1_1028_dc52((Struct92 *)str_var1(param_4, local_14), 0x1, in_stack_0000000c, (in_stack_0000000c >> 0x10));
    uStack24 = 0x0;
    while(true)
    {
        pu_var2 = local_14;
        pass1_1028_e4ec(str_var1(param_4, pu_var2));
        puStack28 = str_var1(in_DX, pu_var2);
        in_DX     = in_DX | pu_var2;
        if(in_DX == 0x0)
            break;
        uStack24 = uStack24 + 0x1;
    }
    local_2a[0] = uStack24;
    BVar3       = write_to_file_1008_7e1c(param_3, (param_3 >> 0x10), local_2a, param_4, 0x4, SEG_1008);
    if(BVar3 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d0;
    }
    else
    {
        uStack12 = uStack8;
        uStack10 = u_stack6;
        if(iStack4 != 0x0)
        {
            uStack12 = 0x1;
            u_stack6  = 0x0;
            uStack10 = u_stack6;
        }
        do
        {
            pu_var2 = local_14;
            pass1_1028_e4ec(str_var1(param_4, pu_var2));
            puStack28 = str_var1(u_stack6, pu_var2);
            if((u_stack6 | pu_var2) == 0x0)
            {
                return 0x0;
            }
            ppcVar1 = (*puStack28 + 0xc);
            (**ppcVar1)(SEG_1008, pu_var2, u_stack6);
            local_2a[0] = local_2a[0] & 0xffff0000 | ZEXT24(pu_var2);
            u_stack6     = extraout_DX;
            in_DX       = extraout_DX;
        } while(pu_var2 != 0x0);
    }
    return in_DX;
}


BOOL16  pass1_1028_d7a0(u16 param_1, u16 param_2, u32 param_3, u16 param_4)

{
    BOOL16 BVar1;

    BVar1 = write_to_file_1008_7cac(param_3, param_4);
    if(BVar1 != 0x0)
    {
        BVar1 = 0x1;
    }
    return BVar1;
}


i16  read_file_1028_d7ba(u16 param_1, u16 param_2, u32 param_3, u16 param_4, u16 param_5)

{
    read_file_1008_7cfe(param_3, (param_3 >> 0x10), 0x8, SEG_1008, param_4);
    if(param_5 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d4;
        return param_5;
    }
    return 0x1;
}


u32  write_to_file_1028_dce2(u32 *param_1, u32 param_2, u16 param_3)

{
    void **ppcVar1;
    BOOL16     BVar2;
    u8        *puVar3;
    u16      in_DX;
    u16        extraout_DX;
    u16        uVar4;
    i16        iVar5;
    u16        uVar6;
    u16        uVar7;
    u32 local_26[0x2];
    u16        local_1e[0x3];
    u32 uStack24;
    u8         local_14[0x12];

    uVar7 = (param_2 >> 0x10);
    BVar2 = write_to_file_1008_7cac(param_2, param_3);
    if(BVar2 != 0x0)
    {
        local_26[0] = *param_1;
        BVar2       = write_to_file_1008_7e1c(param_2, uVar7, local_26, param_3, 0x4, SEG_1008);
        if(BVar2 != 0x0)
        {
            uVar6       = (param_1 >> 0x10);
            iVar5       = param_1;
            local_1e[0] = (iVar5 + 0x8);
            BVar2       = write_to_file_1008_7e1c(param_2, uVar7, local_1e, param_3, 0x2, SEG_1008);
            if(BVar2 != 0x0)
            {
                ppcVar1 = (*_PTR_LOOP_1050_5166 + 0xc);
                (**ppcVar1)(SEG_1008, globals->_PTR_LOOP_1050_5166, (globals->_PTR_LOOP_1050_5166 >> 0x10), param_2);
                in_DX = extraout_DX;
                if(BVar2 != 0x0)
                {
                    BVar2 = write_to_file_1008_7cac(param_2, param_3);
                    if(BVar2 != 0x0)
                    {
                        in_DX = write_file_fn_1028_e56c(iVar5, uVar6, param_2, param_3);
                        if(BVar2 != 0x0)
                        {
                            BVar2 = write_to_file_1008_7cac(param_2, param_3);
                            if(BVar2 != 0x0)
                            {
                                in_DX = write_file_fn_1028_e56c(iVar5, uVar6, param_2, param_3);
                                if(BVar2 != 0x0)
                                {
                                    BVar2 = write_to_file_1008_7cac(param_2, param_3);
                                    if(BVar2 != 0x0)
                                    {
                                        in_DX = write_file_fn_1028_e56c(iVar5, uVar6, param_2, param_3);
                                        if(BVar2 != 0x0)
                                        {
                                            BVar2 = write_to_file_1008_7cac(param_2, param_3);
                                            if(BVar2 != 0x0)
                                            {
                                                in_DX = write_file_fn_1028_e56c(iVar5, uVar6, param_2, param_3);
                                                if(BVar2 != 0x0)
                                                {
                                                    BVar2 = write_to_file_1008_7cac(param_2, param_3);
                                                    if(BVar2 != 0x0)
                                                    {
                                                        in_DX = write_file_fn_1028_e56c(iVar5, uVar6, param_2, param_3);
                                                        if(BVar2 != 0x0)
                                                        {
                                                            BVar2 = write_to_file_1008_7cac(param_2, param_3);
                                                            if(BVar2 != 0x0)
                                                            {
                                                                in_DX = write_file_fn_1028_e56c(iVar5, uVar6, param_2, param_3);
                                                                if(BVar2 != 0x0)
                                                                {
                                                                    BVar2 = write_to_file_1008_7cac(param_2, param_3);
                                                                    if(BVar2 != 0x0)
                                                                    {
                                                                        in_DX = write_file_fn_1028_e56c(iVar5, uVar6, param_2, param_3);
                                                                        if(BVar2 != 0x0)
                                                                        {
                                                                            BVar2 = write_to_file_1008_7cac(param_2, param_3);
                                                                            if(BVar2 != 0x0)
                                                                            {
                                                                                in_DX = write_file_fn_1028_e56c(iVar5, uVar6, param_2, param_3);
                                                                                if(BVar2 != 0x0)
                                                                                {
                                                                                    pass1_1028_dc52((Struct92 *)
                                                                                        str_var1(param_3, local_14), 0x1, 0x0, 0x400);
                                                                                    while(true)
                                                                                    {
                                                                                        uVar4  = in_DX;
                                                                                        puVar3 = local_14;
                                                                                        pass1_1028_e4ec(
                                                                                          str_var1(param_3, puVar3));
                                                                                        uStack24 = str_var1(uVar4, puVar3);
                                                                                        in_DX    = uVar4 | puVar3;
                                                                                        if(in_DX == 0x0)
                                                                                            break;
                                                                                        if((puVar3 + 0x200) != 0x8000002)
                                                                                        {
                                                                                            pass1_1038_3ba0(
                                                                                              str_var1(uVar4, puVar3));
                                                                                        }
                                                                                    }
                                                                                    return 0x10000;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return in_DX;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  read_file_1028_def2(u32 param_1, u32 param_2, u16 param_3, u16 param_4)

{
    fn_ptr_1 *ppcVar1;
    BOOL16    BVar2;
    u16       unaff_SI;
    u16       unaff_DI;
    u16       uVar3;
    u8        in_AF;
    u16       uVar4;
    u16       uVar5;

    uVar4 = param_2;
    uVar5 = (param_2 >> 0x10);
    read_file_1008_7cfe(uVar4, uVar5, 0xa, SEG_1008, param_3);
    if(param_4 != 0x0)
    {
        uVar3 = (param_1 >> 0x10);
        BVar2 = read_file_1008_7dee(uVar4, uVar5, param_1, 0x0, uVar3, 0x4, SEG_1008);
        if(BVar2 != 0x0)
        {
            BVar2 = read_file_1008_7dee(uVar4, uVar5, param_1 + 0x8, 0x0, uVar3, 0x2, SEG_1008);
            if(BVar2 != 0x0)
            {
                uVar3   = (*_PTR_LOOP_1050_5166 >> 0x10);
                ppcVar1 = (*_PTR_LOOP_1050_5166 + 0x10);
                (**ppcVar1)(SEG_1008, globals->_PTR_LOOP_1050_5166, (globals->_PTR_LOOP_1050_5166 >> 0x10), param_2);
                if(BVar2 != 0x0)
                {
                    read_file_1008_7cfe(uVar4, uVar5, 0xc, SEG_1008, param_3);
                    if(BVar2 != 0x0)
                    {
                        pass1_1028_e628(param_1, uVar4, uVar5, 0x0, 0x100, unaff_SI, unaff_DI, uVar3, param_3, in_AF);
                        if(BVar2 != 0x0)
                        {
                            read_file_1008_7cfe(uVar4, uVar5, 0xd, SEG_1008, param_3);
                            if(BVar2 != 0x0)
                            {
                                pass1_1028_e628(param_1, uVar4, uVar5, 0x0, 0x200, unaff_SI, unaff_DI, uVar3, param_3, in_AF);
                                if(BVar2 != 0x0)
                                {
                                    read_file_1008_7cfe(uVar4, uVar5, 0xe, SEG_1008, param_3);
                                    if(BVar2 != 0x0)
                                    {
                                        pass1_1028_e628(param_1, uVar4, uVar5, 0x0, 0x300, unaff_SI, unaff_DI, uVar3, param_3, in_AF);
                                        if(BVar2 != 0x0)
                                        {
                                            read_file_1008_7cfe(uVar4, uVar5, 0xf, SEG_1008, param_3);
                                            if(BVar2 != 0x0)
                                            {
                                                pass1_1028_e628(param_1, uVar4, uVar5, 0x0, 0x400, unaff_SI, unaff_DI, uVar3, param_3, in_AF);
                                                if(BVar2 != 0x0)
                                                {
                                                    read_file_1008_7cfe(uVar4, uVar5, 0x10, SEG_1008, param_3);
                                                    if(BVar2 != 0x0)
                                                    {
                                                        pass1_1028_e628(param_1, uVar4, uVar5, 0x0, 0x500, unaff_SI, unaff_DI, uVar3, param_3, in_AF);
                                                        if(BVar2 != 0x0)
                                                        {
                                                            read_file_1008_7cfe(uVar4, uVar5, 0x11, SEG_1008, param_3);
                                                            if(BVar2 != 0x0)
                                                            {
                                                                pass1_1028_e628(param_1, uVar4, uVar5, 0x0, 0x600, unaff_SI, unaff_DI, uVar3, param_3, in_AF);
                                                                if(BVar2 != 0x0)
                                                                {
                                                                    read_file_1008_7cfe(uVar4, uVar5, 0x12, SEG_1008, param_3);
                                                                    if(BVar2 != 0x0)
                                                                    {
                                                                        pass1_1028_e628(param_1, uVar4, uVar5, 0x0, 0x700, unaff_SI, unaff_DI, uVar3, param_3, in_AF);
                                                                        if(BVar2 != 0x0)
                                                                        {
                                                                            read_file_1008_7cfe(uVar4, uVar5, 0x13, SEG_1008, param_3);
                                                                            if(BVar2 != 0x0)
                                                                            {
                                                                                pass1_1028_e628(param_1, uVar4, uVar5, 0x0, 0x800, unaff_SI, unaff_DI, uVar3, param_3, in_AF);
                                                                                if(BVar2 != 0x0)
                                                                                {
                                                                                    return;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}


BOOL16  write_to_file_1028_b5ec(u32 param_1, u32 param_2, u16 param_3)

{
    u32 uVar1;
    BOOL16     BVar2;
    i16        iVar3;
    u16        uVar4;
    u16        uVar5;
    u16        uVar6;
    u16        local_e[0x3];
    u16        local_8[0x2];
    i16        iStack4;

    uVar4      = (param_1 >> 0x10);
    iVar3      = param_1;
    local_e[0] = (iVar3 + 0xc);
    uVar5      = param_2;
    uVar6      = (param_2 >> 0x10);
    BVar2      = write_to_file_1008_7e1c(uVar5, uVar6, local_e, param_3, 0x2, SEG_1008);
    if(BVar2 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d0;
        return 0x0;
    }
    pass1_1030_16d6(param_1, param_2, param_3);
    if(BVar2 == 0x0)
    {
        return 0x0;
    }
    local_8[0] = (iVar3 + 0xc);
    BVar2      = write_to_file_1008_7e1c(uVar5, uVar6, local_8, param_3, 0x2, SEG_1008);
    if(BVar2 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d0;
        return 0x0;
    }
    local_8[0] = (iVar3 + 0xe);
    BVar2      = write_to_file_1008_7e1c(uVar5, uVar6, local_8, param_3, 0x2, SEG_1008);
    if(BVar2 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d0;
        return 0x0;
    }
    local_8[0] = (iVar3 + 0x10);
    BVar2      = write_to_file_1008_7e1c(uVar5, uVar6, local_8, param_3, 0x2, SEG_1008);
    if(BVar2 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d0;
        return 0x0;
    }
    local_8[0] = (iVar3 + 0x12);
    BVar2      = write_to_file_1008_7e1c(uVar5, uVar6, local_8, param_3, 0x2, SEG_1008);
    if(BVar2 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d0;
        return 0x0;
    }
    local_8[0] = (iVar3 + 0x18);
    BVar2      = write_to_file_1008_7e1c(uVar5, uVar6, local_8, param_3, 0x2, SEG_1008);
    if(BVar2 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d0;
        return 0x0;
    }
    local_8[0] = (iVar3 + 0x1a);
    BVar2      = write_to_file_1008_7e1c(uVar5, uVar6, local_8, param_3, 0x2, SEG_1008);
    if(BVar2 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d0;
        return 0x0;
    }
    iStack4 = (iVar3 + 0x12);
    if(iStack4 == 0x6)
    {
        iStack4 = (iVar3 + 0x18);
    }
    if(iStack4 < 0x1)
    {
        return 0x1;
    }
    if(SBORROW2(iStack4, 0x1))
    {
        return 0x1;
    }
    if(iStack4 == 0x3 || iStack4 + -0x2 < 0x1)
    {
        local_8[0] = (iVar3 + 0x14);
    }
    else
    {
        if(iStack4 == 0x4)
        {
            if((iVar3 + 0x14) == 0x0)
            {
                local_8[0] = 0x0;
                BVar2      = write_to_file_1008_7e1c(uVar5, uVar6, local_8, param_3, 0x2, SEG_1008);
                goto joined_r0x1028b766;
            }
            uVar1      = (iVar3 + 0x14);
            local_8[0] = (uVar1 + 0x94);
        }
        else
        {
            if(iStack4 != 0x5)
            {
                return 0x1;
            }
            uVar1      = (iVar3 + 0x14);
            local_8[0] = (uVar1 + 0xa4);
            BVar2      = write_to_file_1008_7e1c(uVar5, uVar6, local_8, param_3, 0x2, SEG_1008);
            if(BVar2 == 0x0)
            {
                globals->dat_1050_0310 = 0x6d0;
                return 0x0;
            }
            uVar1      = (iVar3 + 0x14);
            local_8[0] = (uVar1 + 0xa6);
            BVar2      = write_to_file_1008_7e1c(uVar5, uVar6, local_8, param_3, 0x2, SEG_1008);
            if(BVar2 == 0x0)
            {
                globals->dat_1050_0310 = 0x6d0;
                return 0x0;
            }
            uVar1      = (iVar3 + 0x14);
            local_8[0] = (uVar1 + 0xa8);
            BVar2      = write_to_file_1008_7e1c(uVar5, uVar6, local_8, param_3, 0x2, SEG_1008);
            if(BVar2 == 0x0)
            {
                globals->dat_1050_0310 = 0x6d0;
                return 0x0;
            }
            uVar1      = (iVar3 + 0x14);
            local_8[0] = (uVar1 + 0xaa);
            BVar2      = write_to_file_1008_7e1c(uVar5, uVar6, local_8, param_3, 0x2, SEG_1008);
            if(BVar2 == 0x0)
            {
                globals->dat_1050_0310 = 0x6d0;
                return 0x0;
            }
            uVar1      = (iVar3 + 0x14);
            local_8[0] = (uVar1 + 0xac);
        }
    }
    BVar2 = write_to_file_1008_7e1c(uVar5, uVar6, local_8, param_3, 0x2, SEG_1008);
joined_r0x1028b766:
    if(BVar2 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d0;
        return 0x0;
    }
    return 0x1;
}


// WARNING: Unable to use type for symbol puVar3
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  file_1028_b81a(u32 param_1, u32 param_2, i16 param_3, u16 param_4, u8 *param_5)

{
    BOOL16 BVar1;
    i16    iVar2;
    u32   *puVar4;
    u16    uVar5;
    u16    uVar6;
    u32    uVar7;
    u16    uVar8;
    u16    local_2a[0x2];
    u8     local_26[0x16];
    u32   *puStack16;
    u8    *puStack14;
    i16    iStack10;
    i16    local_8;
    i16    local_6;
    i16    local_4;
    u32   *puVar3;

    puVar3 = param_1;
    uVar6  = (param_1 >> 0x10);
    file_1030_1730(param_1, param_2);
    if(param_3 == 0x0)
    {
        return;
    }
    uVar5 = param_2;
    uVar8 = (param_2 >> 0x10);
    BVar1 = read_file_1008_7dee(uVar5, uVar8, &local_4, 0x0, param_4, 0x2, SEG_1008);
    if(BVar1 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d2;
        return;
    }
    BVar1 = read_file_1008_7dee(uVar5, uVar8, &local_6, 0x0, param_4, 0x2, SEG_1008);
    if(BVar1 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d2;
        return;
    }
    BVar1 = read_file_1008_7dee(uVar5, uVar8, &local_8, 0x0, param_4, 0x2, SEG_1008);
    if(BVar1 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d2;
        return;
    }
    iVar2          = switch_1008_73ea(uVar5, uVar8, local_4);
    (puVar3 + 0x3) = iVar2;
    iVar2          = switch_1008_73ea(uVar5, uVar8, local_6);
    (puVar3 + 0xe) = iVar2;
    iVar2          = switch_1008_73ea(uVar5, uVar8, local_8);
    (puVar3 + 0x4) = iVar2;
    BVar1          = read_file_1008_7dee(uVar5, uVar8, &local_4, 0x0, param_4, 0x2, SEG_1008);
    if(BVar1 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d2;
        return;
    }
    BVar1 = read_file_1008_7dee(uVar5, uVar8, &local_6, 0x0, param_4, 0x2, SEG_1008);
    if(BVar1 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d2;
        return;
    }
    BVar1 = read_file_1008_7dee(uVar5, uVar8, puVar3 + 0x1a, 0x0, uVar6, 0x2, SEG_1008);
    if(BVar1 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d2;
        return;
    }
    (puVar3 + 0x12) = local_4;
    (puVar3 + 0x6)  = local_6;
    iStack10        = (puVar3 + 0x12);
    if(iStack10 == 0x6)
    {
        iStack10 = (puVar3 + 0x6);
    }
    switch(iStack10)
    {
    case 0x1:
    case 0x2:
    case 0x3:
        puVar4 = puVar3 + 0x5;
    LAB_1028_b968:
        BVar1 = read_file_1008_7dee(uVar5, uVar8, puVar4, 0x0, uVar6, 0x2, SEG_1008);
        break;
    case 0x4:
        uVar7           = pass1_1028_e0bc(globals->_PTR_LOOP_1050_65e2, (puVar3 + 0x3), puVar3, param_5, param_4);
        puStack14       = (uVar7 >> 0x10);
        (puVar3 + 0x5)  = uVar7;
        (puVar3 + 0x16) = puStack14;
        if((puStack14 | (puVar3 + 0x5)) != 0x0)
        {
            puVar4    = ((puVar3 + 0x5) + 0x94);
            uVar6     = puStack14;
            puStack16 = puVar4;
            goto LAB_1028_b968;
        }
        BVar1 = read_file_1008_7dee(uVar5, uVar8, local_26, 0x0, param_4, 0x2, SEG_1008);
        break;
    case 0x5:
        puVar4 = puVar3;
        pass1_1028_e100(globals->_PTR_LOOP_1050_65e2, (puVar3 + 0x3), param_5);
        (puVar3 + 0x5) = puVar4;
        (puVar3 + 0x16)         = param_5;
        puStack16               = ((puVar3 + 0x5) + 0xa4);
        puStack14               = param_5;
        BVar1                   = read_file_1008_7dee(uVar5, uVar8, puStack16, 0x0, param_5, 0x2, SEG_1008);
        if(BVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d2;
            return;
        }
        BVar1 = read_file_1008_7dee(uVar5, uVar8, local_2a, 0x0, param_4, 0x2, SEG_1008);
        if(BVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d2;
            return;
        }
        uVar7 = puVar3[0x5];
        BVar1 = read_file_1008_7dee(uVar5, uVar8, uVar7 + 0xa8, 0x0, (uVar7 >> 0x10), 0x2, SEG_1008);
        if(BVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d2;
            return;
        }
        uVar7 = puVar3[0x5];
        BVar1 = read_file_1008_7dee(uVar5, uVar8, uVar7 + 0xaa, 0x0, (uVar7 >> 0x10), 0x2, SEG_1008);
        if(BVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d2;
            return;
        }
        uVar7 = puVar3[0x5];
        BVar1 = read_file_1008_7dee(uVar5, uVar8, uVar7 + 0xac, 0x0, (uVar7 >> 0x10), 0x2, SEG_1008);
        if(BVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d2;
            return;
        }
        uVar5          = switch_1008_72bc(uVar5, uVar8, local_2a[0]);
        uVar7          = puVar3[0x5];
        (uVar7 + 0xa6) = uVar5;
        return;
    default:
        goto switchD_1028_ba97_caseD_6;
    case 0x9:
        puVar4 = puVar3;
        pass1_1028_e100(globals->_PTR_LOOP_1050_65e2, (puVar3 + 0x3), param_5);
        (puVar3 + 0x5) = puVar4;
        (puVar3 + 0x16)         = param_5;
        goto switchD_1028_ba97_caseD_6;
    }
    if(BVar1 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d2;
        return;
    }
switchD_1028_ba97_caseD_6:
    return;
}


BOOL16  pass1_1028_b2c8(u32 param_1, u32 param_2, BOOL16 param_3, u16 param_4)

{
    BOOL16 BVar1;
    u16    u_var2;
    u16    local_4;

    file_1030_1730(param_1, param_2);
    if(param_3 != 0x0)
    {
        u_var2 = (param_2 >> 0x10);
        BVar1 = read_file_1008_7dee(param_2, u_var2, &local_4, 0x0, param_4, 0x2, SEG_1008);
        if(BVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d2;
            return BVar1;
        }
        u_var2           = switch_1008_72bc(param_2, u_var2, local_4);
        (param_1 + 0xc) = u_var2;
        param_3         = 0x1;
    }
    return param_3;
}


u16  pass1_1028_64d6(u32 param_1, u32 param_2, u16 param_3)

{
    u32 uVar1;
    BOOL16     BVar2;
    u16       *puVar3;
    u16        uVar4;
    u16        uVar5;
    u16        uVar6;
    u16        local_26;
    u16        local_24;
    u16        local_22;
    u16        local_20;
    u16        local_1e;
    u16        local_1c[0x6];
    u16        uStack16;
    long       lStack14;
    u8         local_a[0x8];

    BVar2 = write_to_file_1028_b5ec(param_1, param_2, param_3);
    if(BVar2 != 0x0)
    {
        uVar4 = (param_1 >> 0x10);
        pass1_1008_5784(str_var1(param_3, local_a), *(param_1 + 0x20));
        uVar1       = (param_1 + 0x20);
        local_1c[0] = (uVar1 + 0x8);
        puVar3      = local_1c;
        uStack16    = local_1c[0];
        while(true)
        {
            uVar5 = param_2;
            uVar6 = (param_2 >> 0x10);
            BVar2 = write_to_file_1008_7e1c(uVar5, uVar6, puVar3, param_3, 0x2, SEG_1008);
            if(BVar2 == 0x0)
                break;
            lStack14 = pass1_1008_5b12(local_a, param_3);
            if(lStack14 == 0x0)
            {
                return 0x1;
            }
            local_1e = (lStack14 + 0x4);
            BVar2    = write_to_file_1008_7e1c(uVar5, uVar6, &local_1e, param_3, 0x2, SEG_1008);
            if(BVar2 == 0x0)
                break;
            local_20 = (lStack14 + 0x6);
            BVar2    = write_to_file_1008_7e1c(uVar5, uVar6, &local_20, param_3, 0x2, SEG_1008);
            if(BVar2 == 0x0)
                break;
            local_22 = (lStack14 + 0x8);
            BVar2    = write_to_file_1008_7e1c(uVar5, uVar6, &local_22, param_3, 0x2, SEG_1008);
            if(BVar2 == 0x0)
                break;
            local_24 = (lStack14 + 0xa);
            BVar2    = write_to_file_1008_7e1c(uVar5, uVar6, &local_24, param_3, 0x2, SEG_1008);
            if(BVar2 == 0x0)
                break;
            local_26 = (lStack14 + 0xc);
            puVar3   = &local_26;
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return 0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_65e2(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5)

{
    void **ppcVar1;
    u16         u_var2;
    BOOL16      BVar3;
    u16         uVar4;
    u16         uVar5;
    u16         uVar6;
    u16         uVar7;
    u16         uVar8;
    u16         local_16;
    Struct99 *paStack20;
    u16         local_10[0x2];
    u16         local_c[0x3];
    u16         u_stack6;
    u16         local_4;

    file_1028_b81a(param_1, param_2, param_3, param_5, param_4);
    if(param_3 != 0x0)
    {
        uVar7 = param_2;
        uVar8 = (param_2 >> 0x10);
        BVar3 = read_file_1008_7dee(uVar7, uVar8, &local_4, 0x0, param_5, 0x2, SEG_1008);
        if(BVar3 != 0x0)
        {
            u_stack6 = 0x0;
            while(true)
            {
                if(local_4 <= u_stack6)
                {
                    return;
                }
                paStack20 = pass1_1000_07fc(SEG_1000, globals->u32_ptr_1050_68a2);
                uVar5 = (paStack20 >> 0x10);
                u_var2     = paStack20;
                if((uVar5 | u_var2) == 0x0)
                {
                    paStack20 = (Struct99 *)0x0;
                }
                else
                {
                    paStack20->fld0_addr_table = addr_table_1008_380a[36];//0x389a;
                    (u_var2 + 0x2)        = SEG_1008;
                    (u_var2 + 0x4)        = 0x0;
                    (u_var2 + 0x6)        = 0x0;
                    (u_var2 + 0x8)        = 0x0;
                    (u_var2 + 0xa)        = 0x0;
                    (u_var2 + 0xc)        = 0x0;
                    paStack20->fld0_addr_table = addr_table_1018_56ce;//0x56ce;
                    (u_var2 + 0x2)        = SEG_1018;
                }
                BVar3 = read_file_1008_7dee(uVar7, uVar8, local_10, 0x0, param_5, 0x2, SEG_1008);
                if(BVar3 == 0x0)
                    break;
                BVar3 = read_file_1008_7dee(uVar7, uVar8, local_c, 0x0, param_5, 0x2, SEG_1008);
                if(BVar3 == 0x0)
                    break;
                BVar3 = read_file_1008_7dee(uVar7, uVar8, &local_16, 0x0, param_5, 0x2, SEG_1008);
                if(BVar3 == 0x0)
                    break;
                BVar3 = read_file_1008_7dee(uVar7, uVar8, paStack20 + 0xa, 0x0, (paStack20 >> 0x10), 0x2, SEG_1008);
                if(BVar3 == 0x0)
                    break;
                BVar3 = read_file_1008_7dee(uVar7, uVar8, paStack20 + 0xc, 0x0, (paStack20 >> 0x10), 0x2, SEG_1008);
                if(BVar3 == 0x0)
                    break;
                (paStack20 + 0x4) = local_10[0];
                uVar4             = switch_1008_72bc(uVar7, uVar8, local_c[0]);
                uVar6             = (paStack20 >> 0x10);
                (paStack20 + 0x6) = uVar4;
                (paStack20 + 0x8) = local_16;
                ppcVar1           = ((param_1 + 0x20) + 0x8);
                (**ppcVar1)();
                u_stack6 = u_stack6 + 0x1;
            }
        }
        globals->dat_1050_0310 = 0x6d2;
    }
    return;
}


BOOL16  write_to_file_1028_5f82(u32 param_1, u32 param_2, u16 param_3)

{
    BOOL16 BVar1;
    u16    local_c[0x5];

    BVar1 = write_to_file_1028_b5ec(param_1, param_2, param_3);
    if(BVar1 != 0x0)
    {
        local_c[0] = (param_1 + 0x20);
        BVar1      = write_to_file_1008_7e1c(param_2, (param_2 >> 0x10), local_c, param_3, 0x2, SEG_1008);
        if(BVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d0;
            return BVar1;
        }
        BVar1 = 0x1;
    }
    return BVar1;
}


void  pass1_1028_5fcc(i16 param_1, u8 *param_2, i16 param_3, u16 param_4)

{
    u32 uVar1;
    u32 u_var2;
    BOOL16     BVar3;

    file_1028_b81a(*(param_3 + 0x6), *(param_3 + 0xa), param_1, param_4, param_2);
    if((param_1 != 0x0) && (uVar1 = (param_3 + 0x6), u_var2 = (param_3 + 0xa), BVar3 = read_file_1008_7dee(u_var2, (u_var2 >> 0x10), uVar1 + 0x20, 0x0, (uVar1 >> 0x10), 0x2, SEG_1008), BVar3 == 0x0))
    {
        globals->dat_1050_0310 = 0x6d2;
        return;
    }
    return;
}


void  pass1_1028_4a1a(u32 param_1, u32 param_2, u16 param_3)

{
    BOOL16 BVar1;

    BVar1 = write_to_file_1028_b5ec(param_1, param_2, param_3);
    if((BVar1 != 0x0) && (BVar1 = write_to_file_1008_7e1c(param_2, (param_2 >> 0x10), param_1 + 0x20, (param_1 >> 0x10), 0xa, SEG_1008), BVar1 == 0x0))
    {
        globals->dat_1050_0310 = 0x6d0;
        return;
    }
    return;
}


void  pass1_1028_4a5a(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5)

{
    BOOL16 BVar1;

    file_1028_b81a(param_1, param_2, param_3, param_5, param_4);
    if((param_3 != 0x0) && (BVar1 = read_file_1008_7dee(param_2, (param_2 >> 0x10), param_1 + 0x20, 0x0, (param_1 >> 0x10), 0xa, SEG_1008), BVar1 == 0x0))
    {
        globals->dat_1050_0310 = 0x6d2;
        return;
    }
    return;
}


void  write_to_file_1028_3d0e(u32 param_1, u32 param_2, u16 param_3, u16 param_4)

{
    BOOL16     BVar1;
    i16        iVar2;
    u16        uVar3;
    u16        uVar4;
    u32 local_10[0x2];
    u32 local_8;

    BVar1 = write_to_file_1028_b5ec(param_1, param_2, param_3);
    if(BVar1 != 0x0)
    {
        uVar3       = (param_1 >> 0x10);
        iVar2       = param_1;
        local_10[0] = (iVar2 + 0x20);
        uVar4       = (param_2 >> 0x10);
        BVar1       = write_to_file_1008_7e1c(param_2, uVar4, local_10, param_3, 0x4, SEG_1008);
        if(BVar1 != 0x0)
        {
            local_8 = (iVar2 + 0x24);
            BVar1   = write_to_file_1008_7e1c(param_2, uVar4, &local_8, param_3, 0x4, SEG_1008);
            if(BVar1 != 0x0)
            {
                write_to_file_1008_7a22(param_2, (iVar2 + 0x28), SEG_1008, param_3);
                if(BVar1 != 0x0)
                {
                    return;
                }
            }
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return;
}


void  pass1_1028_3d92(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5, u16 param_6)

{
    i16    iVar1;
    BOOL16 BVar2;
    u16    uVar3;
    u16    uVar4;

    file_1028_b81a(param_1, param_2, param_3, param_6, param_4);
    if(param_3 != 0x0)
    {
        iVar1 = param_1;
        uVar3 = (param_1 >> 0x10);
        uVar4 = (param_2 >> 0x10);
        BVar2 = read_file_1008_7dee(param_2, uVar4, iVar1 + 0x20, 0x0, uVar3, 0x4, SEG_1008);
        if(BVar2 != 0x0)
        {
            BVar2 = read_file_1008_7dee(param_2, uVar4, iVar1 + 0x24, 0x0, uVar3, 0x4, SEG_1008);
            if(BVar2 != 0x0)
            {
                uVar3 = pass1_1008_7ad4(param_2, *(long **)(iVar1 + 0x28), param_5, SEG_1008, param_6);
                if(uVar3 != 0x0)
                {
                    return;
                }
            }
        }
        globals->dat_1050_0310 = 0x6d2;
    }
    return;
}


BOOL16  pass1_1028_2418(u32 param_1, u32 param_2, u16 param_3)

{
    u32 uVar1;
    BOOL16     BVar2;
    u16        uVar3;
    u32        uVar4;
    u16        local_1c[0x6];
    u16        uStack16;
    i16        iStack14;
    u16        uStack12;
    u8         local_a[0x8];

    BVar2 = write_to_file_1028_b5ec(param_1, param_2, param_3);
    if(BVar2 != 0x0)
    {
        uVar3 = (param_1 >> 0x10);
        pass1_1008_5784(str_var1(param_3, local_a), *(param_1 + 0x20));
        uVar1       = (param_1 + 0x20);
        local_1c[0] = (uVar1 + 0x8);
        uStack16    = local_1c[0];
        BVar2       = write_to_file_1008_7e1c(param_2, (param_2 >> 0x10), local_1c, param_3, 0x2, SEG_1008);
        if(BVar2 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d0;
            return BVar2;
        }
        while(true)
        {
            uVar4    = pass1_1008_5b12(local_a, param_3);
            iStack14 = uVar4;
            if(uVar4 == 0x0)
                break;
            pass1_1038_75ca(uVar4, param_2, iStack14, param_3);
            uStack12 = (uVar4 >> 0x10);
            if((BOOL16)uVar4 == 0x0)
            {
                return (BOOL16)uVar4;
            }
        }
        BVar2 = 0x1;
    }
    return BVar2;
}


BOOL16  file_1028_24a2(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5)

{
    u32 uVar1;
    void **ppcVar2;
    BOOL16     BVar3;
    u16        uVar4;
    u16        uVar5;
    u16        uVar6;
    u8        *extraout_DX;
    u8        *puVar7;
    u16        uVar8;
    u16        uVar10;
    u32        uVar9;
    u16        u_stack6;
    u16        local_4;

    file_1028_b81a(param_1, param_2, param_3, param_5, param_4);
    if(param_3 == 0x0)
    {
        return 0x0;
    }
    if(0x1 < globals->PTR_LOOP_1050_0312)
    {
        BVar3 = read_file_1008_7dee(param_2, (param_2 >> 0x10), &local_4, 0x0, param_5, 0x2, SEG_1008);
        if(BVar3 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d2;
            return 0x0;
        }
        for(u_stack6 = 0x0; u_stack6 < local_4; u_stack6 = u_stack6 + 0x1)
        {
            uVar8 = 0x2a;
            uVar6 = local_4;
            uVar9 = param_2;
            mem_op_1000_179c(0x2a, param_4, 0);
            puVar7 = (param_4 | uVar6);
            if(puVar7 == 0x0)
            {
                uVar4  = 0x0;
                puVar7 = 0x0;
            }
            else
            {
                uVar5 = uVar6;
                struct_1038_6520(str_var1(param_4, uVar6));
                uVar4 = uVar6;
                uVar6 = uVar5;
            }
            uVar10 = (uVar9 >> 0x10);
            uVar5  = uVar4;
            file_1038_774e(
              str_var1(puVar7, uVar4), str_var1(uVar9, uVar8), puVar7, param_5);
            if(uVar5 == 0x0)
            {
                return 0x0;
            }
            uVar8   = (param_1 >> 0x10);
            uVar1   = (param_1 + 0x20);
            ppcVar2 = ((param_1 + 0x20) + 0x8);
            (**ppcVar2)(SEG_1038, uVar1, (uVar1 >> 0x10), uVar4, puVar7, uVar10, uVar6);
            param_4 = extraout_DX;
        }
    }
    return 0x1;
}


u16  write_to_file_1028_1452(u32 param_1, u32 param_2, u16 param_3)

{
    BOOL16 BVar1;
    u16    u_var2;
    u16    uVar3;
    u16    uVar4;
    u16    local_c[0x3];
    u8    *local_6[0x2];

    BVar1 = write_to_file_1028_b5ec(param_1, param_2, param_3);
    if(BVar1 != 0x0)
    {
        u_var2      = (param_1 >> 0x10);
        local_c[0] = (param_1 + 0x22);
        uVar3      = param_2;
        uVar4      = (param_2 >> 0x10);
        BVar1      = write_to_file_1008_7e1c(uVar3, uVar4, local_c, param_3, 0x2, SEG_1008);
        if(BVar1 != 0x0)
        {
            local_6[0] = (param_1 + 0x20);
            BVar1      = write_to_file_1008_7e1c(uVar3, uVar4, local_6, param_3, 0x2, SEG_1008);
            if(BVar1 != 0x0)
            {
                local_6[0] = globals->PTR_LOOP_1050_4fbc;
                BVar1      = write_to_file_1008_7e1c(uVar3, uVar4, local_6, param_3, 0x2, SEG_1008);
                if(BVar1 != 0x0)
                {
                    return 0x1;
                }
            }
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return 0x0;
}


void  pass1_1028_14d8(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5)

{
    u16    uVar1;
    BOOL16 BVar2;
    u16    uVar3;
    u16    uVar4;
    u16    local_4;

    file_1028_b81a(param_1, param_2, param_3, param_5, param_4);
    if(param_3 != 0x0)
    {
        uVar1 = (param_1 >> 0x10);
        uVar3 = param_2;
        uVar4 = (param_2 >> 0x10);
        BVar2 = read_file_1008_7dee(uVar3, uVar4, param_1 + 0x22, 0x0, uVar1, 0x2, SEG_1008);
        if((BVar2 != 0x0) && (BVar2 = read_file_1008_7dee(uVar3, uVar4, &local_4, 0x0, param_5, 0x2, SEG_1008), BVar2 != 0x0))
        {
            (param_1 + 0x20) = local_4;
            if(globals->dat_1050_0312 < 0x2)
            {
                return;
            }
            BVar2 = read_file_1008_7dee(uVar3, uVar4, &PTR_LOOP_1050_4fbc, 0x0, SEG_1050, 0x2, SEG_1008);
            if(BVar2 != 0x0)
            {
                return;
            }
        }
        globals->dat_1050_0310 = 0x6d2;
    }
    return;
}


BOOL16  pass1_1020_e94e(u32 param_1, u32 param_2, u16 param_3)

{
    BOOL16 in_AX;
    BOOL16 BVar1;
    u16    local_c[0x5];

    pass1_1030_de7c(param_1, param_2, param_3);
    if(in_AX != 0x0)
    {
        local_c[0] = (param_1 + 0x24);
        BVar1      = write_to_file_1008_7e1c(param_2, (param_2 >> 0x10), local_c, param_3, 0x2, SEG_1008);
        if(BVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d0;
            return BVar1;
        }
        in_AX = 0x1;
    }
    return in_AX;
}


void  pass1_1020_e994(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5)

{
    BOOL16 BVar1;

    pass1_1030_dec4(param_1, param_2, param_3, param_4, param_5);
    if((param_3 != 0x0) && (BVar1 = read_file_1008_7dee(param_2, (param_2 >> 0x10), param_1 + 0x24, 0x0, (param_1 >> 0x10), 0x2, SEG_1008), BVar1 == 0x0))
    {
        globals->dat_1050_0310 = 0x6d2;
        return;
    }
    return;
}

u16  write_to_file_1028_0234(u32 param_1, u32 param_2, u16 param_3)

{
    u32 uVar1;
    BOOL16     BVar2;
    i16        iVar3;
    u16        uVar4;
    u16        uVar5;
    u16        uVar6;
    u16        local_1a[0x3];
    u16        local_14[0x2];
    u16        uStack16;
    long       lStack14;
    u8         local_a[0x8];

    BVar2 = write_to_file_1028_b5ec(param_1, param_2, param_3);
    if(BVar2 != 0x0)
    {
        uVar4       = (param_1 >> 0x10);
        iVar3       = param_1;
        local_1a[0] = (iVar3 + 0x20);
        uVar5       = param_2;
        uVar6       = (param_2 >> 0x10);
        BVar2       = write_to_file_1008_7e1c(uVar5, uVar6, local_1a, param_3, 0x2, SEG_1008);
        if(BVar2 != 0x0)
        {
            pass1_1008_5784(str_var1(param_3, local_a), *(iVar3 + 0x22));
            uVar1       = (iVar3 + 0x22);
            local_14[0] = (uVar1 + 0x8);
            uStack16    = local_14[0];
            BVar2       = write_to_file_1008_7e1c(uVar5, uVar6, local_14, param_3, 0x2, SEG_1008);
            while(BVar2 != 0x0)
            {
                lStack14 = pass1_1008_5b12(local_a, param_3);
                if(lStack14 == 0x0)
                {
                    return 0x1;
                }
                local_14[0] = (lStack14 + 0x4);
                BVar2       = write_to_file_1008_7e1c(uVar5, uVar6, local_14, param_3, 0x2, SEG_1008);
                if(BVar2 == 0x0)
                    break;
                local_14[0] = (lStack14 + 0x6);
                BVar2       = write_to_file_1008_7e1c(uVar5, uVar6, local_14, param_3, 0x2, SEG_1008);
                if(BVar2 == 0x0)
                    break;
                local_14[0] = (lStack14 + 0x8);
                BVar2       = write_to_file_1008_7e1c(uVar5, uVar6, local_14, param_3, 0x2, SEG_1008);
                if(BVar2 == 0x0)
                    break;
                local_14[0] = (lStack14 + 0xa);
                BVar2       = write_to_file_1008_7e1c(uVar5, uVar6, local_14, param_3, 0x2, SEG_1008);
                if(BVar2 == 0x0)
                    break;
                local_14[0] = (lStack14 + 0xc);
                BVar2       = write_to_file_1008_7e1c(uVar5, uVar6, local_14, param_3, 0x2, SEG_1008);
            }
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return 0x0;
}

void  pass1_1028_0374(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5)

{
    void **ppcVar1;
    u16          uVar3;
    BOOL16       BVar4;
    u16          uVar5;
    u16          uVar6;
    u16          uVar7;
    u16          uVar8;
    u16          uVar9;
    u16          local_18[0x2];
    Struct99  *paStack20;
    u16          local_10[0x2];
    u16          local_c[0x3];
    u16          u_stack6;
    u16          local_4;
    Struct728 *u_var2;

    file_1028_b81a(param_1, param_2, param_3, param_5, param_4);
    if(param_3 != 0x0)
    {
        uVar3 = (param_1 >> 0x10);
        uVar8 = param_2;
        uVar9 = (param_2 >> 0x10);
        BVar4 = read_file_1008_7dee(uVar8, uVar9, param_1 + 0x20, 0x0, uVar3, 0x2, SEG_1008);
        if(BVar4 != 0x0)
        {
            BVar4 = read_file_1008_7dee(uVar8, uVar9, &local_4, 0x0, param_5, 0x2, SEG_1008);
            if(BVar4 != 0x0)
            {
                u_stack6 = 0x0;
                while(true)
                {
                    if(local_4 <= u_stack6)
                    {
                        return;
                    }
                    paStack20 = pass1_1000_07fc(SEG_1000, globals->u32_ptr_1050_68a2);
                    uVar6 = (paStack20 >> 0x10);
                    u_var2     = (Struct728 *)paStack20;
                    if((uVar6 | u_var2) == 0x0)
                    {
                        paStack20 = (Struct99 *)0x0;
                    }
                    else
                    {
                        paStack20->fld0_addr_table = addr_table_1008_380a[36];//0x389a;
                        u_var2->fld2_segment       = SEG_1008;
                        u_var2->field_0x4     = 0x0;
                        u_var2->field_0x6     = 0x0;
                        u_var2->field_0x8     = 0x0;
                        u_var2->field_0xa     = 0x0;
                        u_var2->field_0xc     = 0x0;
                        paStack20->fld0_addr_table = addr_table_1018_56ce;//0x56ce;
                        u_var2->fld2_segment       = SEG_1018;
                    }
                    BVar4 = read_file_1008_7dee(uVar8, uVar9, local_10, 0x0, param_5, 0x2, SEG_1008);
                    if(BVar4 == 0x0)
                        break;
                    BVar4 = read_file_1008_7dee(uVar8, uVar9, local_c, 0x0, param_5, 0x2, SEG_1008);
                    if(BVar4 == 0x0)
                        break;
                    BVar4 = read_file_1008_7dee(uVar8, uVar9, local_18, 0x0, param_5, 0x2, SEG_1008);
                    if(BVar4 == 0x0)
                        break;
                    BVar4 = read_file_1008_7dee(uVar8, uVar9, paStack20 + 0xa, 0x0, (paStack20 >> 0x10), 0x2, SEG_1008);
                    if(BVar4 == 0x0)
                        break;
                    BVar4 = read_file_1008_7dee(uVar8, uVar9, paStack20 + 0xc, 0x0, (paStack20 >> 0x10), 0x2, SEG_1008);
                    if(BVar4 == 0x0)
                        break;
                    (paStack20 + 0x4) = local_10[0];
                    uVar5             = switch_1008_72bc(uVar8, uVar9, local_c[0]);
                    uVar7             = (paStack20 >> 0x10);
                    (paStack20 + 0x6) = uVar5;
                    (paStack20 + 0x8) = local_18[0];
                    ppcVar1           = ((param_1 + 0x22) + 0x8);
                    (**ppcVar1)();
                    u_stack6 = u_stack6 + 0x1;
                }
            }
        }
        globals->dat_1050_0310 = 0x6d2;
    }
    return;
}

BOOL16  write_to_file_1020_e6a4(u32 param_1, u32 param_2, u16 param_3)

{
    i16    in_AX;
    BOOL16 BVar1;
    u16    u_var2;
    u16    uVar3;
    u16    local_c[0x3];
    u16    local_6[0x2];

    pass1_1030_de7c(param_1, param_2, param_3);
    if(in_AX != 0x0)
    {
        u_var2      = (param_1 >> 0x10);
        local_c[0] = (param_1 + 0x24);
        uVar3      = (param_2 >> 0x10);
        BVar1      = write_to_file_1008_7e1c(param_2, uVar3, local_c, param_3, 0x2, SEG_1008);
        if(BVar1 != 0x0)
        {
            local_6[0] = (param_1 + 0x26);
            BVar1      = write_to_file_1008_7e1c(param_2, uVar3, local_6, param_3, 0x2, SEG_1008);
            if(BVar1 != 0x0)
            {
                return 0x1;
            }
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return 0x0;
}


void  pass1_1020_e70e(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5)

{
    u16    uVar1;
    BOOL16 BVar2;
    u16    uVar3;

    pass1_1030_dec4(param_1, param_2, param_3, param_4, param_5);
    if(param_3 != 0x0)
    {
        uVar1 = (param_1 >> 0x10);
        uVar3 = (param_2 >> 0x10);
        BVar2 = read_file_1008_7dee(param_2, uVar3, param_1 + 0x24, 0x0, uVar1, 0x2, SEG_1008);
        if(BVar2 != 0x0)
        {
            BVar2 = read_file_1008_7dee(param_2, uVar3, param_1 + 0x26, 0x0, uVar1, 0x2, SEG_1008);
            if(BVar2 != 0x0)
            {
                return;
            }
        }
        globals->dat_1050_0310 = 0x6d2;
    }
    return;
}

BOOL16  write_to_file_1020_d3d4(u32 param_1, u32 param_2, u16 param_3)

{
    BOOL16 BVar1;
    u16    local_c[0x5];

    BVar1 = write_to_file_1028_b5ec(param_1, param_2, param_3);
    if(BVar1 != 0x0)
    {
        local_c[0] = (param_1 + 0x20);
        BVar1      = write_to_file_1008_7e1c(param_2, (param_2 >> 0x10), local_c, param_3, 0x2, SEG_1008);
        if(BVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d0;
            return BVar1;
        }
        BVar1 = 0x1;
    }
    return BVar1;
}


BOOL16  pass1_1020_d41a(u32 param_1, u32 param_2, BOOL16 param_3, u8 *param_4, u16 param_5)

{
    BOOL16 BVar1;
    u16    local_4;

    file_1028_b81a(param_1, param_2, param_3, param_5, param_4);
    if(param_3 != 0x0)
    {
        BVar1 = read_file_1008_7dee(param_2, (param_2 >> 0x10), &local_4, 0x0, param_5, 0x2, SEG_1008);
        if(BVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d2;
            return BVar1;
        }
        (param_1 + 0x20) = local_4;
        param_3          = 0x1;
    }
    return param_3;
}


BOOL16  pass1_1020_a644(u16 param_1, u16 param_2, u32 param_3, u16 param_4)

{
    BOOL16 BVar1;

    BVar1 = write_to_file_1008_7cac(param_3, param_4);
    if(BVar1 != 0x0)
    {
        BVar1 = 0x1;
    }
    return BVar1;
}


BOOL16  read_file_1020_a65e(u32 param_1, u32 param_2, u16 param_3, u16 param_4)

{
    BOOL16 BVar1;
    u16    in_DX;
    u8     local_a[0x2];
    u8     local_8[0x2];
    u8     local_6[0x2];
    u8     local_4[0x2];
    u16  uVar3;
    u16  u_var2;

    u_var2 = param_2;
    uVar3 = (param_2 >> 0x10);
    read_file_1008_7cfe(u_var2, uVar3, 0xb, SEG_1008, param_3);
    if(param_4 != 0x0)
    {
        if(0x1 < globals->PTR_LOOP_1050_0312)
        {
        LAB_1020_a6dc:
            pass1_1020_b97e(param_3, param_4, in_DX, param_1, (param_1 >> 0x10), 0x0);
            return 0x1;
        }
        BVar1 = read_file_1008_7dee(u_var2, uVar3, local_4, 0x0, param_3, 0x2, SEG_1008);
        if(BVar1 != 0x0)
        {
            BVar1 = read_file_1008_7dee(u_var2, uVar3, local_8, 0x0, param_3, 0x2, SEG_1008);
            if(BVar1 != 0x0)
            {
                BVar1 = read_file_1008_7dee(u_var2, uVar3, local_6, 0x0, param_3, 0x2, SEG_1008);
                if(BVar1 != 0x0)
                {
                    param_4 = read_file_1008_7dee(u_var2, uVar3, local_a, 0x0, param_3, 0x2, SEG_1008);
                    if(param_4 != 0x0)
                        goto LAB_1020_a6dc;
                }
            }
        }
        globals->dat_1050_0310 = 0x6d2;
    }
    return 0x0;
}

void  pass1_1020_2488(u32 param_1, u16 param_2, u16 param_3)

{
    u32 uVar1;
    u16        in_dlg_id_5;
    u16        u_var2;
    i16        iVar3;
    u16        uVar4;
    i16        iStack12;
    SEGPTR     SStack10;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    find_n_load_rsrc_1010_4e9e(*(iVar3 + 0x6), SEG_1010);
    if((param_3 | param_2) != 0x0)
    {
        SStack10 = param_2;
        for(iStack12 = 0x0; iStack12 < 0x9; iStack12 = iStack12 + 0x1)
        {
            uVar1       = (iVar3 + 0x6);
            in_dlg_id_5 = pass1_1010_4f20(uVar1, (uVar1 >> 0x10), iStack12);
            uVar1       = (iVar3 + 0xa);
            set_win_tet_1020_1d2a(uVar1, (uVar1 >> 0x10), SStack10, param_3, in_dlg_id_5, SEG_1010);
            u_var2    = str_op_1000_3da4(str_var1(param_3, SStack10));
            SStack10 = SStack10 + u_var2 + 0x1;
        }
    }
    return;
}

void  pass1_1018_6630(u32 param_1, u16 param_2, u16 param_3)

{
    u32 uVar1;
    u16        dialog_id_5;
    u16        u_var2;
    i16        iVar3;
    u16        uVar4;
    i16        iStack12;
    SEGPTR     SStack10;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    find_n_load_rsrc_1010_4e9e(*(iVar3 + 0x6), SEG_1010);
    if((param_3 | param_2) != 0x0)
    {
        SStack10 = param_2;
        for(iStack12 = 0x0; iStack12 < 0x9; iStack12 = iStack12 + 0x1)
        {
            uVar1       = (iVar3 + 0x6);
            dialog_id_5 = pass1_1010_4f20(uVar1, (uVar1 >> 0x10), iStack12);
            uVar1       = (iVar3 + 0xa);
            set_window_text_1018_6066(uVar1, (uVar1 >> 0x10), SStack10, param_3, dialog_id_5, SEG_1010);
            u_var2    = str_op_1000_3da4(str_var1(param_3, SStack10));
            SStack10 = SStack10 + u_var2 + 0x1;
        }
    }
    return;
}

void  write_to_file_1010_ed58(u32 param_1, u32 param_2, u16 param_3)

{
    i16        *pi_var1;
    u16         u_var2;
    BOOL16      BVar3;
    i16         iVar4;
    u32 *puVar5;
    i16         iVar6;
    u16         uVar7;
    u16         uVar8;
    u16         uVar9;
    u32  local_22;
    u16         uStack30;
    u32         local_12[0x2];
    u32         local_a;
    i16         iStack4;

    BVar3 = write_to_file_1008_7cac(param_2, param_3);
    if(BVar3 != 0x0)
    {
        uVar7       = (param_1 >> 0x10);
        iVar6       = param_1;
        local_12[0] = *(iVar6 + 0x16);
        uVar8       = param_2;
        uVar9       = (param_2 >> 0x10);
        BVar3       = write_to_file_1008_7e1c(uVar8, uVar9, local_12, param_3, 0x4, SEG_1008);
        if(BVar3 != 0x0)
        {
            local_a = *(iVar6 + 0x1a);
            BVar3   = write_to_file_1008_7e1c(uVar8, uVar9, &local_a, param_3, 0x4, SEG_1008);
            if(BVar3 != 0x0)
            {
                local_a = *(iVar6 + 0x20);
                BVar3   = write_to_file_1008_7e1c(uVar8, uVar9, &local_a, param_3, 0x4, SEG_1008);
                if(BVar3 != 0x0)
                {
                    local_a = *(iVar6 + 0x24);
                    BVar3   = write_to_file_1008_7e1c(uVar8, uVar9, &local_a, param_3, 0x4, SEG_1008);
                    if(BVar3 != 0x0)
                    {
                        local_a = local_a & 0xffff0000 | (iVar6 + 0x30);
                        BVar3   = write_to_file_1008_7e1c(uVar8, uVar9, &local_a, param_3, 0x2, SEG_1008);
                        if(BVar3 != 0x0)
                        {
                            local_a = local_a & 0xffff0000 | (iVar6 + 0x32);
                            BVar3   = write_to_file_1008_7e1c(uVar8, uVar9, &local_a, param_3, 0x2, SEG_1008);
                            if(BVar3 != 0x0)
                            {
                                iStack4 = 0x0;
                                while(true)
                                {
                                    pi_var1 = (iVar6 + 0x30);
                                    if(*pi_var1 == iStack4 || *pi_var1 < iStack4)
                                    {
                                        return;
                                    }
                                    u_var2       = (iVar6 + 0x2e);
                                    puVar5      = ((iVar6 + 0x2c) + iStack4 * 0x6);
                                    local_22    = *puVar5;
                                    uStack30    = (puVar5 + 0x1);
                                    local_12[0] = local_12[0] & 0xffff0000 | ZEXT24(&local_22);
                                    iVar4       = write_to_file_1008_7b4c(param_2,
                                      str_var1(param_3, &local_22), SEG_1008, param_3);
                                    if(iVar4 == 0x0)
                                        break;
                                    iStack4 = iStack4 + 0x1;
                                }
                            }
                        }
                    }
                }
            }
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return;
}
