

// #include "address_tables/function_tables.h"
// #include "fn_ptr_ops/fn_ptr_ops_7.h"
// #include "globals.h"
// #include "op_int.h"
// #include "win_ops/win_ops_1.h"

pub fn pass1_1040_869a(globals: &mut Globals, param_1: *mut Struct18)

{
    param_1.field_0x0 = addr_table_1040_8ddc;//0x8ddc;
    param_1.field_0x2 = SEG_1040;
    fn_ptr_1000_17ce((param_1.field_0x90), SEG_1000);
    fn_ptr_1000_17ce((param_1.field_0x94), SEG_1000);
    ui_cleanup_op_1040_782c(param_1, SEG_1000);
}
