#include "ui_ops_5.h"

#include "address_tables/function_tables.h"
#include "draw_ops/draw_ops_2.h"
#include "fn_ptr_ops/fn_ptr_ops_5.h"
#include "fn_ptr_ops/fn_ptr_ops_6.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "op_int.h"
#include "op_winapi.h"
#include "op_windef.h"
#include "string_ops.h"
#include "struct_20.h"
#include "struct_43.h"
#include "structs/structs_0xx/struct_12.h"
#include "structs/structs_0xx/structs_x.h"
#include "sys_ops/sys_ops_6.h"
#include "ui_ops_1.h"
#include "ui_ops_4.h"
#include "ui_ops_6.h"
#include "unk/unk_11.h"
#include "unk/unk_14.h"
#include "unk/unk_15.h"
#include "unk/unk_18.h"
#include "unk/unk_5.h"
#include "utils.h"
#include "win_ops/win_ops_2.h"
#include "win_ops/win_ops_3.h"

#include <stddef.h>

void  unk_win_op_1020_65cc(Struct60 *param_1, i16 param_2, u16 param_3)

{
    void **ppcVar1;
    u32  u_var2;
    BOOL16      BVar3;
    u16         uVar4;
    Struct59 *iVar4;
    Struct60 *iVar5;
    i16         iVar6;
    Struct60 *uVar7;
    HWND16      hwnd;
    i16         iStack4;

    iVar5 = (Struct60 *)param_1;
    uVar7 = (Struct60 *)(param_1 >> 0x10);
    if(param_2 == 0x1)
    {
        iVar5->field_0x14 = 0x0;
        return;
    }
    if(param_2 == 0x2)
    {
        for(iStack4 = 0x0; iStack4 < 0x5; iStack4 = iStack4 + 0x1)
        {
            iVar4 = (Struct59 *)&iVar5->field_0x18;
            iVar6 = iStack4 * 0x4;
            if(((iVar4 + iVar6 + 0x2) | (iVar4 + iVar6)) != 0x0)
            {
                ppcVar1 = (**(u32 **)(iVar4 + iVar6) + 0x4);
                (**ppcVar1)(param_3, (iVar4 + iVar6));
            }
        }
    }
    else
    {
        if(((0x0 < param_2 + -0x3) && (!SBORROW2(param_2 + -0x3, 0x1))) && (param_2 + -0x4 < 0x4))
        {
            BVar3 = IsIconic16(param_3);
            if(BVar3 == 0x0)
            {
                BVar3 = IsIconic16((HWND16)LAST_SEGMENT);
                if((BVar3 == 0x0) && (u_var2 = iVar5->field_0x14, (u_var2 + 0x24) != 0x0))
                {
                    InvalidateRect16((HWND16)LAST_SEGMENT, (RECT16 *)0x0, 0x0);
                    uVar4 = pass1_1020_64d4(param_1, 0x2);
                    if(uVar4 == 0x0)
                    {
                        pass1_1020_6746(param_1, 0x1, 0x2);
                    }
                    uVar4 = pass1_1020_64d4(param_1, 0x3);
                    if(uVar4 == 0x0)
                    {
                        pass1_1020_6746(param_1, 0x1, 0x3);
                    }
                    hwnd  = SEG_1018;
                    uVar4 = pass1_1018_255e(iVar5->field_0x14);
                    if(uVar4 == 0x0)
                    {
                        hwnd = (HWND16)LAST_SEGMENT;
                        SendMessage16(SEG_1018, 0x0, 0x0, 0x1110069);
                    }
                    else
                    {
                        uVar4 = pass1_1020_64d4(param_1, 0x1);
                        if(uVar4 == 0x0)
                        {
                            pass1_1020_6746(param_1, 0x1, 0x1);
                        }
                    }
                    SendMessage16(hwnd, 0x0, 0x0, 0x11100f0);
                    u_var2 = iVar5->field_0x2c;
                    if((u_var2 + 0x7a) != 0x0)
                    {
                        u_var2          = iVar5->field_0x2c;
                        (u_var2 + 0x7a) = 0x0;
                        SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x1110131);
                        return;
                    }
                }
            }
        }
    }
    return;
}
void unk_win_ui_op_1020_67ce(Globals *globals, Struct20 *in_struct_1, u16 param_2, u32 param_3)

{
    HGDIOBJ16   HVar1;
    HCURSOR16   HVar2;
    Struct20 *iVar3;
    Struct20 *uVar4;
    u16         unaff_SS;

    struct_1020_790e(&in_struct_1->field_0x0, globals->s_TPPOPMENU_1050_43fa, param_2, param_3, unaff_SS);
    uVar4                  = (Struct20 *)(in_struct_1 >> 0x10);
    iVar3                  = (Struct20 *)in_struct_1;
    iVar3[0x1].field_0x10  = 0x0;
    &iVar3[0x1].field_0x14 = 0x0;
    in_struct_1->field_0x0 = addr_table_1020_70e6;//0x70e6;
    iVar3->field_0x2       = SEG_1020;
    unk_str_op_1000_3d3e(&iVar3->field_0x5b, globals->s_VrMode2_1050_4404);
    HVar1                     = GetStockObject16(SEG_1000);
    iVar3->hgdiobj_field_0xc6 = HVar1;
    HVar2                     = LoadCursor16((HINSTANCE16)LAST_SEGMENT, get_rsrc_string(0x7f00));
    iVar3->hcursor_field_0xc4 = HVar2;
    iVar3->field_0xac         = 0x44c00000;
    iVar3->field_0xc8         = 0x2020;
    iVar3->field_0xbc         = (param_3 + 0x8);
    iVar3->field_0xca         = param_2;
    win_ui_reg_class_1008_96d2(globals, in_struct_1, SEG_1008, unaff_SS);
    window_op_1020_6c3a(in_struct_1);
}


void  pass1_1020_687c(u32 param_1, u16 param_2, u16 param_3)

{
    u8 uVar1;

    uVar1 = (u8)param_2;
    get_win_ui_info_op_1020_7a50(param_1, param_3);
    destroy_icon_1020_6bd2(param_1, uVar1, param_3);
}
u16 unk_destroy_win_op_1020_694c(Globals *globals,
                                 u32      param_1,
                                 u16      param_2,
                                 HWND16   param_3,
                                 u16      param_4)

{
    u32  uVar1;
    HWND16      hwnd_var2;
    HWND16      HVar3;
    i16         iVar4;
    struct Struct43 *paVar5;
    u16         uVar6;

    hwnd_var2 = param_2;
    if(param_2 != 0x12b)
    {
        iVar4 = param_1;
        uVar6 = (param_1 >> 0x10);
        if(param_2 < 0x12c)
        {
            if(param_2 == 0x6f)
            {
                paVar5 = unk_io_op_1010_830a(globals->dat_1050_14cc, 0x1f8, param_4);
                hwnd_var2 = WinHelp16(SEG_1010,0x0029, 0x0,
                  str_var1(paVar5, 0x1)); //  (s_New_failed_in_Op__Op_1050_0020 + 0x9)
                return hwnd_var2;
            }
            if(param_2 == 0xeb)
            {
                hwnd_var2 = GetDlgItem16(param_3, 0x1797);
                if(hwnd_var2 != 0x0)
                {
                LAB_1020_6a6f:
                    win_ui_fn_1020_6e98(param_1, (HWND16)LAST_SEGMENT, param_4);
                    return hwnd_var2;
                }
            }
            else
            {
                hwnd_var2 = param_2 - 0xef;
                if(hwnd_var2 == 0x0)
                {
                    pass1_1018_2e28(*(iVar4 + 0xf2));
                    pass1_1008_3e0e(param_1);
                }
                else
                {
                    hwnd_var2 = param_2 - 0x129;
                    if((hwnd_var2 != 0x0) && (hwnd_var2 = param_2 - 0x12a, hwnd_var2 == 0x0))
                    {
                        uVar6 = 0xf012;
                    LAB_1020_69c3:
                        hwnd_var2
                          = PostMessage16(param_3, 0x0, 0x0, str_var1(0x112, uVar6));
                        return hwnd_var2;
                    }
                }
            }
        }
        else
        {
            if(param_2 == 0xbb8)
            {
                HVar3 = GetDlgItem16(param_3, 0x1797);
                if(HVar3 != 0x0)
                {
                    DestroyWindow16((HWND16)LAST_SEGMENT);
                }
                hwnd_var2 = pass1_1018_31d0(*(iVar4 + 0xf2));
                if(hwnd_var2 != 0x0)
                {
                    uVar1 = (iVar4 + 0xf2);
                    hwnd_var2 = pass1_1018_2d9a(uVar1);
                LAB_1020_6a0b:
                    invalidate_rect_1020_735a(*(iVar4 + 0xf6), SEG_1018);
                    return hwnd_var2;
                }
            }
            else
            {
                if(param_2 < 0xbb9)
                {
                    if(param_2 == 0x12c)
                    {
                        uVar6 = 0xf020;
                        goto LAB_1020_69c3;
                    }
                    hwnd_var2 = param_2 - 0x12d;
                    if(param_2 != 0x12c)
                    {
                        hwnd_var2 = param_2 - 0x12e;
                    }
                }
                else
                {
                    if(param_2 == 0xbb9)
                    {
                        HVar3 = GetDlgItem16(param_3, 0x1797);
                        if(HVar3 != 0x0)
                        {
                            DestroyWindow16((HWND16)LAST_SEGMENT);
                        }
                        hwnd_var2 = pass1_1018_31d0(*(iVar4 + 0xf2));
                        if(hwnd_var2 != 0x0)
                        {
                            uVar1 = (iVar4 + 0xf2);
                            hwnd_var2 = pass1_1018_2dde(uVar1);
                            goto LAB_1020_6a0b;
                        }
                    }
                    else
                    {
                        hwnd_var2 = param_2 - 0xbba;
                        if(hwnd_var2 == 0x0)
                        {
                            hwnd_var2 = GetDlgItem16(param_3, 0x1797);
                            if(hwnd_var2 != 0x0)
                            {
                                hwnd_var2 = DestroyWindow16((HWND16)LAST_SEGMENT);
                                return hwnd_var2;
                            }
                            goto LAB_1020_6a6f;
                        }
                    }
                }
            }
        }
    }
    return hwnd_var2;
}

void  win_ui_op_1020_6ae6(u32 *param_1, u16 param_2, i16 param_3, i16 param_4, HWND16 param_5, WPARAM16 param_6)

{
    void **ppcVar1;
    u8        *pu_var2;
    i16        iVar3;
    u16        uVar4;
    HWND16     hwnd;
    LRESULT    LVar5;
    u16      in_stack_0000ff86;
    u16      in_stack_0000ff88;
    HWND16     HVar6;
    u8         local_58[0x50];
    u32 uStack8;
    HWND16     HStack4;

    if(param_4 == 0x1797)
    {
        uVar4   = (param_1 >> 0x10);
        iVar3   = param_1;
        hwnd    = (HWND16)LAST_SEGMENT;
        HStack4 = GetDlgItem16(param_5, 0x1797);
        if(HStack4 != 0x0)
        {
            if(param_3 == 0x2)
            {
                hwnd    = (HWND16)LAST_SEGMENT;
                uStack8 = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x4090000);
                if(uStack8 != -0x1)
                {
                    HVar6  = HStack4;
                    LVar5  = SendMessage16((HWND16)LAST_SEGMENT, local_58, param_6, str_var1(0x40a, uStack8));
                    pu_var2 = local_58;
                    pass1_1018_30ca(*(iVar3 + 0xf2), str_var1(param_6, pu_var2), (LVar5 >> 0x10));
                    hwnd = SEG_1018;
                    pass1_1018_2fe8(*(iVar3 + 0xf2), in_stack_0000ff86, in_stack_0000ff88);
                    if(pu_var2 != 0x0)
                    {
                        invalidate_rect_1020_735a(*(iVar3 + 0xf6), SEG_1018);
                        ppcVar1 = (*param_1 + 0x40);
                        (**ppcVar1)(SEG_1018, param_1, 0xef, HVar6);
                    }
                }
            }
            else
            {
                if(param_3 != 0x3)
                {
                    return;
                }
            }
            DestroyWindow16(hwnd);
        }
    }
    return;
}


void  enable_menu_item_1020_6b9a(HMENU16 param_1, i16 param_2)

{
    if(param_2 != 0x0)
    {
        return;
    }
    EnableMenuItem16(param_1, 0x400, 0x0);
    return;
}


void  pass1_1020_6bbc(u32 param_1, u16 param_2, u16 param_3)

{
    win_ui_op_1020_737a(*(param_1 + 0xf6), param_2, param_3);
    return;
}

void  win_ui_fn_1020_6e98(u32 param_1, HWND16 in_win_handle, u16 param_3)

{
    i16        *pi_var1;
    Struct18 *p_var2;
    HWND16      window_handle;
    u16         uVar3;
    u16         in_DX;
    WPARAM16    WVar4;
    i16         iVar5;
    u16         uVar6;
    LRESULT     LVar7;
    char       *pcVar8;
    u16         uVar9;
    u16         uVar10;
    i16         iStack36;
    u32  window_name;
    RECT16      rectangle;
    u16       IStack6;
    i16         iStack4;

    uVar6 = (param_1 >> 0x10);
    iVar5 = param_1;
    GetClientRect16(in_win_handle, &rectangle);
    window_name   = (Struct18 *)0x0;
    window_handle = GetDlgItem16((HWND16)LAST_SEGMENT, 0x1797);
    if(window_handle != 0x0)
    {
        DestroyWindow16((HWND16)LAST_SEGMENT);
    }
    pass1_1018_30fc(*(iVar5 + 0xf2), (u16 **)str_var1(param_3, &window_name), in_DX);
    if((window_name | window_name) != 0x0)
    {
        window_handle = CreateWindow16(SEG_1018, window_name,
                                       str_var1(globals->hinst_1050_038c, window_name), 0x1797, (iVar5 + 0x8), iStack4 + -0x19, IStack6, 0x0, 0x0, 0x103, 0x40a0);
        p_var2        = window_name;
        if(window_handle == 0x0)
        {
            if((window_name | window_name) != 0x0)
            {
                pass1_1018_2afa(window_name);
                fn_ptr_1000_17ce(p_var2, SEG_1000);
                return;
            }
        }
        else
        {
            LVar7 = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0xb0000);
            WVar4 = (WPARAM16)(LVar7 >> 0x10);
            if((window_name + 0x4) == 0x0)
            {
                uVar9  = 0x0;
                uVar10 = 0x401;
                pcVar8 = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
                SendMessage16(SEG_1010, pcVar8, (WPARAM16)(pcVar8 >> 0x10), str_var1(uVar10, uVar9));
            }
            else
            {
                iStack36 = 0x0;
                while(true)
                {
                    pi_var1 = (window_name + 0x4);
                    if(*pi_var1 == iStack36 || *pi_var1 < iStack36)
                        break;
                    uVar9    = 0x0;
                    uVar10   = 0x401;
                    uVar3    = pass1_1020_bd80((window_name + iStack36 * 0x2));
                    LVar7    = SendMessage16((HWND16)LAST_SEGMENT, uVar3, WVar4, str_var1(uVar10, uVar9));
                    WVar4    = (WPARAM16)(LVar7 >> 0x10);
                    iStack36 = iStack36 + 0x1;
                }
            }
            LVar7  = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0xb0001);
            WVar4  = (WPARAM16)(LVar7 >> 0x10);
            uVar3  = LVar7;
            uVar9  = 0xffff;
            uVar10 = 0x40d;
            pass1_1018_2d84(uVar3, *(iVar5 + 0xf2));
            LVar7 = SendMessage16(SEG_1018, uVar3, WVar4, str_var1(uVar10, uVar9));
            iVar5 = LVar7;
            if((iVar5 != -0x1) || ((LVar7 >> 0x10) != -0x1))
            {
                SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, str_var1(0x407, iVar5));
                SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, str_var1(0x418, iVar5));
            }
            p_var2        = window_name;
            window_handle = (HWND16)LAST_SEGMENT;
            if(window_name != (Struct18 *)0x0)
            {
                pass1_1018_2afa(window_name);
                window_handle = SEG_1000;
                fn_ptr_1000_17ce(p_var2, SEG_1000);
            }
            ShowWindow16(window_handle, 0x1);
            SetFocus16((HWND16)LAST_SEGMENT);
        }
    }
    return;
}

Struct3 * pass1_1020_70c0(Struct3 *param_1, u8 param_2, u16 param_3)

{
    cleanup_menu_ui_op_1020_795c(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  unk_win_ui_op_1020_717e(u16 *param_1, u32 param_2, u16 param_3)

{
    Struct13 *paVar1;
    void **ppcVar2;
    u32  uVar3;
    HPALETTE16  HVar4;
    u32 *puVar5;
    u8         *in_DX;
    u16         uVar6;
    u8         *extraout_DX;
    u8         *puVar7;
    i16         iVar8;
    i16         iVar10;
    i16         unaff_DI;
    u16         uVar11;
    u16         uVar12;
    u16         unaff_CS;
    u16        *puVar13;
    HDC16 local_4;
    Struct41 *iVar9;

    get_sys_metrics_1020_7c1a(param_1, param_2, unaff_CS);
    uVar11 = (param_1 >> 0x10);
    iVar8 = param_1;
    (iVar8 + 0x14) = 0x0;
    *(iVar8 + 0x18) = param_2;
    (iVar8 + 0x1c) = 0x0;
    (iVar8 + 0x20) = 0x0;
    param_1->field_0x0 = addr_table_1020_754c;//0x754c;
    (iVar8 + 0x2) = SEG_1020;
    puVar13 = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x4, param_3, in_DX, unaff_DI);
    uVar6 = (puVar13 >> 0x10);
    (iVar8 + 0x1c) = puVar13;
    (iVar8 + 0x1e) = uVar6;
    ppcVar2 = ((iVar8 + 0x1c) + 0x4);
    (**ppcVar2)(SEG_1010, (iVar8 + 0x1c), uVar6, 0x0, param_1);
    uVar6 = (iVar8 + 0x4);
    local_4 = GetDC16(SEG_1010);
    uVar3 = (iVar8 + 0x1c);
    *(HDC16 *)(uVar3 + 0x178) = local_4;
    uVar3                     = (iVar8 + 0x1c);
    uVar12                    = (uVar3 >> 0x10);
    iVar10                    = uVar3;
    puVar5                    = (iVar10 + 0x24);
    ppcVar2                   = (*puVar5 + 0x14);
    (**ppcVar2)(LAST_SEGMENT, puVar5, (iVar10 + 0x26), uVar6);
    puVar13 = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x29, param_3, extraout_DX, unaff_DI);
    puVar7  = (puVar13 >> 0x10);
    paVar1  = *(Struct13 **)(puVar13 + 0xe);
    pass1_1008_4d84((Struct90 *)(puVar5 & 0xffff | ZEXT24(extraout_DX) << 0x10), paVar1, puVar7);
    HVar4                         = palette_op_1008_4e08(paVar1, &local_4, puVar7, SEG_1008);
    *(HPALETTE16 *)(iVar8 + 0x20) = HVar4;
    return;
}

void  pass1_1020_51c6(u32 param_1, u16 param_2, u32 param_3, u16 param_4, u16 param_5)

{
    fn_ptr_1 *ppcVar1;
    i16       iVar2;
    i16       iVar3;
    u16       uVar4;
    u16       uVar5;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    iVar2 = (iVar3 + 0xf4);
    uVar5 = param_3;
    if(iVar2 == 0x2)
    {
        win_ui_op_1020_5e76(NULL, param_1 & 0xffff | uVar4 << 0x10, param_2, uVar5);
        return;
    }
    iVar2 = iVar2 + -0x3;
    if(iVar2 != 0x0)
    {
        pt_in_rect_op_1020_58ce(param_1 & 0xffff | uVar4 << 0x10, param_2, uVar5, (u8)(param_3 >> 0x10), param_4, param_5);
        if(iVar2 == 0x0)
        {
            ppcVar1 = ((iVar3 + 0x4) + 0x5c);
            (**ppcVar1)(param_4, (iVar3 + 0x4), param_2, param_3);
        }
        return;
    }
    win_ui_op_1020_5de8(param_1 & 0xffff | uVar4 << 0x10, param_2, uVar5, param_5);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  win_ui_cursor_op_1020_522e(Struct52 *param_1, u16 param_2, u16 param_3)

{
    i16       iVar1;
    void **ppcVar2;
    BOOL16    BVar3;
    u8       *in_DX;
    i16       iVar4;
    i16       unaff_DI;
    u16       uVar5;
    HCURSOR16 unaff_CS;
    u16       unaff_SS;
    u16      *puVar6;
    u8        uVar7;
    u8        uVar8;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    iVar1 = (iVar4 + 0xf4);
    if(iVar1 == 0x2)
    {
        SetCursor16(unaff_CS);
        (iVar4 + 0xee)  = 0x0;
        (iVar4 + 0xf4)  = 0x1;
        (iVar4 + 0x10c) = 0x0;
        ReleaseCapture16();
        return;
    }
    if(iVar1 == 0x3)
    {
        SetCursor16(unaff_CS);
        (iVar4 + 0xee)  = 0x0;
        (iVar4 + 0xf4)  = 0x1;
        (iVar4 + 0x10c) = 0x0;
        ReleaseCapture16();
        uVar7  = 0x0;
        uVar8  = 0x0;
        uVar5  = 0x0;
        puVar6 = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x47, unaff_SS, in_DX, unaff_DI);
        pass1_1018_57e6(puVar6, str_var1(uVar5, CONCAT11(uVar8, uVar7)), unaff_SS);
        return;
    }
    BVar3 = menu_ui_op_1020_5bf2(param_1, param_2, param_3);
    if(BVar3 == 0x0)
    {
        ppcVar2 = ((iVar4 + 0x4) + 0x60);
        (**ppcVar2)();
    }
    return;
}


void  pass1_1020_52de(u32 param_1, u16 param_2)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;
    i16         iVar6;
    u16         uVar7;

    uVar7  = (param_1 >> 0x10);
    iVar6  = param_1;
    puVar1 = (iVar6 + 0xf6);
    u_var2  = (iVar6 + 0xf8);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    (iVar6 + 0xf6) = 0x0;
    if((iVar6 + 0xfa) != 0x0)
    {
        if(param_1 == 0x0)
        {
            iVar4 = 0x0;
            uVar5 = 0x0;
        }
        else
        {
            iVar4 = iVar6 + 0xe2;
            uVar5 = uVar7;
        }
        pass1_1010_1ea6(*(iVar6 + 0xfa), str_var1(uVar5, iVar4), param_2);
    }
    destroy_win_1008_628e(param_1, SEG_1008);
    if((iVar6 + 0xfa) != 0x0)
    {
        pass1_1010_1dda(*(iVar6 + 0xfa));
    }
    (iVar6 + 0xfa) = 0x0;
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  ui_op_1020_536e(u32 param_1, u32 param_2, i16 param_3, i16 param_4, u8 *param_5)

{
    i16        *pi_var1;
    u16         u_var2;
    void **ppcVar3;
    u16         uVar4;
    u16         uVar5;
    u16         UVar6;
    u16         uVar7;
    u8         *puVar8;
    u8         *extraout_DX;
    u8         *puVar9;
    i16         iVar10;
    u32 *puVar11;
    i16         unaff_DI;
    u16         uVar12;
    u16         unaff_SS;
    u16        *puVar13;
    u32  uVar14;
    u32         uVar15;
    u8          uVar16;
    u8          uVar17;
    u16         uVar18;
    u16         uVar19;
    u32 *puStack16;

    uVar7  = param_4 - 0x1;
    uVar12 = (param_1 >> 0x10);
    iVar10 = param_1;
    if(uVar7 == 0x0)
    {
        if((iVar10 + 0xfe) == 0x0)
        {
            mem_op_1000_179c(0xfc, param_5, 0);
            uVar14 = str_var1(param_5 | uVar7, uVar7);
            if((param_5 | uVar7) == 0x0)
            {
                (iVar10 + 0xfe) = 0x0;
            }
            else
            {
                pi_var1           = (iVar10 + 0xcc);
                *pi_var1          = *pi_var1 + 0x1;
                uVar14           = unk_win_ui_op_1020_67ce(
                  NULL, CONCAT13((param_5 >> 0x8), CONCAT12(param_5, uVar7)), (iVar10 + 0xcc), param_1);
                (iVar10 + 0xfe)  = uVar14;
                (iVar10 + 0x100) = (uVar14 >> 0x10);
            }
            pass1_1008_6978(param_1, 0x0, *(iVar10 + 0xfe), uVar14, (uVar14 >> 0x10));
            uVar14  = (iVar10 + 0xfe);
            uVar18  = uVar14;
            uVar19  = (uVar14 >> 0x10);
            uVar14  = (iVar10 + 0xfe);
            uVar12  = (uVar14 >> 0x10);
            puVar11 = uVar14;
            goto LAB_1020_53f3;
        }
    }
    else
    {
        if(param_4 == 0x2)
        {
            uVar4   = param_3 + 0xc;
            puVar13 = mixed_1010_20ba(
              NULL, globals->u16_1050_0ed0, uVar4, unaff_SS, param_5, unaff_DI);
            puVar9  = (puVar13 >> 0x10);
            uVar5   = pass1_1018_0afa(puVar13);
            if(uVar5 == 0x0)
            {
                pi_var1  = (iVar10 + 0xcc);
                *pi_var1 = *pi_var1 + 0x1;
                u_var2   = (iVar10 + 0xcc);
                uVar12  = 0xfe;
                UVar6 = u_var2;
                mem_op_1000_179c(0xfe, puVar9, 0);
                puVar8 = (puVar9 | UVar6);
                if(puVar8 == 0x0)
                {
                    UVar6  = 0x0;
                    puVar8 = 0x0;
                }
                else
                {
                    pass1_1020_289a(CONCAT13((puVar9 >> 0x8), CONCAT12(puVar9, UVar6)), u_var2, param_1, unaff_SS);
                }
                puStack16 = str_var1(puVar8, UVar6);
                uVar16    = SUB21(puVar8, 0x0);
                uVar17    = (puVar8 >> 0x8);
                pass1_1020_294a(CONCAT13(uVar17, CONCAT12(uVar16, UVar6)),
                                str_var1(param_2, uVar12), (param_2 >> 0x10), puVar8, unaff_DI, unaff_SS);
                unaff_DI = (*puStack16 >> 0x10);
                iVar10   = *puStack16;
                ppcVar3  = (iVar10 + 0x8);
                uVar14   = (**ppcVar3)(SEG_1000, UVar6, puVar8, uVar4);
                pass1_1008_3e0e(CONCAT13(uVar17, CONCAT12(uVar16, UVar6)));
                pass1_1008_6978(param_1, u_var2, str_var1(puVar8, UVar6), uVar14, (uVar14 >> 0x10));
                ppcVar3 = (iVar10 + 0xc);
                (**ppcVar3)(SEG_1008, UVar6, uVar16, 0x1);
                puVar9 = extraout_DX;
            }
            else
            {
                uVar15 = pass1_1018_0ad4(puVar13);
                puVar9 = (uVar15 >> 0x10);
                pass1_1008_3e0e(uVar15);
            }
            pass1_1018_1662(puVar13, 0x0, 0x0, unaff_SS);
            BringWindowToTop16(SEG_1018);
            uVar4   = 0x1;
            iVar10  = 0x4;
            puVar13 = mixed_1010_20ba(
              NULL, globals->u16_1050_0ed0, 0x2b, unaff_SS, puVar9, unaff_DI);
            pass1_1010_089e(unaff_SS, puVar13, uVar4, iVar10);
            pass1_1010_089e(unaff_SS, puVar13, 0x1, 0x3);
            return;
        }
        uVar7 = param_4 - 0x3;
        if((uVar7 == 0x0) && ((iVar10 + 0x102) == 0x0))
        {
            mem_op_1000_179c(0xfc, param_5, 0);
            puVar9 = (param_5 | uVar7);
            if(puVar9 == 0x0)
            {
                (iVar10 + 0x102) = 0x0;
            }
            else
            {
                pi_var1  = (iVar10 + 0xcc);
                *pi_var1 = *pi_var1 + 0x1;
                pass1_1020_0dc4(CONCAT13((param_5 >> 0x8), CONCAT12(param_5, uVar7)), (iVar10 + 0xcc), param_1, unaff_SS);
                (iVar10 + 0x102) = uVar7;
                (iVar10 + 0x104) = puVar9;
            }
            pass1_1008_6978(param_1, 0x0, *(iVar10 + 0x102), uVar7, puVar9);
            uVar14  = (iVar10 + 0x102);
            uVar18  = uVar14;
            uVar19  = (uVar14 >> 0x10);
            uVar14  = (iVar10 + 0x102);
            uVar12  = (uVar14 >> 0x10);
            puVar11 = uVar14;
        LAB_1020_53f3:
            ppcVar3 = (*puVar11 + 0xc);
            (**ppcVar3)(0x8, uVar18, uVar19, 0x5);
            return;
        }
    }
}

void window_op_1020_5764(Globals *globals, u32 param_1, i16 param_2, u16 param_3)

{
    u16         uVar1;
    u32  u_var2;
    u8         *in_DX;
    i16         iVar3;
    i16         unaff_DI;
    u16         uVar4;
    HINSTANCE16 h_instance;
    HCURSOR16   hcursor;
    i16         local_e;
    u8          local_c[0x2];
    u32         uStack10;
    u16        *pu_stack6;

    pu_stack6 = mixed_1010_20ba(
      NULL, globals->u16_1050_0ed0, 0x2f, param_3, in_DX, unaff_DI);
    uVar4    = (pu_stack6 >> 0x10);
    uStack10 = *(pu_stack6 + 0x20);
    uVar1    = (pu_stack6 + 0x22);
    if((uVar1 | uStack10) != 0x0)
    {
        h_instance = SEG_1030;
        pass1_1030_8308(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10),
                        str_var1(param_3, &local_e), CONCAT13((param_3 >> 0x8), CONCAT12(param_3, local_c)), uStack10 & 0xffff | uVar1 << 0x10, &local_e, uVar1);
        if(param_2 <= local_e)
        {
            uVar4 = (param_1 >> 0x10);
            iVar3 = param_1;
            if((iVar3 + 0xf4) != 0x1)
            {
                SetCursor16(SEG_1030);
                (iVar3 + 0xee)  = 0x0;
                (iVar3 + 0xf4)  = 0x1;
                (iVar3 + 0x10c) = 0x0;
                h_instance      = (HINSTANCE16)LAST_SEGMENT;
                ReleaseCapture16();
            }
            LoadCursor16(h_instance, get_rsrc_string(0x7f02));
            SetCursor16((HCURSOR16)LAST_SEGMENT);
            hcursor = SEG_1018;
            pass1_1018_017c(pu_stack6, param_2, param_3);
            u_var2          = (iVar3 + 0xf6);
            (u_var2 + 0x10) = 0x1;
            if((iVar3 + 0xfe) != 0x0)
            {
                pass1_1020_68de(*(iVar3 + 0xfe), SEG_1018);
                hcursor = (HCURSOR16)LAST_SEGMENT;
                PostMessage16(SEG_1018, 0x0, 0x0, 0x11100eb);
            }
            SetCursor16(hcursor);
        }
    }
}

void  pt_in_rect_1020_5856(u32 param_1, POINT16 *param_2, u16 param_3)

{
    u32   *puVar1;
    BOOL16 BVar2;
    u32    uVar3;
    u16    in_DX;
    u16    extraout_DX;
    u32    uStack10;

    pass1_1018_2862(*(param_1 + 0xfa));
    if((in_DX | param_3) != 0x0)
    {
        uStack10 = 0x0;
        while(true)
        {
            puVar1 = (param_3 + 0xa);
            if(*puVar1 < uStack10 || *puVar1 == uStack10)
                break;
            uVar3 = uStack10;
            empty_1008_8fc4(param_3, in_DX, uStack10, (uStack10 >> 0x10));
            if((extraout_DX | uVar3) != 0x0)
            {
                BVar2 = PtInRect16((RECT16 *)SEG_1008, *param_2);
                if(BVar2 != 0x0)
                {
                    return;
                }
            }
            uStack10 = uStack10 + 0x1;
        }
    }
    return;
}

void  pt_in_rect_op_1020_58ce(u32 param_1, u16 param_2, u16 param_3, u8 param_4, RECT16 *param_5, u16 param_6)

{
    void **ppcVar1;
    u32 u_var2;
    u16        uVar3;
    BOOL16     BVar4;
    u16       *msg;
    u8        *in_DX;
    u16        uVar5;
    u8        *puVar6;
    i16        iVar7;
    i16        iVar8;
    i16        unaff_DI;
    u16        uVar9;
    u16        uVar10;
    RECT16    *rect;
    RECT16    *rect_00;
    u32        uVar11;
    u16       *puVar12;
    u8         local_34[0x6];
    u32        uStack46;
    u16       *puStack38;
    u32 uStack30;
    u16       *puStack26;
    u16        local_18[0x2];
    u16        uStack20;
    u32 uStack18;
    u16        uStack14;
    u8        *puStack12;
    u16        uStack10;
    u16        uStack8;
    u16        local_6;
    u16        uStack4;

    local_6        = param_3;
    uStack4        = param_2;
    uStack8        = param_4 & 0x8;
    uStack10       = param_4 & 0x4;
    uVar9          = (param_1 >> 0x10);
    iVar7          = param_1;
    uVar3          = pass1_1020_64d4(*(iVar7 + 0xf6), 0x2);
    uStack30 = in_DX;
    rect           = param_5;
    if(uVar3 == 0x0)
    {
    LAB_1020_5942:
        uVar3   = pass1_1020_64d4(*(iVar7 + 0xf6), 0x4);
        rect_00 = rect;
        if(uVar3 == 0x0)
        {
        LAB_1020_5a16:
            uVar3 = pass1_1020_64d4(*(iVar7 + 0xf6), 0x1);
            if(uVar3 != 0x0)
            {
                uStack30       = pass1_1020_6498(*(iVar7 + 0xf6), 0x1);
                uStack30 = (uStack30 >> 0x10);
                for(puStack26 = 0x0; puStack26 < 0x4; puStack26 = (puStack26 + 0x1))
                {
                    BVar4 = PtInRect16(rect_00, (POINT16)str_var1(uStack4, local_6));
                    if(BVar4 != 0x0)
                    {
                        local_18[0] = 0x0;
                        uStack20    = 0x0;
                        if(puStack26 == 0x0)
                        {
                            uStack20 = (-(uStack10 == 0x0) & 0x4) - 0x5;
                        }
                        else
                        {
                            if(puStack26 == (&PTR_LOOP_1050_0000 + 0x1))
                            {
                                uStack20 = (-(uStack10 == 0x0) & 0xfffc) + 0x5;
                            }
                            else
                            {
                                if(puStack26 == &PTR_LOOP_1050_0002)
                                {
                                    local_18[0] = (-(uStack10 == 0x0) & 0x4) - 0x5;
                                }
                                else
                                {
                                    if(puStack26 == (&PTR_LOOP_1050_0002 + 0x1))
                                    {
                                        local_18[0] = (-(uStack10 == 0x0) & 0xfffc) + 0x5;
                                    }
                                }
                            }
                        }
                        pass1_1020_2a94(*(iVar7 + 0xce), str_var1(local_18[0], uStack20), param_6);
                        return;
                    }
                    rect_00 = (RECT16 *)LAST_SEGMENT;
                }
            }
            uVar3 = pass1_1020_64d4(*(iVar7 + 0xf6), 0x3);
            if(uVar3 != 0x0)
            {
                uStack30 = &local_6;
                pt_in_rect_1020_5856(param_1, (POINT16 *)str_var1(param_6, uStack30), uStack30);
                uVar5 = uStack30 | uStack30;
                if(uVar5 != 0x0)
                {
                    puStack26 = (uStack30)[0x17];
                    if(((uStack8 == 0x0) || (uStack10 == 0x0)) && (uStack10 == 0x0))
                    {
                        local_18[0] = 0x1;
                    }
                    else
                    {
                        local_18[0] = 0x2;
                    }
                    uStack20 = (uStack30)[0x6];
                    uStack18 = str_var1(uStack18, (uStack30)[0x7]);
                    if((puStack26 == 0xb) || (puStack26 == 0x37))
                    {
                        u_var2    = (iVar7 + 0xfa);
                        uVar10   = (u_var2 >> 0x10);
                        iVar8    = u_var2;
                        uStack46 = *(iVar8 + 0x20);
                        uVar5    = (iVar8 + 0x22);
                        if((uVar5 | uStack46) != 0x0)
                        {
                            puVar12 = pass1_1008_3e38(str_var1(param_6, local_34));
                            puVar6  = (puVar12 >> 0x10);
                            pass1_1018_161c(param_6, uStack46,
                                            str_var1(param_6, local_34), uStack18, uStack20);
                            puStack38 = mixed_1010_20ba(
                              NULL, globals->u16_1050_0ed0, 0x2f, param_6, puVar6, unaff_DI);
                            uVar5     = (puStack38 >> 0x10);
                            pass1_1010_ecc6(puStack38,
                                            str_var1(param_6, local_34), (uStack46 + 0x3c), local_34, uVar5, param_6);
                        }
                    }
                    uVar3 = pass1_1018_25d2(*(iVar7 + 0xfa), local_18[0], uStack18 & 0xffff | uStack20 << 0x10, unaff_DI, param_6);
                    if(uVar3 != 0x0)
                    {
                        return;
                    }
                    uVar3 = pass1_1020_5d56(param_1, str_var1(uStack30, uStack30), uVar5, unaff_DI, param_6);
                    if(uVar3 != 0x0)
                    {
                        return;
                    }
                }
            }
            return;
        }
        uVar11         = pass1_1020_6498(*(iVar7 + 0xf6), 0x4);
        uStack30 = (uVar11 >> 0x10);
        uVar10         = uVar11;
        rect_00        = (RECT16 *)LAST_SEGMENT;
        puVar6         = uStack30;
        uStack14       = uVar10;
        puStack12      = uStack30;
        BVar4          = PtInRect16(rect, (POINT16)str_var1(uStack4, local_6));
        if(BVar4 == 0x0)
            goto LAB_1020_5a16;
        rect     = (RECT16 *)SEG_1010;
        uStack18 = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x2, param_6, uStack30, unaff_DI);
        if((uStack18 + 0x72) != 0x0)
        {
            (iVar7 + 0x116) = 0x1;
            if(param_1 == 0x0)
            {
                iVar7 = 0x0;
                uVar9 = 0x0;
            }
            else
            {
                iVar7 = iVar7 + 0xe2;
            }
            uStack30 = str_var1(uVar9, iVar7);
            ppcVar1  = (*_PTR_LOOP_1050_02a0 + 0x4);
            (**ppcVar1)(SEG_1010, globals->_PTR_LOOP_1050_02a0, (globals->_PTR_LOOP_1050_02a0 >> 0x10), 0x10, iVar7, uVar9, uVar10, puVar6);
            puVar12 = pass1_1008_941a(str_var1(param_6, local_18), 0x1, 0x86);
            msg     = local_18;
            rect    = (RECT16 *)SEG_1008;
            win_1008_5c9e(globals->_PTR_LOOP_1050_02a0,
                          str_var1(param_6, msg), msg, (puVar12 >> 0x10), param_6);
            if(msg != 0x0)
            {
                return;
            }
            uVar9     = 0xf6;
            puStack26 = msg;
            goto LAB_1020_5936;
        }
        uVar9 = 0xf6;
    }
    else
    {
        uVar11         = pass1_1020_6498(*(iVar7 + 0xf6), 0x2);
        uStack30 = (uVar11 >> 0x10);
        uStack14       = uVar11;
        rect           = (RECT16 *)LAST_SEGMENT;
        puStack12      = uStack30;
        BVar4          = PtInRect16(param_5, (POINT16)str_var1(uStack4, local_6));
        if(BVar4 == 0x0)
            goto LAB_1020_5942;
        uVar9 = 0x68;
    }
    msg = 0x0;
LAB_1020_5936:
    PostMessage16((HWND16)rect, msg, (WPARAM16)msg, str_var1(0x111, uVar9));
    return;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL16  menu_ui_op_1020_5bf2(Struct52 *param_1, HWND16 param_2, RECT16 *param_3)

{
    u32  uVar1;
    u16         u_var2;
    BOOL16      BVar3;
    RECT16    **ppRVar4;
    HMENU16     HVar5;
    u16         in_DX;
    u16         uVar6;
    Struct52 *iVar5;
    u16         uVar7;
    RECT16     *unaff_CS;
    RECT16     *instance;
    WNDCLASS16 *unaff_SS;
    u32         uVar8;
    POINT16     local_10;
    i16         iStack12;
    u32  uStack10;
    RECT16     *local_6;
    HWND16      HStack4;

    local_6  = param_3;
    HStack4  = param_2;
    uVar7    = (param_1 >> 0x10);
    iVar5    = (Struct52 *)param_1;
    u_var2    = pass1_1020_64d4(iVar5->field_0xf6, 0x2);
    uVar8    = in_DX << 0x10;
    instance = unaff_CS;
    if(u_var2 != 0x0)
    {
        uStack10 = pass1_1020_6498(iVar5->field_0xf6, 0x2);
        instance = (RECT16 *)LAST_SEGMENT;
        uVar8    = uStack10;
        BVar3    = PtInRect16(unaff_CS, (POINT16)str_var1(HStack4, local_6));
        if(BVar3 != 0x0)
        {
            PostMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x1110131);
            return 0x1;
        }
    }
    u_var2 = pass1_1020_64d4(iVar5->field_0xf6, 0x3);
    if(u_var2 == 0x0)
    {
        return 0x0;
    }
    ppRVar4 = &local_6;
    pt_in_rect_1020_5856(param_1, (POINT16 *)str_var1(unaff_SS, ppRVar4), ppRVar4);
    uVar6              = (uVar8 >> 0x10);
    iVar5->field_0x108 = ppRVar4;
    iVar5->field_0x10a = uVar6;
    if((uVar6 | iVar5->field_0x108) == 0x0)
    {
        return 0x0;
    }
    if(iVar5->field_0x106 == 0x0)
    {
        HVar5              = LoadMenu16((HINSTANCE16)instance, s_TILEMENU_1050_43f0);
        iVar5->field_0x106 = HVar5;
        if(HVar5 == 0x0)
        {
            return 0x1;
        }
        instance           = (RECT16 *)LAST_SEGMENT;
        HVar5              = GetSubMenu16((HMENU16)LAST_SEGMENT, 0x0);
        iVar5->field_0x106 = HVar5;
        if(HVar5 == 0x0)
        {
            return 0x1;
        }
    }
    uVar1          = &iVar5->field_0x108;
    uStack10 = (uVar1 + 0x2e);
    iStack12       = 0x0;
    if(uStack10 == 0x42)
    {
        iStack12 = 0xc9;
    }
    else
    {
        if((s_VrMode_1050_42ca + 0x8 + uStack10 * 0x2) == 0x0)
        {
            iStack12 = 0xc8;
        }
    }
    if(iStack12 != 0x0)
    {
        instance = (RECT16 *)SEG_1008;
        win_1008_5c7c(
          NULL, _PTR_LOOP_1050_02a0, str_var1(iStack12, 0x1), unaff_SS, uStack10);
    }
    local_10.x = (u16)param_3;
    local_10.y = param_2;
    ClientToScreen16((HWND16)instance, &local_10);
    TrackPopupMenu16((HMENU16)LAST_SEGMENT, 0x0, 0x0, iVar5->field_0x8, 0x0, local_10.y, (RECT16 *)local_10.x);
    return 0x1;
}

void  win_ui_op_1020_5de8(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u16        uVar1;
    u32 u_var2;
    u16       *puVar3;
    u8        *in_DX;
    u16        uVar4;
    i16        unaff_DI;
    u16        uVar5;
    u16       *puVar6;
    u8         uVar7;
    u8         uVar8;
    u16        uStack18;
    char       cStack15;
    u16        local_6;
    u16        uStack4;

    ReleaseCapture16();
    uVar5 = (param_1 >> 0x10);
    SetCursor16((HCURSOR16)LAST_SEGMENT);
    (param_1 + 0xee) = 0x0;
    (param_1 + 0xf4) = 0x1;
    local_6          = param_3;
    uStack4          = param_2;
    puVar6           = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x47, param_4, in_DX, unaff_DI);
    uVar4            = (puVar6 >> 0x10);
    puVar3           = &local_6;
    pt_in_rect_1020_5856(param_1, (POINT16 *)CONCAT13((param_4 >> 0x8), CONCAT12(param_4, puVar3)), puVar3);
    if((uVar4 | puVar3) != 0x0)
    {
        u_var2    = (puVar3 + 0x21);
        uVar1    = puVar3[0x22];
        cStack15 = (u_var2 >> 0x18);
        if(cStack15 == '\x05')
        {
            uVar7    = uVar1;
            uVar8    = (uVar1 >> 0x8);
            uStack18 = u_var2;
            goto LAB_1020_5e62;
        }
    }
    uStack18 = 0x0;
    uVar7    = 0x0;
    uVar8    = 0x0;
LAB_1020_5e62:
    pass1_1018_57e6(puVar6, CONCAT13(uVar8, CONCAT12(uVar7, uStack18)), param_4);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void win_ui_op_1020_5e76(Globals *globals, u32 param_1, u16 param_2, u16 param_3)

{
    void **ppcVar1;
    Struct57 *p_var2;
    u16        *puVar3;
    u8         *puVar4;
    i16         iVar5;
    u16         uVar6;
    u16         in_DX;
    u8         *puVar7;
    u8         *puVar8;
    i16         iVar9;
    u32 *puVar10;
    i16         unaff_DI;
    u16         uVar11;
    u16         uVar12;
    u16         uVar13;
    u8         *unaff_SS;
    u8          in_AF;
    char       *pcVar14;
    u8          uVar15;
    u16        *local_2aa[0x40];
    u8         *local_1aa[0x80];
    char        local_aa[0x80];
    u32  uStack42;
    Struct57 *paStack38;
    char        local_22[0x10];
    u8         *puStack18;
    u16         uStack16;
    u16         uStack14;
    u16         uStack12;
    u32  uStack10;
    u16         local_6;
    u16         uStack4;

    ReleaseCapture16();
    uVar11 = (param_1 >> 0x10);
    iVar9  = param_1;
    SetCursor16((HCURSOR16)LAST_SEGMENT);
    (iVar9 + 0xee) = 0x0;
    (iVar9 + 0xf4) = 0x1;
    local_6        = param_3;
    uStack4        = param_2;
    puVar3         = &local_6;
    uVar15         = (unaff_SS >> 0x8);
    pt_in_rect_1020_5856(param_1, (POINT16 *)CONCAT13(uVar15, CONCAT12(unaff_SS, puVar3)), puVar3);
    uStack10 = str_var1(in_DX, puVar3);
    puVar7   = (in_DX | puVar3);
    if(puVar7 == 0x0)
        goto LAB_1020_6176;
    uStack12 = puVar3[0x6];
    uStack14 = puVar3[0x7];
    uStack16 = 0x0;
    uVar13   = SEG_1018;
    puVar4   = pass1_1018_2580(*(iVar9 + 0xfa), 0x0,
                             str_var1(uStack12, uStack14), (iVar9 + 0x10c), unaff_SS, in_AF);
    if(puVar4 == 0x6b2)
        goto LAB_1020_6176;
    puStack18 = puVar4;
    if(puVar4 == 0x6b8)
    {
        mem_op_1000_179c(0xb4, puVar7, 0);
        uStack42 = str_var1(puVar7, puVar4);
        puVar8   = (puVar7 | puVar4);
        if(puVar8 == 0x0)
        {
            iVar5  = 0x0;
            puVar8 = 0x0;
        }
        else
        {
            iVar5 = string_1040_8520(NULL,
                                     CONCAT13((puVar7 >> 0x8), CONCAT12(puVar7, puVar4)),
                                     globals->PTR_LOOP_1050_0396,
                                     0x40,
                                     0x2,
                                     0x6b8,
                                     0x6ad,
                                     puVar8,
                                     unaff_SS);
        }
        paStack38 = str_var1(puVar8, iVar5);
        uVar13    = 0xa5;
    LAB_1020_5f84:
        pass1_1008_941a(str_var1(unaff_SS, local_22), 0x1, uVar13);
        pcVar14 = local_22;
        uVar12  = (paStack38 >> 0x10);
        puVar10 = paStack38;
    }
    else
    {
        if(puVar4 == 0x6b4)
        {
            mem_op_1000_179c(0xb4, puVar7, 0);
            uStack42 = str_var1(puVar7, puVar4);
            puVar8   = (puVar7 | puVar4);
            if(puVar8 == 0x0)
            {
                iVar5  = 0x0;
                puVar8 = 0x0;
            }
            else
            {
                iVar5 = string_1040_8520(NULL,
                                     CONCAT13((puVar7 >> 0x8), CONCAT12(puVar7, puVar4)),
                                     globals->PTR_LOOP_1050_0396,
                                     0x40,
                                     0x2,
                                     0x57b,
                                     puStack18,
                                     puVar8,
                                     unaff_SS);
            }
            paStack38 = str_var1(puVar8, iVar5);
            uVar13    = 0xab;
            goto LAB_1020_5f84;
        }
        if(puVar4 == 0x6b6)
        {
            load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_aa);
            load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_1aa);
            uVar6  = sys_1000_3f9c(local_2aa,
                                  unaff_SS,
                                  local_1aa,
                                  globals->PTR_LOOP_1050_50cc,
                                  &stack0xfffe,
                                  uVar11,
                                  SEG_1000,
                                  unaff_SS,
                                  in_AF);
            uVar12 = SEG_1000;
            mem_op_1000_179c(0xb4, puVar7, 0);
            uStack42 = str_var1(puVar7, uVar6);
            if((puVar7 | uVar6) == 0x0)
            {
                paStack38 = 0x0;
            }
            else
            {
                uVar12    = SUB42(SEG_1040, 0x0);
                paStack38 = pass1_1040_8478(str_var1(puVar7, uVar6), 0x40, CONCAT13(uVar15, CONCAT12(unaff_SS, local_aa)),
                                    str_var1(unaff_SS, local_2aa), globals->PTR_LOOP_1050_0396, puVar7 | uVar6);
            }
            puVar8  = (paStack38 >> 0x10);
            puVar10 = paStack38;
            p_var2  = paStack38;
        LAB_1020_6027:
            ppcVar1 = (*puVar10 + 0x74);
            (**ppcVar1)(uVar12, p_var2);
            goto LAB_1020_6176;
        }
        if(puVar4 < 0x6a7)
        {
            if(((iVar9 + 0x10c) == 0x78) || ((iVar9 + 0x10c) == 0x74))
            {
                uVar13       = SEG_1010;
                local_2aa[0] = mixed_1010_20ba(
                  NULL, globals->u16_1050_0ed0, 0x5, unaff_SS, puVar7, unaff_DI);
                puVar7       = (local_2aa[0] >> 0x10);
                if((local_2aa[0] + 0xa) == 0x0)
                {
                    return;
                }
            }
            if(((((iVar9 + 0x10c) == 0x6c) || ((iVar9 + 0x10c) == 0x6d)) || ((iVar9 + 0x10c) == 0x31)) || ((iVar9 + 0x10c) == 0x32))
            {
                uVar13       = SEG_1010;
                local_2aa[0] = mixed_1010_20ba(
                  NULL, globals->u16_1050_0ed0, 0x3a, unaff_SS, puVar7, unaff_DI);
                if((local_2aa[0] + 0xa) == 0x0)
                {
                    return;
                }
            }
            pass1_1020_68de(*(iVar9 + 0xfe), uVar13);
            goto LAB_1020_6176;
        }
        if(0x6b1 < puVar4)
        {
            uVar12 = SEG_1000;
            mem_op_1000_179c(0xb4, puVar7, 0);
            uStack42 = str_var1(puVar7, puVar4);
            puVar8   = (puVar7 | puVar4);
            if(puVar8 == 0x0)
            {
                puVar10 = 0x0;
                puVar8  = 0x0;
            }
            else
            {
                uVar12  = SUB42(SEG_1040, 0x0);
                puVar10 = string_1040_8520(NULL,
                                     CONCAT13((puVar7 >> 0x8), CONCAT12(puVar7, puVar4)),
                                     globals->PTR_LOOP_1050_0396,
                                     0x40,
                                     0x2,
                                     0x57b,
                                     puStack18,
                                     puVar8,
                                     unaff_SS);
            }
            local_2aa[0] = str_var1(puVar8, puVar10);
            p_var2       = str_var1(puVar8, puVar10);
            goto LAB_1020_6027;
        }
        mem_op_1000_179c(0xb4, puVar7, 0);
        uStack42 = str_var1(puVar7, puVar4);
        puVar8   = (puVar7 | puVar4);
        if(puVar8 == 0x0)
        {
            iVar5  = 0x0;
            puVar8 = 0x0;
        }
        else
        {
            iVar5 = string_1040_8520(NULL,
                                     CONCAT13((puVar7 >> 0x8), CONCAT12(puVar7, puVar4)),
                                     globals->PTR_LOOP_1050_0396,
                                     0x40,
                                     0x2,
                                     0x57b,
                                     puStack18,
                                     puVar8,
                                     unaff_SS);
        }
        local_2aa[0] = str_var1(puVar8, iVar5);
        local_1aa[0] = puStack18 + -0x608;
        pass1_1008_941a(str_var1(unaff_SS, local_aa), 0x1, local_1aa[0]);
        pcVar14 = local_aa;
        uVar12  = (local_2aa[0] >> 0x10);
        puVar10 = local_2aa[0];
    }
    ppcVar1 = (*puVar10 + 0x6c);
    (**ppcVar1)(SEG_1008, puVar10, uVar12, pcVar14);
LAB_1020_6176:
    (iVar9 + 0x10c) = 0x0;
    return;
}

void  pass1_1020_6184(u32 param_1, u16 param_2, u16 param_3)

{
    HCURSOR16 HVar1;
    i16       iVar2;
    u16       uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0xf4) == 0x1)
    {
        HVar1                        = SetCursor16(param_3);
        *(HCURSOR16 *)(iVar2 + 0xee) = HVar1;
        (iVar2 + 0x10c)              = param_2;
        SetCapture16((HWND16)LAST_SEGMENT);
        (iVar2 + 0xf4) = 0x2;
    }
    return;
}

void  pass1_1020_434c(i16 param_1, u16 param_2, u32 *param_3, u16 param_4, u16 param_5, i16 param_6, u16 param_7, u16 param_8)

{
    if(param_6 == 0x1)
    {
        pass1_1020_6184(str_var1(param_2, param_1), param_5, param_8);
        return;
    }
    if(param_6 == 0x2)
    {
        ui_op_1020_536e(
          str_var1(param_2, param_1), str_var1(param_4, param_3), param_5, 0x2, param_7);
        return;
    }
    pass1_1008_68ea(param_1, param_2, param_3, param_4, param_5, param_6);
    return;
}

void  mixed_menu_op_1020_44ec(u32 param_1, u16 param_2, i16 param_3, HMENU16 param_4, HMENU16 param_5, u16 param_6)

{
    u32 uVar1;
    u16        u_var2;
    u16        UVar3;
    BOOL16     BVar4;
    HMENU16    HVar5;
    u16        uVar6;
    i16        iVar7;
    u32        uVar8;
    u8        *in_DX;
    u8        *puVar9;
    i16        iVar10;
    i16        unaff_DI;
    u16        uVar11;
    HMENU16    HVar12;
    u8         in_AF;
    u16        local_138[0x2];
    u16        local_134[0x2];
    u16       *puStack304;
    u32        uStack300;
    u32 uStack296;
    u32        uStack292;
    char      *pcStack286;
    u32 uStack278;
    BOOL16     BStack270;
    u32 uStack268;
    u32        local_108[0x40];
    u16        uStack8;
    u16       *pu_stack6;

    uVar11 = (param_1 >> 0x10);
    iVar10 = param_1;
    HVar12 = param_5;
    if((iVar10 + 0x106) != 0x0)
    {
        if(*(HMENU16 *)(iVar10 + 0x106) == param_4)
        {
            pu_stack6        = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x3, param_6, in_DX, unaff_DI);
            uVar1           = (iVar10 + 0x108);
            uStack8         = (uVar1 + 0x2e);
            uVar1           = (iVar10 + 0x108);
            uVar11          = (uVar1 >> 0x10);
            iVar10          = uVar1;
            uStack296       = (iVar10 + 0x42);
            puVar9          = (iVar10 + 0x44);
            uStack296._3_1_ = (u8)(uStack296 >> 0x18);
            uVar6           = uStack296._3_1_;
            pcStack286      = uStack296;
            uStack268       = uStack296;
            if(uStack296._3_1_ == 0x0)
            {
                u_var2  = pass1_1020_bd80(uStack8);
                HVar12 = SEG_1000;
                unk_str_op_1000_3d3e(str_var1(param_6, local_108),
                                     str_var1(puVar9, u_var2));
            }
            else
            {
                pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), uStack296 & 0xffff | ZEXT24(puVar9) << 0x10);
                uStack296 = str_var1(puVar9, uVar6);
                HVar12    = SEG_1010;
                pass1_1010_c3c2(pu_stack6, (pu_stack6 >> 0x10),
                                str_var1(param_6, local_108),
                                str_var1(puVar9, uVar6), puVar9, in_AF, param_6);
            }
            BStack270 = ModifyMenu16(HVar12, local_108, param_6, 0x76, 0x0);
            UVar3     = GetMenuState16((HMENU16)LAST_SEGMENT, 0x0, 0x13c);
            if(UVar3 != 0xffff)
            {
                DeleteMenu16((HMENU16)LAST_SEGMENT, 0x0, 0x13c);
            }
            HVar12 = SEG_1008;
            BVar4  = pass1_1008_c6ae(globals->dat_1050_06e0, uStack8, 0x20);
            if(BVar4 != 0x0)
            {
                uStack296 = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
                HVar12    = (HMENU16)LAST_SEGMENT;
                InsertMenu16(SEG_1010, uStack296, (uStack296 >> 0x10), 0x13c, 0x400);
            }
            if((s_VrMode_1050_42ca + 0x8 + uStack8 * 0x2) == 0x0)
            {
                UVar3   = 0x1;
                param_4 = 0x77;
                goto LAB_1020_464c;
            }
            param_4 = 0x77;
        }
        else
        {
            HVar12    = (HMENU16)LAST_SEGMENT;
            HVar5     = GetSubMenu16(param_5, 0x1);
            uStack296 = (uStack296 & 0xffff0000 | HVar5);
            if(HVar5 != param_4)
                goto LAB_1020_479e;
            EnableMenuItem16((HMENU16)LAST_SEGMENT, 0x1, 0x200);
            EnableMenuItem16((HMENU16)LAST_SEGMENT, 0x1, 0x201);
            EnableMenuItem16((HMENU16)LAST_SEGMENT, 0x1, 0x202);
            uVar1     = (iVar10 + 0x108);
            uVar8     = *(uVar1 + 0x42);
            uStack292 = uVar8;
            pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), uVar8);
            uVar6      = uVar8;
            pcStack286 = (uVar8 & 0xffff | ZEXT24(in_DX) << 0x10);
            if((in_DX | uVar6) == 0x0)
            {
                return;
            }
            uStack278 = (uVar6 + 0x2e);
            if(((uVar6 + 0x30) | uStack278) == 0x0)
            {
                return;
            }
            uStack268    = (uStack278 + 0x200);
            local_108[0] = struct_op_1030_73a8(CONCAT13((in_DX >> 0x8), CONCAT12(in_DX, uVar6)));
            uVar11       = (local_108[0] >> 0x10);
            pu_stack6     = *(u16 **)(local_108[0] + 0x1c);
            uVar6        = (local_108[0] + 0x1e);
            if((uVar6 | pu_stack6) != 0x0)
            {
                uStack268 = (pu_stack6 & 0xffff | uVar6 << 0x10);
            }
            uStack268 = uStack268 & 0xff;
            if(uStack268 != 0x1)
            {
                return;
            }
            if((uStack268 & 0xff0000) != 0x0)
            {
                return;
            }
            local_134[0] = pass1_1030_6fa0(pcStack286);
            HVar12       = SEG_1008;
            BVar4        = pass1_1008_c6ae(globals->dat_1050_06e0, local_134[0], 0x3f);
            if(BVar4 != 0x0)
            {
                HVar12 = (HMENU16)LAST_SEGMENT;
                BVar4  = EnableMenuItem16(SEG_1008, 0x0, 0x201);
            }
            if((pcStack286 + 0x36) != 0x0)
            {
                BVar4 = EnableMenuItem16(HVar12, 0x0, 0x202);
            }
            HVar12 = SEG_1030;
            pass1_1030_69cc(pcStack286, BVar4, uStack268, param_6);
            if(BVar4 == 0x0)
            {
                return;
            }
            param_4 = 0x200;
        }
        UVar3 = 0x0;
        goto LAB_1020_464c;
    }
LAB_1020_479e:
    iVar7 = param_3 + -0x1;
    if(iVar7 == 0x0)
    {
        pass1_1018_2504(0x0, in_DX);
        if(iVar7 == 0x0)
        {
            EnableMenuItem16(SEG_1018, 0x401, 0x0);
        LAB_1020_47e3:
            HVar12 = (HMENU16)LAST_SEGMENT;
            UVar3  = 0x401;
            goto LAB_1020_464c;
        }
        HVar12 = (HMENU16)LAST_SEGMENT;
        EnableMenuItem16(SEG_1018, 0x400, 0x0);
    }
    else
    {
        if(param_3 == 0x2)
        {
            u_var2 = pass1_1020_64d4(*(iVar10 + 0xf6), 0x2);
            if(u_var2 == 0x0)
            {
                EnableMenuItem16(HVar12, 0x401, 0x0);
            }
            else
            {
                EnableMenuItem16(HVar12, 0x400, 0x0);
            }
            HVar12 = (HMENU16)LAST_SEGMENT;
            EnableMenuItem16((HMENU16)LAST_SEGMENT, CONCAT11(0x4, u_var2 == 0x0), 0x1);
            if((globals->PTR_LOOP_1050_0010 != 0x0) || ((iVar10 + 0x102) == 0x0))
                goto LAB_1020_47e3;
        }
        else
        {
            if(param_3 == 0x3)
            {
                local_138[0] = 0x0;
                local_134[0] = 0x0;
                HVar12       = SEG_1010;
                puStack304   = mixed_1010_20ba(
                  NULL, globals->u16_1050_0ed0, 0x2f, param_6, in_DX, unaff_DI);
                uVar11       = (puStack304 >> 0x10);
                uStack300    = *(puStack304 + 0x20);
                uVar6        = (puStack304 + 0x22);
                if((uVar6 | uStack300) != 0x0)
                {
                    HVar12 = SEG_1030;
                    pass1_1030_8308(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10),
                                    str_var1(param_6, local_134),
                                    str_var1(param_6, local_138), uStack300 & 0xffff | uVar6 << 0x10, local_134, uVar6);
                    local_138[0] = (puStack304 + 0x1e);
                }
                uStack296 = (uStack296 & 0xffff0000);
                do
                {
                    CheckMenuItem16(HVar12, 0x400, uStack296);
                    HVar12 = (HMENU16)LAST_SEGMENT;
                    EnableMenuItem16((HMENU16)LAST_SEGMENT, 0x401, uStack296);
                    uStack296 = (uStack296 & 0xffff0000 | (uStack296 + 0x1));
                } while((uStack296 + 0x1) < 0x5);
                CheckMenuItem16((HMENU16)LAST_SEGMENT, 0x408, local_138[0]);
                for(uStack296 = (uStack296 & 0xffff0000); uStack296 <= local_134[0]; uStack296 = (uStack296 & 0xffff0000 | (uStack296 + 0x1)))
                {
                    EnableMenuItem16((HMENU16)LAST_SEGMENT, 0x400, uStack296);
                }
                return;
            }
            if(param_3 != 0x4)
            {
                return;
            }
            param_4 = 0x2;
        }
    }
    UVar3 = 0x400;
LAB_1020_464c:
    EnableMenuItem16(HVar12, UVar3, param_4);
    return;
}

void  win_sys_op_1020_493c(u32 *param_1, u16 param_2, u8 *param_3, u16 param_4, HCURSOR16 param_5, WNDCLASS16 *param_6)

{
    void **ppcVar1;
    HCURSOR16    HVar2;
    u8          *puVar3;
    i16          iVar4;
    u32  *puVar5;
    u16          uVar6;
    u8          *puVar7;
    u8          *puVar8;
    u16          uVar9;
    u16          uVar10;
    i16          unaff_DI;
    u16          uVar11;
    u8           in_AF;
    u32   uVar12;
    u16         *puVar13;
    Struct100 *paVar14;
    char        *pcVar15;
    u8           uVar16;
    u16          uVar17;
    u16          uVar18;
    u16          uVar19;
    u32   local_356[0x42];
    u16          local_24e;
    u8          *puStack588;
    u32   local_144;
    u32   uStack320;
    u32   local_13c;
    u16          uStack42;
    u32   uStack38;
    u16          uStack34;
    u8          *puStack32;
    u32   uStack30;
    u32   uStack26;
    u32          uStack22;
    struct Struct43 *paStack18;
    u8          *puStack14;
    u8          *puStack12;
    u16          uStack10;
    u32   u_stack6;

    if(param_2 == 0xe9)
    {
        return;
    }
    uVar9  = param_1;
    puVar8 = (param_1 >> 0x10);
    if(param_2 < 0xea)
    {
        switch(param_2)
        {
        case 0x69:
            iVar4 = 0x0;
            break;
        case 0x6a:
            iVar4 = 0x1;
            break;
        case 0x6b:
            iVar4 = 0x2;
            break;
        case 0x6c:
            iVar4 = 0x3;
            break;
        case 0x6d:
            iVar4 = 0x4;
            break;
        default:
            return;
        case 0x77:
            if(((uVar9 + 0x10a) | (uVar9 + 0x108)) == 0x0)
            {
                return;
            }
            uVar12   = (uVar9 + 0x108);
            uVar19   = (s_VrMode_1050_42ca + 0x8 + (uVar12 + 0x2e) * 0x2);
            uStack26 = (uStack26 & 0xffff0000 | uVar19);
            if(uVar19 == 0x0)
            {
                return;
            }
            paStack18 = unk_io_op_1010_830aglobals->dat_1050_14cc, 0x1f8, param_6);
            WinHelp16(SEG_1010, uStack26, CONCAT11((undefined)(uStack26 >> 0xf), (uStack26 >> 0xf)),
                      str_var1(paStack18, 0x1));
            return;
        case 0x78:
            puVar13    = mixed_1010_20ba(
              NULL, globals->u16_1050_0ed0, 0x45, param_6, param_3, unaff_DI);
            puStack588 = (puVar13 >> 0x10);
            local_24e  = puVar13;
            enum_child_windows_1010_01be(SEG_1010);
            return;
        }
        window_op_1020_5764(NULL, param_1, iVar4, param_6);
        return;
    }
    if(param_2 == 0x132)
    {
        uVar6 = pass1_1020_64d4(*(uVar9 + 0xf6), 0x3);
        if(uVar6 == 0x0)
        {
            return;
        }
        uVar11 = 0xffff;
        goto LAB_1020_4ef8;
    }
    if(param_2 < 0x133)
    {
        if(param_2 == 0x102)
        {
            uVar16 = 0x0;
            mem_op_1000_179c(0xb4, param_3, 0);
            puVar8 = (param_3 | param_2);
            uStack34  = param_2;
            puStack32 = param_3;
            if(puVar8 == 0x0)
            {
                iVar4  = 0x0;
                puVar8 = 0x0;
            }
            else
            {
                uVar16 = 0x40;
                iVar4  = string_1040_8520(NULL,
                                         str_var1(param_3, param_2),
                                         globals->PTR_LOOP_1050_0396,
                                         0x31,
                                         0x2,
                                         0x57b,
                                         0x62b,
                                         puVar8,
                                         param_6);
            }
            local_144 = str_var1(puVar8, iVar4);
            ppcVar1   = (*local_144 + 0x74);
            (**ppcVar1)(uVar16, iVar4, puVar8);
            uStack320 = str_var1(uStack320, iVar4);
            if(iVar4 != 0x1)
            {
                return;
            }
            pass1_1028_837e((Struct100 *)str_var1(param_6, &local_13c), param_6, in_AF);
        LAB_1020_4b6c:
            fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_6, &local_13c));
            return;
        }
        if(param_2 < 0x103)
        {
            switch(param_2)
            {
            case 0xf0:
                ui_op_1020_536e(param_1, 0x0, -0x1, 0x1, param_3);
                return;
            default:
                return;
            case 0xf6:
                if((uVar9 + 0x116) != 0x0)
                {
                    if(param_1 == 0x0)
                    {
                        iVar4   = 0x0;
                        param_3 = 0x0;
                    }
                    else
                    {
                        iVar4   = uVar9 + 0xe2;
                        param_3 = puVar8;
                    }
                    local_356[0] = str_var1(param_3, iVar4);
                    pass1_1010_1ea6(globals->_PTR_LOOP_1050_02a0, str_var1(param_3, iVar4), param_6);
                    (uVar9 + 0x116) = 0x0;
                }
                iVar4 = 0x12;
                break;
            case 0xf7:
                unk_win_op_1010_7300(*(uVar9 + 0x10e), 0x0, 0x9, 0x0);
                return;
            case 0xfb:
                local_144 = mixed_1010_20ba(
                  NULL, globals->u16_1050_0ed0, 0x3, param_6, param_3, unaff_DI);
                uStack320 = mixed_1010_20ba(NULL,
                                            _PTR_LOOP_1050_0ed0,
                                            0x30,
                                            param_6,
                                            (local_144 >> 0x10),
                                            unaff_DI);
                pcVar15   = pass1_1010_375e(uStack320);
                pass1_1010_c25e(local_144, (local_144 >> 0x10), pcVar15, pcVar15, (pcVar15 >> 0x10), unaff_DI, param_6);
                return;
            case 0xfc:
                post_msg_1020_55b0(param_1, param_6);
                return;
            case 0x101:
                uStack26       = mixed_1010_20ba(
                  NULL, globals->u16_1050_0ed0, 0x2f, param_6, param_3, unaff_DI);
                uVar11         = (uStack26 >> 0x10);
                uStack22       = *(uStack26 + 0x24);
                puVar7         = (uStack26 + 0x26);
                uStack22 = puVar7 | uStack22;
                if(uStack22 == 0x0)
                {
                    uVar16 = 0x0;
                    mem_op_1000_179c(0xb4, puVar7, 0);
                    puVar8 = (puVar7 | uStack22);
                    uStack34  = uStack22;
                    puStack32 = puVar7;
                    if(puVar8 == 0x0)
                    {
                        puVar5 = 0x0;
                        puVar8 = 0x0;
                    }
                    else
                    {
                        uVar16 = 0x40;
                        puVar5 = string_1040_8520(NULL,
                                                  str_var1(puVar7, uStack22),
                                                  globals->PTR_LOOP_1050_0396,
                                                  0x30,
                                                  0x2,
                                                  0x57b,
                                                  0x730,
                                                  puVar8,
                                                  param_6);
                    }
                    uStack30 = str_var1(puVar8, puVar5);
                LAB_1020_4c5f:
                    ppcVar1 = (*puVar5 + 0x74);
                    (**ppcVar1)(uVar16, puVar5, puVar8);
                    return;
                }
                uVar12    = pass1_1038_af40(globals->ptr_1050_5b7c, (uVar9 + 0x8), 0xe, puVar7, uVar9, SEG_1038, param_6);
                paStack18 = (struct Struct43 *)mixed_1010_20ba(
                  NULL, globals->u16_1050_0ed0, 0x43, param_6, (uVar12 >> 0x10), unaff_DI);
                uVar11    = (paStack18 >> 0x10);
                iVar4     = paStack18;
                puStack14 = (iVar4 + 0xa);
                uStack10  = (iVar4 + 0xc);
                uVar9     = (iVar4 + 0xe);
                u_stack6   = str_var1(u_stack6, uVar9);
                if((iVar4 + 0x10) != 0x0)
                {
                    return;
                }
                pass1_1028_84ca((Struct100 *)str_var1(param_6, &local_13c), uStack22, uVar9, uStack10, puStack14, param_6, in_AF);
                goto LAB_1020_4b6c;
            }
        }
        else
        {
            if(param_2 != 0x106)
            {
                if(param_2 < 0x107)
                {
                    if(param_2 == 0x103)
                    {
                        local_144 = mixed_1010_20ba(
                          NULL, globals->u16_1050_0ed0, 0x2f, param_6, param_3, unaff_DI);
                        uVar11    = (local_144 >> 0x10);
                        uStack320 = (local_144 + 0x24);
                        puStack32 = (local_144 + 0x26);
                        uStack34  = puStack32 | uStack320;
                        if(uStack34 != 0x0)
                        {
                            uVar12    = pass1_1038_af40(globals->ptr_1050_5b7c, (uVar9 + 0x8), 0xf, puStack32, uVar9, SEG_1038, param_6);
                            local_13c = mixed_1010_20ba(NULL,
                                                        _PTR_LOOP_1050_0ed0,
                                                        0x42,
                                                        param_6,
                                                        (uVar12 >> 0x10),
                                                        unaff_DI);
                            uStack42  = (local_13c + 0xa);
                            if(uStack42 == 0x0)
                            {
                                return;
                            }
                            pass1_1030_e63e((Struct100 *)str_var1(param_6, &local_24e), uStack42, param_6, in_AF);
                            fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748,
                                             str_var1(param_6, &local_24e));
                            return;
                        }
                        uVar16 = 0x0;
                        mem_op_1000_179c(0xb4, puStack32, 0);
                        puVar8 = (puStack32 | uStack34);
                        if(puVar8 == 0x0)
                        {
                            puVar5 = 0x0;
                            puVar8 = 0x0;
                        }
                        else
                        {
                            uVar16 = 0x40;
                            puVar5 = string_1040_8520(NULL,
                                                      str_var1(puStack32, uStack34),
                                                      globals->PTR_LOOP_1050_0396,
                                                      0x30,
                                                      0x2,
                                                      0x57b,
                                                      0x730,
                                                      puVar8,
                                                      param_6);
                        }
                        uStack38 = str_var1(puVar8, puVar5);
                    }
                    else
                    {
                        if(param_2 != 0x104)
                        {
                            return;
                        }
                        puVar13    = mixed_1010_20ba(
                          NULL, globals->u16_1050_0ed0, 0x3, param_6, param_3, unaff_DI);
                        puStack32  = (puVar13 >> 0x10);
                        uStack34   = puVar13;
                        local_24e  = uStack34;
                        puStack588 = puStack32;
                        pass1_1010_af66(puVar13, puStack32);
                        local_144 = str_var1(local_144, uStack34);
                        if(uStack34 != 0x0)
                        {
                            uVar16 = 0x0;
                            mem_op_1000_179c(0xb4, puStack32, 0);
                            puVar8 = (puStack32 | uStack34);
                            if(puVar8 == 0x0)
                            {
                                iVar4  = 0x0;
                                puVar8 = 0x0;
                            }
                            else
                            {
                                uVar16 = 0x40;
                                iVar4  = string_1040_8520(NULL,
                                                         str_var1(puStack32, uStack34),
                                                         globals->PTR_LOOP_1050_0396,
                                                         0x31,
                                                         0x2,
                                                         0x57b,
                                                         0x62c,
                                                         puVar8,
                                                         param_6);
                            }
                            uStack320 = str_var1(puVar8, iVar4);
                            ppcVar1   = (*uStack320 + 0x74);
                            (**ppcVar1)(uVar16, iVar4, puVar8);
                            local_13c = str_var1(local_13c, iVar4);
                            if(iVar4 != 0x1)
                            {
                                return;
                            }
                            uVar16  = (param_6 >> 0x8);
                            paVar14 = pass1_1030_e79a((Struct100 *)CONCAT13(uVar16, CONCAT12(param_6, local_356)), param_6, in_AF);
                            uVar9   = (paVar14 >> 0x10);
                            puVar5  = local_356;
                            fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, CONCAT13(uVar16, CONCAT12(param_6, puVar5)));
                            win_1008_5c5c(param_6, puVar5, uVar9, globals->_PTR_LOOP_1050_02a0, 0x1e6);
                            return;
                        }
                        uVar16 = 0x0;
                        mem_op_1000_179c(0xb4, puStack32, 0);
                        puVar8 = (puStack32 | uStack34);
                        if(puVar8 == 0x0)
                        {
                            puVar5 = 0x0;
                            puVar8 = 0x0;
                        }
                        else
                        {
                            uVar16 = 0x40;
                            puVar5 = string_1040_8520(NULL,
                                                      str_var1(puStack32, uStack34),
                                                      globals->PTR_LOOP_1050_0396,
                                                      0x30,
                                                      0x2,
                                                      0x57b,
                                                      0x731,
                                                      puVar8,
                                                      param_6);
                        }
                        local_356[0] = str_var1(puVar8, puVar5);
                    }
                    goto LAB_1020_4c5f;
                }
                if(param_2 == 0x12f)
                {
                    pass1_1020_61c4(uVar9, puVar8,
                                    str_var1(param_6, &local_144),
                                    str_var1(param_6, &local_24e), param_3, unaff_DI, param_6);
                    iVar4 = local_24e + 0x6a;
                }
                else
                {
                    if(param_2 != 0x130)
                    {
                        if(param_2 != 0x131)
                        {
                            return;
                        }
                        uVar6 = pass1_1020_64d4(*(uVar9 + 0xf6), 0x2);
                        if(uVar6 == 0x0)
                        {
                            return;
                        }
                        iVar4 = 0x7;
                        goto LAB_1020_49b7;
                    }
                    pass1_1020_61c4(uVar9, puVar8,
                                    str_var1(param_6, &local_144),
                                    str_var1(param_6, &local_24e), param_3, unaff_DI, param_6);
                    iVar4 = local_24e + 0x68;
                }
                uStack320 = str_var1(uStack320, iVar4);
                if(0x6d < iVar4)
                {
                    return;
                }
                if(iVar4 < 0x69)
                {
                    return;
                }
                ppcVar1 = (*param_1 + 0x40);
                (**ppcVar1)();
                return;
            }
            iVar4 = 0x13;
        }
    LAB_1020_49b7:
        pass1_1038_af40(globals->ptr_1050_5b7c, (uVar9 + 0x8), iVar4, param_3, uVar9, SEG_1038, param_6);
        return;
    }
    if(param_2 == 0x1c8)
    {
        SendMessage16(param_5, 0x0, 0x0, 0x1110072);
        return;
    }
    if(0x1c8 < param_2)
    {
        if(param_2 == 0x1ca)
        {
            local_144 = mixed_1010_20ba(
              NULL, globals->u16_1050_0ed0, 0x3, param_6, param_3, unaff_DI);
            uStack320 = pass1_1010_c234(local_144, (local_144 >> 0x10), unaff_DI, param_6);
            uVar10    = (uStack320 >> 0x10);
            uVar19    = uStack320;
            if((uVar10 | uVar19) == 0x0)
            {
                return;
            }
            local_13c = mixed_1010_20ba(
              NULL, globals->u16_1050_0ed0, 0x30, param_6, (uVar10 | uVar19), unaff_DI);
            param_3   = (local_13c >> 0x10);
            pass1_1010_3770(local_13c, str_var1(uVar10, uVar19), param_3);
            iVar4 = 0x3;
        }
        else
        {
            uVar17 = (globals->_PTR_LOOP_1050_5748 >> 0x10);
            uVar6  = globals->_PTR_LOOP_1050_5748;
            if(param_2 == 0x200)
            {
                uVar12         = (uVar9 + 0x108);
                uVar11         = (uVar12 >> 0x10);
                iVar4          = uVar12;
                uStack26       = *(u16 **)(iVar4 + 0x42);
                param_3        = (iVar4 + 0x44);
                uStack26._3_1_ = (u8)(uStack26 >> 0x18);
                puStack14      = uStack26._3_1_;
                if(uStack26._3_1_ != 0x5)
                {
                    return;
                }
                pass1_1030_8344(uVar6, uVar17, uStack26 & 0xffff | ZEXT24(param_3) << 0x10);
                iVar4              = 0x25;
                globals->PTR_LOOP_1050_5f0c = puStack14;
                globals->PTR_LOOP_1050_5f0e = param_3;
                puStack12          = param_3;
            }
            else
            {
                if(param_2 == 0x201)
                {
                    uVar12         = (uVar9 + 0x108);
                    uVar11         = (uVar12 >> 0x10);
                    iVar4          = uVar12;
                    uStack26       = *(u16 **)(iVar4 + 0x42);
                    param_3        = (iVar4 + 0x44);
                    uStack26._3_1_ = (u8)(uStack26 >> 0x18);
                    puStack14      = uStack26._3_1_;
                    if(uStack26._3_1_ != 0x5)
                    {
                        return;
                    }
                    pass1_1030_8344(uVar6, uVar17, uStack26 & 0xffff | ZEXT24(param_3) << 0x10);
                    iVar4              = 0x26;
                    globals->PTR_LOOP_1050_5f16 = puStack14;
                    globals->PTR_LOOP_1050_5f18 = param_3;
                    puStack12          = param_3;
                }
                else
                {
                    if(param_2 != 0x202)
                    {
                        if(param_2 != 0x203)
                        {
                            return;
                        }
                        if((uVar9 + 0xf4) != 0x1)
                        {
                            return;
                        }
                        HVar2                        = SetCursor16(param_5);
                        *(HCURSOR16 *)(uVar9 + 0xee) = HVar2;
                        (uVar9 + 0xf4)               = 0x3;
                        SetCapture16((HWND16)LAST_SEGMENT);
                        return;
                    }
                    uVar12        = (uVar9 + 0x108);
                    uVar11        = (uVar12 >> 0x10);
                    iVar4         = uVar12;
                    u_stack6       = *(iVar4 + 0x42);
                    param_3       = (iVar4 + 0x44);
                    u_stack6._3_1_ = (u8)(u_stack6 >> 0x18);
                    puVar3        = u_stack6._3_1_;
                    if(u_stack6._3_1_ != 0x5)
                    {
                        return;
                    }
                    pass1_1030_8344(uVar6, uVar17, u_stack6 & 0xffff | ZEXT24(param_3) << 0x10);
                    uStack22           = str_var1(param_3, puVar3);
                    iVar4              = 0x27;
                    globals->PTR_LOOP_1050_5a68 = puVar3;
                    globals->PTR_LOOP_1050_5a6a = param_3;
                }
            }
        }
        goto LAB_1020_49b7;
    }
    switch(param_2)
    {
    case 0x133:
        uVar6 = pass1_1020_64d4(*(uVar9 + 0xf6), 0x3);
        if(uVar6 == 0x0)
        {
            return;
        }
        uVar18 = 0xffff;
        uVar11 = 0x0;
        break;
    case 0x134:
        uVar6 = pass1_1020_64d4(*(uVar9 + 0xf6), 0x3);
        if(uVar6 == 0x0)
        {
            return;
        }
        uVar11 = 0x1;
        goto LAB_1020_4ef8;
    case 0x135:
        uVar6 = pass1_1020_64d4(*(uVar9 + 0xf6), 0x3);
        if(uVar6 == 0x0)
        {
            return;
        }
        uVar18 = 0x1;
        uVar11 = 0x0;
        break;
    case 0x136:
        uVar6 = pass1_1020_64d4(*(uVar9 + 0xf6), 0x3);
        if(uVar6 == 0x0)
        {
            return;
        }
        uVar11 = 0xfffb;
        goto LAB_1020_4ef8;
    case 0x137:
        uVar6 = pass1_1020_64d4(*(uVar9 + 0xf6), 0x3);
        if(uVar6 == 0x0)
        {
            return;
        }
        uVar18 = 0xfffb;
        uVar11 = 0x0;
        break;
    case 0x138:
        uVar6 = pass1_1020_64d4(*(uVar9 + 0xf6), 0x3);
        if(uVar6 == 0x0)
        {
            return;
        }
        uVar11 = 0x5;
    LAB_1020_4ef8:
        uVar18 = 0x0;
        break;
    case 0x139:
        uVar6 = pass1_1020_64d4(*(uVar9 + 0xf6), 0x3);
        if(uVar6 == 0x0)
        {
            return;
        }
        uVar18 = 0x5;
        uVar11 = 0x0;
        break;
    default:
        goto switchD_1020_518a_caseD_13a;
    case 0x13c:
        uVar6 = pass1_1020_64d4(*(uVar9 + 0xf6), 0x2);
        if(uVar6 != 0x0)
        {
            iVar4 = 0x1a;
            goto LAB_1020_49b7;
        }
        goto switchD_1020_518a_caseD_13a;
    }
    pass1_1020_2a94(*(uVar9 + 0xce), str_var1(uVar11, uVar18), param_6);
switchD_1020_518a_caseD_13a:
    return;
}

BOOL16  enable_menu_item_1020_2c2a(HMENU16 param_1, i16 param_2)

{
    BOOL16 BVar1;
    u16    w_item_id;

    if(param_2 != 0x0)
    {
        return param_2 - 0x1;
    }
    EnableMenuItem16(param_1, 0x400, 0x3);
    if(globals->PTR_LOOP_1050_3960 < 0x2)
    {
        w_item_id = 0x401;
    }
    else
    {
        w_item_id = 0x400;
    }
    BVar1 = EnableMenuItem16((HMENU16)LAST_SEGMENT, w_item_id, 0x5);
    return BVar1;
}

void win_ui_op_1020_2cf0(Globals *globals, Struct0 *param_1)

{
    u32 uVar1;
    void     **ppcVar2;
    u16        icon_handle_1;
    BOOL16    *pBVar4;
    u8        *in_DX;
    u16        uVar5;
    u8        *extraout_DX;
    u8        *puVar6;
    u16        uVar7;
    u16        extraout_DX_00;
//    i16        iVar8;
    i16        unaff_DI;
    u16        uVar9;
    u16        unaff_SS;
    u16       *puVar10;
    u32        uVar11;
    u8        *puVar12;

    create_window_ex_1008_9760(param_1, SEG_1008);
//    uVar9                      = (param_1 >> 0x10);
//    iVar8                      = param_1;
    puVar10                    = mixed_1010_20ba(NULL,
                              globals->u16_1050_0ed0,
                              (param_1->field_0xfc),
                              unaff_SS,
                              in_DX,
                              unaff_DI);
    uVar5                      = (puVar10 >> 0x10);
    (param_1->field_0xf2)             = puVar10;
    (param_1->field_0xf4)             = uVar5;
    (param_1->field_0xe0)             = (param_1->field_0xf2);
    (param_1->field_0xe2)             = uVar5;
    puVar12                    = globals->hinst_1050_038c;
    icon_handle_1                     = LoadIcon16(SEG_1010, globals->s_SITEICON_1050_428d);
    *(HICON16 *)(param_1 + 0xc2) = icon_handle_1;
    uVar1                      = (param_1->field_0xf2);
    ppcVar2                    = ((param_1->field_0xf2) + 0x30);
    (**ppcVar2)(LAST_SEGMENT, uVar1, (uVar1 >> 0x10), icon_handle_1, puVar12);
    puVar6 = extraout_DX;
    mem_op_1000_179c(0x22, extraout_DX, 0);
    uVar7 = puVar6 | icon_handle_1;
    if(uVar7 == 0x0)
    {
        (param_1 + 0xf6) = 0x0;
    }
    else
    {
        load_draw_op_1020_2ede(str_var1(puVar6, icon_handle_1), param_1, SEG_1000);
        (param_1 + 0xf6) = icon_handle_1;
        (param_1 + 0xf8) = uVar7;
    }
    (param_1 + 0xe8) = (param_1 + 0xf6);
    pass1_1018_0ac0(*(param_1 + 0xf2), param_1 & 0xffff | uVar9 << 0x10);
    uVar11  = pass1_1018_0b08(*(param_1 + 0xf2));
    pBVar4  = (BOOL16 *)uVar11;
    ppcVar2 = (param_1 + 0x14);
    (**ppcVar2)();
    ppcVar2 = ((param_1 + 0xf2) + 0x10);
    (**ppcVar2)();
    MoveWindow16(SEG_1018, 0x1, pBVar4[0x3], pBVar4[0x2], pBVar4[0x1], *pBVar4);
    pass1_1008_3e0e(param_1);
    UpdateWindow16(SEG_1008);
}

void  cleanup_win_ui_1020_2fea(Struct12 *in_struct_1, HDC16 in_dc_handle_2)

{
//    Struct12 *iVar1;
//    u16         var2;
    u16         unaff_SS;

//    var2                          = (in_struct_1 >> 0x10);
//    iVar1                         = (Struct12 *)in_struct_1;
    in_struct_1->offset_field_0x0 = addr_table_1020_363c;//0x363c;
    in_struct_1->offset_field_0x2       = SEG_1020;
    if(in_struct_1->field_0x14 != 0x0)
    {
        in_dc_handle_2 = SEG_1010;
        pass1_1010_1ea6(in_struct_1->field_0x14, in_struct_1 & 0xffff | var2 << 0x10, unaff_SS);
    }
    SelectObject16(in_dc_handle_2, in_struct_1->field_0x1c_addr_base);
    SelectObject16((HDC16)LAST_SEGMENT, in_struct_1->field_0x1e);
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    SelectPalette16((HDC16)LAST_SEGMENT, 0x0, in_struct_1->field_0x20);
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    DeleteDC16((HDC16)LAST_SEGMENT);
    in_struct_1->offset_field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    in_struct_1->offset_field_0x2       = SEG_1008;
    in_struct_1->offset_field_0x0 = addr_table_1008_380a[36]; // 0x389a
    in_struct_1->offset_field_0x2       = SEG_1008;
}

Struct18 * pass1_1020_3616(Struct18 *param_1, u8 param_2, u16 param_3)

{
    cleanup_win_ui_1020_2fea((Struct12 *)param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

void  win_ui_op_1020_36f6(u32 param_1, i16 param_2, short param_3)

{
    i16        iVar1;
    void **ppcVar2;
    u32 uVar3;
    char      *pcVar4;
    u16        uVar5;
    u16        uVar6;
    SEGPTR     lp_string;
    i16        iVar7;
    u16        uVar8;
    HWND16     hwnd;
    char      *pcVar9;
    u16      id;
    u8        *puStack1034;
    char       local_406[0x400];
    u32        u_stack6;

    iVar7 = param_1;
    uVar8 = (param_1 >> 0x10);
    if(param_2 == 0x1)
    {
        (iVar7 + 0x8) = 0x0;
        return;
    }
    if(param_2 != 0xd)
    {
        return;
    }
    u_stack6 = pass1_1018_1e78(*(iVar7 + 0x8), -0x1);
    uVar6   = (u_stack6 >> 0x10);
    GetWindowText16(SEG_1018, 0x3ff, (u16)local_406);
    pcVar4       = pass1_1000_472c(str_var1(param_3, local_406), ':');
    puStack1034  = str_var1(uVar6, pcVar4 + 0x2);
    *puStack1034 = 0x0;
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, 0x3ff, local_406);
    ppcVar2 = ((iVar7 + 0x18) + 0x18);
    (**ppcVar2)();
    uVar3 = (iVar7 + 0x8);
    iVar1 = (uVar3 + 0x4a);
    uVar3 = (u_stack6 + 0x2);
    SetDlgItemText16(SEG_1010, (u16)uVar3, (SEGPTR)(uVar3 >> 0x10));
    uVar3 = (u_stack6 + 0xa);
    SetDlgItemText16((HWND16)LAST_SEGMENT, (u16)uVar3, (SEGPTR)(uVar3 >> 0x10));
    uVar3 = (u_stack6 + 0x12);
    SetDlgItemText16((HWND16)LAST_SEGMENT, (u16)uVar3, (SEGPTR)(uVar3 >> 0x10));
    uVar3 = (u_stack6 + 0xe);
    SetDlgItemText16((HWND16)LAST_SEGMENT, (u16)uVar3, (SEGPTR)(uVar3 >> 0x10));
    if(iVar1 != 0x0)
    {
        hwnd  = SEG_1018;
        uVar5 = pass1_1018_1f1a(*(iVar7 + 0x8), (u_stack6 + 0x1a));
        if(uVar5 != 0x0)
        {
            uVar3     = (u_stack6 + 0x16);
            id        = (u16)uVar3;
            lp_string = (SEGPTR)(uVar3 >> 0x10);
            goto LAB_1020_3846;
        }
    }
    hwnd      = SEG_1010;
    pcVar9    = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
    lp_string = (SEGPTR)(pcVar9 >> 0x10);
    id        = (u16)pcVar9;
LAB_1020_3846:
    SetDlgItemText16(hwnd, id, lp_string);
    if((iVar7 + 0x1c) != 0x0)
    {
        GetDlgItem16((HWND16)LAST_SEGMENT, (u_stack6 + 0x1a));
        SetFocus16((HWND16)LAST_SEGMENT);
        return;
    }
    InvalidateRect16((HWND16)LAST_SEGMENT, (RECT16 *)0x0, 0x0);
    return;
}

void  pass1_1020_3898(Struct30 *param_1, u16 param_2)

{
    destroy_window_1020_3b3e(param_1, param_2);
    return;
}

void  window_op_1020_38aa(Struct0 *param_1)

{
    void **ppcVar1;
    u16          u_var2;
    Struct160 *paVar3;
    u32   uVar4;
    u8          *in_DX;
    u16          uVar5;
    u8          *extraout_DX;
    u8          *puVar6;
    u8          *extraout_DX_00;
    u8          *puVar7;
    u16          uVar8;
    u16          extraout_DX_01;
    i16          unaff_DI;
    HWND16       HVar9;
    u16          unaff_SS;
    u16         *puVar10;
    u16          uVar11;
    u16          uVar12;
    RECT16       local_12;
    i16          iStack14;
    i16          iStack12;
    RECT16       local_a;
    i16          iStack6;
    i16          iStack4;

    uVar11 = param_1;
    uVar12 = (param_1 >> 0x10);
    create_window_ex_1008_9760(param_1, SEG_1008);
    puVar10         = mixed_1010_20ba(NULL, globals->u16_1050_0ed0, 0x6, unaff_SS, in_DX, unaff_DI);
    uVar5           = (puVar10 >> 0x10);
    (uVar11 + 0xfa) = puVar10;
    (uVar11 + 0xfc) = uVar5;
    (uVar11 + 0xe0) = (uVar11 + 0xfa);
    (uVar11 + 0xe2) = uVar5;
    if((uVar12 | uVar11) == 0x0)
    {
        u_var2 = 0x0;
        uVar8 = 0x0;
    }
    else
    {
        u_var2 = uVar11 + 0xf2;
        uVar8 = uVar12;
    }
    ppcVar1 = ((uVar11 + 0xfa) + 0x4);
    (**ppcVar1)(SEG_1010, (uVar11 + 0xfa), 0x0, u_var2, uVar8);
    puVar7 = extraout_DX;
    pass1_1018_1a8e(*(uVar11 + 0xfa), extraout_DX, unaff_DI, unaff_SS);
    mem_op_1000_179c(0x20, puVar7, 0);
    puVar6 = (puVar7 | u_var2);
    if(puVar6 == 0x0)
    {
        (uVar11 + 0xf6) = 0x0;
    }
    else
    {
        unk_draw_op_1020_3da4((Struct24 *)str_var1(puVar7, u_var2), param_1);
        (uVar11 + 0xf6) = u_var2;
        (uVar11 + 0xf8) = extraout_DX_00;
        puVar6          = extraout_DX_00;
    }
    uVar4           = (uVar11 + 0xf6);
    (uVar11 + 0xe8) = uVar4;
    mem_op_1000_179c(0x42, puVar6, 0);
    paVar3 = (Struct160 *) uVar4;
    puVar7 = (puVar6 | paVar3);
    if(puVar7 == 0x0)
    {
        (uVar11 + 0x102) = 0x0;
    }
    else
    {
        pass1_1008_3bd6(paVar3, puVar6, 0x0, 0xf1, 0x0, 0x1ac01ad,
                        str_var1((uVar11 + 0x8), 0xf4), puVar7, unaff_SS);
        *(Struct160 **)(uVar11 + 0x102) = paVar3;
        (uVar11 + 0x104)                  = puVar7;
    }
    HVar9 = SEG_1000;
    mem_op_1000_179c(0x42, puVar7, 0);
    uVar8 = puVar7 | paVar3;
    if(uVar8 == 0x0)
    {
        (uVar11 + 0x106) = 0x0;
    }
    else
    {
        HVar9 = SEG_1008;
        pass1_1008_3bd6(paVar3, puVar7, 0x0, 0xf500f1, 0x0, 0x1ae01af,
                        str_var1((uVar11 + 0x8), 0xf5), uVar8, unaff_SS);
        *(Struct160 **)(uVar11 + 0x106) = paVar3;
        (uVar11 + 0x108)                  = uVar8;
    }
    uVar4   = (uVar11 + 0xfa);
    ppcVar1 = ((uVar11 + 0xfa) + 0x10);
    (**ppcVar1)(HVar9, uVar4, (uVar4 >> 0x10));
    puVar7 = paVar3->field_0x2;
    uVar8  = MoveWindow16(HVar9, 0x1, &paVar3->field_0x6, &paVar3->field_0x4, (u16)puVar7, *(BOOL16 *)paVar3);
    HVar9 = SEG_1000;
    mem_op_1000_179c(0x8e, puVar7, 0);
    u_var2 = puVar7 | uVar8;
    if(u_var2 == 0x0)
    {
        (uVar11 + 0x10a) = 0x0;
    }
    else
    {
        HVar9 = (HWND16)SEG_1040;
        get_sys_metrics_1040_7728(
          str_var1(puVar7, uVar8), 0x1, 0x0, 0xfc0, (uVar11 + 0x8));
        (uVar11 + 0x10a) = uVar8;
        (uVar11 + 0x10c) = u_var2;
    }
    uVar4          = (uVar11 + 0x10a);
    (uVar4 + 0x74) = 0x1;
    uVar4          = (uVar11 + 0x10a);
    ppcVar1        = ((uVar11 + 0x10a) + 0x8);
    (**ppcVar1)(HVar9, uVar4, (uVar4 >> 0x10));
    if(((uVar11 + 0x10c) | (uVar11 + 0x10a)) != 0x0)
    {
        GetWindowRect16(HVar9, &local_a);
        GetWindowRect16((HWND16)LAST_SEGMENT, &local_12);
        iStack12   = iStack12 - local_12.y;
        iStack14   = iStack6 - local_a.x;
        local_12.x = local_a.x;
        local_12.y = iStack4 + 0x3;
        SetWindowPos16((HWND16)LAST_SEGMENT, 0x44, iStack12, iStack14, local_12.y, local_a.x, 0x0);
    }
    return;
}
