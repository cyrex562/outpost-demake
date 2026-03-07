#include "ui_ops_1.h"

#include "fn_ptr_ops/fn_ptr_ops_1.h"
#include "fn_ptr_ops/fn_ptr_ops_6.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "op_winapi.h"
#include "string_consts.h"
#include "string_ops.h"
#include "struct_ops/struct_ops_1.h"
#include "struct_ops/struct_ops_4.h"
#include "structs/structs_2xx/structs_29x.h"
#include "structs/structs_5xx/structs_51x.h"
#include "sys_ops/sys_ops_1.h"
#include "sys_ops/sys_ops_12.h"
#include "sys_ops/sys_ops_7.h"
#include "sys_ops/sys_ops_8.h"
#include "sys_ops/sys_ops_9.h"
#include "ui_ops_6.h"
#include "unk/unk_1.h"
#include "unk/unk_10.h"
#include "unk/unk_11.h"
#include "unk/unk_12.h"
#include "unk/unk_14.h"
#include "unk/unk_15.h"
#include "unk/unk_18.h"
#include "unk/unk_2.h"
#include "utils.h"
#include "win_ops/win_ops_1.h"
#include "win_ops/win_ops_3.h"
#include "win_ops/win_ops_4.h"
#include "address_tables/function_tables.h"

#include <stdbool.h>
#include <stddef.h>

void unk_draw_op_1040_b0f8(Globals *globals, Struct18 *param_1)

{
    u16 u16_var1;
    u16 u16_var8;
    u8 *pu8_var7;
    i16       i16_var2;
    u16       u16_var4;
    u16       u16_var3;
    u16      *pu16_var5;
    Struct18 *pstruct18_var6;

    param_1->field_0x0 = addr_table_1040_b772;//0xb772;
    param_1->field_0x2 = SEG_1040;
    pu16_var5
      = mixed_1010_20ba(globals->u16_1050_0ed0, 0x32, u16_var3, pu8_var7, i16_var2);
    u16_var4 = SEG_1010;
    pass1_1010_7b8c(pu16_var5, param_1->field_0x6, u16_var3);
    if(param_1->field_0x8e != 0x0)
    {
        u16_var4 = LAST_SEGMENT;
        DeleteObject16(SEG_1010);
        param_1->field_0x8e = 0x0;
    }
    u16_var1       = param_1->field_0x90;
    u16_var8       = param_1->field_0x92;
    pstruct18_var6 = (Struct18 *)str_var1(u16_var8, u16_var1);
    if((u16_var8 | u16_var1) != 0x0)
    {
        pass1_1040_a5d0(globals, str_var1(u16_var8, u16_var1));
        u16_var4 = SEG_1000;
        fn_ptr_1000_17ce(pstruct18_var6, SEG_1000);
    }
    ui_cleanup_op_1040_782c(param_1, u16_var4);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_op_1040_ae04(u32 param_1, WORD *param_2, Globals *globals)

{
    bool   bVar1;
    i16    iVar2;
    char  *id;
    u8    *in_DX;
    u16    uVar3;
    SEGPTR lp_string;
    i16    iVar4;
    u16    uVar5;
    i16    unaff_DI;
    u16    uVar6;
    u16    uVar7;
    u8     in_AF;
    u16   *puVar8;
    u32    uVar9;
    u32    uVar10;
    char  *pcVar11;
    i16    iStack280;
    char   local_102[0x100];

    puVar8 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_2, in_DX, unaff_DI);
    uVar3  = (puVar8);
    uVar6  = (param_1);
    iVar4  = param_1;
    pass1_1010_c3c2(puVar8,
                    uVar3,
                    str_var1(param_2, local_102),
                    *(iVar4 + 0x94),
                    uVar3,
                    in_AF,
                    param_2);
    SetDlgItemText16(SEG_1010, (u16)local_102, (SEGPTR)param_2);
    uVar9     = struct_op_1030_73a8(*(iVar4 + 0x94));
    iVar2     = uVar9 + 0x20;
    uVar10    = pass1_1030_8326();
    lp_string = (SEGPTR)(uVar10 >> 0x10);
    bVar1     = false;
    for(iStack280 = 0x0; iStack280 < 0xa; iStack280 = iStack280 + 0x1)
    {
        uVar7 = ((uVar9 & 0xffff0000) >> 0x10);
        if(((iStack280 * 0xc + iVar2 + 0x2) | (iStack280 * 0xc + iVar2)) != 0x0)
        {
            uVar5 = iStack280 * 0xc + iVar2;
            id    = string_op_1020_c222((uVar5 + 0x4), globals);
            SetDlgItemText16(SEG_1020, (u16)id, lp_string);
            wsprintf16(LAST_SEGMENT, local_102, param_2);
            SetDlgItemText16((HWND16)LAST_SEGMENT, (u16)local_102, (SEGPTR)param_2);
            uVar10    = unk_load_str_op_1010_8c96(*(iVar4 + 0x98),
                                               str_var1(param_2, local_102),
                                               uVar9 & 0xffff0000 | uVar5,
                                               SEG_1010,
                                               param_2);
            lp_string = (SEGPTR)uVar10;
            SetDlgItemText16(SEG_1010, (u16)local_102, (SEGPTR)param_2);
            bVar1 = true;
        }
    }
    if(!bVar1)
    {
        pcVar11 = load_string_1010_847e(globals->dat_1050_14cc, SEG_1010);
        SetDlgItemText16(SEG_1010, (u16)pcVar11, (SEGPTR)(pcVar11 >> 0x10));
    }
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void msg_box_ui_op_1040_ad66(Globals *globals,
                             u32      param_1,
                             char    *param_2,
                             u8      *param_3,
                             u16      param_4)

{
    char local_206[0x102];
    char local_104[0x102];

    mem_op_1000_179c(globals, SEG_1000, SEG_1000);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x100, local_206);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, param_2);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    MessageBox16(SEG_1000, 0x0, local_206, param_4);
    fn_ptr_1000_17ce((Struct18 *)str_var1(param_3, param_2), SEG_1000);
}


void pass1_1040_ad24(i16 param_1,
                     u16 param_2,
                     u16 param_3,
                     u32 param_4,
                     u8 *param_5,
                     u16 param_6,
                     u16 param_7)

{
    if(param_4 == 0xeb)
    {
        win_ui_op_1040_ae04(str_var1(param_2, param_1), param_7, NULL);
    }
    else
    {
        if(param_4 != 0x1f0)
        {
            pass1_1040_b54a(
              NULL, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
            return;
        }
        msg_box_ui_op_1040_ad66(NULL, str_var1(param_2, param_1), 0x0, param_5, param_7);
    }
}


void pass1_1040_ad14(u32 param_1, u16 param_2)

{
    win_ui_op_1040_ae04(param_1, param_2, NULL);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_dlg_op_1040_a94a(Globals *globals, u32 param_1, u16 param_2)

{
    i16   *pi_var1;
    u32    u_var2;
    u32    uVar3;
    u16    uVar4;
    u8    *value;
    char  *pcVar5;
    u16    uVar6;
    u8    *in_DX;
    u8    *puVar8;
    u8    *puVar9;
    u16    lp_string;
    i16    iVar10;
    i16    iVar11;
    i16    unaff_DI;
    u16    uVar12;
    u16    uVar13;
    HWND16 HVar14;
    u8     in_AF;
    bool   bVar15;
    u16   *puVar16;
    long   lVar17;
    u16    uStack288;
    u16    uStack286;
    BOOL16 BStack278;
    i16    iStack276;
    u8     local_102[0x100];
    u32    uVar7;

    puVar16
      = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_2, in_DX, unaff_DI);
    puVar8 = (puVar16 >> 0x10);
    uVar4  = puVar16;
    uVar12 = (param_1 >> 0x10);
    iVar10 = param_1;
    puVar9 = puVar8;
    pass1_1010_c3c2(uVar4,
                    puVar8,
                    str_var1(param_2, local_102),
                    *(iVar10 + 0x94),
                    puVar8,
                    in_AF,
                    param_2);
    SetDlgItemText16(SEG_1010, (u16)local_102, param_2);
    pass1_1010_c320(
      uVar4, puVar8, str_var1(param_2, local_102), *(iVar10 + 0x94), puVar9);
    SetDlgItemText16(SEG_1010, (u16)local_102, param_2);
    string_op_1010_c446(
      param_2, in_AF, puVar9, puVar16, str_var1(param_2, local_102), (iVar10 + 0x94));
    value = local_102;
    SetDlgItemText16(SEG_1010, (u16)value, param_2);
    pass1_1030_6ddc(*(iVar10 + 0x94));
    SetDlgItemInt16(SEG_1030, 0x0, value, 0x1f5);
    pass1_1030_6e14(*(iVar10 + 0x94));
    SetDlgItemInt16(SEG_1030, 0x0, value, 0x1f6);
    if((iVar10 + 0x98) != 0x0)
    {
        HVar14 = SEG_1010;
        struct_1010_dd5e(uVar4, puVar8, *(iVar10 + 0x94));
        if((puVar9 | value) != 0x0)
        {
            uVar3           = (iVar10 + 0x94);
            uVar13          = (uVar3 >> 0x10);
            iVar11          = uVar3;
            u_var2          = *(iVar11 + 0x26);
            lp_string       = (iVar11 + 0x28);
            iStack276       = 0x1798;
            BStack278       = 0x17c3;
            (iVar10 + 0xea) = 0x0;
            uVar7           = u_var2;
            for(uStack288 = 0x1; uStack288 < 0x25; uStack288 = uStack288 + 0x1)
            {
                if(u_var2 == 0x0)
                {
                    lVar17 = 0x0;
                }
                else
                {
                    HVar14 = SEG_1020;
                    lVar17 = pass1_1020_bae6(u_var2,
                                             str_var1(uStack288, (u_var2 >> 0x10)),
                                             uVar7,
                                             lp_string,
                                             param_2);
                }
                uVar6     = (lVar17 >> 0x10);
                bVar15    = (value + uStack288 * 0x4) != 0x0;
                lp_string = uVar6;
                if(bVar15)
                {
                    pcVar5 = string_1020_c0d8(uStack288);
                    SetDlgItemText16(SEG_1020, (u16)pcVar5, lp_string);
                    HVar14 = (HWND16)LAST_SEGMENT;
                    SetDlgItemInt16(
                      (HWND16)LAST_SEGMENT, 0x0, (value + uStack288 * 0x4), BStack278);
                }
                uStack286 = lVar17;
                uVar6     = uVar6 | uStack286;
                if(lVar17 != 0x0)
                {
                    if(!bVar15)
                    {
                        pcVar5 = string_1020_c0d8(uStack288);
                        HVar14 = (HWND16)LAST_SEGMENT;
                        SetDlgItemText16(SEG_1020, (u16)pcVar5, lp_string);
                    }
                    SetDlgItemInt16(HVar14, 0x0, uStack286, BStack278);
                    iVar11 = (iVar10 + 0xea);
                    HVar14 = GetDlgItem16((HWND16)LAST_SEGMENT, iStack276);
                    *(HWND16 *)(iVar10 + iVar11 * 0x2 + 0x9a) = HVar14;
                    pi_var1                                   = (iVar10 + 0xea);
                    *pi_var1                                  = *pi_var1 + 0x1;
                    iVar11                                    = (iVar10 + 0xea);
                    HVar14                                    = (HWND16)LAST_SEGMENT;
                    uVar6 = GetDlgItem16((HWND16)LAST_SEGMENT, BStack278);
                    *(HWND16 *)(iVar10 + iVar11 * 0x2 + 0x9a) = uVar6;
                    pi_var1                                   = (iVar10 + 0xea);
                    *pi_var1                                  = *pi_var1 + 0x1;
                    bVar15                                    = true;
                }
                uVar7 = uVar6;
                if(bVar15)
                {
                    iStack276 = iStack276 + 0x1;
                    BStack278 = BStack278 + 0x1;
                }
            }
        }
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void msg_box_op_1040_a85a(u32 param_1, char *param_2, u8 *param_3, u16 param_4)

{
    char local_206[0x102];
    char local_104[0x102];

    mem_op_1000_179c(SEG_1000, param_3, 0);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x100, local_206);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, param_2);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    MessageBox16(SEG_1000, 0x0, local_206, param_4);
    fn_ptr_1000_17ce((Struct18 *)str_var1(param_3, param_2), SEG_1000);
    return;
}


void pass1_1040_a84a(u32 param_1, u16 param_2)

{
    win_ui_dlg_op_1040_a94a(NULL, param_1, param_2);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_op_1040_a784(i16 param_1,
                         i16 param_2,
                         u16 param_3,
                         u32 param_4,
                         u16 param_5,
                         u16 param_6,
                         u16 param_7)

{
    i16 iVar1;

    if(param_4 != 0xeb)
    {
        if(param_4 == 0x1f4)
        {
            msg_box_op_1040_a85a(str_var1(param_2, param_1), 0x0, param_5, param_7);
            return;
        }
        if(param_4 == 0x1f7)
        {
            globals->_PTR_LOOP_1050_5ef0 = (param_1 + 0x94);
            pass1_1038_af40(globals->ptr_1050_5b7c,
                            (param_1 + 0x8),
                            0x23,
                            param_5,
                            param_1,
                            SEG_1038,
                            param_7);
            PostMessage16((HWND16)SEG_1038, 0x0, 0x0, 0x1110002);
            return;
        }
        if(param_4 != 0x17d8)
        {
            pass1_1040_b54a(
              NULL, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
            return;
        }
        iVar1 = (param_1 + 0x6);
        SetWindowPos16(param_6, 0x6, 0xed, 0x237, 0x0, 0x0, 0x0);
        GetDlgItem16((HWND16)LAST_SEGMENT, 0x17d8);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
        (param_1 + 0x98) = 0x1;
        param_1          = param_2;
        param_2          = iVar1;
    }
    win_ui_dlg_op_1040_a94a(NULL, str_var1(param_2, param_1), param_7);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void unk_win_ui_op_1040_b230(Globals *globals, Struct1 *param_1, u16 param_2, u16 param_3)

{
    void **ppcVar1;
    u16    IVar2;
    u8    *in_DX;
    i16    unaff_DI;
    u16    uVar3;
    u16   *puVar4;
    u16   *puVar5;
    u16    uVar7;
    u32    uVar6;
    RECT16 local_1a;
    i16    iStack22;
    i16    iStack20;
    i16    iStack18;
    i16    iStack16;
    i16    iStack14;
    i16    iStack12;
    u16   *puStack10;
    i16    local_6;
    i16    local_4;

    dialog_ui_fn_1040_78e2(NULL, param_1, param_2);
    if(globals->PTR_LOOP_1050_5ef8 == (&globals->dat_1050_0004 + 0x1))
    {
        globals->PTR_LOOP_1050_5ef8 = 0x0;
    }
    puVar5 = str_var1(param_3, &local_4);
    puVar4 = str_var1(param_3, &local_6);
    puStack10
      = mixed_1010_20ba(globals->u16_1050_0ed0, 0x48, param_3, in_DX, unaff_DI);
    pass1_1008_3e94((puStack10 & 0xffff0000 | (puStack10 + 0xe)), puVar4, puVar5);
    uVar3                       = (puStack10 >> 0x10);
    iStack12                    = (puStack10 + 0xa);
    iStack14                    = (puStack10 + 0xc);
    uVar7                       = 0x4;
    IVar2                       = GetSystemMetrics16(SEG_1008);
    iStack16                    = IVar2 * globals->PTR_LOOP_1050_5ef8 + 0xa;
    globals->PTR_LOOP_1050_5ef8 = globals->PTR_LOOP_1050_5ef8 + 0x1;
    iStack18                    = iStack16 + local_6;
    iStack16                    = iStack16 + local_4;
    uVar3                       = (param_1 >> 0x10);
    uVar6                       = str_var1(uVar7, (param_1 + 0x6));
    GetWindowRect16((HWND16)LAST_SEGMENT, &local_1a);
    if(iStack14 < (iStack20 - local_1a.y) + iStack18)
    {
        iStack18 = -0x2 - ((iStack20 - local_1a.y) - iStack14);
    }
    if(iStack12 < (iStack22 - local_1a.x) + iStack16)
    {
        iStack16 = -0x2 - ((iStack22 - local_1a.x) - iStack12);
    }
    uVar3 = (param_1 + 0x6);
    SetWindowPos16((HWND16)LAST_SEGMENT, 0x1, 0x0, 0x0, iStack18, iStack16, 0x0);
    ppcVar1 = (param_1->field_0x0 + 0x6c);
    (**ppcVar1)(LAST_SEGMENT, param_1, uVar3, uVar6);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass1_1040_b54a(Globals *globals,
                     i16      param_1,
                     u16      param_2,
                     u16      param_3,
                     u32      param_4,
                     u8      *param_5,
                     u16      param_6,
                     u16      param_7)

{
    Struct18  *paVar1;
    void     **ppcVar2;
    u32        uVar3;
    i16        iVar4;
    i16        iVar5;
    Struct18  *paVar6;
    u16        uVar7;
    Struct515 *iVar6;
    i16        unaff_DI;
    u16        uVar8;
    u16       *puVar9;
    u8         uVar10;
    u8         uVar11;
    u16        uVar12;
    u16        uVar13;
    u16        uVar14;

    if(param_4 == 0xea)
    {
        ppcVar2 = (str_var1(param_2, param_1) + 0x5c);
        (**ppcVar2)(param_6, param_1, param_2);
    }
    else
    {
        if(param_4 == 0xeb)
        {
            puVar9 = mixed_1010_20ba(
              globals->u16_1050_0ed0, 0x3, param_7, param_5, unaff_DI);
            uVar7  = (puVar9 >> 0x10);
            paVar1 = (param_1 + 0x90);
            if(paVar1 != (Struct18 *)0x0)
            {
                uVar8  = (paVar1 >> 0x10);
                uVar12 = SEG_1010;
                paVar6 = paVar1;
                pass1_1010_ad64(puVar9,
                                str_var1((paVar1 + 0xa), uVar7),
                                *(paVar1 + 0x6),
                                paVar1,
                                uVar7);
                (param_1 + 0x90) = paVar6;
                (param_1 + 0x92) = uVar7;
                if((uVar7 | (param_1 + 0x90)) == 0x0)
                {
                    (param_1 + 0x90) = paVar1;
                }
                else
                {
                    if(paVar1 != (Struct18 *)0x0)
                    {
                        pass1_1040_a5d0(paVar1);
                        uVar12 = SEG_1000;
                        fn_ptr_1000_17ce(paVar1, SEG_1000);
                    }
                    ppcVar2 = (str_var1(param_2, param_1) + 0x70);
                    (**ppcVar2)(uVar12, param_1, param_2);
                }
            }
        }
        else
        {
            if(param_4 == 0x1790)
            {
                puVar9 = mixed_1010_20ba(
                  globals->u16_1050_0ed0, 0x32, param_7, param_5, unaff_DI);
                uVar3 = (param_1 + 0x90);
                uVar3 = (uVar3 + 0x6);
                iVar4 = pass1_1010_7d38(
                  puVar9, (puVar9 >> 0x10), uVar3, (uVar3 >> 0x10), param_7);
                iVar5 = iVar4;
                ui_op_1010_79aa(puVar9, 0xfab, 0x0, param_7);
                if(iVar5 != 0x0)
                {
                    return;
                }
                if(iVar4 == 0x0)
                {
                    uVar3  = (param_1 + 0x90);
                    uVar8  = (uVar3 >> 0x10);
                    iVar6  = (Struct515 *)uVar3;
                    uVar3  = iVar6->field_0x6;
                    uVar13 = uVar3;
                    uVar14 = (uVar3 >> 0x10);
                    uVar12 = 0x14;
                }
                else
                {
                    uVar3  = (param_1 + 0x90);
                    uVar8  = (uVar3 >> 0x10);
                    iVar6  = (Struct515 *)uVar3;
                    uVar3  = iVar6->field_0x6;
                    uVar13 = uVar3;
                    uVar14 = (uVar3 >> 0x10);
                    uVar12 = 0x9;
                }
                uVar10 = uVar8;
                uVar11 = (uVar8 >> 0x8);
            }
            else
            {
                if(param_4 == 0x1824)
                {
                    puVar9 = mixed_1010_20ba(
                      globals->u16_1050_0ed0, 0x32, param_7, param_5, unaff_DI);
                    iVar6 = (Struct515 *)puVar9;
                    uVar3 = (param_1 + 0x90);
                    ui_op_1010_79aa(puVar9, 0xfc5, (uVar3 + 0x6), param_7);
                    if(iVar6 != (Struct515 *)0x0)
                    {
                        return;
                    }
                    uVar3  = (param_1 + 0x90);
                    uVar3  = (uVar3 + 0x6);
                    uVar13 = uVar3;
                    uVar14 = (uVar3 >> 0x10);
                    uVar12 = 0x12;
                    uVar10 = 0x0;
                    uVar11 = 0x0;
                }
                else
                {
                    if(param_4 != 0x1830)
                    {
                        post_win_msg_1040_7b3c(
                          CONCAT13((param_2 >> 0x8), CONCAT12(param_2, param_1)),
                          param_3,
                          param_4,
                          param_4,
                          param_6);
                        return;
                    }
                    puVar9 = mixed_1010_20ba(
                      globals->u16_1050_0ed0, 0x32, param_7, param_5, unaff_DI);
                    iVar6 = (Struct515 *)puVar9;
                    uVar3 = (param_1 + 0x90);
                    ui_op_1010_79aa(puVar9, 0xfb6, (uVar3 + 0x6), param_7);
                    if(iVar6 != (Struct515 *)0x0)
                    {
                        return;
                    }
                    uVar3  = (param_1 + 0x90);
                    uVar3  = (uVar3 + 0x6);
                    uVar13 = uVar3;
                    uVar14 = (uVar3 >> 0x10);
                    uVar12 = 0xc;
                    uVar10 = 0x0;
                    uVar11 = 0x0;
                }
            }
            unk_win_op_1010_7300(puVar9,
                                 CONCAT13(uVar11, CONCAT12(uVar10, iVar6)),
                                 uVar12,
                                 str_var1(uVar14, uVar13));
        }
    }
}


void destroy_window_1040_b726(u32 *param_1, i16 param_2, HWND16 in_win_handle_3)

{
    fn_ptr_1 *ppcVar1;

    if(param_2 != 0x0)
    {
        ppcVar1 = (*param_1 + 0x78);
        (**ppcVar1)(in_win_handle_3, param_1);
    }
    DestroyWindow16(in_win_handle_3);
    return;
}


void pass1_1040_c5ac(u16 *param_1)

{
    u32   *puVar1;
    u16    u_var2;
    void **ppcVar3;
    i16    iVar4;
    u16    uVar5;

    uVar5                       = (param_1 >> 0x10);
    iVar4                       = param_1;
    param_1->field_0x0 = addr_table_1040_c9f2;//0xc9f2;
    (iVar4 + 0x2)               = SEG_1040;
    globals->PTR_LOOP_1050_5f02 = globals->PTR_LOOP_1050_5f02 + -0x1;
    if(globals->PTR_LOOP_1050_5f02 == 0x0)
    {
        puVar1 = (iVar4 + 0x8);
        u_var2 = (iVar4 + 0xa);
        if((u_var2 | puVar1) != 0x0)
        {
            ppcVar3 = *puVar1;
            (**ppcVar3)();
        }
        puVar1 = (iVar4 + 0xc);
        u_var2 = (iVar4 + 0xe);
        if((u_var2 | puVar1) != 0x0)
        {
            ppcVar3 = *puVar1;
            (**ppcVar3)();
        }
    }
    mix_win_ui_op_1040_911e(param_1);
}


void win_ui_op_1040_bbe2(i16    param_1,
                         u16    param_2,
                         u16    param_3,
                         u32    param_4,
                         HWND16 param_5,
                         u16    param_6)

{
    void **ppcVar1;
    BOOL16 BVar2;
    i16    iVar3;
    u16    uVar4;
    u8    *in_DX;
    u16    uVar5;
    u16    uVar6;
    u16    uVar7;
    i16    unaff_DI;
    u16   *puVar8;
    u16   *puVar9;
    u32    uVar10;
    u16    uVar11;
    u16    uVar12;
    u16    uVar13;
    u16    uStack30;
    RECT16 local_a;
    i16    iStack6;
    i16    iStack4;

    if(param_4 != 0x10c)
    {
        if(param_4 < 0x10d)
        {
            if(param_4 == 0xfa)
            {
                uVar10  = (param_1 + 0x98);
                ppcVar1 = ((param_1 + 0x98) + 0x18);
                (**ppcVar1)(param_5,
                            uVar10,
                            (uVar10 >> 0x10),
                            0x0,
                            globals->_PTR_LOOP_1050_5efe,
                            (globals->_PTR_LOOP_1050_5efe >> 0x10));
                return;
            }
            if(param_4 == 0x10a)
            {
                GetClientRect16(param_5, &local_a);
                uVar10    = (param_1 + 0x98);
                local_a.y = local_a.y + 0x3;
                local_a.x = (uVar10 + 0x1a) + -0x9;
                iStack6   = iStack6 + -0x3;
                iStack4   = iStack4 + -0x3;
                InvalidateRect16((HWND16)LAST_SEGMENT,
                                 (RECT16 *)(&PTR_LOOP_1050_0000 + 0x1),
                                 (BOOL16)&local_a);
                unk_destroy_win_op_1010_2fa0(*(param_1 + 0x98), SEG_1010);
                pass1_1010_32c0(*(param_1 + 0x98), 0x0);
                pass1_1010_2ee2((param_1 + 0x98), param_6, SEG_1010);
                return;
            }
            if(param_4 != 0x10b)
                goto LAB_1040_be78;
            uVar10 = (param_1 + 0x98);
            uVar11 = (uVar10 + 0x12);
            uVar6  = uVar11;
            puVar8 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_6, in_DX, unaff_DI);
            uVar5  = (puVar8 >> 0x10);
            puVar9 = puVar8;
            pass1_1010_a5ca(puVar8, uVar5, uVar6, puVar8, uVar5);
            uVar6 = (puVar9 >> 0x10);
            if((uVar11 != 0x70) && (puVar9 == 0x0))
            {
                return;
            }
            uVar10 = (param_1 + 0xb0);
            uVar12 = uVar10;
            uVar13 = (uVar10 >> 0x10);
            uVar10 = (param_1 + 0x98);
            uVar11 = (uVar10 + 0x12);
        }
        else
        {
            if(param_4 != 0x10d)
            {
                if(param_4 == 0x10e)
                {
                    puVar8 = mixed_1010_20ba(
                      _PTR_LOOP_1050_0ed0, 0x32, param_6, in_DX, unaff_DI);
                    iVar3 = puVar8;
                    ui_op_1010_79aa(puVar8, 0xfc6, (param_1 + 0xb0), param_6);
                    if(iVar3 != 0x0)
                    {
                        return;
                    }
                    unk_win_op_1010_7300(puVar8, 0x0, 0x13, *(param_1 + 0xb0));
                    return;
                }
                if(param_4 == 0xbbb)
                {
                    if((param_1 + 0xb6) != 0x0)
                    {
                        BVar2   = IsWindow16(param_5);
                        param_5 = (HWND16)LAST_SEGMENT;
                        if(BVar2 != 0x0)
                            goto LAB_1040_bd39;
                    }
                    uVar10           = pass1_1038_af40(globals->ptr_1050_5b7c,
                                             (param_1 + 0x6),
                                             0x1b,
                                             in_DX,
                                             param_1,
                                             SEG_1038,
                                             param_6);
                    (param_1 + 0xb6) = (uVar10 + 0x6);
                    ShowWindow16((HWND16)SEG_1038, 0x1);
                    return;
                }
                if(param_4 == 0xbbc)
                {
                    puVar8 = mixed_1010_20ba(
                      _PTR_LOOP_1050_0ed0, 0x3, param_6, in_DX, unaff_DI);
                    uVar7  = (puVar8 >> 0x10);
                    uVar6  = puVar8;
                    uVar5  = uVar7;
                    uVar4  = pass1_1010_a5ac(uVar6, uVar7, *(param_1 + 0xb0));
                    uVar11 = uVar4;
                    pass1_1010_a58a(uVar6, uVar7, uVar4, uVar4, uVar5);
                    if(uVar11 == 0x0)
                    {
                        pass1_1010_a568(uVar6, uVar7, uVar4, 0x0, uVar5);
                    }
                    GetDlgItem16(SEG_1010, 0xbbc);
                    EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
                    return;
                }
            LAB_1040_be78:
                pass1_1040_b54a(
                  NULL, param_1, param_2, param_3, param_4, in_DX, param_5, param_6);
                return;
            }
            puVar8 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_6, in_DX, unaff_DI);
            uVar6  = (puVar8 >> 0x10);
            uVar10 = (param_1 + 0xb0);
            uVar12 = uVar10;
            uVar13 = (uVar10 >> 0x10);
            uVar11 = 0x71;
            uVar5  = uVar6;
        }
        uStack30 = puVar8;
        param_5  = SEG_1010;
        pass1_1010_a5ec(uStack30, uVar5, uVar11, str_var1(uVar13, uVar12), uVar6);
        if((param_1 + 0xb4) != 0x0)
        {
            param_5 = (HWND16)LAST_SEGMENT;
            BVar2   = IsWindow16(SEG_1010);
            if(BVar2 != 0x0)
            {
                param_5 = (HWND16)LAST_SEGMENT;
                SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x11100eb);
            }
        }
    }
LAB_1040_bd39:
    DestroyWindow16(param_5);
    return;
}


void destroy_win_1040_bb78(Struct35 *param_1, HWND16 param_2)

{
    u32      *puVar1;
    u16       u_var2;
    void    **ppcVar3;
    BOOL16    BVar4;
    Struct35 *iVar5;
    u16       uVar5;
    HWND16    HVar6;

    uVar5 = (param_1 >> 0x10);
    iVar5 = (Struct35 *)param_1;
    HVar6 = param_2;
    if(iVar5->field_0xb6 != 0x0)
    {
        HVar6 = (HWND16)LAST_SEGMENT;
        BVar4 = IsWindow16(param_2);
        if(BVar4 != 0x0)
        {
            HVar6 = (HWND16)LAST_SEGMENT;
            DestroyWindow16((HWND16)LAST_SEGMENT);
        }
    }
    iVar5->field_0xb6 = 0x0;
    puVar1            = iVar5->field_0x94;
    u_var2            = iVar5->field_0x96;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)(HVar6, puVar1, u_var2, 0x1);
    }
    &iVar5->field_0x94 = 0x0;
    iVar5->field_0x98  = 0x0;
    return;
}


void win_ui_1040_b8d2(Struct1 *param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32       *puVar1;
    u16        u_var2;
    u32        uVar3;
    Struct160 *paVar4;
    u16        uVar5;
    u16        uVar6;
    i16        iVar7;
    u8        *puVar8;
    u8        *puVar9;
    u16        uVar10;
    u16        uVar11;
    Struct167 *iVar10;
    i16        unaff_DI;
    u16        uVar12;
    u16       *puVar13;

    dialog_ui_fn_1040_78e2(NULL, param_1, param_3);
    puVar13 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x31, param_4, param_2, unaff_DI);
    puVar9  = (puVar13 >> 0x10);
    paVar4  = (Struct160 *)puVar13;
    uVar12  = (param_1 >> 0x10);
    iVar10  = (Struct167 *)param_1;
    *(Struct160 **)&iVar10->field_0x98 = paVar4;
    (&iVar10->field_0x98 + 0x2) = puVar9;
    mem_op_1000_179c(0xa, puVar9, 0);
    puVar8 = (puVar9 | paVar4);
    if(puVar8 == 0x0)
    {
        iVar10->field_0x94 = 0x0;
    }
    else
    {
        puVar13 = struct_1040_bf3e(str_var1(puVar9, paVar4), iVar10->field_0x6);
        puVar8  = (puVar13 >> 0x10);
        paVar4  = (Struct160 *)puVar13;
        *(Struct160 **)&iVar10->field_0x94 = paVar4;
        (&iVar10->field_0x94 + 0x2)        = puVar8;
    }
    pass1_1040_bfde(iVar10->field_0x94, iVar10->field_0x98, param_4);
    mem_op_1000_179c(0x42, puVar8, 0);
    puVar9 = (puVar8 | paVar4);
    if(puVar9 != 0x0)
    {
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar8,
                            0x1,
                            0xa000a,
                            0x0,
                            0x800081,
                            str_var1(iVar10->field_0x6, 0x10a),
                            puVar9,
                            param_4);
    }
    mem_op_1000_179c(0x42, puVar9, 0);
    puVar8 = (puVar9 | paVar4);
    if(puVar8 != 0x0)
    {
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar9,
                            0x1,
                            0xa0028,
                            0x0,
                            0x840085,
                            str_var1(iVar10->field_0x6, 0x10b),
                            puVar8,
                            param_4);
    }
    mem_op_1000_179c(0x42, puVar8, 0);
    puVar9 = (puVar8 | paVar4);
    if(puVar9 != 0x0)
    {
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar8,
                            0x1,
                            0xa0046,
                            0x0,
                            0x860087,
                            str_var1(iVar10->field_0x6, 0x10d),
                            puVar9,
                            param_4);
    }
    mem_op_1000_179c(0x42, puVar9, 0);
    puVar8 = (puVar9 | paVar4);
    if(puVar8 != 0x0)
    {
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar9,
                            0x1,
                            0xa0064,
                            0x0,
                            0x880089,
                            str_var1(iVar10->field_0x6, 0x10e),
                            puVar8,
                            param_4);
    }
    mem_op_1000_179c(0x42, puVar8, 0);
    puVar9 = (puVar8 | paVar4);
    if(puVar9 != 0x0)
    {
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar8,
                            0x1,
                            0xa0082,
                            0x0,
                            0x820083,
                            str_var1(iVar10->field_0x6, 0x10c),
                            puVar9,
                            param_4);
    }
    mem_op_1000_179c(0x42, puVar9, 0);
    puVar8 = (puVar9 | paVar4);
    if(puVar8 != 0x0)
    {
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar9,
                            0x1,
                            0xa00d2,
                            0x0,
                            0x8a008b,
                            str_var1(iVar10->field_0x6, 0xbbb),
                            puVar8,
                            param_4);
    }
    mem_op_1000_179c(0x42, puVar8, 0);
    puVar9 = (puVar8 | paVar4);
    if(puVar9 == 0x0)
    {
        paVar4 = (Struct160 *)0x0;
        puVar9 = 0x0;
    }
    else
    {
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar8,
                            0x1,
                            0xa00a0,
                            0x8e,
                            0x8c008d,
                            str_var1(iVar10->field_0x6, 0xbbc),
                            puVar9,
                            param_4);
    }
    puVar13 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_4, puVar9, unaff_DI);
    uVar10  = (puVar13 >> 0x10);
    u_var2  = puVar13;
    uVar11  = uVar10;
    uVar5   = pass1_1010_a5ac(u_var2, uVar10, iVar10->field_0xb0);
    uVar6   = pass1_1010_ac62(u_var2, uVar10, 0x1e, uVar5, uVar11);
    if(uVar6 != 0x0)
    {
        pass1_1010_a5ca(u_var2, uVar10, uVar5, uVar6, uVar11);
        if(0x0 < uVar6)
        {
            pass1_1010_a58a(u_var2, uVar10, uVar5, uVar6, uVar11);
            if(uVar6 == 0x0)
                goto LAB_1040_bb26;
        }
    }
    enable_win_1040_9234(str_var1(puVar9, paVar4), 0x0, SEG_1010);
LAB_1040_bb26:
    puVar1 = iVar10->field_0x98;
    iVar7  = puVar1;
    uVar3  = puVar1 & 0xffff0000;
    uVar12 = (uVar3 >> 0x10);
    SetWindowPos16(SEG_1010,
                   0x40,
                   (iVar7 + 0x10),
                   (iVar7 + 0xe),
                   (iVar7 + 0xc),
                   (uVar3 | iVar7 + 0xa),
                   0x0);
    return;
}


u16 pass1_1040_b864(u32 *param_1,
                    i16 *param_2,
                    u16  param_3,
                    u16  param_4,
                    i16  param_5,
                    u16  param_6)

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
        ppcVar1 = (*param_1 + 0x7c);
        (**ppcVar1)(param_6, param_1, param_2, str_var1(param_4, param_3));
    }
    return 0x1;
}


void show_win_1040_b43c(u32 *param_1, HWND16 param_2)

{
    fn_ptr_1 *ppcVar1;

    ppcVar1 = (*param_1 + 0x70);
    (**ppcVar1)(param_2, param_1);
    ShowWindow16(param_2, 0x5);
    return;
}


void pass1_1040_b45e(u32 param_1, HWND16 param_2)

{
    u32  uVar1;
    i16 *piVar2;
    i16  iVar3;
    u16  uVar4;
    i16  iStack8;
    u16 *pIStack6;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    if((iVar3 + 0x90) != 0x0)
    {
        uVar1          = (iVar3 + 0x90);
        (uVar1 + 0x14) = (iVar3 + 0x6);
        uVar1          = (iVar3 + 0x90);
        pIStack6       = (uVar1 + 0x2);
        for(iStack8 = 0x0;
            piVar2  = *(i16 **)(iVar3 + 0x90), *piVar2 != iStack8 && iStack8 <= *piVar2;
            iStack8 = iStack8 + 0x1)
        {
            SetDlgItemText16(param_2, *pIStack6, (SEGPTR) * (pIStack6 + 0x2));
            pIStack6 = (u16 *)(pIStack6 & 0xffff0000 | (pIStack6 + 0xa));
            param_2  = (HWND16)LAST_SEGMENT;
        }
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass1_1040_b4c8(u32 param_1, u8 *param_2, i16 param_3, u16 param_4)

{
    i16  iVar1;
    u32  u_var2;
    i16  iVar3;
    u16  uVar4;
    u16 *puVar5;

    uVar4 = (param_1 >> 0x10);
    if((param_1 + 0x90) != 0x0)
    {
        puVar5 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x32, param_4, param_2, param_3);
        u_var2 = (param_1 + 0x90);
        iVar1  = (u_var2 + 0xa);
        iVar3  = iVar1 + -0x4;
        if(iVar3 == 0x0)
        {
            ui_op_1010_79aa(puVar5, 0xfd9, 0x0, param_4);
            if(iVar3 == 0x0)
            {
                uVar4 = 0xe;
            LAB_1040_b50f:
                unk_win_op_1010_7300(
                  puVar5, str_var1(iVar3, iVar3), uVar4, str_var1(iVar3, iVar3));
                return;
            }
        }
        else
        {
            if(((0x0 < iVar1 + -0x5) && (!SBORROW2(iVar1 + -0x5, 0x1)))
               && (iVar3 = iVar1 + -0x7, iVar3 == 0x0 || iVar1 + -0x6 < 0x1))
            {
                ui_op_1010_79aa(puVar5, 0xfda, 0x0, param_4);
                if(iVar3 == 0x0)
                {
                    uVar4 = 0xd;
                    goto LAB_1040_b50f;
                }
            }
        }
    }
    return;
}


void send_dlg_item_msg_1040_d20c(u32 param_1, long param_2, u16 param_3, u16 param_4)

{
    u16  in_AX;
    u8  *in_DX;
    u16  uVar1;
    i16  unaff_DI;
    u16  u_var2;
    u8   in_AF;
    u16 *puVar3;
    u8  *puVar4;
    u16  uVar5;
    u8   local_106[0x104];

    if(param_2 == 0x0)
    {
        enable_win_1040_d60e(param_1, param_3);
        return;
    }
    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0xa0) != 0x0)
    {
        pass1_1010_9210(*(param_1 + 0x9c));
        enable_win_1040_d60e(param_1, SEG_1010);
        pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), param_2);
        puVar4 = local_106;
        uVar5  = param_4;
        puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_4, in_DX, unaff_DI);
        uVar1  = (puVar3 >> 0x10);
        pass1_1010_c3c2(puVar3,
                        uVar1,
                        str_var1(uVar5, puVar4),
                        str_var1(in_DX, in_AX),
                        uVar1,
                        in_AF,
                        param_4);
        SendDlgItemMessage16(SEG_1010, (u16)local_106, param_4, 0x0, 0x18470401);
    }
    return;
}


void win_ui_op_1040_d2ac(Globals *globals,
                         i16      param_1,
                         u16      param_2,
                         u16      param_3,
                         u32      param_4,
                         u16      param_5,
                         u16      param_6,
                         u16      param_7)

{
    LRESULT LVar1;

    if(param_4 == globals->s_dibtext_bmp_1050_1844 + 0x4U)
    {
        SendDlgItemMessage16(param_6, 0x0, 0x0, 0x0, 0x18470405);
        struct_1010_9172(*(param_1 + 0x9c));
    }
    else
    {
        if(globals->s_dibtext_bmp_1050_1844 + 0x4U < param_4)
        {
            if(param_4 == globals->s_dibtext_bmp_1050_1844 + 0x5U)
            {
                LVar1 = SendDlgItemMessage16(param_6, 0x0, 0x0, 0x0, 0x1847040c);
                if((LVar1 != -0x1) || ((LVar1 >> 0x10) != -0x1))
                {
                    SendDlgItemMessage16(
                      (HWND16)LAST_SEGMENT, 0x0, 0x0, LVar1 - 0x1, 0x18470403);
                    pass1_1010_91cc(*(param_1 + 0x9c));
                }
            }
            else
            {
                if(param_4 == globals->s_dibtext_bmp_1050_1844 + 0x6U)
                {
                    enable_win_1040_d6be(str_var1(param_2, param_1), param_6);
                    pass1_1018_57d2(*(param_1 + 0x94), str_var1(param_2, param_1));
                    PostMessage16(SEG_1018, 0x0, 0x0, 0x1110203);
                }
                else
                {
                    if(param_4 != globals->s_dibtext_bmp_1050_1844 + 0x7U)
                        goto LAB_1040_d3b3;
                    globals->_PTR_LOOP_1050_5a68 = (param_1 + 0x98);
                    pass1_1038_af40(globals->ptr_1050_5b7c,
                                    (param_1 + 0x6),
                                    0x27,
                                    param_5,
                                    param_1,
                                    SEG_1038,
                                    param_7);
                }
            }
        }
        else
        {
            if(param_4 == 0xeb)
            {
                send_ldg_item_msg_1040_d79c(str_var1(param_2, param_1), param_7);
            }
            else
            {
                if(param_4 != globals->s_vrpal_bmp_1050_183a + 0x7U)
                {
                LAB_1040_d3b3:
                    pass1_1040_b54a(NULL,
                                    param_1,
                                    param_2,
                                    param_3,
                                    param_4,
                                    param_5,
                                    param_6,
                                    param_7);
                    return;
                }
                msg_box_op_1040_d3d0(str_var1(param_2, param_1), 0x0, param_5, param_7);
            }
        }
    }
}


void msg_box_op_1040_d3d0(u32 param_1, char *param_2, u8 *param_3, u16 param_4)

{
    char local_206[0x102];
    char local_104[0x102];

    mem_op_1000_179c(SEG_1000, param_3, 0);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x100, local_206);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, param_2);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    MessageBox16(SEG_1000, 0x0, local_206, param_4);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, param_2);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    MessageBox16(SEG_1000, 0x0, local_206, param_4);
    fn_ptr_1000_17ce((Struct18 *)str_var1(param_3, param_2), SEG_1000);
    return;
}


void enable_win_1040_d60e(u32 param_1, HWND16 param_2)

{
    GetDlgItem16(param_2, 0x1);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
    GetDlgItem16((HWND16)LAST_SEGMENT, 0x2);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
    GetDlgItem16((HWND16)LAST_SEGMENT, s_vrpal_bmp_1050_183a + 0x7);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
    GetDlgItem16((HWND16)LAST_SEGMENT, s_dibtext_bmp_1050_1844 + 0x4);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
    GetDlgItem16((HWND16)LAST_SEGMENT, s_dibtext_bmp_1050_1844 + 0x5);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
    GetDlgItem16((HWND16)LAST_SEGMENT, s_dibtext_bmp_1050_1844 + 0x6);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
    GetDlgItem16((HWND16)LAST_SEGMENT, s_dibtext_bmp_1050_1844 + 0x7);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
    (param_1 + 0xa0) = 0x0;
    return;
}


void enable_win_1040_d6be(u32 param_1, HWND16 param_2)

{
    GetDlgItem16(param_2, 0x1);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
    GetDlgItem16((HWND16)LAST_SEGMENT, 0x2);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
    GetDlgItem16((HWND16)LAST_SEGMENT, s_vrpal_bmp_1050_183a + 0x7);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
    GetDlgItem16((HWND16)LAST_SEGMENT, s_dibtext_bmp_1050_1844 + 0x4);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
    GetDlgItem16((HWND16)LAST_SEGMENT, s_dibtext_bmp_1050_1844 + 0x5);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
    GetDlgItem16((HWND16)LAST_SEGMENT, s_dibtext_bmp_1050_1844 + 0x6);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
    GetDlgItem16((HWND16)LAST_SEGMENT, s_dibtext_bmp_1050_1844 + 0x7);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
    (param_1 + 0xa0) = 0x1;
    return;
}


void send_ldg_item_msg_1040_d79c(u32 param_1, u16 param_2)

{
    u16     uVar1;
    u8     *in_DX;
    u16     u_var2;
    u16     uVar3;
    i16     iVar4;
    i16     unaff_DI;
    u16     uVar5;
    HWND16  hwnd;
    u8      in_AF;
    LRESULT LVar6;
    u32     uStack270;
    u32     uStack266;
    char    local_106[0x100];
    u16    *pu_stack6;

    pu_stack6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_2, in_DX, unaff_DI);
    u_var2    = (pu_stack6 >> 0x10);
    uVar5     = (param_1 >> 0x10);
    iVar4     = param_1;
    pass1_1010_c3c2(pu_stack6,
                    u_var2,
                    str_var1(param_2, local_106),
                    *(iVar4 + 0x98),
                    u_var2,
                    in_AF,
                    param_2);
    SendDlgItemMessage16(SEG_1010, (u16)local_106, param_2, 0x0, 0x1846000c);
    SendDlgItemMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x0, 0x1847000b);
    LVar6 = SendDlgItemMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x0, 0x18470405);
    uVar3 = (LVar6 >> 0x10);
    uVar1 = LVar6;
    hwnd  = SEG_1010;
    pass1_1010_9044(*(iVar4 + 0x9c));
    uStack266 = str_var1(uVar3, uVar1);
    for(uStack270 = 0x0; uStack270 < uStack266; uStack270 = uStack270 + 0x1)
    {
        hwnd = SEG_1010;
        pass1_1010_9130(*(iVar4 + 0x9c),
                        str_var1(param_2, local_106),
                        local_106,
                        uVar3,
                        param_2,
                        in_AF);
        if(local_106[0] != '\0')
        {
            hwnd = (HWND16)LAST_SEGMENT;
            LVar6
              = SendDlgItemMessage16(SEG_1010, (u16)local_106, param_2, 0x0, 0x18470401);
            uVar3 = (LVar6 >> 0x10);
        }
    }
    SendDlgItemMessage16(hwnd, 0x0, 0x0, 0x1, 0x1847000b);
    return;
}

void pass1_1040_d29c(u32 param_1, u16 param_2)

{
    send_ldg_item_msg_1040_d79c(param_1, param_2);
    return;
}


LRESULT send_dlg_msg_1040_cf1c(u32 param_1, u16 param_2)

{
    u8     *in_DX;
    u16     uVar1;
    u16     u_var2;
    i16     unaff_DI;
    u16     uVar3;
    u8      in_AF;
    LRESULT LVar4;
    BOOL16  enable;
    char    local_50c[0x402];
    u32     uStack266;
    u8      local_106[0x100];
    u16    *pu_stack6;

    pu_stack6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_2, in_DX, unaff_DI);
    uVar1     = (pu_stack6 >> 0x10);
    uVar3     = (param_1 >> 0x10);
    u_var2    = param_1;
    pass1_1010_c3c2(pu_stack6,
                    uVar1,
                    str_var1(param_2, local_106),
                    *(u_var2 + 0x94),
                    uVar1,
                    in_AF,
                    param_2);
    SendDlgItemMessage16(SEG_1010, (u16)local_106, param_2, 0x0, 0x1846000c);
    SendDlgItemMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x0, 0x1842000b);
    SendDlgItemMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x0, 0x18420405);
    uVar1     = s_vrpal_bmp_1050_183a + 0x8;
    uStack266 = pass1_1018_526a(*(u_var2 + 0x98), *(u_var2 + 0x94), param_2);
    send_dlg_item_msg_1040_ce12(u_var2, uVar3, uStack266, uVar1, param_2);
    LVar4 = SendDlgItemMessage16(SEG_1018, 0x0, 0x0, 0x0, 0x1842040c);
    if(((LVar4 >> 0x10) != 0x0 && -0x1 < LVar4) || ((-0x1 < LVar4 && (LVar4 != 0x0))))
    {
        GetDlgItem16((HWND16)LAST_SEGMENT, 0x1);
        enable = 0x1;
    }
    else
    {
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_50c);
        SendDlgItemMessage16(SEG_1010, (u16)local_50c, param_2, 0x0, 0x18420401);
        GetDlgItem16((HWND16)LAST_SEGMENT, 0x1);
        enable = 0x0;
    }
    EnableWindow16((HWND16)LAST_SEGMENT, enable);
    LVar4 = SendDlgItemMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x1, 0x1842000b);
    return LVar4;
}


void send_dlg_item_1040_ce76(u32 param_1, HWND16 param_2, u16 param_3)

{
    i16      iVar1;
    u16      u_var2;
    LRESULT  LVar3;
    u32      uVar4;
    u8       local_106[0x100];
    WPARAM16 WStack6;
    i16      iStack4;

    u_var2  = (param_1 >> 0x10);
    iVar1   = param_1;
    LVar3   = SendDlgItemMessage16(param_2, 0x0, 0x0, 0x0, 0x18420409);
    WStack6 = (WPARAM16)LVar3;
    iStack4 = WStack6 >> 0xf;
    if(WStack6 != 0xffff)
    {
        SendDlgItemMessage16(
          (HWND16)LAST_SEGMENT, (u16)local_106, param_3, WStack6, 0x1842040a);
        uVar4 = pass1_1018_5206(*(iVar1 + 0x98), str_var1(param_3, local_106), param_3);
        if(uVar4 != 0x0)
        {
            (iVar1 + 0x9c) = (uVar4 + 0x8);
            (iVar1 + 0x9e) = 0x0;
            SetDlgItemInt16(SEG_1018, 0x0, 0x0, 0x18e);
            SetDlgItemInt16((HWND16)LAST_SEGMENT, 0x0, (iVar1 + 0x9c), 0x191);
        }
    }
    return;
}

void send_dlg_item_msg_1040_ce12(u16   param_1,
                                 u16   param_2,
                                 u32   param_3,
                                 u16   param_4,
                                 WORD *param_5)

{
    long lVar1;
    CHAR local_10a[0x100];
    u8   local_a[0x8];

    pass1_1008_5784(str_var1(param_5, local_a), param_3);
    while(true)
    {
        lVar1 = pass1_1008_5b12(local_a, param_5);
        if(lVar1 == 0x0)
            break;
        wsprintf16(SEG_1008, local_10a, param_5);
        SendDlgItemMessage16(
          (HWND16)LAST_SEGMENT, (u16)local_10a, param_5, 0x0, str_var1(param_4, 0x401));
    }
    return;
}


u16 pass1_1040_cdac(u32 param_1, u16 param_2, u16 param_3, i16 param_4, HWND16 param_5)

{
    i16 *pi_var1;
    i16  iVar2;
    bool bVar3;
    i16  iVar4;
    u16  uVar5;

    bVar3 = false;
    iVar4 = param_1;
    uVar5 = (param_1 >> 0x10);
    if(param_4 == 0x0)
    {
        iVar2   = (iVar4 + 0x9e);
        pi_var1 = (iVar4 + 0x9c);
        if(*pi_var1 == iVar2 || *pi_var1 < iVar2)
            goto LAB_1040_cdef;
        pi_var1  = (iVar4 + 0x9e);
        *pi_var1 = *pi_var1 + 0x1;
    }
    else
    {
        if(param_4 != 0x1)
            goto LAB_1040_cdef;
        if((iVar4 + 0x9e) < 0x1)
            goto LAB_1040_cdef;
        pi_var1  = (iVar4 + 0x9e);
        *pi_var1 = *pi_var1 + -0x1;
    }
    bVar3 = true;
LAB_1040_cdef:
    if(bVar3)
    {
        SetDlgItemInt16(param_5, 0x0, (iVar4 + 0x9e), 0x18e);
    }
    return 0x0;
}


void msg_box_op_1040_cce4(u32 param_1, char *param_2, u8 *param_3, u16 param_4)

{
    u32  uStack522;
    char local_206[0x102];
    char local_104[0x102];
    u16  u_var2;
    u16  uVar3;

    mem_op_1000_179c(SEG_1000, param_3, 0);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x100, local_206);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, param_2);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    MessageBox16(SEG_1000, 0x0, local_206, param_4);
    fn_ptr_1000_17ce((Struct18 *)str_var1(param_3, param_2), SEG_1000);
    return;
}

void pass1_1040_cc8c(i16 param_1,
                     u16 param_2,
                     u16 param_3,
                     u32 param_4,
                     u8 *param_5,
                     u16 param_6,
                     u16 param_7)

{
    if(param_4 == 0xeb)
    {
        send_dlg_msg_1040_cf1c(str_var1(param_2, param_1), param_7);
    }
    else
    {
        if(param_4 == s_vrpal_bmp_1050_183a + 0x7)
        {
            msg_box_op_1040_cce4(str_var1(param_2, param_1), 0x0, param_5, param_7);
        }
        else
        {
            if(param_4 != s_vrpal_bmp_1050_183a + 0x8)
            {
                pass1_1040_b54a(
                  NULL, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
                return;
            }
            if(param_4 == 0x1)
            {
                send_dlg_item_1040_ce76(str_var1(param_2, param_1), param_6, param_7);
            }
        }
    }
    return;
}

LRESULT pass1_1040_cc66(u32 param_1, u16 param_2)

{
    void  **ppcVar1;
    LRESULT LVar2;

    ppcVar1 = ((param_1 + 0x98) + 0x10);
    (**ppcVar1)();
    LVar2 = send_dlg_msg_1040_cf1c(param_1, param_2);
    return LVar2;
}


void win_ui_op_1040_cace(Globals *globals, u32 param_1, HWND16 param_2, u16 param_3)

{
    u32    uVar1;
    bool   bVar2;
    i16    iVar3;
    u16    IVar4;
    u16    in_DX;
    u16    uVar5;
    u16    uVar6;
    bool   bVar7;
    u16    uVar8;
    char   local_208[0x100];
    char   local_108[0x100];
    u16    UStack8;
    u16    u_stack6;
    BOOL16 local_4;

    uVar6    = (param_1 >> 0x10);
    uVar5    = param_1;
    u_stack6 = GetDlgItemInt16(param_2, 0x0, &local_4, param_3);
    UStack8  = GetDlgItemInt16((HWND16)LAST_SEGMENT, 0x0, &local_4, param_3);
    if(u_stack6 == 0x0)
    {
        return;
    }
    pass1_1018_50ea(*(uVar5 + 0x98), u_stack6, *(uVar5 + 0x94));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_208);
    uVar1 = (uVar5 + 0x94);
    uVar8 = (globals->dat_1050_14cc >> 0x10);
    if((uVar1 + 0x36) == 0x0)
    {
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_108);
        iVar3 = MessageBox16(
          SEG_1010, (globals->s_New_failed_in_Op__Op_1050_0020 + 0x14), local_208, param_3);
    }
    else
    {
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_108);
        iVar3 = MessageBox16(
          SEG_1010, (globals->s_New_failed_in_Op__Op_1050_0020 + 0x14), local_208, param_3);
    }
    bVar2 = iVar3 == 0x6;
    bVar7 = false;
    if((!bVar2) && (uVar1 = (uVar5 + 0x94), (uVar1 + 0x34) < 0x1))
    {
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_108);
        IVar4 = MessageBox16(
          SEG_1010, (globals->s_New_failed_in_Op__Op_1050_0020 + 0x14), local_208, param_3);
        bVar7 = IVar4 == 0x6;
        bVar2 = false;
    }
    if(bVar2)
    {
        globals->dat_1050_5f16       = (uVar5 + 0x94);
        iVar3                        = 0x26;
    }
    else
    {
        if(!bVar7)
        {
            return;
        }
        globals->_PTR_LOOP_1050_5a68 = (uVar5 + 0x94);
        iVar3                        = 0x27;
    }
    pass1_1038_af40(globals->ptr_1050_5b7c,
                    (uVar5 + 0x8),
                    iVar3,
                    in_DX,
                    uVar5,
                    SEG_1038,
                    param_3);
}


void pass1_1040_caa6(u16 param_1, u32 param_2, u8 *param_3, i16 param_4, u16 param_5)

{
    u16 *puVar1;
    i16  iVar2;

    iVar2  = 0x0;
    puVar1 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_5, param_3, param_4);
    pass1_1010_038e(puVar1, iVar2, param_5);
    destroy_window_1040_b726(str_var1(param_2, param_1), (param_2 >> 0x10), SEG_1010);
    return;
}


void get_dlg_item_1040_a3d0(Struct49 *param_1, HWND16 param_2)

{
    long      lVar1;
    Struct49 *iVar3;
    i16       unaff_DI;
    u16       u_var2;
    u16       unaff_SS;

    u_var2 = (param_1 >> 0x10);
    iVar3  = (Struct49 *)param_1;
    if(iVar3->field_0x90 != 0x0)
    {
        lVar1          = iVar3->field_0x90;
        (lVar1 + 0x14) = iVar3->field_0x6;
        GetDlgItem16(param_2, 0x1826);
        win_msg_1040_a308(param_1, unaff_DI, (HWND16)LAST_SEGMENT, unaff_SS);
    }
    return;
}


void enable_win_1040_86dc(HWND16 param_1)

{
    HWND16 HVar1;

    HVar1 = GetDlgItem16(param_1, 0x1);
    if(HVar1 != 0x0)
    {
        EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
        HVar1 = GetDlgItem16((HWND16)LAST_SEGMENT, 0x2);
        if(HVar1 != 0x0)
        {
            EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
        }
    }
    return;
}


void destroy_win_1040_8b7e(HWND16 param_1)

{
    DestroyWindow16(param_1);
    return;
}


void load_icon_1040_8b92(Struct57 *param_1, HINSTANCE16 hinst_arg_2)

{
    u8      bVar1;
    HICON16 icon_handle;
    u16     uVar3;
    LPCSTR  name;

    uVar3 = (param_1 >> 0x10);
    bVar1 = *(u8 *)(param_1 + 0x98) & 0xf0;
    if(bVar1 == 0x30)
    {
        name = 0x7f03;
    }
    else
    {
        if((bVar1 == 0x10) || (bVar1 == 0x10))
        {
            name = 0x7f01;
        }
        else
        {
            if((bVar1 == 0x40) || (bVar1 == 0x40))
            {
                name = 0x7f04;
            }
            else
            {
                if(bVar1 != 0x20)
                {
                    return;
                }
                name = 0x7f02;
            }
        }
    }
    icon_handle                  = LoadIcon16(hinst_arg_2, name);
    *(HICON16 *)(param_1 + 0x8e) = icon_handle;
}


void get_sys_metrics_1040_8c66(Struct37 *param_1, HWND16 param_2)

{
    i16  *pi_var1;
    u8    bVar2;
    HDC16 hdc;
    u16   IVar3;
    i16   iVar4;
    u16   uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    hdc   = GetDC16(param_2);
    draw_text_1040_8d14(param_1, LAST_SEGMENT);
    (iVar4 + 0xa6) = (iVar4 + 0x9e);
    (iVar4 + 0xaa) = (iVar4 + 0xa2);
    IVar3          = GetSystemMetrics16((u16)LAST_SEGMENT);
    pi_var1        = (iVar4 + 0xac);
    *pi_var1       = *pi_var1 + IVar3;
    bVar2          = *(u8 *)(iVar4 + 0x98) & 0xf0;
    if((((bVar2 == 0x30) || (bVar2 == 0x10)) || (bVar2 == 0x40)) || (bVar2 == 0x20))
    {
        IVar3 = GetSystemMetrics16((u16)LAST_SEGMENT);
        if((iVar4 + 0xac) < IVar3)
        {
            IVar3          = GetSystemMetrics16((u16)LAST_SEGMENT);
            (iVar4 + 0xac) = IVar3;
        }
    }
    pi_var1        = (iVar4 + 0xaa);
    *pi_var1       = *pi_var1 + 0x14;
    pi_var1        = (iVar4 + 0xac);
    *pi_var1       = *pi_var1 + 0xa;
    (iVar4 + 0xb0) = (iVar4 + 0xac);
    pi_var1        = (iVar4 + 0xac);
    *pi_var1       = *pi_var1 + 0x30;
    ReleaseDC16((HWND16)LAST_SEGMENT, hdc);
    return;
}


void draw_text_1040_8d14(Struct37 *param_1, HWND16 param_2)

{
    u8        bVar1;
    u16       IVar2;
    HANDLE16  handle;
    Struct37 *iVar3;
    RECT16   *rect;
    HGDIOBJ16 HStack8;

    rect  = (RECT16 *)(param_1 >> 0x10);
    iVar3 = (Struct37 *)param_1;
    bVar1 = iVar3->field_0x98 & 0xf0;
    if((((bVar1 == 0x30) || (bVar1 == 0x10)) || (bVar1 == 0x40)) || (bVar1 == 0x20))
    {
        iVar3->field_0xa0 = 0xa;
        IVar2             = GetSystemMetrics16(param_2);
        iVar3->field_9e   = IVar2 + 0x28;
        param_2           = (HWND16)LAST_SEGMENT;
    }
    else
    {
        iVar3->field_0xa0 = 0xa;
        iVar3->field_9e   = 0x14;
    }
    HStack8 = 0x0;
    handle  = GetProp16(param_2, 0x5e0f);
    if(handle != 0x0)
    {
        HStack8 = SelectObject16((HDC16)LAST_SEGMENT, handle);
    }
    DrawText16((HDC16)LAST_SEGMENT, 0x410, (u16)&iVar3->field_9e, rect, 0xffff);
    if(HStack8 != 0x0)
    {
        SelectObject16((HDC16)LAST_SEGMENT, HStack8);
    }
    return;
}


void enable_window_1040_8ea0(u16 param_1,
                             u16 param_2,
                             u16 param_3,
                             u32 param_4,
                             u16 param_5)

{
    HWND16 enable;
    u8    *in_DX;
    u16    unaff_SS;

    if(param_4 == 0xf8)
    {
        GetDlgItem16(param_5, 0x17d8);
        enable = 0x1;
    }
    else
    {
        if(param_4 != 0x17d8)
        {
            pass1_1040_b54a(
              NULL, param_1, param_2, param_3, param_4, in_DX, param_5, unaff_SS);
            return;
        }
        SetWindowPos16(param_5, 0x6, 0xf6, 0x269, 0x0, 0x0, 0x0);
        enable = GetDlgItem16((HWND16)LAST_SEGMENT, 0x17d8);
    }
    EnableWindow16((HWND16)LAST_SEGMENT, enable);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void create_window_1040_92dc(Globals *globals, Struct65 *param_1)

{
    HWND16 window_handle_1;
    long str;
//    LPCSTR str_00;
//    LPCSTR str_01;
    long l_var2;

//    str_01 = (param_1 >> 0x10);
//    str_00 = param_1;
    if((param_1->field_0x18) == 0x0)
    {
        window_handle_1            = CreateWindow16(param_2,
                                         NULL,
                                         globals->hinst_1050_038c,
                                         (param_1->field_0x1c),
                                         (param_1->field_0x1a),
                                         0x0,
                                         0x0,
                                         (HWND16)(param_1->field_0x20),
                                         (HMENU16)(param_1->field_0x1e),
                                         0xb,
                                         0x4000);
        param_1->field_0x18 = window_handle_1;
        l_var2                     = SetWindowLong16(window_handle_1,
                                globals->dat_1050_5e18,
                                globals->dat_1050_5e18);

        (param_1->field_0x14)            = l_var2;
        SetProp16(window_handle_1, l_var2, globals->s_procHi_1050_5e46);
        SetProp16(
          window_handle_1, (param_1->field_0x14), globals->s_procLo_1050_5e4d);
        SetProp16(window_handle_1, param_1->field_0x0, globals->s_thisHi_1050_5e54);
        SetProp16(window_handle_1, param_1->field_0x0, globals->s_thisLo_1050_5e5b);
        if((param_1->field_0x40) != 0x0)
        {
            SetProp16(window_handle_1, 0x1, 0x5e62);
        }
        ShowWindow16(window_handle_1, 0x5);
    }
}


void mov_update_win_1040_93aa(Struct65 *param_1, u32 param_2, u16 param_4)

{
    Struct65 *iVar1;
    u16       uVar1;

    uVar1             = (param_1 >> 0x10);
    iVar1             = (Struct65 *)param_1;
    iVar1->field_0x1e = param_3;
    iVar1->field_0x20 = param_2;
    MoveWindow16(
      param_4, 0x1, iVar1->field_0x24, iVar1->field_0x22, param_2, iVar1->field_0x1e);
    UpdateWindow16((HWND16)LAST_SEGMENT);
}


i16 string_1040_8520(Globals  *globals,
                     Struct57 *param_1,
                     u16       param_2,
                     u16       param_3,
                     i16       param_4,
                     u16       param_5,
                     u16       param_6,
                     u8       *param_7,
                     u16       param_8)

{
    u32        UVar1;
    u16        u_var2;
    u16        uVar3;
    u16        uVar5;
    char      *string_6;
    i16        iStack22;
    i16        iStack16;

    get_sys_metrics_1040_7728(param_1, 0x1, 0x0, 0xfc3, param_2);
    param_1->field_0x8e = 0x0;
    param_1->field_0x98 = param_3;
    param_1->field_0x9a = 0x0;
    param_1->field_0xb2 = 0x0;
    param_1->field_0x0           = addr_table_1040_8ddc;//0x8ddc;
    param_1->field_0x2  = SEG_1040;
    param_1->field_9e   = 0x0;
    param_1->field_0xa2 = 0x12c;
    iStack16          = param_4;
    if(param_4 != 0x0)
    {
        load_string_1010_84ac(globals->dat_1050_14cc, SEG_1010);
        param_1->field_0x94 = param_5;
        param_1->field_0x96 = param_7;
        iStack16          = param_4 + -0x1;
    }
    iStack22 = 0x0;
    while(iStack16 != 0x0)
    {
        string_6 = load_string_1010_847e(globals->dat_1050_14cc, SEG_1010);
        param_7  = (string_6 >> 0x10);
        u_var2   = str_op_1000_3da4(string_6);
        iStack22 = iStack22 + u_var2;
        iStack16 = iStack16 + -0x1;
    }
    uVar3 = iStack22 + 0x1;
    uVar5 = SEG_1000;
    mem_op_1000_179c(uVar3, param_7, 0);
    param_1->field_0x90 = uVar3;
    (param_1->field_0x90 + 0x2) = param_7;
    iStack16                   = param_4 + -0x1;
    if(param_4 + -0x1 != 0x0)
    {
        UVar1 = param_1->field_0x90;
        uVar5 = SEG_1010;
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, UVar1);
        iStack16 = param_4 + -0x2;
    }
    while(iStack16 != 0x0)
    {
        string_6 = load_string_1010_847e(globals->dat_1050_14cc, SEG_1010);
        uVar5  = SEG_1000;
        pass1_1000_3cea(param_1->field_0x90, string_6);
        iStack16 -= 1;
    }
    load_icon_1040_8b92(param_1, uVar5);
    globals->dat_1050_5df8 = 0x0;
    return iVar5;
}


Struct18 *pass1_1040_83e6(Struct18 *param_1, u8 param_2, u16 param_3)

{
    ui_cleanup_op_1040_782c(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void move_win_1040_826c(Struct1 *param_1, u16 param_2, BOOL16 param_3)

{
    u16    IVar1;
    HWND16 unaff_CS;
    RECT16 local_e;
    i16    iStack10;
    i16    iStack8;
    u16    IStack6;
    BOOL16 BStack4;

    GetWindowRect16(unaff_CS, &local_e);
    if((param_3 == 0xffff) || (param_2 == -0x1))
    {
        IVar1   = GetSystemMetrics16((u16)LAST_SEGMENT);
        BStack4 = (IVar1 - (iStack10 - local_e.x)) / 0x2;
        IVar1   = GetSystemMetrics16((u16)LAST_SEGMENT);
        param_2 = (IVar1 - (iStack8 - local_e.y)) / 0x2;
    }
    else
    {
        BStack4 = param_3;
    }
    IStack6 = param_2;
    MoveWindow16(
      (HWND16)LAST_SEGMENT, 0x0, iStack8 - local_e.y, iStack10 - local_e.x, param_2, BStack4);
}


void destroy_win_1040_8212(u32 param_1, HWND16 param_2)

{
    BOOL16 is_window;
    u16    uVar1;

    uVar1 = (param_1 >> 0x10);
    if((param_1 + 0x8c) != 0x0)
    {
        is_window = IsWindow16(param_2);
        if(is_window != 0x0)
        {
            DestroyWindow16((HWND16)LAST_SEGMENT);
            (param_1 + 0x8c) = 0x0;
        }
    }
}


void set_sys_modal_window_1040_81fe(HWND16 param_1)

{
    SetSysModalWindow(param_1);
}


void menu_ui_op_1040_7f86(u32 param_1, HWND16 param_2, RECT16 *param_3)

{
    HMENU16 HVar1;
    i16     iVar2;
    u16     uVar3;
    HWND16  unaff_CS;
    POINT16 local_6;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(((iVar2 + 0x6a) != 0x0) && ((iVar2 + 0x68) == 0x0))
    {
        HVar1                      = LoadMenu16(unaff_CS, *(iVar2 + 0x6a));
        *(HMENU16 *)(iVar2 + 0x68) = HVar1;
        if(HVar1 == 0x0)
        {
            return;
        }
        unaff_CS                   = (HWND16)LAST_SEGMENT;
        HVar1                      = GetSubMenu16((HMENU16)LAST_SEGMENT, 0x0);
        *(HMENU16 *)(iVar2 + 0x68) = HVar1;
        if(HVar1 == 0x0)
        {
            return;
        }
    }
    local_6.x = (u16)param_3;
    local_6.y = param_2;
    ClientToScreen16(unaff_CS, &local_6);
    TrackPopupMenu16(
      (HMENU16)LAST_SEGMENT, 0x0, 0x0, (iVar2 + 0x6), 0x0, local_6.y, (RECT16 *)local_6.x);
}


u16 pass1_1040_79c0(u32 *param_1, i16 *param_2, u16 param_3, u16 param_4, u16 param_5)

{
    void **ppcVar1;
    char   cVar2;
    u16    uVar3;
    u16    unaff_CS;

    if(param_5 == 0xa1)
    {
        ppcVar1 = (*param_1 + 0x38);
        uVar3   = (**ppcVar1)();
        return uVar3;
    }
    if(param_5 < 0xa2)
    {
        if(param_5 == 0x85)
        {
            ppcVar1 = (*param_1 + 0x1c);
            (**ppcVar1)();
            return 0x1;
        }
        if(param_5 < 0x86)
        {
            cVar2 = param_5;
            if(cVar2 == '\x02')
            {
                ppcVar1 = (*param_1 + 0x24);
                (**ppcVar1)();
                return 0x1;
            }
            if(cVar2 == '\f')
            {
                ppcVar1 = (*param_1 + 0x18);
                (**ppcVar1)();
                return 0x1;
            }
            if(cVar2 == '\x0f')
            {
                ppcVar1 = (*param_1 + 0x60);
                uVar3   = (**ppcVar1)();
                return uVar3;
            }
            if(cVar2 == '+')
            {
                if(*param_2 != 0x4)
                {
                    return 0x1;
                }
                win_ui_get_prop_op_1040_9566(str_var1(param_3, param_2), unaff_CS);
                return 0x1;
            }
        }
    }
    else
    {
        if(param_5 == 0x114)
        {
            ppcVar1 = (*param_1 + 0x58);
            uVar3   = (**ppcVar1)();
            return uVar3;
        }
        if(param_5 < 0x115)
        {
            if(param_5 == 0x104)
            {
                ppcVar1 = (*param_1 + 0x30);
                uVar3   = (**ppcVar1)();
                return uVar3;
            }
            if(param_5 == 0x111)
            {
                ppcVar1 = (*param_1 + 0x10);
                uVar3   = (**ppcVar1)();
                return uVar3;
            }
        }
        else
        {
            if(param_5 == 0x115)
            {
                ppcVar1 = (*param_1 + 0x54);
                uVar3   = (**ppcVar1)();
                return uVar3;
            }
            if(param_5 == 0x201)
            {
                ppcVar1 = (*param_1 + 0x44);
                (**ppcVar1)();
                return 0x1;
            }
            if(param_5 == 0x204)
            {
                ppcVar1 = (*param_1 + 0x28);
                (**ppcVar1)();
                return 0x1;
            }
        }
    }
    return 0x0;
}


void dialog_ui_fn_1040_78e2(Globals    *globals,
                            Struct1    *in_struct_1,
                            HINSTANCE16 in_instance_handle)

{
    void   **ppcVar1;
    LPCSTR   dlg_template;
    HWND16   dialog_handle;
    Struct1 *local_struct_1;
    Struct1 *local_string_1;
    u16      u_var2;
    long     lVar3;
    u16      uVar4;
    u16      uVar5;
    u16      uVar6;
    u16      uVar7;
    u16      uVar8;
    u16      uVar9;
    u16      uVar10;
    LPCSTR   local_string_2;
    LPCSTR   pCStack8;

    local_string_1 = (Struct1 *)(in_struct_1 >> 0x10);
    local_struct_1 = (Struct1 *)in_struct_1;
    if(&local_struct_1->field_0xc == 0x0)
    {
        u_var2        = (globals->_PTR_LOOP_1050_5bc8 >> 0x10);
        dlg_template  = *(LPCSTR *)(globals->_PTR_LOOP_1050_5bc8 + 0x4);
        dialog_handle = *(HWND16 *)(globals->_PTR_LOOP_1050_5bc8 + 0x6);
    }
    else
    {
        dlg_template  = *(LPCSTR *)&local_struct_1->field_0xc;
        dialog_handle = *(HWND16 *)&local_struct_1->field_0xe;
    }
    dialog_handle = CreateDialog16(
      in_instance_handle, dlg_template, dialog_handle, local_struct_1->lpvoid_field_0x8);
    *(HWND16 *)&local_struct_1->field_0x6 = dialog_handle;
    GetWindowText16((HWND16)LAST_SEGMENT, 0x50, (u16)&local_struct_1->max_count_field_0x10);
    lVar3 = GetWindowLong16((HWND16)LAST_SEGMENT, -0x4);
    SetWindowLong16((HWND16)LAST_SEGMENT,
                    (u16)globals->_PTR_LOOP_1050_5bcc,
                    str_var1(0xfffc, (globals->_PTR_LOOP_1050_5bcc >> 0x10)));
    u_var2 = &local_struct_1->field_0x6;
    uVar10 = SUB42(0x1050, 0x0);
    SetProp16((HWND16)LAST_SEGMENT, local_struct_1, globals->s_thisLo_1050_5dcd);
    uVar9 = &local_struct_1->field_0x6;
    uVar8 = SUB42(0x1050, 0x0);
    SetProp16((HWND16)LAST_SEGMENT, local_string_1, globals->s_thisHi_1050_5dd4);
    local_string_2 = lVar3;
    uVar7          = &local_struct_1->field_0x6;
    uVar6          = SUB42(0x1050, 0x0);
    SetProp16((HWND16)LAST_SEGMENT, local_string_2, globals->s_procLo_1050_5ddb);
    pCStack8 = (lVar3 >> 0x10);
    uVar5    = &local_struct_1->field_0x6;
    uVar4    = SUB42(0x1050, 0x0);
    SetProp16((HWND16)LAST_SEGMENT, pCStack8, globals->s_procHi_1050_5de2);
    ppcVar1 = (in_struct_1->field_0x0 + 0x50);
    (**ppcVar1)(
      LAST_SEGMENT, in_struct_1, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, u_var2);
}


void win_cleanup_op_1040_748c(i16 param_1, u16 param_2, u16 param_3, u32 param_4)

{
    void **ppcVar1;
    u32    u_var2;
    u8    *in_DX;
    u16    unaff_SS;
    i16    iVar3;
    RECT16 local_a;
    i16    iStack6;
    i16    iStack4;

    switch(param_4)
    {
    case 0xfa:
        ppcVar1 = ((param_1 + 0x94) + 0x18);
        (**ppcVar1)();
        break;
    default:
        pass1_1040_b54a(
          NULL, param_1, param_2, param_3, param_4, in_DX, SEG_1040, unaff_SS);
        return;
    case 0xfd:
        if(DAT_1050_0ecc == 0x0)
        {
            return;
        }
        DAT_1050_0ecc = 0x0;
        goto LAB_1040_755d;
    case 0xfe:
        if(DAT_1050_0ecc == 0x1)
        {
            return;
        }
        DAT_1050_0ecc = 0x1;
        goto LAB_1040_755d;
    case 0xff:
        if(DAT_1050_0ecc == 0x2)
        {
            return;
        }
        DAT_1050_0ecc = 0x2;
    LAB_1040_755d:
        u_var2  = (param_1 + 0x94);
        ppcVar1 = ((param_1 + 0x94) + 0x10);
        (**ppcVar1)(SEG_1040, u_var2, (u_var2 >> 0x10));
        pass1_1010_2ee2((param_1 + 0x94), unaff_SS, SEG_1010);
        PostMessage16(SEG_1010, 0x0, 0x0, 0x111010a);
        break;
    case 0x107:
        iVar3 = 0x0;
        goto LAB_1040_75ba;
    case 0x108:
        iVar3 = 0x1;
    LAB_1040_75ba:
        win_ui_op_1010_3202(*(param_1 + 0x94), iVar3, SEG_1010);
        break;
    case 0x10a:
        GetClientRect16((HWND16)SEG_1040, &local_a);
        u_var2    = (param_1 + 0x94);
        local_a.y = local_a.y + 0x3;
        local_a.x = (u_var2 + 0x1a) + -0x9;
        iStack6   = iStack6 + -0x3;
        iStack4   = iStack4 + -0x3;
        InvalidateRect16(
          (HWND16)LAST_SEGMENT, (RECT16 *)(&PTR_LOOP_1050_0000 + 0x1), (BOOL16)&local_a);
        unk_destroy_win_op_1010_2fa0(*(param_1 + 0x94), SEG_1010);
        pass1_1010_32c0(*(param_1 + 0x94), 0x0);
        pass1_1010_2ee2((param_1 + 0x94), unaff_SS, SEG_1010);
        break;
    case 0x10c:
        DestroyWindow16((HWND16)SEG_1040);
    }
    return;
}


void msg_box_ui_op_1040_64ca(u32 param_1, char *param_2, u8 *param_3, u16 param_4)

{
    char local_206[0x102];
    char local_104[0x102];

    mem_op_1000_179c(SEG_1000, param_3, 0);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x100, local_206);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, param_2);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_104);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    MessageBox16(SEG_1000, 0x0, local_206, param_4);
    fn_ptr_1000_17ce((Struct18 *)str_var1(param_3, param_2), SEG_1000);
    return;
}


void show_win_1040_65ba(Globals *globals, Struct1 *param_1, u16 param_2)

{
    u32        uVar1;
    u16        u_var2;
    Struct160 *rect;
    u8        *in_DX;
    u8        *puVar3;
    i16        iVar4;
    i16        iVar5;
    i16        unaff_DI;
    u16        uVar6;
    u16        uVar7;
    HWND16     hwnd;
    u16        unaff_SS;
    u16        local_22;
    u16        uStack32;
    u16        uStack30;
    u16        uStack28;
    u16       *puStack26;
    i16        iStack10;
    u16        uStack8;
    u16       *pu_stack6;

    dialog_ui_fn_1040_78e2(NULL, param_1, param_2);
    pu_stack6
      = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, unaff_SS, in_DX, unaff_DI);
    globals->dat_1050_5f2e      = (pu_stack6 >> 0x10);
    uStack8                     = pass1_1010_0898();
    if(globals->dat_1050_5f2c == 0x0)
    {
        globals->dat_1050_5f2c = mem_op_1000_160a(globals->dat_1050_5f2e, SEG_1000);
    }
    else
    {
    }
    puStack26      = str_var1(globals->dat_1050_5f2e, globals->dat_1050_5f2c);
    hwnd           = SEG_1000;
    u_var2         = fn_ptr_op_1000_1708((uStack8 + 0x2) * 0x4,
                                 0x0,
                                 0x1,
                                 globals->dat_1050_5f2c,
                                 globals->dat_1050_5f2e,
                                 SEG_1000);
    uVar6          = (param_1 >> 0x10);
    iVar4          = param_1;
    (iVar4 + 0x8e) = u_var2;
    (iVar4 + 0x90) = globals->dat_1050_5f2e;
    for(iStack10 = 0x1; iStack10 <= uStack8; iStack10 = iStack10 + 0x1)
    {
        puStack26 = pass1_1010_0946(pu_stack6,
                                    (pu_stack6 >> 0x10),
                                    iStack10,
                                    globals->dat_1050_5f2e,
                                    unaff_DI,
                                    unaff_SS);
        puVar3    = (puStack26 >> 0x10);
        local_22  = *puStack26;
        uStack32  = (puStack26 + 0x2);
        uStack30  = 0x1;
        uStack28  = 0x1;
        rect      = (Struct160 *)&local_22;
        MapDialogRect16(SEG_1010, (RECT16 *)rect);
        hwnd = SEG_1000;
        mem_op_1000_179c(0x42, puVar3, 0);
        globals->dat_1050_5f2e = (puVar3 | rect);
        if(globals->dat_1050_5f2e == 0x0)
        {
            uVar1                    = (iVar4 + 0x8e);
            (uVar1 + iStack10 * 0x4) = 0x0;
        }
        else
        {
            hwnd = SEG_1008;
            window_op_1008_3bd6(NULL,
                                rect,
                                puVar3,
                                0x0,
                                str_var1(local_22, uStack32),
                                0x101,
                                0xff0100,
                                str_var1((iVar4 + 0x6), (puStack26 + 0x4)),
                                globals->dat_1050_5f2e,
                                unaff_SS);
            uVar1                                   = (iVar4 + 0x8e);
            uVar7                                   = (uVar1 >> 0x10);
            iVar5                                   = uVar1;
            *(Struct160 **)(iVar5 + iStack10 * 0x4) = rect;
            (iVar5 + iStack10 * 0x4 + 0x2)          = globals->dat_1050_5f2e;
        }
        uVar1 = (iVar4 + 0x8e);
        uVar7 = (uVar1 >> 0x10);
        iVar5 = uVar1;
        if((iVar5 + iStack10 * 0x4) != 0x0)
        {
            unaff_DI = puStack26;
            enable_win_1040_9234(
              *(iVar5 + iStack10 * 0x4), *(BOOL16 *)(unaff_DI + 0x6), hwnd);
        }
    }
    move_win_1040_826c(param_1, -0x1, 0xffff);
    ShowWindow16(hwnd, 0x5);
}


void post_win_msg_1040_672e(Globals *globals,
                            i16      param_1,
                            u16      param_2,
                            u16      param_3,
                            u32      param_4,
                            u16      param_5,
                            u16      param_6)

{
    u16 unaff_CS;
    i16 iVar1;

    if(param_4 == globals->s_vrpal_bmp_1050_183a + 0x7)
    {
        msg_box_ui_op_1040_64ca(str_var1(param_2, param_1), 0x0, param_5, param_6);
    }
    else
    {
        if(param_4 == 0x1851)
        {
            iVar1 = 0x2a;
        }
        else
        {
            if(param_4 != 0x1852)
            {
                post_win_msg_1040_7b3c(
                  str_var1(param_2, param_1), param_3, param_4, param_4, unaff_CS);
                return;
            }
            iVar1 = 0x29;
        }
        pass1_1038_af40(globals->ptr_1050_5b7c,
                        (param_1 + 0x8),
                        iVar1,
                        param_5,
                        param_1,
                        SEG_1038,
                        param_6);
        PostMessage16((HWND16)SEG_1038, 0x0, 0x0, 0x1110002);
    }
}


void enable_win_1040_6880(u32 param_1, i16 param_2, HWND16 param_3)

{
    u32 uVar1;
    u16 u_var2;

    if(param_2 == 0x8)
    {
        u_var2 = (param_1 >> 0x10);
        GetDlgItem16(param_3, 0x107);
        uVar1 = (param_1 + 0x94);
        EnableWindow16((HWND16)LAST_SEGMENT, *(BOOL16 *)(uVar1 + 0x24));
        GetDlgItem16((HWND16)LAST_SEGMENT, 0x108);
        uVar1 = (param_1 + 0x94);
        EnableWindow16((HWND16)LAST_SEGMENT, *(BOOL16 *)(uVar1 + 0x26));
    }
}


void mixed_win_ui_op_1040_6942(Globals *globals,
                               Struct1 *struct_arg1,
                               u16      param_2,
                               u16      hinst_arg3)

{
    u32        uVar1;
    u32        u_var2;
    void     *fn_ptr_var3;
    Struct65 *pstruct65_var4;
    LPCSTR     string_var5;
    u32       *puVar6;
    i16        iVar7;
    u8        *u8_var9;
    u8        *u8_var10;
    u8        *pu8_var11;
    u8        *pu8_var12;
    u16        u16_var13;
//    i16        iVar11;
    i16 i16_var14;
//    u16        uVar12;
    u16 u16_var15;
//    u16        uVar14;
    HWND16      hwnd_var16;
    void       *pv_var17;
    DWORD       u32_var18;
    char      *string_var19;
    BOOL16      b_var20;
    u32         u32_var21;
    u32         u32_var22;
    u16         u16_var23;
    u16         u16_var24;
    char        string_var25[0x50];
    HDC16       hdc_var26;
    Struct160 *pstruct160_var27;
    u8        *pu8_var28;

    dialog_ui_fn_1040_78e2(globals, struct_arg1, hinst_arg3);
    pv_var17 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x33, param_2, u8_var9, i16_var14);
//    uVar14                         = (pv_var17 >> 0x10);
    pstruct65_var4 = (Struct65*)pv_var17;
//    uVar12                         = (struct_arg1 >> 0x10);
//    iVar11                         = struct_arg1;
    struct_arg1->field_0x94 = pstruct65_var4;
//    (struct_arg1 + 0x96)                = pv_var17;
    fn_ptr_var3 = (struct_arg1->field_0x94)->field_0x4;
    (*fn_ptr_var3)(SEG_1010, (struct_arg1->field_0x94), pv_var17, 0x0, struct_arg1);
    pu8_var12 = u8_var10;
    mem_op_1000_179c(globals, 0xa, SEG_1000);
    pu8_var11 = pstruct65_var4;
    if(pu8_var11 == 0x0)
    {
        (struct_arg1->field_0x98) = 0x0;
    }
    else
    {
        pv_var17
          = struct_1040_bf3e(globals, pstruct65_var4, struct_arg1->field_0x6);
//        pu8_var11  = (pv_var17 >> 0x10);
        pstruct65_var4          = (Struct65 *)pv_var17;
        struct_arg1->field_0x98 = pstruct65_var4;
//        struct_arg1->field_0x9a                = pu8_var11;
    }
    pass1_1040_bfde(struct_arg1->field_0x98, struct_arg1->field_0x94, param_2);
    mem_op_1000_179c(globals, 0x42, SEG_1000);
    pu8_var12 = (pu8_var11 | pstruct65_var4);
    if(pu8_var12 != 0x0)
    {
        window_op_1008_3bd6(NULL,
                            pstruct65_var4,
                            pu8_var11,
                            0x1,
                            0xa000a,
                            0x0,
                            0x800081,
                            str_var1((struct_arg1->field_0x6), 0x10a),
                            pu8_var12,
                            param_2);
    }
    mem_op_1000_179c(globals, 0x42, SEG_1000);
    pu8_var11 = (pu8_var12 | pstruct65_var4);
    if(pu8_var11 != 0x0)
    {
        window_op_1008_3bd6(NULL,
                            pstruct65_var4,
                            pu8_var12,
                            0x1,
                            0xa0028,
                            0x0,
                            0x820083,
                            str_var1((struct_arg1->field_0x6), 0x10c),
                            pu8_var11,
                            param_2);
    }
    b_var20  = 0x42;
    pv_var17 = SEG_1000;
    mem_op_1000_179c(globals, 0x42, SEG_1000);
    pu8_var12 = (pu8_var11 | pstruct65_var4);
    if(pu8_var12 == 0x0)
    {
        pstruct65_var4  = (Struct160 *)0x0;
        pu8_var12       = 0x0;
    }
    else
    {
        pv_var17 = SEG_1008;
        window_op_1008_3bd6(NULL,
                            pstruct65_var4,
                            pu8_var11,
                            0x1,
                            0xa00aa,
                            0x101,
                            0xff0100,
                            str_var1((struct_arg1->field_0x6), 0x107),
                            pu8_var12,
                            param_2);
    }
    pstruct160_var27 = pstruct65_var4;
    pu8_var28        = pu8_var12;
    enable_win_1040_9234(str_var1(pu8_var12, pstruct65_var4), b_var20, pv_var17);
    b_var20    = 0x42;
    hwnd_var16 = SEG_1000;
    mem_op_1000_179c(globals, 0x42, SEG_1000);
    u16_var13 = pu8_var12 | pstruct65_var4;
    if(u16_var13 == 0x0)
    {
        pstruct65_var4  = (Struct160 *)0x0;
        u16_var13       = 0x0;
    }
    else
    {
        hwnd_var16 = SEG_1008;
        window_op_1008_3bd6(NULL,
                            pstruct65_var4,
                            pu8_var12,
                            0x1,
                            0xa00c2,
                            0x101,
                            0xff0100,
                            str_var1((struct_arg1->field_0x6), 0x108),
                            u16_var13,
                            param_2);
    }
    pstruct160_var27 = pstruct65_var4;
    pu8_var28        = u16_var13;
    enable_win_1040_9234(str_var1(u16_var13, pstruct65_var4), b_var20, hwnd_var16);
    hdc_var26 = GetDC16(hwnd_var16);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x50, string_var25);
    string_var19 = string_var25;
    string_var5 = str_op_1000_3da4(str_var1(param_2, string_var19));
    u32_var18   = GetTextExtent16(SEG_1000, string_var5, (u16)string_var19);
    u16_var24    = (u16)(u32_var18 >> 0x10);
    u16_var23    = (u16)u32_var18;
    CreateWindow16(LAST_SEGMENT,
                   0x0,
                   globals->hinst_1050_038c,
                   0x7cd,
                   (struct_arg1->field_0x6),
                   u16_var24,
                   u16_var23,
                   0xad,
                   0x22,
                   0x0,
                   0x5000); // (globals->s_Rebel_1050_4ffc + 0x4)
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x50, string_var25);
    string_var19 = string_var25;
    string_var5 = str_op_1000_3da4(str_var1(param_2, string_var19));
    u32_var18   = GetTextExtent16(SEG_1000, string_var5, (u16)string_var19);
    u16_var24    = (u16)(u32_var18 >> 0x10);
    u16_var23    = (u16)u32_var18;
    ReleaseDC16((HWND16)LAST_SEGMENT, hdc_var26);
    CreateWindow16(LAST_SEGMENT,
                   0x0,
                   globals->hinst_1050_038c,
                   0x7ce,
                   (struct_arg1->field_0x6),
                   u16_var24,
                   u16_var23,
                   0xc5,
                   0x22,
                   0x0,
                   0x5000);
    u32_var21 = 0x5a000a;
    u32_var22 = 0x140050;
    puVar6   = &u32_var21;
    create_window_1040_6eae(NULL, NULL, 0, NULL, NULL, NULL);
    u32_var21 = u32_var21 & 0xffff | (u32_var21 + 0x14) << 0x10;
    create_window_1040_6eae(NULL, NULL, 0, NULL, NULL, NULL);
    u32_var21 = u32_var21 & 0xffff | (u32_var21 + 0x14) << 0x10;
    create_window_1040_6eae(NULL, NULL, 0, NULL, NULL, NULL);
    SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x4010001);
    uVar1  = *(struct_arg1->field_0x94);
    iVar7  = uVar1;
    uVar1  = uVar1 & 0xffff0000;
    uVar14 = (struct_arg1->field_0x6);
    u16_var15 = (uVar1 >> 0x10);
    SetWindowPos16((HWND16)LAST_SEGMENT,
                   0x40,
                   (iVar7 + 0x10),
                   (iVar7 + 0xe),
                   (iVar7 + 0xc),
                   (uVar1 | iVar7 + 0xa),
                   0x0);
    globals->dat_1050_0ecc = 0x0;
    u_var2                 = (struct_arg1 + 0x94);
    fn_ptr_var3            = ((struct_arg1 + 0x94) + 0x10);
    (**fn_ptr_var3)(LAST_SEGMENT, u_var2, (u_var2 >> 0x10), pv_var17, puVar6);
    pass1_1010_2ee2((struct_arg1->field_0x94), param_2, SEG_1010);
    PostMessage16(SEG_1010, 0x0, 0x0, 0x111010a);
}


void enable_win_1040_6ff2(u32 param_1, i16 param_2, HWND16 param_3)

{
    u32 uVar1;
    u16 u_var2;

    if(param_2 == 0x8)
    {
        u_var2 = (param_1 >> 0x10);
        GetDlgItem16(param_3, 0x107);
        uVar1 = (param_1 + 0x94);
        EnableWindow16((HWND16)LAST_SEGMENT, *(BOOL16 *)(uVar1 + 0x24));
        GetDlgItem16((HWND16)LAST_SEGMENT, 0x108);
        uVar1 = (param_1 + 0x94);
        EnableWindow16((HWND16)LAST_SEGMENT, *(BOOL16 *)(uVar1 + 0x26));
    }
}


u16 pass1_1040_7044(u32 *param_1,
                    i16 *param_2,
                    u16  param_3,
                    u16  param_4,
                    i16  param_5,
                    u16  param_6)

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


void mixed_win_ui_op_1040_70b4(Globals *globals,
                               Struct1 *param_1,
                               u16      param_2,
                               u16      param_3)

{
    u32        uVar1;
    u32        u_var2;
    void     **ppcVar3;
    Struct160 *paVar4;
    LPCSTR     pCVar5;
    u32       *puVar6;
    i16        iVar7;
    u8        *in_DX;
    u8        *extraout_DX;
    u8        *puVar8;
    u8        *puVar9;
    u16        uVar10;
    i16        iVar11;
    i16        unaff_DI;
    u16        uVar12;
    u16        uVar13;
    u16        uVar14;
    HWND16     hwnd;
    u16       *puVar15;
    DWORD      DVar16;
    char      *pcVar17;
    BOOL16     BVar18;
    u32        local_64;
    u32        uStack96;
    u16        IStack92;
    u16        IStack90;
    char       local_58[0x50];
    HDC16      HStack8;
    Struct160 *paStack6;
    u8        *puStack4;

    dialog_ui_fn_1040_78e2(NULL, param_1, param_2);
    puVar15
      = mixed_1010_20ba(globals->u16_1050_0ed0, 0x34, param_3, in_DX, unaff_DI);
    uVar14                         = (puVar15 >> 0x10);
    paVar4                         = (Struct160 *)puVar15;
    uVar12                         = (param_1 >> 0x10);
    iVar11                         = param_1;
    *(Struct160 **)(iVar11 + 0x94) = paVar4;
    (iVar11 + 0x96)                = uVar14;
    ppcVar3                        = ((iVar11 + 0x94) + 0x4);
    (**ppcVar3)(SEG_1010, (iVar11 + 0x94), uVar14, 0x0, param_1);
    puVar9 = extraout_DX;
    mem_op_1000_179c(0xa, extraout_DX, 0);
    puVar8 = (puVar9 | paVar4);
    if(puVar8 == 0x0)
    {
        (iVar11 + 0x98) = 0x0;
    }
    else
    {
        puVar15 = struct_1040_bf3e(str_var1(puVar9, paVar4), (iVar11 + 0x6));
        puVar8  = (puVar15 >> 0x10);
        paVar4  = (Struct160 *)puVar15;
        *(Struct160 **)(iVar11 + 0x98) = paVar4;
        (iVar11 + 0x9a)                = puVar8;
    }
    pass1_1040_bfde(*(iVar11 + 0x98), (iVar11 + 0x94), param_3);
    mem_op_1000_179c(0x42, puVar8, 0);
    puVar9 = (puVar8 | paVar4);
    if(puVar9 != 0x0)
    {
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar8,
                            0x1,
                            0xa000a,
                            0x0,
                            0x800081,
                            str_var1((iVar11 + 0x6), 0x10a),
                            puVar9,
                            param_3);
    }
    mem_op_1000_179c(0x42, puVar9, 0);
    puVar8 = (puVar9 | paVar4);
    if(puVar8 != 0x0)
    {
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar9,
                            0x1,
                            0xa0028,
                            0x0,
                            0x820083,
                            str_var1((iVar11 + 0x6), 0x10c),
                            puVar8,
                            param_3);
    }
    BVar18 = 0x42;
    uVar14 = SEG_1000;
    mem_op_1000_179c(0x42, puVar8, 0);
    puVar9 = (puVar8 | paVar4);
    if(puVar9 == 0x0)
    {
        paVar4 = (Struct160 *)0x0;
        puVar9 = 0x0;
    }
    else
    {
        uVar14 = SEG_1008;
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar8,
                            0x1,
                            0xa00aa,
                            0x101,
                            0xff0100,
                            str_var1((iVar11 + 0x6), 0x107),
                            puVar9,
                            param_3);
    }
    paStack6 = paVar4;
    puStack4 = puVar9;
    enable_win_1040_9234(str_var1(puVar9, paVar4), BVar18, uVar14);
    BVar18 = 0x42;
    hwnd = SEG_1000;
    mem_op_1000_179c(0x42, puVar9, 0);
    uVar10 = puVar9 | paVar4;
    if(uVar10 == 0x0)
    {
        paVar4 = (Struct160 *)0x0;
        uVar10 = 0x0;
    }
    else
    {
        hwnd = SEG_1008;
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar9,
                            0x1,
                            0xa00c2,
                            0x101,
                            0xff0100,
                            str_var1((iVar11 + 0x6), 0x108),
                            uVar10,
                            param_3);
    }
    paStack6 = paVar4;
    puStack4 = uVar10;
    enable_win_1040_9234(str_var1(uVar10, paVar4), BVar18, hwnd);
    HStack8 = GetDC16(hwnd);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x50, local_58);
    pcVar17  = local_58;
    pCVar5   = str_op_1000_3da4(str_var1(param_3, pcVar17));
    DVar16   = GetTextExtent16(SEG_1000, pCVar5, (u16)pcVar17);
    IStack90 = (u16)(DVar16 >> 0x10);
    IStack92 = (u16)DVar16;
    CreateWindow16(LAST_SEGMENT,
                   0x0,
                   (globals->hinst_1050_038c),
                   0x7cd,
                   (iVar11 + 0x6),
                   IStack90,
                   IStack92,
                   0xad,
                   0x22,
                   0x0,
                   0x5000);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x50, local_58);
    pcVar17  = local_58;
    pCVar5   = str_op_1000_3da4(str_var1(param_3, pcVar17));
    DVar16   = GetTextExtent16(SEG_1000, pCVar5, (u16)pcVar17);
    IStack90 = (u16)(DVar16 >> 0x10);
    IStack92 = (u16)DVar16;
    ReleaseDC16((HWND16)LAST_SEGMENT, HStack8);
    CreateWindow16(LAST_SEGMENT,
                   0x0,
                   (globals->hinst_1050_038c),
                   0x7ce,
                   (iVar11 + 0x6),
                   IStack90,
                   IStack92,
                   0xc5,
                   0x22,
                   0x0,
                   0x5000);
    local_64 = 0x5a000a;
    uStack96 = 0x140050;
    puVar6   = &local_64;
    create_window_1040_7620(NULL, NULL, 0, NULL, NULL, NULL);
    local_64 = local_64 & 0xffff | (local_64 + 0x14) << 0x10;
    create_window_1040_7620(NULL, NULL, 0, NULL, NULL, NULL);
    local_64 = local_64 & 0xffff | (local_64 + 0x14) << 0x10;
    create_window_1040_7620(NULL, NULL, 0, NULL, NULL, NULL);
    SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x4010001);
    uVar1  = *(iVar11 + 0x94);
    iVar7  = uVar1;
    uVar1  = uVar1 & 0xffff0000;
    uVar14 = (iVar11 + 0x6);
    uVar13 = (uVar1 >> 0x10);
    SetWindowPos16((HWND16)LAST_SEGMENT,
                   0x40,
                   (iVar7 + 0x10),
                   (iVar7 + 0xe),
                   (iVar7 + 0xc),
                   (uVar1 | iVar7 + 0xa),
                   0x0);
    globals->dat_1050_0ecc = 0x0;
    u_var2                 = (iVar11 + 0x94);
    ppcVar3                = ((iVar11 + 0x94) + 0x10);
    (**ppcVar3)(LAST_SEGMENT, u_var2, (u_var2 >> 0x10), uVar14, puVar6);
    pass1_1010_2ee2((iVar11 + 0x94), param_3, SEG_1010);
    PostMessage16(SEG_1010, 0x0, 0x0, 0x111010a);
}


void pass1_1040_57d4(Struct1 *param_1, u8 *param_2, i16 param_3, u16 param_4, u16 param_5)

{
    pass1_1040_5d42(param_1);
    pass1_1040_5eaa(param_1);
    pass1_1040_5dc4(param_1, param_2, param_3, param_5);
    unk_win_ui_op_1040_b230(NULL, param_1, param_4, param_5);
}
