
// #include "big_fn_1.h"

// #include "draw_ops/draw_ops_2.h"
// #include "draw_ops/draw_ops_3.h"
// #include "fn_ptr_ops/fn_ptr_ops_6.h"
// #include "op_int.h"
// #include "struct_20.h"
// #include "struct_ops/struct_ops_4.h"
// #include "structs/structs_0xx/structs_x.h"
// #include "sys_ops/sys_ops_10.h"
// #include "unk/unk_10.h"
// #include "unk/unk_14.h"
// #include "unk/unk_18.h"
// #include "utils.h"
// #include "win_ops/win_ops_3.h"

// #include <minwindef.h>

use crate::structs::structs_0xx::struct_20_h::Struct20;

pub fn big_switch_1008_15d4(globals: &mut Globals,
                          param_1: *mut Struct20,
                          param_2: u16,
                          param_3: u16,
                          param_4: u32,
                          param_5: i32)

{
let mut var3: u16 = 0;
    let mut var2: *mut u8;
    let mut var4: u16;
    let mut var5: *mut u8;
    let mut var6: u16;
    let mut p_var2: *mut Struct20;
    let mut p_stack32: *mut Struct20;
    let mut local_e: [u8;8] = [0;8];
    let mut u_stack6: u32;
    let mut u_var2: *mut Struct20;
    let mut var_1: *mut i32;
    let mut pi_var1: *mut i16;

    u_stack6 = 0x0;
    var3    = param_4;
    var3    = var3 + 0xd2;
    pass1_1008_57a4(str_var1(param_3, local_e), param_4 & 0xffff0000 | var3);
    //do
    loop
    {
        var2 = local_e;
        pass1_1008_5b12(var2, param_3);
        var5 = (var4 | var2);
        if(var5 == 0x0){
            // goto LAB_1008_162a;
        }
        u_var2   = *(var2 + 0x4);
        var5    = (var2 + 0x6);
        param_1 = u_var2;
        if !(param_1 + 0xde) != param_5 {break;}
    }
    // while((param_1 + 0xde) != param_5);
    u_stack6 = u_var2 & 0xffff | var5 << 0x10;
// LAB_1008_162a:
    if(u_stack6 != 0x0)
    {
        return;
    }
    var6 = (param_4 >> 0x10);
    match (param_5- 1)
    {
    0x0 =>{
        mem_op_1000_179c(NULL, 0xec, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0)
        {
        // LAB_1008_169a:
            u_stack6 = 0x0;
            // goto LAB_1008_2b3a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        pass1_1020_08b6(param_3, p_stack32, (var3 + 0xcc), param_4);}
        // break;
    _ =>{
        debug_pri16_1008_6048(globals.s_OpWnd__getKid__Unknown_target_mo_1050_01a3, SEG_1008, param_3);
        let mut stack0xfffe: I32 = 0;
        fn_ptr_op_1000_24cd(NULL, 0x1, &stack0xfffe);
        // goto LAB_1008_2b3a;
    }
    2 =>{
        mem_op_1000_179c(NULL, 0xfa, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        pass1_1018_e91e(p_stack32, (var3 + 0xcc), var3, param_3);
        // break;
    }
     3 =>{
        mem_op_1000_179c(NULL, 0xf6, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        pass1_1018_e230(param_3, p_stack32, (var3 + 0xcc), var3);
        // break;
    }
    0x4 =>{
        mem_op_1000_179c(NULL, 0xf6, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        struct_1020_7554(param_3, p_stack32, (var3 + 0xcc), var3);}
        // break;
    0x5 =>{
        mem_op_1000_179c(NULL, 0xf8, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        struct_1018_5840(NULL, p_stack32, (var3 + 0xcc), var3, param_3);}
        // break;
    0x6 =>{
        mem_op_1000_179c(NULL, 0xf6, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        struct_1020_2524(p_stack32, (var3 + 0xcc), var3, param_3);}
        // break;
    0x7 =>{
        mem_op_1000_179c(NULL, 0x118, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        unk_draw_op_1020_41c8(p_stack32, (var3 + 0xcc), var3, SEG_1020);}
        // break;
    0x8 =>{
        mem_op_1000_179c(NULL, 0xf6, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        pass1_1018_e5dc(NULL, param_3, p_stack32, (var3 + 0xcc), var3);}
        // break;
    0x9 =>{
        mem_op_1000_179c(NULL, 0xf6, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        struct_1018_66cc(p_stack32, (var3 + 0xcc), var3, param_3);}
        // break;
    0xa =>{
        win_1008_5c5c(param_3, param_1, var5, globals._PTR_LOOP_1050_02a0, 0x1d3);
            mem_op_1000_179c(NULL, 0xf2, SEG_1000);
            p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        p_var2  = struct_1018_6d02(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0xb =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        p_var2  = struct_1018_6d38(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0xc =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        p_var2  = struct_1018_6d6e(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0xd =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        p_var2  = struct_1018_6da4(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0xe =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        p_var2  = struct_1018_6dda(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0xf =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        p_var2  = struct_1018_6e10(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x10 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        p_var2  = struct_1018_6e46(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x11 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        p_var2  = struct_1018_6e7c(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x12 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        p_var2  = struct_1018_6eb2(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x13 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        p_var2  = struct_1018_6ee8(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x14 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if(var5 == 0x0){
            // goto LAB_1008_169a;
        }
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 0x1 };
        p_var2  = struct_1018_6f1e(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x15 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_6f54(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x16 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_6f8a(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x17 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_6fc0(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x18 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_6ff6(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x19 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_702c(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x1a =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7062(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x1b =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7098(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x1c =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_70ce(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x1d =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7104(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x1e =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_713a(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x20 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7170(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x21 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_745e(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x22 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_71a6(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x23 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_71dc(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x24 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7212(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x25 =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_c958(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x26 =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_c9a6(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x27 =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_c9f4(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x28 =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_ca48(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x29 =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_ca96(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x2a =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_caea(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x2b =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_cb38(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x2c =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_cb86(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x2d =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_cbda(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x2e =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_cc28(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x2f =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_cc76(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x30 =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_ccc4(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x31 =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_cd12(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x32 =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_cd60(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x33 =>{
        mem_op_1000_179c(NULL, 0x114, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_cf74(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x34 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_73c2(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x35 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7494(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x36 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_74ca(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x37 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7500(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x38 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_73f8(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x39 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7536(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x3a =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_756c(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x3b =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_75a2(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x3c =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = pass1_1018_75d8(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x3d =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_760e(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x3e =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7644(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x3f =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_767a(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x40 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_76b0(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x41 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_76e6(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x42 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_771c(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x43 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7752(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x44 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7788(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x45 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_77be(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x46 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_77f4(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x47 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_782a(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x48 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7860(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x49 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7896(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x4a =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_78cc(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x4b =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7902(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x4c =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7938(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x4d =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_796e(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x4e =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_79a4(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x4f =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_79da(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x50 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7a10(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x51 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7a46(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x52 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7a7c(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x54 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7ab2(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x55 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7ae8(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x56 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7b1e(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x57 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7b54(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x58 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7b8a(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x59 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7bc0(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x5a =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7bf6(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x5b =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7c2c(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x5c =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7c62(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x5d =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7c98(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x5e =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7cce(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x5f =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7d04(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x60 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7d3a(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x61 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7d70(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x62 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7248(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x63 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_727e(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x64 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_72b4(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x65 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_72ea(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x66 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7320(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x67 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        pi_var1  = (var3 + 0xcc);
        unsafe { *pi_var1 = *pi_var1 + 1};
        p_var2  = struct_1018_7356(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
        // break;
    0x68 =>{
        mem_op_1000_179c(NULL, 0xf2, SEG_1000);
        p_stack32 = str_var1(var5, param_1);
        var5      = (var5 | param_1);
        if (var5 == 0) {
// goto LAB_1008_169a;
}
        var_1   = (var3 + 0xcc);
        var_1   = var_1 + 0x1;
        p_var2  = struct_1018_738c(p_stack32, (var3 + 0xcc), param_4, param_3);
        var5    = (p_var2 >> 0x10);
        param_1 = p_var2;}
    }
    u_stack6 = str_var1(var5, param_1);
// LAB_1008_2b3a:
    pass1_1008_6978(param_4, 0x0, u_stack6, param_1, var5);
    return;
}
