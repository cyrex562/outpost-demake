/*
 * Source: outpost.h
 * Chunk: 4/76
 * Original lines: 2749-3403
 * Boundaries: top-level declarations/definitions only
 */


typedef struct Simulator Simulator, *PSimulator;

struct Simulator {
    void *vtable;
    void *polymorphic_ptr;
    void *simple_ptr;
};

typedef struct Simulator_Entity_Collection Simulator_Entity_Collection, *PSimulator_Entity_Collection;

struct Simulator_Entity_Collection {
    void *buffer_ptr_0;
    u16 current_count_4;
    u16 increment_step_6;
    u16 capacity_8;
    void *cached_result_A;
};

typedef struct Simulator_Map_SubList Simulator_Map_SubList, *PSimulator_Map_SubList;

struct Simulator_Map_SubList {
    void *vtable_0;
    byte state_buffer_base_0;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    undefined field20_0x17;
    undefined field21_0x18;
    undefined field22_0x19;
    undefined field23_0x1a;
    undefined field24_0x1b;
    undefined field25_0x1c;
    undefined field26_0x1d;
    undefined field27_0x1e;
    undefined field28_0x1f;
    undefined field29_0x20;
    undefined field30_0x21;
    undefined field31_0x22;
    undefined field32_0x23;
    undefined field33_0x24;
    undefined field34_0x25;
    undefined field35_0x26;
    undefined field36_0x27;
    long bounding_coords_24;
    undefined field38_0x2c;
    undefined field39_0x2d;
    undefined field40_0x2e;
    undefined field41_0x2f;
    undefined field42_0x30;
    undefined field43_0x31;
    undefined field44_0x32;
    undefined field45_0x33;
    undefined field46_0x34;
    undefined field47_0x35;
    undefined field48_0x36;
    undefined field49_0x37;
    long total_area_34;
    void *collections_base_38;
    undefined field52_0x40;
    undefined field53_0x41;
    undefined field54_0x42;
    undefined field55_0x43;
    undefined field56_0x44;
    undefined field57_0x45;
    undefined field58_0x46;
    undefined field59_0x47;
    undefined field60_0x48;
    undefined field61_0x49;
    undefined field62_0x4a;
    undefined field63_0x4b;
    undefined field64_0x4c;
    undefined field65_0x4d;
    undefined field66_0x4e;
    undefined field67_0x4f;
    undefined field68_0x50;
    undefined field69_0x51;
    undefined field70_0x52;
    undefined field71_0x53;
    undefined field72_0x54;
    undefined field73_0x55;
    undefined field74_0x56;
    undefined field75_0x57;
    undefined field76_0x58;
    undefined field77_0x59;
    byte padding_75;
};

typedef struct Simulator_Command_PutBldg Simulator_Command_PutBldg, *PSimulator_Command_PutBldg;

struct Simulator_Command_PutBldg {
};

typedef struct Simulator_Object_Library Simulator_Object_Library, *PSimulator_Object_Library;

struct Simulator_Object_Library {
    long counters_base_0;
    byte state_buffer_base_0;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    undefined field20_0x17;
    undefined field21_0x18;
    undefined field22_0x19;
    undefined field23_0x1a;
    undefined field24_0x1b;
    undefined field25_0x1c;
    undefined field26_0x1d;
    undefined field27_0x1e;
    undefined field28_0x1f;
    undefined field29_0x20;
    undefined field30_0x21;
    undefined field31_0x22;
    undefined field32_0x23;
    undefined field33_0x24;
    undefined field34_0x25;
    undefined field35_0x26;
    byte padding_35;
};

typedef struct Simulator_Global_State Simulator_Global_State, *PSimulator_Global_State;

struct Simulator_Global_State {
    void *build_item_manager_ptr_0;
    void *history_object_ptr_4;
};

typedef struct Palette_Object Palette_Object, *PPalette_Object;

struct Palette_Object {
    void *vtable;
    void *color_buffer_ptr;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    HPALETTE16 palette_handle;
};

typedef struct Display_Adapter_Object Display_Adapter_Object, *PDisplay_Adapter_Object;

struct Display_Adapter_Object {
};

typedef struct Bitmap_Object Bitmap_Object, *PBitmap_Object;

struct Bitmap_Object {
    void *vtable;
    undefined field1_0x4;
    undefined field2_0x5;
    void *bitmap_data_ptr;
    void *some_object_ptr;
};


// WARNING! conflicting data type names: /types.h/ulong - /ulong

typedef struct System_Flag_Entry System_Flag_Entry, *PSystem_Flag_Entry;

struct System_Flag_Entry {
};

typedef struct UI_Object_A1C8 UI_Object_A1C8, *PUI_Object_A1C8;

struct UI_Object_A1C8 {
};

typedef struct Game_Settings_Manager Game_Settings_Manager, *PGame_Settings_Manager;

struct Game_Settings_Manager {
};

typedef struct UI_EF9C UI_EF9C, *PUI_EF9C;

struct UI_EF9C {
};

typedef struct UI_Container UI_Container, *PUI_Container;

struct UI_Container {
};

typedef struct UI_Element_EB1A UI_Element_EB1A, *PUI_Element_EB1A;

struct UI_Element_EB1A {
};

typedef struct UI_Element_BDC0 UI_Element_BDC0, *PUI_Element_BDC0;

struct UI_Element_BDC0 {
};

typedef struct UI_Component_EAAC UI_Component_EAAC, *PUI_Component_EAAC;

struct UI_Component_EAAC {
};

typedef struct UI_Element_BDC4 UI_Element_BDC4, *PUI_Element_BDC4;

struct UI_Element_BDC4 {
};

typedef struct UI_EFC4 UI_EFC4, *PUI_EFC4;

struct UI_EFC4 {
};

typedef struct UI_Tree_Node UI_Tree_Node, *PUI_Tree_Node;

struct UI_Tree_Node {
};

typedef struct UI_Element_BDC8 UI_Element_BDC8, *PUI_Element_BDC8;

struct UI_Element_BDC8 {
};

typedef struct UI_Relationship_Link UI_Relationship_Link, *PUI_Relationship_Link;

struct UI_Relationship_Link {
};

typedef struct UI_DanBrotherton_Window UI_DanBrotherton_Window, *PUI_DanBrotherton_Window;

struct UI_DanBrotherton_Window {
    void *vtable;
};

typedef struct UI_Element_EC00 UI_Element_EC00, *PUI_Element_EC00;

struct UI_Element_EC00 {
};

typedef struct UI_Element_BDCC UI_Element_BDCC, *PUI_Element_BDCC;

struct UI_Element_BDCC {
};

typedef struct UI_Colony_Morale_Dialog UI_Colony_Morale_Dialog, *PUI_Colony_Morale_Dialog;

struct UI_Colony_Morale_Dialog {
};

typedef struct UI_Element_D780 UI_Element_D780, *PUI_Element_D780;

struct UI_Element_D780 {
};

typedef struct UI_Grid_16 UI_Grid_16, *PUI_Grid_16;

struct UI_Grid_16 {
};

typedef struct UI_Container_Item UI_Container_Item, *PUI_Container_Item;

struct UI_Container_Item {
};

typedef struct UI_Relationship_Manager UI_Relationship_Manager, *PUI_Relationship_Manager;

struct UI_Relationship_Manager {
};

typedef struct UI_Element_BDDC UI_Element_BDDC, *PUI_Element_BDDC;

struct UI_Element_BDDC {
};

typedef struct UI_Element_D98E UI_Element_D98E, *PUI_Element_D98E;

struct UI_Element_D98E {
};


// WARNING! conflicting data type names: /ui/UI_Window - /UI_Window


// WARNING! conflicting data type names: /ui/UI_Build_Item_TypeE4EA - /UI_Build_Item_TypeE4EA

typedef struct UI_Window_9566 UI_Window_9566, *PUI_Window_9566;

struct UI_Window_9566 {
};

typedef struct UI_Transaction_Item_Type2 UI_Transaction_Item_Type2, *PUI_Transaction_Item_Type2;

struct UI_Transaction_Item_Type2 {
};

typedef struct UI_Transaction_Item_Type5 UI_Transaction_Item_Type5, *PUI_Transaction_Item_Type5;

struct UI_Transaction_Item_Type5 {
};

typedef struct UI_Event_List_Manager UI_Event_List_Manager, *PUI_Event_List_Manager;

struct UI_Event_List_Manager {
};

typedef struct UI_Element_EC62 UI_Element_EC62, *PUI_Element_EC62;

struct UI_Element_EC62 {
};

typedef struct UI_Special_Dialog UI_Special_Dialog, *PUI_Special_Dialog;

struct UI_Special_Dialog {
};

typedef struct UI_Complex_Dialog UI_Complex_Dialog, *PUI_Complex_Dialog;

struct UI_Complex_Dialog {
};

typedef struct UI_Element_D71A UI_Element_D71A, *PUI_Element_D71A;

struct UI_Element_D71A {
};

typedef struct UI_Component_DD4A UI_Component_DD4A, *PUI_Component_DD4A;

struct UI_Component_DD4A {
};

typedef struct UI_Element_CA4A UI_Element_CA4A, *PUI_Element_CA4A;

struct UI_Element_CA4A {
};

typedef struct UI_Slider_Component UI_Slider_Component, *PUI_Slider_Component;

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

typedef struct UI_Range_Entry UI_Range_Entry, *PUI_Range_Entry;

struct UI_Range_Entry {
    byte b0;
    undefined field1_0x1;
    byte b2;
    undefined field3_0x3;
    byte b4;
    undefined field5_0x5;
    byte b6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    byte padding;
};

typedef struct UI_Build_Item_Base UI_Build_Item_Base, *PUI_Build_Item_Base;

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

typedef struct UI_Window_Base UI_Window_Base, *PUI_Window_Base;

struct UI_Window_Base {
    void *vtable;
    long unique_id;
    void *context_ptr;
};

typedef struct UI_Sprite_Component UI_Sprite_Component, *PUI_Sprite_Component;

struct UI_Sprite_Component {
};

typedef struct UI_Colony_Component UI_Colony_Component, *PUI_Colony_Component;

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

typedef struct UI_Production_Item UI_Production_Item, *PUI_Production_Item;

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

typedef struct UI_SubComponent_Hub UI_SubComponent_Hub, *PUI_SubComponent_Hub;

struct UI_SubComponent_Hub {
    void *vtable;
    long unique_id;
    void *parent_ptr;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    undefined field7_0x10;
    undefined field8_0x11;
    undefined field9_0x12;
    undefined field10_0x13;
    undefined field11_0x14;
    undefined field12_0x15;
    long entity_packed_id_16;
    void *entity_cached_ptr_1A_val;
    undefined field15_0x1e;
    undefined field16_0x1f;
    undefined field17_0x20;
    void *list1_ptr_1A;
    void *list2_ptr_1E;
    undefined field20_0x29;
    long entity_packed_id_2A_val;
    void *sub_component_ptr_2E_val;
    void *list3_ptr_22;
    void *list4_ptr_26;
    undefined field25_0x3a;
    undefined field26_0x3b;
    undefined field27_0x3c;
    undefined field28_0x3d;
    undefined field29_0x3e;
    undefined field30_0x3f;
    undefined field31_0x40;
    undefined field32_0x41;
    u16 resource_value_32;
    u16 resource_limit_34;
    undefined field35_0x46;
    undefined field36_0x47;
    void *list5_ptr_36;
    void *list6_ptr_3A;
    void *list7_ptr_3E;
};

typedef struct UI_Production_Item_Base UI_Production_Item_Base, *PUI_Production_Item_Base;

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

typedef struct UI_Item_Base UI_Item_Base, *PUI_Item_Base;

struct UI_Item_Base {
    void *vtable;
    long owner_ref;
    long parent_id;
    u16 item_val;
};

typedef struct UI_Window_with_List UI_Window_with_List, *PUI_Window_with_List;

struct UI_Window_with_List {
    void *vtable;
    long unique_id;
    void *parent_ptr;
    void *managed_list_ptr;
};

typedef struct UI_Allocation_Panel UI_Allocation_Panel, *PUI_Allocation_Panel;

struct UI_Allocation_Panel {
};

typedef struct UI_Sorted_Linked_List UI_Sorted_Linked_List, *PUI_Sorted_Linked_List;

struct UI_Sorted_Linked_List {
    void *vtable;
    void *head_ptr;
    void *tail_ptr_or_count;
};

typedef struct UI_Managed_List UI_Managed_List, *PUI_Managed_List;

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

typedef struct UI_Ship_View_Controller UI_Ship_View_Controller, *PUI_Ship_View_Controller;

struct UI_Ship_View_Controller {
};

typedef struct UI_Main_View_Controller UI_Main_View_Controller, *PUI_Main_View_Controller;

struct UI_Main_View_Controller {
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

typedef struct UI_Allocation_Tab_Manager UI_Allocation_Tab_Manager, *PUI_Allocation_Tab_Manager;

struct UI_Allocation_Tab_Manager {
};

typedef struct UI_Global_Window_Manager UI_Global_Window_Manager, *PUI_Global_Window_Manager;

struct UI_Global_Window_Manager {
    void *vtable;
    long unique_id;
    void *parent_ptr_val;
    void *managed_list_ptr;
    void *active_coord_ptr;
};

typedef struct UI_Colony_Production_Manager UI_Colony_Production_Manager, *PUI_Colony_Production_Manager;
