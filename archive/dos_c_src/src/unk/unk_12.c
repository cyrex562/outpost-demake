#include "unk_12.h"

#include "addr_struct.h"
#include "address_tables/function_tables.h"
#include "fn_ptr_ops/fn_ptr_ops_6.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_20.h"
#include "struct_43.h"
#include "struct_690.h"
#include "structs/structs_1.h"
#include "unk_15.h"
#include "utils.h"

void  pass1_1010_927a(SegmentAddress *param_1)

{
    param_1->offset = addr_table_1010_9566[10]       ;//0x958e;
    param_1->base = SEG_1010;
    pass1_1010_3880(param_1);
}

void  pass1_1010_92e6(SegmentAddress *param_1, u16 param_2)

{
    param_1->offset = addr_table_1010_9566;//0x9566;
    param_1->base = SEG_1010;
    pass1_1010_2db2(param_1, param_2);
}

void  pass1_1010_9348(u32 param_1, i16 param_2)

{
    i16 iVar1;
    u16 u_var2;

    (param_2 * 0x8 + 0x319e) = param_2;
    u_var2                    = (param_1 >> 0x10);
    iVar1                    = param_1;
    (iVar1 + 0x16)           = param_2 * 0x8 + 0x3198;
    (iVar1 + 0x18)           = SEG_1050;
    (iVar1 + 0x12)           = param_2;
    return;
}

void  pass1_1010_93f0(u32 param_1, u16 param_2)

{
    u8  *puVar1;
    u16  u_var2;
    i16  iVar3;
    u16  uVar4;
    u16 *puVar5;
    u8   local_1c[0x1a];

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    if((iVar3 + 0x56) == 0x0)
    {
        puVar5 = pass1_1010_9258(str_var1(param_2, local_1c));
        u_var2  = (puVar5 >> 0x10);
        puVar1 = local_1c;
        pass1_1010_398e(globals,str_var1(param_2, puVar1);
        (iVar3 + 0x56) = puVar1;
        (iVar3 + 0x58) = u_var2;
        pass1_1010_927a(str_var1(param_2, local_1c));
    }
    return;
}

void  pass1_1010_944e(u16 param_1, u16 param_2, i16 param_3)

{
    FnPtr1   *ppcVar1;
    u32       u_var2;

    if((param_1 + 0x56) == 0x0)
    {
        ppcVar1 = (str_var1(param_2, param_1) + 0x10);
        (**ppcVar1)();
    }
    u_var2 = pass1_1010_2e02(str_var1(param_2, param_1), param_3);
    pass1_1010_2e5c(param_1, param_2, u_var2);
    return;
}

bool  pass1_1010_9488(u16 param_1, u16 param_2, u32 param_3, u8 *param_4, i16 param_5, u16 param_6)

{
    u16  uVar1;
    u16  u_var2;
    u16  uVar3;
    u16 *puVar4;
    u16  uVar5;
    u16  uStack10;

    uVar5    = (param_3 + 0x12);
    puVar4   = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3, param_6, param_4, param_5);
    u_var2    = (puVar4 >> 0x10);
    uVar1    = uVar5 - 0x32;
    uStack10 = puVar4;
    uVar3    = u_var2;
    if(uVar1 == 0x0)
    {
        pass1_1010_a5ca(uStack10, u_var2, 0x32, 0x0, u_var2);
        if(uVar1 != 0x0)
        {
            return false;
        }
        uVar5 = 0x4d;
    }
    else
    {
        uVar1 = uVar5 - 0x3f;
        if(uVar1 == 0x0)
        {
            pass1_1010_a5ca(uStack10, u_var2, 0x3f, 0x0, u_var2);
            if(uVar1 != 0x0)
            {
                return false;
            }
            uVar5 = 0x4e;
        }
    }
    pass1_1010_a5ca(uStack10, u_var2, uVar5, uVar1, uVar3);
    return uVar1 == 0x0;
}

u16  pass1_1010_9502(u32 param_1)

{
    u32 uVar1;

    uVar1 = (param_1 + 0x16);
    return (uVar1 + 0x2);
}


u16  pass1_1010_9514(void)

{
    return 0x31;
}

void  pass1_1010_95f8(u16 *param_1, u16 param_2) {
    u32 * puVar1;
    u16 u_var2;
    void **ppcVar3;
    Struct491 *iVar4;
    u16 uVar4;

    uVar4 = (param_1 >> 0x10);
    iVar4 = (Struct491 *) param_1;
    param_1->field_0x0 = addr_table_1010_a1c4[1];//0xa1c8;
    iVar4->field_0x2 = SEG_1010;
    puVar1 = iVar4->field_0xa;
    u_var2 = iVar4->field_0xc;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    puVar1 = iVar4->field_0xe;
    u_var2 = iVar4->field_0x10;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    puVar1 = iVar4->field_0x12;
    u_var2  = iVar4->field_0x14;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    pass1_1010_1d80(param_1, param_2);
    return;
}


void  pass1_1010_9674(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;

    uVar5  = (param_1 >> 0x10);
    iVar4  = param_1;
    puVar1 = (iVar4 + 0x12);
    u_var2  = (iVar4 + 0x14);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    (iVar4 + 0x12) = 0x0;
    return;
}


void  pass1_1010_96a8(u32 param_1, i16 param_2)

{
    i16 *pi_var1;
    u16  u_var2;

    u_var2   = (param_1 >> 0x10);
    pi_var1  = (param_1 + 0x1e);
    *pi_var1 = *pi_var1 - param_2;
    if(*pi_var1 < 0x0)
    {
        (param_1 + 0x1e) = 0x0;
    }
    return;
}


u16  pass1_1010_96c2(u32 param_1)

{
    return (param_1 + 0x1e);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

i16  pass1_1010_96d0(Struct690 *param_1)

{
    i16         *pi_var1;
    i16          iVar2;
    Struct690 *iVar3;
    u16          uVar3;
    u32          uVar4;
    i16          iStack8;

    uVar3 = (param_1 >> 0x10);
    iVar3 = (Struct690 *)param_1;
    if(iVar3->field_0x1a_addr_offset != 0x0)
    {
        if(0x0 < iVar3->field_0x1c_addr_base)
        {
            pi_var1  = &iVar3->field_0x1c_addr_base;
            *pi_var1 = *pi_var1 + -0x1;
        }
        if((iVar3->field_0x1c_addr_base == 0x0) && (iVar3->field_0x1e != 0x0))
        {
            iStack8 = 0x1;
            uVar4   = pass1_1030_8326();
            iVar2   = (uVar4 >> 0x10);
            if((iVar2 != 0x0) || (0x32 < uVar4))
            {
                iStack8 = 0x5;
            }
            if((iVar2 != 0x0) || (0x3c < uVar4))
            {
                iStack8 = 0xa;
            }
            if(iVar3->field_0x1e < iStack8)
            {
                iStack8 = iVar3->field_0x1e;
            }
            pi_var1  = &iVar3->field_0x1e;
            *pi_var1 = *pi_var1 - iStack8;
            if(*pi_var1 < 0x0)
            {
                iVar3->field_0x1e = 0x0;
            }
            if(0x0 < iVar3->field_0x1e)
            {
                return iStack8;
            }
            return -0x1;
        }
    }
    return 0x0;
}


void  pass1_1010_9766(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    i16 in_AX;
    u16 uVar1;

    uVar1            = (param_1 >> 0x10);
    (param_1 + 0x1a) = 0x1;
    pass1_1010_a0a0(param_1, param_2, param_3, param_4);
    pass1_1010_9f8c(param_1, 0x80, param_4);
    (param_1 + 0x1e) = in_AX * 0x32;
    return;
}

u16  pass1_1010_7818(u32 param_1, u32 param_2)

{
    u32 uVar1;
    u16        u_var2;
    BOOL16     BVar3;
    u16        uVar4;
    u16        u_stack6;

    uVar4 = (param_1 >> 0x10);
    uVar1 = (param_1 + 0x14);
    u_var2 = pass1_1010_b028(uVar1, (uVar1 >> 0x10), param_2);
    BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x1e);
    if(BVar3 == 0x0)
    {
        BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0xb);
        if(((BVar3 == 0x0) && (BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x20), BVar3 == 0x0)) && (BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x1c), BVar3 == 0x0))
        {
            BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x2);
            if((BVar3 != 0x0) || (BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x13), BVar3 != 0x0))
            {
                return 0x5;
            }
            BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x11);
            if((BVar3 != 0x0) || (BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x12), BVar3 != 0x0))
            {
                return 0x4;
            }
            BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x5);
            if(BVar3 != 0x0)
            {
                return 0x6;
            }
            BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x6);
            if(BVar3 != 0x0)
            {
                return 0x7;
            }
            BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x4);
            if(BVar3 != 0x0)
            {
                return 0x10;
            }
            BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x3);
            if(BVar3 != 0x0)
            {
                return 0x11;
            }
            BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x19);
            if(BVar3 != 0x0)
            {
                return 0x15;
            }
            BVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, u_var2, 0x1d);
            if(BVar3 != 0x0)
            {
                return 0x16;
            }
            u_var2 = pass1_1010_7d7e(param_1, uVar4, 0x1, u_var2);
            if(u_var2 == 0x0)
            {
                return 0x0;
            }
            return 0xc;
        }
        u_stack6 = 0x1;
    }
    else
    {
        u_stack6 = 0x18;
    }
    return u_stack6;
}

void  pass1_1010_7b8c(u32 param_1, i16 param_2, u16 param_3)

{
    u32 *puVar1;
    u16         u_var2;
    FnPtr1    **ppcVar3;
    u32  uVar4;
    u8         *puVar5;
    u16         extraout_DX;
    i16         iVar6;
    u16         uVar7;
    u32  uStack14;
    u8          local_a[0x8];

    uVar7 = (param_1 >> 0x10);
    iVar6 = param_1;
    if(((iVar6 + 0x1e) | (iVar6 + 0x1c)) != 0x0)
    {
        pass1_1008_5784(str_var1(param_3, local_a), *(iVar6 + 0x1c));
        do
        {
            puVar5 = local_a;
            pass1_1008_5b12(puVar5, param_3);
            uStack14 = str_var1(extraout_DX, puVar5);
            if((extraout_DX | puVar5) == 0x0)
                break;
            uVar4 = (puVar5 + 0x8);
        } while((uVar4 + 0x6) != param_2);
        if((extraout_DX | puVar5) != 0x0)
        {
            ppcVar3 = ((iVar6 + 0x1c) + 0xc);
            (**ppcVar3)(SEG_1008, (iVar6 + 0x1c), uStack14);
        }
        uVar4 = (iVar6 + 0x1c);
        if((uVar4 + 0x8) == 0x0)
        {
            puVar1 = (iVar6 + 0x1c);
            u_var2  = (iVar6 + 0x1e);
            if((u_var2 | puVar1) != 0x0)
            {
                ppcVar3 = *puVar1;
                (**ppcVar3)(SEG_1008, puVar1, u_var2, 0x1, puVar1, u_var2, puVar1, u_var2);
            }
            (iVar6 + 0x1c) = 0x0;
        }
    }
    return;
}

u16  pass1_1010_7d38(u16 param_1, u16 param_2, i16 param_3, u16 param_4, u16 param_5)

{
    u32 local_e;
    u16        uStack10;
    u16        local_8;
    u8         local_6[0x2];
    u8         local_4[0x2];

    local_e  = (param_3 + 0xc);
    uStack10 = (param_3 + 0x10);
    pass1_1008_3eb4(str_var1(param_5, &local_e),
                    str_var1(param_5, &local_8),
                    str_var1(param_5, local_6),
                    str_var1(param_5, local_4));
    return local_8;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1010_7d7e(u16 param_1, u16 param_2, i16 param_3, i16 param_4)

{
    BOOL16 BVar1;

    if(param_3 != 0x3)
    {
        if((param_4 < 0xa) || (0x7f < param_4))
        {
            return 0x0;
        }
        BVar1 = pass1_1008_c6ae(globals->dat_1050_06e0, param_4, 0x3c);
        if(BVar1 != 0x0)
        {
            return 0x0;
        }
        if(((param_4 == 0x6a) && (param_3 != 0x4)) && (param_3 != 0x5))
        {
            return 0x0;
        }
    }
    return 0x1;
}

void  pass1_1010_7e40(u32 *param_1, u8 *param_2, i16 param_3, u16 param_4)

{
    u32   uVar1;
    Struct652 *pu_var2;
    u16          u_var2;
    u16         *puVar3;

    u_var2                = (param_1 >> 0x10);
    pu_var2 = (Struct652 *) param_1;
    param_1->field_0x0 = 0x0;
    pu_var2->field_0x67c = 0x0;
    pu_var2->field_0x680  = 0x0;
    pu_var2->field_0xe82  = 0x0;
    pu_var2->field_0xe84  = 0x0;
    &pu_var2->field_0xe88 = 0x0;
    pass1_1000_4906((Struct20 *)(param_1 & 0xffff0000 | &pu_var2->field_0x4), 0x0, 0x228);
    pass1_1000_4906((Struct20 *)(param_1 & 0xffff0000 | &pu_var2->field_0x22c), 0x0, 0x228);
    pass1_1000_4906((Struct20 *)(param_1 & 0xffff0000 | &pu_var2->field_0x454), 0x0, 0x228);
    *&pu_var2->field_0x682 = 0x0;
    *&pu_var2->field_0xa82 = 0x0;
    globals->dat_1050_14cc = param_1;
    puVar3                = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2, param_4, param_2, param_3);
    pu_var2->field_0xe88   = puVar3;
    pu_var2->field_0xe8a   = (puVar3 >> 0x10);
    uVar1                 = &pu_var2->field_0xe88;
    pu_var2->field_0xe84   = (uVar1 + 0x64);
    return;
}

void  pass1_1010_8018(u32 param_1, u16 param_2, u8 *param_3, u16 param_4)

{
    i16  iVar1;
    u16 *u_var2;

    if((param_2 * 0xa + 0x1fa0) != 0x0)
    {
        pass1_1010_878c((Struct87 **)param_1, (param_2 * 0xa + 0x1fa0), param_4);
        u_var2 = (param_1 >> 0x10);
        if((param_1 + 0x67c) != 0x0)
        {
            iVar1 = param_2 * 0xa;
            pass1_1008_64c8((param_1 + 0x67c),
                            str_var1((iVar1 + 0x1fa6), (iVar1 + 0x1fa8)), (iVar1 + 0x1fa4), param_2, param_3);
            return;
        }
    }
    return;
}

void  pass1_1010_8170(Struct87 **param_1, i16 param_2, u8 *param_3, u16 param_4)

{
    u16 uVar1;
    i16 iVar2;
    i16 iVar3;
    u16 uVar4;

    uVar4 = (param_1 >> 0x10);
    iVar2 = param_1;
    uVar1 = (iVar2 + 0x680);
    iVar3 = param_2 * 0x10;
    if((iVar3 + 0x16) != uVar1)
    {
        pass1_1010_8096(param_1, (iVar3 + 0x16));
        pass1_1010_878c(param_1, (iVar3 + 0x16), param_4);
        if((iVar2 + 0x67c) == 0x0)
        {
            return;
        }
    }
    iVar3 = param_2 * 0x10;
    pass1_1008_6562((iVar2 + 0x67c),
                    str_var1((iVar3 + 0x1c), (iVar3 + 0x1e)), (iVar3 + 0x1a), uVar1, param_3);
    return;
}


void  pass1_1010_81f6(HINSTANCE16 param_1, u16 param_2, Struct87 **param_3, long param_4, i16 param_5)

{
    u16 uVar1;
    u16 u_var2;
    u16 uStack12;
    u32 uStack10;

    if(param_4 == 0x8000001)
    {
        uStack10 = param_3 & 0xffff0000 | (param_3 + 0x22c);
        uStack12 = 0xfa;
    }
    else
    {
        if(param_4 == 0x8000002)
        {
            uStack10 = param_3 & 0xffff0000 | (param_3 + 0x454);
            uStack12 = 0xfc;
        }
        else
        {
            uStack10 = param_3 & 0xffff0000 | (param_3 + 0x4);
            uStack12 = 0x2;
        }
    }
    u_var2 = (uStack10 >> 0x10);
    uVar1 = param_3;
    if((param_5 * 0x4 + uStack10) == 0x0)
    {
        if((0x0 < param_5) && (param_5 < 0xa))
        {
            pass1_1010_89f0(param_3, param_3, uStack12, uStack10, param_1, param_2);
            return;
        }
        if(param_5 < 0xa)
        {
            return;
        }
        if(0x7f < param_5)
        {
            return;
        }
        if((uStack10 + 0x14) == 0x0)
        {
            pass1_1010_89f0(param_3, param_3, uStack12, uStack10, param_1, param_2);
        }
        pass1_1010_887a(param_3, uStack10, param_5, param_1, param_2);
    }
    pass1_1010_866c(uVar1, param_3, param_3, uStack10, param_5);
    return;
}


void  pass1_1010_82f8(u32 param_1, u16 param_2)

{
    (param_1 + 0xe82) = param_2;
    return;
}

void  pass1_1010_86de(u16 param_1, u16 param_2, u8 param_3, u32 param_4)

{
    long      *plVar1;
    i16        iVar2;
    bool       bVar3;
    u16        uVar4;
    long       lVar5;
    u32        uVar6;
    long       lStack20;
    u32 uStack10;

    uVar6    = pass1_1008_4772((Struct76 *)param_4);
    uVar4    = (uVar6 >> 0x10);
    uStack10 = 0x0;
    do
    {
        plVar1 = (long *)(uVar6 + 0x8);
        if(*plVar1 == uStack10 || *plVar1 < uStack10)
        {
            return;
        }
        lVar5 = uStack10;
        pass1_1008_4544(param_4);
        iVar2 = lVar5;
        bVar3 = false;
        for(lStack20 = 0x0; plVar1 = (long *)(uVar6 + 0x4), *plVar1 != lStack20 && lStack20 <= *plVar1; lStack20 = lStack20 + 0x1)
        {
            if(bVar3)
            {
            LAB_1010_86fc:
                if(bVar3)
                {
                    if(*(lStack20 + iVar2) == -0x1)
                    {
                        *(lStack20 + iVar2) = param_3;
                        break;
                    }
                }
            }
            else
            {
                if(*(lStack20 + iVar2) == -0x1)
                    goto LAB_1010_86fc;
                *(lStack20 + iVar2 + -0x1) = param_3;
                bVar3                      = true;
            }
        }
        uStack10 = uStack10 + 0x1;
    } while(true);
}

void  pass1_1010_887a(Struct87 **param_1, u32 param_2, i16 param_3, u16 param_4, u16 param_5)

{
    u16         uVar1;
    u32         u_var2;
    u32         uVar3;
    u8         *in_DX;
    u8         *puVar4;
    u16         extraout_DX;
    i16         iVar5;
    u16         uVar6;
    u16         uVar7;
    u8        bVar8;
    u8          local_26[0x6];
    u16         uStack32;
    u16         uStack30;
    u32         uStack28;
    u32  uStack24;
    u32         uStack20;
    u32         uStack16;
    Struct76 *paStack12;
    Struct76 *paStack8;
    u16         uStack4;

    uStack4 = param_3 - 0xa;
    pass1_1010_878c(param_1, (uStack4 * 0xa + 0x3382), param_4);
    uVar6 = (param_1 >> 0x10);
    if((param_1 + 0x67c) != 0x0)
    {
        iVar5 = uStack4 * 0xa;
        uVar1 = uStack4;
        pass1_1008_6562((param_1 + 0x67c),
                        str_var1((iVar5 + 0x3388), (iVar5 + 0x338a)), (iVar5 + 0x3386), uStack4, in_DX);
        paStack8  = (Struct76 *)str_var1(in_DX, uVar1);
        uVar6     = (param_2 >> 0x10);
        paStack12 = *(Struct76 **)(param_2 + 0x14);
        uStack16  = pass1_1008_4772(paStack12);
        uStack20  = pass1_1008_4772(paStack8);
        puVar4    = (uStack20 >> 0x10);
        u_var2     = *(uStack20 + 0x4);
        uVar7     = (uStack16 >> 0x10);
        iVar5     = uStack16;
        if((long)u_var2 < (iVar5 + 0x4))
        {
            u_var2 = (iVar5 + 0x4);
        }
        uVar3 = *(uStack20 + 0x8);
        if((long)uVar3 < (iVar5 + 0x8))
        {
            uVar3 = (iVar5 + 0x8);
        }
        uVar1    = uVar3;
        uStack24 = uVar3 & 0xffff | u_var2 << 0x10;
        bVar8 = 0x1e;
        mem_op_1000_179c(NULL, 0x1e, SEG_1000);
        if((puVar4 | uVar1) == 0x0)
        {
            uVar1 = 0x0;
            uVar7 = 0x0;
        }
        else
        {
            struct_op_1008_6604((Struct85 *)str_var1(puVar4, uVar1), uStack24, (uStack24 >> 0x10));
            uVar7 = extraout_DX;
        }
        uStack28 = str_var1(uVar7, uVar1);
        pass1_1008_431c(str_var1(uVar7, uVar1), bVar8);
        uVar7    = (uStack16 >> 0x10);
        uStack30 = (uStack24 - (uStack16 + 0x4)) / 0x2;
        uStack32 = uStack24 - (uStack16 + 0x8);
        pass1_1008_3e54(str_var1(param_5, local_26), 0x0, uStack32, uStack30);
        pass1_1008_4480(uStack28, str_var1(param_5, local_26), paStack12, param_5);
        pass1_1008_3e76(str_var1(param_5, local_26), 0x0, 0x0, 0x7);
        pass1_1008_4480(uStack28, str_var1(param_5, local_26), paStack8, param_5);
        *(param_3 * 0x4 + param_2) = uStack28;
    }
    return;
}

void  pass1_1010_6566(u32 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    u16 uVar1;
    u16 u_var2;
    i16 local_4;

    uVar1 = param_1;
    u_var2 = (param_1 >> 0x10);
    switch_1010_6646(uVar1, u_var2, str_var1(param_5, &local_4), param_4);
    if(local_4 != 0x0)
    {
        (uVar1 + local_4)       = param_3;
        (uVar1 + local_4 + 0x2) = param_2;
    }
    return;
}


i16  pass1_1010_659a(u32 param_1, u16 param_2, u16 param_3)

{
    u16 uVar1;
    u16 u_var2;
    i16 local_4;

    uVar1 = param_1;
    u_var2 = (param_1 >> 0x10);
    switch_1010_6646(uVar1, u_var2, str_var1(param_3, &local_4), param_2);
    if(local_4 == 0x0)
    {
        return 0x0;
    }
    return (uVar1 + local_4) - (uVar1 + local_4 + 0x2);
}


u16  pass1_1010_65d0(u16 param_1, u32 param_2, u16 param_3)

{
    u16 uVar1;
    i16 local_4;

    uVar1 = (param_2 >> 0x10);
    switch_1010_6646(param_2, uVar1, str_var1(param_1, &local_4), param_3);
    if(local_4 == 0x0)
    {
        return 0x0;
    }
    return (param_2 + local_4 + 0x2);
}


void  pass1_1010_6604(u32 param_1, u16 param_2, u16 param_3)

{
    i16 iVar1;
    u16 u_var2;
    u16 uVar3;
    i16 local_4;

    u_var2 = param_1;
    uVar3 = (param_1 >> 0x10);
    switch_1010_6646(u_var2, uVar3, str_var1(param_3, &local_4), param_2);
    if(local_4 != 0x0)
    {
        iVar1                   = (u_var2 + local_4 + 0x2);
        (u_var2 + local_4)       = (u_var2 + local_4);
        (u_var2 + local_4 + 0x2) = iVar1 + 0x1;
        pass1_1010_1f62(param_3, param_1 & 0xffff | uVar3 << 0x10, 0x15);
    }
    return;
}


void  switch_1010_6646(u16 param_1, u16 param_2, u16 *param_3, u16 param_4)

{
    switch(param_4)
    {
    case 0x83:
        *param_3 = 0xa;
        break;
    case 0x84:
        *param_3 = 0xe;
        break;
    case 0x85:
        *param_3 = 0x12;
        break;
    case 0x86:
        *param_3 = 0x16;
        return;
    case 0x87:
        *param_3 = 0x1a;
        return;
    case 0x88:
        *param_3 = 0x1e;
        return;
    case 0x89:
        *param_3 = 0x22;
        return;
    default:
        *param_3 = 0x0;
        return;
    }
    return;
}

void  pass1_1010_6814(u32 param_1, u16 param_2, i16 param_3)

{
    (param_1 + param_3 * 0x2 + 0x11e) = param_2;
    return;
}


void  pass1_1010_682e(u32 param_1, u16 param_2, i16 param_3)

{
    (param_1 + param_3 * 0x2 + 0xa) = param_2;
    return;
}

void  pass1_1010_6bb2(u16 *param_1, u16 param_2)

{
    u32 *puVar1;
    void **ppcVar2;
    u16 uVar3;
    i16 iVar4;
    u16 uVar5;
    u16 uVar6;
    u16 uVar7;
    u16 *puStack14;

    uVar7 = (param_1 >> 0x10);
    uVar6 = param_1;
    param_1->field_0x0 = addr_table_1010_7e24[1];//0x7e28;
    (uVar6 + 0x2) = SEG_1010;
    (uVar6 + 0xa) = addr_table_1010_7e24[5];//;0x7e38;
    (uVar6 + 0xc) = SEG_1010;
    puVar1 = (uVar6 + 0x1c);
    uVar3 = (uVar6 + 0x1e);
    if ((uVar3 | puVar1) != 0x0) {
        ppcVar2 = *puVar1;
        (**ppcVar2)();
    }
    (uVar6 + 0x1c) = 0x0;
    if((uVar6 + 0x14) != 0x0)
    {
        uVar3 = uVar7 | uVar6;
        if(param_1 == 0x0)
        {
            uVar5 = 0x0;
        }
        else
        {
            uVar3 = uVar6 + 0xa;
            uVar5 = uVar7;
        }
        pass1_1010_1ea6(*(uVar6 + 0x14), str_var1(uVar5, uVar3), param_2);
    }
    if((uVar6 + 0x22) != 0x0)
    {
        uVar3 = uVar7 | uVar6;
        if(param_1 == 0x0)
        {
            uVar5 = 0x0;
        }
        else
        {
            uVar3 = uVar6 + 0xa;
            uVar5 = uVar7;
        }
        pass1_1010_1ea6(*(uVar6 + 0x22), str_var1(uVar5, uVar3), param_2);
    }
    (uVar6 + 0x14) = 0x0;
    (uVar6 + 0x22) = 0x0;
    if(param_1 == 0x0)
    {
        iVar4 = 0x0;
        uVar7 = 0x0;
    }
    else
    {
        iVar4 = uVar6 + 0xa;
    }
    puStack14     = str_var1(uVar7, iVar4);
    *puStack14    = addr_table_1008_380a[36]; // 0x389a
    (iVar4 + 0x2) = SEG_1008;
    pass1_1010_1d80(param_1, param_2);
    return;
}

u16 pass1_1010_6ca2(u32 param_1, i16 param_2, u16 param_3, u16 param_4)

{
    u32 uVar1;
    u16       *pu_var2;
    u16        uVar3;
    i16        iStack10;
    i16        iStack8;

    _iStack8 = str_var1(param_4, &stack0x000a);
    iStack10 = param_2;
    do
    {
        pu_var2 = _iStack8;
        if(iStack10 == 0x0)
        {
            return 0x1;
        }
        _iStack8 = (_iStack8 & 0xffff0000 | (iStack8 + 0x2));
        uVar3    = *pu_var2;
        uVar1    = (param_1 + 0x14);
        pass1_1010_a5ca(uVar1, (uVar1 >> 0x10), uVar3, uVar3, param_3);
        iStack10 = iStack10 + -0x1;
    } while(uVar3 == 0x0);
    return 0x0;
}

void  pass1_1010_715c(u32 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5, u16 param_6)

{
    pass1_1010_a69c(*(param_1 + 0x14), param_2, param_3, param_4, param_5, param_6);
    return;
}

void  pass1_1010_52fc(u32 param_1, u32 param_2, u16 param_3, u8 *param_4, u16 param_5)

{
    u16 uVar1;

    pass1_1010_533c(param_1, param_2, param_4, param_5);
    uVar1            = (param_1 >> 0x10);
    (param_1 + 0x12) = param_3;
    (param_1 + 0x14) = param_4;
    return;
}


void  pass1_1010_531c(u32 param_1, u32 param_2, u16 param_3, u8 *param_4, u16 param_5)

{
    u16 uVar1;

    pass1_1010_533c(param_1, param_2, param_4, param_5);
    uVar1            = (param_1 >> 0x10);
    (param_1 + 0x16) = param_3;
    (param_1 + 0x18) = param_4;
    return;
}

u32  pass1_1010_5f7a(i16 param_1, u16 param_2, u16 param_3, i16 param_4)

{
    i16 iVar1;

    iVar1 = param_4 * 0x8 + param_1;
    if(((iVar1 + 0x26) == 0x0) && ((iVar1 + 0x28) == 0x0))
    {
        return 0x0;
    }
    return str_var1(param_2, param_4 * 0x8 + param_1 + 0x22);
}


void  pass1_1010_5fb0(u32 param_1, u16 param_2, u32 *param_3, u16 param_4, i16 param_5)

{
    u16          uVar1;
    Struct656 *iVar1;

    uVar1             = (param_1 >> 0x10);
    iVar1             = (Struct656 *)(param_1 + param_5 * 0x8);
    iVar1->field_0x22 = *param_3;
    iVar1->field_0x26 = param_3[0x1];
    return;
}

void  pass1_1010_60a0(u32 param_1)

{
    (param_1 + 0x76) = 0x5;
    return;
}


u16  pass1_1010_60b4(void)

{
    return 0x1;
}


u16  pass1_1010_60ba(void)

{
    return 0x1;
}


u16  pass1_1010_60c0(void)

{
    return 0x1;
}


u16  pass1_1010_60c6(void)

{
    return 0x1;
}

void  pass1_1010_60fa(u32 param_1)

{
    i16 iVar1;
    u16 u_var2;

    u_var2          = (param_1 >> 0x10);
    iVar1          = param_1;
    (iVar1 + 0x7e) = 0x1;
    (iVar1 + 0x7c) = (iVar1 + 0x20);
    (iVar1 + 0x20) = 0x1;
    return;
}


void  pass1_1010_6118(u32 param_1)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((iVar1 + 0x7e) != 0x0)
    {
        (iVar1 + 0x20) = (iVar1 + 0x7c);
    }
    return;
}

u32  pass1_1010_454a(u32 param_1)

{
    i16 iVar1;
    i16 iVar2;
    u16 uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar1 = param_1;
    iVar2 = (iVar1 + 0x24) * 0x4;
    return str_var1((iVar1 + iVar2 + 0x28), (iVar1 + iVar2 + 0x26));
}


void  pass1_1010_4566(i16 param_1, u16 param_2, i16 param_3, u16 param_4)

{
    if(param_3 != 0x2)
    {
        return;
    }
    pass1_1010_4956(str_var1(param_2, param_1 + -0x20));
    pass1_1010_1f62(param_4, str_var1(param_2, param_1 + -0x20), 0x2);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_459e(long param_1)

{
    u16 uVar1;
    u8 *pu_var2;

    if(param_1 == 0x0)
    {
        uVar1  = 0x0;
        pu_var2 = 0x0;
    }
    else
    {
        uVar1  = param_1 + 0x20;
        pu_var2 = param_1;
    }
    pass1_1008_9262(globals->_PTR_LOOP_1050_0388, 0x1f4, str_var1(pu_var2, uVar1), uVar1, pu_var2);
    (param_1 + 0x7e) = 0x1;
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_45d6(long param_1, u16 param_2)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;
    i16         iVar6;
    u16         uVar7;
    i16         iStack4;

    uVar7 = (param_1 >> 0x10);
    iVar6 = param_1;
    if((iVar6 + 0x7e) != 0x0)
    {
        if(globals->_PTR_LOOP_1050_0388 != 0x0)
        {
            if(param_1 == 0x0)
            {
                iVar4 = 0x0;
                uVar5 = 0x0;
            }
            else
            {
                iVar4 = iVar6 + 0x20;
                uVar5 = uVar7;
            }
            param_2 = SEG_1008;
            pass1_1008_92b2(globals->_PTR_LOOP_1050_0388, 0x1f4, str_var1(uVar5, iVar4));
        }
        for(iStack4 = 0x0; iStack4 < 0x10; iStack4 = iStack4 + 0x1)
        {
            if((iVar6 + 0x24) != iStack4)
            {
                puVar1 = (iVar6 + 0x26 + iStack4 * 0x4);
                u_var2  = (iVar6 + 0x26 + iStack4 * 0x4 + 0x2);
                if((u_var2 | puVar1) != 0x0)
                {
                    ppcVar3 = *puVar1;
                    (**ppcVar3)(param_2, puVar1, u_var2, 0x1);
                }
                (iVar6 + iStack4 * 0x4 + 0x26) = 0x0;
            }
        }
        (iVar6 + 0x7e) = 0x0;
    }
    return;
}

void  pass1_1010_4788(u32 param_1, char *param_2, u16 param_3, u16 param_4)

{
    pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), *(param_1 + 0x6c));
    pass1_1030_301a(str_var1(param_4, param_3), param_2, param_4);
    return;
}

void  pass1_1010_4956(u32 param_1)

{
    i16 *pi_var1;
    i16  iVar2;
    i16  iVar3;
    u16  uVar4;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    iVar2 = (iVar3 + 0x6a);
    if(iVar2 == 0x0)
    {
        pi_var1  = (iVar3 + 0x24);
        *pi_var1 = *pi_var1 + 0x1;
        if(0xf < (iVar3 + 0x24))
        {
            (iVar3 + 0x24) = 0x0;
            return;
        }
    }
    else
    {
        if(iVar2 != 0x4)
        {
            return;
        }
        pi_var1  = (iVar3 + 0x24);
        *pi_var1 = *pi_var1 + -0x1;
        if(*pi_var1 < 0x0)
        {
            (iVar3 + 0x24) = 0xf;
        }
    }
    return;
}

u32  pass1_1010_49a0(i16 param_1, u16 param_2)

{
    return str_var1(param_2, param_1 + 0xa);
}


u32  pass1_1010_49b0(i16 param_1, u16 param_2)

{
    return str_var1(param_2, param_1 + 0x18);
}


u16  pass1_1010_49c0(u32 param_1)

{
    return (param_1 + 0x14);
}


void  pass1_1010_49ce(u32 param_1, u16 param_2)

{
    (param_1 + 0x14) = param_2;
    return;
}


u16  pass1_1010_49e0(u32 param_1)

{
    return (param_1 + 0x16);
}


void  pass1_1010_49ee(u32 param_1, u16 param_2)

{
    (param_1 + 0x16) = param_2;
    return;
}


void  pass1_1010_4a00(u32 param_1, u16 param_2)

{
    (param_1 + 0x12) = param_2;
    return;
}


u16  pass1_1010_4a12(u32 param_1)

{
    return (param_1 + 0x12);
}

u32  pass1_1010_4c2c(u32 param_1)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    return str_var1((param_1 + 0x18), (param_1 + 0x16));
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_4c3e(u32 param_1, i16 param_2, i16 param_3, u8 *param_4, u16 param_5)

{
    i16        *pi_var1;
    u32  u_var2;
    i16         iVar3;
    i16         iVar4;
    u16         uVar5;
    u16         uVar6;
    Struct43 *paVar7;
    u32         uVar8;
    i16         iStack14;
    u8          local_c[0x6];
    u16         u_stack6;
    i16         iStack4;

    uVar5 = (param_1 >> 0x10);
    iVar3 = param_1;
    pass1_1010_bffa(*(iVar3 + 0x26), param_3, param_4, param_5);
    (iVar3 + 0x12) = param_3;
    (iVar3 + 0x14) = param_4;
    if((param_4 | (iVar3 + 0x12)) != 0x0)
    {
        if(param_2 == 0x0)
        {
            u_var2          = (iVar3 + 0x12);
            (iVar3 + 0x30) = (u_var2 + 0x8);
        }
        else
        {
            (iVar3 + 0x2e) = 0x1;
            u_var2          = (iVar3 + 0x12);
            u_var2          = (u_var2 + 0x4);
            iVar4          = (u_var2 + 0x2);
            if((iVar4 == 0x5) || (iVar4 == 0x6))
            {
                (iVar3 + 0x30) = 0x1;
                (iVar3 + 0x20) = 0x0;
            }
            else
            {
                (iVar3 + 0x30) = 0x2;
                u_var2          = (iVar3 + 0x12);
                (iVar3 + 0x32) = (u_var2 + 0x4);
                paVar7         = unk_io_op_1010_830aglobals->dat_1050_14cc, 0x1bf, param_5);
                u_var2          = (iVar3 + 0x12);
                uVar6          = (u_var2 >> 0x10);
                iVar4          = u_var2;
                (iVar4 + 0x4)  = paVar7;
                (iVar4 + 0x6)  = (paVar7 >> 0x10);
            }
        }
        iStack4 = 0x14;
        pass1_1008_3e38(str_var1(param_5, local_c));
        u_stack6  = 0x0;
        iStack14 = 0x0;
        while(true)
        {
            pi_var1 = (iVar3 + 0x30);
            if(*pi_var1 == iStack14 || *pi_var1 < iStack14)
                break;
            u_var2    = (iVar3 + 0x12);
            uVar8    = pass1_1008_4772(*(Struct76 **)(u_var2 + iStack14 * 0x4));
            iStack4  = iStack4 + (-(iStack14 == 0x0) & 0x5) + 0x14 + (uVar8 + 0x4);
            iStack14 = iStack14 + 0x1;
        }
        if((iVar3 + 0xe) < iStack4)
        {
            (iVar3 + 0xe) = iStack4;
        }
    }
    return;
}

u32  pass1_1010_4dc8(u32 param_1)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((iVar1 + 0x20) == 0x0)
    {
        return 0x0;
    }
    return str_var1((iVar1 + 0x1c), (iVar1 + 0x20) * 0x8 + (iVar1 + 0x1a));
}


void  pass1_1010_4df0(u32 param_1, u16 param_2, u16 param_3)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    uVar1 = (param_1 + 0x26);
    pass1_1010_c1ba(uVar1, (uVar1 >> 0x10), (param_1 + 0x20), param_2, param_3);
    return;
}

void  pass1_1010_4e8c(u32 param_1, u16 param_2)

{
    pass1_1010_1f62(param_2, param_1, 0xd);
    return;
}

u16  pass1_1010_4f20(u16 param_1, u16 param_2, i16 param_3)

{
    return (param_3 * 0x2 + 0x139a);
}


void  pass1_1010_4f30(u16 param_1, u16 param_2, u16 *param_3, u16 *param_4)

{
    *param_4 = 0xa;
    *param_3 = 0x73;
    return;
}

void  pass1_1010_5120(u32 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    u32 uVar1;
    u32        u_var2;
    u16        uVar3;
    u16        uVar4;
    u32        uVar5;
    u16        uVar6;
    u16        uVar7;
    i16        iVar8;
    i16        iVar9;
    u16        uVar10;

    uVar10 = (param_1 >> 0x10);
    iVar9  = param_1;
    if((iVar9 + 0x16) != 0x0)
    {
        uVar1 = (iVar9 + 0x16);
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
        uVar6 = param_4 | param_3;
        if(uVar6 != 0x0)
        {
            u_var2 = *(param_3 + 0x1f6);
            uVar5 = u_var2;
            pass1_1030_38f2(u_var2, 0x3, param_5);
            uVar3 = uVar5;
            uVar7 = uVar6;
            uVar4 = uVar3;
            pass1_1030_38f2(u_var2, 0x4, param_5);
            iVar8 = uVar7 + uVar6 + CARRY2(uVar4, uVar3);
            if((0x0 < iVar8) || ((-0x1 < iVar8 && (param_2 <= uVar4 + uVar3))))
            {
                (iVar9 + 0xa) = param_2;
                return;
            }
        }
    }
    return;
}

u32  pass1_1010_375e(u32 param_1)

{
    return str_var1((param_1 + 0xc), (param_1 + 0xa));
}

void pass1_1010_398e(Globals *globals, u32 *param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5)

{
    i16        *pi_var1;
    FnPtr1    **ppcVar2;
    u32         uVar3;
    u32  uVar4;
    i16         iVar5;
    u16         uVar6;
    u16         extraout_DX;
    u16         extraout_DX_00;
    i16         iVar7;
    i16         iVar8;
    u16         uVar9;
    u16         uVar10;
    u16         uStack12;
    u32 *pu_stack6;

    uVar9   = (param_1 >> 0x10);
    uVar3   = *param_1;
    ppcVar2 = (uVar3 + 0x8);
    (**ppcVar2)();
    pu_stack6 = str_var1(extraout_DX, param_5);
    if((extraout_DX | param_5) == 0x0)
    {
        return;
    }
    *(param_5 + 0xc) = param_4;
    iVar7            = *pu_stack6;
    ppcVar2          = (iVar7 + 0xc);
    (**ppcVar2)();
    iVar5   = (param_1 + 0x14);
    pi_var1  = (param_1 + 0x14);
    *pi_var1 = *pi_var1 + 0x1;
    ppcVar2 = (iVar7 + 0x10);
    (**ppcVar2)();
    ppcVar2 = (iVar7 + 0x4);
    (**ppcVar2)();
    if(iVar5 != 0x0)
    {
        ppcVar2 = (uVar3 + 0x8);
        iVar7   = iVar5;
        (**ppcVar2)();
        (param_5 + 0x8)    = iVar7;
        (param_5 + 0xa)    = extraout_DX_00;
        globals->PTR_LOOP_1050_11de = globals->PTR_LOOP_1050_11de + 0x1;
        uVar9              = extraout_DX_00;
        for(uStack12 = 0x0; uStack12 < iVar5; uStack12 = uStack12 + 0x1)
        {
            uVar6 = uStack12;
            pass1_1010_398e(globals,param_1;
            uVar4                 = (param_5 + 0x8);
            uVar10                = (uVar4 >> 0x10);
            iVar7                 = uVar4;
            iVar8                 = uStack12 * 0x4;
            (iVar7 + iVar8)       = uVar6;
            (iVar7 + iVar8 + 0x2) = uVar9;
            uVar4                 = (param_5 + 0x8);
            if((uVar4 + iVar8) == 0x0)
                break;
        }
        globals->PTR_LOOP_1050_11de = globals->PTR_LOOP_1050_11de + -0x1;
    }
    return;
}

u16  pass1_1010_3a86(u32 param_1)

{
    return (param_1 + 0x10);
}


void  pass1_1010_3a94(u32 param_1, u16 param_2)

{
    (param_1 + 0x12) = param_2;
    return;
}


u32  pass1_1010_3aaa(u32 param_1)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    return str_var1((param_1 + 0x6), (param_1 + 0x4));
}


void  pass1_1010_3ac2(u32 param_1, u16 param_2, u32 param_3)

{
    u16 uVar1;

    uVar1             = (param_1 >> 0x10);
    *(param_1 + 0x16) = param_3;
    (param_1 + 0x12)  = param_2;
    return;
}


u32  pass1_1010_3adc(u32 param_1)

{
    u16 *puVar1;

    puVar1 = (param_1 + 0x16);
    return str_var1((puVar1 + 0x2), *puVar1);
}

void  pass1_1010_3bde(u16 *param_1, u16 param_2)

{
    u32 * puVar1;
    u16 u_var2;
    void **ppcVar3;
    u16 *puVar4;
    Struct479 *iVar4;
    u16 uVar5;
    u16 *puStack14;

    uVar5 = (param_1 >> 0x10);
    iVar4 = (Struct479 *) param_1;
    param_1->field_0x0 = addr_table_1010_3d6a;//0x3d6a;
    iVar4->field_0x2 = SEG_1010;
    iVar4->field_0xa = addr_table_1010_3d6a[4];//0x3d7a;
    iVar4->field_0xc = SEG_1010;
    puVar1 = iVar4->field_0xe;
    u_var2 = iVar4->field_0x10;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    if(param_1 == 0x0)
    {
        puVar4 = 0x0;
        uVar5  = 0x0;
    }
    else
    {
        puVar4 = &iVar4->field_0xa;
    }
    puStack14   = str_var1(uVar5, puVar4);
    *puStack14  = addr_table_1008_380a[36]; // 0x389a
    puVar4[0x1] = SEG_1008;
    pass1_1010_1d80(param_1, param_2);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  struct_1010_3c52(Struct274 *param_1, u16 param_2, u16 param_3)

{
    u32  *puVar1;
    u16          u_var2;
    void **ppcVar3;
    Struct274 *iVar4;
    u16          uVar4;
    Struct43  *paVar5;

    uVar4             = (param_1 >> 0x10);
    iVar4             = (Struct274 *)param_1;
    iVar4->field_0x14 = param_2;
    puVar1            = iVar4->field_0xe;
    u_var2             = iVar4->field_0x10;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    paVar5            = unk_io_op_1010_830aglobals->dat_1050_14cc, iVar4->field_0x14, param_3);
    iVar4->field_0xe  = paVar5;
    iVar4->field_0x10 = (paVar5 >> 0x10);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_3c9e(long param_1)

{
    u16 uVar1;
    u8 *pu_var2;

    if(param_1 == 0x0)
    {
        uVar1  = 0x0;
        pu_var2 = 0x0;
    }
    else
    {
        uVar1  = param_1 + 0xa;
        pu_var2 = param_1;
    }
    pass1_1008_9262(
      _PTR_LOOP_1050_0388, (param_1 + 0x12), str_var1(pu_var2, uVar1), uVar1, pu_var2);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_3cd0(long param_1)

{
    i16 iVar1;
    u16 u_var2;

    if(globals->_PTR_LOOP_1050_0388 != 0x0)
    {
        if(param_1 == 0x0)
        {
            iVar1 = 0x0;
            u_var2 = 0x0;
        }
        else
        {
            iVar1 = param_1 + 0xa;
            u_var2 = param_1;
        }
        pass1_1008_92b2(globals->_PTR_LOOP_1050_0388, (param_1 + 0x12), str_var1(u_var2, iVar1));
    }
    return;
}


void  pass1_1010_3d0a(i16 param_1, u16 param_2, i16 param_3, u16 param_4)

{
    if(param_3 == 0x2)
    {
        pass1_1010_3cd0(str_var1(param_2, param_1 + -0xa));
        pass1_1010_1f62(param_4, str_var1(param_2, param_1 + -0xa), 0x2);
    }
    return;
}


void  pass1_1010_3dc8(u16 *param_1, u16 param_2) {
    u32 * puVar1;
    u16 u_var2;
    void **ppcVar3;
    Struct480 *iVar4;
    u16 uVar4;

    uVar4 = (param_1 >> 0x10);
    iVar4 = (Struct480 *) param_1;
    param_1->field_0x0 = addr_table_1010_3e2c;//0x3e2c;
    iVar4->field_0x2 = SEG_1010;
    puVar1 = iVar4->field_0xa;
    u_var2 = iVar4->field_0xc;
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    pass1_1010_1d80(param_1, param_2);
}

u32  pass1_1010_40cc(u32 param_1, i16 param_2, u16 param_3)

{
    pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), *(param_1 + 0x6c));
    return str_var1((param_2 + 0xe), (param_2 + 0xc));
}

void  pass1_1010_2816(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    i16         iVar5;
    u16         uVar6;

    uVar6 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x124) != 0x0)
    {
        iVar5  = (iVar4 + 0x124) * 0x4;
        puVar1 = (iVar5 + iVar4);
        u_var2  = (iVar5 + iVar4 + 0x2);
        if((u_var2 | puVar1) != 0x0)
        {
            ppcVar3 = *puVar1;
            (**ppcVar3)();
        }
        ((iVar4 + 0x124) * 0x4 + iVar4) = 0x0;
        (iVar4 + 0x124)                 = 0x0;
    }
    return;
}


u16 pass1_1010_286c(void)

{
    u16 *puVar1;

    pass1_1008_3e54(&PTR_LOOP_1048_0000, 0x0, 0x5, 0x12c);
    pass1_1008_3e54(0x105065a6, 0x0, 0x9b, 0x20);
    pass1_1008_3e54(0x105065ac, 0x0, 0xf5, 0x3f);
    pass1_1008_3e54(0x105065b2, 0x0, 0x114, 0x4a);
    pass1_1008_3e54(0x105065b8, 0x0, 0x135, 0x45);
    pass1_1008_3e54(0x105065be, 0x0, 0xf5, 0x7b);
    puVar1 = pass1_1008_3e54(0x105065c4, 0x0, 0x117, 0x91);
    return puVar1;
}

void  pass1_1010_2b50(u16 param_1, u16 param_2, u16 *param_3)

{
    pass1_1008_3f62(param_3, &PTR_LOOP_1048_0000);
    return;
}


u32  pass1_1010_2b66(u32 param_1)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    return str_var1((param_1 + 0x1e), (param_1 + 0x1c));
}


void  pass1_1010_2b78(u16 param_1, u16 param_2, i16 param_3, u32 param_4)

{
    u32 *puVar1;
    u32 *pu_var2;
    u32 *puVar3;
    i16         iVar4;
    u32 *puVar5;

    puVar3 = (param_3 * 0x7c + 0xed4);
    puVar5 = param_4;
    for(iVar4 = 0x1f; iVar4 != 0x0; iVar4 = iVar4 + -0x1)
    {
        pu_var2  = puVar5;
        puVar5  = puVar5 + 0x1;
        puVar1  = puVar3;
        puVar3  = puVar3 + 0x1;
        *pu_var2 = *puVar1;
    }
    return;
}


u32  pass1_1010_2b98(u32 param_1, i16 param_2)

{
    u32 uVar1;
    i16        iVar2;
    u16        uVar3;

    uVar1 = (param_1 + 0x28);
    uVar3 = (uVar1 >> 0x10);
    iVar2 = uVar1;
    return str_var1((param_2 * 0x4 + iVar2 + -0x156), (param_2 * 0x4 + iVar2 + -0x158));
}


void pass1_1010_2bb9(void)

{
    pass1_1010_286c();
    return;
}

void  struct_1010_2cd2(Struct79 *param_1, Struct79 *param_2, u16 param_3, u16 param_4)

{
    i16         unaff_DI;
    Struct79 *paVar1;
    u16        *pu_var2;
    i16        *piVar3;
    i16        *piVar4;
    u16         uVar5;
    i16         local_6;
    i16         local_4;

    paVar1                                     = struct_op_1010_1d48((Struct79 *)str_var1(param_2, param_1), param_3);
    &param_1[0x1].field_0x8                    = 0x0;
    param_1[0x2].field_0x2                     = 0x0;
    &param_1[0x2].field_0x4                    = 0x0;
    &param_1[0x3].field_0x4                    = 0x0;
    (&param_1[0x3].field_0x4 + 0x2)            = 0x0;
    param_1[0x3].field_0x8                     = 0x0;
    ((Struct79 *)(param_1 + 0x4))->field_0x0 = 0x0;
    &param_1[0x8].field_0x2                    = 0x0;
    (&param_1[0x8].field_0x4 + 0x2)            = 0x0;
    ((Struct79 *)(param_1 + 0x9))->field_0x0 = 0x0;
    &param_1[0x9].field_0x4                    = 0x0;
    param_1[0x9].field_0x2                     = 0x0;
    param_1 = addr_table_1010_36da;//0x36da;
    param_1->field_0x2                         = SEG_1010;
    piVar4                                     = &local_4;
    piVar3                                     = &local_6;
    uVar5                                      = param_4;
    pu_var2                                     = mixed_1010_20ba(globals->u16_1050_0ed0, 0x48, param_4, (paVar1 >> 0x10), unaff_DI);
    pass1_1008_3e94((pu_var2 & 0xffff0000 | (pu_var2 + 0xe)),
                    str_var1(param_4, piVar3),
                    str_var1(uVar5, piVar4));
    param_1[0x1].field_0x4                     = 0x19001db;
    ((Struct79 *)(param_1 + 0x1))->field_0x0 = 0x140 - (&param_1[0x1].field_0x4 / 0x2 - local_4);
    param_1[0x1].field_0x2                     = 0xf0 - ((&param_1[0x1].field_0x4 + 0x2) / 0x2 - local_6);
    (&param_1[0x2].field_0x4 + 0x2)            = 0xa006e;
    (param_1 + 0x3)                            = 0xa012c;
    pass1_1000_4906((Struct20 *)str_var1(param_2, &param_1[0x4].field_0x2), 0x0, 0x28);
}


u32  pass1_1010_2e02(u32 param_1, i16 param_2)

{
    u32   uVar1;
    Struct163 *iVar2;
    u16          u_var2;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x5c) != 0x0)
    {
        uVar1 = (param_1 + 0x5c);
        u_var2 = (uVar1 >> 0x10);
        iVar2 = (Struct163 *)uVar1;
        return str_var1((iVar2 + param_2 * 0x4 + 0x2), (iVar2 + param_2 * 0x4));
    }
    return 0x0;
}


void  pass1_1010_2e30(u32 param_1, u16 param_2, u16 param_3, i16 param_4)

{
    u32 uVar1;
    i16        iVar2;
    u16        uVar3;

    uVar3 = (param_1 >> 0x10);
    if((param_1 + 0x5c) != 0x0)
    {
        uVar1                         = (param_1 + 0x5c);
        uVar3                         = (uVar1 >> 0x10);
        iVar2                         = uVar1;
        (iVar2 + param_4 * 0x4)       = param_2;
        (iVar2 + param_4 * 0x4 + 0x2) = param_3;
    }
    return;
}


void  pass1_1010_2e5c(u16 param_1, u16 param_2, u32 param_3)

{
    u32 uStack12;

    uStack12 = param_3;
    if(param_3 == 0x0)
    {
        return;
    }
    for(; (uStack12 & 0xf) != 0x0; uStack12 = uStack12 >> 0x4)
    {
    }
    return;
}


void  pass1_1010_2ee2(u32 *param_1, u16 param_2, u16 param_3)

{
    u32 uVar1;
    void **ppcVar2;
    i16        iVar3;
    u16        extraout_DX;
    i16        iVar4;
    u16        uVar5;
    u32        uVar6;
    u32       *pu_stack6;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x52) != 0x0)
    {
        return;
    }
    iVar3          = 0x0;
    (iVar4 + 0x28) = 0x0;
    uVar6          = *param_1;
    ppcVar2        = (uVar6 + 0x20);
    (**ppcVar2)(param_3, param_1, (iVar4 + 0x12));
    if(iVar3 == 0x0)
    {
        pu_stack6 = (iVar4 + 0x56);
    }
    else
    {
        uVar1   = (iVar4 + 0x12);
        ppcVar2 = (uVar6 + 0x14);
        (**ppcVar2)(param_3, param_1, uVar1, (uVar1 >> 0x10));
        pu_stack6 = str_var1(extraout_DX, iVar3);
        uVar6    = pass1_1010_2e02(param_1, (iVar3 + 0x12));
        pass1_1010_35a4(param_1, uVar6, (uVar6 >> 0x10));
    }
    pass1_1010_32f4(param_1, pu_stack6, param_2, param_3);
    pass1_1010_1f62(param_2, param_1, 0x8);
    if((iVar4 + 0x52) != 0x0)
    {
        return;
    }
    return;
}

void  pass1_1010_32c0(u32 param_1, u32 param_2)

{
    u16 uVar1;

    uVar1             = (param_1 >> 0x10);
    (param_1 + 0x28)  = 0x0;
    *(param_1 + 0x12) = param_2;
    return;
}


void  pass1_1010_32da(u32 *param_1, u32 param_2, u16 param_3, u16 param_4)

{
    pass1_1010_32f4(param_1, (param_2 + 0x42), param_4, param_3);
    return;
}

void  string_1010_1722(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u32 param_5)

{
    u16   extraout_DX;
    u16   uVar1;
    char *pcVar2;
    u8    local_52[0x50];

    pass1_1028_b58e(param_5);
    if((extraout_DX | param_2) == 0x0)
    {
        pcVar2 = load_string_1010_847eglobals->dat_1050_14cc, (HINSTANCE16)SEG_1028);
        uVar1  = (pcVar2 >> 0x10);
        unk_str_op_1000_3d3e(str_var1(param_1, local_52), pcVar2);
        pcVar2 = str_var1(uVar1, local_52);
    }
    else
    {
        pcVar2  = pass1_1038_4d28(*(param_2 + 0x2e));
        param_1 = (pcVar2 >> 0x10);
    }
    str_op_1008_60e8((pcVar2 & 0xffff | param_1 << 0x10));
    return;
}

void pass1_1010_184a(u32 *param_1, u32 *param_2)

{
    i16 iVar1;
    i16 iVar2;

    iVar2 = DAT_1050_0ecc;
    iVar1 = (DAT_1050_0ecc * 0x6 + 0xeba) * 0x8;
    iVar1 = pass1_1000_475e(*(iVar1 + *param_1), *(iVar1 + *param_2));
    if(iVar1 == 0x0)
    {
        iVar1 = (iVar2 * 0x6 + 0xebc) * 0x8;
        iVar1 = pass1_1000_475e(*(iVar1 + *param_1), *(iVar1 + *param_2));
        if(iVar1 == 0x0)
        {
            iVar2 = (iVar2 * 0x6 + 0xebe) * 0x8;
            pass1_1000_475e(*(iVar2 + *param_1), *(iVar2 + *param_2));
        }
    }
    return;
}

void  pass1_1010_19a4(u32 *param_1, u16 param_2, u16 param_3)

{
    void **ppcVar1;
    u8    *pu_var2;
    u16    extraout_DX;
    u8     local_14[0x12];

    pass1_1028_dc52((Struct92 *)str_var1(param_3, local_14), 0x1, 0x0, 0x700);
    while(true)
    {
        pu_var2 = local_14;
        pass1_1028_e4ec(str_var1(param_3, pu_var2));
        if((param_2 | pu_var2) == 0x0)
            break;
        ppcVar1 = (*param_1 + 0x40);
        (**ppcVar1)(SEG_1028, param_1);
        param_2 = extraout_DX;
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_1a06(u32 param_1, u32 param_2, i16 param_3, u16 param_4)

{
    char      *pcVar1;
    i16        iVar2;
    u16        uVar3;
    u8        *puVar4;
    u16        uVar5;
    u16        uVar6;
    u32 uVar7;
    u16       *puVar8;
    char      *pcVar9;
    i16        in_stack_0000ffee;

    uVar7  = pass1_1028_b58e(param_2);
    puVar4 = (uVar7 >> 0x10);
    uVar6  = (param_1 >> 0x10);
    pcVar1 = pass1_1010_b038((param_1 + 0x6e), uVar7, puVar4, 0x1770, in_stack_0000ffee);
    iVar2  = pass1_1000_3e2c(str_var1(puVar4, pcVar1));
    puVar8 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x32, param_4, puVar4, param_3);
    uVar5  = (puVar8 >> 0x10);
    uVar3  = pass1_1010_7818(puVar8, param_2);
    uVar7  = (param_1 + 0x6e);
    pcVar9 = string_op_1010_ada6(NULL, SEG_1000, uVar5, uVar7, (uVar7 >> 0x10), iVar2, uVar3);
    str_op_1008_60e8(pcVar9);
    return;
}

u8  pass1_1010_1a66(u32 param_1, u32 param_2)

{
    u32 uVar1;
    u8         u_var2;
    u16        uVar3;
    BOOL16     BVar4;
    u16        uVar5;
    u16        uVar6;
    u32        uVar7;

    uVar5 = (param_2 >> 0x10);
    if(((param_2 + 0x1c) != 0x2) || (((param_2 + 0x1e) & 0xff) != 0x0))
    {
        uVar7 = pass1_1028_b58e(param_2 & 0xffff | uVar5 << 0x10);
        uVar6 = (param_1 >> 0x10);
        uVar1 = (param_1 + 0x6e);
        pass1_1010_c2d8(uVar1, (uVar1 >> 0x10), uVar7);
        if((uVar7 != 0x2) || ((uVar7 & 0xff0000) != 0x0))
        {
            uVar1 = (param_1 + 0x6e);
            uVar3 = pass1_1010_b028(uVar1, (uVar1 >> 0x10), param_2);
            BVar4 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar3, 0x5);
            if((BVar4 == 0x0) && (BVar4 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar3, 0x6), BVar4 == 0x0))
            {
                u_var2 = '\0';
            }
            else
            {
                u_var2 = '\x01';
            }
            return u_var2;
        }
    }
    return '\0';
}

void  pass1_1010_1bb4(u32 *param_1, u16 param_2, u16 param_3)

{
    void **ppcVar1;
    u8    *pu_var2;
    u16    extraout_DX;
    u8     local_14[0x12];

    pass1_1028_dc52((Struct92 *)str_var1(param_3, local_14), 0x1, 0x0, 0x700);
    while(true)
    {
        pu_var2 = local_14;
        pass1_1028_e4ec(str_var1(param_3, pu_var2));
        if((param_2 | pu_var2) == 0x0)
            break;
        ppcVar1 = (*param_1 + 0x40);
        (**ppcVar1)(SEG_1028, param_1);
        param_2 = extraout_DX;
    }
    return;
}


void  pass1_1010_1c16(u32 param_1, u32 param_2, i16 param_3)

{
    char      *pcVar1;
    u16        u_var2;
    u32 uVar3;

    uVar3  = pass1_1028_b58e(param_2);
    u_var2  = (uVar3 >> 0x10);
    pcVar1 = pass1_1010_b038((param_1 + 0x6e), uVar3, u_var2, 0x178a, param_3);
    str_op_1008_60e8(str_var1(u_var2, pcVar1));
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u8  pass1_1010_1c40(u32 param_1, u32 param_2)

{
    u32 uVar1;
    u8         u_var2;
    u16        uVar3;
    BOOL16     BVar4;
    u16        uVar5;
    u16        uVar6;
    u32        uVar7;

    uVar5 = (param_2 >> 0x10);
    if(((param_2 + 0x1c) != 0x2) || (((param_2 + 0x1e) & 0xff) != 0x0))
    {
        uVar7 = pass1_1028_b58e(param_2 & 0xffff | uVar5 << 0x10);
        uVar6 = (param_1 >> 0x10);
        uVar1 = (param_1 + 0x6e);
        pass1_1010_c2d8(uVar1, (uVar1 >> 0x10), uVar7);
        if((uVar7 != 0x2) || ((uVar7 & 0xff0000) != 0x0))
        {
            uVar1 = (param_1 + 0x6e);
            uVar3 = pass1_1010_b028(uVar1, (uVar1 >> 0x10), param_2);
            BVar4 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar3, 0x11);
            if((BVar4 == 0x0) && (BVar4 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar3, 0x12), BVar4 == 0x0))
            {
                u_var2 = '\0';
            }
            else
            {
                u_var2 = '\x01';
            }
            return u_var2;
        }
    }
    return '\0';
}

void pass1_1010_1d80(Struct455 *param_1, u16 param_2)

{
    u32   *puVar1;
    u16    u_var2;
    void **ppcVar3;
    //    Struct455 *iVar4;
    //    u16          uVar4;

    //    uVar4            = (param_1 >> 0x10);
    //    iVar4            = (Struct455 *)param_1;
    param_1->field_0x0 = addr_table_1010_2010[1]; // 0x2014;
    param_1->field_0x2 = SEG_1010;
    pass1_1010_1f62(param_2, param_1, 0x1);
    puVar1 = param_1->field_0x4;
    u_var2 = param_1->field_0x6;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
}


u16  pass1_1010_1dce(void)

{
    return 0x0;
}


u16  pass1_1010_1dd4(void)

{
    return 0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_1dda(u32 param_1)

{
    pass1_1010_209e(globals->u16_1050_0ed0, (param_1 + 0x8));
    return;
}

void  pass1_1010_1ea6(Struct498 *param_1, Struct16 *param_2, u16 param_3)

{
    u32  *puVar1;
    u16          u_var2;
    void **ppcVar3;
    u32  *puVar4;
    u8          *puVar5;
    u16          extraout_DX;
    Struct498 *iVar6;
    u16          uVar6;
    u8           local_c[0x4];
    u32   uStack8;
    u16          uStack4;

    uVar6 = (param_1 >> 0x10);
    iVar6 = (Struct498 *)param_1;
    if(iVar6->field_0x4 == 0x0)
    {
        return;
    }
    uStack4 = 0x0;
    pass1_1008_5784(str_var1(param_3, local_c), iVar6->field_0x4);
    while(true)
    {
        puVar5 = local_c;
        pass1_1008_5b12(puVar5, param_3);
        if((extraout_DX | puVar5) == 0x0)
            break;
        if((puVar5 + 0x4) == param_2)
        {
            uStack4 = 0x1;
            ppcVar3 = (*iVar6->field_0x4 + 0xc);
            (**ppcVar3)(SEG_1008);
            uStack8 = 0x0;
        }
    }
    puVar4 = iVar6->field_0x4;
    if((puVar4 + 0x8) == 0x0)
    {
        // WARNING: Load size is inaccurate
        puVar1 = iVar6->field_0x4;
        u_var2  = (&iVar6->field_0x4 + 0x2);
        if((u_var2 | puVar1) != 0x0)
        {
            ppcVar3 = *puVar1;
            (**ppcVar3)(SEG_1008, puVar1, u_var2, 0x1, puVar1, u_var2, puVar1, u_var2);
        }
        iVar6->field_0x4 = 0x0;
    }
    return;
}


void  pass1_1010_1f62(u16 param_1, u32 param_2, i16 param_3)

{
    u32 uVar1;
    void **ppcVar2;
    i16        iVar3;
    u16        uVar4;
    long       lVar5;
    u8         local_a[0x8];

    pass1_1008_5784(str_var1(param_1, local_a), *(param_2 + 0x4));
    while(true)
    {
        lVar5 = pass1_1008_5b12(local_a, param_1);
        uVar4 = (lVar5 >> 0x10);
        iVar3 = lVar5;
        if(lVar5 == 0x0)
            break;
        if((((iVar3 + 0x8) == 0x0) || (param_3 == 0x0)) || ((iVar3 + 0x8) == param_3))
        {
            uVar1   = (iVar3 + 0x4);
            ppcVar2 = ((iVar3 + 0x4) + 0x4);
            (**ppcVar2)(0x8, uVar1, (uVar1 >> 0x10), param_3);
        }
    }
    return;
}

u32  pass1_1010_2024(u32 param_1)

{
    u16 uVar1;

    uVar1               = (param_1 >> 0x10);
    (param_1 + 0x124)   = 0x0;
    globals->u16_1050_0ed0 = param_1;
    pass1_1000_4906((Struct20 *)(param_1 & 0xffff | uVar1 << 0x10), 0x0, 0x124);
    return param_1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_2050(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    u16         uVar4;
    i16         iStack4;

    pass1_1010_2816(param_1);
    iStack4 = 0x0;
    do
    {
        uVar4  = (param_1 >> 0x10);
        puVar1 = (iStack4 * 0x4 + param_1);
        u_var2  = (iStack4 * 0x4 + param_1 + 0x2);
        if((u_var2 | puVar1) != 0x0)
        {
            ppcVar3 = *puVar1;
            (**ppcVar3)();
        }
        iStack4 = iStack4 + 0x1;
    } while(iStack4 < 0x49);
    globals->u16_1050_0ed0 = 0x0;
    return;
}


void  pass1_1010_209e(u32 param_1, u16 param_2)

{
    pass1_1010_2816(param_1);
    (param_1 + 0x124) = param_2;
    return;
}

void  pass1_1010_038e(Struct707 *param_1, i16 param_2, u16 param_3)

{
    bool         bVar1;
    Struct707 *iVar2;
    u16          u_var2;

    bVar1 = false;
    iVar2 = (Struct707 *)param_1;
    u_var2 = (param_1 >> 0x10);
    if(param_2 != 0x0)
    {
        if(iVar2->field_0x18 == 0x0)
        {
            iVar2->field_0x12  = DAT_1050_0e28;
            iVar2->field_0x14  = globals->PTR_LOOP_1050_0e30;
            iVar2->field_0x16  = globals->PTR_LOOP_1050_0ea8;
            DAT_1050_0e28      = 0x0;
            globals->PTR_LOOP_1050_0e30 = 0x0;
            globals->PTR_LOOP_1050_0ea8 = 0x0;
            iVar2->field_0x18  = 0x1;
            bVar1              = true;
            goto LAB_1010_0404;
        }
    }
    if(param_2 == 0x0)
    {
        if(iVar2->field_0x18 != 0x0)
        {
            DAT_1050_0e28      = iVar2->field_0x12;
            globals->PTR_LOOP_1050_0e30 = iVar2->field_0x14;
            globals->PTR_LOOP_1050_0ea8 = iVar2->field_0x16;
            iVar2->field_0x18  = 0x0;
            bVar1              = true;
        }
    }
LAB_1010_0404:
    if(bVar1)
    {
        pass1_1010_1f62(param_3, param_1, 0x3);
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL16  pass1_1010_041a(void)

{
    u32 uVar1;

    uVar1 = pass1_1030_8326();
    if(((uVar1 >> 0x10) == 0x0) && (uVar1 < 0x64))
    {
        return 0x0;
    }
    return 0x1;
}

u16  pass1_1010_0886(void)

{
    return 0xa;
}


u16  pass1_1010_088c(void)

{
    return 0x3;
}


u16  pass1_1010_0892(void)

{
    return 0x3;
}


u16  pass1_1010_0898(void)

{
    return 0x3;
}


void  pass1_1010_089e(u16 param_1, u32 param_2, u16 param_3, i16 param_4)

{
    ((param_4 + -0x1) * 0x8 + 0xe28) = param_3;
    pass1_1010_1f62(param_1, param_2, 0x3);
    return;
}


void  pass1_1010_08c0(u32 param_1, u16 param_2, i16 param_3, u16 param_4)

{
    ((param_3 + -0x1) * 0x8 + 0xea8) = param_2;
    pass1_1010_1f62(param_4, param_1, 0x3);
    return;
}


u32  pass1_1010_08e2(u16 param_1, u16 param_2, i16 param_3)

{
    if(globals->PTR_LOOP_1050_4fe8 != 0x0)
    {
        DAT_1050_0e28      = 0x0;
        globals->PTR_LOOP_1050_0e30 = 0x0;
        globals->PTR_LOOP_1050_0e38 = 0x0;
        globals->PTR_LOOP_1050_0e40 = 0x0;
        globals->PTR_LOOP_1050_0e48 = 0x0;
        DAT_1050_0e58      = 0x0;
        DAT_1050_0e60      = 0x0;
        globals->PTR_LOOP_1050_0e70 = 0x0;
    }
    return str_var1(0x1050, (param_3 + -0x1) * 0x8 + 0xe22);
}


u32  pass1_1010_091e(u16 param_1, u16 param_2, i16 param_3)

{
    return str_var1(0x1050, (param_3 + -0x1) * 0x8 + 0xe72);
}


u32  pass1_1010_0932(u16 param_1, u16 param_2, i16 param_3)

{
    return str_var1(0x1050, (param_3 + -0x1) * 0x8 + 0xe8a);
}
