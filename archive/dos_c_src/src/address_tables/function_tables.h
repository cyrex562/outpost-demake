#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCInconsistentNamingInspection"
#ifndef ADDRESS_TABLE_1_H_
#define ADDRESS_TABLE_1_H_

#include "../fn_ptr_ops/fn_ptr_ops_6.h"
#include "../string_ops.h"
#include "../sys_ops/sys_ops_11.h"
#include "draw_ops/draw_ops_1.h"
#include "draw_ops/draw_ops_2.h"
#include "draw_ops/draw_ops_3.h"
#include "draw_ops/draw_ops_4.h"
#include "file_ops/file_ops_1.h"
#include "file_ops/file_ops_2.h"
#include "file_ops/file_ops_3.h"
#include "file_ops/file_ops_4.h"
#include "fn_ptr_ops/fn_ptr_ops_1.h"
#include "fn_ptr_ops/fn_ptr_ops_2.h"
#include "fn_ptr_ops/fn_ptr_ops_3.h"
#include "fn_ptr_ops/fn_ptr_ops_4.h"
#include "fn_ptr_ops/fn_ptr_ops_5.h"
#include "struct_ops/struct_ops_1.h"
#include "struct_ops/struct_ops_4.h"
#include "sys_ops/sys_ops_1.h"
#include "sys_ops/sys_ops_10.h"
#include "sys_ops/sys_ops_2.h"
#include "sys_ops/sys_ops_3.h"
#include "sys_ops/sys_ops_4.h"
#include "sys_ops/sys_ops_5.h"
#include "sys_ops/sys_ops_6.h"
#include "sys_ops/sys_ops_8.h"
#include "sys_ops/sys_ops_9.h"
#include "ui_ops/ui_ops_1.h"
#include "ui_ops/ui_ops_2.h"
#include "ui_ops/ui_ops_3.h"
#include "ui_ops/ui_ops_4.h"
#include "ui_ops/ui_ops_5.h"
#include "ui_ops/ui_ops_6.h"
#include "ui_ops/ui_ops_7.h"
#include "unk/unk_1.h"
#include "unk/unk_10.h"
#include "unk/unk_11.h"
#include "unk/unk_12.h"
#include "unk/unk_13.h"
#include "unk/unk_14.h"
#include "unk/unk_18.h"
#include "unk/unk_19.h"
#include "unk/unk_2.h"
#include "unk/unk_3.h"
#include "unk/unk_4.h"
#include "unk/unk_6.h"
#include "unk/unk_7.h"
#include "unk/unk_8.h"
#include "unk/unk_9.h"
#include "win_ops/win_msg_ops_1.h"
#include "win_ops/win_ops_1.h"
#include "win_ops/win_ops_2.h"
#include "win_ops/win_ops_3.h"
#include "win_ops/win_ops_4.h"
#include "win_ops/win_ops_5.h"

#include <stdint.h>

// - 1008:389a
void *addr_table_1008_380a[]
        = {pass1_1008_37aa,            // 1008:380a
           pass1_1008_3714,            //  1008:380e
           create_window_ex_1008_9760, //  1008:3812
           show_win_1008_96ae,         // 1008:3816
           send_msg_1008_9640,         // 1008:381a
           set_win_text_1008_9664,     // 1008:381e
           pass1_1008_372c,            //  1008:3822
           unk_win_op_1008_97f2,       // 1008:3826
           pass1_1008_373c,            // 1008:382a
           pass1_1008_3740,            // 1008:382e,
           pass1_1008_3744,            // 1008:3832,
           pass1_1008_3748,            // 1008:3836,
           pass1_1008_374c,            // 1008:383a,
           begin_end_paint_1008_97c8,  // 1008:383e,
           destroy_win_1008_9698,      // 1008:3842,
           pass1_1008_3750,            // 1008:3846,
           pass1_1008_3754,            // 1008:384a,
           pass1_1008_9c60,            // 1008:384e,
           pass1_1008_3758,            // 1008:3852,
           pass1_1008_375e,            // 1008:3856,
           pass1_1008_9c4e,            // 1008:385a,
           pass1_1008_3762,            // 1008:385e,
           pass1_1008_9c4a,            // 1008:3862,
           pass1_1008_3766,            // 1008:3866,
           0, //                                FUN_1008_376a,              // 1008:386a,
           0, //                                FUN_1008_376e,              // 1008:386e,
           0, //                                FUN_1008_3772,              // 1008:3872,
           0, //                                FUN_1008_3776,              // 1008:3876,
           pass1_1008_377a,            // 1008:387a,
           pass1_1008_9c52,            // 1008:387e,
           get_stock_obj_1008_9c56,    // 1008:3882,
           pass1_1008_9c16,            // 1008:3886,
           pass1_1008_9c30,            // 1008:388a,
           pass1_1008_9c86,            // 1008:388e,
           pass1_1008_9cc4,            // 1008:3892,
           pass1_1008_9ce0,            // 1008:3896,
           pass1_1008_377e,            // 1008:389a,
           pass1_1008_37e4,            // 1008:389e,
           pass1_1008_68ea,            // 1008:38a2,
           window_op_1008_0af8,        // 1008:38a6,
           pass1_1008_68c6,            // 1008:38aa,
           send_msg_1008_9640,         // 1008:38ae,
           set_win_text_1008_9664,     // 1008:38b2,
           pass1_1008_372c,            // 1008:38b6,
           unk_win_op_1008_97f2,       // 1008:38ba,
           pass1_1008_373c,            // 1008:38be,
           pass1_1008_3740,            // 1008:38c2,
           win_ui_cursor_op_1008_06c0, // 1008:38c6,
           pass1_1008_0932,            // 1008:38ca,
           pass1_1008_0984,            // 1008:38ce,
           draw_op_1008_1230,          // 1008:38d2,
           destroy_win_1008_9698,      // 1008:38d6,
           pass1_1008_0a92,            // 1008:38da,
           mixed_win_op_1008_0c60,     // 1008:38de,
           pass1_1008_9c60,            // 1008:38e2,
           unk_win_msg_op_1008_0a3c,   // 1008:38e6,
           pass1_1008_1246,            // 1008:38ea,
           pass1_1008_9c4e,            // 1008:38ee,
           pass1_1008_3762,            // 1008:38f2,
           pass1_1008_9c4a,            // 1008:38f6,
           pass1_1008_3766,            // 1008:38fa,
           menu_ui_op_1008_09ba,       // 1008:38fe,
           pass1_1008_6a4a,            // 1008:3902,
           pass1_1008_6b2e,            // 1008:3906,
           pass1_1008_6b02,            // 1008:390a,
           pass1_1008_377a,            // 1008:390e,
           pass1_1008_9c52,            // 1008:3912,
           get_stock_obj_1008_9c56,    // 1008:3916,
           pass1_1008_9c16,            // 1008:391a,
           pass1_1008_9c30,            // 1008:391e,
           pass1_1008_9c86,            // 1008:3922,
           pass1_1008_1272,            // 1008:3926,
           pass1_1008_12aa};           // 1008:392a

// void* fn_ptr_1008_3aa8 = addr_table_1008_380a + 2; // SEG_1008:3aa8
// void* fn_ptr_1008_3ab0 = addr_table_1008_380a + 4; // SEG_1008:3ab0

void *addr_table_1008_3aa0[] = {
        pass1_1008_3a7a, // 1008:3aa0
        pass1_1008_3a10, //  1008:3aa4
        pass1_1008_3a14, // 1008:3aa8
        pass1_1008_3a10, // 1008:3aac
        pass1_1008_3a40, // 1008:3ab0
        pass1_1008_3a10, // 1008:3ab4
};

// SEG_1008:3b46
void *addr_table_1008_3b46[] = {
        pass1_1008_3afe,            // 1008, // 1008:3b46:3b4a       pass1_1008_68ea
        create_window_ex_1008_9760, // 1008, // 1008:3b4e:3b52       pass1_1008_68c6
        send_msg_1008_9640,         // 1008, // 1008:3b56:3b5a       set_win_text_1008_9664
        pass1_1008_372c,            // 1008, // 1008:3b5e:3b62       unk_win_op_1008_97f2
        pass1_1008_373c,            // 1008, // 1008:3b66:3b6a       pass1_1008_3740
        pass1_1008_3744,            // 1008, // 1008:3b6e:3b72       pass1_1008_3748
        pass1_1008_374c,            // 1008, // 1008:3b76:3b7a       begin_end_paint_1008_97c8
        destroy_win_1008_9698,      // 1008, // 1008:3b7e:3b82       post_quit_msg_1008_3af4
        pass1_1008_3754,            // 1008, // 1008:3b86:3b8a       pass1_1008_9c60
        pass1_1008_3758,            // 1008, // 1008:3b8e:3b92       pass1_1008_375e
        pass1_1008_9c4e,            // 1008, // 1008:3b96:3b9a       pass1_1008_3762
        pass1_1008_9c4a,            // 1008, // 1008:3b9e:3ba2       pass1_1008_3766
        //    FUN_1008_376a, // 1008, // 1008:3ba6:3baa       pass1_1008_6a4a
        pass1_1008_6b2e,         // 1008, // 1008:3bae:3bb2       pass1_1008_6b02
        pass1_1008_377a,         // 1008, // 1008:3bb6:3bba       pass1_1008_9c52
        get_stock_obj_1008_9c56, // 1008, // 1008:3bbe:3bc2       pass1_1008_9c16
        pass1_1008_9c30,         // 1008, // 1008:3bc6:3bca       pass1_1008_9c86
        pass1_1008_9cc4,         // pass1_1008_9ce0, // 1008:3bce, // 1008:3bd2
};

// SEG_1008:3cfc
void *addr_table_1008_3cfc[] = {
        pass1_1008_3cd6,         // 1008:3cfc
        pass1_1040_9252,         // 1008:3d00
        create_window_1040_92dc, // 1008:3d04
        pass1_1040_9422,         // 1008:3d08
        win_ui_op_1008_3c34,     // 1008:3d0c
        draw_text_1040_94fc,     // 1008:3d10
        //    FUN_1008_3cd2, // 1008:3d14
        pass1_1040_93e6,         // 1008:3d18
        send_msg_1040_9404,      // 1008:3d1c
};

// SEG_1008:3e38 -> pass1_1008_3e38; function

// SEG_1008:4f1c
void *addr_table_1008_4f1c[] = {
        pass1_1008_4ef6 // 1008:4f1c
};

// SEG_1008:5632 -> def_win_proc_1008_5632;

// - 1008:5bc4
// SEG_1008:5bc0
void *addr_table_1008_5bc0[] = {
        pass1_1008_5b6e, // 1008:5bc0
        pass1_1008_5b9a, // 1008:5bc4
        pass1_1008_58a6, // 1008:5bc8
        pass1_1008_593c, // 1008:5bcc
        pass1_1008_59f4, // 1008:5bd0
        pass1_1008_5ab8, // 1008:5bd4
        pass1_1008_5830, // 1008:5bd8
};

void *addr_table_1008_5fc8[] = {
        pass1_1008_5fa2, // 1008:5fc8
        pass1_1010_1df2, // 1008:5fcc
        pass1_1010_1dce, // 1008:5fd0
        pass1_1010_1dd4, // 1008:5fd4
};

// SEG_1008:6378
void *addr_table_1008_6378[] = {
        pass1_1008_6330,            // 1008:6378
        pass1_1008_68ea,            // 1008:637c
        create_window_ex_1008_9760, // 1008:6380
        pass1_1008_68c6,            // 1008:6384
        send_msg_1008_9640,         // 1008:6388
        set_win_text_1008_9664,     // 1008:638c
        pass1_1008_372c,            // 1008:6390
        unk_win_op_1008_97f2,       // 1008:6394
        pass1_1008_373c,            // 1008:6398
        pass1_1008_3740,            // 1008:639c
        pass1_1008_3744,            // 1008:63a0
        pass1_1008_3748,            // 1008:63a4
        pass1_1008_374c,            // 1008:63a8
        fill_rect_1008_62c0,        // 1008:63ac
        destroy_win_1008_9698,      // 1008:63b0
        pass1_1008_3750,            // 1008:63b4
        pass1_1008_3754,            // 1008:63b8
        pass1_1008_9c60,            // 1008:63bc
        pass1_1008_3758,            // 1008:63c0
        //    FUN_1008_6324, // 1008:63c4
        pass1_1008_9c4e,            // 1008:63c8
        pass1_1008_3762,            // 1008:63cc
        pass1_1008_9c4a,            // 1008:63d0
        pass1_1008_3766,            // 1008:63d4
        //    FUN_1008_376a, // 1008:63d8
        pass1_1008_6a4a,            // 1008:63dc
        pass1_1008_6b2e,            // 1008:63e0
        pass1_1008_6b02,            // 1008:63e4
        pass1_1008_377a,            // 1008:63e8
        pass1_1008_9c52,            // 1008:63ec
        get_stock_obj_1008_9c56,    // 1008:63f0
        pass1_1008_9c16,            // 1008:63f4
        pass1_1008_9c30,            // 1008:63f8
        pass1_1008_9c86,            // 1008:63fc
        pass1_1008_9cc4,            // 1008:6400
        pass1_1008_9ce0,            // 1008:6404
        destroy_win_1008_628e,      // 1008:6408
        //    FUN_1008_6328, // 1008:640c
        //    FUN_1008_632c, // 1008:6410
};

// SEG_1008:685a
void *addr_table_1008_685a[] = {
        pass1_1008_6834,           // 1008:685a
        //    FUN_1008_681a, // 1008:685e
        //    FUN_1008_6822, // 1008:6862
        cleanup_palette_1008_56e2, // 1008:6866
        //    FUN_1008_681e, // 1008:686a
        //    FUN_1008_6828, // 1008:686e
        //    FUN_1008_682e, // 1008:6872
        //    FUN_1008_6814, // 1008:6876
};

// SEG_1008:6bfc
//- 1008:6c8c
void *addr_table_1008_6bfc[] = {
        pass1_1008_6bb4,            // 1008:6bfc
        pass1_1008_68ea,            // 1008:6c00
        create_window_ex_1008_9760, // 1008:6c04
        pass1_1008_68c6,            // 1008:6c08
        send_msg_1008_9640,         // 1008:6c0c
        set_win_text_1008_9664,     // 1008:6c10
        pass1_1008_372c,            // 1008:6c14
        unk_win_op_1008_97f2,       // 1008:6c18
        pass1_1008_373c,            // 1008:6c1c
        pass1_1008_3740,            // 1008:6c20
        pass1_1008_3744,            // 1008:6c24
        pass1_1008_3748,            // 1008:6c28
        pass1_1008_374c,            // 1008:6c2c
        begin_end_paint_1008_97c8,  // 1008:6c30
        destroy_win_1008_9698,      // 1008:6c34
        pass1_1008_3750,            // 1008:6c38
        pass1_1008_3754,            // 1008:6c3c
        pass1_1008_9c60,            // 1008:6c40
        pass1_1008_3758,            // 1008:6c44
        pass1_1008_375e,            // 1008:6c48
        pass1_1008_9c4e,            // 1008:6c4c
        pass1_1008_3762,            // 1008:6c50
        pass1_1008_9c4a,            // 1008:6c54
        pass1_1008_3766,            // 1008:6c58
        //    FUN_1008_376a, // 1008:6c5c
        pass1_1008_6a4a,            // 1008:6c60
        pass1_1008_6b2e,            // 1008:6c64
        pass1_1008_6b02,            // 1008:6c68
        pass1_1008_377a,            // 1008:6c6c
        pass1_1008_9c52,            // 1008:6c70
        get_stock_obj_1008_9c56,    // 1008:6c74
        pass1_1008_9c16,            // 1008:6c78
        pass1_1008_9c30,            // 1008:6c7c
        pass1_1008_9c86,            // 1008:6c80
        pass1_1008_9cc4,            // 1008:6c84
        pass1_1008_9ce0,            // 1008:6c88
        pass1_1008_6b5a,            // 1008:6c8c
};

// SEG_1008:8042
void *addr_table_1008_8042[] = {
        pass1_1008_7ffa,            // 1008:8042
        pass1_1008_68ea,            // 1008:8046
        create_window_ex_1008_9760, // 1008:804a
        pass1_1008_68c6,            // 1008:804e
        send_msg_1008_9640,         // 1008:8052
        set_win_text_1008_9664,     // 1008:8056
        pass1_1008_372c,            // 1008:805a
        unk_win_op_1008_97f2,       // 1008:805e
        pass1_1008_373c,            // 1008:8062
        pass1_1008_3740,            // 1008:8066
        pass1_1008_3744,            // 1008:806a
        pass1_1008_3748,            // 1008:806e
        pass1_1008_374c,            // 1008:8072
        begin_end_paint_1008_97c8,  // 1008:8076
        destroy_win_1008_9698,      // 1008:807a
        pass1_1008_3750,            // 1008:807e
        pass1_1008_3754,            // 1008:8082
        pass1_1008_9c60,            // 1008:8086
        pass1_1008_3758,            // 1008:808a
        pass1_1008_375e,            // 1008:808e
        pass1_1008_9c4e,            // 1008:8092
        pass1_1008_3762,            // 1008:8096
        pass1_1008_9c4a,            // 1008:809a
        pass1_1008_3766,            // 1008:809e
        //    FUN_1008_376a, // 1008:80a2
        pass1_1008_6a4a,            // 1008:80a6
        pass1_1008_6b2e,            // 1008:80aa
        pass1_1008_6b02,            // 1008:80ae
        pass1_1008_377a,            // 1008:80b2
        pass1_1008_9c52,            // 1008:80b6
        get_stock_obj_1008_9c56,    // 1008:80ba
        pass1_1008_9c16,            // 1008:80be
        pass1_1008_9c30,            // 1008:80c2
        pass1_1008_9c86,            // 1008:80c6
        pass1_1008_9cc4,            // 1008:80ca
        pass1_1008_9ce0,            // 1008:80ce
};

// SEG_1008:84f2 -> win_sys_op_1008_84f2; function

// SEG_1008:87c8
void *addr_table_1008_87c8[] = {
        pass1_1008_87a2, // 1008:87c8
};

// SEG_1008:8e9a
void *addr_table_1008_8e9a[] = {
        pass1_1008_8e74, // 1008:8e9a
};

// SEG_1008:9170
void *addr_table_1008_9170[] = {
        pass1_1008_914a, // 1008:9170
};

// - 1008:9416
void *addr_table_1008_9412[] = {
        // SEG_1008:9412
        pass1_1008_93c0, // 1008:9412
        pass1_1008_93ec, // 1008:9416
};

void *addr_table_1008_9d2e[] = {
        // SEG_1008:9d2e
        pass1_1008_9d02, // 1008:9d2e
        pass1_1008_3714, // 1008:9d32
};

// - 1008:9fca
// SEG_1008:9fb2
void *addr_table_1008_9fb2[] = {
        0,                       // FUN_1008_9f8c, // 1008:9fb2
        pass1_1010_1df2,         // 1008:9fb6
        pass1_1010_1dce,         // 1008:9fba
        pass1_1010_1dd4,         // 1008:9fbe
        create_dc_1018_4e04,     // 1008:9fc2
        unk_win_ui_op_1018_4f18, // 1008:9fc6
        pass1_1008_9f80,         // 1008:9fca
        pass1_1008_9f18,         // 1008:9fce
};

//- 1008:a230 -> INVALID

// - 1008:ad92
// SEG_1008:ad8a
void *addr_table_1008_ad8a[] = {
        pass1_1008_ad38, // 1008:ad8a
        pass1_1008_ad0c, // 1008:ad8e
        pass1_1008_ad64, // 1008:ad92
        pass1_1010_1df2, // 1008:ad96
        pass1_1010_1dce, // 1008:ad9a
        pass1_1010_1dd4, // 1008:ad9e
};

// SEG_1008:af7c
void *addr_table_1008_af7c[] = {
        pass1_1008_af56,         // 1008:af7c
        pass1_1010_1df2,         // 1008:af80
        pass1_1010_1dce,         // 1008:af84
        pass1_1010_1dd4,         // 1008:af88
        create_dc_1018_4e04,     // 1008:af8c
        unk_win_ui_op_1018_4f18, // 1008:af90
};

// - 1008:bdc4
// - 1008:bdc8
// - 1008:bdcc
// - 1008:bddc
// SEG_1008:bdc0
void *addr_table_1008_bdc0[] = {
        pass1_1008_bd74, // 1008:bdc0
        pass1_1008_bd4e, // 1008:bdc4
        pass1_1008_bd28, // 1008:bdc8
        pass1_1008_bd02, // 1008:bdcc
        pass1_1010_1df2, // 1008:bdd0
        pass1_1008_ba38, // 1008:bdd4
        file_1008_bb5e,  // 1008:bdd8
        pass1_1008_bd9a, // 1008:bddc
};

// SEG_1008:ca4a
void *addr_table_1008_ca4a[] = {
        pass1_1008_ca24, // 1008:ca4a
        pass1_1010_1df2, // 1008:ca4e
        pass1_1008_c98e, // 1008:ca52
        pass1_1008_c9d4, // 1008:ca56
};

// SEG_1008:d71a
void *addr_table_1008_d71a[] = {
        pass1_1008_d6f4, // 1008:d71a
        pass1_1010_1df2, // 1008:d71e
        pass1_1010_1dce, // 1008:d722
        pass1_1010_1dd4, // 1008:d726
        pass1_1008_cac6, // 1008:d72a
};

// SEG_1008:d780
void *addr_table_1008_d780[] = {
        pass1_1008_d75a, // 1008:d780
        pass1_1010_1df2, // 1008:d784
        pass1_1010_1dce, // 1008:d788
        pass1_1010_1dd4, // 1008:d78c
};

// SEG_1008:d98e
void *addr_table_1008_d98e[] = {
        pass1_1008_d968, // 1008:d98e
        pass1_1010_1df2, // 1008:d992
        pass1_1010_1dce, // 1008:d996
        pass1_1010_1dd4, // 1008:d99a
};

// SEG_1008:d9fa
void *addr_table_1008_d9fa[] = {
        pass1_1008_d9d4,         // 1008:d9fa
        pass1_1010_1df2,         // 1008:d9fe
        pass1_1010_1dce,         // 1008:da02
        pass1_1010_1dd4,         // 1008:da06
        create_dc_1018_4e04,     // 1008:da0a
        unk_win_ui_op_1018_4f18, // 1008:da0e
};

//- 1008:dc80 -> pass1_1008_dc80; function

// SEG_1008:dd4a
void *addr_table_1008_dd4a[] = {
        pass1_1008_dd1e, // 1008:dd4a
};

// SEG_1008:eaac
void *addr_table_1008_eaac[] = {
        pass1_1008_ea86, // 1008:eaac
        pass1_1010_1df2, // 1008:eab0
        pass1_1008_e5da, // 1008:eab4
        file_1008_e70e,  // 1008:eab8
};

// SEG_1008:eb1a
void *addr_table_1008_eb1a[] = {
        pass1_1008_eaf4, // 1008:eb1a
        pass1_1010_1df2, // 1008:eb1e
        pass1_1010_1dce, // 1008:eb22
        pass1_1010_1dd4, // 1008:eb26
};

// SEG_1008:ec00
void *addr_table_1008_ec00[] = {
        pass1_1008_ebda, // 1008:ec00
        pass1_1010_1df2, // 1008:ec04
        pass1_1010_1dce, // 1008:ec08
        pass1_1010_1dd4, // 1008:ec0c
};

// SEG_1008:ec62
void *addr_table_1008_ec62[] = {
        pass1_1008_ec3c, // 1008:ec62
        pass1_1010_1df2, // 1008:ec66
        pass1_1010_1dce, // 1008:ec6a
        pass1_1010_1dd4, // 1008:ec6e
};

// - 1008:efc4
// SEG_1008:ef9c
void *addr_table_1008_ef9c[] = {
        pass1_1008_ef76,              // 1008:ef9c
        pass1_1010_1df2,              // 1008:efa0
        pass1_1010_1dce,              // 1008:efa4
        pass1_1010_1dd4,              // 1008:efa8
        pass1_1008_ee14,              // 1008:efac
        pass1_1008_ee72,              // 1008:efb0
        unk_destroy_win_op_1010_305a, // 1008:efb4
        pass1_1010_3680,              // 1008:efb8
        pass1_1008_eea6,              // 1008:efbc
        pass1_1008_eeac,              // 1008:efc0
        pass1_1008_ef50,              // 1008:efc4
        pass1_1008_ef38,              // 1008:efc8
        mem_1008_ed1e,                // 1008:efcc
        pass1_1008_ed62,              // 1008:efd0
        pass1_1008_ed8a,              // 1008:efd4
        load_string_1008_ee56,        // 1008:efd8
        pass1_1008_ef4a,              // 1008:efdc
};

// SEG_1010:02c8
void *addr_table_1010_02c8[] = {
        pass1_1010_02a2,                // 1010:02c8
        pass1_1010_1df2,                // 1010:02cc
        pass1_1010_1dce,                // 1010:02d0
        pass1_1010_1dd4,                // 1010:02d4
        set_window_placement_1010_0070, // 1010:02d8
        set_win_placement_1010_010e,    // 1010:02dc
};

// SEG_1010:0ea8
void *addr_table_1010_0e98[] = {
        pass1_1010_0e46, // 1010:0e98  46  0e  10  10       addr
        pass1_1010_1df2, //  1010:0e9c  f2  1d  10  10       addr
        pass1_1010_0ad2, // 1010:0ea0  d2  0a  10  10       addr
        file_1010_0c7c,  // 1010:0ea4  7c  0c  10  10       addr
        pass1_1010_0e6c, // 1010:0ea8  6c  0e  10  10       addr

};

// - 1010:191a
void *addr_table_1010_191a[] = {
        pass1_1010_18f4,  // 1010:191a
        pass1_1010_1df2,  // 1010:191e
        pass1_1010_1dce,  // 1010:1922
        pass1_1010_1dd4,  // 1010:1926
        pass1_1010_116c,  // 1010:192a
        pass1_1010_2e5c,  // 1010:192e
        pass1_1010_1656,  // 1010:1932
        pass1_1010_16ee,  // 1010:1936
        0,                // FUN_1010_18e8, // 1010:193a
        0,                // FUN_1010_18ee, // 1010:193e
        struct_1010_0f9c, // 1010:1942
        string_1010_1722, // 1010:1946
        pass1_1010_1788,  // 1010:194a
        pass1_1010_17c0,  // 1010:194e
        pass1_1000_4f1a,  // 1010:1952
        pass1_1000_4f1a,  // 1010:1956
        pass1_1000_4f1a,  // 1010:195a
};

// SEG_1010:1b2a
void *addr_table_1010_1b2a[] = {
        pass1_1010_1b04,  // 1010:1b2a
        pass1_1010_1df2,  // 1010:1b2e
        pass1_1010_1dce,  // 1010:1b32
        pass1_1010_1dd4,  // 1010:1b36
        pass1_1010_116c,  // 1010:1b3a
        pass1_1010_2e5c,  // 1010:1b3e
        pass1_1010_1656,  // 1010:1b42
        pass1_1010_16ee,  // 1010:1b46
        0,                // FUN_1010_18e8, // 1010:1b4a
        0,                // FUN_1010_18ee, // 1010:1b4e
        struct_1010_0f9c, // 1010:1b52
        string_1010_1722, // 1010:1b56
        pass1_1010_1788,  // 1010:1b5a
        pass1_1010_17c0,  // 1010:1b5e
        pass1_1010_19a4,  // 1010:1b62
        pass1_1010_1a06,  // 1010:1b66
        pass1_1010_1a66,  // 1010:1b6a
};

// SEG_1010:1d04
void *addr_table_1010_1d04[] = {
        pass1_1010_1cde,  // 1010:1d04
        pass1_1010_1df2,  // 1010:1d08
        pass1_1010_1dce,  // 1010:1d0c
        pass1_1010_1dd4,  // 1010:1d10
        pass1_1010_116c,  // 1010:1d14
        pass1_1010_2e5c,  // 1010:1d18
        pass1_1010_1656,  // 1010:1d1c
        pass1_1010_16ee,  // 1010:1d20
        0,                // FUN_1010_18e8, // 1010:1d24
        0,                // FUN_1010_18ee, // 1010:1d28
        struct_1010_0f9c, // 1010:1d2c
        string_1010_1722, // 1010:1d30
        pass1_1010_1788,  // 1010:1d34
        pass1_1010_17c0,  // 1010:1d38
        pass1_1010_1bb4,  // 1010:1d3c
        pass1_1010_1c16,  // 1010:1d40
        pass1_1010_1c40,  // 1010:1d44
};
// SEG_1010:2014 -> pass1_1010_1fea
// SEG_1010:2010
void *addr_table_1010_2010[] = {
        pass1_1010_1fbe, // 1010:2010
        pass1_1010_1fea, // 1010:2014
        pass1_1010_1df2, // 1010:2018
        pass1_1010_1dce, // 1010:201c
        pass1_1010_1dd4, // 1010:2020
};

// SEG_1010:2be4
void *addr_table_1010_2be4[] = {
        pass1_1010_2bbe,         // 1010:2be4
        pass1_1010_1df2,         // 1010:2be8
        pass1_1010_1dce,         // 1010:2bec
        pass1_1010_1dd4,         // 1010:2bf0
        create_dc_1018_4e04,     // 1010:2bf4
        unk_win_ui_op_1018_4f18, // 1010:2bf8
};

void *addr_table_1010_2cc2[] = {
        pass1_1010_2c9c, // 1010:2cc2
        pass1_1010_1df2, // 1010:2cc6
        pass1_1010_1dce, // 1010:2cca
        pass1_1010_1dd4, // 1010:2cce
};

void *addr_table_1010_36da[] = {
        pass1_1010_36b4,              // 1010:36da
        pass1_1010_1df2,              // 1010:36de
        pass1_1010_1dce,              // 1010:36e2
        pass1_1010_1dd4,              // 1010:36e6
        pass1_1000_4f1a,              // 1010:36ea
        pass1_1010_2e5c,              // 1010:36ee
        unk_destroy_win_op_1010_305a, // 1010:36f2
        pass1_1010_3680,              // 1010:36f6
        0,                            // FUN_1010_18e8, // 1010:36fa
        0,                            // FUN_1010_18ee, // 1010:36fe
};

void *addr_table_1010_37c4[] = {
        pass1_1010_379e, // 1010:37c4
        pass1_1010_1df2, // 1010:37c8
        pass1_1010_1dce, // 1010:37cc
        pass1_1010_1dd4, // 1010:37d0
};

// void* addr_table_1010_3b5e[] = {}; -> pass1_1010_3b18
void *addr_table_1010_3d6a[] = {
        0,               // FUN_1010_3d44, // 1010:3d6a
        pass1_1010_1df2, // 1010:3d6e
        pass1_1010_1dce, // 1010:3d72
        pass1_1010_1dd4, // 1010:3d76
        pass1_1010_3d38, // 1010:3d7a
        pass1_1010_3d0a, // 1010:3d7e
};

// - 1010:3d7a -> pass1_1010_3d38
void *addr_table_1010_3e2c[] = {
        pass1_1010_3e06, // 1010:3e2c
        pass1_1010_1df2, // 1010:3e30
        pass1_1010_1dce, // 1010:3e34
        pass1_1010_1dd4, // 1010:3e38
};

void *addr_table_1010_4a46[] = {
        // - 1010:4a82 -> pass1_1010_4994
        pass1_1010_4a20,           // 1010:4a46
        pass1_1010_1df2,           // 1010:4a4a
        0,                         // FUN_1010_3fc2, // 1010:4a4e
        pass1_1010_404a,           // 1010:4a52
        pass1_1010_49a0,           // 1010:4a56
        pass1_1018_4c2c,           // 1010:4a5a
        pass1_1018_4b78,           // 1010:4a5e
        pass1_1010_49b0,           // 1010:4a62
        get_sys_metrics_1010_46f6, // 1010:4a66
        pass1_1010_49c0,           // 1010:4a6a
        pass1_1010_49ce,           // 1010:4a6e
        pass1_1010_49e0,           // 1010:4a72
        pass1_1010_49ee,           // 1010:4a76
        pass1_1010_4a00,           // 1010:4a7a
        pass1_1010_4a12,           // 1010:4a7e
        pass1_1010_4994,           // 1010:4a82
        pass1_1010_4566,           // 1010:4a86
};

void *addr_table_1010_502a[] = {
        pass1_1010_5004, // 1010:502a
        pass1_1010_1df2, // 1010:502e
        pass1_1010_1dce, // 1010:5032
        pass1_1010_1dd4, // 1010:5036
        pass1_1010_4c3e, // 1010:503a
};

void *addr_table_1010_509a[] = {
        pass1_1010_5074,         // 1010:509a
        pass1_1010_1df2,         // 1010:509e
        pass1_1010_1dce,         // 1010:50a2
        pass1_1010_1dd4,         // 1010:50a6
        create_dc_1018_4e04,     // 1010:50aa
        unk_win_ui_op_1018_4f18, // 1010:50ae
};

void *addr_table_1010_53f4[] = {
        pass1_1010_53ce, // 1010:53f4
        pass1_1010_1df2, // 1010:53f8
        pass1_1010_1dce, // 1010:53fc
        pass1_1010_1dd4, // 1010:5400
};

void *addr_table_1010_6312[] = {
        // - 1010:6322 -> pass1_1010_62a4
        pass1_1010_62ec, // 1010:6312
        pass1_1010_1df2, // 1010:6316
        pass1_1010_5dc6, // 1010:631a
        pass1_1010_5e56, // 1010:631e
        pass1_1010_62a4, // 1010:6322
};

void *addr_table_1010_6aac[] = {
        pass1_1010_6a86,         // 1010:6aac
        pass1_1010_1df2,         // 1010:6ab0
        write_to_file_1010_6846, // 1010:6ab4
        pass1_1010_68c6,         // 1010:6ab8
};

// - 1010:7e28 -> pass1_1010_7dfe
// - 1010:7e38 -> pass1_1010_7dc6
void *addr_table_1010_7e24[] = {
        pass1_1010_7dd2, // 1010:7e24
        0,               // FUN_1010_7dfe, // 1010:7e28
        pass1_1010_1df2, // 1010:7e2c
        pass1_1010_1dce, // 1010:7e30
        pass1_1010_1dd4, // 1010:7e34
        pass1_1010_7dc6, // 1010:7e38
        0,               // FUN_1010_7174, // 1010:7e3c
};

// - 1010:8ee2 -> pass1_1010_8ebc
void *addr_table_1010_8ee2[] = {
        pass1_1010_8ebc, // 1010:8ee2
        pass1_1010_1df2, // 1010:8ee6
        pass1_1010_1dce, // 1010:8eea
        pass1_1010_1dd4, // 1010:8eee
};

// - 1010:9254 -> pass1_1010_922e

void *addr_table_1010_9254[] = {
        pass1_1010_922e, // 1010:9254
};

void *addr_table_1010_9566[] = {
        // - 1010:958e -> pass1_1010_951a
        pass1_1010_9540,              // 1010:9566
        pass1_1010_1df2,              // 1010:956a
        pass1_1010_1dce,              // 1010:956e
        pass1_1010_1dd4,              // 1010:9572
        pass1_1010_93f0,              // 1010:9576
        pass1_1010_944e,              // 1010:957a
        unk_destroy_win_op_1010_305a, // 1010:957e
        pass1_1010_3680,              // 1010:9582
        0,                            // FUN_1010_9482, // 1010:9586
        pass1_1010_9488,              // 1010:958a
        pass1_1010_951a,              // 1010:958e
        pass1_1010_9502,              // 1010:9592
        pass1_1010_9304,              // 1010:9596
        pass1_1010_9348,              // 1010:959a
        pass1_1010_9372,              // 1010:959e
        load_string_1010_9432,        // 1010:95a2
        pass1_1010_9514,              // 1010:95a6
};

// - 1010:9e8c -> INVALID
void *addr_table_1010_a1c4[] = {
        // - 1010:a1c8 -> pass1_1010_a172
        pass1_1010_a198, // 1010:a1c4
        pass1_1010_a172, // 1010:a1c8
        pass1_1010_1df2, // 1010:a1cc
        0,               // FUN_1010_9900, // 1010:a1d0
        0,               // FUN_1010_9b72, // 1010:a1d4
};

void *addr_table_1010_e9cc[] = {
        0,               // FUN_1010_e9a6, // 1010:e9cc
        pass1_1010_1df2, // 1010:e9d0
        pass1_1010_1dce, // 1010:e9d4
        pass1_1010_1dd4, // 1010:e9d8
        pass1_1010_e99a, // 1010:e9dc
        pass1_1010_acec, // 1010:e9e0
};

// ### 1018

void *addr_table_1018_0558[] = {
        // - 1018:0568 -> pass1_1018_0526
        0,                       // FUN_1018_0532, // 1018:0558
        pass1_1010_1df2,         // 1018:055c
        write_to_file_1010_ed58, // 1018:0560
        pass1_1018_0000,         // 1018:0564
        pass1_1018_0526,         // 1018:0568
        pass1_1018_03ea,         // 1018:056c
};

void *addr_table_1018_1874[] = {
        // - 1018:18b0 -> pass1_1018_1842
        0,                         // FUN_1018_184e, // 1018:1874
        pass1_1010_1df2,           // 1018:1878
        pass1_1010_1dce,           // 1018:187c
        pass1_1010_1dd4,           // 1018:1880
        pass1_1010_49a0,           // 1018:1884
        pass1_1018_4c2c,           // 1018:1888
        pass1_1018_4b78,           // 1018:188c
        pass1_1010_49b0,           // 1018:1890
        get_sys_metrics_1018_09a8, // 1018:1894
        pass1_1018_0d76,           // 1018:1898
        pass1_1018_0aa0,           // 1018:189c
        pass1_1010_49e0,           // 1018:18a0
        pass1_1010_49ee,           // 1018:18a4
        pass1_1010_4a00,           // 1018:18a8
        pass1_1010_4a12,           // 1018:18ac
        pass1_1018_1842,           // 1018:18b0
        pass1_1018_0bf4,           // 1018:18b4
};

void *addr_table_1018_1fb0[] = {
        // - 1018:1fec -> pass1_1018_1f6a
        pass1_1018_1f8a, // 1018:1fb0
        pass1_1010_1df2, // 1018:1fb4
        pass1_1010_1dce, // 1018:1fb8
        pass1_1010_1dd4, // 1018:1fbc
        pass1_1018_1f7a, // 1018:1fc0
        pass1_1018_4c2c, // 1018:1fc4
        pass1_1018_4b78, // 1018:1fc8
        pass1_1010_49b0, // 1018:1fcc
        0,               // FUN_1018_1f76, // 1018:1fd0
        pass1_1010_49c0, // 1018:1fd4
        pass1_1010_49ce, // 1018:1fd8
        pass1_1010_49e0, // 1018:1fdc
        pass1_1010_49ee, // 1018:1fe0
        pass1_1010_4a00, // 1018:1fe4
        pass1_1010_4a12, // 1018:1fe8
        pass1_1018_1f6a, // 1018:1fec
        pass1_1008_3a10, // 1018:1ff0
};

// - 1018:21e8 -> pass1_1018_21c2
void *addr_table_1018_21e8[] = {
        pass1_1018_21c2, // 1018:21e8
        pass1_1010_1df2, // 1018:21ec
        pass1_1010_1dce, // 1018:21f0
        pass1_1010_1dd4, // 1018:21f4
};

void *addr_table_1018_2ada[] = {
        // - 1018:2af2 -> pass1_1018_2aa8
        0,                      // FUN_1018_2ab4, // 1018:2ada
        pass1_1010_1df2,        // 1018:2ade
        pass1_1010_1dce,        // 1018:2ae2
        pass1_1010_1dd4,        // 1018:2ae6
        win_op_1018_294a,       // 1018:2aea
        mixed_sys_op_1018_2978, // 1018:2aee
        pass1_1018_2aa8,        // 1018:2af2
        pass1_1018_289c,        // 1018:2af6
};

// - 1018:32d8 -> FUN_1018_32b2
void *addr_table_1018_32d8[] = {
        0,                         // FUN_1018_32b2, // 1018:32d8
        pass1_1010_1df2,           // 1018:32dc
        pass1_1010_1dce,           // 1018:32e0
        pass1_1010_1dd4,           // 1018:32e4
        pass1_1010_49a0,           // 1018:32e8
        pass1_1018_4c2c,           // 1018:32ec
        pass1_1018_4b78,           // 1018:32f0
        pass1_1010_49b0,           // 1018:32f4
        get_sys_metrics_1018_2f56, // 1018:32f8
        pass1_1010_49c0,           // 1018:32fc
        pass1_1010_49ce,           // 1018:3300
        pass1_1010_49e0,           // 1018:3304
        pass1_1010_49ee,           // 1018:3308
        pass1_1010_4a00,           // 1018:330c
        pass1_1010_4a12,           // 1018:3310
        pass1_1018_32a6,           // 1018:3314
        pass1_1018_2ee4,           // 1018:3318
};

void *addr_table_1018_470c[] = {
        pass1_1018_46e6, // 1018:470c
        pass1_1010_1df2, // 1018:4710
        pass1_1010_1dce, // 1018:4714
        pass1_1010_1dd4, // 1018:4718
        pass1_1018_3ea4, // 1018:471c
};

void *addr_table_1018_4a8a[] = {
        pass1_1018_4a64, // 1018:4a8a
        pass1_1018_49f2, // 1018:4a8e
        pass1_1018_4980, // 1018:4a92
        pass1_1018_4a18, // 1018:4a96
        pass1_1018_49a6, // 1018:4a9a
        pass1_1018_4a3e, // 1018:4a9e
        pass1_1018_49cc, // 1018:4aa2
        pass1_1018_495a, // 1018:4aa6
};

void *addr_table_1018_4b06[] = {
        pass1_1018_4ae0,         // 1018:4b06
        pass1_1010_1df2,         // 1018:4b0a
        pass1_1010_1dce,         // 1018:4b0e
        pass1_1010_1dd4,         // 1018:4b12
        create_dc_1018_4e04,     // 1018:4b16
        unk_win_ui_op_1018_4f18, // 1018:4b1a
};

void *addr_table_1018_4c9e[] = {
        pass1_1018_4c78, // 1018:4c9e
        pass1_1010_1df2, // 1018:4ca2
        pass1_1010_1dce, // 1018:4ca6
        pass1_1010_1dd4, // 1018:4caa
        pass1_1010_49a0, // 1018:4cae
        pass1_1018_4c2c, // 1018:4cb2
        pass1_1018_4b78, // 1018:4cb6
        pass1_1010_49b0, // 1018:4cba
        0,               // FUN_1018_1f76, // 1018:4cbe
        pass1_1010_49c0, // 1018:4cc2
        pass1_1010_49ce, // 1018:4cc6
        pass1_1010_49e0, // 1018:4cca
        pass1_1010_49ee, // 1018:4cce
        pass1_1010_4a00, // 1018:4cd2
        pass1_1010_4a12, // 1018:4cd6
};

void *addr_table_1018_5058[] = {
        pass1_1018_5032,         // 1018:5058
        pass1_1010_1df2,         // 1018:505c
        pass1_1010_1dce,         // 1018:5060
        pass1_1010_1dd4,         // 1018:5064
        create_dc_1018_4e04,     // 1018:5068
        unk_win_ui_op_1018_4f18, // 1018:506c
};

void *addr_table_1018_56ce[] = {
        pass1_1018_567c, // 1018:56ce
        pass1_1018_56a8, // 1018:56d2
        pass1_1010_1df2, // 1018:56d6
        pass1_1010_1dce, // 1018:56da
        pass1_1010_1dd4, // 1018:56de
        pass1_1018_51d2, // 1018:56e2
};

// - 1018:5830 -> pass1_1018_580a
void *addr_table_1018_5830[] = {
        pass1_1018_580a, // 1018:5830
        pass1_1010_1df2, // 1018:5834
        pass1_1010_1dce, // 1018:5838
        pass1_1010_1dd4, // 1018:583c
};

void *addr_table_1018_5a62[] = {
        // - 1018:5afe -> pass1_1018_5a2e
        0,                           // FUN_1018_5a3c, // 1018:5a62
        pass1_1008_68ea,             // 1018:5a66
        win_1018_598c,               // 1018:5a6a
        pass1_1008_68c6,             // 1018:5a6e
        send_msg_1008_9640,          // 1018:5a72
        set_win_text_1008_9664,      // 1018:5a76
        pass1_1008_372c,             // 1018:5a7a
        unk_win_op_1008_97f2,        // 1018:5a7e
        pass1_1008_373c,             // 1018:5a82
        pass1_1008_3740,             // 1018:5a86
        pass1_1008_3744,             // 1018:5a8a
        pass1_1008_3748,             // 1018:5a8e
        pass1_1008_374c,             // 1018:5a92
        pass1_1018_5932,             // 1018:5a96
        destroy_win_1008_9698,       // 1018:5a9a
        destroy_window_1020_8250,    // 1018:5a9e
        invalidate_rect_1018_58e2,   // 1018:5aa2
        pass1_1008_9c60,             // 1018:5aa6
        pass1_1008_3758,             // 1018:5aaa
        0,                           // FUN_1008_6324, // 1018:5aae
        pass1_1008_9c4e,             // 1018:5ab2
        pass1_1008_3762,             // 1018:5ab6
        pass1_1008_9c4a,             // 1018:5aba
        pass1_1008_3766,             // 1018:5abe
        pass1_1020_8106,             // 1018:5ac2
        pass1_1008_6a4a,             // 1018:5ac6
        pass1_1008_6b2e,             // 1018:5aca
        pass1_1008_6b02,             // 1018:5ace
        pass1_1008_377a,             // 1018:5ad2
        pass1_1008_9c52,             // 1018:5ad6
        get_stock_obj_1008_9c56,     // 1018:5ada
        pass1_1008_9c16,             // 1018:5ade
        pass1_1008_9c30,             // 1018:5ae2
        pass1_1008_9c86,             // 1018:5ae6
        pass1_1008_9cc4,             // 1018:5aea
        win_ui_palette_op_1020_81c0, // 1018:5aee
        0,                           // FUN_1018_59f0, // 1018:5af2
        0,                           // FUN_1008_6328, // 1018:5af6
        realize_palette_1020_8128,   // 1018:5afa
        pass1_1018_5a2e,             // 1018:5afe
        pass1_1008_3a10,             // 1018:5b02
};

void *addr_table_1018_5e1a[] = {
        pass1_1018_5df4,           // 1018:5e1a
        invalidate_rect_1018_5d32, // 1018:5e1e
        misc_draw_op_1018_5d6c,    // 1018:5e22
};

void *addr_table_1018_6128[] = {
        pass1_1018_6102,             // 1018:6128
        pass1_1008_3a10,             // 1018:612c
        win_ui_op_1018_5e9a,         // 1018:6130
        pass1_1040_79c0,             // 1018:6134
        post_win_msg_1040_7b3c,      // 1018:6138
        destroy_win_1040_7b98,       // 1018:613c
        post_win_msg_1040_7f56,      // 1018:6140
        draw_op_1040_7bb2,           // 1018:6144
        post_win_msg_1040_7f1c,      // 1018:6148
        pass1_1018_5e86,             // 1018:614c
        menu_ui_op_1040_7f86,        // 1018:6150
        win_help_1040_800c,          // 1018:6154
        pass1_1040_8054,             // 1018:6158
        set_text_bk_color_1040_7e5e, // 1018:615c
        unk_win_ui_op_1040_8158,     // 1018:6160
        check_dialog_msg_1040_81b6,  // 1018:6164
        set_sys_modal_window_1040_81fe,         // 1018:6168
        0,                           // FUN_1018_60ea, // 1018:616c
        pass1_1040_824a,             // 1018:6170
        0,                           // FUN_1040_8266, // 1018:6174
        pass1_1040_78de,             // 1018:6178
        0,                           // FUN_1018_60ee, // 1018:617c
        0,                           // FUN_1018_60f4, // 1018:6180
        0,                           // FUN_1018_60fa, // 1018:6184
        pass1_1018_6048,             // 1018:6188
        0,                           // FUN_1018_60fe, // 1018:618c
        pass1_1040_807e,             // 1018:6190
        pass1_1018_5ffa,             // 1018:6194
};

void *addr_table_1018_66c0[] = {
        pass1_1018_669a,       // 1018:66c0
        pass1_1008_3a10,       // 1018:66c4
        unk_draw_op_1018_623e, // 1018:66c8
};

// - 1018:6880 -> FUN_1018_685a
void *addr_table_1018_6880[] = {
        0,                           // FUN_1018_685a, // 1018:6880
        pass1_1008_68ea,             // 1018:6884
        window_op_1018_67b6,         // 1018:6888
        pass1_1008_68c6,             // 1018:688c
        send_msg_1008_9640,          // 1018:6890
        set_win_text_1008_9664,      // 1018:6894
        pass1_1008_372c,             // 1018:6898
        unk_win_op_1008_97f2,        // 1018:689c
        pass1_1008_373c,             // 1018:68a0
        pass1_1008_3740,             // 1018:68a4
        pass1_1008_3744,             // 1018:68a8
        pass1_1008_3748,             // 1018:68ac
        pass1_1008_374c,             // 1018:68b0
        pass1_1018_6768,             // 1018:68b4
        destroy_win_1008_9698,       // 1018:68b8
        destroy_window_1020_8250,    // 1018:68bc
        pass1_1008_3754,             // 1018:68c0
        pass1_1008_9c60,             // 1018:68c4
        pass1_1008_3758,             // 1018:68c8
        0,                           // FUN_1008_6324, // 1018:68cc
        pass1_1008_9c4e,             // 1018:68d0
        pass1_1008_3762,             // 1018:68d4
        pass1_1008_9c4a,             // 1018:68d8
        pass1_1008_3766,             // 1018:68dc
        pass1_1020_8106,             // 1018:68e0
        pass1_1008_6a4a,             // 1018:68e4
        pass1_1008_6b2e,             // 1018:68e8
        pass1_1008_6b02,             // 1018:68ec
        pass1_1008_377a,             // 1018:68f0
        pass1_1008_9c52,             // 1018:68f4
        get_stock_obj_1008_9c56,     // 1018:68f8
        pass1_1008_9c16,             // 1018:68fc
        pass1_1008_9c30,             // 1018:6900
        pass1_1008_9c86,             // 1018:6904
        pass1_1008_9cc4,             // 1018:6908
        win_ui_palette_op_1020_81c0, // 1018:690c
        pass1_1018_681a,             // 1018:6910
        0,                           // FUN_1008_6328, // 1018:6914
        realize_palette_1020_8128,   // 1018:6918
        pass1_1018_684c,             // 1018:691c
        pass1_1008_3a10,             // 1018:6920
};

void *addr_table_1018_6a02[] = {
        pass1_1018_69dc,       // 1018:6a02
        pass1_1008_3a10,       // 1018:6a06
        mix_draw_op_1020_9312, // 1018:6a0a
};

// - 1018:6c66 -> pass1_1018_6c1e
void *addr_table_1018_6c66[] = {
        pass1_1018_6c1e,            // 1018:6c66
        pass1_1008_68ea,            // 1018:6c6a
        create_window_ex_1008_9760, // 1018:6c6e
        pass1_1008_68c6,            // 1018:6c72
        send_msg_1008_9640,         // 1018:6c76
        set_win_text_1008_9664,     // 1018:6c7a
        pass1_1008_372c,            // 1018:6c7e
        unk_win_op_1008_97f2,       // 1018:6c82
        pass1_1008_373c,            // 1018:6c86
        pass1_1008_3740,            // 1018:6c8a
        pass1_1008_3744,            // 1018:6c8e
        pass1_1008_3748,            // 1018:6c92
        pass1_1008_374c,            // 1018:6c96
        mixed_draw_op_1018_6a7a,    // 1018:6c9a
        destroy_win_1008_9698,      // 1018:6c9e
        pass1_1008_3750,            // 1018:6ca2
        0,                          // FUN_1018_6a76, // 1018:6ca6
        pass1_1008_9c60,            // 1018:6caa
        pass1_1008_3758,            // 1018:6cae
        0,                          // FUN_1008_6324, // 1018:6cb2
        pass1_1008_9c4e,            // 1018:6cb6
        pass1_1008_3762,            // 1018:6cba
        pass1_1008_9c4a,            // 1018:6cbe
        pass1_1008_3766,            // 1018:6cc2
        0,                          // FUN_1008_376a, // 1018:6cc6
        pass1_1008_6a4a,            // 1018:6cca
        pass1_1008_6b2e,            // 1018:6cce
        pass1_1008_6b02,            // 1018:6cd2
        pass1_1008_377a,            // 1018:6cd6
        pass1_1008_9c52,            // 1018:6cda
        get_stock_obj_1008_9c56,    // 1018:6cde
        pass1_1008_9c16,            // 1018:6ce2
        pass1_1008_9c30,            // 1018:6ce6
        pass1_1008_9c86,            // 1018:6cea
        pass1_1008_9cc4,            // 1018:6cee
        pass1_1008_9ce0,            // 1018:6cf2
        destroy_win_1008_628e,      // 1018:6cf6
        0,                          // FUN_1008_6328, // 1018:6cfa
        0,                          // FUN_1008_632c, // 1018:6cfe
};

void *addr_table_1018_93de[] = {
        pass1_1018_8106,            // 1018:93de
        pass1_1008_68ea,            // 1018:93e2
        create_window_ex_1008_9760, // 1018:93e6
        pass1_1008_68c6,            // 1018:93ea
        send_msg_1008_9640,         // 1018:93ee
        set_win_text_1008_9664,     // 1018:93f2
        pass1_1008_372c,            // 1018:93f6
        unk_win_op_1008_97f2,       // 1018:93fa
        pass1_1008_373c,            // 1018:93fe
        pass1_1008_3740,            // 1018:9402
        pass1_1008_3744,            // 1018:9406
        pass1_1008_3748,            // 1018:940a
        pass1_1008_374c,            // 1018:940e
        mixed_draw_op_1018_6a7a,    // 1018:9412
        destroy_win_1008_9698,      // 1018:9416
        pass1_1008_3750,            // 1018:941a
        0,                          // FUN_1018_6a76, // 1018:941e
        pass1_1008_9c60,            // 1018:9422
        pass1_1008_3758,            // 1018:9426
        0,                          // FUN_1008_6324, // 1018:942a
        pass1_1008_9c4e,            // 1018:942e
        pass1_1008_3762,            // 1018:9432
        pass1_1008_9c4a,            // 1018:9436
        pass1_1008_3766,            // 1018:943a
        0,                          // FUN_1008_376a, // 1018:943e
        pass1_1008_6a4a,            // 1018:9442
        pass1_1008_6b2e,            // 1018:9446
        pass1_1008_6b02,            // 1018:944a
        pass1_1008_377a,            // 1018:944e
        pass1_1008_9c52,            // 1018:9452
        get_stock_obj_1008_9c56,    // 1018:9456
        pass1_1008_9c16,            // 1018:945a
        pass1_1008_9c30,            // 1018:945e
        pass1_1008_9c86,            // 1018:9462
        pass1_1008_9cc4,            // 1018:9466
        pass1_1008_9ce0,            // 1018:946a
        destroy_win_1008_628e,      // 1018:946e
        0,                          // FUN_1008_6328, // 1018:9472
        0,                          // FUN_1008_632c, // 1018:9476
        pass1_1018_934e,            // 1018:947a
        pass1_1008_68ea,            // 1018:947e
        create_window_ex_1008_9760, // 1018:9482
        pass1_1008_68c6,            // 1018:9486
        send_msg_1008_9640,         // 1018:948a
        set_win_text_1008_9664,     // 1018:948e
        pass1_1008_372c,            // 1018:9492
        unk_win_op_1008_97f2,       // 1018:9496
        pass1_1008_373c,            // 1018:949a
        pass1_1008_3740,            // 1018:949e
        pass1_1008_3744,            // 1018:94a2
        pass1_1008_3748,            // 1018:94a6
        pass1_1008_374c,            // 1018:94aa
        mixed_draw_op_1018_6a7a,    // 1018:94ae
        destroy_win_1008_9698,      // 1018:94b2
        pass1_1008_3750,            // 1018:94b6
        0,                          // FUN_1018_6a76, // 1018:94ba
        pass1_1008_9c60,            // 1018:94be
        pass1_1008_3758,            // 1018:94c2
        0,                          // FUN_1008_6324, // 1018:94c6
        pass1_1008_9c4e,            // 1018:94ca
        pass1_1008_3762,            // 1018:94ce
        pass1_1008_9c4a,            // 1018:94d2
        pass1_1008_3766,            // 1018:94d6
        0,                          // FUN_1008_376a, // 1018:94da
        pass1_1008_6a4a,            // 1018:94de
        pass1_1008_6b2e,            // 1018:94e2
        pass1_1008_6b02,            // 1018:94e6
        pass1_1008_377a,            // 1018:94ea
        pass1_1008_9c52,            // 1018:94ee
        get_stock_obj_1008_9c56,    // 1018:94f2
        pass1_1008_9c16,            // 1018:94f6
        pass1_1008_9c30,            // 1018:94fa
        pass1_1008_9c86,            // 1018:94fe
        pass1_1008_9cc4,            // 1018:9502
        pass1_1008_9ce0,            // 1018:9506
        destroy_win_1008_628e,      // 1018:950a
        0,                          // FUN_1008_6328, // 1018:950e
        0,                          // FUN_1008_632c, // 1018:9512
        pass1_1018_88e6,            // 1018:9516
        pass1_1008_68ea,            // 1018:951a
        create_window_ex_1008_9760, // 1018:951e
        pass1_1008_68c6,            // 1018:9522
        send_msg_1008_9640,         // 1018:9526
        set_win_text_1008_9664,     // 1018:952a
        pass1_1008_372c,            // 1018:952e
        unk_win_op_1008_97f2,       // 1018:9532
        pass1_1008_373c,            // 1018:9536
        pass1_1008_3740,            // 1018:953a
        pass1_1008_3744,            // 1018:953e
        pass1_1008_3748,            // 1018:9542
        pass1_1008_374c,            // 1018:9546
        mixed_draw_op_1018_6a7a,    // 1018:954a
        destroy_win_1008_9698,      // 1018:954e
        pass1_1008_3750,            // 1018:9552
        0,                          // FUN_1018_6a76, // 1018:9556
        pass1_1008_9c60,            // 1018:955a
        pass1_1008_3758,            // 1018:955e
        0,                          // FUN_1008_6324, // 1018:9562
        pass1_1008_9c4e,            // 1018:9566
        pass1_1008_3762,            // 1018:956a
        pass1_1008_9c4a,            // 1018:956e
        pass1_1008_3766,            // 1018:9572
        0,                          // FUN_1008_376a, // 1018:9576
        pass1_1008_6a4a,            // 1018:957a
        pass1_1008_6b2e,            // 1018:957e
        pass1_1008_6b02,            // 1018:9582
        pass1_1008_377a,            // 1018:9586
        pass1_1008_9c52,            // 1018:958a
        get_stock_obj_1008_9c56,    // 1018:958e
        pass1_1008_9c16,            // 1018:9592
        pass1_1008_9c30,            // 1018:9596
        pass1_1008_9c86,            // 1018:959a
        pass1_1008_9cc4,            // 1018:959e
        pass1_1008_9ce0,            // 1018:95a2
        destroy_win_1008_628e,      // 1018:95a6
        0,                          // FUN_1008_6328, // 1018:95aa
        0,                          // FUN_1008_632c, // 1018:95ae
        pass1_1018_8ece,            // 1018:95b2
        pass1_1008_68ea,            // 1018:95b6
        create_window_ex_1008_9760, // 1018:95ba
        pass1_1008_68c6,            // 1018:95be
        send_msg_1008_9640,         // 1018:95c2
        set_win_text_1008_9664,     // 1018:95c6
        pass1_1008_372c,            // 1018:95ca
        unk_win_op_1008_97f2,       // 1018:95ce
        pass1_1008_373c,            // 1018:95d2
        pass1_1008_3740,            // 1018:95d6
        pass1_1008_3744,            // 1018:95da
        pass1_1008_3748,            // 1018:95de
        pass1_1008_374c,            // 1018:95e2
        mixed_draw_op_1018_6a7a,    // 1018:95e6
        destroy_win_1008_9698,      // 1018:95ea
        pass1_1008_3750,            // 1018:95ee
        0,                          // FUN_1018_6a76, // 1018:95f2
        pass1_1008_9c60,            // 1018:95f6
        pass1_1008_3758,            // 1018:95fa
        0,                          // FUN_1008_6324, // 1018:95fe
        pass1_1008_9c4e,            // 1018:9602
        pass1_1008_3762,            // 1018:9606
        pass1_1008_9c4a,            // 1018:960a
        pass1_1008_3766,            // 1018:960e
        0,                          // FUN_1008_376a, // 1018:9612
        pass1_1008_6a4a,            // 1018:9616
        pass1_1008_6b2e,            // 1018:961a
        pass1_1008_6b02,            // 1018:961e
        pass1_1008_377a,            // 1018:9622
        pass1_1008_9c52,            // 1018:9626
        get_stock_obj_1008_9c56,    // 1018:962a
        pass1_1008_9c16,            // 1018:962e
        pass1_1008_9c30,            // 1018:9632
        pass1_1008_9c86,            // 1018:9636
        pass1_1008_9cc4,            // 1018:963a
        pass1_1008_9ce0,            // 1018:963e
        destroy_win_1008_628e,      // 1018:9642
        0,                          // FUN_1008_6328, // 1018:9646
        0,                          // FUN_1008_632c, // 1018:964a
        pass1_1018_7f9e,            // 1018:964e
        pass1_1008_68ea,            // 1018:9652
        create_window_ex_1008_9760, // 1018:9656
        pass1_1008_68c6,            // 1018:965a
        send_msg_1008_9640,         // 1018:965e
        set_win_text_1008_9664,     // 1018:9662
        pass1_1008_372c,            // 1018:9666
        unk_win_op_1008_97f2,       // 1018:966a
        pass1_1008_373c,            // 1018:966e
        pass1_1008_3740,            // 1018:9672
        pass1_1008_3744,            // 1018:9676
        pass1_1008_3748,            // 1018:967a
        pass1_1008_374c,            // 1018:967e
        mixed_draw_op_1018_6a7a,    // 1018:9682
        destroy_win_1008_9698,      // 1018:9686
        pass1_1008_3750,            // 1018:968a
        0,                          // FUN_1018_6a76, // 1018:968e
        pass1_1008_9c60,            // 1018:9692
        pass1_1008_3758,            // 1018:9696
        0,                          // FUN_1008_6324, // 1018:969a
        pass1_1008_9c4e,            // 1018:969e
        pass1_1008_3762,            // 1018:96a2
        pass1_1008_9c4a,            // 1018:96a6
        pass1_1008_3766,            // 1018:96aa
        0,                          // FUN_1008_376a, // 1018:96ae
        pass1_1008_6a4a,            // 1018:96b2
        pass1_1008_6b2e,            // 1018:96b6
        pass1_1008_6b02,            // 1018:96ba
        pass1_1008_377a,            // 1018:96be
        pass1_1008_9c52,            // 1018:96c2
        get_stock_obj_1008_9c56,    // 1018:96c6
        pass1_1008_9c16,            // 1018:96ca
        pass1_1008_9c30,            // 1018:96ce
        pass1_1008_9c86,            // 1018:96d2
        pass1_1008_9cc4,            // 1018:96d6
        pass1_1008_9ce0,            // 1018:96da
        destroy_win_1008_628e,      // 1018:96de
        0,                          // FUN_1008_6328, // 1018:96e2
        0,                          // FUN_1008_632c, // 1018:96e6
        pass1_1018_877e,            // 1018:96ea
        pass1_1008_68ea,            // 1018:96ee
        create_window_ex_1008_9760, // 1018:96f2
        pass1_1008_68c6,            // 1018:96f6
        send_msg_1008_9640,         // 1018:96fa
        set_win_text_1008_9664,     // 1018:96fe
        pass1_1008_372c,            // 1018:9702
        unk_win_op_1008_97f2,       // 1018:9706
        pass1_1008_373c,            // 1018:970a
        pass1_1008_3740,            // 1018:970e
        pass1_1008_3744,            // 1018:9712
        pass1_1008_3748,            // 1018:9716
        pass1_1008_374c,            // 1018:971a
        mixed_draw_op_1018_6a7a,    // 1018:971e
        destroy_win_1008_9698,      // 1018:9722
        pass1_1008_3750,            // 1018:9726
        0,                          // FUN_1018_6a76, // 1018:972a
        pass1_1008_9c60,            // 1018:972e
        pass1_1008_3758,            // 1018:9732
        0,                          // FUN_1008_6324, // 1018:9736
        pass1_1008_9c4e,            // 1018:973a
        pass1_1008_3762,            // 1018:973e
        pass1_1008_9c4a,            // 1018:9742
        pass1_1008_3766,            // 1018:9746
        0,                          // FUN_1008_376a, // 1018:974a
        pass1_1008_6a4a,            // 1018:974e
        pass1_1008_6b2e,            // 1018:9752
        pass1_1008_6b02,            // 1018:9756
        pass1_1008_377a,            // 1018:975a
        pass1_1008_9c52,            // 1018:975e
        get_stock_obj_1008_9c56,    // 1018:9762
        pass1_1008_9c16,            // 1018:9766
        pass1_1008_9c30,            // 1018:976a
        pass1_1008_9c86,            // 1018:976e
        pass1_1008_9cc4,            // 1018:9772
        pass1_1008_9ce0,            // 1018:9776
        destroy_win_1008_628e,      // 1018:977a
        0,                          // FUN_1008_6328, // 1018:977e
        0,                          // FUN_1008_632c, // 1018:9782
        pass1_1018_8d66,            // 1018:9786
        pass1_1008_68ea,            // 1018:978a
        create_window_ex_1008_9760, // 1018:978e
        pass1_1008_68c6,            // 1018:9792
        send_msg_1008_9640,         // 1018:9796
        set_win_text_1008_9664,     // 1018:979a
        pass1_1008_372c,            // 1018:979e
        unk_win_op_1008_97f2,       // 1018:97a2
        pass1_1008_373c,            // 1018:97a6
        pass1_1008_3740,            // 1018:97aa
        pass1_1008_3744,            // 1018:97ae
        pass1_1008_3748,            // 1018:97b2
        pass1_1008_374c,            // 1018:97b6
        mixed_draw_op_1018_6a7a,    // 1018:97ba
        destroy_win_1008_9698,      // 1018:97be
        pass1_1008_3750,            // 1018:97c2
        0,                          // FUN_1018_6a76, // 1018:97c6
        pass1_1008_9c60,            // 1018:97ca
        pass1_1008_3758,            // 1018:97ce
        0,                          // FUN_1008_6324, // 1018:97d2
        pass1_1008_9c4e,            // 1018:97d6
        pass1_1008_3762,            // 1018:97da
        pass1_1008_9c4a,            // 1018:97de
        pass1_1008_3766,            // 1018:97e2
        0,                          // FUN_1008_376a, // 1018:97e6
        pass1_1008_6a4a,            // 1018:97ea
        pass1_1008_6b2e,            // 1018:97ee
        pass1_1008_6b02,            // 1018:97f2
        pass1_1008_377a,            // 1018:97f6
        pass1_1008_9c52,            // 1018:97fa
        get_stock_obj_1008_9c56,    // 1018:97fe
        pass1_1008_9c16,            // 1018:9802
        pass1_1008_9c30,            // 1018:9806
        pass1_1008_9c86,            // 1018:980a
        pass1_1008_9cc4,            // 1018:980e
        pass1_1008_9ce0,            // 1018:9812
        destroy_win_1008_628e,      // 1018:9816
        0,                          // FUN_1008_6328, // 1018:981a
        0,                          // FUN_1008_632c, // 1018:981e
        pass1_1018_7e36,            // 1018:9822
        pass1_1008_68ea,            // 1018:9826
        create_window_ex_1008_9760, // 1018:982a
        pass1_1008_68c6,            // 1018:982e
        send_msg_1008_9640,         // 1018:9832
        set_win_text_1008_9664,     // 1018:9836
        pass1_1008_372c,            // 1018:983a
        unk_win_op_1008_97f2,       // 1018:983e
        pass1_1008_373c,            // 1018:9842
        pass1_1008_3740,            // 1018:9846
        pass1_1008_3744,            // 1018:984a
        pass1_1008_3748,            // 1018:984e
        pass1_1008_374c,            // 1018:9852
        mixed_draw_op_1018_6a7a,    // 1018:9856
        destroy_win_1008_9698,      // 1018:985a
        pass1_1008_3750,            // 1018:985e
        0,                          // FUN_1018_6a76, // 1018:9862
        pass1_1008_9c60,            // 1018:9866
        pass1_1008_3758,            // 1018:986a
        0,                          // FUN_1008_6324, // 1018:986e
        pass1_1008_9c4e,            // 1018:9872
        pass1_1008_3762,            // 1018:9876
        pass1_1008_9c4a,            // 1018:987a
        pass1_1008_3766,            // 1018:987e
        0,                          // FUN_1008_376a, // 1018:9882
        pass1_1008_6a4a,            // 1018:9886
        pass1_1008_6b2e,            // 1018:988a
        pass1_1008_6b02,            // 1018:988e
        pass1_1008_377a,            // 1018:9892
        pass1_1008_9c52,            // 1018:9896
        get_stock_obj_1008_9c56,    // 1018:989a
        pass1_1008_9c16,            // 1018:989e
        pass1_1008_9c30,            // 1018:98a2
        pass1_1008_9c86,            // 1018:98a6
        pass1_1008_9cc4,            // 1018:98aa
        pass1_1008_9ce0,            // 1018:98ae
        destroy_win_1008_628e,      // 1018:98b2
        0,                          // FUN_1008_6328, // 1018:98b6
        0,                          // FUN_1008_632c, // 1018:98ba
        pass1_1018_8586,            // 1018:98be
        pass1_1008_68ea,            // 1018:98c2
        create_window_ex_1008_9760, // 1018:98c6
        pass1_1008_68c6,            // 1018:98ca
        send_msg_1008_9640,         // 1018:98ce
        set_win_text_1008_9664,     // 1018:98d2
        pass1_1008_372c,            // 1018:98d6
        unk_win_op_1008_97f2,       // 1018:98da
        pass1_1008_373c,            // 1018:98de
        pass1_1008_3740,            // 1018:98e2
        pass1_1008_3744,            // 1018:98e6
        pass1_1008_3748,            // 1018:98ea
        pass1_1008_374c,            // 1018:98ee
        mixed_draw_op_1018_6a7a,    // 1018:98f2
        destroy_win_1008_9698,      // 1018:98f6
        pass1_1008_3750,            // 1018:98fa
        0,                          // FUN_1018_6a76, // 1018:98fe
        pass1_1008_9c60,            // 1018:9902
        pass1_1008_3758,            // 1018:9906
        0,                          // FUN_1008_6324, // 1018:990a
        pass1_1008_9c4e,            // 1018:990e
        pass1_1008_3762,            // 1018:9912
        pass1_1008_9c4a,            // 1018:9916
        pass1_1008_3766,            // 1018:991a
        0,                          // FUN_1008_376a, // 1018:991e
        pass1_1008_6a4a,            // 1018:9922
        pass1_1008_6b2e,            // 1018:9926
        pass1_1008_6b02,            // 1018:992a
        pass1_1008_377a,            // 1018:992e
        pass1_1008_9c52,            // 1018:9932
        get_stock_obj_1008_9c56,    // 1018:9936
        pass1_1008_9c16,            // 1018:993a
        pass1_1008_9c30,            // 1018:993e
        pass1_1008_9c86,            // 1018:9942
        pass1_1008_9cc4,            // 1018:9946
        pass1_1008_9ce0,            // 1018:994a
        destroy_win_1008_628e,      // 1018:994e
        0,                          // FUN_1008_6328, // 1018:9952
        0,                          // FUN_1008_632c, // 1018:9956
        pass1_1018_841e,            // 1018:995a
        pass1_1008_68ea,            // 1018:995e
        create_window_ex_1008_9760, // 1018:9962
        pass1_1008_68c6,            // 1018:9966
        send_msg_1008_9640,         // 1018:996a
        set_win_text_1008_9664,     // 1018:996e
        pass1_1008_372c,            // 1018:9972
        unk_win_op_1008_97f2,       // 1018:9976
        pass1_1008_373c,            // 1018:997a
        pass1_1008_3740,            // 1018:997e
        pass1_1008_3744,            // 1018:9982
        pass1_1008_3748,            // 1018:9986
        pass1_1008_374c,            // 1018:998a
        mixed_draw_op_1018_6a7a,    // 1018:998e
        destroy_win_1008_9698,      // 1018:9992
        pass1_1008_3750,            // 1018:9996
        0,                          // FUN_1018_6a76, // 1018:999a
        pass1_1008_9c60,            // 1018:999e
        pass1_1008_3758,            // 1018:99a2
        0,                          // FUN_1008_6324, // 1018:99a6
        pass1_1008_9c4e,            // 1018:99aa
        pass1_1008_3762,            // 1018:99ae
        pass1_1008_9c4a,            // 1018:99b2
        pass1_1008_3766,            // 1018:99b6
        0,                          // FUN_1008_376a, // 1018:99ba
        pass1_1008_6a4a,            // 1018:99be
        pass1_1008_6b2e,            // 1018:99c2
        pass1_1008_6b02,            // 1018:99c6
        pass1_1008_377a,            // 1018:99ca
        pass1_1008_9c52,            // 1018:99ce
        get_stock_obj_1008_9c56,    // 1018:99d2
        pass1_1008_9c16,            // 1018:99d6
        pass1_1008_9c30,            // 1018:99da
        pass1_1008_9c86,            // 1018:99de
        pass1_1008_9cc4,            // 1018:99e2
        pass1_1008_9ce0,            // 1018:99e6
        destroy_win_1008_628e,      // 1018:99ea
        0,                          // FUN_1008_6328, // 1018:99ee
        0,                          // FUN_1008_632c, // 1018:99f2
        pass1_1018_922e,            // 1018:99f6
        pass1_1008_68ea,            // 1018:99fa
        create_window_ex_1008_9760, // 1018:99fe
        pass1_1008_68c6,            // 1018:9a02
        send_msg_1008_9640,         // 1018:9a06
        set_win_text_1008_9664,     // 1018:9a0a
        pass1_1008_372c,            // 1018:9a0e
        unk_win_op_1008_97f2,       // 1018:9a12
        pass1_1008_373c,            // 1018:9a16
        pass1_1008_3740,            // 1018:9a1a
        pass1_1008_3744,            // 1018:9a1e
        pass1_1008_3748,            // 1018:9a22
        pass1_1008_374c,            // 1018:9a26
        mixed_draw_op_1018_6a7a,    // 1018:9a2a
        destroy_win_1008_9698,      // 1018:9a2e
        pass1_1008_3750,            // 1018:9a32
        0,                          // FUN_1018_6a76, // 1018:9a36
        pass1_1008_9c60,            // 1018:9a3a
        pass1_1008_3758,            // 1018:9a3e
        0,                          // FUN_1008_6324, // 1018:9a42
        pass1_1008_9c4e,            // 1018:9a46
        pass1_1008_3762,            // 1018:9a4a
        pass1_1008_9c4a,            // 1018:9a4e
        pass1_1008_3766,            // 1018:9a52
        0,                          // FUN_1008_376a, // 1018:9a56
        pass1_1008_6a4a,            // 1018:9a5a
        pass1_1008_6b2e,            // 1018:9a5e
        pass1_1008_6b02,            // 1018:9a62
        pass1_1008_377a,            // 1018:9a66
        pass1_1008_9c52,            // 1018:9a6a
        get_stock_obj_1008_9c56,    // 1018:9a6e
        pass1_1008_9c16,            // 1018:9a72
        pass1_1008_9c30,            // 1018:9a76
        pass1_1008_9c86,            // 1018:9a7a
        pass1_1008_9cc4,            // 1018:9a7e
        pass1_1008_9ce0,            // 1018:9a82
        destroy_win_1008_628e,      // 1018:9a86
        0,                          // FUN_1008_6328, // 1018:9a8a
        0,                          // FUN_1008_632c, // 1018:9a8e
        pass1_1018_8346,            // 1018:9a92
        pass1_1008_68ea,            // 1018:9a96
        create_window_ex_1008_9760, // 1018:9a9a
        pass1_1008_68c6,            // 1018:9a9e
        send_msg_1008_9640,         // 1018:9aa2
        set_win_text_1008_9664,     // 1018:9aa6
        pass1_1008_372c,            // 1018:9aaa
        unk_win_op_1008_97f2,       // 1018:9aae
        pass1_1008_373c,            // 1018:9ab2
        pass1_1008_3740,            // 1018:9ab6
        pass1_1008_3744,            // 1018:9aba
        pass1_1008_3748,            // 1018:9abe
        pass1_1008_374c,            // 1018:9ac2
        mixed_draw_op_1018_6a7a,    // 1018:9ac6
        destroy_win_1008_9698,      // 1018:9aca
        pass1_1008_3750,            // 1018:9ace
        0,                          // FUN_1018_6a76, // 1018:9ad2
        pass1_1008_9c60,            // 1018:9ad6
        pass1_1008_3758,            // 1018:9ada
        0,                          // FUN_1008_6324, // 1018:9ade
        pass1_1008_9c4e,            // 1018:9ae2
        pass1_1008_3762,            // 1018:9ae6
        pass1_1008_9c4a,            // 1018:9aea
        pass1_1008_3766,            // 1018:9aee
        0,                          // FUN_1008_376a, // 1018:9af2
        pass1_1008_6a4a,            // 1018:9af6
        pass1_1008_6b2e,            // 1018:9afa
        pass1_1008_6b02,            // 1018:9afe
        pass1_1008_377a,            // 1018:9b02
        pass1_1008_9c52,            // 1018:9b06
        get_stock_obj_1008_9c56,    // 1018:9b0a
        pass1_1008_9c16,            // 1018:9b0e
        pass1_1008_9c30,            // 1018:9b12
        pass1_1008_9c86,            // 1018:9b16
        pass1_1008_9cc4,            // 1018:9b1a
        pass1_1008_9ce0,            // 1018:9b1e
        destroy_win_1008_628e,      // 1018:9b22
        0,                          // FUN_1008_6328, // 1018:9b26
        0,                          // FUN_1008_632c, // 1018:9b2a
        pass1_1008_68ea,            // 1018:9b32
        create_window_ex_1008_9760, // 1018:9b36
        pass1_1008_68c6,            // 1018:9b3a
        send_msg_1008_9640,         // 1018:9b3e
        set_win_text_1008_9664,     // 1018:9b42
        pass1_1008_372c,            // 1018:9b46
        unk_win_op_1008_97f2,       // 1018:9b4a
        pass1_1008_373c,            // 1018:9b4e
        pass1_1008_3740,            // 1018:9b52
        pass1_1008_3744,            // 1018:9b56
        pass1_1008_3748,            // 1018:9b5a
        pass1_1008_374c,            // 1018:9b5e
        mixed_draw_op_1018_6a7a,    // 1018:9b62
        destroy_win_1008_9698,      // 1018:9b66
        pass1_1008_3750,            // 1018:9b6a
        0,                          // FUN_1018_6a76, // 1018:9b6e
        pass1_1008_9c60,            // 1018:9b72
        pass1_1008_3758,            // 1018:9b76
        0,                          // FUN_1008_6324, // 1018:9b7a
        pass1_1008_9c4e,            // 1018:9b7e
        pass1_1008_3762,            // 1018:9b82
        pass1_1008_9c4a,            // 1018:9b86
        pass1_1008_3766,            // 1018:9b8a
        0,                          // FUN_1008_376a, // 1018:9b8e
        pass1_1008_6a4a,            // 1018:9b92
        pass1_1008_6b2e,            // 1018:9b96
        pass1_1008_6b02,            // 1018:9b9a
        pass1_1008_377a,            // 1018:9b9e
        pass1_1008_9c52,            // 1018:9ba2
        get_stock_obj_1008_9c56,    // 1018:9ba6
        pass1_1008_9c16,            // 1018:9baa
        pass1_1008_9c30,            // 1018:9bae
        pass1_1008_9c86,            // 1018:9bb2
        pass1_1008_9cc4,            // 1018:9bb6
        pass1_1008_9ce0,            // 1018:9bba
        destroy_win_1008_628e,      // 1018:9bbe
        0,                          // FUN_1008_6328, // 1018:9bc2
        0,                          // FUN_1008_632c, // 1018:9bc6
        pass1_1018_910e,            // 1018:9bca
        pass1_1008_68ea,            // 1018:9bce
        create_window_ex_1008_9760, // 1018:9bd2
        pass1_1008_68c6,            // 1018:9bd6
        send_msg_1008_9640,         // 1018:9bda
        set_win_text_1008_9664,     // 1018:9bde
        pass1_1008_372c,            // 1018:9be2
        unk_win_op_1008_97f2,       // 1018:9be6
        pass1_1008_373c,            // 1018:9bea
        pass1_1008_3740,            // 1018:9bee
        pass1_1008_3744,            // 1018:9bf2
        pass1_1008_3748,            // 1018:9bf6
        pass1_1008_374c,            // 1018:9bfa
        mixed_draw_op_1018_6a7a,    // 1018:9bfe
        destroy_win_1008_9698,      // 1018:9c02
        pass1_1008_3750,            // 1018:9c06
        0,                          // FUN_1018_6a76, // 1018:9c0a
        pass1_1008_9c60,            // 1018:9c0e
        pass1_1008_3758,            // 1018:9c12
        0,                          // FUN_1008_6324, // 1018:9c16
        pass1_1008_9c4e,            // 1018:9c1a
        pass1_1008_3762,            // 1018:9c1e
        pass1_1008_9c4a,            // 1018:9c22
        pass1_1008_3766,            // 1018:9c26
        0,                          // FUN_1008_376a, // 1018:9c2a
        pass1_1008_6a4a,            // 1018:9c2e
        pass1_1008_6b2e,            // 1018:9c32
        pass1_1008_6b02,            // 1018:9c36
        pass1_1008_377a,            // 1018:9c3a
        pass1_1008_9c52,            // 1018:9c3e
        get_stock_obj_1008_9c56,    // 1018:9c42
        pass1_1008_9c16,            // 1018:9c46
        pass1_1008_9c30,            // 1018:9c4a
        pass1_1008_9c86,            // 1018:9c4e
        pass1_1008_9cc4,            // 1018:9c52
        pass1_1008_9ce0,            // 1018:9c56
        destroy_win_1008_628e,      // 1018:9c5a
        0,                          // FUN_1008_6328, // 1018:9c5e
        0,                          // FUN_1008_632c, // 1018:9c62
        pass1_1018_81de,            // 1018:9c66
        pass1_1008_68ea,            // 1018:9c6a
        create_window_ex_1008_9760, // 1018:9c6e
        pass1_1008_68c6,            // 1018:9c72
        send_msg_1008_9640,         // 1018:9c76
        set_win_text_1008_9664,     // 1018:9c7a
        pass1_1008_372c,            // 1018:9c7e
        unk_win_op_1008_97f2,       // 1018:9c82
        pass1_1008_373c,            // 1018:9c86
        pass1_1008_3740,            // 1018:9c8a
        pass1_1008_3744,            // 1018:9c8e
        pass1_1008_3748,            // 1018:9c92
        pass1_1008_374c,            // 1018:9c96
        mixed_draw_op_1018_6a7a,    // 1018:9c9a
        destroy_win_1008_9698,      // 1018:9c9e
        pass1_1008_3750,            // 1018:9ca2
        0,                          // FUN_1018_6a76, // 1018:9ca6
        pass1_1008_9c60,            // 1018:9caa
        pass1_1008_3758,            // 1018:9cae
        0,                          // FUN_1008_6324, // 1018:9cb2
        pass1_1008_9c4e,            // 1018:9cb6
        pass1_1008_3762,            // 1018:9cba
        pass1_1008_9c4a,            // 1018:9cbe
        pass1_1008_3766,            // 1018:9cc2
        0,                          // FUN_1008_376a, // 1018:9cc6
        pass1_1008_6a4a,            // 1018:9cca
        pass1_1008_6b2e,            // 1018:9cce
        pass1_1008_6b02,            // 1018:9cd2
        pass1_1008_377a,            // 1018:9cd6
        pass1_1008_9c52,            // 1018:9cda
        get_stock_obj_1008_9c56,    // 1018:9cde
        pass1_1008_9c16,            // 1018:9ce2
        pass1_1008_9c30,            // 1018:9ce6
        pass1_1008_9c86,            // 1018:9cea
        pass1_1008_9cc4,            // 1018:9cee
        pass1_1008_9ce0,            // 1018:9cf2
        destroy_win_1008_628e,      // 1018:9cf6
        0,                          // FUN_1008_6328, // 1018:9cfa
        0,                          // FUN_1008_632c, // 1018:9cfe
        pass1_1018_89be,            // 1018:9d02
        pass1_1008_68ea,            // 1018:9d06
        create_window_ex_1008_9760, // 1018:9d0a
        pass1_1008_68c6,            // 1018:9d0e
        send_msg_1008_9640,         // 1018:9d12
        set_win_text_1008_9664,     // 1018:9d16
        pass1_1008_372c,            // 1018:9d1a
        unk_win_op_1008_97f2,       // 1018:9d1e
        pass1_1008_373c,            // 1018:9d22
        pass1_1008_3740,            // 1018:9d26
        pass1_1008_3744,            // 1018:9d2a
        pass1_1008_3748,            // 1018:9d2e
        pass1_1008_374c,            // 1018:9d32
        mixed_draw_op_1018_6a7a,    // 1018:9d36
        destroy_win_1008_9698,      // 1018:9d3a
        pass1_1008_3750,            // 1018:9d3e
        0,                          // FUN_1018_6a76, // 1018:9d42
        pass1_1008_9c60,            // 1018:9d46
        pass1_1008_3758,            // 1018:9d4a
        0,                          // FUN_1008_6324, // 1018:9d4e
        pass1_1008_9c4e,            // 1018:9d52
        pass1_1008_3762,            // 1018:9d56
        pass1_1008_9c4a,            // 1018:9d5a
        pass1_1008_3766,            // 1018:9d5e
        0,                          // FUN_1008_376a, // 1018:9d62
        pass1_1008_6a4a,            // 1018:9d66
        pass1_1008_6b2e,            // 1018:9d6a
        pass1_1008_6b02,            // 1018:9d6e
        pass1_1008_377a,            // 1018:9d72
        pass1_1008_9c52,            // 1018:9d76
        get_stock_obj_1008_9c56,    // 1018:9d7a
        pass1_1008_9c16,            // 1018:9d7e
        pass1_1008_9c30,            // 1018:9d82
        pass1_1008_9c86,            // 1018:9d86
        pass1_1008_9cc4,            // 1018:9d8a
        pass1_1008_9ce0,            // 1018:9d8e
        destroy_win_1008_628e,      // 1018:9d92
        0,                          // FUN_1008_6328, // 1018:9d96
        0,                          // FUN_1008_632c, // 1018:9d9a
        pass1_1018_8fa6,            // 1018:9d9e
        pass1_1008_68ea,            // 1018:9da2
        create_window_ex_1008_9760, // 1018:9da6
        pass1_1008_68c6,            // 1018:9daa
        send_msg_1008_9640,         // 1018:9dae
        set_win_text_1008_9664,     // 1018:9db2
        pass1_1008_372c,            // 1018:9db6
        unk_win_op_1008_97f2,       // 1018:9dba
        pass1_1008_373c,            // 1018:9dbe
        pass1_1008_3740,            // 1018:9dc2
        pass1_1008_3744,            // 1018:9dc6
        pass1_1008_3748,            // 1018:9dca
        pass1_1008_374c,            // 1018:9dce
        mixed_draw_op_1018_6a7a,    // 1018:9dd2
        destroy_win_1008_9698,      // 1018:9dd6
        pass1_1008_3750,            // 1018:9dda
        0,                          // FUN_1018_6a76, // 1018:9dde
        pass1_1008_9c60,            // 1018:9de2
        pass1_1008_3758,            // 1018:9de6
        0,                          // FUN_1008_6324, // 1018:9dea
        pass1_1008_9c4e,            // 1018:9dee
        pass1_1008_3762,            // 1018:9df2
        pass1_1008_9c4a,            // 1018:9df6
        pass1_1008_3766,            // 1018:9dfa
        0,                          // FUN_1008_376a, // 1018:9dfe
        pass1_1008_6a4a,            // 1018:9e02
        pass1_1008_6b2e,            // 1018:9e06
        pass1_1008_6b02,            // 1018:9e0a
        pass1_1008_377a,            // 1018:9e0e
        pass1_1008_9c52,            // 1018:9e12
        get_stock_obj_1008_9c56,    // 1018:9e16
        pass1_1008_9c16,            // 1018:9e1a
        pass1_1008_9c30,            // 1018:9e1e
        pass1_1008_9c86,            // 1018:9e22
        pass1_1008_9cc4,            // 1018:9e26
        pass1_1008_9ce0,            // 1018:9e2a
        destroy_win_1008_628e,      // 1018:9e2e
        0,                          // FUN_1008_6328, // 1018:9e32
        0,                          // FUN_1008_632c, // 1018:9e36
        pass1_1018_8076,            // 1018:9e3a
        pass1_1008_68ea,            // 1018:9e3e
        create_window_ex_1008_9760, // 1018:9e42
        pass1_1008_68c6,            // 1018:9e46
        send_msg_1008_9640,         // 1018:9e4a
        set_win_text_1008_9664,     // 1018:9e4e
        pass1_1008_372c,            // 1018:9e52
        unk_win_op_1008_97f2,       // 1018:9e56
        pass1_1008_373c,            // 1018:9e5a
        pass1_1008_3740,            // 1018:9e5e
        pass1_1008_3744,            // 1018:9e62
        pass1_1008_3748,            // 1018:9e66
        pass1_1008_374c,            // 1018:9e6a
        mixed_draw_op_1018_6a7a,    // 1018:9e6e
        destroy_win_1008_9698,      // 1018:9e72
        pass1_1008_3750,            // 1018:9e76
        0,                          // FUN_1018_6a76, // 1018:9e7a
        pass1_1008_9c60,            // 1018:9e7e
        pass1_1008_3758,            // 1018:9e82
        0,                          // FUN_1008_6324, // 1018:9e86
        pass1_1008_9c4e,            // 1018:9e8a
        pass1_1008_3762,            // 1018:9e8e
        pass1_1008_9c4a,            // 1018:9e92
        pass1_1008_3766,            // 1018:9e96
        0,                          // FUN_1008_376a, // 1018:9e9a
        pass1_1008_6a4a,            // 1018:9e9e
        pass1_1008_6b2e,            // 1018:9ea2
        pass1_1008_6b02,            // 1018:9ea6
        pass1_1008_377a,            // 1018:9eaa
        pass1_1008_9c52,            // 1018:9eae
        get_stock_obj_1008_9c56,    // 1018:9eb2
        pass1_1008_9c16,            // 1018:9eb6
        pass1_1008_9c30,            // 1018:9eba
        pass1_1008_9c86,            // 1018:9ebe
        pass1_1008_9cc4,            // 1018:9ec2
        pass1_1008_9ce0,            // 1018:9ec6
        destroy_win_1008_628e,      // 1018:9eca
        0,                          // FUN_1008_6328, // 1018:9ece
        0,                          // FUN_1008_632c, // 1018:9ed2
        pass1_1018_92be,            // 1018:9ed6
        pass1_1008_68ea,            // 1018:9eda
        create_window_ex_1008_9760, // 1018:9ede
        pass1_1008_68c6,            // 1018:9ee2
        send_msg_1008_9640,         // 1018:9ee6
        set_win_text_1008_9664,     // 1018:9eea
        pass1_1008_372c,            // 1018:9eee
        unk_win_op_1008_97f2,       // 1018:9ef2
        pass1_1008_373c,            // 1018:9ef6
        pass1_1008_3740,            // 1018:9efa
        pass1_1008_3744,            // 1018:9efe
        pass1_1008_3748,            // 1018:9f02
        pass1_1008_374c,            // 1018:9f06
        mixed_draw_op_1018_6a7a,    // 1018:9f0a
        destroy_win_1008_9698,      // 1018:9f0e
        pass1_1008_3750,            // 1018:9f12
        0,                          // FUN_1018_6a76, // 1018:9f16
        pass1_1008_9c60,            // 1018:9f1a
        pass1_1008_3758,            // 1018:9f1e
        0,                          // FUN_1008_6324, // 1018:9f22
        pass1_1008_9c4e,            // 1018:9f26
        pass1_1008_3762,            // 1018:9f2a
        pass1_1008_9c4a,            // 1018:9f2e
        pass1_1008_3766,            // 1018:9f32
        0,                          // FUN_1008_376a, // 1018:9f36
        pass1_1008_6a4a,            // 1018:9f3a
        pass1_1008_6b2e,            // 1018:9f3e
        pass1_1008_6b02,            // 1018:9f42
        pass1_1008_377a,            // 1018:9f46
        pass1_1008_9c52,            // 1018:9f4a
        get_stock_obj_1008_9c56,    // 1018:9f4e
        pass1_1008_9c16,            // 1018:9f52
        pass1_1008_9c30,            // 1018:9f56
        pass1_1008_9c86,            // 1018:9f5a
        pass1_1008_9cc4,            // 1018:9f5e
        pass1_1008_9ce0,            // 1018:9f62
        destroy_win_1008_628e,      // 1018:9f66
        0,                          // FUN_1008_6328, // 1018:9f6a
        0,                          // FUN_1008_632c, // 1018:9f6e
        pass1_1018_8856,            // 1018:9f72
        pass1_1008_68ea,            // 1018:9f76
        create_window_ex_1008_9760, // 1018:9f7a
        pass1_1008_68c6,            // 1018:9f7e
        send_msg_1008_9640,         // 1018:9f82
        set_win_text_1008_9664,     // 1018:9f86
        pass1_1008_372c,            // 1018:9f8a
        unk_win_op_1008_97f2,       // 1018:9f8e
        pass1_1008_373c,            // 1018:9f92
        pass1_1008_3740,            // 1018:9f96
        pass1_1008_3744,            // 1018:9f9a
        pass1_1008_3748,            // 1018:9f9e
        pass1_1008_374c,            // 1018:9fa2
        mixed_draw_op_1018_6a7a,    // 1018:9fa6
        destroy_win_1008_9698,      // 1018:9faa
        pass1_1008_3750,            // 1018:9fae
        0,                          // FUN_1018_6a76, // 1018:9fb2
        pass1_1008_9c60,            // 1018:9fb6
        pass1_1008_3758,            // 1018:9fba
        0,                          // FUN_1008_6324, // 1018:9fbe
        pass1_1008_9c4e,            // 1018:9fc2
        pass1_1008_3762,            // 1018:9fc6
        pass1_1008_9c4a,            // 1018:9fca
        pass1_1008_3766,            // 1018:9fce
        0,                          // FUN_1008_376a, // 1018:9fd2
        pass1_1008_6a4a,            // 1018:9fd6
        pass1_1008_6b2e,            // 1018:9fda
        pass1_1008_6b02,            // 1018:9fde
        pass1_1008_377a,            // 1018:9fe2
        pass1_1008_9c52,            // 1018:9fe6
        get_stock_obj_1008_9c56,    // 1018:9fea
        pass1_1008_9c16,            // 1018:9fee
        pass1_1008_9c30,            // 1018:9ff2
        pass1_1008_9c86,            // 1018:9ff6
        pass1_1008_9cc4,            // 1018:9ffa
        pass1_1008_9ce0,            // 1018:9ffe
        destroy_win_1008_628e,      // 1018:a002
        0,                          // FUN_1008_6328, // 1018:a006
        0,                          // FUN_1008_632c, // 1018:a00a
        pass1_1018_8e3e,            // 1018:a00e
        pass1_1008_68ea,            // 1018:a012
        create_window_ex_1008_9760, // 1018:a016
        pass1_1008_68c6,            // 1018:a01a
        send_msg_1008_9640,         // 1018:a01e
        set_win_text_1008_9664,     // 1018:a022
        pass1_1008_372c,            // 1018:a026
        unk_win_op_1008_97f2,       // 1018:a02a
        pass1_1008_373c,            // 1018:a02e
        pass1_1008_3740,            // 1018:a032
        pass1_1008_3744,            // 1018:a036
        pass1_1008_3748,            // 1018:a03a
        pass1_1008_374c,            // 1018:a03e
        mixed_draw_op_1018_6a7a,    // 1018:a042
        destroy_win_1008_9698,      // 1018:a046
        pass1_1008_3750,            // 1018:a04a
        0,                          // FUN_1018_6a76, // 1018:a04e
        pass1_1008_9c60,            // 1018:a052
        pass1_1008_3758,            // 1018:a056
        0,                          // FUN_1008_6324, // 1018:a05a
        pass1_1008_9c4e,            // 1018:a05e
        pass1_1008_3762,            // 1018:a062
        pass1_1008_9c4a,            // 1018:a066
        pass1_1008_3766,            // 1018:a06a
        0,                          // FUN_1008_376a, // 1018:a06e
        pass1_1008_6a4a,            // 1018:a072
        pass1_1008_6b2e,            // 1018:a076
        pass1_1008_6b02,            // 1018:a07a
        pass1_1008_377a,            // 1018:a07e
        pass1_1008_9c52,            // 1018:a082
        get_stock_obj_1008_9c56,    // 1018:a086
        pass1_1008_9c16,            // 1018:a08a
        pass1_1008_9c30,            // 1018:a08e
        pass1_1008_9c86,            // 1018:a092
        pass1_1008_9cc4,            // 1018:a096
        pass1_1008_9ce0,            // 1018:a09a
        destroy_win_1008_628e,      // 1018:a09e
        0,                          // FUN_1008_6328, // 1018:a0a2
        0,                          // FUN_1008_632c, // 1018:a0a6
        pass1_1018_7f0e,            // 1018:a0aa
        pass1_1008_68ea,            // 1018:a0ae
        create_window_ex_1008_9760, // 1018:a0b2
        pass1_1008_68c6,            // 1018:a0b6
        send_msg_1008_9640,         // 1018:a0ba
        set_win_text_1008_9664,     // 1018:a0be
        pass1_1008_372c,            // 1018:a0c2
        unk_win_op_1008_97f2,       // 1018:a0c6
        pass1_1008_373c,            // 1018:a0ca
        pass1_1008_3740,            // 1018:a0ce
        pass1_1008_3744,            // 1018:a0d2
        pass1_1008_3748,            // 1018:a0d6
        pass1_1008_374c,            // 1018:a0da
        mixed_draw_op_1018_6a7a,    // 1018:a0de
        destroy_win_1008_9698,      // 1018:a0e2
        pass1_1008_3750,            // 1018:a0e6
        0,                          // FUN_1018_6a76, // 1018:a0ea
        pass1_1008_9c60,            // 1018:a0ee
        pass1_1008_3758,            // 1018:a0f2
        0,                          // FUN_1008_6324, // 1018:a0f6
        pass1_1008_9c4e,            // 1018:a0fa
        pass1_1008_3762,            // 1018:a0fe
        pass1_1008_9c4a,            // 1018:a102
        pass1_1008_3766,            // 1018:a106
        0,                          // FUN_1008_376a, // 1018:a10a
        pass1_1008_6a4a,            // 1018:a10e
        pass1_1008_6b2e,            // 1018:a112
        pass1_1008_6b02,            // 1018:a116
        pass1_1008_377a,            // 1018:a11a
        pass1_1008_9c52,            // 1018:a11e
        get_stock_obj_1008_9c56,    // 1018:a122
        pass1_1008_9c16,            // 1018:a126
        pass1_1008_9c30,            // 1018:a12a
        pass1_1008_9c86,            // 1018:a12e
        pass1_1008_9cc4,            // 1018:a132
        pass1_1008_9ce0,            // 1018:a136
        destroy_win_1008_628e,      // 1018:a13a
        0,                          // FUN_1008_6328, // 1018:a13e
        0,                          // FUN_1008_632c, // 1018:a142
        pass1_1018_86ee,            // 1018:a146
        pass1_1008_68ea,            // 1018:a14a
        create_window_ex_1008_9760, // 1018:a14e
        pass1_1008_68c6,            // 1018:a152
        send_msg_1008_9640,         // 1018:a156
        set_win_text_1008_9664,     // 1018:a15a
        pass1_1008_372c,            // 1018:a15e
        unk_win_op_1008_97f2,       // 1018:a162
        pass1_1008_373c,            // 1018:a166
        pass1_1008_3740,            // 1018:a16a
        pass1_1008_3744,            // 1018:a16e
        pass1_1008_3748,            // 1018:a172
        pass1_1008_374c,            // 1018:a176
        0,                          // FUN_1018_742e, // 1018:a17a
        destroy_win_1008_9698,      // 1018:a17e
        pass1_1008_3750,            // 1018:a182
        0,                          // FUN_1018_6a76, // 1018:a186
        pass1_1008_9c60,            // 1018:a18a
        pass1_1008_3758,            // 1018:a18e
        0,                          // FUN_1008_6324, // 1018:a192
        pass1_1008_9c4e,            // 1018:a196
        pass1_1008_3762,            // 1018:a19a
        pass1_1008_9c4a,            // 1018:a19e
        pass1_1008_3766,            // 1018:a1a2
        0,                          // FUN_1008_376a, // 1018:a1a6
        pass1_1008_6a4a,            // 1018:a1aa
        pass1_1008_6b2e,            // 1018:a1ae
        pass1_1008_6b02,            // 1018:a1b2
        pass1_1008_377a,            // 1018:a1b6
        pass1_1008_9c52,            // 1018:a1ba
        get_stock_obj_1008_9c56,    // 1018:a1be
        pass1_1008_9c16,            // 1018:a1c2
        pass1_1008_9c30,            // 1018:a1c6
        pass1_1008_9c86,            // 1018:a1ca
        pass1_1008_9cc4,            // 1018:a1ce
        pass1_1008_9ce0,            // 1018:a1d2
        destroy_win_1008_628e,      // 1018:a1d6
        0,                          // FUN_1008_6328, // 1018:a1da
        0,                          // FUN_1008_632c, // 1018:a1de
        pass1_1018_8cd6,            // 1018:a1e2
        pass1_1008_68ea,            // 1018:a1e6
        create_window_ex_1008_9760, // 1018:a1ea
        pass1_1008_68c6,            // 1018:a1ee
        send_msg_1008_9640,         // 1018:a1f2
        set_win_text_1008_9664,     // 1018:a1f6
        pass1_1008_372c,            // 1018:a1fa
        unk_win_op_1008_97f2,       // 1018:a1fe
        pass1_1008_373c,            // 1018:a202
        pass1_1008_3740,            // 1018:a206
        pass1_1008_3744,            // 1018:a20a
        pass1_1008_3748,            // 1018:a20e
        pass1_1008_374c,            // 1018:a212
        mixed_draw_op_1018_6a7a,    // 1018:a216
        destroy_win_1008_9698,      // 1018:a21a
        pass1_1008_3750,            // 1018:a21e
        0,                          // FUN_1018_6a76, // 1018:a222
        pass1_1008_9c60,            // 1018:a226
        pass1_1008_3758,            // 1018:a22a
        0,                          // FUN_1008_6324, // 1018:a22e
        pass1_1008_9c4e,            // 1018:a232
        pass1_1008_3762,            // 1018:a236
        pass1_1008_9c4a,            // 1018:a23a
        pass1_1008_3766,            // 1018:a23e
        0,                          // FUN_1008_376a, // 1018:a242
        pass1_1008_6a4a,            // 1018:a246
        pass1_1008_6b2e,            // 1018:a24a
        pass1_1008_6b02,            // 1018:a24e
        pass1_1008_377a,            // 1018:a252
        pass1_1008_9c52,            // 1018:a256
        get_stock_obj_1008_9c56,    // 1018:a25a
        pass1_1008_9c16,            // 1018:a25e
        pass1_1008_9c30,            // 1018:a262
        pass1_1008_9c86,            // 1018:a266
        pass1_1008_9cc4,            // 1018:a26a
        pass1_1008_9ce0,            // 1018:a26e
        destroy_win_1008_628e,      // 1018:a272
        0,                          // FUN_1008_6328, // 1018:a276
        0,                          // FUN_1008_632c, // 1018:a27a
        pass1_1018_7da6,            // 1018:a27e
        pass1_1008_68ea,            // 1018:a282
        create_window_ex_1008_9760, // 1018:a286
        pass1_1008_68c6,            // 1018:a28a
        send_msg_1008_9640,         // 1018:a28e
        set_win_text_1008_9664,     // 1018:a292
        pass1_1008_372c,            // 1018:a296
        unk_win_op_1008_97f2,       // 1018:a29a
        pass1_1008_373c,            // 1018:a29e
        pass1_1008_3740,            // 1018:a2a2
        pass1_1008_3744,            // 1018:a2a6
        pass1_1008_3748,            // 1018:a2aa
        pass1_1008_374c,            // 1018:a2ae
        mixed_draw_op_1018_6a7a,    // 1018:a2b2
        destroy_win_1008_9698,      // 1018:a2b6
        pass1_1008_3750,            // 1018:a2ba
        0,                          // FUN_1018_6a76, // 1018:a2be
        pass1_1008_9c60,            // 1018:a2c2
        pass1_1008_3758,            // 1018:a2c6
        0,                          // FUN_1008_6324, // 1018:a2ca
        pass1_1008_9c4e,            // 1018:a2ce
        pass1_1008_3762,            // 1018:a2d2
        pass1_1008_9c4a,            // 1018:a2d6
        pass1_1008_3766,            // 1018:a2da
        0,                          // FUN_1008_376a, // 1018:a2de
        pass1_1008_6a4a,            // 1018:a2e2
        pass1_1008_6b2e,            // 1018:a2e6
        pass1_1008_6b02,            // 1018:a2ea
        pass1_1008_377a,            // 1018:a2ee
        pass1_1008_9c52,            // 1018:a2f2
        get_stock_obj_1008_9c56,    // 1018:a2f6
        pass1_1008_9c16,            // 1018:a2fa
        pass1_1008_9c30,            // 1018:a2fe
        pass1_1008_9c86,            // 1018:a302
        pass1_1008_9cc4,            // 1018:a306
        pass1_1008_9ce0,            // 1018:a30a
        destroy_win_1008_628e,      // 1018:a30e
        0,                          // FUN_1008_6328, // 1018:a312
        0,                          // FUN_1008_632c, // 1018:a316
        pass1_1018_84f6,            // 1018:a31a
        pass1_1008_68ea,            // 1018:a31e
        create_window_ex_1008_9760, // 1018:a322
        pass1_1008_68c6,            // 1018:a326
        send_msg_1008_9640,         // 1018:a32a
        set_win_text_1008_9664,     // 1018:a32e
        pass1_1008_372c,            // 1018:a332
        unk_win_op_1008_97f2,       // 1018:a336
        pass1_1008_373c,            // 1018:a33a
        pass1_1008_3740,            // 1018:a33e
        pass1_1008_3744,            // 1018:a342
        pass1_1008_3748,            // 1018:a346
        pass1_1008_374c,            // 1018:a34a
        mixed_draw_op_1018_6a7a,    // 1018:a34e
        destroy_win_1008_9698,      // 1018:a352
        pass1_1008_3750,            // 1018:a356
        0,                          // FUN_1018_6a76, // 1018:a35a
        pass1_1008_9c60,            // 1018:a35e
        pass1_1008_3758,            // 1018:a362
        0,                          // FUN_1008_6324, // 1018:a366
        pass1_1008_9c4e,            // 1018:a36a
        pass1_1008_3762,            // 1018:a36e
        pass1_1008_9c4a,            // 1018:a372
        pass1_1008_3766,            // 1018:a376
        0,                          // FUN_1008_376a, // 1018:a37a
        pass1_1008_6a4a,            // 1018:a37e
        pass1_1008_6b2e,            // 1018:a382
        pass1_1008_6b02,            // 1018:a386
        pass1_1008_377a,            // 1018:a38a
        pass1_1008_9c52,            // 1018:a38e
        get_stock_obj_1008_9c56,    // 1018:a392
        pass1_1008_9c16,            // 1018:a396
        pass1_1008_9c30,            // 1018:a39a
        pass1_1008_9c86,            // 1018:a39e
        pass1_1008_9cc4,            // 1018:a3a2
        pass1_1008_9ce0,            // 1018:a3a6
        destroy_win_1008_628e,      // 1018:a3aa
        0,                          // FUN_1008_6328, // 1018:a3ae
        0,                          // FUN_1008_632c, // 1018:a3b2
        pass1_1018_8bfe,            // 1018:a3b6
        pass1_1008_68ea,            // 1018:a3ba
        create_window_ex_1008_9760, // 1018:a3be
        pass1_1008_68c6,            // 1018:a3c2
        send_msg_1008_9640,         // 1018:a3c6
        set_win_text_1008_9664,     // 1018:a3ca
        pass1_1008_372c,            // 1018:a3ce
        unk_win_op_1008_97f2,       // 1018:a3d2
        pass1_1008_373c,            // 1018:a3d6
        pass1_1008_3740,            // 1018:a3da
        pass1_1008_3744,            // 1018:a3de
        pass1_1008_3748,            // 1018:a3e2
        pass1_1008_374c,            // 1018:a3e6
        mixed_draw_op_1018_6a7a,    // 1018:a3ea
        destroy_win_1008_9698,      // 1018:a3ee
        pass1_1008_3750,            // 1018:a3f2
        0,                          // FUN_1018_6a76, // 1018:a3f6
        pass1_1008_9c60,            // 1018:a3fa
        pass1_1008_3758,            // 1018:a3fe
        0,                          // FUN_1008_6324, // 1018:a402
        pass1_1008_9c4e,            // 1018:a406
        pass1_1008_3762,            // 1018:a40a
        pass1_1008_9c4a,            // 1018:a40e
        pass1_1008_3766,            // 1018:a412
        0,                          // FUN_1008_376a, // 1018:a416
        pass1_1008_6a4a,            // 1018:a41a
        pass1_1008_6b2e,            // 1018:a41e
        pass1_1008_6b02,            // 1018:a422
        pass1_1008_377a,            // 1018:a426
        pass1_1008_9c52,            // 1018:a42a
        get_stock_obj_1008_9c56,    // 1018:a42e
        pass1_1008_9c16,            // 1018:a432
        pass1_1008_9c30,            // 1018:a436
        pass1_1008_9c86,            // 1018:a43a
        pass1_1008_9cc4,            // 1018:a43e
        pass1_1008_9ce0,            // 1018:a442
        destroy_win_1008_628e,      // 1018:a446
        0,                          // FUN_1008_6328, // 1018:a44a
        0,                          // FUN_1008_632c, // 1018:a44e
        pass1_1018_8466,            // 1018:a452
        pass1_1008_68ea,            // 1018:a456
        create_window_ex_1008_9760, // 1018:a45a
        pass1_1008_68c6,            // 1018:a45e
        send_msg_1008_9640,         // 1018:a462
        set_win_text_1008_9664,     // 1018:a466
        pass1_1008_372c,            // 1018:a46a
        unk_win_op_1008_97f2,       // 1018:a46e
        pass1_1008_373c,            // 1018:a472
        pass1_1008_3740,            // 1018:a476
        pass1_1008_3744,            // 1018:a47a
        pass1_1008_3748,            // 1018:a47e
        pass1_1008_374c,            // 1018:a482
        mixed_draw_op_1018_6a7a,    // 1018:a486
        destroy_win_1008_9698,      // 1018:a48a
        pass1_1008_3750,            // 1018:a48e
        0,                          // FUN_1018_6a76, // 1018:a492
        pass1_1008_9c60,            // 1018:a496
        pass1_1008_3758,            // 1018:a49a
        0,                          // FUN_1008_6324, // 1018:a49e
        pass1_1008_9c4e,            // 1018:a4a2
        pass1_1008_3762,            // 1018:a4a6
        pass1_1008_9c4a,            // 1018:a4aa
        pass1_1008_3766,            // 1018:a4ae
        0,                          // FUN_1008_376a, // 1018:a4b2
        pass1_1008_6a4a,            // 1018:a4b6
        pass1_1008_6b2e,            // 1018:a4ba
        pass1_1008_6b02,            // 1018:a4be
        pass1_1008_377a,            // 1018:a4c2
        pass1_1008_9c52,            // 1018:a4c6
        get_stock_obj_1008_9c56,    // 1018:a4ca
        pass1_1008_9c16,            // 1018:a4ce
        pass1_1008_9c30,            // 1018:a4d2
        pass1_1008_9c86,            // 1018:a4d6
        pass1_1008_9cc4,            // 1018:a4da
        pass1_1008_9ce0,            // 1018:a4de
        destroy_win_1008_628e,      // 1018:a4e2
        0,                          // FUN_1008_6328, // 1018:a4e6
        0,                          // FUN_1008_632c, // 1018:a4ea
        pass1_1018_82b6,            // 1018:a4ee
        pass1_1008_68ea,            // 1018:a4f2
        create_window_ex_1008_9760, // 1018:a4f6
        pass1_1008_68c6,            // 1018:a4fa
        send_msg_1008_9640,         // 1018:a4fe
        set_win_text_1008_9664,     // 1018:a502
        pass1_1008_372c,            // 1018:a506
        unk_win_op_1008_97f2,       // 1018:a50a
        pass1_1008_373c,            // 1018:a50e
        pass1_1008_3740,            // 1018:a512
        pass1_1008_3744,            // 1018:a516
        pass1_1008_3748,            // 1018:a51a
        pass1_1008_374c,            // 1018:a51e
        mixed_draw_op_1018_6a7a,    // 1018:a522
        destroy_win_1008_9698,      // 1018:a526
        pass1_1008_3750,            // 1018:a52a
        0,                          // FUN_1018_6a76, // 1018:a52e
        pass1_1008_9c60,            // 1018:a532
        pass1_1008_3758,            // 1018:a536
        0,                          // FUN_1008_6324, // 1018:a53a
        pass1_1008_9c4e,            // 1018:a53e
        pass1_1008_3762,            // 1018:a542
        pass1_1008_9c4a,            // 1018:a546
        pass1_1008_3766,            // 1018:a54a
        0,                          // FUN_1008_376a, // 1018:a54e
        pass1_1008_6a4a,            // 1018:a552
        pass1_1008_6b2e,            // 1018:a556
        pass1_1008_6b02,            // 1018:a55a
        pass1_1008_377a,            // 1018:a55e
        pass1_1008_9c52,            // 1018:a562
        get_stock_obj_1008_9c56,    // 1018:a566
        pass1_1008_9c16,            // 1018:a56a
        pass1_1008_9c30,            // 1018:a56e
        pass1_1008_9c86,            // 1018:a572
        pass1_1008_9cc4,            // 1018:a576
        pass1_1008_9ce0,            // 1018:a57a
        destroy_win_1008_628e,      // 1018:a57e
        0,                          // FUN_1008_6328, // 1018:a582
        0,                          // FUN_1008_632c, // 1018:a586
        pass1_1018_8a96,            // 1018:a58a
        pass1_1008_68ea,            // 1018:a58e
        create_window_ex_1008_9760, // 1018:a592
        pass1_1008_68c6,            // 1018:a596
        send_msg_1008_9640,         // 1018:a59a
        set_win_text_1008_9664,     // 1018:a59e
        pass1_1008_372c,            // 1018:a5a2
        unk_win_op_1008_97f2,       // 1018:a5a6
        pass1_1008_373c,            // 1018:a5aa
        pass1_1008_3740,            // 1018:a5ae
        pass1_1008_3744,            // 1018:a5b2
        pass1_1008_3748,            // 1018:a5b6
        pass1_1008_374c,            // 1018:a5ba
        mixed_draw_op_1018_6a7a,    // 1018:a5be
        destroy_win_1008_9698,      // 1018:a5c2
        pass1_1008_3750,            // 1018:a5c6
        0,                          // FUN_1018_6a76, // 1018:a5ca
        pass1_1008_9c60,            // 1018:a5ce
        pass1_1008_3758,            // 1018:a5d2
        0,                          // FUN_1008_6324, // 1018:a5d6
        pass1_1008_9c4e,            // 1018:a5da
        pass1_1008_3762,            // 1018:a5de
        pass1_1008_9c4a,            // 1018:a5e2
        pass1_1008_3766,            // 1018:a5e6
        0,                          // FUN_1008_376a, // 1018:a5ea
        pass1_1008_6a4a,            // 1018:a5ee
        pass1_1008_6b2e,            // 1018:a5f2
        pass1_1008_6b02,            // 1018:a5f6
        pass1_1008_377a,            // 1018:a5fa
        pass1_1008_9c52,            // 1018:a5fe
        get_stock_obj_1008_9c56,    // 1018:a602
        pass1_1008_9c16,            // 1018:a606
        pass1_1008_9c30,            // 1018:a60a
        pass1_1008_9c86,            // 1018:a60e
        pass1_1008_9cc4,            // 1018:a612
        pass1_1008_9ce0,            // 1018:a616
        destroy_win_1008_628e,      // 1018:a61a
        0,                          // FUN_1008_6328, // 1018:a61e
        0,                          // FUN_1008_632c, // 1018:a622
        pass1_1018_907e,            // 1018:a626
        pass1_1008_68ea,            // 1018:a62a
        create_window_ex_1008_9760, // 1018:a62e
        pass1_1008_68c6,            // 1018:a632
        send_msg_1008_9640,         // 1018:a636
        set_win_text_1008_9664,     // 1018:a63a
        pass1_1008_372c,            // 1018:a63e
        unk_win_op_1008_97f2,       // 1018:a642
        pass1_1008_373c,            // 1018:a646
        pass1_1008_3740,            // 1018:a64a
        pass1_1008_3744,            // 1018:a64e
        pass1_1008_3748,            // 1018:a652
        pass1_1008_374c,            // 1018:a656
        mixed_draw_op_1018_6a7a,    // 1018:a65a
        destroy_win_1008_9698,      // 1018:a65e
        pass1_1008_3750,            // 1018:a662
        0,                          // FUN_1018_6a76, // 1018:a666
        pass1_1008_9c60,            // 1018:a66a
        pass1_1008_3758,            // 1018:a66e
        0,                          // FUN_1008_6324, // 1018:a672
        pass1_1008_9c4e,            // 1018:a676
        pass1_1008_3762,            // 1018:a67a
        pass1_1008_9c4a,            // 1018:a67e
        pass1_1008_3766,            // 1018:a682
        0,                          // FUN_1008_376a, // 1018:a686
        pass1_1008_6a4a,            // 1018:a68a
        pass1_1008_6b2e,            // 1018:a68e
        pass1_1008_6b02,            // 1018:a692
        pass1_1008_377a,            // 1018:a696
        pass1_1008_9c52,            // 1018:a69a
        get_stock_obj_1008_9c56,    // 1018:a69e
        pass1_1008_9c16,            // 1018:a6a2
        pass1_1008_9c30,            // 1018:a6a6
        pass1_1008_9c86,            // 1018:a6aa
        pass1_1008_9cc4,            // 1018:a6ae
        pass1_1008_9ce0,            // 1018:a6b2
        destroy_win_1008_628e,      // 1018:a6b6
        0,                          // FUN_1008_6328, // 1018:a6ba
        0,                          // FUN_1008_632c, // 1018:a6be
        pass1_1018_814e,            // 1018:a6c2
        pass1_1008_68ea,            // 1018:a6c6
        create_window_ex_1008_9760, // 1018:a6ca
        pass1_1008_68c6,            // 1018:a6ce
        send_msg_1008_9640,         // 1018:a6d2
        set_win_text_1008_9664,     // 1018:a6d6
        pass1_1008_372c,            // 1018:a6da
        unk_win_op_1008_97f2,       // 1018:a6de
        pass1_1008_373c,            // 1018:a6e2
        pass1_1008_3740,            // 1018:a6e6
        pass1_1008_3744,            // 1018:a6ea
        pass1_1008_3748,            // 1018:a6ee
        pass1_1008_374c,            // 1018:a6f2
        mixed_draw_op_1018_6a7a,    // 1018:a6f6
        destroy_win_1008_9698,      // 1018:a6fa
        pass1_1008_3750,            // 1018:a6fe
        0,                          // FUN_1018_6a76, // 1018:a702
        pass1_1008_9c60,            // 1018:a706
        pass1_1008_3758,            // 1018:a70a
        0,                          // FUN_1008_6324, // 1018:a70e
        pass1_1008_9c4e,            // 1018:a712
        pass1_1008_3762,            // 1018:a716
        pass1_1008_9c4a,            // 1018:a71a
        pass1_1008_3766,            // 1018:a71e
        0,                          // FUN_1008_376a, // 1018:a722
        pass1_1008_6a4a,            // 1018:a726
        pass1_1008_6b2e,            // 1018:a72a
        pass1_1008_6b02,            // 1018:a72e
        pass1_1008_377a,            // 1018:a732
        pass1_1008_9c52,            // 1018:a736
        get_stock_obj_1008_9c56,    // 1018:a73a
        pass1_1008_9c16,            // 1018:a73e
        pass1_1008_9c30,            // 1018:a742
        pass1_1008_9c86,            // 1018:a746
        pass1_1008_9cc4,            // 1018:a74a
        pass1_1008_9ce0,            // 1018:a74e
        destroy_win_1008_628e,      // 1018:a752
        0,                          // FUN_1008_6328, // 1018:a756
        0,                          // FUN_1008_632c, // 1018:a75a
        pass1_1018_9396,            // 1018:a75e
        pass1_1008_68ea,            // 1018:a762
        create_window_ex_1008_9760, // 1018:a766
        pass1_1008_68c6,            // 1018:a76a
        send_msg_1008_9640,         // 1018:a76e
        set_win_text_1008_9664,     // 1018:a772
        pass1_1008_372c,            // 1018:a776
        unk_win_op_1008_97f2,       // 1018:a77a
        pass1_1008_373c,            // 1018:a77e
        pass1_1008_3740,            // 1018:a782
        pass1_1008_3744,            // 1018:a786
        pass1_1008_3748,            // 1018:a78a
        pass1_1008_374c,            // 1018:a78e
        mixed_draw_op_1018_6a7a,    // 1018:a792
        destroy_win_1008_9698,      // 1018:a796
        pass1_1008_3750,            // 1018:a79a
        0,                          // FUN_1018_6a76, // 1018:a79e
        pass1_1008_9c60,            // 1018:a7a2
        pass1_1008_3758,            // 1018:a7a6
        0,                          // FUN_1008_6324, // 1018:a7aa
        pass1_1008_9c4e,            // 1018:a7ae
        pass1_1008_3762,            // 1018:a7b2
        pass1_1008_9c4a,            // 1018:a7b6
        pass1_1008_3766,            // 1018:a7ba
        0,                          // FUN_1008_376a, // 1018:a7be
        pass1_1008_6a4a,            // 1018:a7c2
        pass1_1008_6b2e,            // 1018:a7c6
        pass1_1008_6b02,            // 1018:a7ca
        pass1_1008_377a,            // 1018:a7ce
        pass1_1008_9c52,            // 1018:a7d2
        get_stock_obj_1008_9c56,    // 1018:a7d6
        pass1_1008_9c16,            // 1018:a7da
        pass1_1008_9c30,            // 1018:a7de
        pass1_1008_9c86,            // 1018:a7e2
        pass1_1008_9cc4,            // 1018:a7e6
        pass1_1008_9ce0,            // 1018:a7ea
        destroy_win_1008_628e,      // 1018:a7ee
        0,                          // FUN_1008_6328, // 1018:a7f2
        0,                          // FUN_1008_632c, // 1018:a7f6
        pass1_1018_892e,            // 1018:a7fa
        pass1_1008_68ea,            // 1018:a7fe
        create_window_ex_1008_9760, // 1018:a802
        pass1_1008_68c6,            // 1018:a806
        send_msg_1008_9640,         // 1018:a80a
        set_win_text_1008_9664,     // 1018:a80e
        pass1_1008_372c,            // 1018:a812
        unk_win_op_1008_97f2,       // 1018:a816
        pass1_1008_373c,            // 1018:a81a
        pass1_1008_3740,            // 1018:a81e
        pass1_1008_3744,            // 1018:a822
        pass1_1008_3748,            // 1018:a826
        pass1_1008_374c,            // 1018:a82a
        mixed_draw_op_1018_6a7a,    // 1018:a82e
        destroy_win_1008_9698,      // 1018:a832
        pass1_1008_3750,            // 1018:a836
        0,                          // FUN_1018_6a76, // 1018:a83a
        pass1_1008_9c60,            // 1018:a83e
        pass1_1008_3758,            // 1018:a842
        0,                          // FUN_1008_6324, // 1018:a846
        pass1_1008_9c4e,            // 1018:a84a
        pass1_1008_3762,            // 1018:a84e
        pass1_1008_9c4a,            // 1018:a852
        pass1_1008_3766,            // 1018:a856
        0,                          // FUN_1008_376a, // 1018:a85a
        pass1_1008_6a4a,            // 1018:a85e
        pass1_1008_6b2e,            // 1018:a862
        pass1_1008_6b02,            // 1018:a866
        pass1_1008_377a,            // 1018:a86a
        pass1_1008_9c52,            // 1018:a86e
        get_stock_obj_1008_9c56,    // 1018:a872
        pass1_1008_9c16,            // 1018:a876
        pass1_1008_9c30,            // 1018:a87a
        pass1_1008_9c86,            // 1018:a87e
        pass1_1008_9cc4,            // 1018:a882
        pass1_1008_9ce0,            // 1018:a886
        destroy_win_1008_628e,      // 1018:a88a
        0,                          // FUN_1008_6328, // 1018:a88e
        0,                          // FUN_1008_632c, // 1018:a892
        pass1_1018_8f16,            // 1018:a896
        pass1_1008_68ea,            // 1018:a89a
        create_window_ex_1008_9760, // 1018:a89e
        pass1_1008_68c6,            // 1018:a8a2
        send_msg_1008_9640,         // 1018:a8a6
        set_win_text_1008_9664,     // 1018:a8aa
        pass1_1008_372c,            // 1018:a8ae
        unk_win_op_1008_97f2,       // 1018:a8b2
        pass1_1008_373c,            // 1018:a8b6
        pass1_1008_3740,            // 1018:a8ba
        pass1_1008_3744,            // 1018:a8be
        pass1_1008_3748,            // 1018:a8c2
        pass1_1008_374c,            // 1018:a8c6
        mixed_draw_op_1018_6a7a,    // 1018:a8ca
        destroy_win_1008_9698,      // 1018:a8ce
        pass1_1008_3750,            // 1018:a8d2
        0,                          // FUN_1018_6a76, // 1018:a8d6
        pass1_1008_9c60,            // 1018:a8da
        pass1_1008_3758,            // 1018:a8de
        0,                          // FUN_1008_6324, // 1018:a8e2
        pass1_1008_9c4e,            // 1018:a8e6
        pass1_1008_3762,            // 1018:a8ea
        pass1_1008_9c4a,            // 1018:a8ee
        pass1_1008_3766,            // 1018:a8f2
        0,                          // FUN_1008_376a, // 1018:a8f6
        pass1_1008_6a4a,            // 1018:a8fa
        pass1_1008_6b2e,            // 1018:a8fe
        pass1_1008_6b02,            // 1018:a902
        pass1_1008_377a,            // 1018:a906
        pass1_1008_9c52,            // 1018:a90a
        get_stock_obj_1008_9c56,    // 1018:a90e
        pass1_1008_9c16,            // 1018:a912
        pass1_1008_9c30,            // 1018:a916
        pass1_1008_9c86,            // 1018:a91a
        pass1_1008_9cc4,            // 1018:a91e
        pass1_1008_9ce0,            // 1018:a922
        destroy_win_1008_628e,      // 1018:a926
        0,                          // FUN_1008_6328, // 1018:a92a
        0,                          // FUN_1008_632c, // 1018:a92e
        pass1_1018_7fe6,            // 1018:a932
        pass1_1008_68ea,            // 1018:a936
        create_window_ex_1008_9760, // 1018:a93a
        pass1_1008_68c6,            // 1018:a93e
        send_msg_1008_9640,         // 1018:a942
        set_win_text_1008_9664,     // 1018:a946
        pass1_1008_372c,            // 1018:a94a
        unk_win_op_1008_97f2,       // 1018:a94e
        pass1_1008_373c,            // 1018:a952
        pass1_1008_3740,            // 1018:a956
        pass1_1008_3744,            // 1018:a95a
        pass1_1008_3748,            // 1018:a95e
        pass1_1008_374c,            // 1018:a962
        mixed_draw_op_1018_6a7a,    // 1018:a966
        destroy_win_1008_9698,      // 1018:a96a
        pass1_1008_3750,            // 1018:a96e
        0,                          // FUN_1018_6a76, // 1018:a972
        pass1_1008_9c60,            // 1018:a976
        pass1_1008_3758,            // 1018:a97a
        0,                          // FUN_1008_6324, // 1018:a97e
        pass1_1008_9c4e,            // 1018:a982
        pass1_1008_3762,            // 1018:a986
        pass1_1008_9c4a,            // 1018:a98a
        pass1_1008_3766,            // 1018:a98e
        0,                          // FUN_1008_376a, // 1018:a992
        pass1_1008_6a4a,            // 1018:a996
        pass1_1008_6b2e,            // 1018:a99a
        pass1_1008_6b02,            // 1018:a99e
        pass1_1008_377a,            // 1018:a9a2
        pass1_1008_9c52,            // 1018:a9a6
        get_stock_obj_1008_9c56,    // 1018:a9aa
        pass1_1008_9c16,            // 1018:a9ae
        pass1_1008_9c30,            // 1018:a9b2
        pass1_1008_9c86,            // 1018:a9b6
        pass1_1008_9cc4,            // 1018:a9ba
        pass1_1008_9ce0,            // 1018:a9be
        destroy_win_1008_628e,      // 1018:a9c2
        0,                          // FUN_1008_6328, // 1018:a9c6
        0,                          // FUN_1008_632c, // 1018:a9ca
        pass1_1018_87c6,            // 1018:a9ce
        pass1_1008_68ea,            // 1018:a9d2
        create_window_ex_1008_9760, // 1018:a9d6
        pass1_1008_68c6,            // 1018:a9da
        send_msg_1008_9640,         // 1018:a9de
        set_win_text_1008_9664,     // 1018:a9e2
        pass1_1008_372c,            // 1018:a9e6
        unk_win_op_1008_97f2,       // 1018:a9ea
        pass1_1008_373c,            // 1018:a9ee
        pass1_1008_3740,            // 1018:a9f2
        pass1_1008_3744,            // 1018:a9f6
        pass1_1008_3748,            // 1018:a9fa
        pass1_1008_374c,            // 1018:a9fe
        mixed_draw_op_1018_6a7a,    // 1018:aa02
        destroy_win_1008_9698,      // 1018:aa06
        pass1_1008_3750,            // 1018:aa0a
        0,                          // FUN_1018_6a76, // 1018:aa0e
        pass1_1008_9c60,            // 1018:aa12
        pass1_1008_3758,            // 1018:aa16
        0,                          // FUN_1008_6324, // 1018:aa1a
        pass1_1008_9c4e,            // 1018:aa1e
        pass1_1008_3762,            // 1018:aa22
        pass1_1008_9c4a,            // 1018:aa26
        pass1_1008_3766,            // 1018:aa2a
        0,                          // FUN_1008_376a, // 1018:aa2e
        pass1_1008_6a4a,            // 1018:aa32
        pass1_1008_6b2e,            // 1018:aa36
        pass1_1008_6b02,            // 1018:aa3a
        pass1_1008_377a,            // 1018:aa3e
        pass1_1008_9c52,            // 1018:aa42
        get_stock_obj_1008_9c56,    // 1018:aa46
        pass1_1008_9c16,            // 1018:aa4a
        pass1_1008_9c30,            // 1018:aa4e
        pass1_1008_9c86,            // 1018:aa52
        pass1_1008_9cc4,            // 1018:aa56
        pass1_1008_9ce0,            // 1018:aa5a
        destroy_win_1008_628e,      // 1018:aa5e
        0,                          // FUN_1008_6328, // 1018:aa62
        0,                          // FUN_1008_632c, // 1018:aa66
        pass1_1018_8dae,            // 1018:aa6a
        pass1_1008_68ea,            // 1018:aa6e
        create_window_ex_1008_9760, // 1018:aa72
        pass1_1008_68c6,            // 1018:aa76
        send_msg_1008_9640,         // 1018:aa7a
        set_win_text_1008_9664,     // 1018:aa7e
        pass1_1008_372c,            // 1018:aa82
        unk_win_op_1008_97f2,       // 1018:aa86
        pass1_1008_373c,            // 1018:aa8a
        pass1_1008_3740,            // 1018:aa8e
        pass1_1008_3744,            // 1018:aa92
        pass1_1008_3748,            // 1018:aa96
        pass1_1008_374c,            // 1018:aa9a
        mixed_draw_op_1018_6a7a,    // 1018:aa9e
        destroy_win_1008_9698,      // 1018:aaa2
        pass1_1008_3750,            // 1018:aaa6
        0,                          // FUN_1018_6a76, // 1018:aaaa
        pass1_1008_9c60,            // 1018:aaae
        pass1_1008_3758,            // 1018:aab2
        0,                          // FUN_1008_6324, // 1018:aab6
        pass1_1008_9c4e,            // 1018:aaba
        pass1_1008_3762,            // 1018:aabe
        pass1_1008_9c4a,            // 1018:aac2
        pass1_1008_3766,            // 1018:aac6
        0,                          // FUN_1008_376a, // 1018:aaca
        pass1_1008_6a4a,            // 1018:aace
        pass1_1008_6b2e,            // 1018:aad2
        pass1_1008_6b02,            // 1018:aad6
        pass1_1008_377a,            // 1018:aada
        pass1_1008_9c52,            // 1018:aade
        get_stock_obj_1008_9c56,    // 1018:aae2
        pass1_1008_9c16,            // 1018:aae6
        pass1_1008_9c30,            // 1018:aaea
        pass1_1008_9c86,            // 1018:aaee
        pass1_1008_9cc4,            // 1018:aaf2
        pass1_1008_9ce0,            // 1018:aaf6
        destroy_win_1008_628e,      // 1018:aafa
        0,                          // FUN_1008_6328, // 1018:aafe
        0,                          // FUN_1008_632c, // 1018:ab02
        pass1_1018_7e7e,            // 1018:ab06
        pass1_1008_68ea,            // 1018:ab0a
        create_window_ex_1008_9760, // 1018:ab0e
        pass1_1008_68c6,            // 1018:ab12
        send_msg_1008_9640,         // 1018:ab16
        set_win_text_1008_9664,     // 1018:ab1a
        pass1_1008_372c,            // 1018:ab1e
        unk_win_op_1008_97f2,       // 1018:ab22
        pass1_1008_373c,            // 1018:ab26
        pass1_1008_3740,            // 1018:ab2a
        pass1_1008_3744,            // 1018:ab2e
        pass1_1008_3748,            // 1018:ab32
        pass1_1008_374c,            // 1018:ab36
        mixed_draw_op_1018_6a7a,    // 1018:ab3a
        destroy_win_1008_9698,      // 1018:ab3e
        pass1_1008_3750,            // 1018:ab42
        0,                          // FUN_1018_6a76, // 1018:ab46
        pass1_1008_9c60,            // 1018:ab4a
        pass1_1008_3758,            // 1018:ab4e
        0,                          // FUN_1008_6324, // 1018:ab52
        pass1_1008_9c4e,            // 1018:ab56
        pass1_1008_3762,            // 1018:ab5a
        pass1_1008_9c4a,            // 1018:ab5e
        pass1_1008_3766,            // 1018:ab62
        0,                          // FUN_1008_376a, // 1018:ab66
        pass1_1008_6a4a,            // 1018:ab6a
        pass1_1008_6b2e,            // 1018:ab6e
        pass1_1008_6b02,            // 1018:ab72
        pass1_1008_377a,            // 1018:ab76
        pass1_1008_9c52,            // 1018:ab7a
        get_stock_obj_1008_9c56,    // 1018:ab7e
        pass1_1008_9c16,            // 1018:ab82
        pass1_1008_9c30,            // 1018:ab86
        pass1_1008_9c86,            // 1018:ab8a
        pass1_1008_9cc4,            // 1018:ab8e
        pass1_1008_9ce0,            // 1018:ab92
        destroy_win_1008_628e,      // 1018:ab96
        0,                          // FUN_1008_6328, // 1018:ab9a
        0,                          // FUN_1008_632c, // 1018:ab9e
        pass1_1018_85ce,            // 1018:aba2
        pass1_1008_68ea,            // 1018:aba6
        create_window_ex_1008_9760, // 1018:abaa
        pass1_1008_68c6,            // 1018:abae
        send_msg_1008_9640,         // 1018:abb2
        set_win_text_1008_9664,     // 1018:abb6
        pass1_1008_372c,            // 1018:abba
        unk_win_op_1008_97f2,       // 1018:abbe
        pass1_1008_373c,            // 1018:abc2
        pass1_1008_3740,            // 1018:abc6
        pass1_1008_3744,            // 1018:abca
        pass1_1008_3748,            // 1018:abce
        pass1_1008_374c,            // 1018:abd2
        mixed_draw_op_1018_6a7a,    // 1018:abd6
        destroy_win_1008_9698,      // 1018:abda
        pass1_1008_3750,            // 1018:abde
        0,                          // FUN_1018_6a76, // 1018:abe2
        pass1_1008_9c60,            // 1018:abe6
        pass1_1008_3758,            // 1018:abea
        0,                          // FUN_1008_6324, // 1018:abee
        pass1_1008_9c4e,            // 1018:abf2
        pass1_1008_3762,            // 1018:abf6
        pass1_1008_9c4a,            // 1018:abfa
        pass1_1008_3766,            // 1018:abfe
        0,                          // FUN_1008_376a, // 1018:ac02
        pass1_1008_6a4a,            // 1018:ac06
        pass1_1008_6b2e,            // 1018:ac0a
        pass1_1008_6b02,            // 1018:ac0e
        pass1_1008_377a,            // 1018:ac12
        pass1_1008_9c52,            // 1018:ac16
        get_stock_obj_1008_9c56,    // 1018:ac1a
        pass1_1008_9c16,            // 1018:ac1e
        pass1_1008_9c30,            // 1018:ac22
        pass1_1008_9c86,            // 1018:ac26
        pass1_1008_9cc4,            // 1018:ac2a
        pass1_1008_9ce0,            // 1018:ac2e
        destroy_win_1008_628e,      // 1018:ac32
        0,                          // FUN_1008_6328, // 1018:ac36
        0,                          // FUN_1008_632c, // 1018:ac3a
        pass1_1018_865e,            // 1018:ac3e
        pass1_1008_68ea,            // 1018:ac42
        create_window_ex_1008_9760, // 1018:ac46
        pass1_1008_68c6,            // 1018:ac4a
        send_msg_1008_9640,         // 1018:ac4e
        set_win_text_1008_9664,     // 1018:ac52
        pass1_1008_372c,            // 1018:ac56
        unk_win_op_1008_97f2,       // 1018:ac5a
        pass1_1008_373c,            // 1018:ac5e
        pass1_1008_3740,            // 1018:ac62
        pass1_1008_3744,            // 1018:ac66
        pass1_1008_3748,            // 1018:ac6a
        pass1_1008_374c,            // 1018:ac6e
        mixed_draw_op_1018_6a7a,    // 1018:ac72
        destroy_win_1008_9698,      // 1018:ac76
        pass1_1008_3750,            // 1018:ac7a
        0,                          // FUN_1018_6a76, // 1018:ac7e
        pass1_1008_9c60,            // 1018:ac82
        pass1_1008_3758,            // 1018:ac86
        0,                          // FUN_1008_6324, // 1018:ac8a
        pass1_1008_9c4e,            // 1018:ac8e
        pass1_1008_3762,            // 1018:ac92
        pass1_1008_9c4a,            // 1018:ac96
        pass1_1008_3766,            // 1018:ac9a
        0,                          // FUN_1008_376a, // 1018:ac9e
        pass1_1008_6a4a,            // 1018:aca2
        pass1_1008_6b2e,            // 1018:aca6
        pass1_1008_6b02,            // 1018:acaa
        pass1_1008_377a,            // 1018:acae
        pass1_1008_9c52,            // 1018:acb2
        get_stock_obj_1008_9c56,    // 1018:acb6
        pass1_1008_9c16,            // 1018:acba
        pass1_1008_9c30,            // 1018:acbe
        pass1_1008_9c86,            // 1018:acc2
        pass1_1008_9cc4,            // 1018:acc6
        pass1_1008_9ce0,            // 1018:acca
        destroy_win_1008_628e,      // 1018:acce
        0,                          // FUN_1008_6328, // 1018:acd2
        0,                          // FUN_1008_632c, // 1018:acd6
        pass1_1018_8c46,            // 1018:acda
        pass1_1008_68ea,            // 1018:acde
        create_window_ex_1008_9760, // 1018:ace2
        pass1_1008_68c6,            // 1018:ace6
        send_msg_1008_9640,         // 1018:acea
        set_win_text_1008_9664,     // 1018:acee
        pass1_1008_372c,            // 1018:acf2
        unk_win_op_1008_97f2,       // 1018:acf6
        pass1_1008_373c,            // 1018:acfa
        pass1_1008_3740,            // 1018:acfe
        pass1_1008_3744,            // 1018:ad02
        pass1_1008_3748,            // 1018:ad06
        pass1_1008_374c,            // 1018:ad0a
        mixed_draw_op_1018_6a7a,    // 1018:ad0e
        destroy_win_1008_9698,      // 1018:ad12
        pass1_1008_3750,            // 1018:ad16
        0,                          // FUN_1018_6a76, // 1018:ad1a
        pass1_1008_9c60,            // 1018:ad1e
        pass1_1008_3758,            // 1018:ad22
        0,                          // FUN_1008_6324, // 1018:ad26
        pass1_1008_9c4e,            // 1018:ad2a
        pass1_1008_3762,            // 1018:ad2e
        pass1_1008_9c4a,            // 1018:ad32
        pass1_1008_3766,            // 1018:ad36
        0,                          // FUN_1008_376a, // 1018:ad3a
        pass1_1008_6a4a,            // 1018:ad3e
        pass1_1008_6b2e,            // 1018:ad42
        pass1_1008_6b02,            // 1018:ad46
        pass1_1008_377a,            // 1018:ad4a
        pass1_1008_9c52,            // 1018:ad4e
        get_stock_obj_1008_9c56,    // 1018:ad52
        pass1_1008_9c16,            // 1018:ad56
        pass1_1008_9c30,            // 1018:ad5a
        pass1_1008_9c86,            // 1018:ad5e
        pass1_1008_9cc4,            // 1018:ad62
        pass1_1008_9ce0,            // 1018:ad66
        destroy_win_1008_628e,      // 1018:ad6a
        0,                          // FUN_1008_6328, // 1018:ad6e
        0,                          // FUN_1008_632c, // 1018:ad72
        pass1_1018_838e,            // 1018:ad76
        pass1_1008_68ea,            // 1018:ad7a
        create_window_ex_1008_9760, // 1018:ad7e
        pass1_1008_68c6,            // 1018:ad82
        send_msg_1008_9640,         // 1018:ad86
        set_win_text_1008_9664,     // 1018:ad8a
        pass1_1008_372c,            // 1018:ad8e
        unk_win_op_1008_97f2,       // 1018:ad92
        pass1_1008_373c,            // 1018:ad96
        pass1_1008_3740,            // 1018:ad9a
        pass1_1008_3744,            // 1018:ad9e
        pass1_1008_3748,            // 1018:ada2
        pass1_1008_374c,            // 1018:ada6
        mixed_draw_op_1018_6a7a,    // 1018:adaa
        destroy_win_1008_9698,      // 1018:adae
        pass1_1008_3750,            // 1018:adb2
        0,                          // FUN_1018_6a76, // 1018:adb6
        pass1_1008_9c60,            // 1018:adba
        pass1_1008_3758,            // 1018:adbe
        0,                          // FUN_1008_6324, // 1018:adc2
        pass1_1008_9c4e,            // 1018:adc6
        pass1_1008_3762,            // 1018:adca
        pass1_1008_9c4a,            // 1018:adce
        pass1_1008_3766,            // 1018:add2
        0,                          // FUN_1008_376a, // 1018:add6
        pass1_1008_6a4a,            // 1018:adda
        pass1_1008_6b2e,            // 1018:adde
        pass1_1008_6b02,            // 1018:ade2
        pass1_1008_377a,            // 1018:ade6
        pass1_1008_9c52,            // 1018:adea
        get_stock_obj_1008_9c56,    // 1018:adee
        pass1_1008_9c16,            // 1018:adf2
        pass1_1008_9c30,            // 1018:adf6
        pass1_1008_9c86,            // 1018:adfa
        pass1_1008_9cc4,            // 1018:adfe
        pass1_1008_9ce0,            // 1018:ae02
        destroy_win_1008_628e,      // 1018:ae06
        0,                          // FUN_1008_6328, // 1018:ae0a
        0,                          // FUN_1008_632c, // 1018:ae0e
        pass1_1018_8b6e,            // 1018:ae12
        pass1_1008_68ea,            // 1018:ae16
        create_window_ex_1008_9760, // 1018:ae1a
        pass1_1008_68c6,            // 1018:ae1e
        send_msg_1008_9640,         // 1018:ae22
        set_win_text_1008_9664,     // 1018:ae26
        pass1_1008_372c,            // 1018:ae2a
        unk_win_op_1008_97f2,       // 1018:ae2e
        pass1_1008_373c,            // 1018:ae32
        pass1_1008_3740,            // 1018:ae36
        pass1_1008_3744,            // 1018:ae3a
        pass1_1008_3748,            // 1018:ae3e
        pass1_1008_374c,            // 1018:ae42
        mixed_draw_op_1018_6a7a,    // 1018:ae46
        destroy_win_1008_9698,      // 1018:ae4a
        pass1_1008_3750,            // 1018:ae4e
        0,                          // FUN_1018_6a76, // 1018:ae52
        pass1_1008_9c60,            // 1018:ae56
        pass1_1008_3758,            // 1018:ae5a
        0,                          // FUN_1008_6324, // 1018:ae5e
        pass1_1008_9c4e,            // 1018:ae62
        pass1_1008_3762,            // 1018:ae66
        pass1_1008_9c4a,            // 1018:ae6a
        pass1_1008_3766,            // 1018:ae6e
        0,                          // FUN_1008_376a, // 1018:ae72
        pass1_1008_6a4a,            // 1018:ae76
        pass1_1008_6b2e,            // 1018:ae7a
        pass1_1008_6b02,            // 1018:ae7e
        pass1_1008_377a,            // 1018:ae82
        pass1_1008_9c52,            // 1018:ae86
        get_stock_obj_1008_9c56,    // 1018:ae8a
        pass1_1008_9c16,            // 1018:ae8e
        pass1_1008_9c30,            // 1018:ae92
        pass1_1008_9c86,            // 1018:ae96
        pass1_1008_9cc4,            // 1018:ae9a
        pass1_1008_9ce0,            // 1018:ae9e
        destroy_win_1008_628e,      // 1018:aea2
        0,                          // FUN_1008_6328, // 1018:aea6
        0,                          // FUN_1008_632c, // 1018:aeaa
        pass1_1018_9156,            // 1018:aeae
        pass1_1008_68ea,            // 1018:aeb2
        create_window_ex_1008_9760, // 1018:aeb6
        pass1_1008_68c6,            // 1018:aeba
        send_msg_1008_9640,         // 1018:aebe
        set_win_text_1008_9664,     // 1018:aec2
        pass1_1008_372c,            // 1018:aec6
        unk_win_op_1008_97f2,       // 1018:aeca
        pass1_1008_373c,            // 1018:aece
        pass1_1008_3740,            // 1018:aed2
        pass1_1008_3744,            // 1018:aed6
        pass1_1008_3748,            // 1018:aeda
        pass1_1008_374c,            // 1018:aede
        mixed_draw_op_1018_6a7a,    // 1018:aee2
        destroy_win_1008_9698,      // 1018:aee6
        pass1_1008_3750,            // 1018:aeea
        0,                          // FUN_1018_6a76, // 1018:aeee
        pass1_1008_9c60,            // 1018:aef2
        pass1_1008_3758,            // 1018:aef6
        0,                          // FUN_1008_6324, // 1018:aefa
        pass1_1008_9c4e,            // 1018:aefe
        pass1_1008_3762,            // 1018:af02
        pass1_1008_9c4a,            // 1018:af06
        pass1_1008_3766,            // 1018:af0a
        0,                          // FUN_1008_376a, // 1018:af0e
        pass1_1008_6a4a,            // 1018:af12
        pass1_1008_6b2e,            // 1018:af16
        pass1_1008_6b02,            // 1018:af1a
        pass1_1008_377a,            // 1018:af1e
        pass1_1008_9c52,            // 1018:af22
        get_stock_obj_1008_9c56,    // 1018:af26
        pass1_1008_9c16,            // 1018:af2a
        pass1_1008_9c30,            // 1018:af2e
        pass1_1008_9c86,            // 1018:af32
        pass1_1008_9cc4,            // 1018:af36
        pass1_1008_9ce0,            // 1018:af3a
        destroy_win_1008_628e,      // 1018:af3e
        0,                          // FUN_1008_6328, // 1018:af42
        0,                          // FUN_1008_632c, // 1018:af46
        pass1_1018_8226,            // 1018:af4a
        pass1_1008_68ea,            // 1018:af4e
        create_window_ex_1008_9760, // 1018:af52
        pass1_1008_68c6,            // 1018:af56
        send_msg_1008_9640,         // 1018:af5a
        set_win_text_1008_9664,     // 1018:af5e
        pass1_1008_372c,            // 1018:af62
        unk_win_op_1008_97f2,       // 1018:af66
        pass1_1008_373c,            // 1018:af6a
        pass1_1008_3740,            // 1018:af6e
        pass1_1008_3744,            // 1018:af72
        pass1_1008_3748,            // 1018:af76
        pass1_1008_374c,            // 1018:af7a
        mixed_draw_op_1018_6a7a,    // 1018:af7e
        destroy_win_1008_9698,      // 1018:af82
        pass1_1008_3750,            // 1018:af86
        0,                          // FUN_1018_6a76, // 1018:af8a
        pass1_1008_9c60,            // 1018:af8e
        pass1_1008_3758,            // 1018:af92
        0,                          // FUN_1008_6324, // 1018:af96
        pass1_1008_9c4e,            // 1018:af9a
        pass1_1008_3762,            // 1018:af9e
        pass1_1008_9c4a,            // 1018:afa2
        pass1_1008_3766,            // 1018:afa6
        0,                          // FUN_1008_376a, // 1018:afaa
        pass1_1008_6a4a,            // 1018:afae
        pass1_1008_6b2e,            // 1018:afb2
        pass1_1008_6b02,            // 1018:afb6
        pass1_1008_377a,            // 1018:afba
        pass1_1008_9c52,            // 1018:afbe
        get_stock_obj_1008_9c56,    // 1018:afc2
        pass1_1008_9c16,            // 1018:afc6
        pass1_1008_9c30,            // 1018:afca
        pass1_1008_9c86,            // 1018:afce
        pass1_1008_9cc4,            // 1018:afd2
        pass1_1008_9ce0,            // 1018:afd6
        destroy_win_1008_628e,      // 1018:afda
        0,                          // FUN_1008_6328, // 1018:afde
        0,                          // FUN_1008_632c, // 1018:afe2
        pass1_1018_8a06,            // 1018:afe6
        pass1_1008_68ea,            // 1018:afea
        create_window_ex_1008_9760, // 1018:afee
        pass1_1008_68c6,            // 1018:aff2
        send_msg_1008_9640,         // 1018:aff6
        set_win_text_1008_9664,     // 1018:affa
        pass1_1008_372c,            // 1018:affe
        unk_win_op_1008_97f2,       // 1018:b002
        pass1_1008_373c,            // 1018:b006
        pass1_1008_3740,            // 1018:b00a
        pass1_1008_3744,            // 1018:b00e
        pass1_1008_3748,            // 1018:b012
        pass1_1008_374c,            // 1018:b016
        mixed_draw_op_1018_6a7a,    // 1018:b01a
        destroy_win_1008_9698,      // 1018:b01e
        pass1_1008_3750,            // 1018:b022
        0,                          // FUN_1018_6a76, // 1018:b026
        pass1_1008_9c60,            // 1018:b02a
        pass1_1008_3758,            // 1018:b02e
        0,                          // FUN_1008_6324, // 1018:b032
        pass1_1008_9c4e,            // 1018:b036
        pass1_1008_3762,            // 1018:b03a
        pass1_1008_9c4a,            // 1018:b03e
        pass1_1008_3766,            // 1018:b042
        0,                          // FUN_1008_376a, // 1018:b046
        pass1_1008_6a4a,            // 1018:b04a
        pass1_1008_6b2e,            // 1018:b04e
        pass1_1008_6b02,            // 1018:b052
        pass1_1008_377a,            // 1018:b056
        pass1_1008_9c52,            // 1018:b05a
        get_stock_obj_1008_9c56,    // 1018:b05e
        pass1_1008_9c16,            // 1018:b062
        pass1_1008_9c30,            // 1018:b066
        pass1_1008_9c86,            // 1018:b06a
        pass1_1008_9cc4,            // 1018:b06e
        pass1_1008_9ce0,            // 1018:b072
        destroy_win_1008_628e,      // 1018:b076
        0,                          // FUN_1008_6328, // 1018:b07a
        0,                          // FUN_1008_632c, // 1018:b07e
        pass1_1018_8fee,            // 1018:b082
        pass1_1008_68ea,            // 1018:b086
        create_window_ex_1008_9760, // 1018:b08a
        pass1_1008_68c6,            // 1018:b08e
        send_msg_1008_9640,         // 1018:b092
        set_win_text_1008_9664,     // 1018:b096
        pass1_1008_372c,            // 1018:b09a
        unk_win_op_1008_97f2,       // 1018:b09e
        pass1_1008_373c,            // 1018:b0a2
        pass1_1008_3740,            // 1018:b0a6
        pass1_1008_3744,            // 1018:b0aa
        pass1_1008_3748,            // 1018:b0ae
        pass1_1008_374c,            // 1018:b0b2
        mixed_draw_op_1018_6a7a,    // 1018:b0b6
        destroy_win_1008_9698,      // 1018:b0ba
        pass1_1008_3750,            // 1018:b0be
        0,                          // FUN_1018_6a76, // 1018:b0c2
        pass1_1008_9c60,            // 1018:b0c6
        pass1_1008_3758,            // 1018:b0ca
        0,                          // FUN_1008_6324, // 1018:b0ce
        pass1_1008_9c4e,            // 1018:b0d2
        pass1_1008_3762,            // 1018:b0d6
        pass1_1008_9c4a,            // 1018:b0da
        pass1_1008_3766,            // 1018:b0de
        0,                          // FUN_1008_376a, // 1018:b0e2
        pass1_1008_6a4a,            // 1018:b0e6
        pass1_1008_6b2e,            // 1018:b0ea
        pass1_1008_6b02,            // 1018:b0ee
        pass1_1008_377a,            // 1018:b0f2
        pass1_1008_9c52,            // 1018:b0f6
        get_stock_obj_1008_9c56,    // 1018:b0fa
        pass1_1008_9c16,            // 1018:b0fe
        pass1_1008_9c30,            // 1018:b102
        pass1_1008_9c86,            // 1018:b106
        pass1_1008_9cc4,            // 1018:b10a
        pass1_1008_9ce0,            // 1018:b10e
        destroy_win_1008_628e,      // 1018:b112
        0,                          // FUN_1008_6328, // 1018:b116
        0,                          // FUN_1008_632c, // 1018:b11a
        pass1_1018_80be,            // 1018:b11e
        pass1_1008_68ea,            // 1018:b122
        create_window_ex_1008_9760, // 1018:b126
        pass1_1008_68c6,            // 1018:b12a
        send_msg_1008_9640,         // 1018:b12e
        set_win_text_1008_9664,     // 1018:b132
        pass1_1008_372c,            // 1018:b136
        unk_win_op_1008_97f2,       // 1018:b13a
        pass1_1008_373c,            // 1018:b13e
        pass1_1008_3740,            // 1018:b142
        pass1_1008_3744,            // 1018:b146
        pass1_1008_3748,            // 1018:b14a
        pass1_1008_374c,            // 1018:b14e
        mixed_draw_op_1018_6a7a,    // 1018:b152
        destroy_win_1008_9698,      // 1018:b156
        pass1_1008_3750,            // 1018:b15a
        0,                          // FUN_1018_6a76, // 1018:b15e
        pass1_1008_9c60,            // 1018:b162
        pass1_1008_3758,            // 1018:b166
        0,                          // FUN_1008_6324, // 1018:b16a
        pass1_1008_9c4e,            // 1018:b16e
        pass1_1008_3762,            // 1018:b172
        pass1_1008_9c4a,            // 1018:b176
        pass1_1008_3766,            // 1018:b17a
        0,                          // FUN_1008_376a, // 1018:b17e
        pass1_1008_6a4a,            // 1018:b182
        pass1_1008_6b2e,            // 1018:b186
        pass1_1008_6b02,            // 1018:b18a
        pass1_1008_377a,            // 1018:b18e
        pass1_1008_9c52,            // 1018:b192
        get_stock_obj_1008_9c56,    // 1018:b196
        pass1_1008_9c16,            // 1018:b19a
        pass1_1008_9c30,            // 1018:b19e
        pass1_1008_9c86,            // 1018:b1a2
        pass1_1008_9cc4,            // 1018:b1a6
        pass1_1008_9ce0,            // 1018:b1aa
        destroy_win_1008_628e,      // 1018:b1ae
        0,                          // FUN_1008_6328, // 1018:b1b2
        0,                          // FUN_1008_632c, // 1018:b1b6
        pass1_1018_9306,            // 1018:b1ba
        pass1_1008_68ea,            // 1018:b1be
        create_window_ex_1008_9760, // 1018:b1c2
        pass1_1008_68c6,            // 1018:b1c6
        send_msg_1008_9640,         // 1018:b1ca
        set_win_text_1008_9664,     // 1018:b1ce
        pass1_1008_372c,            // 1018:b1d2
        unk_win_op_1008_97f2,       // 1018:b1d6
        pass1_1008_373c,            // 1018:b1da
        pass1_1008_3740,            // 1018:b1de
        pass1_1008_3744,            // 1018:b1e2
        pass1_1008_3748,            // 1018:b1e6
        pass1_1008_374c,            // 1018:b1ea
        mixed_draw_op_1018_6a7a,    // 1018:b1ee
        destroy_win_1008_9698,      // 1018:b1f2
        pass1_1008_3750,            // 1018:b1f6
        0,                          // FUN_1018_6a76, // 1018:b1fa
        pass1_1008_9c60,            // 1018:b1fe
        pass1_1008_3758,            // 1018:b202
        0,                          // FUN_1008_6324, // 1018:b206
        pass1_1008_9c4e,            // 1018:b20a
        pass1_1008_3762,            // 1018:b20e
        pass1_1008_9c4a,            // 1018:b212
        pass1_1008_3766,            // 1018:b216
        0,                          // FUN_1008_376a, // 1018:b21a
        pass1_1008_6a4a,            // 1018:b21e
        pass1_1008_6b2e,            // 1018:b222
        pass1_1008_6b02,            // 1018:b226
        pass1_1008_377a,            // 1018:b22a
        pass1_1008_9c52,            // 1018:b22e
        get_stock_obj_1008_9c56,    // 1018:b232
        pass1_1008_9c16,            // 1018:b236
        pass1_1008_9c30,            // 1018:b23a
        pass1_1008_9c86,            // 1018:b23e
        pass1_1008_9cc4,            // 1018:b242
        pass1_1008_9ce0,            // 1018:b246
        destroy_win_1008_628e,      // 1018:b24a
        0,                          // FUN_1008_6328, // 1018:b24e
        0,                          // FUN_1008_632c, // 1018:b252
        pass1_1018_889e,            // 1018:b256
        pass1_1008_68ea,            // 1018:b25a
        create_window_ex_1008_9760, // 1018:b25e
        pass1_1008_68c6,            // 1018:b262
        send_msg_1008_9640,         // 1018:b266
        set_win_text_1008_9664,     // 1018:b26a
        pass1_1008_372c,            // 1018:b26e
        unk_win_op_1008_97f2,       // 1018:b272
        pass1_1008_373c,            // 1018:b276
        pass1_1008_3740,            // 1018:b27a
        pass1_1008_3744,            // 1018:b27e
        pass1_1008_3748,            // 1018:b282
        pass1_1008_374c,            // 1018:b286
        mixed_draw_op_1018_6a7a,    // 1018:b28a
        destroy_win_1008_9698,      // 1018:b28e
        pass1_1008_3750,            // 1018:b292
        0,                          // FUN_1018_6a76, // 1018:b296
        pass1_1008_9c60,            // 1018:b29a
        pass1_1008_3758,            // 1018:b29e
        0,                          // FUN_1008_6324, // 1018:b2a2
        pass1_1008_9c4e,            // 1018:b2a6
        pass1_1008_3762,            // 1018:b2aa
        pass1_1008_9c4a,            // 1018:b2ae
        pass1_1008_3766,            // 1018:b2b2
        0,                          // FUN_1008_376a, // 1018:b2b6
        pass1_1008_6a4a,            // 1018:b2ba
        pass1_1008_6b2e,            // 1018:b2be
        pass1_1008_6b02,            // 1018:b2c2
        pass1_1008_377a,            // 1018:b2c6
        pass1_1008_9c52,            // 1018:b2ca
        get_stock_obj_1008_9c56,    // 1018:b2ce
        pass1_1008_9c16,            // 1018:b2d2
        pass1_1008_9c30,            // 1018:b2d6
        pass1_1008_9c86,            // 1018:b2da
        pass1_1008_9cc4,            // 1018:b2de
        pass1_1008_9ce0,            // 1018:b2e2
        destroy_win_1008_628e,      // 1018:b2e6
        0,                          // FUN_1008_6328, // 1018:b2ea
        0,                          // FUN_1008_632c, // 1018:b2ee
        pass1_1018_8e86,            // 1018:b2f2
        pass1_1008_68ea,            // 1018:b2f6
        create_window_ex_1008_9760, // 1018:b2fa
        pass1_1008_68c6,            // 1018:b2fe
        send_msg_1008_9640,         // 1018:b302
        set_win_text_1008_9664,     // 1018:b306
        pass1_1008_372c,            // 1018:b30a
        unk_win_op_1008_97f2,       // 1018:b30e
        pass1_1008_373c,            // 1018:b312
        pass1_1008_3740,            // 1018:b316
        pass1_1008_3744,            // 1018:b31a
        pass1_1008_3748,            // 1018:b31e
        pass1_1008_374c,            // 1018:b322
        mixed_draw_op_1018_6a7a,    // 1018:b326
        destroy_win_1008_9698,      // 1018:b32a
        pass1_1008_3750,            // 1018:b32e
        0,                          // FUN_1018_6a76, // 1018:b332
        pass1_1008_9c60,            // 1018:b336
        pass1_1008_3758,            // 1018:b33a
        0,                          // FUN_1008_6324, // 1018:b33e
        pass1_1008_9c4e,            // 1018:b342
        pass1_1008_3762,            // 1018:b346
        pass1_1008_9c4a,            // 1018:b34a
        pass1_1008_3766,            // 1018:b34e
        0,                          // FUN_1008_376a, // 1018:b352
        pass1_1008_6a4a,            // 1018:b356
        pass1_1008_6b2e,            // 1018:b35a
        pass1_1008_6b02,            // 1018:b35e
        pass1_1008_377a,            // 1018:b362
        pass1_1008_9c52,            // 1018:b366
        get_stock_obj_1008_9c56,    // 1018:b36a
        pass1_1008_9c16,            // 1018:b36e
        pass1_1008_9c30,            // 1018:b372
        pass1_1008_9c86,            // 1018:b376
        pass1_1008_9cc4,            // 1018:b37a
        pass1_1008_9ce0,            // 1018:b37e
        destroy_win_1008_628e,      // 1018:b382
        0,                          // FUN_1008_6328, // 1018:b386
        0,                          // FUN_1008_632c, // 1018:b38a
        pass1_1018_7f56,            // 1018:b38e
        pass1_1008_68ea,            // 1018:b392
        create_window_ex_1008_9760, // 1018:b396
        pass1_1008_68c6,            // 1018:b39a
        send_msg_1008_9640,         // 1018:b39e
        set_win_text_1008_9664,     // 1018:b3a2
        pass1_1008_372c,            // 1018:b3a6
        unk_win_op_1008_97f2,       // 1018:b3aa
        pass1_1008_373c,            // 1018:b3ae
        pass1_1008_3740,            // 1018:b3b2
        pass1_1008_3744,            // 1018:b3b6
        pass1_1008_3748,            // 1018:b3ba
        pass1_1008_374c,            // 1018:b3be
        mixed_draw_op_1018_6a7a,    // 1018:b3c2
        destroy_win_1008_9698,      // 1018:b3c6
        pass1_1008_3750,            // 1018:b3ca
        0,                          // FUN_1018_6a76, // 1018:b3ce
        pass1_1008_9c60,            // 1018:b3d2
        pass1_1008_3758,            // 1018:b3d6
        0,                          // FUN_1008_6324, // 1018:b3da
        pass1_1008_9c4e,            // 1018:b3de
        pass1_1008_3762,            // 1018:b3e2
        pass1_1008_9c4a,            // 1018:b3e6
        pass1_1008_3766,            // 1018:b3ea
        0,                          // FUN_1008_376a, // 1018:b3ee
        pass1_1008_6a4a,            // 1018:b3f2
        pass1_1008_6b2e,            // 1018:b3f6
        pass1_1008_6b02,            // 1018:b3fa
        pass1_1008_377a,            // 1018:b3fe
        pass1_1008_9c52,            // 1018:b402
        get_stock_obj_1008_9c56,    // 1018:b406
        pass1_1008_9c16,            // 1018:b40a
        pass1_1008_9c30,            // 1018:b40e
        pass1_1008_9c86,            // 1018:b412
        pass1_1008_9cc4,            // 1018:b416
        pass1_1008_9ce0,            // 1018:b41a
        destroy_win_1008_628e,      // 1018:b41e
        0,                          // FUN_1008_6328, // 1018:b422
        0,                          // FUN_1008_632c, // 1018:b426
        pass1_1018_8736,            // 1018:b42a
        pass1_1008_68ea,            // 1018:b42e
        create_window_ex_1008_9760, // 1018:b432
        pass1_1008_68c6,            // 1018:b436
        send_msg_1008_9640,         // 1018:b43a
        set_win_text_1008_9664,     // 1018:b43e
        pass1_1008_372c,            // 1018:b442
        unk_win_op_1008_97f2,       // 1018:b446
        pass1_1008_373c,            // 1018:b44a
        pass1_1008_3740,            // 1018:b44e
        pass1_1008_3744,            // 1018:b452
        pass1_1008_3748,            // 1018:b456
        pass1_1008_374c,            // 1018:b45a
        mixed_draw_op_1018_6a7a,    // 1018:b45e
        destroy_win_1008_9698,      // 1018:b462
        pass1_1008_3750,            // 1018:b466
        0,                          // FUN_1018_6a76, // 1018:b46a
        pass1_1008_9c60,            // 1018:b46e
        pass1_1008_3758,            // 1018:b472
        0,                          // FUN_1008_6324, // 1018:b476
        pass1_1008_9c4e,            // 1018:b47a
        pass1_1008_3762,            // 1018:b47e
        pass1_1008_9c4a,            // 1018:b482
        pass1_1008_3766,            // 1018:b486
        0,                          // FUN_1008_376a, // 1018:b48a
        pass1_1008_6a4a,            // 1018:b48e
        pass1_1008_6b2e,            // 1018:b492
        pass1_1008_6b02,            // 1018:b496
        pass1_1008_377a,            // 1018:b49a
        pass1_1008_9c52,            // 1018:b49e
        get_stock_obj_1008_9c56,    // 1018:b4a2
        pass1_1008_9c16,            // 1018:b4a6
        pass1_1008_9c30,            // 1018:b4aa
        pass1_1008_9c86,            // 1018:b4ae
        pass1_1008_9cc4,            // 1018:b4b2
        pass1_1008_9ce0,            // 1018:b4b6
        destroy_win_1008_628e,      // 1018:b4ba
        0,                          // FUN_1008_6328, // 1018:b4be
        0,                          // FUN_1008_632c, // 1018:b4c2
        pass1_1018_8d1e,            // 1018:b4c6
        pass1_1008_68ea,            // 1018:b4ca
        create_window_ex_1008_9760, // 1018:b4ce
        pass1_1008_68c6,            // 1018:b4d2
        send_msg_1008_9640,         // 1018:b4d6
        set_win_text_1008_9664,     // 1018:b4da
        pass1_1008_372c,            // 1018:b4de
        unk_win_op_1008_97f2,       // 1018:b4e2
        pass1_1008_373c,            // 1018:b4e6
        pass1_1008_3740,            // 1018:b4ea
        pass1_1008_3744,            // 1018:b4ee
        pass1_1008_3748,            // 1018:b4f2
        pass1_1008_374c,            // 1018:b4f6
        mixed_draw_op_1018_6a7a,    // 1018:b4fa
        destroy_win_1008_9698,      // 1018:b4fe
        pass1_1008_3750,            // 1018:b502
        0,                          // FUN_1018_6a76, // 1018:b506
        pass1_1008_9c60,            // 1018:b50a
        pass1_1008_3758,            // 1018:b50e
        0,                          // FUN_1008_6324, // 1018:b512
        pass1_1008_9c4e,            // 1018:b516
        pass1_1008_3762,            // 1018:b51a
        pass1_1008_9c4a,            // 1018:b51e
        pass1_1008_3766,            // 1018:b522
        0,                          // FUN_1008_376a, // 1018:b526
        pass1_1008_6a4a,            // 1018:b52a
        pass1_1008_6b2e,            // 1018:b52e
        pass1_1008_6b02,            // 1018:b532
        pass1_1008_377a,            // 1018:b536
        pass1_1008_9c52,            // 1018:b53a
        get_stock_obj_1008_9c56,    // 1018:b53e
        pass1_1008_9c16,            // 1018:b542
        pass1_1008_9c30,            // 1018:b546
        pass1_1008_9c86,            // 1018:b54a
        pass1_1008_9cc4,            // 1018:b54e
        pass1_1008_9ce0,            // 1018:b552
        destroy_win_1008_628e,      // 1018:b556
        0,                          // FUN_1008_6328, // 1018:b55a
        0,                          // FUN_1008_632c, // 1018:b55e
        pass1_1018_7dee,            // 1018:b562
        pass1_1008_68ea,            // 1018:b566
        create_window_ex_1008_9760, // 1018:b56a
        pass1_1008_68c6,            // 1018:b56e
        send_msg_1008_9640,         // 1018:b572
        set_win_text_1008_9664,     // 1018:b576
        pass1_1008_372c,            // 1018:b57a
        unk_win_op_1008_97f2,       // 1018:b57e
        pass1_1008_373c,            // 1018:b582
        pass1_1008_3740,            // 1018:b586
        pass1_1008_3744,            // 1018:b58a
        pass1_1008_3748,            // 1018:b58e
        pass1_1008_374c,            // 1018:b592
        mixed_draw_op_1018_6a7a,    // 1018:b596
        destroy_win_1008_9698,      // 1018:b59a
        pass1_1008_3750,            // 1018:b59e
        0,                          // FUN_1018_6a76, // 1018:b5a2
        pass1_1008_9c60,            // 1018:b5a6
        pass1_1008_3758,            // 1018:b5aa
        0,                          // FUN_1008_6324, // 1018:b5ae
        pass1_1008_9c4e,            // 1018:b5b2
        pass1_1008_3762,            // 1018:b5b6
        pass1_1008_9c4a,            // 1018:b5ba
        pass1_1008_3766,            // 1018:b5be
        0,                          // FUN_1008_376a, // 1018:b5c2
        pass1_1008_6a4a,            // 1018:b5c6
        pass1_1008_6b2e,            // 1018:b5ca
        pass1_1008_6b02,            // 1018:b5ce
        pass1_1008_377a,            // 1018:b5d2
        pass1_1008_9c52,            // 1018:b5d6
        get_stock_obj_1008_9c56,    // 1018:b5da
        pass1_1008_9c16,            // 1018:b5de
        pass1_1008_9c30,            // 1018:b5e2
        pass1_1008_9c86,            // 1018:b5e6
        pass1_1008_9cc4,            // 1018:b5ea
        pass1_1008_9ce0,            // 1018:b5ee
        destroy_win_1008_628e,      // 1018:b5f2
        0,                          // FUN_1008_6328, // 1018:b5f6
        0,                          // FUN_1008_632c, // 1018:b5fa
        pass1_1018_853e,            // 1018:b5fe
        pass1_1008_68ea,            // 1018:b602
        create_window_ex_1008_9760, // 1018:b606
        pass1_1008_68c6,            // 1018:b60a
        send_msg_1008_9640,         // 1018:b60e
        set_win_text_1008_9664,     // 1018:b612
        pass1_1008_372c,            // 1018:b616
        unk_win_op_1008_97f2,       // 1018:b61a
        pass1_1008_373c,            // 1018:b61e
        pass1_1008_3740,            // 1018:b622
        pass1_1008_3744,            // 1018:b626
        pass1_1008_3748,            // 1018:b62a
        pass1_1008_374c,            // 1018:b62e
        mixed_draw_op_1018_6a7a,    // 1018:b632
        destroy_win_1008_9698,      // 1018:b636
        pass1_1008_3750,            // 1018:b63a
        0,                          // FUN_1018_6a76, // 1018:b63e
        pass1_1008_9c60,            // 1018:b642
        pass1_1008_3758,            // 1018:b646
        0,                          // FUN_1008_6324, // 1018:b64a
        pass1_1008_9c4e,            // 1018:b64e
        pass1_1008_3762,            // 1018:b652
        pass1_1008_9c4a,            // 1018:b656
        pass1_1008_3766,            // 1018:b65a
        0,                          // FUN_1008_376a, // 1018:b65e
        pass1_1008_6a4a,            // 1018:b662
        pass1_1008_6b2e,            // 1018:b666
        pass1_1008_6b02,            // 1018:b66a
        pass1_1008_377a,            // 1018:b66e
        pass1_1008_9c52,            // 1018:b672
        get_stock_obj_1008_9c56,    // 1018:b676
        pass1_1008_9c16,            // 1018:b67a
        pass1_1008_9c30,            // 1018:b67e
        pass1_1008_9c86,            // 1018:b682
        pass1_1008_9cc4,            // 1018:b686
        pass1_1008_9ce0,            // 1018:b68a
        destroy_win_1008_628e,      // 1018:b68e
        0,                          // FUN_1008_6328, // 1018:b692
        0,                          // FUN_1008_632c, // 1018:b696
        pass1_1018_83d6,            // 1018:b69a
        pass1_1008_68ea,            // 1018:b69e
        create_window_ex_1008_9760, // 1018:b6a2
        pass1_1008_68c6,            // 1018:b6a6
        send_msg_1008_9640,         // 1018:b6aa
        set_win_text_1008_9664,     // 1018:b6ae
        pass1_1008_372c,            // 1018:b6b2
        unk_win_op_1008_97f2,       // 1018:b6b6
        pass1_1008_373c,            // 1018:b6ba
        pass1_1008_3740,            // 1018:b6be
        pass1_1008_3744,            // 1018:b6c2
        pass1_1008_3748,            // 1018:b6c6
        pass1_1008_374c,            // 1018:b6ca
        mixed_draw_op_1018_6a7a,    // 1018:b6ce
        destroy_win_1008_9698,      // 1018:b6d2
        pass1_1008_3750,            // 1018:b6d6
        0,                          // FUN_1018_6a76, // 1018:b6da
        pass1_1008_9c60,            // 1018:b6de
        pass1_1008_3758,            // 1018:b6e2
        0,                          // FUN_1008_6324, // 1018:b6e6
        pass1_1008_9c4e,            // 1018:b6ea
        pass1_1008_3762,            // 1018:b6ee
        pass1_1008_9c4a,            // 1018:b6f2
        pass1_1008_3766,            // 1018:b6f6
        0,                          // FUN_1008_376a, // 1018:b6fa
        pass1_1008_6a4a,            // 1018:b6fe
        pass1_1008_6b2e,            // 1018:b702
        pass1_1008_6b02,            // 1018:b706
        pass1_1008_377a,            // 1018:b70a
        pass1_1008_9c52,            // 1018:b70e
        get_stock_obj_1008_9c56,    // 1018:b712
        pass1_1008_9c16,            // 1018:b716
        pass1_1008_9c30,            // 1018:b71a
        pass1_1008_9c86,            // 1018:b71e
        pass1_1008_9cc4,            // 1018:b722
        pass1_1008_9ce0,            // 1018:b726
        destroy_win_1008_628e,      // 1018:b72a
        0,                          // FUN_1008_6328, // 1018:b72e
        0,                          // FUN_1008_632c, // 1018:b732
        pass1_1018_91e6,            // 1018:b736
        pass1_1008_68ea,            // 1018:b73a
        create_window_ex_1008_9760, // 1018:b73e
        pass1_1008_68c6,            // 1018:b742
        send_msg_1008_9640,         // 1018:b746
        set_win_text_1008_9664,     // 1018:b74a
        pass1_1008_372c,            // 1018:b74e
        unk_win_op_1008_97f2,       // 1018:b752
        pass1_1008_373c,            // 1018:b756
        pass1_1008_3740,            // 1018:b75a
        pass1_1008_3744,            // 1018:b75e
        pass1_1008_3748,            // 1018:b762
        pass1_1008_374c,            // 1018:b766
        mixed_draw_op_1018_6a7a,    // 1018:b76a
        destroy_win_1008_9698,      // 1018:b76e
        pass1_1008_3750,            // 1018:b772
        0,                          // FUN_1018_6a76, // 1018:b776
        pass1_1008_9c60,            // 1018:b77a
        pass1_1008_3758,            // 1018:b77e
        0,                          // FUN_1008_6324, // 1018:b782
        pass1_1008_9c4e,            // 1018:b786
        pass1_1008_3762,            // 1018:b78a
        pass1_1008_9c4a,            // 1018:b78e
        pass1_1008_3766,            // 1018:b792
        0,                          // FUN_1008_376a, // 1018:b796
        pass1_1008_6a4a,            // 1018:b79a
        pass1_1008_6b2e,            // 1018:b79e
        pass1_1008_6b02,            // 1018:b7a2
        pass1_1008_377a,            // 1018:b7a6
        pass1_1008_9c52,            // 1018:b7aa
        get_stock_obj_1008_9c56,    // 1018:b7ae
        pass1_1008_9c16,            // 1018:b7b2
        pass1_1008_9c30,            // 1018:b7b6
        pass1_1008_9c86,            // 1018:b7ba
        pass1_1008_9cc4,            // 1018:b7be
        pass1_1008_9ce0,            // 1018:b7c2
        destroy_win_1008_628e,      // 1018:b7c6
        0,                          // FUN_1008_6328, // 1018:b7ca
        0,                          // FUN_1008_632c, // 1018:b7ce
        pass1_1018_82fe,            // 1018:b7d2
        pass1_1008_68ea,            // 1018:b7d6
        create_window_ex_1008_9760, // 1018:b7da
        pass1_1008_68c6,            // 1018:b7de
        send_msg_1008_9640,         // 1018:b7e2
        set_win_text_1008_9664,     // 1018:b7e6
        pass1_1008_372c,            // 1018:b7ea
        unk_win_op_1008_97f2,       // 1018:b7ee
        pass1_1008_373c,            // 1018:b7f2
        pass1_1008_3740,            // 1018:b7f6
        pass1_1008_3744,            // 1018:b7fa
        pass1_1008_3748,            // 1018:b7fe
        pass1_1008_374c,            // 1018:b802
        mixed_draw_op_1018_6a7a,    // 1018:b806
        destroy_win_1008_9698,      // 1018:b80a
        pass1_1008_3750,            // 1018:b80e
        0,                          // FUN_1018_6a76, // 1018:b812
        pass1_1008_9c60,            // 1018:b816
        pass1_1008_3758,            // 1018:b81a
        0,                          // FUN_1008_6324, // 1018:b81e
        pass1_1008_9c4e,            // 1018:b822
        pass1_1008_3762,            // 1018:b826
        pass1_1008_9c4a,            // 1018:b82a
        pass1_1008_3766,            // 1018:b82e
        0,                          // FUN_1008_376a, // 1018:b832
        pass1_1008_6a4a,            // 1018:b836
        pass1_1008_6b2e,            // 1018:b83a
        pass1_1008_6b02,            // 1018:b83e
        pass1_1008_377a,            // 1018:b842
        pass1_1008_9c52,            // 1018:b846
        get_stock_obj_1008_9c56,    // 1018:b84a
        pass1_1008_9c16,            // 1018:b84e
        pass1_1008_9c30,            // 1018:b852
        pass1_1008_9c86,            // 1018:b856
        pass1_1008_9cc4,            // 1018:b85a
        pass1_1008_9ce0,            // 1018:b85e
        destroy_win_1008_628e,      // 1018:b862
        0,                          // FUN_1008_6328, // 1018:b866
        0,                          // FUN_1008_632c, // 1018:b86a
        pass1_1018_8ade,            // 1018:b86e
        pass1_1008_68ea,            // 1018:b872
        create_window_ex_1008_9760, // 1018:b876
        pass1_1008_68c6,            // 1018:b87a
        send_msg_1008_9640,         // 1018:b87e
        set_win_text_1008_9664,     // 1018:b882
        pass1_1008_372c,            // 1018:b886
        unk_win_op_1008_97f2,       // 1018:b88a
        pass1_1008_373c,            // 1018:b88e
        pass1_1008_3740,            // 1018:b892
        pass1_1008_3744,            // 1018:b896
        pass1_1008_3748,            // 1018:b89a
        pass1_1008_374c,            // 1018:b89e
        mixed_draw_op_1018_6a7a,    // 1018:b8a2
        destroy_win_1008_9698,      // 1018:b8a6
        pass1_1008_3750,            // 1018:b8aa
        0,                          // FUN_1018_6a76, // 1018:b8ae
        pass1_1008_9c60,            // 1018:b8b2
        pass1_1008_3758,            // 1018:b8b6
        0,                          // FUN_1008_6324, // 1018:b8ba
        pass1_1008_9c4e,            // 1018:b8be
        pass1_1008_3762,            // 1018:b8c2
        pass1_1008_9c4a,            // 1018:b8c6
        pass1_1008_3766,            // 1018:b8ca
        0,                          // FUN_1008_376a, // 1018:b8ce
        pass1_1008_6a4a,            // 1018:b8d2
        pass1_1008_6b2e,            // 1018:b8d6
        pass1_1008_6b02,            // 1018:b8da
        pass1_1008_377a,            // 1018:b8de
        pass1_1008_9c52,            // 1018:b8e2
        get_stock_obj_1008_9c56,    // 1018:b8e6
        pass1_1008_9c16,            // 1018:b8ea
        pass1_1008_9c30,            // 1018:b8ee
        pass1_1008_9c86,            // 1018:b8f2
        pass1_1008_9cc4,            // 1018:b8f6
        pass1_1008_9ce0,            // 1018:b8fa
        destroy_win_1008_628e,      // 1018:b8fe
        0,                          // FUN_1008_6328, // 1018:b902
        0,                          // FUN_1008_632c, // 1018:b906
        pass1_1018_90c6,            // 1018:b90a
        pass1_1008_68ea,            // 1018:b90e
        create_window_ex_1008_9760, // 1018:b912
        pass1_1008_68c6,            // 1018:b916
        send_msg_1008_9640,         // 1018:b91a
        set_win_text_1008_9664,     // 1018:b91e
        pass1_1008_372c,            // 1018:b922
        unk_win_op_1008_97f2,       // 1018:b926
        pass1_1008_373c,            // 1018:b92a
        pass1_1008_3740,            // 1018:b92e
        pass1_1008_3744,            // 1018:b932
        pass1_1008_3748,            // 1018:b936
        pass1_1008_374c,            // 1018:b93a
        mixed_draw_op_1018_6a7a,    // 1018:b93e
        destroy_win_1008_9698,      // 1018:b942
        pass1_1008_3750,            // 1018:b946
        0,                          // FUN_1018_6a76, // 1018:b94a
        pass1_1008_9c60,            // 1018:b94e
        pass1_1008_3758,            // 1018:b952
        0,                          // FUN_1008_6324, // 1018:b956
        pass1_1008_9c4e,            // 1018:b95a
        pass1_1008_3762,            // 1018:b95e
        pass1_1008_9c4a,            // 1018:b962
        pass1_1008_3766,            // 1018:b966
        0,                          // FUN_1008_376a, // 1018:b96a
        pass1_1008_6a4a,            // 1018:b96e
        pass1_1008_6b2e,            // 1018:b972
        pass1_1008_6b02,            // 1018:b976
        pass1_1008_377a,            // 1018:b97a
        pass1_1008_9c52,            // 1018:b97e
        get_stock_obj_1008_9c56,    // 1018:b982
        pass1_1008_9c16,            // 1018:b986
        pass1_1008_9c30,            // 1018:b98a
        pass1_1008_9c86,            // 1018:b98e
        pass1_1008_9cc4,            // 1018:b992
        pass1_1008_9ce0,            // 1018:b996
        destroy_win_1008_628e,      // 1018:b99a
        0,                          // FUN_1008_6328, // 1018:b99e
        0,                          // FUN_1008_632c, // 1018:b9a2
        pass1_1018_8196,            // 1018:b9a6
        pass1_1008_68ea,            // 1018:b9aa
        create_window_ex_1008_9760, // 1018:b9ae
        pass1_1008_68c6,            // 1018:b9b2
        send_msg_1008_9640,         // 1018:b9b6
        set_win_text_1008_9664,     // 1018:b9ba
        pass1_1008_372c,            // 1018:b9be
        unk_win_op_1008_97f2,       // 1018:b9c2
        pass1_1008_373c,            // 1018:b9c6
        pass1_1008_3740,            // 1018:b9ca
        pass1_1008_3744,            // 1018:b9ce
        pass1_1008_3748,            // 1018:b9d2
        pass1_1008_374c,            // 1018:b9d6
        mixed_draw_op_1018_6a7a,    // 1018:b9da
        destroy_win_1008_9698,      // 1018:b9de
        pass1_1008_3750,            // 1018:b9e2
        0,                          // FUN_1018_6a76, // 1018:b9e6
        pass1_1008_9c60,            // 1018:b9ea
        pass1_1008_3758,            // 1018:b9ee
        0,                          // FUN_1008_6324, // 1018:b9f2
        pass1_1008_9c4e,            // 1018:b9f6
        pass1_1008_3762,            // 1018:b9fa
        pass1_1008_9c4a,            // 1018:b9fe
        pass1_1008_3766,            // 1018:ba02
        0,                          // FUN_1008_376a, // 1018:ba06
        pass1_1008_6a4a,            // 1018:ba0a
        pass1_1008_6b2e,            // 1018:ba0e
        pass1_1008_6b02,            // 1018:ba12
        pass1_1008_377a,            // 1018:ba16
        pass1_1008_9c52,            // 1018:ba1a
        get_stock_obj_1008_9c56,    // 1018:ba1e
        pass1_1008_9c16,            // 1018:ba22
        pass1_1008_9c30,            // 1018:ba26
        pass1_1008_9c86,            // 1018:ba2a
        pass1_1008_9cc4,            // 1018:ba2e
        pass1_1008_9ce0,            // 1018:ba32
        destroy_win_1008_628e,      // 1018:ba36
        0,                          // FUN_1008_6328, // 1018:ba3a
        0,                          // FUN_1008_632c, // 1018:ba3e
        pass1_1018_9276,            // 1018:ba42
        pass1_1008_68ea,            // 1018:ba46
        create_window_ex_1008_9760, // 1018:ba4a
        pass1_1008_68c6,            // 1018:ba4e
        send_msg_1008_9640,         // 1018:ba52
        set_win_text_1008_9664,     // 1018:ba56
        pass1_1008_372c,            // 1018:ba5a
        unk_win_op_1008_97f2,       // 1018:ba5e
        pass1_1008_373c,            // 1018:ba62
        pass1_1008_3740,            // 1018:ba66
        pass1_1008_3744,            // 1018:ba6a
        pass1_1008_3748,            // 1018:ba6e
        pass1_1008_374c,            // 1018:ba72
        mixed_draw_op_1018_6a7a,    // 1018:ba76
        destroy_win_1008_9698,      // 1018:ba7a
        pass1_1008_3750,            // 1018:ba7e
        0,                          // FUN_1018_6a76, // 1018:ba82
        pass1_1008_9c60,            // 1018:ba86
        pass1_1008_3758,            // 1018:ba8a
        0,                          // FUN_1008_6324, // 1018:ba8e
        pass1_1008_9c4e,            // 1018:ba92
        pass1_1008_3762,            // 1018:ba96
        pass1_1008_9c4a,            // 1018:ba9a
        pass1_1008_3766,            // 1018:ba9e
        0,                          // FUN_1008_376a, // 1018:baa2
        pass1_1008_6a4a,            // 1018:baa6
        pass1_1008_6b2e,            // 1018:baaa
        pass1_1008_6b02,            // 1018:baae
        pass1_1008_377a,            // 1018:bab2
        pass1_1008_9c52,            // 1018:bab6
        get_stock_obj_1008_9c56,    // 1018:baba
        pass1_1008_9c16,            // 1018:babe
        pass1_1008_9c30,            // 1018:bac2
        pass1_1008_9c86,            // 1018:bac6
        pass1_1008_9cc4,            // 1018:baca
        pass1_1008_9ce0,            // 1018:bace
        destroy_win_1008_628e,      // 1018:bad2
        0,                          // FUN_1008_6328, // 1018:bad6
        0,                          // FUN_1008_632c, // 1018:bada
        pass1_1018_8976,            // 1018:bade
        pass1_1008_68ea,            // 1018:bae2
        create_window_ex_1008_9760, // 1018:bae6
        pass1_1008_68c6,            // 1018:baea
        send_msg_1008_9640,         // 1018:baee
        set_win_text_1008_9664,     // 1018:baf2
        pass1_1008_372c,            // 1018:baf6
        unk_win_op_1008_97f2,       // 1018:bafa
        pass1_1008_373c,            // 1018:bafe
        pass1_1008_3740,            // 1018:bb02
        pass1_1008_3744,            // 1018:bb06
        pass1_1008_3748,            // 1018:bb0a
        pass1_1008_374c,            // 1018:bb0e
        mixed_draw_op_1018_6a7a,    // 1018:bb12
        destroy_win_1008_9698,      // 1018:bb16
        pass1_1008_3750,            // 1018:bb1a
        0,                          // FUN_1018_6a76, // 1018:bb1e
        pass1_1008_9c60,            // 1018:bb22
        pass1_1008_3758,            // 1018:bb26
        0,                          // FUN_1008_6324, // 1018:bb2a
        pass1_1008_9c4e,            // 1018:bb2e
        pass1_1008_3762,            // 1018:bb32
        pass1_1008_9c4a,            // 1018:bb36
        pass1_1008_3766,            // 1018:bb3a
        0,                          // FUN_1008_376a, // 1018:bb3e
        pass1_1008_6a4a,            // 1018:bb42
        pass1_1008_6b2e,            // 1018:bb46
        pass1_1008_6b02,            // 1018:bb4a
        pass1_1008_377a,            // 1018:bb4e
        pass1_1008_9c52,            // 1018:bb52
        get_stock_obj_1008_9c56,    // 1018:bb56
        pass1_1008_9c16,            // 1018:bb5a
        pass1_1008_9c30,            // 1018:bb5e
        pass1_1008_9c86,            // 1018:bb62
        pass1_1008_9cc4,            // 1018:bb66
        pass1_1008_9ce0,            // 1018:bb6a
        destroy_win_1008_628e,      // 1018:bb6e
        0,                          // FUN_1008_6328, // 1018:bb72
        0,                          // FUN_1008_632c, // 1018:bb76
        pass1_1018_8f5e,            // 1018:bb7a
        pass1_1008_68ea,            // 1018:bb7e
        create_window_ex_1008_9760, // 1018:bb82
        pass1_1008_68c6,            // 1018:bb86
        send_msg_1008_9640,         // 1018:bb8a
        set_win_text_1008_9664,     // 1018:bb8e
        pass1_1008_372c,            // 1018:bb92
        unk_win_op_1008_97f2,       // 1018:bb96
        pass1_1008_373c,            // 1018:bb9a
        pass1_1008_3740,            // 1018:bb9e
        pass1_1008_3744,            // 1018:bba2
        pass1_1008_3748,            // 1018:bba6
        pass1_1008_374c,            // 1018:bbaa
        mixed_draw_op_1018_6a7a,    // 1018:bbae
        destroy_win_1008_9698,      // 1018:bbb2
        pass1_1008_3750,            // 1018:bbb6
        0,                          // FUN_1018_6a76, // 1018:bbba
        pass1_1008_9c60,            // 1018:bbbe
        pass1_1008_3758,            // 1018:bbc2
        0,                          // FUN_1008_6324, // 1018:bbc6
        pass1_1008_9c4e,            // 1018:bbca
        pass1_1008_3762,            // 1018:bbce
        pass1_1008_9c4a,            // 1018:bbd2
        pass1_1008_3766,            // 1018:bbd6
        0,                          // FUN_1008_376a, // 1018:bbda
        pass1_1008_6a4a,            // 1018:bbde
        pass1_1008_6b2e,            // 1018:bbe2
        pass1_1008_6b02,            // 1018:bbe6
        pass1_1008_377a,            // 1018:bbea
        pass1_1008_9c52,            // 1018:bbee
        get_stock_obj_1008_9c56,    // 1018:bbf2
        pass1_1008_9c16,            // 1018:bbf6
        pass1_1008_9c30,            // 1018:bbfa
        pass1_1008_9c86,            // 1018:bbfe
        pass1_1008_9cc4,            // 1018:bc02
        pass1_1008_9ce0,            // 1018:bc06
        destroy_win_1008_628e,      // 1018:bc0a
        0,                          // FUN_1008_6328, // 1018:bc0e
        0,                          // FUN_1008_632c, // 1018:bc12
        pass1_1018_802e,            // 1018:bc16
        pass1_1008_68ea,            // 1018:bc1a
        create_window_ex_1008_9760, // 1018:bc1e
        pass1_1008_68c6,            // 1018:bc22
        send_msg_1008_9640,         // 1018:bc26
        set_win_text_1008_9664,     // 1018:bc2a
        pass1_1008_372c,            // 1018:bc2e
        unk_win_op_1008_97f2,       // 1018:bc32
        pass1_1008_373c,            // 1018:bc36
        pass1_1008_3740,            // 1018:bc3a
        pass1_1008_3744,            // 1018:bc3e
        pass1_1008_3748,            // 1018:bc42
        pass1_1008_374c,            // 1018:bc46
        mixed_draw_op_1018_6a7a,    // 1018:bc4a
        destroy_win_1008_9698,      // 1018:bc4e
        pass1_1008_3750,            // 1018:bc52
        0,                          // FUN_1018_6a76, // 1018:bc56
        pass1_1008_9c60,            // 1018:bc5a
        pass1_1008_3758,            // 1018:bc5e
        0,                          // FUN_1008_6324, // 1018:bc62
        pass1_1008_9c4e,            // 1018:bc66
        pass1_1008_3762,            // 1018:bc6a
        pass1_1008_9c4a,            // 1018:bc6e
        pass1_1008_3766,            // 1018:bc72
        0,                          // FUN_1008_376a, // 1018:bc76
        pass1_1008_6a4a,            // 1018:bc7a
        pass1_1008_6b2e,            // 1018:bc7e
        pass1_1008_6b02,            // 1018:bc82
        pass1_1008_377a,            // 1018:bc86
        pass1_1008_9c52,            // 1018:bc8a
        get_stock_obj_1008_9c56,    // 1018:bc8e
        pass1_1008_9c16,            // 1018:bc92
        pass1_1008_9c30,            // 1018:bc96
        pass1_1008_9c86,            // 1018:bc9a
        pass1_1008_9cc4,            // 1018:bc9e
        pass1_1008_9ce0,            // 1018:bca2
        destroy_win_1008_628e,      // 1018:bca6
        0,                          // FUN_1008_6328, // 1018:bcaa
        0,                          // FUN_1008_632c, // 1018:bcae
        pass1_1018_880e,            // 1018:bcb2
        pass1_1008_68ea,            // 1018:bcb6
        create_window_ex_1008_9760, // 1018:bcba
        pass1_1008_68c6,            // 1018:bcbe
        send_msg_1008_9640,         // 1018:bcc2
        set_win_text_1008_9664,     // 1018:bcc6
        pass1_1008_372c,            // 1018:bcca
        unk_win_op_1008_97f2,       // 1018:bcce
        pass1_1008_373c,            // 1018:bcd2
        pass1_1008_3740,            // 1018:bcd6
        pass1_1008_3744,            // 1018:bcda
        pass1_1008_3748,            // 1018:bcde
        pass1_1008_374c,            // 1018:bce2
        mixed_draw_op_1018_6a7a,    // 1018:bce6
        destroy_win_1008_9698,      // 1018:bcea
        pass1_1008_3750,            // 1018:bcee
        0,                          // FUN_1018_6a76, // 1018:bcf2
        pass1_1008_9c60,            // 1018:bcf6
        pass1_1008_3758,            // 1018:bcfa
        0,                          // FUN_1008_6324, // 1018:bcfe
        pass1_1008_9c4e,            // 1018:bd02
        pass1_1008_3762,            // 1018:bd06
        pass1_1008_9c4a,            // 1018:bd0a
        pass1_1008_3766,            // 1018:bd0e
        0,                          // FUN_1008_376a, // 1018:bd12
        pass1_1008_6a4a,            // 1018:bd16
        pass1_1008_6b2e,            // 1018:bd1a
        pass1_1008_6b02,            // 1018:bd1e
        pass1_1008_377a,            // 1018:bd22
        pass1_1008_9c52,            // 1018:bd26
        get_stock_obj_1008_9c56,    // 1018:bd2a
        pass1_1008_9c16,            // 1018:bd2e
        pass1_1008_9c30,            // 1018:bd32
        pass1_1008_9c86,            // 1018:bd36
        pass1_1008_9cc4,            // 1018:bd3a
        pass1_1008_9ce0,            // 1018:bd3e
        destroy_win_1008_628e,      // 1018:bd42
        0,                          // FUN_1008_6328, // 1018:bd46
        0,                          // FUN_1008_632c, // 1018:bd4a
        pass1_1018_8df6,            // 1018:bd4e
        pass1_1008_68ea,            // 1018:bd52
        create_window_ex_1008_9760, // 1018:bd56
        pass1_1008_68c6,            // 1018:bd5a
        send_msg_1008_9640,         // 1018:bd5e
        set_win_text_1008_9664,     // 1018:bd62
        pass1_1008_372c,            // 1018:bd66
        unk_win_op_1008_97f2,       // 1018:bd6a
        pass1_1008_373c,            // 1018:bd6e
        pass1_1008_3740,            // 1018:bd72
        pass1_1008_3744,            // 1018:bd76
        pass1_1008_3748,            // 1018:bd7a
        pass1_1008_374c,            // 1018:bd7e
        mixed_draw_op_1018_6a7a,    // 1018:bd82
        destroy_win_1008_9698,      // 1018:bd86
        pass1_1008_3750,            // 1018:bd8a
        0,                          // FUN_1018_6a76, // 1018:bd8e
        pass1_1008_9c60,            // 1018:bd92
        pass1_1008_3758,            // 1018:bd96
        0,                          // FUN_1008_6324, // 1018:bd9a
        pass1_1008_9c4e,            // 1018:bd9e
        pass1_1008_3762,            // 1018:bda2
        pass1_1008_9c4a,            // 1018:bda6
        pass1_1008_3766,            // 1018:bdaa
        0,                          // FUN_1008_376a, // 1018:bdae
        pass1_1008_6a4a,            // 1018:bdb2
        pass1_1008_6b2e,            // 1018:bdb6
        pass1_1008_6b02,            // 1018:bdba
        pass1_1008_377a,            // 1018:bdbe
        pass1_1008_9c52,            // 1018:bdc2
        get_stock_obj_1008_9c56,    // 1018:bdc6
        pass1_1008_9c16,            // 1018:bdca
        pass1_1008_9c30,            // 1018:bdce
        pass1_1008_9c86,            // 1018:bdd2
        pass1_1008_9cc4,            // 1018:bdd6
        pass1_1008_9ce0,            // 1018:bdda
        destroy_win_1008_628e,      // 1018:bdde
        0,                          // FUN_1008_6328, // 1018:bde2
        0,                          // FUN_1008_632c, // 1018:bde6
        pass1_1018_7ec6,            // 1018:bdea
        pass1_1008_68ea,            // 1018:bdee
        create_window_ex_1008_9760, // 1018:bdf2
        pass1_1008_68c6,            // 1018:bdf6
        send_msg_1008_9640,         // 1018:bdfa
        set_win_text_1008_9664,     // 1018:bdfe
        pass1_1008_372c,            // 1018:be02
        unk_win_op_1008_97f2,       // 1018:be06
        pass1_1008_373c,            // 1018:be0a
        pass1_1008_3740,            // 1018:be0e
        pass1_1008_3744,            // 1018:be12
        pass1_1008_3748,            // 1018:be16
        pass1_1008_374c,            // 1018:be1a
        mixed_draw_op_1018_6a7a,    // 1018:be1e
        destroy_win_1008_9698,      // 1018:be22
        pass1_1008_3750,            // 1018:be26
        0,                          // FUN_1018_6a76, // 1018:be2a
        pass1_1008_9c60,            // 1018:be2e
        pass1_1008_3758,            // 1018:be32
        0,                          // FUN_1008_6324, // 1018:be36
        pass1_1008_9c4e,            // 1018:be3a
        pass1_1008_3762,            // 1018:be3e
        pass1_1008_9c4a,            // 1018:be42
        pass1_1008_3766,            // 1018:be46
        0,                          // FUN_1008_376a, // 1018:be4a
        pass1_1008_6a4a,            // 1018:be4e
        pass1_1008_6b2e,            // 1018:be52
        pass1_1008_6b02,            // 1018:be56
        pass1_1008_377a,            // 1018:be5a
        pass1_1008_9c52,            // 1018:be5e
        get_stock_obj_1008_9c56,    // 1018:be62
        pass1_1008_9c16,            // 1018:be66
        pass1_1008_9c30,            // 1018:be6a
        pass1_1008_9c86,            // 1018:be6e
        pass1_1008_9cc4,            // 1018:be72
        pass1_1008_9ce0,            // 1018:be76
        destroy_win_1008_628e,      // 1018:be7a
        0,                          // FUN_1008_6328, // 1018:be7e
        0,                          // FUN_1008_632c, // 1018:be82
        pass1_1018_8616,            // 1018:be86
        pass1_1008_68ea,            // 1018:be8a
        create_window_ex_1008_9760, // 1018:be8e
        pass1_1008_68c6,            // 1018:be92
        send_msg_1008_9640,         // 1018:be96
        set_win_text_1008_9664,     // 1018:be9a
        pass1_1008_372c,            // 1018:be9e
        unk_win_op_1008_97f2,       // 1018:bea2
        pass1_1008_373c,            // 1018:bea6
        pass1_1008_3740,            // 1018:beaa
        pass1_1008_3744,            // 1018:beae
        pass1_1008_3748,            // 1018:beb2
        pass1_1008_374c,            // 1018:beb6
        mixed_draw_op_1018_6a7a,    // 1018:beba
        destroy_win_1008_9698,      // 1018:bebe
        pass1_1008_3750,            // 1018:bec2
        0,                          // FUN_1018_6a76, // 1018:bec6
        pass1_1008_9c60,            // 1018:beca
        pass1_1008_3758,            // 1018:bece
        0,                          // FUN_1008_6324, // 1018:bed2
        pass1_1008_9c4e,            // 1018:bed6
        pass1_1008_3762,            // 1018:beda
        pass1_1008_9c4a,            // 1018:bede
        pass1_1008_3766,            // 1018:bee2
        0,                          // FUN_1008_376a, // 1018:bee6
        pass1_1008_6a4a,            // 1018:beea
        pass1_1008_6b2e,            // 1018:beee
        pass1_1008_6b02,            // 1018:bef2
        pass1_1008_377a,            // 1018:bef6
        pass1_1008_9c52,            // 1018:befa
        get_stock_obj_1008_9c56,    // 1018:befe
        pass1_1008_9c16,            // 1018:bf02
        pass1_1008_9c30,            // 1018:bf06
        pass1_1008_9c86,            // 1018:bf0a
        pass1_1008_9cc4,            // 1018:bf0e
        pass1_1008_9ce0,            // 1018:bf12
        destroy_win_1008_628e,      // 1018:bf16
        0,                          // FUN_1008_6328, // 1018:bf1a
        0,                          // FUN_1008_632c, // 1018:bf1e
        pass1_1018_86a6,            // 1018:bf22
        pass1_1008_68ea,            // 1018:bf26
        create_window_ex_1008_9760, // 1018:bf2a
        pass1_1008_68c6,            // 1018:bf2e
        send_msg_1008_9640,         // 1018:bf32
        set_win_text_1008_9664,     // 1018:bf36
        pass1_1008_372c,            // 1018:bf3a
        unk_win_op_1008_97f2,       // 1018:bf3e
        pass1_1008_373c,            // 1018:bf42
        pass1_1008_3740,            // 1018:bf46
        pass1_1008_3744,            // 1018:bf4a
        pass1_1008_3748,            // 1018:bf4e
        pass1_1008_374c,            // 1018:bf52
        mixed_draw_op_1018_6a7a,    // 1018:bf56
        destroy_win_1008_9698,      // 1018:bf5a
        pass1_1008_3750,            // 1018:bf5e
        0,                          // FUN_1018_6a76, // 1018:bf62
        pass1_1008_9c60,            // 1018:bf66
        pass1_1008_3758,            // 1018:bf6a
        0,                          // FUN_1008_6324, // 1018:bf6e
        pass1_1008_9c4e,            // 1018:bf72
        pass1_1008_3762,            // 1018:bf76
        pass1_1008_9c4a,            // 1018:bf7a
        pass1_1008_3766,            // 1018:bf7e
        0,                          // FUN_1008_376a, // 1018:bf82
        pass1_1008_6a4a,            // 1018:bf86
        pass1_1008_6b2e,            // 1018:bf8a
        pass1_1008_6b02,            // 1018:bf8e
        pass1_1008_377a,            // 1018:bf92
        pass1_1008_9c52,            // 1018:bf96
        get_stock_obj_1008_9c56,    // 1018:bf9a
        pass1_1008_9c16,            // 1018:bf9e
        pass1_1008_9c30,            // 1018:bfa2
        pass1_1008_9c86,            // 1018:bfa6
        pass1_1008_9cc4,            // 1018:bfaa
        pass1_1008_9ce0,            // 1018:bfae
        destroy_win_1008_628e,      // 1018:bfb2
        0,                          // FUN_1008_6328, // 1018:bfb6
        0,                          // FUN_1008_632c, // 1018:bfba
        pass1_1018_8c8e,            // 1018:bfbe
        pass1_1008_68ea,            // 1018:bfc2
        create_window_ex_1008_9760, // 1018:bfc6
        pass1_1008_68c6,            // 1018:bfca
        send_msg_1008_9640,         // 1018:bfce
        set_win_text_1008_9664,     // 1018:bfd2
        pass1_1008_372c,            // 1018:bfd6
        unk_win_op_1008_97f2,       // 1018:bfda
        pass1_1008_373c,            // 1018:bfde
        pass1_1008_3740,            // 1018:bfe2
        pass1_1008_3744,            // 1018:bfe6
        pass1_1008_3748,            // 1018:bfea
        pass1_1008_374c,            // 1018:bfee
        mixed_draw_op_1018_6a7a,    // 1018:bff2
        destroy_win_1008_9698,      // 1018:bff6
        pass1_1008_3750,            // 1018:bffa
        0,                          // FUN_1018_6a76, // 1018:bffe
        pass1_1008_9c60,            // 1018:c002
        pass1_1008_3758,            // 1018:c006
        0,                          // FUN_1008_6324, // 1018:c00a
        pass1_1008_9c4e,            // 1018:c00e
        pass1_1008_3762,            // 1018:c012
        pass1_1008_9c4a,            // 1018:c016
        pass1_1008_3766,            // 1018:c01a
        0,                          // FUN_1008_376a, // 1018:c01e
        pass1_1008_6a4a,            // 1018:c022
        pass1_1008_6b2e,            // 1018:c026
        pass1_1008_6b02,            // 1018:c02a
        pass1_1008_377a,            // 1018:c02e
        pass1_1008_9c52,            // 1018:c032
        get_stock_obj_1008_9c56,    // 1018:c036
        pass1_1008_9c16,            // 1018:c03a
        pass1_1008_9c30,            // 1018:c03e
        pass1_1008_9c86,            // 1018:c042
        pass1_1008_9cc4,            // 1018:c046
        pass1_1008_9ce0,            // 1018:c04a
        destroy_win_1008_628e,      // 1018:c04e
        0,                          // FUN_1008_6328, // 1018:c052
        0,                          // FUN_1008_632c, // 1018:c056
        pass1_1018_84ae,            // 1018:c05a
        pass1_1008_68ea,            // 1018:c05e
        create_window_ex_1008_9760, // 1018:c062
        pass1_1008_68c6,            // 1018:c066
        send_msg_1008_9640,         // 1018:c06a
        set_win_text_1008_9664,     // 1018:c06e
        pass1_1008_372c,            // 1018:c072
        unk_win_op_1008_97f2,       // 1018:c076
        pass1_1008_373c,            // 1018:c07a
        pass1_1008_3740,            // 1018:c07e
        pass1_1008_3744,            // 1018:c082
        pass1_1008_3748,            // 1018:c086
        pass1_1008_374c,            // 1018:c08a
        mixed_draw_op_1018_6a7a,    // 1018:c08e
        destroy_win_1008_9698,      // 1018:c092
        pass1_1008_3750,            // 1018:c096
        0,                          // FUN_1018_6a76, // 1018:c09a
        pass1_1008_9c60,            // 1018:c09e
        pass1_1008_3758,            // 1018:c0a2
        0,                          // FUN_1008_6324, // 1018:c0a6
        pass1_1008_9c4e,            // 1018:c0aa
        pass1_1008_3762,            // 1018:c0ae
        pass1_1008_9c4a,            // 1018:c0b2
        pass1_1008_3766,            // 1018:c0b6
        0,                          // FUN_1008_376a, // 1018:c0ba
        pass1_1008_6a4a,            // 1018:c0be
        pass1_1008_6b2e,            // 1018:c0c2
        pass1_1008_6b02,            // 1018:c0c6
        pass1_1008_377a,            // 1018:c0ca
        pass1_1008_9c52,            // 1018:c0ce
        get_stock_obj_1008_9c56,    // 1018:c0d2
        pass1_1008_9c16,            // 1018:c0d6
        pass1_1008_9c30,            // 1018:c0da
        pass1_1008_9c86,            // 1018:c0de
        pass1_1008_9cc4,            // 1018:c0e2
        pass1_1008_9ce0,            // 1018:c0e6
        destroy_win_1008_628e,      // 1018:c0ea
        0,                          // FUN_1008_6328, // 1018:c0ee
        0,                          // FUN_1008_632c, // 1018:c0f2
        pass1_1018_8bb6,            // 1018:c0f6
        pass1_1008_68ea,            // 1018:c0fa
        create_window_ex_1008_9760, // 1018:c0fe
        pass1_1008_68c6,            // 1018:c102
        send_msg_1008_9640,         // 1018:c106
        set_win_text_1008_9664,     // 1018:c10a
        pass1_1008_372c,            // 1018:c10e
        unk_win_op_1008_97f2,       // 1018:c112
        pass1_1008_373c,            // 1018:c116
        pass1_1008_3740,            // 1018:c11a
        pass1_1008_3744,            // 1018:c11e
        pass1_1008_3748,            // 1018:c122
        pass1_1008_374c,            // 1018:c126
        mixed_draw_op_1018_6a7a,    // 1018:c12a
        destroy_win_1008_9698,      // 1018:c12e
        pass1_1008_3750,            // 1018:c132
        0,                          // FUN_1018_6a76, // 1018:c136
        pass1_1008_9c60,            // 1018:c13a
        pass1_1008_3758,            // 1018:c13e
        0,                          // FUN_1008_6324, // 1018:c142
        pass1_1008_9c4e,            // 1018:c146
        pass1_1008_3762,            // 1018:c14a
        pass1_1008_9c4a,            // 1018:c14e
        pass1_1008_3766,            // 1018:c152
        0,                          // FUN_1008_376a, // 1018:c156
        pass1_1008_6a4a,            // 1018:c15a
        pass1_1008_6b2e,            // 1018:c15e
        pass1_1008_6b02,            // 1018:c162
        pass1_1008_377a,            // 1018:c166
        pass1_1008_9c52,            // 1018:c16a
        get_stock_obj_1008_9c56,    // 1018:c16e
        pass1_1008_9c16,            // 1018:c172
        pass1_1008_9c30,            // 1018:c176
        pass1_1008_9c86,            // 1018:c17a
        pass1_1008_9cc4,            // 1018:c17e
        pass1_1008_9ce0,            // 1018:c182
        destroy_win_1008_628e,      // 1018:c186
        0,                          // FUN_1008_6328, // 1018:c18a
        0,                          // FUN_1008_632c, // 1018:c18e
        pass1_1018_919e,            // 1018:c192
        pass1_1008_68ea,            // 1018:c196
        create_window_ex_1008_9760, // 1018:c19a
        pass1_1008_68c6,            // 1018:c19e
        send_msg_1008_9640,         // 1018:c1a2
        set_win_text_1008_9664,     // 1018:c1a6
        pass1_1008_372c,            // 1018:c1aa
        unk_win_op_1008_97f2,       // 1018:c1ae
        pass1_1008_373c,            // 1018:c1b2
        pass1_1008_3740,            // 1018:c1b6
        pass1_1008_3744,            // 1018:c1ba
        pass1_1008_3748,            // 1018:c1be
        pass1_1008_374c,            // 1018:c1c2
        mixed_draw_op_1018_6a7a,    // 1018:c1c6
        destroy_win_1008_9698,      // 1018:c1ca
        pass1_1008_3750,            // 1018:c1ce
        0,                          // FUN_1018_6a76, // 1018:c1d2
        pass1_1008_9c60,            // 1018:c1d6
        pass1_1008_3758,            // 1018:c1da
        0,                          // FUN_1008_6324, // 1018:c1de
        pass1_1008_9c4e,            // 1018:c1e2
        pass1_1008_3762,            // 1018:c1e6
        pass1_1008_9c4a,            // 1018:c1ea
        pass1_1008_3766,            // 1018:c1ee
        0,                          // FUN_1008_376a, // 1018:c1f2
        pass1_1008_6a4a,            // 1018:c1f6
        pass1_1008_6b2e,            // 1018:c1fa
        pass1_1008_6b02,            // 1018:c1fe
        pass1_1008_377a,            // 1018:c202
        pass1_1008_9c52,            // 1018:c206
        get_stock_obj_1008_9c56,    // 1018:c20a
        pass1_1008_9c16,            // 1018:c20e
        pass1_1008_9c30,            // 1018:c212
        pass1_1008_9c86,            // 1018:c216
        pass1_1008_9cc4,            // 1018:c21a
        pass1_1008_9ce0,            // 1018:c21e
        destroy_win_1008_628e,      // 1018:c222
        0,                          // FUN_1008_6328, // 1018:c226
        0,                          // FUN_1008_632c, // 1018:c22a
        pass1_1018_826e,            // 1018:c22e
        pass1_1008_68ea,            // 1018:c232
        create_window_ex_1008_9760, // 1018:c236
        pass1_1008_68c6,            // 1018:c23a
        send_msg_1008_9640,         // 1018:c23e
        set_win_text_1008_9664,     // 1018:c242
        pass1_1008_372c,            // 1018:c246
        unk_win_op_1008_97f2,       // 1018:c24a
        pass1_1008_373c,            // 1018:c24e
        pass1_1008_3740,            // 1018:c252
        pass1_1008_3744,            // 1018:c256
        pass1_1008_3748,            // 1018:c25a
        pass1_1008_374c,            // 1018:c25e
        mixed_draw_op_1018_6a7a,    // 1018:c262
        destroy_win_1008_9698,      // 1018:c266
        pass1_1008_3750,            // 1018:c26a
        0,                          // FUN_1018_6a76, // 1018:c26e
        pass1_1008_9c60,            // 1018:c272
        pass1_1008_3758,            // 1018:c276
        0,                          // FUN_1008_6324, // 1018:c27a
        pass1_1008_9c4e,            // 1018:c27e
        pass1_1008_3762,            // 1018:c282
        pass1_1008_9c4a,            // 1018:c286
        pass1_1008_3766,            // 1018:c28a
        0,                          // FUN_1008_376a, // 1018:c28e
        pass1_1008_6a4a,            // 1018:c292
        pass1_1008_6b2e,            // 1018:c296
        pass1_1008_6b02,            // 1018:c29a
        pass1_1008_377a,            // 1018:c29e
        pass1_1008_9c52,            // 1018:c2a2
        get_stock_obj_1008_9c56,    // 1018:c2a6
        pass1_1008_9c16,            // 1018:c2aa
        pass1_1008_9c30,            // 1018:c2ae
        pass1_1008_9c86,            // 1018:c2b2
        pass1_1008_9cc4,            // 1018:c2b6
        pass1_1008_9ce0,            // 1018:c2ba
        destroy_win_1008_628e,      // 1018:c2be
        0,                          // FUN_1008_6328, // 1018:c2c2
        0,                          // FUN_1008_632c, // 1018:c2c6
        pass1_1018_8a4e,            // 1018:c2ca
        pass1_1008_68ea,            // 1018:c2ce
        create_window_ex_1008_9760, // 1018:c2d2
        pass1_1008_68c6,            // 1018:c2d6
        send_msg_1008_9640,         // 1018:c2da
        set_win_text_1008_9664,     // 1018:c2de
        pass1_1008_372c,            // 1018:c2e2
        unk_win_op_1008_97f2,       // 1018:c2e6
        pass1_1008_373c,            // 1018:c2ea
        pass1_1008_3740,            // 1018:c2ee
        pass1_1008_3744,            // 1018:c2f2
        pass1_1008_3748,            // 1018:c2f6
        pass1_1008_374c,            // 1018:c2fa
        mixed_draw_op_1018_6a7a,    // 1018:c2fe
        destroy_win_1008_9698,      // 1018:c302
        pass1_1008_3750,            // 1018:c306
        0,                          // FUN_1018_6a76, // 1018:c30a
        pass1_1008_9c60,            // 1018:c30e
        pass1_1008_3758,            // 1018:c312
        0,                          // FUN_1008_6324, // 1018:c316
        pass1_1008_9c4e,            // 1018:c31a
        pass1_1008_3762,            // 1018:c31e
        pass1_1008_9c4a,            // 1018:c322
        pass1_1008_3766,            // 1018:c326
        0,                          // FUN_1008_376a, // 1018:c32a
        pass1_1008_6a4a,            // 1018:c32e
        pass1_1008_6b2e,            // 1018:c332
        pass1_1008_6b02,            // 1018:c336
        pass1_1008_377a,            // 1018:c33a
        pass1_1008_9c52,            // 1018:c33e
        get_stock_obj_1008_9c56,    // 1018:c342
        pass1_1008_9c16,            // 1018:c346
        pass1_1008_9c30,            // 1018:c34a
        pass1_1008_9c86,            // 1018:c34e
        pass1_1008_9cc4,            // 1018:c352
        pass1_1008_9ce0,            // 1018:c356
        destroy_win_1008_628e,      // 1018:c35a
        0,                          // FUN_1008_6328, // 1018:c35e
        0,                          // FUN_1008_632c, // 1018:c362
        pass1_1018_9036,            // 1018:c366
        pass1_1008_68ea,            // 1018:c36a
        create_window_ex_1008_9760, // 1018:c36e
        pass1_1008_68c6,            // 1018:c372
        send_msg_1008_9640,         // 1018:c376
        set_win_text_1008_9664,     // 1018:c37a
        pass1_1008_372c,            // 1018:c37e
        unk_win_op_1008_97f2,       // 1018:c382
        pass1_1008_373c,            // 1018:c386
        pass1_1008_3740,            // 1018:c38a
        pass1_1008_3744,            // 1018:c38e
        pass1_1008_3748,            // 1018:c392
        pass1_1008_374c,            // 1018:c396
        mixed_draw_op_1018_6a7a,    // 1018:c39a
        destroy_win_1008_9698,      // 1018:c39e
        pass1_1008_3750,            // 1018:c3a2
        0,                          // FUN_1018_6a76, // 1018:c3a6
        pass1_1008_9c60,            // 1018:c3aa
        pass1_1008_3758,            // 1018:c3ae
        0,                          // FUN_1008_6324, // 1018:c3b2
        pass1_1008_9c4e,            // 1018:c3b6
        pass1_1008_3762,            // 1018:c3ba
        pass1_1008_9c4a,            // 1018:c3be
        pass1_1008_3766,            // 1018:c3c2
        0,                          // FUN_1008_376a, // 1018:c3c6
        pass1_1008_6a4a,            // 1018:c3ca
        pass1_1008_6b2e,            // 1018:c3ce
        pass1_1008_6b02,            // 1018:c3d2
        pass1_1008_377a,            // 1018:c3d6
        pass1_1008_9c52,            // 1018:c3da
        get_stock_obj_1008_9c56,    // 1018:c3de
        pass1_1008_9c16,            // 1018:c3e2
        pass1_1008_9c30,            // 1018:c3e6
        pass1_1008_9c86,            // 1018:c3ea
        pass1_1008_9cc4,            // 1018:c3ee
        pass1_1008_9ce0,            // 1018:c3f2
        destroy_win_1008_628e,      // 1018:c3f6
        0,                          // FUN_1008_6328, // 1018:c3fa
        0,                          // FUN_1008_632c, // 1018:c3fe
        pass1_1018_8b26,            // 1018:9b2e *
};

void *addr_table_1018_c8bc[] = {
        pass1_1018_c896,         // 1018:c8bc
        pass1_1008_68ea,         // 1018:c8c0
        win_1020_0316,           // 1018:c8c4
        pass1_1020_028c,         // 1018:c8c8
        send_msg_1008_9640,      // 1018:c8cc
        set_win_text_1008_9664,  // 1018:c8d0
        pass1_1008_372c,         // 1018:c8d4
        unk_win_op_1008_97f2,    // 1018:c8d8
        pass1_1008_373c,         // 1018:c8dc
        pass1_1008_3740,         // 1018:c8e0
        pass1_1008_3744,         // 1018:c8e4
        pass1_1008_3748,         // 1018:c8e8
        pass1_1008_374c,         // 1018:c8ec
        unk_draw_op_1018_c578,   // 1018:c8f0
        destroy_win_1008_9698,   // 1018:c8f4
        pass1_1008_3750,         // 1018:c8f8
        pass1_1008_3754,         // 1018:c8fc
        pass1_1008_9c60,         // 1018:c900
        pass1_1008_3758,         // 1018:c904
        0,                       // FUN_1008_6324, // 1018:c908
        pass1_1008_9c4e,         // 1018:c90c
        pass1_1008_3762,         // 1018:c910
        pass1_1008_9c4a,         // 1018:c914
        post_msg_1020_03b2,      // 1018:c918
        post_msg_1020_03d6,      // 1018:c91c
        pass1_1008_6a4a,         // 1018:c920
        post_msg_1020_03fa,      // 1018:c924
        pass1_1008_6b02,         // 1018:c928
        pass1_1008_377a,         // 1018:c92c
        pass1_1008_9c52,         // 1018:c930
        get_stock_obj_1008_9c56, // 1018:c934
        pass1_1008_9c16,         // 1018:c938
        pass1_1008_9c30,         // 1018:c93c
        pass1_1008_9c86,         // 1018:c940
        pass1_1008_9cc4,         // 1018:c944
        pass1_1008_9ce0,         // 1018:c948
        pass1_1020_02ae,         // 1018:c94c
        0,                       // FUN_1008_6328, // 1018:c950
        0,                       // FUN_1008_632c, // 1018:c954
};

void *addr_table_1018_d3d2[] = {
        pass1_1018_d386,         // 1018:d3d2
        pass1_1008_68ea,         // 1018:d3d6
        win_1020_0316,           // 1018:d3da
        pass1_1020_028c,         // 1018:d3de
        send_msg_1008_9640,      // 1018:d3e2
        set_win_text_1008_9664,  // 1018:d3e6
        pass1_1008_372c,         // 1018:d3ea
        unk_win_op_1008_97f2,    // 1018:d3ee
        pass1_1008_373c,         // 1018:d3f2
        pass1_1008_3740,         // 1018:d3f6
        pass1_1008_3744,         // 1018:d3fa
        pass1_1008_3748,         // 1018:d3fe
        pass1_1008_374c,         // 1018:d402
        unk_draw_op_1018_cda8,   // 1018:d406
        destroy_win_1008_9698,   // 1018:d40a
        pass1_1008_3750,         // 1018:d40e
        pass1_1008_3754,         // 1018:d412
        pass1_1008_9c60,         // 1018:d416
        pass1_1008_3758,         // 1018:d41a
        0,                       // FUN_1008_6324, // 1018:d41e
        pass1_1008_9c4e,         // 1018:d422
        pass1_1008_3762,         // 1018:d426
        pass1_1008_9c4a,         // 1018:d42a
        post_msg_1020_03b2,      // 1018:d42e
        post_msg_1020_03d6,      // 1018:d432
        pass1_1008_6a4a,         // 1018:d436
        post_msg_1020_03fa,      // 1018:d43a
        pass1_1008_6b02,         // 1018:d43e
        pass1_1008_377a,         // 1018:d442
        pass1_1008_9c52,         // 1018:d446
        get_stock_obj_1008_9c56, // 1018:d44a
        pass1_1008_9c16,         // 1018:d44e
        pass1_1008_9c30,         // 1018:d452
        pass1_1008_9c86,         // 1018:d456
        pass1_1008_9cc4,         // 1018:d45a
        pass1_1008_9ce0,         // 1018:d45e
        pass1_1020_02ae,         // 1018:d462
        0,                       // FUN_1008_6328, // 1018:d466
        0,                       // FUN_1008_632c, // 1018:d46a
        pass1_1018_d2c8,         // 1018:d46e
        pass1_1008_68ea,         // 1018:d472
        win_1020_0316,           // 1018:d476
        pass1_1020_028c,         // 1018:d47a
        send_msg_1008_9640,      // 1018:d47e
        set_win_text_1008_9664,  // 1018:d482
        pass1_1008_372c,         // 1018:d486
        unk_win_op_1008_97f2,    // 1018:d48a
        pass1_1008_373c,         // 1018:d48e
        pass1_1008_3740,         // 1018:d492
        pass1_1008_3744,         // 1018:d496
        pass1_1008_3748,         // 1018:d49a
        pass1_1008_374c,         // 1018:d49e
        unk_draw_op_1018_c578,   // 1018:d4a2
        destroy_win_1008_9698,   // 1018:d4a6
        pass1_1008_3750,         // 1018:d4aa
        pass1_1008_3754,         // 1018:d4ae
        pass1_1008_9c60,         // 1018:d4b2
        pass1_1008_3758,         // 1018:d4b6
        0,                       // FUN_1008_6324, // 1018:d4ba
        pass1_1008_9c4e,         // 1018:d4be
        pass1_1008_3762,         // 1018:d4c2
        pass1_1008_9c4a,         // 1018:d4c6
        post_msg_1020_03b2,      // 1018:d4ca
        post_msg_1020_03d6,      // 1018:d4ce
        pass1_1008_6a4a,         // 1018:d4d2
        post_msg_1020_03fa,      // 1018:d4d6
        pass1_1008_6b02,         // 1018:d4da
        pass1_1008_377a,         // 1018:d4de
        pass1_1008_9c52,         // 1018:d4e2
        get_stock_obj_1008_9c56, // 1018:d4e6
        pass1_1008_9c16,         // 1018:d4ea
        pass1_1008_9c30,         // 1018:d4ee
        pass1_1008_9c86,         // 1018:d4f2
        pass1_1008_9cc4,         // 1018:d4f6
        pass1_1008_9ce0,         // 1018:d4fa
        pass1_1020_02ae,         // 1018:d4fe
        0,                       // FUN_1008_6328, // 1018:d502
        0,                       // FUN_1008_632c, // 1018:d506
        pass1_1018_d20a,         // 1018:d50a
        pass1_1008_68ea,         // 1018:d50e
        win_1020_0316,           // 1018:d512
        pass1_1020_028c,         // 1018:d516
        send_msg_1008_9640,      // 1018:d51a
        set_win_text_1008_9664,  // 1018:d51e
        pass1_1008_372c,         // 1018:d522
        unk_win_op_1008_97f2,    // 1018:d526
        pass1_1008_373c,         // 1018:d52a
        pass1_1008_3740,         // 1018:d52e
        pass1_1008_3744,         // 1018:d532
        pass1_1008_3748,         // 1018:d536
        pass1_1008_374c,         // 1018:d53a
        unk_draw_op_1018_c578,   // 1018:d53e
        destroy_win_1008_9698,   // 1018:d542
        pass1_1008_3750,         // 1018:d546
        pass1_1008_3754,         // 1018:d54a
        pass1_1008_9c60,         // 1018:d54e
        pass1_1008_3758,         // 1018:d552
        0,                       // FUN_1008_6324, // 1018:d556
        pass1_1008_9c4e,         // 1018:d55a
        pass1_1008_3762,         // 1018:d55e
        pass1_1008_9c4a,         // 1018:d562
        post_msg_1020_03b2,      // 1018:d566
        post_msg_1020_03d6,      // 1018:d56a
        pass1_1008_6a4a,         // 1018:d56e
        post_msg_1020_03fa,      // 1018:d572
        pass1_1008_6b02,         // 1018:d576
        pass1_1008_377a,         // 1018:d57a
        pass1_1008_9c52,         // 1018:d57e
        get_stock_obj_1008_9c56, // 1018:d582
        pass1_1008_9c16,         // 1018:d586
        pass1_1008_9c30,         // 1018:d58a
        pass1_1008_9c86,         // 1018:d58e
        pass1_1008_9cc4,         // 1018:d592
        pass1_1008_9ce0,         // 1018:d596
        pass1_1020_02ae,         // 1018:d59a
        0,                       // FUN_1008_6328, // 1018:d59e
        0,                       // FUN_1008_632c, // 1018:d5a2
        pass1_1018_d33a,         // 1018:d5a6
        pass1_1008_68ea,         // 1018:d5aa
        win_1020_0316,           // 1018:d5ae
        pass1_1020_028c,         // 1018:d5b2
        send_msg_1008_9640,      // 1018:d5b6
        set_win_text_1008_9664,  // 1018:d5ba
        pass1_1008_372c,         // 1018:d5be
        unk_win_op_1008_97f2,    // 1018:d5c2
        pass1_1008_373c,         // 1018:d5c6
        pass1_1008_3740,         // 1018:d5ca
        pass1_1008_3744,         // 1018:d5ce
        pass1_1008_3748,         // 1018:d5d2
        pass1_1008_374c,         // 1018:d5d6
        unk_draw_op_1018_c578,   // 1018:d5da
        destroy_win_1008_9698,   // 1018:d5de
        pass1_1008_3750,         // 1018:d5e2
        pass1_1008_3754,         // 1018:d5e6
        pass1_1008_9c60,         // 1018:d5ea
        pass1_1008_3758,         // 1018:d5ee
        0,                       // FUN_1008_6324, // 1018:d5f2
        pass1_1008_9c4e,         // 1018:d5f6
        pass1_1008_3762,         // 1018:d5fa
        pass1_1008_9c4a,         // 1018:d5fe
        post_msg_1020_03b2,      // 1018:d602
        post_msg_1020_03d6,      // 1018:d606
        pass1_1008_6a4a,         // 1018:d60a
        post_msg_1020_03fa,      // 1018:d60e
        pass1_1008_6b02,         // 1018:d612
        pass1_1008_377a,         // 1018:d616
        pass1_1008_9c52,         // 1018:d61a
        get_stock_obj_1008_9c56, // 1018:d61e
        pass1_1008_9c16,         // 1018:d622
        pass1_1008_9c30,         // 1018:d626
        pass1_1008_9c86,         // 1018:d62a
        pass1_1008_9cc4,         // 1018:d62e
        pass1_1008_9ce0,         // 1018:d632
        pass1_1020_02ae,         // 1018:d636
        0,                       // FUN_1008_6328, // 1018:d63a
        0,                       // FUN_1008_632c, // 1018:d63e
        pass1_1018_d27c,         // 1018:d642
        pass1_1008_68ea,         // 1018:d646
        win_1020_0316,           // 1018:d64a
        pass1_1020_028c,         // 1018:d64e
        send_msg_1008_9640,      // 1018:d652
        set_win_text_1008_9664,  // 1018:d656
        pass1_1008_372c,         // 1018:d65a
        unk_win_op_1008_97f2,    // 1018:d65e
        pass1_1008_373c,         // 1018:d662
        pass1_1008_3740,         // 1018:d666
        pass1_1008_3744,         // 1018:d66a
        pass1_1008_3748,         // 1018:d66e
        pass1_1008_374c,         // 1018:d672
        unk_draw_op_1018_c578,   // 1018:d676
        destroy_win_1008_9698,   // 1018:d67a
        pass1_1008_3750,         // 1018:d67e
        pass1_1008_3754,         // 1018:d682
        pass1_1008_9c60,         // 1018:d686
        pass1_1008_3758,         // 1018:d68a
        0,                       // FUN_1008_6324, // 1018:d68e
        pass1_1008_9c4e,         // 1018:d692
        pass1_1008_3762,         // 1018:d696
        pass1_1008_9c4a,         // 1018:d69a
        post_msg_1020_03b2,      // 1018:d69e
        post_msg_1020_03d6,      // 1018:d6a2
        pass1_1008_6a4a,         // 1018:d6a6
        post_msg_1020_03fa,      // 1018:d6aa
        pass1_1008_6b02,         // 1018:d6ae
        pass1_1008_377a,         // 1018:d6b2
        pass1_1008_9c52,         // 1018:d6b6
        get_stock_obj_1008_9c56, // 1018:d6ba
        pass1_1008_9c16,         // 1018:d6be
        pass1_1008_9c30,         // 1018:d6c2
        pass1_1008_9c86,         // 1018:d6c6
        pass1_1008_9cc4,         // 1018:d6ca
        pass1_1008_9ce0,         // 1018:d6ce
        pass1_1020_02ae,         // 1018:d6d2
        0,                       // FUN_1008_6328, // 1018:d6d6
        0,                       // FUN_1008_632c, // 1018:d6da
        pass1_1018_d1be,         // 1018:d6de
        pass1_1008_68ea,         // 1018:d6e2
        win_1020_0316,           // 1018:d6e6
        pass1_1020_028c,         // 1018:d6ea
        send_msg_1008_9640,      // 1018:d6ee
        set_win_text_1008_9664,  // 1018:d6f2
        pass1_1008_372c,         // 1018:d6f6
        unk_win_op_1008_97f2,    // 1018:d6fa
        pass1_1008_373c,         // 1018:d6fe
        pass1_1008_3740,         // 1018:d702
        pass1_1008_3744,         // 1018:d706
        pass1_1008_3748,         // 1018:d70a
        pass1_1008_374c,         // 1018:d70e
        unk_draw_op_1018_c578,   // 1018:d712
        destroy_win_1008_9698,   // 1018:d716
        pass1_1008_3750,         // 1018:d71a
        pass1_1008_3754,         // 1018:d71e
        pass1_1008_9c60,         // 1018:d722
        pass1_1008_3758,         // 1018:d726
        0,                       // FUN_1008_6324, // 1018:d72a
        pass1_1008_9c4e,         // 1018:d72e
        pass1_1008_3762,         // 1018:d732
        pass1_1008_9c4a,         // 1018:d736
        post_msg_1020_03b2,      // 1018:d73a
        post_msg_1020_03d6,      // 1018:d73e
        pass1_1008_6a4a,         // 1018:d742
        post_msg_1020_03fa,      // 1018:d746
        pass1_1008_6b02,         // 1018:d74a
        pass1_1008_377a,         // 1018:d74e
        pass1_1008_9c52,         // 1018:d752
        get_stock_obj_1008_9c56, // 1018:d756
        pass1_1008_9c16,         // 1018:d75a
        pass1_1008_9c30,         // 1018:d75e
        pass1_1008_9c86,         // 1018:d762
        pass1_1008_9cc4,         // 1018:d766
        pass1_1008_9ce0,         // 1018:d76a
        pass1_1020_02ae,         // 1018:d76e
        0,                       // FUN_1008_6328, // 1018:d772
        0,                       // FUN_1008_632c, // 1018:d776
        pass1_1018_d3ac,         // 1018:d77a
        pass1_1008_68ea,         // 1018:d77e
        win_1020_0316,           // 1018:d782
        pass1_1020_028c,         // 1018:d786
        send_msg_1008_9640,      // 1018:d78a
        set_win_text_1008_9664,  // 1018:d78e
        pass1_1008_372c,         // 1018:d792
        unk_win_op_1008_97f2,    // 1018:d796
        pass1_1008_373c,         // 1018:d79a
        pass1_1008_3740,         // 1018:d79e
        pass1_1008_3744,         // 1018:d7a2
        pass1_1008_3748,         // 1018:d7a6
        pass1_1008_374c,         // 1018:d7aa
        unk_draw_op_1018_cfc0,   // 1018:d7ae
        destroy_win_1008_9698,   // 1018:d7b2
        pass1_1008_3750,         // 1018:d7b6
        pass1_1008_3754,         // 1018:d7ba
        pass1_1008_9c60,         // 1018:d7be
        pass1_1008_3758,         // 1018:d7c2
        0,                       // FUN_1008_6324, // 1018:d7c6
        pass1_1008_9c4e,         // 1018:d7ca
        pass1_1008_3762,         // 1018:d7ce
        pass1_1008_9c4a,         // 1018:d7d2
        post_msg_1020_03b2,      // 1018:d7d6
        post_msg_1020_03d6,      // 1018:d7da
        pass1_1008_6a4a,         // 1018:d7de
        post_msg_1020_03fa,      // 1018:d7e2
        pass1_1008_6b02,         // 1018:d7e6
        pass1_1008_377a,         // 1018:d7ea
        pass1_1008_9c52,         // 1018:d7ee
        get_stock_obj_1008_9c56, // 1018:d7f2
        pass1_1008_9c16,         // 1018:d7f6
        pass1_1008_9c30,         // 1018:d7fa
        pass1_1008_9c86,         // 1018:d7fe
        pass1_1008_9cc4,         // 1018:d802
        pass1_1008_9ce0,         // 1018:d806
        pass1_1020_02ae,         // 1018:d80a
        0,                       // FUN_1008_6328, // 1018:d80e
        0,                       // FUN_1008_632c, // 1018:d812
        pass1_1018_d2ee,         // 1018:d816
        pass1_1008_68ea,         // 1018:d81a
        win_1020_0316,           // 1018:d81e
        pass1_1020_028c,         // 1018:d822
        send_msg_1008_9640,      // 1018:d826
        set_win_text_1008_9664,  // 1018:d82a
        pass1_1008_372c,         // 1018:d82e
        unk_win_op_1008_97f2,    // 1018:d832
        pass1_1008_373c,         // 1018:d836
        pass1_1008_3740,         // 1018:d83a
        pass1_1008_3744,         // 1018:d83e
        pass1_1008_3748,         // 1018:d842
        pass1_1008_374c,         // 1018:d846
        unk_draw_op_1018_c578,   // 1018:d84a
        destroy_win_1008_9698,   // 1018:d84e
        pass1_1008_3750,         // 1018:d852
        pass1_1008_3754,         // 1018:d856
        pass1_1008_9c60,         // 1018:d85a
        pass1_1008_3758,         // 1018:d85e
        0,                       // FUN_1008_6324, // 1018:d862
        pass1_1008_9c4e,         // 1018:d866
        pass1_1008_3762,         // 1018:d86a
        pass1_1008_9c4a,         // 1018:d86e
        post_msg_1020_03b2,      // 1018:d872
        post_msg_1020_03d6,      // 1018:d876
        pass1_1008_6a4a,         // 1018:d87a
        post_msg_1020_03fa,      // 1018:d87e
        pass1_1008_6b02,         // 1018:d882
        pass1_1008_377a,         // 1018:d886
        pass1_1008_9c52,         // 1018:d88a
        get_stock_obj_1008_9c56, // 1018:d88e
        pass1_1008_9c16,         // 1018:d892
        pass1_1008_9c30,         // 1018:d896
        pass1_1008_9c86,         // 1018:d89a
        pass1_1008_9cc4,         // 1018:d89e
        pass1_1008_9ce0,         // 1018:d8a2
        pass1_1020_02ae,         // 1018:d8a6
        0,                       // FUN_1008_6328, // 1018:d8aa
        0,                       // FUN_1008_632c, // 1018:d8ae
        pass1_1018_d230,         // 1018:d8b2
        pass1_1008_68ea,         // 1018:d8b6
        win_1020_0316,           // 1018:d8ba
        pass1_1020_028c,         // 1018:d8be
        send_msg_1008_9640,      // 1018:d8c2
        set_win_text_1008_9664,  // 1018:d8c6
        pass1_1008_372c,         // 1018:d8ca
        unk_win_op_1008_97f2,    // 1018:d8ce
        pass1_1008_373c,         // 1018:d8d2
        pass1_1008_3740,         // 1018:d8d6
        pass1_1008_3744,         // 1018:d8da
        pass1_1008_3748,         // 1018:d8de
        pass1_1008_374c,         // 1018:d8e2
        unk_draw_op_1018_c578,   // 1018:d8e6
        destroy_win_1008_9698,   // 1018:d8ea
        pass1_1008_3750,         // 1018:d8ee
        pass1_1008_3754,         // 1018:d8f2
        pass1_1008_9c60,         // 1018:d8f6
        pass1_1008_3758,         // 1018:d8fa
        0,                       // FUN_1008_6324, // 1018:d8fe
        pass1_1008_9c4e,         // 1018:d902
        pass1_1008_3762,         // 1018:d906
        pass1_1008_9c4a,         // 1018:d90a
        post_msg_1020_03b2,      // 1018:d90e
        post_msg_1020_03d6,      // 1018:d912
        pass1_1008_6a4a,         // 1018:d916
        post_msg_1020_03fa,      // 1018:d91a
        pass1_1008_6b02,         // 1018:d91e
        pass1_1008_377a,         // 1018:d922
        pass1_1008_9c52,         // 1018:d926
        get_stock_obj_1008_9c56, // 1018:d92a
        pass1_1008_9c16,         // 1018:d92e
        pass1_1008_9c30,         // 1018:d932
        pass1_1008_9c86,         // 1018:d936
        pass1_1008_9cc4,         // 1018:d93a
        pass1_1008_9ce0,         // 1018:d93e
        pass1_1020_02ae,         // 1018:d942
        0,                       // FUN_1008_6328, // 1018:d946
        0,                       // FUN_1008_632c, // 1018:d94a
        pass1_1018_d360,         // 1018:d94e
        pass1_1008_68ea,         // 1018:d952
        win_1020_0316,           // 1018:d956
        pass1_1020_028c,         // 1018:d95a
        send_msg_1008_9640,      // 1018:d95e
        set_win_text_1008_9664,  // 1018:d962
        pass1_1008_372c,         // 1018:d966
        unk_win_op_1008_97f2,    // 1018:d96a
        pass1_1008_373c,         // 1018:d96e
        pass1_1008_3740,         // 1018:d972
        pass1_1008_3744,         // 1018:d976
        pass1_1008_3748,         // 1018:d97a
        pass1_1008_374c,         // 1018:d97e
        unk_draw_op_1018_c578,   // 1018:d982
        destroy_win_1008_9698,   // 1018:d986
        pass1_1008_3750,         // 1018:d98a
        pass1_1008_3754,         // 1018:d98e
        pass1_1008_9c60,         // 1018:d992
        pass1_1008_3758,         // 1018:d996
        0,                       // FUN_1008_6324, // 1018:d99a
        pass1_1008_9c4e,         // 1018:d99e
        pass1_1008_3762,         // 1018:d9a2
        pass1_1008_9c4a,         // 1018:d9a6
        post_msg_1020_03b2,      // 1018:d9aa
        post_msg_1020_03d6,      // 1018:d9ae
        pass1_1008_6a4a,         // 1018:d9b2
        post_msg_1020_03fa,      // 1018:d9b6
        pass1_1008_6b02,         // 1018:d9ba
        pass1_1008_377a,         // 1018:d9be
        pass1_1008_9c52,         // 1018:d9c2
        get_stock_obj_1008_9c56, // 1018:d9c6
        pass1_1008_9c16,         // 1018:d9ca
        pass1_1008_9c30,         // 1018:d9ce
        pass1_1008_9c86,         // 1018:d9d2
        pass1_1008_9cc4,         // 1018:d9d6
        pass1_1008_9ce0,         // 1018:d9da
        pass1_1020_02ae,         // 1018:d9de
        0,                       // FUN_1008_6328, // 1018:d9e2
        0,                       // FUN_1008_632c, // 1018:d9e6
        pass1_1018_d2a2,         // 1018:d9ea
        pass1_1008_68ea,         // 1018:d9ee
        win_1020_0316,           // 1018:d9f2
        pass1_1020_028c,         // 1018:d9f6
        send_msg_1008_9640,      // 1018:d9fa
        set_win_text_1008_9664,  // 1018:d9fe
        pass1_1008_372c,         // 1018:da02
        unk_win_op_1008_97f2,    // 1018:da06
        pass1_1008_373c,         // 1018:da0a
        pass1_1008_3740,         // 1018:da0e
        pass1_1008_3744,         // 1018:da12
        pass1_1008_3748,         // 1018:da16
        pass1_1008_374c,         // 1018:da1a
        unk_draw_op_1018_c578,   // 1018:da1e
        destroy_win_1008_9698,   // 1018:da22
        pass1_1008_3750,         // 1018:da26
        pass1_1008_3754,         // 1018:da2a
        pass1_1008_9c60,         // 1018:da2e
        pass1_1008_3758,         // 1018:da32
        0,                       // FUN_1008_6324, // 1018:da36
        pass1_1008_9c4e,         // 1018:da3a
        pass1_1008_3762,         // 1018:da3e
        pass1_1008_9c4a,         // 1018:da42
        post_msg_1020_03b2,      // 1018:da46
        post_msg_1020_03d6,      // 1018:da4a
        pass1_1008_6a4a,         // 1018:da4e
        post_msg_1020_03fa,      // 1018:da52
        pass1_1008_6b02,         // 1018:da56
        pass1_1008_377a,         // 1018:da5a
        pass1_1008_9c52,         // 1018:da5e
        get_stock_obj_1008_9c56, // 1018:da62
        pass1_1008_9c16,         // 1018:da66
        pass1_1008_9c30,         // 1018:da6a
        pass1_1008_9c86,         // 1018:da6e
        pass1_1008_9cc4,         // 1018:da72
        pass1_1008_9ce0,         // 1018:da76
        pass1_1020_02ae,         // 1018:da7a
        0,                       // FUN_1008_6328, // 1018:da7e
        0,                       // FUN_1008_632c, // 1018:da82
        pass1_1018_d1e4,         // 1018:da86
        pass1_1008_68ea,         // 1018:da8a
        win_1020_0316,           // 1018:da8e
        pass1_1020_028c,         // 1018:da92
        send_msg_1008_9640,      // 1018:da96
        set_win_text_1008_9664,  // 1018:da9a
        pass1_1008_372c,         // 1018:da9e
        unk_win_op_1008_97f2,    // 1018:daa2
        pass1_1008_373c,         // 1018:daa6
        pass1_1008_3740,         // 1018:daaa
        pass1_1008_3744,         // 1018:daae
        pass1_1008_3748,         // 1018:dab2
        pass1_1008_374c,         // 1018:dab6
        unk_draw_op_1018_c578,   // 1018:daba
        destroy_win_1008_9698,   // 1018:dabe
        pass1_1008_3750,         // 1018:dac2
        pass1_1008_3754,         // 1018:dac6
        pass1_1008_9c60,         // 1018:daca
        pass1_1008_3758,         // 1018:dace
        0,                       // FUN_1008_6324, // 1018:dad2
        pass1_1008_9c4e,         // 1018:dad6
        pass1_1008_3762,         // 1018:dada
        pass1_1008_9c4a,         // 1018:dade
        post_msg_1020_03b2,      // 1018:dae2
        post_msg_1020_03d6,      // 1018:dae6
        pass1_1008_6a4a,         // 1018:daea
        post_msg_1020_03fa,      // 1018:daee
        pass1_1008_6b02,         // 1018:daf2
        pass1_1008_377a,         // 1018:daf6
        pass1_1008_9c52,         // 1018:dafa
        get_stock_obj_1008_9c56, // 1018:dafe
        pass1_1008_9c16,         // 1018:db02
        pass1_1008_9c30,         // 1018:db06
        pass1_1008_9c86,         // 1018:db0a
        pass1_1008_9cc4,         // 1018:db0e
        pass1_1008_9ce0,         // 1018:db12
        pass1_1020_02ae,         // 1018:db16
        0,                       // FUN_1008_6328, // 1018:db1a
        0,                       // FUN_1008_632c, // 1018:db1e
        pass1_1018_d314,         // 1018:db22
        pass1_1008_68ea,         // 1018:db26
        win_1020_0316,           // 1018:db2a
        pass1_1020_028c,         // 1018:db2e
        send_msg_1008_9640,      // 1018:db32
        set_win_text_1008_9664,  // 1018:db36
        pass1_1008_372c,         // 1018:db3a
        unk_win_op_1008_97f2,    // 1018:db3e
        pass1_1008_373c,         // 1018:db42
        pass1_1008_3740,         // 1018:db46
        pass1_1008_3744,         // 1018:db4a
        pass1_1008_3748,         // 1018:db4e
        pass1_1008_374c,         // 1018:db52
        unk_draw_op_1018_c578,   // 1018:db56
        destroy_win_1008_9698,   // 1018:db5a
        pass1_1008_3750,         // 1018:db5e
        pass1_1008_3754,         // 1018:db62
        pass1_1008_9c60,         // 1018:db66
        pass1_1008_3758,         // 1018:db6a
        0,                       // FUN_1008_6324, // 1018:db6e
        pass1_1008_9c4e,         // 1018:db72
        pass1_1008_3762,         // 1018:db76
        pass1_1008_9c4a,         // 1018:db7a
        post_msg_1020_03b2,      // 1018:db7e
        post_msg_1020_03d6,      // 1018:db82
        pass1_1008_6a4a,         // 1018:db86
        post_msg_1020_03fa,      // 1018:db8a
        pass1_1008_6b02,         // 1018:db8e
        pass1_1008_377a,         // 1018:db92
        pass1_1008_9c52,         // 1018:db96
        get_stock_obj_1008_9c56, // 1018:db9a
        pass1_1008_9c16,         // 1018:db9e
        pass1_1008_9c30,         // 1018:dba2
        pass1_1008_9c86,         // 1018:dba6
        pass1_1008_9cc4,         // 1018:dbaa
        pass1_1008_9ce0,         // 1018:dbae
        pass1_1020_02ae,         // 1018:dbb2
        0,                       // FUN_1008_6328, // 1018:dbb6
        0,                       // FUN_1008_632c, // 1018:dbba
        pass1_1018_d256,         // 1018:dbbe
        pass1_1008_68ea,         // 1018:dbc2
        win_1020_0316,           // 1018:dbc6
        pass1_1020_028c,         // 1018:dbca
        send_msg_1008_9640,      // 1018:dbce
        set_win_text_1008_9664,  // 1018:dbd2
        pass1_1008_372c,         // 1018:dbd6
        unk_win_op_1008_97f2,    // 1018:dbda
        pass1_1008_373c,         // 1018:dbde
        pass1_1008_3740,         // 1018:dbe2
        pass1_1008_3744,         // 1018:dbe6
        pass1_1008_3748,         // 1018:dbea
        pass1_1008_374c,         // 1018:dbee
        unk_draw_op_1018_c578,   // 1018:dbf2
        destroy_win_1008_9698,   // 1018:dbf6
        pass1_1008_3750,         // 1018:dbfa
        pass1_1008_3754,         // 1018:dbfe
        pass1_1008_9c60,         // 1018:dc02
        pass1_1008_3758,         // 1018:dc06
        0,                       // FUN_1008_6324, // 1018:dc0a
        pass1_1008_9c4e,         // 1018:dc0e
        pass1_1008_3762,         // 1018:dc12
        pass1_1008_9c4a,         // 1018:dc16
        post_msg_1020_03b2,      // 1018:dc1a
        post_msg_1020_03d6,      // 1018:dc1e
        pass1_1008_6a4a,         // 1018:dc22
        post_msg_1020_03fa,      // 1018:dc26
        pass1_1008_6b02,         // 1018:dc2a
        pass1_1008_377a,         // 1018:dc2e
        pass1_1008_9c52,         // 1018:dc32
        get_stock_obj_1008_9c56, // 1018:dc36
        pass1_1008_9c16,         // 1018:dc3a
        pass1_1008_9c30,         // 1018:dc3e
        pass1_1008_9c86,         // 1018:dc42
        pass1_1008_9cc4,         // 1018:dc46
        pass1_1008_9ce0,         // 1018:dc4a
        pass1_1020_02ae,         // 1018:dc4e
        0,                       // FUN_1008_6328, // 1018:dc52
        0,                       // FUN_1008_632c, // 1018:dc56
        pass1_1018_d198,         // 1018:dc5a
        pass1_1008_68ea,         // 1018:dc5e
        win_1020_0316,           // 1018:dc62
        pass1_1020_028c,         // 1018:dc66
        send_msg_1008_9640,      // 1018:dc6a
        set_win_text_1008_9664,  // 1018:dc6e
        pass1_1008_372c,         // 1018:dc72
        unk_win_op_1008_97f2,    // 1018:dc76
        pass1_1008_373c,         // 1018:dc7a
        pass1_1008_3740,         // 1018:dc7e
        pass1_1008_3744,         // 1018:dc82
        pass1_1008_3748,         // 1018:dc86
        pass1_1008_374c,         // 1018:dc8a
        unk_draw_op_1018_c578,   // 1018:dc8e
        destroy_win_1008_9698,   // 1018:dc92
        pass1_1008_3750,         // 1018:dc96
        pass1_1008_3754,         // 1018:dc9a
        pass1_1008_9c60,         // 1018:dc9e
        pass1_1008_3758,         // 1018:dca2
        0,                       // FUN_1008_6324, // 1018:dca6
        pass1_1008_9c4e,         // 1018:dcaa
        pass1_1008_3762,         // 1018:dcae
        pass1_1008_9c4a,         // 1018:dcb2
        post_msg_1020_03b2,      // 1018:dcb6
        post_msg_1020_03d6,      // 1018:dcba
        pass1_1008_6a4a,         // 1018:dcbe
        post_msg_1020_03fa,      // 1018:dcc2
        pass1_1008_6b02,         // 1018:dcc6
        pass1_1008_377a,         // 1018:dcca
        pass1_1008_9c52,         // 1018:dcce
        get_stock_obj_1008_9c56, // 1018:dcd2
        pass1_1008_9c16,         // 1018:dcd6
        pass1_1008_9c30,         // 1018:dcda
        pass1_1008_9c86,         // 1018:dcde
        pass1_1008_9cc4,         // 1018:dce2
        pass1_1008_9ce0,         // 1018:dce6
        pass1_1020_02ae,         // 1018:dcea
        0,                       // FUN_1008_6328, // 1018:dcee
        0,                       // FUN_1008_632c, // 1018:dcf2
};

void *addr_table_1018_df3c[] = {
        pass1_1018_df10, // 1018:df3c
};

// - 1018:e228 -> pass1_1018_e1ee
void *addr_table_1018_e228[] = {
        pass1_1018_e1ee, // 1018:e228
        pass1_1008_3a10, // 1018:e22c
};

void *addr_table_1018_e44e[] = {
        // - 1018:e44e -> pass1_1018_e428
        // - 1018:e4ea -> pass1_1018_e41a
        0,                           // FUN_1018_e428, // 1018:e44e
        pass1_1008_68ea,             // 1018:e452
        window_op_1018_e384,         // 1018:e456
        pass1_1008_68c6,             // 1018:e45a
        send_msg_1008_9640,          // 1018:e45e
        set_win_text_1008_9664,      // 1018:e462
        pass1_1008_372c,             // 1018:e466
        unk_win_op_1008_97f2,        // 1018:e46a
        pass1_1008_373c,             // 1018:e46e
        pass1_1008_3740,             // 1018:e472
        pass1_1008_3744,             // 1018:e476
        pass1_1008_3748,             // 1018:e47a
        pass1_1008_374c,             // 1018:e47e
        pass1_1018_e2cc,             // 1018:e482
        destroy_win_1008_9698,       // 1018:e486
        destroy_window_1020_8250,    // 1018:e48a
        pass1_1008_3754,             // 1018:e48e
        pass1_1008_9c60,             // 1018:e492
        pass1_1008_3758,             // 1018:e496
        0,                           // FUN_1008_6324, // 1018:e49a
        pass1_1008_9c4e,             // 1018:e49e
        pass1_1008_3762,             // 1018:e4a2
        pass1_1008_9c4a,             // 1018:e4a6
        pass1_1008_3766,             // 1018:e4aa
        pass1_1020_8106,             // 1018:e4ae
        pass1_1008_6a4a,             // 1018:e4b2
        pass1_1008_6b2e,             // 1018:e4b6
        pass1_1008_6b02,             // 1018:e4ba
        pass1_1008_377a,             // 1018:e4be
        pass1_1008_9c52,             // 1018:e4c2
        get_stock_obj_1008_9c56,     // 1018:e4c6
        pass1_1008_9c16,             // 1018:e4ca
        pass1_1008_9c30,             // 1018:e4ce
        pass1_1008_9c86,             // 1018:e4d2
        pass1_1008_9cc4,             // 1018:e4d6
        win_ui_palette_op_1020_81c0, // 1018:e4da
        pass1_1018_e3e8,             // 1018:e4de
        0,                           // FUN_1008_6328, // 1018:e4e2
        realize_palette_1020_8128,   // 1018:e4e6
        pass1_1018_e41a,             // 1018:e4ea
        pass1_1008_3a10,             // 1018:e4ee
};

void *addr_table_1018_e5d0[] = {
        pass1_1018_e5aa,       // 1018:e5d0
        pass1_1008_3a10,       // 1018:e5d4
        mix_draw_op_1020_9312, // 1018:e5d8
};

void *addr_table_1018_e790[] = {
        0,                           // FUN_1018_e76a, // 1018:e790
        pass1_1008_68ea,             // 1018:e794
        window_op_1018_e6c6,         // 1018:e798
        pass1_1008_68c6,             // 1018:e79c
        send_msg_1008_9640,          // 1018:e7a0
        set_win_text_1008_9664,      // 1018:e7a4
        pass1_1008_372c,             // 1018:e7a8
        unk_win_op_1008_97f2,        // 1018:e7ac
        pass1_1008_373c,             // 1018:e7b0
        pass1_1008_3740,             // 1018:e7b4
        pass1_1008_3744,             // 1018:e7b8
        pass1_1008_3748,             // 1018:e7bc
        pass1_1008_374c,             // 1018:e7c0
        pass1_1018_e678,             // 1018:e7c4
        destroy_win_1008_9698,       // 1018:e7c8
        destroy_window_1020_8250,    // 1018:e7cc
        pass1_1008_3754,             // 1018:e7d0
        pass1_1008_9c60,             // 1018:e7d4
        pass1_1008_3758,             // 1018:e7d8
        0,                           // FUN_1008_6324, // 1018:e7dc
        pass1_1008_9c4e,             // 1018:e7e0
        pass1_1008_3762,             // 1018:e7e4
        pass1_1008_9c4a,             // 1018:e7e8
        pass1_1008_3766,             // 1018:e7ec
        pass1_1020_8106,             // 1018:e7f0
        pass1_1008_6a4a,             // 1018:e7f4
        pass1_1008_6b2e,             // 1018:e7f8
        pass1_1008_6b02,             // 1018:e7fc
        pass1_1008_377a,             // 1018:e800
        pass1_1008_9c52,             // 1018:e804
        get_stock_obj_1008_9c56,     // 1018:e808
        pass1_1008_9c16,             // 1018:e80c
        pass1_1008_9c30,             // 1018:e810
        pass1_1008_9c86,             // 1018:e814
        pass1_1008_9cc4,             // 1018:e818
        win_ui_palette_op_1020_81c0, // 1018:e81c
        pass1_1018_e72a,             // 1018:e820
        0,                           // FUN_1008_6328, // 1018:e824
        realize_palette_1020_8128,   // 1018:e828
        pass1_1018_e75c,             // 1018:e82c
        pass1_1008_3a10,             // 1018:e830
};

//- 1018:e912 -> pass1_1018_e8ec
void *addr_table_1018_e912[] = {
        pass1_1018_e8ec,       // 1018:e912
        pass1_1008_3a10,       // 1018:e916
        mix_draw_op_1020_9312, // 1018:e91a
};

void *addr_table_1018_ebd0[] = {
        0,                           // FUN_1018_ebaa, // 1018:ebd0
        pass1_1008_68ea,             // 1018:ebd4
        window_op_1018_eada,         // 1018:ebd8
        pass1_1008_68c6,             // 1018:ebdc
        send_msg_1008_9640,          // 1018:ebe0
        set_win_text_1008_9664,      // 1018:ebe4
        pass1_1008_372c,             // 1018:ebe8
        unk_win_op_1008_97f2,        // 1018:ebec
        pass1_1008_373c,             // 1018:ebf0
        pass1_1008_3740,             // 1018:ebf4
        pass1_1008_3744,             // 1018:ebf8
        pass1_1008_3748,             // 1018:ebfc
        pass1_1008_374c,             // 1018:ec00
        pass1_1018_ea66,             // 1018:ec04
        destroy_win_1008_9698,       // 1018:ec08
        destroy_window_1020_8250,    // 1018:ec0c
        post_win_msg_1018_ea0a,      // 1018:ec10
        pass1_1008_9c60,             // 1018:ec14
        pass1_1008_3758,             // 1018:ec18
        0,                           // FUN_1008_6324, // 1018:ec1c
        pass1_1008_9c4e,             // 1018:ec20
        pass1_1008_3762,             // 1018:ec24
        pass1_1008_9c4a,             // 1018:ec28
        pass1_1008_3766,             // 1018:ec2c
        pass1_1020_8106,             // 1018:ec30
        pass1_1008_6a4a,             // 1018:ec34
        pass1_1008_6b2e,             // 1018:ec38
        pass1_1008_6b02,             // 1018:ec3c
        pass1_1008_377a,             // 1018:ec40
        pass1_1008_9c52,             // 1018:ec44
        get_stock_obj_1008_9c56,     // 1018:ec48
        pass1_1008_9c16,             // 1018:ec4c
        pass1_1008_9c30,             // 1018:ec50
        pass1_1008_9c86,             // 1018:ec54
        pass1_1008_9cc4,             // 1018:ec58
        win_ui_palette_op_1020_81c0, // 1018:ec5c
        pass1_1018_eb3e,             // 1018:ec60
        0,                           // FUN_1008_6328, // 1018:ec64
        realize_palette_1020_8128,   // 1018:ec68
        pass1_1018_eb9c,             // 1018:ec6c
        0,                           // FUN_1018_ea2c, // 1018:ec70
};
// - 1018:ec6c -> pass1_1018_eb9c

// ### 1020

void *addr_table_1020_01cc[] = {
        pass1_1020_01a6,           // 1020:01cc
        invalidate_rect_1018_edd8, // 1020:01d0
        unk_draw_op_1020_0000,     // 1020:01d4
};

void *addr_table_1020_045a[] = {
        pass1_1020_0434,         // 1020:045a
        pass1_1008_68ea,         // 1020:045e
        win_1020_0316,           // 1020:0462
        pass1_1020_028c,         // 1020:0466
        send_msg_1008_9640,      // 1020:046a
        set_win_text_1008_9664,  // 1020:046e
        pass1_1008_372c,         // 1020:0472
        unk_win_op_1008_97f2,    // 1020:0476
        pass1_1008_373c,         // 1020:047a
        pass1_1008_3740,         // 1020:047e
        pass1_1008_3744,         // 1020:0482
        pass1_1008_3748,         // 1020:0486
        pass1_1008_374c,         // 1020:048a
        draw_op_1020_041e,       // 1020:048e
        destroy_win_1008_9698,   // 1020:0492
        pass1_1008_3750,         // 1020:0496
        pass1_1008_3754,         // 1020:049a
        pass1_1008_9c60,         // 1020:049e
        pass1_1008_3758,         // 1020:04a2
        0,                       // FUN_1008_6324, // 1020:04a6
        pass1_1008_9c4e,         // 1020:04aa
        pass1_1008_3762,         // 1020:04ae
        pass1_1008_9c4a,         // 1020:04b2
        post_msg_1020_03b2,      // 1020:04b6
        post_msg_1020_03d6,      // 1020:04ba
        pass1_1008_6a4a,         // 1020:04be
        post_msg_1020_03fa,      // 1020:04c2
        pass1_1008_6b02,         // 1020:04c6
        pass1_1008_377a,         // 1020:04ca
        pass1_1008_9c52,         // 1020:04ce
        get_stock_obj_1008_9c56, // 1020:04d2
        pass1_1008_9c16,         // 1020:04d6
        pass1_1008_9c30,         // 1020:04da
        pass1_1008_9c86,         // 1020:04de
        pass1_1008_9cc4,         // 1020:04e2
        pass1_1008_9ce0,         // 1020:04e6
        pass1_1020_02ae,         // 1020:04ea
        0,                       // FUN_1008_6328, // 1020:04ee
        0,                       // FUN_1008_632c, // 1020:04f2
};

void *addr_table_1020_075a[] = {
        pass1_1020_0734,        // 1020:075a
        post_win_msg_1020_061c, // 1020:075e
};

void *addr_table_1020_081a[] = {
        pass1_1020_07f4,         // 1020:081a
        pass1_1008_68ea,         // 1020:081e
        win_1020_0316,           // 1020:0822
        pass1_1020_028c,         // 1020:0826
        send_msg_1008_9640,      // 1020:082a
        set_win_text_1008_9664,  // 1020:082e
        pass1_1008_372c,         // 1020:0832
        unk_win_op_1008_97f2,    // 1020:0836
        pass1_1008_373c,         // 1020:083a
        pass1_1008_3740,         // 1020:083e
        pass1_1008_3744,         // 1020:0842
        pass1_1008_3748,         // 1020:0846
        pass1_1008_374c,         // 1020:084a
        pass1_1020_07aa,         // 1020:084e
        destroy_win_1008_9698,   // 1020:0852
        pass1_1008_3750,         // 1020:0856
        pass1_1008_3754,         // 1020:085a
        pass1_1008_9c60,         // 1020:085e
        pass1_1008_3758,         // 1020:0862
        0,                       // FUN_1008_6324, // 1020:0866
        pass1_1008_9c4e,         // 1020:086a
        pass1_1008_3762,         // 1020:086e
        pass1_1008_9c4a,         // 1020:0872
        post_msg_1020_03b2,      // 1020:0876
        post_msg_1020_03d6,      // 1020:087a
        pass1_1008_6a4a,         // 1020:087e
        post_msg_1020_03fa,      // 1020:0882
        pass1_1008_6b02,         // 1020:0886
        pass1_1008_377a,         // 1020:088a
        pass1_1008_9c52,         // 1020:088e
        get_stock_obj_1008_9c56, // 1020:0892
        pass1_1008_9c16,         // 1020:0896
        pass1_1008_9c30,         // 1020:089a
        pass1_1008_9c86,         // 1020:089e
        pass1_1008_9cc4,         // 1020:08a2
        pass1_1008_9ce0,         // 1020:08a6
        pass1_1020_02ae,         // 1020:08aa
        0,                       // FUN_1008_6328, // 1020:08ae
        0,                       // FUN_1008_632c, // 1020:08b2
};

void *addr_table_1020_0b0e[] = {
        pass1_1020_0ae8,         // 1020:0b0e
        pass1_1008_68ea,         // 1020:0b12
        win_1020_09ba,           // 1020:0b16
        pass1_1008_68c6,         // 1020:0b1a
        send_msg_1008_9640,      // 1020:0b1e
        set_win_text_1008_9664,  // 1020:0b22
        pass1_1008_372c,         // 1020:0b26
        unk_win_op_1008_97f2,    // 1020:0b2a
        pass1_1008_373c,         // 1020:0b2e
        pass1_1008_3740,         // 1020:0b32
        pass1_1008_3744,         // 1020:0b36
        pass1_1008_3748,         // 1020:0b3a
        pass1_1008_374c,         // 1020:0b3e
        pass1_1020_0a52,         // 1020:0b42
        destroy_win_1008_9698,   // 1020:0b46
        pass1_1008_3750,         // 1020:0b4a
        pass1_1020_0abc,         // 1020:0b4e
        pass1_1008_9c60,         // 1020:0b52
        pass1_1008_3758,         // 1020:0b56
        0,                       // FUN_1008_6324, // 1020:0b5a
        pass1_1008_9c4e,         // 1020:0b5e
        pass1_1008_3762,         // 1020:0b62
        pass1_1008_9c4a,         // 1020:0b66
        pass1_1008_3766,         // 1020:0b6a
        0,                       // FUN_1008_376a, // 1020:0b6e
        pass1_1008_6a4a,         // 1020:0b72
        pass1_1008_6b2e,         // 1020:0b76
        pass1_1008_6b02,         // 1020:0b7a
        pass1_1008_377a,         // 1020:0b7e
        pass1_1008_9c52,         // 1020:0b82
        get_stock_obj_1008_9c56, // 1020:0b86
        pass1_1008_9c16,         // 1020:0b8a
        pass1_1008_9c30,         // 1020:0b8e
        pass1_1008_9c86,         // 1020:0b92
        pass1_1008_9cc4,         // 1020:0b96
        pass1_1020_0aa6,         // 1020:0b9a
        pass1_1020_0a0c,         // 1020:0b9e
        0,                       // FUN_1008_6328, // 1020:0ba2
        0,                       // FUN_1008_632c, // 1020:0ba6
};

void *addr_table_1020_0dbc[] = {
        pass1_1020_0d82, // 1020:0dbc
        pass1_1008_3a10, // 1020:0dc0
};

void *addr_table_1020_1384[] = {
        pass1_1020_135e,           // 1020:1384
        pass1_1008_68ea,           // 1020:1388
        window_op_1020_10a0,       // 1020:138c
        pass1_1008_68c6,           // 1020:1390
        send_msg_1008_9640,        // 1020:1394
        string_1020_79b4,          // 1020:1398
        pass1_1008_372c,           // 1020:139c
        unk_win_op_1008_97f2,      // 1020:13a0
        pass1_1008_373c,           // 1020:13a4
        pass1_1008_3740,           // 1020:13a8
        pass1_1008_3744,           // 1020:13ac
        pass1_1008_3748,           // 1020:13b0
        pass1_1008_374c,           // 1020:13b4
        pass1_1020_1022,           // 1020:13b8
        destroy_win_1008_9698,     // 1020:13bc
        pass1_1020_0e2c,           // 1020:13c0
        win_help_op_1020_0ec4,     // 1020:13c4
        pass1_1008_9c60,           // 1020:13c8
        pass1_1020_79ae,           // 1020:13cc
        enable_menu_1020_1000,     // 1020:13d0
        pass1_1008_9c4e,           // 1020:13d4
        pass1_1008_3762,           // 1020:13d8
        pass1_1008_9c4a,           // 1020:13dc
        pass1_1020_0e8e,           // 1020:13e0
        win_ui_menu_op_1020_7ad2,  // 1020:13e4
        pass1_1008_6a4a,           // 1020:13e8
        pass1_1008_6b2e,           // 1020:13ec
        pass1_1008_6b02,           // 1020:13f0
        pass1_1008_377a,           // 1020:13f4
        pass1_1008_9c52,           // 1020:13f8
        get_stock_obj_1008_9c56,   // 1020:13fc
        pass1_1020_79e4,           // 1020:1400
        post_win_msg_1020_79fc,    // 1020:1404
        pass1_1008_9c86,           // 1020:1408
        pass1_1008_9cc4,           // 1020:140c
        pass1_1008_9ce0,           // 1020:1410
        realize_palette_1020_0e46, // 1020:1414
};

void *addr_table_1020_1730[] = {
        pass1_1020_170a,           // 1020:1730
        invalidate_rect_1020_157c, // 1020:1734
};

void *addr_table_1020_1e7a[] = {
        pass1_1020_1e54,             // 1020:1e7a
        pass1_1008_3a10,             // 1020:1e7e
        mixed_ui_op_1020_179c,       // 1020:1e82
        pass1_1040_79c0,             // 1020:1e86
        post_win_msg_1040_7b3c,      // 1020:1e8a
        destroy_window_1020_1d4a,    // 1020:1e8e
        post_win_msg_1040_7f56,      // 1020:1e92
        draw_op_1040_7bb2,           // 1020:1e96
        post_win_msg_1040_7f1c,      // 1020:1e9a
        pass1_1020_1780,             // 1020:1e9e
        menu_ui_op_1040_7f86,        // 1020:1ea2
        win_help_1040_800c,          // 1020:1ea6
        pass1_1040_8054,             // 1020:1eaa
        set_text_bk_color_1040_7e5e, // 1020:1eae
        unk_win_ui_op_1040_8158,     // 1020:1eb2
        check_dialog_msg_1040_81b6,  // 1020:1eb6
        set_sys_modal_window_1040_81fe,         // 1020:1eba
        enable_window_1020_1bd4,     // 1020:1ebe
        pass1_1040_824a,             // 1020:1ec2
        0,                           // FUN_1040_8266, // 1020:1ec6
        pass1_1040_78de,             // 1020:1eca
        0,                           // FUN_1018_60ee, // 1020:1ece
        0,                           // FUN_1018_60f4, // 1020:1ed2
        0,                           // FUN_1018_60fa, // 1020:1ed6
        pass1_1020_1bb6,             // 1020:1eda
        0,                           // FUN_1018_60fe, // 1020:1ede
        pass1_1040_807e,             // 1020:1ee2
        pass1_1020_1b68,             // 1020:1ee6
};

void *addr_table_1020_2518[] = {
        pass1_1020_24f2,           // 1020:2518
        invalidate_rect_1020_1fb2, // 1020:251c
        unk_draw_op_1020_2020,     // 1020:2520
};


void *addr_table_1020_270c[] = {
        0,                           // FUN_1020_26e6, // 1020:270c
        pass1_1008_68ea,             // 1020:2710
        window_op_1020_2642,         // 1020:2714
        pass1_1008_68c6,             // 1020:2718
        send_msg_1008_9640,          // 1020:271c
        set_win_text_1008_9664,      // 1020:2720
        pass1_1008_372c,             // 1020:2724
        unk_win_op_1008_97f2,        // 1020:2728
        pass1_1008_373c,             // 1020:272c
        pass1_1008_3740,             // 1020:2730
        pass1_1008_3744,             // 1020:2734
        pass1_1008_3748,             // 1020:2738
        pass1_1008_374c,             // 1020:273c
        pass1_1020_25c0,             // 1020:2740
        destroy_win_1008_9698,       // 1020:2744
        destroy_window_1020_8250,    // 1020:2748
        pass1_1008_3754,             // 1020:274c
        pass1_1008_9c60,             // 1020:2750
        pass1_1008_3758,             // 1020:2754
        0,                           // FUN_1008_6324, // 1020:2758
        pass1_1008_9c4e,             // 1020:275c
        pass1_1008_3762,             // 1020:2760
        pass1_1008_9c4a,             // 1020:2764
        pass1_1008_3766,             // 1020:2768
        pass1_1020_8106,             // 1020:276c
        pass1_1008_6a4a,             // 1020:2770
        pass1_1008_6b2e,             // 1020:2774
        pass1_1008_6b02,             // 1020:2778
        pass1_1008_377a,             // 1020:277c
        pass1_1008_9c52,             // 1020:2780
        get_stock_obj_1008_9c56,     // 1020:2784
        pass1_1008_9c16,             // 1020:2788
        pass1_1008_9c30,             // 1020:278c
        pass1_1008_9c86,             // 1020:2790
        pass1_1008_9cc4,             // 1020:2794
        win_ui_palette_op_1020_81c0, // 1020:2798
        pass1_1020_26a6,             // 1020:279c
        0,                           // FUN_1008_6328, // 1020:27a0
        realize_palette_1020_8128,   // 1020:27a4
        pass1_1020_26d8,             // 1020:27a8
        pass1_1008_3a10,             // 1020:27ac
};

void *addr_table_1020_288e[] = {
        pass1_1020_2868,       // 1020:288e
        pass1_1008_3a10,       // 1020:2892
        mix_draw_op_1020_9312, // 1020:2896
};

//- 1020:2e4a -> pass1_1020_2e24
void *addr_table_1020_2e4a[] = {
        pass1_1020_2e24,               // 1020:2e4a
        pass1_1008_68ea,               // 1020:2e4e
        win_ui_op_1020_2cf0,           // 1020:2e52
        pass1_1020_2a46,               // 1020:2e56
        send_msg_1008_9640,            // 1020:2e5a
        string_1020_79b4,              // 1020:2e5e
        pass1_1008_372c,               // 1020:2e62
        unk_win_op_1008_97f2,          // 1020:2e66
        pass1_1008_373c,               // 1020:2e6a
        pass1_1008_3740,               // 1020:2e6e
        pass1_1008_3744,               // 1020:2e72
        pass1_1008_3748,               // 1020:2e76
        pass1_1008_374c,               // 1020:2e7a
        pass1_1020_2c72,               // 1020:2e7e
        destroy_win_1008_9698,         // 1020:2e82
        pass1_1020_2a6a,               // 1020:2e86
        invalidate_rect_1020_2ae4,     // 1020:2e8a
        pass1_1008_9c60,               // 1020:2e8e
        pass1_1020_2936,               // 1020:2e92
        enable_menu_item_1020_2c2a,    // 1020:2e96
        pass1_1008_9c4e,               // 1020:2e9a
        pass1_1008_3762,               // 1020:2e9e
        pass1_1008_9c4a,               // 1020:2ea2
        bring_window_to_top_1020_2aae, // 1020:2ea6
        win_ui_menu_op_1020_7ad2,      // 1020:2eaa
        pass1_1008_6a4a,               // 1020:2eae
        pass1_1008_6b2e,               // 1020:2eb2
        pass1_1008_6b02,               // 1020:2eb6
        pass1_1008_377a,               // 1020:2eba
        pass1_1008_9c52,               // 1020:2ebe
        get_stock_obj_1008_9c56,       // 1020:2ec2
        pass1_1020_79e4,               // 1020:2ec6
        send_msg_1020_29d8,            // 1020:2eca
        pass1_1008_9c86,               // 1020:2ece
        pass1_1008_9cc4,               // 1020:2ed2
        pass1_1008_9ce0,               // 1020:2ed6
        realize_palette_1020_2992,     // 1020:2eda
};

void *addr_table_1020_363c[] = {
        pass1_1020_3616,           // 1020:363c
        invalidate_rect_1020_3080, // 1020:3640
};

void *addr_table_1020_3d08[] = {
        0,                        // FUN_1020_3cb8, // 1020:3d08
        pass1_1008_68ea,          // 1020:3d0c
        window_op_1020_38aa,      // 1020:3d10
        pass1_1008_68c6,          // 1020:3d14
        send_msg_1008_9640,       // 1020:3d18
        string_1020_79b4,         // 1020:3d1c
        pass1_1008_372c,          // 1020:3d20
        unk_win_op_1008_97f2,     // 1020:3d24
        pass1_1008_373c,          // 1020:3d28
        pass1_1008_3740,          // 1020:3d2c
        pass1_1008_3744,          // 1020:3d30
        pass1_1008_3748,          // 1020:3d34
        pass1_1008_374c,          // 1020:3d38
        pass1_1020_3bd6,          // 1020:3d3c
        destroy_win_1008_9698,    // 1020:3d40
        pass1_1020_3898,          // 1020:3d44
        pass1_1020_3c32,          // 1020:3d48
        pass1_1008_9c60,          // 1020:3d4c
        pass1_1020_79ae,          // 1020:3d50
        pass1_1008_375e,          // 1020:3d54
        pass1_1008_9c4e,          // 1020:3d58
        pass1_1008_3762,          // 1020:3d5c
        pass1_1008_9c4a,          // 1020:3d60
        pass1_1020_3c74,          // 1020:3d64
        win_ui_menu_op_1020_7ad2, // 1020:3d68
        pass1_1008_6a4a,          // 1020:3d6c
        pass1_1008_6b2e,          // 1020:3d70
        pass1_1008_6b02,          // 1020:3d74
        pass1_1008_377a,          // 1020:3d78
        pass1_1008_9c52,          // 1020:3d7c
        get_stock_obj_1008_9c56,  // 1020:3d80
        pass1_1020_79e4,          // 1020:3d84
        post_win_msg_1020_79fc,   // 1020:3d88
        pass1_1008_9c86,          // 1020:3d8c
        pass1_1008_9cc4,          // 1020:3d90
        pass1_1008_9ce0,          // 1020:3d94
        0,                        // FUN_1020_3cb4, // 1020:3d98
        pass1_1020_3ca6,          // 1020:3d9c
        win_ui_op_1020_36f6,      // 1020:3da0
};

// - 1020:408a -> pass1_1020_4064
void *addr_table_1020_408a[] = {
        pass1_1020_4064,         // 1020:408a
        validate_rect_1020_3f12, // 1020:408e
};

void *addr_table_1020_623c[] = {
        0,                           // FUN_1020_6216, // 1020:623c
        pass1_1020_434c,             // 1020:6240
        win_1020_43f6,               // 1020:6244
        pass1_1008_68c6,             // 1020:6248
        send_msg_1008_9640,          // 1020:624c
        set_win_text_1008_9664,      // 1020:6250
        pass1_1008_372c,             // 1020:6254
        unk_win_op_1008_97f2,        // 1020:6258
        pass1_1008_373c,             // 1020:625c
        pass1_1008_3740,             // 1020:6260
        pass1_1008_3744,             // 1020:6264
        pass1_1008_3748,             // 1020:6268
        pass1_1008_374c,             // 1020:626c
        pass1_1020_44b0,             // 1020:6270
        destroy_win_1008_9698,       // 1020:6274
        destroy_window_1020_8250,    // 1020:6278
        win_sys_op_1020_493c,        // 1020:627c
        pass1_1008_9c60,             // 1020:6280
        pass1_1008_3758,             // 1020:6284
        mixed_menu_op_1020_44ec,     // 1020:6288
        pass1_1008_9c4e,             // 1020:628c
        pass1_1008_3762,             // 1020:6290
        pass1_1008_9c4a,             // 1020:6294
        pass1_1020_51c6,             // 1020:6298
        win_ui_cursor_op_1020_522e,  // 1020:629c
        pass1_1008_6a4a,             // 1020:62a0
        pass1_1008_6b2e,             // 1020:62a4
        pass1_1008_6b02,             // 1020:62a8
        pass1_1008_377a,             // 1020:62ac
        pass1_1008_9c52,             // 1020:62b0
        get_stock_obj_1008_9c56,     // 1020:62b4
        pass1_1008_9c16,             // 1020:62b8
        pass1_1008_9c30,             // 1020:62bc
        pass1_1008_9c86,             // 1020:62c0
        pass1_1008_9cc4,             // 1020:62c4
        win_ui_palette_op_1020_81c0, // 1020:62c8
        pass1_1020_52de,             // 1020:62cc
        0,                           // FUN_1008_6328, // 1020:62d0
        realize_palette_1020_8128,   // 1020:62d4
        pass1_1020_6208,             // 1020:62d8
        post_msg_1020_4394,          // 1020:62dc
};

void *addr_table_1020_67c2[] = {
        pass1_1020_679c,       // 1020:67c2
        unk_win_op_1020_65cc,  // 1020:67c6
        mix_draw_op_1020_650c, // 1020:67ca
};

void *addr_table_1020_70e6[] = {
        pass1_1020_70c0,              // 1020:70e6
        pass1_1008_68ea,              // 1020:70ea
        window_op_1020_6c3a,          // 1020:70ee
        pass1_1008_68c6,              // 1020:70f2
        send_msg_1008_9640,           // 1020:70f6
        string_1020_79b4,             // 1020:70fa
        pass1_1008_372c,              // 1020:70fe
        unk_win_op_1008_97f2,         // 1020:7102
        pass1_1008_373c,              // 1020:7106
        pass1_1008_3740,              // 1020:710a
        pass1_1008_3744,              // 1020:710e
        pass1_1008_3748,              // 1020:7112
        pass1_1008_374c,              // 1020:7116
        pass1_1020_6bbc,              // 1020:711a
        destroy_win_1008_9698,        // 1020:711e
        pass1_1020_687c,              // 1020:7122
        unk_destroy_win_op_1020_694c, // 1020:7126
        win_ui_op_1020_6ae6,          // 1020:712a
        pass1_1020_79ae,              // 1020:712e
        enable_menu_item_1020_6b9a,   // 1020:7132
        pass1_1008_9c4e,              // 1020:7136
        pass1_1008_3762,              // 1020:713a
        pass1_1008_9c4a,              // 1020:713e
        pt_in_rect_1020_68fc,         // 1020:7142
        win_ui_menu_op_1020_7ad2,     // 1020:7146
        pass1_1008_6a4a,              // 1020:714a
        pass1_1008_6b2e,              // 1020:714e
        pass1_1008_6b02,              // 1020:7152
        pass1_1008_377a,              // 1020:7156
        pass1_1008_9c52,              // 1020:715a
        draw_op_1020_7070,            // 1020:715e
        pass1_1020_79e4,              // 1020:7162
        post_win_msg_1020_79fc,       // 1020:7166
        pass1_1008_9c86,              // 1020:716a
        pass1_1008_9cc4,              // 1020:716e
        pass1_1008_9ce0,              // 1020:7172
        realize_palette_1020_6896,    // 1020:7176
        pass1_1020_6e52,              // 1020:717a
};

void *addr_table_1020_754c[] = {
        pass1_1020_7526,        // 1020:754c
        post_win_msg_1020_7308, // 1020:7550
};

void *addr_table_1020_7780[] = {
        0,                           // FUN_1020_775a, // 1020:7780
        pass1_1008_68ea,             // 1020:7784
        window_op_1020_76aa,         // 1020:7788
        pass1_1008_68c6,             // 1020:778c
        send_msg_1008_9640,          // 1020:7790
        set_win_text_1008_9664,      // 1020:7794
        pass1_1008_372c,             // 1020:7798
        unk_win_op_1008_97f2,        // 1020:779c
        pass1_1008_373c,             // 1020:77a0
        pass1_1008_3740,             // 1020:77a4
        pass1_1008_3744,             // 1020:77a8
        pass1_1008_3748,             // 1020:77ac
        pass1_1008_374c,             // 1020:77b0
        win_1020_75f0,               // 1020:77b4
        destroy_win_1008_9698,       // 1020:77b8
        destroy_window_1020_8250,    // 1020:77bc
        pass1_1008_3754,             // 1020:77c0
        pass1_1008_9c60,             // 1020:77c4
        pass1_1008_3758,             // 1020:77c8
        0,                           // FUN_1008_6324, // 1020:77cc
        pass1_1008_9c4e,             // 1020:77d0
        pass1_1008_3762,             // 1020:77d4
        pass1_1008_9c4a,             // 1020:77d8
        pass1_1008_3766,             // 1020:77dc
        pass1_1020_8106,             // 1020:77e0
        pass1_1008_6a4a,             // 1020:77e4
        pass1_1008_6b2e,             // 1020:77e8
        pass1_1008_6b02,             // 1020:77ec
        pass1_1008_377a,             // 1020:77f0
        pass1_1008_9c52,             // 1020:77f4
        get_stock_obj_1008_9c56,     // 1020:77f8
        pass1_1008_9c16,             // 1020:77fc
        pass1_1008_9c30,             // 1020:7800
        pass1_1008_9c86,             // 1020:7804
        pass1_1008_9cc4,             // 1020:7808
        win_ui_palette_op_1020_81c0, // 1020:780c
        pass1_1020_770e,             // 1020:7810
        0,                           // FUN_1008_6328, // 1020:7814
        realize_palette_1020_8128,   // 1020:7818
        pass1_1020_774c,             // 1020:781c
        pass1_1008_3a10,             // 1020:7820
};

void *addr_table_1020_7902[] = {
        pass1_1020_78dc,       // 1020:7902
        pass1_1008_3a10,       // 1020:7906
        mix_draw_op_1020_9312, // 1020:790a
};

void *addr_table_1020_7b86[] = {
        pass1_1020_7b60,              // 1020:7b86
        pass1_1008_68ea,              // 1020:7b8a
        create_window_ex_1008_9760,   // 1020:7b8e
        pass1_1008_68c6,              // 1020:7b92
        send_msg_1008_9640,           // 1020:7b96
        string_1020_79b4,             // 1020:7b9a
        pass1_1008_372c,              // 1020:7b9e
        unk_win_op_1008_97f2,         // 1020:7ba2
        pass1_1008_373c,              // 1020:7ba6
        pass1_1008_3740,              // 1020:7baa
        pass1_1008_3744,              // 1020:7bae
        pass1_1008_3748,              // 1020:7bb2
        pass1_1008_374c,              // 1020:7bb6
        begin_end_paint_1008_97c8,    // 1020:7bba
        destroy_win_1008_9698,        // 1020:7bbe
        get_win_ui_info_op_1020_7a50, // 1020:7bc2
        pass1_1008_3754,              // 1020:7bc6
        pass1_1008_9c60,              // 1020:7bca
        pass1_1020_79ae,              // 1020:7bce
        pass1_1008_375e,              // 1020:7bd2
        pass1_1008_9c4e,              // 1020:7bd6
        pass1_1008_3762,              // 1020:7bda
        pass1_1008_9c4a,              // 1020:7bde
        pass1_1008_3766,              // 1020:7be2
        win_ui_menu_op_1020_7ad2,     // 1020:7be6
        pass1_1008_6a4a,              // 1020:7bea
        pass1_1008_6b2e,              // 1020:7bee
        pass1_1008_6b02,              // 1020:7bf2
        pass1_1008_377a,              // 1020:7bf6
        pass1_1008_9c52,              // 1020:7bfa
        get_stock_obj_1008_9c56,      // 1020:7bfe
        pass1_1020_79e4,              // 1020:7c02
        post_win_msg_1020_79fc,       // 1020:7c06
        pass1_1008_9c86,              // 1020:7c0a
        pass1_1008_9cc4,              // 1020:7c0e
        pass1_1008_9ce0,              // 1020:7c12
        0,                            // FUN_1020_3cb4, // 1020:7c16
};

void *addr_table_1020_7f72[] = {
        pass1_1020_7f38, // 1020:7f72
        pass1_1008_3a10, // 1020:7f76
};

// - 1020:82b6 -> INVALID
void *addr_table_1020_82bc[] = {
        0,                           // FUN_1020_8296, // 1020:82bc
        pass1_1008_68ea,             // 1020:82c0
        create_window_ex_1008_9760,  // 1020:82c4
        pass1_1008_68c6,             // 1020:82c8
        send_msg_1008_9640,          // 1020:82cc
        set_win_text_1008_9664,      // 1020:82d0
        pass1_1008_372c,             // 1020:82d4
        unk_win_op_1008_97f2,        // 1020:82d8
        pass1_1008_373c,             // 1020:82dc
        pass1_1008_3740,             // 1020:82e0
        pass1_1008_3744,             // 1020:82e4
        pass1_1008_3748,             // 1020:82e8
        pass1_1008_374c,             // 1020:82ec
        fill_rect_1008_62c0,         // 1020:82f0
        destroy_win_1008_9698,       // 1020:82f4
        destroy_window_1020_8250,    // 1020:82f8
        pass1_1008_3754,             // 1020:82fc
        pass1_1008_9c60,             // 1020:8300
        pass1_1008_3758,             // 1020:8304
        0,                           // FUN_1008_6324, // 1020:8308
        pass1_1008_9c4e,             // 1020:830c
        pass1_1008_3762,             // 1020:8310
        pass1_1008_9c4a,             // 1020:8314
        pass1_1008_3766,             // 1020:8318
        pass1_1020_8106,             // 1020:831c
        pass1_1008_6a4a,             // 1020:8320
        pass1_1008_6b2e,             // 1020:8324
        pass1_1008_6b02,             // 1020:8328
        pass1_1008_377a,             // 1020:832c
        pass1_1008_9c52,             // 1020:8330
        get_stock_obj_1008_9c56,     // 1020:8334
        pass1_1008_9c16,             // 1020:8338
        pass1_1008_9c30,             // 1020:833c
        pass1_1008_9c86,             // 1020:8340
        pass1_1008_9cc4,             // 1020:8344
        win_ui_palette_op_1020_81c0, // 1020:8348
        destroy_win_1008_628e,       // 1020:834c
        0,                           // FUN_1008_6328, // 1020:8350
        realize_palette_1020_8128,   // 1020:8354
        pass1_1020_8288,             // 1020:8358
        pass1_1008_3a10,             // 1020:835c
};

void *addr_table_1020_8462[] = {
        pass1_1020_843c, // 1020:8462
        0,               // FUN_1020_8438, // 1020:8466
        pass1_1020_83f8, // 1020:846a
        pass1_1020_86d8, // 1020:846e
        pass1_1020_865a, // 1020:8472
        pass1_1020_85f6, // 1020:8476
};

void *addr_table_1020_87aa[] = {
        pass1_1020_8784, // 1020:87aa
        0,               // FUN_1020_8438, // 1020:87ae
        0,               // FUN_1020_8780, // 1020:87b2
        pass1_1020_86d8, // 1020:87b6
        pass1_1020_865a, // 1020:87ba
        pass1_1020_85f6, // 1020:87be
};

void *addr_table_1020_8a84[] = {
        pass1_1020_8a5e, // 1020:8a84
        0,               // FUN_1020_8438, // 1020:8a88
        pass1_1020_8908, // 1020:8a8c
        pass1_1020_86d8, // 1020:8a90
        pass1_1020_865a, // 1020:8a94
        pass1_1020_85f6, // 1020:8a98
};

void *addr_table_1020_8e92[] = {
        pass1_1020_8e6c, // 1020:8e92
        0,               // FUN_1020_8438, // 1020:8e96
        pass1_1020_8bcc, // 1020:8e9a
        pass1_1020_86d8, // 1020:8e9e
        pass1_1020_865a, // 1020:8ea2
        pass1_1020_85f6, // 1020:8ea6
};

void *addr_table_1020_9204[] = {
        pass1_1020_91de,           // 1020:9204
        invalidate_rect_1020_8fb4, // 1020:9208
        pass1_1020_9068,           // 1020:920c
        pass1_1020_86d8,           // 1020:9210
        pass1_1020_865a,           // 1020:9214
        pass1_1020_85f6,           // 1020:9218
};

void *addr_table_1020_96c8[] = {
        pass1_1020_96a2,       // 1020:96c8
        pass1_1008_3a10,       // 1020:96cc
        mix_draw_op_1020_9312, // 1020:96d0
};

void *addr_table_1020_ba36[] = {
        pass1_1020_a644,     // 1020:ba36
        read_file_1020_a65e, // 1020:ba3a
};

void *addr_table_1020_c834[] = {
        pass1_1020_c80e, // 1020:c834
        pass1_1020_c54a, // 1020:c838
        0,               // FUN_1020_c5ae, // 1020:c83c
        0,               // FUN_1020_c5b4, // 1020:c840
        pass1_1020_c538, // 1020:c844
        pass1_1030_1eee, // 1020:c848
        pass1_1030_1f16, // 1020:c84c
        pass1_1020_c694, // 1020:c850
        pass1_1020_c73a, // 1020:c854
        0,               // FUN_1020_c640, // 1020:c858
        pass1_1020_c644, // 1020:c85c
};

void *addr_table_1020_c9e6[] = {
        pass1_1020_c9ba, // 1020:c9e6
};

void *addr_table_1020_cc7c[] = {
        pass1_1020_cc56,         // 1020:cc7c
        pass1_1028_bb56,         // 1020:cc80
        0,                       // FUN_1030_178e, // 1020:cc84
        write_to_file_1028_b5ec, // 1020:cc88
        file_1028_b81a,          // 1020:cc8c
        pass1_1028_bc1c,         // 1020:cc90
        pass1_1020_ca36,         // 1020:cc94
        pass1_1028_09d4,         // 1020:cc98
        pass1_1028_bc7e,         // 1020:cc9c
        pass1_1028_b514,         // 1020:cca0
        pass1_1028_be2a,         // 1020:cca4
        0,                       // FUN_1028_bf16, // 1020:cca8
        0,                       // FUN_1028_bf1a, // 1020:ccac
        0,                       // FUN_1028_bf1e, // 1020:ccb0
        pass1_1020_ca82,         // 1020:ccb4
        pass1_1028_bf22,         // 1020:ccb8
        pass1_1028_bbf0,         // 1020:ccbc
        pass1_1028_bc02,         // 1020:ccc0
        pass1_1028_b5a8,         // 1020:ccc4
        pass1_1028_b5ca,         // 1020:ccc8
        0,                       // FUN_1028_b4e6, // 1020:cccc
        0,                       // FUN_1028_b4ec, // 1020:ccd0
        pass1_1028_b46e,         // 1020:ccd4
        pass1_1028_c64a,         // 1020:ccd8
        pass1_1028_c522,         // 1020:ccdc
        pass1_1028_ced2,         // 1020:cce0
};

void *addr_table_1020_cd7e[] = {
        pass1_1020_cd58,         // 1020:cd7e
        pass1_1028_bb56,         // 1020:cd82
        0,                       // FUN_1030_178e, // 1020:cd86
        write_to_file_1028_b5ec, // 1020:cd8a
        file_1028_b81a,          // 1020:cd8e
        pass1_1028_bc1c,         // 1020:cd92
        pass1_1028_bd38,         // 1020:cd96
        pass1_1028_bc90,         // 1020:cd9a
        pass1_1028_bc7e,         // 1020:cd9e
        pass1_1028_b514,         // 1020:cda2
        pass1_1028_be2a,         // 1020:cda6
        0,                       // FUN_1028_bf16, // 1020:cdaa
        0,                       // FUN_1028_bf1a, // 1020:cdae
        0,                       // FUN_1028_bf1e, // 1020:cdb2
        pass1_1028_be9e,         // 1020:cdb6
        pass1_1028_bf22,         // 1020:cdba
        pass1_1028_bbf0,         // 1020:cdbe
        pass1_1028_bc02,         // 1020:cdc2
        pass1_1028_b5a8,         // 1020:cdc6
        pass1_1028_b5ca,         // 1020:cdca
        pass1_1020_cd30,         // 1020:cdce
        0,                       // FUN_1028_b4ec, // 1020:cdd2
        pass1_1028_b46e,         // 1020:cdd6
        pass1_1028_c64a,         // 1020:cdda
        pass1_1028_c522,         // 1020:cdde
        pass1_1028_ced2,         // 1020:cde2
};

void *addr_table_1020_d004[] = {
        pass1_1020_cfde,         // 1020:d004
        pass1_1028_bb56,         // 1020:d008
        0,                       // FUN_1030_178e, // 1020:d00c
        write_to_file_1028_b5ec, // 1020:d010
        file_1028_b81a,          // 1020:d014
        pass1_1028_bc1c,         // 1020:d018
        pass1_1020_ce32,         // 1020:d01c
        pass1_1028_09d4,         // 1020:d020
        pass1_1028_bc7e,         // 1020:d024
        pass1_1028_b514,         // 1020:d028
        pass1_1028_be2a,         // 1020:d02c
        0,                       // FUN_1028_bf16, // 1020:d030
        0,                       // FUN_1028_bf1a, // 1020:d034
        0,                       // FUN_1028_bf1e, // 1020:d038
        pass1_1020_ce9e,         // 1020:d03c
        pass1_1028_bf22,         // 1020:d040
        pass1_1028_bbf0,         // 1020:d044
        pass1_1028_bc02,         // 1020:d048
        pass1_1028_b5a8,         // 1020:d04c
        pass1_1028_b5ca,         // 1020:d050
        0,                       // FUN_1028_b4e6, // 1020:d054
        0,                       // FUN_1028_b4ec, // 1020:d058
        pass1_1028_b46e,         // 1020:d05c
        pass1_1028_c64a,         // 1020:d060
        pass1_1028_c522,         // 1020:d064
        pass1_1028_ced2,         // 1020:d068
};

void *addr_table_1020_d314[] = {
        pass1_1020_d2ee,         // 1020:d314
        pass1_1028_bb56,         // 1020:d318
        0,                       // FUN_1030_178e, // 1020:d31c
        write_to_file_1028_b5ec, // 1020:d320
        file_1028_b81a,          // 1020:d324
        pass1_1028_bc1c,         // 1020:d328
        pass1_1028_bd38,         // 1020:d32c
        pass1_1020_d118,         // 1020:d330
        pass1_1028_bc7e,         // 1020:d334
        pass1_1028_b514,         // 1020:d338
        pass1_1020_d0b8,         // 1020:d33c
        0,                       // FUN_1028_bf16, // 1020:d340
        0,                       // FUN_1028_bf1a, // 1020:d344
        0,                       // FUN_1028_bf1e, // 1020:d348
        pass1_1028_be9e,         // 1020:d34c
        pass1_1028_bf22,         // 1020:d350
        pass1_1028_bbf0,         // 1020:d354
        pass1_1028_bc02,         // 1020:d358
        pass1_1028_b5a8,         // 1020:d35c
        pass1_1028_b5ca,         // 1020:d360
        0,                       // FUN_1028_b4e6, // 1020:d364
        0,                       // FUN_1028_b4ec, // 1020:d368
        pass1_1028_b46e,         // 1020:d36c
        pass1_1028_c64a,         // 1020:d370
        pass1_1028_c522,         // 1020:d374
        pass1_1028_ced2,         // 1020:d378
};

void *addr_table_1020_d53e[] = {
        pass1_1020_d518,         // 1020:d53e
        pass1_1028_bb56,         // 1020:d542
        0,                       // FUN_1030_178e, // 1020:d546
        write_to_file_1020_d3d4, // 1020:d54a
        pass1_1020_d41a,         // 1020:d54e
        pass1_1028_bc1c,         // 1020:d552
        pass1_1028_bd38,         // 1020:d556
        pass1_1020_d460,         // 1020:d55a
        pass1_1028_bc7e,         // 1020:d55e
        pass1_1028_b514,         // 1020:d562
        pass1_1028_be2a,         // 1020:d566
        0,                       // FUN_1028_bf16, // 1020:d56a
        0,                       // FUN_1028_bf1a, // 1020:d56e
        0,                       // FUN_1028_bf1e, // 1020:d572
        pass1_1028_be9e,         // 1020:d576
        pass1_1028_bf22,         // 1020:d57a
        pass1_1028_bbf0,         // 1020:d57e
        pass1_1028_bc02,         // 1020:d582
        pass1_1020_d4ca,         // 1020:d586
        pass1_1028_b5ca,         // 1020:d58a
        0,                       // FUN_1028_b4e6, // 1020:d58e
        0,                       // FUN_1028_b4ec, // 1020:d592
        pass1_1028_b46e,         // 1020:d596
        pass1_1028_c64a,         // 1020:d59a
        pass1_1028_c522,         // 1020:d59e
        pass1_1028_ced2,         // 1020:d5a2
};

void *addr_table_1020_d7fe[] = {
        pass1_1020_d7d8,         // 1020:d7fe
        pass1_1028_bb56,         // 1020:d802
        0,                       // FUN_1030_178e, // 1020:d806
        write_to_file_1028_b5ec, // 1020:d80a
        file_1028_b81a,          // 1020:d80e
        pass1_1028_bc1c,         // 1020:d812
        pass1_1028_bd38,         // 1020:d816
        pass1_1028_bc90,         // 1020:d81a
        pass1_1028_bc7e,         // 1020:d81e
        pass1_1020_d6e6,         // 1020:d822
        pass1_1028_be2a,         // 1020:d826
        0,                       // FUN_1028_bf16, // 1020:d82a
        0,                       // FUN_1028_bf1a, // 1020:d82e
        0,                       // FUN_1028_bf1e, // 1020:d832
        pass1_1028_be9e,         // 1020:d836
        pass1_1028_bf22,         // 1020:d83a
        pass1_1028_bbf0,         // 1020:d83e
        pass1_1028_bc02,         // 1020:d842
        pass1_1028_b5a8,         // 1020:d846
        pass1_1028_b5ca,         // 1020:d84a
        0,                       // FUN_1028_b4e6, // 1020:d84e
        0,                       // FUN_1028_b4ec, // 1020:d852
        pass1_1020_d5f2,         // 1020:d856
        pass1_1028_c64a,         // 1020:d85a
        pass1_1028_c522,         // 1020:d85e
        pass1_1028_ced2,         // 1020:d862
};

void *addr_table_1020_d8ec[] = {
        0,                       // FUN_1020_d8c6, // 1020:d8ec
        pass1_1028_bb56,         // 1020:d8f0
        0,                       // FUN_1030_178e, // 1020:d8f4
        write_to_file_1028_b5ec, // 1020:d8f8
        file_1028_b81a,          // 1020:d8fc
        pass1_1028_bc1c,         // 1020:d900
        pass1_1028_bd38,         // 1020:d904
        pass1_1028_bc90,         // 1020:d908
        pass1_1028_bc7e,         // 1020:d90c
        pass1_1028_b514,         // 1020:d910
        pass1_1028_be2a,         // 1020:d914
        0,                       // FUN_1020_d8b2, // 1020:d918
        0,                       // FUN_1020_d8b6, // 1020:d91c
        0,                       // FUN_1020_d8ba, // 1020:d920
        0,                       // FUN_1020_d8be, // 1020:d924
        0,                       // FUN_1020_d8c2, // 1020:d928
        pass1_1028_bbf0,         // 1020:d92c
        pass1_1028_bc02,         // 1020:d930
        pass1_1028_b5a8,         // 1020:d934
        pass1_1028_b5ca,         // 1020:d938
        0,                       // FUN_1028_b4e6, // 1020:d93c
        0,                       // FUN_1028_b4ec, // 1020:d940
        pass1_1028_b46e,         // 1020:d944
        pass1_1028_c64a,         // 1020:d948
        pass1_1028_c522,         // 1020:d94c
        pass1_1028_ced2,         // 1020:d950
};

void *addr_table_1020_e792[] = {
        pass1_1020_e76c,         // 1020:e792
        pass1_1028_bb56,         // 1020:e796
        0,                       // FUN_1030_178e, // 1020:e79a
        write_to_file_1020_e6a4, // 1020:e79e
        pass1_1020_e70e,         // 1020:e7a2
        pass1_1028_bc1c,         // 1020:e7a6
        pass1_1020_d9fa,         // 1020:e7aa
        pass1_1020_da4e,         // 1020:e7ae
        pass1_1020_da3c,         // 1020:e7b2
        pass1_1028_b514,         // 1020:e7b6
        pass1_1028_be2a,         // 1020:e7ba
        0,                       // FUN_1028_bf16, // 1020:e7be
        0,                       // FUN_1028_bf1a, // 1020:e7c2
        0,                       // FUN_1028_bf1e, // 1020:e7c6
        pass1_1020_e44c,         // 1020:e7ca
        pass1_1020_e558,         // 1020:e7ce
        pass1_1028_bbf0,         // 1020:e7d2
        pass1_1028_bc02,         // 1020:e7d6
        pass1_1028_b5a8,         // 1020:e7da
        pass1_1028_b5ca,         // 1020:e7de
        0,                       // FUN_1028_b4e6, // 1020:e7e2
        0,                       // FUN_1028_b4ec, // 1020:e7e6
        pass1_1028_b46e,         // 1020:e7ea
        pass1_1028_c64a,         // 1020:e7ee
        pass1_1020_db86,         // 1020:e7f2
        pass1_1028_ced2,         // 1020:e7f6
};

void *addr_table_1020_e88e[] = {
        pass1_1020_e868,         // 1020:e88e
        pass1_1028_bb56,         // 1020:e892
        0,                       // FUN_1030_178e, // 1020:e896
        write_to_file_1028_b5ec, // 1020:e89a
        file_1028_b81a,          // 1020:e89e
        pass1_1028_bc1c,         // 1020:e8a2
        pass1_1028_bd38,         // 1020:e8a6
        pass1_1028_bc90,         // 1020:e8aa
        pass1_1028_bc7e,         // 1020:e8ae
        pass1_1028_b514,         // 1020:e8b2
        pass1_1028_be2a,         // 1020:e8b6
        0,                       // FUN_1028_bf16, // 1020:e8ba
        0,                       // FUN_1020_e864, // 1020:e8be
        0,                       // FUN_1028_bf1e, // 1020:e8c2
        pass1_1028_be9e,         // 1020:e8c6
        pass1_1028_bf22,         // 1020:e8ca
        pass1_1028_bbf0,         // 1020:e8ce
        pass1_1028_bc02,         // 1020:e8d2
        pass1_1028_b5a8,         // 1020:e8d6
        pass1_1028_b5ca,         // 1020:e8da
        0,                       // FUN_1028_b4e6, // 1020:e8de
        0,                       // FUN_1028_b4ec, // 1020:e8e2
        pass1_1028_b46e,         // 1020:e8e6
        pass1_1028_c64a,         // 1020:e8ea
        pass1_1028_c522,         // 1020:e8ee
        pass1_1028_ced2,         // 1020:e8f2
};

void *addr_table_1020_eef6[] = {
        pass1_1020_eed0, // 1020:eef6
        pass1_1028_bb56, // 1020:eefa
        0,               // FUN_1030_178e, // 1020:eefe
        pass1_1020_e94e, // 1020:ef02
        pass1_1020_e994, // 1020:ef06
        pass1_1028_bc1c, // 1020:ef0a
        pass1_1020_e9d4, // 1020:ef0e
        pass1_1020_ea20, // 1020:ef12
        pass1_1020_ea0e, // 1020:ef16
        pass1_1028_b514, // 1020:ef1a
        pass1_1028_be2a, // 1020:ef1e
        0,               // FUN_1028_bf16, // 1020:ef22
        0,               // FUN_1028_bf1a, // 1020:ef26
        0,               // FUN_1028_bf1e, // 1020:ef2a
        pass1_1020_ed3c, // 1020:ef2e
        pass1_1020_ecb0, // 1020:ef32
        pass1_1028_bbf0, // 1020:ef36
        pass1_1028_bc02, // 1020:ef3a
        pass1_1028_b5a8, // 1020:ef3e
        pass1_1028_b5ca, // 1020:ef42
        0,               // FUN_1028_b4e6, // 1020:ef46
        0,               // FUN_1028_b4ec, // 1020:ef4a
        pass1_1028_b46e, // 1020:ef4e
        pass1_1028_c64a, // 1020:ef52
        pass1_1028_c522, // 1020:ef56
        pass1_1028_ced2, // 1020:ef5a
};

void *addr_table_1028_0ada[] = {
        pass1_1028_0ab4,         // 1028:0ada
        pass1_1028_bb56,         // 1028:0ade
        0,                       // FUN_1030_178e, // 1028:0ae2
        write_to_file_1028_b5ec, // 1028:0ae6
        file_1028_b81a,          // 1028:0aea
        pass1_1028_bc1c,         // 1028:0aee
        pass1_1028_09b8,         // 1028:0af2
        pass1_1028_09d4,         // 1028:0af6
        pass1_1028_bc7e,         // 1028:0afa
        pass1_1028_b514,         // 1028:0afe
        pass1_1028_be2a,         // 1028:0b02
        0,                       // FUN_1028_bf16, // 1028:0b06
        0,                       // FUN_1028_bf1a, // 1028:0b0a
        0,                       // FUN_1028_bf1e, // 1028:0b0e
        pass1_1028_be9e,         // 1028:0b12
        pass1_1028_bf22,         // 1028:0b16
        pass1_1028_bbf0,         // 1028:0b1a
        pass1_1028_bc02,         // 1028:0b1e
        pass1_1028_b5a8,         // 1028:0b22
        pass1_1028_b5ca,         // 1028:0b26
        0,                       // FUN_1028_b4e6, // 1028:0b2a
        0,                       // FUN_1028_b4ec, // 1028:0b2e
        pass1_1028_b46e,         // 1028:0b32
        pass1_1028_c64a,         // 1028:0b36
        pass1_1028_c522,         // 1028:0b3a
        pass1_1028_ced2,         // 1028:0b3e
};

void *addr_table_1030_10b0[] = {
        // - 1030:1120 -> pass1_1030_1120
        // - 1030:11a6 -> pass1_1030_117a
        pass1_1030_117a, // 1030:11a6
};
void *addr_table_1030_1624[] = {
        pass1_1030_15fe, // 1030:1624
};

void *addr_table_1030_17ba[] = {
        pass1_1030_1794, // 1030:17ba
        pass1_1030_177a, // 1030:17be
        0,               // FUN_1030_178e, // 1030:17c2
        pass1_1000_4f1a, // 1030:17c6
        pass1_1000_4f1a, // 1030:17ca
};

void *addr_table_1030_1a16[] = {
        pass1_1030_19f0, // 1030:1a16
        pass1_1030_177a, // 1030:1a1a
        0,               // FUN_1030_178e, // 1030:1a1e
        pass1_1000_4f1a, // 1030:1a22
        pass1_1000_4f1a, // 1030:1a26
        pass1_1030_1972, // 1030:1a2a
        pass1_1030_18f0, // 1030:1a2e
};

void *addr_table_1030_1cbc[] = {
        pass1_1030_1c96, // 1030:1cbc
        pass1_1030_177a, // 1030:1cc0
        0,               // FUN_1030_178e, // 1030:1cc4
        pass1_1030_1a9c, // 1030:1cc8
        file_1030_1b18,  // 1030:1ccc
        pass1_1030_1be2, // 1030:1cd0
        pass1_1030_18f0, // 1030:1cd4
};

void *addr_table_1030_2044[] = {
        pass1_1030_201e, // 1030:2044
        pass1_1030_1dbc, // 1030:2048
        pass1_1030_1dfc, // 1030:204c
        pass1_1030_1e96, // 1030:2050
        pass1_1030_1daa, // 1030:2054
        pass1_1030_1eee, // 1030:2058
        pass1_1030_1f16, // 1030:205c
        0,               // FUN_1030_1f6c, // 1030:2060
        0,               // FUN_1030_1f70, // 1030:2064
};

void *addr_table_1030_293c[] = {
        pass1_1030_2916, // 1030:293c
        pass1_1030_177a, // 1030:2940
        0,               // FUN_1030_178e, // 1030:2944
        pass1_1030_227a, // 1030:2948
        pass1_1030_232e, // 1030:294c
        pass1_1030_1972, // 1030:2950
        pass1_1030_18f0, // 1030:2954
};

void *addr_table_1030_3130[] = {
        pass1_1030_310a, // 1030:3130
        pass1_1030_177a, // 1030:3134
        0,               // FUN_1030_178e, // 1030:3138
        pass1_1030_2aca, // 1030:313c
        pass1_1030_2c8a, // 1030:3140
        pass1_1030_3058, // 1030:3144
        pass1_1030_18f0, // 1030:3148
};

void *addr_table_1030_3af2[] = {
        pass1_1030_3ac6, // 1030:3af2
};

// - 1030:55fe -> pass1_1030_5596
void *addr_table_1030_55ee[] = {
        pass1_1030_55c2, // 1030:55ee
        pass1_1030_53f4, // 1030:55f2
        pass1_1030_538a, // 1030:55f6
        pass1_1030_54f8, // 1030:55fa
        pass1_1030_5596, // 1030:55fe
        pass1_1030_5260, // 1030:5602
        0,               // FUN_1028_d228, // 1030:5606
        pass1_1030_5290, // 1030:560a
};

void *addr_table_1030_5bd0[] = {
        pass1_1030_5baa, // 1030:5bd0
        pass1_1030_177a, // 1030:5bd4
        0,               // FUN_1030_178e, // 1030:5bd8
        pass1_1030_56f6, // 1030:5bdc
        file_1030_581e,  // 1030:5be0
        pass1_1030_1972, // 1030:5be4
        pass1_1030_18f0, // 1030:5be8
};

void *addr_table_1030_613e[] = {
        pass1_1030_6118, // 1030:613e
        pass1_1030_177a, // 1030:6142
        0,               // FUN_1030_178e, // 1030:6146
        pass1_1030_5dbe, // 1030:614a
        file_1030_5e70,  // 1030:614e
        pass1_1030_5ff6, // 1030:6152
        pass1_1030_18f0, // 1030:6156
};

void *addr_table_1030_8114[] = {
        pass1_1030_80ee, // 1030:8114
        pass1_1030_177a, // 1030:8118
        0,               // FUN_1030_178e, // 1030:811c
        pass1_1030_7418, // 1030:8120
        file_1030_778c,  // 1030:8124
};

void *addr_table_1030_8e38[] = {
        pass1_1030_8e12, // 1030:8e38
};

// - 1030:9788 -> INVALID
void *addr_table_1030_9ec8[] = {
        pass1_1030_9e9c, // 1030:9ec8
};

void *addr_table_1030_b932[] = {
        pass1_1030_b90c, // 1030:b932
};

void *addr_table_1030_bc0c[] = {
        pass1_1030_bbe6, // 1030:bc0c
        pass1_1030_177a, // 1030:bc10
        0,               // FUN_1030_178e, // 1030:bc14
        0,               // FUN_1028_b282, // 1030:bc18
        pass1_1028_b2c8, // 1030:bc1c
        0,               // FUN_1028_b27e, // 1030:bc20
};

void *addr_table_1030_bc96[] = {
        pass1_1030_bc70, // 1030:bc96
        pass1_1030_177a, // 1030:bc9a
        0,               // FUN_1030_178e, // 1030:bc9e
        0,               // FUN_1028_b282, // 1030:bca2
        pass1_1028_b2c8, // 1030:bca6
        0,               // FUN_1030_bc6c, // 1030:bcaa
};

void *addr_table_1030_c006[] = {
        pass1_1030_bfe0,         // 1030:c006
        pass1_1028_bb56,         // 1030:c00a
        0,                       // FUN_1030_178e, // 1030:c00e
        write_to_file_1028_b5ec, // 1030:c012
        file_1028_b81a,          // 1030:c016
        pass1_1028_bc1c,         // 1030:c01a
        pass1_1028_bd38,         // 1030:c01e
        pass1_1028_bc90,         // 1030:c022
        pass1_1028_bc7e,         // 1030:c026
        pass1_1028_b514,         // 1030:c02a
        pass1_1028_be2a,         // 1030:c02e
        0,                       // FUN_1028_bf16, // 1030:c032
        pass1_1030_bf6e,         // 1030:c036
        0,                       // FUN_1028_bf1e, // 1030:c03a
        pass1_1028_be9e,         // 1030:c03e
        pass1_1030_be80,         // 1030:c042
        pass1_1028_bbf0,         // 1030:c046
        pass1_1028_bc02,         // 1030:c04a
        pass1_1028_b5a8,         // 1030:c04e
        pass1_1028_b5ca,         // 1030:c052
        0,                       // FUN_1028_b4e6, // 1030:c056
        0,                       // FUN_1028_b4ec, // 1030:c05a
        pass1_1028_b46e,         // 1030:c05e
        pass1_1028_c64a,         // 1030:c062
        pass1_1028_c522,         // 1030:c066
        pass1_1028_ced2,         // 1030:c06a
};

void *addr_table_1030_c68e[] = {
        pass1_1030_c668, // 1030:c68e
        pass1_1028_bb56, // 1030:c692
        0,               // FUN_1030_178e, // 1030:c696
        pass1_1030_c230, // 1030:c69a
        pass1_1030_c29c, // 1030:c69e
        pass1_1028_bc1c, // 1030:c6a2
        pass1_1030_c2fa, // 1030:c6a6
        pass1_1030_c52e, // 1030:c6aa
        pass1_1028_bc7e, // 1030:c6ae
        pass1_1028_b514, // 1030:c6b2
        pass1_1028_be2a, // 1030:c6b6
        0,               // FUN_1028_bf16, // 1030:c6ba
        pass1_1030_c10e, // 1030:c6be
        pass1_1030_c12e, // 1030:c6c2
        pass1_1030_c1b2, // 1030:c6c6
        pass1_1028_bf22, // 1030:c6ca
        pass1_1028_bbf0, // 1030:c6ce
        pass1_1028_bc02, // 1030:c6d2
        pass1_1028_b5a8, // 1030:c6d6
        pass1_1028_b5ca, // 1030:c6da
        pass1_1030_c0ec, // 1030:c6de
        pass1_1030_c0d2, // 1030:c6e2
        pass1_1028_b46e, // 1030:c6e6
        pass1_1028_c64a, // 1030:c6ea
        pass1_1028_c522, // 1030:c6ee
        pass1_1028_ced2, // 1030:c6f2
};

void *addr_table_1030_c940[] = {
        pass1_1030_c91a, // 1030:c940
        pass1_1028_bb56, // 1030:c944
        pass1_1030_c8da, // 1030:c948
        pass1_1030_c84e, // 1030:c94c
        pass1_1030_c894, // 1030:c950
        pass1_1028_bc1c, // 1030:c954
        pass1_1028_bd38, // 1030:c958
        pass1_1028_bc90, // 1030:c95c
        pass1_1028_bc7e, // 1030:c960
        pass1_1028_b514, // 1030:c964
        pass1_1030_c76c, // 1030:c968
        0,               // FUN_1028_bf16, // 1030:c96c
        pass1_1030_c7b0, // 1030:c970
        0,               // FUN_1028_bf1e, // 1030:c974
        pass1_1028_be9e, // 1030:c978
        pass1_1028_bf22, // 1030:c97c
        pass1_1028_bbf0, // 1030:c980
        pass1_1028_bc02, // 1030:c984
        pass1_1028_b5a8, // 1030:c988
        pass1_1028_b5ca, // 1030:c98c
        0,               // FUN_1028_b4e6, // 1030:c990
        0,               // FUN_1028_b4ec, // 1030:c994
        pass1_1030_c74e, // 1030:c998
        pass1_1028_c64a, // 1030:c99c
        pass1_1028_c522, // 1030:c9a0
        pass1_1028_ced2, // 1030:c9a4
};

void *addr_table_1030_d88e[] = {
        pass1_1030_d868, // 1030:d88e
        pass1_1028_bb56, // 1030:d892
        0,               // FUN_1030_178e, // 1030:d896
        pass1_1030_d61c, // 1030:d89a
        pass1_1030_d72e, // 1030:d89e
        pass1_1028_bc1c, // 1030:d8a2
        pass1_1028_bd38, // 1030:d8a6
        pass1_1028_bc90, // 1030:d8aa
        pass1_1028_bc7e, // 1030:d8ae
        pass1_1028_b514, // 1030:d8b2
        pass1_1028_be2a, // 1030:d8b6
        0,               // FUN_1028_bf16, // 1030:d8ba
        pass1_1030_d26c, // 1030:d8be
        0,               // FUN_1028_bf1e, // 1030:d8c2
        pass1_1030_cac2, // 1030:d8c6
        pass1_1028_bf22, // 1030:d8ca
        pass1_1028_bbf0, // 1030:d8ce
        pass1_1030_d230, // 1030:d8d2
        pass1_1028_b5a8, // 1030:d8d6
        pass1_1028_b5ca, // 1030:d8da
        0,               // FUN_1028_b4e6, // 1030:d8de
        0,               // FUN_1028_b4ec, // 1030:d8e2
        pass1_1030_ca26, // 1030:d8e6
        pass1_1028_c64a, // 1030:d8ea
        pass1_1028_c522, // 1030:d8ee
        pass1_1028_ced2, // 1030:d8f2
};

void *addr_table_1030_dc2e[] = {
        pass1_1030_dc08,         // 1030:dc2e
        pass1_1028_bb56,         // 1030:dc32
        0,                       // FUN_1030_178e, // 1030:dc36
        write_to_file_1028_b5ec, // 1030:dc3a
        file_1028_b81a,          // 1030:dc3e
        pass1_1028_bc1c,         // 1030:dc42
        pass1_1028_bd38,         // 1030:dc46
        pass1_1028_bc90,         // 1030:dc4a
        pass1_1028_bc7e,         // 1030:dc4e
        pass1_1028_b514,         // 1030:dc52
        pass1_1030_db78,         // 1030:dc56
        0,                       // FUN_1028_bf16, // 1030:dc5a
        0,                       // FUN_1028_bf1a, // 1030:dc5e
        0,                       // FUN_1028_bf1e, // 1030:dc62
        pass1_1030_d994,         // 1030:dc66
        pass1_1028_bf22,         // 1030:dc6a
        pass1_1028_bbf0,         // 1030:dc6e
        pass1_1028_bc02,         // 1030:dc72
        pass1_1028_b5a8,         // 1030:dc76
        pass1_1028_b5ca,         // 1030:dc7a
        0,                       // FUN_1028_b4e6, // 1030:dc7e
        0,                       // FUN_1028_b4ec, // 1030:dc82
        pass1_1028_b46e,         // 1030:dc86
        pass1_1030_db72,         // 1030:dc8a
        pass1_1030_db92,         // 1030:dc8e
        pass1_1030_dc02,         // 1030:dc92
};

void *addr_table_1030_e036[] = {
        pass1_1030_e010, // 1030:e036
        pass1_1028_bb56, // 1030:e03a
        0,               // FUN_1030_178e, // 1030:e03e
        pass1_1030_de7c, // 1030:e042
        pass1_1030_dec4, // 1030:e046
        pass1_1028_bc1c, // 1030:e04a
        pass1_1030_df0c, // 1030:e04e
        pass1_1028_bc90, // 1030:e052
        pass1_1028_bc7e, // 1030:e056
        pass1_1028_b514, // 1030:e05a
        pass1_1028_be2a, // 1030:e05e
        0,               // FUN_1028_bf16, // 1030:e062
        0,               // FUN_1028_bf1a, // 1030:e066
        0,               // FUN_1028_bf1e, // 1030:e06a
        pass1_1028_be9e, // 1030:e06e
        pass1_1028_bf22, // 1030:e072
        pass1_1028_bbf0, // 1030:e076
        pass1_1028_bc02, // 1030:e07a
        pass1_1028_b5a8, // 1030:e07e
        pass1_1028_b5ca, // 1030:e082
        0,               // FUN_1028_b4e6, // 1030:e086
        0,               // FUN_1028_b4ec, // 1030:e08a
        pass1_1028_b46e, // 1030:e08e
        pass1_1028_c64a, // 1030:e092
        pass1_1028_c522, // 1030:e096
        pass1_1028_ced2, // 1030:e09a
};

void *addr_table_1030_e2ae[] = {
        pass1_1030_e282, // 1030:e2ae
        pass1_1030_e0d4, // 1030:e2b2
        0,               // FUN_1028_d228, // 1030:e2b6
        pass1_1030_e1f4, // 1030:e2ba
};

void *addr_table_1030_e4ea[] = {
        pass1_1030_e4be, // 1030:e4ea
        pass1_1030_e300, // 1030:e4ee
        pass1_1030_e328, // 1030:e4f2
        pass1_1030_e34e, // 1030:e4f6
};

void *addr_table_1030_e62e[] = {
        pass1_1030_e602, // 1030:e62e
        pass1_1030_e546, // 1030:e632
        pass1_1030_e540, // 1030:e636
        pass1_1030_e564, // 1030:e63a
};

void *addr_table_1030_e78a[] = {
        pass1_1030_e75e, // 1030:e78a
        pass1_1030_e67c, // 1030:e78e
        0,               // FUN_1028_d228, // 1030:e792
        pass1_1030_e6c2, // 1030:e796
};

void *addr_table_1030_e890[] = {
        pass1_1030_e864, // 1030:e890
        pass1_1030_e7d0, // 1030:e894
        0,               // FUN_1028_d228, // 1030:e898
        pass1_1030_e7d6, // 1030:e89c
};

void *addr_table_1030_eb40[] = {
        pass1_1030_eb14, // 1030:eb40
        pass1_1030_e8f8, // 1030:eb44
        0,               // FUN_1028_d228, // 1030:eb48
        pass1_1030_e98e, // 1030:eb4c
};

void *addr_table_1030_ecb2[] = {
        pass1_1030_ec86, // 1030:ecb2
        pass1_1030_eb86, // 1030:ecb6
        0,               // FUN_1028_d228, // 1030:ecba
        pass1_1030_ebf8, // 1030:ecbe
};

void *addr_table_1040_d8c4[] = {
        pass1_1040_d89e,            // 1040:d8c4
        pass1_1008_3a10,            // 1040:d8c8
        unk_win_ui_op_1040_b230,    // 1040:d8cc
        pass1_1040_b316,            // 1040:d8d0
        win_ui_op_1040_d2ac,        // 1040:d8d4
        destroy_window_1040_b726,   // 1040:d8d8
        post_win_msg_1040_7f56,     // 1040:d8dc
        draw_op_1040_7bb2,          // 1040:d8e0
        post_win_msg_1040_7f1c,     // 1040:d8e4
        pass1_1038_8848,            // 1040:d8e8
        menu_ui_op_1040_7f86,       // 1040:d8ec
        win_help_1040_800c,         // 1040:d8f0
        pass1_1040_8054,            // 1040:d8f4
        win_ui_op_1040_b372,        // 1040:d8f8
        unk_win_ui_op_1040_8158,    // 1040:d8fc
        check_dialog_msg_1040_81b6, // 1040:d900
        set_sys_modal_window_1040_81fe,        // 1040:d904
        0,                          // FUN_1018_60ea, // 1040:d908
        pass1_1040_824a,            // 1040:d90c
        0,                          // FUN_1040_8266, // 1040:d910
        pass1_1040_d29c,            // 1040:d914
        0,                          // FUN_1018_60ee, // 1040:d918
        0,                          // FUN_1018_60f4, // 1040:d91c
        pass1_1040_b4c8,            // 1040:d920
        0,                          // FUN_1038_8842, // 1040:d924
        0,                          // FUN_1018_60fe, // 1040:d928
        pass1_1040_807e,            // 1040:d92c
        show_win_1040_b43c,         // 1040:d930
        pass1_1040_b45e,            // 1040:d934
        pass1_1040_b17c,            // 1040:d938
        pass1_1040_d76e,            // 1040:d93c
};

void *addr_table_1040_d07c[] = {
        pass1_1040_d056,            // 1040:d07c
        pass1_1008_3a10,            // 1040:d080
        unk_win_ui_op_1040_b230,    // 1040:d084
        pass1_1040_b316,            // 1040:d088
        pass1_1040_cc8c,            // 1040:d08c
        pass1_1040_caa6,            // 1040:d090
        post_win_msg_1040_7f56,     // 1040:d094
        draw_op_1040_7bb2,          // 1040:d098
        post_win_msg_1040_7f1c,     // 1040:d09c
        pass1_1038_8848,            // 1040:d0a0
        menu_ui_op_1040_7f86,       // 1040:d0a4
        win_help_1040_800c,         // 1040:d0a8
        pass1_1040_8054,            // 1040:d0ac
        win_ui_op_1040_b372,        // 1040:d0b0
        unk_win_ui_op_1040_8158,    // 1040:d0b4
        check_dialog_msg_1040_81b6, // 1040:d0b8
        set_sys_modal_window_1040_81fe,        // 1040:d0bc
        0,                          // FUN_1018_60ea, // 1040:d0c0
        pass1_1040_824a,            // 1040:d0c4
        0,                          // FUN_1040_8266, // 1040:d0c8
        pass1_1040_cc66,            // 1040:d0cc
        pass1_1040_cdac,            // 1040:d0d0
        0,                          // FUN_1018_60f4, // 1040:d0d4
        pass1_1040_b4c8,            // 1040:d0d8
        0,                          // FUN_1038_8842, // 1040:d0dc
        0,                          // FUN_1018_60fe, // 1040:d0e0
        pass1_1040_807e,            // 1040:d0e4
        show_win_1040_b43c,         // 1040:d0e8
        pass1_1040_b45e,            // 1040:d0ec
        pass1_1040_b17c,            // 1040:d0f0
        win_ui_op_1040_cace,        // 1040:d0f4
};

//           1008:4c4c 26 4c 08 10       addr         file_1008_4c26
//   1008:4c50 5e 4b 08 10       addr         pass1_1008_4b5e
//   1008:4c54 e8 49 08 10       addr         read_file_1008_49e8
void *addr_table_1008_4c4c[] = {
        file_1008_4c26,     // 1008:4c4c
        pass1_1008_4b5e,    // 1008:4c50
        read_file_1008_49e8 // 1008:4c54
};

void *addr_table_1038_ae4e[] = {
        pass1_1038_ae28,            // 1038:ae4e 28 ae 38 10       addr
        pass1_1008_3a10,            // 1038:ae52 10 3a 08 10       addr
        unk_win_ui_op_1038_9bc8,    // 1038:ae56 c8 9b 38 10       addr
        pass1_1040_b316,            // 1038:ae5a 16 b3 40 10       addr
        enable_window_1038_9cec,    // 1038:ae5e ec 9c 38 10       addr
        destroy_window_1040_b726,   // 1038:ae62 26 b7 40 10       addr
        post_win_msg_1040_7f56,     // 1038:ae66 56 7f 40 10       addr
        draw_op_1040_7bb2,          // 1038:ae6a b2 7b 40 10       addr
        post_win_msg_1040_7f1c,     // 1038:ae6e 1c 7f 40 10       addr
        pass1_1038_8848,            // 1038:ae72 48 88 38 10       addr
        menu_ui_op_1040_7f86,       // 1038:ae76 86 7f 40 10       addr
        win_help_1040_800c,         // 1038:ae7a 0c 80 40 10       addr
        pass1_1040_8054,            // 1038:ae7e 54 80 40 10       addr
        draw_op_1038_9dcc,          // 1038:ae82 cc 9d 38 10       addr
        unk_win_ui_op_1040_8158,    // 1038:ae86 58 81 40 10       addr
        check_dialog_msg_1040_81b6, // 1038:ae8a b6 81 40 10       addr
        set_sys_modal_window_1040_81fe,        // 1038:ae8e fe 81 40 10       addr
        0,                          // FUN_1018_60ea, // 1038:ae92 ea 60 18 10       addr
        pass1_1040_824a,            // 1038:ae96 4a 82 40 10       addr
        0,                          // FUN_1040_8266 // 1038:ae9a 66 82 40 10       addr
        pass1_1040_78de,            // 1038:ae9e de 78 40 10       addr
        0,                          // FUN_1018_60ee, // 1038:aea2 ee 60 18 10       addr
        0,                          // FUN_1018_60f4 // 1038:aea6 f4 60 18 10       addr
        pass1_1040_b4c8,            // 1038:aeaa c8 b4 40 10       addr
        0,                          // FUN_1038_8842 // 1038:aeae 42 88 38 10       addr
        0,                          // 1038:aeb2 fe 60 18 10       addr         FUN_1018_60fe
        pass1_1040_807e,            // 1038:aeb6 7e 80 40 10       addr
        show_win_1040_b43c,         // 1038:aeba 3c b4 40 10       addr
        pass1_1040_b45e,            // 1038:aebe 5e b4 40 10       addr
        pass1_1040_b17c,            // 1038:aec2 7c b1 40 10       addr
        pass1_1038_884c,            // 1038:aec6 4c 88 38 10       addr
};

// void* addr_table_1020_7902[] = {
//   pass1_1020_78dc,       // 1020:7902 dc 78 20 10       addr
//   pass1_1008_3a10,       // 1020:7906 10 3a 08 10       addr
//   mix_draw_op_1020_9312, // 1020:790a 12 93 20 10       addr
// };

void *addr_table_1040_8ddc[] = {
        pass1_1040_8db6,             // 1040:8ddc
        pass1_1008_3a10,             // 1040:8de0
        dialog_ui_fn_1040_78e2,      // 1040:8de4
        pass1_1040_79c0,             // 1040:8de8
        pass1_1040_8b3c,             // 1040:8dec
        destroy_win_1040_7b98,       // 1040:8df0
        post_win_msg_1040_7f56,      // 1040:8df4
        draw_op_1040_7bb2,           // 1040:8df8
        post_win_msg_1040_7f1c,      // 1040:8dfc
        destroy_win_1040_8212,       // 1040:8e00
        menu_ui_op_1040_7f86,        // 1040:8e04
        win_help_1040_800c,          // 1040:8e08
        pass1_1040_8054,             // 1040:8e0c
        set_text_bk_color_1040_7e5e, // 1040:8e10
        unk_win_ui_op_1040_8158,     // 1040:8e14
        check_dialog_msg_1040_81b6,  // 1040:8e18
        set_sys_modal_window_1040_81fe,         // 1040:8e1c
        NULL,                        // FUN_1018_60ea, // 1040:8e20
        pass1_1040_824a,             // 1040:8e24
        NULL,                        // FUN_1040_8266, // 1040:8e28
        pass1_1040_78de,             // 1040:8e2c
        NULL,                        // FUN_1018_60ee, // 1040:8e30
        NULL,                        // FUN_1018_60f4, // 1040:8e34
        NULL,                        // FUN_1018_60fa, // 1040:8e38
        mixed_draw_op_1040_8a06,     // 1040:8e3c
        NULL,                        // FUN_1018_60fe, // 1040:8e40
        pass1_1040_807e,             // 1040:8e44
        pass1_1040_89a4,             // 1040:8e48
        pass1_1040_8978,             // 1040:8e4c
        win_ui_op_1040_8718,         // 1040:8e50
        enable_win_1040_86dc,        // 1040:8e54
};

//void *addr_table_1040_d07c[] = {
//        pass1_1040_d056,            // 1040:d07c
//        pass1_1008_3a10,            // 1040:d080
//        unk_win_ui_op_1040_b230,    // 1040:d084
//        pass1_1040_b316,            // 1040:d088
//        pass1_1040_cc8c,            // 1040:d08c
//        pass1_1040_caa6,            // 1040:d090
//        post_win_msg_1040_7f56,     // 1040:d094
//        draw_op_1040_7bb2,          // 1040:d098
//        post_win_msg_1040_7f1c,     // 1040:d09c
//        pass1_1038_8848,            // 1040:d0a0
//        menu_ui_op_1040_7f86,       // 1040:d0a4
//        win_help_1040_800c,         // 1040:d0a8
//        pass1_1040_8054,            // 1040:d0ac
//        win_ui_op_1040_b372,        // 1040:d0b0
//        unk_win_ui_op_1040_8158,    // 1040:d0b4
//        check_dialog_msg_1040_81b6, // 1040:d0b8
//  set_sys_modal_window_1040_81fe,        // 1040:d0bc
//        NULL,                       // FUN_1018_60ea, // 1040:d0c0
//        pass1_1040_824a,            // 1040:d0c4
//        NULL,                       // FUN_1040_8266, // 1040:d0c8
//        pass1_1040_cc66,            // 1040:d0cc
//        pass1_1040_cdac,            // 1040:d0d0
//        NULL,                       // FUN_1018_60f4, // 1040:d0d4
//        pass1_1040_b4c8,            // 1040:d0d8
//        NULL,                       //  FUN_1038_8842, // 1040:d0dc
//        NULL,                       //  FUN_1018_60fe, // 1040:d0e0
//        pass1_1040_807e,            // 1040:d0e4
//        show_win_1040_b43c,         // 1040:d0e8
//        pass1_1040_b45e,            // 1040:d0ec
//        pass1_1040_b17c,            // 1040:d0f0
//        win_ui_op_1040_cace,        // 1040:d0f4
//
//};

void *addr_table_1040_afc4[] = {
        pass1_1040_af9e,            // 1040:afc4
        pass1_1008_3a10,            // 1040:afc8
        unk_win_ui_op_1040_b230,    // 1040:afcc
        pass1_1040_b316,            // 1040:afd0
        pass1_1040_ad24,            // 1040:afd4
        destroy_window_1040_b726,   // 1040:afd8
        post_win_msg_1040_7f56,     // 1040:afdc
        draw_op_1040_7bb2,          // 1040:afe0
        post_win_msg_1040_7f1c,     // 1040:afe4
        pass1_1038_8848,            // 1040:afe8
        menu_ui_op_1040_7f86,       // 1040:afec
        win_help_1040_800c,         // 1040:aff0
        pass1_1040_8054,            // 1040:aff4
        win_ui_op_1040_b372,        // 1040:aff8
        unk_win_ui_op_1040_8158,    // 1040:affc
        check_dialog_msg_1040_81b6, // 1040:b000
        set_sys_modal_window_1040_81fe,        // 1040:b004
        NULL,                       // FUN_1018_60ea, // 1040:b008
        pass1_1040_824a,            // 1040:b00c
        NULL,                       // FUN_1040_8266, // 1040:b010
        pass1_1040_ad14,            // 1040:b014
        NULL,                       // FUN_1018_60ee, // 1040:b018
        NULL,                       // FUN_1018_60f4, // 1040:b01c
        pass1_1040_b4c8,            // 1040:b020
        NULL,                       // FUN_1038_8842, // 1040:b024
        NULL,                       // FUN_1018_60fe, // 1040:b028
        pass1_1040_807e,            // 1040:b02c
        show_win_1040_b43c,         // 1040:b030
        pass1_1040_b45e,            // 1040:b034
        pass1_1040_b17c,            // 1040:b038
        pass1_1038_884c,            // 1040:b03c

};

void *addr_table_1040_a230[] = {
        pass1_1040_a204, // 1040:a230
};

void *addr_table_1040_d8b9[] = {
        pass1_1040_d89e,            // 1040:d8c4
        pass1_1008_3a10,            // 1040:d8c8
        unk_win_ui_op_1040_b230,    // 1040:d8cc
        pass1_1040_b316,            // 1040:d8d0
        win_ui_op_1040_d2ac,        // 1040:d8d4
        destroy_window_1040_b726,   // 1040:d8d8
        post_win_msg_1040_7f56,     // 1040:d8dc
        draw_op_1040_7bb2,          // 1040:d8e0
        post_win_msg_1040_7f1c,     // 1040:d8e4
        pass1_1038_8848,            // 1040:d8e8
        menu_ui_op_1040_7f86,       // 1040:d8ec
        win_help_1040_800c,         // 1040:d8f0
        pass1_1040_8054,            // 1040:d8f4
        win_ui_op_1040_b372,        // 1040:d8f8
        unk_win_ui_op_1040_8158,    // 1040:d8fc
        check_dialog_msg_1040_81b6, // 1040:d900
        set_sys_modal_window_1040_81fe,        // 1040:d904
        NULL,                       // FUN_1018_60ea, // 1040:d908
        pass1_1040_824a,            // 1040:d90c
        NULL,                       // FUN_1040_8266, // 1040:d910
        pass1_1040_d29c,            // 1040:d914
        NULL,                       // FUN_1018_60ee, // 1040:d918
        NULL,                       // FUN_1018_60f4, // 1040:d91c
        pass1_1040_b4c8,            // 1040:d920
        NULL,                       // FUN_1038_8842, // 1040:d924
        NULL,                       // FUN_1018_60fe, // 1040:d928
        pass1_1040_807e,            // 1040:d92c
        show_win_1040_b43c,         // 1040:d930
        pass1_1040_b45e,            // 1040:d934
        pass1_1040_b17c,            // 1040:d938
        pass1_1040_d76e,            // 1040:d93c

};

void *addr_table_1008_50a2[] = {
        pass1_1008_507c,                 // 1008:50a2  7c  50  08  10       addr *
        set_di_bits_to_device_1008_45d6, // 1008:50a6  d6  45  08  10       addr *
        palette_op_1008_46e4,            // 1008:50aa  e4  46  08  10       addr *
        cleanup_palette_1008_56e2,       // 1008:50ae  e2  56  08  10       addr *
        stretch_di_bits_1008_465a,       // 1008:50b2  5a  46  08  10       addr *
        pass1_1008_4426,                 // 1008:50b6  26  44  08  10       addr *
        pass1_1008_48aa,                 // 1008:50ba  aa  48  08  10       addr *
        memcpy_op_1008_4274,             // 1008:50be  74  42  08  10       addr *
};

void *addr_table_1008_573a[] = {
        pass1_1008_570e,           // 1008:573a  0e  57  08  10       addr
        pass1_1000_4f1a,           // 1008:573e  1a  4f  00  10       addr
        pass1_1000_4f1a,           // 1008:5742  1a  4f  00  10       addr
        cleanup_palette_1008_56e2, // 1008:5746  e2  56  08  10       addr
};

void *addr_table_1010_66f0[] = {
        pass1_1010_66ca,         // 1010:66f0  ca  66  10  10       addr
        pass1_1010_1df2,         // 1010:66f4  f2  1d  10  10       addr
        write_to_file_1010_6372, // 1010:66f8  72  63  10  10       addr
        pass1_1010_648a,         // 1010:66fc  8a  64  10  10       addr
};

void *addr_table_1010_0f0c[] = {
        pass1_1010_0ee6,         // 1010:0f0c  e6  0e  10  10       addr
        pass1_1010_1df2,         // 1010:0f10  f2  1d  10  10       addr
        pass1_1010_1dce,         // 1010:0f14  ce  1d  10  10       addr
        pass1_1010_1dd4,         // 1010:0f18  d4  1d  10  10       addr
        create_dc_1018_4e04,     // 1010:0f1c  04  4e  18  10       addr
        unk_win_ui_op_1018_4f18, // 1010:0f20  18  4f  18  10       addr
};

void *addr_table_1040_8f3c[] = {
        pass1_1040_8f16,            // 1040:8f3c
        pass1_1008_3a10,            // 1040:8f40
        unk_win_ui_op_1040_b230,    // 1040:8f44
        pass1_1040_b316,            // 1040:8f48
        enable_window_1040_8ea0,    // 1040:8f4c
        destroy_window_1040_b726,   // 1040:8f50
        post_win_msg_1040_7f56,     // 1040:8f54
        draw_op_1040_7bb2,          // 1040:8f58
        post_win_msg_1040_7f1c,     // 1040:8f5c
        pass1_1038_8848,            // 1040:8f60
        menu_ui_op_1040_7f86,       // 1040:8f64
        win_help_1040_800c,         // 1040:8f68
        pass1_1040_8054,            // 1040:8f6c
        win_ui_op_1040_b372,        // 1040:8f70
        unk_win_ui_op_1040_8158,    // 1040:8f74
        check_dialog_msg_1040_81b6, // 1040:8f78
        set_sys_modal_window_1040_81fe,        // 1040:8f7c
        NULL,                       // FUN_1018_60ea, // 1040:8f80
        pass1_1040_824a,            // 1040:8f84
        NULL,                       // FUN_1040_8266, // 1040:8f88
        pass1_1040_78de,            // 1040:8f8c
        NULL,                       // FUN_1018_60ee, // 1040:8f90
        NULL,                       // FUN_1018_60f4, // 1040:8f94
        pass1_1040_b4c8,            // 1040:8f98
        NULL,                       // FUN_1038_8842, // 1040:8f9c
        NULL,                       // FUN_1018_60fe, // 1040:8fa0
        pass1_1040_807e,            // 1040:8fa4
        show_win_1040_b43c,         // 1040:8fa8
        pass1_1040_b45e,            // 1040:8fac
        pass1_1040_b17c,            // 1040:8fb0
        pass1_1038_884c,            // 1040:8fb4

};

void *addr_table_1040_6f32[] = {
        pass1_1040_6f0c,            // 1040:6f32
        enable_win_1040_6880,       // 1040:6f36
        mixed_win_ui_op_1040_6942,  // 1040:6f3a
        pass1_1040_68d2,            // 1040:6f3e
        pass1_1040_b54a,            // 1040:6f42
        destroy_window_1040_b726,   // 1040:6f46
        post_win_msg_1040_7f56,     // 1040:6f4a
        draw_op_1040_7bb2,          // 1040:6f4e
        post_win_msg_1040_7f1c,     // 1040:6f52
        pass1_1040_692e,            // 1040:6f56
        menu_ui_op_1040_7f86,       // 1040:6f5a
        win_help_1040_800c,         // 1040:6f5e
        pass1_1040_8054,            // 1040:6f62
        win_ui_op_1040_b372,        // 1040:6f66
        unk_win_ui_op_1040_8158,    // 1040:6f6a
        check_dialog_msg_1040_81b6, // 1040:6f6e
        set_sys_modal_window_1040_81fe,        // 1040:6f72
        NULL,                       // FUN_1018_60ea, // 1040:6f76
        pass1_1040_824a,            // 1040:6f7a
        NULL,                       // FUN_1040_8266, // 1040:6f7e
        pass1_1040_78de,            // 1040:6f82
        NULL,                       //  FUN_1018_60ee, // 1040:6f86
        NULL,                       //  FUN_1018_60f4, // 1040:6f8a
        pass1_1040_b4c8,            // 1040:6f8e
        pass1_1040_6cfa,            // 1040:6f92
        NULL,                       //  FUN_1018_60fe, // 1040:6f96
        pass1_1040_807e,            // 1040:6f9a
        show_win_1040_b43c,         // 1040:6f9e
        pass1_1040_b45e,            // 1040:6fa2
        pass1_1040_b17c,            // 1040:6fa6
        pass1_1038_884c,            // 1040:6faa
        pass1_1040_6cac,            // 1040:6fae
        win_ui_op_1040_6d1a,        // 1040:6fb2

};

void *addr_table_1040_55a2[] = {
        pass1_1040_557c,            // 1040:55a2
        pass1_1008_3a10,            // 1040:55a6
        set_win_pos_1040_4f96,      // 1040:55aa
        pass1_1040_4f28,            // 1040:55ae
        pass1_1040_b54a,            // 1040:55b2
        destroy_window_1040_b726,   // 1040:55b6
        post_win_msg_1040_7f56,     // 1040:55ba
        draw_op_1040_7bb2,          // 1040:55be
        post_win_msg_1040_7f1c,     // 1040:55c2
        pass1_1040_4f82,            // 1040:55c6
        menu_ui_op_1040_7f86,       // 1040:55ca
        win_help_1040_800c,         // 1040:55ce
        pass1_1040_8054,            // 1040:55d2
        win_ui_op_1040_b372,        // 1040:55d6
        unk_win_ui_op_1040_8158,    // 1040:55da
        check_dialog_msg_1040_81b6, // 1040:55de
        set_sys_modal_window_1040_81fe,        // 1040:55e2
        NULL,                       // FUN_1018_60ea, // 1040:55e6
        pass1_1040_824a,            // 1040:55ea
        NULL,                       //  FUN_1040_8266, // 1040:55ee
        pass1_1040_78de,            // 1040:55f2
        NULL,                       //  FUN_1018_60ee, // 1040:55f6
        NULL,                       //  FUN_1018_60f4, // 1040:55fa
        pass1_1040_b4c8,            // 1040:55fe
        pass1_1040_5238,            // 1040:5602
        NULL,                       //  FUN_1018_60fe, // 1040:5606
        pass1_1040_807e,            // 1040:560a
        show_win_1040_b43c,         // 1040:560e
        pass1_1040_b45e,            // 1040:5612
        pass1_1040_b17c,            // 1040:5616
        pass1_1038_884c,            // 1040:561a
        win_ui_op_1040_52c0,        // 1040:561e
        destroy_win_1040_5256,      // 1040:5622

};

void *addr_table_1040_2e26[] = {
        pass1_1040_2e00,            // 1040:2e26
        pass1_1008_3a10,            // 1040:2e2a
        dlg_ui_op_1040_2a64,        // 1040:2e2e
        pass1_1040_b316,            // 1040:2e32
        win_ui_op_1040_2bb2,        // 1040:2e36
        destroy_window_1040_b726,   // 1040:2e3a
        post_win_msg_1040_7f56,     // 1040:2e3e
        draw_op_1040_7bb2,          // 1040:2e42
        post_win_msg_1040_7f1c,     // 1040:2e46
        pass1_1038_8848,            // 1040:2e4a
        menu_ui_op_1040_7f86,       // 1040:2e4e
        win_help_1040_800c,         // 1040:2e52
        pass1_1040_8054,            // 1040:2e56
        win_ui_op_1040_b372,        // 1040:2e5a
        unk_win_ui_op_1040_8158,    // 1040:2e5e
        check_dialog_msg_1040_81b6, // 1040:2e62
        set_sys_modal_window_1040_81fe,        // 1040:2e66
        NULL,                       // FUN_1018_60ea, // 1040:2e6a
        pass1_1040_824a,            // 1040:2e6e
        NULL,                       // FUN_1040_8266, // 1040:2e72
        pass1_1040_78de,            // 1040:2e76
        NULL,                       //  FUN_1018_60ee, // 1040:2e7a
        NULL,                       //  FUN_1018_60f4, // 1040:2e7e
        pass1_1040_b4c8,            // 1040:2e82
        NULL,                       //  FUN_1038_8842, // 1040:2e86
        NULL,                       //   FUN_1018_60fe, // 1040:2e8a
        pass1_1040_807e,            // 1040:2e8e
        show_win_1040_b43c,         // 1040:2e92
        win_dlg_item_1040_2d48,     // 1040:2e96
        pass1_1040_b17c,            // 1040:2e9a
        pass1_1040_2dac,            // 1040:2e9e
};

void *addr_table_1038_90c8[] = {
        pass1_1038_90a2,             // 1038:90c8
        pass1_1008_3a10,             // 1038:90cc
        unk_win_ui_op_1040_b230,     // 1038:90d0
        pass1_1040_b316,             // 1038:90d4
        pass1_1038_8d98,             // 1038:90d8
        destroy_window_1040_b726,    // 1038:90dc
        post_win_msg_1040_7f56,      // 1038:90e0
        draw_op_1040_7bb2,           // 1038:90e4
        post_win_msg_1040_7f1c,      // 1038:90e8
        pass1_1038_8848,             // 1038:90ec
        menu_ui_op_1040_7f86,        // 1038:90f0
        win_help_1040_800c,          // 1038:90f4
        pass1_1040_8054,             // 1038:90f8
        win_ui_op_1040_b372,         // 1038:90fc
        unk_win_ui_op_1040_8158,     // 1038:9100
        check_dialog_msg_1040_81b6,  // 1038:9104
        set_sys_modal_window_1040_81fe,         // 1038:9108
        NULL,                        // FUN_1018_60ea, // 1038:910c
        pass1_1040_824a,             // 1038:9110
        NULL,                        // FUN_1040_8266, // 1038:9114
        pass1_1038_8d7e,             // 1038:9118
        NULL,                        // FUN_1018_60ee, // 1038:911c
        NULL,                        //  FUN_1018_60f4, // 1038:9120
        pass1_1040_b4c8,             // 1038:9124
        NULL,                        //   FUN_1038_8842, // 1038:9128
        NULL,                        //   FUN_1018_60fe, // 1038:912c
        pass1_1040_807e,             // 1038:9130
        show_win_1040_b43c,          // 1038:9134
        pass1_1040_b45e,             // 1038:9138
        pass1_1040_b17c,             // 1038:913c
        send_dlg_item_msg_1038_8d22, // 1038:9140

};

void *addr_table_1038_78de[] = {
        pass1_1038_78b8, // 1038:78de

};

void *addr_table_1038_29fe[] = {
        pass1_1038_29d2, // 1038:29fe
        pass1_1038_290e, // 1038:2a02
        NULL, // FUN_1028_d228, // 1038:2a06
        pass1_1038_2944, // 1038:2a0a

};

void *addr_table_1038_309a[] = {
        pass1_1038_3074, // 1038:309a
        pass1_1038_2b2e, // 1038:309e
        pass1_1038_2ac2, // 1038:30a2
        pass1_1038_2b9a, // 1038:30a6

};

void *addr_table_1038_6504[] = {
        pass1_1038_64de, // 1038:6504
        pass1_1030_177a, // 1038:6508
        pass1_1038_5860, // 1038:650c
        pass1_1038_5e16, // 1038:6510
        file_1038_6118,  // 1038:6514
        pass1_1030_1972, // 1038:6518
        pass1_1030_18f0, // 1038:651c

};

void *addr_table_1028_cf6a[] = {
        pass1_1028_cf44,         // 1028:cf6a
        pass1_1028_bb56,         // 1028:cf6e
        NULL,                    // FUN_1030_178e, // 1028:cf72
        write_to_file_1028_b5ec, // 1028:cf76
        file_1028_b81a,          // 1028:cf7a
        pass1_1028_bc1c,         // 1028:cf7e
        pass1_1028_bd38,         // 1028:cf82
        pass1_1028_bc90,         // 1028:cf86
        pass1_1028_bc7e,         // 1028:cf8a
        pass1_1028_b514,         // 1028:cf8e
        pass1_1028_be2a,         // 1028:cf92
        NULL,                    // FUN_1028_bf16, // 1028:cf96
        NULL,                    // FUN_1028_bf1a, // 1028:cf9a
        NULL,                    // FUN_1028_bf1e, // 1028:cf9e
        pass1_1028_be9e,         // 1028:cfa2
        pass1_1028_bf22,         // 1028:cfa6
        pass1_1028_bbf0,         // 1028:cfaa
        pass1_1028_bc02,         // 1028:cfae
        pass1_1028_b5a8,         // 1028:cfb2
        pass1_1028_b5ca,         // 1028:cfb6
        NULL,                    // FUN_1028_b4e6, // 1028:cfba
        NULL,                    // FUN_1028_b4ec, // 1028:cfbe
        pass1_1028_b46e,         // 1028:cfc2
        pass1_1028_c64a,         // 1028:cfc6
        pass1_1028_c522,         // 1028:cfca
        pass1_1028_ced2,         // 1028:cfce

};

void *addr_table_1028_9c52[] = {
        pass1_1028_9c2c, // 1028:9c52
        pass1_1028_99c4, // 1028:9c56
        pass1_1028_9a02, // 1028:9c5a
        pass1_1028_9b48, // 1028:9c5e

};

void *addr_table_1028_8fb0[] = {
        pass1_1028_8f8a, // 1028:8fb0
        pass1_1028_8e1e, // 1028:8fb4
        pass1_1028_8e5c, // 1028:8fb8
        pass1_1028_8ea6, // 1028:8fbc

};

void *addr_table_1028_6876[] = {
        pass1_1028_6850, // 1028:6876
        pass1_1028_bb56, // 1028:687a
        NULL,            // FUN_1030_178e, // 1028:687e
        pass1_1028_64d6, // 1028:6882
        pass1_1028_65e2, // 1028:6886
        pass1_1028_bc1c, // 1028:688a
        pass1_1028_bd38, // 1028:688e
        pass1_1028_bc90, // 1028:6892
        pass1_1028_bc7e, // 1028:6896
        pass1_1028_b514, // 1028:689a
        pass1_1028_be2a, // 1028:689e
        NULL,            // FUN_1028_bf16, // 1028:68a2
        NULL,            // FUN_1028_bf1a, // 1028:68a6
        NULL,            // FUN_1028_bf1e, // 1028:68aa
        pass1_1028_be9e, // 1028:68ae
        pass1_1028_bf22, // 1028:68b2
        pass1_1028_6822, // 1028:68b6
        pass1_1028_bc02, // 1028:68ba
        pass1_1028_b5a8, // 1028:68be
        pass1_1028_b5ca, // 1028:68c2
        NULL,            // FUN_1028_b4e6, // 1028:68c6
        NULL,            // FUN_1028_b4ec, // 1028:68ca
        pass1_1028_61c4, // 1028:68ce
        pass1_1028_c64a, // 1028:68d2
        pass1_1028_c522, // 1028:68d6
        pass1_1028_ced2, // 1028:68da

};

void *addr_table_1028_3e2c[] = {
        pass1_1028_3e06,         // 1028:3e2c
        pass1_1028_bb56,         // 1028:3e30
        NULL,                    // FUN_1030_178e, // 1028:3e34
        write_to_file_1028_3d0e, // 1028:3e38
        pass1_1028_3d92,         // 1028:3e3c
        pass1_1028_bc1c,         // 1028:3e40
        pass1_1028_bd38,         // 1028:3e44
        pass1_1028_38d4,         // 1028:3e48
        pass1_1028_bc7e,         // 1028:3e4c
        pass1_1028_b514,         // 1028:3e50
        pass1_1028_be2a,         // 1028:3e54
        NULL,                    //  FUN_1028_bf16, // 1028:3e58
        pass1_1028_3958,         // 1028:3e5c
        NULL,                    //   FUN_1028_bf1e, // 1028:3e60
        pass1_1028_be9e,         // 1028:3e64
        pass1_1028_bf22,         // 1028:3e68
        pass1_1028_3c60,         // 1028:3e6c
        pass1_1028_bc02,         // 1028:3e70
        pass1_1028_b5a8,         // 1028:3e74
        pass1_1028_b5ca,         // 1028:3e78
        NULL,                    //  FUN_1028_b4e6, // 1028:3e7c
        NULL,                    //   FUN_1028_b4ec, // 1028:3e80
        pass1_1028_b46e,         // 1028:3e84
        pass1_1028_c64a,         // 1028:3e88
        pass1_1028_c522,         // 1028:3e8c
        pass1_1028_ced2,         // 1028:3e90

};

void *addr_table_1040_c53e[] = {
        pass1_1028_3e06,           // 1028:3e2c
        pass1_1028_bb56,           // 1028:3e30
        NULL,                      // FUN_1030_178e, // 1028:3e34
        write_to_file_1028_3d0e,   // 1028:3e38
        pass1_1028_3d92,           // 1028:3e3c
        pass1_1028_bc1c,           // 1028:3e40
        pass1_1028_bd38,           // 1028:3e44
        pass1_1028_38d4,           // 1028:3e48
        pass1_1028_bc7e,           // 1028:3e4c
        pass1_1028_b514,           // 1028:3e50
        pass1_1028_be2a,           // 1028:3e54
        NULL,                      // FUN_1028_bf16, // 1028:3e58
        pass1_1028_3958,           // 1028:3e5c
        NULL,                      // FUN_1028_bf1e, // 1028:3e60
        pass1_1028_be9e,           // 1028:3e64
        pass1_1028_bf22,           // 1028:3e68
        pass1_1028_3c60,           // 1028:3e6c
        pass1_1028_bc02,           // 1028:3e70
        pass1_1028_b5a8,           // 1028:3e74
        pass1_1028_b5ca,           // 1028:3e78
        NULL,                      // FUN_1028_b4e6, // 1028:3e7c
        NULL,                      // FUN_1028_b4ec, // 1028:3e80
        pass1_1028_b46e,           // 1028:3e84
        pass1_1028_c64a,           // 1028:3e88
        pass1_1028_c522,           // 1028:3e8c
        pass1_1028_ced2,           // 1028:3e90
        pass1_1040_c518,           // 1040:c53e
        invalidate_rect_1040_c028, // 1040:c542
        unk_draw_op_1040_c226,     // 1040:c546

};

void *addr_table_1040_beba[] = {
        pass1_1040_be94,            // 1040:beba
        pass1_1008_3a10,            // 1040:bebe
        win_ui_1040_b8d2,           // 1040:bec2
        pass1_1040_b864,            // 1040:bec6
        pass1_1040_b54a,            // 1040:beca
        destroy_window_1040_b726,   // 1040:bece
        post_win_msg_1040_7f56,     // 1040:bed2
        draw_op_1040_7bb2,          // 1040:bed6
        post_win_msg_1040_7f1c,     // 1040:beda
        pass1_1040_b8be,            // 1040:bede
        menu_ui_op_1040_7f86,       // 1040:bee2
        win_help_1040_800c,         // 1040:bee6
        pass1_1040_8054,            // 1040:beea
        win_ui_op_1040_b372,        // 1040:beee
        unk_win_ui_op_1040_8158,    // 1040:bef2
        check_dialog_msg_1040_81b6, // 1040:bef6
        set_sys_modal_window_1040_81fe,        // 1040:befa
        NULL,                       // FUN_1018_60ea, // 1040:befe
        pass1_1040_824a,            // 1040:bf02
        NULL,                       //  FUN_1040_8266, // 1040:bf06
        pass1_1040_78de,            // 1040:bf0a
        NULL,                       //   FUN_1018_60ee, // 1040:bf0e
        NULL,                       //    FUN_1018_60f4, // 1040:bf12
        pass1_1040_b4c8,            // 1040:bf16
        pass1_1040_bb5a,            // 1040:bf1a
        NULL,                       //    FUN_1018_60fe, // 1040:bf1e
        pass1_1040_807e,            // 1040:bf22
        show_win_1040_b43c,         // 1040:bf26
        pass1_1040_b45e,            // 1040:bf2a
        pass1_1040_b17c,            // 1040:bf2e
        pass1_1038_884c,            // 1040:bf32
        win_ui_op_1040_bbe2,        // 1040:bf36
        destroy_win_1040_bb78,      // 1040:bf3a

};

void *addr_table_1040_ac08[] = {
        pass1_1040_abe2,            // 1040:ac08
        pass1_1008_3a10,            // 1040:ac0c
        unk_win_ui_op_1040_b230,    // 1040:ac10
        pass1_1040_b316,            // 1040:ac14
        win_ui_op_1040_a784,        // 1040:ac18
        destroy_window_1040_b726,   // 1040:ac1c
        post_win_msg_1040_7f56,     // 1040:ac20
        draw_op_1040_7bb2,          // 1040:ac24
        post_win_msg_1040_7f1c,     // 1040:ac28
        pass1_1038_8848,            // 1040:ac2c
        menu_ui_op_1040_7f86,       // 1040:ac30
        win_help_1040_800c,         // 1040:ac34
        pass1_1040_8054,            // 1040:ac38
        draw_op_1040_a67e,          // 1040:ac3c
        unk_win_ui_op_1040_8158,    // 1040:ac40
        check_dialog_msg_1040_81b6, // 1040:ac44
        set_sys_modal_window_1040_81fe,        // 1040:ac48
        NULL,                       // FUN_1018_60ea, // 1040:ac4c
        pass1_1040_824a,            // 1040:ac50
        NULL,                       // FUN_1040_8266, // 1040:ac54
        pass1_1040_a84a,            // 1040:ac58
        NULL,                       // FUN_1018_60ee, // 1040:ac5c
        NULL,                       // FUN_1018_60f4, // 1040:ac60
        pass1_1040_b4c8,            // 1040:ac64
        NULL,                       //  FUN_1038_8842, // 1040:ac68
        NULL,                       //  FUN_1018_60fe, // 1040:ac6c
        pass1_1040_807e,            // 1040:ac70
        show_win_1040_b43c,         // 1040:ac74
        pass1_1040_b45e,            // 1040:ac78
        pass1_1040_b17c,            // 1040:ac7c
        pass1_1038_884c,            // 1040:ac80

};

void *addr_table_1038_8c2e[] = {
        pass1_1038_8c08, // 1038:8c2e
        pass1_1008_3a10, // 1038:8c32
        unk_win_ui_op_1040_b230, // 1038:8c36
        pass1_1040_b316, // 1038:8c3a
        pass1_1038_89f8, // 1038:8c3e
        destroy_window_1040_b726, // 1038:8c42
        post_win_msg_1040_7f56, // 1038:8c46
        draw_op_1040_7bb2, // 1038:8c4a
        post_win_msg_1040_7f1c, // 1038:8c4e
        pass1_1038_8848, // 1038:8c52
        menu_ui_op_1040_7f86, // 1038:8c56
        win_help_1040_800c, // 1038:8c5a
        pass1_1040_8054, // 1038:8c5e
        win_ui_op_1040_b372, // 1038:8c62
        unk_win_ui_op_1040_8158, // 1038:8c66
        check_dialog_msg_1040_81b6, // 1038:8c6a
        set_sys_modal_window_1040_81fe, // 1038:8c6e
        NULL, // FUN_1018_60ea, // 1038:8c72
        pass1_1040_824a, // 1038:8c76
        NULL, //   FUN_1040_8266, // 1038:8c7a
        pass1_1038_89e8, // 1038:8c7e
        pass1_1038_8966, // 1038:8c82
        NULL, //   FUN_1018_60f4, // 1038:8c86
        pass1_1040_b4c8, // 1038:8c8a
        NULL, //   FUN_1038_8842, // 1038:8c8e
        NULL, //   FUN_1018_60fe, // 1038:8c92
        pass1_1040_807e, // 1038:8c96
        show_win_1040_b43c, // 1038:8c9a
        pass1_1040_b45e, // 1038:8c9e
        pass1_1040_b17c, // 1038:8ca2
        unk_win_ui_op_1038_8afe, // 1038:8ca6

};

void *addr_table_1040_3ffc[] = {
        pass1_1040_3fd6,             // 1040:3ffc
        pass1_1008_3a10,             // 1040:4000
        show_win_1040_3ae8,          // 1040:4004
        pass1_1040_79c0,             // 1040:4008
        unk_win_ui_op_1040_3c64,     // 1040:400c
        pass1_1040_3a0e,             // 1040:4010
        post_win_msg_1040_7f56,      // 1040:4014
        draw_op_1040_7bb2,           // 1040:4018
        post_win_msg_1040_7f1c,      // 1040:401c
        destroy_win_1040_8212,       // 1040:4020
        menu_ui_op_1040_7f86,        // 1040:4024
        win_help_1040_800c,          // 1040:4028
        pass1_1040_8054,             // 1040:402c
        set_text_bk_color_1040_7e5e, // 1040:4030
        unk_win_ui_op_1040_8158,     // 1040:4034
        check_dialog_msg_1040_81b6,  // 1040:4038
        set_sys_modal_window_1040_81fe,         // 1040:403c
        NULL,                        // FUN_1018_60ea, // 1040:4040
        pass1_1040_824a,             // 1040:4044
        NULL,                        // FUN_1040_8266, // 1040:4048
        win_ui_op_1040_3b1e,         // 1040:404c
        enable_win_1040_3a36,        // 1040:4050
        NULL,                        //  FUN_1018_60f4, // 1040:4054
        NULL,                        //  FUN_1018_60fa, // 1040:4058
        get_dc_op_1040_3d5e,         // 1040:405c
        NULL,                        //  FUN_1018_60fe, // 1040:4060
        pass1_1040_807e,             // 1040:4064
        pass1_1040_557c,             // 1040:55a2
        pass1_1008_3a10,             // 1040:55a6
        set_win_pos_1040_4f96,       // 1040:55aa
        pass1_1040_4f28,             // 1040:55ae
        pass1_1040_b54a,             // 1040:55b2
        destroy_window_1040_b726,    // 1040:55b6
        post_win_msg_1040_7f56,      // 1040:55ba
        draw_op_1040_7bb2,           // 1040:55be
        post_win_msg_1040_7f1c,      // 1040:55c2
        pass1_1040_4f82,             // 1040:55c6
        menu_ui_op_1040_7f86,        // 1040:55ca
        win_help_1040_800c,          // 1040:55ce
        pass1_1040_8054,             // 1040:55d2
        win_ui_op_1040_b372,         // 1040:55d6
        unk_win_ui_op_1040_8158,     // 1040:55da
        check_dialog_msg_1040_81b6,  // 1040:55de
        set_sys_modal_window_1040_81fe,         // 1040:55e2
        NULL,                        //   FUN_1018_60ea, // 1040:55e6
        pass1_1040_824a,             // 1040:55ea
        NULL,                        //  FUN_1040_8266, // 1040:55ee
        pass1_1040_78de,             // 1040:55f2
        NULL,                        //  FUN_1018_60ee, // 1040:55f6
        NULL,                        // FUN_1018_60f4, // 1040:55fa
        pass1_1040_b4c8,             // 1040:55fe
        pass1_1040_5238,             // 1040:5602
        NULL,                        //  FUN_1018_60fe, // 1040:5606
        pass1_1040_807e,             // 1040:560a
        show_win_1040_b43c,          // 1040:560e
        pass1_1040_b45e,             // 1040:5612
        pass1_1040_b17c,             // 1040:5616
        pass1_1038_884c,             // 1040:561a
        win_ui_op_1040_52c0,         // 1040:561e
        destroy_win_1040_5256,       // 1040:5622
};

void *addr_table_1028_a856[] = {
        pass1_1028_a82a, // 1028:a856
        pass1_1028_a73c, // 1028:a85a
        NULL, //FUN_1028_d228, // 1028:a85e
        pass1_1028_a79c, // 1028:a862

};

void *addr_table_1028_a9ae[] = {
        pass1_1028_a982, // 1028:a9ae
        pass1_1028_a89c, // 1028:a9b2
        NULL, // FUN_1028_d228, // 1028:a9b6
        pass1_1028_a8f4, // 1028:a9ba

};

void *addr_table_1028_ab22[] = {
        pass1_1028_aaf6, // 1028:ab22
        pass1_1028_a9f4, // 1028:ab26
        NULL, // FUN_1028_d228, // 1028:ab2a
        pass1_1028_aa68, // 1028:ab2e

};

void *addr_table_1028_aca6[] = {
        pass1_1028_ac7a, // 1028:aca6
        pass1_1028_ab68, // 1028:acaa
        NULL, // FUN_1028_d228, // 1028:acae
        pass1_1028_abec, // 1028:acb2

};

void *addr_table_1028_ae56[] = {
        pass1_1028_ae2a, // 1028:ae56
        pass1_1028_acec, // 1028:ae5a
        NULL, // FUN_1028_d228, // 1028:ae5e
        pass1_1028_ad9c, // 1028:ae62

};

void *addr_table_1028_b0ce[] = {
        pass1_1028_b0a2, // 1028:b0ce
        pass1_1028_aec0, // 1028:b0d2
        pass1_1028_af08, // 1028:b0d6
        pass1_1028_afce, // 1028:b0da

};

void *addr_table_1028_b33c[] = {
        pass1_1028_b316, // 1028:b33c
        pass1_1030_177a, // 1028:b340
        NULL, // FUN_1030_178e, // 1028:b344
        NULL, // FUN_1028_b282, // 1028:b348
        pass1_1028_b2c8, // 1028:b34c
        NULL, // FUN_1028_b27e, // 1028:b350
};

void *addr_table_1028_9eb6[] = {
        pass1_1028_9e8a, // 1028:9eb6
        pass1_1028_9c90, // 1028:9eba
        NULL, // FUN_1028_d228, // 1028:9ebe
        pass1_1028_9dee, // 1028:9ec2

};

void *addr_table_1028_a6f6[] = {
        pass1_1028_a6ca, // 1028:a6f6
        pass1_1028_9efc, // 1028:a6fa
        NULL, // FUN_1028_d228, // 1028:a6fe
        pass1_1028_a0fa, // 1028:a702

};

void *addr_table_1028_84ba[] = {
        pass1_1028_848e, // 1028:84ba
        pass1_1028_83b4, // 1028:84be
        NULL, // FUN_1028_d228, // 1028:84c2
        pass1_1028_8400, // 1028:84c6

};

void *addr_table_1028_8d8e[] = {
        pass1_1028_8d62, // 1028:8d8e
        NULL, // FUN_1028_d222, // 1028:8d92
        pass1_1028_8920, // 1028:8d96
        pass1_1028_8c46, // 1028:8d9a

};

void *addr_table_1028_932c[] = {
        pass1_1028_9300, // 1028:932c
        pass1_1028_9114, // 1028:9330
        NULL, // FUN_1028_d228, // 1028:9334
        pass1_1028_9264, // 1028:9338

};

void *addr_table_1028_819a[] = {
        pass1_1028_816e, // 1028:819a
        pass1_1028_74e4, // 1028:819e
        NULL, // FUN_1028_d228, // 1028:81a2
        pass1_1028_752e, // 1028:81a6

};

void *addr_table_1028_836e[] = {
        pass1_1028_8342, // 1028:836e
        pass1_1028_81e0, // 1028:8372
        NULL, // FUN_1028_d228, // 1028:8376
        pass1_1028_82b4, // 1028:837a
};


void *addr_table_1028_6ad2[] = {
        pass1_1028_6aa6, // 1028:6ad2
        NULL, // FUN_1028_d222, // 1028:6ad6
        NULL, // FUN_1028_d228, // 1028:6ada
        pass1_1000_4f1a, // 1028:6ade
        pass1_1028_6a7a, // 1028:6ae2
        pass1_1028_6926, // 1028:6ae6
        NULL, // FUN_1028_d228, // 1028:6aea
        pass1_1028_69cc, // 1028:6aee
};

void *addr_table_1028_6e50[] = {
        pass1_1028_6e24, // 1028:6e50
        pass1_1028_6b2c, // 1028:6e54
        NULL, // FUN_1028_d228, // 1028:6e58
        pass1_1000_4f1a, // 1028:6e5c

};

void *addr_table_1028_6fb0[] = {
        pass1_1028_6f84, // 1028:6fb0
        pass1_1028_6e96, // 1028:6fb4
        NULL, // FUN_1028_d228, // 1028:6fb8
        pass1_1028_6ef6, // 1028:6fbc

};

void *addr_table_1028_749e[] = {
        pass1_1028_7472, // 1028:749e
        pass1_1028_6ff6, // 1028:74a2
        NULL, // FUN_1028_d228, // 1028:74a6
        pass1_1028_737e, // 1028:74aa

};

void *addr_table_1028_5280[] = {
        pass1_1028_525a, // 1028:5280
        pass1_1028_bb56, // 1028:5284
        NULL, // FUN_1030_178e, // 1028:5288
        write_to_file_1028_b5ec, // 1028:528c
        file_1028_b81a, // 1028:5290
        pass1_1028_bc1c, // 1028:5294
        pass1_1028_5128, // 1028:5298
        pass1_1028_bc90, // 1028:529c
        pass1_1028_bc7e, // 1028:52a0
        pass1_1028_b514, // 1028:52a4
        pass1_1028_be2a, // 1028:52a8
        NULL, // FUN_1028_bf16, // 1028:52ac
        NULL, // FUN_1028_5124, // 1028:52b0
        NULL, // FUN_1028_bf1e, // 1028:52b4
        pass1_1028_be9e, // 1028:52b8
        pass1_1028_bf22, // 1028:52bc
        pass1_1028_bbf0, // 1028:52c0
        pass1_1028_bc02, // 1028:52c4
        pass1_1028_b5a8, // 1028:52c8
        pass1_1028_b5ca, // 1028:52cc
        NULL, // FUN_1028_b4e6, // 1028:52d0
        NULL, // FUN_1028_b4ec, // 1028:52d4
        pass1_1028_b46e, // 1028:52d8
        pass1_1028_c64a, // 1028:52dc
        pass1_1028_c522, // 1028:52e0
        pass1_1028_ced2, // 1028:52e4

};

void *addr_table_1028_54bc[] = {
        pass1_1028_5496, // 1028:54bc
        pass1_1028_bb56, // 1028:54c0
        NULL, // FUN_1030_178e, // 1028:54c4
        write_to_file_1028_b5ec, // 1028:54c8
        file_1028_b81a, // 1028:54cc
        pass1_1028_bc1c, // 1028:54d0
        pass1_1028_bd38, // 1028:54d4
        pass1_1028_bc90, // 1028:54d8
        pass1_1028_bc7e, // 1028:54dc
        pass1_1028_b514, // 1028:54e0
        pass1_1028_5412, // 1028:54e4
        NULL, // FUN_1028_bf16, // 1028:54e8
        NULL, // FUN_1028_bf1a, // 1028:54ec
        NULL, // FUN_1028_bf1e, // 1028:54f0
        pass1_1028_be9e, // 1028:54f4
        pass1_1028_bf22, // 1028:54f8
        pass1_1028_bbf0, // 1028:54fc
        pass1_1028_bc02, // 1028:5500
        pass1_1028_b5a8, // 1028:5504
        pass1_1028_b5ca, // 1028:5508
        NULL, // FUN_1028_b4e6, // 1028:550c
        NULL, // FUN_1028_b4ec, // 1028:5510
        pass1_1028_b46e, // 1028:5514
        pass1_1028_c64a, // 1028:5518
        pass1_1028_c522, // 1028:551c
        pass1_1028_ced2, // 1028:5520
};

void *addr_table_1028_535e[] = {
        NULL, // FUN_1028_5338, // 1028:535e
        pass1_1028_bb56, // 1028:5362
        NULL, // FUN_1030_178e, // 1028:5366
        write_to_file_1028_b5ec, // 1028:536a
        file_1028_b81a, // 1028:536e
        pass1_1028_bc1c, // 1028:5372
        pass1_1028_bd38, // 1028:5376
        pass1_1028_bc90, // 1028:537a
        pass1_1028_bc7e, // 1028:537e
        pass1_1028_b514, // 1028:5382
        pass1_1028_be2a, // 1028:5386
        NULL, // FUN_1028_bf16, // 1028:538a
        NULL, // FUN_1028_5334, // 1028:538e
        NULL, // FUN_1028_bf1e, // 1028:5392
        pass1_1028_be9e, // 1028:5396
        pass1_1028_bf22, // 1028:539a
        pass1_1028_bbf0, // 1028:539e
        pass1_1028_bc02, // 1028:53a2
        pass1_1028_b5a8, // 1028:53a6
        pass1_1028_b5ca, // 1028:53aa
        NULL, // FUN_1028_b4e6, // 1028:53ae
        NULL, // FUN_1028_b4ec, // 1028:53b2
        pass1_1028_b46e, // 1028:53b6
        pass1_1028_c64a, // 1028:53ba
        pass1_1028_c522, // 1028:53be
        pass1_1028_ced2, // 1028:53c2
};

void *addr_table_1028_55c8[] = {
        pass1_1028_55a2, // 1028:55c8
        pass1_1028_bb56, // 1028:55cc
        NULL, // FUN_1030_178e, // 1028:55d0
        write_to_file_1028_0234, // 1028:55d4
        pass1_1028_0374, // 1028:55d8
        pass1_1028_bc1c, // 1028:55dc
        pass1_1028_bd38, // 1028:55e0
        pass1_1028_bc90, // 1028:55e4
        pass1_1028_bc7e, // 1028:55e8
        pass1_1028_b514, // 1028:55ec
        pass1_1028_01ec, // 1028:55f0
        NULL, // FUN_1028_bf16, // 1028:55f4
        pass1_1028_0582, // 1028:55f8
        NULL, // FUN_1028_bf1e, // 1028:55fc
        pass1_1028_5570, // 1028:5600
        pass1_1028_bf22, // 1028:5604
        pass1_1028_04ee, // 1028:5608
        pass1_1028_bc02, // 1028:560c
        pass1_1028_b5a8, // 1028:5610
        pass1_1028_b5ca, // 1028:5614
        NULL, // FUN_1028_b4e6, // 1028:5618
        NULL, // FUN_1028_b4ec, // 1028:561c
        pass1_1028_0176, // 1028:5620
        pass1_1028_c64a, // 1028:5624
        pass1_1028_c522, // 1028:5628
        pass1_1028_ced2, // 1028:562c

};

void *addr_table_1028_56ac[] = {
        NULL, // FUN_1028_5686, // 1028:56ac
        pass1_1028_bb56, // 1028:56b0
        NULL, // FUN_1030_178e, // 1028:56b4
        write_to_file_1028_b5ec, // 1028:56b8
        file_1028_b81a, // 1028:56bc
        pass1_1028_bc1c, // 1028:56c0
        pass1_1028_bd38, // 1028:56c4
        NULL, // FUN_1028_567c, // 1028:56c8
        pass1_1028_bc7e, // 1028:56cc
        pass1_1028_b514, // 1028:56d0
        pass1_1028_be2a, // 1028:56d4
        NULL, // FUN_1028_bf16, // 1028:56d8
        NULL, // FUN_1028_bf1a, // 1028:56dc
        NULL, // FUN_1028_5682, // 1028:56e0
        pass1_1028_be9e, // 1028:56e4
        pass1_1028_bf22, // 1028:56e8
        pass1_1028_bbf0, // 1028:56ec
        pass1_1028_bc02, // 1028:56f0
        pass1_1028_b5a8, // 1028:56f4
        pass1_1028_b5ca, // 1028:56f8
        NULL, // FUN_1028_b4e6, // 1028:56fc
        NULL, // FUN_1028_b4ec, // 1028:5700
        pass1_1028_b46e, // 1028:5704
        pass1_1028_c64a, // 1028:5708
        pass1_1028_c522, // 1028:570c
        pass1_1028_ced2, // 1028:5710

};

void *addr_table_1028_581c[] = {
        NULL, // FUN_1028_57f6, // 1028:581c
        pass1_1028_bb56, // 1028:5820
        NULL, // FUN_1030_178e, // 1028:5824
        write_to_file_1028_b5ec, // 1028:5828
        file_1028_b81a, // 1028:582c
        pass1_1028_bc1c, // 1028:5830
        pass1_1028_bd38, // 1028:5834
        pass1_1028_bc90, // 1028:5838
        pass1_1028_bc7e, // 1028:583c
        pass1_1028_b514, // 1028:5840
        pass1_1028_be2a, // 1028:5844
        NULL, // FUN_1028_bf16, // 1028:5848
        NULL, // FUN_1028_57f2, // 1028:584c
        NULL, // FUN_1028_bf1e, // 1028:5850
        pass1_1028_be9e, // 1028:5854
        pass1_1028_bf22, // 1028:5858
        pass1_1028_bbf0, // 1028:585c
        pass1_1028_bc02, // 1028:5860
        pass1_1028_b5a8, // 1028:5864
        pass1_1028_b5ca, // 1028:5868
        NULL, // FUN_1028_b4e6, // 1028:586c
        NULL, // FUN_1028_b4ec, // 1028:5870
        pass1_1028_b46e, // 1028:5874
        pass1_1028_c64a, // 1028:5878
        pass1_1028_c522, // 1028:587c
        pass1_1028_ced2, // 1028:5880
};

void *addr_table_1028_58fe[] = {
        NULL, // FUN_1028_58d8, // 1028:58fe
        pass1_1028_bb56, // 1028:5902
        NULL, // FUN_1030_178e, // 1028:5906
        write_to_file_1028_b5ec, // 1028:590a
        file_1028_b81a, // 1028:590e
        pass1_1028_bc1c, // 1028:5912
        pass1_1028_bd38, // 1028:5916
        pass1_1028_bc90, // 1028:591a
        pass1_1028_bc7e, // 1028:591e
        pass1_1028_b514, // 1028:5922
        pass1_1028_be2a, // 1028:5926
        NULL, // FUN_1028_58d0, // 1028:592a
        NULL, // FUN_1028_58d4, // 1028:592e
        NULL, // FUN_1028_bf1e, // 1028:5932
        pass1_1028_be9e, // 1028:5936
        pass1_1028_bf22, // 1028:593a
        pass1_1028_bbf0, // 1028:593e
        pass1_1028_bc02, // 1028:5942
        pass1_1028_b5a8, // 1028:5946
        pass1_1028_b5ca, // 1028:594a
        NULL, // FUN_1028_b4e6, // 1028:594e
        NULL, // FUN_1028_b4ec, // 1028:5952
        pass1_1028_b46e, // 1028:5956
        pass1_1028_c64a, // 1028:595a
        pass1_1028_c522, // 1028:595e
        pass1_1028_ced2, // 1028:5962
};

void *addr_table_1028_59e0[] = {
        NULL, // FUN_1028_59ba, // 1028:59e0
        pass1_1028_bb56, // 1028:59e4
        NULL, // FUN_1030_178e, // 1028:59e8
        write_to_file_1028_b5ec, // 1028:59ec
        file_1028_b81a, // 1028:59f0
        pass1_1028_bc1c, // 1028:59f4
        pass1_1028_bd38, // 1028:59f8
        pass1_1028_bc90, // 1028:59fc
        pass1_1028_bc7e, // 1028:5a00
        pass1_1028_b514, // 1028:5a04
        pass1_1028_be2a, // 1028:5a08
        NULL, // FUN_1028_59b2, // 1028:5a0c
        NULL, // FUN_1028_59b6, // 1028:5a10
        NULL, // FUN_1028_bf1e, // 1028:5a14
        pass1_1028_be9e, // 1028:5a18
        pass1_1028_bf22, // 1028:5a1c
        pass1_1028_bbf0, // 1028:5a20
        pass1_1028_bc02, // 1028:5a24
        pass1_1028_b5a8, // 1028:5a28
        pass1_1028_b5ca, // 1028:5a2c
        NULL, //     FUN_1028_b4e6, // 1028:5a30
        NULL, //      FUN_1028_b4ec, // 1028:5a34
        pass1_1028_b46e, // 1028:5a38
        pass1_1028_c64a, // 1028:5a3c
        pass1_1028_c522, // 1028:5a40
        pass1_1028_ced2, // 1028:5a44
};

void *addr_table_1028_5bec[] = {
        pass1_1028_5bc6, // 1028:5bec
        pass1_1028_bb56, // 1028:5bf0
        NULL, // FUN_1030_178e, // 1028:5bf4
        write_to_file_1028_b5ec, // 1028:5bf8
        file_1028_b81a, // 1028:5bfc
        pass1_1028_bc1c, // 1028:5c00
        pass1_1028_bd38, // 1028:5c04
        pass1_1028_bc90, // 1028:5c08
        pass1_1028_bc7e, // 1028:5c0c
        pass1_1028_b514, // 1028:5c10
        pass1_1028_5b42, // 1028:5c14
        NULL, // FUN_1028_bf16, // 1028:5c18
        NULL, // FUN_1028_bf1a, // 1028:5c1c
        NULL, //   FUN_1028_bf1e, // 1028:5c20
        pass1_1028_be9e, // 1028:5c24
        pass1_1028_bf22, // 1028:5c28
        pass1_1028_bbf0, // 1028:5c2c
        pass1_1028_bc02, // 1028:5c30
        pass1_1028_b5a8, // 1028:5c34
        pass1_1028_b5ca, // 1028:5c38
        NULL, // FUN_1028_b4e6, // 1028:5c3c
        NULL, // FUN_1028_b4ec, // 1028:5c40
        pass1_1028_b46e, // 1028:5c44
        pass1_1028_c64a, // 1028:5c48
        pass1_1028_c522, // 1028:5c4c
        pass1_1028_ced2, // 1028:5c50

};


void *addr_table_1028_6054[] = {
        pass1_1028_602e, // 1028:6054
        pass1_1028_bb56, // 1028:6058
        NULL, // FUN_1030_178e, // 1028:605c
        write_to_file_1028_5f82, // 1028:6060
        NULL, // FUN_1028_5fc8, // 1028:6064
        pass1_1028_bc1c, // 1028:6068
        pass1_1028_bd38, // 1028:606c
        pass1_1028_bc90, // 1028:6070
        pass1_1028_bc7e, // 1028:6074
        pass1_1028_b514, // 1028:6078
        pass1_1028_6008, // 1028:607c
        NULL, // FUN_1028_bf16, // 1028:6080
        NULL, // FUN_1028_bf1a, // 1028:6084
        NULL, // FUN_1028_bf1e, // 1028:6088
        NULL, // FUN_1028_5f30, // 1028:608c
        pass1_1028_bf22, // 1028:6090
        pass1_1028_bbf0, // 1028:6094
        pass1_1028_bc02, // 1028:6098
        pass1_1028_b5a8, // 1028:609c
        pass1_1028_b5ca, // 1028:60a0
        NULL, // FUN_1028_b4e6, // 1028:60a4
        NULL, // FUN_1028_b4ec, // 1028:60a8
        pass1_1028_b46e, // 1028:60ac
        pass1_1028_c64a, // 1028:60b0
        pass1_1028_c522, // 1028:60b4
        pass1_1028_ced2, // 1028:60b8
};

void *addr_table_1028_42ec[] = {
        NULL, // FUN_1028_42c6, // 1028:42ec
        pass1_1028_bb56, // 1028:42f0
        NULL, // FUN_1030_178e, // 1028:42f4
        write_to_file_1028_b5ec, // 1028:42f8
        file_1028_b81a, // 1028:42fc
        pass1_1028_bc1c, // 1028:4300
        pass1_1028_bd38, // 1028:4304
        pass1_1028_bc90, // 1028:4308
        pass1_1028_bc7e, // 1028:430c
        pass1_1028_41ea, // 1028:4310
        pass1_1028_be2a, // 1028:4314
        NULL, // FUN_1028_bf16, // 1028:4318
        NULL, // FUN_1028_42c2, // 1028:431c
        NULL, // FUN_1028_bf1e, // 1028:4320
        pass1_1028_4194, // 1028:4324
        pass1_1028_bf22, // 1028:4328
        pass1_1028_bbf0, // 1028:432c
        pass1_1028_bc02, // 1028:4330
        pass1_1028_b5a8, // 1028:4334
        pass1_1028_b5ca, // 1028:4338
        NULL, // FUN_1028_b4e6, // 1028:433c
        NULL, // FUN_1028_b4ec, // 1028:4340
        pass1_1028_40b8, // 1028:4344
        pass1_1028_c64a, // 1028:4348
        pass1_1028_c522, // 1028:434c
        pass1_1028_ced2, // 1028:4350
};

void *addr_table_1028_446a[] = {
        pass1_1028_4444, // 1028:446a
        pass1_1028_bb56, // 1028:446e
        NULL, // FUN_1030_178e, // 1028:4472
        write_to_file_1028_b5ec, // 1028:4476
        file_1028_b81a, // 1028:447a
        pass1_1028_bc1c, // 1028:447e
        pass1_1028_43c2, // 1028:4482
        pass1_1028_bc90, // 1028:4486
        pass1_1028_bc7e, // 1028:448a
        pass1_1028_b514, // 1028:448e
        pass1_1028_be2a, // 1028:4492
        NULL, // FUN_1028_bf16, // 1028:4496
        NULL, // FUN_1028_bf1a, // 1028:449a
        pass1_1028_43f6, // 1028:449e
        pass1_1028_be9e, // 1028:44a2
        pass1_1028_bf22, // 1028:44a6
        pass1_1028_bbf0, // 1028:44aa
        pass1_1028_bc02, // 1028:44ae
        pass1_1028_b5a8, // 1028:44b2
        pass1_1028_b5ca, // 1028:44b6
        NULL, // FUN_1028_b4e6, // 1028:44ba
        pass1_1028_43a0, // 1028:44be
        pass1_1028_b46e, // 1028:44c2
        pass1_1028_c64a, // 1028:44c6
        pass1_1028_c522, // 1028:44ca
        pass1_1028_ced2, // 1028:44ce
};

void *addr_table_1028_4836[] = {
        pass1_1028_4810, // 1028:4836
        pass1_1028_bb56, // 1028:483a
        NULL, // FUN_1030_178e, // 1028:483e
        write_to_file_1028_b5ec, // 1028:4842
        file_1028_b81a, // 1028:4846
        pass1_1028_bc1c, // 1028:484a
        pass1_1028_bd38, // 1028:484e
        pass1_1028_bc90, // 1028:4852
        pass1_1028_bc7e, // 1028:4856
        pass1_1028_b514, // 1028:485a
        pass1_1028_be2a, // 1028:485e
        NULL, // FUN_1028_bf16, // 1028:4862
        NULL, // FUN_1028_bf1a, // 1028:4866
        NULL, // FUN_1028_bf1e, // 1028:486a
        pass1_1028_45b0, // 1028:486e
        pass1_1028_bf22, // 1028:4872
        pass1_1028_bbf0, // 1028:4876
        pass1_1028_4768, // 1028:487a
        pass1_1028_b5a8, // 1028:487e
        pass1_1028_b5ca, // 1028:4882
        NULL, // FUN_1028_b4e6, // 1028:4886
        NULL, // FUN_1028_b4ec, // 1028:488a
        pass1_1028_456e, // 1028:488e
        pass1_1028_c64a, // 1028:4892
        pass1_1028_c522, // 1028:4896
        pass1_1028_ced2, // 1028:489a
};

void *addr_table_1028_4942[] = {
        NULL, // FUN_1028_491c, // 1028:4942
        pass1_1028_bb56, // 1028:4946
        NULL, // FUN_1030_178e, // 1028:494a
        write_to_file_1028_b5ec, // 1028:494e
        file_1028_b81a, // 1028:4952
        pass1_1028_bc1c, // 1028:4956
        pass1_1028_bd38, // 1028:495a
        pass1_1028_bc90, // 1028:495e
        pass1_1028_48fa, // 1028:4962
        pass1_1028_b514, // 1028:4966
        NULL, // FUN_1028_490c, // 1028:496a
        NULL, // FUN_1028_4910, // 1028:496e
        NULL, // FUN_1028_4914, // 1028:4972
        NULL, // FUN_1028_bf1e, // 1028:4976
        pass1_1028_be9e, // 1028:497a
        NULL, // FUN_1028_4918, // 1028:497e
        pass1_1028_bbf0, // 1028:4982
        pass1_1028_bc02, // 1028:4986
        pass1_1028_b5a8, // 1028:498a
        pass1_1028_b5ca, // 1028:498e
        NULL, // FUN_1028_b4e6, // 1028:4992
        NULL, // FUN_1028_b4ec, // 1028:4996
        pass1_1028_b46e, // 1028:499a
        pass1_1028_c64a, // 1028:499e
        pass1_1028_c522, // 1028:49a2
        pass1_1028_ced2, // 1028:49a6

};

void *addr_table_1028_4b1c[] = {
        pass1_1028_4af6, // 1028:4b1c
        pass1_1028_bb56, // 1028:4b20
        NULL, // FUN_1030_178e, // 1028:4b24
        pass1_1028_4a1a, // 1028:4b28
        pass1_1028_4a5a, // 1028:4b2c
        pass1_1028_bc1c, // 1028:4b30
        pass1_1028_bd38, // 1028:4b34
        pass1_1028_bc90, // 1028:4b38
        pass1_1028_bc7e, // 1028:4b3c
        pass1_1028_b514, // 1028:4b40
        pass1_1028_be2a, // 1028:4b44
        NULL, // FUN_1028_bf16, // 1028:4b48
        pass1_1028_4aca, // 1028:4b4c
        NULL, // FUN_1028_bf1e, // 1028:4b50
        pass1_1028_be9e, // 1028:4b54
        pass1_1028_bf22, // 1028:4b58
        pass1_1028_bbf0, // 1028:4b5c
        pass1_1028_bc02, // 1028:4b60
        pass1_1028_b5a8, // 1028:4b64
        pass1_1028_b5ca, // 1028:4b68
        NULL, // FUN_1028_b4e6, // 1028:4b6c
        NULL, // FUN_1028_b4ec, // 1028:4b70
        pass1_1028_b46e, // 1028:4b74
        pass1_1028_c64a, // 1028:4b78
        pass1_1028_c522, // 1028:4b7c
        pass1_1028_ced2, // 1028:4b80
};

void *addr_table_1028_5070[] = {
        pass1_1028_504a, // 1028:5070
        pass1_1028_bb56, // 1028:5074
        NULL, // FUN_1030_178e, // 1028:5078
        write_to_file_1028_b5ec, // 1028:507c
        file_1028_b81a, // 1028:5080
        pass1_1028_bc1c, // 1028:5084
        pass1_1028_4db2, // 1028:5088
        pass1_1028_bc90, // 1028:508c
        pass1_1028_bc7e, // 1028:5090
        pass1_1028_4cd6, // 1028:5094
        pass1_1028_be2a, // 1028:5098
        NULL, // FUN_1028_bf16, // 1028:509c
        NULL, // FUN_1028_bf1a, // 1028:50a0
        pass1_1028_4f30, // 1028:50a4
        pass1_1028_be9e, // 1028:50a8
        pass1_1028_bf22, // 1028:50ac
        pass1_1028_bbf0, // 1028:50b0
        pass1_1028_bc02, // 1028:50b4
        pass1_1028_b5a8, // 1028:50b8
        pass1_1028_b5ca, // 1028:50bc
        NULL, // FUN_1028_b4e6, // 1028:50c0
        pass1_1028_4bd0, // 1028:50c4
        pass1_1028_4bf2, // 1028:50c8
        pass1_1028_c64a, // 1028:50cc
        pass1_1028_c522, // 1028:50d0
        pass1_1028_ced2, // 1028:50d4
};

void *addr_table_1028_34f6[] = {
        pass1_1028_34d0, // 1028:34f6
        pass1_1028_bb56, // 1028:34fa
        NULL, // FUN_1030_178e, // 1028:34fe
        write_to_file_1028_0234, // 1028:3502
        pass1_1028_0374, // 1028:3506
        pass1_1028_bc1c, // 1028:350a
        pass1_1028_bd38, // 1028:350e
        pass1_1028_bc90, // 1028:3512
        pass1_1028_bc7e, // 1028:3516
        pass1_1028_b514, // 1028:351a
        pass1_1028_01ec, // 1028:351e
        NULL, // FUN_1028_bf16, // 1028:3522
        pass1_1028_0582, // 1028:3526
        NULL, // FUN_1028_bf1e, // 1028:352a
        pass1_1028_0550, // 1028:352e
        pass1_1028_bf22, // 1028:3532
        pass1_1028_04ee, // 1028:3536
        pass1_1028_bc02, // 1028:353a
        pass1_1028_b5a8, // 1028:353e
        pass1_1028_b5ca, // 1028:3542
        NULL, // FUN_1028_b4e6, // 1028:3546
        NULL, // FUN_1028_b4ec, // 1028:354a
        pass1_1028_0176, // 1028:354e
        pass1_1028_c64a, // 1028:3552
        pass1_1028_c522, // 1028:3556
        pass1_1028_ced2, // 1028:355a

};

void *addr_table_1028_3608[] = {
        pass1_1028_35e2, // 1028:3608
        pass1_1028_bb56, // 1028:360c
        NULL, // FUN_1030_178e, // 1028:3610
        write_to_file_1028_b5ec, // 1028:3614
        file_1028_b81a, // 1028:3618
        pass1_1028_bc1c, // 1028:361c
        pass1_1028_bd38, // 1028:3620
        pass1_1028_bc90, // 1028:3624
        pass1_1028_bc7e, // 1028:3628
        pass1_1028_b514, // 1028:362c
        pass1_1028_be2a, // 1028:3630
        NULL, // FUN_1028_bf16, // 1028:3634
        NULL, // FUN_1028_bf1a, // 1028:3638
        pass1_1028_35b0, // 1028:363c
        pass1_1028_be9e, // 1028:3640
        pass1_1028_bf22, // 1028:3644
        pass1_1028_bbf0, // 1028:3648
        pass1_1028_bc02, // 1028:364c
        pass1_1028_b5a8, // 1028:3650
        pass1_1028_b5ca, // 1028:3654
        NULL, // FUN_1028_b4e6, // 1028:3658
        pass1_1028_35aa, // 1028:365c
        pass1_1028_b46e, // 1028:3660
        pass1_1028_c64a, // 1028:3664
        pass1_1028_c522, // 1028:3668
        pass1_1028_ced2, // 1028:366c

};

void *addr_table_1028_373e[] = {
        pass1_1028_3718, // 1028:373e
        pass1_1028_bb56, // 1028:3742
        NULL, // FUN_1030_178e, // 1028:3746
        write_to_file_1028_3d0e, // 1028:374a
        pass1_1028_3d92, // 1028:374e
        pass1_1028_bc1c, // 1028:3752
        pass1_1028_bd38, // 1028:3756
        pass1_1028_38d4, // 1028:375a
        pass1_1028_bc7e, // 1028:375e
        pass1_1028_b514, // 1028:3762
        pass1_1028_be2a, // 1028:3766
        NULL, // FUN_1028_bf16, // 1028:376a
        pass1_1028_3958, // 1028:376e
        NULL, // FUN_1028_bf1e, // 1028:3772
        pass1_1028_be9e, // 1028:3776
        pass1_1028_bf22, // 1028:377a
        pass1_1028_36bc, // 1028:377e
        pass1_1028_bc02, // 1028:3782
        pass1_1028_b5a8, // 1028:3786
        pass1_1028_b5ca, // 1028:378a
        NULL, // FUN_1028_b4e6, // 1028:378e
        NULL, // FUN_1028_b4ec, // 1028:3792
        pass1_1028_b46e, // 1028:3796
        pass1_1028_c64a, // 1028:379a
        pass1_1028_c522, // 1028:379e
        pass1_1028_ced2, // 1028:37a2
};

void *addr_table_1028_4004[] = {
        pass1_1028_3fde, // 1028:4004
        pass1_1028_bb56, // 1028:4008
        NULL, // FUN_1030_178e, // 1028:400c
        write_to_file_1028_b5ec, // 1028:4010
        file_1028_b81a, // 1028:4014
        pass1_1028_bc1c, // 1028:4018
        pass1_1028_bd38, // 1028:401c
        pass1_1028_bc90, // 1028:4020
        pass1_1028_bc7e, // 1028:4024
        pass1_1028_b514, // 1028:4028
        pass1_1028_be2a, // 1028:402c
        NULL, // FUN_1028_bf16, // 1028:4030
        pass1_1028_3f04, // 1028:4034
        NULL, // FUN_1028_bf1e, // 1028:4038
        pass1_1028_be9e, // 1028:403c
        pass1_1028_bf22, // 1028:4040
        pass1_1028_bbf0, // 1028:4044
        pass1_1028_bc02, // 1028:4048
        pass1_1028_b5a8, // 1028:404c
        pass1_1028_b5ca, // 1028:4050
        NULL, // FUN_1028_b4e6, // 1028:4054
        NULL, // FUN_1028_b4ec, // 1028:4058
        pass1_1028_b46e, // 1028:405c
        pass1_1028_c64a, // 1028:4060
        pass1_1028_c522, // 1028:4064
        pass1_1028_ced2, // 1028:4068
};

void *addr_table_1028_1eee[] = {
        pass1_1028_1ec8, // 1028:1eee
        pass1_1028_bb56, // 1028:1ef2
        NULL, // FUN_1030_178e, // 1028:1ef6
        write_to_file_1028_b5ec, // 1028:1efa
        file_1028_b81a, // 1028:1efe
        pass1_1028_1c22, // 1028:1f02
        pass1_1028_bd38, // 1028:1f06
        pass1_1028_bc90, // 1028:1f0a
        pass1_1028_bc7e, // 1028:1f0e
        pass1_1028_b514, // 1028:1f12
        pass1_1028_1c66, // 1028:1f16
        NULL, // FUN_1028_bf16, // 1028:1f1a
        NULL, // FUN_1028_bf1a, // 1028:1f1e
        NULL, // FUN_1028_bf1e, // 1028:1f22
        pass1_1028_be9e, // 1028:1f26
        pass1_1028_bf22, // 1028:1f2a
        pass1_1028_bbf0, // 1028:1f2e
        pass1_1028_bc02, // 1028:1f32
        pass1_1028_b5a8, // 1028:1f36
        pass1_1028_b5ca, // 1028:1f3a
        NULL, // FUN_1028_b4e6, // 1028:1f3e
        NULL, // FUN_1028_b4ec, // 1028:1f42
        pass1_1028_b46e, // 1028:1f46
        pass1_1028_1cca, // 1028:1f4a
        pass1_1028_1da4, // 1028:1f4e
        pass1_1028_1e8a, // 1028:1f52
};

void *addr_table_1028_264c[] = {
        pass1_1028_2626, // 1028:264c
        pass1_1028_bb56, // 1028:2650
        NULL, // FUN_1030_178e, // 1028:2654
        write_to_file_1028_b5ec, // 1028:2658
        file_1028_b81a, // 1028:265c
        pass1_1028_bc1c, // 1028:2660
        pass1_1028_bd38, // 1028:2664
        pass1_1028_bc90, // 1028:2668
        pass1_1028_bc7e, // 1028:266c
        pass1_1028_b514, // 1028:2670
        pass1_1028_be2a, // 1028:2674
        NULL, // FUN_1028_bf16, // 1028:2678
        NULL, // FUN_1028_bf1a, // 1028:267c
        NULL, // FUN_1028_bf1e, // 1028:2680
        pass1_1028_be9e, // 1028:2684
        pass1_1028_bf22, // 1028:2688
        pass1_1028_bbf0, // 1028:268c
        pass1_1028_bc02, // 1028:2690
        pass1_1028_b5a8, // 1028:2694
        pass1_1028_b5ca, // 1028:2698
        NULL, // FUN_1028_b4e6, // 1028:269c
        NULL, // FUN_1028_b4ec, // 1028:26a0
        pass1_1028_b46e, // 1028:26a4
        pass1_1028_c64a, // 1028:26a8
        pass1_1028_c522, // 1028:26ac
        pass1_1028_ced2, // 1028:26b0
};

void *addr_table_1028_2788[] = {
        pass1_1028_2762, // 1028:2788
        pass1_1028_bb56, // 1028:278c
        NULL, // FUN_1030_178e, // 1028:2790
        write_to_file_1028_b5ec, // 1028:2794
        file_1028_b81a, // 1028:2798
        pass1_1028_bc1c, // 1028:279c
        pass1_1028_bd38, // 1028:27a0
        pass1_1028_bc90, // 1028:27a4
        pass1_1028_bc7e, // 1028:27a8
        pass1_1028_b514, // 1028:27ac
        pass1_1028_2700, // 1028:27b0
        NULL, // FUN_1028_bf16, // 1028:27b4
        NULL, // FUN_1028_bf1a, // 1028:27b8
        NULL, // FUN_1028_bf1e, // 1028:27bc
        pass1_1028_272e, // 1028:27c0
        pass1_1028_bf22, // 1028:27c4
        pass1_1028_bbf0, // 1028:27c8
        pass1_1028_bc02, // 1028:27cc
        pass1_1028_b5a8, // 1028:27d0
        pass1_1028_b5ca, // 1028:27d4
        NULL, // FUN_1028_b4e6, // 1028:27d8
        NULL, // FUN_1028_b4ec, // 1028:27dc
        pass1_1028_b46e, // 1028:27e0
        pass1_1028_c64a, // 1028:27e4
        pass1_1028_c522, // 1028:27e8
        pass1_1028_ced2, // 1028:27ec
};

void *addr_table_1028_2a92[] = {
        pass1_1028_2a6c, // 1028:2a92
        pass1_1028_bb56, // 1028:2a96
        NULL, // FUN_1030_178e, // 1028:2a9a
        write_to_file_1028_b5ec, // 1028:2a9e
        file_1028_b81a, // 1028:2aa2
        pass1_1028_bc1c, // 1028:2aa6
        pass1_1028_bd38, // 1028:2aaa
        pass1_1028_bc90, // 1028:2aae
        pass1_1028_bc7e, // 1028:2ab2
        pass1_1028_b514, // 1028:2ab6
        pass1_1028_be2a, // 1028:2aba
        NULL, // FUN_1028_bf16, // 1028:2abe
        NULL, // FUN_1028_bf1a, // 1028:2ac2
        NULL, // FUN_1028_bf1e, // 1028:2ac6
        pass1_1028_be9e, // 1028:2aca
        pass1_1028_bf22, // 1028:2ace
        pass1_1028_bbf0, // 1028:2ad2
        pass1_1028_bc02, // 1028:2ad6
        pass1_1028_b5a8, // 1028:2ada
        pass1_1028_b5ca, // 1028:2ade
        NULL, // FUN_1028_b4e6, // 1028:2ae2
        NULL, // FUN_1028_b4ec, // 1028:2ae6
        pass1_1028_b46e, // 1028:2aea
        pass1_1028_2844, // 1028:2aee
        pass1_1028_c522, // 1028:2af2
        pass1_1028_ced2, // 1028:2af6

};

void *addr_table_1028_2b74[] = {
        pass1_1028_2b4e, // 1028:2b74
        pass1_1028_bb56, // 1028:2b78
        NULL, // FUN_1030_178e, // 1028:2b7c
        pass1_1030_de7c, // 1028:2b80
        pass1_1030_dec4, // 1028:2b84
        pass1_1028_bc1c, // 1028:2b88
        NULL, // FUN_1028_2b46, // 1028:2b8c
        pass1_1028_bc90, // 1028:2b90
        pass1_1028_bc7e, // 1028:2b94
        pass1_1028_b514, // 1028:2b98
        pass1_1028_be2a, // 1028:2b9c
        NULL, // FUN_1028_bf16, // 1028:2ba0
        NULL, // FUN_1028_2b4a, // 1028:2ba4
        NULL, // FUN_1028_bf1e, // 1028:2ba8
        pass1_1028_be9e, // 1028:2bac
        pass1_1028_bf22, // 1028:2bb0
        pass1_1028_bbf0, // 1028:2bb4
        pass1_1028_bc02, // 1028:2bb8
        pass1_1028_b5a8, // 1028:2bbc
        pass1_1028_b5ca, // 1028:2bc0
        NULL, // FUN_1028_b4e6, // 1028:2bc4
        NULL, // FUN_1028_b4ec, // 1028:2bc8
        pass1_1028_b46e, // 1028:2bcc
        pass1_1028_c64a, // 1028:2bd0
        pass1_1028_c522, // 1028:2bd4
        pass1_1028_ced2, // 1028:2bd8

};

void *addr_table_1028_341c[] = {
        pass1_1028_33f6, // 1028:341c
        pass1_1028_bb56, // 1028:3420
        NULL, // FUN_1030_178e, // 1028:3424
        write_to_file_1028_b5ec, // 1028:3428
        file_1028_b81a, // 1028:342c
        pass1_1028_bc1c, // 1028:3430
        pass1_1028_2e84, // 1028:3434
        pass1_1028_2c28, // 1028:3438
        pass1_1028_bc7e, // 1028:343c
        pass1_1028_b514, // 1028:3440
        pass1_1028_be2a, // 1028:3444
        NULL, // FUN_1028_bf16, // 1028:3448
        NULL, // FUN_1028_bf1a, // 1028:344c
        NULL, // FUN_1028_bf1e, // 1028:3450
        pass1_1028_2e40, // 1028:3454
        pass1_1028_bf22, // 1028:3458
        pass1_1028_bbf0, // 1028:345c
        pass1_1028_bc02, // 1028:3460
        pass1_1028_b5a8, // 1028:3464
        pass1_1028_b5ca, // 1028:3468
        NULL, // FUN_1028_b4e6, // 1028:346c
        NULL, // FUN_1028_b4ec, // 1028:3470
        pass1_1028_b46e, // 1028:3474
        pass1_1028_c64a, // 1028:3478
        pass1_1028_c522, // 1028:347c
        pass1_1028_ced2, // 1028:3480

};

void *addr_table_1028_0bbc[] = {
        pass1_1028_0b96, // 1028:0bbc
        pass1_1028_bb56, // 1028:0bc0
        NULL, // FUN_1030_178e, // 1028:0bc4
        write_to_file_1028_b5ec, // 1028:0bc8
        file_1028_b81a, // 1028:0bcc
        pass1_1028_bc1c, // 1028:0bd0
        pass1_1028_bd38, // 1028:0bd4
        pass1_1028_bc90, // 1028:0bd8
        pass1_1028_bc7e, // 1028:0bdc
        pass1_1028_b514, // 1028:0be0
        pass1_1028_be2a, // 1028:0be4
        NULL, // FUN_1028_0b8e, // 1028:0be8
        NULL, // FUN_1028_0b92, // 1028:0bec
        NULL, // FUN_1028_bf1e, // 1028:0bf0
        pass1_1028_be9e, // 1028:0bf4
        pass1_1028_bf22, // 1028:0bf8
        pass1_1028_bbf0, // 1028:0bfc
        pass1_1028_bc02, // 1028:0c00
        pass1_1028_b5a8, // 1028:0c04
        pass1_1028_b5ca, // 1028:0c08
        NULL, // FUN_1028_b4e6, // 1028:0c0c
        NULL, // FUN_1028_b4ec, // 1028:0c10
        pass1_1028_b46e, // 1028:0c14
        pass1_1028_c64a, // 1028:0c18
        pass1_1028_c522, // 1028:0c1c
        pass1_1028_ced2, // 1028:0c20

};

void *addr_table_1028_1724[] = {
        pass1_1028_16fe, // 1028:1724
        pass1_1028_bb56, // 1028:1728
        NULL, // FUN_1030_178e, // 1028:172c
        write_to_file_1028_1452, // 1028:1730
        pass1_1028_14d8, // 1028:1734
        pass1_1028_bc1c, // 1028:1738
        pass1_1028_bd38, // 1028:173c
        pass1_1028_bc90, // 1028:1740
        pass1_1028_bc7e, // 1028:1744
        pass1_1028_0d9c, // 1028:1748
        pass1_1028_0ea6, // 1028:174c
        pass1_1028_134a, // 1028:1750
        NULL, // FUN_1028_bf1a, // 1028:1754
        NULL, // FUN_1028_bf1e, // 1028:1758
        pass1_1028_0fa4, // 1028:175c
        pass1_1028_bf22, // 1028:1760
        pass1_1028_12be, // 1028:1764
        pass1_1028_bc02, // 1028:1768
        pass1_1028_b5a8, // 1028:176c
        pass1_1028_b5ca, // 1028:1770
        NULL, // FUN_1028_b4e6, // 1028:1774
        NULL, // FUN_1028_b4ec, // 1028:1778
        pass1_1028_0c84, // 1028:177c
        pass1_1028_c64a, // 1028:1780
        pass1_1028_c522, // 1028:1784
        pass1_1028_ced2, // 1028:1788

};

void *addr_table_1028_1b54[] = {
        pass1_1028_1b2e, // 1028:1b54
        pass1_1028_bb56, // 1028:1b58
        NULL, // FUN_1030_178e, // 1028:1b5c
        pass1_1030_de7c, // 1028:1b60
        pass1_1030_dec4, // 1028:1b64
        pass1_1028_bc1c, // 1028:1b68
        pass1_1028_17d8, // 1028:1b6c
        pass1_1028_1824, // 1028:1b70
        pass1_1028_1812, // 1028:1b74
        pass1_1028_b514, // 1028:1b78
        pass1_1028_be2a, // 1028:1b7c
        NULL, // FUN_1028_bf16, // 1028:1b80
        NULL, // FUN_1028_bf1a, // 1028:1b84
        NULL, // FUN_1028_bf1e, // 1028:1b88
        pass1_1028_199a, // 1028:1b8c
        pass1_1028_1b1e, // 1028:1b90
        pass1_1028_bbf0, // 1028:1b94
        pass1_1028_bc02, // 1028:1b98
        pass1_1028_b5a8, // 1028:1b9c
        pass1_1028_b5ca, // 1028:1ba0
        NULL, // FUN_1028_b4e6, // 1028:1ba4
        NULL, // FUN_1028_b4ec, // 1028:1ba8
        pass1_1028_b46e, // 1028:1bac
        pass1_1028_c64a, // 1028:1bb0
        pass1_1028_c522, // 1028:1bb4
        pass1_1028_ced2, // 1028:1bb8

};

//void *addr_table_1028_0ada[] = {
//        pass1_1028_0ab4, // 1028:0ada
//        pass1_1028_bb56, // 1028:0ade
//        NULL, // FUN_1030_178e, // 1028:0ae2
//        write_to_file_1028_b5ec, // 1028:0ae6
//        file_1028_b81a, // 1028:0aea
//        pass1_1028_bc1c, // 1028:0aee
//        pass1_1028_09b8, // 1028:0af2
//        pass1_1028_09d4, // 1028:0af6
//        pass1_1028_bc7e, // 1028:0afa
//        pass1_1028_b514, // 1028:0afe
//        pass1_1028_be2a, // 1028:0b02
//        NULL, // FUN_1028_bf16, // 1028:0b06
//        NULL, // FUN_1028_bf1a, // 1028:0b0a
//        NULL, // FUN_1028_bf1e, // 1028:0b0e
//        pass1_1028_be9e, // 1028:0b12
//        pass1_1028_bf22, // 1028:0b16
//        pass1_1028_bbf0, // 1028:0b1a
//        pass1_1028_bc02, // 1028:0b1e
//        pass1_1028_b5a8, // 1028:0b22
//        pass1_1028_b5ca, // 1028:0b26
//        NULL, // FUN_1028_b4e6, // 1028:0b2a
//        NULL, // FUN_1028_b4ec, // 1028:0b2e
//        pass1_1028_b46e, // 1028:0b32
//        pass1_1028_c64a, // 1028:0b36
//        pass1_1028_c522, // 1028:0b3a
//        pass1_1028_ced2, // 1028:0b3e
//
//};

void *addr_table_1040_b772[] = {
        pass1_1028_0ab4, // 1028:0ada
        pass1_1028_bb56, // 1028:0ade
        NULL, // FUN_1030_178e, // 1028:0ae2
        write_to_file_1028_b5ec, // 1028:0ae6
        file_1028_b81a, // 1028:0aea
        pass1_1028_bc1c, // 1028:0aee
        pass1_1028_09b8, // 1028:0af2
        pass1_1028_09d4, // 1028:0af6
        pass1_1028_bc7e, // 1028:0afa
        pass1_1028_b514, // 1028:0afe
        pass1_1028_be2a, // 1028:0b02
        NULL, // FUN_1028_bf16, // 1028:0b06
        NULL, // FUN_1028_bf1a, // 1028:0b0a
        NULL, // FUN_1028_bf1e, // 1028:0b0e
        pass1_1028_be9e, // 1028:0b12
        pass1_1028_bf22, // 1028:0b16
        pass1_1028_bbf0, // 1028:0b1a
        pass1_1028_bc02, // 1028:0b1e
        pass1_1028_b5a8, // 1028:0b22
        pass1_1028_b5ca, // 1028:0b26
        NULL, // FUN_1028_b4e6, // 1028:0b2a
        NULL, // FUN_1028_b4ec, // 1028:0b2e
        pass1_1028_b46e, // 1028:0b32
        pass1_1028_c64a, // 1028:0b36
        pass1_1028_c522, // 1028:0b3a
        pass1_1028_ced2, // 1028:0b3e
        pass1_1040_b74c, // 1040:b772
        pass1_1008_3a10, // 1040:b776
        unk_win_ui_op_1040_b230, // 1040:b77a
        pass1_1040_b316, // 1040:b77e
        pass1_1040_b54a, // 1040:b782
        destroy_window_1040_b726, // 1040:b786
        post_win_msg_1040_7f56, // 1040:b78a
        draw_op_1040_7bb2, // 1040:b78e
        post_win_msg_1040_7f1c, // 1040:b792
        pass1_1038_8848, // 1040:b796
        menu_ui_op_1040_7f86, // 1040:b79a
        win_help_1040_800c, // 1040:b79e
        pass1_1040_8054, // 1040:b7a2
        win_ui_op_1040_b372, // 1040:b7a6
        unk_win_ui_op_1040_8158, // 1040:b7aa
        check_dialog_msg_1040_81b6, // 1040:b7ae
        set_sys_modal_window_1040_81fe, // 1040:b7b2
        NULL, // FUN_1018_60ea, // 1040:b7b6
        pass1_1040_824a, // 1040:b7ba
        NULL, //    FUN_1040_8266, // 1040:b7be
        pass1_1040_78de, // 1040:b7c2
        NULL, //     FUN_1018_60ee, // 1040:b7c6
        NULL, //     FUN_1018_60f4, // 1040:b7ca
        pass1_1040_b4c8, // 1040:b7ce
        NULL, //    FUN_1038_8842, // 1040:b7d2
        NULL, //     FUN_1018_60fe, // 1040:b7d6
        pass1_1040_807e, // 1040:b7da
        show_win_1040_b43c, // 1040:b7de
        pass1_1040_b45e, // 1040:b7e2
        pass1_1040_b17c, // 1040:b7e6
        pass1_1038_884c, // 1040:b7ea

};

void *addr_table_1040_4466[] = {
        pass1_1040_4440, // 1040:4466
        pass1_1008_3a10, // 1040:446a
        win_ui_op_1040_410e, // 1040:446e
        pass1_1040_79c0, // 1040:4472
        post_win_msg_1040_7b3c, // 1040:4476
        win_ui_op_1040_42b2, // 1040:447a
        post_win_msg_1040_7f56, // 1040:447e
        draw_op_1040_7bb2, // 1040:4482
        post_win_msg_1040_7f1c, // 1040:4486
        get_win_rect_1040_43ea, // 1040:448a
        menu_ui_op_1040_7f86, // 1040:448e
        win_help_1040_800c, // 1040:4492
        pass1_1040_8054, // 1040:4496
        set_text_bk_color_1040_7e5e, // 1040:449a
        unk_win_ui_op_1040_8158, // 1040:449e
        check_dialog_msg_1040_81b6, // 1040:44a2
        set_sys_modal_window_1040_81fe, // 1040:44a6
        NULL, // FUN_1018_60ea, // 1040:44aa
        pass1_1040_824a, // 1040:44ae
        NULL, //    FUN_1040_8266, // 1040:44b2
        pass1_1040_78de, // 1040:44b6
        NULL, //     FUN_1018_60ee, // 1040:44ba
        NULL, //     FUN_1018_60f4, // 1040:44be
        NULL, //    FUN_1018_60fa, // 1040:44c2
        NULL, //     FUN_1038_a2a4, // 1040:44c6
        NULL, //    FUN_1018_60fe, // 1040:44ca
        pass1_1040_807e, // 1040:44ce

};

void *addr_table_1040_840c[] = {
        pass1_1040_83e6, // 1040:840c
        pass1_1008_3a10, // 1040:8410
        dialog_ui_fn_1040_78e2, // 1040:8414
        pass1_1040_79c0, // 1040:8418
        post_win_msg_1040_7b3c, // 1040:841c
        destroy_win_1040_7b98, // 1040:8420
        post_win_msg_1040_7f56, // 1040:8424
        draw_op_1040_7bb2, // 1040:8428
        post_win_msg_1040_7f1c, // 1040:842c
        destroy_win_1040_8212, // 1040:8430
        menu_ui_op_1040_7f86, // 1040:8434
        win_help_1040_800c, // 1040:8438
        pass1_1040_8054, // 1040:843c
        set_text_bk_color_1040_7e5e, // 1040:8440
        unk_win_ui_op_1040_8158, // 1040:8444
        check_dialog_msg_1040_81b6, // 1040:8448
        set_sys_modal_window_1040_81fe, // 1040:844c
        NULL, // FUN_1018_60ea, // 1040:8450
        pass1_1040_824a, // 1040:8454
        NULL, //    FUN_1040_8266, // 1040:8458
        pass1_1040_78de, // 1040:845c
        NULL, //    FUN_1018_60ee, // 1040:8460
        NULL, //    FUN_1018_60f4, // 1040:8464
        NULL, //    FUN_1018_60fa, // 1040:8468
        NULL, //    FUN_1038_a2a4, // 1040:846c
        NULL, //     FUN_1018_60fe, // 1040:8470
        pass1_1040_807e, // 1040:8474

};

void *addr_table_1040_4824[] = {
        pass1_1040_47fe, // 1040:4824
        pass1_1008_3a10, // 1040:4828
        pass1_1040_477e, // 1040:482c
        pass1_1040_b316, // 1040:4830
        pass1_1040_45e8, // 1040:4834
        destroy_window_1040_b726, // 1040:4838
        post_win_msg_1040_7f56, // 1040:483c
        draw_op_1040_7bb2, // 1040:4840
        post_win_msg_1040_7f1c, // 1040:4844
        pass1_1038_8848, // 1040:4848
        menu_ui_op_1040_7f86, // 1040:484c
        win_help_1040_800c, // 1040:4850
        pass1_1040_8054, // 1040:4854
        win_ui_op_1040_b372, // 1040:4858
        unk_win_ui_op_1040_8158, // 1040:485c
        check_dialog_msg_1040_81b6, // 1040:4860
        set_sys_modal_window_1040_81fe, // 1040:4864
        NULL, // FUN_1018_60ea, // 1040:4868
        pass1_1040_824a, // 1040:486c
        NULL, //      FUN_1040_8266, // 1040:4870
        pass1_1040_4766, // 1040:4874
        NULL, //    FUN_1018_60ee, // 1040:4878
        NULL, //    FUN_1018_60f4, // 1040:487c
        pass1_1040_b4c8, // 1040:4880
        NULL, //    FUN_1038_8842, // 1040:4884
        NULL, //    FUN_1018_60fe, // 1040:4888
        pass1_1040_807e, // 1040:488c
        show_win_1040_b43c, // 1040:4890
        pass1_1040_b45e, // 1040:4894
        pass1_1040_b17c, // 1040:4898
        pass1_1038_884c, // 1040:489c
};

void *addr_table_1040_2956[] = {
        pass1_1040_2930, // 1040:2956
        pass1_1008_3a10, // 1040:295a
        show_win_1040_2490, // 1040:295e
        pass1_1040_79c0, // 1040:2962
        win_ui_op_1040_2512, // 1040:2966
        destroy_win_1040_7b98, // 1040:296a
        post_win_msg_1040_7f56, // 1040:296e
        draw_op_1040_7bb2, // 1040:2972
        post_win_msg_1040_7f1c, // 1040:2976
        destroy_win_1040_8212, // 1040:297a
        menu_ui_op_1040_7f86, // 1040:297e
        win_help_1040_800c, // 1040:2982
        pass1_1040_8054, // 1040:2986
        draw_ui_op_1040_27cc, // 1040:298a
        unk_win_ui_op_1040_8158, // 1040:298e
        check_dialog_msg_1040_81b6, // 1040:2992
        set_sys_modal_window_1040_81fe, // 1040:2996
        NULL, // FUN_1018_60ea, // 1040:299a
        pass1_1040_824a, // 1040:299e
        NULL, //     FUN_1040_8266, // 1040:29a2
        pass1_1040_78de, // 1040:29a6
        NULL, //    FUN_1018_60ee, // 1040:29aa
        NULL, //    FUN_1018_60f4, // 1040:29ae
        NULL, //     FUN_1018_60fa, // 1040:29b2
        NULL, //     FUN_1038_a2a4, // 1040:29b6
        NULL, //      FUN_1018_60fe, // 1040:29ba
        pass1_1040_288e, // 1040:29be

};

void *addr_table_1040_3436[] = {
        pass1_1040_3410, // 1040:3436
        pass1_1008_3a10, // 1040:343a
        show_win_1040_2f5a, // 1040:343e
        pass1_1040_79c0, // 1040:3442
        win_ui_op_1040_311a, // 1040:3446
        pass1_1040_2f32, // 1040:344a
        post_win_msg_1040_7f56, // 1040:344e
        draw_op_1040_7bb2, // 1040:3452
        post_win_msg_1040_7f1c, // 1040:3456
        destroy_win_1040_8212, // 1040:345a
        menu_ui_op_1040_7f86, // 1040:345e
        win_help_1040_800c, // 1040:3462
        pass1_1040_8054, // 1040:3466
        set_text_bk_color_1040_7e5e, // 1040:346a
        unk_win_ui_op_1040_8158, // 1040:346e
        check_dialog_msg_1040_81b6, // 1040:3472
        set_sys_modal_window_1040_81fe, // 1040:3476
        NULL, // FUN_1018_60ea, // 1040:347a
        pass1_1040_824a, // 1040:347e
        NULL, //     FUN_1040_8266, // 1040:3482
        win_dlg_op_1040_2f90, // 1040:3486
        NULL, //    FUN_1018_60ee, // 1040:348a
        NULL, //     FUN_1018_60f4, // 1040:348e
        NULL, //    FUN_1018_60fa, // 1040:3492
        NULL, //    FUN_1038_a2a4, // 1040:3496
        NULL, //     FUN_1018_60fe, // 1040:349a
        pass1_1040_807e, // 1040:349e

};

void *addr_table_1040_38fa[] = {
        pass1_1040_38d4, // 1040:38fa
        pass1_1008_3a10, // 1040:38fe
        show_win_1040_355a, // 1040:3902
        pass1_1040_79c0, // 1040:3906
        message_box_op_1040_37f0, // 1040:390a
        pass1_1040_3532, // 1040:390e
        post_win_msg_1040_7f56, // 1040:3912
        draw_op_1040_7bb2, // 1040:3916
        post_win_msg_1040_7f1c, // 1040:391a
        destroy_win_1040_8212, // 1040:391e
        menu_ui_op_1040_7f86, // 1040:3922
        win_help_1040_800c, // 1040:3926
        pass1_1040_8054, // 1040:392a
        set_text_bk_color_1040_7e5e, // 1040:392e
        unk_win_ui_op_1040_8158, // 1040:3932
        check_dialog_msg_1040_81b6, // 1040:3936
        set_sys_modal_window_1040_81fe, // 1040:393a
        NULL, // FUN_1018_60ea, // 1040:393e
        pass1_1040_824a, // 1040:3942
        NULL, //    FUN_1040_8266, // 1040:3946
        set_win_text_1040_3590, // 1040:394a
        NULL, //    FUN_1018_60ee, // 1040:394e
        NULL, // FUN_1018_60f4, // 1040:3952
        NULL, // FUN_1018_60fa, // 1040:3956
        NULL, // FUN_1038_a2a4, // 1040:395a
        NULL, // FUN_1018_60fe, // 1040:395e
        pass1_1040_807e, // 1040:3962

};

void *addr_table_1040_17b0[] = {
        pass1_1040_178a, // 1040:17b0
        pass1_1008_3a10, // 1040:17b4
        win_ui_op_1040_12bc, // 1040:17b8
        pass1_1040_79c0, // 1040:17bc
        set_win_pos_1040_162a, // 1040:17c0
        win_msg_op_1040_13b2, // 1040:17c4
        post_win_msg_1040_7f56, // 1040:17c8
        draw_op_1040_7bb2, // 1040:17cc
        post_win_msg_1040_7f1c, // 1040:17d0
        NULL, // FUN_1040_1786, // 1040:17d4
        menu_ui_op_1040_7f86, // 1040:17d8
        win_help_1040_800c, // 1040:17dc
        pass1_1040_8054, // 1040:17e0
        set_text_bk_color_1040_7e5e, // 1040:17e4
        unk_win_ui_op_1040_8158, // 1040:17e8
        check_dialog_msg_1040_81b6, // 1040:17ec
        set_sys_modal_window_1040_81fe, // 1040:17f0
        NULL, //   FUN_1018_60ea, // 1040:17f4
        pass1_1040_824a, // 1040:17f8
        NULL, //    FUN_1040_8266, // 1040:17fc
        pass1_1040_78de, // 1040:1800
        NULL, //    FUN_1018_60ee, // 1040:1804
        NULL, //    FUN_1018_60f4, // 1040:1808
        NULL, //     FUN_1018_60fa, // 1040:180c
        NULL, //      FUN_1038_a2a4, // 1040:1810
        NULL, //   FUN_1018_60fe, // 1040:1814
        pass1_1040_807e, // 1040:1818

};

void *addr_table_1040_1c48[] = {
        pass1_1040_1c22, // 1040:1c48
        pass1_1008_3a10, // 1040:1c4c
        show_win_1040_18a2, // 1040:1c50
        pass1_1040_79c0, // 1040:1c54
        pass1_1040_1ab0, // 1040:1c58
        unk_win_ui_op_1040_19ea, // 1040:1c5c
        post_win_msg_1040_7f56, // 1040:1c60
        draw_op_1040_7bb2, // 1040:1c64
        post_win_msg_1040_7f1c, // 1040:1c68
        NULL, //    FUN_1040_1c1e, // 1040:1c6c
        menu_ui_op_1040_7f86, // 1040:1c70
        win_help_1040_800c, // 1040:1c74
        pass1_1040_8054, // 1040:1c78
        set_text_bk_color_1040_7e5e, // 1040:1c7c
        unk_win_ui_op_1040_8158, // 1040:1c80
        check_dialog_msg_1040_81b6, // 1040:1c84
        set_sys_modal_window_1040_81fe, // 1040:1c88
        NULL, // FUN_1018_60ea, // 1040:1c8c
        pass1_1040_824a, // 1040:1c90
        NULL, //    FUN_1040_8266, // 1040:1c94
        pass1_1040_78de, // 1040:1c98
        NULL, //     FUN_1018_60ee, // 1040:1c9c
        NULL, //     FUN_1018_60f4, // 1040:1ca0
        NULL, //     FUN_1018_60fa, // 1040:1ca4
        NULL, //     FUN_1038_a2a4, // 1040:1ca8
        NULL, //     FUN_1018_60fe, // 1040:1cac
        pass1_1040_807e, // 1040:1cb0

};

void *addr_table_1040_1eee[] = {
        pass1_1040_1ec8, // 1040:1eee
        pass1_1008_3a10, // 1040:1ef2
        show_win_1040_1d50, // 1040:1ef6
        pass1_1040_79c0, // 1040:1efa
        pass1_1040_1e80, // 1040:1efe
        unk_win_ui_op_1040_1d7a, // 1040:1f02
        post_win_msg_1040_7f56, // 1040:1f06
        draw_op_1040_7bb2, // 1040:1f0a
        post_win_msg_1040_7f1c, // 1040:1f0e
        NULL, //   FUN_1040_1ec4, // 1040:1f12
        menu_ui_op_1040_7f86, // 1040:1f16
        win_help_1040_800c, // 1040:1f1a
        pass1_1040_8054, // 1040:1f1e
        set_text_bk_color_1040_7e5e, // 1040:1f22
        unk_win_ui_op_1040_8158, // 1040:1f26
        check_dialog_msg_1040_81b6, // 1040:1f2a
        set_sys_modal_window_1040_81fe, // 1040:1f2e
        NULL, // FUN_1018_60ea, // 1040:1f32
        pass1_1040_824a, // 1040:1f36
        NULL, //    FUN_1040_8266, // 1040:1f3a
        pass1_1040_78de, // 1040:1f3e
        NULL, //     FUN_1018_60ee, // 1040:1f42
        NULL, //     FUN_1018_60f4, // 1040:1f46
        NULL, //     FUN_1018_60fa, // 1040:1f4a
        NULL, //     FUN_1038_a2a4, // 1040:1f4e
        NULL, //      FUN_1018_60fe, // 1040:1f52
        pass1_1040_807e, // 1040:1f56

};

void *addr_table_1040_237e[] = {
        pass1_1040_2358, // 1040:237e
        pass1_1008_3a10, // 1040:2382
        create_win_1040_20d4, // 1040:2386
        pass1_1040_79c0, // 1040:238a
        post_win_msg_1040_7b3c, // 1040:238e
        destroy_win_1040_7b98, // 1040:2392
        post_win_msg_1040_7f56, // 1040:2396
        draw_op_1040_7bb2, // 1040:239a
        post_win_msg_1040_7f1c, // 1040:239e
        destroy_win_1040_8212, // 1040:23a2
        menu_ui_op_1040_7f86, // 1040:23a6
        win_help_1040_800c, // 1040:23aa
        pass1_1040_8054, // 1040:23ae
        set_text_bk_color_1040_7e5e, // 1040:23b2
        unk_win_ui_op_1040_8158, // 1040:23b6
        check_dialog_msg_1040_81b6, // 1040:23ba
        set_sys_modal_window_1040_81fe, // 1040:23be
        NULL, // FUN_1018_60ea, // 1040:23c2
        pass1_1040_824a, // 1040:23c6
        NULL, //    FUN_1040_8266, // 1040:23ca
        pass1_1040_78de, // 1040:23ce
        NULL, //     FUN_1018_60ee, // 1040:23d2
        NULL, //      FUN_1018_60f4, // 1040:23d6
        NULL, //      FUN_1018_60fa, // 1040:23da
        mix_draw_op_1040_21d6, // 1040:23de
        NULL, //      FUN_1018_60fe, // 1040:23e2
        pass1_1040_807e, // 1040:23e6

};

void *addr_table_1038_e264[] = {
        pass1_1038_e23e, // 1038:e264
        pass1_1008_3a10, // 1038:e268
        check_radio_btn_show_win_1038_e19a, // 1038:e26c
        pass1_1040_79c0, // 1038:e270
        post_win_msg_1040_7b3c, // 1038:e274
        destroy_win_1038_e1dc, // 1038:e278
        post_win_msg_1040_7f56, // 1038:e27c
        draw_op_1040_7bb2, // 1038:e280
        post_win_msg_1040_7f1c, // 1038:e284
        NULL, //      FUN_1038_e23a, // 1038:e288
        menu_ui_op_1040_7f86, // 1038:e28c
        win_help_1040_800c, // 1038:e290
        pass1_1040_8054, // 1038:e294
        set_text_bk_color_1040_7e5e, // 1038:e298
        unk_win_ui_op_1040_8158, // 1038:e29c
        check_dialog_msg_1040_81b6, // 1038:e2a0
        set_sys_modal_window_1040_81fe, // 1038:e2a4
        NULL, //      FUN_1018_60ea, // 1038:e2a8
        pass1_1040_824a, // 1038:e2ac
        NULL, //     FUN_1040_8266, // 1038:e2b0
        pass1_1040_78de, // 1038:e2b4
        NULL, //     FUN_1018_60ee, // 1038:e2b8
        NULL, //     FUN_1018_60f4, // 1038:e2bc
        NULL, //    FUN_1018_60fa, // 1038:e2c0
        NULL, //    FUN_1038_a2a4, // 1038:e2c4
        NULL, //     FUN_1018_60fe, // 1038:e2c8
        pass1_1040_807e, // 1038:e2cc

};

void *addr_table_1038_e62e[] = {
        pass1_1038_e608, // 1038:e62e
        pass1_1008_3a10, // 1038:e632
        win_ui_op_1038_e348, // 1038:e636
        pass1_1040_79c0, // 1038:e63a
        pass1_1038_e4bc, // 1038:e63e
        destroy_win_1040_7b98, // 1038:e642
        post_win_msg_1040_7f56, // 1038:e646
        draw_op_1040_7bb2, // 1038:e64a
        post_win_msg_1040_7f1c, // 1038:e64e
        destroy_win_1040_8212, // 1038:e652
        menu_ui_op_1040_7f86, // 1038:e656
        win_help_1040_800c, // 1038:e65a
        pass1_1040_8054, // 1038:e65e
        set_text_bk_color_1040_7e5e, // 1038:e662
        unk_win_ui_op_1040_8158, // 1038:e666
        check_dialog_msg_1040_81b6, // 1038:e66a
        set_sys_modal_window_1040_81fe, // 1038:e66e
        NULL, // FUN_1018_60ea, // 1038:e672
        pass1_1040_824a, // 1038:e676
        NULL, //   FUN_1040_8266, // 1038:e67a
        pass1_1040_78de, // 1038:e67e
        NULL, //     FUN_1018_60ee, // 1038:e682
        NULL, //     FUN_1018_60f4, // 1038:e686
        NULL, //     FUN_1018_60fa, // 1038:e68a
        NULL, //   FUN_1038_a2a4, // 1038:e68e
        NULL, //      FUN_1018_60fe, // 1038:e692
        pass1_1040_807e, // 1038:e696

};

void *addr_table_1038_e92e[] = {
        pass1_1038_e908, // 1038:e92e
        pass1_1008_3a10, // 1038:e932
        unk_win_ui_op_1038_e71c, // 1038:e936
        pass1_1040_79c0, // 1038:e93a
        post_win_msg_1040_7b3c, // 1038:e93e
        chk_is_dlg_btn_checked_1038_e7a0, // 1038:e942
        post_win_msg_1040_7f56, // 1038:e946
        draw_op_1040_7bb2, // 1038:e94a
        post_win_msg_1040_7f1c, // 1038:e94e
        NULL, //      FUN_1038_e904, // 1038:e952
        menu_ui_op_1040_7f86, // 1038:e956
        win_help_1040_800c, // 1038:e95a
        pass1_1040_8054, // 1038:e95e
        set_text_bk_color_1040_7e5e, // 1038:e962
        unk_win_ui_op_1040_8158, // 1038:e966
        check_dialog_msg_1040_81b6, // 1038:e96a
        set_sys_modal_window_1040_81fe, // 1038:e96e
        NULL, //   FUN_1018_60ea, // 1038:e972
        pass1_1040_824a, // 1038:e976
        NULL, //      FUN_1040_8266, // 1038:e97a
        pass1_1040_78de, // 1038:e97e
        NULL, //     FUN_1018_60ee, // 1038:e982
        NULL, //     FUN_1018_60f4, // 1038:e986
        NULL, //     FUN_1018_60fa, // 1038:e98a
        NULL, //     FUN_1038_a2a4, // 1038:e98e
        NULL, //     FUN_1018_60fe, // 1038:e992
        pass1_1040_807e, // 1038:e996

};

void *addr_table_1038_eb32[] = {
        pass1_1038_eb0c, // 1038:eb32
        pass1_1008_3a10, // 1038:eb36
        win_ui_op_1038_ea18, // 1038:eb3a
        pass1_1040_79c0, // 1038:eb3e
        post_win_msg_1040_7b3c, // 1038:eb42
        win_ui_op_1038_eaa2, // 1038:eb46
        post_win_msg_1040_7f56, // 1038:eb4a
        draw_op_1040_7bb2, // 1038:eb4e
        post_win_msg_1040_7f1c, // 1038:eb52
        NULL, //       FUN_1038_eb08, // 1038:eb56
        menu_ui_op_1040_7f86, // 1038:eb5a
        win_help_1040_800c, // 1038:eb5e
        pass1_1040_8054, // 1038:eb62
        set_text_bk_color_1040_7e5e, // 1038:eb66
        unk_win_ui_op_1040_8158, // 1038:eb6a
        check_dialog_msg_1040_81b6, // 1038:eb6e
        set_sys_modal_window_1040_81fe, // 1038:eb72
        NULL, //      FUN_1018_60ea, // 1038:eb76
        pass1_1040_824a, // 1038:eb7a
        NULL, //    FUN_1040_8266, // 1038:eb7e
        pass1_1040_78de, // 1038:eb82
        NULL, //    FUN_1018_60ee, // 1038:eb86
        NULL, //      FUN_1018_60f4, // 1038:eb8a
        NULL, //   FUN_1018_60fa, // 1038:eb8e
        NULL, //    FUN_1038_a2a4, // 1038:eb92
        NULL, //    FUN_1018_60fe, // 1038:eb96
        pass1_1040_807e, // 1038:eb9a

};

void *addr_table_1038_ee6e[] = {
        pass1_1038_ee48, // 1038:ee6e
        pass1_1008_3a10, // 1038:ee72
        NULL, //    FUN_1038_ec16, // 1038:ee76
        pass1_1040_79c0, // 1038:ee7a
        send_msg_1038_ed8a, // 1038:ee7e
        destroy_win_1040_7b98, // 1038:ee82
        post_win_msg_1040_7f56, // 1038:ee86
        draw_op_1040_7bb2, // 1038:ee8a
        post_win_msg_1040_7f1c, // 1038:ee8e
        destroy_win_1040_8212, // 1038:ee92
        menu_ui_op_1040_7f86, // 1038:ee96
        win_help_1040_800c, // 1038:ee9a
        pass1_1040_8054, // 1038:ee9e
        set_text_bk_color_1040_7e5e, // 1038:eea2
        unk_win_ui_op_1040_8158, // 1038:eea6
        check_dialog_msg_1040_81b6, // 1038:eeaa
        set_sys_modal_window_1040_81fe, // 1038:eeae
        NULL, // FUN_1018_60ea, // 1038:eeb2
        pass1_1040_824a, // 1038:eeb6
        NULL, //    FUN_1040_8266, // 1038:eeba
        pass1_1040_78de, // 1038:eebe
        NULL, //    FUN_1018_60ee, // 1038:eec2
        NULL, //    FUN_1018_60f4, // 1038:eec6
        NULL, //   FUN_1018_60fa, // 1038:eeca
        NULL, //    FUN_1038_a2a4, // 1038:eece
        NULL, //     FUN_1018_60fe, // 1038:eed2
        pass1_1040_807e, // 1038:eed6

};

void *addr_table_1038_cc9a[] = {
        pass1_1038_cc74, // 1038:cc9a
        pass1_1008_3a10, // 1038:cc9e
        show_win_1038_cb5c, // 1038:cca2
        pass1_1040_79c0, // 1038:cca6
        destroy_window_1038_cc00, // 1038:ccaa
        destroy_win_1040_7b98, // 1038:ccae
        post_win_msg_1040_7f56, // 1038:ccb2
        draw_op_1040_7bb2, // 1038:ccb6
        post_win_msg_1040_7f1c, // 1038:ccba
        destroy_win_1040_8212, // 1038:ccbe
        menu_ui_op_1040_7f86, // 1038:ccc2
        win_help_1040_800c, // 1038:ccc6
        pass1_1040_8054, // 1038:ccca
        set_text_bk_color_1040_7e5e, // 1038:ccce
        unk_win_ui_op_1040_8158, // 1038:ccd2
        check_dialog_msg_1040_81b6, // 1038:ccd6
        set_sys_modal_window_1040_81fe, // 1038:ccda
        NULL, // FUN_1018_60ea, // 1038:ccde
        pass1_1040_824a, // 1038:cce2
        NULL, //    FUN_1040_8266, // 1038:cce6
        pass1_1040_78de, // 1038:ccea
        NULL, //    FUN_1018_60ee, // 1038:ccee
        NULL, //   FUN_1018_60f4, // 1038:ccf2
        NULL, //   FUN_1018_60fa, // 1038:ccf6
        NULL, //    FUN_1038_a2a4, // 1038:ccfa
        NULL, //     FUN_1018_60fe, // 1038:ccfe
        pass1_1040_807e, // 1038:cd02

};

void *addr_table_1038_cf00[] = {
        pass1_1038_ceda, // 1038:cf00
        pass1_1008_3a10, // 1038:cf04
        destroy_window_1038_cd88, // 1038:cf08
        pass1_1040_79c0, // 1038:cf0c
        post_win_msg_1040_7b3c, // 1038:cf10
        check_dlg_btn_checked_1038_cdd6, // 1038:cf14
        post_win_msg_1040_7f56, // 1038:cf18
        draw_op_1040_7bb2, // 1038:cf1c
        post_win_msg_1040_7f1c, // 1038:cf20
        NULL, //    FUN_1038_ced6, // 1038:cf24
        menu_ui_op_1040_7f86, // 1038:cf28
        win_help_1040_800c, // 1038:cf2c
        pass1_1040_8054, // 1038:cf30
        set_text_bk_color_1040_7e5e, // 1038:cf34
        unk_win_ui_op_1040_8158, // 1038:cf38
        check_dialog_msg_1040_81b6, // 1038:cf3c
        set_sys_modal_window_1040_81fe, // 1038:cf40
        NULL, // FUN_1018_60ea, // 1038:cf44
        pass1_1040_824a, // 1038:cf48
        NULL, //    FUN_1040_8266, // 1038:cf4c
        pass1_1040_78de, // 1038:cf50
        NULL, //    FUN_1018_60ee, // 1038:cf54
        NULL, //     FUN_1018_60f4, // 1038:cf58
        NULL, //    FUN_1018_60fa, // 1038:cf5c
        NULL, // FUN_1038_a2a4, // 1038:cf60
        NULL, // FUN_1018_60fe, // 1038:cf64
        pass1_1040_807e, // 1038:cf68
};

void *addr_table_1038_d23e[] = {
        pass1_1038_d218, // 1038:d23e
};

void *addr_table_1038_d6ea[] = {
        pass1_1038_d6c4, // 1038:d6ea
        pass1_1008_3a10, // 1038:d6ee
        win_ui_op_1038_d2a2, // 1038:d6f2
        pass1_1040_79c0, // 1038:d6f6
        unk_win_ui_op_1038_d400, // 1038:d6fa
        destroy_win_1040_7b98, // 1038:d6fe
        post_win_msg_1040_7f56, // 1038:d702
        draw_op_1040_7bb2, // 1038:d706
        post_win_msg_1040_7f1c, // 1038:d70a
        destroy_win_1040_8212, // 1038:d70e
        menu_ui_op_1040_7f86, // 1038:d712
        win_help_1040_800c, // 1038:d716
        pass1_1040_8054, // 1038:d71a
        set_text_bk_color_1040_7e5e, // 1038:d71e
        unk_win_ui_op_1040_8158, // 1038:d722
        check_dialog_msg_1040_81b6, // 1038:d726
        set_sys_modal_window_1040_81fe, // 1038:d72a
        NULL, // FUN_1018_60ea, // 1038:d72e
        pass1_1040_824a, // 1038:d732
        NULL, // FUN_1040_8266, // 1038:d736
        pass1_1040_78de, // 1038:d73a
        NULL, // FUN_1018_60ee, // 1038:d73e
        NULL, // FUN_1018_60f4, // 1038:d742
        NULL, // FUN_1018_60fa, // 1038:d746
        NULL, // FUN_1038_a2a4, // 1038:d74a
        NULL, // FUN_1018_60fe, // 1038:d74e
        pass1_1040_807e, // 1038:d752

};

void *addr_table_1038_e0d4[] = {
        pass1_1038_e0ae, // 1038:e0d4
        post_win_msg_1038_d840, // 1038:e0d8
        NULL, // FUN_1038_d8ae, // 1038:e0dc
        pass1_1040_79c0, // 1038:e0e0
        unk_win_sys_op_1038_da68, // 1038:e0e4
        destroy_win_1040_7b98, // 1038:e0e8
        post_win_msg_1040_7f56, // 1038:e0ec
        draw_op_1040_7bb2, // 1038:e0f0
        post_win_msg_1040_7f1c, // 1038:e0f4
        destroy_win_1040_8212, // 1038:e0f8
        menu_ui_op_1040_7f86, // 1038:e0fc
        win_help_1040_800c, // 1038:e100
        pass1_1040_8054, // 1038:e104
        set_text_bk_color_1040_7e5e, // 1038:e108
        unk_win_ui_op_1040_8158, // 1038:e10c
        check_dialog_msg_1040_81b6, // 1038:e110
        set_sys_modal_window_1040_81fe, // 1038:e114
        NULL, // FUN_1018_60ea, // 1038:e118
        pass1_1040_824a, // 1038:e11c
        NULL, // FUN_1040_8266, // 1038:e120
        pass1_1040_78de, // 1038:e124
        NULL, // FUN_1018_60ee, // 1038:e128
        NULL, // FUN_1018_60f4, // 1038:e12c
        NULL, // FUN_1018_60fa, // 1038:e130
        NULL, // FUN_1038_a2a4, // 1038:e134
        NULL, // FUN_1018_60fe, // 1038:e138
        pass1_1040_807e, // 1038:e13c

};

void *addr_table_1038_bd70[] = {
        pass1_1038_bd4a, // 1038:bd70
        pass1_1008_3a10, // 1038:bd74
        win_ui_op_1038_b81c, // 1038:bd78
        pass1_1040_79c0, // 1038:bd7c
        win_ui_op_1038_b922, // 1038:bd80
        destroy_win_1040_7b98, // 1038:bd84
        post_win_msg_1040_7f56, // 1038:bd88
        draw_op_1040_7bb2, // 1038:bd8c
        post_win_msg_1040_7f1c, // 1038:bd90
        destroy_win_1040_8212, // 1038:bd94
        menu_ui_op_1040_7f86, // 1038:bd98
        win_help_1040_800c, // 1038:bd9c
        pass1_1040_8054, // 1038:bda0
        set_text_bk_color_1040_7e5e, // 1038:bda4
        unk_win_ui_op_1040_8158, // 1038:bda8
        check_dialog_msg_1040_81b6, // 1038:bdac
        set_sys_modal_window_1040_81fe, // 1038:bdb0
        NULL, // FUN_1018_60ea, // 1038:bdb4
        pass1_1040_824a, // 1038:bdb8
        NULL, // FUN_1040_8266, // 1038:bdbc
        pass1_1040_78de, // 1038:bdc0
        NULL, // FUN_1018_60ee, // 1038:bdc4
        NULL, // FUN_1018_60f4, // 1038:bdc8
        NULL, // FUN_1018_60fa, // 1038:bdcc
        NULL, // FUN_1038_a2a4, // 1038:bdd0
        NULL, // FUN_1018_60fe, // 1038:bdd4
        pass1_1038_bca8, // 1038:bdd8
};

void *addr_table_1038_c436[] = {
        pass1_1038_c410, // 1038:c436
        pass1_1008_3a10, // 1038:c43a
        show_win_1038_c044, // 1038:c43e
        pass1_1040_79c0, // 1038:c442
        msg_box_op_1038_c07a, // 1038:c446
        pass1_1038_be76, // 1038:c44a
        post_win_msg_1040_7f56, // 1038:c44e
        draw_op_1040_7bb2, // 1038:c452
        post_win_msg_1040_7f1c, // 1038:c456
        destroy_win_1040_8212, // 1038:c45a
        menu_ui_op_1040_7f86, // 1038:c45e
        win_help_1040_800c, // 1038:c462
        pass1_1040_8054, // 1038:c466
        set_text_bk_color_1040_7e5e, // 1038:c46a
        unk_win_ui_op_1040_8158, // 1038:c46e
        check_dialog_msg_1040_81b6, // 1038:c472
        set_sys_modal_window_1040_81fe, // 1038:c476
        NULL, // FUN_1018_60ea, // 1038:c47a
        pass1_1040_824a, // 1038:c47e
        NULL, // FUN_1040_8266, // 1038:c482
        win_dlg_op_1038_bea4, // 1038:c486
        NULL, // FUN_1018_60ee, // 1038:c48a
        NULL, // FUN_1018_60f4, // 1038:c48e
        NULL, // FUN_1018_60fa, // 1038:c492
        NULL, // FUN_1038_a2a4, // 1038:c496
        NULL, // FUN_1018_60fe, // 1038:c49a
        pass1_1040_807e, // 1038:c49e
};

void *addr_table_1038_c74c[] = {
        pass1_1038_c726, // 1038:c74c
        pass1_1008_3a10, // 1038:c750
        show_win_1038_c558, // 1038:c754
        pass1_1040_79c0, // 1038:c758
        message_box_op_1038_c672, // 1038:c75c
        pass1_1038_c52a, // 1038:c760
        post_win_msg_1040_7f56, // 1038:c764
        draw_op_1040_7bb2, // 1038:c768
        post_win_msg_1040_7f1c, // 1038:c76c
        destroy_win_1040_8212, // 1038:c770
        menu_ui_op_1040_7f86, // 1038:c774
        win_help_1040_800c, // 1038:c778
        pass1_1040_8054, // 1038:c77c
        set_text_bk_color_1040_7e5e, // 1038:c780
        unk_win_ui_op_1040_8158, // 1038:c784
        check_dialog_msg_1040_81b6, // 1038:c788
        set_sys_modal_window_1040_81fe, // 1038:c78c
        NULL, // FUN_1018_60ea, // 1038:c790
        pass1_1040_824a, // 1038:c794
        NULL, // FUN_1040_8266, // 1038:c798
        win_dlg_op_1038_c58e, // 1038:c79c
        NULL, // FUN_1018_60ee, // 1038:c7a0
        NULL, // FUN_1018_60f4, // 1038:c7a4
        NULL, // FUN_1018_60fa, // 1038:c7a8
        NULL, // FUN_1038_a2a4, // 1038:c7ac
        NULL, // FUN_1018_60fe, // 1038:c7b0
        pass1_1040_807e, // 1038:c7b4
};

void *addr_table_1038_ca6c[] = {
        pass1_1038_ca46, // 1038:ca6c
        pass1_1008_3a10, // 1038:ca70
        win_ui_op_1038_c89c, // 1038:ca74
        pass1_1040_79c0, // 1038:ca78
        destroy_window_1038_c836, // 1038:ca7c
        win_dlg_op_1038_c95e, // 1038:ca80
        post_win_msg_1040_7f56, // 1038:ca84
        draw_op_1040_7bb2, // 1038:ca88
        post_win_msg_1040_7f1c, // 1038:ca8c
        NULL, // FUN_1038_ca42, // 1038:ca90
        menu_ui_op_1040_7f86, // 1038:ca94
        win_help_1040_800c, // 1038:ca98
        pass1_1040_8054, // 1038:ca9c
        set_text_bk_color_1040_7e5e, // 1038:caa0
        unk_win_ui_op_1040_8158, // 1038:caa4
        check_dialog_msg_1040_81b6, // 1038:caa8
        set_sys_modal_window_1040_81fe, // 1038:caac
        NULL, // FUN_1018_60ea, // 1038:cab0
        pass1_1040_824a, // 1038:cab4
        NULL, // FUN_1040_8266, // 1038:cab8
        pass1_1040_78de, // 1038:cabc
        NULL, // FUN_1018_60ee, // 1038:cac0
        NULL, // FUN_1018_60f4, // 1038:cac4
        NULL, // FUN_1018_60fa, // 1038:cac8
        NULL, // FUN_1038_a2a4, // 1038:cacc
        NULL, // FUN_1018_60fe, // 1038:cad0
        pass1_1040_807e, // 1038:cad4
};

void *addr_table_1038_a2d0[] = {
        pass1_1038_a2aa, // 1038:a2d0
        pass1_1038_a174, // 1038:a2d4
        dialog_ui_fn_1040_78e2, // 1038:a2d8
        pass1_1040_79c0, // 1038:a2dc
        post_win_msg_1040_7b3c, // 1038:a2e0
        destroy_win_1040_7b98, // 1038:a2e4
        post_win_msg_1040_7f56, // 1038:a2e8
        draw_op_1040_7bb2, // 1038:a2ec
        post_win_msg_1040_7f1c, // 1038:a2f0
        destroy_win_1040_8212, // 1038:a2f4
        menu_ui_op_1040_7f86, // 1038:a2f8
        win_help_1040_800c, // 1038:a2fc
        pass1_1040_8054, // 1038:a300
        set_text_bk_color_1040_7e5e, // 1038:a304
        unk_win_ui_op_1040_8158, // 1038:a308
        check_dialog_msg_1040_81b6, // 1038:a30c
        set_sys_modal_window_1040_81fe, // 1038:a310
        NULL, // FUN_1018_60ea, // 1038:a314
        pass1_1040_824a, // 1038:a318
        NULL, // FUN_1040_8266, // 1038:a31c
        pass1_1040_78de, // 1038:a320
        NULL, // FUN_1018_60ee, // 1038:a324
        NULL, // FUN_1018_60f4, // 1038:a328
        NULL, // FUN_1018_60fa, // 1038:a32c
        NULL, // FUN_1038_a2a4, // 1038:a330
        NULL, // FUN_1018_60fe, // 1038:a334
        pass1_1040_807e, // 1038:a338
};

void *addr_table_1038_ad72[] = {
        pass1_1038_ad4c, // 1038:ad72
        pass1_1008_3a10, // 1038:ad76
        dialog_ui_fn_1040_78e2, // 1038:ad7a
        pass1_1040_79c0, // 1038:ad7e
        post_win_msg_1040_7b3c, // 1038:ad82
        destroy_win_1040_7b98, // 1038:ad86
        post_win_msg_1040_7f56, // 1038:ad8a
        draw_op_1040_7bb2, // 1038:ad8e
        post_win_msg_1040_7f1c, // 1038:ad92
        destroy_win_1040_8212, // 1038:ad96
        menu_ui_op_1040_7f86, // 1038:ad9a
        win_help_1040_800c, // 1038:ad9e
        pass1_1040_8054, // 1038:ada2
        unk_win_ui_op_1038_ac38, // 1038:ada6
        unk_win_ui_op_1040_8158, // 1038:adaa
        check_dialog_msg_1040_81b6, // 1038:adae
        set_sys_modal_window_1040_81fe, // 1038:adb2
        NULL, // FUN_1018_60ea, // 1038:adb6
        pass1_1040_824a, // 1038:adba
        NULL, // FUN_1040_8266, // 1038:adbe
        pass1_1040_78de, // 1038:adc2
        NULL, // FUN_1018_60ee, // 1038:adc6
        NULL, // FUN_1018_60f4, // 1038:adca
        NULL, // FUN_1018_60fa, // 1038:adce
        NULL, // FUN_1038_a2a4, // 1038:add2
        NULL, // FUN_1018_60fe, // 1038:add6
        pass1_1040_807e, // 1038:adda
};

void *addr_table_1038_a0b6[] = {
        pass1_1038_a090, // 1038:a0b6
        pass1_1008_3a10, // 1038:a0ba
        show_win_1038_9fd0, // 1038:a0be
        pass1_1040_79c0, // 1038:a0c2
        post_win_msg_1040_7b3c, // 1038:a0c6
        destroy_window_1038_a072, // 1038:a0ca
        post_win_msg_1040_7f56, // 1038:a0ce
        draw_op_1040_7bb2, // 1038:a0d2
        post_win_msg_1040_7f1c, // 1038:a0d6
        NULL, // FUN_1038_a08c, // 1038:a0da
        menu_ui_op_1040_7f86, // 1038:a0de
        win_help_1040_800c, // 1038:a0e2
        pass1_1040_8054, // 1038:a0e6
        set_text_bk_color_1040_7e5e, // 1038:a0ea
        unk_win_ui_op_1040_8158, // 1038:a0ee
        check_dialog_msg_1040_81b6, // 1038:a0f2
        set_sys_modal_window_1040_81fe, // 1038:a0f6
        NULL, // FUN_1018_60ea, // 1038:a0fa
        pass1_1040_824a, // 1038:a0fe
        NULL, // FUN_1040_8266, // 1038:a102
        pass1_1040_78de, // 1038:a106
        NULL, // FUN_1018_60ee, // 1038:a10a
        NULL, // FUN_1018_60f4, // 1038:a10e
        NULL, // FUN_1018_60fa, // 1038:a112
        call_fn_ptr_1038_9ffa, // 1038:a116
        NULL, // FUN_1018_60fe, // 1038:a11a
        pass1_1040_807e, // 1038:a11e
};

void *addr_table_1038_99a2[] = {
        pass1_1038_997c, // 1038:99a2
        pass1_1008_3a10, // 1038:99a6
        win_dlg_op_1038_9294, // 1038:99aa
        pass1_1040_b316, // 1038:99ae
        draw_op_1038_92f6, // 1038:99b2
        win_ui_op_1038_977a, // 1038:99b6
        post_win_msg_1040_7f56, // 1038:99ba
        draw_op_1040_7bb2, // 1038:99be
        post_win_msg_1040_7f1c, // 1038:99c2
        pass1_1038_8848, // 1038:99c6
        menu_ui_op_1040_7f86, // 1038:99ca
        win_help_1040_800c, // 1038:99ce
        pass1_1040_8054, // 1038:99d2
        win_ui_op_1040_b372, // 1038:99d6
        unk_win_ui_op_1040_8158, // 1038:99da
        check_dialog_msg_1040_81b6, // 1038:99de
        set_sys_modal_window_1040_81fe, // 1038:99e2
        NULL, // FUN_1018_60ea, // 1038:99e6
        pass1_1040_824a, // 1038:99ea
        NULL, // FUN_1040_8266, // 1038:99ee
        pass1_1038_927c, // 1038:99f2
        send_dlg_item_int_1038_94da, // 1038:99f6
        NULL, // FUN_1018_60f4, // 1038:99fa
        pass1_1040_b4c8, // 1038:99fe
        NULL, // FUN_1038_8842, // 1038:9a02
        NULL, // FUN_1018_60fe, // 1038:9a06
        pass1_1040_807e, // 1038:9a0a
        show_win_1040_b43c, // 1038:9a0e
        pass1_1040_b45e, // 1038:9a12
        pass1_1040_b17c, // 1038:9a16
        win_msg_op_1038_95fc, // 1038:9a1a

};

void *addr_table_1038_8876[] = {
        pass1_1038_8850, // 1038:8876
        pass1_1008_3a10, // 1038:887a
        unk_win_ui_op_1040_b230, // 1038:887e
        pass1_1040_b316, // 1038:8882
        pass1_1038_7dc6, // 1038:8886
        destroy_window_1038_7d88, // 1038:888a
        post_win_msg_1040_7f56, // 1038:888e
        draw_op_1040_7bb2, // 1038:8892
        post_win_msg_1040_7f1c, // 1038:8896
        pass1_1038_8848, // 1038:889a
        menu_ui_op_1040_7f86, // 1038:889e
        win_help_1040_800c, // 1038:88a2
        pass1_1040_8054, // 1038:88a6
        win_ui_op_1040_b372, // 1038:88aa
        unk_win_ui_op_1040_8158, // 1038:88ae
        check_dialog_msg_1040_81b6, // 1038:88b2
        set_sys_modal_window_1040_81fe, // 1038:88b6
        NULL, // FUN_1018_60ea, // 1038:88ba
        pass1_1040_824a, // 1038:88be
        NULL, // FUN_1040_8266, // 1038:88c2
        pass1_1038_7dac, // 1038:88c6
        NULL, // FUN_1018_60ee, // 1038:88ca
        NULL, // FUN_1018_60f4, // 1038:88ce
        pass1_1040_b4c8, // 1038:88d2
        NULL, // FUN_1038_8842, // 1038:88d6
        NULL, // FUN_1018_60fe, // 1038:88da
        pass1_1040_807e, // 1038:88de
        show_win_1040_b43c, // 1038:88e2
        pass1_1040_b45e, // 1038:88e6
        pass1_1040_b17c, // 1038:88ea
        pass1_1038_884c, // 1038:88ee
};

void *addr_table_1038_1c2e[] = {
        pass1_1038_1c02, // 1038:1c2e
        pass1_1038_0c00, // 1038:1c32
        NULL, // FUN_1028_d228, // 1038:1c36
        pass1_1038_0cf0, // 1038:1c3a
};

void *addr_table_1028_d804[] = {
        pass1_1028_d7de, // 1028:d804
        pass1_1008_58a6, // 1028:d808
        pass1_1008_593c, // 1028:d80c
        pass1_1008_59f4, // 1028:d810
        pass1_1008_5ab8, // 1028:d814
        pass1_1008_5830, // 1028:d818
};

void *addr_table_1028_b1f4[] = {
        pass1_1028_b1c8, // 1028:b1f4
        pass1_1028_6b2c, // 1028:b1f8
        NULL, // FUN_1028_d228, // 1028:b1fc
        pass1_1028_b108, // 1028:b200
};

void *addr_table_1028_9934[] = {
        pass1_1028_9908, // 1028:9934
        NULL, // FUN_1028_d222, // 1028:9938
        pass1_1028_93d4, // 1028:993c
        pass1_1028_94e4, // 1028:9940
};

void *addr_table_1028_8688[] = {
        pass1_1028_865c, // 1028:8688
        pass1_1028_853e, // 1028:868c
        NULL, // FUN_1028_d228, // 1028:8690
        pass1_1028_858c, // 1028:8694
};

void *addr_table_1028_87e0[] = {
        pass1_1028_87b4, // 1028:87e0
        pass1_1028_86c2, // 1028:87e4
        NULL, // FUN_1028_d228, // 1028:87e8
        pass1_1028_86f4, // 1028:87ec
};

void *addr_table_1028_90d6[] = {
        pass1_1028_90aa, // 1028:90d6
        pass1_1028_6b2c, // 1028:90da
        NULL, // FUN_1028_d228, // 1028:90de
        pass1_1028_8fea, // 1028:90e2
};

void *addr_table_1028_2572[] = {
        pass1_1028_254c, // 1028:2572
        pass1_1028_bb56, // 1028:2576
        NULL, // FUN_1030_178e, // 1028:257a
        pass1_1028_2418, // 1028:257e
        file_1028_24a2, // 1028:2582
        pass1_1028_bc1c, // 1028:2586
        pass1_1028_bd38, // 1028:258a
        pass1_1028_bc90, // 1028:258e
        pass1_1028_bc7e, // 1028:2592
        pass1_1028_b514, // 1028:2596
        pass1_1028_be2a, // 1028:259a
        NULL, // FUN_1028_bf16, // 1028:259e
        NULL, // FUN_1028_bf1a, // 1028:25a2
        NULL, // FUN_1028_bf1e, // 1028:25a6
        pass1_1028_20b6, // 1028:25aa
        pass1_1028_bf22, // 1028:25ae
        pass1_1028_bbf0, // 1028:25b2
        pass1_1028_bc02, // 1028:25b6
        pass1_1028_b5a8, // 1028:25ba
        pass1_1028_b5ca, // 1028:25be
        NULL, // FUN_1028_b4e6, // 1028:25c2
        NULL, // FUN_1028_b4ec, // 1028:25c6
        pass1_1028_b46e, // 1028:25ca
        pass1_1028_2290, // 1028:25ce
        pass1_1028_23a8, // 1028:25d2
        pass1_1028_236a, // 1028:25d6

};

void *addr_table_1040_c9f2[] = {
        pass1_1040_c9cc, // 1040:c9f2
        pass1_1040_c71e, // 1040:c9f6
        create_window_1040_92dc, // 1040:c9fa
        draw_op_1040_c74c, // 1040:c9fe
        palette_op_1040_c886, // 1040:ca02
        pass1_1040_c94a, // 1040:ca06
        NULL, // FUN_1008_3cd2, // 1040:ca0a
        send_msg_1040_c85a, // 1040:ca0e
        NULL, //   FUN_1040_c882, // 1040:ca12

};

void *addr_table_1040_67ba[] = {
        pass1_1040_6794, // 1040:67ba
        pass1_1008_3a10, // 1040:67be
        show_win_1040_65ba, // 1040:67c2
        pass1_1040_79c0, // 1040:67c6
        post_win_msg_1040_672e, // 1040:67ca
        destroy_win_1040_7b98, // 1040:67ce
        post_win_msg_1040_7f56, // 1040:67d2
        draw_op_1040_7bb2, // 1040:67d6
        post_win_msg_1040_7f1c, // 1040:67da
        destroy_win_1040_8212, // 1040:67de
        menu_ui_op_1040_7f86, // 1040:67e2
        win_help_1040_800c, // 1040:67e6
        pass1_1040_8054, // 1040:67ea
        set_text_bk_color_1040_7e5e, // 1040:67ee
        unk_win_ui_op_1040_8158, // 1040:67f2
        check_dialog_msg_1040_81b6, // 1040:67f6
        set_sys_modal_window_1040_81fe, // 1040:67fa
        NULL, // FUN_1018_60ea, // 1040:67fe
        pass1_1040_824a, // 1040:6802
        NULL, // FUN_1040_8266, // 1040:6806
        pass1_1040_78de, // 1040:680a
        NULL, // FUN_1018_60ee, // 1040:680e
        NULL, // FUN_1018_60f4, // 1040:6812
        NULL, // FUN_1018_60fa, // 1040:6816
        NULL, // FUN_1038_a2a4, // 1040:681a
        NULL, // FUN_1018_60fe, // 1040:681e
        pass1_1040_807e, // 1040:6822
};

void *addr_table_1040_76a4[] = {
        pass1_1040_767e, // 1040:76a4
        enable_win_1040_6ff2, // 1040:76a8
        mixed_win_ui_op_1040_70b4, // 1040:76ac
        pass1_1040_7044, // 1040:76b0
        pass1_1040_b54a, // 1040:76b4
        destroy_window_1040_b726, // 1040:76b8
        post_win_msg_1040_7f56, // 1040:76bc
        draw_op_1040_7bb2, // 1040:76c0
        post_win_msg_1040_7f1c, // 1040:76c4
        pass1_1040_70a0, // 1040:76c8
        menu_ui_op_1040_7f86, // 1040:76cc
        win_help_1040_800c, // 1040:76d0
        pass1_1040_8054, // 1040:76d4
        win_ui_op_1040_b372, // 1040:76d8
        unk_win_ui_op_1040_8158, // 1040:76dc
        check_dialog_msg_1040_81b6, // 1040:76e0
        set_sys_modal_window_1040_81fe, // 1040:76e4
        NULL, // FUN_1018_60ea, // 1040:76e8
        pass1_1040_824a, // 1040:76ec
        NULL, // FUN_1040_8266, // 1040:76f0
        pass1_1040_78de, // 1040:76f4
        NULL, // FUN_1018_60ee, // 1040:76f8
        NULL, // FUN_1018_60f4, // 1040:76fc
        pass1_1040_b4c8, // 1040:7700
        pass1_1040_746c, // 1040:7704
        NULL, // FUN_1018_60fe, // 1040:7708
        pass1_1040_807e, // 1040:770c
        show_win_1040_b43c, // 1040:7710
        pass1_1040_b45e, // 1040:7714
        pass1_1040_b17c, // 1040:7718
        pass1_1038_884c, // 1040:771c
        pass1_1040_741e, // 1040:7720
        win_cleanup_op_1040_748c, // 1040:7724

};

void *addr_table_1040_6386[] = {
        pass1_1040_6360, // 1040:6386
        pass1_1008_3a10, // 1040:638a
        pass1_1040_57d4, // 1040:638e
        pass1_1040_b316, // 1040:6392
        win_ui_op_1040_5800, // 1040:6396
        destroy_window_1040_b726, // 1040:639a
        post_win_msg_1040_7f56, // 1040:639e
        draw_op_1040_7bb2, // 1040:63a2
        post_win_msg_1040_7f1c, // 1040:63a6
        pass1_1038_8848, // 1040:63aa
        menu_ui_op_1040_7f86, // 1040:63ae
        win_help_1040_800c, // 1040:63b2
        pass1_1040_8054, // 1040:63b6
        win_ui_op_1040_b372, // 1040:63ba
        unk_win_ui_op_1040_8158, // 1040:63be
        check_dialog_msg_1040_81b6, // 1040:63c2
        set_sys_modal_window_1040_81fe, // 1040:63c6
        NULL, // FUN_1018_60ea, // 1040:63ca
        pass1_1040_824a, // 1040:63ce
        NULL, // FUN_1040_8266, // 1040:63d2
        enable_win_1040_5780, // 1040:63d6
        NULL, // FUN_1018_60ee, // 1040:63da
        NULL, // FUN_1018_60f4, // 1040:63de
        pass1_1040_b4c8, // 1040:63e2
        draw_op_1040_5a06, // 1040:63e6
        NULL, // FUN_1018_60fe, // 1040:63ea
        pass1_1040_807e, // 1040:63ee
        show_win_1040_b43c, // 1040:63f2
        pass1_1040_b45e, // 1040:63f6
        pass1_1040_b17c, // 1040:63fa
        pass1_1038_884c, // 1040:63fe
};

void *addr_table_1038_a428[] = {
        pass1_1038_a402, // 1038:a428
        pass1_1038_a174, // 1038:a42c
        show_win_1038_a396, // 1038:a430
        pass1_1040_79c0, // 1038:a434
        post_win_msg_1040_7b3c, // 1038:a438
        destroy_win_1038_a3d2, // 1038:a43c
        post_win_msg_1040_7f56, // 1038:a440
        draw_op_1040_7bb2, // 1038:a444
        post_win_msg_1040_7f1c, // 1038:a448
        destroy_win_1040_8212, // 1038:a44c
        menu_ui_op_1040_7f86, // 1038:a450
        win_help_1040_800c, // 1038:a454
        pass1_1040_8054, // 1038:a458
        set_text_bk_color_1040_7e5e, // 1038:a45c
        unk_win_ui_op_1040_8158, // 1038:a460
        check_dialog_msg_1040_81b6, // 1038:a464
        set_sys_modal_window_1040_81fe, // 1038:a468
        NULL, // FUN_1018_60ea, // 1038:a46c
        pass1_1040_824a, // 1038:a470
        NULL, // FUN_1040_8266, // 1038:a474
        pass1_1040_78de, // 1038:a478
        NULL, // FUN_1018_60ee, // 1038:a47c
        NULL, // FUN_1018_60f4, // 1038:a480
        NULL, // FUN_1018_60fa, // 1038:a484
        NULL, // FUN_1038_a2a4, // 1038:a488
        NULL, // FUN_1018_60fe, // 1038:a48c
        pass1_1040_807e, // 1038:a490
};

void *addr_table_1038_a62e[] = {
        pass1_1038_a608, // 1038:a62e
        pass1_1038_a174, // 1038:a632
        win_ui_op_1038_a4ee, // 1038:a636
        pass1_1040_79c0, // 1038:a63a
        post_win_msg_1040_7b3c, // 1038:a63e
        win_ui_op_1038_a584, // 1038:a642
        post_win_msg_1040_7f56, // 1038:a646
        draw_op_1040_7bb2, // 1038:a64a
        post_win_msg_1040_7f1c, // 1038:a64e
        destroy_win_1040_8212, // 1038:a652
        menu_ui_op_1040_7f86, // 1038:a656
        win_help_1040_800c, // 1038:a65a
        pass1_1040_8054, // 1038:a65e
        set_text_bk_color_1040_7e5e, // 1038:a662
        unk_win_ui_op_1040_8158, // 1038:a666
        check_dialog_msg_1040_81b6, // 1038:a66a
        set_sys_modal_window_1040_81fe, // 1038:a66e
        NULL, // FUN_1018_60ea, // 1038:a672
        pass1_1040_824a, // 1038:a676
        NULL, // FUN_1040_8266, // 1038:a67a
        pass1_1040_78de, // 1038:a67e
        NULL, // FUN_1018_60ee, // 1038:a682
        NULL, // FUN_1018_60f4, // 1038:a686
        NULL, // FUN_1018_60fa, // 1038:a68a
        NULL, // FUN_1038_a2a4, // 1038:a68e
        NULL, // FUN_1018_60fe, // 1038:a692
        pass1_1040_807e, // 1038:a696
};

void *addr_table_1038_a832[] = {
        pass1_1038_a80c, // 1038:a832
        pass1_1038_a174, // 1038:a836
        win_ui_op_1038_a6f4, // 1038:a83a
        pass1_1040_79c0, // 1038:a83e
        post_win_msg_1040_7b3c, // 1038:a842
        win_ui_op_1038_a788, // 1038:a846
        post_win_msg_1040_7f56, // 1038:a84a
        draw_op_1040_7bb2, // 1038:a84e
        post_win_msg_1040_7f1c, // 1038:a852
        destroy_win_1040_8212, // 1038:a856
        menu_ui_op_1040_7f86, // 1038:a85a
        win_help_1040_800c, // 1038:a85e
        pass1_1040_8054, // 1038:a862
        set_text_bk_color_1040_7e5e, // 1038:a866
        unk_win_ui_op_1040_8158, // 1038:a86a
        check_dialog_msg_1040_81b6, // 1038:a86e
        set_sys_modal_window_1040_81fe, // 1038:a872
        NULL, // FUN_1018_60ea, // 1038:a876
        pass1_1040_824a, // 1038:a87a
        NULL, // FUN_1040_8266, // 1038:a87e
        pass1_1040_78de, // 1038:a882
        NULL, // FUN_1018_60ee, // 1038:a886
        NULL, // FUN_1018_60f4, // 1038:a88a
        NULL, // FUN_1018_60fa, // 1038:a88e
        NULL, // FUN_1038_a2a4, // 1038:a892
        NULL, // FUN_1018_60fe, // 1038:a896
        pass1_1040_807e, // 1038:a89a

};

void *addr_table_1038_ab16[] = {
        pass1_1038_aaf0, // 1038:ab16
        pass1_1038_a174, // 1038:ab1a
        win_ui_op_1038_a972, // 1038:ab1e
        pass1_1040_79c0, // 1038:ab22
        enable_win_1038_a8f8, // 1038:ab26
        win_sys_op_1038_a9fa, // 1038:ab2a
        post_win_msg_1040_7f56, // 1038:ab2e
        draw_op_1040_7bb2, // 1038:ab32
        post_win_msg_1040_7f1c, // 1038:ab36
        destroy_win_1040_8212, // 1038:ab3a
        menu_ui_op_1040_7f86, // 1038:ab3e
        win_help_1040_800c, // 1038:ab42
        pass1_1040_8054, // 1038:ab46
        set_text_bk_color_1040_7e5e, // 1038:ab4a
        unk_win_ui_op_1040_8158, // 1038:ab4e
        check_dialog_msg_1040_81b6, // 1038:ab52
        set_sys_modal_window_1040_81fe, // 1038:ab56
        NULL, // FUN_1018_60ea, // 1038:ab5a
        pass1_1040_824a, // 1038:ab5e
        NULL, // FUN_1040_8266, // 1038:ab62
        pass1_1040_78de, // 1038:ab66
        NULL, // FUN_1018_60ee, // 1038:ab6a
        NULL, // FUN_1018_60f4, // 1038:ab6e
        NULL, // FUN_1018_60fa, // 1038:ab72
        NULL, // FUN_1038_a2a4, // 1038:ab76
        NULL, // FUN_1018_60fe, // 1038:ab7a
        pass1_1040_807e, // 1038:ab7e
};

//void *addr_table_1028_6ad2[] = {
//        pass1_1028_6aa6, // 1028:6ad2
//        NULL, // FUN_1028_d222, // 1028:6ad6
//        NULL, // FUN_1028_d228, // 1028:6ada
//        pass1_1000_4f1a, // 1028:6ade
//        pass1_1028_6a7a, // 1028:6ae2
//        pass1_1028_6926, // 1028:6ae6
//        NULL, // FUN_1028_d228, // 1028:6aea
//        pass1_1028_69cc, // 1028:6aee
//};

//void *addr_table_1028_b1f4[] = {
//        pass1_1028_b1c8, // 1028:b1f4
//        pass1_1028_6b2c, // 1028:b1f8
//        NULL, // FUN_1028_d228, // 1028:b1fc
//        pass1_1028_b108, // 1028:b200
//
//};

void *addr_table_1040_a4e8[] = {
        pass1_1040_a4c2, // 1040:a4e8
        pass1_1008_3a10, // 1040:a4ec
        unk_win_ui_op_1040_b230, // 1040:a4f0
        pass1_1040_b316, // 1040:a4f4
        pass1_1040_a2cc, // 1040:a4f8
        destroy_window_1040_b726, // 1040:a4fc
        post_win_msg_1040_7f56, // 1040:a500
        draw_op_1040_7bb2, // 1040:a504
        post_win_msg_1040_7f1c, // 1040:a508
        pass1_1038_8848, // 1040:a50c
        menu_ui_op_1040_7f86, // 1040:a510
        win_help_1040_800c, // 1040:a514
        pass1_1040_8054, // 1040:a518
        win_ui_op_1040_b372, // 1040:a51c
        unk_win_ui_op_1040_8158, // 1040:a520
        check_dialog_msg_1040_81b6, // 1040:a524
        set_sys_modal_window_1040_81fe, // 1040:a528
        NULL, // FUN_1018_60ea, // 1040:a52c
        pass1_1040_824a, // 1040:a530
        NULL, // FUN_1040_8266, // 1040:a534
        pass1_1040_78de, // 1040:a538
        NULL, // FUN_1018_60ee, // 1040:a53c
        NULL, // FUN_1018_60f4, // 1040:a540
        pass1_1040_b4c8, // 1040:a544
        NULL, //    FUN_1038_8842, // 1040:a548
        NULL, //      FUN_1018_60fe, // 1040:a54c
        pass1_1040_807e, // 1040:a550
        show_win_1040_b43c, // 1040:a554
        get_dlg_item_1040_a3d0, // 1040:a558
        pass1_1040_b17c, // 1040:a55c
        pass1_1038_884c, // 1040:a560
};

void *addr_table_1040_9800[] = {
        pass1_1040_97da, // 1040:9800
        pass1_1040_9252, // 1040:9804
        create_window_1040_92dc, // 1040:9808
        pass1_1040_9422, // 1040:980c
        unk_draw_op_1040_9458, // 1040:9810
        draw_text_1040_94fc, // 1040:9814
        NULL, // FUN_1008_3cd2, // 1040:9818
        pass1_1040_93e6, // 1040:981c
        send_msg_1040_9404, // 1040:9820

};

void *addr_table_1008_051e[] = {
        pass1_1008_04f8,            // 1008:051e
        pass1_1008_049c,            // 1008:0522
        mixed_win_sys_op_1008_016e, // 1008:0526
        pass1_1008_04d2,            // 1008:052a
        NULL,//  LAB_1008_9494,              // 1008:052e
        NULL,//  LAB_1008_9490,              // 1008:0532
};
void *addr_table_1010_3b3e[] = {
        pass1_1010_3af2, // 1010:3b3e
        pass1_1010_3a86, // 1010:3b42
        pass1_1010_394a, // 1010:3b46
        pass1_1010_3a94, // 1010:3b4a
//FUN_1010_3aa6, // 1010:3b4e
        pass1_1010_3adc, // 1010:3b52
//FUN_1010_3abc, // 1010:3b56
        pass1_1010_3ac2, // 1010:3b5a
        pass1_1010_3b18, // 1010:3b5e
        pass1_1010_3a86, // 1010:3b62
        pass1_1010_394a, // 1010:3b66
        pass1_1010_3a94, // 1010:3b6a
//FUN_1010_3aa6, // 1010:3b6e
        pass1_1010_3aaa, // 1010:3b72
//FUN_1010_3abc, // 1010:3b76
};
//void *addr_table_1010_3b3e[] = {
//        pass1_1010_3af2, // 1010:3b3e  f2  3a  10  10       addr
//        pass1_1010_3a86, // 1010:3b42  86  3a  10  10       addr
//        pass1_1010_394a, // 1010:3b46  4a  39  10  10       addr
//        pass1_1010_3a94, // 1010:3b4a  94  3a  10  10       addr
//        NULL,            // FUN_1010_3aa6, // 1010:3b4e  a6  3a  10  10       addr
//        pass1_1010_3adc, // 1010:3b52  dc  3a  10  10       addr
//        NULL,            // FUN_1010_3abc, // 1010:3b56  bc  3a  10  10       addr
//        pass1_1010_3ac2, // 1010:3b5a  c2  3a  10  10       addr
//        pass1_1010_3b18, // 1010:3b5e  18  3b  10  10       addr
//        pass1_1010_3a86, // 1010:3b62  86  3a  10  10       addr
//        pass1_1010_394a, // 1010:3b66  4a  39  10  10       addr
//        pass1_1010_3a94, // 1010:3b6a  94  3a  10  10       addr
//        NULL,            // FUN_1010_3aa6, // 1010:3b6e  a6  3a  10  10       addr
//        pass1_1010_3aaa, // 1010:3b72  aa  3a  10  10       addr
//        NULL,            // FUN_1010_3abc, // 1010:3b76  bc  3a  10  10       addr
//        pass1_1010_62ec, // 1010:6312  ec  62  10  10       addr
//        pass1_1010_1df2, // 1010:6316  f2  1d  10  10       addr
//        pass1_1010_5dc6, // 1010:631a  c6  5d  10  10       addr
//        pass1_1010_5e56, // 1010:631e  56  5e  10  10       addr
//        pass1_1010_62a4, // 1010:6322  a4  62  10  10       addr
//};
#endif // ADDRESS_TABLE_1_H_

#pragma clang diagnostic pop