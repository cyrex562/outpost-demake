/*
 * Source: outpost.h
 * Chunk: 1/76
 * Original lines: 1-772
 * Boundaries: top-level declarations/definitions only
 */

#ifndef OUTPOST_H
#define OUTPOST_H

#include "ghidra.h"


#define IDC_ADD_LINK 0x1848
#define IDC_COLONY_STATUS_REPORT 0x1841
#define IDC_FULL_REFRESH 0xeb
#define IDC_DIALOG_FACTORY_SPAWN 0x184b
#define CUSTOM_LIST_CTRL 0x1847

typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned long    dword;
typedef long long    int16;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned int    undefined2;
typedef unsigned long    undefined4;
typedef unsigned long long    undefined6;
typedef unsigned short    ushort;
typedef unsigned int    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef ushort uint16_t;

typedef uint16_t HCURSOR16;

typedef struct UI_Build_Item_TypeC68E UI_Build_Item_TypeC68E, *PUI_Build_Item_TypeC68E;

struct UI_Build_Item_TypeC68E {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    uint special_counter_20;
};

typedef uint16_t HBRUSH16;

typedef uchar uint8_t;

typedef uint8_t u8;

typedef dword u32;

typedef uint16_t HMENU16;

typedef uint16_t WPARAM16;

typedef uint16_t HWND16;

typedef struct UI_Build_Item_TypeD88E UI_Build_Item_TypeD88E, *PUI_Build_Item_TypeD88E;

struct UI_Build_Item_TypeD88E {
};

typedef struct Colony_Object_VTable Colony_Object_VTable, *PColony_Object_VTable;

struct Colony_Object_VTable {
    void *dtor_Scalar_Deleting;
    void *Main_Update_Logic;
};

typedef void *void_far_ptr;

typedef uint16_t HMODULE16;

typedef struct vtable_UI_Component vtable_UI_Component, *Pvtable_UI_Component;

struct vtable_UI_Component {
    void *dtor_Scalar_Deleting;
    void *Method_4_58a6;
    void *Method_8_593c;
    void *Method_C_59f4;
    void *Method_10_5ab8;
    void *Method_14_5830;
};

typedef uint16_t HACCEL16;

typedef struct BuildingState BuildingState, *PBuildingState;

struct BuildingState {
};

typedef short int16_t;

typedef int16_t i16;

typedef struct File_Object File_Object, *PFile_Object;

struct File_Object {
};

typedef char *LPSTR;

typedef struct Simulator_Entity Simulator_Entity, *PSimulator_Entity;

struct Simulator_Entity {
    void *vtable_000_far;
    void *p_Name_004_far;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    void *p_SubList1_00E_far;
    void *p_SubList2_012_far;
    undefined field10_0x16;
    undefined field11_0x17;
    undefined field12_0x18;
    undefined field13_0x19;
    undefined field14_0x1a;
    undefined field15_0x1b;
    ushort type_id_014_u16;
    ushort status_phase_016_u16;
    ushort tick_counter_018_u16;
    ushort status_flag_01A_u16;
    undefined field20_0x24;
    undefined field21_0x25;
    ushort active_flag_01E_u16;
};

typedef struct WIN16_MSG WIN16_MSG, *PWIN16_MSG;

typedef uint16_t u16;

typedef void *LPARAM;

typedef struct POINT16 POINT16, *PPOINT16;

struct POINT16 {
    int16_t x;
    int16_t y;
};

struct WIN16_MSG {
    HWND16 hwnd;
    u16 message;
    WPARAM16 wparam;
    LPARAM lparam;
    dword time;
    struct POINT16 point;
};

typedef struct UI_Generic_Panel UI_Generic_Panel, *PUI_Generic_Panel;

struct UI_Generic_Panel {
};

typedef struct HeapGlobalCallbacks HeapGlobalCallbacks, *PHeapGlobalCallbacks;

struct HeapGlobalCallbacks {
};

typedef void *DEVMODEA_PTR;

typedef uint16_t HANDLE16;

typedef int int32_t;

typedef int32_t i32;

typedef uint16_t HDC16;

typedef uint16_t HFILE16;

typedef struct UI_Build_Item_TypeC006 UI_Build_Item_TypeC006, *PUI_Build_Item_TypeC006;

struct UI_Build_Item_TypeC006 {
};

typedef u8 *LPBYTE;

typedef void *LOGPALETTE_PTR;

typedef struct DosDateTimeStruct DosDateTimeStruct, *PDosDateTimeStruct;

struct DosDateTimeStruct {
};

typedef uint16_t HGLOBAL16;

typedef uint16_t HRGN16;

typedef struct UI_Build_Item_TypeE4EA UI_Build_Item_TypeE4EA, *PUI_Build_Item_TypeE4EA;

struct UI_Build_Item_TypeE4EA {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    undefined field72_0x48;
    undefined field73_0x49;
    undefined field74_0x4a;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
    undefined field80_0x50;
    undefined field81_0x51;
    undefined field82_0x52;
    undefined field83_0x53;
    undefined field84_0x54;
    undefined field85_0x55;
    undefined field86_0x56;
    undefined field87_0x57;
    undefined field88_0x58;
    undefined field89_0x59;
    undefined field90_0x5a;
    undefined field91_0x5b;
    undefined field92_0x5c;
    undefined field93_0x5d;
    undefined field94_0x5e;
    undefined field95_0x5f;
    undefined field96_0x60;
    undefined field97_0x61;
    undefined field98_0x62;
    undefined field99_0x63;
    undefined field100_0x64;
    undefined field101_0x65;
    undefined field102_0x66;
    undefined field103_0x67;
    undefined field104_0x68;
    undefined field105_0x69;
    undefined field106_0x6a;
    undefined field107_0x6b;
    undefined field108_0x6c;
    undefined field109_0x6d;
    undefined field110_0x6e;
    undefined field111_0x6f;
    undefined field112_0x70;
    undefined field113_0x71;
    undefined field114_0x72;
    undefined field115_0x73;
    undefined field116_0x74;
    undefined field117_0x75;
    undefined field118_0x76;
    undefined field119_0x77;
    undefined field120_0x78;
    undefined field121_0x79;
    undefined field122_0x7a;
    undefined field123_0x7b;
    undefined field124_0x7c;
    undefined field125_0x7d;
    undefined field126_0x7e;
    undefined field127_0x7f;
    undefined field128_0x80;
    undefined field129_0x81;
    undefined field130_0x82;
    undefined field131_0x83;
    undefined field132_0x84;
    undefined field133_0x85;
    undefined field134_0x86;
    undefined field135_0x87;
    undefined field136_0x88;
    undefined field137_0x89;
    undefined field138_0x8a;
    undefined field139_0x8b;
    undefined field140_0x8c;
    undefined field141_0x8d;
    undefined field142_0x8e;
    undefined field143_0x8f;
    undefined field144_0x90;
    undefined field145_0x91;
    undefined field146_0x92;
    undefined field147_0x93;
    undefined field148_0x94;
    undefined field149_0x95;
    undefined field150_0x96;
    undefined field151_0x97;
    undefined field152_0x98;
    undefined field153_0x99;
    undefined field154_0x9a;
    undefined field155_0x9b;
    undefined field156_0x9c;
    undefined field157_0x9d;
    undefined field158_0x9e;
    undefined field159_0x9f;
    undefined field160_0xa0;
    undefined field161_0xa1;
    undefined field162_0xa2;
    undefined field163_0xa3;
    undefined field164_0xa4;
    undefined field165_0xa5;
    undefined field166_0xa6;
    undefined field167_0xa7;
    undefined field168_0xa8;
    undefined field169_0xa9;
    undefined field170_0xaa;
    undefined field171_0xab;
    undefined field172_0xac;
    undefined field173_0xad;
    undefined field174_0xae;
    undefined field175_0xaf;
    undefined field176_0xb0;
    undefined field177_0xb1;
    undefined field178_0xb2;
    undefined field179_0xb3;
    undefined field180_0xb4;
    undefined field181_0xb5;
    undefined field182_0xb6;
    undefined field183_0xb7;
    undefined field184_0xb8;
    undefined field185_0xb9;
    undefined field186_0xba;
    undefined field187_0xbb;
    undefined field188_0xbc;
    undefined field189_0xbd;
    undefined field190_0xbe;
    undefined field191_0xbf;
    undefined field192_0xc0;
    undefined field193_0xc1;
    undefined field194_0xc2;
    undefined field195_0xc3;
    undefined field196_0xc4;
    undefined field197_0xc5;
    undefined field198_0xc6;
    undefined field199_0xc7;
    undefined field200_0xc8;
    undefined field201_0xc9;
    undefined field202_0xca;
    undefined field203_0xcb;
    undefined field204_0xcc;
    undefined field205_0xcd;
    undefined field206_0xce;
    undefined field207_0xcf;
    undefined field208_0xd0;
    undefined field209_0xd1;
    undefined field210_0xd2;
    undefined field211_0xd3;
    undefined field212_0xd4;
    undefined field213_0xd5;
    undefined field214_0xd6;
    undefined field215_0xd7;
    undefined field216_0xd8;
    undefined field217_0xd9;
    undefined field218_0xda;
    undefined field219_0xdb;
    undefined field220_0xdc;
    undefined field221_0xdd;
    undefined field222_0xde;
    undefined field223_0xdf;
    undefined field224_0xe0;
    undefined field225_0xe1;
    undefined field226_0xe2;
    undefined field227_0xe3;
    undefined field228_0xe4;
    undefined field229_0xe5;
    undefined field230_0xe6;
    undefined field231_0xe7;
    undefined field232_0xe8;
    undefined field233_0xe9;
    undefined field234_0xea;
    undefined field235_0xeb;
    undefined field236_0xec;
    undefined field237_0xed;
    undefined field238_0xee;
    undefined field239_0xef;
    undefined field240_0xf0;
    undefined field241_0xf1;
    undefined field242_0xf2;
    undefined field243_0xf3;
    undefined field244_0xf4;
    undefined field245_0xf5;
    undefined field246_0xf6;
    undefined field247_0xf7;
    undefined field248_0xf8;
    undefined field249_0xf9;
    undefined field250_0xfa;
    undefined field251_0xfb;
    undefined field252_0xfc;
    undefined field253_0xfd;
    undefined field254_0xfe;
    undefined field255_0xff;
    undefined field256_0x100;
    undefined field257_0x101;
    undefined field258_0x102;
    undefined field259_0x103;
    undefined field260_0x104;
    undefined field261_0x105;
    undefined field262_0x106;
    undefined field263_0x107;
    undefined field264_0x108;
    undefined field265_0x109;
    undefined field266_0x10a;
    undefined field267_0x10b;
    uint target_entity_id;
};

typedef struct Win16TaskContext Win16TaskContext, *PWin16TaskContext;

struct Win16TaskContext {
};

typedef char *LPCHAR;

typedef char int8_t;

typedef int8_t i8;

typedef uint16_t HPEN16;

typedef struct UI_Build_Item_TypeC940 UI_Build_Item_TypeC940, *PUI_Build_Item_TypeC940;

struct UI_Build_Item_TypeC940 {
};

typedef struct ResourceObject ResourceObject, *PResourceObject;

struct ResourceObject {
};

typedef union ptr_void_union_t ptr_void_union_t, *Pptr_void_union_t;

union ptr_void_union_t {
    void *win16_ptr;
    void *win32_ptr;
};

typedef struct HeapGlobalContext HeapGlobalContext, *PHeapGlobalContext;

struct HeapGlobalContext {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    u16 pool_list_head_off;
    u16 pool_list_head_seg;
};

typedef uint16_t HGDIOBJ16;

typedef void *LPVOID;

typedef struct HandleTableEntry HandleTableEntry, *PHandleTableEntry;

struct HandleTableEntry {
};

typedef uint16_t HINSTANCE16;

typedef struct SubItemEntry SubItemEntry, *PSubItemEntry;

struct SubItemEntry {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    u32 linked_obj;
};

typedef void *LRESULT;

typedef uint16_t HTASK16;

typedef struct HeapStrategy3Params HeapStrategy3Params, *PHeapStrategy3Params;

struct HeapStrategy3Params {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    uint magic;
};

typedef uint16_t HPALETTE16;

typedef uint16_t HRSRC16;

typedef uint uint32_t;

typedef uint32_t COLORREF;

typedef uint16_t HICON16;

typedef uint16_t BOOL16;

typedef struct UI_Complex_Control UI_Complex_Control, *PUI_Complex_Control;

struct UI_Complex_Control {
};

typedef uint32_t int_far_ptr;

typedef struct UI_Window UI_Window, *PUI_Window;

struct UI_Window {
};

typedef uint16_t LPARAM16;

typedef struct ResourceHandle ResourceHandle, *PResourceHandle;

struct ResourceHandle {
};

typedef struct Data_History_Node Data_History_Node, *PData_History_Node;

struct Data_History_Node {
    void *item;
    u32 next_ptr_raw;
};

typedef struct Data_History_Object Data_History_Object, *PData_History_Object;

struct Data_History_Object {
    void *vtable;
    undefined field1_0x4;
    undefined field2_0x5;
    void *history_buffer_ptr;
};

typedef struct Entity Entity, *PEntity;

struct Entity {
};

typedef struct Simulator_Object_0558 Simulator_Object_0558, *PSimulator_Object_0558;

struct Simulator_Object_0558 {
};

typedef struct Simulator_World_Iterator Simulator_World_Iterator, *PSimulator_World_Iterator;

struct Simulator_World_Iterator {
    void *vtable;
    void *list_ptr;
    long current_index;
    long total_count;
    u16 direction;
};

typedef struct Simulator_Context Simulator_Context, *PSimulator_Context;

struct Simulator_Context {
    ulong tick_counter;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    void *managed_list1_ptr;
    void *managed_list2_ptr;
    void *managed_list3_ptr;
    void *managed_list4_ptr;
    void *managed_list5_ptr;
    void *managed_list6_ptr;
    void *managed_list7_ptr;
    void *managed_list8_ptr;
    void *vtable_array_ptr_1;
    undefined field20_0x32;
    undefined field21_0x33;
    undefined field22_0x34;
    undefined field23_0x35;
    undefined field24_0x36;
    undefined field25_0x37;
    undefined field26_0x38;
    undefined field27_0x39;
    undefined field28_0x3a;
    undefined field29_0x3b;
    undefined field30_0x3c;
    undefined field31_0x3d;
    undefined field32_0x3e;
    undefined field33_0x3f;
    undefined field34_0x40;
    undefined field35_0x41;
    undefined field36_0x42;
    undefined field37_0x43;
    undefined field38_0x44;
    undefined field39_0x45;
    undefined field40_0x46;
    undefined field41_0x47;
    undefined field42_0x48;
    undefined field43_0x49;
    undefined field44_0x4a;
    undefined field45_0x4b;
    undefined field46_0x4c;
    undefined field47_0x4d;
    undefined field48_0x4e;
    undefined field49_0x4f;
    undefined field50_0x50;
    undefined field51_0x51;
    void *map_manager_ptr_52;
};

typedef struct Simulator_Event_Dispatch_Table Simulator_Event_Dispatch_Table, *PSimulator_Event_Dispatch_Table;

struct Simulator_Event_Dispatch_Table {
};

typedef struct Simulator_Settings Simulator_Settings, *PSimulator_Settings;

struct Simulator_Settings {
};

typedef struct Planet_State_Entry Planet_State_Entry, *PPlanet_State_Entry;

struct Planet_State_Entry {
};

typedef struct Colony_Object Colony_Object, *PColony_Object;
