#include "fn_ptr_ops_3.h"

#include "address_tables/function_tables.h"
#include "fn_ptr_ops_4.h"
#include "fn_ptr_ops_7.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_ops/struct_ops_2.h"
#include "struct_ops/struct_ops_3.h"
#include "structs/structs_2xx/structs_29x.h"
#include "structs/structs_5xx/structs_59x.h"
#include "structs/structs_6xx/struct_613.h"
#include "sys_ops/sys_ops_12.h"


void  pass1_1030_8a2c(Struct613 *param_1)

{
    u16          uVar1;
    Struct18  *p_var2;
//    Struct613 *iVar3;
//    u16          uVar3;
    i16          iStack4;

//    uVar3            = (param_1 >> 0x10);
//    iVar3            = (Struct613 *)param_1;
    param_1->field_0x0 = addr_table_1030_8e38;// 0x8e38;
    param_1->fld2_segment = SEG_1030;
    iStack4          = 0x0;
    do
    {
        p_var2 = (&param_1[0x1].fld0_addr_table + iStack4 * 0x4);
        uVar1 = (&param_1[0x1].fld2_segment)[iStack4 * 0x2];
        if ((uVar1 | p_var2) != 0x0) {
            pass1_1030_8604((Struct18 **) (p_var2 & 0xffff | uVar1 << 0x10));
            fn_ptr_1000_17ce(p_var2, SEG_1000);
        }
        iStack4 = iStack4 + 0x1;
    } while (iStack4 < 0x5);
    fn_ptr_1030_84d0(param_1 & 0xffff0000 | &param_1->field_0x4);
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->fld2_segment = SEG_1008;
}


void pass1_1030_8210(Globals *globals, u16 *param_1)

{
    u16         uVar1;
    u16         u_var2;
    Struct18 *paVar3;
    i16         iVar4;
    u16         uVar5;
    Struct18 *paStack10;
    Struct18 *paStack6;

    paVar3 = globals->_PTR_LOOP_1050_65e2;
    if(globals->_PTR_LOOP_1050_65e2 != (Struct18 *)0x0)
    {
        pass1_1028_daba(globals->_PTR_LOOP_1050_65e2, SEG_1028);
        fn_ptr_1000_17ce(paVar3, SEG_1000);
    }
    uVar5     = (param_1 >> 0x10);
    iVar4     = param_1;
    uVar1     = *param_1;
    u_var2     = (iVar4 + 0x2);
    paStack10 = (Struct18 *)str_var1(u_var2, uVar1);
    if((u_var2 | uVar1) != 0x0)
    {
        pass1_1028_d282((u16 *)str_var1(u_var2, uVar1));
        fn_ptr_1000_17ce(paStack10, SEG_1000);
    }
    uVar1    = (iVar4 + 0x4);
    u_var2    = (iVar4 + 0x6);
    paStack6 = (Struct18 *)str_var1(u_var2, uVar1);
    if((u_var2 | uVar1) != 0x0)
    {
        pass1_1028_cff2(str_var1(u_var2, uVar1));
        fn_ptr_1000_17ce(paStack6, SEG_1000);
    }
    paVar3 = globals->_PTR_LOOP_1050_5736;
    if(globals->_PTR_LOOP_1050_5736 != (Struct18 *)0x0)
    {
        pass1_1030_5c0e();
        fn_ptr_1000_17ce(paVar3, SEG_1000);
    }
    paVar3 = globals->_PTR_LOOP_1050_5a64;
    if((globals->PTR_LOOP_1050_5a66 | globals->_PTR_LOOP_1050_5a64) != 0x0)
    {
        pass1_1038_7964((u16 *)(globals->_PTR_LOOP_1050_5a64 & 0xffff | ZEXT24(globals->PTR_LOOP_1050_5a66) << 0x10));
        fn_ptr_1000_17ce(paVar3, SEG_1000);
    }
    globals->_PTR_LOOP_1050_5748 = 0x0;
}


void  fn_ptr_1030_835a(u32 **param_1, u32 *param_2)

{
    fn_ptr_1028_d566(*param_1, param_2);
}


void  pass1_1030_8480(Struct18 **param_1)

{
    fn_ptr_1000_17ce(*param_1, SEG_1000);
}


void  pass1_1030_8496(u32 param_1)

{
    fn_ptr_1000_17ce((param_1 + 0x2), SEG_1000);
}


void  pass1_1030_84ae(u32 param_1)

{
    pass1_1008_3e38((param_1 & 0xffff0000 | (param_1 + 0x8)));
    (param_1 + 0x1e) = 0x1;
}


void  fn_ptr_1030_84d0(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x1e) != 0x0)
    {
        puVar1 = (iVar4 + 0xe);
        u_var2  = (iVar4 + 0x10);
        if((u_var2 | puVar1) != 0x0)
        {
            ppcVar3 = *puVar1;
            (**ppcVar3)();
        }
        puVar1 = (iVar4 + 0x12);
        u_var2  = (iVar4 + 0x14);
        if((u_var2 | puVar1) != 0x0)
        {
            ppcVar3 = *puVar1;
            (**ppcVar3)();
        }
        fn_ptr_1000_17ce((iVar4 + 0x4), SEG_1000);
        fn_ptr_1000_17ce((iVar4 + 0x16), SEG_1000);
    }
}


void  pass1_1030_8604(Struct18 **param_1)

{
    fn_ptr_1000_17ce(*param_1, SEG_1000);
}


void pass1_1030_878c(Globals *globals, Struct350 *param_1, i16 param_2, u16 param_3)

{
    u16         *puVar1;
    u16          u_var2;
    u16          uVar3;
//    Struct350 *iVar4;
//    u16          uVar4;
    long         lVar5;
    long         lStack12;

//    uVar4 = (param_1 >> 0x10);
//    iVar4 = (Struct350 *)param_1;
    if(param_1->field_0x4 == 0x0)
    {
        globals->dat_1050_5f2e = 0x0;
        u_var2              = param_1->field_0x6;
    }
    else
    {
        uVar3              = param_1->field_0x4;
        puVar1             = &param_1->field_0x8;
        u_var2              = uVar3 + *puVar1;
        globals->dat_1050_5f2e = CARRY2(uVar3, *puVar1);
    }
    if(globals->dat_1050_5f2e == 0x0)
    {
        if (param_1->field_0x0 == 0x0) {
            if (globals->dat_1050_5f2c == 0x0) {
                globals->dat_1050_5f2c = mem_op_1000_160a(0x0, SEG_1000);
            } else {
            }
            uVar3 = fn_ptr_op_1000_1708(u_var2 * 0x6, 0x0, 0x1, globals->dat_1050_5f2c,
                                        globals->dat_1050_5f2e, SEG_1000);
        }
        else
        {
            lVar5              = pass1_1000_0ed4(SEG_1000, param_3, 0x1, u_var2 * 0x6, 0x0, *param_1, (*param_1 >> 0x10));
            globals->dat_1050_5f2e = (lVar5 >> 0x10);
            uVar3              = lVar5;
        }
        lStack12 = str_var1(globals->dat_1050_5f2e, uVar3);
        if((globals->dat_1050_5f2e | uVar3) != 0x0)
        {
            param_1->field_0x4 = u_var2;
            param_1->field_0x0 = lStack12;
            pass1_1030_8834((u16 *) (param_1 & 0xffff | uVar4 << 0x10), param_2, param_3);
        }
    }
}


void  fn_ptr_1030_7296(Struct292 *param_1)

{
    u16          uVar1;
    u16          u_var2;
//    Struct292 *iVar3;
//    u16          uVar3;
    Struct18  *paStack6;

//    uVar3    = (param_1 >> 0x10);
//    iVar3    = (Struct292 *)param_1;
    uVar1    = param_1->field_0x22;
    u_var2    = param_1->field_0x24;
    paStack6 = (Struct18 *)str_var1(u_var2, uVar1);
    if((u_var2 | uVar1) != 0x0)
    {
        fn_ptr_1020_ba7e(str_var1(u_var2, uVar1));
        fn_ptr_1000_17ce(paStack6, SEG_1000);
    }
    &param_1->field_0x22 = 0x0;
}


void  pass1_1030_72d0(Struct605 *param_1)

{
    u16          uVar1;
    u16          u_var2;
//    Struct605 *iVar3;
//    u16          uVar3;
    Struct18  *paStack6;

//    uVar3    = (param_1 >> 0x10);
//    iVar3    = (Struct605 *)param_1;
    uVar1    = param_1->field_0x26;
    u_var2    = param_1->field_0x28;
    paStack6 = (Struct18 *)str_var1(u_var2, uVar1);
    if((u_var2 | uVar1) != 0x0)
    {
        fn_ptr_1020_ba7e(str_var1(u_var2, uVar1));
        fn_ptr_1000_17ce(paStack6, SEG_1000);
    }
    param_1->field_0x26 = 0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1030_730a(Struct290 *param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32  *puVar1;
    u16          u_var2;
    void **ppcVar3;
    u32          uVar4;
    u16          extraout_DX;
    u16          extraout_DX_00;
    Struct290 *iVar5;
    u16          uVar5;
    u32  *puVar6;
    u32          uStack10;
    u32          u_stack6;

    uVar5 = (param_1 >> 0x10);
    iVar5 = (Struct290 *)param_1;
    if(iVar5->field_0x1e != 0x0)
    {
        puVar6  = iVar5->field_0x1e;
        ppcVar3 = (*iVar5->field_0x1e + 0x10);
        (**ppcVar3)();
        u_stack6 = str_var1(extraout_DX, param_2);
        for(uStack10 = 0x0; uStack10 < u_stack6; uStack10 = uStack10 + 0x1)
        {
            ppcVar3 = (*iVar5->field_0x1e + 0x4);
            uVar4   = u_stack6;
            (**ppcVar3)(param_3);
            if((extraout_DX_00 | uVar4) != 0x0)
            {
                param_3 = SEG_1028;
                pass1_1028_e332(globals->_PTR_LOOP_1050_65e2, uVar4, extraout_DX_00, param_4);
            }
        }
        // WARNING: Load size is inaccurate
        puVar1 = iVar5->field_0x1e;
        u_var2  = (&iVar5->field_0x1e + 0x2);
        if((u_var2 | puVar1) != 0x0)
        {
            ppcVar3 = *puVar1;
            (**ppcVar3)(param_3, puVar1, u_var2, 0x1, puVar6);
        }
        iVar5->field_0x1e = 0x0;
    }
    return;
}


void  pass1_1030_5b6c(Struct610 *param_1, char *param_2, u16 param_3)

{
    long         lVar1;
    u16          u_var2;
    Struct610 *iVar4;
    Struct609 *iVar3;
    u16          uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar4 = (Struct610 *)param_1;
    if(iVar4->field_0x10 != 0x0)
    {
        lVar1 = iVar4->field_0x10;
        fn_ptr_1000_17ce((lVar1 + 0x4), SEG_1000);
        u_var2            = str_op_1008_60e8(param_2);
        lVar1            = iVar4->field_0x10;
        uVar3            = (lVar1 >> 0x10);
        iVar3            = (Struct609 *)lVar1;
        iVar3->field_0x4 = u_var2;
        iVar3->field_0x6 = param_3;
    }
    return;
}


Struct18 * pass1_1030_5baa(Struct18 *param_1, u8 param_2)

{
    pass1_1030_56b0(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_6118(Struct18 *param_1, u8 param_2)

{
    pass1_1030_5d78(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1030_68dc(Struct611 *param_1, u16 param_2)

{
    u16          uVar1;
    u16          u_var2;
    u32  *puVar3;
    Struct18  *paVar4;
    void **ppcVar5;
    Struct611 *iVar6;
    u16          uVar6;
    Struct18  *paStack10;

    uVar6            = (param_1 >> 0x10);
    iVar6            = (Struct611 *)param_1;
    param_1->field_0x0 = addr_table_1030_8114;// 0x8114;
    iVar6->fld2_segment = SEG_1030;
    paVar4           = &iVar6->field_0x22;
    uVar1            = iVar6->field_0x24;
    if((uVar1 | paVar4) != 0x0)
    {
        fn_ptr_1020_ba7e((paVar4 & 0xffff | uVar1 << 0x10));
        param_2 = SEG_1000;
        fn_ptr_1000_17ce(paVar4, SEG_1000);
    }
    uVar1     = iVar6->field_0x26;
    u_var2     = iVar6->field_0x28;
    paStack10 = (Struct18 *)str_var1(u_var2, uVar1);
    if((u_var2 | uVar1) != 0x0)
    {
        fn_ptr_1020_ba7e(str_var1(u_var2, uVar1));
        param_2 = SEG_1000;
        fn_ptr_1000_17ce(paStack10, SEG_1000);
    }
    puVar3 = iVar6->field_0x1e;
    uVar1  = iVar6->field_0x20;
    if((uVar1 | puVar3) != 0x0)
    {
        ppcVar5 = *puVar3;
        (**ppcVar5)(param_2, puVar3, uVar1, 0x1);
    }
    puVar3 = iVar6->field_0x36;
    uVar1  = iVar6->field_0x38;
    if((uVar1 | puVar3) != 0x0)
    {
        ppcVar5 = *puVar3;
        (**ppcVar5)(param_2, puVar3, uVar1, 0x1);
    }
    puVar3 = iVar6->field_0x3a;
    uVar1  = iVar6->field_0x3c;
    if((uVar1 | puVar3) != 0x0)
    {
        ppcVar5 = *puVar3;
        (**ppcVar5)(param_2, puVar3, uVar1, 0x1);
    }
    puVar3 = iVar6->field_0x3e;
    uVar1  = iVar6->field_0x40;
    if((uVar1 | puVar3) != 0x0)
    {
        ppcVar5 = *puVar3;
        (**ppcVar5)(param_2, puVar3, uVar1, 0x1);
    }
    pass1_1030_16b2(param_1);
    return;
}


void  pass1_1030_4f5a(u16 param_1, u16 param_2, u32 param_3)

{
    u16   uVar1;
    char *pcVar2;
    long *plVar3;
    u16   uVar4;
    i16   iVar5;
    char *pcVar6;
    u16   extraout_DX;
    u16   extraout_DX_00;
    u16   uVar7;
    u16   uVar8;
    u16   uStack22;
    u32   uStack20;
    u16   uStack14;
    u16   uStack12;
    long  local_a;
    char *local_6;

    plVar3             = &local_a;
    globals->dat_1050_5f2e = read_file_1030_4e70(param_3,
                                                 str_var1(param_1, plVar3), (u8 **)str_var1(param_1, &local_6), (long)s_bldgbld_dat_1050_56fc, param_2);
    pcVar2             = local_6;
    if(plVar3 != (long *)0x0)
    {
        uVar7  = param_3;
        uVar8  = (param_3 >> 0x10);
        pcVar6 = local_6;
        pass1_1030_4e34(uVar7, uVar8, local_a, local_6);
        if(globals->_PTR_LOOP_1050_5f2c == 0x0)
        {
            globals->dat_1050_5f2c = mem_op_1000_160a(globals->PTR_LOOP_1050_5f2e, SEG_1000);
        }
        else
        {
        }
        uVar4          = fn_ptr_op_1000_1708(pcVar6 * 0x98, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
        (uVar7 + 0x12) = uVar4;
        (uVar7 + 0x14) = globals->dat_1050_5f2e;
        pass1_1030_4dbc(param_3, local_6, pcVar6 & 0xffff);
        uStack20 = str_var1(extraout_DX, uVar4);
        for(uStack22 = 0x0; uStack22 < pcVar6; uStack22 = uStack22 + 0x1)
        {
            uVar1 = (uVar7 + 0x14);
            iVar5 = (uVar7 + 0x12) + uStack22 * 0x98;
            pass1_1030_4d3a(uVar1, uVar7, uVar8, str_var1(uVar1, iVar5), uStack20);
            pass1_1030_4dbc(param_3, 0x0, 0x0);
            uStack20 = str_var1(extraout_DX_00, iVar5);
        }
        uStack12 = (pcVar2 >> 0x10);
        uStack14 = pcVar2;
        if((uStack12 | uStack14) != 0x0)
        {
            call_fn_ptr_1000_0dc6(uStack14, uStack12, SEG_1000);
        }
    }
    return;
}


Struct18 * pass1_1030_5596(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_55c2(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1030_56b0(u16 *param_1)

{
    u16         uVar1;
    Struct18 *p_var2;
    i16         iVar3;
    u16         uVar4;

    uVar4         = (param_1 >> 0x10);
    iVar3         = param_1;
    param_1->field_0x0 = addr_table_1030_5bd0;// 0x5bd0; // s_procLo_1050_5bd0;
    (iVar3 + 0x2) = SEG_1030;
    p_var2        = (iVar3 + 0x10);
    uVar1         = (iVar3 + 0x12);
    if((uVar1 | p_var2) != 0x0)
    {
        fn_ptr_1030_84d0(p_var2 & 0xffff | uVar1 << 0x10);
        fn_ptr_1000_17ce(p_var2, SEG_1000);
    }
    pass1_1030_18b2(param_1);
}


void  pass1_1030_301a(u32 param_1, char *param_2, u16 param_3)

{
    u32   uVar1;
    u16          u_var2;
    i16          iVar4;
    Struct608 *iVar3;
    u16          uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x10) != 0x0)
    {
        uVar1 = (iVar4 + 0x10);
        fn_ptr_1000_17ce((uVar1 + 0x2), SEG_1000);
        u_var2            = str_op_1008_60e8(param_2);
        uVar1            = (iVar4 + 0x10);
        uVar5            = (uVar1 >> 0x10);
        iVar3            = (Struct608 *)uVar1;
        iVar3->fld2_segment = u_var2;
        iVar3->field_0x4 = param_3;
    }
    return;
}


Struct18 * pass1_1030_310a(Struct18 *param_1, u8 param_2)

{
    pass1_1030_29e6(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_3ac6(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1030_4538(u32 *param_1)

{
    u16 uVar1;

    fn_ptr_1000_17ce((Struct18 *)*param_1, SEG_1000);
    uVar1 = (param_1 >> 0x10);
    fn_ptr_1000_17ce((param_1 + 0x12), SEG_1000);
    fn_ptr_1000_17ce((param_1 + 0x15c), SEG_1000);
    return;
}


void  pass1_1030_1f77(i16 param_1, i16 param_2, u16 param_3, u16 param_4)

{
    u16       *puVar1;
    u16        u_var2;
    u32 uVar3;
    i16        iVar4;
    u16        uVar5;
    u16        uVar6;
    long       lVar7;

    if((param_1 + 0x10) == 0x0)
    {
        iVar4              = (param_1 + 0xc);
        globals->dat_1050_5f2e = (param_1 + 0xe);
    }
    else
    {
        u_var2              = (param_1 + 0x10);
        puVar1             = (param_1 + 0x14);
        iVar4              = u_var2 + *puVar1;
        globals->dat_1050_5f2e
          = ((param_1 + 0x12) + (param_1 + 0x16) + CARRY2(u_var2, *puVar1));
    }
    (param_2 + -0x4) = iVar4;
    (param_2 + -0x2) = globals->dat_1050_5f2e;
    (param_2 + -0x8) = 0x0;
    if((param_1 + 0x4) == 0x0)
    {
        if(globals->_PTR_LOOP_1050_5f2c == 0x0)
        {
            globals->dat_1050_5f2c = mem_op_1000_160a(globals->PTR_LOOP_1050_5f2e, SEG_1000);
        }
        else
        {
        }
        uVar5 = fn_ptr_op_1000_1708((param_2 + -0x4) << 0x2, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
    }
    else
    {
        uVar3              = (param_1 + 0x4);
        u_var2              = (param_2 + -0x4);
        lVar7              = pass1_1000_0ed4(SEG_1000, param_4, 0x1, u_var2 * 0x4, (globals->PTR_LOOP_1050_5f2e * 0x2 + CARRY2(u_var2, u_var2)) * 0x2 + CARRY2(u_var2 * 0x2, u_var2 * 0x2), uVar3, (uVar3 >> 0x10));
        globals->dat_1050_5f2e = (lVar7 >> 0x10);
        uVar5              = lVar7;
    }
    (param_2 + -0x8) = uVar5;
    (param_2 + -0x6) = globals->dat_1050_5f2e;
    if((globals->PTR_LOOP_1050_5f2e | (param_2 + -0x8)) != 0x0)
    {
        uVar3          = (param_2 + 0x6);
        uVar6          = (uVar3 >> 0x10);
        iVar4          = uVar3;
        (iVar4 + 0x10) = (param_2 + -0x4);
        (iVar4 + 0x4)  = (param_2 + -0x8);
    }
    return;
}


Struct18 * pass1_1030_201e(Struct18 *param_1, u8 param_2)

{
    pass1_1030_1d28(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_2916(Struct18 *param_1, u8 param_2)

{
    pass1_1030_18b2(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1030_29e6(Struct607 *param_1)

{
    u16          uVar1;
    Struct18  *p_var2;
    Struct607 *iVar4;
    u16          uVar3;

    uVar3            = (param_1 >> 0x10);
    iVar4            = (Struct607 *)param_1;
    param_1->field_0x0 = addr_table_1030_3130;// 0x3130;
    iVar4->fld2_segment = SEG_1030;
    p_var2           = &iVar4->field_0x10;
    uVar1            = iVar4->field_0x12;
    if((uVar1 | p_var2) != 0x0)
    {
        pass1_1030_8496(p_var2 & 0xffff | uVar1 << 0x10);
        fn_ptr_1000_17ce(p_var2, SEG_1000);
    }
    pass1_1030_18b2(param_1);
}


Struct18 * pass1_1030_117a(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1030_1244(Struct606 *param_1)

{
    u32         *puVar1;
    u32  *pu_var2;
    u16          uVar3;
    void **ppcVar4;
    Struct18  *paVar5;
    Struct606 *iVar6;
    i16          iVar7;
    i16          iVar8;
    u16          uVar9;
    u16          uVar10;
    u32          u_stack6;

    uVar9            = (param_1 >> 0x10);
    iVar6            = (Struct606 *)param_1;
    param_1->field_0x0 = addr_table_1030_1624;// 0x1624; // s_462_bmp_1050_1620 + 0x4;
    iVar6->fld2_segment = SEG_1030;
    if(iVar6->field_0x1a_addr_offset != 0x0)
    {
        u_stack6 = 0x1;
        while(true)
        {
            puVar1 = &iVar6->field_0xa;
            if(*puVar1 < u_stack6 || *puVar1 == u_stack6)
                break;
            iVar8  = u_stack6 * 0x4;
            paVar5 = iVar6->field_0x6;
            uVar10 = (paVar5 >> 0x10);
            iVar7  = paVar5;
            pu_var2 = (iVar7 + iVar8);
            uVar3 = (iVar7 + iVar8 + 0x2);
            if ((uVar3 | pu_var2) != 0x0) {
                ppcVar4 = *pu_var2;
                (**ppcVar4)();
            }
            u_stack6 = u_stack6 + 0x1;
        }
    }
    fn_ptr_1000_17ce(iVar6->field_0x6, SEG_1000);
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar6->fld2_segment = SEG_1008;
}


void  pass1_1030_145a(Struct346 *param_1, long param_2)

{
    u32          uVar1;
    u16          u_var2;
    Struct346 *iVar4;
    u16          uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar4 = (Struct346 *)param_1;
    fn_ptr_1000_17ce((Struct18 *)iVar4->field_0x6, SEG_1000);
    iVar4->field_0x6 = 0x0;
    iVar4->field_0xa = 0x0;
    uVar1            = iVar4->field_0x16 + param_2;
    u_var2            = (uVar1 >> 0x10);
    if(uVar1 < iVar4->field_0xe)
    {
        uVar1 = &iVar4->field_0xe;
        u_var2 = (&iVar4->field_0xe + 0x2);
    }
    &iVar4->field_0xe         = uVar1;
    (&iVar4->field_0xe + 0x2) = u_var2;
    iVar4->field_0x12         = 0x0;
    return;
}


void  struct_1030_1550(Struct157 *param_1, u16 param_2)

{
    u16         *puVar1;
    u16          u_var2;
    u16          uVar3;
    Struct157 *iVar5;
    u16          uVar4;
    long         lVar5;
    long         lStack10;
    u32   u_stack6;

    uVar4 = (param_1 >> 0x10);
    iVar5 = (Struct157 *)param_1;
    if(&iVar5->field_0x12 == 0x0)
    {
        uVar3              = iVar5->field_0xe;
        globals->dat_1050_5f2e = iVar5->field_0x10;
    }
    else
    {
        u_var2              = &iVar5->field_0x12;
        puVar1             = &iVar5->field_0x16;
        uVar3              = u_var2 + *puVar1;
        globals->dat_1050_5f2e
          = (iVar5->field_0x14 + iVar5->field_0x18 + CARRY2(u_var2, *puVar1));
    }
    u_stack6 = str_var1(globals->PTR_LOOP_1050_5f2e, uVar3);
    if(iVar5->field_0x6 == 0x0)
    {
        if(globals->_PTR_LOOP_1050_5f2c == 0x0)
        {
            globals->dat_1050_5f2c = mem_op_1000_160a(globals->PTR_LOOP_1050_5f2e, SEG_1000);
        }
        else
        {
        }
        uVar3 = fn_ptr_op_1000_1708(uVar3 << 0x2, 0x0, 0x1, globals->dat_1050_5f2c, globals->dat_1050_5f2e, SEG_1000);
    }
    else
    {
        lVar5              = iVar5->field_0x6;
        lVar5              = pass1_1000_0ed4(SEG_1000, param_2, 0x1, uVar3 * 0x4, (globals->PTR_LOOP_1050_5f2e * 0x2 + CARRY2(uVar3, uVar3)) * 0x2 + CARRY2(uVar3 * 0x2, uVar3 * 0x2), lVar5, (lVar5 >> 0x10));
        globals->dat_1050_5f2e = (lVar5 >> 0x10);
        uVar3              = lVar5;
    }
    lStack10 = str_var1(globals->PTR_LOOP_1050_5f2e, uVar3);
    if((globals->PTR_LOOP_1050_5f2e | uVar3) != 0x0)
    {
        &iVar5->field_0x12 = u_stack6;
        iVar5->field_0x6   = lStack10;
    }
    return;
}


Struct18 * pass1_1030_15fe(Struct18 *param_1, u8 param_2)

{
    pass1_1030_1244(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_1794(Struct18 *param_1, u8 param_2)

{
    pass1_1030_16b2(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_19f0(Struct18 *param_1, u8 param_2)

{
    pass1_1030_18b2(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1030_1c96(Struct18 *param_1, u8 param_2)

{
    pass1_1030_1a74(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1028_d282(u16 *param_1)

{
    u16         uVar1;
    u16         u_var2;
    Struct18 *paStack6;

    uVar1    = *param_1;
    u_var2    = (param_1 + 0x2);
    paStack6 = (Struct18 *)str_var1(u_var2, uVar1);
    if((u_var2 | uVar1) != 0x0)
    {
        pass1_1028_d658(str_var1(u_var2, uVar1));
        fn_ptr_1000_17ce(paStack6, SEG_1000);
    }
    return;
}


void  struct_1028_d2b0(u32 *param_1, u16 param_2, u8 param_3)

{
    u16 local_10c;
    u16 uStack266;

    struct_1028_9c62(&local_10c, param_2, 0x3e80, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, 0x3a98, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, 0x36b0, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, 0x32c8, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, 0x2ee0, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, 0x2af8, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, 0x2710, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, s_noth_bmp_1050_2321 + 0x7, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, 0x1f40, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, 0x1b58, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, 0x1770, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, 0x1388, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, 0xfa0, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, 0xbb8, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    struct_1028_9c62(&local_10c, param_2, 0x3e8, param_2, param_3);
    fn_ptr_1028_d566(param_1, str_var1(param_2, &local_10c));
    local_10c = addr_table_1008_380a[36]; // 0x389a
    uStack266 = SEG_1008;
    pass1_1028_d6b2(*param_1);
    return;
}


BOOL16  fn_ptr_1028_d566(u32 *param_1, u32 *param_2)

{
    fn_ptr_1 *ppcVar1;
    i16       iVar2;
    u16       uVar3;

    ppcVar1 = (*param_2 + 0x8);
    iVar2   = (**ppcVar1)();
    if(iVar2 != 0x0)
    {
        uVar3 = fn_ptr_1028_d742(*param_1, param_2);
        if(uVar3 != 0x0)
        {
            return 0x1;
        }
    }
    return 0x0;
}


void  pass1_1028_d6b2(u32 param_1)

{
    u32        *puVar1;
    u32         u_var2;
    void **ppcVar3;
    u32 *puVar4;
    u16         uVar5;
    u16         extraout_DX;
    u16         uVar6;
    u32         uVar7;

    u_var2 = *_PTR_LOOP_1050_65e2;
    while(true)
    {
        uVar6 = (param_1 >> 0x10);
        uVar7 = pass1_1020_c860(*(param_1 + 0x8));
        uVar5 = (uVar7 >> 0x10);
        if(((uVar5 | uVar7) == 0x0) || (puVar1 = (uVar7 + 0xc), u_var2 <= *puVar1 && *puVar1 != u_var2))
            break;
        ppcVar3 = ((param_1 + 0x8) + 0x10);
        uVar7   = u_var2;
        (**ppcVar3)();
        puVar4 = (uVar7 & 0xffff | extraout_DX << 0x10);
        fn_ptr_1028_d742(param_1, (uVar7 & 0xffff | extraout_DX << 0x10));
        if(puVar4 != 0x0)
        {
            ppcVar3 = *puVar4;
            (**ppcVar3)(SEG_1020, uVar7, extraout_DX, 0x1);
        }
    }
    return;
}


Struct18 * pass1_1028_d7de(Struct18 *param_1, u8 param_2)

{
    pass1_1008_57c4(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1028_daba(Struct447 *param_1, u16 param_2)

{
    u16          uVar1;
    u16          u_var2;
    u32  *puVar3;
    void **ppcVar4;
    Struct18  *paVar5;
    Struct447 *iVar5;
    u16          uVar6;
    Struct18  *paStack14;

    paVar5 = globals->_PTR_LOOP_1050_5740;
    if(globals->_PTR_LOOP_1050_5740 != (Struct18 *)0x0)
    {
        pass1_1030_61b0(&_PTR_LOOP_1050_5740->fld0_addr_table);
        param_2 = SEG_1000;
        fn_ptr_1000_17ce(paVar5, SEG_1000);
    }
    uVar6     = (param_1 >> 0x10);
    iVar5     = (Struct447 *)param_1;
    uVar1     = iVar5->field_0x52;
    u_var2     = iVar5->field_0x54;
    paStack14 = (Struct18 *)str_var1(u_var2, uVar1);
    if((u_var2 | uVar1) != 0x0)
    {
        pass1_1030_4538(str_var1(u_var2, uVar1));
        param_2 = SEG_1000;
        fn_ptr_1000_17ce(paStack14, SEG_1000);
    }
    if(globals->_PTR_LOOP_1050_5166 != 0x0)
    {
        ppcVar4 = *_PTR_LOOP_1050_5166;
        (**ppcVar4)(param_2, globals->_PTR_LOOP_1050_5166);
    }
    paVar5              = globals->_PTR_LOOP_1050_06e0;
    globals->_PTR_LOOP_1050_65e2 = 0x0;
    if(globals->dat_1050_06e0 != (Struct18 *)0x0)
    {
        pass1_1008_c626(globals->dat_1050_06e0);
        param_2 = SEG_1000;
        fn_ptr_1000_17ce(paVar5, SEG_1000);
    }
    puVar3 = iVar5->field_0xe;
    uVar1  = iVar5->field_0x10;
    if((uVar1 | puVar3) != 0x0)
    {
        ppcVar4 = *puVar3;
        (**ppcVar4)(param_2, puVar3, uVar1, 0x1);
    }
    puVar3 = iVar5->field_0x12;
    uVar1  = iVar5->field_0x14;
    if((uVar1 | puVar3) != 0x0)
    {
        ppcVar4 = *puVar3;
        (**ppcVar4)(param_2, puVar3, uVar1, 0x1);
    }
    puVar3 = iVar5->field_0x16;
    uVar1  = iVar5->field_0x18;
    if((uVar1 | puVar3) != 0x0)
    {
        ppcVar4 = *puVar3;
        (**ppcVar4)(param_2, puVar3, uVar1, 0x1);
    }
    puVar3 = iVar5->field_0x1a_addr_offset;
    uVar1  = iVar5->field_0x1c_addr_base;
    if((uVar1 | puVar3) != 0x0)
    {
        ppcVar4 = *puVar3;
        (**ppcVar4)(param_2, puVar3, uVar1, 0x1);
    }
    puVar3 = iVar5->field_0x1e;
    uVar1  = iVar5->field_0x20;
    if((uVar1 | puVar3) != 0x0)
    {
        ppcVar4 = *puVar3;
        (**ppcVar4)(param_2, puVar3, uVar1, 0x1);
    }
    puVar3 = iVar5->field_0x22;
    uVar1  = iVar5->field_0x24;
    if((uVar1 | puVar3) != 0x0)
    {
        ppcVar4 = *puVar3;
        (**ppcVar4)(param_2, puVar3, uVar1, 0x1);
    }
    puVar3 = iVar5->field_0x26;
    uVar1  = iVar5->field_0x28;
    if((uVar1 | puVar3) != 0x0)
    {
        ppcVar4 = *puVar3;
        (**ppcVar4)(param_2, puVar3, uVar1, 0x1);
    }
    puVar3 = iVar5->field_0x2a;
    uVar1  = iVar5->field_0x2c;
    if((uVar1 | puVar3) != 0x0)
    {
        ppcVar4 = *puVar3;
        (**ppcVar4)(param_2, puVar3, uVar1, 0x1);
    }
    return;
}


void  pass1_1028_d01a(u32 *param_1)

{
    u32 *puVar1;
    void **ppcVar2;
    u32  uVar3;
    u16         uVar4;
    u16         extraout_DX;
    u32 *puStack14;

    puVar1    = **(u32 **)*param_1;
    puStack14 = puVar1;
    while(true)
    {
        uVar4 = puStack14;
        fn_ptr_1028_d728(puVar1);
        puStack14 = str_var1(extraout_DX, uVar4);
        if((extraout_DX | uVar4) == 0x0)
            break;
        uVar3   = *puStack14;
        ppcVar2 = uVar3 + 0x2;
        (**ppcVar2)();
        if(puStack14 != 0x0)
        {
            ppcVar2 = uVar3;
            (**ppcVar2)();
        }
    }
    return;
}


void  pass1_1028_b418(u16 *param_1)

{
    i16 iVar1;
    i16 iVar2;
    u16 uVar3;

    uVar3         = (param_1 >> 0x10);
    iVar2         = param_1;
    param_1->field_0x0 = addr_table_1028_cf6a;// 0xcf6a;
    (iVar2 + 0x2) = SEG_1028;
    iVar1         = (iVar2 + 0x12);
    if(((iVar1 == 0x4) || (iVar1 == 0x5)) || ((iVar1 == 0x6 && ((iVar1 = (iVar2 + 0x18), iVar1 == 0x4 || (iVar1 == 0x5))))))
    {
        fn_ptr_1000_17ce((iVar2 + 0x14), SEG_1000);
    }
    pass1_1030_16b2(param_1);
    return;
}


void  pass1_1028_b46e(Struct315 *param_1, u32 param_2, u16 param_3)

{
    i16 iVar1;
    i16 iVar2;
    u16 extraout_DX;
    u16 uVar3;
    u32 uVar4;
    u16 uVar5;
    u16 uVar6;

    uVar4 = pass1_1028_b4f2(param_1);
    iVar2 = uVar4;
    uVar5 = 0x0;
    uVar6 = 0x0;
    pass1_1028_b58e(param_1);
    uVar3 = extraout_DX;
    pass1_1030_6d80(str_var1(extraout_DX, iVar2), str_var1(uVar6, uVar5));
    iVar1 = (iVar2 + 0x32);
    if(iVar1 != 0x0)
    {
        pass1_1030_6c4c(str_var1(extraout_DX, iVar2), 0x0);
        pass1_1038_387e(uVar4, 0x0, iVar1, str_var1(extraout_DX, iVar2), uVar3);
    }
    fn_ptr_1030_7296(str_var1(extraout_DX, iVar2));
    (param_1 + 0x1c) = (param_2 + 0x200);
    return;
}


void  pass1_1028_b514(Struct604 *param_1)

{
    i16          iVar1;
    u16          u_var2;
    Struct604 *iVar3;
    u16          uVar3;
    u16          unaff_SS;
    u32          uVar4;

    uVar3 = (param_1 >> 0x10);
    iVar3 = (Struct604 *)param_1;
    iVar1 = iVar3->field_0x12;
    if(((iVar1 == 0x4) || (iVar1 == 0x5)) || ((iVar1 == 0x6 && ((iVar1 = iVar3->field_0x18, iVar1 == 0x4 || (iVar1 == 0x5))))))
    {
        fn_ptr_1000_17ce(iVar3->field_0x14, SEG_1000);
    }
    iVar3->field_0x14 = (Struct18 *)0x0;
    iVar3->field_0x12 = 0x7;
    uVar4             = pass1_1028_b58e(param_1 & 0xffff | uVar3 << 0x10);
    u_var2             = uVar4;
    fn_ptr_1030_7296(uVar4);
    pass1_1030_72d0(uVar4);
    pass1_1030_730a(uVar4, u_var2, 0x1030, unaff_SS);
    return;
}


void  pass1_1028_bc02(u32 *param_1)

{
    fn_ptr_1 *ppcVar1;

    ppcVar1 = (*param_1 + 0x40);
    (**ppcVar1)();
    return;
}


u16  pass1_1028_bc4a(u32 param_1, u32 *param_2, u8 *param_3, u16 param_4)

{
    u16         uVar1;
    Struct18 *p_var2;

    p_var2 = (Struct18 *)pass1_1028_e0bc(globals->_PTR_LOOP_1050_65e2, (param_1 + 0xc), param_2, param_3, param_4);
    uVar1  = (p_var2 + 0x96);
    fn_ptr_1000_17ce(p_var2, SEG_1000);
    return uVar1;
}


void  pass1_1028_bdac(Struct599 *param_1, i16 param_2, u16 param_3)

{
    i16          iVar1;
    void **ppcVar2;
    Struct599 *iVar3;
    u16          uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar3 = (Struct599 *)param_1;
    if(iVar3->field_0x12 != param_2)
    {
        if(iVar3->field_0x12 == 0x6)
        {
            if(iVar3->field_0x18 == param_2)
            {
                iVar3->field_0x12 = iVar3->field_0x18;
                iVar3->field_0x18 = 0x0;
                return;
            }
        }
        else
        {
            if(param_2 != 0x6)
            {
                iVar1 = iVar3->field_0x12;
                if((iVar1 == 0x4) || (iVar1 == 0x5))
                {
                    param_3 = SEG_1000;
                    fn_ptr_1000_17ce(iVar3->field_0x14, SEG_1000);
                }
                iVar3->field_0x12 = param_2;
                ppcVar2           = (*param_1 + 0x3c);
                (**ppcVar2)(param_3, param_1);
                return;
            }
            iVar3->field_0x18 = iVar3->field_0x12;
            iVar3->field_0x12 = 0x6;
        }
    }
    return;
}


void  pass1_1028_a3ae(u16 param_1, u16 param_2, u32 param_3, long param_4, i16 param_5, u16 param_6, u8 param_7, i16 param_8)

{
    u16        uVar1;
    u16        u_var2;
    BOOL16     BVar3;
    u16        uVar4;
    u32        uVar5;
    u8        *puVar6;
    u16        uVar7;
    u16       *puVar8;
    i16        iVar9;
    u16        uVar10;
    u16        local_146;
    u16        uStack324;
    u16        uStack32;
    u16        uStack30;
    u32        uStack26;
    u32        uStack22;
    u16        uStack18;
    u16        uStack16;
    u32 uStack14;
    u32        uStack10;
    i16        iStack6;
    u16        uStack4;

    iVar9  = param_3;
    uVar10 = (param_3 >> 0x10);
    pass1_1038_3fb0(param_3);
    uStack4 = param_4;
    iStack6 = param_8;
    if(((iVar9 + 0x204) != 0x0) && (BVar3 = pass1_1030_25b2(str_var1(uStack4, param_8), 0x82), BVar3 != 0x0))
    {
        return;
    }
    uVar5    = *(iVar9 + 0x1f6);
    uStack10 = uVar5;
    pass1_1030_38b8();
    uVar4    = uVar5;
    uStack16 = param_4;
    uStack14 = uVar5 & 0xffff | param_4 << 0x10;
    empty_1038_540a();
    puVar6   = (uStack16 | uVar4);
    uStack18 = uVar4;
    if((((puVar6 == 0x0) && ((iVar9 + 0x200) != 0x8000002)) && (pass1_1030_38b8(), -0x1 < puVar6)) && ((0x0 < puVar6 || (uVar4 != 0x0))))
    {
        puVar8   = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_6, puVar6, param_5);
        uStack30 = (puVar8 >> 0x10);
        uStack32 = SUB42(puVar8, 0x0);
        pass1_1010_043a(puVar8, (iVar9 + 0x4), 0x11, param_6);
    }
    u_var2    = uStack16;
    uVar1    = uStack18;
    uStack26 = uStack14;
    uVar4    = uStack18 * 0xa;
    uVar7    = (uStack16 * 0x5 + CARRY2(uStack18, uStack18) * 0x2 + CARRY2(uStack18 * 0x2, uStack18 * 0x2) + CARRY2(uStack18 * 0x4, uStack18)) * 0x2 + CARRY2(uStack18 * 0x5, uStack18 * 0x5);
    uStack22 = str_var1(uVar7, uVar4);
    if((uVar7 <= uStack14) && ((uVar7 < uStack14 || (uVar4 < uStack14))))
    {
        pass1_1028_ae66((Struct100 *)str_var1(param_6, &local_146), uStack14,
                        str_var1(uVar7, uVar4), *(iVar9 + 0x4), param_6, param_7);
        fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_6, &local_146));
        uStack26  = uStack22;
        local_146 = addr_table_1008_380a[36]; // 0x389a
        uStack324 = SEG_1008;
    }
    uStack26 = uStack26 + 0x9;
    pass1_1038_52b8(param_3, uStack26 / 0xa, 0x1e, uVar1, u_var2, SEG_1038, param_6);
    return;
}


Struct18 * pass1_1028_a6ca(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_a82a(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_a982(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_aaf6(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_ae2a(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_b0a2(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_b1c8(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_b316(Struct18 *param_1, u8 param_2)

{
    pass1_1028_b260(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_9908(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1028_9992(u16 *param_1) {
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    param_1->field_0x0 = addr_table_1028_9c52;// 0x9c52;
    (iVar1 + 0x2) = SEG_1028;
    fn_ptr_1000_17ce((iVar1 + 0x114), SEG_1000);
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
}


Struct18 * pass1_1028_9c2c(Struct18 *param_1, u8 param_2)

{
    pass1_1028_9992(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


u16  pass1_1028_9ca0(i16 param_1, u16 param_2, u8 param_3)

{
    pass1_1028_acb6((Struct100 *)str_var1(param_2, param_1 + -0x108), param_2, param_3);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 + -0x108));
    (param_1 + -0x108) = addr_table_1008_380a[36]; // 0x389a
    (param_1 + -0x106) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9cca(i16 param_1, u16 param_2)

{
    u8 in_AF;

    pass1_1038_28d8((Struct100 *)str_var1(param_2, param_1 + -0x108), param_2, in_AF);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 + -0x108));
    (param_1 + -0x108) = addr_table_1008_380a[36]; // 0x389a
    (param_1 + -0x106) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9cd8(u16 param_1, u16 param_2, u8 param_3)

{
    pass1_1028_a866((Struct100 *)str_var1(param_2, param_1 - 0x108), param_2, param_3);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 - 0x108));
    (param_1 - 0x108) = addr_table_1008_380a[36]; // 0x389a
    (param_1 - 0x106) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9ce6(i16 param_1, u16 param_2, u8 param_3)

{
    pass1_1028_6e60((Struct100 *)str_var1(param_2, param_1 + -0x108), param_2, param_3);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 + -0x108));
    (param_1 + -0x108) = addr_table_1008_380a[36]; // 0x389a
    (param_1 + -0x106) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9cf4(i16 param_1, u16 param_2, u8 param_3)

{
    pass1_1028_ab32((Struct100 *)str_var1(param_2, param_1 + -0x108), param_2, param_3);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 + -0x108));
    (param_1 + -0x108) = addr_table_1008_380a[36]; // 0x389a
    (param_1 + -0x106) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9d02(i16 param_1, u16 param_2, u8 param_3)

{
    pass1_1030_e09e((Struct100 *)str_var1(param_2, param_1 + -0x108), param_2, param_3);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 + -0x108));
    (param_1 + -0x108) = addr_table_1008_380a[36]; // 0x389a
    (param_1 + -0x106) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9d10(i16 param_1, i16 param_2, u16 param_3, u8 param_4)

{
    pass1_1038_0ba6((Struct100 *)str_var1(param_3, param_1 + -0x220), param_2, param_3, param_4);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_3, param_1 + -0x220));
    (param_1 + -0x220) = addr_table_1008_380a[36]; // 0x389a
    (param_1 + -0x21e) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9d3a(u16 param_1, u16 param_2)

{
    u8 in_AF;

    pass1_1028_9ec6((Struct100 *)str_var1(param_2, param_1 - 0x220), param_2, in_AF);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 - 0x220));
    (param_1 - 0x220) = addr_table_1008_380a[36]; // 0x389a
    (param_1 - 0x21e) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9d48(i16 param_1, u16 param_2, u8 param_3)

{
    pass1_1030_eb50((Struct100 *)str_var1(param_2, param_1 + -0x220), param_2, param_3);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 + -0x220));
    (param_1 + -0x220) = addr_table_1008_380a[36]; // 0x389a
    (param_1 + -0x21e) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9d56(i16 param_1, u16 param_2)

{
    u8 in_AF;

    pass1_1028_81aa((Struct100 *)str_var1(param_2, param_1 + -0x220), param_2, in_AF);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 + -0x220));
    (param_1 + -0x220) = addr_table_1008_380a[36]; // 0x389a
    (param_1 + -0x21e) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9d64(u16 param_1, u16 param_2, u8 param_3)

{
    pass1_1028_a9be((Struct100 *)str_var1(param_2, param_1 - 0x220), param_2, param_3);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 - 0x220));
    (param_1 - 0x220) = addr_table_1008_380a[36]; // 0x389a
    (param_1 - 0x21e) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9d72(u16 param_1, u16 param_2)

{
    pass1_1028_74ae(param_1 - 0x220, param_2);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 - 0x220));
    (param_1 - 0x220) = addr_table_1008_380a[36]; // 0x389a
    (param_1 - 0x21e) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9d80(i16 param_1, u16 param_2, u8 param_3)

{
    pass1_1030_ecc2((Struct100 *)str_var1(param_2, param_1 + -0x220), param_2, param_3);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 + -0x220));
    (param_1 + -0x220) = addr_table_1008_380a[36]; // 0x389a
    (param_1 + -0x21e) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9d8e(i16 param_1, u16 param_2, u8 param_3)

{
    pass1_1028_a706((Struct100 *)str_var1(param_2, param_1 + -0x220), param_2, param_3);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 + -0x220));
    (param_1 + -0x220) = addr_table_1008_380a[36]; // 0x389a
    (param_1 + -0x21e) = SEG_1008;
    return 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1028_9d9c(i16 param_1, u16 param_2, u8 param_3)

{
    pass1_1028_6fc0((Struct100 *)str_var1(param_2, param_1 + -0x220), param_2, param_3);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_2, param_1 + -0x220));
    (param_1 + -0x220) = addr_table_1008_380a[36]; // 0x389a
    (param_1 + -0x21e) = SEG_1008;
    return 0x1;
}


Struct18 * pass1_1028_9e8a(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_848e(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_865c(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_87b4(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1028_8920(u32 param_1, u16 param_2, u16 param_3, u8 param_4)

{
    u16        **ppuVar1;
    u32   u_var2;
    void **ppcVar3;
    u16        **ppuVar4;
    i16          iVar5;
    BOOL16       BVar6;
    u32          uVar7;
    u8          *puVar8;
    u8          *extraout_DX;
    u16          uVar9;
    u16          uVar10;
    i16          iVar11;
    Struct684 *iVar12;
    i16          iVar13;
    u16          uVar14;
    u8           uVar15;
    u16          uVar16;
    u32         *local_156[0x43];
    u32   local_4a;
    i16          iStack70;
    u32          u_stack68;
    u32   uStack56;
    u32  *puStack52;
    u16          uStack48;
    u16         *puStack46;
    u32   uStack42;
    u8           local_26[0x4];
    u32   uStack34;
    u32          uStack30;
    u32          uStack26;
    u32   uStack22;
    u16         *puStack18;
    u16          uStack14;
    u8           local_c[0x2];
    u8           local_a[0x2];
    u8           local_8[0x2];
    u32   u_stack6;

    iVar13  = (param_1 >> 0x10);
    iVar11  = param_1;
    ppuVar1 = (u16 **)(iVar11 + 0x114);
    ppuVar4 = ppuVar1;
    pass1_1030_64ce(param_3, ppuVar1, param_2, globals->_PTR_LOOP_1050_5740, (param_1 & 0xffff0000 | ZEXT24(ppuVar1)), (iVar11 + 0x108),
                    str_var1(param_3, local_26));
    u_stack6 = *ppuVar4;
    uVar15  = (param_3 >> 0x8);
    pass1_1008_3eb4((param_1 & 0xffff0000 | ZEXT24(ppuVar1)),
                    str_var1(param_3, local_c), CONCAT13(uVar15, CONCAT12(param_3, local_a)),
                    str_var1(param_3, local_8));
    puStack46      = u_stack6;
    uStack56       = u_stack6;
    uStack56._3_1_ = (u_stack6 >> 0x18);
    uStack14       = (uStack56._3_1_ != '\0');
    if(uStack14 == 0x0)
    {
        uVar7 = (iVar11 + 0x114U);
        pass1_1028_e2ac(globals->_PTR_LOOP_1050_65e2, 0x500);
        puStack18 = (uVar7 & 0xffff | ZEXT24(u_stack6) << 0x10);
        uVar14    = SEG_1030;
        pass1_1030_61fe(globals->_PTR_LOOP_1050_5740, uVar7 & 0xffff | ZEXT24(u_stack6) << 0x10, param_1 & 0xff000000 | CONCAT12((param_1 >> 0x10), iVar11 + 0x114U), (iVar11 + 0x108), uVar7, u_stack6, param_3);
        uStack56 = 0x0;
        if(((iVar11 + 0x11a) == 0xa) || ((iVar11 + 0x11a) == 0x37))
        {
            if((iVar11 + 0x11a) == 0x37)
            {
                uStack56 = *(u16 **)(iVar11 + 0x10c);
            }
            iVar5 = iVar11 + 0x114;
            pass1_1028_e2ac(globals->_PTR_LOOP_1050_65e2, 0x400);
            (iVar11 + 0x10c) = iVar5;
            (iVar11 + 0x10e) = u_stack6;
            puStack46        = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2f, param_3, u_stack6, iVar13);
            u_stack6    = (puStack46 >> 0x10);
            uVar7            = puStack46 & 0xffff;
            uVar14           = SEG_1018;
            pass1_1018_0196(uVar7 | ZEXT24(u_stack6) << 0x10, *(iVar11 + 0x10c), *(iVar11 + 0x108), uVar7, u_stack6, param_3);
            iVar5 = uVar7;
            if((iVar11 + 0x110) != 0x0)
            {
                u_var2 = (iVar11 + 0x10c);
                pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
                uStack42         = str_var1(u_stack6, iVar5);
                uVar7            = *(iVar11 + 0x110);
                *(iVar5 + 0x200) = uVar7;
                u_stack68         = uVar7;
            }
        }
        u_stack6 = uVar7;
        u_var2         = (iVar11 + 0x10c);
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
        puStack52 = str_var1(u_stack6, u_stack6);
        puVar8    = (u_stack6 | u_stack6);
        if(puVar8 != 0x0)
        {
            ppcVar3 = (*puStack52 + 0x8);
            (**ppcVar3)(uVar14, u_stack6, u_stack6, 0x0, puStack18, (puStack18 >> 0x10), 0x0);
            puVar8 = extraout_DX;
        }
    }
    else
    {
        puStack18 = u_stack6;
        puVar8    = u_stack6;
    }
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, puStack18, (puStack18 >> 0x10));
    uStack22 = str_var1(puVar8, u_stack6);
    pass1_1030_73ee(CONCAT13((puVar8 >> 0x8), CONCAT12(puVar8, u_stack6)), *(iVar11 + 0x10c), puVar8);
    BVar6 = pass1_1008_c6ae(globals->dat_1050_06e0, (iVar11 + 0x11a), 0x31);
    if((BVar6 == 0x0) && ((iVar11 + 0x11c) == 0x0))
    {
        local_4a = (uStack22 + 0xc);
        iStack70 = (uStack22 + 0x10);
        u_stack68 = u_stack68 & 0xffff0000 | ZEXT24(&local_4a);
        if(iStack70 < 0x1)
        {
            uStack48 = 0x5;
        }
        else
        {
            uStack48 = 0x6;
        }
        (uStack22 + 0x14) = uStack48;
    }
    uStack26 = *(uStack22 + 0x16);
    uVar9    = (uStack22 + 0x18);
    if((uVar9 | uStack26) != 0x0)
    {
        struct_1030_e4fa((Struct100 *)CONCAT13(uVar15, CONCAT12(param_3, local_156)), uStack26 & 0xffff | uVar9 << 0x10, param_3, param_4);
        fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_3, local_156));
        local_156[0] = &u32_1008_389a;
    }
    uStack30 = pass1_1028_e2e0(globals->_PTR_LOOP_1050_65e2, uVar9, 0x7);
    uVar9    = uStack30;
    uVar10   = (uStack30 >> 0x10) | uVar9;
    if(uVar10 == 0x0)
    {
        return;
    }
    pass1_1030_7e5a(uStack22, uStack30, uVar10);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uStack30, (uStack30 >> 0x10));
    uStack34 = str_var1(uVar10, uVar9);
    uVar14   = SUB42(puStack18, 0x0);
    uVar16   = (puStack18 >> 0x10);
    uVar15   = uVar10;
    iVar12   = (Struct684 *)*uStack34;
    ppcVar3  = &iVar12->field_0x4;
    (**ppcVar3)();
    ppcVar3 = &iVar12->field_0x20;
    (**ppcVar3)(0x1030, uStack34, uVar9, uVar15, uVar14, uVar16);
    ppcVar3 = &iVar12->field_0x18;
    (**ppcVar3)(0x1030, uStack34, (uStack34 >> 0x10), 0x1);
    if((iVar11 + 0x11a) == 0x37)
    {
        (uStack34 + 0x20) = (iVar11 + 0x10c);
    }
    (iVar11 + 0x120) = uStack34;
    return;
}


Struct18 * pass1_1028_8d62(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1028_8dec(u16 *param_1) {
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    param_1->field_0x0 = addr_table_1028_8fb0; // 0x8fb0;
    (iVar1 + 0x2) = SEG_1028;
    fn_ptr_1000_17ce((iVar1 + 0x114), SEG_1000);
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
}


Struct18 * pass1_1028_8f8a(Struct18 *param_1, u8 param_2)

{
    pass1_1028_8dec(&param_1->field_0x0);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_90aa(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


Struct18 * pass1_1028_9300(Struct18 *param_1, u8 param_2)

{
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1028_93d4(u32 param_1, u16 param_2, i16 param_3, u16 param_4, u8 param_5)

{
    void **ppcVar1;
    u16    u_var2;
    u16    uVar3;
    u8    *extraout_DX;
    u8    *extraout_DX_00;
    i16    iVar4;
    u16    uVar5;
    u8     local_112[0x10c];
    u32    u_stack6;

    globals->PTR_LOOP_1050_50ca = 0x0;
    globals->PTR_LOOP_1050_50cc = 0x0;
    uVar5              = (param_1 >> 0x10);
    iVar4              = param_1;
    u_stack6            = pass1_1028_e2e0(globals->_PTR_LOOP_1050_65e2, param_2, 0x7);
    uVar3              = (u_stack6 >> 0x10);
    u_var2              = u_stack6;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, uVar3);
    (iVar4 + 0x11e) = u_var2;
    (iVar4 + 0x120) = uVar3;
    u_var2           = iVar4 + 0x114;
    ppcVar1         = ((iVar4 + 0x11e) + 0x1c);
    (**ppcVar1)();
    if(u_var2 != 0x0)
    {
        pass1_1028_9624(param_1, u_var2, extraout_DX, param_4, param_3, param_5);
        ppcVar1 = ((iVar4 + 0x11e) + 0x20);
        (**ppcVar1)();
        ppcVar1 = ((iVar4 + 0x11e) + 0x18);
        (**ppcVar1)();
        pass1_1028_9600(param_1, extraout_DX_00, param_3, param_4, param_5);
        return;
    }
    (iVar4 + 0x11e) = 0x0;
    struct_1030_e4fa((Struct100 *)str_var1(param_4, local_112), u_stack6, param_4, param_5);
    fn_ptr_1030_835a(globals->_PTR_LOOP_1050_5748, str_var1(param_4, local_112));
    if(globals->PTR_LOOP_1050_50ca == 0x0)
    {
        globals->PTR_LOOP_1050_50ca = 0x6ad;
    }
    return;
}
