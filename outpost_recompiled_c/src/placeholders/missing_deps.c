#include "core/missing_deps.h"
#include "core/outpost_common.h"
#include "core/outpost_platform.h"

int g_outpost_missing_dep_counter = 0;

int outpost_missing_dep_stub(const char *symbol_name)
{
    (void)symbol_name;
    g_outpost_missing_dep_counter += 1;
    return 0;
}

/* ── Graduated-file global placeholder definitions ───────────────────────────
 * Each global here is defined in a working-set file that has not yet been
 * graduated. When that file is added to OUTPOST_GRADUATED_FILES, remove the
 * corresponding line below to pick up the real definition.
 * TODO(graduate): remove when defining file is graduated.
 */

/* strings_text.part001 globals */
/* NOTE: g_LowLevelHandleTable, g_TaskDI, p_RuntimeInit_Callback — real defs in system_runtime.part001.c (graduated) */
pointer p_EnvOffset_Base            = 0;   /* TODO: real def in strings_text.part001 */
pointer p_EnvSegment_Base           = 0;   /* TODO: real def in strings_text.part001 */

/* strings_text.part005 globals */
pointer _p_StringPropertyTable     = 0;   /* TODO: real def in strings_text.part005 */
void   *g_AllocatedBlock_Offset     = 0;   /* TODO: real def */
void   *g_AllocatedBlock_Segment    = 0;   /* TODO: real def */
const char s__s___02ld_1050_0cea[]  = "%s %02ld";  /* lit at 1050:0CEA */
const char s__s___02ld_1050_0cf4[]  = "%s %02ld";  /* lit at 1050:0CF4 */

/* strings_text.part002 globals */
uint  g_MaxFileHandles                              = 20;   /* TODO: real def in strings_text.part002 */
uint  g_HeapContext                                 = 0;    /* TODO: real def in strings_text.part002 */
void *p_SystemIO_Active                             = NULL; /* TODO: real def in strings_text.part002 */
void *PTR_DAT_1050_0000_1050_6064                   = NULL; /* TODO: real def in strings_text.part002 */
void *p_CurrentHeapContext                          = NULL; /* TODO: real def in strings_text.part002 */
byte *PTR_s_ed_in_Op_Op_1050_0028_1050_5f8e         = NULL; /* TODO: real def in strings_text.part002 */
uint  g_AllocFlags                                  = 0;    /* TODO: real def in strings_text.part002 */
void *s_A_1050_4202                                 = NULL; /* TODO: real def in strings_text.part002 */
char *s_180_flc_1050_1bfe                           = NULL; /* TODO: real def in strings_text.part002 */

/* strings_text.part003 globals */
undefined2 g_TimezoneName_Segment            = 0;    /* TODO: real def in strings_text.part003 */
uint       g_TimezoneName_Offset             = 0;    /* TODO: real def in strings_text.part003 */
undefined *g_TimezoneOffset_High             = NULL; /* TODO: real def in strings_text.part003 */
u16        g_TimezoneOffset_Low              = 0;    /* TODO: real def in strings_text.part003 */
u16        u16_1050_61d2                     = 0;    /* TODO: real def in strings_text.part003 */
char      *_g_DSTName_Offset                 = NULL; /* TODO: real def in strings_text.part003 */
dword      p_StrtokNextToken                 = 0;    /* TODO: real def in strings_text.part003 */
undefined *PTR_DAT_1050_0000_1050_5f78       = NULL; /* TODO: real def in strings_text.part003 */
undefined *PTR_DAT_1050_0000_1050_5f88       = NULL; /* TODO: real def — error code byte stored as ptr-sized value */
void      *p_AllocStrategyCode               = NULL; /* TODO: real def in strings_text.part003 */
char      *s_NewFailedMsg                    = NULL; /* TODO: real def in strings_text.part003 */
char      *s___1050_5fea                     = NULL; /* TODO: verify — path string at 1050:5fea */
char      *s___1050_5fec                     = NULL; /* TODO: verify — path suffix string at 1050:5fec */
void      *s_NMSG_1050_63f6                  = NULL; /* TODO: verify — message table at 1050:63f6 */
/* sprintf format buffer globals */
undefined  PTR_DAT_1050_0000_1050_68b2       = 0;    /* TODO: real def in strings_text.part003 */
undefined *PTR_DAT_1050_0000_1050_68ae       = NULL; /* TODO: real def in strings_text.part003 */
undefined *PTR_DAT_1050_0000_1050_68b0       = NULL; /* TODO: real def in strings_text.part003 */
byte      *_PTR_DAT_1050_0000_1050_68a8      = NULL; /* TODO: real def in strings_text.part003 */
undefined2 PTR_DAT_1050_0000_1050_68aa       = 0;    /* TODO: real def in strings_text.part003 */
undefined *PTR_DAT_1050_0000_1050_68ac       = NULL; /* TODO: real def in strings_text.part003 */
void      *_p_ResourceManager               = NULL; /* TODO: real def in strings_text.part003 */
void      *PTR_DAT_1050_0000_1050_02ec       = NULL; /* TODO: real def in strings_text.part003 */

/* strings_text.part004 globals */
pointer p_GlobalResourceManager     = 0;   /* TODO: real def in strings_text.part004 */
pointer p_Pool_Type2_Component      = 0;   /* TODO: real def in strings_text.part004 */
pointer p_DebugFlags                = 0;   /* TODO: real def in strings_text.part004 */
pointer p_LogHandle                 = 0;   /* TODO: real def in strings_text.part004 */
pointer p_SaveVersion               = 0;   /* TODO: real def in strings_text.part004 */
pointer p_LastAllocatedBlock        = 0;   /* TODO: real def in strings_text.part004 */
pointer p_UI_Color1                 = 0;   /* TODO: real def in strings_text.part004 */
pointer p_UI_Color2                 = 0;   /* TODO: real def in strings_text.part004 */
char    g_SaveVersionScratch[64]    = {0}; /* TODO: real def in strings_text.part004 */

/* ── Graduated-file function stubs ───────────────────────────────────────────
 * Using unprototyped C definitions () to accept any argument list without
 * conflicting with generated-header forward declarations.
 * TODO(graduate): remove stub when defining file is graduated.
 */

/* memory / alloc */
/* NOTE: allocate_memory — real def in memory_heap.part003.c (graduated) */
/* NOTE: heap_alloc_safe — real def in memory_heap.part004.c (graduated) */
/* NOTE: free_if_not_null — real def in memory_heap.part003.c (graduated) */

/* NOTE: sprintf_wrapper defined in part003.c (graduated) — stub removed */
/* NOTE: getenv_wrapper_far_ptr_search defined in part003.c (graduated) — stub removed */

/* strings_text.part002 I/O function stubs */
/* NOTE: check_error_flag_and_set_internal_err_u16 — real def in system_runtime.part001.c (graduated) */
/* NOTE: check_error_flag_and_set_internal_err_void — real def in system_runtime.part001.c (graduated) */
void handle_low_level_write_dispatch_internal()  { outpost_missing_dep_stub("handle_low_level_write_dispatch_internal"); }
void fatal_exit_shorthand()                      { outpost_missing_dep_stub("fatal_exit_shorthand"); }
int  get_stack_space_available_bytes()           { return 0x200; /* safe default */ }
/* NOTE: runtime_stack_check_fail_handler — real def in system_runtime.part001.c (graduated) */
void handle_update_error_state_wrapper_void()    { outpost_missing_dep_stub("handle_update_error_state_wrapper_void"); }

/* graphics / bitmap */
void *Bitmap_Object_Get_Pixel_Address() { outpost_missing_dep_stub("Bitmap_Object_Get_Pixel_Address"); return NULL; }

/* pointer / pair utilities */
void *init_long_pair()              { outpost_missing_dep_stub("init_long_pair");              return NULL; }
void  unpack_word_pair()            { outpost_missing_dep_stub("unpack_word_pair"); }
void *get_with_lazy_init()          { outpost_missing_dep_stub("get_with_lazy_init");          return NULL; }
void *get_far_ptr_at_offset_10_logic() { outpost_missing_dep_stub("get_far_ptr_at_offset_10_logic"); return NULL; }
void *validate_and_get_block()      { outpost_missing_dep_stub("validate_and_get_block");      return NULL; }

/* list ops */
long  get_next_list_item()          { outpost_missing_dep_stub("get_next_list_item");          return 0L; }
void  linked_list_clear_and_destroy_items() { outpost_missing_dep_stub("linked_list_clear_and_destroy_items"); }

/* file / handle ops */
int   file_write_check()            { return (int)outpost_missing_dep_stub("file_write_check"); }
void  handle_open_resource_locked() { outpost_missing_dep_stub("handle_open_resource_locked"); }
void  handle_flush_specific()       { outpost_missing_dep_stub("handle_flush_specific"); }

/* NOTE: getenv_wrapper_far_ptr_search graduated in part003 */
int   dos_get_cwd_on_current_drive_wrapper_far() { return (int)outpost_missing_dep_stub("dos_get_cwd_on_current_drive_wrapper_far"); }

/* strings_text.part003 function stubs */
long  mul_u32_u32_standard()       { outpost_missing_dep_stub("mul_u32_u32_standard"); return 0L; }
void  format_string_dispatcher_internal() { outpost_missing_dep_stub("format_string_dispatcher_internal"); }
/* NOTE: handle_buffered_write_char — real def in system_runtime.part001.c (graduated) */
int   dos_get_current_drive_number_internal_far() { return (int)outpost_missing_dep_stub("dos_get_current_drive_number_internal_far"); }
void  dos_get_set_file_attributes_internal_far() { outpost_missing_dep_stub("dos_get_set_file_attributes_internal_far"); }
/* NOTE: heap_alloc_bytes — real def in memory_heap.part003.c (graduated) */
void  UI_Save_As_Game_Logic()       { outpost_missing_dep_stub("UI_Save_As_Game_Logic"); }
void  UI_Prompt_Save_Game_Dialog()  { outpost_missing_dep_stub("UI_Prompt_Save_Game_Dialog"); }
/* NOTE: check_error_flag_and_set_internal_err_u8_2 — real def in system_runtime.part001.c (graduated) */

/* memory ops */
void  memset_far()                  { outpost_missing_dep_stub("memset_far"); }

/* resource manager */
void *Resource_Manager_Get_Resource_by_ID_Logic()    { outpost_missing_dep_stub("Resource_Manager_Get_Resource_by_ID_Logic");    return NULL; }
/* Resource_Manager_LoadString_to_Internal_Buffer — real def in strings_text.part007.c */
void  Resource_Manager_Dispatch_Virtual_Call_6C_6b02() { outpost_missing_dep_stub("Resource_Manager_Dispatch_Virtual_Call_6C_6b02"); }

/* runtime init */
/* NOTE: call_runtime_initializers_backward — real def in system_runtime.part001.c (graduated) */
/* system_runtime.part001.c callee stubs — called from graduated functions; real defs in other system_runtime parts */
u16   handle_flush_internal_buffer()               { return (u16)outpost_missing_dep_stub("handle_flush_internal_buffer"); }
void  dos_remove_directory_internal_far()          { outpost_missing_dep_stub("dos_remove_directory_internal_far"); }
void *handle_get_available_slot()                  { outpost_missing_dep_stub("handle_get_available_slot"); return NULL; }
void  handle_init_from_mode_string()               { outpost_missing_dep_stub("handle_init_from_mode_string"); }
void  handle_flush_all_on_exit()                   { outpost_missing_dep_stub("handle_flush_all_on_exit"); }
int   handle_system_close_all_active_handles_wrapper_far() { return (int)outpost_missing_dep_stub("handle_system_close_all_active_handles_wrapper_far"); }
void  check_exported_stub_patch_state()    { outpost_missing_dep_stub("check_exported_stub_patch_state"); }

/* platform / process */
void  win16_terminate_process_dos()  { outpost_missing_dep_stub("win16_terminate_process_dos"); }
void  nop_near_stub_3(void)          { outpost_missing_dep_stub("nop_near_stub_3"); }
/* win16_app_exit_with_cleanup — real def in system_runtime.part001.c (graduated) */
void  win16_app_exit_with_cleanup(void);
void  win16_app_exit_wrapper(void)   { win16_app_exit_with_cleanup(); }

/* noop stubs (vtable / far call placeholders) */
void  far_noop_stub_1()             { outpost_missing_dep_stub("far_noop_stub_1"); }
void  far_noop_stub_2()             { outpost_missing_dep_stub("far_noop_stub_2"); }
/* NOTE: UI_Base_Object_dtor_cleanup — real def in memory_heap.part004.c (graduated) */
void  UI_Element_DestroyWindow_Wrapper()    { outpost_missing_dep_stub("UI_Element_DestroyWindow_Wrapper"); }
void  UI_Element_Handle_Custom_Message_199_Logic() { outpost_missing_dep_stub("UI_Element_Handle_Custom_Message_199_Logic"); }
void  UI_Element_Message_Dispatcher_Logic() { outpost_missing_dep_stub("UI_Element_Message_Dispatcher_Logic"); }
void  UI_Element_Send_WM_NCACTIVATE()       { outpost_missing_dep_stub("UI_Element_Send_WM_NCACTIVATE"); }
void  UI_Element_Send_WM_NCACTIVATE_Logic_Far() { outpost_missing_dep_stub("UI_Element_Send_WM_NCACTIVATE_Logic_Far"); }
void  UI_Element_Send_WM_NCPAINT_Logic()    { outpost_missing_dep_stub("UI_Element_Send_WM_NCPAINT_Logic"); }
void  UI_Handle_Menu_Select_Logic()         { outpost_missing_dep_stub("UI_Handle_Menu_Select_Logic"); }
void  UI_Handle_Run_Turn_Command()          { outpost_missing_dep_stub("UI_Handle_Run_Turn_Command"); }
void  UI_Handle_System_Command_Logic()      { outpost_missing_dep_stub("UI_Handle_System_Command_Logic"); }
void  UI_Main_Window_Command_Dispatcher_0c60() { outpost_missing_dep_stub("UI_Main_Window_Command_Dispatcher_0c60"); }
void  UI_Refresh_Child_Window_maybe()       { outpost_missing_dep_stub("UI_Refresh_Child_Window_maybe"); }
void  UI_Refresh_Colors_and_Components()    { outpost_missing_dep_stub("UI_Refresh_Colors_and_Components"); }
void  UI_Show_Main_Popup_Menu()             { outpost_missing_dep_stub("UI_Show_Main_Popup_Menu"); }
void  UI_Show_Menu_Context_maybe()          { outpost_missing_dep_stub("UI_Show_Menu_Context_maybe"); }
void  UI_Shutdown_Application()             { outpost_missing_dep_stub("UI_Shutdown_Application"); }
void  UI_Trigger_Child_Component_Event_4C() { outpost_missing_dep_stub("UI_Trigger_Child_Component_Event_4C"); }
void  UI_Window_Base_dtor_Scalar_Deleting() { outpost_missing_dep_stub("UI_Window_Base_dtor_Scalar_Deleting"); }
void  UI_Window_Call_Active_Child_Method_0x68() { outpost_missing_dep_stub("UI_Window_Call_Active_Child_Method_0x68"); }
void  UI_Window_Handle_Child_Command_and_Switch_Focus() { outpost_missing_dep_stub("UI_Window_Handle_Child_Command_and_Switch_Focus"); }
void  UI_Window_Init_Child_Objects_Logic()  { outpost_missing_dep_stub("UI_Window_Init_Child_Objects_Logic"); }
void  UI_Window_Set_Active_Child_Logic()    { outpost_missing_dep_stub("UI_Window_Set_Active_Child_Logic"); }
void  UI_Window_Set_Position_and_Refresh_Children() { outpost_missing_dep_stub("UI_Window_Set_Position_and_Refresh_Children"); }
/* UI_Component_Set_String_at_Offset_1A_Logic — real def in strings_text.part007.c */

/* strings_text.part005 function stubs */
void *init_memory_allocator()       { outpost_missing_dep_stub("init_memory_allocator");      return NULL; }
void *get_array_element_6bytes()    { outpost_missing_dep_stub("get_array_element_6bytes");   return NULL; }
void *UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c() { outpost_missing_dep_stub("UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c"); return NULL; }
char *Lookup_Entity_Name_by_ID_Logic_bd80() { outpost_missing_dep_stub("Lookup_Entity_Name_by_ID_Logic_bd80"); return NULL; }
long  UI_Transaction_Item_Type3_ctor()      { outpost_missing_dep_stub("UI_Transaction_Item_Type3_ctor");      return 0L; }
long  UI_Transaction_Item_Type2_ctor()      { outpost_missing_dep_stub("UI_Transaction_Item_Type2_ctor");      return 0L; }
void *UI_Relationship_Manager_Find_Link_by_Strings_Logic() { outpost_missing_dep_stub("UI_Relationship_Manager_Find_Link_by_Strings_Logic"); return NULL; }
void *Colony_Batch_Init_Production_Items_General_Logic_4e78() { outpost_missing_dep_stub("Colony_Batch_Init_Production_Items_General_Logic_4e78"); return NULL; }
int   search_array_for_value()      { return (int)outpost_missing_dep_stub("search_array_for_value"); }
/* NOTE: alloc_with_hooks — real def in memory_heap.part003.c (graduated) */
/* Resource_Manager_LoadString_and_Duplicate — real def in strings_text.part007.c */

/* strings_text.part006 globals */
void *p_SimulatorWorldContext        = 0;       /* TODO: real def in memory_heap.part009 */
u16   g_ReportFilter_0ECC            = 0;       /* TODO: real def in misc.part001 */
const char s_1_1050_389a[]           = "1";     /* vtable sentinel string @ 1050:389A */
const char s_573_bmp_1050_200f[]     = "573.bmp"; /* resource name @ 1050:200F */
const char s_40_33_1050_3b5c[]       = "@3";    /* sentinel string @ 1050:3B5C */

/* strings_text.part006 function stubs */
void  UI_System_Set_State_Flag_and_Notify()              { outpost_missing_dep_stub("UI_System_Set_State_Flag_and_Notify"); }
void  UI_Container_Notify_Listeners_at_Offset_4_Logic()  { outpost_missing_dep_stub("UI_Container_Notify_Listeners_at_Offset_4_Logic"); }
void  Path_Manager_Construct_Resource_Path()             { outpost_missing_dep_stub("Path_Manager_Construct_Resource_Path"); }
void *Collection_Object_Subclass_ctor_3B3E()             { outpost_missing_dep_stub("Collection_Object_Subclass_ctor_3B3E");            return NULL; }
void *Collection_Object_Subclass_3B3E_factory()          { outpost_missing_dep_stub("Collection_Object_Subclass_3B3E_factory");         return NULL; }
void *memcpy_far_words()                                 { outpost_missing_dep_stub("memcpy_far_words");                                return NULL; }
void *UI_Build_Item_Get_Construction_Manager_Logic_b58e(){ outpost_missing_dep_stub("UI_Build_Item_Get_Construction_Manager_Logic_b58e"); return NULL; }
void *UI_Component_Get_FarPtr_at_1FA()                   { outpost_missing_dep_stub("UI_Component_Get_FarPtr_at_1FA");                  return NULL; }
/* UI_Generate_Formatted_Label_Logic — real def in strings_text.part009.c */
long  Entity_Get_Indirect_ID_Logic()                     { return (long)outpost_missing_dep_stub("Entity_Get_Indirect_ID_Logic"); }
int   UI_Get_U16_at_Offset_C_Logic()                     { return (int)outpost_missing_dep_stub("UI_Get_U16_at_Offset_C_Logic"); }
void  String_Wrapper_Object_dtor_37C4()                  { outpost_missing_dep_stub("String_Wrapper_Object_dtor_37C4"); }
void *Simulator_Get_Entity_Object_from_PackedID_e1ec()   { outpost_missing_dep_stub("Simulator_Get_Entity_Object_from_PackedID_e1ec");  return NULL; }
/* LoadString_Global_Wrapper — real def in strings_text.part007.c */
void  String_Wrapper_Subclass_dtor_53F4()                { outpost_missing_dep_stub("String_Wrapper_Subclass_dtor_53F4"); }

/* strings_text.part007 globals */
const char s_off_1050_13c8[]            = "off";
const char s_on_1050_13c4[]             = "on";
const char s_falseMap_1050_13de[]       = "falseMap";
const char s_rez_1050_13c0[]            = "rez";
const char s_anims_1050_13cc[]          = "anims";
const char s_music_1050_13d2[]          = "music";
const char s_sound_1050_13d8[]          = "sound";
const char s_movies_1050_13e8[]         = "movies";
const char s_turns_1050_1466[]          = "turns";
const char s_turnsDlgStatus_1050_146c[] = "turnsDlgStatus";
const char s_savePath_1050_147c[]       = "savePath";
const char s_aiName_1050_1486[]         = "aiName";
const char s_playerName_1050_148e[]     = "playerName";
const char s_general_1050_13b0[]        = "general";
void *PTR_s_unknown_1050_13fa_1050_1446[] = {0,0,0,0,0,0,0,0};
void *PTR_DAT_1050_24ea_1050_2526[]       = {0,0,0,0,0,0,0,0};

/* strings_text.part008 globals */
const char s__mid_1050_14c0[] = ".mid";   /* audio extension @ 1050:14C0 */
const char s__wav_1050_14ba[] = ".wav";   /* audio extension @ 1050:14BA */

/* strings_text.part007 function stubs */
void  UI_Component_Init_State_Logic_6034()                             { outpost_missing_dep_stub("UI_Component_Init_State_Logic_6034"); }
void  switchD_1010_2ab5_Configuration_Manager_Write_Indexed_Values_Logic() { outpost_missing_dep_stub("switchD_1010_2ab5_Configuration_Manager_Write_Indexed_Values_Logic"); }
void  splitpath_far_optimized_with_segments()                          { outpost_missing_dep_stub("splitpath_far_optimized_with_segments"); }
char *Resource_Manager_Resolve_File_Path_Logic()                       { outpost_missing_dep_stub("Resource_Manager_Resolve_File_Path_Logic"); return NULL; }
/* Resource_Manager_Report_File_Error_Logic — real def in strings_text.part008.c */

/* strings_text.part008 function stubs */
HWND16 g_ParentHWND                                           = NULL; /* TODO: real def */
void  *UI_Component_Get_Simulator_Object_via_PackedID_1d58()  { outpost_missing_dep_stub("UI_Component_Get_Simulator_Object_via_PackedID_1d58"); return NULL; }
char  *Entity_Format_Full_Name_Label_Logic()                  { outpost_missing_dep_stub("Entity_Format_Full_Name_Label_Logic"); return NULL; }

/* strings_text.part009 globals */
char       s__lu_1050_381f[0x200]            = {0};  /* writable scratch buffer @ 1050:381F */
void      *p_SmallBlockFreeList              = NULL; /* small-block allocator head */
void      *PTR_DAT_1048_0000_1048_3820       = NULL; /* UI string buffer @ 1048:3820 */
/* NOTE: s_HeapVersion — real def in system_runtime.part001.c (graduated) */
/* NOTE: g_ModeVersion_13AE — real def in system_runtime.part001.c (graduated) */

/* ── strings_text.part009 function stubs ── */
void * UI_Component_Resolve_and_Cache_Entity_Ptr_73a8()       { outpost_missing_dep_stub("UI_Component_Resolve_and_Cache_Entity_Ptr_73a8");       return NULL; }
long   UI_Get_Entity_Property_by_Array_Index_Logic()          { outpost_missing_dep_stub("UI_Get_Entity_Property_by_Array_Index_Logic");           return 0; }
void * UI_Component_Find_Item_in_List_22_Logic_7c28()         { outpost_missing_dep_stub("UI_Component_Find_Item_in_List_22_Logic_7c28");          return NULL; }
void   UI_Dispatch_Global_Event_Logic()                       { outpost_missing_dep_stub("UI_Dispatch_Global_Event_Logic"); }
void   UI_Broadcast_Virtual_Notification_Wrapper()            { outpost_missing_dep_stub("UI_Broadcast_Virtual_Notification_Wrapper"); }
void * Bitmap_Object_Copy_Region_To_New_Bitmap()              { outpost_missing_dep_stub("Bitmap_Object_Copy_Region_To_New_Bitmap");               return NULL; }
/* NOTE: Bitmap_Object_Subclass_ctor_with_alloc — real def in memory_heap.part004.c (graduated) */
void   Bitmap_Object_Clear_with_Color_Logic()                 { outpost_missing_dep_stub("Bitmap_Object_Clear_with_Color_Logic"); }
void * pack_3words_alt()                                      { outpost_missing_dep_stub("pack_3words_alt");                                       return NULL; }
void   pack_3words_reverse()                                  { outpost_missing_dep_stub("pack_3words_reverse"); }
void * UI_Vector_Tracker_Object_ctor()                        { outpost_missing_dep_stub("UI_Vector_Tracker_Object_ctor");                        return NULL; }
/* NOTE: UI_Object_Add_Type_Value_Pair_to_Collection_at_Offset_12_Logic — real def in memory_heap.part007.c (graduated) */
u16    Simulator_Get_Planet_Resource_Metric_6db4()            { outpost_missing_dep_stub("Simulator_Get_Planet_Resource_Metric_6db4");            return 0; }
long   UI_Get_Entity_Resource_Data_at_Offset_16_Logic()       { outpost_missing_dep_stub("UI_Get_Entity_Resource_Data_at_Offset_16_Logic");       return 0; }

/* ── memory_heap.part005 function stubs ── */
/* Base_Object_ctor_init_2014_Logic — real def in strings_text.part006.c (graduated) */
/* Base_Object_dtor_2014_Logic      — real def in strings_text.part006.c (graduated) */
void   zero_init_struct_6bytes(void *s)                      { outpost_missing_dep_stub("zero_init_struct_6bytes"); }
void  *heap_alloc_with_flags(int f, long sz, void *ctx)      { outpost_missing_dep_stub("heap_alloc_with_flags"); return NULL; }
void   qsort_far_array_with_callback_internal()              { outpost_missing_dep_stub("qsort_far_array_with_callback_internal"); }
void  *UI_Subclass_EFC4_ctor(void *this_)                    { outpost_missing_dep_stub("UI_Subclass_EFC4_ctor"); return NULL; }
void   Game_Settings_Manager_dtor(void *this_)               { outpost_missing_dep_stub("Game_Settings_Manager_dtor"); }
void   Build_Site_Object_dtor_Internal(void *this_)          { outpost_missing_dep_stub("Build_Site_Object_dtor_Internal"); }
void  *UI_TreeNode_Control_ctor_init_c54a()                  { outpost_missing_dep_stub("UI_TreeNode_Control_ctor_init_c54a"); return NULL; }

/* ── memory_heap.part013 globals ── */
undefined *p_SimulatorTurnManager             = NULL; /* TODO: real def in memory_heap (TurnManager ctor) */
void      *PTR_DAT_1050_0000_1050_5a66        = NULL; /* TODO: real def – TurnManager primary list ptr */
void      *_PTR_DAT_1050_0000_1050_5bcc       = NULL; /* TODO: real def – TurnManager secondary list ptr */

/* ── memory_heap.part013 function stubs ── */
void UI_Item_List_Free_Data_Pointer_Logic(void *list)            { outpost_missing_dep_stub("UI_Item_List_Free_Data_Pointer_Logic"); }
void call_function_ptr_n_times_simple(void *fn, int msg, u16 n)  { outpost_missing_dep_stub("call_function_ptr_n_times_simple"); }
u16    UI_Component_Get_Entity_Resource_Field4_7f5a()         { outpost_missing_dep_stub("UI_Component_Get_Entity_Resource_Field4_7f5a");         return 0; }
u16    UI_Component_Get_Entity_Resource_Field2_7f98()         { outpost_missing_dep_stub("UI_Component_Get_Entity_Resource_Field2_7f98");         return 0; }
u16    UI_Component_Get_Entity_Resource_A_Output_6fd4()       { outpost_missing_dep_stub("UI_Component_Get_Entity_Resource_A_Output_6fd4");       return 0; }
u16    UI_Component_Get_Entity_Resource_B_Output_701c()       { outpost_missing_dep_stub("UI_Component_Get_Entity_Resource_B_Output_701c");       return 0; }
long   UI_Entity_Calculate_Total_Property_Value_Logic()       { outpost_missing_dep_stub("UI_Entity_Calculate_Total_Property_Value_Logic");       return 0; }
char * Entity_Format_Detailed_Status_Label_Logic()            { outpost_missing_dep_stub("Entity_Format_Detailed_Status_Label_Logic");            return NULL; }
char * Entity_Get_Status_Label_Logic()                        { outpost_missing_dep_stub("Entity_Get_Status_Label_Logic");                        return NULL; }
char * Entity_Get_Category_Name_Logic()                       { outpost_missing_dep_stub("Entity_Get_Category_Name_Logic");                       return NULL; }
char * Entity_Get_Category_Label_Logic()                      { outpost_missing_dep_stub("Entity_Get_Category_Label_Logic");                      return NULL; }
void   UI_Entity_Get_Two_Related_Values_Logic()               { outpost_missing_dep_stub("UI_Entity_Get_Two_Related_Values_Logic"); }
int    UI_Component_Check_Entity_GroupB_and_Active_7ea0()     { outpost_missing_dep_stub("UI_Component_Check_Entity_GroupB_and_Active_7ea0");     return 0; }
long   Entity_Resolve_Parent_Object_Logic()                   { outpost_missing_dep_stub("Entity_Resolve_Parent_Object_Logic");                   return 0; }
long   UI_Get_Nested_Collection_Value_Logic()                 { outpost_missing_dep_stub("UI_Get_Nested_Collection_Value_Logic");                 return 0; }
long   UI_Get_Nested_Collection_Value_Logic_Alt()             { outpost_missing_dep_stub("UI_Get_Nested_Collection_Value_Logic_Alt");             return 0; }
u16    UI_Component_Get_Entity_Property_v10_AA_Logic_7226()   { outpost_missing_dep_stub("UI_Component_Get_Entity_Property_v10_AA_Logic_7226");   return 0; }
long   Simulator_Sum_Entity_List_Production_4b40()            { outpost_missing_dep_stub("Simulator_Sum_Entity_List_Production_4b40");            return 0; }
long   Colony_Calculate_Sum_All_Resources_38b8()              { outpost_missing_dep_stub("Colony_Calculate_Sum_All_Resources_38b8");              return 0; }
int    UI_Component_Count_Nearby_Buildings_Logic_8030()       { outpost_missing_dep_stub("UI_Component_Count_Nearby_Buildings_Logic_8030");       return 0; }
void * UI_Component_Calculate_Entity_Resource_Output_Logic_7fd6() { outpost_missing_dep_stub("UI_Component_Calculate_Entity_Resource_Output_Logic_7fd6"); return NULL; }
char * UI_Entity_Get_Type_Description_Logic()                 { outpost_missing_dep_stub("UI_Entity_Get_Type_Description_Logic");                 return NULL; }
long   UI_Component_Sum_Entity_Resource_Capacity_70f4()       { outpost_missing_dep_stub("UI_Component_Sum_Entity_Resource_Capacity_70f4");       return 0; }
long   Colony_Calculate_Sum_Resource_Group_38f2()             { outpost_missing_dep_stub("Colony_Calculate_Sum_Resource_Group_38f2");             return 0; }
u16    UI_Component_Get_Entity_Construction_Progress_6e4c()   { outpost_missing_dep_stub("UI_Component_Get_Entity_Construction_Progress_6e4c");   return 0; }
long   UI_Component_Sum_Entity_Values_from_List_22_7176()     { outpost_missing_dep_stub("UI_Component_Sum_Entity_Values_from_List_22_7176");     return 0; }
void * UI_Component_Sum_Active_SubValues_Group4_6f5a()        { outpost_missing_dep_stub("UI_Component_Sum_Active_SubValues_Group4_6f5a");        return NULL; }
void * Colony_Calc_Resource_Deficit_at_26_540a()              { outpost_missing_dep_stub("Colony_Calc_Resource_Deficit_at_26_540a");              return NULL; }
int    Simulator_Calculate_Total_Medical_Capacity_4c1a()      { outpost_missing_dep_stub("Simulator_Calculate_Total_Medical_Capacity_4c1a");      return 0; }
long   Simulator_Get_Colony_Total_Resource_Sum_4cba()         { outpost_missing_dep_stub("Simulator_Get_Colony_Total_Resource_Sum_4cba");         return 0; }
char * UI_Entity_Get_SubCategory_Name_Logic()                 { outpost_missing_dep_stub("UI_Entity_Get_SubCategory_Name_Logic");                 return NULL; }
char * UI_Entity_Format_Status_Value_Label_Logic()            { outpost_missing_dep_stub("UI_Entity_Format_Status_Value_Label_Logic");            return NULL; }
void   UI_Window_Manager_Destroy_Entity_Window_Logic()        { outpost_missing_dep_stub("UI_Window_Manager_Destroy_Entity_Window_Logic"); }
void   UI_Window_Broadcast_Msg_EB_Logic()                     { outpost_missing_dep_stub("UI_Window_Broadcast_Msg_EB_Logic"); }

/* ── memory_heap.part007 globals ── */
void      *p_SimulatorGlobalState          = NULL; /* TODO: real def in memory_heap – sim global state far ptr */
int        PTR_DAT_1050_0000_1050_3960     = 0;    /* TODO: Main view controller active-instance ref counter */
void      *PTR_DAT_1050_0000_1050_3962     = NULL; /* TODO: Main view controller instance array ptr */
const char s_582_bmp_1050_1871[]           = "582.bmp"; /* resource name @ 1050:1871 */
const char s_589_bmp_1050_18a9[]           = "589.bmp"; /* resource name @ 1050:18A9 */

/* ── memory_heap.part007 function stubs ── */
void  *heap_realloc()                              { outpost_missing_dep_stub("heap_realloc");                              return NULL; }
void   copy_struct_6bytes()                        { outpost_missing_dep_stub("copy_struct_6bytes"); }
void   UI_Container_Remove_Item_at_Offset_4_Logic(){ outpost_missing_dep_stub("UI_Container_Remove_Item_at_Offset_4_Logic"); }
/* NOTE: Sprite_Object_free_internal_buffer — real def in memory_heap.part004.c (graduated) */
long   Data_History_Object_Get_Point_At_Index()    { outpost_missing_dep_stub("Data_History_Object_Get_Point_At_Index");    return 0L; }
void   UI_Element_Subclass_dtor_D71A_Wrapper()     { outpost_missing_dep_stub("UI_Element_Subclass_dtor_D71A_Wrapper"); }
void   heap_free_descriptor()                      { outpost_missing_dep_stub("heap_free_descriptor"); }
void   Build_Site_List_Item_dtor_Internal()        { outpost_missing_dep_stub("Build_Site_List_Item_dtor_Internal"); }
void   UI_Object_Destroy_SubObject_at_Offset_12_Logic_Duplicate() { outpost_missing_dep_stub("UI_Object_Destroy_SubObject_at_Offset_12_Logic_Duplicate"); }
long   Simulator_Global_Get_Entity_Object_Wrapper_8344() { outpost_missing_dep_stub("Simulator_Global_Get_Entity_Object_Wrapper_8344"); return 0L; }
void   UI_Allocation_Tab_Manager_dtor_Internal_Cleanup_logic() { outpost_missing_dep_stub("UI_Allocation_Tab_Manager_dtor_Internal_Cleanup_logic"); }
/* NOTE: UI_Control_Sub_dtor_logic — real def in strings_text.part004.c (graduated) */
void   UI_Slider_Component_dtor_Internal_vtable_revert() { outpost_missing_dep_stub("UI_Slider_Component_dtor_Internal_vtable_revert"); }
void   UI_Build_Item_Base_dtor_Internal()          { outpost_missing_dep_stub("UI_Build_Item_Base_dtor_Internal"); }
long   Gameplay_Object_ctor()                      { outpost_missing_dep_stub("Gameplay_Object_ctor");                      return 0L; }
void   Gameplay_Object_Refresh_Graphic_Logic()     { outpost_missing_dep_stub("Gameplay_Object_Refresh_Graphic_Logic"); }
long   Resource_Manager_Get_or_Create_Entry_Logic(){ outpost_missing_dep_stub("Resource_Manager_Get_or_Create_Entry_Logic"); return 0L; }

/* ── memory_heap.part003 globals ── */
int        g_HeapRefCount              = 0;    /* integer refcount — MSVC disallows void*+int arithmetic */
undefined *g_HeapPoolCount             = NULL; /* TODO: real def — pool count pointer @ 1050:5f22 */
undefined *p_GlobalPoolList_Offset     = NULL; /* TODO: real def — global pool list offset ptr */
undefined *p_GlobalPoolList_Segment    = NULL; /* TODO: real def — global pool list segment ptr */
char      *p_GlobalPoolDescriptor      = NULL; /* TODO: real def — global pool descriptor ptr */
/* NOTE: p_ErrorHandlerCallback_Segment — real def in system_runtime.part001.c (graduated) */
undefined *p_AllocHook_Default         = NULL; /* TODO: real def — default alloc hook @ 1050:5f34 */
undefined *p_AllocHook_HighPriority    = NULL; /* TODO: real def — high-priority hook @ 1050:5f38 */
undefined *p_AllocHook_Critical        = NULL; /* TODO: real def — critical alloc hook @ 1050:5f3c */
undefined *PTR_DAT_1050_0000_1050_5f3a = NULL; /* TODO: real def — hook companion ptr @ 5f3a */
undefined *PTR_DAT_1050_0000_1050_5f36 = NULL; /* TODO: real def — hook companion ptr @ 5f36 */
undefined *PTR_DAT_1050_0000_1050_5f3e = NULL; /* TODO: real def — hook companion ptr @ 5f3e */
const char s_554_bmp_1050_1f77[]       = "554.bmp"; /* resource name / error handler anchor */
undefined  DAT_1050_1000               = 0;    /* TODO: real def — code/data label at 1050:1000 */

/* ── memory_heap.part003 function stubs ── */
void  heap_free_core()               { outpost_missing_dep_stub("heap_free_core"); }
void  heap_free_block()              { outpost_missing_dep_stub("heap_free_block"); }
void  heap_set_alloc_params()        { outpost_missing_dep_stub("heap_set_alloc_params"); }
/* NOTE: invoke_error_handler — real def in system_runtime.part001.c (graduated) */
/* NOTE: heap_set_pool_hook — real def in system_runtime.part001.c (graduated) */
void  heap_reserve_bytes()           { outpost_missing_dep_stub("heap_reserve_bytes"); }
/* NOTE: query_global_memory_block — real def in system_runtime.part001.c (graduated) */
/* NOTE: heap_unlink_pool_from_global_list — real def in memory_heap.part004.c (graduated) */
int   validate_ptr_read_access()     { return (int)outpost_missing_dep_stub("validate_ptr_read_access"); }
int   validate_mem_access_ext()      { return (int)outpost_missing_dep_stub("validate_mem_access_ext"); }
void  display_error_dialog()         { outpost_missing_dep_stub("display_error_dialog"); }

/* ── memory_heap.part009 globals ── */
void  *PTR_DAT_1050_0000_1050_65e4 = NULL; /* Simulator Context secondary arg ptr (1050:65E4) */

/* ── memory_heap.part009 function stubs ── */
void   UI_Build_Item_Node_dtor_Logic_d728(void *p)  { outpost_missing_dep_stub("UI_Build_Item_Node_dtor_Logic_d728"); }
void  *Simulator_Map_Context_ctor_init_615a(void *p){ outpost_missing_dep_stub("Simulator_Map_Context_ctor_init_615a"); return p; }
void  *Simulator_Map_Context_ctor_init_44be(void *p){ outpost_missing_dep_stub("Simulator_Map_Context_ctor_init_44be"); return p; }
/* NOTE: res_init_string_property_table_logic — real def in strings_text.part005.c (graduated) */
void  *UI_Managed_List_Base_ctor_init_11aa(void *p, void *a, void *b) { outpost_missing_dep_stub("UI_Managed_List_Base_ctor_init_11aa"); return p; }

/* ── memory_heap.part004 globals ── */
void       *_p_GlobalResourceManager         = NULL; /* Ghidra overlap alias — global resource mgr */
void       *_p_Pool_Type1_Event              = NULL; /* Ghidra overlap alias — Event pool ptr */
void       *_p_Pool_Type2_Component          = NULL; /* Ghidra overlap alias — Component pool ptr */
void       *_p_Pool_Type3_Sprite             = NULL; /* Ghidra overlap alias — Sprite pool ptr */
void       *_p_Pool_Type4_Timer              = NULL; /* Ghidra overlap alias — Timer pool ptr */
void       *_p_Pool_Type5_Entity             = NULL; /* Ghidra overlap alias — Entity pool ptr */
void       *_g_AllocatedBlock_Offset         = NULL; /* Ghidra overlap alias — alloc block offset */
undefined2 *_this                            = NULL; /* Ghidra vtable write temp: ptr to vtable slot */
undefined  *PTR_DAT_1050_1000_1050_6066      = NULL; /* heap alloc lock ptr @ 1050:6066 */
pointer     p_Pool_Type6_Node                = NULL; /* Node pool ptr @ 1050 */
/* NOTE: p_AllocStrategyCode — already defined in strings_text.part003 globals */ 
/* NOTE: g_AllocatedBlock_Segment — already defined in strings_text.part005 globals */

/* ── memory_heap.part004 function stubs ── */
long  heap_validate_and_sweep()                            { outpost_missing_dep_stub("heap_validate_and_sweep"); return 0L; }
void  fatal_app_exit_with_message_lookup_and_terminate()   { outpost_missing_dep_stub("fatal_app_exit_with_message_lookup_and_terminate"); }
int   handle_table_remove_entry_internal()                 { return (int)outpost_missing_dep_stub("handle_table_remove_entry_internal"); }
void  Global_Resource_Manager_Release_Object_67C_7fd6()    { outpost_missing_dep_stub("Global_Resource_Manager_Release_Object_67C_7fd6"); }
void  dos_get_system_time_to_internal_struct_far()         { outpost_missing_dep_stub("dos_get_system_time_to_internal_struct_far"); }
void  srand_seed_internal_far()                            { outpost_missing_dep_stub("srand_seed_internal_far"); }
void *Bitmap_Object_ctor_basic()                           { outpost_missing_dep_stub("Bitmap_Object_ctor_basic"); return NULL; }
/* NOTE: HMemCpy — already declared via win16_api.h / win16_api_stubs.c */
/* NOTE: construct_object_with_vtable — real def in strings_text.part004.c (graduated) */
void  Turn_Manager_ctor()                                  { outpost_missing_dep_stub("Turn_Manager_ctor"); }
/* NOTE: strdup_allocate — real def in strings_text.part004.c (graduated) */
void *Simulator_ctor()                                     { outpost_missing_dep_stub("Simulator_ctor"); return NULL; }
int   win16_main_message_loop_logic()                      { return (int)outpost_missing_dep_stub("win16_main_message_loop_logic"); }

