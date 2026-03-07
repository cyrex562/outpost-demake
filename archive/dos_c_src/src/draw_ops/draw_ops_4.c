#include "draw_ops_4.h"

#include "address_tables/function_tables.h"
#include "op_int.h"
#include "op_winapi.h"
#include "string_consts.h"
#include "string_ops.h"
#include "struct_20.h"
#include "struct_43.h"
#include "struct_ops/struct_ops_1.h"
#include "structs/structs_0xx/structs_2x.h"
#include "unk/unk_15.h"
#include "unk/unk_18.h"
#include "win_ops/win_ops_3.h"
#include "win_ops/win_ops_4.h"

#include <stdbool.h>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCInconsistentNamingInspection"
void  begin_end_paint_1008_97c8(HWND16 param_1)

{
    PAINTSTRUCT16 local_22;

    BeginPaint16(param_1, &local_22);
    EndPaint16((HWND16)LAST_SEGMENT, &local_22);
    return;
}

void  get_stock_obj_1008_9c56(u16 param_1)

{
    GetStockObject16(param_1);
    return;
}


Struct23 *unk_draw_op_1008_80ee(Globals *globals, Struct23 *param_1, u16 param_2)

{
    HCURSOR16 cursor;
    HGDIOBJ16 stock_obj;

    param_1->field_0x0          = addr_table_1008_380a[36]; // 0x389a;
    param_1->field_0x2          = SEG_1008;
    param_1->field_0x54         = 0x0;
    param_1->hobject_field_0x56 = 0x0;
    param_1->hcursor_field_0x58 = 0x0;
    param_1->field_0x0          = addr_table_1008_87c8; // 0x87c8;
    param_1->field_0x2          = SEG_1008;
    unk_str_op_1000_3d3e(param_1->field_0x4, globals->s_MicroSpinControl_1050_0370);
    param_1->field_0x54         = 0x3;
    cursor                      = LoadCursor16(SEG_1000, get_rsrc_string(0x7f00));
    param_1->hcursor_field_0x58 = cursor;
    stock_obj                   = GetStockObject16(LAST_SEGMENT);
    param_1->hobject_field_0x56 = stock_obj;
    pass1_1008_818c(param_1, LAST_SEGMENT, param_2);
    return param_1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void draw_op_1008_8288(u16 param_1, u32 param_2, HWND16 param_3)

{
    HGDIOBJ16     HVar1;
    HGDIOBJ16     HVar2;
    i16           x;
    u16           uVar3;
    RECT16        local_58;
    u16           uStack84;
    u16           uStack82;
    HBRUSH16      HStack80;
    HPEN16        HStack78;
    HPEN16        HStack76;
    HDC16         HStack74;
    u16           uStack72;
    u16           uStack70;
    u16           u_stack68;
    u16           u_stack66;
    u16           u_stack64;
    u16           u_stack62;
    PAINTSTRUCT16 local_3c;
    i16           local_1c;
    i16           iStack26;
    i16           iStack24;
    i16           iStack22;
    i16           iStack20;
    i16           iStack18;
    i16           local_10;
    i16           iStack14;
    i16           iStack12;
    i16           iStack10;
    i16           iStack8;
    i16           iStack6;
    u16           uStack4;

    HStack74 = BeginPaint16(param_3, &local_3c);
    uStack4  = 0x0;
    HStack76 = CreatePen16((u16)LAST_SEGMENT, (u16)_PTR_LOOP_1050_0368, (COLORREF)(globals->_PTR_LOOP_1050_0368 >> 0x10));
    HStack78 = CreatePen16((u16)LAST_SEGMENT, (u16)DAT_1050_0364, (COLORREF)(DAT_1050_0364 >> 0x10));
    HStack80 = CreateSolidBrush16((COLORREF)LAST_SEGMENT);
    GetClientRect16((HWND16)LAST_SEGMENT, &local_58);
    u_stack62 = uStack84;
    u_stack64 = uStack82;
    u_stack66 = uStack84 >> 0x1;
    u_stack68 = uStack82 >> 0x1;
    uStack70 = uStack84 >> 0x2;
    uStack72 = uStack82 >> 0x2;
    HVar1    = GetStockObject16((u16)LAST_SEGMENT);
    HVar1    = SelectObject16((HDC16)LAST_SEGMENT, HVar1);
    HVar2    = GetStockObject16((u16)LAST_SEGMENT);
    HVar2    = SelectObject16((HDC16)LAST_SEGMENT, HVar2);
    Rectangle16((HDC16)LAST_SEGMENT, uStack82, uStack84, local_58.y, local_58.x);
    MoveTo16((HDC16)LAST_SEGMENT, u_stack68, 0x0);
    LineTo16((HDC16)LAST_SEGMENT, u_stack68, u_stack62);
    uVar3 = (param_2 >> 0x10);
    if((*(u8 *)(param_2 + 0x4) & 0x4) != 0x0)
    {
        uStack4 = 0x1;
    }
    local_10 = u_stack66 + uStack4;
    iStack14 = uStack72 + uStack4 + -0x2;
    iStack12 = local_10 + -0x3;
    iStack10 = uStack72 + uStack4 + 0x1;
    iStack8  = local_10 + 0x3;
    iStack6  = iStack10;
    SelectObject16((HDC16)LAST_SEGMENT, HStack76);
    if(uStack4 == 0x0)
    {
        MoveTo16((HDC16)LAST_SEGMENT, u_stack68 - 0x2, 0x1);
        LineTo16((HDC16)LAST_SEGMENT, 0x1, 0x1);
        LineTo16((HDC16)LAST_SEGMENT, 0x1, u_stack62 - 0x1);
    }
    uStack4  = ((*(u8 *)(param_2 + 0x4) & 0x8) != 0x0);
    local_1c = u_stack66 + uStack4;
    iStack22 = (u_stack64 - uStack72) + uStack4;
    iStack26 = iStack22 + 0x1;
    iStack24 = local_1c + -0x3;
    iStack22 = iStack22 + -0x2;
    iStack20 = local_1c + 0x3;
    iStack18 = iStack22;
    if(uStack4 == 0x0)
    {
        MoveTo16((HDC16)LAST_SEGMENT, uStack82 - 0x2, 0x1);
        x = u_stack68 + 0x1;
        LineTo16((HDC16)LAST_SEGMENT, x, 0x1);
        LineTo16((HDC16)LAST_SEGMENT, x, u_stack62 - 0x1);
    }
    SelectObject16((HDC16)LAST_SEGMENT, HStack78);
    SelectObject16((HDC16)LAST_SEGMENT, HStack80);
    Polygon16((HDC16)LAST_SEGMENT, (POINT16 *)(&PTR_LOOP_1050_0002 + 0x1), (u16)&local_10);
    Polygon16((HDC16)LAST_SEGMENT, (POINT16 *)(&PTR_LOOP_1050_0002 + 0x1), (u16)&local_1c);
    SelectObject16((HDC16)LAST_SEGMENT, HVar2);
    SelectObject16((HDC16)LAST_SEGMENT, HVar1);
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    EndPaint16((HWND16)LAST_SEGMENT, &local_3c);
}


Struct20 *unk_draw_op_1008_61b2(Globals *globals, Struct20 *param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5)

{
    HGDIOBJ16   l_hgdiobj_1;
    HCURSOR16   l_hcursor_1;
    u8         *extraout_DX;
    u8         *puVar1;
    i16         unaff_DI;
    u16        *l_struct_2;
//    Struct20 *uVar5;
//    Struct20 *iVar1;
    Struct20 *iVar4;
    u16        *uVar1;

//    iVar1 = (Struct20 *)param_1;
//    uVar5 = (Struct20 *)(param_1 >> 0x10);
    set_struct_1008_687a(param_1, param_4);
    iVar1->field_0xde  = param_2;
    iVar1->field_0xe0  = 0x0;
    param_1->field_0x0 = addr_table_1008_6378;//0x6378;
    iVar1->fld2_segment = SEG_1008;
    puVar1             = extraout_DX;
    unk_str_op_1000_3d3e(iVar1->field_0x5b, globals->s_DanBrotherton_1050_0302);
    l_hgdiobj_1               = GetStockObject16(SEG_1000);
    iVar1->hgdiobj_field_0xc6 = l_hgdiobj_1;
    l_hcursor_1               = LoadCursor16(LAST_SEGMENT, 0x7f00);
    iVar1->hcursor_field_0xc4 = l_hcursor_1;
    iVar1->field_0xc8         = 0x200b;
    iVar1->field_0xac         = 0x45000000;
    iVar1->field_0xbc         = (param_4 + 0x8);
    l_struct_2                = mixed_1010_20ba(
      NULL, globals->u16_1050_0ed0, 0x48, param_5, puVar1, unaff_DI);
    uVar1                     = (l_struct_2 >> 0x10);
    iVar1->field_0xb4         = 0x0;
    iVar1->field_0xb6         = 0x0;
    iVar1->field_0xb8         = (l_struct_2 + 0xa);
    iVar1->field_0xba         = (l_struct_2 + 0xc);
    iVar1->field_0xca         = param_3;
    win_ui_reg_class_1008_96d2(globals, param_1, SEG_1010, param_5);
    return param_1;
}


void  fill_rect_1008_62c0(HWND16 param_1)

{
    RECT16        local_2e[0x2];
    RECT16       *pRStack38;
    HDC16         HStack36;
    PAINTSTRUCT16 local_22;

    HStack36  = BeginPaint16(param_1, &local_22);
    pRStack38 = (RECT16 *)CreateSolidBrush16((COLORREF)LAST_SEGMENT);
    GetClientRect16((HWND16)LAST_SEGMENT, local_2e);
    FillRect16((HDC16)LAST_SEGMENT, pRStack38, (HBRUSH16)local_2e);
    EndPaint16((HWND16)LAST_SEGMENT, &local_22);
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    return;
}


HPALETTE16  palette_op_1008_4e08(Struct13 *param_1, BOOL16 param_2, u16 param_3, HDC16 param_4)

{
    HPALETTE16 HVar1;

    create_palette_1008_4e38(param_1, param_4, param_3);
    HVar1 = SelectPalette16(param_4, 0x0, param_2);
    RealizePalette16((HDC16)LAST_SEGMENT);
    return HVar1;
}

// WARNING: Unable to use type for symbol uVar3

void  create_palette_1008_4e38(Struct13 *in_struct_1, LOGPALETTE *in_log_palette_2, u8 *param_3)

{
    i16        *pi_var1;
    u16        *pu_var2;
    u16         uVar4;
//    Struct13 *local_struct_1;
    i16         iVar5;
    i16         iVar6;
//    u16         uVar8;
    u16         uVar9;
    u16         uVar10;
    i16         iStack14;
    u8         *puStack12;
    u8         *puStack8;
    u16        *uVar3;

//    uVar8          = (in_struct_1 >> 0x10);
//    local_struct_1 = (Struct13 *)in_struct_1;
    uVar4          = (in_struct_1->field_0xc + 0x2) * 0x4;
    if(in_struct_1->field_0xe == 0x0)
    {
        in_log_palette_2 = (LOGPALETTE *) SEG_1000;
        mem_op_1000_179c(uVar4, param_3, 0);
        in_struct_1->field_0xe = uVar4;
        (in_struct_1->field_0xe + 0x2) = param_3;
        *in_struct_1->field_0xe         = 0x300;
        uVar3                              = in_struct_1->field_0xe;
        (uVar3 + 0x2)                      = in_struct_1->field_0xc;
        pu_var2                             = in_struct_1->field_0xe;
        puStack8                           = (pu_var2 & 0xffff0000 | (pu_var2 + 0x4));
        puStack12                          = in_struct_1->field_0x4;
        iStack14                           = 0x0;
        while(true)
        {
            pi_var1 = &in_struct_1->field_0xc;
            if(*pi_var1 == iStack14 || *pi_var1 < iStack14)
                break;
            uVar9          = (puStack12 >> 0x10);
            iVar5          = puStack12;
            *puStack8      = *(iVar5 + 0x2);
            uVar10         = (puStack8 >> 0x10);
            iVar6          = puStack8;
            *(iVar6 + 0x1) = *(iVar5 + 0x1);
            *(iVar6 + 0x2) = *puStack12;
            *(iVar6 + 0x3) = 0x0;
            iStack14       = iStack14 + 0x1;
            puStack8       = (puStack8 & 0xffff0000 | (iVar6 + 0x4));
            puStack12      = (puStack12 & 0xffff0000 | (iVar5 + 0x4));
        }
    }
    CreatePalette16(in_log_palette_2);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void file_and_draw_op_1008_4f20(Globals  *globals,
                                Struct76 *param_1,
                                u32       param_2,
                                u16       param_3,
                                u32       param_4,
                                u16       param_5)

{
    u32  uVar1;
    u16         b_force_background;
    COLORREF    color;
    COLORREF    color_00;
    u16         x;
    u16         u_var2;
    LPCSTR      output;
//    i16         iVar3;
//    u16         uVar4;
    Struct43 *paVar5;
    u32         uVar6;
    DEVMODEA   *init_data;
    HDC16       local_2c;
    LPCSTR pCStack42;
    LPCSTR pCStack40;
    u8 local_26[0x24];

    pass1_1008_4016((Struct76 *) param_1);
//    uVar4 = (param_1 >> 0x10);
//    iVar3 = param_1;
    *(param_1->field_0x1e) = param_4;
    (param_1->field_0x22) = param_3;
    *(param_1->field_0x24) = param_2;
    param_1->field_0x0 = addr_table_1008_50a2;//0x50a2; //s_SCi16ernalPutBldg2_site_0x_08lx__1050_5099 + 0x9;
    (param_1 + 0x2) = SEG_1008;
    paVar5 = unk_io_op_1010_830a(globals->dat_1050_14cc, 0x2, param_5);
    u_var2 = (paVar5 >> 0x10);
    struct_op_1008_48fe((Struct81 *)str_var1(param_5, local_26), 0x1, paVar5, u_var2);
    read_file_1008_49e8(str_var1(param_5, local_26), SEG_1010, u_var2);
    pass1_1008_5068((Struct76 *) param_1, (Struct83 *)str_var1(param_5, local_26));
    pass1_1008_47cc((Struct76 *) param_1);
    pass1_1008_4834((Struct76 *) param_1);
    init_data = (DEVMODEA *) 0x0;
    uVar6 = pass1_1008_4772((Struct76 *) param_1);
    output             = (uVar6 >> 0x10);
    pCStack42          = uVar6;
    pCStack40          = output;
    local_2c           = CreateDC16(SEG_1010, pCStack42, output, init_data);
    b_force_background = palette_op_1008_46e4(param_1, &local_2c, output, LAST_SEGMENT);
    color              = SetBkColor16((HDC16)LAST_SEGMENT, 0xffff);
    color_00           = SetTextColor16((HDC16)LAST_SEGMENT, *(COLORREF *)(param_1 + 0x22));
    x                  = str_op_1000_3da4((param_1 + 0x1e));
    uVar1              = (param_1->field_0x1e);
    TextOut16(SEG_1000, x, (u16)uVar1, (uVar1 >> 0x10), 0x0);
    SetBkColor16((HDC16)LAST_SEGMENT, color);
    SetTextColor16((HDC16)LAST_SEGMENT, color_00);
    SelectPalette16((HDC16)LAST_SEGMENT, 0x0, b_force_background);
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    DeleteDC16((HDC16)LAST_SEGMENT);
    close_file_1008_496c(local_26, param_5);
}


BOOL16  cleanup_palette_1008_56e2(u32 param_1, HDC16 param_2)

{
    HPALETTE16 HVar1;
    u16        u_var2;

    u_var2                          = (param_1 >> 0x10);
    HVar1                          = SelectPalette16(param_2, 0x0, *(BOOL16 *)(param_1 + 0x4));
    *(HPALETTE16 *)(param_1 + 0x4) = HVar1;
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    return 0x1;
}


void  set_di_bits_to_device_1008_45d6(Struct76 *param_1, HDC16 param_2)

{
    u16      info;
    u32 uVar1;
    bool       bVar2;
    i16        y_dest;
    u16      cx;


    if((param_1->field_0x6) == 0x0)
    {
        pass1_1008_47cc(param_1);
    }
    if(((param_1->field_0x8) | (param_1->field_0x6)) == 0x0)
    {
        bVar2 = false;
    }
    else
    {
        if(((param_1->field_0xc) | (param_1->field_0xa)) == 0x0)
        {
            pass1_1008_4834(param_1);
        }
        bVar2 = true;
    }
    if(!bVar2)
    {
        return;
    }
    uVar1  = (param_1->field_0x10);
    cx     = (u16)(uVar1 >> 0x10);
    y_dest = uVar1;
    info   = (y_dest + 0x8);
    uVar1  = (param_1->field_0x14);
    SetDIBitsToDevice(param_2, 0x0, y_dest, cx, (u16)uVar1, (u16)(uVar1 >> 0x10), info, 0x0, 0x0, (LPCVOID)0x0, (BITMAPINFO *)info, (y_dest + 0x4));
}


void  stretch_di_bits_1008_465a(Struct76 *param_1, HDC16 param_2)

{
    PVOID      bits;
    u16      height_src;
    u32 uVar1;
    bool       bVar2;

    i16        height_dst;

    u16      x_src;


    if((param_1->field_0x6) == 0x0)
    {
        pass1_1008_47cc(param_1);
    }
    if(((param_1->field_0x8) | (param_1->field_0x6)) == 0x0)
    {
        bVar2 = false;
    }
    else
    {
        if(((param_1->field_0xc) | (param_1->field_0xa)) == 0x0)
        {
            pass1_1008_4834(param_1);
        }
        bVar2 = true;
    }
    if(!bVar2)
    {
        return;
    }
    uVar1      = (param_1->field_0x10);
    x_src      = (u16)(uVar1 >> 0x10);
    height_dst = uVar1;
    bits       = *(PVOID *)(height_dst + 0x4);
    height_src = (height_dst + 0x8);
    uVar1      = (param_1->field_0x14);
    StretchDIBits16(param_2, 0x20, 0xcc, 0x0, height_dst, x_src, (u16)uVar1, (u16)(uVar1 >> 0x10), height_src, bits, (BITMAPINFO *)0x0, 0x0,
                    str_var1(bits, height_src));
    return;
}


u16  palette_op_1008_46e4(u32 param_1, u16 param_2, u16 param_3, HDC16 param_4)

{
    bool       bVar1;
    u16        u_var2;
    HPALETTE16 HVar2;
    i16        iVar3;
    u16        uVar4;
    u32        uVar5;
    u32 uVar6;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    if((iVar3 + 0x6) == 0x0)
    {
        uVar5 = param_2;
        uVar5 = param_3;
        pass1_1008_47cc((Struct76 *)(param_1 & 0xffff | uVar4 << 0x10));
        param_2 = uVar5;
        param_3 = uVar5;
    }
    uVar6 = str_var1(param_3, param_2);
    if((iVar3 + 0x6) == 0x0)
    {
        bVar1 = false;
    }
    else
    {
        if((iVar3 + 0xa) == 0x0)
        {
            uVar6 = pass1_1008_4834((Struct76 *)(param_1 & 0xffff | uVar4 << 0x10));
        }
        bVar1 = true;
    }
    u_var2 = uVar6;
    if(!bVar1)
    {
        return 0x0;
    }
    create_palette_1008_4e38(*(Struct13 **)(iVar3 + 0xa), param_4, (uVar6 >> 0x10));
    (iVar3 + 0xe)                = u_var2;
    HVar2                        = SelectPalette16(param_4, 0x0, *(BOOL16 *)(iVar3 + 0xe));
    *(HPALETTE16 *)(iVar3 + 0x4) = HVar2;
    RealizePalette16((HDC16)LAST_SEGMENT);
    return (iVar3 + 0x4);
}


void set_sys_color_1008_357e(Globals  *globals,
                             Struct20 *param_1,
                             i16       param_2,
                             u16       in_index_3,
                             u16       param_4)

{
    u16         uVar1;
    COLORREF    colorref_var2;
    i16         iVar2;
//    Struct53 *iVar3;
    i16         iVar4;
//    Struct53 *uVar6;
    u16         uVar5;
    u16       count;
    u32  uVar7;
    i16         iStack132;
    u32  local_80;
    u16         uStack124;
    u16         uStack122;
    u16         uStack120;
    u16         uStack118;
    u16         uStack116;
    u16         uStack114;
    u32  uStack112;
    u32  uStack108;
    u16         uStack104;
    u16         uStack102;
    u16         uStack100;
    u16         uStack98;
    u16         uStack96;
    u16         uStack94;
    u16         uStack92;
    u16         uStack90;
    u32  uStack88;
    u32  uStack84;
    u16         uStack80;
    u16         uStack78;
    u32  uStack76;
    u32  uStack72;
    u32  u_stack68;
    u32  u_stack64;
    u32  u_stack60;
    u32  uStack56;
    u32  uStack52;
    u32  uStack48;
    u32  local_2c;
    u32  uStack40;
    u32  uStack36;
    u32  uStack32;
    u32  uStack28;
    u32  uStack24;
    u32  uStack20;
    u32  uStack16;
    u32  uStack12;
    u32  uStack8;
    u16         uStack4;

    local_2c  = 0x70004;
    uStack40  = 0xf0000;
    uStack36  = 0x100014;
    uStack32  = 0xd0012;
    uStack28  = 0x6000e;
    uStack24  = 0x80005;
    uStack20  = 0x10011;
    uStack16  = 0x30002;
    uStack12  = 0xa0009;
    uStack8   = 0xc000b;
    uStack4   = 0x13;
    local_80  = 0x0;
    uStack108 = 0x808080;
    iVar2     = 0x100;
    uStack116 = 0x0;
    uStack114 = 0x100;
    uStack100 = 0x0;
    uStack98  = 0x100;
    uStack96  = 0xffff;
    uStack94  = 0x0;
    uStack124 = 0x2;
    uStack122 = 0x100;
    uStack120 = 0x2;
    uStack118 = 0x100;
    uStack104 = 0x2;
    uStack102 = 0x100;
    uStack92  = 0x2;
    uStack90  = 0x100;
    uStack88  = 0x0;
    uStack80  = 0xc0c0;
    uStack78  = 0x0;
    uStack76  = 0x0;
    uStack72  = 0x0;
    u_stack68  = 0x0;
    uStack52  = 0x0;
    uVar1     = 0x8000;
    uStack112 = 0x8000;
    uStack84  = 0x8000;
    u_stack64  = 0x8000;
    u_stack60  = 0x8000;
    uStack56  = 0x8000;
    uStack48  = 0x8000;
    if(&param_1->field_0xf8 == 0x0)
    {
        mem_op_1000_179c(0x54, 0x100, 0);
        param_1->field_0xf8 = uVar1;
        param_1->field_0xfa = iVar2;
        in_index_3        = SEG_1000;
        for(iStack132 = 0x0; iStack132 < 0x15; iStack132 = iStack132 + 0x1)
        {
            colorref_var2                          = GetSysColor16(in_index_3);
            uVar7                                  = &param_1->field_0xf8;
            uVar5                                  = (uVar7 >> 0x10);
            iVar4                                  = uVar7;
            *(COLORREF *)(iVar4 + iStack132 * 0x4) = colorref_var2;
            (iVar4 + iStack132 * 0x4 + 0x2)        = iVar2;
            in_index_3                             = (u16)LAST_SEGMENT;
        }
    }
    count = in_index_3;
    if(param_2 != 0x0)
    {
        count         = (u16)LAST_SEGMENT;
        colorref_var2 = GetSysColor16(in_index_3);
        if((colorref_var2 == (COLORREF)local_80) && (iVar2 == local_80))
        {
            return;
        }
    }
    if(globals->PTR_LOOP_1050_0010 == 0x0)
    {
        uStack112 = 0xc0c0c0;
    }
    if(param_2 == 0x0)
    {
        uVar7 = &param_1->field_0xf8;
    }
    else
    {
        uVar7 = str_var1(param_4, &local_80);
    }
    SetSysColors16(count, (u16 *)uVar7, (COLORREF *)(uVar7 >> 0x10));
    return;
}

void  fill_rect_1008_39ac(HWND16 in_win_handle_1)

{
    RECT16        local_brush_handle[0x2];
    RECT16       *local_brush_handle_2;
    HDC16         HStack36;
    PAINTSTRUCT16 local_paint_struct;

    HStack36             = BeginPaint16(in_win_handle_1, &local_paint_struct);
    local_brush_handle_2 = (RECT16 *)CreateSolidBrush16((COLORREF)LAST_SEGMENT);
    GetClientRect16((HWND16)LAST_SEGMENT, local_brush_handle);
    FillRect16((HDC16)LAST_SEGMENT, local_brush_handle_2, (HBRUSH16)local_brush_handle);
    EndPaint16((HWND16)LAST_SEGMENT, &local_paint_struct);
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    return;
}


void pass1_1008_0984(Struct20 *param_1, i16 param_3, u16 param_4, u16 param_5)

{
    u32 uVar1;
    void **ppcVar2;

    set_sys_color_1008_357e(NULL, param_1, param_3, param_4, param_5);
    if((param_1->field_0xe8) != 0x0)
    {
        uVar1   = (param_1->field_0xe8);
        ppcVar2 = ((param_1->field_0xe8) + 0x98);
        (**ppcVar2)(param_4, uVar1, (uVar1 >> 0x10), param_3);
    }
    return;
}


void set_struct_op_1008_0536(Globals *globals, Struct20 *param_1, HINSTANCE16 hinst_arg2, u16 param_3)

{
    HICON16     icon_handle_1;
    HCURSOR16   cursor_handle_1;
    HGDIOBJ16   obj_handle_1;
    u8         *puVar4;
    i16         iVar5;
    i16         unaff_DI;
    u16         uVar6;
    Struct20 *paVar7;
    u16        *puVar8;

    paVar7                       = pass1_1008_3ab8(param_1);
//    puVar4                       = (paVar7 >> 0x10);
//    uVar6                        = (param_1 >> 0x10);
//    iVar5                        = param_1;
    (param_1->field_0xe0)               = 0x0;
    (param_1->field_0xe4)               = 0x0;
    (param_1->field_0xe8)               = 0x0;
    (param_1->field_0xec)               = 0x0;
    (param_1->field_0xee)               = 0x0;
    (param_1->field_0xf2)               = 0x0;
    (param_1->field_0xf4)               = 0x0;
    (param_1->field_0xf8)               = 0x0;
    param_1->field_0x0                     = addr_table_1008_380a[37];//0x389e;
    (param_1->field_0x2)                = SEG_1008;
    (param_1->field_0xc8)               = 0x2008;
    (param_1->field_0xac)               = 0x0;
    (param_1->field_0xae)               = 0x8700;
    // TODO: find proper Icon Name
    icon_handle_1                  = LoadIcon16(hinst_arg2, 0xd4);
    (param_1->field_0xc2)   = icon_handle_1;
    // TODO figure out proper HINSTANCE ID
    cursor_handle_1                = LoadCursor16((HINSTANCE16)LAST_SEGMENT, get_rsrc_string(0x7f00));
    (param_1->hcursor_field_0xc4) = cursor_handle_1;
    // TODO: set proper stock object ID
    obj_handle_1                   = GetStockObject16((u16)LAST_SEGMENT);
    (param_1->hobj_field_0xc6) = obj_handle_1;
    puVar8                       = mixed_1010_20ba(
      NULL, globals->u16_1050_0ed0, 0x48, param_3, puVar4, unaff_DI);
//    puVar4                       = (puVar8 >> 0x10);
    unk_str_op_1000_3d3e(param_1->field_0xa, globals->s_Outpost_1050_00d7);
    puVar8         = mixed_1010_20ba(
      NULL, globals->u16_1050_0ed0, 0x32, param_3, puVar4, unaff_DI);
    (param_1->field_0xf4) = puVar8;
//    (param_1->field_0xf6) = (puVar8 >> 0x10);
    set_sys_color_1008_357e(NULL, param_1, 0x1, SEG_1010, param_3);
}

#pragma clang diagnostic pop