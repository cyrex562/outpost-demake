// #include "string_ops.h"

// #include "address_tables/function_tables.h"
// #include "draw_ops/draw_ops_2.h"
// #include "fn_ptr_ops/fn_ptr_ops_7.h"
// #include "op_int.h"
// #include "op_winapi.h"
// #include "string_consts.h"
// #include "structs/structs_0xx/struct_20.h"
// #include "structs/structs_3xx/struct_382.h"
// #include "structs/structs_3xx/struct_385.h"
// #include "struct_ops/struct_ops_1.h"
// #include "struct_ops/struct_ops_5.h"
// #include "structs/structs_3xx/structs_38x.h"
// #include "sys_ops/sys_ops_10.h"
// #include "unk/unk_11.h"
// #include "unk/unk_14.h"
// #include "unk/unk_15.h"
// #include "utils.h"
// #include "struct_ops/struct_ops_2.h"

// #include <stdarg.h>
// #include <stdbool.h>



#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCInconsistentNamingInspection"

const char* get_rsrc_string(arg_1: u32)
{
    // TODO
    return NULL;
}


void string_1040_a626(param_1: *mut Struct381, char *param_2, param_3: u16)

{
    let mut uVar1: u16;

    uVar1              = str_op_1008_60e8(param_2);
    param_1.field_0x1 = uVar1;
    param_1.fielx_0x2 = param_3;
}


char *pass1_1040_4dcc(param_1: u32, param_2: i16, param_3: u16)

{
    let mut uVar1: u32;
    let mut u_var2: u32;
    let mut uVar3: u16;
    let mut pcVar4: *mut c_char;

    uVar3  = (param_1 >> 0x10);
    u_var2  = (param_1 + 0x90);
    uVar1  = (param_1 + 0x94);
    pcVar4 = string_op_1010_ada6(
      NULL, SEG_1010, param_3, uVar1, (uVar1 >> 0x10), param_2, (u_var2 + 0xa));
    return pcVar4;
}


pub fn pass1_1040_5d42(globals: &mut Globals, struct param_1: *mut Struct382) {
    char char_var_1;
    char char_var_2;
//    i16  iVar3;
//    u16  uVar4;
    SegmentAddress addr_var5;
    let mut struct384_var_6: *mut Struct384;

    addr_var5 = pass1_1040_5d12(globals, param_1);
    struct384_var_6 =  ptr_from_addr_pair(addr_var5.segment, addr_var5.offset);
    if (addr_var5.segment != 0 && addr_var5.offset != 0) {
        char_var_1 = (char) struct384_var_6.field_0xc;
//        iVar3 = param_1;
//        uVar4 = (param_1 >> 0x10);
        if (char_var_1 == 0x5f) {
            (param_1.field_0x96) = 0x53; // 'S'
            return;
        }
        if (char_var_1 < 0x60)
        {
            char_var_2 = char_var_1;
            if(char_var_2 == '(')
            {
                (param_1.field_0x96) = 0x54; // 'T'
                return;
            }
            if(char_var_2 == ')')
            {
                (param_1.field_0x96) = 0x55; // 'U'
                return;
            }
            if(char_var_2 == ']')
            {
                (param_1.field_0x96) = 0x51; // 'Q'
                return;
            }
            if(char_var_2 == '^')
            {
                (param_1.field_0x96) = 0x52; // 'R'
                return;
            }
        }
    }
}


pub fn pass1_1038_4d3c(param_1: *mut Struct385, char *param_2, param_3: u16) {
    let mut u_var_1: u16;

    Struct18 *in_struct =  ptr_from_addr_pair(param_1.segment_field_0x1fc, param_1.offset_field_0x1fa);
    fn_ptr_1000_17ce(in_struct, SEG_1000);
    u_var_1 = str_op_1008_60e8(param_2);
    param_1.offset_field_0x1fa = u_var_1;
    param_1.segment_field_0x1fc = param_3;
}


pub fn pass1_1030_4dbc(param_1: *mut Struct386, param_2: u32, long param_3)

{
    long *plong_var_1;
    let mut pi16_var_2: *mut i16;
    long  long_var_3;
    let mut u16_var_4: u16;
//    i16   iVar5;
//    u16   uVar6;

//    iVar5 = param_1;
//    uVar6 = (param_1 >> 0x10);
    if(0x0 < param_3)
    {
        *(param_1.field_0x160) = param_2;
        (param_1.field_0x164)  = param_3;
    }
    if(((param_1.field_0x160) == 0x0) || (long_var_3 = (param_1.field_0x164), plong_var_1 = (long *)(param_1.field_0x164), *plong_var_1 = *plong_var_1 + -0x1, long_var_3 == 0x0))
    {
        (param_1.field_0x160) = 0x0;
    }
    else
    {
        u16_var_4   = str_op_1000_3da4((param_1.field_0x160));
        pi16_var_2  = (param_1.field_0x160);
        *pi16_var_2 = *pi16_var_2 + u16_var_4 + 0x2;
    }
}

const char *pass1_1020_bd80(globals: &mut Globals, param_1: u16) {
    let mut pcVar1: *mut c_char;
    const char *u_stack6;

    switch (param_1) {
        0x1 =>
        0x6 =>
            break;
    2 =>
        break;
     3 =>
    0x7 =>
        break;
    0x4 =>
    0x8 =>
        break;
    0x5 =>
    0x9 =>
        break;
    0xa =>
        break;
    0xb =>
    0x37 =>
        break;
    0xc =>
    0x35 =>
    0x36 =>
        break;
    0xd =>
        break;
    0xe =>
        break;
    0xf =>
        break;
    0x10 =>
        break;
    0x11 =>
        break;
    0x12 =>
        break;
    0x13 =>
    0x14 =>
    0x15 =>
        break;
    0x16 =>
    0x19 =>
        break;
    0x17 =>
    0x1a =>
        break;
    0x18 =>
        break;
    0x1b =>
    0x1c =>
    0x1d =>
        break;
    0x1e =>
    0x1f =>
    0x20 =>
        break;
    0x21 =>
        break;
    0x22 =>
    0x23 =>
    0x24 =>
        break;
    0x25 =>
    0x26 =>
    0x27 =>
        break;
    0x28 =>
    0x29 =>
        break;
    0x2a =>
    0x2b =>
        break;
    0x2c =>
        break;
    0x2d =>
    0x2e =>
        break;
    0x2f =>
    0x30 =>
        break;
    0x31 =>
    0x32 =>
        break;
    0x33 =>
    0x34 =>
        break;
    0x38 =>
    0x39 =>
        break;
    0x3a =>
    0x3b =>
        break;
    0x3c =>
    0x3d =>
        break;
    0x3e =>
        break;
    0x3f =>
        break;
    0x40 =>
        break;
    0x41 =>
        break;
    0x42 =>
    0x46 =>
    0x6b =>
        break;
    0x43 =>
        u_stack6 = s_bidLRoadConst_1050_4e7a;
        return u_stack6;
    0x44 =>
        u_stack6 = s_bidRRoadConst_1050_4e88;
        return u_stack6;
    0x45 =>
        u_stack6 = s_bidXRoadConst_1050_4e96;
        return u_stack6;
    0x47 =>
        break;
    0x48 =>
    0x49 =>
    0x4a =>
    0x70 =>
    0x71 =>
    0x72 =>
        break;
    0x4b =>
        break;
    0x4c =>
        break;
    0x4d =>
        break;
    0x4e =>
        break;
    0x4f =>
    0x50 =>
    0x51 =>
        break;
    0x52 =>
    0x53 =>
        break;
    0x54 =>
    0x55 =>
    0x56 =>
        break;
    0x57 =>
    0x58 =>
    0x59 =>
        break;
    0x5a =>
        break;
    0x5b =>
    0x5c =>
        break;
    0x5d =>
    0x5e =>
    0x5f =>
        break;
    0x60 =>
    0x61 =>
        break;
    0x62 =>
    0x63 =>
        break;
    0x64 =>
        break;
    0x65 =>
        break;
    0x66 =>
    0x67 =>
        break;
    0x68 =>
    0x69 =>
        break;
    0x6a =>
        break;
    0x6c =>
    0x6d =>
        break;
    0x6e =>
        break;
    0x6f =>
        break;
    0x73 =>
    0x77 =>
        break;
    0x74 =>
    0x78 =>
    0x79 =>
        break;
    0x75 =>
        break;
    0x76 =>
        break;
    0x7a =>
        break;
    0x7b =>
        break;
    0x7c =>
        break;
    0x7d =>
        break;
    0x7e =>
        break;
    0x7f =>
        break;
    0x80 =>
        break;
    0x81 =>
        break;
    0x82 =>
        break;
    0x83 =>
        break;
    0x84 =>
        break;
    0x85 =>
        break;
    0x86 =>
        break;
    0x87 =>
        break;
    0x88 =>
        break;
    0x89 =>
        break;
    _ =>
        break;
    }
    pcVar1 = load_string_1010_847e(globals.dat_1050_14cc, SEG_1010);
    return pcVar1;
}

void string_1020_c0ca(globals: &mut Globals, param_1: u16)

{
    string_1020_c0d8(globals, param_1);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

cstring string_1020_c0d8(globals: &mut Globals, param_1: u16)

{
    let mut pcVar1: *mut c_char;

    switch(param_1)
    {
    0x1 =>
        break;
    2 =>
        break;
     3 =>
        break;
    0x4 =>
        break;
    0x5 =>
        break;
    0x6 =>
        break;
    0x7 =>
        break;
    0x8 =>
        break;
    0x9 =>
        break;
    0xa =>
        break;
    0xb =>
        break;
    0xc =>
        break;
    0xd =>
        break;
    0xe =>
        break;
    0xf =>
        break;
    0x10 =>
        break;
    0x11 =>
        break;
    0x12 =>
        break;
    0x13 =>
        break;
    0x14 =>
        break;
    0x15 =>
        break;
    0x16 =>
        break;
    0x17 =>
        break;
    0x18 =>
        break;
    0x19 =>
        break;
    0x1a =>
        break;
    0x1b =>
        break;
    0x1c =>
        break;
    0x1d =>
        break;
    0x1e =>
        break;
    0x1f =>
        break;
    0x21 =>
        break;
    0x23 =>
        break;
    0x24 =>
    _ =>
        break;
    }
    pcVar1 = load_string_1010_847e(globals.dat_1050_14cc, SEG_1010);
    return pcVar1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

cstring *string_op_1020_c222(param_1: u16, Globals *globals)

{
    let mut pcVar1: *mut c_char;

    switch(param_1)
    {
    0x1 =>
        break;
    2 =>
        break;
     3 =>
        break;
    0x4 =>
        break;
    0x5 =>
        break;
    0x6 =>
        break;
    0x7 =>
        break;
    0x8 =>
        break;
    0x9 =>
        break;
    0xa =>
        break;
    0xb =>
        break;
    0xc =>
        break;
    0xd =>
        break;
    0xe =>
        break;
    0xf =>
        break;
    0x10 =>
        break;
    0x11 =>
        break;
    0x12 =>
        break;
    0x13 =>
        break;
    0x14 =>
        break;
    }
    pcVar1 = load_string_1010_847e(globals.dat_1050_14cc, SEG_1010);
    return pcVar1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

cstring *string_op_1020_c2f8(globals: &mut Globals, param_1: u16)

{
    let mut pcVar1: *mut c_char;

    switch(param_1)
    {
    0x1 =>
        break;
    2 =>
        break;
     3 =>
        break;
    0x4 =>
        break;
    0x5 =>
        break;
    0x6 =>
        break;
    0x7 =>
        break;
    0x8 =>
        break;
    0x9 =>
        break;
    0xa =>
        break;
    0xb =>
        break;
    0xc =>
        break;
    0xd =>
        break;
    0xe =>
        break;
    0xf =>
        break;
    0x10 =>
        break;
    }
    pcVar1 = load_string_1010_847e(globals.dat_1050_14cc, SEG_1010);
    return pcVar1;
}

pub fn pass1_1020_6e52(globals: &mut Globals, param_1: u16, param_2: u16, param_3: u16, offset_param_4: u16, segment_param_5: u16,
                     i16 param_6) {
    let mut seg_var1: u16;
    let mut pcVar2: *mut c_char;

    struct_1020_6e52_1 *x = (struct_1020_6e52_1 *) ptr_from_addr_pair(segment_param_5, offset_param_4);

    pass1_1018_2e5e(param_1, param_2, param_3, (x.field_0xf2));
    seg_var1 = param_3 | param_2;
    if (seg_var1 == 0x0) {
        pcVar2 = load_string_1010_847e(globals.dat_1050_14cc, SEG_1010);
    } else {
        pass1_1018_2d84(param_2, x.field_0xf2);
        pcVar2 = (char *) ptr_from_addr_pair(seg_var1, param_2);
    }
    string_1020_79b4(globals, param_1, x, param_6, pcVar2);
}

void sprintf_op_1018_34b6(globals: &mut Globals, struct_1018_34b6_1 *param_1, param_2: u8) {
    let mut iVar1: i16;
    let mut in_register_00000001: u16;
    let mut in_DX: u16;
//    i16        iVar2;
//    WORD      *valist;
    LPSTR buffer;
    let mut unaff_SS: u16;
    let mut uVar3: u32;
    long lVar4;

//    valist = (WORD *)(param_1 >> 0x10);
//    iVar2  = param_1;
    uVar3 = switch_1018_3b9e(param_1, (param_1.field_0x12e), param_2, in_DX, unaff_SS);
    iVar1 = (param_1.field_0x12e);
    if (iVar1 == 0x188) {
        lVar4 = pass1_1008_57f0(uVar3, (param_1.field_0x130), unaff_SS);
//        buffer = SEG_1020;
        string_1020_c0d8(globals, (lVar4 + 0xe));
    } else {
        if (iVar1 == 0x18b) {
//            buffer = SEG_1008;
            pass1_1008_57f0(uVar3, (param_1.field_0x130), unaff_SS);
        } else {
            if (iVar1 != 0x18c) {
                load_string_1010_84e0(
                  SEG_1010, globals.dat_1050_14cc, 0x100, (param_1.field_0x22));
                return;
            }
//            buffer = SEG_1008;
            pass1_1008_57f0(uVar3, (param_1.field_0x130), unaff_SS);
        }
    }
    // TODO:
//    wsprintf16(buffer, (param_1.field_0x22), param_1.field_0x0);
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn unk_str_op_1018_35b0(param_1: *mut Struct263, param_2: u16, param_3: u16) {
    let mut puVar1: *mut u16;
    let mut piVar2: *mut i16;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut ppcVar5: *mut c_void;
    let mut uVar6: u16;
    struct_1018_35b0_1 *pstruct_var7;
    let mut uVar8: u16;
    let mut uVar9: u16;
    u16 extraout_DX = 0;
//    u16         uVar10;
    unsigned short valist;
    let mut bVar11: bool;
    let mut uVar12: u32;
    let mut uVar13: u32;
    let mut local_12: i16;
    let mut local_10: i16;
    long lStack14;
    let mut uStack10: u16;
    let mut uStack8: u16;
    let mut u_stack6: u16;
    let mut uStack4: u16;
    char *buffer = NULL;

    uVar12 = pass1_1030_8326();
//    uStack4 = (uVar12 >> 0x10);
//    u_stack6 = uVar12;
//    valist  = (WORD *)(param_1 >> 0x10);
//    uVar10  = param_1;
    puVar1 = (param_1.field_0x140);
    bVar11 = (*puVar1 < uStack4);
    if (bVar11 || ((bVar11 || *puVar1 == uStack4 && (*(param_1.field_0x13e) < u_stack6)))) {
        uVar3 = *(param_1.field_0x13c);
        if ((param_1 + 0x13a) < uVar3) {
            uVar13 = switch_1018_3b9e(param_1, (param_1.field_0x12e), uVar3, uStack4, param_2);
            uVar8 = (uVar13 >> 0x10);
            uVar6 = uVar13;
            uStack10 = uVar6;
            uStack8 = uVar8;
            pass1_1018_427c(param_1);
            lStack14 = str_var1(uVar8, uVar6);
            u16 *ptr1 = ptr_from_addr_pair(param_2, local_12);
            u16 *ptr2 = ptr_from_addr_pair(param_2, local_10);
            pass1_1018_3e8c(param_1, valist, ptr1, ptr2);
            if (lStack14 < local_12) {
                local_12 = lStack14;
            }
            uVar4 = *param_1.field_0x138;
            pstruct_var7 = param_1.field_0x136;
            uVar9 = uVar4 | (u32)*pstruct_var7.field_0x0;
            if (uVar9 != 0x0) {
                ppcVar5 = pstruct_var7.field_0x0[0];
                ((FnPtr6)ppcVar5)(0x30, pstruct_var7, uVar4, 0x1);
                uVar9 = extraout_DX;
            }
            pass1_1018_435e(param_1, lStack14, local_12, local_10, uVar9, param_2);
            (param_1.field_0x136) = pstruct_var7;
            *(param_1.field_0x138) = uVar9;
            piVar2 = (param_1.field_0x13a);
            *piVar2 = *piVar2 + 0x1;
            // TODO:
//            wsprintf16(buffer, (param_1.field_0x22), valist);
            return;
        }
        *(param_1.field_0x13e) = u_stack6;
        *(param_1.field_0x140) = uStack4;
        (param_1.field_0x13a) = 0x0;
        pass1_1008_612e(0x8, 0xc, u_stack6);
        *(param_1.field_0x13c) = u_stack6;
    }
}

BOOL16 string_1018_39d8(globals: &mut Globals, param_1: u16, param_2: u32, param_3: u32, char *param_4)

{
    let mut iVar1: i16;
    let mut pcVar2: *mut c_char;
    long  lVar3;
    let mut uVar4: u32;

    uVar4  = param_3;
    pcVar2 = load_string_1010_847e(globals.dat_1050_14cc, SEG_1010);
    iVar1  = pass1_1000_3d7a(pcVar2, uVar4);
    if(iVar1 != 0x0)
    {
        iVar1 = pass1_1000_3d7a(param_4, param_3);
        if(iVar1 != 0x0)
        {
            lVar3 = pass1_1018_4608(param_1, param_2, param_3, param_4);
            if((lVar3 != 0x0) && ((lVar3 + 0xc) == 0x1))
            {
                return 0x1;
            }
        }
    }
    return 0x0;
}

u32 pass1_1018_3a7a(param_1: u32, param_2: u32, param_3: u16, param_4: u16)

{
    let mut uVar1: u32;
    let mut u_var2: u32;

    uVar1 = (param_1 + 0x122);
    u_var2 = string_1008_e586(uVar1, (uVar1 >> 0x10), param_2, param_3, param_4);
    return u_var2;
}

pub fn pass1_1010_dc36(globals: &mut Globals,
                     param_1: u16,
                     param_2: u16,
                     param_3: u16,
                     param_4: u32,
                     struct_1010_dc36_1 *param_5,
                    param_6: u16)

{
    let mut pu32_var_1: *mut u32;
    let mut u16_var_2: u16;
    let mut u32_var_3: u32;
    let mut i16_var_4: i16;
    Struct381*pstruct381_var5 = NULL;
    let mut pu32_var_6: *mut u32;
    let mut u16_var_7: u16;
    let mut u16_var_8: u16;
    let mut pu8_var_9: *mut u8;
    u32         pc_var_10[0x14];

    pu8_var_9  = globals.data_1050_393f;
    pu32_var_6 = pc_var_10;
    for(i16_var_4 = 0x13; i16_var_4 != 0x0; i16_var_4 = i16_var_4- 1)
    {
        pu32_var_1  = pu32_var_6;
        pu32_var_6  = pu32_var_6 + 0x1;
        *pu32_var_1 = 0x0;
    }
    pu32_var_6[0]         = 0x0;
    pu32_var_6[2] = 0x0;
    u16_var_8          = param_3;
    while(true)
    {
//        u16_var_7 = (param_5 >> 0x10);
        if(param_5.field_0x0 < u16_var_8 || param_5.field_0x0 == u16_var_8)
        {
            break;
        }
        u32_var_3     = (param_5.field_0x2);
        u16_var_2     = (param_5.field_0x4);
        pstruct381_var5 = (Struct381*)(void*)(u32_var_3 + u16_var_8 * 0xa);
        *((u32*)(pstruct381_var5 + 0x4)) = (u16_var_8 * 0x2 + param_4);
        u16_var_8         = u16_var_8 + 0x1;
//        u32 x = (u32_var_3 & 0xffff0000) | *(u32*)pstruct381_var5;
        char* y = (char*)ptr_from_addr_pair(param_6, globals.data_1050_393f);//str_var1(param_6, pu8_var_9);
        string_1040_a626(pstruct381_var5, y, u16_var_2);
    }
    return;
}

void load_str_1010_ddf6(globals: &mut Globals, struct_1010_ddf6_1 *param_1, param_2: *mut Struct383)
{
    //    short in_buf_len_5;
    let mut pv_var1: *mut c_void;

    //    in_buf_len_5 = (short) (param_1 >> 0x10);
    *(param_1.field_0x13c) = 0x0;
    pv_var1                 = struct_op_1030_73a8(globals, param_2);
    switch((pv_var1 + 0x12))
    {
    0x1 =>
    2 =>
    0x4 =>
    0x7 =>
    0x9 =>
        break;
     3 =>
    0x5 =>
        break;
    0x6 =>
        break;
    0x8 =>
        break;
    _ =>
        goto switchD_1010_de53_caseD_9;
    }
    load_string_1010_84e0(
      SEG_1010, globals.dat_1050_14cc, 0x3ff, (param_1.field_0x13c));
switchD_1010_de53_caseD_9:
    return;
}

pub fn pass1_1010_de78(globals: &mut Globals, struct_1010_ddf6_1 *param_1, param_2: u32) {
    *(param_1.field_0x13c) = 0x0;
    pass1_1030_809c(param_2);
    load_string_1010_84e0(
      SEG_1030, globals.dat_1050_14cc, 0x3ff, (param_1.field_0x13c));
}

char *load_string_1010_ac92(Globals    *globals,
                            HINSTANCE16 param_1,
                            param_2: u16,
                            param_3: u16,
                            i16         param_4)

{
    let mut pcVar1: *mut c_char;

    if((0x0 < param_4) && (param_4 < 0x43))
    {
        pcVar1 = load_string_1010_847e(globals.dat_1050_14cc, param_1);
        return pcVar1;
    }
    return 0x0;
}

char *string_op_1010_ada6(Globals    *globals,
                          HINSTANCE16 param_1,
                          param_2: u16,
                          param_3: u16,
                          param_4: u16,
                          param_5: i16,
                          i16         param_6)

{
    let mut pcVar1: *mut c_char;
    let mut str_var6: *mut c_char;

    str_var6 = 0x0;
    if(param_6 == 0x6)
    {
        if(param_5 == 0x0)
        {
            goto LAB_1010_adee;
        }
        pcVar1 = string_op_1020_c222(param_5, globals);
    }
    else
    {
        if(param_6 != 0x7)
        {
            return 0x0;
        }
        if(param_5 == 0x0)
            goto LAB_1010_adee;
        pcVar1 = string_op_1020_c2f8(globals, param_5);
    }
    param_1  = SEG_1020;
    str_var6 = str_var1(param_2, pcVar1);
// LAB_1010_adee:
    if(str_var6 == 0x0)
    {
        str_var6 = load_string_1010_847e(globals.dat_1050_14cc,
                                         param_1);
    }
    return str_var6;
}

u16 pass1_1010_ae12(param_1: u16, param_2: u16, param_3: u32, param_4: i16, param_5: u16)

{
    let mut pcVar1: *mut c_char;
    let mut iVar2: i16;
    let mut uStack4: u16;

    if(param_4 == 0x6)
    {
        for(uStack4 = 0x0; uStack4 < 0x15; uStack4 = uStack4 + 0x1)
        {
            pcVar1 = string_op_1020_c222(uStack4, globals);
            iVar2  = pass1_1000_3d7a(param_3, str_var1(param_5, pcVar1));
            if(iVar2 == 0x0)
            {
                return uStack4;
            }
        }
    }
    else
    {
        if(param_4 == 0x7)
        {
            for(uStack4 = 0x0; uStack4 < 0x11; uStack4 = uStack4 + 0x1)
            {
                pcVar1 = string_op_1020_c2f8(globals, uStack4);
                iVar2  = pass1_1000_3d7a(param_3, str_var1(param_5, pcVar1));
                if(iVar2 == 0x0)
                {
                    return uStack4;
                }
            }
        }
    }
    return 0xffff;
}

char *load_string_1010_9432(globals: &mut Globals, HINSTANCE16 param_1)

{
    let mut pcVar1: *mut c_char;

    pcVar1 = load_string_1010_847e(globals.dat_1050_14cc, param_1);
    return pcVar1;
}

char *load_string_1010_847e(cstring param_1_str_buf, HINSTANCE16 param_3_hinstance)

{
    LoadString16(param_3_hinstance, 0x3ff, (param_1_str_buf + 0x682), param_2_buf_len);
    return (char*)str_var1(param_2_buf_len, (param_1_str_buf + 0x682));
}


void load_string_1010_84ac(param_1: u16, HINSTANCE16 param_3)

{
    let mut uVar1: u16;

    uVar1 = param_2;
    LoadString16(param_3, 0x3ff, (param_1 + 0x682), param_2);
    str_op_1008_60e8(str_var1(param_2, (param_1 + 0x682)));
    return;
}


void load_string_1010_84e0(HINSTANCE16 in_hinstance_5,
                           char       *param_2,
                           in_resc_id_3: u16,
                           char       *in_buffer_4)

{
    LoadString16(in_hinstance_5, in_resc_id_3, in_buffer_4, in_buf_len_5);
}


pub fn pass1_1010_84f8(param_1: u32, param_2: i16, param_3: u16)

{
    let mut uVar1: u32;
    let mut uStack780: u16;
    char       local_308[0x100];
    let mut local_208: [u8;100] = [0;100];
    let mut local_108: [u8;104] = [0;104];
    let mut iStack4: i16;

    if((param_2 * 0x10 + 0x10) != 0x3)
    {
        return;
    }
    uVar1   = (param_1 + 0xe88);
    iStack4 = (uVar1 + 0x70);
    str_1000_4d58((param_2 * 0x10 + 0x12), 0x0, 0x0,
                  str_var1(param_3, local_208),
                  str_var1(param_3, local_308));
    unk_str_op_1000_3d3e(str_var1(param_3, local_108), str_var1(param_3, local_208));
    if(local_308[0] == '\0')
    {
        if(iStack4 == 0x0)
        {
            uStack780 = 0x14c0;
        }
        else
        {
            uStack780 = 0x14ba;
        }
        _uStack780 = uStack780;
    }
    else
    {
        _uStack780 = str_var1(param_3, local_308);
    }
    pass1_1000_3cea(str_var1(param_3, local_108), _uStack780);
    set_err_mode_1010_8b14(param_1, str_var1(param_3, local_108), param_3);
}

pub fn pass1_1010_85be(param_1: u32, param_2: i16, param_4: u16)

{
    let mut uVar1: u32;
    let mut local_30a: [u8;100] = [0;100];
    let mut local_20a: [u8;100] = [0;100];
    let mut local_10a: [u8;108] = [0;108];

    if(param_2 == 0x2)
    {
        uVar1 = *(param_3 * 0x4 + 0x2e34);
        str_1000_4d58((uVar1 & 0xffff0000 | (uVar1 + 0x3)), 0x0, 0x0,
                      str_var1(param_4, local_20a),
                      str_var1(param_4, local_30a));
        unk_str_op_1000_3d3e(str_var1(param_4, local_10a), s_male_1050_14c6);
        pass1_1000_3cea(str_var1(param_4, local_10a), str_var1(param_4, local_20a));
        pass1_1000_3cea(str_var1(param_4, local_10a), str_var1(param_4, local_30a));
        set_err_mode_1010_8b14(param_1, str_var1(param_4, local_10a), param_4);
        return;
    }
    set_err_mode_1010_8b14(param_1, *(param_3 * 0x4 + 0x2e34), param_4);
}

pub fn pass1_1010_6034(param_1: u32, param_2: u16)

{
    let mut puVar1: *mut u16;
    let mut iVar2: i16;
    let mut uVar3: u16;

    uVar3          = (param_1 >> 0x10);
    iVar2          = param_1;
    (iVar2 + 0x1e) = 0x1;
    (iVar2 + 0x20) = 0x1;
    (iVar2 + 0x72) = 0x1;
    (iVar2 + 0x74) = 0x1;
    pass1_1010_60a0(param_1);
    puVar1 = pass1_1000_4906((param_1 & 0xffff0000 | (iVar2 + 0x22)), 0x0, 0x40);
    load_string_1010_84ac(globals.data_1050_14cc, SEG_1000);
    *(u16 **)(iVar2 + 0x68) = puVar1;
    (iVar2 + 0x6a)          = param_2;
    load_string_1010_84ac(globals.data_1050_14cc, SEG_1000);
    *(u16 **)(iVar2 + 0x6c) = puVar1;
    (iVar2 + 0x6e)          = param_2;
    return;
}

char *load_string_1008_ee56(void)

{
    let mut pcVar1: *mut c_char;

    pcVar1 = load_string_1010_847e(globals.data_1050_14cc, SEG_1010);
    return pcVar1;
}

u16 pass1_1008_e2a4(param_1: u32, param_2: u32, param_3: u32)

{
    let mut iVar1: i16;
    let mut iVar2: i16;
    let mut unaff_SS: u16;
    let mut pcVar3: *mut c_char;
    long  lVar4;
    let mut uVar5: u32;

    uVar5  = param_2;
    pcVar3 = load_string_1010_847e(globals.data_1050_14cc, SEG_1010);
    iVar1  = pass1_1000_3d7a(pcVar3, uVar5);
    if((iVar1 == 0x0) || (iVar1 = pass1_1000_3d7a(param_3, param_2), iVar1 == 0x0))
    {
        return 0x0;
    }
    lVar4 = pass1_1008_e8cc(unaff_SS, param_1, param_2, param_3);
    if(lVar4 != 0x0)
    {
        iVar1 = (lVar4 + 0xc);
        iVar2 = iVar1 + -0x1;
        if(iVar2 == 0x0)
        {
            return 0x2;
        }
        if(iVar2 < 0x1)
        {
            return 0x0;
        }
        if(SBORROW2(iVar2, 0x1))
        {
            return 0x0;
        }
        if(0x1 < iVar1 + -0x2)
        {
            return 0x0;
        }
    }
    return 0x1;
}


pub fn pass1_1008_e320(Globals   *globals,
                     param_1: *mut Struct102,
                     param_2: u32,
                     param_3: u32,
                    param_4: u16)

{
    let mut paVar1: *mut Struct103;
    let mut u_var2: *mut Struct103;
    let mut uVar3: u16;
    let mut uVar4: u16;
//    Struct102 *iVar5;
//    Struct102 *uVar6;
    let mut pcVar5: *mut c_char;
    long         lVar6;
    let mut uVar7: u32;

//    uVar6 = (param_1 >> 0x10);
//    iVar5 = param_1;
    fn_ptr_1000_17ce(&param_1.field_0x1e, SEG_1000);
    param_1.field_0x1e = 0x0;
    uVar7              = param_2;
    pcVar5             = load_string_1010_847e(globals.dat_1050_14cc, SEG_1010);
    uVar4              = (pcVar5 >> 0x10);
    u_var2              = pass1_1000_3d7a(pcVar5, uVar7);
    if((u_var2 != 0x0) && (u_var2 = pass1_1000_3d7a(param_3, param_2), u_var2 != 0x0))
    {
        lVar6 = pass1_1008_e8cc(param_4, param_1, param_2, param_3);
        uVar3 = (lVar6 >> 0x10);
        u_var2 = lVar6;
        uVar4 = uVar3 | u_var2;
        if((uVar4 != 0x0)
           && (((paVar1 = u_var2.field_0xc, u_var2 = paVar1, paVar1 != 0x0 && (u_var2 = (&paVar1[-0x1].field_0xc + 0x1), u_var2 != 0x0))
                && (u_var2 = &paVar1[-0x1].field_0xc, u_var2 != 0x0))))
        {
            u_var2 = &paVar1[-0x1].field_0xb;
        }
    }
    load_string_1010_84ac(globals.dat_1050_14cc, SEG_1010);
    param_1.field_0x1e = u_var2;
    param_1.field_0x20 = uVar4;
}

void load_str_and_spri16f_1008_b69c(globals: &mut Globals,
                                    param_1: *mut Struct25,
                                    WORD     *param_2,
                                    u8       *param_3)

{
    let mut ppcVar1: *mut *mut c_void;
    let mut in_buffer_4: *mut c_char;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut uVar4: u16;
//    Struct25 *iVar5;
//    u16         uVar5;
    let mut pstruct26_var6: *mut Struct26;
    Struct26*pstruct26_var7;
    let mut iStack516: i16;
    char        local_202[0x100];
    char        local_102[0x100];

    in_buffer_4 = local_202;
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, 0x100, local_202);
//    uVar5 = (param_1 >> 0x10);
//    iVar5 = param_1;
    if(param_1.field_0xa == 0x0)
    {
        mem_op_1000_179c(0xc, param_3, 0);
        if((param_3 | in_buffer_4) == 0x0)
        {
            pstruct26_var6 = 0x0;
        }
        else
        {
            pstruct26_var6
              = set_struct_1008_574a(str_var1(param_3, in_buffer_4));
        }
        param_1.field_0xa         = pstruct26_var6;
//        (param_1.field_0xc) = (pstruct26_var6 >> 0x10);
        for(iStack516 = 0x1; iStack516 < 0x6; iStack516 = iStack516 + 0x1)
        {
            mem_op_1000_179c(0x12, (pstruct26_var6 >> 0x10), 0);
            if(pstruct26_var6 == 0x0)
            {
                pstruct26_var7 = 0x0;
            }
            else
            {
                pstruct26_var7 = set_stuct_1008_b0bc(pstruct26_var6);
            }
            uVar3 = (pstruct26_var7 >> 0x10);
            uVar4 = uVar3;
            // TODO:
//            wsprintf16(SEG_1000, local_102, param_2);
            u_var2         = str_op_1008_60e8(local_102));
            (pstruct26_var7 + 0x4) = u_var2;
            (pstruct26_var7 + 0x6) = uVar4;
            ppcVar1       = (param_1.field_0xa.field_0x8);
            pstruct26_var6         = (**ppcVar1)();
        }
        param_1.field_0x22 = 0x5;
    }
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void load_str_and_spri16f_1008_b78a(globals: &mut Globals,
                                    param_1: u32,
                                    WORD    *param_2,
                                    u8      *param_3,
                                   param_4: u16)

{
    let mut pi_var1: *mut i16;
    let mut ppcVar2: *mut *mut c_void;
    let mut uVar3: u16;
    let mut iVar4: i16;
    let mut uVar5: u16;
    let mut uVar6: u32;
    char       local_206[0x100];
    char       local_106[0x100];
    let mut iStack6: i16;
    let mut uStack4: u16;

    mem_op_1000_179c(0x12, param_3, 0);
    if((param_3 | param_4) == 0x0)
    {
        uVar6 = 0x0;
    }
    else
    {
        uVar6 = set_stuct_1008_b0bc(str_var1(param_3, param_4));
    }
    uStack4 = (uVar6 >> 0x10);
    load_string_1010_84e0(SEG_1010, globals.dat_1050_14cc, 0x100, local_206);
    iStack6 = uVar6;
    uVar5   = (param_1 >> 0x10);
    iVar4   = param_1;
    pi_var1  = (iVar4 + 0x22);
    *pi_var1 = *pi_var1 + 0x1;
    wsprintf16(SEG_1010, local_106, param_2);
    iStack6         = uVar6;
    uVar3           = str_op_1008_60e8(str_var1(param_2, local_106));
    iStack6         = uVar6;
    (iStack6 + 0x4) = uVar3;
    (iStack6 + 0x6) = (uVar6 >> 0x10);
    ppcVar2         = ((iVar4 + 0xa) + 0x8);
    (**ppcVar2)(LAST_SEGMENT, (iVar4 + 0xa), iStack6, uStack4);
    return;
}


char *load_string_1008_b1f0(Globals *globals)

{
    let mut pcVar1: *mut c_char;

    pcVar1 = load_string_1010_847e(globals.dat_1050_14cc, SEG_1010);
    return pcVar1;
}


pub fn pass1_1008_9c86(param_1: u32, char *param_2, i16 param_3)

{
    let mut uVar1: u16;

    uVar1 = str_op_1000_3da4((param_1 + 0xa));
    if(param_3 < uVar1)
    {
        uVar1 = param_3 - 0x1;
    }
    str_op_1000_3dbe(param_2, (param_1 + 0xa)), uVar1);
}

u32 *str_1008_6d8a(globals: &mut Globals,
                  param_1: *mut u32,
                   char    *param_2,
                   param_3: u16,
                   param_4: u16,
                   u8       param_5)

{
    let mut u16_var1: u16;
//    u16 u_var2;

//    u_var2 = (param_1 >> 0x10);
    param_1.field_0x0 = 0x0;
    (param_1 + 0x4) = 0xffff;
    globals.dat_1050_0312 = 0x0004;//&DAT_1050_0004;
      sys_1000_3f9c(0x65a0,
                    SEG_1050,
                    globals.dat_1050_031c,
                    0x4,
                    &stack0xfffe,
                    u_var2,
                    SEG_1000,
                    param_4,
                    param_5);
    u16_var1           = str_op_1008_60e8(param_2);
    param_1         = u16_var1;
    param_1.field_0x2 = param_3;
    return param_1;
}


void struct_op_1008_48fe(param_1: *mut Struct81, param_2: u16, char *param_3, param_4: u16)

{
    let mut uVar1: u16;
    // Struct81 *iVar2;
    // u16         uVar3;

    // uVar3             = (param_1 >> 0x10);
    // iVar2             = param_1;
    param_1           = addr_table_1008_380a;//0x389a;
    param_1.field_0x2  = SEG_1008;
    param_1.field_0x4  = 0x0;
    &param_1.field_0x8 = 0x0;
    param_1.field_0xc  = 0xffff;
    param_1.field_0xe  = 0x0;
    param_1.field_0x12 = 0x0;
    param_1.field_0x16 = 0x0;
    param_1.field_0x1a_addr_offset = 0x0;
    param_1.field_0x1e = 0x0;
    param_1.field_0x22 = param_2;
    param_1           = addr_table_1008_4c4c;
    param_1.field_0x2  = SEG_1008;
    uVar1             = str_op_1008_60e8(param_3);
    param_1.field_0x8  = uVar1;
    param_1.field_0xa  = param_4;
}


void  pass1_1008_48de(param_1: u16, param_2: u32, param_3: i16, param_4: u16,param_5: *mut u16, param_6: i16, param_7: i16, param_8: *mut u8, param_9: u16, param_10: u16, char param_11, param_12: u16, param_13: u8)

{
    let mut pbVar1: *mut u8;
    let mut u_var2: u32;
    let mut bVar3: u8;
    let mut uVar4: u16;
    let mut bVar5: u8;
    let mut uVar6: u16;
    let mut puVar7: *mut u8;
    let mut iVar8: i16;
    let mut uVar9: u16;

    uVar6   = param_4 & 0xff | (u8)((param_4 >> 0x8) + param_4 + param_11) << 0x8;
    puVar7  = (param_6 + 0x1);
    pbVar1  = (u8 *)(param_5 + param_7);
    bVar5   = (u8)(param_4 & 0xff);
    *pbVar1 = *pbVar1 | bVar5;
    bVar3   = in(0x46);
    pbVar1  = (u8 *)(param_5 + param_7);
    *pbVar1 = *pbVar1 | bVar5;
    if(param_3 == 0x1)
    {
        pbVar1   = (u8 *)(param_5 + param_7);
        *pbVar1  = *pbVar1 | bVar5;
        iVar8    = param_7 + 0x1;
        pbVar1   = (u8 *)(param_5 + iVar8);
        bVar5    = (u8)param_12;
        *pbVar1  = *pbVar1 | bVar5;
        pbVar1   = (u8 *)(param_5 + iVar8);
        *pbVar1  = *pbVar1 | bVar5;
        *param_8 = bVar3;
        pbVar1   = (u8 *)(param_5 + iVar8);
        *pbVar1  = *pbVar1 | bVar5;
        uVar6    = param_12;
        if(*pbVar1 != 0x0)
        {
            pbVar1                            = (u8 *)(param_5 + iVar8);
            *pbVar1                           = *pbVar1 | bVar5;
            puVar7                            = (&param_12 + 0x1);
            param_5                           = (param_2 >> 0x8);
            CONCAT13(param_13, param_2._1_3_) = addr_table_1008_380a[32]; //0x389a;
            param_5[0x1]                      = SEG_1008;
            param_9                           = (CONCAT13(param_13, param_2._1_3_) >> 0x10);
            (param_5 + 0x2)                   = 0x0;
            (param_5 + 0x4)                   = 0x0;
            param_5[0x6]                      = 0xffff;
            (param_5 + 0x7)                   = 0x0;
            (param_5 + 0x9)                   = 0x0;
            (param_5 + 0xb)                   = 0x0;
            (param_5 + 0xd)                   = 0x0;
            param_5[0xf]                      = 0x0;
        }
    }
    else
    {
        param_5.field_0x11 = bVar3 | 0x800;
    }
    param_5.field_0x11 = (puVar7 + 0xa);
    param_5.field_0x0      = addr_table_1008_4c4c; //0x4c4c;
    param_5.field_0x1  = SEG_1008;
    uVar4         = str_op_1008_60e8((puVar7 + 0xc));
    u_var2         = (puVar7 + 0x6);
    uVar9         = (u_var2 >> 0x10);
    iVar8         = u_var2;
    (iVar8 + 0x8) = uVar4;
    (iVar8 + 0xa) = uVar6;
}
pub fn pass1_1008_049c(param_1: u16, param_2: u16, char *param_3) {
    let mut uVar1: u16;
    let mut pu_var2: *mut u8;

    if(param_3 != 0x0)
    {
        uVar1 = str_op_1000_3da4(param_3);
        if(uVar1 != 0x0)
        {
            pu_var2 = pass1_1000_545a(param_3 & 0xffff0000 | (param_3 + 0x1), 0x105000cc);
            if(pu_var2 == 0x0)
            {
                globals.PTR_LOOP_1050_02ec = pu_var2;
            }
        }
    }
    return;
}


void str_1000_4d58(char *in_string_1, char *in_string_2, param_3: u32, param_4: u32, WNDCLASS16 *param_5)

{
    let mut uVar1: u16;
    let mut iVar2: i16;
    let mut uVar3: u16;
    let mut uVar4: u16;
    let mut uVar5: u16;
    let mut pcStack18: *mut c_char;
    let mut uStack12: u16;
    let mut uStack10: u16;
    let mut uStack8: u16;
    let mut u_stack6: u16;

    uStack10 = 0x0;
    uStack12 = 0x0;
    uVar4    = (in_string_1 >> 0x10);
    iVar2    = in_string_1;
    if((*in_string_1 == '\0') || (*(iVar2 + 0x1) != ':'))
    {
        if(in_string_2 != 0x0)
        {
            *in_string_2 = '\0';
        }
    }
    else
    {
        if(in_string_2 != 0x0)
        {
            *in_string_2         = *in_string_1;
            *(in_string_2 + 0x1) = *(iVar2 + 0x1);
            *(in_string_2 + 0x2) = 0x0;
        }
        in_string_1 = (in_string_1 & 0xffff0000 | (iVar2 + 0x2));
    }
    u_stack6   = 0x0;
    uStack8   = 0x0;
    pcStack18 = in_string_1;
    while(true)
    {
        uVar5 = (pcStack18 >> 0x10);
        uVar3 = pcStack18;
        if(*pcStack18 == '\0')
            break;
        if((*pcStack18 == '/') || (*pcStack18 == '\\'))
        {
            uStack8 = uVar3 + 0x1;
            u_stack6 = uVar5;
        }
        else
        {
            if(*pcStack18 == '.')
            {
                uStack12 = uVar3;
                uStack10 = uVar5;
            }
        }
        pcStack18 = (pcStack18 & 0xffff0000 | (uVar3 + 0x1));
    }
    if((u_stack6 | uStack8) == 0x0)
    {
        if(param_3 != 0x0)
        {
            *param_3 = 0x0;
        }
    }
    else
    {
        if(param_3 != 0x0)
        {
            uVar1 = uStack8 - in_string_1;
            if(0xff < uVar1)
            {
                uVar1 = 0xff;
            }
            str_op_1000_3dbe((param_3 & 0xffff | param_3 << 0x10), in_string_1, uVar1);
            *(param_3 + uVar1) = 0x0;
        }
        in_string_1 = str_var1(u_stack6, uStack8);
    }
    if(((uStack10 | uStack12) != 0x0) && (in_string_1 <= uStack12))
    {
        if(param_4 != 0x0)
        {
            uVar1 = uStack12 - in_string_1;
            if(0xff < uVar1)
            {
                uVar1 = 0xff;
            }
            str_op_1000_3dbe((param_4 & 0xffff | param_4 << 0x10), (in_string_1 & 0xffff | in_string_1 << 0x10), uVar1);
            *(param_4 + uVar1) = 0x0;
        }
        if(param_5 == 0x0)
        {
            return;
        }
        uVar1 = uVar3 - uStack12;
        if(0xff < uVar1)
        {
            uVar1 = 0xff;
        }
        str_op_1000_3dbe((param_5 & 0xffff | param_5 << 0x10), str_var1(uStack10, uStack12), uVar1);
        *(param_5 + uVar1) = 0x0;
        return;
    }
    if(param_4 != 0x0)
    {
        uVar1 = uVar3 - in_string_1;
        if(0xff < uVar1)
        {
            uVar1 = 0xff;
        }
        str_op_1000_3dbe((param_4 & 0xffff | param_4 << 0x10), (in_string_1 & 0xffff | in_string_1 << 0x10), uVar1);
        *(param_4 + uVar1) = 0x0;
    }
    if(param_5 != 0x0)
    {
        *&param_5->style = 0x0;
    }
    return;
}

u16 str_op_1000_3da4(char *param_1)

{
    let mut pcVar1: *mut c_char;
    let mut u_var2: u16;
    let mut pcVar3: *mut c_char;
    let mut bVar4: bool;

    pcVar3 = param_1;
    bVar4  = true;
    u_var2  = 0xffff;
    do
    {
        if(u_var2 == 0x0)
            break;
        u_var2  = u_var2 - 0x1;
        pcVar1 = pcVar3;
        pcVar3 = pcVar3 + 0x1;
        bVar4  = *pcVar1 == '\0';
    } while(!bVar4);
    u_var2 = ~u_var2;
    if(bVar4)
    {
        u_var2 = u_var2 - 0x1;
    }
    return u_var2;
}


u8 str_op_1000_3dbe(char *param_1, char *param_2, param_3: u16)

{
    let mut pcVar1: *mut c_char;
    char  cVar2;
    let mut pcVar3: *mut c_char;
    let mut pcVar4: *mut c_char;
    let mut uVar5: u16;

    uVar5  = (param_1 >> 0x10);
    pcVar4 = param_1;
    pcVar3 = param_2;
    if(param_3 != 0x0)
    {
        do
        {
            pcVar1 = pcVar3;
            pcVar3 = pcVar3 + 0x1;
            cVar2  = *pcVar1;
            if(cVar2 == '\0')
                break;
            pcVar1  = pcVar4;
            pcVar4  = pcVar4 + 0x1;
            *pcVar1 = cVar2;
            param_3 = param_3 - 0x1;
        } while(param_3 != 0x0);
        for(; param_3 != 0x0; param_3 = param_3 - 0x1)
        {
            pcVar1  = pcVar4;
            pcVar4  = pcVar4 + 0x1;
            *pcVar1 = '\0';
        }
    }
    return param_1;
}


i16 pass1_1000_3ec0(globals: &mut Globals, param_1: u16, param_2: u16)

{
    let mut uVar1: u16;
    let mut u_var2: u16;
    let mut uVar3: u16;
    let mut unaff_SI: u16;
    let mut uVar4: u16;
    let mut puVar4: *mut u32;

    puVar4 = str_var1(globals.PTR_LOOP_1050_5fc0, globals.PTR_LOOP_1050_5fbe);
    if(((globals.PTR_LOOP_1050_5fc0 | globals.PTR_LOOP_1050_5fbe) != 0x0) && ((param_2 | param_1) != 0x0))
    {
        uVar1 = str_op_1000_3da4(str_var1(param_2, param_1));
        while(true)
        {
            uVar4 = (puVar4 >> 0x10);
            uVar3 = puVar4;
            if((*(uVar3 + 0x2) | *puVar4) == 0x0)
                break;
            u_var2 = str_op_1000_3da4(str_var1((uVar3 + 0x2), *puVar4));
            if(((uVar1 < u_var2) && (*(*puVar4 + uVar1) == '=')) && (u_var2 = pass1_1000_3de8(str_var1((uVar3 + 0x2), *puVar4),
                                            str_var1(param_2, param_1), uVar1, unaff_SI, uVar3), u_var2 == 0x0))
            {
                return *puVar4 + uVar1 + 0x1;
            }
            puVar4 = (puVar4 & 0xffff0000 | (uVar3 + 0x4));
        }
    }
    return 0x0;
}


char* poss_str_op_1000_28dc(globals: &mut Globals, i16 param_1)

{
    let mut pi_var1: *mut i16;
    cstring piVar2;
    let mut iVar2: i16;
    cstring piVar3;

    piVar3 = globals.u16_1050_63fe;
    do
    {
        pi_var1 = piVar3;
        piVar3 = (PCHAR)(piVar3 + 0x2);
        iVar2  = *pi_var1;
        piVar2 = piVar3;
        if((iVar2 == param_1) || (piVar2 = (PCHAR)(iVar2 + 0x1), piVar2 == (PCHAR)0x0))
        {
            return (PCHAR)piVar2;
        }
        iVar2 = -0x1;
        do
        {
            if(iVar2 == 0x0)
                break;
            iVar2  = iVar2 + -0x1;
            pi_var1 = piVar3;
            piVar3 = (PCHAR)(piVar3 + 0x1);
        } while(*pi_var1 != '\0');
    } while(true);
}


pub fn pass1_1000_2913(globals: &mut Globals, param_1: i16, param_2: u16, param_3: u16)

{
    let mut string1: *mut c_char;
    let mut string2: *mut c_char;
    let mut i16_var3: i16;

    if(globals.PTR_LOOP_1050_61ec != 0x0)
    {
        string2 = poss_str_op_1000_28dc(globals, param_1);
        if(string2 != NULL)
        {
            i16_var3 = -0x1;
            do
            {
                if(i16_var3 == 0x0)
                    break;
                i16_var3 -= 1;
                string1 = string2;
                string2 = string2 + 0x1;
            } while(*string1 != '\0');
            pass1_1000_55b1(globals, 0x2944, param_2, param_3);
        }
    }
}

#pragma clang diagnostic pop
