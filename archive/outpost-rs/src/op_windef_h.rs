//
// Created by cyrex on 2/3/23.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCInconsistentNamingInspection"
// #pragma once

// #include "op_int.h"


typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef u32 DWORD;

typedef char *cstring;

typedef u8 BYTE;

typedef u16 HANDLE16;

typedef HANDLE16 HCURSOR16;

typedef struct PALETTEENTRY PALETTEENTRY, *PPALETTEENTRY;

typedef union Union655 Union655;

typedef u16 ATOM;

typedef u32 LRESULT;

typedef const char* LPCSTR;

typedef char* LPSTR;

typedef HANDLE16 HBRUSH16;

typedef HANDLE16 HMENU16;

typedef u16 WPARAM16;

typedef HANDLE16 HWND16;

typedef HANDLE16 HMODULE16;

typedef HANDLE16 HACCEL16;

typedef struct WINDOWPLACEMENT16 WINDOWPLACEMENT16, *PWINDOWPLACEMENT16;

typedef struct POINT POINT, *PPOINT;

typedef struct RECT16 RECT16, *PRECT16;

typedef union Union658 Union658;

typedef struct TwoWords TwoWords, *PTwoWords;

typedef struct _devicemodeA _devicemodeA, *P_devicemodeA;

typedef struct _devicemodeA DEVMODEA;


typedef struct _POINTL
{
    i32 x;
    i32 y;
} _POINTL;

typedef struct Struct657
{
    _POINTL dmPosition;
    let mut dmDisplayOrientation: u32;
    let mut dmDisplayFixedOutput: u32;
} Struct657;

typedef struct Struct656
{
    let mut field_0x0: u8;
    let mut field_0x1: u8;
    let mut field_0x2: u8;
    let mut field_0x3: u8;
    let mut field_0x4: u8;
    let mut field_0x5: u8;
    let mut field_0x6: u8;
    let mut field_0x7: u8;
    let mut field_0x8: u8;
    let mut field_0x9: u8;
    let mut field_0xa: u8;
    let mut field_0xb: u8;
    let mut field_0xc: u8;
    let mut field_0xd: u8;
    let mut field_0xe: u8;
    let mut field_0xf: u8;
    let mut field_0x10: u8;
    let mut field_0x11: u8;
    let mut field_0x12: u8;
    let mut field_0x13: u8;
    let mut field_0x14: u8;
    let mut field_0x15: u8;
    let mut field_0x16: u8;
    let mut field_0x17: u8;
    let mut field_0x18: u8;
    let mut field_0x19: u8;
    let mut field_0x1a: u8;
    let mut field_0x1b: u8;
    let mut field_0x1c: u8;
    let mut field_0x1d: u8;
    let mut field_0x1e: u8;
    let mut field_0x1f: u8;
    let mut field_0x20: u8;
    let mut field_0x21: u8;
    let mut field_0x22: u32;
    let mut field_0x26: u32;
} Struct656;
typedef struct Struct6561
{
    let mut dmOrientation: i16;
    let mut dmPaperSize: i16;
    let mut dmPaperLength: i16;
    let mut dmPaperWidth: i16;
    let mut dmScale: i16;
    let mut dmCopies: i16;
    let mut dmDefaultSource: i16;
    let mut dmPri16Quality: i16;
} Struct6561;

struct PALETTEENTRY
{
    BYTE pe_red;
    BYTE pe_green;
    BYTE pe_blue;
    BYTE pe_flags;
};

struct RECT16
{
    let mut x: i16;
    let mut y: i16;
};

struct POINT
{
    let mut x: i16;
    let mut y: i16;
};

struct WINDOWPLACEMENT16
{
    let mut length: u16;
    let mut flags: u16;
    let mut show_cmd: u16;
    POINT  pt_min_position;
    POINT  pt_max_position;
    let mut rc_normal_position: RECT16;
};



union Union658
{
    let mut dmDisplayFlags: DWORD;
    let mut dmNup: DWORD;
};

typedef struct WNDCLASS16 WNDCLASS16, *PWNDCLASS16;

typedef void *LPVOID;

typedef void *PVOID;

typedef const void* LPCVOID;

typedef const void* PCVOID;

typedef HANDLE16 HICON16;

typedef u32 SEGPTR;

struct WNDCLASS16
{
    let mut style: u16;
    LPVOID    lpfn_wnd_proc;
    let mut cb_cls_extra: i16;
    let mut cb_wnd_extra: i16;
    let mut h_instance: HANDLE16;
    HICON16   h_icon;
    let mut h_cursor: HCURSOR16;
    let mut hbr_background: HBRUSH16;
    SEGPTR    lpsz_menu_name;
    SEGPTR    lpsz_class_name;
};



struct TwoWords
{
    let mut a_0x0: u16;
    let mut b_0x2: u16;
};

typedef u32 COLORREF;

typedef HANDLE16 HDC16;

typedef HANDLE16 HFILE16;

typedef HANDLE16 HGLOBAL16;

typedef HANDLE16 HPEN16;

typedef u16 BOOL16;

//#define false 0
//#define true 1

typedef HANDLE16 HGDIOBJ16;

typedef struct LOGPALETTE LOGPALETTE, *PLOGPALETTE;

typedef u16 WORD;

struct LOGPALETTE
{
    WORD pal_version;
    WORD pal_num_entries;
};

//typedef MSG16 MSG16, *PMSG16;


//MSG16
//{
//    HWND16       hwnd;
//    u16          message;
//    WPARAM16     wparam;
//    LPARAM       lparam;
//    DWORD        time;
//    POINT pt;
//};

typedef struct BITMAPINFOHEADER BITMAPINFOHEADER, *PBITMAPINFOHEADER;

typedef long LONG;

struct BITMAPINFOHEADER
{
    let mut bi_size: DWORD;
    LONG  bi_width;
    LONG  bi_height;
    WORD  bi_planes;
    WORD  bi_bit_count;
    let mut bi_compression: DWORD;
    let mut bi_size_image: DWORD;
    LONG  bi_x_pels_per_meter;
    LONG  bi_y_pels_per_meter;
    let mut bi_clr_used: DWORD;
    let mut bi_clr_important: DWORD;
};

typedef HANDLE16 HINSTANCE16;

typedef struct PAINTSTRUCT16 PAINTSTRUCT16, *PPAINTSTRUCT16;

struct PAINTSTRUCT16
{
    let mut hdc: HDC16;
    let mut f_erase: BOOL16;
    let mut rc_paint: RECT16;
    let mut f_restore: BOOL16;
    let mut f_inc_update: BOOL16;
    BYTE          rgb_reserved[16];
};

typedef struct BITMAPINFO BITMAPINFO, *PBITMAPINFO;

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

struct tagRGBQUAD
{
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

struct BITMAPINFO
{
    BITMAPINFOHEADER bim_header;
    RGBQUAD          bmi_colors;
};


typedef HANDLE16 HTASK16;

typedef HANDLE16 HPALETTE16;

typedef HANDLE16 HRSRC16;


// WARNING! conflicting data type names: /RGBQUAD - /wingdi.h/RGBQUAD

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef u16 u16_PTR;

typedef u16_PTR WPARAM;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

// typedef tagPOINT POINT;

struct tagPOINT
{
    LONG x;
    LONG y;
};

union Union655
{
    struct Struct656 field0;
    struct Struct657 field1;
};


struct tagMSG
{
    HWND   hwnd;
    let mut message: u16;
    WPARAM wParam;
    LPARAM lParam;
    let mut time: DWORD;
    POINT  pt;
};

struct HWND__
{
    let mut unused: i16;
};





typedef struct POINT16 POINT16;

struct POINT16
{
    let mut x: i16;
    let mut y: i16;
};


typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER ;
struct tagBITMAPINFOHEADER{
        let mut biSize: u32;
        long       biWidth;
        long       biHeight;
        let mut biPlanes: u16;
        let mut biBitCount: u16;
        let mut biCompression: u32;
        let mut biSizeImage: u32;
        long       biXPelsPerMeter;
        long       biYPelsPerMeter;
        let mut biClrUsed: u32;
        let mut biClrImportant: u32;
};


  typedef struct _CONTEXT _CONTEXT ;
//   typedef _CONTEXT CONTEXT;
  typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA ;
  typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;
  typedef struct _CONTEXT CONTEXT;

  struct  _devicemodeA
{
    u8             dmDeviceName[32];
    let mut dmSpecVersion: u16;
    let mut dmDriverVersion: u16;
    let mut dmSize: u16;
    let mut dmDriverExtra: u16;
    let mut dmFields: u32;
    Union655 field_0x2c;
    short            dmColor;
    short            dmDuplex;
    short            dmYResolution;
    short            dmTTOption;
    short            dmCollate;
    u8             dmFormName[32];
    let mut dmLogPixels: u16;
    let mut dmBitsPerPel: u32;
    let mut dmPelsWidth: u32;
    let mut dmPelsHeight: u32;
    Union658 field_0x74;
    let mut dmDisplayFrequency: u32;
    let mut dmICMMethod: u32;
    let mut dmICMi16ent: u32;
    let mut dmMediaType: u32;
    let mut dmDitherType: u32;
    let mut dmReserved1: u32;
    let mut dmReserved2: u32;
    let mut dmPanningWidth: u32;
    let mut dmPanningHeight: u32;
};

struct _FLOATING_SAVE_AREA
{
    let mut ControlWord: u32;
    let mut StatusWord: u32;
    let mut TagWord: u32;
    let mut ErrorOffset: u32;
    let mut ErrorSelector: u32;
    let mut DataOffset: u32;
    let mut DataSelector: u32;
    u8  RegisterArea[80];
    let mut Cr0NpxState: u32;
};

struct _CONTEXT
{
    let mut ContextFlags: u32;
    let mut Dr0: u32;
    let mut Dr1: u32;
    let mut Dr2: u32;
    let mut Dr3: u32;
    let mut Dr6: u32;
    let mut Dr7: u32;
    FLOATING_SAVE_AREA FloatSave;
    let mut SegGs: u32;
    let mut SegFs: u32;
    let mut SegEs: u32;
    let mut SegDs: u32;
    let mut Edi: u32;
    let mut Esi: u32;
    let mut Ebx: u32;
    let mut Edx: u32;
    let mut Ecx: u32;
    let mut Eax: u32;
    let mut Ebp: u32;
    let mut Eip: u32;
    let mut SegCs: u32;
    let mut EFlags: u32;
    let mut Esp: u32;
    let mut SegSs: u32;
    u8               ExtendedRegisters[512];
};

typedef struct
{
    let mut hwnd: HWND16;
    let mut message: u16;
    WPARAM16  wParam;
    LPARAM    lParam;
    let mut time: DWORD;
    POINT16   pt;
} MSG16, *LPMSG16;






// BOOL DeleteFileA(LPCSTR lpFileName)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb230. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = DeleteFileA(lpFileName);
//     return BVar1;
// }

// void GetLocalTime(LPSYSTEMTIME lpSystemTime)
//
//{
//     // WARNING: Could not recover jumptable at 0x004bb236. Too many branches
//     // WARNING: Treating indirect jump as call
//     GetLocalTime(lpSystemTime);
//     return;
// }

// BOOL LocalFileTimeToFileTime(FILETIME *lpLocalFileTime, LPFILETIME lpFileTime)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb23c. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = LocalFileTimeToFileTime(lpLocalFileTime, lpFileTime);
//     return BVar1;
// }

// BOOL DosDateTimeToFileTime(WORD wFatDate, WORD wFatTime, LPFILETIME lpFileTime)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb242. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = DosDateTimeToFileTime(wFatDate, wFatTime, lpFileTime);
//     return BVar1;
// }

// BOOL FileTimeToDosDateTime(FILETIME *lpFileTime, LPWORD lpFatDate, LPWORD lpFatTime)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb248. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = FileTimeToDosDateTime(lpFileTime, lpFatDate, lpFatTime);
//     return BVar1;
// }

// BOOL FileTimeToLocalFileTime(FILETIME *lpFileTime, LPFILETIME lpLocalFileTime)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb24e. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = FileTimeToLocalFileTime(lpFileTime, lpLocalFileTime);
//     return BVar1;
// }

// SHORT GetKeyState(i16 nVirtKey)
//
//{
//     u16 SVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb254. Too many branches
//     // WARNING: Treating indirect jump as call
//     SVar1 = GetKeyState(nVirtKey);
//     return SVar1;
// }

// BOOL VirtualFree(LPVOID lpAddress, SIZE_T dwSize, dwFreeType: u32)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb25a. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = VirtualFree(lpAddress, dwSize, dwFreeType);
//     return BVar1;
// }

// u32 SetFilePoi16er(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, dwMoveMethod: u32)
//
//{
//     u32 DVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb260. Too many branches
//     // WARNING: Treating indirect jump as call
//     DVar1 = SetFilePoi16er(hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod);
//     return DVar1;
// }

// u32 GetCurrentProcessId(void)
//
//{
//     u32 DVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb266. Too many branches
//     // WARNING: Treating indirect jump as call
//     DVar1 = GetCurrentProcessId();
//     return DVar1;
// }

// HMODULE GetModuleHandleA(LPCSTR lpModuleName)
//
//{
//     HMODULE pHVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb26c. Too many branches
//     // WARNING: Treating indirect jump as call
//     pHVar1 = GetModuleHandleA(lpModuleName);
//     return pHVar1;
// }

// LPWSTR GetCommandLineW(void)
//
//{
//     LPWSTR pWVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb272. Too many branches
//     // WARNING: Treating indirect jump as call
//     pWVar1 = GetCommandLineW();
//     return pWVar1;
// }

// LPSTR GetCommandLineA(void)
//
//{
//     LPSTR pCVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb278. Too many branches
//     // WARNING: Treating indirect jump as call
//     pCVar1 = GetCommandLineA();
//     return pCVar1;
// }

// u32 GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, nSize: u32)
//
//{
//     u32 DVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb27e. Too many branches
//     // WARNING: Treating indirect jump as call
//     DVar1 = GetModuleFileNameA(hModule, lpFilename, nSize);
//     return DVar1;
// }

// u32 GetVersion(void)
//
//{
//     u32 DVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb284. Too many branches
//     // WARNING: Treating indirect jump as call
//     DVar1 = GetVersion();
//     return DVar1;
// }
//
// LPCH GetEnvironmentStrings(void)
//
//{
//     LPCH pCVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb28a. Too many branches
//     // WARNING: Treating indirect jump as call
//     pCVar1 = GetEnvironmentStrings();
//     return pCVar1;
// }
//
// BOOL CloseHandle(HANDLE hObject)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb290. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = CloseHandle(hObject);
//     return BVar1;
// }
//
// HANDLE CreateFileA(LPCSTR lpFileName, dwDesiredAccess: u32, dwShareMode: u32, LPSECURITY_ATTRIBUTES lpSecurityAttributes,
//                    dwCreationDisposition: u32, dwFlagsAndAttributes: u32, HANDLE hTemplateFile)
//
//{
//     HANDLE pvVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb296. Too many branches
//     // WARNING: Treating indirect jump as call
//     pvVar1 = CreateFileA(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition,
//                          dwFlagsAndAttributes, hTemplateFile);
//     return pvVar1;
// }
//
// u32 GetLastError(void)
//
//{
//     u32 DVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb29c. Too many branches
//     // WARNING: Treating indirect jump as call
//     DVar1 = GetLastError();
//     return DVar1;
// }
//
// BOOL ReadFile(HANDLE hFile, LPVOID lpBuffer, nNumberOfBytesToRead: u32, Lu32* lpNumberOfBytesRead,
//               LPOVERLAPPED lpOverlapped)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2a2. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
//     return BVar1;
// }
//
// BOOL MoveFileA(LPCSTR lpExistingFileName, LPCSTR lpNewFileName)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2a8. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = MoveFileA(lpExistingFileName, lpNewFileName);
//     return BVar1;
// }
//
// u32 GetWindowsDirectoryA(LPSTR lpBuffer, uSize: u32)
//
//{
//     u32 UVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2ae. Too many branches
//     // WARNING: Treating indirect jump as call
//     UVar1 = GetWindowsDirectoryA(lpBuffer, uSize);
//     return UVar1;
// }
//
// MCIERROR mciSendCommandA(MCIDEVICEID mciId, uMsg: u32, u32_PTR dwParam1, u32_PTR dwParam2)
//
//{
//     MCIERROR MVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2b4. Too many branches
//     // WARNING: Treating indirect jump as call
//     MVar1 = mciSendCommandA(mciId, uMsg, dwParam1, dwParam2);
//     return MVar1;
// }
//
// BOOL mciGetErrorStringA(MCIERROR mcierr, LPSTR pszText, cchText: u32)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2ba. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = mciGetErrorStringA(mcierr, pszText, cchText);
//     return BVar1;
// }
//
// BOOL GetExitCodeProcess(HANDLE hProcess, Lu32* lpExitCode)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2c0. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = GetExitCodeProcess(hProcess, lpExitCode);
//     return BVar1;
// }
//
// BOOL CreateProcessA(LPCSTR lpApplicationName, LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes,
//                     LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, dwCreationFlags: u32,
//                     LPVOID lpEnvironment, LPCSTR lpCurrentDirectory, LPSTARTUPINFOA lpStartupInfo,
//                     LPPROCESS_INFORMATION lpProcessInformation)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2c6. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = CreateProcessA(lpApplicationName, lpCommandLine, lpProcessAttributes, lpThreadAttributes, bInheritHandles,
//                            dwCreationFlags, lpEnvironment, lpCurrentDirectory, lpStartupInfo, lpProcessInformation);
//     return BVar1;
// }
//
// BOOL FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2cc. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = FindNextFileA(hFindFile, lpFindFileData);
//     return BVar1;
// }
//
// BOOL ScreenToClient(HWND hWnd, LPPOi16 lpPoi16)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2d2. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = ScreenToClient(hWnd, lpPoi16);
//     return BVar1;
// }
//
// BOOL GetCursorPos(LPPOi16 lpPoi16)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2d8. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = GetCursorPos(lpPoi16);
//     return BVar1;
// }
//
// LRESULT DispatchMessageA(MSG *lpMsg)
//
//{
//     LRESULT LVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2de. Too many branches
//     // WARNING: Treating indirect jump as call
//     LVar1 = DispatchMessageA(lpMsg);
//     return LVar1;
// }
//
// BOOL TranslateMessage(MSG *lpMsg)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2e4. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = TranslateMessage(lpMsg);
//     return BVar1;
// }
//
// BOOL ReleaseCapture(void)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2ea. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = ReleaseCapture();
//     return BVar1;
// }
//
// HWND SetCapture(HWND hWnd)
//
//{
//     HWND pHVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2f0. Too many branches
//     // WARNING: Treating indirect jump as call
//     pHVar1 = SetCapture(hWnd);
//     return pHVar1;
// }
//
// BOOL PeekMessageA(LPMSG lpMsg, HWND hWnd, wMsgFilterMin: u32, wMsgFilterMax: u32, wRemoveMsg: u32)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2f6. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = PeekMessageA(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
//     return BVar1;
// }
//
// MMRESULT timeEndPeriod(uPeriod: u32)
//
//{
//     MMRESULT MVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb2fc. Too many branches
//     // WARNING: Treating indirect jump as call
//     MVar1 = timeEndPeriod(uPeriod);
//     return MVar1;
// }
//
// MMRESULT timeBeginPeriod(uPeriod: u32)
//
//{
//     MMRESULT MVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb302. Too many branches
//     // WARNING: Treating indirect jump as call
//     MVar1 = timeBeginPeriod(uPeriod);
//     return MVar1;
// }
//
// BOOL ValidateRect(HWND hWnd, RECT *lpRect)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb308. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = ValidateRect(hWnd, lpRect);
//     return BVar1;
// }
//
// BOOL GetUpdateRect(HWND hWnd, LPRECT lpRect, BOOL bErase)
//
//{
//     BOOL BVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb30e. Too many branches
//     // WARNING: Treating indirect jump as call
//     BVar1 = GetUpdateRect(hWnd, lpRect, bErase);
//     return BVar1;
// }
//
// HCURSOR SetCursor(HCURSOR hCursor)
//
//{
//     HCURSOR pHVar1;
//
//     // WARNING: Could not recover jumptable at 0x004bb314. Too many branches
//     // WARNING: Treating indirect jump as call
//     pHVar1 = SetCursor(hCursor);
//     return pHVar1;
// }
//
//// WARNING: Exceeded maximum restarts with more pending
//
// void ExitProcess(uExitCode: u32)
//
//{
//    // WARNING: Could not recover jumptable at 0x004bb31a. Too many branches
//    // WARNING: Treating indirect jump as call
//    ExitProcess();
//    return;
//}
//
// LRESULT DefWindowProcA(HWND hWnd, Msg: u32, WPARAM wParam, LPARAM lParam)
//
//{
//    LRESULT LVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb320. Too many branches
//    // WARNING: Treating indirect jump as call
//    LVar1 = DefWindowProcA(hWnd, Msg, wParam, lParam);
//    return LVar1;
//}
//
// void PostQuitMessage(i16 nExitCode)
//
//{
//    // WARNING: Could not recover jumptable at 0x004bb326. Too many branches
//    // WARNING: Treating indirect jump as call
//    PostQuitMessage(nExitCode);
//    return;
//}
//
// HWND CreateWindowExA(dwExStyle: u32, LPCSTR lpClassName, LPCSTR lpWindowName, dwStyle: u32, X: i16, Y: i16, nWidth: i16,
//                     nHeight: i16, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam)
//
//{
//    HWND pHVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb32c. Too many branches
//    // WARNING: Treating indirect jump as call
//    pHVar1 = CreateWindowExA(dwExStyle, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight, hWndParent, hMenu, hInstance,
//                             lpParam);
//    return pHVar1;
//}
//
// BOOL SetForegroundWindow(HWND hWnd)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb332. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = SetForegroundWindow(hWnd);
//    return BVar1;
//}
//
// ATOM RegisterClassA(WNDCLASSA *lpWndClass)
//
//{
//    ATOM AVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb338. Too many branches
//    // WARNING: Treating indirect jump as call
//    AVar1 = RegisterClassA(lpWndClass);
//    return AVar1;
//}
//
// HICON LoadIconA(HINSTANCE hInstance, LPCSTR lpIconName)
//
//{
//    HICON pHVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb33e. Too many branches
//    // WARNING: Treating indirect jump as call
//    pHVar1 = LoadIconA(hInstance, lpIconName);
//    return pHVar1;
//}
//
// HCURSOR LoadCursorA(HINSTANCE hInstance, LPCSTR lpCursorName)
//
//{
//    HCURSOR pHVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb344. Too many branches
//    // WARNING: Treating indirect jump as call
//    pHVar1 = LoadCursorA(hInstance, lpCursorName);
//    return pHVar1;
//}
//
// HWND FindWindowA(LPCSTR lpClassName, LPCSTR lpWindowName)
//
//{
//    HWND pHVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb34a. Too many branches
//    // WARNING: Treating indirect jump as call
//    pHVar1 = FindWindowA(lpClassName, lpWindowName);
//    return pHVar1;
//}
//
// BOOL SetCurrentDirectoryA(LPCSTR lpPathName)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb350. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = SetCurrentDirectoryA(lpPathName);
//    return BVar1;
//}
//
// i16 ReleaseDC(HWND hWnd, HDC hDC)
//
//{
//    i16 iVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb356. Too many branches
//    // WARNING: Treating indirect jump as call
//    iVar1 = ReleaseDC(hWnd, hDC);
//    return iVar1;
//}
//
// u32 GetSystemPaletteEntries(HDC hdc, iStart: u32, cEntries: u32, LPPALETTEENTRY pPalEntries)
//
//{
//    u32 UVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb35c. Too many branches
//    // WARNING: Treating indirect jump as call
//    UVar1 = GetSystemPaletteEntries(hdc, iStart, cEntries, pPalEntries);
//    return UVar1;
//}
//
// i16 GetDeviceCaps(HDC hdc, i16 index)
//
//{
//    i16 iVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb362. Too many branches
//    // WARNING: Treating indirect jump as call
//    iVar1 = GetDeviceCaps(hdc, index);
//    return iVar1;
//}
//
// HDC GetDC(HWND hWnd)
//
//{
//    HDC pHVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb368. Too many branches
//    // WARNING: Treating indirect jump as call
//    pHVar1 = GetDC(hWnd);
//    return pHVar1;
//}
//
// BOOL FindClose(HANDLE hFindFile)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb36e. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = FindClose(hFindFile);
//    return BVar1;
//}
//
// HANDLE FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData)
//
//{
//    HANDLE pvVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb374. Too many branches
//    // WARNING: Treating indirect jump as call
//    pvVar1 = FindFirstFileA(lpFileName, lpFindFileData);
//    return pvVar1;
//}
//
// u32 timeGetTime(void)
//
//{
//    u32 DVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb37a. Too many branches
//    // WARNING: Treating indirect jump as call
//    DVar1 = timeGetTime();
//    return DVar1;
//}
//
// BOOL WritePrivateProfileStringA(LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpString, LPCSTR lpFileName)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb380. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = WritePrivateProfileStringA(lpAppName, lpKeyName, lpString, lpFileName);
//    return BVar1;
//}
//
// i16 ShowCursor(BOOL bShow)
//
//{
//    i16 iVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb386. Too many branches
//    // WARNING: Treating indirect jump as call
//    iVar1 = ShowCursor(bShow);
//    return iVar1;
//}
//
// u32 GetPrivateProfilei16A(LPCSTR lpAppName, LPCSTR lpKeyName, nDefault: i16, LPCSTR lpFileName)
//
//{
//    u32 UVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb38c. Too many branches
//    // WARNING: Treating indirect jump as call
//    UVar1 = GetPrivateProfilei16A(lpAppName, lpKeyName, nDefault, lpFileName);
//    return UVar1;
//}
//
// i16 MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, uType: u32)
//
//{
//    i16 iVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb392. Too many branches
//    // WARNING: Treating indirect jump as call
//    iVar1 = MessageBoxA(hWnd, lpText, lpCaption, uType);
//    return iVar1;
//}
//
// LSTATUS RegQueryValueExA(HKEY hKey, LPCSTR lpValueName, Lu32* lpReserved, Lu32* lpType, LPBYTE lpData, Lu32* lpcbData)
//
//{
//    LSTATUS LVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb398. Too many branches
//    // WARNING: Treating indirect jump as call
//    LVar1 = RegQueryValueExA(hKey, lpValueName, lpReserved, lpType, lpData, lpcbData);
//    return LVar1;
//}
//
// LSTATUS RegOpenKeyExA(HKEY hKey, LPCSTR lpSubKey, ulOptions: u32, REGSAM samDesired, PHKEY phkResult)
//
//{
//    LSTATUS LVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb39e. Too many branches
//    // WARNING: Treating indirect jump as call
//    LVar1 = RegOpenKeyExA(hKey, lpSubKey, ulOptions, samDesired, phkResult);
//    return LVar1;
//}
//
// void Sleep(dwMilliseconds: u32)
//
//{
//    // WARNING: Could not recover jumptable at 0x004bb3a4. Too many branches
//    // WARNING: Treating indirect jump as call
//    Sleep(dwMilliseconds);
//    return;
//}
//
// LRESULT SendMessageA(HWND hWnd, Msg: u32, WPARAM wParam, LPARAM lParam)
//
//{
//    LRESULT LVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3aa. Too many branches
//    // WARNING: Treating indirect jump as call
//    LVar1 = SendMessageA(hWnd, Msg, wParam, lParam);
//    return LVar1;
//}
//
// BOOL SetEnvironmentVariableW(LPCWSTR lpName, LPCWSTR lpValue)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3b0. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = SetEnvironmentVariableW(lpName, lpValue);
//    return BVar1;
//}
//
// u32 CharUpperBuffA(LPSTR lpsz, cchLength: u32)
//
//{
//    u32 DVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3b6. Too many branches
//    // WARNING: Treating indirect jump as call
//    DVar1 = CharUpperBuffA(lpsz, cchLength);
//    return DVar1;
//}
//
// BOOL SetEnvironmentVariableA(LPCSTR lpName, LPCSTR lpValue)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3bc. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = SetEnvironmentVariableA(lpName, lpValue);
//    return BVar1;
//}
//
//// WARNING: Exceeded maximum restarts with more pending
//
// void ExitThread(dwExitCode: u32)
//
//{
//    // WARNING: Could not recover jumptable at 0x004bb3c2. Too many branches
//    // WARNING: Treating indirect jump as call
//    ExitThread();
//    return;
//}
//
// u32 WaitForSingleObject(HANDLE hHandle, dwMilliseconds: u32)
//
//{
//    u32 DVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3c8. Too many branches
//    // WARNING: Treating indirect jump as call
//    DVar1 = WaitForSingleObject(hHandle, dwMilliseconds);
//    return DVar1;
//}
//
// HANDLE CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress,
//                    LPVOID lpParameter, dwCreationFlags: u32, Lu32* lpThreadId)
//
//{
//    HANDLE pvVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3ce. Too many branches
//    // WARNING: Treating indirect jump as call
//    pvVar1 = CreateThread(lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, dwCreationFlags, lpThreadId);
//    return pvVar1;
//}
//
// HANDLE GetCurrentThread(void)
//
//{
//    HANDLE pvVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3d4. Too many branches
//    // WARNING: Treating indirect jump as call
//    pvVar1 = GetCurrentThread();
//    return pvVar1;
//}
//
// BOOL SetEvent(HANDLE hEvent)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3da. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = SetEvent(hEvent);
//    return BVar1;
//}
//
// BOOL GetCPInfo(CodePage: u32, LPCPINFO lpCPInfo)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3e0. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = GetCPInfo(CodePage, lpCPInfo);
//    return BVar1;
//}
//
// u32 GetOEMCP(void)
//
//{
//    u32 UVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3e6. Too many branches
//    // WARNING: Treating indirect jump as call
//    UVar1 = GetOEMCP();
//    return UVar1;
//}
//
// u32 GetACP(void)
//
//{
//    u32 UVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3ec. Too many branches
//    // WARNING: Treating indirect jump as call
//    UVar1 = GetACP();
//    return UVar1;
//}
//
// BOOL SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine, BOOL Add)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3f2. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = SetConsoleCtrlHandler(HandlerRoutine, Add);
//    return BVar1;
//}
//
// BOOL FreeEnvironmentStringsA(LPCH param_1)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3f8. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = FreeEnvironmentStringsA(param_1);
//    return BVar1;
//}
//
// i16 WideCharToMultiByte(CodePage: u32, dwFlags: u32, LPCWSTR lpWideCharStr, cchWideChar: i16, LPSTR lpMultiByteStr,
//                        cbMultiByte: i16, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar)
//
//{
//    i16 iVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb3fe. Too many branches
//    // WARNING: Treating indirect jump as call
//    iVar1 = WideCharToMultiByte(CodePage, dwFlags, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, lpDefaultChar,
//                                lpUsedDefaultChar);
//    return iVar1;
//}
//
// BOOL WriteConsoleA(HANDLE hConsoleOutput, void *lpBuffer, nNumberOfCharsToWrite: u32, Lu32* lpNumberOfCharsWritten,
//                   LPVOID lpReserved)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb404. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = WriteConsoleA(hConsoleOutput, lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, lpReserved);
//    return BVar1;
//}
//
// BOOL SetConsoleMode(HANDLE hConsoleHandle, dwMode: u32)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb40a. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = SetConsoleMode(hConsoleHandle, dwMode);
//    return BVar1;
//}
//
// BOOL GetConsoleMode(HANDLE hConsoleHandle, Lu32* lpMode)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb410. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = GetConsoleMode(hConsoleHandle, lpMode);
//    return BVar1;
//}
//
// BOOL ReadConsoleInputA(HANDLE hConsoleInput, PINPUT_RECORD lpBuffer, nLength: u32, Lu32* lpNumberOfEventsRead)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb416. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = ReadConsoleInputA(hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
//    return BVar1;
//}
//
// u32 GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)
//
//{
//    u32 DVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb41c. Too many branches
//    // WARNING: Treating indirect jump as call
//    DVar1 = GetTimeZoneInformation(lpTimeZoneInformation);
//    return DVar1;
//}
//
// BOOL FlushFileBuffers(HANDLE hFile)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb422. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = FlushFileBuffers(hFile);
//    return BVar1;
//}
//
// u32 GetCurrentDirectoryA(nBufferLength: u32, LPSTR lpBuffer)
//
//{
//    u32 DVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb428. Too many branches
//    // WARNING: Treating indirect jump as call
//    DVar1 = GetCurrentDirectoryA(nBufferLength, lpBuffer);
//    return DVar1;
//}
//
// u32 GetFullPathNameA(LPCSTR lpFileName, nBufferLength: u32, LPSTR lpBuffer, LPSTR *lpFilePart)
//
//{
//    u32 DVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb42e. Too many branches
//    // WARNING: Treating indirect jump as call
//    DVar1 = GetFullPathNameA(lpFileName, nBufferLength, lpBuffer, lpFilePart);
//    return DVar1;
//}
//
// u32 GetFileAttributesA(LPCSTR lpFileName)
//
//{
//    u32 DVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb434. Too many branches
//    // WARNING: Treating indirect jump as call
//    DVar1 = GetFileAttributesA(lpFileName);
//    return DVar1;
//}
//
// LPTOP_LEVEL_EXCEPTION_FILTER SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
//
//{
//    LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb43a. Too many branches
//    // WARNING: Treating indirect jump as call
//    pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
//    return pPVar1;
//}
//
// LONG UnhandledExceptionFilter(_EXCEPTION_POi16ERS *ExceptionInfo)
//
//{
//    LONG LVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb440. Too many branches
//    // WARNING: Treating indirect jump as call
//    LVar1 = UnhandledExceptionFilter(ExceptionInfo);
//    return LVar1;
//}
//
// FARPROC GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
//
//{
//    FARPROC pFVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb446. Too many branches
//    // WARNING: Treating indirect jump as call
//    pFVar1 = GetProcAddress(hModule, lpProcName);
//    return pFVar1;
//}
//
// HMODULE LoadLibraryA(LPCSTR lpLibFileName)
//
//{
//    HMODULE pHVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb44c. Too many branches
//    // WARNING: Treating indirect jump as call
//    pHVar1 = LoadLibraryA(lpLibFileName);
//    return pHVar1;
//}
//
// SIZE_T VirtualQuery(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength)
//
//{
//    SIZE_T SVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb452. Too many branches
//    // WARNING: Treating indirect jump as call
//    SVar1 = VirtualQuery(lpAddress, lpBuffer, dwLength);
//    return SVar1;
//}
//
// i16 MultiByteToWideChar(CodePage: u32, dwFlags: u32, LPCSTR lpMultiByteStr, cbMultiByte: i16, LPWSTR lpWideCharStr,
//                        i16 cchWideChar)
//
//{
//    i16 iVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb458. Too many branches
//    // WARNING: Treating indirect jump as call
//    iVar1 = MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
//    return iVar1;
//}
//
// u32 GetModuleFileNameW(HMODULE hModule, LPWSTR lpFilename, nSize: u32)
//
//{
//    u32 DVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb45e. Too many branches
//    // WARNING: Treating indirect jump as call
//    DVar1 = GetModuleFileNameW(hModule, lpFilename, nSize);
//    return DVar1;
//}
//
// BOOL TlsFree(dwTlsIndex: u32)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb464. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = TlsFree(dwTlsIndex);
//    return BVar1;
//}
//
// BOOL TlsSetValue(dwTlsIndex: u32, LPVOID lpTlsValue)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb46a. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = TlsSetValue(dwTlsIndex, lpTlsValue);
//    return BVar1;
//}
//
// u32 TlsAlloc(void)
//
//{
//    u32 DVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb470. Too many branches
//    // WARNING: Treating indirect jump as call
//    DVar1 = TlsAlloc();
//    return DVar1;
//}
//
// void SetLastError(dwErrCode: u32)
//
//{
//    // WARNING: Could not recover jumptable at 0x004bb476. Too many branches
//    // WARNING: Treating indirect jump as call
//    SetLastError(dwErrCode);
//    return;
//}
//
// LPVOID TlsGetValue(dwTlsIndex: u32)
//
//{
//    LPVOID pvVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb47c. Too many branches
//    // WARNING: Treating indirect jump as call
//    pvVar1 = TlsGetValue(dwTlsIndex);
//    return pvVar1;
//}
//
// void LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
//
//{
//    // WARNING: Could not recover jumptable at 0x004bb482. Too many branches
//    // WARNING: Treating indirect jump as call
//    LeaveCriticalSection(lpCriticalSection);
//    return;
//}
//
// void EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
//
//{
//    // WARNING: Could not recover jumptable at 0x004bb488. Too many branches
//    // WARNING: Treating indirect jump as call
//    EnterCriticalSection(lpCriticalSection);
//    return;
//}
//
// u32 GetCurrentThreadId(void)
//
//{
//    u32 DVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb48e. Too many branches
//    // WARNING: Treating indirect jump as call
//    DVar1 = GetCurrentThreadId();
//    return DVar1;
//}
//
// void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
//
//{
//    // WARNING: Could not recover jumptable at 0x004bb494. Too many branches
//    // WARNING: Treating indirect jump as call
//    DeleteCriticalSection(lpCriticalSection);
//    return;
//}
//
// void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
//
//{
//    // WARNING: Could not recover jumptable at 0x004bb49a. Too many branches
//    // WARNING: Treating indirect jump as call
//    InitializeCriticalSection(lpCriticalSection);
//    return;
//}
//
// u32 GetFileType(HANDLE hFile)
//
//{
//    u32 DVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb4a0. Too many branches
//    // WARNING: Treating indirect jump as call
//    DVar1 = GetFileType(hFile);
//    return DVar1;
//}
//
// HANDLE CreateEventA(LPSECURITY_ATTRIBUTES lpEventAttributes, BOOL bManualReset, BOOL bInitialState, LPCSTR lpName)
//
//{
//    HANDLE pvVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb4a6. Too many branches
//    // WARNING: Treating indirect jump as call
//    pvVar1 = CreateEventA(lpEventAttributes, bManualReset, bInitialState, lpName);
//    return pvVar1;
//}
//
// HANDLE GetStdHandle(nStdHandle: u32)
//
//{
//    HANDLE pvVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb4ac. Too many branches
//    // WARNING: Treating indirect jump as call
//    pvVar1 = GetStdHandle(nStdHandle);
//    return pvVar1;
//}
//
// BOOL SetStdHandle(nStdHandle: u32, HANDLE hHandle)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb4b2. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = SetStdHandle(nStdHandle, hHandle);
//    return BVar1;
//}
//
// LPVOID VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, flAllocationType: u32, flProtect: u32)
//
//{
//    LPVOID pvVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb4b8. Too many branches
//    // WARNING: Treating indirect jump as call
//    pvVar1 = VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect);
//    return pvVar1;
//}
//
// BOOL WriteFile(HANDLE hFile, LPCVOID lpBuffer, nNumberOfBytesToWrite: u32, Lu32* lpNumberOfBytesWritten,
//               LPOVERLAPPED lpOverlapped)
//
//{
//    BOOL BVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb4be. Too many branches
//    // WARNING: Treating indirect jump as call
//    BVar1 = WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
//    return BVar1;
//}
//
// void call_fn_ptr_004bb4c4(void)
//
//{
//    // WARNING: Could not recover jumptable at 0x004bb4c4. Too many branches
//    // WARNING: Treating indirect jump as call
//    (PTR_DAT_004bc448)();
//    return;
//}
//
//// WARNING: Unknown calling convention yet parameter storage is locked
//
// HRESULT DirectDrawCreate(GUID *lp_guid, LPDIRECTDRAW *lp_lp_dd, IUnknown *p_unk_outer)
//
//{
//    HRESULT HVar1;
//
//    // WARNING: Could not recover jumptable at 0x004bb4ca. Too many branches
//    // WARNING: Treating indirect jump as call
//    HVar1 = DirectDrawCreate(lp_guid, lp_lp_dd, p_unk_outer);
//    return HVar1;
//}

#pragma clang diagnostic pop