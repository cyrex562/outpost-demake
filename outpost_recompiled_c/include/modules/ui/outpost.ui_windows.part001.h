/*
 * Source: outpost.h
 * Theme: ui_windows
 * Chunk: 1/7
 * Original lines (combined): 1-10563
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

typedef uint16_t HMENU16;

typedef uint16_t HWND16;

typedef struct UI_Build_Item_TypeD88E UI_Build_Item_TypeD88E, *PUI_Build_Item_TypeD88E;

struct UI_Build_Item_TypeD88E {
};

typedef struct WIN16_MSG WIN16_MSG, *PWIN16_MSG;

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

typedef struct UI_Build_Item_TypeC006 UI_Build_Item_TypeC006, *PUI_Build_Item_TypeC006;

struct UI_Build_Item_TypeC006 {
};

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

typedef struct UI_Build_Item_TypeC940 UI_Build_Item_TypeC940, *PUI_Build_Item_TypeC940;

struct UI_Build_Item_TypeC940 {
};

typedef struct UI_Complex_Control UI_Complex_Control, *PUI_Complex_Control;

struct UI_Complex_Control {
};

typedef struct UI_Window UI_Window, *PUI_Window;

struct UI_Window {
};

typedef struct UI_Object_A1C8 UI_Object_A1C8, *PUI_Object_A1C8;

struct UI_Object_A1C8 {
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

typedef struct UI_Window_Base UI_Window_Base, *PUI_Window_Base;

typedef struct UI_Sprite_Component UI_Sprite_Component, *PUI_Sprite_Component;

struct UI_Sprite_Component {
};

typedef struct UI_Colony_Component UI_Colony_Component, *PUI_Colony_Component;

typedef struct UI_Production_Item UI_Production_Item, *PUI_Production_Item;

typedef struct UI_SubComponent_Hub UI_SubComponent_Hub, *PUI_SubComponent_Hub;

typedef struct UI_Production_Item_Base UI_Production_Item_Base, *PUI_Production_Item_Base;

typedef struct UI_Item_Base UI_Item_Base, *PUI_Item_Base;

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

typedef struct UI_Managed_List UI_Managed_List, *PUI_Managed_List;

typedef struct UI_Ship_View_Controller UI_Ship_View_Controller, *PUI_Ship_View_Controller;

struct UI_Ship_View_Controller {
};

typedef struct UI_Main_View_Controller UI_Main_View_Controller, *PUI_Main_View_Controller;

struct UI_Main_View_Controller {
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

typedef struct UI_Sorted_Linked_List_Manager UI_Sorted_Linked_List_Manager, *PUI_Sorted_Linked_List_Manager;

typedef struct UI_Report_Grid_Manager UI_Report_Grid_Manager, *PUI_Report_Grid_Manager;

struct UI_Report_Grid_Manager {
};

typedef struct UI_Trade_Manager UI_Trade_Manager, *PUI_Trade_Manager;

struct UI_Trade_Manager {
};

typedef struct UI_Navigation_Entry UI_Navigation_Entry, *PUI_Navigation_Entry;

struct UI_Navigation_Entry {
};

typedef struct UI_Building_Manager UI_Building_Manager, *PUI_Building_Manager;

struct UI_Building_Manager {
};

typedef struct UI_Navigation_Manager UI_Navigation_Manager, *PUI_Navigation_Manager;

struct UI_Navigation_Manager {
};

typedef struct UI_Build_Item_List_Manager UI_Build_Item_List_Manager, *PUI_Build_Item_List_Manager;

struct UI_Build_Item_List_Manager {
    void *list1_ptr;
    void *list2_ptr;
};

typedef struct UI_Transaction_Item_Base UI_Transaction_Item_Base, *PUI_Transaction_Item_Base;

struct UI_Transaction_Item_Base {
};

struct astruct_40 {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    HWND16 field6_0x6;
    HWND16 field7_0x8;
    uint field8_0xa;
    undefined field9_0xc;
    undefined field10_0xd;
    uint16_t field11_0xe;
};
