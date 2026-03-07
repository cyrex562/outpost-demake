//
// Created by cyrex562 on 2/13/23.
//

#ifndef OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_3_H_
#define OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_3_H_

#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_0xx/struct_20.h"
#include "structs/structs_0xx/structs_2x.h"
#include "structs/structs_0xx/structs_5x.h"
#include "structs/structs_1xx/struct_132.h"
#include "structs/structs_5xx/structs_50x.h"
#include "structs/structs_5xx/structs_57x.h"
#include "structs/structs_6xx/struct_658.h"
#include "structs/structs_6xx/struct_659.h"
#include "structs/structs_6xx/struct_660.h"
#include "structs/structs_6xx/struct_661.h"

void realize_palette_1020_2992(u32 param_1, i16 param_2);

void invalidate_rect_1020_2ae4(Globals *globals,
                               u32            *param_1,
                               u16             param_2,
                               u16             param_3,
                               u16             param_4);

void pass1_1020_0a52(Globals *globals,
                     u32      param_1,
                     u16      param_2,
                     u16      param_3,
                     u16      param_4);

void unk_draw_op_1020_0c3e(u32 param_1, HWND16 param_2);

void realize_palette_1020_0e46(u32 param_1, i16 param_2, HGDIOBJ16 param_3);

void pass1_1020_1022(u32 param_1, HANDLE16 param_2);

void cleanup_ui_op_1020_1038(u32 param_1);

void invalidate_rect_1020_157c(u32 param_1, i16 param_2, HWND16 param_3);

void draw_op_1020_15de(u32 param_1, HWND16 in_win_handle_2);

void draw_op_1020_1674(Globals *globals, u32 param_1, u16 param_2);

void pass1_1018_e5dc(Globals         *globals,
                     u16              param_1,
                     struct Struct20 *param_2,
                     u16              param_3,
                     u16              param_4);

void pass1_1018_e834(Struct660 *param_1, u16 param_2, u16 param_3, i16 param_4, u16 param_5);

void pass1_1018_e8bc(Struct577 *param_1);

void pass1_1018_e91e(struct Struct20 *param_1, u16 param_2, u16 param_3, u16 param_4);

void pass1_1018_ec74(Struct661 *param_1, i16 param_2, u16 param_3, u16 param_4);

void pass1_1018_ed98(u16 *param_1, u16 param_2);

void invalidate_rect_1018_edd8(u32 param_1, i16 param_2, u16 param_3);

void unk_draw_op_1020_0000(u32 param_1, HWND16 param_2, u16 param_3);

void pass1_1020_01d8(struct Struct20 *param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5, u16 param_6, u16 param_7, u32 param_8, u16 param_9)
;

void draw_op_1020_041e(u32 param_1, u16 param_2);

void fill_rect_1020_065e(u32 param_1, HWND16 in_win_handle_2);

void pass1_1020_07aa(u32 param_1, u16 param_2, i16 param_3, u16 param_4, u16 param_5);

void pass1_1018_dfd4(u32 param_1, u8 *param_2, i16 param_3, u16 param_4, u16 param_5);

void delete_palette_1018_e16c(u32 param_1, HWND16 param_2);

void pass1_1018_e230(u16 param_1, struct Struct20 *param_2, u16 param_3, u16 param_4);

void pass1_1018_e4f2(Struct659 *param_1, u16 param_2, u16 param_3, i16 param_4, u16 param_5);

void pass1_1018_e57a(u16 *param_1);

void unk_draw_op_1018_c578(Struct36 *param_1, u16 param_2);

void draw_text_1018_c742(Struct36 *param_1, HDC16 param_2, RECT16 *param_3, u16 param_4);

void pass1_1018_5b06(Struct132 *param_1, u16 param_2, u16 param_3, u16 param_4)
;

void pass1_1018_5cc8(Struct508 *param_1, u16 param_2);

void invalidate_rect_1018_5d32(u32 param_1, i16 param_2, HWND16 param_3);

void misc_draw_op_1018_5d6c(u32 param_1, HWND16 param_2);

void set_window_text_1018_6066(u16 param_1, u16 param_2, SEGPTR in_win_text_3, u16 param_4, u16 dialog_id_5, HWND16 in_hwnd_6);

void set_window_text_1018_6086(u32 param_1, LPSTR param_2, WORD *param_3);

void unk_draw_op_1018_623e(u32 param_1, HWND16 param_2, u16 param_3);

void draw_line_1018_6444(u32 param_1, HDC16 param_2);

void draw_op_1018_6544(u32 param_1, i16 *param_2, u16 param_3);

void draw_polygon_1018_661c(u16 param_1, u16 param_2, u32 param_3, HDC16 param_4);

void struct_1018_66cc(struct Struct20 *param_1, u16 param_2, u16 param_3, u16 param_4);

void pass1_1018_6924(Struct658 *param_1, u16 param_2, u16 param_3, i16 param_4, u16 param_5);

void pass1_1018_69ac(u16 *param_1);

void mixed_draw_op_1018_6a7a(Struct28 *param_1, u16 param_2);

void clenaup_win_ui_1018_4d22(Struct11 *in_struct_1, HDC16 in_hdc_2);

void get_dc_1018_4db0(u32 param_1, u16 param_2, HWND16 param_3);

void create_dc_1018_4e04(Struct8 *param_1, u16 param_2, i16 param_3, i16 param_4, LPCSTR in_string_5, u16 in_string_6);

void struct_1018_5840(Globals  *globals,
                      struct Struct20 *param_1,
                      u16       param_2,
                      u16       param_3,
                      u16       param_4);

void invalidate_rect_1018_58e2(Struct58 *param_1, i16 param_2, HWND16 param_3);

void pass1_1010_4674(u32 param_1, i16 param_2, u16 param_3, u16 param_4);

void draw_1010_47ae(u32 param_1, u16 param_2, u16 param_3);

void draw_op_1010_47d0(u32 param_1, u16 param_2, u16 param_3, u16 in_style_3, u16 param_5);

void pt_in_rect_1010_4e08(u32 param_1, u16 param_2, u16 param_3, RECT16 *param_4);

i16 pt_in_rect_1010_40f8(u32 param_1, POINT16 *param_2, RECT16 *param_3);

u16 draw_fn_1010_2a32(u16 param_1, u16 param_2, u16 *__return_storage_ptr__, i16 param_4, u16 param_5, u32 param_6, u16 param_7, u16 param_8, u16 param_9, u16 param_10);

void unk_draw_op_1008_da12(Struct19 *param_1, u16 param_2, u16 param_3);

#endif // OUTPOST_1_SRC_DRAW_OPS_DRAW_OPS_3_H_
