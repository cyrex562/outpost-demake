// #include "ui_ops_4.h"

// #include "address_tables/function_tables.h"
// #include "op_int.h"
// #include "op_winapi.h"
// #include "op_windef.h"
// #include "string_ops.h"
// #include "struct_20.h"
// #include "struct_43.h"
// #include "sys_ops/sys_ops_9.h"
// #include "ui_ops_1.h"
// #include "win_ops/win_ops_2.h"

void win_dlg_op_1038_bea4(globals: &mut Globals, param_1: u32, u16 *param_2)

{
    let mut uVar1: u32;
    let mut HVar2: HWND16;
    let mut in_DX: *mut u8;
    let mut puVar3: *mut u8;
    let mut uVar4: u16;
    WPARAM16   wparam;
    let mut iVar5: i16;
    let mut unaff_DI: i16;
    let mut uVar6: u16;
    let mut puVar7: *mut u16;
    let mut uVar8: u32;
    let mut pcVar9: *mut c_char;
    LRESULT    LVar10;
    let mut local_116: *mut u32;
    let mut local_112: *mut u32;
    let mut local_10e: [u8;82] = [0;82];
    let mut local_8c: [u8;82] = [0;82];
    let mut uStack10: u32;
    let mut pu_stack6: *mut u16;

    pu_stack6 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2, param_2, in_DX, unaff_DI);
    puVar3   = (pu_stack6 >> 0x10);
    uStack10 = (pu_stack6 + 0x68);
    uVar6    = (param_1 >> 0x10);
    iVar5    = param_1;
    GetWindowText16(SEG_1010, 0x80, local_8c);
    wsprintf16(LAST_SEGMENT, local_10e, param_2);
    SetWindowText16(LAST_SEGMENT, (SEGPTR)local_10e);
    HVar2                     = GetDlgItem16(LAST_SEGMENT, 0x179);
    *(HWND16 *)(iVar5 + 0x92) = HVar2;
    pass1_1008_e3ec(*(iVar5 + 0x8e),
                    str_var1(param_2, &local_116),
                    str_var1(param_2, &local_112), param_2);
    send_msg_1038_c374(param_1, local_112, (iVar5 + 0x92), SEG_1008);
    puVar7 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2f, param_2, puVar3, unaff_DI);
    uVar4  = (puVar7 >> 0x10);
    uVar8  = *(puVar7 + 0x24);
    uVar1  = (iVar5 + 0x8e);
    uVar8  = string_1008_e586(uVar1, (uVar1 >> 0x10), uVar8, uVar8, uVar4);
    SendMessage16(SEG_1008, uVar8, (WPARAM16)(uVar8 >> 0x10), 0x40dffff);
    HVar2                     = GetDlgItem16(LAST_SEGMENT, 0x17a);
    *(HWND16 *)(iVar5 + 0x94) = HVar2;
    send_msg_1038_c374(param_1, local_116, HVar2, LAST_SEGMENT);
    pcVar9         = load_string_1010_847e(globals.dat_1050_14cc, SEG_1010);
    wparam         = (WPARAM16)(pcVar9 >> 0x10);
    LVar10         = SendMessage16(SEG_1010, pcVar9, wparam, 0x4030000);
    (iVar5 + 0x9c) = LVar10;
    SendMessage16(LAST_SEGMENT, pcVar9, wparam, 0x40dffff);
    HVar2                     = GetDlgItem16(LAST_SEGMENT, 0x178);
    *(HWND16 *)(iVar5 + 0x96) = HVar2;
    HVar2                     = GetDlgItem16(LAST_SEGMENT, 0x177);
    *(HWND16 *)(iVar5 + 0x98) = HVar2;
    HVar2                     = GetDlgItem16(LAST_SEGMENT, 0x184);
    *(HWND16 *)(iVar5 + 0x9a) = HVar2;
    return;
}


void show_win_1038_c044(globals: &mut Globals, param_1: *mut Struct1)

{
    dialog_ui_fn_1040_78e2(param_1, 0x1040);
    move_win_1040_826c(param_1, -0x1, 0xffff);
    ShowWindow16(0x1040, 0x5);
    SetFocus16(LAST_SEGMENT);
}


void  msg_box_op_1038_c07a(param_1: i16, param_2: u16, param_3: u16, param_4: u32, param_5: u16)

{
    let mut iVar1: i16;
    let mut u_var2: u16;
    let mut unaff_CS: u16;
    let mut hwnd: HWND16;
    let mut in_AF: u8;
    let mut local_70c: [u8;200] = [0;200];
    char       local_50c[0x100];
    char       local_40c[0x402];
    let mut uStack10: u32;
    let mut u_stack6: u32;

    send_msg_1038_c228(str_var1(param_2, param_1), unaff_CS);
    u_stack6 = load_string_1010_847eglobals.dat_1050_14cc, SEG_1010);
    if(param_4 == 0x177)
    {
        pass1_1008_e05e(*(param_1 + 0x8e), 0x2,
                        str_var1(param_2, param_1 + 0x19eU),
                        str_var1(param_2, param_1 + 0x9e), param_5, in_AF);
        load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x200, local_40c, param_5);
        sys_1000_3f9c(local_70c,
                      param_5,
                      local_40c,
                      param_1 + 0x19eU,
                      &stack0xfffe,
                      param_2,
                      SEG_1000,
                      param_5,
                      in_AF);
        load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x100, local_50c, param_5);
        hwnd = LAST_SEGMENT;
        MessageBox16(SEG_1010, (s_New_failed_in_Op__Op_1050_0020 + 0x10), local_50c, param_5);
    }
    else
    {
        if(param_4 != 0x178)
        {
            if((param_4 != 0x178) && (param_4 - 0x179U < 0x2))
            {
                set_win_pos_1038_c31a(
                  str_var1(param_2, param_1), param_3, param_4, SEG_1010);
                return;
            }
            post_win_msg_1040_7b3c(
              str_var1(param_2, param_1), param_3, param_4, param_4, SEG_1040);
            return;
        }
        uStack10 = str_var1(param_2, param_1 + 0x9e);
        u_var2    = param_2;
        iVar1    = pass1_1008_e10c(*(param_1 + 0x8e),
                                str_var1(param_2, param_1 + 0x19e),
                                str_var1(param_2, param_1 + 0x9e), param_2, param_5);
        if(iVar1 == 0x0)
        {
            load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_40c, param_5);
            load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_50c, param_5);
            MessageBox16(SEG_1010, (s_New_failed_in_Op__Op_1050_0020 + 0x10), local_50c, param_5);
            return;
        }
        hwnd = SEG_1008;
        pass1_1008_e01c(*(param_1 + 0x8e), str_var1(param_2, param_1 + 0x19e), uStack10);
        pass1_1038_af40(globals.ptr_1050_5b7c, (param_1 + 0x8), 0x1f, u_var2, param_1, SEG_1008, param_5);
    }
    PostMessage16(hwnd, 0x0, 0x0, 0x1110002);
    return;
}


void  enable_win_1038_c294(param_1: u32)

{
    SEGPTR lp_string;
    let mut uVar1: u16;
    let mut unaff_SS: u16;
    let mut uStack12: u32;

    lp_string = param_1 + 0x9e;
    uStack12  = param_1 & 0xffff0000 | lp_string;
    pass1_1008_e320(NULL,
                    (param_1 + 0x8e),
                    param_1 & 0xffff0000 | (param_1 + 0x19eU),
                    param_1 & 0xffff0000 | lp_string,
                    unaff_SS);
    SetWindowText16(SEG_1008, lp_string);
    uVar1 = pass1_1008_e2a4(*(param_1 + 0x8e), param_1 & 0xffff0000 | (param_1 + 0x19eU), uStack12);
    EnableWindow16(SEG_1008, uVar1 & 0x1);
    EnableWindow16(LAST_SEGMENT, uVar1 & 0x2);
    return;
}


BOOL16  set_win_pos_1038_c31a(param_1: u32, param_2: u16, param_3: i16, param_4: HWND16)

{
    let mut local_e: RECT16;
    let mut iStack10: i16;
    let mut u_stack6: u16;
    let mut iStack4: i16;

    iStack4 = param_3;
    u_stack6 = param_2;
    if(param_3 == 0x1)
    {
        enable_win_1038_c294(param_1);
    }
    else
    {
        if(param_3 != 0x7)
        {
            return 0x0;
        }
        GetWindowRect16(param_4, &local_e);
        iStack10 = iStack10 - local_e.x;
        SetWindowPos16(LAST_SEGMENT, 0x2, 0x50, iStack10, 0x0, 0x0, 0x0);
    }
    return 0x1;
}


void  pass1_1038_c4fe(param_1: *mut Struct18)

{
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1038_c74c;//0xc74c;
    param_1.field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals.ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}


void  pass1_1038_c52a(param_1: u16, param_2: u32, param_3: *mut u8, param_4: i16, param_5: u16)

{
    let mut puVar1: *mut u16;
    let mut iVar2: i16;

    if(param_2 == 0x0)
    {
        iVar2  = 0x0;
        puVar1 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2b, param_5, param_3, param_4);
        pass1_1010_038e(puVar1, iVar2, param_5);
    }
    destroy_win_1040_7b98(str_var1(param_2, param_1), SEG_1040);
    return;
}


void  show_win_1038_c558(param_1: *mut Struct1)

{
    dialog_ui_fn_1040_78e2(param_1, SEG_1040);
    move_win_1040_826c(param_1, -0x1, 0xffff);
    ShowWindow16(SEG_1040, 0x5);
    SetFocus16(LAST_SEGMENT);
    return;
}


void  win_dlg_op_1038_c58e(param_1: u32, WORD *param_2)

{
    let mut in_DX: *mut u8;
    let mut iVar1: i16;
    let mut unaff_DI: i16;
    CHAR       local_80e[0x402];
    CHAR       local_40c[0x402];
    let mut uStack10: u32;
    let mut pu_stack6: *mut u16;

    pu_stack6 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2, param_2, in_DX, unaff_DI);
    uStack10 = (pu_stack6 + 0x68);
    iVar1    = param_1;
    GetWindowText16(SEG_1010, 0x80, local_40c);
    wsprintf16(LAST_SEGMENT, local_80e, param_2);
    SetWindowText16(LAST_SEGMENT, (SEGPTR)local_80e);
    pass1_1008_e038(*(iVar1 + 0x8e), (param_1 & 0xffff0000 | (iVar1 + 0x92)), (param_1 & 0xffff0000 | (iVar1 + 0x96)));
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x400, local_80e, (short)param_2);
    wsprintf16(SEG_1010, local_40c, param_2);
    SetDlgItemText16(LAST_SEGMENT, local_40c, (SEGPTR)param_2);
    return;
}


void  message_box_op_1038_c672(param_1: i16, param_2: u16, param_3: u16, param_4: u32, short param_5)

{
    let mut uVar1: u32;
    let mut hwnd: HWND16;
    let mut in_AF: u8;
    let mut u_var2: u16;
    char       local_404[0x402];

    u_var2 = globals.dat_1050_14cc >> 0x10);
    if(param_4 == 0x17d)
    {
        load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, u_var2, 0x3ff);
        uVar1 = (param_1 + 0x92);
        hwnd  = LAST_SEGMENT;
        MessageBox16(SEG_1010, (s_New_failed_in_Op__Op_1050_0020 + 0x10), uVar1, (uVar1 >> 0x10));
    }
    else
    {
        if(param_4 != 0x17e)
        {
            post_win_msg_1040_7b3c(
              str_var1(param_2, param_1), param_3, param_4, param_4, SEG_1040);
            return;
        }
        load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, u_var2, 0x3ff);
        uVar1 = (param_1 + 0x92);
        MessageBox16(SEG_1010, (s_New_failed_in_Op__Op_1050_0020 + 0x10), uVar1, (uVar1 >> 0x10));
        hwnd = SEG_1008;
        pass1_1008_e164(*(param_1 + 0x8e), param_5, in_AF);
    }
    PostMessage16(hwnd, 0x0, 0x0, 0x1110002);
    return;
}


void  pass1_1038_c80a(param_1: *mut Struct18) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1038_ca6c;//0xca6c;
    param_1.field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals.ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}


void  destroy_window_1038_c836(param_1: i16, param_2: u32, param_3: u32, param_4: u16)

{
    let mut uVar1: u32;
    let mut pu_var2: *mut u16;
    let mut local_6: [u8;4] = [0;4];

    if(param_3 == 0xfce)
    {
        pu_var2 = pass1_1008_941a(str_var1(param_4, local_6), 0x1, 0xac);
        win_1008_5c9e(globals._PTR_LOOP_1050_02a0,
                      str_var1(param_4, local_6), local_6, (pu_var2 >> 0x10), param_4);
        uVar1         = (param_1 + 0x8e);
        (uVar1 + 0xa) = 0x6;
        DestroyWindow16(SEG_1008);
        globals.PTR_LOOP_1050_5b80 = 0x0;
        return;
    }
    post_win_msg_1040_7b3c(
      str_var1(param_2, param_1), (param_2 >> 0x10), param_3, param_3, SEG_1040);
    return;
}


void  win_ui_op_1038_c89c(param_1: *mut Struct1)

{
    let mut iVar1: i16;
    let mut u_var2: u32;
    let mut HVar3: HWND16;
    let mut uVar4: u16;
    let mut enable: BOOL16;

    dialog_ui_fn_1040_78e2(param_1, SEG_1040);
    uVar4 = (param_1 >> 0x10);
    CheckRadioButton16(SEG_1040, 0xfac, 0xfad, 0xfac);
    u_var2         = (param_1 + 0x8e);
    (u_var2 + 0xa) = 0x1;
    u_var2         = (param_1 + 0x8e);
    iVar1         = (u_var2 + 0x12);
    if(iVar1 == 0x4)
    {
    // LAB_1038_c8da:
        HVar3 = GetDlgItem16(LAST_SEGMENT, 0xfce);
        if(HVar3 != 0x0)
        {
            EnableWindow16(LAST_SEGMENT, 0x1);
        }
        HVar3 = GetDlgItem16(LAST_SEGMENT, 0x1);
        if(HVar3 == 0x0)
            goto LAB_1038_c93c;
        enable = 0x0;
    }
    else
    {
        if((iVar1 + -0x5 < 0x1) || (SBORROW2(iVar1 + -0x5, 0x1)))
            goto LAB_1038_c93c;
        if(iVar1 != 0x8 && 0x0 < iVar1 + -0x7)
        {
            if(iVar1 != 0x9)
                goto LAB_1038_c93c;
            goto LAB_1038_c8da;
        }
        HVar3 = GetDlgItem16(LAST_SEGMENT, 0xfce);
        if(HVar3 == 0x0)
            goto LAB_1038_c93c;
        enable = 0x1;
    }
    EnableWindow16(LAST_SEGMENT, enable);
// LAB_1038_c93c:
    move_win_1040_826c(param_1, 0xc8, 0x0);
    ShowWindow16(SEG_1040, 0x5);
    return;
}


void  enable_window_1038_9cec(param_1: i16, param_2: u16, param_3: u16, param_4: u16, param_5: i16, param_6: HWND16)

{
    let mut pi_var1: *mut i16;
    let mut iVar2: i16;
    let mut uVar3: u16;
    let mut iVar4: i16;
    let mut HVar5: HWND16;
    let mut in_DX: *mut u8;
    let mut unaff_DI: i16;
    let mut unaff_SS: u16;
    let mut puVar6: *mut u16;
    let mut iStack12: i16;

    if(param_5 == 0xeb)
    {
        pass1_1040_b54a(param_1, param_2, param_3, str_var1(0xeb, param_4), in_DX, SEG_1040, unaff_SS);
        puVar6   = mixed_1010_20ba(globals.dat_1050_0ed0, 0x3, unaff_SS, in_DX, unaff_DI);
        iVar4    = puVar6 + 0xa4;
        uVar3    = (puVar6 >> 0x10);
        iStack12 = 0x0;
        HVar5    = SEG_1010;
        while(iVar2 = iStack12 * 0x2, (iVar2 + iVar4) != 0x0)
        {
            HVar5                               = GetDlgItem16(HVar5, (iVar2 + iVar4));
            *(HWND16 *)(param_1 + iVar2 + 0x94) = HVar5;
            iStack12                            = iStack12 + 0x1;
            pi_var1                              = (param_1 + 0x128);
            *pi_var1                             = *pi_var1 + 0x1;
            HVar5                               = LAST_SEGMENT;
        }
    }
    else
    {
        if(param_5 == 0xf8)
        {
            GetDlgItem16(param_6, 0x17d8);
            HVar5 = 0x1;
        }
        else
        {
            if(param_5 != 0x17d8)
            {
                pass1_1040_b54a(param_1, param_2, param_3,
                                str_var1(param_5, param_4), in_DX, SEG_1040, unaff_SS);
                return;
            }
            SetWindowPos16(param_6, 0x6, 0xed, 0x237, 0x0, 0x0, 0x0);
            HVar5 = GetDlgItem16(LAST_SEGMENT, 0x17d8);
        }
        EnableWindow16(LAST_SEGMENT, HVar5);
    }
    return;
}


void  pass1_1038_9fa4(param_1: *mut Struct18) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1038_a0b6;//0xa0b6;
    param_1.field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals.ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}


void  show_win_1038_9fd0(param_1: *mut Struct1)

{
    dialog_ui_fn_1040_78e2(param_1, SEG_1040);
    move_win_1040_826c(param_1, -0x1, 0xffff);
    ShowWindow16(SEG_1040, 0x5);
    return;
}


void  destroy_window_1038_a072(param_1: u16, param_2: u16, param_3: i16, param_4: HWND16)

{
    if(param_3 != 0x0)
    {
        DestroyWindow16(param_4);
    }
    return;
}


void  pass1_1038_a156(param_1: *mut Struct18) {
    param_1.field_0x0 = addr_table_1038_a2d0;//0xa2d0;
    param_1.field_0x2 = SEG_1038;
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}


void  unk_win_ui_op_1038_a18c(param_1: *mut Struct1, param_2: u16)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut IVar2: u16;
    let mut in_DX: *mut u8;
    let mut unaff_DI: i16;
    let mut uVar3: u16;
    let mut piVar4: *mut i16;
    let mut puVar5: *mut u8;
    let mut uVar6: u16;
    let mut uVar7: u16;
    let mut local_2c: RECT16;
    let mut iStack40: i16;
    let mut puStack36: *mut u16;
    let mut iStack32: i16;
    let mut uStack30: u16;
    let mut local_1c: i16;
    let mut local_1a: [u8;2] = [0;2];
    let mut uStack24: u32;
    let mut paStack20: *mut Struct76;
    let mut local_10: i16;
    let mut local_e: BOOL16;
    let mut local_c: [u8;6] = [0;6];
    let mut pu_stack6: *mut u16;

    pu_stack6 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x27, param_2, in_DX, unaff_DI);
    pass1_1008_3e38(str_var1(param_2, local_c));
    pass1_1008_3f62(str_var1(param_2, local_c), (pu_stack6 & 0xffff0000 | (pu_stack6 + 0x52)));
    pass1_1008_3e94(str_var1(param_2, local_c),
                    str_var1(param_2, &local_10),
                    str_var1(param_2, &local_e));
    paStack20 = unk_io_op_1010_830a(globals.dat_1050_14cc, 0x1c0, param_2);
    uStack24  = pass1_1008_4772(paStack20);
    puVar5    = local_1a;
    piVar4    = &local_1c;
    uVar7     = param_2;
    puStack36 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x48, param_2, (uStack24 >> 0x10), unaff_DI);
    pass1_1008_3e94((puStack36 & 0xffff0000 | (puStack36 + 0xe)),
                    str_var1(param_2, piVar4),
                    str_var1(uVar7, puVar5));
    uVar3    = (puStack36 >> 0x10);
    uStack30 = (puStack36 + 0xa);
    iStack32 = (puStack36 + 0xc);
    local_10 = local_10 + (iStack32 * 0xa) / 0x258 + (uStack24 + 0x8) + local_1c;
    uVar3    = (param_1 + 0x6);
    GetWindowRect16(SEG_1008, &local_2c);
    uVar6   = 0x0;
    IVar2   = GetSystemMetrics16(LAST_SEGMENT);
    local_e = (IVar2 - (iStack40 - local_2c.x)) / 0x2;
    move_win_1040_826c(param_1, local_10, local_e);
    if(paStack20 != 0x0)
    {
        ppcVar1 = paStack20;
        (**ppcVar1)(SEG_1040, paStack20, (paStack20 >> 0x10), 0x1, uVar6, uVar3, paStack20, paStack20);
    }
    return;
}


void  show_win_1038_a396(param_1: *mut Struct1, param_2: u16, param_3: u16)

{
    let mut in_AX: u16;
    let mut in_DX: u16;

    dialog_ui_fn_1040_78e2(param_1, SEG_1040);
    unk_win_ui_op_1038_a18c(param_1, param_3);
    win_1008_5c7c(NULL, _PTR_LOOP_1050_02a0, 0x10001, param_3, in_AX);
    (param_1 + 0x8c) = in_AX;
    ShowWindow16(SEG_1008, 0x5);
    return;
}


void  win_ui_op_1038_a4ee(param_1: *mut Struct1, param_2: u16)

{
    let mut uVar1: u32;
    let mut in_DX: *mut u8;
    let mut unaff_DI: i16;
    WNDCLASS16 *unaff_SS;
    let mut pu_var2: *mut u16;

    dialog_ui_fn_1040_78e2(param_1, SEG_1040);
    win_1008_5c7c(NULL, _PTR_LOOP_1050_02a0, 0x20001, unaff_SS, param_2);
    (param_1 + 0x8c) = param_2;
    pu_var2           = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2, unaff_SS, in_DX, unaff_DI);
    uVar1            = (pu_var2 + 0x6c);
    GetDlgItem16(SEG_1010, 0x114);
    SetWindowText16(LAST_SEGMENT, (SEGPTR)uVar1);
    SetFocus16(LAST_SEGMENT);
    SendMessage16(LAST_SEGMENT, 0x0, 0xffff, 0x4010000);
    unk_win_ui_op_1038_a18c(param_1, unaff_SS);
    ShowWindow16(LAST_SEGMENT, 0x5);
    return;
}


void  win_ui_op_1038_a584(param_1: u16, param_2: i16, param_3: HWND16, param_4: u16)

{
    let mut uVar1: u16;
    let mut in_DX: *mut u8;
    let mut unaff_DI: i16;
    let mut pu_var2: *mut u16;
    let mut in_stack_00000006: u16;
    let mut puVar3: *mut u8;
    let mut local_52: [u8;50] = [0;50];

    if(param_2 != 0x0)
    {
        GetDlgItem16(param_3, 0x114);
        GetWindowText16(LAST_SEGMENT, 0x50, local_52);
        uVar1 = str_op_1000_3da4(str_var1(param_4, local_52));
        if(uVar1 != 0x0)
        {
            puVar3 = local_52;
            pu_var2 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2, param_4, in_DX, unaff_DI);
            pass1_1010_6006(pu_var2, str_var1(param_4, puVar3), (pu_var2 >> 0x10));
            GetWindowWord16(SEG_1010, -0x8);
            PostMessage16(LAST_SEGMENT, 0x0, 0x0, 0x1110105);
            destroy_win_1040_7b98(str_var1(in_stack_00000006, param_1), SEG_1040);
        }
    }
    return;
}


void  win_ui_op_1038_a6f4(param_1: *mut Struct1)

{
    let mut uVar1: u32;
    let mut u_var2: u16;
    let mut in_DX: *mut u8;
    let mut uVar3: u16;
    let mut unaff_DI: i16;
    WNDCLASS16 *unaff_SS;
    let mut puVar4: *mut u16;
    LRESULT     LVar5;

    dialog_ui_fn_1040_78e2(param_1, SEG_1040);
    puVar4 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2, unaff_SS, in_DX, unaff_DI);
    uVar1  = (puVar4 + 0x68);
    GetDlgItem16(SEG_1010, 0x115);
    SetWindowText16(LAST_SEGMENT, (SEGPTR)uVar1);
    SetFocus16(LAST_SEGMENT);
    LVar5 = SendMessage16(LAST_SEGMENT, 0x0, 0xffff, 0x4010000);
    uVar3 = (LVar5 >> 0x10);
    u_var2 = LVar5;
    unk_win_ui_op_1038_a18c(param_1, unaff_SS);
    win_1008_5c7c(NULL, _PTR_LOOP_1050_02a0, 0x30001, unaff_SS, u_var2);
    (param_1 + 0x8c) = u_var2;
    ShowWindow16(SEG_1008, 0x5);
    return;
}


void  win_ui_op_1038_a788(param_1: u32, param_2: i16, param_3: HWND16, param_4: u16)

{
    let mut uVar1: u16;
    let mut in_DX: *mut u8;
    let mut unaff_DI: i16;
    let mut pu_var2: *mut u16;
    let mut pu_var2: *mut u8;
    let mut local_52: [u8;50] = [0;50];
    let mut puVar3: *mut u8;

    if(param_2 != 0x0)
    {
        GetDlgItem16(param_3, 0x115);
        GetWindowText16(LAST_SEGMENT, 0x50, local_52);
        uVar1 = str_op_1000_3da4(str_var1(param_4, local_52));
        if(uVar1 != 0x0)
        {
            pu_var2 = local_52;
            pu_var2 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2, param_4, in_DX, unaff_DI);
            pass1_1010_5fd8(pu_var2, str_var1(param_4, pu_var2), (pu_var2 >> 0x10));
            GetWindowWord16(SEG_1010, -0x8);
            PostMessage16(LAST_SEGMENT, 0x0, 0x0, 0x1110105);
            destroy_win_1040_7b98(param_1, SEG_1040);
        }
    }
    return;
}

void  enable_win_1038_a8f8(param_1: u16, param_2: u16, param_3: u16, TwoWords param_4, in_hwnd_5: HWND16)

{
    let mut enable: BOOL16;

    if(param_4.b_0x2 == 0x116)
    {
        SendDlgItemMessage16(in_hwnd_5, 0x0, 0x0, 0x1, 0x11a0401);
        GetDlgItem16(LAST_SEGMENT, 0x11a);
        enable = 0x0;
    }
    else
    {
        if((param_4.b_0x2 == 0x116) || (0x2 < param_4.b_0x2 - 0x117))
        {
            post_win_msg_1040_7b3c(
              str_var1(param_2, param_1), param_3, param_4, param_4.b_0x2, SEG_1040);
            return;
        }
        GetDlgItem16(in_hwnd_5, 0x11a);
        enable = 0x1;
    }
    EnableWindow16(LAST_SEGMENT, enable);
    return;
}

void  win_ui_op_1038_a972(param_1: *mut Struct1)

{
    let mut BVar1: BOOL16;
    let mut u_var2: u16;
    WNDCLASS16 *unaff_SS;
    LRESULT     LVar3;

    dialog_ui_fn_1040_78e2(param_1, SEG_1040);
    SendDlgItemMessage16(SEG_1040, 0x0, 0x0, 0x1, 0x1160401);
    LVar3 = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x1, 0x11a0401);
    u_var2 = (LVar3 >> 0x10);
    GetDlgItem16(LAST_SEGMENT, 0x11a);
    BVar1 = EnableWindow16(LAST_SEGMENT, 0x0);
    win_1008_5c7c(NULL, _PTR_LOOP_1050_02a0, 0x40001, unaff_SS, BVar1);
    *(BOOL16 *)(param_1 + 0x8c) = BVar1;
    unk_win_ui_op_1038_a18c(param_1, unaff_SS);
    ShowWindow16(SEG_1008, 0x5);
    return;
}


void  win_sys_op_1038_a9fa(param_1: u32, i16 param_2)

{
    let mut in_DX: *mut u8;
    let mut unaff_DI: i16;
    let mut unaff_SS: u16;
    let mut puVar1: *mut u16;
    LRESULT LVar2;

    if(param_2 != 0x0)
    {
        puVar1 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x2, unaff_SS, in_DX, unaff_DI);
        LVar2  = SendDlgItemMessage16(SEG_1010, 0x0, 0x0, 0x0, 0x1160400);
        if(LVar2 == 0x0)
        {
            LVar2 = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x1170400);
            if(LVar2 == 0x0)
            {
                LVar2 = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x1180400);
                if(LVar2 == 0x0)
                {
                    LVar2 = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x1190400);
                    if(LVar2 != 0x0)
                    {
                        globals.PTR_LOOP_1050_13ae = &DAT_1050_0004;
                    }
                }
                else
                {
                    globals.PTR_LOOP_1050_13ae = (&PTR_LOOP_1050_0002 + 0x1);
                }
            }
            else
            {
                globals.PTR_LOOP_1050_13ae = &PTR_LOOP_1050_0002;
            }
        }
        else
        {
            globals.PTR_LOOP_1050_13ae = (&PTR_LOOP_1050_0000 + 0x1);
        }
        LVar2           = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x11a0400);
        (puVar1 + 0x82) = LVar2;
        GetWindowWord16(LAST_SEGMENT, -0x8);
        PostMessage16(LAST_SEGMENT, 0x0, 0x0, 0x1110105);
        destroy_win_1040_7b98(param_1, SEG_1040);
    }
    return;
}


void  pass1_1038_abb0(param_1: *mut Struct18) {
    let mut uVar1: u16;

    uVar1 = (param_1 >> 0x10);
    param_1.field_0x0 = addr_table_1038_ad72;//0xad72;
    param_1.field_0x2 = SEG_1038;
    pass1_1038_b6e0(globals.ptr_1050_5b7c, (param_1 + 0x6));
    ui_cleanup_op_1040_782c(param_1, SEG_1040);
    return;
}


void  set_win_pos_1038_abdc(param_1: HWND16)

{
    let mut local_12: [RECT16;0x2] = [0;0x2]
    let mut local_a: RECT16;
    let mut iStack6: i16;
    let mut iStack4: i16;

    GetWindowRect16(param_1, &local_a);
    GetDlgItem16(LAST_SEGMENT, 0xfd7);
    GetWindowRect16(LAST_SEGMENT, local_12);
    iStack6 = iStack6 - local_a.x;
    iStack4 = (local_12[0].y - local_a.y) + -0x2;
    SetWindowPos16(LAST_SEGMENT, 0x6, iStack4, iStack6, 0x0, 0x0, 0x0);
    return;
}


Struct20 * pass1_1038_aeca(param_1: &mut Struct20, param_2: u16)

{
    let mut uVar1: u16;
    let mut local_b6: u16;
    let mut uStack180: u16;
    let mut local_5c: [u8;5a] = [0;5a];

    uVar1            = (param_1 >> 0x10);
    (param_1 + 0xac) = 0x0;
    (param_1 + 0xae) = 0x0;
    if(globals.ptr_1050_5b7c == 0x0)
    {
        globals.ptr_1050_5b7c = param_1;
    }
    pass1_1000_4906(param_1, 0x0, 0xac);
    unk_draw_op_1008_80ee(str_var1(param_2, local_5c), param_2);
    unk_win_ui_op_1040_9854(str_var1(param_2, &local_b6), param_2);
    local_b6  = addr_table_1008_380a[36]; // 0x389a
    uStack180 = SEG_1008;
    pass1_1008_8168(str_var1(param_2, local_5c));
    return param_1;
}


u16  pass1_1038_8966(param_1: u32, param_2: u16, param_3: u16, param_4: i16, param_5: HWND16)

{
    let mut pi_var1: *mut i16;
    let mut bVar2: bool;
    let mut iVar3: i16;
    let mut uVar4: u16;

    bVar2 = false;
    iVar3 = param_1;
    uVar4 = (param_1 >> 0x10);
    if(param_4 == 0x0)
    {
        if((iVar3 + 0x98) < 0x1)
            goto LAB_1038_89af;
        pi_var1  = (iVar3 + 0x9a);
        *pi_var1 = *pi_var1 + 0x1;
        pi_var1  = (iVar3 + 0x98);
        *pi_var1 = *pi_var1 + -0x1;
    }
    else
    {
        if(param_4 != 0x1)
            goto LAB_1038_89af;
        if((iVar3 + 0x9a) < 0x1)
            goto LAB_1038_89af;
        pi_var1  = (iVar3 + 0x9a);
        *pi_var1 = *pi_var1 + -0x1;
        pi_var1  = (iVar3 + 0x98);
        *pi_var1 = *pi_var1 + 0x1;
    }
    bVar2 = true;
// LAB_1038_89af:
    if(bVar2)
    {
        SetDlgItemInt16(param_5, 0x0, (iVar3 + 0x9a), s_dibtext_bmp_1050_1844 + 0x9);
        SetDlgItemInt16(LAST_SEGMENT, 0x0, (iVar3 + 0x98), s_dibtext_bmp_1050_1844 + 0xb);
    }
    return 0x0;
}


void  pass1_1038_89e8(param_1: u32, param_2: u16)

{
    send_dlg_item_msg_1038_8b58(param_1, param_2);
    return;
}


void  pass1_1038_89f8(param_1: i16, param_2: u16, param_3: u16, param_4: u32, param_5: *mut u8, param_6: u16)

{
    if(param_4 == 0xeb)
    {
        send_dlg_item_msg_1038_8b58(str_var1(param_2, param_1), param_6);
    }
    else
    {
        if(param_4 != s_vrpal_bmp_1050_183a + 0x7)
        {
            pass1_1040_b54a(param_1, param_2, param_3, param_4, param_5, SEG_1040, param_6);
            return;
        }
        msg_box_ui_op_1038_8a3a(str_var1(param_2, param_1), 0x0, param_5, param_6);
    }
    return;
}


void  msg_box_ui_op_1038_8a3a(param_1: u32, char *param_2, param_3: *mut u8, param_4: u16)

{
    char  local_20a[0x102];
    let mut pcStack264: *mut c_char;
    let mut puStack262: *mut u8;
    char  local_104[0x102];

    mem_op_1000_179c(SEG_1000, param_3, 0);
    pcStack264 = param_2;
    puStack262 = param_3;
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, param_2, (short)param_3);
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(puStack262, pcStack264), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(puStack262, pcStack264), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x101, local_20a, param_4);
    MessageBox16(SEG_1010, 0x0, local_20a, param_4);
    fn_ptr_1000_17ce(str_var1(puStack262, pcStack264), SEG_1000);
    return;
}


void  unk_win_ui_op_1038_8afe(param_1: *mut Struct50, param_2: HWND16, BOOL16 param_3)

{
    let mut uVar1: u32;
    let mut dlg_item: u16;
    let mut in_DX: u16;
    let mut iVar4: *mut Struct50;
    let mut uVar4: *mut Struct50;
    let mut local_4: BOOL16;

    uVar4    = (param_1 >> 0x10);
    iVar4    = param_1;
    dlg_item = GetDlgItemInt16(param_2, 0x0, &local_4, param_3);
    pass1_1030_6c1a(iVar4.field_0x94, dlg_item);
    uVar1 = iVar4.field_0x94;
    pass1_1038_387e(*(uVar1 + 0x2e), dlg_item, iVar4.field_9c, iVar4.field_0x94, in_DX);
    return;
}


void  send_dlg_item_msg_1038_8b58(param_1: u32, param_2: u16)

{
    let mut uVar1: u32;
    let mut u_var2: u32;
    let mut in_DX: *mut u8;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut iVar5: i16;
    let mut unaff_DI: i16;
    let mut uVar6: u16;
    let mut in_AF: u8;
    LRESULT    LVar7;
    let mut local_106: [u8;100] = [0;100];
    let mut pu_stack6: *mut u16;

    pu_stack6 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x3, param_2, in_DX, unaff_DI);
    uVar3    = (pu_stack6 >> 0x10);
    uVar6    = (param_1 >> 0x10);
    iVar5    = param_1;
    pass1_1010_c3c2(pu_stack6, uVar3,
                    str_var1(param_2, local_106), *(iVar5 + 0x94), uVar3, in_AF, param_2);
    LVar7          = SendDlgItemMessage16(SEG_1010, local_106, param_2, 0x0, 0x1846000c);
    uVar4          = (LVar7 >> 0x10);
    uVar1          = (iVar5 + 0x94);
    (iVar5 + 0x9c) = (uVar1 + 0x32);
    (iVar5 + 0x9a) = (iVar5 + 0x9c);
    SetDlgItemInt16(LAST_SEGMENT, 0x0, (iVar5 + 0x9c), s_dibtext_bmp_1050_1844 + 0x9);
    uVar1 = (iVar5 + 0x94);
    u_var2 = *(uVar1 + 0x2e);
    pass1_1038_3aa6(u_var2, u_var2, uVar4);
    (iVar5 + 0x98) = u_var2;
    SetDlgItemInt16(LAST_SEGMENT, 0x0, u_var2, s_dibtext_bmp_1050_1844 + 0xb);
    return;
}


void  pass1_1038_8d98(param_1: i16, param_2: u16, param_3: u16, param_4: u32, param_5: *mut u8, param_6: u16, param_7: u16)

{
    if(param_4 == 0xeb)
    {
        send_dlg_item_msg_1038_8f74(str_var1(param_2, param_1), param_6, param_7);
    }
    else
    {
        if(param_4 != s_vrpal_bmp_1050_183a + 0x7)
        {
            pass1_1040_b54a(param_1, param_2, param_3, param_4, param_5, SEG_1040, param_7);
            return;
        }
        msg_box_op_1038_8dda(str_var1(param_2, param_1), 0x0, param_5, param_7);
    }
    return;
}


void  msg_box_op_1038_8dda(param_1: u32, char *param_2, param_3: *mut u8, param_4: u16)

{
    char local_206[0x102];
    char local_104[0x102];

    mem_op_1000_179c(SEG_1000, param_3, 0);
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x100, local_206, param_4);
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, param_2, (short)param_3);
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    MessageBox16(SEG_1000, 0x0, local_206, param_4);
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, param_2, (short)param_3);
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    MessageBox16(SEG_1000, 0x0, local_206, param_4);
    fn_ptr_1000_17ce(str_var1(param_3, param_2), SEG_1000);
    return;
}


LRESULT  send_dlg_item_msg_1038_8f74(param_1: u32, param_2: HWND16, WORD *param_3)

{
    let mut iVar1: i16;
    let mut u_var2: u16;
    long       lVar3;
    LRESULT    LVar4;
    let mut enable: BOOL16;
    CHAR       local_50c[0x100];
    let mut local_40c: [u8;8] = [0;8];
    let mut local_404: u32;

    u_var2 = (param_1 >> 0x10);
    SendDlgItemMessage16(param_2, 0x0, 0x0, 0x0, 0x185b000b);
    SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x185b0405);
    iVar1 = pass1_1008_c83a(*(param_1 + 0x94));
    if(iVar1 == 0x0)
    {
        local_404 = pass1_1008_c85e(*(param_1 + 0x94), param_3);
        pass1_1008_5784(str_var1(param_3, local_40c), local_404);
        while(true)
        {
            lVar3 = pass1_1008_5b12(local_40c, param_3);
            if(lVar3 == 0x0)
                break;
            wsprintf16(SEG_1008, local_50c, param_3);
            SendDlgItemMessage16(LAST_SEGMENT, local_50c, param_3, 0x0, 0x185b0401);
        }
        GetDlgItem16(SEG_1008, 0x1);
        enable = 0x1;
    }
    else
    {
        load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, &local_404, (short)param_3);
        SendDlgItemMessage16(SEG_1010, &local_404, param_3, 0x0, 0x185b0401);
        GetDlgItem16(LAST_SEGMENT, 0x1);
        enable = 0x0;
    }
    EnableWindow16(LAST_SEGMENT, enable);
    LVar4 = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x1, 0x185b000b);
    return LVar4;
}


void  win_dlg_op_1038_9294(param_1: *mut Struct1, param_2: u16)

{
    let mut UVar1: u16;
    let mut u_var2: u16;
    let mut in_DX: u16;
    let mut uVar3: u16;
    WNDCLASS16 *unaff_SS;
    let mut local_6: BOOL16;
    let mut local_4: BOOL16;

    unk_win_ui_op_1040_b230(param_1, SEG_1040, unaff_SS);
    uVar3            = (param_1 >> 0x10);
    UVar1            = GetDlgItemInt16(SEG_1040, 0x1, &local_4, unaff_SS);
    (param_1 + 0x94) = UVar1;
    u_var2            = GetDlgItemInt16(LAST_SEGMENT, 0x1, &local_6, unaff_SS);
    (param_1 + 0x96) = u_var2;
    win_ui_dlg_op_1038_98b4((param_1 & 0xffff | uVar3 << 0x10), LAST_SEGMENT, unaff_SS);
    win_1008_5c7c(NULL, _PTR_LOOP_1050_02a0, 0x950001, unaff_SS, u_var2);
    return;
}


BOOL16  send_dlg_item_int_1038_94da(param_1: i16, param_2: u16, param_3: u16, param_4: u16, param_5: i16, param_6: HWND16, BOOL16 param_7)

{
    let mut pUVar1: *mut u16;
    let mut iVar2: i16;
    long   lVar3;
    let mut local_c: BOOL16;
    let mut uStack10: u16;
    let mut iStack8: i16;
    let mut u_stack6: u16;
    let mut iStack4: i16;

    iStack4 = 0x1;
    iStack8 = pass1_1038_993a(param_1, param_2, param_3);
    if((-0x1 < iStack8) && (u_stack6 = GetDlgItemInt16(param_6, 0x1, &local_c, param_7), local_c != 0x0))
    {
        if(param_5 == 0x0)
        {
            u_stack6 = u_stack6 + 0x1;
        }
        else
        {
            iStack4 = -0x1;
            u_stack6 = u_stack6 - 0x1;
        }
        uStack10 = (u_stack6 <= (iStack8 * 0xe + 0x5a7a));
        pUVar1   = (iStack8 * 0xe + 0x5a78);
        if(*pUVar1 != u_stack6 && u_stack6 <= *pUVar1)
        {
            uStack10 = 0x0;
        }
        iVar2 = iStack8 * 0xe;
        GetDlgItem16(LAST_SEGMENT, (iVar2 + 0x5a72));
        SetFocus16(LAST_SEGMENT);
        if((uStack10 != 0x0) && (lVar3 = unk_win_ui_op_1038_9820(str_var1(param_2, param_1), 0x1, iStack4, LAST_SEGMENT, param_7), lVar3 != 0x0))
        {
            SetDlgItemInt16(LAST_SEGMENT, 0x1, u_stack6, *(BOOL16 *)(iVar2 + 0x5a72));
            SetDlgItemInt16(LAST_SEGMENT, 0x1, (param_1 + 0x94), 0xfa9);
            SetDlgItemInt16(LAST_SEGMENT, 0x1, (param_1 + 0x96), 0xfa8);
        }
    }
    return 0x1;
}


void  enable_win_1038_9a66(param_1: u16, param_2: u16, in_b_enable_3: u16, param_4: u32, in_hwnd_5: HWND16)

{
    let mut in_DX: *mut u8;
    let mut unaff_SS: u16;

    if(param_4 == 0xf8)
    {
        GetDlgItem16(in_hwnd_5, 0x17d9);
        in_b_enable_3 = 0x1;
    }
    else
    {
        if(param_4 != 0x17d9)
        {
            pass1_1040_b54a(param_1, param_2, in_b_enable_3, param_4, in_DX, SEG_1040, unaff_SS);
            return;
        }
        SetWindowPos16(in_hwnd_5, 0x6, 0x1a0, 0x12c, 0x0, 0x0, 0x0);
    }
    EnableWindow16(LAST_SEGMENT, in_b_enable_3);
    return;
}


void  unk_win_ui_op_1038_9bc8(param_1: *mut Struct1)

{
    let mut pi_var1: *mut i16;
    let mut ppcVar2: *mut *mut c_void;
    let mut iVar3: i16;
    let mut IVar4: u16;
    let mut hdc: HDC16;
    let mut iVar5: i16;
    let mut HVar6: HWND16;
    let mut in_DX: *mut u8;
    let mut puVar7: *mut u8;
    let mut iVar8: i16;
    let mut unaff_DI: i16;
    let mut uVar9: u16;
    let mut unaff_SS: u16;
    let mut puVar10: *mut u16;
    let mut uVar12: u16;
    let mut uVar11: u32;
    let mut puVar13: *mut u16;
    let mut iStack36: i16;
    let mut local_16: RECT16;
    let mut iStack16: i16;
    let mut iStack14: i16;
    let mut iStack12: i16;
    let mut uStack10: u32;
    let mut local_6: i16;
    let mut local_4: i16;

    dialog_ui_fn_1040_78e2(param_1, SEG_1040);
    if(globals.PTR_LOOP_1050_5ef8 == (&DAT_1050_0004 + 0x1))
    {
        globals.PTR_LOOP_1050_5ef8 = 0x0;
    }
    puVar13  = str_var1(unaff_SS, &local_4);
    puVar10  = str_var1(unaff_SS, &local_6);
    uStack10 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x48, unaff_SS, in_DX, unaff_DI);
    pass1_1008_3e94((uStack10 & 0xffff0000 | (uStack10 + 0xe)), puVar10, puVar13);
    IVar4              = GetSystemMetrics16(SEG_1008);
    puVar7             = (((long)IVar4 * (long)PTR_LOOP_1050_5ef8) >> 0x10);
    iStack12           = ((long)IVar4 * (long)PTR_LOOP_1050_5ef8) + 0xa;
    globals.PTR_LOOP_1050_5ef8 = globals.PTR_LOOP_1050_5ef8 + 0x1;
    iStack14           = iStack12 + local_6;
    iStack12           = iStack12 + local_4;
    uVar9              = (param_1 >> 0x10);
    iVar8              = param_1;
    GetWindowRect16(LAST_SEGMENT, &local_16);
    uVar12 = 0x0;
    hdc    = GetDC16(LAST_SEGMENT);
    IVar4  = GetDeviceCaps16(LAST_SEGMENT, 0xa);
    ReleaseDC16(LAST_SEGMENT, hdc);
    if(IVar4 < iStack16)
    {
        iStack14 = (local_16.y - (iStack16 - IVar4)) + 0x1;
    }
    uVar11 = str_var1(uVar12, (iVar8 + 0x6));
    SetWindowPos16(LAST_SEGMENT, 0x1, 0x0, 0x0, iStack14, iStack12, 0x0);
    puVar10  = mixed_1010_20ba(globals.dat_1050_0ed0, 0x3, unaff_SS, puVar7, unaff_DI);
    iVar5    = puVar10 + 0xa4;
    uVar12   = (puVar10 >> 0x10);
    iStack36 = 0x0;
    HVar6    = SEG_1010;
    while(iVar3 = iStack36 * 0x2, (iVar3 + iVar5) != 0x0)
    {
        HVar6                             = GetDlgItem16(HVar6, (iVar3 + iVar5));
        *(HWND16 *)(iVar8 + iVar3 + 0x94) = HVar6;
        iStack36                          = iStack36 + 0x1;
        pi_var1                            = (iVar8 + 0x128);
        *pi_var1                           = *pi_var1 + 0x1;
        HVar6                             = LAST_SEGMENT;
    }
    ppcVar2 = (param_1.field_0x0 + 0x6c);
    (**ppcVar2)(HVar6, iVar8, uVar9, uVar11);
    return;
}


void  destroy_window_1038_7d88(param_1: u32, param_2: u16)

{
    let mut in_DX: u16;

    pass1_1008_b544(*(param_1 + 0x94), param_2, in_DX, SEG_1008);
    DestroyWindow16(SEG_1008);
    return;
}


LRESULT  pass1_1038_7dac(param_1: u32, param_2: u16)

{
    LRESULT LVar1;

    pass1_1040_78de(param_1);
    LVar1 = send_dlg_item_msg_1038_844a(param_1, SEG_1040, param_2);
    return LVar1;
}


void  pass1_1038_7dc6(param_1: i16, param_2: u16, param_3: u16, param_4: u32, param_5: *mut u8, param_6: u16, param_7: u16, param_8: u16)

{
    let mut bVar1: bool;

    bVar1 = false;
    if(param_4 == 0x1854)
    {
        if(param_4 != 0x1)
            goto LAB_1038_7e8c;
        send_dlg_item_msg_1038_8618(str_var1(param_2, param_1), param_8);
    }
    else
    {
        if(param_4 < 0x18550000)
        {
            if(param_4 == 0xeb)
            {
                send_dlg_item_msg_1038_844a(str_var1(param_2, param_1), param_7, param_8);
            }
            else
            {
                if(param_4 == 0xfb)
                {
                    send_dlg_item_msg_1038_7eac(str_var1(param_2, param_1));
                }
                else
                {
                    if(param_4 != s_vrpal_bmp_1050_183a + 0x7)
                    {
                    // LAB_1038_7e77:
                        pass1_1040_b54a(param_1, param_2, param_3, param_4, param_5, SEG_1040, param_8);
                        return;
                    }
                    msg_box_op_1038_81be(
                      str_var1(param_2, param_1), 0x0, param_5, param_8);
                }
            }
            goto LAB_1038_7e8c;
        }
        if(param_4 == 0x1855)
        {
            if(param_4 != 0x1)
                goto LAB_1038_7e8c;
            send_dlg_item_msg_1038_87b2(str_var1(param_2, param_1), param_7, param_8);
        }
        else
        {
            if(param_4 == 0x1856)
            {
                if(param_4 != 0x1)
                    goto LAB_1038_7e8c;
                pass1_1038_8810(str_var1(param_2, param_1), param_7, param_8);
            }
            else
            {
                if(param_4 == 0x1858)
                {
                    send_dlg_item_msg_1038_7fae(str_var1(param_2, param_1));
                }
                else
                {
                    if(param_4 != 0x1859)
                        goto LAB_1038_7e77;
                    pass1_1038_801a(
                      str_var1(param_2, param_1), param_5, param_6, param_8);
                }
            }
        }
    }
    bVar1 = true;
// LAB_1038_7e8c:
    if(bVar1)
    {
        set_win_text_1038_8358(str_var1(param_2, param_1), param_7, param_8);
        enable_win_1038_806a(str_var1(param_2, param_1), param_7);
    }
    return;
}


LRESULT  send_dlg_item_msg_1038_7eac(param_1: u32)

{
    let mut in_DX: *mut u8;
    let mut unaff_DI: i16;
    let mut unaff_SS: u16;
    let mut puVar1: *mut u16;
    let mut pcVar2: *mut c_char;
    LRESULT LVar3;

    puVar1 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x30, unaff_SS, in_DX, unaff_DI);
    pcVar2 = pass1_1010_375e(puVar1);
    pass1_1008_b1a6(*(param_1 + 0x94), pcVar2);
    SendDlgItemMessage16(SEG_1008, 0x0, 0x0, 0x0, 0x1854000b);
    LVar3 = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x18540409);
    if(LVar3 != -0x1)
    {
        SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, (WPARAM16)LVar3, 0x18540403);
        SendDlgItemMessage16(LAST_SEGMENT, pcVar2, (pcVar2 >> 0x10), 0x0, 0x18540401);
        SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0xffff, 0x18540407);
        SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x18550405);
        SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x18560405);
        enable_win_1038_806a(param_1, LAST_SEGMENT);
    }
    LVar3 = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x1, 0x1854000b);
    return LVar3;
}


void  send_dlg_item_msg_1038_7fae(param_1: u32)

{
    let mut in_AX: u16;
    let mut in_DX: u16;
    let mut iVar1: i16;
    let mut u_var2: u16;
    let mut unaff_SS: u16;
    LRESULT LVar3;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    pass1_1008_b146(*(iVar1 + 0x94), in_AX, in_DX);
    SendDlgItemMessage16(SEG_1008, 0x0, 0x0, 0xffff, 0x18550407);
    LVar3 = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0xffff, 0x18560407);
    pass1_1008_b61a(*(iVar1 + 0x94), 0x0, LVar3, (LVar3 >> 0x10), unaff_SS);
    pass1_1008_b63a(*(iVar1 + 0x94), 0x0);
    return;
}


void  enable_win_1038_806a(param_1: u32, param_2: HWND16)

{
    let mut BVar1: BOOL16;
    let mut in_DX: u16;
    let mut iVar2: i16;
    let mut uVar3: u16;
    let mut hwnd_dlg: HWND16;
    let mut uVar4: u32;
    let mut uVar5: u32;
    let mut uVar6: u32;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    GetDlgItem16(param_2, 0x1);
    EnableWindow16(LAST_SEGMENT, 0x0);
    GetDlgItem16(LAST_SEGMENT, 0x1858);
    EnableWindow16(LAST_SEGMENT, 0x0);
    GetDlgItem16(LAST_SEGMENT, 0x1859);
    BVar1 = EnableWindow16(LAST_SEGMENT, 0x0);
    uVar4 = pass1_1008_b820(*(iVar2 + 0x94), BVar1, in_DX);
    if(uVar4 != 0x0)
    {
        uVar4    = pass1_1008_b340(*(iVar2 + 0x94));
        uVar5    = pass1_1008_b366(*(iVar2 + 0x94));
        hwnd_dlg = SEG_1008;
        uVar6    = pass1_1008_b47a(*(iVar2 + 0x94));
        if(((uVar4 != 0x0) && (uVar5 != 0x0)) && (uVar6 != 0x0))
        {
            GetDlgItem16(SEG_1008, 0x1);
            EnableWindow16(LAST_SEGMENT, 0x1);
            GetDlgItem16(LAST_SEGMENT, 0x1858);
            hwnd_dlg = LAST_SEGMENT;
            EnableWindow16(LAST_SEGMENT, 0x1);
        }
        if(uVar4 != 0x0)
        {
            GetDlgItem16(hwnd_dlg, 0x1859);
            EnableWindow16(LAST_SEGMENT, 0x1);
        }
    }
    return;
}


u16  send_dlg_item_msg_1038_8164(param_1: u16, param_2: u16, param_3: *mut u8, param_4: u16, param_5: HWND16)

{
    LRESULT LVar1;

    *param_3 = '\0';
    LVar1    = SendDlgItemMessage16(param_5, 0x0, 0x0, 0x0, str_var1(param_4, 0x409));
    if((LVar1 != -0x1) && (LVar1 = SendDlgItemMessage16(LAST_SEGMENT, param_3, (param_3 >> 0x10), (WPARAM16)LVar1,
                                        str_var1(param_4, 0x40a)), LVar1 != -0x1))
    {
        return 0x1;
    }
    return 0x0;
}


void  msg_box_op_1038_81be(param_1: u32, char *param_2, param_3: *mut u8, param_4: u16)

{
    char local_206[0x102];
    char local_104[0x102];

    mem_op_1000_179c(SEG_1000, param_3, 0);
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_206, param_4);
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, param_2, (short)param_3);
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    MessageBox16(SEG_1000, 0x0, local_206, param_4);
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, param_2, (short)param_3);
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x3ff, local_104, param_4);
    pass1_1000_3cea(str_var1(param_3, param_2), str_var1(param_4, local_104));
    MessageBox16(SEG_1000, 0x0, local_206, param_4);
    fn_ptr_1000_17ce(str_var1(param_3, param_2), SEG_1000);
    return;
}


void  set_win_text_1038_8358(param_1: u32, param_2: HWND16, param_3: u16)

{
    let mut lp_string: *mut c_char;
    let mut u_var2: u16;
    let mut in_DX: u16;
    let mut uVar4: u16;
    let mut uVar3: u16;
    let mut hwnd: HWND16;
    char       local_30a[0x102];
    CHAR       local_208[0x100];
    let mut local_108: [u8;100] = [0;100];
    let mut uStack8: u32;
    let mut HStack4: HWND16;
    let mut uVar1: u32;

    uVar3   = (param_1 >> 0x10);
    uVar4   = param_1;
    HStack4 = GetDlgItem16(param_2, 0x1857);
    uStack8 = pass1_1008_b820(*(uVar4 + 0x94), HStack4, in_DX);
    if(uStack8 == 0x0)
    {
        hwnd = SEG_1010;
        load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x100, local_30a, param_3);
        lp_string = local_30a;
    }
    else
    {
        u_var2 = send_dlg_item_msg_1038_8164(uVar4, uVar3, str_var1(param_3, local_108), 0x1854, SEG_1008);
        if(u_var2 == 0x0)
        {
            hwnd = SEG_1010;
            load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x100, local_208, param_3);
        }
        else
        {
            hwnd = SEG_1008;
            load_string_1008_b65a(*(uVar4 + 0x94), local_208, str_var1(local_108, param_3), param_3);
        }
        lp_string = local_208;
    }
    SetWindowText16(hwnd, (SEGPTR)lp_string);
    return;
}


void  send_dlg_item_msg_1038_8400(param_1: u16, param_2: u16, param_3: u32, param_4: u16, param_5: u16)

{
    let mut uVar1: u32;
    long       lVar2;
    let mut local_a: [u8;8] = [0;8];

    pass1_1008_5784(str_var1(param_5, local_a), param_3);
    while(true)
    {
        lVar2 = pass1_1008_5b12(local_a, param_5);
        if(lVar2 == 0x0)
            break;
        uVar1 = (lVar2 + 0x4);
        SendDlgItemMessage16(SEG_1008, uVar1, (uVar1 >> 0x10), 0x0, str_var1(param_4, 0x401));
    }
    return;
}


LRESULT  send_dlg_item_msg_1038_844a(param_1: u32, param_2: HWND16, param_3: u16)

{
    let mut BVar1: BOOL16;
    let mut u_var2: u16;
    let mut uVar3: u16;
    LRESULT    LVar4;
    char       local_108[0x102];
    let mut u_stack6: u32;

    uVar3 = (param_1 >> 0x10);
    SendDlgItemMessage16(param_2, 0x0, 0x0, 0x0, 0x1854000b);
    SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x1855000b);
    SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x1856000b);
    SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x18540405);
    SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x18550405);
    LVar4   = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x18560405);
    u_stack6 = pass1_1008_b820(*(param_1 + 0x94), LVar4, (LVar4 >> 0x10));
    if(u_stack6 == 0x0)
    {
        load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x100, local_108, param_3);
        SendDlgItemMessage16(SEG_1010, local_108, param_3, 0x0, 0x18540401);
        SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x1, 0x1854000b);
        SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x1, 0x1855000b);
        LVar4 = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x1, 0x1856000b);
        u_var2 = (LVar4 >> 0x10);
        GetDlgItem16(LAST_SEGMENT, 0x1857);
        load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10,NULL), 0x100, local_108, param_3);
        BVar1 = SetWindowText16(SEG_1010, (SEGPTR)local_108);
        return str_var1(u_var2, BVar1);
    }
    send_dlg_item_msg_1038_8400(param_1, uVar3, u_stack6, 0x1854, param_3);
    set_win_text_1038_8358(param_1, SEG_1008, param_3);
    SendDlgItemMessage16(SEG_1008, 0x0, 0x0, 0x1, 0x1854000b);
    SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x1, 0x1855000b);
    LVar4 = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x1, 0x1856000b);
    return LVar4;
}


u16  send_dlg_item_msg_1038_8618(param_1: u32, param_2: u16)

{
    let mut in_AX: i16;
    let mut uVar1: u16;
    let mut pu_var2: *mut u8;
    let mut in_DX: u16;
    let mut puVar3: *mut u8;
    let mut msg: u16;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut hwnd: HWND16;
    LRESULT    LVar6;
    let mut uVar7: u32;
    let mut uVar8: u32;
    let mut local_106: [u8;100] = [0;100];
    let mut u_stack6: u32;

    uVar5   = (param_1 >> 0x10);
    uVar4   = param_1;
    u_stack6 = pass1_1008_b820(*(uVar4 + 0x94), in_AX, in_DX);
    uVar1   = u_stack6;
    if(u_stack6 != 0x0)
    {
        uVar1 = send_dlg_item_msg_1038_8164(uVar4, uVar5, str_var1(param_2, local_106), 0x1854, SEG_1008);
        if(uVar1 != 0x0)
        {
            SendDlgItemMessage16(SEG_1008, 0x0, 0x0, 0x0, 0x1855000b);
            SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x1856000b);
            SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x18550405);
            LVar6  = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0, 0x18560405);
            puVar3 = (LVar6 >> 0x10);
            pu_var2 = local_106;
            pass1_1008_b4a0(*(uVar4 + 0x94), str_var1(param_2, pu_var2), pu_var2, puVar3, param_2);
            pass1_1008_b200(*(uVar4 + 0x94), param_2);
            uVar8 = str_var1(puVar3 | pu_var2, pu_var2);
            if((puVar3 | pu_var2) != 0x0)
            {
                send_dlg_item_msg_1038_8400(uVar4, uVar5, str_var1(puVar3, pu_var2), 0x1855, param_2);
                uVar7 = pass1_1008_b366(*(uVar4 + 0x94));
                msg   = (uVar7 >> 0x10);
                uVar8 = uVar7 & 0xffff | (msg | uVar7) << 0x10;
                if(uVar7 != 0x0)
                {
                    uVar8 = SendDlgItemMessage16(SEG_1008, uVar7, msg, 0xffff, 0x1855040d);
                }
            }
            hwnd  = SEG_1008;
            uVar8 = pass1_1008_b38c(*(uVar4 + 0x94), uVar8, (uVar8 >> 0x10));
            if(uVar8 != 0x0)
            {
                send_dlg_item_msg_1038_8400(uVar4, uVar5, uVar8, 0x1856, param_2);
                hwnd  = SEG_1008;
                uVar8 = pass1_1008_b47a(*(uVar4 + 0x94));
                if(uVar8 != 0x0)
                {
                    hwnd = LAST_SEGMENT;
                    SendDlgItemMessage16(SEG_1008, uVar8, (uVar8 >> 0x10), 0xffff, 0x1856040d);
                }
            }
            SendDlgItemMessage16(hwnd, 0x0, 0x0, 0x1, 0x1855000b);
            LVar6 = SendDlgItemMessage16(LAST_SEGMENT, 0x0, 0x0, 0x1, 0x1856000b);
            uVar1 = LVar6;
        }
    }
    return uVar1;
}


u16  send_dlg_item_msg_1038_87b2(param_1: u32, param_2: u16, param_3: u16)

{
    let mut uVar1: u16;
    let mut u_var2: u16;
    let mut in_DX: u16;
    let mut uVar3: u32;
    LRESULT    LVar4;
    let mut uVar5: u16;
    let mut local_102: [u8;100] = [0;100];

    uVar5 = param_1;
    uVar1 = (param_1 >> 0x10);
    u_var2 = send_dlg_item_msg_1038_8164(uVar5, uVar1, str_var1(param_3, local_102), 0x1855, param_2);
    if(u_var2 != 0x0)
    {
        pass1_1008_b61a(*(uVar5 + 0x94), str_var1(param_3, local_102), local_102, in_DX, param_3);
        uVar3 = (uVar5 + 0x94);
        uVar3 = load_string_1008_b1f0(uVar3);
        LVar4 = SendDlgItemMessage16(SEG_1008, uVar3, (uVar3 >> 0x10), 0xffff, 0x1856040d);
        u_var2 = LVar4;
    }
    return u_var2;
}


void  pass1_1038_8810(param_1: u32, param_2: u16, param_3: u16)

{
    let mut uVar1: u16;
    let mut u_var2: u16;
    let mut local_102: [u8;100] = [0;100];

    u_var2 = (param_1 >> 0x10);
    uVar1 = send_dlg_item_msg_1038_8164(param_1, u_var2, str_var1(param_3, local_102), 0x1856, param_2);
    if(uVar1 != 0x0)
    {
        pass1_1008_b63a(*(param_1 + 0x94), str_var1(param_3, local_102));
    }
    return;
}

void  pass1_1020_de32(param_1: u32, param_2: u16, param_3: *mut u8, param_4: i16, param_5: u16)

{
    let mut BVar1: BOOL16;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut puVar5: *mut u16;

    puVar5          = mixed_1010_20ba(globals.dat_1050_0ed0, 0x5, param_5, param_3, param_4);
    u_var2           = (puVar5 >> 0x10);
    (puVar5 + 0x12) = param_2;
    uVar3           = u_var2;
    BVar1           = bring_win_to_top_1038_b72e(globals.ptr_1050_5b7c, 0x4, SEG_1038);
    if(BVar1 == 0x0)
    {
        pass1_1038_af40(globals.ptr_1050_5b7c, (globals._PTR_LOOP_1050_4230 + 0x16), 0x4, uVar3, globals._PTR_LOOP_1050_4230, SEG_1038, param_5);
    }
    globals.PTR_LOOP_1050_5b80 = (&PTR_LOOP_1050_0000 + 0x1);
    unk_win_msg_op_1008_9510(&PTR_LOOP_1050_5b80, SEG_1008, param_5);
    uVar4            = (param_1 >> 0x10);
    (param_1 + 0x24) = (puVar5 + 0xa);
    if((param_1 + 0x24) == 0x0)
    {
        globals.PTR_LOOP_1050_50ca = 0x6b2;
    }
    return;
}

Struct29 * pass1_1018_d198(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d1be(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d1e4(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d20a(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d230(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d256(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d27c(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d2a2(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d2c8(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d2ee(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d314(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d33a(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d360(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d386(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct29 * pass1_1018_d3ac(param_1: *mut Struct29, param_2: u8)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1020_8bcc(param_1: *mut Struct285, param_2: u16)

{
    let mut uVar1: u32;
    let mut pu_var2: *mut u32;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut puVar5: *mut u16;
    let mut puVar6: *mut u8;
    let mut uVar7: u16;
    let mut extraout_DX: u16;
    let mut iVar9: *mut Struct285;
    let mut iVar10: *mut Struct286;
    let mut uVar8: u16;
    let mut uVar9: u16;
    struct Struct43 *paVar10;
    let mut local_58: [u8;1e] = [0;1e];
    let mut local_3a: [u8;26] = [0;26];
    let mut uStack20: u32;
    let mut uStack12: u16;
    let mut paStack10: *mut Struct76;
    let mut u_stack6: u32;

    uVar8 = (param_1 >> 0x10);
    iVar9 = param_1;
    if(iVar9.field_0x4 != 0x0)
    {
        uVar1     = iVar9.field_0x22;
        u_stack6   = *(uVar1 + 0xa);
        paStack10 = pass1_1018_268e(iVar9.field_0x22);
        uVar9     = (paStack10 >> 0x10);
        uVar1     = iVar9.field_0x22;
        uStack12  = (uVar1 + 0x16);
        if(*iVar9.field_0xc == 0x0)
        {
            uStack20 = pass1_1008_4772(paStack10);
            puVar6   = (uStack20 >> 0x10);
            uVar3 = uStack20;
            mem_op_1000_179c(0x14, puVar6, 0);
            uVar7 = puVar6 | uVar3;
            if(uVar7 == 0x0)
            {
                *iVar9.field_0xc = 0x0;
            }
            else
            {
                puVar5 = (param_1 & 0xffff0000 | &iVar9.field_0x16);
                uVar9  = (uStack20 >> 0x10);
                pass1_1008_50c2(str_var1(puVar6, uVar3), *(uStack20 + 0x8), *(uStack20 + 0x4), puVar5, u_stack6);
                pu_var2         = iVar9.field_0xc;
                pu_var2         = puVar5;
                (pu_var2 + 0x2) = uVar7;
            }
            pass1_1008_5134(*iVar9.field_0xc);
            paVar10 = unk_io_op_1010_830a(globals.dat_1050_14cc, 0x2, param_2);
            struct_op_1008_48fe(str_var1(param_2, local_3a), 0x1, paVar10, (paVar10 >> 0x10));
            struct_op_1008_3f92(str_var1(param_2, local_58), str_var1(param_2, local_3a));
            uStack20 = pass1_1008_4772(str_var1(param_2, local_58));
            puVar6   = (uStack20 >> 0x10);
            uVar3 = uStack20;
            mem_op_1000_179c(0x14, puVar6, 0);
            uVar7 = puVar6 | uVar3;
            if(uVar7 == 0x0)
            {
                pu_var2         = iVar9.field_0xc;
                (pu_var2 + 0x4) = 0x0;
            }
            else
            {
                uVar4 = &iVar9.field_0x16;
                uVar9 = (uStack20 >> 0x10);
                pass1_1008_50c2(str_var1(puVar6, uVar3), *(uStack20 + 0x8), *(uStack20 + 0x4), (param_1 & 0xffff0000 | uVar4), u_stack6);
                pu_var2            = iVar9.field_0xc;
                uVar9             = (pu_var2 >> 0x10);
                iVar10            = pu_var2;
                iVar10.field_0x4 = uVar4;
                iVar10.field_0x6 = uVar7;
            }
            pu_var2 = iVar9.field_0xc;
            pass1_1008_5134(*(pu_var2 + 0x4));
            pass1_1008_41bc(str_var1(param_2, local_58));
            close_file_1008_496c(local_3a, param_2);
            uVar9 = extraout_DX;
        }
        pu_var2 = iVar9.field_0xc;
        pass1_1008_5236(*(pu_var2 + 0x4));
        pass1_1008_5236(*iVar9.field_0xc);
        uVar3 = &iVar9.field_0x16;
        pass1_1008_4480(u_stack6, (param_1 & 0xffff0000 | uVar3), paStack10, param_2);
        invalidate_rect_1020_8d90(param_1, uStack12, u_stack6, uVar3, uVar9, param_2);
    }
    return;
}

void  invalidate_rect_1020_8d90(param_1: u32, param_2: u16, param_3: u32, param_4: u16, param_5: u16, param_6: u16)

{
    let mut uVar1: u32;
    let mut iVar2: i16;
    let mut uVar3: u16;
    let mut in_AF: u8;
    let mut local_48: i16;
    let mut iStack70: i16;
    let mut iStack68: i16;
    let mut iStack66: i16;
    let mut local_40: i16;
    let mut local_3e: i16;
    let mut u_stack60: u32;
    let mut local_38: [u8;28] = [0;28];
    let mut local_10: [u8;a] = [0;a];
    let mut u_stack6: u16;
    let mut uStack4: u16;

    uVar3   = (param_1 >> 0x10);
    iVar2   = param_1;
    u_stack6 = pass1_1018_266a(*(iVar2 + 0x22));
    if(u_stack6 != 0x0)
    {
        pass1_1018_265c((iVar2 + 0x22));
        if((param_5 | u_stack6) != 0x0)
        {
            uStack4 = param_5;
            sys_1000_3f9c(local_10,
                          param_6,
                          s__03ld_1050_442a,
                          u_stack6,
                          &stack0xfffe,
                          uVar3,
                          SEG_1000,
                          param_6,
                          in_AF);
            uVar1 = (iVar2 + 0x22);
            file_and_draw_op_1008_4f20(NULL,
                                       str_var1(param_6, local_38),
                                       *(uVar1 + 0xe),
                                       0x25,
                                       str_var1(param_6, local_10),
                                       param_6);
            pass1_1008_4480(param_3, (param_1 & 0xffff0000 | (iVar2 + 0x1c)), str_var1(param_6, local_38), param_6);
            u_stack60 = pass1_1008_4772(str_var1(param_6, local_38));
            pass1_1008_3e94((param_1 & 0xffff0000 | (iVar2 + 0x1c)),
                            str_var1(param_6, &local_40),
                            str_var1(param_6, &local_3e));
            local_48 = local_3e;
            iStack70 = local_40;
            uVar3    = (u_stack60 >> 0x10);
            iStack68 = local_3e + (u_stack60 + 0x4);
            iStack66 = local_40 + (u_stack60 + 0x8);
            InvalidateRect16(SEG_1008, 0x0, &local_48);
            pass1_1008_41bc(str_var1(param_6, local_38));
        }
    }
    return;
}

void  invalidate_rect_1020_8fb4(param_1: u32, param_2: u16)

{
    let mut iVar1: i16;
    let mut u_var2: u32;
    let mut erase: u16;
    let mut uVar3: u32;
    let mut in_DX: u16;
    let mut extraout_DX: u16;
    let mut uVar4: u16;
    let mut iVar5: i16;
    let mut uVar6: u16;
    let mut unaff_SS: u16;
    let mut iStack8: i16;

    uVar6 = (param_1 >> 0x10);
    iVar5 = param_1;
    u_var2 = (iVar5 + 0xba);
    if((u_var2 + 0x1e) != 0x0)
    {
        pass1_1018_2862(*(iVar5 + 0x16));
        (iVar5 + 0xaa) = param_2;
        (iVar5 + 0xac) = in_DX;
        if((in_DX | (iVar5 + 0xaa)) != 0x0)
        {
            u_var2 = (iVar5 + 0xaa);
            iVar1 = (u_var2 + 0xa);
            for(iStack8 = 0x0; iStack8 < iVar1; iStack8 = iStack8 + 0x1)
            {
                uVar3 = SEXT24(iStack8);
                empty_1008_8fc4((iVar5 + 0xaa), uVar3);
                erase = uVar3;
                uVar4 = extraout_DX | erase;
                if(((uVar4 != 0x0) && (0x9 < (erase + 0x2e))) && (pass1_1008_8b20(uVar3 & 0xffff | extraout_DX << 0x10, unaff_SS), (uVar4 | erase) != 0x0))
                {
                    InvalidateRect16(SEG_1008, 0x0, erase);
                }
            }
        }
    }
    return;
}

void  set_struct_op_1020_921c(param_1: *mut Struct7, param_2: u16)

{
    let mut HVar1: HDC16;
    let mut in_DX: *mut u8;
    let mut iVar3: *mut Struct42;
    let mut unaff_DI: i16;
    let mut uVar3: *mut Struct42;
    let mut unaff_CS: HWND16;
    let mut unaff_SS: u16;
    let mut pUVar3: *mut u16;

    uVar3              = (param_1 >> 0x10);
    iVar3              = param_1;
    param_1.field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar3.field_0x2   = SEG_1008;
    param_1.field_0x0 = addr_table_1008_3aa0[2];//0x3aa8;
    iVar3.field_0x2 = SEG_1008;
    iVar3.field_0x4 = param_2;
    param_1.field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    iVar3.field_0x2 = SEG_1008;
    iVar3.field_0x6 = 0x0;
    iVar3.field_0xa = 0x0;
    iVar3.field_0xc = 0x0;
    iVar3.field_0xe = 0x0;
    iVar3.field_0x10 = 0x0;
    iVar3.field_0x12 = 0x0;
    param_1.field_0x0 = addr_table_1020_96c8;//0x96c8;
    iVar3.field_0x2 = SEG_1020;
    HVar1 = GetDC16(unaff_CS);
    iVar3.field_0xa = HVar1;
    pUVar3 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x48, unaff_SS, in_DX, unaff_DI);
    pUVar3 = (pUVar3 >> 0x10);
    iVar3.field_0xc = (pUVar3 + 0xa);
    iVar3.field_0xe = (pUVar3 + 0xc);
}

void  pass1_1020_770e(param_1: u32)

{
    let mut puVar1: *mut u32;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut iVar4: i16;
    let mut uVar5: u16;

    uVar5  = (param_1 >> 0x10);
    iVar4  = param_1;
    puVar1 = (iVar4 + 0xee);
    u_var2  = (iVar4 + 0xf0);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    (iVar4 + 0xee) = 0x0;
    destroy_win_1008_628e(param_1 & 0xffff | uVar5 << 0x10, SEG_1008);
    return;
}

void  cleanup_menu_ui_op_1020_795c(in_struct_1: *mut Struct3, HMENin_menu_handle_2: u16)

{
//    Struct3 *local_struct_1;
//    Struct3 *uVar1;
//
//    uVar1                                    = (in_struct_1 >> 0x10);
//    local_struct_1                           = in_struct_1;
    in_struct_1->address_offset_field_0x0    = addr_table_1020_7b86;//0x7b86;
    in_struct_1->address_offset_field_0x2 = SEG_1020;
    if(in_struct_1.field_0xec != 0x0)
    {
        DestroyMenu16(in_menu_handle_2);
    }
    pass1_1008_57c4((in_struct_1 & 0xffff0000 | &in_struct_1.field_0xd2));
    in_struct_1->address_offset_field_0x0    = addr_table_1008_380a; // 0x380a
    in_struct_1->address_offset_field_0x2 = SEG_1008;
    in_struct_1->address_offset_field_0x0    = addr_table_1008_380a[36]; // 0x389a
    in_struct_1->address_offset_field_0x2 = SEG_1008;
}

void  get_win_ui_info_op_1020_7a50(param_1: u32, param_2: HWND16)

{
    fn_ptr_1 *ppcVar1;
    let mut b_var2: BOOL16;
    let mut IVar2: u16;
    let mut IVar3: u16;
    let mut var5: u16;
    let mut local_a: RECT16;
    let mut iStack6: i16;
    let mut iStack4: i16;

    local_a.x = 0x0;
    local_a.y = 0x0;
    iStack6   = 0x0;
    iStack4   = 0x0;
    var5      = (param_1 >> 0x10);
    b_var2    = IsIconic16(param_2);
    if(b_var2 == 0x0)
    {
        GetWindowRect16(LAST_SEGMENT, &local_a);
        iStack6   = iStack6 - local_a.x;
        iStack4   = iStack4 - local_a.y;
        IVar2     = GetSystemMetrics16(LAST_SEGMENT);
        IVar3     = GetSystemMetrics16(LAST_SEGMENT);
        local_a.x = local_a.x + IVar2 * 0x2;
        local_a.y = local_a.y + IVar3 * 0x2;
    }
    ppcVar1 = ((param_1 + 0xe0) + 0x14);
    (**ppcVar1)(LAST_SEGMENT, (param_1 + 0xe0), &local_a);
    return;
}


void  win_ui_menu_op_1020_7ad2(param_1: u32, param_2: HWND16, RECT16 *param_3, param_4: HWND16)

{
    HMENU16 HVar1;
    let mut iVar2: i16;
    let mut uVar3: u16;
    POINT16 local_6;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(((iVar2 + 0xee) != 0x0) && ((iVar2 + 0xec) == 0x0))
    {
        HVar1                      = LoadMenu16(param_4,  * (iVar2 + 0xee));
        *(HMENU16 *)(iVar2 + 0xec) = HVar1;
        if(HVar1 == 0x0)
        {
            return;
        }
        param_4                    = LAST_SEGMENT;
        HVar1                      = GetSubMenu16((HMENU16)LAST_SEGMENT, 0x0);
        *(HMENU16 *)(iVar2 + 0xec) = HVar1;
        if(HVar1 == 0x0)
        {
            return;
        }
    }
    local_6.x = param_3;
    local_6.y = param_2;
    ClientToScreen16(param_4, &local_6);
    TrackPopupMenu16((HMENU16)LAST_SEGMENT, 0x0, 0x0, (iVar2 + 0x8), 0x0, local_6.y, local_6.x);
    return;
}


Struct3 * pass1_1020_7b60(param_1: *mut Struct3, param_2: u8, param_3: u16)

{
    cleanup_menu_ui_op_1020_795c(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}

void  destroy_window_1020_8250(param_1: u32, param_2: HWND16)

{
    let mut BVar1: BOOL16;
    let mut u_var2: u16;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0xec) != 0x0)
    {
        BVar1 = IsWindow16(param_2);
        if(BVar1 != 0x0)
        {
            DestroyWindow16(LAST_SEGMENT);
            (param_1 + 0xec) = 0x0;
        }
    }
    return;
}
