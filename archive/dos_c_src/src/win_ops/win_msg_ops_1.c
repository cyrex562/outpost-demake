//
// Created by cyrex on 3/17/2023.
//

#include "win_msg_ops_1.h"

#include "address_tables/function_tables.h"
#include "globals.h"
#include "op_int.h"
#include "op_winapi.h"
#include "op_windef.h"
#include "string_ops.h"
#include "structs/structs_0xx/structs_6x.h"
#include "ui_ops/ui_ops_1.h"
#include "ui_ops/ui_ops_6.h"
#include "unk/unk_12.h"
#include "unk/unk_15.h"
#include "utils.h"
#include "win_ops_1.h"
#include "win_ops_3.h"

#include <minwindef.h>

void send_msg_1040_c85a(Globals *globals, u32 param_1, HWND16 hwnd_arg2)

{
    globals->dat_1050_5efe = param_1;
    SendMessage16(hwnd_arg2, 0x0, 0x0, 0x11100fa);
}