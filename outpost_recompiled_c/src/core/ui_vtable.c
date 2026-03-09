#include "core/ui_vtable.h"

// Forward declarations for all functions in the vtable.
// We use generic signatures to ensure it compiles without header conflicts.
typedef void (__stdcall16far *GenericFunc)(void);

extern void UI_Base_Object_dtor_cleanup(void);
extern void UI_Window_Base_dtor_Scalar_Deleting(void);
extern void UI_Window_Set_Active_Child_Logic(void);
extern void UI_Window_Init_Child_Objects_Logic(void);
extern void UI_Window_Set_Position_and_Refresh_Children(void);
extern void UI_Element_Send_WM_NCACTIVATE(void);
extern void UI_Control_Set_Window_Text_from_Offset_A_Logic(void);
extern void get_far_ptr_at_offset_10_logic(void);
extern void UI_Element_Message_Dispatcher_Logic(void);
extern void far_noop_stub_1(void);
extern void far_noop_stub_2(void);
extern void UI_Handle_Run_Turn_Command(void);
// 0x10080932 is heap_global_sweep_all_pools
extern void UI_Refresh_Colors_and_Components(void);
extern void UI_Refresh_Child_Window_maybe(void);
extern void UI_Element_DestroyWindow_Wrapper(void);
extern void UI_Shutdown_Application(void);
extern void UI_Main_Window_Command_Dispatcher_0c60(void);
extern void UI_Element_Handle_Custom_Message_199_Logic(void);
extern void UI_Handle_System_Command_Logic(void);
extern void UI_Trigger_Child_Component_Event_4C(void);
extern void UI_Show_Main_Popup_Menu(void);
extern void UI_Window_Handle_Child_Command_and_Switch_Focus(void);
extern void UI_Window_Call_Active_Child_Method_0x68(void);
extern void Resource_Manager_Dispatch_Virtual_Call_6C_6b02(void);
extern void UI_Element_Send_WM_NCPAINT_Logic(void);
extern void UI_Element_Send_WM_NCACTIVATE_Logic_Far(void);
extern void UI_Control_Get_Window_Text_to_Offset_A_Logic(void);
extern void UI_Handle_Menu_Select_Logic(void);
extern void UI_Show_Menu_Context_maybe(void);

void * g_UI_Base_VTable[UI_BASE_VTABLE_SIZE] = {
    /* 00 */ UI_Base_Object_dtor_cleanup,
    /* 01 */ UI_Window_Base_dtor_Scalar_Deleting,
    /* 02 */ UI_Window_Set_Active_Child_Logic,
    /* 03 */ UI_Window_Init_Child_Objects_Logic,
    /* 04 */ UI_Window_Set_Position_and_Refresh_Children,
    /* 05 */ UI_Element_Send_WM_NCACTIVATE,
    /* 06 */ UI_Control_Set_Window_Text_from_Offset_A_Logic,
    /* 07 */ get_far_ptr_at_offset_10_logic,
    /* 08 */ UI_Element_Message_Dispatcher_Logic,
    /* 09 */ far_noop_stub_1,
    /* 10 */ far_noop_stub_2,
    /* 11 */ UI_Handle_Run_Turn_Command,
    /* 12 */ (void *)0x10080932, // heap_global_sweep_all_pools
    /* 13 */ UI_Refresh_Colors_and_Components,
    /* 14 */ UI_Refresh_Child_Window_maybe,
    /* 15 */ UI_Element_DestroyWindow_Wrapper,
    /* 16 */ UI_Shutdown_Application,
    /* 17 */ UI_Main_Window_Command_Dispatcher_0c60,
    /* 18 */ UI_Element_Handle_Custom_Message_199_Logic,
    /* 19 */ UI_Handle_System_Command_Logic,
    /* 20 */ UI_Trigger_Child_Component_Event_4C,
    /* 21 */ (void *)0x10089c4e, // stub_9c4e
    /* 22 */ (void *)0x10083762, // stub_3762
    /* 23 */ (void *)0x10089c4a, // stub_9c4a
    /* 24 */ UI_Show_Main_Popup_Menu,
    /* 25 */ UI_Window_Handle_Child_Command_and_Switch_Focus,
    /* 26 */ UI_Window_Call_Active_Child_Method_0x68,
    /* 27 */ Resource_Manager_Dispatch_Virtual_Call_6C_6b02,
    /* 28 */ (void *)0x1008377a, // stub_377a
    /* 29 */ (void *)0x10089c52, // stub_9c52
    /* 30 */ (void *)0x10089c56, // stub_9c56
    /* 31 */ UI_Element_Send_WM_NCPAINT_Logic,
    /* 32 */ UI_Element_Send_WM_NCACTIVATE_Logic_Far,
    /* 33 */ UI_Control_Get_Window_Text_to_Offset_A_Logic,
    /* 34 */ UI_Handle_Menu_Select_Logic,
    /* 35 */ UI_Show_Menu_Context_maybe,
    /* 36 */ (void *)0 // Padding/End
};
