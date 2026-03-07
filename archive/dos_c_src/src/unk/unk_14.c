

#include "unk_14.h"

#include "address_tables/function_tables.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_20.h"
#include "structs/structs_0xx/structs_9x.h"
#include "sys_ops/sys_ops_12.h"
#include "utils.h"

#include <stdbool.h>


#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCInconsistentNamingInspection"
u16 * pass1_1008_941a(u16 *param_1, u16 param_2, u16 param_3)

{
    param_1->field_0x0 = param_2;
    param_1->field_0x2 = param_3;
    return param_1;
}


u16 * pass1_1008_9436(u16 *param_1)

{
    param_1->field_0x0 = 0x0;
    param_1->field_0x2 = 0x0;
    return param_1;
}


void  pass1_1008_944e(u16 *param_1, u16 param_2, u16 param_3)

{
    param_1->field_0x2 = param_3;
    param_1->field_0x0 = param_2;
    return;
}


BOOL16  pass1_1008_7c2a(u32 param_1, char *param_2, HFILE16 param_3)

{
    u16    uVar1;
    BOOL16 BVar2;
    u16    uVar3;

    uVar3 = (param_1 >> 0x10);
    if(param_2 != 0x0)
    {
        uVar1 = str_op_1000_3da4(param_2);
        BVar2 = write_to_file_1008_7e1c(param_1, uVar3, param_2, (param_2 >> 0x10), (long)(uVar1 + 0x1), SEG_1000);
        return BVar2;
    }
    write_to_file_1008_7e1c(param_1, uVar3, s_playerName_1050_148e + 0xc, SEG_1050, 0x1, param_3);
    return 0x1;
}


u32 * pass1_1008_80d2(u32 *param_1)

{
    param_1->field_0x0 = 0x0;
    (param_1 + 0x4) = 0x0;
    return param_1;
}


void  pass1_1008_8168(u16 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_87c8;//0x87c8;
    param_1->field_0x2 = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    return;
}


void  pass1_1008_68ea(i16 param_1, u16 param_2, u32 *param_3, u16 param_4, u16 param_5, i16 param_6)

{
    fn_ptr_1 *ppcVar1;

    if(param_6 == 0x0)
    {
        if((param_1 + 0xce) != str_var1(param_4, param_3))
        {
            if((param_1 + 0xce) != 0x0)
            {
                ppcVar1 = ((param_1 + 0xce) + 0x10);
                (**ppcVar1)();
            }
            (param_1 + 0xce) = str_var1(param_4, param_3);
            ppcVar1          = (*param_3 + 0x10);
            (**ppcVar1)();
            ppcVar1 = ((param_1 + 0xce) + 0xc);
            (**ppcVar1)();
            return;
        }
    }
    else
    {
        pass1_1008_3e0e(CONCAT13((param_2 >> 0x8), CONCAT12(param_2, param_1)));
    }
    return;
}


void  pass1_1008_6a04(u32 param_1, u16 param_2, u16 param_3)

{
    void **ppcVar1;
    u8    *pu_var2;
    u16    extraout_DX;
    u8     local_a[0x8];

    pass1_1008_57a4(str_var1(param_3, local_a), param_1 & 0xffff0000 | (param_1 + 0xd2));
    while(true)
    {
        pu_var2 = local_a;
        pass1_1008_5b12(pu_var2, param_3);
        if((extraout_DX | pu_var2) == 0x0)
            break;
        ppcVar1 = (**(u32 **)(pu_var2 + 0x4) + 0xc);
        (**ppcVar1)();
    }
    return;
}


// WARNING: Could not reconcile some variable overlaps

void  pass1_1008_6a4a(u32 param_1, i16 param_2, u16 param_3, i16 param_4, u16 param_5)

{
    void **ppcVar1;
    i16        iVar2;
    u8        *puVar3;
    u16        extraout_DX;
    u16        extraout_DX_00;
    u8         local_e[0x4];
    u32 uStack10;
    u32 u_stack6;

    if(param_4 == 0x2)
    {
        iVar2 = param_1;
        pass1_1008_57a4(str_var1(param_5, local_e), param_1 & 0xffff0000 | (iVar2 + 0xd2));
        do
        {
            puVar3 = local_e;
            pass1_1008_5b12(puVar3, param_5);
            u_stack6 = str_var1(extraout_DX, puVar3);
            if((extraout_DX | puVar3) == 0x0)
                break;
        } while((puVar3 + 0x8) != param_2);
        if(u_stack6 != 0x0)
        {
            ppcVar1 = ((iVar2 + 0xd2) + 0xc);
            (**ppcVar1)();
            uStack10      = 0x0;
            u_stack6 = local_e;
            pass1_1008_5b12();
            if((extraout_DX_00 | u_stack6) != 0x0)
            {
                ppcVar1       = (**(u32 **)(u_stack6 + 0x4) + 0x10);
                u_stack6 = extraout_DX_00;
                (**ppcVar1)();
                (iVar2 + 0xce) = (u_stack6 + 0x4);
                return;
            }
            (iVar2 + 0xce) = 0x0;
        }
    }
    return;
}


void  pass1_1008_6b02(u32 param_1)

{
    void **ppcVar1;
    i16    iVar2;
    u16    uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(((iVar2 + 0xd0) | (iVar2 + 0xce)) != 0x0)
    {
        ppcVar1 = ((iVar2 + 0xce) + 0x6c);
        (**ppcVar1)();
    }
    return;
}


void  pass1_1008_6b2e(u32 param_1)

{
    void **ppcVar1;
    i16    iVar2;
    u16    uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if(((iVar2 + 0xd0) | (iVar2 + 0xce)) != 0x0)
    {
        ppcVar1 = ((iVar2 + 0xce) + 0x68);
        (**ppcVar1)();
    }
    return;
}


void  pass1_1008_6c90(u16 *param_1)

{
    pass1_1008_3e38(param_1);
    pass1_1008_3e38((param_1 & 0xffff0000 | (param_1 + 0x6)));
    return;
}


u32 * pass1_1008_6cb4(u32 *param_1, u32 *param_2, u16 param_3, u32 *param_4, u16 param_5)

{
    Struct362 *iVar1;
    u16          uVar1;

    uVar1            = (param_1 >> 0x10);
    iVar1 = (Struct362 *) param_1;
    param_1->field_0x0 = *param_4;
    iVar1->field_0x4 = (param_4 + 0x1);
    iVar1->field_0x6 = *param_2;
    iVar1->field_0xa = (param_2 + 0x1);
    return param_1;
}


void  pass1_1008_6cec(u16 *param_1, u16 param_2, u32 param_3, u16 param_4, u32 param_5)

{
    pass1_1008_3e76(param_1, param_4, param_5, (param_5 >> 0x10));
    pass1_1008_3e76((param_1 & 0xffff0000 | (param_1 + 0x6)), param_2, param_3, (param_3 >> 0x10));
    return;
}


void  pass1_1008_6d18(u16 *param_1, u16 *param_2, u16 *param_3)

{
    pass1_1008_3f62(param_1, param_3);
    pass1_1008_3f62((param_1 & 0xffff0000 | (param_1 + 0x6)), param_2);
    return;
}


void  pass1_1008_6d3e(u16 *param_1, u16 *param_2, u16 *param_3)

{
    pass1_1008_3f62(param_3, param_1);
    pass1_1008_3f62(param_2, (param_1 & 0xffff0000 | (param_1 + 0x6)));
    return;
}


void  pass1_1008_6d64(u16 *param_1, u16 *param_2)

{
    pass1_1008_3f62(param_2, param_1);
    pass1_1008_3ee2(param_2, (param_1 & 0xffff0000 | (param_1 + 0x6)));
    return;
}


u16 * pass1_1008_72a8(u16 *param_1, u16 param_2)

{
    param_1->field_0x0 = param_2;
    return param_1;
}


u16  switch_1008_72bc(u16 param_1, u16 param_2, u16 param_3)

{
    if(globals->dat_1050_0312 < 0x2)
    {
        switch(param_3)
        {
        case 0x1:
            param_3 = 0x1;
            break;
        case 0x2:
            param_3 = 0x2;
            break;
        case 0x3:
            param_3 = 0x3;
            break;
        case 0x4:
            param_3 = 0x5;
            break;
        case 0x5:
            param_3 = 0x4;
            break;
        case 0x6:
            param_3 = 0x6;
            break;
        case 0x7:
            param_3 = 0x7;
            break;
        case 0x8:
            param_3 = 0x8;
            break;
        case 0x9:
            param_3 = 0x9;
            break;
        case 0xa:
            param_3 = 0xa;
            break;
        case 0xb:
            param_3 = 0xb;
            break;
        case 0xc:
            param_3 = 0xc;
            break;
        case 0xd:
            param_3 = 0xd;
            break;
        case 0xe:
            param_3 = 0xe;
            break;
        case 0xf:
            param_3 = 0xf;
            break;
        case 0x10:
            return 0x10;
        case 0x11:
            return 0x11;
        case 0x12:
            return 0x12;
        case 0x13:
            return 0x13;
        default:
            return 0x0;
        }
    }
    return param_3;
}


u16  pass1_1008_738c(u16 param_1, u16 param_2, u16 param_3)

{
    u16 uVar1;

    switch(param_3)
    {
    case 0x1:
        uVar1 = 0x3;
        break;
    case 0x2:
        uVar1 = 0x4;
        break;
    case 0x3:
        return 0x5;
    case 0x4:
        return 0x6;
    case 0x5:
        return 0x8;
    case 0x6:
        return 0x9;
    case 0x7:
        return 0xa;
    default:
        uVar1 = 0x0;
    }
    return uVar1;
}


i16  switch_1008_73ea(u16 param_1, u16 param_2, i16 param_3)

{
    i16 iStack4;

    iStack4 = param_3;
    if(globals->dat_1050_0312 < 0x2)
    {
        switch(param_3)
        {
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
            iStack4 = param_3 + 0x3;
            break;
        case 0x3d:
        case 0x3e:
            iStack4 = param_3 + 0x4;
            break;
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0x65:
        case 0x66:
            iStack4 = param_3 + 0x8;
            break;
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x6e:
        case 0x6f:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x7e:
        case 0x7f:
        case 0x80:
            iStack4 = param_3 + 0x9;
        }
    }
    return iStack4;
}

long  pass1_1008_57f0(u32 param_1, i16 param_2, u16 param_3)

{
    bool bVar1;
    long lVar2;
    i16  iStack12;
    u8   local_a[0x8];

    pass1_1008_5784(str_var1(param_3, local_a), param_1);
    iStack12 = 0x0;
    do
    {
        lVar2 = pass1_1008_5b12(local_a, param_3);
        if(lVar2 == 0x0)
        {
            return 0x0;
        }
        bVar1    = iStack12 != param_2;
        iStack12 = iStack12 + 0x1;
    } while(bVar1);
    return lVar2;
}


void  pass1_1008_5830(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    u32  uVar4;
    u32 *puVar5;
    i16         iVar6;
    i16         iVar7;
    u16         uVar8;
    u16         uVar9;

    while(true)
    {
        uVar8 = (param_1 >> 0x10);
        iVar6 = param_1;
        if((iVar6 + 0x4) == 0x0)
            break;
        if((iVar6 + 0xa) != 0x0)
        {
            uVar4  = (iVar6 + 0x4);
            uVar9  = (uVar4 >> 0x10);
            iVar7  = uVar4;
            puVar1 = (iVar7 + 0x8);
            u_var2  = (iVar7 + 0xa);
            if((u_var2 | puVar1) != 0x0)
            {
                ppcVar3 = *puVar1;
                (**ppcVar3)();
            }
        }
        puVar5        = (iVar6 + 0x4);
        (iVar6 + 0x4) = (puVar5 + 0x4);
        if(puVar5 != 0x0)
        {
            ppcVar3 = *puVar5;
            (**ppcVar3)();
        }
    }
    (iVar6 + 0x8) = 0x0;
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1008_58a6(u32 param_1, u32 param_2)

{
    i16        *pi_var1;
    u16         u_var2;
    u16         uVar3;
    i16         iVar4;
    u16         uVar5;
    u16         uVar6;
    Struct99 *paStack6;

    paStack6 = pass1_1000_07fc(SEG_1000, globals->u32_ptr_1050_029c);
    uVar3 = (paStack6 >> 0x10);
    u_var2    = paStack6;
    if((uVar3 | u_var2) == 0x0)
    {
        paStack6 = (Struct99 *)0x0;
    }
    else
    {
        paStack6->field_0x0 = addr_table_1008_380a[36]; // 0x389a
        (u_var2 + 0x2)       = SEG_1008;
        (u_var2 + 0x4)       = 0x0;
        (u_var2 + 0x8)       = 0x0;
        paStack6->field_0x0 = addr_table_1008_5bc0;//0x5bc0;
        (u_var2 + 0x2)       = SEG_1008;
    }
    if(paStack6 == (Struct99 *)0x0)
    {
        return;
    }
    uVar5                         = (paStack6 >> 0x10);
    *(paStack6 + 0x8)             = param_2;
    uVar6                         = (param_1 >> 0x10);
    iVar4                         = param_1;
    (paStack6 + 0x4)              = (iVar4 + 0x4);
    *(Struct99 **)(iVar4 + 0x4) = paStack6;
    pi_var1                        = (iVar4 + 0x8);
    *pi_var1                       = *pi_var1 + 0x1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1008_593c(u32 *param_1, u32 param_2)

{
    i16        *pi_var1;
    void **ppcVar2;
    u16         uVar3;
    u16         uVar4;
    i16         iVar5;
    u16         uVar6;
    u16         uVar7;
    Struct99 *paStack6;

    uVar6 = (param_1 >> 0x10);
    iVar5 = param_1;
    if((iVar5 + 0x8) == 0x0)
    {
        ppcVar2 = (*param_1 + 0x4);
        (**ppcVar2)();
        return;
    }
    paStack6 = pass1_1000_07fc(SEG_1000, globals->u32_ptr_1050_029c);
    uVar4 = (paStack6 >> 0x10);
    uVar3    = paStack6;
    if((uVar4 | uVar3) == 0x0)
    {
        paStack6 = (Struct99 *)0x0;
    }
    else
    {
        paStack6->field_0x0 = addr_table_1008_380a[36]; // 0x389a
        (uVar3 + 0x2)       = SEG_1008;
        (uVar3 + 0x4)       = 0x0;
        (uVar3 + 0x8)       = 0x0;
        paStack6->field_0x0 = addr_table_1008_5bc0;//0x5bc0;
        (uVar3 + 0x2)       = SEG_1008;
    }
    if(paStack6 == (Struct99 *)0x0)
    {
        return;
    }
    *(paStack6 + 0x8) = param_2;
    do
    {
        param_1 = (param_1 + 0x4);
        uVar7   = (param_1 >> 0x10);
    } while((param_1 + 0x4) != 0x0);
    *(Struct99 **)(param_1 + 0x4) = paStack6;
    pi_var1                          = (iVar5 + 0x8);
    *pi_var1                         = *pi_var1 + 0x1;
    return;
}


void  pass1_1008_59f4(u32 param_1, long param_2)

{
    i16        *pi_var1;
    u32 *pu_var2;
    u16         uVar3;
    u32 *puVar4;
    void **ppcVar5;
    u32 *puVar6;
    u16         uVar7;
    i16         iVar8;
    u16         uVar9;
    u16         uVar10;
    u16         uVar11;
    u16         uVar12;
    u16         uStack10;
    u32 *pu_stack6;

    pu_stack6 = 0x0;
    uVar9    = (param_1 >> 0x10);
    puVar6   = pu_stack6;
    puVar4   = param_1;
    do
    {
        pu_stack6 = puVar6;
        uVar10   = (puVar4 >> 0x10);
        iVar8    = puVar4;
        puVar4   = (iVar8 + 0x4);
        uStack10 = puVar4;
        uVar11   = (puVar4 >> 0x10);
        if(((iVar8 + 0x6) | uStack10) == 0x0)
            break;
        puVar6 = puVar4;
    } while((uStack10 + 0x8) != param_2);
    if(puVar4 != 0x0)
    {
        if(pu_stack6 == 0x0)
        {
            uVar10   = (uStack10 + 0x4);
            uVar7    = (uStack10 + 0x6);
            pu_stack6 = param_1;
        }
        else
        {
            uVar10 = (uStack10 + 0x4);
            uVar7  = (uStack10 + 0x6);
        }
        uVar12           = (pu_stack6 >> 0x10);
        (pu_stack6 + 0x4) = uVar10;
        (pu_stack6 + 0x6) = uVar7;
        if((param_1 + 0xa) != 0x0)
        {
            pu_var2 = (uStack10 + 0x8);
            uVar3  = (uStack10 + 0xa);
            if((uVar3 | pu_var2) != 0x0)
            {
                ppcVar5 = *pu_var2;
                (**ppcVar5)();
            }
        }
        if(puVar4 != 0x0)
        {
            ppcVar5 = *puVar4;
            (**ppcVar5)();
        }
        pi_var1  = (param_1 + 0x8);
        *pi_var1 = *pi_var1 + -0x1;
        return;
    }
    return;
}


void  pass1_1008_5ab8(u32 param_1)

{
    i16        *pi_var1;
    void **ppcVar2;
    u32 *puVar3;
    i16         iVar4;
    u16         uVar5;
    u16         uVar6;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if((iVar4 + 0x4) == 0x0)
    {
        return;
    }
    puVar3        = (iVar4 + 0x4);
    uVar6         = (puVar3 >> 0x10);
    (iVar4 + 0x4) = (puVar3 + 0x4);
    if((uVar6 | puVar3) != 0x0)
    {
        ppcVar2 = *puVar3;
        (**ppcVar2)();
    }
    pi_var1  = (iVar4 + 0x8);
    *pi_var1 = *pi_var1 + -0x1;
    return;
}


void  pass1_1008_5b12(long *param_1)

{
    u32 uVar1;
    i16        iVar2;
    i16        iVar3;
    u16        uVar4;
    u16        uVar5;

    if((*param_1 != 0x0) && ((*param_1 + 0x8) != 0x0))
    {
        uVar4 = (param_1 >> 0x10);
        iVar2 = param_1;
        if((iVar2 + 0x4) == 0x0)
        {
            uVar5 = (*param_1 >> 0x10);
            iVar3 = *param_1;
        }
        else
        {
            uVar1 = (iVar2 + 0x4);
            uVar5 = (uVar1 >> 0x10);
            iVar3 = uVar1;
        }
        (iVar2 + 0x4) = (iVar3 + 0x4);
        if((iVar2 + 0x4) != 0x0)
        {
            return;
        }
    }
    return;
}


u16 * pass1_1008_5b6e(u16 *param_1, u8 param_2) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (param_1)[0x1] = SEG_1008;
    if ((param_2 & 0x1) != 0x0) {
        pass1_1000_093a(param_1, uVar1, SEG_1000);
    }
    return param_1;
}

void  pass1_1008_5c34(u16 *param_1) {
    u16 unaff_SS;

    param_1->field_0x0 = addr_table_1008_5fc8;//0x5fc8;
    param_1->field_0x2 = SEG_1008;
    globals->_PTR_LOOP_1050_02a0 = 0x0;
    pass1_1010_1d80(param_1, unaff_SS);
    return;
}


void pass1_1008_612e(i16 param_1, i16 param_2, u16 param_3)

{
    u16  uVar1;
    u16  u_var2;
    long lVar3;
    i16  iVar4;
    i16  iStack18;
    i16  iStack16;

    uVar1 = pass1_1000_4d24();
    u_var2 = (param_2 - param_1) + 0x1;
    if((u_var2 >> 0xf | u_var2) == 0x0)
    {
        return;
    }
    iStack16 = 0x1;
    iStack18 = param_1;
    do
    {
        if(param_2 < iStack18)
        {
            return;
        }
        lVar3 = (long)iStack16 * (long)(0x7fff / (sqword)(long)u_var2);
        iVar4 = (lVar3 >> 0x10);
        if(uVar1 >> 0xf <= iVar4)
        {
            if(uVar1 >> 0xf < iVar4)
            {
                return;
            }
            if(uVar1 <= lVar3)
            {
                return;
            }
        }
        iStack18 = iStack18 + 0x1;
        iStack16 = iStack16 + 0x1;
    } while(true);
}


void  pass1_1008_64a2(u16 *param_1)

{
    u16       uVar1;
    fn_ptr_1 *ppcVar2;

    uVar1 = (param_1 + 0x2);
    if((uVar1 | *param_1) != 0x0)
    {
        ppcVar2 = *param_1;
        (**ppcVar2)();
    }
    return;
}


u32  pass1_1008_4b5e(u32 *param_1)

{
    void **ppcVar1;
    i16    iVar2;
    i16    iVar3;
    u16    uVar4;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    if((iVar3 + 0x1e) == 0x0)
    {
        ppcVar1 = (*param_1 + 0x8);
        iVar2   = (**ppcVar1)();
        if(iVar2 == 0x0)
        {
            return 0x0;
        }
    }
    return str_var1((iVar3 + 0x6), (iVar3 + 0x4));
}


u16  pass1_1008_4d26(Struct650 *param_1, u16 *param_2, i16 param_3)

{
    i16         *pi_var1;
    u16          u_var2;
    long         lVar3;
    Struct650 *iVar5;
    Struct649 *iVar4;
    u16          uVar4;

    uVar4 = (param_1 >> 0x10);
    iVar5 = (Struct650 *)param_1;
    if(((iVar5->field_0x4 != 0x0) && (-0x1 < param_3)) && (pi_var1 = &iVar5->field_0xc, *pi_var1 != param_3 && param_3 <= *pi_var1))
    {
        u_var2                         = (param_2 + 0x2);
        lVar3                         = iVar5->field_0x4;
        uVar4                         = (lVar3 >> 0x10);
        iVar4                         = (Struct649 *)lVar3;
        (iVar4 + param_3 * 0x4)       = *param_2;
        (iVar4 + param_3 * 0x4 + 0x2) = u_var2;
        return 0x1;
    }
    return 0x0;
}


u32  pass1_1008_4d72(u32 param_1)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    return str_var1((param_1 + 0x6), (param_1 + 0x4));
}


void  pass1_1008_50c2(Struct110 *param_1, u32 param_2, u32 param_3, u16 *param_4, u32 param_5)

{
    Struct110 *iVar1;
    u16          uVar1;

    param_1->field_0x0 = *param_4;
    uVar1              = (param_1 >> 0x10);
    iVar1              = (Struct110 *)param_1;
    iVar1->field_0x2   = (param_4 + 0x2);
    iVar1->field_0x4   = param_3;
    iVar1->field_0x8   = param_2;
    iVar1->field_0xc   = param_5;
    iVar1->field_0x10  = 0x0;
    pass1_1008_52fc((u16 *)(param_1 & 0xffff | uVar1 << 0x10));
    return;
}


void  pass1_1008_5134(u32 param_1)

{
    u16 *puVar1;
    i16  iVar2;
    u16  uVar3;
    long lVar4;
    i16  iVar5;
    i16  iVar6;
    u16  uVar7;
    i16  iStack16;
    long lStack14;
    u32  uStack10;

    uVar7          = (param_1 >> 0x10);
    iVar6          = param_1;
    lVar4          = (iVar6 + 0x4) * (iVar6 + 0x8);
    lVar4          = mem_op_1000_0a48(0x1, lVar4, (lVar4 >> 0x10), globals->dat_1050_5f2c, SEG_1000);
    uVar3          = (lVar4 >> 0x10);
    (iVar6 + 0x10) = lVar4;
    (iVar6 + 0x12) = uVar3;
    if((uVar3 | (iVar6 + 0x10)) == 0x0)
    {
        return;
    }
    iVar5    = (iVar6 + 0x8);
    iVar2    = (iVar6 + 0xa);
    lVar4    = str_var1(iVar2 - (iVar5 == 0x0), iVar5 + -0x1) * (iVar6 + 0x4);
    puVar1   = (iVar6 + 0x10);
    uVar3    = lVar4;
    uStack10 = str_var1(((lVar4 >> 0x10) + CARRY2(uVar3, *puVar1)) * 0x100 + (iVar6 + 0x12), uVar3 + *puVar1);
    lStack14 = str_var1(iVar2, iVar5);
    iStack16 = (iVar6 + 0x2);
    while(lStack14 != 0x0)
    {
        iVar2 = iStack16 + 0x1;
        iVar5 = iStack16 >> 0xf;
        pass1_1008_4544(*(iVar6 + 0xc));
        pass1_1000_48a8(uStack10, str_var1(iVar5, iStack16), (iVar6 + 0x4));
        iVar5    = (iVar6 + 0x4);
        uVar3    = -iVar5;
        uStack10 = str_var1((uStack10 >> 0x10) + (CARRY2(uStack10, uVar3) - ((iVar6 + 0x6) + (iVar5 != 0x0))) * 0x100, uStack10 + uVar3);
        iStack16 = iVar2;
        lStack14 = lStack14 + -0x1;
    }
    return;
}


void  pass1_1008_5236(Struct109 *param_1)

{
    u16         *puVar1;
    i16          iVar2;
    u16          uVar3;
    long         lVar4;
    i16          iVar5;
    Struct109 *iVar6;
    u16          uVar6;
    bool         bVar7;
    i16          iStack12;
    long         lStack10;
    u16          u_stack6;
    i16          iStack4;

    uVar6    = (param_1 >> 0x10);
    iVar6    = (Struct109 *)param_1;
    iVar5    = iVar6->field_0x8;
    iVar2    = iVar6->field_0xa;
    lVar4    = str_var1(iVar2 - (iVar5 == 0x0), iVar5 + -0x1) * &iVar6->field_0x4;
    puVar1   = &iVar6->field_0x10;
    uVar3    = lVar4;
    u_stack6  = uVar3 + *puVar1;
    iStack4  = ((lVar4 >> 0x10) + CARRY2(uVar3, *puVar1)) * 0x100 + iVar6->field_0x12;
    lStack10 = str_var1(iVar2, iVar5);
    iStack12 = iVar6->field_0x2;
    while(lStack10 != 0x0)
    {
        iVar2 = iStack12 + 0x1;
        iVar5 = iStack12 >> 0xf;
        pass1_1008_4544(iVar6->field_0xc);
        pass1_1000_48a8(
          str_var1(iVar5, iStack12), str_var1(iStack4, u_stack6), &iVar6->field_0x4);
        iVar5    = &iVar6->field_0x4;
        uVar3    = -iVar5;
        bVar7    = CARRY2(u_stack6, uVar3);
        u_stack6  = u_stack6 + uVar3;
        iStack4  = iStack4 + (bVar7 - (iVar6->field_0x6 + (iVar5 != 0x0))) * 0x100;
        iStack12 = iVar2;
        lStack10 = lStack10 + -0x1;
    }
    return;
}


void  pass1_1008_52fc(Struct111 *param_1)

{
    u16         *puVar1;
    u16          u_var2;
    u16          uVar3;
    long         lVar4;
    u16          uVar5;
    i16          iVar6;
    i16          iVar7;
    Struct111 *iVar8;
    u16          uVar8;
    u32          uVar9;
    u16          uStack14;
    i16          iStack12;

    uVar8  = (param_1 >> 0x10);
    iVar8  = (Struct111 *)param_1;
    uVar9  = pass1_1008_4772(iVar8->field_0xc);
    uVar5  = (uVar9 >> 0x10);
    iVar7  = uVar9;
    iVar6  = (iVar7 + 0x4);
    uVar3  = iVar6 - 0x1;
    iVar6  = (iVar7 + 0x6) - (iVar6 == 0x0);
    lVar4  = (iVar7 + 0x8) + -0x1;
    u_var2  = *param_1;
    puVar1 = &iVar8->field_0x4;
    iVar7  = (u_var2 >> 0xf) + iVar8->field_0x6 + CARRY2(u_var2, *puVar1);
    if((iVar6 <= iVar7) && ((iVar6 < iVar7 || (uVar3 < u_var2 + *puVar1))))
    {
        iVar8->field_0x4 = uVar3 - u_var2;
        iVar8->field_0x6 = (iVar6 - (u_var2 >> 0xf)) - (uVar3 < u_var2);
    }
    u_var2    = iVar8->field_0x2;
    puVar1   = &iVar8->field_0x8;
    iVar6    = (u_var2 >> 0xf) + iVar8->field_0xa + CARRY2(u_var2, *puVar1);
    iStack12 = (lVar4 >> 0x10);
    if((iStack12 <= iVar6) && ((uStack14 = lVar4, iStack12 < iVar6 || (uStack14 < u_var2 + *puVar1))))
    {
        iVar8->field_0x8 = uStack14 - u_var2;
        iVar8->field_0xa = (iStack12 - (u_var2 >> 0xf)) - (uStack14 < u_var2);
    }
    return;
}


u32 * pass1_1008_5394(u32 *param_1)

{
    param_1->field_0x0 = 0x0;
    return param_1;
}


void  pass1_1008_53aa(void)

{
    return;
}


void  pass1_1008_5784(u32 *param_1, u32 param_2)

{
    param_1->field_0x0 = param_2;
    (param_1 + 0x4) = 0x0;
    return;
}


void  pass1_1008_57a4(u32 *param_1, u32 param_2)

{
    param_1->field_0x0 = param_2;
    (param_1 + 0x4) = 0x0;
    return;
}


void  pass1_1008_57c4(u16 *param_1) {
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = addr_table_1008_5bc0[1]//0x5bc4;
    param_1->field_0x2 = SEG_1008;
    pass1_1008_5830(param_1 & 0xffff | uVar1 << 0x10);
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    param_1->field_0x2 = SEG_1008;
    return;
}


void  pass1_1008_3e0e(u32 param_1)

{
    void **ppcVar1;
    u16    u_var2;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x4) != 0x0)
    {
        ppcVar1 = ((param_1 + 0x4) + 0x4);
        (**ppcVar1)();
    }
    return;
}


u16 * pass1_1008_3e38(u16 *param_1)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = 0x0;
    param_1->field_0x2 = 0x0;
    (param_1 + 0x4) = 0x0;
    return param_1;
}


u16 * pass1_1008_3e54(u16 *param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = param_4;
    param_1->field_0x2 = param_3;
    (param_1 + 0x4) = param_2;
    return param_1;
}


void  pass1_1008_3e76(u16 *param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    param_1->field_0x0 = param_4;
    param_1->field_0x2 = param_3;
    (param_1 + 0x4) = param_2;
    return;
}


void  pass1_1008_3e94(u16 *param_1, u16 *param_2, u16 *param_3)

{
    *param_3 = *param_1;
    *param_2 = (param_1 + 0x2);
    return;
}


void  pass1_1008_3eb4(u16 *param_1, u16 *param_2, u16 *param_3, u16 *param_4)

{
    u16 uVar1;

    *param_4 = *param_1;
    uVar1    = (param_1 >> 0x10);
    *param_3 = (param_1 + 0x2);
    *param_2 = (param_1 + 0x4);
    return;
}


void  pass1_1008_3ee2(i16 *param_1, i16 *param_2)

{
    i16 iVar1;
    i16 iVar2;
    u16 uVar3;
    u16 uVar4;

    iVar1 = *param_2 - *param_1;
    if(iVar1 < 0x0)
    {
        iVar1 = -iVar1;
    }
    param_1->field_0x0 = iVar1 + 0x1;
    uVar3 = (param_2 >> 0x10);
    uVar4    = (param_1 >> 0x10);
    iVar2    = param_1;
    iVar1    = (param_2 + 0x2) - (iVar2 + 0x2);
    if(iVar1 < 0x0)
    {
        iVar1 = -iVar1;
    }
    (iVar2 + 0x2) = iVar1 + 0x1;
    iVar1         = (param_2 + 0x4) - (iVar2 + 0x4);
    if(iVar1 < 0x0)
    {
        iVar1 = -iVar1;
    }
    (iVar2 + 0x4) = iVar1 + 0x1;
    return;
}


void  pass1_1008_3f32(i16 *param_1, i16 *param_2)

{
    i16 *pi_var1;
    u16  u_var2;
    u16  uVar3;

    param_1->field_0x0 = *param_1 + *param_2;
    u_var2 = (param_2 >> 0x10);
    uVar3    = (param_1 >> 0x10);
    pi_var1   = (param_1 + 0x2);
    *pi_var1  = *pi_var1 + (param_2 + 0x2);
    pi_var1   = (param_1 + 0x4);
    *pi_var1  = *pi_var1 + (param_2 + 0x4);
    return;
}


void  pass1_1008_3f62(u16 *param_1, u16 *param_2)

{
    u16 uVar1;
    u16 u_var2;

    param_1->field_0x0 = *param_2;
    uVar1 = (param_2 >> 0x10);
    u_var2           = (param_1 >> 0x10);
    param_1->field_0x2 = (param_2 + 0x2);
    (param_1 + 0x4) = (param_2 + 0x4);
    return;
}


void  pass1_1008_431c(u32 param_1, u8 param_2)

{
    u32       *puVar1;
    u32 u_var2;
    bool       bVar3;
    u32        uVar4;
    i16        iVar5;
    u16        uVar6;
    u32 u_stack6;

    uVar6 = (param_1 >> 0x10);
    iVar5 = param_1;
    if((iVar5 + 0x6) == 0x0)
    {
        pass1_1008_47cc((Struct76 *)(param_1 & 0xffff | uVar6 << 0x10));
    }
    if(((iVar5 + 0x8) | (iVar5 + 0x6)) == 0x0)
    {
        bVar3 = false;
    }
    else
    {
        if(((iVar5 + 0xc) | (iVar5 + 0xa)) == 0x0)
        {
            pass1_1008_4834((Struct76 *)(param_1 & 0xffff | uVar6 << 0x10));
        }
        bVar3 = true;
    }
    if(bVar3)
    {
        if(((iVar5 + 0x16) | (iVar5 + 0x14)) == 0x0)
        {
            return;
        }
        u_stack6 = 0x0;
        while(true)
        {
            u_var2  = (iVar5 + 0x10);
            puVar1 = (u_var2 + 0x8);
            if(*puVar1 == u_stack6 || (long)*puVar1 < (long)u_stack6)
                break;
            uVar4 = u_stack6;
            pass1_1008_4544(param_1);
            u_var2 = (iVar5 + 0x10);
            pass1_1000_4906((Struct20 *)(uVar4 & 0xffff | u_stack6 << 0x10), param_2, (u_var2 + 0x4));
            u_stack6 = u_stack6 + 0x1;
        }
    }
    return;
}


u32  pass1_1008_43cc(u32 param_1)

{
    bool bVar1;
    i16  iVar2;
    u16  uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0x6) == 0x0)
    {
        pass1_1008_47cc((Struct76 *)(param_1 & 0xffff | uVar3 << 0x10));
    }
    if((iVar2 + 0x6) == 0x0)
    {
        bVar1 = false;
    }
    else
    {
        if((iVar2 + 0xa) == 0x0)
        {
            pass1_1008_4834((Struct76 *)(param_1 & 0xffff | uVar3 << 0x10));
        }
        bVar1 = true;
    }
    if(!bVar1)
    {
        return 0x0;
    }
    return str_var1((iVar2 + 0x16), (iVar2 + 0x14));
}


u32  pass1_1008_4426(u32 param_1)

{
    bool bVar1;
    i16  iVar2;
    u16  uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0x6) == 0x0)
    {
        pass1_1008_47cc((Struct76 *)(param_1 & 0xffff | uVar3 << 0x10));
    }
    if((iVar2 + 0x6) == 0x0)
    {
        bVar1 = false;
    }
    else
    {
        if((iVar2 + 0xa) == 0x0)
        {
            pass1_1008_4834((Struct76 *)(param_1 & 0xffff | uVar3 << 0x10));
        }
        bVar1 = true;
    }
    if(!bVar1)
    {
        return 0x0;
    }
    return str_var1((iVar2 + 0xc), (iVar2 + 0xa));
}


// WARNING: Could not reconcile some variable overlaps

void  pass1_1008_4480(u32 param_1, u16 *param_2, Struct76 *param_3, u16 param_4)

{
    i16   iVar1;
    i16   iVar2;
    i16   iVar3;
    u16   uVar4;
    u16   uVar5;
    u32   uVar6;
    i16   iStack26;
    char *pcStack24;
    char *pcStack20;
    i16   iStack16;
    i16   local_6;
    u8    local_4[0x2];

    pass1_1008_3e94(param_2, str_var1(param_4, &local_6), str_var1(param_4, local_4));
    uVar6 = pass1_1008_4772(param_3);
    uVar4 = (uVar6 >> 0x10);
    iVar1 = (uVar6 + 0x4);
    iVar2 = (uVar6 + 0x8);
    for(iStack16 = 0x0; iStack16 < iVar2; iStack16 = iStack16 + 0x1)
    {
        uVar5   = local_6 >> 0xf;
        iVar3   = local_6;
        local_6 = local_6 + 0x1;
        pass1_1008_4544(param_1);
        pcStack20 = str_var1(uVar5, iVar3);
        uVar6     = SEXT24(iStack16);
        pass1_1008_4544(param_3);
        pcStack24 = (uVar6 & 0xffff | uVar5 << 0x10);
        iStack26  = iVar1;
        while(iStack26 != 0x0)
        {
            if(*pcStack24 != -0x1)
            {
                *pcStack20 = *pcStack24;
            }
            pcStack24 = str_var1((pcStack24 >> 0x10) + (-(0xfffe < pcStack24) & 0x6c), pcStack24 + 0x1);
            pcStack20 = str_var1((pcStack20 >> 0x10) + (-(0xfffe < pcStack20) & 0x6c), pcStack20 + 0x1);
            iStack26  = iStack26 + -0x1;
        }
    }
    return;
}


void  pass1_1008_4544(u32 param_1)

{
    bool bVar1;
    i16  iVar2;
    u16  uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar2 = param_1;
    if((iVar2 + 0x6) == 0x0)
    {
        pass1_1008_47cc((Struct76 *)(param_1 & 0xffff | uVar3 << 0x10));
    }
    if((iVar2 + 0x6) == 0x0)
    {
        bVar1 = false;
    }
    else
    {
        if((iVar2 + 0xa) == 0x0)
        {
            pass1_1008_4834((Struct76 *)(param_1 & 0xffff | uVar3 << 0x10));
        }
        bVar1 = true;
    }
    if(!bVar1)
    {
        return;
    }
    return;
}


u32  pass1_1008_4772(Struct76 *param_1)

{
    bool        bVar1;
    Struct76 *iVar2;
    u16         u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar2 = (Struct76 *)param_1;
    if(&iVar2->field_0x6 == 0x0)
    {
        pass1_1008_47cc((Struct76 *)(param_1 & 0xffff | u_var2 << 0x10));
    }
    if(&iVar2->field_0x6 == 0x0)
    {
        bVar1 = false;
    }
    else
    {
        if((&iVar2->field_0x8 + 0x2) == 0x0)
        {
            pass1_1008_4834((Struct76 *)(param_1 & 0xffff | u_var2 << 0x10));
        }
        bVar1 = true;
    }
    if(!bVar1)
    {
        return 0x0;
    }
    return str_var1(iVar2->field_0x12, (&iVar2->field_0xe + 0x2));
}


void  pass1_1008_47cc(Struct76 *param_1)

{
    u32        uVar1;
    u32 u_var2;
    u16        uVar3;
    i16        iVar5;
    i16        iVar6;
    u16        uVar7;
    u16        uVar8;
    u32        uStack14;
    i16        iVar4;

    uVar7 = (param_1 >> 0x10);
    iVar5 = param_1;
    if((iVar5 + 0x6) != 0x0)
    {
        uVar1           = *(iVar5 + 0x6);
        iVar6           = (iVar5 + 0x8);
        iVar4           = uVar1;
        uVar3           = iVar4 + 0xe;
        *(iVar5 + 0x10) = uVar1 & 0xffff0000 | uVar3;
        (iVar5 + 0x14)  = iVar4 + 0x436;
        (iVar5 + 0x16)  = iVar6 + (-(0xfbd7 < uVar3) & 0x6c);
        u_var2           = (iVar5 + 0x10);
        uVar8           = (u_var2 >> 0x10);
        iVar6           = u_var2;
        uStack14        = (iVar6 + 0xe);
        (iVar5 + 0x18)  = (long)(uStack14 * (iVar6 + 0x4) + 0x1f) / 0x20 << 0x2;
    }
    return;
}


u16  pass1_1008_48aa(u32 param_1)

{
    return (param_1 + 0xe);
}


void  pass1_1008_3714(u32 param_1)

{
    pass1_1008_3e0e(param_1);
    return;
}


u32  pass1_1008_372c(i16 param_1, u16 param_2)

{
    return str_var1(param_2, param_1 + 0xa);
}


void  pass1_1008_373c(void)

{
    return;
}


void  pass1_1008_3740(void)

{
    return;
}


void  pass1_1008_3744(void)

{
    return;
}


void  pass1_1008_3748(void)

{
    return;
}


void  pass1_1008_374c(void)

{
    return;
}


void  pass1_1008_3750(void)

{
    return;
}


void  pass1_1008_3754(void)

{
    return;
}


u16  pass1_1008_3758(void)

{
    return 0x1;
}


void  pass1_1008_375e(void)

{
    return;
}


void  pass1_1008_3762(void)

{
    return;
}


void  pass1_1008_3766(void)

{
    return;
}


void  pass1_1008_377a(void)

{
    return;
}


u16 * pass1_1008_392e(u16 *param_1, u16 param_2) {
    i16 iVar1;
    u16 u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar1 = param_1;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_3aa0[2];//0x3aa8;
    (iVar1 + 0x2) = SEG_1008;
    (iVar1 + 0x4) = param_2;
    param_1->field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    (iVar1 + 0x2) = SEG_1008;
    param_1->field_0x0 = addr_table_1008_3aa0;//0x3aa0;
    (iVar1 + 0x2) = SEG_1008;
    return param_1;
}


void  pass1_1008_397a(u16 *param_1) {
    Struct452 *iVar1;
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    iVar1 = (Struct452 *) param_1;
    param_1->field_0x0 = addr_table_1008_3aa0; //0x3aa0;
    iVar1->field_0x2 = SEG_1008;
    param_1->field_0x0 = addr_table_1008_3aa0[4]; // 0x3ab0;
    iVar1->field_0x2 = SEG_1008;
    param_1->field_0x0 = addr_table_1008_380a[36]; // 0x389a
    iVar1->field_0x2 = SEG_1008;
    return;
}

void  pass1_1008_3a10(void)

{
    return;
}

void  pass1_1008_1246(u32 param_1)

{
    void **ppcVar1;
    u16    u_var2;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0xe8) != 0x0)
    {
        ppcVar1 = ((param_1 + 0xe8) + 0x4c);
        (**ppcVar1)();
    }
    return;
}


void  pass1_1008_1272(u32 param_1, i16 param_2)

{
    fn_ptr_1 *ppcVar1;
    u16       u_var2;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0xe8) != 0x0)
    {
        ppcVar1 = ((param_1 + 0xe8) + 0x88);
        (**ppcVar1)();
        return;
    }
    pass1_1008_9cc4(param_1 & 0xffff | u_var2 << 0x10, param_2);
    return;
}


void  pass1_1008_12aa(u32 param_1)

{
    void **ppcVar1;
    u16    u_var2;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0xe8) != 0x0)
    {
        ppcVar1 = ((param_1 + 0xe8) + 0x8c);
        (**ppcVar1)();
        return;
    }
    pass1_1008_9ce0();
    return;
}

u32  pass1_1000_5224(u16 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32  uVar1;
    long lVar2;
    u16  uVar3;
    i16  iVar4;
    u16  uVar5;
    u16  uVar6;
    u16  uVar7;
    u16  uVar8;
    bool bVar10;
    char cVar11;
    u16  uVar9;

    cVar11 = param_2 < 0x0;
    if((bool)cVar11)
    {
        bVar10  = param_1 != 0x0;
        param_1 = -param_1;
        param_2 = -bVar10 - param_2;
    }
    if(param_4 < 0x0)
    {
        cVar11  = cVar11 + '\x01';
        bVar10  = param_3 != 0x0;
        param_3 = -param_3;
        param_4 = -bVar10 - param_4;
    }
    uVar3 = param_1;
    uVar5 = param_3;
    uVar6 = param_2;
    uVar9 = param_4;
    if(param_4 == 0x0)
    {
        uVar3 = param_2 / param_3;
        iVar4 = ((param_2 % param_3 << 0x10 | param_1) / param_3);
    }
    else
    {
        do
        {
            uVar8 = uVar9 >> 0x1;
            uVar5 = uVar5 >> 0x1 | ((uVar9 & 0x1) != 0x0) << 0xf;
            uVar7 = uVar6 >> 0x1;
            uVar3 = uVar3 >> 0x1 | ((uVar6 & 0x1) != 0x0) << 0xf;
            uVar6 = uVar7;
            uVar9 = uVar8;
        } while(uVar8 != 0x0);
        uVar1 = str_var1(uVar7, uVar3) / uVar5;
        iVar4 = uVar1;
        lVar2 = param_3 * (uVar1 & 0xffff);
        uVar3 = (lVar2 >> 0x10);
        uVar5 = uVar3 + iVar4 * param_4;
        if(((CARRY2(uVar3, iVar4 * param_4)) || (param_2 < uVar5)) || ((param_2 <= uVar5 && (param_1 < lVar2))))
        {
            iVar4 = iVar4 + -0x1;
        }
        uVar3 = 0x0;
    }
    if(cVar11 == '\x01')
    {
        bVar10 = iVar4 != 0x0;
        iVar4  = -iVar4;
        uVar3  = -bVar10 - uVar3;
    }
    return str_var1(uVar3, iVar4);
}


u32  pass1_1000_52be(u16 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    if((param_4 | param_2) == 0x0)
    {
        return param_1 * param_3;
    }
    return param_1 * param_3 & 0xffff | ((param_1 * param_3 >> 0x10) + param_2 * param_3 + param_1 * param_4) << 0x10;
}


u32  pass1_1000_52f0(u16 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32  uVar1;
    long lVar2;
    u16  uVar3;
    u16  uVar4;
    i16  iVar5;
    i16  iVar6;
    u16  uVar7;
    u16  uVar8;
    u16  uVar9;
    u16  uVar10;
    u16  uVar11;
    bool bVar12;
    bool bVar13;

    bVar13 = param_2 < 0x0;
    if(bVar13)
    {
        bVar12  = param_1 != 0x0;
        param_1 = -param_1;
        param_2 = -bVar12 - param_2;
    }
    uVar11 = bVar13;
    if(param_4 < 0x0)
    {
        bVar13  = param_3 != 0x0;
        param_3 = -param_3;
        param_4 = -bVar13 - param_4;
    }
    uVar3 = param_1;
    uVar4 = param_3;
    uVar8 = param_2;
    uVar9 = param_4;
    if(param_4 == 0x0)
    {
        iVar5 = ((param_2 % param_3 << 0x10 | param_1) % param_3);
        iVar6 = 0x0;
        if((uVar11 - 0x1) < 0x0)
            goto LAB_1000_538a;
    }
    else
    {
        do
        {
            uVar10 = uVar9 >> 0x1;
            uVar4  = uVar4 >> 0x1 | ((uVar9 & 0x1) != 0x0) << 0xf;
            uVar7  = uVar8 >> 0x1;
            uVar3  = uVar3 >> 0x1 | ((uVar8 & 0x1) != 0x0) << 0xf;
            uVar8  = uVar7;
            uVar9  = uVar10;
        } while(uVar10 != 0x0);
        uVar1 = str_var1(uVar7, uVar3) / uVar4;
        uVar3 = uVar1 * param_4;
        lVar2 = (uVar1 & 0xffff) * param_3;
        uVar8 = (lVar2 >> 0x10);
        uVar4 = lVar2;
        uVar9 = uVar8 + uVar3;
        if(((CARRY2(uVar8, uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4))))
        {
            bVar13 = uVar4 < param_3;
            uVar4  = uVar4 - param_3;
            uVar9  = (uVar9 - param_4) - bVar13;
        }
        iVar5 = uVar4 - param_1;
        iVar6 = (uVar9 - param_2) - (uVar4 < param_1);
        if(-0x1 < (uVar11 - 0x1))
            goto LAB_1000_538a;
    }
    bVar13 = iVar5 != 0x0;
    iVar5  = -iVar5;
    iVar6  = -bVar13 - iVar6;
LAB_1000_538a:
    return str_var1(iVar6, iVar5);
}


u32  pass1_1000_5390(u16 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32  uVar1;
    long lVar2;
    u16  uVar3;
    i16  iVar4;
    u16  uVar5;
    u16  uVar6;
    u16  uVar7;
    u16  uVar8;
    u16  uVar9;

    uVar3 = param_1;
    uVar8 = param_4;
    uVar6 = param_2;
    uVar9 = param_3;
    if(param_4 == 0x0)
    {
        uVar3 = param_2 / param_3;
        iVar4 = ((param_2 % param_3 << 0x10 | param_1) / param_3);
    }
    else
    {
        do
        {
            uVar5 = uVar8 >> 0x1;
            uVar9 = uVar9 >> 0x1 | ((uVar8 & 0x1) != 0x0) << 0xf;
            uVar7 = uVar6 >> 0x1;
            uVar3 = uVar3 >> 0x1 | ((uVar6 & 0x1) != 0x0) << 0xf;
            uVar8 = uVar5;
            uVar6 = uVar7;
        } while(uVar5 != 0x0);
        uVar1 = str_var1(uVar7, uVar3) / uVar9;
        iVar4 = uVar1;
        lVar2 = param_3 * (uVar1 & 0xffff);
        uVar3 = (lVar2 >> 0x10);
        uVar8 = uVar3 + iVar4 * param_4;
        if(((CARRY2(uVar3, iVar4 * param_4)) || (param_2 < uVar8)) || ((param_2 <= uVar8 && (param_1 < lVar2))))
        {
            iVar4 = iVar4 + -0x1;
        }
        uVar3 = 0x0;
    }
    return str_var1(uVar3, iVar4);
}


u32  pass1_1000_53f0(u16 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32  uVar1;
    long lVar2;
    u16  uVar3;
    u16  uVar4;
    u16  uVar5;
    i16  iVar6;
    i16  iVar7;
    u16  uVar8;
    u16  uVar9;
    u16  uVar10;
    bool bVar11;

    uVar3  = param_1;
    uVar4  = param_4;
    uVar9  = param_2;
    uVar10 = param_3;
    if(param_4 == 0x0)
    {
        iVar6 = ((param_2 % param_3 << 0x10 | param_1) % param_3);
        iVar7 = 0x0;
    }
    else
    {
        do
        {
            uVar5  = uVar4 >> 0x1;
            uVar10 = uVar10 >> 0x1 | ((uVar4 & 0x1) != 0x0) << 0xf;
            uVar8  = uVar9 >> 0x1;
            uVar3  = uVar3 >> 0x1 | ((uVar9 & 0x1) != 0x0) << 0xf;
            uVar4  = uVar5;
            uVar9  = uVar8;
        } while(uVar5 != 0x0);
        uVar1  = str_var1(uVar8, uVar3) / uVar10;
        uVar3  = uVar1 * param_4;
        lVar2  = (uVar1 & 0xffff) * param_3;
        uVar9  = (lVar2 >> 0x10);
        uVar4  = lVar2;
        uVar10 = uVar9 + uVar3;
        if(((CARRY2(uVar9, uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
        {
            bVar11 = uVar4 < param_3;
            uVar4  = uVar4 - param_3;
            uVar10 = (uVar10 - param_4) - bVar11;
        }
        iVar6 = -(uVar4 - param_1);
        iVar7 = -(uVar4 - param_1 != 0x0) - ((uVar10 - param_2) - (uVar4 < param_1));
    }
    return str_var1(iVar7, iVar6);
}


i16 pass1_1000_545a(u32 param_1, u32 param_2)

{
    u8 *pbVar1;
    u8  bVar2;
    u8  bVar3;
    u8  bVar4;
    u8 *pbVar5;
    u8 *pbVar6;

    pbVar6 = (u8 *)param_2;
    pbVar5 = (u8 *)param_1;
    bVar4  = 0xff;
    do
    {
        do
        {
            if(bVar4 == 0x0)
                goto LAB_1000_5499;
            pbVar1 = pbVar6;
            pbVar6 = pbVar6 + 0x1;
            bVar4  = *pbVar1;
            bVar3  = *pbVar5;
            pbVar5 = pbVar5 + 0x1;
        } while(bVar3 == bVar4);
        bVar2 = bVar4 + 0xbf + (-((u8)(bVar4 + 0xbf) < 0x1a) & 0x20U) + 0x41;
        bVar3 = bVar3 + 0xbf;
        bVar4 = bVar3 + (-(bVar3 < 0x1a) & 0x20U) + 0x41;
    } while(bVar4 == bVar2);
    bVar4 = (bVar4 < bVar2) * -0x2 + 0x1;
LAB_1000_5499:
    return bVar4;
}


u16 *pass1_1000_54a0(u32 param_1, u16 param_2, u16 param_3)

{
    u16 *puVar1;
    u8   u_var2;
    u16  uVar3;
    u16  uVar4;
    u16  uVar5;
    u16  uVar6;
    u16 *puVar7;
    i16  iVar8;

    if(param_3 != 0x0)
    {
        iVar8 = (param_1 >> 0x10);
        uVar5 = -param_1;
        uVar6 = param_3;
        if(uVar5 != 0x0)
        {
            uVar6 = (uVar5 - param_3 & -(uVar5 < param_3)) + param_3;
            uVar5 = param_3 - uVar6;
        }
        uVar3  = param_2 & 0xff | param_2 << 0x8;
        puVar7 = param_1;
        for(uVar4 = uVar6 >> 0x1; uVar4 != 0x0; uVar4 = uVar4 - 0x1)
        {
            puVar1  = puVar7;
            puVar7  = puVar7 + 0x1;
            *puVar1 = uVar3;
        }
        for(uVar6 = ((uVar6 & 0x1) != 0x0); u_var2 = (param_2 & 0xff), uVar6 != 0x0; uVar6 = uVar6 - 0x1)
        {
            puVar1  = puVar7;
            puVar7  = (puVar7 + 0x1);
            *puVar1 = u_var2;
        }
        if(uVar5 != 0x0)
        {
            for(uVar6 = uVar5 >> 0x1; uVar6 != 0x0; uVar6 = uVar6 - 0x1)
            {
                puVar1  = puVar7;
                puVar7  = puVar7 + 0x1;
                *puVar1 = uVar3;
            }
            for(uVar6 = ((uVar5 & 0x1) != 0x0); uVar6 != 0x0; uVar6 = uVar6 - 0x1)
            {
                puVar1  = puVar7;
                puVar7  = (puVar7 + 0x1);
                *puVar1 = u_var2;
            }
        }
    }
    return param_1;
}


void  pass1_1000_54e8(u8 *param_1, u16 param_2, i16 param_3, i16 param_4, i16 param_5, u16 param_6)

{
    i16 iVar1;

    iVar1 = param_3;
    while(iVar1 = iVar1 + -0x1, -0x1 < iVar1)
    {
        (*(fn_ptr_1)param_1)();
    }
    return;
}


void  pass1_1000_5512(u8 *param_1, u16 param_2, i16 param_3, i16 param_4, u16 param_5)

{
    bool bVar1;
    u16  uStack4;

    pass1_1000_52be(param_3, param_4, param_5, 0x0);
    while(true)
    {
        bVar1   = param_3 == 0x0;
        param_3 = param_3 + -0x1;
        param_4 = param_4 - bVar1;
        if(param_4 < 0x0)
            break;
        uStack4 = param_2;
        (*(fn_ptr_1)param_1)();
    }
    return;
}


void  pass1_1000_5586(u8 *param_1, u16 param_2, i16 param_3, i16 param_4, i16 param_5, u16 param_6)

{
    i16 iVar1;

    iVar1 = param_3;
    while(iVar1 = iVar1 + -0x1, -0x1 < iVar1)
    {
        (*(fn_ptr_1)param_1)();
    }
    return;
}


u32 ret_op_1000_55ac(u16 a)

{
    return 0;
}

#pragma clang diagnostic pop
