//
// Created by cyrex on 2/22/2022.
//

#ifndef OUTPOST_1_SRC_STRING_OPS_H_
#define OUTPOST_1_SRC_STRING_OPS_H_

// #include "globals.h"
// #include "op_int.h"
// #include "structs/structs_3xx/struct_382.h"
// #include "structs/structs_3xx/struct_385.h"
// #include "structs/structs_0xx/structs_8x.h"
// #include "structs/structs_1xx/structs_10x.h"
// #include "structs/structs_1046.h"
// #include "structs/structs_2xx/structs_26x.h"


void string_1040_a626(param_1: *mut Struct381, char *param_2, param_3: u16);


char *pass1_1040_4dcc(param_1: u32, param_2: i16, param_3: u16);


pub fn pass1_1040_5d42(globals: &mut Globals, struct param_1: *mut Struct382);


pub fn pass1_1038_4d3c(param_1: *mut Struct385, char *param_2, param_3: u16);


pub fn pass1_1030_4dbc(param_1: *mut Struct386, param_2: u32, long param_3);


const char *pass1_1020_bd80(globals: &mut Globals, param_1: u16);


void string_1020_c0ca(globals: &mut Globals, param_1: u16);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

cstring string_1020_c0d8(globals: &mut Globals, param_1: u16);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

cstring *string_op_1020_c222(param_1: u16, Globals *globals);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

cstring *string_op_1020_c2f8(globals: &mut Globals, param_1: u16);


pub fn pass1_1020_6e52(globals: &mut Globals,
                     param_1: u16,
                     param_2: u16,
                     param_3: u16,
                     offset_param_4: u16,
                     segment_param_5: u16,
                     i16 param_6);


void sprintf_op_1018_34b6(globals: &mut Globals, struct struct_1018_34b6_1 *param_1, param_2: u8);


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

pub fn unk_str_op_1018_35b0(param_1: *mut Struct263, param_2: u16, param_3: u16);


BOOL16 string_1018_39d8(globals: &mut Globals, param_1: u16, param_2: u32, param_3: u32, char *param_4);


u32 pass1_1018_3a7a(param_1: u32, param_2: u32, param_3: u16, param_4: u16);


pub fn pass1_1010_dc36(globals: &mut Globals,
                     param_1: u16,
                     param_2: u16,
                     param_3: u16,
                     param_4: u32,
                     struct_1010_dc36_1 *param_5,
                    param_6: u16);


void load_str_1010_ddf6(globals: &mut Globals, struct_1010_ddf6_1 *param_1, param_2: *mut Struct383);


pub fn pass1_1010_de78(globals: &mut Globals, struct_1010_ddf6_1 *param_1, param_2: u32);


char *load_string_1010_ac92(Globals    *globals,
                            HINSTANCE16 param_1,
                            param_2: u16,
                            param_3: u16,
                            i16         param_4);


char *string_op_1010_ada6(Globals    *globals,
                          HINSTANCE16 param_1,
                          param_2: u16,
                          param_3: u16,
                          param_4: u16,
                          param_5: i16,
                          i16         param_6);


u16 pass1_1010_ae12(param_1: u16, param_2: u16, param_3: u32, param_4: i16, param_5: u16);


char *load_string_1010_9432(globals: &mut Globals, HINSTANCE16 param_1);


char *load_string_1010_847e(cstring param_1_str_buf, HINSTANCE16 param_3_hinstance);


void load_string_1010_84ac(param_1: u16, HINSTANCE16 param_3);


void load_string_1010_84e0(HINSTANCE16 in_hinstance_5,
                           char       *param_2,
                           in_resc_id_3: u16,
                           char       *in_buffer_4);


pub fn pass1_1010_84f8(param_1: u32, param_2: i16, param_3: u16);


pub fn pass1_1010_85be(param_1: u32, param_2: i16, param_4: u16);


pub fn pass1_1010_6034(param_1: u32, param_2: u16);


char *load_string_1008_ee56(void);


u16 pass1_1008_e2a4(param_1: u32, param_2: u32, param_3: u32);


pub fn pass1_1008_e320(Globals   *globals,
                     param_1: *mut Struct102,
                     param_2: u32,
                     param_3: u32,
                    param_4: u16);


void load_str_and_spri16f_1008_b69c(globals: &mut Globals,
                                    param_1: *mut Struct25,
                                    WORD     *param_2,
                                    u8       *param_3);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void load_str_and_spri16f_1008_b78a(globals: &mut Globals,
                                    param_1: u32,
                                    WORD    *param_2,
                                    u8      *param_3,
                                   param_4: u16);


char *load_string_1008_b1f0(Globals *globals);


pub fn pass1_1008_9c86(param_1: u32, char *param_2, i16 param_3);


u32 *str_1008_6d8a(globals: &mut Globals,
                  param_1: *mut u32,
                   char    *param_2,
                   param_3: u16,
                   param_4: u16,
                   u8       param_5);


void struct_op_1008_48fe(param_1: *mut Struct81, param_2: u16, char *param_3, param_4: u16);


pub fn pass1_1008_48de(param_1: u16,
                     param_2: u32,
                     param_3: i16,
                     param_4: u16,
                    param_5: *mut u16,
                     param_6: i16,
                     param_7: i16,
                     u8  *param_8,
                     param_9: u16,
                     param_10: u16,
                     char param_11,
                     param_12: u16,
                     u8   param_13);


pub fn pass1_1008_049c(param_1: u16, param_2: u16, char *param_3);


void str_1000_4d58(char       *in_string_1,
                   char       *in_string_2,
                   param_3: u32,
                   param_4: u32,
                   WNDCLASS16 *param_5);


u16 str_op_1000_3da4(char *param_1);


u8 str_op_1000_3dbe(char *param_1, char *param_2, param_3: u16);


i16 pass1_1000_3ec0(globals: &mut Globals, param_1: u16, param_2: u16);


char *poss_str_op_1000_28dc(globals: &mut Globals, i16 param_1);


pub fn pass1_1000_2913(globals: &mut Globals, param_1: i16, param_2: u16, param_3: u16);

const char *get_rsrc_string(arg_1: u32);


#endif // OUTPOST_1_SRC_STRING_OPS_H_
