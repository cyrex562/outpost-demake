//
// Created by cyrex on 2/17/2023.
//

#ifndef OUTPOST_1_SRC_UI_OPS_UI_OPS_6_H_
#define OUTPOST_1_SRC_UI_OPS_UI_OPS_6_H_

#include "globals.h"
#include "op_int.h"
#include "op_windef.h"
#include "structs/structs_0xx/struct_43.h"
#include "structs/structs_0xx/struct_1.h"
#include "structs/structs_0xx/structs_3x.h"


void destroy_window_1020_3b3e(Struct30 *param_1, HWND16 param_2);



void pass1_1020_3c8c(u32 param_1, u32 param_2, u16 param_3);



Struct3 *pass1_1020_3ca6(Struct3 *param_1, u8 param_2, u16 param_3);


void enable_window_1020_1bd4(Globals *globals,
                             i16           param_1,
                             u16  param_2,
                             u16  param_3,
                             u32    param_4,
                             u16  param_5);



void set_win_tet_1020_1d2a(u16 param_1, u16 param_2, SEGPTR in_win_text_3, u16 param_4, u16 in_dlg_id_5, HWND16 in_hwnd_6);



void pass1_1020_1d8e(u32 param_1, u32 param_2);



BOOL16 destroy_win_1020_1dea(HWND16 param_1);




u16 destroy_win_1020_1e1e(HWND16 param_1);


Struct18 *pass1_1020_1e54(Globals *globals, Struct18 *param_1, u8 param_2);


void pass1_1020_26a6(u32 param_1);



void pass1_1020_28fc(Struct3 *param_1, u16 param_2);



void pass1_1020_2a6a(u32 param_1, u16 param_2);



void bring_window_to_top_1020_2aae(u32 param_1, u32 param_2);



void pass1_1020_0aa6(u32 param_1, u16 param_2);



void win_ui_palette_op_1020_0cd2(u32 param_1, HWND16 param_2);



void pass1_1020_0e2c(u32 param_1, u16 param_2);



void pass1_1020_0e8e(i16 param_1, u16 param_2, i16 param_3, i16 param_4, i16 param_5, u16 param_6, u16 param_7);



void enable_menu_1020_1000(HMENU16 param_1, i16 param_2);


void win_ui_cursor_op_1020_1294(Globals *globals,
                                u32    param_1,
                                short           param_2,
                                short           param_3,
                                u16  param_4,
                                u16  param_5);




Struct3 *pass1_1020_135e(Struct18 *param_1, u8 param_2, u16 param_3);




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void unk_win_ui_op_1020_1418(Struct40 *param_1, u32 param_2, u16 param_3);




void win_ui_op_1020_150e(u16 *param_1, HDC16 param_2);



Struct18 *pass1_1020_170a(Struct18 *param_1, u8 param_2, u16 param_3);



void pass1_1020_1780(u32 *param_1);




void mixed_ui_op_1020_179c(Struct1 *param_1);



void pass1_1018_5e5a(u16 *param_1);



void win_ui_op_1018_5e9a(Struct1 *param_1, u16 param_2);



void mix_ui_op_1018_6adc(Struct28 *param_1);



Struct11 *pass1_1018_4ae0(Struct11 *param_1, u8 param_2, u16 param_3);



void unk_win_ui_op_1018_4f18(Struct39 *param_1, u16 param_2, u32 param_3);




Struct11 *pass1_1018_5032(Struct11 *param_1, u8 param_2, u16 param_3);



void pass1_1018_57e6(u32 param_1, long param_2, u16 param_3);



void pt_in_rect_1018_1bda(u32 param_1, u16 param_2, u16 param_3, u16 param_4);


void pass1_1018_2440(Struct11 *param_1, u16 param_2);



void msg_box_op_1010_8bb4(u16 param_1, u16 param_2, u32 param_3, HINSTANCE16 param_4, u16 param_5);



void ui_op_1010_79aa(u32 param_1, i16 param_2, long param_3, u16 param_4);



void show_win_1010_7a76(u32 param_1, u16 param_2);



void show_window_1010_7ace(u32 param_1, u16 param_2);




u32 destroy_window_1010_7b26(u32 param_1, long param_2, u16 param_3, u16 param_4);



void pass1_1010_8096(u32 *param_1, i16 param_2);


struct Struct43 *unk_io_op_1010_830a(u32 param_1, u16 param_2, u16 param_3);



void pass1_1010_71d6(u32 param_1, i16 param_2, u16 *param_3, u16 param_4, u16 param_5, u16 param_6);



Struct11 *pass1_1010_5074(Struct11 *param_1, u8 param_2);



void pass1_1010_29c6(Struct11 *param_1);



void win_ui_op_1010_3202(u32 param_1, i16 param_2, HWND16 param_3);



Struct11 *pass1_1010_0ee6(Struct11 *param_1, u8 param_2);




#endif // OUTPOST_1_SRC_UI_OPS_UI_OPS_6_H_
