#ifndef OUTPOST_WIN16_API_H
#define OUTPOST_WIN16_API_H

#include "core/outpost_common.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Win16 API shim surface.
 *
 * Notes:
 * - This is a compile-unblocking compatibility layer for decompiled sources.
 * - Signatures intentionally use unprototyped C declarations (name()) to permit
 *   legacy/decompiler callsites with mixed argument conventions.
 * - Task 26 will tighten signatures to SDK-accurate typed prototypes.
 */

#ifndef OUTPOST_WIN16_TYPES_DEFINED
#define OUTPOST_WIN16_TYPES_DEFINED

#ifndef WPARAM16
typedef uint16_t WPARAM16;
#endif

#if !OUTPOST_PLATFORM_WINDOWS_ENABLED
#ifndef LPARAM
typedef intptr_t LPARAM;
#endif

#ifndef LRESULT
typedef intptr_t LRESULT;
#endif

#ifndef COLORREF
typedef uint32_t COLORREF;
#endif
#endif

#ifndef HGLOBAL16
typedef void *HGLOBAL16;
#endif
#ifndef HTASK16
typedef void *HTASK16;
#endif
#ifndef HRSRC16
typedef void *HRSRC16;
#endif
#ifndef HMODULE16
typedef void *HMODULE16;
#endif
#ifndef HFILE16
typedef void *HFILE16;
#endif
#ifndef FARPROC16
typedef void (*FARPROC16)(void);
#endif
#ifndef HGDIOBJ16
typedef void *HGDIOBJ16;
#endif
#ifndef HPEN16
typedef void *HPEN16;
#endif
#ifndef HBRUSH16
typedef void *HBRUSH16;
#endif
#ifndef HPALETTE16
typedef void *HPALETTE16;
#endif

extern HWND16 g_ParentHWND;

#ifndef HCURSOR16

typedef void *HCURSOR16;
#endif
#ifndef HICON16
typedef void *HICON16;
#endif
#ifndef HMENU16
typedef void *HMENU16;
#endif
#ifndef HACCEL16
typedef void *HACCEL16;
#endif
#ifndef LOGPALETTE_PTR
typedef void *LOGPALETTE_PTR;
#endif
#ifndef POINT16
typedef struct outpost_point16_stub {
    int16_t x;
    int16_t y;
} POINT16;
#endif

#ifndef RECT16
typedef struct outpost_rect16_stub {
    int16_t left;
    int16_t top;
    int16_t right;
    int16_t bottom;
} RECT16;
#endif

#ifndef PAINTSTRUCT16
typedef struct outpost_paintstruct16_stub {
    void    *hdc;           /* HDC16 */
    int32_t  fErase;
    RECT16   rcPaint;
    int32_t  fRestore;
    int32_t  fIncUpdate;
    uint8_t  rgbReserved[32];
} PAINTSTRUCT16;
#endif

typedef struct outpost_openfilename16_stub {
    uint32_t lStructSize;
    HWND16 hwndOwner;
    HINSTANCE16 hInstance;
    const char * lpstrFilter;
    char * lpstrCustomFilter;
    uint32_t nMaxCustFilter;
    uint32_t nFilterIndex;
    char * lpstrFile;
    uint32_t nMaxFile;
    char * lpstrFileTitle;
    uint32_t nMaxFileTitle;
    const char * lpstrInitialDir;
    const char * lpstrTitle;
    uint32_t Flags;
    uint16_t nFileOffset;
    uint16_t nFileExtension;
    const char * lpstrDefExt;
    uint32_t lCustData;
    void * lpfnHook;
    const char * lpTemplateName;
} OPENFILENAME16;

#define OFN_READONLY                 0x00000001
#define OFN_OVERWRITEPROMPT          0x00000002
#define OFN_HIDEREADONLY             0x00000004
#define OFN_NOCHANGEDIR              0x00000008
#define OFN_SHOWHELP                 0x00000010
#define OFN_ENABLEHOOK               0x00000020
#define OFN_ENABLETEMPLATE           0x00000040
#define OFN_ENABLETEMPLATEHANDLE     0x00000080
#define OFN_NOVALIDATE               0x00000100
#define OFN_ALLOWMULTISELECT         0x00000200
#define OFN_EXTENSIONDIFFERENT       0x00000400
#define OFN_PATHMUSTEXIST            0x00000800
#define OFN_FILEMUSTEXIST            0x00001000
#define OFN_CREATEPROMPT             0x00002000
#define OFN_SHAREAWARE               0x00004000
#define OFN_NOREADONLYRETURN         0x00008000
#define OFN_NOTESTFILECREATE         0x00010000
#define OFN_NONETWORKBUTTON          0x00020000
#define OFN_NOLONGNAMES              0x00040000
#define OFN_EXPLORER                 0x00080000
#define OFN_NODEREFERENCELINKS       0x00100000
#define OFN_LONGNAMES                0x00200000

#endif /* OUTPOST_WIN16_TYPES_DEFINED */

#define OUTPOST_WIN16_API_LIST(X) \
    X(__AHINCR) \
    X(__AHSHIFT) \
    X(__WINFLAGS) \
    X(_hread16) \
    X(_hwrite16) \
    X(_lclose16) \
    X(_lcreat16) \
    X(_llseek16) \
    X(_lopen16) \
    X(_wsprintf16) \
    X(BeginPaint16) \
    X(BringWindowToTop16) \
    X(CallWindowProc16) \
    X(CheckDlgButton16) \
    X(CheckMenuItem16) \
    X(CheckRadioButton16) \
    X(ClientToScreen16) \
    X(CreateDC16) \
    X(CreateDialog16) \
    X(CreatePalette16) \
    X(CreatePen16) \
    X(CreateSolidBrush16) \
    X(CreateWindow16) \
    X(CreateWindowEx16) \
    X(DefWindowProc16) \
    X(DeleteDC16) \
    X(DeleteMenu16) \
    X(DeleteObject16) \
    X(DestroyCursor16) \
    X(DestroyIcon16) \
    X(DestroyMenu16) \
    X(DestroyWindow16) \
    X(DispatchMessage16) \
    X(Dos3Call) \
    X(DrawIcon16) \
    X(DrawText16) \
    X(Ellipse16) \
    X(EnableMenuItem16) \
    X(EnableWindow16) \
    X(EndPaint16) \
    X(EnumChildWindows16) \
    X(FatalAppExit16) \
    X(FatalExit16) \
    X(FillRect16) \
    X(FindResource16) \
    X(FRAMERECT) \
    X(FreeProcInstance16) \
    X(FreeResource16) \
    X(GetClassInfo16) \
    X(GetClientRect16) \
    X(GetCurrentPosition16) \
    X(GetCursorPos16) \
    X(GetDC16) \
    X(GETDEVICECAPS) \
    X(GetDlgCtrlId) \
    X(GetDlgItem16) \
    X(GetDlgItemInt16) \
    X(GetDosEnvironment16) \
    X(GetMenuState16) \
    X(GetMessage16) \
    X(GetModuleFilename16) \
    X(GetNextDlgTabItem16) \
    X(GetOpenFilename16) \
    X(GetPrivateProfileString16) \
    X(GetProp16) \
    X(GetSaveFilename16) \
    X(GetStockObject16) \
    X(GetSubMenu16) \
    X(GetSysColor16) \
    X(GetSystemMetrics16) \
    X(GetSystemPaletteEtnries16) \
    X(GetTextExtent16) \
    X(GetVersion16) \
    X(GetWindowDC16) \
    X(GetWindowLong16) \
    X(GetWindowPlacement16) \
    X(GetWindowRect16) \
    X(GetWindowText16) \
    X(GetWindowWord16) \
    X(GlobalAlloc16) \
    X(GlobalDosAlloc16) \
    X(GlobalDosFree) \
    X(GlobalFree16) \
    X(GlobalHandle16) \
    X(GlobalLock16) \
    X(GlobalPageLock16) \
    X(GlobalPageUnlock16) \
    X(GlobalRealloc16) \
    X(GlobalSize16) \
    X(GlobalUnlock16) \
    X(GrayString16) \
    X(HMemCpy) \
    X(InitApp16) \
    X(InitTask16) \
    X(InsertMenu16) \
    X(InvalidateRect16) \
    X(IsDialogMessage16) \
    X(IsDlgButtonChecked16) \
    X(IsIconic16) \
    X(IsWindow16) \
    X(IsWindowEnabled16) \
    X(KillTimer16) \
    X(LineTo16) \
    X(LoadAccelerators16) \
    X(LoadCursor16) \
    X(LoadIcon16) \
    X(LoadMenu16) \
    X(LoadResource16) \
    X(LoadString16) \
    X(LOCKRESOURCE) \
    X(LockSegment16) \
    X(LStrLen16) \
    X(MakeProcInstance16) \
    X(MapDialogRect16) \
    X(MciGetErrorString16) \
    X(MciSendCommand16) \
    X(MessageBeep16) \
    X(MessageBox16) \
    X(ModifyMenu16) \
    X(MoveTo16) \
    X(MoveToEx16) \
    X(MoveWindow16) \
    X(Polygon16) \
    X(PostMessage16) \
    X(PostQuitMessage16) \
    X(RealizePalette16) \
    X(Rectangle16) \
    X(RegisterClass16) \
    X(ReleaseCapture16) \
    X(ReleaseDC16) \
    X(RemoveProp16) \
    X(ScreenToClient16) \
    X(SelectObject16) \
    X(SelectPalette16) \
    X(SendDlgItemMessage16) \
    X(SendMessage16) \
    X(SetBkColor16) \
    X(SetCapture16) \
    X(SetCursor16) \
    X(SetDiBitsToDevice16) \
    X(SetErrorMode16) \
    X(SetFocus16) \
    X(SetMapMode16) \
    X(SetProp16) \
    X(SetSysColors16) \
    X(SetSysModalWindow16) \
    X(SetTextColor16) \
    X(SetTimer16) \
    X(SetWindowLong16) \
    X(SetWindowPlacement16) \
    X(SetWindowPos16) \
    X(SetWindowText16) \
    X(SetWindowWord16) \
    X(ShowCursor16) \
    X(ShowWindow16) \
    X(StretchDiBits16) \
    X(TextOut16) \
    X(TrackPopupMenu16) \
    X(TranslateAccelerator16) \
    X(TranslateMessage16) \
    X(UnrealizeObject16) \
    X(UpdateWindow16) \
    X(ValidateRect16) \
    X(WaitEvent16) \
    X(WinExec16) \
    X(WinHelp16) \
    X(WritePrivateProfileString16) \
    X(wvsprintf16)

#define OUTPOST_DECLARE_WIN16_API(name) uintptr_t name();
OUTPOST_WIN16_API_LIST(OUTPOST_DECLARE_WIN16_API)
#undef OUTPOST_DECLARE_WIN16_API

#ifdef __cplusplus
}
#endif

#endif /* OUTPOST_WIN16_API_H */
