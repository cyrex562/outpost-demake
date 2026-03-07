
#include "file_ops_3.h"

#include "address_tables/function_tables.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_ops/struct_ops_3.h"
#include "struct_ops/struct_ops_4.h"
#include "structs/structs_2xx/structs_20x.h"
#include "sys_ops/sys_ops_12.h"

#include <stdbool.h>

void pass1_1018_0000(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5)

{
    i16   *pi_var1;
    i16    iVar2;
    u32    uVar3;
    u16    uVar4;
    i16    iVar5;
    BOOL16 BVar6;
    u16    uVar7;
    u16    uVar8;
    u8     local_20[0x10];
    i16    iStack16;

    // Segment:    4
    // Offset:     00024460
    // Length:     ee6a
    // Min Alloc:  ee6a
    // Flags:      0d50
    //     Code
    //     Moveable
    //     Preload
    //     Impure (Non-shareable)
    //
    uVar8 = param_2;
    uVar7 = (param_2 >> 0x10);
    read_file_1008_7cfe(uVar8, uVar7, 0x2, SEG_1008, param_5);
    if(param_3 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d4;
    }
    else
    {
        iVar5 = param_1;
        uVar4 = (param_1 >> 0x10);
        BVar6 = read_file_1008_7dee(uVar8, uVar7, iVar5 + 0x16, 0x0, uVar4, 0x4, SEG_1008);
        if((((BVar6 != 0x0) && (BVar6 = read_file_1008_7dee(uVar8, uVar7, iVar5 + 0x1a, 0x0, uVar4, 0x4, SEG_1008), BVar6 != 0x0)) && (BVar6 = read_file_1008_7dee(uVar8, uVar7, iVar5 + 0x20, 0x0, uVar4, 0x4, SEG_1008), BVar6 != 0x0))
           && (((BVar6 = read_file_1008_7dee(uVar8, uVar7, iVar5 + 0x24, 0x0, uVar4, 0x4, SEG_1008), BVar6 != 0x0 && (BVar6 = read_file_1008_7dee(uVar8, uVar7, iVar5 + 0x30, 0x0, uVar4, 0x2, SEG_1008), BVar6 != 0x0))
                && (BVar6 = read_file_1008_7dee(uVar8, uVar7, iVar5 + 0x32, 0x0, uVar4, 0x2, SEG_1008), BVar6 != 0x0))))
        {
            if((iVar5 + 0x30) != 0x0)
            {
                iVar2 = (iVar5 + 0x32);
                if(globals->_PTR_LOOP_1050_5f2c == 0x0)
                {
                    globals->dat_1050_5f2c      = mem_op_1000_160a(param_4, SEG_1000);
                    globals->dat_1050_5f2e      = param_4;
                }
                else
                {
                }
                uVar7          = fn_ptr_op_1000_1708(iVar2 * 0x6, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
                (iVar5 + 0x2c) = uVar7;
                (iVar5 + 0x2e) = globals->dat_1050_5f2e;
                pass1_1008_3e38(str_var1(param_5, local_20));
                for(iStack16 = 0x0; pi_var1 = (iVar5 + 0x30), *pi_var1 != iStack16 && iStack16 <= *pi_var1; iStack16 = iStack16 + 0x1)
                {
                    BVar6 = read_file_1008_7bc8(param_2, str_var1(param_5, local_20), SEG_1008, param_5);
                    if(BVar6 == 0x0)
                    {
                        globals->dat_1050_0310 = 0x6d0;
                        return;
                    }
                    uVar3 = *(iVar5 + 0x2c);
                    pass1_1008_3f62((uVar3 & 0xffff0000 | (uVar3 + iStack16 * 0x6)),
                                    str_var1(param_5, local_20));
                }
            }
            return;
        }
        globals->dat_1050_0310 = 0x6d2;
    }
    return;
}


void pass1_1010_89f0(u16 param_1, u16 param_2, u16 param_3, u32 param_4, HINSTANCE16 param_5, u16 param_6)

{
    u16        uVar1;
    u16        u_var2;
    u16        uVar3;
    u8        *puVar4;
    u8        *puVar5;
    i16        iVar6;
    u32        uVar7;
    u32 uStack22;
    u16        uStack8;

    uVar3 = *(param_1 + 0x67c);
    uVar1 = *(param_1 + 0x67e);
    if((uVar1 | uVar3) != 0x0)
    {
        pass1_1008_64a2(str_var1(uVar1, uVar3));
        param_5 = SEG_1000;
        fn_ptr_1000_17ce((Struct18 *)str_var1(uVar1, uVar3), SEG_1000);
    }
    uVar7  = set_err_mode_1010_8b14(
      str_var1(param_2, param_1), *((param_1 + 0xe82) * 0x4 + 0x24be), param_6);
    puVar4 = (uVar7 >> 0x10);
    uVar3  = uVar7;
    iVar6  = (param_1 + 0xe82) * 0x4;
    if((*(iVar6 + 0x24be) == uVar3) && ((iVar6 + 0x24c0) == puVar4))
    {
        msg_box_op_1010_8bb4(param_1, param_2, uVar7, param_5, param_6);
    }
    mem_op_1000_179c(0x8, puVar4, 0);
    puVar5 = (puVar4 | uVar3);
    if(puVar5 == 0x0)
    {
        uVar3  = 0x0;
        puVar5 = 0x0;
    }
    else
    {
        file_1008_6414(CONCAT13((puVar4 >> 0x8), CONCAT12(puVar4, uVar3)), uVar7, param_6, puVar5);
    }
    *(param_1 + 0x67c) = uVar3;
    (param_1 + 0x67e)  = puVar5;
    (param_1 + 0x680)  = 0x0;
    if((*(param_1 + 0x67e) | *(param_1 + 0x67c)) != 0x0)
    {
        for(uStack8 = 0x1; uStack8 < 0xa; uStack8 = uStack8 + 0x1)
        {
            iVar6 = uStack8 * 0xa;
            u_var2 = (iVar6 + 0x2558);
            uVar3 = uStack8;
            pass1_1008_64c8((param_1 + 0x67c), CONCAT13((u_var2 >> 0x8), CONCAT12(u_var2, (iVar6 + 0x255a))), (iVar6 + 0x2556), uStack8, puVar5);
            uStack22 = str_var1(puVar5, uVar3);
            pass1_1010_86de(param_1, param_2, (u8)param_3, str_var1(puVar5, uVar3));
            (uStack8 * 0x4 + param_4) = uStack22;
        }
    }
    return;
}

void write_to_file_1010_6372(Struct729 *param_1, u32 param_2, u16 param_3)

{
    BOOL16       BVar1;
//    Struct729 *iVar2;
//    u16          u_var2;
    u16          uVar3;
    u16          uVar4;
    u32   local_10[0x2];
    u32   local_8;

    BVar1 = write_to_file_1008_7cac(param_2, param_3);
    if(BVar1 != 0x0)
    {
//        u_var2       = (param_1 >> 0x10);
//        iVar2       = (Struct729 *)param_1;
        local_10[0] = param_1->field_0xa;
        uVar3       = param_2;
        uVar4       = (param_2 >> 0x10);
        BVar1       = write_to_file_1008_7e1c(uVar3, uVar4, local_10, param_3, 0x4, SEG_1008);
        if(BVar1 != 0x0)
        {
            local_8 = param_1->field_0xe;
            BVar1   = write_to_file_1008_7e1c(uVar3, uVar4, &local_8, param_3, 0x4, SEG_1008);
            if(BVar1 != 0x0)
            {
                local_8 = param_1->field_0x12;
                BVar1   = write_to_file_1008_7e1c(uVar3, uVar4, &local_8, param_3, 0x4, SEG_1008);
                if(BVar1 != 0x0)
                {
                    local_8 = param_1->field_0x16;
                    BVar1   = write_to_file_1008_7e1c(uVar3, uVar4, &local_8, param_3, 0x4, SEG_1008);
                    if(BVar1 != 0x0)
                    {
                        local_8 = param_1->field_0x1a_addr_offset;
                        BVar1   = write_to_file_1008_7e1c(uVar3, uVar4, &local_8, param_3, 0x4, SEG_1008);
                        if(BVar1 != 0x0)
                        {
                            local_8 = param_1->field_0x1e;
                            BVar1   = write_to_file_1008_7e1c(uVar3, uVar4, &local_8, param_3, 0x4, SEG_1008);
                            if(BVar1 != 0x0)
                            {
                                local_8 = param_1->field_0x22;
                                BVar1   = write_to_file_1008_7e1c(uVar3, uVar4, &local_8, param_3, 0x4, SEG_1008);
                                if(BVar1 != 0x0)
                                {
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
        globals->dat_1050_0310 = 0x6d0;
    }
}


void pass1_1010_648a(u32 param_1, u32 param_2, i16 param_3, u16 param_4)

{
    u16    uVar1;
    i16    iVar2;
    BOOL16 BVar3;
    u16    uVar4;
    u16    uVar5;

    uVar4 = param_2;
    uVar5 = (param_2 >> 0x10);
    read_file_1008_7cfe(uVar4, uVar5, 0x7, SEG_1008, param_4);
    if(param_3 != 0x0)
    {
        iVar2 = param_1;
        uVar1 = (param_1 >> 0x10);
        BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0xa, 0x0, uVar1, 0x4, SEG_1008);
        if(BVar3 != 0x0)
        {
            BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0xe, 0x0, uVar1, 0x4, SEG_1008);
            if(BVar3 != 0x0)
            {
                BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0x12, 0x0, uVar1, 0x4, SEG_1008);
                if(BVar3 != 0x0)
                {
                    BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0x16, 0x0, uVar1, 0x4, SEG_1008);
                    if(BVar3 != 0x0)
                    {
                        BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0x1a, 0x0, uVar1, 0x4, SEG_1008);
                        if(BVar3 != 0x0)
                        {
                            BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0x1e, 0x0, uVar1, 0x4, SEG_1008);
                            if(BVar3 != 0x0)
                            {
                                BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0x22, 0x0, uVar1, 0x4, SEG_1008);
                                if(BVar3 != 0x0)
                                {
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
        globals->dat_1050_0310 = 0x6d2;
    }
    return;
}

void write_to_file_1010_6846(u32 param_1, u32 param_2, u16 param_3)

{
    u16    uVar1;
    BOOL16 BVar2;
    i16    iVar3;
    u16    uVar4;
    u16    uVar5;
    u16    local_c[0x5];

    BVar2 = write_to_file_1008_7cac(param_2, param_3);
    if(BVar2 != 0x0)
    {
        iVar3 = param_1;
        uVar1 = (param_1 >> 0x10);
        uVar4 = param_2;
        uVar5 = (param_2 >> 0x10);
        BVar2 = write_to_file_1008_7e1c(uVar4, uVar5, iVar3 + 0xa, uVar1, 0x114, SEG_1008);
        if(BVar2 != 0x0)
        {
            BVar2 = write_to_file_1008_7e1c(uVar4, uVar5, iVar3 + 0x11e, uVar1, 0x2a, SEG_1008);
            if(BVar2 != 0x0)
            {
                local_c[0] = (iVar3 + 0x148);
                BVar2      = write_to_file_1008_7e1c(uVar4, uVar5, local_c, param_3, 0x2, SEG_1008);
                if(BVar2 != 0x0)
                {
                    return;
                }
            }
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return;
}


void pass1_1010_68c6(Struct248 *param_1, u32 param_2, u16 param_3, u8 *param_4, u16 param_5)

{
//    Struct248 *iVar2;
    BOOL16       BVar1;
    i16          iVar3;
    u16          uVar4;
    u16          uVar5;
    u8          *puVar6;
//    u16          uVar7;
    u16          uVar8;
    SEGPTR       SVar9;
    u16          uVar10;
    Struct18  *paStack18;
    Struct18  *paStack10;
    i16          local_6;
    u16          uStack4;

    uVar8  = param_2;
    uVar10 = (param_2 >> 0x10);
    read_file_1008_7cfe(uVar8, uVar10, 0x3, SEG_1008, param_5);
    if(param_3 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d4;
        return;
    }
//    iVar2 = (Struct248 *)param_1;
//    uVar7 = (param_1 >> 0x10);
    if(globals->dat_1050_0312 < 0x2)
    {
        uVar4 = 0x102;
        SVar9 = 0x102;
        mem_op_1000_179c(0x102, param_4, 0);
        paStack10 = (Struct18 *)str_var1(param_4, param_3);
        puVar6    = param_4;
        BVar1     = read_file_1008_7dee(uVar8, uVar10, param_3, uVar4, param_4, SVar9, SEG_1008);
        paStack18 = paStack10;
        if(BVar1 == 0x0)
            goto LAB_1010_692c;
        uStack4 = 0x1;
        do
        {
            iVar3                             = switch_1008_73ea(uVar8, uVar10, uStack4);
            (&param_1->field_0xa + iVar3 * 0x2) = (uStack4 * 0x2 + param_3);
            uStack4                           = uStack4 + 0x1;
        } while(uStack4 < 0x81);
        fn_ptr_1000_17ce(paStack10, SEG_1000);
        uVar4   = paStack10;
        param_4 = puVar6;
    }
    else
    {
        uVar4 = read_file_1008_7dee(uVar8, uVar10, &param_1->field_0xa, 0x0, uVar7, 0x114, SEG_1008);
        if(uVar4 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d2;
            return;
        }
    }
    if(globals->dat_1050_0312 < 0x2)
    {
        uVar5 = 0x2a;
        SVar9 = 0x2a;
        mem_op_1000_179c(0x2a, param_4, 0);
        paStack18 = (Struct18 *)str_var1(param_4, uVar4);
        BVar1     = read_file_1008_7dee(uVar8, uVar10, uVar4, uVar5, param_4, SVar9, SEG_1008);
        if(BVar1 == 0x0)
        {
        LAB_1010_692c:
            globals->dat_1050_0310 = 0x6d2;
            fn_ptr_1000_17ce((Struct18 *)(paStack18 & 0xffff | ZEXT24(param_4) << 0x10), SEG_1000);
            return;
        }
        uStack4 = 0x0;
        do
        {
            uVar5                               = switch_1008_72bc(uVar8, uVar10, uStack4);
            (&param_1->field_0x11e + uVar5 * 0x2) = (uStack4 * 0x2 + uVar4);
            uStack4                             = uStack4 + 0x1;
        } while(uStack4 < 0x15);
        fn_ptr_1000_17ce(paStack18, SEG_1000);
    }
    else
    {
        BVar1 = read_file_1008_7dee(uVar8, uVar10, &param_1->field_0x11e, 0x0, uVar7, 0x2a, SEG_1008);
        if(BVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d2;
            return;
        }
    }
    BVar1 = read_file_1008_7dee(uVar8, uVar10, &local_6, 0x0, param_5, 0x2, SEG_1008);
    if(BVar1 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d2;
        return;
    }
    BVar1              = switch_1008_73ea(uVar8, uVar10, local_6);
    param_1->field_0x148 = BVar1;
    return;
}

u16 pass1_1010_5dc6(u32 param_1, u32 param_2, u16 param_3)

{
    BOOL16 BVar1;
    i16    iVar2;
    u16    uVar3;
    u16    uVar4;
    u8    *local_c[0x3];
    u16    local_6[0x2];

    BVar1 = write_to_file_1008_7cac(param_2, param_3);
    if(BVar1 != 0x0)
    {
        uVar3 = (param_1 >> 0x10);
        iVar2 = param_1;
        BVar1 = pass1_1008_7c2a(param_2, (iVar2 + 0x68), SEG_1008);
        if(BVar1 != 0x0)
        {
            BVar1 = pass1_1008_7c2a(param_2, (iVar2 + 0x6c), SEG_1008);
            if(BVar1 != 0x0)
            {
                local_c[0] = globals->PTR_LOOP_1050_13ae;
                uVar4      = (param_2 >> 0x10);
                BVar1      = write_to_file_1008_7e1c(param_2, uVar4, local_c, param_3, 0x2, SEG_1008);
                if(BVar1 != 0x0)
                {
                    local_6[0] = (iVar2 + 0x82);
                    BVar1      = write_to_file_1008_7e1c(param_2, uVar4, local_6, param_3, 0x2, SEG_1008);
                    if(BVar1 != 0x0)
                    {
                        return 0x1;
                    }
                }
            }
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return 0x0;
}


void pass1_1010_5e56(u32 param_1, u32 param_2, i16 param_3, u16 param_4, u16 param_5)

{
    u8    *puVar1;
    u16    u_var2;
    BOOL16 BVar3;
    i16    iVar4;
    u16    uVar5;
    u16    uVar6;
    u16    uVar7;
    u8    *local_404;
    u8     local_402[0x400];

    uVar6 = param_2;
    uVar7 = (param_2 >> 0x10);
    read_file_1008_7cfe(uVar6, uVar7, 0x4, SEG_1008, param_5);
    if(param_3 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d4;
    }
    else
    {
        puVar1 = local_402;
        read_file_1008_7c6e(uVar6, uVar7, str_var1(param_5, puVar1), SEG_1008);
        if(puVar1 != 0x0)
        {
            u_var2          = str_op_1008_60e8(str_var1(param_5, local_402));
            uVar5          = (param_1 >> 0x10);
            iVar4          = param_1;
            (iVar4 + 0x68) = u_var2;
            (iVar4 + 0x6a) = param_4;
            puVar1         = local_402;
            read_file_1008_7c6e(uVar6, uVar7, str_var1(param_5, puVar1), SEG_1008);
            if(puVar1 != 0x0)
            {
                u_var2          = str_op_1008_60e8(str_var1(param_5, local_402));
                (iVar4 + 0x6c) = u_var2;
                (iVar4 + 0x6e) = param_4;
                BVar3          = read_file_1008_7dee(uVar6, uVar7, &local_404, 0x0, param_5, 0x2, SEG_1008);
                if(BVar3 != 0x0)
                {
                    globals->PTR_LOOP_1050_13ae = local_404;
                    if(globals->dat_1050_0312 < 0x2)
                    {
                        return;
                    }
                    BVar3 = read_file_1008_7dee(uVar6, uVar7, iVar4 + 0x82, 0x0, uVar5, 0x2, SEG_1008);
                    if(BVar3 != 0x0)
                    {
                        return;
                    }
                }
            }
        }
        globals->dat_1050_0310 = 0x6d2;
    }
    return;
}

void find_n_load_rsrc_1010_4e9e(u32 param_1, HGLOBAL16 param_2)

{
    BOOL16    BVar1;
    HRSRC16   h_rsrc;
    i16       iVar2;
    u16       uVar3;
    HGLOBAL16 HVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0x20) != 0x0)
    {
        HVar3 = param_2;
        if((iVar2 + 0x2a) != 0x0)
        {
            HVar3 = (HGLOBAL16)LAST_SEGMENT;
            BVar1 = GlobalUnlock16(param_2);
            if(BVar1 == 0x0)
            {
                HVar3 = (HGLOBAL16)LAST_SEGMENT;
                FreeResource16((HGLOBAL16)LAST_SEGMENT);
            }
        }
        h_rsrc                       = FindResource16(HVar3, &PTR_LOOP_1050_000a, 0x0);
        HVar3                        = LoadResource16((HMODULE16)LAST_SEGMENT, h_rsrc);
        *(HGLOBAL16 *)(iVar2 + 0x2a) = HVar3;
        if(HVar3 != 0x0)
        {
            WIN16_LockResource16((HGLOBAL16)LAST_SEGMENT);
            return;
        }
    }
    return;
}

void pass1_1010_404a(u32 param_1, u32 param_2, i16 param_3, u16 param_4)

{
    u16    uVar1;
    i16    iVar2;
    BOOL16 BVar3;
    u16    uVar4;
    u16    uVar5;
    u16    local_4;

    uVar4 = param_2;
    uVar5 = (param_2 >> 0x10);
    read_file_1008_7cfe(uVar4, uVar5, 0x5, SEG_1008, param_4);
    if(param_3 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d4;
    }
    else
    {
        iVar2 = param_1;
        uVar1 = (param_1 >> 0x10);
        BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0x24, 0x0, uVar1, 0x2, SEG_1008);
        if(BVar3 != 0x0)
        {
            BVar3 = read_file_1008_7dee(uVar4, uVar5, &local_4, 0x0, param_4, 0x2, SEG_1008);
            if(BVar3 != 0x0)
            {
                BVar3 = read_file_1008_7dee(uVar4, uVar5, iVar2 + 0x7e, 0x0, uVar1, 0x2, SEG_1008);
                if(BVar3 != 0x0)
                {
                    (iVar2 + 0x6a) = local_4;
                    return;
                }
            }
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return;
}

void pass1_1010_0ad2(u32 param_1, u32 param_2, u16 param_3)

{
    u32 uVar1;
    BOOL16     BVar2;
    u8        *puVar3;
    u16        extraout_DX;
    i16        iVar4;
    u16        uVar5;
    u16        uVar6;
    u16        uVar7;
    u32 local_2a[0x2];
    u16        local_22[0x2];
    u16        local_1e[0x3];
    u16        local_18[0x3];
    u32 uStack18;
    u8         local_e[0x8];
    u16        u_stack6;
    i16        iStack4;

    BVar2 = write_to_file_1008_7cac(param_2, param_3);
    if(BVar2 == 0x0)
    {
        return;
    }
    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0xa) == 0x0)
    {
        u_stack6 = 0x0;
    }
    else
    {
        uVar1   = (iVar4 + 0xa);
        u_stack6 = (uVar1 + 0x8);
    }
    local_1e[0] = u_stack6;
    uVar6       = param_2;
    uVar7       = (param_2 >> 0x10);
    BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_1e, param_3, 0x2, SEG_1008);
    if(BVar2 != 0x0)
    {
        pass1_1008_5784(str_var1(param_3, local_e), *(iVar4 + 0xa));
        do
        {
            puVar3 = local_e;
            pass1_1008_5b12(puVar3, param_3);
            uStack18 = str_var1(extraout_DX, puVar3);
            if((extraout_DX | puVar3) == 0x0)
            {
                local_22[0] = (iVar4 + 0xe);
                BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_22, param_3, 0x2, SEG_1008);
                if(BVar2 == 0x0)
                {
                    globals->dat_1050_0310 = 0x6d0;
                    return;
                }
                local_22[0] = (iVar4 + 0x10);
                BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_22, param_3, 0x2, SEG_1008);
                if(BVar2 == 0x0)
                {
                    globals->dat_1050_0310 = 0x6d0;
                    return;
                }
                if((iVar4 + 0x18) != 0x0)
                {
                    DAT_1050_0e28      = (iVar4 + 0x12);
                    globals->PTR_LOOP_1050_0e30 = (iVar4 + 0x14);
                    globals->PTR_LOOP_1050_0ea8 = (iVar4 + 0x16);
                }
                iStack4 = 0x0;
                while(true)
                {
                    if(0x9 < iStack4)
                    {
                        iStack4 = 0x0;
                        while(true)
                        {
                            if(0x2 < iStack4)
                            {
                                if((iVar4 + 0x18) != 0x0)
                                {
                                    DAT_1050_0e28      = 0x0;
                                    globals->PTR_LOOP_1050_0e30 = 0x0;
                                    globals->PTR_LOOP_1050_0ea8 = 0x0;
                                }
                                return;
                            }
                            local_1e[0] = (iStack4 * 0x8 + 0xea8);
                            BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_1e, param_3, 0x2, SEG_1008);
                            if(BVar2 == 0x0)
                                break;
                            iStack4 = iStack4 + 0x1;
                        }
                        globals->dat_1050_0310 = 0x6d0;
                        return;
                    }
                    local_1e[0] = (iStack4 * 0x8 + 0xe28);
                    BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_1e, param_3, 0x2, SEG_1008);
                    if(BVar2 == 0x0)
                        break;
                    iStack4 = iStack4 + 0x1;
                }
                globals->dat_1050_0310 = 0x6d0;
                return;
            }
            local_18[0] = (puVar3 + 0x4);
            BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_18, param_3, 0x2, SEG_1008);
            if(BVar2 == 0x0)
            {
                globals->dat_1050_0310 = 0x6d0;
                return;
            }
            local_2a[0] = (uStack18 + 0x6);
            BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_2a, param_3, 0x4, SEG_1008);
        } while(BVar2 != 0x0);
    }
    globals->dat_1050_0310 = 0x6d0;
    return;
}

void file_1010_0c7c(Globals   *globals,
                    Struct228 *param_1,
                    u32        param_2,
                    i16        param_3,
                    u8        *param_4,
                    u16        param_5)

{
    u32  *puVar1;
    void **ppcVar2;
    BOOL16       BVar3;
    Struct229 *uVar4;
//    u16          uVar5;
    u8          *extraout_DX;
//    Struct228 *iVar6;
    u16          uVar6;
    u16          uVar7;
    u16          uVar8;
    u16          local_2a[0x2];
    u16          uStack38;
    u32  *puStack26;
    u32  *puStack22;
    u16          local_12[0x5];
    Struct229 *paStack8;
    Struct229 *local_6;
    u16          uStack4;

    uVar7 = param_2;
    uVar8 = (param_2 >> 0x10);
    read_file_1008_7cfe(uVar7, uVar8, 0x6, SEG_1008, param_5);
    if(param_3 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d4;
    }
    else
    {
        BVar3 = read_file_1008_7dee(uVar7, uVar8, &local_6, 0x0, param_5, 0x2, SEG_1008);
        if(BVar3 != 0x0)
        {
            paStack8 = (Struct229 *)0x0;
            while(true)
            {
//                iVar6 = (Struct228 *)param_1;
//                uVar5 = (param_1 >> 0x10);
                if(local_6 <= paStack8)
                    break;
                uVar4 = local_6;
                mem_op_1000_179c(0xa, param_4, 0);
                puStack26 = str_var1(param_4, uVar4);
                if((param_4 | uVar4) == 0x0)
                {
                    puStack22 = 0x0;
                }
                else
                {
                    puStack26        = addr_table_1008_380a[36];//0x389a;
                    uVar4->field_0x2 = SEG_1008;
                    puStack26        = addr_table_1010_0e98[4]; //0x0ea8;
                    uVar4->field_0x2 = SEG_1010;
                    puStack22        = puStack26;
                }
                BVar3 = read_file_1008_7dee(uVar7, uVar8, local_12, 0x0, param_5, 0x2, SEG_1008);
                if((BVar3 == 0x0) || (BVar3 = read_file_1008_7dee(uVar7, uVar8, puStack22 + 0x6, 0x0, (puStack22 >> 0x10), 0x4, SEG_1008), BVar3 == 0x0))
                {
                    puStack26 = puStack22;
                    if(puStack22 != 0x0)
                    {
                        ppcVar2 = *puStack22;
                        (**ppcVar2)(SEG_1008, puStack22, (puStack22 >> 0x10), 0x1);
                    }
                    goto LAB_1010_0cb1;
                }
                uVar6             = (puStack22 >> 0x10);
                (puStack22 + 0x4) = local_12[0];
                puVar1            = param_1->field_0xa;
                ppcVar2           = (*param_1->field_0xa + 0x8);
                (**ppcVar2)(0x8, puVar1, (puVar1 >> 0x10), puStack22, uVar6);
                paStack8 = (Struct229 *)&paStack8->field_0x1;
                param_4  = extraout_DX;
            }
            BVar3 = read_file_1008_7dee(uVar7, uVar8, &param_1->field_0xe, 0x0, uVar5, 0x2, SEG_1008);
            if((BVar3 != 0x0) && (BVar3 = read_file_1008_7dee(uVar7, uVar8, &param_1->field_0x10, 0x0, uVar5, 0x2, SEG_1008), BVar3 != 0x0))
            {
                for(uStack4 = 0x0; uStack4 < 0xa; uStack4 = uStack4 + 0x1)
                {
                    BVar3 = read_file_1008_7dee(uVar7, uVar8, local_2a, 0x0, param_5, 0x2, SEG_1008);
                    if(BVar3 == 0x0)
                        goto LAB_1010_0cb1;
                    uVar5 = uStack4;
                    if(globals->dat_1050_0312 < 0x2)
                    {
                        uVar5 = pass1_1008_738c(uVar7, uVar8, uStack4);
                    }
                    (uVar5 * 0x8 + 0xe28) = local_2a[0];
                    uStack38              = uVar5;
                }
                if(0x2 < globals->dat_1050_0312)
                {
                    uStack4 = 0x0;
                    do
                    {
                        BVar3 = read_file_1008_7dee(uVar7, uVar8, local_2a, 0x0, param_5, 0x2, SEG_1008);
                        if(BVar3 == 0x0)
                            goto LAB_1010_0cb1;
                        (uStack4 * 0x8 + 0xea8) = local_2a[0];
                        uStack4                 = uStack4 + 0x1;
                    } while(uStack4 < 0x3);
                }
                return;
            }
        }
    LAB_1010_0cb1:
        globals->dat_1050_0310 = 0x6d2;
    }
}

void pass1_1008_e5da(u32 param_1, u32 param_2, HFILE16 param_3, u16 param_4)

{
    u32 uVar1;
    BOOL16     BVar2;
    u8        *puVar3;
    u16        extraout_DX;
    i16        iVar4;
    u16        uVar5;
    u16        uVar6;
    u16        uVar7;
    u32 local_30[0x2];
    u32 local_28;
    u32 local_24[0x2];
    u16        local_1c[0x3];
    u16        local_16[0x3];
    u32 uStack16;
    u8         local_c[0x8];
    u16        uStack4;

    BVar2 = write_to_file_1008_7cac(param_2, param_4);
    if(BVar2 != 0x0)
    {
        uVar5 = (param_1 >> 0x10);
        iVar4 = param_1;
        if((iVar4 + 0xa) == 0x0)
        {
            uStack4 = 0x0;
        }
        else
        {
            uVar1   = (iVar4 + 0xa);
            uStack4 = (uVar1 + 0x8);
        }
        local_1c[0] = uStack4;
        uVar6       = param_2;
        uVar7       = (param_2 >> 0x10);
        BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_1c, param_4, 0x2, param_3);
        if(BVar2 != 0x0)
        {
            pass1_1008_5784(str_var1(param_4, local_c), *(iVar4 + 0xa));
            do
            {
                puVar3 = local_c;
                pass1_1008_5b12(puVar3, param_4);
                uStack16 = str_var1(extraout_DX, puVar3);
                if((extraout_DX | puVar3) == 0x0)
                {
                    return;
                }
                local_24[0] = (puVar3 + 0x4);
                BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_24, param_4, 0x4, param_3);
                if(BVar2 == 0x0)
                    break;
                local_28 = (uStack16 + 0x8);
                BVar2    = write_to_file_1008_7e1c(uVar6, uVar7, &local_28, param_4, 0x4, param_3);
                if(BVar2 == 0x0)
                    break;
                local_16[0] = (uStack16 + 0xc);
                BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_16, param_4, 0x2, param_3);
                if(BVar2 == 0x0)
                    break;
                local_30[0] = (uStack16 + 0xe);
                BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_30, param_4, 0x4, param_3);
                if(BVar2 == 0x0)
                    break;
                local_16[0] = (uStack16 + 0x12);
                BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_16, param_4, 0x2, param_3);
            } while(BVar2 != 0x0);
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return;
}


void file_1008_e70e(u32 param_1, u32 param_2, i16 param_3, u8 *param_4, u16 param_5, u16 param_6)

{
    u32  uVar1;
    void **ppcVar2;
    BOOL16      BVar3;
    u16         uVar4;
    u8         *extraout_DX;
    u16         uVar5;
    u16         uVar6;
    u16         uVar7;
    u16         uVar8;
    u16         uVar9;
    u16         local_12[0x2];
    u32 *puStack14;
    u16         uStack10;
    u16         local_4;

    if(globals->dat_1050_0312 < 0x2)
    {
        return;
    }
    uVar7 = param_2;
    uVar8 = (param_2 >> 0x10);
    read_file_1008_7cfe(uVar7, uVar8, 0x14, param_5, param_6);
    if(param_3 != 0x0)
    {
        BVar3 = read_file_1008_7dee(uVar7, uVar8, &local_4, 0x0, param_6, 0x2, param_5);
        if(BVar3 != 0x0)
        {
            if(local_4 == 0x0)
            {
                return;
            }
            uStack10 = 0x0;
            while(true)
            {
                if(local_4 <= uStack10)
                {
                    return;
                }
                uVar9 = 0x14;
                uVar4 = local_4;
                mem_op_1000_179c(0x14, param_4, 0);
                uVar5 = param_4 | uVar4;
                if(uVar5 == 0x0)
                {
                    uVar4 = 0x0;
                    uVar5 = 0x0;
                }
                else
                {
                    struct_1008_dcdc(str_var1(param_4, uVar4));
                }
                puStack14 = str_var1(uVar5, uVar4);
                BVar3     = read_file_1008_7dee(uVar7, uVar8, uVar4 + 0x4, 0x0, uVar5, 0x4, SEG_1000);
                if((((BVar3 == 0x0) || (BVar3 = read_file_1008_7dee(uVar7, uVar8, puStack14 + 0x8, 0x0, (puStack14 >> 0x10), 0x4, SEG_1000), BVar3 == 0x0))
                    || (BVar3 = read_file_1008_7dee(uVar7, uVar8, local_12, 0x0, param_6, 0x2, SEG_1000), BVar3 == 0x0))
                   || ((BVar3 = read_file_1008_7dee(uVar7, uVar8, puStack14 + 0xe, 0x0, (puStack14 >> 0x10), 0x4, SEG_1000),
                        BVar3 == 0x0 || (BVar3 = read_file_1008_7dee(uVar7, uVar8, puStack14 + 0x12, 0x0, (puStack14 >> 0x10), 0x2, SEG_1000), BVar3 == 0x0))))
                    break;
                uVar9             = (puStack14 >> 0x10);
                (puStack14 + 0xc) = local_12[0];
                uVar6             = (param_1 >> 0x10);
                uVar1             = (param_1 + 0xa);
                ppcVar2           = ((param_1 + 0xa) + 0x4);
                (**ppcVar2)(0x0, uVar1, (uVar1 >> 0x10), puStack14, uVar9);
                uStack10 = uStack10 + 0x1;
                param_4  = extraout_DX;
            }
            if(puStack14 != 0x0)
            {
                ppcVar2 = *puStack14;
                (**ppcVar2)(SEG_1000, puStack14, (puStack14 >> 0x10), 0x1, uVar9, puStack14);
            }
        }
        globals->dat_1050_0310 = 0x6d2;
    }
    return;
}

void pass1_1008_c98e(u32 param_1, u32 param_2, HFILE16 param_3, u16 param_4)

{
    BOOL16     BVar1;
    u32 local_10[0x3];

    BVar1 = write_to_file_1008_7cac(param_2, param_4);
    if(BVar1 != 0x0)
    {
        local_10[0] = (param_1 + 0xe);
        BVar1       = write_to_file_1008_7e1c(param_2, (param_2 >> 0x10), local_10, param_4, 0x4, param_3);
        if(BVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d0;
            return;
        }
    }
    return;
}


void pass1_1008_c9d4(u32 param_1, u32 param_2, i16 param_3, u16 param_4, longlong param_5)

{
    BOOL16  BVar1;
    u16 unaff_SS;
    u16     u_var2;

    if(0x1 < globals->PTR_LOOP_1050_0312)
    {
        u_var2 = (param_2 >> 0x10);
        read_file_1008_7cfe(param_2, u_var2, 0x15, param_4, unaff_SS);
        if(param_3 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d4;
            return;
        }
        BVar1 = read_file_1008_7dee(param_2, u_var2, param_1 + 0xe, 0x0, (param_1 >> 0x10), 0x4, param_4);
        if(BVar1 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d2;
            return;
        }
    }
    return;
}

void pass1_1008_ba38(u32 param_1, u32 param_2, HFILE16 param_3, u16 param_4)

{
    u32 uVar1;
    BOOL16     BVar2;
    u8        *puVar3;
    u16        extraout_DX;
    i16        iVar4;
    u16        uVar5;
    u16        uVar6;
    u16        uVar7;
    u32 local_2a[0x3];
    u16        local_1e[0x5];
    u8         local_14[0x8];
    u16        local_c;
    u32 uStack10;
    u16        local_6[0x2];

    BVar2 = write_to_file_1008_7cac(param_2, param_4);
    if(BVar2 != 0x0)
    {
        uVar5   = (param_1 >> 0x10);
        iVar4   = param_1;
        local_c = (iVar4 + 0x22);
        uVar6   = param_2;
        uVar7   = (param_2 >> 0x10);
        BVar2   = write_to_file_1008_7e1c(uVar6, uVar7, &local_c, param_4, 0x2, param_3);
        if(BVar2 != 0x0)
        {
            if((iVar4 + 0xa) == 0x0)
            {
                local_c = 0x0;
            }
            else
            {
                uVar1   = (iVar4 + 0xa);
                local_c = (uVar1 + 0x8);
            }
            local_1e[0] = local_c;
            BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_1e, param_4, 0x2, param_3);
            if(BVar2 != 0x0)
            {
                pass1_1008_5784(str_var1(param_4, local_14), *(iVar4 + 0xa));
                do
                {
                    puVar3 = local_14;
                    pass1_1008_5b12(puVar3, param_4);
                    uStack10 = str_var1(extraout_DX, puVar3);
                    if((extraout_DX | puVar3) == 0x0)
                    {
                        return;
                    }
                    BVar2 = pass1_1008_7c2a(param_2, (puVar3 + 0x4), param_3);
                    if(BVar2 == 0x0)
                        break;
                    local_6[0] = (uStack10 + 0x8);
                    BVar2      = write_to_file_1008_7e1c(uVar6, uVar7, local_6, param_4, 0x2, param_3);
                    if(BVar2 == 0x0)
                        break;
                    local_2a[0] = (uStack10 + 0xa);
                    BVar2       = write_to_file_1008_7e1c(uVar6, uVar7, local_2a, param_4, 0x4, param_3);
                    if(BVar2 == 0x0)
                        break;
                    local_6[0] = (uStack10 + 0xe);
                    BVar2      = write_to_file_1008_7e1c(uVar6, uVar7, local_6, param_4, 0x2, param_3);
                } while(BVar2 != 0x0);
            }
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return;
}


void file_1008_bb5e(Globals   *globals,
                    Struct199 *param_1,
                    u32        param_2,
                    i16        param_3,
                    u8        *param_4,
                    u16        param_5,
                    u16        param_6)

{
    void **ppcVar1;
//    u16          u_var2;
//    Struct199 *iVar3;
    BOOL16       BVar3;
    u16          uVar5;
    Struct200 *uVar4;
    u8          *puVar6;
    u16          uVar7;
    u8          *extraout_DX;
    u8          *puVar8;
    u16          uVar9;
    u16          uVar10;
    u8          *extraout_DX_00;
    u16          extraout_DX_01;
    u16          uVar11;
    u16          uVar12;
    u16          uVar13;
    u16          uVar14;
    Struct200 *paStack286;
    u32  *puStack284;
    u8           local_118[0x100];
    u16          local_18[0x2];
    u16          local_14[0x2];
    Struct200 *local_10[0x4];
    u32   local_8;

    if(globals->dat_1050_0312 < 0x2)
    {
        return;
    }
    uVar11 = param_2;
    uVar12 = (param_2 >> 0x10);
    read_file_1008_7cfe(uVar11, uVar12, 0x16, param_5, param_6);
    if(param_3 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d4;
    }
    else
    {
//        iVar3 = (Struct199 *)param_1;
        param_1 = (Struct199 *)&param_1->field_0x22;
//        u_var2 = (param_1 >> 0x10);
        BVar3 = read_file_1008_7dee(uVar11, uVar12, param_1, 0x0, u_var2, 0x2, param_5);
        if((BVar3 != 0x0) && (uVar5 = read_file_1008_7dee(uVar11, uVar12, local_10, 0x0, param_6, 0x2, param_5), uVar5 != 0x0))
        {
            if(local_10[0] == (Struct200 *)0x0)
            {
                return;
            }
            uVar14 = 0xc;
            mem_op_1000_179c(0xc, param_4, 0);
            if((param_4 | uVar5) == 0x0)
            {
                uVar5  = 0x0;
                puVar8 = 0x0;
            }
            else
            {
                set_struct_1008_574a(str_var1(param_4, uVar5));
                puVar8 = extraout_DX;
            }
            *&param_1->field_0xa        = uVar5;
            (&param_1->field_0xa + 0x2) = puVar8;
            paStack286                = (Struct200 *)0x0;
            while(true)
            {
                if(local_10[0] <= paStack286)
                {
                    return;
                }
                uVar13 = 0x12;
                uVar4 = local_10[0];
                mem_op_1000_179c(0x12, puVar8, 0);
                if((puVar8 | uVar4) == 0x0)
                {
                    uVar4 = (Struct200 *)0x0;
                    uVar9 = 0x0;
                }
                else
                {
                    set_stuct_1008_b0bc((Struct26 *)str_var1(puVar8, uVar4));
                    uVar9 = extraout_DX_01;
                }
                puStack284 = str_var1(uVar9, uVar4);
                puVar6     = local_118;
                uVar10     = uVar9;
                read_file_1008_7c6e(uVar11, uVar12, str_var1(param_6, puVar6), SEG_1000);
                if((((puVar6 == 0x0) || (BVar3 = read_file_1008_7dee(uVar11, uVar12, local_14, 0x0, param_6, 0x2, SEG_1000), BVar3 == 0x0)) || (BVar3 = read_file_1008_7dee(uVar11, uVar12, &local_8, 0x0, param_6, 0x4, SEG_1000), BVar3 == 0x0))
                   || (BVar3 = read_file_1008_7dee(uVar11, uVar12, local_18, 0x0, param_6, 0x2, SEG_1000), BVar3 == 0x0))
                    break;
                uVar7            = str_op_1008_60e8(str_var1(param_6, local_118));
                uVar4->field_0x4 = uVar7;
                uVar4->field_0x6 = uVar10;
                uVar4->field_0x8 = local_14[0];
                uVar4->field_0xa = local_8;
                uVar4->field_0xe = local_18[0];
                ppcVar1          = (*param_1->field_0xa + 0x8);
                (**ppcVar1)();
                paStack286 = (Struct200 *)&paStack286->field_0x1;
                puVar8     = extraout_DX_00;
            }
            if(puStack284 != 0x0)
            {
                ppcVar1 = *puStack284;
                (**ppcVar1)(SEG_1000, uVar4, uVar9, 0x1, uVar13, uVar14, puStack284);
            }
        }
        globals->dat_1050_0310 = 0x6d2;
    }
}

void file_1008_7548(u32 param_1, long *param_2, HFILE16 param_3, u16 param_4)

{
    void **ppcVar1;
    u16        u_var2;
    BOOL16     BVar3;
    u16        uVar4;
    u32        uVar5;
    u16        uVar6;
    u16        uVar7;
    u32 local_1c;
    u16        local_18[0x5];
    u32        uStack14;
    u32        uStack10;
    u32 local_6;

    local_6 = 0x0;
    uVar7   = param_1;
    u_var2   = (param_1 >> 0x10);
    BVar3   = read_file_1008_7dee(uVar7, u_var2, &local_6, 0x0, param_4, 0x4, param_3);
    if(BVar3 == 0x0)
    {
        return;
    }
    if(local_6 != 0x0)
    {
        uVar5 = local_6;
        if(local_6 < 0xc8)
        {
            local_6 = 0x0;
            uVar5         = 0xc8;
        }
        uVar4    = uVar5;
        uStack10 = uVar5 & 0xffff | ZEXT24(local_6) << 0x10;
        if(*param_2 == 0x0)
        {
            param_3 = SEG_1000;
            mem_op_1000_179c(0x1e, local_6, 0);
            uVar6 = local_6 | uVar4;
            if(uVar6 == 0x0)
            {
                *param_2 = 0x0;
            }
            else
            {
                param_3 = SEG_1020;
                struct_1020_c444(str_var1(local_6, uVar4), 0x64, uStack10);
                *param_2         = uVar4;
                *(param_2 + 0x2) = uVar6;
            }
        }
        ppcVar1 = (*param_2 + 0x24);
        (**ppcVar1)(param_3, *param_2);
        for(uStack14 = 0x0; uStack14 < local_6; uStack14 = uStack14 + 0x1)
        {
            BVar3 = read_file_1008_7dee(uVar7, u_var2, &local_1c, 0x0, param_4, 0x4, param_3);
            if((BVar3 == 0x0) || (BVar3 = read_file_1008_7dee(uVar7, u_var2, local_18, 0x0, param_4, 0x2, param_3), BVar3 == 0x0))
            {
                ppcVar1 = (*param_2 + 0x1c);
                (**ppcVar1)(param_3, *param_2, (*param_2 >> 0x10));
                return;
            }
            ppcVar1 = (*param_2 + 0x28);
            (**ppcVar1)(param_3, *param_2, (*param_2 >> 0x10), local_18[0], local_1c, (local_1c >> 0x10));
        }
        ppcVar1 = (*param_2 + 0x1c);
        (**ppcVar1)(param_3, *param_2, (*param_2 >> 0x10));
    }
    return;
}


void file_1008_76e4(u32 param_1, long *param_2, u16 param_3, u16 param_4, u16 param_5)

{
    void **ppcVar1;
    u16    u_var2;
    BOOL16 BVar3;
    u16    extraout_DX;
    u16    uVar4;
    u8     local_18[0xe];
    u32    uStack10;
    u32    local_6;

    local_6 = 0x0;
    uVar4   = (param_1 >> 0x10);
    u_var2   = read_file_1008_7dee(param_1, uVar4, &local_6, 0x0, param_4, 0x4, param_3);
    if(u_var2 == 0x0)
    {
        return;
    }
    if(local_6 != 0x0)
    {
        if(*param_2 == 0x0)
        {
            param_3 = SEG_1000;
            mem_op_1000_179c(0x18, param_5, 0);
            if((param_5 | u_var2) == 0x0)
            {
                *param_2 = 0x0;
            }
            else
            {
                param_3 = SEG_1030;
                struct_op_1030_1cd8(str_var1(param_5, u_var2), 0x5, local_6);
                *param_2        = u_var2;
                (param_2 + 0x2) = extraout_DX;
            }
        }
        ppcVar1 = (*param_2 + 0x14);
        (**ppcVar1)(param_3, *param_2, (*param_2 >> 0x10), local_6);
        for(uStack10 = 0x0; uStack10 < local_6; uStack10 = uStack10 + 0x1)
        {
            BVar3 = read_file_1008_7dee(param_1, uVar4, local_18, 0x0, param_4, 0x4, param_3);
            if(BVar3 == 0x0)
            {
                return;
            }
            ppcVar1 = (*param_2 + 0x18);
            (**ppcVar1)();
        }
        ppcVar1 = (*param_2 + 0x1c);
        (**ppcVar1)();
    }
    return;
}


u16 file_1008_77cc(u32 param_1, long *param_2, u8 *param_3, HFILE16 param_4, u16 param_5)

{
    u16        uVar1;
    BOOL16     BVar2;
    u16        uVar3;
    u16        unaff_SI;
    u16        unaff_DI;
    u16        uVar4;
    u16        uVar5;
    u16        local_14[0x2];
    u32 local_10[0x2];
    u16        u_stack6;
    u16        local_4;

    local_4 = 0x0;
    uVar4   = param_1;
    uVar5   = (param_1 >> 0x10);
    uVar1   = read_file_1008_7dee(uVar4, uVar5, &local_4, 0x0, param_5, 0x2, param_4);
    if(uVar1 == 0x0)
    {
        return 0x0;
    }
    if(local_4 != 0x0)
    {
        if(*param_2 == 0x0)
        {
            param_4 = SEG_1000;
            mem_op_1000_179c(0xa, param_3, 0);
            uVar3 = param_3 | uVar1;
            if(uVar3 == 0x0)
            {
                *param_2 = 0x0;
            }
            else
            {
                param_4 = SEG_1020;
                pass1_1020_ba3e((long *)str_var1(param_3, uVar1), 0x5, 0x5, unaff_DI, unaff_SI);
                *param_2         = uVar1;
                *(param_2 + 0x2) = uVar3;
            }
        }
        for(u_stack6 = 0x0; u_stack6 < local_4; u_stack6 = u_stack6 + 0x1)
        {
            BVar2 = read_file_1008_7dee(uVar4, uVar5, local_14, 0x0, param_5, 0x2, param_4);
            if(BVar2 == 0x0)
            {
                return 0x0;
            }
            BVar2 = read_file_1008_7dee(uVar4, uVar5, local_10, 0x0, param_5, 0x4, param_4);
            if(BVar2 == 0x0)
            {
                return 0x0;
            }
            param_4 = SEG_1020;
            pass1_1020_bb8a((long *)*param_2, local_10[0],
                            str_var1(local_14[0], (local_10[0] >> 0x10)), unaff_DI, param_5);
        }
    }
    return 0x1;
}


void  pass1_1008_7898(u32 param_1, u32 *param_2, u16 param_3, u16 param_4, HFILE16 param_5, u16 param_6)

{
    void **ppcVar1;
    BOOL16     BVar2;
    u16        extraout_DX;
    u16        uVar3;
    u16        uVar4;
    u16        uVar5;
    u16        local_26;
    u32 local_24[0x3];
    u32 local_18;
    u16        local_14[0x5];
    u32        uStack10;
    u32        u_stack6;

    if(param_2 == 0x0)
    {
        param_3 = 0x0;
        uVar3   = 0x0;
    }
    else
    {
        ppcVar1 = (*param_2 + 0x10);
        (**ppcVar1)();
        uVar3 = extraout_DX;
    }
    u_stack6  = str_var1(uVar3, param_3);
    local_18 = str_var1(uVar3, param_3);
    uVar4    = param_1;
    uVar5    = (param_1 >> 0x10);
    BVar2    = write_to_file_1008_7e1c(uVar4, uVar5, &local_18, param_6, 0x4, param_5);
    if(BVar2 != 0x0)
    {
        uStack10 = 0x0;
        while(true)
        {
            if(u_stack6 <= uStack10)
            {
                return;
            }
            pass1_1020_c4a8(param_2,
                            str_var1(param_6, local_14),
                            str_var1(param_6, &local_18), uStack10, param_4, param_6);
            local_24[0] = local_18;
            BVar2       = write_to_file_1008_7e1c(uVar4, uVar5, local_24, param_6, 0x4, SEG_1020);
            if(BVar2 == 0x0)
                break;
            local_26 = local_14[0];
            BVar2    = write_to_file_1008_7e1c(uVar4, uVar5, &local_26, param_6, 0x2, SEG_1020);
            if(BVar2 == 0x0)
            {
                globals->dat_1050_0310 = 0x6d0;
                return;
            }
            uStack10 = uStack10 + 0x1;
        }
    }
    globals->dat_1050_0310 = 0x6d0;
    return;
}


u16  write_to_file_1008_7954(u32 param_1, u32 *param_2, u16 param_3, HFILE16 param_4, u16 param_5)

{
    void **ppcVar1;
    BOOL16  BVar2;
    u32     uVar3;
    u16 extraout_DX;
    u16 uVar4;
    u16 extraout_DX_00;
    u16     uVar5;
    u16 local_20;
    u16 uStack30;
    u16 local_18;
    u16 uStack22;
    u32     uStack10;
    u32     u_stack6;

    if(param_2 == 0x0)
    {
        param_3 = 0x0;
        uVar4   = 0x0;
    }
    else
    {
        ppcVar1 = (*param_2 + 0x10);
        (**ppcVar1)(param_4, param_2);
        uVar4 = extraout_DX;
    }
    u_stack6  = str_var1(uVar4, param_3);
    uVar5    = (param_1 >> 0x10);
    local_18 = param_3;
    uStack22 = uVar4;
    BVar2    = write_to_file_1008_7e1c(param_1, uVar5, &local_18, param_5, 0x4, param_4);
    if(BVar2 != 0x0)
    {
        uStack10 = 0x0;
        while(true)
        {
            if(u_stack6 <= uStack10)
            {
                return uVar4;
            }
            ppcVar1 = (*param_2 + 0x4);
            uVar3   = u_stack6;
            (**ppcVar1)();
            local_20 = (u16)uVar3;
            uVar4    = extraout_DX_00;
            uStack30 = extraout_DX_00;
            local_18 = local_20;
            uStack22 = extraout_DX_00;
            BVar2    = write_to_file_1008_7e1c(param_1, uVar5, &local_20, param_5, 0x4, param_4);
            if(BVar2 == 0x0)
                break;
            uStack10 = uStack10 + 0x1;
        }
    }
    globals->dat_1050_0310 = 0x6d0;
    return uVar4;
}


void pass1_1008_79f0(u32 param_1, long param_2, HFILE16 param_3, u16 param_4)

{
    u16 uVar1;
    u16     u_var2;
    u16     uStack4;

    if(param_2 == 0x0)
    {
        uVar1   = 0x0;
        uStack4 = 0x0;
    }
    else
    {
        u_var2   = (param_2 >> 0x10);
        uVar1   = *(param_2 + 0x4);
        uStack4 = (param_2 + 0x6);
    }
    write_to_file_1008_7954(param_1, str_var1(uStack4, uVar1), uVar1, param_3, param_4);
    return;
}


void write_to_file_1008_7a22(u32 param_1, long param_2, HFILE16 param_3, u16 param_4)

{
    BOOL16     BVar1;
    u16        u_var2;
    u16        uVar3;
    u32 local_24[0x2];
    u16        local_1c[0x5];
    u16        local_12;
    u32 local_10;
    u16        uStack10;
    u16        u_stack6;
    u16        uStack4;

    if(param_2 == 0x0)
    {
        uStack4 = 0x0;
    }
    else
    {
        uStack4 = *(param_2 + 0x4);
    }
    local_12 = uStack4;
    u_var2    = param_1;
    uVar3    = (param_1 >> 0x10);
    BVar1    = write_to_file_1008_7e1c(u_var2, uVar3, &local_12, param_4, 0x2, param_3);
    if(BVar1 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d0;
    }
    else
    {
        u_stack6 = 0x0;
        while(true)
        {
            if(uStack4 <= u_stack6)
            {
                return;
            }
            pass1_1020_bb16(param_2,
                            str_var1(param_4, &local_10),
                            str_var1(param_4, &local_12), u_stack6);
            uStack10    = local_12;
            local_1c[0] = local_12;
            BVar1       = write_to_file_1008_7e1c(u_var2, uVar3, local_1c, param_4, 0x2, SEG_1020);
            if(BVar1 == 0x0)
                break;
            local_24[0] = local_10;
            BVar1       = write_to_file_1008_7e1c(u_var2, uVar3, local_24, param_4, 0x4, SEG_1020);
            if(BVar1 == 0x0)
            {
                return;
            }
            u_stack6 = u_stack6 + 0x1;
        }
    }
    return;
}


u16 pass1_1008_7ad4(u32 param_1, long *param_2, u16 param_3, HFILE16 param_4, u16 param_5)

{
    BOOL16     BVar1;
    u16        u_var2;
    u16        uVar3;
    u16        local_14[0x2];
    u32 local_10[0x2];
    u16        u_stack6;
    u16        local_4;

    u_var2 = param_1;
    uVar3 = (param_1 >> 0x10);
    BVar1 = read_file_1008_7dee(u_var2, uVar3, &local_4, 0x0, param_5, 0x2, param_4);
    if(BVar1 != 0x0)
    {
        u_stack6 = 0x0;
        while(true)
        {
            if(local_4 <= u_stack6)
            {
                return 0x1;
            }
            BVar1 = read_file_1008_7dee(u_var2, uVar3, local_14, 0x0, param_5, 0x2, param_4);
            if((BVar1 == 0x0) || (BVar1 = read_file_1008_7dee(u_var2, uVar3, local_10, 0x0, param_5, 0x4, param_4), BVar1 == 0x0))
                break;
            param_4 = SEG_1020;
            pass1_1020_bb8a(param_2, local_10[0],
                            str_var1(local_14[0], (local_10[0] >> 0x10)), param_3, param_5);
            u_stack6 = u_stack6 + 0x1;
        }
    }
    return 0x0;
}


u16 write_to_file_1008_7b4c(u32 param_1, u16 *param_2, HFILE16 param_3, u16 param_4)

{
    BOOL16 BVar1;
    u16    u_var2;
    u16    uVar3;
    u16    local_12[0x3];
    u16    local_c[0x2];
    u16    local_8;
    u16    local_6;
    u16    local_4;

    pass1_1008_3eb4(param_2,
                    str_var1(param_4, &local_8),
                    str_var1(param_4, &local_6),
                    str_var1(param_4, &local_4));
    local_12[0] = local_4;
    u_var2       = param_1;
    uVar3       = (param_1 >> 0x10);
    BVar1       = write_to_file_1008_7e1c(u_var2, uVar3, local_12, param_4, 0x2, param_3);
    if(BVar1 != 0x0)
    {
        local_c[0] = local_6;
        BVar1      = write_to_file_1008_7e1c(u_var2, uVar3, local_c, param_4, 0x2, param_3);
        if(BVar1 != 0x0)
        {
            local_c[0] = local_8;
            BVar1      = write_to_file_1008_7e1c(u_var2, uVar3, local_c, param_4, 0x2, param_3);
            if(BVar1 != 0x0)
            {
                return 0x1;
            }
        }
    }
    return 0x0;
}


BOOL16 read_file_1008_7bc8(u32 param_1, u16 *param_2, HFILE16 param_3, u16 param_4)

{
    BOOL16     BVar1;
    u16        u_var2;
    u16        uVar3;
    u16        local_8;
    u32 local_6;

    u_var2 = param_1;
    uVar3 = (param_1 >> 0x10);
    BVar1 = read_file_1008_7dee(u_var2, uVar3, &local_6 + 0x2, 0x0, param_4, 0x2, param_3);
    if(BVar1 != 0x0)
    {
        BVar1 = read_file_1008_7dee(u_var2, uVar3, &local_6, 0x0, param_4, 0x2, param_3);
        if(BVar1 != 0x0)
        {
            BVar1 = read_file_1008_7dee(u_var2, uVar3, &local_8, 0x0, param_4, 0x2, param_3);
            if(BVar1 != 0x0)
            {
                pass1_1008_3e76(param_2, local_8, local_6, (local_6 >> 0x10));
                return 0x1;
            }
        }
    }
    return 0x0;
}


void read_file_1008_7c6e(u16 param_1, u16 param_2, char *param_3, HFILE16 param_4)

{
    char *pcVar1;
    char  local_c[0xa];

    while(true)
    {
        pcVar1 = param_3;
        WIN16_hread(param_4, 0x1, ZEXT24(local_c) << 0x10);
        if(local_c[0] == '\0')
            break;
        param_3 = (param_3 & 0xffff0000 | (param_3 + 0x1));
        *pcVar1 = local_c[0];
        param_4 = (HFILE16)LAST_SEGMENT;
    }
    *param_3 = '\0';
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL16 write_to_file_1008_7cac(u32 param_1, u16 param_2)

{
    u16        uVar1;
    BOOL16     BVar2;
    u16        unaff_ES;
    undefined1 in_AF;
    u8         local_c[0xa];

    sys_1000_3f9c(local_c,
                  param_2,
                  0x340,
                  globals->_PTR_s_dcbSC_1050_0336_1050_033c,
                  &stack0xfffe,
                  unaff_ES,
                  SEG_1000,
                  param_2,
                  in_AF);
    uVar1 = str_op_1000_3da4(str_var1(param_2, local_c));
    BVar2 = write_to_file_1008_7e1c(param_1, (param_1 >> 0x10), local_c, param_2, uVar1, SEG_1000);
    if(BVar2 == 0x0)
    {
        globals->dat_1050_0310 = 0x6d0;
        return BVar2;
    }
    return 0x1;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  read_file_1008_7cfe(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    bool       bVar1;
    u16        u_var2;
    u8         in_AF;
    long       lVar3;
    u16        in_stack_0000fbd2;
    u16    in_stack_0000fbd4;
    u32 uStack1040;
    char       local_406[0x400];
    u32 u_stack6;

    u_stack6 = 0x0;
    bVar1   = false;
    do
    {
        _llseek16(param_4, u_stack6 << 0x10, (u16)(u_stack6 >> 0x10));
        param_4 = (u16)LAST_SEGMENT;
        lVar3   = WIN16_hread((HFILE16)LAST_SEGMENT, 0x400, ZEXT24(local_406) << 0x10);
        for(uStack1040 = 0x0; uStack1040 < lVar3; uStack1040 = uStack1040 + 0x1)
        {
            if(local_406[uStack1040] == *_PTR_s_dcbSC_1050_0336_1050_033c)
            {
                if(!bVar1)
                {
                    bVar1   = true;
                    u_stack6 = str_var1((u_stack6 >> 0x10) + uStack1040 + CARRY2(u_stack6, uStack1040), u_stack6 + uStack1040);
                    break;
                }
                bVar1 = false;
                u_var2 = pass1_1008_7e4a((globals->_PTR_s_dcbSC_1050_0336_1050_033c >> 0x10), param_5, in_AF,
                                    str_var1(param_5, local_406 + uStack1040), in_stack_0000fbd2, in_stack_0000fbd4);
                if(u_var2 != 0x0)
                {
                    lVar3 = uStack1040 + u_stack6 + 0x7;
                    _llseek16((HFILE16)LAST_SEGMENT, lVar3 * 0x10000, (u16)(lVar3 >> 0x10));
                    return;
                }
            }
        }
        if(!bVar1)
        {
            if(lVar3 < 0x400)
            {
                return;
            }
            u_stack6 = CONCAT11(u_stack6._1_1_ + 0x4, u_stack6);
            u_stack6       = str_var1((u_stack6 >> 0x10) + (0xfb < u_stack6._1_1_), u_stack6);
        }
    } while(true);
}


BOOL16  read_file_1008_7dee(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5, SEGPTR param_6, HFILE16 param_7)

{
    long lVar1;

    lVar1 = WIN16_hread(param_7, param_6, str_var1(param_3, param_4));
    if(lVar1 != str_var1(param_4, param_6))
    {
        return 0x0;
    }
    return 0x1;
}


BOOL16  write_to_file_1008_7e1c(u16 param_1, u16 param_2, u16 param_3, u16 param_4, char *buf_to_write, HFILE16 file_handle)

{
    char *pcVar1;

    pcVar1 = _hwrite16(file_handle, buf_to_write, str_var1(param_3, (buf_to_write >> 0x10)));
    if(pcVar1 != buf_to_write)
    {
        return 0x0;
    }
    return 0x1;
}


void close_file_1008_6dd0(u32 *param_1, HFILE16 param_2)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x4) != -0x1)
    {
        _lclose16(param_2);
        (param_1 + 0x4) = 0xffff;
    }
    fn_ptr_1000_17ce((Struct18 *)*param_1, SEG_1000);
    return;
}


BOOL16 file_fn_1008_6e02(u32 *param_1, LPCSTR in_string, u16 param_3)

{
    i16    var1;
    BOOL16 var2;
    u8    *extraout_DX;
    i16    unaff_DI;
    u16    uVar1;
    u8     local_4[0x2];

    globals->dat_1050_0310 = 0x0;
    var1               = write_to_file_1008_70a6(param_1, in_string);
    if(var1 != 0x0)
    {
        uVar1 = (param_1 >> 0x10);
        pass1_1008_72a8();
        var1 = pass1_1008_7006(param_1, uVar1, str_var1(param_3, local_4), extraout_DX, unaff_DI, param_3);
        if((var1 != 0x0) && (var1 = file_fn_1008_6eee(param_1, local_4, param_3), var1 != 0x0))
        {
            var2 = file_fn_1008_726c(param_1, uVar1, (HFILE16)in_string);
            if(var2 == 0x0)
            {
                return 0x0;
            }
            return 0x1;
        }
        _lclose16((HFILE16)in_string);
    }
    return 0x0;
}


BOOL16 read_file_1008_6e78(u32 param_1, u16 param_2, char *in_string, u16 param_4)

{
    BOOL16 b_var1;
    i16    i_var2;
    u8    *var3;
    u8    *extraout_DX;
    i16    unaff_DI;
    u8     local_4[0x2];

    globals->dat_1050_0310 = 0x0;
    b_var1             = read_file_1008_7146(param_1, param_2, in_string, param_4);
    if(b_var1 != 0x0)
    {
        pass1_1008_72a8();
        i_var2 = pass1_1008_7056(param_1, param_2, str_var1(param_4, local_4), extraout_DX, unaff_DI, param_4);
        if(i_var2 != 0x0)
        {
            var3 = local_4;
            read_file_1008_6f7a(param_1, param_2, str_var1(param_4, var3), param_4);
            if(var3 != 0x0)
            {
                b_var1 = file_fn_1008_726c(param_1, param_2, (HFILE16)in_string);
                if(b_var1 == 0x0)
                {
                    return 0x0;
                }
                return 0x1;
            }
        }
        _lclose16((HFILE16)in_string);
    }
    return 0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void file_fn_1008_6eee(u16 param_1, u16 param_2, u32 param_3)

{
    BOOL16      BVar1;
    u16         u_var2;
    u8         *in_DX;
    u16         unaff_SS;
    u32  uVar3;
    u8          local_e[0x4];
    u32  uStack10;
    u32 *pu_stack6;

    pu_stack6 = *_PTR_LOOP_1050_5748;
    uStack10 = *pu_stack6;
    pass1_1020_a43e(unaff_SS, in_DX, str_var1(unaff_SS, local_e));
    BVar1 = pass1_1028_d7a0(uStack10, (uStack10 >> 0x10), param_3, unaff_SS);
    if(BVar1 != 0x0)
    {
        BVar1 = pass1_1030_5c1a(globals->_PTR_LOOP_1050_5736, param_3, unaff_SS);
        if(BVar1 != 0x0)
        {
            uVar3 = write_to_file_1028_dce2(globals->_PTR_LOOP_1050_65e2, param_3, unaff_SS);
            if((uVar3 >> 0x10) != 0x0)
            {
                u_var2 = pass1_1038_7b20(globals->_PTR_LOOP_1050_5a64, param_3, unaff_SS);
                if(u_var2 != 0x0)
                {
                    BVar1 = pass1_1020_a644(local_e, unaff_SS, param_3, unaff_SS);
                    if(BVar1 != 0x0)
                    {
                        return;
                    }
                }
            }
        }
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void read_file_1008_6f7a(u16 param_1, u16 param_2, u32 param_3, u16 param_4)

{
    u16     var5;
    i16         i_var3;
    BOOL16      b_var4;
    u8         *in_DX;
    u16     uVar1;
    u16        *pu_var2;
    u8          local_e[0x4];
    u32  uStack10;
    u32 *pu_stack6;

    pu_stack6 = *_PTR_LOOP_1050_5748;
    uStack10 = *pu_stack6;
    pu_var2   = pass1_1020_a43e(param_4, in_DX, str_var1(param_4, local_e));
    uVar1    = (u16)(pu_var2 >> 0x10);
    var5     = read_file_1028_d7ba(uStack10, (uStack10 >> 0x10), param_3, param_4, (u16)pu_var2);
    if(var5 != 0x0)
    {
        var5 = read_file_1030_5c52(globals->_PTR_LOOP_1050_5736, param_3, var5, param_4);
        if(var5 != 0x0)
        {
            read_file_1028_def2(globals->_PTR_LOOP_1050_65e2, param_3, param_4, var5);
            if(var5 != 0x0)
            {
                i_var3 = read_file_1038_7c02(NULL, _PTR_LOOP_1050_5a64, param_3, var5, uVar1);
                if(i_var3 != 0x0)
                {
                    b_var4 = read_file_1020_a65e(
                      str_var1(param_4, local_e), param_3, param_4, (u16)local_e);
                    if(b_var4 != 0x0)
                    {
                        return;
                    }
                }
            }
        }
    }
    return;
}

u16 write_to_file_1008_70a6(u32 *param_1, LPCSTR param_2)

{
    HFILE16 HVar1;
    i16     iVar2;
    u16     uVar3;
    LPCSTR  pCVar4;
    u16     unaff_SS;
    u8      in_AF;
    long    lVar5;

    uVar3  = (param_1 >> 0x10);
    iVar2  = param_1;
    pCVar4 = param_2;
    if((iVar2 + 0x4) != -0x1)
    {
        pCVar4 = LAST_SEGMENT;
        _lclose16((HFILE16)param_2);
        (iVar2 + 0x4) = 0xffff;
    }
    HVar1                     = _lcreat16(pCVar4, 0x0);
    *(HFILE16 *)(iVar2 + 0x4) = HVar1;
    if(HVar1 == 0xffff)
    {
        globals->dat_1050_0310 = 0x6cf;
    }
    else
    {
        globals->PTR_LOOP_1050_0312 = &DAT_1050_0004;
        sys_1000_3f9c(0x65a0,
                      SEG_1050,
                      globals->_PTR_s_SC_03d_1050_0314_1050_031c,
                      0x4,
                      &stack0xfffe,
                      uVar3,
                      SEG_1000,
                      unaff_SS,
                      in_AF);
        pCVar4 = str_op_1000_3da4(0x105065a0);
        lVar5  = _hwrite16(SEG_1000, pCVar4, str_var1(0x65a0, pCVar4 >> 0xf));
        if(lVar5 == pCVar4)
        {
            return 0x1;
        }
        globals->dat_1050_0310 = 0x6d0;
    }
    return 0x0;
}


BOOL16 read_file_1008_7146(i16 param_1, u16 param_2, LPCSTR param_3, u16 param_4)

{
    HFILE16 HVar1;
    i16     iVar2;
    LPCSTR  path;

    path = param_3;
    if((param_1 + 0x4) != -0x1)
    {
        path = LAST_SEGMENT;
        _lclose16((HFILE16)param_3);
        (param_1 + 0x4) = 0xffff;
    }
    HVar1                       = _lopen16(path, 0x0);
    *(HFILE16 *)(param_1 + 0x4) = HVar1;
    if(HVar1 == 0xffff)
    {
        globals->dat_1050_0310 = 0x6cf;
    }
    else
    {
        iVar2 = read_file_1008_71a0(str_var1(param_2, param_1), param_4);
        if(iVar2 != 0x0)
        {
            return 0x1;
        }
    }
    return 0x0;
}


// WARNING: Removing unreachable block (ram,SEG_100871e6)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 read_file_1008_71a0(u32 param_1, u16 param_2)

{
    u16  buffer;
    u16  uVar1;
    u8   in_AF;
    long lVar2;
    i16  iStack26;
    i16  iStack24;
    i16  iStack22;
    char local_e[0x9];
    u8   uStack5;
    u16  uStack4;

    uStack4  = 0x1;
    buffer   = str_op_1000_3da4(0x105065a0);
    iStack22 = 0x0;
    lVar2    = WIN16_hread(SEG_1000, buffer, str_var1(local_e, buffer >> 0xf));
    uVar1    = lVar2;
    if(buffer < lVar2)
    {
        uVar1 = buffer;
    }
    iStack24 = uVar1 - 0x2;
    if(iStack24 < 0x0)
    {
        iStack24 = 0x0;
    }
    iStack26 = 0x2;
    while(iStack24 != 0x0)
    {
        iStack22 = iStack22 * 0xa + local_e[iStack26] + -0x30;
        iStack26 = iStack26 + 0x1;
        iStack24 = iStack24 + -0x1;
    }
    if(iStack22 == 0x1)
    {
        globals->PTR_LOOP_1050_0312 = (&PTR_LOOP_1050_0000 + 0x1);
    }
    else
    {
        if(iStack22 == 0x4)
        {
            globals->PTR_LOOP_1050_0312 = &DAT_1050_0004;
        }
        else
        {
            uStack5            = 0x0;
            globals->PTR_LOOP_1050_0312 = (&PTR_LOOP_1050_0000 + 0x1);
            uStack4            = 0x0;
        }
    }
    sys_1000_3f9c(0x65a0,
                  SEG_1050,
                  globals->_PTR_s_SC_03d_1050_0314_1050_031c,
                  globals->PTR_LOOP_1050_0312,
                  &stack0xfffe,
                  (param_1 >> 0x10),
                  SEG_1000,
                  param_2,
                  in_AF);
    return uStack4;
}


BOOL16 file_fn_1008_726c(u32 param_1, u16 param_2, HFILE16 file_handle)

{
    HFILE16 HVar1;

    if((param_1 + 0x4) != -0x1)
    {
        HVar1 = _lclose16(file_handle);
        if(HVar1 == 0xffff)
        {
            globals->dat_1050_0310 = 0x6d1;
            return 0x0;
        }
        (param_1 + 0x4)    = 0xffff;
        globals->dat_1050_0310 = 0x0;
    }
    return 0x1;
}
