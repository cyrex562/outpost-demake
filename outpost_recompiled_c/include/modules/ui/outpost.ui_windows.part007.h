/*
 * Source: outpost.h
 * Theme: ui_windows
 * Chunk: 7/7
 * Original lines (combined): 65714-65787
 * Boundaries: top-level declarations/definitions only
 */

BOOL16 EnumChildWindows16(LPARAM l_param, void * WNDENUMPROC6_func, HWND16 parent);
BOOL16 MoveWindow16(BOOL16 repaint, int16_t cy, int16_t cx, int16_t y, int16_t x, HWND16 hwnd);
uint16_t RegisterClass16(void * WNDCLASS_ptr_wc);
HDC16 GetDC16(HWND16 hwnd);
HDC16 GetWindowDC16(HWND16 hwnd);
int16_t ReleaseDC16(HDC16 hdc, HWND16 hwnd);
HCURSOR16 SetCursor16(HCURSOR16 h_cursor);
int16_t ShowCursor16(BOOL16 b_show);
HWND16 CreateDialog16(void * DLGPROC16_dlg_proc, HWND16 owner, void * LPCSTR_dlg_template, HINSTANCE16 h_inst);
BOOL16 IsDialogMessage16(void * MSG16_ptr_msg, HWND16 hwnd);
HWND16 GetDlgItem16(HWND16 hwnd, short id);
void SetDlgItemText(void * lp_string, int16_t id, HWND16 hwnd);
void SetDlgItemInt(BOOL16 f_signed, uint16_t value, int16_t id, HWND16 hwnd);
uint16_t GetDlgItemInt16(BOOL16 f_signed, uint16_t value, int16_t param_3, HWND16 hwnd);
BOOL16 CheckRadioButton16(uint16_t check_id, uint16_t last_id, uint16_t first_id, HWND16 hwnd_dlg);
BOOL16 CheckDlgButton16(uint16_t check, int16_t id, HWND16 hwnd);
uint16_t IsDlgButtonChecked16(uint16_t id, HWND16 hwnd);
LRESULT SendDlgItemMessage16(HWND16 hwnd, short id, ushort msg, ushort w_param, long l_param);
void MapDialogRect16(void * LPRECT16_rect, HWND16 hwnd);
LRESULT DefWindowProc16(LPARAM l_param, WPARAM16 w_param, uint16_t msg, HWND16 hwnd);
BOOL16 GetMessage16(uint16_t last, uint16_t first, HWND16 hwnd, void * MSG16_ptr_msg);
BOOL16 PostMessage16(HWND16 hwnd, ushort msg, ushort w_param, long l_param);
LRESULT SendMessage16(HWND16 hwnd, ushort msg, ushort w_param, long l_param);
BOOL16 TranslateMessage16(void * MSG16_ptr_msg);
int32_t DispatchMessage16(void * MSG16_ptr_msg);
LRESULT CallWindowProc16(void * l_param, uint16_t w_param, uint16_t msg, HWND16 hwnd, void * WNDPROC16_func);
void UpdateWindow16(HWND16 hwnd);
void InvalidateRect16(BOOL16 erase, void * RECT16_ptr_rect, HWND16 hwnd);
void ValidateRect16(void * RECT16_ptr_rect, HWND16 hwnd);
uint16_t GetWindowWord16(int16_t offset, HWND16 hwnd);
int16_t SetWindowWord16(int16_t new_val, int16_t offset, HWND16 hwnd);
int32_t GetWindowLong16(int16_t offset, HWND16 hwnd);
int32_t SetWindowLong16(int32_t new_val, int16_t offset, HWND16 hwnd);
HMENU16 LoadMenu16(void * LPCSTR_name, HINSTANCE16 h_instance);
BOOL16 DestroyMenu16(HMENU16 h_menu);
BOOL16 CheckMenuItem16(uint16_t flags, uint16_t id, HMENU16 h_menu);
BOOL16 EnableMenuItem16(uint16_t w_flags, uint16_t w_item_id, HMENU16 h_menu);
HMENU16 GetSubMenu16(int16_t n_pos, HMENU16 h_menu);
BOOL16 WinHelp16(uint32_t data, uint16_t w_command, void * LPCSTR_help_file, HWND16 hwnd);
HCURSOR16 LoadCursor16(void * LPCSTR_name, HINSTANCE16 h_instance);
int16_t TranslateAccelerator16(void * LPMSG16_msg, HACCEL16 h_accel, HWND16 hwnd);
HWND16 SetSysModalWindow16(HWND16 hwnd);
HWND16 GetNextDlgTabItem16(BOOL16 f_prev, HWND16 hwnd_ctrl, HWND16 hwnd_dlg);
BOOL16 SetWindowPos16(int16_t flags, int16_t cy, int16_t cx, int16_t y, int16_t x, HWND16 hwnd_insert_after, HWND16 hwnd);
uint16_t GetMenuState16(uint16_t w_flags, uint16_t w_item_id, HMENU16 h_menu);
int16_t GetDlgCtrlId(HWND16 hwnd);
BOOL16 GetWindowPlacement16(void * WINDOWPLACEMENT_ptr_wp, HWND16 hwnd);
BOOL16 SetWindowPlacement16(void * WINDOWPLACEMENT_ptr_wp, HWND16 hwnd);
BOOL16 GetClassInfo16(void * WNDCLASS16_ptr_wc, void * name, HINSTANCE16 h_inst);
BOOL16 InsertMenu16(void * data, uint16_t id, uint16_t flags, uint16_t pos, HMENU16 h_menu);
BOOL16 DeleteMenu16(uint16_t w_flags, uint16_t n_pos, HMENU16 h_menu);
BOOL16 ModifyMenu16(void * data, uint16_t id, uint16_t flags, uint16_t pos, HMENU16 h_menu);
BOOL16 TrackPopupMenu16(void * RECT16_ptr_rect, HWND16 hwnd, int16_t n_reserved, int16_t y, int16_t x, uint16_t w_flags, HMENU16 hmenu);
HWND16 CreateWindowEx16(void * LPVOID_data, HINSTANCE16 instance, HMENU16 menu, HWND16 parent, int16_t height, int16_t width, int16_t y, int16_t x, uint32_t style, void * LPCSTR_window_name, void * LPCSTR_class_name, uint32_t ex_style);
BOOL16 DestroyCursor16(HCURSOR16 h_cursor);
int16_t MciSendCommand16(void * param, void * command, uint16_t msg, uint16_t device_id);
