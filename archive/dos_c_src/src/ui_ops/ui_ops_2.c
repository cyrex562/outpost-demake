#include "ui_ops_2.h"

#include "address_tables/data_tables.h"
#include "address_tables/function_tables.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "op_int.h"
#include "op_winapi.h"
#include "op_windef.h"
#include "string_ops.h"
#include "struct_20.h"
#include "structs/structs_0xx/struct_18.h"
#include "structs/structs_0xx/structs_2x.h"
#include "sys_ops/sys_ops_9.h"
#include "ui_ops_1.h"
#include "unk/unk_14.h"
#include "unk/unk_15.h"
#include "unk/unk_17.h"
#include "win_ops/win_ops_1.h"


void  win_ui_op_1040_5800(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5)

{
    void **ppcVar1;
    u32  u_var2;
    u16         uVar3;
    u16         uVar4;
    Struct18 *paVar5;
    u8         *in_DX;
    u8         *puVar6;
    u8         *puVar7;
    u8         *extraout_DX;
    i16         iVar8;
    u8         *unaff_DI;
    u16         uVar9;
    HWND16      hwnd;
    u16         unaff_SS;
    i16        *piStack24;
    RECT16      local_14[0x2];
    i16         iStack12;
    Struct18 *paStack10;
    Struct20 *paStack6;

    if(param_4 == 0xeb)
    {
        paStack6 = (Struct20 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, unaff_SS, in_DX, unaff_DI);
        puVar6   = (paStack6 >> 0x10);
        paVar5   = (param_1 + 0x90);
        if(paVar5 != (Struct18 *)0x0)
        {
            paStack10 = paVar5;
            mem_op_1000_179c(0x18, puVar6, 0);
            uVar3 = paVar5;
            puVar7 = (puVar6 | uVar3);
            if(puVar7 == 0x0)
            {
                uVar3  = 0x0;
                puVar7 = 0x0;
            }
            else
            {
                struct_1040_a598((paVar5 & 0xffff | ZEXT24(puVar6) << 0x10));
            }
            (param_1 + 0x90) = uVar3;
            (param_1 + 0x92) = puVar7;
            (param_1 + 0x90) = 0x6;
            iStack12         = (param_1 + 0x90);
            uVar3 = iStack12 * 0xa + 0x2;
            mem_op_1000_179c(uVar3, puVar7, 0);
            piStack24 = str_var1(puVar7, uVar3);
            if((puVar7 | uVar3) == 0x0)
            {
                u_var2         = (param_1 + 0x90);
                (u_var2 + 0x2) = 0x0;
            }
            else
            {
                *piStack24 = iStack12;
                pass1_1000_5586(0xa564, SEG_1040, iStack12, 0xa, uVar3 + 0x2, puVar7);
                u_var2         = (param_1 + 0x90);
                uVar9         = (u_var2 >> 0x10);
                iVar8         = u_var2;
                (iVar8 + 0x2) = uVar3 + 0x2;
                (iVar8 + 0x4) = puVar7;
                unaff_DI      = puVar7;
            }
            u_var2          = (param_1 + 0x90);
            (u_var2 + 0x6)  = (paStack10 + 0x6);
            u_var2          = (param_1 + 0x90);
            (u_var2 + 0xa)  = 0x4;
            u_var2          = (param_1 + 0x90);
            (u_var2 + 0x12) = (param_1 + 0xa);
            hwnd           = SEG_1010;
            pass1_1010_a50c(paStack6, 0x10505d78, *(param_1 + 0x90));
            if(paStack10 != (Struct18 *)0x0)
            {
                pass1_1040_a5d0(paStack10);
                hwnd = SEG_1000;
                fn_ptr_1000_17ce(paStack10, SEG_1000);
            }
            ppcVar1 = (str_var1(param_2, param_1) + 0x70);
            (**ppcVar1)();
            puVar6 = extraout_DX;
            uVar4  = pass1_1040_5cd6(str_var1(param_2, param_1));
            if(uVar4 != 0x0)
            {
                pass1_1040_5eaa(str_var1(param_2, param_1));
                (param_1 + 0x94) = 0x0;
            }
            pass1_1040_5dc4(str_var1(param_2, param_1), puVar6, unaff_DI, unaff_SS);
            GetWindowRect16(hwnd, local_14);
            InvalidateRect16((HWND16)LAST_SEGMENT, *(RECT16 **)(param_1 + 0x9c), 0x0);
            if((param_1 + 0x9c) != 0x0)
            {
                (param_1 + 0x9c) = 0x0;
            }
        }
    }
    else
    {
        if(param_4 != 0x13b)
        {
            pass1_1040_b54a(param_1, param_2, param_3, param_4, in_DX, param_5, unaff_SS);
            return;
        }
        GetDlgItem16(param_5, 0x1790);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
    }
    return;
}


void  message_box_op_1040_37f0(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5, u16 param_6)

{
    u16        uVar1;
    u8        *in_DX;
    u16        u_var2;
    i16        unaff_DI;
    LRESULT    LVar3;
    i16        iVar4;
    char       local_40c[0x402];
    u32 uStack10;
    u16       *pu_stack6;

    if(param_4 == 0x193)
    {
        pu_stack6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_6, in_DX, unaff_DI);
        u_var2    = (pu_stack6 >> 0x10);
        uStack10 = (pu_stack6 + 0x68);
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x3ff, local_40c, param_6);
        uVar1 = MessageBox16(SEG_1010, (s_New_failed_in_Op__Op_1050_0020 + 0x10), uStack10, (uStack10 >> 0x10));
        pass1_1018_3710((param_1 + 0x8e), param_6, uVar1, u_var2);
        PostMessage16(SEG_1018, 0x0, 0x0, 0x1110002);
    }
    else
    {
        if(param_4 != 0x194)
        {
            post_win_msg_1040_7b3c(
              str_var1(param_2, param_1), param_3, param_4, param_4, param_5);
            return;
        }
        pass1_1038_af40(globals->ptr_1050_5b7c, (param_1 + 0x8), 0x21, in_DX, param_1, SEG_1038, param_6);
        LVar3    = SendMessage16((HWND16)SEG_1038, 0x0, 0x0, 0x1110002);
        iVar4    = 0x1;
        pu_stack6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_6, (LVar3 >> 0x10), unaff_DI);
        pass1_1010_038e(pu_stack6, iVar4, param_6);
    }
    return;
}


void  pass1_1040_39e2(Struct18 *param_1)

{
    u16 uVar1;

    uVar1              = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1040_3ffc;//0x3ffc;
    param_1->field_0x2 = SEG_1040;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1038);
    return;
}


void  show_win_1040_3ae8(Struct1 *param_1, u16 param_2)

{
    dialog_ui_fn_1040_78e2(param_1, param_2);
    move_win_1040_826c(param_1, -0x1, 0xffff);
    ShowWindow16(param_2, 0x5);
    SetFocus16((HWND16)LAST_SEGMENT);
    return;
}


void  win_ui_op_1040_3b1e(Struct2 *param_1, WORD *param_2)

{
    BOOL16     BVar1;
    HWND16     HVar2;
    u8        *in_DX;
    u16        uVar3;
    u16        uVar4;
    i16        unaff_DI;
    u16        uVar5;
    u32        uVar6;
    CHAR       local_10e[0x82];
    CHAR       local_8c[0x82];
    u32 uStack10;
    u16       *pu_stack6;

    pu_stack6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_2, in_DX, unaff_DI);
    uStack10 = (pu_stack6 + 0x68);
    uVar5    = (param_1 >> 0x10);
    uVar4    = param_1;
    GetWindowText16(SEG_1010, 0x80, (u16)local_8c);
    wsprintf16(LAST_SEGMENT, local_10e, param_2);
    SetWindowText16((HWND16)LAST_SEGMENT, (SEGPTR)local_10e);
    uVar3 = uVar5;
    pass1_1018_3d44(*(uVar4 + 0x8e), (param_1 & 0xffff0000 | (uVar4 + 0x92)), (param_1 & 0xffff0000 | (uVar4 + 0x96)));
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x80, local_10e, (short)param_2);
    wsprintf16(SEG_1010, local_8c, param_2);
    SetDlgItemText16((HWND16)LAST_SEGMENT, (u16)local_8c, (SEGPTR)param_2);
    BVar1          = CheckRadioButton16((HWND16)LAST_SEGMENT, 0x188, 0x18d, 0x188);
    (uVar4 + 0xa0) = 0x188;
    uVar6          = switch_1018_3b9e(*(uVar4 + 0x8e), (uVar4 + 0xa0), BVar1, uVar3, param_2);
    send_dlg_item_msg_1040_3f12(uVar4, uVar5, uVar6, SEG_1018, param_2);
    dialog_item_ui_op_1040_3e08(param_1, SEG_1018);
    HVar2                     = GetDlgItem16(SEG_1018, 0x186);
    *(HWND16 *)(uVar4 + 0x9a) = HVar2;
    return;
}


void  unk_win_ui_op_1040_3c64(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5)

{
    u16     UVar1;
    u16     in_DX;
    u16     u_var2;
    i16     unaff_DI;
    u16     unaff_SS;
    u32     uVar3;
    LRESULT LVar4;
    u16    *puVar5;
    i16     iVar6;

    if(param_4 == 0x186)
    {
        LVar4 = SendDlgItemMessage16(param_5, 0x0, 0x0, 0x0, 0x1900409);
        u_var2 = (LVar4 >> 0x10);
        UVar1 = GetDlgItemInt16((HWND16)LAST_SEGMENT, 0x0, (BOOL16 *)0x0, 0x0);
        pass1_1018_36e6(*(param_1 + 0x8e), UVar1, LVar4, (param_1 + 0xa0));
        pass1_1038_af40(globals->ptr_1050_5b7c, (param_1 + 0x8), 0x22, u_var2, param_1, SEG_1038, unaff_SS);
        LVar4  = SendMessage16((HWND16)SEG_1038, 0x0, 0x0, 0x1110002);
        iVar6  = 0x1;
        puVar5 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, unaff_SS, (LVar4 >> 0x10), unaff_DI);
        pass1_1010_038e(puVar5, iVar6, unaff_SS);
    }
    else
    {
        if(param_4 - 0x186 < 0x2)
        {
        LAB_1040_3c7f:
            post_win_msg_1040_7b3c(
              str_var1(param_2, param_1), param_3, param_4, param_4, param_5);
            return;
        }
        if(param_4 - 0x188 < 0x5 || param_4 == 0x18d)
        {
            (param_1 + 0xa0) = param_4;
            param_5          = SEG_1018;
            uVar3            = switch_1018_3b9e(*(param_1 + 0x8e), param_4, param_4, in_DX, unaff_SS);
            send_dlg_item_msg_1040_3f12(param_1, param_2, uVar3, SEG_1018, unaff_SS);
        }
        else
        {
            if(param_4 - 0x188 != 0x8)
                goto LAB_1040_3c7f;
            if(param_4 != 0x1)
            {
                return;
            }
        }
        dialog_item_ui_op_1040_3e08((Struct2 *)str_var1(param_2, param_1), param_5);
    }
    return;
}


void  dialog_item_ui_op_1040_3e08(Struct2 *in_struct_1, u16 param_2)

{
    u16        UVar1;
    u16        u_var2;
    Struct2 *local_struct_1;
    u16        var3;
    HWND16     HVar3;
    u16        unaff_SS;
    LRESULT    LVar4;

    var3           = (in_struct_1 >> 0x10);
    local_struct_1 = (Struct2 *)in_struct_1;
    CheckRadioButton16(param_2, local_struct_1->field_0xa0, 0x18d, 0x188);
    local_struct_1->field_9c   = 0x0;
    local_struct_1->field_9e = 0x0;
    HVar3                      = (HWND16)LAST_SEGMENT;
    LVar4                      = SendDlgItemMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x0, 0x1900409);
    if(LVar4 != -0x1)
    {
        HVar3                      = SEG_1018;
        u_var2                      = pass1_1018_3ab2(local_struct_1->field_0x8e, LVar4, local_struct_1->field_0xa0, unaff_SS);
        local_struct_1->field_9e = u_var2;
    }
    SetDlgItemInt16(HVar3, 0x0, local_struct_1->field_9c, 0x18e);
    HVar3 = (HWND16)LAST_SEGMENT;
    SetDlgItemInt16((HWND16)LAST_SEGMENT, 0x0, local_struct_1->field_9e, 0x191);
    UVar1 = local_struct_1->field_0xa0;
    if(UVar1 - 0x188 < 0x6)
    {
        HVar3 = (HWND16)SEG_1040;
        switch(UVar1)
        {
        case 0x188:
            local_struct_1->field_0xa4 = 0x5;
            break;
        case 0x189:
            local_struct_1->field_0xa4 = 0x6;
            break;
        case 0x18a:
            local_struct_1->field_0xa4 = 0x7;
            break;
        case 0x18b:
            local_struct_1->field_0xa4 = 0x8;
            break;
        case 0x18c:
            local_struct_1->field_0xa4 = 0x9;
            break;
        case 0x18d:
            local_struct_1->field_0xa4 = 0xa;
        }
    }
    invalidate_rect_1040_3ddc(in_struct_1, HVar3);
    return;
}


void  pass1_1040_40e2(Struct18 *param_1)

{
    u16 uVar1;

    uVar1              = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1040_4466;//0x4466;
    param_1->field_0x2 = SEG_1040;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1038);
    return;
}


void  win_ui_op_1040_410e(Struct1 *param_1, u16 param_2, u8 *param_3)

{
    u32 uVar1;
    u8        *pu_var2;
    i16        iVar3;
    RECT16    *unaff_DI;
    u16        uVar4;
    u16        uVar5;
    HWND16     hwnd;
    u8         in_AF;
    u16       *puVar6;
    i16       *piVar7;
    i16       *piVar8;
    u8        *puVar9;
    i16        local_36;
    i16        local_34;
    i16        local_32;
    u8         local_30[0x6];
    i16        local_2a[0x4];
    u32 uStack34;
    u32 local_1e;
    u32 uStack26;
    RECT16     local_16;
    i16        iStack18;
    i16        iStack16;
    HWND16     HStack14;
    u8         local_c[0xa];

    dialog_ui_fn_1040_78e2(param_1, param_2);
    pass1_1000_4906((Struct20 *)str_var1(param_3, local_c), 0x0, 0xa);
    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    uVar1 = (iVar3 + 0x8e);
    uVar5 = (uVar1 >> 0x10);
    sys_1000_3f9c(local_c,
                  param_3,
                  0x5d38,
                  *(uVar1 + 0x76),
                  &stack0xfffe,
                  uVar5,
                  SEG_1000,
                  param_3,
                  in_AF);
    HStack14 = GetDlgItem16(SEG_1000, 0xfb5);
    SendMessage16((HWND16)LAST_SEGMENT, local_c, (WPARAM16)param_3, 0xc0000);
    SetFocus16((HWND16)LAST_SEGMENT);
    SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0xffff, 0x4010000);
    GetWindowRect16((HWND16)LAST_SEGMENT, &local_16);
    pass1_1000_4906((Struct20 *)str_var1(param_3, &local_1e), 0x0, 0x8);
    uVar1    = (iVar3 + 0x8e);
    hwnd     = SEG_1010;
    uStack34 = pass1_1010_5f7a(uVar1, (uVar1 >> 0x10), 0x0, 0x7);
    if(uStack34 != 0x0)
    {
        local_1e = *uStack34;
        unaff_DI = &local_16;
        uStack26 = (uStack34 + 0x4);
    }
    if((local_1e == 0x0) && ((BOOL16)local_1e == 0x0))
    {
        puVar6 = pass1_1008_3e38(str_var1(param_3, local_30));
        pu_var2 = (puVar6 >> 0x10);
        uVar1  = (iVar3 + 0x96);
        pass1_1018_2678(uVar1, (uVar1 >> 0x10), str_var1(param_3, local_30));
        pass1_1008_3e94(str_var1(param_3, local_30),
                        str_var1(param_3, &local_32),
                        str_var1(param_3, local_2a));
        piVar8 = &local_34;
        piVar7 = &local_36;
        puVar9 = param_3;
        puVar6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x48, param_3, pu_var2, unaff_DI);
        hwnd   = SEG_1008;
        pass1_1008_3e94((puVar6 & 0xffff0000 | (puVar6 + 0xe)),
                        str_var1(param_3, piVar7),
                        str_var1(puVar9, piVar8));
        uStack26 = str_var1(iStack16 - local_16.y, iStack18 - local_16.x);
        local_1e = str_var1((((puVar6 + 0xc) * -0x14) / 0x258 - (iStack16 - local_16.y)) + local_36 + local_32, local_34 + local_2a[0]);
    }
    move_win_1040_826c(param_1, local_1e, (BOOL16)local_1e);
    ShowWindow16(hwnd, 0x5);
    return;
}


void  win_ui_op_1040_42b2(u32 param_1, i16 param_2, HWND16 param_3, WORD *param_4)

{
    u32 uVar1;
    u16        u_var2;
    u16        uVar3;
    i16        iVar4;
    u16        uVar5;
    LRESULT    LVar6;
    CHAR       local_54[0x52];

    iVar4 = param_1;
    uVar5 = (param_1 >> 0x10);
    if(param_2 == 0x0)
    {
        (iVar4 + 0x9a) = 0x1;
        DestroyWindow16(param_3);
        return;
    }
    pass1_1000_4906((Struct20 *)str_var1(param_4, local_54), 0x0, 0x51);
    GetDlgItem16(SEG_1000, 0xfb5);
    LVar6 = SendMessage16((HWND16)LAST_SEGMENT, local_54, (WPARAM16)param_4, 0xd0051);
    uVar3 = (LVar6 >> 0x10);
    u_var2 = pass1_1000_3e2c(str_var1(param_4, local_54));
    if((uVar3 | u_var2) != 0x0)
    {
        (iVar4 + 0x92) = u_var2;
        (iVar4 + 0x94) = uVar3;
    }
    if(uVar3 < 0x0)
    {
        wsprintf16(SEG_1000, local_54, param_4);
        SendMessage16((HWND16)LAST_SEGMENT, local_54, (WPARAM16)param_4, 0xc0000);
        SetFocus16((HWND16)LAST_SEGMENT);
        SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0xffff, 0x4010000);
        return;
    }
    GetDlgItem16(SEG_1000, 0x1);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
    uVar1          = (iVar4 + 0x8e);
    (uVar1 + 0x76) = (iVar4 + 0x92);
    uVar1          = (iVar4 + 0x92);
    PostMessage16((HWND16)LAST_SEGMENT, uVar1, (WPARAM16)(uVar1 >> 0x10), 0x4000000);
    GetDlgItem16((HWND16)LAST_SEGMENT, 0x1);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
    return;
}


void  pass1_1040_477e(Struct1 *param_1, u8 *param_2, u16 param_3, u16 param_4)

{
    u8  *puVar1;
    u16 *pu_var2;
    u8  *puVar3;
    u8  *puVar4;
    i16  unaff_DI;
    u16 *puVar5;
    u16  uVar6;
    u16  uVar7;

    unk_win_ui_op_1040_b230(param_1, param_3, param_4);
    puVar5 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_4, param_2, unaff_DI);
    puVar3 = (puVar5 >> 0x10);
    uVar7  = SEG_1050;
    uVar6  = u16_data_1050_5d68;//0x5d68;
    puVar1 = pass1_1008_5fd8(param_4, puVar3);
    puVar4 = puVar3;
    pu_var2 = pass1_1000_3cea(str_var1(puVar3, puVar1), str_var1(uVar7, uVar6));
    pass1_1010_e964(puVar4, param_4, unaff_DI);
    pass1_1000_3cea(str_var1(puVar3, puVar1), str_var1(puVar4, pu_var2));
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (param_1 + 0x10)),
                         str_var1(puVar3, puVar1));
    fn_ptr_1000_17ce((Struct18 *)str_var1(puVar3, puVar1), SEG_1000);
    return;
}


void  set_win_pos_1040_4ae4(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5)

{
    void **ppcVar1;
    u32  u_var2;
    u16         uVar3;
    Struct18 *paVar4;
    u8         *in_DX;
    u8         *puVar5;
    u8         *puVar6;
    i16         iVar7;
    i16         unaff_DI;
    u16         uVar8;
    u16         unaff_SS;
    RECT16      local_24;
    i16         iStack32;
    Struct18 *paStack20;
    Struct18 *paStack16;
    i16         iStack12;
    Struct18 *paStack10;
    Struct20 *paStack6;

    if(param_4 == 0xeb)
    {
        paStack6 = (Struct20 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, unaff_SS, in_DX, unaff_DI);
        puVar5   = (paStack6 >> 0x10);
        paVar4   = (param_1 + 0x90);
        if(paVar4 != (Struct18 *)0x0)
        {
            paStack10 = paVar4;
            mem_op_1000_179c(0x18, puVar5, 0);
            uVar3 = paVar4;
            paStack16 = (Struct18 *)(paVar4 & 0xffff | ZEXT24(puVar5) << 0x10);
            puVar6    = (puVar5 | uVar3);
            if(puVar6 == 0x0)
            {
                uVar3  = 0x0;
                puVar6 = 0x0;
            }
            else
            {
                struct_1040_a598((paVar4 & 0xffff | ZEXT24(puVar5) << 0x10));
            }
            (param_1 + 0x90) = uVar3;
            (param_1 + 0x92) = puVar6;
            (param_1 + 0x90) = 0x7;
            iStack12         = (param_1 + 0x90);
            uVar3 = iStack12 * 0xa + 0x2;
            mem_op_1000_179c(uVar3, puVar6, 0);
            paStack16 = (Struct18 *)str_var1(puVar6, uVar3);
            if((puVar6 | uVar3) == 0x0)
            {
                u_var2         = (param_1 + 0x90);
                (u_var2 + 0x2) = 0x0;
            }
            else
            {
                paStack16 = iStack12;
                pass1_1000_5586(0xa564, SEG_1040, iStack12, 0xa, uVar3 + 0x2, puVar6);
                u_var2         = (param_1 + 0x90);
                uVar8         = (u_var2 >> 0x10);
                iVar7         = u_var2;
                (iVar7 + 0x2) = uVar3 + 0x2;
                (iVar7 + 0x4) = puVar6;
            }
            uVar8          = (paStack10 >> 0x10);
            iVar7          = paStack10;
            u_var2          = (param_1 + 0x90);
            (u_var2 + 0x6)  = (iVar7 + 0x6);
            u_var2          = (param_1 + 0x90);
            (u_var2 + 0xa)  = (iVar7 + 0xa);
            u_var2          = (param_1 + 0x90);
            (u_var2 + 0x12) = (iVar7 + 0x12);
            pass1_1010_a50c(paStack6, 0x10505d6a, *(param_1 + 0x90));
            paStack20 = paStack10;
            paStack16 = paStack10;
            if(paStack10 != (Struct18 *)0x0)
            {
                pass1_1040_a5d0(paStack10);
                fn_ptr_1000_17ce(paStack10, SEG_1000);
            }
            ppcVar1 = (str_var1(param_2, param_1) + 0x70);
            (**ppcVar1)();
        }
    }
    else
    {
        if(param_4 != 0x1770)
        {
            pass1_1040_b54a(param_1, param_2, param_3, param_4, in_DX, param_5, unaff_SS);
            return;
        }
        if(param_4 == 0x7)
        {
            GetWindowRect16(param_5, &local_24);
            iStack32 = iStack32 - local_24.x;
            SetWindowPos16((HWND16)LAST_SEGMENT, 0x2, 0x50, iStack32, 0x0, 0x0, 0x0);
        }
    }
    return;
}


void  pass1_1040_2464(Struct18 *param_1)

{
    u16 uVar1;

    uVar1              = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1040_2956;//0x2956;
    param_1->field_0x2 = SEG_1040;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1038);
    return;
}


void  show_win_1040_2490(Struct1 *param_1, HWND16 param_2)

{
    void **ppcVar1;
    u16        u_var2;
    Struct1 *iVar4;
    u16        uVar3;
    i16       *piVar4;

    dialog_ui_fn_1040_78e2(param_1, param_2);
    uVar3 = (param_1 >> 0x10);
    iVar4 = (Struct1 *)param_1;
    GetDlgItem16(param_2, 0xfb1);
    EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
    // WARNING: Load size is inaccurate
    ppcVar1 = (*iVar4->field_0x8e + 0x10);
    piVar4  = (**ppcVar1)(LAST_SEGMENT, &iVar4->field_0x8e);
    u_var2   = (piVar4 >> 0x10);
    move_win_1040_826c(param_1, (piVar4 + 0x2) + -0x2, (piVar4 + 0x4) + *piVar4 + 0x3);
    ShowWindow16((HWND16)LAST_SEGMENT, 0x5);
    pass1_1018_1c9a(*&iVar4->field_0x8e, 0x1a0);
    return;
}


u32  win_ui_op_1040_2512(u32 *param_1, u32 param_2, u16 param_3, HWND16 param_4, WNDCLASS16 *param_5, u8 *param_6)

{
    i16        *pi_var1;
    void **ppcVar2;
    u16         uVar3;
    BOOL16      BVar4;
    i16         iVar5;
    i16         iVar6;
    u16         UVar7;
    u8         *puVar8;
    i16         unaff_DI;
    u16         uVar9;
    u16         uVar10;
    HWND16      hwnd;
    u8          in_AF;
    u32  uVar11;
    u8          local_1e[0x4];
    u16         uStack26;
    u8         *puStack24;
    u16        *local_16[0x2];
    u16         uStack12;
    u32 *puStack10;
    BOOL16      BStack6;
    u8         *puStack4;

    BStack6  = 0x0;
    puStack4 = 0x0;
    if(param_3 == 0x2)
    {
    LAB_1040_266d:
        BStack6  = 0x1;
        puStack4 = 0x0;
    }
    else
    {
        uVar9 = (param_1 >> 0x10);
        if(0x19d < param_3 - 0x2)
        {
            iVar5 = param_1;
            if(param_3 - 0x1a0 < 0x14 || param_3 == 0x1b4)
            {
                UVar7 = IsDlgButtonChecked(param_4, param_3);
                if(UVar7 == 0x0)
                {
                    pi_var1  = (iVar5 + 0x92);
                    *pi_var1 = *pi_var1 + 0x1;
                    if(0x0 < (iVar5 + 0x92))
                    {
                        (iVar5 + 0x94) = 0x0;
                    }
                    uVar11 = (iVar5 + 0x8e);
                    if((uVar11 + 0x28) == (iVar5 + 0x92))
                    {
                        GetDlgItem16((HWND16)LAST_SEGMENT, 0xfb1);
                        EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
                    }
                }
                else
                {
                    pi_var1  = (iVar5 + 0x92);
                    *pi_var1 = *pi_var1 + -0x1;
                    GetDlgItem16((HWND16)LAST_SEGMENT, 0xfb1);
                    BVar4 = IsWindowEnabled16((HWND16)LAST_SEGMENT);
                    if(BVar4 == 0x0)
                    {
                        GetDlgItem16((HWND16)LAST_SEGMENT, 0xfb1);
                        EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
                    }
                    if((iVar5 + 0x92) < 0x1)
                    {
                        (iVar5 + 0x94) = 0x1;
                    }
                    pass1_1018_1c9a(*(iVar5 + 0x8e), param_3);
                    puStack10 = pass1_1018_1e78(*(iVar5 + 0x8e), -0x1);
                    uVar3     = (puStack10 >> 0x10);
                    if(puStack10 == 0x0)
                    {
                        uStack12 = 0x0;
                    }
                    else
                    {
                        uStack12 = (puStack10 + 0x1c);
                    }
                    win_1008_5c7c(NULL,
                                  _PTR_LOOP_1050_02a0,
                                  str_var1(uStack12, 0x1),
                                  param_5,
                                  uStack12);
                }
                if((-0x1 < (iVar5 + 0x92)) && (uVar11 = (iVar5 + 0x8e), (iVar5 + 0x92) <= (uVar11 + 0x28)))
                {
                    sys_1000_3f9c(local_16,
                                  param_5,
                                  0x5cf4,
                                  (iVar5 + 0x92),
                                  &stack0xfffe,
                                  uVar9,
                                  SEG_1000,
                                  param_5,
                                  in_AF);
                    SetDlgItemText16(SEG_1000, (u16)local_16, (SEGPTR)param_5);
                }
                goto LAB_1040_266d;
            }
            uVar3 = param_3 - 0xfb1;
            if(uVar3 == 0x0)
            {
                if((iVar5 + 0x92) < 0x0)
                {
                    mem_op_1000_179c(0xb4, param_6, 0);
                    puVar8 = (param_6 | uVar3);
                    uStack26  = uVar3;
                    puStack24 = param_6;
                    if(puVar8 == 0x0)
                    {
                        iVar5  = 0x0;
                        puVar8 = 0x0;
                    }
                    else
                    {
                        iVar5 = string_1040_8520(str_var1(param_6, uVar3), globals->PTR_LOOP_1050_0396, 0x30, 0x2, 0x57b, 0x57c, puVar8, param_5);
                    }
                    puStack10 = str_var1(puVar8, iVar5);
                    ppcVar2   = (*puStack10 + 0x74);
                    (**ppcVar2)(SEG_1000, iVar5, puVar8);
                    goto LAB_1040_27c0;
                }
                if(0x0 < (iVar5 + 0x92))
                {
                    mem_op_1000_179c(0xb4, param_6, 0);
                    puVar8 = (param_6 | uVar3);
                    uStack26  = uVar3;
                    puStack24 = param_6;
                    if(puVar8 == 0x0)
                    {
                        iVar6  = 0x0;
                        puVar8 = 0x0;
                    }
                    else
                    {
                        iVar6 = string_1040_8520(str_var1(param_6, uVar3), globals->PTR_LOOP_1050_0396, 0x21, 0x2, 0x57b, 0x57d, puVar8, param_5);
                    }
                    puStack10 = str_var1(puVar8, iVar6);
                    pass1_1008_941a(str_var1(param_5, local_1e), 0x1, 0xc2);
                    ppcVar2 = (*puStack10 + 0x6c);
                    uVar11  = (**ppcVar2)(SEG_1008, puStack10, (puStack10 >> 0x10), local_1e, param_5);
                    param_6 = (uVar11 >> 0x10);
                    if(uVar11 == 0x2)
                        goto LAB_1040_27c0;
                }
                local_16[0] = mixed_1010_20ba(globals->u16_1050_0ed0, 0x6, param_5, param_6, unaff_DI);
                param_6     = (local_16[0] >> 0x10);
                uStack12    = 0x1a0;
                hwnd        = SEG_1010;
                do
                {
                    UVar7 = IsDlgButtonChecked(hwnd, uStack12);
                    if(UVar7 == 0x1)
                    {
                        uVar10                                = (local_16[0] >> 0x10);
                        iVar6                                 = local_16[0];
                        (iVar6 + (iVar6 + 0x56) * 0x2 + 0x4e) = uStack12;
                        pi_var1                                = (iVar6 + 0x56);
                        *pi_var1                               = *pi_var1 + 0x1;
                    }
                    uStack12 = uStack12 + 0x1;
                    hwnd     = (HWND16)LAST_SEGMENT;
                } while(uStack12 < 0x1b5);
                uVar3           = (iVar5 + 0x92);
                puStack10       = (puStack10 & 0xffff0000 | uVar3);
                uVar11          = (iVar5 + 0x8e);
                (uVar11 + 0x28) = uVar3;
                param_4         = (HWND16)LAST_SEGMENT;
                PostMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x11100c8);
                param_3 = 0x1;
            }
        }
        BStack6  = post_win_msg_1040_7b3c(param_1, param_2, (param_2 >> 0x10), param_3, param_4);
        puStack4 = param_6;
    }
LAB_1040_27c0:
    return str_var1(puStack4, BStack6);
}


void  dlg_ui_op_1040_2a64(Struct1 *param_1, u16 param_2, u16 param_3)

{
    u32   uVar1;
    Struct160 *p_var2;
    u16          uVar3;
    u8          *puVar4;
    u8          *puVar5;
    i16          iVar6;
    u16          uVar7;
    HWND16       hwnd;
    HWND16       hwnd_00;
    i16          iVar8;
    RECT16       local_16;
    u16          uStack18;
    u16          uStack16;
    i16          iStack14;
    u32          uStack12;
    u32   uStack8;
    i16          iStack4;

    unk_win_ui_op_1040_b230(param_1, param_2, param_3);
    iStack4            = 0x5;
    iVar8              = 0x0;
    uVar7              = (param_1 >> 0x10);
    iVar6              = param_1;
    uVar1              = (iVar6 + 0x90);
    uStack12           = struct_op_1030_73a8(*(uVar1 + 0x6));
    puVar4             = (uStack12 >> 0x10);
    hwnd               = (HWND16)SEG_1028;
    globals->PTR_LOOP_1050_5d04 = pass1_1028_4a9a(uStack12, iVar8);
    for(iStack14 = 0x0; iStack14 < iStack4; iStack14 = iStack14 + 0x1)
    {
        if(iStack14 != 0x0)
        {
            (&PTR_LOOP_1050_5d04 + iStack14 * 0xc) = 0x0;
        }
        iVar8      = iStack14 * 0xc;
        local_16.x = (iVar8 + 0x5cfc);
        local_16.y = (iVar8 + 0x5cfe);
        p_var2     = (Struct160 *)(&PTR_LOOP_1050_0000 + 0x1);
        uStack18   = 0x1;
        uStack16   = 0x1;
        MapDialogRect16(hwnd, &local_16);
        hwnd_00 = SEG_1000;
        mem_op_1000_179c(0x42, puVar4, 0);
        puVar5 = (puVar4 | p_var2);
        if(puVar5 == 0x0)
        {
            p_var2 = (Struct160 *)0x0;
            puVar4 = 0x0;
        }
        else
        {
            hwnd_00 = SEG_1008;
            pass1_1008_3bd6(p_var2, puVar4, 0x1,
                            str_var1(local_16.x, local_16.y), 0x101, 0xff0100,
                            str_var1((iVar6 + 0x6), (iVar8 + 0x5d00)), puVar5, param_3);
            puVar4 = puVar5;
        }
        uStack8 = str_var1(puVar4, p_var2);
        if(globals->PTR_LOOP_1050_5d04 == 0x0)
        {
            hwnd = hwnd_00;
            if((iStack14 != 0x0) && ((puVar4 | p_var2) != 0x0))
            {
                hwnd = (HWND16)LAST_SEGMENT;
                EnableWindow16(hwnd_00, 0x0);
            }
        }
        else
        {
            iVar8 = iStack14 * 0xc;
            uVar3 = pass1_1028_4a9a(uStack12, (iVar8 + 0x5d02));
            hwnd  = (HWND16)SEG_1028;
            if(uVar3 != 0x0)
            {
                (&PTR_LOOP_1050_5d04 + iVar8) = 0x1;
                uVar1                         = (iVar6 + 0x98);
                SetDlgItemText16((HWND16)SEG_1028, (u16)uVar1, (SEGPTR)(uVar1 >> 0x10));
                hwnd = (HWND16)LAST_SEGMENT;
            }
        }
    }
    return;
}


void  win_ui_op_1040_2bb2(i16 param_1, u16 param_2, u16 param_3, u32 param_4, HWND16 param_5)

{
    u16        uVar1;
    u8        *in_DX;
    u16        unaff_SS;
    u32 u_var2;
    i16        iStack8;
    i16        iStack4;

    if(param_4 == 0x158)
    {
        globals->PTR_LOOP_1050_5d04 = (globals->PTR_LOOP_1050_5d04 == 0x0);
        if(globals->PTR_LOOP_1050_5d04 == 0x0)
        {
            for(iStack8 = 0x1; iStack8 < 0x5; iStack8 = iStack8 + 0x1)
            {
                GetDlgItem16(param_5, (iStack8 * 0xc + 0x5d00));
                EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
                (&PTR_LOOP_1050_5d04 + iStack8 * 0xc) = 0x0;
                u_var2                                 = (param_1 + 0x94);
                param_5                               = (HWND16)LAST_SEGMENT;
                SetDlgItemText16((HWND16)LAST_SEGMENT, (u16)u_var2, (SEGPTR)(u_var2 >> 0x10));
            }
            u_var2 = (param_1 + 0x94);
            goto LAB_1040_2ccc;
        }
        for(iStack8 = 0x1; iStack8 < 0x5; iStack8 = iStack8 + 0x1)
        {
            GetDlgItem16(param_5, (iStack8 * 0xc + 0x5d00));
            EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
            (&PTR_LOOP_1050_5d04 + iStack8 * 0xc) = 0x0;
            u_var2                                 = (param_1 + 0x94);
            param_5                               = (HWND16)LAST_SEGMENT;
            SetDlgItemText16((HWND16)LAST_SEGMENT, (u16)u_var2, (SEGPTR)(u_var2 >> 0x10));
        }
    }
    else
    {
        if(param_4 == 0x159)
        {
            iStack4 = 0x1;
        }
        else
        {
            if(param_4 == 0x15a)
            {
                iStack4 = 0x2;
            }
            else
            {
                if(param_4 == 0x15b)
                {
                    iStack4 = 0x3;
                }
                else
                {
                    if(param_4 != 0x15c)
                    {
                        pass1_1040_b54a(param_1, param_2, param_3, param_4, in_DX, param_5, unaff_SS);
                        return;
                    }
                    iStack4 = 0x4;
                }
            }
        }
        if(iStack4 == 0x0)
        {
            return;
        }
        uVar1                                 = ((&PTR_LOOP_1050_5d04 + iStack4 * 0xc) == 0x0);
        (&PTR_LOOP_1050_5d04 + iStack4 * 0xc) = uVar1;
        if(uVar1 == 0x0)
        {
            u_var2 = (param_1 + 0x94);
            goto LAB_1040_2ccc;
        }
    }
    u_var2 = (param_1 + 0x98);
LAB_1040_2ccc:
    SetDlgItemText16(param_5, (u16)u_var2, (SEGPTR)(u_var2 >> 0x10));
    return;
}


void  win_dlg_item_1040_2d48(u32 param_1, HWND16 param_2, BOOL16 param_3)

{
    u16    UVar1;
    u16    value;
    BOOL16 local_4;

    pass1_1040_b45e(param_1, param_2);
    UVar1 = GetDlgItemInt16(param_2, 0x1, &local_4, param_3);
    value = GetDlgItemInt16((HWND16)LAST_SEGMENT, 0x1, &local_4, param_3);
    if(UVar1 != 0x0)
    {
        value = value / UVar1;
    }
    SetDlgItemInt16((HWND16)LAST_SEGMENT, 0x1, value, 0x165);
    return;
}


void  pass1_1040_2f06(Struct18 *param_1)

{
    u16 uVar1;

    uVar1              = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1040_3436;//0x3436;
    param_1->field_0x2 = SEG_1040;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1038);
    return;
}


void  show_win_1040_2f5a(Struct1 *param_1, HWND16 param_2)

{
    dialog_ui_fn_1040_78e2(param_1, param_2);
    move_win_1040_826c(param_1, -0x1, 0xffff);
    ShowWindow16(param_2, 0x5);
    SetFocus16((HWND16)LAST_SEGMENT);
    return;
}


void  win_dlg_op_1040_2f90(u32 param_1, WORD *param_2)

{
    HWND16     HVar1;
    u8        *in_DX;
    u8        *pu_var2;
    u16        uVar3;
    u16        msg;
    i16        iVar4;
    i16        unaff_DI;
    u16        uVar5;
    u16       *puVar6;
    u32        uVar7;
    char      *pcVar8;
    u32       *local_116;
    u32       *local_112;
    CHAR       local_10e[0x82];
    u8         local_8c[0x82];
    u32 uStack10;
    u16       *pu_stack6;

    pu_stack6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_2, in_DX, unaff_DI);
    pu_var2   = (pu_stack6 >> 0x10);
    uStack10 = (pu_stack6 + 0x68);
    uVar5    = (param_1 >> 0x10);
    iVar4    = param_1;
    GetWindowText16(SEG_1010, 0x80, (u16)local_8c);
    wsprintf16(LAST_SEGMENT, local_10e, param_2);
    SetWindowText16((HWND16)LAST_SEGMENT, (SEGPTR)local_10e);
    HVar1                     = GetDlgItem16((HWND16)LAST_SEGMENT, 0x182);
    *(HWND16 *)(iVar4 + 0x92) = HVar1;
    pass1_1018_3a94(*(iVar4 + 0x96),
                    str_var1(param_2, &local_116),
                    str_var1(param_2, &local_112), param_2);
    send_msg_1040_3374(param_1, local_112, (iVar4 + 0x92), SEG_1018);
    puVar6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_2, pu_var2, unaff_DI);
    uVar3  = (puVar6 >> 0x10);
    uVar7  = *(puVar6 + 0x24);
    uVar7  = pass1_1018_3a7a(*(iVar4 + 0x96), uVar7, uVar7, uVar3);
    SendMessage16(SEG_1018, uVar7, (WPARAM16)(uVar7 >> 0x10), 0x40dffff);
    HVar1                     = GetDlgItem16((HWND16)LAST_SEGMENT, 0x183);
    *(HWND16 *)(iVar4 + 0x94) = HVar1;
    send_msg_1040_3374(param_1, local_116, HVar1, LAST_SEGMENT);
    pcVar8 = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
    msg    = (pcVar8 >> 0x10);
    SendDlgItemMessage16(SEG_1010, (u16)pcVar8, msg, 0x0, 0x1830403);
    SendDlgItemMessage16((HWND16)LAST_SEGMENT, (u16)pcVar8, msg, 0xffff, 0x183040d);
    HVar1                     = GetDlgItem16((HWND16)LAST_SEGMENT, 0x181);
    *(HWND16 *)(iVar4 + 0x8e) = HVar1;
    HVar1                     = GetDlgItem16((HWND16)LAST_SEGMENT, 0x184);
    *(HWND16 *)(iVar4 + 0x90) = HVar1;
    return;
}


void  win_ui_op_1040_311a(i16 param_1, u16 param_2, u16 param_3, u32 param_4)

{
    i16     iVar1;
    u32     u_var2;
    u8     *puVar3;
    u16     unaff_CS;
    u16     unaff_SS;
    LRESULT LVar4;
    u16    *puVar5;
    i16     iVar6;

    send_msg_1040_323c(str_var1(param_2, param_1), unaff_CS);
    load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
    if(param_4 == 0x181)
    {
        iVar1  = param_1 + 0x9a;
        puVar3 = param_2;
        iVar6  = iVar1;
        pass1_1018_3cda((param_1 + 0x96), str_var1(param_2, param_1 + 0x19a), str_var1(param_2, iVar1));
        pass1_1018_3424(*(param_1 + 0x96), iVar6, puVar3, unaff_SS);
        if(iVar6 == 0x0)
        {
            iVar6 = 0x21;
        }
        else
        {
            pass1_1018_3a42(*(param_1 + 0x96), str_var1(param_2, iVar1), puVar3, unaff_SS);
            pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10),
                            str_var1(puVar3, iVar6));
            u_var2 = *(iVar6 + 0x10);
            pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), u_var2);
            globals->PTR_LOOP_1050_5f0c = u_var2;
            globals->PTR_LOOP_1050_5f10 = (&PTR_LOOP_1050_0000 + 0x1);
            iVar6              = 0x25;
            globals->PTR_LOOP_1050_5f0e = puVar3;
        }
        pass1_1038_af40(globals->ptr_1050_5b7c, (param_1 + 0x8), iVar6, puVar3, param_1, SEG_1038, unaff_SS);
        LVar4  = SendMessage16((HWND16)SEG_1038, 0x0, 0x0, 0x1110002);
        iVar6  = 0x1;
        puVar5 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, unaff_SS, (LVar4 >> 0x10), param_2);
        pass1_1010_038e(puVar5, iVar6, unaff_SS);
    }
    else
    {
        if((param_4 == 0x181) || (0x1 < param_4 - 0x182U))
        {
            post_win_msg_1040_7b3c(
              str_var1(param_2, param_1), param_3, param_4, param_4, SEG_1010);
            return;
        }
        set_win_pos_1040_331a(str_var1(param_2, param_1), param_3, param_4, SEG_1010);
    }
    return;
}


void  enable_win_1040_32a8(u32 param_1)

{
    SEGPTR lp_string;
    BOOL16 BVar1;
    u16    unaff_SS;
    u32    uStack12;

    lp_string = param_1 + 0x19a;
    uStack12  = param_1 & 0xffff0000 | lp_string;
    pass1_1018_3a5c(*(param_1 + 0x96), param_1 & 0xffff0000 | (param_1 + 0x9aU), param_1 & 0xffff0000 | lp_string, unaff_SS);
    SetWindowText16(SEG_1018, lp_string);
    BVar1 = string_1018_39d8(NULL, unaff_SS, *(param_1 + 0x96), param_1 & 0xffff0000 | (param_1 + 0x9aU), uStack12);
    EnableWindow16(SEG_1018, BVar1 & 0x1);
    return;
}


BOOL16  set_win_pos_1040_331a(u32 param_1, u16 param_2, i16 param_3, HWND16 param_4)

{
    RECT16 local_e;
    i16    iStack10;
    u16    u_stack6;
    i16    iStack4;

    iStack4 = param_3;
    u_stack6 = param_2;
    if(param_3 == 0x1)
    {
        enable_win_1040_32a8(param_1);
    }
    else
    {
        if(param_3 != 0x7)
        {
            return 0x0;
        }
        GetWindowRect16(param_4, &local_e);
        iStack10 = iStack10 - local_e.x;
        SetWindowPos16((HWND16)LAST_SEGMENT, 0x2, 0x50, iStack10, 0x0, 0x0, 0x0);
    }
    return 0x1;
}


void  pass1_1040_3506(Struct18 *param_1)

{
    u16 uVar1;

    uVar1              = (param_1 >> 0x10);
    param_1->field_0x0 = s_Null_Ptr_1050_38f3 + 0x7;
    param_1->field_0x2 = SEG_1040;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1038);
    return;
}


void  show_win_1040_355a(Struct1 *param_1, HWND16 param_2)

{
    dialog_ui_fn_1040_78e2(param_1, param_2);
    move_win_1040_826c(param_1, -0x1, 0xffff);
    ShowWindow16(param_2, 0x5);
    SetFocus16((HWND16)LAST_SEGMENT);
    return;
}


void  set_win_text_1040_3590(u32 param_1, WORD *param_2)

{
    HWND16     HVar1;
    SEGPTR     lp_string;
    u16        lp_string_00;
    u8        *in_DX;
    u16        u_var2;
    i16        iVar3;
    i16        unaff_DI;
    u16        uVar4;
    u8         local_59a[0x4];
    u8         local_596[0x4];
    BOOL16     BStack1426;
    u16        uStack1424;
    CHAR       local_58e[0x82];
    CHAR       local_50c[0x100];
    u32 uStack1036;
    u16       *puStack1032;
    char       local_404[0x402];

    puStack1032 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_2, in_DX, unaff_DI);
    u_var2       = (puStack1032 >> 0x10);
    uStack1036  = (puStack1032 + 0x68);
    uVar4       = (param_1 >> 0x10);
    iVar3       = param_1;
    GetWindowText16(SEG_1010, 0x80, (u16)local_50c);
    wsprintf16(LAST_SEGMENT, local_58e, param_2);
    BStack1426 = SetWindowText16((HWND16)LAST_SEGMENT, (SEGPTR)local_58e);
    sprintf_op_1018_34b6(*(iVar3 + 0x8e), (u8)BStack1426);
    uStack1424 = u_var2;
    pass1_1018_3d44(*(iVar3 + 0x8e), str_var1(param_2, local_59a), str_var1(param_2, local_596));
    HVar1                     = GetDlgItem16(SEG_1018, 0x193);
    *(HWND16 *)(iVar3 + 0x98) = HVar1;
    EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x3ff, local_404, (short)param_2);
    wsprintf16(SEG_1010, local_50c, param_2);
    GetDlgItem16((HWND16)LAST_SEGMENT, 0x195);
    SetWindowText16((HWND16)LAST_SEGMENT, (SEGPTR)local_50c);
    lp_string = GetDlgItem16((HWND16)LAST_SEGMENT, 0x196);
    sprintf_op_1018_34b6(*(iVar3 + 0x8e), (u8)lp_string);
    SetWindowText16(SEG_1018, lp_string);
    GetDlgItem16((HWND16)LAST_SEGMENT, 0x197);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x3ff, local_404, (short)param_2);
    SetWindowText16(SEG_1010, (SEGPTR)local_404);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x3ff, local_404, (short)param_2);
    wsprintf16(SEG_1010, local_50c, param_2);
    GetDlgItem16((HWND16)LAST_SEGMENT, 0x198);
    SetWindowText16((HWND16)LAST_SEGMENT, (SEGPTR)local_50c);
    lp_string_00 = GetDlgItem16((HWND16)LAST_SEGMENT, 0x199);
    unk_str_op_1018_35b0(*(iVar3 + 0x8e), param_2, lp_string_00);
    if((u_var2 | lp_string_00) == 0x0)
    {
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x3ff, local_404, (short)param_2);
        SetWindowText16(SEG_1010, (SEGPTR)local_404);
        GetDlgItem16((HWND16)LAST_SEGMENT, 0x19a);
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x3ff, local_404, (short)param_2);
        SetWindowText16(SEG_1010, (SEGPTR)local_404);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
        return;
    }
    SetWindowText16(SEG_1018, lp_string_00);
    return;
}


void  pass1_1040_0e86(Struct18 *param_1, u16 param_2)

{
    u16         uVar1;
    Struct18 *p_var2;
    u8         *puVar3;
    i16         iVar4;
    i16         unaff_DI;
    u16         uVar5;
    u16         uVar6;
    u16        *puVar7;

    uVar5              = (param_1 >> 0x10);
    iVar4              = param_1;
    param_1->field_0x0 = s_overflow_on_node__d_1050_11ca + 0x8;
    (iVar4 + 0x2)      = SEG_1040;
    p_var2             = (iVar4 + 0x92);
    uVar1              = (iVar4 + 0x94);
    puVar3             = (uVar1 | p_var2);
    if(puVar3 != 0x0)
    {
        pass1_1040_a5d0(p_var2 & 0xffff | uVar1 << 0x10);
        fn_ptr_1000_17ce(p_var2, SEG_1000);
    }
    globals->PTR_LOOP_1050_5b82 = (iVar4 + 0x96);
    if((iVar4 + 0x92) == 0x0)
    {
        uVar6 = SUB42(SEG_1038, 0x0);
        pass1_1038_b6e0(globals->ptr_1050_5b7c, (iVar4 + 0x6));
    }
    else
    {
        puVar7 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x32, param_2, puVar3, unaff_DI);
        uVar6  = SEG_1010;
        pass1_1010_7b8c(puVar7, (iVar4 + 0x6), param_2);
    }
    ui_cleanup_op_1040_782c(param_1, uVar6);
    return;
}


void  set_win_pos_1040_0f10(HWND16 param_1, u16 param_2, i16 param_3)

{
    i16       *pi_var1;
    u32 u_var2;
    i16        iVar3;
    i16        unaff_DI;
    u16        uVar4;
    u32        uVar5;
    u16       *puVar6;
    u16        check;

    dialog_ui_fn_1040_78e2(*(Struct1 **)(param_3 + 0x6), param_1);
    u_var2 = (param_3 + 0x6);
    uVar4 = (u_var2 >> 0x10);
    iVar3 = u_var2;
    if((iVar3 + 0x98) == 0x0)
    {
        GetWindowRect16(param_1, (RECT16 *)(param_3 + -0x24));
        GetDlgItem16((HWND16)LAST_SEGMENT, 0x1830);
        GetWindowRect16((HWND16)LAST_SEGMENT, (RECT16 *)(param_3 + -0x2c));
        pi_var1            = (param_3 + -0x20);
        *pi_var1           = *pi_var1 - (param_3 + -0x24);
        iVar3             = ((param_3 + -0x2a) - (param_3 + -0x22)) + -0x2;
        (param_3 + -0x1e) = iVar3;
        SetWindowPos16((HWND16)LAST_SEGMENT, 0x6, iVar3, (param_3 + -0x20), 0x0, 0x0, 0x0);
        CheckDlgButton16((HWND16)LAST_SEGMENT, 0x1, 0x1c1);
        u_var2         = (param_3 + 0x6);
        u_var2         = (u_var2 + 0x8e);
        (u_var2 + 0xa) = 0x2;
        GetDlgItem16((HWND16)LAST_SEGMENT, 0x1830);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
    }
    else
    {
        u_var2             = (iVar3 + 0x92);
        uVar5             = struct_op_1030_73a8(*(u_var2 + 0x6));
        (param_3 + -0x32) = uVar5;
        (param_3 + -0x30) = (uVar5 >> 0x10);
        u_var2             = (param_3 + -0x32);
        if((u_var2 + 0x20) == 0x2)
        {
            check = 0x1c1;
        }
        else
        {
            check = 0x1c2;
        }
        CheckDlgButton16(SEG_1030, 0x1, check);
    }
    GetCursorPos16((POINT16 *)LAST_SEGMENT);
    GetWindowRect16((HWND16)LAST_SEGMENT, (RECT16 *)(param_3 + -0xc));
    iVar3             = (param_3 + -0x8) - (param_3 + -0xc);
    (param_3 + -0x12) = iVar3;
    (param_3 + -0xe)  = -(iVar3 / 0x2 - (param_3 + -0x4));
    iVar3             = (param_3 + -0x6) - (param_3 + -0xa);
    (param_3 + -0x14) = iVar3;
    (param_3 + -0x10) = -(iVar3 / 0x2 - (param_3 + -0x2));
    puVar6            = mixed_1010_20ba(globals->u16_1050_0ed0, 0x48, param_2, (iVar3 >> 0xf), unaff_DI);
    uVar4             = (puVar6 >> 0x10);
    iVar3             = puVar6;
    (param_3 + -0x1c) = iVar3;
    (param_3 + -0x1a) = uVar4;
    (param_3 + -0x16) = (iVar3 + 0xa);
    (param_3 + -0x18) = (iVar3 + 0xc);
    if((param_3 + -0x16) < (param_3 + -0x12) + (param_3 + -0xe))
    {
        (param_3 + -0xe) = (param_3 + -0x16) - (param_3 + -0x12);
    }
    if((param_3 + -0x18) < (param_3 + -0x14) + (param_3 + -0x10))
    {
        (param_3 + -0x10) = (param_3 + -0x18) - (param_3 + -0x14);
    }
    u_var2 = (param_3 + -0x10);
    SetWindowPos16(SEG_1010, 0x45, 0x0, 0x0, (u16)u_var2, (u16)(u_var2 >> 0x10), 0x0);
    return;
}


void  pass1_1040_1290(Struct18 *param_1)

{
    u16 uVar1;

    uVar1              = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1040_17b0;//0x17b0;
    param_1->field_0x2 = SEG_1040;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1038);
    return;
}


void  win_ui_op_1040_12bc(Struct1 *param_1, u16 param_2, u8 *param_3)

{
    u32 uVar1;
    WPARAM16   wparam;
    HWND16     HVar2;
    u16        uVar3;
    u8         in_AF;
    char      *pcVar4;
    u8         local_54[0x52];

    dialog_ui_fn_1040_78e2(param_1, param_2);
    uVar1 = (param_1 + 0x8e);
    uVar3 = (uVar1 >> 0x10);
    sys_1000_3f9c(local_54,
                  param_3,
                  0x5cd4,
                  (uVar1 + 0xa),
                  &stack0xfffe,
                  uVar3,
                  SEG_1000,
                  param_3,
                  in_AF);
    GetDlgItem16(SEG_1000, 0xfd2);
    SendMessage16((HWND16)LAST_SEGMENT, local_54, (WPARAM16)param_3, 0xc0000);
    SetFocus16((HWND16)LAST_SEGMENT);
    SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0xffff, 0x4010000);
    move_win_1040_826c(param_1, -0x1, 0xffff);
    pcVar4 = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
    wparam = (WPARAM16)(pcVar4 >> 0x10);
    HVar2  = GetDlgItem16(SEG_1010, s_vrpal_bmp_1050_183a + 0x5);
    send_msg_1040_1696(param_1, HVar2, param_3, LAST_SEGMENT);
    SendMessage16((HWND16)LAST_SEGMENT, pcVar4, wparam, 0x40dffff);
    HVar2 = GetDlgItem16((HWND16)LAST_SEGMENT, s_vrpal_bmp_1050_183a + 0x4);
    send_msg_1040_1696(param_1, HVar2, param_3, LAST_SEGMENT);
    SendMessage16((HWND16)LAST_SEGMENT, pcVar4, wparam, 0x40dffff);
    ShowWindow16((HWND16)LAST_SEGMENT, 0x5);
    return;
}


void  win_msg_op_1040_13b2(u32 param_1, i16 param_2, HWND16 param_3, u16 param_4)

{
    void **ppcVar1;
    u32  u_var2;
    u16         uVar3;
    i16         iVar4;
    u8         *puVar5;
    u8         *puVar6;
    u8         *puVar7;
    i16         iVar8;
    u16         uVar9;
    u16         uVar10;
    u8          in_AF;
    LRESULT     LVar11;
    u32 *puStack562;
    u8          local_22e[0x118];
    u32         uStack278;
    u32         uStack274;
    u8         *puStack270;
    u8         *puStack268;
    u32  uStack266;
    u16         uStack262;
    char       *pcStack260;
    u8          local_100[0x52];
    i16         iStack174;
    HWND16      HStack172;
    u8          local_aa[0x52];
    u16         uStack88;
    HWND16      HStack86;
    u8          local_54[0x52];

    iVar4 = param_1;
    uVar9 = (param_1 >> 0x10);
    if(param_2 != 0x0)
    {
        HStack86 = GetDlgItem16(param_3, 0xfd2);
        SendMessage16((HWND16)LAST_SEGMENT, local_54, param_4, 0xd0051);
        uStack88  = pass1_1000_3e2c(str_var1(param_4, local_54));
        HStack172 = GetDlgItem16(SEG_1000, s_vrpal_bmp_1050_183a + 0x4);
        LVar11    = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x4070000);
        iStack174 = LVar11;
        if(iStack174 != -0x1)
        {
            SendMessage16((HWND16)LAST_SEGMENT, local_aa, param_4, str_var1(0x408, iStack174));
        }
        HStack172 = GetDlgItem16((HWND16)LAST_SEGMENT, s_vrpal_bmp_1050_183a + 0x5);
        LVar11    = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x4070000);
        iStack174 = LVar11;
        if(iStack174 != -0x1)
        {
            SendMessage16((HWND16)LAST_SEGMENT, local_100, param_4, str_var1(0x408, iStack174));
        }
        pcStack260 = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
        puVar6     = local_aa;
        uVar3      = pass1_1000_3d7a(str_var1(param_4, puVar6), str_var1(param_4, local_100));
        if(uVar3 != 0x0)
        {
            uVar3 = pass1_1000_3d7a(str_var1(param_4, local_aa), pcStack260);
            if(uVar3 != 0x0)
            {
                uVar3 = pass1_1000_3d7a(str_var1(param_4, local_100), pcStack260);
                if(uVar3 != 0x0)
                {
                    pass1_1010_531c(*(iVar4 + 0x8e),
                                    str_var1(param_4, local_aa), local_aa, puVar6, param_4);
                    puVar5 = local_100;
                    pass1_1010_52fc(*(iVar4 + 0x8e),
                                    str_var1(param_4, puVar5), puVar5, puVar6, param_4);
                    pass1_1010_5120(*(iVar4 + 0x8e), uStack88, puVar5, puVar6, param_4);
                    uStack266 = str_var1(uStack266, puVar5);
                    if(puVar5 == 0x0)
                    {
                        mem_op_1000_179c(0xb4, puVar6, 0);
                        puVar7 = (puVar6 | puVar5);
                        puStack270 = puVar5;
                        puStack268 = puVar6;
                        if(puVar7 == 0x0)
                        {
                            iVar4  = 0x0;
                            puVar7 = 0x0;
                        }
                        else
                        {
                            iVar4 = string_1040_8520(str_var1(puVar6, puVar5), globals->PTR_LOOP_1050_0396, 0x30, 0x2, 0x57b, 0x7d2, puVar7, param_4);
                        }
                        puStack562 = str_var1(puVar7, iVar4);
                        ppcVar1    = (*puStack562 + 0x74);
                        (**ppcVar1)(SEG_1000, iVar4, puVar7);
                        return;
                    }
                    u_var2     = (iVar4 + 0x8e);
                    uStack274 = *(u_var2 + 0x12);
                    u_var2     = (iVar4 + 0x8e);
                    uVar10    = (u_var2 >> 0x10);
                    iVar8     = u_var2;
                    uStack278 = *(iVar8 + 0x16);
                    u_var2     = (iVar4 + 0x8e);
                    uStack262 = (u_var2 + 0xa);
                    pass1_1028_8d9e((Struct100 *)str_var1(param_4, local_22e), uStack262, uStack274, uStack278 & 0xffff | (iVar8 + 0x18) << 0x10, param_4, in_AF);
                    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748,
                                     str_var1(param_4, local_22e));
                    param_3 = (HWND16)SEG_1028;
                    pass1_1028_8dec(str_var1(param_4, local_22e));
                    goto LAB_1040_1619;
                }
            }
        }
        param_3 = SEG_1000;
        mem_op_1000_179c(0xb4, puVar6, 0);
        puVar7 = (puVar6 | uVar3);
        puStack270 = uVar3;
        puStack268 = puVar6;
        if(puVar7 == 0x0)
        {
            iVar4  = 0x0;
            puVar7 = 0x0;
        }
        else
        {
            iVar4 = string_1040_8520(str_var1(puVar6, uVar3), globals->PTR_LOOP_1050_0396, 0x30, 0x2, 0x57b, 0x755, puVar7, param_4);
        }
        uStack266 = str_var1(puVar7, iVar4);
        ppcVar1   = (*uStack266 + 0x74);
        (**ppcVar1)(SEG_1000, iVar4, puVar7);
    }
LAB_1040_1619:
    DestroyWindow16(param_3);
    return;
}


u32  set_win_pos_1040_162a(u16 param_1, u32 param_2, u32 param_3, u16 param_4, HWND16 param_5)

{
    u16    uVar1;
    BOOL16 BVar2;
    RECT16 local_a;
    i16    iStack6;

    if((param_3 != s_vrpal_bmp_1050_183a + 0x5) && (param_3 != s_vrpal_bmp_1050_183a + 0x4))
    {
        BVar2 = post_win_msg_1040_7b3c(
          str_var1(param_2, param_1), param_2, param_3, param_3, param_5);
        return str_var1(param_4, BVar2);
    }
    if(param_3 == 0x7)
    {
        GetWindowRect16(param_5, &local_a);
        iStack6 = iStack6 - local_a.x;
        SetWindowPos16((HWND16)LAST_SEGMENT, 0x2, 0x50, iStack6, 0x0, 0x0, 0x0);
    }
    else
    {
        if((param_3 != 0x9) && (param_3 != 0xa))
        {
            uVar1 = 0x0;
            goto LAB_1040_164d;
        }
    }
    uVar1 = 0x1;
LAB_1040_164d:
    return uVar1;
}


void  pass1_1040_1876(Struct18 *param_1)

{
    u16 uVar1;

    uVar1              = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1040_1c48;//0x1c48;
    param_1->field_0x2 = SEG_1040;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1038);
    return;
}


void  show_win_1040_18a2(Struct1 *param_1, HWND16 param_2, WORD *param_3)

{
    u32 uVar1;
    CHAR       local_304[0x100];
    char       local_204[0x100];
    char       local_104[0x100];
    u16        uStack4;

    dialog_ui_fn_1040_78e2(param_1, param_2);
    check_dialog_btn_1040_1afe(param_1);
    if(globals->PTR_LOOP_1050_13ae != 0x0)
    {
        if(globals->PTR_LOOP_1050_13ae == &PTR_LOOP_1050_0002)
        {
            uStack4 = 0x621;
        }
        else
        {
            if(globals->PTR_LOOP_1050_13ae == (&PTR_LOOP_1050_0002 + 0x1))
            {
                uStack4 = 0x622;
            }
            else
            {
                if(globals->PTR_LOOP_1050_13ae == &DAT_1050_0004)
                {
                    uStack4 = 0x623;
                }
                else
                {
                    uStack4 = 0x620;
                }
            }
        }
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, (short)param_3);
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x3ff, local_204, (short)param_3);
        wsprintf16(SEG_1010, local_304, param_3);
        SetDlgItemText16((HWND16)LAST_SEGMENT, (u16)local_304, (SEGPTR)param_3);
        uVar1 = (param_1 + 0x8e);
        if((uVar1 + 0x82) == 0x0)
        {
            uStack4 = 0x627;
        }
        else
        {
            uStack4 = 0x626;
        }
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, (short)param_3);
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x3ff, local_204, (short)param_3);
        wsprintf16(SEG_1010, local_304, param_3);
        param_2 = (HWND16)LAST_SEGMENT;
        SetDlgItemText16((HWND16)LAST_SEGMENT, (u16)local_304, (SEGPTR)param_3);
    }
    move_win_1040_826c(param_1, -0x1, 0xffff);
    ShowWindow16(param_2, 0x5);
    return;
}


void  unk_win_ui_op_1040_19ea(Struct32 *param_1, i16 param_2, HWND16 param_3)

{
    u32         uVar1;
    u16         u_var2;
    u8         *in_DX;
    Struct32 *iVar4;
    i16         unaff_DI;
    Struct32 *uVar3;
    u16         unaff_SS;

    iVar4 = (Struct32 *)param_1;
    uVar3 = (Struct32 *)(param_1 >> 0x10);
    if(param_2 != 0x0)
    {
        u_var2 = IsDlgButtonChecked(param_3, 0xfdb);
        pass1_1010_5d9c(iVar4->field_0x8e, u_var2, in_DX, unaff_DI, unaff_SS);
        u_var2          = IsDlgButtonChecked(SEG_1010, 0xfdc);
        uVar1          = iVar4->field_0x8e;
        (uVar1 + 0x20) = u_var2;
        u_var2          = IsDlgButtonChecked((HWND16)LAST_SEGMENT, 0xfdd);
        uVar1          = iVar4->field_0x8e;
        (uVar1 + 0x74) = u_var2;
        param_3        = (HWND16)LAST_SEGMENT;
        u_var2          = IsDlgButtonChecked((HWND16)LAST_SEGMENT, 0xfde);
        uVar1          = iVar4->field_0x8e;
        (uVar1 + 0x72) = u_var2;
        if(iVar4->field_0x92 != 0x0)
        {
            uVar1   = iVar4->field_0x8e;
            param_3 = SEG_1000;
            pass1_1000_4906((Struct20 *)(uVar1 & 0xffff0000 | (uVar1 + 0x22)), 0x0, 0x40);
        }
        if(iVar4->field_0x94 != 0x0)
        {
            param_3 = SEG_1010;
            pass1_1010_60a0(iVar4->field_0x8e);
        }
    }
    DestroyWindow16(param_3);
}


u32  pass1_1040_1ab0(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5, u16 param_6)

{
    BOOL16 BStack6;
    u16    uStack4;

    BStack6 = 0x0;
    uStack4 = 0x0;
    if(param_4 == 0x1831)
    {
        (param_1 + 0x92) = 0x1;
        (param_1 + 0x94) = 0x1;
        check_dialog_btn_1040_1b8a(param_1, param_2);
    }
    else
    {
        BStack6 = post_win_msg_1040_7b3c(CONCAT13((param_2 >> 0x8), CONCAT12(param_2, param_1)), param_3, param_4, param_4, param_6);
        uStack4 = param_5;
    }
    return str_var1(uStack4, BStack6);
}


void  check_dialog_btn_1040_1afe(u32 param_1)

{
    u16      id;
    u16      id_00;
    u16      id_01;
    u32 uVar1;
    u32 u_var2;
    i16        iVar3;
    u16        uVar4;
    HWND16     unaff_CS;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    uVar1 = (iVar3 + 0x8e);
    u_var2 = (iVar3 + 0x8e);
    id    = (u_var2 + 0x20);
    u_var2 = (iVar3 + 0x8e);
    id_00 = (u_var2 + 0x74);
    u_var2 = (iVar3 + 0x8e);
    id_01 = (u_var2 + 0x72);
    CheckDlgButton16(unaff_CS, (uVar1 + 0x1e), 0xfdb);
    CheckDlgButton16((HWND16)LAST_SEGMENT, id_00, 0xfdd);
    CheckDlgButton16((HWND16)LAST_SEGMENT, id_01, 0xfde);
    CheckDlgButton16((HWND16)LAST_SEGMENT, id, 0xfdc);
    return;
}


void  check_dialog_btn_1040_1b8a(void)

{
    u16 id;
    u16 id_00;
    u16 id_01;
    u16 id_02;

    id    = pass1_1010_60b4();
    id_00 = pass1_1010_60c6();
    id_01 = pass1_1010_60c0();
    id_02 = pass1_1010_60ba();
    CheckDlgButton16(SEG_1010, id, 0xfdb);
    CheckDlgButton16((HWND16)LAST_SEGMENT, id_01, 0xfdd);
    CheckDlgButton16((HWND16)LAST_SEGMENT, id_02, 0xfde);
    CheckDlgButton16((HWND16)LAST_SEGMENT, id_00, 0xfdc);
    return;
}


void  pass1_1040_1d24(Struct18 *param_1)

{
    u16 uVar1;

    uVar1              = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1040_1eee;//0x1eee;
    param_1->field_0x2 = SEG_1040;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1038);
    return;
}


void  show_win_1040_1d50(Struct1 *param_1, HWND16 param_2)

{
    dialog_ui_fn_1040_78e2(param_1, param_2);
    move_win_1040_826c(param_1, -0x1, 0xffff);
    ShowWindow16(param_2, 0x5);
    return;
}


void  unk_win_ui_op_1040_1d7a(Struct33 *param_1, i16 param_2, HWND16 param_3)

{
    u32  uVar1;
    u16         u_var2;
    Struct33 *iVar3;
    Struct33 *uVar3;
    HWND16      HVar3;
    HWND16      HVar4;
    u16         unaff_SS;

    iVar3 = (Struct33 *)param_1;
    uVar3 = (Struct33 *)(param_1 >> 0x10);
    if((param_2 != 0x0) && (uVar1 = iVar3->field_0x8e, (uVar1 + 0x72) != 0x0))
    {
        HVar3 = (HWND16)LAST_SEGMENT;
        u_var2 = IsDlgButtonChecked(param_3, 0xe1);
        if(u_var2 != 0x0)
        {
            HVar3 = SEG_1008;
            pass1_1008_a930(iVar3->field_0x92, 0x1d5, unaff_SS);
        }
        HVar4 = (HWND16)LAST_SEGMENT;
        u_var2 = IsDlgButtonChecked(HVar3, 0xe2);
        if(u_var2 != 0x0)
        {
            HVar4 = SEG_1008;
            pass1_1008_a930(iVar3->field_0x92, 0x1d6, unaff_SS);
        }
        HVar3 = (HWND16)LAST_SEGMENT;
        u_var2 = IsDlgButtonChecked(HVar4, 0xe3);
        if(u_var2 != 0x0)
        {
            HVar3 = SEG_1008;
            pass1_1008_a930(iVar3->field_0x92, 0x1d7, unaff_SS);
        }
        HVar4 = (HWND16)LAST_SEGMENT;
        u_var2 = IsDlgButtonChecked(HVar3, 0xe5);
        if(u_var2 != 0x0)
        {
            HVar4 = SEG_1008;
            pass1_1008_a930(iVar3->field_0x92, 0x1d8, unaff_SS);
        }
        HVar3 = (HWND16)LAST_SEGMENT;
        u_var2 = IsDlgButtonChecked(HVar4, 0xe6);
        if(u_var2 != 0x0)
        {
            HVar3 = SEG_1008;
            pass1_1008_a930(iVar3->field_0x92, 0x1e2, unaff_SS);
        }
        u_var2 = IsDlgButtonChecked(HVar3, 0xe7);
        if(u_var2 != 0x0)
        {
            pass1_1008_a930(iVar3->field_0x92, 0x1dc, unaff_SS);
        }
        return;
    }
    DestroyWindow16(param_3);
    return;
}


void  pass1_1040_205e(Struct18 *param_1)

{
    u32  *puVar1;
    u16          u_var2;
    void **ppcVar3;
    Struct624 *iVar4;
    u16          uVar4;

    uVar4              = (param_1 >> 0x10);
    iVar4              = (Struct624 *)param_1;
    param_1->field_0x0 = addr_table_1040_237e;//0x237e;
    iVar4->fld2_segment = SEG_1040;
    puVar1             = iVar4->field_0x8e;
    u_var2              = iVar4->field_0x90;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    fn_ptr_1000_17ce(iVar4->field_0xa2, SEG_1000);
    fn_ptr_1000_17ce(iVar4->field_0xa6, SEG_1000);
    pass1_1038_b6e0(globals->ptr_1050_5b7c, iVar4->field_0x6);
    ui_cleanup_op_1040_782c(param_1, SEG_1038);
    return;
}


void create_win_1040_20d4(Globals *globals,
                          u16      param_1,
                          u16      param_2,
                          u16      param_3,
                          Struct1 *param_4)

{
    i16        y;
    i16        unaff_DI;
    u16        uVar1;
    u16       *pu_var2;
    RECT16     local_1e;
    i16        iStack26;
    i16        iStack24;
    u32 uStack22;
    u32        uStack18;
    i16        iStack14;
    u16        uStack12;
    i16        iStack10;
    i16        iStack8;
    u16        u_stack6;
    i16        iStack4;

    dialog_ui_fn_1040_78e2(param_4, param_2);
    pu_var2   = mixed_1010_20ba(globals->u16_1050_0ed0, 0x48, param_1, param_3, unaff_DI);
    uStack12 = (pu_var2 >> 0x10);
    iStack14 = pu_var2;
    iStack8  = (iStack14 + 0xa);
    iStack10 = (iStack14 + 0xc);
    uVar1    = (param_4 >> 0x10);
    uStack18 = pass1_1008_4772(param_4->field_0x8e);
    y        = (uStack18 + 0x4);
    iStack4  = (iStack8 - y) / 0x2;
    u_stack6  = 0x5;
    SetWindowPos16(SEG_1008, 0x6, 0x1d6, y, 0x5, iStack4, 0x0);
    GetClientRect16((HWND16)LAST_SEGMENT, &local_1e);
    load_string_1010_847e(globals->dat_1050_14cc, SEG_1010);
    uStack22 = 0x50010001;
    CreateWindow16(SEG_1010, 0x0, globals->hinst_1050_038c, 0x1, (param_4->field_0x6), 0x19, 0x58, iStack24 - 0x28, (iStack26 + -0x58) / 0x2, 0x1,0x5000);
    SetWindowPos16((HWND16)LAST_SEGMENT, 0x45, iStack10 + -0xa, (uStack18 + 0x4), 0x5, iStack4, 0x0);
}


void pass1_1038_ebd6(Globals *globals, Struct18 *param_1)

{
    param_1->field_0x0 = addr_table_1038_ee6e;//0xee6e;
    param_1->field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals->ptr_1050_5b7c, param_1->field_0x6);
    fn_ptr_1000_17ce(param_1->field_0x8e, SEG_1000);
    ui_cleanup_op_1040_782c(param_1, 0x1040);
}


void  win_ui_op_1038_ec1a(u16 param_1, i16 param_2)

{
    i16         *pi_var1;
    u32   u_var2;
    u32   uVar3;
    u16          uVar4;
    Struct160 *rect;
    u8          *in_DX;
    u8          *puVar5;
    u16          uVar6;
    i16          iVar7;
    i16          iVar8;
    i16          unaff_DI;
    u16          uVar9;
    u16         *puVar10;
    u16         *puVar11;

    dialog_ui_fn_1040_78e2(*(Struct1 **)(param_2 + 0x6), SEG_1040);
    puVar10            = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_1, in_DX, unaff_DI);
    globals->dat_1050_5f2e = (puVar10 >> 0x10);
    (param_2 + -0x4)   = puVar10;
    (param_2 + -0x2)   = globals->dat_1050_5f2e;
    uVar4              = pass1_1010_0892();
    (param_2 + -0x6)   = uVar4;
    if(globals->_PTR_LOOP_1050_5f2c == 0x0)
    {
        globals->dat_1050_5f2c = mem_op_1000_160a(globals->PTR_LOOP_1050_5f2e, SEG_1000);
    }
    else
    {
    }
    (param_2 + -0x18) = globals->dat_1050_5f2c;
    (param_2 + -0x16) = globals->dat_1050_5f2e;
    uVar4             = fn_ptr_op_1000_1708(((param_2 + -0x6) + 0x2) * 0x4, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
    u_var2             = (param_2 + 0x6);
    uVar9             = (u_var2 >> 0x10);
    iVar7             = u_var2;
    (iVar7 + 0x8e)    = uVar4;
    (iVar7 + 0x90)    = globals->dat_1050_5f2e;
    (param_2 + -0x8)  = 0x1;
    while(iVar7 = (param_2 + -0x6), pi_var1 = (param_2 + -0x8), *pi_var1 == iVar7 || *pi_var1 < iVar7)
    {
        u_var2             = (param_2 + -0x4);
        puVar11           = pass1_1010_0932(u_var2, (u_var2 >> 0x10), (param_2 + -0x8));
        puVar5            = (puVar11 >> 0x10);
        (param_2 + -0x18) = puVar11;
        (param_2 + -0x16) = puVar5;
        (param_2 + -0x20) = *puVar11;
        (param_2 + -0x1e) = (puVar11 + 0x2);
        (param_2 + -0x1c) = 0x1;
        (param_2 + -0x1a) = 0x1;
        rect              = (Struct160 *)(param_2 + -0x20);
        MapDialogRect16(SEG_1010, (RECT16 *) rect);
        mem_op_1000_179c(0x42, puVar5, 0);
        *(Struct160 **) (param_2 + -0x24) = rect;
        (param_2 + -0x22)                  = puVar5;
        uVar6                              = puVar5 | rect;
        if(uVar6 == 0x0)
        {
            u_var2                            = (param_2 + 0x6);
            u_var2                            = (u_var2 + 0x8e);
            (u_var2 + (param_2 + -0x8) * 0x4) = 0x0;
        }
        else
        {
            u_var2 = (param_2 + 0x6);
            uVar3 = (param_2 + -0x18);
            pass1_1008_3bd6(rect, (param_2 + -0x22), 0x0,
                            str_var1((param_2 + -0x20), (param_2 + -0x1e)), 0x101, 0xff0100,
                            str_var1((u_var2 + 0x6), (uVar3 + 0x4)), uVar6, param_1);
            u_var2                            = (param_2 + 0x6);
            u_var2                            = (u_var2 + 0x8e);
            uVar9                            = (u_var2 >> 0x10);
            iVar7                            = u_var2;
            iVar8                            = (param_2 + -0x8) * 0x4;
            *(Struct160 **)(iVar7 + iVar8) = rect;
            (iVar7 + iVar8 + 0x2)            = uVar6;
        }
        u_var2 = (param_2 + 0x6);
        u_var2 = (u_var2 + 0x8e);
        uVar9 = (u_var2 >> 0x10);
        iVar7 = u_var2;
        iVar8 = (param_2 + -0x8) * 0x4;
        if((iVar7 + iVar8) != 0x0)
        {
            u_var2 = (param_2 + -0x18);
            enable_win_1040_9234(*(iVar7 + iVar8), *(BOOL16 *)(u_var2 + 0x6), SEG_1040);
        }
        pi_var1  = (param_2 + -0x8);
        *pi_var1 = *pi_var1 + 0x1;
    }
    move_win_1040_826c(*(Struct1 **)(param_2 + 0x6), -0x1, 0xffff);
    ShowWindow16((HWND16)SEG_1040, 0x5);
    return;
}
