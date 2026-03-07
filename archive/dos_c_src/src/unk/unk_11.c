#include "unk_11.h"

#include "address_tables/function_tables.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_20.h"
#include "unk_12.h"
#include "utils.h"

u16  pass1_1018_5932(u32 param_1, u16 param_2, u16 param_3)

{
    void **ppcVar1;
    u16        u_var2;
    u16        uVar3;
    u16        uVar4;
    u32 uVar5;

    uVar4 = (param_1 >> 0x10);
    uVar3 = param_1;
    u_var2 = (uVar3 + 0xf0) | (uVar3 + 0xee);
    if(u_var2 != 0x0)
    {
        ppcVar1 = ((uVar3 + 0xee) + 0x8);
        uVar5   = (**ppcVar1)();
        param_2 = (uVar5 >> 0x10);
        u_var2   = uVar5;
    }
    if((uVar3 + 0xea) == 0x0)
    {
        (uVar3 + 0xea) = 0x1;
        uVar5          = pass1_1038_af40(globals->ptr_1050_5b7c, (uVar3 + 0x8), ((uVar3 + 0xf6) * 0x2 + 0x4238), param_2, uVar3, SEG_1038, param_3);
        u_var2          = uVar5;
    }
    return u_var2;
}

u32  switch_1018_3b9e(Struct263 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    u32   uVar1;
    Struct263 *iVar2;
    u16          u_var2;
    u32          uStack14;
    u16          u_stack6;
    u16          uStack4;

    u_stack6 = 0x0;
    uStack4 = 0x0;
    u_var2   = (param_1 >> 0x10);
    iVar2   = (Struct263 *)param_1;
    uVar1   = iVar2->field_0x122;
    pass1_1008_e852(uVar1, (uVar1 >> 0x10), iVar2->field_0x126, param_5, param_4);
    pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10),
                    str_var1(param_4, param_3));
    uStack14 = str_var1(param_4, param_3);
    switch(param_2)
    {
    case 0x188:
        if(iVar2->field_0xa == 0x0)
        {
            pass1_1008_d3ae(param_1 & 0xffff | u_var2 << 0x10);
        }
        u_stack6 = &iVar2->field_0xa;
        uStack4 = (&iVar2->field_0xa + 0x2);
        break;
    case 0x189:
        if(iVar2->field_0xe == 0x0)
        {
            unk_str_op_1008_d4f6(param_1 & 0xffff | u_var2 << 0x10, uStack14);
        }
        u_stack6 = &iVar2->field_0xe;
        uStack4 = (&iVar2->field_0xe + 0x2);
        break;
    case 0x18a:
        if(iVar2->field_0x12 == 0x0)
        {
            unk_str_op_1008_d1c6(param_1 & 0xffff | u_var2 << 0x10, uStack14);
        }
        u_stack6 = &iVar2->field_0x12;
        uStack4 = (&iVar2->field_0x12 + 0x2);
        break;
    case 0x18b:
        if(iVar2->field_0x16 == 0x0)
        {
            pass1_1008_cfa0(param_1 & 0xffff | u_var2 << 0x10, uStack14);
        }
        u_stack6 = &iVar2->field_0x16;
        uStack4 = (&iVar2->field_0x16 + 0x2);
        break;
    case 0x18c:
        if(iVar2->field_0x1a_addr_offset == 0x0)
        {
            pass1_1008_cda2(param_1 & 0xffff | u_var2 << 0x10, uStack14, param_5);
        }
        u_stack6 = &iVar2->field_0x1a_addr_offset;
        uStack4 = (&iVar2->field_0x1a_addr_offset + 0x2);
        break;
    case 0x18d:
        if(iVar2->field_0x1e == 0x0)
        {
            pass1_1008_cbc4(param_1 & 0xffff | u_var2 << 0x10, uStack14, param_5);
        }
        u_stack6 = &iVar2->field_0x1e;
        uStack4 = (&iVar2->field_0x1e + 0x2);
    }
    return str_var1(uStack4, u_stack6);
}

void  pass1_1018_3d44(Struct679 *param_1, u32 *param_2, u32 *param_3)

{
    u16 uVar1;

    uVar1    = (param_1 >> 0x10);
    *param_3 = *(param_1 + 0x126);
    *param_2 = *(param_1 + 0x12a);
    return;
}

void  pass1_1018_3d6c(Struct679 *param_1)

{
    u8         bVar1;
    u16          u_var2;
    u8          *puVar3;
    u16          uVar4;
    Struct679 *iVar6;
    u16          uVar5;
    u32          uVar6;
    u32          uVar7;

    uVar5 = (param_1 >> 0x10);
    iVar6 = (Struct679 *)param_1;
    uVar4 = iVar6->field_0x142;
    u_var2 = uVar4 + 0x1e;
    if(iVar6->field_0x144 + 0x1U == (uVar4 < 0xffe2))
    {
        if(u_var2 != 0x3c)
        {
            if(0x3c < u_var2)
            {
                return;
            }
            bVar1 = (u8)u_var2;
            if(bVar1 == 0x14)
            {
                iVar6->field_0x142 = 0xffec;
            LAB_1018_3e3d:
                iVar6->field_0x144 = -0x1;
                return;
            }
            if(0x14 < bVar1)
            {
                if(bVar1 == 0x1e)
                {
                    if(globals->PTR_LOOP_1050_13ae < 0x1)
                    {
                        return;
                    }
                    if(SBORROW2(globals->PTR_LOOP_1050_13ae, 0x1))
                    {
                        return;
                    }
                    if(globals->PTR_LOOP_1050_13ae != &PTR_LOOP_1050_0002 && 0x0 < (globals->PTR_LOOP_1050_13ae + -0x1))
                    {
                        puVar3 = globals->PTR_LOOP_1050_13ae + -0x3;
                        if(puVar3 == 0x0)
                        {
                            pass1_1008_612e(0x1, 0x64, 0x0);
                            if(puVar3 < 0x32)
                            {
                                uVar4 = 0xa;
                            }
                            else
                            {
                                uVar4 = 0xfff6;
                            }
                            iVar6->field_0x142 = uVar4;
                            iVar6->field_0x144 = uVar4 >> 0xf;
                            return;
                        }
                        if(puVar3 != (&PTR_LOOP_1050_0000 + 0x1))
                        {
                            return;
                        }
                        iVar6->field_0x142 = 0xfff6;
                        goto LAB_1018_3e3d;
                    }
                    iVar6->field_0x142 = 0xa;
                }
                else
                {
                    if(bVar1 == 0x28)
                    {
                        iVar6->field_0x142 = 0x14;
                    }
                    else
                    {
                        if(bVar1 != 0x32)
                        {
                            return;
                        }
                        iVar6->field_0x142 = 0x1e;
                    }
                }
                iVar6->field_0x144 = 0x0;
                return;
            }
            if(bVar1 != 0x0)
            {
                if(bVar1 != 0xa)
                {
                    return;
                }
                iVar6->field_0x142 = 0xffe2;
                goto LAB_1018_3e3d;
            }
        }
        uVar7 = 0x5;
        uVar6 = pass1_1030_8326();
        if(uVar6 % uVar7 == 0x0)
        {
            &iVar6->field_0x142 = 0x0;
            return;
        }
    }
    return;
}


void pass1_1018_3e8c(Struct263 *param_1, u16 param_2, u16 *param_3, u16 *param_4) {
    *param_4 = 0x1;
    *param_3 = 0x19;
    return;
}


void  pass1_1018_3ea4(u32 param_1)

{
    u32 *pu32_var1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;

    pass1_1008_cac6(param_1);
    uVar5  = (param_1 >> 0x10);
    iVar4  = param_1;
    pu32_var1 = (iVar4 + 0x136);
    u_var2  = (iVar4 + 0x138);
    if((u_var2 | pu32_var1) != 0x0)
    {
        ppcVar3 = *pu32_var1;
        (**ppcVar3)(SEG_1008, pu32_var1, u_var2, 0x1);
    }
    (iVar4 + 0x136) = 0x0;
    return;
}

void pass1_1018_427c(Struct263 *param_1) {
    i16 iVar1;
    u16 in_AX;
    u16 in_DX;
    u16 u_var2;
    u16 uVar3;
    u16 unaff_SS;
    u32 uVar4;
    long lVar5;

    uVar3 = (param_1 >> 0x10);
    u_var2 = param_1;
    uVar4 = switch_1018_3b9e(param_1, (u_var2 + 0x12e), in_AX, in_DX, unaff_SS);
    iVar1 = (u_var2 + 0x12e);
    if(iVar1 == 0x188)
    {
        lVar5 = pass1_1008_57f0(uVar4, (u_var2 + 0x130), unaff_SS);
        pass1_1018_456a(u_var2, uVar3, (lVar5 + 0xe));
    }
    else
    {
        if(iVar1 == 0x18b)
        {
            lVar5 = pass1_1008_57f0(uVar4, (u_var2 + 0x130), unaff_SS);
            pass1_1018_45d4(u_var2, uVar3, (lVar5 + 0xe));
        }
        else
        {
            if(iVar1 == 0x18c)
            {
                lVar5 = pass1_1008_57f0(uVar4, (u_var2 + 0x130), unaff_SS);
                pass1_1018_451e(u_var2, uVar3, (lVar5 + 0xe));
            }
        }
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass1_1018_435e(Struct263 *param_1, long param_2, i16 param_3, i16 param_4, u16 param_5, u16 param_6) {
    u32 uVar1;
    u16 u_var2;
    u16 uVar3;
    u16 uVar4;

    if (param_3 < param_4) {
        param_4 = param_3;
    }
    u_var2 = 0x0;
    uVar4 = (param_1 >> 0x10);
    uVar1 = (param_1 + 0x122);
    pass1_1008_e852(uVar1, (uVar1 >> 0x10), *(param_1 + 0x126), param_6, param_5);
    pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10),
                    str_var1(param_5, u_var2));
    do
    {
        do
        {
            uVar3 = u_var2;
            pass1_1008_612e(param_4, param_3, uVar3);
            u_var2 = (uVar3 * 0x2 + 0x411c);
        } while(u_var2 == 0x0);
        if(u_var2 != 0x1)
        {
            pass1_1008_612e(0x1, u_var2, u_var2);
        }
        u_var2 = u_var2 - 0x1;
        switch_1018_3ee6(param_1, param_2, u_var2, uVar3, param_5);
        param_5 = param_5 | u_var2;
    } while(param_5 == 0x0);
    return;
}

u16  switch_1018_43ec(u16 param_1, u16 param_2, u16 param_3)

{
    u16 u_stack6;

    switch(param_3)
    {
    case 0xf:
    case 0x35:
    case 0x36:
        u_stack6 = 0x7;
        break;
    default:
        u_stack6 = 0x1;
        break;
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x2d:
    case 0x2e:
    case 0x6e:
        u_stack6 = 0x9;
        break;
    case 0x12:
    case 0x31:
    case 0x32:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
        u_stack6 = 0x4;
        break;
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x28:
    case 0x29:
    case 0x2c:
    case 0x2f:
    case 0x30:
    case 0x68:
    case 0x69:
        u_stack6 = 0x5;
        break;
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x33:
    case 0x34:
        u_stack6 = 0x6;
        break;
    case 0x22:
    case 0x23:
    case 0x24:
        u_stack6 = 0x8;
        break;
    case 0x25:
    case 0x26:
    case 0x27:
        u_stack6 = 0x2;
        break;
    case 0x38:
    case 0x39:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x66:
    case 0x67:
    case 0x6c:
    case 0x6d:
        u_stack6 = 0x3;
    }
    return u_stack6;
}


u16  pass1_1018_451e(u16 param_1, u16 param_2, i16 param_3)

{
    u16 u_stack6;

    if(param_3 == 0x7)
    {
        u_stack6 = 0x9;
    }
    else
    {
        if(param_3 == 0x8)
        {
            u_stack6 = 0xa;
        }
        else
        {
            if(param_3 == 0xc)
            {
                u_stack6 = 0x19;
            }
            else
            {
                if(param_3 == 0xd)
                {
                    u_stack6 = 0x3;
                }
                else
                {
                    u_stack6 = 0x8;
                }
            }
        }
    }
    return u_stack6;
}


u16  pass1_1018_456a(u16 param_1, u16 param_2, u16 param_3)

{
    u16 u_stack6;

    switch(param_3)
    {
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
        u_stack6 = 0x2;
        break;
    case 0x16:
    case 0x1e:
        u_stack6 = 0x3;
        break;
    default:
        u_stack6 = 0x1;
        break;
    case 0x1d:
    case 0x21:
        u_stack6 = 0x4;
    }
    return u_stack6;
}


u16  pass1_1018_45d4(u16 param_1, u16 param_2, i16 param_3)

{
    u16 u_stack6;

    if(param_3 == 0x3)
    {
        u_stack6 = 0x16;
    }
    else
    {
        if(param_3 == 0x4)
        {
            u_stack6 = 0x17;
        }
        else
        {
            u_stack6 = 0x14;
        }
    }
    return u_stack6;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long  pass1_1018_4608(u16 param_1, u32 param_2, u32 param_3, char *param_4)

{
    u32 uVar1;
    u16        u_var2;
    u16        uVar3;
    i16        iVar4;
    u16        uVar5;
    u16        uVar6;
    long       lVar7;
    char      *pcVar8;
    char      *pcVar9;
    u32        uStack26;
    u32        uStack22;
    u8         local_a[0x8];

    uVar1 = (param_2 + 0x122);
    pass1_1008_5784(str_var1(param_1, local_a), *(uVar1 + 0xa));
    while(true)
    {
        lVar7 = pass1_1008_5b12(local_a, param_1);
        uVar5 = (lVar7 >> 0x10);
        u_var2 = lVar7;
        uVar6 = uVar5 | u_var2;
        if(lVar7 == 0x0)
        {
            return 0x0;
        }
        uVar1 = (u_var2 + 0x4);
        uVar3 = u_var2;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
        uStack22 = str_var1(uVar6, uVar3);
        uVar1    = (u_var2 + 0x8);
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
        uStack26 = str_var1(uVar6, uVar3);
        pcVar8   = pass1_1038_4d28(uStack22);
        pcVar9   = pass1_1038_4d28(uStack26);
        iVar4    = pass1_1000_3d7a(param_4, pcVar8);
        if((iVar4 == 0x0) && (iVar4 = pass1_1000_3d7a(param_3, pcVar9), iVar4 == 0x0))
            break;
        iVar4 = pass1_1000_3d7a(param_3, pcVar8);
        if((iVar4 == 0x0) && (iVar4 = pass1_1000_3d7a(param_4, pcVar9), iVar4 == 0x0))
        {
            return lVar7;
        }
    }
    return lVar7;
}

void  pass1_1018_2d22(u32 param_1, i16 *param_2, u16 *param_3, i16 param_4)

{
    u32 uVar1;

    *param_3 = 0x0;
    *param_2 = 0x0;
    uVar1    = pass1_1008_4772(*(Struct76 **)(param_1 + 0x24));
    *param_2 = (uVar1 + 0x8) + -0x14;
    if(param_4 == 0xbb8)
    {
        *param_3 = 0x5;
    }
    if(param_4 == 0xbba)
    {
        *param_3 = 0x23;
    }
    if(param_4 == 0xbb9)
    {
        *param_3 = 0x75;
    }
    return;
}


void  pass1_1018_2d84(u16 param_1, u32 param_2)

{
    pass1_1018_2e28(param_2);
    pass1_1020_bd80(param_1);
    return;
}


u16 pass1_1018_2d9a(u32 param_1)

{
    i16       *pi_var1;
    u32 u_var2;
    u16        uVar3;
    i16        iVar4;
    u16        uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    uVar3 = (iVar4 + 0x180) | (iVar4 + 0x17e);
    if(uVar3 != 0x0)
    {
        pi_var1  = (iVar4 + 0x174);
        *pi_var1 = *pi_var1 + -0x1;
        if(*pi_var1 < 0x0)
        {
            u_var2           = (iVar4 + 0x17e);
            uVar3           = (u_var2 + 0xa) - 0x1;
            (iVar4 + 0x174) = uVar3;
        }
        pass1_1018_2e28(param_1);
        (iVar4 + 0x176) = uVar3;
    }
    return;
}


void  pass1_1018_2dde(u32 param_1)

{
    i16       *pi_var1;
    u32 u_var2;
    i16        iVar3;
    i16        iVar4;
    u16        uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if(((iVar4 + 0x180) | (iVar4 + 0x17e)) != 0x0)
    {
        pi_var1  = (iVar4 + 0x174);
        *pi_var1 = *pi_var1 + 0x1;
        iVar3   = (iVar4 + 0x174);
        u_var2   = (iVar4 + 0x17e);
        pi_var1  = (u_var2 + 0xa);
        if(*pi_var1 == iVar3 || *pi_var1 < iVar3)
        {
            (iVar4 + 0x174) = 0x0;
        }
        pass1_1018_2e28(param_1);
        (iVar4 + 0x176) = iVar3;
    }
    return;
}
void  pass1_1018_2e28(u32 param_1)

{
    long lVar1;
    u16  extraout_DX;
    u16  u_var2;

    u_var2 = (param_1 >> 0x10);
    lVar1 = (long)(param_1 + 0x174);
    empty_1008_8fc4((param_1 + 0x17e), lVar1);
    if((extraout_DX | lVar1) != 0x0)
    {
        return;
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1018_2e5e(u16 param_1, u16 param_2, u16 param_3, u32 param_4)

{
    u16          uVar1;
    long         lVar1;
    Struct126 *iVar4;
    u16          u_var2;

    u_var2 = (param_4 >> 0x10);
    iVar4 = (Struct126 *)param_4;
    if(iVar4->field_0x17e == 0x0)
    {
        pass1_1030_82f0(param_1, globals->_PTR_LOOP_1050_5748, iVar4->field_0x17a);
        &iVar4->field_0x17e         = param_2;
        (&iVar4->field_0x17e + 0x2) = param_3;
    }
    if((iVar4->field_0x17e != 0x0) && (lVar1 = iVar4->field_0x17e, (lVar1 + 0xa) != 0x0))
    {
        lVar1 = (long)iVar4->field_0x174;
        empty_1008_8fc4(iVar4->field_0x17e, lVar1);
        uVar1 = lVar1;
        pass1_1018_2e28(param_4);
        iVar4->field_0x176 = uVar1;
        return;
    }
    return;
}

void  pass1_1018_2ee4(u32 param_1, u16 param_2, u16 param_3)

{
    u32 uVar1;
    char       cVar2;
    u16        uVar3;

    if(param_2 != 0x12)
    {
        if(param_2 < 0x13)
        {
            cVar2 = param_2;
            if(cVar2 == '\x01')
            {
                (param_1 + 0x162) = 0x0;
                return;
            }
            if(('\x02' < (cVar2 + -0x1)) && ((cVar2 + -0x4) < '\x03'))
                goto LAB_1018_2f06;
        }
        return;
    }
    uVar1             = (param_1 + 0x162);
    (param_1 + 0x15a) = (uVar1 + 0x24);
LAB_1018_2f06:
    uVar3 = param_1 - 0x20;
    pass1_1018_31fa(param_1 & 0xffff0000 | uVar3, uVar3, param_1, param_3);
    pass1_1010_1f62(param_3, param_1 & 0xffff0000 | uVar3, param_2);
    return;
}

void  pass1_1018_2fe8(u32 param_1, u16 param_2, u16 param_3)

{
    i16       *pi_var1;
    u32 u_var2;
    u16        uVar3;
    u16        uVar4;
    u16        uVar5;
    u16        uVar6;
    i16        iVar7;
    u16        extraout_DX;
    u16        uVar8;
    i16        iVar9;
    u16        uVar10;

    uVar10 = (param_1 >> 0x10);
    iVar9  = param_1;
    uVar6  = (iVar9 + 0x174);
    u_var2  = (iVar9 + 0x17e);
    iVar7  = (u_var2 + 0xa);
    if(iVar7 != 0x0)
    {
        if((iVar9 + 0x186) != 0x0)
        {
            uVar3           = str_op_1000_3da4((iVar9 + 0x186));
            (iVar9 + 0x174) = 0x0;
            while(true)
            {
                if(iVar7 <= (iVar9 + 0x174))
                    break;
                uVar4 = (iVar9 + 0x174);
                u_var2 = (iVar9 + 0x17e);
                empty_1008_8fc4(u_var2, (u_var2 >> 0x10), uVar4, uVar4 >> 0xf);
                uVar8 = extraout_DX;
                pass1_1018_2e28(param_1);
                uVar4 = pass1_1020_bd80(uVar4);
                uVar5 = pass1_1000_3de8(
                  str_var1(uVar8, uVar4), (iVar9 + 0x186), uVar3, param_2, param_3);
                if(uVar5 == 0x0)
                    break;
                pi_var1  = (iVar9 + 0x174);
                *pi_var1 = *pi_var1 + 0x1;
            }
            if((iVar9 + 0x174) < iVar7)
            {
                pass1_1018_2e28(param_1);
                (iVar9 + 0x176) = iVar7;
                return;
            }
            (iVar9 + 0x174) = uVar6;
            pass1_1018_2e28(param_1);
            (iVar9 + 0x176) = uVar6;
        }
    }
    return;
}

u16  pass1_1018_31d0(u32 param_1)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    if(((param_1 + 0x17e) != 0x0) && (uVar1 = (param_1 + 0x17e), (uVar1 + 0xa) != 0x0))
    {
        return 0x1;
    }
    return 0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1018_31fa(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    i16       *pi_var1;
    u32 u_var2;
    i16        iVar3;
    i16        iVar4;
    long       lVar5;
    i16        iVar6;
    u16        uVar7;

    uVar7 = (param_1 >> 0x10);
    iVar6 = param_1;
    pass1_1030_82f0(param_4, globals->_PTR_LOOP_1050_5748, *(iVar6 + 0x17a));
    (iVar6 + 0x17e) = param_2;
    (iVar6 + 0x180) = param_3;
    if(((param_3 | (iVar6 + 0x17e)) != 0x0) && (u_var2 = (iVar6 + 0x17e), iVar4 = (u_var2 + 0xa), iVar4 != 0x0))
    {
        (iVar6 + 0x174) = 0x0;
        while(true)
        {
            if(iVar4 <= (iVar6 + 0x174))
                break;
            lVar5 = (long)(iVar6 + 0x174);
            empty_1008_8fc4((iVar6 + 0x17e), lVar5);
            iVar3 = lVar5;
            pass1_1018_2e28(param_1);
            if((iVar6 + 0x176) == iVar3)
                break;
            pi_var1  = (iVar6 + 0x174);
            *pi_var1 = *pi_var1 + 0x1;
        }
        if(iVar4 <= (iVar6 + 0x174))
        {
            (iVar6 + 0x174) = 0x0;
        }
        pass1_1018_2e28(param_1);
        (iVar6 + 0x176) = iVar4;
    }
    return;
}

void  pass1_1018_331c(Struct638 *param_1, u16 param_2, u16 param_3, u16 param_4, u8 *param_5)

{
    u16  uVar1;
    i16  unaff_DI;
    u16 *pu_var2;

    pass1_1008_ca5a((Struct639 *)param_1, param_2, param_3);
    &param_1->field_0x122      = 0x0;
    param_1->field_0x126       = 0x0;
    param_1->field_0x12a       = 0x0;
    param_1->field_0x12e       = 0x0;
    param_1->field_0x130       = 0x0;
    param_1->field_0x132       = 0x0;
    param_1->field_0x136       = 0x0;
    param_1->field_0x13a       = 0x0;
    param_1->field_0x13c       = 0x0;
    param_1->field_0x13e       = 0x0;
    param_1->field_0x142       = 0x0;
    param_1 =  addr_table_1018_470c;//0x470c; // &PTR_LOOP_1050_470c;
    param_1->fld2_segment      = SEG_1018;
    pu_var2                     = mixed_1010_20ba(globals->u16_1050_0ed0, 0x3b, param_4, param_5, unaff_DI);
    uVar1                      = pu_var2;
    param_1->field_0x122       = uVar1;
    param_1->field_0x124       = (pu_var2 >> 0x10);
    *&param_1->field_0x22      = 0x0;
    pass1_1008_612e(0x8, 0xc, uVar1);
    param_1->field_0x13c = uVar1;
    return;
}

void  pass1_1018_3424(u32 param_1, i16 param_2, u16 param_3, u16 param_4)

{
    u32 uVar1;
    u16        u_var2;
    i16        iVar3;
    u16        uVar4;
    u32        uStack10;
    u32        u_stack6;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    uVar1 = (iVar3 + 0x122);
    pass1_1008_e852(uVar1, (uVar1 >> 0x10), *(iVar3 + 0x126), param_4, param_3);
    u_stack6 = str_var1(param_3, param_2);
    uVar1   = (iVar3 + 0x122);
    pass1_1008_e852(uVar1, (uVar1 >> 0x10), *(iVar3 + 0x12a), param_4, param_3);
    uStack10 = str_var1(param_3, param_2);
    pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), u_stack6);
    u_var2 = param_3;
    iVar3 = param_2;
    pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), uStack10);
    if((iVar3 + 0x200) == (param_2 + 0x200))
    {
        return;
    }
    return;
}


void  pass1_1018_34a6(u32 param_1)

{
    pass1_1018_3d6c(param_1);
    return;
}

void  pass1_1018_36e6(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    i16 iVar1;
    u16 u_var2;

    u_var2           = (param_1 >> 0x10);
    iVar1           = param_1;
    (iVar1 + 0x12e) = param_4;
    (iVar1 + 0x130) = param_3;
    (iVar1 + 0x132) = param_2;
    (iVar1 + 0x134) = 0x0;
    return;
}

void  pass1_1018_3a42(u32 param_1, u32 param_2, u16 param_3, u16 param_4)

{
    u32 uVar1;

    uVar1 = (param_1 + 0x122);
    pass1_1008_e852(uVar1, (uVar1 >> 0x10), param_2, param_4, param_3);
    return;
}


void  pass1_1018_3a5c(u32 param_1, u32 param_2, u32 param_3, u16 param_4)

{
    pass1_1008_e320(NULL, *(Struct102 **)(param_1 + 0x122), param_2, param_3, param_4);
    return;
}

void  pass1_1018_3a94(u32 param_1, u32 *param_2, u32 *param_3, u16 param_4)

{
    pass1_1008_e3ec(*(param_1 + 0x122), param_2, param_3, param_4);
    return;
}


u16  pass1_1018_3ab2(u32 param_1, i16 param_2, i16 param_3, u16 param_4)

{
    u16  uVar1;
    u16  u_var2;
    i16  iVar3;
    long lVar4;
    u16  uStack22;
    u8   local_10[0x8];
    i16  iStack8;
    u32  u_stack6;

    if(0x5 < param_3 - 0x188U)
    {
        return 0x0;
    }
    iVar3 = param_1;
    u_var2 = (param_1 >> 0x10);
    switch(param_3)
    {
    case 0x188:
        uVar1 = (iVar3 + 0xa);
        u_var2 = (iVar3 + 0xc);
        break;
    case 0x189:
        uVar1 = (iVar3 + 0xe);
        u_var2 = (iVar3 + 0x10);
        break;
    case 0x18a:
        uVar1 = (iVar3 + 0x12);
        u_var2 = (iVar3 + 0x14);
        break;
    case 0x18b:
        uVar1 = (iVar3 + 0x16);
        u_var2 = (iVar3 + 0x18);
        break;
    case 0x18c:
        uVar1 = (iVar3 + 0x1a);
        u_var2 = (iVar3 + 0x1c);
        break;
    case 0x18d:
        uVar1 = (iVar3 + 0x1e);
        u_var2 = (iVar3 + 0x20);
    }
    u_stack6 = str_var1(u_var2, uVar1);
    iStack8 = 0x0;
    pass1_1008_5784(str_var1(param_4, local_10), u_stack6);
    while(true)
    {
        lVar4 = pass1_1008_5b12(local_10, param_4);
        u_var2 = (lVar4 >> 0x10);
        if((lVar4 == 0x0) || (iStack8 == param_2))
            break;
        iStack8 = iStack8 + 0x1;
    }
    uStack22 = 0x0;
    if(lVar4 != 0x0)
    {
        if((lVar4 + 0xa) == 0x0)
        {
            uStack22 = (lVar4 + 0x8);
        }
        else
        {
            uStack22 = 0xffff;
        }
    }
    return uStack22;
}


u16  pass1_1018_1c9a(u32 param_1, i16 param_2)

{
    i16 *pi_var1;
    u32  u_var2;
    u16  uVar3;
    u16  uVar4;
    u16  unaff_SS;
    i16  iStack10;

    iStack10 = 0x0;
    while(true)
    {
        uVar4  = (param_1 >> 0x10);
        pi_var1 = (param_1 + 0x44);
        if(*pi_var1 == iStack10 || *pi_var1 < iStack10)
        {
            return 0x0;
        }
        u_var2 = *(param_1 + 0x40);
        uVar3 = u_var2 + iStack10 * 0x18;
        if(((uVar3 + 0xc) * 0x1e + 0x3c32) == param_2)
            break;
        iStack10 = iStack10 + 0x1;
    }
    pass1_1018_1eda(param_1, u_var2 & 0xffff0000 | uVar3, unaff_SS);
    return 0x1;
}


// WARNING: Could not reconcile some variable overlaps

void  pass1_1018_1ce8(u16 param_1, u32 param_2)

{
    i16       *pi_var1;
    i16        iVar2;
    i16        iVar3;
    u16        uVar4;
    u16        uVar5;
    i16        iStack26;
    u8         local_18[0x2];
    u8         local_16[0x2];
    i16        iStack20;
    i16        iStack18;
    i16        iStack16;
    u16        local_e;
    i16        local_c;
    i16        local_a;
    i16        iStack8;
    u32 u_stack6;

    uVar5   = (param_2 >> 0x10);
    iVar3   = param_2;
    u_stack6 = *(iVar3 + 0x40);
    iStack8 = 0x0;
    do
    {
        pi_var1 = (iVar3 + 0x44);
        if(*pi_var1 == iStack8 || *pi_var1 < iStack8)
        {
            return;
        }
        pass1_1008_3eb4((u_stack6 & 0xffff0000 | (iStack8 * 0x18 + u_stack6)),
                        str_var1(param_1, &local_e),
                        str_var1(param_1, &local_c),
                        str_var1(param_1, &local_a));
        local_a  = local_a / 0xa;
        iStack16 = local_c % 0xa;
        if(iStack16 != 0x0)
        {
            if(iStack16 < 0x6)
            {
                local_c = local_c - iStack16;
            }
            else
            {
                local_c = local_c + (0xa - iStack16);
            }
        }
        iStack18 = pass1_1000_49b2(local_e);
        iStack18 = iStack18 / 0x5;
        if(0x14 < iStack18)
        {
            iStack18 = 0x14;
            iVar2    = pass1_1000_49b2(local_e);
            local_e  = (local_e / iVar2) * 0x64;
        }
        iStack16 = pass1_1000_49b2(local_e);
        iStack16 = iStack16 % 0x5;
        if(iStack16 != 0x0)
        {
            if(local_e < 0x0)
            {
                iVar2 = iStack16;
                if(0x2 < iStack16)
                {
                    iVar2 = iStack16 + -0x5;
                }
                local_e = local_e + iVar2;
            }
            else
            {
                if(iStack16 < 0x3)
                {
                    local_e = local_e - iStack16;
                }
                else
                {
                    local_e = local_e + (0x5 - iStack16);
                }
            }
        }
        iStack20 = (iStack18 * 0x48 + 0x3c20);
        if(local_c < iStack20)
        {
            for(iStack26 = iStack18; iStack26 < 0x15; iStack26 = iStack26 + 0x1)
            {
                pi_var1 = (iStack26 * 0x48 + 0x3c20);
                if(*pi_var1 == local_c || *pi_var1 < local_c)
                {
                    iStack18 = iStack26;
                    break;
                }
            }
        }
        pass1_1008_3e94((param_2 & 0xffff0000 | (iVar3 + 0x3a)),
                        str_var1(param_1, local_18),
                        str_var1(param_1, local_16));
        uVar4         = iStack8 * 0x18 + u_stack6;
        (uVar4 + 0x6) = local_a;
        (uVar4 + 0x8) = iStack18;
        pass1_1008_3e76((u_stack6 & 0xffff0000 | uVar4), 0x0, local_e, ((iStack18 * 0x24 + local_a) * 0x2 + 0x3c20));
        (uVar4 + 0xa) = (local_a * 0x2 + 0x3966);
        iStack8       = iStack8 + 0x1;
    } while(true);
}

u32  pass1_1018_1e78(u32 param_1, i16 param_2)

{
    u32 uVar1;

    if(param_2 == -0x1)
    {
        uVar1   = (param_1 + 0x46);
        param_2 = (uVar1 + 0xc);
    }
    return str_var1(0x1050, param_2 * 0x1e + 0x3c18);
}

void  pass1_1018_1eda(u32 param_1, u32 param_2, u16 param_3)

{
    u32 uVar1;
    i16        iVar2;
    u16        uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0x46) != 0x0)
    {
        uVar1         = (iVar2 + 0x46);
        (uVar1 + 0xe) = 0x2;
    }
    *(iVar2 + 0x46) = param_2;
    (param_2 + 0xe) = 0x1;
    pass1_1010_1f62(param_3, param_1, 0xd);
    return;
}


u16  pass1_1018_1f1a(u32 param_1, i16 param_2)

{
    i16 *pi_var1;
    i16  iVar2;
    u16  uVar3;
    i16  iStack6;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0x56) == 0x0)
    {
        return 0x0;
    }
    iStack6 = 0x0;
    while(true)
    {
        pi_var1 = (iVar2 + 0x56);
        if(*pi_var1 == iStack6 || *pi_var1 < iStack6)
        {
            return 0x0;
        }
        if((iVar2 + 0x4e + iStack6 * 0x2) == param_2)
            break;
        iStack6 = iStack6 + 0x1;
    }
    return 0x1;
}

u32  pass1_1018_1f7a(i16 param_1, u16 param_2)

{
    return str_var1(param_2, param_1 + 0x2a);
}

void  pass1_1018_2076(u16 *param_1, u16 param_2)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1018_21e8;//0x21e8;
    param_1->field_0x2 = SEG_1018;
    pass1_1018_209c(param_1 & 0xffff | uVar1 << 0x10);
    pass1_1010_1d80(param_1, param_2);
    return;
}


void  pass1_1018_209c(u32 param_1)

{
    u32 *pu32_var1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;
    i16         iStack4;

    iStack4 = 0x0;
    do
    {
        uVar5  = (param_1 >> 0x10);
        iVar4  = param_1 + 0x12;
        pu32_var1 = (iVar4 + iStack4 * 0x4);
        u_var2  = (iVar4 + iStack4 * 0x4 + 0x2);
        if((u_var2 | pu32_var1) != 0x0)
        {
            ppcVar3 = *pu32_var1;
            (**ppcVar3)();
        }
        (param_1 + iStack4 * 0x4 + 0x12) = 0x0;
        iStack4                          = iStack4 + 0x1;
    } while(iStack4 < 0x1fd);
    return;
}


void  pass1_1018_20ee(u32 param_1, i16 *param_2)

{
    BOOL16 BVar1;
    u16    in_DX;
    u16    u_var2;

    BVar1 = pass1_1008_aed8(param_2);
    if(BVar1 == 0x0)
    {
        return;
    }
    u_var2 = (param_1 >> 0x10);
    if((param_1 + *param_2 * 0x4 + 0x12) == 0x0)
    {
        pass1_1018_216e(param_1 & 0xffff | u_var2 << 0x10, param_2, in_DX);
    }
    pass1_1008_ae26(param_2);
    return;
}


void  pass1_1018_214e(u16 param_1, u16 param_2, u16 *param_3, i16 param_4)

{
    pass1_1008_3e76(param_3, 0x0, (param_4 * 0x4 + 0x3e90), (param_4 * 0x4 + 0x3e8e));
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1018_216e(u32 param_1, u32 param_2, u16 param_3)

{
    u16 uVar1;
    u16 u_var2;
    u16 uVar3;
    u16 uStack8;

    uStack8 = pass1_1008_adf2(param_2);
    uVar1   = pass1_1008_ae0c(param_2);
    for(; uStack8 <= uVar1; uStack8 = uStack8 + 0x1)
    {
        u_var2 = uVar1;
        pass1_1010_8018globals->dat_1050_14cc, uStack8, param_3, SEG_1010);
        uVar3                            = (param_1 >> 0x10);
        (param_1 + uStack8 * 0x4 + 0x12) = u_var2;
        (param_1 + uStack8 * 0x4 + 0x14) = param_3;
    }
    return;
}

u16 pass1_1018_21f8(void)

{
    u16 *puVar1;

    pass1_1008_3e54(&USHORT_1048_4210, 0x0, 0x195, 0x1);
    pass1_1008_3e54(&USHORT_1050_65ca, 0x0, 0xe0, 0x1b1);
    pass1_1008_3e54(&USHORT_1050_65d0, 0x0, 0x17a, 0x72);
    pass1_1008_3e54(&USHORT_1050_65d6, 0x0, 0xde, 0x93);
    pass1_1008_3e54(&USHORT_1050_65dc, 0x0, 0x177, 0x1da);
    pass1_1008_3e54(&USHORT_1048_4216, 0x0, 0x195, 0x21c);
    pass1_1008_3e54(&USHORT_1048_421c, 0x0, 0x1b6, 0x22c);
    pass1_1008_3e54(&USHORT_1048_4222, 0x0, 0x109, 0x5);
    puVar1 = pass1_1008_3e54(&USHORT_1048_4228, 0x0, 0xfd, 0x1fd);
    return puVar1;
}

void  pass1_1018_2504(u16 param_1, u16 param_2)

{
    u16 uVar1;

    pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), 0x4000001);
    if((param_2 | param_1) != 0x0)
    {
        uVar1 = pass1_1028_d69e(**_PTR_LOOP_1050_5748);
        if(uVar1 == 0x0)
        {
            return;
        }
    }
    return;
}


void  pass1_1018_2548(u16 param_1, u16 param_2, u16 *param_3)

{
    pass1_1008_3f62(param_3, &USHORT_1048_4228);
    return;
}


u16  pass1_1018_255e(u32 param_1)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x26) != 0x0)
    {
        uVar1 = (param_1 + 0x26);
        return (uVar1 + 0xa);
    }
    return 0x0;
}


u8 * pass1_1018_2580(u32 param_1, u16 param_2, u32 param_3, u16 param_4, u16 param_5, u8 param_6)

{
    u8 *puVar1;
    i16 iVar2;
    u16 uVar3;
    u8  local_8[0x6];

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0x20) == 0x0)
    {
        return 0x6ad;
    }
    pass1_1008_3e38(str_var1(param_5, local_8));
    pass1_1018_161c(param_5, *(iVar2 + 0x20), str_var1(param_5, local_8), param_3, (param_3 >> 0x10));
    puVar1 = local_8;
    pass1_1018_17ce(*(iVar2 + 0x20),
                    str_var1(puVar1, param_2),
                    str_var1(param_4, param_5), param_5, param_6);
    return puVar1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16  pass1_1018_25d2(u32 param_1, u16 param_2, u32 param_3, i16 param_4, u16 param_5)

{
    u16  uVar1;
    u8  *pu_var2;
    u16  uVar3;
    u16 *puVar4;
    u16 *puVar5;
    u8   local_8[0x6];

    uVar3 = (param_1 >> 0x10);
    if((param_1 + 0x20) == 0x0)
    {
        return 0x0;
    }
    puVar4 = pass1_1008_3e38(str_var1(param_5, local_8));
    pu_var2 = (puVar4 >> 0x10);
    pass1_1018_161c(param_5, *(param_1 + 0x20), str_var1(param_5, local_8), param_3, (param_3 >> 0x10));
    puVar5 = str_var1(param_5, local_8);
    puVar4 = mixed_1010_20ba(globals->u16_1050_0ed0, 0x32, param_5, pu_var2, param_4);
    uVar1  = puVar4;
    pass1_1010_71d6(puVar4, param_2, puVar5, uVar1, (puVar4 >> 0x10), param_5);
    return uVar1;
}


void  pass1_1018_262e(u32 param_1)

{
    u16 uVar1;

    uVar1            = (param_1 >> 0x10);
    (param_1 + 0x44) = 0x1;
    (param_1 + 0x3e) = 0x0;
    return;
}


void  pass1_1018_2646(u16 param_1, u16 param_2, u16 *param_3)

{
    pass1_1008_3f62(param_3, &USHORT_1048_4222);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u32  pass1_1018_265c(void)

{
    u32 uVar1;

    uVar1 = pass1_1030_8326();
    return uVar1;
}


u16  pass1_1018_266a(u32 param_1)

{
    return (param_1 + 0x44);
}


void  pass1_1018_2678(Struct287 *param_1, u16 param_2, u16 *param_3)

{
    pass1_1008_3f62(param_3, &USHORT_1048_4216);
    return;
}


u32  pass1_1018_268e(Struct287 *param_1)

{
    Struct287 *iVar1;
    i16          iVar2;
    u16          uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar1 = (Struct287 *)param_1;
    if(iVar1->pv_field_42 != 0x0)
    {
        &iVar1->field_0x40 = 0x0;
        iVar1->field_0x44  = 0x1;
    }
    iVar2 = iVar1->field_0x3e * 0x4;
    return str_var1((&iVar1[0x1].field_0x2 + iVar2), (&iVar1[0x1].field_0x0 + iVar2));
}


void  pass1_1018_26c2(u16 param_1, u16 param_2, u16 *param_3)

{
    pass1_1008_3f62(param_3, &USHORT_1048_421c);
    return;
}


void  pass1_1018_26d8(u16 param_1, u16 param_2, i16 param_3, u16 *param_4)

{
    pass1_1008_3f62(param_4, str_var1(0x1050, &USHORT_1050_65ca + param_3 * 0x6));
    return;
}


void  pass1_1018_26f8(u16 param_1, u16 param_2, u16 *param_3)

{
    pass1_1008_3f62(param_3, &USHORT_1048_4210);
    return;
}
void  pass1_1018_280c(u32 param_1)

{
    u32 uVar1;
    i16        iVar2;
    u16        uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0x24) == 0x0)
    {
        return;
    }
    (iVar2 + 0x24) = 0x0;
    if((iVar2 + 0x20) == 0x0)
    {
        (iVar2 + 0x26) = 0x0;
    }
    else
    {
        uVar1          = (iVar2 + 0x20);
        (iVar2 + 0x26) = (uVar1 + 0x4c);
    }
    return;
}


void  pass1_1018_2862(Struct654 *param_1)

{
    long         lVar1;
    Struct654 *iVar2;
    u16          u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar2 = (Struct654 *)param_1;
    if(iVar2->field_0x20 == 0x0)
    {
        iVar2->field_0x26 = 0x0;
    }
    else
    {
        lVar1             = iVar2->field_0x20;
        iVar2->field_0x26 = (lVar1 + 0x4c);
    }
    return;
}


void  pass1_1018_289c(u32 param_1, i16 param_2, u16 param_3, u16 param_4)

{
    u16 uVar1;

    if(param_2 == 0x1)
    {
        (param_1 + 0x4) = 0x0;
        return;
    }
    if(param_2 == 0x2)
    {
        pass1_1018_2922(param_1 & 0xffff0000 | (param_1 - 0x1c));
    }
    else
    {
        if((((param_2 + -0x3 < 0x1) || (SBORROW2(param_2 + -0x3, 0x1))) || (0x1 < param_2 + -0x5)) || ((param_1 + 0x4) == 0x0))
        {
            return;
        }
        uVar1 = param_1 - 0x1c;
        pass1_1018_2862(param_1 & 0xffff0000 | uVar1);
        if((param_3 | uVar1) != 0x0)
        {
            (param_1 + 0x8) = 0x1;
        }
    }
    pass1_1010_1f62(param_4, param_1 & 0xffff0000 | (param_1 - 0x1c), param_2);
    return;
}


void  pass1_1018_2922(u32 param_1)

{
    i16 *pi_var1;
    i16  iVar2;
    u16  uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(((iVar2 + 0x40) != 0x0) && (pi_var1 = (iVar2 + 0x3e), *pi_var1 = *pi_var1 + 0x1, 0x9 < (iVar2 + 0x3e)))
    {
        (iVar2 + 0x3e) = 0x0;
        (iVar2 + 0x42) = 0x1;
    }
    return;
}

void pass1_1018_2aa3(void)

{
    pass1_1018_21f8();
    return;
}


void  pass1_1018_0ae8(u32 param_1, u16 param_2)

{
    (param_1 + 0x5e) = param_2;
    return;
}


u16  pass1_1018_0afa(u32 param_1)

{
    return (param_1 + 0x5e);
}


u32  pass1_1018_0b08(u32 param_1)

{
    u32 uVar1;
    i16        iVar2;
    u16        uVar3;

    uVar1 = (param_1 + 0x7c);
    uVar3 = (uVar1 >> 0x10);
    iVar2 = uVar1;
    return str_var1((iVar2 + 0x6), (iVar2 + 0x4));
}


void pass1_1018_0b1e(Struct74 *param_1, u16 *param_2, u16 param_3)

{
    i16         iVar1;
    u32  u_var2;
    Struct74 *iVar3;
    u16         uVar3;
    u16         local_8;
    i16         local_6;
    i16         local_4;

    iVar3 = (Struct74 *)param_1;
    iVar3 = (Struct74 *)&iVar3->field_0x30;
    pass1_1008_3eb4((param_1 & 0xffff0000 | ZEXT24(iVar3)),
                    str_var1(param_3, &local_8),
                    str_var1(param_3, &local_6),
                    str_var1(param_3, &local_4));
    if(local_4 + -0x3 < 0x1)
    {
        local_4 = 0x3;
    }
    if(local_6 + -0x3 < 0x1)
    {
        local_6 = 0x3;
    }
    uVar3 = (param_1 >> 0x10);
    u_var2 = iVar3->field_0x5a;
    iVar1 = (u_var2 + 0x4);
    if(iVar1 <= local_4 + 0x2)
    {
        local_4 = iVar1 + -0x3;
    }
    u_var2 = iVar3->field_0x5a;
    iVar1 = (u_var2 + 0x8);
    if(iVar1 <= local_6 + 0x2)
    {
        local_6 = iVar1 + -0x3;
    }
    pass1_1008_6cec((param_1 & 0xffff0000 | &iVar3->field_0x40), local_8,
                    str_var1(local_4 + 0x2, local_6 + 0x2), local_8,
                    str_var1(local_4 + -0x3, local_6 + -0x3));
    pass1_1008_3f62(param_2, (param_1 & 0xffff0000 | &iVar3->field_0x40));
    pass1_1008_3f62((param_2 & 0xffff0000 | (param_2 + 0x6)), (param_1 & 0xffff0000 | &iVar3->field_0x46));
    return;
}


void  pass1_1018_0bf4(u16 param_1, i16 param_2, u32 param_3, i16 param_4)

{
    u32 uVar1;
    u16        u_var2;
    u16        uVar3;
    long       lVar4;
    u16        uVar5;
    u8         local_14[0xc];
    u16        local_8;
    u32 local_6;

    switch(param_4)
    {
    case 0x1:
        (param_3 + 0xc)  = 0x0;
        (param_3 + 0x7e) = 0x0;
        return;
    case 0x4:
        pass1_1008_3eb4((param_3 & 0xffff0000 | (param_3 + 0x10)),
                        str_var1(param_1, &local_8),
                        str_var1(param_1, &local_6),
                        str_var1(param_1, &local_6 + 0x2));
        uVar1   = (param_3 + 0xc);
        local_8 = (uVar1 + 0x1e);
        pass1_1008_3e76((param_3 & 0xffff0000 | (param_3 + 0x10)), local_8, local_6, (local_6 >> 0x10));
        pass1_1008_6c90(str_var1(param_1, local_14));
        pass1_1018_0b1e((param_3 & 0xffff0000 | (param_3 - 0x20)),
                        str_var1(param_1, local_14),
                        param_1,
                        0,
                        0);
        goto LAB_1018_0c71;
    case 0x5:
    case 0x6:
        u_var2 = param_3 - 0x20;
        uVar5 = param_3;
        pass1_1018_0dc6(param_3 & 0xffff0000 | u_var2, param_1);
        pass1_1018_10c4(param_1, uVar5, param_3 & 0xffff0000 | u_var2);
        pass1_1018_1346(param_1, uVar5, (Struct93 *)(param_3 & 0xffff0000 | u_var2));
    LAB_1018_0c71:
        (param_3 + 0x2c) = 0x0;
        lVar4            = (param_3 + 0x1c);
        uVar3            = (param_3 + 0x1e);
        uVar1            = (param_3 + 0xc);
        if((uVar1 + 0x20) == lVar4)
        {
            pass1_1018_028c(*(param_3 + 0xc), *(param_3 + 0x1c), lVar4, uVar3, param_1);
            (param_3 + 0x2c) = lVar4;
            (param_3 + 0x2e) = uVar3;
            pass1_1010_1f62(param_1, param_3 & 0xffff0000 | (param_3 - 0x20), param_4);
            return;
        }
        break;
    case 0x14:
        uVar1 = (param_3 + 0xc);
        if((uVar1 + 0x20) != (param_3 + 0x1c))
        {
            post_win_msg_1020_291a(SEG_1020);
            return;
        }
        break;
    case 0x15:
        uVar3 = pass1_1010_65d0(param_1, *(param_3 + 0x7e), 0x88);
        if(uVar3 != 0x0)
        {
            (param_3 + 0x88) = 0x1;
            return;
        }
    }
    return;
}


void  pass1_1018_0d76(u32 param_1)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    uVar1 = (param_1 + 0x2c);
    if((uVar1 + 0x20) == (param_1 + 0x3c))
    {
        return;
    }
    return;
}


void  pass1_1018_0d9a(u32 param_1, u16 *param_2, u32 *param_3)

{
    u32 uVar1;
    u16        u_var2;

    u_var2    = (param_1 >> 0x10);
    uVar1    = (param_1 + 0x7c);
    *param_3 = *(uVar1 + 0x16);
    uVar1    = (param_1 + 0x7c);
    *param_2 = (uVar1 + 0x1a);
    return;
}

void  pass1_1018_1054(u32 param_1, u16 *param_2, u32 *param_3, u16 param_4)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((iVar1 + 0x94) == 0x0)
    {
        pass1_1018_0dc6(param_1 & 0xffff | u_var2 << 0x10, param_4);
    }
    *param_3 = *(iVar1 + 0x94);
    *param_2 = (iVar1 + 0x92);
    return;
}


void  pass1_1018_108c(u32 param_1, u16 *param_2, u32 *param_3, u16 param_4)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((iVar1 + 0x9a) == 0x0)
    {
        pass1_1018_0dc6(param_1 & 0xffff | u_var2 << 0x10, param_4);
    }
    *param_3 = *(iVar1 + 0x9a);
    *param_2 = (iVar1 + 0x98);
    return;
}

void  pass1_1018_15f6(u32 param_1, u16 *param_2, u32 *param_3)

{
    u16 uVar1;

    uVar1    = (param_1 >> 0x10);
    *param_3 = *(param_1 + 0x8e);
    *param_2 = (param_1 + 0x8c);
    return;
}


void  pass1_1018_161c(u16 param_1, u32 param_2, u16 *param_3, i16 param_4, i16 param_5)

{
    u16 uVar1;
    u16 u_var2;
    u32 local_6;

    pass1_1008_3e94((param_2 & 0xffff0000 | (param_2 + 0x36)),
                    str_var1(param_1, &local_6),
                    str_var1(param_1, &local_6 + 0x2));
    uVar1   = local_6 + param_5 + -0x3;
    u_var2   = local_6 + param_4 + -0x3;
    local_6 = str_var1(uVar1, u_var2);
    pass1_1008_3e76(param_3, (param_2 + 0x44), u_var2, uVar1);
    return;
}


void  pass1_1018_1662(u32 param_1, i16 param_2, i16 param_3, u16 param_4)

{
    i16 local_6;
    i16 local_4;

    pass1_1008_3e94((param_1 & 0xffff0000 | (param_1 + 0x36)),
                    str_var1(param_4, &local_6),
                    str_var1(param_4, &local_4));
    pass1_1018_16b8(param_1, (param_1 + 0x44), str_var1(local_4 + param_3, local_6 + param_2), param_4);
    return;
}


void  pass1_1018_169e(u32 param_1, u32 param_2, u16 param_3)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    pass1_1018_16b8(param_1 & 0xffff | uVar1 << 0x10, (param_1 + 0x44), param_2, param_3);
    return;
}


// WARNING: Unable to use type for symbol u_var2

void  pass1_1018_16b8(u32 param_1, u16 param_2, u32 param_3, u16 param_4)

{
    i16        iVar1;
    u32 uVar3;
    long       lVar4;
    u16        uVar5;
    i16        iVar6;
    u16        uVar7;
    u16        uVar8;
    u8         local_6[0x2];
    u8         local_4[0x2];
    u32 u_var2;

    if(param_3 + -0x3 < 0x1)
    {
        param_3 = str_var1(0x3, param_3);
    }
    if(param_3 + -0x3 < 0x1)
    {
        param_3 = str_var1(param_3, 0x3);
    }
    uVar7 = (param_1 >> 0x10);
    iVar6 = param_1;
    u_var2 = (iVar6 + 0x5a);
    iVar1 = (u_var2 + 0x4);
    if(iVar1 <= param_3 + 0x2)
    {
        param_3 = param_3 & 0xffff | (iVar1 - 0x3) << 0x10;
    }
    uVar3 = (iVar6 + 0x5a);
    iVar1 = (uVar3 + 0x8);
    if(iVar1 <= param_3 + 0x2)
    {
        param_3 = param_3 & 0xffff0000 | (iVar1 - 0x3);
    }
    uVar8 = (param_3 >> 0x10);
    pass1_1008_3e76((param_1 & 0xffff0000 | (iVar6 + 0x30)), param_2, param_3, uVar8);
    uVar5 = uVar7;
    pass1_1008_3e94((param_1 & 0xffff0000 | (iVar6 + 0x36U)),
                    str_var1(param_4, local_6),
                    str_var1(param_4, local_4));
    pass1_1008_3e76((param_1 & 0xffff0000 | (iVar6 + 0x36U)), 0x0, param_3, uVar8);
    (iVar6 + 0x4c) = 0x0;
    lVar4          = (iVar6 + 0x3c);
    uVar3          = (iVar6 + 0x2c);
    if((uVar3 + 0x20) == lVar4)
    {
        pass1_1018_028c(*(iVar6 + 0x2c), *(iVar6 + 0x3c), lVar4, uVar5, param_4);
        (iVar6 + 0x4c) = lVar4;
        (iVar6 + 0x4e) = uVar5;
        pass1_1010_1f62(param_4, param_1, 0x4);
    }
    return;
}


void  pass1_1018_179e(u32 param_1, u32 param_2, u16 param_3, u16 param_4)

{
    u16        local_8;
    u32 local_6;

    pass1_1008_3eb4(param_2,
                    str_var1(param_4, &local_8),
                    str_var1(param_4, &local_6),
                    str_var1(param_4, &local_6 + 0x2));
    pass1_1018_16b8(param_1, local_8, local_6, param_4);
    return;
}


void  pass1_1018_17ce(u32 param_1, u32 param_2, u32 param_3, u16 param_4, u8 param_5)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    pass1_1018_0412(*(param_1 + 0x2c), param_2,
                    str_var1(param_3, (param_2 >> 0x10)), (param_3 >> 0x10), *(param_1 + 0x3c), param_4, param_5);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

i16  pass1_1018_17f0(void)

{
    i16 iStack4;

    iStack4 = 0x0;
    while((iStack4 < 0x4 && ((iStack4 * 0x2 + globals->_PTR_LOOP_1050_3962) != 0x0)))
    {
        iStack4 = iStack4 + 0x1;
    }
    return iStack4;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1018_181c(u32 param_1, char *param_2, u8 param_3, u16 param_4)

{
    u8  in_AH;
    u16 uVar1;

    uVar1 = CONCAT11(in_AH, param_3);
    pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), *(param_1 + 0x3c));
    pass1_1030_5b6c(str_var1(param_4, uVar1), param_2, param_4);
    return;
}

void  pass1_1018_1b02(u16 param_1, u32 param_2, i16 param_3)

{
    i16        *pi_var1;
    u32         u_var2;
    u32         uVar3;
    Struct96 *uVar4;
    Struct95 *iVar5;
    u16         uVar5;
    i16         iStack12;
    u16         local_6;
    u8          local_4[0x2];

    iStack12 = 0x0;
    while(true)
    {
        uVar5  = (param_2 >> 0x10);
        iVar5  = (Struct95 *)param_2;
        pi_var1 = &iVar5->field_0x44;
        if(*pi_var1 == iStack12 || *pi_var1 < iStack12)
            break;
        u_var2   = iVar5->field_0x40;
        uVar4   = (Struct96 *)u_var2;
        uVar4   = uVar4 + iStack12;
        u_var2   = u_var2 & 0xffff0000;
        uVar3   = ZEXT24(uVar4);
        pi_var1  = &uVar4->field_0x6;
        *pi_var1 = *pi_var1 + param_3 * 0x2 + -0x1;
        uVar5   = (u_var2 >> 0x10);
        if(0x23 < uVar4->field_0x6)
        {
            uVar4->field_0x6 = 0x0;
        }
        if(uVar4->field_0x6 < 0x0)
        {
            uVar4->field_0x6 = 0x23;
        }
        pass1_1008_3f62((u_var2 | &uVar4->field_0x10), (u_var2 | uVar3));
        uVar4->field_0x16 = uVar4->field_0xa;
        pass1_1008_3e94((u_var2 | uVar3), str_var1(param_1, &local_6), str_var1(param_1, local_4));
        pass1_1008_3e76((u_var2 | uVar3), 0x0, local_6, ((uVar4->field_0x8 * 0x24 + uVar4->field_0x6) * 0x2 + 0x3c20));
        uVar4->field_0xa = (uVar4->field_0x6 * 0x2 + 0x3966);
        iStack12         = iStack12 + 0x1;
    }
    pass1_1010_1f62(param_1, param_2, 0xd);
    return;
}

void  pass1_1010_ebf8(u32 param_1, u16 param_2, u16 param_3, i16 param_4)

{
    u16 uVar1;

    uVar1                            = (param_1 >> 0x10);
    (param_1 + param_4 * 0x4 + 0x34) = param_2;
    (param_1 + param_4 * 0x4 + 0x36) = param_3;
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u32  pass1_1010_ec18(u16 param_1, u16 param_2, u32 param_3, i16 param_4, u16 param_5)

{
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_3, (param_3 >> 0x10));
    return str_var1((param_4 + 0x12), (param_4 + 0x10));
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u32  pass1_1010_ec40(u16 param_1, u16 param_2, u32 param_3, i16 param_4, u16 param_5)

{
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_3, (param_3 >> 0x10));
    return str_var1((param_4 + 0x12), (param_4 + 0x10));
}


void  pass1_1010_ec68(u32 param_1, u32 param_2, u16 param_3)

{
    u16 uVar1;

    uVar1             = (param_1 >> 0x10);
    *(param_1 + 0x28) = param_2;
    pass1_1010_1f62(param_3, param_1 & 0xffff | uVar1 << 0x10, 0x13);
    return;
}

void  pass1_1010_ecc6(u32 param_1, u16 *param_2, long param_3, u16 param_4, u16 param_5, u16 param_6)

{
    u32 uVar1;
    i16        iVar2;
    u16        uVar3;

    pass1_1030_627e(param_6, param_4, param_5, globals->_PTR_LOOP_1050_5740, param_2, param_3);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_4, param_5);
    uVar1 = (param_4 + 0x2e);
    uVar3 = (uVar1 >> 0x10);
    iVar2 = uVar1;
    if((iVar2 + 0x200) == 0x8000001)
    {
        pass1_1010_ed22(param_1, *(iVar2 + 0x4), param_6);
    }
    return;
}


void  pass1_1010_ed22(u32 param_1, u32 param_2, u16 param_3)

{
    u16 uVar1;

    uVar1             = (param_1 >> 0x10);
    *(param_1 + 0x24) = param_2;
    pass1_1010_1f62(param_3, param_1 & 0xffff | uVar1 << 0x10, 0x12);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_ed3e(u32 param_1)

{
    u32 uVar1;

    uVar1 = (param_1 + 0x16);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
    return;
}

void  pass1_1018_017c(u32 param_1, u16 param_2, u16 param_3)

{
    u16 uVar1;

    uVar1            = (param_1 >> 0x10);
    (param_1 + 0x1e) = param_2;
    pass1_1010_1f62(param_3, param_1 & 0xffff | uVar1 << 0x10, 0x4);
    return;
}

void  pass1_1018_03ea(u32 param_1, i16 param_2, u16 param_3)

{
    if(param_2 != 0x5)
    {
        return;
    }
    pass1_1010_1f62(param_3, param_1 & 0xffff0000 | (param_1 - 0xa), 0x5);
    return;
}

void  pass1_1018_04f2(u32 param_1)

{
    u32 *pu32_var1;
    u16         u_var2;
    void **ppcVar3;
    i16         iVar4;
    u16         uVar5;

    uVar5  = (param_1 >> 0x10);
    iVar4  = param_1;
    pu32_var1 = (iVar4 + 0x12);
    u_var2  = (iVar4 + 0x14);
    if((u_var2 | pu32_var1) != 0x0)
    {
        ppcVar3 = *pu32_var1;
        (**ppcVar3)();
    }
    (iVar4 + 0x12) = 0x0;
    return;
}

void  pass1_1018_0902(u32 *param_1, u32 param_2)

{
    u32   uVar1;
    void **ppcVar2;
    Struct76 **ppaVar3;
    Struct76 **ppaVar4;
    i16          iVar5;
    u16          uVar6;
    u32          uVar7;
    u32         *puVar8;
    u32         *puVar9;

    puVar9  = (param_1 & 0xffff0000 | (param_1 + 0x28));
    ppaVar3 = (Struct76 **)(param_1 + 0x24);
    puVar8  = (param_1 & 0xffff0000 | ZEXT24(ppaVar3));
    uVar6   = param_1;
    ppaVar4 = ppaVar3;
    pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), param_2);
    pass1_1030_5a52(str_var1(uVar6, ppaVar4), puVar8, puVar9);
    uVar7                               = pass1_1008_4772(*ppaVar3);
    (param_1 + 0x5a)                    = uVar7;
    (param_1 + 0x5c)                    = (uVar7 >> 0x10);
    iVar5                               = pass1_1018_17f0();
    (param_1 + 0x12)                    = iVar5 + 0x2;
    (iVar5 * 0x2 + globals->_PTR_LOOP_1050_3962) = 0x1;
    ppcVar2                             = (*param_1 + 0x18);
    (**ppcVar2)();
    *(param_1 + 0x3c) = param_2;
    uVar1             = (param_1 + 0x2c);
    uVar7             = pass1_1010_ec18(uVar1, (uVar1 >> 0x10), param_2 & 0xffff0000 | (param_1 + 0x3c), param_2, param_2);
    (param_1 + 0x7c)  = uVar7;
    (param_1 + 0x7e)  = (uVar7 >> 0x10);
    return;
}

u32  pass1_1018_0a50(u32 param_1)

{
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    if((iVar1 + 0x84) == 0x2)
    {
        return str_var1((iVar1 + 0x2a), (iVar1 + 0x28));
    }
    return str_var1((iVar1 + 0x26), (iVar1 + 0x24));
}


void  pass1_1018_0a76(u32 param_1, u16 param_2)

{
    u16 uVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x84) == 0x1)
    {
        uVar1 = 0x2;
    }
    else
    {
        uVar1 = 0x1;
    }
    (param_1 + 0x84) = uVar1;
    pass1_1010_1f62(param_2, param_1 & 0xffff | u_var2 << 0x10, 0x4);
    return;
}


void  pass1_1018_0aa0(u32 param_1, u16 param_2)

{
    i16 iVar1;
    u16 u_var2;

    u_var2          = (param_1 >> 0x10);
    iVar1          = param_1;
    (iVar1 + 0x14) = param_2;
    pass1_1018_04de(*(iVar1 + 0x2c), *(iVar1 + 0x3c));
    return;
}


void  pass1_1018_0ac0(u32 param_1, u32 param_2)

{
    *(param_1 + 0x80) = param_2;
    return;
}


u32  pass1_1018_0ad4(u32 param_1)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    return str_var1((param_1 + 0x82), (param_1 + 0x80));
}

i16  pass1_1010_e128(u16 param_1, u16 param_2, i16 param_3, i16 param_4, u32 param_5)

{
    i16 iStack6;
    i16 iStack4;

    iStack4 = 0x0;
    for(iStack6 = param_4; iStack6 <= param_3; iStack6 = iStack6 + 0x1)
    {
        if((iStack6 * 0x2 + param_5) != 0x0)
        {
            iStack4 = iStack4 + 0x1;
        }
    }
    return iStack4;
}

void  pass1_1010_e15e(u32 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    void **ppcVar1;
    u16         u_var2;
    u16         uVar3;
    u32         uVar4;
    u16         extraout_DX;
    u16         extraout_DX_00;
    u16         uVar5;
    u32         uStack18;
    u32         uStack14;
    u32 *puStack10;

    pass1_1010_afde(param_1, 0xc);
    puStack10 = str_var1(param_3, param_2);
    ppcVar1   = (*puStack10 + 0x10);
    u_var2     = param_2;
    (**ppcVar1)(param_4, param_2, param_3);
    uStack14 = str_var1(extraout_DX, u_var2);
    for(uStack18 = 0x0; uStack18 < uStack14; uStack18 = uStack18 + 0x1)
    {
        ppcVar1 = (*puStack10 + 0x4);
        uVar4   = uStack14;
        (**ppcVar1)(param_4, param_2, param_3, uStack18, (uStack18 >> 0x10));
        uVar3 = uVar4;
        uVar5 = extraout_DX_00;
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar3, extraout_DX_00);
        param_4 = SEG_1030;
        pass1_1030_7c28(CONCAT13((uVar5 >> 0x8), CONCAT12(uVar5, uVar3)), 0x23, uVar3, uVar5, param_5);
    }
    if(puStack10 != 0x0)
    {
        ppcVar1 = *puStack10;
        (**ppcVar1)(param_4, param_2, param_3, 0x1);
    }
}

void  pass1_1010_e1f4(u32 param_1, u32 param_2, u16 param_3, u16 param_4)

{
    u16    uVar1;
    BOOL16 BVar2;
    char  *pcVar3;
    u16    uVar4;
    u16    uVar5;
    i16    iVar6;
    short  in_buf_len_5;
    u32    uVar7;

    in_buf_len_5     = (short)(param_1 >> 0x10);
    iVar6            = param_1;
    *(iVar6 + 0x13c) = 0x0;
    uVar7            = struct_op_1030_73a8(param_2);
    uVar5            = (uVar7 >> 0x10);
    uVar1            = (uVar7 + 0xc);
    BVar2            = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0xc);
    if((((((((BVar2 == 0x0) && (BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x14), BVar2 == 0x0)) && (BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0xa), BVar2 == 0x0))
           && ((BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x15), BVar2 == 0x0 && (BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0xb), BVar2 == 0x0))))
          && (BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x16), BVar2 == 0x0))
         && (((BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x17), BVar2 == 0x0 && (BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x21), BVar2 == 0x0))
              && ((BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x1c),
                   BVar2 == 0x0
                     && (((BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x1d), BVar2 == 0x0 && (BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x18), BVar2 == 0x0))
                          && (BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x19), BVar2 == 0x0))))))))
        && ((BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x4), BVar2 == 0x0 && (BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x3), BVar2 == 0x0))))
       && (((BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x1e),
             BVar2 == 0x0
               && (((BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x23), BVar2 == 0x0 && (BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x1b), BVar2 == 0x0))
                    && ((BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x1f),
                         BVar2 == 0x0
                           && (((BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x1), BVar2 == 0x0 && (BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x2), BVar2 == 0x0))
                                && (BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x13), BVar2 == 0x0))))))))
            && (((BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x20), BVar2 == 0x0 && (BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0xe), BVar2 == 0x0))
                 && (BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x10), BVar2 == 0x0))))))
    {
        pcVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x12);
        if((pcVar3 == 0x0) && (pcVar3 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x11), pcVar3 == 0x0))
        {
            BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x6);
            if(BVar2 == 0x0)
            {
                BVar2 = pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x5);
                if(BVar2 == 0x0)
                {
                    pass1_1008_c6ae(globals->dat_1050_06e0, uVar1, 0x40);
                    goto LAB_1010_e241;
                }
                uVar4  = pass1_1030_7f98(param_2);
                pcVar3 = string_op_1020_c222(uVar4);
            }
            else
            {
                uVar4  = pass1_1030_7f5a(param_2);
                pcVar3 = string_op_1020_c2f8(uVar4);
            }
        }
        else
        {
            pass1_1010_e58a(param_1, uVar7, uVar5, param_3, param_4);
        }
        unk_str_op_1000_3d3e((param_1 & 0xffff0000 | (iVar6 + 0x13c)),
                             str_var1(uVar5, pcVar3));
    }
    else
    {
    LAB_1010_e241:
        load_string_1010_84e0(SEG_1008, globals->dat_1050_14cc, globals->dat_1050_14cc >> 0x10,NULL), 0x3ff, (iVar6 + 0x13c), in_buf_len_5);
    }
    return;
}

void  pass1_1010_e8d0(u16 param_1, u16 param_2, u16 *param_3, u16 *param_4, u32 param_5, u16 param_6)

{
    pass1_1030_7064(param_5);
    *param_4 = param_6;
    pass1_1030_70ac(param_5);
    *param_3 = param_6;
    return;
}

void  pass1_1010_c1ba(u16 param_1, u16 param_2, i16 param_3, u16 param_4, u16 param_5)

{
    u8 *puVar1;
    i16 iStack28;
    u8  local_16[0x12];
    u16 uStack4;

    uStack4 = 0x0;
    pass1_1028_dc52((Struct92 *)str_var1(param_5, local_16), 0x1, 0x0, 0x200);
    iStack28 = 0x1;
    while(true)
    {
        puVar1 = local_16;
        pass1_1028_e4ec(str_var1(param_5, puVar1));
        param_4 = param_4 | puVar1;
        if((param_4 == 0x0) || (iStack28 == param_3))
            break;
        iStack28 = iStack28 + 0x1;
    }
    return;
}


char * pass1_1010_c234(u16 param_1, u8 *param_2, i16 param_3, u16 param_4)

{
    char *pcVar1;

    pass1_1010_c28a(param_2, param_3, param_4);
    if((param_2 | param_1) == 0x0)
    {
        return 0x0;
    }
    pcVar1 = pass1_1038_4d28(str_var1(param_2, param_1));
    return pcVar1;
}


void  pass1_1010_c25e(u16 param_1, u16 param_2, char *param_3, u16 param_4, u8 *param_5, i16 param_6, u16 param_7)

{
    if(param_3 != 0x0)
    {
        pass1_1010_c28a(param_5, param_6, param_7);
        if((param_5 | param_4) != 0x0)
        {
            pass1_1038_4d3c(str_var1(param_5, param_4), param_3, param_5 | param_4);
        }
    }
    return;
}
void  pass1_1010_c2d8(u16 param_1, u16 param_2, long param_3)

{
    u16 uVar1;
    u16 u_stack6;

    if((param_3 != 0x0) && (uVar1 = (param_3 >> 0x10), u_stack6 = (param_3 + 0x2e), ((param_3 + 0x30) | u_stack6) != 0x0))
    {
        return;
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u32  pass1_1010_c312(void)

{
    return str_var1((globals->_PTR_LOOP_1050_65e2 + 0x2), *_PTR_LOOP_1050_65e2);
}
void  pass1_1010_988c(u32 param_1, i16 param_2)

{
    void **ppcVar1;
    u32 u_var2;
    i16        iVar3;
    i16        iVar4;
    u16        uVar5;
    i16        iVar6;
    u16        uVar7;
    u16        unaff_SS;
    long       lVar8;
    u8         local_a[0x8];

    uVar7 = (param_1 >> 0x10);
    iVar6 = param_1;
    pass1_1008_5784(str_var1(unaff_SS, local_a), *(iVar6 + 0xe));
    do
    {
        lVar8 = pass1_1008_5b12(local_a, unaff_SS);
        uVar5 = (lVar8 >> 0x10);
        iVar3 = lVar8;
        if(lVar8 == 0x0)
        {
            return;
        }
    } while((iVar3 + 0x4) != param_2);
    iVar4         = (iVar3 + 0x6) + -0x1;
    (iVar3 + 0x6) = iVar4;
    if((iVar4 < 0x1) && (ppcVar1 = ((iVar6 + 0xe) + 0xc), (**ppcVar1)(SEG_1008, (iVar6 + 0xe), lVar8), u_var2 = (iVar6 + 0xe), (u_var2 + 0x8) == 0x0))
    {
        (iVar6 + 0x16) = 0x1;
    }
    return;
}


void  pass1_1010_9f72(u32 param_1, i16 param_2, u16 param_3)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    pass1_1010_9fa6(param_1, uVar1, *(param_1 + 0xe), param_2, param_3);
    return;
}


void  pass1_1010_9f8c(u32 param_1, i16 param_2, u16 param_3)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    pass1_1010_9fa6(param_1, uVar1, *(param_1 + 0xa), param_2, param_3);
    return;
}


u16  pass1_1010_9fa6(u16 param_1, u16 param_2, u32 param_3, i16 param_4, u16 param_5)

{
    u16  uVar1;
    long lVar2;
    u8   local_a[0x8];

    if(param_3 != 0x0)
    {
        pass1_1008_5784(str_var1(param_5, local_a), param_3);
        while(true)
        {
            lVar2 = pass1_1008_5b12(local_a, param_5);
            uVar1 = (lVar2 >> 0x10);
            if(lVar2 == 0x0)
                break;
            if((lVar2 + 0x4) == param_4)
            {
                return (lVar2 + 0x6);
            }
        }
    }
    return 0x0;
}

void  pass1_1010_a478(u16 *param_1, u16 param_2) {
    u16 *puVar1;
    u16 u_var2;
    Struct497 *uVar3;
    u16 uVar4;
    u16 *pu_stack6;

    uVar4 = (param_1 >> 0x10);
    uVar3 = (Struct497 *) param_1;
    param_1->field_0x0 = addr_table_1010_e9cc; //0xe9cc;
    uVar3->field_0x2 = SEG_1010;
    uVar3->field_0xa = addr_table_1010_e9cc[4];//0xe9dc;
    uVar3->field_0xc = SEG_1010;
    if (uVar3->field_0x138 != 0x0) {
        if (param_1 == 0x0) {
            puVar1 = 0x0;
            u_var2 = 0x0;
        }
        else
        {
            puVar1 = &uVar3->field_0xa;
            u_var2  = uVar4;
        }
        pass1_1010_1ea6(uVar3->field_0x138, str_var1(u_var2, puVar1), param_2);
    }
    uVar3->field_0x138 = 0x0;
    if(param_1 == 0x0)
    {
        puVar1 = 0x0;
        uVar4  = 0x0;
    }
    else
    {
        puVar1 = &uVar3->field_0xa;
    }
    pu_stack6    = str_var1(uVar4, puVar1);
    *pu_stack6   = addr_table_1008_380a[36]; // 0x389a
    puVar1[0x1] = SEG_1008;
    pass1_1010_1d80(param_1, param_2);
    return;
}

void  pass1_1010_a50c(Struct20 *param_1, u32 param_2, u32 param_3)

{
    i16          iVar1;
    Struct260 *iVar2;
    u32   local_8;
    i16          iStack4;

    iVar1 = param_1;
    pass1_1000_4906((Struct20 *)(param_1 & 0xffff0000 | (iVar1 + 0xa4)), 0x0, 0x94);
    iVar2   = (Struct260 *)((param_3 + 0xa) * 0x6 + iVar1);
    local_8 = iVar2->field_0xe;
    iStack4 = iVar2->field_0x12;
    (*(fn_ptr_1)local_8)(SEG_1000, iVar1 + iStack4, param_1, param_2, param_3);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_a568(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), 0x8000001);
    pass1_1030_2622(str_var1(param_5, param_4), param_3);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_a58a(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), 0x8000001);
    pass1_1030_266c(param_4, str_var1(param_3, param_5));
    return;
}

void  pass1_1010_a5ca(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), 0x8000001);
    pass1_1030_2242(str_var1(param_5, param_4), param_3);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_a5ec(u16 param_1, u16 param_2, u16 param_3, u32 param_4, u16 param_5)

{
    void **ppcVar1;
    u16         u_var2;
    u16         uVar3;
    u16         uVar4;
    u16         uVar5;
    u16         extraout_DX;
    u32 *puVar6;
    u32         u_stack6;

    u_var2 = param_4 | param_4;
    if(param_4 != 0x0)
    {
        pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), 0x8000001);
        u_stack6 = str_var1(param_5, u_var2);
        puVar6  = struct_op_1030_73a8(param_4);
        uVar5   = (puVar6 >> 0x10);
        uVar4   = (puVar6 + 0x20);
        if(uVar4 != param_3)
        {
            uVar3 = param_3;
            pass1_1010_a5ca(param_1, param_2, uVar4, param_3, uVar5);
            if((uVar4 != 0x70) && (uVar3 < 0x0))
            {
                pass1_1030_25d8(str_var1(param_5, u_var2), uVar3 + 0x1, uVar4);
            }
            ppcVar1 = (*puVar6 + 0x8);
            uVar4   = param_3;
            (**ppcVar1)();
            if(param_3 != 0x70)
            {
                pass1_1010_a5ca(param_1, param_2, param_3, uVar4, extraout_DX);
                if(uVar4 < 0x0)
                {
                    pass1_1030_25d8(u_stack6, uVar4 - 0x1, param_3);
                }
            }
        }
    }
    return;
}

u16  pass1_1010_ac62(u16 param_1, u16 param_2, i16 param_3, u16 param_4, u16 param_5)

{
    pass1_1030_8344(globals->_PTR_LOOP_1050_5748, (globals->_PTR_LOOP_1050_5748 >> 0x10), 0x8000001);
    return (param_4 + 0x116 + param_3 * 0x2);
}

void  pass1_1010_acec(u32 param_1, i16 param_2, u16 param_3)

{
    if(param_2 == 0x1)
    {
        (param_1 + 0x12e) = 0x0;
    }
    else
    {
        if(param_2 != 0x5)
        {
            return;
        }
    }
    pass1_1010_1f62(param_3, param_1 & 0xffff0000 | (param_1 - 0xa), param_2);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_ad22(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    u32 uVar1;
    u16       *pu_var2;

    uVar1  = (param_1 + 0x138);
    pu_var2 = &param_5;
    pass1_1030_627e(param_3, pu_var2, param_2, globals->_PTR_LOOP_1050_5740,
                    str_var1(param_3, pu_var2), (uVar1 + 0x20));
    if((param_2 | pu_var2) == 0x0)
    {
        return;
    }
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, pu_var2, param_2);
    return;
}


void  pass1_1010_ad64(u16 param_1, u32 param_2, u32 param_3, u32 param_4, u16 param_5)

{
    if(param_3 != 0x0)
    {
        param_4 = *(param_3 + 0x2e);
        if((param_4 + 0x200) == 0x8000002)
        {
            return;
        }
    }
    pass1_1010_c58as(param_1, param_2, (param_2 >> 0x10), param_3, param_4, param_5);
    return;
}

void  pass1_1010_af66(u32 param_1, u16 param_2)

{
    u32 uVar1;
    u32        u_var2;
    u16        uVar3;
    u16        in_stack_00000008;

    uVar1 = (param_1 + 0x138);
    u_var2 = *(uVar1 + 0x24);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
    uVar3 = param_2 | u_var2;
    if(uVar3 == 0x0)
    {
        return;
    }
    pass1_1038_5050(u_var2 & 0xffff | param_2 << 0x10, in_stack_00000008, u_var2, uVar3);
    return;
}

void  pass1_1010_afa2(u32 param_1, u16 param_2)

{
    u32 uVar1;
    u32        u_var2;
    u16        in_stack_00000008;

    uVar1 = (param_1 + 0x138);
    u_var2 = *(uVar1 + 0x24);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
    if((param_2 | u_var2) == 0x0)
    {
        return;
    }
    pass1_1038_50e0(u_var2 & 0xffff | param_2 << 0x10, in_stack_00000008, u_var2);
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1010_afde(u32 param_1, i16 param_2)

{
    u32 uVar1;
    u32        u_var2;
    u16        in_DX;
    u32       *puVar3;

    uVar1 = (param_1 + 0x138);
    u_var2 = *(uVar1 + 0x24);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
    if((in_DX | u_var2) == 0x0)
    {
        return;
    }
    puVar3 = pass1_1008_c6fa(globals->dat_1050_06e0, param_2);
    pass1_1038_4e78(puVar3, (puVar3 >> 0x10), u_var2 & 0xffff | in_DX << 0x10, puVar3);
    return;
}


u16  pass1_1010_b028(u16 param_1, u16 param_2, u32 param_3)

{
    return (param_3 + 0xc);
}

void  pass1_1010_bf1e(u32 param_1, i16 *param_2, i16 param_3, u8 *param_4, u16 param_5)

{
    u32        uVar1;
    u16        u_var2;
    u8        *puVar3;
    i16        iVar4;
    u16        uVar5;
    u32 uStack40;
    i16        iStack36;
    u16        uStack32;
    u16       *puStack26;
    u8         local_16[0x12];
    i16        iStack4;

    bad_1010_bf08(param_1, (param_1 >> 0x10), 0x1000000);
    iStack4  = param_3 + -0x1;
    *param_2 = iStack4;
    u_var2 = iStack4 * 0x18;
    mem_op_1000_179c(u_var2, param_4, 0);
    uStack40 = str_var1(param_4, u_var2);
    uStack32 = param_4 | u_var2;
    iVar4    = param_2;
    uVar5    = (param_2 >> 0x10);
    if(uStack32 == 0x0)
    {
        (iVar4 + 0x2) = 0x0;
    }
    else
    {
        pass1_1000_5586(0x4092, SEG_1020, iStack4, 0x18, u_var2, param_4);
        (iVar4 + 0x2) = uStack40;
    }
    pass1_1028_dc52((Struct92 *)str_var1(param_5, local_16), 0x1, 0x0, 0x100);
    puStack26 = *(u16 **)(iVar4 + 0x2);
    iStack36  = 0x0;
    while(true)
    {
        puVar3 = local_16;
        pass1_1028_e4ec(str_var1(param_5, puVar3));
        if((uStack32 | puVar3) == 0x0)
            break;
        uVar1    = *(puVar3 + 0x10);
        uStack32 = uStack32 | puVar3;
        if(uVar1 != 0x0)
        {
            uStack32 = (uVar1 >> 0x10);
            pass1_1008_3f62(puStack26, (uVar1 & 0xffff0000 | (uVar1 + 0x4)));
            (puStack26 + 0xc) = iStack36;
            iStack36          = iStack36 + 0x1;
            puStack26         = (puStack26 & 0xffff0000 | (puStack26 + 0x18));
        }
    }
    return;
}

void  pass1_1010_8c78(u16 *param_1, u16 param_2)

{
    param_1->field_0x0 = addr_table_1010_8ee2; // 0x8ee2;
    param_1->field_0x2 = SEG_1010;
    pass1_1010_1d80(param_1, param_2);
}


void pass1_1010_8f78(Struct490 *pstruct_arg1)

{
    u32   *pu32_var1;
    u16    u_var2;
    void **ppc_var3;
    //    Struct490 *iVar4;
    //    u16          uVar4;

    //    uVar4            = (pstruct_arg1 >> 0x10);
    //    iVar4            = (Struct490 *)pstruct_arg1;
    pstruct_arg1->field_0x0 = addr_table_1010_9254; // 0x9254;
    pstruct_arg1->field_0x2 = SEG_1010;
    pu32_var1                  = pstruct_arg1->field_0x4;
    u_var2                  = pstruct_arg1->field_0x6;
    if((u_var2 | pu32_var1) != 0x0)
    {
        ppc_var3 = *pu32_var1;
        (**ppc_var3)();
    }
    *pstruct_arg1           = addr_table_1008_380a[36]; // 0x389a
    pstruct_arg1->field_0x2 = SEG_1008;
}

void  pass1_1010_8fba(Struct411 *param_1, u16 param_2)

{
    void **ppcVar1;
    u32          u_var2;
    u16          extraout_DX;
    u16          extraout_DX_00;
    Struct411 *iVar3;
    u16          uVar3;
    u32          uStack14;
    u32          uStack10;

    uVar3   = (param_1 >> 0x10);
    iVar3   = (Struct411 *)param_1;
    ppcVar1 = (*iVar3->field_0x4 + 0x10);
    (**ppcVar1)();
    uStack10 = str_var1(extraout_DX, param_2);
    uStack14 = 0x0;
    while(true)
    {
        if(uStack10 <= uStack14)
        {
            return;
        }
        ppcVar1 = (*iVar3->field_0x4 + 0x4);
        u_var2   = uStack10;
        (**ppcVar1)();
        if((extraout_DX_00 | u_var2) != 0x0)
            break;
        uStack14 = uStack14 + 0x1;
    }
    ppcVar1 = (*iVar3->field_0x4 + 0x8);
    (**ppcVar1)();
    return;
}

void  pass1_1010_9130(u32 param_1, u8 *param_2, u16 param_3, u16 param_4, u16 param_5, u8 param_6)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    pass1_1030_1d58(*(param_1 + 0x4));
    if((param_4 | param_3) != 0x0)
    {
        uVar1 = (param_1 + 0x8);
        pass1_1010_c3c2(uVar1, (uVar1 >> 0x10), param_2,
                        str_var1(param_4, param_3), (param_4 | param_3), param_6, param_5);
        return;
    }
    *param_2 = '\0';
    return;
}

void  pass1_1010_91cc(u32 param_1)

{
    void **ppcVar1;
    u16    u_var2;
    long   lVar3;

    u_var2   = (param_1 >> 0x10);
    ppcVar1 = ((param_1 + 0x4) + 0x10);
    lVar3   = (**ppcVar1)();
    if(lVar3 != 0x0)
    {
        ppcVar1 = ((param_1 + 0x4) + 0x8);
        (**ppcVar1)();
    }
    return;
}


void  pass1_1010_9210(u32 param_1)

{
    fn_ptr_1 *ppcVar1;

    ppcVar1 = ((param_1 + 0x4) + 0xc);
    (**ppcVar1)();
    return;
}
