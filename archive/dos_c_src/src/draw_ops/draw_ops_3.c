#include "draw_ops_3.h"

#include "address_tables/function_tables.h"
#include "draw_ops_2.h"
#include "fn_ptr_ops/fn_ptr_ops_6.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "op_winapi.h"
#include "op_windef.h"
#include "struct_20.h"
#include "struct_43.h"
#include "struct_ops/struct_ops_4.h"
#include "structs/structs_0xx/structs_4x.h"
#include "structs/structs_1xx/structs_12x.h"
#include "structs/structs_5xx/structs_50x.h"
#include "structs/structs_5xx/structs_51x.h"
#include "structs/structs_5xx/structs_57x.h"
#include "sys_ops/sys_ops_12.h"
#include "sys_ops/sys_ops_9.h"
#include "ui_ops/ui_ops_6.h"
#include "unk/unk_11.h"
#include "unk/unk_12.h"
#include "unk/unk_14.h"
#include "unk/unk_15.h"
#include "unk/unk_2.h"
#include "utils.h"

#include <minwindef.h>

void realize_palette_1020_2992(u32 param_1, i16 param_2)

{
    void **ppcVar1;
    u32 *pu_var2;

    if(param_2 != 0x0)
    {
        pu_var2  = pass1_1018_0a50(*(param_1 + 0xf2));
        ppcVar1 = (*pu_var2 + 0x18);
        (**ppcVar1)(SEG_1018, pu_var2, (pu_var2 >> 0x10));
        UnrealizeObject16(SEG_1018);
        GetDC16((HWND16)LAST_SEGMENT);
        RealizePalette16((HDC16)LAST_SEGMENT);
    }
}

void invalidate_rect_1020_2ae4(Globals *globals,
                               u32     *param_1,
                               u16      param_2,
                               HWND16   param_3,
                               u16      param_4)

{
    void **ppcVar1;
    char        cVar2;
    i16         iVar3;
    u8         *in_DX;
    u16         uVar4;
    u16         uVar5;
    i16         unaff_DI;
    u16        *puVar6;
    u32         uVar7;
    Struct43 *paVar8;
    u16         uVar9;
    u16         uVar10;

    if(param_2 != 0x129)
    {
        uVar5 = param_1;
        uVar9 = (param_1 >> 0x10);
        if(0x129 < param_2)
        {
            if(param_2 == 0x12a)
            {
                uVar9 = 0xf012;
            }
            else
            {
                if(param_2 == 0x12b)
                {
                    return;
                }
                if(param_2 == 0x12c)
                {
                    uVar9 = 0xf020;
                }
                else
                {
                    if(param_2 == 0x12d)
                    {
                        return;
                    }
                    if(param_2 != 0x12e)
                    {
                        return;
                    }
                    uVar9 = 0xf060;
                }
            }
            PostMessage16(param_3, 0x0, 0x0, str_var1(0x112, uVar9));
            return;
        }
        if(param_2 == 0xfb)
        {
            puVar6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x30, param_4, in_DX, unaff_DI);
            pass1_1010_375e(puVar6);
            ppcVar1 = (*param_1 + 0x14);
            (**ppcVar1)();
            uVar7 = pass1_1010_375e(puVar6);
            uVar4 = (uVar7 >> 0x10);
            pass1_1018_181c(*(uVar5 + 0xf2), (uVar7 & 0xffff | uVar4 << 0x10), (u8)(uVar7 & 0xffff), uVar4);
            return;
        }
        if(param_2 < 0xfc)
        {
            cVar2 = param_2;
            if(cVar2 == 'o')
            {
                paVar8 = unk_io_op_1010_830a(globals->dat_1050_14cc, 0x1f8, param_4);
                WinHelp16(SEG_1010, 0x2a, 0x0, str_var1(paVar8, 0x1));
                return;
            }
            if(cVar2 == 'r')
            {
                iVar3  = uVar5 + 0xa;
                uVar10 = uVar9;
                puVar6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x30, param_4, in_DX, unaff_DI);
                uVar4  = (puVar6 >> 0x10);
                pass1_1010_3770(puVar6, str_var1(uVar10, iVar3), uVar4);
                pass1_1038_af40(globals->ptr_1050_5b7c, (uVar5 + 0x8), 0x3, uVar4, uVar5, SEG_1038, param_4);
                return;
            }
            if(cVar2 == 'u')
            {
                pass1_1018_0a76(*(uVar5 + 0xf2), param_4);
                InvalidateRect16(SEG_1018, (RECT16 *)0x0, 0x0);
                return;
            }
        }
    }
}

void pass1_1020_0a52(Globals *globals, u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32 uVar3;
    unk_draw_op_1020_0c3e((param_1 + 0xe2), param_3);
    if((param_1 + 0xe6) == 0x0)
    {
        (param_1 + 0xe6)               = 0x1;
        (globals->ptr_1050_5b7c + 0xae) = 0x99;
        uVar3                        = pass1_1038_af40(globals->ptr_1050_5b7c, (param_1 + 0x8), 0x6, param_2, param_1, SEG_1038, param_4);
        (param_1 + 0xe8)               = uVar3;
        (param_1 + 0xea)               = (uVar3 >> 0x10);
    }
}

void unk_draw_op_1020_0c3e(u32 param_1, HWND16 param_2)

{
    u32   *puVar1;
    void **ppcVar2;
    u32    uVar3;
    HDC16        *b_force_background;
    i16           iVar4;
    i16           iVar5;
    u16           uVar6;
    u16           uVar7;
    u16           uStack40;
    HDC16         local_24;
    PAINTSTRUCT16 local_22;

    uVar6    = (param_1 >> 0x10);
    iVar4    = param_1;
    local_24 = BeginPaint16(param_2, &local_22);
    uVar3    = (iVar4 + 0x6);
    uVar7    = (uVar3 >> 0x10);
    iVar5    = uVar3;
    puVar1   = (iVar5 + 0xa);
    uStack40 = puVar1;
    if((*(iVar5 + 0xc) | uStack40) != 0x0)
    {
        b_force_background = &local_24;
        uVar3              = *puVar1;
        ppcVar2            = (uVar3 + 0x8);
        (**ppcVar2)(LAST_SEGMENT, uStack40, (puVar1 >> 0x10), b_force_background);
        ppcVar2 = (uVar3 + 0x4);
        (**ppcVar2)(LAST_SEGMENT, puVar1, (iVar4 + 0xc), (iVar4 + 0xa), &local_24);
        SelectPalette16((HDC16)LAST_SEGMENT, 0x0, (BOOL16)b_force_background);
        DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    }
    EndPaint16((HWND16)LAST_SEGMENT, &local_22);
}

void realize_palette_1020_0e46(u32 param_1, i16 param_2, HGDIOBJ16 param_3)

{
    u32 *puVar1;
    void **ppcVar2;
    u32  uVar3;
    i16         iVar4;
    u16         uVar5;

    if(param_2 != 0x0)
    {
        uVar3   = (param_1 + 0xf2);
        uVar5   = (uVar3 >> 0x10);
        iVar4   = uVar3;
        puVar1  = (iVar4 + 0x66);
        ppcVar2 = (*puVar1 + 0x18);
        (**ppcVar2)(param_3, puVar1, (iVar4 + 0x68));
        UnrealizeObject16(param_3);
        RealizePalette16((HDC16)LAST_SEGMENT);
    }
}


void pass1_1020_1022(u32 param_1, HANDLE16 param_2)

{
    draw_op_1020_15de((param_1 + 0xf6), param_2);
}

void cleanup_ui_op_1020_1038(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    HICON16     unaff_CS;
    u16         uVar6;
    uVar6 = (param_1 + 0xc2);
    DestroyIcon16(unaff_CS);
    (param_1 + 0xc2) = 0x0;
    (param_1 + 0x8)  = 0x0;
    puVar1         = *(param_1 + 0xf6);
    u_var2          = *(param_1 + 0xf8);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)(LAST_SEGMENT, puVar1, u_var2, 0x1, uVar6);
    }
    (param_1 + 0xf6) = 0x0;
    pass1_1010_1dda(*(param_1 + 0xf2));
    (param_1 + 0xf2) = 0x0;
}

void invalidate_rect_1020_157c(u32 param_1, i16 param_2, HWND16 param_3)

{
    BOOL16 BVar1;
    RECT16 local_a;
    u16    uStack4;

    if(param_2 == 0x1)
    {
        (param_1 + 0x14) = 0x0;
        return;
    }
    if(param_2 == 0x2)
    {
        BVar1 = IsIconic16(param_3);
        if(BVar1 == 0x0)
        {
            GetClientRect16((HWND16)LAST_SEGMENT, &local_a);
            uStack4 = 0x9a;
            InvalidateRect16((HWND16)LAST_SEGMENT, (RECT16 *)0x0, (BOOL16)&local_a);
            return;
        }
    }
}


void draw_op_1020_15de(u32 param_1, HWND16 in_win_handle_2)

{
    u32           uVar1;
    void **ppcVar2;
    BOOL16        BVar3;
    u16           uVar4;
//    i16           iVar5;
//    u16           uVar6;
    HWND16        hwnd;
    u16           unaff_SS;
    u32           uVar7;
    u16           uVar8;
    u16           uVar9;
    HDC16         local_24;
    PAINTSTRUCT16 local_22;

//    uVar6    = (param_1 >> 0x10);
//    iVar5    = param_1;
    uVar9    = (param_1 + 0x4);
    local_24 = BeginPaint16(in_win_handle_2, &local_22);
    uVar8    = (param_1 + 0x4);
    hwnd     = (HWND16)LAST_SEGMENT;
    BVar3    = IsIconic16((HWND16)LAST_SEGMENT);
    if(BVar3 == 0x0)
    {
        hwnd  = SEG_1010;
        uVar7 = pass1_1010_454a(*(param_1 + 0x14));
        uVar4 = (uVar7 >> 0x10);
        if((uVar4 | uVar7) != 0x0)
        {
            uVar1 = *(param_1 + 0x14);
            hwnd  = SEG_1008;
            pass1_1008_4480(*(param_1 + 0x18), (uVar1 & 0xffff0000 | (uVar1 + 0x76)), (Struct76 *)(uVar7 & 0xffff | uVar4 << 0x10), unaff_SS);
        }
        ppcVar2 = ((param_1 + 0x18) + 0x4);
        (**ppcVar2)(hwnd, (param_1 + 0x18), 0x0, &local_24, unaff_SS, uVar8, uVar9);
    }
    else
    {
        draw_op_1020_1674(NULL, param_1, LAST_SEGMENT);
    }
    EndPaint16(hwnd, &local_22);
}


void draw_op_1020_1674(Globals *globals, u32 param_1, u16 param_2)

{
    void **ppcVar1;
    u16     u_var2;
    u16     local_1a;
    u16     uStack24;
    i16     iStack22;
    i16     iStack20;
    i16     iStack18;
    i16     iStack16;
    RECT16  local_e;
    i16     iStack10;
    i16     iStack8;
    RECT16 *pRStack6;
    i16     iStack4;

    if(globals->PTR_LOOP_1050_0010 == 0x0)
    {
        u_var2   = (param_1 >> 0x10);
        ppcVar1 = ((param_1 + 0x14) + 0x2c);
        iStack4 = (**ppcVar1)(param_2, (param_1 + 0x14));
        if(iStack4 != 0x0)
        {
            pRStack6 = (RECT16 *)GetStockObject16(param_2);
            GetClientRect16((HWND16)LAST_SEGMENT, &local_e);
            local_1a = 0x0;
            uStack24 = 0x0;
            iStack22 = (iStack10 - local_e.x) + -0x1;
            iStack20 = (iStack8 - local_e.y) + -0x1;
            iStack18 = iStack20;
            iStack16 = iStack22;
            FillRect16((HDC16)LAST_SEGMENT, pRStack6, (HBRUSH16)&local_1a);
            DrawIcon16((HDC16)LAST_SEGMENT, iStack4, 0x2, 0x2);
        }
    }
}

void pass1_1018_e5dc(Globals  *globals,
                     u16       param_1,
                     Struct20 *param_2,
                     u16       param_3,
                     u16       param_4)

{
    u8 *extraout_DX;
    u16 uVar1;
    //    Struct20 *iVar2;
    i16 unaff_DI;
    //    u16         u_var2;
    u16 *puVar3;

    unk_draw_op_1020_7f7a(param_2, 0x9, str_var1(param_4, param_3));
    //    u_var2                                    = (param_2 >> 0x10);
    //    iVar2                                    = (Struct20 *)param_2;
    param_2[1].field_0xc  = 0x0;
    param_2[1].field_0x10 = 0x0;
    param_2->field_0x0    = addr_table_1018_e790;//0xe790;
    param_2->field_0x2    = SEG_1018;
    param_2[1].field_0x0  = addr_table_1018_e790[39];//0xe82c;
    param_2[1].field_0x2  = SEG_1018;
    puVar3                = mixed_1010_20ba(
      globals->u16_1050_0ed0, 0xa, param_1, extraout_DX, unaff_DI);
    uVar1                         = (puVar3 >> 0x10);
    param_2[1].field_0x10         = puVar3;
    (param_2[1].field_0x10 + 0x2) = uVar1;
    param_2[1].field_0x4          = &param_2[1].field_0x10;
    (param_2[1].field_0x4 + 0x2)  = uVar1;
}

void pass1_1018_e834(Struct660 *param_1, u16 param_2, u16 param_3, i16 param_4, u16 param_5)

{
    void **ppcVar1;
    u32 u_var2;
    i16        iVar3;
    u8        *extraout_DX;
    u16        uVar4;
    u16       *puVar5;

    set_struct_op_1020_921c(str_var1(param_2, param_1), param_3);
    &param_1->field_0x14       = 0x0;
    param_1->field_0x0 =  addr_table_1018_e912;//0xe912;
    param_1->field_0x2         = SEG_1018;
    puVar5                     = mixed_1010_20ba(globals->u16_1050_0ed0, 0xa, param_5, extraout_DX, param_4);
    uVar4                      = (puVar5 >> 0x10);
    param_1->field_0x14        = puVar5;
    param_1->field_0x16        = uVar4;
    param_1->field_0x6         = param_1->field_0x14;
    param_1->field_0x8         = uVar4;
    u_var2                      = &param_1->field_0x14;
    iVar3                      = &param_1->field_0xa;
    ppcVar1                    = ((u_var2 + 0xa) + 0x8);
    (**ppcVar1)();
    param_1->field_0x12 = iVar3;
    draw_op_1020_9364(str_var1(param_2, param_1), SEG_1020, param_5);
    return;
}

void pass1_1018_e8bc(Struct577 *param_1)

{
    param_1->field_0x0         = addr_table_1018_e912;//0xe912;
    param_1->field_0x2 = SEG_1018;
    if(param_1->field_0x14 != 0x0)
    {
        pass1_1010_1dda(param_1->field_0x14);
    }
    palette_op_1020_92c4(param_1, SEG_1020);
}

void pass1_1018_e91e(Struct20 *param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32         *puVar1;
    void **ppcVar2;
    u16         *puVar3;
    u8          *extraout_DX;
    u8          *puVar4;
    u16          uVar5;
    i16          unaff_DI;
    u16         *puVar6;
//    u16          uVar7;
//    Struct127 *iVar7;

//    iVar7 = (Struct127 *)param_1;
//    uVar7 = (param_1 >> 0x10);
    unk_draw_op_1020_7f7a(param_1, 0x3, str_var1(param_3, param_2));
    param_1->field_0xee          = 0x0;
    &param_1->field_0xf2         = 0x0;
    param_1->field_0xf6          = 0x0;
    param_1->field_0x0         = addr_table_1018_ebd0;//0xebd0;
    param_1->field_0x2           = SEG_1018;
    param_1->field_0xe2          = addr_table_1018_ebd0[39]; //0xec6c;
    param_1->field_0xe4          = SEG_1018;
    puVar6                     = mixed_1010_20ba(globals->u16_1050_0ed0, 0x28, param_4, extraout_DX, unaff_DI);
    puVar4                     = (puVar6 >> 0x10);
    param_1->field_0xf2          = puVar6;
    param_1->field_0xf4          = puVar4;
    param_1->field_0xe6          = param_1->field_0xf2;
    param_1->field_0xe8          = puVar4;
    puVar6                     = mixed_1010_20ba(globals->u16_1050_0ed0, 0x32, param_4, puVar4, unaff_DI);
    &param_1->field_0xf6         = puVar6;
    (&param_1->field_0xf6 + 0x2) = (puVar6 >> 0x10);
    if(param_1 == (Struct20 *)0x0)
    {
        puVar3 = 0x0;
        uVar5  = 0x0;
    }
    else
    {
        puVar3 = &param_1->field_0xe2;
        uVar5  = uVar7;
    }
    puVar1  = param_1->field_0xf6;
    ppcVar2 = (*param_1->field_0xf6 + 0x4);
    (**ppcVar2)(SEG_1010, puVar1, (puVar1 >> 0x10), 0xb, puVar3, uVar5);
    return;
}

void pass1_1018_ec74(Struct661 *param_1, i16 param_2, u16 param_3, u16 param_4)

{
    u32  *puVar1;
    void **ppcVar2;
    u32   uVar3;
    u16          uVar4;
    u8          *extraout_DX;
    u8          *puVar5;
    u16         *puVar6;
    u32          uVar7;
    u16          uVar8;
    u16          uVar9;
    Struct661 *paVar10;
    i16          iVar11;

    set_struct_op_1020_921c(str_var1(param_2, param_1), param_3);
    param_1->field_0x14 = 0x0;
    pass1_1008_3e38(str_var1(param_2, &param_1->field_0x18));
    puVar6                       = pass1_1008_3e38(str_var1(param_2, &param_1->field_0x1e));
    &param_1->field_0x24         = 0x0;
    param_1 =  addr_table_1020_01cc;//0x1cc;
    param_1->field_0x2           = SEG_1020;
    puVar6                       = mixed_1010_20ba(globals->u16_1050_0ed0, 0x28, param_4, (puVar6 >> 0x10), param_2);
    uVar4                        = (puVar6 >> 0x10);
    &param_1->field_0x14         = puVar6;
    (&param_1->field_0x14 + 0x2) = uVar4;
    uVar9                        = 0x0;
    uVar8                        = &param_1->field_0x14;
    ppcVar2                      = (*param_1->field_0x14 + 0x4);
    paVar10                      = param_1;
    iVar11                       = param_2;
    (**ppcVar2)();
    param_1->field_0x6 = param_1->field_0x14;
    puVar1             = param_1->field_0x14;
    pass1_1010_2b50(puVar1, (puVar1 >> 0x10), str_var1(param_2, &param_1->field_0x18));
    uVar7               = pass1_1010_2b66(param_1->field_0x14);
    param_1->field_0x24 = uVar7;
    param_1->field_0x26 = (uVar7 >> 0x10);
    puVar1              = param_1->field_0x14;
    puVar1              = (puVar1 + 0xa);
    uVar3               = str_var1(param_2, &param_1->field_0xa);
    ppcVar2             = (*puVar1 + 0x8);
    (**ppcVar2)(SEG_1010, puVar1, (puVar1 >> 0x10), uVar3, uVar8, uVar4, uVar9, paVar10, iVar11);
    param_1->field_0x12 = uVar3;
    puVar5              = extraout_DX;
    draw_op_1020_9364(str_var1(param_2, param_1), SEG_1020, param_4);
    puVar6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x48, param_4, puVar5, param_2);
    pass1_1008_3f62(str_var1(param_2, &param_1->field_0x1e), (puVar6 & 0xffff0000 | (puVar6 + 0xe)));
    pass1_1008_3f32(str_var1(param_2, &param_1->field_0x18),
                    str_var1(param_2, &param_1->field_0x1e));
    return;
}

void pass1_1018_ed98(u16 *param_1, u16 param_2)

{
    Struct579 *iVar1;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct579 *) param_1;
    param_1->field_0x0 = addr_table_1020_01cc;//0x1cc;
    iVar1->field_0x2 = SEG_1020;
    if (iVar1->field_0x14 != 0x0) {
        pass1_1010_1ea6(iVar1->field_0x14, param_1 & 0xffff | uVar1 << 0x10, param_2);
        pass1_1010_1dda(iVar1->field_0x14);
    }
    palette_op_1020_92c4(param_1, SEG_1020);
    return;
}

void invalidate_rect_1018_edd8(u32 param_1, i16 param_2, u16 param_3)

{
    i16 iVar1;
    u16 u_var2;
    u32 uVar3;
    i16 local_16;
    i16 iStack20;
    i16 iStack18;
    i16 iStack16;
    u32 uStack14;
    u16 uStack10;
    u16 uStack8;
    i16 local_6;
    i16 local_4;

    iVar1 = param_1;
    u_var2 = (param_1 >> 0x10);
    if(param_2 == 0x1)
    {
        (iVar1 + 0x14) = 0x0;
        return;
    }
    if(param_2 != 0xc)
    {
        return;
    }
    pass1_1008_3e94((param_1 & 0xffff0000 | (iVar1 + 0x18)),
                    str_var1(param_3, &local_6),
                    str_var1(param_3, &local_4));
    uVar3    = pass1_1010_2b66(*(iVar1 + 0x14));
    uStack8  = (uVar3 >> 0x10);
    uStack10 = uVar3;
    uStack14 = pass1_1008_4772((Struct76 *)(uVar3 & 0xffff | uStack8 << 0x10));
    u_var2    = (uStack14 >> 0x10);
    local_16 = local_4;
    iStack20 = local_6;
    iStack18 = local_4 + (uStack14 + 0x4);
    iStack16 = local_6 + (uStack14 + 0x8);
    InvalidateRect16(SEG_1008, (RECT16 *)0x0, (BOOL16)&local_16);
    return;
}

void unk_draw_op_1020_0000(u32 param_1, HWND16 param_2, u16 param_3)

{
    void **ppcVar1;
    u32    u_var2;
    i16           iVar3;
    i16           iVar4;
    i16           iVar5;
    u16           uVar6;
    HWND16        hwnd;
    u16           uVar7;
    u8            local_c4[0x6];
    u8            local_be[0x2];
    i16           local_b4;
    i16           iStack178;
    i16           aiStack176[0x3c];
    i16           iStack56;
    i16           iStack48;
    Struct76   *paStack46;
    i16           local_2a;
    i16           local_28;
    u32   *puStack38;
    PAINTSTRUCT16 local_22;

    // Segment:    5
    // Offset:     00033420
    // Length:     efba
    // Min Alloc:  efba
    // Flags:      0d50
    //     Code
    //     Moveable
    //     Preload
    //     Impure (Non-shareable)
    //
    uVar6 = (param_1 >> 0x10);
    iVar5 = param_1;
    uVar7 = (iVar5 + 0x4);
    BeginPaint16(param_2, &local_22);
    u_var2     = (iVar5 + 0x14);
    puStack38 = (u_var2 + 0xa);
    pass1_1008_3e94((param_1 & 0xffff0000 | (iVar5 + 0x18U)),
                    str_var1(param_3, &local_2a),
                    str_var1(param_3, &local_28));
    hwnd = SEG_1008;
    pass1_1008_4480(puStack38, (param_1 & 0xffff0000 | (iVar5 + 0x18U)), *(Struct76 **)(iVar5 + 0x24), param_3);
    paStack46 = (Struct76 *)0x0;
    for(iStack48 = 0x0; iStack48 < 0x6; iStack48 = iStack48 + 0x1)
    {
        u_var2 = (iVar5 + 0x14);
        hwnd  = SEG_1010;
        pass1_1010_2b78(u_var2, (u_var2 >> 0x10), iStack48, str_var1(param_3, &local_b4));
        if(local_b4 == 0x0)
        {
            for(iStack56 = 0x0; iVar4 = iStack56, iStack56 <= iStack178; iStack56 = iStack56 + 0x1)
            {
                iVar3 = iStack56 * 0x3;
                if(aiStack176[iStack56 * 0x3 + 0x2] != 0x0)
                {
                    paStack46 = (Struct76 *)pass1_1010_2b98(*(iVar5 + 0x14), aiStack176[iStack56 * 0x3 + 0x2]);
                    pass1_1008_3e54(str_var1(param_3, local_be), 0x0, aiStack176[iVar4 * 0x3 + 0x1] + local_2a, aiStack176[iVar3] + local_28);
                    hwnd = SEG_1008;
                    pass1_1008_4480(puStack38, str_var1(param_3, local_be), paStack46, param_3);
                }
            }
        }
        else
        {
            _local_be = str_var1(param_3, aiStack176 + iStack178 * 0x3);
            if(aiStack176[iStack178 * 0x3 + 0x2] != 0x0)
            {
                paStack46 = (Struct76 *)pass1_1010_2b98(*(iVar5 + 0x14), aiStack176[iStack178 * 0x3 + 0x2]);
                pass1_1008_3e54(str_var1(param_3, local_c4), 0x0, (_local_be + 0x2) + local_2a, *_local_be + local_28);
                hwnd = SEG_1008;
                pass1_1008_4480(puStack38, str_var1(param_3, local_c4), paStack46, param_3);
            }
        }
    }
    ppcVar1 = (*puStack38 + 0x4);
    (**ppcVar1)(hwnd, puStack38, (puStack38 >> 0x10), 0x0, 0x0, iVar5 + 0xa, uVar6, uVar7);
    EndPaint16(hwnd, &local_22);
    return;
}

void pass1_1020_01d8(Struct20 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5, u16 param_6, u16 param_7, u32 param_8, u16 param_9)

{
    unk_draw_op_1008_61b2((Struct20 *)str_var1(param_2, param_1), param_3, param_7, param_8, param_9);
    (param_1 + 0x1)            = 0x0;
    param_1[0x1].field_0x4     = 0x0;
    param_1[0x1].field_0x8     = param_6;
    param_1[0x1].field_0xa     = param_5;
    param_1[0x1].field_0xc     = param_4;
    param_1 =  addr_table_1020_045a;//0x45a;
    param_1->field_0x2         = SEG_1020;
}

void draw_op_1020_041e(u32 param_1, u16 param_2)

{
    fill_rect_1020_065e((param_1 + 0xe6), param_2);
    return;
}

void fill_rect_1020_065e(u32 param_1, HWND16 in_win_handle_2)

{
    void **ppcVar1;
    u32    u_var2;
    i16           iVar3;
    u16           uVar4;
    u16           local_brush_handle;
    u16           uStack50;
    i16           iStack48;
    i16           iStack46;
    RECT16       *local_rect_1;
    HDC16        *pHStack42;
    u32   *puStack40;
    HDC16         local_24;
    PAINTSTRUCT16 local_22;

    uVar4    = (param_1 >> 0x10);
    iVar3    = param_1;
    local_24 = BeginPaint16(in_win_handle_2, &local_22);
    if(0x280 < (iVar3 + 0xa))
    {
        local_rect_1       = (RECT16 *)CreateSolidBrush16((COLORREF)LAST_SEGMENT);
        local_brush_handle = 0x0;
        uStack50           = 0x0;
        iStack48           = (iVar3 + 0xa) + -0x1;
        iStack46           = (iVar3 + 0xc) + -0x1;
        FillRect16((HDC16)LAST_SEGMENT, local_rect_1, (HBRUSH16)&local_brush_handle);
        DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    }
    u_var2     = (iVar3 + 0x6);
    puStack40 = (u_var2 + 0xe);
    pHStack42 = &local_24;
    u_var2     = *puStack40;
    ppcVar1   = (u_var2 + 0x8);
    (**ppcVar1)(LAST_SEGMENT, puStack40, (puStack40 >> 0x10), pHStack42);
    ppcVar1 = (u_var2 + 0x4);
    (**ppcVar1)(LAST_SEGMENT, puStack40, (iVar3 + 0x10), (iVar3 + 0xe), &local_24);
    pHStack42 = (HDC16 *)SelectPalette16((HDC16)LAST_SEGMENT, 0x0, (BOOL16)pHStack42);
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    EndPaint16((HWND16)LAST_SEGMENT, &local_22);
    return;
}

void pass1_1020_07aa(u32 param_1, u16 param_2, i16 param_3, u16 param_4, u16 param_5)

{
    i16 iVar1;
    u16 u_var2;
    u8  local_16[0x14];

    draw_op_1020_041e(param_1, param_4);
    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((iVar1 + 0xf0) == 0x0)
    {
        (iVar1 + 0xf0) = 0x1;
        pass1_1008_5bdc((Struct79 *)str_var1(param_5, local_16), param_3, param_5);
        win_1008_5c9e(str_var1(param_5, local_16), (param_1 & 0xffff0000 | (iVar1 + 0xf2)), local_16, param_2, param_5);
        pass1_1008_5c34(str_var1(param_5, local_16));
    }
    return;
}

void pass1_1018_dfd4(u32 param_1, u8 *param_2, i16 param_3, u16 param_4, u16 param_5)

{
    u16  uVar1;
    u16  u_var2;
    u16 *puVar3;

    u_var2 = (param_1 >> 0x10);
    uVar1 = param_1;
    delete_palette_1018_e16c(*(uVar1 + 0xe2), param_4);
    if((uVar1 + 0xe6) == 0x0)
    {
        (uVar1 + 0xe6) = 0x1;
        puVar3         = mixed_1010_20ba(globals->u16_1050_0ed0, 0x36, param_5, param_2, param_3);
        pass1_1038_af40(globals->ptr_1050_5b7c, (uVar1 + 0x8), 0x8, (puVar3 >> 0x10), uVar1, SEG_1038, param_5);
    }
    return;
}

void delete_palette_1018_e16c(u32 param_1, HWND16 param_2)

{
    u32   *puVar1;
    void **ppcVar2;
    u32    uVar3;
    HDC16        *b_force_background;
    HDC16         local_24;
    PAINTSTRUCT16 local_22;

    local_24           = BeginPaint16(param_2, &local_22);
    uVar3              = (param_1 + 0x6);
    puVar1             = (uVar3 + 0xa);
    b_force_background = &local_24;
    uVar3              = *puVar1;
    ppcVar2            = (uVar3 + 0x8);
    (**ppcVar2)(LAST_SEGMENT, puVar1, (puVar1 >> 0x10), b_force_background);
    ppcVar2 = (uVar3 + 0x4);
    (**ppcVar2)(LAST_SEGMENT, puVar1, 0x0, &local_24);
    SelectPalette16((HDC16)LAST_SEGMENT, 0x0, (BOOL16)b_force_background);
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    EndPaint16((HWND16)LAST_SEGMENT, &local_22);
    return;
}

void pass1_1018_e230(u16 param_1, Struct20 *param_2, u16 param_3, u16 param_4)

{
    u8          *extraout_DX;
    u16          uVar1;
    Struct128 *iVar2;
    i16          unaff_DI;
    u16          u_var2;
    u16         *puVar3;

    unk_draw_op_1020_7f7a(param_2, 0x4, str_var1(param_4, param_3));
    u_var2              = (param_2 >> 0x10);
    iVar2              = (Struct128 *)param_2;
    iVar2->field_0xee  = 0x0;
    &iVar2->field_0xf2 = 0x0;
    param_2->field_0x0 = addr_table_1018_e44e;//0xe44e;
    iVar2->field_0x2   = SEG_1018;
    iVar2->field_0xe2  = addr_table_1018_e44e[39];//0xe4ea;
    iVar2->field_0xe4  = SEG_1018;
    puVar3             = mixed_1010_20ba(globals->u16_1050_0ed0, 0x26, param_1, extraout_DX, unaff_DI);
    uVar1              = (puVar3 >> 0x10);
    iVar2->field_0xf2  = puVar3;
    iVar2->field_0xf4  = uVar1;
    iVar2->field_0xe6  = iVar2->field_0xf2;
    iVar2->field_0xe8  = uVar1;
    return;
}

void pass1_1018_e4f2(Struct659 *param_1, u16 param_2, u16 param_3, i16 param_4, u16 param_5)

{
    void **ppcVar1;
    u32 u_var2;
    i16        iVar3;
    u8        *extraout_DX;
    u16        uVar4;
    u16       *puVar5;

    set_struct_op_1020_921c(str_var1(param_2, param_1), param_3);
    &param_1->field_0x14       = 0x0;
    param_1 =  addr_table_1018_e5d0;//0xe5d0;
    param_1->field_0x2         = SEG_1018;
    puVar5                     = mixed_1010_20ba(globals->u16_1050_0ed0, 0x26, param_5, extraout_DX, param_4);
    uVar4                      = (puVar5 >> 0x10);
    param_1->field_0x14        = puVar5;
    param_1->field_0x16        = uVar4;
    param_1->field_0x6         = param_1->field_0x14;
    param_1->field_0x8         = uVar4;
    u_var2                      = &param_1->field_0x14;
    iVar3                      = &param_1->field_0xa;
    ppcVar1                    = ((u_var2 + 0xa) + 0x8);
    (**ppcVar1)();
    param_1->field_0x12 = iVar3;
    draw_op_1020_9364(str_var1(param_2, param_1), SEG_1020, param_5);
    return;
}


void pass1_1018_e57a(u16 *param_1) {
    Struct575 *iVar1;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct575 *) param_1;
    param_1->field_0x0 = addr_table_1018_e5d0;//0xe5d0;
    iVar1->field_0x2 = SEG_1018;
    if (iVar1->field_0x14 != 0x0) {
        pass1_1010_1dda(iVar1->field_0x14);
    }
    palette_op_1020_92c4(param_1, SEG_1020);
    return;
}

void unk_draw_op_1018_c578(Struct36 *param_1, u16 param_2)

{
    u16           uVar1;
    i16           iVar2;
    i16           iVar3;
    Struct76   *paVar4;
    void **ppcVar5;
    u32    uVar6;
    u16           uVar7;
    HDC16        *b_force_background;
    i16           iVar8;
    u8           *in_DX;
    u16           uVar9;
    u16           uVar10;
    u16           extraout_DX;
    i16           iVar11;
    u16           uVar12;
    i16           unaff_DI;
    u16           uVar13;
    u16           uVar14;
    HWND16        hwnd;
    u32           uVar15;
    HDC16        *pHVar16;
    RECT16       *pRVar18;
    u32    uVar17;
    HDC16         HVar19;
    u32    local_34;
    i16           iStack48;
    i16           iStack46;
    RECT16       *pRStack44;
    HDC16         local_2a;
    u16           uStack40;
    u16          *puStack38;
    PAINTSTRUCT16 local_22;

    hwnd      = SEG_1010;
    puStack38 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_2, in_DX, unaff_DI);
    uVar9     = (puStack38 >> 0x10);
    uVar7     = (puStack38 + 0x20);
    iVar11    = param_1;
    uVar13    = (param_1 >> 0x10);
    uStack40  = uVar7;
    if(uVar7 == 0x0)
    {
        BeginPaint16(SEG_1010, &local_22);
        EndPaint16((HWND16)LAST_SEGMENT, &local_22);
        PostMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, str_var1(0x111, (iVar11 + 0xea)));
        return;
    }
    if(((iVar11 + 0xf0) == 0x0) && ((iVar11 + 0xf4) != 0x0))
    {
        (iVar11 + 0xf0) = 0x1;
        uVar1           = iVar11 + 0xf2;
        hwnd            = SEG_1008;
        win_1008_5c9e(globals->_PTR_LOOP_1050_02a0, (param_1 & 0xffff0000 | uVar1), uVar1, uVar9, param_2);
        uVar7 = uVar1;
    }
    if((globals->_PTR_LOOP_1050_02a0 + 0x12) == 0x0)
    {
        hwnd = SEG_1008;
        win_1008_5c5c(param_2, uVar7, uVar9, globals->_PTR_LOOP_1050_02a0, 0x1d3);
    }
    local_2a  = BeginPaint16(hwnd, &local_22);
    pRStack44 = (RECT16 *)CreateSolidBrush16((COLORREF)LAST_SEGMENT);
    local_34  = 0x0;
    iStack48  = (iVar11 + 0xf6) + -0x1;
    iStack46  = (iVar11 + 0xf8) + -0x1;
    uVar7     = param_2;
    HVar19    = local_2a;
    FillRect16((HDC16)LAST_SEGMENT, pRStack44, (HBRUSH16)&local_34);
    pRVar18 = pRStack44;
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    uVar6              = (iVar11 + 0xe2);
    paVar4             = *(Struct76 **)(uVar6 + 0xe);
    b_force_background = &local_2a;
    uVar17             = str_var1(pRVar18, param_2);
    uVar14             = (paVar4 >> 0x10);
    uVar12             = SUB42(paVar4, 0x0);
    uVar6              = paVar4;
    ppcVar5            = (uVar6 + 0x8);
    pHVar16            = b_force_background;
    (**ppcVar5)();
    uVar15           = pass1_1008_4772(paVar4);
    uVar10           = (uVar15 >> 0x10);
    iVar2            = (uVar15 + 0x4);
    iVar3            = (uVar15 + 0x8);
    iVar8            = (0x1e0 - iVar3) / 0x2;
    (iVar11 + 0x10c) = iVar8 + iVar3 + (iVar11 + 0x110);
    ppcVar5          = (uVar6 + 0x4);
    (**ppcVar5)(SEG_1008, paVar4, (iVar11 + 0xfc) + (iVar11 + 0xfe) + iVar8, (iVar11 + 0xfa) + (0x280 - iVar2) / 0x2, &local_2a, param_2, uVar12, uVar14, pHVar16, uVar17, uVar7, HVar19);
    draw_text_1018_c742(param_1, SEG_1008, param_2, extraout_DX);
    SelectPalette16(SEG_1008, 0x0, (BOOL16)b_force_background);
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    EndPaint16((HWND16)LAST_SEGMENT, &local_22);
    return;
}


void draw_text_1018_c742(Struct36 *param_1, HDC16 param_2, RECT16 *param_3, u16 param_4)

{
    i16        *pi_var1;
    COLORREF    CVar2;
    i16         iVar3;
    u16         local_1a;
    u16         uStack24;
    i16         iStack22;
    i16         iStack20;
    i16         local_12;
    i16         iStack16;
    i16         iStack14;
    i16         iStack12;
    COLORREF    CStack10;
    u16         uStack8;
    u32  u_stack6;

    if((param_1->field_0x108 != 0x0) && (*param_1->field_0x108 != '\0'))
    {
        CVar2    = SetTextColor16(param_2, 0x8000);
        u_stack6  = str_var1(param_4, CVar2);
        CStack10 = SetBkColor16((HDC16)LAST_SEGMENT, 0x0);
        uStack8  = param_4;
        if(param_1->field_0x106 == 0x0)
        {
            local_1a = 0x0;
            uStack24 = 0x0;
            iStack22 = param_1->field_0x10e;
            iStack20 = 0x0;
            DrawText16((HDC16)LAST_SEGMENT, 0x410, (u16)&local_1a, param_3, 0xffff);
            param_1->field_0x100 = (0x280 - iStack22) / 0x2;
            param_1->field_0x102 = param_1->field_0x10c;
            param_1->field_0x104 = param_1->field_0x100 + iStack22;
            iVar3              = param_1->field_0x102 + iStack20;
            param_1->field_0x106 = iVar3;
            pi_var1             = &param_1->field_0xf8;
            if(*pi_var1 == iVar3 || *pi_var1 < iVar3)
            {
                iVar3   = iVar3 - param_1->field_0xf8;
                pi_var1  = &param_1->field_0x102;
                *pi_var1 = *pi_var1 - iVar3;
                pi_var1  = &param_1->field_0x106;
                *pi_var1 = *pi_var1 - iVar3;
            }
        }
        local_12 = param_1->field_0xfa + param_1->field_0x100;
        iStack16 = param_1->field_0xfc + param_1->field_0x102;
        iStack14 = param_1->field_0xfa + param_1->field_0x104;
        iStack12 = param_1->field_0xfc + param_1->field_0x106;
        DrawText16((HDC16)LAST_SEGMENT, &PTR_LOOP_1050_0010, (u16)&local_12, param_3, 0xffff);
        SetTextColor16((HDC16)LAST_SEGMENT, (COLORREF)u_stack6);
        SetBkColor16((HDC16)LAST_SEGMENT, CStack10);
    }
}

void pass1_1018_5b06(Struct132 *param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32  *puVar1;
    void **ppcVar2;
    u32         *puVar3;
    u16          uVar5;
    u32   uVar6;
    u8          *puVar7;
    u16          uVar8;
    u8          *puVar9;
    u16          uVar10;
    i16          unaff_DI;
    u16         *puVar11;
    Struct76  *paVar12;
    u32          uVar13;
    u16          uVar14;
    u16          uVar15;
    Struct132 *paVar16;
    u16          uVar17;
    u8           local_c[0x6];
    u16         *pu_stack6;
    u16          uVar4;

    set_struct_op_1020_921c(str_var1(param_2, param_1), param_3);
    param_1->field_0x14        = 0x0;
    param_1->field_0x18        = 0x0;
    puVar11                    = pass1_1008_3e38(str_var1(param_2, &param_1->field_0x1c_addr_base));
    param_1 =  addr_table_1018_5e1a;//0x5e1a; //&PTR_LOOP_1050_5e1a;
    param_1->field_0x2         = SEG_1018;
    pu_stack6                   = mixed_1010_20ba(globals->u16_1050_0ed0, 0x48, param_4, (puVar11 >> 0x10), unaff_DI);
    puVar11                    = pass1_1008_3e38(str_var1(param_4, local_c));
    puVar7                     = (puVar11 >> 0x10);
    pass1_1008_3f62(str_var1(param_4, local_c), (pu_stack6 & 0xffff0000 | (pu_stack6 + 0xe)));
    puVar11                      = mixed_1010_20ba(globals->u16_1050_0ed0, 0x27, param_4, puVar7, unaff_DI);
    uVar8                        = (puVar11 >> 0x10);
    &param_1->field_0x14         = puVar11;
    (&param_1->field_0x14 + 0x2) = uVar8;
    uVar15                       = 0x0;
    uVar14                       = &param_1->field_0x14;
    ppcVar2                      = (*param_1->field_0x14 + 0x4);
    paVar16                      = param_1;
    uVar17                       = param_2;
    (**ppcVar2)();
    param_1->field_0x6 = param_1->field_0x14;
    puVar3             = param_1->field_0x14;
    puVar1             = *(puVar3 + 0xa);
    uVar6              = str_var1(param_2, &param_1->field_0xa);
    ppcVar2            = (*puVar1 + 0x8);
    (**ppcVar2)(SEG_1010, puVar1, (puVar1 >> 0x10), uVar6, uVar14, uVar8, uVar15, paVar16, uVar17);
    param_1->field_0x12 = uVar6;
    draw_op_1020_9364(str_var1(param_2, param_1), SEG_1020, param_4);
    puVar3 = param_1->field_0x14;
    pass1_1008_3f62(str_var1(param_2, &param_1->field_0x1c_addr_base), (puVar3 & 0xffff0000 | (puVar3 + 0x52)));
    pass1_1008_3f32(str_var1(param_2, &param_1->field_0x1c_addr_base),
                    str_var1(param_4, local_c));
    paVar12 = (Struct76 *)pass1_1008_9f48(param_1->field_0x14);
    uVar13  = pass1_1008_4772(paVar12);
    puVar9  = (uVar13 >> 0x10);
    uVar4   = uVar13;
    puVar7  = puVar9;
    uVar5 = uVar4;
    mem_op_1000_179c(0x14, puVar9, 0);
    uVar10 = puVar7 | uVar5;
    if(uVar10 == 0x0)
    {
        param_1->field_0x18 = 0x0;
    }
    else
    {
        pass1_1008_50c2((Struct110 *)str_var1(puVar7, uVar5), *(uVar4 + 0x8), *(uVar4 + 0x4),
                        str_var1(param_2, &param_1->field_0x1c_addr_base), puVar1);
        *&param_1->field_0x18         = uVar5;
        *(&param_1->field_0x18 + 0x2) = uVar10;
    }
    pass1_1008_5134(param_1->field_0x18);
    param_1->field_0x22 = param_1->field_0x1c_addr_base;
    param_1->field_0x24 = param_1->field_0x1e;
    param_1->field_0x26 = (uVar4 + 0x4) + param_1->field_0x22 + 0x1;
    param_1->field_0x28 = (uVar4 + 0x8) + param_1->field_0x24 + 0x1;
    return;
}

void pass1_1018_5cc8(Struct508 *param_1, u16 param_2) {
    u16 uVar1;
    Struct18 *p_var2;
    Struct508 *iVar3;
    u16 uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar3 = (Struct508 *) param_1;
    param_1->field_0x0 = addr_table_1018_5e1a;//0x5e1a; // &PTR_LOOP_1050_5e1a;
    iVar3->field_0x2 = SEG_1018;
    p_var2 = &iVar3->field_0x18;
    uVar1 = iVar3->field_0x1a_addr_offset;
    if ((uVar1 | p_var2) != 0x0) {
        pass1_1008_5118(p_var2 & 0xffff | uVar1 << 0x10);
        fn_ptr_1000_17ce(p_var2, SEG_1000);
    }
    if (iVar3->field_0x14 != 0x0) {
        pass1_1010_1ea6(iVar3->field_0x14, param_1 & 0xffff | uVar3 << 0x10, param_2);
        pass1_1010_1dda(iVar3->field_0x14);
    }
    palette_op_1020_92c4(param_1, SEG_1020);
    return;
}


void invalidate_rect_1018_5d32(u32 param_1, i16 param_2, HWND16 param_3)

{
    if(param_2 == 0x1)
    {
        (param_1 + 0x14) = 0x0;
        return;
    }
    if(param_2 != 0x2)
    {
        return;
    }
    InvalidateRect16(param_3, (RECT16 *)0x0, param_1 + 0x22);
    return;
}


void misc_draw_op_1018_5d6c(u32 param_1, HWND16 param_2)

{
    u32   *puVar1;
    void **ppcVar2;
    u32    uVar3;
    i16           iVar4;
    u16           uVar5;
    u16           unaff_SS;
    Struct76   *paVar6;
    u16           uVar7;
    PAINTSTRUCT16 local_22;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    uVar7 = (iVar4 + 0x4);
    BeginPaint16(param_2, &local_22);
    uVar3  = (iVar4 + 0x14);
    puVar1 = *(uVar3 + 0xa);
    paVar6 = (Struct76 *)pass1_1008_9f48(*(iVar4 + 0x14));
    pass1_1008_5236(*(iVar4 + 0x18));
    pass1_1008_4480(puVar1, (param_1 & 0xffff0000 | (iVar4 + 0x1c)), paVar6, unaff_SS);
    ppcVar2 = (*puVar1 + 0x4);
    (**ppcVar2)(SEG_1008, puVar1, (puVar1 >> 0x10), 0x0, param_1 & 0xffff0000 | (iVar4 + 0xa), uVar7);
    EndPaint16(SEG_1008, &local_22);
    return;
}

void set_window_text_1018_6066(u16 param_1, u16 param_2, SEGPTR in_win_text_3, u16 param_4, u16 dialog_id_5, HWND16 in_hwnd_6)

{
    GetDlgItem16(in_hwnd_6, dialog_id_5);
    SetWindowText16((HWND16)LAST_SEGMENT, in_win_text_3);
    return;
}


void set_window_text_1018_6086(u32 param_1, LPSTR param_2, WORD *param_3)

{
    wsprintf16(param_2, &stack0xfff4, param_3);
    GetDlgItem16((HWND16)LAST_SEGMENT, 0x1be);
    SetWindowText16((HWND16)LAST_SEGMENT, (SEGPTR)&stack0xfff4);
    wsprintf16(LAST_SEGMENT, &stack0xfff4, param_3);
    GetDlgItem16((HWND16)LAST_SEGMENT, 0x1bf);
    SetWindowText16((HWND16)LAST_SEGMENT, (SEGPTR)&stack0xfff4);
    return;
}

void unk_draw_op_1018_623e(u32 param_1, HWND16 param_2, u16 param_3)

{
    i16          *pi_var1;
    void **ppcVar2;
    u32    uVar3;
    u32   *puVar4;
    u16           uVar5;
    HDC16        *pHVar6;
    i16           iVar7;
    HPEN16        handle;
    HGDIOBJ16     HVar8;
    HBRUSH16      handle_00;
    u8           *puVar9;
    u16           uVar10;
    i16           iVar11;
    i16           iVar12;
    u8           *puVar13;
    u16           uVar14;
    u16           uVar15;
    u32           uVar16;
    i16           iVar17;
    u8            uVar18;
    u8            uVar19;
    u8            local_38[0x6];
    u16           local_32;
    u16           uStack48;
    u32    uStack46;
    u16           uStack42;
    u32   *puStack40;
    HDC16         local_24;
    PAINTSTRUCT16 local_22;

    puVar13   = &stack0xfffe;
    uVar14    = (param_1 >> 0x10);
    iVar11    = param_1;
    uVar15    = (iVar11 + 0x4);
    local_24  = BeginPaint16(param_2, &local_22);
    puStack40 = pass1_1010_4c2c(*(iVar11 + 0x6));
    pHVar6    = &local_24;
    ppcVar2   = (*puStack40 + 0x8);
    (**ppcVar2)(SEG_1010, puStack40, (puStack40 >> 0x10), pHVar6, param_3, uVar15);
    *(HDC16 **)(iVar11 + 0x10) = pHVar6;
    uVar3                      = (iVar11 + 0x6);
    uStack42                   = (uVar3 + 0x30);
    uVar3                      = (iVar11 + 0x6);
    uStack46                   = (uVar3 + 0x12);
    uStack48                   = 0x14;
    local_32                   = 0x0;
    pass1_1008_3e38(str_var1(param_3, local_38));
    while((puVar13 + -0x38) < (puVar13 + -0x28))
    {
        iVar11            = (puVar13 + -0x38) * 0x4;
        uVar3             = (puVar13 + -0x2c);
        uVar16            = pass1_1008_4772(*(Struct76 **)(iVar11 + uVar3));
        puVar9            = (uVar16 >> 0x10);
        (puVar13 + -0x44) = uVar16;
        (puVar13 + -0x42) = puVar9;
        uVar3             = (puVar13 + 0x6);
        pass1_1018_642e(uVar3, (uVar3 >> 0x10), CONCAT13((param_3 >> 0x8), CONCAT12(param_3, puVar13 + -0x30)), (uVar16 + 0x8));
        uVar3 = (puVar13 + -0x30);
        pass1_1008_3e76(str_var1(param_3, puVar13 + -0x36), 0x0, uVar3, (uVar3 >> 0x10));
        uVar3 = (puVar13 + -0x2c);
        pass1_1008_4480(*(puVar13 + -0x26),
                        str_var1(param_3, puVar13 + -0x36), *(Struct76 **)(uVar3 + iVar11), param_3);
        iVar11 = (puVar13 + -0x38);
        uVar3  = (puVar13 + -0x30);
        uVar14 = uVar3;
        uVar18 = (uVar3 >> 0x10);
        uVar19 = (uVar3 >> 0x18);
        uVar3  = (puVar13 + -0x44);
        uVar15 = (uVar3 >> 0x10);
        iVar12 = uVar3;
        iVar7  = (iVar12 + 0x4) + (puVar13 + -0x2e);
        iVar12 = (iVar12 + 0x8) + (puVar13 + -0x30);
        uVar3  = (puVar13 + 0x6);
        uVar3  = (uVar3 + 0x6);
        iVar17 = uVar3;
        uVar15 = (uVar3 >> 0x10);
        if((iVar17 + 0x1a) == 0x0)
        {
            uVar5 = (iVar17 + 0x30) << 0x3;
            mem_op_1000_179c(uVar5, puVar9, 0);
            (iVar17 + 0x1a) = uVar5;
            (iVar17 + 0x1c) = puVar9;
        }
        uVar3                  = (iVar17 + 0x1a);
        iVar11                 = iVar11 * 0x8;
        (uVar3 + iVar11)       = CONCAT11(uVar19, uVar18);
        uVar3                  = (iVar17 + 0x1a);
        (uVar3 + iVar11 + 0x2) = uVar14;
        uVar3                  = (iVar17 + 0x1a);
        (uVar3 + iVar11 + 0x4) = iVar7;
        uVar3                  = (iVar17 + 0x1a);
        (uVar3 + iVar11 + 0x6) = iVar12;
        uVar3                  = (puVar13 + -0x44);
        pi_var1                 = (puVar13 + -0x2e);
        *pi_var1                = *pi_var1 + (-((puVar13 + -0x38) == 0x0) & 0x5) + 0x14 + (uVar3 + 0x4);
        pi_var1                 = (puVar13 + -0x38);
        *pi_var1                = *pi_var1 + 0x1;
    }
    puVar4  = (puVar13 + -0x26);
    ppcVar2 = (*puVar4 + 0x4);
    (**ppcVar2)(SEG_1008, puVar4, (puVar4 >> 0x10), 0x0, 0x0, puVar13 + -0x22, param_3);
    handle                          = CreatePen16(SEG_1008, 0x25, 0x100);
    *(HPEN16 *)(puVar13 + -0x3a)    = handle;
    HVar8                           = SelectObject16((HDC16)LAST_SEGMENT, handle);
    *(HGDIOBJ16 *)(puVar13 + -0x3c) = HVar8;
    handle_00                       = CreateSolidBrush16((COLORREF)LAST_SEGMENT);
    *(HBRUSH16 *)(puVar13 + -0x3e)  = handle_00;
    HVar8                           = SelectObject16((HDC16)LAST_SEGMENT, handle_00);
    *(HGDIOBJ16 *)(puVar13 + -0x40) = HVar8;
    draw_line_1018_6444(*(puVar13 + 0x6), LAST_SEGMENT);
    uVar3  = (puVar13 + 0x6);
    uVar16 = pass1_1010_4dc8(*(uVar3 + 0x6));
    uVar10 = (uVar16 >> 0x10);
    uVar5  = uVar16;
    draw_op_1018_6544(*(puVar13 + 0x6), (uVar16 & 0xffff | uVar10 << 0x10), param_3);
    pass1_1018_6630(*(puVar13 + 0x6), uVar5, uVar10);
    uVar3 = (puVar13 + 0x6);
    SelectPalette16(SEG_1010, 0x0, *(BOOL16 *)(uVar3 + 0x10));
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    SelectObject16((HDC16)LAST_SEGMENT, *(HGDIOBJ16 *)(puVar13 + -0x3c));
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    SelectObject16((HDC16)LAST_SEGMENT, *(HGDIOBJ16 *)(puVar13 + -0x40));
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    EndPaint16((HWND16)LAST_SEGMENT, (PAINTSTRUCT16 *)(puVar13 + -0x20));
    return;
}

void draw_line_1018_6444(u32 param_1, HDC16 param_2)

{
    i16        iVar1;
    u16     *pIVar2;
    u32 uVar3;
    i16        iVar4;
    i16        iVar5;
    i16       *piVar6;
    u16        uVar7;
    i16        iStack10;

    uVar7  = (param_1 >> 0x10);
    uVar3  = (param_1 + 0x6);
    iVar1  = (uVar3 + 0x30);
    uVar3  = (param_1 + 0x6);
    pIVar2 = (uVar3 + 0x1a);
    MoveTo16(param_2, 0x5, *pIVar2);
    uVar7 = (pIVar2 >> 0x10);
    iVar5 = pIVar2;
    LineTo16((HDC16)LAST_SEGMENT, 0x5, (iVar5 + iVar1 * 0x8 + -0x4));
    for(iStack10 = 0x0; iStack10 < iVar1; iStack10 = iStack10 + 0x1)
    {
        piVar6 = (iStack10 * 0x8 + iVar5);
        iVar4  = (piVar6[0x2] - *piVar6 >> 0x1) + *piVar6;
        MoveTo16((HDC16)LAST_SEGMENT, 0x5, iVar4);
        LineTo16((HDC16)LAST_SEGMENT, 0xa, iVar4);
    }
    MoveTo16((HDC16)LAST_SEGMENT, 0x5f, *pIVar2);
    LineTo16((HDC16)LAST_SEGMENT, 0x5f, (iVar5 + iVar1 * 0x8 + -0x4));
    for(iStack10 = 0x0; iStack10 < iVar1; iStack10 = iStack10 + 0x1)
    {
        piVar6 = (iStack10 * 0x8 + iVar5);
        iVar4  = (piVar6[0x2] - *piVar6 >> 0x1) + *piVar6;
        MoveTo16((HDC16)LAST_SEGMENT, 0x5f, iVar4);
        LineTo16((HDC16)LAST_SEGMENT, 0x5a, iVar4);
    }
    return;
}


void draw_op_1018_6544(u32 param_1, i16 *param_2, u16 param_3)

{
    u16 *puVar1;
    u32  u_var2;
    u16  uVar3;
    u8   local_a[0x6];
    u16  uStack4;

    if(param_2 != 0x0)
    {
        uStack4 = ((param_2 + 0x4) - *param_2 >> 0x1) + *param_2;
        puVar1  = pass1_1008_3e54(str_var1(param_3, local_a), 0x0, 0x57, uStack4);
        uVar3   = (param_1 >> 0x10);
        u_var2   = pass1_1018_659a(param_1, uVar3, str_var1(param_3, local_a), (puVar1 >> 0x10), param_3);
        draw_polygon_1018_661c(param_1, uVar3, str_var1(u_var2, 0x3), SEG_1008);
    }
    return;
}

void draw_polygon_1018_661c(u16 param_1, u16 param_2, u32 param_3, HDC16 param_4)

{
    Polygon16(param_4, (POINT16 *)param_3, (u16)(param_3 >> 0x10));
    return;
}

void struct_1018_66cc(Struct20 *param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u8         *extraout_DX;
    u16         uVar1;
//    Struct20 *iVar2;
    i16         unaff_DI;
//    Struct20 *u_var2;
    u16        *pu_var2;

    unk_draw_op_1020_7f7a(param_1, 0xa, str_var1(param_3, param_2));
//    u_var2                                    = (Struct20 *)(param_1 >> 0x10);
//    iVar2                                    = (Struct20 *)param_1;
    &param_1[0x1].field_0xc                    = 0x0;
    param_1[0x1].field_0x10                    = 0x0;
    param_1->field_0x0                       = addr_table_1018_6880;
    param_1->field_0x2                         = SEG_1018;
    ((Struct20 *)(param_1 + 0x1))->field_0x0 = addr_table_1018_6880[39];//0x691c
    param_1[0x1].field_0x2                     = SEG_1018;
    pu_var2                                   = mixed_1010_20ba(globals->u16_1050_0ed0, 0xb, param_4, extraout_DX, unaff_DI);
    uVar1                                    = (pu_var2 >> 0x10);
    &param_1[0x1].field_0x10                   = pu_var2;
    (&param_1[0x1].field_0x10 + 0x2)           = uVar1;
    &param_1[0x1].field_0x4                    = &param_1[0x1].field_0x10;
    (&param_1[0x1].field_0x4 + 0x2)            = uVar1;
    return;
}

void pass1_1018_6924(Struct658 *param_1, u16 param_2, u16 param_3, i16 param_4, u16 param_5)

{
    void **ppcVar1;
    u32 u_var2;
    i16        iVar3;
    u8        *extraout_DX;
    u16        uVar4;
    u16       *puVar5;

    set_struct_op_1020_921c(str_var1(param_2, param_1), param_3);
    &param_1->field_0x14       = 0x0;
    param_1 =  addr_table_1018_6a02;//0x6a02;
    param_1->field_0x2         = SEG_1018;
    puVar5                     = mixed_1010_20ba(globals->u16_1050_0ed0, 0xb, param_5, extraout_DX, param_4);
    uVar4                      = (puVar5 >> 0x10);
    param_1->field_0x14        = puVar5;
    param_1->field_0x16        = uVar4;
    param_1->field_0x6         = param_1->field_0x14;
    param_1->field_0x8         = uVar4;
    u_var2                      = &param_1->field_0x14;
    iVar3                      = &param_1->field_0xa;
    ppcVar1                    = ((u_var2 + 0xa) + 0x8);
    (**ppcVar1)();
    param_1->field_0x12 = iVar3;
    draw_op_1020_9364(str_var1(param_2, param_1), SEG_1020, param_5);
    return;
}


void pass1_1018_69ac(u16 *param_1) {
    Struct511 *iVar1;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct511 *) param_1;
    param_1->field_0x0 = addr_table_1018_6a02;//0x6a02;
    iVar1->field_0x2 = SEG_1018;
    if (iVar1->field_0x14 != 0x0) {
        pass1_1010_1dda(iVar1->field_0x14);
    }
    palette_op_1020_92c4(param_1, SEG_1020);
    return;
}

void mixed_draw_op_1018_6a7a(Struct28 *param_1, u16 param_2)

{
    u8           *in_DX;
    i16           unaff_DI;
    u16           unaff_SS;
    u16          *puVar1;
    PAINTSTRUCT16 local_22;

    BeginPaint16(param_2, &local_22);
    EndPaint16((HWND16)LAST_SEGMENT, &local_22);
    puVar1 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, unaff_SS, in_DX, unaff_DI);
    if((puVar1 + 0x20) == 0x0)
    {
        unk_destroy_window_op_1018_6bb6(param_1, SEG_1010);
        return;
    }
    mix_ui_op_1018_6adc(param_1);
    return;
}

void clenaup_win_ui_1018_4d22(Struct11 *in_struct_1, HDC16 in_hdc_2)

{
    u16         uVar1;
    void **ppcVar2;
    Struct11 *local_struct_1;
    Struct11 *uVar4;
    u16         unaff_SS;
    u32        *pu_var2;
    u32        *puVar1;

    uVar4                     = (Struct11 *)(in_struct_1 >> 0x10);
    local_struct_1            = (Struct11 *)in_struct_1;
    in_struct_1               = addr_table_1018_5058;//s_SCi16ernalPutBldg_site_0x_08lx__b_1050_5046 + 0x12;
    local_struct_1->field_0x2 = SEG_1018;
    if(local_struct_1->field_0x12 != 0x0)
    {
        SelectPalette16(in_hdc_2, 0x0, local_struct_1->field_0x1a_addr_offset);
        DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
        in_hdc_2 = (HDC16)LAST_SEGMENT;
        DeleteDC16((HDC16)LAST_SEGMENT);
    }
    puVar1 = local_struct_1->field_0xa;
    uVar1  = local_struct_1->field_0xc;
    if((uVar1 | puVar1) != 0x0)
    {
        ppcVar2 = *puVar1;
        (**ppcVar2)(in_hdc_2, puVar1, uVar1, 0x1);
    }
    pu_var2 = local_struct_1->field_0xe;
    uVar1  = local_struct_1->field_0x10;
    if((uVar1 | pu_var2) != 0x0)
    {
        ppcVar2 = *pu_var2;
        (**ppcVar2)(in_hdc_2, pu_var2, uVar1, 0x1);
    }
    globals->_PTR_LOOP_1050_4230 = 0x0;
    pass1_1010_1d80(in_struct_1, unaff_SS);
    return;
}


void get_dc_1018_4db0(u32 param_1, u16 param_2, HWND16 param_3)

{
    HDC16 HVar1;
    u16   u_var2;

    u_var2                      = (param_1 >> 0x10);
    (param_1 + 0x16)           = param_2;
    HVar1                      = GetDC16(param_3);
    *(HDC16 *)(param_1 + 0x14) = HVar1;
    return;
}

void create_dc_1018_4e04(Struct8 *param_1, u16 param_2, i16 param_3, i16 param_4, LPCSTR in_string_5, u16 in_string_6)

{
    void **ppcVar1;
    Struct8 *p_var2;
    u32        uVar4;
    i16        iStack16;


    ppcVar1 = (param_1->field_0x14);
    (**ppcVar1)();
    uVar4 = pass1_1008_4772((Struct76 *)param_1->field_0xa);
    pass1_1008_43cc(param_1->field_0xa);
    p_var2            = (Struct8 *)CreateDC16(SEG_1008, uVar4, (uVar4 >> 0x10), (DEVMODEA *)0x0);
    param_1->field_0x12 = p_var2;
    p_var2            = (Struct8 *)&param_1->field_0x12;
    ppcVar1           = (*param_1->field_0xa + 0x8);
    (**ppcVar1)();
    param_1->field_0x1a_addr_offset = p_var2;
    if((DAT_1050_422e != 0x0) && (0x280 < param_4))
    {
        for(iStack16 = 0x0; iStack16 < DAT_1050_4216 + 0x1; iStack16 = iStack16 + 0x1)
        {
            (&PTR_DAT_1050_0009_1050_4172 + iStack16 * 0x2) = (((long)(&PTR_DAT_1050_0009_1050_4172 + iStack16 * 0x2) * ((long)param_4 + 0x1)) / 0x280);
        }
        for(iStack16 = 0x0; iStack16 < DAT_1050_422c + 0x1; iStack16 = iStack16 + 0x1)
        {
            (&DAT_1050_419a + iStack16 * 0x2) = (((long)(&DAT_1050_419a + iStack16 * 0x2) * ((long)param_3 + 0x1)) / 0x1e0);
        }
    }
    DAT_1050_422e = 0x0;
    return;
}

void struct_1018_5840(Globals  *globals,
                      Struct20 *param_1,
                      u16       param_2,
                      u16       param_3,
                      u16       param_4)

{
    u8          *extraout_DX;
    u16          uVar1;
//    Struct130 *iVar2;
    i16          unaff_DI;
//    u16          u_var2;
    u16         *puVar3;

    unk_draw_op_1020_7f7a(param_1, 0x6, str_var1(param_3, param_2));
//    u_var2              = (param_1 >> 0x10);
//    iVar2              = (Struct130 *)param_1;
    param_1->field_0xee  = 0x0;
    &param_1->field_0xf2 = 0x0;
    param_1->field_0xf6  = 0x0;
    param_1->field_0x0 = addr_table_1018_5a62;//0x5a62; //s_Alloc__s_1050_5a5b + 0x7;
    param_1->field_0x2   = SEG_1018;
    param_1->field_0xe2  = addr_table_1018_5a62[39];//0x5afe;
    param_1->field_0xe4  = SEG_1018;
    puVar3             = mixed_1010_20ba(globals->u16_1050_0ed0, 0x27, param_4, extraout_DX, unaff_DI);
    uVar1              = (puVar3 >> 0x10);
    param_1->field_0xf2  = puVar3;
    param_1->field_0xf4  = uVar1;
    param_1->field_0xe6  = param_1->field_0xf2;
    param_1->field_0xe8  = uVar1;
}

void invalidate_rect_1018_58e2(Struct58 *param_1, i16 param_2, HWND16 param_3)

{
    i16        *pi_var1;

    if(param_2 == 0x105)
    {
        pi_var1  = &param_1->field_0xf6;
        *pi_var1 = *pi_var1 + 0x1;
        if(globals->PTR_DAT_1050_0004_1050_4240 <= iVar2->field_0xf6)
        {
            PostMessage16(param_3, 0x0, 0x0, 0x11100ca);
            return;
        }
        param_1->field_0xea = 0x0;
        InvalidateRect16(param_3, (RECT16 *)0x0, 0x0);
    }
}

void pass1_1010_4674(u32 param_1, i16 param_2, u16 param_3, u16 param_4)

{
    i16  *pi_var1;
    u32 u_var2;
    u16 UVar3;

    u_var2 = (u32)param_1;
    UVar3 = (u16)(param_1 >> 0x10);
    if(param_2 == 0x1)
    {
        pi_var1  = (u_var2 + 0x24);
        *pi_var1 = *pi_var1 + 0x1;
        if(0xf < (u_var2 + 0x24))
        {
            (u_var2 + 0x24) = 0x0;
        }
    LAB_1010_469a:
        draw_op_1010_47d0(u_var2, UVar3, *(u_var2 + 0x24), param_3, param_4);
    }
    else
    {
        if(param_2 != 0x2)
        {
            if(param_2 != 0x3)
            {
                if(((u_var2 + 0x6a) != 0x0) && ((u_var2 + 0x6a) != 0x4))
                {
                    pass1_1010_459e(param_1);
                }
                goto LAB_1010_46e8;
            }
            pi_var1  = (u_var2 + 0x24);
            *pi_var1 = *pi_var1 + -0x1;
            if(*pi_var1 < 0x0)
            {
                (u_var2 + 0x24) = 0xf;
            }
            goto LAB_1010_469a;
        }
    }
    pass1_1010_1f62(param_4, param_1, 0x2);
    pass1_1010_45d6(param_1, param_3);
LAB_1010_46e8:
    (u_var2 + 0x6a) = param_2;
    return;
}

void draw_1010_47ae(u32 param_1, u16 param_2, u16 param_3)

{
    u16 UStack4;

    UStack4 = 0x0;
    do
    {
        draw_op_1010_47d0((u32)param_1, (u16)(param_1 >> 0x10), UStack4, param_2, param_3);
        UStack4 = UStack4 + 0x1;
    } while(UStack4 < 0x10);
    return;
}

void draw_op_1010_47d0(u32 param_1, u16 param_2, u16 param_3, u16 in_style_3, u16 param_5)

{
    i16        *pi_var1;
    u32 *pu_var2;
    void **ppcVar3;
    i16         iVar4;
    HPALETTE16  b_force_background;
    HGDIOBJ16   handle;
    HGDIOBJ16   handle_00;
    u16         uVar5;
    u8         *extraout_DX;
    u8         *puVar6;
    LPCSTR      output;
    Struct5  *iVar6;
    i16         iVar7;
    Struct4  *iVar9;
    u16         uVar8;
    HDC16       hdc;
    u32         uVar9;
    DEVMODEA   *init_data;
    u32  uVar10;
    i16         iStack32;
    HDC16       local_14;
    LPCSTR      pCStack18;
    LPCSTR      pCStack16;
    u16         local_e;
    u16         uStack12;
    u16         uStack10;
    u16         uStack8;
    HGDIOBJ16   stock_obj_handle;
    HPEN16      pen_handle;

    uVar10           = 0x1;
    pen_handle       = CreatePen16(in_style_3, -0x2805, 0x77);
    uVar8            = 0x5;
    stock_obj_handle = GetStockObject16((u16)LAST_SEGMENT);
    local_e          = 0x0;
    uStack12         = 0x0;
    uStack10         = 0x1;
    uStack8          = 0x1;
    pu_var2           = *(param_1 + 0x26 + param_3 * 0x4);
    puVar6           = (param_1 + 0x26 + param_3 * 0x4 + 0x2);
    if((puVar6 | pu_var2) != 0x0)
    {
        ppcVar3 = *pu_var2;
        (**ppcVar3)(LAST_SEGMENT, pu_var2, puVar6, 0x1, uVar8, uVar10);
        puVar6 = extraout_DX;
    }
    iVar4 = param_3 + 0x105;
    pass1_1010_8170globals->dat_1050_14cc, iVar4, puVar6, LAST_SEGMENT);
    iVar7                    = param_3 * 0x4;
    (param_1 + iVar7 + 0x26) = iVar4;
    (param_1 + iVar7 + 0x28) = puVar6;
    init_data                = (DEVMODEA *)0x0;
    uVar9                    = pass1_1008_4772(*(Struct76 **)(param_1 + 0x26 + iVar7));
    output                   = (uVar9 >> 0x10);
    pCStack18                = uVar9;
    pCStack16                = output;
    local_14                 = CreateDC16(SEG_1008, pCStack18, output, init_data);
    b_force_background       = palette_op_1008_4e08(*(Struct13 **)(globals->_PTR_LOOP_1050_4230 + 0xe), &local_14, output, SEG_1008);
    handle                   = SelectObject16(SEG_1008, pen_handle);
    hdc                      = (HDC16)LAST_SEGMENT;
    handle_00                = SelectObject16((HDC16)LAST_SEGMENT, stock_obj_handle);
    iStack32                 = 0x0;
    while(true)
    {
        pi_var1 = (param_1 + 0x74);
        if(*pi_var1 == iStack32 || *pi_var1 < iStack32)
            break;
        iVar4 = (iStack32 * 0x10 + param_3) * 0x8;
        hdc   = SEG_1000;
        uVar5 = pass1_1000_484c(str_var1(param_5, &local_e),
                                str_var1((param_1 + 0x72), iVar4 + (param_1 + 0x70)), 0x8);
        if(uVar5 != 0x0)
        {
            uVar10 = (param_1 + 0x70);
            uVar8  = (uVar10 >> 0x10);
            iVar7  = uVar10;
            iVar9  = (Struct4 *)(iVar4 + iVar7);
            hdc    = (HDC16)LAST_SEGMENT;
            Rectangle16(SEG_1000, iVar9->field_0x6, iVar9->field_0x4, iVar9->field_0x2, (iVar7 + iVar4));
        }
        iStack32 = iStack32 + 0x1;
    }
    SelectPalette16(hdc, 0x0, b_force_background);
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    SelectObject16((HDC16)LAST_SEGMENT, handle);
    SelectObject16((HDC16)LAST_SEGMENT, handle_00);
    DeleteDC16((HDC16)LAST_SEGMENT);
    DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
    return;
}

void pt_in_rect_1010_4e08(u32 param_1, u16 param_2, u16 param_3, RECT16 *param_4)

{
    i16    *pi_var1;
    bool    bVar2;
    BOOL16  BVar3;
    i16     iVar4;
    u16     uVar5;
    i16     iStack12;
    i16     iStack10;
    POINT16 PStack8;

    PStack8        = (POINT16)str_var1(param_2, param_3);
    uVar5          = (param_1 >> 0x10);
    iVar4          = param_1;
    (iVar4 + 0x22) = (iVar4 + 0x20);
    bVar2          = false;
    (iVar4 + 0x24) = 0x0;
    iStack12       = 0x0;
    iStack10       = 0x0;
    do
    {
        pi_var1 = (iVar4 + 0x30);
        if(*pi_var1 == iStack12 || *pi_var1 < iStack12)
        {
        LAB_1010_4e67:
            if(iStack10 != 0x0)
            {
                (iVar4 + 0x20) = iStack10;
            }
            if(bVar2)
            {
                return;
            }
            return;
        }
        BVar3 = PtInRect16(param_4, PStack8);
        if(BVar3 != 0x0)
        {
            iStack10 = iStack12;
            bVar2    = true;
            goto LAB_1010_4e67;
        }
        iStack12 = iStack12 + 0x1;
        param_4  = (RECT16 *)LAST_SEGMENT;
    } while(true);
}

i16 pt_in_rect_1010_40f8(u32 param_1, POINT16 *param_2, RECT16 *param_3)

{
    i16        *pi_var1;
    void **ppcVar2;
    BOOL16      BVar3;
    u16         uVar4;
    u16         uVar5;
    i16         iVar6;
    u8         *in_DX;
    u8         *puVar7;
    u8         *puVar8;
    i16         unaff_DI;
    u16         uVar9;
    u16         unaff_SS;
    u16        *puVar10;
    u32 *puStack16;
    i16         iStack6;
    u16         uStack4;

    iStack6 = 0x0;
    uStack4 = 0x0;
    do
    {
        uVar9  = (param_1 >> 0x10);
        pi_var1 = (param_1 + 0x74);
        if(*pi_var1 == iStack6 || *pi_var1 < iStack6)
        {
        LAB_1010_413e:
            if((uStack4 != 0x0) && (0x3 < globals->PTR_LOOP_1050_3960))
            {
                puVar10 = mixed_1010_20ba(globals->u16_1050_0ed0, iStack6 + 0xcU, unaff_SS, in_DX, unaff_DI);
                puVar7  = (puVar10 >> 0x10);
                uVar4   = pass1_1018_0afa(puVar10);
                if(uVar4 == 0x0)
                {
                    uVar9 = SEG_1000;
                    uVar5 = uVar4;
                    mem_op_1000_179c(0xb4, puVar7, 0);
                    puVar8 = (puVar7 | uVar5);
                    if(puVar8 == 0x0)
                    {
                        iVar6  = 0x0;
                        puVar8 = 0x0;
                    }
                    else
                    {
                        uVar9 = SUB42(SEG_1040, 0x0);
                        iVar6 = string_1040_8520(str_var1(puVar7, uVar5), globals->PTR_LOOP_1050_0396, 0x30, 0x2, 0x643, 0x645, puVar8, unaff_SS);
                    }
                    puStack16 = str_var1(puVar8, iVar6);
                    ppcVar2   = (*puStack16 + 0x74);
                    (**ppcVar2)(uVar9, iVar6, puVar8);
                    pass1_1010_209e(globals->u16_1050_0ed0, iStack6 + 0xcU);
                    uStack4 = uVar4;
                }
            }
            if(uStack4 != 0x0)
            {
                return iStack6;
            }
            return -0x1;
        }
        in_DX = (param_1 + 0x72);
        BVar3 = PtInRect16(param_3, *param_2);
        if(BVar3 != 0x0)
        {
            uStack4 = 0x1;
            goto LAB_1010_413e;
        }
        iStack6 = iStack6 + 0x1;
        param_3 = (RECT16 *)LAST_SEGMENT;
    } while(true);
}

u16 draw_fn_1010_2a32(u16 param_1, u16 param_2, u16 *__return_storage_ptr__, i16 param_4, u16 param_5, u32 param_6, u16 param_7, u16 param_8, u16 param_9, u16 param_10)

{
    i16        *pi_var1;
    char       *pcVar2;
    u8       *pbVar3;
    u32  uVar4;
    u8        bVar5;
    u16         uVar6;
    u16         uVar7;
    void **ppcVar8;
    void *pcVar9;
    u16      *puVar10;
    u16         uVar11;
    HPALETTE16  b_force_background;
    HGDIOBJ16   handle;
    u16         uVar12;
    u16         uVar13;
    BOOL16      BVar14;
    i16         iVar15;
    u8        bVar16;
    u8         *extraout_DX;
    u8         *extraout_DX_00;
    u8         *puVar17;
    u8         *extraout_DX_01;
    u8         *extraout_DX_02;
    u8         *puVar18;
    i16         unaff_SI;
    i16         iVar19;
    i16         iVar20;
    u16         unaff_DI;
    u16         u_var21;
    HDC16       hdc;
    u16         unaff_SS;
    u8        bVar22;
    bool        bVar23;
    undefined1  in_AF;
    u32         u_var24;
    u16         uStack54;
    u32 *puStack46;
    u16         uStack42;
    u32 *puStack38;
    i16         local_22;
    i16         iStack32;
    HGDIOBJ16   HStack30;
    u8          u_var25;
    HGDIOBJ16   handle_00;
    u8          u_var26;
    u8          u_var27;
    u8          u_var28;

    puVar10 = __return_storage_ptr__;
    u_var27  = param_9;
    u_var28  = (param_9 >> 0x8);
    bVar22  = 0x0;
    u_var26  = 0x0;
    u_var25  = (param_4 >> 0x8);
    if((param_6 + 0xec76 & 0x3) != 0x0)
        goto LAB_1010_2ad8;
    uVar11 = param_6 + 0xec76 >> 0x1;
    if(0x1c < uVar11)
        goto LAB_1010_2ad8;
    switch(uVar11)
    {
    default:
        goto switchD_1010_2ab5_caseD_0;
    case 0x1:
    case 0x3:
    case 0xb:
        *(uVar11 + 0xa) = param_8;
    case 0x9:
    case 0xf:
    case 0x15:
    case 0x1b:
        *(uVar11 + 0xa)  = param_8;
        *(uVar11 + 0x10) = param_8;
        *(uVar11 + 0xc)  = param_8;
        return (u16)param_10;
    case 0x5:
        BVar14 = write_to_file_1008_7e1c(param_5, param_6, param_8, 0x0, CONCAT13(param_1._1_1_, CONCAT12((undefined)param_1, param_9)), SEG_1008);
        if(BVar14 != 0x0)
        {
            return param_7;
        }
        globals->dat_1050_0310 = 0x6d0;
        return param_7;
    case 0x6:
        bVar22 = 0x0;
        goto LAB_1010_2ad8;
    case 0x7:
        ppcVar8 = param_8;
        (**ppcVar8)();
        iVar15  = param_5 + 0x105;
        puVar17 = extraout_DX;
        pass1_1010_8170globals->dat_1050_14cc, iVar15, extraout_DX, SEG_1010);
        iVar19                                   = param_5 * 0x4;
        (__return_storage_ptr__ + iVar19 + 0x26) = iVar15;
        (__return_storage_ptr__ + iVar19 + 0x28) = puVar17;
        handle_00                                = (HGDIOBJ16)SEG_1050;
        u_var24                                   = pass1_1008_4772(*(Struct76 **)(__return_storage_ptr__ + iVar19 + 0x26));
        puVar17                                  = (u_var24 >> 0x10);
        CreateDC16(SEG_1008, u_var24, puVar17, (DEVMODEA *)puVar17);
        b_force_background = palette_op_1008_4e08(*(Struct13 **)(globals->_PTR_LOOP_1050_4230 + 0xe), &stack0xffec, puVar17, SEG_1008);
        handle             = SelectObject16(SEG_1008, CONCAT11(u_var26, bVar22));
        hdc                = (HDC16)LAST_SEGMENT;
        HStack30           = SelectObject16((HDC16)LAST_SEGMENT, handle_00);
        for(iStack32 = 0x0; pi_var1 = (__return_storage_ptr__ + 0x74), *pi_var1 != iStack32 && iStack32 <= *pi_var1; iStack32 = iStack32 + 0x1)
        {
            iVar15             = (iStack32 * 0x10 + param_5) * 0x8;
            puVar17            = (__return_storage_ptr__ + 0x72);
            hdc                = SEG_1000;
            b_force_background = 0x48e1;
            uVar11             = pass1_1000_484c(CONCAT13((unaff_SS >> 0x8), CONCAT12(unaff_SS, &stack0xfff2)), CONCAT13((puVar17 >> 0x8), CONCAT12(puVar17, iVar15 + (__return_storage_ptr__ + 0x7))), 0x8);
            if(uVar11 != 0x0)
            {
                uVar4              = (__return_storage_ptr__ + 0x7);
                u_var21             = (uVar4 >> 0x10);
                iVar19             = uVar4;
                iVar20             = iVar15 + iVar19;
                hdc                = (HDC16)LAST_SEGMENT;
                b_force_background = (HPALETTE16)&PTR_LOOP_1050_4908;
                Rectangle16(SEG_1000, (iVar20 + 0x6), (iVar20 + 0x4), (iVar20 + 0x2), (iVar19 + iVar15));
            }
        }
        SelectPalette16(hdc, 0x0, b_force_background);
        DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
        SelectObject16((HDC16)LAST_SEGMENT, handle);
        SelectObject16((HDC16)LAST_SEGMENT, HStack30);
        DeleteDC16((HDC16)LAST_SEGMENT);
        DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
        return (u16)puVar17;
    case 0x8:
        bVar22 = 0x3;
        goto LAB_1010_2ad8;
    case 0xd:
        pbVar3  = (u8 *)(uVar11 + unaff_SI);
        bVar22  = *pbVar3;
        bVar5   = *pbVar3 + (u8)param_7;
        *pbVar3 = bVar5 + (uVar11 < 0x1c);
        uVar6   = (CARRY1(bVar22, (u8)param_7) || CARRY1(bVar5, uVar11 < 0x1c));
        uVar7   = param_8 + 0xeff0;
        bVar22  = param_8 < SEG_1010 || uVar7 < uVar6;
        uVar12  = uVar7 - uVar6;

        pcVar9  = swi(0x4);
        if(SBORROW2(param_8, SEG_1010) != SBORROW2(uVar7, uVar6))
        {
            (*pcVar9)();
            param_7 = (u16)extraout_DX_00;
        }
        bVar23  = uVar12 < SEG_1010 || uVar12 + 0xeff0 < bVar22;
        pbVar3  = (u8 *)(uVar11 + unaff_SI);
        bVar22  = *pbVar3;
        bVar16  = (u8)param_7;
        bVar5   = *pbVar3;
        *pbVar3 = bVar5 + bVar16 + bVar23;
        pcVar2  = (uVar11 + unaff_SI);
        *pcVar2 = *pcVar2 + bVar16 + (CARRY1(bVar22, bVar16) || CARRY1(bVar5 + bVar16, bVar23));
        struct_op_1018_4cda(CONCAT11(u_var27, u_var26), CONCAT11((undefined)param_1, u_var28), CONCAT11((undefined)param_2, param_1._1_1_));
        iVar15         = CONCAT11(u_var27, u_var26);
        pi_var1         = CONCAT13((undefined)param_1, CONCAT12(u_var28, iVar15));
        *pi_var1        = 0x509a//s_SCi16ernalPutBldg2_site_0x_08lx__1050_5099 + 0x1;
        (iVar15 + 0x2) = SEG_1010;
        pass1_1018_4dce(CONCAT13((undefined)param_1, CONCAT12(u_var28, iVar15)), 0x1b3, param_7, unaff_SS);
        globals->_PTR_LOOP_1050_4230 = CONCAT13((undefined)param_1, CONCAT12(u_var28, CONCAT11(u_var27, u_var26)));
        return (u16)CONCAT11((undefined)param_1, u_var28);
    case 0xe:
        (__return_storage_ptr__ + 0x2) = param_5;
        break;
    case 0x11:
        do
        {
            // WARNING: Do nothing block with infinite loop
        } while(true);
    case 0x12:
        globals->PTR_LOOP_1050_10c6 = (0x0 < param_5);
        globals->PTR_LOOP_1050_1142 = (0x2 < param_5);
        break;
    case 0x13:
        iVar15 = __return_storage_ptr__ * 0x8 + param_1;
        if((((iVar15 + 0x22) != 0x0) || ((iVar15 + 0x24) != 0x0)) || (((iVar15 + 0x26) != 0x0 || ((iVar15 + 0x28) != 0x0))))
        {
            uVar4    = (param_1 + 0xe);
            HStack30 = 0x627c;
            sys_1000_3f9c(uVar4,
                          (uVar4 >> 0x10),
                          s__d__d__d__d_1050_14ae,
                          *(__return_storage_ptr__ * 0x8 + param_1 + 0x22),
                          &stack0xfffa,
                          param_2,
                          SEG_1000,
                          unaff_SS,
                          in_AF);
            uVar4    = (param_1 + 0xa);
            HStack30 = 0x62a0;
            WritePrivateProfileString16(SEG_1000, uVar4, (uVar4 >> 0x10),  * (param_1 + 0xe));
        }
        return param_7;
    case 0x14:
        (__return_storage_ptr__ + 0x24) = param_5;
        break;
    case 0x17:
        puVar17                                     = (param_7 - 0x1);
        pbVar3                                      = (u8 *)(uVar11 + unaff_SI);
        *pbVar3                                     = *pbVar3 | (u8)puVar17;
        *(__return_storage_ptr__ + 0x12) = param_8;
        (__return_storage_ptr__ + 0x14)             = puVar17;
        uStack42                                    = 0x0;
        while(true)
        {
            if(uStack54 <= uStack42)
            {
                BVar14 = read_file_1008_7dee(param_5, param_6, __return_storage_ptr__ + 0x1a, 0x0, param_4, 0x2, SEG_1008);
                if(((BVar14 != 0x0) && (BVar14 = read_file_1008_7dee(param_5, param_6, __return_storage_ptr__ + 0x1c, 0x0, param_4, 0x2, SEG_1008), BVar14 != 0x0))
                   && (BVar14 = read_file_1008_7dee(param_5, param_6, __return_storage_ptr__ + 0x1e, 0x0, param_4, 0x2, SEG_1008), BVar14 != 0x0))
                {
                    return (u16)puVar17;
                }
                globals->dat_1050_0310 = 0x6d2;
                return (u16)puVar17;
            }
            uVar11 = uStack54;
            mem_op_1000_179c(0x8, puVar17, 0);
            puStack46 = str_var1(puVar17, uVar11);
            puVar18   = (puVar17 | uVar11);
            if(puVar18 == 0x0)
            {
                puStack38 = 0x0;
            }
            else
            {
                puStack46      = addr_table_1008_380a[36];//0x389a;
                (uVar11 + 0x2) = SEG_1008;
                puStack46      = addr_table_1010_a1c4;//0xa1c4;
                (uVar11 + 0x2) = SEG_1010;
                puStack38      = puStack46;
            }
            BVar14 = read_file_1008_7dee(param_5, param_6, &local_22, 0x0, unaff_SS, 0x2, SEG_1008);
            uVar13 = (puStack38 >> 0x10);
            if((BVar14 == 0x0) || (BVar14 = read_file_1008_7dee(param_5, param_6, puStack38 + 0x6, 0x0, uVar13, 0x2, SEG_1008), BVar14 == 0x0))
                break;
            iVar15            = switch_1008_73ea(param_5, param_6, local_22);
            (puStack38 + 0x4) = iVar15;
            ppcVar8           = ((__return_storage_ptr__ + 0x12) + 0x4);
            (**ppcVar8)();
            uStack42 = uStack42 + 0x1;
            puVar17  = extraout_DX_02;
        }
        if(puStack38 == 0x0)
        {
            globals->dat_1050_0310 = 0x6d2;
            return (u16)puVar18;
        }
        ppcVar8 = *puStack38;
        (**ppcVar8)();
        globals->dat_1050_0310 = 0x6d2;
        return (u16)extraout_DX_01;
    case 0x18:
        bVar22 = 0x2;
        goto LAB_1010_2ad8;
    case 0x19:
        uVar13 = pass1_1010_6ca2(CONCAT13(u_var25, CONCAT12(param_4, __return_storage_ptr__)), 0x8, param_7, unaff_SS);
        if(uVar13 != 0x0)
        {
            __return_storage_ptr__ = (s_version__d__d_1050_0012 + 0x8);
            pass1_1010_715c(
              str_var1(0x1a, puVar10), 0x1a, uVar13, param_7, unaff_DI, unaff_SS);
        }
        if(param_5 == 0x2c)
        {
            pass1_1010_715c(str_var1(0x1d, __return_storage_ptr__), 0x1d, uVar13, param_7, unaff_DI, unaff_SS);
        }
        uVar13 = pass1_1010_6ca2(0x5a, 0x2, param_7, unaff_SS);
        if(uVar13 != 0x0)
        {
            pass1_1010_715c(0x1c005a, 0x1c, uVar13, param_7, unaff_DI, unaff_SS);
        }
        return param_7;
    case 0x1a:
        (__return_storage_ptr__ + 0x26) = param_5;
    }
    bVar22 = 0x1;
LAB_1010_2ad8:
    if((bVar22 == 0x1) || (bVar22 == 0x2))
    {
        if(bVar22 == 0x1)
        {
            param_5 = (__return_storage_ptr__ + 0x2) + (__return_storage_ptr__ + 0x22) + (__return_storage_ptr__ + 0x24) + (__return_storage_ptr__ + 0x26);
        }
        if(param_5 != 0x0)
        {
            param_7 = param_5 >> 0xf;
            param_5 = param_5 / 0x2 + 0x1;
            if(0x5 < param_5)
            {
                param_5 = 0x5;
            }
            if(((bVar22 == 0x1) && (globals->PTR_LOOP_1050_10c6 != 0x0)) && (0x4 < param_5))
            {
                param_5 = 0x4;
            }
        }
    }
    (bVar22 * 0x7c + 0xed6) = param_5;
    pass1_1010_1f62(unaff_SS, CONCAT13(u_var25, CONCAT12(param_4, __return_storage_ptr__)), 0xc);
switchD_1010_2ab5_caseD_0:
    return param_7;
}

void unk_draw_op_1008_da12(Struct19 *param_1, u16 param_2, u16 param_3)

{
    i16          *pi_var1;
    u8          bVar2;
    u32           uVar3;
    u16          *puVar4;
    HDC16         hdc;
    u16         IVar6;
    i16           iVar7;
    u16           uVar8;
    Struct80   *IVar5;
    u16           start;
    u16           uVar9;
    PALETTEENTRY *entries;
    u8           *count;
    i16           iVar10;
    HWND16        hwnd;
    u16          *puStack32;
    i16           iStack16;
    long          lStack8;

    struct_op_1010_1d48((Struct79 *)str_var1(param_2, param_1), param_3);
    param_1->field_0xa = 0x0;
    param_1->field_0xc = 0x0;
    pass1_1008_3e38(str_var1(param_2, &param_1->field_0xe));
    param_1->field_0x14        = 0x0;
    param_1->field_0x16        = 0x0;
    param_1->field_0x18        = 0x0;
    param_1 =  pass1_1008_dc80;//0xdc80;
    param_1->field_0x2         = SEG_1008;
    hdc                        = GetDC16(SEG_1010);
    IVar6                      = GetDeviceCaps16((HDC16)LAST_SEGMENT, 0x8);
    param_1->field_0xa         = IVar6;
    IVar6                      = GetDeviceCaps16((HDC16)LAST_SEGMENT, 0xa);
    param_1->field_0xc         = IVar6;
    iVar7                      = param_1->field_0xc + -0x1e0;
    count                      = (iVar7 >> 0xf);
    pass1_1008_3e76(str_var1(param_2, &param_1->field_0xe), 0x0, iVar7 / 0x2, (param_1->field_0xa + -0x280) / 0x2);
    hwnd  = (HWND16)LAST_SEGMENT;
    uVar8 = GetDeviceCaps16((HDC16)LAST_SEGMENT, 0x26);
    if((uVar8 & 0x100) != 0x0)
    {
        IVar6               = GetDeviceCaps16((HDC16)LAST_SEGMENT, 0x68);
        param_1->field_0x14 = IVar6;
        IVar5               = (Struct80 *)GetDeviceCaps16((HDC16)LAST_SEGMENT, 0x6a);
        param_1->field_0x16 = (u16)IVar5;
        if(globals->_PTR_LOOP_1050_5f2c == 0x0)
        {
            globals->dat_1050_5f2c = mem_op_1000_160a(count, SEG_1000);
        }
        else
        {
            count = globals->dat_1050_5f2e;
        }
        start   = fn_ptr_op_1000_1708((IVar5 + 0x1) * 0x4, 0x0, 0x1, globals->dat_1050_5f2c, count, SEG_1000);
        lStack8 = str_var1(count, start);
        iVar7   = param_1->field_0x16;
        if(globals->_PTR_LOOP_1050_5f2c == 0x0)
        {
            globals->dat_1050_5f2e      = count;
            globals->dat_1050_5f2c      = mem_op_1000_160a(count, SEG_1000);
        }
        else
        {
        }
        uVar9                        = fn_ptr_op_1000_1708((iVar7 + 0x1) * 0x4, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
        &param_1->field_0x18         = uVar9;
        (&param_1->field_0x18 + 0x2) = globals->dat_1050_5f2e;
        if(lStack8 != 0x0)
        {
            if(param_1->field_0x18 != 0x0)
            {
                entries = (PALETTEENTRY *)(param_1->field_0x16 / 0x2);
                GetSystemPaletteEntries(SEG_1000, start, (u16)count, entries);
                GetSystemPaletteEntries((HDC16)LAST_SEGMENT, entries * 0x4 + start, (u16)count, entries);
                puStack32 = param_1->field_0x18;
                for(iStack16 = 0x0; puVar4 = puStack32, pi_var1 = &param_1->field_0x16, *pi_var1 != iStack16 && iStack16 <= *pi_var1; iStack16 = iStack16 + 0x1)
                {
                    bVar2           = *(u8 *)(iStack16 * 0x4 + start);
                    iVar7           = iStack16 * 0x4 + start;
                    uVar3           = puStack32 >> 0x10;
                    iVar10          = puStack32;
                    puStack32       = (puStack32 & 0xffff0000 | (iVar10 + 0x4));
                    *puVar4         = CONCAT11(*(iVar7 + 0x1), *(iVar7 + 0x2));
                    *(iVar10 + 0x2) = bVar2;
                }
            }
        }
        hwnd = SEG_1000;
        fn_ptr_1000_17ce((Struct18 *)str_var1(count, start), SEG_1000);
    }
    ReleaseDC16(hwnd, hdc);
    return;
}
