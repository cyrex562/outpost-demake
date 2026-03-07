#include "ui_ops_3.h"

#include "address_tables/function_tables.h"
#include "draw_ops/draw_ops_3.h"
#include "fn_ptr_ops/fn_ptr_ops_3.h"
#include "fn_ptr_ops/fn_ptr_ops_6.h"
#include "op_int.h"
#include "op_winapi.h"
#include "op_windef.h"
#include "string_ops.h"
#include "structs/structs_1xx/structs_10x.h"
#include "sys_ops/sys_ops_12.h"
#include "sys_ops/sys_ops_2.h"
#include "sys_ops/sys_ops_9.h"
#include "ui_ops_1.h"
#include "unk/unk_12.h"
#include "unk/unk_17.h"
#include "unk/unk_5.h"
#include "unk/unk_6.h"
#include "utils.h"
#include "win_ops/win_ops_1.h"
#include "win_ops/win_ops_2.h"
#include "win_ops/win_ops_4.h"

#include <stddef.h>

void destroy_win_1038_ef3a(Struct31 *param_1, HWND16 param_2) {
    Struct31 *iVar1;
    Struct31 *uVar1;

    uVar1 = (Struct31 * )(param_1 >> 0x10);
    iVar1            = (Struct31 *)param_1;
    param_1          = 0x67c;
    iVar1->fld2_segment = SEG_1040;
    if(iVar1->field_0x96 != 0x0)
    {
        DestroyWindow16(param_2);
        iVar1->field_0x96 = 0x0;
    }
    pass1_1038_b6e0(globals->ptr_1050_5b7c, iVar1->field_0x6);
    ui_cleanup_op_1040_782c((Struct18 *)param_1, SEG_1040);
    return;
}

void  win_ui_op_1040_0000(Struct1 *param_1, u8 *param_2, HWND16 param_3)

{
    Struct160 *rect;
    u16          uVar1;
    u16          u_var2;
    u16          uVar3;
    u16          uVar4;
    u16          uVar5;
    i16          unaff_DI;
    u16          uVar6;
    WNDCLASS16  *unaff_SS;
    LRESULT      LVar7;
    u32   uVar8;
    u16          local_24;
    u16          uStack34;
    u16          uStack32;
    u16          uStack30;
    i16          iStack28;
    RECT16       local_1a;
    i16          iStack22;
    u32   uStack18;
    u16          uStack14;
    i16          iStack12;
    i16          iStack10;
    Struct160 *paStack8;
    u16          u_stack6;
    i16          iStack4;

    // Segment:    9
    // Offset:     0006f820
    // Length:     d974
    // Min Alloc:  d974
    // Flags:      0d50
    //     Code
    //     Moveable
    //     Preload
    //     Impure (Non-shareable)
    //
    dialog_ui_fn_1040_78e2(NULL, param_1, param_3);
    iStack4 = 0x8;
    for(iStack10 = 0x0; uVar5 = param_1, uVar6 = (param_1 >> 0x10), iStack10 < iStack4; iStack10 = iStack10 + 0x1)
    {
        unaff_DI = iStack10 * 0xe;
        local_24 = (unaff_DI + 0x5c60);
        uStack34 = (unaff_DI + 0x5c62);
        uStack32 = 0x1;
        uStack30 = 0x1;
        rect     = (Struct160 *)&local_24;
        MapDialogRect16(param_3, (RECT16 *)rect);
        param_3 = SEG_1000;
        mem_op_1000_179c(0x42, param_2, 0);
        uVar1 = param_2 | rect;
        if(uVar1 == 0x0)
        {
            rect  = (Struct160 *)0x0;
            uVar1 = 0x0;
        }
        else
        {
            param_3 = SEG_1008;
            window_op_1008_3bd6(NULL,
                                rect,
                                param_2,
                                0x1,
                                str_var1(local_24, uStack34),
                                0x104,
                                SEG_1020103,
                                str_var1((uVar5 + 0x6), (unaff_DI + 0x5c64)),
                                uVar1,
                                unaff_SS);
        }
        paStack8 = rect;
        u_stack6  = uVar1;
        LVar7    = win_ui_op_1040_0558(param_1, iStack10, param_3);
        param_2  = (LVar7 >> 0x10);
    }
    move_win_1040_826c(param_1, -0x1, 0xffff);
    uStack18 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x48, unaff_SS, param_2, unaff_DI);
    u_var2    = (uStack18 >> 0x10);
    iStack12 = (uStack18 + 0xa);
    uStack14 = (uStack18 + 0xc);
    GetWindowRect16(SEG_1010, &local_1a);
    uVar3      = iStack12 >> 0xf;
    iStack28   = iStack22 - local_1a.x;
    local_1a.x = (iStack12 / 0x2 - iStack28) + -0x3;
    if(local_1a.x < 0x0)
    {
        local_1a.x = 0x0;
    }
    SetWindowPos16((HWND16)LAST_SEGMENT, 0x41, 0x0, 0x0, local_1a.y, local_1a.x, 0x0);
    uVar8          = pass1_1038_af40(globals->ptr_1050_5b7c, (uVar5 + 0x6), 0x17, uVar3, uVar5, SEG_1038, unaff_SS);
    uVar4          = (uVar8 >> 0x10);
    uVar3          = uVar8;
    (uVar5 + 0x96) = uVar3;
    (uVar5 + 0x98) = uVar4;
    win_1008_5c7c(NULL, _PTR_LOOP_1050_02a0, 0x9e0001, unaff_SS, uVar3);
    (uVar5 + 0x8c) = uVar3;
    return;
}

void win_ui_op_1040_0170(
  Globals *globals, i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5, WNDCLASS16 *param_6)

{
    u16         uVar1;
    BOOL16      BVar2;
    i16         iVar3;
    u8         *in_DX;
    i16         iVar4;
    u8         *extraout_DX;
    i16         unaff_DI;
    u16         uVar5;
    u8          in_AF;
    char       *pcVar6;
    LRESULT     LVar7;
    WPARAM16    w_param;
    u16         uVar8;
    HCURSOR16  *pHVar9;
    WNDCLASS16 *pWVar10;
    HCURSOR16  *pHVar11;
    WNDCLASS16 *pWVar12;
    u32        *local_12a[0x43];
    u16        *puStack30;
    u16         uStack26;
    HCURSOR16   local_18;
    HCURSOR16   local_16;
    u32         uStack20;
    i16         iStack16;
    i16         iStack14;
    u16        *puStack12;
    i16         iStack8;
    i16         iStack6;
    i16         iStack4;

    iStack4 = 0x8;
    iStack6 = 0x0;
    switch(param_4)
    {
    case 0x167:
        enable_win_1040_060e(str_var1(param_2, param_1), 0x3, &SEG_1040, param_6);
        GetDlgItem16((HWND16)&SEG_1040, 0x16b);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
        iStack4 = 0x0;
        break;
    case 0x168:
        enable_win_1040_060e(str_var1(param_2, param_1), 0x3, &SEG_1040, param_6);
        GetDlgItem16((HWND16)&SEG_1040, 0x16b);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
        iStack4 = 0x1;
        break;
    case 0x169:
        enable_win_1040_060e(str_var1(param_2, param_1), 0x3, &SEG_1040, param_6);
        GetDlgItem16((HWND16)&SEG_1040, 0x16b);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
        iStack4 = 0x2;
        break;
    case 0x16a:
        enable_win_1040_060e(str_var1(param_2, param_1), 0x3, &SEG_1040, param_6);
        GetDlgItem16((HWND16)&SEG_1040, 0x16b);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
        iStack4 = 0x3;
        break;
    case 0x16b:
        GetDlgItem16((HWND16)&SEG_1040, 0x16b);
        uVar5 = SUB42(LAST_SEGMENT, 0x0);
        BVar2 = EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
        if((param_1 + 0x92) != 0x3)
        {
            uVar5 = SEG_1008;
            win_1008_5c5c(param_6, BVar2, in_DX, globals->_PTR_LOOP_1050_02a0, 0x1de);
        }
        if((param_1 + 0x92) != 0x8)
        {
            iVar3   = (param_1 + 0x92) * 0xe;
            iStack6 = (iVar3 + 0x5c6c);
            uVar5   = SEG_1010;
            pass1_1010_6604(*(param_1 + 0x8e), (iVar3 + 0x5c66), param_6);
            (param_1 + 0x92) = 0x8;
        }
        for(iStack8 = 0x0; iStack8 < 0x4; iStack8 = iStack8 + 0x1)
        {
            LVar7 = win_ui_op_1040_0558(str_var1(param_2, param_1), iStack8, uVar5);
            in_DX = (LVar7 >> 0x10);
        }
        goto LAB_1040_04da;
    case 0x16c:
        GetDlgItem16((HWND16)&SEG_1040, 0x16d);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
        iStack4          = 0x5;
        (param_1 + 0x94) = 0x5;
        goto LAB_1040_04da;
    case 0x16d:
        GetDlgItem16((HWND16)&SEG_1040, 0x16d);
        BVar2 = EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
        uVar5 = SEG_1008;
        win_1008_5c5c(param_6, BVar2, in_DX, globals->_PTR_LOOP_1050_02a0, 0x1de);
        if((param_1 + 0x94) != 0x8)
        {
            iVar3   = (param_1 + 0x94) * 0xe;
            iStack6 = (iVar3 + 0x5c6c);
            uVar5   = SEG_1010;
            pass1_1010_6604(*(param_1 + 0x8e), (iVar3 + 0x5c66), param_6);
            (param_1 + 0x94) = 0x8;
        }
        LVar7     = win_ui_op_1040_0558(str_var1(param_2, param_1), 0x5, uVar5);
        puStack12 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x39, param_6, (LVar7 >> 0x10), unaff_DI);
        iVar3     = (puStack12 + 0x20);
        pHVar11   = &local_16;
        pHVar9    = &local_18;
        iVar4     = (iVar3 >> 0xf) + 0x200;
        pWVar10   = param_6;
        pWVar12   = param_6;
        iStack16  = iVar3;
        iStack14  = iVar4;
        iStack8   = iVar3;
        pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10),
                        str_var1(iVar4, iVar3));
        uStack20 = str_var1(iVar4, iVar3);
        pass1_1030_2f1a(
          str_var1(iVar4, iVar3), str_var1(pWVar10, pHVar9), str_var1(pWVar12, pHVar11));
        in_DX    = ((local_18 - local_16) >> 0xf);
        local_16 = local_16 + (local_18 - local_16) / 0x2;
        uStack26 = pass1_1030_2fac(uStack20);
        set_window_text_1018_6086(*(param_1 + 0x96), SEG_1018, param_6);
        goto LAB_1040_04da;
    case 0x16e:
        puStack30 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x39, param_6, in_DX, unaff_DI);
        uStack26  = (puStack30 + 0x20);
        local_18  = LoadCursor16(SEG_1010, 0x7f02);
        local_16  = SetCursor16((HCURSOR16)LAST_SEGMENT);
        pass1_1030_532e((Struct100 *)str_var1(param_6, local_12a), (long)uStack26 + 0x2000000, param_6, in_AF);
        fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_6, local_12a));
        pass1_1030_838e(globals->_PTR_LOOP_1050_5748, param_6, in_AF);
        pass1_1030_8334(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10));
        in_DX = extraout_DX;
        SetCursor16(SEG_1030);
        PostMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x111007e);
        DestroyWindow16((HWND16)LAST_SEGMENT);
        local_12a[0] = &globals->u32_1008_389a;
        goto LAB_1040_04da;
    default:
        post_win_msg_1040_7b3c(
          str_var1(param_2, param_1), param_3, param_4, param_4, param_5);
        return;
    }
    (param_1 + 0x92) = iStack4;
LAB_1040_04da:
    if(iStack4 != 0x8)
    {
        uVar5   = (iStack4 * 0xe + 0x5c68);
        w_param = 0x0;
        uVar8   = 0xc;
        pcVar6  = load_string_1010_847e(globals->dat_1050_14cc, SEG_1010);
        LVar7   = SendDlgItemMessage16(SEG_1010, (u16)pcVar6, (pcVar6 >> 0x10), w_param, str_var1(uVar5, uVar8));
        in_DX   = (LVar7 >> 0x10);
    }
    if(iStack6 != 0x0)
    {
        local_12a[0] = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_6, in_DX, unaff_DI);
        uVar1        = (local_12a[0] + 0x20);
        puStack30    = (puStack30 & 0xffff0000 | uVar1);
        if(uVar1 != 0x0)
        {
            PostMessage16(SEG_1010, 0x0, 0x0, str_var1(0x111, iStack6));
        }
    }
}

LRESULT  win_ui_op_1040_0558(u32 param_1, i16 param_2, HWND16 param_3)

{
    i16      iVar1;
    i16      iVar2;
    u16      unaff_SS;
    char    *pcVar3;
    LRESULT  LVar4;
    WPARAM16 w_param;
    u16      uVar5;
    u16      uVar6;

    iVar1 = param_2 * 0xe;
    GetDlgItem16(param_3, (iVar1 + 0x5c64));
    iVar2 = pass1_1010_659a(*(param_1 + 0x8e), (iVar1 + 0x5c66), unaff_SS);
    if((iVar2 == 0x0) && ((iVar1 + 0x5c66) != 0xa))
    {
        EnableWindow16(SEG_1010, 0x0);
        uVar6 = (param_2 * 0xe + 0x5c68);
    }
    else
    {
        EnableWindow16(SEG_1010, 0x1);
        uVar6 = (param_2 * 0xe + 0x5c68);
    }
    uVar5   = 0xc;
    w_param = 0x0;
    pcVar3  = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
    LVar4   = SendDlgItemMessage16(SEG_1010, (u16)pcVar3, (pcVar3 >> 0x10), w_param, str_var1(uVar6, uVar5));
    return LVar4;
}

void enable_win_1040_060e(u32 param_1, i16 param_2, HWND16 param_3, u16 param_4)

{
    u16 *pi_var1;
    i16    iStack10;
    i16    iStack8;

    _iStack8 = (u16 *)str_var1(param_4, &stack0x000a);
    iStack10 = param_2;
    while(true)
    {
        pi_var1 = _iStack8;
        if(iStack10 == 0x0)
            break;
        _iStack8 = (u16 *)(_iStack8 & 0xffff0000 | (iStack8 + 0x2));
        GetDlgItem16(param_3, *pi_var1);
        param_3 = (HWND16)LAST_SEGMENT;
        EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
        iStack10 = iStack10 + -0x1;
    }
    return;
}

void  pass1_1040_073a(Struct18 *param_1)

{
    u16 uVar1;

    uVar1              = (param_1 >> 0x10);
    param_1->field_0x0 = 0xb90;
    param_1->field_0x2 = SEG_1040;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1038);
    return;
}

void  show_win_1040_0766(Struct1 *param_1, u16 param_2)

{
    u8        *in_DX;
    u8        *puVar1;
    i16        unaff_DI;
    u16        unaff_SS;
    u16       *pu_var2;
    i16       *piVar3;
    i16       *piVar4;
    u16        uVar5;
    i16        local_a;
    i16        local_8;
    u32 u_stack6;

    dialog_ui_fn_1040_78e2(NULL, param_1, param_2);
    u_stack6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, unaff_SS, in_DX, unaff_DI);
    puVar1  = (u_stack6 >> 0x10);
    pass1_1010_6118(u_stack6);
    piVar4 = &local_8;
    piVar3 = &local_a;
    uVar5  = unaff_SS;
    pu_var2 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x48, unaff_SS, puVar1, unaff_DI);
    pass1_1008_3e94((pu_var2 & 0xffff0000 | (pu_var2 + 0xe)),
                    str_var1(unaff_SS, piVar3),
                    str_var1(uVar5, piVar4));
    move_win_1040_826c(param_1, local_a + 0x8c, local_8 + 0xb9);
    ShowWindow16(SEG_1008, 0x5);
    return;
}

void  win_ui_op_1040_07dc(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5, u16 param_6, HWND16 param_7, u16 param_8)

{
    void **ppcVar1;
    u16       IVar2;
    BOOL16      BVar3;
    u8         *puVar4;
    u8         *puVar5;
    i16         unaff_DI;
    u16         uVar6;
    u16        *puVar7;
    u32 *puVar8;
    u8          uVar9;
    u8          uVar10;
    u32  uStack2060;
    char        local_806[0x400];
    u32  local_406[0x100];
    u32  u_stack6;

    u_stack6 = 0x0;
    if(param_5 == 0x73)
    {
        enable_window_1040_0acc(param_1, param_2, 0x0, param_7);
        puVar4     = pass1_1008_5fd8(param_8, param_6);
        uStack2060 = str_var1(param_6, puVar4);
        puVar5     = param_6;
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_806);
        IVar2        = MessageBox16(SEG_1010, (s_New_failed_in_Op__Op_1050_0020 + 0x14), local_806, param_8);
        local_406[0] = uStack2060;
        uVar6        = SEG_1000;
        fn_ptr_1000_17ce((Struct18 *)str_var1(param_6, puVar4), SEG_1000);
        if(IVar2 == 0x6)
        {
            uVar6 = SUB42(LAST_SEGMENT, 0x0);
            PostMessage16(SEG_1000, 0x0, 0x0, 0x11100cb);
            BVar3   = post_win_msg_1040_7b3c(
              str_var1(param_2, param_1), param_3, param_4, 0x1, LAST_SEGMENT);
            u_stack6 = str_var1(puVar5, BVar3);
        }
    }
    else
    {
        uVar9 = (param_2 >> 0x8);
        if(param_5 < 0x74)
        {
            if(param_5 == 0x6e)
            {
                (globals->ptr_1050_5b7c + 0xae) = 0x99;
                puVar8                       = pass1_1038_af40(globals->ptr_1050_5b7c, (param_1 + 0x6), 0x2, param_6, param_1, SEG_1038, param_8);
                ppcVar1                      = (*puVar8 + 0x3c);
                (**ppcVar1)(SEG_1038, puVar8, (puVar8 >> 0x10));
                SetFocus16((HWND16)SEG_1038);
                return;
            }
            if(0x6e < param_5)
            {
            LAB_1040_09f9:
                post_win_msg_1040_7b3c(CONCAT13(uVar9, CONCAT12(param_2, param_1)), param_3, param_4, param_5, param_7);
                return;
            }
            if(param_5 == '\x02')
            {
            LAB_1040_09b4:
                post_win_msg_1040_7b3c(CONCAT13(uVar9, CONCAT12(param_2, param_1)), 0x0, 0x0, 0x2, param_7);
                PostMessage16(param_7, 0x0, 0x0, 0x11100ee);
                return;
            }
            if(param_5 != 'd')
                goto LAB_1040_09f9;
            uVar9  = 0x0;
            uVar10 = 0x0;
            uVar6  = SUB42(LAST_SEGMENT, 0x0);
            PostMessage16(param_7, 0x0, 0x0, 0x1110064);
            goto LAB_1040_0821;
        }
        if(param_5 != 0x74)
        {
            if(param_5 == 0xee)
                goto LAB_1040_09b4;
            if(param_5 == 0x13d)
            {
                enable_window_1040_0acc(param_1, param_2, 0x1, param_7);
                return;
            }
            goto LAB_1040_09f9;
        }
        enable_window_1040_0acc(param_1, param_2, 0x0, param_7);
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_406);
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_806);
        uVar6 = SUB42(LAST_SEGMENT, 0x0);
        IVar2 = MessageBox16(SEG_1010, (s_New_failed_in_Op__Op_1050_0020 + 0x14), local_406, param_8);
        if(IVar2 == 0x6)
        {
            PostMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x111007a);
            BVar3   = post_win_msg_1040_7b3c(
              str_var1(param_2, param_1), param_3, param_4, 0x1, LAST_SEGMENT);
            u_stack6 = str_var1(param_6, BVar3);
            puVar7  = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_8, param_6, unaff_DI);
            uVar6   = SEG_1010;
            pass1_1010_60fa(puVar7);
        }
    }
    uVar9  = 0x1;
    uVar10 = 0x0;
LAB_1040_0821:
    enable_window_1040_0acc(param_1, param_2, CONCAT11(uVar10, uVar9), uVar6);
    return;
}

void  enable_window_1040_0acc(u16 param_1, u16 param_2, BOOL16 param_3, HWND16 param_4)

{
    BOOL16 BVar1;

    BVar1 = IsWindow16(param_4);
    if(BVar1 != 0x0)
    {
        GetDlgItem16((HWND16)LAST_SEGMENT, 0x64);
        BVar1 = IsWindow16((HWND16)LAST_SEGMENT);
        if(BVar1 != 0x0)
        {
            EnableWindow16((HWND16)LAST_SEGMENT, param_3);
            GetDlgItem16((HWND16)LAST_SEGMENT, 0x74);
            EnableWindow16((HWND16)LAST_SEGMENT, param_3);
            GetDlgItem16((HWND16)LAST_SEGMENT, 0x73);
            EnableWindow16((HWND16)LAST_SEGMENT, param_3);
            GetDlgItem16((HWND16)LAST_SEGMENT, 0x6e);
            EnableWindow16((HWND16)LAST_SEGMENT, param_3);
            GetDlgItem16((HWND16)LAST_SEGMENT, 0xee);
            EnableWindow16((HWND16)LAST_SEGMENT, param_3);
        }
    }
    return;
}

void  pass1_1040_0c54(Struct18 *param_1, u16 param_2)

{
    u16 uVar1;

    uVar1              = (param_1 >> 0x10);
    param_1->field_0x0 = 0xdb0;
    param_1->field_0x2 = SEG_1040;
    (param_1 + 0x8e)   = 0x0;
    ui_cleanup_op_1040_782c(param_1, param_2);
    return;
}

void  show_win_1040_0c7c(Struct1 *param_1, u16 param_2, u16 param_3)

{
    u32 uVar1;
    u32 local_6;

    dialog_ui_fn_1040_78e2(NULL, param_1, param_2);
    uVar1 = (param_1 + 0x8e);
    pass1_1010_4f30(uVar1, (uVar1 >> 0x10),
                    str_var1(param_3, &local_6),
                    str_var1(param_3, &local_6 + 0x2));
    move_win_1040_826c(param_1, (u16)local_6, (BOOL16)(local_6 >> 0x10));
    ShowWindow16(SEG_1010, 0x5);
    return;
}

void  pass1_1038_e03e(u32 param_1)

{
    u32 uVar1;
    u16        u_var2;
    i16        iVar3;
    u16        uVar4;
    u16        uVar5;
    u32        uVar6;
    i16        iStack6;

    uVar4 = (param_1 >> 0x10);
    u_var2 = pass1_1010_0886();
    for(iStack6 = 0x1; iStack6 <= u_var2; iStack6 = iStack6 + 0x1)
    {
        uVar1 = (param_1 + 0x92);
        uVar6 = pass1_1010_08e2(uVar1, (uVar1 >> 0x10), iStack6);
        uVar1 = (param_1 + 0x96);
        uVar5 = (uVar1 >> 0x10);
        iVar3 = uVar1;
        if((iVar3 + iStack6 * 0x4) != 0x0)
        {
            enable_win_1040_9234(*(iVar3 + iStack6 * 0x4), *(BOOL16 *)(uVar6 + 0x6), SEG_1040);
        }
    }
    return;
}

void  pass1_1038_e16e(Struct18 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1038_e264;//0xe264;
    param_1->field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}

void  check_radio_btn_show_win_1038_e19a(Struct1 *param_1)

{
    dialog_ui_fn_1040_78e2(NULL, param_1, SEG_1040);
    CheckRadioButton16((HWND16)SEG_1040, 0x1807, 0x1807, 0x1807);
    move_win_1040_826c(param_1, 0xc8, 0xc8);
    ShowWindow16((HWND16)SEG_1040, 0x5);
}

void  pass1_1038_e308(Struct18 *param_1) {
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    param_1->field_0x0 = addr_table_1038_e62e;//0xe62e;
    (iVar1 + 0x2) = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (iVar1 + 0x6));
    fn_ptr_1000_17ce((iVar1 + 0x8e), SEG_1000);
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
}

void  win_ui_op_1038_e348(Struct1 *param_1)

{
    u32   uVar1;
    u16          u_var2;
    Struct160 *rect;
    u8          *in_DX;
    u8          *puVar3;
    u16          uVar4;
    i16          iVar5;
    i16          iVar6;
    i16          unaff_DI;
    u16          uVar7;
    u16          uVar8;
    u16          unaff_SS;
    u16          local_22;
    u16          uStack32;
    u16          uStack30;
    u16          uStack28;
    u16         *puStack26;
    i16          iStack10;
    u16          uStack8;
    u16         *pu_stack6;

    dialog_ui_fn_1040_78e2(NULL, param_1, SEG_1040);
    pu_stack6           = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, unaff_SS, in_DX, unaff_DI);
    globals->dat_1050_5f2e = (pu_stack6 >> 0x10);
    uStack8            = pass1_1010_088c();
    if(globals->_PTR_LOOP_1050_5f2c == 0x0)
    {
        globals->dat_1050_5f2c = mem_op_1000_160a(globals->PTR_LOOP_1050_5f2e, SEG_1000);
    }
    else
    {
    }
    puStack26      = str_var1(globals->PTR_LOOP_1050_5f2e, globals->dat_1050_5f2c);
    u_var2          = fn_ptr_op_1000_1708((uStack8 + 0x2) * 0x4, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
    uVar7          = (param_1 >> 0x10);
    iVar5          = param_1;
    (iVar5 + 0x8e) = u_var2;
    (iVar5 + 0x90) = globals->dat_1050_5f2e;
    for(iStack10 = 0x1; iStack10 <= uStack8; iStack10 = iStack10 + 0x1)
    {
        puStack26 = pass1_1010_091e(pu_stack6, (pu_stack6 >> 0x10), iStack10);
        puVar3    = (puStack26 >> 0x10);
        local_22  = *puStack26;
        uStack32  = (puStack26 + 0x2);
        uStack30  = 0x1;
        uStack28  = 0x1;
        rect      = (Struct160 *)&local_22;
        MapDialogRect16(SEG_1010, (RECT16 *) rect);
        mem_op_1000_179c(0x42, puVar3, 0);
        uVar4 = puVar3 | rect;
        if(uVar4 == 0x0)
        {
            uVar1                    = (iVar5 + 0x8e);
            (uVar1 + iStack10 * 0x4) = 0x0;
        }
        else
        {
            window_op_1008_3bd6(NULL,
                                rect,
                                puVar3,
                                0x0,
                                str_var1(local_22, uStack32),
                                0x101,
                                0xff0100,
                                str_var1((iVar5 + 0x6), (puStack26 + 0x4)),
                                uVar4,
                                unaff_SS);
            uVar1                                     = (iVar5 + 0x8e);
            uVar8                                     = (uVar1 >> 0x10);
            iVar6                                     = uVar1;
            *(Struct160 **)(iVar6 + iStack10 * 0x4) = rect;
            (iVar6 + iStack10 * 0x4 + 0x2)            = uVar4;
        }
        uVar1 = (iVar5 + 0x8e);
        uVar8 = (uVar1 >> 0x10);
        iVar6 = uVar1;
        if((iVar6 + iStack10 * 0x4) != 0x0)
        {
            enable_win_1040_9234(*(iVar6 + iStack10 * 0x4), *(BOOL16 *)(puStack26 + 0x6), SEG_1040);
        }
    }
    move_win_1040_826c(param_1, -0x1, 0xffff);
    ShowWindow16((HWND16)SEG_1040, 0x5);
    return;
}

void  pass1_1038_e6f0(Struct18 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1038_e92e;//0xe92e;
    param_1->field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}

void  unk_win_ui_op_1038_e71c(Struct1 *param_1, u16 param_2)

{
    u16         extraout_DX;
    i16         iVar1;
    u16         u_var2;
    u16         unaff_SS;
    Struct18 *paStack6;

    dialog_ui_fn_1040_78e2(NULL, param_1, SEG_1040);
    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    unk_load_str_op_1010_2c34((iVar1 + 0x8e));
    paStack6 = (Struct18 *)str_var1(extraout_DX, param_2);
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (iVar1 + 0x10)),
                         str_var1(extraout_DX, param_2));
    fn_ptr_1000_17ce(paStack6, SEG_1000);
    move_win_1040_826c(param_1, -0x1, 0xffff);
    ShowWindow16((HWND16)SEG_1040, 0x5);
    (iVar1 + 0x92) = 0x1;
    unk_win_msg_op_1008_9510((param_1 & 0xffff0000 | (iVar1 + 0x92)), SEG_1008, unaff_SS);
    DestroyWindow16(SEG_1008);
    return;
}

void  chk_is_dlg_btn_checked_1038_e7a0(Struct62 *param_1, i16 param_2)

{
    u32  uVar1;
    u16         u_var2;
    Struct62 *iVar3;
    u16         uVar3;
    HWND16      unaff_CS;

    iVar3 = (Struct62 *)param_1;
    uVar3 = (param_1 >> 0x10);
    if(param_2 == 0x0)
    {
        uVar1          = iVar3->field_0x8e;
        (uVar1 + 0x10) = 0x1;
        uVar1          = iVar3->field_0x8e;
        (uVar1 + 0xa)  = 0x0;
        uVar1          = iVar3->field_0x8e;
        (uVar1 + 0xc)  = 0x0;
        uVar1          = iVar3->field_0x8e;
        (uVar1 + 0xe)  = 0x0;
    }
    else
    {
        u_var2 = IsDlgButtonChecked(unaff_CS, 0x1827);
        if(u_var2 == 0x0)
        {
            u_var2 = IsDlgButtonChecked((HWND16)LAST_SEGMENT, 0x1828);
            if(u_var2 == 0x0)
            {
                uVar1         = iVar3->field_0x8e;
                (uVar1 + 0xa) = 0x0;
            }
            else
            {
                uVar1         = iVar3->field_0x8e;
                (uVar1 + 0xa) = 0x2;
            }
        }
        else
        {
            uVar1         = iVar3->field_0x8e;
            (uVar1 + 0xa) = 0x1;
        }
        u_var2 = IsDlgButtonChecked((HWND16)LAST_SEGMENT, s_vrpal_bmp_1050_183a);
        if(u_var2 == 0x0)
        {
            u_var2 = IsDlgButtonChecked((HWND16)LAST_SEGMENT, s_vrpal_bmp_1050_183a + 0x1);
            if(u_var2 == 0x0)
            {
                uVar1         = iVar3->field_0x8e;
                (uVar1 + 0xc) = 0x0;
            }
            else
            {
                uVar1         = iVar3->field_0x8e;
                (uVar1 + 0xc) = 0x2;
            }
        }
        else
        {
            uVar1         = iVar3->field_0x8e;
            (uVar1 + 0xc) = 0x1;
        }
        u_var2 = IsDlgButtonChecked((HWND16)LAST_SEGMENT, s_vrpal_bmp_1050_183a + 0x2);
        if(u_var2 == 0x0)
        {
            u_var2 = IsDlgButtonChecked((HWND16)LAST_SEGMENT, s_vrpal_bmp_1050_183a + 0x3);
            if(u_var2 == 0x0)
            {
                uVar1         = iVar3->field_0x8e;
                (uVar1 + 0xe) = 0x0;
            }
            else
            {
                uVar1         = iVar3->field_0x8e;
                (uVar1 + 0xe) = 0x2;
            }
        }
        else
        {
            uVar1         = iVar3->field_0x8e;
            (uVar1 + 0xe) = 0x1;
        }
        uVar1          = iVar3->field_0x8e;
        (uVar1 + 0x10) = 0x0;
    }
    iVar3->field_0x92 = 0x0;
    return;
}

void  pass1_1038_e9ec(Struct18 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1038_eb32;//0xeb32;
    param_1->field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}

void  win_ui_op_1038_ea18(Struct1 *param_1)

{
    u16  IVar1;
    BOOL16 BVar2;
    RECT16 local_10[0x2];
    HWND16 HStack8;
    u32    u_stack6;

    dialog_ui_fn_1040_78e2(NULL, param_1, SEG_1040);
    u_stack6 = pass1_1010_375e(*(param_1 + 0x8e));
    HStack8 = GetDlgItem16(SEG_1010, 0xfa5);
    SendMessage16((HWND16)LAST_SEGMENT, u_stack6, (WPARAM16)(u_stack6 >> 0x10), 0xc0000);
    GetWindowRect16((HWND16)LAST_SEGMENT, local_10);
    BVar2 = 0x4;
    IVar1 = GetSystemMetrics16((u16)LAST_SEGMENT);
    move_win_1040_826c(param_1, IVar1 + local_10[0].y + 0x5, BVar2);
    ShowWindow16((HWND16)SEG_1040, 0x5);
    return;
}

void  win_ui_op_1038_eaa2(u32 param_1, i16 param_2, HWND16 param_3, WPARAM16 param_4)

{
    LRESULT LVar1;
    u8      local_54[0x52];

    if(param_2 != 0x0)
    {
        GetDlgItem16(param_3, 0xfa5);
        LVar1 = SendMessage16((HWND16)LAST_SEGMENT, local_54, param_4, 0xd0050);
        pass1_1010_3770(*(param_1 + 0x8e), str_var1(param_4, local_54), (LVar1 >> 0x10));
        param_3 = (HWND16)LAST_SEGMENT;
        PostMessage16(SEG_1010, 0x0, 0x0, 0x11100fb);
    }
    DestroyWindow16(param_3);
    return;
}

void  win_dlg_op_1038_c95e(u32 param_1, i16 param_2)

{
    u32 uVar1;
    u16        u_var2;
    i16        iVar3;
    u16        uVar4;
    HWND16     unaff_CS;

    iVar3 = param_1;
    uVar4 = (param_1 >> 0x10);
    if(param_2 == 0x0)
    {
        uVar1         = (iVar3 + 0x8e);
        (uVar1 + 0xa) = 0x0;
    }
    else
    {
        u_var2 = IsDlgButtonChecked(unaff_CS, 0xfac);
        if(u_var2 == 0x0)
        {
            unaff_CS = (HWND16)LAST_SEGMENT;
            u_var2    = IsDlgButtonChecked((HWND16)LAST_SEGMENT, 0xfad);
            if(u_var2 == 0x0)
            {
                unaff_CS = (HWND16)LAST_SEGMENT;
                u_var2    = IsDlgButtonChecked((HWND16)LAST_SEGMENT, 0xfae);
                if(u_var2 == 0x0)
                {
                    unaff_CS = (HWND16)LAST_SEGMENT;
                    u_var2    = IsDlgButtonChecked((HWND16)LAST_SEGMENT, 0xfaf);
                    if(u_var2 == 0x0)
                    {
                        unaff_CS = (HWND16)LAST_SEGMENT;
                        u_var2    = IsDlgButtonChecked((HWND16)LAST_SEGMENT, 0xfb0);
                        if(u_var2 != 0x0)
                        {
                            uVar1         = (iVar3 + 0x8e);
                            (uVar1 + 0xa) = 0x5;
                        }
                    }
                    else
                    {
                        uVar1         = (iVar3 + 0x8e);
                        (uVar1 + 0xa) = 0x4;
                    }
                }
                else
                {
                    uVar1         = (iVar3 + 0x8e);
                    (uVar1 + 0xa) = 0x3;
                }
            }
            else
            {
                uVar1         = (iVar3 + 0x8e);
                (uVar1 + 0xa) = 0x2;
            }
        }
        else
        {
            uVar1         = (iVar3 + 0x8e);
            (uVar1 + 0xa) = 0x1;
            unaff_CS      = (HWND16)LAST_SEGMENT;
        }
    }
    DestroyWindow16(unaff_CS);
    globals->PTR_LOOP_1050_5b80 = 0x0;
    return;
}

void  pass1_1038_cb30(Struct18 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1038_cc9a;//0xcc9a;
    param_1->field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}


void  show_win_1038_cb5c(Struct1 *param_1)

{
    u32  uVar1;
    u16         u_var2;
    u16         in_DX;
    u8         *puVar3;
    u16         uVar4;
    u16         uVar5;
    WNDCLASS16 *unaff_SS;
    u16        *puVar6;
    u16        *puVar7;
    i16         iStack10;

    dialog_ui_fn_1040_78e2(NULL, param_1, SEG_1040);
    uVar5 = (param_1 >> 0x10);
    u_var2 = pass1_1008_eb6e();
    for(iStack10 = 0x0; iStack10 < u_var2; iStack10 = iStack10 + 0x1)
    {
        uVar1  = (param_1 + 0x8e);
        puVar6 = pass1_1008_eb5c(uVar1, (uVar1 >> 0x10), iStack10);
        puVar3 = (puVar6 >> 0x10);
        puVar7 = puVar6;
        mem_op_1000_179c(0x42, puVar3, 0);
        uVar4 = (puVar7 >> 0x10);
        in_DX = uVar4 | (Struct160 *)puVar7;
        if(puVar7 != 0x0)
        {
            window_op_1008_3bd6(NULL,
                                (Struct160 *)puVar7,
                                uVar4,
                                0x0,
                                str_var1(*puVar6, (puVar6 + 0x2)),
                                0x101,
                                0xff0100,
                                str_var1((param_1 + 0x6), (puVar6 + 0x4)),
                                in_DX,
                                unaff_SS);
        }
    }
    win_1008_5c7c(NULL, _PTR_LOOP_1050_02a0, 0x90001, unaff_SS, u_var2);
    ShowWindow16(SEG_1008, 0x5);
    return;
}


void  destroy_window_1038_cc00(i16 param_1, u16 param_2, u16 param_3, u32 param_4)

{
    u16         uVar1;
    u8         *in_DX;
    i16         unaff_DI;
    WNDCLASS16 *unaff_SS;
    i16         iVar2;

    uVar1 = param_4 - 0x1cd;
    if(uVar1 == 0x0)
    {
        iVar2 = 0x1;
    }
    else
    {
        uVar1 = param_4 - 0x1ce;
        if(uVar1 == 0x0)
        {
            iVar2 = 0x2;
        }
        else
        {
            uVar1 = param_4 - 0x1cf;
            if(uVar1 == 0x0)
            {
                iVar2 = 0x3;
            }
            else
            {
                uVar1 = param_4 - 0x1d0;
                if(uVar1 == 0x0)
                {
                    iVar2 = 0x4;
                }
                else
                {
                    uVar1 = param_4 - 0x1d1;
                    if(uVar1 != 0x0)
                    {
                        post_win_msg_1040_7b3c(str_var1(param_2, param_1), param_3, param_4, param_4, SEG_1040);
                        return;
                    }
                    iVar2 = 0x5;
                }
            }
        }
    }
    pass1_1008_eb74((param_1 + 0x8e), iVar2, in_DX, unaff_DI, unaff_SS);
    if(uVar1 != 0x0)
    {
        win_1008_5c7c(NULL, _PTR_LOOP_1050_02a0, str_var1(uVar1, 0x1), unaff_SS, uVar1);
        DestroyWindow16(SEG_1008);
    }
    return;
}


void  pass1_1038_cd5c(Struct18 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1038_cf00;//0xcf00;
    param_1->field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}


void  destroy_window_1038_cd88(Struct1 *param_1)

{
    u16 unaff_SS;

    dialog_ui_fn_1040_78e2(NULL, param_1, SEG_1040);
    move_win_1040_826c(param_1, -0x1, 0xffff);
    ShowWindow16((HWND16)SEG_1040, 0x5);
    (param_1 + 0x92) = 0x1;
    unk_win_msg_op_1008_9510((param_1 & 0xffff0000 | (param_1 + 0x92)), SEG_1008, unaff_SS);
    DestroyWindow16(SEG_1008);
    return;
}


void  check_dlg_btn_checked_1038_cdd6(Struct61 *param_1, i16 param_2, HWND16 param_3)

{
    u32  uVar1;
    u16         u_var2;
    Struct61 *iVar3;
    u16         uVar3;

    iVar3 = (Struct61 *)param_1;
    uVar3 = (param_1 >> 0x10);
    if(param_2 == 0x0)
    {
        uVar1         = iVar3->field_0x8e;
        (uVar1 + 0xa) = 0x0;
    }
    else
    {
        u_var2 = IsDlgButtonChecked(param_3, 0x182e);
        if(u_var2 == 0x0)
        {
            u_var2 = IsDlgButtonChecked((HWND16)LAST_SEGMENT, 0x182f);
            if(u_var2 == 0x0)
            {
                u_var2 = IsDlgButtonChecked((HWND16)LAST_SEGMENT, 0x1829);
                if(u_var2 == 0x0)
                {
                    u_var2 = IsDlgButtonChecked((HWND16)LAST_SEGMENT, 0x182a);
                    if(u_var2 == 0x0)
                    {
                        u_var2 = IsDlgButtonChecked((HWND16)LAST_SEGMENT, 0x182c);
                        if(u_var2 == 0x0)
                        {
                            u_var2 = IsDlgButtonChecked((HWND16)LAST_SEGMENT, 0x182d);
                            if(u_var2 != 0x0)
                            {
                                uVar1         = iVar3->field_0x8e;
                                (uVar1 + 0xa) = 0x7;
                            }
                        }
                        else
                        {
                            uVar1         = iVar3->field_0x8e;
                            (uVar1 + 0xa) = 0x6;
                        }
                    }
                    else
                    {
                        uVar1         = iVar3->field_0x8e;
                        (uVar1 + 0xa) = 0x4;
                    }
                }
                else
                {
                    uVar1         = iVar3->field_0x8e;
                    (uVar1 + 0xa) = 0x3;
                }
            }
            else
            {
                uVar1         = iVar3->field_0x8e;
                (uVar1 + 0xa) = 0x2;
            }
        }
        else
        {
            uVar1         = iVar3->field_0x8e;
            (uVar1 + 0xa) = 0x1;
        }
    }
    iVar3->field_0x92 = 0x0;
    return;
}


void  pass1_1038_d276(Struct18 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1038_d6ea;//0xd6ea;
    param_1->field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}


void  win_ui_op_1038_d2a2(Struct1 *param_1)

{
    Struct160 *rect;
    i16          iVar1;
    BOOL16       BVar2;
    u8          *in_DX;
    u8          *puVar3;
    u16          uVar4;
    i16          unaff_DI;
    u16          uVar5;
    HWND16       hwnd;
    HWND16       hwnd_00;
    WNDCLASS16  *unaff_SS;
    char        *pcVar6;
    LRESULT      LVar7;
    WPARAM16     w_param;
    u16          uVar8;
    u16          uVar9;
    u16          uVar10;
    u16          local_16;
    u16          uStack20;
    u16          uStack18;
    u16          uStack16;
    u32   uStack14;
    i16          iStack10;
    u32   uStack8;
    i16          iStack4;

    hwnd = (HWND16)SEG_1040;
    dialog_ui_fn_1040_78e2(NULL, param_1, SEG_1040);
    iStack4 = 0x7;
    for(iStack10 = 0x0; uVar5 = (param_1 >> 0x10), iStack10 < iStack4; iStack10 = iStack10 + 0x1)
    {
        unaff_DI = iStack10 * 0xc;
        local_16 = (unaff_DI + 0x5c0c);
        uStack20 = (unaff_DI + 0x5c0e);
        uStack18 = 0x1;
        uStack16 = 0x1;
        rect     = (Struct160 *)&local_16;
        MapDialogRect16(hwnd, (RECT16 *)rect);
        hwnd_00 = SEG_1000;
        mem_op_1000_179c(0x42, in_DX, 0);
        puVar3 = (in_DX | rect);
        if(puVar3 == 0x0)
        {
            rect  = (Struct160 *)0x0;
            in_DX = 0x0;
        }
        else
        {
            hwnd_00 = SEG_1008;
            window_op_1008_3bd6(NULL,
                                rect,
                                in_DX,
                                0x1,
                                str_var1(local_16, uStack20),
                                0x104,
                                SEG_1020103,
                                str_var1((param_1 + 0x6), (unaff_DI + 0x5c10)),
                                puVar3,
                                unaff_SS);
            in_DX = puVar3;
        }
        uStack8 = str_var1(in_DX, rect);
        hwnd    = hwnd_00;
        if((iStack10 * 0xc + 0x5c12) == 0x0)
        {
            hwnd = (HWND16)LAST_SEGMENT;
            EnableWindow16(hwnd_00, 0x0);
        }
    }
    uVar10   = 0x86;
    uStack14 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x9, unaff_SS, in_DX, unaff_DI);
    uVar4    = (uStack14 >> 0x10);
    iVar1    = pass1_1010_659a(uStack14, uVar10, unaff_SS);
    if(iVar1 == 0x0)
    {
        GetDlgItem16(SEG_1010, 0x14a);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
        uVar8   = 0xc;
        uVar9   = 0x144;
        w_param = 0x0;
        pcVar6  = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
        LVar7   = SendDlgItemMessage16(SEG_1010, (u16)pcVar6, (pcVar6 >> 0x10), w_param, str_var1(uVar9, uVar8));
        uVar4   = (LVar7 >> 0x10);
    }
    move_win_1040_826c(param_1, -0x1, 0xffff);
    BVar2 = ShowWindow16((HWND16)SEG_1040, 0x5);
    win_1008_5c7c(NULL, _PTR_LOOP_1050_02a0, 0x9a0001, unaff_SS, BVar2);
    *(BOOL16 *)(param_1 + 0x8c) = BVar2;
    return;
}


void  unk_win_ui_op_1038_d400(u8 param_1, u16 param_2, u16 param_3, u32 param_4)

{
    i16         iVar1;
    u16         u_var2;
    BOOL16      BVar3;
    u16         in_DX;
    u8         *puVar4;
    i16         unaff_DI;
    HWND16      hwnd;
    HWND16      hwnd_00;
    WNDCLASS16 *unaff_SS;
    u16        *puVar5;
    LRESULT     LVar6;
    char       *pcVar7;
    u8          in_stack_00000005;
    WPARAM16    WVar8;
    u16         uVar9;
    u16         uVar10;
    u16         uVar11;
    u8          local_c[0x4];
    i16         iStack8;
    u32  u_stack6;

    u_stack6 = 0x0;
    iStack8 = 0x0;
    switch(param_4)
    {
    case 0x145:
        GetDlgItem16((HWND16)SEG_1038, 0x146);
        u_var2   = EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
        u_stack6 = 0x13f0647;
        uVar11  = 0x1f1;
        goto LAB_1038_d490;
    case 0x146:
        u_stack6 = 0x1400648;
        puVar5  = pass1_1008_941a(str_var1(unaff_SS, local_c), 0x1, 0xc4);
        puVar4  = (puVar5 >> 0x10);
        win_1008_5c9e(globals->_PTR_LOOP_1050_02a0,
                      str_var1(unaff_SS, local_c), local_c, puVar4, unaff_SS);
        u_var2  = 0x86;
        puVar5 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x9, unaff_SS, puVar4, unaff_DI);
        pass1_1010_6604(puVar5, u_var2, unaff_SS);
        GetDlgItem16(SEG_1010, 0x145);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
        uVar9  = 0xc;
        uVar10 = 0x13f;
        WVar8  = 0x0;
        pcVar7 = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
        LVar6  = SendDlgItemMessage16(SEG_1010, (u16)pcVar7, (pcVar7 >> 0x10), WVar8, str_var1(uVar10, uVar9));
        puVar4 = (LVar6 >> 0x10);
        GetDlgItem16((HWND16)LAST_SEGMENT, 0x146);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
        iVar1 = pass1_1010_659a(puVar5, 0x86, unaff_SS);
        if(iVar1 == 0x0)
        {
            GetDlgItem16(SEG_1010, 0x14a);
            EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
            uVar9  = 0xc;
            uVar10 = 0x144;
            WVar8  = 0x0;
            pcVar7 = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
            LVar6  = SendDlgItemMessage16(SEG_1010, (u16)pcVar7, (pcVar7 >> 0x10), WVar8, str_var1(uVar10, uVar9));
            puVar4 = (LVar6 >> 0x10);
        }
        hwnd   = SEG_1010;
        puVar5 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, unaff_SS, puVar4, unaff_DI);
        if((puVar5 + 0x20) != 0x0)
        {
            hwnd = (HWND16)LAST_SEGMENT;
            PostMessage16(SEG_1010, 0x0, 0x0, 0x11100af);
        }
        break;
    case 0x147:
        GetDlgItem16((HWND16)SEG_1038, 0x148);
        u_var2   = EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
        u_stack6 = 0x1410647;
        uVar11  = 0x1f5;
        goto LAB_1038_d490;
    case 0x148:
        GetDlgItem16((HWND16)SEG_1038, 0x149);
        u_var2   = EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
        u_stack6 = 0x1420647;
        uVar11  = 0x1f2;
    LAB_1038_d490:
        hwnd = SEG_1008;
        win_1008_5c5c(unaff_SS, u_var2, in_DX, globals->_PTR_LOOP_1050_02a0, uVar11);
        break;
    case 0x149:
        u_stack6 = 0x1430648;
        PostMessage16((HWND16)SEG_1038, 0x0, 0x0, 0x11100b8);
        hwnd = (HWND16)LAST_SEGMENT;
        DestroyWindow16((HWND16)LAST_SEGMENT);
        break;
    case 0x14a:
        GetDlgItem16((HWND16)SEG_1038, 0x145);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
        uVar9  = 0xc;
        uVar10 = 0x140;
        WVar8  = 0x0;
        pcVar7 = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
        hwnd   = (HWND16)LAST_SEGMENT;
        SendDlgItemMessage16(SEG_1010, (u16)pcVar7, (pcVar7 >> 0x10), WVar8, str_var1(uVar10, uVar9));
        break;
    case 0x14b:
        GetDlgItem16((HWND16)SEG_1038, 0x147);
        hwnd = (HWND16)LAST_SEGMENT;
        EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
        break;
    default:
        post_win_msg_1040_7b3c(str_var1(param_2, CONCAT11(in_stack_00000005, param_1)), param_3, param_4, param_4, SEG_1040);
        return;
    }
    hwnd_00 = hwnd;
    if((u_stack6 != 0x0) && (u_stack6 != 0x0))
    {
        hwnd_00 = (HWND16)LAST_SEGMENT;
        BVar3   = IsWindow16(hwnd);
        if(BVar3 != 0x0)
        {
            WVar8   = 0x0;
            uVar9   = 0xc;
            pcVar7  = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
            hwnd_00 = (HWND16)LAST_SEGMENT;
            SendDlgItemMessage16(SEG_1010, (u16)pcVar7, (pcVar7 >> 0x10), WVar8, str_var1(u_stack6, uVar9));
        }
    }
    if(iStack8 != 0x0)
    {
        PostMessage16(hwnd_00, 0x0, 0x0, str_var1(0x111, iStack8));
    }
    return;
}


void  pass1_1038_d7d0(Struct18 *param_1, u16 param_2) {
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    param_1->field_0x0 = addr_table_1038_e0d4;//0xe0d4;
    (iVar1 + 0x2) = SEG_1038;
    if ((iVar1 + 0x90) != 0x0) {
        pass1_1010_1ea6(globals->_PTR_LOOP_1050_02a0, (long) param_1, param_2);
    }
    if ((iVar1 + 0x92) != 0x0) {
        pass1_1010_1ea6(*(iVar1 + 0x92), (long) param_1, param_2);
    }
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (iVar1 + 0x6));
    fn_ptr_1000_17ce((iVar1 + 0x96), SEG_1000);
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}


void window_op_1038_d8b2(Globals *globals, i16 param_1, HINSTANCE16 param_2, u16 param_3)

{
    i16         *pi_var1;
    u32   u_var2;
    u32   uVar3;
    HCURSOR16    HVar4;
    u16          uVar5;
    Struct160 *rect;
    u8          *in_DX;
    u8          *puVar6;
    i16          iVar7;
    i16          iVar8;
    i16          unaff_DI;
    u16          uVar9;
    u16         *puVar10;
    u16         *puVar11;

    HVar4                          = LoadCursor16(param_2, get_rsrc_string(0x7f02));
    *(HCURSOR16 *)(param_1 + -0x2) = HVar4;
    HVar4                          = SetCursor16((HCURSOR16)LAST_SEGMENT);
    *(HCURSOR16 *)(param_1 + -0x4) = HVar4;
    dialog_ui_fn_1040_78e2(NULL, (param_1 + 0x6), &SEG_1040);
    uVar5            = pass1_1010_0886();
    (param_1 + -0x6) = uVar5;
    if(globals->dat_1050_5f2c == 0x0)
    {
        globals->dat_1050_5f2c      = mem_op_1000_160a(globals, in_DX, SEG_1000);
        globals->dat_1050_5f2e      = in_DX;
    }
    else
    {
    }
    (param_1 + -0x1c) = globals->dat_1050_5f2c;
    (param_1 + -0x1a) = globals->dat_1050_5f2e;
    uVar5             = fn_ptr_op_1000_1708(((param_1 + -0x6) + 0x2) * 0x4, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
    u_var2             = (param_1 + 0x6);
    uVar9             = (u_var2 >> 0x10);
    iVar7             = u_var2;
    (iVar7 + 0x96)    = uVar5;
    (iVar7 + 0x98)    = globals->dat_1050_5f2e;
    (param_1 + -0x8)  = 0x1;
    while(iVar7 = (param_1 + -0x6), pi_var1 = (param_1 + -0x8), *pi_var1 == iVar7 || *pi_var1 < iVar7)
    {
        u_var2             = (param_1 + 0x6);
        u_var2             = (u_var2 + 0x92);
        puVar10           = pass1_1010_08e2(u_var2, (u_var2 >> 0x10), (param_1 + -0x8));
        puVar6            = (puVar10 >> 0x10);
        (param_1 + -0x1c) = puVar10;
        (param_1 + -0x1a) = puVar6;
        (param_1 + -0x24) = *puVar10;
        (param_1 + -0x22) = (puVar10 + 0x2);
        (param_1 + -0x20) = 0x1;
        (param_1 + -0x1e) = 0x1;
        rect              = (Struct160 *)(param_1 + -0x24);
        MapDialogRect16(SEG_1010, (RECT16 *) rect);
        mem_op_1000_179c(0x42, puVar6, 0);
        *(Struct160 **) (param_1 + -0x28) = rect;
        (param_1 + -0x26)                  = puVar6;
        globals->dat_1050_5f2e             = (puVar6 | rect);
        if(globals->dat_1050_5f2e == 0x0)
        {
            u_var2                            = (param_1 + 0x6);
            u_var2                            = (u_var2 + 0x96);
            (u_var2 + (param_1 + -0x8) * 0x4) = 0x0;
        }
        else
        {
            u_var2 = (param_1 + 0x6);
            uVar3 = (param_1 + -0x1c);
            window_op_1008_3bd6(NULL,
                                rect,
                                (param_1 + -0x26),
                                0x0,
                                str_var1((param_1 + -0x24), (param_1 + -0x22)),
                                0x101,
                                0xff0100,
                                str_var1((u_var2 + 0x6), (uVar3 + 0x4)),
                                globals->dat_1050_5f2e,
                                param_3);
            u_var2                            = (param_1 + 0x6);
            u_var2                            = (u_var2 + 0x96);
            uVar9                            = (u_var2 >> 0x10);
            iVar7                            = u_var2;
            iVar8                            = (param_1 + -0x8) * 0x4;
            *(Struct160 **)(iVar7 + iVar8) = rect;
            (iVar7 + iVar8 + 0x2)            = globals->dat_1050_5f2e;
        }
        u_var2 = (param_1 + 0x6);
        u_var2 = (u_var2 + 0x96);
        uVar9 = (u_var2 >> 0x10);
        iVar7 = u_var2;
        iVar8 = (param_1 + -0x8) * 0x4;
        if((iVar7 + iVar8) != 0x0)
        {
            u_var2          = (iVar7 + iVar8);
            (u_var2 + 0x3e) = 0x1;
            u_var2          = (param_1 + -0x1c);
            uVar3          = (param_1 + 0x6);
            uVar3          = (uVar3 + 0x96);
            enable_win_1040_9234(*(uVar3 + (param_1 + -0x8) * 0x4), *(BOOL16 *)(u_var2 + 0x6), &SEG_1040);
        }
        pi_var1  = (param_1 + -0x8);
        *pi_var1 = *pi_var1 + 0x1;
    }
    puVar11          = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_3, globals->dat_1050_5f2e, unaff_DI);
    (param_1 + -0xc) = puVar11;
    (param_1 + -0xa) = (puVar11 >> 0x10);
    u_var2            = (param_1 + -0xc);
    SetWindowText16(SEG_1010, (SEGPTR) * (u_var2 + 0x68));
    ShowWindow16((HWND16)LAST_SEGMENT, 0x5);
    SetCursor16((HCURSOR16)LAST_SEGMENT);
}


void  show_win_1038_b634(u32 param_1, HWND16 param_2)

{
    i16    iVar1;
    u16    u_var2;
    HWND16 HVar3;
    u16    uStack4;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((iVar1 + 0xac) == 0x0)
    {
        (iVar1 + 0xac) = 0x1;
        for(uStack4 = 0x1; uStack4 < 0x2b; uStack4 = uStack4 + 0x1)
        {
            HVar3 = param_2;
            if(((uStack4 * 0x4 + iVar1 + 0x2) | (uStack4 * 0x4 + iVar1)) != 0x0)
            {
                HVar3 = (HWND16)LAST_SEGMENT;
                ShowWindow16(param_2, 0x0);
            }
            param_2 = HVar3;
        }
    }
    return;
}


void  show_win_1038_b68a(u32 param_1, HWND16 param_2)

{
    i16    iVar1;
    u16    u_var2;
    HWND16 HVar3;
    u16    uStack4;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((iVar1 + 0xac) != 0x0)
    {
        (iVar1 + 0xac) = 0x0;
        for(uStack4 = 0x1; uStack4 < 0x2b; uStack4 = uStack4 + 0x1)
        {
            HVar3 = param_2;
            if(((uStack4 * 0x4 + iVar1 + 0x2) | (uStack4 * 0x4 + iVar1)) != 0x0)
            {
                HVar3 = (HWND16)LAST_SEGMENT;
                ShowWindow16(param_2, 0x1);
            }
            param_2 = HVar3;
        }
    }
    return;
}


BOOL16  bring_win_to_top_1038_b72e(u32 param_1, i16 param_2, HWND16 in_win_handle_3)

{
    if((param_2 * 0x4 + param_1) != 0x0)
    {
        SetFocus16(in_win_handle_3);
        BringWindowToTop16((HWND16)LAST_SEGMENT);
        return 0x1;
    }
    return 0x0;
}


void  pass1_1038_b7f0(Struct18 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1038_bd70;//0xbd70;
    param_1->field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}


void  win_ui_op_1038_b81c(Struct1 *param_1)

{
    u32        uVar1;
    u32 u_var2;
    void **ppcVar3;
    u16        uVar4;
    BOOL16     win_enabled;
    u8        *in_DX;
    u16        extraout_DX;
    i16        iVar6;
    i16        unaff_DI;
    u16        uVar7;
    HWND16     HVar8;
    HWND16     hwnd_dlg;
    u16        unaff_SS;
    u16       *puVar9;
    i16       *piStack16;
    u16        UStack12;
    i16        iStack10;
    Struct1 *iVar7;
    i16       *piVar5;

    dialog_ui_fn_1040_78e2(NULL, param_1, SEG_1040);
    puVar9         = mixed_1010_20ba(globals->u16_1050_0ed0, 0x6, unaff_SS, in_DX, unaff_DI);
    uVar7          = (param_1 >> 0x10);
    iVar6          = param_1;
    (iVar6 + 0x92) = puVar9;
    (iVar6 + 0x94) = (puVar9 >> 0x10);
    uVar1          = *(iVar6 + 0x92);
    uVar4          = uVar1 + 0x4e;
    uVar1          = uVar1 & 0xffff0000;
    piVar5         = (uVar1 | uVar4);
    iStack10       = 0x0;
    hwnd_dlg       = SEG_1010;
    for(UStack12 = 0x1a0; UStack12 < 0x1b5; UStack12 = UStack12 + 0x1)
    {
        if((iStack10 * 0x2 + uVar4) == UStack12)
        {
            iStack10 = iStack10 + 0x1;
            HVar8    = hwnd_dlg;
        }
        else
        {
            HVar8 = (HWND16)LAST_SEGMENT;
            CheckDlgButton16(hwnd_dlg, 0x2, UStack12);
        }
        hwnd_dlg = HVar8;
    }
    GetDlgItem16(hwnd_dlg, 0xfb1);
    win_enabled = EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
    u_var2       = (iVar6 + 0x92);
    ppcVar3     = ((iVar6 + 0x92) + 0x10);
    (**ppcVar3)(LAST_SEGMENT, u_var2, (u_var2 >> 0x10));
    piStack16 = str_var1(extraout_DX, win_enabled);
    move_win_1040_826c(param_1, (win_enabled + 0x2) + -0x2, (win_enabled + 0x4) + *piStack16 + 0x3);
    ShowWindow16((HWND16)SEG_1040, 0x5);
    pass1_1018_1c9a(*(iVar6 + 0x92), *piVar5);
    GetDlgItem16(SEG_1018, *piVar5);
    SetFocus16((HWND16)LAST_SEGMENT);
    return;
}


u32  win_ui_op_1038_b922(u32 *param_1, u32 param_2, u16 param_3, u16 param_4, HWND16 param_5, WNDCLASS16 *param_6)

{
    i16        *pi_var1;
    void **ppcVar2;
    u16         UVar3;
    BOOL16      BVar4;
    u16         uVar5;
    u8         *puVar6;
    i16         iVar7;
    i16         unaff_DI;
    u16         uVar8;
    u16         uVar9;
    LRESULT     LVar10;
    char       *pcVar11;
    Struct57 *paVar12;
    u32  uVar13;
    CHAR       *pCVar14;
    WNDCLASS16 *pWVar15;
    u8         *puVar16;
    u16         uStack1132;
    char        local_464[0x50];
    CHAR        local_414[0x400];
    u32         uStack20;
    u8         *puStack16;
    u16        *puStack14;
    i16         iStack10;
    HWND16      HStack8;
    BOOL16      BStack6;
    u16         uStack4;

    uVar13  = str_var1(param_4, HStack8);
    BStack6 = 0x0;
    uStack4 = 0x0;
    iVar7   = param_1;
    uVar8   = (param_1 >> 0x10);
    if(param_3 < 0x1b5)
    {
        if(param_3 < 0x1a0)
        {
            uVar13 = str_var1(param_4, HStack8);
            if(param_3 != 0x2)
                goto LAB_1038_bbbf;
        }
        else
        {
            HStack8  = GetDlgItem16(param_5, param_3);
            LVar10   = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x4000000);
            iStack10 = LVar10;
            if(iStack10 == 0x2)
            {
                BStack6 = 0x0;
                uStack4 = 0x0;
                goto LAB_1038_bc26;
            }
            SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, CONCAT13(0x4, CONCAT12(0x1, (iStack10 == 0x0))));
            UVar3 = IsDlgButtonChecked((HWND16)LAST_SEGMENT, param_3);
            if(UVar3 == 0x0)
            {
                pi_var1  = (iVar7 + 0x96);
                *pi_var1 = *pi_var1 + 0x1;
                if((iVar7 + 0x96) == 0x1)
                {
                    GetDlgItem16((HWND16)LAST_SEGMENT, 0xfb1);
                    EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
                }
            }
            else
            {
                pi_var1  = (iVar7 + 0x96);
                *pi_var1 = *pi_var1 + -0x1;
                GetDlgItem16((HWND16)LAST_SEGMENT, 0xfb1);
                BVar4 = IsWindowEnabled16((HWND16)LAST_SEGMENT);
                if(BVar4 == 0x0)
                {
                    GetDlgItem16((HWND16)LAST_SEGMENT, 0xfb1);
                    EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
                }
                if((iVar7 + 0x96) < 0x0)
                {
                    CheckDlgButton16((HWND16)LAST_SEGMENT, 0x0, (iVar7 + 0x98));
                    (iVar7 + 0x96) = 0x0;
                }
                (iVar7 + 0x98) = param_3;
                pass1_1018_1c9a(*(iVar7 + 0x92), param_3);
                puStack14 = pass1_1018_1e78(*(iVar7 + 0x92), -0x1);
                uVar5     = (puStack14 >> 0x10);
                if(puStack14 == 0x0)
                {
                    puStack16 = 0x0;
                }
                else
                {
                    puStack16 = (puStack14 + 0x1c);
                }
                win_1008_5c7c(NULL,
                              _PTR_LOOP_1050_02a0,
                              str_var1(puStack16, 0x1),
                              param_6,
                              puStack16);
            }
        }
        BStack6 = 0x1;
        uStack4 = 0x0;
    }
    else
    {
        if(param_3 == 0xfb1)
        {
            for(uStack1132 = 0x1a0; uVar13 = str_var1(param_4, HStack8), uStack1132 < 0x1b5; uStack1132 = uStack1132 + 0x1)
            {
                UVar3 = IsDlgButtonChecked(param_5, uStack1132);
                if(UVar3 == 0x1)
                {
                    pass1_1008_d818(*(iVar7 + 0x8e), uStack1132);
                    uVar13 = str_var1(param_4, HStack8);
                    goto LAB_1038_bba2;
                }
                param_5 = (HWND16)LAST_SEGMENT;
            }
        }
        else
        {
            if(param_3 != 0xfbe)
                goto LAB_1038_bbbf;
            puStack14 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_6, param_4, unaff_DI);
            puStack16 = globals->PTR_LOOP_1050_13ae;
            if(globals->PTR_LOOP_1050_13ae == (&PTR_LOOP_1050_0000 + 0x1))
            {
                puStack16 = &PTR_LOOP_1050_0002;
            }
            iStack10 = (puStack16 * 0xc + 0x5b84) + -0x1;
            pass1_1008_612e(0x0, iStack10, iStack10);
            uStack20 = pass1_1018_1e78(*(iVar7 + 0x92), ((puStack16 * 0x6 + iStack10) * 0x2 + 0x5b86));
            load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x50, local_464);
            pcVar11 = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
            puVar6  = (pcVar11 >> 0x10);
            uVar5   = wsprintf16(SEG_1010, local_414, &param_6->style);
            uVar9 = SEG_1000;
            mem_op_1000_179c(0xb4, puVar6, 0);
            if((puVar6 | uVar5) == 0x0)
            {
                paVar12 = 0x0;
            }
            else
            {
                pCVar14 = local_414;
                pWVar15 = param_6;
                puVar16 = globals->PTR_LOOP_1050_0396;
                pcVar11 = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
                uVar9   = SUB42(SEG_1040, 0x0);
                paVar12 = pass1_1040_8478(str_var1(puVar6, puVar16), 0x41, pcVar11,
                                          str_var1(pWVar15, pCVar14), puVar16, (pcVar11 >> 0x10));
            }
            ppcVar2 = (paVar12 + 0x74);
            uVar13  = (**ppcVar2)(uVar9, paVar12);
            if(uVar13 != 0x1)
                goto LAB_1038_bc26;
            pass1_1008_d818(*(iVar7 + 0x8e), (uStack20 + 0x1a));
            HStack8 = (HWND16)uVar13;
        LAB_1038_bba2:
            param_5 = SEG_1008;
            win_ui_cursor_op_1038_bc30(NULL, param_1, SEG_1008, param_6);
            HStack8 = (HWND16)uVar13;
        }
        PostMessage16(param_5, 0x0, 0x0, 0x11100ce);
        HStack8 = (HWND16)uVar13;
        param_3 = 0x1;
    LAB_1038_bbbf:
        BStack6 = post_win_msg_1040_7b3c(param_1, param_2, (param_2 >> 0x10), param_3, SEG_1040);
        uStack4 = (uVar13 >> 0x10);
        HStack8 = (HWND16)uVar13;
    }
LAB_1038_bc26:
    return str_var1(uStack4, BStack6);
}


void win_ui_cursor_op_1038_bc30(Globals *globals, u32 param_1, HINSTANCE16 param_2, u16 param_3)

{
    u32 uVar1;
    u8         in_AF;
    u16        local_112;
    u16        uStack272;
    HCURSOR16  HStack6;
    HCURSOR16  cursor_handle_1;

    cursor_handle_1 = LoadCursor16(param_2, get_rsrc_string(0x7f02));
    HStack6 = SetCursor16((HCURSOR16)LAST_SEGMENT);
    uVar1   = (param_1 + 0x8e);
    pass1_1030_532e((Struct100 *)str_var1(param_3, &local_112), (long)(uVar1 + 0xe) + 0x1000000, param_3, in_AF);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_3, &local_112));
    pass1_1030_838e(globals->_PTR_LOOP_1050_5748, param_3, in_AF);
    local_112 = addr_table_1008_380a[36]; // 0x389a
    uStack272 = SEG_1008;
    pass1_1030_8334(globals->_PTR_LOOP_1050_5748);
    SetCursor16(SEG_1030);
}


void  pass1_1038_be4a(Struct18 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1038_c436;//0xc436;
    param_1->field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}


void  pass1_1038_be76(u16 param_1, u32 param_2, u8 *param_3, i16 param_4, u16 param_5)

{
    u16 *puVar1;
    i16  iVar2;

    if(param_2 == 0x0)
    {
        iVar2  = 0x0;
        puVar1 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_5, param_3, param_4);
        pass1_1010_038e(puVar1, iVar2, param_5);
    }
    destroy_win_1040_7b98(str_var1(param_2, param_1), SEG_1040);
    return;
}
