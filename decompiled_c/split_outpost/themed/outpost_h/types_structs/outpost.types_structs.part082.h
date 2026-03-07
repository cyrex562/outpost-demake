/*
 * Source: outpost.h
 * Theme: types_structs
 * Chunk: 82/82
 * Original lines (combined): 61041-64807
 * Boundaries: top-level declarations/definitions only
 */


struct Collection_Object_3B3E {
};

typedef struct Configuration_Manager Configuration_Manager, *PConfiguration_Manager;

struct Configuration_Manager {
};

typedef struct Gameplay_Object Gameplay_Object, *PGameplay_Object;

struct Gameplay_Object {
    void *vtable;
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
    undefined field37_0x28;
    undefined field38_0x29;
    undefined field39_0x2a;
    undefined field40_0x2b;
    undefined field41_0x2c;
    undefined field42_0x2d;
    undefined field43_0x2e;
    undefined field44_0x2f;
    undefined field45_0x30;
    undefined field46_0x31;
    undefined field47_0x32;
    undefined field48_0x33;
    undefined field49_0x34;
    undefined field50_0x35;
    undefined field51_0x36;
    undefined field52_0x37;
    undefined field53_0x38;
    undefined field54_0x39;
    void *sprite_obj_ptr;
};

struct Resource_Change_Entry {
    void *vtable;
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
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    byte field_18;
};

typedef struct Turn_Manager Turn_Manager, *PTurn_Manager;

typedef struct Gameplay_SubObject Gameplay_SubObject, *PGameplay_SubObject;

struct Gameplay_SubObject {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    byte field_5;
};
void __cdecl16far dos_get_system_time_to_internal_struct_far(void *time_struct);
int __cdecl16far is_daylight_savings_active_internal_far(void *date_struct);
void __stdcall16far UI_Post_Command_Message_From_Struct(void *struct_ptr);
void * __stdcall16far zero_init_struct_6bytes(void *ptr);
void __stdcall16far unpack_3word_struct(void *src,int *out1,int *out2,int *out3);
void __stdcall16far copy_struct_6bytes(void *dest,void *src);
void * __stdcall16far construct_object_with_vtable(astruct_491 *this,u16 param_2);
void __stdcall16far call_virtual_destructor_logic(void *obj,u16 param_2);
void * __stdcall16far zero_init_12bytes_struct(void *ptr);
void * __stdcall16far copy_two_6byte_structs_to_12byte(void *dest,void *src1,void *src2);
void __stdcall16far pack_two_3word_structs(void *param_1,int param_2,int param_3,undefined2 param_4,int param_5,int param_6);
void __stdcall16far copy_two_6byte_structs_to_12byte_v2(void *dest,void *src1,void *src2);
void __stdcall16far split_12byte_struct_to_two_6byte(void *src,void *dest1,void *dest2);
void __stdcall16far calc_abs_diff_between_halves_of_12byte_struct(void *dest,void *src,u16 param_3,u16 param_4);
int __stdcall16far file_context_serialize_3word_struct_logic(void *this,void *struct_ptr);
int __stdcall16far file_context_deserialize_3word_struct_logic(void *this,void *struct_ptr);
void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper(void *ptr);
void * __stdcall16far Collection_Object_Base_ctor_3B5E(astruct_489 *this);
void __stdcall16far Collection_Object_Base_dtor_3B5E(astruct_490 *this,u16 param_2);
astruct_490 * __stdcall16far Collection_Object_Base_dtor_Scalar_Deleting_3b18(astruct_490 *param_1,byte param_2);
void __stdcall16far UI_Main_View_Controller_Update_Viewport_from_Struct_Logic(long context,long src_struct_ref);
void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_2(long struct_ref);
int __stdcall16far UI_Construction_Manager_Submit_Entity_Command_Logic(astruct_466 *param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4);
void __stdcall16far UI_Construction_Manager_Reset_Selection_State_Logic(long context);
void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_4222(long struct_ref);
void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_4216(long struct_ref);
void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_421c(long struct_ref);
void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_4210(long struct_ref);
void __stdcall16far UI_Construction_Manager_Switch_Selected_Structure_Logic(long context,int command,int res_id);
long __stdcall16far UI_Construction_Manager_Consume_Selected_Structure_Bitmap_Logic(long context);
long __stdcall16far UI_Construction_Manager_Get_Selected_Structure_Bitmap_Logic(long context);
void __stdcall16far UI_Construction_Manager_Advance_Selection_Index_Logic(long context);
void __stdcall16far Build_Site_Object_Initialize_Vtable_and_Resource(long context,int res_id);
long __stdcall16far Gameplay_Object_Base_vtable_init_Helper(long this_ref);
void __stdcall16far UI_Construction_View_Refresh_Selected_Structure_Display_9068(void *this_ptr);
void __stdcall16far UI_Component_Upsert_Resource_SubObject_6a2c(astruct_258 *param_1,astruct_259 *param_2);
u16 __stdcall16far UI_Build_Item_Execute_Complex_Adjacency_Placement_Logic_a278(astruct_201 *param_1,astruct_200 *param_2);
