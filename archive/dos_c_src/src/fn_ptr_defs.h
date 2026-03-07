//
// Created by cyrex on 2/22/2022.
//

#ifndef OUTPOST_1_SRC_FN_PTR_DEFS_H_
#define OUTPOST_1_SRC_FN_PTR_DEFS_H_

#include "op_int.h"
#include "structs/structs_1046.h"

typedef void (*FnPtr1)();

typedef u32 (*FnPtr2)(u16);

typedef void(*FnPtr3)(u16, u16, u16, u16, u16);

typedef void (*FnPtr4)(u32 *, u32 *, u8);

typedef u16(*Int21GetDosVersInfo)(void *dos_vers_info);

typedef void(*FnPtr5)(u16, u16, u16, u16, u16);

typedef void(*FnPtr6)(u16, struct_1018_35b0_1*, u16, u16);

#endif // OUTPOST_1_SRC_FN_PTR_DEFS_H_
