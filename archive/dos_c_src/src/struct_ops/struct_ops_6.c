//
// Created by cyrex on 3/17/2023.
//

#include "struct_ops_6.h"

#include "address_tables/function_tables.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "globals.h"
#include "op_int.h"
#include "structs/structs_5xx/structs_51x.h"
#include "ui_ops/ui_ops_6.h"

void struct_op_1040_ca16(Globals  *globals,
                     Struct57 *param_1,
                     u16       param_2,
                     u16       param_3,
                     i16       param_4,
                     u16       param_5);
void struct_op_1040_ca16(Globals  *globals,
                     Struct57 *param_1,
                     u16       param_2,
                     u16       param_3,
                     i16       param_4,
                     u16       param_5)

{
    u16 u16_var1;
    struct_1040_b082(globals,param_1, str_var1(param_2, 0x1840));
    param_1->field_0x94 = globals->dat_1050_5f0c;
    param_1->field_0x98 = 0x0;
    param_1->field_9c   = 0x0;
    param_1->field_9e   = 0x0;
    param_1->field_0x0  = addr_table_1040_d07c; // 0xd07c;
    param_1->field_0x2  = SEG_1040;
    u16_var1 = mixed_1010_20ba(globals->u16_1050_0ed0,
                               0x3e,
                               param_5,
                               param_3,
                               param_4);
    param_1->field_0x98 = u16_var1;
    param_1->field_0x9a = (u16_var1 >> 0x10);
}