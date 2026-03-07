//
// Created by cyrex on 3/19/2023.
//

#ifndef OUTPOST_1_SRC_STRUCTS_SEG_ADDRESS_H_
#define OUTPOST_1_SRC_STRUCTS_SEG_ADDRESS_H_

#include "op_int.h"

typedef struct SegmentAddress {
    u16 segment;
    u16 offset;
} SegmentAddress;

#endif // OUTPOST_1_SRC_STRUCTS_SEG_ADDRESS_H_
