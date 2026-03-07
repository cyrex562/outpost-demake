#pragma clang diagnostic push
#pragma ide diagnostic   ignored "OCInconsistentNamingInspection"
#pragma ide diagnostic   ignored "readability-non-const-parameter"

// #include "address_tables/data_tables.h"
// #include "fn_ptr_defs.h"
// #include "fn_ptr_ops/fn_ptr_ops_6.h"
// #include "globals.h"
// #include "op_dos_interrupts.h"
// #include "op_int.h"
// #include "op_winapi.h"
// #include "op_windef.h"
// #include "string_consts.h"
// #include "string_ops.h"
// #include "struct_ops/struct_ops_1.h"
// #include "sys_ops/sys_ops_11.h"
// #include "sys_ops/sys_ops_12.h"
// #include "unk/unk_14.h"
// #include "unk/unk_15.h"
// #include "unk/unk_16.h"
// #include "utils.h"
// #include "win_ops/win_ops_3.h"

// #include <stdarg.h>
// #include <stdbool.h>

u16 entry(globals: &mut Globals,
          param_1: u16,
          param_2: u16,
          param_3: *mut u8,
          param_4: u16,
          param_5: u16,
          CONTEXT *in_task_context,
          param_7: u16,
          i32 param_8);

void init_1000_23be(globals: &mut Globals, param_1: u16, param_2: u16, param_3: u16);

int main(int argc, char **argv) {
    Globals globals = {};
    CONTEXT task_context = {};
    u16 result = entry(&globals, 0, 0, 0, 0, 0, &task_context, 0, 0);
    return 0;
}

u16 entry(globals: &mut Globals,
          param_1: u16,
          param_2: u16,
          param_3: *mut u8,
          param_4: u16,
          param_5: u16,
          CONTEXT *in_task_context,
          param_7: u16,
          i32 param_8) {
    u8 u8_var1;
    let mut u16_var2: u16;
    cstring pcVar3;
    let mut fn_ptr_1: *mut c_void;
    u16 u16_var5 = 0;
    cstring string_1;
    let mut u16_var6: u16;
    u16 u16_var7 = 0;
    cstring pcVar8;
    u16 u16_var15 = 0;
    let mut bVar9: bool;
    let mut get_vers_result: u32;
    let mut result: u32;
    let mut u32_var12: u32;
    let mut iVar13: i16;
    let mut iVar14: u16;
    HINSTANCE16 hinst_var15 = 0;
    let mut dos_version_ptr: *mut c_void;

    result = str_var1(param_7, globals.dat_1050_5f84);
    do {
        dos_version_ptr = NULL;
        InitTask16(in_task_context);
        globals.dat_1050_5f84 = result;
        if ((param_8 != 0)
            && (bVar9 = param_1 < 0xff00,
                param_1 = param_1 + 0x100,
                globals.ptr_1050_5f7e = param_5,
                bVar9)) {
            globals.data_1050_5f48 = param_1;
            globals.data_1050_5f4a = param_3;
            globals.hinst_1050_5f4c = param_4;
            globals.data_1050_5f4e = param_2;
            globals.data_1050_5f50 = param_5;
            LockSegment16((HGLOBAL16) LAST_SEGMENT);
            globals.data_1050_5f52 = (result >> 0x10);
            globals.dat_1050_5f84 = result;
            get_vers_result = GetVersion16();
            globals.data_1050_5f52 = (result >> 0x10);
            globals.dat_1050_5f84 = result;
            globals.data_1050_5f80 = get_vers_result;
            // get dos version info
            fn_ptr_1 = swi(DOS_INT_21);
            u32_var12 = result;
            result = ((Int21GetDosVersInfo) fn_ptr_1)(dos_version_ptr);
            globals.data_1050_5f52 = u32_var12;
            globals.dat_1050_5f84 = u32_var12;
            globals.data_1050_5f82 = result;
            globals.data_1050_5f87 = 0;
            // wait for something
            WaitEvent16(SEG_1000);
            globals.dat_1050_5f84 = result;
            hinst_var15 = globals.hinst_1050_5f4c;
            // initialize the app
            param_8 = InitApp16((HINSTANCE16) LAST_SEGMENT);
            globals.dat_1050_5f84 = result;
            if (param_8 != 0)
                break;
        }
        in_task_context = (CONTEXT *) LAST_SEGMENT;
        param_8 = CONCAT11((param_8 >> 8), 0xff);
        pass1_1000_24db(globals, param_8, 0);
        globals.dat_1050_5f84 = result;
    } while (true);
    // app init at this point?
    interrupt_vector_op_1000_23ea(globals, param_2, param_5, 0, u16_var15);
    globals.dat_1050_5f84 = result;
    pass1_1000_262c(globals, 0x238d, LAST_SEGMENT, _var15: u16, LAST_SEGMENT);
    globals.dat_1050_5f84 = result;
    pass1_1000_27d6(globals, result);
    result = ret_op_1000_55ac(u16_var5);
    u16_var5 = result;
    init_1000_23be(globals, param_1, (result >> 0x10), u16_var15);
    fn_ptr_op_1000_24cd(globals, _var5: u16, 0);
    iVar14 = 0x15;
    iVar13 = 0x15;
    pass1_1000_25a8(NULL, param_5, LAST_SEGMENT);
    pass1_1000_2913(NULL, iVar13, param_5, LAST_SEGMENT);
    string_1 = poss_str_op_1000_28dc(NULL, iVar14);
    if (string_1 != 0x0) {
        iVar13 = 9;
        if (*string_1 == 'M') {
            iVar13 = 0xf;
        }
        string_1 = string_1 + iVar13;
        iVar13 = 0x22;
        pcVar8 = string_1;
        do {
            if (iVar13 == 0)
                break;
            iVar13 = iVar13 + -1;
            pcVar3 = pcVar8;
            pcVar8 = pcVar8 + 1;
        } while (*pcVar3 != '\r');
        pcVar8[-1] = '\0';
    }
    // END OF APP EXECUTION
    FatalAppExit16(LAST_SEGMENT, string_1);
    FatalExit();
    u16_var7 = globals.u16_1050_63fe;
    do {
        u8_var1 = u16_var7;
        u16_var7 = u16_var7 + 1;
        u16_var2 = u8_var1;
        u16_var6 = u16_var7;
        if ((u16_var2 == u16_var5) || (u16_var6 = (u16_var2 + 1), u16_var6 == 0x0)) {
            return u16_var6;
        }
        iVar13 = -1;
        do {
            if (iVar13 == 0) {
                break;
            }
            iVar13 -= 1;
            u8_var1 = u16_var7;
            u16_var7 += 1;
        } while (u8_var1 != '\0');
    } while (true);
}


void init_op_1008_54aa(globals: &mut Globals,
                       param_1: u16,
                       param_2: u16,
                       param_3: *mut u8,
                       HINSTANCE16 hinst_arg4,
                       param_5: u16,
                       param_6: u16,
                       param_7: u16,
                       param_8: u16) {
    let mut func_ptr: *mut c_void;
    u16 offset_var3 = 0;
    let mut in_cx_reg: u16;
    let mut in_dx_reg: u16;
    let mut segment_var_4: u16;
    u16 segment_var7 = 0;
    let mut segment_var5: u16;
    u16 var_8 = 0;
    let mut var_9: u16;
    u16 var_10 = 0;
    let mut var_11: u32;
    struct_1008_0000_1 *var_12 = NULL;
    let mut fn_tbl_1: *mut *mut c_void;
    let mut u16_var14: u16;

    if (param_3 != 0x0) {
        return;
    }
    get_date_time_op_1000_435c(globals, 0x0, in_cx_reg, in_dx_reg, _var14: u16, param_8);
    set_globals_1000_4d0c(globals, param_5);
    pass1_1000_1fea(globals);
    globals.u32_ptr_1050_03a0
            = mem_op_1000_1902(globals, 0x0, 0x32, 0x0, 0x12, SEG_1000, in_dx_reg);
    globals.u32_ptr_1050_029c = mem_op_1000_1902(
            globals, 0x0, 0x64, 0x0, 0xc, SEG_1000, (globals.u32_ptr_1050_03a0 >> 0x10));
    globals.u32_ptr_1050_4fb8 = mem_op_1000_1902(
            globals, 0x0, 0x64, 0x0, 0x10, SEG_1000, (globals.u32_ptr_1050_029c >> 0x10));
    globals.u32_ptr_1050_68a2 = mem_op_1000_1902(
            globals, 0x0, 0x64, 0x0, 0xe, SEG_1000, (globals.u32_ptr_1050_4fb8 >> 0x10));
    globals.u32_ptr_1050_5744 = mem_op_1000_1902(
            globals, 0x0, 0x1f4, 0x0, 0x42, SEG_1000, (globals.u32_ptr_1050_68a2 >> 0x10));
    var_11 = mem_op_1000_1902(
            globals, 0x0, 0x32, 0x0, 0x6, SEG_1000, (globals.u32_ptr_1050_5744 >> 0x10));
    segment_var_4 = (var_11 >> 0x10);
    globals.ptr_1050_5768      = var_11;
    globals.hinst_1050_038c = hinst_arg4;
    globals.ptr_1050_038e = param_3;
    globals.ptr_1050_0390 = param_1;
    globals.ptr_1050_576a      = segment_var_4;
    char *in_1 = (char *) ptr_from_addr_pair(param_1, param_2);
    offset_var3 = str_op_1008_60e8(in_1);
    globals.ptr_1050_0392 = str_var1(segment_var_4, offset_var3);
    mem_op_1000_179c(globals, 0xc, SEG_1000);
    if ((segment_var_4 | offset_var3) == 0x0) {
        offset_var3 = 0x0;
        segment_var5 = 0x0;
    } else {
        struct_1008_0000_1 *in_struct = (struct_1008_0000_1 *) ptr_from_addr_pair(segment_var_4, offset_var3);

        struct_op_1008_0000(in_struct);
        segment_var5 = segment_var7;
    }
    var_12 = (struct_1008_0000_1 *) ptr_from_addr_pair(segment_var5, offset_var3);//str_var1(segment_var5, offset_var3);
    if (globals.ptr_1050_0392 != 0x0) {
        func_ptr = var_12.field_0x0[1];//(var_12.field_0x0 + 0x4);
        ((FnPtr5) func_ptr)(SEG_1000,
                            offset_var3,
                            segment_var5,
                            globals.ptr_1050_0392,
                            (globals.ptr_1050_0392 >> 0x10)); // maybe pass1_1008_049c
    }
    fn_tbl_1 = var_12.field_0x0;
    func_ptr = fn_tbl_1[1];//fn_tbl_1 + 0x4;
    ((FnPtr5) func_ptr)(SEG_1000, offset_var3, segment_var5, 0, 0);
    var_9 = var_8;
    //    SEG_1000
    main_win_msg_loop_1008_9498(globals, SEG_1000, param_8);
    if (var_12 != 0x0) {
        func_ptr = fn_tbl_1[0];
        ((FnPtr5) func_ptr)(SEG_1000, offset_var3, segment_var5, 0x1, 0);
        var_9 = var_10;
    }
    var_11 = mem_op_1000_1b68(var_9,
                              SEG_1000,
                              globals.u32_ptr_1050_03a0);
    var_11 = mem_op_1000_1b68((var_11 >> 0x10),
                              SEG_1000,
                              globals.u32_ptr_1050_029c);
    var_11 = mem_op_1000_1b68((var_11 >> 0x10),
                              SEG_1000,
                              globals.u32_ptr_1050_4fb8);
    var_11 = mem_op_1000_1b68((var_11 >> 0x10),
                              SEG_1000,
                              globals.u32_ptr_1050_68a2);
    mem_op_1000_1b68((var_11 >> 0x10),
                     SEG_1000,
                     globals.u32_ptr_1050_5744);
}


void init_1000_23be(globals: &mut Globals, param_1: u16, param_2: u16, param_3: u16) {

    // str_var1(globals.data_1050_5f50, globals.data_1050_5f4e)

    init_op_1008_54aa(globals,
                      globals.data_1050_5f52,
                      globals.data_1050_5f4e,
                      globals.data_1050_5f4a,
                      globals.hinst_1050_5f4c,
                      SEG_1050,
                      param_1,
                      param_2,
                      param_3);
}

#pragma clang diagnostic pop
