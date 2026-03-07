#include "win_ops_3.h"

#include "address_tables/function_tables.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "op_winapi.h"
#include "op_windef.h"
#include "struct_20.h"
#include "structs/structs_0xx/structs_2x.h"
#include "structs/structs_2xx/structs_26x.h"

void window_op_1018_e6c6(Struct0 *param_1)

{
    Struct660 *in_AX;
    u8          *in_DX;
    u16          uVar1;
    i16          iVar2;
    i16          unaff_DI;
    u16          uVar3;
    u16          unaff_SS;

    create_window_ex_1008_9760(param_1, SEG_1008);
    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    get_dc_1018_4db0(*(iVar2 + 0xf2), (iVar2 + 0x8), SEG_1008);
    mem_op_1000_179c(0x18, in_DX, 0);
    uVar1 = in_DX | in_AX;
    if(uVar1 != 0x0)
    {
        pass1_1018_e834(in_AX, in_DX, (iVar2 + 0x8), unaff_DI, unaff_SS);
        *(Struct660 **)(iVar2 + 0xee) = in_AX;
        *(iVar2 + 0xf0)                 = uVar1;
        return;
    }
    (iVar2 + 0xee) = 0x0;
    return;
}

void pass1_1018_e72a(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    u16         uVar4;

    uVar4  = (param_1 >> 0x10);
    puVar1 = *(param_1 + 0xee);
    u_var2  = *(param_1 + 0xf0);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    destroy_win_1008_628e(param_1, SEG_1008);
    return;
}

void post_win_msg_1018_ea0a(u16 param_1, u16 param_2, i16 param_3, HWND16 param_4)

{
    if(param_3 == 0xed)
    {
        PostMessage16(param_4, 0x0, 0x0, 0x11100c6);
    }
    return;
}

void pass1_1018_ea66(u32 param_1, u16 param_2)

{
    void **ppcVar1;
    u8    *pu_var2;
    i16    iVar3;
    u16    uVar4;
    u16   *puVar5;
    u8     local_6[0x4];

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    if((iVar3 + 0xee) != 0x0)
    {
        ppcVar1 = ((iVar3 + 0xee) + 0x8);
        (**ppcVar1)();
    }
    if((iVar3 + 0xea) == 0x0)
    {
        (iVar3 + 0xea) = 0x1;
        puVar5         = pass1_1008_941a(str_var1(param_2, local_6), 0x1, 0x95);
        pu_var2         = local_6;
        win_1008_5c9e(globals->_PTR_LOOP_1050_02a0,
                      str_var1(param_2, pu_var2), pu_var2, (puVar5 >> 0x10), param_2);
        (iVar3 + 0xec) = pu_var2;
        unk_win_op_1010_7300(*(iVar3 + 0xf6), 0x0, 0x8, 0x0);
    }
    return;
}

void window_op_1018_eada(Struct0 *param_1)

{
    Struct661 *in_AX;
    u8          *in_DX;
    u16          uVar1;
    i16          iVar2;
    u16          uVar3;
    u16          unaff_SS;

    create_window_ex_1008_9760(param_1, SEG_1008);
    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    get_dc_1018_4db0(*(iVar2 + 0xf2), (iVar2 + 0x8), SEG_1008);
    mem_op_1000_179c(0x28, in_DX, 0);
    uVar1 = in_DX | in_AX;
    if(uVar1 != 0x0)
    {
        pass1_1018_ec74(in_AX, in_DX, (iVar2 + 0x8), unaff_SS);
        *(Struct661 **)(iVar2 + 0xee) = in_AX;
        *(iVar2 + 0xf0)                 = uVar1;
        return;
    }
    (iVar2 + 0xee) = 0x0;
    return;
}

void pass1_1018_eb3e(u32 param_1, u16 param_2)

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
    puVar1 = *(iVar6 + 0xee);
    u_var2  = *(iVar6 + 0xf0);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    if((iVar6 + 0xf6) != 0x0)
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
        pass1_1010_1ea6(*(iVar6 + 0xf6), str_var1(uVar5, iVar4), param_2);
    }
    destroy_win_1008_628e(param_1, SEG_1008);
    return;
}

void pass1_1020_02ae(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    pass1_1010_3cd0((iVar4 + 0xe2));
    destroy_win_1008_628e(param_1, SEG_1008);
    puVar1 = *(iVar4 + 0xe6);
    u_var2  = *(iVar4 + 0xe8);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)(SEG_1008, puVar1, u_var2, 0x1);
    }
    (iVar4 + 0xe6) = 0x0;
    pass1_1010_1dda(*(iVar4 + 0xe2));
    (iVar4 + 0xe2) = 0x0;
    return;
}

void win_1020_0316(Struct0 *param_1, u8 *param_2, u16 param_3)

{
    u32   uVar1;
    u16          u_var2;
    u8          *puVar3;
    u8          *puVar4;
    Struct273 *iVar1;
    i16          unaff_DI;
    u16          uVar5;
    u16         *puVar6;

    create_window_ex_1008_9760(param_1, SEG_1008);
    puVar6            = mixed_1010_20ba(globals->u16_1050_0ed0, 0x1, param_3, param_2, unaff_DI);
    puVar3            = (puVar6 >> 0x10);
    uVar5             = (param_1 >> 0x10);
    iVar1             = (Struct273 *)param_1;
    iVar1->field_0xe2 = puVar6;
    iVar1->field_0xe4 = puVar3;
    uVar1             = &iVar1->field_0xe2;
    (uVar1 + 0x16)    = iVar1->field_0xea;
    u_var2             = iVar1->field_0xee;
    uVar1             = &iVar1->field_0xe2;
    *(uVar1 + 0x12)   = u_var2;
    struct_1010_3c52(*&iVar1->field_0xe2, iVar1->field_0xec, param_3);
    mem_op_1000_179c(0x12, puVar3, 0);
    puVar4 = (puVar3 | u_var2);
    if(puVar4 != 0x0)
    {
        pass1_1020_04f6(
          str_var1(puVar3, u_var2), iVar1->field_0x8, puVar4, unaff_DI, param_3);
        iVar1->field_0xe6 = u_var2;
        iVar1->field_0xe8 = puVar4;
        return;
    }
    &iVar1->field_0xe6 = 0x0;
    return;
}

void post_msg_1020_03b2(u32 param_1, HWND16 param_2)

{
    u32 uVar1;

    uVar1 = (param_1 + 0xe2);
    PostMessage16(param_2, 0x0, 0x0, str_var1(0x111, (uVar1 + 0x16)));
    return;
}


void post_msg_1020_03d6(u32 param_1, HWND16 param_2)

{
    u32 uVar1;

    uVar1 = (param_1 + 0xe2);
    PostMessage16(param_2, 0x0, 0x0, str_var1(0x111, (uVar1 + 0x16)));
    return;
}


void post_msg_1020_03fa(u32 param_1, HWND16 param_2)

{
    u32 uVar1;

    uVar1 = (param_1 + 0xe2);
    PostMessage16(param_2, 0x0, 0x0, str_var1(0x111, (uVar1 + 0x16)));
    return;
}


void post_win_msg_1020_061c(u32 param_1, i16 param_2, HWND16 param_3)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    if(param_2 == 0x1)
    {
        (param_1 + 0x6) = 0x0;
        return;
    }
    if(param_2 != 0x2)
    {
        return;
    }
    uVar1 = (param_1 + 0x6);
    PostMessage16(param_3, 0x0, 0x0, str_var1(0x111, (uVar1 + 0x16)));
    return;
}

void pass1_1020_08b6(WNDCLASS16 *param_1, Struct20 *param_2, u16 param_3, u32 param_4)

{
    Struct20 *iVar1;
    u16         uVar1;
    Struct20 *p_var2;

    p_var2                        = unk_draw_op_1008_61b2(param_2, 0x1, param_3, param_4, (u16)param_1);
    uVar1                         = (param_2 >> 0x10);
    iVar1                         = (Struct20 *)param_2;
    &iVar1[0x1].field_0x4         = 0x0;
    (&iVar1[0x1].field_0x4 + 0x2) = 0x0;
    param_2->field_0x0            = addr_table_1020_0b0e;//0xb0e;
    iVar1->field_0x2              = SEG_1020;
    win_1008_5c5c(param_1, 0x0, (p_var2 >> 0x10), globals->_PTR_LOOP_1050_02a0, 0x1d4);
    return;
}


void win_1018_df40(Struct0 *param_1, u16 param_2, u8 *param_3, u16 param_4)

{
    Struct267 *iVar1;
    u16          uVar1;
    u16         *pu_var2;

    create_window_ex_1008_9760(param_1, SEG_1008);
    mem_op_1000_179c(0xa, param_3, 0);
    iVar1 = (Struct267 *) param_1;
    uVar1 = (param_1 >> 0x10);
    if((param_3 | param_2) != 0x0)
    {
        pu_var2            = struct_1018_e100(
          str_var1(param_3, param_2), iVar1->field_0x8, (param_3 | param_2), param_4);
        iVar1->field_0xe2 = pu_var2;
        iVar1->field_0xe4 = (pu_var2 >> 0x10);
        return;
    }
    &iVar1->field_0xe2 = 0x0;
}


void pass1_1018_df92(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;

    destroy_win_1008_628e(param_1, SEG_1008);
    uVar5  = (param_1 >> 0x10);
    iVar4  = param_1;
    puVar1 = *(iVar4 + 0xe2);
    u_var2  = *(iVar4 + 0xe4);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)(SEG_1008, puVar1, u_var2, 0x1);
    }
    (iVar4 + 0xe2) = 0x0;
}

void pass1_1018_e2cc(Struct269 *param_1, u16 param_2)

{
    i16         *pi_var1;
    void **ppcVar2;
    u16          uVar3;
    u32          uVar4;
    u8          *puVar5;
    u8          *puVar6;
    Struct269 *iVar7;
    u16          uVar7;
    u16         *puVar8;
    u32  *puStack10;
    u8           local_6[0x4];

    uVar7 = (param_1 >> 0x10);
    iVar7 = (Struct269 *)param_1;
    if(iVar7->field_0xee != 0x0)
    {
        ppcVar2 = (*iVar7->field_0xee + 0x8);
        (**ppcVar2)();
    }
    if(iVar7->field_0xea == 0x0)
    {
        iVar7->field_0xea = 0x1;
        puVar8            = pass1_1008_941a(str_var1(param_2, local_6), 0x1, 0x7a);
        puVar5            = (puVar8 >> 0x10);
        uVar4             = ZEXT24(local_6);
        win_1008_5c9e(globals->_PTR_LOOP_1050_02a0,
                      str_var1(param_2, local_6), local_6, puVar5, param_2);
        iVar7->field_0xec = uVar4;
        mem_op_1000_179c(0x112, puVar5, 0);
        puVar6 = (puVar5 | uVar4);
        if(puVar6 == 0x0)
        {
            uVar3     = 0x0;
            puStack10 = 0x0;
        }
        else
        {
            pi_var1  = &iVar7->field_0xcc;
            *pi_var1 = *pi_var1 + 0x1;
            struct_1020_3644((uVar4 & 0xffff | ZEXT24(puVar5) << 0x10), iVar7->field_0xcc, param_1, param_2);
            uVar3     = uVar4;
            puStack10 = (uVar4 & 0xffff | ZEXT24(puVar6) << 0x10);
        }
        pass1_1008_6978(param_1, 0x0, puStack10 & 0xffff0000 | uVar3, uVar3, puVar6);
        ppcVar2 = (*puStack10 + 0xc);
        (**ppcVar2)();
    }
    return;
}

void window_op_1018_e384(Struct0 *param_1)

{
    Struct659 *in_AX;
    u8          *in_DX;
    u16          uVar1;
    i16          iVar2;
    i16          unaff_DI;
    u16          uVar3;
    u16          unaff_SS;

    create_window_ex_1008_9760(param_1, SEG_1008);
    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    get_dc_1018_4db0(*(iVar2 + 0xf2), (iVar2 + 0x8), SEG_1008);
    mem_op_1000_179c(0x18, in_DX, 0);
    uVar1 = in_DX | in_AX;
    if(uVar1 != 0x0)
    {
        pass1_1018_e4f2(in_AX, in_DX, (iVar2 + 0x8), unaff_DI, unaff_SS);
        *(Struct659 **)(iVar2 + 0xee) = in_AX;
        *(iVar2 + 0xf0)                 = uVar1;
        return;
    }
    (iVar2 + 0xee) = 0x0;
    return;
}


void pass1_1018_e3e8(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    u16         uVar4;

    uVar4  = (param_1 >> 0x10);
    puVar1 = *(param_1 + 0xee);
    u_var2  = *(param_1 + 0xf0);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    destroy_win_1008_628e(param_1, SEG_1008);
    return;
}

void destroy_window_1018_c518(Struct29 *param_1)

{
    BOOL16      BVar1;
    Struct29 *iVar2;
    u16       uVar3;

    uVar3            = (u16)(param_1 >> 0x10);
    iVar2            = (Struct29 *)param_1;
    param_1          = addr_table_1018_c8bc;//0xc8bc;
    iVar2->field_0x2 = SEG_1018;
    fn_ptr_1000_17ce(&iVar2->field_0x108, SEG_1000);
    if(iVar2->field_0x112 != 0x0)
    {
        BVar1 = IsWindow16(SEG_1000);
        if(BVar1 != 0x0)
        {
            DestroyWindow16((HWND16)LAST_SEGMENT);
            iVar2->field_0x112 = 0x0;
        }
    }
    pass1_1020_022c(param_1);
}

Struct29 *pass1_1018_c896(Struct29 *param_1, u8 param_2)

{
    destroy_window_1018_c518(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}
void unk_destroy_window_op_1018_6bb6(Struct28 *param_1, HWND16 param_2)

{
    BOOL16      BVar1;
    Struct28 *iVar2;
    u16         u_var2;
    HWND16      hwnd;

    u_var2 = (param_1 >> 0x10);
    iVar2 = (Struct28 *)param_1;
    hwnd  = param_2;
    if(iVar2->field_0xea != 0x0)
    {
        hwnd = (HWND16)LAST_SEGMENT;
        PostMessage16(param_2, 0x0, 0x0, str_var1(0x111, iVar2->field_0xea));
    }
    PostMessage16(hwnd, 0x0, 0x0, 0x1110079);
    if(iVar2->field_0xf0 != 0x0)
    {
        BVar1 = IsWindow16((HWND16)LAST_SEGMENT);
        if(BVar1 != 0x0)
        {
            DestroyWindow16((HWND16)LAST_SEGMENT);
            iVar2->field_0xf0 = 0x0;
        }
    }
    return;
}

void win_1018_598c(Struct0 *param_1, u16 param_2, u16 param_3)

{
    u16          uVar1;
    Struct131 *iVar1;
    u16          u_var2;
    u16          unaff_SS;

    create_window_ex_1008_9760(param_1, SEG_1008);
    u_var2 = (param_1 >> 0x10);
    iVar1 = (Struct131 *)param_1;
    get_dc_1018_4db0(iVar1->field_0xf2, iVar1->field_0x8, SEG_1008);
    mem_op_1000_179c(0x2a, param_3, 0);
    uVar1 = param_3 | param_2;
    if(uVar1 != 0x0)
    {
        pass1_1018_5b06((Struct132 *)param_2, param_3, iVar1->field_0x8, unaff_SS);
        iVar1->field_0xee = param_2;
        iVar1->field_0xf0 = uVar1;
        return;
    }
    &iVar1->field_0xee = 0x0;
    return;
}


void window_op_1018_67b6(Struct0 *param_1)

{
    Struct658 *in_AX;
    u8          *in_DX;
    u16          uVar1;
    i16          iVar2;
    i16          unaff_DI;
    u16          uVar3;
    u16          unaff_SS;

    create_window_ex_1008_9760(param_1, SEG_1008);
    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    get_dc_1018_4db0(*(iVar2 + 0xf2), (iVar2 + 0x8), SEG_1008);
    mem_op_1000_179c(0x18, in_DX, 0);
    uVar1 = in_DX | in_AX;
    if(uVar1 != 0x0)
    {
        pass1_1018_6924(in_AX, in_DX, (iVar2 + 0x8), unaff_DI, unaff_SS);
        *(Struct658 **)(iVar2 + 0xee) = in_AX;
        *(iVar2 + 0xf0)                 = uVar1;
        return;
    }
    (iVar2 + 0xee) = 0x0;
    return;
}


void pass1_1018_681a(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    u16         uVar4;

    uVar4  = (param_1 >> 0x10);
    puVar1 = *(param_1 + 0xee);
    u_var2  = *(param_1 + 0xf0);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    destroy_win_1008_628e(param_1, SEG_1008);
    return;
}

void win_op_1018_294a(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5, LPCSTR in_string_6)

{
    if(((param_1 + 0x18) != 0x0) && (param_4 == 0x280))
    {
        (param_1 + 0x18) = 0x0;
    }
    create_dc_1018_4e04((Struct8 **)str_var1(param_2, param_1), param_3, param_4, param_4, in_string_6, param_5);
    return;
}

u32 set_err_mode_1010_8b14(u32 param_1, u32 param_2, u16 param_3)

{
    u16  uVar1;
    u16  u_var2;
    long lVar3;
    u8   local_a[0x8];

    pass1_1008_5784(str_var1(param_3, local_a), *(param_1 + 0xe84));
    SetErrorMode16(SEG_1008);
    do
    {
        lVar3 = pass1_1008_5b12(local_a, param_3);
        if(lVar3 == 0x0)
        {
            SetErrorMode16(SEG_1008);
            return param_2;
        }
        uVar1 = param_1 + 0xa82;
        unk_str_op_1000_3d3e((param_1 & 0xffff0000 | uVar1), (lVar3 + 0x4));
        pass1_1000_3cea(param_1 & 0xffff0000 | uVar1, param_2);
        u_var2 = dos_int21_find_file_1000_51aa(&stack0xfffe);
    } while(u_var2 != 0x0);
    SetErrorMode16(SEG_1000);
    return param_1 & 0xffff0000 | uVar1;
}

void send_msg_1010_7c42(u32 param_1, u16 param_2)

{
    i16  iVar1;
    u16  u_var2;
    long lVar3;
    u8   local_a[0x8];

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((*(iVar1 + 0x1e) | *(iVar1 + 0x1c)) != 0x0)
    {
        pass1_1008_5784(str_var1(param_2, local_a), *(iVar1 + 0x1c));
        while(true)
        {
            lVar3 = pass1_1008_5b12(local_a, param_2);
            if(lVar3 == 0x0)
                break;
            SendMessage16(SEG_1008, 0x0, 0x0, 0x11100eb);
        }
    }
    return;
}

void send_msg_1010_7c9e(u32 param_1, i16 param_2, u16 param_3)

{
    BOOL16 BVar1;
    i16    iVar2;
    u16    uVar3;
    long   lVar4;
    u32    uVar5;
    u8     local_a[0x8];

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(((*(iVar2 + 0x1e) | *(iVar2 + 0x1c)) != 0x0) && (param_2 != 0x0))
    {
        pass1_1008_5784(str_var1(param_3, local_a), *(iVar2 + 0x1c));
        while(true)
        {
            lVar4 = pass1_1008_5b12(local_a, param_3);
            uVar3 = (lVar4 >> 0x10);
            if(lVar4 == 0x0)
                break;
            if((lVar4 + 0x4) != 0x0)
            {
                uVar5 = struct_op_1030_73a8(*(lVar4 + 0x4));
                BVar1 = pass1_1008_c6ae(globals->dat_1050_06e0, (uVar5 + 0xc), param_2);
                if(BVar1 != 0x0)
                {
                    SendMessage16(SEG_1008, 0x0, 0x0, 0x11100eb);
                }
            }
        }
    }
    return;
}

void pass1_1010_71b0(i16 param_1, u16 param_2)

{
    u32 uVar1;

    uVar1 = *(param_1 + 0x6);
    send_msg_1010_7c42(uVar1 & 0xffff0000 | (uVar1 - 0xa), param_2);
    return;
}


void pass1_1010_71c2(u16 param_1, u16 param_2, i16 param_3, u16 param_4)

{
    u32        uVar1;
    u32 u_var2;
    i16        iVar3;
    u16        uVar4;

    if(param_1 == 0x13)
    {
        u_var2 = (param_3 + 0x6);
        u_var2 = (u_var2 + 0x18);
        uVar1 = *(param_3 + 0x6);
        destroy_window_1010_7b26(uVar1 & 0xffff0000 | (uVar1 - 0xa), (u_var2 + 0x28), param_4, param_2);
        return;
    }
    if(param_1 < 0x14)
    {
        if(param_1 == '\x01')
        {
            u_var2          = (param_3 + 0x6);
            uVar4          = (u_var2 >> 0x10);
            iVar3          = u_var2;
            (iVar3 + 0xa)  = 0x0;
            (iVar3 + 0x18) = 0x0;
            return;
        }
        if(param_1 == '\x05')
        {
            uVar1 = *(param_3 + 0x6);
            send_msg_1010_7c42(uVar1 & 0xffff0000 | (uVar1 - 0xa), param_4);
            return;
        }
    }
    return;
}

void unk_win_op_1010_7300(u32 param_1, u32 param_2, u16 param_3, u32 param_4)

{
    u32  uVar1;
    void **ppcVar2;
    char        cVar3;
    u16         uVar4;
    u8         *in_DX;
    u8         *puVar5;
    u8         *extraout_DX;
    u8         *puVar6;
    u8         *extraout_DX_00;
    u8         *puVar7;
    u8         *puVar8;
    i16         unaff_DI;
    u16         uVar9;
    HWND16      HVar10;
    HWND16      HVar11;
    u16         unaff_SS;
    u32         uVar12;
    Struct57 *paVar13;
    u16        *puVar14;
    LRESULT     LVar15;
    u16         uVar16;
    u8          uVar17;
    u16         uVar18;
    u16        *puStack20;
    u16        *puStack14;
    u32 *puStack10;
    u32  u_stack6;

    if(param_3 == 0x0)
    {
        return;
    }
    u_stack6 = param_2;
    puVar8  = param_1;
    uVar9   = (param_1 >> 0x10);
    if(param_2 == 0x0)
    {
        uVar1 = (puVar8 + 0x14);
        pass1_1010_ad64(uVar1, str_var1(param_3, (uVar1 >> 0x10)), param_4, 0x0, in_DX);
        u_stack6 = param_2 & 0xffff | ZEXT24(in_DX) << 0x10;
    }
    switch(param_3)
    {
    case 0x1:
    case 0x4:
    case 0x6:
    case 0x7:
    case 0x8:
    case 0x9:
    case 0xd:
    case 0xe:
    case 0x14:
    case 0x18:
        break;
    default:
        if((u_stack6 | u_stack6) == 0x0)
        {
            return;
        }
    }
    pass1_1010_1f62(unaff_SS, param_1, 0xb);
    if((puVar8 + 0xe) == 0x0)
    {
        return;
    }
    puVar6 = puVar8;
    switch(param_3 - 0x1)
    {
    case 0x0:
        mem_op_1000_179c(0x94, in_DX, 0);
        puVar5 = (in_DX | puVar6);
        if(puVar5 == 0x0)
        {
        LAB_1010_73fe:
            HVar10 = SEG_1000;
            puVar6 = 0x0;
            puVar5 = 0x0;
        }
        else
        {
            HVar10 = (HWND16)SEG_1040;
            pass1_1040_44d2(CONCAT13((in_DX >> 0x8), CONCAT12(in_DX, puVar6)), param_4, (puVar8 + 0xe), puVar6, puVar5);
        }
        break;
    default:
        mem_op_1000_179c(0x94, in_DX, 0);
        puVar5 = (in_DX | puVar6);
        if(puVar5 == 0x0)
            goto LAB_1010_73fe;
        HVar10 = (HWND16)SEG_1040;
        pass1_1040_b040(CONCAT13((in_DX >> 0x8), CONCAT12(in_DX, puVar6)), u_stack6, (puVar8 + 0xe));
        break;
    case 0x3:
        mem_op_1000_179c(0x9e, in_DX, 0);
        puVar5 = (in_DX | puVar6);
        if(puVar5 == 0x0)
            goto LAB_1010_73fe;
        HVar10 = (HWND16)SEG_1040;
        pass1_1040_5626(CONCAT13((in_DX >> 0x8), CONCAT12(in_DX, puVar6)), param_4, (puVar8 + 0xe), puVar5);
        break;
    case 0x4:
        mem_op_1000_179c(0x94, in_DX, 0);
        if((in_DX | puVar6) == 0x0)
            goto LAB_1010_73fe;
        HVar10  = (HWND16)SEG_1040;
        puVar14 = pass1_1040_8e58(puVar6, in_DX, u_stack6, str_var1((puVar8 + 0xe), u_stack6));
        puVar5  = (puVar14 >> 0x10);
        puVar6  = puVar14;
        break;
    case 0x5:
    case 0x6:
        mem_op_1000_179c(0x98, in_DX, 0);
        puVar5 = (in_DX | puVar6);
        if(puVar5 == 0x0)
            goto LAB_1010_73fe;
        HVar10 = (HWND16)SEG_1040;
        pass1_1040_48a0(
          str_var1(in_DX, puVar6), param_3, param_4, (puVar8 + 0xe), puVar5, unaff_SS);
        break;
    case 0x7:
        mem_op_1000_179c(0x9c, in_DX, 0);
        puVar5 = (in_DX | puVar6);
        if(puVar5 == 0x0)
            goto LAB_1010_73fe;
        HVar10 = (HWND16)SEG_1038;
        pass1_1038_9144(str_var1(in_DX, puVar6), (puVar8 + 0xe), unaff_SS);
        break;
    case 0x8:
        mem_op_1000_179c(0xb8, in_DX, 0);
        puVar5 = (in_DX | puVar6);
        if(puVar5 == 0x0)
            goto LAB_1010_73fe;
        HVar10 = (HWND16)SEG_1040;
        pass1_1040_b7ee(CONCAT13((in_DX >> 0x8), CONCAT12(in_DX, puVar6)), u_stack6, (puVar8 + 0xe));
        break;
    case 0x9:
    case 0xa:
        mem_op_1000_179c(0x94, in_DX, 0);
        if((in_DX | puVar6) == 0x0)
            goto LAB_1010_73fe;
        HVar10  = (HWND16)SEG_1038;
        puVar14 = pass1_1038_9a1e(puVar6, in_DX, u_stack6, str_var1((puVar8 + 0xe), u_stack6));
        puVar5  = (puVar14 >> 0x10);
        puVar6  = puVar14;
        break;
    case 0xb:
        mem_op_1000_179c(0x12a, in_DX, 0);
        if((in_DX | puVar6) == 0x0)
            goto LAB_1010_73fe;
        HVar10 = (HWND16)SEG_1038;
        uVar12 = pass1_1038_9b72(puVar6, in_DX, u_stack6, str_var1((puVar8 + 0xe), u_stack6));
        puVar5 = (uVar12 >> 0x10);
        puVar6 = uVar12;
        break;
    case 0xc:
        mem_op_1000_179c(0x9c, in_DX, 0);
        puVar5 = (in_DX | puVar6);
        if(puVar5 == 0x0)
            goto LAB_1010_73fe;
        HVar10 = (HWND16)SEG_1040;
        pass1_1040_6826(str_var1(in_DX, puVar6), (puVar8 + 0xe));
        break;
    case 0xd:
        mem_op_1000_179c(0x9c, in_DX, 0);
        puVar5 = (in_DX | puVar6);
        if(puVar5 == 0x0)
            goto LAB_1010_73fe;
        HVar10 = (HWND16)SEG_1040;
        pass1_1040_6fb6(str_var1(in_DX, puVar6), (puVar8 + 0xe));
        break;
    case 0x12:
        mem_op_1000_179c(0x94, in_DX, 0);
        puVar5 = (in_DX | puVar6);
        if(puVar5 == 0x0)
            goto LAB_1010_73fe;
        HVar10 = (HWND16)SEG_1040;
        make_proc_inst_1040_a234(puVar6, in_DX, u_stack6, str_var1((puVar8 + 0xe), u_stack6), SEG_1040);
        break;
    case 0x13:
        mem_op_1000_179c(0xb8, in_DX, 0);
        puVar5 = (in_DX | puVar6);
        if(puVar5 == 0x0)
            goto LAB_1010_73fe;
        HVar10 = (HWND16)SEG_1040;
        pass1_1040_4e94(CONCAT13((in_DX >> 0x8), CONCAT12(in_DX, puVar6)), u_stack6, (puVar8 + 0xe));
        break;
    case 0x14:
        mem_op_1000_179c(0x9a, in_DX, 0);
        puVar5 = (in_DX | puVar6);
        if(puVar5 == 0x0)
            goto LAB_1010_73fe;
        HVar10 = (HWND16)SEG_1040;
        pass1_1040_0e1c(str_var1(in_DX, puVar6), 0x1, u_stack6, (puVar8 + 0xe), puVar5, unaff_DI, unaff_SS);
        break;
    case 0x15:
        mem_op_1000_179c(0x9c, in_DX, 0);
        if((in_DX | puVar6) == 0x0)
            goto LAB_1010_73fe;
        HVar10  = (HWND16)SEG_1040;
        paVar13 = pas1_1040_29c2(CONCAT13((in_DX >> 0x8), CONCAT12(in_DX, puVar6)), u_stack6, (puVar8 + 0xe), puVar6, in_DX | puVar6);
        puVar5  = (paVar13 >> 0x10);
        puVar6  = paVar13;
        break;
    case 0x16:
        mem_op_1000_179c(0x12a, in_DX, 0);
        if((in_DX | puVar6) == 0x0)
            goto LAB_1010_73fe;
        HVar10  = (HWND16)SEG_1038;
        puVar14 = pass1_1038_adde(puVar6, in_DX, u_stack6, str_var1((puVar8 + 0xe), u_stack6));
        puVar5  = (puVar14 >> 0x10);
        puVar6  = puVar14;
        break;
    case 0x17:
        mem_op_1000_179c(0xec, in_DX, 0);
        puVar5 = (in_DX | puVar6);
        if(puVar5 == 0x0)
            goto LAB_1010_73fe;
        HVar10 = (HWND16)SEG_1040;
        pass1_1040_a640(CONCAT13((in_DX >> 0x8), CONCAT12(in_DX, puVar6)), param_4, (puVar8 + 0xe));
    }
    puStack10 = str_var1(puVar5, puVar6);
    ppcVar2   = (*puStack10 + 0x8);
    (**ppcVar2)(HVar10, puVar6, puVar5);
    puVar7 = extraout_DX;
    HVar11 = HVar10;
    if(param_3 != 0x17)
    {
        if(0x17 < param_3)
            goto LAB_1010_7710;
        cVar3 = param_3;
        if((cVar3 != '\x05') && (((cVar3 + -0x5) < '\x05' || ('\x02' < (cVar3 + -0xa)))))
            goto LAB_1010_7710;
    }
    if((u_stack6 + 0x16) != 0x0)
    {
        HVar11 = (HWND16)LAST_SEGMENT;
        LVar15 = SendMessage16(HVar10, 0x0, 0x0, 0x11100f8);
        puVar7 = (LVar15 >> 0x10);
    }
LAB_1010_7710:
    HVar10 = HVar11;
    if(puStack10 != 0x0)
    {
        uVar18 = (puVar6 + 0x6);
        uVar17 = HVar11;
        HVar10 = (HWND16)LAST_SEGMENT;
        uVar4  = IsWindow16(HVar11);
        if(uVar4 != 0x0)
        {
            puVar6 = puVar7;
            if((puVar8 + 0x1c) == 0x0)
            {
                uVar17 = 0xc;
                mem_op_1000_179c(0xc, puVar7, 0);
                puVar6 = (puVar7 | uVar4);
                if(puVar6 == 0x0)
                {
                    (puVar8 + 0x1c) = 0x0;
                }
                else
                {
                    set_struct_1008_574a(str_var1(puVar7, uVar4));
                    *(puVar8 + 0x1c) = uVar4;
                    (puVar8 + 0x1e)  = extraout_DX_00;
                    puVar6           = extraout_DX_00;
                }
            }
            uVar16 = 0xc;
            mem_op_1000_179c(0xc, puVar6, 0);
            puStack14 = str_var1(puVar6, uVar4);
            if((puVar6 | uVar4) == 0x0)
            {
                puStack20 = 0x0;
            }
            else
            {
                *puStack14     = addr_table_1008_380a[36]; // 0x389a
                (uVar4 + 0x2)  = SEG_1008;
                *(uVar4 + 0x4) = param_4;
                (uVar4 + 0x8)  = puStack10;
                *puStack14     = addr_table_1010_7e24;//0x7e24;
                (uVar4 + 0x2)  = SEG_1010;
                puStack20      = puStack14;
            }
            ppcVar2 = (**(u32 **)(puVar8 + 0x1c) + 0x4);
            (**ppcVar2)(SEG_1000, (puVar8 + 0x1c), puStack20, (puStack20 >> 0x10), uVar16, uVar17, uVar18);
            return;
        }
    }
    if((puVar5 | puVar6) != 0x0)
    {
        ppcVar2 = *puStack10;
        (**ppcVar2)(HVar10, puVar6, puVar5, 0x1);
    }
    return;
}

void free_rsrc_1010_4b3e(u16 *param_1, HGLOBAL16 param_2)

{
    i16        *pi_var1;
    u32 *pu_var2;
    u16         uVar3;
    void **ppcVar4;
    u32 *puVar5;
    u32  uVar6;
    BOOL16      BVar7;
    i16 iVar8;
    i16 iVar9;
    u16 uVar10;
    u16 uVar11;
    HGLOBAL16 HVar12;
    u16 unaff_SS;
    i16 iStack4;

    uVar10 = (param_1 >> 0x10);
    iVar8 = param_1;
    param_1->field_0x0 = addr_table_1010_502a;//s_SCForceMorale__s_for_colony__08l_1050_5024 + 0x6;
    (iVar8 + 0x2) = SEG_1010;
    HVar12 = param_2;
    if ((iVar8 + 0x2a) != 0x0) {
        HVar12 = (HGLOBAL16) LAST_SEGMENT;
        BVar7 = GlobalUnlock16(param_2);
        if (BVar7 == 0x0) {
            HVar12 = (HGLOBAL16) LAST_SEGMENT;
            FreeResource16((HGLOBAL16) LAST_SEGMENT);
        }
    }
    (iVar8 + 0x2a) = 0x0;
    if(**(long **)(iVar8 + 0x12) != 0x0)
    {
        iStack4 = 0x0;
        while(true)
        {
            puVar5 = (iVar8 + 0x12);
            pi_var1 = (puVar5 + 0x8);
            if(*pi_var1 == iStack4 || *pi_var1 < iStack4)
                break;
            uVar11 = (*puVar5 >> 0x10);
            iVar9  = *puVar5;
            pu_var2 = *(iVar9 + iStack4 * 0x4);
            uVar3  = *(iVar9 + iStack4 * 0x4 + 0x2);
            if((uVar3 | pu_var2) != 0x0)
            {
                ppcVar4 = *pu_var2;
                (**ppcVar4)(HVar12, pu_var2, uVar3, 0x1);
            }
            iStack4 = iStack4 + 0x1;
        }
    }
    uVar6 = (iVar8 + 0x12);
    fn_ptr_1000_17ce((uVar6 + 0x4), SEG_1000);
    fn_ptr_1000_17ce((iVar8 + 0x12), SEG_1000);
    pu_var2 = *(iVar8 + 0x16);
    uVar3  = *(iVar8 + 0x18);
    if((uVar3 | pu_var2) != 0x0)
    {
        ppcVar4 = *pu_var2;
        (**ppcVar4)(SEG_1000, pu_var2, uVar3, 0x1);
    }
    fn_ptr_1000_17ce((iVar8 + 0x1a), SEG_1000);
    pass1_1010_1d80(param_1, unaff_SS);
    return;
}

void unk_destroy_win_op_1010_2fa0(u32 param_1, HWND16 param_2)

{
    i16       *pi_var1;
    u32 u_var2;
    i16        iVar3;
    u16        uVar4;
    HWND16     HVar5;
    i16        iStack4;

    uVar4          = (param_1 >> 0x10);
    iVar3          = param_1;
    (iVar3 + 0x28) = 0x0;
    iStack4        = 0x0;
    while(true)
    {
        pi_var1 = (iVar3 + 0x16);
        if(*pi_var1 == iStack4 || *pi_var1 < iStack4)
            break;
        DestroyWindow16(param_2);
        iStack4 = iStack4 + 0x1;
        param_2 = (HWND16)LAST_SEGMENT;
    }
    (iVar3 + 0x16) = 0x0;
    if((*(iVar3 + 0x54) | *(iVar3 + 0x52)) != 0x0)
    {
        iStack4 = 0x0;
        do
        {
            u_var2 = (iVar3 + 0x52);
            HVar5 = param_2;
            if((u_var2 + iStack4 * 0x4) != 0x0)
            {
                HVar5 = (HWND16)LAST_SEGMENT;
                DestroyWindow16(param_2);
                u_var2                   = (iVar3 + 0x52);
                (u_var2 + iStack4 * 0x4) = 0x0;
            }
            iStack4 = iStack4 + 0x1;
            param_2 = HVar5;
        } while(iStack4 < 0xa);
        fn_ptr_1000_17ce((iVar3 + 0x52), SEG_1000);
        (iVar3 + 0x52) = 0x0;
    }
    return;
}

void unk_destroy_win_op_1010_305a(Struct27 *param_1, i16 param_2, Struct65 *param_3, u16 param_4)

{
    i16        *pi_var1;
    u32         u_var2;
    long        lVar3;
    bool        bVar4;
    u16         uVar5;
    Struct27 *iVar4;
    i16         iVar6;
    Struct27 *uVar7;
    u16         uVar8;
    HWND16      hwnd;
    HWND16      hwnd_00;
    u16         unaff_SS;
    i16         iStack10;
    i16         iStack8;
    i16         iStack6;

    hwnd              = (HWND16)SEG_1040;
    uVar5             = pass1_1040_c60e(param_3);
    uVar7             = (Struct27 *)(param_1 >> 0x10);
    iVar4             = (Struct27 *)param_1;
    iVar4->field_0x12 = uVar5;
    iVar4->field_0x14 = 0x0;
    iStack6           = 0x0;
    bVar4             = false;
    iVar4->field_0x28 = 0x0;
    iStack8           = 0x0;
    do
    {
        pi_var1 = &iVar4->field_0x16;
        if(*pi_var1 == iStack8 || *pi_var1 < iStack8)
        {
        LAB_1010_30ad:
            iVar6 = iStack6;
            if(bVar4)
            {
                while(iStack8 = iVar6 + 0x1, pi_var1 = &iVar4->field_0x16, *pi_var1 != iStack8 && iStack8 <= *pi_var1)
                {
                    DestroyWindow16(hwnd);
                    (&iVar4->field_0x2e)[iVar6] = 0x0;
                    hwnd                        = (HWND16)LAST_SEGMENT;
                    iVar6                       = iStack8;
                }
                iVar4->field_0x16 = iStack6 + 0x1;
                pass1_1010_1f62(unaff_SS, param_1, 0x9);
            }
            else
            {
                iVar6                             = iVar4->field_0x16;
                (&iVar4->field_0x2a)[iVar6 * 0x2] = (u16)param_3;
                (&iVar4->field_0x2c)[iVar6 * 0x2] = (u16)(param_3 >> 0x10);
                iStack10                          = 0xa;
                pi_var1                            = &iVar4->field_0x16;
                *pi_var1                           = *pi_var1 + 0x1;
                if(0x1 < iVar4->field_0x16)
                {
                    u_var2    = (&iVar4->field_0x22)[iVar4->field_0x16];
                    iVar6    = u_var2;
                    uVar8    = (u_var2 >> 0x10);
                    iStack10 = (iVar6 + 0x20) + (iVar6 + 0x24) + 0x8;
                }
                hwnd = (HWND16)SEG_1040;
                mov_update_win_1040_93aa(param_3, iStack10, iVar4->field_0x1a_addr_offset, SEG_1040);
            }
            if(!bVar4)
            {
                pass1_1010_1f62(unaff_SS, param_1, 0xa);
            }
            if(param_2 == 0x0)
            {
                if(iVar4->field_0x52 != 0x0)
                {
                    iStack8 = 0x0;
                    hwnd_00 = hwnd;
                    do
                    {
                        lVar3 = iVar4->field_0x52;
                        uVar8 = (lVar3 >> 0x10);
                        iVar6 = lVar3;
                        hwnd  = hwnd_00;
                        if(((iVar6 + iStack8 * 0x4) != 0x0) && (*(Struct65 **)(iVar6 + iStack8 * 0x4) != param_3))
                        {
                            hwnd = (HWND16)LAST_SEGMENT;
                            DestroyWindow16(hwnd_00);
                        }
                        lVar3                   = iVar4->field_0x52;
                        (lVar3 + iStack8 * 0x4) = 0x0;
                        iStack8                 = iStack8 + 0x1;
                        hwnd_00                 = hwnd;
                    } while(iStack8 < 0xa);
                }
                pass1_1010_32da(param_1, param_3, hwnd, unaff_SS);
                pass1_1010_1f62(unaff_SS, param_1, 0x8);
            }
            return;
        }
        if(*(Struct65 **)(&iVar4->field_0x2a + iStack8 * 0x2) == param_3)
        {
            bVar4   = true;
            iStack6 = iStack8;
            goto LAB_1010_30ad;
        }
        iStack8 = iStack8 + 0x1;
    } while(true);
}

void pass1_1010_1656(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5, u8 *param_6, i16 param_7, u16 param_8)

{
    u32 uVar1;
    u16        u_var2;
    u16        uVar3;
    i16        iVar4;
    u16        uVar5;
    u16       *puVar6;
    u32        uVar7;

    unk_destroy_win_op_1010_305a((Struct27 *)str_var1(param_2, param_1), param_3, param_4, param_5);
    if((param_1 + 0x16) == 0x3)
    {
        puVar6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x32, param_8, param_6, param_7);
        uVar1  = (param_1 + 0x32);
        uVar1  = (uVar1 + 0x42);
        uVar5  = (uVar1 >> 0x10);
        iVar4  = uVar1;
        uVar1  = (iVar4 + 0x16);
        uVar7  = struct_op_1030_73a8(*(uVar1 + 0x4));
        u_var2  = pass1_1010_7818(puVar6, uVar7);
        uVar1  = (iVar4 + 0x16);
        uVar3  = u_var2;
        ui_op_1010_79aa(puVar6, 0x0, (uVar1 + 0x4), param_8);
        if(uVar3 == 0x0)
        {
            uVar1 = (iVar4 + 0x16);
            unk_win_op_1010_7300(puVar6, 0x0, u_var2, *(uVar1 + 0x4));
        }
    }
    return;
}

void set_window_placement_1010_0070(u32 param_1, i16 param_2, u16 param_3, HWND16 param_4, u16 param_5)

{
    void **ppcVar1;
    u16         u_var2;
    u32 *puVar3;
    long        lVar4;
    u8          local_18[0x6];
    u16       IStack18;
    i16         iStack16;
    u16       IStack14;
    u16       IStack12;
    u16       IStack10;
    u16       IStack8;
    u16         u_stack6;
    u16         uStack4;

    local_18 = 0x16;
    local_18._2_4_ = 0x0;
    IStack18       = 0x0;
    iStack16       = 0x0;
    IStack14       = 0x0;
    IStack12       = 0x0;
    IStack10       = 0x0;
    IStack8        = 0x0;
    u_stack6        = 0x0;
    uStack4        = 0x0;
    GetWindowPlacement16(param_4, (WINDOWPLACEMENT16 *)local_18);
    if((iStack16 == -0x1) || (param_2 != 0x0))
    {
        local_18._2_4_ = 0x50001;
        lVar4          = GetWindowLong16((HWND16)LAST_SEGMENT, 0x0);
        u_var2          = (lVar4 >> 0x10);
        puVar3         = (lVar4 + 0xe0);
        ppcVar1        = (*puVar3 + 0x38);
        (**ppcVar1)(LAST_SEGMENT, puVar3, (lVar4 + 0xe2), param_3);
        pass1_1010_01f8(param_1, str_var1(param_5, local_18), puVar3);
        SetWindowPlacement16((HWND16)LAST_SEGMENT, (WINDOWPLACEMENT16 *)local_18);
    }
    return;
}


void set_win_placement_1010_010e(u16 param_1, u16 param_2, u16 param_3, HWND16 param_4)

{
    void **ppcVar1;
    i16               iVar2;
    i16              *piVar3;
    u16               uVar4;
    u32       *puVar5;
    u16               extraout_DX;
    long              lVar6;
    WINDOWPLACEMENT16 local_18;
    i16               iStack6;
    i16               iStack4;

    local_18.length               = 0x16;
    local_18.flags                = 0x0;
    local_18.show_cmd             = 0x0;
    local_18.pt_min_position.x    = 0x0;
    local_18.pt_min_position.y    = 0x0;
    local_18.pt_max_position.x    = 0x0;
    local_18.pt_max_position.y    = 0x0;
    local_18.rc_normal_position.x = 0x0;
    local_18.rc_normal_position.y = 0x0;
    iStack6                       = 0x0;
    iStack4                       = 0x0;
    GetWindowPlacement16(param_4, &local_18);
    if(local_18.rc_normal_position.x == -0x1)
    {
        lVar6   = GetWindowLong16((HWND16)LAST_SEGMENT, 0x0);
        uVar4   = (lVar6 >> 0x10);
        puVar5  = (lVar6 + 0xe0);
        ppcVar1 = (*puVar5 + 0x1c);
        (**ppcVar1)(LAST_SEGMENT, puVar5, (lVar6 + 0xe2), param_3);
        iVar2                         = puVar5;
        piVar3                        = (puVar5 & 0xffff | extraout_DX << 0x10);
        local_18.show_cmd             = 0x9;
        local_18.rc_normal_position.x = *piVar3;
        local_18.rc_normal_position.y = (iVar2 + 0x2);
        iStack6                       = (iVar2 + 0x4) + *piVar3;
        iStack4                       = (iVar2 + 0x2) + (iVar2 + 0x6);
        SetWindowPlacement16((HWND16)LAST_SEGMENT, &local_18);
    }
    return;
}


void enum_child_windows_1010_01be(LPVOID param_1)

{
    LPVOID pvVar1;

    if(globals->PTR_LOOP_1050_0010 == 0x0)
    {
        pvVar1 = MakeProcInstance16(param_1, globals->hinst_1050_038c);
        EnumChildWindows1((HWND16)LAST_SEGMENT, 0x0, ZEXT24(pvVar1) << 0x10);
        FreeProcInstance16(LAST_SEGMENT);
    }
    return;
}

void pass1_1008_aa28(u32 param_1, u16 param_2, WNDCLASS16 *param_3)

{
    void **ppcVar1;
    u32  u_var2;
    u16         extraout_DX;
    i16         iVar3;
    u16         uVar4;
    u32 *pu_stack6;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    if((iVar3 + 0x414) != 0x0)
    {
        u_var2 = (iVar3 + 0x410);
        if((u_var2 + 0x8) == 0x0)
        {
            (iVar3 + 0x414) = 0x0;
            return;
        }
        ppcVar1 = ((iVar3 + 0x410) + 0x10);
        (**ppcVar1)();
        pu_stack6 = str_var1(extraout_DX, param_2);
        if((extraout_DX | param_2) != 0x0)
        {
            win_1008_5c5c(param_3, param_2, extraout_DX | param_2, globals->_PTR_LOOP_1050_02a0, (param_2 + 0x4));
            if(pu_stack6 != 0x0)
            {
                ppcVar1 = *pu_stack6;
                (**ppcVar1)();
            }
            return;
        }
    }
    return;
}
WPARAM16 main_win_msg_loop_1008_9498(Globals *globals, u16 u16_arg1, u16 u16_arg2)

{
    BOOL16 b_var1 = 0;
    u16    result    = 0;
    MSG16  local_msg = {};

LAB_1008_949c:
    // Retrieves a message from the calling thread's message queue. the function dispatches the incoming sent messages
    // until a posted message is available for retrieval
    // MSG* msg: pointer to a message structs that receives the message.
    // HWND hwnd: handle to the window whose messages are to be retrieved. if null, retrieves messages for any window
    // belonging to the current thread, and any messages on the current thread's message queue whose hwnd value is
    // NULL. Will process both window and thread messages.
    // UINT first: the value of the lowest message value to be retrieved, e.g. WM_KEYFIRST (0x0100) for the first
    // keyhboard
    // message, oir 0x0200 for the first mouse message. If zero, retrieves all available messages.
    // UINT last: the value of the highest message value to be retrieved, e.g. WM_KEYLAST or WM_MOUSELAST. If set to
    // zero,
    // returns all available messages.
    // returns BOOL; if the function receives a message other than WM_QUIT the return value is non-zero; if the
    // function receives the WM_QUIT message, the return value is zero. If there is an error the function WILL return
    // -1.
    //
    b_var1 = GetMessage16(&local_msg, 0x0, 0x0, 0x0);
    // WM_QUIT received
    if(b_var1 == 0x0)
    {
        // additional message information to go with WM_QUIT
        return local_msg.wParam;
    }
    if((globals->_PTR_LOOP_1050_5bc8 + 0x8) != 0x0)
    {
        goto LAB_1008_94cd;
    }
    goto LAB_1008_94dc;
LAB_1008_94cd:
    local_msg.hwnd = LAST_SEGMENT;
    // Window handle passed into function, used to determine if message received from get message was intended for the
    // window.
    b_var1   = IsDialogMessage16((HWND16)LAST_SEGMENT, &local_msg);
    if(b_var1 == 0x0) // is the message meant for this weindow? and was the message processed?
    {
LAB_1008_94dc:
        if(globals->PTR_LOOP_1050_0398 != 0x0)
        {
            local_msg.hwnd = LAST_SEGMENT;
            // processes accelerator keys for menu commands, sends the WM_COMMAND or WM_SYSCOMMAND message directly to the specified window procedure.
            result = TranslateAccelerator16((HWND16)LAST_SEGMENT, (HACCEL16)u16_arg2, &local_msg);
            if(result != 0x0)
                goto LAB_1008_949c;
        }
        // translates virtual-key messages into character messages. character messages are posted to the calling threads message queue to be read the next time the thread calls the getmessage or peekmessage function
        b_var1 = TranslateMessage16(&local_msg);
        u16_arg1 = LAST_SEGMENT;
        // dispatches a emssage to a window procedure;
        LRESULT dispatch_result = DispatchMessage16(&local_msg);
    }
    goto LAB_1008_949c;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void unk_win_msg_op_1008_9510(i16 *param_1, MSG16 *param_2, MSG16 *param_3)

{
    BOOL16 has_message;
    u16  IVar1;
    MSG16  local_14;

LAB_1008_9578:
    if(*param_1 != 0x0)
    {
        has_message = GetMessage16(param_2, 0x0, 0x0, 0x0);
        if(has_message != 0x0)
        {
            if((globals->_PTR_LOOP_1050_5bc8 + 0x8) != 0x0)
                goto code_rSEG_10089538;
            goto LAB_1008_9547;
        }
    }
    return;
code_rSEG_10089538:
    param_2     = LAST_SEGMENT;
    has_message = IsDialogMessage16((HWND16)LAST_SEGMENT, &local_14);
    if(has_message == 0x0)
    {
    LAB_1008_9547:
        if(globals->PTR_LOOP_1050_0398 != 0x0)
        {
            param_2 = LAST_SEGMENT;
            IVar1   = TranslateAccelerator16((HWND16)LAST_SEGMENT, (HACCEL16)&local_14, param_3);
            if(IVar1 != 0x0)
                goto LAB_1008_9578;
        }
        TranslateMessage16(LAST_SEGMENT);
        param_2 = LAST_SEGMENT;
        DispatchMessage16(LAST_SEGMENT);
    }
    goto LAB_1008_9578;
}

void send_msg_1008_9640(u32 param_1, u16 param_2, HWND16 param_3)

{
    if((param_1 + 0x8) != 0x0)
    {
        SendMessage16(param_3, 0x0, 0x0, str_var1(0x86, param_2));
    }
    return;
}


ATOM win_ui_reg_class_1008_96d2(Globals    *globals,
                                Struct20   *param_1,
                                HINSTANCE16 in_h_inst_2,
                                WNDCLASS16 *in_wnd_class_3)

{
    BOOL16     BVar1;
    ATOM       atom_result;
    u16        name_1c;
    u16        uStack26;
    u16        uStack24;
    u32 uStack22;
    u8        *puStack18;
    u16        uStack16;
    u16        uStack14;
    u16        uStack12;
    u32 uStack10;
    i16        iStack6;
    u16        uStack4;

    iStack6 = param_1 + 0x5b;
    BVar1   = GetClassInfo16(in_h_inst_2, (SEGPTR)&name_1c, in_wnd_class_3);
    if(BVar1 == 0x0)
    {
        WNDCLASS16 wndclass = {};
        // TODO: fill in fields
        name_1c   = (param_1 + 0xc8);
        uStack26  = def_win_proc_1008_5632; //0x5632;
        uStack24  = SEG_1008;
        uStack22  = 0x40000;
        puStack18 = globals->hinst_1050_038c;
        uStack16  = (param_1 + 0xc2);
        uStack14  = (param_1 + 0xc4);
        uStack12  = (param_1 + 0xc6);
        uStack10  = 0x0;
        uStack4   = param_1;
        // LAST_SEGMENT
        atom_result = RegisterClass16(&wndclass);
        if(atom_result == 0x0)
        {
            // register class failed
            fn_ptr_op_1000_24cd(0x0, &stack0xfffe);
        }
    }
    return atom_result;
}


void create_window_ex_1008_9760(Struct0 *in_struct_1, u16 param_2)

{
    u32 uVar1;
    HWND16     window_handle;
    Struct0   *struct_1;
    LPCSTR     class_name;

    class_name = (in_struct_1 >> 0x10);
    struct_1   = (Struct0 *)in_struct_1;
    if(struct_1->field_0x8 == 0x0)
    {
        uVar1               = struct_1->field_0xac;
        window_handle       = CreateWIndowEx16(str_var1(struct_1, param_2),
                                               class_name,
                                               globals->hinst_1050_038c,
                             str_var1(struct_1->field_0xbc, struct_1->field_0xca),
                                               struct_1->field_0xba,
                                               struct_1->field_0xb8,
                                               struct_1->field_0xb6,
                                               struct_1->field_0xb4,
                                               (HWND16)uVar1,
                                               (HMENU16)(uVar1 >> 0x10),
                                               0x39e,
                                               SEG_1050);
        struct_1->field_0x8 = window_handle;
    }
    if(struct_1->field_0x8 == 0x0)
    {
        fn_ptr_op_1000_24cd(0x0, &stack0xfffe);
    }
    return;
}


u32  unk_win_op_1008_97f2(u32 *param_1, i16 *param_2, WPARAM16 param_3, u8 *param_4, u16 param_5, HWND16 param_6)

{
    void **ppcVar1;
    BOOL16 BVar2;
    u16    uVar3;
    i16    iVar4;
    u16    uVar5;
    u16  msg;
    u16  wparam;
    u16    unaff_SS;
    u32    uVar6;
    u8     uVar7;
    u8     uVar8;
    char   cVar9;

    msg    = (u16)param_1;
    wparam = (u16)(param_1 >> 0x10);
    if(param_5 == 0x2b)
    {
        if(*param_2 == 0x4)
        {
            win_ui_get_prop_op_1040_9566(str_var1(param_3, param_2), SEG_1040);
        }
        else
        {
            ppcVar1 = (*param_1 + 0x70);
            (**ppcVar1)();
        }
        uVar5 = 0x1;
        goto LAB_1008_9a95;
    }
    uVar8 = (param_1 >> 0x10);
    uVar7 = SUB41(param_1, 0x0);
    if(param_5 < 0x2c)
    {
        param_6 = SEG_1008;
        switch(param_5)
        {
        case 0x1:
            break;
        case 0x2:
            ppcVar1 = (*param_1 + 0x3c);
            (**ppcVar1)(SEG_1008, param_1);
            SetWindowLong16(SEG_1008, 0x0, 0x0);
            BVar2 = IsWindow16((HWND16)LAST_SEGMENT);
            if(BVar2 != 0x0)
            {
                PostMessage16((HWND16)LAST_SEGMENT, msg, wparam, 0x11100c7);
            }
            break;
        case 0x3:
            ppcVar1 = (*param_1 + 0x54);
            (**ppcVar1)(0x8, uVar7, wparam, param_3, param_2);
            break;
        default:
            goto switchD_1008_9b30_caseD_4;
        case 0x5:
            ppcVar1 = (*param_1 + 0x58);
            (**ppcVar1)(0x8, uVar7, uVar8, param_3, param_2, param_4);
            break;
        case 0x7:
            ppcVar1 = (*param_1 + 0x50);
            (**ppcVar1)(0x8, param_1, param_4);
            break;
        case 0x8:
            ppcVar1 = (*param_1 + 0x74);
            (**ppcVar1)(0x8, param_1, param_4);
            break;
        case 0xd:
            ppcVar1 = (*param_1 + 0x84);
            iVar4   = (**ppcVar1)(0x8, uVar7, uVar8, param_2, CONCAT12(param_4._0_1_, param_3));
            goto LAB_1008_9ada;
        case 0xf:
            ppcVar1 = (*param_1 + 0x34);
            (**ppcVar1)(SEG_1008, param_1);
            break;
        case 0x10:
            ppcVar1 = (*param_1 + 0x38);
            uVar6   = (**ppcVar1)(SEG_1008, param_1);
            return uVar6;
        case 0x19:
            ppcVar1 = (*param_1 + 0x78);
            uVar3   = (**ppcVar1)(0x8, uVar7, uVar8, param_2, CONCAT12(param_4._0_1_, param_3));
            return str_var1(0x1050, uVar3);
        case 0x1c:
            ppcVar1 = (*param_1 + 0x30);
            (**ppcVar1)(0x8, param_1, param_4);
        }
    }
    else
    {
        cVar9 = param_5;
        if(param_5 == 0x112)
        {
            if((globals->PTR_LOOP_1050_039a == 0x0) && (ppcVar1 = (*param_1 + 0x48), iVar4 = (**ppcVar1)(), iVar4 != 0x0))
            {
                make_def_wnd_proc_1008_9ce6(msg, wparam, (u16)param_2, param_3, CONCAT13(0x1, CONCAT12(cVar9, param_4)), param_6);
            }
        }
        else
        {
            if(param_5 < 0x113)
            {
                if(param_5 == 0x86)
                {
                    ppcVar1 = (*param_1 + 0x80);
                    uVar6   = (**ppcVar1)();
                    return uVar6;
                }
                if(param_5 < 0x87)
                {
                    if(param_5 == 0x85)
                    {
                        ppcVar1 = (*param_1 + 0x7c);
                        uVar6   = (**ppcVar1)();
                        return uVar6;
                    }
                    if(param_5 < 0x86)
                    {
                        if(cVar9 == '7')
                        {
                            return *(msg + 0xc2);
                        }
                        if(cVar9 == 'A')
                        {
                            ppcVar1 = (*param_1 + 0x2c);
                            (**ppcVar1)(param_6, param_1);
                            goto switchD_1008_9b30_caseD_1;
                        }
                    }
                switchD_1008_9b30_caseD_4:
                    if((param_5 < 0x400) || (0x7ffe < param_5))
                    {
                        uVar6 = make_def_wnd_proc_1008_9ce6(msg, wparam, (u16)param_2, param_3,
                                                            str_var1(param_5, param_4), param_6);
                        return uVar6;
                    }
                    ppcVar1 = (*param_1 + 0x28);
                    (**ppcVar1)(param_6, uVar7, uVar8, param_2, param_3,
                                str_var1(param_5, param_4));
                }
                else
                {
                    if(param_5 == 0x100)
                    {
                        if(globals->PTR_LOOP_1050_039a == 0x0)
                        {
                            ppcVar1 = (*param_1 + 0x6c);
                            (**ppcVar1)();
                        }
                    }
                    else
                    {
                        if(param_5 == 0x102)
                        {
                            if(globals->PTR_LOOP_1050_039a == 0x0)
                            {
                                ppcVar1 = (*param_1 + 0x68);
                                (**ppcVar1)();
                            }
                        }
                        else
                        {
                            if(param_5 != 0x111)
                                goto switchD_1008_9b30_caseD_4;
                            if((param_4 != globals->PTR_LOOP_1050_039c) && (globals->PTR_LOOP_1050_039a == 0x0))
                            {
                                if(param_2 == 0x0)
                                {
                                    ppcVar1 = (*param_1 + 0x40);
                                    (**ppcVar1)();
                                }
                                else
                                {
                                    ppcVar1 = (*param_1 + 0x44);
                                    (**ppcVar1)();
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                if(param_5 == 0x204)
                {
                    if(globals->PTR_LOOP_1050_039a == 0x0)
                    {
                        ppcVar1 = (*param_1 + 0x60);
                        (**ppcVar1)();
                    }
                }
                else
                {
                    if(param_5 < 0x205)
                    {
                        if(param_5 == 0x113)
                        {
                            if(globals->_PTR_LOOP_1050_0388 != 0x0)
                            {
                                pass1_1008_932a(globals->_PTR_LOOP_1050_0388, unaff_SS);
                            }
                        }
                        else
                        {
                            if(param_5 == 0x117)
                            {
                                if(param_3 == 0x0)
                                {
                                    ppcVar1 = (*param_1 + 0x4c);
                                    (**ppcVar1)();
                                }
                                else
                                {
                                    ppcVar1 = (*param_1 + 0x20);
                                    (**ppcVar1)();
                                }
                            }
                            else
                            {
                                if(param_5 != 0x201)
                                    goto switchD_1008_9b30_caseD_4;
                                if(globals->PTR_LOOP_1050_039a == 0x0)
                                {
                                    ppcVar1 = (*param_1 + 0x5c);
                                    (**ppcVar1)();
                                }
                            }
                        }
                    }
                    else
                    {
                        if(param_5 == 0x210)
                        {
                            ppcVar1 = (*param_1 + 0x64);
                            (**ppcVar1)();
                        }
                        else
                        {
                            if(param_5 == 0x30f)
                            {
                            LAB_1008_9af8:
                                ppcVar1 = (*param_1 + 0x8c);
                                iVar4   = (**ppcVar1)(param_6, param_1);
                            LAB_1008_9ada:
                                return (long)iVar4;
                            }
                            if(param_5 == 0x311)
                            {
                                ppcVar1 = (*param_1 + 0x88);
                                iVar4   = (**ppcVar1)();
                                if(iVar4 != 0x0)
                                    goto LAB_1008_9af8;
                            }
                            else
                            {
                                if(param_5 != 0x3b9)
                                    goto switchD_1008_9b30_caseD_4;
                                ppcVar1 = (*param_1 + 0x24);
                                (**ppcVar1)();
                            }
                        }
                    }
                }
            }
        }
    }
switchD_1008_9b30_caseD_1:
    uVar5 = 0x0;
LAB_1008_9a95:
    return uVar5;
}

LRESULT  make_def_wnd_proc_1008_9ce6(u16 param_1, u16 param_2, u16 in_msg_3, WPARAM16 param_4, LPARAM param_5, HWND16 in_hwnd_5)

{
    LRESULT LVar1;

    LVar1 = DefWindowProc16(in_hwnd_5, in_msg_3, param_4, param_5);
    return LVar1;
}


void pass1_1008_9e5a(Struct11 *param_1)

{
    u32  *puVar1;
    u16          u_var2;
    void **ppcVar3;
    u16         *puVar4;
    u16          uVar6;
    Struct464 *uVar5;
    u16          uVar7;
    u16         *puStack8;
    i16          iStack4;

    uVar7             = (param_1 >> 0x10);
    uVar5             = (Struct464 *)param_1;
    param_1           = addr_table_1008_9fb2;//0x9fb2;
    uVar5->field_0x2  = SEG_1008;
    uVar5->field_0x1c_addr_base = addr_table_1008_9fb2[4];//0x9fca;
    uVar5->field_0x1e = SEG_1008;
    if(globals->_PTR_LOOP_1050_0388 != 0x0)
    {
        if(param_1 == (Struct11 *)0x0)
        {
            puVar4 = 0x0;
            uVar6  = 0x0;
        }
        else
        {
            puVar4 = &uVar5->field_0x1c_addr_base;
            uVar6  = uVar7;
        }
        pass1_1008_92b2(globals->_PTR_LOOP_1050_0388, 0x50, str_var1(uVar6, puVar4));
    }
    iStack4 = 0x0;
    do
    {
        puVar1 = *(&uVar5[0x1].field_0x0 + iStack4 * 0x4);
        u_var2  = (&uVar5[0x1].field_0x2)[iStack4 * 0x2];
        if((u_var2 | puVar1) != 0x0)
        {
            ppcVar3 = *puVar1;
            (**ppcVar3)();
        }
        iStack4 = iStack4 + 0x1;
    } while(iStack4 < 0xc);
    if(param_1 == (Struct11 *)0x0)
    {
        puVar4 = 0x0;
        uVar7  = 0x0;
    }
    else
    {
        puVar4 = &uVar5->field_0x1c_addr_base;
    }
    puStack8    = str_var1(uVar7, puVar4);
    *puStack8   = addr_table_1008_380a[36]; // 0x389a
    puVar4[0x1] = SEG_1008;
    clenaup_win_ui_1018_4d22(param_1, SEG_1018);
    return;
}


void  post_win_msg_1008_a0e4(Struct67 *param_1, long param_2, i16 param_3, u16 param_4, u32 param_5, i16 param_6, HWND16 param_7, u16 param_8)

{
    u32 *puVar1;
    void **ppcVar2;
    u16         uVar3;
    bool        bVar4;
    Struct68 *puVar4;
    Struct66 *uVar5;
    u16         extraout_DX;
    u16         uVar7;
    Struct67 *iVar7;
    Struct67 *uVar6;
    Struct99 *paStack14;
    u8          local_a[0x8];

    uVar6 = (Struct67 *)(param_1 >> 0x10);
    iVar7 = (Struct67 *)param_1;
    pass1_1008_5784(str_var1(param_8, local_a), iVar7->field_0xa);
    bVar4 = false;
    do
    {
        puVar4 = (Struct68 *)local_a;
        pass1_1008_5b12(puVar4, param_8);
        if((extraout_DX | puVar4) == 0x0)
            goto LAB_1008_a146;
    } while(puVar4->field_0x4 != param_6);
    puVar4->field_0xc = puVar4->field_0xc + param_3;
    puVar4->field_0xe = puVar4->field_0xe + param_2;
    bVar4             = true;
LAB_1008_a146:
    if(!bVar4)
    {
        param_7 = SEG_1000;
        paStack14 = pass1_1000_07fc(SEG_1000, globals->u32_ptr_1050_03a0);
        uVar7 = (paStack14 >> 0x10);
        uVar3     = paStack14;
        if((uVar7 | uVar3) == 0x0)
        {
            paStack14 = (Struct99 *)0x0;
        }
        else
        {
            paStack14->fld0_addr_table = addr_table_1008_380a[36]; // 0x389a
            (uVar3 + 0x2)        = SEG_1008;
            (uVar3 + 0x4)        = param_6;
            *(uVar3 + 0x6)       = param_5;
            (uVar3 + 0xa)        = param_4;
            (uVar3 + 0xc)        = param_3;
            (uVar3 + 0xe)        = param_2;
            paStack14->fld0_addr_table = addr_table_1008_ad8a[1]//0xad8e;
            (uVar3 + 0x2)        = SEG_1008;
        }
        puVar1  = iVar7->field_0xa;
        ppcVar2 = (*iVar7->field_0xa + 0x8);
        (**ppcVar2)(SEG_1000, puVar1, (puVar1 >> 0x10), paStack14, (paStack14 >> 0x10));
    }
    if(param_6 == 0x14)
    {
        PostMessage16(param_7, 0x0, 0x0, 0x11100fc);
    }
    return;
}

u16 *pass1_1008_91ba(u16 *param_1, HWND16 param_2) {
    u16 UVar1;
    i16 iVar2;
    u16 uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar2 + 0x2) = SEG_1008;
    (iVar2 + 0x4) = 0x0;
    set_struct_1008_574a((param_1 & 0xffff0000 | (iVar2 + 0x6)));
    param_1->field_0x0 = addr_table_1008_9412[1];//0x9416;
    (iVar2 + 0x2) = SEG_1008;
    globals->_PTR_LOOP_1050_0388 = param_1;
    UVar1 = SetTimer16(param_2, 0x0, 0x0, (&PTR_LOOP_1050_0000 + 0x1));
    if (UVar1 == 0x0) {
        fn_ptr_op_1000_24cd(0x1, &stack0xfffe);
    }
    globals->PTR_LOOP_1050_038a = (globals->_PTR_LOOP_1050_0388 >> 0x10);
    return param_1;
}


void kill_timer_1008_921c(u16 *param_1, HWND16 param_2) {
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    param_1->field_0x0 = addr_table_1008_9412[1];//0x9416;
    (iVar1 + 0x2) = SEG_1008;
    KillTimer16(param_2, 0x1);
    globals->_PTR_LOOP_1050_0388 = 0x0;
    pass1_1008_57c4((param_1 & 0xffff0000 | (iVar1 + 0x6)));
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    return;
}


void send_msg_1008_84ba(u16 param_1, u32 param_2, HWND16 param_3)

{
    i16 iVar1;
    u16 u_var2;
    u16 uStack4;

    u_var2 = (param_2 >> 0x10);
    iVar1 = param_2;
    if((*(u8 *)(iVar1 + 0x4) & 0x4) == 0x0)
    {
        if((*(u8 *)(iVar1 + 0x4) & 0x8) == 0x0)
        {
            return;
        }
        uStack4 = 0x1;
    }
    else
    {
        uStack4 = 0x0;
    }
    SendMessage16(param_3, *(iVar1 + 0x2), 0x0, str_var1(0x115, uStack4));
    return;
}


void win_1008_5c9e(u32 param_1, u32 *param_2, u16 param_3, u16 param_4, WNDCLASS16 *param_5)

{
    win_1008_5c7c(NULL, param_1, *param_2, param_5, param_3);
    return;
}


HWND16
create_window_1008_5e7e(Globals *globals, u16 in_stock_obj_id, WNDCLASS16 *in_wnd_class)

{
    u32 *puVar1;
    u32 *pu_var2;
    BOOL16      BVar3;
    ATOM        AVar4;
    HWND16      window_handle_1;
    i16         iVar5;
    LPCSTR      string_1;
    u32 *puVar6;
    u16         name;
    u16         uStack42;
    u16         uStack40;
    u16         uStack38;
    u16         uStack36;
    u8         *puStack34;
    u16         uStack32;
    u16         uStack30;
    HGDIOBJ16   HStack28;
    u32  uStack26;
    u32 *puStack22;
    u32  local_12[0x4];

    puVar6   = local_12;
    string_1 = s_MciSoundWindow_1050_02bd;
    for(iVar5 = 0x3; iVar5 != 0x0; iVar5 = iVar5 + -0x1)
    {
        pu_var2   = puVar6;
        puVar6   = puVar6 + 0x1;
        puVar1   = string_1;
        string_1 = (string_1 + 0x4);
        *pu_var2  = *puVar1;
    }
    puVar6         = string_1;
    (puVar6 + 0x2) = (string_1 + 0x2);
    name           = 0x2000;
    uStack42       = make_def_win_proc_1008_5f44;//0x5f44;//SUB42(&dat_1050_5f44, 0x0);
    uStack40       = SEG_1008;
    uStack36       = 0x2;
    puStack34      = globals->hinst_1050_038c;
    uStack32       = 0x0;
    uStack30       = 0x0;
    uStack38       = 0x0;
    HStack28       = GetStockObject16(in_stock_obj_id);
    uStack26       = 0x0;
    puStack22      = local_12;
    BVar3          = GetClassInfo16((HINSTANCE16)LAST_SEGMENT, (SEGPTR)&name, in_wnd_class);
    if(BVar3 == 0x0)
    {
        AVar4 = RegisterClass16(LAST_SEGMENT);
        if(AVar4 == 0x0)
        {
            OutputDebugString16(LAST_SEGMENT);
            return 0x0;
        }
    }
    window_handle_1 = CreateWindow16(LAST_SEGMENT, 0x0, globals->hinst_1050_038c, 0x0, globals->PTR_LOOP_1050_0396, 0x1, 0x1, 0x8000, 0x8000, 0x0, 0xcf);
    return window_handle_1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LRESULT make_def_win_proc_1008_5f44(u16 param_1, WPARAM16 in_wparam_2, LPARAM param_3, HWND16 in_hwnd_4)

{
    WORD        WVar1;
    u8         *in_DX;
    i16         unaff_DI;
    WNDCLASS16 *unaff_SS;
    LRESULT     LVar2;
    u16        *puVar3;

    if(param_3 == 0x2)
    {
        WVar1 = GetWindowWord16(in_hwnd_4, 0x0);
        mci_send_command_1008_5cb6(globals->_PTR_LOOP_1050_02a0, WVar1, LAST_SEGMENT);
        puVar3 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, unaff_SS, in_DX, unaff_DI);
        pass1_1008_aa28(puVar3, puVar3, unaff_SS);
    }
    else
    {
        if(param_3 != 0x3b9)
        {
            LVar2 = DefWindowProc16(in_hwnd_4, param_1, in_wparam_2, param_3);
            return LVar2;
        }
        DestroyWindow16(in_hwnd_4);
    }
    return 0x0;
}


void destroy_win_1008_628e(u32 param_1, HWND16 param_2)

{
    fn_ptr_1 *ppcVar1;

    ppcVar1 = ((param_1 + 0xd2) + 0x14);
    (**ppcVar1)(param_2, (param_1 + 0xd2), param_1);
    DestroyWindow16(param_2);
    (param_1 + 0x8) = 0x0;
    return;
}
