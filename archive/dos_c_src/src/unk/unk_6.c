
#include "unk_6.h"

#include "address_tables/function_tables.h"
#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "struct_20.h"
#include "struct_ops/struct_ops_3.h"

u32 * pass1_1030_3af6(u32 *param_1, u16 param_2, u16 param_3, u32 *param_4, u16 param_5)

{
    i16 iVar1;
    u16 u_var2;

    u_var2         = (param_1 >> 0x10);
    iVar1 = param_1;
    param_1->field_0x0 = *param_4;
    (iVar1 + 0x4) = (param_4 + 0x1);
    (iVar1 + 0x6) = param_3;
    (iVar1 + 0x8) = param_2;
    return param_1;
}


u16 pass1_1030_3b28(u16 param_1)

{
    u16 *puVar1;
    u32 *pu_var2;
    u8   local_8[0x6];

    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffc4, 0x0);
    pass1_1030_3af6(&USHORT_1050_65e6, 0x115, 0x15b, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x0, 0x19);
    pass1_1030_3af6(&USHORT_1050_65f0, 0x116, 0x15c, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffdd, 0x32);
    pass1_1030_3af6(&USHORT_1050_65fa, 0x117, 0x15d, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x0, 0x4b);
    pass1_1030_3af6(&USHORT_1050_6604, 0x118, 0x15e, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xf, 0x64);
    pass1_1030_3af6(&USHORT_1050_660e, 0x119, 0x15f, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x28, 0x7d);
    pass1_1030_3af6(&USHORT_1050_6618, 0x11a, 0x160, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffec, 0x96);
    pass1_1030_3af6(&USHORT_1050_6622, 0x11b, 0x161, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x14, 0xaf);
    pass1_1030_3af6(&USHORT_1050_662c, 0x11c, 0x162, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x1e, 0xc8);
    pass1_1030_3af6(&USHORT_1050_6636, 0x11d, 0x163, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xfffb, 0xe1);
    pass1_1030_3af6(&USHORT_1050_6640, 0x11e, 0x164, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x32, 0xfa);
    pass1_1030_3af6(&USHORT_1050_664a, 0x11f, 0x165, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x1e, 0xe1);
    pass1_1030_3af6(&USHORT_1050_6654, 0x120, 0x166, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffe7, 0xfa);
    pass1_1030_3af6(&USHORT_1050_665e, 0x121, 0x167, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x0, 0x113);
    pass1_1030_3af6(&USHORT_1050_6668, 0x122, 0x168, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x28, 0x12c);
    pass1_1030_3af6(&USHORT_1050_6672, 0x123, 0x169, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xf, 0x145);
    pass1_1030_3af6(&USHORT_1050_667c, 0x124, 0x16a, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffec, 0x15e);
    pass1_1030_3af6(&USHORT_1050_6686, 0x125, 0x16b, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x0, 0x0);
    pass1_1030_3af6(&USHORT_1050_6690, 0x126, 0x16c, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x2d, 0x19);
    pass1_1030_3af6(&USHORT_1050_669a, 0x127, 0x16d, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xa, 0x32);
    pass1_1030_3af6(&USHORT_1050_66a4, 0x128, 0x16e, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffe2, 0x4b);
    pass1_1030_3af6(&USHORT_1050_66ae, 0x129, 0x16f, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x5, 0x64);
    pass1_1030_3af6(&USHORT_1050_66b8, 0x12a, 0x170, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x32, 0x7d);
    pass1_1030_3af6(&USHORT_1050_66c2, 0x12b, 0x171, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffc9, 0x96);
    pass1_1030_3af6(&USHORT_1050_66cc, 0x12c, 0x172, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xfffb, 0xaf);
    pass1_1030_3af6(&USHORT_1050_66d6, 0x12d, 0x173, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffe7, 0xc8);
    pass1_1030_3af6(&USHORT_1050_66e0, 0x12e, 0x174, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x32, 0x32);
    pass1_1030_3af6(&USHORT_1050_66ea, 0x12f, 0x175, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x3c, 0x64);
    pass1_1030_3af6(&USHORT_1050_66f4, 0x130, 0x176, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffc4, 0xe1);
    pass1_1030_3af6(&USHORT_1050_66fe, 0x131, 0x177, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x0, 0x19);
    pass1_1030_3af6(&USHORT_1050_6708, 0x132, 0x178, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x5, 0xaf);
    pass1_1030_3af6(&USHORT_1050_6712, 0x133, 0x179, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x0, 0x19);
    pass1_1030_3af6(&USHORT_1050_671c, 0x134, 0x17a, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x23, 0x19);
    pass1_1030_3af6(&USHORT_1050_6726, 0x135, 0x17b, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xfffb, 0x32);
    pass1_1030_3af6(&USHORT_1050_6730, 0x136, 0x17c, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xf, 0x32);
    pass1_1030_3af6(&USHORT_1050_673a, 0x137, 0x17d, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x2d, 0x4b);
    pass1_1030_3af6(&USHORT_1050_6744, 0x138, 0x17e, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x1e, 0x4b);
    pass1_1030_3af6(&USHORT_1050_674e, 0x139, 0x17f, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x2d, 0x64);
    pass1_1030_3af6(&USHORT_1050_6758, 0x13a, 0x180, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffe7, 0x7d);
    pass1_1030_3af6(&USHORT_1050_6762, 0x13b, 0x181, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x5, 0xaf);
    pass1_1030_3af6(&USHORT_1050_676c, 0x13c, 0x182, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x0, 0xc8);
    pass1_1030_3af6(&USHORT_1050_6776, 0x13d, 0x183, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffce, 0xc8);
    pass1_1030_3af6(&USHORT_1050_6780, 0x13e, 0x184, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xf, 0xfa);
    pass1_1030_3af6(&USHORT_1050_678a, 0x13f, 0x185, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x1e, 0x113);
    pass1_1030_3af6(&USHORT_1050_6794, 0x140, 0x186, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffe2, 0x12c);
    pass1_1030_3af6(&USHORT_1050_679e, 0x141, 0x187, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x64, 0x12c);
    pass1_1030_3af6(&USHORT_1050_67a8, 0x142, 0x188, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x32, 0x145);
    pass1_1030_3af6(&USHORT_1050_67b2, 0x143, 0x189, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x64, 0x145);
    pass1_1030_3af6(&USHORT_1050_67bc, 0x144, 0x18a, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x1e, 0x15e);
    pass1_1030_3af6(&USHORT_1050_67c6, 0x145, 0x18b, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffd3, 0x15e);
    pass1_1030_3af6(&USHORT_1050_67d0, 0x146, 0x18c, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x32, 0xfa);
    pass1_1030_3af6(&USHORT_1050_67da, 0x147, 0x18d, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xf, 0x19);
    pass1_1030_3af6(&USHORT_1050_67e4, 0x148, 0x18e, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x0, 0x32);
    pass1_1030_3af6(&USHORT_1050_67ee, 0x149, 0x18f, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x0, 0xaf);
    pass1_1030_3af6(&USHORT_1050_67f8, 0x14a, 0x190, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xfffb, 0xe1);
    pass1_1030_3af6(&USHORT_1050_6802, 0x14b, 0x191, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xa, 0x15e);
    pass1_1030_3af6(&USHORT_1050_680c, 0x14c, 0x192, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x0, 0x19);
    pass1_1030_3af6(&USHORT_1050_6816, 0x14d, 0x193, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x1e, 0x32);
    pass1_1030_3af6(&USHORT_1050_6820, 0x14e, 0x194, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xfffb, 0x64);
    pass1_1030_3af6(&USHORT_1050_682a, 0x14f, 0x195, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xf, 0x64);
    pass1_1030_3af6(&USHORT_1050_6834, 0x150, 0x196, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x1e, 0x7d);
    pass1_1030_3af6(&USHORT_1050_683e, 0x151, 0x197, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffdd, 0xe1);
    pass1_1030_3af6(&USHORT_1050_6848, 0x152, 0x198, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x0, 0x113);
    pass1_1030_3af6(&USHORT_1050_6852, 0x153, 0x199, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x2d, 0x12c);
    pass1_1030_3af6(&USHORT_1050_685c, 0x154, 0x19a, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffe7, 0x145);
    pass1_1030_3af6(&USHORT_1050_6866, 0x155, 0x19b, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xa, 0x15e);
    pass1_1030_3af6(&USHORT_1050_6870, 0x156, 0x19c, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x0, 0x4b);
    pass1_1030_3af6(&USHORT_1050_687a, 0x157, 0x19d, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x5, 0x64);
    pass1_1030_3af6(&USHORT_1050_6884, 0x158, 0x19e, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0xffec, 0x96);
    pass1_1030_3af6(&USHORT_1050_688e, 0x159, 0x19f, puVar1, (puVar1 >> 0x10));
    puVar1 = pass1_1008_3e54(str_var1(param_1, local_8), 0x0, 0x0, 0x113);
    pu_var2 = pass1_1030_3af6(&USHORT_1050_6898, 0x15a, 0x1a0, puVar1, (puVar1 >> 0x10));
    return pu_var2;
}

void  pass1_1030_1eee(u32 param_1, u32 param_2)

{
    u32 uVar1;
    i16 iVar2;
    u16 uVar3;

    uVar3         = (param_1 >> 0x10);
    iVar2         = param_1;
    uVar1         = *(iVar2 + 0xc);
    param_2 = (iVar2 + 0xe);
    if(uVar1 < param_2)
    {
        uVar1 = param_2 & 0xffff;
    }
    (iVar2 + 0xc) = uVar1;
    (iVar2 + 0xe) = param_2;
    return;
}


void  pass1_1030_1f16(u32 *param_1, u32 param_2)

{
    long      *plVar1;
    void **ppcVar2;
    u32 uVar3;
    i16        iVar4;
    u16        uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    if(((iVar4 + 0x4) == 0x0) || (*(iVar4 + 0x10) <= *(iVar4 + 0x8)))
    {
        ppcVar2 = (*param_1 + 0x20);
        (**ppcVar2)();
    }
    uVar3                          = (iVar4 + 0x4);
    *((iVar4 + 0x8) * 0x4 + uVar3) = param_2;
    plVar1                         = (long *)(iVar4 + 0x8);
    *plVar1                        = *plVar1 + 0x1;
    return;
}


i16  pass1_1030_2242(Struct168 *param_1, i16 param_2)

{
    i16          iVar1;
    Struct168 *iVar2;
    Struct168 *p_var2;
    u16          uVar3;

    uVar3  = (param_1 >> 0x10);
    iVar2  = (Struct168 *)param_1;
    p_var2 = (Struct168 *)&iVar2->field_0x10;
    if(-0x1 < (&p_var2->field_0x0 + param_2 * 0x2))
    {
        iVar1  = (&iVar2->field_0x10 + param_2 * 0x2);
        p_var2 = iVar2 + 0x1;
        if((&p_var2->field_0x0 + param_2 * 0x2) <= iVar1)
        {
            return iVar1;
        }
    }
    return (&p_var2->field_0x0 + param_2 * 0x2);
}


BOOL16  pass1_1030_25b2(u32 param_1, i16 param_2)

{
    if((param_1 + 0x10 + param_2 * 0x2) == 0x0)
    {
        return 0x1;
    }
    return 0x0;
}


void  pass1_1030_25d8(u32 param_1, u16 param_2, i16 param_3)

{
    (param_1 + param_3 * 0x2 + 0x10) = param_2;
    return;
}


void  pass1_1030_25f0(u32 param_1, i16 param_2, i16 param_3)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    if(param_2 == 0x0)
    {
        param_2 = (param_1 + 0x116 + param_3 * 0x2) + 0x1;
    }
    (param_1 + param_3 * 0x2 + 0x116) = param_2;
    return;
}


bool  pass1_1030_2622(u32 param_1, i16 param_2)

{
    i16 iVar1;

    if((param_2 != 0x70) && (param_2 != 0x1))
    {
        iVar1 = pass1_1030_28dc(param_1, 0x0);
        if(-0x1 < iVar1)
        {
            (param_1 + iVar1 * 0x2 + 0x19c) = param_2;
        }
        return -0x1 < iVar1;
    }
    return false;
}


bool  pass1_1030_266c(u16 param_1, u32 param_2)

{
    i16 iVar1;

    iVar1 = pass1_1030_28dc(str_var1(param_2, param_1), (param_2 >> 0x10));
    return iVar1 != -0x1;
}


void  pass1_1030_2690(u32 param_1)

{
    pass1_1000_4906((Struct20 *)(param_1 & 0xffff0000 | (param_1 + 0x2ac)), 0x0, 0x106);
    return;
}


void  pass1_1030_26ac(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    i16       *pi_var1;
    u32 u_var2;
    i16        iVar3;
    u16        uVar4;
    char       cVar5;
    u8        *puVar6;
    u16        uVar7;
    i16        iVar8;
    i16        iVar9;
    u16        uVar10;
    i16        iVar11;
    u16        uVar12;
    i16        iStack38;
    u8         local_14[0x12];

    iVar11 = param_1;
    uVar12 = (param_1 >> 0x10);
    if(param_2 != 0x13)
    {
        if(0x13 < param_2)
        {
            if(param_2 != 0x5f)
            {
                if((param_2 - 0x5f) < 0x6)
                {
                    return;
                }
                if(param_2 != 0x66 && 0x0 < (param_2 - 0x65))
                {
                    if((param_2 - 0x66) < 0x5)
                    {
                        return;
                    }
                    if(0x4 < (param_2 - 0x6b))
                    {
                        return;
                    }
                }
            }
            pass1_1028_dc52((Struct92 *)str_var1(param_4, local_14), 0x1, 0x0, 0x400);
            while(true)
            {
                uVar10 = param_3;
                puVar6 = local_14;
                pass1_1028_e4ec(str_var1(param_4, puVar6));
                param_3 = uVar10 | puVar6;
                if(param_3 == 0x0)
                    break;
                if((iVar11 + 0x4) == (puVar6 + 0x200))
                {
                    uVar7 = (puVar6 + 0x18) + 0x19;
                    if(0x3e8 < uVar7)
                    {
                        uVar7 = 0x3e8;
                    }
                    pass1_1038_4d0e(str_var1(uVar10, puVar6), uVar7);
                }
            }
            return;
        }
        if(param_2 == 0x12)
        {
            pass1_1028_dc52((Struct92 *)str_var1(param_4, local_14), 0x1, 0x0, 0x400);
            while(true)
            {
                uVar10 = param_3;
                puVar6 = local_14;
                pass1_1028_e4ec(str_var1(param_4, puVar6));
                param_3 = uVar10 | puVar6;
                if(param_3 == 0x0)
                    break;
                if((iVar11 + 0x4) == (puVar6 + 0x200))
                {
                    u_var2   = (puVar6 + 0x1f6);
                    iVar9   = u_var2;
                    uVar4   = (u_var2 >> 0x10);
                    pi_var1  = (iVar9 + 0x182);
                    *pi_var1 = *pi_var1 + -0x19;
                    iVar8   = (iVar9 + 0x182);
                    if(iVar8 < 0x1)
                    {
                        iVar8 = 0x1;
                    }
                    (iVar9 + 0x182) = iVar8;
                }
            }
            return;
        }
        if(0x12 < param_2)
        {
            return;
        }
        cVar5 = param_2;
        if(cVar5 != '\n')
        {
            if((cVar5 + -0xa) < '\x06')
            {
                return;
            }
            if('\x01' < (cVar5 + -0x10))
            {
                return;
            }
        }
    }
    pass1_1028_dc52((Struct92 *)str_var1(param_4, local_14), 0x1, 0x0, 0x400);
    while(true)
    {
        uVar10 = param_3;
        puVar6 = local_14;
        pass1_1028_e4ec(str_var1(param_4, puVar6));
        param_3 = uVar10 | puVar6;
        if(param_3 == 0x0)
            break;
        if((iVar11 + 0x4) == (puVar6 + 0x200))
        {
            u_var2    = (puVar6 + 0x1f6);
            iVar8    = u_var2 + 0x180;
            uVar4    = (u_var2 >> 0x10);
            iStack38 = 0x1;
            do
            {
                iVar3   = iStack38 * 0x2;
                pi_var1  = (iVar3 + iVar8);
                *pi_var1 = *pi_var1 + -0x1;
                iVar9   = (iVar3 + iVar8);
                if(iVar9 < 0x1)
                {
                    iVar9 = 0x1;
                }
                (iVar3 + iVar8) = iVar9;
                iStack38        = iStack38 + 0x1;
            } while(iStack38 < 0x6);
        }
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1030_2852(void)

{
    return;
}


i16  pass1_1030_28dc(u32 param_1, i16 param_2)

{
    i16 iStack4;

    iStack4 = 0x0;
    while(true)
    {
        if(0x4 < iStack4)
        {
            return -0x1;
        }
        if((param_1 + 0x19c + iStack4 * 0x2) == param_2)
            break;
        iStack4 = iStack4 + 0x1;
    }
    return iStack4;
}


u16  pass1_1030_2a98(u32 param_1)

{
    i16 *pi_var1;
    u16  u_var2;

    u_var2   = (param_1 >> 0x10);
    pi_var1  = (param_1 + 0x14);
    *pi_var1 = *pi_var1 + 0x1;
    return (param_1 + 0x14);
}


u16  pass1_1030_2aaa(u32 param_1)

{
    u32 uVar1;
    u16        u_var2;

    u_var2 = (param_1 >> 0x10);
    if((param_1 + 0x10) == 0x0)
    {
        return 0x0;
    }
    uVar1 = (param_1 + 0x10);
    return (uVar1 + 0xc);
}


i16  pass1_1030_2f1a(u32 param_1, u16 *param_2, u16 *param_3)

{
    i16        iVar1;
    u32 u_var2;
    i16        iVar3;

    u_var2 = (param_1 + 0x10);
    iVar3 = u_var2;
    iVar1 = (iVar3 + 0xc);
    if(iVar1 - 0x1U < 0x9)
    {
        switch(iVar1)
        {
        default:
            *param_3 = 0x19;
            *param_2 = 0x2d;
            return iVar3;
        case 0x3:
        case 0x4:
        case 0x5:
            *param_3 = 0xa;
            *param_2 = 0xf;
            return iVar3;
        case 0x6:
            *param_3 = 0xa;
            *param_2 = 0x19;
            return iVar3;
        case 0x7:
            *param_3 = 0x19;
            *param_2 = 0x37;
            return iVar3;
        }
    }
    *param_3 = 0x0;
    *param_2 = 0x0;
    return 0x0;
}


u16  pass1_1030_2fac(Struct598 *param_1)

{
    long         lVar1;
    Struct598 *iVar2;
    u16          u_var2;

    u_var2 = (param_1 >> 0x10);
    iVar2 = (Struct598 *)param_1;
    if(iVar2->field_0x10 == 0x0)
    {
        return 0x0;
    }
    lVar1 = iVar2->field_0x10;
    if((lVar1 + 0xc) < 0x2)
    {
        return 0x4;
    }
    lVar1 = iVar2->field_0x10;
    if((lVar1 + 0xc) < 0x5)
    {
        return 0x3;
    }
    lVar1 = iVar2->field_0x10;
    if((lVar1 + 0xc) < 0x8)
    {
        return 0x2;
    }
    return 0x1;
}


void  pass1_1030_10b0(u16 param_1, u16 param_2, u16 param_3, u32 param_4, u32 param_5, u8 *param_6, Struct179 *param_7, u16 param_8, u16 param_9, u16 param_10)

{
    u32  uVar1;
    u32  u_var2;
    u16  uVar3;
    u16  uVar4;
    u16  uVar5;
    u16 *puVar6;
    u16  uStack8;

    puVar6 = switch_1030_07ac(param_1, param_2, param_3, param_4, (param_4 >> 0x10), param_5, param_6, param_7, param_8, param_9, param_10);
    uVar3  = (puVar6 >> 0x10);
    uVar1  = *(puVar6 + 0x4);
    u_var2  = uVar1;
    uVar4  = uVar3;
    pass1_1028_e1ec(str_var1(param_2, param_1), param_5, (param_5 >> 0x10));
    uVar5 = uVar4 | u_var2;
    if(uVar5 != 0x0)
    {
        pass1_1030_7e5a(u_var2 & 0xffff | uVar4 << 0x10, uVar1, uVar5);
    }
    uStack8 = (uVar1 >> 0x10);
    pass1_1030_1358(*(param_1 + 0x26), puVar6, uVar3, uVar1 & 0xffff | (uStack8 & 0xff) << 0x10, param_10);
    return;
}


void  pass1_1030_12ca(Struct176 *param_1)

{
    u32         *puVar1;
    u32   u_var2;
    Struct176 *iVar3;
    u16          uVar3;
    u32          u_stack6;

    u_stack6 = 0x1;
    while(true)
    {
        uVar3  = (param_1 >> 0x10);
        iVar3  = (Struct176 *)param_1;
        puVar1 = &iVar3->field_0xa;
        if(*puVar1 < u_stack6 || *puVar1 == u_stack6)
        {
            iVar3->field_0x4 = 0x0;
            return;
        }
        u_var2 = iVar3->field_0x6;
        if((u_var2 + u_stack6 * 0x4) == 0x0)
            break;
        u_stack6 = u_stack6 + 0x1;
    }
    return;
}


void  bad_1030_1312(void)

{
    return;
}


u16  pass1_1030_13f6(u32 param_1, u32 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    void **ppcVar1;
    u16         u_var2;
    u32 *puStack8;
    u16         uStack4;

    uStack4 = 0x0;
    bad_1030_1312();
    puStack8 = str_var1(param_4, param_3);
    if((param_4 | param_3) != 0x0)
    {
        uStack4 = 0x1;
        u_var2   = (param_1 >> 0x10);
        if(((param_1 + 0x1a) != 0x0) && ((param_4 | param_3) != 0x0))
        {
            ppcVar1 = *puStack8;
            (**ppcVar1)();
        }
        pass1_1030_1358(param_1, 0x0, 0x0, param_2, param_5);
        (param_1 + 0x4) = 0x1;
    }
    return uStack4;
}


void  pass1_1030_154c(void)

{
    return;
}


void  pass1_1030_177a(u32 param_1, u32 param_2)

{
    *(param_1 + 0x8) = param_2;
    return;
}


void  pass1_1030_18b2(u16 *param_1) {
    u32 * puVar1;
    u16 u_var2;
    void **ppcVar3;
    i16 iVar4;
    u16 uVar5;

    uVar5 = (param_1 >> 0x10);
    iVar4 = param_1;
    param_1->field_0x0 = addr_table_1030_1a16;//0x1a16;
    (iVar4 + 0x2) = SEG_1030;
    puVar1 = (iVar4 + 0xc);
    u_var2 = (iVar4 + 0xe);
    if ((u_var2 | puVar1) != 0x0) {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    pass1_1030_16b2(param_1);
    return;
}


void  pass1_1030_18f0(u32 param_1, i16 param_2, i16 param_3, u16 param_4)

{
    void **ppcVar1;
    u32    u_var2;
    u16    extraout_DX;
    i16    extraout_DX_00;
    i16    iVar3;
    u16    uVar4;
    u32    uStack10;
    u32    u_stack6;

    uVar4 = (param_1 >> 0x10);
    iVar3 = param_1;
    if((iVar3 + 0xc) != 0x0)
    {
        ppcVar1 = ((iVar3 + 0xc) + 0x10);
        (**ppcVar1)();
        u_stack6 = str_var1(extraout_DX, param_4);
        for(uStack10 = 0x0; uStack10 < u_stack6; uStack10 = uStack10 + 0x1)
        {
            ppcVar1 = ((iVar3 + 0xc) + 0x4);
            u_var2   = u_stack6;
            (**ppcVar1)();
            if((u_var2 == param_2) && (extraout_DX_00 == param_3))
            {
                ppcVar1 = ((iVar3 + 0xc) + 0x8);
                (**ppcVar1)();
            }
        }
    }
    return;
}


u16  pass1_1030_1972(void)

{
    return 0x1;
}


u16 * pass1_1030_1a32(u16 *param_1, u16 param_2, u8 *param_3) {
    pass1_1030_183c(param_1, 0x1, 0x16, 0xff000000, 0x0, param_2, param_3);
    globals->PTR_LOOP_1050_5168 = (param_1 >> 0x10);
    globals->PTR_LOOP_1050_5166 = param_1;
    (globals->PTR_LOOP_1050_5166 + 0x10) = 0x0;
    param_1->field_0x0 = addr_table_1030_1cbc;//0x1cbc;
    (globals->PTR_LOOP_1050_5166 + 0x2) = SEG_1030;
    return param_1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1030_1a74(u16 *param_1) {
    param_1->field_0x0 = addr_table_1030_1cbc;//0x1cbc;
    param_1->field_0x2 = SEG_1030;
    globals->_PTR_LOOP_1050_5166 = 0x0;
    pass1_1030_18b2(param_1);
}


void  pass1_1030_1d58(u32 param_1)

{
    void **ppcVar1;
    u32 u_var2;

    ppcVar1 = (param_1 + 0x4);
    u_var2   = (**ppcVar1)();
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_var2, (u_var2 >> 0x10));
    return;
}


u32  pass1_1030_1daa(u32 param_1)

{
    u16 uVar1;

    uVar1 = (param_1 >> 0x10);
    return str_var1((param_1 + 0xa), (param_1 + 0x8));
}


void  pass1_1030_1dbc(void)

{
    return;
}


void  pass1_1030_1dfc(u32 *param_1, u16 param_2, u16 param_3, u32 param_4)

{
    u32       *puVar1;
    u16       *pu_var2;
    void **ppcVar3;
    u32 uVar4;
    i16        iVar5;
    u16        uVar6;
    bool       bVar7;

    uVar6  = (param_1 >> 0x10);
    iVar5  = param_1;
    puVar1 = (iVar5 + 0x8);
    if((*puVar1 < param_4 || *puVar1 == param_4) || ((iVar5 + 0x4) == 0x0))
    {
        pu_var2 = (iVar5 + 0x12);
        bVar7  = *pu_var2 < param_4;
        if((bVar7 || *pu_var2 == param_4) && ((bVar7 || (pu_var2 = (iVar5 + 0x10), *pu_var2 < param_4 || *pu_var2 == param_4))))
        {
            ppcVar3 = (*param_1 + 0x20);
            (**ppcVar3)();
        }
        puVar1 = (iVar5 + 0x10);
        if((*puVar1 < param_4 || *puVar1 == param_4) || ((iVar5 + 0x4) == 0x0))
        {
            return;
        }
        pu_var2 = (iVar5 + 0xa);
        bVar7  = *pu_var2 < param_4;
        if((bVar7 || *pu_var2 == param_4) && ((bVar7 || (pu_var2 = (iVar5 + 0x8), *pu_var2 < param_4 || *pu_var2 == param_4))))
        {
            (iVar5 + 0x8) = (param_4 + 0x1);
            (iVar5 + 0xa) = (param_4 + 0x1 >> 0x10);
        }
    }
    uVar4                         = (iVar5 + 0x4);
    uVar6                         = (uVar4 >> 0x10);
    iVar5                         = uVar4;
    (iVar5 + param_4 * 0x4)       = param_2;
    (iVar5 + param_4 * 0x4 + 0x2) = param_3;
    return;
}


void  pass1_1030_1e96(u32 *param_1)

{
    u32       *puVar1;
    void **ppcVar2;
    u32 uVar3;
    u16        uVar4;
    u32        u_stack6;

    u_stack6 = 0x0;
    while(true)
    {
        uVar4  = (param_1 >> 0x10);
        puVar1 = (param_1 + 0x8);
        if((*puVar1 < u_stack6 || *puVar1 == u_stack6) || (uVar3 = (param_1 + 0x4), (uVar3 + u_stack6 * 0x4) == 0x0))
            break;
        u_stack6 = u_stack6 + 0x1;
    }
    ppcVar2 = (*param_1 + 0x8);
    (**ppcVar2)();
    return;
}


void  pass1_1028_ee54(u32 param_1, u16 param_2, u16 *param_3, u32 param_4)

{
    u16         in_DX;
    u16         uVar1;
    u16         unaff_SS;
    Struct99 *p_var2;
    u8          local_16[0x4];
    u32  uStack18;
    u16         uStack14;
    u16         uStack12;
    u32  uStack10;
    u16        *pu_stack6;

    pu_stack6 = param_3;
    pass1_1030_64ce(unaff_SS, param_3, in_DX, globals->_PTR_LOOP_1050_5740, param_3, param_4,
                    str_var1(unaff_SS, local_16));
    uStack10 = param_3;
    p_var2 = pass1_1000_07fc(SEG_1000, globals->u32_ptr_1050_5744);
    uVar1 = (p_var2 >> 0x10);
    uStack14 = p_var2;
    uStack12 = uVar1 | uStack14;
    if(uStack12 == 0x0)
    {
        uStack14 = 0x0;
        uStack12 = 0x0;
    }
    else
    {
        pass1_1030_684c((p_var2 & 0xffff | uVar1 << 0x10), pu_stack6, (pu_stack6 >> 0x10), uStack10, (uStack10 >> 0x10), param_4, uStack12);
    }
    uStack18 = *(uStack14 + 0x4);
    pass1_1030_61fe(globals->_PTR_LOOP_1050_5740, uStack18, pu_stack6, param_4, uStack18, uStack12, unaff_SS);
    pass1_1030_1358(*(param_1 + 0x1e), uStack14, uStack12, uStack18 & 0xffff | (uStack18 & 0xff) << 0x10, unaff_SS);
    return;
}


void  pass1_1028_e332(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    if((param_3._1_1_ != 0x0) && (param_3._1_1_ < 0xa))
    {
        pass1_1030_13f6(*(param_1 + 0xa + param_3._1_1_ * 0x4),
                        str_var1(param_3, param_2) & 0xffffff, param_2, param_3 & 0xff, param_4);
    }
    return;
}


void  pass1_1028_e372(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32        uVar1;
    u32        u_var2;
    u32 uVar3;
    void **ppcVar4;
    u32        uVar5;
    u32        uVar6;
    u16        uVar7;
    u16        uVar8;
    u32        uStack32;
    u32        uStack16;
    u16        uStack10;

    if(param_3 >> 0x8 != 0xff)
    {
        uVar1    = *(param_1 + 0xa + (param_3 >> 0x8) * 0x4);
        u_var2    = *(uVar1 + 0xa);
        uVar7    = param_3 & 0xff;
        uStack16 = str_var1(param_3, param_2) & 0xffffff;
        pass1_1028_e1ec(param_1, param_2, param_3);
        uVar5 = *(param_2 + 0x8);
        pass1_1028_e1ec(param_1, uVar5, (uVar5 >> 0x10));
        for(uStack32 = 0x1; uStack10 = (u_var2 >> 0x10), uStack32 < u_var2; uStack32 = uStack32 + 0x1)
        {
            if(uStack32 != uStack16)
            {
                uVar6 = uStack16;
                bad_1030_1312();
                uVar8 = uStack10 | uVar6;
                if(uVar8 != 0x0)
                {
                    uVar3 = (uVar6 + 0x4);
                    pass1_1030_13f6(uVar1, uStack32, uVar3, uVar8, param_4);
                    ppcVar4 = ((uVar5 & 0xffff | uVar7 << 0x10) + 0x18);
                    (**ppcVar4)(SEG_1030, (uVar5 & 0xffff), uVar7, uVar3);
                }
            }
        }
    }
    return;
}


void  pass1_1028_e44a(u32 param_1, long param_2, u16 param_3)

{
    u32 uVar1;
    u32 u_var2;
    u32 uVar3;
    u16 uVar4;
    u16 uVar5;
    u32 uVar6;
    u16 uVar7;
    u16 uVar8;
    u32 uStack18;
    u16 uStack12;

    pass1_1028_e372(param_1, param_2, (param_2 >> 0x10), param_3);
    uVar8 = (param_1 >> 0x10);
    uVar1 = *(param_1 + 0x26);
    u_var2 = *(param_1 + 0x1e);
    uVar3 = *(u_var2 + 0xa);
    for(uStack18 = 0x1; uStack12 = (uVar3 >> 0x10), uStack18 < uVar3; uStack18 = uStack18 + 0x1)
    {
        uVar6 = uVar3;
        bad_1030_1312();
        uVar5 = uVar6;
        if(((uStack12 | uVar5) != 0x0) && ((uVar5 + 0x8) != param_2))
        {
            uVar8 = (uVar5 + 0x16);
            uVar5 = (uVar5 + 0x18);
            uVar7 = uVar5 & 0xff;
            uVar4 = pass1_1030_13f6(uVar1, str_var1(uVar5, uVar8) & 0xffffff, uVar8, uVar7, param_3);
            pass1_1030_13f6(u_var2, uStack18, uVar4, uVar7, param_3);
        }
    }
    return;
}


void  pass1_1028_e4ec(u32 param_1)

{
    u32       *puVar1;
    long      *plVar2;
    u32        uVar3;
    u16        uVar4;
    u32 uVar5;
    u16        in_DX;
    i16        iVar6;
    u16        uVar7;

    uVar5 = 0x0;
    uVar7 = (param_1 >> 0x10);
    iVar6 = param_1;
    if((iVar6 + 0x10) == 0x0)
    {
        do
        {
            if((iVar6 + 0x8) == 0x0)
            {
                return;
            }
            plVar2  = (long *)(iVar6 + 0x8);
            *plVar2 = *plVar2 + -0x1;
            bad_1030_1312();
            in_DX = in_DX | uVar5;
        } while(in_DX == 0x0);
    }
    else
    {
        do
        {
            uVar3  = *(iVar6 + 0xc);
            puVar1 = (iVar6 + 0x8);
            if(uVar3 <= *puVar1 && *puVar1 != uVar3)
            {
                return;
            }
            uVar4   = (iVar6 + 0x8);
            plVar2  = (long *)(iVar6 + 0x8);
            *plVar2 = *plVar2 + 0x1;
            bad_1030_1312();
            in_DX = in_DX | uVar4;
        } while(in_DX == 0x0);
    }
    return;
}


BOOL16  pass1_1028_d52c(u32 *param_1, u32 param_2, u32 *param_3)

{
    fn_ptr_1 *ppcVar1;
    i16       iVar2;
    BOOL16    BVar3;

    ppcVar1 = (*param_3 + 0x8);
    iVar2   = (**ppcVar1)();
    if(iVar2 != 0x0)
    {
        BVar3 = pass1_1028_d776(*param_1, param_2, param_3);
        if(BVar3 != 0x0)
        {
            return 0x1;
        }
    }
    return 0x0;
}


void  pass1_1028_d658(Struct446 *param_1)

{
    u32  *puVar1;
    u16          u_var2;
    void **ppcVar3;
    Struct446 *iVar4;
    u16          uVar4;

    uVar4  = (param_1 >> 0x10);
    iVar4  = (Struct446 *)param_1;
    puVar1 = iVar4->field_0x4;
    u_var2  = iVar4->field_0x6;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    puVar1 = iVar4->field_0x8;
    u_var2  = iVar4->field_0xa;
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    return;
}


u16  pass1_1028_d69e(u32 param_1)

{
    u32 uVar1;

    uVar1 = (param_1 + 0x4);
    return (uVar1 + 0x8);
}


void  fn_ptr_1028_d728(u32 param_1)

{
    fn_ptr_1 *ppcVar1;

    ppcVar1 = ((param_1 + 0x4) + 0x10);
    (**ppcVar1)();
    return;
}


u16  fn_ptr_1028_d742(u32 param_1, u32 *param_2)

{
    fn_ptr_1 *ppcVar1;
    u32       u_var2;

    ppcVar1 = (*param_2 + 0xc);
    u_var2   = (**ppcVar1)();
    pass1_1020_c872(*(param_1 + 0x4), (u_var2 + 0x4), u_var2);
    return 0x1;
}


BOOL16  pass1_1028_d776(u32 param_1, u32 param_2, u32 *param_3)

{
    fn_ptr_1 *ppcVar1;
    u32       u_var2;

    ppcVar1 = (*param_3 + 0xc);
    u_var2   = (**ppcVar1)();
    pass1_1020_c872(*(param_1 + 0x8), param_2, u_var2);
    return 0x1;
}


void  pass1_1028_e0a0(u32 param_1, u32 param_2, u8 *param_3, u16 param_4, u8 param_5)

{
    u32 uVar1;

    uVar1 = (param_1 + 0x52);
    pass1_1030_4782(param_4, param_5, param_3, uVar1, (uVar1 >> 0x10), 0x1, param_2, (param_2 >> 0x10));
    return;
}


void  pass1_1028_e198(u32 param_1, u16 *param_2, u16 *param_3, u32 param_4, u16 param_5, u16 param_6)

{
    pass1_1028_e1ec(param_1, param_4, (param_4 >> 0x10));
    pass1_1030_5b1c(str_var1(param_6, param_5), param_2, param_3);
    return;
}


void  bad_1028_e1bc(u32 param_1, u32 param_2)

{
    return;
}


void  pass1_1028_e1ec(u32 param_1, u16 param_2_offset, u16 param_3_base)

{
    if(param_3_base._1_1_ == '\0')
    {
        return;
    }
    if(param_3_base._1_1_ == -0x1)
    {
        return;
    }
    bad_1030_1312();
    return;
}


void  pass1_1028_e2ac(u32 param_1, u16 param_2)

{
    u32 u_stack6;

    u_stack6 = *(param_1 + (param_2 >> 0x8) * 0x4 + 0x2e);
    (*(fn_ptr_1)u_stack6)();
    return;
}


u32  pass1_1028_e2e0(u32 param_1, u16 param_2, u8 param_3)

{
    i16 iVar1;
    u16 u_var2;
    u32 uVar3;
    u16 auStack10[0x3];
    u16 uStack4;

    uStack4 = param_3;
    if(uStack4 == 0xff)
    {
        uVar3 = pass1_1028_ebee(param_1, 0x0, param_2);
        return uVar3;
    }
    u_var2        = (param_1 >> 0x10);
    iVar1        = param_1 + 0x2e;
    auStack10[0] = (iVar1 + uStack4 * 0x4 + 0x2);
    uVar3        = (**(iVar1 + uStack4 * 0x4))();
    return uVar3;
}


void  pass1_1028_c23e(u16 param_1, u16 param_2, u16 *param_3, u32 param_4, long param_5, u16 param_6, u16 param_7, u16 param_8)

{
    u32         uVar1;
    void **ppcVar2;
    u32 *puVar3;
    u16         uVar4;
    u16         uVar5;
    u32         uVar6;
    u16         uVar7;
    u16         uVar8;
    u16         extraout_DX;
    u32 *puStack22;
    u32         uStack10;
    u32  u_stack6;

    pass1_1030_627e(param_8, param_6, param_7, globals->_PTR_LOOP_1050_5740, param_3, param_5);
    u_stack6 = str_var1(param_7, param_6);
    uVar7   = param_7 | param_6;
    if(uVar7 != 0x0)
    {
        pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_6, param_7);
        uStack10 = str_var1(uVar7, param_6);
        uVar1    = *(param_6 + 0x2a);
        if(uVar1 != param_4)
        {
            uVar6 = param_4;
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar1, (uVar1 >> 0x10));
            uVar4  = uVar6;
            puVar3 = (uVar6 & 0xffff | uVar7 << 0x10);
            uVar8  = uVar7;
            uVar5  = uVar4;
            pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_4, (param_4 >> 0x10));
            puStack22 = str_var1(uVar8, uVar5);
            if(((puVar3 == 0x0) || ((uVar8 | uVar5) == 0x0)) || ((uVar5 + 0x200) != (uVar4 + 0x200)))
            {
                return;
            }
            ppcVar2 = (*puVar3 + 0x18);
            (**ppcVar2)(SEG_1030, uVar4, uVar7, u_stack6);
            ppcVar2 = (*puStack22 + 0x8);
            (**ppcVar2)();
            pass1_1030_73ee(uStack10, param_4, extraout_DX);
        }
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL16  pass1_1028_c314(u16 param_1, i16 param_2, u16 param_3, u16 param_4, u16 param_5, u16 *param_6, u16 param_7, u16 param_8, u32 param_9)

{
    u32 *puVar1;
    i16         local_14;
    i16         local_12;
    i16         local_10;
    i16         local_e;
    u32  local_c;
    u16         uStack8;
    i16         iStack6;
    u16         uStack4;

    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_9, (param_9 >> 0x10));
    iStack6 = param_2;
    uStack4 = param_3;
    puVar1  = pass1_1030_5b5c(param_2, param_3);
    local_c = *puVar1;
    uStack8 = (puVar1 + 0x4);
    pass1_1008_3e94(param_6, str_var1(param_1, &local_10), str_var1(param_1, &local_e));
    pass1_1008_3e94(str_var1(param_1, &local_c),
                    str_var1(param_1, &local_14),
                    str_var1(param_1, &local_12));
    if((((0x1 < local_e) && (0x1 < local_10)) && (local_e < local_12 + -0x1)) && (local_10 < local_14 + -0x1))
    {
        return 0x1;
    }
    globals->PTR_LOOP_1050_50ca = 0x6b8;
    return 0x0;
}


void  pass1_1028_c522(u16 param_1, u16 param_2, u16 *param_3, u32 param_4, long param_5, u16 param_6)

{
    i16 iVar1;
    u8 *pu_var2;
    u16 uVar3;
    u32 uVar4;
    u8  local_4[0x2];

    uVar4 = pass1_1030_bcae(local_4, param_6);
    uVar3 = (uVar4 >> 0x10);
    iVar1 = uVar4;
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, param_4, (param_4 >> 0x10));
    uVar4 = *(iVar1 + 0x10);
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, uVar4, (uVar4 >> 0x10));
    pu_var2 = local_4;
    pass1_1030_bcde(param_6, pu_var2, param_6, uVar4 & 0xffff | uVar3 << 0x10, param_3, param_5);
    if(pu_var2 < 0x0)
    {
        globals->PTR_LOOP_1050_50ca = 0x6af;
    }
    else
    {
        if(pu_var2 < 0x1f)
        {
            return;
        }
        globals->PTR_LOOP_1050_50ca = 0x6b6;
        globals->PTR_LOOP_1050_50cc = pu_var2 + -0x1e;
    }
    return;
}


BOOL16  pass1_1028_c64a(u32 param_1, u32 *param_2, u16 param_3, u16 param_4, u16 param_5, long param_6, u16 param_7)

{
    BOOL16     BVar1;
    u16        u_var2;
    u16        uVar3;
    u8         local_e[0x2];
    i16        local_c;
    i16        local_a;
    u32 local_8;
    u16        uStack4;

    local_8 = *param_2;
    uStack4 = (param_2 + 0x1);
    pass1_1008_3eb4(str_var1(param_7, &local_8),
                    str_var1(param_7, local_e),
                    str_var1(param_7, &local_c),
                    str_var1(param_7, &local_a));
    local_8 = local_8 & 0xffff | (local_c - 0x1) << 0x10;
    u_var2   = param_1;
    uVar3   = (param_1 >> 0x10);
    BVar1   = pass1_1028_c5a6(u_var2, uVar3, 0x7b,
                            str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
    if(BVar1 == 0x0)
    {
        local_8 = local_8 & 0xffff | (local_c + 0x1) << 0x10;
        BVar1   = pass1_1028_c5a6(u_var2, uVar3, 0x7b,
                                str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
        if(BVar1 == 0x0)
        {
            local_8 = local_a + -0x1;
            local_8 = local_c;
            BVar1         = pass1_1028_c5a6(u_var2, uVar3, 0x7c,
                                    str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
            if(BVar1 == 0x0)
            {
                local_8 = str_var1(local_8, local_a + 0x1);
                BVar1   = pass1_1028_c5a6(u_var2, uVar3, 0x7c,
                                        str_var1(param_7, &local_8), param_6, &local_8, param_3, param_7);
                if(BVar1 == 0x0)
                {
                    return BVar1;
                }
            }
        }
    }
    return 0x1;
}


void  pass1_1028_c724(Struct295 *param_1)

{
    u16          uVar1;
    u32   u_var2;
    Struct295 *iVar3;
    u16          uVar3;

    uVar3 = (param_1 >> 0x10);
    iVar3 = (Struct295 *)param_1;
    u_var2 = iVar3->field_0x14;
    if((u_var2 + 0xac) != 0x0)
    {
        return;
    }
    u_var2 = iVar3->field_0x14;
    uVar1 = (u_var2 + 0xa6);
    if(uVar1 == 0xd)
    {
        u_var2          = iVar3->field_0x14;
        (u_var2 + 0xac) = 0x1;
        goto LAB_1028_c770;
    }
    if(uVar1 < 0xe)
    {
        if(uVar1 == '\0')
            goto LAB_1028_c770;
        if(uVar1 == '\a')
        {
            u_var2          = iVar3->field_0x14;
            (u_var2 + 0xac) = 0xa;
            goto LAB_1028_c770;
        }
    }
    u_var2          = iVar3->field_0x14;
    (u_var2 + 0xac) = 0x5;
LAB_1028_c770:
    u_var2 = iVar3->field_0x14;
    if((u_var2 + 0xac) == 0x0)
    {
        u_var2 = iVar3->field_0x14;
        if((u_var2 + 0xa8) != 0x0)
        {
            u_var2          = iVar3->field_0x14;
            (u_var2 + 0xac) = 0x1;
        }
        return;
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_c7b6(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 *param_5, long param_6)

{
    u32 *puVar1;
    u16         u_var2;
    u16         uVar3;
    u32         uVar4;
    u8        bStack27;
    u32  local_a;
    u32  u_stack6;

    puVar1 = &local_a;
    pass1_1030_64ce(param_1, puVar1, param_2, globals->_PTR_LOOP_1050_5740, param_5, param_6,
                    str_var1(param_1, puVar1));
    u_stack6  = *puVar1;
    uVar3    = (puVar1 + 0x2);
    bStack27 = (u8)(u_stack6 >> 0x18);
    u_var2    = bStack27;
    if(bStack27 == 0x0)
    {
        return;
    }
    pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2, u_stack6, uVar3);
    uVar4 = struct_op_1030_73a8(str_var1(uVar3, u_var2));
    uVar3 = (uVar4 >> 0x10);
    if((uVar3 | uVar4) != 0x0)
    {
        switch((uVar4 + 0xc))
        {
        case 0x1:
            break;
        case 0x2:
            break;
        case 0x3:
            break;
        case 0x4:
            break;
        case 0x5:
            break;
        case 0x6:
            break;
        case 0x7:
            return;
        case 0x8:
            return;
        case 0x9:
            return;
        }
        return;
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_c89c(u32 param_1, u16 *param_2, u32 *param_3, i16 param_4, u16 param_5)

{
    u32       *puVar1;
    u16        extraout_DX;
    u16        u_var2;
    u32        local_16[0x3];
    long       lStack10;
    u32 u_stack6;

    pass1_1028_b58e(param_1);
    u_stack6  = str_var1(extraout_DX, param_4);
    lStack10 = (param_4 + 0x8);
    puVar1   = local_16;
    u_var2    = extraout_DX;
    pass1_1030_64ce(param_5, puVar1, extraout_DX, globals->_PTR_LOOP_1050_5740, param_2, lStack10,
                    str_var1(param_5, puVar1));
    *param_3 = *puVar1;
    return;
}


// WARNING: Could not reconcile some variable overlaps

void  pass1_1028_c8ee(u16 param_1, u16 param_2, u16 param_3, i16 param_4, u16 *param_5)

{
    u16        local_8;
    u32 local_6;

    pass1_1008_3eb4(param_5,
                    str_var1(param_1, &local_8),
                    str_var1(param_1, &local_6),
                    str_var1(param_1, &local_6 + 0x2));
    if(param_4 == 0x1)
    {
        local_8 = local_8 + 0x1;
    }
    else
    {
        if(param_4 == 0x2)
        {
            local_6 = local_6 & 0xffff0000 | (local_6 - 0x1);
        }
        else
        {
            if(param_4 == 0x3)
            {
                local_6 = local_6 & 0xffff0000 | (local_6 + 0x1);
            }
            else
            {
                if(param_4 == 0x4)
                {
                    local_6 = local_6 & 0xffff | (local_6 + 0x1) << 0x10;
                }
                else
                {
                    if(param_4 == 0x5)
                    {
                        local_6 = local_6 & 0xffff | (local_6 - 0x1) << 0x10;
                    }
                }
            }
        }
    }
    pass1_1008_3e76(param_5, local_8, local_6, (local_6 >> 0x10));
    return;
}


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_c952(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u16          uVar1;
    u32   u_var2;
    u32          uVar4;
    Struct600 *uVar3;
    BOOL16       BVar5;
    Struct600 *paVar6;
    Struct600 *paVar7;
    u32   uVar8;
    u32          uVar9;
    u16          uVar10;
    i16          iVar11;
    u16          uVar12;
    u16          uVar13;
    u32   uStack30;
    u16          uStack16;
    u16          uStack14;

    uVar12 = (param_1 >> 0x10);
    iVar11 = param_1;
    u_var2  = (iVar11 + 0x14);
    uVar3  = (Struct600 *)u_var2;
    uVar10 = (iVar11 + 0x16) | uVar3;
    if(uVar10 != 0x0)
    {
        uVar8 = u_var2;
        pass1_1028_b58e(param_1);
        uVar4    = *(uVar8 + 0x2e);
        uStack14 = uVar4;
        if((((uVar8 + 0x30) | uStack14) != 0x0) && (uVar13 = (uVar4 >> 0x10), (uStack14 + 0x206) == 0x0))
        {
            BVar5 = pass1_1008_c6ae(globals->dat_1050_06e0, (iVar11 + 0xc), 0x32);
            if(BVar5 == 0x0)
            {
                BVar5 = pass1_1008_c6ae(globals->dat_1050_06e0, (iVar11 + 0xc), 0x33);
                if((BVar5 != 0x0) && (((qword)*_PTR_LOOP_1050_65e2 % 0x5) == 0x0))
                {
                    return;
                }
            }
            else
            {
                if(((qword)*_PTR_LOOP_1050_65e2 % 0xa) == 0x0)
                {
                    return;
                }
            }
            uVar12 = (u_var2 >> 0x10);
            if((uStack14 + 0x204) == 0x0)
            {
                for(uStack16 = 0x0; uStack16 < 0x25; uStack16 = uStack16 + 0x1)
                {
                    uStack30 = *(&uVar3->fld0_addr_table + uStack16 * 0x4);
                    paVar7   = (Struct600 *)uStack30;
                    uVar10   = (&uVar3->fld2_segment + uStack16 * 0x4) | paVar7;
                    if(uVar10 != 0x0)
                    {
                        uVar9 = uStack30;
                        empty_1038_540a();
                        uStack30 = (uStack30 >> 0x10);
                        paVar6         = uVar3;
                        if((uVar9 & 0xffff | uVar10 << 0x10) < uStack30)
                        {
                            paVar6  = (Struct600 *)(paVar7 - (Struct600 *)uVar9);
                            param_3 = (uStack30 - uVar10) - (paVar7 < (Struct600 *)uVar9);
                            pass1_1038_52b8(uVar4,
                                            str_var1(param_3, paVar6), 0x21, paVar6, param_3, SEG_1038, param_4);
                            uStack30 = str_var1((uStack30 - param_3) - (paVar7 < paVar6), paVar7 - paVar6);
                        }
                        if((uStack30 | uStack30) != 0x0)
                        {
                            pass1_1038_52b8(uVar4, uStack30, uStack16, paVar6, param_3, SEG_1038, param_4);
                        }
                    }
                }
            }
            else
            {
                uVar10 = uVar3->field_0x8c;
                uVar1  = uVar3->field_0x8e;
                if((uVar1 | uVar10) != 0x0)
                {
                    pass1_1038_52b8(uVar4,
                                    str_var1(uVar1, uVar10), 0x23, param_2, param_3, SEG_1038, param_4);
                }
                uVar10 = uVar3->field_0x90;
                uVar1  = uVar3->field_0x92;
                if((uVar1 | uVar10) != 0x0)
                {
                    pass1_1038_52b8(uVar4,
                                    str_var1(uVar1, uVar10), 0x24, param_2, param_3, SEG_1038, param_4);
                    return;
                }
            }
        }
    }
    return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void  pass1_1028_cb04(u32 param_1, u16 param_2, u16 param_3, u16 param_4)

{
    u32        uVar1;
    u32 u_var2;
    u32        uVar3;
    u16        uVar4;
    u32        uVar5;
    u32 uVar6;
    long       lVar7;
    u16        extraout_DX;
    u16        uVar8;
    u16        uVar9;
    u16        uVar10;
    bool       bVar11;
    u16       *puVar12;
    u8        *puStack52;
    u16        uStack38;
    u8        *puStack36;
    i16        iStack22;
    u16        uStack18;
    u8        *puStack16;
    u16        uStack14;

    uVar1 = *(param_1 + 0x14);
    if(uVar1 != 0x0)
    {
        uVar5 = uVar1;
        pass1_1028_b58e(param_1);
        uVar3     = uVar5 & 0xffff | extraout_DX << 0x10;
        u_var2     = (uVar5 + 0x2e);
        puStack52 = (uVar5 + 0x30);
        uStack14  = u_var2;
        uStack18  = puStack52 | uStack14;
        if(uStack18 != 0x0)
        {
            uVar9 = (u_var2 >> 0x10);
            if((uStack14 + 0x206) != 0x0)
            {
                return;
            }
            uVar8  = uVar1;
            uVar10 = (uVar1 >> 0x10);
            if((uStack14 + 0x204) != 0x0)
            {
                u_var2 = (uVar8 + 0x8c);
                uVar6 = u_var2;
                empty_1038_540a();
                puStack36 = (u_var2 >> 0x10);
                if((puStack52 <= puStack36) && ((uVar4 = uVar6, uStack38 = u_var2, puStack52 < puStack36 || (uVar4 < uStack38))))
                {
                    pass1_1030_7d7c(uVar3, uStack38 - uVar4,
                      str_var1(0x23, puStack36 + (-(uStack38 < uVar4) - puStack52)), uVar4, puStack52, param_2, param_3, param_4);
                    puVar12   = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_4, puStack52, param_3);
                    puStack52 = (puVar12 >> 0x10);
                    pass1_1010_043a(puVar12 & 0xffff | ZEXT24(puStack52) << 0x10, (uStack14 + 0x4), 0x12, param_4);
                }
                u_var2 = (uVar8 + 0x90);
                uVar6 = u_var2;
                empty_1038_540a();
                puStack36 = (u_var2 >> 0x10);
                if((puStack52 <= puStack36) && ((uVar4 = uVar6, uStack38 = u_var2, puStack52 < puStack36 || (uVar4 < uStack38))))
                {
                    pass1_1030_7d7c(uVar3, uStack38 - uVar4,
                      str_var1(0x24, puStack36 + (-(uStack38 < uVar4) - puStack52)), uVar4, puStack52, param_2, param_3, param_4);
                }
                return;
            }
            empty_1038_540a();
            puStack16 = puStack52;
            for(iStack22 = 0x11; iStack22 < 0x25; iStack22 = iStack22 + 0x1)
            {
                uVar1 = *(iStack22 * 0x4 + uVar8);
                uVar5 = uVar1;
                empty_1038_540a();
                uVar5     = uVar5 & 0xffff | ZEXT24(puStack52) << 0x10;
                puStack52 = (uVar1 >> 0x10);
                if(uVar5 < uVar1)
                {
                    if((((iStack22 == 0x23) || (iStack22 == 0x24)) || (puStack16 < puStack52)) || ((uVar4 = uVar1, puStack16 <= puStack52 && (uStack18 < uVar4))))
                    {
                        lVar7 = uVar1 - uVar5;
                        uVar4 = lVar7;
                        pass1_1030_7d7c(uVar3, uVar4,
                                        str_var1(iStack22, (lVar7 >> 0x10)), uVar4, puStack52, uVar8, param_3, param_4);
                        if(iStack22 == 0x23)
                        {
                            puVar12   = mixed_1010_20ba(globals->u16_1050_0ed0, 0x2b, param_4, puStack52, param_3);
                            puStack52 = (puVar12 >> 0x10);
                            pass1_1010_043a(puVar12 & 0xffff | ZEXT24(puStack52) << 0x10, (uStack14 + 0x4), 0x12, param_4);
                        }
                    }
                    else
                    {
                        bVar11    = uStack18 < uVar4;
                        uStack18  = uStack18 - uVar4;
                        puStack16 = puStack16 + (-bVar11 - puStack52);
                    }
                }
            }
            return;
        }
    }
    return;
}


u16  pass1_1028_ced2(u32 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)

{
    u16  uVar1;
    bool bVar2;
    bool bVar3;
    u32  uVar4;
    u16  uVar5;
    u16  uVar6;
    u16  uVar7;

    uVar1 = (param_1 >> 0x10);
    bVar2 = (*(u8 *)(param_1 + 0x1a) & 0x2) == 0x0;
    if(bVar2)
    {
        uVar6   = 0x0;
        uVar7   = 0x23;
        uVar5   = 0x1;
        uVar4   = pass1_1028_b58e(param_1 & 0xffff | uVar1 << 0x10);
        param_4 = SEG_1030;
        pass1_1030_7d7c(uVar4, uVar5,
                        str_var1(uVar7, uVar6), uVar4, (uVar4 >> 0x10), param_2, param_3, param_5);
    }
    bVar3 = (*(u8 *)(param_1 + 0x1a) & 0x1) == 0x0;
    if(bVar3)
    {
        uVar6   = 0x0;
        uVar7   = 0xe;
        uVar5   = 0x1;
        uVar4   = pass1_1028_b58e(param_1 & 0xffff | uVar1 << 0x10);
        param_4 = SEG_1030;
        pass1_1030_7d7c(uVar4, uVar5,
                        str_var1(uVar7, uVar6), uVar4, (uVar4 >> 0x10), param_2, param_3, param_5);
    }
    if(bVar3 || bVar2)
    {
        pass1_1028_bdac(param_1, 0x6, param_4);
        return 0x0;
    }
    return 0x1;
}


Struct18 * pass1_1028_cf44(Struct18 *param_1, u8 param_2)

{
    pass1_1028_b418(param_1);
    if((param_2 & 0x1) != 0x0)
    {
        fn_ptr_1000_17ce(param_1, SEG_1000);
    }
    return param_1;
}


void  pass1_1028_cfd2(u32 *param_1, u32 param_2)

{
    param_1->field_0x0 = param_2;
    (param_1 + 0x4) = 0x0;
    return;
}


void  pass1_1028_cff2(u32 param_1)

{
    u32 *puVar1;
    u16         u_var2;
    void **ppcVar3;
    u16         uVar4;

    uVar4  = (param_1 >> 0x10);
    puVar1 = (param_1 + 0x4);
    u_var2  = (param_1 + 0x6);
    if((u_var2 | puVar1) != 0x0)
    {
        ppcVar3 = *puVar1;
        (**ppcVar3)();
    }
    return;
}


void  pass1_1028_d172(u16 param_1, u32 param_2, u32 param_3)

{
    u16  uVar1;
    long lVar2;
    u32  uVar3;
    u8   local_e[0x8];
    u8   local_6[0x4];

    pass1_1018_dcf6(str_var1(param_1, local_6));
    pass1_1008_5784(str_var1(param_1, local_e), param_3);
    while(true)
    {
        lVar2 = pass1_1008_5b12(local_e, param_1);
        uVar1 = (lVar2 >> 0x10);
        if(lVar2 == 0x0)
            break;
        uVar3 = pass1_1018_dd1e(param_1, local_6, (uVar1 | lVar2), local_6, param_1, 0x0, (lVar2 + 0x4) << 0x10);
        pass1_1008_8faa((param_2 + 0x4), uVar3);
    }
    return;
}


u32  pass1_1028_b4f2(u32 param_1)

{
    u16        uVar1;
    u32 u_var2;

    u_var2 = pass1_1028_b58e(param_1);
    uVar1 = (u_var2 >> 0x10);
    return str_var1((u_var2 + 0x30), (u_var2 + 0x2e));
}
