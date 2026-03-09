#ifndef UI_VTABLE_H
#define UI_VTABLE_H

#include "core/outpost_common.h"

/**
 * UI_Base_VTable - Virtual table for UI_Base_Object (1008:389A).
 * This table contains 37 entries as identified from the original binary.
 */
#define UI_BASE_VTABLE_SIZE 37

extern void * g_UI_Base_VTable[UI_BASE_VTABLE_SIZE];

#endif // UI_VTABLE_H
