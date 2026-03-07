#include "win_ops_1.h"

#include "address_tables/function_tables.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "op_winapi.h"
#include "op_windef.h"
#include "string_ops.h"
#include "struct_43.h"
#include "struct_ops/struct_ops_4.h"
#include "structs/structs_0xx/structs_6x.h"
#include "ui_ops/ui_ops_1.h"
#include "ui_ops/ui_ops_6.h"
#include "unk/unk_12.h"
#include "unk/unk_15.h"
#include "utils.h"
#include "win_msg_ops_1.h"
#include "win_ops_3.h"

#include <minwindef.h>


Struct18 * pass1_1040_a4c2(Struct18 *param_1, u8 param_2, u16 param_3)

{
    free_proc_inst_1040_a294(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


// WARNING: Unable to use type for symbol uVar5

u32 call_win_proc_1040_a40e(Globals *globals,
                            HWND16   param_1,
                            u32      param_2,
                            LPARAM   param_3,
                            u16      param_4,
                            LPVOID   param_5,
                            u16      param_6)

{
    u16         uVar1;
    void **ppcVar2;
    u32 *puVar4;
    WPARAM16    wparam;
    i16         iVar5;
    i16         unaff_DI;
    u16         uVar6;
    u32         uVar7;
    u32         u_stack6;
    u32        *puVar3;
    u32  uVar5;

    u_stack6 = 0x0;
    wparam  = (WPARAM16)(param_2 >> 0x10);
    if(param_3 == 0x19)
    {
        puVar4  = globals->dat_1050_5ee0;
        ppcVar2 = (*puVar4 + 0x34);
        u_stack6 = (**ppcVar2)(param_5, puVar4, (puVar4 >> 0x10), param_1, param_2, SEG_1050);
        param_4 = (u_stack6 >> 0x10);
    }
    else
    {
        if(param_3 == 0x86)
        {
            puVar4  = globals->dat_1050_5ee0;
            ppcVar2 = (*puVar4 + 0x20);
            uVar7   = (**ppcVar2)(param_5, puVar4, (puVar4 >> 0x10), wparam);
            return uVar7;
        }
        if(param_3 == 0x110)
        {
            uVar7 = win_msg_1040_a308(globals->dat_1050_5ee0, unaff_DI, (HWND16)param_5, param_6);
            return uVar7;
        }
    }
    if(u_stack6 != 0x0)
    {
        return u_stack6 & 0xffff | param_4 << 0x10;
    }
    uVar5 = globals->dat_1050_5bc8;
    uVar6 = (uVar5 >> 0x10);
    iVar5 = uVar5;
    uVar1 = (iVar5 + 0x6);
    if((uVar1 | (iVar5 + 0x4)) == 0x0)
    {
        return uVar1 << 0x10;
    }
    uVar7 = CallWindowProc16(param_5, param_1, param_2, wparam, param_3);
    return uVar7;
}


ATOM reg_class_1040_98c0(Globals *globals, u32 param_1, HINSTANCE16 param_2, WNDCLASS16 *in_wnd_class_3)

{
    BOOL16     BVar1;
    ATOM       atom_result;
    u16        l_name;
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

    iStack6 = param_1 + 0x4;
    BVar1   = GetClassInfo16(param_2, (SEGPTR)&l_name, in_wnd_class_3);
    if(BVar1 == 0x0)
    {
        WNDCLASS16 wndclass = {};
        // l_name    = (param_1 + 0x54);
        // TODO: arrange values below into fields for wndclass
        wndclass.lpsz_class_name = (param_1 + 0x54);
        uStack26 = win_op_1040_9cde;//0x9cde;
        uStack24 = SEG_1040;
        uStack22 = 0x40000;
        puStack18 = globals->hinst_1050_038c;
        uStack16 = 0x0;
        uStack14 = (param_1 + 0x58);
        uStack12 = (param_1 + 0x56);
        uStack10 = 0x0;
        uStack4 = param_1;


        // registers a window class for subsequent use in calls to the createwindow or createwindowex func
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


void win_op_1040_9cde(Globals *globals,
                      u16      param_1,
                      WPARAM16 param_2,
                      i16      param_3,
                      u32      param_4,
                      HWND16   param_5,
                      u16      param_6)

{
    u8       *pbVar1;
    i16         iVar2;
    u16         uVar3;
    u16         uVar4;
    i16         iVar5;
    u16       IVar6;
    BOOL16      BVar7;
    u16         offset;
    u8         *puVar8;
    u16         uVar9;
    u16         uVar10;
    HWND16      HVar11;
    Struct18 *paVar12;
    u16      *pi_var13;
    LRESULT     LVar14;
    u32         uVar15;
    u8        bVar16;
    u16         uStack30;
    RECT16      local_a[0x2];

    HVar11  = (HWND16)LAST_SEGMENT;
    paVar12 = (Struct18 *)GetWindowLong16(param_5, 0x0);
    puVar8  = (paVar12 >> 0x10);
    iVar5   = paVar12;
    uVar10  = ((paVar12 & 0xffff0000) >> 0x10);
    if(param_4 == 0x30)
    {
        (iVar5 + 0x5a) = param_3;
    }
    else
    {
        bVar16 = (u8)param_4;
        if(param_4 < 0x31)
        {
            if(param_4 == 0x1f)
            {
                (iVar5 + 0x4) = 0x0;
                ReleaseCapture16();
                return;
            }
            if(0x1f < param_4)
                goto LAB_1040_a1ae;
            if(bVar16 == 0x8)
            {
                pbVar1   = (u8 *)(iVar5 + 0x4);
                *pbVar1  = *pbVar1 & 0xf7;
                uStack30 = 0x0;
                BVar7    = IsWindow16((HWND16)LAST_SEGMENT);
                if(BVar7 != 0x0)
                {
                    uVar15   = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x870000);
                    uStack30 = ((uVar15 & 0x20) == 0x0);
                }
                (iVar5 + 0x56) = 0x0;
                SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, str_var1(0x401, (iVar5 + 0x5c)));
                if(((iVar5 + 0x5c) != 0x0) && ((iVar5 + 0x5c) != paVar12->field_0x0))
                {
                    uVar3 = (iVar5 + 0x5c);
                    SendDlgItemMessage16((HWND16)LAST_SEGMENT, uStack30, 0x0, 0x1, CONCAT13((uVar3 >> 0x8), CONCAT12(uVar3, 0x404)));
                }
                HVar11         = (HWND16)LAST_SEGMENT;
                (iVar5 + 0x5c) = 0x0;
            }
            else
            {
                if(bVar16 < 0x9)
                {
                    if(bVar16 == 0x1)
                    {
                        pi_var13        = (u16 *)GetWindowLong16((HWND16)LAST_SEGMENT, 0x0);
                        iVar5          = pi_var13;
                        uVar10         = ((pi_var13 & 0xffff0000) >> 0x10);
                        (iVar5 + 0x2)  = (param_1 + 0x8);
                        IVar6          = GetDlgCtrlID16((HWND16)LAST_SEGMENT);
                        *pi_var13       = IVar6;
                        (iVar5 + 0x56) = (param_1 + 0x12);
                        unk_str_op_1000_3d3e((pi_var13 & 0xffff0000 | (iVar5 + 0x6)), (param_1 + 0x16));
                        if((*(u8 *)(param_1 + 0x12) & 0x1) != 0x0)
                        {
                            SendMessage16(SEG_1000, 0x0, 0x0, str_var1(0x401, *pi_var13));
                        }
                        if(((param_1 + 0x14) & 0x800) == 0x0)
                        {
                            return;
                        }
                        pbVar1  = (u8 *)(iVar5 + 0x4);
                        *pbVar1 = *pbVar1 | 0x4;
                        return;
                    }
                    if(bVar16 == 0x2)
                    {
                        fn_ptr_1000_17ce(paVar12, SEG_1000);
                        SetWindowLong16(SEG_1000, 0x0, 0x0);
                        return;
                    }
                    if(bVar16 != 0x7)
                        goto LAB_1040_a1ae;
                    pbVar1  = (u8 *)(iVar5 + 0x4);
                    *pbVar1 = *pbVar1 | 0x8;
                    LVar14  = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x4000000);
                    uVar4   = LVar14;
                    if(((LVar14 >> 0x10) == 0x534b) && ((iVar5 + 0x5c) = uVar4, uVar4 != paVar12->field_0x0))
                    {
                        SendDlgItemMessage16((HWND16)LAST_SEGMENT, 0x1, 0x0, 0x0, str_var1(uVar4, 0x404));
                    }
                    HVar11 = (HWND16)LAST_SEGMENT;
                    SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0,
                                  str_var1(0x401, paVar12->field_0x0));
                    (iVar5 + 0x56) = 0x1;
                }
                else
                {
                    if(bVar16 == 0xa)
                    {
                        pbVar1  = (u8 *)(iVar5 + 0x4);
                        *pbVar1 = *pbVar1 & 0xfb;
                        if(param_3 == 0x0)
                        {
                            pbVar1  = (u8 *)(iVar5 + 0x4);
                            *pbVar1 = *pbVar1 | 0x4;
                        }
                    }
                    else
                    {
                        if(bVar16 != 0xc)
                        {
                            if(bVar16 == 0xf)
                            {
                                draw_op_1040_9948(param_4, paVar12, LAST_SEGMENT, param_6);
                                return;
                            }
                            goto LAB_1040_a1ae;
                        }
                        if(str_var1(param_2, param_1) != 0x0)
                        {
                            HVar11 = SEG_1000;
                            unk_str_op_1000_3d3e((paVar12 & 0xffff0000 | (iVar5 + 0x6)),
                                                 str_var1(param_2, param_1));
                        }
                    }
                }
            }
            goto LAB_1040_9e20;
        }
        if(param_4 == 0x200)
        {
            if((*(u8 *)(iVar5 + 0x4) & 0x1) == 0x0)
            {
                return;
            }
            GetClientRect16((HWND16)LAST_SEGMENT, local_a);
            iVar2 = (iVar5 + 0x4);
            BVar7 = PtInRect16((RECT16 *)LAST_SEGMENT, (POINT16)str_var1(param_2, param_1));
            if(BVar7 == 0x0)
            {
                pbVar1  = (u8 *)(iVar5 + 0x4);
                *pbVar1 = *pbVar1 & 0xfd;
            }
            else
            {
                pbVar1  = (u8 *)(iVar5 + 0x4);
                *pbVar1 = *pbVar1 | 0x2;
            }
            param_1 = (iVar5 + 0x4) - iVar2;
        }
        else
        {
            if(param_4 < 0x201)
            {
                offset = param_4 - 0x81;
                if(offset == 0x0)
                {
                    uVar10 = 0x5e;
                    mem_op_1000_179c(0x5e, puVar8, 0);
                    uVar9 = puVar8 | offset;
                    if(uVar9 == 0x0)
                    {
                        offset = 0x0;
                        uVar9  = 0x0;
                    }
                    else
                    {
                        pass1_1040_9824(str_var1(puVar8, offset));
                    }
                    SetWindowLong16(SEG_1000, offset, str_var1(uVar10, uVar9));
                    return;
                }
                if(param_4 == 0x87)
                {
                    return;
                }
                if(param_4 == 0x100)
                {
                    if((param_3 == 0x26) || (param_3 == 0x25))
                    {
                        HVar11 = 0x1;
                    }
                    else
                    {
                        if((param_3 != 0x28) && (param_3 != 0x27))
                        {
                            if(((param_3 == 0x20) || (param_3 == 0xd)) && (globals->PTR_LOOP_1050_5ed8 == 0x0))
                            {
                                globals->PTR_LOOP_1050_5ed8 = 0x1;
                                pbVar1              = (u8 *)(iVar5 + 0x4);
                                *pbVar1             = *pbVar1 | 0x2;
                                goto LAB_1040_9e20;
                            }
                            goto LAB_1040_a1ae;
                        }
                        HVar11 = 0x0;
                    }
                    GetNextDlgTabItem16((HWND16)LAST_SEGMENT, HVar11, param_4);
                    SetFocus16((HWND16)LAST_SEGMENT);
                    return;
                }
                if((param_4 == 0x101) && (&PTR_LOOP_1050_5ed8 != 0x0))
                {
                    &PTR_LOOP_1050_5ed8 = 0x0;
                    pbVar1              = (u8 *)(iVar5 + 0x4);
                    *pbVar1             = *pbVar1 & 0xfd;
                    InvalidateRect16((HWND16)LAST_SEGMENT, (RECT16 *)(&PTR_LOOP_1050_0000 + 0x1), 0x0);
                    UpdateWindow16((HWND16)LAST_SEGMENT);
                    SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0,
                                  str_var1(0x111, paVar12->field_0x0));
                    return;
                }
            LAB_1040_a1ae:
                DefWindowProc16((HWND16)LAST_SEGMENT, param_1, param_2, CONCAT13((param_4 >> 0x8), CONCAT12(bVar16, param_3)));
                return;
            }
            if(param_4 == 0x201)
            {
            LAB_1040_9e74:
                SetFocus16((HWND16)LAST_SEGMENT);
                pbVar1  = (u8 *)(iVar5 + 0x4);
                *pbVar1 = *pbVar1 | 0x3;
                InvalidateRect16((HWND16)LAST_SEGMENT, (RECT16 *)(&PTR_LOOP_1050_0000 + 0x1), 0x0);
                UpdateWindow16((HWND16)LAST_SEGMENT);
                SetCapture16((HWND16)LAST_SEGMENT);
                return;
            }
            if(param_4 == 0x202)
            {
                ReleaseCapture16();
                GetClientRect16((HWND16)LAST_SEGMENT, local_a);
                if((*(u8 *)(iVar5 + 0x4) & 0x1) == 0x0)
                {
                    return;
                }
                pbVar1  = (u8 *)(iVar5 + 0x4);
                *pbVar1 = *pbVar1 & 0xfc;
                InvalidateRect16((HWND16)LAST_SEGMENT, (RECT16 *)(&PTR_LOOP_1050_0000 + 0x1), 0x0);
                UpdateWindow16((HWND16)LAST_SEGMENT);
                BVar7 = PtInRect16((RECT16 *)LAST_SEGMENT, (POINT16)str_var1(param_2, param_1));
                if(BVar7 == 0x0)
                {
                    return;
                }
                PostMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, str_var1(0x111, paVar12->field_0x0));
                return;
            }
            if(param_4 == 0x203)
                goto LAB_1040_9e74;
            if(param_4 != 0x404)
                goto LAB_1040_a1ae;
            if(param_3 == 0x1)
            {
                (iVar5 + 0x56) = 0x1;
            }
            else
            {
                (iVar5 + 0x56) = 0x0;
            }
        }
    }
    HVar11 = (HWND16)LAST_SEGMENT;
    if(param_1 == 0x0)
    {
        return;
    }
LAB_1040_9e20:
    InvalidateRect16(HVar11, (RECT16 *)(&PTR_LOOP_1050_0000 + 0x1), 0x0);
    UpdateWindow16((HWND16)LAST_SEGMENT);
    return;
}


void  make_proc_inst_1040_a234(u8 *param_1, u8 *param_2, u16 param_3, u32 param_4, LPVOID param_5)

{
    LPVOID pvVar1;
    u16    in_DX;

    pass1_1040_b040(
      str_var1(param_2, param_1), str_var1(param_4, param_3), (param_4 >> 0x10));
    param_1 =  0xa4e8;
    param_1->field_0x2 = SEG_1040;
    if(globals->_PTR_LOOP_1050_5edc == 0x0)
    {
        pvVar1              = MakeProcInstance16(param_5, globals->hinst_1050_038c);
        globals->_PTR_LOOP_1050_5edc = str_var1(in_DX, pvVar1);
    }
    (param_1 + 0xc)    = globals->_PTR_LOOP_1050_5edc;
    globals->PTR_LOOP_1050_5eda = globals->PTR_LOOP_1050_5eda + 0x1;
    globals->dat_1050_5ee0 = param_1;
    globals->PTR_LOOP_1050_5ee2 = param_2;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  free_proc_inst_1040_a294(Struct18 *param_1, u16 param_2) {
    param_1->field_0x0 = addr_table_1040_a4e8;//0xa4e8;
    param_1->field_0x2 = SEG_1040;
    globals->PTR_LOOP_1050_5eda = globals->PTR_LOOP_1050_5eda + -0x1;
    if (globals->PTR_LOOP_1050_5eda == 0x0) {
        FreeProcInstance16(param_2);
        globals->_PTR_LOOP_1050_5edc = 0x0;
    }
    unk_draw_op_1040_b0f8(param_1);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u32  win_msg_1040_a308(u32 param_1, i16 param_2, HWND16 param_3, u16 param_4)

{
    i16       *pi_var1;
    u32 u_var2;
    i16        iVar3;
    u16        uVar4;
    HWND16     hwnd;
    LRESULT    LVar5;
    u16       *puVar6;
    char      *pcVar7;
    u16        uVar8;
    u16        uVar9;
    i16        iStack12;

    SendMessage16(param_3, 0x0, 0x0, 0x4050000);
    LVar5 = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0xb0000);
    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    u_var2 = (iVar3 + 0x90);
    if((u_var2 + 0x10) == 0x0)
    {
        uVar4  = 0x0;
        uVar8  = 0x401;
        pcVar7 = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
        hwnd   = (HWND16)LAST_SEGMENT;
        SendMessage16(SEG_1010, pcVar7, (WPARAM16)(pcVar7 >> 0x10), str_var1(uVar8, uVar4));
    }
    else
    {
        hwnd   = SEG_1010;
        puVar6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_4, (LVar5 >> 0x10), param_2);
        for(iStack12 = 0x0; u_var2 = (iVar3 + 0x90), pi_var1 = (u_var2 + 0x10), *pi_var1 != iStack12 && iStack12 <= *pi_var1; iStack12 = iStack12 + 0x1)
        {
            uVar8  = 0x0;
            uVar9  = 0x401;
            u_var2  = (iVar3 + 0x90);
            u_var2  = (u_var2 + 0xc);
            pcVar7 = load_string_1010_ac92(
              NULL, SEG_1010, puVar6, (puVar6 >> 0x10), (u_var2 + iStack12 * 0x2));
            hwnd   = (HWND16)LAST_SEGMENT;
            SendMessage16(SEG_1010, pcVar7, (WPARAM16)(pcVar7 >> 0x10), str_var1(uVar9, uVar8));
        }
    }
    LVar5 = SendMessage16(hwnd, 0x0, 0x0, 0xb0001);
    return str_var1((LVar5 >> 0x10), 0x1);
}


u8 * win_ui_op_1040_8718(Struct37 *param_1, u16 param_2)

{
    i16  *pi_var1;
    i16   iVar2;
    u16   uVar3;
    u8   *extraout_DX;
    u8   *puVar4;
    i16   unaff_DI;
    u16   uVar5;
    u16  *puVar6;
    u16   uVar7;
    u16   uVar9;
    u32 UVar10;
    i16   local_104[0x80];
    u16   uStack4;
    u16   uVar8;

    uVar5 = SEG_1008;
    unk_win_msg_op_1008_9510(&dat_1050_5df4, SEG_1008, param_2);
    UVar10 = (u32)param_1;
    uVar8  = (param_1 >> 0x10);
    dialog_ui_fn_1040_78e2((Struct1 *)param_1, SEG_1008);
    globals->PTR_LOOP_1050_5df6 = (UVar10 + 0x6);
    if((UVar10 + 0x94) != 0x0)
    {
        uVar5 = SEG_1000;
        unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (UVar10 + 0x10)), (UVar10 + 0x94));
    }
    get_sys_metrics_1040_8c66(param_1, uVar5);
    uStack4 = *(u8 *)(UVar10 + 0x98) & 0xf;
    if(uStack4 == 0x1)
    {
        (UVar10 + 0xae) = ((UVar10 + 0xaa) + -0xc4) / 0x2;
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0xff, local_104, param_2);
        create_window_1040_8bea(NULL, UVar10, uVar8, 0x1, 0x1, (UVar10 + 0xae));
        pi_var1  = (UVar10 + 0xae);
        *pi_var1 = *pi_var1 + 0x6c;
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0xff, local_104, param_2);
        uVar9 = (UVar10 + 0xae);
        uVar7 = 0x2;
    }
    else
    {
        if(uStack4 != 0x4)
        {
            (UVar10 + 0xae) = ((UVar10 + 0xaa) + -0x58) / 0x2;
            load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0xff, local_104, param_2);
            uVar9 = (UVar10 + 0xae);
            uVar5 = 0x1;
            uVar7 = 0x1;
            goto LAB_1040_88a5;
        }
        (UVar10 + 0xae) = ((UVar10 + 0xaa) + -0xc4) / 0x2;
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0xff, local_104, param_2);
        create_window_1040_8bea(NULL, UVar10, uVar8, 0x1, 0x6, (UVar10 + 0xae));
        pi_var1  = (UVar10 + 0xae);
        *pi_var1 = *pi_var1 + 0x6c;
        load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0xff, local_104, param_2);
        uVar9 = (UVar10 + 0xae);
        uVar7 = 0x7;
    }
    uVar5 = 0x0;
LAB_1040_88a5:
    create_window_1040_8bea(NULL, UVar10, uVar8, uVar5, uVar7, uVar9);
    puVar6       = mixed_1010_20ba(globals->u16_1050_0ed0, 0x48, param_2, extraout_DX, unaff_DI);
    uVar5        = (puVar6 >> 0x10);
    local_104[0] = (puVar6 + 0xa);
    uStack4      = (puVar6 + 0xc);
    iVar2        = uStack4 - (UVar10 + 0xac);
    puVar4       = (iVar2 >> 0xf);
    SetWindowPos16(SEG_1010, 0x40, (UVar10 + 0xac), (UVar10 + 0xaa), iVar2 / 0x2, (local_104[0] - (UVar10 + 0xaa)) / 0x2, 0x0);
    globals->dat_1050_5df4 = (&PTR_LOOP_1050_0000 + 0x1);
    unk_win_msg_op_1008_9510(&dat_1050_5df4, SEG_1008, param_2);
    destroy_win_1040_8b7e(SEG_1008);
    globals->PTR_LOOP_1050_5df6 = 0x0;
    if((UVar10 + 0xb2) != 0x0)
    {
        puVar6 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_2, puVar4, unaff_DI);
        uVar3  = pass1_1008_ab54(puVar6);
        if(uVar3 != 0x0)
        {
            PostMessage16(SEG_1008, 0x0, 0x0, 0x11100fc);
        }
    }
    return globals->dat_1050_5df8;
}


void  pass1_1040_8978(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, WNDCLASS16 *param_5)

{
    fn_ptr_1 *ppcVar1;

    unk_win_msg_op_1008_9510(&dat_1050_5df4, SEG_1008, param_5);
    win_1008_5c5c(param_5, param_3, param_4, globals->_PTR_LOOP_1050_02a0, param_2);
    ppcVar1 = (*param_1 + 0x74);
    (**ppcVar1)(SEG_1008, param_1);
    return;
}


void pass1_1040_89a4(Globals    *globals,
                     u32        *param_1,
                     u16        *param_2,
                     u8         *param_3,
                     i16         param_4,
                     WNDCLASS16 *param_5)

{
    u16    uVar1;
    u16    u_var2;
    void **ppcVar3;
    u16    uVar4;
    u16    uVar5;
    u16    uVar6;
    u16   *puVar7;

    unk_win_msg_op_1008_9510(globals->dat_1050_5df4, SEG_1008, param_5);
    uVar1  = (param_2 + 0x2);
    u_var2  = *param_2;
    uVar6  = SEG_1010;
    puVar7 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_5, param_3, param_4);
    uVar5  = (puVar7 >> 0x10);
    uVar4  = puVar7;
    if((uVar4 + 0x72) != 0x0)
    {
        uVar6 = SEG_1008;
        win_1008_5c7c(
          NULL, globals->_PTR_LOOP_1050_02a0, str_var1(uVar1, u_var2), param_5, uVar4);
        (param_1 + 0x8c) = uVar4;
    }
    ppcVar3 = (*param_1 + 0x74);
    (**ppcVar3)(uVar6, param_1);
    return;
}

void win_1008_5c7c(Globals *globals, u16 param_1, u16 param_2, u32 param_3, u32 param_4)

{
    pass1_1010_85be(globals->dat_1050_14cc, param_4, 0);
    win_ui_op_1008_5cfe(globals,param_3, str_var1(param_2,param_1),0x1050);
}


HANDLE16 create_window_1040_8bea(Globals *globals,
                                 u32      param_1,
                                 u16      param_2,
                                 i16      param_3,
                                 u16      param_4,
                                 HMENU16  hmenu_arg5)

{
    HANDLE16 handle_var1;
    LPCSTR   class_name;
    LRESULT  lresult_var3;
    HWND16   parent;
    u32      hinstance_var5;

    hinstance_var5 = 0x50010000;
    if(param_3 != 0x0)
    {
        hinstance_var5 = 0x50010001;
    }
    if((param_1 + 0x74) != 0x0)
    {
        hinstance_var5 = hinstance_var5 | 0x8000000;
    }
    CreateWindow16(class_name, 0x0, globals->hinst_1050_038c, param_4, (param_1 + 0x6), 0x17, 0x58,
                   parent,
                   hmenu_arg5, (HINSTANCE16)hinstance_var5,0);
    handle_var1 = GetProp16((HWND16)LAST_SEGMENT, get_rsrc_string(0x5e09));
    if(handle_var1 != 0x0)
    {
        lresult_var3
          = SendMessage16((HWND16)LAST_SEGMENT, 0x1, 0x0, str_var1(0x30, handle_var1));
        handle_var1 = lresult_var3;
    }
    return handle_var1;
}


void mixed_struct_op_1040_8fb8(Globals  *globals,
                               Struct65 *param_1,
                               u16       param_2,
                               char     *param_3,
                               u16       param_4,
                               u32       param_5,
                               u32       param_6,
                               u16       param_7,
                               u16       param_8,
                               u16       param_9)
{
    u16 uVar1;
    u16 u_var2;
    LPVOID pvVar3;
//    i16 iVar4;
//    u16 uVar5;
    Struct43 *paVar6;

//    uVar5 = (param_1 >> 0x10);
//    iVar4 = param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (param_1->field_0x2) = SEG_1008;
    (param_1->field_0x4) = 0x0;
    (param_1->field_0x8) = 0x0;
    (param_1->field_0xc) = 0x0;
    (param_1->field_0x10) = 0x0;
    (param_1->field_0x14) = 0x0;
    (param_1->field_0x18) = 0x0;
    (param_1->field_0x1a) = param_8;
    (param_1->field_0x1c) = param_7;
    (param_1->field_0x36) = 0x5;
    (param_1->field_0x38) = 0x0;
    param_1->field_0x3a   = 0x0;
    param_1->field_0x3c   = 0x2;
    (param_1->field_0x3e) = 0x0;
    (param_1->field_0x40) = param_2;
    param_1->field_0x0 = addr_table_1040_9800;//0x9800;
    (param_1->field_0x2) = SEG_1040;
    uVar1 = (param_1->field_0x36);
    (param_1->field_0x28) = uVar1;
    (param_1->field_0x26) = uVar1;
    (param_1->field_0x2c) = 0x0;
    (param_1->field_0x2a) = 0x0;
    if ((param_6 != 0x0) && (param_5 != 0x0)) {
        param_1->field_0x38 = 0x1;
        paVar6 = unk_io_op_1010_830a(globals->dat_1050_14cc, param_6, param_11);
        param_1->field_0x8 = paVar6;
        param_1->field_0xa = (paVar6 >> 0x10);
        param_10       = SEG_1010;
        paVar6         = unk_io_op_1010_830a(globals->dat_1050_14cc, param_5, param_11);
        param_9        = (paVar6 >> 0x10);
        (param_1->field_0xc)  = paVar6;
        (param_1->field_0xe)  = param_9;
        if(param_4 == 0x0)
        {
            (param_1 + 0x10) = 0x0;
        }
        else
        {
            param_10       = SEG_1010;
            paVar6         = unk_io_op_1010_830a(globals->dat_1050_14cc, param_4, param_11);
            param_9        = (paVar6 >> 0x10);
            (param_1->field_0x10) = paVar6;
            (param_1->field_0x12) = param_9;
        }
    }
    uVar1          = (param_1->field_0x36);
    (param_1->field_0x30) = uVar1;
    (param_1->field_0x2e) = uVar1;
    (param_1->field_0x32) = 0x0;
    if(param_3 != 0x0)
    {
        param_10      = SEG_1008;
        u_var2         = str_op_1008_60e8(param_3);
        (param_1->field_0x4) = u_var2;
        (param_1->field_0x6) = param_9;
    }
    (param_1->field_0x22) = 0x0;
    (param_1->field_0x1e) = 0x0;
    (param_1->field_0x20) = 0x0;
    if(globals->dat_1050_5e18 == 0x0)
    {
        pvVar3              = MakeProcInstance16(param_10, globals->hinst_1050_038c);
        globals->dat_1050_5e18 = str_var1(param_9, pvVar3);
    }
    globals->dat_1050_5e16 = globals->dat_1050_5e16 + 0x1;
}


void  mix_win_ui_op_1040_911e(u16 *param_1) {
    u32 * puVar1;
    u16 u_var2;
    u32 uVar3;
    void **ppcVar4;
    i16 iVar5;
    u16 uVar6;

    uVar6 = (param_1 >> 0x10);
    iVar5 = param_1;
    param_1->field_0x0 = addr_table_1040_9800;//0x9800;
    (iVar5 + 0x2) = SEG_1040;
    if ((iVar5 + 0x38) != 0x0) {
        puVar1 = (iVar5 + 0x8);
        u_var2 = (iVar5 + 0xa);
        if ((u_var2 | puVar1) != 0x0) {
            ppcVar4 = *puVar1;
            (**ppcVar4)();
        }
        puVar1 = (iVar5 + 0xc);
        u_var2  = (iVar5 + 0xe);
        if((u_var2 | puVar1) != 0x0)
        {
            ppcVar4 = *puVar1;
            (**ppcVar4)();
        }
        puVar1 = (iVar5 + 0x10);
        u_var2  = (iVar5 + 0x12);
        if((u_var2 | puVar1) != 0x0)
        {
            ppcVar4 = *puVar1;
            (**ppcVar4)();
        }
    }
    fn_ptr_1000_17ce((iVar5 + 0x4), SEG_1000);
    uVar3 = (iVar5 + 0x14);
    SetWindowLong16(SEG_1000, (u16)uVar3, str_var1(0xfffc, (uVar3 >> 0x10)));
    RemoveProp16((HWND16)LAST_SEGMENT, globals->s_thisLo_1050_5e1c);
    RemoveProp16((HWND16) LAST_SEGMENT, globals->s_thisHi_1050_5e23);
    RemoveProp16((HWND16) LAST_SEGMENT, globals->s_procLo_1050_5e2a);
    RemoveProp16((HWND16) LAST_SEGMENT, globals->s_procHi_1050_5e31);
    RemoveProp16((HWND16) LAST_SEGMENT, 0x5e38);
    globals->dat_1050_5e16 = globals->dat_1050_5e16 + -0x1;
    if (dat_1050_5e16 == 0x0) {
        FreeProcInstance16(LAST_SEGMENT);
        globals->dat_1050_5e18 = 0x0;
    }
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar5 + 0x2) = SEG_1008;
}


void  enable_win_1040_9234(u32 param_1, BOOL16 param_2, HWND16 param_3)

{
    if((param_1 + 0x18) != 0x0)
    {
        EnableWindow16(param_3, param_2);
    }
    return;
}


LRESULT  pass1_1040_93e6(u32 param_1, HWND16 param_2)

{
    LRESULT LVar1;

    LVar1 = SendMessage16(param_2, 0x0, 0x0, str_var1(0x111, (param_1 + 0x1c)));
    return LVar1;
}


LRESULT  send_msg_1040_9404(u32 param_1, HWND16 param_2)

{
    LRESULT LVar1;

    LVar1 = SendMessage16(param_2, 0x0, 0x0, str_var1(0x111, (param_1 + 0x1c)));
    return LVar1;
}


void win_ui_get_prop_op_1040_9566(i16 *param_1, HWND16 param_2)

{
    u16         uVar1;
    i16         iVar2;
    void **ppcVar3;
    HANDLE16    HVar4;
    HANDLE16    HVar5;
    i16         iVar6;
    u16         uVar7;
    u16         uVar8;
    u16         uVar9;
    u32 *puStack12;

    uVar7 = (param_1 >> 0x10);
    iVar6 = param_1;
    if (param_1->field_0x0 == 0x4) {
        uVar1 = (iVar6 + 0xc);
        uVar9 = (iVar6 + 0xa);
        HVar4 = GetProp16(param_2, s_thisHi_1050_5e6f);
        uVar8 = (iVar6 + 0xa);
        HVar5 = GetProp16((HWND16) LAST_SEGMENT, s_thisLo_1050_5e68);
        puStack12 = str_var1(HVar4, HVar5);
        if ((HVar4 | HVar5) != 0x0) {
            iVar2 = (iVar6 + 0x6);
            if(iVar2 == 0x1)
            {
                ppcVar3 = (*puStack12 + 0xc);
                (**ppcVar3)(LAST_SEGMENT, HVar5, HVar4, (iVar6 + 0x8), uVar1, uVar8, uVar9);
                return;
            }
            if(iVar2 == 0x2)
            {
                ppcVar3 = (*puStack12 + 0x10);
                (**ppcVar3)(LAST_SEGMENT, HVar5, HVar4, (iVar6 + 0x8), uVar1);
                return;
            }
            if(iVar2 == 0x4)
            {
                ppcVar3 = (*puStack12 + 0x18);
                (**ppcVar3)(LAST_SEGMENT, HVar5, HVar4, *(u8 *)(iVar6 + 0x8) & 0x10, uVar1);
                return;
            }
        }
    }
    return;
}


// WARNING: Unable to use type for symbol var11
// WARNING: Unable to use type for symbol var7
// WARNING: Unable to use type for symbol var8

void  call_win_proc_1040_9684(HWND16 win_handle_1, u16 param_2, WPARAM16 w_param_1, LPARAM l_param_1, HWND16 win_handle_2, u16 param_6)

{
    HANDLE16   handle_1;
    HANDLE16   handle_2;
    BOOL16     bool_1;
    RECT16     local_1a[0x2];
    u32       *var18;
    u32       *var14;
    u32       *var10;
    i32        var6;
    u32        var2;
    u16        var4;
    u16        var11;
    u16        var7;
    u16        var8;
    u16        var9;
    void **fn_ptr_1;
    RECT16    *rect_1;
    u32 var3;
    u16        var5;

    var9     = SEG_1050;
    var8     = l_param_1;
    handle_1 = GetProp16(win_handle_2, s_procHi_1050_5e7d);
    var7     = l_param_1;
    handle_2 = GetProp16((HWND16)LAST_SEGMENT, s_procLo_1050_5e76);
    var6     = str_var1(handle_1, handle_2);
    var11    = l_param_1;
    handle_1 = GetProp16((HWND16)LAST_SEGMENT, s_thisHi_1050_5e8b);
    var5     = l_param_1;
    handle_2 = GetProp16((HWND16)LAST_SEGMENT, s_thisLo_1050_5e84);
    var10    = str_var1(handle_1, handle_2);
    if((handle_1 | handle_2) != 0x0)
    {
        if(l_param_1 == 0x2)
        {
            var18 = var10;
            var14 = var10;
            if(var10 != 0x0)
            {
                fn_ptr_1 = *var10;
                (**fn_ptr_1)(LAST_SEGMENT, handle_2, handle_1, 0x1, var5, var11, var7, var8, var9);
            }
        }
        else
        {
            if(l_param_1 == 0x201)
            {
                handle_1 = GetProp16((HWND16)LAST_SEGMENT, 0x5e92);
                if(handle_1 == 0x0)
                {
                    var5 = (var10 + 0x18);
                    GetClientRect16((HWND16)LAST_SEGMENT, local_1a);
                    rect_1 = local_1a;
                    var2   = str_var1(var5, param_6);
                    bool_1 = PtInRect16((RECT16 *)LAST_SEGMENT, (POINT16)CONCAT13((param_2 >> 0x8), CONCAT12(param_2, win_handle_1)));
                    if(bool_1 == 0x0)
                    {
                        return;
                    }
                    debug_pri16_1008_6048(str_var1(param_6, 0x5e98), SEG_1008, param_6);
                    fn_ptr_1 = (*var10 + 0x1c);
                    (**fn_ptr_1)(SEG_1008, var10, (var10 >> 0x10), param_2, win_handle_1, w_param_1, rect_1, var2, l_param_1);
                    return;
                }
            }
            else
            {
                if(l_param_1 == 0x204)
                {
                    var4 = *(handle_2 + 0x18);
                    GetClientRect16((HWND16)LAST_SEGMENT, local_1a);
                    var3   = str_var1(param_6, local_1a);
                    bool_1 = PtInRect16((RECT16 *)LAST_SEGMENT, (POINT16)str_var1(param_2, win_handle_1));
                    if(bool_1 == 0x0)
                    {
                        return;
                    }
                    debug_pri16_1008_6048(str_var1(param_6, 0x5eab), SEG_1008, param_6);
                    fn_ptr_1 = (*var10 + 0x20);
                    (**fn_ptr_1)(SEG_1008, var10, (var10 >> 0x10), param_2, win_handle_1, w_param_1, var3, var4);
                    return;
                }
            }
        }
    }
    if(var6 != 0x0)
    {
        CallWindowProc16(LAST_SEGMENT, win_handle_1, param_2, w_param_1, l_param_1);
    }
    return;
}


u16 * pass1_1040_97da(u16 *param_1, u8 param_2)

{
    mix_win_ui_op_1040_911e(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}


Struct57 * pass1_1040_8478(Struct57 *param_1, u16 param_2, char *param_3, char *param_4, u16 param_5, u16 param_6)

{
    u16          uVar1;
    Struct712 *iVar2;
    u16 u_var2;

    get_sys_metrics_1040_7728(param_1, 0x1, 0x0, 0xfc3, param_5);
    u_var2 = (param_1 >> 0x10);
    iVar2 = (Struct712 *) param_1;
    iVar2->field_0x8e = 0x0;
    iVar2->field_0x98 = param_2;
    iVar2->field_0x9a = 0x0;
    iVar2->field_0xb2 = 0x0;
    param_1 = addr_table_1040_8ddc;//0x8ddc;
    iVar2->fld2_segment = SEG_1040;
    iVar2->field_9e = 0x0;
    iVar2->field_0xa2 = 0x12c;
    uVar1 = str_op_1008_60e8(param_4);
    iVar2->field_0x90 = uVar1;
    iVar2->field_0x92 = param_6;
    uVar1 = str_op_1008_60e8(param_3);
    iVar2->field_0x94 = uVar1;
    iVar2->field_0x96 = param_6;
    load_icon_1040_8b92(param_1, SEG_1008);
    globals->dat_1050_5df8 = 0x0;
    return param_1;
}


void  check_dialog_msg_1040_81b6(u32 param_1, HWND16 param_2)

{
    BOOL16 BVar1;
    MSG16  local_14;

    (param_1 + 0x78) = 0x1;
    while(true)
    {
        BVar1 = IsWindow16(param_2);
        if(BVar1 == 0x0)
        {
            return;
        }
        BVar1 = GetMessage16(LAST_SEGMENT, 0x0, 0x0, 0x0);
        if(BVar1 == 0x0)
            break;
        param_2 = (HWND16)LAST_SEGMENT;
        IsDialogMessage16((HWND16)LAST_SEGMENT, &local_14);
    }
    return;
}


void  unk_win_ui_op_1040_8158(u32 *param_1, POINT16 param_2, i16 param_3, HWND16 param_4)

{
    void **ppcVar1;
    u16   IVar2;
    BOOL16  BVar3;
    u32     uVar4;
    i16     iVar5;
    u16     uVar6;
    u16     uVar7;
    POINT16 local_6;

    if(param_3 == 0x2)
    {
        uVar6 = (param_1 >> 0x10);
        iVar5 = param_1;
        if((iVar5 + 0x76) != 0x0)
        {
            local_6 = param_2;
            uVar6   = (iVar5 + 0x6);
            ScreenToClient16(param_4, &local_6);
            uVar7   = 0x4;
            IVar2   = GetSystemMetrics16((u16)LAST_SEGMENT);
            local_6 = (POINT16)(local_6 & 0xffff | (local_6.y + IVar2) << 0x10);
            uVar4   = param_1 & 0xffff0000 | (iVar5 + 0x82);
            BVar3   = PtInRect16((RECT16 *)LAST_SEGMENT, local_6);
            if(BVar3 != 0x0)
            {
                ppcVar1 = (*param_1 + 0x14);
                (**ppcVar1)(LAST_SEGMENT, param_1, 0x0, uVar4, uVar7, uVar6);
            }
        }
    }
    return;
}


void  win_help_1040_800c(u32 param_1, u16 param_2)

{
    u16         uVar1;
    Struct43 *p_var2;
    LPCSTR      lp_help_file;
    u16         w_command;
    u16         uVar3;

    p_var2 = unk_io_op_1010_830aglobals->dat_1050_14cc, 0x1f8, param_2);
    uVar1  = (param_1 >> 0x10);
    if((param_1 + 0x8a) == 0x0)
    {
        w_command    = 0x0;
        uVar3        = 0x3;
        lp_help_file = 0x0;
    }
    else
    {
        uVar3        = 0x1;
        lp_help_file = *(LPCSTR *)(param_1 + 0x8a);
        w_command    = lp_help_file >> 0xf;
    }
    WinHelp16(SEG_1010, lp_help_file, w_command, str_var1(p_var2, uVar3));
    return;
}


void  destroy_win_1040_7b98(u32 param_1, HWND16 param_2)

{
    if((param_1 + 0x74) == 0x0)
    {
        DestroyWindow16(param_2);
    }
    return;
}


BOOL16  post_win_msg_1040_7b3c(u32 *param_1, u16 param_2, u16 param_3, i16 param_4, HWND16 param_5)

{
    fn_ptr_1 *ppcVar1;

    if((param_4 == 0x1) || (param_4 == 0x2))
    {
        ppcVar1 = (*param_1 + 0x14);
        (**ppcVar1)();
    }
    else
    {
        if(param_4 == 0x6f)
        {
            ppcVar1 = (*param_1 + 0x2c);
            (**ppcVar1)(param_5, param_1);
        }
        else
        {
            if(param_4 != 0x12e)
            {
                return 0x0;
            }
            PostMessage16(param_5, 0x0, 0x0, 0x112f060);
        }
    }
    return 0x1;
}


void  ui_cleanup_op_1040_782c(Struct18 *param_1, HGDIOBJ16 param_2)

{
    u32 * puVar1;
    u16 u_var2;
    void **ppcVar3;
    i16 iVar4;
    u16 uVar5;
    HGDIOBJ16 menu;
    HMENU16 hwnd;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    param_1->field_0x0 = addr_table_1040_840c;//0x840c;
    (iVar4 + 0x2) = SEG_1040;
    puVar1 = (iVar4 + 0x70);
    u_var2 = (iVar4 + 0x72);
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)(param_2, puVar1, u_var2, 0x1);
    }
    menu = param_2;
    if ((iVar4 + 0x4) != 0x0)
    {
        menu = (HGDIOBJ16)LAST_SEGMENT;
        DeleteObject16(param_2);
        (iVar4 + 0x4) = 0x0;
    }
    hwnd = menu;
    if((iVar4 + 0x68) != 0x0)
    {
        hwnd = (HMENU16)LAST_SEGMENT;
        DestroyMenu16(menu);
    }
    RemoveProp16(hwnd, s_thisLo_1050_5db1);
    RemoveProp16((HWND16)LAST_SEGMENT, s_thisHi_1050_5db8);
    RemoveProp16((HWND16)LAST_SEGMENT, s_procLo_1050_5dbf);
    RemoveProp16((HWND16)LAST_SEGMENT, s_procHi_1050_5dc6);
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar4 + 0x2)      = SEG_1008;
    return;
}


void create_window_1040_7620(Globals *globals,
                             u32      param_1,
                             i16      param_2,
                             HMENU16 *in_menu_handle,
                             u16      param_4,
                             u16      param_5)

{
    i16         iVar1;
    u16         u_var2;
    HINSTANCE16 h_instance;

    load_string_1010_847e(globals->dat_1050_14cc, SEG_1010);
    h_instance = 0x50000009;
    if(param_2 != 0x0)
    {
        h_instance = 0x50020009;
    }
    u_var2 = (in_menu_handle >> 0x10);
    iVar1 = in_menu_handle;
    CreateWindow16(SEG_1010, 0x0, globals->hinst_1050_038c, param_5, (param_1 + 0x6), (iVar1 + 0x6), (iVar1 + 0x4), *(HWND16 *)(iVar1 + 0x2), *in_menu_handle, (HINSTANCE16)h_instance, 0);
}


void  post_win_msg_1040_7f56(u32 param_1, char *param_2)

{
    unk_str_op_1000_3d3e(param_1, param_2);
    PostMessage16(SEG_1000, 0x0, 0x0, 0x850000);
}


BOOL16  post_win_msg_1040_7f1c(u32 param_1, i16 param_2, HWND16 param_3)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((iVar1 + 0x78) != 0x0)
    {
        return 0x0;
    }
    if((iVar1 + 0x60) != param_2)
    {
        (iVar1 + 0x60) = param_2;
        PostMessage16(param_3, 0x0, 0x0, 0x850000);
    }
    return 0x1;
}


void win_ui_op_1040_6d1a(Globals *globals,
                         i16      param_1,
                         u16      param_2,
                         u16      param_3,
                         u32      param_4)

{
    void **ppcVar1;
    u32 u_var2;
    u8        *in_DX;
    u16        unaff_SS;
    i16        iVar3;
    RECT16     local_a;
    i16        iStack6;
    i16        iStack4;

    switch(param_4)
    {
    case 0xfa:
        ppcVar1 = ((param_1 + 0x94) + 0x18);
        (**ppcVar1)();
        break;
    default:
        pass1_1040_b54a(globals, param_1, param_2, param_3, param_4, in_DX, &SEG_1040, unaff_SS);
        return;
    case 0xfd:
        if(globals->dat_1050_0ecc == 0x0)
        {
            return;
        }
        DAT_1050_0ecc = 0x0;
        goto LAB_1040_6deb;
    case 0xfe:
        if(globals->dat_1050_0ecc == 0x1)
        {
            return;
        }
        DAT_1050_0ecc = 0x1;
        goto LAB_1040_6deb;
    case 0xff:
        if(globals->dat_1050_0ecc == 0x2)
        {
            return;
        }
        globals->dat_1050_0ecc = 0x2;
    LAB_1040_6deb:
        u_var2   = (param_1 + 0x94);
        ppcVar1 = ((param_1 + 0x94) + 0x10);
        (**ppcVar1)(&SEG_1040, u_var2, (u_var2 >> 0x10));
        pass1_1010_2ee2((param_1 + 0x94), unaff_SS, SEG_1010);
        PostMessage16(SEG_1010, 0x0, 0x0, 0x111010a);
        break;
    case 0x107:
        iVar3 = 0x0;
        goto LAB_1040_6e48;
    case 0x108:
        iVar3 = 0x1;
    LAB_1040_6e48:
        win_ui_op_1010_3202(*(param_1 + 0x94), iVar3, SEG_1010);
        break;
    case 0x10a:
        GetClientRect16((HWND16)&SEG_1040, &local_a);
        u_var2     = (param_1 + 0x94);
        local_a.y = local_a.y + 0x3;
        local_a.x = (u_var2 + 0x1a) + -0x9;
        iStack6   = iStack6 + -0x3;
        iStack4   = iStack4 + -0x3;
        InvalidateRect16((HWND16)LAST_SEGMENT, (RECT16 *)(&globals->PTR_LOOP_1050_0000 + 0x1), (BOOL16)&local_a);
        unk_destroy_win_op_1010_2fa0(*(param_1 + 0x94), SEG_1010);
        pass1_1010_32c0(*(param_1 + 0x94), 0x0);
        pass1_1010_2ee2((param_1 + 0x94), unaff_SS, SEG_1010);
        break;
    case 0x10c:
        DestroyWindow16((HWND16)&SEG_1040);
    }
    return;
}


void create_window_1040_6eae(Globals *globals,
                             u32      param_1,
                             i16      param_2,
                             HMENU16 *in_menu_handle,
                             u16      param_4,
                             u16      param_5)

{
    i16         iVar1;
    u16         u_var2;
    HINSTANCE16 h_instance;

    load_string_1010_847e(globals->dat_1050_14cc, SEG_1010);
    h_instance = 0x50000009;
    if(param_2 != 0x0)
    {
        h_instance = 0x50020009;
    }
    u_var2 = (in_menu_handle >> 0x10);
    iVar1 = in_menu_handle;
    CreateWindow16(SEG_1010, 0x0, ZEXT24(globals->hinst_1050_038c) << 0x10, param_5, (param_1 + 0x6), (iVar1 + 0x6), (iVar1 + 0x4), *(HWND16 *)(iVar1 + 0x2), *in_menu_handle, (HINSTANCE16)h_instance, 0);
}


LRESULT  send_msg_1040_4cb2(u32 param_1, HWND16 param_2)

{
    u8      uVar1;
    HWND16  HVar1;
    u16     in_DX;
    u32     u_var2;
    LRESULT LVar2;
    u16     uVar3;
    u16     uVar4;

    pass1_1040_b45e(param_1, param_2);
    HVar1 = GetDlgItem16(param_2, 0x1770);
    uVar3 = 0xffff;
    uVar4 = 0x40d;
    pass1_1040_4d7e(param_1);
    u_var2 = pass1_1040_4dcc(param_1, HVar1, in_DX);
    LVar2 = SendMessage16((HWND16)LAST_SEGMENT, u_var2, (WPARAM16)(u_var2 >> 0x10), str_var1(uVar4, uVar3));
    return LVar2;
}


void  pass1_1040_4cf4(u32 param_1, HWND16 param_2, u16 param_3)

{
    u32 uVar1;
    u32 u_var2;
    u16        uVar3;
    i16        iVar4;
    i16        iVar5;
    i16        unaff_DI;
    u16        uVar6;
    u16        uVar7;
    LRESULT    LVar8;
    u8         local_52[0x50];

    uVar6 = (param_1 >> 0x10);
    iVar4 = param_1;
    GetDlgItem16(param_2, 0x1770);
    LVar8 = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x4070000);
    uVar3 = (LVar8 >> 0x10);
    if(LVar8 != -0x1)
    {
        LVar8 = SendMessage16((HWND16)LAST_SEGMENT, local_52, param_3, str_var1(0x408, LVar8));
        uVar3 = (LVar8 >> 0x10);
    }
    u_var2 = (iVar4 + 0x90);
    uVar1 = (iVar4 + 0x94);
    uVar3 = pass1_1010_ae12(uVar1, (uVar1 >> 0x10), str_var1(param_3, local_52), (u_var2 + 0xa), uVar3);
    if(uVar3 != 0xffff)
    {
        uVar1 = (iVar4 + 0x90);
        uVar7 = (uVar1 >> 0x10);
        iVar5 = uVar1;
        pass1_1010_ae92(*(iVar4 + 0x94), uVar3, (iVar5 + 0xa), *(iVar5 + 0x6), unaff_DI, param_3);
    }
    return;
}


u16  pass1_1040_4f28(u32 *param_1, i16 *param_2, u16 param_3, u16 param_4, i16 param_5, u16 param_6)

{
    fn_ptr_1 *ppcVar1;
    u16       u_var2;

    if(param_5 == 0x2b)
    {
        if(*param_2 == 0x4)
        {
            win_ui_get_prop_op_1040_9566(str_var1(param_3, param_2), param_6);
        }
    }
    else
    {
        if(param_5 != 0x111)
        {
            u_var2 = pass1_1040_b316(param_1, param_2, param_3, param_4, param_5);
            return u_var2;
        }
        ppcVar1 = (*param_1 + 0x7c);
        (**ppcVar1)(param_6, param_1, param_2, str_var1(param_4, param_3));
    }
    return 0x1;
}


void  set_win_pos_1040_4f96(Struct1 *param_1, u16 param_2, u16 param_3, u8 *param_4)

{
    u32         *puVar1;
    void **ppcVar2;
    u16          uVar3;
    u32          uVar4;
    Struct160 *paVar5;
    u16          uVar6;
    u16          uVar7;
    i16          iVar8;
    u8          *extraout_DX;
    u8          *puVar9;
    u8          *puVar10;
    u16          uVar11;
    u16          uVar12;
    Struct443 *iVar11;
    i16          unaff_DI;
    u16          uVar13;
    u16          uVar14;
    u16         *puVar15;
    BOOL16       BVar16;

    dialog_ui_fn_1040_78e2(param_1, param_2);
    puVar15                              = mixed_1010_20ba(globals->u16_1050_0ed0, 0x41, param_3, param_4, unaff_DI);
    uVar14                               = (puVar15 >> 0x10);
    paVar5                               = (Struct160 *)puVar15;
    uVar13                               = (param_1 >> 0x10);
    iVar11                               = (Struct443 *)param_1;
    *(Struct160 **)&iVar11->field_0x98 = paVar5;
    (&iVar11->field_0x98 + 0x2)          = uVar14;
    ppcVar2                              = (*iVar11->field_0x98 + 0x10);
    (**ppcVar2)(SEG_1010, &iVar11->field_0x98, uVar14);
    puVar10 = extraout_DX;
    mem_op_1000_179c(0xa, extraout_DX, 0);
    puVar9 = (puVar10 | paVar5);
    if(puVar9 == 0x0)
    {
        iVar11->field_0x94 = 0x0;
    }
    else
    {
        puVar15                              = struct_1040_bf3e(str_var1(puVar10, paVar5), iVar11->field_0x6);
        puVar9                               = (puVar15 >> 0x10);
        paVar5                               = (Struct160 *)puVar15;
        *(Struct160 **)&iVar11->field_0x94 = paVar5;
        (&iVar11->field_0x94 + 0x2)          = puVar9;
    }
    pass1_1040_bfde(iVar11->field_0x94, iVar11->field_0x98, param_3);
    mem_op_1000_179c(0x42, puVar9, 0);
    puVar10 = (puVar9 | paVar5);
    if(puVar10 != 0x0)
    {
        pass1_1008_3bd6(paVar5, puVar9, 0x1, 0xa000a, 0x0, 0x800081,
                        str_var1(iVar11->field_0x6, 0x10a), puVar10, param_3);
    }
    mem_op_1000_179c(0x42, puVar10, 0);
    puVar9 = (puVar10 | paVar5);
    if(puVar9 != 0x0)
    {
        pass1_1008_3bd6(paVar5, puVar10, 0x1, 0xa0028, 0x0, 0x840085,
                        str_var1(iVar11->field_0x6, 0x10b), puVar9, param_3);
    }
    mem_op_1000_179c(0x42, puVar9, 0);
    puVar10 = (puVar9 | paVar5);
    if(puVar10 != 0x0)
    {
        pass1_1008_3bd6(paVar5, puVar9, 0x1, 0xa0046, 0x0, 0x860087,
                        str_var1(iVar11->field_0x6, 0x10d), puVar10, param_3);
    }
    mem_op_1000_179c(0x42, puVar10, 0);
    puVar9 = (puVar10 | paVar5);
    if(puVar9 != 0x0)
    {
        pass1_1008_3bd6(paVar5, puVar10, 0x1, 0xa0064, 0x0, 0x880089,
                        str_var1(iVar11->field_0x6, 0x10e), puVar9, param_3);
    }
    mem_op_1000_179c(0x42, puVar9, 0);
    puVar10 = (puVar9 | paVar5);
    if(puVar10 != 0x0)
    {
        pass1_1008_3bd6(paVar5, puVar9, 0x1, 0xa0082, 0x0, 0x820083,
                        str_var1(iVar11->field_0x6, 0x10c), puVar10, param_3);
    }
    mem_op_1000_179c(0x42, puVar10, 0);
    puVar9 = (puVar10 | paVar5);
    if(puVar9 != 0x0)
    {
        pass1_1008_3bd6(paVar5, puVar10, 0x1, 0xa00d2, 0x0, 0x8a008b,
                        str_var1(iVar11->field_0x6, 0xbbb), puVar9, param_3);
    }
    BVar16 = 0x42;
    uVar14 = SEG_1000;
    mem_op_1000_179c(0x42, puVar9, 0);
    puVar10 = (puVar9 | paVar5);
    if(puVar10 == 0x0)
    {
        paVar5  = (Struct160 *)0x0;
        puVar10 = 0x0;
    }
    else
    {
        uVar14 = SEG_1008;
        pass1_1008_3bd6(paVar5, puVar9, 0x1, 0xa00a0, 0x8e, 0x8c008d,
                        str_var1(iVar11->field_0x6, 0xbbc), puVar10, param_3);
    }
    puVar9 = puVar10;
    enable_win_1040_9234(str_var1(puVar10, paVar5), BVar16, uVar14);
    puVar15 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_3, puVar9, unaff_DI);
    uVar11  = (puVar15 >> 0x10);
    uVar3   = puVar15;
    uVar12  = uVar11;
    uVar6   = pass1_1010_a5ac(uVar3, uVar11, iVar11->field_0xb0);
    uVar7   = pass1_1010_ac62(uVar3, uVar11, 0x1e, uVar6, uVar12);
    if(uVar7 != 0x0)
    {
        pass1_1010_a5ca(uVar3, uVar11, uVar6, uVar7, uVar12);
        if(0x0 < uVar7)
        {
            pass1_1010_a58a(uVar3, uVar11, uVar6, uVar7, uVar12);
            if(uVar7 == 0x0)
            {
                enable_win_1040_9234(str_var1(puVar10, paVar5), 0x1, SEG_1010);
            }
        }
    }
    puVar1 = iVar11->field_0x98;
    iVar8  = puVar1;
    uVar4  = puVar1 & 0xffff0000;
    uVar14 = (uVar4 >> 0x10);
    SetWindowPos16(SEG_1010, 0x40, (iVar8 + 0x10), (iVar8 + 0xe), (iVar8 + 0xc), (uVar4 | iVar8 + 0xa), 0x0);
    return;
}


void  destroy_win_1040_5256(Struct34 *param_1, HWND16 param_2)

{
    u32        *pUVar1;
    u16         u_var2;
    void **ppcVar3;
    BOOL16      BVar4;
    Struct34 *iVar5;
    u16         uVar5;
    HWND16      HVar6;

    uVar5 = (param_1 >> 0x10);
    iVar5 = (Struct34 *)param_1;
    HVar6 = param_2;
    if(iVar5->field_0xb6 != 0x0)
    {
        HVar6 = (HWND16)LAST_SEGMENT;
        BVar4 = IsWindow16(param_2);
        if(BVar4 != 0x0)
        {
            HVar6 = (HWND16)LAST_SEGMENT;
            DestroyWindow16((HWND16)LAST_SEGMENT);
        }
    }
    iVar5->field_0xb6 = 0x0;
    pUVar1            = iVar5->field_0x94;
    u_var2             = iVar5->field_0x96;
    if((u_var2 | pUVar1) != 0x0)
    {
        ppcVar3 = *pUVar1;
        (**ppcVar3)(HVar6, pUVar1, u_var2, 0x1);
    }
    &iVar5->field_0x94 = 0x0;
    iVar5->field_0x98  = 0x0;
    return;
}


void  win_ui_op_1040_52c0(i16 param_1, u16 param_2, u16 param_3, u32 param_4, HWND16 param_5, u16 param_6)

{
    void **ppcVar1;
    BOOL16     BVar2;
    i16        iVar3;
    u16        uVar4;
    u8        *in_DX;
    u16        uVar5;
    u16        uVar6;
    u16        uVar7;
    i16        unaff_DI;
    u16       *puVar8;
    u16       *puVar9;
    u32 uVar10;
    u16        uVar11;
    u16        uVar12;
    u16        uVar13;
    u16        uStack30;
    RECT16     local_a;
    i16        iStack6;
    i16        iStack4;

    if(param_4 != 0x10c)
    {
        if(param_4 < 0x10d)
        {
            if(param_4 == 0xfa)
            {
                uVar10  = (param_1 + 0x98);
                ppcVar1 = ((param_1 + 0x98) + 0x18);
                (**ppcVar1)(param_5, uVar10, (uVar10 >> 0x10), 0x0, globals->_PTR_LOOP_1050_5efe, (globals->_PTR_LOOP_1050_5efe >> 0x10));
                return;
            }
            if(param_4 == 0x10a)
            {
                GetClientRect16(param_5, &local_a);
                uVar10    = (param_1 + 0x98);
                local_a.y = local_a.y + 0x3;
                local_a.x = (uVar10 + 0x1a) + -0x9;
                iStack6   = iStack6 + -0x3;
                iStack4   = iStack4 + -0x3;
                InvalidateRect16((HWND16)LAST_SEGMENT, (RECT16 *)(&PTR_LOOP_1050_0000 + 0x1), (BOOL16)&local_a);
                unk_destroy_win_op_1010_2fa0(*(param_1 + 0x98), SEG_1010);
                pass1_1010_32c0(*(param_1 + 0x98), 0x0);
                pass1_1010_2ee2((param_1 + 0x98), param_6, SEG_1010);
                return;
            }
            if(param_4 != 0x10b)
                goto LAB_1040_5560;
            uVar10 = (param_1 + 0x98);
            uVar11 = (uVar10 + 0x12);
            uVar6  = uVar11;
            puVar8 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_6, in_DX, unaff_DI);
            uVar5  = (puVar8 >> 0x10);
            puVar9 = puVar8;
            pass1_1010_a5ca(puVar8, uVar5, uVar6, puVar8, uVar5);
            uVar6 = (puVar9 >> 0x10);
            if((uVar11 != 0x70) && (puVar9 == 0x0))
            {
                return;
            }
            uVar10 = (param_1 + 0xb0);
            uVar12 = uVar10;
            uVar13 = (uVar10 >> 0x10);
            uVar10 = (param_1 + 0x98);
            uVar11 = (uVar10 + 0x12);
        }
        else
        {
            if(param_4 != 0x10d)
            {
                if(param_4 == 0x10e)
                {
                    puVar8 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x32, param_6, in_DX, unaff_DI);
                    iVar3  = puVar8;
                    ui_op_1010_79aa(puVar8, 0xfc6, (param_1 + 0xb0), param_6);
                    if(iVar3 != 0x0)
                    {
                        return;
                    }
                    unk_win_op_1010_7300(puVar8, 0x0, 0x13, *(param_1 + 0xb0));
                    return;
                }
                if(param_4 == 0xbbb)
                {
                    if((param_1 + 0xb6) != 0x0)
                    {
                        BVar2   = IsWindow16(param_5);
                        param_5 = (HWND16)LAST_SEGMENT;
                        if(BVar2 != 0x0)
                            goto LAB_1040_5417;
                    }
                    uVar10           = pass1_1038_af40(globals->ptr_1050_5b7c, (param_1 + 0x6), 0x1b, in_DX, param_1, SEG_1038, param_6);
                    (param_1 + 0xb6) = (uVar10 + 0x6);
                    set_win_pos_1038_abdc(SEG_1038);
                    ShowWindow16((HWND16)SEG_1038, 0x1);
                    return;
                }
                if(param_4 == 0xbbc)
                {
                    puVar8 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_6, in_DX, unaff_DI);
                    uVar7  = (puVar8 >> 0x10);
                    uVar6  = puVar8;
                    uVar5  = uVar7;
                    uVar4  = pass1_1010_a5ac(uVar6, uVar7, *(param_1 + 0xb0));
                    uVar11 = uVar4;
                    pass1_1010_a58a(uVar6, uVar7, uVar4, uVar4, uVar5);
                    if(uVar11 == 0x0)
                    {
                        pass1_1010_a568(uVar6, uVar7, uVar4, 0x0, uVar5);
                    }
                    GetDlgItem16(SEG_1010, 0xbbc);
                    EnableWindow16((HWND16)LAST_SEGMENT, 0x0);
                    return;
                }
            LAB_1040_5560:
                pass1_1040_b54a(param_1, param_2, param_3, param_4, in_DX, param_5, param_6);
                return;
            }
            puVar8 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_6, in_DX, unaff_DI);
            uVar6  = (puVar8 >> 0x10);
            uVar10 = (param_1 + 0xb0);
            uVar12 = uVar10;
            uVar13 = (uVar10 >> 0x10);
            uVar11 = 0x71;
            uVar5  = uVar6;
        }
        uStack30 = puVar8;
        param_5  = SEG_1010;
        pass1_1010_a5ec(uStack30, uVar5, uVar11, str_var1(uVar13, uVar12), uVar6);
        if((param_1 + 0xb4) != 0x0)
        {
            param_5 = (HWND16)LAST_SEGMENT;
            BVar2   = IsWindow16(SEG_1010);
            if(BVar2 != 0x0)
            {
                param_5 = (HWND16)LAST_SEGMENT;
                SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x11100eb);
            }
        }
    }
LAB_1040_5417:
    DestroyWindow16(param_5);
    return;
}


void  enable_win_1040_5780(u32 *param_1)

{
    void **ppcVar1;
    u32 u_var2;
    u16        uVar3;
    u8        *extraout_DX;
    i16        unaff_DI;
    u16        unaff_SS;
    u16       *puVar4;

    ppcVar1 = (*param_1 + 0x74);
    (**ppcVar1)();
    puVar4 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, unaff_SS, extraout_DX, unaff_DI);
    u_var2  = (param_1 + 0x90);
    uVar3  = pass1_1010_acc0(puVar4, (puVar4 >> 0x10), *(u_var2 + 0x6));
    if(uVar3 != 0x0)
    {
        GetDlgItem16(SEG_1010, 0x1790);
        EnableWindow16((HWND16)LAST_SEGMENT, 0x1);
    }
    return;
}


void  pass1_1040_3a0e(u16 param_1, u16 param_2, u8 *param_3, i16 param_4, u16 param_5)

{
    u16 *puVar1;
    i16  iVar2;

    iVar2  = 0x0;
    puVar1 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_5, param_3, param_4);
    pass1_1010_038e(puVar1, iVar2, param_5);
    destroy_win_1040_7b98(str_var1(param_2, param_1), SEG_1010);
    return;
}


u16  enable_win_1040_3a36(u32 param_1, u16 param_2, u16 param_3, i16 param_4, HWND16 param_5)

{
    i16   *pi_var1;
    bool   bVar2;
    i16    iVar3;
    u16    uVar4;
    HWND16 hwnd;
    HWND16 hwnd_00;

    bVar2 = false;
    iVar3 = param_1;
    uVar4 = (param_1 >> 0x10);
    if(param_4 == 0x0)
    {
        if((iVar3 + 0x9e) <= (iVar3 + 0x9c))
            goto LAB_1040_3a79;
        pi_var1  = (iVar3 + 0x9c);
        *pi_var1 = *pi_var1 + 0x1;
    }
    else
    {
        if(param_4 != 0x1)
            goto LAB_1040_3a79;
        if((iVar3 + 0x9c) == 0x0)
            goto LAB_1040_3a79;
        pi_var1  = (iVar3 + 0x9c);
        *pi_var1 = *pi_var1 + -0x1;
    }
    bVar2 = true;
LAB_1040_3a79:
    hwnd = param_5;
    if(bVar2)
    {
        hwnd = (HWND16)LAST_SEGMENT;
        SetDlgItemInt16(param_5, 0x0, (iVar3 + 0x9c), 0x18e);
    }
    hwnd_00 = hwnd;
    if(((iVar3 + 0x9c) != 0x0) && ((iVar3 + 0xa2) == 0x0))
    {
        (iVar3 + 0xa2) = 0x1;
        hwnd_00        = (HWND16)LAST_SEGMENT;
        EnableWindow16(hwnd, 0x1);
    }
    if(((iVar3 + 0x9c) == 0x0) && ((iVar3 + 0xa2) != 0x0))
    {
        (iVar3 + 0xa2) = 0x0;
        EnableWindow16(hwnd_00, 0x0);
    }
    return 0x0;
}


void  send_dlg_item_msg_1040_3f12(u16 param_1, u16 param_2, u32 param_3, HWND16 param_4, u16 param_5)

{
    u32 uVar1;
    u8        *pu_var2;
    u16        extraout_DX;
    i16        iVar3;
    HWND16     hwnd;
    LRESULT    LVar4;
    u8         local_a[0x8];

    SendDlgItemMessage16(param_4, 0x0, 0x0, 0x0, 0x190000b);
    SendDlgItemMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x0, 0x1900405);
    pass1_1008_5784(str_var1(param_5, local_a), param_3);
    while(true)
    {
        pu_var2 = local_a;
        hwnd   = SEG_1008;
        pass1_1008_5b12(pu_var2, param_5);
        if((extraout_DX | pu_var2) == 0x0)
            break;
        uVar1 = (pu_var2 + 0x4);
        hwnd  = (HWND16)LAST_SEGMENT;
        LVar4 = SendDlgItemMessage16(SEG_1008, (u16)uVar1, (uVar1 >> 0x10), 0x0, 0x1900401);
        iVar3 = (LVar4 >> 0x10);
        if(((LVar4 == -0x1) && (iVar3 == -0x1)) || ((LVar4 == -0x2 && (iVar3 == -0x1))))
            break;
    }
    SendDlgItemMessage16(hwnd, 0x0, 0x0, 0x0, 0x1900407);
    SendDlgItemMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x1, 0x190000b);
    return;
}


void  get_win_rect_1040_43ea(i16 param_1, HWND16 param_2, u16 param_3, u16 param_4)

{
    u32 uVar1;
    RECT16     local_a;
    i16        iStack6;
    i16        iStack4;

    GetWindowRect16(param_2, &local_a);
    iStack6 = iStack6 - local_a.x;
    iStack4 = iStack4 - local_a.y;
    pass1_1010_5fb0(*(param_1 + 0x8e), 0x0, &local_a, param_3, 0x7);
    uVar1          = (param_1 + 0x8e);
    (uVar1 + 0x7a) = ((param_1 + 0x9a) == 0x0);
    return;
}


LRESULT  send_win_msg_1040_4a0a(Struct48 **param_1, HWND16 param_2)

{
    i16        *pi_var1;
    void **ppcVar2;
    u32  uVar3;
    u32  uVar4;
    u16         uVar5;
    Struct48 *iVar5;
    u16         uVar6;
    LRESULT     LVar7;
    char       *pcVar8;
    u16         uVar9;
    u16         uVar10;
    i16         iStack10;

    uVar6   = (param_1 >> 0x10);
    iVar5   = (Struct48 *)param_1;
    ppcVar2 = (*param_1 + 0x74);
    (**ppcVar2)(param_2, param_1, 0x5d6a, SEG_1050);
    GetDlgItem16(param_2, 0x1770);
    SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x40b0000);
    LVar7 = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0xb0000);
    uVar5 = (LVar7 >> 0x10);
    for(iStack10 = 0x0; uVar3 = iVar5->field_0x90, pi_var1 = (uVar3 + 0x10), *pi_var1 != iStack10 && iStack10 <= *pi_var1; iStack10 = iStack10 + 0x1)
    {
        uVar10 = 0x0;
        uVar9  = 0x403;
        uVar3  = iVar5->field_0x90;
        uVar3  = (uVar3 + 0xc);
        pcVar8 = pass1_1040_4dcc(param_1, (uVar3 + iStack10 * 0x2), uVar5);
        LVar7  = SendMessage16((HWND16)LAST_SEGMENT, pcVar8, (WPARAM16)(pcVar8 >> 0x10),
                              str_var1(uVar9, uVar10));
        uVar5  = (LVar7 >> 0x10);
    }
    pass1_1040_4d7e(param_1);
    if(iStack10 == 0x0)
    {
        uVar10 = 0x40a;
        uVar4  = iVar5->field_0x90;
        uVar3  = iVar5->field_0x94;
        pcVar8 = string_op_1010_ada6(
          NULL, SEG_1010, uVar5, uVar3, (uVar3 >> 0x10), 0x0, (uVar4 + 0xa));
        SendMessage16(SEG_1010, pcVar8, (WPARAM16)(pcVar8 >> 0x10), str_var1(uVar10, iStack10));
    }
    LVar7 = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0xb0001);
    return LVar7;
}


void  pass1_1040_2f32(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    u16 *puVar1;
    i16  iVar2;

    iVar2  = 0x0;
    puVar1 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_5, param_3, param_4);
    pass1_1010_038e(puVar1, iVar2, param_5);
    destroy_win_1040_7b98(str_var1(param_2, param_1), SEG_1010);
    return;
}


LRESULT  send_msg_1040_323c(u32 param_1, HWND16 param_2)

{
    WPARAM16 wparam;
    LRESULT  LVar1;
    LRESULT  LVar2;

    wparam = (WPARAM16)(param_1 >> 0x10);
    LVar1  = SendMessage16(param_2, 0x0, 0x0, 0x4070000);
    LVar2  = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x4070000);
    SendMessage16((HWND16)LAST_SEGMENT, param_1 + 0x9a, wparam, str_var1(0x408, LVar1));
    LVar1 = SendMessage16((HWND16)LAST_SEGMENT, param_1 + 0x19a, wparam, str_var1(0x408, LVar2));
    return LVar1;
}


void  send_msg_1040_3374(u32 param_1, u32 *param_2, u16 param_3, HWND16 param_4)

{
    void **ppcVar1;
    u16         u_var2;
    u32         uVar3;
    u16         extraout_DX;
    u16         extraout_DX_00;
    u16         uVar4;
    u16         uVar5;
    LRESULT     LVar6;
    Struct18 *paVar7;
    u16         uVar8;
    u32         uStack10;
    u32         u_stack6;

    uVar5   = SUB42(LAST_SEGMENT, 0x0);
    uVar8   = param_3;
    LVar6   = SendMessage16(param_4, 0x0, 0x0, 0x40b0000);
    u_var2   = LVar6;
    uVar4   = param_2;
    ppcVar1 = (*param_2 + 0x10);
    (**ppcVar1)(LAST_SEGMENT, param_2, uVar8);
    u_stack6  = str_var1(extraout_DX, u_var2);
    uStack10 = 0x0;
    while(true)
    {
        if(u_stack6 <= uStack10)
        {
            return;
        }
        ppcVar1 = (*param_2 + 0x4);
        uVar3   = u_stack6;
        (**ppcVar1)(uVar5, param_2, uStack10, (uStack10 >> 0x10), uVar4);
        paVar7 = (Struct18 *)pass1_1018_3a7a(*(param_1 + 0x96), uVar3 & 0xffff | extraout_DX_00 << 0x10, uVar3, extraout_DX_00);
        uVar4  = param_3;
        LVar6  = SendMessage16(SEG_1018, paVar7, (WPARAM16)(paVar7 >> 0x10), 0x4030000);
        uVar5  = SEG_1000;
        fn_ptr_1000_17ce(paVar7, SEG_1000);
        if(LVar6 == -0x1)
            break;
        if(LVar6 == -0x2)
        {
            return;
        }
        uStack10 = uStack10 + 0x1;
    }
    return;
}


void  pass1_1040_3532(u16 param_1, u16 param_2, u8 *param_3, i16 param_4, u16 param_5)

{
    u16 *puVar1;
    i16  iVar2;

    iVar2  = 0x0;
    puVar1 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_5, param_3, param_4);
    pass1_1010_038e(puVar1, iVar2, param_5);
    destroy_win_1040_7b98(str_var1(param_2, param_1), SEG_1010);
    return;
}


void  pass1_1040_109c(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u8 *param_5, i16 param_6, u16 param_7, u16 param_8)

{
    u32 uVar1;
    bool       bVar2;
    i16        iVar3;
    u16       *puVar4;

    bVar2 = false;
    if(param_4 == 0x1c1)
    {
        (param_1 + 0x96) = 0x2;
        bVar2            = true;
    }
    else
    {
        if(param_4 == 0x1c2)
        {
            (param_1 + 0x96) = 0x1;
            bVar2            = true;
        }
        else
        {
            if(param_4 != 0x1830)
            {
                post_win_msg_1040_7b3c(
                  str_var1(param_2, param_1), param_3, param_4, param_4, param_7);
                return;
            }
            puVar4 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x32, param_8, param_5, param_6);
            iVar3  = puVar4;
            uVar1  = (param_1 + 0x92);
            ui_op_1010_79aa(puVar4, 0xfb6, (uVar1 + 0x6), param_8);
            if(iVar3 == 0x0)
            {
                uVar1 = (param_1 + 0x92);
                unk_win_op_1010_7300(puVar4, 0x0, 0xc, *(uVar1 + 0x6));
            }
        }
    }
    if(bVar2)
    {
        uVar1         = (param_1 + 0x8e);
        (uVar1 + 0xa) = (param_1 + 0x96);
    }
    return;
}


void  pass1_1040_1152(i16 param_1, u16 param_2, u8 *param_3, i16 param_4, u16 param_5, u16 param_6)

{
    u16        uVar1;
    u32 u_var2;
    i16        iVar3;
    u16        uVar4;
    u16       *puVar5;

    if((param_1 + 0x92) != 0x0)
    {
        u_var2   = (param_1 + 0x8e);
        uVar1   = (u_var2 + 0xa);
        puVar5  = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_6, param_3, param_4);
        u_var2   = (param_1 + 0x92);
        uVar4   = (u_var2 >> 0x10);
        iVar3   = u_var2;
        param_5 = SEG_1010;
        pass1_1010_ae92(puVar5, uVar1, (iVar3 + 0xa), *(iVar3 + 0x6), param_4, param_6);
    }
    destroy_win_1040_7b98(str_var1(param_2, param_1), param_5);
    globals->PTR_LOOP_1050_5b80 = 0x0;
    return;
}


void  send_msg_1040_1696(u32 param_1, u16 param_2, u16 param_3, HWND16 param_4)

{
    u32         uVar1;
    u32  u_var2;
    u16        *puVar3;
    u8         *puVar4;
    u8         *puVar5;
    u16         uVar6;
    LRESULT     LVar7;
    Struct18 *paVar8;
    char       *pcVar9;
    u16         uVar10;
    u16         uVar11;
    u16         uStack18;
    u16         local_4;

    SendMessage16(param_4, 0x0, 0x0, 0x40b0000);
    LVar7   = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0xb0000);
    puVar4  = (LVar7 >> 0x10);
    local_4 = 0x0;
    puVar3  = &local_4;
    uVar6   = (param_1 >> 0x10);
    pass1_1010_519a(*(param_1 + 0x8e), str_var1(param_3, puVar3), puVar4, param_3);
    puVar5 = puVar4;
    for(uStack18 = 0x0; uStack18 < local_4; uStack18 = uStack18 + 0x1)
    {
        uVar1  = *(puVar3 + uStack18 * 0x2);
        uVar10 = 0x0;
        uVar11 = 0x403;
        u_var2  = (param_1 + 0x8e);
        paVar8 = (Struct18 *)string_1010_5286(u_var2, (u_var2 >> 0x10), uVar1, uVar1, puVar5);
        LVar7  = SendMessage16(SEG_1010, paVar8, (WPARAM16)(paVar8 >> 0x10), str_var1(uVar11, uVar10));
        puVar5 = (LVar7 >> 0x10);
        fn_ptr_1000_17ce(paVar8, SEG_1000);
    }
    uVar6  = 0x0;
    uVar10 = 0x40a;
    pcVar9 = load_string_1010_847eglobals->dat_1050_14cc, SEG_1010);
    SendMessage16(SEG_1010, pcVar9, (WPARAM16)(pcVar9 >> 0x10), str_var1(uVar10, uVar6));
    SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0xb0001);
    return;
}


u32  pass1_1040_1e80(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5, u16 param_6)

{
    BOOL16 BStack6;
    u16    uStack4;

    BStack6 = 0x0;
    uStack4 = 0x0;
    if(param_4 == 0xe4)
    {
        pass1_1008_a9ec(*(param_1 + 0x92));
    }
    else
    {
        BStack6 = post_win_msg_1040_7b3c(
          str_var1(param_2, param_1), param_3, param_4, param_4, param_6);
        uStack4 = param_5;
    }
    return str_var1(uStack4, BStack6);
}
