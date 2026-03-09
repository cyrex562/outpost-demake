/*
 * Source: outpost.h
 * Theme: system_runtime
 * Chunk: 1/1
 * Original lines (combined): 233-65657
 * Boundaries: top-level declarations/definitions only
 */


typedef uint16_t HANDLE16;

typedef struct HandleTableEntry HandleTableEntry, *PHandleTableEntry;

struct HandleTableEntry {
};

typedef uint16_t HTASK16;
void invoke_error_handler(void);
int __stdcall16far _SHI_INVOKEERRORHANDLER1(void);
u16 __stdcall16far heap_dispatch_error_handler(u16 param_1,u16 param_2,u16 param_3,u16 param_4);
int __stdcall16far heap_default_error_dialog_handler(uint *param_1);
char * __cdecl16near heap_get_error_message(int error_code);
void __cdecl16far win16_init_env_and_interrupts(void);
void app_terminate_with_dos(void);
void __cdecl16near call_runtime_initializers_backward(void *start,void *end);
void __cdecl16far display_invalid_turn_error_stub(void);
void __cdecl16far runtime_stack_check_fail_handler(void);
void win16_parse_command_line_and_init_task(char *cmd_line,u16 param_2,u16 param_3,u32 param_4);
void __cdecl16far win16_init_env_vars_from_dos(void);
undefined ** fatal_runtime_error_handler(u16 param_1,u8 *param_2);
void fatal_app_exit_with_message_lookup_and_terminate(int error_code);
char * __stdcall16far lookup_runtime_error_string_ptr(int error_code);
void __stdcall16far log_runtime_error_string(int error_code);
int __cdecl16far check_error_flag_and_set_internal_err_u16(u16 param_1,int error_code,bool param_3);
byte __cdecl16far check_error_flag_and_set_internal_err_u8_2(byte result,u16 param_2,bool param_3);
void __cdecl16far check_error_flag_and_set_internal_err_void(u16 param_1,bool param_2);
void __cdecl16far set_internal_error_code_wrapper_far(void);
void __cdecl16near set_internal_error_code_from_ax(int error_code);
int __cdecl16far process_handle_flags_and_path_logic(void *handle_ptr);
void __cdecl16far handle_system_exit_cleanup(void);
int __cdecl16far handle_buffered_write_char(int character,void *handle_ptr);
void __cdecl16near handle_free_buffer(void *handle_ptr);
void __cdecl16near handle_allocate_buffer(void *handle_ptr);
int __cdecl16near handle_init_standard_stream_internal(void *handle_ptr);
void __cdecl16near handle_finalize_access(int status,void *handle_ptr);
int __cdecl16far handle_flush_specific(int *param_1);
u16 __cdecl16near handle_flush_internal_buffer(int *param_1);
void __cdecl16far handle_flush_all_on_exit(void);
int handle_flush_all_system_handles(int param_1);
u16 * __cdecl16far handle_get_available_slot(void);
void dos_close_file_handle_internal(u16 param_1,uint param_2);
void dos_seek_file_handle_internal(u16 param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void handle_update_error_state_wrapper_void(void);
void __cdecl16far win16_abnormal_termination_exit_handler(void);
int __cdecl16far handle_system_close_all_active_handles_wrapper_far(void);
int __cdecl16far handle_get_underlying_os_handle_far_ptr_lookup_routine(int handle_index);
int __cdecl16near handle_table_remove_entry_internal(int handle_id);
int __cdecl16near handle_table_add_entry_internal(int handle_id,int os_handle);
void __cdecl16far init_timezone_environment_vars_wrapper_far(void);
void error_sync_with_dos(int err_code);
void file_error_sync_with_dos(u16 param_1,u32 param_2,int param_3);
int __cdecl16far dos_get_current_drive_number_internal_far(void);
int __cdecl16far dos_set_current_drive_internal_far_check_success(int drive_num);
void __cdecl16far dos_get_cwd_on_current_drive_wrapper_far(char *buffer,int max_len);
byte dos_interrupt_call_u8_wrapper(void);
void dos_multi_call_sync_error(u32 param_1);
void dos_multiple_interrupt_call_wrapper(void);
void fatal_exit_shorthand(int error_code);
int __stdcall16far win16_Check_Min_Runtime_Ticks_Logic(void);
int __stdcall16far Get_Outpost_Version_Number(void);
BOOL16 GetVersion16(void * OSVERSIONINFO16_ptr_v);
BOOL16 GlobalUnlock16(HGLOBAL16 handle);
uint32_t GlobalSize16(HGLOBAL16 handle);
uint32_t GlobalHandle16(uint16_t selector);
HGLOBAL16 LockSegment16(HGLOBAL16 handle);
BOOL16 WaitEvent16(HTASK16 h_task);
void * MakeProcInstance16(HANDLE16 h_instance, void * FARPROC16_func);
uint16_t SetErrorMode16(uint16_t mode);
void * GetDosEnvironment16(void);
uint16_t GlobalPageLock16(HGLOBAL16 handle);
uint16_t GlobalPageUnlock16(HGLOBAL16 handle);
