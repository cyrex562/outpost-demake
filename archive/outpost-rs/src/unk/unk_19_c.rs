//
// Created by cyrex on 3/18/2023.
//

// #include "unk_19.h"

// #include "address_tables/function_tables.h"
// #include "draw_ops/draw_ops_3.h"
// #include "structs/structs_3xx/struct_318.h"

pub fn pass1_1008_af38(StructD *param_1)

{
    param_1.address_offset_field_0x0 = addr_table_1008_af7c;//0xaf7c;
    param_1.field_0x2 = SEG_1008;
    clenaup_win_ui_1018_4d22(param_1);
    return;
}

pub fn pass1_1038_6984(param_1: u32)

{
    let mut iVar1: i32
    undefined2 uVar2;

    uVar2 = (undefined2)(param_1 >> 0x10);
    iVar1 = (int)param_1;
    if (*(int *)(iVar1 + 0xc) != 0) {
        pass1_1020_c3ae();
        return;
    }
    if (*(long *)(iVar1 + 0xe) != 0) {
        pass1_1020_ba94(*(long **)(iVar1 + 0xe));
        return;
    }
    if (*(int *)(iVar1 + 0x12) == 0) {
        if (*(int *)(iVar1 + 0x14) == 0) {
            return;
        }
        pass1_1020_c42e(*(int *)(iVar1 + 0x14));
    }
    else {
        switch_1020_c3b4(*(ushort *)(iVar1 + 0x12));
    }
    return;
}

pub fn pass1_1030_5c8a(param_1: u32,param_2: u32)

{
    long *plVar1;
    uint uVar2;
    ulong uVar3;
    uint uVar4;
    astruct_177 *iVar5;
    undefined2 uVar5;
    ulong uStack_6;

    uStack_6 = 0;
    uVar2 = (uint)param_2._3_1_;
    if (uVar2 == 0xff) {
        return;
    }
    uVar5 = (undefined2)((ulong)_PTR_LOOP_1050_65e2 >> 0x10);
    iVar5 = (astruct_177 *)((int)_PTR_LOOP_1050_65e2 + 10);
    uVar3 = *(ulong *)(iVar5 + uVar2 * 4);
    uVar4 = *(uint *)(iVar5 + uVar2 * 4 + 2);
    if (*(int *)((int)uVar3 + 4) != 0) {
        pass1_1030_12ca((astruct_176 *)(uVar3 & 0xffff | (ulong)uVar4 << 0x10));
        uStack_6 = uVar3 & 0xffff | (ulong)uVar4 << 0x10;
    }
    if (uStack_6 == 0) {
        plVar1 = (long *)(uVar2 * 4 + (int)param_1);
        *plVar1 = *plVar1 + 1;
    }
    return;
}


pub fn pass1_1028_858c(param_1: *mut Struct318,param_2: *mut u8, param_3: *mut Struct319)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    let mut iVar3: i32
    uint uVar4;
    undefined2 in_register_0000000a;
    astruct_57 *paVar5;
    astruct_319 *iVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    undefined2 uVar8;
    undefined2 *puStack_a;

    paVar5 = (astruct_57 *)str_var1(in_register_0000000a, param_2);
    mem_op_1000_179c(0x112, paVar5, 0);
    uVar4 = (uint) paVar5;
    puStack_a = (undefined2 *)str_var1(uVar4,param_1);
    if ((uVar4 | (uint)param_1) != 0) {
        *puStack_a = 0x389a;
        param_1.field2_0x2 = 0x1008;
        uVar8 = (undefined2)((ulong)param_3 >> 0x10);
        iVar5 = (astruct_319 *)param_3;
        param_1.field3_0x4 = iVar5.field4_0x4;
        puVar6 = &iVar5.field5_0x8;
        puVar7 = &param_1.field4_0x8;
        for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar1;
        }
        *puStack_a = 0x6ad2;
        param_1.field2_0x2 = 0x1028;
        param_1.field257_0x108 = iVar5.field258_0x108;
        param_1.field258_0x10a = iVar5.field259_0x10a;
        param_1.field259_0x10c = iVar5.field260_0x10c;
        param_1.field260_0x10e = iVar5.field261_0x10e;
        *puStack_a = 0x8688;
        param_1.field2_0x2 = 0x1028;
    }
    return;
}

StructD * pass1_1038_a2aa(StructD *param_1,param_2: u8)

{
    pass1_1038_a156(param_1);
    if ((param_2 & 1) != 0) {
        fn_ptr_1000_17ce((char *)param_1);
    }
    return param_1;
}
