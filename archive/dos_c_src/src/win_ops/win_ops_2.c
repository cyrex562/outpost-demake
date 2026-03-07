#include "win_ops_2.h"

#include "address_tables/function_tables.h"
#include "fn_ptr_ops/fn_ptr_ops_6.h"
#include "op_int.h"
#include "op_winapi.h"
#include "op_windef.h"
#include "struct_43.h"
#include "struct_ops/struct_ops_1.h"
#include "structs/structs_0xx/structs_x.h"
#include "structs/structs_2xx/struct_283.h"
#include "sys_ops/sys_ops_9.h"
#include "ui_ops/ui_ops_5.h"
#include "unk/unk_11.h"
#include "unk/unk_15.h"
#include "utils.h"
#include "win_ops_3.h"
#include "win_ops_4.h"

#include <minwindef.h>

void  send_msg_1038_ed8a(u16 param_1, u32 param_2, u32 param_3, HWND16 param_4)

{
    u16  uVar1;
    u16  u_var2;
    u16  uVar3;
    u16  uVar4;
    u8  *in_DX;
    u16  uVar5;
    u8  *puVar6;
    i16  unaff_DI;
    u16  unaff_SS;
    u16 *puVar7;
    u32  uVar8;

    if(param_3 != 0x1c8)
    {
        if(param_3 == 0x1c9)
        {
            puVar7 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, unaff_SS, in_DX, unaff_DI);
            u_var2  = (puVar7 >> 0x10);
            uVar1  = (puVar7 + 0x20);
            uVar5  = (puVar7 + 0x22);
            uVar3  = uVar5 | uVar1;
            if(uVar3 == 0x0)
            {
                return;
            }
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, uVar5);
            puVar6 = (uVar5 | uVar3);
            if(puVar6 == 0x0)
            {
                return;
            }
            uVar4  = pass1_1030_5b00(str_var1(uVar5, uVar3));
            puVar7 = mixed_1010_20ba(globals->u16_1050_0ed0, uVar4, unaff_SS, puVar6, unaff_DI);
            if(puVar7 == 0x0)
            {
                return;
            }
            param_4 = SEG_1018;
            uVar8   = pass1_1018_0ad4(puVar7);
            if(uVar8 == 0x0)
            {
                return;
            }
            param_3 = 0x72;
        }
        else
        {
            if(param_3 != 0x1ca)
            {
                post_win_msg_1040_7b3c(str_var1(param_2, param_1), (param_2 >> 0x10), param_3, param_3, SEG_1040);
                return;
            }
        }
    }
    SendMessage16(param_4, 0x0, 0x0, str_var1(0x111, param_3));
    return;
}


void  post_win_msg_1040_0d5e(u16 param_1, u16 param_2, i16 param_3, HWND16 param_4)

{
    if(param_3 != 0x0)
    {
        PostMessage16(param_4, 0x0, 0x0, 0x1110001);
    }
    return;
}


void  unk_win_sys_op_1038_da68(i16 param_1, u16 param_2, u16 param_3, u32 param_4, WNDCLASS16 *param_5, u8 *param_6)

{
    void **ppcVar1;
    u16         u_var2;
    u8         *puVar3;
    u8         *extraout_DX;
    u16         in_BX;
    i16         unaff_DI;
    u16         unaff_CS;
    u16         uVar4;
    u32         uVar5;
    u32  uVar6;
    i16         iVar7;
    u8          local_16[0x4];
    u16         uStack18;
    u8         *puStack16;
    Struct43 *paStack14;
    u16         uStack10;
    u16         uStack8;
    i16         iStack6;
    i16         iStack4;

    if(param_3 == 0x204)
    {
        pass1_1038_de20(
          str_var1(param_2, param_1), 0x204, param_4, param_4, param_6, in_BX, param_5);
        return;
    }
    iStack6 = 0x0;
    iStack4 = 0x0;
    uStack8 = 0x0;
    if(param_4 == 0x121)
    {
        uStack10 = 0x1;
        iStack6  = 0x0;
        iStack4  = 0x6ec;
        uStack8  = 0x15;
    }
    else
    {
        if(param_4 < 0x1220000)
        {
            u_var2 = param_4 - 0x100;
            if(u_var2 == 0x0)
            {
                param_4 = u_var2;
                if((param_1 + 0x8e) == 0x0)
                {
                    pass1_1010_1ea6(globals->_PTR_LOOP_1050_02a0, str_var1(param_2, param_1), param_5);
                    (param_1 + 0x90) = 0x0;
                }
                iStack4 = 0x72c;
                uStack8 = 0x48;
            }
            else
            {
                if(param_4 - 0x11c == 0x0)
                {
                    param_4 = param_4 - 0x11c;
                    pass1_1038_df86(
                      str_var1(param_2, param_1), param_6, unaff_DI, param_5);
                }
                else
                {
                    if(param_4 != 0x11d)
                    {
                        if(param_4 == 0x11e)
                        {
                            iVar7 = 0x1d;
                        }
                        else
                        {
                            if(param_4 != 0x120)
                            {
                            LAB_1038_dc20:
                                post_win_msg_1040_7b3c(str_var1(param_2, param_1), param_3, param_4, param_4, SEG_1040);
                                return;
                            }
                            iVar7 = 0x1c;
                        }
                        goto LAB_1038_db1c;
                    }
                    uVar5         = pass1_1038_df5c(str_var1(param_2, param_1), param_6, param_5);
                    param_6       = (uVar5 >> 0x10);
                    param_4 = uVar5;
                }
            }
        }
        else
        {
            if(param_4 == 0x122)
            {
                iVar7 = 0x14;
            }
            else
            {
                if(param_4 != 0x123)
                {
                    if(param_4 - 0x125 == 0x0)
                    {
                        ppcVar1       = (*_PTR_LOOP_1050_02a0 + 0x4);
                        param_4 = param_4 - 0x125;
                        (**ppcVar1)();
                        (param_1 + 0x90) = 0x1;
                        param_6          = extraout_DX;
                        win_1008_5c5c(param_5, param_4, extraout_DX, globals->_PTR_LOOP_1050_02a0, 0x1db);
                        (param_1 + 0x8e) = 0x100;
                    }
                    else
                    {
                        if(param_4 == 0x126)
                        {
                            (param_1 + 0x8e) = 0x0;
                            win_1008_5c7c(
                              NULL, _PTR_LOOP_1050_02a0, 0xcb0001, param_5, 0x0);
                            paStack14     = unk_io_op_1010_830aglobals->dat_1050_14cc, 0x1f8, param_5);
                            param_6       = (paStack14 >> 0x10);
                            param_4 = WinHelp16(SEG_1010, 0x0, 0x0, str_var1(paStack14, 0x3));
                        }
                        else
                        {
                            if(param_4 - 0x127 != 0x0)
                                goto LAB_1038_dc20;
                            param_4 = param_4 - 0x127;
                            post_win_msg_1038_dcb0(
                              str_var1(param_2, param_1), 0x0, param_6, param_5);
                        }
                    }
                    goto LAB_1038_dac3;
                }
                iVar7 = 0x28;
            }
        LAB_1038_db1c:
            uVar6         = pass1_1038_af40(globals->ptr_1050_5b7c, (param_1 + 0x8), iVar7, param_6, param_1, unaff_CS, param_5);
            param_6       = (uVar6 >> 0x10);
            param_4 = uVar6;
        }
    }
LAB_1038_dac3:
    if(iStack4 == 0x0)
    {
        return;
    }
    if(iStack6 == 0x0)
    {
        mem_op_1000_179c(0xb4, param_6, 0);
        puVar3 = (param_6 | param_4);
        uStack18  = param_4;
        puStack16 = param_6;
        if(puVar3 != 0x0)
        {
            uVar4 = SUB42(SEG_1040, 0x0);
            iVar7 = string_1040_8520(CONCAT13((param_6 >> 0x8), CONCAT12(param_6, param_4)), (param_1 + 0x6), 0x0, 0x2, 0x634, iStack4, puVar3, param_5);
            goto LAB_1038_dc37;
        }
    }
    else
    {
        mem_op_1000_179c(0xb4, param_6, 0);
        puVar3 = (param_6 | param_4);
        uStack18  = param_4;
        puStack16 = param_6;
        if(puVar3 != 0x0)
        {
            uVar4 = SUB42(SEG_1040, 0x0);
            iVar7 = string_1040_8520(str_var1(param_6, param_4), (param_1 + 0x6), 0x0, 0x3, 0x634, iStack4, puVar3, param_5);
            goto LAB_1038_dc37;
        }
    }
    uVar4  = SEG_1000;
    iVar7  = 0x0;
    puVar3 = 0x0;
LAB_1038_dc37:
    paStack14 = (Struct43 *)str_var1(puVar3, iVar7);
    if(uStack8 == 0x0)
    {
        ppcVar1 = (paStack14 + 0x74);
        (**ppcVar1)(uVar4, iVar7, puVar3);
    }
    else
    {
        pass1_1008_941a(str_var1(param_5, local_16), 0x1, uStack8);
        ppcVar1 = (paStack14 + 0x6c);
        (**ppcVar1)(SEG_1008, paStack14, (paStack14 >> 0x10), local_16, param_5);
    }
    return;
}


void  post_win_msg_1038_dcb0(u32 param_1, u16 param_2, u8 *param_3, u16 param_4)

{
    void **ppcVar1;
    i16         iVar2;
    i16         iVar3;
    u8         *puVar4;
    u8         *extraout_DX;
    i16         unaff_DI;
    u16         uVar5;
    u16         uVar6;
    u16         uVar7;
    u16         uVar8;
    u8          uVar9;
    u8          uVar10;
    u32  local_18;
    u8          local_14[0x4];
    u32  uStack16;
    i16         iStack12;
    u8          local_a[0x4];
    u32 *pu_stack6;

    mem_op_1000_179c(0xb4, param_3, 0);
    puVar4 = (param_3 | param_2);
    iVar3          = param_1;
    uVar5          = (param_1 >> 0x10);
    uStack16 = param_2;
    uStack16 = param_3;
    if(puVar4 == 0x0)
    {
        iVar2  = 0x0;
        puVar4 = 0x0;
    }
    else
    {
        iVar2 = string_1040_8520(str_var1(param_3, param_2), (iVar3 + 0x6), 0x4, 0x3, 0x634, 0x726, puVar4, param_4);
    }
    pu_stack6 = str_var1(puVar4, iVar2);
    pass1_1008_941a(str_var1(param_4, local_a), 0x1, 0x49);
    ppcVar1  = (*pu_stack6 + 0x6c);
    uStack16 = (**ppcVar1)(SEG_1008, pu_stack6, (pu_stack6 >> 0x10), local_a, param_4);
    puVar4   = (uStack16 >> 0x10);
    iStack12 = uStack16;
    if(iStack12 == 0x6)
    {
        mem_op_1000_179c(0xb4, puVar4, 0);
        puVar4 = ((uStack16 >> 0x10) | uStack16);
        if(uStack16 == 0x0)
        {
            iVar3  = 0x0;
            puVar4 = 0x0;
        }
        else
        {
            iVar3 = string_1040_8520(uStack16, (iVar3 + 0x6), 0x0, 0x2, 0x634, 0x728, puVar4, param_4);
        }
        pu_stack6 = str_var1(puVar4, iVar3);
        pass1_1008_941a(str_var1(param_4, local_14), 0x1, 0x4a);
        ppcVar1 = (*pu_stack6 + 0x6c);
        (**ppcVar1)(SEG_1008, pu_stack6, (pu_stack6 >> 0x10), local_14);
        uVar9    = 0x0;
        uVar10   = 0x0;
        iVar2    = 0x15;
        uVar7    = 0x1;
        uVar8    = 0x0;
        uVar6    = 0x0;
        iVar3    = 0x0;
        uVar5    = 0x0;
        local_18 = (Struct67 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_4, extraout_DX, unaff_DI);
        post_win_msg_1008_a0e4(local_18,
                               str_var1(uVar6, uVar5), iVar3, uVar7, CONCAT13(uVar10, CONCAT12(uVar9, uVar8)), iVar2, SEG_1008, param_4);
        PostMessage16(SEG_1008, 0x0, 0x0, 0x11100fc);
        return;
    }
    mem_op_1000_179c(0xb4, puVar4, 0);
    puVar4 = ((uStack16 >> 0x10) | uStack16);
    if(uStack16 == 0x0)
    {
        iVar3  = 0x0;
        puVar4 = 0x0;
    }
    else
    {
        iVar3 = string_1040_8520(uStack16, (iVar3 + 0x6), 0x0, 0x2, 0x634, 0x729, puVar4, param_4);
    }
    pu_stack6 = str_var1(puVar4, iVar3);
    pass1_1008_941a(str_var1(param_4, &local_18), 0x1, 0x4b);
    ppcVar1 = (*pu_stack6 + 0x6c);
    (**ppcVar1)(SEG_1008, pu_stack6, (pu_stack6 >> 0x10), &local_18);
    return;
}


void  destroy_win_1038_e1dc(u16 param_1, u16 param_2, i16 param_3, HWND16 param_4)

{
    u16    UVar1;
    LPARAM lparam;

    if(param_3 != 0x0)
    {
        UVar1 = IsDlgButtonChecked(param_4, 0x1807);
        if(UVar1 == 0x0)
        {
            param_4 = (HWND16)LAST_SEGMENT;
            UVar1   = IsDlgButtonChecked((HWND16)LAST_SEGMENT, 0x1806);
            if(UVar1 == 0x0)
                goto LAB_1038_e229;
            lparam = 0x1110130;
        }
        else
        {
            lparam = 0x111012f;
        }
        param_4 = (HWND16)LAST_SEGMENT;
        SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, lparam);
    }
LAB_1038_e229:
    DestroyWindow16(param_4);
    return;
}


void  pass1_1038_e4bc(u16 param_1, u32 param_2, u32 param_3, u8 *param_4, i16 param_5, u16 param_6)

{
    void **ppcVar1;
    u32  u_var2;
    u16         uVar3;
    u16         uVar4;
    u16         uVar5;
    u8         *puVar6;
    u16         extraout_DX;
    u8         *extraout_DX_00;
    u8         *puVar7;
    void **ppcVar8;
    u32        *puVar9;
    u16        *puVar10;
    u16         uVar11;
    u8          uVar12;
    u8          uVar13;
    u16         uVar14;
    u16         uVar15;
    u16         uVar16;
    u32 *puStack22;

    if(param_3 == 0x1c4)
    {
        puVar10 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_6, param_4, param_5);
        uVar14  = (puVar10 >> 0x10);
        uVar4   = (puVar10 + 0x24);
        uVar5   = (puVar10 + 0x26);
        uVar3   = uVar5 | uVar4;
        if(uVar3 != 0x0)
        {
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar4, uVar5);
            if((uVar5 | uVar3) != 0x0)
            {
                puVar9 = pass1_1008_c6fa(globals->dat_1050_06e0, 0x20);
                puVar6 = (puVar9 >> 0x10);
                uVar4  = puVar9;
                pass1_1038_4e78(uVar4, puVar6, str_var1(uVar5, uVar3), puVar9);
                puStack22 = str_var1(puVar6, uVar4);
                u_var2     = *puStack22;
                ppcVar8   = u_var2;
                ppcVar1   = ppcVar8 + 0x8;
                uVar5     = uVar4;
                (**ppcVar1)(SEG_1008, uVar4, puVar6);
                if((extraout_DX | uVar5) == 0x0)
                {
                    if(puStack22 != 0x0)
                    {
                        ppcVar1 = ppcVar8;
                        (**ppcVar1)(SEG_1008, uVar4, puVar6, 0x1);
                    }
                }
                else
                {
                    ppcVar1 = (*puStack22 + 0x4);
                    (**ppcVar1)(0x8, uVar4, puVar6, 0x0, 0x0);
                    puVar7 = extraout_DX_00;
                    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar5, extraout_DX_00);
                    puVar10 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x32, param_6, puVar7, (u_var2 >> 0x10));
                    pass1_1010_71d6(puVar10, 0x1, ((ZEXT24(puVar7) & 0xff00) << 0x10 | CONCAT12(puVar7, uVar5 + 0xc)), uVar5 + 0xc, (puVar10 >> 0x10), param_6);
                    if(puStack22 != 0x0)
                    {
                        ppcVar1 = *puStack22;
                        (**ppcVar1)(SEG_1010, uVar4, puVar6, 0x1);
                    }
                }
            }
        }
    }
    else
    {
        if(param_3 == 0x1c5)
        {
            uVar14 = 0xe;
        }
        else
        {
            if(param_3 != 0x1c6)
            {
                post_win_msg_1040_7b3c(CONCAT13((param_2 >> 0x8), CONCAT12(param_2, param_1)), (param_2 >> 0x10), param_3, param_3, SEG_1040);
                return;
            }
            uVar14 = 0xd;
        }
        uVar16  = 0x0;
        uVar15  = 0x0;
        uVar11  = 0x0;
        uVar12  = 0x0;
        uVar13  = 0x0;
        puVar10 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x32, param_6, param_4, param_5);
        unk_win_op_1010_7300(puVar10, CONCAT13(uVar13, CONCAT12(uVar12, uVar11)), uVar14,
                             str_var1(uVar16, uVar15));
    }
    return;
}


long  call_win_proc_1038_d020(HWND16 win_handle_1, u32 param_2, LPARAM l_param, u16 param_4, HWND16 win_handle_2)

{
    HANDLE16 handle_1;
    HANDLE16 handle_2;
    u16      var1;
    LRESULT  lresult;
    i32      var5;
    u32     *var6;
    long     var7;
    u16      var8;
    void **fn_ptr_1;
    u16      var2;
    u16      var3;
    u16      var4;
    WPARAM16 w_param;

    var4     = SUB42(SEG_1050, 0x0);
    var3     = l_param;
    handle_1 = GetProp16(win_handle_2, s_procHi_1050_5bd7);
    var2     = l_param;
    handle_2 = GetProp16((HWND16)LAST_SEGMENT, s_procLo_1050_5bd0);
    var7     = str_var1(handle_1, handle_2);
    var8     = l_param;
    handle_1 = GetProp16((HWND16)LAST_SEGMENT, s_thisHi_1050_5be5);
    handle_2 = GetProp16((HWND16)LAST_SEGMENT, s_thisLo_1050_5bde);
    var6     = str_var1(handle_1, handle_2);
    w_param  = (WPARAM16)(param_2 >> 0x10);
    if((handle_1 | handle_2) != 0x0)
    {
        var5 = 0x0;
        if(l_param == 0x19)
        {
            fn_ptr_1 = (*var6 + 0x34);
            var5     = (**fn_ptr_1)(LAST_SEGMENT, handle_2, handle_1, win_handle_1, param_2, l_param, var8, var2, var3, var4);
        }
        else
        {
            if(l_param == 0x86)
            {
                fn_ptr_1 = (*var6 + 0x20);
                var1     = (**fn_ptr_1)(LAST_SEGMENT, handle_2, handle_1, w_param);
                goto LAB_1038_d10e;
            }
            if((l_param == 0x112) && ((w_param & 0xfff0) == 0xf140))
            {
                lresult = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x112f140);
                var1    = (lresult == 0x0);
                goto LAB_1038_d10e;
            }
        }
        if(var5 != 0x0)
        {
            return var5;
        }
    }
    if(var7 != 0x0)
    {
        lresult = CallWindowProc16(LAST_SEGMENT, win_handle_1, param_2, w_param, l_param);
        return lresult;
    }
    var1 = 0x0;
LAB_1038_d10e:
    return (long)var1;
}


void  win_prop_op_1038_d118(u32 param_1, u32 param_2, u16 param_3, u16 param_4, HWND16 param_5)

{
    void **ppcVar1;
    u32  u_var2;
    char        cVar3;
    HANDLE16    HVar4;
    HANDLE16    HVar5;
    u16         uVar6;
    u16         uVar7;
    u16         uVar8;
    u32 *pu_stack6;

    uVar8    = SUB42(SEG_1050, 0x0);
    uVar7    = param_3;
    HVar4    = GetProp16(param_5, s_thisHi_1050_5bf3);
    uVar6    = param_3;
    HVar5    = GetProp16((HWND16)LAST_SEGMENT, s_thisLo_1050_5bec);
    pu_stack6 = str_var1(HVar4, HVar5);
    if(param_2 == 0x30)
    {
        if(param_2 == 0x0)
        {
            return;
        }
        SetProp16((HWND16)LAST_SEGMENT, param_2, 0x5c06);
        return;
    }
    if(param_2 < 0x310000)
    {
        cVar3 = (param_2 >> 0x10);
        if(cVar3 == '\x02')
        {
            if((HVar4 | HVar5) != 0x0)
            {
                u_var2   = *pu_stack6;
                ppcVar1 = u_var2 + 0x6;
                (**ppcVar1)(LAST_SEGMENT, HVar5, HVar4, param_1, param_2, uVar6, uVar7, uVar8);
                if(pu_stack6 != 0x0)
                {
                    ppcVar1 = u_var2;
                    (**ppcVar1)(LAST_SEGMENT, HVar5, HVar4, 0x1);
                }
            }
            HVar4 = GetProp16((HWND16)LAST_SEGMENT, 0x5bfa);
            if(HVar4 == 0x0)
            {
                return;
            }
            DeleteObject16((HGDIOBJ16)LAST_SEGMENT);
            RemoveProp16((HWND16)LAST_SEGMENT, 0x5c00);
            return;
        }
        if(cVar3 == '\x06')
        {
            if((param_2 != (&PTR_LOOP_1050_0000 + 0x1)) && (param_2 != &PTR_LOOP_1050_0002))
            {
                u_var2         = &PTR_LOOP_1050_5bc8;
                (u_var2 + 0x8) = 0x0;
                return;
            }
            u_var2         = &PTR_LOOP_1050_5bc8;
            (u_var2 + 0x8) = param_3;
            return;
        }
    }
    if((HVar4 | HVar5) != 0x0)
    {
        ppcVar1 = (*pu_stack6 + 0xc);
        (**ppcVar1)(LAST_SEGMENT, HVar5, HVar4, param_1, param_2);
    }
    return;
}


void  post_win_msg_1038_d840(Struct70 *param_1, u16 param_2, HWND16 param_3)

{
    Struct70 *iVar1;
    Struct70 *uVar1;

    iVar1 = (Struct70 *)param_1;
    uVar1 = (Struct70 *)(param_1 >> 0x10);
    if(param_2 == 0x10)
    {
        if(iVar1->field_0x8e != 0x0)
        {
            PostMessage16(param_3, 0x0, 0x0, str_var1(0x111, iVar1->field_0x8e));
            iVar1->field_0x8e = 0x0;
            return;
        }
    }
    else
    {
        if(param_2 < 0x11)
        {
            if(param_2 == '\x01')
            {
                iVar1->field_0x90 = 0x0;
                iVar1->field_0x92 = 0x0;
                return;
            }
            if(param_2 == '\x03')
            {
                pass1_1038_e03e(param_1);
                return;
            }
        }
    }
    return;
}


LRESULT  send_msg_1038_c228(u32 param_1, HWND16 param_2)

{
    WPARAM16 wparam;
    LRESULT  LVar1;
    LRESULT  LVar2;

    wparam = (WPARAM16)(param_1 >> 0x10);
    LVar1  = SendMessage16(param_2, 0x0, 0x0, 0x4070000);
    LVar2  = SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x4070000);
    SendMessage16((HWND16)LAST_SEGMENT, param_1 + 0x9e, wparam, str_var1(0x408, LVar1));
    LVar1 = SendMessage16((HWND16)LAST_SEGMENT, param_1 + 0x19e, wparam, str_var1(0x408, LVar2));
    return LVar1;
}


void  send_msg_1038_c374(u32 param_1, u32 *param_2, u16 param_3, HWND16 param_4)

{
    u32  uVar1;
    void **ppcVar2;
    u16         uVar3;
    u32         uVar4;
    u16         extraout_DX;
    u16         extraout_DX_00;
    u16         uVar5;
    u16         uVar6;
    LRESULT     LVar7;
    Struct18 *paVar8;
    u16         uVar9;
    u32         uStack10;
    u32         u_stack6;

    uVar6   = SUB42(LAST_SEGMENT, 0x0);
    uVar9   = param_3;
    LVar7   = SendMessage16(param_4, 0x0, 0x0, 0x40b0000);
    uVar3   = LVar7;
    uVar5   = param_2;
    ppcVar2 = (*param_2 + 0x10);
    (**ppcVar2)(LAST_SEGMENT, param_2, uVar9);
    u_stack6  = str_var1(extraout_DX, uVar3);
    uStack10 = 0x0;
    while(true)
    {
        if(u_stack6 <= uStack10)
        {
            return;
        }
        ppcVar2 = (*param_2 + 0x4);
        uVar4   = u_stack6;
        (**ppcVar2)(uVar6, param_2, uStack10, (uStack10 >> 0x10), uVar5);
        uVar1  = (param_1 + 0x8e);
        paVar8 = (Struct18 *)string_1008_e586(uVar1, (uVar1 >> 0x10), uVar4 & 0xffff | extraout_DX_00 << 0x10, uVar4, extraout_DX_00);
        uVar5  = param_3;
        LVar7  = SendMessage16(SEG_1008, paVar8, (WPARAM16)(paVar8 >> 0x10), 0x4030000);
        uVar6  = SEG_1000;
        fn_ptr_1000_17ce(paVar8, SEG_1000);
        if(LVar7 == -0x1)
            break;
        if(LVar7 == -0x2)
        {
            return;
        }
        uStack10 = uStack10 + 0x1;
    }
    return;
}


void  destroy_win_1038_a3d2(u32 param_1, HWND16 param_2)

{
    GetWindowWord16(param_2, -0x8);
    PostMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x1110105);
    destroy_win_1040_7b98(param_1, SEG_1040);
    return;
}


void  send_dlg_item_msg_1038_8d22(u32 param_1, HWND16 param_2, u16 param_3)

{
    u16      unaff_DI;
    u8       in_AF;
    LRESULT  LVar1;
    u8       local_106[0x100];
    WPARAM16 WStack6;
    i16      iStack4;

    LVar1   = SendDlgItemMessage16(param_2, 0x0, 0x0, 0x0, 0x185b0409);
    WStack6 = (WPARAM16)LVar1;
    iStack4 = WStack6 >> 0xf;
    if(WStack6 != 0xffff)
    {
        SendDlgItemMessage16((HWND16)LAST_SEGMENT, (u16)local_106, param_3, WStack6, 0x185b040a);
        pass1_1008_c79a(*(param_1 + 0x94), str_var1(param_3, local_106), unaff_DI, param_3, in_AF);
    }
    return;
}


LRESULT  pass1_1038_8d7e(u32 param_1, u16 param_2)

{
    LRESULT LVar1;

    pass1_1040_78de(param_1);
    LVar1 = send_dlg_item_msg_1038_8f74(param_1, SEG_1040, param_2);
    return LVar1;
}


void  win_msg_op_1038_95fc(u32 param_1, u16 param_2)

{
    void **ppcVar1;
    u16         u_var2;
    u16         UVar3;
    u16         UVar4;
    u8         *in_DX;
    u8         *extraout_DX;
    u8         *puVar5;
    u8         *extraout_DX_00;
    i16         iVar6;
    i16         unaff_DI;
    u16         uVar7;
    HWND16      hwnd;
    HWND16      HVar8;
    u16         uVar9;
    u16         uVar10;
    u16         uVar11;
    u16         uVar12;
    u16        *puStack30;
    u16        *puStack24;
    i16         iStack20;
    BOOL16      local_10;
    u32 *puStack14;
    u16        *puStack10;
    u16        *pu_stack6;

    pu_stack6  = mixed_1010_20ba(globals->u16_1050_0ed0, 0x8, param_2, in_DX, unaff_DI);
    puStack10 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x9, param_2, (pu_stack6 >> 0x10), unaff_DI);
    puVar5    = (puStack10 >> 0x10);
    u_var2     = puStack10;
    hwnd = SEG_1000;
    mem_op_1000_179c(0xc, puVar5, 0);
    if((puVar5 | u_var2) == 0x0)
    {
        u_var2  = 0x0;
        puVar5 = 0x0;
    }
    else
    {
        hwnd = SEG_1008;
        set_struct_1008_574a(str_var1(puVar5, u_var2));
        puVar5 = extraout_DX;
    }
    puStack14 = str_var1(puVar5, u_var2);
    for(iStack20 = 0x0; iStack20 < 0xf; iStack20 = iStack20 + 0x1)
    {
        uVar12 = (param_1 + 0x6);
        HVar8  = (HWND16)LAST_SEGMENT;
        UVar3  = GetDlgItemInt16(hwnd, 0x1, &local_10, param_2);
        if(UVar3 != 0x0)
        {
            if((iStack20 * 0xe + 0x5a7c) < 0x83)
            {
                uVar11 = 0x8;
                HVar8  = SEG_1000;
                UVar4 = UVar3;
                mem_op_1000_179c(0x8, puVar5, 0);
                puStack24 = str_var1(puVar5, UVar4);
                if((puVar5 | UVar4) == 0x0)
                {
                    puStack30 = 0x0;
                }
                else
                {
                    *puStack24    = addr_table_1008_380a[36]; // 0x389a
                    (UVar4 + 0x2) = SEG_1008;
                    *puStack24    = addr_table_1010_a1c4;//0xa1c4;
                    (UVar4 + 0x2) = SEG_1010;
                    puStack30     = puStack24;
                }
                uVar7         = (puStack30 >> 0x10);
                iVar6         = puStack30;
                (iVar6 + 0x6) = UVar3;
                (iVar6 + 0x4) = (iStack20 * 0xe + 0x5a7c);
                ppcVar1       = (*puStack14 + 0x4);
                (**ppcVar1)(SEG_1000, puStack14, (puStack14 >> 0x10), iVar6, uVar7, uVar11, uVar12);
                puVar5 = extraout_DX_00;
            }
            else
            {
                if((iStack20 * 0xe + 0x5a7c) == 0x89)
                {
                    uVar10 = (iStack20 * 0xe + 0x5a7c);
                    uVar9  = UVar3;
                }
                else
                {
                    uVar10 = (iStack20 * 0xe + 0x5a7c);
                    uVar9  = 0x0;
                }
                HVar8 = SEG_1010;
                pass1_1010_6566(puStack10, uVar9, UVar3, uVar10, param_2);
            }
        }
        hwnd = HVar8;
    }
    (pu_stack6 + 0xa) = puStack14;
    PostMessage16(hwnd, 0x0, 0x0, 0x11100ed);
    return;
}


void  win_ui_op_1038_977a(i16 param_1, u16 param_2, i16 param_3, u8 *param_4, HWND16 param_5, u16 param_6)

{
    void **ppcVar1;
    u16         u_var2;
    i16         iVar3;
    u8         *puVar4;
    u16         uVar5;
    u16         uVar6;
    u8          local_10[0x4];
    u32 *puStack12;
    i16         iStack8;
    u16         u_stack6;
    BOOL16      local_4;

    iStack8 = 0x0;
    uVar6   = (param_1 + 0x6);
    u_var2   = GetDlgItemInt16(param_5, 0x1, &local_4, param_6);
    u_stack6 = u_var2;
    if(u_var2 != 0x0)
    {
        uVar5 = 0xb4;
        mem_op_1000_179c(0xb4, param_4, 0);
        puVar4 = (param_4 | u_var2);
        if(puVar4 == 0x0)
        {
            iVar3  = 0x0;
            puVar4 = 0x0;
        }
        else
        {
            iVar3 = string_1040_8520(str_var1(param_4, u_var2), (param_1 + 0x6), 0x41, 0x2, 0x5db, 0x5da, puVar4, param_6);
        }
        puStack12 = str_var1(puVar4, iVar3);
        pass1_1008_941a(str_var1(param_6, local_10), 0x1, 0xc3);
        ppcVar1 = (*puStack12 + 0x6c);
        iStack8 = (**ppcVar1)(SEG_1008, puStack12, (puStack12 >> 0x10), local_10, param_6, uVar5, uVar6, u_var2);
    }
    if((iStack8 == 0x1) || (u_stack6 == 0x0))
    {
        destroy_window_1040_b726(str_var1(param_2, param_1), param_3, SEG_1040);
    }
    return;
}


long  unk_win_ui_op_1038_9820(Struct51 *param_1, i16 param_2, i16 param_3, HWND16 param_4, BOOL16 param_5)

{
    i16        *pi_var1;
    long        lVar2;
    u16         UVar3;
    i16         iVar4;
    i16         iVar5;
    u16         uVar6;
    Struct51 *iVar7;
    Struct51 *uVar7;
    BOOL16      local_6;
    BOOL16      local_4;

    uVar7 = (Struct51 *)(param_1 >> 0x10);
    iVar7 = (Struct51 *)param_1;
    UVar3 = GetDlgItemInt16(param_4, 0x1, &local_4, param_5);
    iVar4 = UVar3 * param_2 * param_3;
    UVar3 = GetDlgItemInt16((HWND16)LAST_SEGMENT, 0x1, &local_6, param_5);
    lVar2 = (long)(UVar3 * param_2) * (long)param_3;
    uVar6 = (lVar2 >> 0x10);
    iVar5 = lVar2;
    if((iVar4 - iVar7->field_0x94 < 0x1) && (-0x1 < iVar7->field_0x96 - iVar5))
    {
        pi_var1  = &iVar7->field_0x94;
        *pi_var1 = *pi_var1 - iVar4;
        pi_var1  = &iVar7->field_0x96;
        *pi_var1 = *pi_var1 - iVar5;
        return str_var1(uVar6, 0x1);
    }
    return (long)(uVar6 << 0x10);
}


void  win_ui_dlg_op_1038_98b4(Struct51 *param_1, HWND16 param_2, BOOL16 param_3)

{
    u16    UVar1;
    u16    u_var2;
    i16    iVar3;
    i16    iStack8;
    BOOL16 local_4;

    local_4 = 0x0;
    for(iStack8 = 0x0; iVar3 = param_1, u_var2 = (param_1 >> 0x10), iStack8 < 0xf; iStack8 = iStack8 + 0x1)
    {
        iVar3 = (iVar3 + 0x6);
        UVar1 = GetDlgItemInt16(param_2, 0x1, &local_4, param_3);
        unk_win_ui_op_1038_9820(param_1, UVar1, iVar3, LAST_SEGMENT, param_3);
        param_2 = (HWND16)LAST_SEGMENT;
    }
    SetDlgItemInt16(param_2, 0x1, (iVar3 + 0x94), 0xfa9);
    SetDlgItemInt16((HWND16)LAST_SEGMENT, 0x1, (iVar3 + 0x96), 0xfa8);
    return;
}


void  pass1_1038_362e(u32 param_1)

{
    u16         in_AX;
    u8         *in_DX;
    i16         iVar1;
    i16         unaff_DI;
    u16         u_var2;
    u16         unaff_SS;
    Struct67 *paVar3;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((iVar1 + 0x214) == 0x0)
    {
        pass1_1038_4f54(param_1 & 0xffff | u_var2 << 0x10, 0x1f, in_AX);
        if(in_AX == 0x0)
        {
            (iVar1 + 0x214) = 0x14;
        }
        else
        {
            (iVar1 + 0x214) = 0x28;
        }
        paVar3 = (Struct67 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, unaff_SS, in_DX, unaff_DI);
        post_win_msg_1008_a0e4(paVar3, 0x0, 0x0, 0x1, *(iVar1 + 0x4), 0x38, SEG_1008, unaff_SS);
        (iVar1 + 0x216) = 0x0;
    }
    return;
}


void  pass1_1038_095e(u16 param_1, u16 param_2, i16 param_3, u32 param_4, u8 *param_5, i16 param_6, u16 param_7)

{
    void **ppcVar1;
    bool        bVar2;
    u16         uVar3;
    u8         *puVar4;
    u32         uVar5;
    u32         uVar6;
    u8         *puVar7;
    u16         uVar8;
    u8          uVar9;
    u32        *puVar10;
    u32         uVar11;
    i16         iVar12;
    u32         uStack58;
    u32         uStack54;
    u8          local_28[0x2];
    u32         uStack38;
    u32         uStack34;
    u32 *puStack30;
    u16         uStack26;
    u8         *puStack24;
    u32 *puStack22;
    u32         uStack18;
    i16         iStack14;
    i16         iStack12;
    u32         uStack10;
    Struct67 *paStack6;

    paStack6 = (Struct67 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_7, param_5, param_6);
    uStack10 = *_PTR_LOOP_1050_65e2;
    uVar8    = (param_4 >> 0x10);
    if(uStack10 % 0xa == 0x0)
    {
        if(param_3 < 0xc9)
        {
            iVar12 = 0x3f;
        }
        else
        {
            if(param_3 < 0x320)
                goto LAB_1038_09c3;
            iVar12 = 0x3e;
        }
        post_win_msg_1008_a0e4(paStack6, 0x0, 0x0, 0x1, *(param_4 + 0x4), iVar12, SEG_1008, param_7);
    }
LAB_1038_09c3:
    iStack12 = (param_4 + 0x22);
    iStack14 = 0x0;
    uStack18 = *_PTR_LOOP_1050_65e2;
    if(iStack12 < 0x4b)
    {
        if(iStack12 < 0x3c)
        {
            if(iStack12 < 0x32)
                goto LAB_1038_0a1c;
            uVar3 = 0x1e;
        }
        else
        {
            uVar3 = 0xf;
        }
    }
    else
    {
        uVar3 = 0x5;
    }
    if((uStack18 & 0xffff | (globals->_PTR_LOOP_1050_65e2 + 0x2) << 0x10) % uVar3 == 0x0)
    {
        iStack14 = 0x1;
    }
LAB_1038_0a1c:
    if(iStack14 != 0x0)
    {
        puVar10 = pass1_1008_c6fa(globals->dat_1050_06e0, 0xf);
        puVar7  = (puVar10 >> 0x10);
        uVar3   = puVar10;
        pass1_1038_4e78(uVar3, puVar7, param_4, puVar10);
        puStack22 = str_var1(puVar7, uVar3);
        puVar10   = pass1_1008_c6fa(globals->dat_1050_06e0, 0x1a);
        puVar7    = (puVar10 >> 0x10);
        uVar3     = puVar10;
        uStack26  = uVar3;
        puStack24 = puVar7;
        pass1_1038_4d6e(param_4, puVar10, uVar3, puVar7);
        puStack30 = str_var1(puVar7, uVar3);
        ppcVar1   = (*puStack22 + 0x10);
        (**ppcVar1)(SEG_1008, puStack22, (puStack22 >> 0x10));
        uStack34 = str_var1(puVar7, uVar3);
        ppcVar1  = (*puStack30 + 0x10);
        (**ppcVar1)(SEG_1008, puStack30, (puStack30 >> 0x10));
        uStack38 = str_var1(puVar7, uVar3);
        uVar11   = pass1_1030_bcae(local_28, param_7);
        uStack54 = 0x0;
        while(true)
        {
            uVar11 = uVar11 >> 0x10;
            uVar9  = 0x30;
            if(uStack34 <= uStack54)
                break;
            uVar6 = uStack34;
            pass1_1030_1d58(puStack22);
            uVar6 = uVar6 & 0xffff | uVar11 << 0x10;
            bVar2 = false;
            for(uStack58 = 0x0; uStack58 < uStack38; uStack58 = uStack58 + 0x1)
            {
                uVar5 = uStack38;
                pass1_1030_1d58(puStack30);
                puVar4 = local_28;
                pass1_1030_bd74(puVar4, param_7, uVar6, uVar5 & 0xffff | uVar11 << 0x10, param_7);
                if(puVar4 < 0x6)
                {
                    bVar2 = true;
                    break;
                }
            }
            uVar11 = struct_op_1030_73a8(uVar6);
            if(!bVar2)
            {
                uVar9 = 0x28;
                func_0x10285ca0(SEG_1030, uVar11, (uVar11 >> 0x10));
                break;
            }
            uStack54 = uStack54 + 0x1;
        }
        if(puStack22 != 0x0)
        {
            ppcVar1 = *puStack22;
            (**ppcVar1)(uVar9, puStack22, (puStack22 >> 0x10), 0x1);
        }
        if(puStack30 != 0x0)
        {
            ppcVar1 = *puStack30;
            (**ppcVar1)(uVar9, puStack30, (puStack30 >> 0x10), 0x1);
        }
    }
    return;
}


u16  pass1_1030_e67c(u32 param_1, u8 *param_2, i16 param_3, u16 param_4)

{
    u16         uVar1;
    Struct67 *p_var2;

    p_var2 = (Struct67 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_4, param_2, param_3);
    uVar1  = pass1_1008_aaa8(p_var2, (p_var2 >> 0x10), (param_1 + 0x108));
    if(uVar1 != 0x0)
    {
        post_win_msg_1008_a0e4(p_var2, 0x0, 0x0, 0x1, 0x0, uVar1, SEG_1008, param_4);
    }
    return 0x1;
}


void  pass1_1030_838e(u32 *param_1, u16 param_2, u8 param_3)

{
    struct_1028_d2b0(*param_1, param_2, param_3);
    pass1_1028_d01a((param_1 + 0x4));
    send_msg_1028_e242(globals->_PTR_LOOP_1050_65e2, 0x1, SEG_1028);
    return;
}


void  pass1_1030_83ba(u32 **param_1, long param_2, u16 param_3, u8 param_4)

{
    long lVar1;

    while(lVar1 = param_2 + -0x1, param_2 != 0x0)
    {
        struct_1028_d2b0(*param_1, param_3, param_4);
        pass1_1028_d01a((param_1 + 0x4));
        param_2 = lVar1;
        if(lVar1 != 0x0)
        {
            send_msg_1028_e242(globals->_PTR_LOOP_1050_65e2, 0x0, SEG_1028);
        }
    }
    send_msg_1028_e242(globals->_PTR_LOOP_1050_65e2, 0x1, SEG_1028);
    return;
}


void  send_msg_1028_e242(u32 *param_1, i16 param_2, HWND16 param_3)

{
    u8     *puVar1;
    i16     unaff_DI;
    u16     unaff_SS;
    LRESULT LVar2;

    puVar1 = (*param_1 % 0x64);
    if(*param_1 % 0x64 == 0x0)
    {
        LVar2  = SendMessage16(param_3, 0x0, 0x0, 0x410000);
        puVar1 = (LVar2 >> 0x10);
    }
    param_1->field_0x0 = *param_1 + 0x1;
    if(param_2 != 0x0)
    {
        pass1_1028_e28a(puVar1, unaff_DI, unaff_SS);
    }
    return;
}


void  pass1_1028_9a02(u32 param_1, i16 param_2, u16 param_3, u16 param_4, i16 param_5)

{
    u32  uVar1;
    u8         *pu_var2;
    u32         uVar3;
    u16         uVar4;
    u16         uVar5;
    i16         iVar6;
    u16         uVar7;
    u16        *puVar8;
    Struct67 *paVar9;
    u16         uVar10;
    u8          uVar11;
    u8          uVar12;
    u16         uVar13;
    u16         uVar14;
    i16         iVar15;
    u8          local_30[0x12];
    i16         iStack30;
    u16         uStack26;
    u16         uStack22;
    u16         uStack20;
    long        lStack18;
    u32         uStack10;
    u32         u_stack6;

    uVar7 = (param_1 >> 0x10);
    iVar6 = param_1;
    uVar1 = (iVar6 + 0x108);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    u_stack6  = str_var1(param_3, param_2);
    uVar3    = *(param_2 + 0x1f6);
    uStack10 = uVar3;
    pass1_1030_3694(uVar3, 0x0, (iVar6 + 0x110), param_3, SEG_1030, param_4);
    uVar4           = uVar3;
    (iVar6 + 0x114) = uVar4;
    (iVar6 + 0x116) = param_3;
    pass1_1030_38b8();
    if((param_3 | uVar4) == 0x0)
    {
        lStack18 = (u_stack6 + 0x200);
        puVar8   = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_4, 0x0, param_5);
        uStack20 = (puVar8 >> 0x10);
        uStack22 = SUB42(puVar8, 0x0);
        if(lStack18 == 0x8000002)
        {
            iVar6 = 0x1f;
        }
        else
        {
            iVar6 = 0xb;
        }
        pass1_1010_043a(puVar8, (u_stack6 + 0x4), iVar6, param_4);
        if(lStack18 == 0x8000001)
        {
            uVar7 = 0x2;
        }
        else
        {
            uVar7 = 0x1;
        }
        uVar4    = 0x800;
        lStack18 = str_var1(0x800, uVar7);
        pass1_1038_349e(u_stack6, str_var1(0x800, uVar7));
        iStack30 = 0x0;
        uStack26 = 0x0;
        pass1_1028_dc52((Struct92 *)CONCAT13((param_4 >> 0x8), CONCAT12(param_4, local_30)), 0x1, 0x0, 0x400);
        while(true)
        {
            pu_var2 = local_30;
            pass1_1028_e4ec(str_var1(param_4, pu_var2));
            u_stack6 = str_var1(uVar4, pu_var2);
            uVar5   = uVar4 | pu_var2;
            if(uVar5 == 0x0)
                break;
            if((pu_var2 + 0x200) == 0x8000002)
            {
                uStack26 = 0x1;
                uVar4    = uVar5;
            }
            else
            {
                iStack30 = 0x1;
                uVar4    = uVar5;
            }
        }
        if(iStack30 == 0x0)
        {
            uVar14 = 0x0;
            iVar15 = 0x3c;
            uVar11 = 0x1;
            uVar12 = 0x0;
            uVar13 = 0x0;
            uVar10 = 0x0;
            iVar6  = 0x0;
            uVar7  = 0x0;
            paVar9 = (Struct67 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_4, 0x0, param_5);
            post_win_msg_1008_a0e4(paVar9,
                                   str_var1(uVar10, uVar7), iVar6, CONCAT11(uVar12, uVar11),
                                   str_var1(uVar14, uVar13), iVar15, SEG_1008, param_4);
        }
    }
    return;
}


void  pass1_1028_a188(u16 param_1, u16 param_2, i16 param_3, i16 param_4, u32 param_5, u16 param_6)

{
    u32  uVar1;
    long lVar2;
    u32  uVar3;
    u16  uVar4;
    u16  uVar5;
    u16  uVar6;
    u32  uVar7;
    long lVar8;
    long lVar9;
    u16  uVar10;
    i16  iVar11;
    i16  iVar12;
    u8  *puVar13;
    u16  uVar14;
    u16 *puVar15;
    u16  uStack18;
    u16  uStack16;
    u16  uStack14;
    i16  iStack12;

    uVar14 = (param_5 >> 0x10);
    iVar11 = param_5;
    uVar1  = *(iVar11 + 0x1f6);
    uVar6  = (iVar11 + 0x1f8);
    uVar5  = uVar1 + 0x18c;
    uVar4  = (uVar1 >> 0x10);
    uVar7  = uVar5;
    pass1_1030_38f2(uVar1 & 0xffff | uVar6 << 0x10, param_4, param_6);
    uVar3                  = 0x64 / (long)param_3;
    uVar10                 = uVar3 >> 0xf;
    iVar12                 = param_4 * 0x4;
    lVar2                  = (uVar7 & 0xffff | uVar6 << 0x10) + (iVar12 + uVar5);
    lVar8                  = lVar2 / (long)(uVar3 & 0xffff | uVar10 << 0x10);
    lVar9                  = lVar8 * (uVar3 & 0xffff | uVar10 << 0x10);
    uStack14               = lVar2;
    iStack12               = (lVar2 >> 0x10);
    uVar6                  = lVar9;
    puVar13                = ((iStack12 - (lVar9 >> 0x10)) - (uStack14 < uVar6));
    (uVar5 + iVar12)       = uStack14 - uVar6;
    (uVar5 + iVar12 + 0x2) = puVar13;
    uStack16               = (lVar8 >> 0x10);
    uStack18               = lVar8;
    if((uStack16 | uStack18) != 0x0)
    {
        pass1_1030_375a(uVar1, param_4, lVar8, param_6);
        if((iVar11 + 0x200) != 0x8000002)
        {
            puVar15 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_6, puVar13, iVar12);
            puVar13 = (puVar15 >> 0x10);
            post_win_msg_1008_a0e4((Struct67 *)(puVar15 & 0xffff | ZEXT24(puVar13) << 0x10), 0x0, uStack18, (iVar11 + 0x208), *(iVar11 + 0x4), 0x2, SEG_1008, param_6);
            puVar15 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_6, puVar13, iVar12);
            pass1_1010_043a(puVar15, (iVar11 + 0x4), 0xd, param_6);
        }
    }
    return;
}


void  pass1_1028_86c2(u32 param_1, u8 *param_2, i16 param_3, u16 param_4)

{
    Struct67 *paVar1;
    u16         u_var2;
    u16         uVar3;
    i16         iVar4;
    u16         uVar5;
    u16         uVar6;
    u16         uVar7;
    i16         iVar8;

    uVar7  = 0x0;
    iVar8  = 0x1d;
    uVar5  = 0x1;
    uVar6  = 0x0;
    uVar3  = 0x0;
    iVar4  = 0x0;
    u_var2  = 0x0;
    paVar1 = (Struct67 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_4, param_2, param_3);
    post_win_msg_1008_a0e4(paVar1,
                           str_var1(uVar3, u_var2), iVar4, uVar5,
                           str_var1(uVar7, uVar6), iVar8, SEG_1008, param_4);
    pass1_1028_6b2c(param_1, param_4);
    return;
}


void  pass1_1028_9114(u32 param_1, u8 *param_2, i16 param_3, u16 param_4)

{
    u16         uVar1;
    u8         *pu_var2;
    u16         uVar3;
    Struct67 *paVar4;
    u16        *puVar5;
    u16         uVar6;
    u8         *puVar7;
    i16         iVar8;
    u16         uVar9;
    i16         iVar10;
    u16         uStack10;

    paVar4 = (Struct67 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_4, param_2, param_3);
    uVar3  = param_1;
    iVar10 = (uVar3 + 0x108);
    if(iVar10 - 0x1U < 0x8)
    {
        uStack10 = *_PTR_LOOP_1050_65e2;
        iVar8    = (*_PTR_LOOP_1050_65e2 >> 0x10);
        switch(iVar10)
        {
        case 0x1:
            iVar10 = 0x16;
            break;
        case 0x2:
            iVar10 = 0x17;
            break;
        case 0x3:
            iVar10 = 0x18;
            break;
        case 0x4:
            iVar10 = 0x1b;
            break;
        case 0x5:
            iVar10 = 0x1f;
            break;
        case 0x6:
            iVar10 = 0x24;
            break;
        case 0x7:
            pass1_1008_612e(0x0, 0x14, uVar3);
            pu_var2 = ((uVar3 >> 0xf) + (0xff91 < uVar3));
            uVar6  = uStack10 + uVar3 + 0x6e;
            puVar7 = pu_var2 + CARRY2(uStack10, uVar3 + 0x6e) + iVar8;
            iVar10 = 0x7;
            puVar5 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_4, pu_var2, param_3);
            uVar1  = (puVar5 >> 0x10);
            uVar3  = puVar5;
            pass1_1010_ebf8(puVar5, uVar6, puVar7, iVar10);
            pass1_1008_612e(0x1, 0x64, uVar3);
            if(0x32 < uVar3)
            {
                return;
            }
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, 0x1, 0x400);
            pass1_1038_4900(str_var1(uVar1, uVar3));
            iVar10 = 0x2c;
            break;
        case 0x8:
            pass1_1008_612e(0x0, 0x14, uVar3);
            pu_var2 = ((uVar3 >> 0xf) + (0xff9b < uVar3));
            uVar6  = uStack10 + uVar3 + 0x64;
            puVar7 = pu_var2 + CARRY2(uStack10, uVar3 + 0x64) + iVar8;
            iVar8  = 0x8;
            puVar5 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_4, pu_var2, param_3);
            uVar1  = (puVar5 >> 0x10);
            iVar10 = puVar5;
            pass1_1010_ebf8(puVar5, uVar6, puVar7, iVar8);
            if(0x19 < uVar3)
            {
                return;
            }
            uVar3 = 0x1;
            uVar9 = 0x2;
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, 0x1, 0x400);
            pass1_1038_43cc(iVar10, uVar1, uVar3, uVar9, iVar10, uVar1);
            iVar10 = 0x2d;
        }
        post_win_msg_1008_a0e4(paVar4, 0x0, 0x0, 0x1, 0x0, iVar10, SEG_1008, param_4);
    }
    return;
}

void  post_msg_1028_76da(void)

{
    long lVar1;
    u16  u_var2;
    u8  *in_DX;
    i16  unaff_DI;
    u16  unaff_SS;
    u16 *puVar3;
    u16  uStack10;
    u16  uStack8;

    puVar3   = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2c, unaff_SS, in_DX, unaff_DI);
    u_var2    = (puVar3 >> 0x10);
    lVar1    = (puVar3 + 0xc);
    uStack8  = (lVar1 >> 0x10);
    uStack10 = lVar1;
    if(((uStack8 | uStack10) != 0x0) && (*_PTR_LOOP_1050_65e2 == lVar1))
    {
        PostMessage16(SEG_1010, 0x0, 0x0, 0x1110106);
        (puVar3 + 0xc) = 0x0;
    }
    return;
}


void  pass1_1028_6ff6(u32 param_1, u16 param_2, i16 param_3, u16 param_4)

{
    long       *plVar1;
    u8         *pu_var2;
    Struct67 *paVar3;
    u8         *puVar4;
    u8         *puVar5;
    u16         uVar6;
    u16         uVar7;
    u16        *puVar8;
    u16         uVar9;
    u16         uVar10;
    i16         iVar11;
    u8          uVar12;
    u8          uVar13;
    u8          uVar14;
    u16         uVar15;
    u16         uVar16;
    u16         uVar17;
    i16         iVar18;
    u8          local_46[0x12];
    u32  uStack52;
    i16         iStack48;
    u8         *puStack46;
    Struct67 *paStack38;
    u8         *puStack34;
    u8         *puStack32;
    i16         iStack30;
    i16         iStack28;
    i16         iStack26;
    u32         uStack24;
    u8          local_14[0x8];
    u16         uStack12;
    u8         *puStack10;
    u16         uStack8;
    u8         *pu_stack6;
    i16         iStack4;

    uVar13 = (param_4 >> 0x8);
    pass1_1028_dc52((Struct92 *)CONCAT13(uVar13, CONCAT12(param_4, local_14)), 0x1, 0x0, 0x400);
    iStack26 = 0x1;
    iStack28 = 0x0;
    do
    {
        do
        {
            uVar7  = param_2;
            pu_var2 = local_14;
            pass1_1028_e4ec(str_var1(param_4, pu_var2));
            uStack24 = str_var1(uVar7, pu_var2);
            param_2  = uVar7 | pu_var2;
            if(param_2 == 0x0)
                goto LAB_1028_7066;
        } while(((pu_var2 + 0x1fe) == 0x0) || ((pu_var2 + 0x200) == 0x8000002));
        iStack28  = 0x1;
        paVar3    = *(Struct67 **)(pu_var2 + 0x1f6);
        paStack38 = paVar3;
        pass1_1030_38b8();
    } while((param_2 < 0x0) || ((param_2 < 0x1 && (paVar3 == 0x0))));
    iStack26 = 0x0;
LAB_1028_7066:
    puStack10 = pu_stack6;
    uStack12  = uStack8;
    if(iStack4 != 0x0)
    {
        puStack10 = 0x0;
        uStack12  = 0x1;
    }
    iStack30 = 0x0;
    puVar4   = puStack10;
    while(true)
    {
        pu_var2 = local_14;
        pass1_1028_e4ec(str_var1(param_4, pu_var2));
        uStack24  = str_var1(puVar4, pu_var2);
        puStack32 = (puVar4 | pu_var2);
        if(puStack32 == 0x0)
            break;
        plVar1 = (long *)(pu_var2 + 0x200);
        puVar4 = puStack32;
        if(*plVar1 == 0x8000001)
        {
            iStack30 = 0x1;
        }
    }
    if(iStack30 == 0x0)
    {
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, 0x1, 0x400);
        uStack24  = str_var1(puStack32, pu_var2);
        puStack32 = (puStack32 | pu_var2);
        if(puStack32 != 0x0)
        {
            globals->PTR_LOOP_1050_4fe8 = (&PTR_LOOP_1050_0000 + 0x1);
            uVar16             = 0x0;
            iVar11             = 0x1;
            uStack52           = (Struct67 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_4, puStack32, param_3);
            puStack32          = (uStack52 >> 0x10);
            pu_var2             = uStack52;
            pass1_1010_089e(param_4, uStack52, uVar16, iVar11);
            pass1_1010_089e(param_4, uStack52, 0x0, 0x2);
            pass1_1010_089e(param_4, uStack52, 0x0, 0x3);
            pass1_1010_089e(param_4, uStack52, 0x0, 0x4);
            pass1_1010_089e(param_4, uStack52, 0x0, 0x5);
            pass1_1010_089e(param_4, uStack52, 0x0, 0x7);
            pass1_1010_089e(param_4, uStack52, 0x0, 0x8);
            pass1_1010_089e(param_4, uStack52, 0x0, 0xa);
        }
    }
    if((iStack28 != 0x0) && (iStack26 != 0x0))
    {
        uVar17    = 0x0;
        iVar18    = 0x6;
        uVar12    = 0x1;
        uVar14    = 0x0;
        uVar15    = 0x0;
        uVar10    = 0x0;
        iVar11    = 0x0;
        uVar9     = 0x0;
        uStack52  = (Struct67 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_4, puStack32, param_3);
        puStack32 = (uStack52 >> 0x10);
        pu_var2    = uStack52;
        post_win_msg_1008_a0e4(uStack52,
                               str_var1(uVar10, uVar9), iVar11, CONCAT11(uVar14, uVar12),
                               str_var1(uVar17, uVar15), iVar18, SEG_1008, param_4);
    }
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, 0x1, 0x800);
    puVar4    = (puStack32 | pu_var2);
    puStack34 = pu_var2;
    if(((((puVar4 != 0x0) && (pu_var2 = pass1_1030_2242(str_var1(puStack32, pu_var2), 0x4), pu_var2 == 0x0)) && (pu_var2 = pass1_1030_2242(str_var1(puStack32, puStack34), 0x2a), pu_var2 == 0x0))
        && ((pu_var2 = pass1_1030_2242(str_var1(puStack32, puStack34), 0x4b), pu_var2 == 0x0 && (pu_var2 = pass1_1030_2242(str_var1(puStack32, puStack34), 0x54), pu_var2 == 0x0))))
       && ((pu_var2 = pass1_1030_2242(str_var1(puStack32, puStack34), 0x2c),
            pu_var2 == 0x0 && ((pu_var2 = pass1_1030_2242(str_var1(puStack32, puStack34), 0x3c), pu_var2 == 0x0 && (pu_var2 = pass1_1030_2242(str_var1(puStack32, puStack34), 0x3d), pu_var2 == 0x0))))))
    {
        if(iStack4 != 0x0)
        {
            uStack8  = 0x1;
            pu_stack6 = 0x0;
        }
        uStack52  = (Struct67 *)(uStack52 & 0xffff0000);
        iStack48  = 0x0;
        uStack12  = uStack8;
        puStack10 = pu_stack6;
        do
        {
            do
            {
                puVar5 = pu_stack6;
                pu_var2 = local_14;
                pass1_1028_e4ec(str_var1(param_4, pu_var2));
                uStack24 = str_var1(puVar5, pu_var2);
                puVar4   = (puVar5 | pu_var2);
                if(puVar4 == 0x0)
                    goto LAB_1028_72d3;
                pu_stack6 = puVar4;
            } while((pu_var2 + 0x200) == 0x8000002);
            uVar16 = (param_1 >> 0x10);
            if((uStack52 == 0x0) && (pass1_1028_740c(param_1, uVar16, 0x22, str_var1(puVar5, pu_var2)), pu_var2 != 0x0))
            {
                uStack52 = (Struct67 *)str_var1(uStack52, 0x1);
            }
            if((iStack48 == 0x0) && (pass1_1028_740c(param_1, uVar16, 0x24, uStack24), pu_var2 != 0x0))
            {
                iStack48 = 0x1;
            }
            pu_stack6 = puVar4;
        } while((uStack52 == 0x0) || (iStack48 == 0x0));
        uVar17    = 0x0;
        iVar18    = 0x14;
        uVar12    = 0x1;
        uVar14    = 0x0;
        uVar15    = 0x0;
        uVar10    = 0x0;
        iVar11    = 0x0;
        uVar9     = 0x0;
        paStack38 = (Struct67 *)mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_4, puVar4, param_3);
        puVar4    = (paStack38 >> 0x10);
        pu_var2    = paStack38;
        post_win_msg_1008_a0e4(paStack38,
                               str_var1(uVar10, uVar9), iVar11, CONCAT11(uVar14, uVar12),
                               str_var1(uVar17, uVar15), iVar18, SEG_1008, param_4);
    }
LAB_1028_72d3:
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, 0x1, 0x400);
    uStack24 = str_var1(puVar4, pu_var2);
    if((puVar4 | pu_var2) != 0x0)
    {
        puVar8    = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3b, param_4, (puVar4 | pu_var2), param_3);
        puVar4    = (puVar8 >> 0x10);
        iStack48  = puVar8;
        puStack46 = puVar4;
        pass1_1008_df4a(puVar8, param_3, param_4);
        puVar8    = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3c, param_4, puVar4, param_3);
        uVar7     = (puVar8 >> 0x10);
        iStack48  = puVar8;
        puStack46 = uVar7;
        pass1_1018_34a6(puVar8);
        pass1_1028_dc52((Struct92 *)CONCAT13(uVar13, CONCAT12(param_4, local_46)), 0x1, 0x0, 0x400);
        while(true)
        {
            uVar6  = uVar7;
            pu_var2 = local_46;
            pass1_1028_e4ec(str_var1(param_4, pu_var2));
            uStack52 = (Struct67 *)str_var1(uVar6, pu_var2);
            uVar7    = uVar6 | pu_var2;
            if(uVar7 == 0x0)
                break;
            if((pu_var2 + 0x200) != 0x8000002)
            {
                pass1_1038_3ba0(str_var1(uVar6, pu_var2));
            }
        }
    }
    return;
}

void  win_1020_75f0(Struct283 *param_1, u16 param_2)

{
    u16         *pUVar1;
    void **ppcVar2;
    u16          uVar3;
    u32          uVar4;
    u8          *puVar5;
    u8          *puVar6;
    Struct283 *iVar7;
    u16          uVar7;
    u16         *puVar8;
    u32  *puStack10;
    u8           local_6[0x4];

    uVar7 = (param_1 >> 0x10);
    iVar7 = (Struct283 *)param_1;
    if(iVar7->field_0xee != 0x0)
    {
        ppcVar2 = (*iVar7->field_0xee + 0x8);
        (**ppcVar2)();
    }
    if(iVar7->field_0xea == 0x0)
    {
        iVar7->field_0xea = 0x1;
        puVar8            = pass1_1008_941a(str_var1(param_2, local_6), 0x1, 0x91);
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
            pUVar1  = &iVar7->field_0xcc;
            *pUVar1 = *pUVar1 + 0x1;
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

void  window_op_1020_76aa(Struct0 *param_1)

{
    Struct666 *in_AX;
    u8          *in_DX;
    u32        uVar3;
    i16          iVar1;
    i16          unaff_DI;
    u16          u_var2;
    u16          unaff_SS;

    create_window_ex_1008_9760(param_1, SEG_1008);
    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    get_dc_1018_4db0(*(iVar1 + 0xf2), (iVar1 + 0x8), SEG_1018);
    mem_op_1000_179c(0x18, in_DX, 0);
    uVar3 = in_DX | in_AX;
    if(uVar3 != 0x0)
    {
        pass1_1020_7824(in_AX, in_DX, (iVar1 + 0x8), unaff_DI, unaff_SS);
        *(Struct666 **)(iVar1 + 0xee) = in_AX;
        *(u32 *)(iVar1 + 0xf0)        = uVar3;
        return;
    }
    (iVar1 + 0xee) = 0x0;
    return;
}


void  post_win_msg_1020_79fc(Struct69 *param_1, u16 param_2, u16 param_3, i16 param_4, HWND16 param_5)

{
    u32 *puVar1;
    void **ppcVar2;
    i16         iVar3;
    Struct69 *iVar4;
    u16         uVar4;
    u16         uVar5;

    uVar4   = (param_1 >> 0x10);
    iVar4   = (Struct69 *)param_1;
    ppcVar2 = (*iVar4->field_0xe0 + 0x24);
    iVar3   = (**ppcVar2)(param_5, iVar4->field_0xe0);
    if(iVar3 != param_4)
    {
        uVar5 = iVar4->field_0x8;
        PostMessage16(param_5, 0x0, 0x0, 0x850000);
        puVar1  = iVar4->field_0xe0;
        ppcVar2 = (*iVar4->field_0xe0 + 0x28);
        (**ppcVar2)(LAST_SEGMENT, puVar1, (puVar1 >> 0x10), param_4, uVar5);
    }
    return;
}

void window_op_1020_6c3a(Globals *globals, Struct0 *param_1)

{
    u32   uVar1;
    void       **fn_ptr_1;
    HICON16      icon_handle_1;
    Struct160 *paVar4;
    BOOL16      *pBVar5;
    u32   uVar6;
    u8          *in_DX;
    u16          uVar7;
    u8          *extraout_DX;
    u8          *puVar8;
    u8          *puVar9;
    u16          uVar10;
    u16          extraout_DX_00;
//    i16          iVar11;
    i16          unaff_DI;
    u16          uVar12;
    u16          unaff_SS;
    u16         *puVar13;
    u8          *puVar14;
    u32          local_6;

    create_window_ex_1008_9760(param_1, SEG_1008);
    puVar13                     = mixed_1010_20ba(globals->u16_1050_0ed0, 0x4, unaff_SS, in_DX, unaff_DI);
    uVar7                       = (puVar13 >> 0x10);
//    uVar12                      = (param_1 >> 0x10);
//    iVar11                      = param_1;
    (param_1 + 0xf2)             = puVar13;
    (param_1 + 0xf4)             = uVar7;
    (param_1 + 0xe0)             = (param_1 + 0xf2);
    (param_1 + 0xe2)             = uVar7;
    puVar14                     = globals->hinst_1050_038c;
    icon_handle_1                = LoadIcon16(SEG_1010, globals->s_TILEICON_1050_440c);
    *(HICON16 *)(param_1 + 0xc2) = icon_handle_1;
    uVar6                       = (param_1 + 0xf2);
    fn_ptr_1                     = ((param_1 + 0xf2) + 0x30);
    (**fn_ptr_1)(LAST_SEGMENT, uVar6, (uVar6 >> 0x10), icon_handle_1, puVar14);
    paVar4 = (Struct160 *)(&local_6 + 0x2);
    puVar9 = extraout_DX;
    pass1_1018_2d22(*(param_1 + 0xf2),
                    str_var1(unaff_SS, &local_6),
                    CONCAT13((unaff_SS >> 0x8), CONCAT12(unaff_SS, paVar4)), 0xbb8);
    mem_op_1000_179c(0x42, puVar9, 0);
    puVar8 = (puVar9 | paVar4);
    if(puVar8 != 0x0)
    {
        uVar7 = (param_1 + 0x8);
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar9,
                            0x0,
                            local_6,
                            0x0,
                            0x7c007d,
                            CONCAT13((uVar7 >> 0x8), CONCAT12(uVar7, 0xbb8)),
                            puVar8,
                            unaff_SS);
    }
    paVar4 = (Struct160 *)(&local_6 + 0x2);
    pass1_1018_2d22(*(param_1 + 0xf2), str_var1(unaff_SS, &local_6), str_var1(unaff_SS, paVar4), 0xbb9);
    mem_op_1000_179c(0x42, puVar8, 0);
    puVar9 = (puVar8 | paVar4);
    if(puVar9 != 0x0)
    {
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar8,
                            0x0,
                            local_6,
                            0x0,
                            0x7e007f,
                            str_var1((param_1 + 0x8), 0xbb9),
                            puVar9,
                            unaff_SS);
    }
    paVar4 = (Struct160 *)(&local_6 + 0x2);
    pass1_1018_2d22(*(param_1 + 0xf2), str_var1(unaff_SS, &local_6), str_var1(unaff_SS, paVar4), 0xbba);
    mem_op_1000_179c(0x42, puVar9, 0);
    puVar8 = (puVar9 | paVar4);
    if(puVar8 != 0x0)
    {
        window_op_1008_3bd6(NULL,
                            paVar4,
                            puVar9,
                            0x0,
                            local_6,
                            0x1b2,
                            0x1b001b1,
                            str_var1((param_1 + 0x8), 0xbba),
                            puVar8,
                            unaff_SS);
    }
    mem_op_1000_179c(0x22, puVar8, 0);
    uVar10 = puVar8 | paVar4;
    if(uVar10 == 0x0)
    {
        (param_1 + 0xf6) = 0x0;
    }
    else
    {
        unk_win_ui_op_1020_717e((u16 *)str_var1(puVar8, paVar4), param_1, unaff_SS);
        *(Struct160 **)(param_1 + 0xf6) = paVar4;
        (param_1 + 0xf8)                  = uVar10;
    }
    uVar6           = (param_1 + 0xf6);
    (param_1 + 0xe8) = uVar6;
    uVar1           = (param_1 + 0xf2);
    fn_ptr_1         = ((param_1 + 0xf2) + 0x10);
    (**fn_ptr_1)(SEG_1000, uVar1, (uVar1 >> 0x10));
    pBVar5 = (BOOL16 *)uVar6;
    MoveWindow16(SEG_1000, 0x1, pBVar5[0x3], pBVar5[0x2], pBVar5[0x1], *pBVar5);
    uVar6   = param_1;
    fn_ptr_1 = (uVar6 + 0x94);
    (**fn_ptr_1)(LAST_SEGMENT, param_1, (param_1 >> 0x10), 0x0);
    fn_ptr_1 = (uVar6 + 0x10);
    (**fn_ptr_1)(LAST_SEGMENT, param_1, 0x1);
    UpdateWindow16(LAST_SEGMENT);
}

void  post_win_msg_1020_7308(u32 param_1, u16 param_2, HWND16 param_3)

{
    char cVar1;

    if(param_2 != 0x12)
    {
        if(param_2 < 0x13)
        {
            cVar1 = param_2;
            if(cVar1 == '\x01')
            {
                (param_1 + 0x1c) = 0x0;
                return;
            }
            if(('\x03' < (cVar1 + -0x1)) && ((cVar1 + -0x5) < '\x02'))
                goto LAB_1020_7310;
        }
        return;
    }
LAB_1020_7310:
    PostMessage16(param_3, 0x0, 0x0, 0x11100eb);
    invalidate_rect_1020_735a(param_1, LAST_SEGMENT);
    return;
}

u16  post_msg_1020_55b0(u32 param_1, u16 param_2)

{
    void **ppcVar1;
    u16     u_var2;
    u8     *in_DX;
    u8     *puVar3;
    u16     uVar4;
    u8     *extraout_DX;
    u8     *extraout_DX_00;
    i16     unaff_DI;
    u16     uVar5;
    HWND16  hwnd;
    HWND16  hwnd_00;
    u8      in_AF;
    u16    *puVar5;
    char   *pcVar6;
    u32    *puVar6;
    LRESULT LVar7;
    u8      uVar8;
    i16     local_114;
    u8      local_112[0x2];
    i16     iStack272;
    i16     local_10e;
    char    local_10c[0x100];
    u16    *puStack12;
    i16     iStack8;
    u16    *pu_stack6;

    pu_stack6  = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_2, in_DX, unaff_DI);
    puVar3    = (pu_stack6 >> 0x10);
    iStack8   = (pu_stack6 + 0x20);
    puStack12 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x37, param_2, puVar3, unaff_DI);
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x100, local_10c, param_2);
    puVar5  = pass1_1008_9436(str_var1(param_2, local_112));
    uVar8   = (param_2 >> 0x8);
    pcVar6  = pass1_1008_a8f4(puStack12, CONCAT13(uVar8, CONCAT12(param_2, &local_114)),
                             str_var1(param_2, local_112),
                             str_var1(param_2, &local_10e), (puVar5 >> 0x10), SEG_1008, param_2, in_AF);
    u_var2   = pcVar6;
    puVar3  = ((pcVar6 >> 0x10) | u_var2);
    uVar5   = (param_1 >> 0x10);
    hwnd_00 = SEG_1008;
    if((pcVar6 != 0x0) && (*pcVar6 != '\0'))
    {
        hwnd = SEG_1000;
        mem_op_1000_179c(0xb4, puVar3, 0);
        if((puVar3 | u_var2) == 0x0)
        {
            puVar6 = 0x0;
        }
        else
        {
            hwnd   = (HWND16)SEG_1040;
            puVar6 = pass1_1040_8478(str_var1(puVar3, u_var2), 0x0, CONCAT13(uVar8, CONCAT12(param_2, local_10c)), pcVar6, (param_1 + 0x8), puVar3 | u_var2);
        }
        uVar4 = (puVar6 >> 0x10);
        if(iStack272 == 0x0)
        {
            ppcVar1 = (*puVar6 + 0x74);
            (**ppcVar1)(hwnd, (puVar6 & 0xffff), uVar4);
            puVar3 = extraout_DX_00;
        }
        else
        {
            ppcVar1 = (*puVar6 + 0x6c);
            (**ppcVar1)(hwnd, (puVar6 & 0xffff), uVar4, local_112, param_2);
            puVar3 = extraout_DX;
        }
        if((iStack8 == 0x0) || (hwnd_00 = hwnd, local_114 == 0x0))
        {
            hwnd_00 = (HWND16)LAST_SEGMENT;
            PostMessage16(hwnd, 0x0, 0x0, 0x11100fc);
        }
    }
    if((iStack8 != 0x0) && (local_114 != 0x0))
    {
        LVar7             = SendMessage16(hwnd_00, 0x0, 0x0, str_var1(0x111, local_114));
        (param_1 + 0x112) = 0x1;
        return (LVar7 >> 0x10);
    }
    if(local_10e == 0x6)
    {
        PostMessage16(hwnd_00, 0x0, 0x0, 0x11100b0);
        hwnd_00         = SEG_1010;
        puVar5          = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_2, puVar3, unaff_DI);
        puVar3          = (puVar5 >> 0x10);
        (puVar5 + 0x20) = 0x1;
    }
    if(local_10e == 0x15)
    {
        PostMessage16(hwnd_00, 0x0, 0x0, 0x1110097);
        puVar5          = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_2, puVar3, unaff_DI);
        puVar3          = (puVar5 >> 0x10);
        (puVar5 + 0x20) = 0x1;
    }
    return puVar3;
}

void  post_msg_1020_4394(u32 param_1, u16 param_2, HWND16 param_3)

{
    u32 uVar1;
    i16        iVar2;
    u16        uVar3;

    iVar2 = param_1;
    uVar3 = (param_1 >> 0x10);
    if(param_2 == 0x10)
    {
        if((iVar2 + 0x34) != 0x0)
        {
            PostMessage16(param_3, 0x0, 0x0, 0x11100f6);
            return;
        }
    }
    else
    {
        if(param_2 < 0x11)
        {
            if(param_2 == '\x01')
            {
                (iVar2 + 0x18) = 0x0;
                return;
            }
            if(param_2 == '\v')
            {
                uVar1         = (iVar2 + 0x2c);
                (uVar1 + 0xe) = (iVar2 + -0xda);
                return;
            }
        }
    }
    return;
}

void  win_1020_43f6(Struct0 *param_1, u8 *param_2, u16 param_3)

{
    void **ppcVar1;
    i16          iVar2;
    u16          uVar3;
    u16          uVar4;
    u16          uVar5;
    u16          uVar6;
    i16          unaff_DI;
    u16         *puVar7;
    long         lVar8;
    u16          uVar9;
    Struct282 *iVar9;

    iVar9 = (Struct282 *)param_1;
    uVar9 = (param_1 >> 0x10);
    create_window_ex_1008_9760(param_1, SEG_1008);
    get_dc_1018_4db0(iVar9->field_0xfa, iVar9->field_0x8, SEG_1018);
    puVar7                      = mixed_1010_20ba(globals->u16_1050_0ed0, 0x32, param_3, param_2, unaff_DI);
    &iVar9->field_0x10e         = puVar7;
    (&iVar9->field_0x10e + 0x2) = (puVar7 >> 0x10);
    if(param_1 == (Struct0 *)0x0)
    {
        iVar2 = 0x0;
        uVar4 = 0x0;
    }
    else
    {
        iVar2 = &iVar9->field_0xe2;
        uVar4 = uVar9;
    }
    ppcVar1 = (*iVar9->field_0x10e + 0x4);
    lVar8 = (**ppcVar1)(SEG_1010, iVar9->field_0x10e, 0xb, iVar2, uVar4);
    mem_op_1000_179c(0x30, (lVar8 >> 0x10), 0);
    uVar5 = (lVar8 >> 0x10);
    uVar3 = lVar8;
    uVar6 = uVar5 | uVar3;
    if(lVar8 == 0x0)
    {
        &iVar9->field_0xf6 = 0x0;
    }
    else
    {
        pass1_1020_62e0(uVar3, uVar5, iVar9->field_0x8, param_3);
        iVar9->field_0xf6 = uVar3;
        iVar9->field_0xf8 = uVar6;
    }
    ui_op_1020_536e(param_1, 0x0, -0x1, 0x3, uVar6);
    return;
}

void  struct_1020_3644(u16 *param_1, u16 param_2, u32 param_3, u16 param_4)

{
    Struct272 *iVar2;
    short        in_buf_len_5;
    Struct270 *iVar1;

    struct_1020_790e(param_1, 0x0, param_2, param_3, param_4);
    in_buf_len_5 = (short) (param_1 >> 0x10);
    iVar2 = (Struct272 *) param_1;
    iVar2->field_0xf2 = addr_table_1008_380a[36]; // 0x389a
    iVar2->field_0xf4 = SEG_1008;
    iVar2->field_0xf2 = addr_table_1008_3aa0[2];//0x3aa8;
    iVar2->field_0xf4 = SEG_1008;
    iVar2->field_0x100 = 0x0;
    iVar2->field_0x10a = 0x0;
    iVar2->field_0x10e = 0x0;
    param_1->field_0x0 = addr_table_1020_3d08;//0x3d08;
    iVar2->field_0x2 = SEG_1020;
    iVar2->field_0xf2 = addr_table_1020_3d08[37];//0x3d9c;
    iVar2->field_0xf4 = SEG_1020;
    load_string_1010_84e0(SEG_1010, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x3ff, &iVar2->field_0xa,
                          in_buf_len_5);
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | &iVar2->field_0x5b), s_VrMode_1050_42ca);
    iVar2->field_0xac = 0x44c00000;
    window_op_1020_38aa(param_1);
}

BOOL16  post_win_msg_1020_1ca4(u32 param_1)

{
    void **ppcVar1;
    u16         in_AX;
    i16         iVar2;
    u8         *in_DX;
    u8         *puVar3;
    u16         uVar4;
    u16         unaff_SS;
    u32 *puStack10;

    uVar4 = (param_1 >> 0x10);
    if((param_1 + 0x96) == 0x0)
    {
        pass1_1010_4df0(*(param_1 + 0x8e), in_DX, unaff_SS);
        if(in_AX == 0x0)
        {
            mem_op_1000_179c(0xb4, in_DX, 0);
            puVar3 = (in_DX | in_AX);
            if(puVar3 == 0x0)
            {
                iVar2  = 0x0;
                puVar3 = 0x0;
            }
            else
            {
                iVar2 = string_1040_8520(str_var1(in_DX, in_AX), globals->PTR_LOOP_1050_0396, 0x30, 0x2, 0x57b, 0x62a, puVar3, unaff_SS);
            }
            puStack10 = str_var1(puVar3, iVar2);
            ppcVar1   = (*puStack10 + 0x74);
            (**ppcVar1)();
            return 0x0;
        }
        PostMessage16(SEG_1010, 0x0, 0x0, 0x11100de);
    }
    return 0x1;
}

void  destroy_window_1020_1d4a(u32 param_1, i16 param_2, HWND16 param_3)

{
    BOOL16 BVar1;
    HWND16 hwnd;

    if(param_2 != 0x0)
    {
        BVar1 = post_win_msg_1020_1ca4(param_1);
        if(BVar1 != 0x0)
        {
            hwnd = param_3;
            if((param_1 + 0x96) != 0x0)
            {
                hwnd = (HWND16)LAST_SEGMENT;
                PostMessage16(param_3, 0x0, 0x0, 0x11100ee);
            }
            DestroyWindow16(hwnd);
        }
    }
    return;
}

void  post_win_msg_1020_291a(HWND16 param_1)

{
    PostMessage16(param_1, 0x0, 0x0, 0x100000);
    return;
}

u32  send_msg_1020_29d8(i16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5, u16 param_6, u16 param_7)

{
    u8  *puVar1;
    i16  unaff_DI;
    u16  unaff_SS;
    u16 *pu_var2;
    i16  iVar3;

    iVar3 = (param_4 >> 0x10);
    post_win_msg_1020_79fc((Struct69 *)str_var1(param_2, param_1), param_3, param_4, iVar3, param_7);
    pu_var2 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x29, unaff_SS, param_6, unaff_DI);
    puVar1 = (pu_var2 >> 0x10);
    if(iVar3 == 0x0)
    {
        pass1_1018_270e(pu_var2, 0x1, (param_1 + 0xfc), puVar1, unaff_DI, unaff_SS);
    }
    else
    {
        pass1_1018_270e(pu_var2, 0x0, (param_1 + 0xfc), puVar1, unaff_DI, unaff_SS);
        SendMessage16(SEG_1018, 0x0, 0x0, 0x1110069);
    }
    return str_var1(param_6, param_5);
}

void  send_win_msg_1020_08fe(Struct63 *param_1, HWND16 param_2)

{
    BOOL16      BVar1;
    Struct63 *iVar2;
    Struct63 *u_var2;

    u_var2            = (Struct63 *)(param_1 >> 0x10);
    iVar2            = (Struct63 *)param_1;
    param_1          = addr_table_1020_0b0e;//0xb0e;
    iVar2->field_0x2 = SEG_1020;
    if(iVar2->field_0xe8 != 0x0)
    {
        BVar1 = IsWindow16(param_2);
        if(BVar1 != 0x0)
        {
            SendMessage16((HWND16)LAST_SEGMENT, 0x0, 0x0, 0x1110001);
        }
        iVar2->field_0xe8 = 0x0;
    }
    pass1_1008_57c4((param_1 & 0xffff0000 | &iVar2->field_0xd2));
    param_1          = addr_table_1008_380a; // 0x380a
    iVar2->field_0x2 = SEG_1008;
    param_1          = addr_table_1008_380a[36]; // 0x389a
    iVar2->field_0x2 = SEG_1008;
    return;
}


void  send_msg_1020_097e(u32 param_1, HWND16 param_2)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if(((iVar1 + 0xea) | (iVar1 + 0xe8)) != 0x0)
    {
        SendMessage16(param_2, 0x0, 0x0, 0x1110001);
        (iVar1 + 0xe8) = 0x0;
    }
    return;
}

void  win_1020_09ba(Struct0 *param_1, u16 param_2, u8 *param_3, u16 param_4)

{
    u8          *puVar1;
    Struct275 *iVar1;
    u16          u_var2;

    create_window_ex_1008_9760(param_1, SEG_1008);
    mem_op_1000_179c(0xe, param_3, 0);
    puVar1 = (param_3 | param_2);
    iVar1  = (Struct275 *)param_1;
    u_var2  = (param_1 >> 0x10);
    if(puVar1 != 0x0)
    {
        struct_1020_0baa(str_var1(param_3, param_2), iVar1->field_0x8, puVar1, param_4);
        iVar1->field_0xe2 = param_2;
        iVar1->field_0xe4 = puVar1;
        return;
    }
    &iVar1->field_0xe2 = 0x0;
    return;
}


void  pass1_1020_0a0c(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;

    destroy_win_1008_628e(param_1, SEG_1008);
    uVar5  = (param_1 >> 0x10);
    iVar4  = param_1;
    puVar1 = (iVar4 + 0xe2);
    u_var2  = (iVar4 + 0xe4);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)(SEG_1008, puVar1, u_var2, 0x1);
    }
    (iVar4 + 0xe2) = 0x0;
    (iVar4 + 0xe6) = 0x0;
    return;
}


Struct63 * pass1_1020_0ae8(Struct63 *param_1, u8 param_2, u16 param_3)

{
    send_win_msg_1020_08fe(param_1, param_3);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce((Struct18 *)param_1, SEG_1000);
    }
    return param_1;
}

void  pass1_1020_0dc4(u16 *param_1, u16 param_2, u32 param_3, u16 param_4) {
    i16 iVar1;
    u16 u_var2;

    struct_1020_790e(param_1, s_PCPOPMENU_1050_4256, param_2, param_3, param_4);
    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    (iVar1 + 0xf2) = 0x0;
    (iVar1 + 0xf6) = 0x0;
    (iVar1 + 0xfa) = 0x0;
    param_1->field_0x0 = addr_table_1020_1384;//0x1384;
    (iVar1 + 0x2) = SEG_1020;
    unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (iVar1 + 0x5b)), s_VrMode_1050_4260);
    (iVar1 + 0xac) = 0x44c00000;
    window_op_1020_10a0(param_1);
    return;
}

void  win_help_op_1020_0ec4(u32 *param_1, u16 param_2, u16 param_3)

{
    void **ppcVar1;
    char        cVar2;
    u16         uVar3;
    u8         *in_DX;
    u16         uVar4;
    i16         unaff_DI;
    u16        *puVar5;
    u32         uVar6;
    Struct43 *paVar7;
    u16         uVar8;
    u16         uVar9;
    i16         iVar10;

    uVar8 = (param_1 >> 0x10);
    uVar3 = param_1;
    if(param_2 == 0xfb)
    {
        puVar5 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x30, param_3, in_DX, unaff_DI);
        pass1_1010_375e(puVar5);
        ppcVar1 = (*param_1 + 0x14);
        (**ppcVar1)();
        uVar6 = pass1_1010_375e(puVar5);
        uVar4 = (uVar6 >> 0x10);
        pass1_1010_4788(*(uVar3 + 0xf2), (uVar6 & 0xffff | uVar4 << 0x10), uVar6, uVar4);
        return;
    }
    if(0xfb < param_2)
    {
        switch(param_2)
        {
        default:
            return;
        case 0x12a:
            uVar8 = 0xf012;
            break;
        case 0x12c:
            uVar8 = 0xf020;
        }
        PostMessage16(SEG_1020, 0x0, 0x0, str_var1(0x112, uVar8));
        return;
    }
    if(param_2 == 0xf3)
    {
        iVar10 = 0x3;
    }
    else
    {
        if(0xf3 < param_2)
        {
            return;
        }
        cVar2 = param_2;
        if(cVar2 == 'o')
        {
            paVar7 = unk_io_op_1010_830aglobals->dat_1050_14cc, 0x1f8, param_3);
            WinHelp16(SEG_1010, (s_New_failed_in_Op__Op_1050_0020 + 0x8), 0x0,
                      str_var1(paVar7, 0x1));
            return;
        }
        if(cVar2 == 'r')
        {
            iVar10 = uVar3 + 0xa;
            uVar9  = uVar8;
            puVar5 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x30, param_3, in_DX, unaff_DI);
            uVar4  = (puVar5 >> 0x10);
            pass1_1010_3770(puVar5, str_var1(uVar9, iVar10), uVar4);
            pass1_1038_af40(globals->ptr_1050_5b7c, (uVar3 + 0x8), 0x3, uVar4, uVar3, SEG_1038, param_3);
            return;
        }
        if(cVar2 == -0xf)
        {
            iVar10 = 0x1;
        }
        else
        {
            if(cVar2 != -0xe)
            {
                return;
            }
            iVar10 = 0x2;
        }
    }
    pass1_1010_4674(*(uVar3 + 0xf2), iVar10, SEG_1010, param_3);
    return;
}
