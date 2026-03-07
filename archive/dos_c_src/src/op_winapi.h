//
// Created by cyrex on 2/22/2022.
//

#ifndef _OP_WINAPI_H_
#define _OP_WINAPI_H_

#include "op_int.h"
#include "op_windef.h"

void InitTask16(CONTEXT *context);


HGLOBAL16 LockSegment16(HGLOBAL16 handle);


DWORD GetVersion16(void);


void *swi(u8 opcode);


// u16 swi_0x21_fn_ptr swi_0x21();


BOOL16 WaitEvent16(HTASK16 h_task);


i16 InitApp16(HINSTANCE16 h_instance);


void FatalAppExit16(u16 action, cstring str);


void FatalExit(void);


BOOL16 DeleteObject16(HGDIOBJ16 obj);


u16 LoadString16(HINSTANCE16 instance, u16 resource_id, cstring buffer, u16 buf_len);


// HGLOBAL16                   GLobalAlloc16(u16 flags, DWORD size);
HGLOBAL16 GlobalAlloc16(u16 flags, DWORD size);

// HGLOBAL16                   GlobalReAlloc16(HGLOBAL16 handle, DWORD size, u16 flags);
HGLOBAL16 GlobalRealloc16(HGLOBAL16 handle, DWORD size, u16 flags);

// HGLOBAL16                   GlobalFree16(HGLOBAL16 handle);
HGLOBAL16 GlobalFree16(HGLOBAL16 handle);

// SEGPTR                      WIN16_GlobalLock16(HGLOBAL16 handle);
SEGPTR WIN16_GlobalLock16(HGLOBAL16 handle);

// BOOL16                      GlobalUnlock16(HGLOBAL16 handle);
BOOL16 GlobalUnlock16(HGLOBAL16 handle);

// DWORD                       GlobalSize16(HGLOBAL16 handle);
DWORD GlobalSize16(HGLOBAL16 handle);


// DWORD                       GlobalHandle16(WORD sel);
DWORD GlobalHandle16(WORD sel);


// u16                       GetModuleFileName16(HINSTANCE16 h_module, LPSTR lp_file_name,
// u16 n_size);
u16 GetModuleFileName16(HINSTANCE16 h_module, LPSTR lp_file_name, u16 n_size);


// LPVOID                      MakeProcInstance16(LPVOID func, HANDLE16 h_instance);
LPVOID MakeProcInstance16(LPVOID func, HANDLE16 h_instance);


// void                        FreeProcInstance16(LPVOID func);
void FreeProcInstance16(LPVOID func);


// HRSRC16                     FindResource16(HMODULE16 h_module, LPCSTR name, LPCSTR
// type);
HRSRC16 FindResource16(HMODULE16 h_module, LPCSTR name, LPCSTR type);


// HGLOBAL16                   LoadResource16(HMODULE16 h_module, HRSRC16 h_rsrc);
HGLOBAL16 LoadResource16(HMODULE16 h_module, HRSRC16 h_rsrc);


// SEGPTR                      WIN16_LockResource16(HGLOBAL16 handle);
SEGPTR WIN16_LockResource16(HGLOBAL16 handle);


// BOOL16                      FreeResource16(HGLOBAL16 handle);
BOOL16 FreeResource16(HGLOBAL16 handle);


// HFILE16                     _lclose16(HFILE16 h_file);
HFILE16 _lclose16(HFILE16 h_file);


// HFILE16                     _lcreat16(LPCSTR path, u16 attr);
HFILE16 _lcreat16(LPCSTR path, u16 attr);


// long                        _llseek16(HFILE16 h_file, long l_offset, u16 n_origin);
long _llseek16(HFILE16 h_file, long l_offset, u16 n_origin);


// HFILE16                     _lopen16(LPCSTR path, u16 mode);
HFILE16 _lopen16(LPCSTR path, u16 mode);


// u16                       lstrlen16(LPCSTR str);
u16 lstrlen16(LPCSTR str);


// void                        DOS3Call(CONTEXT *context);
void DOS3Call(CONTEXT *context);


// u16                         SetErrorMode16(u16 mode);
u16 SetErrorMode16(u16 mode);


// void                        __AHSHIFT(void);
void __AHSHIFT(void);


// void                        __AHINCR(void);
void __AHINCR(void);


// void                        OutputDebugString16(LPCSTR str);
void OutputDebugString16(LPCSTR str);


// u16                       GetPrivateProfileString16(LPCSTR section, LPCSTR entry,
// LPCSTR def_val, LPSTR buffer, u16 len, LPCSTR filename);
u16 GetPrivateProfileString16(LPCSTR section,
                              LPCSTR entry,
                              LPCSTR def_val,
                              LPSTR  buffer,
                              u16    len,
                              LPCSTR filename);


// BOOL16                      WritePrivateProfileString16(LPCSTR section, LPCSTR entry,
// LPCSTR string, LPCSTR filename);
BOOL16
WritePrivateProfileString16(LPCSTR section, LPCSTR entry, LPCSTR string, LPCSTR filename);


// SEGPTR                      GetDOSEnvironment16(void);
SEGPTR GetDOSEnvironment16();


// HINSTANCE16                 WinExec16(LPCSTR lp_cmd_line, u16 n_cmd_show);
HINSTANCE16 WinExec16(LPCSTR lp_cmd_line, u16 n_cmd_show);


// void                        __WINFLAGS(void);
void __WINFLAGS();

// DWORD                       GlobalDOSAlloc16(DWORD size);
DWORD GlobalDOSAlloc16(DWORD size);


// WORD                        GlobalDOSFree16(WORD sel);
WORD GlobalDOSFree16(WORD sel);


// WORD                        GlobalPageLock16(HGLOBAL16 handle);
WORD GlobalPageLock16(HGLOBAL16 handle);


// WORD                        GlobalPageUnlock16(HGLOBAL16 handle);
WORD GlobalPageUnlock16(HGLOBAL16 handle);


// void                        hmemcpy16(LPVOID dst, LPCVOID src, long count);
void hmemcpy16(LPVOID dsg, LPCVOID src, long count);


// long                        WIN16_hread(HFILE16 h_file, SEGPTR buffer, long count);
long WIN16_hread(HFILE16 h_file, SEGPTR buffer, long count);


// long                        _hwrite16(HFILE16 h_file, LPCSTR buffer, long count);
long _hwrite16(HFILE16 h_file, LPCSTR buffer, long count);


// COLORREF                    SetBkColor16(HDC16 hdc, COLORREF color);
COLORREF SetBkColor16(HDC16 hdc, COLORREF color);


// i16                     SetMapMode16(HDC16 hdc, i16 mode);
i16 SetMapMode16(HDC16 hdc, i16 mode);


// COLORREF                    SetTextColor16(HDC16 hdc, COLORREF color);
COLORREF SetTextColor16(HDC16 hdc, COLORREF color);


// BOOL16                      LineTo16(HDC16 hdc, u16 x, u16 y);
BOOL16 LineTo16(HDC16 hdc, u16 x, u16 y);


// DWORD                       MoveTo16(HDC16 hdc, u16 x, u16 y);
DWORD MoveTo16(HDC16 hdc, u16 x, u16 y);


// BOOL16                      Ellipse16(HDC16 hdc, u16 left, u16 top, u16 right, u16
// bottom);
BOOL16 Ellipse16(HDC16 hdc, u16 left, u16 top, u16 right, u16 bottom);


// BOOL16                      Rectangle16(HDC16 hdc, u16 left, u16 top, u16 right, u16
// bottom);
BOOL16 Rectangle16(HDC16 hdc, u16 left, u16 top, u16 right, u16 bottom);


// BOOL16                      TextOut16(HDC16 hdc, u16 x, u16 y, char *str, u16 count);
BOOL16 TextOut16(HDC16 hdc, u16 x, u16 y, char *str, u16 count);


// BOOL16                      Polygon16(HDC16 hdc, POINT16 *pt, u16 count);
BOOL16 Polygon16(HDC16 hdc, POINT16 *pt, u16 count);


// HGDIOBJ16                   SelectObject16(HDC16 hdc, HGDIOBJ16 handle);
HGDIOBJ16 SelectObject16(HDC16 hdc, HGDIOBJ16 handle);


// HDC16                       CreateDC16(LPCSTR driver, LPCSTR device, LPCSTR output,
// DEVMODEA *init_data);
HDC16 CreateDC16(LPCSTR driver, LPCSTR device, LPCSTR output, DEVMODEA *init_data);


// HPEN16                      CreatePen16(u16 style, u16 width, COLORREF color);
HPEN16 CreatePen16(u16 style, u16 width, COLORREF color);


// HBRUSH16                    CreateSolidBrush16(COLORREF color);
HBRUSH16 CreateSolidBrush16(COLORREF color);


// BOOL16                      DeleteDC16(HDC16 hdc);
BOOL16 DeleteDC16(HDC16 hdc);


// DWORD                       GetCurrentPosition16(HDC16 hdc);
DWORD GetCurrentPosition16(HDC16 hdc);


// u16                       GetDeviceCaps16(HDC16 hdc, u16 cap);
u16 GetDeviceCaps16(HDC16 hdc, u16 cap);


// HGDIOBJ16                   GetStockObject16(u16 obj);
HGDIOBJ16 GetStockObject16(u16 obj);


// DWORD                       GetTextExtent16(HDC16 hdc, LPCSTR str, u16 count);
DWORD GetTextExtent16(HDC16 hdc, LPCSTR str, u16 count);


// BOOL16                      UnrealizeObject16(HGDIOBJ16 obj);
BOOL16 UnrealizeObject16(HGDIOBJ16 obj);


// HPALETTE16                  CreatePalette16(LOGPALETTE *palette);
HPALETTE16 CreatePalette16(LOGPALETTE *palette);


// u16                         GetSystemPaletteEntries(HDC16 hdc, u16 start, u16 count,
// PALETTEENTRY *entries);
u16 GetSystemPaletteEntries(HDC16                hdc,
                            u16                  start,
                            u16                  count,
                            PALETTEENTRY *entries);


// u16                       StretchDIBits16(HDC16 hdc, u16 x_dst, u16 y_dst, u16
// width_dst, u16 height_dst, u16 x_src, u16 y_src, u16 width_src, u16 height_src, PVOID
// bits, BITMAPINFO *info, u16 w_usage, DWORD dw_rop);
u16 StretchDIBits16(HDC16       hdc,
                    u16         x_dst,
                    u16         y_dst,
                    u16         width_dst,
                    u16         height_dst,
                    u16         x_src,
                    u16         y_src,
                    u16         width_src,
                    u16         height_src,
                    PVOID       bits,
                    BITMAPINFO *info,
                    u16         w_usage,
                    DWORD       dw_rop);


// u16                       SetDIBitsToDevice(HDC16 hdc, u16 x_dest, u16 y_dest, u16 cx,
// u16 cy, u16 x_src, u16 y_src, u16 startscan, u16 lines, LPCVOID bits, BITMAPINFO *info,
// u16 coloruse);
u16 SetDIBitsToDevice(HDC16       hdc,
                      u16         x_dest,
                      u16         y_dest,
                      u16         cx,
                      u16         cy,
                      u16         x_src,
                      u16         y_src,
                      u16         startscan,
                      u16         lines,
                      LPCVOID     bits,
                      BITMAPINFO *info,
                      u16         coloruse);


// BOOL16                      MoveToEx16(HDC16 hdc, u16 x, u16 y, POINT16 *pt);
BOOL16 MoveToEx16(HDC16 hdc, u16 x, u16 y, POINT16 *pt);


// u16                       MessageBox16(HWND16 hwnd, LPCSTR text, LPCSTR title, u16
// type);
u16 MessageBox16(HWND16 hwnd, LPCSTR text, LPCSTR title, u16 type);


// void                        PostQuitMessage16(u16 exit_code);
void PostQuitMessage16(u16 exit_code);


// u16                         SetTimer16(HWND16 hwnd, u16 id, u16 timeout, LPVOID proc);
u16 SetTimer16(HWND16 hwnd, u16 id, u16 timeout, LPVOID proc);


// BOOL16                      KillTimer16(HWND16 hwnd, u16 id);
BOOL16 KillTimer16(HWND16 hwnd, u16 id);


// BOOL16                      GetCursorPos16(POINT16 *pt);
BOOL16 GetCursorPos16(POINT16 *pt);


// HWND16                      SetCapture16(HWND16 hwnd);
HWND16 SetCapture16(HWND16 hwnd);


// BOOL16                      ReleaseCapture16(void);
BOOL16 ReleaseCapture16();


// HWND16                      SetFocus16(HWND16 hwnd);
HWND16 SetFocus16(HWND16 hwnd);


// HANDLE16                    RemoveProp16(HWND16 hwnd, LPCSTR str);
HANDLE16 RemoveProp16(HWND16 hwnd, LPCSTR str);


// HANDLE16                    GetProp16(HWND16 hwnd, LPCSTR str);
HANDLE16 GetProp16(HWND16 hwnd, LPCSTR str);


// BOOL16                      SetProp16(HWND16 hwnd, LPCSTR str, HANDLE16 handle);
BOOL16 SetProp16(HWND16 hwnd, LPCSTR str, HANDLE16 handle);


// void                        ClientToScreen16(HWND16 hwnd, POINT16 *lppnt);
void ClientToScreen16(HWND16 hwnd, POINT16 *lppnt);


// void                        ScreenToClient16(HWND16 hwnd, POINT16 *lppnt);
void ScreenToClient16(HWND16 hwnd, POINT16 *lppnt);


// BOOL16                      IsIconic16(HWND16 hwnd);
BOOL16 IsIconic16(HWND16 hwnd);


// void                        GetWindowRect16(HWND16 hwnd, RECT16 *rect);
void GetWindowRect16(HWND16 hwnd, RECT16 *rect);


// void                        GetClientRect16(HWND16 hwnd, RECT16 *rect);
void GetClientRect16(HWND16 hwnd, RECT16 *rect);


// BOOL16                      EnableWindow16(HWND16 hwnd, BOOL16 enable);
BOOL16 EnableWindow16(HWND16 hwnd, BOOL16 enable);


// BOOL16                      IsWindowEnabled16(HWND16 hwnd);
BOOL16 IsWindowEnabled16(HWND16 hwnd);


// u16                       GetWindowText16(HWND16 hwnd, SEGPTR lp_string, u16
// n_max_count);
u16 GetWindowText16(HWND16 hwn, SEGPTR lp_string, u16 n_max_count);


// BOOL16                      SetWindowText16(HWND16 hwnd, SEGPTR lp_string);
BOOL16 SetWindowText16(HWND16 hwnd, SEGPTR lp_string);


// HDC16                       BeginPaint16(HWND16 hwnd, PAINTSTRUCT16 *lps);
HDC16 BeginPaint16(HWND16 hwnd, PAINTSTRUCT16 *lps);


// BOOL16                      EndPaint16(HWND16 hwnd, PAINTSTRUCT16 *lps);
BOOL16 EndPaint16(HWND16 hwnd, PAINTSTRUCT16 *lps);


// HWND16                      CreateWindow16(LPCSTR class_name, LPCSTR window_name, DWORD
// style, u16 x, u16 y, u16 width, u16 height, HWND16 parent, HMENU16 hmenu, HINSTANCE16
// instance, LPVOID data);
HWND16 CreateWindow16(LPCSTR class_name,
                      LPCSTR window_name,
                      DWORD  style,
                      u16    x,
                      u16    y,
                      u16    width,
                      u16    height,
                      HWND16 parent,
                      HMENU16,
                      HINSTANCE16 instance,
                      LPVOID      data);


// BOOL16                      ShowWindow16(HWND16 hwnd, u16 cmd);
BOOL16 ShowWindow16(HWND16 hwnd, u16 cmd);


// BOOL16                      BringWindowToTop16(HWND16 hwnd);
BOOL16 BringWindowToTop16(HWND16 hwnd);


// BOOL16                      IsWindow16(HWND16 hwnd);
BOOL16 IsWindow16(HWND16 hwnd);


// BOOL16                      DestroyWindow16(HWND16 hwnd);
BOOL16 DestroyWindow16(HWND16 hwnd);


// BOOL16                      EnumChildWindows1(HWND16 parent, LPVOID func, LPARAM
// lparam);
BOOL16 EnumChildWindows16(HWND16 parent, LPVOID fun, LPARAM lparam);


// BOOL16                      MoveWindow16(HWND16 hwnd, u16 x, u16 y, u16 cx, u16 cy,
// BOOL16 repaint);
BOOL16 MoveWindow16(HWND16 hwnd, u16 x, u16 y, u16 cx, u16 cy, BOOL16 repaint);


// ATOM                        RegisterClass16(WNDCLASS16 *wc);
ATOM RegisterClass16(WNDCLASS16 *wc);


// HDC16                       GetDC16(HWND16 hwnd);
HDC16 GetDC16(HWND16 hwnd);


// HDC16                       GetWindowDC16(HWND16 hwnd);
HDC16 GetWindow16(HWND16 hwnd);


// u16                       ReleaseDC16(HWND16 hwnd, HDC16 hdc);
u16 ReleaseDC16(HWND16 hwnd, HDC16 hdc);


// HCURSOR16                   SetCursor16(HCURSOR16 hcursor);
HCURSOR16 SetCursor16(HCURSOR16 hcursor);


// u16                       ShowCursor16(BOOL16 b_show);
u16 ShowCursor16(BOOL16 b_show);


// BOOL16                      PtInRect16(RECT16 *rect, POINT16 pt);
BOOL16 PtInRect16(RECT16 *rect, POINT16 pt);


// u16                       FillRect16(HDC16 hdc, RECT16 *rect, HBRUSH16 hbrush);
u16 FillRect16(HDC16 hdc, RECT16 *rect, HBRUSH16 hbrush);


// u16                       FrameRect16(HDC16 hdc, RECT16 *rect, HBRUSH16 hbrush);
u16 FrameRect16(HDC16 hdc, RECT16 *rect, HBRUSH16 hbrush);


// BOOL16                      DrawIcon16(HDC16 hdc, u16 x, u16 y, HICON16 h_icon);
BOOL16 DrawIcon16(HDC16 hdc, u16 x, u16 y, HICON16 h_icon);


// u16                       DrawText16(HDC16 hdc, LPCSTR str, u16 count, RECT16 *rect,
// u16 flags);
u16 DrawText16(HDC16 hdc, LPCSTR str, u16 count, RECT16 *rect, u16 flags);


// HWND16                      CreateDialog16(HINSTANCE16 hinst, LPCSTR dlg_template,
// HWND16 owner, LPVOID dlg_proc);
HWND16
CreateDialog16(HINSTANCE16 hinst, LPCSTR dlg_template, HWND16 owner, LPVOID dlg_proc);


// BOOL16                      IsDialogMessage16(HWND16 hwnd_dlg, MSG16 *msg16);
BOOL16 IsDialogMessage16(HWND16 hwnd_dlg, MSG16 *msg16);


// HWND16                      GetDlgItem16(HWND16 hwnd_dlg, u16 id);
HWND16 GetDlgItem16(HWND16 hwnd_dlg, u16 id);


// void                        SetDlgItemText16(HWND16 hwnd, u16 id, SEGPTR lp_string);
void SetDlgItemText16(HWND16 hwnd, u16 id, SEGPTR lp_string);


// void                        SetDlgItemInt16(HWND16 hwnd, u16 id, u16 value, BOOL16
// f_signed);
void SetDlgItemInt16(HWND16 hwnd, u16 id, u16 value, BOOL16 f_signed);


// u16                         GetDlgItemInt16(HWND16 hwnd, u16 id, BOOL16 *translated,
// BOOL16 f_signed);
u16 GetDlgItemInt16(HWND16 hwnd, u16 id, BOOL16 *translated, BOOL16 f_signed);


// BOOL16                      CheckRadioButton16(HWND16 hwnd_dlg, u16 first_id, u16
// last_id, u16 check_id);
BOOL16 CheckRadioButton16(HWND16 hwnd_dlg, u16 first_id, u16 last_id, u16 check_id);


// BOOL16                      CheckDlgButton16(HWND16 hwnd, u16 id, u16 check);
BOOL16 CheckDlgButton16(HWND16 hwnd, u16 id, u16 check);


// u16                         IsDlgButtonChecked(HWND16 hwnd, u16 id);
u16 IsDlgButtonChecked(HWND16 hwnd, u16 id);


// LRESULT                     SendDlgItemMessage16(HWND16 hwnd, u16 id, u16 msg, WPARAM16
// w_param, LPARAM l_param);
LRESULT
SendDlgItemMessage16(HWND16 hwnd, u16 id, u16 msg, WPARAM16 w_param, LPARAM l_param);


// void                        MapDialogRect16(HWND16 hwnd, RECT16 *rect);
void MapDialogRect16(HWND16 hwnd, RECT16 *rect);


// void                        MessageBeep16(u16 i);
void MessageBeep16(u16 i);


// LRESULT                     DefWindowProc16(HWND16 hwnd, u16 msg, WPARAM16 wparam,
// LPARAM lparam);
LRESULT DefWindowProc16(HWND16 hwnd, u16 msg, WPARAM16 wparam, LPARAM lparam);


// BOOL16                      GetMessage16(MSG16 *msg, HWND16 hwnd, u16 first, u16 last);
BOOL16 GetMessage16(MSG16 *msg, HWND16 hwnd, u16 first, u16 last);


// BOOL16                      PostMessage16(HWND16 hwnd, u16 msg, WPARAM16 wparam, LPARAM
// lparam);
BOOL16 PostMessage16(HWND16 hwnd, u16 msg, WPARAM16 wparam, LPARAM lparam);


// LRESULT                     SendMessage16(HWND16 hwnd, u16 msg, WPARAM16 wparam, LPARAM
// lparam);
LRESULT SendMessage16(HWND16 hwnd, u16 msg, WPARAM16 wparam, LPARAM lparam);


// BOOL16                      TranslateMessage16(MSG16 *msg);
BOOL16 TranslateMessage16(MSG16 *msg);


// long                        DispatchMessage16(MSG16 *msg);
long DispatchMessage16(MSG16 *msg);


// LRESULT                     CallWindowProc16(LPVOID func, HWND16 hwnd, u16 msg,
// WPARAM16 wparam, LPARAM lparam);
LRESULT
CallWindowProc16(LPVOID fun, HWND16 hwnd, u16 msg, WPARAM16 wparam, LPARAM lparam);


// void                        UpdateWindow16(HWND16 hwnd);
void UpdateWindow16(HWND16 hwnd);


// void                        InvalidateRect16(HWND16 hwnd, RECT16 *rect, BOOL16 erase);
void InvalidateRect16(HWND16 hwnd, RECT16 *rect, BOOL16 erase);


// void                        ValidateRect16(HWND16 hwnd, RECT16 *rect);
void ValidateRect16(HWND16 hwnd, RECT16 *rect);


// WORD                        GetWindowWord16(HWND16 hwnd, u16 offset);
WORD GetWindowWord16(HWND16 hwnd, u16 offset);


// WORD                        SetWindowWord16(HWND16 hwnd, u16 offset, WORD newval);
WORD SetWindowWord16(HWND16 hwnd, u16 offset, WORD new_val);


// long                        GetWindowLong16(HWND16 hwnd, u16 offset);
long GetWindowLong16(HWND16 hwnd, u16 offset);


// long                        SetWindowLong16(HWND16 hwnd, u16 offset, long newval);
long SetWindowLong16(HWND16 hwnd, u16 offset, long newval);


// HMENU16                     LoadMenu16(HINSTANCE16 instance, LPCSTR name);
HMENU16 LoadMenu16(HINSTANCE16 instance, LPCSTR name);


// BOOL16                      DestroyMenu16(HMENU16 menu);
BOOL16 DestroyMenu16(HMENU16 menu);


// BOOL16                      CheckMenuItem16(HMENU16 hmenu, u16 w_item_id, u16 w_flags);
BOOL16 CheckMenuItem16(HMENU16 hmenu, u16 w_item_id, u16 w_flags);


// BOOL16                      EnableMenuItem16(HMENU16 hmenu, u16 w_item_id, u16
// w_flags);
BOOL16 EnableMenuItem16(HMENU16 hmenu, u16 w_item_id, u16 w_flags);


// HMENU16                     GetSubMenu16(HMENU16 h_menu, u16 n_pos);
HMENU16 GetSubMenu16(HMENU16 h_menu, u16 n_pos);


// BOOL16                      WinHelp16(HWND16 hwnd, LPCSTR lp_help_file, u16 w_command,
// DWORD dw_data);
BOOL16 WinHelp16(HWND16 hwnd, LPCSTR lp_help_file, u16 w_command, DWORD dw_data);


// HCURSOR16                   LoadCursor16(HINSTANCE16 h_instance, LPCSTR name);
HCURSOR16 LoadCursor16(HINSTANCE16 h_instance, LPCSTR name);


// HICON16                     LoadIcon16(HINSTANCE16 h_instance, LPCSTR name);
HICON16 LoadIcon16(HINSTANCE16 h_instance, LPCSTR name);


// HACCEL16                    LoadAccelerators16(HINSTANCE16 instance, LPCSTR
// lp_table_name);
HACCEL16 LoadAccelerators16(HINSTANCE16 instance, LPCSTR lp_table_name);


// u16                       TranslateAccelerator16(HWND16 hwnd, HACCEL16 haccel, MSG16
// *msg);
u16 TranslateAccelerator16(HWND16 hwnd, HACCEL16 haccel, MSG16 *msg);


// u16                       GetSystemMetrics16(u16 index);
u16 GetSystemMetrics16(u16 index);


// COLORREF                    GetSysColor16(u16 index);
COLORREF GetSysColor16(u16 index);


// void                        SetSysColors16(u16 count, u16 *list, COLORREF *values);
void SetSysColors16(u16 count, u16 *list, COLORREF *values);


// BOOL16                      GrayString16(HDC16 hdc, HBRUSH16 param_2, LPVOID gsprc,
// LPARAM lparam, u16 cch, u16 x, u16 y, u16 cx, u16 cy);
BOOL16 GrayString16(HDC16    hdc,
                    HBRUSH16 hbrush,
                    LPVOID   gsprc,
                    LPARAM   lparam,
                    u16      cch,
                    u16      x,
                    u16      y,
                    u16      cs,
                    u16      cy);


// HWND16                      SetSysModalWindow(HWND16 hwnd);
HWND16 SetSysModalWindow(HWND16 hwnd);


// HWND16                      GetNextDlgTabItem16(HWND16 hwnd_dlg, HWND16 hwnd_ctrl,
// BOOL16 f_previous);
HWND16 GetNextDlgTabItem16(HWND16 hwnd_dlg, HWND16 hwnd_ctrl, BOOL16 f_previous);


// BOOL16                      SetWindowPos16(HWND16 hwnd, HWND16 hwnd_insert_after, u16
// x, u16 y, u16 cx, u16 cy, WORD flags);
BOOL16 SetWindowPos16(HWND16 hwnd,
                      HWND16 hwnd_insert_after,
                      u16    x,
                      u16    y,
                      u16    cx,
                      u16    cy,
                      WORD   flags);


// u16                         GetMenuState16(HMENU16 hmenu, u16 w_item_id, u16 w_flags);
u16 GetMenuState16(HMENU16 hmenu, u16 w_item_id, u16 w_flags);


// u16                       GetDlgCtrlID16(HWND16 hwnd);
u16 GetDlgCtrlID16(HWND16 hwnd);


// HPALETTE16                  SelectPalette16(HDC16 hdc, HPALETTE16 hpal, BOOL16
// b_force_background);
HPALETTE16 SelectPalette16(HDC16 hdc, HPALETTE16 hpal, BOOL16 b_force_background);


// u16                         RealizePalette16(HDC16 hdc);
u16 RealizePalette16(HDC16 hdc);


// BOOL16                      GetWindowPlacement16(HWND16 hwnd, WINDOWPLACEMENT16 *wp16);
BOOL16 GetWindowPlacement16(HWND16 hwnd, WINDOWPLACEMENT16 *wp16);


// BOOL16                      SetWindowPlacement16(HWND16 hwnd, WINDOWPLACEMENT16 *wp16);
BOOL16 SetWindowPlacement16(HWND16 hwnd, WINDOWPLACEMENT16 *wp16);


// BOOL16                      GetClassInfo16(HINSTANCE16 h_inst16, SEGPTR name,
// WNDCLASS16 *wc);
BOOL16 GetClassInfo16(HINSTANCE16 h_inst, SEGPTR name, WNDCLASS16 *wc);


// BOOL16                      InsertMenu16(HMENU16 hmenu, u16 pos, u16 flags, u16 id,
// SEGPTR data);
BOOL16 InsertMenu16(HMENU16 hmenu, u16 pos, u16 flags, u16 id, SEGPTR data);


// BOOL16                      DeleteMenu16(HMENU16 hmenu, u16 npos, u16 wflags);
BOOL16 DeleteMenu16(HMENU16 hmenu, u16 npos, u16 wflags);


// BOOL16                      ModifyMenu16(HMENU16 hmenu, u16 pos, u16 flags, u16 id,
// SEGPTR data);
BOOL16 ModifyMenu16(HMENU16 hmenu, u16 pos, u16 flags, u16 id, SEGPTR data);


// BOOL16                      TrackPopupMenu16(HMENU16 hmenu, u16 wflags, u16 x, u16 y,
// u16 n_reserved, HWND16 hwnd, RECT16 *lp_rect);
BOOL16 TrackPopupMenu16(HMENU16 hmenu,
                        u16     wflags,
                        u16     x,
                        u16     y,
                        u16     n_reserved,
                        HWND16  hwnd,
                        RECT16 *lp_rect);


// u16                       wsprintf16(LPSTR buffer, LPCSTR spec, WORD *valist);
u16 wsprintf16(LPSTR buffer, LPCSTR spec, WORD *valist);


// u16                       wvsprintf16(LPSTR buffer, LPCSTR spec, WORD *args);
u16 wvsprintf16(LPSTR buffer, LPCSTR spec, WORD *args);


// HWND16                      CreateWIndowEx16(DWORD ex_style, LPCSTR class_name, LPCSTR
// window_name, DWORD style, u16 x, u16 y, u16 width, u16 height, HWND16 parent, HMENU16
// hmenu, HINSTANCE16 instance, LPVOID data);
HWND16 CreateWindowEx16(DWORD       ex_style,
                        LPCSTR      class_name,
                        LPCSTR      window_name,
                        DWORD       style,
                        u16         x,
                        u16         y,
                        u16         width,
                        u16         height,
                        HWND16      parent,
                        HMENU16     hmenu,
                        HINSTANCE16 instance,
                        LPVOID      data);


// BOOL16                      DestroyIcon16(HICON16 h_icon);
BOOL16 DestroyIcon16(HICON16 h_icon);


// BOOL16                      DestroyCursor16(HCURSOR16 h_cursor);
BOOL16 DestroyCursor16(HCURSOR16 h_cursor);


// DWORD                       mciSendCommand16(u16 w_dev_id, u16 w_msg, DWORD dw_param1,
// DWORD p2);
DWORD mciSendCommand16(u16 w_dev_id, u16 w_msg, DWORD dw_param1, DWORD p2);


// BOOL16                      mciGetErrorString16(DWORD w_error, LPSTR lp_str_buffer, u16
// u_length);
BOOL16 mciGetErrorString16(DWORD w_error, LPSTR lp_str_buffer, u16 u_length);


// BOOL16                      GetOpenFileName16(SEGPTR ofn);
BOOL16 GetOpenFileName16(SEGPTR ofn);


// BOOL16                      GetSaveFileName16(SEGPTR ofn);
BOOL16 GetSaveFileName16(SEGPTR ofn);


SEGPTR SegmentLimit(SEGPTR in_val);

HDC16 GetWindowDC16(HWND16 hwnd);

#endif