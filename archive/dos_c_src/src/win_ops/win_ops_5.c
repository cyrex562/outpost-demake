//
// Created by cyrex on 2023-03-07.
//

#include "win_ops_5.h"

#include "address_tables/function_tables.h"
#include "draw_ops/draw_ops_1.h"
#include "draw_ops/draw_ops_2.h"
#include "draw_ops/draw_ops_3.h"
#include "fn_ptr_ops/fn_ptr_ops_6.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "op_winapi.h"
#include "op_windef.h"
#include "structs/structs_0xx/structs_3x.h"
#include "structs/structs_8xx/struct_87x.h"
#include "sys_ops/sys_ops_6.h"
#include "sys_ops/sys_ops_8.h"
#include "sys_ops/sys_ops_9.h"
#include "ui_ops/ui_ops_1.h"
#include "ui_ops/ui_ops_6.h"
#include "unk/unk_12.h"
#include "unk/unk_14.h"
#include "unk/unk_15.h"
#include "unk/unk_5.h"
#include "utils.h"
#include "win_ops/win_ops_3.h"
#include "win_ops_1.h"
#include "win_ops_3.h"

#include <stdbool.h>
#include <stddef.h>


void window_op_1020_10a0(Globals *globals, Struct0 *param_1)

{
    u32               uVar1;
    void **ppcVar2;
    Struct160 *in_AX;
    u16               uVar3;
    u16              *pBVar4;
    u8               *in_DX;
    u8               *puVar5;
    u8               *puVar6;
    u8               *extraout_DX;
    u16               extraout_DX_00;
    short             unaff_DI;
    u16               unaff_SS;
    u8                in_AF;
    u16              *puVar7;
    u32               uVar8;
    u16               uVar9;
    u8               *puVar10;
    short             iVar11;
//    u16          uVar12;

    iVar11 = param_1;
//    uVar12 = (param_1 >> 0x10);
    create_window_ex_1008_9760(param_1, SEG_1008);
    mem_op_1000_179c(0x42, in_DX, 0);
    puVar5 = (in_DX | in_AX);
    if(puVar5 != 0x0)
    {
        pass1_1008_3bd6(in_AX,
                        in_DX,
                        0x1f009b,
                        0x0,
                        0x740075,
                        str_var1((iVar11 + 0x8), 0xf1),
                        puVar5,
                        NULL,
                        unaff_SS,
                        0,
                        0,
                        0,
                        0,
                        0);
    }
    mem_op_1000_179c(0x42, puVar5, 0);
    puVar6 = (puVar5 | in_AX);
    if(puVar6 != 0x0)
    {
        pass1_1008_3bd6(in_AX,
                        puVar5,
                        0x31009b,
                        0x0,
                        0x760077,
                        str_var1((iVar11 + 0x8), 0xf2),
                        puVar6,
                        NULL,
                        unaff_SS,
                        0,
                        0,
                        0,
                        0,
                        0);
    }
    mem_op_1000_179c(globals, 0x42, SEG_1000);
    puVar5 = (puVar6 | in_AX);
    if(puVar5 != 0x0)
    {
        pass1_1008_3bd6(in_AX,
                        puVar6,
                        0x77009b,
                        0x0,
                        0x780079,
                        str_var1((iVar11 + 0x8), 0xf3),
                        puVar5,
                        NULL,
                        unaff_SS,
                        0,
                        0,
                        0,
                        0,
                        0);
    }
    puVar7                      = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2d, unaff_SS, puVar5, unaff_DI);
    uVar9                       = (puVar7 >> 0x10);
    (iVar11 + 0xf2)             = puVar7;
    (iVar11 + 0xf4)             = uVar9;
    (iVar11 + 0xe0)             = (iVar11 + 0xf2);
    (iVar11 + 0xe2)             = uVar9;
    puVar10                     = globals->hinst_1050_038c;
    uVar3                       = LoadIcon16(SEG_1010, s_PLNTICON_1050_4267);
    *(HANDLE16 *)(iVar11 + 0xc2) = uVar3;
    uVar1                       = (iVar11 + 0xf2);
    ppcVar2                     = ((iVar11 + 0xf2) + 0x30);
    (**ppcVar2)(LAST_SEGMENT, uVar1, (uVar1 >> 0x10), uVar3, puVar10);
    puVar5 = extraout_DX;
    mem_op_1000_179c(globals, 0x24, SEG_1000);
    puVar6 = (puVar5 | uVar3);
    if(puVar6 == 0x0)
    {
        (iVar11 + 0xf6) = 0x0;
    }
    else
    {
        unk_win_ui_op_1020_1418((Struct40 *)str_var1(puVar5, uVar3), param_1, unaff_SS);
        *(iVar11 + 0xf6) = uVar3;
        (iVar11 + 0xf8)  = puVar6;
    }
    (iVar11 + 0xe8) = (iVar11 + 0xf6);
    puVar7          = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, unaff_SS, puVar6, unaff_DI);
    uVar8           = pass1_1018_04b8(puVar7);
    puVar5          = (uVar8 >> 0x10);
    pass1_1010_41d6(*(iVar11 + 0xf2), uVar8, puVar5, unaff_SS, in_AF);
    uVar8   = pass1_1010_451a(*(iVar11 + 0xf2), puVar5, unaff_DI, unaff_SS);
    pBVar4  = (u16 *)uVar8;
    uVar1   = param_1;
    ppcVar2 = (uVar1 + 0x14);
    (**ppcVar2)(SEG_1010, iVar11, uVar12, 0x0, pBVar4, (uVar8 >> 0x10));
    uVar9   = 0x1;
    ppcVar2 = (uVar1 + 0x10);
    (**ppcVar2)();
    pass1_1010_459e((iVar11 + 0xf2));
    ppcVar2 = ((iVar11 + 0xf2) + 0x10);
    (**ppcVar2)(SEG_1010, (iVar11 + 0xf2), param_1, uVar9);
    MoveWindow16(SEG_1010, 0x1, pBVar4[0x3], pBVar4[0x2], pBVar4[0x1], *pBVar4);
    UpdateWindow16((HANDLE16)LAST_SEGMENT);
}
void window_op_1020_2642(Globals *globals, Struct0 *param_1)

{
    Struct664 *in_AX;
    u8        *in_DX;
    u16        uVar1;
    //    i16          iVar2;
    i16 unaff_DI;
    //    u16          uVar3;
    u16 unaff_SS;

    create_window_ex_1008_9760(param_1, SEG_1008);
    //    uVar3 = (param_1 >> 0x10);
    //    iVar2 = param_1;
    get_dc_1018_4db0(*(param_1->field_0xf2), (param_1->field_0x8), SEG_1018);
    mem_op_1000_179c(globals, 0x18, SEG_1000);
    uVar1 = in_DX | in_AX;
    if(uVar1 != 0x0)
    {
        pass1_1020_27b0(in_AX, in_DX, (param_1->field_0x8), unaff_DI, unaff_SS);
        *(Struct664 **)(param_1->field_0xee) = in_AX;
        *(param_1->field_0xf0)               = uVar1;
        return;
    }
    (param_1->field_0xee) = 0x0;
}

BOOL16 pass1_1008_68c6(u16 param_1,u16 param_2,u16 param_3,i32 param_4)

{
    BOOL16 BVar1;

    BVar1 = show_win_1008_96ae(str_var1(param_3,param_2),param_4);
    pass1_1008_6a04(param_1, str_var1(param_3,param_2));
    return BVar1;
}

BOOL16 show_win_1008_96ae(u32 param_1,i16 param_2)

{
    BOOL16 BVar1;
    u16 uVar2;

    uVar2 = (undefined2)(param_1 >> 0x10);
    if (*(int *)((int)param_1 + 8) != 0) {
        BVar1 = ShowWindow16(param_2,*(HWND16 *)((int)param_1 + 8));
        return BVar1;
    }
    return 0;
}

void pass1_1008_3bd6(u32       param_1,
                     Struct57 *param_2,
                     u16       param_4,
                     u32       param_5,
                     u16       param_6,
                     u32       param_7,
                     u32       param_8,
                     Globals  *globals,
                     u16       param_9,
                     u16       param_10,
                     u16       param_11,
                     u16       param_12,
                     u16       param_13,
                     u16       param_14)

{
    mixed_struct_op_1040_8fb8(NULL,
                              param_1,
                              param_2,
                              param_4,
                              (char *)0x0,
                              param_6,
                              (u16)param_7,
                              (u16)(param_7 >> 0x10),
                              (u16)param_8,
                              (u16)(param_8 >> 0x10));
    param_2->field_0x0 = addr_table_1008_3cfc; //0x3cfc;
    param_2->field1_0x2 = SEG_1008;
    param_2->field_0x36 = 0;
    param_2->field21_0x26 = 0;
    pass1_1040_9252(param_2);
    create_window_1040_92dc(globals, param_2);
    mov_update_win_1040_93aa(param_2,param_5);
}

void set_win_text_1008_9664(u32 param_1,u16 param_2,char *param_3)

{
    unk_str_op_1000_3d3e((char *)(param_1 & 0xffff0000 | (ulong)((int)param_1 + 10U)),param_3);
    SetWindowText16(param_1 & 0xffff0000 | (ulong)((int)param_1 + 10U),*(HWND16 *)((int)param_1 + 8));

}

void destroy_win_1008_9698(Struct871 *param_1,u16 param_2)

{
    DestroyWindow16(param_1->hwnd_0x8);
}

StructD *  pass1_1008_3cd6(StructD *param_1,byte param_2)

{
    mix_win_ui_op_1040_911e(param_1);
    if ((param_2 & 1) != 0) {
        fn_ptr_1000_17ce((char *)param_1);
    }
    return param_1;
}

void win_ui_op_1008_3c34(Globals *globals, u32 param_1, u8 param_2, HDC16 hdc_param_3)

{
    u16 uVar1;
    void **ppcVar2;
    HPALETTE16 HVar3;
    int iVar4;
    u16 uVar5;
    u16 uVar6;
    u32 *puStack6;

    uVar5 = (u16)(param_1 >> 0x10);
    iVar4 = (int)param_1;
    if ((*(uint *)(iVar4 + 10) | *(uint *)(iVar4 + 8)) != 0) {
        puStack6 = *(u32 **)(iVar4 + 8);
        if ((*(long *)(iVar4 + 0xc) != 0) && ((param_2 & 1) != 0)) {
            puStack6 = *(u32 **)(iVar4 + 0xc);
        }
        if ((*(long *)(iVar4 + 0x10) != 0) && ((param_2 & 4) != 0)) {
            puStack6 = *(u32 **)(iVar4 + 0x10);
        }
        uVar6 = 0x4230;
        uVar1 = 0x4230 + 0x10;
        HVar3 = palette_op_1008_4e08
          ((HPALETTE16)&hdc_param_3,uVar1,
           (astruct_13 *)str_var1(uVar1,*(undefined2 *)((int)_PTR_LOOP_1050_4230 + 0xe))
             ,(HDC16 *)str_var1(0x1050,&hdc_param_3));
        ppcVar2 = (code **)((int)*puStack6 + 4);
        (**ppcVar2)();
        HVar3 = SelectPalette16(0,HVar3,hdc_param_3);
        DeleteObject16(HVar3);
    }

}