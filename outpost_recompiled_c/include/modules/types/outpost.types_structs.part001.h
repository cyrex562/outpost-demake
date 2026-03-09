/*
 * Source: outpost.h
 * Theme: types_structs
 * Chunk: 1/82
 * Original lines (combined): 14-3386
 * Boundaries: top-level declarations/definitions only
 */


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

typedef uint16_t HBRUSH16;

typedef uchar uint8_t;

typedef uint8_t u8;

typedef dword u32;

typedef uint16_t WPARAM16;

typedef struct Colony_Object_VTable Colony_Object_VTable, *PColony_Object_VTable;

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

typedef uint16_t u16;

typedef void *LPARAM;

typedef struct POINT16 POINT16, *PPOINT16;

struct POINT16 {
    int16_t x;
    int16_t y;
};

typedef struct HeapGlobalCallbacks HeapGlobalCallbacks, *PHeapGlobalCallbacks;

struct HeapGlobalCallbacks {
};

typedef void *DEVMODEA_PTR;

typedef int int32_t;

typedef int32_t i32;

typedef uint16_t HDC16;

typedef u8 *LPBYTE;

typedef struct DosDateTimeStruct DosDateTimeStruct, *PDosDateTimeStruct;

struct DosDateTimeStruct {
};

typedef uint16_t HGLOBAL16;

typedef uint16_t HRGN16;

typedef struct Win16TaskContext Win16TaskContext, *PWin16TaskContext;

struct Win16TaskContext {
};

typedef char int8_t;

typedef int8_t i8;

typedef uint16_t HPEN16;

typedef union ptr_void_union_t ptr_void_union_t, *Pptr_void_union_t;

union ptr_void_union_t {
    void *win16_ptr;
    void *win32_ptr;
};

typedef struct HeapGlobalContext HeapGlobalContext, *PHeapGlobalContext;

typedef uint16_t HGDIOBJ16;

typedef void *LPVOID;

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

typedef uint16_t HRSRC16;

typedef uint uint32_t;

typedef uint32_t COLORREF;

typedef uint16_t BOOL16;

typedef uint32_t int_far_ptr;

typedef uint16_t LPARAM16;

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

struct Simulator {
    void *vtable;
    void *polymorphic_ptr;
    void *simple_ptr;
};

typedef struct Display_Adapter_Object Display_Adapter_Object, *PDisplay_Adapter_Object;

struct Display_Adapter_Object {
};


// WARNING! conflicting data type names: /types.h/ulong - /ulong

typedef struct System_Flag_Entry System_Flag_Entry, *PSystem_Flag_Entry;

struct System_Flag_Entry {
};

typedef struct Game_Settings_Manager Game_Settings_Manager, *PGame_Settings_Manager;

struct Game_Settings_Manager {
};

struct UI_Slider_Component {
    void *vtable;
    u16 id;
    u32 resource_ptr;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    void *parent_ptr;
    undefined field8_0x12;
    undefined field9_0x13;
    undefined field10_0x14;
    undefined field11_0x15;
    undefined field12_0x16;
    byte padding;
};

struct UI_Build_Item_Base {
    void *vtable;
    long owner_ref;
    long parent_id;
    u16 entity_type_id;
    u16 state4_id;
    u16 subtype_id;
    u16 state;
    u32 data_ptr;
    u16 prev_state;
    u16 flags;
    u16 some_count;
};

struct UI_Window_Base {
    void *vtable;
    long unique_id;
    void *context_ptr;
};

struct UI_Colony_Component {
    void *vtable;
    long unique_id;
    void *parent_ptr;
    void *managed_list_ptr;
    long field_10;
    u16 field_14;
    u16 field_16;
    u16 max_value_18;
    u16 field_1A_flags;
};

struct UI_Production_Item {
    void *vtable;
    long unique_id;
    void *parent_ptr_val;
    void *managed_list_ptr_val;
    void *entity_ptr_10;
    u16 coords_base_14;
    undefined field6_0x16;
    undefined field7_0x17;
    undefined field8_0x18;
    undefined field9_0x19;
    u16 coord_x_1A;
    u16 coord_y_1C;
    u16 field_1A_val;
    u16 field_1C_val;
};

struct UI_Production_Item_Base {
    void *vtable;
    void *items_buffer_ptr;
    ulong items_count_val;
    ulong initial_capacity_val;
    undefined field4_0x10;
    undefined field5_0x11;
    undefined field6_0x12;
    undefined field7_0x13;
    ulong increment_val;
};

struct UI_Item_Base {
    void *vtable;
    long owner_ref;
    long parent_id;
    u16 item_val;
};

struct UI_Sorted_Linked_List {
    void *vtable;
    void *head_ptr;
    void *tail_ptr_or_count;
};

struct UI_Managed_List {
    void *vtable;
    u16 first_free_index;
    void *buffer_ptr;
    ulong current_max_index;
    ulong initial_capacity_val;
    ulong current_capacity_val;
    ulong increment_step_val;
    long current_count;
    long increment_step;
    u16 call_dtor_flag;
};

typedef struct UI_Construction_Manager UI_Construction_Manager, *PUI_Construction_Manager;

struct UI_Construction_Manager {
    void *vtable;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    u16 world_x;
    u16 world_y;
    undefined field7_0xc;
    undefined field8_0xd;
    undefined field9_0xe;
    undefined field10_0xf;
    undefined field11_0x10;
    undefined field12_0x11;
    undefined field13_0x12;
    undefined field14_0x13;
    undefined field15_0x14;
    undefined field16_0x15;
    undefined field17_0x16;
    undefined field18_0x17;
    undefined field19_0x18;
    undefined field20_0x19;
    undefined field21_0x1a;
    undefined field22_0x1b;
    undefined field23_0x1c;
    undefined field24_0x1d;
    undefined field25_0x1e;
    undefined field26_0x1f;
    undefined field27_0x20;
    undefined field28_0x21;
    void *selected_structure_res_ptr;
    undefined field30_0x26;
    undefined field31_0x27;
    undefined field32_0x28;
    undefined field33_0x29;
    undefined field34_0x2a;
    undefined field35_0x2b;
    undefined field36_0x2c;
    undefined field37_0x2d;
    undefined field38_0x2e;
    undefined field39_0x2f;
    void *parent_colony_ptr;
    u16 active_pop_count;
    undefined field42_0x36;
    undefined field43_0x37;
    undefined field44_0x38;
    undefined field45_0x39;
    undefined field46_0x3a;
    undefined field47_0x3b;
    undefined field48_0x3c;
    undefined field49_0x3d;
    undefined field50_0x3e;
    undefined field51_0x3f;
    undefined field52_0x40;
    undefined field53_0x41;
    undefined field54_0x42;
    undefined field55_0x43;
    undefined field56_0x44;
    undefined field57_0x45;
    undefined field58_0x46;
    byte field_65;
};
