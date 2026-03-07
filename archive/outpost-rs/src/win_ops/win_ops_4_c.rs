
// #include "win_ops_4.h"

// #include "draw_ops/draw_ops_1.h"
// #include "fn_ptr_ops/fn_ptr_ops_6.h"
// #include "op_int.h"
// #include "op_winapi.h"
// #include "op_windef.h"
// #include "string_consts.h"
// #include "struct_20.h"
// #include "structs/structs_0xx/structs_2x.h"
// #include "structs/structs_0xx/structs_7x.h"
// #include "ui_ops/ui_ops_1.h"
// #include "utils.h"
// #include "win_ops_1.h"
// #include "win_ops_3.h"

// #include <minwindef.h>

void def_win_proc_1008_5632(globals: &mut Globals,
                           param_1: *mut u32,
                            WPARAM16 param_2,
                            param_3: u16,
                            param_4: i16,
                           param_5: u16)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut unaff_CS: HWND16;
    let mut unaff_SS: u16;
    let mut u_var2: u16;
    let mut pu_stack6: *mut u32;

    u_var2    = SEG_1050;
    pu_stack6 = GetWindowLong16(unaff_CS, 0x0);
    if(((pu_stack6 >> 0x10) | pu_stack6) == 0x0)
    {
        if(param_4 != 0x1)
        {
            DefWindowProc16(LAST_SEGMENT, param_1, param_2, str_var1(param_4, param_3));
            return;
        }
        pu_stack6 = *param_1;
        SetWindowLong16(LAST_SEGMENT, pu_stack6, pu_stack6 >> 0x10);
        pass1_1008_9628(pu_stack6, param_5);
    }
    ppcVar1 = (*pu_stack6 + 0x1c);
    (**ppcVar1)(LAST_SEGMENT, pu_stack6, (pu_stack6 >> 0x10), param_1, param_2, param_3, param_4, u_var2);
}


void window_op_1008_3bd6(globals: &mut Globals,
                     param_1: *mut Struct65,
                     param_2: u16,
                     param_3: u16,
                     param_4: u32,
                     param_5: u16,
                     param_6: u32,
                     param_7: u32,
                     param_8: u16,
                    param_9: u16)

{
    mixed_struct_op_1040_8fb8(
      NULL, param_1, param_3, 0x0, param_5, param_6, param_7, param_8, 0x1040, param_9);
    // 1008:3cfc = start of address table of functions; see doc.md
    param_1.field_0x0 = addr_table_1008_3cfc;//0x3cfc;
    param_1.field_0x2         = SEG_1008;
    param_1.field_0x36        = 0x0;
    param_1.field_0x26        = 0x0;
    pass1_1040_9252(param_1);
    create_window_1040_92dc(globals, param_1);
    mov_update_win_1040_93aa(param_1, param_4, 0x1040);
}


void  post_msg_1008_3d20(param_1: u32, param_2: HWND16)

{
    PostMessage16(param_2, 0x0, 0x0, str_var1(0x111, (param_1 + 0xcc)));
}


void  post_quit_msg_1008_3af4(short exit_code)

{
    PostQuitMessage16(exit_code);
}


u16  unk_win_msg_op_1008_0a3c(param_1: u32, param_2: u16, param_3: HWND16)

{
    let mut BVar1: BOOL16;

    if((param_2 & 0xfff0) == 0xf140)
    {
        return (param_1 + 0xde);
    }
    if((param_2 & 0xfff0) == 0xf060)
    {
        BVar1 = IsIconic16(param_3);
        if(BVar1 == 0x0)
        {
            PostMessage16(LAST_SEGMENT, 0x0, 0x0, 0x1110067);
        }
        return 0x0;
    }
    return 0x1;
}


pub fn pass1_1008_0a92(globals: &mut Globals, param_1: u32, short param_2)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0xee) != 0x0)
    {
        ppcVar1 = ((iVar2 + 0xee) + 0x90);
        (**ppcVar1)(param_2, (iVar2 + 0xee));
    }
    if((iVar2 + 0xe8) != 0x0)
    {
        ppcVar1 = ((iVar2 + 0xe8) + 0x90);
        (**ppcVar1)(param_2, (iVar2 + 0xe8));
    }
    if(globals._PTR_LOOP_1050_0388 != 0x0)
    {
        ppcVar1 = *_PTR_LOOP_1050_0388;
        (**ppcVar1)(param_2, globals._PTR_LOOP_1050_0388, (globals._PTR_LOOP_1050_0388 >> 0x10), 0x1);
    }
    post_quit_msg_1008_3af4(param_2);
    return;
}


void  window_op_1008_0af8(param_1: *mut Struct0, param_2: *mut u8, param_3: u16)

{
    let mut pi_var1: *mut i16;
    let mut u_var2: u16;
    let mut ppcVar3: *mut *mut c_void;
    let mut puVar4: *mut u8;
    let mut uVar5: u32;
    let mut puVar6: *mut u8;
    let mut extraout_DX: u16;
    let mut extraout_DX_00: *mut u8;
    let mut uVar7: u16;
    let mut extraout_DX_01: *mut u8;
    let mut iVar8: i16;
    let mut uVar9: u16;
    let mut uVar10: u16;
    let mut unaff_SS: u16;
    let mut puVar11: *mut u16;
    let mut uVar12: u16;
    let mut uVar13: u16;
    let mut uVar14: u8;
    struct Struct20 *paStack6;

    create_window_ex_1008_9760(param_1, param_3);
    uVar9                       = (param_1 >> 0x10);
    iVar8                       = param_1;
    puVar4                      = (iVar8 + 0x8);
    globals.PTR_LOOP_1050_0396 = puVar4;
    mem_op_1000_179c(0x12, param_2, 0);
    puVar6 = (param_2 | puVar4);
    if(puVar6 != 0x0)
    {
        puVar11 = pass1_1008_91ba(str_var1(param_2, puVar4), SEG_1000);
        puVar6  = (puVar11 >> 0x10);
        puVar4  = puVar11;
    }
    mem_op_1000_179c(0x6, puVar6, 0);
    if((puVar6 | puVar4) == 0x0)
    {
        (iVar8 + 0xe0) = 0x0;
    }
    else
    {
        pass1_1008_392e(str_var1(puVar6, puVar4), (iVar8 + 0x8));
        (iVar8 + 0xe0) = puVar4;
        (iVar8 + 0xe2) = extraout_DX;
    }
    ppcVar3 = (param_1 + 0x14);
    (**ppcVar3)(SEG_1000, param_1, 0x0, 0x15a, SEG_1050);
    uVar10 = SEG_1000;
    puVar6 = extraout_DX_00;
    mem_op_1000_179c(0xec, extraout_DX_00, 0);
    paStack6 = (struct Struct20 *)str_var1(puVar6, puVar4);
    uVar7    = puVar6 | puVar4;
    if(uVar7 == 0x0)
    {
        (iVar8 + 0xe4) = 0x0;
    }
    else
    {
        pi_var1  = (iVar8 + 0xcc);
        *pi_var1 = *pi_var1 + 0x1;
        uVar10  = SEG_1020;
        pass1_1020_08b6(unaff_SS, paStack6, (iVar8 + 0xcc), param_1);
        (iVar8 + 0xe4) = puVar4;
        (iVar8 + 0xe6) = uVar7;
    }
    if((iVar8 + 0xce) != 0x0)
    {
        ppcVar3 = ((iVar8 + 0xce) + 0x10);
        (**ppcVar3)();
    }
    (iVar8 + 0xce) = (iVar8 + 0xe4);
    uVar14         = 0x1;
    uVar5          = (iVar8 + 0xe4);
    uVar12         = uVar5;
    uVar13         = (uVar5 >> 0x10);
    ppcVar3        = ((iVar8 + 0xe4) + 0x10);
    (**ppcVar3)();
    uVar5          = (iVar8 + 0xe4);
    u_var2          = (iVar8 + 0xe6);
    (iVar8 + 0xe8) = uVar5;
    ppcVar3        = ((iVar8 + 0xe8) + 0x8);
    (**ppcVar3)(uVar10, (iVar8 + 0xe8), u_var2, uVar12, uVar13, uVar14);
    uVar7   = uVar5;
    ppcVar3 = ((iVar8 + 0xe8) + 0xc);
    (**ppcVar3)();
    pass1_1008_6978(param_1 & 0xffff | uVar9 << 0x10, 0x0, *(iVar8 + 0xe8), uVar7, extraout_DX_01);
    return;
}

BOOL16 mixed_win_op_1008_0c60(
  Struct72 **param_1, param_2: u16, BOOL16 param_3, param_4: HWND16, param_5: u16, param_6: u16, Globals *globals)

{
    let mut ppcVar1: *mut *mut c_void;
    HINSTANCE16 HVar2;
    let mut BVar3: BOOL16;
    let mut puVar4: *mut u8;
    let mut extraout_DX: *mut u8;
    let mut struct_var5: *mut Struct72;
    let mut unaff_DI: i16;
    let mut hwnd: HWND16;
    let mut in_AF: u8;
    let mut uVar5: u32;
    LRESULT     LVar6;
    let mut pcVar7: *mut c_char;
    let mut puVar8: *mut u16;
    let mut uVar9: u16;
    let mut uVar10: u16;
    let mut iVar11: i16;
    let mut uVar12: u16;
    let mut uVar13: u16;
    let mut local_64: [u8;50] = [0;50];
    let mut uStack20: u32;
    let mut HStack16: HCURSOR16;
    let mut HStack14: HCURSOR16;
    let mut u_stack6: u32;
    let mut struct_var15: *mut Struct72;

    uVar9        = param_1;
    struct_var15 = (param_1 >> 0x10);
    hwnd         = SEG_1008;
    switch(param_2)
    {
    0x64 =>
        BVar3 = pass1_1008_07d8(uVar9, param_3, param_6, param_5);
        win_ui_cursor_op_1008_2e9a(param_1, param_5);
        return BVar3;
    0x65 =>
        pass1_1008_3018(param_1, param_6, unaff_DI, param_5);
        return param_3;
    0x66 =>
        pass1_1008_30cc(param_1, param_3, param_6, unaff_DI, param_5);
        return param_3;
    0x67 =>
        iVar11 = win_ui_op_1008_2b54(param_3, param_6, param_5);
        if(iVar11 == 0x0)
        {
            return 0x0;
        }
    0xee =>
        uVar13 = 0x0;
        uVar10 = 0x10;
        goto LAB_1008_0d18;
    0x68 =>
        pass1_1030_8344(globals._PTR_LOOP_1050_5748, (globals._PTR_LOOP_1050_5748 >> 0x10), 0x4000001);
        puVar4 = (param_6 | param_3);
        if(puVar4 == 0x0)
        {
            return param_3;
        }
        if(globals.PTR_LOOP_1050_4fe8 != 0x0)
        {
            pcVar7 = load_string_1010_847eglobals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10), SEG_1010);
            BVar3  = MessageBox16(SEG_1010, &PTR_LOOP_1050_0010, pcVar7, (pcVar7 >> 0x10));
            return BVar3;
        }
        HStack14 = LoadCursor16(SEG_1030, 0x7f02);
        HStack16 = SetCursor16((HCURSOR16)LAST_SEGMENT);
        uStack20 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x29, param_5, puVar4, unaff_DI);
        pass1_1018_262e(uStack20);
        pass1_1030_838e(globals._PTR_LOOP_1050_5748, param_5, in_AF);
        uVar13                      = (globals._PTR_LOOP_1050_5748 >> 0x10);
        (globals._PTR_LOOP_1050_5748 + 0x8) = 0x1;
        pass1_1030_8326();
        pcVar7 = load_string_1010_847eglobals.dat_1050_14cc, globals.dat_1050_14cc >> 0x10), SEG_1010);
        sys_1000_3f9c(local_64, param_5, 0x19c, SEG_1050, pcVar7, &stack0xfffe, uVar13, SEG_1000, param_5, in_AF);
        ppcVar1 = (*param_1 + 0x14);
        (**ppcVar1)(SEG_1000, param_1, 0x0, 0x9c, param_5);
        puVar8 = mixed_1010_20ba(globals.dat_1050_0ed0, 0x37, param_5, extraout_DX, unaff_DI);
        pass1_1008_a9ec(puVar8);
        hwnd = LAST_SEGMENT;
        SetCursor16(SEG_1010);
        uVar13 = 0xfc;
        uVar10 = 0x111;
        goto LAB_1008_0e3d;
    _ =>
        if(((uVar9 + 0xea) | (uVar9 + 0xe8)) == 0x0)
        {
            return 0x0;
        }
        uVar5   = (uVar9 + 0xe8);
        ppcVar1 = ((uVar9 + 0xe8) + 0x40);
        BVar3   = (**ppcVar1)(0x8, uVar5, (uVar5 >> 0x10), param_2);
        return BVar3;
    0x6e =>
        iVar11 = 0x2;
        goto LAB_1008_0cba;
    0x6f =>
        u_stack6 = unk_io_op_1010_830a(globals.dat_1050_14cc, 0x1f8, param_5);
        BVar3   = WinHelp16(SEG_1010, 0x0, 0x0, str_var1(u_stack6, 0x3));
        return BVar3;
    0x70 =>
        iVar11 = 0x1;
    // LAB_1008_0cba:
        uVar5 = pass1_1038_af40(globals.ptr_1050_5b7c, (uVar9 + 0x8), iVar11, param_6, uVar9, SEG_1038, param_5);
        return uVar5;
    0x71 =>
        HVar2 = WinExec16(SEG_1008, 0x3);
        return HVar2;
    0x79 =>
        BVar3 = post_msg_1008_2d22(param_1);
        return BVar3;
    0x7a =>
        uVar12 = 0xb;
        goto LAB_1008_0f3e;
    0x7b =>
        uVar12 = 0x1e;
        goto LAB_1008_0f3e;
    0x7c =>
        uVar12 = 0x1f;
        goto LAB_1008_0f3e;
    0x7d =>
        uVar12 = 0x21;
        goto LAB_1008_0f3e;
    0x7e =>
        uVar12 = 0x35;
        goto LAB_1008_0f3e;
    0x7f =>
        uVar13 = 0x39;
        break;
    0x80 =>
        uVar12 = 0x22;
        goto LAB_1008_0f3e;
    0x81 =>
        uVar13 = 0x36;
        break;
    0x82 =>
        uVar13 = 0x37;
        break;
    0x83 =>
        uVar13 = 0x38;
        break;
    0x84 =>
        uVar13 = 0x3a;
        break;
    0x85 =>
        uVar13 = 0x3b;
        break;
    0x86 =>
        uVar13 = 0x3c;
        break;
    0x87 =>
        uVar13 = 0x3d;
        break;
    0x88 =>
        uVar13 = 0x3e;
        break;
    0x89 =>
        uVar13 = 0x3f;
        break;
    0x8a =>
        uVar13 = 0x40;
        break;
    0x8b =>
        uVar12 = 0xc;
        goto LAB_1008_0f3e;
    0x8c =>
        uVar13 = 0x41;
        break;
    0x8d =>
        uVar13 = 0x42;
        break;
    0x8e =>
        uVar13 = 0x43;
        break;
    0x8f =>
        uVar13 = 0x44;
        break;
    0x90 =>
        uVar13 = 0x45;
        break;
    0x91 =>
        uVar13 = 0x46;
        break;
    0x92 =>
        uVar13 = 0x47;
        break;
    0x93 =>
        uVar12 = 0x23;
        goto LAB_1008_0f3e;
    0x94 =>
        uVar12 = 0x24;
        goto LAB_1008_0f3e;
    0x95 =>
        uVar13 = 0x48;
        break;
    0x96 =>
        uVar13 = 0x49;
        break;
    0x97 =>
        uVar13 = 0x4a;
        break;
    0x98 =>
        uVar13 = 0x4b;
        break;
    0x99 =>
        uVar13 = 0x4c;
        break;
    0x9a =>
        uVar12 = 0xd;
        goto LAB_1008_0f3e;
    0x9b =>
        uVar13 = 0x4d;
        break;
    0x9c =>
        uVar13 = 0x4e;
        break;
    0x9d =>
        uVar13 = 0x4f;
        break;
    0x9e =>
        uVar13 = 0x50;
        break;
    0x9f =>
        uVar13 = 0x51;
        break;
    0xa0 =>
        uVar12 = 0xe;
        goto LAB_1008_0f3e;
    0xa1 =>
        uVar12 = 0xf;
        goto LAB_1008_0f3e;
    0xa2 =>
        uVar13 = 0x52;
        break;
    0xa3 =>
        uVar12 = 0x10;
        goto LAB_1008_0f3e;
    0xa4 =>
        uVar13 = 0x53;
        break;
    0xa5 =>
        uVar12 = 0x11;
        goto LAB_1008_0f3e;
    0xa6 =>
        uVar12 = 0x12;
        goto LAB_1008_0f3e;
    0xa7 =>
        uVar13 = 0x57;
        break;
    0xa8 =>
        uVar12 = 0x13;
        goto LAB_1008_0f3e;
    0xa9 =>
        uVar12 = 0x14;
        goto LAB_1008_0f3e;
    0xaa =>
        uVar13 = 0x58;
        break;
    0xab =>
        uVar13 = 0x63;
        break;
    0xac =>
        uVar13 = 0x59;
        break;
    0xad =>
        uVar13 = 0x5a;
        break;
    0xae =>
        uVar13 = 0x5b;
        break;
    0xaf =>
        uVar13 = 0x15;
        break;
    0xb0 =>
        uVar12 = 0x25;
        goto LAB_1008_0f3e;
    0xb1 =>
        uVar13 = 0x5c;
        break;
    0xb2 =>
        uVar13 = 0x16;
        break;
    0xb3 =>
        uVar13 = 0x5d;
        break;
    0xb4 =>
        uVar12 = 0x5e;
        goto LAB_1008_0f3e;
    0xb5 =>
        uVar13 = 0x5f;
        break;
    0xb6 =>
        uVar13 = 0x60;
        break;
    0xb7 =>
        uVar13 = 0x61;
        break;
    0xb8 =>
        uVar13 = 0x62;
        break;
    0xb9 =>
        uVar13 = 0x64;
        break;
    0xba =>
        uVar13 = 0x65;
        break;
    0xbb =>
        uVar13 = 0x66;
        break;
    0xbc =>
        uVar13 = 0x67;
        break;
    0xbd =>
        uVar13 = 0x68;
        break;
    0xbe =>
        uVar13 = 0x69;
        break;
    0xbf =>
        uVar12 = 0x17;
        goto LAB_1008_0f3e;
    0xc0 =>
        uVar12 = 0x18;
        goto LAB_1008_0f3e;
    0xc1 =>
        uVar12 = 0x19;
        goto LAB_1008_0f3e;
    0xc2 =>
        uVar12 = 0x1a;
        goto LAB_1008_0f3e;
    0xc3 =>
        uVar12 = 0x1b;
        goto LAB_1008_0f3e;
    0xc4 =>
        uVar12 = 0x1c;
        goto LAB_1008_0f3e;
    0xc5 =>
        uVar12 = 0x1d;
        goto LAB_1008_0f3e;
    0xc6 =>
        uVar12 = 0x4;
        goto LAB_1008_0f3e;
    0xc8 =>
        uVar12 = 0x3;
        goto LAB_1008_0f3e;
    0xc9 =>
        uVar12 = 0x1;
        goto LAB_1008_0f3e;
    0xca =>
        uVar12 = 0x5;
        goto LAB_1008_0f3e;
    0xcb =>
        pass1_1008_087e(param_3, param_6, param_5, in_AF);
        uVar12 = 0x6;
        goto LAB_1008_0f3e;
    0xcc =>
        uVar12 = 0x7;
        goto LAB_1008_0f3e;
    0xcd =>
        uVar12 = 0x8;
        goto LAB_1008_0f3e;
    0xce =>
        uVar12 = 0x9;
        goto LAB_1008_0f3e;
    0xcf =>
        uVar12 = 0xa;
        goto LAB_1008_0f3e;
    0xd0 =>
        uVar12 = 0x26;
        goto LAB_1008_0f3e;
    0xd1 =>
        uVar12 = 0x27;
        goto LAB_1008_0f3e;
    0xd2 =>
        uVar12 = 0x28;
        goto LAB_1008_0f3e;
    0xd3 =>
        uVar12 = 0x29;
        goto LAB_1008_0f3e;
    0xd4 =>
        uVar12 = 0x2a;
        goto LAB_1008_0f3e;
    0xd5 =>
        uVar12 = 0x2b;
        goto LAB_1008_0f3e;
    0xd6 =>
        uVar12 = 0x2c;
        goto LAB_1008_0f3e;
    0xd7 =>
        uVar12 = 0x2d;
        goto LAB_1008_0f3e;
    0xd8 =>
        uVar12 = 0x2e;
        goto LAB_1008_0f3e;
    0xd9 =>
        uVar12 = 0x2f;
        goto LAB_1008_0f3e;
    0xda =>
        uVar12 = 0x30;
        goto LAB_1008_0f3e;
    0xdb =>
        uVar12 = 0x31;
        goto LAB_1008_0f3e;
    0xdc =>
        uVar12 = 0x32;
        goto LAB_1008_0f3e;
    0xdd =>
        uVar12 = 0x33;
        goto LAB_1008_0f3e;
    0xde =>
        uVar12 = 0x34;
    // LAB_1008_0f3e:
        cursor_op_1008_2dcc(uVar9, struct_var15, uVar12, SEG_1008);
        return param_3;
    0xdf =>
        uVar13 = 0x55;
        break;
    0xe0 =>
        uVar13 = 0x56;
        break;
    0x100 =>
        win_1008_5c5c(param_5, param_3, param_6, globals._PTR_LOOP_1050_02a0, 0x1dc);
        return param_3;
    0x12c =>
        uVar13 = 0xf020;
        uVar10 = 0x112;
    // LAB_1008_0d18:
        LVar6 = SendMessage16(SEG_1008, 0x0, 0x0, str_var1(uVar10, uVar13));
        return LVar6;
    0x12e =>
        uVar13 = 0xf060;
        uVar10 = 0x112;
    // LAB_1008_0e3d:
        BVar3 = PostMessage16(hwnd, 0x0, 0x0, str_var1(uVar10, uVar13));
        return BVar3;
    }
    ui_op_1008_2c4e(uVar9, struct_var15, uVar13, SEG_1008);
    return param_3;
}
void  pass1_1008_818c(param_1: *mut Struct23, HINSTANCE16 param_2, WNDCLASS16 *param_3)

{
    let mut BVar1: BOOL16;
    ATOM       AVar2;
    let mut local_1c: u16;
    let mut uStack26: u16;
    let mut uStack24: u16;
    let mut uStack22: u32;
    let mut puStack18: *mut u8;
    let mut uStack16: u16;
    let mut uStack14: u16;
    let mut uStack12: u16;
    let mut uStack10: u32;
    let mut iStack6: i16;
    let mut uStack4: u16;

    iStack6 = param_1 + 0x4;
    BVar1   = GetClassInfo16(param_2, (SEGPTR)&local_1c, param_3);
    if(BVar1 == 0x0)
    {
        local_1c = (param_1 + 0x54);
        uStack26 = win_sys_op_1008_84f2;//0x84f2;
        uStack24 = SEG_1008;
        uStack22 = 0x40000;
        puStack18 = globals.hinst_1050_038c;
        uStack16 = 0x0;
        uStack14 = (param_1 + 0x58);
        uStack12 = (param_1 + 0x56);
        uStack10 = 0x0;
        uStack4 = param_1;
        AVar2 = RegisterClass16(LAST_SEGMENT);
        if (AVar2 == 0x0)
        {
            fn_ptr_op_1000_24cd(0x0, &stack0xfffe);
        }
    }
    return;
}
