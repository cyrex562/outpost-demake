
#include "sys_ops_11.h"

#include "address_tables/data_tables.h"
#include "fn_ptr_ops/fn_ptr_ops_6.h"
#include "op_dos_interrupts.h"
#include "op_int.h"
#include "op_winapi.h"
#include "op_windef.h"
#include "struct_20.h"
#include "sys_ops_12.h"
#include "unk/unk_12.h"
#include "unk/unk_14.h"
#include "unk/unk_15.h"
#include "unk/unk_16.h"
#include "utils.h"

#include <stdarg.h>
#include <stdbool.h>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCInconsistentNamingInspection"
void  mixed_win_sys_op_1008_016e(u32 param_1, u16 param_2)

{
    void **ppcVar1;
    u16        *pu_var2;
    i16         iVar3;
    u16         uVar4;
    u32  uVar5;
    u8         *puVar6;
    u8         *extraout_DX;
    u8         *puVar7;
    u16         uVar8;
    i16         unaff_DI;
    u16         uVar9;
    HINSTANCE16 instance;
    u16         uVar10;
    DWORD       DVar11;
    u32        *puVar12;
    u32         uVar13;
    Struct20 *paVar14;
    CHAR        local_1be[0x80];
    CHAR        local_13e[0xac];
    CHAR        local_92[0x80];
    u16         uStack18;
    u8         *puStack16;
    u32 *puStack14;
    u16         uStack10;
    u16         uStack8;
    u16         u_stack6;
    u8         *puStack4;

    instance = (HINSTANCE16)LAST_SEGMENT;
    DVar11   = GetVersion16();
    puVar7   = (DVar11 >> 0x10);
    u_stack6  = (DVar11 & 0xffff);
    uVar4    = DVar11 & 0xff;
    uStack10 = (u8)((DVar11 & 0xffff) >> 0x8);
    uStack8  = uVar4;
    puStack4 = puVar7;
    if((uVar4 < 0x3) || ((uVar4 == 0x3 && (uStack10 < 0xa))))
    {
        uVar10 = SEG_1000;
        mem_op_1000_179c(0xb4, puVar7, 0);
        puVar6 = (puVar7 | uVar4);
        uStack18  = uVar4;
        puStack16 = puVar7;
        if(puVar6 == 0x0)
        {
            iVar3  = 0x0;
            puVar6 = 0x0;
        }
        else
        {
            uVar10 = SUB42(SEG_1040, 0x0);
            iVar3  = string_1040_8520(
              str_var1(puVar7, uVar4), 0x0, 0x10, 0x2, 0x5de, 0x5dd, puVar6, param_2);
        }
        puStack14 = str_var1(puVar6, iVar3);
        ppcVar1   = (*puStack14 + 0x74);
        (**ppcVar1)(uVar10, iVar3, puVar6);
        instance = SEG_1000;
        puVar7   = extraout_DX;
        fn_ptr_op_1000_24cd(0x1, &stack0xfffe);
    }
    debug_pri16_1008_6048(s_version__d__d_1050_0012, instance, param_2);
    if((uStack8 == 0x3) && (0xb < uStack10))
    {
        globals->PTR_LOOP_1050_0010 = (&PTR_LOOP_1050_0000 + 0x1);
    }
    LoadString16(instance, 0x80, local_92, param_2);
    uVar4 = dos_int21_find_file_1000_51aa(&stack0xfffe);
    if(uVar4 != 0x0)
    {
        LoadString16(SEG_1000, 0x80, local_13e, param_2);
        LoadString16((HINSTANCE16)LAST_SEGMENT, 0x80, local_1be, param_2);
        uVar4 = MessageBox16((HWND16)LAST_SEGMENT, &PTR_LOOP_1050_0010, local_13e, param_2);
        fn_ptr_op_1000_24cd(0x1, &stack0xfffe);
    }
    mem_op_1000_179c(0x4, puVar7, 0);
    if((puVar7 | uVar4) == 0x0)
    {
        uVar10    = 0x0;
        puVar6    = 0x0;
        uStack18  = uVar4;
        puStack16 = puVar7;
    }
    else
    {
        uStack18  = uVar4;
        puStack16 = puVar7;
        puVar12   = pass1_1008_5394(str_var1(puVar7, uVar4));
        puVar6    = (puVar12 >> 0x10);
        uVar10    = SUB42(puVar12, 0x0);
    }
    uVar9                        = (param_1 >> 0x10);
    iVar3                        = param_1;
    (iVar3 + 0x8)                = uVar10;
    (iVar3 + 0xa)                = puVar6;
    uVar5                        = (iVar3 + 0x8);
    pu_var2                       = (iVar3 + 0x8);
    globals->_PTR_LOOP_1050_0298 = uVar5;
    *pu_var2                      = 0x70;
    (pu_var2 + 0x2)               = LAST_SEGMENT;
    uVar10 = SEG_1000;
    mem_op_1000_179c(0x126, puVar6, 0);
    uVar4 = uVar5;
    puVar7    = (puVar6 | uVar4);
    uStack18  = uVar4;
    puStack16 = puVar6;
    if(puVar7 != 0x0)
    {
        uVar10 = SEG_1010;
        uVar13 = pass1_1010_2024(CONCAT13((puVar6 >> 0x8), CONCAT12(puVar6, uVar4)));
        puVar7 = (uVar13 >> 0x10);
        uVar4  = uVar13;
    }
    if(globals->u16_1050_0ed0 == 0x0)
    {
        debug_pri16_1008_6048(s_New_failed_in_Op__Op_1050_0020, uVar10, param_2);
        fn_ptr_op_1000_24cd(0x1, &stack0xfffe);
    }
    uVar10 = SEG_1000;
    mem_op_1000_179c(0xe8c, puVar7, 0);
    puVar6 = (puVar7 | uVar4);
    uStack18  = uVar4;
    puStack16 = puVar7;
    if(puVar6 != 0x0)
    {
        uVar10 = SEG_1010;
        pass1_1010_7e40(str_var1(puVar7, uVar4), puVar6, unaff_DI, param_2);
    }
    if(globals->dat_1050_14cc == 0x0)
    {
        debug_pri16_1008_6048(0x10500035, uVar10, param_2);
        fn_ptr_op_1000_24cd(0x1, &stack0xfffe);
    }
    uVar10 = SEG_1000;
    mem_op_1000_179c(0xb0, puVar6, 0);
    puVar7 = (puVar6 | uVar4);
    uStack18  = uVar4;
    puStack16 = puVar6;
    if(puVar7 != 0x0)
    {
        uVar10  = SUB42(SEG_1038, 0x0);
        paVar14 = pass1_1038_aeca((Struct20 *)str_var1(puVar6, uVar4), param_2);
        puVar7  = (paVar14 >> 0x10);
        uVar4   = paVar14;
    }
    if(globals->ptr_1050_5b7c == 0x0)
    {
        debug_pri16_1008_6048(s_New_failed_in_Op__Op__DialogCtr_1050_0053, uVar10, param_2);
        fn_ptr_op_1000_24cd(0x1, &stack0xfffe);
    }
    uVar10 = SEG_1000;
    mem_op_1000_179c(0xa, puVar7, 0);
    puVar6 = (puVar7 | uVar4);
    uStack18  = uVar4;
    puStack16 = puVar7;
    if(puVar6 != 0x0)
    {
        uVar10 = SUB42(SEG_1038, 0x0);
        make_proc_inst_1038_cf6c(str_var1(puVar7, uVar4), puVar6, SEG_1038);
    }
    if(globals->_PTR_LOOP_1050_5bc8 == 0x0)
    {
        debug_pri16_1008_6048(s_New_failed_in_Op__Op__DialogHand_1050_0073, uVar10, param_2);
        fn_ptr_op_1000_24cd(0x1, &stack0xfffe);
    }
    mem_op_1000_179c(0x14, puVar6, 0);
    puVar7 = (puVar6 | uVar4);
    uStack18  = uVar4;
    puStack16 = puVar6;
    if(puVar7 != 0x0)
    {
        pass1_1008_5bdc((Struct79 *)str_var1(puVar6, uVar4), unaff_DI, param_2);
    }
    if(globals->_PTR_LOOP_1050_02a0 == 0x0)
    {
        debug_pri16_1008_6048(s_New_failed_in_Op__Op__Simulator_1050_0097, SEG_1000, param_2);
        fn_ptr_op_1000_24cd(0x1, &stack0xfffe);
    }
    mem_op_1000_179c(0xfc, puVar7, 0);
    uVar8 = puVar7 | uVar4;
    uStack18  = uVar4;
    puStack16 = puVar7;
    if(uVar8 == 0x0)
    {
        uVar4 = 0x0;
        uVar8 = 0x0;
    }
    else
    {
        set_struct_op_1008_0536(str_var1(puVar7, uVar4), SEG_1000, param_2);
    }
    (iVar3 + 0x4) = uVar4;
    (iVar3 + 0x6) = uVar8;
    if((iVar3 + 0x4) == 0x0)
    {
        debug_pri16_1008_6048(s_New_failed_in_Op__Op_1050_00b7, SEG_1000, param_2);
        fn_ptr_op_1000_24cd(0x1, &stack0xfffe);
    }
    win_ui_reg_class_1008_96d2(*(Struct20 **)(iVar3 + 0x4), SEG_1000, param_2);
    uVar5   = (iVar3 + 0x4);
    ppcVar1 = ((iVar3 + 0x4) + 0x8);
    (**ppcVar1)(SEG_1000, uVar5, (uVar5 >> 0x10));
    uVar5                       = (iVar3 + 0x4);
    globals->PTR_LOOP_1050_0396 = (uVar5 + 0x8);
    ppcVar1                     = ((iVar3 + 0x4) + 0xc);
    (**ppcVar1)(SEG_1000, (iVar3 + 0x4), 0x3);
    UpdateWindow16(SEG_1000);
    return;
}


BOOL16  pass1_1008_07d8(u16 param_1, BOOL16 param_2, u8 *param_3, u16 param_4)

{
    u16 u_var2;
    u16 uVar1;
    u8  in_AF;
    u32 uVar3;

    if(globals->_PTR_LOOP_1050_5748 == 0x0)
    {
        uVar1 = SEG_1000;
        mem_op_1000_179c(0xa, param_3, 0);
        u_var2 = param_3 | param_2;
        if(u_var2 != 0x0)
        {
            uVar1 = SEG_1030;
            struct_1030_8128(str_var1(param_3, param_2), u_var2, param_4);
        }
        if(globals->_PTR_LOOP_1050_5748 == 0x0)
        {
            debug_pri16_1008_6048(s_New_failed_in_Op__Op__Simulator_1050_0110, uVar1, param_4);
            fn_ptr_op_1000_24cd(0x1, &stack0xfffe);
        }
        uVar3 = pass1_1028_e2e0(globals->_PTR_LOOP_1050_65e2, u_var2, 0x8);
        uVar3 = pass1_1028_e2e0(globals->_PTR_LOOP_1050_65e2, (uVar3 >> 0x10), 0x8);
        pass1_1028_e2e0(globals->_PTR_LOOP_1050_65e2, (uVar3 >> 0x10), 0xff);
        pass1_1030_838e(globals->_PTR_LOOP_1050_5748, param_4, in_AF);
        param_2 = pass1_1030_8334(globals->_PTR_LOOP_1050_5748);
    }
    return param_2;
}


void pass1_1000_4aea(u16 param_1, u16 param_2, i16 param_3, u16 param_4, u8 *param_5, i16 param_6, i16 param_7, u16 param_8, u16 param_9, u16 param_10)

{
    u16         *puVar1;
    void **ppcVar2;
    long         lVar3;
    u16          uVar4;
    i16          iVar5;
    i16          iVar6;
    u16          uVar7;
    u16          uVar8;
    Struct171 *puVar11;
    u16          uVar9;
    u16          uVar10;
    u16          uVar11;
    bool         bVar12;
    u16          uStack26;
    u16          uStack24;
    u16          uStack22;
    u16          uVar13;
    u16          uVar14;
    u32   uStack18;
    u16          uStack14;

    if((param_4 != 0x0) && (param_3 != 0x0))
    {
        uStack14 = param_1;
        uVar11   = param_2;
        for(iVar6 = param_3 + -0x1; iVar6 != 0x0; iVar6 = iVar6 + -0x1)
        {
            uVar9    = uStack14 + param_4;
            uVar11   = uVar11 + (-CARRY2(uStack14, param_4) & 0x6c);
            uStack18 = str_var1(uVar11, uVar9);
            iVar5    = (*(fn_ptr_1)param_5)(param_9);
            if(iVar5 < 0x0)
            {
                uVar11 = param_3 - 0x1;
                iVar6  = 0x0;
                do
                {
                    uVar11 = uVar11 >> 0x1;
                    iVar6  = iVar6 + -0x1;
                } while(iVar6 != 0x0 && uVar11 != 0x0);
                if(((-iVar6 * 0x8 >> 0x10) != 0x0) || (uVar11 = pass1_1000_3bac(), uVar11 < (-iVar6 * 0x8)))
                {
                    exit_1000_25f2(0x4b7b, param_9, param_7, -0x4, param_8, param_9, param_10);
                    return;
                }
                puVar11        = (Struct171 *)&stack0xfff6;
                lVar3          = (param_3 - 0x1) * param_4;
                uVar11         = lVar3;
                uStack14       = uVar11 + param_1;
                uVar11         = ((lVar3 >> 0x10) + CARRY2(uVar11, param_1)) * 0x100 + param_2;
                uStack18 = param_1;
                uStack18 = param_2;
            LAB_1000_4b7d:
                if(puVar11 <= (Struct171 *)&uStack18)
                {
                    return;
                }
            LAB_1000_4b81:
                if((uStack18 < uVar11) || ((uStack18 <= uVar11 && (uStack18 < uStack14))))
                {
                    uStack22 = uStack14;
                    puVar1   = &puVar11->field_0x14;
                    uVar8    = uStack14 + *puVar1;
                    uVar7    = uVar11 + (-CARRY2(uStack14, *puVar1) & 0x6c);
                    uVar9    = uStack18;
                    uVar10   = uStack18;
                    uStack26 = uStack18;
                    uStack24 = uStack18;
                    uVar13   = uVar11;
                LAB_1000_4bbc:
                    do
                    {
                        puVar1 = &puVar11->field_0x14;
                        bVar12 = CARRY2(uVar10, *puVar1);
                        uVar10 = uVar10 + *puVar1;
                        uVar9  = uVar9 + (-bVar12 & 0x6c);
                        uVar4  = uStack22;
                        if((uVar10 != uStack14) || (uVar9 != uVar11))
                        {
                            ppcVar2 = &puVar11->field_0x16;
                            iVar6   = (**ppcVar2)(param_9, uVar10, uVar9, uStack18, uStack18);
                            if(iVar6 < 0x1)
                            {
                                if(iVar6 != 0x0)
                                {
                                    uStack26 = uVar10;
                                    uStack24 = uVar9;
                                }
                                goto LAB_1000_4bbc;
                            }
                        }
                        do
                        {
                            uVar14   = uVar13;
                            uStack22 = uVar4;
                            puVar1   = &puVar11->field_0x14;
                            bVar12   = uVar8 < *puVar1;
                            uVar8    = uVar8 - *puVar1;
                            uVar7    = uVar7 - (-bVar12 & 0x6c);
                            ppcVar2  = &puVar11->field_0x16;
                            iVar6    = (**ppcVar2)(param_9, uStack18, uStack18, uVar8, uVar7);
                            if(0x0 < iVar6)
                                break;
                            uVar4  = uVar8;
                            uVar13 = uVar7;
                        } while(((iVar6 != 0x0) || (uVar4 = uStack22, uVar13 = uVar14, uVar8 != uStack18)) || (uVar7 != uStack18));
                        if((uVar7 < uVar9) || ((uVar7 <= uVar9 && (uVar8 <= uVar10))))
                            goto LAB_1000_4c58;
                        pass1_1000_4ceb(puVar11->field_0x14, uVar10, uVar8, uVar7);
                        uStack26 = uVar10;
                        uStack24 = uVar9;
                        uVar13   = uVar7;
                        uStack22 = uVar8;
                    } while(true);
                }
                goto LAB_1000_4b7d;
            }
            uStack14 = uVar9;
        }
    }
    return;
LAB_1000_4c58:
    pass1_1000_4ceb(puVar11->field_0x14, uStack18, uVar8, uVar7);
    uVar10 = ((uVar11 - (-(uStack14 < uStack22) & 0x6c)) - uVar14) + (-CARRY2(uStack14 - uStack22, uStack18) & 0x6c) + uStack18;
    uVar9  = -((uStack14 - uStack22) + uStack18 < uStack26) & 0x6c;
    if((uVar10 < uVar9) || (uVar10 - uVar9 < uStack24))
    {
        uStack14 = uStack26;
        uVar11   = uStack24;
    }
    else
    {
        uStack18 = uStack22;
        uStack18 = uVar14;
    }
    goto LAB_1000_4b81;
}

i16 *pass1_1000_4f1a(i16 param_1, u16 param_2, u16 param_3)

{
    i16   *pi_var1;
    char  *pcVar2;
    LPCSTR str;
    i16   *piVar3;
    i16   *piVar4;
    char  *pcVar5;
    i16    iVar6;
    i16    iVar7;

    iVar7 = 0x19;
    iVar6 = 0x19;
    pass1_1000_25a8(param_2, param_3);
    pass1_1000_2913(iVar6, param_2, param_3);
    str = poss_str_op_1000_28dc(iVar7);
    if(str != (PCHAR)0x0)
    {
        iVar6 = 0x9;
        if(*str == 'M')
        {
            iVar6 = 0xf;
        }
        str    = str + iVar6;
        iVar6  = 0x22;
        pcVar5 = str;
        do
        {
            if(iVar6 == 0x0)
                break;
            iVar6  = iVar6 + -0x1;
            pcVar2 = pcVar5;
            pcVar5 = pcVar5 + 0x1;
        } while(*pcVar2 != '\r');
        pcVar5[-0x1] = '\0';
    }
    FatalAppExit16(param_3, str);
    FatalExit();
    piVar4 = &globals->u16_1050_63fe;
    do
    {
        pi_var1 = piVar4;
        piVar4 = piVar4 + 0x1;
        iVar6  = *pi_var1;
        piVar3 = piVar4;
        if((iVar6 == param_1) || (piVar3 = (iVar6 + 0x1), piVar3 == 0x0))
        {
            return piVar3;
        }
        iVar6 = -0x1;
        do
        {
            if(iVar6 == 0x0)
                break;
            iVar6  = iVar6 + -0x1;
            pi_var1 = piVar4;
            piVar4 = (piVar4 + 0x1);
        } while(*pi_var1 != '\0');
    } while(true);
}


// WARNING: Removing unreachable block (ram,0x10004f47)

u16 create_subdirectory_1000_4f20(u16 param_1)

{
    void *fn_ptr_1;
    u16   u_var2;
    bool  bVar3;

    bVar3  = false;
    // AH = 0x39
    fn_ptr_1 = swi(0x21);
    // typedef u8(*DosInt21CreateSubdirectory)(char* path);
    u_var2  = ((DosInt21CreateSubdirectory)(fn_ptr_1)(SEG_1050, param_1 + 0x1);
    if(bVar3)
    {
        pass1_1000_29b5(u_var2);
        return 0xffff;
    }
    return 0x0;
}

u16 dos3call_1000_4f54(u32 param_1, i16 param_2)

{
    char       cVar1;
    void      *fn_ptr_1;
    u16        uVar3;
    char      *pcVar4;
    bool       bVar5;
    u32 uVar6;

    bVar5  = false;
    // 0x3a
    fn_ptr_1 = swi(0x21);
    // typedef u8(*DosInt21RemoveSubdirectory(char* path));
    uVar6  = ((DosInt21RemoveSubdirectory)fn_ptr_1)(SEG_1050, param_2 + 0x1);
    pcVar4 = (uVar6 >> 0x10);
    uVar3  = uVar6;
    if((bVar5) && (bVar5 = uVar3 < 0x10, uVar3 == 0x10))
    {
        do
        {
            cVar1  = *pcVar4;
            pcVar4 = pcVar4 + 0x1;
            if(cVar1 == '\0')
                goto LAB_1000_4f90;
        } while((cVar1 != '?') && (cVar1 != '*'));
        uVar3 = 0x3;
    LAB_1000_4f90:
        bVar5 = true;
    }
    if(!bVar5)
    {
        return 0x0;
    }
    pass1_1000_29b5(uVar3);
    return 0xffff;
}


// WARNING: Removing unreachable block (ram,0x10004fa9)

i16 dos3_call_1000_4f94(u16 param_1)

{
    // AH = 0x19
    void* fn_ptr_1 = swi(0x21);
    /// typedef u8(*DosInt21GetDefaultDrive)();
    u8 bVar2  = (*(DosInt21GetDefaultDrive)fn_ptr_1)(param_1 + 0x1);
    return bVar2 + 0x1;
}


// WARNING: Removing unreachable block (ram,0x10004fd7)
// WARNING: Removing unreachable block (ram,0x10004feb)

u16 dos3_call_1000_4fbe(char param_1, i16 param_2)

{
    void *fn_ptr_1;
    char  cVar2;
    u16   uVar3;

    // AH = 0xe
    fn_ptr_1 = swi(0x21);

    (*fn_ptr_1)(param_2 + 0x1);

    // AH = 0x19
    fn_ptr_1 = swi(0x21);
    cVar2  = (*fn_ptr_1)();
    uVar3  = 0xffff;
    if((cVar2 + '\x01') == param_1)
    {
        uVar3 = 0x0;
    }
    return uVar3;
}

void pass1_1000_5026(i16 param_1, u16 param_2, u16 param_3, u16 param_4, i16 param_5, u16 param_6, u16 param_7)

{
    u16  uVar1;
    u16  u_var2;
    u16  uStack304;
    u16  local_12c[0x3];
    u16  uStack294;
    u8  *local_124[0x6];
    i16  iStack280;
    u8   local_116;
    u8   uStack277;
    char cStack272;
    u8  *puStack270;
    u8   local_108;
    u8   uStack263;
    u8   uStack262;
    u8   auStack261[0x101];
    u16  local_4;
    i16  iStack2;

    iStack2    = param_5 + 0x1;
    local_4    = SUB42(SEG_1050, 0x0);
    _uStack304 = str_var1(param_7, &local_108);
    if(param_1 == 0x0)
    {
        param_1 = dos3_call_1000_4f94(&iStack2);
    }
    *_uStack304  = param_1 + '@';
    uStack263    = 0x3a;
    puStack270   = auStack261;
    uStack262    = 0x5c;
    uStack277    = 0x47;
    cStack272    = param_1;
    local_12c[0] = param_7;
    uStack294    = param_7;
    dos3_call_set_struct_1000_42de(str_var1(param_7, &local_116),
                                   str_var1(param_7, local_124),
                                   str_var1(param_7, local_12c));
    if(iStack280 == 0x0)
    {
        uVar1     = str_op_1000_3da4(str_var1(param_7, &local_108));
        uVar1     = uVar1 + 0x1;
        uStack304 = param_2;
        u_var2     = param_3 | param_2;
        if(u_var2 == 0x0)
        {
            if(param_4 < uVar1)
            {
                param_4 = uVar1;
            }
            uStack304 = mem_1000_167a(param_4, param_6, 0x0);
            param_3   = u_var2;
            if((u_var2 | uStack304) == 0x0)
            {
                globals->PTR_LOOP_1050_5f78 = &PTR_LOOP_1050_000c;
                return;
            }
        }
        if(param_4 < uVar1)
        {
            globals->PTR_LOOP_1050_5f78 = (s_New_failed_in_Op__Op_1050_0020 + 0x2);
        }
        else
        {
            unk_str_op_1000_3d3e(str_var1(param_3, uStack304),
                                 str_var1(param_7, &local_108));
        }
    }
    else
    {
        globals->PTR_LOOP_1050_5f78 = (&PTR_LOOP_1050_000c + 0x1);
        globals->PTR_LOOP_1050_5f88 = local_124[0];
    }
    return;
}


// WARNING: Removing unreachable block (ram,0x10005167)

u16 dos3_call_1000_514e(i16 param_1)

{
    void *pcVar1;
    u16   result;
    bool  bVar3;

    bVar3  = false;
    // 0x41
    pcVar1 = swi(0x21);
    result = (*(DosInt21DeleteFile)pcVar1)(SEG_1050, param_1 + 0x1);
    if(bVar3)
    {
        pass1_1000_29b5(result);
        return 0xffff;
    }
    return 0x0;
}


// WARNING: Removing unreachable block (ram,0x1000518c)

u16 dos3_call_1000_5174(u16 param_1)

{
    fn_ptr_1pcVar1;
    u16  u_var2;
    bool bVar3;

    bVar3  = false;
    // 0x68
    pcVar1 = swi(0x21);
    u_var2  = (*pcVar1)(param_1 + 0x1);
    if(!bVar3)
    {
        return 0x0;
    }
    pass1_1000_29b5(u_var2);
    return u_var2 & 0xff;
}


// WARNING: Removing unreachable block (ram,0x100051f7)
// WARNING: Removing unreachable block (ram,0x100051c5)
// WARNING: Removing unreachable block (ram,0x100051d9)
// WARNING: Removing unreachable block (ram,0x10005214)

u16 dos3_calls_1000_5198(i16 param_1)

{
    void*fn_ptr_1;
    u16 u_var2;
    u8  bVar3;

    // 0x2F
    // typedef void (**DosInt21GetDiskTransferAddress)();
    fn_ptr_1 = swi(0x21);
    (*(DosInt21GetDiskTransferAddress)fn_ptr_1)(SEG_1050, param_1 + 0x1);

    // 0x1A
    // typedef void(*DosInt21SetDiskTransferAddress(void* disk_transfer_address));
    fn_ptr_1 = swi(0x21);
    (*(DosInt21SetDiskTransferAddress)fn_ptr_1)();
    bVar3  = 0x0;

    // 0x4E
    // typedef u16(*DosInt21FindFirstMatchingFile)(u16 file_attributes, char* filespec, void** disk_transfer_address);
    fn_ptr_1 = swi(0x21);
    u_var2  = (*(DosInt21FindFirstMatchingFile)fn_ptr_1)();

    // 0x1A
    fn_ptr_1 = swi(0x21);
    (*(DosInt21SetDiskTransferAddress)fn_ptr_1)();
    if((bVar3 & 0x1) == 0x0)
    {
        return 0x0;
    }
    pass1_1000_29b5(u_var2);
    return u_var2 & 0xff;
}


void fatal_app_exit_1000_3e9e(Globals *globals, u16 app_exit_action)

{
    FatalAppExit16(app_exit_action, globals->s_ABNORMAL_PROGRAM_TERMINATION_1050_6544);
}

u16 sys_1000_3f9c(u8 *param_1,
                  u8 *param_2,
                  u16 param_3,
                  u16 param_5,
                  i16 param_6,
                  u16 param_7,
                  u16 param_8,
                  u16 param_9,
                  u8  param_10)

{
    u8 *puVar1;
    u16 u_var2;
    u16 local_4;
    i16 iStack2;

    iStack2                           = param_6 + 0x1;
    globals->PTR_LOOP_1050_68b2._0_1_ = 0x42;
    globals->PTR_LOOP_1050_68ae       = param_1;
    globals->PTR_LOOP_1050_68b0       = param_2;
    _USHORT_1050_68a8                 = str_var1(param_2, param_1);
    globals->PTR_LOOP_1050_68ac       = 0x7fff;
    u_var2                             = sys_1000_30b4(&USHORT_1050_68a8, SEG_1050, (u8 *)str_var1(param_4, param_3), &iStack2, &USHORT_1050_68a8, param_7, param_8, param_9);
    puVar1                            = _USHORT_1050_68a8;
    globals->PTR_LOOP_1050_68ac       = globals->PTR_LOOP_1050_68ac + -0x1;
    if(globals->PTR_LOOP_1050_68ac < 0x0)
    {
        mem_1000_2bb6(0x0, &USHORT_1050_68a8, &iStack2, param_7, param_8, param_9, param_10, param_2);
    }
    else
    {
        _USHORT_1050_68a8 = (_USHORT_1050_68a8 & 0xffff0000 | (USHORT_1050_68a8 + 0x1));
        *puVar1           = 0x0;
    }
    return u_var2;
}


u8 *pass1_1000_400a(i16 param_1, u16 param_2)

{
    u8 *puVar1;
    i16 iStack2;

    iStack2 = param_2 + 0x1;
    if((param_1 < 0x0) || (globals->PTR_s_ed_in_Op_Op_1050_0028_1050_5f8e <= param_1))
    {
        globals->PTR_LOOP_1050_5f78 = &DAT_1050_0009;
        puVar1                      = 0xffff;
    }
    else
    {
        if(((globals->PTR_LOOP_1050_61ec == 0x0) || ((param_1 < DAT_1050_5f8a && (0x2 < param_1)))) && (0x31d < CONCAT11(DAT_1050_5f83, DAT_1050_5f82)))
        {
            puVar1 = globals->PTR_LOOP_1050_5f88;
            if(((*(u8 *)(param_1 + 0x5f90) & 0x1) == 0x0) || (puVar1 = dos3_call_1000_5174(&iStack2), puVar1 != 0x0))
            {
                globals->PTR_LOOP_1050_5f88 = puVar1;
                globals->PTR_LOOP_1050_5f78 = &DAT_1050_0009;
                puVar1                      = 0xffff;
            }
        }
        else
        {
            puVar1 = 0x0;
        }
    }
    return puVar1;
}

void free_mem_1000_407a(u16 param_1, u16 param_2, u16 param_3)

{
    GlobalFree16(SEG_1000);
    return;
}


i16 *mixed_sys_op_1000_40af(u16 param_1, i16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    u16      *puVar1;
    u16       u_var2;
    char     *pcVar3;
    u16      *puVar4;
    LPCSTR    str;
    u16      *puVar5;
    u16       uVar6;
    u16       uVar7;
    HGLOBAL16 HVar8;
    SEGPTR    SVar9;
    i16       iVar10;
    u16       uVar11;
    u16      *puVar12;
    char     *pcVar13;
    u16      *puVar14;
    u16       unaff_SS;
    bool      bVar15;
    i16       iVar16;
    u16       uVar17;

    do
    {
        uVar6 = (param_1 * param_3);
        uVar7 = param_2 * param_3 + (param_1 * param_3 >> 0x10);
        if((uVar7 | uVar6) != 0x0)
        {
            puVar12 = 0x0;
            if((uVar7 < 0x3) && ((uVar7 < 0x2 || (uVar6 == 0x0))))
            {
                if(uVar7 == 0x0)
                {
                    uVar6 = uVar6 + 0xfff & 0xf000;
                    if(uVar6 == 0x0)
                    {
                        uVar7 = 0x1;
                    }
                }
                else
                {
                    if((param_3 - 0x1 & param_3) != 0x0)
                    {
                        puVar12 = ((uVar7 << 0x10) % param_3);
                        bVar15  = CARRY2(uVar6, puVar12);
                        uVar6   = uVar6 + puVar12;
                        if(bVar15)
                            goto LAB_1000_41aa;
                        uVar7 = 0x1;
                    }
                }
            }
            else
            {
                if((param_3 - 0x1 & param_3) != 0x0)
                    goto LAB_1000_41aa;
            }
            uVar17 = 0x0;
            uVar11 = uVar7;
            HVar8  = GLobalAlloc16(SEG_1000, str_var1(uVar7, uVar6));
            if((HVar8 != 0x0) && ((uVar17 & 0x1) != 0x0))
            {
                SVar9 = WIN16_GlobalLock16((HGLOBAL16)LAST_SEGMENT);
                if((SVar9 != 0x0) || (uVar7 == 0x0))
                {
                    iVar16 = 0x12;
                    iVar10 = 0x12;
                    pass1_1000_25a8(param_5, LAST_SEGMENT);
                    pass1_1000_2913(iVar10, param_5, LAST_SEGMENT);
                    str = poss_str_op_1000_28dc(iVar16);
                    if(str == (PCHAR)0x0)
                        goto LAB_1000_28cb;
                    iVar10 = 0x9;
                    if(*str == 'M')
                    {
                        iVar10 = 0xf;
                    }
                    str     = str + iVar10;
                    iVar10  = 0x22;
                    pcVar13 = str;
                    break;
                }
                HVar8 = pass1_1000_422a(uVar7, HVar8, LAST_SEGMENT, unaff_SS);
                if(HVar8 == 0x0)
                {
                    GlobalUnlock16((HGLOBAL16)LAST_SEGMENT);
                    GlobalFree16((HGLOBAL16)LAST_SEGMENT);
                    HVar8 = 0x0;
                }
            }
            param_4 = LAST_SEGMENT;
            if(HVar8 != 0x0)
            {
                puVar14 = 0x0;
                for(; uVar11 != 0x0; uVar11 = uVar11 - 0x1)
                {
                    for(iVar10 = -0x8000; iVar10 != 0x0; iVar10 = iVar10 + -0x1)
                    {
                        puVar4  = puVar14;
                        puVar14 = puVar14 + 0x1;
                        *puVar4 = 0x0;
                    }
                    HVar8 = HVar8 + 0x100;
                }
                if(uVar6 != 0x0)
                {
                    for(; uVar6 != 0x0; uVar6 = uVar6 - 0x1)
                    {
                        puVar4  = puVar14;
                        puVar14 = (puVar14 + 0x1);
                        *puVar4 = 0x0;
                    }
                }
                return puVar12;
            }
        }
    LAB_1000_41aa:
        if((globals->PTR_LOOP_1050_618e | globals->PTR_LOOP_1050_618c) == 0x0)
        {
            return 0x0;
        }
        iVar10 = (*(fn_ptr_1)PTR_LOOP_1050_618c)(param_4, param_3, param_1, param_2);
        if(iVar10 == 0x0)
        {
            return 0x0;
        }
    } while(true);
    while(true)
    {
        iVar10  = iVar10 + -0x1;
        pcVar3  = pcVar13;
        pcVar13 = pcVar13 + 0x1;
        if(*pcVar3 == '\r')
            break;
        if(iVar10 == 0x0)
            break;
    }
    pcVar13[-0x1] = '\0';
LAB_1000_28cb:
    FatalAppExit16(LAST_SEGMENT, str);
    FatalExit();
    puVar12 = &globals->u16_1050_63fe;
    do
    {
        puVar1  = puVar12;
        puVar12 = puVar12 + 0x1;
        u_var2   = *puVar1;
        puVar5  = puVar12;
        if((u_var2 == HVar8) || (puVar5 = (u_var2 + 0x1), puVar5 == 0x0))
        {
            return puVar5;
        }
        iVar10 = -0x1;
        do
        {
            if(iVar10 == 0x0)
                break;
            iVar10  = iVar10 + -0x1;
            puVar1  = puVar12;
            puVar12 = (puVar12 + 0x1);
        } while(*puVar1 != '\0');
    } while(true);
}

void dos3_call_set_struct_1000_42de(u16 *param_1, u16 *param_2, u16 *param_3)

{
    u16        uVar1;
    u16        u_var2;
    void *pcVar3;
    u16        uVar4;
    u16        uVar5;
    i16        iVar6;
    u16        uVar7;
    u16        uVar8;
    u16        uVar9;
    bool       bVar10;
    u32 uVar11;

    uVar7           = (param_1 >> 0x10);
    iVar6           = param_1;
    uVar5           = (iVar6 + 0x2);
    uVar4           = (iVar6 + 0x4);
    uVar1           = (iVar6 + 0x8);
    uVar7           = (iVar6 + 0xa);
    uVar8           = (param_3 >> 0x10);
    u_var2           = *param_3;
    uVar9           = (param_3 + 0x6);
    bVar10          = false;
    pcVar3          = swi(0x21);
    uVar11          = (*pcVar3)();
    *param_3        = u_var2;
    (param_3 + 0x6) = uVar9;
    uVar9           = (param_2 >> 0x10);
    iVar6           = param_2;
    *param_2        = uVar11;
    (iVar6 + 0x2)   = uVar5;
    (iVar6 + 0x4)   = uVar4;
    (iVar6 + 0x6)   = (uVar11 >> 0x10);
    (iVar6 + 0x8)   = uVar1;
    (iVar6 + 0xa)   = uVar7;
    if(bVar10)
    {
        pass1_1000_29af(uVar11);
    }
    (iVar6 + 0xc) = bVar10;
}


void get_date_time_op_1000_435c(Globals *globals, u16 *param_1, u16 param_2, u16 param_3, i16 param_4, u16 param_5)

{
    void*fn_ptr_1;
    u16 u_var2;
    u16 uVar3;
    u16 extraout_DX;
    u16 extraout_DX_00;
    u16 extraout_DX_01;
    u16 uVar4;
    u16 uVar5;
    u16 uVar6;
    u16 uVar7;
    u16 uVar8;
    u16 uVar9;
    i16 iStack2;

    iStack2 = param_4 + 0x1;
    // AH = 0x2A
    // Get Date
    fn_ptr_1 = swi(0x21);
    ((DosInt21GetDate)fn_ptr_1)(SEG_1050);
    // AH = 0x2C
    // Get Time
    fn_ptr_1 = swi(0x21);
    uVar3  = param_2;
    uVar5  = extraout_DX;
    ((DosInt21GetTime)fn_ptr_1)();
    uVar9  = extraout_DX_00 >> 0x8;
    uVar8  = uVar3 & 0xff;
    uVar6  = uVar3 >> 0x8;
    // Get Date
    fn_ptr_1 =swi(0x21);
    uVar7  = uVar6;
    ((DosInt21GetDate)fn_ptr_1)(0);
    uVar4 = extraout_DX_01;
    if((uVar5 != extraout_DX_01) && (uVar4 = extraout_DX_01, uVar6 == '\x17'))
    {
        uVar3 = param_2;
        uVar4 = uVar5;
    }
    u_var2 = pass1_1000_462e(NULL, uVar3 - 0x7bc, uVar4 >> 0x8, uVar4 & 0xff, uVar7, uVar8, uVar9, &iStack2, param_5, uVar4);
    if(param_1 != 0x0)
    {
        param_1->field_0x2 = uVar4;
        param_1->field_0x0 = u_var2;
    }
}

u16 dos3_call_op_1000_35fe(u16 param_1, i16 param_2)

{
    void *fn_ptr_1;
    u16   u_var2;
    bool  bVar3;

    if(param_1 < DAT_1050_5f8a)
    {
        bVar3  = false;
        // 0x3E
        fn_ptr_1 = swi(0x21);
        // typedef u16(*DosInt21ClosFileUsingHandle(u16 file_handle));
        u_var2  = (*(DosInt21ClosFileUsingHandle)fn_ptr_1)(param_2 + 0x1);
        if(!bVar3)
        {
            *(param_1 + 0x5f90) = 0x0;
        }
    }
    else
    {
        u_var2 = 0x900;
        bVar3 = true;
    }
    if(bVar3)
    {
        pass1_1000_29b5(u_var2);
        return 0xffff;
    }
    return 0x0;
}


// WARNING: Removing unreachable block (ram,0x100036b5)
// WARNING: Removing unreachable block (ram,0x10003681)
// WARNING: Removing unreachable block (ram,0x100036f7)
// WARNING: Removing unreachable block (ram,0x100036d8)

void mixed_dos3_call_1000_3636(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    u8        *pbVar1;
    void      *fn_ptr_1;
    u16        uVar3;
    i16        iVar4;
    bool       bVar5;
    u32 uVar6;

    if(((param_1 < DAT_1050_5f8a) || (globals->PTR_LOOP_1050_61ec == 0x0)) || (0x2 < param_1))
    {
        if((globals->PTR_LOOP_1050_6064 == 0x0) || ((param_3 & 0x8000) == 0x0))
            goto LAB_1000_36e3;
        if(param_4 == 0x0)
            goto LAB_1000_369b;
        bVar5  = false;
        // 0x09
        // typedef void(*DosInt21PrintString)(char* StringPointer);
        fn_ptr_1 = swi(0x21);
        uVar6  = (*(DosInt21PrintString)fn_ptr_1)();
        iVar4  = (uVar6 >> 0x10);
        uVar3  = uVar6;
        if(bVar5)
        {
            goto LAB_1000_299d;
        }
        if((param_4 & 0x2) == 0x0)
        {
            if(-0x1 < (iVar4 + param_3 + CARRY2(uVar3, param_2)))
            {
            LAB_1000_36e3:
                bVar5  = false;
                // 0x42
                fn_ptr_1 = swi(0x21);
                uVar3  = (*fn_ptr_1)();
                if(!bVar5)
                {
                    pbVar1  = (u8 *)(param_1 + 0x5f90);
                    bVar5   = false;
                    *pbVar1 = *pbVar1 & 0xfd;
                }
                goto LAB_1000_299d;
            }
        }
        else
        {
            // 0x42
            fn_ptr_1 = swi(0x21);
            uVar6  = (*fn_ptr_1)(iVar4);
            if(-0x1 < ((uVar6 >> 0x10) + param_3 + CARRY2(uVar6, param_2)))
            {
                goto LAB_1000_36e3;
            }
            // 0x42
            fn_ptr_1 = swi(0x21);
            (*fn_ptr_1)();
        }
    LAB_1000_369b:
        uVar3 = s_471_bmp_1050_1600;
    }
    else
    {
        uVar3 = 0x900;
    }
    bVar5 = true;
LAB_1000_299d:
    if(bVar5)
    {
        pass1_1000_29b5(uVar3);
    }
}


// WARNING: Removing unreachable block (ram,0x10003989)
// WARNING: Removing unreachable block (ram,0x100038a1)
// WARNING: Removing unreachable block (ram,0x10003867)
// WARNING: Removing unreachable block (ram,0x10003799)
// WARNING: Removing unreachable block (ram,0x100037ec)
// WARNING: Removing unreachable block (ram,0x10003967)
// WARNING: Removing unreachable block (ram,0x1000391a)
// WARNING: Removing unreachable block (ram,0x100038f2)
// WARNING: Removing unreachable block (ram,0x10003765)
// WARNING: Removing unreachable block (ram,0x100037b7)
// WARNING: Removing unreachable block (ram,0x10003803)
// WARNING: Removing unreachable block (ram,0x1000381c)
// WARNING: Removing unreachable block (ram,0x1000393a)
// WARNING: Removing unreachable block (ram,0x1000384b)
// WARNING: Removing unreachable block (ram,0x1000388b)
// WARNING: Removing unreachable block (ram,0x100038ba)
// WARNING: Removing unreachable block (ram,0x100039b9)

u16 mixed_dos3_call_1000_370a(u16 param_1, u16 param_2, u16 param_3, u8 param_4, u16 param_5, i16 param_6)

{
    void *fn_ptr_1;
    u16   u_var2;
    i16   iVar3;
    u8    bVar4;
    u16   uVar5;
    u16   extraout_DX;
    u16   uVar6;
    bool  bVar7;
    bool  bVar8;
    u16   uVar9;
    u8    bVar10;
    char  local_5;

    _param_4 = param_5;
    bVar10   = 0x0;
    if(((param_3 & 0x8000) == 0x0) && (((param_3 & 0x4000) != 0x0 || ((DAT_1050_6061 & 0x80) == 0x0))))
    {
        bVar10 = 0x80;
    }
    uVar9  = SUB42(SEG_1050, 0x0);
    bVar7  = false;
    // 3d
    fn_ptr_1 = swi(0x21);
    uVar5  = param_3;
    // typedef u16(*DosInt21OpenFileUsingHandle2)(u8 mode, char* filename);
    u_var2  = (*(DosInt21OpenFileUsingHandle2)fn_ptr_1)(bVar10, param_4, SEG_1050, param_6 + 0x1);
    if(bVar7)
    {
        if((u_var2 == 0x2) && ((uVar5 & 0x100) != 0x0))
        {
            bVar7 = false;
            pass1_1000_39e1();
            _param_4 = param_5;
            if((param_4 != 0x0) || (uVar5 = param_5, (param_3 & 0x2) == 0x0))
            {
                uVar5 = 0x0;
            }
        LAB_1000_38e3:
            bVar8  = false;
            // 3C
            fn_ptr_1 = swi(0x21);
            // typedef u16(*DosInt21CreateFileWithHandle)(u16 file_attrib, char* path_name);
            u_var2  = (*(DosInt21CreateFileWithHandle)fn_ptr_1)();
            if(bVar8)
                goto LAB_1000_299d;
            if((param_4 != 0x0) || (uVar6 = u_var2, (param_3 & 0x2) == 0x0))
            {
                // 3E
                fn_ptr_1 = swi(0x21);
                // typedef u16(*DosInt21ClosFileUsingHandle)(u16 file_handle);
                (*fn_ptr_1)();
                bVar8  = false;
                // 3D
                fn_ptr_1 = swi(0x21);
                u_var2  = (*fn_ptr_1)();
                if(bVar8)
                    goto LAB_1000_299d;
                uVar6 = u_var2;
                if((!bVar7) && ((_param_4 & 0x1) != 0x0))
                {
                    uVar5  = (u8)((u8)uVar5 | 0x1);
                    bVar8  = false;
                    // 43
                    fn_ptr_1 = swi(0x21);
                    u_var2  = (*fn_ptr_1)();
                    if(bVar8)
                        goto LAB_1000_299d;
                }
            }
        LAB_1000_3973:
            if((bVar10 & 0x40) == 0x0)
            {
                // 3E
                fn_ptr_1 = swi(0x21);
                (*fn_ptr_1)();
                bVar4 = 0x0;
                if((uVar5 & 0x1) != 0x0)
                {
                    bVar4 = 0x10;
                }
                if((param_3 & 0x8) != 0x0)
                {
                    bVar4 = bVar4 | 0x20;
                }
            }
            else
            {
                bVar4 = 0x0;
            }
            if(uVar6 < &DAT_1050_5f8a)
            {
                *(u8 *)(uVar6 + 0x5f90) = bVar4 | bVar10 | 0x1;
                return uVar6;
            }
            // 3E
            fn_ptr_1 = swi(0x21);
            (*fn_ptr_1)();
            u_var2 = 0x1800;
        }
    }
    else
    {
        if((uVar5 & 0x500) != 0x500)
        {
            bVar7  = true;
            // 44
            fn_ptr_1 = swi(0x21);
            (*fn_ptr_1)();
            if((extraout_DX & 0x80) != 0x0)
            {
                bVar10 = bVar10 | 0x40;
            }
            uVar6 = u_var2;
            if((bVar10 & 0x40) == 0x0)
            {
                if((param_3 & 0x200) == 0x0)
                {
                    if(((bVar10 & 0x80) != 0x0) && ((param_3 & 0x2) != 0x0))
                    {
                        // 42
                        fn_ptr_1 = swi(0x21);
                        (*fn_ptr_1)();
                        // 3f
                        fn_ptr_1 = swi(0x21);
                        iVar3  = (*fn_ptr_1)();
                        if((iVar3 != 0x0) && (local_5 == '\x1a'))
                        {
                            // 42
                            fn_ptr_1 = swi(0x21);
                            (*fn_ptr_1)();
                            // 40
                            fn_ptr_1 = swi(0x21);
                            (*fn_ptr_1)();
                        }
                        uVar5  = 0x0;
                        // 42
                        fn_ptr_1 = swi(0x21);
                        (*fn_ptr_1)();
                        uVar6 = u_var2;
                    }
                }
                else
                {
                    if((param_3 & 0x3) == 0x0)
                    {
                        // 3e
                        fn_ptr_1 = swi(0x21);
                        (*fn_ptr_1)();
                        // 43
                        fn_ptr_1 = swi(0x21);
                        (*fn_ptr_1)();
                        goto LAB_1000_38e3;
                    }
                    uVar5  = 0x0;
                    // 40
                    fn_ptr_1 = swi(0x21);
                    (*fn_ptr_1)();
                    uVar6 = u_var2;
                }
            }
            goto LAB_1000_3973;
        }
        // 3E
        fn_ptr_1 = swi(0x21);
        (*fn_ptr_1)();
        u_var2 = 0x1100;
    }
    bVar8 = true;
LAB_1000_299d:
    if(bVar8)
    {
        pass1_1000_29b5(u_var2);
        u_var2 = 0xffff;
    }
    return u_var2;
}


u8 *mixed_dos3_call_1000_39f2(u8 *param_1, char *param_2, u8 *param_3, u16 param_4, u16 param_5, u16 param_6, char param_7)

{
    u8        *pbVar1;
    u8        *pu_var2;
    void *pcVar3;
    u16        uVar4;
    u8        *puVar5;
    i16       *piVar6;
    u8        *puVar7;
    u16        uVar8;
    i16       *piVar9;
    u8        *puVar10;
    i16       *pi_var11;
    i16        iVar12;
    u8        *puVar13;
    u8        *pbVar14;
    u8        *puVar15;
    i16        unaff_BP;
    u8        *pbVar16;
    u8        *puVar17;
    u16        uVar18;
    u8         uVar19;
    u8         bVar20;
    char       cVar21;
    bool       bVar22;
    char       cVar23;
    char       cVar24;
    u32 u_var25;
    char      *pcVar26;
    i16       *piStack8;
    i16       *piStack6;
    i16        iStack2;

    puVar5  = DAT_1050_5f8a;
    iStack2 = unaff_BP + 0x1;
    puVar7  = DAT_1050_5f8a;
    if((globals->PTR_LOOP_1050_61ec != 0x0) && (puVar7 = globals->PTR_s_ed_in_Op_Op_1050_0028_1050_5f8e, param_1 < (&PTR_LOOP_1050_0002 + 0x1U)))
    {
        param_1 = DAT_1050_5f8a;
    }
    if(puVar7 <= param_1)
    {
        uVar19 = true;
        piVar6 = 0x900;
        goto LAB_1000_299d;
    }
    puVar7 = param_1;
    if((param_1[0x5f90] & 0x20) != 0x0)
    {
        uVar19  = false;
        // 0x42
        pcVar3  = swi(0x21);
        piVar6  = (*pcVar3)();
        param_5 = SEG_1000;
        if((bool)uVar19)
            goto LAB_1000_299d;
    }
    pbVar14 = (u8 *)param_2;
    if((puVar7[0x5f90] & 0x80) == 0x0)
    {
    LAB_1000_3acf:
        uVar19 = false;
        piVar6 = param_3;
        if(param_3 != 0x0)
        {
            uVar19 = puVar7 < puVar5;
            if((bool)uVar19)
            {
                uVar19 = 0x0;
                // 0x040
                pcVar3 = swi(0x21);
                u_var25 = (*pcVar3)();
            }
            else
            {
                piVar6 = pass1_1000_55b1(0x3b71, param_4, param_5);
                u_var25 = str_var1(pbVar14, piVar6);
            }
            piVar6 = u_var25;
            if((bool)uVar19)
            {
                piVar6 = CONCAT11(0x9, u_var25);
            }
            else
            {
                uVar19 = false;
                if(piVar6 == 0x0)
                {
                    if(((puVar7[0x5f90] & 0x40) == 0x0) || (*(u_var25 >> 0x10) != '\x1a'))
                    {
                        uVar19 = true;
                        piVar6 = 0x1c00;
                    }
                    else
                    {
                        uVar19 = false;
                    }
                }
            }
        }
    }
    else
    {
        bVar22   = true;
        piStack6 = 0x0;
        piStack8 = 0x0;
        puVar10  = param_3;
        pbVar16  = pbVar14;
        if(param_3 != 0x0)
        {
            do
            {
                if(puVar10 == 0x0)
                    break;
                puVar10 = puVar10 + -0x1;
                pbVar1  = pbVar16;
                pbVar16 = pbVar16 + 0x1;
                bVar22  = *pbVar1 == 0xa;
            } while(!bVar22);
            param_4 = param_2;
            if(!bVar22)
                goto LAB_1000_3acf;
            pcVar26       = param_2;
            uVar8         = pass1_1000_3bac();
            pcVar26 = (pcVar26 >> 0x10);
            iVar12        = pcVar26;
            if(uVar8 < 0xa9)
            {
                piVar6  = exit_1000_25f2(0x3ad9, param_5, pcVar26, -0x4, param_2, param_5, param_6);
                pi_var11 = (pbVar16 + -iVar12);
                if(pi_var11 == 0x0)
                {
                    return piVar6;
                }
                bVar20 = param_1 < puVar5;
                uVar8  = param_1 - puVar5;
                cVar24 = uVar8 < 0x0;
                cVar23 = uVar8 == 0x0;
                cVar21 = (POPCOUNT(uVar8 & 0xff) & 0x1U) == 0x0;
                if((bool)bVar20)
                {
                    bVar20 = 0x0;
                    cVar24 = '\0';
                    cVar23 = '\x01';
                    cVar21 = '\x01';
                    // 0x040
                    pcVar3 = swi(0x21);
                    piVar9 = (*pcVar3)(SEG_1050, puVar10, puVar7);
                }
                else
                {
                    piVar9 = pass1_1000_55b1(0x3af1, param_2, param_5);
                }
                if(!(bool)bVar20)
                {
                    bVar20   = pi_var11 < piVar9;
                    uVar8    = pi_var11 - piVar9;
                    cVar24   = uVar8 < 0x0;
                    cVar23   = uVar8 == 0x0;
                    cVar21   = (POPCOUNT(uVar8 & 0xff) & 0x1U) == 0x0;
                    piStack6 = piVar9;
                    if((bool)bVar20 || (bool)cVar23)
                    {
                        return piVar6;
                    }
                }
                uVar8  = (u8)(cVar24 << 0x7 | cVar23 << 0x6 | param_7 << 0x4 | cVar21 << 0x2 | 0x2U | bVar20) << 0x8;
                piVar6 = (piVar9 & 0xff | uVar8);
                if(piStack6 == 0x0)
                {
                    uVar19 = (uVar8 & 0x100) != 0x0;
                    if((bool)uVar19)
                    {
                        piVar6 = CONCAT11(0x9, (piVar9 & 0xff));
                    }
                    else
                    {
                        if(((param_1[0x5f90] & 0x40) == 0x0) || (*param_2 != '\x1a'))
                        {
                            uVar19 = true;
                            piVar6 = 0x1c00;
                        }
                        else
                        {
                            uVar19 = false;
                        }
                    }
                    goto LAB_1000_299d;
                }
            }
            else
            {
                puVar15 = &stack0xffec;
                iVar12  = 0x200;
                if(uVar8 < 0x228)
                {
                    iVar12 = 0x80;
                }
                iVar12                  = -iVar12;
                puVar13                 = &stack0xffec + iVar12;
                puVar17                 = &stack0xffec + iVar12;
                (&stack0xffea + iVar12) = param_6;
                uVar18                  = (&stack0xffea + iVar12);
                do
                {
                    pbVar1  = pbVar14;
                    pbVar14 = pbVar14 + 0x1;
                    bVar20  = *pbVar1;
                    uVar4   = uVar8 & 0xff00;
                    uVar8   = uVar4 | bVar20;
                    if(bVar20 == 0xa)
                    {
                        uVar8 = CONCAT11((uVar4 >> 0x8), 0xd);
                        if(puVar17 == puVar15)
                        {
                            (&stack0xffea + iVar12) = 0x3abd;
                            uVar8                   = mixed_dos3_call_1000_3ad9(uVar8, puVar13, &iStack2, puVar17, uVar18, param_5, param_6, param_7);
                        }
                        pu_var2   = puVar17;
                        puVar17  = puVar17 + 0x1;
                        *pu_var2  = uVar8;
                        uVar8    = CONCAT11((uVar8 >> 0x8), 0xa);
                        piStack8 = (piStack8 + 0x1);
                    }
                    if(puVar17 == puVar15)
                    {
                        (&stack0xffea + iVar12) = 0x3ac8;
                        uVar8                   = mixed_dos3_call_1000_3ad9(uVar8, puVar13, &iStack2, puVar17, uVar18, param_5, param_6, param_7);
                    }
                    pu_var2  = puVar17;
                    puVar17 = puVar17 + 0x1;
                    *pu_var2 = uVar8;
                    param_3 = param_3 + -0x1;
                } while(param_3 != 0x0);
                (&stack0xffea + iVar12) = 0x3ab1;
                mixed_dos3_call_1000_3ad9(uVar8, puVar13, &iStack2, puVar17, uVar18, param_5, param_6, param_7);
            }
        }
        uVar19 = piStack6 < piStack8;
        piVar6 = (piStack6 - piStack8);
    }
LAB_1000_299d:
    if((bool)uVar19)
    {
        pass1_1000_29b5(piVar6);
        piVar6 = 0xffff;
    }
    return piVar6;
}


// WARNING: Unable to track spacebase fully for stack
// WARNING: Removing unreachable block (ram,0x10003afe)

u16 mixed_dos3_call_1000_3ad9(u16 param_1, i16 param_2, i16 param_3, i16 param_4, u16 param_5, u16 param_6, u16 param_7, char param_8)

{
    u16 *puVar1;
    i16 *piVar2;
    fn_ptr_1pcVar3;
    u16  uVar4;
    u16  uVar5;
    i16 *piVar6;
    i16 *piVar7;
    u16  uVar8;
    u8   bVar9;
    bool bVar10;
    char cVar11;
    char cVar12;
    char cVar13;

    piVar7 = (param_4 - param_2);
    if(piVar7 == 0x0)
    {
        return param_1;
    }
    uVar8  = (param_3 + 0x6);
    puVar1 = (param_3 + -0xc);
    bVar9  = uVar8 < *puVar1;
    uVar5  = uVar8 - *puVar1;
    cVar13 = uVar5 < 0x0;
    cVar12 = uVar5 == 0x0;
    cVar11 = (POPCOUNT(uVar5 & 0xff) & 0x1U) == 0x0;
    if((bool)bVar9)
    {
        bVar9  = 0x0;
        cVar13 = '\0';
        cVar12 = '\x01';
        cVar11 = '\x01';
        // 0x40
        pcVar3 = swi(0x21);
        piVar6 = (*pcVar3)(SEG_1050);
    }
    else
    {
        piVar6 = pass1_1000_55b1(0x3af1, param_5, param_6);
    }
    if(!(bool)bVar9)
    {
        piVar2  = (param_3 + -0x4);
        *piVar2 = *piVar2 + piVar6;
        bVar9   = piVar7 < piVar6;
        uVar5   = piVar7 - piVar6;
        cVar13  = uVar5 < 0x0;
        cVar12  = uVar5 == 0x0;
        cVar11  = (POPCOUNT(uVar5 & 0xff) & 0x1U) == 0x0;
        if((bool)bVar9 || (bool)cVar12)
        {
            return param_1;
        }
    }
    uVar4 = (u8)(cVar13 << 0x7 | cVar12 << 0x6 | param_8 << 0x4 | cVar11 << 0x2 | 0x2U | bVar9) << 0x8;
    uVar5 = piVar6 & 0xff | uVar4;
    if((param_3 + -0x4) == 0x0)
    {
        bVar10 = (uVar4 & 0x100) != 0x0;
        if(bVar10)
        {
            uVar5 = CONCAT11(0x9, (piVar6 & 0xff));
        }
        else
        {
            if(((*(u8 *)(uVar8 + 0x5f90) & 0x40) == 0x0) || (*(param_3 + 0x8) != '\x1a'))
            {
                bVar10 = true;
                uVar5  = 0x1c00;
            }
            else
            {
                bVar10 = false;
            }
        }
    }
    else
    {
        uVar5  = (param_3 + -0x4);
        puVar1 = (param_3 + -0x6);
        bVar10 = uVar5 < *puVar1;
        uVar5  = uVar5 - *puVar1;
    }
    if(bVar10)
    {
        ((param_3 + -0xa) + 0x2) = 0x29a2;
        pass1_1000_29b5(uVar5);
        uVar5 = 0xffff;
    }
    return uVar5;
}


void pass1_1000_3bc0(i16 param_1, i16 param_2, u16 *param_3, u16 param_4, u16 param_5, u16 param_6)

{
    i16 *pi_var1;
    u16  u_var2;
    u16  uVar3;
    u16  uVar4;
    i16  iVar5;
    u16 *puVar6;
    bool bVar7;
    u32  uVar8;

    if((*(u8 *)(param_2 + 0x2) & 0x1) != 0x0)
    {
        pass1_1000_3cb7(param_2);
        uVar4 = *param_3;
        if((uVar4 & 0x1) != 0x0)
        {
            param_1 = (param_1 - uVar4) + -0x1;
        }
        uVar4 = (param_2 + 0x4);
        if(uVar4 != 0x0)
        {
            uVar3 = param_1 + 0x2U + uVar4;
            if(!CARRY2(param_1 + 0x2U, uVar4))
            {
                param_4 = pass1_1000_29dc(param_6);
                uVar4   = &PTR_LOOP_1050_6066;
                if(uVar4 == SEG_1000)
                    goto LAB_1000_3c12;
                u_var2 = 0x8000;
                while(uVar4 <= u_var2)
                {
                    u_var2 = u_var2 >> 0x1;
                    if(u_var2 == 0x0)
                        goto LAB_1000_3c2b;
                }
                if(u_var2 < 0x8)
                    goto LAB_1000_3c2b;
                uVar4 = u_var2 << 0x1;
                goto LAB_1000_3c12;
            }
            u_var2 = 0x0;
            uVar4 = 0xfff0;
            if(uVar3 == 0x0)
            {
                while(true)
                {
                    bVar7 = false;
                    uVar8 = mixed_mem_op_1000_3c51(u_var2, uVar3, param_2, param_4, param_5, 0x3c23);
                    if(!bVar7)
                        break;
                    if(uVar4 == 0xfff0)
                    {
                        return;
                    }
                LAB_1000_3c2b:
                    uVar4 = 0x10;
                LAB_1000_3c12:
                    uVar4 = uVar4 - 0x1;
                    u_var2 = uVar4 + uVar3;
                    if(CARRY2(uVar4, uVar3))
                    {
                        u_var2 = 0x0;
                    }
                    uVar4 = ~uVar4;
                    u_var2 = u_var2 & uVar4;
                }
                iVar5                    = uVar8 - (param_2 + 0x4);
                (param_2 + 0x4)          = uVar8;
                *(u16 **)(param_2 + 0xa) = param_3;
                pi_var1                   = *(i16 **)(param_2 + 0xc);
                *pi_var1                  = iVar5 + -0x1;
                puVar6                   = (pi_var1 + iVar5);
                *puVar6                  = 0xfffe;
                *(u16 **)(param_2 + 0xc) = puVar6;
            }
        }
    }
    return;
}


u32 mixed_mem_op_1000_3c51(HGLOBAL16 param_1, HGLOBAL16 param_2, i16 param_3, u16 param_4, u16 param_5, i16 param_6)

{
    i16      *pi_var1;
    char     *pcVar2;
    LPCSTR    str;
    i16      *piVar3;
    HGLOBAL16 HVar4;
    i16      *piVar5;
    char     *pcVar6;
    DWORD     DVar7;
    HGLOBAL16 HVar8;
    i16       iVar9;
    i16       iVar10;

    if((*(u8 *)(param_3 + 0x2) & 0x4) == 0x0)
    {
        HVar8   = *(HGLOBAL16 *)(param_3 + 0x6);
        param_5 = LAST_SEGMENT;
        HVar4   = GlobalReAlloc16(SEG_1000, str_var1(param_1, 0x20), (param_1 == 0x0));
        if(HVar4 == 0x0)
        {
        LAB_1000_3cb6:
            return str_var1(param_1, HVar4);
        }
        if(HVar4 == HVar8)
        {
            param_5 = LAST_SEGMENT;
            HVar4   = param_2;
            DVar7   = GlobalSize16((HGLOBAL16)LAST_SEGMENT);
            if(DVar7 != 0x0)
            {
                param_1 = HVar4;
                if((*(u8 *)(HVar8 + 0x2) & 0x4) != 0x0)
                {
                    param_1                     = HVar4 - 0x1;
                    *(HGLOBAL16 *)(HVar8 - 0x2) = param_1;
                }
                goto LAB_1000_3cb6;
            }
        }
    }
    iVar10 = 0x12;
    iVar9  = 0x12;
    pass1_1000_25a8(param_4, param_5);
    pass1_1000_2913(iVar9, param_4, param_5);
    str = poss_str_op_1000_28dc(iVar10);
    if(str != (PCHAR)0x0)
    {
        iVar9 = 0x9;
        if(*str == 'M')
        {
            iVar9 = 0xf;
        }
        str    = str + iVar9;
        iVar9  = 0x22;
        pcVar6 = str;
        do
        {
            if(iVar9 == 0x0)
                break;
            iVar9  = iVar9 + -0x1;
            pcVar2 = pcVar6;
            pcVar6 = pcVar6 + 0x1;
        } while(*pcVar2 != '\r');
        pcVar6[-0x1] = '\0';
    }
    FatalAppExit16(param_5, str);
    FatalExit();
    piVar5 = &globals->u16_1050_63fe;
    do
    {
        pi_var1 = piVar5;
        piVar5 = piVar5 + 0x1;
        iVar9  = *pi_var1;
        piVar3 = piVar5;
        if((iVar9 == param_6) || (piVar3 = (iVar9 + 0x1), piVar3 == 0x0))
        {
            return str_var1(param_6, piVar3);
        }
        iVar9 = -0x1;
        do
        {
            if(iVar9 == 0x0)
                break;
            iVar9  = iVar9 + -0x1;
            pi_var1 = piVar5;
            piVar5 = (piVar5 + 0x1);
        } while(*pi_var1 != '\0');
    } while(true);
}

void pass1_1000_3cd8(u16 param_1, u16 param_2)

{
    free_mem_1000_407a(param_1, param_2, &stack0xfffe);
    return;
}

u16 pass1_1000_2e74(u16 *param_1, u16 param_2)

{
    u16 *puVar1;
    u16  u_var2;
    u16  uVar3;
    u16 *puVar4;
    u16 *puVar5;

    if(globals->PTR_LOOP_1050_61ec != 0x0)
    {
        puVar5 = param_1 + 0x78;
        puVar4 = 0x5ff2;
        if((param_1 == 0x621c) || (puVar4 = &PTR_LOOP_1050_5ff6, param_1 == 0x6228))
        {
            if(((*(u8 *)(param_1 + 0x5) & 0xc) == 0x0) && ((*(u8 *)puVar5 & 0x1) == 0x0))
            {
                u_var2 = *puVar4;
                uVar3 = puVar4[0x1];
                if((u_var2 | uVar3) == 0x0)
                {
                    u_var2 = mem_1000_167a(0x200, param_2, uVar3);
                    if(uVar3 == 0x0)
                    {
                        return 0x0;
                    }
                    *puVar4     = u_var2;
                    puVar4[0x1] = uVar3;
                }
                param_1[0x3]  = u_var2;
                param_1[0x4] = uVar3;
                param_1->field_0x0 = u_var2;
                param_1[0x1] = uVar3;
                param_1[0x2]  = 0x200;
                param_1[0x79] = 0x200;
                puVar1        = param_1 + 0x5;
                *(u8 *)puVar1 = *(u8 *)puVar1 | 0x2;
                *(u8 *)puVar5 = 0x11;
                return 0x1;
            }
        }
        else
        {
            if((u8)DAT_1050_5f8a <= *(u8 *)(param_1 + 0xb))
            {
                puVar1        = puVar5;
                *(u8 *)puVar1 = *(u8 *)puVar1 | 0x10;
            }
        }
    }
    return 0x0;
}

u16 pass1_1000_30a4(i16 param_1, u16 param_2, u16 param_3, u16 param_4, i16 param_5, u16 param_6, u16 param_7, u16 param_8, u16 param_9, u8 param_10)

{
    u16  *puVar1;
    char  cVar2;
    char *pcVar3;
    u8    bVar4;
    u16   uVar5;
    u16  *puVar6;

    puVar6           = (param_5 + (param_3 + param_6) + param_10);
    puVar1           = puVar6;
    *puVar1          = *puVar1 ^ puVar6;
    puVar1           = (puVar6 + param_3 + 0x31);
    *puVar1          = *puVar1 ^ param_4;
    puVar1           = (puVar6 + -0x3acf);
    *puVar1          = *puVar1 ^ param_3;
    puVar1           = puVar6 + -0x3794;
    *puVar1          = *puVar1 ^ param_2;
    (param_1 + -0x2) = param_4 + 0x1;
    (param_1 + -0x4) = SEG_1050;
    (param_1 + -0x6) = param_8;
    (param_1 + -0x8) = 0x30c5;
    exit_1000_25f2((param_1 + -0x8), (param_1 + -0x6), (param_1 + -0x4), 0x214, param_7, param_8, param_9);
    *(u16 **)(param_1 + -0x6) = puVar6;
    (param_1 + -0x8)          = param_6 ^ puVar6;
    (param_1 + -0xc)          = 0x0;
    *(param_1 + -0x9)         = 0x0;
    pcVar3                    = (param_1 + 0x8);
    cVar2                     = *pcVar3;
    (param_1 + 0x8)           = pcVar3 + 0x1;
    *(param_1 + -0x6)         = cVar2;
    if((cVar2 != '\0') && (-0x1 < (param_1 + -0xc)))
    {
        if((u8)(cVar2 - 0x20U) < 0x59)
        {
            bVar4 = *(u8 *)((u8)(cVar2 - 0x20U) + 0x5ffe) & 0xf;
        }
        else
        {
            bVar4 = 0x0;
        }
        bVar4                   = *(u8 *)((u8)(bVar4 * '\b' + *(param_1 + -0x9)) + 0x5ffe) >> 0x4;
        *(u8 *)(param_1 + -0x9) = bVar4;
        // WARNING: Could not recover jumptable at 0x1000310e. Too many branches
        // WARNING: Treating indirect jump as call
        uVar5 = (**(bVar4 * 0x2 + 0x30a4))();
        return uVar5;
    }
    return (param_1 + -0xc);
}


u16 sys_1000_30b4(u16 param_1, u16 param_2, u8 *param_3, i16 param_4, u16 param_5, u16 param_6, u16 param_7, u16 param_8)

{
    u8  bVar1;
    u8  bVar2;
    u16 uVar3;
    i16 iVar3;
    u16 uVar4;

    iVar3 = param_4 + 0x1;
    uVar4 = SUB42(SEG_1050, 0x0);
    exit_1000_25f2(0x30c5, param_7, SEG_1050, 0x214, param_6, param_7, param_8);
    bVar1 = *param_3;
    if(bVar1 == 0x0)
    {
        return 0x0;
    }
    if((u8)(bVar1 - 0x20) < 0x59)
    {
        bVar2 = *(u8 *)((u8)(bVar1 - 0x20) + 0x5ffe) & 0xf;
    }
    else
    {
        bVar2 = 0x0;
    }
    // WARNING: Could not emulate address calculation at 0x10003101
    // WARNING: Treating indirect jump as call
    uVar3 = (**((*(u8 *)((u8)(bVar2 * '\b') + 0x5ffe) >> 0x4) * 0x2 + 0x30a4))(param_5 & 0xff00 | bVar1, uVar4, iVar3);
    return uVar3;
}

i16 pass1_1000_3503(char param_1, u16 param_2, i16 param_3, u16 param_4, u16 param_5, u8 param_6)

{
    i16   *pi_var1;
    char  *pcVar2;
    char **ppcVar3;
    u16    uVar4;
    i16   *piVar5;
    u16    uVar6;

    ppcVar3 = (char **)*(i16 **)(param_3 + 0x6);
    uVar6   = (ppcVar3 >> 0x10);
    piVar5  = ppcVar3;
    pi_var1  = piVar5 + 0x2;
    *pi_var1 = *pi_var1 + -0x1;
    if(*pi_var1 < 0x0)
    {
        uVar4 = mem_1000_2bb6(param_1, piVar5, param_3, uVar6, param_4, param_5, param_6, param_2);
        if(uVar4 == 0xffff)
        {
            return -0x1;
        }
    }
    else
    {
        pcVar2   = *ppcVar3;
        *ppcVar3 = *ppcVar3 + 0x1;
        *pcVar2  = param_1;
    }
    return 0x0;
}

i16 *pass1_1000_25d2(i16 param_1, i16 param_2, u16 param_3, u16 param_4, u16 param_5, u8 *param_6)

{
    u16   *puVar1;
    i16   *piVar2;
    char  *pcVar3;
    u8    *puVar4;
    u16    uVar5;
    i16   *piVar6;
    LPCSTR str;
    i16   *piVar7;
    char  *pcVar8;
    i16    iVar9;

    puVar4 = (param_2 + 0x1U & 0xfffe);
    if((puVar4 < &param_1) && (uVar5 = -(puVar4 - &param_1), puVar1 = &PTR_LOOP_1050_000a, *puVar1 < uVar5 || *puVar1 == uVar5))
    {
        puVar1 = &PTR_LOOP_1050_000c;
        if(uVar5 <= *puVar1 && *puVar1 != uVar5)
        {
            &PTR_LOOP_1050_000c = uVar5;
        }
        // WARNING: Could not recover jumptable at 0x100025f0. Too many branches
        // WARNING: Treating indirect jump as call
        piVar6 = (*(fn_ptr_1)param_6)();
        return piVar6;
    }
    iVar9 = 0x0;
    pass1_1000_25a8(param_3, param_4);
    pass1_1000_2913(iVar9, param_3, param_4);
    str = poss_str_op_1000_28dc(0x0);
    if(str != (PCHAR)0x0)
    {
        iVar9 = 0x9;
        if(*str == 'M')
        {
            iVar9 = 0xf;
        }
        str    = str + iVar9;
        iVar9  = 0x22;
        pcVar8 = str;
        do
        {
            if(iVar9 == 0x0)
                break;
            iVar9  = iVar9 + -0x1;
            pcVar3 = pcVar8;
            pcVar8 = pcVar8 + 0x1;
        } while(*pcVar3 != '\r');
        pcVar8[-0x1] = '\0';
    }
    FatalAppExit16(param_4, str);
    FatalExit();
    piVar6 = &globals->u16_1050_63fe;
    do
    {
        piVar2 = piVar6;
        piVar6 = piVar6 + 0x1;
        iVar9  = *piVar2;
        piVar7 = piVar6;
        if((iVar9 == param_1) || (piVar7 = (iVar9 + 0x1), piVar7 == 0x0))
        {
            return piVar7;
        }
        iVar9 = -0x1;
        do
        {
            if(iVar9 == 0x0)
                break;
            iVar9  = iVar9 + -0x1;
            piVar2 = piVar6;
            piVar6 = (piVar6 + 0x1);
        } while(*piVar2 != '\0');
    } while(true);
}

i16 *exit_1000_25f2(u16 param_1, u16 param_2, i16 param_3, i16 param_4, u16 param_5, u16 param_6, u16 param_7)

{
    i16  **ppi_var1;
    i16   *piVar2;
    char  *pcVar3;
    u8    *puVar4;
    i16   *piVar5;
    u16    uVar6;
    LPCSTR str;
    i16    iVar7;
    i16   *piVar8;
    char  *pcVar9;

    puVar4 = (param_4 + 0x1U & 0xfffe);
    if((puVar4 < &param_3) && (piVar5 = -(puVar4 - &param_3), ppi_var1 = (i16 **)&PTR_LOOP_1050_000a, *ppi_var1 < piVar5 || *ppi_var1 == piVar5))
    {
        ppi_var1 = (i16 **)&PTR_LOOP_1050_000c;
        if(piVar5 <= *ppi_var1 && *ppi_var1 != piVar5)
        {
            *(i16 **)&PTR_LOOP_1050_000c = piVar5;
        }
        piVar5[-0x1] = param_2;
        piVar5[-0x2] = param_1;
        return piVar5;
    }
    uVar6 = pass1_1000_29dc(param_7);
    if(0x5fce != -0x1)
    {
        // WARNING: Could not recover jumptable at 0x10002622. Too many branches
        // WARNING: Treating indirect jump as call
        piVar5 = (*(fn_ptr_1) * 0x5fce)();
        return piVar5;
    }
    pass1_1000_25a8(param_5, param_6);
    pass1_1000_2913(0x0, param_5, param_6);
    str = poss_str_op_1000_28dc(0x0);
    if(str != (PCHAR)0x0)
    {
        iVar7 = 0x9;
        if(*str == 'M')
        {
            iVar7 = 0xf;
        }
        str    = str + iVar7;
        iVar7  = 0x22;
        pcVar9 = str;
        do
        {
            if(iVar7 == 0x0)
                break;
            iVar7  = iVar7 + -0x1;
            pcVar3 = pcVar9;
            pcVar9 = pcVar9 + 0x1;
        } while(*pcVar3 != '\r');
        pcVar9[-0x1] = '\0';
    }
    FatalAppExit16(param_6, str);
    FatalExit();
    piVar5 = &globals->u16_1050_63fe;
    do
    {
        piVar2 = piVar5;
        piVar5 = piVar5 + 0x1;
        iVar7  = *piVar2;
        piVar8 = piVar5;
        if((iVar7 == param_3) || (piVar8 = (iVar7 + 0x1), piVar8 == 0x0))
        {
            return piVar8;
        }
        iVar7 = -0x1;
        do
        {
            if(iVar7 == 0x0)
                break;
            iVar7  = iVar7 + -0x1;
            piVar2 = piVar5;
            piVar5 = (piVar5 + 0x1);
        } while(*piVar2 != '\0');
    } while(true);
}

void pass1_1000_262c(Globals *globals,
                     u16         param_1,
                     u16         param_2,
                     u16         param_3,
                     HINSTANCE16 param_4)

{
    char  *pcVar1;
    char   cVar2;
    u16    uVar3;
    u8    *puVar4;
    u16  IVar5;
    u16    uVar6;
    u16    uVar7;
    u16    uVar8;
    u8    *in_DX;
    i16    iVar9;
    char **ppcVar10;
    char  *pcVar11;
    char  *pcVar12;
    char  *pcVar13;
    u16    unaff_ES;
    u16    uVar14;
    u8    *puStack4;
    CHAR  *pCStack2;

    globals->PTR_LOOP_1050_5fd2 = param_1;
    globals->PTR_LOOP_1050_5fd4 = param_2;
    param_2                     = 0x263d;
    param_1                     = pass1_1000_2950(0x8, in_DX, unaff_ES, param_4);
    pCStack2                    = globals->hinst_1050_5f4c;
    puStack4                    = in_DX;
    globals->PTR_LOOP_1050_5fc2 = param_1;
    globals->PTR_LOOP_1050_5fc4 = in_DX;
    IVar5                       = GetModuleFileName16(param_4, (s_You_may_not_run_a_turn__The_game_1050_00df + 0x25), (u16)param_1);
    puStack4[IVar5]             = 0x0;
    iVar9                       = 0x1;
    globals->PTR_LOOP_1050_5fb8 = 0x1; //(&PTR_LOOP_1050_0000 + 0x1);
    pcVar11                     = (s_New_failed_in_Op__Op__DialogHand_1050_0073 + 0xe);
LAB_1000_266c:
    do
    {
        do
        {
            pcVar1  = pcVar11;
            pcVar11 = pcVar11 + 0x1;
            cVar2   = *pcVar1;
        } while(cVar2 == ' ');
    } while(cVar2 == '\t');
    if((cVar2 != '\r') && (cVar2 != '\0'))
    {
        globals->PTR_LOOP_1050_5fb8 = globals->PTR_LOOP_1050_5fb8 + 0x1;
        do
        {
            pcVar11 = pcVar11 + -0x1;
        LAB_1000_267f:
            pcVar1  = pcVar11;
            pcVar11 = pcVar11 + 0x1;
            cVar2   = *pcVar1;
            if((cVar2 == ' ') || (cVar2 == '\t'))
                goto LAB_1000_266c;
            if((cVar2 == '\r') || (cVar2 == '\0'))
                break;
            if(cVar2 == '\"')
            {
            LAB_1000_26b8:
                do
                {
                    while(true)
                    {
                        while(true)
                        {
                            pcVar1  = pcVar11;
                            pcVar11 = pcVar11 + 0x1;
                            cVar2   = *pcVar1;
                            if((cVar2 == '\r') || (cVar2 == '\0'))
                                goto LAB_1000_26e8;
                            if(cVar2 == '\"')
                                goto LAB_1000_267f;
                            if(cVar2 == '\\')
                                break;
                            iVar9 = iVar9 + 0x1;
                        }
                        uVar7 = 0x0;
                        do
                        {
                            pcVar13 = pcVar11;
                            uVar7   = uVar7 + 0x1;
                            pcVar11 = pcVar13 + 0x1;
                            cVar2   = *pcVar13;
                        } while(cVar2 == '\\');
                        if(cVar2 == '\"')
                            break;
                        iVar9   = iVar9 + uVar7;
                        pcVar11 = pcVar13;
                    }
                    iVar9 = iVar9 + (uVar7 >> 0x1) + ((uVar7 & 0x1) != 0x0);
                } while((uVar7 & 0x1) != 0x0);
                goto LAB_1000_267f;
            }
            if(cVar2 != '\\')
            {
                iVar9 = iVar9 + 0x1;
                goto LAB_1000_267f;
            }
            uVar7 = 0x0;
            do
            {
                uVar7   = uVar7 + 0x1;
                pcVar1  = pcVar11;
                pcVar11 = pcVar11 + 0x1;
                cVar2   = *pcVar1;
            } while(cVar2 == '\\');
            if(cVar2 == '\"')
            {
                iVar9 = iVar9 + (uVar7 >> 0x1) + ((uVar7 & 0x1) != 0x0);
                if((uVar7 & 0x1) == 0x0)
                    goto LAB_1000_26b8;
                goto LAB_1000_267f;
            }
            iVar9 = iVar9 + uVar7;
        } while(true);
    }
LAB_1000_26e8:
    pCStack2                    = SEG_1050;
    iVar9                       = -((globals->PTR_LOOP_1050_5fb8 + (globals->PTR_LOOP_1050_5fb8 + 0x1) * 0x4 + iVar9 + 0x1) & 0xfffe);
    globals->PTR_LOOP_1050_5fba = (&param_1 + iVar9);
    pcVar13                     = (&param_1 + (globals->PTR_LOOP_1050_5fb8 + 0x1) * 0x4 + iVar9);
    globals->PTR_LOOP_1050_5fbc = param_3;
    (&pCStack2 + iVar9)         = param_3;
    puVar4                      = globals->PTR_LOOP_1050_5fc4;
    uVar14                      = (&pCStack2 + iVar9);
    (&param_1 + iVar9)          = globals->PTR_LOOP_1050_5fc2;
    (&param_2 + iVar9)          = puVar4;
    ppcVar10                    = (char **)(&stack0x0004 + iVar9);
    (&pCStack2 + iVar9)         = &param_1 + iVar9;
    (&puStack4 + iVar9)         = LAST_SEGMENT;
    (&stack0xfffa + iVar9)      = 0x271f;
    uVar6                       = pass1_1000_29dc(param_3);
    uVar3                       = &PTR_LOOP_1050_5f7e;
    pcVar11                     = (s_New_failed_in_Op__Op__DialogHand_1050_0073 + 0xe);
LAB_1000_272e:
    do
    {
        do
        {
            pcVar1  = pcVar11;
            pcVar11 = pcVar11 + 0x1;
            cVar2   = *pcVar1;
        } while(cVar2 == ' ');
    } while(cVar2 == '\t');
    if((cVar2 == '\r') || (cVar2 == '\0'))
    {
    LAB_1000_27c1:
        (&pCStack2 + iVar9) = LAST_SEGMENT;
        (&puStack4 + iVar9) = 0x27c5;
        uVar6               = pass1_1000_29dc(param_3);
        *ppcVar10           = 0x0;
        ppcVar10[0x1]       = 0x0;
        // WARNING: Could not recover jumptable at 0x100027d2. Too many branches
        // WARNING: Treating indirect jump as call
        (*(fn_ptr_1) * &PTR_LOOP_1050_5fd2)();
        globals->_PTR_LOOP_1050_5fc2 = str_var1(globals->PTR_LOOP_1050_5fc4, globals->PTR_LOOP_1050_5fc2);
        return;
    }
    *ppcVar10     = pcVar13;
    ppcVar10[0x1] = param_3;
    ppcVar10      = ppcVar10 + 0x2;
    do
    {
        pcVar11 = pcVar11 + -0x1;
    LAB_1000_274f:
        pcVar1  = pcVar11;
        pcVar11 = pcVar11 + 0x1;
        cVar2   = *pcVar1;
        if((cVar2 == ' ') || (cVar2 == '\t'))
        {
            pcVar1  = pcVar13;
            pcVar13 = pcVar13 + 0x1;
            *pcVar1 = '\0';
            goto LAB_1000_272e;
        }
        if((cVar2 == '\r') || (cVar2 == '\0'))
        {
        LAB_1000_27be:
            *pcVar13 = '\0';
            goto LAB_1000_27c1;
        }
        pcVar12 = pcVar11;
        if(cVar2 == '\"')
        {
        LAB_1000_278b:
            while(true)
            {
                pcVar11 = pcVar12 + 0x1;
                cVar2   = *pcVar12;
                if((cVar2 == '\r') || (cVar2 == '\0'))
                    goto LAB_1000_27be;
                if(cVar2 == '\"')
                    break;
                if(cVar2 == '\\')
                {
                    uVar7 = 0x0;
                    do
                    {
                        pcVar12 = pcVar11;
                        uVar7   = uVar7 + 0x1;
                        pcVar11 = pcVar12 + 0x1;
                        cVar2   = *pcVar12;
                    } while(cVar2 == '\\');
                    if(cVar2 == '\"')
                    {
                        for(uVar8 = uVar7 >> 0x1; uVar8 != 0x0; uVar8 = uVar8 - 0x1)
                        {
                            pcVar1  = pcVar13;
                            pcVar13 = pcVar13 + 0x1;
                            *pcVar1 = '\\';
                        }
                        if((uVar7 & 0x1) == 0x0)
                            break;
                        pcVar1  = pcVar13;
                        pcVar13 = pcVar13 + 0x1;
                        *pcVar1 = '\"';
                        pcVar12 = pcVar11;
                    }
                    else
                    {
                        for(; uVar7 != 0x0; uVar7 = uVar7 - 0x1)
                        {
                            pcVar1  = pcVar13;
                            pcVar13 = pcVar13 + 0x1;
                            *pcVar1 = '\\';
                        }
                    }
                }
                else
                {
                    pcVar1  = pcVar13;
                    pcVar13 = pcVar13 + 0x1;
                    *pcVar1 = cVar2;
                    pcVar12 = pcVar11;
                }
            }
            goto LAB_1000_274f;
        }
        if(cVar2 != '\\')
        {
            pcVar1  = pcVar13;
            pcVar13 = pcVar13 + 0x1;
            *pcVar1 = cVar2;
            goto LAB_1000_274f;
        }
        uVar7 = 0x0;
        do
        {
            uVar7   = uVar7 + 0x1;
            pcVar1  = pcVar11;
            pcVar11 = pcVar11 + 0x1;
            cVar2   = *pcVar1;
        } while(cVar2 == '\\');
        if(cVar2 == '\"')
        {
            for(uVar8 = uVar7 >> 0x1; uVar8 != 0x0; uVar8 = uVar8 - 0x1)
            {
                pcVar1  = pcVar13;
                pcVar13 = pcVar13 + 0x1;
                *pcVar1 = '\\';
            }
            pcVar12 = pcVar11;
            if((uVar7 & 0x1) == 0x0)
                goto LAB_1000_278b;
            pcVar1  = pcVar13;
            pcVar13 = pcVar13 + 0x1;
            *pcVar1 = '\"';
            goto LAB_1000_274f;
        }
        for(; uVar7 != 0x0; uVar7 = uVar7 - 0x1)
        {
            pcVar1  = pcVar13;
            pcVar13 = pcVar13 + 0x1;
            *pcVar1 = '\\';
        }
    } while(true);
}

#pragma clang diagnostic pop
